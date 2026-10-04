// decompiled from mhi by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08005000 (size 2568) =====

//WARNING: Switch with 1 destination removed at 0x08007f8c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x129f15881ea4c46c) {
        if (arg1 < -0x457eba10db41d913) {
            if (arg1 < -0x62673efe5b018057) {
                if (arg1 < -0x6adcd325f9643bc3) {
                    if (arg1 == -0x7b02c7802c33c26b) {
                        pcVar2 = sym.mhi_get_device_for_channel.cfi_jt;
                    }
                    else if (arg1 == -0x6e7ca3f28936e23c) {
                        pcVar2 = sym.mhi_get_free_desc_count.cfi_jt;
                    }
                    else {
                        if (arg1 != -0x6e4fa9d9ad20cdbd) goto code_r0x08007f4c;
                        pcVar2 = sym.__typeid__ZTSFvP10mhi_devicejyyE_global_addr;
                    }
                }
                else {
                    if (arg1 == -0x6adcd325f9643bc3) {
                        if ((pcVar1 + -0x8005c80 >> 3 | pcVar1 << 0x3d) < 8) {
                            return;
                        }
                        goto code_r0x08007f4c;
                    }
                    if (arg1 == -0x66d421a09845f9f8) {
                        if ((pcVar1 + -0x8005cc0 >> 3 | pcVar1 << 0x3d) < 5) {
                            return;
                        }
                        goto code_r0x08007f4c;
                    }
                    if (arg1 != -0x64b3d6f8e71fe10d) goto code_r0x08007f4c;
                    pcVar2 = sym.mhi_queue_dma.cfi_jt;
                }
            }
            else if (arg1 < -0x57be845bca9148ef) {
                if (arg1 == -0x62673efe5b018057) {
                    if ((pcVar1 + -0x8005c30 >> 3 | pcVar1 << 0x3d) < 10) {
                        return;
                    }
                    goto code_r0x08007f4c;
                }
                if (arg1 == -0x59a85bcf63dffd48) {
                    pcVar2 = sym.mhi_match.6ea9a53e17dc3aa18347e4cc921a30b8.cfi_jt;
                }
                else {
                    if (arg1 != -0x5912cf9cfaf64171) goto code_r0x08007f4c;
                    pcVar2 = sym.mhi_controller_get_base.cfi_jt;
                }
            }
            else {
                if (arg1 < -0x4f2ca7aa97e7efe5) {
                    if (arg1 != -0x57be845bca9148ef) {
                        if (arg1 != -0x550b9e52359ac614) goto code_r0x08007f4c;
                        pcVar2 = sym.mhi_pm_st_worker.cfi_jt;
                        goto code_r0x080058a0;
                    }
                    pcVar2 = sym.mhi_driver_probe.6ea9a53e17dc3aa18347e4cc921a30b8.cfi_jt;
                    goto code_r0x080059dc;
                }
                if (arg1 == -0x4f2ca7aa97e7efe5) {
                    pcVar2 = sym.__mhi_driver_register.cfi_jt;
                }
                else {
                    if (arg1 != -0x49b0dc8e708997f3) goto code_r0x08007f4c;
                    pcVar2 = sym.mhi_device_configure.cfi_jt;
                }
            }
        }
        else if (arg1 < -0x270f46795231edbe) {
            if (arg1 < -0x312cfb0913286f3d) {
                if (arg1 == -0x457eba10db41d913) {
                    pcVar2 = sym.__typeid__ZTSFvP14mhi_controllerbE_global_addr;
                }
                else {
                    if (arg1 != -0x3987c0e26ee29729) {
                        if (arg1 != -0x32a300b85161b51b) goto code_r0x08007f4c;
                        pcVar2 = sym.mhi_register_controller.cfi_jt;
                        goto code_r0x080059f8;
                    }
                    pcVar2 = sym.mhi_intvec_handler.cfi_jt;
                }
code_r0x080058a0:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                    return;
                }
                goto code_r0x08007f4c;
            }
            if (arg1 < -0x2d1c419c5ba15ff1) {
                if (arg1 != -0x312cfb0913286f3d) {
                    if (arg1 != -0x2d1ef4d8549a89e5) goto code_r0x08007f4c;
                    pcVar2 = sym.mhi_destroy_device.cfi_jt;
code_r0x080059dc:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                        return;
                    }
                    goto code_r0x08007f4c;
                }
                pcVar2 = sym.mhi_get_exec_env.cfi_jt;
            }
            else {
                if (arg1 != -0x2d1c419c5ba15ff1) {
                    if (arg1 != -0x2bde3f224c24837b) goto code_r0x08007f4c;
                    pcVar2 = sym.mhi_ev_task.cfi_jt;
                    goto code_r0x080059dc;
                }
                pcVar2 = sym.mhi_controller_set_sfr_support.cfi_jt;
            }
        }
        else {
            if (arg1 < -0x9072efc61a59241) {
                if (arg1 == -0x270f46795231edbe) {
                    if ((pcVar1 + -0x8005bc0 >> 3 | pcVar1 << 0x3d) < 4) {
                        return;
                    }
                    goto code_r0x08007f4c;
                }
                if (arg1 == -0x219d36d1fd911071) {
                    pcVar2 = sym.__typeid__ZTSFvP14mhi_controllerP12mhi_buf_infoE_global_addr;
                }
                else {
                    if (arg1 != -0x17f0744aba90dd25) goto code_r0x08007f4c;
                    pcVar2 = sym.__typeid__ZTSFvP14mhi_controllerP6db_cfgPvyE_global_addr;
                }
                goto code_r0x080059dc;
            }
            if (arg1 < 0x88c9a015f85fcdb) {
                if (arg1 == -0x9072efc61a59241) {
                    pcVar2 = sym.mhi_driver_unregister.cfi_jt;
                }
                else {
                    if (arg1 != 0x2b3a43e29242445) goto code_r0x08007f4c;
                    pcVar2 = sym.init_module.cfi_jt;
                }
            }
            else {
                if (arg1 == 0x88c9a015f85fcdb) {
                    pcVar2 = sym.__typeid__ZTSFiP14mhi_controllerP12mhi_buf_infoE_global_addr;
                    goto code_r0x080059dc;
                }
                if (arg1 != 0xa1a58673935a3da) goto code_r0x08007f4c;
                pcVar2 = sym.mhi_bdf_to_controller.cfi_jt;
            }
        }
    }
    else if (arg1 < 0x5b83a3fd302a5421) {
        if (arg1 < 0x3b713d5b73ecff39) {
            if (arg1 < 0x253e81ee418ea41b) {
                if (arg1 == 0x129f15881ea4c46c) {
                    pcVar2 = sym.mhi_get_event_ring_db_base.cfi_jt;
                    goto code_r0x080059dc;
                }
                if (arg1 == 0x1b9923dd54b914ee) {
                    pcVar2 = sym.mhi_controller_set_loglevel.cfi_jt;
                }
                else {
                    if (arg1 != 0x1e3d0ffe3d0499e9) goto code_r0x08007f4c;
                    pcVar2 = sym.log_level_store.74907ba8ca9a47fec9848b5e279d5fb3.cfi_jt;
                }
            }
            else if (arg1 == 0x253e81ee418ea41b) {
                pcVar2 = sym.mhi_get_remote_time_sync.cfi_jt;
            }
            else if (arg1 == 0x272b72843434bc39) {
                pcVar2 = sym.mhi_controller_set_bw_scale_cb.cfi_jt;
            }
            else {
                if (arg1 != 0x38cd3e182e1e402e) goto code_r0x08007f4c;
                pcVar2 = sym.mhi_scan_rddm_cookie.cfi_jt;
            }
        }
        else if (arg1 < 0x4312bf0efd55c741) {
            if (arg1 == 0x3b713d5b73ecff39) {
                pcVar2 = sym.mhi_queue_is_full.cfi_jt;
            }
            else {
                if (arg1 != 0x3d4dbd3b8044b8ac) {
                    if (arg1 != 0x42234f95416f3ec3) goto code_r0x08007f4c;
                    pcVar2 = sym.mhi_stop_transfer.cfi_jt;
                    goto code_r0x080058a0;
                }
                pcVar2 = sym.mhi_queue_skb.cfi_jt;
            }
        }
        else if (arg1 < 0x4fd975e65a90c016) {
            if (arg1 == 0x4312bf0efd55c741) {
                pcVar2 = sym.mhi_set_m2_timeout_ms.cfi_jt;
            }
            else {
                if (arg1 != 0x47be4350f8deeb3a) goto code_r0x08007f4c;
                pcVar2 = sym.mhi_device_get_sync_atomic.cfi_jt;
            }
        }
        else {
            if (arg1 != 0x4fd975e65a90c016) {
                if (arg1 != 0x5b2146f2d11fab57) goto code_r0x08007f4c;
                pcVar2 = sym.mhi_prepare_for_transfer.cfi_jt;
                goto code_r0x080059dc;
            }
            pcVar2 = sym.mhi_controller_setup_timesync.cfi_jt;
        }
    }
    else if (arg1 < 0x69da918720b800e0) {
        if (arg1 < 0x661ef01921af561e) {
            if (arg1 == 0x5b83a3fd302a5421) {
                pcVar2 = sym.mhi_release_device.6ea9a53e17dc3aa18347e4cc921a30b8.cfi_jt;
            }
            else if (arg1 == 0x603592a1918bce94) {
                pcVar2 = sym.mhi_get_mhi_state.cfi_jt;
            }
            else {
                if (arg1 != 0x63329aaedc93fc82) goto code_r0x08007f4c;
                pcVar2 = sym.mhi_controller_set_privdata.cfi_jt;
            }
        }
        else if (arg1 < 0x67c2bfc8a39f0544) {
            if (arg1 != 0x661ef01921af561e) {
                if (arg1 != 0x674e362ac05188db) goto code_r0x08007f4c;
                pcVar2 = sym.mhi_pm_fast_suspend.cfi_jt;
                goto code_r0x080058a0;
            }
            pcVar2 = sym.mhi_alloc_controller.cfi_jt;
        }
        else if (arg1 == 0x67c2bfc8a39f0544) {
            pcVar2 = sym.mhi_queue_buf.cfi_jt;
        }
        else {
            if (arg1 != 0x67f3a51ad5c16f72) goto code_r0x08007f4c;
            pcVar2 = sym.__typeid__ZTSFvP10mhi_device12mhi_callbackE_global_addr;
        }
    }
    else if (arg1 < 0x70426f810fc712be) {
        if (arg1 == 0x69da918720b800e0) {
            pcVar2 = sym.mhi_get_remote_time.cfi_jt;
        }
        else {
            if (arg1 != 0x6e6aeb60c4714584) {
                if (arg1 != 0x6e9fb1c868c44dc4) goto code_r0x08007f4c;
                pcVar2 = sym.__typeid__ZTSFvP10mhi_deviceE_global_addr;
                goto code_r0x080058a0;
            }
            pcVar2 = sym.mhi_controller_set_base.cfi_jt;
        }
    }
    else if (arg1 < 0x7e04a0fb7ad8bcd5) {
        if (arg1 == 0x70426f810fc712be) {
            pcVar2 = sym.mhi_controller_get_numeric_id.cfi_jt;
        }
        else {
            if (arg1 != 0x76182c68fb3000dc) goto code_r0x08007f4c;
            pcVar2 = sym.mhi_uevent.6ea9a53e17dc3aa18347e4cc921a30b8.cfi_jt;
        }
    }
    else if (arg1 == 0x7e04a0fb7ad8bcd5) {
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    else {
        if (arg1 != 0x7e63e1b888986656) goto code_r0x08007f4c;
        pcVar2 = sym.mhi_controller_get_privdata.cfi_jt;
    }
code_r0x080059f8:
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08007f4c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8007fa0);
    (*pcVar1)();
}


// ===== sym.mhi_bdf_to_controller.cfi_jt @ 0x08005a10 (size 8) =====

int64_t sym.mhi_bdf_to_controller.cfi_jt(uint param_1,uint param_2,uint param_3,ulong param_4)

{
    int iVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar6;
    int64_t iVar7;
    code *pcVar8;
    int64_t *piVar9;
    ulong uVar10;
    int64_t iVar11;
    ulong unaff_x30;
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
    snprintf(&uStack_58,0x20,"mhi_%04x_%02u.%02u.%02u",param_4,param_1,param_2,param_3);
    pcVar8 = _obj.mhi_register_controller.__key;
    do {
        if (pcVar8 == obj.mhi_register_controller.__key) {
            iVar6 = 0;
            break;
        }
        iVar6 = *(pcVar8 + 0x10);
        pcVar8 = *pcVar8;
    } while ((*(*(iVar6 + 8) + 8) == 0) || (iVar1 = strcmp(&uStack_58), iVar1 != 0));
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return iVar6;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.mhi_report_error;
    if (iVar6 == 0) {
        iVar6 = 0xffffffea;
    }
    else {
        iVar11 = *(iVar6 + 8);
        iVar5 = iVar6 + 0x170;
        piVar9 = *(*(iVar11 + 0xc0) + 0x60);
        uVar2 = _raw_write_lock_irqsave(iVar5);
        iVar1 = sym.mhi_tryset_pm_state(iVar6,0x100);
        if (iVar1 == 0x100) {
            *(iVar6 + 0x188) = 0xff;
            __wake_up(iVar6 + 0x208,3,0,0);
            _raw_write_unlock_irqrestore(iVar5,uVar2);
            if ((piVar9 != NULL) && (*piVar9 != 0)) {
                memcpy(piVar9[3],*piVar9,piVar9[2]);
                iVar5 = *(iVar11 + 0x98);
                iVar7 = *(*(iVar6 + 8) + 0xc0);
                if (iVar5 == 0) {
                    iVar5 = *(iVar11 + 0x28);
                }
                _dev_err(iVar11 + 0x28,"[E][%s] mhi: %s sfr: %s\n","mhi_report_error",iVar5,*piVar9);
                if ((iVar7 != 0) && (*(iVar7 + 0x18) < 3)) {
                    iVar5 = *(iVar11 + 0x98);
                    if (iVar5 == 0) {
                        iVar5 = *(iVar11 + 0x28);
                    }
                    ipc_log_string(*(iVar7 + 0x20),"[E][%s] mhi: %s sfr: %s\n","mhi_report_error",iVar5,*piVar9);
                }
            }
            device_for_each_child
                      (*(iVar6 + 8) + 0x28,0,sym.mhi_notify_fatal_cb.74907ba8ca9a47fec9848b5e279d5fb3.cfi_jt);
            iVar6 = 0;
        }
        else {
            iVar7 = *(*(iVar6 + 8) + 0xc0);
            uVar3 = sym.to_mhi_pm_state_str(0x100);
            uVar4 = sym.to_mhi_pm_state_str(*(iVar6 + 0x17c));
            _dev_err(iVar11 + 0x28,"[E][%s] Failed to move to state: %s from: %s\n","mhi_report_error",uVar3,uVar4);
            if ((iVar7 != 0) && (*(iVar7 + 0x18) < 3)) {
                uVar10 = *(iVar7 + 0x20);
                uVar3 = sym.to_mhi_pm_state_str(0x100);
                uVar4 = sym.to_mhi_pm_state_str(*(iVar6 + 0x17c));
                ipc_log_string(uVar10,"[E][%s] Failed to move to state: %s from: %s\n","mhi_report_error",uVar3,
                               uVar4);
            }
            _raw_write_unlock_irqrestore(iVar5,uVar2);
            iVar6 = 0xffffffff;
        }
    }
    return iVar6;
}


// ===== sym.mhi_get_remote_time.cfi_jt @ 0x08005a18 (size 8) =====

int sym.mhi_get_remote_time.cfi_jt(int64_t param_1,uint param_2,int64_t param_3)

{
    uint32_t uVar1;
    int iVar2;
    ulong uVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    char *pcVar6;
    int64_t iVar7;
    ulong *in_x18;
    int64_t iVar8;
    code *pcVar9;
    ulong uVar10;
    ulong *puVar11;
    ulong *puVar12;
    int64_t iVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(param_1 + 0x10);
    iVar13 = *(iVar8 + 8);
    puVar12 = *(*(iVar13 + 0xc0) + 0x68);
    if ((puVar12 == NULL) || (puVar12[4] == 0)) {
        return -0x16;
    }
    mutex_lock(puVar12 + 0x10);
    iVar2 = sym.mhi_device_get_sync(*(iVar8 + 8));
    if (iVar2 != 0) goto code_r0x0801597c;
    pcVar9 = *(iVar8 + 0x240);
    if (9 < (pcVar9 + -0x8005c30 >> 3 | pcVar9 << 0x3d)) {
        __cfi_slowpath_diag(0x9d98c101a4fe7fa9,pcVar9,0x8001300);
    }
    (*pcVar9)(iVar8);
    iVar7 = *(*(iVar8 + 8) + 0xc0);
    if ((iVar7 != 0) && (*(iVar7 + 0x18) < 2)) {
        uVar10 = *(iVar7 + 0x20);
        uVar3 = sym.to_mhi_pm_state_str(*(iVar8 + 0x17c));
        uVar1 = *(iVar8 + 0x188);
        pcVar6 = "INVALID_STATE";
        if ((uVar1 < 0x100) && (0xf6 < uVar1 - 8)) {
            pcVar6 = *(reloc..str.14.llvm.39275123862783422 + uVar1 * 8);
        }
        ipc_log_string(uVar10,"[I][%s] Enter with pm_state:%s MHI_STATE:%s\n","mhi_get_remote_time",uVar3,pcVar6);
    }
    iVar7 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar7 = 0x30;
    }
    piVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar7),0xb20,0x30);
    if (piVar4 == NULL) {
        iVar2 = -0xc;
code_r0x080157dc:
        pcVar9 = *(iVar8 + 0x248);
        if (7 < (pcVar9 + -0x8005c80 >> 3 | pcVar9 << 0x3d)) {
            __cfi_slowpath_diag(0x95232cda069bc43d,pcVar9,0x80013a0);
        }
        (*pcVar9)(iVar8);
        sym.mhi_device_put(*(iVar8 + 8));
    }
    else {
        *(piVar4 + 2) = param_2;
        piVar4[4] = param_1;
        piVar4[5] = param_3;
        if (*(puVar12 + 8) == '\0') {
            pcVar9 = puVar12[1];
            iVar2 = 0;
            if (*(puVar12 + 5) != -2) {
                iVar2 = *(puVar12 + 5) + 1;
            }
            *(puVar12 + 5) = iVar2;
            if (9 < (pcVar9 + -0x8005c30 >> 3 | pcVar9 << 0x3d)) {
                __cfi_slowpath_diag(0x9d98c101a4fe7fa9,pcVar9,0x8001340);
            }
            iVar2 = (*pcVar9)(iVar8);
            if (iVar2 != 0) {
                iVar7 = *(*(iVar8 + 8) + 0xc0);
                _dev_err(iVar13 + 0x28,"[E][%s] LPM disable request failed for %s!\n","mhi_get_remote_time",
                         *(param_1 + 8));
                if ((iVar7 != 0) && (*(iVar7 + 0x18) < 3)) {
                    ipc_log_string(*(iVar7 + 0x20),"[E][%s] LPM disable request failed for %s!\n",
                                   "mhi_get_remote_time",*(param_1 + 8));
                }
                kfree(piVar4);
                goto code_r0x080157dc;
            }
            iVar7 = sp_el0;
            *(iVar7 + 0x10) = *(iVar7 + 0x10) + 1;
            uVar5 = daif;
            daif = uVar5 | 0xc0;
            pcVar9 = *puVar12;
            __cfi_slowpath_diag(0x60,0xb2e3bd30d10cd90e,pcVar9,0x8001360);
            uVar3 = (*pcVar9)(iVar8);
            puVar12[6] = uVar3;
            sym.mhi_write_reg(iVar8,puVar12[4],0,*(puVar12 + 5));
            DataSynchronizationBarrier(3,2,0);
            uVar5 = daif;
            daif = uVar5 & 0xffffffffffffff3f;
            iVar13 = *(iVar7 + 0x10) + -1;
            *(iVar7 + 0x10) = iVar13;
            if ((iVar13 == 0) || (*(iVar7 + 0x10) == 0)) {
                preempt_schedule();
            }
            pcVar9 = puVar12[2];
            if (9 < (pcVar9 + -0x8005c30 >> 3 | pcVar9 << 0x3d)) {
                __cfi_slowpath_diag(0x9d98c101a4fe7fa9,pcVar9,0x8001380);
            }
            (*pcVar9)(iVar8);
            iVar8 = *(*(iVar8 + 8) + 0xc0);
            if ((iVar8 != 0) && (*(iVar8 + 0x18) == 0)) {
                ipc_log_string(*(iVar8 + 0x20),"[D][%s] time DB request with seq:0x%llx\n","mhi_get_remote_time",
                               *(puVar12 + 5));
            }
            *(puVar12 + 9) = 0;
            *(puVar12 + 8) = 1;
            __init_swait_queue_head(puVar12 + 10,"&x->wait",obj.mhi_register_controller.__key);
        }
        else {
            pcVar9 = *(iVar8 + 0x248);
            if (7 < (pcVar9 + -0x8005c80 >> 3 | pcVar9 << 0x3d)) {
                __cfi_slowpath_diag(0x95232cda069bc43d,pcVar9,0x8001320);
            }
            (*pcVar9)(iVar8);
            sym.mhi_device_put(*(iVar8 + 8));
        }
        _raw_spin_lock(puVar12 + 0xd);
        puVar11 = puVar12[0xf];
        uVar5 = __list_add_valid(piVar4,puVar11,puVar12 + 0xe);
        if ((uVar5 & 1) != 0) {
            puVar12[0xf] = piVar4;
            *piVar4 = puVar12 + 0xe;
            piVar4[1] = puVar11;
            *puVar11 = piVar4;
        }
        _raw_spin_unlock(puVar12 + 0xd);
        iVar2 = 0;
    }
code_r0x0801597c:
    mutex_unlock(puVar12 + 0x10);
    return iVar2;
}


// ===== sym.mhi_controller_set_bw_scale_cb.cfi_jt @ 0x08005a20 (size 8) =====

void sym.mhi_controller_set_bw_scale_cb.cfi_jt(int64_t param_1,ulong param_2)

{
    *(*(*(param_1 + 8) + 0xc0) + 0x48) = param_2;
    return;
}


// ===== sym.mhi_alloc_controller.cfi_jt @ 0x08005a28 (size 8) =====

void sym.mhi_alloc_controller.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kmem_cache_alloc_trace(_free_irq,0xdc0,0x2a0);
    return;
}


// ===== sym.mhi_controller_set_loglevel.cfi_jt @ 0x08005a30 (size 8) =====

void sym.mhi_controller_set_loglevel.cfi_jt(int64_t param_1,uint param_2)

{
    *(*(*(param_1 + 8) + 0xc0) + 0x18) = param_2;
    return;
}


// ===== sym.mhi_queue_skb.cfi_jt @ 0x08005a38 (size 8) =====

ulong sym.mhi_queue_skb.cfi_jt(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,uint32_t param_5)

{
    int *piVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    char cVar5;
    bool bVar6;
    int iVar7;
    ulong uVar8;
    int iVar9;
    int64_t iVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t arg1;
    int64_t iVar11;
    code *pcVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    uint64_t uStack_38;
    ulong uStack_30;
    uint64_t uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_18 = *(iVar11 + 0x5e0);
    iVar11 = 0x18;
    if (param_2 != 1) {
        iVar11 = 0x20;
    }
    uStack_20 = 0;
    uStack_40 = 0;
    uStack_50 = *(param_3 + 0xd8);
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_38 = param_3;
    uStack_28 = param_4;
    if (*(*(param_1 + iVar11) + 0x18b) == '\0') {
        param_3 = param_2 & 0xffffffff;
        param_4 = param_5;
        uVar8 = sym.mhi_queue(param_1,&uStack_50,param_2,param_4);
    }
    else {
        uVar8 = 0xffffffea;
    }
    iVar9 = param_3;
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_18) {
        return uVar8;
    }
    auVar13 = __stack_chk_fail(uVar8);
    *extraout_x18 = sym.mhi_queue;
    arg1 = *(auVar13._0_8_ + 0x10);
    iVar11 = 0x18;
    if (iVar9 != 1) {
        iVar11 = 0x20;
    }
    if (0x7f < *(arg1 + 0x17c)) {
        return 0xfffffffb;
    }
    iVar11 = *(auVar13._0_8_ + iVar11);
    uVar2 = *(iVar11 + 0x98) + *(iVar11 + 0xa0);
    if (*(iVar11 + 0x88) + *(iVar11 + 0xa8) <= uVar2) {
        uVar2 = *(iVar11 + 0x88);
    }
    if (uVar2 == *(iVar11 + 0x90)) {
        return 0xfffffff5;
    }
    uVar8 = sym.mhi_gen_tre(arg1,iVar11,auVar13._8_8_,param_4);
    if (uVar8 != 0) {
        return uVar8;
    }
    pcVar12 = *(arg1 + 0x250);
    if (pcVar12 != NULL) {
        if (7 < (pcVar12 + -0x8005c80 >> 3 | pcVar12 << 0x3d)) {
            __cfi_slowpath_diag(0x95232cda069bc43d,pcVar12,0x8000d20);
        }
        (*pcVar12)(arg1);
    }
    uVar8 = _raw_read_lock_irqsave(arg1 + 0x170);
    if ((*(arg1 + 0x17c) & 0x30) != 0) {
        pm_wakeup_dev_event(*(arg1 + 8) + 0x28,0,0);
        pcVar12 = *(arg1 + 0x240);
        if (9 < (pcVar12 + -0x8005c30 >> 3 | pcVar12 << 0x3d)) {
            __cfi_slowpath_diag(0x9d98c101a4fe7fa9,pcVar12,0x8000ce0);
        }
        (*pcVar12)(arg1);
        pcVar12 = *(arg1 + 0x248);
        if (7 < (pcVar12 + -0x8005c80 >> 3 | pcVar12 << 0x3d)) {
            __cfi_slowpath_diag(0x95232cda069bc43d,pcVar12,0x8000d00);
        }
        (*pcVar12)(arg1);
    }
    pcVar12 = *(arg1 + 0x238);
    if (7 < (pcVar12 + -0x8005c80 >> 3 | pcVar12 << 0x3d)) {
        __cfi_slowpath_diag(0x95232cda069bc43d,pcVar12,0x8000d40);
    }
    (*pcVar12)(arg1);
    if (*(iVar11 + 0xd8) == 1) {
        piVar1 = arg1 + 400;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
                *piVar1 = *piVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
    }
    if ((*(arg1 + 0x180) & *(arg1 + 0x17c)) != 0) {
        if (*(iVar11 + 0xd4) == 3) {
            iVar10 = *(*(iVar11 + 0x110) + 0x20);
            uVar2 = *(iVar10 + 0x90);
            uVar4 = *(iVar10 + 0x98);
            if (uVar4 < uVar2) {
                iVar9 = 0;
                if (*(iVar10 + 0xa0) != 0) {
                    iVar9 = (uVar2 - uVar4) / *(iVar10 + 0xa0);
                }
            }
            else {
                uVar3 = *(iVar10 + 0xa0);
                iVar9 = 0;
                if (uVar3 != 0) {
                    iVar9 = (uVar2 - *(iVar10 + 0x88)) / uVar3;
                }
                iVar7 = 0;
                if (uVar3 != 0) {
                    iVar7 = ((*(iVar10 + 0x88) + *(iVar10 + 0xa8)) - uVar4) / uVar3;
                }
                iVar9 = iVar9 + iVar7;
            }
            if (*(iVar11 + 0xb0) - (iVar9 + -1) < 8) goto code_r0x0800b100;
        }
        DataMemoryBarrier(0,2);
        iVar10 = (*(iVar11 + 0x98) - *(iVar11 + 0x88)) + *(iVar11 + 0x70);
        **(iVar11 + 0x78) = iVar10;
        pcVar12 = *(iVar11 + 0xf8);
        if (1 < (pcVar12 + -0x8005ac8 >> 3 | pcVar12 << 0x3d)) {
            __cfi_slowpath_diag(0xe80f8bb5456f22db,pcVar12,0x8000b00);
        }
        (*pcVar12)(arg1,iVar11 + 0xe0,*(iVar11 + 0xc0),iVar10);
    }
code_r0x0800b100:
    _raw_read_unlock_irqrestore(arg1 + 0x170,uVar8);
    return 0;
}


// ===== sym.mhi_controller_get_numeric_id.cfi_jt @ 0x08005a40 (size 8) =====

uint sym.mhi_controller_get_numeric_id.cfi_jt(int64_t param_1)

{
    return *(*(*(param_1 + 8) + 0xc0) + 0x58);
}


// ===== sym.mhi_get_remote_time_sync.cfi_jt @ 0x08005a48 (size 8) =====

code * sym.mhi_get_remote_time_sync.cfi_jt(int64_t param_1,code *param_2,code *param_3)

{
    int64_t iVar1;
    uint64_t uVar2;
    int iVar3;
    uint32_t uVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong *puVar7;
    code *unaff_x21;
    code *unaff_x22;
    ulong uVar8;
    code *pcVar9;
    ulong *puVar10;
    int64_t iVar11;
    code *unaff_x26;
    int64_t iVar12;
    ulong unaff_x30;
    uint uStack_70;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    iVar6 = *(param_1 + 0x10);
    uStack_70 = 0xffffffff;
    uStack_6c = 0xffffffff;
    iVar11 = *(iVar6 + 8);
    puVar7 = *(iVar11 + 0xc0);
    puVar10 = puVar7[0xd];
    if (puVar10 == NULL) {
        pcVar9 = 0xffffffea;
        param_2 = unaff_x21;
        param_3 = unaff_x22;
    }
    else if (*(iVar6 + 0x17c) < 0x80) {
        puVar7 = puVar10 + 0x10;
        mutex_lock(puVar7);
        if (*(puVar10 + 8) == '\0') {
            uVar4 = sym.mhi_device_get_sync(*(iVar6 + 8));
            if (uVar4 != 0) goto code_r0x080152f0;
            pcVar9 = *(iVar6 + 0x240);
            unaff_x26 = sym.__typeid__ZTSFiP14mhi_controllerE_global_addr;
            if (9 < (pcVar9 + -0x8005c30 >> 3 | pcVar9 << 0x3d)) goto code_r0x080154d8;
            goto code_r0x080151b0;
        }
        uVar8 = puVar10[6];
        mutex_unlock(puVar7);
        puVar7 = puVar10 + 9;
        uVar5 = __msecs_to_jiffies(*(iVar6 + 0x178));
        iVar3 = wait_for_completion_timeout(puVar7,uVar5);
        if ((*(iVar6 + 0x17c) < 0x80) && (iVar3 != 0)) {
            *param_2 = uVar8;
            pcVar9 = NULL;
            *param_3 = puVar10[7];
        }
        else {
            iVar6 = *(*(iVar6 + 8) + 0xc0);
            _dev_err(iVar11 + 0x28,"[E][%s] Pending DB request did not complete, abort\n","mhi_get_remote_time_sync");
            if ((iVar6 != 0) && (*(iVar6 + 0x18) < 3)) {
                ipc_log_string(*(iVar6 + 0x20),"[E][%s] Pending DB request did not complete, abort\n",
                               "mhi_get_remote_time_sync");
            }
            pcVar9 = 0xfffffff5;
        }
    }
    else {
        uVar5 = sym.to_mhi_pm_state_str(*(iVar6 + 0x17c));
        _dev_err(iVar11 + 0x28,"[E][%s] MHI is not in active state, pm_state:%s\n","mhi_get_remote_time_sync",uVar5);
        if ((puVar7 != NULL) && (*(puVar7 + 3) < 3)) {
            puVar7 = puVar7[4];
            uVar5 = sym.to_mhi_pm_state_str(*(iVar6 + 0x17c));
            ipc_log_string(puVar7,"[E][%s] MHI is not in active state, pm_state:%s\n","mhi_get_remote_time_sync",
                           uVar5);
        }
        pcVar9 = 0xfffffffb;
        param_2 = unaff_x21;
        param_3 = unaff_x22;
    }
    while( true ) {
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iStack_68) break;
        __stack_chk_fail();
code_r0x080154d8:
        __cfi_slowpath_diag(0x9d98c101a4fe7fa9,pcVar9,0x8001260);
code_r0x080151b0:
        (*pcVar9)(iVar6);
        pcVar9 = puVar10[1];
        if (9 < (pcVar9 - unaff_x26 >> 3 | pcVar9 - unaff_x26 << 0x3d)) {
            __cfi_slowpath_diag(0x9d98c101a4fe7fa9,pcVar9,0x8001280);
        }
        uVar4 = (*pcVar9)(iVar6);
        if (uVar4 == 0) {
            iVar1 = sp_el0;
            *(iVar1 + 0x10) = *(iVar1 + 0x10) + 1;
            uVar2 = daif;
            daif = uVar2 | 0xc0;
            iVar3 = sym.mhi_read_reg(iVar6,puVar10[3],0xc,&uStack_70);
            if (iVar3 != 0) {
                iVar12 = *(*(iVar6 + 8) + 0xc0);
                _dev_err(iVar11 + 0x28,"[E][%s] Time HIGH register read error\n","mhi_get_remote_time_sync");
                if ((iVar12 != 0) && (*(iVar12 + 0x18) < 3)) {
                    ipc_log_string(*(iVar12 + 0x20),"[E][%s] Time HIGH register read error\n",
                                   "mhi_get_remote_time_sync");
                }
            }
            iVar3 = sym.mhi_read_reg(iVar6,puVar10[3],8,&uStack_6c);
            if (iVar3 != 0) {
                iVar12 = *(*(iVar6 + 8) + 0xc0);
                _dev_err(iVar11 + 0x28,"[E][%s] Time LOW register read error\n","mhi_get_remote_time_sync");
                if ((iVar12 != 0) && (*(iVar12 + 0x18) < 3)) {
                    ipc_log_string(*(iVar12 + 0x20),"[E][%s] Time LOW register read error\n",
                                   "mhi_get_remote_time_sync");
                }
            }
            uVar4 = sym.mhi_read_reg(iVar6,puVar10[3],0xc,&uStack_70);
            if (uVar4 != 0) {
                iVar12 = *(*(iVar6 + 8) + 0xc0);
                _dev_err(iVar11 + 0x28,"[E][%s] Time HIGH register read error\n","mhi_get_remote_time_sync");
                if ((iVar12 != 0) && (*(iVar12 + 0x18) < 3)) {
                    ipc_log_string(*(iVar12 + 0x20),"[E][%s] Time HIGH register read error\n",
                                   "mhi_get_remote_time_sync");
                }
            }
            *param_3 = CONCAT44(uStack_70,uStack_6c);
            param_3 = *puVar10;
            __cfi_slowpath_diag(0xb2e3bd30d10cd90e,param_3,0x80012a0);
            uVar5 = (*param_3)(iVar6);
            *param_2 = uVar5;
            uVar2 = daif;
            daif = uVar2 & 0xffffffffffffff3f;
            iVar12 = *(iVar1 + 0x10) + -1;
            *(iVar1 + 0x10) = iVar12;
            if ((iVar12 == 0) || (*(iVar1 + 0x10) == 0)) {
                preempt_schedule();
            }
            pcVar9 = puVar10[2];
            if (9 < (pcVar9 - unaff_x26 >> 3 | pcVar9 - unaff_x26 << 0x3d)) {
                __cfi_slowpath_diag(0x9d98c101a4fe7fa9,pcVar9,0x80012c0);
            }
            (*pcVar9)(iVar6);
        }
        param_2 = *(iVar6 + 0x248);
        if (7 < (param_2 + -0x8005c80 >> 3 | param_2 << 0x3d)) {
            __cfi_slowpath_diag(0x95232cda069bc43d,param_2,0x80012e0);
        }
        (*param_2)(iVar6);
        sym.mhi_device_put(*(iVar6 + 8));
code_r0x080152f0:
        pcVar9 = uVar4;
        mutex_unlock(puVar7);
    }
    return pcVar9;
}


// ===== sym.__typeid__ZTSFvP10mhi_device12mhi_callbackE_global_addr @ 0x08005a50 (size 8) =====

void sym.__typeid__ZTSFvP10mhi_device12mhi_callbackE_global_addr(int64_t param_1,uint64_t param_2)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(param_1 + 0xb0) != 0) && (pcVar1 = *(*(param_1 + 0xb0) + -8), pcVar1 != NULL)) {
        if (pcVar1 != sym.__typeid__ZTSFvP10mhi_device12mhi_callbackE_global_addr) {
            __cfi_slowpath_diag(0x67f3a51ad5c16f72,pcVar1,0x8000b40);
            param_2 = param_2 & 0xffffffff;
        }
        (*pcVar1)(param_1,param_2);
    }
    return;
}


// ===== sym.mhi_controller_get_base.cfi_jt @ 0x08005a58 (size 8) =====

ulong sym.mhi_controller_get_base.cfi_jt(int64_t param_1,int64_t *param_2)

{
    int64_t iVar1;
    
    iVar1 = *(*(*(param_1 + 8) + 0xc0) + 0x50);
    if (iVar1 != 0) {
        *param_2 = iVar1;
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08005a60 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bus_unregister(obj.mhi_bus_type);
    return;
}


// ===== sym.__typeid__ZTSFvP10mhi_devicejyyE_global_addr @ 0x08005a68 (size 8) =====

void sym.__typeid__ZTSFvP10mhi_devicejyyE_global_addr(int64_t param_1,uint param_2,ulong param_3,ulong param_4)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(*(*(param_1 + 0x10) + 8) + 0xc0);
    if ((iVar1 != 0) && (*(iVar1 + 0x18) < 2)) {
        ipc_log_string(*(iVar1 + 0x20),"[I][%s] Time response: seq:%llx local: %llu remote: %llu (ticks)\n",
                       "mhi_time_async_cb",param_2,param_3,param_4);
    }
    return;
}


// ===== sym.mhi_pm_fast_suspend.cfi_jt @ 0x08005a70 (size 8) =====

ulong sym.mhi_pm_fast_suspend.cfi_jt(int64_t *param_1,uint64_t param_2)

{
    int64_t *piVar1;
    char *pcVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    int64_t arg1;
    ulong uVar6;
    int64_t iVar7;
    uint32_t uVar8;
    ulong noname_0;
    int *extraout_x8;
    int *piVar9;
    ulong *in_x18;
    int64_t *unaff_x19;
    int64_t *unaff_x21;
    ulong uVar10;
    int64_t *unaff_x23;
    int64_t unaff_x24;
    ulong unaff_x30;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_48 = *(iVar7 + 0x5e0);
    if (*(param_1 + 0x17c) == 1) {
        uVar10 = 0xffffffea;
        param_1 = unaff_x19;
    }
    else if (*(param_1 + 0x17c) < 0x80) {
        unaff_x23 = param_1[1];
        unaff_x24 = unaff_x23[0x18];
        if (param_1[0x32] == 0) {
            unaff_x21 = param_2 & 0xffffffff;
            iVar7 = __msecs_to_jiffies(*(unaff_x24 + 0x30));
            if ((param_1[0x31] != 4) && (iVar7 != 0)) {
                uStack_58 = 0;
                uStack_50 = 0;
                uStack_68 = 0;
                uStack_60 = 0;
                uStack_70 = 0;
                iVar7 = __msecs_to_jiffies(*(unaff_x24 + 0x30));
                init_wait_entry(&uStack_70,0);
                piVar1 = param_1 + 0x41;
                prepare_to_wait_event(piVar1,&uStack_70,2);
                iVar5 = param_1[0x31];
                if (iVar7 == 0 && iVar5 == 4) {
                    iVar7 = 1;
                }
                while ((iVar5 != 4 && (iVar7 != 0))) {
                    iVar7 = schedule_timeout();
                    prepare_to_wait_event(piVar1,&uStack_70,2);
                    iVar5 = param_1[0x31];
                    if (iVar7 == 0 && iVar5 == 4) {
                        iVar7 = 1;
                    }
                }
                finish_wait(piVar1,&uStack_70);
            }
            iVar7 = param_1[0x25] + 0xa8;
            piVar9 = param_1[0x25] + 0xb8;
            goto code_r0x080131d8;
        }
        uVar10 = 0xfffffff0;
    }
    else {
        uVar10 = 0xfffffffb;
        param_1 = unaff_x19;
    }
    do {
        while( true ) {
            iVar7 = sp_el0;
            if (*(iVar7 + 0x5e0) == iStack_48) {
                return uVar10;
            }
            iVar7 = __stack_chk_fail();
            piVar9 = extraout_x8;
code_r0x080131d8:
            Hint_Prefetch(piVar9,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar9,0x10);
                if (bVar4) {
                    *piVar9 = *piVar9 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
            tasklet_unlock_wait(iVar7);
            piVar1 = param_1 + 0x2e;
            DataMemoryBarrier(2,3);
            _raw_write_lock_irq(piVar1);
            if (param_1[0x32] == 0) break;
            uVar10 = 0xfffffff0;
code_r0x08012ef4:
            _raw_write_unlock_irq(piVar1);
            DataMemoryBarrier(2,3);
            piVar9 = param_1[0x25] + 0xb8;
            Hint_Prefetch(piVar9,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar9,0x10);
                if (bVar4) {
                    *piVar9 = *piVar9 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            sym.mhi_irq_handler(piVar9,param_1[0x25]);
        }
        uVar8 = *(param_1 + 0x17c);
        if (0x7f < uVar8) {
code_r0x08012ef0:
            uVar10 = 0xfffffffb;
            goto code_r0x08012ef4;
        }
        iVar7 = *(param_1[1] + 0xc0);
        if ((iVar7 != 0) && (*(iVar7 + 0x18) == 0)) {
            pcVar2 = "true";
            if ((unaff_x21 & 1) == 0) {
                pcVar2 = "false";
            }
            ipc_log_string(*(iVar7 + 0x20),"[D][%s] Allowing Fast M3 transition with notify: %s\n",
                           "mhi_pm_fast_suspend",pcVar2);
            uVar8 = *(param_1 + 0x17c);
        }
        *(unaff_x24 + 0x28) = uVar8;
        *(unaff_x24 + 0x2c) = param_1[0x31];
        uVar8 = param_1;
        if ((*(param_1 + 0x17c) == 8) && (iVar5 = sym.mhi_tryset_pm_state(uVar8,4), iVar5 != 4)) {
            iVar7 = *(param_1[1] + 0xc0);
            unaff_x21 = sym.to_mhi_pm_state_str(4);
            uVar10 = sym.to_mhi_pm_state_str(*(param_1 + 0x17c));
            _dev_err(unaff_x23 + 5,"[E][%s] Error setting to PM state: %s from: %s\n","mhi_pm_fast_suspend",unaff_x21
                     ,uVar10);
            if ((iVar7 != 0) && (*(iVar7 + 0x18) < 3)) {
                arg1 = 4;
code_r0x08013198:
                unaff_x21 = *(iVar7 + 0x20);
                uVar10 = sym.to_mhi_pm_state_str(arg1);
                uVar6 = sym.to_mhi_pm_state_str(*(param_1 + 0x17c));
                ipc_log_string(unaff_x21,"[E][%s] Error setting to PM state: %s from: %s\n","mhi_pm_fast_suspend",
                               uVar10,uVar6);
            }
            goto code_r0x08012ef0;
        }
        iVar5 = sym.mhi_tryset_pm_state(uVar8,0x10);
        if (iVar5 != 0x10) {
            iVar7 = *(param_1[1] + 0xc0);
            unaff_x21 = sym.to_mhi_pm_state_str(0x10);
            uVar10 = sym.to_mhi_pm_state_str(*(param_1 + 0x17c));
            _dev_err(unaff_x23 + 5,"[E][%s] Error setting to PM state: %s from: %s\n","mhi_pm_fast_suspend",unaff_x21
                     ,uVar10);
            if ((iVar7 != 0) && (*(iVar7 + 0x18) < 3)) {
                arg1 = 0x10;
                goto code_r0x08013198;
            }
            goto code_r0x08012ef0;
        }
        iVar5 = sym.mhi_tryset_pm_state(uVar8,0x20);
        if (iVar5 != 0x20) {
            iVar7 = *(param_1[1] + 0xc0);
            unaff_x21 = sym.to_mhi_pm_state_str(0x20);
            uVar10 = sym.to_mhi_pm_state_str(*(param_1 + 0x17c));
            _dev_err(unaff_x23 + 5,"[E][%s] Error setting to PM state: %s from: %s\n","mhi_pm_fast_suspend",unaff_x21
                     ,uVar10);
            if ((iVar7 != 0) && (*(iVar7 + 0x18) < 3)) {
                arg1 = 0x20;
                goto code_r0x08013198;
            }
            goto code_r0x08012ef0;
        }
        *(param_1 + 0x31) = 6;
        *(param_1 + 0x34) = param_1[0x34] + 1;
        _raw_write_unlock_irq(piVar1);
        if ((*(param_1 + 0x30) >> 3 & 1) == 0) {
            flush_work(*(param_1[1] + 0xc0) + 0x78);
        }
        sym.tasklet_enable(param_1[0x25] + 0xa8);
        sym.mhi_irq_handler(noname_0,param_1[0x25]);
        uVar10 = 0;
        if ((unaff_x21 & 1) != 0) {
            param_1 = param_1 + 0x14;
            unaff_x23 = *param_1;
            if (param_1 == unaff_x23) {
                uVar10 = 0;
            }
            else {
                do {
                    unaff_x21 = *unaff_x23;
                    mutex_lock(unaff_x23 + -0xb);
                    if (unaff_x23[-0xd] != 0) {
                        sym.mhi_notify(unaff_x23[-0xd],2);
                    }
                    mutex_unlock(unaff_x23 + -0xb);
                    uVar10 = 0;
                    unaff_x23 = unaff_x21;
                } while (param_1 != unaff_x21);
            }
        }
    } while( true );
}


// ===== sym.mhi_pm_fast_resume.cfi_jt @ 0x08005a78 (size 8) =====

ulong sym.mhi_pm_fast_resume.cfi_jt(int64_t param_1,uint64_t param_2)

{
    int64_t iVar1;
    int *piVar2;
    char *pcVar3;
    uint32_t uVar4;
    char cVar5;
    bool bVar6;
    int64_t *piVar7;
    int iVar8;
    ulong uVar9;
    char *pcVar10;
    int64_t iVar11;
    ulong *in_x18;
    ulong uVar12;
    code *pcVar13;
    int64_t iVar14;
    int64_t iVar15;
    int64_t *piVar16;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar14 = *(param_1 + 8);
    iVar15 = *(iVar14 + 0xc0);
    if ((iVar15 != 0) && (*(iVar15 + 0x18) == 0)) {
        uVar12 = *(iVar15 + 0x20);
        uVar9 = sym.to_mhi_pm_state_str(*(param_1 + 0x17c));
        uVar4 = *(param_1 + 0x188);
        pcVar10 = "INVALID_STATE";
        if ((uVar4 < 0x100) && (0xf6 < uVar4 - 8)) {
            pcVar10 = *(reloc..str.14.llvm.39275123862783422 + uVar4 * 8);
        }
        pcVar3 = "true";
        if ((param_2 & 1) == 0) {
            pcVar3 = "false";
        }
        ipc_log_string(uVar12,"[D][%s] Entered with PM state: %s, MHI state: %s notify: %s\n","mhi_pm_fast_resume",
                       uVar9,pcVar10,pcVar3);
    }
    if (*(param_1 + 0x17c) != 1) {
        if (0x7f < *(param_1 + 0x17c)) {
            return 0xfffffffb;
        }
        iVar1 = param_1 + 0x170;
        _raw_read_lock_bh(iVar1);
        if (*(param_1 + 0x17c) != 0x20) {
    //WARNING: Does not return
            pcVar13 = SoftwareBreakpoint(0x800,0x8012c54);
            (*pcVar13)();
        }
        _raw_read_unlock_bh(iVar1);
        if (((*(param_1 + 0x88) == 0) || (iVar8 = sym.mhi_get_exec_env(param_1), iVar8 != 3)) ||
           (4 < *(param_1 + 0x188) - 2U)) {
            if ((param_2 & 1) != 0) {
                piVar7 = *(param_1 + 0xa0);
                while (param_1 + 0xa0 != piVar7) {
                    piVar16 = *piVar7;
                    mutex_lock(piVar7 + -0xb);
                    if (piVar7[-0xd] != 0) {
                        sym.mhi_notify(piVar7[-0xd],3);
                    }
                    mutex_unlock(piVar7 + -0xb);
                    piVar7 = piVar16;
                }
            }
            iVar11 = *(param_1 + 0x128);
            piVar2 = iVar11 + 0xb8;
            Hint_Prefetch(piVar2,2,0,1);
            do {
                cVar5 = '\x01';
                bVar6 = ExclusiveMonitorPass(piVar2,0x10);
                if (bVar6) {
                    *piVar2 = *piVar2 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                }
            } while (cVar5 != '\0');
            DataMemoryBarrier(2,3);
            tasklet_unlock_wait(iVar11 + 0xa8);
            DataMemoryBarrier(2,3);
            _raw_write_lock_irq(iVar1);
            if (0x7f < *(param_1 + 0x17c)) {
                _raw_write_unlock_irq(iVar1);
                DataMemoryBarrier(2,3);
                piVar2 = *(param_1 + 0x128) + 0xb8;
                Hint_Prefetch(piVar2,2,0,1);
                do {
                    cVar5 = '\x01';
                    bVar6 = ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar6) {
                        *piVar2 = *piVar2 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                    }
                } while (cVar5 != '\0');
                return 0xfffffffb;
            }
            *(param_1 + 0x17c) = *(iVar15 + 0x28);
            *(param_1 + 0x188) = *(iVar15 + 0x2c);
            _raw_write_unlock_irq(iVar1);
            uVar4 = *(param_1 + 0x17c);
            if (uVar4 == 8) {
                _raw_read_lock_bh(iVar1);
                pcVar13 = *(param_1 + 0x228);
                if (2 < (pcVar13 + -0x8005ad8 >> 3 | pcVar13 << 0x3d)) {
                    __cfi_slowpath_diag(0xba8145ef24be26ed,pcVar13,0x80010a0);
                }
                (*pcVar13)(param_1,1);
                pcVar13 = *(param_1 + 0x230);
                if (2 < (pcVar13 + -0x8005ad8 >> 3 | pcVar13 << 0x3d)) {
                    __cfi_slowpath_diag(0xba8145ef24be26ed,pcVar13,0x80010c0);
                }
                (*pcVar13)(param_1,1);
                _raw_read_unlock_bh(iVar1);
            }
            else if (uVar4 == 4) {
                sym.mhi_pm_m0_transition(param_1);
            }
            else {
                iVar15 = *(*(param_1 + 8) + 0xc0);
                uVar9 = sym.to_mhi_pm_state_str(uVar4);
                _dev_err(iVar14 + 0x28,"[E][%s] Unexpected PM state:%s after restore\n","mhi_pm_fast_resume",uVar9);
                if ((iVar15 != 0) && (*(iVar15 + 0x18) < 3)) {
                    uVar12 = *(iVar15 + 0x20);
                    uVar9 = sym.to_mhi_pm_state_str(*(param_1 + 0x17c));
                    ipc_log_string(uVar12,"[E][%s] Unexpected PM state:%s after restore\n","mhi_pm_fast_resume",uVar9
                                  );
                }
            }
            DataMemoryBarrier(2,3);
            piVar2 = *(param_1 + 0x128) + 0xb8;
            Hint_Prefetch(piVar2,2,0,1);
            do {
                cVar5 = '\x01';
                bVar6 = ExclusiveMonitorPass(piVar2,0x10);
                if (bVar6) {
                    *piVar2 = *piVar2 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                }
            } while (cVar5 != '\0');
            sym.mhi_irq_handler(piVar2,*(param_1 + 0x128));
        }
        else {
            *(param_1 + 0x184) = 3;
            iVar15 = *(*(param_1 + 8) + 0xc0);
            _dev_err(iVar14 + 0x28,"[E][%s] RDDM event occurred!\n","mhi_pm_fast_resume");
            if ((iVar15 != 0) && (*(iVar15 + 0x18) < 3)) {
                ipc_log_string(*(iVar15 + 0x20),"[E][%s] RDDM event occurred!\n","mhi_pm_fast_resume");
            }
            sym.mhi_report_error(param_1);
            pcVar13 = *(param_1 + 0x220);
            __cfi_slowpath_diag(0x6ba83359ac4765be,pcVar13,0x8001080);
            (*pcVar13)(param_1,4);
            __wake_up(param_1 + 0x208,3,0,0);
        }
    }
    return 0;
}


// ===== sym.mhi_download_rddm_image.cfi_jt @ 0x08005a80 (size 8) =====

void sym.mhi_download_rddm_image.cfi_jt(int64_t param_1,uint64_t param_2)

{
    bool bVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    ulong uVar5;
    ulong *puVar6;
    char *pcVar7;
    char *pcVar8;
    uint uVar9;
    int64_t *piVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar11;
    ulong uVar12;
    uint64_t uVar13;
    int64_t iVar14;
    ulong *puVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_38 = *(iVar11 + 0x5e0);
    iVar11 = *(param_1 + 0x28);
    iStack_3c = 0;
    iVar14 = *(param_1 + 8);
    if ((param_2 & 1) == 0) {
        iVar14 = *(iVar14 + 0xc0);
        if ((iVar14 != 0) && (*(iVar14 + 0x18) == 0)) {
            ipc_log_string(*(iVar14 + 0x20),"[D][%s] Waiting for RDDM image download via BHIe\n",
                           "mhi_download_rddm_image");
        }
        iVar14 = __msecs_to_jiffies(*(param_1 + 0x178));
        iVar4 = sym.mhi_read_reg_field(param_1,iVar11,0x78,0xc0000000);
        if ((iVar4 == 0 && iStack_3c == 0) && ((iVar4 != 0 || iStack_3c != 0) || iVar14 != 0)) {
            uStack_50 = 0;
            uStack_48 = 0;
            uStack_60 = 0;
            uStack_58 = 0;
            uStack_68 = 0;
            iVar14 = __msecs_to_jiffies(*(param_1 + 0x178));
            init_wait_entry(&uStack_68,0);
            while( true ) {
                prepare_to_wait_event(param_1 + 0x208,&uStack_68,2);
                iVar4 = sym.mhi_read_reg_field(param_1,iVar11,0x78,0xc0000000);
                if (iVar14 == 0 && (iVar4 != 0 || iStack_3c != 0)) {
                    iVar14 = 1;
                }
                if ((iVar4 != 0 || iStack_3c != 0) || (iVar14 == 0)) break;
                iVar14 = schedule_timeout();
            }
            finish_wait(param_1 + 0x208,&uStack_68);
        }
        iVar11 = *(*(param_1 + 8) + 0xc0);
        if ((iVar11 != 0) && (*(iVar11 + 0x18) == 0)) {
            ipc_log_string(*(iVar11 + 0x20),"[D][%s] RXVEC_STATUS: 0x%x\n","mhi_download_rddm_image",iStack_3c);
        }
        uVar9 = 0;
        if (iStack_3c != 2) {
            uVar9 = 0xfffffffb;
        }
        goto code_r0x08010b9c;
    }
    iVar11 = *(iVar14 + 0xc0);
    if ((iVar11 != 0) && (*(iVar11 + 0x18) == 0)) {
        uVar12 = *(iVar11 + 0x20);
        uVar5 = sym.to_mhi_pm_state_str(*(param_1 + 0x17c));
        uVar2 = *(param_1 + 0x188);
        pcVar7 = "INVALID_STATE";
        if ((uVar2 < 0x100) && (0xf6 < uVar2 - 8)) {
            pcVar7 = *(reloc..str.14.llvm.39275123862783422 + uVar2 * 8);
        }
        if (*(param_1 + 0x184) < 10) {
            pcVar8 = *(reloc..str.llvm.39275123862783422 + *(param_1 + 0x184) * 8);
        }
        else {
            pcVar8 = "INVALID_EE";
        }
        ipc_log_string(uVar12,"[D][%s] Entered with pm_state:%s dev_state:%s ee:%s\n","__mhi_download_rddm_in_panic",
                       uVar5,pcVar7,pcVar8);
    }
    *(param_1 + 0x17c) = 0x800;
    DataMemoryBarrier(2,2);
    uVar2 = sym.mhi_get_exec_env(param_1);
    uVar13 = uVar2;
    if (uVar2 == 3) {
code_r0x08010b10:
        iVar11 = *(*(param_1 + 8) + 0xc0);
        if ((iVar11 != 0) && (*(iVar11 + 0x18) == 0)) {
            if (uVar13 < 10) {
                pcVar7 = *(reloc..str.llvm.39275123862783422 + uVar13 * 8);
            }
            else {
                pcVar7 = "INVALID_EE";
            }
            ipc_log_string(*(iVar11 + 0x20),"[D][%s] Waiting for RDDM image download via BHIe, current EE:%s\n",
                           "__mhi_download_rddm_in_panic",pcVar7);
        }
        iVar4 = sym.mhi_rddm_download_status(param_1);
        iVar11 = *(*(param_1 + 8) + 0xc0);
        if (iVar4 == 0) {
            if ((iVar11 != 0) && (*(iVar11 + 0x18) < 2)) {
                ipc_log_string(*(iVar11 + 0x20),"[I][%s] RDDM dumps collected successfully",
                               "__mhi_download_rddm_in_panic");
            }
            uVar9 = 0;
            goto code_r0x08010b9c;
        }
        if (9 < uVar13) goto code_r0x08010bf0;
        bVar1 = false;
        pcVar7 = *(reloc..str.llvm.39275123862783422 + uVar13 * 8);
    }
    else {
        if (uVar2 != 10) {
            iVar11 = *(*(param_1 + 8) + 0xc0);
            if ((iVar11 != 0) && (*(iVar11 + 0x18) == 0)) {
                ipc_log_string(*(iVar11 + 0x20),"[D][%s] Trigger device into RDDM mode using SYS ERR\n",
                               "__mhi_download_rddm_in_panic");
            }
            sym.mhi_set_mhi_state(param_1,0xff);
            iVar11 = *(*(param_1 + 8) + 0xc0);
            if ((iVar11 != 0) && (*(iVar11 + 0x18) == 0)) {
                ipc_log_string(*(iVar11 + 0x20),"[D][%s] Waiting for device to enter RDDM\n",
                               "__mhi_download_rddm_in_panic");
            }
            iVar4 = 99;
            do {
                iVar3 = sym.mhi_get_exec_env(param_1);
                if (iVar3 == 3) {
                    if (0 < iVar4) goto code_r0x08010b04;
                    break;
                }
                __const_udelay(0x8312b0);
                iVar4 = iVar4 + -1;
            } while (iVar4 != -1);
            iVar11 = *(*(param_1 + 8) + 0xc0);
            if ((iVar11 != 0) && (*(iVar11 + 0x18) == 0)) {
                ipc_log_string(*(iVar11 + 0x20),"[D][%s] Did not enter RDDM, do a host req reset\n",
                               "__mhi_download_rddm_in_panic");
            }
            sym.mhi_soc_reset(param_1);
            __const_udelay(0x8312b0);
code_r0x08010b04:
            uVar13 = sym.mhi_get_exec_env(param_1);
            uVar13 = uVar13 & 0xffffffff;
            goto code_r0x08010b10;
        }
        iVar11 = *(*(param_1 + 8) + 0xc0);
code_r0x08010bf0:
        bVar1 = true;
        pcVar7 = "INVALID_EE";
    }
    _dev_err(iVar14 + 0x28,"[E][%s] RDDM transfer failed. Current EE: %s\n","__mhi_download_rddm_in_panic",pcVar7);
    if ((iVar11 == 0) || (2 < *(iVar11 + 0x18))) {
        uVar9 = 0xfffffffb;
    }
    else {
        if (bVar1) {
            pcVar7 = "INVALID_EE";
        }
        else {
            pcVar7 = *(reloc..str.llvm.39275123862783422 + uVar13 * 8);
        }
        ipc_log_string(*(iVar11 + 0x20),"[E][%s] RDDM transfer failed. Current EE: %s\n",
                       "__mhi_download_rddm_in_panic",pcVar7);
        uVar9 = 0xfffffffb;
    }
code_r0x08010b9c:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_38) {
        return;
    }
    auVar16 = __stack_chk_fail(uVar9);
    puVar6 = auVar16._8_8_;
    *extraout_x18 = sym.mhi_free_bhie_table;
    if (*(auVar16._0_8_ + 0x28c) == '\0') {
        piVar10 = *puVar6;
        if (piVar10[2] != 0) {
            uVar2 = 0;
            puVar15 = *piVar10 + 0x10;
            do {
                dma_free_attrs(*auVar16._0_8_,puVar15[1],puVar15[-2],*puVar15,0x40);
                piVar10 = *puVar6;
                uVar2 = uVar2 + 1;
                puVar15 = puVar15 + 4;
            } while (uVar2 < *(piVar10 + 2));
        }
        kfree(*piVar10);
        kfree(*puVar6);
        *puVar6 = 0;
    }
    return;
}


// ===== sym.__typeid__ZTSFvP14mhi_controllerP12mhi_buf_infoE_global_addr @ 0x08005a88 (size 8) =====

void sym.__typeid__ZTSFvP14mhi_controllerP12mhi_buf_infoE_global_addr(ulong *param_1,ulong *param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_2 + 6) == 2) {
        memcpy(*param_2,param_2[1],param_2[5]);
    }
    dma_free_attrs(*param_1,param_2[5],param_2[1],param_2[4],0);
    return;
}


// ===== sym.mhi_unmap_single_no_bb.cfi_jt @ 0x08005a90 (size 8) =====

void sym.mhi_unmap_single_no_bb.cfi_jt(ulong *param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    dma_unmap_page_attrs(*param_1,*(param_2 + 0x20),*(param_2 + 0x28),*(param_2 + 0x30),0);
    return;
}


// ===== sym.mhi_release_device.6ea9a53e17dc3aa18347e4cc921a30b8.cfi_jt @ 0x08005a98 (size 8) =====

void sym.mhi_release_device.6ea9a53e17dc3aa18347e4cc921a30b8.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + -0x10) != 0) {
        *(*(param_1 + -0x10) + 0x110) = 0;
    }
    if (*(param_1 + -8) != 0) {
        *(*(param_1 + -8) + 0x110) = 0;
    }
    kfree();
    return;
}


// ===== sym.mhi_scan_rddm_cookie.cfi_jt @ 0x08005aa0 (size 8) =====

uint64_t sym.mhi_scan_rddm_cookie.cfi_jt(int64_t param_1,int param_2)

{
    code *pcVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong uVar8;
    uint64_t uVar9;
    char *pcVar10;
    char *pcVar11;
    int64_t iVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar13;
    int64_t iVar14;
    ulong uVar15;
    uint64_t uVar16;
    int64_t iVar17;
    int64_t iVar18;
    ulong unaff_x30;
    uchar auVar19 [16];
    uint uStack_1ec;
    char *pcStack_1e8;
    uint32_t auStack_1e0 [2];
    int64_t iStack_1d8;
    char *pcStack_1d0;
    uint uStack_1c8;
    int64_t iStack_1c0;
    char *pcStack_1b8;
    uint uStack_1b0;
    int64_t iStack_1a8;
    char *pcStack_1a0;
    uint uStack_198;
    int64_t iStack_190;
    char *pcStack_188;
    uint uStack_180;
    int64_t iStack_178;
    char *pcStack_170;
    uint uStack_168;
    int64_t iStack_160;
    char *pcStack_158;
    uint uStack_150;
    int64_t iStack_148;
    char *pcStack_140;
    uint uStack_138;
    int64_t iStack_130;
    char *pcStack_128;
    ulong uStack_118;
    char *pcStack_110;
    uint uStack_108;
    int64_t iStack_100;
    char *pcStack_f8;
    uint uStack_f0;
    int64_t iStack_e8;
    char *pcStack_e0;
    uint uStack_d8;
    int64_t iStack_d0;
    char *pcStack_c8;
    uint uStack_c0;
    int64_t iStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_28 = *(iVar12 + 0x5e0);
    uVar6 = 0;
    iStack_2c = 0;
    if ((param_2 != 0) && (*(param_1 + 0x88) != 0)) {
        iVar12 = *(*(param_1 + 8) + 0xc0);
        if ((iVar12 != 0) && (*(iVar12 + 0x18) == 0)) {
            ipc_log_string(*(iVar12 + 0x20),"[D][%s] Checking BHI debug register for 0x%x\n","mhi_scan_rddm_cookie",
                           param_2);
        }
        if (((*(param_1 + 0x17c) & 0x7de) == 0) ||
           (iVar2 = sym.mhi_read_reg(param_1,*(param_1 + 0x20),0x38,&iStack_2c), iVar2 != 0)) {
            uVar6 = 0;
        }
        else {
            iVar12 = *(*(param_1 + 8) + 0xc0);
            if ((iVar12 != 0) && (*(iVar12 + 0x18) == 0)) {
                ipc_log_string(*(iVar12 + 0x20),"[D][%s] BHI_ERRDBG2 value:0x%x\n","mhi_scan_rddm_cookie",iStack_2c);
            }
            uVar6 = iStack_2c == param_2;
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_28) {
        return uVar6;
    }
    iVar7 = __stack_chk_fail(uVar6);
    *extraout_x18 = sym.mhi_debug_reg_dump;
    pcStack_88 = sym.mhi_debug_reg_dump;
    iVar12 = sp_el0;
    iStack_98 = *(iVar12 + 0x5e0);
    iVar12 = *(iVar7 + 0x18);
    iVar13 = *(iVar7 + 0x20);
    uStack_1ec = 0;
    iVar18 = *(iVar7 + 0x28);
    uVar8 = *(iVar7 + 0x30);
    iVar17 = *(iVar7 + 8);
    puStack_90 = &stack0xffffffffffffffe0;
    memset(auStack_1e0,0,0x128);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_1b0 = 0x34;
    pcStack_1e8 = "BHI_ERRDBG2";
    uStack_1c8 = 0x3c;
    uStack_198 = 0x30;
    uStack_108 = 0x3c;
    pcStack_1d0 = "BHI_ERRDBG3";
    uStack_180 = 0x28;
    uStack_138 = 0x48;
    pcStack_1b8 = "BHI_ERRDBG1";
    pcStack_f8 = "BHIE_TXVEC_STATUS";
    pcStack_128 = "MHI_WAKE_DB";
    pcStack_1a0 = "BHI_ERRCODE";
    pcStack_e0 = "BHIE_RXVEC_DB";
    uStack_b0 = 0;
    pcStack_188 = "BHI_EXECENV";
    pcStack_110 = "BHIE_TXVEC_DB";
    uStack_d8 = 0x70;
    pcStack_170 = "BHI_STATUS";
    uStack_f0 = 0x44;
    pcStack_c8 = "BHIE_RXVEC_STATUS";
    uStack_c0 = 0x78;
    pcStack_158 = "MHI_CNTRL";
    iVar14 = *(iVar17 + 0xc0);
    auStack_1e0[0] = 0x38;
    uStack_168 = 0x2c;
    uStack_150 = 0x38;
    pcStack_140 = "MHI_STATUS";
    iStack_1d8 = iVar13;
    iStack_1c0 = iVar13;
    iStack_1a8 = iVar13;
    iStack_190 = iVar13;
    iStack_178 = iVar13;
    iStack_160 = iVar13;
    iStack_148 = iVar12;
    iStack_130 = iVar12;
    uStack_118 = uVar8;
    iStack_100 = iVar18;
    iStack_e8 = iVar18;
    iStack_d0 = iVar18;
    iStack_b8 = iVar18;
    if (((iVar12 == 0) || (iVar13 == 0)) || (iVar18 == 0)) {
        uVar6 = 0;
        uVar9 = _dev_err(iVar17 + 0x28,"[E][%s] Cannot dump MHI/BHI registers\n");
        if ((iVar14 != 0) && (*(iVar14 + 0x18) < 3)) {
            uVar6 = 0;
            uVar9 = ipc_log_string(*(iVar14 + 0x20),"[E][%s] Cannot dump MHI/BHI registers\n");
        }
    }
    else {
        uVar8 = sym.to_mhi_pm_state_str(*(iVar7 + 0x17c));
        uVar3 = *(iVar7 + 0x188);
        pcVar10 = "INVALID_STATE";
        if ((uVar3 < 0x100) && (0xf6 < uVar3 - 8)) {
            pcVar10 = *(reloc..str.14.llvm.39275123862783422 + uVar3 * 8);
        }
        if (*(iVar7 + 0x184) < 10) {
            pcVar11 = *(reloc..str.llvm.39275123862783422 + *(iVar7 + 0x184) * 8);
        }
        else {
            pcVar11 = "INVALID_EE";
        }
        _dev_err(iVar17 + 0x28,"[E][%s] host pm_state:%s dev_state:%s ee:%s\n","mhi_debug_reg_dump",uVar8,pcVar10,
                 pcVar11);
        if ((iVar14 != 0) && (*(iVar14 + 0x18) < 3)) {
            uVar15 = *(iVar14 + 0x20);
            uVar8 = sym.to_mhi_pm_state_str(*(iVar7 + 0x17c));
            uVar3 = *(iVar7 + 0x188);
            pcVar10 = "INVALID_STATE";
            if ((uVar3 < 0x100) && (0xf6 < uVar3 - 8)) {
                pcVar10 = *(reloc..str.14.llvm.39275123862783422 + uVar3 * 8);
            }
            if (*(iVar7 + 0x184) < 10) {
                pcVar11 = *(reloc..str.llvm.39275123862783422 + *(iVar7 + 0x184) * 8);
            }
            else {
                pcVar11 = "INVALID_EE";
            }
            ipc_log_string(uVar15,"[E][%s] host pm_state:%s dev_state:%s ee:%s\n","mhi_debug_reg_dump",uVar8,pcVar10
                           ,pcVar11);
        }
        uVar3 = sym.mhi_get_mhi_state(iVar7);
        uVar16 = uVar3;
        uVar4 = sym.mhi_get_exec_env(iVar7);
        iVar12 = *(*(iVar7 + 8) + 0xc0);
        if (uVar4 < 10) {
            pcVar10 = *(reloc..str.llvm.39275123862783422 + uVar4 * 8);
        }
        else {
            pcVar10 = "INVALID_EE";
        }
        pcVar11 = "INVALID_STATE";
        if ((uVar3 < 0x100) && (0xf6 < uVar16 - 8)) {
            pcVar11 = *(reloc..str.14.llvm.39275123862783422 + uVar16 * 8);
        }
        uVar6 = 0;
        uVar9 = _dev_err(iVar17 + 0x28,"[E][%s] device ee: %s dev_state: %s\n","mhi_debug_reg_dump",pcVar10,pcVar11)
        ;
        if ((iVar12 != 0) && (*(iVar12 + 0x18) < 3)) {
            if (uVar4 < 10) {
                pcVar10 = *(reloc..str.llvm.39275123862783422 + uVar4 * 8);
            }
            else {
                pcVar10 = "INVALID_EE";
            }
            pcVar11 = "INVALID_STATE";
            if ((uVar3 < 0x100) && (0xf6 < uVar16 - 8)) {
                pcVar11 = *(reloc..str.14.llvm.39275123862783422 + uVar16 * 8);
            }
            uVar6 = 0;
            uVar9 = ipc_log_string(*(iVar12 + 0x20),"[E][%s] device ee: %s dev_state: %s\n","mhi_debug_reg_dump",
                                   pcVar10,pcVar11);
        }
        iVar12 = 0;
        while (*(auStack_1e0 + iVar12 + -8) != 0) {
            if (*(&iStack_1d8 + iVar12) != 0) {
                uVar5 = sym.mhi_read_reg(iVar7,*(&iStack_1d8 + iVar12),*(auStack_1e0 + iVar12),&uStack_1ec);
                iVar18 = *(*(iVar7 + 8) + 0xc0);
                uVar6 = 0;
                uVar9 = _dev_err(iVar17 + 0x28,"[E][%s] reg: %s val: 0x%x, ret: %d\n","mhi_debug_reg_dump",
                                 *(auStack_1e0 + iVar12 + -8),uStack_1ec,uVar5);
                if ((iVar18 != 0) && (*(iVar18 + 0x18) < 3)) {
                    uVar6 = 0;
                    uVar9 = ipc_log_string(*(iVar18 + 0x20),"[E][%s] reg: %s val: 0x%x, ret: %d\n",
                                           "mhi_debug_reg_dump",*(auStack_1e0 + iVar12 + -8),uStack_1ec,uVar5);
                }
            }
            iVar12 = iVar12 + 0x18;
            if (iVar12 == 0x150) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x8013b38);
                (*pcVar1)();
            }
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_98) {
        return uVar9;
    }
    auVar19 = __stack_chk_fail();
    iVar18 = auVar19._0_8_;
    *extraout_x18_00 = sym.mhi_device_get_sync_atomic;
    iVar13 = *(iVar18 + 0x10);
    uVar9 = auVar19._8_8_ & 0xffffffff;
    uVar3 = auVar19._8_4_;
    iVar12 = iVar13 + 0x170;
    _raw_read_lock_bh(iVar12);
    if (0x7f < *(iVar13 + 0x17c)) {
        _raw_read_unlock_bh(iVar12);
        return 0xfffffffb;
    }
    pcVar1 = *(iVar13 + 0x228);
    if (2 < (pcVar1 + -0x8005ad8 >> 3 | pcVar1 << 0x3d)) {
        __cfi_slowpath_diag(0xba8145ef24be26ed,pcVar1,0x80010e0);
    }
    (*pcVar1)(iVar13,1);
    _raw_read_unlock_bh(iVar12);
    *(iVar18 + 0x3cc) = *(iVar18 + 0x3cc) + 1;
    pm_wakeup_dev_event(*(iVar13 + 8) + 0x28,0,0);
    pcVar1 = *(iVar13 + 0x240);
    if (9 < (pcVar1 + -0x8005c30 >> 3 | pcVar1 << 0x3d)) {
        __cfi_slowpath_diag(0x9d98c101a4fe7fa9,pcVar1,0x8001100);
    }
    (*pcVar1)(iVar13);
    if (uVar3 == 0) {
        if (*(iVar13 + 0x17c) != 4) {
            iVar12 = *(*(iVar13 + 8) + 0xc0);
            _dev_err(iVar18 + 0x28,"[E][%s] Return without waiting for M0\n","mhi_device_get_sync_atomic");
            if ((iVar12 != 0) && (*(iVar12 + 0x18) < 3)) {
                ipc_log_string(*(iVar12 + 0x20),"[E][%s] Return without waiting for M0\n","mhi_device_get_sync_atomic"
                              );
            }
        }
        pcVar1 = *(iVar13 + 0x248);
        if ((pcVar1 + -0x8005c80 >> 3 | pcVar1 << 0x3d) < 8) goto code_r0x08013ce4;
        uVar8 = 0x8001120;
    }
    else {
        if ((uVar6 & 1) == 0) {
            uVar4 = *(iVar13 + 0x17c);
            while (((uVar6 = uVar4, uVar4 != 4 && (uVar3 = uVar9, uVar4 < 0x80)) && (0 < uVar3))) {
                __const_udelay(0x68dbc);
                uVar4 = *(iVar13 + 0x17c);
                uVar3 = uVar3 - 100;
                uVar9 = uVar3;
            }
        }
        else {
            while( true ) {
                uVar3 = uVar9;
                iVar2 = sym.mhi_get_mhi_state(iVar13);
                if (iVar2 == 2) break;
                uVar6 = *(iVar13 + 0x17c);
                if (0x7f < *(iVar13 + 0x17c) || uVar3 < 1) goto code_r0x08013cb8;
                __const_udelay(0x68dbc);
                uVar9 = uVar3 - 100;
            }
            uVar6 = *(iVar13 + 0x17c);
        }
code_r0x08013cb8:
        if ((0x7f < uVar6) || (uVar3 < 1)) {
            uVar3 = *(iVar13 + 0x188);
            iVar7 = *(*(iVar13 + 8) + 0xc0);
            pcVar10 = "INVALID_STATE";
            if ((uVar3 < 0x100) && (0xf6 < uVar3 - 8)) {
                pcVar10 = *(reloc..str.14.llvm.39275123862783422 + uVar3 * 8);
            }
            uVar8 = sym.to_mhi_pm_state_str(uVar6);
            _dev_err(iVar18 + 0x28,"[E][%s] Did not enter M0, cur_state: %s pm_state: %s\n",
                     "mhi_device_get_sync_atomic",pcVar10,uVar8);
            if ((iVar7 != 0) && (*(iVar7 + 0x18) < 3)) {
                uVar3 = *(iVar13 + 0x188);
                uVar8 = *(iVar7 + 0x20);
                pcVar10 = "INVALID_STATE";
                if ((uVar3 < 0x100) && (0xf6 < uVar3 - 8)) {
                    pcVar10 = *(reloc..str.14.llvm.39275123862783422 + uVar3 * 8);
                }
                uVar15 = sym.to_mhi_pm_state_str(*(iVar13 + 0x17c));
                ipc_log_string(uVar8,"[E][%s] Did not enter M0, cur_state: %s pm_state: %s\n",
                               "mhi_device_get_sync_atomic",pcVar10,uVar15);
            }
            _raw_read_lock_bh(iVar12);
            pcVar1 = *(iVar13 + 0x230);
            if (2 < (pcVar1 + -0x8005ad8 >> 3 | pcVar1 << 0x3d)) {
                __cfi_slowpath_diag(0xba8145ef24be26ed,pcVar1,0x8001140);
            }
            (*pcVar1)(iVar13,0);
            _raw_read_unlock_bh(iVar12);
            *(iVar18 + 0x3cc) = *(iVar18 + 0x3cc) + -1;
            pcVar1 = *(iVar13 + 0x248);
            if (7 < (pcVar1 + -0x8005c80 >> 3 | pcVar1 << 0x3d)) {
                __cfi_slowpath_diag(0x95232cda069bc43d,pcVar1,0x8001160);
            }
            (*pcVar1)(iVar13);
            return 0xffffff92;
        }
        pcVar1 = *(iVar13 + 0x248);
        if ((pcVar1 + -0x8005c80 >> 3 | pcVar1 << 0x3d) < 8) goto code_r0x08013ce4;
        uVar8 = 0x8001180;
    }
    __cfi_slowpath_diag(0x95232cda069bc43d,pcVar1,uVar8);
code_r0x08013ce4:
    (*pcVar1)(iVar13);
    return 0;
}


// ===== sym.mhi_queue_is_full.cfi_jt @ 0x08005aa8 (size 8) =====

bool sym.mhi_queue_is_full.cfi_jt(int64_t param_1,int param_2)

{
    uint64_t uVar1;
    int64_t iVar2;
    
    iVar2 = 0x18;
    if (param_2 != 1) {
        iVar2 = 0x20;
    }
    iVar2 = *(param_1 + iVar2);
    uVar1 = *(iVar2 + 0x98) + *(iVar2 + 0xa0);
    if (*(iVar2 + 0x88) + *(iVar2 + 0xa8) <= uVar1) {
        uVar1 = *(iVar2 + 0x88);
    }
    return uVar1 == *(iVar2 + 0x90);
}


// ===== sym.mhi_controller_set_privdata.cfi_jt @ 0x08005ab0 (size 8) =====

void sym.mhi_controller_set_privdata.cfi_jt(int64_t param_1,ulong param_2)

{
    int64_t iVar1;
    
    if (((param_1 != 0) && (*(param_1 + 8) != 0)) && (iVar1 = *(*(param_1 + 8) + 0xc0), iVar1 != 0)) {
        *(iVar1 + 0x38) = param_2;
    }
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08005ab8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __mutex_init(0x8000888,"&mhi_bus.lock",obj.mhi_register_controller.__key);
    _obj.mhi_register_controller.__key = obj.mhi_register_controller.__key;
    _obj.mhi_controller_ida = obj.mhi_register_controller.__key;
    bus_register(obj.mhi_bus_type);
    return;
}


// ===== sym.mhi_register_controller.cfi_jt @ 0x08005ac0 (size 8) =====

uint64_t sym.mhi_register_controller.cfi_jt(int64_t *param_1,int64_t param_2)

{
    ulong *puVar1;
    int64_t *piVar2;
    uint32_t *puVar3;
    code *pcVar4;
    code *pcVar5;
    int iVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    char cVar9;
    char cVar10;
    char cVar11;
    bool bVar12;
    int iVar13;
    uint32_t uVar14;
    int64_t iVar16;
    uint64_t uVar17;
    char *pcVar19;
    uint32_t uVar20;
    uint uVar21;
    ulong *puVar22;
    ulong *puVar23;
    ulong uVar24;
    int64_t iVar25;
    uint32_t *puVar26;
    int64_t iVar27;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar28;
    ulong uVar29;
    int64_t iVar30;
    int64_t iVar31;
    ulong unaff_x30;
    uchar auVar32 [16];
    uint32_t uStack_5c;
    int64_t iStack_58;
    ulong *puVar15;
    uint32_t *puVar18;
    
    *in_x18 = unaff_x30;
    iVar16 = sp_el0;
    iStack_58 = *(iVar16 + 0x5e0);
    uStack_5c = 0;
    if ((((((param_1 == NULL) || (*param_1 == 0)) || (param_1[3] == 0)) ||
         ((param_1[0x48] == 0 || (param_1[0x49] == 0)))) ||
        ((param_1[0x44] == 0 || ((param_1[0x4d] == 0 || (param_1[0x4e] == 0)))))) ||
       ((param_1[0x19] == 0 || ((param_1[0x16] == 0 || (param_1[0xf] == 0)))))) {
code_r0x08006b0c:
        uVar28 = 0xffffffea;
    }
    else {
        param_1[4] = 0;
        param_1[5] = 0;
        iVar13 = sym.parse_config(param_1,param_2);
        if (iVar13 != 0) goto code_r0x08006b0c;
        iVar16 = kmem_cache_alloc_trace(_free_irq,0xdc0,0x68);
        param_1[0x26] = iVar16;
        if (iVar16 == 0) {
            uVar28 = 0xfffffff4;
code_r0x08006e6c:
            kfree(param_1[0x25]);
            vfree(param_1[0x13]);
        }
        else {
            param_1[0x35] = param_1 + 0x35;
            param_1[0x36] = param_1 + 0x35;
            __mutex_init(param_1 + 0x28,"&mhi_cntrl->pm_mutex",obj.mhi_register_controller.__key);
            param_1[0x3a] = 0xfffffffe0;
            param_1[0x2e] = 0;
            param_1[0x37] = 0;
            param_1[0x3b] = param_1 + 0x3b;
            param_1[0x3c] = param_1 + 0x3b;
            param_1[0x3d] = sym.mhi_pm_st_worker.cfi_jt;
            __init_waitqueue_head(param_1 + 0x41,"&mhi_cntrl->state_event",obj.mhi_register_controller.__key);
            iVar16 = alloc_workqueue("mhi_hiprio_wq",0xa0012,1);
            param_1[0x40] = iVar16;
            if (iVar16 == 0) {
                _dev_err(*param_1,"Failed to allocate workqueue\n");
                uVar28 = 0xfffffff4;
code_r0x08006e64:
                kfree(param_1[0x26]);
                goto code_r0x08006e6c;
            }
            *(param_1[0x26] + 0x60) = 0;
            if (*(param_1 + 0xbc) != 0) {
                iVar16 = 0;
                uVar14 = 0;
                iVar30 = param_1[0x25];
                do {
                    piVar2 = iVar30 + iVar16;
                    if (*(piVar2 + 0x112) == '\0') {
                        *piVar2 = param_1;
                        *(piVar2 + 0x20) = 0;
                        if (piVar2[4] == 2) {
                            iVar31 = iVar30 + iVar16;
                            *(iVar31 + 0xd0) = 0xfffffffe0;
                            *(iVar31 + 0xd8) = iVar31 + 0xd8;
                            *(iVar31 + 0xe0) = iVar31 + 0xd8;
                            *(iVar31 + 0xe8) = sym.mhi_process_ev_work.cfi_jt;
                        }
                        else {
                            pcVar4 = sym.mhi_ctrl_ev_task.cfi_jt;
                            if (*(iVar30 + iVar16 + 0x24) != 1) {
                                pcVar4 = sym.mhi_ev_task.cfi_jt;
                            }
                            tasklet_init(iVar30 + iVar16 + 0xa8,pcVar4);
                        }
                    }
                    uVar14 = uVar14 + 1;
                    iVar16 = iVar16 + 0x118;
                } while (uVar14 < *(param_1 + 0xbc));
            }
            if (param_1[0x17] != 0) {
                uVar14 = 0;
                iVar16 = param_1[0x13] + 0x174;
                do {
                    __mutex_init(iVar16 + -0x54,"&mhi_chan->mutex",obj.mhi_register_controller.__key);
                    *(iVar16 + -0x24) = 0;
                    __init_swait_queue_head(iVar16 + -0x1c,"&x->wait",obj.mhi_register_controller.__key);
                    *(iVar16 + -4) = 0;
                    uVar14 = uVar14 + 1;
                    *(iVar16 + -0xa4) = *(param_1[0x25] + *(iVar16 + -0xa8) * 0x118 + 0x14);
                    iVar16 = iVar16 + 0x198;
                } while (uVar14 < *(param_1 + 0x17));
            }
            bVar12 = *(param_1 + 0x28d) != '\0';
            pcVar4 = sym.__typeid__ZTSFiP14mhi_controllerP12mhi_buf_infoE_global_addr;
            if (bVar12) {
                pcVar4 = sym.mhi_map_single_use_bb.cfi_jt;
            }
            pcVar5 = sym.mhi_unmap_single_no_bb.cfi_jt;
            if (bVar12) {
                pcVar5 = sym.__typeid__ZTSFvP14mhi_controllerP12mhi_buf_infoE_global_addr;
            }
            param_1[0x4b] = pcVar4;
            param_1[0x4c] = pcVar5;
            uVar17 = sym.mhi_read_reg(param_1,param_1[3],0x224,&uStack_5c);
            uVar28 = uVar17 & 0xffffffff;
            if (uVar17 != 0) {
code_r0x08006e5c:
                destroy_workqueue(param_1[0x40]);
                goto code_r0x08006e64;
            }
            *(param_1 + 0xcc) = uStack_5c >> 0x1c;
            *(param_1 + 0x1a) = uStack_5c >> 0x10 & 0xfff;
            *(param_1 + 0xd4) = uStack_5c >> 8 & 0xff;
            *(param_1 + 0x1b) = uStack_5c & 0xff;
            uVar14 = ida_alloc_range(obj.mhi_controller_ida,0,0xffffffff,0xcc0);
            *(param_1 + 0x51) = uVar14;
            if (uVar14 < 0) {
                uVar28 = uVar14;
                goto code_r0x08006e5c;
            }
            uVar28 = sym.mhi_alloc_device(param_1);
            if (0xfffffffffffff000 < uVar28) {
                _dev_err(*param_1,"Failed to allocate MHI device\n");
code_r0x08006e3c:
                ida_free(obj.mhi_controller_ida,param_1[0x51]);
                goto code_r0x08006e5c;
            }
            *(uVar28 + 0x10) = param_1;
            piVar2 = uVar28 + 0x28;
            *(uVar28 + 0x3b8) = 1;
            dev_set_name(piVar2,"mhi%d",param_1[0x51]);
            iVar16 = *(uVar28 + 0x98);
            if (iVar16 == 0) {
                iVar16 = *piVar2;
            }
            *(uVar28 + 8) = iVar16;
            device_init_wakeup(piVar2,1);
            param_1[1] = uVar28;
            uVar14 = sym.mhi_misc_register_controller(param_1);
            if (uVar14 != 0) {
                uVar28 = uVar14;
                _dev_err(*param_1,"Could not enable miscellaneous features\n");
                param_1[1] = 0;
                goto code_r0x08006e3c;
            }
            uVar17 = device_add(piVar2);
            uVar28 = uVar17 & 0xffffffff;
            if (uVar17 != 0) {
code_r0x08006e34:
                sym.mhi_misc_unregister_controller(param_1);
                goto code_r0x08006e3c;
            }
            uVar17 = sym.mhi_misc_sysfs_create(param_1);
            uVar28 = uVar17 & 0xffffffff;
            if (uVar17 != 0) {
                put_device(piVar2);
                goto code_r0x08006e34;
            }
        }
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_58) {
        return uVar28 & 0xffffffff;
    }
    auVar32 = __stack_chk_fail();
    puVar18 = auVar32._8_8_;
    puVar15 = auVar32._0_8_;
    *extraout_x18 = sym.parse_config;
    uVar14 = *puVar18;
    uVar29 = *puVar15;
    *(puVar15 + 0x17) = uVar14;
    iVar16 = vzalloc(uVar14 * 0x198);
    puVar15[0x13] = iVar16;
    if (iVar16 == 0) {
        uVar14 = 0xfffffff4;
    }
    else {
        puVar1 = puVar15 + 0x14;
        puVar15[0x14] = puVar1;
        puVar15[0x15] = puVar1;
        if (puVar18[3] != 0) {
            uVar14 = 0;
            do {
                iVar16 = *(puVar18 + 4);
                uVar20 = *(iVar16 + uVar14 * 0x38 + 8);
                uVar28 = uVar20;
                if (*(puVar15 + 0x17) <= uVar20) {
                    iVar16 = *(puVar15[1] + 0xc0);
                    _dev_err(uVar29,"[E][%s] Channel %d not available\n","parse_ch_cfg",uVar20);
                    if ((iVar16 != 0) && (*(iVar16 + 0x18) < 3)) {
                        ipc_log_string(*(iVar16 + 0x20),"[E][%s] Channel %d not available\n","parse_ch_cfg",uVar20);
                    }
code_r0x0800738c:
                    vfree(puVar15[0x13]);
                    uVar14 = 0xffffffea;
                    goto code_r0x080073f8;
                }
                iVar30 = uVar14;
                iVar31 = puVar15[0x13];
                puVar22 = iVar16 + iVar30 * 0x38;
                puVar23 = iVar31 + uVar28 * 0x198;
                uVar24 = *puVar22;
                *(puVar23 + 0x19) = uVar20;
                *puVar23 = uVar24;
                uVar20 = *(puVar22 + 0xc);
                puVar23[0x16] = uVar20;
                if (uVar20 == 0) goto code_r0x0800738c;
                iVar25 = iVar16 + iVar30 * 0x38;
                iVar27 = iVar31 + uVar28 * 0x198;
                uVar17 = uVar20;
                if (*(iVar25 + 0x10) != 0) {
                    uVar17 = *(iVar25 + 0x10);
                }
                *(iVar27 + 0x50) = uVar17;
                *(iVar27 + 0xcc) = *(iVar25 + 0x14);
                iVar6 = *(iVar25 + 0x18);
                *(iVar27 + 0xd8) = iVar6;
                iVar13 = iVar6;
                if (*(iVar25 + 0x1c) != 0) {
                    iVar13 = *(iVar25 + 0x1c);
                }
                *(iVar27 + 0xd4) = iVar13;
                *(iVar27 + 0x100) = *(iVar25 + 0x20);
                *(iVar27 + 0xe4) = *(iVar25 + 0x24);
                cVar9 = *(iVar25 + 0x2c);
                *(iVar27 + 0x188) = cVar9;
                cVar10 = *(iVar25 + 0x2d);
                *(iVar27 + 0x18a) = cVar10;
                *(iVar27 + 0xe0) = *(iVar25 + 0x2e);
                cVar11 = *(iVar25 + 0x2f);
                *(iVar27 + 0x18b) = cVar11;
                *(iVar27 + 0x18c) = *(iVar25 + 0x30);
                if (cVar11 != '\0') {
                    if (iVar6 == 2) {
code_r0x08007010:
                        if ((cVar10 != '\0') ||
                           (uVar20 = *(iVar16 + iVar30 * 0x38 + 0x28), *(iVar31 + uVar28 * 0x198 + 0xe8) = uVar20,
                           (uVar20 & 0xfffffffe) == 2)) goto code_r0x08007044;
                        iVar16 = *(puVar15[1] + 0xc0);
                        _dev_err(uVar29,"[E][%s] Invalid Door bell mode\n","parse_ch_cfg");
                        if ((iVar16 == 0) || (2 < *(iVar16 + 0x18))) goto code_r0x0800738c;
                        uVar29 = *(iVar16 + 0x20);
                        pcVar19 = "[E][%s] Invalid Door bell mode\n";
                    }
                    else {
code_r0x080072c8:
                        iVar16 = *(puVar15[1] + 0xc0);
                        _dev_err(uVar29,"[E][%s] Invalid channel configuration\n","parse_ch_cfg");
                        if ((iVar16 == 0) || (2 < *(iVar16 + 0x18))) goto code_r0x0800738c;
                        uVar29 = *(iVar16 + 0x20);
                        pcVar19 = "[E][%s] Invalid channel configuration\n";
                    }
                    ipc_log_string(uVar29,pcVar19,"parse_ch_cfg");
                    goto code_r0x0800738c;
                }
                if ((iVar6 != 3) && (iVar6 != 0)) goto code_r0x08007010;
                if (cVar10 == '\0') goto code_r0x080072c8;
code_r0x08007044:
                iVar16 = iVar31 + uVar28 * 0x198;
                pcVar4 = sym.mhi_db_brstmode.cfi_jt;
                if (*(iVar16 + 0xe8) != 3) {
                    pcVar4 = sym.__typeid__ZTSFvP14mhi_controllerP6db_cfgPvyE_global_addr;
                }
                *(iVar16 + 0xf8) = pcVar4;
                *(iVar16 + 0x189) = 1;
                if (cVar9 != '\0') {
                    puVar22 = puVar15[0x15];
                    piVar2 = iVar31 + uVar28 * 0x198 + 0x178;
                    uVar17 = __list_add_valid(piVar2,puVar22,puVar1);
                    if ((uVar17 & 1) != 0) {
                        puVar15[0x15] = piVar2;
                        *piVar2 = puVar1;
                        *(iVar31 + uVar28 * 0x198 + 0x180) = puVar22;
                        *puVar22 = piVar2;
                    }
                }
                uVar14 = uVar14 + 1;
            } while (uVar14 < puVar18[3]);
        }
        uVar14 = puVar18[6];
        uVar29 = *puVar15;
        auVar32._8_8_ = 0;
        auVar32._0_8_ = uVar14;
        *(puVar15 + 0xbc) = uVar14;
        if (SUB168(auVar32 * ZEXT816(0x118),8) == 0) {
            iVar16 = __kmalloc(uVar14 * 0x118,0xdc0);
            puVar15[0x25] = iVar16;
            if (iVar16 != 0) {
                if (0 < uVar14) {
                    uVar20 = 0;
                    iVar30 = 0;
                    puVar26 = iVar16 + 0x90;
                    do {
                        iVar16 = *(puVar18 + 8);
                        puVar26[-0x20] = uVar20;
                        puVar3 = iVar16 + iVar30;
                        *(puVar26 + -8) = *puVar3;
                        puVar26[-0x1f] = puVar3[1];
                        puVar26[-0x1e] = puVar3[2];
                        uVar7 = puVar3[3];
                        if (uVar7 != 0xffffffff) {
                            uVar8 = *(puVar15 + 0x17);
                            puVar26[-0x1d] = uVar7;
                            if (uVar7 < uVar8) {
                                *(puVar26 + -0x22) = puVar15[0x13] + uVar7 * 0x198;
                                goto code_r0x0800719c;
                            }
                            iVar16 = *(puVar15[1] + 0xc0);
                            _dev_err(uVar29,"[E][%s] Event Ring channel not available\n","parse_ev_cfg");
                            if ((iVar16 != 0) && (*(iVar16 + 0x18) < 3)) {
                                pcVar19 = "[E][%s] Event Ring channel not available\n";
code_r0x080073d4:
                                ipc_log_string(*(iVar16 + 0x20),pcVar19,"parse_ev_cfg");
                            }
code_r0x080073e4:
                            kfree(puVar15[0x25]);
                            uVar14 = 0xffffffea;
                            goto code_r0x080073f0;
                        }
code_r0x0800719c:
                        puVar26[-0x1c] = puVar3[4];
                        uVar7 = puVar3[5];
                        *puVar26 = uVar7;
                        if ((uVar7 & 0xfffffffe) != 2) goto code_r0x080073e4;
                        pcVar4 = sym.mhi_db_brstmode.cfi_jt;
                        if (uVar7 != 3) {
                            pcVar4 = sym.__typeid__ZTSFvP14mhi_controllerP6db_cfgPvyE_global_addr;
                        }
                        *(puVar26 + 4) = pcVar4;
                        uVar7 = *(iVar16 + iVar30 + 0x18);
                        puVar26[-0x1b] = uVar7;
                        if (3 < uVar7) {
                            iVar16 = *(puVar15[1] + 0xc0);
                            _dev_err(uVar29,"[E][%s] Event Ring type not supported\n","parse_ev_cfg");
                            if ((iVar16 != 0) && (*(iVar16 + 0x18) < 3)) {
                                pcVar19 = "[E][%s] Event Ring type not supported\n";
                                goto code_r0x080073d4;
                            }
                            goto code_r0x080073e4;
                        }
                        *(puVar26 + 0x1e) = *(reloc.mhi_process_data_event_ring.cfi_jt + uVar7 * 8);
                        cVar9 = *(iVar16 + iVar30 + 0x1c);
                        *(puVar26 + 0x20) = cVar9;
                        if (cVar9 == '\0') {
                            *(puVar15 + 0xc4) = *(puVar15 + 0xc4) + 1;
                        }
                        else {
                            *(puVar15 + 0x18) = *(puVar15 + 0x18) + 1;
                        }
                        iVar16 = iVar16 + iVar30;
                        iVar30 = iVar30 + 0x20;
                        uVar20 = uVar20 + 1;
                        *(puVar26 + 0x81) = *(iVar16 + 0x1d);
                        *(puVar26 + 0x82) = *(iVar16 + 0x1e);
                        puVar26 = puVar26 + 0x46;
                    } while (uVar14 * 0x20 - iVar30 != 0);
                }
                uVar14 = 1000;
                if (puVar18[1] != 0) {
                    uVar14 = puVar18[1];
                }
                *(puVar15 + 0x2f) = uVar14;
                if (puVar18[0xb] != 0) {
                    puVar15[5] = puVar15[3] + puVar18[0xb];
                }
                *(puVar15 + 0x28d) = puVar18[10];
                uVar14 = 0xffff;
                if (puVar18[2] != 0) {
                    uVar14 = puVar18[2];
                }
                puVar15[0x50] = uVar14;
                uVar21 = 0xc;
                *(puVar15 + 0x30) = 0xc;
                uVar14 = 0;
                if (*(puVar18 + 0x29) != '\0') {
                    uVar21 = 4;
                }
                *(puVar15 + 0x30) = uVar21;
                goto code_r0x080073f8;
            }
            uVar14 = 0xfffffff4;
        }
        else {
            uVar14 = 0xfffffff4;
            puVar15[0x25] = 0;
        }
code_r0x080073f0:
        vfree(puVar15[0x13]);
    }
code_r0x080073f8:
    return uVar14;
}


// ===== sym.__typeid__ZTSFvP14mhi_controllerP6db_cfgPvyE_global_addr @ 0x08005ac8 (size 8) =====

void sym.__typeid__ZTSFvP14mhi_controllerP6db_cfgPvyE_global_addr
               (int64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_2 + 0x10) = param_4;
    pcVar1 = *(param_1 + 0x270);
    __cfi_slowpath_diag(0xcc1f7c1a9c27c280,pcVar1,0x8000ac0);
    (*pcVar1)(param_1,param_3 + 4,param_4 >> 0x20);
    pcVar1 = *(param_1 + 0x270);
    __cfi_slowpath_diag(0xcc1f7c1a9c27c280,pcVar1,0x8000ac0);
    (*pcVar1)(param_1,param_3,param_4 & 0xffffffff);
    return;
}


// ===== sym.mhi_db_brstmode.cfi_jt @ 0x08005ad0 (size 8) =====

void sym.mhi_db_brstmode.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_2 + 1) != '\0') {
        *(param_2 + 0x10) = param_4;
        pcVar1 = *(param_1 + 0x270);
        __cfi_slowpath_diag(0xcc1f7c1a9c27c280,pcVar1,0x8000ac0);
        (*pcVar1)(param_1,param_3 + 4,param_4 >> 0x20);
        pcVar1 = *(param_1 + 0x270);
        __cfi_slowpath_diag(0xcc1f7c1a9c27c280,pcVar1,0x8000ac0);
        (*pcVar1)(param_1,param_3,param_4 & 0xffffffff);
        *(param_2 + 1) = 0;
    }
    return;
}


// ===== sym.__typeid__ZTSFvP14mhi_controllerbE_global_addr @ 0x08005ad8 (size 8) =====

void sym.__typeid__ZTSFvP14mhi_controllerbE_global_addr(int64_t param_1,uint64_t param_2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    code *pcVar5;
    ulong uVar6;
    ulong uVar7;
    uint32_t uVar8;
    ulong *in_x18;
    ulong uVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = param_1 + 0x140;
    iVar10 = *(param_1 + 8);
    mutex_lock(iVar1);
    iVar2 = param_1 + 0x170;
    _raw_write_lock_irq(iVar2);
    uVar4 = *(param_1 + 0x17c);
    if (uVar4 == 1) {
        _raw_write_unlock_irq(iVar2);
        mutex_unlock(iVar1);
        return;
    }
    uVar8 = 0x400;
    if ((param_2 & 1) == 0) {
        uVar8 = 0x800;
    }
    uVar3 = 0x2000000000;
    if (uVar4 != 0) {
        uVar3 = 0x3f00000000 - (LZCOUNT(uVar4) << 0x20);
    }
    if ((uVar3 < 0xb00000001) && (uVar4 == *(obj.dev_state_transitions + (uVar3 >> 0x20) * 8))) {
        if (0x60 < (uVar3 >> 0x1d | 4)) {
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(1,0x800fda8);
            (*pcVar5)();
        }
        if ((*((uVar3 >> 0x20) * 8 + 0x800490c) & uVar8) == 0) goto code_r0x0800fd10;
    }
    else {
code_r0x0800fd10:
        if (uVar4 == uVar8) goto code_r0x0800fc88;
        iVar11 = *(*(param_1 + 8) + 0xc0);
        uVar6 = sym.to_mhi_pm_state_str(uVar8);
        uVar7 = sym.to_mhi_pm_state_str(*(param_1 + 0x17c));
        _dev_err(iVar10 + 0x28,"[E][%s] Failed to move to state: %s from: %s\n","mhi_power_down",uVar6,uVar7);
        if ((iVar11 != 0) && (*(iVar11 + 0x18) < 3)) {
            uVar9 = *(iVar11 + 0x20);
            uVar6 = sym.to_mhi_pm_state_str(uVar8);
            uVar7 = sym.to_mhi_pm_state_str(*(param_1 + 0x17c));
            ipc_log_string(uVar9,"[E][%s] Failed to move to state: %s from: %s\n","mhi_power_down",uVar6,uVar7);
        }
        uVar8 = 0x800;
    }
    *(param_1 + 0x17c) = uVar8;
code_r0x0800fc88:
    *(param_1 + 0x184) = 8;
    __wake_up(param_1 + 0x208,3,0,0);
    _raw_write_unlock_irq(iVar2);
    mutex_unlock(iVar1);
    sym.mhi_queue_state_transition(param_1,6);
    flush_work(param_1 + 0x1d0);
    free_irq(**(param_1 + 0xb0),param_1);
    if (*(param_1 + 0x80) != 0) {
        sym.mhi_free_bhie_table(param_1,param_1 + 0x80);
    }
    return;
}


// ===== sym.mhi_assert_dev_wake.4dbb11a4522110e50d216ee75119b05c.cfi_jt @ 0x08005ae0 (size 8) =====

void sym.mhi_assert_dev_wake.4dbb11a4522110e50d216ee75119b05c.cfi_jt(int64_t param_1,uint64_t param_2)

{
    uint64_t *puVar1;
    int *piVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    ulong uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 & 1) == 0) {
        puVar1 = param_1 + 0x18c;
        uVar8 = *puVar1;
        while (uVar7 = uVar8, uVar7 != 0) {
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar3 = *puVar1;
                uVar8 = uVar3;
                if (uVar3 != uVar7) goto code_r0x0800f7d8;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar7 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x0800f7d8:
            if (uVar7 == uVar3) {
                return;
            }
        }
        uVar6 = _raw_spin_lock_irqsave(param_1 + 0x1bc);
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar7 = *puVar1;
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
                *puVar1 = uVar7 + 1;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        DataMemoryBarrier(2,3);
        if (((uVar7 + 1 == 1) && ((*(param_1 + 0x17c) >> 3 & 1) != 0)) && (*(param_1 + 0x28f) == '\0')) {
            if ((*(param_1 + 0x180) >> 3 & 1) == 0) {
                sym.mhi_write_offload_wakedb(param_1,1);
            }
            else {
                sym.mhi_write_db(param_1,*(param_1 + 0x30),1);
            }
            *(param_1 + 0x28f) = 1;
        }
    }
    else {
        uVar6 = _raw_spin_lock_irqsave(param_1 + 0x1bc);
        piVar2 = param_1 + 0x18c;
        Hint_Prefetch(piVar2,2,0,1);
        do {
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
                *piVar2 = *piVar2 + 1;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        if (((*(param_1 + 0x17c) & 0x4c) != 0) && (*(param_1 + 0x28f) == '\0')) {
            if ((*(param_1 + 0x180) >> 3 & 1) == 0) {
                sym.mhi_write_offload_wakedb(param_1,1);
            }
            else {
                sym.mhi_write_db(param_1,*(param_1 + 0x30),1);
            }
            *(param_1 + 0x28f) = 1;
        }
    }
    _raw_spin_unlock_irqrestore(param_1 + 0x1bc,uVar6);
    return;
}


// ===== sym.mhi_deassert_dev_wake.4dbb11a4522110e50d216ee75119b05c.cfi_jt @ 0x08005ae8 (size 8) =====

void sym.mhi_deassert_dev_wake.4dbb11a4522110e50d216ee75119b05c.cfi_jt(int64_t param_1,uint64_t param_2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = param_1 + 0x18c;
    uVar7 = *puVar1;
    do {
        uVar6 = uVar7;
        if (uVar6 - 1 == 0) {
            uVar5 = _raw_spin_lock_irqsave(param_1 + 0x1bc);
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar6 = *puVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar6 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
            if ((((uVar6 - 1 == 0) && ((*(param_1 + 0x17c) & 0x4c) != 0)) && ((param_2 & 1) == 0)) &&
               (*(param_1 + 0x28f) != '\0')) {
                if ((*(param_1 + 0x180) >> 3 & 1) == 0) {
                    sym.mhi_write_offload_wakedb(param_1,0);
                }
                else {
                    sym.mhi_write_db(param_1,*(param_1 + 0x30),0);
                }
                *(param_1 + 0x28f) = 0;
            }
            _raw_spin_unlock_irqrestore(param_1 + 0x1bc,uVar5);
            return;
        }
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar2 = *puVar1;
            uVar7 = uVar2;
            if (uVar2 != uVar6) goto code_r0x0800f9c4;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
                *puVar1 = uVar6 - 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
code_r0x0800f9c4:
        if (uVar6 == uVar2) {
            return;
        }
    } while( true );
}


// ===== sym.mhi_device_configure.cfi_jt @ 0x08005af0 (size 8) =====

ulong sym.mhi_device_configure.cfi_jt(int64_t param_1,int param_2,int64_t param_3,int param_4)

{
    int64_t *piVar1;
    ulong uVar2;
    ulong uVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    char *pcVar7;
    ulong *puVar8;
    ulong *puVar9;
    ulong uVar10;
    ulong *in_x18;
    int64_t iVar11;
    int64_t *piVar12;
    int64_t iVar13;
    int64_t iVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar14 = *(param_1 + 0x10);
    iVar13 = *(iVar14 + 8);
    if ((param_2 - 2U < 2) || (param_2 == 0)) {
        piVar1 = param_1 + 0x20;
    }
    else {
        if (param_2 != 1) {
            return 0xffffffea;
        }
        piVar1 = param_1 + 0x18;
    }
    if (0 < param_4) {
        param_4 = param_4 + 1;
        piVar12 = param_3 + 0x18;
        iVar4 = *(*piVar1 + 200);
        iVar5 = *(*piVar1 + 0xd0);
        do {
            iVar11 = piVar12[-2];
            iVar6 = strcmp(iVar11,0x8001fc8);
            if (iVar6 == 0) {
                if (*piVar12 != 0x2c) {
                    iVar14 = *(*(iVar14 + 8) + 0xc0);
                    _dev_err(iVar13 + 0x28,"[E][%s] Invalid ECA size, expected:%zu actual%zu\n","mhi_device_configure"
                             ,0x2c);
                    if (iVar14 == 0) {
                        return 0xffffffea;
                    }
                    if (2 < *(iVar14 + 0x18)) {
                        return 0xffffffea;
                    }
                    pcVar7 = "[E][%s] Invalid ECA size, expected:%zu actual%zu\n";
                    goto code_r0x08012840;
                }
                puVar8 = **(iVar14 + 0x138) + iVar5 * 0x2c;
            }
            else {
                iVar6 = strcmp(iVar11,0x8001a98);
                if (iVar6 != 0) {
                    return 0xffffffea;
                }
                if (*piVar12 != 0x2c) {
                    iVar14 = *(*(iVar14 + 8) + 0xc0);
                    _dev_err(iVar13 + 0x28,"[E][%s] Invalid CCA size, expected:%zu actual:%zu\n",
                             "mhi_device_configure",0x2c);
                    if (iVar14 == 0) {
                        return 0xffffffea;
                    }
                    if (2 < *(iVar14 + 0x18)) {
                        return 0xffffffea;
                    }
                    pcVar7 = "[E][%s] Invalid CCA size, expected:%zu actual:%zu\n";
code_r0x08012840:
                    ipc_log_string(*(iVar14 + 0x20),pcVar7,"mhi_device_configure",0x2c,*piVar12);
                    return 0xffffffea;
                }
                puVar8 = *(*(iVar14 + 0x138) + 8) + iVar4 * 0x2c;
            }
            puVar9 = piVar12[-3];
            param_4 = param_4 + -1;
            piVar12 = piVar12 + 4;
            uVar2 = puVar9[1];
            *puVar8 = *puVar9;
            puVar8[1] = uVar2;
            uVar10 = puVar9[2];
            uVar2 = puVar9[3];
            uVar3 = puVar9[4];
            *(puVar8 + 5) = *(puVar9 + 5);
            puVar8[2] = uVar10;
            puVar8[3] = uVar2;
            puVar8[4] = uVar3;
        } while (1 < param_4);
    }
    return 0;
}


// ===== sym.mhi_controller_setup_timesync.cfi_jt @ 0x08005af8 (size 8) =====

ulong sym.mhi_controller_setup_timesync.cfi_jt(int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    ulong *puVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(param_1 + 8) + 0xc0);
    puVar1 = kmem_cache_alloc_trace(_free_irq,0xdc0,0xb0);
    if (puVar1 == NULL) {
        uVar2 = 0xfffffff4;
    }
    else {
        uVar2 = 0;
        *puVar1 = param_2;
        puVar1[1] = param_3;
        puVar1[2] = param_4;
        *(iVar3 + 0x68) = puVar1;
    }
    return uVar2;
}


// ===== sym.mhi_set_m2_timeout_ms.cfi_jt @ 0x08005b00 (size 8) =====

void sym.mhi_set_m2_timeout_ms.cfi_jt(int64_t param_1,uint param_2)

{
    int64_t iVar1;
    
    if (((param_1 != 0) && (*(param_1 + 8) != 0)) && (iVar1 = *(*(param_1 + 8) + 0xc0), iVar1 != 0)) {
        *(iVar1 + 0x30) = param_2;
    }
    return;
}


// ===== sym.mhi_queue_buf.cfi_jt @ 0x08005b08 (size 8) =====

uint64_t sym.mhi_queue_buf.cfi_jt(int64_t param_1,uint32_t param_2,ulong param_3,ulong param_4,uint32_t param_5)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auVar3 [12];
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_18 = *(iVar2 + 0x5e0);
    uStack_20 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_30 = 0;
    uStack_50 = param_3;
    uStack_38 = param_3;
    uStack_28 = param_4;
    uVar1 = sym.mhi_queue(param_1,&uStack_50,param_2,param_5);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_18) {
        return uVar1;
    }
    auVar3 = __stack_chk_fail();
    iVar2 = 0x18;
    if (auVar3._8_4_ != 1) {
        iVar2 = 0x20;
    }
    iVar2 = *(auVar3._0_8_ + iVar2);
    uVar1 = *(iVar2 + 0x98) + *(iVar2 + 0xa0);
    if (*(iVar2 + 0x88) + *(iVar2 + 0xa8) <= uVar1) {
        uVar1 = *(iVar2 + 0x88);
    }
    return uVar1 == *(iVar2 + 0x90);
}


// ===== sym.mhi_uevent.6ea9a53e17dc3aa18347e4cc921a30b8.cfi_jt @ 0x08005b10 (size 8) =====

void sym.mhi_uevent.6ea9a53e17dc3aa18347e4cc921a30b8.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    add_uevent_var(param_2,"MODALIAS=mhi:%s",*(param_1 + -0x20));
    return;
}


// ===== sym.mhi_driver_probe.6ea9a53e17dc3aa18347e4cc921a30b8.cfi_jt @ 0x08005b18 (size 8) =====

int sym.mhi_driver_probe.6ea9a53e17dc3aa18347e4cc921a30b8.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t iVar2;
    int iVar3;
    ulong *in_x18;
    ulong *arg1;
    code *pcVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = param_1 + -0x28;
    iVar5 = *(param_1 + 0x88);
    iVar1 = *(param_1 + -0x18);
    iVar2 = *(param_1 + -0x10);
    iVar6 = *(param_1 + -8);
    iVar3 = sym.mhi_device_get_sync(arg1);
    if (iVar3 != 0) {
        return iVar3;
    }
    if (iVar2 == 0) {
code_r0x080079f4:
        if (iVar6 != 0) {
            if (((*(iVar6 + 0x188) != '\0') && (*(iVar5 + -8) == 0)) ||
               (((*(iVar6 + 0x18a) == '\0' && (*(iVar5 + -0x10) == 0)) ||
                ((*(*(iVar1 + 0x128) + *(iVar6 + 0xcc) * 0x118 + 0x111) != '\0' && (*(iVar5 + -8) == 0))))))
            goto code_r0x08007a7c;
            *(iVar6 + 0x118) = *(iVar5 + -0x10);
        }
        pcVar4 = *(iVar5 + -0x28);
        __cfi_slowpath_diag(0xd9b7bfe4e3e2def4,pcVar4,0x8000a60);
        iVar3 = (*pcVar4)(arg1,*arg1);
        if (iVar3 == 0) goto code_r0x08007a88;
    }
    else {
        if (((*(iVar2 + 0x188) == '\0') || (*(iVar5 + -8) != 0)) &&
           ((*(iVar2 + 0x18a) != '\0' || (*(iVar5 + -0x18) != 0)))) {
            *(iVar2 + 0x118) = *(iVar5 + -0x18);
            goto code_r0x080079f4;
        }
code_r0x08007a7c:
        iVar3 = -0x16;
    }
    sym.mhi_unprepare_from_transfer(arg1);
code_r0x08007a88:
    sym.mhi_device_put(arg1);
    return iVar3;
}


// ===== sym.mhi_driver_remove.6ea9a53e17dc3aa18347e4cc921a30b8.cfi_jt @ 0x08005b20 (size 8) =====

ulong sym.mhi_driver_remove.6ea9a53e17dc3aa18347e4cc921a30b8.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *arg1;
    int64_t iVar3;
    code *pcVar4;
    int iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x390) != 1) {
        iVar6 = *(param_1 + 0x88);
        arg1 = *(param_1 + -0x18);
        iVar3 = *(param_1 + -8);
        if (iVar3 == 0) {
            iVar8 = 0;
            iVar3 = *(param_1 + -0x10);
        }
        else {
            iVar7 = iVar3 + 0x170;
            _raw_write_lock_irq(iVar7);
            *(iVar3 + 0x108) = 0;
            complete_all(iVar3 + 0x150);
            _raw_write_unlock_irq(iVar7);
            mutex_lock(iVar3 + 0x120);
            _raw_write_lock_irq(iVar7);
            iVar8 = *(iVar3 + 0x104);
            *(iVar3 + 0x104) = 3;
            _raw_write_unlock_irq(iVar7);
            if (*(iVar3 + 0x18a) == '\0') {
                sym.mhi_reset_chan(arg1,iVar3);
            }
            mutex_unlock(iVar3 + 0x120);
            iVar3 = *(param_1 + -0x10);
        }
        if (iVar3 == 0) {
            iVar5 = 0;
        }
        else {
            iVar7 = iVar3 + 0x170;
            _raw_write_lock_irq(iVar7);
            *(iVar3 + 0x108) = 0;
            complete_all(iVar3 + 0x150);
            _raw_write_unlock_irq(iVar7);
            mutex_lock(iVar3 + 0x120);
            _raw_write_lock_irq(iVar7);
            iVar5 = *(iVar3 + 0x104);
            *(iVar3 + 0x104) = 3;
            _raw_write_unlock_irq(iVar7);
            if (*(iVar3 + 0x18a) == '\0') {
                sym.mhi_reset_chan(arg1,iVar3);
            }
            mutex_unlock(iVar3 + 0x120);
        }
        pcVar4 = *(iVar6 + -0x20);
        if (2 < (pcVar4 + -0x8005b48 >> 3 | pcVar4 << 0x3d)) {
            __cfi_slowpath_diag(0x6e9fb1c868c44dc4,pcVar4,0x8000a80);
        }
        (*pcVar4)(param_1 + -0x28);
        iVar3 = *(param_1 + -8);
        if (iVar3 != 0) {
            mutex_lock(iVar3 + 0x120);
            if ((((iVar8 == 4) || (iVar8 == 1)) && (*(iVar3 + 0x104) != 0)) && (*(iVar3 + 0x18a) == '\0')) {
                uVar1 = *(iVar3 + 200);
                iVar6 = *(arg1[0x27] + 8);
                iVar7 = iVar6 + uVar1 * 0x2c;
                if (*(iVar7 + 0xc) != 0) {
                    dma_free_attrs(*arg1,*(iVar3 + 0xb8),*(iVar3 + 0x80),*(iVar3 + 0x68),0);
                    vfree(*(iVar3 + 0x28));
                    *(iVar3 + 0x88) = 0;
                    *(iVar3 + 0x28) = 0;
                    iVar2 = uVar1 * 0x2c;
                    *(iVar3 + 0x78) = 0;
                    *(iVar7 + 0x1c) = 0;
                    *(iVar7 + 0x24) = 0;
                    *(iVar7 + 0xc) = 0;
                    *(iVar7 + 0x14) = 0;
                    *(iVar6 + iVar2) = *(iVar6 + iVar2) & 0xffffff00;
                    DataMemoryBarrier(2,2);
                }
            }
            *(iVar3 + 0x104) = 0;
            mutex_unlock(iVar3 + 0x120);
        }
        iVar3 = *(param_1 + -0x10);
        if (iVar3 != 0) {
            mutex_lock(iVar3 + 0x120);
            if (((iVar5 == 4) || (iVar5 == 1)) && ((*(iVar3 + 0x104) != 0 && (*(iVar3 + 0x18a) == '\0')))) {
                uVar1 = *(iVar3 + 200);
                iVar6 = *(arg1[0x27] + 8);
                iVar7 = iVar6 + uVar1 * 0x2c;
                if (*(iVar7 + 0xc) != 0) {
                    dma_free_attrs(*arg1,*(iVar3 + 0xb8),*(iVar3 + 0x80),*(iVar3 + 0x68),0);
                    vfree(*(iVar3 + 0x28));
                    *(iVar3 + 0x88) = 0;
                    *(iVar3 + 0x28) = 0;
                    iVar2 = uVar1 * 0x2c;
                    *(iVar3 + 0x78) = 0;
                    *(iVar7 + 0x1c) = 0;
                    *(iVar7 + 0x24) = 0;
                    *(iVar7 + 0xc) = 0;
                    *(iVar7 + 0x14) = 0;
                    *(iVar6 + iVar2) = *(iVar6 + iVar2) & 0xffffff00;
                    DataMemoryBarrier(2,2);
                }
            }
            *(iVar3 + 0x104) = 0;
            mutex_unlock(iVar3 + 0x120);
        }
        while (*(param_1 + 0x3a4) != 0) {
            sym.mhi_device_put(param_1 + -0x28);
        }
        return 0;
    }
    return 0;
}


// ===== sym.mhi_intvec_handler.cfi_jt @ 0x08005b28 (size 8) =====

ulong sym.mhi_intvec_handler.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __wake_up(param_2 + 0x208,3,0,0);
    return 2;
}


// ===== sym.mhi_irq_handler.cfi_jt @ 0x08005b30 (size 8) =====

ulong sym.mhi_irq_handler.cfi_jt(ulong param_1,int64_t *param_2)

{
    uint64_t *puVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    char *pcVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    code *pcVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *param_2;
    uVar10 = param_2[6];
    uVar9 = *(**(iVar7 + 0x138) + *(param_2 + 2) * 0x2c + 0x1c);
    iVar8 = *(iVar7 + 8);
    if ((uVar9 < uVar10) || (param_2[0xd] + uVar10 <= uVar9)) {
        iVar7 = *(iVar8 + 0xc0);
        _dev_err(iVar8 + 0x28,"[E][%s] Event ring rp points outside of the event ring\n","mhi_irq_handler");
        if (iVar7 == 0) {
            return 1;
        }
        if (2 < *(iVar7 + 0x18)) {
            return 1;
        }
        uVar5 = *(iVar7 + 0x20);
        pcVar6 = "[E][%s] Event ring rp points outside of the event ring\n";
    }
    else {
        if (param_2[10] == param_2[9] + (uVar9 - uVar10)) {
            return 1;
        }
        if (*(param_2 + 0x111) != '\0') {
            iVar7 = *(param_2[1] + 0x110);
            if (iVar7 == 0) {
                return 1;
            }
            if (*(iVar7 + 0xb0) == 0) {
                return 1;
            }
            pcVar11 = *(*(iVar7 + 0xb0) + -8);
            if (pcVar11 == NULL) {
                return 1;
            }
            if (pcVar11 != sym.__typeid__ZTSFvP10mhi_device12mhi_callbackE_global_addr) {
                __cfi_slowpath_diag(0x67f3a51ad5c16f72,pcVar11,0x8000b40);
            }
            (*pcVar11)(iVar7,1);
            return 1;
        }
        iVar2 = param_2[4];
        if (iVar2 == 0) {
            puVar1 = param_2 + 0x16;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar9 = *puVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar9 | 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
            if ((uVar9 & 1) != 0) {
                return 1;
            }
            __tasklet_schedule(param_2 + 0x15);
            return 1;
        }
        if (iVar2 == 2) {
            queue_work_on(0x20,*(iVar7 + 0x200),param_2 + 0x1a);
            return 1;
        }
        if (iVar2 == 1) {
            puVar1 = param_2 + 0x16;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar9 = *puVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar9 | 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
            if ((uVar9 & 1) != 0) {
                return 1;
            }
            __tasklet_hi_schedule(param_2 + 0x15);
            return 1;
        }
        iVar7 = *(iVar8 + 0xc0);
        if (iVar7 == 0) {
            return 1;
        }
        if (*(iVar7 + 0x18) != 0) {
            return 1;
        }
        uVar5 = *(iVar7 + 0x20);
        pcVar6 = "[D][%s] skip unknown priority event\n";
    }
    ipc_log_string(uVar5,pcVar6,"mhi_irq_handler");
    return 1;
}


// ===== sym.mhi_intvec_threaded_handler.cfi_jt @ 0x08005b38 (size 8) =====

ulong sym.mhi_intvec_threaded_handler.cfi_jt(ulong param_1,int64_t param_2)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t extraout_x1;
    char *pcVar5;
    char *pcVar6;
    char *pcVar7;
    char *pcVar8;
    uint32_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar10;
    int64_t iVar11;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iVar1 = param_2 + 0x170;
    iStack_48 = *(iVar11 + 0x5e0);
    _raw_write_lock_irq(iVar1);
    if ((*(param_2 + 0x17c) & 0x7de) != 0) {
        pcVar10 = *(param_2 + 0x268);
        iVar11 = *(param_2 + 0x18);
        uStack_4c = 0;
        __cfi_slowpath_diag(0x67f4bcfe73f7260,pcVar10,0x8000aa0);
        iVar4 = (*pcVar10)(param_2,iVar11 + 0x48,&uStack_4c);
        pcVar10 = *(param_2 + 0x268);
        uVar9 = uStack_4c >> 8;
        iVar11 = *(param_2 + 0x20);
        uStack_4c = 0;
        uVar9 = uVar9 & 0xff;
        if (iVar4 != 0) {
            uVar9 = 0x100;
        }
        __cfi_slowpath_diag(0x67f4bcfe73f7260,pcVar10,0x8000aa0);
        iVar4 = (*pcVar10)(param_2,iVar11 + 0x28,&uStack_4c);
        iVar11 = *(*(param_2 + 8) + 0xc0);
        uVar2 = uStack_4c;
        if (iVar4 != 0) {
            uVar2 = 10;
        }
        if ((iVar11 != 0) && (*(iVar11 + 0x18) == 0)) {
            if (*(param_2 + 0x184) < 10) {
                pcVar5 = *(reloc..str.llvm.39275123862783422 + *(param_2 + 0x184) * 8);
            }
            else {
                pcVar5 = "INVALID_EE";
            }
            uVar3 = *(param_2 + 0x188);
            pcVar6 = "INVALID_STATE";
            if ((uVar3 < 0x100) && (0xf6 < uVar3 - 8)) {
                pcVar6 = *(reloc..str.14.llvm.39275123862783422 + uVar3 * 8);
            }
            if (uVar2 < 10) {
                pcVar7 = *(reloc..str.llvm.39275123862783422 + uVar2 * 8);
            }
            else {
                pcVar7 = "INVALID_EE";
            }
            pcVar8 = "INVALID_STATE";
            if ((uVar9 < 0x100) && (0xf6 < uVar9 - 8)) {
                pcVar8 = *(reloc..str.14.llvm.39275123862783422 + uVar9 * 8);
            }
            ipc_log_string(*(iVar11 + 0x20),"[D][%s] local ee: %s state: %s device ee: %s state: %s\n",
                           "mhi_intvec_threaded_handler",pcVar5,pcVar6,pcVar7,pcVar8);
        }
        if (uVar9 == 0xff) {
            iVar11 = *(*(param_2 + 8) + 0xc0);
            if ((iVar11 != 0) && (*(iVar11 + 0x18) == 0)) {
                ipc_log_string(*(iVar11 + 0x20),"[D][%s] System error detected\n","mhi_intvec_threaded_handler");
            }
            iVar4 = sym.mhi_tryset_pm_state(param_2,0x100);
            _raw_write_unlock_irq(iVar1);
            if ((iVar4 == 0x100) && (uVar2 != *(param_2 + 0x184))) {
                if ((uVar2 - 5 < 2) || (uVar2 == 0)) {
                    pcVar10 = *(param_2 + 0x220);
                    __cfi_slowpath_diag(0x6ba83359ac4765be,pcVar10,0x8000b80);
                    (*pcVar10)(param_2,7);
                    *(param_2 + 0x184) = uVar2;
                }
                else if (uVar2 == 3) {
                    if ((*(param_2 + 0x88) != 0) && (*(param_2 + 0x188) - 2U < 5)) {
                        sym.mhi_report_error(param_2);
                        pcVar10 = *(param_2 + 0x220);
                        __cfi_slowpath_diag(0x6ba83359ac4765be,pcVar10,0x8000b60);
                        (*pcVar10)(param_2,4);
                        *(param_2 + 0x184) = 3;
                        __wake_up(param_2 + 0x208,3,0,0);
                    }
                    goto code_r0x08009630;
                }
                __wake_up(param_2 + 0x208,3,0,0);
                sym.mhi_pm_sys_err_handler(param_2);
            }
            goto code_r0x08009630;
        }
    }
    _raw_write_unlock_irq(iVar1);
code_r0x08009630:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_48) {
        return 1;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.mhi_intvec_handler;
    __wake_up(extraout_x1 + 0x208,3,0,0);
    return 2;
}


// ===== sym.mhi_get_free_desc_count.cfi_jt @ 0x08005b40 (size 8) =====

int64_t sym.mhi_get_free_desc_count.cfi_jt(int64_t param_1,int param_2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    
    iVar5 = 0x18;
    if (param_2 != 1) {
        iVar5 = 0x20;
    }
    iVar5 = *(param_1 + iVar5);
    uVar1 = *(iVar5 + 0x90);
    uVar2 = *(iVar5 + 0x98);
    if (uVar2 < uVar1) {
        uVar3 = 0;
        if (*(iVar5 + 0xa0) != 0) {
            uVar3 = (uVar1 - uVar2) / *(iVar5 + 0xa0);
        }
        return uVar3 - 1;
    }
    uVar3 = *(iVar5 + 0xa0);
    uVar4 = 0;
    if (uVar3 != 0) {
        uVar4 = (uVar1 - *(iVar5 + 0x88)) / uVar3;
    }
    uVar1 = 0;
    if (uVar3 != 0) {
        uVar1 = ((*(iVar5 + 0x88) + *(iVar5 + 0xa8)) - uVar2) / uVar3;
    }
    return uVar4 + uVar1 + 0xffffffff;
}


// ===== sym.__typeid__ZTSFvP10mhi_deviceE_global_addr @ 0x08005b48 (size 8) =====

void sym.__typeid__ZTSFvP10mhi_deviceE_global_addr(int64_t param_1)

{
    code *pcVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x10);
    *(param_1 + 0x3cc) = *(param_1 + 0x3cc) + 1;
    _raw_read_lock_bh(iVar2 + 0x170);
    if ((*(iVar2 + 0x17c) & 0x30) != 0) {
        pm_wakeup_dev_event(*(iVar2 + 8) + 0x28,0,0);
        pcVar1 = *(iVar2 + 0x240);
        if (9 < (pcVar1 + -0x8005c30 >> 3 | pcVar1 << 0x3d)) {
            __cfi_slowpath_diag(0x9d98c101a4fe7fa9,pcVar1,0x8000fe0);
        }
        (*pcVar1)(iVar2);
        pcVar1 = *(iVar2 + 0x248);
        if (7 < (pcVar1 + -0x8005c80 >> 3 | pcVar1 << 0x3d)) {
            __cfi_slowpath_diag(0x95232cda069bc43d,pcVar1,0x8001000);
        }
        (*pcVar1)(iVar2);
    }
    pcVar1 = *(iVar2 + 0x228);
    if (2 < (pcVar1 + -0x8005ad8 >> 3 | pcVar1 << 0x3d)) {
        __cfi_slowpath_diag(0xba8145ef24be26ed,pcVar1,0x8000f20);
    }
    (*pcVar1)(iVar2,1);
    _raw_read_unlock_bh(iVar2 + 0x170);
    return;
}


// ===== sym.mhi_unprepare_from_transfer.cfi_jt @ 0x08005b50 (size 8) =====

void sym.mhi_unprepare_from_transfer.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x10);
    if (*(param_1 + 0x20) != 0) {
        sym.mhi_unprepare_channel(arg1,*(param_1 + 0x20));
    }
    if (*(param_1 + 0x18) != 0) {
        sym.mhi_unprepare_channel(arg1,*(param_1 + 0x18));
    }
    return;
}


// ===== sym.mhi_device_put.cfi_jt @ 0x08005b58 (size 8) =====

void sym.mhi_device_put.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x10);
    *(param_1 + 0x3cc) = *(param_1 + 0x3cc) + -1;
    _raw_read_lock_bh(iVar2 + 0x170);
    if ((*(iVar2 + 0x17c) & 0x30) != 0) {
        pm_wakeup_dev_event(*(iVar2 + 8) + 0x28,0,0);
        pcVar1 = *(iVar2 + 0x240);
        if (9 < (pcVar1 + -0x8005c30 >> 3 | pcVar1 << 0x3d)) {
            __cfi_slowpath_diag(0x9d98c101a4fe7fa9,pcVar1,0x8000fe0);
        }
        (*pcVar1)(iVar2);
        pcVar1 = *(iVar2 + 0x248);
        if (7 < (pcVar1 + -0x8005c80 >> 3 | pcVar1 << 0x3d)) {
            __cfi_slowpath_diag(0x95232cda069bc43d,pcVar1,0x8001000);
        }
        (*pcVar1)(iVar2);
    }
    pcVar1 = *(iVar2 + 0x230);
    if (2 < (pcVar1 + -0x8005ad8 >> 3 | pcVar1 << 0x3d)) {
        __cfi_slowpath_diag(0xba8145ef24be26ed,pcVar1,0x8000f40);
    }
    (*pcVar1)(iVar2,0);
    _raw_read_unlock_bh(iVar2 + 0x170);
    return;
}


// ===== sym.mhi_stop_transfer.cfi_jt @ 0x08005b60 (size 8) =====

void sym.mhi_stop_transfer.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.mhi_update_transfer_state(param_1,1);
    return;
}


// ===== sym.mhi_device_get_sync.cfi_jt @ 0x08005b68 (size 8) =====

void sym.mhi_device_get_sync.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.__mhi_device_get_sync(*(param_1 + 0x10));
    if (iVar1 == 0) {
        *(param_1 + 0x3cc) = *(param_1 + 0x3cc) + 1;
    }
    return;
}


// ===== sym.mhi_start_transfer.cfi_jt @ 0x08005b70 (size 8) =====

void sym.mhi_start_transfer.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.mhi_update_transfer_state(param_1,2);
    return;
}


// ===== sym.__mhi_driver_register.cfi_jt @ 0x08005b78 (size 8) =====

ulong sym.__mhi_driver_register.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(param_1 + 8) == 0) || (*(param_1 + 0x10) == 0)) {
        uVar1 = 0xffffffea;
    }
    else {
        *(param_1 + 0x68) = sym.mhi_driver_probe.6ea9a53e17dc3aa18347e4cc921a30b8.cfi_jt;
        *(param_1 + 0x38) = obj.mhi_bus_type;
        *(param_1 + 0x40) = param_2;
        *(param_1 + 0x78) = sym.mhi_driver_remove.6ea9a53e17dc3aa18347e4cc921a30b8.cfi_jt;
        uVar1 = driver_register(param_1 + 0x30);
    }
    return uVar1;
}


// ===== sym.log_level_store.74907ba8ca9a47fec9848b5e279d5fb3.cfi_jt @ 0x08005b80 (size 8) =====

int64_t sym.log_level_store.74907ba8ca9a47fec9848b5e279d5fb3.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    uint32_t uVar2;
    char *pcVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar5;
    int64_t iVar6;
    ulong unaff_x30;
    ulong uStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    pcVar3 = &uStack_3c;
    iVar5 = *(param_1 + -0x18);
    uStack_3c = 0;
    iVar6 = *(*(iVar5 + 8) + 0xc0);
    iVar1 = kstrtouint(param_3,0);
    if (iVar1 < 0) {
        param_4 = -0x16;
    }
    else if (iVar6 == 0) {
        param_4 = -5;
    }
    else {
        *(iVar6 + 0x18) = uStack_3c;
        iVar5 = *(*(iVar5 + 8) + 0xc0);
        if ((iVar5 != 0) && (*(iVar5 + 0x18) < 2)) {
            if (uStack_3c < 5) {
                pcVar4 = *(obj.mhi_log_level_str + uStack_3c * 8);
            }
            else {
                pcVar4 = "Mask all";
            }
            pcVar3 = "log_level_store";
            ipc_log_string(*(iVar5 + 0x20),"[I][%s] IPC log level changed to: %s\n","log_level_store",pcVar4);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.time_show;
    pcStack_68 = sym.time_show;
    iVar5 = sp_el0;
    iStack_78 = *(iVar5 + 0x5e0);
    iVar5 = *(iVar6 + -0x18);
    uStack_88 = 0;
    uStack_80 = 0;
    puStack_70 = &stack0xffffffffffffffd0;
    iVar1 = sym.mhi_get_remote_time_sync(iVar6 + -0x28,&uStack_80,&uStack_88);
    if (iVar1 == 0) {
        pcVar4 = "local: %llu remote: %llu (ticks)\n";
        iVar1 = scnprintf(pcVar3,0x1000,"local: %llu remote: %llu (ticks)\n",uStack_80,uStack_88);
    }
    else {
        iVar5 = *(*(iVar5 + 8) + 0xc0);
        _dev_err(iVar6,"[E][%s] Failed to obtain time, ret:%d\n","time_show",iVar1);
        if ((iVar5 != 0) && (*(iVar5 + 0x18) < 3)) {
            ipc_log_string(*(iVar5 + 0x20),"[E][%s] Failed to obtain time, ret:%d\n","time_show",iVar1);
        }
        pcVar4 = "Request failed or feature unsupported\n";
        iVar1 = scnprintf(pcVar3,0x1000,"Request failed or feature unsupported\n");
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_78) {
        return iVar1;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18_00 = sym.time_async_show;
    iVar6 = *(iVar5 + -0x18);
    uVar2 = prandom_u32();
    if (uVar2 == 0) {
        uVar2 = 1;
    }
    iVar1 = sym.mhi_get_remote_time(iVar5 + -0x28,uVar2,0x8005a68);
    if (iVar1 == 0) {
        iVar1 = scnprintf(pcVar4,0x1000,"Requested time asynchronously with seq:%llx\n",uVar2);
    }
    else {
        iVar6 = *(*(iVar6 + 8) + 0xc0);
        _dev_err(iVar5,"[E][%s] Failed to request time, seq:%llx, ret:%d\n","time_async_show",uVar2,iVar1);
        if ((iVar6 != 0) && (*(iVar6 + 0x18) < 3)) {
            ipc_log_string(*(iVar6 + 0x20),"[E][%s] Failed to request time, seq:%llx, ret:%d\n","time_async_show",
                           uVar2,iVar1);
        }
        iVar1 = scnprintf(pcVar4,0x1000,"Request failed or feature unsupported\n");
    }
    return iVar1;
}


// ===== sym.mhi_get_exec_env.cfi_jt @ 0x08005b88 (size 8) =====

void sym.mhi_get_exec_env.cfi_jt(int64_t param_1)

{
    uint uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar5;
    code *pcVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uint32_t uStack_7c;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t iStack_60;
    code *pcStack_50;
    int64_t iStack_48;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    iVar7 = *(param_1 + 0x20);
    uStack_3c = 0;
    pcVar5 = *(param_1 + 0x268);
    __cfi_slowpath_diag(0x67f4bcfe73f7260,pcVar5,0x8000aa0);
    iVar2 = (*pcVar5)(param_1,iVar7 + 0x28,&uStack_3c);
    iVar8 = sp_el0;
    uVar1 = uStack_3c;
    if (iVar2 != 0) {
        uVar1 = 10;
    }
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return;
    }
    iVar3 = __stack_chk_fail(uVar1);
    *extraout_x18 = sym.mhi_get_mhi_state;
    pcStack_68 = sym.mhi_get_mhi_state;
    iVar8 = sp_el0;
    iStack_78 = *(iVar8 + 0x5e0);
    iVar8 = *(iVar3 + 0x18);
    uStack_7c = 0;
    pcVar6 = *(iVar3 + 0x268);
    puStack_70 = &stack0xffffffffffffffd0;
    iStack_60 = iVar7;
    pcStack_50 = pcVar5;
    iStack_48 = param_1;
    __cfi_slowpath_diag(0x67f4bcfe73f7260,pcVar6,0x8000aa0);
    iVar2 = (*pcVar6)(iVar3,iVar8 + 0x48,&uStack_7c);
    iVar8 = sp_el0;
    uVar4 = uStack_7c >> 8 & 0xff;
    if (iVar2 != 0) {
        uVar4 = 0x100;
    }
    if (*(iVar8 + 0x5e0) == iStack_78) {
        return;
    }
    iVar8 = __stack_chk_fail(uVar4);
    *extraout_x18_00 = sym.mhi_soc_reset;
    pcVar5 = *(iVar8 + 0x278);
    if (pcVar5 == NULL) {
        pcVar5 = *(iVar8 + 0x270);
        iVar7 = *(iVar8 + 0x18);
        __cfi_slowpath_diag(0xcc1f7c1a9c27c280,pcVar5,0x8000ac0);
        (*pcVar5)(iVar8,iVar7 + 0xb0,1);
    }
    else {
        if (7 < (pcVar5 + -0x8005c80 >> 3 | pcVar5 << 0x3d)) {
            __cfi_slowpath_diag(0x95232cda069bc43d,pcVar5,0x8000b20);
        }
        (*pcVar5)(iVar8);
    }
    return;
}


// ===== sym.mhi_get_mhi_state.cfi_jt @ 0x08005b90 (size 8) =====

void sym.mhi_get_mhi_state.cfi_jt(int64_t param_1)

{
    int iVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iVar4 = *(param_1 + 0x18);
    uStack_3c = 0;
    pcVar3 = *(param_1 + 0x268);
    __cfi_slowpath_diag(0x67f4bcfe73f7260,pcVar3,0x8000aa0);
    iVar1 = (*pcVar3)(param_1,iVar4 + 0x48,&uStack_3c);
    iVar4 = sp_el0;
    uVar2 = uStack_3c >> 8 & 0xff;
    if (iVar1 != 0) {
        uVar2 = 0x100;
    }
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    iVar4 = __stack_chk_fail(uVar2);
    *extraout_x18 = sym.mhi_soc_reset;
    pcVar3 = *(iVar4 + 0x278);
    if (pcVar3 == NULL) {
        pcVar3 = *(iVar4 + 0x270);
        iVar5 = *(iVar4 + 0x18);
        __cfi_slowpath_diag(0xcc1f7c1a9c27c280,pcVar3,0x8000ac0);
        (*pcVar3)(iVar4,iVar5 + 0xb0,1);
    }
    else {
        if (7 < (pcVar3 + -0x8005c80 >> 3 | pcVar3 << 0x3d)) {
            __cfi_slowpath_diag(0x95232cda069bc43d,pcVar3,0x8000b20);
        }
        (*pcVar3)(iVar4);
    }
    return;
}


// ===== sym.mhi_controller_get_privdata.cfi_jt @ 0x08005b98 (size 8) =====

ulong sym.mhi_controller_get_privdata.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    int64_t iVar2;
    
    uVar1 = 0;
    if (param_1 != 0) {
        if ((*(param_1 + 8) == 0) || (iVar2 = *(*(param_1 + 8) + 0xc0), iVar2 == 0)) {
            return 0;
        }
        uVar1 = *(iVar2 + 0x38);
    }
    return uVar1;
}


// ===== sym.mhi_device_get_sync_atomic.cfi_jt @ 0x08005ba0 (size 8) =====

ulong sym.mhi_device_get_sync_atomic.cfi_jt(int64_t param_1,int param_2,uint64_t param_3)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t arg1;
    ulong uVar3;
    ulong uVar4;
    code *pcVar5;
    ulong *in_x18;
    int64_t arg1_00;
    int64_t iVar6;
    char *pcVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(param_1 + 0x10);
    iVar6 = arg1_00 + 0x170;
    _raw_read_lock_bh(iVar6);
    if (0x7f < *(arg1_00 + 0x17c)) {
        _raw_read_unlock_bh(iVar6);
        return 0xfffffffb;
    }
    pcVar5 = *(arg1_00 + 0x228);
    if (2 < (pcVar5 + -0x8005ad8 >> 3 | pcVar5 << 0x3d)) {
        __cfi_slowpath_diag(0xba8145ef24be26ed,pcVar5,0x80010e0);
    }
    (*pcVar5)(arg1_00,1);
    _raw_read_unlock_bh(iVar6);
    *(param_1 + 0x3cc) = *(param_1 + 0x3cc) + 1;
    pm_wakeup_dev_event(*(arg1_00 + 8) + 0x28,0,0);
    pcVar5 = *(arg1_00 + 0x240);
    if (9 < (pcVar5 + -0x8005c30 >> 3 | pcVar5 << 0x3d)) {
        __cfi_slowpath_diag(0x9d98c101a4fe7fa9,pcVar5,0x8001100);
    }
    (*pcVar5)(arg1_00);
    if (param_2 == 0) {
        if (*(arg1_00 + 0x17c) != 4) {
            iVar6 = *(*(arg1_00 + 8) + 0xc0);
            _dev_err(param_1 + 0x28,"[E][%s] Return without waiting for M0\n","mhi_device_get_sync_atomic");
            if ((iVar6 != 0) && (*(iVar6 + 0x18) < 3)) {
                ipc_log_string(*(iVar6 + 0x20),"[E][%s] Return without waiting for M0\n","mhi_device_get_sync_atomic")
                ;
            }
        }
        pcVar5 = *(arg1_00 + 0x248);
        if ((pcVar5 + -0x8005c80 >> 3 | pcVar5 << 0x3d) < 8) goto code_r0x08013ce4;
        uVar3 = 0x8001120;
    }
    else {
        if ((param_3 & 1) == 0) {
            uVar1 = *(arg1_00 + 0x17c);
            for (; ((arg1 = uVar1, uVar1 != 4 && (uVar1 < 0x80)) && (0 < param_2)); param_2 = param_2 + -100) {
                __const_udelay(0x68dbc);
                uVar1 = *(arg1_00 + 0x17c);
            }
        }
        else {
            while (iVar2 = sym.mhi_get_mhi_state(arg1_00), iVar2 != 2) {
                arg1 = *(arg1_00 + 0x17c);
                if (0x7f < *(arg1_00 + 0x17c) || param_2 < 1) goto code_r0x08013cb8;
                __const_udelay(0x68dbc);
                param_2 = param_2 + -100;
            }
            arg1 = *(arg1_00 + 0x17c);
        }
code_r0x08013cb8:
        if ((0x7f < arg1) || (param_2 < 1)) {
            uVar1 = *(arg1_00 + 0x188);
            iVar8 = *(*(arg1_00 + 8) + 0xc0);
            pcVar7 = "INVALID_STATE";
            if ((uVar1 < 0x100) && (0xf6 < uVar1 - 8)) {
                pcVar7 = *(reloc..str.14.llvm.39275123862783422 + uVar1 * 8);
            }
            uVar3 = sym.to_mhi_pm_state_str(arg1);
            _dev_err(param_1 + 0x28,"[E][%s] Did not enter M0, cur_state: %s pm_state: %s\n",
                     "mhi_device_get_sync_atomic",pcVar7,uVar3);
            if ((iVar8 != 0) && (*(iVar8 + 0x18) < 3)) {
                uVar1 = *(arg1_00 + 0x188);
                uVar3 = *(iVar8 + 0x20);
                pcVar7 = "INVALID_STATE";
                if ((uVar1 < 0x100) && (0xf6 < uVar1 - 8)) {
                    pcVar7 = *(reloc..str.14.llvm.39275123862783422 + uVar1 * 8);
                }
                uVar4 = sym.to_mhi_pm_state_str(*(arg1_00 + 0x17c));
                ipc_log_string(uVar3,"[E][%s] Did not enter M0, cur_state: %s pm_state: %s\n",
                               "mhi_device_get_sync_atomic",pcVar7,uVar4);
            }
            _raw_read_lock_bh(iVar6);
            pcVar5 = *(arg1_00 + 0x230);
            if (2 < (pcVar5 + -0x8005ad8 >> 3 | pcVar5 << 0x3d)) {
                __cfi_slowpath_diag(0xba8145ef24be26ed,pcVar5,0x8001140);
            }
            (*pcVar5)(arg1_00,0);
            _raw_read_unlock_bh(iVar6);
            *(param_1 + 0x3cc) = *(param_1 + 0x3cc) + -1;
            pcVar5 = *(arg1_00 + 0x248);
            if (7 < (pcVar5 + -0x8005c80 >> 3 | pcVar5 << 0x3d)) {
                __cfi_slowpath_diag(0x95232cda069bc43d,pcVar5,0x8001160);
            }
            (*pcVar5)(arg1_00);
            return 0xffffff92;
        }
        pcVar5 = *(arg1_00 + 0x248);
        if ((pcVar5 + -0x8005c80 >> 3 | pcVar5 << 0x3d) < 8) goto code_r0x08013ce4;
        uVar3 = 0x8001180;
    }
    __cfi_slowpath_diag(0x95232cda069bc43d,pcVar5,uVar3);
code_r0x08013ce4:
    (*pcVar5)(arg1_00);
    return 0;
}


// ===== sym.mhi_match.6ea9a53e17dc3aa18347e4cc921a30b8.cfi_jt @ 0x08005ba8 (size 8) =====

ulong sym.mhi_match.6ea9a53e17dc3aa18347e4cc921a30b8.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    ulong *in_x18;
    char *pcVar2;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(param_1 + 0x390) != 1) && (pcVar2 = *(param_2 + -0x30), *pcVar2 != '\0')) {
        uVar3 = *(param_1 + -0x20);
        do {
            iVar1 = strcmp(uVar3,pcVar2);
            if (iVar1 == 0) {
                *(param_1 + -0x28) = pcVar2;
                return 1;
            }
            pcVar2 = pcVar2 + 0x28;
        } while (*pcVar2 != '\0');
    }
    return 0;
}


// ===== sym.mhi_destroy_device.cfi_jt @ 0x08005bb0 (size 8) =====

ulong sym.mhi_destroy_device.cfi_jt(int64_t param_1,uint32_t *param_2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    uint64_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x80) != obj.mhi_bus_type) {
        return 0;
    }
    if (*(param_1 + 0x390) == 1) {
        return 0;
    }
    iVar2 = *(param_1 + -0x18);
    iVar1 = *(param_1 + -0x10);
    iVar3 = *(param_1 + -8);
    if (param_2 == NULL) {
        if (iVar1 != 0) {
code_r0x08008ce8:
            uVar4 = 10;
            goto code_r0x08008cec;
        }
        if (iVar3 == 0) goto code_r0x08008d24;
    }
    else {
        uVar4 = *param_2;
        if (iVar1 != 0) {
            if (*param_2 == 10) goto code_r0x08008ce8;
            if ((*(iVar1 + 0x100) >> (uVar4 & 0x3f) & 1) == 0) {
                return 0;
            }
code_r0x08008cec:
            put_device(*(iVar1 + 0x110) + 0x28);
        }
        if (iVar3 == 0) goto code_r0x08008d24;
        if ((uVar4 != 10) && ((*(iVar3 + 0x100) >> (uVar4 & 0x3f) & 1) == 0)) {
            return 0;
        }
    }
    put_device(*(iVar3 + 0x110) + 0x28);
code_r0x08008d24:
    iVar2 = *(*(iVar2 + 8) + 0xc0);
    if ((iVar2 != 0) && (*(iVar2 + 0x18) == 0)) {
        ipc_log_string(*(iVar2 + 0x20),"[D][%s] destroy device for chan:%s\n","mhi_destroy_device",*(param_1 + -0x20)
                      );
    }
    device_del(param_1);
    put_device(param_1);
    return 0;
}


// ===== sym.mhi_notify_fatal_cb.74907ba8ca9a47fec9848b5e279d5fb3.cfi_jt @ 0x08005bb8 (size 8) =====

ulong sym.mhi_notify_fatal_cb.74907ba8ca9a47fec9848b5e279d5fb3.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.mhi_notify(param_1 + -0x28,7);
    return 0;
}


// ===== sym.__typeid__ZTSFiP14mhi_controllerP9mhi_eventjE_global_addr @ 0x08005bc0 (size 8) =====

int sym.__typeid__ZTSFiP14mhi_controllerP9mhi_eventjE_global_addr(int64_t param_1,ulong *param_2,int param_3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    int iVar7;
    code *pcVar8;
    ulong *arg2;
    uint64_t *puVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = -5;
    if ((*(param_1 + 0x17c) != 1) && (*(param_1 + 0x17c) < 0x80)) {
        iVar6 = *(param_1 + 8);
        uVar5 = param_2[6];
        puVar9 = **(param_1 + 0x138) + *(param_2 + 2) * 0x2c + 0x1c;
        uVar4 = *puVar9;
        if ((uVar4 < uVar5) || (param_2[0xd] + uVar5 <= uVar4)) {
            iVar3 = *(iVar6 + 0xc0);
            _dev_err(iVar6 + 0x28,"[E][%s] Event ring rp points outside of the event ring\n",
                     "mhi_process_data_event_ring");
            if (iVar3 != 0) {
code_r0x0800a7c8:
                if (*(iVar3 + 0x18) < 3) {
                    ipc_log_string(*(iVar3 + 0x20),"[E][%s] Event ring rp points outside of the event ring\n",
                                   "mhi_process_data_event_ring");
                }
            }
code_r0x0800a7ec:
            iVar7 = -5;
        }
        else {
            iVar7 = 0;
            if ((param_3 != 0) && (arg2 = param_2[10], arg2 != param_2[9] + (uVar4 - uVar5))) {
                iVar7 = 1;
                iVar3 = iVar6;
                do {
                    iVar3 = *(iVar3 + 0xc0);
                    uVar1 = *(arg2 + 0xc);
                    uVar2 = uVar1;
                    if ((iVar3 != 0) && (*(iVar3 + 0x18) == 0)) {
                        ipc_log_string(*(iVar3 + 0x20),"[D][%s] Processing Event:0x%llx 0x%08x 0x%08x\n",
                                       "mhi_process_data_event_ring",*arg2,*(arg2 + 1),uVar1);
                        uVar2 = *(arg2 + 0xc);
                    }
                    uVar2 = uVar2 >> 0x18;
                    if (*(param_1 + 0xb8) <= uVar2) {
    //WARNING: Does not return
                        pcVar8 = SoftwareBreakpoint(0x800,0x800a6d0);
                        (*pcVar8)();
                    }
                    if ((uVar2 < *(param_1 + 0xb8)) &&
                       (iVar3 = *(param_1 + 0x98) + uVar2 * 0x198, *(iVar3 + 0x189) != '\0')) {
                        uVar1 = uVar1 >> 0x10 & 0xff;
                        if (uVar1 == 0x22) {
                            sym.parse_xfer_event(param_1,arg2,iVar3);
                        }
                        else {
                            if (uVar1 != 0x28) goto code_r0x0800a630;
                            sym.parse_rsc_event(param_1,arg2,iVar3);
                        }
                        param_3 = param_3 + -1;
                    }
code_r0x0800a630:
                    uVar4 = param_2[0xb] + param_2[0xc];
                    param_2[0xb] = uVar4;
                    if (uVar4 < param_2[9] + param_2[0xd]) {
                        iVar3 = *param_2[7] + param_2[0xc];
                    }
                    else {
                        iVar3 = param_2[6];
                        param_2[0xb] = param_2[9];
                    }
                    *param_2[7] = iVar3;
                    uVar4 = param_2[10] + param_2[0xc];
                    if (param_2[9] + param_2[0xd] <= param_2[10] + param_2[0xc]) {
                        uVar4 = param_2[9];
                    }
                    param_2[10] = uVar4;
                    DataMemoryBarrier(2,2);
                    uVar4 = *puVar9;
                    uVar5 = param_2[6];
                    if ((uVar4 < uVar5) || (param_2[0xd] + uVar5 <= uVar4)) {
                        iVar3 = *(*(param_1 + 8) + 0xc0);
                        _dev_err(iVar6 + 0x28,"[E][%s] Event ring rp points outside of the event ring\n",
                                 "mhi_process_data_event_ring");
                        if (iVar3 == 0) goto code_r0x0800a7ec;
                        goto code_r0x0800a7c8;
                    }
                    arg2 = param_2[10];
                    if ((arg2 == param_2[9] + (uVar4 - uVar5)) || (param_3 == 0)) break;
                    iVar3 = *(param_1 + 8);
                    iVar7 = iVar7 + 1;
                } while( true );
            }
            _raw_read_lock_bh(param_1 + 0x170);
            if ((*(param_1 + 0x180) & *(param_1 + 0x17c)) != 0) {
                pcVar8 = param_2[0x14];
                if (1 < (pcVar8 + -0x8005ac8 >> 3 | pcVar8 << 0x3d)) {
                    __cfi_slowpath_diag(0xe80f8bb5456f22db,pcVar8,0x8000ae0);
                }
                (*pcVar8)(*param_2,param_2 + 0x11,param_2[0x10],*param_2[7]);
            }
            _raw_read_unlock_bh(param_1 + 0x170);
        }
    }
    return iVar7;
}


// ===== sym.mhi_process_misc_bw_ev_ring.cfi_jt @ 0x08005bc8 (size 8) =====

code * sym.mhi_process_misc_bw_ev_ring.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    uint32_t uVar4;
    int64_t *arg2;
    ulong uVar5;
    int64_t *piVar6;
    int64_t *piVar7;
    int64_t iVar8;
    ulong *in_x18;
    code *pcVar9;
    code *unaff_x22;
    int64_t unaff_x24;
    int64_t iVar10;
    ulong unaff_x30;
    uint64_t uStack_68;
    uint32_t uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_58 = *(iVar10 + 0x5e0);
    pcVar9 = 0xffffffea;
    uVar4 = *(param_2 + 0x10);
    iVar10 = **(param_1 + 0x138);
    uStack_60 = 0;
    uStack_68 = 0;
    if (7 < *(param_1 + 0x184)) goto code_r0x08014a28;
    if ((1 << (*(param_1 + 0x184) & 0x1f) & 0x94U) == 0) goto code_r0x08014a28;
    iVar1 = param_2 + 0x100;
    unaff_x22 = param_2 + 0x28;
    unaff_x24 = *(*(param_1 + 8) + 0xc0);
    _raw_spin_lock_bh(iVar1);
    arg2 = sym.mhi_to_virtual(unaff_x22,*(iVar10 + uVar4 * 0x2c + 0x1c));
    if (*(param_2 + 0x50) == arg2) {
        iVar10 = *(*(param_1 + 8) + 0xc0);
        if ((iVar10 != 0) && (*(iVar10 + 0x18) == 0)) {
            param_2 = *(iVar10 + 0x20);
            param_1 = *arg2;
            uVar5 = sym.mhi_to_physical(unaff_x22,arg2);
            ipc_log_string(param_2,"[D][%s] Ignore BW event:0x%llx ev_ring RP:0x%llx\n","mhi_process_misc_bw_ev_ring"
                           ,param_1,uVar5);
        }
        _raw_spin_unlock_bh(iVar1);
        pcVar9 = NULL;
        goto code_r0x08014a5c;
    }
    piVar6 = *(param_2 + 0x48);
    if (arg2 == piVar6) {
        arg2 = arg2 + *(param_2 + 0x68);
    }
    piVar7 = arg2 + -4;
    *(param_2 + 0x50) = arg2 + -2;
    if (piVar7 < piVar6) {
        iVar10 = *(param_2 + 0x60);
        iVar8 = *(param_2 + 0x68);
        piVar7 = piVar6 + (iVar8 - iVar10);
    }
    else {
        iVar10 = *(param_2 + 0x60);
        iVar8 = *(param_2 + 0x68);
    }
    piVar3 = piVar7 + iVar10;
    if (piVar6 + iVar8 <= piVar7 + iVar10) {
        piVar3 = piVar6;
    }
    *(param_2 + 0x58) = piVar3;
    **(param_2 + 0x38) = (*(param_2 + 0x30) - piVar6) + piVar3;
    uVar2 = *(param_2 + 0x50) + *(param_2 + 0x60);
    if (*(param_2 + 0x48) + *(param_2 + 0x68) <= uVar2) {
        uVar2 = *(param_2 + 0x48);
    }
    *(param_2 + 0x50) = uVar2;
    DataMemoryBarrier(2,2);
    if ((*(arg2 + -4) & 0xff0000) == 0x500000) {
        iVar10 = *(*(param_1 + 8) + 0xc0);
        uStack_68 = CONCAT14(arg2[-1],*(arg2 + -4) >> 0x18);
        uStack_60 = *(arg2 + -7);
        if ((iVar10 != 0) && (*(iVar10 + 0x18) == 0)) {
            ipc_log_string(*(iVar10 + 0x20),"[D][%s] Received BW_REQ with seq:%d link speed:0x%x width:0x%x\n",
                           "mhi_process_misc_bw_ev_ring");
        }
        unaff_x22 = param_1 + 0x170;
        _raw_read_lock_bh(unaff_x22);
        if ((*(param_1 + 0x180) & *(param_1 + 0x17c)) != 0) {
            sym.mhi_ring_er_db(param_2);
        }
        _raw_read_unlock_bh(unaff_x22);
        _raw_spin_unlock_bh(iVar1);
        uVar4 = sym.mhi_device_get_sync(*(param_1 + 8));
        pcVar9 = uVar4;
        if (uVar4 != 0) goto code_r0x08014a28;
        pcVar9 = *(param_1 + 0x240);
        if (9 < (pcVar9 + -0x8005c30 >> 3 | pcVar9 << 0x3d)) goto code_r0x08014b2c;
        while( true ) {
            (*pcVar9)(param_1);
            mutex_lock(param_1 + 0x140);
            pcVar9 = *(unaff_x24 + 0x48);
            __cfi_slowpath_diag(0xf208cef357dcb2f8,pcVar9,0x8001220);
            uVar4 = (*pcVar9)(param_1,&uStack_68);
            pcVar9 = uVar4;
            if (uVar4 == 0) {
                uVar4 = 0;
                *(param_1 + 0x1c0) = uStack_68;
                *(param_1 + 0x1c8) = uStack_60;
            }
            else {
                uVar4 = 0xf00;
            }
            _raw_write_lock_bh(unaff_x22);
            uVar4 = uStack_60 & 0xff | uVar4;
            *(unaff_x24 + 0x5c) = uVar4;
            if ((*(param_1 + 0x180) & *(param_1 + 0x17c)) == 0) {
                iVar10 = *(*(param_1 + 8) + 0xc0);
                if ((iVar10 != 0) && (*(iVar10 + 0x18) == 0)) {
                    ipc_log_string(*(iVar10 + 0x20),"[D][%s] Cached BW response for seq: %u, result: %d\n",
                                   "mhi_process_misc_bw_ev_ring",uStack_60,*(iVar10 + 0x5c));
                }
            }
            else {
                sym.mhi_write_reg(param_1,*(unaff_x24 + 0x40),0,uVar4);
                *(unaff_x24 + 0x5c) = 0;
            }
            _raw_write_unlock_bh(unaff_x22);
            unaff_x22 = *(param_1 + 0x248);
            if (7 < (unaff_x22 + -0x8005c80 >> 3 | unaff_x22 << 0x3d)) {
                __cfi_slowpath_diag(0x95232cda069bc43d,unaff_x22,0x8001240);
            }
            (*unaff_x22)(param_1);
            sym.mhi_device_put(*(param_1 + 8));
            mutex_unlock(param_1 + 0x140);
code_r0x08014a28:
            iVar10 = *(*(param_1 + 8) + 0xc0);
            if ((iVar10 != 0) && (*(iVar10 + 0x18) == 0)) {
                ipc_log_string(*(iVar10 + 0x20),"[D][%s] exit er_index:%u ret:%d\n","mhi_process_misc_bw_ev_ring",
                               *(param_2 + 0x10),pcVar9);
            }
code_r0x08014a5c:
            iVar10 = sp_el0;
            if (*(iVar10 + 0x5e0) == iStack_58) break;
            __stack_chk_fail();
code_r0x08014b2c:
            __cfi_slowpath_diag(0x9d98c101a4fe7fa9,pcVar9,0x8001200);
        }
        return pcVar9;
    }
    //WARNING: Does not return
    pcVar9 = SoftwareBreakpoint(0x800,0x8014a9c);
    (*pcVar9)();
}


// ===== sym.mhi_process_misc_tsync_ev_ring.cfi_jt @ 0x08005bd0 (size 8) =====

ulong sym.mhi_process_misc_tsync_ev_ring.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    code *pcVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong *in_x18;
    ulong uVar11;
    int64_t iVar12;
    int64_t *piVar13;
    int64_t iVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = param_2 + 0x100;
    uVar3 = *(param_2 + 0x10);
    iVar12 = **(param_1 + 0x138);
    iVar14 = *(*(*(param_1 + 8) + 0xc0) + 0x68);
    _raw_spin_lock_bh(iVar8);
    uVar5 = sym.mhi_to_virtual(param_2 + 0x28,*(iVar12 + uVar3 * 0x2c + 0x1c));
    if (*(param_2 + 0x50) == uVar5) {
        _raw_spin_unlock_bh(iVar8);
    }
    else {
        uVar6 = *(param_2 + 0x48);
        if (uVar5 == uVar6) {
            uVar5 = uVar5 + *(param_2 + 0x68);
        }
        uVar9 = uVar5 - 0x20;
        *(param_2 + 0x50) = uVar5 - 0x10;
        if (uVar9 < uVar6) {
            iVar12 = *(param_2 + 0x60);
            iVar10 = *(param_2 + 0x68);
            uVar9 = (uVar6 + iVar10) - iVar12;
        }
        else {
            iVar12 = *(param_2 + 0x60);
            iVar10 = *(param_2 + 0x68);
        }
        uVar1 = uVar9 + iVar12;
        if (uVar6 + iVar10 <= uVar9 + iVar12) {
            uVar1 = uVar6;
        }
        *(param_2 + 0x58) = uVar1;
        **(param_2 + 0x38) = (*(param_2 + 0x30) - uVar6) + uVar1;
        uVar6 = *(param_2 + 0x50) + *(param_2 + 0x60);
        if (*(param_2 + 0x48) + *(param_2 + 0x68) <= uVar6) {
            uVar6 = *(param_2 + 0x48);
        }
        *(param_2 + 0x50) = uVar6;
        DataMemoryBarrier(2,2);
        if (*(uVar5 - 2) != 'H') {
    //WARNING: Does not return
            pcVar7 = SoftwareBreakpoint(0x800,0x80145d0);
            (*pcVar7)();
        }
        iVar4 = *(uVar5 - 8);
        uVar11 = *(uVar5 - 0x10);
        iVar12 = *(*(param_1 + 8) + 0xc0);
        if ((iVar12 != 0) && (*(iVar12 + 0x18) == 0)) {
            ipc_log_string(*(iVar12 + 0x20),"[D][%s] Received TSYNC event with seq: 0x%llx time: 0x%llx\n",
                           "mhi_process_misc_tsync_ev_ring",iVar4,uVar11);
        }
        _raw_read_lock_bh(param_1 + 0x170);
        if ((*(param_1 + 0x180) & *(param_1 + 0x17c)) != 0) {
            sym.mhi_ring_er_db(param_2);
        }
        _raw_read_unlock_bh(param_1 + 0x170);
        _raw_spin_unlock_bh(iVar8);
        mutex_lock(iVar14 + 0x80);
        if (*(iVar14 + 0x28) != iVar4) {
    //WARNING: Does not return
            pcVar7 = SoftwareBreakpoint(0x800,0x8014628);
            (*pcVar7)();
        }
        iVar8 = iVar14 + 0x68;
        _raw_spin_lock(iVar8);
        piVar13 = *(iVar14 + 0x70);
        while ((piVar13 != NULL && (iVar14 + 0x70 != piVar13))) {
            uVar5 = __list_del_entry_valid(piVar13);
            if ((uVar5 & 1) != 0) {
                iVar12 = *piVar13;
                piVar2 = piVar13[1];
                *(iVar12 + 8) = piVar2;
                *piVar2 = iVar12;
            }
            *piVar13 = -0x2152ffffffffff00;
            piVar13[1] = -0x2152fffffffffede;
            _raw_spin_unlock(iVar8);
            pcVar7 = piVar13[5];
            if (pcVar7 != sym.__typeid__ZTSFvP10mhi_devicejyyE_global_addr) {
                __cfi_slowpath_diag(0x91b0562652df3243,pcVar7,0x80011c0);
            }
            (*pcVar7)(piVar13[4],piVar13[2],*(iVar14 + 0x30),uVar11);
            kfree(piVar13);
            _raw_spin_lock(iVar8);
            piVar13 = *(iVar14 + 0x70);
        }
        _raw_spin_unlock(iVar8);
        *(iVar14 + 0x40) = 0;
        *(iVar14 + 0x38) = uVar11;
        complete(iVar14 + 0x48);
        pcVar7 = *(param_1 + 0x248);
        if (7 < (pcVar7 + -0x8005c80 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0x95232cda069bc43d,pcVar7,0x80011e0);
        }
        (*pcVar7)(param_1);
        sym.mhi_device_put(*(param_1 + 8));
        mutex_unlock(iVar14 + 0x80);
    }
    iVar8 = *(*(param_1 + 8) + 0xc0);
    if ((iVar8 != 0) && (*(iVar8 + 0x18) == 0)) {
        ipc_log_string(*(iVar8 + 0x20),"[D][%s] exit er_index: %u, ret: %d\n","mhi_process_misc_tsync_ev_ring",
                       *(param_2 + 0x10),0);
    }
    return 0;
}


// ===== sym.mhi_process_ctrl_ev_ring.cfi_jt @ 0x08005bd8 (size 8) =====

int sym.mhi_process_ctrl_ev_ring.cfi_jt(code *param_1,ulong *param_2)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    uint32_t uVar4;
    char *pcVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong *in_x18;
    int iVar10;
    uint64_t *puVar11;
    uint64_t *arg2;
    code *pcVar12;
    int64_t iVar13;
    int64_t iVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar10 = -5;
    if ((*(param_1 + 0x17c) != 1) && (*(param_1 + 0x17c) < 0x80)) {
        uVar6 = param_2[6];
        iVar8 = *(param_1 + 8);
        puVar11 = **(param_1 + 0x138) + *(param_2 + 2) * 0x2c + 0x1c;
        uVar7 = *puVar11;
        if ((uVar7 < uVar6) || (param_2[0xd] + uVar6 <= uVar7)) {
            iVar13 = *(iVar8 + 0xc0);
            _dev_err(iVar8 + 0x28,"[E][%s] Event ring rp points outside of the event ring\n",
                     "mhi_process_ctrl_ev_ring");
joined_r0x08009edc:
            if ((iVar13 != 0) && (*(iVar13 + 0x18) < 3)) {
                ipc_log_string(*(iVar13 + 0x20),"[E][%s] Event ring rp points outside of the event ring\n",
                               "mhi_process_ctrl_ev_ring");
            }
            iVar10 = -5;
        }
        else {
            iVar13 = param_2[9];
            arg2 = param_2[10];
            pcVar1 = param_1 + 0x170;
            if (arg2 != iVar13 + (uVar7 - uVar6)) {
                iVar10 = 1;
                iVar9 = iVar8;
                do {
                    iVar9 = *(iVar9 + 0xc0);
                    uVar4 = *(arg2 + 0xc);
                    if ((iVar9 != 0) && (*(iVar9 + 0x18) == 0)) {
                        ipc_log_string(*(iVar9 + 0x20),"[D][%s] RP:0x%llx Processing Event:0x%llx 0x%08x 0x%08x\n",
                                       "mhi_process_ctrl_ev_ring",(uVar6 - iVar13) + arg2,*arg2,arg2[1],uVar4);
                    }
                    uVar4 = uVar4 >> 0x10 & 0xff;
                    switch(uVar4) {
                    case 0x20:
                        uVar6 = arg2[1];
                        iVar13 = *(*(param_1 + 8) + 0xc0);
                        uVar7 = uVar6 >> 0x18;
                        if ((iVar13 != 0) && (*(iVar13 + 0x18) == 0)) {
                            pcVar5 = "INVALID_STATE";
                            if (0xf6 < uVar7 - 8) {
                                pcVar5 = *(reloc..str.14.llvm.39275123862783422 + uVar7 * 8);
                            }
                            ipc_log_string(*(iVar13 + 0x20),"[D][%s] State change event to state: %s\n",
                                           "mhi_process_ctrl_ev_ring",pcVar5);
                        }
                        uVar4 = uVar6 >> 0x18;
                        if (uVar4 < 5) {
                            if (uVar4 == 2) {
                                sym.mhi_pm_m0_transition(param_1);
                            }
                            else if (uVar4 == 3) {
                                sym.mhi_pm_m1_transition(param_1);
                            }
                            else {
code_r0x08009d60:
                                iVar13 = *(*(param_1 + 8) + 0xc0);
                                pcVar5 = "INVALID_STATE";
                                if (0xf6 < uVar7 - 8) {
                                    pcVar5 = *(reloc..str.14.llvm.39275123862783422 + uVar7 * 8);
                                }
                                _dev_err(iVar8 + 0x28,"[E][%s] Invalid state: %s\n","mhi_process_ctrl_ev_ring",pcVar5
                                        );
                                if ((iVar13 != 0) && (*(iVar13 + 0x18) < 3)) {
                                    ipc_log_string(*(iVar13 + 0x20),"[E][%s] Invalid state: %s\n",
                                                   "mhi_process_ctrl_ev_ring",pcVar5);
                                }
                            }
                        }
                        else if (uVar4 == 5) {
                            sym.mhi_pm_m3_transition(param_1);
                        }
                        else {
                            if (uVar4 != 0xff) goto code_r0x08009d60;
                            iVar13 = *(*(param_1 + 8) + 0xc0);
                            if ((iVar13 != 0) && (*(iVar13 + 0x18) == 0)) {
                                ipc_log_string(*(iVar13 + 0x20),"[D][%s] System error detected\n",
                                               "mhi_process_ctrl_ev_ring");
                            }
                            _raw_write_lock_irq(pcVar1);
                            iVar2 = sym.mhi_tryset_pm_state(param_1,0x100);
                            _raw_write_unlock_irq(pcVar1);
                            if (iVar2 == 0x100) {
                                sym.mhi_pm_sys_err_handler(param_1);
                            }
                        }
                        break;
                    case 0x21:
                        iVar9 = *(param_1 + 0x130);
                        uVar6 = *arg2;
                        iVar13 = *(param_1 + 8);
                        uVar7 = *(iVar9 + 8);
                        if ((uVar6 < uVar7) || (*(iVar9 + 0x40) + uVar7 <= uVar6)) {
                            iVar9 = *(iVar13 + 0xc0);
                            _dev_err(iVar13 + 0x28,"[E][%s] Event element points outside of the cmd ring\n",
                                     "mhi_process_cmd_completion");
                            if ((iVar9 != 0) && (*(iVar9 + 0x18) < 3)) {
                                ipc_log_string(*(iVar9 + 0x20),"[E][%s] Event element points outside of the cmd ring\n"
                                               ,"mhi_process_cmd_completion");
                            }
                        }
                        else {
                            iVar14 = *(iVar9 + 0x20) + (uVar6 - uVar7);
                            if (iVar14 != *(iVar9 + 0x28)) {
                                panic("Out of order cmd completion: 0x%llx. Expected: 0x%llx\n");
                                goto code_r0x08009f44;
                            }
                            uVar4 = *(iVar14 + 0xc);
                            if ((uVar4 & 0xff0000) == 0x490000) {
                                sym.mhi_misc_cmd_completion(param_1,0x49,*(arg2 + 0xb));
                            }
                            else {
                                uVar4 = uVar4 >> 0x18;
                                uVar6 = uVar4;
                                if ((uVar4 < *(param_1 + 0xb8)) &&
                                   (*(*(param_1 + 0x98) + uVar6 * 0x198 + 0x189) != '\0')) {
                                    iVar13 = *(param_1 + 0x98) + uVar6 * 0x198;
                                    _raw_write_lock_bh(iVar13 + 0x170);
                                    *(iVar13 + 0x108) = *(arg2 + 0xb);
                                    complete(iVar13 + 0x150);
                                    _raw_write_unlock_bh(iVar13 + 0x170);
                                }
                                else {
                                    iVar14 = *(iVar13 + 0xc0);
                                    _dev_err(iVar13 + 0x28,"[E][%s] Completion packet for invalid channel ID: %d\n",
                                             "mhi_process_cmd_completion",uVar4);
                                    if ((iVar14 != 0) && (*(iVar14 + 0x18) < 3)) {
                                        ipc_log_string(*(iVar14 + 0x20),
                                                       "[E][%s] Completion packet for invalid channel ID: %d\n",
                                                       "mhi_process_cmd_completion",uVar6);
                                    }
                                }
                            }
                            uVar6 = *(iVar9 + 0x28) + *(iVar9 + 0x38);
                            if (*(iVar9 + 0x20) + *(iVar9 + 0x40) <= uVar6) {
                                uVar6 = *(iVar9 + 0x20);
                            }
                            *(iVar9 + 0x28) = uVar6;
                            DataMemoryBarrier(2,2);
                        }
                        break;
                    case 0x22:
                        uVar4 = *(arg2 + 0xc) >> 0x18;
                        if (*(param_1 + 0xb8) <= uVar4) {
    //WARNING: Does not return
                            pcVar1 = SoftwareBreakpoint(0x800,0x8009e28);
                            (*pcVar1)();
                        }
                        if ((uVar4 < *(param_1 + 0xb8)) && (*(*(param_1 + 0x98) + uVar4 * 0x198 + 0x189) != '\0')) {
                            sym.parse_xfer_event(param_1,arg2,*(param_1 + 0x98) + uVar4 * 0x198);
                        }
                        break;
                    default:
                        iVar13 = *(*(param_1 + 8) + 0xc0);
                        _dev_err(iVar8 + 0x28,"[E][%s] Unhandled event type: %d\n","mhi_process_ctrl_ev_ring",uVar4);
                        if ((iVar13 != 0) && (*(iVar13 + 0x18) < 3)) {
                            uVar3 = *(iVar13 + 0x20);
                            pcVar5 = "[E][%s] Unhandled event type: %d\n";
code_r0x08009d08:
                            ipc_log_string(uVar3,pcVar5,"mhi_process_ctrl_ev_ring",uVar4);
                        }
                        break;
                    case 0x40:
                        uVar4 = arg2[1];
                        iVar13 = *(*(param_1 + 8) + 0xc0);
                        if ((iVar13 != 0) && (*(iVar13 + 0x18) == 0)) {
                            pcVar5 = "INVALID_EE";
                            if (uVar4 >> 0x19 < 5) {
                                pcVar5 = *(reloc..str.llvm.39275123862783422 + (uVar4 >> 0x18) * 8);
                            }
                            ipc_log_string(*(iVar13 + 0x20),"[D][%s] Received EE event: %s\n",
                                           "mhi_process_ctrl_ev_ring",pcVar5);
                        }
                        iVar13 = 2;
                        switch(uVar4 >> 0x18) {
                        case 1:
                            break;
                        case 2:
                        case 4:
                            iVar13 = 3;
                            break;
                        case 3:
                            pcVar12 = *(param_1 + 0x220);
                            __cfi_slowpath_diag(0x6ba83359ac4765be,pcVar12,0x8000bc0);
                            (*pcVar12)(param_1,4);
                            _raw_write_lock_irq(pcVar1);
                            *(param_1 + 0x184) = 3;
                            _raw_write_unlock_irq(pcVar1);
                            __wake_up(param_1 + 0x208,3,0,0);
                            goto code_r0x08009bdc;
                        default:
                            iVar13 = *(*(param_1 + 8) + 0xc0);
                            _dev_err(iVar8 + 0x28,"[E][%s] Unhandled EE event: 0x%x\n","mhi_process_ctrl_ev_ring",
                                     0x40);
                            if ((iVar13 != 0) && (*(iVar13 + 0x18) < 3)) {
                                uVar3 = *(iVar13 + 0x20);
                                pcVar5 = "[E][%s] Unhandled EE event: 0x%x\n";
                                uVar4 = 0x40;
                                goto code_r0x08009d08;
                            }
                            goto code_r0x08009bdc;
                        case 7:
                            iVar13 = 4;
                        }
                        sym.mhi_queue_state_transition(param_1,iVar13);
                        break;
                    case 0x50:
                        _raw_write_lock_irq(pcVar1);
                        *(param_1 + 0x1c0) = *(arg2 + 0xf);
                        *(param_1 + 0x1c4) = arg2[1];
                        _raw_write_unlock_irq(pcVar1);
                        iVar13 = *(*(param_1 + 8) + 0xc0);
                        if ((iVar13 != 0) && (*(iVar13 + 0x18) == 0)) {
                            ipc_log_string(*(iVar13 + 0x20),"[D][%s] Received BW_REQ event\n",
                                           "mhi_process_ctrl_ev_ring");
                        }
                        pcVar12 = *(param_1 + 0x220);
                        __cfi_slowpath_diag(0x6ba83359ac4765be,pcVar12,0x8000ba0);
                        (*pcVar12)(param_1,8);
                    }
code_r0x08009bdc:
                    uVar6 = param_2[0xb] + param_2[0xc];
                    param_2[0xb] = uVar6;
                    if (uVar6 < param_2[9] + param_2[0xd]) {
                        iVar13 = *param_2[7] + param_2[0xc];
                    }
                    else {
                        iVar13 = param_2[6];
                        param_2[0xb] = param_2[9];
                    }
                    *param_2[7] = iVar13;
                    uVar6 = param_2[10] + param_2[0xc];
                    if (param_2[9] + param_2[0xd] <= param_2[10] + param_2[0xc]) {
                        uVar6 = param_2[9];
                    }
                    param_2[10] = uVar6;
                    DataMemoryBarrier(2,2);
                    uVar7 = *puVar11;
                    uVar6 = param_2[6];
                    if ((uVar7 < uVar6) || (param_2[0xd] + uVar6 <= uVar7)) {
                        iVar13 = *(*(param_1 + 8) + 0xc0);
                        _dev_err(iVar8 + 0x28,"[E][%s] Event ring rp points outside of the event ring\n",
                                 "mhi_process_ctrl_ev_ring");
                        goto joined_r0x08009edc;
                    }
                    iVar13 = param_2[9];
                    arg2 = param_2[10];
                    if (arg2 == iVar13 + (uVar7 - uVar6)) goto code_r0x08009e3c;
                    iVar9 = *(param_1 + 8);
                    iVar10 = iVar10 + 1;
                } while( true );
            }
            iVar10 = 0;
code_r0x08009e3c:
            _raw_read_lock_bh(pcVar1);
            if ((*(param_1 + 0x180) & *(param_1 + 0x17c)) != 0) {
                param_1 = param_2[0x14];
                if (1 < (param_1 + -0x8005ac8 >> 3 | param_1 << 0x3d)) {
code_r0x08009f44:
                    __cfi_slowpath_diag(0xe80f8bb5456f22db,param_1,0x8000ae0);
                }
                (*param_1)(*param_2,param_2 + 0x11,param_2[0x10],*param_2[7]);
            }
            _raw_read_unlock_bh(pcVar1);
        }
    }
    return iVar10;
}


// ===== sym.mhi_controller_set_base.cfi_jt @ 0x08005be0 (size 8) =====

void sym.mhi_controller_set_base.cfi_jt(int64_t param_1,ulong param_2)

{
    *(*(*(param_1 + 8) + 0xc0) + 0x50) = param_2;
    return;
}


// ===== sym.mhi_get_device_for_channel.cfi_jt @ 0x08005be8 (size 8) =====

ulong sym.mhi_get_device_for_channel.cfi_jt(int64_t param_1,uint32_t param_2)

{
    if (param_2 < *(param_1 + 0xb8)) {
        return *(*(param_1 + 0x98) + param_2 * 0x198 + 0x110);
    }
    return 0;
}


// ===== sym.mhi_prepare_for_transfer.cfi_jt @ 0x08005bf0 (size 8) =====

int sym.mhi_prepare_for_transfer.cfi_jt(int64_t param_1,uint32_t param_2)

{
    int64_t arg1;
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x10);
    if (*(param_1 + 0x18) != 0) {
        iVar1 = sym.mhi_prepare_channel(arg1,*(param_1 + 0x18),param_2);
        if (iVar1 != 0) {
            return iVar1;
        }
    }
    if (*(param_1 + 0x20) == 0) {
        iVar1 = 0;
    }
    else {
        iVar1 = sym.mhi_prepare_channel(arg1,*(param_1 + 0x20),param_2);
        if ((iVar1 != 0) && (*(param_1 + 0x18) != 0)) {
            sym.mhi_unprepare_channel(arg1,*(param_1 + 0x18));
        }
    }
    return iVar1;
}


// ===== sym.mhi_poll.cfi_jt @ 0x08005bf8 (size 8) =====

uint sym.mhi_poll.cfi_jt(int64_t param_1,uint param_2)

{
    int64_t iVar1;
    uint uVar2;
    code *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0x10);
    iVar5 = *(iVar4 + 0x128);
    uVar6 = *(*(param_1 + 0x20) + 0xcc);
    iVar7 = iVar5 + uVar6 * 0x118;
    iVar1 = iVar7 + 0x100;
    _raw_spin_lock_bh(iVar1);
    pcVar3 = *(iVar7 + 0x108);
    if (3 < (pcVar3 + -0x8005bc0 >> 3 | pcVar3 << 0x3d)) {
        __cfi_slowpath_diag(0xd8f0b986adce1242,pcVar3,0x8000c60);
    }
    uVar2 = (*pcVar3)(iVar4,iVar5 + uVar6 * 0x118,param_2);
    _raw_spin_unlock_bh(iVar1);
    return uVar2;
}


// ===== sym.__typeid__ZTSFiP14mhi_controllerP12mhi_buf_infoE_global_addr @ 0x08005c00 (size 8) =====

uint sym.__typeid__ZTSFiP14mhi_controllerP12mhi_buf_infoE_global_addr(ulong *param_1,uint64_t *param_2)

{
    code *pcVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t *piVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar8 = *param_2;
    piVar6 = *param_1;
    uVar7 = param_2[5];
    uVar5 = param_2[6];
    uVar2 = is_vmalloc_addr(uVar8);
    if (((uVar2 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
        obj.dma_map_single_attrs.__already_done = 0x1;
        uVar3 = dev_driver_string(piVar6);
        iVar4 = piVar6[0xe];
        if (iVar4 == 0) {
            iVar4 = *piVar6;
        }
        __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar3,iVar4);
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x8008ac8);
        (*pcVar1)();
    }
    uVar9 = 0xfffffff4;
    if ((uVar2 & 1) == 0) {
        uVar5 = dma_map_page_attrs(piVar6,(((uVar8 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x200000000
                                   ,uVar8 & 0xfff,uVar7,uVar5,0);
        uVar9 = 0xfffffff4;
        if (uVar5 != 0xffffffffffffffff) {
            uVar9 = 0;
        }
    }
    else {
        uVar5 = 0xffffffffffffffff;
    }
    param_2[4] = uVar5;
    return uVar9;
}


// ===== sym.mhi_map_single_use_bb.cfi_jt @ 0x08005c08 (size 8) =====

ulong sym.mhi_map_single_use_bb.cfi_jt(ulong *param_1,ulong *param_2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = dma_alloc_attrs(*param_1,param_2[5],param_2 + 4,0xa20,0);
    if (iVar1 == 0) {
        uVar2 = 0xfffffff4;
    }
    else {
        if (*(param_2 + 6) == 1) {
            memcpy(iVar1,*param_2,param_2[5]);
        }
        uVar2 = 0;
        param_2[1] = iVar1;
    }
    return uVar2;
}


// ===== sym.mhi_driver_unregister.cfi_jt @ 0x08005c10 (size 8) =====

void sym.mhi_driver_unregister.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    driver_unregister(param_1 + 0x30);
    return;
}


// ===== sym.mhi_ev_task.cfi_jt @ 0x08005c18 (size 8) =====

void sym.mhi_ev_task.cfi_jt(ulong *param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = *param_1;
    uVar1 = _raw_spin_lock_irqsave(param_1 + 0x20);
    pcVar2 = param_1[0x21];
    if (3 < (pcVar2 + -0x8005bc0 >> 3 | pcVar2 << 0x3d)) {
        __cfi_slowpath_diag(0xd8f0b986adce1242,pcVar2,0x8000be0);
    }
    (*pcVar2)(uVar3,param_1,0xffffffff);
    _raw_spin_unlock_irqrestore(param_1 + 0x20,uVar1);
    return;
}


// ===== sym.mhi_ctrl_ev_task.cfi_jt @ 0x08005c20 (size 8) =====

void sym.mhi_ctrl_ev_task.cfi_jt(code *param_1)

{
    int iVar1;
    code *pcVar2;
    code *extraout_x8;
    ulong *in_x18;
    int64_t iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar3 = *param_1;
    if ((*(iVar3 + 0x17c) & 0x7de) != 0) {
        pcVar2 = *(param_1 + 0x108);
        if (3 < (pcVar2 + -0x8005bc0 >> 3 | pcVar2 << 0x3d)) goto code_r0x0800acb4;
        while( true ) {
            iVar1 = (*pcVar2)(iVar3,param_1,0xffffffff);
            if (iVar1 == 0) {
                param_1 = iVar3 + 0x170;
                _raw_write_lock_irq(param_1);
                pcVar2 = *(iVar3 + 0x268);
                iVar4 = *(iVar3 + 0x18);
                uStack_3c = 0;
                __cfi_slowpath_diag(0x67f4bcfe73f7260,pcVar2,0x8000aa0);
                iVar1 = (*pcVar2)(iVar3,iVar4 + 0x48,&uStack_3c);
                if ((iVar1 == 0) && (uStack_3c._1_1_ == -1)) {
                    iVar4 = *(*(iVar3 + 8) + 0xc0);
                    if ((iVar4 != 0) && (*(iVar4 + 0x18) == 0)) {
                        ipc_log_string(*(iVar4 + 0x20),"[D][%s] System error detected\n","mhi_ctrl_ev_task");
                    }
                    iVar1 = sym.mhi_tryset_pm_state(iVar3,0x100);
                    _raw_write_unlock_irq(param_1);
                    if (iVar1 == 0x100) {
                        sym.mhi_pm_sys_err_handler(iVar3);
                    }
                }
                else {
                    _raw_write_unlock_irq(param_1);
                }
            }
code_r0x0800ac80:
            iVar4 = sp_el0;
            if (*(iVar4 + 0x5e0) == iStack_38) break;
            __stack_chk_fail();
            pcVar2 = extraout_x8;
code_r0x0800acb4:
            __cfi_slowpath_diag(0xd8f0b986adce1242,pcVar2,0x8000c00);
        }
        return;
    }
    pm_wakeup_dev_event(*(iVar3 + 8) + 0x28,0,0);
    pcVar2 = *(iVar3 + 0x240);
    if (9 < (pcVar2 + -0x8005c30 >> 3 | pcVar2 << 0x3d)) {
        __cfi_slowpath_diag(0x9d98c101a4fe7fa9,pcVar2,0x8000ce0);
    }
    (*pcVar2)(iVar3);
    param_1 = *(iVar3 + 0x248);
    if (7 < (param_1 + -0x8005c80 >> 3 | param_1 << 0x3d)) {
        __cfi_slowpath_diag(0x95232cda069bc43d,param_1,0x8000d00);
    }
    (*param_1)(iVar3);
    goto code_r0x0800ac80;
}


// ===== sym.mhi_controller_set_sfr_support.cfi_jt @ 0x08005c28 (size 8) =====

ulong sym.mhi_controller_set_sfr_support.cfi_jt(int64_t param_1,ulong param_2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(param_1 + 8) + 0xc0);
    iVar1 = kmem_cache_alloc_trace(_free_irq,0xdc0,0x48);
    if (iVar1 != 0) {
        *(iVar1 + 0x10) = param_2;
        iVar2 = __kmalloc(param_2,0xdc0);
        *(iVar1 + 0x18) = iVar2;
        if (iVar2 != 0) {
            *(iVar3 + 0x60) = iVar1;
            return 0;
        }
    }
    return 0xfffffff4;
}


// ===== sym.__typeid__ZTSFiP14mhi_controllerE_global_addr @ 0x08005c30 (size 8) =====

int64_t sym.__typeid__ZTSFiP14mhi_controllerE_global_addr(int64_t param_1)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    uVar5 = 0x224;
    uStack_2c = 0;
    iVar4 = sym.mhi_read_reg(param_1,*(param_1 + 0x18),0x224,&uStack_2c);
    if (iVar4 == 0) {
        *(param_1 + 0xcc) = uStack_2c >> 0x1c;
        *(param_1 + 0xd0) = uStack_2c >> 0x10 & 0xfff;
        *(param_1 + 0xd4) = uStack_2c >> 8 & 0xff;
        *(param_1 + 0xd8) = uStack_2c & 0xff;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return iVar4;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.log_level_show;
    iVar4 = *(*(*(iVar4 + -0x18) + 8) + 0xc0);
    if (iVar4 == 0) {
        iVar4 = -5;
    }
    else {
        uVar1 = *(iVar4 + 0x18);
        if (uVar1 < 5) {
            pcVar6 = *(obj.mhi_log_level_str + uVar1 * 8);
        }
        else {
            pcVar6 = "Mask all";
        }
        iVar3 = scnprintf(uVar5,0x1000,"IPC log level begins from: %s\n",pcVar6);
        iVar4 = iVar3;
    }
    return iVar4;
}


// ===== sym.mhi_pm_suspend.cfi_jt @ 0x08005c38 (size 8) =====

void sym.mhi_pm_suspend.cfi_jt(code *param_1)

{
    uint32_t uVar1;
    int iVar2;
    ulong uVar3;
    char *pcVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    code *unaff_x19;
    code *unaff_x20;
    code *unaff_x21;
    code *pcVar6;
    int64_t unaff_x23;
    code *unaff_x24;
    code *unaff_x25;
    ulong unaff_x30;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    if (*(param_1 + 0x17c) != 1) {
        if (0x7f < *(param_1 + 0x17c)) goto code_r0x0800e674;
        unaff_x24 = param_1 + 0x18c;
        unaff_x23 = *(param_1 + 8);
        unaff_x19 = param_1;
        if (*unaff_x24 != 0) goto code_r0x0800e828;
        if (*(param_1 + 400) != 0) goto code_r0x0800e828;
        unaff_x20 = param_1 + 0x170;
        _raw_read_lock_bh(unaff_x20);
        unaff_x21 = *(param_1 + 0x228);
        unaff_x25 = sym.__typeid__ZTSFvP14mhi_controllerbE_global_addr;
        if (2 < (unaff_x21 + -0x8005ad8 >> 3 | unaff_x21 << 0x3d)) goto code_r0x0800ebd0;
        goto code_r0x0800e6c4;
    }
    uVar3 = 0xffffffea;
code_r0x0800e82c:
    do {
        iVar5 = sp_el0;
        if (*(iVar5 + 0x5e0) == iStack_58) {
            return;
        }
        __stack_chk_fail(uVar3);
        param_1 = unaff_x19;
code_r0x0800ebd0:
        __cfi_slowpath_diag(0xba8145ef24be26ed,unaff_x21,0x8000ea0);
        unaff_x19 = param_1;
code_r0x0800e6c4:
        (*unaff_x21)(unaff_x19,0);
        _raw_read_unlock_bh(unaff_x20);
        unaff_x21 = __msecs_to_jiffies(*(unaff_x19 + 0x178));
        if ((*(unaff_x19 + 0x188) & 0xfffffffe) == 2) {
            if (unaff_x21 == NULL) {
                unaff_x21 = 0x1;
            }
        }
        else {
            if (unaff_x21 == NULL && 0x7f < *(unaff_x19 + 0x17c)) {
                unaff_x21 = 0x1;
            }
            if ((*(unaff_x19 + 0x17c) < 0x80) && (unaff_x21 != NULL)) {
                uStack_68 = 0;
                uStack_60 = 0;
                uStack_78 = 0;
                uStack_70 = 0;
                uStack_80 = 0;
                unaff_x21 = __msecs_to_jiffies(*(unaff_x19 + 0x178));
                init_wait_entry(&uStack_80,0);
                pcVar6 = unaff_x19 + 0x208;
                prepare_to_wait_event(pcVar6,&uStack_80,2);
                uVar1 = *(unaff_x19 + 0x188);
                while ((uVar1 & 0xfffffffe) != 2) {
                    if (unaff_x21 == NULL && 0x7f < *(unaff_x19 + 0x17c)) {
                        unaff_x21 = 0x1;
                    }
                    if ((0x7f < *(unaff_x19 + 0x17c)) || (unaff_x21 == NULL)) goto code_r0x0800e7b8;
                    unaff_x21 = schedule_timeout(unaff_x21);
                    prepare_to_wait_event(pcVar6,&uStack_80,2);
                    uVar1 = *(unaff_x19 + 0x188);
                }
                if (unaff_x21 == NULL) {
                    unaff_x21 = 0x1;
                }
code_r0x0800e7b8:
                finish_wait(pcVar6,&uStack_80);
            }
        }
        _raw_read_lock_bh(unaff_x20);
        pcVar6 = *(unaff_x19 + 0x230);
        if (2 < (pcVar6 - unaff_x25 >> 3 | pcVar6 - unaff_x25 << 0x3d)) {
            __cfi_slowpath_diag(0xba8145ef24be26ed,pcVar6,0x8000ec0);
        }
        (*pcVar6)(unaff_x19,0);
        _raw_read_unlock_bh(unaff_x20);
        if ((unaff_x21 != 0) && (*(unaff_x19 + 0x17c) < 0x80)) {
            _raw_write_lock_irq(unaff_x20);
            if ((*unaff_x24 == 0) && (*(unaff_x19 + 400) == 0)) {
                iVar5 = *(*(unaff_x19 + 8) + 0xc0);
                if ((iVar5 != 0) && (*(iVar5 + 0x18) == 0)) {
                    ipc_log_string(*(iVar5 + 0x20),"[D][%s] Allowing M3 transition\n","mhi_pm_suspend");
                }
                iVar2 = sym.mhi_tryset_pm_state(unaff_x19,0x10);
                if (iVar2 == 0x10) {
                    sym.mhi_write_reg_field(unaff_x19,*(unaff_x19 + 0x18),0x38,0xff00);
                    _raw_write_unlock_irq(unaff_x20);
                    iVar5 = *(*(unaff_x19 + 8) + 0xc0);
                    if ((iVar5 != 0) && (*(iVar5 + 0x18) == 0)) {
                        ipc_log_string(*(iVar5 + 0x20),"[D][%s] Waiting for M3 completion\n","mhi_pm_suspend");
                    }
                    sym.mhi_force_reg_write(unaff_x19);
                    unaff_x21 = __msecs_to_jiffies(*(unaff_x19 + 0x178));
                    if (*(unaff_x19 + 0x188) == 5) {
                        if (unaff_x21 == NULL) {
                            unaff_x21 = 0x1;
                        }
                    }
                    else {
                        if (unaff_x21 == NULL && 0x7f < *(unaff_x19 + 0x17c)) {
                            unaff_x21 = 0x1;
                        }
                        if ((*(unaff_x19 + 0x17c) < 0x80) && (unaff_x21 != NULL)) {
                            uStack_68 = 0;
                            uStack_60 = 0;
                            uStack_78 = 0;
                            uStack_70 = 0;
                            uStack_80 = 0;
                            unaff_x21 = __msecs_to_jiffies(*(unaff_x19 + 0x178));
                            init_wait_entry(&uStack_80,0);
                            unaff_x20 = unaff_x19 + 0x208;
                            prepare_to_wait_event(unaff_x20,&uStack_80,2);
                            iVar2 = *(unaff_x19 + 0x188);
                            while (iVar2 != 5) {
                                if (unaff_x21 == NULL && 0x7f < *(unaff_x19 + 0x17c)) {
                                    unaff_x21 = 0x1;
                                }
                                if ((0x7f < *(unaff_x19 + 0x17c)) || (unaff_x21 == NULL)) goto code_r0x0800ea20;
                                unaff_x21 = schedule_timeout(unaff_x21);
                                prepare_to_wait_event(unaff_x20,&uStack_80,2);
                                iVar2 = *(unaff_x19 + 0x188);
                            }
                            if (unaff_x21 == NULL) {
                                unaff_x21 = 0x1;
                            }
code_r0x0800ea20:
                            finish_wait(unaff_x20,&uStack_80);
                        }
                    }
                    if (unaff_x21 == 0) {
                        sym.mhi_debug_reg_dump(unaff_x19);
                        iVar5 = panic("Timedout waiting for M3 ACK");
                        *extraout_x18 = 0x800ec2c;
                        sym.__mhi_pm_resume(iVar5,0);
                        return;
                    }
                    if (*(unaff_x19 + 0x17c) < 0x80) {
                        unaff_x19 = unaff_x19 + 0xa0;
                        pcVar6 = *unaff_x19;
                        if (unaff_x19 == *unaff_x19) {
                            uVar3 = 0;
                        }
                        else {
                            do {
                                unaff_x20 = pcVar6 + -0x58;
                                unaff_x21 = *pcVar6;
                                mutex_lock(unaff_x20);
                                if (*(pcVar6 + -0x68) != 0) {
                                    sym.mhi_notify(*(pcVar6 + -0x68),2);
                                }
                                mutex_unlock(unaff_x20);
                                uVar3 = 0;
                                pcVar6 = unaff_x21;
                            } while (unaff_x19 != unaff_x21);
                        }
                        goto code_r0x0800e82c;
                    }
                    uVar1 = *(unaff_x19 + 0x188);
                    unaff_x21 = *(*(unaff_x19 + 8) + 0xc0);
                    unaff_x20 = "INVALID_STATE";
                    if ((uVar1 < 0x100) && (0xf6 < uVar1 - 8)) {
                        unaff_x20 = *(reloc..str.14.llvm.39275123862783422 + uVar1 * 8);
                    }
                    uVar3 = sym.to_mhi_pm_state_str(*(unaff_x19 + 0x17c));
                    _dev_err(unaff_x23 + 0x28,"[E][%s] Did not enter M3 state, MHI state: %s, PM state: %s\n",
                             "mhi_pm_suspend",unaff_x20,uVar3);
                    if ((unaff_x21 != NULL) && (*(unaff_x21 + 0x18) < 3)) {
                        uVar1 = *(unaff_x19 + 0x188);
                        unaff_x20 = *(unaff_x21 + 0x20);
                        unaff_x21 = "INVALID_STATE";
                        if ((uVar1 < 0x100) && (0xf6 < uVar1 - 8)) {
                            unaff_x21 = *(reloc..str.14.llvm.39275123862783422 + uVar1 * 8);
                        }
                        uVar3 = sym.to_mhi_pm_state_str(*(unaff_x19 + 0x17c));
                        pcVar4 = "[E][%s] Did not enter M3 state, MHI state: %s, PM state: %s\n";
                        goto code_r0x0800ebb4;
                    }
                }
                else {
                    _raw_write_unlock_irq(unaff_x20);
                    unaff_x21 = *(*(unaff_x19 + 8) + 0xc0);
                    unaff_x20 = sym.to_mhi_pm_state_str(0x10);
                    uVar3 = sym.to_mhi_pm_state_str(*(unaff_x19 + 0x17c));
                    _dev_err(unaff_x23 + 0x28,"[E][%s] Error setting to PM state: %s from: %s\n","mhi_pm_suspend",
                             unaff_x20,uVar3);
                    if ((unaff_x21 != NULL) && (*(unaff_x21 + 0x18) < 3)) {
                        unaff_x20 = *(unaff_x21 + 0x20);
                        unaff_x21 = sym.to_mhi_pm_state_str(0x10);
                        uVar3 = sym.to_mhi_pm_state_str(*(unaff_x19 + 0x17c));
                        pcVar4 = "[E][%s] Error setting to PM state: %s from: %s\n";
code_r0x0800ebb4:
                        ipc_log_string(unaff_x20,pcVar4,"mhi_pm_suspend",unaff_x21,uVar3);
                    }
                }
code_r0x0800e674:
                uVar3 = 0xfffffffb;
                goto code_r0x0800e82c;
            }
            _raw_write_unlock_irq(unaff_x20);
code_r0x0800e828:
            uVar3 = 0xfffffff0;
            goto code_r0x0800e82c;
        }
        unaff_x19 = *(*(unaff_x19 + 8) + 0xc0);
        _dev_err(unaff_x23 + 0x28,"[E][%s] Could not enter M0/M1 state","mhi_pm_suspend");
        if ((unaff_x19 == NULL) || (2 < *(unaff_x19 + 0x18))) goto code_r0x0800e674;
        ipc_log_string(*(unaff_x19 + 0x20),"[E][%s] Could not enter M0/M1 state","mhi_pm_suspend");
        uVar3 = 0xfffffffb;
    } while( true );
}


// ===== sym.mhi_pm_resume_force.cfi_jt @ 0x08005c40 (size 8) =====

void sym.mhi_pm_resume_force.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__mhi_pm_resume(param_1,1);
    return;
}


// ===== sym.mhi_async_power_up.cfi_jt @ 0x08005c48 (size 8) =====

int sym.mhi_async_power_up.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t arg2;
    char *pcVar5;
    int64_t iVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(param_1 + 8);
    iVar6 = *(iVar8 + 0xc0);
    if ((iVar6 != 0) && (*(iVar6 + 0x18) < 2)) {
        ipc_log_string(*(iVar6 + 0x20),"[I][%s] Requested to power ON\n","mhi_async_power_up");
    }
    if (((*(param_1 + 0x228) == 0) || (*(param_1 + 0x230) == 0)) || (*(param_1 + 0x238) == 0)) {
        *(param_1 + 0x228) = sym.mhi_assert_dev_wake.4dbb11a4522110e50d216ee75119b05c.cfi_jt;
        pcVar1 = sym.mhi_toggle_dev_wake.4dbb11a4522110e50d216ee75119b05c.cfi_jt;
        if ((*(param_1 + 0x180) & 8) != 0) {
            pcVar1 = sym.mhi_toggle_dev_wake_nop.4dbb11a4522110e50d216ee75119b05c.cfi_jt;
        }
        *(param_1 + 0x230) = sym.mhi_deassert_dev_wake.4dbb11a4522110e50d216ee75119b05c.cfi_jt;
        *(param_1 + 0x238) = pcVar1;
    }
    iVar6 = param_1 + 0x140;
    mutex_lock(iVar6);
    *(param_1 + 0x17c) = 1;
    _raw_write_lock_irq(param_1 + 0x170);
    sym.mhi_write_reg(param_1,*(param_1 + 0x20),0x20,0);
    *(param_1 + 0x17c) = 2;
    *(param_1 + 0x184) = 10;
    uVar2 = sym.mhi_get_exec_env(param_1);
    _raw_write_unlock_irq(param_1 + 0x170);
    if ((uVar2 < 7) && ((1 << (uVar2 & 0x1f) & 0x65U) != 0)) {
        uVar3 = sym.mhi_get_mhi_state(param_1);
        iVar8 = *(*(param_1 + 8) + 0xc0);
        if ((iVar8 != 0) && (*(iVar8 + 0x18) == 0)) {
            pcVar5 = "INVALID_STATE";
            if ((uVar3 < 0x100) && (0xf6 < uVar3 - 8)) {
                pcVar5 = *(reloc..str.14.llvm.39275123862783422 + uVar3 * 8);
            }
            ipc_log_string(*(iVar8 + 0x20),"[D][%s] Attempting power on with EE: %s, state: %s\n","mhi_async_power_up"
                           ,*(reloc..str.llvm.39275123862783422 + uVar2 * 8),pcVar5);
        }
        if (uVar3 == 0xff) {
            sym.mhi_write_reg_field(param_1,*(param_1 + 0x18),0x38,2);
            iVar4 = sym.mhi_poll_reg_field(param_1,*(param_1 + 0x18),0x38,2);
            if (iVar4 != 0) {
                iVar8 = *(*(param_1 + 8) + 0xc0);
                if ((iVar8 != 0) && (*(iVar8 + 0x18) < 2)) {
                    ipc_log_string(*(iVar8 + 0x20),"[I][%s] Failed to reset MHI due to syserr state\n",
                                   "mhi_async_power_up");
                }
                goto code_r0x0800f664;
            }
            sym.mhi_write_reg(param_1,*(param_1 + 0x20),0x20,0);
        }
        iVar4 = sym.mhi_init_irq_setup(param_1);
        if (iVar4 == 0) {
            arg2 = 0;
            if ((uVar2 != 0) && (uVar2 != 5)) {
                arg2 = uVar2 != 6;
            }
            sym.mhi_queue_state_transition(param_1,arg2);
            mutex_unlock(iVar6);
            iVar6 = *(*(param_1 + 8) + 0xc0);
            if ((iVar6 != 0) && (*(iVar6 + 0x18) < 2)) {
                ipc_log_string(*(iVar6 + 0x20),"[I][%s] Power on setup success\n","mhi_async_power_up");
            }
            return 0;
        }
    }
    else {
        iVar7 = *(*(param_1 + 8) + 0xc0);
        if (uVar2 < 10) {
            pcVar5 = *(reloc..str.llvm.39275123862783422 + uVar2 * 8);
        }
        else {
            pcVar5 = "INVALID_EE";
        }
        _dev_err(iVar8 + 0x28,"[E][%s] %s is not a valid EE for power on\n","mhi_async_power_up",pcVar5);
        if ((iVar7 == 0) || (2 < *(iVar7 + 0x18))) {
            iVar4 = -5;
        }
        else {
            if (uVar2 < 10) {
                pcVar5 = *(reloc..str.llvm.39275123862783422 + uVar2 * 8);
            }
            else {
                pcVar5 = "INVALID_EE";
            }
            ipc_log_string(*(iVar7 + 0x20),"[E][%s] %s is not a valid EE for power on\n","mhi_async_power_up",pcVar5)
            ;
            iVar4 = -5;
        }
    }
code_r0x0800f664:
    *(param_1 + 0x17c) = 1;
    mutex_unlock(iVar6);
    return iVar4;
}


// ===== sym.mhi_pm_resume.cfi_jt @ 0x08005c50 (size 8) =====

void sym.mhi_pm_resume.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__mhi_pm_resume(param_1,0);
    return;
}


// ===== sym.mhi_report_error.cfi_jt @ 0x08005c58 (size 8) =====

ulong sym.mhi_report_error.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t iVar6;
    int64_t *piVar7;
    ulong uVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        uVar2 = 0xffffffea;
    }
    else {
        iVar9 = *(param_1 + 8);
        iVar5 = param_1 + 0x170;
        piVar7 = *(*(iVar9 + 0xc0) + 0x60);
        uVar2 = _raw_write_lock_irqsave(iVar5);
        iVar1 = sym.mhi_tryset_pm_state(param_1,0x100);
        if (iVar1 == 0x100) {
            *(param_1 + 0x188) = 0xff;
            __wake_up(param_1 + 0x208,3,0,0);
            _raw_write_unlock_irqrestore(iVar5,uVar2);
            if ((piVar7 != NULL) && (*piVar7 != 0)) {
                memcpy(piVar7[3],*piVar7,piVar7[2]);
                iVar5 = *(iVar9 + 0x98);
                iVar6 = *(*(param_1 + 8) + 0xc0);
                if (iVar5 == 0) {
                    iVar5 = *(iVar9 + 0x28);
                }
                _dev_err(iVar9 + 0x28,"[E][%s] mhi: %s sfr: %s\n","mhi_report_error",iVar5,*piVar7);
                if ((iVar6 != 0) && (*(iVar6 + 0x18) < 3)) {
                    iVar5 = *(iVar9 + 0x98);
                    if (iVar5 == 0) {
                        iVar5 = *(iVar9 + 0x28);
                    }
                    ipc_log_string(*(iVar6 + 0x20),"[E][%s] mhi: %s sfr: %s\n","mhi_report_error",iVar5,*piVar7);
                }
            }
            device_for_each_child
                      (*(param_1 + 8) + 0x28,0,sym.mhi_notify_fatal_cb.74907ba8ca9a47fec9848b5e279d5fb3.cfi_jt);
            uVar2 = 0;
        }
        else {
            iVar6 = *(*(param_1 + 8) + 0xc0);
            uVar3 = sym.to_mhi_pm_state_str(0x100);
            uVar4 = sym.to_mhi_pm_state_str(*(param_1 + 0x17c));
            _dev_err(iVar9 + 0x28,"[E][%s] Failed to move to state: %s from: %s\n","mhi_report_error",uVar3,uVar4);
            if ((iVar6 != 0) && (*(iVar6 + 0x18) < 3)) {
                uVar8 = *(iVar6 + 0x20);
                uVar3 = sym.to_mhi_pm_state_str(0x100);
                uVar4 = sym.to_mhi_pm_state_str(*(param_1 + 0x17c));
                ipc_log_string(uVar8,"[E][%s] Failed to move to state: %s from: %s\n","mhi_report_error",uVar3,uVar4
                              );
            }
            _raw_write_unlock_irqrestore(iVar5,uVar2);
            uVar2 = 0xffffffff;
        }
    }
    return uVar2;
}


// ===== sym.mhi_sync_power_up.cfi_jt @ 0x08005c60 (size 8) =====

void sym.mhi_sync_power_up.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint32_t uVar7;
    uint uVar8;
    code *pcVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x20;
    int64_t unaff_x21;
    ulong unaff_x30;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    int64_t iStack_80;
    int64_t iStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uVar3 = sym.mhi_async_power_up(param_1);
    if (uVar3 == 0) {
        iVar4 = __msecs_to_jiffies(*(param_1 + 0x178));
        uVar7 = *(param_1 + 0x184);
        if ((7 < uVar7) || ((1 << (uVar7 & 0x1f) & 0x94U) == 0)) {
            if ((*(param_1 + 0x17c) < 0x80) && (0x7f < *(param_1 + 0x17c) || iVar4 != 0)) {
                uStack_58 = 0;
                uStack_50 = 0;
                uStack_68 = 0;
                uStack_60 = 0;
                uStack_70 = 0;
                unaff_x21 = __msecs_to_jiffies(*(param_1 + 0x178));
                init_wait_entry(&uStack_70,0);
                unaff_x20 = param_1 + 0x208;
                while( true ) {
                    prepare_to_wait_event(unaff_x20,&uStack_70,2);
                    if ((*(param_1 + 0x184) < 8) && ((1 << (*(param_1 + 0x184) & 0x1f) & 0x94U) != 0)) break;
                    iVar4 = unaff_x21;
                    if (unaff_x21 == 0 && 0x7f < *(param_1 + 0x17c)) {
                        iVar4 = 1;
                    }
                    if ((0x7f < *(param_1 + 0x17c)) || (iVar4 == 0)) break;
                    unaff_x21 = schedule_timeout();
                }
                finish_wait(unaff_x20,&uStack_70);
                uVar7 = *(param_1 + 0x184);
            }
        }
        if ((uVar7 < 8) && ((1 << (uVar7 & 0x1f) & 0x94U) != 0)) {
            uVar3 = 0;
        }
        else {
            if (*(param_1 + 0x88) == 0) {
                sym.mhi_power_down(param_1,0);
            }
            uVar3 = 0xffffff92;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return;
    }
    iVar5 = __stack_chk_fail(uVar3);
    *extraout_x18 = sym.mhi_force_rddm_mode;
    pcStack_98 = sym.mhi_force_rddm_mode;
    iVar4 = sp_el0;
    iStack_a8 = *(iVar4 + 0x5e0);
    puStack_a0 = &stack0xffffffffffffffc0;
    iStack_90 = unaff_x21;
    iStack_80 = unaff_x20;
    iStack_78 = param_1;
    if (*(iVar5 + 0x184) == 3) {
        uVar8 = 0;
    }
    else {
        iVar4 = *(*(iVar5 + 8) + 0xc0);
        if ((iVar4 != 0) && (*(iVar4 + 0x18) == 0)) {
            ipc_log_string(*(iVar4 + 0x20),"[D][%s] Triggering SYS_ERR to force RDDM state\n","mhi_force_rddm_mode");
        }
        sym.mhi_write_reg_field(iVar5,*(iVar5 + 0x18),0x38,0xff00);
        iVar4 = __msecs_to_jiffies(*(iVar5 + 0x178));
        if (iVar4 == 0 && *(iVar5 + 0x184) == 3) {
            iVar4 = 1;
        }
        if ((*(iVar5 + 0x184) != 3) && (iVar4 != 0)) {
            uStack_b8 = 0;
            uStack_b0 = 0;
            uStack_c8 = 0;
            uStack_c0 = 0;
            uStack_d0 = 0;
            iVar6 = __msecs_to_jiffies(*(iVar5 + 0x178));
            init_wait_entry(&uStack_d0,0);
            iVar1 = iVar5 + 0x208;
            prepare_to_wait_event(iVar1,&uStack_d0,2);
            iVar2 = *(iVar5 + 0x184);
            if (iVar6 == 0 && iVar2 == 3) {
                iVar6 = 1;
            }
            while ((iVar4 = iVar6, iVar2 != 3 && (iVar4 = 0, iVar6 != 0))) {
                iVar6 = schedule_timeout(iVar6);
                prepare_to_wait_event(iVar1,&uStack_d0,2);
                iVar2 = *(iVar5 + 0x184);
                if (iVar6 == 0 && iVar2 == 3) {
                    iVar6 = 1;
                }
            }
            finish_wait(iVar1,&uStack_d0);
        }
        uVar8 = 0xfffffffb;
        if (iVar4 != 0) {
            uVar8 = 0;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_a8) {
        iVar4 = __stack_chk_fail(uVar8);
        *extraout_x18_00 = sym.mhi_device_get;
        iVar5 = *(iVar4 + 0x10);
        *(iVar4 + 0x3cc) = *(iVar4 + 0x3cc) + 1;
        _raw_read_lock_bh(iVar5 + 0x170);
        if ((*(iVar5 + 0x17c) & 0x30) != 0) {
            pm_wakeup_dev_event(*(iVar5 + 8) + 0x28,0,0);
            pcVar9 = *(iVar5 + 0x240);
            if (9 < (pcVar9 + -0x8005c30 >> 3 | pcVar9 << 0x3d)) {
                __cfi_slowpath_diag(0x9d98c101a4fe7fa9,pcVar9,0x8000fe0);
            }
            (*pcVar9)(iVar5);
            pcVar9 = *(iVar5 + 0x248);
            if (7 < (pcVar9 + -0x8005c80 >> 3 | pcVar9 << 0x3d)) {
                __cfi_slowpath_diag(0x95232cda069bc43d,pcVar9,0x8001000);
            }
            (*pcVar9)(iVar5);
        }
        pcVar9 = *(iVar5 + 0x228);
        if (2 < (pcVar9 + -0x8005ad8 >> 3 | pcVar9 << 0x3d)) {
            __cfi_slowpath_diag(0xba8145ef24be26ed,pcVar9,0x8000f20);
        }
        (*pcVar9)(iVar5,1);
        _raw_read_unlock_bh(iVar5 + 0x170);
        return;
    }
    return;
}


// ===== sym.mhi_force_reset.cfi_jt @ 0x08005c68 (size 8) =====

void sym.mhi_force_reset.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    ulong uVar2;
    char *pcVar3;
    char *pcVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(*(param_1 + 8) + 0xc0);
    if ((iVar5 != 0) && (*(iVar5 + 0x18) == 0)) {
        uVar6 = *(iVar5 + 0x20);
        uVar2 = sym.to_mhi_pm_state_str(*(param_1 + 0x17c));
        uVar1 = *(param_1 + 0x188);
        pcVar3 = "INVALID_STATE";
        if ((uVar1 < 0x100) && (0xf6 < uVar1 - 8)) {
            pcVar3 = *(reloc..str.14.llvm.39275123862783422 + uVar1 * 8);
        }
        if (*(param_1 + 0x184) < 10) {
            pcVar4 = *(reloc..str.llvm.39275123862783422 + *(param_1 + 0x184) * 8);
        }
        else {
            pcVar4 = "INVALID_EE";
        }
        ipc_log_string(uVar6,"[D][%s] Entered with pm_state:%s dev_state:%s ee:%s\n","mhi_force_reset",uVar2,pcVar3
                       ,pcVar4);
    }
    sym.mhi_report_error(param_1);
    sym.mhi_soc_reset(param_1);
    sym.mhi_rddm_download_status(param_1);
    return;
}


// ===== sym.mhi_prepare_for_power_up.cfi_jt @ 0x08005c70 (size 8) =====

uint64_t sym.mhi_prepare_for_power_up.cfi_jt(int64_t param_1)

{
    uint uVar1;
    uint32_t uVar2;
    ulong uVar3;
    char *pcVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar6;
    int64_t iVar7;
    ulong unaff_x30;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_48 = *(iVar7 + 0x5e0);
    iVar7 = *(param_1 + 8);
    uStack_50 = 0;
    mutex_lock(param_1 + 0x140);
    uVar2 = sym.mhi_init_dev_ctxt(param_1);
    uVar6 = uVar2;
    if (uVar2 != 0) goto code_r0x08007724;
    uVar2 = sym.mhi_read_reg(param_1,*(param_1 + 0x18),0x28,&uStack_50 + 4);
    if (uVar2 == 0) {
        if (uStack_50 >> 0x20 < *(param_1 + 0x78)) {
            iVar5 = *(param_1 + 0x28);
            *(param_1 + 0x20) = *(param_1 + 0x18) + (uStack_50 >> 0x20);
            if ((iVar5 == 0) && ((*(param_1 + 0x28e) != '\0' || (iVar5 = 0, *(param_1 + 0x60) != 0)))) {
                uVar2 = sym.mhi_read_reg(param_1,*(param_1 + 0x18),0x2c,&uStack_50);
                if (uVar2 != 0) {
                    uVar6 = uVar2;
                    iVar5 = *(*(param_1 + 8) + 0xc0);
                    _dev_err(iVar7 + 0x28,"[E][%s] Error getting BHIE offset\n","mhi_prepare_for_power_up");
                    if ((iVar5 != 0) && (*(iVar5 + 0x18) < 3)) {
                        uVar3 = *(iVar5 + 0x20);
                        pcVar4 = "[E][%s] Error getting BHIE offset\n";
                        goto code_r0x0800782c;
                    }
                    goto code_r0x08007890;
                }
                if (*(param_1 + 0x78) <= (uStack_50 & 0xffffffff)) {
                    iVar5 = *(*(param_1 + 8) + 0xc0);
                    _dev_err(iVar7 + 0x28,"[E][%s] BHIe offset: 0x%x is out of range: 0x%zx\n",
                             "mhi_prepare_for_power_up");
                    if ((iVar5 != 0) && (*(iVar5 + 0x18) < 3)) {
                        uVar3 = *(iVar5 + 0x20);
                        pcVar4 = "[E][%s] BHIe offset: 0x%x is out of range: 0x%zx\n";
                        uVar1 = uStack_50;
                        goto code_r0x0800787c;
                    }
                    goto code_r0x0800788c;
                }
                iVar5 = *(param_1 + 0x18) + (uStack_50 & 0xffffffff);
                *(param_1 + 0x28) = iVar5;
            }
            if (*(param_1 + 0x60) != 0) {
                __memset_io(iVar5 + 0x60,0,0x1c);
                sym.mhi_alloc_bhie_table(param_1,param_1 + 0x88,*(param_1 + 0x60));
                if (*(param_1 + 0x88) != 0) {
                    sym.mhi_rddm_prepare(param_1,*(param_1 + 0x88));
                }
            }
            uVar6 = 0;
            goto code_r0x08007724;
        }
        iVar5 = *(*(param_1 + 8) + 0xc0);
        _dev_err(iVar7 + 0x28,"[E][%s] BHI offset: 0x%x is out of range: 0x%zx\n","mhi_prepare_for_power_up");
        if ((iVar5 != 0) && (*(iVar5 + 0x18) < 3)) {
            uVar3 = *(iVar5 + 0x20);
            pcVar4 = "[E][%s] BHI offset: 0x%x is out of range: 0x%zx\n";
            uVar1 = uStack_50._4_4_;
code_r0x0800787c:
            ipc_log_string(uVar3,pcVar4,"mhi_prepare_for_power_up",uVar1,*(param_1 + 0x78));
        }
code_r0x0800788c:
        uVar6 = 0xffffffea;
    }
    else {
        uVar6 = uVar2;
        iVar5 = *(*(param_1 + 8) + 0xc0);
        _dev_err(iVar7 + 0x28,"[E][%s] Error getting BHI offset\n","mhi_prepare_for_power_up");
        if ((iVar5 != 0) && (*(iVar5 + 0x18) < 3)) {
            uVar3 = *(iVar5 + 0x20);
            pcVar4 = "[E][%s] Error getting BHI offset\n";
code_r0x0800782c:
            ipc_log_string(uVar3,pcVar4,"mhi_prepare_for_power_up");
        }
    }
code_r0x08007890:
    sym.mhi_deinit_dev_ctxt(param_1);
code_r0x08007724:
    mutex_unlock(param_1 + 0x140);
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_48) {
        return uVar6;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.mhi_unprepare_after_power_down;
    if (*(iVar7 + 0x88) != 0) {
        sym.mhi_free_bhie_table(iVar7,iVar7 + 0x88);
    }
    uVar6 = sym.mhi_deinit_dev_ctxt(iVar7);
    return uVar6;
}


// ===== sym.mhi_force_rddm_mode.cfi_jt @ 0x08005c78 (size 8) =====

void sym.mhi_force_rddm_mode.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint uVar4;
    code *pcVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar6;
    ulong unaff_x30;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    if (*(param_1 + 0x184) == 3) {
        uVar4 = 0;
    }
    else {
        iVar3 = *(*(param_1 + 8) + 0xc0);
        if ((iVar3 != 0) && (*(iVar3 + 0x18) == 0)) {
            ipc_log_string(*(iVar3 + 0x20),"[D][%s] Triggering SYS_ERR to force RDDM state\n","mhi_force_rddm_mode");
        }
        sym.mhi_write_reg_field(param_1,*(param_1 + 0x18),0x38,0xff00);
        iVar3 = __msecs_to_jiffies(*(param_1 + 0x178));
        if (iVar3 == 0 && *(param_1 + 0x184) == 3) {
            iVar3 = 1;
        }
        if ((*(param_1 + 0x184) != 3) && (iVar3 != 0)) {
            uStack_48 = 0;
            uStack_40 = 0;
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_60 = 0;
            iVar2 = __msecs_to_jiffies(*(param_1 + 0x178));
            init_wait_entry(&uStack_60,0);
            iVar6 = param_1 + 0x208;
            prepare_to_wait_event(iVar6,&uStack_60,2);
            iVar1 = *(param_1 + 0x184);
            if (iVar2 == 0 && iVar1 == 3) {
                iVar2 = 1;
            }
            while ((iVar3 = iVar2, iVar1 != 3 && (iVar3 = 0, iVar2 != 0))) {
                iVar2 = schedule_timeout(iVar2);
                prepare_to_wait_event(iVar6,&uStack_60,2);
                iVar1 = *(param_1 + 0x184);
                if (iVar2 == 0 && iVar1 == 3) {
                    iVar2 = 1;
                }
            }
            finish_wait(iVar6,&uStack_60);
        }
        uVar4 = 0xfffffffb;
        if (iVar3 != 0) {
            uVar4 = 0;
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_38) {
        iVar3 = __stack_chk_fail(uVar4);
        *extraout_x18 = sym.mhi_device_get;
        iVar6 = *(iVar3 + 0x10);
        *(iVar3 + 0x3cc) = *(iVar3 + 0x3cc) + 1;
        _raw_read_lock_bh(iVar6 + 0x170);
        if ((*(iVar6 + 0x17c) & 0x30) != 0) {
            pm_wakeup_dev_event(*(iVar6 + 8) + 0x28,0,0);
            pcVar5 = *(iVar6 + 0x240);
            if (9 < (pcVar5 + -0x8005c30 >> 3 | pcVar5 << 0x3d)) {
                __cfi_slowpath_diag(0x9d98c101a4fe7fa9,pcVar5,0x8000fe0);
            }
            (*pcVar5)(iVar6);
            pcVar5 = *(iVar6 + 0x248);
            if (7 < (pcVar5 + -0x8005c80 >> 3 | pcVar5 << 0x3d)) {
                __cfi_slowpath_diag(0x95232cda069bc43d,pcVar5,0x8001000);
            }
            (*pcVar5)(iVar6);
        }
        pcVar5 = *(iVar6 + 0x228);
        if (2 < (pcVar5 + -0x8005ad8 >> 3 | pcVar5 << 0x3d)) {
            __cfi_slowpath_diag(0xba8145ef24be26ed,pcVar5,0x8000f20);
        }
        (*pcVar5)(iVar6,1);
        _raw_read_unlock_bh(iVar6 + 0x170);
        return;
    }
    return;
}


// ===== sym.__typeid__ZTSFvP14mhi_controllerE_global_addr @ 0x08005c80 (size 8) =====

void sym.__typeid__ZTSFvP14mhi_controllerE_global_addr(int64_t param_1)

{
    uint32_t uVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    int64_t *piVar4;
    uint32_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 8);
    iVar3 = *(param_1 + 0x98);
    sym.mhi_misc_unregister_controller(param_1);
    sym.mhi_misc_sysfs_destroy(param_1);
    if (*(param_1 + 0x28c) != '\0') {
        *(param_1 + 0x28c) = 0;
        if (*(param_1 + 0x80) != 0) {
            sym.mhi_free_bhie_table(param_1,param_1 + 0x80);
        }
        if (*(param_1 + 0x88) != 0) {
            sym.mhi_free_bhie_table(param_1,param_1 + 0x88);
        }
    }
    destroy_workqueue(*(param_1 + 0x200));
    kfree(*(param_1 + 0x130));
    kfree(*(param_1 + 0x128));
    uVar1 = *(param_1 + 0xb8);
    if (uVar1 != 0) {
        uVar5 = 0;
        piVar4 = iVar3 + 0x110;
        do {
            if (*piVar4 != 0) {
                put_device(*piVar4 + 0x28);
                uVar1 = *(param_1 + 0xb8);
            }
            uVar5 = uVar5 + 1;
            piVar4 = piVar4 + 0x33;
        } while (uVar5 < uVar1);
    }
    vfree(*(param_1 + 0x98));
    iVar2 = iVar2 + 0x28;
    device_del(iVar2);
    put_device(iVar2);
    ida_free(obj.mhi_controller_ida,*(param_1 + 0x288));
    return;
}


// ===== sym.mhi_soc_reset.cfi_jt @ 0x08005c88 (size 8) =====

void sym.mhi_soc_reset.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = *(param_1 + 0x278);
    if (pcVar1 == NULL) {
        pcVar1 = *(param_1 + 0x270);
        iVar2 = *(param_1 + 0x18);
        __cfi_slowpath_diag(0xcc1f7c1a9c27c280,pcVar1,0x8000ac0);
        (*pcVar1)(param_1,iVar2 + 0xb0,1);
    }
    else {
        if (7 < (pcVar1 + -0x8005c80 >> 3 | pcVar1 << 0x3d)) {
            __cfi_slowpath_diag(0x95232cda069bc43d,pcVar1,0x8000b20);
        }
        (*pcVar1)(param_1);
    }
    return;
}


// ===== sym.mhi_toggle_dev_wake_nop.4dbb11a4522110e50d216ee75119b05c.cfi_jt @ 0x08005c90 (size 8) =====

void sym.mhi_toggle_dev_wake_nop.4dbb11a4522110e50d216ee75119b05c.cfi_jt(void)

{
    return;
}


// ===== sym.mhi_toggle_dev_wake.4dbb11a4522110e50d216ee75119b05c.cfi_jt @ 0x08005c98 (size 8) =====

void sym.mhi_toggle_dev_wake.4dbb11a4522110e50d216ee75119b05c.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = *(param_1 + 0x228);
    if (2 < (pcVar1 + -0x8005ad8 >> 3 | pcVar1 << 0x3d)) {
        __cfi_slowpath_diag(0xba8145ef24be26ed,pcVar1,0x8001020);
    }
    (*pcVar1)(param_1,0);
    pcVar1 = *(param_1 + 0x230);
    if (2 < (pcVar1 + -0x8005ad8 >> 3 | pcVar1 << 0x3d)) {
        __cfi_slowpath_diag(0xba8145ef24be26ed,pcVar1,0x8001040);
    }
    (*pcVar1)(param_1,1);
    return;
}


// ===== sym.mhi_free_controller.cfi_jt @ 0x08005ca0 (size 8) =====

void sym.mhi_free_controller.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree();
    return;
}


// ===== sym.mhi_debug_reg_dump.cfi_jt @ 0x08005ca8 (size 8) =====

ulong sym.mhi_debug_reg_dump.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint uVar4;
    int iVar5;
    ulong uVar6;
    uint64_t uVar7;
    char *pcVar8;
    char *pcVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar10;
    int64_t iVar11;
    ulong uVar12;
    uint64_t uVar13;
    int64_t iVar14;
    int64_t iVar15;
    int64_t iVar16;
    ulong unaff_x30;
    uchar auVar17 [16];
    uint uStack_1bc;
    char *pcStack_1b8;
    uint32_t auStack_1b0 [2];
    int64_t iStack_1a8;
    char *pcStack_1a0;
    uint uStack_198;
    int64_t iStack_190;
    char *pcStack_188;
    uint uStack_180;
    int64_t iStack_178;
    char *pcStack_170;
    uint uStack_168;
    int64_t iStack_160;
    char *pcStack_158;
    uint uStack_150;
    int64_t iStack_148;
    char *pcStack_140;
    uint uStack_138;
    int64_t iStack_130;
    char *pcStack_128;
    uint uStack_120;
    int64_t iStack_118;
    char *pcStack_110;
    uint uStack_108;
    int64_t iStack_100;
    char *pcStack_f8;
    ulong uStack_e8;
    char *pcStack_e0;
    uint uStack_d8;
    int64_t iStack_d0;
    char *pcStack_c8;
    uint uStack_c0;
    int64_t iStack_b8;
    char *pcStack_b0;
    uint uStack_a8;
    int64_t iStack_a0;
    char *pcStack_98;
    uint uStack_90;
    int64_t iStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_68 = *(iVar14 + 0x5e0);
    iVar14 = *(param_1 + 0x18);
    iVar10 = *(param_1 + 0x20);
    uStack_1bc = 0;
    iVar16 = *(param_1 + 0x28);
    uVar6 = *(param_1 + 0x30);
    iVar15 = *(param_1 + 8);
    memset(auStack_1b0,0,0x128);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_180 = 0x34;
    pcStack_1b8 = "BHI_ERRDBG2";
    uStack_198 = 0x3c;
    uStack_168 = 0x30;
    uStack_d8 = 0x3c;
    pcStack_1a0 = "BHI_ERRDBG3";
    uStack_150 = 0x28;
    uStack_108 = 0x48;
    pcStack_188 = "BHI_ERRDBG1";
    pcStack_c8 = "BHIE_TXVEC_STATUS";
    pcStack_f8 = "MHI_WAKE_DB";
    pcStack_170 = "BHI_ERRCODE";
    pcStack_b0 = "BHIE_RXVEC_DB";
    uStack_80 = 0;
    pcStack_158 = "BHI_EXECENV";
    pcStack_e0 = "BHIE_TXVEC_DB";
    uStack_a8 = 0x70;
    pcStack_140 = "BHI_STATUS";
    uStack_c0 = 0x44;
    pcStack_98 = "BHIE_RXVEC_STATUS";
    uStack_90 = 0x78;
    pcStack_128 = "MHI_CNTRL";
    iVar11 = *(iVar15 + 0xc0);
    auStack_1b0[0] = 0x38;
    uStack_138 = 0x2c;
    uStack_120 = 0x38;
    pcStack_110 = "MHI_STATUS";
    iStack_1a8 = iVar10;
    iStack_190 = iVar10;
    iStack_178 = iVar10;
    iStack_160 = iVar10;
    iStack_148 = iVar10;
    iStack_130 = iVar10;
    iStack_118 = iVar14;
    iStack_100 = iVar14;
    uStack_e8 = uVar6;
    iStack_d0 = iVar16;
    iStack_b8 = iVar16;
    iStack_a0 = iVar16;
    iStack_88 = iVar16;
    if (((iVar14 == 0) || (iVar10 == 0)) || (iVar16 == 0)) {
        uVar7 = 0;
        uVar6 = _dev_err(iVar15 + 0x28,"[E][%s] Cannot dump MHI/BHI registers\n");
        if ((iVar11 != 0) && (*(iVar11 + 0x18) < 3)) {
            uVar7 = 0;
            uVar6 = ipc_log_string(*(iVar11 + 0x20),"[E][%s] Cannot dump MHI/BHI registers\n");
        }
    }
    else {
        uVar6 = sym.to_mhi_pm_state_str(*(param_1 + 0x17c));
        uVar2 = *(param_1 + 0x188);
        pcVar8 = "INVALID_STATE";
        if ((uVar2 < 0x100) && (0xf6 < uVar2 - 8)) {
            pcVar8 = *(reloc..str.14.llvm.39275123862783422 + uVar2 * 8);
        }
        if (*(param_1 + 0x184) < 10) {
            pcVar9 = *(reloc..str.llvm.39275123862783422 + *(param_1 + 0x184) * 8);
        }
        else {
            pcVar9 = "INVALID_EE";
        }
        _dev_err(iVar15 + 0x28,"[E][%s] host pm_state:%s dev_state:%s ee:%s\n","mhi_debug_reg_dump",uVar6,pcVar8,
                 pcVar9);
        if ((iVar11 != 0) && (*(iVar11 + 0x18) < 3)) {
            uVar12 = *(iVar11 + 0x20);
            uVar6 = sym.to_mhi_pm_state_str(*(param_1 + 0x17c));
            uVar2 = *(param_1 + 0x188);
            pcVar8 = "INVALID_STATE";
            if ((uVar2 < 0x100) && (0xf6 < uVar2 - 8)) {
                pcVar8 = *(reloc..str.14.llvm.39275123862783422 + uVar2 * 8);
            }
            if (*(param_1 + 0x184) < 10) {
                pcVar9 = *(reloc..str.llvm.39275123862783422 + *(param_1 + 0x184) * 8);
            }
            else {
                pcVar9 = "INVALID_EE";
            }
            ipc_log_string(uVar12,"[E][%s] host pm_state:%s dev_state:%s ee:%s\n","mhi_debug_reg_dump",uVar6,pcVar8
                           ,pcVar9);
        }
        uVar2 = sym.mhi_get_mhi_state(param_1);
        uVar13 = uVar2;
        uVar3 = sym.mhi_get_exec_env(param_1);
        iVar14 = *(*(param_1 + 8) + 0xc0);
        if (uVar3 < 10) {
            pcVar8 = *(reloc..str.llvm.39275123862783422 + uVar3 * 8);
        }
        else {
            pcVar8 = "INVALID_EE";
        }
        pcVar9 = "INVALID_STATE";
        if ((uVar2 < 0x100) && (0xf6 < uVar13 - 8)) {
            pcVar9 = *(reloc..str.14.llvm.39275123862783422 + uVar13 * 8);
        }
        uVar7 = 0;
        uVar6 = _dev_err(iVar15 + 0x28,"[E][%s] device ee: %s dev_state: %s\n","mhi_debug_reg_dump",pcVar8,pcVar9);
        if ((iVar14 != 0) && (*(iVar14 + 0x18) < 3)) {
            if (uVar3 < 10) {
                pcVar8 = *(reloc..str.llvm.39275123862783422 + uVar3 * 8);
            }
            else {
                pcVar8 = "INVALID_EE";
            }
            pcVar9 = "INVALID_STATE";
            if ((uVar2 < 0x100) && (0xf6 < uVar13 - 8)) {
                pcVar9 = *(reloc..str.14.llvm.39275123862783422 + uVar13 * 8);
            }
            uVar7 = 0;
            uVar6 = ipc_log_string(*(iVar14 + 0x20),"[E][%s] device ee: %s dev_state: %s\n","mhi_debug_reg_dump",
                                   pcVar8,pcVar9);
        }
        iVar14 = 0;
        while (*(auStack_1b0 + iVar14 + -8) != 0) {
            if (*(&iStack_1a8 + iVar14) != 0) {
                uVar4 = sym.mhi_read_reg(param_1,*(&iStack_1a8 + iVar14),*(auStack_1b0 + iVar14),&uStack_1bc);
                iVar16 = *(*(param_1 + 8) + 0xc0);
                uVar7 = 0;
                uVar6 = _dev_err(iVar15 + 0x28,"[E][%s] reg: %s val: 0x%x, ret: %d\n","mhi_debug_reg_dump",
                                 *(auStack_1b0 + iVar14 + -8),uStack_1bc,uVar4);
                if ((iVar16 != 0) && (*(iVar16 + 0x18) < 3)) {
                    uVar7 = 0;
                    uVar6 = ipc_log_string(*(iVar16 + 0x20),"[E][%s] reg: %s val: 0x%x, ret: %d\n",
                                           "mhi_debug_reg_dump",*(auStack_1b0 + iVar14 + -8),uStack_1bc,uVar4);
                }
            }
            iVar14 = iVar14 + 0x18;
            if (iVar14 == 0x150) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x8013b38);
                (*pcVar1)();
            }
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_68) {
        return uVar6;
    }
    auVar17 = __stack_chk_fail();
    iVar16 = auVar17._0_8_;
    *extraout_x18 = sym.mhi_device_get_sync_atomic;
    iVar10 = *(iVar16 + 0x10);
    uVar13 = auVar17._8_8_ & 0xffffffff;
    uVar2 = auVar17._8_4_;
    iVar14 = iVar10 + 0x170;
    _raw_read_lock_bh(iVar14);
    if (0x7f < *(iVar10 + 0x17c)) {
        _raw_read_unlock_bh(iVar14);
        return 0xfffffffb;
    }
    pcVar1 = *(iVar10 + 0x228);
    if (2 < (pcVar1 + -0x8005ad8 >> 3 | pcVar1 << 0x3d)) {
        __cfi_slowpath_diag(0xba8145ef24be26ed,pcVar1,0x80010e0);
    }
    (*pcVar1)(iVar10,1);
    _raw_read_unlock_bh(iVar14);
    *(iVar16 + 0x3cc) = *(iVar16 + 0x3cc) + 1;
    pm_wakeup_dev_event(*(iVar10 + 8) + 0x28,0,0);
    pcVar1 = *(iVar10 + 0x240);
    if (9 < (pcVar1 + -0x8005c30 >> 3 | pcVar1 << 0x3d)) {
        __cfi_slowpath_diag(0x9d98c101a4fe7fa9,pcVar1,0x8001100);
    }
    (*pcVar1)(iVar10);
    if (uVar2 == 0) {
        if (*(iVar10 + 0x17c) != 4) {
            iVar14 = *(*(iVar10 + 8) + 0xc0);
            _dev_err(iVar16 + 0x28,"[E][%s] Return without waiting for M0\n","mhi_device_get_sync_atomic");
            if ((iVar14 != 0) && (*(iVar14 + 0x18) < 3)) {
                ipc_log_string(*(iVar14 + 0x20),"[E][%s] Return without waiting for M0\n","mhi_device_get_sync_atomic"
                              );
            }
        }
        pcVar1 = *(iVar10 + 0x248);
        if ((pcVar1 + -0x8005c80 >> 3 | pcVar1 << 0x3d) < 8) goto code_r0x08013ce4;
        uVar6 = 0x8001120;
    }
    else {
        if ((uVar7 & 1) == 0) {
            uVar3 = *(iVar10 + 0x17c);
            while (((uVar7 = uVar3, uVar3 != 4 && (uVar2 = uVar13, uVar3 < 0x80)) && (0 < uVar2))) {
                __const_udelay(0x68dbc);
                uVar3 = *(iVar10 + 0x17c);
                uVar2 = uVar2 - 100;
                uVar13 = uVar2;
            }
        }
        else {
            while( true ) {
                uVar2 = uVar13;
                iVar5 = sym.mhi_get_mhi_state(iVar10);
                if (iVar5 == 2) break;
                uVar7 = *(iVar10 + 0x17c);
                if (0x7f < *(iVar10 + 0x17c) || uVar2 < 1) goto code_r0x08013cb8;
                __const_udelay(0x68dbc);
                uVar13 = uVar2 - 100;
            }
            uVar7 = *(iVar10 + 0x17c);
        }
code_r0x08013cb8:
        if ((0x7f < uVar7) || (uVar2 < 1)) {
            uVar2 = *(iVar10 + 0x188);
            iVar11 = *(*(iVar10 + 8) + 0xc0);
            pcVar8 = "INVALID_STATE";
            if ((uVar2 < 0x100) && (0xf6 < uVar2 - 8)) {
                pcVar8 = *(reloc..str.14.llvm.39275123862783422 + uVar2 * 8);
            }
            uVar6 = sym.to_mhi_pm_state_str(uVar7);
            _dev_err(iVar16 + 0x28,"[E][%s] Did not enter M0, cur_state: %s pm_state: %s\n",
                     "mhi_device_get_sync_atomic",pcVar8,uVar6);
            if ((iVar11 != 0) && (*(iVar11 + 0x18) < 3)) {
                uVar2 = *(iVar10 + 0x188);
                uVar6 = *(iVar11 + 0x20);
                pcVar8 = "INVALID_STATE";
                if ((uVar2 < 0x100) && (0xf6 < uVar2 - 8)) {
                    pcVar8 = *(reloc..str.14.llvm.39275123862783422 + uVar2 * 8);
                }
                uVar12 = sym.to_mhi_pm_state_str(*(iVar10 + 0x17c));
                ipc_log_string(uVar6,"[E][%s] Did not enter M0, cur_state: %s pm_state: %s\n",
                               "mhi_device_get_sync_atomic",pcVar8,uVar12);
            }
            _raw_read_lock_bh(iVar14);
            pcVar1 = *(iVar10 + 0x230);
            if (2 < (pcVar1 + -0x8005ad8 >> 3 | pcVar1 << 0x3d)) {
                __cfi_slowpath_diag(0xba8145ef24be26ed,pcVar1,0x8001140);
            }
            (*pcVar1)(iVar10,0);
            _raw_read_unlock_bh(iVar14);
            *(iVar16 + 0x3cc) = *(iVar16 + 0x3cc) + -1;
            pcVar1 = *(iVar10 + 0x248);
            if (7 < (pcVar1 + -0x8005c80 >> 3 | pcVar1 << 0x3d)) {
                __cfi_slowpath_diag(0x95232cda069bc43d,pcVar1,0x8001160);
            }
            (*pcVar1)(iVar10);
            return 0xffffff92;
        }
        pcVar1 = *(iVar10 + 0x248);
        if ((pcVar1 + -0x8005c80 >> 3 | pcVar1 << 0x3d) < 8) goto code_r0x08013ce4;
        uVar6 = 0x8001180;
    }
    __cfi_slowpath_diag(0x95232cda069bc43d,pcVar1,uVar6);
code_r0x08013ce4:
    (*pcVar1)(iVar10);
    return 0;
}


// ===== sym.mhi_dump_sfr.cfi_jt @ 0x08005cb0 (size 8) =====

void sym.mhi_dump_sfr.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t iVar9;
    int64_t iVar10;
    ulong *puVar11;
    int64_t *piVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint64_t uVar15;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar11 = *(param_1 + 0x88);
    iVar6 = *(param_1 + 8);
    piVar12 = *puVar11;
    iVar9 = *piVar12;
    uVar4 = *(iVar9 + 4);
    if (uVar4 - 0x209 < 0xfffffdff) {
        iVar10 = *(iVar6 + 0xc0);
        _dev_err(iVar6 + 0x28,"[E][%s] invalid reported header size %u\n","mhi_dump_sfr");
        if (iVar10 == 0) {
            return;
        }
        if (2 < *(iVar10 + 0x18)) {
            return;
        }
        ipc_log_string(*(iVar10 + 0x20),"[E][%s] invalid reported header size %u\n","mhi_dump_sfr",*(iVar9 + 4));
        return;
    }
    if (uVar4 - 8 < 0x40) {
        iVar9 = *(iVar6 + 0xc0);
        _dev_err(iVar6 + 0x28,"[E][%s] invalid rddm table size %u\n","mhi_dump_sfr",0);
        if (iVar9 == 0) {
            return;
        }
        if (2 < *(iVar9 + 0x18)) {
            return;
        }
        ipc_log_string(*(iVar9 + 0x20),"[E][%s] invalid rddm table size %u\n","mhi_dump_sfr",0);
        return;
    }
    uVar15 = 0;
    uVar7 = 0;
    iVar10 = iVar9 + 8;
    uVar13 = piVar12[3] - uVar4;
    iVar9 = iVar9 + uVar4;
    while( true ) {
        if (uVar15 == 9) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x5512,0x80135ac);
            (*pcVar2)();
        }
        iVar1 = iVar10 + uVar15 * 0x40;
        iVar3 = strcmp(iVar1 + 0x2c,"Q6-SFR.bin");
        if (iVar3 == 0) break;
        uVar5 = *(iVar1 + 0x10);
        if (uVar13 < uVar5) {
            uVar14 = uVar5 - uVar13;
            if (uVar14 != 0) {
                do {
                    uVar7 = uVar7 + 1;
                    if (*(puVar11 + 2) == uVar7) {
                        iVar9 = iVar10 + (uVar15 & 0xffffffff) * 0x40 + 0x2c;
                        iVar10 = *(iVar6 + 0xc0);
                        _dev_err(iVar6 + 0x28,"[E][%s] invalid size for file %s\n","mhi_find_next_file_offset",iVar9)
                        ;
                        if (iVar10 == 0) {
                            return;
                        }
                        if (2 < *(iVar10 + 0x18)) {
                            return;
                        }
                        ipc_log_string(*(iVar10 + 0x20),"[E][%s] invalid size for file %s\n",
                                       "mhi_find_next_file_offset",iVar9);
                        return;
                    }
                    iVar3 = piVar12[uVar7 * 4 + 3];
                    if (uVar14 <= piVar12[uVar7 * 4 + 3]) {
                        uVar13 = iVar3 - uVar14;
                        iVar9 = piVar12[uVar7 * 4] + uVar14;
                        goto code_r0x080132b0;
                    }
                    uVar14 = uVar14 - iVar3;
                } while (uVar14 != 0);
            }
            uVar13 = 0;
        }
        else {
            iVar9 = iVar9 + uVar5;
            uVar13 = uVar13 - uVar5;
        }
code_r0x080132b0:
        uVar15 = uVar15 + 1;
        if (uVar15 == uVar4 - 8 >> 6) {
            return;
        }
    }
    uVar15 = *(iVar10 + (uVar15 & 0xffffffff) * 0x40 + 0x10);
    iVar10 = __kmalloc(uVar15 + 1,0xdc0);
    if (iVar10 == 0) {
        return;
    }
    uVar5 = uVar15 & 0xffffffff;
    do {
        uVar4 = uVar5;
        if (uVar4 == 0) {
code_r0x08013544:
            iVar9 = *(param_1 + 8);
            *(iVar10 + (uVar15 & 0xffffffff)) = 0;
            iVar9 = *(iVar9 + 0xc0);
            _dev_err(iVar6 + 0x28,"[E][%s] %s\n","mhi_process_sfr",iVar10);
            if ((iVar9 != 0) && (*(iVar9 + 0x18) < 3)) {
                ipc_log_string(*(iVar9 + 0x20),"[E][%s] %s\n","mhi_process_sfr",iVar10);
            }
            goto code_r0x0801359c;
        }
        uVar14 = uVar13;
        if (uVar13 == 0) {
            uVar8 = (piVar12 + uVar7 * 4)[3];
            iVar9 = piVar12[uVar7 * 4];
            uVar14 = uVar8;
            if (uVar5 <= uVar8) {
                uVar14 = uVar4;
            }
        }
        if (uVar4 < uVar14 || uVar4 - uVar14 == 0) {
            memcpy(iVar10,iVar9,uVar5);
            goto code_r0x08013544;
        }
        memcpy(iVar10,iVar9,uVar14);
        uVar13 = 0;
        iVar10 = iVar10 + uVar14;
        uVar7 = uVar7 + 1;
        uVar5 = uVar4 - uVar14;
    } while (uVar7 != *(*(param_1 + 0x88) + 0x10));
    iVar9 = *(*(param_1 + 8) + 0xc0);
    _dev_err(iVar6 + 0x28,"[E][%s] invalid size for SFR file\n","mhi_process_sfr");
    if ((iVar9 != 0) && (*(iVar9 + 0x18) < 3)) {
        ipc_log_string(*(iVar9 + 0x20),"[E][%s] invalid size for SFR file\n","mhi_process_sfr");
    }
code_r0x0801359c:
    kfree(iVar10);
    return;
}


// ===== sym.mhi_unprepare_after_power_down.cfi_jt @ 0x08005cb8 (size 8) =====

void sym.mhi_unprepare_after_power_down.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x88) != 0) {
        sym.mhi_free_bhie_table(param_1,param_1 + 0x88);
    }
    sym.mhi_deinit_dev_ctxt(param_1);
    return;
}


// ===== sym.serial_number_show.6ea9a53e17dc3aa18347e4cc921a30b8.cfi_jt @ 0x08005cc0 (size 8) =====

int64_t sym.serial_number_show.6ea9a53e17dc3aa18347e4cc921a30b8.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,"Serial Number: %u\n",*(*(param_1 + -0x18) + 0xdc));
    return iVar1;
}


// ===== sym.oem_pk_hash_show.6ea9a53e17dc3aa18347e4cc921a30b8.cfi_jt @ 0x08005cc8 (size 8) =====

int64_t sym.oem_pk_hash_show.6ea9a53e17dc3aa18347e4cc921a30b8.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    uint64_t uVar3;
    int iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + -0x18);
    uVar3 = 0;
    iVar4 = 0;
    do {
        iVar1 = snprintf(param_3 + iVar4,0x1000 - iVar4,"OEMPKHASH[%d]: 0x%x\n",uVar3 & 0xffffffff,
                         *(iVar2 + 0xe0 + uVar3 * 4));
        uVar3 = uVar3 + 1;
        iVar4 = iVar1 + iVar4;
    } while (uVar3 != 0x10);
    return iVar4;
}


// ===== sym.log_level_show.74907ba8ca9a47fec9848b5e279d5fb3.cfi_jt @ 0x08005cd0 (size 8) =====

int64_t sym.log_level_show.74907ba8ca9a47fec9848b5e279d5fb3.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint32_t uVar1;
    int iVar2;
    char *pcVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(*(param_1 + -0x18) + 8) + 0xc0);
    if (iVar4 == 0) {
        iVar4 = -5;
    }
    else {
        uVar1 = *(iVar4 + 0x18);
        if (uVar1 < 5) {
            pcVar3 = *(obj.mhi_log_level_str + uVar1 * 8);
        }
        else {
            pcVar3 = "Mask all";
        }
        iVar2 = scnprintf(param_3,0x1000,"IPC log level begins from: %s\n",pcVar3);
        iVar4 = iVar2;
    }
    return iVar4;
}


// ===== sym.time_async_show.74907ba8ca9a47fec9848b5e279d5fb3.cfi_jt @ 0x08005cd8 (size 8) =====

int64_t sym.time_async_show.74907ba8ca9a47fec9848b5e279d5fb3.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint32_t uVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + -0x18);
    uVar1 = prandom_u32();
    if (uVar1 == 0) {
        uVar1 = 1;
    }
    iVar2 = sym.mhi_get_remote_time(param_1 + -0x28,uVar1,0x8005a68);
    if (iVar2 == 0) {
        iVar2 = scnprintf(param_3,0x1000,"Requested time asynchronously with seq:%llx\n",uVar1);
    }
    else {
        iVar3 = *(*(iVar3 + 8) + 0xc0);
        _dev_err(param_1,"[E][%s] Failed to request time, seq:%llx, ret:%d\n","time_async_show",uVar1,iVar2);
        if ((iVar3 != 0) && (*(iVar3 + 0x18) < 3)) {
            ipc_log_string(*(iVar3 + 0x20),"[E][%s] Failed to request time, seq:%llx, ret:%d\n","time_async_show",
                           uVar1,iVar2);
        }
        iVar2 = scnprintf(param_3,0x1000,"Request failed or feature unsupported\n");
    }
    return iVar2;
}


// ===== sym.time_show.74907ba8ca9a47fec9848b5e279d5fb3.cfi_jt @ 0x08005ce0 (size 8) =====

int64_t sym.time_show.74907ba8ca9a47fec9848b5e279d5fb3.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    uint32_t uVar2;
    char *pcVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iVar4 = *(param_1 + -0x18);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar1 = sym.mhi_get_remote_time_sync(param_1 + -0x28,&uStack_40,&uStack_48);
    if (iVar1 == 0) {
        pcVar3 = "local: %llu remote: %llu (ticks)\n";
        iVar1 = scnprintf(param_3,0x1000,"local: %llu remote: %llu (ticks)\n",uStack_40,uStack_48);
    }
    else {
        iVar4 = *(*(iVar4 + 8) + 0xc0);
        _dev_err(param_1,"[E][%s] Failed to obtain time, ret:%d\n","time_show",iVar1);
        if ((iVar4 != 0) && (*(iVar4 + 0x18) < 3)) {
            ipc_log_string(*(iVar4 + 0x20),"[E][%s] Failed to obtain time, ret:%d\n","time_show",iVar1);
        }
        pcVar3 = "Request failed or feature unsupported\n";
        iVar1 = scnprintf(param_3,0x1000,"Request failed or feature unsupported\n");
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return iVar1;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.time_async_show;
    iVar5 = *(iVar4 + -0x18);
    uVar2 = prandom_u32();
    if (uVar2 == 0) {
        uVar2 = 1;
    }
    iVar1 = sym.mhi_get_remote_time(iVar4 + -0x28,uVar2,0x8005a68);
    if (iVar1 == 0) {
        iVar1 = scnprintf(pcVar3,0x1000,"Requested time asynchronously with seq:%llx\n",uVar2);
    }
    else {
        iVar5 = *(*(iVar5 + 8) + 0xc0);
        _dev_err(iVar4,"[E][%s] Failed to request time, seq:%llx, ret:%d\n","time_async_show",uVar2,iVar1);
        if ((iVar5 != 0) && (*(iVar5 + 0x18) < 3)) {
            ipc_log_string(*(iVar5 + 0x20),"[E][%s] Failed to request time, seq:%llx, ret:%d\n","time_async_show",
                           uVar2,iVar1);
        }
        iVar1 = scnprintf(pcVar3,0x1000,"Request failed or feature unsupported\n");
    }
    return iVar1;
}


// ===== sym.mhi_queue_dma.cfi_jt @ 0x08005ce8 (size 8) =====

uint64_t sym.mhi_queue_dma.cfi_jt(int64_t param_1,uint32_t param_2,ulong *param_3,uint64_t param_4,uint64_t param_5)

{
    int iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint64_t *puVar7;
    code *pcVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong *puStack_38;
    ulong uStack_30;
    uint64_t uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_18 = *(iVar9 + 0x5e0);
    iVar9 = 0x18;
    if (param_2 != 1) {
        iVar9 = 0x20;
    }
    uStack_30 = param_3[2];
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_20 = 0x10000000000;
    puStack_38 = param_3;
    uStack_28 = param_4;
    if (*(*(param_1 + iVar9) + 0x18b) == '\0') {
        param_3 = param_2;
        param_5 = param_5 & 0xffffffff;
        uVar3 = sym.mhi_queue(param_1,&uStack_50,param_2,param_5);
        param_4 = param_5;
    }
    else {
        uVar3 = 0xffffffea;
    }
    uVar5 = param_4;
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_18) {
        return uVar3;
    }
    auVar11 = __stack_chk_fail(uVar3);
    iVar4 = auVar11._8_8_;
    iVar9 = auVar11._0_8_;
    *extraout_x18 = sym.mhi_gen_tre;
    _raw_write_lock_bh(iVar4 + 0x170);
    puVar10 = *(iVar4 + 0x38);
    if (*(puVar10 + 0x34) != '\0') {
    //WARNING: Does not return
        pcVar8 = SoftwareBreakpoint(0x800,0x800b4c4);
        (*pcVar8)();
    }
    *(puVar10 + 0x35) = *(param_3 + 0x35);
    if (*(param_3 + 0x35) == '\0') {
        *puVar10 = *param_3;
    }
    else {
        puVar10[4] = param_3[4];
    }
    puVar10[3] = param_3[3];
    puVar10[2] = *(iVar4 + 0x98);
    *(puVar10 + 6) = *(iVar4 + 0xd8);
    puVar10[5] = param_3[5];
    if (*(param_3 + 0x35) == '\0') {
        pcVar8 = *(iVar9 + 600);
        if (1 < (pcVar8 + -0x8005c00 >> 3 | pcVar8 << 0x3d)) {
            __cfi_slowpath_diag(0x88c9a015f85fcdb,pcVar8,0x8000c40);
        }
        uVar2 = (*pcVar8)(iVar9,puVar10);
        if (uVar2 != 0) goto code_r0x0800b494;
    }
    puVar7 = *(iVar4 + 0x98);
    if (*(iVar4 + 0xd4) == 3) {
        uVar2 = 0x80000;
        *(puVar10 + 0x34) = 1;
        *puVar7 = puVar10[4] | puVar10[5] << 0x30;
        uVar6 = *(iVar4 + 0x38) - *(iVar4 + 0x28);
    }
    else {
        iVar1 = *(iVar4 + 0xd0);
        *puVar7 = puVar10[4];
        uVar2 = 0x20000;
        if (iVar1 != 0) {
            uVar2 = 0x20400;
        }
        uVar6 = *(param_3 + 5);
        uVar2 = uVar5 >> 2 & 1 | (uVar5 & 3) << 8 | uVar2;
    }
    *(puVar7 + 1) = uVar6;
    *(puVar7 + 0xc) = uVar2;
    iVar9 = *(*(iVar9 + 8) + 0xc0);
    if ((iVar9 != 0) && (*(iVar9 + 0x18) == 0)) {
        ipc_log_string(*(iVar9 + 0x20),"[D][%s] Chan: %d WP: 0x%llx TRE: 0x%llx 0x%08x 0x%08x\n","mhi_gen_tre",
                       *(iVar4 + 200),puVar7 + (*(iVar4 + 0x70) - *(iVar4 + 0x88)));
    }
    uVar2 = 0;
    uVar3 = *(iVar4 + 0x98) + *(iVar4 + 0xa0);
    if (*(iVar4 + 0x88) + *(iVar4 + 0xa8) <= uVar3) {
        uVar3 = *(iVar4 + 0x88);
    }
    *(iVar4 + 0x98) = uVar3;
    DataMemoryBarrier(2,2);
    uVar3 = *(iVar4 + 0x38) + *(iVar4 + 0x40);
    if (*(iVar4 + 0x28) + *(iVar4 + 0x48) <= uVar3) {
        uVar3 = *(iVar4 + 0x28);
    }
    *(iVar4 + 0x38) = uVar3;
    DataMemoryBarrier(2,2);
code_r0x0800b494:
    _raw_write_unlock_bh(iVar4 + 0x170);
    return uVar2;
}


// ===== sym.mhi_get_event_ring_db_base.cfi_jt @ 0x08005cf0 (size 8) =====

ulong sym.mhi_get_event_ring_db_base.cfi_jt(int64_t param_1,ulong *param_2)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    uchar auVar5 [12];
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iVar3 = *(iVar1 + 0x5e0);
    iVar1 = *(param_1 + 0x10);
    iVar4 = *(*(iVar1 + 8) + 0xc0);
    if (((*(iVar1 + 0x17c) & 0x7de) == 0) ||
       (uVar2 = sym.mhi_read_reg_field(iVar1,*(iVar1 + 0x18),0x20,0xffffffff), uVar2 != 0)) {
        uVar2 = 0xfffffffb;
    }
    else {
        *param_2 = *(iVar4 + 0x50);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iVar3) {
        return uVar2;
    }
    auVar5 = __stack_chk_fail(uVar2);
    if (auVar5._8_4_ < *(auVar5._0_8_ + 0xb8)) {
        return *(*(auVar5._0_8_ + 0x98) + auVar5._8_4_ * 0x198 + 0x110);
    }
    return 0;
}


// ===== sym.mhi_get_channel_db_base.cfi_jt @ 0x08005cf8 (size 8) =====

ulong sym.mhi_get_channel_db_base.cfi_jt(int64_t param_1,ulong *param_2)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    ulong unaff_x30;
    uchar auVar5 [16];
    uchar auVar6 [12];
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iVar3 = *(iVar1 + 0x5e0);
    iVar1 = *(param_1 + 0x10);
    iVar4 = *(*(iVar1 + 8) + 0xc0);
    if (((*(iVar1 + 0x17c) & 0x7de) == 0) ||
       (uVar2 = sym.mhi_read_reg_field(iVar1,*(iVar1 + 0x18),0x18,0xffffffff), uVar2 != 0)) {
        uVar2 = 0xfffffffb;
    }
    else {
        *param_2 = *(iVar4 + 0x50);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iVar3) {
        return uVar2;
    }
    auVar5 = __stack_chk_fail(uVar2);
    *extraout_x18 = sym.mhi_get_event_ring_db_base;
    iVar1 = sp_el0;
    iVar3 = *(iVar1 + 0x5e0);
    iVar1 = *(auVar5._0_8_ + 0x10);
    iVar4 = *(*(iVar1 + 8) + 0xc0);
    if (((*(iVar1 + 0x17c) & 0x7de) == 0) ||
       (uVar2 = sym.mhi_read_reg_field(iVar1,*(iVar1 + 0x18),0x20,0xffffffff), uVar2 != 0)) {
        uVar2 = 0xfffffffb;
    }
    else {
        *auVar5._8_8_ = *(iVar4 + 0x50);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iVar3) {
        return uVar2;
    }
    auVar6 = __stack_chk_fail(uVar2);
    if (auVar6._8_4_ < *(auVar6._0_8_ + 0xb8)) {
        return *(*(auVar6._0_8_ + 0x98) + auVar6._8_4_ * 0x198 + 0x110);
    }
    return 0;
}


// ===== sym.mhi_pm_st_worker.cfi_jt @ 0x08005d00 (size 8) =====

void sym.mhi_pm_st_worker.cfi_jt(code *param_1)

{
    code ****ppppcVar1;
    code ****ppppcVar2;
    uint uVar3;
    uint32_t uVar4;
    int iVar5;
    uint64_t uVar6;
    code *pcVar7;
    ulong uVar8;
    char *pcVar9;
    char *pcVar10;
    code *pcVar11;
    int64_t iVar12;
    int64_t iVar13;
    int64_t iVar14;
    ulong *puVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *arg1;
    code *pcVar16;
    code *****pppppcVar17;
    int64_t unaff_x23;
    code *unaff_x24;
    ulong uVar18;
    code *pcVar19;
    ulong uVar20;
    code *unaff_x25;
    code *****pppppcVar21;
    code *****pppppcVar22;
    uint32_t uVar23;
    ulong unaff_x30;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    int64_t iStack_118;
    uchar *puStack_110;
    ulong uStack_108;
    code ****ppppcStack_100;
    code ****ppppcStack_f8;
    code *pcStack_f0;
    int64_t iStack_e8;
    code ****ppppcStack_e0;
    code *pcStack_d8;
    code *pcStack_d0;
    code *pcStack_c8;
    int64_t iStack_b8;
    code *pcStack_b0;
    code ****ppppcStack_a8;
    code ****ppppcStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    int iStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    pcVar16 = param_1 + -0x18;
    iStack_68 = *(iVar12 + 0x5e0);
    pppppcVar17 = &ppppcStack_a8;
    arg1 = param_1 + -0x1d0;
    ppppcStack_a8 = pppppcVar17;
    ppppcStack_a0 = pppppcVar17;
    _raw_spin_lock_irq(pcVar16);
    pcVar11 = param_1 + -0x28;
    if (*pcVar11 != pcVar11) {
        ppppcVar1 = *(param_1 + -0x28);
        pppppcVar22 = *(param_1 + -0x20);
        ppppcVar1[1] = ppppcStack_a0;
        *ppppcStack_a0 = ppppcVar1;
        *pppppcVar22 = pppppcVar17;
        *(param_1 + -0x28) = pcVar11;
        *(param_1 + -0x20) = pcVar11;
        ppppcStack_a0 = pppppcVar22;
    }
    _raw_spin_unlock_irq(pcVar16);
    pcVar11 = param_1;
    pppppcVar22 = ppppcStack_a8;
    if (ppppcStack_a8 != pppppcVar17) {
        pcVar16 = param_1 + -0x90;
        pcVar11 = param_1 + 0x38;
        pcStack_b0 = param_1 + -0x44;
        pppppcVar17 = param_1 + -0x60;
        unaff_x23 = -0x2152ffffffffff00;
        pppppcVar21 = ppppcStack_a8;
        do {
            pppppcVar22 = *pppppcVar21;
            uVar6 = __list_del_entry_valid(pppppcVar21);
            if ((uVar6 & 1) != 0) {
                ppppcVar1 = *pppppcVar21;
                ppppcVar2 = pppppcVar21[1];
                ppppcVar1[1] = ppppcVar2;
                *ppppcVar2 = ppppcVar1;
            }
            *pppppcVar21 = 0xdead000000000100;
            pppppcVar21[1] = 0xdead000000000122;
            iVar12 = *(*(param_1 + -0x1c8) + 0xc0);
            if ((iVar12 != 0) && (*(iVar12 + 0x18) == 0)) {
                pcVar10 = "INVALID_STATE";
                if (*(pppppcVar21 + 2) < 7) {
                    pcVar10 = *(reloc..str.10.llvm.39275123862783422 + *(pppppcVar21 + 2) * 8);
                }
                ipc_log_string(*(iVar12 + 0x20),"[D][%s] Handling state transition: %s\n","mhi_pm_st_worker",pcVar10)
                ;
            }
            switch(*(pppppcVar21 + 2)) {
            case 0:
                _raw_write_lock_irq(pppppcVar17);
                if ((*(param_1 + -0x54) & 0x7de) != 0) {
                    uVar3 = sym.mhi_get_exec_env(arg1);
                    *(param_1 + -0x4c) = uVar3;
                }
                _raw_write_unlock_irq(pppppcVar17);
                sym.mhi_fw_load_handler(arg1);
                break;
            case 1:
                sym.mhi_ready_state_transition(arg1);
                break;
            case 2:
                _raw_write_lock_irq(pppppcVar17);
                *(param_1 + -0x4c) = 1;
                _raw_write_unlock_irq(pppppcVar17);
                sym.mhi_process_sleeping_events(arg1);
                sym.mhi_create_devices(arg1);
                if (param_1[0xbe] != 0x0) {
                    sym.mhi_download_amss_image(arg1);
                }
                break;
            case 3:
                iVar12 = *(*(param_1 + -0x1c8) + 0xc0);
                uStack_98 = CONCAT44(uStack_98._4_4_,*(param_1 + -0x4c));
                if ((iVar12 != 0) && (*(iVar12 + 0x18) == 0)) {
                    ipc_log_string(*(iVar12 + 0x20),"[D][%s] Processing Mission Mode transition\n",
                                   "mhi_pm_mission_mode_transition");
                }
                _raw_write_lock_irq(pppppcVar17);
                if ((((*(param_1 + -0x54) & 0x7de) == 0) || (uVar4 = sym.mhi_get_exec_env(arg1), 7 < uVar4)) ||
                   ((1 << (uVar4 & 0x1f) & 0x94U) == 0)) {
                    *(param_1 + -0x54) = 0x800;
                    _raw_write_unlock_irq(pppppcVar17);
                    __wake_up(pcVar11,3,0,0);
                }
                else {
                    *(param_1 + -0x4c) = uVar4;
                    _raw_write_unlock_irq(pppppcVar17);
                    __wake_up(pcVar11,3,0,0);
                    sym.mhi_reset_reg_write_q(arg1);
                    device_for_each_child(*(param_1 + -0x1c8) + 0x28,&uStack_98,sym.mhi_destroy_device.cfi_jt);
                    unaff_x24 = *(param_1 + 0x50);
                    __cfi_slowpath_diag(0x6ba83359ac4765be,unaff_x24,0x8000f60);
                    (*unaff_x24)(arg1,5);
                    iVar5 = sym.__mhi_device_get_sync(arg1);
                    if (iVar5 == 0) {
                        _raw_read_lock_bh(pppppcVar17);
                        if (*(param_1 + -0x54) < 0x80) {
                            uVar4 = *(param_1 + -0x114);
                            if (uVar4 != 0) {
                                uVar23 = 0;
                                iVar12 = *(param_1 + -0xa8);
                                do {
                                    if ((*(iVar12 + 0x112) == '\0') && (*(iVar12 + 0x110) == (*(param_1 + -0x48) != 1)))
                                    {
                                        *(iVar12 + 0x58) = (*(iVar12 + 0x48) + *(iVar12 + 0x68)) - *(iVar12 + 0x60);
                                        **(iVar12 + 0x38) = (*(iVar12 + 0x68) - *(iVar12 + 0x60)) + *(iVar12 + 0x30);
                                        DataMemoryBarrier(2,2);
                                        _raw_spin_lock_irq(iVar12 + 0x100);
                                        sym.mhi_ring_er_db(iVar12);
                                        _raw_spin_unlock_irq(iVar12 + 0x100);
                                        uVar4 = *(param_1 + -0x114);
                                    }
                                    uVar23 = uVar23 + 1;
                                    iVar12 = iVar12 + 0x118;
                                } while (uVar23 < uVar4);
                            }
                            _raw_read_unlock_bh(pppppcVar17);
                            sym.mhi_process_sleeping_events(arg1);
                            sym.mhi_create_devices(arg1);
                            sym.mhi_misc_mission_mode(arg1);
                            _raw_read_lock_bh(pppppcVar17);
                        }
                        unaff_x24 = *(param_1 + 0x60);
                        if (2 < (unaff_x24 + -0x8005ad8 >> 3 | unaff_x24 << 0x3d)) {
                            __cfi_slowpath_diag(0xba8145ef24be26ed,unaff_x24,0x8000f80);
                        }
                        (*unaff_x24)(arg1,0);
                        _raw_read_unlock_bh(pppppcVar17);
                    }
                }
                break;
            case 4:
                _raw_write_lock_irq(pppppcVar17);
                *(param_1 + -0x4c) = 7;
                _raw_write_unlock_irq(pppppcVar17);
                sym.mhi_create_devices(arg1);
                break;
            case 5:
                iVar13 = *(param_1 + -0x1c8);
                iVar12 = *(iVar13 + 0xc0);
                if ((iVar12 != 0) && (*(iVar12 + 0x18) == 0)) {
                    uVar18 = *(iVar12 + 0x20);
                    uVar8 = sym.to_mhi_pm_state_str(*(param_1 + -0x54));
                    uVar20 = sym.to_mhi_pm_state_str(0x200);
                    ipc_log_string(uVar18,"[D][%s] Transitioning from PM state: %s to: %s\n",
                                   "mhi_pm_sys_error_transition",uVar8,uVar20);
                }
                pcVar19 = *(param_1 + 0x50);
                __cfi_slowpath_diag(0x6ba83359ac4765be,pcVar19,0x8000fa0);
                (*pcVar19)(arg1,6);
                mutex_lock(pcVar16);
                _raw_write_lock_irq(pppppcVar17);
                uVar4 = *(param_1 + -0x54);
                unaff_x24 = uVar4;
                uVar6 = 0x2000000000;
                if (uVar4 != 0) {
                    uVar6 = 0x3f00000000 - (LZCOUNT(unaff_x24) << 0x20);
                }
                if ((uVar6 < 0xb00000001) && (uVar4 == *(obj.dev_state_transitions + (uVar6 >> 0x20) * 8))) {
                    if (0x60 < (uVar6 >> 0x1d | 4)) goto code_r0x0800e60c;
                    if ((uVar6 >> 0x20 & 0x1fffffffffffffffU) != 8) goto code_r0x0800e380;
                    *(param_1 + -0x54) = 0x200;
                    _raw_write_unlock_irq(pppppcVar17);
code_r0x0800d9e8:
                    *(param_1 + -0x4c) = 8;
                    __wake_up(pcVar11,3,0,0);
                    if ((uVar4 & 0x7de) == 0) {
code_r0x0800dd10:
                        iVar12 = *(*(param_1 + -0x1c8) + 0xc0);
                        if ((iVar12 == 0) || (*(iVar12 + 0x18) != 0)) {
                            iVar5 = *(param_1 + -0x114);
                        }
                        else {
                            ipc_log_string(*(iVar12 + 0x20),
                                           "[D][%s] Waiting for all pending event ring processing to complete\n",
                                           "mhi_pm_sys_error_transition");
                            iVar5 = *(param_1 + -0x114);
                        }
                        if (iVar5 != 0) {
                            uVar4 = 0;
                            unaff_x24 = *(param_1 + -0xa8) + 0xa8;
                            do {
                                if (unaff_x24[0x6a] == 0x0) {
                                    if (*(unaff_x24 + -0x88) == 2) {
                                        cancel_work_sync(unaff_x24 + 0x28);
                                    }
                                    else {
                                        tasklet_kill(unaff_x24);
                                    }
                                }
                                uVar4 = uVar4 + 1;
                                unaff_x24 = unaff_x24 + 0x118;
                            } while (uVar4 < *(param_1 + -0x114));
                        }
                        mutex_unlock(pcVar16);
                        sym.mhi_misc_disable(arg1);
                        iVar12 = *(*(param_1 + -0x1c8) + 0xc0);
                        if ((iVar12 != 0) && (*(iVar12 + 0x18) == 0)) {
                            ipc_log_string(*(iVar12 + 0x20),"[D][%s] Waiting for all pending threads to complete\n",
                                           "mhi_pm_sys_error_transition");
                        }
                        __wake_up(pcVar11,3,0,0);
                        iVar12 = *(param_1 + -0x1c8);
                        iVar14 = *(iVar12 + 0xc0);
                        if ((iVar14 != 0) && (*(iVar14 + 0x18) == 0)) {
                            ipc_log_string(*(iVar14 + 0x20),
                                           "[D][%s] Reset all active channels and remove MHI devices\n",
                                           "mhi_pm_sys_error_transition");
                            iVar12 = *(param_1 + -0x1c8);
                        }
                        device_for_each_child(iVar12 + 0x28,0,sym.mhi_destroy_device.cfi_jt);
                        mutex_lock(pcVar16);
                        if (*pcStack_b0 != 0) {
    //WARNING: Does not return
                            pcVar16 = SoftwareBreakpoint(0x800,0x800e5a0);
                            (*pcVar16)();
                        }
                        if (*(param_1 + -0x40) != 0) {
    //WARNING: Does not return
                            pcVar16 = SoftwareBreakpoint(0x800,0x800e5a8);
                            (*pcVar16)();
                        }
                        iVar12 = *(*(param_1 + -0x1c8) + 0xc0);
                        if ((iVar12 != 0) && (*(iVar12 + 0x18) == 0)) {
                            ipc_log_string(*(iVar12 + 0x20),"[D][%s] Resetting EV CTXT and CMD CTXT\n",
                                           "mhi_pm_sys_error_transition");
                        }
                        iVar12 = *(param_1 + -0xa0);
                        iVar14 = *(*(param_1 + -0x98) + 0x10);
                        *(iVar12 + 0x28) = *(iVar12 + 0x20);
                        *(iVar12 + 0x30) = *(iVar12 + 0x20);
                        *(iVar14 + 0x1c) = *(iVar14 + 0xc);
                        *(iVar14 + 0x24) = *(iVar14 + 0xc);
                        uVar4 = *(param_1 + -0x114);
                        if (uVar4 != 0) {
                            uVar23 = 0;
                            puVar15 = **(param_1 + -0x98) + 0x1c;
                            pcVar10 = *(param_1 + -0xa8) + 0x112;
                            do {
                                if (*pcVar10 == '\0') {
                                    *(pcVar10 + -0xc2) = *(pcVar10 + -0xca);
                                    *(pcVar10 + -0xba) = *(pcVar10 + -0xca);
                                    *puVar15 = puVar15[-2];
                                    puVar15[1] = puVar15[-2];
                                    uVar4 = *(param_1 + -0x114);
                                }
                                uVar23 = uVar23 + 1;
                                pcVar10 = pcVar10 + 0x118;
                                puVar15 = puVar15 + 0x2c;
                            } while (uVar23 < uVar4);
                        }
                        iVar5 = sym.mhi_get_exec_env(arg1);
                        if (((iVar5 == 0) || (iVar5 = sym.mhi_get_exec_env(arg1), iVar5 == 5)) ||
                           (iVar5 = sym.mhi_get_exec_env(arg1), iVar5 == 6)) {
                            _raw_write_lock_irq(pppppcVar17);
                            uVar4 = *(param_1 + -0x54);
                            unaff_x24 = uVar4;
                            uVar6 = 0x2000000000;
                            if (uVar4 != 0) {
                                uVar6 = 0x3f00000000 - (LZCOUNT(unaff_x24) << 0x20);
                            }
                            if ((uVar6 < 0xb00000001) && (uVar4 == *(obj.dev_state_transitions + (uVar6 >> 0x20) * 8)))
                            {
                                if (0x60 < (uVar6 >> 0x1d | 4)) {
code_r0x0800e60c:
    //WARNING: Does not return
                                    pcVar16 = SoftwareBreakpoint(1,0x800e610);
                                    (*pcVar16)();
                                }
                                if ((0xdfcUL >> (uVar6 >> 0x20 & 0x3fU) & 1) != 0) goto code_r0x0800e4d8;
                                *(param_1 + -0x54) = 2;
                                _raw_write_unlock_irq(pppppcVar17);
                            }
                            else {
code_r0x0800e4d8:
                                _raw_write_unlock_irq(pppppcVar17);
                                if (uVar4 != 2) {
                                    iStack_b8 = *(*(param_1 + -0x1c8) + 0xc0);
                                    uVar8 = sym.to_mhi_pm_state_str(2);
                                    uVar20 = sym.to_mhi_pm_state_str(uVar4);
                                    _dev_err(iVar13 + 0x28,"[E][%s] Error moving to state %s from %s\n",
                                             "mhi_pm_sys_error_transition",uVar8,uVar20);
                                    if ((iStack_b8 != 0) && (*(iStack_b8 + 0x18) < 3)) {
                                        iStack_b8 = *(iStack_b8 + 0x20);
                                        pcVar19 = sym.to_mhi_pm_state_str(2);
                                        uVar8 = sym.to_mhi_pm_state_str(uVar4);
                                        pcVar10 = "[E][%s] Error moving to state %s from %s\n";
                                        iVar12 = iStack_b8;
                                        goto code_r0x0800e584;
                                    }
                                    goto code_r0x0800e204;
                                }
                            }
                            iVar12 = 0;
                        }
                        else {
                            iVar12 = 1;
                        }
                        sym.mhi_queue_state_transition(arg1,iVar12);
                    }
                    else {
                        iStack_6c = -1;
                        unaff_x24 = __msecs_to_jiffies(*(param_1 + -0x58));
                        iVar12 = *(*(param_1 + -0x1c8) + 0xc0);
                        if ((iVar12 != 0) && (*(iVar12 + 0x18) == 0)) {
                            ipc_log_string(*(iVar12 + 0x20),"[D][%s] Triggering MHI Reset in device\n",
                                           "mhi_pm_sys_error_transition");
                        }
                        sym.mhi_write_reg_field(arg1,*(param_1 + -0x1b8),0x38,2);
                        iVar5 = sym.mhi_read_reg_field(arg1,*(param_1 + -0x1b8),0x38,2);
                        pcVar19 = unaff_x24;
                        if ((iVar5 != 0 || iStack_6c == 0) && unaff_x24 == NULL) {
                            pcVar19 = 0x1;
                        }
                        if ((iVar5 == 0 && iStack_6c != 0) && (pcVar19 != NULL)) {
                            uStack_80 = 0;
                            uStack_78 = 0;
                            uStack_90 = 0;
                            uStack_88 = 0;
                            uStack_98 = 0;
                            init_wait_entry(&uStack_98,0);
                            while( true ) {
                                prepare_to_wait_event(pcVar11,&uStack_98,2);
                                iVar5 = sym.mhi_read_reg_field(arg1,*(param_1 + -0x1b8),0x38,2);
                                pcVar19 = unaff_x24;
                                if ((iVar5 != 0 || iStack_6c == 0) && unaff_x24 == NULL) {
                                    pcVar19 = 0x1;
                                }
                                if ((iVar5 != 0 || iStack_6c == 0) || (pcVar19 == NULL)) break;
                                unaff_x24 = schedule_timeout(pcVar19);
                            }
                            finish_wait(pcVar11,&uStack_98);
                        }
                        if ((pcVar19 != 0) && (iStack_6c == 0)) {
                            sym.mhi_write_reg(arg1,*(param_1 + -0x1b0),0x20,0);
                            goto code_r0x0800dd10;
                        }
                        unaff_x24 = *(*(param_1 + -0x1c8) + 0xc0);
                        _dev_err(iVar13 + 0x28,"[E][%s] Device failed to exit MHI Reset state\n",
                                 "mhi_pm_sys_error_transition");
                        if ((unaff_x24 != NULL) && (*(unaff_x24 + 0x18) < 3)) {
                            ipc_log_string(*(unaff_x24 + 0x20),"[E][%s] Device failed to exit MHI Reset state\n",
                                           "mhi_pm_sys_error_transition");
                        }
                    }
                }
                else {
code_r0x0800e380:
                    _raw_write_unlock_irq(pppppcVar17);
                    if (uVar4 == 0x200) goto code_r0x0800d9e8;
                    iStack_b8 = *(*(param_1 + -0x1c8) + 0xc0);
                    uVar8 = sym.to_mhi_pm_state_str(uVar4);
                    uVar20 = sym.to_mhi_pm_state_str(0x200);
                    _dev_err(iVar13 + 0x28,"[E][%s] Failed to transition from PM state: %s to: %s\n",
                             "mhi_pm_sys_error_transition",uVar8,uVar20);
                    if ((iStack_b8 == 0) || (2 < *(iStack_b8 + 0x18))) goto code_r0x0800e204;
                    iVar12 = *(iStack_b8 + 0x20);
                    pcVar19 = sym.to_mhi_pm_state_str(uVar4);
                    uVar8 = sym.to_mhi_pm_state_str(0x200);
                    pcVar10 = "[E][%s] Failed to transition from PM state: %s to: %s\n";
                    unaff_x24 = pcVar19;
code_r0x0800e584:
                    ipc_log_string(iVar12,pcVar10,"mhi_pm_sys_error_transition",pcVar19,uVar8);
                }
code_r0x0800e204:
                iVar12 = *(*(param_1 + -0x1c8) + 0xc0);
                if ((iVar12 != 0) && (*(iVar12 + 0x18) == 0)) {
                    unaff_x24 = *(iVar12 + 0x20);
                    uVar8 = sym.to_mhi_pm_state_str(*(param_1 + -0x54));
                    uVar4 = *(param_1 + -0x48);
                    pcVar10 = "INVALID_STATE";
                    if (uVar4 < 0x100) {
                        pcVar10 = "INVALID_STATE";
                        if (0xf6 < uVar4 - 8) {
                            pcVar10 = *(reloc..str.14.llvm.39275123862783422 + uVar4 * 8);
                        }
                    }
                    pcVar9 = "mhi_pm_sys_error_transition";
code_r0x0800d5f0:
                    ipc_log_string(unaff_x24,"[D][%s] Exiting with PM state: %s, MHI state: %s\n",pcVar9,uVar8,
                                   pcVar10);
                }
                goto code_r0x0800d5f4;
            case 6:
                iVar13 = *(param_1 + -0x1c8);
                iVar12 = *(iVar13 + 0xc0);
                if ((iVar12 != 0) && (*(iVar12 + 0x18) == 0)) {
                    uVar20 = *(iVar12 + 0x20);
                    uVar8 = sym.to_mhi_pm_state_str(*(param_1 + -0x54));
                    ipc_log_string(uVar20,"[D][%s] Processing disable transition with PM state: %s\n",
                                   "mhi_pm_disable_transition",uVar8);
                }
                sym.mhi_reset_reg_write_q(arg1);
                mutex_lock(pcVar16);
                if ((*(param_1 + -0x54) != 0x800) &&
                   ((*(param_1 + -0x148) == 0 || (iVar5 = sym.mhi_get_exec_env(arg1), iVar5 != 3)))) {
                    iVar12 = *(*(param_1 + -0x1c8) + 0xc0);
                    if ((iVar12 != 0) && (*(iVar12 + 0x18) == 0)) {
                        ipc_log_string(*(iVar12 + 0x20),"[D][%s] Triggering MHI Reset in device\n",
                                       "mhi_pm_disable_transition");
                    }
                    sym.mhi_write_reg_field(arg1,*(param_1 + -0x1b8),0x38,2);
                    iVar5 = sym.mhi_poll_reg_field(arg1,*(param_1 + -0x1b8),0x38,2);
                    if (iVar5 != 0) {
                        iVar12 = *(*(param_1 + -0x1c8) + 0xc0);
                        _dev_err(iVar13 + 0x28,"[E][%s] Device failed to clear MHI Reset\n",
                                 "mhi_pm_disable_transition");
                        if ((iVar12 != 0) && (*(iVar12 + 0x18) < 3)) {
                            ipc_log_string(*(iVar12 + 0x20),"[E][%s] Device failed to clear MHI Reset\n",
                                           "mhi_pm_disable_transition");
                        }
                    }
                    sym.mhi_write_reg(arg1,*(param_1 + -0x1b0),0x20,0);
                }
                iVar12 = *(*(param_1 + -0x1c8) + 0xc0);
                if ((iVar12 == 0) || (*(iVar12 + 0x18) != 0)) {
                    iVar5 = *(param_1 + -0x114);
                }
                else {
                    ipc_log_string(*(iVar12 + 0x20),
                                   "[D][%s] Waiting for all pending event ring processing to complete\n",
                                   "mhi_pm_disable_transition");
                    iVar5 = *(param_1 + -0x114);
                }
                if (iVar5 != 0) {
                    uVar4 = 0;
                    iVar12 = *(param_1 + -0xa8);
                    do {
                        if (*(iVar12 + 0x112) == '\0') {
                            free_irq(*(*(param_1 + -0x120) + *(iVar12 + 0x18) * 4),iVar12);
                            if (*(iVar12 + 0x20) == 2) {
                                cancel_work_sync(iVar12 + 0xd0);
                            }
                            else {
                                tasklet_kill(iVar12 + 0xa8);
                            }
                        }
                        uVar4 = uVar4 + 1;
                        iVar12 = iVar12 + 0x118;
                    } while (uVar4 < *(param_1 + -0x114));
                }
                mutex_unlock(pcVar16);
                sym.mhi_misc_disable(arg1);
                iVar12 = *(*(param_1 + -0x1c8) + 0xc0);
                if ((iVar12 != 0) && (*(iVar12 + 0x18) == 0)) {
                    ipc_log_string(*(iVar12 + 0x20),"[D][%s] Waiting for all pending threads to complete\n",
                                   "mhi_pm_disable_transition");
                }
                __wake_up(pcVar11,3,0,0);
                iVar12 = *(param_1 + -0x1c8);
                iVar14 = *(iVar12 + 0xc0);
                if ((iVar14 != 0) && (*(iVar14 + 0x18) == 0)) {
                    ipc_log_string(*(iVar14 + 0x20),"[D][%s] Reset all active channels and remove MHI devices\n",
                                   "mhi_pm_disable_transition");
                    iVar12 = *(param_1 + -0x1c8);
                }
                device_for_each_child(iVar12 + 0x28,0,sym.mhi_destroy_device.cfi_jt);
                mutex_lock(pcVar16);
                if (*pcStack_b0 != 0) {
    //WARNING: Does not return
                    pcVar16 = SoftwareBreakpoint(0x800,0x800e590);
                    (*pcVar16)();
                }
                if (*(param_1 + -0x40) != 0) {
    //WARNING: Does not return
                    pcVar16 = SoftwareBreakpoint(0x800,0x800e598);
                    (*pcVar16)();
                }
                iVar12 = *(*(param_1 + -0x1c8) + 0xc0);
                if ((iVar12 != 0) && (*(iVar12 + 0x18) == 0)) {
                    ipc_log_string(*(iVar12 + 0x20),"[D][%s] Resetting EV CTXT and CMD CTXT\n",
                                   "mhi_pm_disable_transition");
                }
                iVar12 = *(param_1 + -0xa0);
                iVar14 = *(*(param_1 + -0x98) + 0x10);
                *(iVar12 + 0x28) = *(iVar12 + 0x20);
                *(iVar12 + 0x30) = *(iVar12 + 0x20);
                *(iVar14 + 0x1c) = *(iVar14 + 0xc);
                *(iVar14 + 0x24) = *(iVar14 + 0xc);
                uVar4 = *(param_1 + -0x114);
                if (uVar4 != 0) {
                    uVar23 = 0;
                    puVar15 = **(param_1 + -0x98) + 0x1c;
                    pcVar10 = *(param_1 + -0xa8) + 0x112;
                    do {
                        if (*pcVar10 == '\0') {
                            *(pcVar10 + -0xc2) = *(pcVar10 + -0xca);
                            *(pcVar10 + -0xba) = *(pcVar10 + -0xca);
                            *puVar15 = puVar15[-2];
                            puVar15[1] = puVar15[-2];
                            uVar4 = *(param_1 + -0x114);
                        }
                        uVar23 = uVar23 + 1;
                        pcVar10 = pcVar10 + 0x118;
                        puVar15 = puVar15 + 0x2c;
                    } while (uVar23 < uVar4);
                }
                _raw_write_lock_irq(pppppcVar17);
                uVar4 = *(param_1 + -0x54);
                unaff_x24 = uVar4;
                uVar6 = 0x2000000000;
                if (uVar4 != 0) {
                    uVar6 = 0x3f00000000 - (LZCOUNT(unaff_x24) << 0x20);
                }
                if ((uVar6 < 0xb00000001) && (uVar4 == *(obj.dev_state_transitions + (uVar6 >> 0x20) * 8))) {
                    if (0x60 < (uVar6 >> 0x1d | 4)) goto code_r0x0800e60c;
                    if ((0x3fdUL >> (uVar6 >> 0x20 & 0x3fU) & 1) != 0) goto code_r0x0800e42c;
                    *(param_1 + -0x54) = 1;
                    _raw_write_unlock_irq(pppppcVar17);
                }
                else {
code_r0x0800e42c:
                    _raw_write_unlock_irq(pppppcVar17);
                    if (uVar4 != 1) {
                        iStack_b8 = *(*(param_1 + -0x1c8) + 0xc0);
                        uVar8 = sym.to_mhi_pm_state_str(uVar4);
                        uVar20 = sym.to_mhi_pm_state_str(1);
                        _dev_err(iVar13 + 0x28,"[E][%s] Error moving from PM state: %s to: %s\n",
                                 "mhi_pm_disable_transition",uVar8,uVar20);
                        if ((iStack_b8 != 0) && (*(iStack_b8 + 0x18) < 3)) {
                            uVar20 = *(iStack_b8 + 0x20);
                            unaff_x24 = sym.to_mhi_pm_state_str(uVar4);
                            uVar8 = sym.to_mhi_pm_state_str(1);
                            ipc_log_string(uVar20,"[E][%s] Error moving from PM state: %s to: %s\n",
                                           "mhi_pm_disable_transition",unaff_x24,uVar8);
                        }
                    }
                }
                iVar12 = *(*(param_1 + -0x1c8) + 0xc0);
                if ((iVar12 != 0) && (*(iVar12 + 0x18) == 0)) {
                    unaff_x24 = *(iVar12 + 0x20);
                    uVar8 = sym.to_mhi_pm_state_str(*(param_1 + -0x54));
                    uVar4 = *(param_1 + -0x48);
                    pcVar10 = "INVALID_STATE";
                    if (uVar4 < 0x100) {
                        pcVar10 = "INVALID_STATE";
                        if (0xf6 < uVar4 - 8) {
                            pcVar10 = *(reloc..str.14.llvm.39275123862783422 + uVar4 * 8);
                        }
                    }
                    pcVar9 = "mhi_pm_disable_transition";
                    goto code_r0x0800d5f0;
                }
code_r0x0800d5f4:
                mutex_unlock(pcVar16);
            }
            unaff_x25 = &ppppcStack_a8;
            kfree(pppppcVar21);
            pppppcVar21 = pppppcVar22;
        } while (pppppcVar22 != unaff_x25);
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_68) {
        return;
    }
    pcVar7 = __stack_chk_fail();
    *extraout_x18 = 0x800e614;
    uStack_108 = 0x800e614;
    iVar12 = sp_el0;
    iStack_118 = *(iVar12 + 0x5e0);
    iVar12 = unaff_x23;
    pcVar19 = unaff_x24;
    puStack_110 = &stack0xffffffffffffffa0;
    ppppcStack_100 = pppppcVar22;
    ppppcStack_f8 = unaff_x25;
    pcStack_f0 = unaff_x24;
    iStack_e8 = unaff_x23;
    ppppcStack_e0 = pppppcVar17;
    pcStack_d8 = pcVar11;
    pcStack_d0 = pcVar16;
    pcStack_c8 = arg1;
    if (*(pcVar7 + 0x17c) != 1) {
        if (0x7f < *(pcVar7 + 0x17c)) goto code_r0x0800e674;
        pcVar19 = pcVar7 + 0x18c;
        iVar12 = *(pcVar7 + 8);
        if (*pcVar19 != 0) goto code_r0x0800e828;
        if (*(pcVar7 + 400) != 0) goto code_r0x0800e828;
        pcVar16 = pcVar7 + 0x170;
        _raw_read_lock_bh(pcVar16);
        pcVar11 = *(pcVar7 + 0x228);
        unaff_x25 = sym.__typeid__ZTSFvP14mhi_controllerbE_global_addr;
        arg1 = pcVar7;
        if (2 < (pcVar11 + -0x8005ad8 >> 3 | pcVar11 << 0x3d)) goto code_r0x0800ebd0;
        goto code_r0x0800e6c4;
    }
    uVar8 = 0xffffffea;
code_r0x0800e82c:
    do {
        iVar13 = sp_el0;
        if (*(iVar13 + 0x5e0) == iStack_118) {
            return;
        }
        __stack_chk_fail(uVar8);
        pcVar7 = arg1;
code_r0x0800ebd0:
        __cfi_slowpath_diag(0xba8145ef24be26ed,pcVar11,0x8000ea0);
        arg1 = pcVar7;
code_r0x0800e6c4:
        (*pcVar11)(arg1,0);
        _raw_read_unlock_bh(pcVar16);
        pcVar11 = __msecs_to_jiffies(*(arg1 + 0x178));
        if ((*(arg1 + 0x188) & 0xfffffffe) == 2) {
            if (pcVar11 == NULL) {
                pcVar11 = 0x1;
            }
        }
        else {
            if (pcVar11 == NULL && 0x7f < *(arg1 + 0x17c)) {
                pcVar11 = 0x1;
            }
            if ((*(arg1 + 0x17c) < 0x80) && (pcVar11 != NULL)) {
                uStack_128 = 0;
                uStack_120 = 0;
                uStack_138 = 0;
                uStack_130 = 0;
                uStack_140 = 0;
                pcVar11 = __msecs_to_jiffies(*(arg1 + 0x178));
                init_wait_entry(&uStack_140,0);
                pcVar7 = arg1 + 0x208;
                prepare_to_wait_event(pcVar7,&uStack_140,2);
                uVar4 = *(arg1 + 0x188);
                while ((uVar4 & 0xfffffffe) != 2) {
                    if (pcVar11 == NULL && 0x7f < *(arg1 + 0x17c)) {
                        pcVar11 = 0x1;
                    }
                    if ((0x7f < *(arg1 + 0x17c)) || (pcVar11 == NULL)) goto code_r0x0800e7b8;
                    pcVar11 = schedule_timeout(pcVar11);
                    prepare_to_wait_event(pcVar7,&uStack_140,2);
                    uVar4 = *(arg1 + 0x188);
                }
                if (pcVar11 == NULL) {
                    pcVar11 = 0x1;
                }
code_r0x0800e7b8:
                finish_wait(pcVar7,&uStack_140);
            }
        }
        _raw_read_lock_bh(pcVar16);
        pcVar7 = *(arg1 + 0x230);
        if (2 < (pcVar7 - unaff_x25 >> 3 | pcVar7 - unaff_x25 << 0x3d)) {
            __cfi_slowpath_diag(0xba8145ef24be26ed,pcVar7,0x8000ec0);
        }
        (*pcVar7)(arg1,0);
        _raw_read_unlock_bh(pcVar16);
        if ((pcVar11 == 0) || (0x7f < *(arg1 + 0x17c))) {
            arg1 = *(*(arg1 + 8) + 0xc0);
            _dev_err(iVar12 + 0x28,"[E][%s] Could not enter M0/M1 state","mhi_pm_suspend");
            if ((arg1 == NULL) || (2 < *(arg1 + 0x18))) goto code_r0x0800e674;
            ipc_log_string(*(arg1 + 0x20),"[E][%s] Could not enter M0/M1 state","mhi_pm_suspend");
            uVar8 = 0xfffffffb;
            goto code_r0x0800e82c;
        }
        _raw_write_lock_irq(pcVar16);
        if ((*pcVar19 == 0) && (*(arg1 + 400) == 0)) {
            iVar13 = *(*(arg1 + 8) + 0xc0);
            if ((iVar13 != 0) && (*(iVar13 + 0x18) == 0)) {
                ipc_log_string(*(iVar13 + 0x20),"[D][%s] Allowing M3 transition\n","mhi_pm_suspend");
            }
            iVar5 = sym.mhi_tryset_pm_state(arg1,0x10);
            if (iVar5 == 0x10) {
                sym.mhi_write_reg_field(arg1,*(arg1 + 0x18),0x38,0xff00);
                _raw_write_unlock_irq(pcVar16);
                iVar13 = *(*(arg1 + 8) + 0xc0);
                if ((iVar13 != 0) && (*(iVar13 + 0x18) == 0)) {
                    ipc_log_string(*(iVar13 + 0x20),"[D][%s] Waiting for M3 completion\n","mhi_pm_suspend");
                }
                sym.mhi_force_reg_write(arg1);
                pcVar11 = __msecs_to_jiffies(*(arg1 + 0x178));
                if (*(arg1 + 0x188) == 5) {
                    if (pcVar11 == NULL) {
                        pcVar11 = 0x1;
                    }
                }
                else {
                    if (pcVar11 == NULL && 0x7f < *(arg1 + 0x17c)) {
                        pcVar11 = 0x1;
                    }
                    if ((*(arg1 + 0x17c) < 0x80) && (pcVar11 != NULL)) {
                        uStack_128 = 0;
                        uStack_120 = 0;
                        uStack_138 = 0;
                        uStack_130 = 0;
                        uStack_140 = 0;
                        pcVar11 = __msecs_to_jiffies(*(arg1 + 0x178));
                        init_wait_entry(&uStack_140,0);
                        pcVar16 = arg1 + 0x208;
                        prepare_to_wait_event(pcVar16,&uStack_140,2);
                        iVar5 = *(arg1 + 0x188);
                        while (iVar5 != 5) {
                            if (pcVar11 == NULL && 0x7f < *(arg1 + 0x17c)) {
                                pcVar11 = 0x1;
                            }
                            if ((0x7f < *(arg1 + 0x17c)) || (pcVar11 == NULL)) goto code_r0x0800ea20;
                            pcVar11 = schedule_timeout(pcVar11);
                            prepare_to_wait_event(pcVar16,&uStack_140,2);
                            iVar5 = *(arg1 + 0x188);
                        }
                        if (pcVar11 == NULL) {
                            pcVar11 = 0x1;
                        }
code_r0x0800ea20:
                        finish_wait(pcVar16,&uStack_140);
                    }
                }
                if (pcVar11 == 0) {
                    sym.mhi_debug_reg_dump(arg1);
                    iVar12 = panic("Timedout waiting for M3 ACK");
                    *extraout_x18_00 = 0x800ec2c;
                    sym.__mhi_pm_resume(iVar12,0);
                    return;
                }
                if (0x7f < *(arg1 + 0x17c)) {
                    uVar4 = *(arg1 + 0x188);
                    pcVar11 = *(*(arg1 + 8) + 0xc0);
                    pcVar16 = "INVALID_STATE";
                    if ((uVar4 < 0x100) && (0xf6 < uVar4 - 8)) {
                        pcVar16 = *(reloc..str.14.llvm.39275123862783422 + uVar4 * 8);
                    }
                    uVar8 = sym.to_mhi_pm_state_str(*(arg1 + 0x17c));
                    _dev_err(iVar12 + 0x28,"[E][%s] Did not enter M3 state, MHI state: %s, PM state: %s\n",
                             "mhi_pm_suspend",pcVar16,uVar8);
                    if ((pcVar11 != NULL) && (*(pcVar11 + 0x18) < 3)) {
                        uVar4 = *(arg1 + 0x188);
                        pcVar16 = *(pcVar11 + 0x20);
                        pcVar11 = "INVALID_STATE";
                        if ((uVar4 < 0x100) && (0xf6 < uVar4 - 8)) {
                            pcVar11 = *(reloc..str.14.llvm.39275123862783422 + uVar4 * 8);
                        }
                        uVar8 = sym.to_mhi_pm_state_str(*(arg1 + 0x17c));
                        pcVar10 = "[E][%s] Did not enter M3 state, MHI state: %s, PM state: %s\n";
                        goto code_r0x0800ebb4;
                    }
                    goto code_r0x0800e674;
                }
                arg1 = arg1 + 0xa0;
                pcVar7 = *arg1;
                if (arg1 == *arg1) {
                    uVar8 = 0;
                }
                else {
                    do {
                        pcVar16 = pcVar7 + -0x58;
                        pcVar11 = *pcVar7;
                        mutex_lock(pcVar16);
                        if (*(pcVar7 + -0x68) != 0) {
                            sym.mhi_notify(*(pcVar7 + -0x68),2);
                        }
                        mutex_unlock(pcVar16);
                        uVar8 = 0;
                        pcVar7 = pcVar11;
                    } while (arg1 != pcVar11);
                }
            }
            else {
                _raw_write_unlock_irq(pcVar16);
                pcVar11 = *(*(arg1 + 8) + 0xc0);
                pcVar16 = sym.to_mhi_pm_state_str(0x10);
                uVar8 = sym.to_mhi_pm_state_str(*(arg1 + 0x17c));
                _dev_err(iVar12 + 0x28,"[E][%s] Error setting to PM state: %s from: %s\n","mhi_pm_suspend",pcVar16,
                         uVar8);
                if ((pcVar11 != NULL) && (*(pcVar11 + 0x18) < 3)) {
                    pcVar16 = *(pcVar11 + 0x20);
                    pcVar11 = sym.to_mhi_pm_state_str(0x10);
                    uVar8 = sym.to_mhi_pm_state_str(*(arg1 + 0x17c));
                    pcVar10 = "[E][%s] Error setting to PM state: %s from: %s\n";
code_r0x0800ebb4:
                    ipc_log_string(pcVar16,pcVar10,"mhi_pm_suspend",pcVar11,uVar8);
                }
code_r0x0800e674:
                uVar8 = 0xfffffffb;
            }
        }
        else {
            _raw_write_unlock_irq(pcVar16);
            pcVar7 = arg1;
code_r0x0800e828:
            arg1 = pcVar7;
            uVar8 = 0xfffffff0;
        }
    } while( true );
}


// ===== sym.mhi_process_ev_work.cfi_jt @ 0x08005d08 (size 8) =====

void sym.mhi_process_ev_work.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    ulong uVar2;
    char *pcVar3;
    char *pcVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong uVar7;
    code *pcVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(param_1 + -0xd0);
    iVar5 = *(*(iVar6 + 8) + 0xc0);
    if ((iVar5 != 0) && (*(iVar5 + 0x18) == 0)) {
        uVar7 = *(iVar5 + 0x20);
        uVar2 = sym.to_mhi_pm_state_str(*(iVar6 + 0x17c));
        uVar1 = *(iVar6 + 0x188);
        pcVar3 = "INVALID_STATE";
        if ((uVar1 < 0x100) && (0xf6 < uVar1 - 8)) {
            pcVar3 = *(reloc..str.14.llvm.39275123862783422 + uVar1 * 8);
        }
        if (*(iVar6 + 0x184) < 10) {
            pcVar4 = *(reloc..str.llvm.39275123862783422 + *(iVar6 + 0x184) * 8);
        }
        else {
            pcVar4 = "INVALID_EE";
        }
        ipc_log_string(uVar7,"[D][%s] Enter with pm_state:%s MHI_STATE:%s ee:%s\n","mhi_process_ev_work",uVar2,
                       pcVar3,pcVar4);
    }
    if ((*(iVar6 + 0x17c) != 1) && (*(iVar6 + 0x17c) < 0x80)) {
        pcVar8 = *(param_1 + 0x38);
        if (3 < (pcVar8 + -0x8005bc0 >> 3 | pcVar8 << 0x3d)) {
            __cfi_slowpath_diag(0xd8f0b986adce1242,pcVar8,0x8000c20);
        }
        (*pcVar8)(iVar6,param_1 + -0xd0,0xffffffff);
    }
    return;
}


// ===== sym.mhi_reg_write_work.cfi_jt @ 0x08005d10 (size 8) =====

void sym.mhi_reg_write_work.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    uint32_t uVar2;
    char cVar3;
    int iVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t *piVar6;
    char *pcVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = *(param_1 + 0x30) + *(param_1 + 0x3c) * 0x10;
    pcVar7 = piVar1 + 0xc;
    if ((*pcVar7 != '\0') && (piVar6 = *(param_1 + -0x68), piVar6[0x31] - 2U < 5)) {
        iVar5 = *piVar6;
        iVar4 = msm_pcie_prevent_l1(iVar5 + -0xd0);
        if (iVar4 == 0) {
            cVar3 = *pcVar7;
            while ((cVar3 != '\0' && (piVar6[0x31] - 2U < 5))) {
                sym.writel_relaxed(*(piVar1 + 1),*piVar1);
                *pcVar7 = '\0';
                uVar2 = *(param_1 + 0x3c) + 1U & 0x1ff;
                piVar1 = *(param_1 + 0x30) + uVar2 * 0x10;
                *(param_1 + 0x3c) = uVar2;
                pcVar7 = piVar1 + 0xc;
                cVar3 = *pcVar7;
            }
            msm_pcie_allow_l1(iVar5 + -0xd0);
        }
    }
    return;
}


// ===== sym.to_mhi_pm_state_str @ 0x08005d18 (size 64) =====

char * sym.to_mhi_pm_state_str(int64_t arg1)

{
    uint64_t uVar1;
    
    if ((arg1 != 0) && (uVar1 = LZCOUNT(arg1 & 0xffffffff) ^ 0x3f, uVar1 < 0xc)) {
        return *(obj.mhi_pm_state_str + uVar1 * 8);
    }
    return "Invalid State";
}


// ===== sym.mhi_deinit_free_irq @ 0x08005d58 (size 140) =====

void sym.mhi_deinit_free_irq(int64_t arg1)

{
    uint32_t uVar1;
    ulong *in_x18;
    int64_t iVar2;
    uint32_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + 0xbc);
    if (uVar1 != 0) {
        uVar3 = 0;
        iVar2 = *(arg1 + 0x128);
        do {
            if (*(iVar2 + 0x112) == '\0') {
                free_irq(*(*(arg1 + 0xb0) + *(iVar2 + 0x18) * 4),iVar2);
                uVar1 = *(arg1 + 0xbc);
            }
            uVar3 = uVar3 + 1;
            iVar2 = iVar2 + 0x118;
        } while (uVar3 < uVar1);
    }
    free_irq(**(arg1 + 0xb0),arg1);
    return;
}


// ===== sym.mhi_init_irq_setup @ 0x08005de4 (size 648) =====

int sym.mhi_init_irq_setup(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    ulong *in_x18;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = 0x4080;
    if (*(arg1 + 0x290) != 0) {
        iVar6 = *(arg1 + 0x290);
    }
    iVar5 = *(arg1 + 0x128);
    iVar7 = *(arg1 + 8);
    iVar2 = request_threaded_irq
                      (**(arg1 + 0xb0),sym.mhi_intvec_handler.cfi_jt,sym.mhi_intvec_threaded_handler.cfi_jt,iVar6,
                       0x8003244,arg1);
    if (iVar2 == 0) {
        uVar4 = *(arg1 + 0xbc);
        if (uVar4 != 0) {
            iVar2 = -1;
            do {
                if (*(iVar5 + 0x112) == '\0') {
                    if (*(arg1 + 200) <= *(iVar5 + 0x18)) {
                        iVar6 = *(*(arg1 + 8) + 0xc0);
                        _dev_err(iVar7 + 0x28,"[E][%s] irq %d not available for event ring\n","mhi_init_irq_setup");
                        if ((iVar6 != 0) && (*(iVar6 + 0x18) < 3)) {
                            ipc_log_string(*(iVar6 + 0x20),"[E][%s] irq %d not available for event ring\n",
                                           "mhi_init_irq_setup",*(iVar5 + 0x18));
                        }
                        iVar3 = -0x16;
joined_r0x08006020:
                        for (; -1 < iVar2; iVar2 = iVar2 + -1) {
                            if (*(iVar5 + -6) == '\0') {
                                free_irq(*(*(arg1 + 0xb0) + *(iVar5 + -0x100) * 4),iVar5 + -0x118);
                            }
                            iVar5 = iVar5 + -0x118;
                        }
                        free_irq(**(arg1 + 0xb0),arg1);
                        return iVar3;
                    }
                    iVar3 = request_threaded_irq
                                      (*(*(arg1 + 0xb0) + *(iVar5 + 0x18) * 4),sym.mhi_irq_handler.cfi_jt,0,iVar6,
                                       0x8002ec4,iVar5);
                    if (iVar3 != 0) {
                        iVar6 = *(*(arg1 + 8) + 0xc0);
                        _dev_err(iVar7 + 0x28,"[E][%s] Error requesting irq:%d for ev:%d\n","mhi_init_irq_setup",
                                 *(*(arg1 + 0xb0) + *(iVar5 + 0x18) * 4),iVar2 + 1);
                        if ((iVar6 != 0) && (*(iVar6 + 0x18) < 3)) {
                            ipc_log_string(*(iVar6 + 0x20),"[E][%s] Error requesting irq:%d for ev:%d\n",
                                           "mhi_init_irq_setup",*(*(arg1 + 0xb0) + *(iVar5 + 0x18) * 4),iVar2 + 1);
                        }
                        goto joined_r0x08006020;
                    }
                    uVar4 = *(arg1 + 0xbc);
                }
                uVar1 = iVar2 + 2;
                iVar5 = iVar5 + 0x118;
                iVar2 = iVar2 + 1;
            } while (uVar1 < uVar4);
        }
        iVar2 = 0;
    }
    else {
        iVar6 = *(*(arg1 + 8) + 0xc0);
        _dev_err(iVar7 + 0x28,"[E][%s] error requesting to irq:%d, ret=%d\n","mhi_init_irq_setup",**(arg1 + 0xb0),
                 iVar2);
        if ((iVar6 != 0) && (*(iVar6 + 0x18) < 3)) {
            ipc_log_string(*(iVar6 + 0x20),"[E][%s] error requesting to irq:%d, ret=%d\n","mhi_init_irq_setup",
                           **(arg1 + 0xb0),iVar2);
        }
    }
    return iVar2;
}


// ===== sym.mhi_deinit_dev_ctxt @ 0x0800606c (size 276) =====

void sym.mhi_deinit_dev_ctxt(int64_t arg1)

{
    ulong *puVar1;
    ulong *puVar2;
    uint64_t uVar3;
    ulong *in_x18;
    uint32_t uVar4;
    char *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = *(arg1 + 0x130);
    puVar2 = *(arg1 + 0x138);
    dma_free_attrs(*arg1,puVar1[10],puVar1[3],*puVar1,0);
    puVar1[4] = 0;
    puVar1[1] = 0;
    dma_free_attrs(*arg1,0x2c,puVar2[2],puVar2[5],0);
    uVar3 = *(arg1 + 0xbc);
    if (*(arg1 + 0xbc) != 0) {
        uVar4 = 0;
        pcVar5 = *(arg1 + 0x128) + 0x112;
        do {
            if (*pcVar5 == '\0') {
                dma_free_attrs(*arg1,*(pcVar5 + -0x9a),*(pcVar5 + -0xd2),*(pcVar5 + -0xea),0);
                pcVar5[-0xca] = '\0';
                pcVar5[-0xc9] = '\0';
                pcVar5[-200] = '\0';
                pcVar5[-199] = '\0';
                pcVar5[-0xc6] = '\0';
                pcVar5[-0xc5] = '\0';
                pcVar5[-0xc4] = '\0';
                pcVar5[-0xc3] = '\0';
                pcVar5[-0xe2] = '\0';
                pcVar5[-0xe1] = '\0';
                pcVar5[-0xe0] = '\0';
                pcVar5[-0xdf] = '\0';
                pcVar5[-0xde] = '\0';
                pcVar5[-0xdd] = '\0';
                pcVar5[-0xdc] = '\0';
                pcVar5[-0xdb] = '\0';
                uVar3 = *(arg1 + 0xbc);
            }
            uVar4 = uVar4 + 1;
            pcVar5 = pcVar5 + 0x118;
        } while (uVar4 < uVar3);
    }
    dma_free_attrs(*arg1,uVar3 * 0x2c,*puVar2,puVar2[3],0);
    dma_free_attrs(*arg1,*(arg1 + 0xb8) * 0x2c,puVar2[1],puVar2[4],0);
    kfree(puVar2);
    *(arg1 + 0x138) = 0;
    return;
}


// ===== sym.mhi_init_dev_ctxt @ 0x08006180 (size 888) =====

ulong sym.mhi_init_dev_ctxt(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint *puVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    ulong *in_x18;
    int iVar8;
    uint64_t *puVar9;
    int64_t iVar10;
    int64_t *piVar11;
    ulong *puVar12;
    int64_t iVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x18c) = 0;
    *(arg1 + 400) = 0;
    iVar2 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar2 = 0x30;
    }
    piVar1 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xdc0,0x30);
    if (piVar1 != NULL) {
        iVar2 = dma_alloc_attrs(*arg1,*(arg1 + 0xb8) * 0x2c,piVar1 + 4,0xcc0,0);
        piVar1[1] = iVar2;
        if (iVar2 != 0) {
            uVar7 = *(arg1 + 0xb8);
            if (uVar7 != 0) {
                uVar3 = 0;
                iVar2 = iVar2 + 0x24;
                puVar5 = *(arg1 + 0x98) + 0xcc;
                do {
                    if (*(puVar5 + 0xbe) == '\0') {
                        *(iVar2 + -0x24) = (puVar5[7] & 0xffff03) << 8 | *(iVar2 + -0x22) << 0x10 | puVar5[6] << 10;
                        *(iVar2 + -0x20) = puVar5[2];
                        *(iVar2 + -0x1c) = *puVar5;
                        puVar5[0xe] = 0;
                        *(puVar5 + -3) = iVar2;
                        uVar7 = *(arg1 + 0xb8);
                    }
                    uVar3 = uVar3 + 1;
                    puVar5 = puVar5 + 0x66;
                    iVar2 = iVar2 + 0x2c;
                } while (uVar3 < uVar7);
            }
            iVar2 = dma_alloc_attrs(*arg1,*(arg1 + 0xbc) * 0x2c,piVar1 + 3,0xcc0,0);
            *piVar1 = iVar2;
            if (iVar2 != 0) {
                uVar3 = *(arg1 + 0xbc);
                uVar7 = 0;
                iVar10 = *(arg1 + 0x128);
                if (uVar3 != 0) {
                    puVar9 = iVar2 + 0x24;
                    do {
                        if (*(iVar10 + 0x112) == '\0') {
                            *(puVar9 + -0x24) = *(puVar9 + -0x24) | *(iVar10 + 0x14) << 0x10;
                            *(puVar9 + -4) = 1;
                            *(puVar9 + -0x1c) = *(iVar10 + 0x18);
                            iVar4 = *(iVar10 + 0x70);
                            *(iVar10 + 0x89) = 1;
                            iVar13 = iVar4 * 0x10;
                            iVar2 = iVar13 + -1 + iVar13;
                            *(iVar10 + 0x60) = 0x10;
                            *(iVar10 + 0x68) = iVar13;
                            *(iVar10 + 0x78) = iVar2;
                            iVar2 = dma_alloc_attrs(*arg1,iVar2,iVar10 + 0x28,0xcc0,0);
                            *(iVar10 + 0x40) = iVar2;
                            if (iVar2 == 0) goto code_r0x08006448;
                            uVar6 = *(iVar10 + 0x28) + iVar13 + -1 & iVar4 * -0x10;
                            iVar2 = iVar2 + (uVar6 - *(iVar10 + 0x28));
                            *(iVar10 + 0x30) = uVar6;
                            *(iVar10 + 0x50) = iVar2;
                            *(iVar10 + 0x58) = iVar2;
                            *(iVar10 + 0x48) = iVar2;
                            puVar9[-3] = uVar6;
                            puVar9[-1] = uVar6;
                            *puVar9 = uVar6;
                            puVar9[-2] = *(iVar10 + 0x68);
                            *(iVar10 + 0x38) = puVar9;
                            uVar3 = *(arg1 + 0xbc);
                        }
                        uVar7 = uVar7 + 1;
                        iVar10 = iVar10 + 0x118;
                        puVar9 = puVar9 + 0x2c;
                    } while (uVar7 < uVar3);
                }
                iVar2 = dma_alloc_attrs(*arg1,0x2c,piVar1 + 5,0xcc0,0);
                piVar1[2] = iVar2;
                if (iVar2 != 0) {
                    piVar11 = *(arg1 + 0x130);
                    piVar11[7] = 0x10;
                    piVar11[8] = 0x800;
                    piVar11[9] = 0x80;
                    piVar11[10] = 0xfff;
                    iVar10 = dma_alloc_attrs(*arg1,0xfff,piVar11,0xcc0,0);
                    piVar11[3] = iVar10;
                    if (iVar10 != 0) {
                        uVar6 = *piVar11 + 0x7ffU & 0xfffffffffffff800;
                        iVar10 = iVar10 + (uVar6 - *piVar11);
                        piVar11[1] = uVar6;
                        piVar11[5] = iVar10;
                        piVar11[6] = iVar10;
                        piVar11[4] = iVar10;
                        *(iVar2 + 0x24) = uVar6;
                        *(iVar2 + 0xc) = uVar6;
                        *(iVar2 + 0x1c) = uVar6;
                        *(iVar2 + 0x14) = piVar11[8];
                        piVar11[2] = iVar2 + 0x24;
                        *(arg1 + 0x138) = piVar1;
                        return 0;
                    }
                    dma_free_attrs(*arg1,0x2c,piVar1[2],piVar1[5],0);
                    uVar7 = *(arg1 + 0xbc);
                    iVar10 = *(arg1 + 0x128) + uVar7 * 0x118;
                }
code_r0x08006448:
                iVar8 = uVar7 - 1;
                if (-1 < iVar8) {
                    puVar12 = iVar10 + -0xf0;
                    do {
                        if (*(puVar12 + 0xea) == '\0') {
                            dma_free_attrs(*arg1,puVar12[10],puVar12[3],*puVar12,0);
                        }
                        iVar8 = iVar8 + -1;
                        puVar12 = puVar12 + -0x23;
                    } while (-1 < iVar8);
                }
                dma_free_attrs(*arg1,*(arg1 + 0xbc) * 0x2c,*piVar1,piVar1[3],0);
            }
            dma_free_attrs(*arg1,*(arg1 + 0xb8) * 0x2c,piVar1[1],piVar1[4],0);
        }
        kfree(piVar1);
    }
    return 0xfffffff4;
}


// ===== sym.mhi_init_mmio @ 0x080064f8 (size 948) =====

void sym.mhi_init_mmio(int64_t arg1)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    char *pcVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    int64_t *piVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar11;
    int64_t iVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    uint32_t uStack_15c;
    uint32_t auStack_158 [68];
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    iVar11 = *(arg1 + 0x18);
    uStack_15c = 0;
    iVar12 = *(arg1 + 8);
    memset(auStack_158 + 3,0,0x104);
    iVar5 = *(arg1 + 0x138);
    auStack_158[10] = 0;
    auStack_158[8] = 100;
    auStack_158[9] = 0xffffffff;
    auStack_158[0] = 0x5c;
    auStack_158[1] = 0xffffffff;
    auStack_158[7] = *(iVar5 + 0x20);
    auStack_158[0xb] = *(iVar5 + 0x1c);
    auStack_158[0xe] = 0;
    auStack_158[0xc] = 0x60;
    auStack_158[0xd] = 0xffffffff;
    auStack_158[4] = 0x58;
    auStack_158[5] = 0xffffffff;
    auStack_158[0x12] = 0;
    auStack_158[0x10] = 0x6c;
    auStack_158[0x11] = 0xffffffff;
    auStack_158[0xf] = *(iVar5 + 0x18);
    auStack_158[3] = *(iVar5 + 0x20) >> 0x20;
    auStack_158[2] = 0;
    auStack_158[0x13] = *(iVar5 + 0x2c);
    auStack_158[0x14] = 0x68;
    auStack_158[0x15] = 0xffffffff;
    auStack_158[0x16] = 0;
    auStack_158[0x18] = 0x10;
    auStack_158[0x19] = 0xff0000;
    auStack_158[0x1b] = *(arg1 + 0xbc);
    auStack_158[0x1f] = *(arg1 + 0xc0);
    auStack_158[0x3e] = 0;
    auStack_158[0x17] = *(iVar5 + 0x28);
    auStack_158[0x40] = 0;
    auStack_158[0x41] = 0;
    auStack_158[0x42] = 0;
    auStack_158[0x43] = 0;
    auStack_158[0x1a] = 0x10;
    auStack_158[0x1e] = 0x18;
    auStack_158[0x28] = 0x9c;
    auStack_158[0x29] = 0xffffffff;
    auStack_158[0x33] = *(arg1 + 0x44);
    auStack_158[0x20] = 0x84;
    auStack_158[0x21] = 0xffffffff;
    auStack_158[0x32] = 0;
    auStack_158[0x3a] = 0;
    auStack_158[0x24] = 0x80;
    auStack_158[0x25] = 0xffffffff;
    auStack_158[0x30] = 0x8c;
    auStack_158[0x31] = 0xffffffff;
    auStack_158[0x3c] = 0xa0;
    auStack_158[0x3d] = 0xffffffff;
    auStack_158[0x37] = *(arg1 + 0x40);
    auStack_158[0x1c] = 0x10;
    auStack_158[0x1d] = 0xff000000;
    auStack_158[0x34] = 0x88;
    auStack_158[0x35] = 0xffffffff;
    auStack_158[0x38] = 0xa4;
    auStack_158[0x39] = 0xffffffff;
    auStack_158[0x27] = *(arg1 + 0x38);
    auStack_158[0x23] = *(arg1 + 0x3c);
    auStack_158[0x36] = 0;
    iVar5 = *(iVar12 + 0xc0);
    auStack_158[0x2c] = 0x98;
    auStack_158[0x2d] = 0xffffffff;
    auStack_158[0x22] = 0;
    auStack_158[0x26] = 0;
    auStack_158[0x2a] = 0;
    auStack_158[0x2e] = 0;
    auStack_158[0x2b] = auStack_158[0x23];
    auStack_158[0x2f] = auStack_158[0x27];
    auStack_158[0x3b] = auStack_158[0x33];
    auStack_158[0x3f] = auStack_158[0x37];
    if ((iVar5 != 0) && (*(iVar5 + 0x18) == 0)) {
        ipc_log_string(*(iVar5 + 0x20),"[D][%s] Initializing MHI registers\n","mhi_init_mmio");
    }
    iVar2 = sym.mhi_read_reg_field(arg1,iVar11,0x18,0xffffffff);
    if (iVar2 == 0) {
        uVar6 = 0;
        *(arg1 + 0x28f) = 0;
        *(arg1 + 0x30) = iVar11 + 0x3f8;
        if (*(arg1 + 0xb8) != 0) {
            uVar8 = 0;
            piVar10 = *(arg1 + 0x98) + 0xc0;
            do {
                iVar5 = iVar11 + uVar6;
                uVar8 = uVar8 + 1;
                uStack_15c = uVar6 + 8;
                uVar6 = uStack_15c;
                *piVar10 = iVar5;
                piVar10 = piVar10 + 0x33;
            } while (uVar8 < *(arg1 + 0xb8));
        }
        iVar2 = sym.mhi_read_reg_field(arg1,iVar11,0x20,0xffffffff);
        if (iVar2 == 0) {
            uVar8 = *(arg1 + 0xbc);
            if (uVar8 != 0) {
                uVar9 = 0;
                pcVar4 = *(arg1 + 0x128) + 0x112;
                do {
                    if (*pcVar4 == '\0') {
                        *(pcVar4 + -0x92) = iVar11 + uStack_15c;
                        uVar8 = *(arg1 + 0xbc);
                    }
                    uVar9 = uVar9 + 1;
                    uStack_15c = uStack_15c + 8;
                    pcVar4 = pcVar4 + 0x118;
                } while (uVar9 < uVar8);
            }
            iVar5 = 0;
            *(*(arg1 + 0x130) + 0x58) = iVar11 + 0x70;
            while (*(auStack_158 + iVar5) != 0) {
                sym.mhi_write_reg_field(arg1,iVar11,*(auStack_158 + iVar5),*(auStack_158 + iVar5 + 4));
                iVar5 = iVar5 + 0x10;
                if (iVar5 == 0x110) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x5512,0x80067d8);
                    (*pcVar1)();
                }
            }
            sym.mhi_misc_init_mmio(arg1);
            uVar3 = 0;
            goto code_r0x080067e4;
        }
        iVar5 = *(*(arg1 + 8) + 0xc0);
        _dev_err(iVar12 + 0x28,"[E][%s] Unable to read ERDBOFF register\n","mhi_init_mmio");
        if ((iVar5 != 0) && (*(iVar5 + 0x18) < 3)) {
            uVar3 = *(iVar5 + 0x20);
            pcVar4 = "[E][%s] Unable to read ERDBOFF register\n";
            goto code_r0x08006894;
        }
    }
    else {
        iVar5 = *(*(arg1 + 8) + 0xc0);
        _dev_err(iVar12 + 0x28,"[E][%s] Unable to read CHDBOFF register\n","mhi_init_mmio");
        if ((iVar5 != 0) && (*(iVar5 + 0x18) < 3)) {
            uVar3 = *(iVar5 + 0x20);
            pcVar4 = "[E][%s] Unable to read CHDBOFF register\n";
code_r0x08006894:
            ipc_log_string(uVar3,pcVar4,"mhi_init_mmio");
        }
    }
    uVar3 = 0xfffffffb;
code_r0x080067e4:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_48) {
        auVar13 = __stack_chk_fail(uVar3);
        iVar5 = auVar13._8_8_;
        *extraout_x18 = sym.mhi_deinit_chan_ctxt;
        uVar8 = *(iVar5 + 200);
        iVar11 = *(auVar13._0_8_[0x27] + 8);
        iVar12 = iVar11 + uVar8 * 0x2c;
        if (*(iVar12 + 0xc) != 0) {
            dma_free_attrs(*auVar13._0_8_,*(iVar5 + 0xb8),*(iVar5 + 0x80),*(iVar5 + 0x68),0);
            vfree(*(iVar5 + 0x28));
            *(iVar5 + 0x88) = 0;
            *(iVar5 + 0x28) = 0;
            iVar7 = uVar8 * 0x2c;
            *(iVar5 + 0x78) = 0;
            *(iVar12 + 0x1c) = 0;
            *(iVar12 + 0x24) = 0;
            *(iVar12 + 0xc) = 0;
            *(iVar12 + 0x14) = 0;
            *(iVar11 + iVar7) = *(iVar11 + iVar7) & 0xffffff00;
            DataMemoryBarrier(2,2);
        }
        return;
    }
    return;
}


// ===== sym.mhi_deinit_chan_ctxt @ 0x080068ac (size 156) =====

void sym.mhi_deinit_chan_ctxt(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg2 + 200);
    iVar3 = *(*(arg1 + 0x138) + 8);
    iVar4 = iVar3 + uVar1 * 0x2c;
    if (*(iVar4 + 0xc) != 0) {
        dma_free_attrs(*arg1,*(arg2 + 0xb8),*(arg2 + 0x80),*(arg2 + 0x68),0);
        vfree(*(arg2 + 0x28));
        *(arg2 + 0x88) = 0;
        *(arg2 + 0x28) = 0;
        iVar2 = uVar1 * 0x2c;
        *(arg2 + 0x78) = 0;
        *(iVar4 + 0x1c) = 0;
        *(iVar4 + 0x24) = 0;
        *(iVar4 + 0xc) = 0;
        *(iVar4 + 0x14) = 0;
        *(iVar3 + iVar2) = *(iVar3 + iVar2) & 0xffffff00;
        DataMemoryBarrier(2,2);
    }
    return;
}


// ===== sym.mhi_init_chan_ctxt @ 0x08006948 (size 296) =====

ulong sym.mhi_init_chan_ctxt(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uchar *puVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong uVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg2 + 0xb0);
    iVar8 = iVar4 * 0x10;
    uVar1 = *(arg2 + 200);
    *(arg2 + 0xa0) = 0x10;
    *(arg2 + 0xa8) = iVar8;
    iVar2 = iVar8 + -1 + iVar8;
    iVar7 = *(*(arg1 + 0x138) + 8);
    *(arg2 + 0xb8) = iVar2;
    iVar2 = dma_alloc_attrs(*arg1,iVar2,arg2 + 0x68,0xcc0,0);
    *(arg2 + 0x80) = iVar2;
    if (iVar2 != 0) {
        uVar5 = *(arg2 + 0x68) + iVar8 + -1 & iVar4 * -0x10;
        *(arg2 + 0x70) = uVar5;
        *(arg2 + 0x88) = iVar2 + (uVar5 - *(arg2 + 0x68));
        *(arg2 + 0x40) = 0x38;
        *(arg2 + 0x48) = *(arg2 + 0x50) * 0x38;
        iVar2 = vzalloc();
        *(arg2 + 0x28) = iVar2;
        if (iVar2 != 0) {
            puVar3 = iVar7 + uVar1 * 0x2c;
            *puVar3 = 1;
            uVar6 = *(arg2 + 0x70);
            *(puVar3 + 0x24) = uVar6;
            *(puVar3 + 0xc) = uVar6;
            *(puVar3 + 0x1c) = uVar6;
            *(puVar3 + 0x14) = *(arg2 + 0xa8);
            *(arg2 + 0x78) = puVar3 + 0x24;
            *(arg2 + 0xe1) = 1;
            *(arg2 + 0x90) = *(arg2 + 0x88);
            *(arg2 + 0x98) = *(arg2 + 0x88);
            *(arg2 + 0x30) = *(arg2 + 0x28);
            *(arg2 + 0x38) = *(arg2 + 0x28);
            DataMemoryBarrier(2,2);
            return 0;
        }
        dma_free_attrs(*arg1,*(arg2 + 0xb8),*(arg2 + 0x80),*(arg2 + 0x68),0);
    }
    return 0xfffffff4;
}


// ===== sym.mhi_register_controller @ 0x08006a70 (size 1116) =====

uint64_t sym.mhi_register_controller(int64_t arg1)

{
    ulong *puVar1;
    int64_t *piVar2;
    uint32_t *puVar3;
    code *pcVar4;
    code *pcVar5;
    int iVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    char cVar9;
    char cVar10;
    char cVar11;
    bool bVar12;
    int iVar13;
    uint32_t uVar14;
    int64_t iVar16;
    uint64_t uVar17;
    int64_t in_x1;
    char *pcVar19;
    uint32_t uVar20;
    uint uVar21;
    ulong *puVar22;
    ulong *puVar23;
    ulong uVar24;
    int64_t iVar25;
    uint32_t *puVar26;
    int64_t iVar27;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar28;
    ulong uVar29;
    int64_t iVar30;
    int64_t iVar31;
    ulong unaff_x30;
    uchar auVar32 [16];
    uint32_t uStack_5c;
    int64_t iStack_58;
    ulong *puVar15;
    uint32_t *puVar18;
    
    *in_x18 = unaff_x30;
    iVar16 = sp_el0;
    iStack_58 = *(iVar16 + 0x5e0);
    uStack_5c = 0;
    if ((((((arg1 == 0) || (*arg1 == 0)) || (*(arg1 + 0x18) == 0)) || ((*(arg1 + 0x240) == 0 || (*(arg1 + 0x248) == 0)))
         ) || ((*(arg1 + 0x220) == 0 || ((*(arg1 + 0x268) == 0 || (*(arg1 + 0x270) == 0)))))) ||
       ((*(arg1 + 200) == 0 || ((*(arg1 + 0xb0) == 0 || (*(arg1 + 0x78) == 0)))))) {
code_r0x08006b0c:
        uVar28 = 0xffffffea;
    }
    else {
        *(arg1 + 0x20) = 0;
        *(arg1 + 0x28) = 0;
        iVar13 = sym.parse_config(arg1,in_x1);
        if (iVar13 != 0) goto code_r0x08006b0c;
        iVar16 = kmem_cache_alloc_trace(_free_irq,0xdc0,0x68);
        *(arg1 + 0x130) = iVar16;
        if (iVar16 == 0) {
            uVar28 = 0xfffffff4;
code_r0x08006e6c:
            kfree(*(arg1 + 0x128));
            vfree(*(arg1 + 0x98));
        }
        else {
            *(arg1 + 0x1a8) = arg1 + 0x1a8;
            *(arg1 + 0x1b0) = arg1 + 0x1a8;
            __mutex_init(arg1 + 0x140,"&mhi_cntrl->pm_mutex",obj.mhi_register_controller.__key);
            *(arg1 + 0x1d0) = 0xfffffffe0;
            *(arg1 + 0x170) = 0;
            *(arg1 + 0x1b8) = 0;
            *(arg1 + 0x1d8) = arg1 + 0x1d8;
            *(arg1 + 0x1e0) = arg1 + 0x1d8;
            *(arg1 + 0x1e8) = sym.mhi_pm_st_worker.cfi_jt;
            __init_waitqueue_head(arg1 + 0x208,"&mhi_cntrl->state_event",obj.mhi_register_controller.__key);
            iVar16 = alloc_workqueue("mhi_hiprio_wq",0xa0012,1);
            *(arg1 + 0x200) = iVar16;
            if (iVar16 == 0) {
                _dev_err(*arg1,"Failed to allocate workqueue\n");
                uVar28 = 0xfffffff4;
code_r0x08006e64:
                kfree(*(arg1 + 0x130));
                goto code_r0x08006e6c;
            }
            *(*(arg1 + 0x130) + 0x60) = 0;
            if (*(arg1 + 0xbc) != 0) {
                iVar16 = 0;
                uVar14 = 0;
                iVar30 = *(arg1 + 0x128);
                do {
                    piVar2 = iVar30 + iVar16;
                    if (*(piVar2 + 0x112) == '\0') {
                        *piVar2 = arg1;
                        *(piVar2 + 0x20) = 0;
                        if (piVar2[4] == 2) {
                            iVar31 = iVar30 + iVar16;
                            *(iVar31 + 0xd0) = 0xfffffffe0;
                            *(iVar31 + 0xd8) = iVar31 + 0xd8;
                            *(iVar31 + 0xe0) = iVar31 + 0xd8;
                            *(iVar31 + 0xe8) = sym.mhi_process_ev_work.cfi_jt;
                        }
                        else {
                            pcVar4 = sym.mhi_ctrl_ev_task.cfi_jt;
                            if (*(iVar30 + iVar16 + 0x24) != 1) {
                                pcVar4 = sym.mhi_ev_task.cfi_jt;
                            }
                            tasklet_init(iVar30 + iVar16 + 0xa8,pcVar4);
                        }
                    }
                    uVar14 = uVar14 + 1;
                    iVar16 = iVar16 + 0x118;
                } while (uVar14 < *(arg1 + 0xbc));
            }
            if (*(arg1 + 0xb8) != 0) {
                uVar14 = 0;
                iVar16 = *(arg1 + 0x98) + 0x174;
                do {
                    __mutex_init(iVar16 + -0x54,"&mhi_chan->mutex",obj.mhi_register_controller.__key);
                    *(iVar16 + -0x24) = 0;
                    __init_swait_queue_head(iVar16 + -0x1c,"&x->wait",obj.mhi_register_controller.__key);
                    *(iVar16 + -4) = 0;
                    uVar14 = uVar14 + 1;
                    *(iVar16 + -0xa4) = *(*(arg1 + 0x128) + *(iVar16 + -0xa8) * 0x118 + 0x14);
                    iVar16 = iVar16 + 0x198;
                } while (uVar14 < *(arg1 + 0xb8));
            }
            bVar12 = *(arg1 + 0x28d) != '\0';
            pcVar4 = sym.__typeid__ZTSFiP14mhi_controllerP12mhi_buf_infoE_global_addr;
            if (bVar12) {
                pcVar4 = sym.mhi_map_single_use_bb.cfi_jt;
            }
            pcVar5 = sym.mhi_unmap_single_no_bb.cfi_jt;
            if (bVar12) {
                pcVar5 = sym.__typeid__ZTSFvP14mhi_controllerP12mhi_buf_infoE_global_addr;
            }
            *(arg1 + 600) = pcVar4;
            *(arg1 + 0x260) = pcVar5;
            uVar17 = sym.mhi_read_reg(arg1,*(arg1 + 0x18),0x224,&uStack_5c);
            uVar28 = uVar17 & 0xffffffff;
            if (uVar17 != 0) {
code_r0x08006e5c:
                destroy_workqueue(*(arg1 + 0x200));
                goto code_r0x08006e64;
            }
            *(arg1 + 0xcc) = uStack_5c >> 0x1c;
            *(arg1 + 0xd0) = uStack_5c >> 0x10 & 0xfff;
            *(arg1 + 0xd4) = uStack_5c >> 8 & 0xff;
            *(arg1 + 0xd8) = uStack_5c & 0xff;
            uVar14 = ida_alloc_range(obj.mhi_controller_ida,0,0xffffffff,0xcc0);
            *(arg1 + 0x288) = uVar14;
            if (uVar14 < 0) {
                uVar28 = uVar14;
                goto code_r0x08006e5c;
            }
            uVar28 = sym.mhi_alloc_device(arg1);
            if (0xfffffffffffff000 < uVar28) {
                _dev_err(*arg1,"Failed to allocate MHI device\n");
code_r0x08006e3c:
                ida_free(obj.mhi_controller_ida,*(arg1 + 0x288));
                goto code_r0x08006e5c;
            }
            *(uVar28 + 0x10) = arg1;
            piVar2 = uVar28 + 0x28;
            *(uVar28 + 0x3b8) = 1;
            dev_set_name(piVar2,"mhi%d",*(arg1 + 0x288));
            iVar16 = *(uVar28 + 0x98);
            if (iVar16 == 0) {
                iVar16 = *piVar2;
            }
            *(uVar28 + 8) = iVar16;
            device_init_wakeup(piVar2,1);
            *(arg1 + 8) = uVar28;
            uVar14 = sym.mhi_misc_register_controller(arg1);
            if (uVar14 != 0) {
                uVar28 = uVar14;
                _dev_err(*arg1,"Could not enable miscellaneous features\n");
                *(arg1 + 8) = 0;
                goto code_r0x08006e3c;
            }
            uVar17 = device_add(piVar2);
            uVar28 = uVar17 & 0xffffffff;
            if (uVar17 != 0) {
code_r0x08006e34:
                sym.mhi_misc_unregister_controller(arg1);
                goto code_r0x08006e3c;
            }
            uVar17 = sym.mhi_misc_sysfs_create(arg1);
            uVar28 = uVar17 & 0xffffffff;
            if (uVar17 != 0) {
                put_device(piVar2);
                goto code_r0x08006e34;
            }
        }
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_58) {
        return uVar28 & 0xffffffff;
    }
    auVar32 = __stack_chk_fail();
    puVar18 = auVar32._8_8_;
    puVar15 = auVar32._0_8_;
    *extraout_x18 = sym.parse_config;
    uVar14 = *puVar18;
    uVar29 = *puVar15;
    *(puVar15 + 0x17) = uVar14;
    iVar16 = vzalloc(uVar14 * 0x198);
    puVar15[0x13] = iVar16;
    if (iVar16 == 0) {
        uVar14 = 0xfffffff4;
    }
    else {
        puVar1 = puVar15 + 0x14;
        puVar15[0x14] = puVar1;
        puVar15[0x15] = puVar1;
        if (puVar18[3] != 0) {
            uVar14 = 0;
            do {
                iVar16 = *(puVar18 + 4);
                uVar20 = *(iVar16 + uVar14 * 0x38 + 8);
                uVar28 = uVar20;
                if (*(puVar15 + 0x17) <= uVar20) {
                    iVar16 = *(puVar15[1] + 0xc0);
                    _dev_err(uVar29,"[E][%s] Channel %d not available\n","parse_ch_cfg",uVar20);
                    if ((iVar16 != 0) && (*(iVar16 + 0x18) < 3)) {
                        ipc_log_string(*(iVar16 + 0x20),"[E][%s] Channel %d not available\n","parse_ch_cfg",uVar20);
                    }
code_r0x0800738c:
                    vfree(puVar15[0x13]);
                    uVar14 = 0xffffffea;
                    goto code_r0x080073f8;
                }
                iVar30 = uVar14;
                iVar31 = puVar15[0x13];
                puVar22 = iVar16 + iVar30 * 0x38;
                puVar23 = iVar31 + uVar28 * 0x198;
                uVar24 = *puVar22;
                *(puVar23 + 0x19) = uVar20;
                *puVar23 = uVar24;
                uVar20 = *(puVar22 + 0xc);
                puVar23[0x16] = uVar20;
                if (uVar20 == 0) goto code_r0x0800738c;
                iVar25 = iVar16 + iVar30 * 0x38;
                iVar27 = iVar31 + uVar28 * 0x198;
                uVar17 = uVar20;
                if (*(iVar25 + 0x10) != 0) {
                    uVar17 = *(iVar25 + 0x10);
                }
                *(iVar27 + 0x50) = uVar17;
                *(iVar27 + 0xcc) = *(iVar25 + 0x14);
                iVar6 = *(iVar25 + 0x18);
                *(iVar27 + 0xd8) = iVar6;
                iVar13 = iVar6;
                if (*(iVar25 + 0x1c) != 0) {
                    iVar13 = *(iVar25 + 0x1c);
                }
                *(iVar27 + 0xd4) = iVar13;
                *(iVar27 + 0x100) = *(iVar25 + 0x20);
                *(iVar27 + 0xe4) = *(iVar25 + 0x24);
                cVar9 = *(iVar25 + 0x2c);
                *(iVar27 + 0x188) = cVar9;
                cVar10 = *(iVar25 + 0x2d);
                *(iVar27 + 0x18a) = cVar10;
                *(iVar27 + 0xe0) = *(iVar25 + 0x2e);
                cVar11 = *(iVar25 + 0x2f);
                *(iVar27 + 0x18b) = cVar11;
                *(iVar27 + 0x18c) = *(iVar25 + 0x30);
                if (cVar11 != '\0') {
                    if (iVar6 == 2) {
code_r0x08007010:
                        if ((cVar10 != '\0') ||
                           (uVar20 = *(iVar16 + iVar30 * 0x38 + 0x28), *(iVar31 + uVar28 * 0x198 + 0xe8) = uVar20,
                           (uVar20 & 0xfffffffe) == 2)) goto code_r0x08007044;
                        iVar16 = *(puVar15[1] + 0xc0);
                        _dev_err(uVar29,"[E][%s] Invalid Door bell mode\n","parse_ch_cfg");
                        if ((iVar16 == 0) || (2 < *(iVar16 + 0x18))) goto code_r0x0800738c;
                        uVar29 = *(iVar16 + 0x20);
                        pcVar19 = "[E][%s] Invalid Door bell mode\n";
                    }
                    else {
code_r0x080072c8:
                        iVar16 = *(puVar15[1] + 0xc0);
                        _dev_err(uVar29,"[E][%s] Invalid channel configuration\n","parse_ch_cfg");
                        if ((iVar16 == 0) || (2 < *(iVar16 + 0x18))) goto code_r0x0800738c;
                        uVar29 = *(iVar16 + 0x20);
                        pcVar19 = "[E][%s] Invalid channel configuration\n";
                    }
                    ipc_log_string(uVar29,pcVar19,"parse_ch_cfg");
                    goto code_r0x0800738c;
                }
                if ((iVar6 != 3) && (iVar6 != 0)) goto code_r0x08007010;
                if (cVar10 == '\0') goto code_r0x080072c8;
code_r0x08007044:
                iVar16 = iVar31 + uVar28 * 0x198;
                pcVar4 = sym.mhi_db_brstmode.cfi_jt;
                if (*(iVar16 + 0xe8) != 3) {
                    pcVar4 = sym.__typeid__ZTSFvP14mhi_controllerP6db_cfgPvyE_global_addr;
                }
                *(iVar16 + 0xf8) = pcVar4;
                *(iVar16 + 0x189) = 1;
                if (cVar9 != '\0') {
                    puVar22 = puVar15[0x15];
                    piVar2 = iVar31 + uVar28 * 0x198 + 0x178;
                    uVar17 = __list_add_valid(piVar2,puVar22,puVar1);
                    if ((uVar17 & 1) != 0) {
                        puVar15[0x15] = piVar2;
                        *piVar2 = puVar1;
                        *(iVar31 + uVar28 * 0x198 + 0x180) = puVar22;
                        *puVar22 = piVar2;
                    }
                }
                uVar14 = uVar14 + 1;
            } while (uVar14 < puVar18[3]);
        }
        uVar14 = puVar18[6];
        uVar29 = *puVar15;
        auVar32._8_8_ = 0;
        auVar32._0_8_ = uVar14;
        *(puVar15 + 0xbc) = uVar14;
        if (SUB168(auVar32 * ZEXT816(0x118),8) == 0) {
            iVar16 = __kmalloc(uVar14 * 0x118,0xdc0);
            puVar15[0x25] = iVar16;
            if (iVar16 != 0) {
                if (0 < uVar14) {
                    uVar20 = 0;
                    iVar30 = 0;
                    puVar26 = iVar16 + 0x90;
                    do {
                        iVar16 = *(puVar18 + 8);
                        puVar26[-0x20] = uVar20;
                        puVar3 = iVar16 + iVar30;
                        *(puVar26 + -8) = *puVar3;
                        puVar26[-0x1f] = puVar3[1];
                        puVar26[-0x1e] = puVar3[2];
                        uVar7 = puVar3[3];
                        if (uVar7 != 0xffffffff) {
                            uVar8 = *(puVar15 + 0x17);
                            puVar26[-0x1d] = uVar7;
                            if (uVar7 < uVar8) {
                                *(puVar26 + -0x22) = puVar15[0x13] + uVar7 * 0x198;
                                goto code_r0x0800719c;
                            }
                            iVar16 = *(puVar15[1] + 0xc0);
                            _dev_err(uVar29,"[E][%s] Event Ring channel not available\n","parse_ev_cfg");
                            if ((iVar16 != 0) && (*(iVar16 + 0x18) < 3)) {
                                pcVar19 = "[E][%s] Event Ring channel not available\n";
code_r0x080073d4:
                                ipc_log_string(*(iVar16 + 0x20),pcVar19,"parse_ev_cfg");
                            }
code_r0x080073e4:
                            kfree(puVar15[0x25]);
                            uVar14 = 0xffffffea;
                            goto code_r0x080073f0;
                        }
code_r0x0800719c:
                        puVar26[-0x1c] = puVar3[4];
                        uVar7 = puVar3[5];
                        *puVar26 = uVar7;
                        if ((uVar7 & 0xfffffffe) != 2) goto code_r0x080073e4;
                        pcVar4 = sym.mhi_db_brstmode.cfi_jt;
                        if (uVar7 != 3) {
                            pcVar4 = sym.__typeid__ZTSFvP14mhi_controllerP6db_cfgPvyE_global_addr;
                        }
                        *(puVar26 + 4) = pcVar4;
                        uVar7 = *(iVar16 + iVar30 + 0x18);
                        puVar26[-0x1b] = uVar7;
                        if (3 < uVar7) {
                            iVar16 = *(puVar15[1] + 0xc0);
                            _dev_err(uVar29,"[E][%s] Event Ring type not supported\n","parse_ev_cfg");
                            if ((iVar16 != 0) && (*(iVar16 + 0x18) < 3)) {
                                pcVar19 = "[E][%s] Event Ring type not supported\n";
                                goto code_r0x080073d4;
                            }
                            goto code_r0x080073e4;
                        }
                        *(puVar26 + 0x1e) = *(reloc.mhi_process_data_event_ring.cfi_jt + uVar7 * 8);
                        cVar9 = *(iVar16 + iVar30 + 0x1c);
                        *(puVar26 + 0x20) = cVar9;
                        if (cVar9 == '\0') {
                            *(puVar15 + 0xc4) = *(puVar15 + 0xc4) + 1;
                        }
                        else {
                            *(puVar15 + 0x18) = *(puVar15 + 0x18) + 1;
                        }
                        iVar16 = iVar16 + iVar30;
                        iVar30 = iVar30 + 0x20;
                        uVar20 = uVar20 + 1;
                        *(puVar26 + 0x81) = *(iVar16 + 0x1d);
                        *(puVar26 + 0x82) = *(iVar16 + 0x1e);
                        puVar26 = puVar26 + 0x46;
                    } while (uVar14 * 0x20 - iVar30 != 0);
                }
                uVar14 = 1000;
                if (puVar18[1] != 0) {
                    uVar14 = puVar18[1];
                }
                *(puVar15 + 0x2f) = uVar14;
                if (puVar18[0xb] != 0) {
                    puVar15[5] = puVar15[3] + puVar18[0xb];
                }
                *(puVar15 + 0x28d) = puVar18[10];
                uVar14 = 0xffff;
                if (puVar18[2] != 0) {
                    uVar14 = puVar18[2];
                }
                puVar15[0x50] = uVar14;
                uVar21 = 0xc;
                *(puVar15 + 0x30) = 0xc;
                uVar14 = 0;
                if (*(puVar18 + 0x29) != '\0') {
                    uVar21 = 4;
                }
                *(puVar15 + 0x30) = uVar21;
                goto code_r0x080073f8;
            }
            uVar14 = 0xfffffff4;
        }
        else {
            uVar14 = 0xfffffff4;
            puVar15[0x25] = 0;
        }
code_r0x080073f0:
        vfree(puVar15[0x13]);
    }
code_r0x080073f8:
    return uVar14;
}


// ===== sym.parse_config @ 0x08006ecc (size 1380) =====

uint sym.parse_config(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint32_t *puVar2;
    int iVar3;
    code *pcVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    char cVar8;
    char cVar9;
    char cVar10;
    uchar auVar11 [16];
    int64_t iVar12;
    uint64_t uVar13;
    char *pcVar14;
    uint32_t uVar15;
    uint uVar16;
    int64_t iVar17;
    uint32_t uVar18;
    ulong *puVar19;
    ulong *puVar20;
    ulong uVar21;
    int64_t iVar22;
    uint32_t *puVar23;
    int64_t iVar24;
    ulong *in_x18;
    ulong uVar25;
    int64_t iVar26;
    uint64_t uVar27;
    int64_t iVar28;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar18 = *arg2;
    uVar25 = *arg1;
    *(arg1 + 0xb8) = uVar18;
    iVar12 = vzalloc(uVar18 * 0x198);
    *(arg1 + 0x98) = iVar12;
    if (iVar12 == 0) {
        uVar16 = 0xfffffff4;
    }
    else {
        iVar12 = arg1 + 0xa0;
        *(arg1 + 0xa0) = iVar12;
        *(arg1 + 0xa8) = iVar12;
        if (*(arg2 + 0xc) != 0) {
            uVar18 = 0;
            do {
                iVar17 = *(arg2 + 0x10);
                uVar15 = *(iVar17 + uVar18 * 0x38 + 8);
                uVar27 = uVar15;
                if (*(arg1 + 0xb8) <= uVar15) {
                    iVar12 = *(*(arg1 + 8) + 0xc0);
                    _dev_err(uVar25,"[E][%s] Channel %d not available\n","parse_ch_cfg",uVar15);
                    if ((iVar12 != 0) && (*(iVar12 + 0x18) < 3)) {
                        ipc_log_string(*(iVar12 + 0x20),"[E][%s] Channel %d not available\n","parse_ch_cfg",uVar15);
                    }
                    goto code_r0x0800738c;
                }
                iVar26 = uVar18;
                iVar28 = *(arg1 + 0x98);
                puVar19 = iVar17 + iVar26 * 0x38;
                puVar20 = iVar28 + uVar27 * 0x198;
                uVar21 = *puVar19;
                *(puVar20 + 0x19) = uVar15;
                *puVar20 = uVar21;
                uVar15 = *(puVar19 + 0xc);
                puVar20[0x16] = uVar15;
                if (uVar15 == 0) goto code_r0x0800738c;
                iVar22 = iVar17 + iVar26 * 0x38;
                iVar24 = iVar28 + uVar27 * 0x198;
                uVar13 = uVar15;
                if (*(iVar22 + 0x10) != 0) {
                    uVar13 = *(iVar22 + 0x10);
                }
                *(iVar24 + 0x50) = uVar13;
                *(iVar24 + 0xcc) = *(iVar22 + 0x14);
                iVar5 = *(iVar22 + 0x18);
                *(iVar24 + 0xd8) = iVar5;
                iVar3 = iVar5;
                if (*(iVar22 + 0x1c) != 0) {
                    iVar3 = *(iVar22 + 0x1c);
                }
                *(iVar24 + 0xd4) = iVar3;
                *(iVar24 + 0x100) = *(iVar22 + 0x20);
                *(iVar24 + 0xe4) = *(iVar22 + 0x24);
                cVar8 = *(iVar22 + 0x2c);
                *(iVar24 + 0x188) = cVar8;
                cVar9 = *(iVar22 + 0x2d);
                *(iVar24 + 0x18a) = cVar9;
                *(iVar24 + 0xe0) = *(iVar22 + 0x2e);
                cVar10 = *(iVar22 + 0x2f);
                *(iVar24 + 0x18b) = cVar10;
                *(iVar24 + 0x18c) = *(iVar22 + 0x30);
                if (cVar10 != '\0') {
                    if (iVar5 == 2) goto code_r0x08007010;
code_r0x080072c8:
                    iVar12 = *(*(arg1 + 8) + 0xc0);
                    _dev_err(uVar25,"[E][%s] Invalid channel configuration\n","parse_ch_cfg");
                    if ((iVar12 == 0) || (2 < *(iVar12 + 0x18))) goto code_r0x0800738c;
                    uVar25 = *(iVar12 + 0x20);
                    pcVar14 = "[E][%s] Invalid channel configuration\n";
code_r0x08007380:
                    ipc_log_string(uVar25,pcVar14,"parse_ch_cfg");
code_r0x0800738c:
                    vfree(*(arg1 + 0x98));
                    return 0xffffffea;
                }
                if ((iVar5 == 3) || (iVar5 == 0)) {
                    if (cVar9 == '\0') goto code_r0x080072c8;
                }
                else {
code_r0x08007010:
                    if ((cVar9 == '\0') &&
                       (uVar15 = *(iVar17 + iVar26 * 0x38 + 0x28), *(iVar28 + uVar27 * 0x198 + 0xe8) = uVar15,
                       (uVar15 & 0xfffffffe) != 2)) {
                        iVar12 = *(*(arg1 + 8) + 0xc0);
                        _dev_err(uVar25,"[E][%s] Invalid Door bell mode\n","parse_ch_cfg");
                        if ((iVar12 == 0) || (2 < *(iVar12 + 0x18))) goto code_r0x0800738c;
                        uVar25 = *(iVar12 + 0x20);
                        pcVar14 = "[E][%s] Invalid Door bell mode\n";
                        goto code_r0x08007380;
                    }
                }
                iVar17 = iVar28 + uVar27 * 0x198;
                pcVar4 = sym.mhi_db_brstmode.cfi_jt;
                if (*(iVar17 + 0xe8) != 3) {
                    pcVar4 = sym.__typeid__ZTSFvP14mhi_controllerP6db_cfgPvyE_global_addr;
                }
                *(iVar17 + 0xf8) = pcVar4;
                *(iVar17 + 0x189) = 1;
                if (cVar8 != '\0') {
                    puVar19 = *(arg1 + 0xa8);
                    piVar1 = iVar28 + uVar27 * 0x198 + 0x178;
                    uVar13 = __list_add_valid(piVar1,puVar19,iVar12);
                    if ((uVar13 & 1) != 0) {
                        *(arg1 + 0xa8) = piVar1;
                        *piVar1 = iVar12;
                        *(iVar28 + uVar27 * 0x198 + 0x180) = puVar19;
                        *puVar19 = piVar1;
                    }
                }
                uVar18 = uVar18 + 1;
            } while (uVar18 < *(arg2 + 0xc));
        }
        uVar18 = *(arg2 + 0x18);
        uVar25 = *arg1;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar18;
        *(arg1 + 0xbc) = uVar18;
        if (SUB168(auVar11 * ZEXT816(0x118),8) == 0) {
            iVar12 = __kmalloc(uVar18 * 0x118,0xdc0);
            *(arg1 + 0x128) = iVar12;
            if (iVar12 != 0) {
                if (0 < uVar18) {
                    uVar15 = 0;
                    iVar17 = 0;
                    puVar23 = iVar12 + 0x90;
                    do {
                        iVar12 = *(arg2 + 0x20);
                        puVar23[-0x20] = uVar15;
                        puVar2 = iVar12 + iVar17;
                        *(puVar23 + -8) = *puVar2;
                        puVar23[-0x1f] = puVar2[1];
                        puVar23[-0x1e] = puVar2[2];
                        uVar6 = puVar2[3];
                        if (uVar6 != 0xffffffff) {
                            uVar7 = *(arg1 + 0xb8);
                            puVar23[-0x1d] = uVar6;
                            if (uVar6 < uVar7) {
                                *(puVar23 + -0x22) = *(arg1 + 0x98) + uVar6 * 0x198;
                                goto code_r0x0800719c;
                            }
                            iVar12 = *(*(arg1 + 8) + 0xc0);
                            _dev_err(uVar25,"[E][%s] Event Ring channel not available\n","parse_ev_cfg");
                            if ((iVar12 != 0) && (*(iVar12 + 0x18) < 3)) {
                                pcVar14 = "[E][%s] Event Ring channel not available\n";
code_r0x080073d4:
                                ipc_log_string(*(iVar12 + 0x20),pcVar14,"parse_ev_cfg");
                            }
code_r0x080073e4:
                            kfree(*(arg1 + 0x128));
                            uVar16 = 0xffffffea;
                            goto code_r0x080073f0;
                        }
code_r0x0800719c:
                        puVar23[-0x1c] = puVar2[4];
                        uVar6 = puVar2[5];
                        *puVar23 = uVar6;
                        if ((uVar6 & 0xfffffffe) != 2) goto code_r0x080073e4;
                        pcVar4 = sym.mhi_db_brstmode.cfi_jt;
                        if (uVar6 != 3) {
                            pcVar4 = sym.__typeid__ZTSFvP14mhi_controllerP6db_cfgPvyE_global_addr;
                        }
                        *(puVar23 + 4) = pcVar4;
                        uVar6 = *(iVar12 + iVar17 + 0x18);
                        puVar23[-0x1b] = uVar6;
                        if (3 < uVar6) {
                            iVar12 = *(*(arg1 + 8) + 0xc0);
                            _dev_err(uVar25,"[E][%s] Event Ring type not supported\n","parse_ev_cfg");
                            if ((iVar12 != 0) && (*(iVar12 + 0x18) < 3)) {
                                pcVar14 = "[E][%s] Event Ring type not supported\n";
                                goto code_r0x080073d4;
                            }
                            goto code_r0x080073e4;
                        }
                        *(puVar23 + 0x1e) = *(reloc.mhi_process_data_event_ring.cfi_jt + uVar6 * 8);
                        cVar8 = *(iVar12 + iVar17 + 0x1c);
                        *(puVar23 + 0x20) = cVar8;
                        if (cVar8 == '\0') {
                            *(arg1 + 0xc4) = *(arg1 + 0xc4) + 1;
                        }
                        else {
                            *(arg1 + 0xc0) = *(arg1 + 0xc0) + 1;
                        }
                        iVar12 = iVar12 + iVar17;
                        iVar17 = iVar17 + 0x20;
                        uVar15 = uVar15 + 1;
                        *(puVar23 + 0x81) = *(iVar12 + 0x1d);
                        *(puVar23 + 0x82) = *(iVar12 + 0x1e);
                        puVar23 = puVar23 + 0x46;
                    } while (uVar18 * 0x20 - iVar17 != 0);
                }
                iVar3 = 1000;
                if (*(arg2 + 4) != 0) {
                    iVar3 = *(arg2 + 4);
                }
                *(arg1 + 0x178) = iVar3;
                if (*(arg2 + 0x2c) != 0) {
                    *(arg1 + 0x28) = *(arg1 + 0x18) + *(arg2 + 0x2c);
                }
                *(arg1 + 0x28d) = *(arg2 + 0x28);
                uVar18 = 0xffff;
                if (*(arg2 + 8) != 0) {
                    uVar18 = *(arg2 + 8);
                }
                *(arg1 + 0x280) = uVar18;
                uVar16 = 0xc;
                *(arg1 + 0x180) = 0xc;
                if (*(arg2 + 0x29) != '\0') {
                    uVar16 = 4;
                }
                *(arg1 + 0x180) = uVar16;
                return 0;
            }
            uVar16 = 0xfffffff4;
        }
        else {
            uVar16 = 0xfffffff4;
            *(arg1 + 0x128) = 0;
        }
code_r0x080073f0:
        vfree(*(arg1 + 0x98));
    }
    return uVar16;
}


// ===== sym.mhi_alloc_device @ 0x08007430 (size 148) =====

int64_t sym.mhi_alloc_device(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = kmem_cache_alloc_trace(_free_irq,0xdc0,0x3d8);
    if (iVar1 == 0) {
        iVar1 = -0xc;
    }
    else {
        device_initialize(iVar1 + 0x28);
        iVar2 = *(arg1 + 8);
        *(iVar1 + 0xa8) = obj.mhi_bus_type;
        *(iVar1 + 0x358) = sym.mhi_release_device.6ea9a53e17dc3aa18347e4cc921a30b8.cfi_jt;
        if (iVar2 == 0) {
            iVar2 = *arg1;
        }
        else {
            iVar2 = iVar2 + 0x28;
        }
        *(iVar1 + 0x88) = iVar2;
        *(iVar1 + 0x10) = arg1;
        *(iVar1 + 0x3cc) = 0;
    }
    return iVar1;
}


// ===== sym.mhi_unregister_controller @ 0x080074c4 (size 252) =====

void sym.mhi_unregister_controller(int64_t arg1)

{
    uint32_t uVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    int64_t *piVar4;
    uint32_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 8);
    iVar3 = *(arg1 + 0x98);
    sym.mhi_misc_unregister_controller(arg1);
    sym.mhi_misc_sysfs_destroy(arg1);
    if (*(arg1 + 0x28c) != '\0') {
        *(arg1 + 0x28c) = 0;
        if (*(arg1 + 0x80) != 0) {
            sym.mhi_free_bhie_table(arg1,arg1 + 0x80);
        }
        if (*(arg1 + 0x88) != 0) {
            sym.mhi_free_bhie_table(arg1,arg1 + 0x88);
        }
    }
    destroy_workqueue(*(arg1 + 0x200));
    kfree(*(arg1 + 0x130));
    kfree(*(arg1 + 0x128));
    uVar1 = *(arg1 + 0xb8);
    if (uVar1 != 0) {
        uVar5 = 0;
        piVar4 = iVar3 + 0x110;
        do {
            if (*piVar4 != 0) {
                put_device(*piVar4 + 0x28);
                uVar1 = *(arg1 + 0xb8);
            }
            uVar5 = uVar5 + 1;
            piVar4 = piVar4 + 0x33;
        } while (uVar5 < uVar1);
    }
    vfree(*(arg1 + 0x98));
    iVar2 = iVar2 + 0x28;
    device_del(iVar2);
    put_device(iVar2);
    ida_free(obj.mhi_controller_ida,*(arg1 + 0x288));
    return;
}


// ===== sym.mhi_alloc_controller @ 0x080075c0 (size 52) =====

void sym.mhi_alloc_controller(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kmem_cache_alloc_trace(_free_irq,0xdc0,0x2a0);
    return;
}


// ===== sym.mhi_free_controller @ 0x080075f4 (size 36) =====

void sym.mhi_free_controller(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree();
    return;
}


// ===== sym.mhi_prepare_for_power_up @ 0x08007618 (size 648) =====

uint64_t sym.mhi_prepare_for_power_up(int64_t arg1)

{
    uint uVar1;
    uint32_t uVar2;
    ulong uVar3;
    char *pcVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar6;
    int64_t iVar7;
    ulong unaff_x30;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_48 = *(iVar7 + 0x5e0);
    iVar7 = *(arg1 + 8);
    uStack_50 = 0;
    mutex_lock(arg1 + 0x140);
    uVar2 = sym.mhi_init_dev_ctxt(arg1);
    uVar6 = uVar2;
    if (uVar2 != 0) goto code_r0x08007724;
    uVar2 = sym.mhi_read_reg(arg1,*(arg1 + 0x18),0x28,&uStack_50 + 4);
    if (uVar2 == 0) {
        if (uStack_50 >> 0x20 < *(arg1 + 0x78)) {
            iVar5 = *(arg1 + 0x28);
            *(arg1 + 0x20) = *(arg1 + 0x18) + (uStack_50 >> 0x20);
            if ((iVar5 == 0) && ((*(arg1 + 0x28e) != '\0' || (iVar5 = 0, *(arg1 + 0x60) != 0)))) {
                uVar2 = sym.mhi_read_reg(arg1,*(arg1 + 0x18),0x2c,&uStack_50);
                if (uVar2 != 0) {
                    uVar6 = uVar2;
                    iVar5 = *(*(arg1 + 8) + 0xc0);
                    _dev_err(iVar7 + 0x28,"[E][%s] Error getting BHIE offset\n","mhi_prepare_for_power_up");
                    if ((iVar5 != 0) && (*(iVar5 + 0x18) < 3)) {
                        uVar3 = *(iVar5 + 0x20);
                        pcVar4 = "[E][%s] Error getting BHIE offset\n";
                        goto code_r0x0800782c;
                    }
                    goto code_r0x08007890;
                }
                if (*(arg1 + 0x78) <= (uStack_50 & 0xffffffff)) {
                    iVar5 = *(*(arg1 + 8) + 0xc0);
                    _dev_err(iVar7 + 0x28,"[E][%s] BHIe offset: 0x%x is out of range: 0x%zx\n",
                             "mhi_prepare_for_power_up");
                    if ((iVar5 != 0) && (*(iVar5 + 0x18) < 3)) {
                        uVar3 = *(iVar5 + 0x20);
                        pcVar4 = "[E][%s] BHIe offset: 0x%x is out of range: 0x%zx\n";
                        uVar1 = uStack_50;
                        goto code_r0x0800787c;
                    }
                    goto code_r0x0800788c;
                }
                iVar5 = *(arg1 + 0x18) + (uStack_50 & 0xffffffff);
                *(arg1 + 0x28) = iVar5;
            }
            if (*(arg1 + 0x60) != 0) {
                __memset_io(iVar5 + 0x60,0,0x1c);
                sym.mhi_alloc_bhie_table(arg1,arg1 + 0x88,*(arg1 + 0x60));
                if (*(arg1 + 0x88) != 0) {
                    sym.mhi_rddm_prepare(arg1,*(arg1 + 0x88));
                }
            }
            uVar6 = 0;
            goto code_r0x08007724;
        }
        iVar5 = *(*(arg1 + 8) + 0xc0);
        _dev_err(iVar7 + 0x28,"[E][%s] BHI offset: 0x%x is out of range: 0x%zx\n","mhi_prepare_for_power_up");
        if ((iVar5 != 0) && (*(iVar5 + 0x18) < 3)) {
            uVar3 = *(iVar5 + 0x20);
            pcVar4 = "[E][%s] BHI offset: 0x%x is out of range: 0x%zx\n";
            uVar1 = uStack_50._4_4_;
code_r0x0800787c:
            ipc_log_string(uVar3,pcVar4,"mhi_prepare_for_power_up",uVar1,*(arg1 + 0x78));
        }
code_r0x0800788c:
        uVar6 = 0xffffffea;
    }
    else {
        uVar6 = uVar2;
        iVar5 = *(*(arg1 + 8) + 0xc0);
        _dev_err(iVar7 + 0x28,"[E][%s] Error getting BHI offset\n","mhi_prepare_for_power_up");
        if ((iVar5 != 0) && (*(iVar5 + 0x18) < 3)) {
            uVar3 = *(iVar5 + 0x20);
            pcVar4 = "[E][%s] Error getting BHI offset\n";
code_r0x0800782c:
            ipc_log_string(uVar3,pcVar4,"mhi_prepare_for_power_up");
        }
    }
code_r0x08007890:
    sym.mhi_deinit_dev_ctxt(arg1);
code_r0x08007724:
    mutex_unlock(arg1 + 0x140);
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_48) {
        return uVar6;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.mhi_unprepare_after_power_down;
    if (*(iVar7 + 0x88) != 0) {
        sym.mhi_free_bhie_table(iVar7,iVar7 + 0x88);
    }
    uVar6 = sym.mhi_deinit_dev_ctxt(iVar7);
    return uVar6;
}


// ===== sym.mhi_unprepare_after_power_down @ 0x080078a0 (size 72) =====

void sym.mhi_unprepare_after_power_down(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x88) != 0) {
        sym.mhi_free_bhie_table(arg1,arg1 + 0x88);
    }
    sym.mhi_deinit_dev_ctxt(arg1);
    return;
}


// ===== sym.mhi_release_device @ 0x080078e8 (size 64) =====

void sym.mhi_release_device(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + -0x10) != 0) {
        *(*(arg1 + -0x10) + 0x110) = 0;
    }
    if (*(arg1 + -8) != 0) {
        *(*(arg1 + -8) + 0x110) = 0;
    }
    kfree();
    return;
}


// ===== sym.__mhi_driver_register @ 0x08007928 (size 104) =====

ulong sym.__mhi_driver_register(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 8) == 0) || (*(arg1 + 0x10) == 0)) {
        uVar1 = 0xffffffea;
    }
    else {
        *(arg1 + 0x68) = sym.mhi_driver_probe.6ea9a53e17dc3aa18347e4cc921a30b8.cfi_jt;
        *(arg1 + 0x38) = obj.mhi_bus_type;
        *(arg1 + 0x40) = arg2;
        *(arg1 + 0x78) = sym.mhi_driver_remove.6ea9a53e17dc3aa18347e4cc921a30b8.cfi_jt;
        uVar1 = driver_register(arg1 + 0x30);
    }
    return uVar1;
}


// ===== sym.mhi_driver_probe @ 0x08007990 (size 288) =====

int sym.mhi_driver_probe(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int iVar3;
    ulong *in_x18;
    ulong *arg1_00;
    code *pcVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = arg1 + -0x28;
    iVar5 = *(arg1 + 0x88);
    iVar1 = *(arg1 + -0x18);
    iVar2 = *(arg1 + -0x10);
    iVar6 = *(arg1 + -8);
    iVar3 = sym.mhi_device_get_sync(arg1_00);
    if (iVar3 != 0) {
        return iVar3;
    }
    if (iVar2 == 0) {
code_r0x080079f4:
        if (iVar6 != 0) {
            if (((*(iVar6 + 0x188) != '\0') && (*(iVar5 + -8) == 0)) ||
               (((*(iVar6 + 0x18a) == '\0' && (*(iVar5 + -0x10) == 0)) ||
                ((*(*(iVar1 + 0x128) + *(iVar6 + 0xcc) * 0x118 + 0x111) != '\0' && (*(iVar5 + -8) == 0))))))
            goto code_r0x08007a7c;
            *(iVar6 + 0x118) = *(iVar5 + -0x10);
        }
        pcVar4 = *(iVar5 + -0x28);
        __cfi_slowpath_diag(0xd9b7bfe4e3e2def4,pcVar4,0x8000a60);
        iVar3 = (*pcVar4)(arg1_00,*arg1_00);
        if (iVar3 == 0) goto code_r0x08007a88;
    }
    else {
        if (((*(iVar2 + 0x188) == '\0') || (*(iVar5 + -8) != 0)) &&
           ((*(iVar2 + 0x18a) != '\0' || (*(iVar5 + -0x18) != 0)))) {
            *(iVar2 + 0x118) = *(iVar5 + -0x18);
            goto code_r0x080079f4;
        }
code_r0x08007a7c:
        iVar3 = -0x16;
    }
    sym.mhi_unprepare_from_transfer(arg1_00);
code_r0x08007a88:
    sym.mhi_device_put(arg1_00);
    return iVar3;
}


// ===== sym.mhi_driver_remove @ 0x08007ab0 (size 756) =====

ulong sym.mhi_driver_remove(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *arg1_00;
    int64_t iVar3;
    code *pcVar4;
    int iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x390) != 1) {
        iVar6 = *(arg1 + 0x88);
        arg1_00 = *(arg1 + -0x18);
        iVar3 = *(arg1 + -8);
        if (iVar3 == 0) {
            iVar8 = 0;
            iVar3 = *(arg1 + -0x10);
        }
        else {
            iVar7 = iVar3 + 0x170;
            _raw_write_lock_irq(iVar7);
            *(iVar3 + 0x108) = 0;
            complete_all(iVar3 + 0x150);
            _raw_write_unlock_irq(iVar7);
            mutex_lock(iVar3 + 0x120);
            _raw_write_lock_irq(iVar7);
            iVar8 = *(iVar3 + 0x104);
            *(iVar3 + 0x104) = 3;
            _raw_write_unlock_irq(iVar7);
            if (*(iVar3 + 0x18a) == '\0') {
                sym.mhi_reset_chan(arg1_00,iVar3);
            }
            mutex_unlock(iVar3 + 0x120);
            iVar3 = *(arg1 + -0x10);
        }
        if (iVar3 == 0) {
            iVar5 = 0;
        }
        else {
            iVar7 = iVar3 + 0x170;
            _raw_write_lock_irq(iVar7);
            *(iVar3 + 0x108) = 0;
            complete_all(iVar3 + 0x150);
            _raw_write_unlock_irq(iVar7);
            mutex_lock(iVar3 + 0x120);
            _raw_write_lock_irq(iVar7);
            iVar5 = *(iVar3 + 0x104);
            *(iVar3 + 0x104) = 3;
            _raw_write_unlock_irq(iVar7);
            if (*(iVar3 + 0x18a) == '\0') {
                sym.mhi_reset_chan(arg1_00,iVar3);
            }
            mutex_unlock(iVar3 + 0x120);
        }
        pcVar4 = *(iVar6 + -0x20);
        if (2 < (pcVar4 + -0x8005b48 >> 3 | pcVar4 << 0x3d)) {
            __cfi_slowpath_diag(0x6e9fb1c868c44dc4,pcVar4,0x8000a80);
        }
        (*pcVar4)(arg1 + -0x28);
        iVar3 = *(arg1 + -8);
        if (iVar3 != 0) {
            mutex_lock(iVar3 + 0x120);
            if ((((iVar8 == 4) || (iVar8 == 1)) && (*(iVar3 + 0x104) != 0)) && (*(iVar3 + 0x18a) == '\0')) {
                uVar1 = *(iVar3 + 200);
                iVar6 = *(arg1_00[0x27] + 8);
                iVar7 = iVar6 + uVar1 * 0x2c;
                if (*(iVar7 + 0xc) != 0) {
                    dma_free_attrs(*arg1_00,*(iVar3 + 0xb8),*(iVar3 + 0x80),*(iVar3 + 0x68),0);
                    vfree(*(iVar3 + 0x28));
                    *(iVar3 + 0x88) = 0;
                    *(iVar3 + 0x28) = 0;
                    iVar2 = uVar1 * 0x2c;
                    *(iVar3 + 0x78) = 0;
                    *(iVar7 + 0x1c) = 0;
                    *(iVar7 + 0x24) = 0;
                    *(iVar7 + 0xc) = 0;
                    *(iVar7 + 0x14) = 0;
                    *(iVar6 + iVar2) = *(iVar6 + iVar2) & 0xffffff00;
                    DataMemoryBarrier(2,2);
                }
            }
            *(iVar3 + 0x104) = 0;
            mutex_unlock(iVar3 + 0x120);
        }
        iVar3 = *(arg1 + -0x10);
        if (iVar3 != 0) {
            mutex_lock(iVar3 + 0x120);
            if (((iVar5 == 4) || (iVar5 == 1)) && ((*(iVar3 + 0x104) != 0 && (*(iVar3 + 0x18a) == '\0')))) {
                uVar1 = *(iVar3 + 200);
                iVar6 = *(arg1_00[0x27] + 8);
                iVar7 = iVar6 + uVar1 * 0x2c;
                if (*(iVar7 + 0xc) != 0) {
                    dma_free_attrs(*arg1_00,*(iVar3 + 0xb8),*(iVar3 + 0x80),*(iVar3 + 0x68),0);
                    vfree(*(iVar3 + 0x28));
                    *(iVar3 + 0x88) = 0;
                    *(iVar3 + 0x28) = 0;
                    iVar2 = uVar1 * 0x2c;
                    *(iVar3 + 0x78) = 0;
                    *(iVar7 + 0x1c) = 0;
                    *(iVar7 + 0x24) = 0;
                    *(iVar7 + 0xc) = 0;
                    *(iVar7 + 0x14) = 0;
                    *(iVar6 + iVar2) = *(iVar6 + iVar2) & 0xffffff00;
                    DataMemoryBarrier(2,2);
                }
            }
            *(iVar3 + 0x104) = 0;
            mutex_unlock(iVar3 + 0x120);
        }
        while (*(arg1 + 0x3a4) != 0) {
            sym.mhi_device_put(arg1 + -0x28);
        }
        return 0;
    }
    return 0;
}


// ===== sym.mhi_driver_unregister @ 0x08007da4 (size 40) =====

void sym.mhi_driver_unregister(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    driver_unregister(arg1 + 0x30);
    return;
}


// ===== sym.mhi_match @ 0x08007dcc (size 120) =====

ulong sym.mhi_match(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    char *pcVar2;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x390) != 1) && (pcVar2 = *(arg2 + -0x30), *pcVar2 != '\0')) {
        uVar3 = *(arg1 + -0x20);
        do {
            iVar1 = strcmp(uVar3,pcVar2);
            if (iVar1 == 0) {
                *(arg1 + -0x28) = pcVar2;
                return 1;
            }
            pcVar2 = pcVar2 + 0x28;
        } while (*pcVar2 != '\0');
    }
    return 0;
}


// ===== sym.mhi_uevent @ 0x08007e44 (size 56) =====

void sym.mhi_uevent(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    add_uevent_var(arg2,"MODALIAS=mhi:%s",*(arg1 + -0x20));
    return;
}


// ===== sym.serial_number_show @ 0x08007e7c (size 68) =====

int64_t sym.serial_number_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg2,0x1000,"Serial Number: %u\n",*(*(arg1 + -0x18) + 0xdc));
    return iVar1;
}


// ===== sym.oem_pk_hash_show @ 0x08007ec0 (size 136) =====

int64_t sym.oem_pk_hash_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    uint64_t uVar3;
    int iVar4;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + -0x18);
    uVar3 = 0;
    iVar4 = 0;
    do {
        iVar1 = snprintf(noname_1,arg2 + iVar4,0x1000 - iVar4,"OEMPKHASH[%d]: 0x%x\n",uVar3 & 0xffffffff,
                         *(iVar2 + 0xe0 + uVar3 * 4));
        uVar3 = uVar3 + 1;
        iVar4 = iVar1 + iVar4;
        noname_1 = extraout_q0;
    } while (uVar3 != 0x10);
    return iVar4;
}


// ===== sym.__cfi_check_fail @ 0x08007f48 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08007f8c

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
    //switch table (4 cases) at 0x80013c0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8007fa0);
    (*pcVar1)();
}


// ===== sym.mhi_read_reg @ 0x08007fa0 (size 124) =====

void sym.mhi_read_reg(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = *(arg1 + 0x268);
    __cfi_slowpath_diag(0x67f4bcfe73f7260,pcVar1,0x8000aa0);
    (*pcVar1)(arg1,arg2 + (arg3 & 0xffffffffU),arg4);
    return;
}


// ===== sym.mhi_read_reg_field @ 0x0800801c (size 208) =====

void sym.mhi_read_reg_field(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    int iVar5;
    int64_t iVar6;
    ulong uVar7;
    uint32_t *puVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t in_w4;
    uint32_t uVar11;
    uint32_t in_w5;
    uint in_x5;
    uint32_t in_w6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar12;
    code *pcVar13;
    uint32_t uVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    uint32_t uStack_cc;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    uint32_t uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_58 = *(iVar3 + 0x5e0);
    puVar4 = CONCAT44(in_x5,in_w5);
    pcVar13 = *(arg1 + 0x268);
    uStack_5c = 0;
    uVar9 = arg4;
    uVar11 = in_w4;
    __cfi_slowpath_diag(0x67f4bcfe73f7260,pcVar13,0x8000aa0);
    puVar8 = &uStack_5c;
    iVar5 = (*pcVar13)(arg1,arg2 + (arg3 & 0xffffffffU),puVar8);
    if (iVar5 == 0) {
        *puVar4 = (uStack_5c & arg4) >> (in_w4 & 0x1f);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_58) {
        return;
    }
    auVar15 = __stack_chk_fail();
    iVar6 = auVar15._0_8_;
    *extraout_x18 = sym.mhi_poll_reg_field;
    pcStack_b8 = sym.mhi_poll_reg_field;
    iVar3 = sp_el0;
    iStack_c8 = *(iVar3 + 0x5e0);
    uVar2 = *(iVar6 + 0x178) * 1000;
    uVar10 = uVar9;
    puStack_c0 = &stack0xffffffffffffffb0;
    if (in_w6 <= uVar2) {
        uVar12 = in_w6;
        uVar14 = 0;
        if (in_w6 != 0) {
            uVar14 = uVar2 / in_w6;
        }
        uVar1 = puVar8 & 0xffffffff;
        do {
            pcVar13 = *(iVar6 + 0x268);
            uStack_cc = 0;
            __cfi_slowpath_diag(0x67f4bcfe73f7260,pcVar13,0x8000aa0);
            puVar8 = &uStack_cc;
            uVar7 = (*pcVar13)(iVar6,auVar15._8_8_ + uVar1,puVar8);
            if (uVar7 != 0) goto code_r0x08008224;
            if ((uStack_cc & uVar9) >> (uVar11 & 0x1f) == in_w5) {
                uVar7 = 0;
                goto code_r0x08008224;
            }
            uVar14 = uVar14 - 1;
            if (in_w6 < 0xb) {
                __udelay(uVar12);
            }
            else if (in_w6 < 0x4e21) {
                puVar8 = 0x2;
                usleep_range_state(uVar12,uVar12 << 1,2);
            }
            else {
                msleep((uVar12 + 999) / 1000);
            }
        } while (uVar14 != 0);
    }
    uVar7 = 0xffffff92;
code_r0x08008224:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_c8) {
        return;
    }
    auVar15 = __stack_chk_fail(uVar7);
    *extraout_x18_00 = sym.mhi_write_reg;
    pcVar13 = *(auVar15._0_8_ + 0x270);
    __cfi_slowpath_diag(0xcc1f7c1a9c27c280,pcVar13,0x8000ac0);
    (*pcVar13)(auVar15._0_8_,auVar15._8_8_ + (puVar8 & 0xffffffff),uVar10);
    return;
}


// ===== sym.mhi_poll_reg_field @ 0x080080ec (size 376) =====

void sym.mhi_poll_reg_field(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t in_w4;
    uint32_t in_w5;
    uint32_t in_w6;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    uVar5 = arg4;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_68 = *(iVar3 + 0x5e0);
    uVar2 = *(arg1 + 0x178) * 1000;
    uVar6 = uVar5;
    if (in_w6 <= uVar2) {
        uVar8 = in_w6;
        uVar9 = 0;
        if (in_w6 != 0) {
            uVar9 = uVar2 / in_w6;
        }
        uVar1 = arg3 & 0xffffffff;
        do {
            pcVar7 = *(arg1 + 0x268);
            uStack_6c = 0;
            __cfi_slowpath_diag(0x67f4bcfe73f7260,pcVar7,0x8000aa0);
            arg3 = &uStack_6c;
            uVar4 = (*pcVar7)(arg1,arg2 + uVar1,arg3);
            if (uVar4 != 0) goto code_r0x08008224;
            if ((uStack_6c & uVar5) >> (in_w4 & 0x1f) == in_w5) {
                uVar4 = 0;
                goto code_r0x08008224;
            }
            uVar9 = uVar9 - 1;
            if (in_w6 < 0xb) {
                __udelay(uVar8);
            }
            else if (in_w6 < 0x4e21) {
                arg3 = 2;
                usleep_range_state(uVar8,uVar8 << 1,2);
            }
            else {
                msleep((uVar8 + 999) / 1000);
            }
        } while (uVar9 != 0);
    }
    uVar4 = 0xffffff92;
code_r0x08008224:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_68) {
        return;
    }
    auVar10 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.mhi_write_reg;
    pcVar7 = *(auVar10._0_8_ + 0x270);
    __cfi_slowpath_diag(0xcc1f7c1a9c27c280,pcVar7,0x8000ac0);
    (*pcVar7)(auVar10._0_8_,auVar10._8_8_ + (arg3 & 0xffffffffU),uVar6);
    return;
}


// ===== sym.mhi_write_reg @ 0x08008264 (size 124) =====

void sym.mhi_write_reg(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = *(arg1 + 0x270);
    __cfi_slowpath_diag(0xcc1f7c1a9c27c280,pcVar1,0x8000ac0,arg4);
    (*pcVar1)(arg1,arg2 + (arg3 & 0xffffffffU),arg4 & 0xffffffff);
    return;
}


// ===== sym.mhi_write_reg_field @ 0x080082e0 (size 268) =====

void sym.mhi_write_reg_field(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    uint32_t in_w4;
    int in_w5;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    uint32_t uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_58 = *(iVar3 + 0x5e0);
    pcVar5 = *(arg1 + 0x268);
    uStack_5c = 0;
    __cfi_slowpath_diag(0x67f4bcfe73f7260,pcVar5,0x8000aa0);
    arg2 = arg2 + (arg3 & 0xffffffffU);
    puVar4 = &uStack_5c;
    iVar2 = (*pcVar5)(arg1,arg2,puVar4);
    if (iVar2 == 0) {
        pcVar5 = *(arg1 + 0x270);
        uVar1 = uStack_5c & (arg4 ^ 0xffffffff) | in_w5 << (in_w4 & 0x1f);
        uStack_5c = uVar1;
        __cfi_slowpath_diag(0xcc1f7c1a9c27c280,pcVar5,0x8000ac0);
        puVar4 = uVar1;
        (*pcVar5)(arg1,arg2,puVar4);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_58) {
        return;
    }
    auVar6 = __stack_chk_fail();
    iVar3 = auVar6._0_8_;
    *extraout_x18 = sym.mhi_write_db;
    pcVar5 = *(iVar3 + 0x270);
    __cfi_slowpath_diag(0xcc1f7c1a9c27c280,pcVar5,0x8000ac0);
    (*pcVar5)(iVar3,auVar6._8_8_ + 4,puVar4 >> 0x20);
    pcVar5 = *(iVar3 + 0x270);
    __cfi_slowpath_diag(0xcc1f7c1a9c27c280,pcVar5,0x8000ac0);
    (*pcVar5)(iVar3,auVar6._8_8_,puVar4 & 0xffffffff);
    return;
}


// ===== sym.mhi_write_db @ 0x080083ec (size 176) =====

void sym.mhi_write_db(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = *(arg1 + 0x270);
    __cfi_slowpath_diag(0xcc1f7c1a9c27c280,pcVar1,0x8000ac0);
    (*pcVar1)(arg1,arg2 + 4,arg3 >> 0x20);
    pcVar1 = *(arg1 + 0x270);
    __cfi_slowpath_diag(0xcc1f7c1a9c27c280,pcVar1,0x8000ac0);
    (*pcVar1)(arg1,arg2,arg3 & 0xffffffff);
    return;
}


// ===== sym.mhi_db_brstmode @ 0x0800849c (size 204) =====

void sym.mhi_db_brstmode(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg2 + 1) != '\0') {
        *(arg2 + 0x10) = arg4;
        pcVar1 = *(arg1 + 0x270);
        __cfi_slowpath_diag(0xcc1f7c1a9c27c280,pcVar1,0x8000ac0);
        (*pcVar1)(arg1,arg3 + 4,arg4 >> 0x20);
        pcVar1 = *(arg1 + 0x270);
        __cfi_slowpath_diag(0xcc1f7c1a9c27c280,pcVar1,0x8000ac0);
        (*pcVar1)(arg1,arg3,arg4 & 0xffffffff);
        *(arg2 + 1) = 0;
    }
    return;
}


// ===== sym.mhi_db_brstmode_disable @ 0x08008568 (size 180) =====

void sym.mhi_db_brstmode_disable(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg2 + 0x10) = arg4;
    pcVar1 = *(arg1 + 0x270);
    __cfi_slowpath_diag(0xcc1f7c1a9c27c280,pcVar1,0x8000ac0);
    (*pcVar1)(arg1,arg3 + 4,arg4 >> 0x20);
    pcVar1 = *(arg1 + 0x270);
    __cfi_slowpath_diag(0xcc1f7c1a9c27c280,pcVar1,0x8000ac0);
    (*pcVar1)(arg1,arg3,arg4 & 0xffffffff);
    return;
}


// ===== sym.mhi_ring_er_db @ 0x0800861c (size 140) =====

void sym.mhi_ring_er_db(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = *(arg1 + 0xa0);
    if (1 < (pcVar1 + -0x8005ac8 >> 3 | pcVar1 << 0x3d)) {
        __cfi_slowpath_diag(0xe80f8bb5456f22db,pcVar1,0x8000ae0);
    }
    (*pcVar1)(*arg1,arg1 + 0x88,*(arg1 + 0x80),**(arg1 + 0x38));
    return;
}


// ===== sym.mhi_ring_cmd_db @ 0x080086a8 (size 196) =====

void sym.mhi_ring_cmd_db(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    ulong *in_x18;
    int64_t iVar2;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = (*(arg2 + 0x30) - *(arg2 + 0x20)) + *(arg2 + 8);
    **(arg2 + 0x10) = uVar1;
    pcVar3 = *(arg1 + 0x270);
    iVar2 = *(arg2 + 0x58);
    __cfi_slowpath_diag(0xcc1f7c1a9c27c280,pcVar3,0x8000ac0);
    (*pcVar3)(arg1,iVar2 + 4,uVar1 >> 0x20);
    pcVar3 = *(arg1 + 0x270);
    __cfi_slowpath_diag(0xcc1f7c1a9c27c280,pcVar3,0x8000ac0);
    (*pcVar3)(arg1,iVar2,uVar1 & 0xffffffff);
    return;
}


// ===== sym.mhi_ring_chan_db @ 0x0800876c (size 176) =====

void sym.mhi_ring_chan_db(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    DataMemoryBarrier(0,2);
    iVar1 = (*(arg2 + 0x98) - *(arg2 + 0x88)) + *(arg2 + 0x70);
    **(arg2 + 0x78) = iVar1;
    pcVar2 = *(arg2 + 0xf8);
    if (1 < (pcVar2 + -0x8005ac8 >> 3 | pcVar2 << 0x3d)) {
        __cfi_slowpath_diag(0xe80f8bb5456f22db,pcVar2,0x8000b00);
    }
    (*pcVar2)(arg1,arg2 + 0xe0,*(arg2 + 0xc0),iVar1);
    return;
}


// ===== sym.mhi_get_exec_env @ 0x0800881c (size 172) =====

void sym.mhi_get_exec_env(int64_t arg1)

{
    uint uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar5;
    code *pcVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uint32_t uStack_7c;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t iStack_60;
    code *pcStack_50;
    int64_t iStack_48;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    iVar7 = *(arg1 + 0x20);
    uStack_3c = 0;
    pcVar5 = *(arg1 + 0x268);
    __cfi_slowpath_diag(0x67f4bcfe73f7260,pcVar5,0x8000aa0);
    iVar2 = (*pcVar5)(arg1,iVar7 + 0x28,&uStack_3c);
    iVar8 = sp_el0;
    uVar1 = uStack_3c;
    if (iVar2 != 0) {
        uVar1 = 10;
    }
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return;
    }
    iVar3 = __stack_chk_fail(uVar1);
    *extraout_x18 = sym.mhi_get_mhi_state;
    pcStack_68 = sym.mhi_get_mhi_state;
    iVar8 = sp_el0;
    iStack_78 = *(iVar8 + 0x5e0);
    iVar8 = *(iVar3 + 0x18);
    uStack_7c = 0;
    pcVar6 = *(iVar3 + 0x268);
    puStack_70 = &stack0xffffffffffffffd0;
    iStack_60 = iVar7;
    pcStack_50 = pcVar5;
    iStack_48 = arg1;
    __cfi_slowpath_diag(0x67f4bcfe73f7260,pcVar6,0x8000aa0);
    iVar2 = (*pcVar6)(iVar3,iVar8 + 0x48,&uStack_7c);
    iVar8 = sp_el0;
    uVar4 = uStack_7c >> 8 & 0xff;
    if (iVar2 != 0) {
        uVar4 = 0x100;
    }
    if (*(iVar8 + 0x5e0) == iStack_78) {
        return;
    }
    iVar8 = __stack_chk_fail(uVar4);
    *extraout_x18_00 = sym.mhi_soc_reset;
    pcVar5 = *(iVar8 + 0x278);
    if (pcVar5 == NULL) {
        pcVar5 = *(iVar8 + 0x270);
        iVar7 = *(iVar8 + 0x18);
        __cfi_slowpath_diag(0xcc1f7c1a9c27c280,pcVar5,0x8000ac0);
        (*pcVar5)(iVar8,iVar7 + 0xb0,1);
    }
    else {
        if (7 < (pcVar5 + -0x8005c80 >> 3 | pcVar5 << 0x3d)) {
            __cfi_slowpath_diag(0x95232cda069bc43d,pcVar5,0x8000b20);
        }
        (*pcVar5)(iVar8);
    }
    return;
}


// ===== sym.mhi_get_mhi_state @ 0x080088c8 (size 172) =====

void sym.mhi_get_mhi_state(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iVar4 = *(arg1 + 0x18);
    uStack_3c = 0;
    pcVar3 = *(arg1 + 0x268);
    __cfi_slowpath_diag(0x67f4bcfe73f7260,pcVar3,0x8000aa0);
    iVar1 = (*pcVar3)(arg1,iVar4 + 0x48,&uStack_3c);
    iVar4 = sp_el0;
    uVar2 = uStack_3c >> 8 & 0xff;
    if (iVar1 != 0) {
        uVar2 = 0x100;
    }
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    iVar4 = __stack_chk_fail(uVar2);
    *extraout_x18 = sym.mhi_soc_reset;
    pcVar3 = *(iVar4 + 0x278);
    if (pcVar3 == NULL) {
        pcVar3 = *(iVar4 + 0x270);
        iVar5 = *(iVar4 + 0x18);
        __cfi_slowpath_diag(0xcc1f7c1a9c27c280,pcVar3,0x8000ac0);
        (*pcVar3)(iVar4,iVar5 + 0xb0,1);
    }
    else {
        if (7 < (pcVar3 + -0x8005c80 >> 3 | pcVar3 << 0x3d)) {
            __cfi_slowpath_diag(0x95232cda069bc43d,pcVar3,0x8000b20);
        }
        (*pcVar3)(iVar4);
    }
    return;
}


// ===== sym.mhi_soc_reset @ 0x08008974 (size 196) =====

void sym.mhi_soc_reset(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = *(arg1 + 0x278);
    if (pcVar1 == NULL) {
        pcVar1 = *(arg1 + 0x270);
        iVar2 = *(arg1 + 0x18);
        __cfi_slowpath_diag(0xcc1f7c1a9c27c280,pcVar1,0x8000ac0);
        (*pcVar1)(arg1,iVar2 + 0xb0,1);
    }
    else {
        if (7 < (pcVar1 + -0x8005c80 >> 3 | pcVar1 << 0x3d)) {
            __cfi_slowpath_diag(0x95232cda069bc43d,pcVar1,0x8000b20);
        }
        (*pcVar1)(arg1);
    }
    return;
}


// ===== sym.mhi_map_single_no_bb @ 0x08008a38 (size 256) =====

uint sym.mhi_map_single_no_bb(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    code *pcVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t *piVar5;
    ulong uVar6;
    uint64_t uVar7;
    uint uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar7 = *arg2;
    piVar5 = *arg1;
    uVar6 = *(arg2 + 0x28);
    uVar1 = *(arg2 + 0x30);
    uVar3 = is_vmalloc_addr(uVar7);
    if (((uVar3 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
        obj.dma_map_single_attrs.__already_done = 0x1;
        uVar6 = dev_driver_string(piVar5);
        iVar4 = piVar5[0xe];
        if (iVar4 == 0) {
            iVar4 = *piVar5;
        }
        __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar6,iVar4);
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x800,0x8008ac8);
        (*pcVar2)();
    }
    uVar8 = 0xfffffff4;
    if ((uVar3 & 1) == 0) {
        iVar4 = dma_map_page_attrs(piVar5,(((uVar7 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x200000000
                                   ,uVar7 & 0xfff,uVar6,uVar1,0);
        uVar8 = 0xfffffff4;
        if (iVar4 != -1) {
            uVar8 = 0;
        }
    }
    else {
        iVar4 = -1;
    }
    *(arg2 + 0x20) = iVar4;
    return uVar8;
}


// ===== sym.mhi_map_single_use_bb @ 0x08008b38 (size 120) =====

ulong sym.mhi_map_single_use_bb(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = dma_alloc_attrs(*arg1,*(arg2 + 0x28),arg2 + 0x20,0xa20,0);
    if (iVar1 == 0) {
        uVar2 = 0xfffffff4;
    }
    else {
        if (*(arg2 + 0x30) == 1) {
            memcpy(iVar1,*arg2,*(arg2 + 0x28));
        }
        uVar2 = 0;
        *(arg2 + 8) = iVar1;
    }
    return uVar2;
}


// ===== sym.mhi_unmap_single_no_bb @ 0x08008bb0 (size 56) =====

void sym.mhi_unmap_single_no_bb(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    dma_unmap_page_attrs(*arg1,*(arg2 + 0x20),*(arg2 + 0x28),*(arg2 + 0x30),0);
    return;
}


// ===== sym.mhi_unmap_single_use_bb @ 0x08008be8 (size 92) =====

void sym.mhi_unmap_single_use_bb(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg2 + 0x30) == 2) {
        memcpy(*arg2,*(arg2 + 8),*(arg2 + 0x28));
    }
    dma_free_attrs(*arg1,*(arg2 + 0x28),*(arg2 + 8),*(arg2 + 0x20),0);
    return;
}


// ===== sym.mhi_to_virtual @ 0x08008c44 (size 28) =====

int64_t sym.mhi_to_virtual(int64_t arg1,int64_t arg2)

{
    return *(arg1 + 0x20) + (arg2 - *(arg1 + 8));
}


// ===== sym.mhi_to_physical @ 0x08008c60 (size 28) =====

int64_t sym.mhi_to_physical(int64_t arg1,int64_t arg2)

{
    return (arg2 - *(arg1 + 0x20)) + *(arg1 + 8);
}


// ===== sym.mhi_destroy_device @ 0x08008c7c (size 260) =====

ulong sym.mhi_destroy_device(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    uint64_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x80) != obj.mhi_bus_type) {
        return 0;
    }
    if (*(arg1 + 0x390) == 1) {
        return 0;
    }
    iVar2 = *(arg1 + -0x18);
    iVar1 = *(arg1 + -0x10);
    iVar3 = *(arg1 + -8);
    if (arg2 == 0) {
        if (iVar1 != 0) {
code_r0x08008ce8:
            uVar4 = 10;
            goto code_r0x08008cec;
        }
        if (iVar3 == 0) goto code_r0x08008d24;
    }
    else {
        uVar4 = *arg2;
        if (iVar1 != 0) {
            if (*arg2 == 10) goto code_r0x08008ce8;
            if ((*(iVar1 + 0x100) >> (uVar4 & 0x3f) & 1) == 0) {
                return 0;
            }
code_r0x08008cec:
            put_device(*(iVar1 + 0x110) + 0x28);
        }
        if (iVar3 == 0) goto code_r0x08008d24;
        if ((uVar4 != 10) && ((*(iVar3 + 0x100) >> (uVar4 & 0x3f) & 1) == 0)) {
            return 0;
        }
    }
    put_device(*(iVar3 + 0x110) + 0x28);
code_r0x08008d24:
    iVar2 = *(*(iVar2 + 8) + 0xc0);
    if ((iVar2 != 0) && (*(iVar2 + 0x18) == 0)) {
        ipc_log_string(*(iVar2 + 0x20),"[D][%s] destroy device for chan:%s\n","mhi_destroy_device",*(arg1 + -0x20));
    }
    device_del(arg1);
    put_device(arg1);
    return 0;
}


// ===== sym.mhi_get_free_desc_count @ 0x08008d80 (size 108) =====

int64_t sym.mhi_get_free_desc_count(int64_t arg1,uint32_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    
    iVar5 = 0x18;
    if (arg2 != 1) {
        iVar5 = 0x20;
    }
    iVar5 = *(arg1 + iVar5);
    uVar1 = *(iVar5 + 0x90);
    uVar2 = *(iVar5 + 0x98);
    if (uVar2 < uVar1) {
        uVar3 = 0;
        if (*(iVar5 + 0xa0) != 0) {
            uVar3 = (uVar1 - uVar2) / *(iVar5 + 0xa0);
        }
        return uVar3 - 1;
    }
    uVar3 = *(iVar5 + 0xa0);
    uVar4 = 0;
    if (uVar3 != 0) {
        uVar4 = (uVar1 - *(iVar5 + 0x88)) / uVar3;
    }
    uVar1 = 0;
    if (uVar3 != 0) {
        uVar1 = ((*(iVar5 + 0x88) + *(iVar5 + 0xa8)) - uVar2) / uVar3;
    }
    return uVar4 + uVar1 + 0xffffffff;
}


// ===== sym.mhi_notify @ 0x08008dec (size 136) =====

void sym.mhi_notify(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0xb0) != 0) && (pcVar1 = *(*(arg1 + 0xb0) + -8), pcVar1 != NULL)) {
        if (pcVar1 != sym.__typeid__ZTSFvP10mhi_device12mhi_callbackE_global_addr) {
            __cfi_slowpath_diag(0x67f3a51ad5c16f72,pcVar1,0x8000b40);
            arg2 = arg2 & 0xffffffff;
        }
        (*pcVar1)(arg1,arg2);
    }
    return;
}


// ===== sym.mhi_create_devices @ 0x08008e74 (size 604) =====

void sym.mhi_create_devices(int64_t arg1)

{
    ulong *puVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t iVar5;
    int64_t iVar6;
    uint32_t uVar7;
    ulong *puVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0xb8) != 0) {
        uVar7 = 0;
        iVar6 = *(arg1 + 8);
        puVar8 = *(arg1 + 0x98);
        do {
            if (((*(puVar8 + 0x189) != '\0') && (puVar8[0x22] == 0)) &&
               ((*(puVar8 + 0x20) >> (*(arg1 + 0x184) & 0x3f) & 1) != 0)) {
                uVar3 = sym.mhi_alloc_device(arg1);
                if (0xfffffffffffff000 < uVar3) {
                    return;
                }
                *(uVar3 + 0x3b8) = 0;
    //switch table (4 cases) at 0x8004808
                switch(*(puVar8 + 0x1b)) {
                case 0:
                case 3:
                    *(uVar3 + 0x3bc) = *(puVar8 + 0x19);
                    *(uVar3 + 0x3c0) = *(puVar8 + 0xcc);
                case 2:
                    *(uVar3 + 0x20) = puVar8;
                    *(uVar3 + 0x3c4) = *(puVar8 + 0x19);
                    *(uVar3 + 0x3c8) = *(puVar8 + 0xcc);
                    break;
                case 1:
                    *(uVar3 + 0x18) = puVar8;
                    *(uVar3 + 0x3bc) = *(puVar8 + 0x19);
                    *(uVar3 + 0x3c0) = *(puVar8 + 0xcc);
                    break;
                default:
                    iVar5 = *(*(arg1 + 8) + 0xc0);
                    _dev_err(iVar6 + 0x28,"[E][%s] Direction not supported\n","mhi_create_devices");
                    if ((iVar5 != 0) && (*(iVar5 + 0x18) < 3)) {
                        ipc_log_string(*(iVar5 + 0x20),"[E][%s] Direction not supported\n","mhi_create_devices");
                    }
                    put_device(uVar3 + 0x28);
                    return;
                }
                iVar5 = uVar3 + 0x28;
                get_device(iVar5);
                puVar8[0x22] = uVar3;
                if (((uVar7 + 1 < *(arg1 + 0xb8)) && (*(puVar8 + 0x321) != '\0')) &&
                   (iVar2 = strcmp(puVar8[0x33],*puVar8), iVar2 == 0)) {
                    puVar1 = puVar8 + 0x33;
                    if (*(puVar8 + 0x4e) == 1) {
                        *(uVar3 + 0x18) = puVar1;
                        *(uVar3 + 0x3bc) = *(puVar8 + 0x4c);
                        *(uVar3 + 0x3c0) = *(puVar8 + 0x264);
                    }
                    else {
                        *(uVar3 + 0x20) = puVar1;
                        *(uVar3 + 0x3c4) = *(puVar8 + 0x4c);
                        *(uVar3 + 0x3c8) = *(puVar8 + 0x264);
                    }
                    get_device(iVar5);
                    puVar8[0x55] = uVar3;
                    puVar8 = puVar1;
                    uVar7 = uVar7 + 1;
                }
                *(uVar3 + 8) = *puVar8;
                iVar4 = *(*(arg1 + 8) + 0x98);
                if (iVar4 == 0) {
                    iVar4 = *(*(arg1 + 8) + 0x28);
                }
                dev_set_name(iVar5,"%s_%s",iVar4);
                if ((*(uVar3 + 0x20) != 0) && (*(*(uVar3 + 0x20) + 0x18c) != '\0')) {
                    device_init_wakeup(iVar5,1);
                }
                iVar2 = device_add(iVar5);
                if (iVar2 != 0) {
                    put_device(iVar5);
                }
            }
            uVar7 = uVar7 + 1;
            puVar8 = puVar8 + 0x33;
        } while (uVar7 < *(arg1 + 0xb8));
    }
    return;
}


// ===== sym.mhi_process_sleeping_events @ 0x080090d0 (size 184) =====

void sym.mhi_process_sleeping_events(int64_t arg1)

{
    uint32_t uVar1;
    ulong *in_x18;
    int64_t iVar2;
    uint32_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + 0xbc);
    if (uVar1 != 0) {
        uVar3 = 0;
        iVar2 = *(arg1 + 0x128) + 0xd0;
        do {
            if (((*(iVar2 + 0x42) == '\0') && (*(iVar2 + -0xb0) == 2)) &&
               (*(iVar2 + -0x80) !=
                *(iVar2 + -0x88) + (*(**(arg1 + 0x138) + *(iVar2 + -0xc0) * 0x2c + 0x1c) - *(iVar2 + -0xa0)))) {
                queue_work_on(0x20,*(arg1 + 0x200),iVar2);
                uVar1 = *(arg1 + 0xbc);
            }
            uVar3 = uVar3 + 1;
            iVar2 = iVar2 + 0x118;
        } while (uVar3 < uVar1);
    }
    return;
}


// ===== sym.mhi_irq_handler @ 0x08009188 (size 536) =====

ulong sym.mhi_irq_handler(ulong noname_0,int64_t arg1)

{
    uint64_t *puVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    char *pcVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    code *pcVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *arg1;
    uVar10 = *(arg1 + 0x30);
    uVar9 = *(**(iVar7 + 0x138) + *(arg1 + 0x10) * 0x2c + 0x1c);
    iVar8 = *(iVar7 + 8);
    if ((uVar9 < uVar10) || (*(arg1 + 0x68) + uVar10 <= uVar9)) {
        iVar7 = *(iVar8 + 0xc0);
        _dev_err(iVar8 + 0x28,"[E][%s] Event ring rp points outside of the event ring\n","mhi_irq_handler");
        if (iVar7 == 0) {
            return 1;
        }
        if (2 < *(iVar7 + 0x18)) {
            return 1;
        }
        uVar5 = *(iVar7 + 0x20);
        pcVar6 = "[E][%s] Event ring rp points outside of the event ring\n";
    }
    else {
        if (*(arg1 + 0x50) == *(arg1 + 0x48) + (uVar9 - uVar10)) {
            return 1;
        }
        if (*(arg1 + 0x111) != '\0') {
            iVar7 = *(*(arg1 + 8) + 0x110);
            if (iVar7 == 0) {
                return 1;
            }
            if (*(iVar7 + 0xb0) == 0) {
                return 1;
            }
            pcVar11 = *(*(iVar7 + 0xb0) + -8);
            if (pcVar11 == NULL) {
                return 1;
            }
            if (pcVar11 != sym.__typeid__ZTSFvP10mhi_device12mhi_callbackE_global_addr) {
                __cfi_slowpath_diag(0x67f3a51ad5c16f72,pcVar11,0x8000b40);
            }
            (*pcVar11)(iVar7,1);
            return 1;
        }
        iVar2 = *(arg1 + 0x20);
        if (iVar2 == 0) {
            puVar1 = arg1 + 0xb0;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar9 = *puVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar9 | 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
            if ((uVar9 & 1) != 0) {
                return 1;
            }
            __tasklet_schedule(arg1 + 0xa8);
            return 1;
        }
        if (iVar2 == 2) {
            queue_work_on(0x20,*(iVar7 + 0x200),arg1 + 0xd0);
            return 1;
        }
        if (iVar2 == 1) {
            puVar1 = arg1 + 0xb0;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar9 = *puVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar9 | 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
            if ((uVar9 & 1) != 0) {
                return 1;
            }
            __tasklet_hi_schedule(arg1 + 0xa8);
            return 1;
        }
        iVar7 = *(iVar8 + 0xc0);
        if (iVar7 == 0) {
            return 1;
        }
        if (*(iVar7 + 0x18) != 0) {
            return 1;
        }
        uVar5 = *(iVar7 + 0x20);
        pcVar6 = "[D][%s] skip unknown priority event\n";
    }
    ipc_log_string(uVar5,pcVar6,"mhi_irq_handler");
    return 1;
}


// ===== sym.mhi_intvec_threaded_handler @ 0x080093a0 (size 808) =====

ulong sym.mhi_intvec_threaded_handler(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t extraout_x1;
    char *pcVar5;
    char *pcVar6;
    char *pcVar7;
    char *pcVar8;
    uint32_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar10;
    int64_t iVar11;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iVar1 = arg1 + 0x170;
    iStack_48 = *(iVar11 + 0x5e0);
    _raw_write_lock_irq(iVar1);
    if ((*(arg1 + 0x17c) & 0x7de) != 0) {
        pcVar10 = *(arg1 + 0x268);
        iVar11 = *(arg1 + 0x18);
        uStack_4c = 0;
        __cfi_slowpath_diag(0x67f4bcfe73f7260,pcVar10,0x8000aa0);
        iVar4 = (*pcVar10)(arg1,iVar11 + 0x48,&uStack_4c);
        pcVar10 = *(arg1 + 0x268);
        uVar9 = uStack_4c >> 8;
        iVar11 = *(arg1 + 0x20);
        uStack_4c = 0;
        uVar9 = uVar9 & 0xff;
        if (iVar4 != 0) {
            uVar9 = 0x100;
        }
        __cfi_slowpath_diag(0x67f4bcfe73f7260,pcVar10,0x8000aa0);
        iVar4 = (*pcVar10)(arg1,iVar11 + 0x28,&uStack_4c);
        iVar11 = *(*(arg1 + 8) + 0xc0);
        uVar2 = uStack_4c;
        if (iVar4 != 0) {
            uVar2 = 10;
        }
        if ((iVar11 != 0) && (*(iVar11 + 0x18) == 0)) {
            if (*(arg1 + 0x184) < 10) {
                pcVar5 = *(reloc..str.llvm.39275123862783422 + *(arg1 + 0x184) * 8);
            }
            else {
                pcVar5 = "INVALID_EE";
            }
            uVar3 = *(arg1 + 0x188);
            pcVar6 = "INVALID_STATE";
            if ((uVar3 < 0x100) && (0xf6 < uVar3 - 8)) {
                pcVar6 = *(reloc..str.14.llvm.39275123862783422 + uVar3 * 8);
            }
            if (uVar2 < 10) {
                pcVar7 = *(reloc..str.llvm.39275123862783422 + uVar2 * 8);
            }
            else {
                pcVar7 = "INVALID_EE";
            }
            pcVar8 = "INVALID_STATE";
            if ((uVar9 < 0x100) && (0xf6 < uVar9 - 8)) {
                pcVar8 = *(reloc..str.14.llvm.39275123862783422 + uVar9 * 8);
            }
            ipc_log_string(*(iVar11 + 0x20),"[D][%s] local ee: %s state: %s device ee: %s state: %s\n",
                           "mhi_intvec_threaded_handler",pcVar5,pcVar6,pcVar7,pcVar8);
        }
        if (uVar9 == 0xff) {
            iVar11 = *(*(arg1 + 8) + 0xc0);
            if ((iVar11 != 0) && (*(iVar11 + 0x18) == 0)) {
                ipc_log_string(*(iVar11 + 0x20),"[D][%s] System error detected\n","mhi_intvec_threaded_handler");
            }
            iVar4 = sym.mhi_tryset_pm_state(arg1,0x100);
            _raw_write_unlock_irq(iVar1);
            if ((iVar4 == 0x100) && (uVar2 != *(arg1 + 0x184))) {
                if ((uVar2 - 5 < 2) || (uVar2 == 0)) {
                    pcVar10 = *(arg1 + 0x220);
                    __cfi_slowpath_diag(0x6ba83359ac4765be,pcVar10,0x8000b80);
                    (*pcVar10)(arg1,7);
                    *(arg1 + 0x184) = uVar2;
                }
                else if (uVar2 == 3) {
                    if ((*(arg1 + 0x88) != 0) && (*(arg1 + 0x188) - 2U < 5)) {
                        sym.mhi_report_error(arg1);
                        pcVar10 = *(arg1 + 0x220);
                        __cfi_slowpath_diag(0x6ba83359ac4765be,pcVar10,0x8000b60);
                        (*pcVar10)(arg1,4);
                        *(arg1 + 0x184) = 3;
                        __wake_up(arg1 + 0x208,3,0,0);
                    }
                    goto code_r0x08009630;
                }
                __wake_up(arg1 + 0x208,3,0,0);
                sym.mhi_pm_sys_err_handler(arg1);
            }
            goto code_r0x08009630;
        }
    }
    _raw_write_unlock_irq(iVar1);
code_r0x08009630:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_48) {
        return 1;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.mhi_intvec_handler;
    __wake_up(extraout_x1 + 0x208,3,0,0);
    return 2;
}


// ===== sym.mhi_intvec_handler @ 0x080096c8 (size 56) =====

ulong sym.mhi_intvec_handler(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __wake_up(arg1 + 0x208,3,0,0);
    return 2;
}


// ===== sym.mhi_process_ctrl_ev_ring @ 0x08009700 (size 2152) =====

int sym.mhi_process_ctrl_ev_ring(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int iVar1;
    ulong uVar2;
    uint32_t uVar3;
    char *pcVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong *in_x18;
    int64_t iVar9;
    int iVar10;
    uint64_t *puVar11;
    uint64_t *arg2_00;
    code *pcVar12;
    int64_t iVar13;
    int64_t iVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar10 = -5;
    if ((*(arg1 + 0x17c) != 1) && (*(arg1 + 0x17c) < 0x80)) {
        uVar5 = *(arg2 + 0x30);
        iVar7 = *(arg1 + 8);
        puVar11 = **(arg1 + 0x138) + *(arg2 + 0x10) * 0x2c + 0x1c;
        uVar6 = *puVar11;
        if ((uVar6 < uVar5) || (*(arg2 + 0x68) + uVar5 <= uVar6)) {
            iVar9 = *(iVar7 + 0xc0);
            _dev_err(iVar7 + 0x28,"[E][%s] Event ring rp points outside of the event ring\n",
                     "mhi_process_ctrl_ev_ring");
joined_r0x08009edc:
            if ((iVar9 != 0) && (*(iVar9 + 0x18) < 3)) {
                ipc_log_string(*(iVar9 + 0x20),"[E][%s] Event ring rp points outside of the event ring\n",
                               "mhi_process_ctrl_ev_ring");
            }
            iVar10 = -5;
        }
        else {
            iVar13 = *(arg2 + 0x48);
            arg2_00 = *(arg2 + 0x50);
            iVar9 = arg1 + 0x170;
            if (arg2_00 != iVar13 + (uVar6 - uVar5)) {
                iVar10 = 1;
                iVar8 = iVar7;
                do {
                    iVar8 = *(iVar8 + 0xc0);
                    uVar3 = *(arg2_00 + 0xc);
                    if ((iVar8 != 0) && (*(iVar8 + 0x18) == 0)) {
                        ipc_log_string(*(iVar8 + 0x20),"[D][%s] RP:0x%llx Processing Event:0x%llx 0x%08x 0x%08x\n",
                                       "mhi_process_ctrl_ev_ring",(uVar5 - iVar13) + arg2_00,*arg2_00,arg2_00[1],
                                       uVar3);
                    }
                    uVar3 = uVar3 >> 0x10 & 0xff;
    //switch table (49 cases) at 0x800480c
                    switch(uVar3) {
                    case 0x20:
                        uVar5 = arg2_00[1];
                        iVar13 = *(*(arg1 + 8) + 0xc0);
                        uVar6 = uVar5 >> 0x18;
                        if ((iVar13 != 0) && (*(iVar13 + 0x18) == 0)) {
                            pcVar4 = "INVALID_STATE";
                            if (0xf6 < uVar6 - 8) {
                                pcVar4 = *(reloc..str.14.llvm.39275123862783422 + uVar6 * 8);
                            }
                            ipc_log_string(*(iVar13 + 0x20),"[D][%s] State change event to state: %s\n",
                                           "mhi_process_ctrl_ev_ring",pcVar4);
                        }
                        uVar3 = uVar5 >> 0x18;
                        if (uVar3 < 5) {
                            if (uVar3 == 2) {
                                sym.mhi_pm_m0_transition(arg1);
                            }
                            else if (uVar3 == 3) {
                                sym.mhi_pm_m1_transition(arg1);
                            }
                            else {
code_r0x08009d60:
                                iVar13 = *(*(arg1 + 8) + 0xc0);
                                pcVar4 = "INVALID_STATE";
                                if (0xf6 < uVar6 - 8) {
                                    pcVar4 = *(reloc..str.14.llvm.39275123862783422 + uVar6 * 8);
                                }
                                _dev_err(iVar7 + 0x28,"[E][%s] Invalid state: %s\n","mhi_process_ctrl_ev_ring",pcVar4
                                        );
                                if ((iVar13 != 0) && (*(iVar13 + 0x18) < 3)) {
                                    ipc_log_string(*(iVar13 + 0x20),"[E][%s] Invalid state: %s\n",
                                                   "mhi_process_ctrl_ev_ring",pcVar4);
                                }
                            }
                        }
                        else if (uVar3 == 5) {
                            sym.mhi_pm_m3_transition(arg1);
                        }
                        else {
                            if (uVar3 != 0xff) goto code_r0x08009d60;
                            iVar13 = *(*(arg1 + 8) + 0xc0);
                            if ((iVar13 != 0) && (*(iVar13 + 0x18) == 0)) {
                                ipc_log_string(*(iVar13 + 0x20),"[D][%s] System error detected\n",
                                               "mhi_process_ctrl_ev_ring");
                            }
                            _raw_write_lock_irq(iVar9);
                            iVar1 = sym.mhi_tryset_pm_state(arg1,0x100);
                            _raw_write_unlock_irq(iVar9);
                            if (iVar1 == 0x100) {
                                sym.mhi_pm_sys_err_handler(arg1);
                            }
                        }
                        break;
                    case 0x21:
                        iVar8 = *(arg1 + 0x130);
                        uVar5 = *arg2_00;
                        iVar13 = *(arg1 + 8);
                        uVar6 = *(iVar8 + 8);
                        if ((uVar5 < uVar6) || (*(iVar8 + 0x40) + uVar6 <= uVar5)) {
                            iVar8 = *(iVar13 + 0xc0);
                            _dev_err(iVar13 + 0x28,"[E][%s] Event element points outside of the cmd ring\n",
                                     "mhi_process_cmd_completion");
                            if ((iVar8 != 0) && (*(iVar8 + 0x18) < 3)) {
                                ipc_log_string(*(iVar8 + 0x20),"[E][%s] Event element points outside of the cmd ring\n"
                                               ,"mhi_process_cmd_completion");
                            }
                        }
                        else {
                            iVar14 = *(iVar8 + 0x20) + (uVar5 - uVar6);
                            if (iVar14 != *(iVar8 + 0x28)) {
                                panic("Out of order cmd completion: 0x%llx. Expected: 0x%llx\n");
                                goto code_r0x08009f44;
                            }
                            uVar3 = *(iVar14 + 0xc);
                            if ((uVar3 & 0xff0000) == 0x490000) {
                                sym.mhi_misc_cmd_completion(arg1,0x49,*(arg2_00 + 0xb));
                            }
                            else {
                                uVar3 = uVar3 >> 0x18;
                                uVar5 = uVar3;
                                if ((uVar3 < *(arg1 + 0xb8)) && (*(*(arg1 + 0x98) + uVar5 * 0x198 + 0x189) != '\0')) {
                                    iVar13 = *(arg1 + 0x98) + uVar5 * 0x198;
                                    _raw_write_lock_bh(iVar13 + 0x170);
                                    *(iVar13 + 0x108) = *(arg2_00 + 0xb);
                                    complete(iVar13 + 0x150);
                                    _raw_write_unlock_bh(iVar13 + 0x170);
                                }
                                else {
                                    iVar14 = *(iVar13 + 0xc0);
                                    _dev_err(iVar13 + 0x28,"[E][%s] Completion packet for invalid channel ID: %d\n",
                                             "mhi_process_cmd_completion",uVar3);
                                    if ((iVar14 != 0) && (*(iVar14 + 0x18) < 3)) {
                                        ipc_log_string(*(iVar14 + 0x20),
                                                       "[E][%s] Completion packet for invalid channel ID: %d\n",
                                                       "mhi_process_cmd_completion",uVar5);
                                    }
                                }
                            }
                            uVar5 = *(iVar8 + 0x28) + *(iVar8 + 0x38);
                            if (*(iVar8 + 0x20) + *(iVar8 + 0x40) <= uVar5) {
                                uVar5 = *(iVar8 + 0x20);
                            }
                            *(iVar8 + 0x28) = uVar5;
                            DataMemoryBarrier(2,2);
                        }
                        break;
                    case 0x22:
                        uVar3 = *(arg2_00 + 0xc) >> 0x18;
                        if (*(arg1 + 0xb8) <= uVar3) {
    //WARNING: Does not return
                            pcVar12 = SoftwareBreakpoint(0x800,0x8009e28);
                            (*pcVar12)();
                        }
                        if ((uVar3 < *(arg1 + 0xb8)) && (*(*(arg1 + 0x98) + uVar3 * 0x198 + 0x189) != '\0')) {
                            sym.parse_xfer_event(arg1,arg2_00,*(arg1 + 0x98) + uVar3 * 0x198);
                        }
                        break;
                    default:
                        iVar13 = *(*(arg1 + 8) + 0xc0);
                        _dev_err(iVar7 + 0x28,"[E][%s] Unhandled event type: %d\n","mhi_process_ctrl_ev_ring",uVar3);
                        if ((iVar13 != 0) && (*(iVar13 + 0x18) < 3)) {
                            uVar2 = *(iVar13 + 0x20);
                            pcVar4 = "[E][%s] Unhandled event type: %d\n";
code_r0x08009d08:
                            ipc_log_string(uVar2,pcVar4,"mhi_process_ctrl_ev_ring",uVar3);
                        }
                        break;
                    case 0x40:
                        uVar3 = arg2_00[1];
                        iVar13 = *(*(arg1 + 8) + 0xc0);
                        if ((iVar13 != 0) && (*(iVar13 + 0x18) == 0)) {
                            pcVar4 = "INVALID_EE";
                            if (uVar3 >> 0x19 < 5) {
                                pcVar4 = *(reloc..str.llvm.39275123862783422 + (uVar3 >> 0x18) * 8);
                            }
                            ipc_log_string(*(iVar13 + 0x20),"[D][%s] Received EE event: %s\n",
                                           "mhi_process_ctrl_ev_ring",pcVar4);
                        }
                        iVar13 = 2;
    //switch table (7 cases) at 0x80048d0
                        switch(uVar3 >> 0x18) {
                        case 1:
                            break;
                        case 2:
                        case 4:
                            iVar13 = 3;
                            break;
                        case 3:
                            pcVar12 = *(arg1 + 0x220);
                            __cfi_slowpath_diag(0x6ba83359ac4765be,pcVar12,0x8000bc0);
                            (*pcVar12)(arg1,4);
                            _raw_write_lock_irq(iVar9);
                            *(arg1 + 0x184) = 3;
                            _raw_write_unlock_irq(iVar9);
                            __wake_up(arg1 + 0x208,3,0,0);
                            goto code_r0x08009bdc;
                        default:
                            iVar13 = *(*(arg1 + 8) + 0xc0);
                            _dev_err(iVar7 + 0x28,"[E][%s] Unhandled EE event: 0x%x\n","mhi_process_ctrl_ev_ring",
                                     0x40);
                            if ((iVar13 != 0) && (*(iVar13 + 0x18) < 3)) {
                                uVar2 = *(iVar13 + 0x20);
                                pcVar4 = "[E][%s] Unhandled EE event: 0x%x\n";
                                uVar3 = 0x40;
                                goto code_r0x08009d08;
                            }
                            goto code_r0x08009bdc;
                        case 7:
                            iVar13 = 4;
                        }
                        sym.mhi_queue_state_transition(arg1,iVar13);
                        break;
                    case 0x50:
                        _raw_write_lock_irq(iVar9);
                        *(arg1 + 0x1c0) = *(arg2_00 + 0xf);
                        *(arg1 + 0x1c4) = arg2_00[1];
                        _raw_write_unlock_irq(iVar9);
                        iVar13 = *(*(arg1 + 8) + 0xc0);
                        if ((iVar13 != 0) && (*(iVar13 + 0x18) == 0)) {
                            ipc_log_string(*(iVar13 + 0x20),"[D][%s] Received BW_REQ event\n",
                                           "mhi_process_ctrl_ev_ring");
                        }
                        pcVar12 = *(arg1 + 0x220);
                        __cfi_slowpath_diag(0x6ba83359ac4765be,pcVar12,0x8000ba0);
                        (*pcVar12)(arg1,8);
                    }
code_r0x08009bdc:
                    uVar5 = *(arg2 + 0x58) + *(arg2 + 0x60);
                    *(arg2 + 0x58) = uVar5;
                    if (uVar5 < *(arg2 + 0x48) + *(arg2 + 0x68)) {
                        iVar13 = **(arg2 + 0x38) + *(arg2 + 0x60);
                    }
                    else {
                        iVar13 = *(arg2 + 0x30);
                        *(arg2 + 0x58) = *(arg2 + 0x48);
                    }
                    **(arg2 + 0x38) = iVar13;
                    uVar5 = *(arg2 + 0x50) + *(arg2 + 0x60);
                    if (*(arg2 + 0x48) + *(arg2 + 0x68) <= uVar5) {
                        uVar5 = *(arg2 + 0x48);
                    }
                    *(arg2 + 0x50) = uVar5;
                    DataMemoryBarrier(2,2);
                    uVar6 = *puVar11;
                    uVar5 = *(arg2 + 0x30);
                    if ((uVar6 < uVar5) || (*(arg2 + 0x68) + uVar5 <= uVar6)) {
                        iVar9 = *(*(arg1 + 8) + 0xc0);
                        _dev_err(iVar7 + 0x28,"[E][%s] Event ring rp points outside of the event ring\n",
                                 "mhi_process_ctrl_ev_ring");
                        goto joined_r0x08009edc;
                    }
                    iVar13 = *(arg2 + 0x48);
                    arg2_00 = *(arg2 + 0x50);
                    if (arg2_00 == iVar13 + (uVar6 - uVar5)) goto code_r0x08009e3c;
                    iVar8 = *(arg1 + 8);
                    iVar10 = iVar10 + 1;
                } while( true );
            }
            iVar10 = 0;
code_r0x08009e3c:
            _raw_read_lock_bh(iVar9);
            if ((*(arg1 + 0x180) & *(arg1 + 0x17c)) != 0) {
                arg1 = *(arg2 + 0xa0);
                if (1 < (arg1 + -0x8005ac8 >> 3 | arg1 << 0x3d)) {
code_r0x08009f44:
                    __cfi_slowpath_diag(0xe80f8bb5456f22db,arg1,0x8000ae0);
                }
                (*arg1)(*arg2,arg2 + 0x88,*(arg2 + 0x80),**(arg2 + 0x38));
            }
            _raw_read_unlock_bh(iVar9);
        }
    }
    return iVar10;
}


// ===== sym.parse_xfer_event @ 0x08009f68 (size 1420) =====

void sym.parse_xfer_event(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int *piVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    char cVar5;
    uint32_t uVar6;
    bool bVar7;
    int iVar8;
    int iVar9;
    int64_t iVar10;
    uint64_t uVar11;
    int64_t iVar12;
    uint64_t uVar13;
    ulong *in_x18;
    int64_t iVar14;
    int64_t unaff_x25;
    uint32_t uVar15;
    uint64_t unaff_x26;
    code *unaff_x27;
    code *pcVar16;
    ulong unaff_x30;
    ulong uStack_d0;
    ulong uStack_b8;
    uint64_t uStack_b0;
    int64_t iStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iVar1 = arg3 + 0x170;
    iStack_68 = *(iVar10 + 0x5e0);
    uStack_b0 = 0;
    uStack_b8 = 0;
    uVar6 = *(arg2 + 8) >> 0x18;
    uVar15 = 0xffffffb5;
    if (uVar6 != 3) {
        uVar15 = 0;
    }
    iStack_a8 = uVar15 << 0x20;
    iVar10 = *(arg1 + 8);
    if (uVar6 < 5) {
        _raw_read_lock_bh(iVar1);
        uStack_d0 = 0;
    }
    else {
        uStack_d0 = _raw_write_lock_irqsave();
    }
    if (*(arg3 + 0x104) == 1) {
        if (2 < uVar6 - 2) {
            if (uVar6 == 5) {
                arg2 = arg1 + 0x170;
                *(arg3 + 0xe1) = 1;
                *(arg3 + 400) = *(arg3 + 400) + 1;
                unaff_x25 = _raw_read_lock_irqsave(arg2);
                iVar10 = *(arg3 + 0x98);
                if (iVar10 == *(arg3 + 0x90)) goto code_r0x0800a440;
                if ((*(arg1 + 0x180) & *(arg1 + 0x17c)) == 0) goto code_r0x0800a440;
                if (*(arg3 + 0xd4) == 3) {
                    iVar14 = *(*(arg3 + 0x110) + 0x20);
                    uVar11 = *(iVar14 + 0x90);
                    uVar13 = *(iVar14 + 0x98);
                    if (uVar13 < uVar11) {
                        iVar9 = 0;
                        if (*(iVar14 + 0xa0) != 0) {
                            iVar9 = (uVar11 - uVar13) / *(iVar14 + 0xa0);
                        }
                    }
                    else {
                        uVar4 = *(iVar14 + 0xa0);
                        iVar9 = 0;
                        if (uVar4 != 0) {
                            iVar9 = (uVar11 - *(iVar14 + 0x88)) / uVar4;
                        }
                        iVar8 = 0;
                        if (uVar4 != 0) {
                            iVar8 = ((*(iVar14 + 0x88) + *(iVar14 + 0xa8)) - uVar13) / uVar4;
                        }
                        iVar9 = iVar9 + iVar8;
                    }
                    if (*(arg3 + 0xb0) - (iVar9 + -1) < 8) goto code_r0x0800a440;
                }
                iVar14 = *(*(arg1 + 8) + 0xc0);
                if ((iVar14 != 0) && (*(iVar14 + 0x18) == 0)) {
                    ipc_log_string(*(iVar14 + 0x20),"[D][%s] OOB_MODE chan %d ring doorbell\n","parse_xfer_event",
                                   *(arg3 + 200));
                    iVar10 = *(arg3 + 0x98);
                }
                iVar14 = *(arg3 + 0x88);
                iVar12 = *(arg3 + 0x70);
                DataMemoryBarrier(0,2);
            }
            else {
                if (uVar6 != 6) goto code_r0x0800a4ac;
                arg2 = arg1 + 0x170;
                *(arg3 + 0xe1) = 1;
                unaff_x25 = _raw_read_lock_irqsave(arg2);
                iVar10 = *(arg3 + 0x98);
                if (iVar10 == *(arg3 + 0x90)) goto code_r0x0800a440;
                if ((*(arg1 + 0x180) & *(arg1 + 0x17c)) == 0) goto code_r0x0800a440;
                iVar14 = *(arg3 + 0x88);
                iVar12 = *(arg3 + 0x70);
                DataMemoryBarrier(0,2);
            }
            arg2 = arg1 + 0x170;
            unaff_x26 = (iVar10 - iVar14) + iVar12;
            **(arg3 + 0x78) = unaff_x26;
            unaff_x27 = *(arg3 + 0xf8);
            if (1 < (unaff_x27 + -0x8005ac8 >> 3 | unaff_x27 << 0x3d)) goto code_r0x0800a4b8;
            goto code_r0x0800a42c;
        }
        uVar11 = *arg2;
        uVar13 = *(arg3 + 0x70);
        if ((uVar11 < uVar13) || (*(arg3 + 0xa8) + uVar13 <= uVar11)) {
            iVar14 = *(*(arg1 + 8) + 0xc0);
            _dev_err(iVar10 + 0x28,"[E][%s] Event element points outside of the tre ring\n","parse_xfer_event");
            if ((iVar14 != 0) && (*(iVar14 + 0x18) < 3)) {
                ipc_log_string(*(iVar14 + 0x20),"[E][%s] Event element points outside of the tre ring\n",
                               "parse_xfer_event");
            }
        }
        else {
            uVar4 = *(arg3 + 0x88);
            unaff_x26 = *(arg3 + 0x90);
            uVar13 = uVar4 + (uVar11 - uVar13);
            uVar11 = uVar13 + 0x10;
            if (uVar4 + *(arg3 + 0xa8) <= uVar11) {
                uVar11 = uVar4;
            }
            iStack_a8 = CONCAT44(iStack_a8._4_4_,*(arg3 + 0xd8));
            if (unaff_x26 != uVar11) {
                piVar2 = arg1 + 400;
                do {
                    unaff_x25 = *(arg3 + 0x30);
                    if (unaff_x26 == uVar13) {
                        uVar15 = *(arg2 + 8);
                        cVar5 = *(unaff_x25 + 0x35);
                    }
                    else {
                        uVar15 = *(unaff_x25 + 0x28);
                        cVar5 = *(unaff_x25 + 0x35);
                    }
                    iVar14 = unaff_x25;
                    if (cVar5 == '\0') {
                        pcVar16 = *(arg1 + 0x260);
                        if (1 < (pcVar16 + -0x8005a88 >> 3 | pcVar16 << 0x3d)) {
                            __cfi_slowpath_diag(0xde62c92e026eef8f,pcVar16,0x8000c80);
                        }
                        (*pcVar16)(arg1,unaff_x25);
                        iVar14 = *(arg3 + 0x30);
                    }
                    uVar4 = iVar14 + *(arg3 + 0x40);
                    uVar3 = uVar15 & 0xffff;
                    if (*(unaff_x25 + 0x28) <= (uVar15 & 0xffff)) {
                        uVar3 = *(unaff_x25 + 0x28);
                    }
                    uStack_b0 = uVar3;
                    uStack_b8 = *(unaff_x25 + 0x18);
                    if (*(arg3 + 0x28) + *(arg3 + 0x48) <= uVar4) {
                        uVar4 = *(arg3 + 0x28);
                    }
                    *(arg3 + 0x30) = uVar4;
                    DataMemoryBarrier(2,2);
                    uVar4 = *(arg3 + 0x90) + *(arg3 + 0xa0);
                    if (*(arg3 + 0x88) + *(arg3 + 0xa8) <= uVar4) {
                        uVar4 = *(arg3 + 0x88);
                    }
                    *(arg3 + 0x90) = uVar4;
                    DataMemoryBarrier(2,2);
                    unaff_x26 = *(arg3 + 0x90);
                    _raw_read_unlock_bh(iVar1);
                    unaff_x27 = *(arg3 + 0x118);
                    __cfi_slowpath_diag(0x791a5468d96d0f95,unaff_x27,0x8000ca0);
                    (*unaff_x27)(*(arg3 + 0x110),&uStack_b8);
                    if (*(arg3 + 0xd8) == 1) {
                        Hint_Prefetch(piVar2,2,0,1);
                        do {
                            cVar5 = '\x01';
                            bVar7 = ExclusiveMonitorPass(piVar2,0x10);
                            if (bVar7) {
                                *piVar2 = *piVar2 + -1;
                                cVar5 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar5 != '\0');
                        cVar5 = *(arg3 + 0x18b);
                    }
                    else {
                        cVar5 = *(arg3 + 0x18b);
                    }
                    if (cVar5 != '\0') {
                        uStack_a0 = *(unaff_x25 + 0x18);
                        uStack_78 = *(unaff_x25 + 0x28);
                        uStack_70 = 0;
                        uStack_80 = 0;
                        uStack_98 = 0;
                        uStack_90 = 0;
                        uStack_88 = uStack_a0;
                        iVar9 = sym.mhi_queue(*(arg3 + 0x110),&uStack_a0,*(arg3 + 0xd8),2);
                        if (iVar9 != 0) {
                            unaff_x27 = *(*(arg1 + 8) + 0xc0);
                            _dev_err(iVar10 + 0x28,"[E][%s] Error recycling buffer for chan:%d\n","parse_xfer_event",
                                     *(arg3 + 200));
                            if ((unaff_x27 != NULL) && (*(unaff_x27 + 0x18) < 3)) {
                                ipc_log_string(*(unaff_x27 + 0x20),"[E][%s] Error recycling buffer for chan:%d\n",
                                               "parse_xfer_event",*(arg3 + 200));
                            }
                            kfree(*(unaff_x25 + 0x18));
                        }
                    }
                    _raw_read_lock_bh(iVar1);
                } while (unaff_x26 != uVar11);
            }
        }
    }
    while( true ) {
        if (uVar6 < 5) {
            _raw_read_unlock_bh(iVar1);
        }
        else {
            _raw_write_unlock_irqrestore(iVar1,uStack_d0);
        }
        iVar10 = sp_el0;
        if (*(iVar10 + 0x5e0) == iStack_68) break;
        __stack_chk_fail();
code_r0x0800a4ac:
        panic("Unknown event 0x%x\n");
code_r0x0800a4b8:
        __cfi_slowpath_diag(0xe80f8bb5456f22db,unaff_x27,0x8000b00);
code_r0x0800a42c:
        (*unaff_x27)(arg1,arg3 + 0xe0,*(arg3 + 0xc0),unaff_x26);
code_r0x0800a440:
        _raw_read_unlock_irqrestore(arg2,unaff_x25);
    }
    return;
}


// ===== sym.mhi_process_data_event_ring @ 0x0800a4f4 (size 804) =====

int sym.mhi_process_data_event_ring(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    int iVar7;
    code *pcVar8;
    uint64_t uVar9;
    ulong *arg2_00;
    uint64_t *puVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = -5;
    if ((*(arg1 + 0x17c) != 1) && (*(arg1 + 0x17c) < 0x80)) {
        iVar6 = *(arg1 + 8);
        uVar5 = *(arg2 + 0x30);
        puVar10 = **(arg1 + 0x138) + *(arg2 + 0x10) * 0x2c + 0x1c;
        uVar4 = *puVar10;
        if ((uVar4 < uVar5) || (*(arg2 + 0x68) + uVar5 <= uVar4)) {
            iVar3 = *(iVar6 + 0xc0);
            _dev_err(iVar6 + 0x28,"[E][%s] Event ring rp points outside of the event ring\n",
                     "mhi_process_data_event_ring");
            if (iVar3 != 0) {
code_r0x0800a7c8:
                if (*(iVar3 + 0x18) < 3) {
                    ipc_log_string(*(iVar3 + 0x20),"[E][%s] Event ring rp points outside of the event ring\n",
                                   "mhi_process_data_event_ring");
                }
            }
code_r0x0800a7ec:
            iVar7 = -5;
        }
        else {
            uVar9 = arg3 & 0xffffffff;
            iVar7 = 0;
            if ((arg3 != 0) && (arg2_00 = *(arg2 + 0x50), arg2_00 != *(arg2 + 0x48) + (uVar4 - uVar5))) {
                iVar7 = 1;
                iVar3 = iVar6;
                do {
                    iVar3 = *(iVar3 + 0xc0);
                    uVar1 = *(arg2_00 + 0xc);
                    uVar2 = uVar1;
                    if ((iVar3 != 0) && (*(iVar3 + 0x18) == 0)) {
                        ipc_log_string(*(iVar3 + 0x20),"[D][%s] Processing Event:0x%llx 0x%08x 0x%08x\n",
                                       "mhi_process_data_event_ring",*arg2_00,*(arg2_00 + 1),uVar1);
                        uVar2 = *(arg2_00 + 0xc);
                    }
                    uVar2 = uVar2 >> 0x18;
                    if (*(arg1 + 0xb8) <= uVar2) {
    //WARNING: Does not return
                        pcVar8 = SoftwareBreakpoint(0x800,0x800a6d0);
                        (*pcVar8)();
                    }
                    if ((uVar2 < *(arg1 + 0xb8)) && (iVar3 = *(arg1 + 0x98) + uVar2 * 0x198, *(iVar3 + 0x189) != '\0'))
                    {
                        uVar1 = uVar1 >> 0x10 & 0xff;
                        if (uVar1 == 0x22) {
                            sym.parse_xfer_event(arg1,arg2_00,iVar3);
                        }
                        else {
                            if (uVar1 != 0x28) goto code_r0x0800a630;
                            sym.parse_rsc_event(arg1,arg2_00,iVar3);
                        }
                        uVar9 = uVar9 - 1;
                    }
code_r0x0800a630:
                    uVar4 = *(arg2 + 0x58) + *(arg2 + 0x60);
                    *(arg2 + 0x58) = uVar4;
                    if (uVar4 < *(arg2 + 0x48) + *(arg2 + 0x68)) {
                        iVar3 = **(arg2 + 0x38) + *(arg2 + 0x60);
                    }
                    else {
                        iVar3 = *(arg2 + 0x30);
                        *(arg2 + 0x58) = *(arg2 + 0x48);
                    }
                    **(arg2 + 0x38) = iVar3;
                    uVar4 = *(arg2 + 0x50) + *(arg2 + 0x60);
                    if (*(arg2 + 0x48) + *(arg2 + 0x68) <= uVar4) {
                        uVar4 = *(arg2 + 0x48);
                    }
                    *(arg2 + 0x50) = uVar4;
                    DataMemoryBarrier(2,2);
                    uVar4 = *puVar10;
                    uVar5 = *(arg2 + 0x30);
                    if ((uVar4 < uVar5) || (*(arg2 + 0x68) + uVar5 <= uVar4)) {
                        iVar3 = *(*(arg1 + 8) + 0xc0);
                        _dev_err(iVar6 + 0x28,"[E][%s] Event ring rp points outside of the event ring\n",
                                 "mhi_process_data_event_ring");
                        if (iVar3 == 0) goto code_r0x0800a7ec;
                        goto code_r0x0800a7c8;
                    }
                    arg2_00 = *(arg2 + 0x50);
                    if ((arg2_00 == *(arg2 + 0x48) + (uVar4 - uVar5)) || (uVar9 == 0)) break;
                    iVar3 = *(arg1 + 8);
                    iVar7 = iVar7 + 1;
                } while( true );
            }
            _raw_read_lock_bh(arg1 + 0x170);
            if ((*(arg1 + 0x180) & *(arg1 + 0x17c)) != 0) {
                pcVar8 = *(arg2 + 0xa0);
                if (1 < (pcVar8 + -0x8005ac8 >> 3 | pcVar8 << 0x3d)) {
                    __cfi_slowpath_diag(0xe80f8bb5456f22db,pcVar8,0x8000ae0);
                }
                (*pcVar8)(*arg2,arg2 + 0x88,*(arg2 + 0x80),**(arg2 + 0x38));
            }
            _raw_read_unlock_bh(arg1 + 0x170);
        }
    }
    return iVar7;
}


// ===== sym.parse_rsc_event @ 0x0800a818 (size 548) =====

void sym.parse_rsc_event(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong *puVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar6;
    ulong uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong unaff_x30;
    ulong uStack_60;
    uint64_t uStack_58;
    uint uStack_50;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_48 = *(iVar1 + 0x5e0);
    uVar8 = *arg2;
    uVar5 = uVar8 & 0xffffffff;
    if (*(arg3 + 0x48) <= uVar5) {
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x800,0x800a968);
        (*pcVar6)();
    }
    if (uVar5 < *(arg3 + 0x48)) {
        uStack_4c = 0xffffffb5;
        if (*(arg2 + 8) >> 0x18 != 3) {
            uStack_4c = 0;
        }
        uVar2 = *(arg2 + 8) & 0xffff;
        iVar1 = *(arg3 + 0x28) + uVar5;
        if (*(iVar1 + 0x28) <= uVar2) {
            uVar2 = *(iVar1 + 0x28);
        }
        uStack_58 = uVar2;
        uStack_50 = *(arg3 + 0xd8);
        uStack_60 = *(iVar1 + 0x18);
        _raw_read_lock_bh(arg3 + 0x170);
        if (*(arg3 + 0x104) == 1) {
            if (*(iVar1 + 0x34) == '\0') goto code_r0x0800aa30;
            pcVar6 = *(arg3 + 0x118);
            __cfi_slowpath_diag(0x791a5468d96d0f95,pcVar6,0x8000cc0);
            (*pcVar6)(*(arg3 + 0x110),&uStack_60);
            uVar5 = *(arg3 + 0x90) + *(arg3 + 0xa0);
            if (*(arg3 + 0x88) + *(arg3 + 0xa8) <= uVar5) {
                uVar5 = *(arg3 + 0x88);
            }
            *(arg3 + 0x90) = uVar5;
            DataMemoryBarrier(2,2);
            *(iVar1 + 0x34) = 0;
        }
        _raw_read_unlock_bh(arg3 + 0x170);
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iStack_48) {
            return;
        }
        puVar3 = __stack_chk_fail();
        *extraout_x18 = sym.mhi_ev_task;
        uVar7 = *puVar3;
        uVar4 = _raw_spin_lock_irqsave(puVar3 + 0x20);
        pcVar6 = puVar3[0x21];
        if (3 < (pcVar6 + -0x8005bc0 >> 3 | pcVar6 << 0x3d)) {
            __cfi_slowpath_diag(0xd8f0b986adce1242,pcVar6,0x8000be0);
        }
        (*pcVar6)(uVar7,puVar3,0xffffffff);
        _raw_spin_unlock_irqrestore(puVar3 + 0x20,uVar4);
        return;
    }
    iVar1 = *(arg1 + 8) + 0x28;
    iVar9 = *(*(arg1 + 8) + 0xc0);
    _dev_err(iVar1,"[E][%s] cookie 0x%08x bufring_len %zu","parse_rsc_event",uVar8 & 0xffffffff);
    if ((iVar9 != 0) && (*(iVar9 + 0x18) < 3)) {
        ipc_log_string(*(iVar9 + 0x20),"[E][%s] cookie 0x%08x bufring_len %zu","parse_rsc_event",uVar8 & 0xffffffff,
                       *(arg3 + 0x48));
    }
    iVar9 = *(*(arg1 + 8) + 0xc0);
    _dev_err(iVar1,"[E][%s] Processing Event:0x%llx 0x%08x 0x%08x\n","parse_rsc_event",*arg2,*(arg2 + 8),
             *(arg2 + 0xc));
    if ((iVar9 != 0) && (*(iVar9 + 0x18) < 3)) {
        ipc_log_string(*(iVar9 + 0x20),"[E][%s] Processing Event:0x%llx 0x%08x 0x%08x\n","parse_rsc_event",*arg2,
                       *(arg2 + 8),*(arg2 + 0xc));
    }
    panic("invalid cookie");
code_r0x0800aa30:
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x800,0x800aa34);
    (*pcVar6)();
}


// ===== sym.mhi_ev_task @ 0x0800aa3c (size 180) =====

void sym.mhi_ev_task(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = *arg1;
    uVar1 = _raw_spin_lock_irqsave(arg1 + 0x100);
    pcVar2 = *(arg1 + 0x108);
    if (3 < (pcVar2 + -0x8005bc0 >> 3 | pcVar2 << 0x3d)) {
        __cfi_slowpath_diag(0xd8f0b986adce1242,pcVar2,0x8000be0);
    }
    (*pcVar2)(uVar3,arg1,0xffffffff);
    _raw_spin_unlock_irqrestore(arg1 + 0x100,uVar1);
    return;
}


// ===== sym.mhi_ctrl_ev_task @ 0x0800aaf0 (size 568) =====

void sym.mhi_ctrl_ev_task(int64_t arg1)

{
    int iVar1;
    code *pcVar2;
    code *extraout_x8;
    ulong *in_x18;
    int64_t iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar3 = *arg1;
    if ((*(iVar3 + 0x17c) & 0x7de) != 0) {
        pcVar2 = *(arg1 + 0x108);
        if (3 < (pcVar2 + -0x8005bc0 >> 3 | pcVar2 << 0x3d)) goto code_r0x0800acb4;
        while( true ) {
            iVar1 = (*pcVar2)(iVar3,arg1,0xffffffff);
            if (iVar1 == 0) {
                arg1 = iVar3 + 0x170;
                _raw_write_lock_irq(arg1);
                pcVar2 = *(iVar3 + 0x268);
                iVar4 = *(iVar3 + 0x18);
                uStack_3c = 0;
                __cfi_slowpath_diag(0x67f4bcfe73f7260,pcVar2,0x8000aa0);
                iVar1 = (*pcVar2)(iVar3,iVar4 + 0x48,&uStack_3c);
                if ((iVar1 == 0) && (uStack_3c._1_1_ == -1)) {
                    iVar4 = *(*(iVar3 + 8) + 0xc0);
                    if ((iVar4 != 0) && (*(iVar4 + 0x18) == 0)) {
                        ipc_log_string(*(iVar4 + 0x20),"[D][%s] System error detected\n","mhi_ctrl_ev_task");
                    }
                    iVar1 = sym.mhi_tryset_pm_state(iVar3,0x100);
                    _raw_write_unlock_irq(arg1);
                    if (iVar1 == 0x100) {
                        sym.mhi_pm_sys_err_handler(iVar3);
                    }
                }
                else {
                    _raw_write_unlock_irq(arg1);
                }
            }
code_r0x0800ac80:
            iVar4 = sp_el0;
            if (*(iVar4 + 0x5e0) == iStack_38) break;
            __stack_chk_fail();
            pcVar2 = extraout_x8;
code_r0x0800acb4:
            __cfi_slowpath_diag(0xd8f0b986adce1242,pcVar2,0x8000c00);
        }
        return;
    }
    pm_wakeup_dev_event(*(iVar3 + 8) + 0x28,0,0);
    pcVar2 = *(iVar3 + 0x240);
    if (9 < (pcVar2 + -0x8005c30 >> 3 | pcVar2 << 0x3d)) {
        __cfi_slowpath_diag(0x9d98c101a4fe7fa9,pcVar2,0x8000ce0);
    }
    (*pcVar2)(iVar3);
    arg1 = *(iVar3 + 0x248);
    if (7 < (arg1 + -0x8005c80 >> 3 | arg1 << 0x3d)) {
        __cfi_slowpath_diag(0x95232cda069bc43d,arg1,0x8000d00);
    }
    (*arg1)(iVar3);
    goto code_r0x0800ac80;
}


// ===== sym.mhi_process_ev_work @ 0x0800ad28 (size 296) =====

void sym.mhi_process_ev_work(int64_t arg1)

{
    uint32_t uVar1;
    ulong uVar2;
    char *pcVar3;
    char *pcVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong uVar7;
    code *pcVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(arg1 + -0xd0);
    iVar5 = *(*(iVar6 + 8) + 0xc0);
    if ((iVar5 != 0) && (*(iVar5 + 0x18) == 0)) {
        uVar7 = *(iVar5 + 0x20);
        uVar2 = sym.to_mhi_pm_state_str(*(iVar6 + 0x17c));
        uVar1 = *(iVar6 + 0x188);
        pcVar3 = "INVALID_STATE";
        if ((uVar1 < 0x100) && (0xf6 < uVar1 - 8)) {
            pcVar3 = *(reloc..str.14.llvm.39275123862783422 + uVar1 * 8);
        }
        if (*(iVar6 + 0x184) < 10) {
            pcVar4 = *(reloc..str.llvm.39275123862783422 + *(iVar6 + 0x184) * 8);
        }
        else {
            pcVar4 = "INVALID_EE";
        }
        ipc_log_string(uVar7,"[D][%s] Enter with pm_state:%s MHI_STATE:%s ee:%s\n","mhi_process_ev_work",uVar2,
                       pcVar3,pcVar4);
    }
    if ((*(iVar6 + 0x17c) != 1) && (*(iVar6 + 0x17c) < 0x80)) {
        pcVar8 = *(arg1 + 0x38);
        if (3 < (pcVar8 + -0x8005bc0 >> 3 | pcVar8 << 0x3d)) {
            __cfi_slowpath_diag(0xd8f0b986adce1242,pcVar8,0x8000c20);
        }
        (*pcVar8)(iVar6,arg1 + -0xd0,0xffffffff);
    }
    return;
}


// ===== sym.mhi_queue_skb @ 0x0800ae50 (size 152) =====

ulong sym.mhi_queue_skb(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int *piVar1;
    uint64_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    ulong uVar6;
    int iVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint32_t in_w4;
    int64_t iVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t arg1_00;
    int64_t iVar11;
    code *pcVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_18 = *(iVar11 + 0x5e0);
    iVar11 = 0x18;
    if (arg2 != 1) {
        iVar11 = 0x20;
    }
    uStack_20 = 0;
    uStack_40 = 0;
    uStack_50 = *(arg3 + 0xd8);
    uStack_30 = 0;
    uStack_48 = 0;
    iStack_38 = arg3;
    iStack_28 = arg4;
    if (*(*(arg1 + iVar11) + 0x18b) == '\0') {
        uVar8 = arg2;
        uVar9 = in_w4;
        uVar6 = sym.mhi_queue(arg1,&uStack_50,arg2,uVar9);
        arg3 = uVar8;
        arg4 = uVar9;
    }
    else {
        uVar6 = 0xffffffea;
    }
    iVar7 = arg3;
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_18) {
        return uVar6;
    }
    auVar13 = __stack_chk_fail(uVar6);
    *extraout_x18 = sym.mhi_queue;
    arg1_00 = *(auVar13._0_8_ + 0x10);
    iVar11 = 0x18;
    if (iVar7 != 1) {
        iVar11 = 0x20;
    }
    if (0x7f < *(arg1_00 + 0x17c)) {
        return 0xfffffffb;
    }
    iVar11 = *(auVar13._0_8_ + iVar11);
    uVar8 = *(iVar11 + 0x98) + *(iVar11 + 0xa0);
    if (*(iVar11 + 0x88) + *(iVar11 + 0xa8) <= uVar8) {
        uVar8 = *(iVar11 + 0x88);
    }
    if (uVar8 == *(iVar11 + 0x90)) {
        return 0xfffffff5;
    }
    uVar6 = sym.mhi_gen_tre(arg1_00,iVar11,auVar13._8_8_,arg4);
    if (uVar6 != 0) {
        return uVar6;
    }
    pcVar12 = *(arg1_00 + 0x250);
    if (pcVar12 != NULL) {
        if (7 < (pcVar12 + -0x8005c80 >> 3 | pcVar12 << 0x3d)) {
            __cfi_slowpath_diag(0x95232cda069bc43d,pcVar12,0x8000d20);
        }
        (*pcVar12)(arg1_00);
    }
    uVar6 = _raw_read_lock_irqsave(arg1_00 + 0x170);
    if ((*(arg1_00 + 0x17c) & 0x30) != 0) {
        pm_wakeup_dev_event(*(arg1_00 + 8) + 0x28,0,0);
        pcVar12 = *(arg1_00 + 0x240);
        if (9 < (pcVar12 + -0x8005c30 >> 3 | pcVar12 << 0x3d)) {
            __cfi_slowpath_diag(0x9d98c101a4fe7fa9,pcVar12,0x8000ce0);
        }
        (*pcVar12)(arg1_00);
        pcVar12 = *(arg1_00 + 0x248);
        if (7 < (pcVar12 + -0x8005c80 >> 3 | pcVar12 << 0x3d)) {
            __cfi_slowpath_diag(0x95232cda069bc43d,pcVar12,0x8000d00);
        }
        (*pcVar12)(arg1_00);
    }
    pcVar12 = *(arg1_00 + 0x238);
    if (7 < (pcVar12 + -0x8005c80 >> 3 | pcVar12 << 0x3d)) {
        __cfi_slowpath_diag(0x95232cda069bc43d,pcVar12,0x8000d40);
    }
    (*pcVar12)(arg1_00);
    if (*(iVar11 + 0xd8) == 1) {
        piVar1 = arg1_00 + 400;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
    }
    if ((*(arg1_00 + 0x180) & *(arg1_00 + 0x17c)) != 0) {
        if (*(iVar11 + 0xd4) == 3) {
            iVar10 = *(*(iVar11 + 0x110) + 0x20);
            uVar8 = *(iVar10 + 0x90);
            uVar9 = *(iVar10 + 0x98);
            if (uVar9 < uVar8) {
                iVar7 = 0;
                if (*(iVar10 + 0xa0) != 0) {
                    iVar7 = (uVar8 - uVar9) / *(iVar10 + 0xa0);
                }
            }
            else {
                uVar2 = *(iVar10 + 0xa0);
                iVar7 = 0;
                if (uVar2 != 0) {
                    iVar7 = (uVar8 - *(iVar10 + 0x88)) / uVar2;
                }
                iVar5 = 0;
                if (uVar2 != 0) {
                    iVar5 = ((*(iVar10 + 0x88) + *(iVar10 + 0xa8)) - uVar9) / uVar2;
                }
                iVar7 = iVar7 + iVar5;
            }
            if (*(iVar11 + 0xb0) - (iVar7 + -1) < 8) goto code_r0x0800b100;
        }
        DataMemoryBarrier(0,2);
        iVar10 = (*(iVar11 + 0x98) - *(iVar11 + 0x88)) + *(iVar11 + 0x70);
        **(iVar11 + 0x78) = iVar10;
        pcVar12 = *(iVar11 + 0xf8);
        if (1 < (pcVar12 + -0x8005ac8 >> 3 | pcVar12 << 0x3d)) {
            __cfi_slowpath_diag(0xe80f8bb5456f22db,pcVar12,0x8000b00);
        }
        (*pcVar12)(arg1_00,iVar11 + 0xe0,*(iVar11 + 0xc0),iVar10);
    }
code_r0x0800b100:
    _raw_read_unlock_irqrestore(arg1_00 + 0x170,uVar6);
    return 0;
}


// ===== sym.mhi_queue @ 0x0800aee8 (size 844) =====

ulong sym.mhi_queue(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    int *piVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    char cVar5;
    bool bVar6;
    int iVar7;
    int iVar8;
    ulong uVar9;
    int64_t iVar10;
    ulong *in_x18;
    int64_t arg1_00;
    int64_t iVar11;
    code *pcVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x10);
    iVar11 = 0x18;
    if (arg3 != 1) {
        iVar11 = 0x20;
    }
    if (0x7f < *(arg1_00 + 0x17c)) {
        return 0xfffffffb;
    }
    iVar11 = *(arg1 + iVar11);
    uVar2 = *(iVar11 + 0x98) + *(iVar11 + 0xa0);
    if (*(iVar11 + 0x88) + *(iVar11 + 0xa8) <= uVar2) {
        uVar2 = *(iVar11 + 0x88);
    }
    if (uVar2 == *(iVar11 + 0x90)) {
        return 0xfffffff5;
    }
    uVar9 = sym.mhi_gen_tre(arg1_00,iVar11,arg2,arg4);
    if (uVar9 != 0) {
        return uVar9;
    }
    pcVar12 = *(arg1_00 + 0x250);
    if (pcVar12 != NULL) {
        if (7 < (pcVar12 + -0x8005c80 >> 3 | pcVar12 << 0x3d)) {
            __cfi_slowpath_diag(0x95232cda069bc43d,pcVar12,0x8000d20);
        }
        (*pcVar12)(arg1_00);
    }
    uVar9 = _raw_read_lock_irqsave(arg1_00 + 0x170);
    if ((*(arg1_00 + 0x17c) & 0x30) != 0) {
        pm_wakeup_dev_event(*(arg1_00 + 8) + 0x28,0,0);
        pcVar12 = *(arg1_00 + 0x240);
        if (9 < (pcVar12 + -0x8005c30 >> 3 | pcVar12 << 0x3d)) {
            __cfi_slowpath_diag(0x9d98c101a4fe7fa9,pcVar12,0x8000ce0);
        }
        (*pcVar12)(arg1_00);
        pcVar12 = *(arg1_00 + 0x248);
        if (7 < (pcVar12 + -0x8005c80 >> 3 | pcVar12 << 0x3d)) {
            __cfi_slowpath_diag(0x95232cda069bc43d,pcVar12,0x8000d00);
        }
        (*pcVar12)(arg1_00);
    }
    pcVar12 = *(arg1_00 + 0x238);
    if (7 < (pcVar12 + -0x8005c80 >> 3 | pcVar12 << 0x3d)) {
        __cfi_slowpath_diag(0x95232cda069bc43d,pcVar12,0x8000d40);
    }
    (*pcVar12)(arg1_00);
    if (*(iVar11 + 0xd8) == 1) {
        piVar1 = arg1_00 + 400;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
                *piVar1 = *piVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
    }
    if ((*(arg1_00 + 0x180) & *(arg1_00 + 0x17c)) != 0) {
        if (*(iVar11 + 0xd4) == 3) {
            iVar10 = *(*(iVar11 + 0x110) + 0x20);
            uVar2 = *(iVar10 + 0x90);
            uVar4 = *(iVar10 + 0x98);
            if (uVar4 < uVar2) {
                iVar8 = 0;
                if (*(iVar10 + 0xa0) != 0) {
                    iVar8 = (uVar2 - uVar4) / *(iVar10 + 0xa0);
                }
            }
            else {
                uVar3 = *(iVar10 + 0xa0);
                iVar8 = 0;
                if (uVar3 != 0) {
                    iVar8 = (uVar2 - *(iVar10 + 0x88)) / uVar3;
                }
                iVar7 = 0;
                if (uVar3 != 0) {
                    iVar7 = ((*(iVar10 + 0x88) + *(iVar10 + 0xa8)) - uVar4) / uVar3;
                }
                iVar8 = iVar8 + iVar7;
            }
            if (*(iVar11 + 0xb0) - (iVar8 + -1) < 8) goto code_r0x0800b100;
        }
        DataMemoryBarrier(0,2);
        iVar10 = (*(iVar11 + 0x98) - *(iVar11 + 0x88)) + *(iVar11 + 0x70);
        **(iVar11 + 0x78) = iVar10;
        pcVar12 = *(iVar11 + 0xf8);
        if (1 < (pcVar12 + -0x8005ac8 >> 3 | pcVar12 << 0x3d)) {
            __cfi_slowpath_diag(0xe80f8bb5456f22db,pcVar12,0x8000b00);
        }
        (*pcVar12)(arg1_00,iVar11 + 0xe0,*(iVar11 + 0xc0),iVar10);
    }
code_r0x0800b100:
    _raw_read_unlock_irqrestore(arg1_00 + 0x170,uVar9);
    return 0;
}


// ===== sym.mhi_queue_dma @ 0x0800b234 (size 160) =====

uint64_t sym.mhi_queue_dma(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *puVar5;
    uint32_t uVar6;
    uint64_t arg4_00;
    uint64_t in_x4;
    uint32_t uVar7;
    uint64_t *puVar8;
    code *pcVar9;
    int64_t iVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar11 [16];
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_18 = *(iVar10 + 0x5e0);
    iVar10 = 0x18;
    if (arg2 != 1) {
        iVar10 = 0x20;
    }
    uStack_30 = *(arg3 + 0x10);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_20 = 0x10000000000;
    iStack_38 = arg3;
    iStack_28 = arg4;
    if (*(*(arg1 + iVar10) + 0x18b) == '\0') {
        puVar5 = arg2;
        arg4_00 = in_x4 & 0xffffffff;
        uVar3 = sym.mhi_queue(arg1,&uStack_50,arg2,arg4_00);
        arg3 = puVar5;
        arg4 = arg4_00;
    }
    else {
        uVar3 = 0xffffffea;
    }
    uVar6 = arg4;
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_18) {
        return uVar3;
    }
    auVar11 = __stack_chk_fail(uVar3);
    iVar4 = auVar11._8_8_;
    iVar10 = auVar11._0_8_;
    *extraout_x18 = sym.mhi_gen_tre;
    _raw_write_lock_bh(iVar4 + 0x170);
    puVar5 = *(iVar4 + 0x38);
    if (*(puVar5 + 0x34) != '\0') {
    //WARNING: Does not return
        pcVar9 = SoftwareBreakpoint(0x800,0x800b4c4);
        (*pcVar9)();
    }
    *(puVar5 + 0x35) = *(arg3 + 0x35);
    if (*(arg3 + 0x35) == '\0') {
        *puVar5 = *arg3;
    }
    else {
        puVar5[4] = *(arg3 + 0x20);
    }
    puVar5[3] = *(arg3 + 0x18);
    puVar5[2] = *(iVar4 + 0x98);
    *(puVar5 + 6) = *(iVar4 + 0xd8);
    puVar5[5] = *(arg3 + 0x28);
    if (*(arg3 + 0x35) == '\0') {
        pcVar9 = *(iVar10 + 600);
        if (1 < (pcVar9 + -0x8005c00 >> 3 | pcVar9 << 0x3d)) {
            __cfi_slowpath_diag(0x88c9a015f85fcdb,pcVar9,0x8000c40);
        }
        uVar2 = (*pcVar9)(iVar10,puVar5);
        if (uVar2 != 0) goto code_r0x0800b494;
    }
    puVar8 = *(iVar4 + 0x98);
    if (*(iVar4 + 0xd4) == 3) {
        uVar2 = 0x80000;
        *(puVar5 + 0x34) = 1;
        *puVar8 = puVar5[4] | puVar5[5] << 0x30;
        uVar7 = *(iVar4 + 0x38) - *(iVar4 + 0x28);
    }
    else {
        iVar1 = *(iVar4 + 0xd0);
        *puVar8 = puVar5[4];
        uVar2 = 0x20000;
        if (iVar1 != 0) {
            uVar2 = 0x20400;
        }
        uVar7 = *(arg3 + 0x28);
        uVar2 = uVar6 >> 2 & 1 | (uVar6 & 3) << 8 | uVar2;
    }
    *(puVar8 + 1) = uVar7;
    *(puVar8 + 0xc) = uVar2;
    iVar10 = *(*(iVar10 + 8) + 0xc0);
    if ((iVar10 != 0) && (*(iVar10 + 0x18) == 0)) {
        ipc_log_string(*(iVar10 + 0x20),"[D][%s] Chan: %d WP: 0x%llx TRE: 0x%llx 0x%08x 0x%08x\n","mhi_gen_tre",
                       *(iVar4 + 200),puVar8 + (*(iVar4 + 0x70) - *(iVar4 + 0x88)));
    }
    uVar2 = 0;
    uVar3 = *(iVar4 + 0x98) + *(iVar4 + 0xa0);
    if (*(iVar4 + 0x88) + *(iVar4 + 0xa8) <= uVar3) {
        uVar3 = *(iVar4 + 0x88);
    }
    *(iVar4 + 0x98) = uVar3;
    DataMemoryBarrier(2,2);
    uVar3 = *(iVar4 + 0x38) + *(iVar4 + 0x40);
    if (*(iVar4 + 0x28) + *(iVar4 + 0x48) <= uVar3) {
        uVar3 = *(iVar4 + 0x28);
    }
    *(iVar4 + 0x38) = uVar3;
    DataMemoryBarrier(2,2);
code_r0x0800b494:
    _raw_write_unlock_bh(iVar4 + 0x170);
    return uVar2;
}


// ===== sym.mhi_gen_tre @ 0x0800b2d4 (size 544) =====

int sym.mhi_gen_tre(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint64_t *puVar5;
    code *pcVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *puVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_write_lock_bh(arg2 + 0x170);
    puVar8 = *(arg2 + 0x38);
    if (*(puVar8 + 0x34) != '\0') {
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x800,0x800b4c4);
        (*pcVar6)();
    }
    *(puVar8 + 0x35) = *(arg3 + 0x35);
    if (*(arg3 + 0x35) == '\0') {
        *puVar8 = *arg3;
    }
    else {
        puVar8[4] = *(arg3 + 0x20);
    }
    puVar8[3] = *(arg3 + 0x18);
    puVar8[2] = *(arg2 + 0x98);
    *(puVar8 + 6) = *(arg2 + 0xd8);
    puVar8[5] = *(arg3 + 0x28);
    if (*(arg3 + 0x35) == '\0') {
        pcVar6 = *(arg1 + 600);
        if (1 < (pcVar6 + -0x8005c00 >> 3 | pcVar6 << 0x3d)) {
            __cfi_slowpath_diag(0x88c9a015f85fcdb,pcVar6,0x8000c40);
        }
        iVar2 = (*pcVar6)(arg1,puVar8);
        if (iVar2 != 0) goto code_r0x0800b494;
    }
    puVar5 = *(arg2 + 0x98);
    if (*(arg2 + 0xd4) == 3) {
        uVar4 = 0x80000;
        *(puVar8 + 0x34) = 1;
        *puVar5 = puVar8[4] | puVar8[5] << 0x30;
        uVar3 = *(arg2 + 0x38) - *(arg2 + 0x28);
    }
    else {
        iVar2 = *(arg2 + 0xd0);
        *puVar5 = puVar8[4];
        uVar4 = 0x20000;
        if (iVar2 != 0) {
            uVar4 = 0x20400;
        }
        uVar3 = *(arg3 + 0x28);
        uVar4 = arg4 >> 2 & 1 | (arg4 & 3) << 8 | uVar4;
    }
    *(puVar5 + 1) = uVar3;
    *(puVar5 + 0xc) = uVar4;
    iVar7 = *(*(arg1 + 8) + 0xc0);
    if ((iVar7 != 0) && (*(iVar7 + 0x18) == 0)) {
        ipc_log_string(*(iVar7 + 0x20),"[D][%s] Chan: %d WP: 0x%llx TRE: 0x%llx 0x%08x 0x%08x\n","mhi_gen_tre",
                       *(arg2 + 200),puVar5 + (*(arg2 + 0x70) - *(arg2 + 0x88)));
    }
    iVar2 = 0;
    uVar1 = *(arg2 + 0x98) + *(arg2 + 0xa0);
    if (*(arg2 + 0x88) + *(arg2 + 0xa8) <= uVar1) {
        uVar1 = *(arg2 + 0x88);
    }
    *(arg2 + 0x98) = uVar1;
    DataMemoryBarrier(2,2);
    uVar1 = *(arg2 + 0x38) + *(arg2 + 0x40);
    if (*(arg2 + 0x28) + *(arg2 + 0x48) <= uVar1) {
        uVar1 = *(arg2 + 0x28);
    }
    *(arg2 + 0x38) = uVar1;
    DataMemoryBarrier(2,2);
code_r0x0800b494:
    _raw_write_unlock_bh(arg2 + 0x170);
    return iVar2;
}


// ===== sym.mhi_queue_buf @ 0x0800b4f4 (size 112) =====

uint64_t sym.mhi_queue_buf(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint32_t in_w4;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auVar3 [12];
    int64_t aiStack_50 [4];
    ulong uStack_30;
    int64_t iStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_18 = *(iVar2 + 0x5e0);
    uStack_20 = 0;
    aiStack_50[1] = 0;
    aiStack_50[2] = 0;
    uStack_30 = 0;
    aiStack_50[0] = arg3;
    aiStack_50[3] = arg3;
    iStack_28 = arg4;
    uVar1 = sym.mhi_queue(arg1,aiStack_50,arg2,in_w4);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_18) {
        return uVar1;
    }
    auVar3 = __stack_chk_fail();
    iVar2 = 0x18;
    if (auVar3._8_4_ != 1) {
        iVar2 = 0x20;
    }
    iVar2 = *(auVar3._0_8_ + iVar2);
    uVar1 = *(iVar2 + 0x98) + *(iVar2 + 0xa0);
    if (*(iVar2 + 0x88) + *(iVar2 + 0xa8) <= uVar1) {
        uVar1 = *(iVar2 + 0x88);
    }
    return uVar1 == *(iVar2 + 0x90);
}


// ===== sym.mhi_queue_is_full @ 0x0800b564 (size 68) =====

bool sym.mhi_queue_is_full(int64_t arg1,uint32_t arg2)

{
    uint64_t uVar1;
    int64_t iVar2;
    
    iVar2 = 0x18;
    if (arg2 != 1) {
        iVar2 = 0x20;
    }
    iVar2 = *(arg1 + iVar2);
    uVar1 = *(iVar2 + 0x98) + *(iVar2 + 0xa0);
    if (*(iVar2 + 0x88) + *(iVar2 + 0xa8) <= uVar1) {
        uVar1 = *(iVar2 + 0x88);
    }
    return uVar1 == *(iVar2 + 0x90);
}


// ===== sym.mhi_send_cmd @ 0x0800b5a8 (size 592) =====

uint sym.mhi_send_cmd(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *arg3_00;
    int iVar3;
    int iVar4;
    int iVar5;
    uint32_t uVar6;
    ulong *in_x18;
    uint uVar7;
    int64_t iVar8;
    uint32_t uVar9;
    int64_t iVar10;
    int64_t iVar11;
    code *pcVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = arg3;
    iVar10 = *(arg1 + 0x130);
    if (arg2 == 0) {
        uVar9 = 0;
    }
    else {
        uVar9 = *(arg2 + 200) << 0x18;
    }
    iVar11 = *(arg1 + 8);
    _raw_spin_lock_bh(iVar10 + 0x60);
    puVar2 = *(iVar10 + 0x28);
    arg3_00 = *(iVar10 + 0x30);
    if (arg3_00 < puVar2) {
        iVar5 = 0;
        if (*(iVar10 + 0x38) != 0) {
            iVar5 = (puVar2 - arg3_00) / *(iVar10 + 0x38);
        }
    }
    else {
        uVar1 = *(iVar10 + 0x38);
        iVar5 = 0;
        if (uVar1 != 0) {
            iVar5 = (puVar2 - *(iVar10 + 0x20)) / uVar1;
        }
        iVar3 = 0;
        if (uVar1 != 0) {
            iVar3 = ((*(iVar10 + 0x20) + *(iVar10 + 0x40)) - arg3_00) / uVar1;
        }
        iVar5 = iVar5 + iVar3;
    }
    if (iVar5 == 1) {
        uVar7 = 0xfffffff4;
        goto code_r0x0800b780;
    }
    if (iVar4 < 0x12) {
        if (iVar4 == 0x10) {
            uVar9 = uVar9 | 0x100000;
code_r0x0800b6a4:
            *arg3_00 = 0;
            *(arg3_00 + 1) = 0;
            *(arg3_00 + 0xc) = uVar9;
        }
        else {
            if (iVar4 == 0x11) {
                uVar6 = 0x110000;
                goto code_r0x0800b6a0;
            }
code_r0x0800b7ac:
            iVar8 = *(*(arg1 + 8) + 0xc0);
            _dev_err(iVar11 + 0x28,"[E][%s] Command not supported\n","mhi_send_cmd");
            if ((iVar8 != 0) && (*(iVar8 + 0x18) < 3)) {
                ipc_log_string(*(iVar8 + 0x20),"[E][%s] Command not supported\n","mhi_send_cmd");
            }
        }
    }
    else {
        if (iVar4 == 0x12) {
            uVar6 = 0x120000;
code_r0x0800b6a0:
            uVar9 = uVar9 | uVar6;
            goto code_r0x0800b6a4;
        }
        if (iVar4 != 0x49) goto code_r0x0800b7ac;
        sym.mhi_misc_cmd_configure(arg1,0x49,arg3_00,arg3_00 + 1);
    }
    uVar1 = *(iVar10 + 0x30) + *(iVar10 + 0x38);
    if (*(iVar10 + 0x20) + *(iVar10 + 0x40) <= uVar1) {
        uVar1 = *(iVar10 + 0x20);
    }
    *(iVar10 + 0x30) = uVar1;
    DataMemoryBarrier(2,2);
    _raw_read_lock_bh(arg1 + 0x170);
    if ((*(arg1 + 0x180) & *(arg1 + 0x17c)) != 0) {
        uVar1 = (*(iVar10 + 0x30) - *(iVar10 + 0x20)) + *(iVar10 + 8);
        **(iVar10 + 0x10) = uVar1;
        pcVar12 = *(arg1 + 0x270);
        iVar11 = *(iVar10 + 0x58);
        __cfi_slowpath_diag(0xcc1f7c1a9c27c280,pcVar12,0x8000ac0);
        (*pcVar12)(arg1,iVar11 + 4,uVar1 >> 0x20);
        pcVar12 = *(arg1 + 0x270);
        __cfi_slowpath_diag(0xcc1f7c1a9c27c280,pcVar12,0x8000ac0);
        (*pcVar12)(arg1,iVar11,uVar1 & 0xffffffff);
    }
    _raw_read_unlock_bh(arg1 + 0x170);
    uVar7 = 0;
code_r0x0800b780:
    _raw_spin_unlock_bh(iVar10 + 0x60);
    return uVar7;
}


// ===== sym.mhi_prepare_channel @ 0x0800b7f8 (size 840) =====

uint64_t sym.mhi_prepare_channel(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    char *in_x3;
    code *pcVar5;
    code *extraout_x8;
    ulong *in_x18;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t unaff_x23;
    int iVar8;
    uint64_t uVar9;
    ulong unaff_x30;
    int64_t aiStack_90 [8];
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    aiStack_90[7] = *(iVar6 + 0x5e0);
    uVar3 = *(arg1 + 0x184);
    if ((*(arg2 + 0x100) >> (uVar3 & 0x3f) & 1) == 0) {
        iVar6 = *(*(arg1 + 8) + 0xc0);
        if (uVar3 < 10) {
            in_x3 = *(reloc..str.llvm.39275123862783422 + uVar3 * 8);
        }
        else {
            in_x3 = "INVALID_EE";
        }
        _dev_err(*(arg2 + 0x110) + 0x28,"[E][%s] Current EE: %s Required EE Mask: 0x%x\n","mhi_prepare_channel",in_x3
                );
        if ((iVar6 != 0) && (*(iVar6 + 0x18) < 3)) {
            if (*(arg1 + 0x184) < 10) {
                in_x3 = *(reloc..str.llvm.39275123862783422 + *(arg1 + 0x184) * 8);
            }
            else {
                in_x3 = "INVALID_EE";
            }
            ipc_log_string(*(iVar6 + 0x20),"[E][%s] Current EE: %s Required EE Mask: 0x%x\n","mhi_prepare_channel",
                           in_x3,*(arg2 + 0x100));
        }
        uVar7 = 0xffffff95;
        goto code_r0x0800bacc;
    }
    iVar6 = arg2 + 0x120;
    unaff_x23 = arg3 & 0xffffffff;
    mutex_lock(iVar6);
    if (*(arg2 + 0x18a) == '\0') {
        uVar3 = sym.mhi_init_chan_ctxt(arg1,arg2);
        uVar7 = uVar3;
        if (uVar3 == 0) goto code_r0x0800b858;
    }
    else {
code_r0x0800b858:
        uVar3 = sym.mhi_update_channel_state(arg1,arg2,2);
        if (uVar3 == 0) {
            if (*(arg2 + 0xd8) == 2) {
                *(arg2 + 0x18b) = arg3 & 1;
                if ((arg3 & 1U) == 0) goto code_r0x0800b9f8;
            }
            else if (*(arg2 + 0x18b) == '\0') goto code_r0x0800b9f8;
            uVar7 = *(arg2 + 0x90);
            uVar1 = *(arg2 + 0x98);
            if (uVar1 < uVar7) {
                uVar9 = 0;
                if (*(arg2 + 0xa0) != 0) {
                    uVar9 = (uVar7 - uVar1) / *(arg2 + 0xa0);
                }
                uVar9 = uVar9 - 1;
                iVar8 = uVar9;
            }
            else {
                uVar9 = *(arg2 + 0xa0);
                uVar2 = 0;
                if (uVar9 != 0) {
                    uVar2 = (uVar7 - *(arg2 + 0x88)) / uVar9;
                }
                uVar7 = 0;
                if (uVar9 != 0) {
                    uVar7 = ((*(arg2 + 0x88) + *(arg2 + 0xa8)) - uVar1) / uVar9;
                }
                uVar9 = uVar2 + uVar7 + 0xffffffff;
                iVar8 = uVar9;
            }
            if (iVar8 != 0) {
                unaff_x23 = *(arg1 + 0x280);
                do {
                    aiStack_90[5] = 0;
                    aiStack_90[6] = 0;
                    aiStack_90[3] = 0;
                    aiStack_90[4] = 0;
                    aiStack_90[1] = 0;
                    aiStack_90[2] = 0;
                    iVar4 = __kmalloc(unaff_x23,0xcc0);
                    if (iVar4 == 0) {
                        uVar7 = 0xfffffff4;
code_r0x0800ba3c:
                        mutex_unlock(iVar6);
                        sym.mhi_unprepare_channel(arg1,arg2);
                        goto code_r0x0800bacc;
                    }
                    in_x3 = 0x2;
                    aiStack_90[0] = iVar4;
                    aiStack_90[3] = iVar4;
                    aiStack_90[5] = unaff_x23;
                    uVar3 = sym.mhi_gen_tre(arg1,arg2,aiStack_90,2);
                    if (uVar3 != 0) {
                        uVar7 = uVar3;
                        kfree(iVar4);
                        goto code_r0x0800ba3c;
                    }
                    uVar3 = uVar9 - 1;
                    uVar9 = uVar3;
                } while (uVar3 != 0);
            }
            uVar7 = arg1 + 0x170;
            _raw_read_lock_bh(uVar7);
            if ((*(arg1 + 0x180) & *(arg1 + 0x17c)) == 0) goto code_r0x0800b9f0;
            unaff_x23 = arg2 + 0x170;
            _raw_read_lock_irq(unaff_x23);
            DataMemoryBarrier(0,2);
            in_x3 = (*(arg2 + 0x98) - *(arg2 + 0x88)) + *(arg2 + 0x70);
            **(arg2 + 0x78) = in_x3;
            pcVar5 = *(arg2 + 0xf8);
            if (1 < (pcVar5 + -0x8005ac8 >> 3 | pcVar5 << 0x3d)) goto code_r0x0800bb0c;
            goto code_r0x0800b9d8;
        }
        uVar7 = uVar3;
        if (*(arg2 + 0x18a) == '\0') {
            sym.mhi_deinit_chan_ctxt(arg1,arg2);
        }
    }
    mutex_unlock(iVar6);
code_r0x0800bacc:
    while (iVar4 = sp_el0, *(iVar4 + 0x5e0) != aiStack_90[7]) {
        __stack_chk_fail();
        pcVar5 = extraout_x8;
code_r0x0800bb0c:
        __cfi_slowpath_diag(0xe80f8bb5456f22db,pcVar5,0x8000b00);
code_r0x0800b9d8:
        (*pcVar5)(arg1,arg2 + 0xe0,*(arg2 + 0xc0),in_x3);
        _raw_read_unlock_irq(unaff_x23);
code_r0x0800b9f0:
        _raw_read_unlock_bh(uVar7);
code_r0x0800b9f8:
        mutex_unlock(iVar6);
        uVar7 = 0;
    }
    return uVar7;
}


// ===== sym.mhi_update_channel_state @ 0x0800bb40 (size 948) =====

int sym.mhi_update_channel_state(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong uVar2;
    uint uVar3;
    int64_t iVar4;
    ulong *in_x18;
    int iVar5;
    uint64_t uVar6;
    code *pcVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = arg3 & 0xffffffff;
    iVar8 = *(arg2 + 0x110);
    iVar4 = *(*(arg1 + 8) + 0xc0);
    iVar5 = arg3;
    if ((iVar4 == 0) || (*(iVar4 + 0x18) != 0)) {
        if (iVar5 != 2) goto code_r0x0800bb88;
code_r0x0800bc18:
        if ((*(arg2 + 0x104) | 4) != 4) goto code_r0x0800bd40;
        iVar4 = 0x12;
code_r0x0800bc2c:
        iVar1 = sym.mhi_device_get_sync(*(arg1 + 8));
        if (iVar1 == 0) {
            pcVar7 = *(arg1 + 0x240);
            if (9 < (pcVar7 + -0x8005c30 >> 3 | pcVar7 << 0x3d)) {
                __cfi_slowpath_diag(0x9d98c101a4fe7fa9,pcVar7,0x8000d60);
            }
            (*pcVar7)(arg1);
            *(arg2 + 0x150) = 0;
            iVar1 = sym.mhi_send_cmd(arg1,arg2,iVar4);
            if (iVar1 == 0) {
                uVar2 = __msecs_to_jiffies(*(arg1 + 0x178));
                iVar1 = wait_for_completion_timeout(arg2 + 0x150,uVar2);
                if ((iVar1 == 0) || (*(arg2 + 0x108) != 1)) {
                    uVar2 = *(obj.mhi_ch_state_type_str + uVar6 * 8);
                    iVar4 = *(*(arg1 + 8) + 0xc0);
                    _dev_err(iVar8 + 0x28,"[E][%s] %d: Failed to receive %s channel command completion\n",
                             "mhi_update_channel_state",*(arg2 + 200),uVar2);
                    if ((iVar4 == 0) || (2 < *(iVar4 + 0x18))) {
                        iVar1 = -5;
                    }
                    else {
                        ipc_log_string(*(iVar4 + 0x20),"[E][%s] %d: Failed to receive %s channel command completion\n"
                                       ,"mhi_update_channel_state",*(arg2 + 200),uVar2);
                        iVar1 = -5;
                    }
                }
                else {
                    if (iVar5 != 0) {
                        _raw_write_lock_irq(arg2 + 0x170);
                        uVar3 = 4;
                        if (iVar5 == 2) {
                            uVar3 = 1;
                        }
                        *(arg2 + 0x104) = uVar3;
                        _raw_write_unlock_irq(arg2 + 0x170);
                    }
                    iVar4 = *(*(arg1 + 8) + 0xc0);
                    if ((iVar4 != 0) && (*(iVar4 + 0x18) == 0)) {
                        ipc_log_string(*(iVar4 + 0x20),"[D][%s] %d: Channel state change to %s successful\n",
                                       "mhi_update_channel_state",*(arg2 + 200),
                                       *(obj.mhi_ch_state_type_str + uVar6 * 8));
                    }
                    iVar1 = 0;
                }
            }
            else {
                uVar2 = *(obj.mhi_ch_state_type_str + uVar6 * 8);
                iVar4 = *(*(arg1 + 8) + 0xc0);
                _dev_err(iVar8 + 0x28,"[E][%s] %d: Failed to send %s channel command\n","mhi_update_channel_state",
                         *(arg2 + 200),uVar2);
                if ((iVar4 != 0) && (*(iVar4 + 0x18) < 3)) {
                    ipc_log_string(*(iVar4 + 0x20),"[E][%s] %d: Failed to send %s channel command\n",
                                   "mhi_update_channel_state",*(arg2 + 200),uVar2);
                }
            }
            pcVar7 = *(arg1 + 0x248);
            if (7 < (pcVar7 + -0x8005c80 >> 3 | pcVar7 << 0x3d)) {
                __cfi_slowpath_diag(0x95232cda069bc43d,pcVar7,0x8000d80);
            }
            (*pcVar7)(arg1);
            sym.mhi_device_put(*(arg1 + 8));
        }
    }
    else {
        ipc_log_string(*(iVar4 + 0x20),"[D][%s] %d: Updating channel state to: %s\n","mhi_update_channel_state",
                       *(arg2 + 200),*(obj.mhi_ch_state_type_str + uVar6 * 8));
        if (iVar5 == 2) goto code_r0x0800bc18;
code_r0x0800bb88:
        if (iVar5 == 1) {
            if (*(arg2 + 0x104) == 1) {
                iVar4 = 0x11;
                goto code_r0x0800bc2c;
            }
        }
        else if (iVar5 == 0) {
            iVar4 = arg2 + 0x170;
            _raw_write_lock_irq(iVar4);
            if ((*(arg2 + 0x104) < 5) && ((1 << (*(arg2 + 0x104) & 0x1f) & 0x1aU) != 0)) {
                *(arg2 + 0x104) = 0;
                _raw_write_unlock_irq(iVar4);
                iVar4 = 0x10;
                goto code_r0x0800bc2c;
            }
            _raw_write_unlock_irq(iVar4);
        }
        else {
            uVar2 = *(obj.mhi_ch_state_type_str + uVar6 * 8);
            iVar4 = *(*(arg1 + 8) + 0xc0);
            _dev_err(iVar8 + 0x28,"[E][%s] %d: Channel state update to %s not allowed\n","mhi_update_channel_state",
                     *(arg2 + 200),uVar2);
            if ((iVar4 != 0) && (*(iVar4 + 0x18) < 3)) {
                ipc_log_string(*(iVar4 + 0x20),"[E][%s] %d: Channel state update to %s not allowed\n",
                               "mhi_update_channel_state",*(arg2 + 200),uVar2);
            }
        }
code_r0x0800bd40:
        iVar1 = -0x16;
    }
    return iVar1;
}


// ===== sym.mhi_unprepare_channel @ 0x0800bef4 (size 392) =====

void sym.mhi_unprepare_channel(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg2 + 0x110);
    mutex_lock(arg2 + 0x120);
    uVar1 = *(arg1 + 0x184);
    if ((*(arg2 + 0x100) >> (uVar1 & 0x3f) & 1) == 0) {
        iVar4 = *(*(arg1 + 8) + 0xc0);
        if ((iVar4 != 0) && (*(iVar4 + 0x18) == 0)) {
            if (uVar1 < 10) {
                pcVar3 = *(reloc..str.llvm.39275123862783422 + uVar1 * 8);
            }
            else {
                pcVar3 = "INVALID_EE";
            }
            ipc_log_string(*(iVar4 + 0x20),"[D][%s] Current EE: %s Required EE Mask: 0x%x\n","mhi_unprepare_channel",
                           pcVar3);
        }
    }
    else {
        iVar2 = sym.mhi_update_channel_state(arg1,arg2,0);
        if (iVar2 != 0) {
            iVar5 = *(*(arg1 + 8) + 0xc0);
            _dev_err(iVar4 + 0x28,"[E][%s] %d: Failed to reset channel, still resetting\n","mhi_unprepare_channel",
                     *(arg2 + 200));
            if ((iVar5 != 0) && (*(iVar5 + 0x18) < 3)) {
                ipc_log_string(*(iVar5 + 0x20),"[E][%s] %d: Failed to reset channel, still resetting\n",
                               "mhi_unprepare_channel",*(arg2 + 200));
            }
        }
    }
    _raw_write_lock_irq(arg2 + 0x170);
    *(arg2 + 0x104) = 0;
    _raw_write_unlock_irq(arg2 + 0x170);
    if (*(arg2 + 0x18a) == '\0') {
        sym.mhi_reset_chan(arg1,arg2);
        sym.mhi_deinit_chan_ctxt(arg1,arg2);
    }
    iVar4 = *(*(arg1 + 8) + 0xc0);
    if ((iVar4 != 0) && (*(iVar4 + 0x18) == 0)) {
        ipc_log_string(*(iVar4 + 0x20),"[D][%s] %d: successfully reset\n","mhi_unprepare_channel",*(arg2 + 200));
    }
    mutex_unlock(arg2 + 0x120);
    return;
}


// ===== sym.mhi_reset_chan @ 0x0800c07c (size 756) =====

void sym.mhi_reset_chan(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    uchar auVar5 [16];
    code *pcVar6;
    int64_t iVar7;
    code *pcVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    int64_t iVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    code *unaff_x19;
    int64_t unaff_x20;
    int64_t unaff_x21;
    code *unaff_x22;
    code *pcVar13;
    code *unaff_x23;
    int *unaff_x24;
    int *piVar14;
    code *unaff_x25;
    code *pcVar15;
    code *unaff_x26;
    uint64_t uVar16;
    int64_t iVar17;
    ulong unaff_x30;
    uchar auVar18 [16];
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    code *pcStack_c0;
    code *pcStack_b8;
    int *piStack_b0;
    code *pcStack_a8;
    code *pcStack_a0;
    int64_t iStack_98;
    int64_t iStack_90;
    code *pcStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    iStack_90 = unaff_x20;
    iStack_98 = unaff_x21;
    if (*(arg2 + 0x18a) != '\0') goto code_r0x0800c330;
    unaff_x19 = arg1 + 0x170;
    uVar2 = *(arg2 + 200);
    unaff_x24 = uVar2;
    _raw_read_lock_bh();
    unaff_x26 = *(arg1 + 8);
    unaff_x25 = *(arg1 + 0x128);
    uVar16 = *(arg2 + 0xcc);
    iVar7 = *(unaff_x26 + 0xc0);
    iVar17 = **(arg1 + 0x138);
    if ((iVar7 != 0) && (*(iVar7 + 0x18) == 0)) {
        ipc_log_string(*(iVar7 + 0x20),"[D][%s] Marking all events for chan: %d as stale\n","mhi_mark_stale_events",
                       unaff_x24);
    }
    unaff_x22 = unaff_x25 + uVar16 * 0x118 + 0x100;
    pcVar6 = _raw_spin_lock_irqsave(unaff_x22);
    uVar10 = *(unaff_x25 + uVar16 * 0x118 + 0x30);
    uVar9 = *(iVar17 + uVar16 * 0x2c + 0x1c);
    if (uVar9 < uVar10) {
code_r0x0800c1c0:
        unaff_x24 = *(*(arg1 + 8) + 0xc0);
        _dev_err(unaff_x26 + 0x28,"[E][%s] Event ring rp points outside of the event ring\n","mhi_mark_stale_events");
        unaff_x25 = pcVar6;
        if ((unaff_x24 != NULL) && (unaff_x24[6] < 3)) {
            ipc_log_string(*(unaff_x24 + 8),"[E][%s] Event ring rp points outside of the event ring\n",
                           "mhi_mark_stale_events");
        }
    }
    else {
        iVar7 = *(unaff_x25 + uVar16 * 0x118 + 0x68);
        if (iVar7 + uVar10 <= uVar9) goto code_r0x0800c1c0;
        iVar11 = *(unaff_x25 + uVar16 * 0x118 + 0x48);
        iVar12 = *(unaff_x25 + uVar16 * 0x118 + 0x50);
        iVar17 = iVar11 + (uVar9 - uVar10);
        if (iVar12 != iVar17) {
            do {
                if ((*(iVar12 + 0xc) & 0xff0000) == 0x220000 && *(iVar12 + 0xc) >> 0x18 == uVar2) {
                    *(iVar12 + 0xc) = uVar2 << 0x18 | 0x510000;
                    iVar11 = *(unaff_x25 + uVar16 * 0x118 + 0x48);
                    iVar7 = *(unaff_x25 + uVar16 * 0x118 + 0x68);
                }
                iVar1 = iVar12 + 0x10;
                iVar12 = iVar11;
                if (iVar1 != iVar11 + iVar7) {
                    iVar12 = iVar1;
                }
            } while (iVar12 != iVar17);
        }
    }
    iVar7 = *(*(arg1 + 8) + 0xc0);
    unaff_x23 = unaff_x19;
    if ((iVar7 != 0) && (*(iVar7 + 0x18) == 0)) {
        ipc_log_string(*(iVar7 + 0x20),"[D][%s] Finished marking events as stale events\n","mhi_mark_stale_events");
        unaff_x23 = pcVar6;
    }
    _raw_spin_unlock_irqrestore(unaff_x22,pcVar6);
    if (*(arg2 + 0xd4) == 3) {
        iVar7 = *(*(arg1 + 8) + 0xc0);
        uStack_70 = 0xffffff9500000000;
        if ((iVar7 != 0) && (*(iVar7 + 0x18) == 0)) {
            ipc_log_string(*(iVar7 + 0x20),"[D][%s] Reset RSC channel\n","mhi_reset_rsc_chan");
        }
        pcVar6 = *(arg2 + 0x28);
        uStack_78 = 0;
        iVar7 = *(arg2 + 0x48);
        if (pcVar6 < pcVar6 + iVar7) {
            arg1 = 0x8000da0;
            unaff_x23 = pcVar6;
            do {
                if (unaff_x23[0x34] != 0x0) {
                    unaff_x22 = *(arg2 + 0x118);
                    uStack_80 = *(unaff_x23 + 0x18);
                    __cfi_slowpath_diag(0x791a5468d96d0f95,unaff_x22,0x8000da0);
                    (*unaff_x22)(*(arg2 + 0x110),&uStack_80);
                    unaff_x23[0x34] = 0x0;
                    pcVar6 = *(arg2 + 0x28);
                    iVar7 = *(arg2 + 0x48);
                }
                unaff_x23 = unaff_x23 + 0x38;
            } while (unaff_x23 < pcVar6 + iVar7);
        }
    }
    else {
        sym.mhi_reset_data_chan(arg1,arg2);
    }
    _raw_read_unlock_bh(unaff_x19);
    iStack_90 = arg2;
    iStack_98 = arg1;
code_r0x0800c330:
    auVar5._8_8_ = unaff_x19;
    auVar5._0_8_ = iStack_90;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return;
    }
    auVar18 = __stack_chk_fail();
    *extraout_x18 = sym.mhi_reset_data_chan;
    pcStack_c8 = sym.mhi_reset_data_chan;
    iVar7 = sp_el0;
    iStack_d8 = *(iVar7 + 0x5e0);
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_e0 = 0xffffff9500000000;
    iVar7 = iStack_98;
    pcVar13 = unaff_x22;
    piVar14 = unaff_x24;
    pcVar15 = unaff_x25;
    pcVar6 = unaff_x26;
    puStack_d0 = &stack0xffffffffffffffa0;
    pcStack_c0 = unaff_x26;
    pcStack_b8 = unaff_x25;
    piStack_b0 = unaff_x24;
    pcStack_a8 = unaff_x23;
    pcStack_a0 = unaff_x22;
    pcStack_88 = unaff_x19;
    if (*(auVar18._8_8_ + 0x90) == *(auVar18._8_8_ + 0x98)) goto code_r0x0800c500;
    piVar14 = auVar18._0_8_ + 400;
    pcVar15 = 0x1;
    pcVar6 = sym.__typeid__ZTSFvP14mhi_controllerP12mhi_buf_infoE_global_addr;
    iVar7 = 0x8000dc0;
    pcVar13 = 0x8000de0;
    do {
        unaff_x23 = *(auVar18._8_8_ + 0x30);
        if (*(auVar18._8_8_ + 0xd8) != 1) {
            if (unaff_x23[0x35] != 0x0) goto code_r0x0800c470;
            goto code_r0x0800c450;
        }
        while( true ) {
            Hint_Prefetch(piVar14,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar14,0x10);
                if (bVar4) {
                    *piVar14 = *piVar14 - pcVar15;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (unaff_x23[0x35] == 0x0) {
code_r0x0800c450:
                pcVar8 = *(auVar18._0_8_ + 0x260);
                if (1 < (pcVar8 - pcVar6 >> 3 | pcVar8 - pcVar6 << 0x3d)) {
                    __cfi_slowpath_diag(0xde62c92e026eef8f,pcVar8,iVar7);
                }
                (*pcVar8)(auVar18._0_8_,unaff_x23);
            }
code_r0x0800c470:
            iVar17 = auVar18._8_8_;
            uVar16 = *(iVar17 + 0x30) + *(iVar17 + 0x40);
            if (*(iVar17 + 0x28) + *(iVar17 + 0x48) <= uVar16) {
                uVar16 = *(iVar17 + 0x28);
            }
            *(iVar17 + 0x30) = uVar16;
            DataMemoryBarrier(2,2);
            uVar16 = *(iVar17 + 0x90) + *(iVar17 + 0xa0);
            if (*(iVar17 + 0x88) + *(iVar17 + 0xa8) <= uVar16) {
                uVar16 = *(iVar17 + 0x88);
            }
            *(iVar17 + 0x90) = uVar16;
            DataMemoryBarrier(2,2);
            pcVar8 = unaff_x23 + 0x18;
            if (*(iVar17 + 0x18b) == '\0') {
                unaff_x23 = *(iVar17 + 0x118);
                uStack_f0 = *pcVar8;
                __cfi_slowpath_diag(0x791a5468d96d0f95,unaff_x23,pcVar13);
                (*unaff_x23)(*(iVar17 + 0x110),&uStack_f0);
            }
            else {
                kfree();
            }
            auVar5 = auVar18;
            if (*(iVar17 + 0x90) != *(iVar17 + 0x98)) break;
code_r0x0800c500:
            iVar17 = sp_el0;
            if (*(iVar17 + 0x5e0) == iStack_d8) {
                return;
            }
            __stack_chk_fail();
            auVar18 = auVar5;
        }
    } while( true );
}


// ===== sym.mhi_reset_data_chan @ 0x0800c370 (size 484) =====

void sym.mhi_reset_data_chan(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    code *pcVar5;
    ulong *in_x18;
    int64_t unaff_x19;
    int64_t unaff_x20;
    ulong unaff_x21;
    ulong unaff_x22;
    code *unaff_x23;
    int *unaff_x24;
    int unaff_w25;
    code *unaff_x26;
    ulong unaff_x30;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_60 = 0xffffff9500000000;
    if (*(arg2 + 0x90) == *(arg2 + 0x98)) goto code_r0x0800c500;
    unaff_x24 = arg1 + 400;
    unaff_w25 = 1;
    unaff_x26 = sym.__typeid__ZTSFvP14mhi_controllerP12mhi_buf_infoE_global_addr;
    unaff_x21 = 0x8000dc0;
    unaff_x22 = 0x8000de0;
    do {
        unaff_x23 = *(arg2 + 0x30);
        if (*(arg2 + 0xd8) != 1) {
            if (unaff_x23[0x35] != 0x0) goto code_r0x0800c470;
            goto code_r0x0800c450;
        }
        while( true ) {
            Hint_Prefetch(unaff_x24,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(unaff_x24,0x10);
                if (bVar3) {
                    *unaff_x24 = *unaff_x24 - unaff_w25;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            if (unaff_x23[0x35] == 0x0) {
code_r0x0800c450:
                pcVar5 = *(arg1 + 0x260);
                if (1 < (pcVar5 - unaff_x26 >> 3 | pcVar5 - unaff_x26 << 0x3d)) {
                    __cfi_slowpath_diag(0xde62c92e026eef8f,pcVar5,unaff_x21);
                }
                (*pcVar5)(arg1,unaff_x23);
            }
code_r0x0800c470:
            uVar1 = *(arg2 + 0x30) + *(arg2 + 0x40);
            if (*(arg2 + 0x28) + *(arg2 + 0x48) <= uVar1) {
                uVar1 = *(arg2 + 0x28);
            }
            *(arg2 + 0x30) = uVar1;
            DataMemoryBarrier(2,2);
            uVar1 = *(arg2 + 0x90) + *(arg2 + 0xa0);
            if (*(arg2 + 0x88) + *(arg2 + 0xa8) <= uVar1) {
                uVar1 = *(arg2 + 0x88);
            }
            *(arg2 + 0x90) = uVar1;
            DataMemoryBarrier(2,2);
            pcVar5 = unaff_x23 + 0x18;
            if (*(arg2 + 0x18b) == '\0') {
                unaff_x23 = *(arg2 + 0x118);
                uStack_70 = *pcVar5;
                __cfi_slowpath_diag(0x791a5468d96d0f95,unaff_x23,unaff_x22);
                (*unaff_x23)(*(arg2 + 0x110),&uStack_70);
            }
            else {
                kfree();
            }
            unaff_x19 = arg2;
            unaff_x20 = arg1;
            if (*(arg2 + 0x90) != *(arg2 + 0x98)) break;
code_r0x0800c500:
            arg1 = unaff_x20;
            arg2 = unaff_x19;
            iVar4 = sp_el0;
            if (*(iVar4 + 0x5e0) == iStack_58) {
                return;
            }
            __stack_chk_fail();
        }
    } while( true );
}


// ===== sym.mhi_prepare_for_transfer @ 0x0800c554 (size 140) =====

int sym.mhi_prepare_for_transfer(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x10);
    if (*(arg1 + 0x18) != 0) {
        iVar1 = sym.mhi_prepare_channel(arg1_00,*(arg1 + 0x18),arg2 & 0xffffffffU);
        if (iVar1 != 0) {
            return iVar1;
        }
    }
    if (*(arg1 + 0x20) == 0) {
        iVar1 = 0;
    }
    else {
        iVar1 = sym.mhi_prepare_channel(arg1_00,*(arg1 + 0x20),arg2 & 0xffffffffU);
        if ((iVar1 != 0) && (*(arg1 + 0x18) != 0)) {
            sym.mhi_unprepare_channel(arg1_00,*(arg1 + 0x18));
        }
    }
    return iVar1;
}


// ===== sym.mhi_unprepare_from_transfer @ 0x0800c5e0 (size 80) =====

void sym.mhi_unprepare_from_transfer(int64_t arg1)

{
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x10);
    if (*(arg1 + 0x20) != 0) {
        sym.mhi_unprepare_channel(arg1_00,*(arg1 + 0x20));
    }
    if (*(arg1 + 0x18) != 0) {
        sym.mhi_unprepare_channel(arg1_00,*(arg1 + 0x18));
    }
    return;
}


// ===== sym.mhi_stop_transfer @ 0x0800c630 (size 40) =====

void sym.mhi_stop_transfer(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.mhi_update_transfer_state(arg1,1);
    return;
}


// ===== sym.mhi_update_transfer_state @ 0x0800c658 (size 176) =====

int sym.mhi_update_transfer_state(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t arg1_00;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x20);
    arg1_00 = *(arg1 + 0x10);
    if (iVar3 != 0) {
        iVar2 = iVar3 + 0x120;
        mutex_lock(iVar2);
        iVar1 = sym.mhi_update_channel_state(arg1_00,iVar3,arg2 & 0xffffffffU);
        if (iVar1 != 0) goto code_r0x0800c6d4;
        mutex_unlock(iVar2);
    }
    iVar3 = *(arg1 + 0x18);
    if (iVar3 == 0) {
        return 0;
    }
    iVar2 = iVar3 + 0x120;
    mutex_lock(iVar2);
    iVar1 = sym.mhi_update_channel_state(arg1_00,iVar3,arg2 & 0xffffffffU);
code_r0x0800c6d4:
    mutex_unlock(iVar2);
    return iVar1;
}


// ===== sym.mhi_start_transfer @ 0x0800c708 (size 40) =====

void sym.mhi_start_transfer(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.mhi_update_transfer_state(arg1,2);
    return;
}


// ===== sym.mhi_poll @ 0x0800c730 (size 212) =====

uint sym.mhi_poll(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint uVar2;
    code *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x10);
    iVar5 = *(iVar4 + 0x128);
    uVar6 = *(*(arg1 + 0x20) + 0xcc);
    iVar7 = iVar5 + uVar6 * 0x118;
    iVar1 = iVar7 + 0x100;
    _raw_spin_lock_bh(iVar1);
    pcVar3 = *(iVar7 + 0x108);
    if (3 < (pcVar3 + -0x8005bc0 >> 3 | pcVar3 << 0x3d)) {
        __cfi_slowpath_diag(0xd8f0b986adce1242,pcVar3,0x8000c60);
    }
    uVar2 = (*pcVar3)(iVar4,iVar5 + uVar6 * 0x118,arg2 & 0xffffffff);
    _raw_spin_unlock_bh(iVar1);
    return uVar2;
}


// ===== sym.mhi_tryset_pm_state @ 0x0800c804 (size 128) =====

uint64_t sym.mhi_tryset_pm_state(uint32_t arg1,uint32_t arg2)

{
    uint64_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    uint64_t uVar4;
    
    uVar2 = *(arg1 + 0x17c);
    uVar4 = uVar2;
    uVar1 = 0x2000000000;
    if (uVar2 != 0) {
        uVar1 = 0x3f00000000 - (LZCOUNT(uVar4) << 0x20);
    }
    if ((uVar1 < 0xb00000001) && (uVar2 == *(obj.dev_state_transitions + (uVar1 >> 0x20) * 8))) {
        if (0x60 < (uVar1 >> 0x1d | 4)) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(1,0x800c884);
            (*pcVar3)();
        }
        if ((*((uVar1 >> 0x20) * 8 + 0x800490c) & arg2) != 0) {
            uVar4 = arg2;
            *(arg1 + 0x17c) = arg2;
        }
    }
    return uVar4;
}


// ===== sym.mhi_set_mhi_state @ 0x0800c884 (size 76) =====

void sym.mhi_set_mhi_state(int64_t arg1,int64_t arg2)

{
    int64_t arg4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        arg4 = 2;
    }
    else {
        arg4 = 0xff00;
    }
    sym.mhi_write_reg_field(arg1,*(arg1 + 0x18),0x38,arg4);
    return;
}


// ===== sym.mhi_ready_state_transition @ 0x0800c8d0 (size 1088) =====

int sym.mhi_ready_state_transition(int64_t arg1)

{
    uint64_t uVar1;
    code *pcVar2;
    int iVar3;
    ulong uVar4;
    ulong uVar5;
    char *pcVar6;
    uint32_t uVar7;
    ulong *in_x18;
    ulong uVar8;
    int64_t iVar9;
    int64_t iVar10;
    int64_t iVar11;
    uint32_t uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar11 = *(arg1 + 8);
    if (*(arg1 + 0x17c) == 0x800) {
        iVar10 = *(iVar11 + 0xc0);
        _dev_err(iVar11 + 0x28,"[E][%s] Device link is not accessible\n","mhi_ready_state_transition");
        if ((iVar10 != 0) && (*(iVar10 + 0x18) < 3)) {
            ipc_log_string(*(iVar10 + 0x20),"[E][%s] Device link is not accessible\n","mhi_ready_state_transition");
            return -5;
        }
code_r0x0800cc58:
        iVar3 = -5;
    }
    else {
        iVar3 = sym.mhi_poll_reg_field(arg1,*(arg1 + 0x18),0x38,2);
        if (iVar3 == 0) {
            iVar3 = sym.mhi_poll_reg_field(arg1,*(arg1 + 0x18),0x48,1);
            iVar10 = *(*(arg1 + 8) + 0xc0);
            if (iVar3 == 0) {
                if ((iVar10 != 0) && (*(iVar10 + 0x18) == 0)) {
                    ipc_log_string(*(iVar10 + 0x20),"[D][%s] Device in READY State\n","mhi_ready_state_transition");
                }
                iVar10 = arg1 + 0x170;
                _raw_write_lock_irq(iVar10);
                uVar7 = *(arg1 + 0x17c);
                uVar1 = 0x2000000000;
                if (uVar7 != 0) {
                    uVar1 = 0x3f00000000 - (LZCOUNT(uVar7) << 0x20);
                }
                if ((uVar1 < 0xb00000001) && (uVar7 == *(obj.dev_state_transitions + (uVar1 >> 0x20) * 8))) {
                    if (0x60 < (uVar1 >> 0x1d | 4)) {
    //WARNING: Does not return
                        pcVar2 = SoftwareBreakpoint(1,0x800cd10);
                        (*pcVar2)();
                    }
                    if ((0xdfcUL >> (uVar1 >> 0x20 & 0x3fU) & 1) != 0) goto code_r0x0800cc60;
                    *(arg1 + 0x17c) = 2;
                    *(arg1 + 0x188) = 1;
                    _raw_write_unlock_irq(iVar10);
                }
                else {
code_r0x0800cc60:
                    *(arg1 + 0x188) = 1;
                    _raw_write_unlock_irq(iVar10);
                    if (uVar7 != 2) {
                        iVar10 = *(*(arg1 + 8) + 0xc0);
                        uVar4 = sym.to_mhi_pm_state_str(2);
                        uVar5 = sym.to_mhi_pm_state_str(uVar7);
                        _dev_err(iVar11 + 0x28,"[E][%s] Error moving to state %s from %s\n",
                                 "mhi_ready_state_transition",uVar4,uVar5);
                        if ((iVar10 != 0) && (*(iVar10 + 0x18) < 3)) {
                            uVar8 = *(iVar10 + 0x20);
                            uVar4 = sym.to_mhi_pm_state_str(2);
                            uVar5 = sym.to_mhi_pm_state_str(uVar7);
                            ipc_log_string(uVar8,"[E][%s] Error moving to state %s from %s\n",
                                           "mhi_ready_state_transition",uVar4,uVar5);
                            return -5;
                        }
                        goto code_r0x0800cc58;
                    }
                }
                _raw_read_lock_bh(iVar10);
                if ((*(arg1 + 0x17c) & 0x7de) == 0) {
                    iVar9 = *(*(arg1 + 8) + 0xc0);
                    _dev_err(iVar11 + 0x28,"[E][%s] Device registers not accessible\n","mhi_ready_state_transition");
                    if ((iVar9 != 0) && (*(iVar9 + 0x18) < 3)) {
                        pcVar6 = "[E][%s] Device registers not accessible\n";
                        goto code_r0x0800cc40;
                    }
                }
                else {
                    iVar3 = sym.mhi_init_mmio(arg1);
                    if (iVar3 == 0) {
                        uVar7 = *(arg1 + 0xbc);
                        if (uVar7 != 0) {
                            uVar12 = 0;
                            iVar11 = *(arg1 + 0x128);
                            do {
                                if ((*(iVar11 + 0x112) == '\0') && (*(iVar11 + 0x110) == (*(arg1 + 0x188) != 1))) {
                                    *(iVar11 + 0x58) = (*(iVar11 + 0x48) + *(iVar11 + 0x68)) - *(iVar11 + 0x60);
                                    **(iVar11 + 0x38) = (*(iVar11 + 0x68) - *(iVar11 + 0x60)) + *(iVar11 + 0x30);
                                    DataMemoryBarrier(2,2);
                                    _raw_spin_lock_irq(iVar11 + 0x100);
                                    sym.mhi_ring_er_db(iVar11);
                                    _raw_spin_unlock_irq(iVar11 + 0x100);
                                    uVar7 = *(arg1 + 0xbc);
                                }
                                uVar12 = uVar12 + 1;
                                iVar11 = iVar11 + 0x118;
                            } while (uVar12 < uVar7);
                        }
                        sym.mhi_write_reg_field(arg1,*(arg1 + 0x18),0x38,0xff00);
                        _raw_read_unlock_bh(iVar10);
                        return 0;
                    }
                    iVar9 = *(*(arg1 + 8) + 0xc0);
                    _dev_err(iVar11 + 0x28,"[E][%s] Error configuring MMIO registers\n","mhi_ready_state_transition");
                    if ((iVar9 != 0) && (*(iVar9 + 0x18) < 3)) {
                        pcVar6 = "[E][%s] Error configuring MMIO registers\n";
code_r0x0800cc40:
                        ipc_log_string(*(iVar9 + 0x20),pcVar6,"mhi_ready_state_transition");
                    }
                }
                _raw_read_unlock_bh(iVar10);
                goto code_r0x0800cc58;
            }
            _dev_err(iVar11 + 0x28,"[E][%s] Device failed to enter MHI Ready\n","mhi_ready_state_transition");
            if (iVar10 == 0) {
                return iVar3;
            }
            if (2 < *(iVar10 + 0x18)) {
                return iVar3;
            }
            uVar4 = *(iVar10 + 0x20);
            pcVar6 = "[E][%s] Device failed to enter MHI Ready\n";
        }
        else {
            iVar10 = *(*(arg1 + 8) + 0xc0);
            _dev_err(iVar11 + 0x28,"[E][%s] Device failed to clear MHI Reset\n","mhi_ready_state_transition");
            if (iVar10 == 0) {
                return iVar3;
            }
            if (2 < *(iVar10 + 0x18)) {
                return iVar3;
            }
            uVar4 = *(iVar10 + 0x20);
            pcVar6 = "[E][%s] Device failed to clear MHI Reset\n";
        }
        ipc_log_string(uVar4,pcVar6,"mhi_ready_state_transition");
    }
    return iVar3;
}


// ===== sym.mhi_pm_m0_transition @ 0x0800cd10 (size 816) =====

ulong sym.mhi_pm_m0_transition(int64_t arg1)

{
    uint64_t uVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    code *pcVar4;
    int64_t iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = arg1 + 0x170;
    iVar3 = *(arg1 + 8);
    _raw_write_lock_irq(iVar2);
    uVar6 = *(arg1 + 0x17c);
    *(arg1 + 0x188) = 2;
    uVar1 = 0x2000000000;
    if (uVar6 != 0) {
        uVar1 = 0x3f00000000 - (LZCOUNT(uVar6) << 0x20);
    }
    if ((uVar1 < 0xb00000001) && (uVar6 == *(obj.dev_state_transitions + (uVar1 >> 0x20) * 8))) {
        if (0x60 < (uVar1 >> 0x1d | 4)) {
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(1,0x800cff8);
            (*pcVar4)();
        }
        if ((0xfb1UL >> (uVar1 >> 0x20 & 0x3fU) & 1) == 0) {
            *(arg1 + 0x17c) = 4;
            _raw_write_unlock_irq(iVar2);
            goto code_r0x0800cdbc;
        }
    }
    _raw_write_unlock_irq(iVar2);
    if (uVar6 != 4) {
        iVar2 = *(*(arg1 + 8) + 0xc0);
        _dev_err(iVar3 + 0x28,"[E][%s] Unable to transition to M0 state\n","mhi_pm_m0_transition");
        if ((iVar2 != 0) && (*(iVar2 + 0x18) < 3)) {
            ipc_log_string(*(iVar2 + 0x20),"[E][%s] Unable to transition to M0 state\n","mhi_pm_m0_transition");
        }
        return 0xfffffffb;
    }
code_r0x0800cdbc:
    *(arg1 + 0x194) = *(arg1 + 0x194) + 1;
    _raw_read_lock_bh(iVar2);
    pcVar4 = *(arg1 + 0x228);
    if (2 < (pcVar4 + -0x8005ad8 >> 3 | pcVar4 << 0x3d)) {
        __cfi_slowpath_diag(0xba8145ef24be26ed,pcVar4,0x8000e00);
    }
    (*pcVar4)(arg1,1);
    if ((*(arg1 + 0x184) < 8) && ((1 << (*(arg1 + 0x184) & 0x1f) & 0x94U) != 0)) {
        uVar6 = *(arg1 + 0xbc);
        iVar3 = *(arg1 + 0x130);
        if (uVar6 != 0) {
            uVar7 = 0;
            iVar5 = *(arg1 + 0x128) + 0x100;
            do {
                if (*(iVar5 + 0x12) == '\0') {
                    _raw_spin_lock_irq(iVar5);
                    sym.mhi_ring_er_db(iVar5 + -0x100);
                    _raw_spin_unlock_irq(iVar5);
                    uVar6 = *(arg1 + 0xbc);
                }
                uVar7 = uVar7 + 1;
                iVar5 = iVar5 + 0x118;
            } while (uVar7 < uVar6);
        }
        _raw_spin_lock_irq(iVar3 + 0x60);
        if (*(iVar3 + 0x28) != *(iVar3 + 0x30)) {
            sym.mhi_ring_cmd_db(arg1,iVar3);
        }
        _raw_spin_unlock_irq(iVar3 + 0x60);
        sym.mhi_misc_dbs_pending(arg1);
    }
    if (*(arg1 + 0xb8) != 0) {
        uVar6 = 0;
        iVar3 = *(arg1 + 0x98);
        do {
            if (*(iVar3 + 0xe0) != '\0') {
                _raw_write_lock_irq(iVar3 + 0x170);
                *(iVar3 + 0xe1) = 1;
                _raw_write_unlock_irq(iVar3 + 0x170);
            }
            _raw_read_lock_irq(iVar3 + 0x170);
            if (((*(iVar3 + 0x88) != 0) && (*(iVar3 + 0x98) != *(iVar3 + 0x90))) && (*(iVar3 + 0x104) == 1)) {
                sym.mhi_ring_chan_db(arg1,iVar3);
            }
            _raw_read_unlock_irq(iVar3 + 0x170);
            uVar6 = uVar6 + 1;
            iVar3 = iVar3 + 0x198;
        } while (uVar6 < *(arg1 + 0xb8));
    }
    pcVar4 = *(arg1 + 0x230);
    if (2 < (pcVar4 + -0x8005ad8 >> 3 | pcVar4 << 0x3d)) {
        __cfi_slowpath_diag(0xba8145ef24be26ed,pcVar4,0x8000e20);
    }
    (*pcVar4)(arg1,0);
    _raw_read_unlock_bh(iVar2);
    __wake_up(arg1 + 0x208,3,0,0);
    return 0;
}


// ===== sym.mhi_pm_m1_transition @ 0x0800d040 (size 580) =====

void sym.mhi_pm_m1_transition(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0x170;
    _raw_write_lock_irq(iVar1);
    uVar3 = *(arg1 + 0x17c);
    uVar2 = 0x2000000000;
    if (uVar3 != 0) {
        uVar2 = 0x3f00000000 - (LZCOUNT(uVar3) << 0x20);
    }
    if ((uVar2 < 0xb00000001) && (uVar3 == *(obj.dev_state_transitions + (uVar2 >> 0x20) * 8))) {
        if (0x60 < (uVar2 >> 0x1d | 4)) {
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(1,0x800d22c);
            (*pcVar5)();
        }
        if ((uVar2 >> 0x20 & 0x1fffffffffffffffU) == 2) {
            *(arg1 + 0x17c) = 8;
            goto code_r0x0800d0d0;
        }
    }
    if (uVar3 != 8) {
        _raw_write_unlock_irq(iVar1);
        return;
    }
code_r0x0800d0d0:
    sym.mhi_write_reg_field(arg1,*(arg1 + 0x18),0x38,0xff00);
    *(arg1 + 0x188) = 4;
    _raw_write_unlock_irq(iVar1);
    *(arg1 + 0x198) = *(arg1 + 0x198) + 1;
    __wake_up(arg1 + 0x208,3,0,0);
    if ((*(arg1 + 400) == 0) && (*(arg1 + 0x18c) == 0)) {
        pcVar5 = *(arg1 + 0x220);
        __cfi_slowpath_diag(0x6ba83359ac4765be,pcVar5,0x8000e80);
        (*pcVar5)(arg1,0);
    }
    else {
        iVar4 = *(*(arg1 + 8) + 0xc0);
        if ((iVar4 != 0) && (*(iVar4 + 0x18) == 0)) {
            ipc_log_string(*(iVar4 + 0x20),"[D][%s] Exiting M2, pending_pkts: %d dev_wake: %d\n",
                           "mhi_pm_m1_transition",*(arg1 + 400),*(arg1 + 0x18c));
        }
        _raw_read_lock_bh(iVar1);
        pcVar5 = *(arg1 + 0x228);
        if (2 < (pcVar5 + -0x8005ad8 >> 3 | pcVar5 << 0x3d)) {
            __cfi_slowpath_diag(0xba8145ef24be26ed,pcVar5,0x8000e40);
        }
        (*pcVar5)(arg1,1);
        pcVar5 = *(arg1 + 0x230);
        if (2 < (pcVar5 + -0x8005ad8 >> 3 | pcVar5 << 0x3d)) {
            __cfi_slowpath_diag(0xba8145ef24be26ed,pcVar5,0x8000e60);
        }
        (*pcVar5)(arg1,1);
        _raw_read_unlock_bh(iVar1);
    }
    return;
}


// ===== sym.mhi_pm_m3_transition @ 0x0800d294 (size 324) =====

ulong sym.mhi_pm_m3_transition(int64_t arg1)

{
    uint64_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = arg1 + 0x170;
    iVar5 = *(arg1 + 8);
    _raw_write_lock_irq(iVar4);
    uVar2 = *(arg1 + 0x17c);
    *(arg1 + 0x188) = 5;
    uVar1 = 0x2000000000;
    if (uVar2 != 0) {
        uVar1 = 0x3f00000000 - (LZCOUNT(uVar2) << 0x20);
    }
    if ((uVar1 < 0xb00000001) && (uVar2 == *(obj.dev_state_transitions + (uVar1 >> 0x20) * 8))) {
        if (0x60 < (uVar1 >> 0x1d | 4)) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(1,0x800d3d8);
            (*pcVar3)();
        }
        if ((uVar1 >> 0x20 & 0x1fffffffffffffffU) == 4) {
            *(arg1 + 0x17c) = 0x20;
            _raw_write_unlock_irq(iVar4);
            goto code_r0x0800d338;
        }
    }
    _raw_write_unlock_irq(iVar4);
    if (uVar2 != 0x20) {
        iVar4 = *(*(arg1 + 8) + 0xc0);
        _dev_err(iVar5 + 0x28,"[E][%s] Unable to transition to M3 state\n","mhi_pm_m3_transition");
        if ((iVar4 != 0) && (*(iVar4 + 0x18) < 3)) {
            ipc_log_string(*(iVar4 + 0x20),"[E][%s] Unable to transition to M3 state\n","mhi_pm_m3_transition");
        }
        return 0xfffffffb;
    }
code_r0x0800d338:
    *(arg1 + 0x19c) = *(arg1 + 0x19c) + 1;
    __wake_up(arg1 + 0x208,3,0,0);
    return 0;
}


// ===== sym.mhi_queue_state_transition @ 0x0800d3d8 (size 224) =====

ulong sym.mhi_queue_state_transition(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    piVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xa20,0x18);
    if (piVar2 == NULL) {
        uVar3 = 0xfffffff4;
    }
    else {
        *(piVar2 + 2) = arg2;
        uVar3 = _raw_spin_lock_irqsave(arg1 + 0x1b8);
        puVar5 = *(arg1 + 0x1b0);
        uVar4 = __list_add_valid(piVar2,puVar5,arg1 + 0x1a8);
        if ((uVar4 & 1) != 0) {
            *(arg1 + 0x1b0) = piVar2;
            *piVar2 = arg1 + 0x1a8;
            piVar2[1] = puVar5;
            *puVar5 = piVar2;
        }
        _raw_spin_unlock_irqrestore(arg1 + 0x1b8,uVar3);
        queue_work_on(0x20,*(arg1 + 0x200),arg1 + 0x1d0);
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.mhi_pm_sys_err_handler @ 0x0800d4b8 (size 96) =====

void sym.mhi_pm_sys_err_handler(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x88) == 0) {
        sym.mhi_queue_state_transition(arg1,5);
    }
    else {
        iVar1 = *(*(arg1 + 8) + 0xc0);
        if ((iVar1 != 0) && (*(iVar1 + 0x18) == 0)) {
            ipc_log_string(*(iVar1 + 0x20),"[D][%s] Controller supports RDDM, skip SYS_ERROR\n",
                           "mhi_pm_sys_err_handler");
        }
    }
    return;
}


// ===== sym.mhi_pm_st_worker @ 0x0800d518 (size 4368) =====

void sym.mhi_pm_st_worker(int64_t arg1)

{
    uint uVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    code *pcVar5;
    ulong uVar6;
    code *pcVar7;
    char *pcVar8;
    char *pcVar9;
    int64_t *piVar10;
    int64_t iVar11;
    int64_t iVar12;
    int64_t iVar13;
    ulong *puVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *arg1_00;
    code *pcVar15;
    code *pcVar16;
    int64_t unaff_x23;
    code *unaff_x24;
    ulong uVar17;
    ulong uVar18;
    code *pcVar19;
    code *unaff_x25;
    code *pcVar20;
    uint32_t uVar21;
    ulong unaff_x30;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    int64_t iStack_118;
    uchar *puStack_110;
    ulong uStack_108;
    code *pcStack_100;
    code *pcStack_f8;
    code *pcStack_f0;
    int64_t iStack_e8;
    code *pcStack_e0;
    code *pcStack_d8;
    code *pcStack_d0;
    code *pcStack_c8;
    int64_t iStack_b8;
    ulong *puStack_b0;
    code *pcStack_a8;
    code *pcStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    int iStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    pcVar15 = arg1 + -0x18;
    iStack_68 = *(iVar11 + 0x5e0);
    pcVar16 = &stack0xffffffffffffff58;
    arg1_00 = arg1 + -0x1d0;
    pcStack_a8 = pcVar16;
    pcStack_a0 = pcVar16;
    _raw_spin_lock_irq(pcVar15);
    piVar10 = arg1 + -0x28;
    if (*piVar10 != piVar10) {
        iVar11 = *(arg1 + -0x28);
        pcVar7 = *(arg1 + -0x20);
        *(iVar11 + 8) = pcStack_a0;
        *pcStack_a0 = iVar11;
        *pcVar7 = pcVar16;
        *(arg1 + -0x28) = piVar10;
        *(arg1 + -0x20) = piVar10;
        pcStack_a0 = pcVar7;
    }
    _raw_spin_unlock_irq(pcVar15);
    pcVar7 = arg1;
    pcVar20 = pcStack_a8;
    if (pcStack_a8 != pcVar16) {
        pcVar15 = arg1 + -0x90;
        pcVar7 = arg1 + 0x38;
        puStack_b0 = arg1 + -0x44;
        pcVar16 = arg1 + -0x60;
        unaff_x23 = -0x2152ffffffffff00;
        pcVar19 = pcStack_a8;
        do {
            pcVar20 = *pcVar19;
            uVar4 = __list_del_entry_valid(pcVar19);
            if ((uVar4 & 1) != 0) {
                iVar11 = *pcVar19;
                piVar10 = *(pcVar19 + 8);
                *(iVar11 + 8) = piVar10;
                *piVar10 = iVar11;
            }
            *pcVar19 = 0xdead000000000100;
            *(pcVar19 + 8) = 0xdead000000000122;
            iVar11 = *(*(arg1 + -0x1c8) + 0xc0);
            if ((iVar11 != 0) && (*(iVar11 + 0x18) == 0)) {
                pcVar9 = "INVALID_STATE";
                if (*(pcVar19 + 0x10) < 7) {
                    pcVar9 = *(reloc..str.10.llvm.39275123862783422 + *(pcVar19 + 0x10) * 8);
                }
                ipc_log_string(*(iVar11 + 0x20),"[D][%s] Handling state transition: %s\n","mhi_pm_st_worker",pcVar9);
            }
    //switch table (7 cases) at 0x80048ec
            switch(*(pcVar19 + 0x10)) {
            case 0:
                _raw_write_lock_irq(pcVar16);
                if ((*(arg1 + -0x54) & 0x7de) != 0) {
                    uVar1 = sym.mhi_get_exec_env(arg1_00);
                    *(arg1 + -0x4c) = uVar1;
                }
                _raw_write_unlock_irq(pcVar16);
                sym.mhi_fw_load_handler(arg1_00);
                break;
            case 1:
                sym.mhi_ready_state_transition(arg1_00);
                break;
            case 2:
                _raw_write_lock_irq(pcVar16);
                *(arg1 + -0x4c) = 1;
                _raw_write_unlock_irq(pcVar16);
                sym.mhi_process_sleeping_events(arg1_00);
                sym.mhi_create_devices(arg1_00);
                if (*(arg1 + 0xbe) != '\0') {
                    sym.mhi_download_amss_image(arg1_00);
                }
                break;
            case 3:
                iVar11 = *(*(arg1 + -0x1c8) + 0xc0);
                uStack_98 = CONCAT44(uStack_98._4_4_,*(arg1 + -0x4c));
                if ((iVar11 != 0) && (*(iVar11 + 0x18) == 0)) {
                    ipc_log_string(*(iVar11 + 0x20),"[D][%s] Processing Mission Mode transition\n",
                                   "mhi_pm_mission_mode_transition");
                }
                _raw_write_lock_irq(pcVar16);
                if ((((*(arg1 + -0x54) & 0x7de) == 0) || (uVar2 = sym.mhi_get_exec_env(arg1_00), 7 < uVar2)) ||
                   ((1 << (uVar2 & 0x1f) & 0x94U) == 0)) {
                    *(arg1 + -0x54) = 0x800;
                    _raw_write_unlock_irq(pcVar16);
                    __wake_up(pcVar7,3,0,0);
                }
                else {
                    *(arg1 + -0x4c) = uVar2;
                    _raw_write_unlock_irq(pcVar16);
                    __wake_up(pcVar7,3,0,0);
                    sym.mhi_reset_reg_write_q(arg1_00);
                    device_for_each_child
                              (*(arg1 + -0x1c8) + 0x28,&stack0xffffffffffffff68,sym.mhi_destroy_device.cfi_jt);
                    unaff_x24 = *(arg1 + 0x50);
                    __cfi_slowpath_diag(0x6ba83359ac4765be,unaff_x24,0x8000f60);
                    (*unaff_x24)(arg1_00,5);
                    iVar3 = sym.__mhi_device_get_sync(arg1_00);
                    if (iVar3 == 0) {
                        _raw_read_lock_bh(pcVar16);
                        if (*(arg1 + -0x54) < 0x80) {
                            uVar2 = *(arg1 + -0x114);
                            if (uVar2 != 0) {
                                uVar21 = 0;
                                iVar11 = *(arg1 + -0xa8);
                                do {
                                    if ((*(iVar11 + 0x112) == '\0') && (*(iVar11 + 0x110) == (*(arg1 + -0x48) != 1))) {
                                        *(iVar11 + 0x58) = (*(iVar11 + 0x48) + *(iVar11 + 0x68)) - *(iVar11 + 0x60);
                                        **(iVar11 + 0x38) = (*(iVar11 + 0x68) - *(iVar11 + 0x60)) + *(iVar11 + 0x30);
                                        DataMemoryBarrier(2,2);
                                        _raw_spin_lock_irq(iVar11 + 0x100);
                                        sym.mhi_ring_er_db(iVar11);
                                        _raw_spin_unlock_irq(iVar11 + 0x100);
                                        uVar2 = *(arg1 + -0x114);
                                    }
                                    uVar21 = uVar21 + 1;
                                    iVar11 = iVar11 + 0x118;
                                } while (uVar21 < uVar2);
                            }
                            _raw_read_unlock_bh(pcVar16);
                            sym.mhi_process_sleeping_events(arg1_00);
                            sym.mhi_create_devices(arg1_00);
                            sym.mhi_misc_mission_mode(arg1_00);
                            _raw_read_lock_bh(pcVar16);
                        }
                        unaff_x24 = *(arg1 + 0x60);
                        if (2 < (unaff_x24 + -0x8005ad8 >> 3 | unaff_x24 << 0x3d)) {
                            __cfi_slowpath_diag(0xba8145ef24be26ed,unaff_x24,0x8000f80);
                        }
                        (*unaff_x24)(arg1_00,0);
                        _raw_read_unlock_bh(pcVar16);
                    }
                }
                break;
            case 4:
                _raw_write_lock_irq(pcVar16);
                *(arg1 + -0x4c) = 7;
                _raw_write_unlock_irq(pcVar16);
                sym.mhi_create_devices(arg1_00);
                break;
            case 5:
                iVar12 = *(arg1 + -0x1c8);
                iVar11 = *(iVar12 + 0xc0);
                if ((iVar11 != 0) && (*(iVar11 + 0x18) == 0)) {
                    uVar17 = *(iVar11 + 0x20);
                    uVar6 = sym.to_mhi_pm_state_str(*(arg1 + -0x54));
                    uVar18 = sym.to_mhi_pm_state_str(0x200);
                    ipc_log_string(uVar17,"[D][%s] Transitioning from PM state: %s to: %s\n",
                                   "mhi_pm_sys_error_transition",uVar6,uVar18);
                }
                pcVar5 = *(arg1 + 0x50);
                __cfi_slowpath_diag(0x6ba83359ac4765be,pcVar5,0x8000fa0);
                (*pcVar5)(arg1_00,6);
                mutex_lock(pcVar15);
                _raw_write_lock_irq(pcVar16);
                uVar2 = *(arg1 + -0x54);
                unaff_x24 = uVar2;
                uVar4 = 0x2000000000;
                if (uVar2 != 0) {
                    uVar4 = 0x3f00000000 - (LZCOUNT(unaff_x24) << 0x20);
                }
                if ((uVar4 < 0xb00000001) && (uVar2 == *(obj.dev_state_transitions + (uVar4 >> 0x20) * 8))) {
                    if (0x60 < (uVar4 >> 0x1d | 4)) goto code_r0x0800e60c;
                    if ((uVar4 >> 0x20 & 0x1fffffffffffffffU) != 8) goto code_r0x0800e380;
                    *(arg1 + -0x54) = 0x200;
                    _raw_write_unlock_irq(pcVar16);
code_r0x0800d9e8:
                    *(arg1 + -0x4c) = 8;
                    __wake_up(pcVar7,3,0,0);
                    if ((uVar2 & 0x7de) == 0) {
code_r0x0800dd10:
                        iVar11 = *(*(arg1 + -0x1c8) + 0xc0);
                        if ((iVar11 == 0) || (*(iVar11 + 0x18) != 0)) {
                            iVar3 = *(arg1 + -0x114);
                        }
                        else {
                            ipc_log_string(*(iVar11 + 0x20),
                                           "[D][%s] Waiting for all pending event ring processing to complete\n",
                                           "mhi_pm_sys_error_transition");
                            iVar3 = *(arg1 + -0x114);
                        }
                        if (iVar3 != 0) {
                            uVar2 = 0;
                            unaff_x24 = *(arg1 + -0xa8) + 0xa8;
                            do {
                                if (unaff_x24[0x6a] == 0x0) {
                                    if (*(unaff_x24 + -0x88) == 2) {
                                        cancel_work_sync(unaff_x24 + 0x28);
                                    }
                                    else {
                                        tasklet_kill(unaff_x24);
                                    }
                                }
                                uVar2 = uVar2 + 1;
                                unaff_x24 = unaff_x24 + 0x118;
                            } while (uVar2 < *(arg1 + -0x114));
                        }
                        mutex_unlock(pcVar15);
                        sym.mhi_misc_disable(arg1_00);
                        iVar11 = *(*(arg1 + -0x1c8) + 0xc0);
                        if ((iVar11 != 0) && (*(iVar11 + 0x18) == 0)) {
                            ipc_log_string(*(iVar11 + 0x20),"[D][%s] Waiting for all pending threads to complete\n",
                                           "mhi_pm_sys_error_transition");
                        }
                        __wake_up(pcVar7,3,0,0);
                        iVar11 = *(arg1 + -0x1c8);
                        iVar13 = *(iVar11 + 0xc0);
                        if ((iVar13 != 0) && (*(iVar13 + 0x18) == 0)) {
                            ipc_log_string(*(iVar13 + 0x20),
                                           "[D][%s] Reset all active channels and remove MHI devices\n",
                                           "mhi_pm_sys_error_transition");
                            iVar11 = *(arg1 + -0x1c8);
                        }
                        device_for_each_child(iVar11 + 0x28,0,sym.mhi_destroy_device.cfi_jt);
                        mutex_lock(pcVar15);
                        if (*puStack_b0 != 0) {
    //WARNING: Does not return
                            pcVar16 = SoftwareBreakpoint(0x800,0x800e5a0);
                            (*pcVar16)();
                        }
                        if (*(arg1 + -0x40) != 0) {
    //WARNING: Does not return
                            pcVar16 = SoftwareBreakpoint(0x800,0x800e5a8);
                            (*pcVar16)();
                        }
                        iVar11 = *(*(arg1 + -0x1c8) + 0xc0);
                        if ((iVar11 != 0) && (*(iVar11 + 0x18) == 0)) {
                            ipc_log_string(*(iVar11 + 0x20),"[D][%s] Resetting EV CTXT and CMD CTXT\n",
                                           "mhi_pm_sys_error_transition");
                        }
                        iVar11 = *(arg1 + -0xa0);
                        iVar13 = *(*(arg1 + -0x98) + 0x10);
                        *(iVar11 + 0x28) = *(iVar11 + 0x20);
                        *(iVar11 + 0x30) = *(iVar11 + 0x20);
                        *(iVar13 + 0x1c) = *(iVar13 + 0xc);
                        *(iVar13 + 0x24) = *(iVar13 + 0xc);
                        uVar2 = *(arg1 + -0x114);
                        if (uVar2 != 0) {
                            uVar21 = 0;
                            puVar14 = **(arg1 + -0x98) + 0x1c;
                            pcVar9 = *(arg1 + -0xa8) + 0x112;
                            do {
                                if (*pcVar9 == '\0') {
                                    *(pcVar9 + -0xc2) = *(pcVar9 + -0xca);
                                    *(pcVar9 + -0xba) = *(pcVar9 + -0xca);
                                    *puVar14 = puVar14[-2];
                                    puVar14[1] = puVar14[-2];
                                    uVar2 = *(arg1 + -0x114);
                                }
                                uVar21 = uVar21 + 1;
                                pcVar9 = pcVar9 + 0x118;
                                puVar14 = puVar14 + 0x2c;
                            } while (uVar21 < uVar2);
                        }
                        iVar3 = sym.mhi_get_exec_env(arg1_00);
                        if (((iVar3 == 0) || (iVar3 = sym.mhi_get_exec_env(arg1_00), iVar3 == 5)) ||
                           (iVar3 = sym.mhi_get_exec_env(arg1_00), iVar3 == 6)) {
                            _raw_write_lock_irq(pcVar16);
                            uVar2 = *(arg1 + -0x54);
                            unaff_x24 = uVar2;
                            uVar4 = 0x2000000000;
                            if (uVar2 != 0) {
                                uVar4 = 0x3f00000000 - (LZCOUNT(unaff_x24) << 0x20);
                            }
                            if ((uVar4 < 0xb00000001) && (uVar2 == *(obj.dev_state_transitions + (uVar4 >> 0x20) * 8)))
                            {
                                if (0x60 < (uVar4 >> 0x1d | 4)) {
code_r0x0800e60c:
    //WARNING: Does not return
                                    pcVar16 = SoftwareBreakpoint(1,0x800e610);
                                    (*pcVar16)();
                                }
                                if ((0xdfcUL >> (uVar4 >> 0x20 & 0x3fU) & 1) != 0) goto code_r0x0800e4d8;
                                *(arg1 + -0x54) = 2;
                                _raw_write_unlock_irq(pcVar16);
                            }
                            else {
code_r0x0800e4d8:
                                _raw_write_unlock_irq(pcVar16);
                                if (uVar2 != 2) {
                                    iStack_b8 = *(*(arg1 + -0x1c8) + 0xc0);
                                    uVar6 = sym.to_mhi_pm_state_str(2);
                                    uVar18 = sym.to_mhi_pm_state_str(uVar2);
                                    _dev_err(iVar12 + 0x28,"[E][%s] Error moving to state %s from %s\n",
                                             "mhi_pm_sys_error_transition",uVar6,uVar18);
                                    if ((iStack_b8 != 0) && (*(iStack_b8 + 0x18) < 3)) {
                                        iStack_b8 = *(iStack_b8 + 0x20);
                                        pcVar5 = sym.to_mhi_pm_state_str(2);
                                        uVar6 = sym.to_mhi_pm_state_str(uVar2);
                                        pcVar9 = "[E][%s] Error moving to state %s from %s\n";
                                        iVar11 = iStack_b8;
                                        goto code_r0x0800e584;
                                    }
                                    goto code_r0x0800e204;
                                }
                            }
                            iVar11 = 0;
                        }
                        else {
                            iVar11 = 1;
                        }
                        sym.mhi_queue_state_transition(arg1_00,iVar11);
                    }
                    else {
                        iStack_6c = -1;
                        unaff_x24 = __msecs_to_jiffies(*(arg1 + -0x58));
                        iVar11 = *(*(arg1 + -0x1c8) + 0xc0);
                        if ((iVar11 != 0) && (*(iVar11 + 0x18) == 0)) {
                            ipc_log_string(*(iVar11 + 0x20),"[D][%s] Triggering MHI Reset in device\n",
                                           "mhi_pm_sys_error_transition");
                        }
                        sym.mhi_write_reg_field(arg1_00,*(arg1 + -0x1b8),0x38,2);
                        iVar3 = sym.mhi_read_reg_field(arg1_00,*(arg1 + -0x1b8),0x38,2);
                        pcVar5 = unaff_x24;
                        if ((iVar3 != 0 || iStack_6c == 0) && unaff_x24 == NULL) {
                            pcVar5 = 0x1;
                        }
                        if ((iVar3 == 0 && iStack_6c != 0) && (pcVar5 != NULL)) {
                            uStack_80 = 0;
                            uStack_78 = 0;
                            uStack_90 = 0;
                            uStack_88 = 0;
                            uStack_98 = 0;
                            init_wait_entry(&stack0xffffffffffffff68,0);
                            while( true ) {
                                prepare_to_wait_event(pcVar7,&stack0xffffffffffffff68,2);
                                iVar3 = sym.mhi_read_reg_field(arg1_00,*(arg1 + -0x1b8),0x38,2);
                                pcVar5 = unaff_x24;
                                if ((iVar3 != 0 || iStack_6c == 0) && unaff_x24 == NULL) {
                                    pcVar5 = 0x1;
                                }
                                if ((iVar3 != 0 || iStack_6c == 0) || (pcVar5 == NULL)) break;
                                unaff_x24 = schedule_timeout(pcVar5);
                            }
                            finish_wait(pcVar7,&stack0xffffffffffffff68);
                        }
                        if ((pcVar5 != 0) && (iStack_6c == 0)) {
                            sym.mhi_write_reg(arg1_00,*(arg1 + -0x1b0),0x20,0);
                            goto code_r0x0800dd10;
                        }
                        unaff_x24 = *(*(arg1 + -0x1c8) + 0xc0);
                        _dev_err(iVar12 + 0x28,"[E][%s] Device failed to exit MHI Reset state\n",
                                 "mhi_pm_sys_error_transition");
                        if ((unaff_x24 != NULL) && (*(unaff_x24 + 0x18) < 3)) {
                            ipc_log_string(*(unaff_x24 + 0x20),"[E][%s] Device failed to exit MHI Reset state\n",
                                           "mhi_pm_sys_error_transition");
                        }
                    }
                }
                else {
code_r0x0800e380:
                    _raw_write_unlock_irq(pcVar16);
                    if (uVar2 == 0x200) goto code_r0x0800d9e8;
                    iStack_b8 = *(*(arg1 + -0x1c8) + 0xc0);
                    uVar6 = sym.to_mhi_pm_state_str(uVar2);
                    uVar18 = sym.to_mhi_pm_state_str(0x200);
                    _dev_err(iVar12 + 0x28,"[E][%s] Failed to transition from PM state: %s to: %s\n",
                             "mhi_pm_sys_error_transition",uVar6,uVar18);
                    if ((iStack_b8 == 0) || (2 < *(iStack_b8 + 0x18))) goto code_r0x0800e204;
                    iVar11 = *(iStack_b8 + 0x20);
                    pcVar5 = sym.to_mhi_pm_state_str(uVar2);
                    uVar6 = sym.to_mhi_pm_state_str(0x200);
                    pcVar9 = "[E][%s] Failed to transition from PM state: %s to: %s\n";
                    unaff_x24 = pcVar5;
code_r0x0800e584:
                    ipc_log_string(iVar11,pcVar9,"mhi_pm_sys_error_transition",pcVar5,uVar6);
                }
code_r0x0800e204:
                iVar11 = *(*(arg1 + -0x1c8) + 0xc0);
                if ((iVar11 != 0) && (*(iVar11 + 0x18) == 0)) {
                    unaff_x24 = *(iVar11 + 0x20);
                    uVar6 = sym.to_mhi_pm_state_str(*(arg1 + -0x54));
                    uVar2 = *(arg1 + -0x48);
                    pcVar9 = "INVALID_STATE";
                    if (uVar2 < 0x100) {
                        pcVar9 = "INVALID_STATE";
                        if (0xf6 < uVar2 - 8) {
                            pcVar9 = *(reloc..str.14.llvm.39275123862783422 + uVar2 * 8);
                        }
                    }
                    pcVar8 = "mhi_pm_sys_error_transition";
code_r0x0800d5f0:
                    ipc_log_string(unaff_x24,"[D][%s] Exiting with PM state: %s, MHI state: %s\n",pcVar8,uVar6,
                                   pcVar9);
                }
                goto code_r0x0800d5f4;
            case 6:
                iVar12 = *(arg1 + -0x1c8);
                iVar11 = *(iVar12 + 0xc0);
                if ((iVar11 != 0) && (*(iVar11 + 0x18) == 0)) {
                    uVar18 = *(iVar11 + 0x20);
                    uVar6 = sym.to_mhi_pm_state_str(*(arg1 + -0x54));
                    ipc_log_string(uVar18,"[D][%s] Processing disable transition with PM state: %s\n",
                                   "mhi_pm_disable_transition",uVar6);
                }
                sym.mhi_reset_reg_write_q(arg1_00);
                mutex_lock(pcVar15);
                if ((*(arg1 + -0x54) != 0x800) &&
                   ((*(arg1 + -0x148) == 0 || (iVar3 = sym.mhi_get_exec_env(arg1_00), iVar3 != 3)))) {
                    iVar11 = *(*(arg1 + -0x1c8) + 0xc0);
                    if ((iVar11 != 0) && (*(iVar11 + 0x18) == 0)) {
                        ipc_log_string(*(iVar11 + 0x20),"[D][%s] Triggering MHI Reset in device\n",
                                       "mhi_pm_disable_transition");
                    }
                    sym.mhi_write_reg_field(arg1_00,*(arg1 + -0x1b8),0x38,2);
                    iVar3 = sym.mhi_poll_reg_field(arg1_00,*(arg1 + -0x1b8),0x38,2);
                    if (iVar3 != 0) {
                        iVar11 = *(*(arg1 + -0x1c8) + 0xc0);
                        _dev_err(iVar12 + 0x28,"[E][%s] Device failed to clear MHI Reset\n",
                                 "mhi_pm_disable_transition");
                        if ((iVar11 != 0) && (*(iVar11 + 0x18) < 3)) {
                            ipc_log_string(*(iVar11 + 0x20),"[E][%s] Device failed to clear MHI Reset\n",
                                           "mhi_pm_disable_transition");
                        }
                    }
                    sym.mhi_write_reg(arg1_00,*(arg1 + -0x1b0),0x20,0);
                }
                iVar11 = *(*(arg1 + -0x1c8) + 0xc0);
                if ((iVar11 == 0) || (*(iVar11 + 0x18) != 0)) {
                    iVar3 = *(arg1 + -0x114);
                }
                else {
                    ipc_log_string(*(iVar11 + 0x20),
                                   "[D][%s] Waiting for all pending event ring processing to complete\n",
                                   "mhi_pm_disable_transition");
                    iVar3 = *(arg1 + -0x114);
                }
                if (iVar3 != 0) {
                    uVar2 = 0;
                    iVar11 = *(arg1 + -0xa8);
                    do {
                        if (*(iVar11 + 0x112) == '\0') {
                            free_irq(*(*(arg1 + -0x120) + *(iVar11 + 0x18) * 4),iVar11);
                            if (*(iVar11 + 0x20) == 2) {
                                cancel_work_sync(iVar11 + 0xd0);
                            }
                            else {
                                tasklet_kill(iVar11 + 0xa8);
                            }
                        }
                        uVar2 = uVar2 + 1;
                        iVar11 = iVar11 + 0x118;
                    } while (uVar2 < *(arg1 + -0x114));
                }
                mutex_unlock(pcVar15);
                sym.mhi_misc_disable(arg1_00);
                iVar11 = *(*(arg1 + -0x1c8) + 0xc0);
                if ((iVar11 != 0) && (*(iVar11 + 0x18) == 0)) {
                    ipc_log_string(*(iVar11 + 0x20),"[D][%s] Waiting for all pending threads to complete\n",
                                   "mhi_pm_disable_transition");
                }
                __wake_up(pcVar7,3,0,0);
                iVar11 = *(arg1 + -0x1c8);
                iVar13 = *(iVar11 + 0xc0);
                if ((iVar13 != 0) && (*(iVar13 + 0x18) == 0)) {
                    ipc_log_string(*(iVar13 + 0x20),"[D][%s] Reset all active channels and remove MHI devices\n",
                                   "mhi_pm_disable_transition");
                    iVar11 = *(arg1 + -0x1c8);
                }
                device_for_each_child(iVar11 + 0x28,0,sym.mhi_destroy_device.cfi_jt);
                mutex_lock(pcVar15);
                if (*puStack_b0 != 0) {
    //WARNING: Does not return
                    pcVar16 = SoftwareBreakpoint(0x800,0x800e590);
                    (*pcVar16)();
                }
                if (*(arg1 + -0x40) != 0) {
    //WARNING: Does not return
                    pcVar16 = SoftwareBreakpoint(0x800,0x800e598);
                    (*pcVar16)();
                }
                iVar11 = *(*(arg1 + -0x1c8) + 0xc0);
                if ((iVar11 != 0) && (*(iVar11 + 0x18) == 0)) {
                    ipc_log_string(*(iVar11 + 0x20),"[D][%s] Resetting EV CTXT and CMD CTXT\n",
                                   "mhi_pm_disable_transition");
                }
                iVar11 = *(arg1 + -0xa0);
                iVar13 = *(*(arg1 + -0x98) + 0x10);
                *(iVar11 + 0x28) = *(iVar11 + 0x20);
                *(iVar11 + 0x30) = *(iVar11 + 0x20);
                *(iVar13 + 0x1c) = *(iVar13 + 0xc);
                *(iVar13 + 0x24) = *(iVar13 + 0xc);
                uVar2 = *(arg1 + -0x114);
                if (uVar2 != 0) {
                    uVar21 = 0;
                    puVar14 = **(arg1 + -0x98) + 0x1c;
                    pcVar9 = *(arg1 + -0xa8) + 0x112;
                    do {
                        if (*pcVar9 == '\0') {
                            *(pcVar9 + -0xc2) = *(pcVar9 + -0xca);
                            *(pcVar9 + -0xba) = *(pcVar9 + -0xca);
                            *puVar14 = puVar14[-2];
                            puVar14[1] = puVar14[-2];
                            uVar2 = *(arg1 + -0x114);
                        }
                        uVar21 = uVar21 + 1;
                        pcVar9 = pcVar9 + 0x118;
                        puVar14 = puVar14 + 0x2c;
                    } while (uVar21 < uVar2);
                }
                _raw_write_lock_irq(pcVar16);
                uVar2 = *(arg1 + -0x54);
                unaff_x24 = uVar2;
                uVar4 = 0x2000000000;
                if (uVar2 != 0) {
                    uVar4 = 0x3f00000000 - (LZCOUNT(unaff_x24) << 0x20);
                }
                if ((uVar4 < 0xb00000001) && (uVar2 == *(obj.dev_state_transitions + (uVar4 >> 0x20) * 8))) {
                    if (0x60 < (uVar4 >> 0x1d | 4)) goto code_r0x0800e60c;
                    if ((0x3fdUL >> (uVar4 >> 0x20 & 0x3fU) & 1) != 0) goto code_r0x0800e42c;
                    *(arg1 + -0x54) = 1;
                    _raw_write_unlock_irq(pcVar16);
                }
                else {
code_r0x0800e42c:
                    _raw_write_unlock_irq(pcVar16);
                    if (uVar2 != 1) {
                        iStack_b8 = *(*(arg1 + -0x1c8) + 0xc0);
                        uVar6 = sym.to_mhi_pm_state_str(uVar2);
                        uVar18 = sym.to_mhi_pm_state_str(1);
                        _dev_err(iVar12 + 0x28,"[E][%s] Error moving from PM state: %s to: %s\n",
                                 "mhi_pm_disable_transition",uVar6,uVar18);
                        if ((iStack_b8 != 0) && (*(iStack_b8 + 0x18) < 3)) {
                            uVar18 = *(iStack_b8 + 0x20);
                            unaff_x24 = sym.to_mhi_pm_state_str(uVar2);
                            uVar6 = sym.to_mhi_pm_state_str(1);
                            ipc_log_string(uVar18,"[E][%s] Error moving from PM state: %s to: %s\n",
                                           "mhi_pm_disable_transition",unaff_x24,uVar6);
                        }
                    }
                }
                iVar11 = *(*(arg1 + -0x1c8) + 0xc0);
                if ((iVar11 != 0) && (*(iVar11 + 0x18) == 0)) {
                    unaff_x24 = *(iVar11 + 0x20);
                    uVar6 = sym.to_mhi_pm_state_str(*(arg1 + -0x54));
                    uVar2 = *(arg1 + -0x48);
                    pcVar9 = "INVALID_STATE";
                    if (uVar2 < 0x100) {
                        pcVar9 = "INVALID_STATE";
                        if (0xf6 < uVar2 - 8) {
                            pcVar9 = *(reloc..str.14.llvm.39275123862783422 + uVar2 * 8);
                        }
                    }
                    pcVar8 = "mhi_pm_disable_transition";
                    goto code_r0x0800d5f0;
                }
code_r0x0800d5f4:
                mutex_unlock(pcVar15);
            }
            unaff_x25 = &stack0xffffffffffffff58;
            kfree(pcVar19);
            pcVar19 = pcVar20;
        } while (pcVar20 != unaff_x25);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_68) {
        return;
    }
    pcVar5 = __stack_chk_fail();
    *extraout_x18 = 0x800e614;
    uStack_108 = 0x800e614;
    iVar11 = sp_el0;
    iStack_118 = *(iVar11 + 0x5e0);
    iVar11 = unaff_x23;
    pcVar19 = unaff_x24;
    puStack_110 = &stack0xffffffffffffffa0;
    pcStack_100 = pcVar20;
    pcStack_f8 = unaff_x25;
    pcStack_f0 = unaff_x24;
    iStack_e8 = unaff_x23;
    pcStack_e0 = pcVar16;
    pcStack_d8 = pcVar7;
    pcStack_d0 = pcVar15;
    pcStack_c8 = arg1_00;
    if (*(pcVar5 + 0x17c) != 1) {
        if (0x7f < *(pcVar5 + 0x17c)) goto code_r0x0800e674;
        pcVar19 = pcVar5 + 0x18c;
        iVar11 = *(pcVar5 + 8);
        if (*pcVar19 != 0) goto code_r0x0800e828;
        if (*(pcVar5 + 400) != 0) goto code_r0x0800e828;
        pcVar15 = pcVar5 + 0x170;
        _raw_read_lock_bh(pcVar15);
        pcVar7 = *(pcVar5 + 0x228);
        unaff_x25 = sym.__typeid__ZTSFvP14mhi_controllerbE_global_addr;
        arg1_00 = pcVar5;
        if (2 < (pcVar7 + -0x8005ad8 >> 3 | pcVar7 << 0x3d)) goto code_r0x0800ebd0;
        goto code_r0x0800e6c4;
    }
    uVar6 = 0xffffffea;
code_r0x0800e82c:
    do {
        iVar12 = sp_el0;
        if (*(iVar12 + 0x5e0) == iStack_118) {
            return;
        }
        __stack_chk_fail(uVar6);
        pcVar5 = arg1_00;
code_r0x0800ebd0:
        __cfi_slowpath_diag(0xba8145ef24be26ed,pcVar7,0x8000ea0);
        arg1_00 = pcVar5;
code_r0x0800e6c4:
        (*pcVar7)(arg1_00,0);
        _raw_read_unlock_bh(pcVar15);
        pcVar7 = __msecs_to_jiffies(*(arg1_00 + 0x178));
        if ((*(arg1_00 + 0x188) & 0xfffffffe) == 2) {
            if (pcVar7 == NULL) {
                pcVar7 = 0x1;
            }
        }
        else {
            if (pcVar7 == NULL && 0x7f < *(arg1_00 + 0x17c)) {
                pcVar7 = 0x1;
            }
            if ((*(arg1_00 + 0x17c) < 0x80) && (pcVar7 != NULL)) {
                uStack_128 = 0;
                uStack_120 = 0;
                uStack_138 = 0;
                uStack_130 = 0;
                uStack_140 = 0;
                pcVar7 = __msecs_to_jiffies(*(arg1_00 + 0x178));
                init_wait_entry(&stack0xfffffffffffffec0,0);
                pcVar16 = arg1_00 + 0x208;
                prepare_to_wait_event(pcVar16,&stack0xfffffffffffffec0,2);
                uVar2 = *(arg1_00 + 0x188);
                while ((uVar2 & 0xfffffffe) != 2) {
                    if (pcVar7 == NULL && 0x7f < *(arg1_00 + 0x17c)) {
                        pcVar7 = 0x1;
                    }
                    if ((0x7f < *(arg1_00 + 0x17c)) || (pcVar7 == NULL)) goto code_r0x0800e7b8;
                    pcVar7 = schedule_timeout(pcVar7);
                    prepare_to_wait_event(pcVar16,&stack0xfffffffffffffec0,2);
                    uVar2 = *(arg1_00 + 0x188);
                }
                if (pcVar7 == NULL) {
                    pcVar7 = 0x1;
                }
code_r0x0800e7b8:
                finish_wait(pcVar16,&stack0xfffffffffffffec0);
            }
        }
        _raw_read_lock_bh(pcVar15);
        pcVar16 = *(arg1_00 + 0x230);
        if (2 < (pcVar16 - unaff_x25 >> 3 | pcVar16 - unaff_x25 << 0x3d)) {
            __cfi_slowpath_diag(0xba8145ef24be26ed,pcVar16,0x8000ec0);
        }
        (*pcVar16)(arg1_00,0);
        _raw_read_unlock_bh(pcVar15);
        if ((pcVar7 == 0) || (0x7f < *(arg1_00 + 0x17c))) {
            arg1_00 = *(*(arg1_00 + 8) + 0xc0);
            _dev_err(iVar11 + 0x28,"[E][%s] Could not enter M0/M1 state","mhi_pm_suspend");
            if ((arg1_00 == NULL) || (2 < *(arg1_00 + 0x18))) goto code_r0x0800e674;
            ipc_log_string(*(arg1_00 + 0x20),"[E][%s] Could not enter M0/M1 state","mhi_pm_suspend");
            uVar6 = 0xfffffffb;
            goto code_r0x0800e82c;
        }
        _raw_write_lock_irq(pcVar15);
        if ((*pcVar19 == 0) && (*(arg1_00 + 400) == 0)) {
            iVar12 = *(*(arg1_00 + 8) + 0xc0);
            if ((iVar12 != 0) && (*(iVar12 + 0x18) == 0)) {
                ipc_log_string(*(iVar12 + 0x20),"[D][%s] Allowing M3 transition\n","mhi_pm_suspend");
            }
            iVar3 = sym.mhi_tryset_pm_state(arg1_00,0x10);
            if (iVar3 == 0x10) {
                sym.mhi_write_reg_field(arg1_00,*(arg1_00 + 0x18),0x38,0xff00);
                _raw_write_unlock_irq(pcVar15);
                iVar12 = *(*(arg1_00 + 8) + 0xc0);
                if ((iVar12 != 0) && (*(iVar12 + 0x18) == 0)) {
                    ipc_log_string(*(iVar12 + 0x20),"[D][%s] Waiting for M3 completion\n","mhi_pm_suspend");
                }
                sym.mhi_force_reg_write(arg1_00);
                pcVar7 = __msecs_to_jiffies(*(arg1_00 + 0x178));
                if (*(arg1_00 + 0x188) == 5) {
                    if (pcVar7 == NULL) {
                        pcVar7 = 0x1;
                    }
                }
                else {
                    if (pcVar7 == NULL && 0x7f < *(arg1_00 + 0x17c)) {
                        pcVar7 = 0x1;
                    }
                    if ((*(arg1_00 + 0x17c) < 0x80) && (pcVar7 != NULL)) {
                        uStack_128 = 0;
                        uStack_120 = 0;
                        uStack_138 = 0;
                        uStack_130 = 0;
                        uStack_140 = 0;
                        pcVar7 = __msecs_to_jiffies(*(arg1_00 + 0x178));
                        init_wait_entry(&stack0xfffffffffffffec0,0);
                        pcVar15 = arg1_00 + 0x208;
                        prepare_to_wait_event(pcVar15,&stack0xfffffffffffffec0,2);
                        iVar3 = *(arg1_00 + 0x188);
                        while (iVar3 != 5) {
                            if (pcVar7 == NULL && 0x7f < *(arg1_00 + 0x17c)) {
                                pcVar7 = 0x1;
                            }
                            if ((0x7f < *(arg1_00 + 0x17c)) || (pcVar7 == NULL)) goto code_r0x0800ea20;
                            pcVar7 = schedule_timeout(pcVar7);
                            prepare_to_wait_event(pcVar15,&stack0xfffffffffffffec0,2);
                            iVar3 = *(arg1_00 + 0x188);
                        }
                        if (pcVar7 == NULL) {
                            pcVar7 = 0x1;
                        }
code_r0x0800ea20:
                        finish_wait(pcVar15,&stack0xfffffffffffffec0);
                    }
                }
                if (pcVar7 == 0) {
                    sym.mhi_debug_reg_dump(arg1_00);
                    iVar11 = panic("Timedout waiting for M3 ACK");
                    *extraout_x18_00 = 0x800ec2c;
                    sym.__mhi_pm_resume(iVar11,0);
                    return;
                }
                if (0x7f < *(arg1_00 + 0x17c)) {
                    uVar2 = *(arg1_00 + 0x188);
                    pcVar7 = *(*(arg1_00 + 8) + 0xc0);
                    pcVar15 = "INVALID_STATE";
                    if ((uVar2 < 0x100) && (0xf6 < uVar2 - 8)) {
                        pcVar15 = *(reloc..str.14.llvm.39275123862783422 + uVar2 * 8);
                    }
                    uVar6 = sym.to_mhi_pm_state_str(*(arg1_00 + 0x17c));
                    _dev_err(iVar11 + 0x28,"[E][%s] Did not enter M3 state, MHI state: %s, PM state: %s\n",
                             "mhi_pm_suspend",pcVar15,uVar6);
                    if ((pcVar7 != NULL) && (*(pcVar7 + 0x18) < 3)) {
                        uVar2 = *(arg1_00 + 0x188);
                        pcVar15 = *(pcVar7 + 0x20);
                        pcVar7 = "INVALID_STATE";
                        if ((uVar2 < 0x100) && (0xf6 < uVar2 - 8)) {
                            pcVar7 = *(reloc..str.14.llvm.39275123862783422 + uVar2 * 8);
                        }
                        uVar6 = sym.to_mhi_pm_state_str(*(arg1_00 + 0x17c));
                        pcVar9 = "[E][%s] Did not enter M3 state, MHI state: %s, PM state: %s\n";
                        goto code_r0x0800ebb4;
                    }
                    goto code_r0x0800e674;
                }
                arg1_00 = arg1_00 + 0xa0;
                pcVar16 = *arg1_00;
                if (arg1_00 == *arg1_00) {
                    uVar6 = 0;
                }
                else {
                    do {
                        pcVar15 = pcVar16 + -0x58;
                        pcVar7 = *pcVar16;
                        mutex_lock(pcVar15);
                        if (*(pcVar16 + -0x68) != 0) {
                            sym.mhi_notify(*(pcVar16 + -0x68),2);
                        }
                        mutex_unlock(pcVar15);
                        uVar6 = 0;
                        pcVar16 = pcVar7;
                    } while (arg1_00 != pcVar7);
                }
            }
            else {
                _raw_write_unlock_irq(pcVar15);
                pcVar7 = *(*(arg1_00 + 8) + 0xc0);
                pcVar15 = sym.to_mhi_pm_state_str(0x10);
                uVar6 = sym.to_mhi_pm_state_str(*(arg1_00 + 0x17c));
                _dev_err(iVar11 + 0x28,"[E][%s] Error setting to PM state: %s from: %s\n","mhi_pm_suspend",pcVar15,
                         uVar6);
                if ((pcVar7 != NULL) && (*(pcVar7 + 0x18) < 3)) {
                    pcVar15 = *(pcVar7 + 0x20);
                    pcVar7 = sym.to_mhi_pm_state_str(0x10);
                    uVar6 = sym.to_mhi_pm_state_str(*(arg1_00 + 0x17c));
                    pcVar9 = "[E][%s] Error setting to PM state: %s from: %s\n";
code_r0x0800ebb4:
                    ipc_log_string(pcVar15,pcVar9,"mhi_pm_suspend",pcVar7,uVar6);
                }
code_r0x0800e674:
                uVar6 = 0xfffffffb;
            }
        }
        else {
            _raw_write_unlock_irq(pcVar15);
            pcVar5 = arg1_00;
code_r0x0800e828:
            arg1_00 = pcVar5;
            uVar6 = 0xfffffff0;
        }
    } while( true );
}


// ===== sym.mhi_pm_suspend @ 0x0800e628 (size 1556) =====

void sym.mhi_pm_suspend(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    ulong uVar3;
    char *pcVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    code *unaff_x19;
    code *unaff_x20;
    code *unaff_x21;
    code *pcVar6;
    int64_t unaff_x23;
    ulong *unaff_x24;
    code *unaff_x25;
    ulong unaff_x30;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    if (*(arg1 + 0x17c) != 1) {
        if (0x7f < *(arg1 + 0x17c)) goto code_r0x0800e674;
        unaff_x24 = arg1 + 0x18c;
        unaff_x23 = *(arg1 + 8);
        unaff_x19 = arg1;
        if (*unaff_x24 != 0) goto code_r0x0800e828;
        if (*(arg1 + 400) != 0) goto code_r0x0800e828;
        unaff_x20 = arg1 + 0x170;
        _raw_read_lock_bh(unaff_x20);
        unaff_x21 = *(arg1 + 0x228);
        unaff_x25 = sym.__typeid__ZTSFvP14mhi_controllerbE_global_addr;
        if (2 < (unaff_x21 + -0x8005ad8 >> 3 | unaff_x21 << 0x3d)) goto code_r0x0800ebd0;
        goto code_r0x0800e6c4;
    }
    uVar3 = 0xffffffea;
code_r0x0800e82c:
    do {
        iVar5 = sp_el0;
        if (*(iVar5 + 0x5e0) == iStack_58) {
            return;
        }
        __stack_chk_fail(uVar3);
        arg1 = unaff_x19;
code_r0x0800ebd0:
        __cfi_slowpath_diag(0xba8145ef24be26ed,unaff_x21,0x8000ea0);
        unaff_x19 = arg1;
code_r0x0800e6c4:
        (*unaff_x21)(unaff_x19,0);
        _raw_read_unlock_bh(unaff_x20);
        unaff_x21 = __msecs_to_jiffies(*(unaff_x19 + 0x178));
        if ((*(unaff_x19 + 0x188) & 0xfffffffe) == 2) {
            if (unaff_x21 == NULL) {
                unaff_x21 = 0x1;
            }
        }
        else {
            if (unaff_x21 == NULL && 0x7f < *(unaff_x19 + 0x17c)) {
                unaff_x21 = 0x1;
            }
            if ((*(unaff_x19 + 0x17c) < 0x80) && (unaff_x21 != NULL)) {
                uStack_68 = 0;
                uStack_60 = 0;
                uStack_78 = 0;
                uStack_70 = 0;
                uStack_80 = 0;
                unaff_x21 = __msecs_to_jiffies(*(unaff_x19 + 0x178));
                init_wait_entry(&stack0xffffffffffffff80,0);
                pcVar6 = unaff_x19 + 0x208;
                prepare_to_wait_event(pcVar6,&stack0xffffffffffffff80,2);
                uVar1 = *(unaff_x19 + 0x188);
                while ((uVar1 & 0xfffffffe) != 2) {
                    if (unaff_x21 == NULL && 0x7f < *(unaff_x19 + 0x17c)) {
                        unaff_x21 = 0x1;
                    }
                    if ((0x7f < *(unaff_x19 + 0x17c)) || (unaff_x21 == NULL)) goto code_r0x0800e7b8;
                    unaff_x21 = schedule_timeout(unaff_x21);
                    prepare_to_wait_event(pcVar6,&stack0xffffffffffffff80,2);
                    uVar1 = *(unaff_x19 + 0x188);
                }
                if (unaff_x21 == NULL) {
                    unaff_x21 = 0x1;
                }
code_r0x0800e7b8:
                finish_wait(pcVar6,&stack0xffffffffffffff80);
            }
        }
        _raw_read_lock_bh(unaff_x20);
        pcVar6 = *(unaff_x19 + 0x230);
        if (2 < (pcVar6 - unaff_x25 >> 3 | pcVar6 - unaff_x25 << 0x3d)) {
            __cfi_slowpath_diag(0xba8145ef24be26ed,pcVar6,0x8000ec0);
        }
        (*pcVar6)(unaff_x19,0);
        _raw_read_unlock_bh(unaff_x20);
        if ((unaff_x21 != 0) && (*(unaff_x19 + 0x17c) < 0x80)) {
            _raw_write_lock_irq(unaff_x20);
            if ((*unaff_x24 == 0) && (*(unaff_x19 + 400) == 0)) {
                iVar5 = *(*(unaff_x19 + 8) + 0xc0);
                if ((iVar5 != 0) && (*(iVar5 + 0x18) == 0)) {
                    ipc_log_string(*(iVar5 + 0x20),"[D][%s] Allowing M3 transition\n","mhi_pm_suspend");
                }
                iVar2 = sym.mhi_tryset_pm_state(unaff_x19,0x10);
                if (iVar2 == 0x10) {
                    sym.mhi_write_reg_field(unaff_x19,*(unaff_x19 + 0x18),0x38,0xff00);
                    _raw_write_unlock_irq(unaff_x20);
                    iVar5 = *(*(unaff_x19 + 8) + 0xc0);
                    if ((iVar5 != 0) && (*(iVar5 + 0x18) == 0)) {
                        ipc_log_string(*(iVar5 + 0x20),"[D][%s] Waiting for M3 completion\n","mhi_pm_suspend");
                    }
                    sym.mhi_force_reg_write(unaff_x19);
                    unaff_x21 = __msecs_to_jiffies(*(unaff_x19 + 0x178));
                    if (*(unaff_x19 + 0x188) == 5) {
                        if (unaff_x21 == NULL) {
                            unaff_x21 = 0x1;
                        }
                    }
                    else {
                        if (unaff_x21 == NULL && 0x7f < *(unaff_x19 + 0x17c)) {
                            unaff_x21 = 0x1;
                        }
                        if ((*(unaff_x19 + 0x17c) < 0x80) && (unaff_x21 != NULL)) {
                            uStack_68 = 0;
                            uStack_60 = 0;
                            uStack_78 = 0;
                            uStack_70 = 0;
                            uStack_80 = 0;
                            unaff_x21 = __msecs_to_jiffies(*(unaff_x19 + 0x178));
                            init_wait_entry(&stack0xffffffffffffff80,0);
                            unaff_x20 = unaff_x19 + 0x208;
                            prepare_to_wait_event(unaff_x20,&stack0xffffffffffffff80,2);
                            iVar2 = *(unaff_x19 + 0x188);
                            while (iVar2 != 5) {
                                if (unaff_x21 == NULL && 0x7f < *(unaff_x19 + 0x17c)) {
                                    unaff_x21 = 0x1;
                                }
                                if ((0x7f < *(unaff_x19 + 0x17c)) || (unaff_x21 == NULL)) goto code_r0x0800ea20;
                                unaff_x21 = schedule_timeout(unaff_x21);
                                prepare_to_wait_event(unaff_x20,&stack0xffffffffffffff80,2);
                                iVar2 = *(unaff_x19 + 0x188);
                            }
                            if (unaff_x21 == NULL) {
                                unaff_x21 = 0x1;
                            }
code_r0x0800ea20:
                            finish_wait(unaff_x20,&stack0xffffffffffffff80);
                        }
                    }
                    if (unaff_x21 == 0) {
                        sym.mhi_debug_reg_dump(unaff_x19);
                        iVar5 = panic("Timedout waiting for M3 ACK");
                        *extraout_x18 = 0x800ec2c;
                        sym.__mhi_pm_resume(iVar5,0);
                        return;
                    }
                    if (*(unaff_x19 + 0x17c) < 0x80) {
                        unaff_x19 = unaff_x19 + 0xa0;
                        pcVar6 = *unaff_x19;
                        if (unaff_x19 == *unaff_x19) {
                            uVar3 = 0;
                        }
                        else {
                            do {
                                unaff_x20 = pcVar6 + -0x58;
                                unaff_x21 = *pcVar6;
                                mutex_lock(unaff_x20);
                                if (*(pcVar6 + -0x68) != 0) {
                                    sym.mhi_notify(*(pcVar6 + -0x68),2);
                                }
                                mutex_unlock(unaff_x20);
                                uVar3 = 0;
                                pcVar6 = unaff_x21;
                            } while (unaff_x19 != unaff_x21);
                        }
                        goto code_r0x0800e82c;
                    }
                    uVar1 = *(unaff_x19 + 0x188);
                    unaff_x21 = *(*(unaff_x19 + 8) + 0xc0);
                    unaff_x20 = "INVALID_STATE";
                    if ((uVar1 < 0x100) && (0xf6 < uVar1 - 8)) {
                        unaff_x20 = *(reloc..str.14.llvm.39275123862783422 + uVar1 * 8);
                    }
                    uVar3 = sym.to_mhi_pm_state_str(*(unaff_x19 + 0x17c));
                    _dev_err(unaff_x23 + 0x28,"[E][%s] Did not enter M3 state, MHI state: %s, PM state: %s\n",
                             "mhi_pm_suspend",unaff_x20,uVar3);
                    if ((unaff_x21 != NULL) && (*(unaff_x21 + 0x18) < 3)) {
                        uVar1 = *(unaff_x19 + 0x188);
                        unaff_x20 = *(unaff_x21 + 0x20);
                        unaff_x21 = "INVALID_STATE";
                        if ((uVar1 < 0x100) && (0xf6 < uVar1 - 8)) {
                            unaff_x21 = *(reloc..str.14.llvm.39275123862783422 + uVar1 * 8);
                        }
                        uVar3 = sym.to_mhi_pm_state_str(*(unaff_x19 + 0x17c));
                        pcVar4 = "[E][%s] Did not enter M3 state, MHI state: %s, PM state: %s\n";
                        goto code_r0x0800ebb4;
                    }
                }
                else {
                    _raw_write_unlock_irq(unaff_x20);
                    unaff_x21 = *(*(unaff_x19 + 8) + 0xc0);
                    unaff_x20 = sym.to_mhi_pm_state_str(0x10);
                    uVar3 = sym.to_mhi_pm_state_str(*(unaff_x19 + 0x17c));
                    _dev_err(unaff_x23 + 0x28,"[E][%s] Error setting to PM state: %s from: %s\n","mhi_pm_suspend",
                             unaff_x20,uVar3);
                    if ((unaff_x21 != NULL) && (*(unaff_x21 + 0x18) < 3)) {
                        unaff_x20 = *(unaff_x21 + 0x20);
                        unaff_x21 = sym.to_mhi_pm_state_str(0x10);
                        uVar3 = sym.to_mhi_pm_state_str(*(unaff_x19 + 0x17c));
                        pcVar4 = "[E][%s] Error setting to PM state: %s from: %s\n";
code_r0x0800ebb4:
                        ipc_log_string(unaff_x20,pcVar4,"mhi_pm_suspend",unaff_x21,uVar3);
                    }
                }
code_r0x0800e674:
                uVar3 = 0xfffffffb;
                goto code_r0x0800e82c;
            }
            _raw_write_unlock_irq(unaff_x20);
code_r0x0800e828:
            uVar3 = 0xfffffff0;
            goto code_r0x0800e82c;
        }
        unaff_x19 = *(*(unaff_x19 + 8) + 0xc0);
        _dev_err(unaff_x23 + 0x28,"[E][%s] Could not enter M0/M1 state","mhi_pm_suspend");
        if ((unaff_x19 == NULL) || (2 < *(unaff_x19 + 0x18))) goto code_r0x0800e674;
        ipc_log_string(*(unaff_x19 + 0x20),"[E][%s] Could not enter M0/M1 state","mhi_pm_suspend");
        uVar3 = 0xfffffffb;
    } while( true );
}


// ===== sym.mhi_pm_resume @ 0x0800ec3c (size 40) =====

void sym.mhi_pm_resume(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__mhi_pm_resume(arg1,0);
    return;
}


// ===== sym.__mhi_pm_resume @ 0x0800ec64 (size 1144) =====

void sym.__mhi_pm_resume(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    code *pcVar2;
    int iVar3;
    uint32_t uVar4;
    ulong uVar5;
    uint64_t uVar6;
    char *pcVar7;
    char *pcVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong uVar10;
    int64_t iVar11;
    int64_t *piVar12;
    ulong unaff_x30;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_48 = *(iVar9 + 0x5e0);
    iVar11 = *(arg1 + 8);
    iVar9 = *(iVar11 + 0xc0);
    if ((iVar9 != 0) && (*(iVar9 + 0x18) == 0)) {
        uVar10 = *(iVar9 + 0x20);
        uVar5 = sym.to_mhi_pm_state_str(*(arg1 + 0x17c));
        uVar4 = *(arg1 + 0x188);
        pcVar8 = "INVALID_STATE";
        if ((uVar4 < 0x100) && (0xf6 < uVar4 - 8)) {
            pcVar8 = *(reloc..str.14.llvm.39275123862783422 + uVar4 * 8);
        }
        ipc_log_string(uVar10,"[D][%s] Entered with PM state: %s, MHI state: %s\n","__mhi_pm_resume",uVar5,pcVar8);
    }
    if (*(arg1 + 0x17c) == 1) {
code_r0x0800ed0c:
        uVar5 = 0;
    }
    else {
        if (*(arg1 + 0x17c) < 0x80) {
            uVar6 = sym.mhi_in_rddm(arg1);
            if ((uVar6 & 1) != 0) goto code_r0x0800ed0c;
            iVar3 = sym.mhi_get_mhi_state(arg1);
            if (iVar3 != 5) {
                uVar4 = sym.mhi_get_mhi_state(arg1);
                if (uVar4 < 0x100) {
                    uVar4 = sym.mhi_get_mhi_state(arg1);
                    if (0xff < uVar4) {
code_r0x0800f0d8:
    //WARNING: Does not return
                        pcVar2 = SoftwareBreakpoint(0x5512,0x800f0dc);
                        (*pcVar2)();
                    }
                    if (uVar4 - 8 < 0xf7) goto code_r0x0800f03c;
                    uVar4 = sym.mhi_get_mhi_state(arg1);
                    if (0xff < uVar4) goto code_r0x0800f0d8;
                    pcVar8 = *(reloc..str.14.llvm.39275123862783422 + uVar4 * 8);
                }
                else {
code_r0x0800f03c:
                    pcVar8 = "INVALID_STATE";
                }
                _dev_warn(iVar11 + 0x28,"Resuming from non M3 state (%s)\n",pcVar8);
                if ((arg2 & 1U) != 0) goto code_r0x0800ed70;
                uVar5 = 0xffffffea;
                goto code_r0x0800ed20;
            }
code_r0x0800ed70:
            piVar1 = *(arg1 + 0xa0);
            while (arg1 + 0xa0 != piVar1) {
                piVar12 = *piVar1;
                mutex_lock(piVar1 + -0xb);
                if (piVar1[-0xd] != 0) {
                    sym.mhi_notify(piVar1[-0xd],3);
                }
                mutex_unlock(piVar1 + -0xb);
                piVar1 = piVar12;
            }
            iVar9 = arg1 + 0x170;
            _raw_write_lock_irq(iVar9);
            uVar4 = *(arg1 + 0x17c);
            uVar6 = 0x2000000000;
            if (uVar4 != 0) {
                uVar6 = 0x3f00000000 - (LZCOUNT(uVar4) << 0x20);
            }
            if ((uVar6 < 0xb00000001) && (uVar4 == *(obj.dev_state_transitions + (uVar6 >> 0x20) * 8))) {
                if (0x60 < (uVar6 >> 0x1d | 4)) goto code_r0x0800f0d4;
                if ((uVar6 >> 0x20 & 0x1fffffffffffffffU) != 5) goto code_r0x0800f080;
                *(arg1 + 0x17c) = 0x40;
code_r0x0800edf4:
                sym.mhi_write_reg_field(arg1,*(arg1 + 0x18),0x38,0xff00);
                _raw_write_unlock_irq(iVar9);
                iVar9 = __msecs_to_jiffies(*(arg1 + 0x178));
                if ((*(arg1 + 0x188) == 4) || (*(arg1 + 0x188) == 2)) {
                    if (iVar9 == 0) {
                        iVar9 = 1;
                    }
                }
                else {
                    if (iVar9 == 0 && 0x7f < *(arg1 + 0x17c)) {
                        iVar9 = 1;
                    }
                    if ((*(arg1 + 0x17c) < 0x80) && (iVar9 != 0)) {
                        uStack_58 = 0;
                        uStack_50 = 0;
                        uStack_68 = 0;
                        uStack_60 = 0;
                        uStack_70 = 0;
                        iVar9 = __msecs_to_jiffies(*(arg1 + 0x178));
                        init_wait_entry(&uStack_70,0);
                        while( true ) {
                            prepare_to_wait_event(arg1 + 0x208,&uStack_70,2);
                            if ((*(arg1 + 0x188) == 4) || (*(arg1 + 0x188) == 2)) break;
                            if (iVar9 == 0 && 0x7f < *(arg1 + 0x17c)) {
                                iVar9 = 1;
                            }
                            if ((0x7f < *(arg1 + 0x17c)) || (iVar9 == 0)) goto code_r0x0800effc;
                            iVar9 = schedule_timeout(iVar9);
                        }
                        if (iVar9 == 0) {
                            iVar9 = 1;
                        }
code_r0x0800effc:
                        finish_wait(arg1 + 0x208,&uStack_70);
                    }
                }
                if (((iVar9 != 0) && (*(arg1 + 0x17c) < 0x80)) || (uVar6 = sym.mhi_in_rddm(arg1), (uVar6 & 1) != 0))
                goto code_r0x0800ed0c;
                uVar4 = *(arg1 + 0x188);
                iVar9 = *(*(arg1 + 8) + 0xc0);
                pcVar8 = "INVALID_STATE";
                if ((uVar4 < 0x100) && (0xf6 < uVar4 - 8)) {
                    pcVar8 = *(reloc..str.14.llvm.39275123862783422 + uVar4 * 8);
                }
                uVar5 = sym.to_mhi_pm_state_str(*(arg1 + 0x17c));
                _dev_err(iVar11 + 0x28,"[E][%s] Did not enter M0 state, MHI state: %s, PM state: %s\n",
                         "__mhi_pm_resume",pcVar8,uVar5);
                if ((iVar9 == 0) || (2 < *(iVar9 + 0x18))) goto code_r0x0800ed1c;
                uVar4 = *(arg1 + 0x188);
                uVar10 = *(iVar9 + 0x20);
                pcVar7 = "INVALID_STATE";
                if ((uVar4 < 0x100) && (0xf6 < uVar4 - 8)) {
                    pcVar7 = *(reloc..str.14.llvm.39275123862783422 + uVar4 * 8);
                }
                uVar5 = sym.to_mhi_pm_state_str(*(arg1 + 0x17c));
                pcVar8 = "[E][%s] Did not enter M0 state, MHI state: %s, PM state: %s\n";
            }
            else {
code_r0x0800f080:
                if (uVar4 == 0x40) goto code_r0x0800edf4;
                _raw_write_unlock_irq(iVar9);
                iVar9 = *(*(arg1 + 8) + 0xc0);
                if ((iVar9 == 0) || (1 < *(iVar9 + 0x18))) goto code_r0x0800ed1c;
                uVar10 = *(iVar9 + 0x20);
                pcVar7 = sym.to_mhi_pm_state_str(0x40);
                uVar5 = sym.to_mhi_pm_state_str(*(arg1 + 0x17c));
                pcVar8 = "[I][%s] Error setting to PM state: %s from: %s\n";
            }
            ipc_log_string(uVar10,pcVar8,"__mhi_pm_resume",pcVar7,uVar5);
        }
code_r0x0800ed1c:
        uVar5 = 0xfffffffb;
    }
code_r0x0800ed20:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_48) {
        return;
    }
    __stack_chk_fail(uVar5);
code_r0x0800f0d4:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(1,0x800f0d8);
    (*pcVar2)();
}


// ===== sym.mhi_pm_resume_force @ 0x0800f0dc (size 40) =====

void sym.mhi_pm_resume_force(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__mhi_pm_resume(arg1,1);
    return;
}


// ===== sym.__mhi_device_get_sync @ 0x0800f104 (size 816) =====

void sym.__mhi_device_get_sync(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong *in_x18;
    code *unaff_x21;
    code *pcVar6;
    code *unaff_x23;
    ulong unaff_x30;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iVar1 = arg1 + 0x170;
    iStack_48 = *(iVar4 + 0x5e0);
    _raw_read_lock_bh(iVar1);
    if (0x7f < *(arg1 + 0x17c)) goto code_r0x0800f358;
    unaff_x21 = *(arg1 + 0x228);
    unaff_x23 = sym.__typeid__ZTSFvP14mhi_controllerbE_global_addr;
    if (2 < (unaff_x21 + -0x8005ad8 >> 3 | unaff_x21 << 0x3d)) goto code_r0x0800f3a4;
    do {
        (*unaff_x21)(arg1,1);
        if ((*(arg1 + 0x17c) & 0x30) != 0) {
            pm_wakeup_dev_event(*(arg1 + 8) + 0x28,0,0);
            pcVar6 = *(arg1 + 0x240);
            if (9 < (pcVar6 + -0x8005c30 >> 3 | pcVar6 << 0x3d)) {
                __cfi_slowpath_diag(0x9d98c101a4fe7fa9,pcVar6,0x8000fe0);
            }
            (*pcVar6)(arg1);
            unaff_x21 = *(arg1 + 0x248);
            if (7 < (unaff_x21 + -0x8005c80 >> 3 | unaff_x21 << 0x3d)) {
                __cfi_slowpath_diag(0x95232cda069bc43d,unaff_x21,0x8001000);
            }
            (*unaff_x21)(arg1);
        }
        _raw_read_unlock_bh(iVar1);
        sym.mhi_force_reg_write(arg1);
        iVar4 = __msecs_to_jiffies(*(arg1 + 0x178));
        uVar2 = *(arg1 + 0x17c);
        if (0x7f < uVar2 != (uVar2 == 4) && iVar4 == 0) {
            iVar4 = 1;
        }
        if (((uVar2 != 4) && (uVar2 < 0x80)) && (iVar4 != 0)) {
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_68 = 0;
            uStack_60 = 0;
            uStack_70 = 0;
            iVar4 = __msecs_to_jiffies(*(arg1 + 0x178));
            init_wait_entry(&uStack_70,0);
            unaff_x21 = arg1 + 0x208;
            prepare_to_wait_event(unaff_x21,&uStack_70,2);
            uVar2 = *(arg1 + 0x17c);
            if (0x7f < uVar2 != (uVar2 == 4) && iVar4 == 0) {
                iVar4 = 1;
            }
            if ((uVar2 != 4) && (iVar3 = iVar4, uVar2 < 0x80)) {
                while (iVar4 = 0, iVar3 != 0) {
                    iVar4 = schedule_timeout(iVar3);
                    prepare_to_wait_event(unaff_x21,&uStack_70,2);
                    uVar2 = *(arg1 + 0x17c);
                    if (0x7f < uVar2 != (uVar2 == 4) && iVar4 == 0) {
                        iVar4 = 1;
                    }
                    if ((uVar2 == 4) || (iVar3 = iVar4, 0x7f < uVar2)) break;
                }
            }
            finish_wait(unaff_x21,&uStack_70);
        }
        if ((iVar4 == 0) || (0x7f < *(arg1 + 0x17c))) {
            _raw_read_lock_bh(iVar1);
            unaff_x21 = *(arg1 + 0x230);
            if (2 < (unaff_x21 - unaff_x23 >> 3 | unaff_x21 - unaff_x23 << 0x3d)) {
                __cfi_slowpath_diag(0xba8145ef24be26ed,unaff_x21,0x8000f00);
            }
            (*unaff_x21)(arg1,0);
code_r0x0800f358:
            _raw_read_unlock_bh(iVar1);
            uVar5 = 0xfffffffb;
        }
        else {
            uVar5 = 0;
        }
        iVar4 = sp_el0;
        if (*(iVar4 + 0x5e0) == iStack_48) {
            return;
        }
        __stack_chk_fail(uVar5);
code_r0x0800f3a4:
        __cfi_slowpath_diag(0xba8145ef24be26ed,unaff_x21,0x8000ee0);
    } while( true );
}


// ===== sym.mhi_async_power_up @ 0x0800f434 (size 856) =====

int sym.mhi_async_power_up(int64_t arg1)

{
    code *pcVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t arg2;
    char *pcVar5;
    int64_t iVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(arg1 + 8);
    iVar6 = *(iVar8 + 0xc0);
    if ((iVar6 != 0) && (*(iVar6 + 0x18) < 2)) {
        ipc_log_string(*(iVar6 + 0x20),"[I][%s] Requested to power ON\n","mhi_async_power_up");
    }
    if (((*(arg1 + 0x228) == 0) || (*(arg1 + 0x230) == 0)) || (*(arg1 + 0x238) == 0)) {
        *(arg1 + 0x228) = sym.mhi_assert_dev_wake.4dbb11a4522110e50d216ee75119b05c.cfi_jt;
        pcVar1 = sym.mhi_toggle_dev_wake.4dbb11a4522110e50d216ee75119b05c.cfi_jt;
        if ((*(arg1 + 0x180) & 8) != 0) {
            pcVar1 = sym.mhi_toggle_dev_wake_nop.4dbb11a4522110e50d216ee75119b05c.cfi_jt;
        }
        *(arg1 + 0x230) = sym.mhi_deassert_dev_wake.4dbb11a4522110e50d216ee75119b05c.cfi_jt;
        *(arg1 + 0x238) = pcVar1;
    }
    iVar6 = arg1 + 0x140;
    mutex_lock(iVar6);
    *(arg1 + 0x17c) = 1;
    _raw_write_lock_irq(arg1 + 0x170);
    sym.mhi_write_reg(arg1,*(arg1 + 0x20),0x20,0);
    *(arg1 + 0x17c) = 2;
    *(arg1 + 0x184) = 10;
    uVar2 = sym.mhi_get_exec_env(arg1);
    _raw_write_unlock_irq(arg1 + 0x170);
    if ((uVar2 < 7) && ((1 << (uVar2 & 0x1f) & 0x65U) != 0)) {
        uVar3 = sym.mhi_get_mhi_state(arg1);
        iVar8 = *(*(arg1 + 8) + 0xc0);
        if ((iVar8 != 0) && (*(iVar8 + 0x18) == 0)) {
            pcVar5 = "INVALID_STATE";
            if ((uVar3 < 0x100) && (0xf6 < uVar3 - 8)) {
                pcVar5 = *(reloc..str.14.llvm.39275123862783422 + uVar3 * 8);
            }
            ipc_log_string(*(iVar8 + 0x20),"[D][%s] Attempting power on with EE: %s, state: %s\n","mhi_async_power_up"
                           ,*(reloc..str.llvm.39275123862783422 + uVar2 * 8),pcVar5);
        }
        if (uVar3 == 0xff) {
            sym.mhi_write_reg_field(arg1,*(arg1 + 0x18),0x38,2);
            iVar4 = sym.mhi_poll_reg_field(arg1,*(arg1 + 0x18),0x38,2);
            if (iVar4 != 0) {
                iVar8 = *(*(arg1 + 8) + 0xc0);
                if ((iVar8 != 0) && (*(iVar8 + 0x18) < 2)) {
                    ipc_log_string(*(iVar8 + 0x20),"[I][%s] Failed to reset MHI due to syserr state\n",
                                   "mhi_async_power_up");
                }
                goto code_r0x0800f664;
            }
            sym.mhi_write_reg(arg1,*(arg1 + 0x20),0x20,0);
        }
        iVar4 = sym.mhi_init_irq_setup(arg1);
        if (iVar4 == 0) {
            arg2 = 0;
            if ((uVar2 != 0) && (uVar2 != 5)) {
                arg2 = uVar2 != 6;
            }
            sym.mhi_queue_state_transition(arg1,arg2);
            mutex_unlock(iVar6);
            iVar6 = *(*(arg1 + 8) + 0xc0);
            if ((iVar6 != 0) && (*(iVar6 + 0x18) < 2)) {
                ipc_log_string(*(iVar6 + 0x20),"[I][%s] Power on setup success\n","mhi_async_power_up");
            }
            return 0;
        }
    }
    else {
        iVar7 = *(*(arg1 + 8) + 0xc0);
        if (uVar2 < 10) {
            pcVar5 = *(reloc..str.llvm.39275123862783422 + uVar2 * 8);
        }
        else {
            pcVar5 = "INVALID_EE";
        }
        _dev_err(iVar8 + 0x28,"[E][%s] %s is not a valid EE for power on\n","mhi_async_power_up",pcVar5);
        if ((iVar7 == 0) || (2 < *(iVar7 + 0x18))) {
            iVar4 = -5;
        }
        else {
            if (uVar2 < 10) {
                pcVar5 = *(reloc..str.llvm.39275123862783422 + uVar2 * 8);
            }
            else {
                pcVar5 = "INVALID_EE";
            }
            ipc_log_string(*(iVar7 + 0x20),"[E][%s] %s is not a valid EE for power on\n","mhi_async_power_up",pcVar5)
            ;
            iVar4 = -5;
        }
    }
code_r0x0800f664:
    *(arg1 + 0x17c) = 1;
    mutex_unlock(iVar6);
    return iVar4;
}


// ===== sym.mhi_assert_dev_wake @ 0x0800f78c (size 492) =====

void sym.mhi_assert_dev_wake(uint32_t arg1)

{
    uint64_t *puVar1;
    int *piVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    uint64_t arg1_00;
    ulong uVar6;
    uint64_t in_x1;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    arg1_00 = arg1;
    *in_x18 = unaff_x30;
    if ((in_x1 & 1) == 0) {
        puVar1 = arg1_00 + 0x18c;
        uVar8 = *puVar1;
        while (uVar7 = uVar8, uVar7 != 0) {
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar3 = *puVar1;
                uVar8 = uVar3;
                if (uVar3 != uVar7) goto code_r0x0800f7d8;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar7 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x0800f7d8:
            if (uVar7 == uVar3) {
                return;
            }
        }
        uVar6 = _raw_spin_lock_irqsave(arg1_00 + 0x1bc);
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar7 = *puVar1;
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
                *puVar1 = uVar7 + 1;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        DataMemoryBarrier(2,3);
        if (((uVar7 + 1 == 1) && ((*(arg1_00 + 0x17c) >> 3 & 1) != 0)) && (*(arg1_00 + 0x28f) == '\0')) {
            if ((*(arg1_00 + 0x180) >> 3 & 1) == 0) {
                sym.mhi_write_offload_wakedb(arg1_00,1);
            }
            else {
                sym.mhi_write_db(arg1_00,*(arg1_00 + 0x30),1);
            }
            *(arg1_00 + 0x28f) = 1;
        }
    }
    else {
        uVar6 = _raw_spin_lock_irqsave(arg1_00 + 0x1bc);
        piVar2 = arg1_00 + 0x18c;
        Hint_Prefetch(piVar2,2,0,1);
        do {
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
                *piVar2 = *piVar2 + 1;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        if (((*(arg1_00 + 0x17c) & 0x4c) != 0) && (*(arg1_00 + 0x28f) == '\0')) {
            if ((*(arg1_00 + 0x180) >> 3 & 1) == 0) {
                sym.mhi_write_offload_wakedb(arg1_00,1);
            }
            else {
                sym.mhi_write_db(arg1_00,*(arg1_00 + 0x30),1);
            }
            *(arg1_00 + 0x28f) = 1;
        }
    }
    _raw_spin_unlock_irqrestore(arg1_00 + 0x1bc,uVar6);
    return;
}


// ===== sym.mhi_deassert_dev_wake @ 0x0800f978 (size 344) =====

void sym.mhi_deassert_dev_wake(uint32_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    uint64_t arg1_00;
    ulong uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    arg1_00 = arg1;
    *in_x18 = unaff_x30;
    puVar1 = arg1_00 + 0x18c;
    uVar7 = *puVar1;
    do {
        uVar6 = uVar7;
        if (uVar6 - 1 == 0) {
            uVar5 = _raw_spin_lock_irqsave(arg1_00 + 0x1bc);
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar6 = *puVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar6 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
            if ((((uVar6 - 1 == 0) && ((*(arg1_00 + 0x17c) & 0x4c) != 0)) && ((arg2 & 1U) == 0)) &&
               (*(arg1_00 + 0x28f) != '\0')) {
                if ((*(arg1_00 + 0x180) >> 3 & 1) == 0) {
                    sym.mhi_write_offload_wakedb(arg1_00,0);
                }
                else {
                    sym.mhi_write_db(arg1_00,*(arg1_00 + 0x30),0);
                }
                *(arg1_00 + 0x28f) = 0;
            }
            _raw_spin_unlock_irqrestore(arg1_00 + 0x1bc,uVar5);
            return;
        }
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar2 = *puVar1;
            uVar7 = uVar2;
            if (uVar2 != uVar6) goto code_r0x0800f9c4;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
                *puVar1 = uVar6 - 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
code_r0x0800f9c4:
        if (uVar6 == uVar2) {
            return;
        }
    } while( true );
}


// ===== sym.mhi_toggle_dev_wake_nop @ 0x0800fad0 (size 12) =====

void sym.mhi_toggle_dev_wake_nop(void)

{
    return;
}


// ===== sym.mhi_toggle_dev_wake @ 0x0800fadc (size 212) =====

void sym.mhi_toggle_dev_wake(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = *(arg1 + 0x228);
    if (2 < (pcVar1 + -0x8005ad8 >> 3 | pcVar1 << 0x3d)) {
        __cfi_slowpath_diag(0xba8145ef24be26ed,pcVar1,0x8001020);
    }
    (*pcVar1)(arg1,0);
    pcVar1 = *(arg1 + 0x230);
    if (2 < (pcVar1 + -0x8005ad8 >> 3 | pcVar1 << 0x3d)) {
        __cfi_slowpath_diag(0xba8145ef24be26ed,pcVar1,0x8001040);
    }
    (*pcVar1)(arg1,1);
    return;
}


// ===== sym.mhi_power_down @ 0x0800fbb0 (size 504) =====

void sym.mhi_power_down(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    code *pcVar5;
    ulong uVar6;
    ulong uVar7;
    uint32_t uVar8;
    ulong *in_x18;
    ulong uVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0x140;
    iVar10 = *(arg1 + 8);
    mutex_lock(iVar1);
    iVar2 = arg1 + 0x170;
    _raw_write_lock_irq(iVar2);
    uVar4 = *(arg1 + 0x17c);
    if (uVar4 == 1) {
        _raw_write_unlock_irq(iVar2);
        mutex_unlock(iVar1);
        return;
    }
    uVar8 = 0x400;
    if ((arg2 & 1U) == 0) {
        uVar8 = 0x800;
    }
    uVar3 = 0x2000000000;
    if (uVar4 != 0) {
        uVar3 = 0x3f00000000 - (LZCOUNT(uVar4) << 0x20);
    }
    if ((uVar3 < 0xb00000001) && (uVar4 == *(obj.dev_state_transitions + (uVar3 >> 0x20) * 8))) {
        if (0x60 < (uVar3 >> 0x1d | 4)) {
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(1,0x800fda8);
            (*pcVar5)();
        }
        if ((*((uVar3 >> 0x20) * 8 + 0x800490c) & uVar8) == 0) goto code_r0x0800fd10;
    }
    else {
code_r0x0800fd10:
        if (uVar4 == uVar8) goto code_r0x0800fc88;
        iVar11 = *(*(arg1 + 8) + 0xc0);
        uVar6 = sym.to_mhi_pm_state_str(uVar8);
        uVar7 = sym.to_mhi_pm_state_str(*(arg1 + 0x17c));
        _dev_err(iVar10 + 0x28,"[E][%s] Failed to move to state: %s from: %s\n","mhi_power_down",uVar6,uVar7);
        if ((iVar11 != 0) && (*(iVar11 + 0x18) < 3)) {
            uVar9 = *(iVar11 + 0x20);
            uVar6 = sym.to_mhi_pm_state_str(uVar8);
            uVar7 = sym.to_mhi_pm_state_str(*(arg1 + 0x17c));
            ipc_log_string(uVar9,"[E][%s] Failed to move to state: %s from: %s\n","mhi_power_down",uVar6,uVar7);
        }
        uVar8 = 0x800;
    }
    *(arg1 + 0x17c) = uVar8;
code_r0x0800fc88:
    *(arg1 + 0x184) = 8;
    __wake_up(arg1 + 0x208,3,0,0);
    _raw_write_unlock_irq(iVar2);
    mutex_unlock(iVar1);
    sym.mhi_queue_state_transition(arg1,6);
    flush_work(arg1 + 0x1d0);
    free_irq(**(arg1 + 0xb0),arg1);
    if (*(arg1 + 0x80) != 0) {
        sym.mhi_free_bhie_table(arg1,arg1 + 0x80);
    }
    return;
}


// ===== sym.mhi_sync_power_up @ 0x0800fda8 (size 400) =====

void sym.mhi_sync_power_up(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint32_t uVar7;
    uint uVar8;
    code *pcVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x20;
    int64_t unaff_x21;
    ulong unaff_x30;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    int64_t iStack_80;
    int64_t iStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uVar3 = sym.mhi_async_power_up(arg1);
    if (uVar3 == 0) {
        iVar4 = __msecs_to_jiffies(*(arg1 + 0x178));
        uVar7 = *(arg1 + 0x184);
        if ((7 < uVar7) || ((1 << (uVar7 & 0x1f) & 0x94U) == 0)) {
            if ((*(arg1 + 0x17c) < 0x80) && (0x7f < *(arg1 + 0x17c) || iVar4 != 0)) {
                uStack_58 = 0;
                uStack_50 = 0;
                uStack_68 = 0;
                uStack_60 = 0;
                uStack_70 = 0;
                unaff_x21 = __msecs_to_jiffies(*(arg1 + 0x178));
                init_wait_entry(&uStack_70,0);
                unaff_x20 = arg1 + 0x208;
                while( true ) {
                    prepare_to_wait_event(unaff_x20,&uStack_70,2);
                    if ((*(arg1 + 0x184) < 8) && ((1 << (*(arg1 + 0x184) & 0x1f) & 0x94U) != 0)) break;
                    iVar4 = unaff_x21;
                    if (unaff_x21 == 0 && 0x7f < *(arg1 + 0x17c)) {
                        iVar4 = 1;
                    }
                    if ((0x7f < *(arg1 + 0x17c)) || (iVar4 == 0)) break;
                    unaff_x21 = schedule_timeout();
                }
                finish_wait(unaff_x20,&uStack_70);
                uVar7 = *(arg1 + 0x184);
            }
        }
        if ((uVar7 < 8) && ((1 << (uVar7 & 0x1f) & 0x94U) != 0)) {
            uVar3 = 0;
        }
        else {
            if (*(arg1 + 0x88) == 0) {
                sym.mhi_power_down(arg1,0);
            }
            uVar3 = 0xffffff92;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return;
    }
    iVar5 = __stack_chk_fail(uVar3);
    *extraout_x18 = sym.mhi_force_rddm_mode;
    pcStack_98 = sym.mhi_force_rddm_mode;
    iVar4 = sp_el0;
    iStack_a8 = *(iVar4 + 0x5e0);
    puStack_a0 = &stack0xffffffffffffffc0;
    iStack_90 = unaff_x21;
    iStack_80 = unaff_x20;
    iStack_78 = arg1;
    if (*(iVar5 + 0x184) == 3) {
        uVar8 = 0;
    }
    else {
        iVar4 = *(*(iVar5 + 8) + 0xc0);
        if ((iVar4 != 0) && (*(iVar4 + 0x18) == 0)) {
            ipc_log_string(*(iVar4 + 0x20),"[D][%s] Triggering SYS_ERR to force RDDM state\n","mhi_force_rddm_mode");
        }
        sym.mhi_write_reg_field(iVar5,*(iVar5 + 0x18),0x38,0xff00);
        iVar4 = __msecs_to_jiffies(*(iVar5 + 0x178));
        if (iVar4 == 0 && *(iVar5 + 0x184) == 3) {
            iVar4 = 1;
        }
        if ((*(iVar5 + 0x184) != 3) && (iVar4 != 0)) {
            uStack_b8 = 0;
            uStack_b0 = 0;
            uStack_c8 = 0;
            uStack_c0 = 0;
            uStack_d0 = 0;
            iVar6 = __msecs_to_jiffies(*(iVar5 + 0x178));
            init_wait_entry(&uStack_d0,0);
            iVar1 = iVar5 + 0x208;
            prepare_to_wait_event(iVar1,&uStack_d0,2);
            iVar2 = *(iVar5 + 0x184);
            if (iVar6 == 0 && iVar2 == 3) {
                iVar6 = 1;
            }
            while ((iVar4 = iVar6, iVar2 != 3 && (iVar4 = 0, iVar6 != 0))) {
                iVar6 = schedule_timeout(iVar6);
                prepare_to_wait_event(iVar1,&uStack_d0,2);
                iVar2 = *(iVar5 + 0x184);
                if (iVar6 == 0 && iVar2 == 3) {
                    iVar6 = 1;
                }
            }
            finish_wait(iVar1,&uStack_d0);
        }
        uVar8 = 0xfffffffb;
        if (iVar4 != 0) {
            uVar8 = 0;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_a8) {
        iVar4 = __stack_chk_fail(uVar8);
        *extraout_x18_00 = sym.mhi_device_get;
        iVar5 = *(iVar4 + 0x10);
        *(iVar4 + 0x3cc) = *(iVar4 + 0x3cc) + 1;
        _raw_read_lock_bh(iVar5 + 0x170);
        if ((*(iVar5 + 0x17c) & 0x30) != 0) {
            pm_wakeup_dev_event(*(iVar5 + 8) + 0x28,0,0);
            pcVar9 = *(iVar5 + 0x240);
            if (9 < (pcVar9 + -0x8005c30 >> 3 | pcVar9 << 0x3d)) {
                __cfi_slowpath_diag(0x9d98c101a4fe7fa9,pcVar9,0x8000fe0);
            }
            (*pcVar9)(iVar5);
            pcVar9 = *(iVar5 + 0x248);
            if (7 < (pcVar9 + -0x8005c80 >> 3 | pcVar9 << 0x3d)) {
                __cfi_slowpath_diag(0x95232cda069bc43d,pcVar9,0x8001000);
            }
            (*pcVar9)(iVar5);
        }
        pcVar9 = *(iVar5 + 0x228);
        if (2 < (pcVar9 + -0x8005ad8 >> 3 | pcVar9 << 0x3d)) {
            __cfi_slowpath_diag(0xba8145ef24be26ed,pcVar9,0x8000f20);
        }
        (*pcVar9)(iVar5,1);
        _raw_read_unlock_bh(iVar5 + 0x170);
        return;
    }
    return;
}


// ===== sym.mhi_force_rddm_mode @ 0x0800ff38 (size 388) =====

void sym.mhi_force_rddm_mode(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint uVar4;
    code *pcVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar6;
    ulong unaff_x30;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    if (*(arg1 + 0x184) == 3) {
        uVar4 = 0;
    }
    else {
        iVar3 = *(*(arg1 + 8) + 0xc0);
        if ((iVar3 != 0) && (*(iVar3 + 0x18) == 0)) {
            ipc_log_string(*(iVar3 + 0x20),"[D][%s] Triggering SYS_ERR to force RDDM state\n","mhi_force_rddm_mode");
        }
        sym.mhi_write_reg_field(arg1,*(arg1 + 0x18),0x38,0xff00);
        iVar3 = __msecs_to_jiffies(*(arg1 + 0x178));
        if (iVar3 == 0 && *(arg1 + 0x184) == 3) {
            iVar3 = 1;
        }
        if ((*(arg1 + 0x184) != 3) && (iVar3 != 0)) {
            uStack_48 = 0;
            uStack_40 = 0;
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_60 = 0;
            iVar2 = __msecs_to_jiffies(*(arg1 + 0x178));
            init_wait_entry(&uStack_60,0);
            iVar6 = arg1 + 0x208;
            prepare_to_wait_event(iVar6,&uStack_60,2);
            iVar1 = *(arg1 + 0x184);
            if (iVar2 == 0 && iVar1 == 3) {
                iVar2 = 1;
            }
            while ((iVar3 = iVar2, iVar1 != 3 && (iVar3 = 0, iVar2 != 0))) {
                iVar2 = schedule_timeout(iVar2);
                prepare_to_wait_event(iVar6,&uStack_60,2);
                iVar1 = *(arg1 + 0x184);
                if (iVar2 == 0 && iVar1 == 3) {
                    iVar2 = 1;
                }
            }
            finish_wait(iVar6,&uStack_60);
        }
        uVar4 = 0xfffffffb;
        if (iVar3 != 0) {
            uVar4 = 0;
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_38) {
        iVar3 = __stack_chk_fail(uVar4);
        *extraout_x18 = sym.mhi_device_get;
        iVar6 = *(iVar3 + 0x10);
        *(iVar3 + 0x3cc) = *(iVar3 + 0x3cc) + 1;
        _raw_read_lock_bh(iVar6 + 0x170);
        if ((*(iVar6 + 0x17c) & 0x30) != 0) {
            pm_wakeup_dev_event(*(iVar6 + 8) + 0x28,0,0);
            pcVar5 = *(iVar6 + 0x240);
            if (9 < (pcVar5 + -0x8005c30 >> 3 | pcVar5 << 0x3d)) {
                __cfi_slowpath_diag(0x9d98c101a4fe7fa9,pcVar5,0x8000fe0);
            }
            (*pcVar5)(iVar6);
            pcVar5 = *(iVar6 + 0x248);
            if (7 < (pcVar5 + -0x8005c80 >> 3 | pcVar5 << 0x3d)) {
                __cfi_slowpath_diag(0x95232cda069bc43d,pcVar5,0x8001000);
            }
            (*pcVar5)(iVar6);
        }
        pcVar5 = *(iVar6 + 0x228);
        if (2 < (pcVar5 + -0x8005ad8 >> 3 | pcVar5 << 0x3d)) {
            __cfi_slowpath_diag(0xba8145ef24be26ed,pcVar5,0x8000f20);
        }
        (*pcVar5)(iVar6,1);
        _raw_read_unlock_bh(iVar6 + 0x170);
        return;
    }
    return;
}


// ===== sym.mhi_device_get @ 0x080100bc (size 360) =====

void sym.mhi_device_get(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x10);
    *(arg1 + 0x3cc) = *(arg1 + 0x3cc) + 1;
    _raw_read_lock_bh(iVar2 + 0x170);
    if ((*(iVar2 + 0x17c) & 0x30) != 0) {
        pm_wakeup_dev_event(*(iVar2 + 8) + 0x28,0,0);
        pcVar1 = *(iVar2 + 0x240);
        if (9 < (pcVar1 + -0x8005c30 >> 3 | pcVar1 << 0x3d)) {
            __cfi_slowpath_diag(0x9d98c101a4fe7fa9,pcVar1,0x8000fe0);
        }
        (*pcVar1)(iVar2);
        pcVar1 = *(iVar2 + 0x248);
        if (7 < (pcVar1 + -0x8005c80 >> 3 | pcVar1 << 0x3d)) {
            __cfi_slowpath_diag(0x95232cda069bc43d,pcVar1,0x8001000);
        }
        (*pcVar1)(iVar2);
    }
    pcVar1 = *(iVar2 + 0x228);
    if (2 < (pcVar1 + -0x8005ad8 >> 3 | pcVar1 << 0x3d)) {
        __cfi_slowpath_diag(0xba8145ef24be26ed,pcVar1,0x8000f20);
    }
    (*pcVar1)(iVar2,1);
    _raw_read_unlock_bh(iVar2 + 0x170);
    return;
}


// ===== sym.mhi_device_get_sync @ 0x08010224 (size 68) =====

void sym.mhi_device_get_sync(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.__mhi_device_get_sync(*(arg1 + 0x10));
    if (iVar1 == 0) {
        *(arg1 + 0x3cc) = *(arg1 + 0x3cc) + 1;
    }
    return;
}


// ===== sym.mhi_device_put @ 0x08010268 (size 360) =====

void sym.mhi_device_put(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x10);
    *(arg1 + 0x3cc) = *(arg1 + 0x3cc) + -1;
    _raw_read_lock_bh(iVar2 + 0x170);
    if ((*(iVar2 + 0x17c) & 0x30) != 0) {
        pm_wakeup_dev_event(*(iVar2 + 8) + 0x28,0,0);
        pcVar1 = *(iVar2 + 0x240);
        if (9 < (pcVar1 + -0x8005c30 >> 3 | pcVar1 << 0x3d)) {
            __cfi_slowpath_diag(0x9d98c101a4fe7fa9,pcVar1,0x8000fe0);
        }
        (*pcVar1)(iVar2);
        pcVar1 = *(iVar2 + 0x248);
        if (7 < (pcVar1 + -0x8005c80 >> 3 | pcVar1 << 0x3d)) {
            __cfi_slowpath_diag(0x95232cda069bc43d,pcVar1,0x8001000);
        }
        (*pcVar1)(iVar2);
    }
    pcVar1 = *(iVar2 + 0x230);
    if (2 < (pcVar1 + -0x8005ad8 >> 3 | pcVar1 << 0x3d)) {
        __cfi_slowpath_diag(0xba8145ef24be26ed,pcVar1,0x8000f40);
    }
    (*pcVar1)(iVar2,0);
    _raw_read_unlock_bh(iVar2 + 0x170);
    return;
}


// ===== sym.mhi_in_rddm @ 0x080103d0 (size 260) =====

ulong sym.mhi_in_rddm(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    code *pcVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x88) != 0) {
        iVar4 = *(arg1 + 8);
        iVar1 = sym.mhi_get_exec_env(arg1);
        if ((iVar1 == 3) && (*(arg1 + 0x188) - 2U < 5)) {
            *(arg1 + 0x184) = 3;
            iVar2 = *(*(arg1 + 8) + 0xc0);
            _dev_err(iVar4 + 0x28,"[E][%s] RDDM event occurred!\n","mhi_in_rddm");
            if ((iVar2 != 0) && (*(iVar2 + 0x18) < 3)) {
                ipc_log_string(*(iVar2 + 0x20),"[E][%s] RDDM event occurred!\n","mhi_in_rddm");
            }
            sym.mhi_report_error(arg1);
            pcVar3 = *(arg1 + 0x220);
            __cfi_slowpath_diag(0x6ba83359ac4765be,pcVar3,0x8000fc0);
            (*pcVar3)(arg1,4);
            __wake_up(arg1 + 0x208,3,0,0);
            return 1;
        }
    }
    return 0;
}


// ===== sym.mhi_rddm_prepare @ 0x080104d4 (size 348) =====

void sym.mhi_rddm_prepare(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    ulong *puVar5;
    ulong *in_x18;
    int64_t iVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *arg2;
    iVar6 = *(arg1 + 0x28);
    if (*(arg2 + 0x10) != 1) {
        uVar3 = 0;
        puVar5 = *(arg2 + 8);
        do {
            uVar3 = uVar3 + 1;
            *puVar5 = *(iVar7 + 0x10);
            puVar1 = iVar7 + 0x18;
            iVar7 = iVar7 + 0x20;
            puVar5[1] = *puVar1;
            puVar5 = puVar5 + 2;
        } while (uVar3 < *(arg2 + 0x10) - 1U);
    }
    iVar4 = *(*(arg1 + 8) + 0xc0);
    if ((iVar4 != 0) && (*(iVar4 + 0x18) == 0)) {
        ipc_log_string(*(iVar4 + 0x20),"[D][%s] BHIe programming for RDDM\n","mhi_rddm_prepare");
    }
    sym.mhi_write_reg(arg1,iVar6,100,*(iVar7 + 0x14));
    sym.mhi_write_reg(arg1,iVar6,0x60,*(iVar7 + 0x10));
    sym.mhi_write_reg(arg1,iVar6,0x68,*(iVar7 + 0x18));
    uVar2 = prandom_u32();
    sym.mhi_write_reg_field(arg1,iVar6,0x70,0x3fffffff);
    iVar6 = *(*(arg1 + 8) + 0xc0);
    if ((iVar6 != 0) && (*(iVar6 + 0x18) == 0)) {
        ipc_log_string(*(iVar6 + 0x20),"[D][%s] Address: %p and len: 0x%zx sequence: %u\n","mhi_rddm_prepare",
                       iVar7 + 0x10,*(iVar7 + 0x18),((uVar2 & 0xffffffff) * 0x3fffffff >> 0x20) + 1);
    }
    return;
}


// ===== sym.mhi_rddm_download_status @ 0x08010630 (size 460) =====

void sym.mhi_rddm_download_status(int64_t arg1)

{
    bool bVar1;
    int iVar2;
    uint32_t uVar3;
    int iVar4;
    ulong uVar5;
    int64_t arg1_00;
    ulong *puVar6;
    char *pcVar7;
    char *pcVar8;
    uint uVar9;
    int64_t *piVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar11;
    int64_t iVar12;
    ulong uVar13;
    uint64_t uVar14;
    int64_t iVar15;
    int64_t iVar16;
    ulong *puVar17;
    ulong unaff_x30;
    uchar auVar18 [16];
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    int iStack_7c;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t iStack_60;
    uint64_t uStack_58;
    uint64_t uStack_50;
    int64_t iStack_48;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar16 = sp_el0;
    iStack_38 = *(iVar16 + 0x5e0);
    iStack_3c = 0;
    uVar11 = *(arg1 + 0x28);
    iVar16 = *(arg1 + 8);
    uVar3 = *(arg1 + 0x178) * 1000;
    if (0x270 < uVar3 >> 3) {
        uVar14 = uVar3 / 5000;
        do {
            iVar2 = sym.mhi_read_reg_field(arg1,uVar11,0x78,0xc0000000);
            if (iVar2 != 0) goto code_r0x080107c4;
            if (iStack_3c == 2) {
                iVar12 = *(*(arg1 + 8) + 0xc0);
                if ((iVar12 != 0) && (*(iVar12 + 0x18) < 2)) {
                    ipc_log_string(*(iVar12 + 0x20),"[I][%s] RDDM dumps collected successfully",
                                   "mhi_rddm_download_status");
                }
                uVar5 = 0;
                goto code_r0x080107c8;
            }
            uVar3 = uVar14 - 1;
            uVar14 = uVar3;
            __const_udelay(0x147aeb8);
        } while (uVar3 != 0);
    }
    uVar3 = sym.mhi_get_exec_env(arg1);
    uVar14 = uVar3;
    uVar11 = sym.mhi_read_reg(arg1,uVar11,0x78,&iStack_3c);
    uVar11 = uVar11 & 0xffffffff;
    arg1 = *(*(arg1 + 8) + 0xc0);
    if (uVar3 < 10) {
        pcVar7 = *(reloc..str.llvm.39275123862783422 + uVar3 * 8);
    }
    else {
        pcVar7 = "INVALID_EE";
    }
    _dev_err(iVar16 + 0x28,"[E][%s] ret: %d, RXVEC_STATUS: 0x%x, EE:%s\n","mhi_rddm_download_status",uVar11,
             iStack_3c,pcVar7);
    if ((arg1 != 0) && (*(arg1 + 0x18) < 3)) {
        if (uVar3 < 10) {
            pcVar7 = *(reloc..str.llvm.39275123862783422 + uVar3 * 8);
        }
        else {
            pcVar7 = "INVALID_EE";
        }
        ipc_log_string(*(arg1 + 0x20),"[E][%s] ret: %d, RXVEC_STATUS: 0x%x, EE:%s\n","mhi_rddm_download_status",
                       uVar11,iStack_3c,pcVar7);
    }
code_r0x080107c4:
    uVar5 = 0xfffffffb;
code_r0x080107c8:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_38) {
        return;
    }
    auVar18 = __stack_chk_fail(uVar5);
    arg1_00 = auVar18._0_8_;
    *extraout_x18 = sym.mhi_download_rddm_image;
    pcStack_68 = sym.mhi_download_rddm_image;
    iVar12 = sp_el0;
    iStack_78 = *(iVar12 + 0x5e0);
    iVar12 = *(arg1_00 + 0x28);
    iStack_7c = 0;
    iVar15 = *(arg1_00 + 8);
    puStack_70 = &stack0xffffffffffffffd0;
    iStack_60 = iVar16;
    uStack_58 = uVar14;
    uStack_50 = uVar11;
    iStack_48 = arg1;
    if ((auVar18._8_8_ & 1) == 0) {
        iVar16 = *(iVar15 + 0xc0);
        if ((iVar16 != 0) && (*(iVar16 + 0x18) == 0)) {
            ipc_log_string(*(iVar16 + 0x20),"[D][%s] Waiting for RDDM image download via BHIe\n",
                           "mhi_download_rddm_image");
        }
        iVar16 = __msecs_to_jiffies(*(arg1_00 + 0x178));
        iVar2 = sym.mhi_read_reg_field(arg1_00,iVar12,0x78,0xc0000000);
        if ((iVar2 == 0 && iStack_7c == 0) && ((iVar2 != 0 || iStack_7c != 0) || iVar16 != 0)) {
            uStack_90 = 0;
            uStack_88 = 0;
            uStack_a0 = 0;
            uStack_98 = 0;
            uStack_a8 = 0;
            iVar16 = __msecs_to_jiffies(*(arg1_00 + 0x178));
            init_wait_entry(&uStack_a8,0);
            while( true ) {
                prepare_to_wait_event(arg1_00 + 0x208,&uStack_a8,2);
                iVar2 = sym.mhi_read_reg_field(arg1_00,iVar12,0x78,0xc0000000);
                if (iVar16 == 0 && (iVar2 != 0 || iStack_7c != 0)) {
                    iVar16 = 1;
                }
                if ((iVar2 != 0 || iStack_7c != 0) || (iVar16 == 0)) break;
                iVar16 = schedule_timeout();
            }
            finish_wait(arg1_00 + 0x208,&uStack_a8);
        }
        iVar16 = *(*(arg1_00 + 8) + 0xc0);
        if ((iVar16 != 0) && (*(iVar16 + 0x18) == 0)) {
            ipc_log_string(*(iVar16 + 0x20),"[D][%s] RXVEC_STATUS: 0x%x\n","mhi_download_rddm_image",iStack_7c);
        }
        uVar9 = 0;
        if (iStack_7c != 2) {
            uVar9 = 0xfffffffb;
        }
        goto code_r0x08010b9c;
    }
    iVar16 = *(iVar15 + 0xc0);
    if ((iVar16 != 0) && (*(iVar16 + 0x18) == 0)) {
        uVar13 = *(iVar16 + 0x20);
        uVar5 = sym.to_mhi_pm_state_str(*(arg1_00 + 0x17c));
        uVar3 = *(arg1_00 + 0x188);
        pcVar7 = "INVALID_STATE";
        if ((uVar3 < 0x100) && (0xf6 < uVar3 - 8)) {
            pcVar7 = *(reloc..str.14.llvm.39275123862783422 + uVar3 * 8);
        }
        if (*(arg1_00 + 0x184) < 10) {
            pcVar8 = *(reloc..str.llvm.39275123862783422 + *(arg1_00 + 0x184) * 8);
        }
        else {
            pcVar8 = "INVALID_EE";
        }
        ipc_log_string(uVar13,"[D][%s] Entered with pm_state:%s dev_state:%s ee:%s\n","__mhi_download_rddm_in_panic",
                       uVar5,pcVar7,pcVar8);
    }
    *(arg1_00 + 0x17c) = 0x800;
    DataMemoryBarrier(2,2);
    uVar3 = sym.mhi_get_exec_env(arg1_00);
    uVar11 = uVar3;
    if (uVar3 == 3) {
code_r0x08010b10:
        iVar16 = *(*(arg1_00 + 8) + 0xc0);
        if ((iVar16 != 0) && (*(iVar16 + 0x18) == 0)) {
            if (uVar11 < 10) {
                pcVar7 = *(reloc..str.llvm.39275123862783422 + uVar11 * 8);
            }
            else {
                pcVar7 = "INVALID_EE";
            }
            ipc_log_string(*(iVar16 + 0x20),"[D][%s] Waiting for RDDM image download via BHIe, current EE:%s\n",
                           "__mhi_download_rddm_in_panic",pcVar7);
        }
        iVar2 = sym.mhi_rddm_download_status(arg1_00);
        iVar16 = *(*(arg1_00 + 8) + 0xc0);
        if (iVar2 == 0) {
            if ((iVar16 != 0) && (*(iVar16 + 0x18) < 2)) {
                ipc_log_string(*(iVar16 + 0x20),"[I][%s] RDDM dumps collected successfully",
                               "__mhi_download_rddm_in_panic");
            }
            uVar9 = 0;
            goto code_r0x08010b9c;
        }
        if (9 < uVar11) goto code_r0x08010bf0;
        bVar1 = false;
        pcVar7 = *(reloc..str.llvm.39275123862783422 + uVar11 * 8);
    }
    else {
        if (uVar3 != 10) {
            iVar16 = *(*(arg1_00 + 8) + 0xc0);
            if ((iVar16 != 0) && (*(iVar16 + 0x18) == 0)) {
                ipc_log_string(*(iVar16 + 0x20),"[D][%s] Trigger device into RDDM mode using SYS ERR\n",
                               "__mhi_download_rddm_in_panic");
            }
            sym.mhi_set_mhi_state(arg1_00,0xff);
            iVar16 = *(*(arg1_00 + 8) + 0xc0);
            if ((iVar16 != 0) && (*(iVar16 + 0x18) == 0)) {
                ipc_log_string(*(iVar16 + 0x20),"[D][%s] Waiting for device to enter RDDM\n",
                               "__mhi_download_rddm_in_panic");
            }
            iVar2 = 99;
            do {
                iVar4 = sym.mhi_get_exec_env(arg1_00);
                if (iVar4 == 3) {
                    if (0 < iVar2) goto code_r0x08010b04;
                    break;
                }
                __const_udelay(0x8312b0);
                iVar2 = iVar2 + -1;
            } while (iVar2 != -1);
            iVar16 = *(*(arg1_00 + 8) + 0xc0);
            if ((iVar16 != 0) && (*(iVar16 + 0x18) == 0)) {
                ipc_log_string(*(iVar16 + 0x20),"[D][%s] Did not enter RDDM, do a host req reset\n",
                               "__mhi_download_rddm_in_panic");
            }
            sym.mhi_soc_reset(arg1_00);
            __const_udelay(0x8312b0);
code_r0x08010b04:
            uVar11 = sym.mhi_get_exec_env(arg1_00);
            uVar11 = uVar11 & 0xffffffff;
            goto code_r0x08010b10;
        }
        iVar16 = *(*(arg1_00 + 8) + 0xc0);
code_r0x08010bf0:
        bVar1 = true;
        pcVar7 = "INVALID_EE";
    }
    _dev_err(iVar15 + 0x28,"[E][%s] RDDM transfer failed. Current EE: %s\n","__mhi_download_rddm_in_panic",pcVar7);
    if ((iVar16 == 0) || (2 < *(iVar16 + 0x18))) {
        uVar9 = 0xfffffffb;
    }
    else {
        if (bVar1) {
            pcVar7 = "INVALID_EE";
        }
        else {
            pcVar7 = *(reloc..str.llvm.39275123862783422 + uVar11 * 8);
        }
        ipc_log_string(*(iVar16 + 0x20),"[E][%s] RDDM transfer failed. Current EE: %s\n",
                       "__mhi_download_rddm_in_panic",pcVar7);
        uVar9 = 0xfffffffb;
    }
code_r0x08010b9c:
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_78) {
        return;
    }
    auVar18 = __stack_chk_fail(uVar9);
    puVar6 = auVar18._8_8_;
    *extraout_x18_00 = sym.mhi_free_bhie_table;
    if (*(auVar18._0_8_ + 0x28c) == '\0') {
        piVar10 = *puVar6;
        if (piVar10[2] != 0) {
            uVar3 = 0;
            puVar17 = *piVar10 + 0x10;
            do {
                dma_free_attrs(*auVar18._0_8_,puVar17[1],puVar17[-2],*puVar17,0x40);
                piVar10 = *puVar6;
                uVar3 = uVar3 + 1;
                puVar17 = puVar17 + 4;
            } while (uVar3 < *(piVar10 + 2));
        }
        kfree(*piVar10);
        kfree(*puVar6);
        *puVar6 = 0;
    }
    return;
}


// ===== sym.mhi_download_rddm_image @ 0x080107fc (size 1136) =====

void sym.mhi_download_rddm_image(int64_t arg1)

{
    bool bVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    ulong uVar5;
    uint64_t in_x1;
    ulong *puVar6;
    char *pcVar7;
    char *pcVar8;
    uint uVar9;
    int64_t *piVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar11;
    ulong uVar12;
    uint64_t uVar13;
    int64_t iVar14;
    ulong *puVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_38 = *(iVar11 + 0x5e0);
    iVar11 = *(arg1 + 0x28);
    iStack_3c = 0;
    iVar14 = *(arg1 + 8);
    if ((in_x1 & 1) == 0) {
        iVar14 = *(iVar14 + 0xc0);
        if ((iVar14 != 0) && (*(iVar14 + 0x18) == 0)) {
            ipc_log_string(*(iVar14 + 0x20),"[D][%s] Waiting for RDDM image download via BHIe\n",
                           "mhi_download_rddm_image");
        }
        iVar14 = __msecs_to_jiffies(*(arg1 + 0x178));
        iVar4 = sym.mhi_read_reg_field(arg1,iVar11,0x78,0xc0000000);
        if ((iVar4 == 0 && iStack_3c == 0) && ((iVar4 != 0 || iStack_3c != 0) || iVar14 != 0)) {
            uStack_50 = 0;
            uStack_48 = 0;
            uStack_60 = 0;
            uStack_58 = 0;
            uStack_68 = 0;
            iVar14 = __msecs_to_jiffies(*(arg1 + 0x178));
            init_wait_entry(&uStack_68,0);
            while( true ) {
                prepare_to_wait_event(arg1 + 0x208,&uStack_68,2);
                iVar4 = sym.mhi_read_reg_field(arg1,iVar11,0x78,0xc0000000);
                if (iVar14 == 0 && (iVar4 != 0 || iStack_3c != 0)) {
                    iVar14 = 1;
                }
                if ((iVar4 != 0 || iStack_3c != 0) || (iVar14 == 0)) break;
                iVar14 = schedule_timeout();
            }
            finish_wait(arg1 + 0x208,&uStack_68);
        }
        iVar11 = *(*(arg1 + 8) + 0xc0);
        if ((iVar11 != 0) && (*(iVar11 + 0x18) == 0)) {
            ipc_log_string(*(iVar11 + 0x20),"[D][%s] RXVEC_STATUS: 0x%x\n","mhi_download_rddm_image",iStack_3c);
        }
        uVar9 = 0;
        if (iStack_3c != 2) {
            uVar9 = 0xfffffffb;
        }
        goto code_r0x08010b9c;
    }
    iVar11 = *(iVar14 + 0xc0);
    if ((iVar11 != 0) && (*(iVar11 + 0x18) == 0)) {
        uVar12 = *(iVar11 + 0x20);
        uVar5 = sym.to_mhi_pm_state_str(*(arg1 + 0x17c));
        uVar2 = *(arg1 + 0x188);
        pcVar7 = "INVALID_STATE";
        if ((uVar2 < 0x100) && (0xf6 < uVar2 - 8)) {
            pcVar7 = *(reloc..str.14.llvm.39275123862783422 + uVar2 * 8);
        }
        if (*(arg1 + 0x184) < 10) {
            pcVar8 = *(reloc..str.llvm.39275123862783422 + *(arg1 + 0x184) * 8);
        }
        else {
            pcVar8 = "INVALID_EE";
        }
        ipc_log_string(uVar12,"[D][%s] Entered with pm_state:%s dev_state:%s ee:%s\n","__mhi_download_rddm_in_panic",
                       uVar5,pcVar7,pcVar8);
    }
    *(arg1 + 0x17c) = 0x800;
    DataMemoryBarrier(2,2);
    uVar2 = sym.mhi_get_exec_env(arg1);
    uVar13 = uVar2;
    if (uVar2 == 3) {
code_r0x08010b10:
        iVar11 = *(*(arg1 + 8) + 0xc0);
        if ((iVar11 != 0) && (*(iVar11 + 0x18) == 0)) {
            if (uVar13 < 10) {
                pcVar7 = *(reloc..str.llvm.39275123862783422 + uVar13 * 8);
            }
            else {
                pcVar7 = "INVALID_EE";
            }
            ipc_log_string(*(iVar11 + 0x20),"[D][%s] Waiting for RDDM image download via BHIe, current EE:%s\n",
                           "__mhi_download_rddm_in_panic",pcVar7);
        }
        iVar4 = sym.mhi_rddm_download_status(arg1);
        iVar11 = *(*(arg1 + 8) + 0xc0);
        if (iVar4 == 0) {
            if ((iVar11 != 0) && (*(iVar11 + 0x18) < 2)) {
                ipc_log_string(*(iVar11 + 0x20),"[I][%s] RDDM dumps collected successfully",
                               "__mhi_download_rddm_in_panic");
            }
            uVar9 = 0;
            goto code_r0x08010b9c;
        }
        if (9 < uVar13) goto code_r0x08010bf0;
        bVar1 = false;
        pcVar7 = *(reloc..str.llvm.39275123862783422 + uVar13 * 8);
    }
    else {
        if (uVar2 != 10) {
            iVar11 = *(*(arg1 + 8) + 0xc0);
            if ((iVar11 != 0) && (*(iVar11 + 0x18) == 0)) {
                ipc_log_string(*(iVar11 + 0x20),"[D][%s] Trigger device into RDDM mode using SYS ERR\n",
                               "__mhi_download_rddm_in_panic");
            }
            sym.mhi_set_mhi_state(arg1,0xff);
            iVar11 = *(*(arg1 + 8) + 0xc0);
            if ((iVar11 != 0) && (*(iVar11 + 0x18) == 0)) {
                ipc_log_string(*(iVar11 + 0x20),"[D][%s] Waiting for device to enter RDDM\n",
                               "__mhi_download_rddm_in_panic");
            }
            iVar4 = 99;
            do {
                iVar3 = sym.mhi_get_exec_env(arg1);
                if (iVar3 == 3) {
                    if (0 < iVar4) goto code_r0x08010b04;
                    break;
                }
                __const_udelay(0x8312b0);
                iVar4 = iVar4 + -1;
            } while (iVar4 != -1);
            iVar11 = *(*(arg1 + 8) + 0xc0);
            if ((iVar11 != 0) && (*(iVar11 + 0x18) == 0)) {
                ipc_log_string(*(iVar11 + 0x20),"[D][%s] Did not enter RDDM, do a host req reset\n",
                               "__mhi_download_rddm_in_panic");
            }
            sym.mhi_soc_reset(arg1);
            __const_udelay(0x8312b0);
code_r0x08010b04:
            uVar13 = sym.mhi_get_exec_env(arg1);
            uVar13 = uVar13 & 0xffffffff;
            goto code_r0x08010b10;
        }
        iVar11 = *(*(arg1 + 8) + 0xc0);
code_r0x08010bf0:
        bVar1 = true;
        pcVar7 = "INVALID_EE";
    }
    _dev_err(iVar14 + 0x28,"[E][%s] RDDM transfer failed. Current EE: %s\n","__mhi_download_rddm_in_panic",pcVar7);
    if ((iVar11 == 0) || (2 < *(iVar11 + 0x18))) {
        uVar9 = 0xfffffffb;
    }
    else {
        if (bVar1) {
            pcVar7 = "INVALID_EE";
        }
        else {
            pcVar7 = *(reloc..str.llvm.39275123862783422 + uVar13 * 8);
        }
        ipc_log_string(*(iVar11 + 0x20),"[E][%s] RDDM transfer failed. Current EE: %s\n",
                       "__mhi_download_rddm_in_panic",pcVar7);
        uVar9 = 0xfffffffb;
    }
code_r0x08010b9c:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_38) {
        return;
    }
    auVar16 = __stack_chk_fail(uVar9);
    puVar6 = auVar16._8_8_;
    *extraout_x18 = sym.mhi_free_bhie_table;
    if (*(auVar16._0_8_ + 0x28c) == '\0') {
        piVar10 = *puVar6;
        if (piVar10[2] != 0) {
            uVar2 = 0;
            puVar15 = *piVar10 + 0x10;
            do {
                dma_free_attrs(*auVar16._0_8_,puVar15[1],puVar15[-2],*puVar15,0x40);
                piVar10 = *puVar6;
                uVar2 = uVar2 + 1;
                puVar15 = puVar15 + 4;
            } while (uVar2 < *(piVar10 + 2));
        }
        kfree(*piVar10);
        kfree(*puVar6);
        *puVar6 = 0;
    }
    return;
}


// ===== sym.mhi_free_bhie_table @ 0x08010c6c (size 148) =====

void sym.mhi_free_bhie_table(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong *in_x18;
    uint32_t uVar2;
    ulong *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x28c) == '\0') {
        piVar1 = *arg2;
        if (piVar1[2] != 0) {
            uVar2 = 0;
            puVar3 = *piVar1 + 0x10;
            do {
                dma_free_attrs(*arg1,puVar3[1],puVar3[-2],*puVar3,0x40);
                piVar1 = *arg2;
                uVar2 = uVar2 + 1;
                puVar3 = puVar3 + 4;
            } while (uVar2 < *(piVar1 + 2));
        }
        kfree(*piVar1);
        kfree(*arg2);
        *arg2 = 0;
    }
    return;
}


// ===== sym.mhi_alloc_bhie_table @ 0x08010d00 (size 396) =====

uint sym.mhi_alloc_bhie_table(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    int64_t *piVar4;
    int64_t iVar5;
    ulong uVar6;
    uint uVar7;
    ulong *in_x18;
    ulong *puVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x28c) == '\0') {
        uVar9 = *(arg1 + 0x70);
        iVar5 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar5 = 0x30;
        }
        piVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xdc0,0x18);
        if (piVar4 != NULL) {
            uVar3 = 0;
            if (uVar9 != 0) {
                uVar3 = ((arg3 + uVar9) - 1) / uVar9;
            }
            uVar1 = uVar3 + 1;
            if (uVar1 >> 0x3b == 0) {
                iVar5 = __kmalloc(-(uVar1 >> 0x1f) & 0xffffffe000000000 | uVar1 << 5,0xdc0);
                *piVar4 = iVar5;
                if (iVar5 != 0) {
                    if (uVar3 < 0x7fffffff) {
                        uVar11 = 0;
                        uVar10 = 0;
                        puVar8 = iVar5 + 0x10;
                        do {
                            uVar6 = *arg1;
                            uVar2 = uVar11;
                            if (uVar10 != (uVar3 & 0xffffffff)) {
                                uVar2 = uVar9;
                            }
                            puVar8[1] = uVar2;
                            iVar5 = dma_alloc_attrs(uVar6,uVar2,puVar8,0xcc0,0x40);
                            puVar8[-2] = iVar5;
                            if (iVar5 == 0) {
                                if (uVar10 != 0) {
                                    uVar10 = uVar10 + 1;
                                    do {
                                        dma_free_attrs(*arg1,puVar8[-3],puVar8[-6],puVar8[-4],0x40);
                                        uVar1 = uVar10 - 1;
                                        uVar10 = uVar1;
                                        puVar8 = puVar8 + -4;
                                    } while (1 < uVar1);
                                }
                                goto code_r0x08010e50;
                            }
                            uVar10 = uVar10 + 1;
                            puVar8 = puVar8 + 4;
                            uVar11 = uVar11 + 0x10;
                        } while (uVar10 != uVar1);
                        iVar5 = *piVar4;
                    }
                    iVar5 = *(iVar5 + (-(uVar3 >> 0x1f & 1) & 0xffffffe000000000 | (uVar3 & 0xffffffff) << 5));
                    *(piVar4 + 2) = uVar1;
                    *arg2 = piVar4;
                    piVar4[1] = iVar5;
                    return 0;
                }
            }
            else {
                *piVar4 = 0;
            }
code_r0x08010e50:
            kfree(piVar4);
        }
        uVar7 = 0xfffffff4;
    }
    else {
        uVar7 = 0;
    }
    return uVar7;
}


// ===== sym.mhi_fw_load_handler @ 0x08010e8c (size 2484) =====

uint64_t sym.mhi_fw_load_handler(int64_t arg1)

{
    uint64_t *puVar1;
    int iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    ulong uVar5;
    char *pcVar6;
    int64_t iVar7;
    int64_t *piVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *unaff_x20;
    int64_t iVar10;
    int64_t arg2;
    uint64_t unaff_x21;
    code *pcVar11;
    ulong *unaff_x22;
    ulong *unaff_x23;
    ulong *puVar12;
    int64_t iVar13;
    ulong *unaff_x24;
    ulong *puVar14;
    uint64_t unaff_x25;
    int64_t iVar15;
    int64_t iVar16;
    ulong unaff_x30;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    int iStack_10c;
    int64_t iStack_108;
    uchar *puStack_100;
    code *pcStack_f8;
    uint64_t uStack_f0;
    ulong *puStack_e0;
    ulong *puStack_d8;
    ulong *puStack_d0;
    uint64_t uStack_c8;
    ulong *puStack_c0;
    int64_t iStack_b8;
    int64_t iStack_b0;
    uint64_t uStack_a8;
    uint64_t *puStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar16 = sp_el0;
    iStack_68 = *(iVar16 + 0x5e0);
    uStack_a8 = 0;
    puStack_a0 = NULL;
    iVar16 = *(arg1 + 8);
    if (*(arg1 + 0x17c) < 0x80) {
        iVar2 = sym.mhi_read_reg(arg1,*(arg1 + 0x20),0x40,arg1 + 0xdc);
        if (iVar2 != 0) {
            iVar10 = *(*(arg1 + 8) + 0xc0);
            _dev_err(iVar16 + 0x28,"[E][%s] Could not capture serial number via BHI\n","mhi_fw_load_handler");
            if ((iVar10 != 0) && (*(iVar10 + 0x18) < 3)) {
                ipc_log_string(*(iVar10 + 0x20),"[E][%s] Could not capture serial number via BHI\n",
                               "mhi_fw_load_handler");
            }
        }
        iVar10 = 0xe0;
        do {
            iVar2 = sym.mhi_read_reg(arg1,*(arg1 + 0x20),iVar10 - 0x7c,arg1 + iVar10);
            if (iVar2 != 0) {
                iVar10 = *(*(arg1 + 8) + 0xc0);
                _dev_err(iVar16 + 0x28,"[E][%s] Could not capture OEM PK HASH via BHI\n","mhi_fw_load_handler");
                if ((iVar10 != 0) && (*(iVar10 + 0x18) < 3)) {
                    ipc_log_string(*(iVar10 + 0x20),"[E][%s] Could not capture OEM PK HASH via BHI\n",
                                   "mhi_fw_load_handler");
                }
                break;
            }
            iVar10 = iVar10 + 4;
        } while (iVar10 != 0x120);
        iVar2 = *(arg1 + 0x184);
        if ((iVar2 == 6) || (iVar2 == 0)) {
            iVar10 = 0x58;
            if (iVar2 != 6) {
                iVar10 = 0x48;
            }
            unaff_x20 = *(arg1 + iVar10);
            if ((unaff_x20 == NULL) || ((*(arg1 + 0x28e) != '\0' && ((*(arg1 + 0x68) == 0 || (*(arg1 + 0x70) == 0))))))
            {
                unaff_x20 = *(*(arg1 + 8) + 0xc0);
                _dev_err(iVar16 + 0x28,"[E][%s] No firmware image defined or !sbl_size || !seg_len\n",
                         "mhi_fw_load_handler");
                if ((unaff_x20 != NULL) && (*(unaff_x20 + 3) < 3)) {
                    ipc_log_string(unaff_x20[4],"[E][%s] No firmware image defined or !sbl_size || !seg_len\n",
                                   "mhi_fw_load_handler");
                }
            }
            else {
                uVar3 = request_firmware(&puStack_a0,unaff_x20,*(iVar16 + 0x88));
                if (uVar3 == 0) {
code_r0x08010fb0:
                    puVar1 = puStack_a0;
                    if (*(arg1 + 0x28e) != '\0') {
                        puVar1 = arg1 + 0x68;
                    }
                    unaff_x21 = *puStack_a0;
                    if (*puVar1 <= *puStack_a0) {
                        unaff_x21 = *puVar1;
                    }
                    unaff_x23 = dma_alloc_attrs(*arg1,unaff_x21,&uStack_a8,0xcc0,0);
                    if (unaff_x23 != NULL) {
                        memcpy(unaff_x23,puStack_a0[1],unaff_x21);
                        unaff_x25 = uStack_a8;
                        unaff_x22 = arg1 + 0x170;
                        iVar10 = *(arg1 + 0x20);
                        iVar15 = *(arg1 + 8);
                        uStack_70 = 0;
                        _raw_read_lock_bh(unaff_x22);
                        if ((*(arg1 + 0x17c) & 0x7de) == 0) {
code_r0x0801144c:
                            _raw_read_unlock_bh(unaff_x22);
code_r0x08011454:
                            unaff_x24 = 0xfffffffb;
                        }
                        else {
                            uVar4 = prandom_u32();
                            *(arg1 + 0x120) = ((uVar4 & 0xffffffff) * 0x3fffffff >> 0x20) + 1;
                            iVar7 = *(*(arg1 + 8) + 0xc0);
                            if ((iVar7 != 0) && (*(iVar7 + 0x18) == 0)) {
                                ipc_log_string(*(iVar7 + 0x20),
                                               "[D][%s] Starting image download via BHI. Session ID: %u\n",
                                               "mhi_fw_load_bhi");
                            }
                            iStack_b0 = iVar15;
                            sym.mhi_write_reg(arg1,iVar10,0x2c,0);
                            sym.mhi_write_reg(arg1,iVar10,0xc,unaff_x25 >> 0x20);
                            sym.mhi_write_reg(arg1,iVar10,8,unaff_x25 & 0xffffffff);
                            sym.mhi_write_reg(arg1,iVar10,0x10,unaff_x21 & 0xffffffff);
                            sym.mhi_write_reg(arg1,iVar10,0x18,*(arg1 + 0x120));
                            _raw_read_unlock_bh(unaff_x22);
                            unaff_x25 = __msecs_to_jiffies(*(arg1 + 0x178));
                            uVar4 = unaff_x25;
                            if ((*(arg1 + 0x17c) < 0x80) &&
                               (iVar2 = sym.mhi_read_reg_field(arg1,iVar10,0x2c,0xc0000000), iVar2 == 0)) {
                                if (unaff_x25 == 0 && uStack_70._4_4_ != 0) {
                                    uVar4 = 1;
                                }
                                if ((uStack_70._4_4_ == 0) && (uVar4 != 0)) {
                                    uStack_80 = 0;
                                    uStack_78 = 0;
                                    uStack_90 = 0;
                                    uStack_88 = 0;
                                    uStack_98 = 0;
                                    uVar4 = __msecs_to_jiffies(*(arg1 + 0x178));
                                    init_wait_entry(&uStack_98,0);
                                    unaff_x25 = arg1 + 0x208;
                                    while ((prepare_to_wait_event(unaff_x25,&uStack_98,2), *(arg1 + 0x17c) < 0x80 &&
                                           (iVar2 = sym.mhi_read_reg_field(arg1,iVar10,0x2c,0xc0000000), iVar2 == 0)
                                           )) {
                                        if (uVar4 == 0 && uStack_70._4_4_ != 0) {
                                            uVar4 = 1;
                                        }
                                        if ((uStack_70._4_4_ != 0) || (uVar4 == 0)) goto code_r0x080113c0;
                                        uVar4 = schedule_timeout(uVar4);
                                    }
                                    if (uVar4 == 0) {
                                        uVar4 = 1;
                                    }
code_r0x080113c0:
                                    finish_wait(unaff_x25,&uStack_98);
                                }
                            }
                            else if (unaff_x25 == 0) {
                                uVar4 = 1;
                            }
                            iVar15 = iStack_b0;
                            if (0x7f < *(arg1 + 0x17c)) goto code_r0x08011454;
                            if (uStack_70._4_4_ == 3) {
                                unaff_x25 = *(*(arg1 + 8) + 0xc0);
                                _dev_err(iStack_b0 + 0x28,"[E][%s] Image transfer failed\n","mhi_fw_load_bhi");
                                if ((unaff_x25 != 0) && (*(unaff_x25 + 0x18) < 3)) {
                                    ipc_log_string(*(unaff_x25 + 0x20),"[E][%s] Image transfer failed\n",
                                                   "mhi_fw_load_bhi");
                                }
                                _raw_read_lock_bh(unaff_x22);
                                if (((*(arg1 + 0x17c) & 0x7de) != 0) &&
                                   (iVar2 = sym.mhi_read_reg(arg1,iVar10,0x30,&uStack_70), iVar2 == 0)) {
                                    unaff_x25 = *(*(arg1 + 8) + 0xc0);
                                    _dev_err(iVar15 + 0x28,"[E][%s] Reg: %s value: 0x%x\n","mhi_fw_load_bhi",
                                             "ERROR_CODE",uStack_70 & 0xffffffff);
                                    if ((unaff_x25 != 0) && (*(unaff_x25 + 0x18) < 3)) {
                                        ipc_log_string(*(unaff_x25 + 0x20),"[E][%s] Reg: %s value: 0x%x\n",
                                                       "mhi_fw_load_bhi","ERROR_CODE",uStack_70 & 0xffffffff);
                                    }
                                    iVar2 = sym.mhi_read_reg(arg1,iVar10,0x34,&uStack_70);
                                    if (iVar2 == 0) {
                                        unaff_x25 = *(*(arg1 + 8) + 0xc0);
                                        _dev_err(iVar15 + 0x28,"[E][%s] Reg: %s value: 0x%x\n","mhi_fw_load_bhi",
                                                 "ERROR_DBG1",uStack_70 & 0xffffffff);
                                        if ((unaff_x25 != 0) && (*(unaff_x25 + 0x18) < 3)) {
                                            ipc_log_string(*(unaff_x25 + 0x20),"[E][%s] Reg: %s value: 0x%x\n",
                                                           "mhi_fw_load_bhi","ERROR_DBG1",uStack_70 & 0xffffffff);
                                        }
                                        iVar2 = sym.mhi_read_reg(arg1,iVar10,0x38,&uStack_70);
                                        if (iVar2 == 0) {
                                            unaff_x25 = *(*(arg1 + 8) + 0xc0);
                                            _dev_err(iStack_b0 + 0x28,"[E][%s] Reg: %s value: 0x%x\n",
                                                     "mhi_fw_load_bhi","ERROR_DBG2",uStack_70 & 0xffffffff);
                                            if ((unaff_x25 != 0) && (*(unaff_x25 + 0x18) < 3)) {
                                                ipc_log_string(*(unaff_x25 + 0x20),"[E][%s] Reg: %s value: 0x%x\n",
                                                               "mhi_fw_load_bhi","ERROR_DBG2",uStack_70 & 0xffffffff);
                                            }
                                            iVar2 = sym.mhi_read_reg(arg1,iVar10,0x3c,&uStack_70);
                                            if (iVar2 == 0) {
                                                iVar10 = *(*(arg1 + 8) + 0xc0);
                                                _dev_err(iStack_b0 + 0x28,"[E][%s] Reg: %s value: 0x%x\n",
                                                         "mhi_fw_load_bhi","ERROR_DBG3",uStack_70 & 0xffffffff);
                                                if ((iVar10 != 0) && (*(iVar10 + 0x18) < 3)) {
                                                    ipc_log_string(*(iVar10 + 0x20),"[E][%s] Reg: %s value: 0x%x\n",
                                                                   "mhi_fw_load_bhi","ERROR_DBG3",
                                                                   uStack_70 & 0xffffffff);
                                                }
                                            }
                                        }
                                    }
                                }
                                goto code_r0x0801144c;
                            }
                            uVar3 = 0xffffff92;
                            if (uVar4 != 0) {
                                uVar3 = 0;
                            }
                            unaff_x24 = uVar3;
                        }
                        dma_free_attrs(*arg1,unaff_x21,unaff_x23,uStack_a8,0);
                        if (unaff_x24 == 0) {
                            if (unaff_x20 != *(arg1 + 0x58)) {
                                _raw_write_lock_irq(unaff_x22);
                                *(arg1 + 0x188) = 0;
                                _raw_write_unlock_irq(unaff_x22);
                                if (*(arg1 + 0x28e) != '\0') {
                                    unaff_x20 = *puStack_a0;
                                    unaff_x21 = puStack_a0[1];
                                    if (*(arg1 + 0x90) != '\0') {
                                        uVar4 = *(arg1 + 0x68);
                                        unaff_x21 = unaff_x21 + uVar4;
                                        unaff_x20 = unaff_x20 - uVar4;
                                    }
                                    unaff_x22 = arg1 + 0x80;
                                    iVar2 = sym.mhi_alloc_bhie_table(arg1,unaff_x22,unaff_x20);
                                    if (iVar2 != 0) goto code_r0x080114d4;
                                    if (unaff_x20 != NULL) {
                                        puVar12 = (*unaff_x22)[1];
                                        puVar14 = **unaff_x22 + 0x10;
                                        do {
                                            unaff_x22 = unaff_x20;
                                            if (puVar14[1] <= unaff_x20) {
                                                unaff_x22 = puVar14[1];
                                            }
                                            memcpy(puVar14[-2],unaff_x21,unaff_x22);
                                            unaff_x24 = puVar14 + 4;
                                            unaff_x21 = unaff_x21 + unaff_x22;
                                            unaff_x20 = unaff_x20 - unaff_x22;
                                            unaff_x23 = puVar12 + 2;
                                            *puVar12 = *puVar14;
                                            puVar12[1] = unaff_x22;
                                            puVar12 = unaff_x23;
                                            puVar14 = unaff_x24;
                                        } while (unaff_x20 != NULL);
                                    }
                                }
                            }
                            release_firmware(puStack_a0);
                            goto code_r0x08011540;
                        }
                        unaff_x20 = *(*(arg1 + 8) + 0xc0);
                        _dev_err(iVar16 + 0x28,"[E][%s] MHI did not load image over BHI, ret: %d\n",
                                 "mhi_fw_load_handler",unaff_x24);
                        if ((unaff_x20 != NULL) && (*(unaff_x20 + 3) < 3)) {
                            ipc_log_string(unaff_x20[4],"[E][%s] MHI did not load image over BHI, ret: %d\n",
                                           "mhi_fw_load_handler",unaff_x24);
                        }
                    }
code_r0x080114d4:
                    release_firmware(puStack_a0);
                }
                else if (*(arg1 + 0x50) == 0) {
                    unaff_x21 = uVar3;
                    unaff_x20 = *(*(arg1 + 8) + 0xc0);
                    _dev_err(iVar16 + 0x28,"[E][%s] Error loading firmware: %d\n","mhi_fw_load_handler",unaff_x21);
                    if ((unaff_x20 != NULL) && (*(unaff_x20 + 3) < 3)) {
                        uVar5 = unaff_x20[4];
                        pcVar6 = "[E][%s] Error loading firmware: %d\n";
code_r0x080113a4:
                        ipc_log_string(uVar5,pcVar6,"mhi_fw_load_handler",unaff_x21);
                    }
                }
                else {
                    uVar3 = request_firmware(&puStack_a0,*(arg1 + 0x50),*(iVar16 + 0x88));
                    if (uVar3 == 0) {
                        pcVar11 = *(arg1 + 0x220);
                        __cfi_slowpath_diag(0x6ba83359ac4765be,pcVar11,0x8001060);
                        (*pcVar11)(arg1,9);
                        goto code_r0x08010fb0;
                    }
                    unaff_x21 = uVar3;
                    unaff_x20 = *(*(arg1 + 8) + 0xc0);
                    _dev_err(iVar16 + 0x28,"[E][%s] Error loading fallback firmware: %d\n","mhi_fw_load_handler",
                             unaff_x21);
                    if ((unaff_x20 != NULL) && (*(unaff_x20 + 3) < 3)) {
                        uVar5 = unaff_x20[4];
                        pcVar6 = "[E][%s] Error loading fallback firmware: %d\n";
                        goto code_r0x080113a4;
                    }
                }
            }
        }
        else {
code_r0x08011540:
            uVar4 = sym.mhi_ready_state_transition(arg1);
            unaff_x20 = *(*(arg1 + 8) + 0xc0);
            if (uVar4 == 0) {
                if ((unaff_x20 != NULL) && (*(unaff_x20 + 3) < 2)) {
                    uVar5 = unaff_x20[4];
                    pcVar6 = "[I][%s] Wait for device to enter SBL or Mission mode\n";
                    goto code_r0x08011570;
                }
                goto code_r0x0801157c;
            }
            _dev_err(iVar16 + 0x28,"[E][%s] MHI did not enter READY state\n","mhi_fw_load_handler");
            if ((unaff_x20 != NULL) && (*(unaff_x20 + 3) < 3)) {
                ipc_log_string(unaff_x20[4],"[E][%s] MHI did not enter READY state\n","mhi_fw_load_handler");
            }
            if (*(arg1 + 0x28e) != '\0') {
                sym.mhi_free_bhie_table(arg1,arg1 + 0x80);
                *(arg1 + 0x80) = 0;
            }
        }
        *(arg1 + 0x17c) = 0x80;
        uVar4 = __wake_up(arg1 + 0x208,3,0,0);
    }
    else {
        arg1 = *(iVar16 + 0xc0);
        uVar4 = _dev_err(iVar16 + 0x28,"[E][%s] Device MHI is not in valid state\n","mhi_fw_load_handler");
        if ((arg1 != 0) && (*(arg1 + 0x18) < 3)) {
            uVar5 = *(arg1 + 0x20);
            pcVar6 = "[E][%s] Device MHI is not in valid state\n";
code_r0x08011570:
            uVar4 = ipc_log_string(uVar5,pcVar6,"mhi_fw_load_handler");
        }
    }
code_r0x0801157c:
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_68) {
        return uVar4;
    }
    iVar10 = __stack_chk_fail();
    *extraout_x18 = sym.mhi_download_amss_image;
    pcStack_f8 = sym.mhi_download_amss_image;
    iVar16 = sp_el0;
    iStack_108 = *(iVar16 + 0x5e0);
    piVar8 = *(iVar10 + 0x80);
    puStack_100 = &stack0xffffffffffffffa0;
    uStack_f0 = unaff_x25;
    puStack_e0 = unaff_x24;
    puStack_d8 = unaff_x23;
    puStack_d0 = unaff_x22;
    uStack_c8 = unaff_x21;
    puStack_c0 = unaff_x20;
    iStack_b8 = arg1;
    if (piVar8 == NULL) {
        uVar3 = 0xfffffffb;
    }
    else {
        iVar16 = iVar10 + 0x170;
        iVar13 = *(iVar10 + 8);
        iStack_10c = 0;
        arg2 = *(iVar10 + 0x28);
        iVar15 = *piVar8;
        iVar7 = piVar8[2];
        _raw_read_lock_bh(iVar16);
        if ((*(iVar10 + 0x17c) & 0x7de) == 0) {
            _raw_read_unlock_bh(iVar16);
            uVar3 = 0xfffffffb;
        }
        else {
            uVar4 = prandom_u32();
            iVar9 = *(*(iVar10 + 8) + 0xc0);
            if ((iVar9 != 0) && (*(iVar9 + 0x18) == 0)) {
                ipc_log_string(*(iVar9 + 0x20),"[D][%s] Starting image download via BHIe. Sequence ID: %u\n",
                               "mhi_fw_load_bhie",((uVar4 & 0xffffffff) * 0x3fffffff >> 0x20) + 1);
            }
            iVar15 = iVar15 + (iVar7 - 1) * 0x20;
            sym.mhi_write_reg(iVar10,arg2,0x30,*(iVar15 + 0x14));
            sym.mhi_write_reg(iVar10,arg2,0x2c,*(iVar15 + 0x10));
            sym.mhi_write_reg(iVar10,arg2,0x34,*(iVar15 + 0x18));
            sym.mhi_write_reg_field(iVar10,arg2,0x3c,0x3fffffff);
            _raw_read_unlock_bh(iVar16);
            iVar16 = __msecs_to_jiffies(*(iVar10 + 0x178));
            if ((*(iVar10 + 0x17c) < 0x80) &&
               (iVar2 = sym.mhi_read_reg_field(iVar10,arg2,0x44,0xc0000000), iVar2 == 0)) {
                if (iVar16 == 0 && iStack_10c != 0) {
                    iVar16 = 1;
                }
                if ((iStack_10c == 0) && (iVar16 != 0)) {
                    uStack_120 = 0;
                    uStack_118 = 0;
                    uStack_130 = 0;
                    uStack_128 = 0;
                    uStack_138 = 0;
                    iVar16 = __msecs_to_jiffies(*(iVar10 + 0x178));
                    init_wait_entry(&uStack_138,0);
                    while ((prepare_to_wait_event(iVar10 + 0x208,&uStack_138,2), *(iVar10 + 0x17c) < 0x80 &&
                           (iVar2 = sym.mhi_read_reg_field(iVar10,arg2,0x44,0xc0000000), iVar2 == 0))) {
                        if (iVar16 == 0 && iStack_10c != 0) {
                            iVar16 = 1;
                        }
                        if ((iStack_10c != 0) || (iVar16 == 0)) goto code_r0x08011a78;
                        iVar16 = schedule_timeout(iVar16);
                    }
                    if (iVar16 == 0) {
                        iVar16 = 1;
                    }
code_r0x08011a78:
                    finish_wait(iVar10 + 0x208,&uStack_138);
                }
            }
            else if (iVar16 == 0) {
                iVar16 = 1;
            }
            uVar3 = 0xfffffffb;
            if ((*(iVar10 + 0x17c) < 0x80) && (iStack_10c == 2)) {
                if (iVar16 != 0) {
                    uVar3 = 0;
                    goto code_r0x08011b08;
                }
                uVar3 = 0xffffff92;
            }
        }
        iVar16 = *(*(iVar10 + 8) + 0xc0);
        _dev_err(iVar13 + 0x28,"[E][%s] MHI did not load AMSS, ret:%d\n","mhi_download_amss_image",uVar3);
        if ((iVar16 != 0) && (*(iVar16 + 0x18) < 3)) {
            ipc_log_string(*(iVar16 + 0x20),"[E][%s] MHI did not load AMSS, ret:%d\n","mhi_download_amss_image",uVar3
                          );
        }
        *(iVar10 + 0x17c) = 0x80;
        __wake_up(iVar10 + 0x208,3,0,0);
    }
code_r0x08011b08:
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_108) {
        return uVar3;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.mhi_misc_init;
    uVar4 = __mutex_init(0x8000888,"&mhi_bus.lock",obj.mhi_register_controller.__key);
    _obj.mhi_register_controller.__key = obj.mhi_register_controller.__key;
    _obj.mhi_controller_ida = obj.mhi_register_controller.__key;
    return uVar4;
}


// ===== sym.mhi_download_amss_image @ 0x08011840 (size 776) =====

uint64_t sym.mhi_download_amss_image(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t *piVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar7;
    int64_t arg2;
    int64_t iVar8;
    int64_t iVar9;
    ulong unaff_x30;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    int iStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    piVar5 = *(arg1 + 0x80);
    if (piVar5 == NULL) {
        uVar7 = 0xfffffffb;
    }
    else {
        iVar4 = arg1 + 0x170;
        iVar8 = *(arg1 + 8);
        iStack_5c = 0;
        arg2 = *(arg1 + 0x28);
        iVar9 = *piVar5;
        iVar1 = piVar5[2];
        _raw_read_lock_bh(iVar4);
        if ((*(arg1 + 0x17c) & 0x7de) == 0) {
            _raw_read_unlock_bh(iVar4);
            uVar7 = 0xfffffffb;
        }
        else {
            uVar3 = prandom_u32();
            iVar6 = *(*(arg1 + 8) + 0xc0);
            if ((iVar6 != 0) && (*(iVar6 + 0x18) == 0)) {
                ipc_log_string(*(iVar6 + 0x20),"[D][%s] Starting image download via BHIe. Sequence ID: %u\n",
                               "mhi_fw_load_bhie",((uVar3 & 0xffffffff) * 0x3fffffff >> 0x20) + 1);
            }
            iVar9 = iVar9 + (iVar1 - 1) * 0x20;
            sym.mhi_write_reg(arg1,arg2,0x30,*(iVar9 + 0x14));
            sym.mhi_write_reg(arg1,arg2,0x2c,*(iVar9 + 0x10));
            sym.mhi_write_reg(arg1,arg2,0x34,*(iVar9 + 0x18));
            sym.mhi_write_reg_field(arg1,arg2,0x3c,0x3fffffff);
            _raw_read_unlock_bh(iVar4);
            iVar4 = __msecs_to_jiffies(*(arg1 + 0x178));
            if ((*(arg1 + 0x17c) < 0x80) && (iVar2 = sym.mhi_read_reg_field(arg1,arg2,0x44,0xc0000000), iVar2 == 0))
            {
                if (iVar4 == 0 && iStack_5c != 0) {
                    iVar4 = 1;
                }
                if ((iStack_5c == 0) && (iVar4 != 0)) {
                    uStack_70 = 0;
                    uStack_68 = 0;
                    uStack_80 = 0;
                    uStack_78 = 0;
                    uStack_88 = 0;
                    iVar4 = __msecs_to_jiffies(*(arg1 + 0x178));
                    init_wait_entry(&uStack_88,0);
                    while ((prepare_to_wait_event(arg1 + 0x208,&uStack_88,2), *(arg1 + 0x17c) < 0x80 &&
                           (iVar2 = sym.mhi_read_reg_field(arg1,arg2,0x44,0xc0000000), iVar2 == 0))) {
                        if (iVar4 == 0 && iStack_5c != 0) {
                            iVar4 = 1;
                        }
                        if ((iStack_5c != 0) || (iVar4 == 0)) goto code_r0x08011a78;
                        iVar4 = schedule_timeout(iVar4);
                    }
                    if (iVar4 == 0) {
                        iVar4 = 1;
                    }
code_r0x08011a78:
                    finish_wait(arg1 + 0x208,&uStack_88);
                }
            }
            else if (iVar4 == 0) {
                iVar4 = 1;
            }
            uVar7 = 0xfffffffb;
            if ((*(arg1 + 0x17c) < 0x80) && (iStack_5c == 2)) {
                if (iVar4 != 0) {
                    uVar7 = 0;
                    goto code_r0x08011b08;
                }
                uVar7 = 0xffffff92;
            }
        }
        iVar4 = *(*(arg1 + 8) + 0xc0);
        _dev_err(iVar8 + 0x28,"[E][%s] MHI did not load AMSS, ret:%d\n","mhi_download_amss_image",uVar7);
        if ((iVar4 != 0) && (*(iVar4 + 0x18) < 3)) {
            ipc_log_string(*(iVar4 + 0x20),"[E][%s] MHI did not load AMSS, ret:%d\n","mhi_download_amss_image",uVar7)
            ;
        }
        *(arg1 + 0x17c) = 0x80;
        __wake_up(arg1 + 0x208,3,0,0);
    }
code_r0x08011b08:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_58) {
        return uVar7;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.mhi_misc_init;
    uVar3 = __mutex_init(0x8000888,"&mhi_bus.lock",obj.mhi_register_controller.__key);
    _obj.mhi_register_controller.__key = obj.mhi_register_controller.__key;
    _obj.mhi_controller_ida = obj.mhi_register_controller.__key;
    return uVar3;
}


// ===== sym.mhi_misc_init @ 0x08011b48 (size 80) =====

void sym.mhi_misc_init(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __mutex_init(0x8000888,"&mhi_bus.lock",obj.mhi_register_controller.__key);
    _obj.mhi_register_controller.__key = obj.mhi_register_controller.__key;
    _obj.mhi_controller_ida = obj.mhi_register_controller.__key;
    return;
}


// ===== sym.mhi_misc_exit @ 0x08011b98 (size 12) =====

void sym.mhi_misc_exit(void)

{
    return;
}


// ===== sym.mhi_force_reg_write @ 0x08011ba4 (size 56) =====

void sym.mhi_force_reg_write(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x180) >> 3 & 1) == 0) {
        flush_work(*(*(arg1 + 8) + 0xc0) + 0x78);
    }
    return;
}


// ===== sym.mhi_reset_reg_write_q @ 0x08011bdc (size 92) =====

void sym.mhi_reset_reg_write_q(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x180) >> 3 & 1) == 0) {
        iVar1 = *(*(arg1 + 8) + 0xc0);
        cancel_work_sync(iVar1 + 0x78);
        memset(*(iVar1 + 0xa8),0,0x2000);
        *(iVar1 + 0xb4) = 0;
        *(iVar1 + 0xb0) = 0xffffffff;
    }
    return;
}


// ===== sym.mhi_write_reg_offload @ 0x08011c38 (size 204) =====

void sym.mhi_write_reg_offload(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    int64_t extraout_x1;
    uint uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint32_t *extraout_x8;
    uint32_t *puVar7;
    int64_t iVar8;
    int64_t extraout_x9;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar4 = arg4;
    *in_x18 = unaff_x30;
    iVar8 = *(*(arg1 + 8) + 0xc0);
    puVar7 = iVar8 + 0xb0;
    while( true ) {
        Hint_Prefetch(puVar7,2,0,1);
        do {
            uVar1 = *puVar7;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar7,0x10);
            if (bVar3) {
                *puVar7 = uVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
        uVar5 = uVar1 + 1 & 0x1ff;
        if (*(*(iVar8 + 0xa8) + uVar5 * 0x10 + 0xc) == '\0') break;
        panic("queue full idx %d",uVar5);
        arg2 = extraout_x1;
        puVar7 = extraout_x8;
        iVar8 = extraout_x9;
    }
    iVar6 = uVar5 * 0x10;
    *(*(iVar8 + 0xa8) + iVar6) = arg2 + (arg3 & 0xffffffffU);
    *(*(iVar8 + 0xa8) + iVar6 + 8) = uVar4;
    DataMemoryBarrier(2,2);
    *(*(iVar8 + 0xa8) + iVar6 + 0xc) = 1;
    DataMemoryBarrier(2,2);
    queue_work_on(0x20,*(iVar8 + 0x70),iVar8 + 0x78);
    return;
}


// ===== sym.mhi_write_offload_wakedb @ 0x08011d04 (size 380) =====

void sym.mhi_write_offload_wakedb(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t extraout_x8;
    int64_t iVar6;
    ulong uVar7;
    int64_t extraout_x9;
    uint32_t *extraout_x10;
    uint32_t *puVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(arg1 + 0x30);
    iVar5 = *(*(arg1 + 8) + 0xc0);
    puVar8 = iVar5 + 0xb0;
    do {
        Hint_Prefetch(puVar8,2,0,1);
        do {
            uVar1 = *puVar8;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar8,0x10);
            if (bVar3) {
                *puVar8 = uVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
        uVar4 = uVar1 + 1 & 0x1ff;
        if (*(*(iVar5 + 0xa8) + uVar4 * 0x10 + 0xc) == '\0') {
            iVar9 = uVar4 * 0x10;
            *(*(iVar5 + 0xa8) + iVar9) = iVar6 + 4;
            *(*(iVar5 + 0xa8) + iVar9 + 8) = arg2 >> 0x1f;
            DataMemoryBarrier(2,2);
            *(*(iVar5 + 0xa8) + iVar9 + 0xc) = 1;
            DataMemoryBarrier(2,2);
            queue_work_on(0x20,*(iVar5 + 0x70),iVar5 + 0x78);
            uVar7 = *(arg1 + 0x30);
            iVar5 = *(*(arg1 + 8) + 0xc0);
            puVar8 = iVar5 + 0xb0;
            Hint_Prefetch(puVar8,2,0,1);
            do {
                uVar1 = *puVar8;
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar8,0x10);
                if (bVar3) {
                    *puVar8 = uVar1 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            DataMemoryBarrier(2,3);
            uVar4 = uVar1 + 1 & 0x1ff;
            if (*(*(iVar5 + 0xa8) + uVar4 * 0x10 + 0xc) == '\0') {
                iVar6 = uVar4 * 0x10;
                *(*(iVar5 + 0xa8) + iVar6) = uVar7;
                *(*(iVar5 + 0xa8) + iVar6 + 8) = arg2;
                DataMemoryBarrier(2,2);
                *(*(iVar5 + 0xa8) + iVar6 + 0xc) = 1;
                DataMemoryBarrier(2,2);
                queue_work_on(0x20,*(iVar5 + 0x70),iVar5 + 0x78);
                return;
            }
        }
        panic("queue full idx %d");
        iVar5 = extraout_x8;
        iVar6 = extraout_x9;
        puVar8 = extraout_x10;
    } while( true );
}


// ===== sym.mhi_reg_write_work @ 0x08011e80 (size 208) =====

void sym.mhi_reg_write_work(int64_t arg1)

{
    int64_t *piVar1;
    uint32_t uVar2;
    char cVar3;
    int iVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t *piVar6;
    char *pcVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = *(arg1 + 0x30) + *(arg1 + 0x3c) * 0x10;
    pcVar7 = piVar1 + 0xc;
    if ((*pcVar7 != '\0') && (piVar6 = *(arg1 + -0x68), piVar6[0x31] - 2U < 5)) {
        iVar5 = *piVar6;
        iVar4 = msm_pcie_prevent_l1(iVar5 + -0xd0);
        if (iVar4 == 0) {
            cVar3 = *pcVar7;
            while ((cVar3 != '\0' && (piVar6[0x31] - 2U < 5))) {
                sym.writel_relaxed(*(piVar1 + 1),*piVar1);
                *pcVar7 = '\0';
                uVar2 = *(arg1 + 0x3c) + 1U & 0x1ff;
                piVar1 = *(arg1 + 0x30) + uVar2 * 0x10;
                *(arg1 + 0x3c) = uVar2;
                pcVar7 = piVar1 + 0xc;
                cVar3 = *pcVar7;
            }
            msm_pcie_allow_l1(iVar5 + -0xd0);
        }
    }
    return;
}


// ===== sym.writel_relaxed @ 0x08011f50 (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8011f6c);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8011f94);
    return;
}


// ===== sym.mhi_misc_sysfs_create @ 0x08011fc8 (size 248) =====

int sym.mhi_misc_sysfs_create(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 8) + 0x28;
    iVar2 = sysfs_create_group(iVar1,obj.mhi_misc_group);
    if (iVar2 == 0) {
        iVar2 = sysfs_create_group(iVar1,obj.mhi_tsync_group);
        if (iVar2 == 0) {
            return 0;
        }
        iVar4 = *(*(arg1 + 8) + 0xc0);
        _dev_err(iVar1,"[E][%s] Failed to create time synchronization sysfs group\n","mhi_misc_sysfs_create");
        if (iVar4 == 0) {
            return iVar2;
        }
        if (2 < *(iVar4 + 0x18)) {
            return iVar2;
        }
        pcVar3 = "[E][%s] Failed to create time synchronization sysfs group\n";
    }
    else {
        iVar4 = *(*(arg1 + 8) + 0xc0);
        _dev_err(iVar1,"[E][%s] Failed to create misc sysfs group\n","mhi_misc_sysfs_create");
        if (iVar4 == 0) {
            return iVar2;
        }
        if (2 < *(iVar4 + 0x18)) {
            return iVar2;
        }
        pcVar3 = "[E][%s] Failed to create misc sysfs group\n";
    }
    ipc_log_string(*(iVar4 + 0x20),pcVar3,"mhi_misc_sysfs_create");
    return iVar2;
}


// ===== sym.mhi_misc_sysfs_destroy @ 0x080120c0 (size 80) =====

void sym.mhi_misc_sysfs_destroy(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 8) + 0x28;
    sysfs_remove_group(iVar1,obj.mhi_tsync_group);
    sysfs_remove_group(iVar1,obj.mhi_misc_group);
    return;
}


// ===== sym.mhi_misc_register_controller @ 0x08012110 (size 444) =====

ulong sym.mhi_misc_register_controller(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *puVar3;
    ulong *puVar4;
    ulong uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(arg1 + 8);
    puVar4 = kmem_cache_alloc_trace(_free_irq,0xdc0,0xb8);
    if (puVar4 != NULL) {
        iVar1 = *arg1;
        iVar2 = *(arg1 + 8);
        if (iVar1 != 0xd0) {
            dev_set_name(iVar2 + 0x28,"mhi_%04x_%02u.%02u.%02u",*(iVar1 + -0x92),*(*(iVar1 + -0xc0) + 0xfc),
                         *(*(iVar1 + -0xc0) + 0xf8),*(iVar1 + -0x98) >> 3 & 0x1f);
            iVar7 = *(iVar2 + 0x98);
            if (iVar7 == 0) {
                iVar7 = *(iVar2 + 0x28);
            }
            *(iVar2 + 8) = iVar7;
            *(puVar4 + 0xb) =
                 *(iVar1 + -0x92) << 0x10 | (*(*(iVar1 + -0xc0) + 0xfc) & 0xf) << 0xc | *(*(iVar1 + -0xc0) + 0xf8) << 4
                 | *(iVar1 + -0x98) >> 3 & 0xf;
        }
        uVar5 = ipc_log_context_create(100,*(iVar2 + 8),0);
        puVar4[4] = uVar5;
        puVar4[2] = arg1;
        mutex_lock(0x8000888);
        puVar3 = _obj.mhi_controller_ida;
        uVar6 = __list_add_valid(puVar4,_obj.mhi_controller_ida,obj.mhi_register_controller.__key);
        if ((uVar6 & 1) != 0) {
            _obj.mhi_controller_ida = puVar4;
            *puVar4 = obj.mhi_register_controller.__key;
            puVar4[1] = puVar3;
            *puVar3 = puVar4;
        }
        mutex_unlock(0x8000888);
        *(iVar8 + 0xc0) = puVar4;
        iVar8 = alloc_workqueue("mhi_offload_wq",0xa0012,1);
        puVar4[0xe] = iVar8;
        if (iVar8 == 0) {
            _dev_err(*arg1,"Failed to allocate offload workqueue\n");
        }
        else {
            puVar4[0xf] = 0xfffffffe0;
            puVar4[0x10] = puVar4 + 0x10;
            puVar4[0x11] = puVar4 + 0x10;
            uVar5 = _free_irq;
            puVar4[0x12] = sym.mhi_reg_write_work.cfi_jt;
            iVar8 = kmem_cache_alloc_trace(uVar5,0xdc0,0x2000);
            puVar4[0x15] = iVar8;
            if (iVar8 != 0) {
                *(puVar4 + 0x16) = 0xffffffff;
                return 0;
            }
            destroy_workqueue(puVar4[0xe]);
        }
        ipc_log_context_destroy(puVar4[4]);
    }
    return 0xfffffff4;
}


// ===== sym.mhi_misc_unregister_controller @ 0x080122cc (size 176) =====

void sym.mhi_misc_unregister_controller(int64_t arg1)

{
    int64_t *piVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(arg1 + 8) + 0xc0);
    if (piVar4 != NULL) {
        mutex_lock(0x8000888);
        uVar2 = __list_del_entry_valid(piVar4);
        if ((uVar2 & 1) != 0) {
            iVar3 = *piVar4;
            piVar1 = piVar4[1];
            *(iVar3 + 8) = piVar1;
            *piVar1 = iVar3;
        }
        *piVar4 = -0x2152ffffffffff00;
        piVar4[1] = -0x2152fffffffffede;
        mutex_unlock(0x8000888);
        kfree(piVar4[0x15]);
        if (piVar4[0xc] == 0) {
            iVar3 = 0;
        }
        else {
            kfree(*(piVar4[0xc] + 0x18));
            iVar3 = piVar4[0xc];
        }
        kfree(iVar3);
        kfree(piVar4[0xd]);
        kfree(piVar4);
    }
    return;
}


// ===== sym.mhi_controller_get_privdata @ 0x0801237c (size 48) =====

ulong sym.mhi_controller_get_privdata(int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    
    uVar1 = 0;
    if (arg1 != 0) {
        if ((*(arg1 + 8) == 0) || (iVar2 = *(*(arg1 + 8) + 0xc0), iVar2 == 0)) {
            return 0;
        }
        uVar1 = *(iVar2 + 0x38);
    }
    return uVar1;
}


// ===== sym.mhi_controller_set_privdata @ 0x080123ac (size 36) =====

void sym.mhi_controller_set_privdata(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    if (((arg1 != 0) && (*(arg1 + 8) != 0)) && (iVar1 = *(*(arg1 + 8) + 0xc0), iVar1 != 0)) {
        *(iVar1 + 0x38) = arg2;
    }
    return;
}


// ===== sym.mhi_bdf_to_controller @ 0x080123d0 (size 208) =====

int64_t sym.mhi_bdf_to_controller(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    ulong in_x3;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar6;
    int64_t iVar7;
    code *pcVar8;
    int64_t *piVar9;
    ulong uVar10;
    int64_t iVar11;
    ulong unaff_x30;
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
    snprintf(&uStack_58,0x20,"mhi_%04x_%02u.%02u.%02u",in_x3,arg1 & 0xffffffff,arg2 & 0xffffffff,arg3 & 0xffffffff
            );
    pcVar8 = _obj.mhi_register_controller.__key;
    do {
        if (pcVar8 == obj.mhi_register_controller.__key) {
            iVar6 = 0;
            break;
        }
        iVar6 = *(pcVar8 + 0x10);
        pcVar8 = *pcVar8;
    } while ((*(*(iVar6 + 8) + 8) == 0) || (iVar1 = strcmp(&uStack_58), iVar1 != 0));
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return iVar6;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.mhi_report_error;
    if (iVar6 == 0) {
        iVar6 = 0xffffffea;
    }
    else {
        iVar11 = *(iVar6 + 8);
        iVar5 = iVar6 + 0x170;
        piVar9 = *(*(iVar11 + 0xc0) + 0x60);
        uVar2 = _raw_write_lock_irqsave(iVar5);
        iVar1 = sym.mhi_tryset_pm_state(iVar6,0x100);
        if (iVar1 == 0x100) {
            *(iVar6 + 0x188) = 0xff;
            __wake_up(iVar6 + 0x208,3,0,0);
            _raw_write_unlock_irqrestore(iVar5,uVar2);
            if ((piVar9 != NULL) && (*piVar9 != 0)) {
                memcpy(piVar9[3],*piVar9,piVar9[2]);
                iVar5 = *(iVar11 + 0x98);
                iVar7 = *(*(iVar6 + 8) + 0xc0);
                if (iVar5 == 0) {
                    iVar5 = *(iVar11 + 0x28);
                }
                _dev_err(iVar11 + 0x28,"[E][%s] mhi: %s sfr: %s\n","mhi_report_error",iVar5,*piVar9);
                if ((iVar7 != 0) && (*(iVar7 + 0x18) < 3)) {
                    iVar5 = *(iVar11 + 0x98);
                    if (iVar5 == 0) {
                        iVar5 = *(iVar11 + 0x28);
                    }
                    ipc_log_string(*(iVar7 + 0x20),"[E][%s] mhi: %s sfr: %s\n","mhi_report_error",iVar5,*piVar9);
                }
            }
            device_for_each_child
                      (*(iVar6 + 8) + 0x28,0,sym.mhi_notify_fatal_cb.74907ba8ca9a47fec9848b5e279d5fb3.cfi_jt);
            iVar6 = 0;
        }
        else {
            iVar7 = *(*(iVar6 + 8) + 0xc0);
            uVar3 = sym.to_mhi_pm_state_str(0x100);
            uVar4 = sym.to_mhi_pm_state_str(*(iVar6 + 0x17c));
            _dev_err(iVar11 + 0x28,"[E][%s] Failed to move to state: %s from: %s\n","mhi_report_error",uVar3,uVar4);
            if ((iVar7 != 0) && (*(iVar7 + 0x18) < 3)) {
                uVar10 = *(iVar7 + 0x20);
                uVar3 = sym.to_mhi_pm_state_str(0x100);
                uVar4 = sym.to_mhi_pm_state_str(*(iVar6 + 0x17c));
                ipc_log_string(uVar10,"[E][%s] Failed to move to state: %s from: %s\n","mhi_report_error",uVar3,
                               uVar4);
            }
            _raw_write_unlock_irqrestore(iVar5,uVar2);
            iVar6 = 0xffffffff;
        }
    }
    return iVar6;
}


// ===== sym.mhi_report_error @ 0x080124a0 (size 468) =====

ulong sym.mhi_report_error(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t iVar6;
    int64_t *piVar7;
    ulong uVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        uVar2 = 0xffffffea;
    }
    else {
        iVar9 = *(arg1 + 8);
        iVar5 = arg1 + 0x170;
        piVar7 = *(*(iVar9 + 0xc0) + 0x60);
        uVar2 = _raw_write_lock_irqsave(iVar5);
        iVar1 = sym.mhi_tryset_pm_state(arg1,0x100);
        if (iVar1 == 0x100) {
            *(arg1 + 0x188) = 0xff;
            __wake_up(arg1 + 0x208,3,0,0);
            _raw_write_unlock_irqrestore(iVar5,uVar2);
            if ((piVar7 != NULL) && (*piVar7 != 0)) {
                memcpy(piVar7[3],*piVar7,piVar7[2]);
                iVar5 = *(iVar9 + 0x98);
                iVar6 = *(*(arg1 + 8) + 0xc0);
                if (iVar5 == 0) {
                    iVar5 = *(iVar9 + 0x28);
                }
                _dev_err(iVar9 + 0x28,"[E][%s] mhi: %s sfr: %s\n","mhi_report_error",iVar5,*piVar7);
                if ((iVar6 != 0) && (*(iVar6 + 0x18) < 3)) {
                    iVar5 = *(iVar9 + 0x98);
                    if (iVar5 == 0) {
                        iVar5 = *(iVar9 + 0x28);
                    }
                    ipc_log_string(*(iVar6 + 0x20),"[E][%s] mhi: %s sfr: %s\n","mhi_report_error",iVar5,*piVar7);
                }
            }
            device_for_each_child
                      (*(arg1 + 8) + 0x28,0,sym.mhi_notify_fatal_cb.74907ba8ca9a47fec9848b5e279d5fb3.cfi_jt);
            uVar2 = 0;
        }
        else {
            iVar6 = *(*(arg1 + 8) + 0xc0);
            uVar3 = sym.to_mhi_pm_state_str(0x100);
            uVar4 = sym.to_mhi_pm_state_str(*(arg1 + 0x17c));
            _dev_err(iVar9 + 0x28,"[E][%s] Failed to move to state: %s from: %s\n","mhi_report_error",uVar3,uVar4);
            if ((iVar6 != 0) && (*(iVar6 + 0x18) < 3)) {
                uVar8 = *(iVar6 + 0x20);
                uVar3 = sym.to_mhi_pm_state_str(0x100);
                uVar4 = sym.to_mhi_pm_state_str(*(arg1 + 0x17c));
                ipc_log_string(uVar8,"[E][%s] Failed to move to state: %s from: %s\n","mhi_report_error",uVar3,uVar4
                              );
            }
            _raw_write_unlock_irqrestore(iVar5,uVar2);
            uVar2 = 0xffffffff;
        }
    }
    return uVar2;
}


// ===== sym.mhi_notify_fatal_cb @ 0x08012674 (size 48) =====

ulong sym.mhi_notify_fatal_cb(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.mhi_notify(arg1 + -0x28,7);
    return 0;
}


// ===== sym.mhi_device_configure @ 0x080126a4 (size 476) =====

ulong sym.mhi_device_configure(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    ulong uVar2;
    ulong uVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    char *pcVar8;
    ulong *puVar9;
    ulong *puVar10;
    ulong uVar11;
    ulong *in_x18;
    int64_t iVar12;
    int64_t *piVar13;
    int64_t iVar14;
    int64_t iVar15;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar15 = *(arg1 + 0x10);
    iVar7 = arg2;
    iVar14 = *(iVar15 + 8);
    if ((iVar7 - 2U < 2) || (iVar7 == 0)) {
        piVar1 = arg1 + 0x20;
    }
    else {
        if (iVar7 != 1) {
            return 0xffffffea;
        }
        piVar1 = arg1 + 0x18;
    }
    if (0 < arg4) {
        iVar7 = arg4 + 1;
        piVar13 = arg3 + 0x18;
        iVar4 = *(*piVar1 + 200);
        iVar5 = *(*piVar1 + 0xd0);
        do {
            iVar12 = piVar13[-2];
            iVar6 = strcmp(iVar12,0x8001fc8);
            if (iVar6 == 0) {
                if (*piVar13 != 0x2c) {
                    iVar15 = *(*(iVar15 + 8) + 0xc0);
                    _dev_err(iVar14 + 0x28,"[E][%s] Invalid ECA size, expected:%zu actual%zu\n","mhi_device_configure"
                             ,0x2c);
                    if (iVar15 == 0) {
                        return 0xffffffea;
                    }
                    if (2 < *(iVar15 + 0x18)) {
                        return 0xffffffea;
                    }
                    pcVar8 = "[E][%s] Invalid ECA size, expected:%zu actual%zu\n";
                    goto code_r0x08012840;
                }
                puVar9 = **(iVar15 + 0x138) + iVar5 * 0x2c;
            }
            else {
                iVar6 = strcmp(iVar12,0x8001a98);
                if (iVar6 != 0) {
                    return 0xffffffea;
                }
                if (*piVar13 != 0x2c) {
                    iVar15 = *(*(iVar15 + 8) + 0xc0);
                    _dev_err(iVar14 + 0x28,"[E][%s] Invalid CCA size, expected:%zu actual:%zu\n",
                             "mhi_device_configure",0x2c);
                    if (iVar15 == 0) {
                        return 0xffffffea;
                    }
                    if (2 < *(iVar15 + 0x18)) {
                        return 0xffffffea;
                    }
                    pcVar8 = "[E][%s] Invalid CCA size, expected:%zu actual:%zu\n";
code_r0x08012840:
                    ipc_log_string(*(iVar15 + 0x20),pcVar8,"mhi_device_configure",0x2c,*piVar13);
                    return 0xffffffea;
                }
                puVar9 = *(*(iVar15 + 0x138) + 8) + iVar4 * 0x2c;
            }
            puVar10 = piVar13[-3];
            iVar7 = iVar7 + -1;
            piVar13 = piVar13 + 4;
            uVar2 = puVar10[1];
            *puVar9 = *puVar10;
            puVar9[1] = uVar2;
            uVar11 = puVar10[2];
            uVar2 = puVar10[3];
            uVar3 = puVar10[4];
            *(puVar9 + 5) = *(puVar10 + 5);
            puVar9[2] = uVar11;
            puVar9[3] = uVar2;
            puVar9[4] = uVar3;
        } while (1 < iVar7);
    }
    return 0;
}


// ===== sym.mhi_set_m2_timeout_ms @ 0x08012880 (size 36) =====

void sym.mhi_set_m2_timeout_ms(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    if (((arg1 != 0) && (*(arg1 + 8) != 0)) && (iVar1 = *(*(arg1 + 8) + 0xc0), iVar1 != 0)) {
        *(iVar1 + 0x30) = arg2;
    }
    return;
}


// ===== sym.mhi_pm_fast_resume @ 0x080128a4 (size 1140) =====

ulong sym.mhi_pm_fast_resume(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int *piVar2;
    char *pcVar3;
    uint32_t uVar4;
    char cVar5;
    bool bVar6;
    int64_t *piVar7;
    int iVar8;
    ulong uVar9;
    char *pcVar10;
    int64_t iVar11;
    ulong *in_x18;
    ulong uVar12;
    code *pcVar13;
    int64_t iVar14;
    int64_t iVar15;
    int64_t *piVar16;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar14 = *(arg1 + 8);
    iVar15 = *(iVar14 + 0xc0);
    if ((iVar15 != 0) && (*(iVar15 + 0x18) == 0)) {
        uVar12 = *(iVar15 + 0x20);
        uVar9 = sym.to_mhi_pm_state_str(*(arg1 + 0x17c));
        uVar4 = *(arg1 + 0x188);
        pcVar10 = "INVALID_STATE";
        if ((uVar4 < 0x100) && (0xf6 < uVar4 - 8)) {
            pcVar10 = *(reloc..str.14.llvm.39275123862783422 + uVar4 * 8);
        }
        pcVar3 = "true";
        if ((arg2 & 1U) == 0) {
            pcVar3 = "false";
        }
        ipc_log_string(uVar12,"[D][%s] Entered with PM state: %s, MHI state: %s notify: %s\n","mhi_pm_fast_resume",
                       uVar9,pcVar10,pcVar3);
    }
    if (*(arg1 + 0x17c) != 1) {
        if (0x7f < *(arg1 + 0x17c)) {
            return 0xfffffffb;
        }
        iVar1 = arg1 + 0x170;
        _raw_read_lock_bh(iVar1);
        if (*(arg1 + 0x17c) != 0x20) {
    //WARNING: Does not return
            pcVar13 = SoftwareBreakpoint(0x800,0x8012c54);
            (*pcVar13)();
        }
        _raw_read_unlock_bh(iVar1);
        if (((*(arg1 + 0x88) == 0) || (iVar8 = sym.mhi_get_exec_env(arg1), iVar8 != 3)) || (4 < *(arg1 + 0x188) - 2U))
        {
            if ((arg2 & 1U) != 0) {
                piVar7 = *(arg1 + 0xa0);
                while (arg1 + 0xa0 != piVar7) {
                    piVar16 = *piVar7;
                    mutex_lock(piVar7 + -0xb);
                    if (piVar7[-0xd] != 0) {
                        sym.mhi_notify(piVar7[-0xd],3);
                    }
                    mutex_unlock(piVar7 + -0xb);
                    piVar7 = piVar16;
                }
            }
            iVar11 = *(arg1 + 0x128);
            piVar2 = iVar11 + 0xb8;
            Hint_Prefetch(piVar2,2,0,1);
            do {
                cVar5 = '\x01';
                bVar6 = ExclusiveMonitorPass(piVar2,0x10);
                if (bVar6) {
                    *piVar2 = *piVar2 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                }
            } while (cVar5 != '\0');
            DataMemoryBarrier(2,3);
            tasklet_unlock_wait(iVar11 + 0xa8);
            DataMemoryBarrier(2,3);
            _raw_write_lock_irq(iVar1);
            if (0x7f < *(arg1 + 0x17c)) {
                _raw_write_unlock_irq(iVar1);
                DataMemoryBarrier(2,3);
                piVar2 = *(arg1 + 0x128) + 0xb8;
                Hint_Prefetch(piVar2,2,0,1);
                do {
                    cVar5 = '\x01';
                    bVar6 = ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar6) {
                        *piVar2 = *piVar2 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                    }
                } while (cVar5 != '\0');
                return 0xfffffffb;
            }
            *(arg1 + 0x17c) = *(iVar15 + 0x28);
            *(arg1 + 0x188) = *(iVar15 + 0x2c);
            _raw_write_unlock_irq(iVar1);
            uVar4 = *(arg1 + 0x17c);
            if (uVar4 == 8) {
                _raw_read_lock_bh(iVar1);
                pcVar13 = *(arg1 + 0x228);
                if (2 < (pcVar13 + -0x8005ad8 >> 3 | pcVar13 << 0x3d)) {
                    __cfi_slowpath_diag(0xba8145ef24be26ed,pcVar13,0x80010a0);
                }
                (*pcVar13)(arg1,1);
                pcVar13 = *(arg1 + 0x230);
                if (2 < (pcVar13 + -0x8005ad8 >> 3 | pcVar13 << 0x3d)) {
                    __cfi_slowpath_diag(0xba8145ef24be26ed,pcVar13,0x80010c0);
                }
                (*pcVar13)(arg1,1);
                _raw_read_unlock_bh(iVar1);
            }
            else if (uVar4 == 4) {
                sym.mhi_pm_m0_transition(arg1);
            }
            else {
                iVar15 = *(*(arg1 + 8) + 0xc0);
                uVar9 = sym.to_mhi_pm_state_str(uVar4);
                _dev_err(iVar14 + 0x28,"[E][%s] Unexpected PM state:%s after restore\n","mhi_pm_fast_resume",uVar9);
                if ((iVar15 != 0) && (*(iVar15 + 0x18) < 3)) {
                    uVar12 = *(iVar15 + 0x20);
                    uVar9 = sym.to_mhi_pm_state_str(*(arg1 + 0x17c));
                    ipc_log_string(uVar12,"[E][%s] Unexpected PM state:%s after restore\n","mhi_pm_fast_resume",uVar9
                                  );
                }
            }
            DataMemoryBarrier(2,3);
            piVar2 = *(arg1 + 0x128) + 0xb8;
            Hint_Prefetch(piVar2,2,0,1);
            do {
                cVar5 = '\x01';
                bVar6 = ExclusiveMonitorPass(piVar2,0x10);
                if (bVar6) {
                    *piVar2 = *piVar2 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                }
            } while (cVar5 != '\0');
            sym.mhi_irq_handler(piVar2,*(arg1 + 0x128));
        }
        else {
            *(arg1 + 0x184) = 3;
            iVar15 = *(*(arg1 + 8) + 0xc0);
            _dev_err(iVar14 + 0x28,"[E][%s] RDDM event occurred!\n","mhi_pm_fast_resume");
            if ((iVar15 != 0) && (*(iVar15 + 0x18) < 3)) {
                ipc_log_string(*(iVar15 + 0x20),"[E][%s] RDDM event occurred!\n","mhi_pm_fast_resume");
            }
            sym.mhi_report_error(arg1);
            pcVar13 = *(arg1 + 0x220);
            __cfi_slowpath_diag(0x6ba83359ac4765be,pcVar13,0x8001080);
            (*pcVar13)(arg1,4);
            __wake_up(arg1 + 0x208,3,0,0);
        }
    }
    return 0;
}


// ===== sym.tasklet_enable @ 0x08012d18 (size 84) =====

void sym.tasklet_enable(int64_t arg1)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    
    DataMemoryBarrier(2,3);
    piVar1 = arg1 + 0x10;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
            *piVar1 = *piVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    return;
}


// ===== sym.mhi_pm_fast_suspend @ 0x08012d6c (size 1212) =====

ulong sym.mhi_pm_fast_suspend(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    char *pcVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    int64_t iVar6;
    ulong uVar7;
    int64_t iVar8;
    uint32_t uVar9;
    ulong noname_0;
    int *extraout_x8;
    int *piVar10;
    ulong *in_x18;
    int64_t *unaff_x19;
    int64_t *unaff_x21;
    ulong uVar11;
    int64_t *unaff_x23;
    int64_t unaff_x24;
    ulong unaff_x30;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    if (*(arg1 + 0x17c) == 1) {
        uVar11 = 0xffffffea;
        arg1 = unaff_x19;
    }
    else if (*(arg1 + 0x17c) < 0x80) {
        unaff_x23 = *(arg1 + 8);
        unaff_x24 = unaff_x23[0x18];
        if (*(arg1 + 400) == 0) {
            unaff_x21 = arg2 & 0xffffffff;
            iVar8 = __msecs_to_jiffies(*(unaff_x24 + 0x30));
            if ((*(arg1 + 0x188) != 4) && (iVar8 != 0)) {
                uStack_58 = 0;
                uStack_50 = 0;
                uStack_68 = 0;
                uStack_60 = 0;
                uStack_70 = 0;
                iVar6 = __msecs_to_jiffies(*(unaff_x24 + 0x30));
                init_wait_entry(&uStack_70,0);
                iVar8 = arg1 + 0x208;
                prepare_to_wait_event(iVar8,&uStack_70,2);
                iVar5 = *(arg1 + 0x188);
                if (iVar6 == 0 && iVar5 == 4) {
                    iVar6 = 1;
                }
                while ((iVar5 != 4 && (iVar6 != 0))) {
                    iVar6 = schedule_timeout();
                    prepare_to_wait_event(iVar8,&uStack_70,2);
                    iVar5 = *(arg1 + 0x188);
                    if (iVar6 == 0 && iVar5 == 4) {
                        iVar6 = 1;
                    }
                }
                finish_wait(iVar8,&uStack_70);
            }
            iVar8 = *(arg1 + 0x128) + 0xa8;
            piVar10 = *(arg1 + 0x128) + 0xb8;
            goto code_r0x080131d8;
        }
        uVar11 = 0xfffffff0;
    }
    else {
        uVar11 = 0xfffffffb;
        arg1 = unaff_x19;
    }
    do {
        while( true ) {
            iVar8 = sp_el0;
            if (*(iVar8 + 0x5e0) == iStack_48) {
                return uVar11;
            }
            iVar8 = __stack_chk_fail();
            piVar10 = extraout_x8;
code_r0x080131d8:
            Hint_Prefetch(piVar10,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar10,0x10);
                if (bVar4) {
                    *piVar10 = *piVar10 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
            tasklet_unlock_wait(iVar8);
            piVar1 = arg1 + 0x170;
            DataMemoryBarrier(2,3);
            _raw_write_lock_irq(piVar1);
            if (*(arg1 + 400) == 0) break;
            uVar11 = 0xfffffff0;
code_r0x08012ef4:
            _raw_write_unlock_irq(piVar1);
            DataMemoryBarrier(2,3);
            piVar10 = *(arg1 + 0x128) + 0xb8;
            Hint_Prefetch(piVar10,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar10,0x10);
                if (bVar4) {
                    *piVar10 = *piVar10 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            sym.mhi_irq_handler(piVar10,*(arg1 + 0x128));
        }
        uVar9 = *(arg1 + 0x17c);
        if (0x7f < uVar9) {
code_r0x08012ef0:
            uVar11 = 0xfffffffb;
            goto code_r0x08012ef4;
        }
        iVar8 = *(*(arg1 + 8) + 0xc0);
        if ((iVar8 != 0) && (*(iVar8 + 0x18) == 0)) {
            pcVar2 = "true";
            if ((unaff_x21 & 1) == 0) {
                pcVar2 = "false";
            }
            ipc_log_string(*(iVar8 + 0x20),"[D][%s] Allowing Fast M3 transition with notify: %s\n",
                           "mhi_pm_fast_suspend",pcVar2);
            uVar9 = *(arg1 + 0x17c);
        }
        *(unaff_x24 + 0x28) = uVar9;
        *(unaff_x24 + 0x2c) = *(arg1 + 0x188);
        uVar9 = arg1;
        if ((*(arg1 + 0x17c) == 8) && (iVar5 = sym.mhi_tryset_pm_state(uVar9,4), iVar5 != 4)) {
            iVar8 = *(*(arg1 + 8) + 0xc0);
            unaff_x21 = sym.to_mhi_pm_state_str(4);
            uVar11 = sym.to_mhi_pm_state_str(*(arg1 + 0x17c));
            _dev_err(unaff_x23 + 5,"[E][%s] Error setting to PM state: %s from: %s\n","mhi_pm_fast_suspend",unaff_x21
                     ,uVar11);
            if ((iVar8 != 0) && (*(iVar8 + 0x18) < 3)) {
                iVar6 = 4;
code_r0x08013198:
                unaff_x21 = *(iVar8 + 0x20);
                uVar11 = sym.to_mhi_pm_state_str(iVar6);
                uVar7 = sym.to_mhi_pm_state_str(*(arg1 + 0x17c));
                ipc_log_string(unaff_x21,"[E][%s] Error setting to PM state: %s from: %s\n","mhi_pm_fast_suspend",
                               uVar11,uVar7);
            }
            goto code_r0x08012ef0;
        }
        iVar5 = sym.mhi_tryset_pm_state(uVar9,0x10);
        if (iVar5 != 0x10) {
            iVar8 = *(*(arg1 + 8) + 0xc0);
            unaff_x21 = sym.to_mhi_pm_state_str(0x10);
            uVar11 = sym.to_mhi_pm_state_str(*(arg1 + 0x17c));
            _dev_err(unaff_x23 + 5,"[E][%s] Error setting to PM state: %s from: %s\n","mhi_pm_fast_suspend",unaff_x21
                     ,uVar11);
            if ((iVar8 != 0) && (*(iVar8 + 0x18) < 3)) {
                iVar6 = 0x10;
                goto code_r0x08013198;
            }
            goto code_r0x08012ef0;
        }
        iVar5 = sym.mhi_tryset_pm_state(uVar9,0x20);
        if (iVar5 != 0x20) {
            iVar8 = *(*(arg1 + 8) + 0xc0);
            unaff_x21 = sym.to_mhi_pm_state_str(0x20);
            uVar11 = sym.to_mhi_pm_state_str(*(arg1 + 0x17c));
            _dev_err(unaff_x23 + 5,"[E][%s] Error setting to PM state: %s from: %s\n","mhi_pm_fast_suspend",unaff_x21
                     ,uVar11);
            if ((iVar8 != 0) && (*(iVar8 + 0x18) < 3)) {
                iVar6 = 0x20;
                goto code_r0x08013198;
            }
            goto code_r0x08012ef0;
        }
        *(arg1 + 0x188) = 6;
        *(arg1 + 0x1a0) = *(arg1 + 0x1a0) + 1;
        _raw_write_unlock_irq(piVar1);
        if ((*(arg1 + 0x180) >> 3 & 1) == 0) {
            flush_work(*(*(arg1 + 8) + 0xc0) + 0x78);
        }
        sym.tasklet_enable(*(arg1 + 0x128) + 0xa8);
        sym.mhi_irq_handler(noname_0,*(arg1 + 0x128));
        uVar11 = 0;
        if ((unaff_x21 & 1) != 0) {
            arg1 = arg1 + 0xa0;
            unaff_x23 = *arg1;
            if (arg1 == unaff_x23) {
                uVar11 = 0;
            }
            else {
                do {
                    unaff_x21 = *unaff_x23;
                    mutex_lock(unaff_x23 + -0xb);
                    if (unaff_x23[-0xd] != 0) {
                        sym.mhi_notify(unaff_x23[-0xd],2);
                    }
                    mutex_unlock(unaff_x23 + -0xb);
                    uVar11 = 0;
                    unaff_x23 = unaff_x21;
                } while (arg1 != unaff_x21);
            }
        }
    } while( true );
}


// ===== sym.mhi_dump_sfr @ 0x08013228 (size 900) =====

void sym.mhi_dump_sfr(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t iVar9;
    int64_t iVar10;
    ulong *puVar11;
    int64_t *piVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint64_t uVar15;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar11 = *(arg1 + 0x88);
    iVar6 = *(arg1 + 8);
    piVar12 = *puVar11;
    iVar9 = *piVar12;
    uVar4 = *(iVar9 + 4);
    if (uVar4 - 0x209 < 0xfffffdff) {
        iVar10 = *(iVar6 + 0xc0);
        _dev_err(iVar6 + 0x28,"[E][%s] invalid reported header size %u\n","mhi_dump_sfr");
        if (iVar10 == 0) {
            return;
        }
        if (2 < *(iVar10 + 0x18)) {
            return;
        }
        ipc_log_string(*(iVar10 + 0x20),"[E][%s] invalid reported header size %u\n","mhi_dump_sfr",*(iVar9 + 4));
        return;
    }
    if (uVar4 - 8 < 0x40) {
        iVar9 = *(iVar6 + 0xc0);
        _dev_err(iVar6 + 0x28,"[E][%s] invalid rddm table size %u\n","mhi_dump_sfr",0);
        if (iVar9 == 0) {
            return;
        }
        if (2 < *(iVar9 + 0x18)) {
            return;
        }
        ipc_log_string(*(iVar9 + 0x20),"[E][%s] invalid rddm table size %u\n","mhi_dump_sfr",0);
        return;
    }
    uVar15 = 0;
    uVar7 = 0;
    iVar10 = iVar9 + 8;
    uVar13 = piVar12[3] - uVar4;
    iVar9 = iVar9 + uVar4;
    while( true ) {
        if (uVar15 == 9) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x5512,0x80135ac);
            (*pcVar2)();
        }
        iVar1 = iVar10 + uVar15 * 0x40;
        iVar3 = strcmp(iVar1 + 0x2c,"Q6-SFR.bin");
        if (iVar3 == 0) break;
        uVar5 = *(iVar1 + 0x10);
        if (uVar13 < uVar5) {
            uVar14 = uVar5 - uVar13;
            if (uVar14 != 0) {
                do {
                    uVar7 = uVar7 + 1;
                    if (*(puVar11 + 2) == uVar7) {
                        iVar9 = iVar10 + (uVar15 & 0xffffffff) * 0x40 + 0x2c;
                        iVar10 = *(iVar6 + 0xc0);
                        _dev_err(iVar6 + 0x28,"[E][%s] invalid size for file %s\n","mhi_find_next_file_offset",iVar9)
                        ;
                        if (iVar10 == 0) {
                            return;
                        }
                        if (2 < *(iVar10 + 0x18)) {
                            return;
                        }
                        ipc_log_string(*(iVar10 + 0x20),"[E][%s] invalid size for file %s\n",
                                       "mhi_find_next_file_offset",iVar9);
                        return;
                    }
                    iVar3 = piVar12[uVar7 * 4 + 3];
                    if (uVar14 <= piVar12[uVar7 * 4 + 3]) {
                        uVar13 = iVar3 - uVar14;
                        iVar9 = piVar12[uVar7 * 4] + uVar14;
                        goto code_r0x080132b0;
                    }
                    uVar14 = uVar14 - iVar3;
                } while (uVar14 != 0);
            }
            uVar13 = 0;
        }
        else {
            iVar9 = iVar9 + uVar5;
            uVar13 = uVar13 - uVar5;
        }
code_r0x080132b0:
        uVar15 = uVar15 + 1;
        if (uVar15 == uVar4 - 8 >> 6) {
            return;
        }
    }
    uVar15 = *(iVar10 + (uVar15 & 0xffffffff) * 0x40 + 0x10);
    iVar10 = __kmalloc(uVar15 + 1,0xdc0);
    if (iVar10 == 0) {
        return;
    }
    uVar5 = uVar15 & 0xffffffff;
    do {
        uVar4 = uVar5;
        if (uVar4 == 0) {
code_r0x08013544:
            iVar9 = *(arg1 + 8);
            *(iVar10 + (uVar15 & 0xffffffff)) = 0;
            iVar9 = *(iVar9 + 0xc0);
            _dev_err(iVar6 + 0x28,"[E][%s] %s\n","mhi_process_sfr",iVar10);
            if ((iVar9 != 0) && (*(iVar9 + 0x18) < 3)) {
                ipc_log_string(*(iVar9 + 0x20),"[E][%s] %s\n","mhi_process_sfr",iVar10);
            }
            goto code_r0x0801359c;
        }
        uVar14 = uVar13;
        if (uVar13 == 0) {
            uVar8 = (piVar12 + uVar7 * 4)[3];
            iVar9 = piVar12[uVar7 * 4];
            uVar14 = uVar8;
            if (uVar5 <= uVar8) {
                uVar14 = uVar4;
            }
        }
        if (uVar4 < uVar14 || uVar4 - uVar14 == 0) {
            memcpy(iVar10,iVar9,uVar5);
            goto code_r0x08013544;
        }
        memcpy(iVar10,iVar9,uVar14);
        uVar13 = 0;
        iVar10 = iVar10 + uVar14;
        uVar7 = uVar7 + 1;
        uVar5 = uVar4 - uVar14;
    } while (uVar7 != *(*(arg1 + 0x88) + 0x10));
    iVar9 = *(*(arg1 + 8) + 0xc0);
    _dev_err(iVar6 + 0x28,"[E][%s] invalid size for SFR file\n","mhi_process_sfr");
    if ((iVar9 != 0) && (*(iVar9 + 0x18) < 3)) {
        ipc_log_string(*(iVar9 + 0x20),"[E][%s] invalid size for SFR file\n","mhi_process_sfr");
    }
code_r0x0801359c:
    kfree(iVar10);
    return;
}


// ===== sym.mhi_scan_rddm_cookie @ 0x080135ac (size 268) =====

uint64_t sym.mhi_scan_rddm_cookie(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong uVar8;
    uint64_t uVar9;
    char *pcVar10;
    char *pcVar11;
    int64_t iVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar13;
    int64_t iVar14;
    ulong uVar15;
    uint64_t uVar16;
    int64_t iVar17;
    int64_t iVar18;
    ulong unaff_x30;
    uchar auVar19 [16];
    uint uStack_1ec;
    char *pcStack_1e8;
    uint32_t auStack_1e0 [2];
    int64_t iStack_1d8;
    char *pcStack_1d0;
    uint uStack_1c8;
    int64_t iStack_1c0;
    char *pcStack_1b8;
    uint uStack_1b0;
    int64_t iStack_1a8;
    char *pcStack_1a0;
    uint uStack_198;
    int64_t iStack_190;
    char *pcStack_188;
    uint uStack_180;
    int64_t iStack_178;
    char *pcStack_170;
    uint uStack_168;
    int64_t iStack_160;
    char *pcStack_158;
    uint uStack_150;
    int64_t iStack_148;
    char *pcStack_140;
    uint uStack_138;
    int64_t iStack_130;
    char *pcStack_128;
    ulong uStack_118;
    char *pcStack_110;
    uint uStack_108;
    int64_t iStack_100;
    char *pcStack_f8;
    uint uStack_f0;
    int64_t iStack_e8;
    char *pcStack_e0;
    uint uStack_d8;
    int64_t iStack_d0;
    char *pcStack_c8;
    uint uStack_c0;
    int64_t iStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_28 = *(iVar12 + 0x5e0);
    uVar6 = 0;
    iStack_2c = 0;
    if ((arg2 != 0) && (*(arg1 + 0x88) != 0)) {
        iVar12 = *(*(arg1 + 8) + 0xc0);
        if ((iVar12 != 0) && (*(iVar12 + 0x18) == 0)) {
            ipc_log_string(*(iVar12 + 0x20),"[D][%s] Checking BHI debug register for 0x%x\n","mhi_scan_rddm_cookie",
                           arg2 & 0xffffffff);
        }
        if (((*(arg1 + 0x17c) & 0x7de) == 0) ||
           (iVar2 = sym.mhi_read_reg(arg1,*(arg1 + 0x20),0x38,&iStack_2c), iVar2 != 0)) {
            uVar6 = 0;
        }
        else {
            iVar12 = *(*(arg1 + 8) + 0xc0);
            if ((iVar12 != 0) && (*(iVar12 + 0x18) == 0)) {
                ipc_log_string(*(iVar12 + 0x20),"[D][%s] BHI_ERRDBG2 value:0x%x\n","mhi_scan_rddm_cookie",iStack_2c);
            }
            uVar6 = iStack_2c == arg2;
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_28) {
        return uVar6;
    }
    iVar7 = __stack_chk_fail(uVar6);
    *extraout_x18 = sym.mhi_debug_reg_dump;
    pcStack_88 = sym.mhi_debug_reg_dump;
    iVar12 = sp_el0;
    iStack_98 = *(iVar12 + 0x5e0);
    iVar12 = *(iVar7 + 0x18);
    iVar13 = *(iVar7 + 0x20);
    uStack_1ec = 0;
    iVar18 = *(iVar7 + 0x28);
    uVar8 = *(iVar7 + 0x30);
    iVar17 = *(iVar7 + 8);
    puStack_90 = &stack0xffffffffffffffe0;
    memset(auStack_1e0,0,0x128);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_1b0 = 0x34;
    pcStack_1e8 = "BHI_ERRDBG2";
    uStack_1c8 = 0x3c;
    uStack_198 = 0x30;
    uStack_108 = 0x3c;
    pcStack_1d0 = "BHI_ERRDBG3";
    uStack_180 = 0x28;
    uStack_138 = 0x48;
    pcStack_1b8 = "BHI_ERRDBG1";
    pcStack_f8 = "BHIE_TXVEC_STATUS";
    pcStack_128 = "MHI_WAKE_DB";
    pcStack_1a0 = "BHI_ERRCODE";
    pcStack_e0 = "BHIE_RXVEC_DB";
    uStack_b0 = 0;
    pcStack_188 = "BHI_EXECENV";
    pcStack_110 = "BHIE_TXVEC_DB";
    uStack_d8 = 0x70;
    pcStack_170 = "BHI_STATUS";
    uStack_f0 = 0x44;
    pcStack_c8 = "BHIE_RXVEC_STATUS";
    uStack_c0 = 0x78;
    pcStack_158 = "MHI_CNTRL";
    iVar14 = *(iVar17 + 0xc0);
    auStack_1e0[0] = 0x38;
    uStack_168 = 0x2c;
    uStack_150 = 0x38;
    pcStack_140 = "MHI_STATUS";
    iStack_1d8 = iVar13;
    iStack_1c0 = iVar13;
    iStack_1a8 = iVar13;
    iStack_190 = iVar13;
    iStack_178 = iVar13;
    iStack_160 = iVar13;
    iStack_148 = iVar12;
    iStack_130 = iVar12;
    uStack_118 = uVar8;
    iStack_100 = iVar18;
    iStack_e8 = iVar18;
    iStack_d0 = iVar18;
    iStack_b8 = iVar18;
    if (((iVar12 == 0) || (iVar13 == 0)) || (iVar18 == 0)) {
        uVar6 = 0;
        uVar9 = _dev_err(iVar17 + 0x28,"[E][%s] Cannot dump MHI/BHI registers\n");
        if ((iVar14 != 0) && (*(iVar14 + 0x18) < 3)) {
            uVar6 = 0;
            uVar9 = ipc_log_string(*(iVar14 + 0x20),"[E][%s] Cannot dump MHI/BHI registers\n");
        }
    }
    else {
        uVar8 = sym.to_mhi_pm_state_str(*(iVar7 + 0x17c));
        uVar3 = *(iVar7 + 0x188);
        pcVar10 = "INVALID_STATE";
        if ((uVar3 < 0x100) && (0xf6 < uVar3 - 8)) {
            pcVar10 = *(reloc..str.14.llvm.39275123862783422 + uVar3 * 8);
        }
        if (*(iVar7 + 0x184) < 10) {
            pcVar11 = *(reloc..str.llvm.39275123862783422 + *(iVar7 + 0x184) * 8);
        }
        else {
            pcVar11 = "INVALID_EE";
        }
        _dev_err(iVar17 + 0x28,"[E][%s] host pm_state:%s dev_state:%s ee:%s\n","mhi_debug_reg_dump",uVar8,pcVar10,
                 pcVar11);
        if ((iVar14 != 0) && (*(iVar14 + 0x18) < 3)) {
            uVar15 = *(iVar14 + 0x20);
            uVar8 = sym.to_mhi_pm_state_str(*(iVar7 + 0x17c));
            uVar3 = *(iVar7 + 0x188);
            pcVar10 = "INVALID_STATE";
            if ((uVar3 < 0x100) && (0xf6 < uVar3 - 8)) {
                pcVar10 = *(reloc..str.14.llvm.39275123862783422 + uVar3 * 8);
            }
            if (*(iVar7 + 0x184) < 10) {
                pcVar11 = *(reloc..str.llvm.39275123862783422 + *(iVar7 + 0x184) * 8);
            }
            else {
                pcVar11 = "INVALID_EE";
            }
            ipc_log_string(uVar15,"[E][%s] host pm_state:%s dev_state:%s ee:%s\n","mhi_debug_reg_dump",uVar8,pcVar10
                           ,pcVar11);
        }
        uVar3 = sym.mhi_get_mhi_state(iVar7);
        uVar16 = uVar3;
        uVar4 = sym.mhi_get_exec_env(iVar7);
        iVar12 = *(*(iVar7 + 8) + 0xc0);
        if (uVar4 < 10) {
            pcVar10 = *(reloc..str.llvm.39275123862783422 + uVar4 * 8);
        }
        else {
            pcVar10 = "INVALID_EE";
        }
        pcVar11 = "INVALID_STATE";
        if ((uVar3 < 0x100) && (0xf6 < uVar16 - 8)) {
            pcVar11 = *(reloc..str.14.llvm.39275123862783422 + uVar16 * 8);
        }
        uVar6 = 0;
        uVar9 = _dev_err(iVar17 + 0x28,"[E][%s] device ee: %s dev_state: %s\n","mhi_debug_reg_dump",pcVar10,pcVar11)
        ;
        if ((iVar12 != 0) && (*(iVar12 + 0x18) < 3)) {
            if (uVar4 < 10) {
                pcVar10 = *(reloc..str.llvm.39275123862783422 + uVar4 * 8);
            }
            else {
                pcVar10 = "INVALID_EE";
            }
            pcVar11 = "INVALID_STATE";
            if ((uVar3 < 0x100) && (0xf6 < uVar16 - 8)) {
                pcVar11 = *(reloc..str.14.llvm.39275123862783422 + uVar16 * 8);
            }
            uVar6 = 0;
            uVar9 = ipc_log_string(*(iVar12 + 0x20),"[E][%s] device ee: %s dev_state: %s\n","mhi_debug_reg_dump",
                                   pcVar10,pcVar11);
        }
        iVar12 = 0;
        while (*(auStack_1e0 + iVar12 + -8) != 0) {
            if (*(&iStack_1d8 + iVar12) != 0) {
                uVar5 = sym.mhi_read_reg(iVar7,*(&iStack_1d8 + iVar12),*(auStack_1e0 + iVar12),&uStack_1ec);
                iVar18 = *(*(iVar7 + 8) + 0xc0);
                uVar6 = 0;
                uVar9 = _dev_err(iVar17 + 0x28,"[E][%s] reg: %s val: 0x%x, ret: %d\n","mhi_debug_reg_dump",
                                 *(auStack_1e0 + iVar12 + -8),uStack_1ec,uVar5);
                if ((iVar18 != 0) && (*(iVar18 + 0x18) < 3)) {
                    uVar6 = 0;
                    uVar9 = ipc_log_string(*(iVar18 + 0x20),"[E][%s] reg: %s val: 0x%x, ret: %d\n",
                                           "mhi_debug_reg_dump",*(auStack_1e0 + iVar12 + -8),uStack_1ec,uVar5);
                }
            }
            iVar12 = iVar12 + 0x18;
            if (iVar12 == 0x150) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x8013b38);
                (*pcVar1)();
            }
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_98) {
        return uVar9;
    }
    auVar19 = __stack_chk_fail();
    iVar18 = auVar19._0_8_;
    *extraout_x18_00 = sym.mhi_device_get_sync_atomic;
    iVar13 = *(iVar18 + 0x10);
    uVar9 = auVar19._8_8_ & 0xffffffff;
    uVar3 = auVar19._8_4_;
    iVar12 = iVar13 + 0x170;
    _raw_read_lock_bh(iVar12);
    if (0x7f < *(iVar13 + 0x17c)) {
        _raw_read_unlock_bh(iVar12);
        return 0xfffffffb;
    }
    pcVar1 = *(iVar13 + 0x228);
    if (2 < (pcVar1 + -0x8005ad8 >> 3 | pcVar1 << 0x3d)) {
        __cfi_slowpath_diag(0xba8145ef24be26ed,pcVar1,0x80010e0);
    }
    (*pcVar1)(iVar13,1);
    _raw_read_unlock_bh(iVar12);
    *(iVar18 + 0x3cc) = *(iVar18 + 0x3cc) + 1;
    pm_wakeup_dev_event(*(iVar13 + 8) + 0x28,0,0);
    pcVar1 = *(iVar13 + 0x240);
    if (9 < (pcVar1 + -0x8005c30 >> 3 | pcVar1 << 0x3d)) {
        __cfi_slowpath_diag(0x9d98c101a4fe7fa9,pcVar1,0x8001100);
    }
    (*pcVar1)(iVar13);
    if (uVar3 == 0) {
        if (*(iVar13 + 0x17c) != 4) {
            iVar12 = *(*(iVar13 + 8) + 0xc0);
            _dev_err(iVar18 + 0x28,"[E][%s] Return without waiting for M0\n","mhi_device_get_sync_atomic");
            if ((iVar12 != 0) && (*(iVar12 + 0x18) < 3)) {
                ipc_log_string(*(iVar12 + 0x20),"[E][%s] Return without waiting for M0\n","mhi_device_get_sync_atomic"
                              );
            }
        }
        pcVar1 = *(iVar13 + 0x248);
        if ((pcVar1 + -0x8005c80 >> 3 | pcVar1 << 0x3d) < 8) goto code_r0x08013ce4;
        uVar8 = 0x8001120;
    }
    else {
        if ((uVar6 & 1) == 0) {
            uVar4 = *(iVar13 + 0x17c);
            while (((uVar6 = uVar4, uVar4 != 4 && (uVar3 = uVar9, uVar4 < 0x80)) && (0 < uVar3))) {
                __const_udelay(0x68dbc);
                uVar4 = *(iVar13 + 0x17c);
                uVar3 = uVar3 - 100;
                uVar9 = uVar3;
            }
        }
        else {
            while( true ) {
                uVar3 = uVar9;
                iVar2 = sym.mhi_get_mhi_state(iVar13);
                if (iVar2 == 2) break;
                uVar6 = *(iVar13 + 0x17c);
                if (0x7f < *(iVar13 + 0x17c) || uVar3 < 1) goto code_r0x08013cb8;
                __const_udelay(0x68dbc);
                uVar9 = uVar3 - 100;
            }
            uVar6 = *(iVar13 + 0x17c);
        }
code_r0x08013cb8:
        if ((0x7f < uVar6) || (uVar3 < 1)) {
            uVar3 = *(iVar13 + 0x188);
            iVar7 = *(*(iVar13 + 8) + 0xc0);
            pcVar10 = "INVALID_STATE";
            if ((uVar3 < 0x100) && (0xf6 < uVar3 - 8)) {
                pcVar10 = *(reloc..str.14.llvm.39275123862783422 + uVar3 * 8);
            }
            uVar8 = sym.to_mhi_pm_state_str(uVar6);
            _dev_err(iVar18 + 0x28,"[E][%s] Did not enter M0, cur_state: %s pm_state: %s\n",
                     "mhi_device_get_sync_atomic",pcVar10,uVar8);
            if ((iVar7 != 0) && (*(iVar7 + 0x18) < 3)) {
                uVar3 = *(iVar13 + 0x188);
                uVar8 = *(iVar7 + 0x20);
                pcVar10 = "INVALID_STATE";
                if ((uVar3 < 0x100) && (0xf6 < uVar3 - 8)) {
                    pcVar10 = *(reloc..str.14.llvm.39275123862783422 + uVar3 * 8);
                }
                uVar15 = sym.to_mhi_pm_state_str(*(iVar13 + 0x17c));
                ipc_log_string(uVar8,"[E][%s] Did not enter M0, cur_state: %s pm_state: %s\n",
                               "mhi_device_get_sync_atomic",pcVar10,uVar15);
            }
            _raw_read_lock_bh(iVar12);
            pcVar1 = *(iVar13 + 0x230);
            if (2 < (pcVar1 + -0x8005ad8 >> 3 | pcVar1 << 0x3d)) {
                __cfi_slowpath_diag(0xba8145ef24be26ed,pcVar1,0x8001140);
            }
            (*pcVar1)(iVar13,0);
            _raw_read_unlock_bh(iVar12);
            *(iVar18 + 0x3cc) = *(iVar18 + 0x3cc) + -1;
            pcVar1 = *(iVar13 + 0x248);
            if (7 < (pcVar1 + -0x8005c80 >> 3 | pcVar1 << 0x3d)) {
                __cfi_slowpath_diag(0x95232cda069bc43d,pcVar1,0x8001160);
            }
            (*pcVar1)(iVar13);
            return 0xffffff92;
        }
        pcVar1 = *(iVar13 + 0x248);
        if ((pcVar1 + -0x8005c80 >> 3 | pcVar1 << 0x3d) < 8) goto code_r0x08013ce4;
        uVar8 = 0x8001180;
    }
    __cfi_slowpath_diag(0x95232cda069bc43d,pcVar1,uVar8);
code_r0x08013ce4:
    (*pcVar1)(iVar13);
    return 0;
}


// ===== sym.mhi_debug_reg_dump @ 0x080136b8 (size 1156) =====

ulong sym.mhi_debug_reg_dump(int64_t arg1)

{
    code *pcVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint uVar4;
    int iVar5;
    ulong uVar6;
    uint64_t uVar7;
    char *pcVar8;
    char *pcVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar10;
    int64_t iVar11;
    ulong uVar12;
    uint64_t uVar13;
    int64_t iVar14;
    int64_t iVar15;
    int64_t iVar16;
    ulong unaff_x30;
    uchar auVar17 [16];
    uint uStack_1bc;
    char *pcStack_1b8;
    uint32_t auStack_1b0 [2];
    int64_t iStack_1a8;
    char *pcStack_1a0;
    uint uStack_198;
    int64_t iStack_190;
    char *pcStack_188;
    uint uStack_180;
    int64_t iStack_178;
    char *pcStack_170;
    uint uStack_168;
    int64_t iStack_160;
    char *pcStack_158;
    uint uStack_150;
    int64_t iStack_148;
    char *pcStack_140;
    uint uStack_138;
    int64_t iStack_130;
    char *pcStack_128;
    uint uStack_120;
    int64_t iStack_118;
    char *pcStack_110;
    uint uStack_108;
    int64_t iStack_100;
    char *pcStack_f8;
    ulong uStack_e8;
    char *pcStack_e0;
    uint uStack_d8;
    int64_t iStack_d0;
    char *pcStack_c8;
    uint uStack_c0;
    int64_t iStack_b8;
    char *pcStack_b0;
    uint uStack_a8;
    int64_t iStack_a0;
    char *pcStack_98;
    uint uStack_90;
    int64_t iStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_68 = *(iVar14 + 0x5e0);
    iVar14 = *(arg1 + 0x18);
    iVar10 = *(arg1 + 0x20);
    uStack_1bc = 0;
    iVar16 = *(arg1 + 0x28);
    uVar6 = *(arg1 + 0x30);
    iVar15 = *(arg1 + 8);
    memset(auStack_1b0,0,0x128);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_180 = 0x34;
    pcStack_1b8 = "BHI_ERRDBG2";
    uStack_198 = 0x3c;
    uStack_168 = 0x30;
    uStack_d8 = 0x3c;
    pcStack_1a0 = "BHI_ERRDBG3";
    uStack_150 = 0x28;
    uStack_108 = 0x48;
    pcStack_188 = "BHI_ERRDBG1";
    pcStack_c8 = "BHIE_TXVEC_STATUS";
    pcStack_f8 = "MHI_WAKE_DB";
    pcStack_170 = "BHI_ERRCODE";
    pcStack_b0 = "BHIE_RXVEC_DB";
    uStack_80 = 0;
    pcStack_158 = "BHI_EXECENV";
    pcStack_e0 = "BHIE_TXVEC_DB";
    uStack_a8 = 0x70;
    pcStack_140 = "BHI_STATUS";
    uStack_c0 = 0x44;
    pcStack_98 = "BHIE_RXVEC_STATUS";
    uStack_90 = 0x78;
    pcStack_128 = "MHI_CNTRL";
    iVar11 = *(iVar15 + 0xc0);
    auStack_1b0[0] = 0x38;
    uStack_138 = 0x2c;
    uStack_120 = 0x38;
    pcStack_110 = "MHI_STATUS";
    iStack_1a8 = iVar10;
    iStack_190 = iVar10;
    iStack_178 = iVar10;
    iStack_160 = iVar10;
    iStack_148 = iVar10;
    iStack_130 = iVar10;
    iStack_118 = iVar14;
    iStack_100 = iVar14;
    uStack_e8 = uVar6;
    iStack_d0 = iVar16;
    iStack_b8 = iVar16;
    iStack_a0 = iVar16;
    iStack_88 = iVar16;
    if (((iVar14 == 0) || (iVar10 == 0)) || (iVar16 == 0)) {
        uVar7 = 0;
        uVar6 = _dev_err(iVar15 + 0x28,"[E][%s] Cannot dump MHI/BHI registers\n");
        if ((iVar11 != 0) && (*(iVar11 + 0x18) < 3)) {
            uVar7 = 0;
            uVar6 = ipc_log_string(*(iVar11 + 0x20),"[E][%s] Cannot dump MHI/BHI registers\n");
        }
    }
    else {
        uVar6 = sym.to_mhi_pm_state_str(*(arg1 + 0x17c));
        uVar2 = *(arg1 + 0x188);
        pcVar8 = "INVALID_STATE";
        if ((uVar2 < 0x100) && (0xf6 < uVar2 - 8)) {
            pcVar8 = *(reloc..str.14.llvm.39275123862783422 + uVar2 * 8);
        }
        if (*(arg1 + 0x184) < 10) {
            pcVar9 = *(reloc..str.llvm.39275123862783422 + *(arg1 + 0x184) * 8);
        }
        else {
            pcVar9 = "INVALID_EE";
        }
        _dev_err(iVar15 + 0x28,"[E][%s] host pm_state:%s dev_state:%s ee:%s\n","mhi_debug_reg_dump",uVar6,pcVar8,
                 pcVar9);
        if ((iVar11 != 0) && (*(iVar11 + 0x18) < 3)) {
            uVar12 = *(iVar11 + 0x20);
            uVar6 = sym.to_mhi_pm_state_str(*(arg1 + 0x17c));
            uVar2 = *(arg1 + 0x188);
            pcVar8 = "INVALID_STATE";
            if ((uVar2 < 0x100) && (0xf6 < uVar2 - 8)) {
                pcVar8 = *(reloc..str.14.llvm.39275123862783422 + uVar2 * 8);
            }
            if (*(arg1 + 0x184) < 10) {
                pcVar9 = *(reloc..str.llvm.39275123862783422 + *(arg1 + 0x184) * 8);
            }
            else {
                pcVar9 = "INVALID_EE";
            }
            ipc_log_string(uVar12,"[E][%s] host pm_state:%s dev_state:%s ee:%s\n","mhi_debug_reg_dump",uVar6,pcVar8
                           ,pcVar9);
        }
        uVar2 = sym.mhi_get_mhi_state(arg1);
        uVar13 = uVar2;
        uVar3 = sym.mhi_get_exec_env(arg1);
        iVar14 = *(*(arg1 + 8) + 0xc0);
        if (uVar3 < 10) {
            pcVar8 = *(reloc..str.llvm.39275123862783422 + uVar3 * 8);
        }
        else {
            pcVar8 = "INVALID_EE";
        }
        pcVar9 = "INVALID_STATE";
        if ((uVar2 < 0x100) && (0xf6 < uVar13 - 8)) {
            pcVar9 = *(reloc..str.14.llvm.39275123862783422 + uVar13 * 8);
        }
        uVar7 = 0;
        uVar6 = _dev_err(iVar15 + 0x28,"[E][%s] device ee: %s dev_state: %s\n","mhi_debug_reg_dump",pcVar8,pcVar9);
        if ((iVar14 != 0) && (*(iVar14 + 0x18) < 3)) {
            if (uVar3 < 10) {
                pcVar8 = *(reloc..str.llvm.39275123862783422 + uVar3 * 8);
            }
            else {
                pcVar8 = "INVALID_EE";
            }
            pcVar9 = "INVALID_STATE";
            if ((uVar2 < 0x100) && (0xf6 < uVar13 - 8)) {
                pcVar9 = *(reloc..str.14.llvm.39275123862783422 + uVar13 * 8);
            }
            uVar7 = 0;
            uVar6 = ipc_log_string(*(iVar14 + 0x20),"[E][%s] device ee: %s dev_state: %s\n","mhi_debug_reg_dump",
                                   pcVar8,pcVar9);
        }
        iVar14 = 0;
        while (*(auStack_1b0 + iVar14 + -8) != 0) {
            if (*(&iStack_1a8 + iVar14) != 0) {
                uVar4 = sym.mhi_read_reg(arg1,*(&iStack_1a8 + iVar14),*(auStack_1b0 + iVar14),&uStack_1bc);
                iVar16 = *(*(arg1 + 8) + 0xc0);
                uVar7 = 0;
                uVar6 = _dev_err(iVar15 + 0x28,"[E][%s] reg: %s val: 0x%x, ret: %d\n","mhi_debug_reg_dump",
                                 *(auStack_1b0 + iVar14 + -8),uStack_1bc,uVar4);
                if ((iVar16 != 0) && (*(iVar16 + 0x18) < 3)) {
                    uVar7 = 0;
                    uVar6 = ipc_log_string(*(iVar16 + 0x20),"[E][%s] reg: %s val: 0x%x, ret: %d\n",
                                           "mhi_debug_reg_dump",*(auStack_1b0 + iVar14 + -8),uStack_1bc,uVar4);
                }
            }
            iVar14 = iVar14 + 0x18;
            if (iVar14 == 0x150) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x8013b38);
                (*pcVar1)();
            }
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_68) {
        return uVar6;
    }
    auVar17 = __stack_chk_fail();
    iVar16 = auVar17._0_8_;
    *extraout_x18 = sym.mhi_device_get_sync_atomic;
    iVar10 = *(iVar16 + 0x10);
    uVar13 = auVar17._8_8_ & 0xffffffff;
    uVar2 = auVar17._8_4_;
    iVar14 = iVar10 + 0x170;
    _raw_read_lock_bh(iVar14);
    if (0x7f < *(iVar10 + 0x17c)) {
        _raw_read_unlock_bh(iVar14);
        return 0xfffffffb;
    }
    pcVar1 = *(iVar10 + 0x228);
    if (2 < (pcVar1 + -0x8005ad8 >> 3 | pcVar1 << 0x3d)) {
        __cfi_slowpath_diag(0xba8145ef24be26ed,pcVar1,0x80010e0);
    }
    (*pcVar1)(iVar10,1);
    _raw_read_unlock_bh(iVar14);
    *(iVar16 + 0x3cc) = *(iVar16 + 0x3cc) + 1;
    pm_wakeup_dev_event(*(iVar10 + 8) + 0x28,0,0);
    pcVar1 = *(iVar10 + 0x240);
    if (9 < (pcVar1 + -0x8005c30 >> 3 | pcVar1 << 0x3d)) {
        __cfi_slowpath_diag(0x9d98c101a4fe7fa9,pcVar1,0x8001100);
    }
    (*pcVar1)(iVar10);
    if (uVar2 == 0) {
        if (*(iVar10 + 0x17c) != 4) {
            iVar14 = *(*(iVar10 + 8) + 0xc0);
            _dev_err(iVar16 + 0x28,"[E][%s] Return without waiting for M0\n","mhi_device_get_sync_atomic");
            if ((iVar14 != 0) && (*(iVar14 + 0x18) < 3)) {
                ipc_log_string(*(iVar14 + 0x20),"[E][%s] Return without waiting for M0\n","mhi_device_get_sync_atomic"
                              );
            }
        }
        pcVar1 = *(iVar10 + 0x248);
        if ((pcVar1 + -0x8005c80 >> 3 | pcVar1 << 0x3d) < 8) goto code_r0x08013ce4;
        uVar6 = 0x8001120;
    }
    else {
        if ((uVar7 & 1) == 0) {
            uVar3 = *(iVar10 + 0x17c);
            while (((uVar7 = uVar3, uVar3 != 4 && (uVar2 = uVar13, uVar3 < 0x80)) && (0 < uVar2))) {
                __const_udelay(0x68dbc);
                uVar3 = *(iVar10 + 0x17c);
                uVar2 = uVar2 - 100;
                uVar13 = uVar2;
            }
        }
        else {
            while( true ) {
                uVar2 = uVar13;
                iVar5 = sym.mhi_get_mhi_state(iVar10);
                if (iVar5 == 2) break;
                uVar7 = *(iVar10 + 0x17c);
                if (0x7f < *(iVar10 + 0x17c) || uVar2 < 1) goto code_r0x08013cb8;
                __const_udelay(0x68dbc);
                uVar13 = uVar2 - 100;
            }
            uVar7 = *(iVar10 + 0x17c);
        }
code_r0x08013cb8:
        if ((0x7f < uVar7) || (uVar2 < 1)) {
            uVar2 = *(iVar10 + 0x188);
            iVar11 = *(*(iVar10 + 8) + 0xc0);
            pcVar8 = "INVALID_STATE";
            if ((uVar2 < 0x100) && (0xf6 < uVar2 - 8)) {
                pcVar8 = *(reloc..str.14.llvm.39275123862783422 + uVar2 * 8);
            }
            uVar6 = sym.to_mhi_pm_state_str(uVar7);
            _dev_err(iVar16 + 0x28,"[E][%s] Did not enter M0, cur_state: %s pm_state: %s\n",
                     "mhi_device_get_sync_atomic",pcVar8,uVar6);
            if ((iVar11 != 0) && (*(iVar11 + 0x18) < 3)) {
                uVar2 = *(iVar10 + 0x188);
                uVar6 = *(iVar11 + 0x20);
                pcVar8 = "INVALID_STATE";
                if ((uVar2 < 0x100) && (0xf6 < uVar2 - 8)) {
                    pcVar8 = *(reloc..str.14.llvm.39275123862783422 + uVar2 * 8);
                }
                uVar12 = sym.to_mhi_pm_state_str(*(iVar10 + 0x17c));
                ipc_log_string(uVar6,"[E][%s] Did not enter M0, cur_state: %s pm_state: %s\n",
                               "mhi_device_get_sync_atomic",pcVar8,uVar12);
            }
            _raw_read_lock_bh(iVar14);
            pcVar1 = *(iVar10 + 0x230);
            if (2 < (pcVar1 + -0x8005ad8 >> 3 | pcVar1 << 0x3d)) {
                __cfi_slowpath_diag(0xba8145ef24be26ed,pcVar1,0x8001140);
            }
            (*pcVar1)(iVar10,0);
            _raw_read_unlock_bh(iVar14);
            *(iVar16 + 0x3cc) = *(iVar16 + 0x3cc) + -1;
            pcVar1 = *(iVar10 + 0x248);
            if (7 < (pcVar1 + -0x8005c80 >> 3 | pcVar1 << 0x3d)) {
                __cfi_slowpath_diag(0x95232cda069bc43d,pcVar1,0x8001160);
            }
            (*pcVar1)(iVar10);
            return 0xffffff92;
        }
        pcVar1 = *(iVar10 + 0x248);
        if ((pcVar1 + -0x8005c80 >> 3 | pcVar1 << 0x3d) < 8) goto code_r0x08013ce4;
        uVar6 = 0x8001180;
    }
    __cfi_slowpath_diag(0x95232cda069bc43d,pcVar1,uVar6);
code_r0x08013ce4:
    (*pcVar1)(iVar10);
    return 0;
}


// ===== sym.mhi_device_get_sync_atomic @ 0x08013b3c (size 1036) =====

ulong sym.mhi_device_get_sync_atomic(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t arg1_00;
    ulong uVar3;
    ulong uVar4;
    code *pcVar5;
    ulong *in_x18;
    int64_t arg1_01;
    int64_t iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    char *pcVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_01 = *(arg1 + 0x10);
    uVar8 = arg2 & 0xffffffff;
    uVar7 = arg2;
    iVar6 = arg1_01 + 0x170;
    _raw_read_lock_bh(iVar6);
    if (0x7f < *(arg1_01 + 0x17c)) {
        _raw_read_unlock_bh(iVar6);
        return 0xfffffffb;
    }
    pcVar5 = *(arg1_01 + 0x228);
    if (2 < (pcVar5 + -0x8005ad8 >> 3 | pcVar5 << 0x3d)) {
        __cfi_slowpath_diag(0xba8145ef24be26ed,pcVar5,0x80010e0);
    }
    (*pcVar5)(arg1_01,1);
    _raw_read_unlock_bh(iVar6);
    *(arg1 + 0x3cc) = *(arg1 + 0x3cc) + 1;
    pm_wakeup_dev_event(*(arg1_01 + 8) + 0x28,0,0);
    pcVar5 = *(arg1_01 + 0x240);
    if (9 < (pcVar5 + -0x8005c30 >> 3 | pcVar5 << 0x3d)) {
        __cfi_slowpath_diag(0x9d98c101a4fe7fa9,pcVar5,0x8001100);
    }
    (*pcVar5)(arg1_01);
    if (uVar7 == 0) {
        if (*(arg1_01 + 0x17c) != 4) {
            iVar6 = *(*(arg1_01 + 8) + 0xc0);
            _dev_err(arg1 + 0x28,"[E][%s] Return without waiting for M0\n","mhi_device_get_sync_atomic");
            if ((iVar6 != 0) && (*(iVar6 + 0x18) < 3)) {
                ipc_log_string(*(iVar6 + 0x20),"[E][%s] Return without waiting for M0\n","mhi_device_get_sync_atomic")
                ;
            }
        }
        pcVar5 = *(arg1_01 + 0x248);
        if ((pcVar5 + -0x8005c80 >> 3 | pcVar5 << 0x3d) < 8) goto code_r0x08013ce4;
        uVar3 = 0x8001120;
    }
    else {
        if ((arg3 & 1U) == 0) {
            uVar1 = *(arg1_01 + 0x17c);
            while (((arg1_00 = uVar1, uVar1 != 4 && (uVar7 = uVar8, uVar1 < 0x80)) && (0 < uVar7))) {
                __const_udelay(0x68dbc);
                uVar1 = *(arg1_01 + 0x17c);
                uVar7 = uVar7 - 100;
                uVar8 = uVar7;
            }
        }
        else {
            while( true ) {
                uVar7 = uVar8;
                iVar2 = sym.mhi_get_mhi_state(arg1_01);
                if (iVar2 == 2) break;
                arg1_00 = *(arg1_01 + 0x17c);
                if (0x7f < *(arg1_01 + 0x17c) || uVar7 < 1) goto code_r0x08013cb8;
                __const_udelay(0x68dbc);
                uVar8 = uVar7 - 100;
            }
            arg1_00 = *(arg1_01 + 0x17c);
        }
code_r0x08013cb8:
        if ((0x7f < arg1_00) || (uVar7 < 1)) {
            uVar7 = *(arg1_01 + 0x188);
            iVar10 = *(*(arg1_01 + 8) + 0xc0);
            pcVar9 = "INVALID_STATE";
            if ((uVar7 < 0x100) && (0xf6 < uVar7 - 8)) {
                pcVar9 = *(reloc..str.14.llvm.39275123862783422 + uVar7 * 8);
            }
            uVar3 = sym.to_mhi_pm_state_str(arg1_00);
            _dev_err(arg1 + 0x28,"[E][%s] Did not enter M0, cur_state: %s pm_state: %s\n","mhi_device_get_sync_atomic"
                     ,pcVar9,uVar3);
            if ((iVar10 != 0) && (*(iVar10 + 0x18) < 3)) {
                uVar7 = *(arg1_01 + 0x188);
                uVar3 = *(iVar10 + 0x20);
                pcVar9 = "INVALID_STATE";
                if ((uVar7 < 0x100) && (0xf6 < uVar7 - 8)) {
                    pcVar9 = *(reloc..str.14.llvm.39275123862783422 + uVar7 * 8);
                }
                uVar4 = sym.to_mhi_pm_state_str(*(arg1_01 + 0x17c));
                ipc_log_string(uVar3,"[E][%s] Did not enter M0, cur_state: %s pm_state: %s\n",
                               "mhi_device_get_sync_atomic",pcVar9,uVar4);
            }
            _raw_read_lock_bh(iVar6);
            pcVar5 = *(arg1_01 + 0x230);
            if (2 < (pcVar5 + -0x8005ad8 >> 3 | pcVar5 << 0x3d)) {
                __cfi_slowpath_diag(0xba8145ef24be26ed,pcVar5,0x8001140);
            }
            (*pcVar5)(arg1_01,0);
            _raw_read_unlock_bh(iVar6);
            *(arg1 + 0x3cc) = *(arg1 + 0x3cc) + -1;
            pcVar5 = *(arg1_01 + 0x248);
            if (7 < (pcVar5 + -0x8005c80 >> 3 | pcVar5 << 0x3d)) {
                __cfi_slowpath_diag(0x95232cda069bc43d,pcVar5,0x8001160);
            }
            (*pcVar5)(arg1_01);
            return 0xffffff92;
        }
        pcVar5 = *(arg1_01 + 0x248);
        if ((pcVar5 + -0x8005c80 >> 3 | pcVar5 << 0x3d) < 8) goto code_r0x08013ce4;
        uVar3 = 0x8001180;
    }
    __cfi_slowpath_diag(0x95232cda069bc43d,pcVar5,uVar3);
code_r0x08013ce4:
    (*pcVar5)(arg1_01);
    return 0;
}


// ===== sym.mhi_controller_setup_timesync @ 0x08013f48 (size 120) =====

ulong sym.mhi_controller_setup_timesync(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(arg1 + 8) + 0xc0);
    piVar1 = kmem_cache_alloc_trace(_free_irq,0xdc0,0xb0);
    if (piVar1 == NULL) {
        uVar2 = 0xfffffff4;
    }
    else {
        uVar2 = 0;
        *piVar1 = arg2;
        piVar1[1] = arg3;
        piVar1[2] = arg4;
        *(iVar3 + 0x68) = piVar1;
    }
    return uVar2;
}


// ===== sym.mhi_misc_init_mmio @ 0x08013fc0 (size 756) =====

ulong sym.mhi_misc_init_mmio(int64_t arg1)

{
    uint64_t uVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    int iVar4;
    ulong uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    code *pcVar8;
    uint64_t uVar9;
    int *piVar10;
    int64_t iVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar12;
    int64_t iVar13;
    int64_t iVar14;
    int64_t iVar15;
    int64_t *piVar16;
    int64_t iVar17;
    ulong unaff_x30;
    uchar auVar18 [16];
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_38 = *(iVar12 + 0x5e0);
    iVar12 = *(arg1 + 8);
    iVar4 = sym.mhi_read_reg_field(arg1,*(arg1 + 0x18),0x18,0xffffffff);
    if (iVar4 != 0) {
        iVar13 = *(*(arg1 + 8) + 0xc0);
        _dev_err(iVar12 + 0x28,"[E][%s] Unable to read CHDBOFF register\n","mhi_misc_init_mmio");
        if ((iVar13 != 0) && (*(iVar13 + 0x18) < 3)) {
            ipc_log_string(*(iVar13 + 0x20),"[E][%s] Unable to read CHDBOFF register\n","mhi_misc_init_mmio");
        }
        uVar5 = 0xfffffffb;
        goto code_r0x08014230;
    }
    uStack_3c = 0;
    iVar12 = *(arg1 + 0x18);
    iVar13 = *(*(arg1 + 8) + 0xc0);
    if (((*(iVar13 + 0x48) != 0) && (iVar4 = sym.mhi_get_capability_offset(arg1,3,&uStack_3c), iVar4 == 0)) &&
       (iVar4 = *(arg1 + 0xbc), iVar4 != 0)) {
        piVar10 = *(arg1 + 0x128) + 0x24;
        do {
            if (*piVar10 == 2) {
                uVar3 = piVar10[-5];
                if (-1 < uVar3) {
                    *(iVar13 + 0x40) = iVar12 + 0x3f0;
                    uStack_3c = uStack_3c + 4;
                    sym.mhi_write_reg(arg1,*(arg1 + 0x18),uStack_3c,(uVar3 & 0x1f) << 0x13 | 0xfd000000);
                    iVar12 = *(*(arg1 + 8) + 0xc0);
                    if ((iVar12 != 0) && (*(iVar12 + 0x18) == 0)) {
                        ipc_log_string(*(iVar12 + 0x20),"[D][%s] Bandwidth scaling setup complete. Event ring:%d\n",
                                       "mhi_init_bw_scale",uVar3);
                    }
                    goto code_r0x08014070;
                }
                break;
            }
            piVar10 = piVar10 + 0x46;
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
    }
    iVar12 = *(*(arg1 + 8) + 0xc0);
    if ((iVar12 != 0) && (*(iVar12 + 0x18) < 2)) {
        ipc_log_string(*(iVar12 + 0x20),"[I][%s] BW scale setup failure\n","mhi_misc_init_mmio");
    }
code_r0x08014070:
    uStack_3c = 0;
    iVar13 = *(arg1 + 0x18);
    iVar12 = *(*(arg1 + 8) + 0xc0);
    iVar14 = *(iVar12 + 0x68);
    if (iVar14 == 0) {
code_r0x080140a8:
        if ((iVar12 != 0) && (*(iVar12 + 0x18) < 2)) {
            ipc_log_string(*(iVar12 + 0x20),"[I][%s] Time synchronization setup failure\n","mhi_misc_init_mmio");
        }
    }
    else {
        iVar4 = sym.mhi_get_capability_offset(arg1,2,&uStack_3c);
        if (iVar4 != 0) {
            iVar12 = *(*(arg1 + 8) + 0xc0);
            goto code_r0x080140a8;
        }
        *(iVar14 + 0x18) = *(arg1 + 0x18) + uStack_3c;
        __mutex_init(iVar14 + 0x80,"&mhi_tsync->mutex",obj.mhi_init_timesync.__key);
        iVar4 = *(arg1 + 0xbc);
        if (iVar4 != 0) {
            piVar10 = *(arg1 + 0x128) + 0x24;
            do {
                if (*piVar10 == 3) {
                    uVar3 = piVar10[-5];
                    if (-1 < uVar3) {
                        *(iVar14 + 0x68) = 0;
                        *(iVar14 + 0x70) = iVar14 + 0x70;
                        *(iVar14 + 0x78) = iVar14 + 0x70;
                        *(iVar14 + 0x20) = iVar13 + 1000;
                        sym.mhi_write_reg(arg1,*(iVar14 + 0x18),4,uVar3 & 0xff | 0x80007d00);
                        iVar12 = *(*(arg1 + 8) + 0xc0);
                        if ((iVar12 != 0) && (*(iVar12 + 0x18) == 0)) {
                            ipc_log_string(*(iVar12 + 0x20),
                                           "[D][%s] Time synchronization DB mode setup complete. Event ring:%d\n",
                                           "mhi_init_timesync",uVar3);
                        }
                    }
                    break;
                }
                piVar10 = piVar10 + 0x46;
                iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
        }
    }
    uVar5 = 0;
code_r0x08014230:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_38) {
        return uVar5;
    }
    auVar18 = __stack_chk_fail(uVar5);
    iVar14 = auVar18._8_8_;
    iVar13 = auVar18._0_8_;
    *extraout_x18 = sym.mhi_process_misc_tsync_ev_ring;
    iVar12 = iVar14 + 0x100;
    uVar3 = *(iVar14 + 0x10);
    iVar15 = **(iVar13 + 0x138);
    iVar17 = *(*(*(iVar13 + 8) + 0xc0) + 0x68);
    _raw_spin_lock_bh(iVar12);
    uVar6 = sym.mhi_to_virtual(iVar14 + 0x28,*(iVar15 + uVar3 * 0x2c + 0x1c));
    if (*(iVar14 + 0x50) == uVar6) {
        _raw_spin_unlock_bh(iVar12);
    }
    else {
        uVar7 = *(iVar14 + 0x48);
        if (uVar6 == uVar7) {
            uVar6 = uVar6 + *(iVar14 + 0x68);
        }
        uVar9 = uVar6 - 0x20;
        *(iVar14 + 0x50) = uVar6 - 0x10;
        if (uVar9 < uVar7) {
            iVar15 = *(iVar14 + 0x60);
            iVar11 = *(iVar14 + 0x68);
            uVar9 = (uVar7 + iVar11) - iVar15;
        }
        else {
            iVar15 = *(iVar14 + 0x60);
            iVar11 = *(iVar14 + 0x68);
        }
        uVar1 = uVar9 + iVar15;
        if (uVar7 + iVar11 <= uVar9 + iVar15) {
            uVar1 = uVar7;
        }
        *(iVar14 + 0x58) = uVar1;
        **(iVar14 + 0x38) = (*(iVar14 + 0x30) - uVar7) + uVar1;
        uVar7 = *(iVar14 + 0x50) + *(iVar14 + 0x60);
        if (*(iVar14 + 0x48) + *(iVar14 + 0x68) <= uVar7) {
            uVar7 = *(iVar14 + 0x48);
        }
        *(iVar14 + 0x50) = uVar7;
        DataMemoryBarrier(2,2);
        if (*(uVar6 - 2) != 'H') {
    //WARNING: Does not return
            pcVar8 = SoftwareBreakpoint(0x800,0x80145d0);
            (*pcVar8)();
        }
        iVar4 = *(uVar6 - 8);
        uVar5 = *(uVar6 - 0x10);
        iVar15 = *(*(iVar13 + 8) + 0xc0);
        if ((iVar15 != 0) && (*(iVar15 + 0x18) == 0)) {
            ipc_log_string(*(iVar15 + 0x20),"[D][%s] Received TSYNC event with seq: 0x%llx time: 0x%llx\n",
                           "mhi_process_misc_tsync_ev_ring",iVar4,uVar5);
        }
        _raw_read_lock_bh(iVar13 + 0x170);
        if ((*(iVar13 + 0x180) & *(iVar13 + 0x17c)) != 0) {
            sym.mhi_ring_er_db(iVar14);
        }
        _raw_read_unlock_bh(iVar13 + 0x170);
        _raw_spin_unlock_bh(iVar12);
        mutex_lock(iVar17 + 0x80);
        if (*(iVar17 + 0x28) != iVar4) {
    //WARNING: Does not return
            pcVar8 = SoftwareBreakpoint(0x800,0x8014628);
            (*pcVar8)();
        }
        iVar12 = iVar17 + 0x68;
        _raw_spin_lock(iVar12);
        piVar16 = *(iVar17 + 0x70);
        while ((piVar16 != NULL && (iVar17 + 0x70 != piVar16))) {
            uVar6 = __list_del_entry_valid(piVar16);
            if ((uVar6 & 1) != 0) {
                iVar15 = *piVar16;
                piVar2 = piVar16[1];
                *(iVar15 + 8) = piVar2;
                *piVar2 = iVar15;
            }
            *piVar16 = -0x2152ffffffffff00;
            piVar16[1] = -0x2152fffffffffede;
            _raw_spin_unlock(iVar12);
            pcVar8 = piVar16[5];
            if (pcVar8 != sym.__typeid__ZTSFvP10mhi_devicejyyE_global_addr) {
                __cfi_slowpath_diag(0x91b0562652df3243,pcVar8,0x80011c0);
            }
            (*pcVar8)(piVar16[4],piVar16[2],*(iVar17 + 0x30),uVar5);
            kfree(piVar16);
            _raw_spin_lock(iVar12);
            piVar16 = *(iVar17 + 0x70);
        }
        _raw_spin_unlock(iVar12);
        *(iVar17 + 0x40) = 0;
        *(iVar17 + 0x38) = uVar5;
        complete(iVar17 + 0x48);
        pcVar8 = *(iVar13 + 0x248);
        if (7 < (pcVar8 + -0x8005c80 >> 3 | pcVar8 << 0x3d)) {
            __cfi_slowpath_diag(0x95232cda069bc43d,pcVar8,0x80011e0);
        }
        (*pcVar8)(iVar13);
        sym.mhi_device_put(*(iVar13 + 8));
        mutex_unlock(iVar17 + 0x80);
    }
    iVar12 = *(*(iVar13 + 8) + 0xc0);
    if ((iVar12 != 0) && (*(iVar12 + 0x18) == 0)) {
        ipc_log_string(*(iVar12 + 0x20),"[D][%s] exit er_index: %u, ret: %d\n","mhi_process_misc_tsync_ev_ring",
                       *(iVar14 + 0x10),0);
    }
    return 0;
}


// ===== sym.mhi_process_misc_tsync_ev_ring @ 0x080142b4 (size 1068) =====

ulong sym.mhi_process_misc_tsync_ev_ring(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    code *pcVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong *in_x18;
    ulong uVar11;
    int64_t iVar12;
    int64_t *piVar13;
    int64_t iVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = arg2 + 0x100;
    uVar3 = *(arg2 + 0x10);
    iVar12 = **(arg1 + 0x138);
    iVar14 = *(*(*(arg1 + 8) + 0xc0) + 0x68);
    _raw_spin_lock_bh(iVar8);
    uVar5 = sym.mhi_to_virtual(arg2 + 0x28,*(iVar12 + uVar3 * 0x2c + 0x1c));
    if (*(arg2 + 0x50) == uVar5) {
        _raw_spin_unlock_bh(iVar8);
    }
    else {
        uVar6 = *(arg2 + 0x48);
        if (uVar5 == uVar6) {
            uVar5 = uVar5 + *(arg2 + 0x68);
        }
        uVar9 = uVar5 - 0x20;
        *(arg2 + 0x50) = uVar5 - 0x10;
        if (uVar9 < uVar6) {
            iVar12 = *(arg2 + 0x60);
            iVar10 = *(arg2 + 0x68);
            uVar9 = (uVar6 + iVar10) - iVar12;
        }
        else {
            iVar12 = *(arg2 + 0x60);
            iVar10 = *(arg2 + 0x68);
        }
        uVar1 = uVar9 + iVar12;
        if (uVar6 + iVar10 <= uVar9 + iVar12) {
            uVar1 = uVar6;
        }
        *(arg2 + 0x58) = uVar1;
        **(arg2 + 0x38) = (*(arg2 + 0x30) - uVar6) + uVar1;
        uVar6 = *(arg2 + 0x50) + *(arg2 + 0x60);
        if (*(arg2 + 0x48) + *(arg2 + 0x68) <= uVar6) {
            uVar6 = *(arg2 + 0x48);
        }
        *(arg2 + 0x50) = uVar6;
        DataMemoryBarrier(2,2);
        if (*(uVar5 - 2) != 'H') {
    //WARNING: Does not return
            pcVar7 = SoftwareBreakpoint(0x800,0x80145d0);
            (*pcVar7)();
        }
        iVar4 = *(uVar5 - 8);
        uVar11 = *(uVar5 - 0x10);
        iVar12 = *(*(arg1 + 8) + 0xc0);
        if ((iVar12 != 0) && (*(iVar12 + 0x18) == 0)) {
            ipc_log_string(*(iVar12 + 0x20),"[D][%s] Received TSYNC event with seq: 0x%llx time: 0x%llx\n",
                           "mhi_process_misc_tsync_ev_ring",iVar4,uVar11);
        }
        _raw_read_lock_bh(arg1 + 0x170);
        if ((*(arg1 + 0x180) & *(arg1 + 0x17c)) != 0) {
            sym.mhi_ring_er_db(arg2);
        }
        _raw_read_unlock_bh(arg1 + 0x170);
        _raw_spin_unlock_bh(iVar8);
        mutex_lock(iVar14 + 0x80);
        if (*(iVar14 + 0x28) != iVar4) {
    //WARNING: Does not return
            pcVar7 = SoftwareBreakpoint(0x800,0x8014628);
            (*pcVar7)();
        }
        iVar8 = iVar14 + 0x68;
        _raw_spin_lock(iVar8);
        piVar13 = *(iVar14 + 0x70);
        while ((piVar13 != NULL && (iVar14 + 0x70 != piVar13))) {
            uVar5 = __list_del_entry_valid(piVar13);
            if ((uVar5 & 1) != 0) {
                iVar12 = *piVar13;
                piVar2 = piVar13[1];
                *(iVar12 + 8) = piVar2;
                *piVar2 = iVar12;
            }
            *piVar13 = -0x2152ffffffffff00;
            piVar13[1] = -0x2152fffffffffede;
            _raw_spin_unlock(iVar8);
            pcVar7 = piVar13[5];
            if (pcVar7 != sym.__typeid__ZTSFvP10mhi_devicejyyE_global_addr) {
                __cfi_slowpath_diag(0x91b0562652df3243,pcVar7,0x80011c0);
            }
            (*pcVar7)(piVar13[4],piVar13[2],*(iVar14 + 0x30),uVar11);
            kfree(piVar13);
            _raw_spin_lock(iVar8);
            piVar13 = *(iVar14 + 0x70);
        }
        _raw_spin_unlock(iVar8);
        *(iVar14 + 0x40) = 0;
        *(iVar14 + 0x38) = uVar11;
        complete(iVar14 + 0x48);
        pcVar7 = *(arg1 + 0x248);
        if (7 < (pcVar7 + -0x8005c80 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0x95232cda069bc43d,pcVar7,0x80011e0);
        }
        (*pcVar7)(arg1);
        sym.mhi_device_put(*(arg1 + 8));
        mutex_unlock(iVar14 + 0x80);
    }
    iVar8 = *(*(arg1 + 8) + 0xc0);
    if ((iVar8 != 0) && (*(iVar8 + 0x18) == 0)) {
        ipc_log_string(*(iVar8 + 0x20),"[D][%s] exit er_index: %u, ret: %d\n","mhi_process_misc_tsync_ev_ring",
                       *(arg2 + 0x10),0);
    }
    return 0;
}


// ===== sym.mhi_process_misc_bw_ev_ring @ 0x0801470c (size 1128) =====

code * sym.mhi_process_misc_bw_ev_ring(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    uint32_t uVar4;
    int64_t *arg2_00;
    ulong uVar5;
    int64_t *piVar6;
    int64_t *piVar7;
    int64_t iVar8;
    ulong *in_x18;
    code *pcVar9;
    code *unaff_x22;
    int64_t unaff_x24;
    int64_t iVar10;
    ulong unaff_x30;
    uint64_t uStack_68;
    uint32_t uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_58 = *(iVar10 + 0x5e0);
    pcVar9 = 0xffffffea;
    uVar4 = *(arg2 + 0x10);
    iVar10 = **(arg1 + 0x138);
    uStack_60 = 0;
    uStack_68 = 0;
    if (7 < *(arg1 + 0x184)) goto code_r0x08014a28;
    if ((1 << (*(arg1 + 0x184) & 0x1f) & 0x94U) == 0) goto code_r0x08014a28;
    iVar1 = arg2 + 0x100;
    unaff_x22 = arg2 + 0x28;
    unaff_x24 = *(*(arg1 + 8) + 0xc0);
    _raw_spin_lock_bh(iVar1);
    arg2_00 = sym.mhi_to_virtual(unaff_x22,*(iVar10 + uVar4 * 0x2c + 0x1c));
    if (*(arg2 + 0x50) == arg2_00) {
        iVar10 = *(*(arg1 + 8) + 0xc0);
        if ((iVar10 != 0) && (*(iVar10 + 0x18) == 0)) {
            arg2 = *(iVar10 + 0x20);
            arg1 = *arg2_00;
            uVar5 = sym.mhi_to_physical(unaff_x22,arg2_00);
            ipc_log_string(arg2,"[D][%s] Ignore BW event:0x%llx ev_ring RP:0x%llx\n","mhi_process_misc_bw_ev_ring",
                           arg1,uVar5);
        }
        _raw_spin_unlock_bh(iVar1);
        pcVar9 = NULL;
        goto code_r0x08014a5c;
    }
    piVar6 = *(arg2 + 0x48);
    if (arg2_00 == piVar6) {
        arg2_00 = arg2_00 + *(arg2 + 0x68);
    }
    piVar7 = arg2_00 + -4;
    *(arg2 + 0x50) = arg2_00 + -2;
    if (piVar7 < piVar6) {
        iVar10 = *(arg2 + 0x60);
        iVar8 = *(arg2 + 0x68);
        piVar7 = piVar6 + (iVar8 - iVar10);
    }
    else {
        iVar10 = *(arg2 + 0x60);
        iVar8 = *(arg2 + 0x68);
    }
    piVar3 = piVar7 + iVar10;
    if (piVar6 + iVar8 <= piVar7 + iVar10) {
        piVar3 = piVar6;
    }
    *(arg2 + 0x58) = piVar3;
    **(arg2 + 0x38) = (*(arg2 + 0x30) - piVar6) + piVar3;
    uVar2 = *(arg2 + 0x50) + *(arg2 + 0x60);
    if (*(arg2 + 0x48) + *(arg2 + 0x68) <= uVar2) {
        uVar2 = *(arg2 + 0x48);
    }
    *(arg2 + 0x50) = uVar2;
    DataMemoryBarrier(2,2);
    if ((*(arg2_00 + -4) & 0xff0000) == 0x500000) {
        iVar10 = *(*(arg1 + 8) + 0xc0);
        uStack_68 = CONCAT14(arg2_00[-1],*(arg2_00 + -4) >> 0x18);
        uStack_60 = *(arg2_00 + -7);
        if ((iVar10 != 0) && (*(iVar10 + 0x18) == 0)) {
            ipc_log_string(*(iVar10 + 0x20),"[D][%s] Received BW_REQ with seq:%d link speed:0x%x width:0x%x\n",
                           "mhi_process_misc_bw_ev_ring");
        }
        unaff_x22 = arg1 + 0x170;
        _raw_read_lock_bh(unaff_x22);
        if ((*(arg1 + 0x180) & *(arg1 + 0x17c)) != 0) {
            sym.mhi_ring_er_db(arg2);
        }
        _raw_read_unlock_bh(unaff_x22);
        _raw_spin_unlock_bh(iVar1);
        uVar4 = sym.mhi_device_get_sync(*(arg1 + 8));
        pcVar9 = uVar4;
        if (uVar4 != 0) goto code_r0x08014a28;
        pcVar9 = *(arg1 + 0x240);
        if (9 < (pcVar9 + -0x8005c30 >> 3 | pcVar9 << 0x3d)) goto code_r0x08014b2c;
        while( true ) {
            (*pcVar9)(arg1);
            mutex_lock(arg1 + 0x140);
            pcVar9 = *(unaff_x24 + 0x48);
            __cfi_slowpath_diag(0xf208cef357dcb2f8,pcVar9,0x8001220);
            uVar4 = (*pcVar9)(arg1,&uStack_68);
            pcVar9 = uVar4;
            if (uVar4 == 0) {
                uVar4 = 0;
                *(arg1 + 0x1c0) = uStack_68;
                *(arg1 + 0x1c8) = uStack_60;
            }
            else {
                uVar4 = 0xf00;
            }
            _raw_write_lock_bh(unaff_x22);
            uVar4 = uStack_60 & 0xff | uVar4;
            *(unaff_x24 + 0x5c) = uVar4;
            if ((*(arg1 + 0x180) & *(arg1 + 0x17c)) == 0) {
                iVar10 = *(*(arg1 + 8) + 0xc0);
                if ((iVar10 != 0) && (*(iVar10 + 0x18) == 0)) {
                    ipc_log_string(*(iVar10 + 0x20),"[D][%s] Cached BW response for seq: %u, result: %d\n",
                                   "mhi_process_misc_bw_ev_ring",uStack_60,*(iVar10 + 0x5c));
                }
            }
            else {
                sym.mhi_write_reg(arg1,*(unaff_x24 + 0x40),0,uVar4);
                *(unaff_x24 + 0x5c) = 0;
            }
            _raw_write_unlock_bh(unaff_x22);
            unaff_x22 = *(arg1 + 0x248);
            if (7 < (unaff_x22 + -0x8005c80 >> 3 | unaff_x22 << 0x3d)) {
                __cfi_slowpath_diag(0x95232cda069bc43d,unaff_x22,0x8001240);
            }
            (*unaff_x22)(arg1);
            sym.mhi_device_put(*(arg1 + 8));
            mutex_unlock(arg1 + 0x140);
code_r0x08014a28:
            iVar10 = *(*(arg1 + 8) + 0xc0);
            if ((iVar10 != 0) && (*(iVar10 + 0x18) == 0)) {
                ipc_log_string(*(iVar10 + 0x20),"[D][%s] exit er_index:%u ret:%d\n","mhi_process_misc_bw_ev_ring",
                               *(arg2 + 0x10),pcVar9);
            }
code_r0x08014a5c:
            iVar10 = sp_el0;
            if (*(iVar10 + 0x5e0) == iStack_58) break;
            __stack_chk_fail();
code_r0x08014b2c:
            __cfi_slowpath_diag(0x9d98c101a4fe7fa9,pcVar9,0x8001200);
        }
        return pcVar9;
    }
    //WARNING: Does not return
    pcVar9 = SoftwareBreakpoint(0x800,0x8014a9c);
    (*pcVar9)();
}


// ===== sym.mhi_misc_dbs_pending @ 0x08014b74 (size 132) =====

void sym.mhi_misc_dbs_pending(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 8) + 0xc0);
    if ((*(iVar2 + 0x48) != 0) && (*(iVar2 + 0x5c) != 0)) {
        sym.mhi_write_reg(arg1,*(iVar2 + 0x40),0,*(iVar2 + 0x5c));
        iVar1 = *(*(arg1 + 8) + 0xc0);
        if ((iVar1 != 0) && (*(iVar1 + 0x18) == 0)) {
            ipc_log_string(*(iVar1 + 0x20),"[D][%s] Completed BW response: %d\n","mhi_misc_dbs_pending",
                           *(iVar1 + 0x5c));
        }
        *(iVar2 + 0x5c) = 0;
    }
    return;
}


// ===== sym.mhi_controller_set_bw_scale_cb @ 0x08014bf8 (size 24) =====

void sym.mhi_controller_set_bw_scale_cb(int64_t arg1,int64_t arg2)

{
    *(*(*(arg1 + 8) + 0xc0) + 0x48) = arg2;
    return;
}


// ===== sym.mhi_controller_set_base @ 0x08014c10 (size 24) =====

void sym.mhi_controller_set_base(int64_t arg1,int64_t arg2)

{
    *(*(*(arg1 + 8) + 0xc0) + 0x50) = arg2;
    return;
}


// ===== sym.mhi_controller_get_base @ 0x08014c28 (size 48) =====

ulong sym.mhi_controller_get_base(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    iVar1 = *(*(*(arg1 + 8) + 0xc0) + 0x50);
    if (iVar1 != 0) {
        *arg2 = iVar1;
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.mhi_controller_get_numeric_id @ 0x08014c58 (size 24) =====

uint sym.mhi_controller_get_numeric_id(int64_t arg1)

{
    return *(*(*(arg1 + 8) + 0xc0) + 0x58);
}


// ===== sym.mhi_get_channel_db_base @ 0x08014c70 (size 172) =====

ulong sym.mhi_get_channel_db_base(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    ulong unaff_x30;
    uchar auVar5 [16];
    uchar auVar6 [12];
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iVar3 = *(iVar1 + 0x5e0);
    iVar1 = *(arg1 + 0x10);
    iVar4 = *(*(iVar1 + 8) + 0xc0);
    if (((*(iVar1 + 0x17c) & 0x7de) == 0) ||
       (uVar2 = sym.mhi_read_reg_field(iVar1,*(iVar1 + 0x18),0x18,0xffffffff), uVar2 != 0)) {
        uVar2 = 0xfffffffb;
    }
    else {
        *arg2 = *(iVar4 + 0x50);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iVar3) {
        return uVar2;
    }
    auVar5 = __stack_chk_fail(uVar2);
    *extraout_x18 = sym.mhi_get_event_ring_db_base;
    iVar1 = sp_el0;
    iVar3 = *(iVar1 + 0x5e0);
    iVar1 = *(auVar5._0_8_ + 0x10);
    iVar4 = *(*(iVar1 + 8) + 0xc0);
    if (((*(iVar1 + 0x17c) & 0x7de) == 0) ||
       (uVar2 = sym.mhi_read_reg_field(iVar1,*(iVar1 + 0x18),0x20,0xffffffff), uVar2 != 0)) {
        uVar2 = 0xfffffffb;
    }
    else {
        *auVar5._8_8_ = *(iVar4 + 0x50);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iVar3) {
        return uVar2;
    }
    auVar6 = __stack_chk_fail(uVar2);
    if (auVar6._8_4_ < *(auVar6._0_8_ + 0xb8)) {
        return *(*(auVar6._0_8_ + 0x98) + auVar6._8_4_ * 0x198 + 0x110);
    }
    return 0;
}


// ===== sym.mhi_get_event_ring_db_base @ 0x08014d1c (size 172) =====

ulong sym.mhi_get_event_ring_db_base(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    uchar auVar5 [12];
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iVar3 = *(iVar1 + 0x5e0);
    iVar1 = *(arg1 + 0x10);
    iVar4 = *(*(iVar1 + 8) + 0xc0);
    if (((*(iVar1 + 0x17c) & 0x7de) == 0) ||
       (uVar2 = sym.mhi_read_reg_field(iVar1,*(iVar1 + 0x18),0x20,0xffffffff), uVar2 != 0)) {
        uVar2 = 0xfffffffb;
    }
    else {
        *arg2 = *(iVar4 + 0x50);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iVar3) {
        return uVar2;
    }
    auVar5 = __stack_chk_fail(uVar2);
    if (auVar5._8_4_ < *(auVar5._0_8_ + 0xb8)) {
        return *(*(auVar5._0_8_ + 0x98) + auVar5._8_4_ * 0x198 + 0x110);
    }
    return 0;
}


// ===== sym.mhi_get_device_for_channel @ 0x08014dc8 (size 52) =====

ulong sym.mhi_get_device_for_channel(int64_t arg1,uint32_t arg2)

{
    if (arg2 < *(arg1 + 0xb8)) {
        return *(*(arg1 + 0x98) + arg2 * 0x198 + 0x110);
    }
    return 0;
}


// ===== sym.mhi_controller_set_loglevel @ 0x08014dfc (size 24) =====

void sym.mhi_controller_set_loglevel(int64_t arg1,int64_t arg2)

{
    *(*(*(arg1 + 8) + 0xc0) + 0x18) = arg2;
    return;
}


// ===== sym.mhi_controller_set_sfr_support @ 0x08014e14 (size 128) =====

ulong sym.mhi_controller_set_sfr_support(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(arg1 + 8) + 0xc0);
    iVar1 = kmem_cache_alloc_trace(_free_irq,0xdc0,0x48);
    if (iVar1 != 0) {
        *(iVar1 + 0x10) = arg2;
        iVar2 = __kmalloc(arg2,0xdc0);
        *(iVar1 + 0x18) = iVar2;
        if (iVar2 != 0) {
            *(iVar3 + 0x60) = iVar1;
            return 0;
        }
    }
    return 0xfffffff4;
}


// ===== sym.mhi_misc_mission_mode @ 0x08014e94 (size 552) =====

code * sym.mhi_misc_mission_mode(int64_t arg1)

{
    uint64_t uVar1;
    int iVar2;
    uint32_t uVar3;
    code *pcVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t iVar7;
    char *pcVar8;
    char *arg3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    ulong *puVar10;
    code *unaff_x21;
    code *pcVar11;
    int64_t iVar12;
    code *pcVar13;
    ulong *puVar14;
    code *unaff_x26;
    ulong unaff_x30;
    uchar auVar15 [16];
    uint uStack_c0;
    uint uStack_bc;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    arg3 = &uStack_48;
    iVar9 = *(arg1 + 8);
    uStack_48 = 0;
    uStack_40 = 0;
    pcVar11 = *(*(iVar9 + 0xc0) + 0x60);
    pcVar4 = sym.mhi_get_remote_time_sync(iVar9,&uStack_40,arg3);
    if (((pcVar4 == 0) && (iVar5 = *(*(arg1 + 8) + 0xc0), iVar5 != 0)) && (*(iVar5 + 0x18) < 2)) {
        arg3 = "mhi_misc_mission_mode";
        pcVar4 = ipc_log_string(*(iVar5 + 0x20),"[I][%s] Timesync: local: %llx, remote: %llx\n",
                                "mhi_misc_mission_mode",uStack_40,uStack_48);
    }
    if ((0x13 < *(arg1 + 0xb8)) && (iVar5 = *(*(arg1 + 0x98) + 0x1f58), pcVar4 = NULL, iVar5 != 0)) {
        pcVar4 = sym.mhi_notify(iVar5,0xb);
    }
    if (pcVar11 == NULL) goto code_r0x08014f8c;
    memset(*(pcVar11 + 0x18),0,*(pcVar11 + 0x10));
    iVar5 = dma_alloc_attrs(*arg1,*(pcVar11 + 0x10),pcVar11 + 8,0xcc0,0);
    *pcVar11 = iVar5;
    if (iVar5 == 0) {
        arg3 = "mhi_misc_mission_mode";
        iVar5 = *(*(arg1 + 8) + 0xc0);
        pcVar4 = _dev_err(iVar9 + 0x28,"[E][%s] Failed to allocate memory for sfr\n");
        if ((iVar5 == 0) || (2 < *(iVar5 + 0x18))) goto code_r0x08014f8c;
        pcVar8 = "[E][%s] Failed to allocate memory for sfr\n";
    }
    else {
        unaff_x21 = pcVar11 + 0x28;
        *unaff_x21 = 0;
        __init_swait_queue_head(pcVar11 + 0x30,"&x->wait",obj.mhi_register_controller.__key);
        arg3 = 0x49;
        iVar2 = sym.mhi_send_cmd(arg1,0,0x49);
        if (iVar2 == 0) {
            uVar6 = __msecs_to_jiffies(*(arg1 + 0x178));
            pcVar4 = wait_for_completion_timeout(unaff_x21,uVar6);
            if ((pcVar4 != 0) && (*(pcVar11 + 0x20) == 1)) goto code_r0x08014f8c;
            arg3 = "mhi_misc_mission_mode";
            iVar5 = *(*(arg1 + 8) + 0xc0);
            pcVar4 = _dev_err(iVar9 + 0x28,"[E][%s] Failed to get sfr cfg cmd completion\n");
            if ((iVar5 == 0) || (2 < *(iVar5 + 0x18))) goto code_r0x08014f8c;
            pcVar8 = "[E][%s] Failed to get sfr cfg cmd completion\n";
        }
        else {
            arg3 = "mhi_misc_mission_mode";
            iVar5 = *(*(arg1 + 8) + 0xc0);
            pcVar4 = _dev_err(iVar9 + 0x28,"[E][%s] Failed to send sfr cfg cmd\n");
            if ((iVar5 == 0) || (2 < *(iVar5 + 0x18))) goto code_r0x08014f8c;
            pcVar8 = "[E][%s] Failed to send sfr cfg cmd\n";
        }
    }
    arg3 = "mhi_misc_mission_mode";
    pcVar4 = ipc_log_string(*(iVar5 + 0x20),pcVar8);
code_r0x08014f8c:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return pcVar4;
    }
    auVar15 = __stack_chk_fail();
    pcVar4 = auVar15._8_8_;
    *extraout_x18 = sym.mhi_get_remote_time_sync;
    pcStack_a8 = sym.mhi_get_remote_time_sync;
    iVar9 = sp_el0;
    iStack_b8 = *(iVar9 + 0x5e0);
    iVar9 = *(auVar15._0_8_ + 0x10);
    uStack_c0 = 0xffffffff;
    uStack_bc = 0xffffffff;
    iVar5 = *(iVar9 + 8);
    puVar10 = *(iVar5 + 0xc0);
    puVar14 = puVar10[0xd];
    puStack_b0 = &stack0xffffffffffffffd0;
    if (puVar14 == NULL) {
        pcVar13 = 0xffffffea;
        pcVar4 = unaff_x21;
        arg3 = pcVar11;
    }
    else if (*(iVar9 + 0x17c) < 0x80) {
        puVar10 = puVar14 + 0x10;
        mutex_lock(puVar10);
        if (*(puVar14 + 8) == '\0') {
            uVar3 = sym.mhi_device_get_sync(*(iVar9 + 8));
            if (uVar3 != 0) goto code_r0x080152f0;
            pcVar13 = *(iVar9 + 0x240);
            unaff_x26 = sym.__typeid__ZTSFiP14mhi_controllerE_global_addr;
            if (9 < (pcVar13 + -0x8005c30 >> 3 | pcVar13 << 0x3d)) goto code_r0x080154d8;
            goto code_r0x080151b0;
        }
        iVar12 = puVar14[6];
        mutex_unlock(puVar10);
        puVar10 = puVar14 + 9;
        uVar6 = __msecs_to_jiffies(*(iVar9 + 0x178));
        iVar2 = wait_for_completion_timeout(puVar10,uVar6);
        if ((*(iVar9 + 0x17c) < 0x80) && (iVar2 != 0)) {
            *pcVar4 = iVar12;
            pcVar13 = NULL;
            *arg3 = puVar14[7];
        }
        else {
            iVar9 = *(*(iVar9 + 8) + 0xc0);
            _dev_err(iVar5 + 0x28,"[E][%s] Pending DB request did not complete, abort\n","mhi_get_remote_time_sync");
            if ((iVar9 != 0) && (*(iVar9 + 0x18) < 3)) {
                ipc_log_string(*(iVar9 + 0x20),"[E][%s] Pending DB request did not complete, abort\n",
                               "mhi_get_remote_time_sync");
            }
            pcVar13 = 0xfffffff5;
        }
    }
    else {
        uVar6 = sym.to_mhi_pm_state_str(*(iVar9 + 0x17c));
        _dev_err(iVar5 + 0x28,"[E][%s] MHI is not in active state, pm_state:%s\n","mhi_get_remote_time_sync",uVar6);
        if ((puVar10 != NULL) && (*(puVar10 + 3) < 3)) {
            puVar10 = puVar10[4];
            uVar6 = sym.to_mhi_pm_state_str(*(iVar9 + 0x17c));
            ipc_log_string(puVar10,"[E][%s] MHI is not in active state, pm_state:%s\n","mhi_get_remote_time_sync",
                           uVar6);
        }
        pcVar13 = 0xfffffffb;
        pcVar4 = unaff_x21;
        arg3 = pcVar11;
    }
    while( true ) {
        iVar12 = sp_el0;
        if (*(iVar12 + 0x5e0) == iStack_b8) break;
        __stack_chk_fail();
code_r0x080154d8:
        __cfi_slowpath_diag(0x9d98c101a4fe7fa9,pcVar13,0x8001260);
code_r0x080151b0:
        (*pcVar13)(iVar9);
        pcVar11 = puVar14[1];
        if (9 < (pcVar11 - unaff_x26 >> 3 | pcVar11 - unaff_x26 << 0x3d)) {
            __cfi_slowpath_diag(0x9d98c101a4fe7fa9,pcVar11,0x8001280);
        }
        uVar3 = (*pcVar11)(iVar9);
        if (uVar3 == 0) {
            iVar12 = sp_el0;
            *(iVar12 + 0x10) = *(iVar12 + 0x10) + 1;
            uVar1 = daif;
            daif = uVar1 | 0xc0;
            iVar2 = sym.mhi_read_reg(iVar9,puVar14[3],0xc,&uStack_c0);
            if (iVar2 != 0) {
                iVar7 = *(*(iVar9 + 8) + 0xc0);
                _dev_err(iVar5 + 0x28,"[E][%s] Time HIGH register read error\n","mhi_get_remote_time_sync");
                if ((iVar7 != 0) && (*(iVar7 + 0x18) < 3)) {
                    ipc_log_string(*(iVar7 + 0x20),"[E][%s] Time HIGH register read error\n",
                                   "mhi_get_remote_time_sync");
                }
            }
            iVar2 = sym.mhi_read_reg(iVar9,puVar14[3],8,&uStack_bc);
            if (iVar2 != 0) {
                iVar7 = *(*(iVar9 + 8) + 0xc0);
                _dev_err(iVar5 + 0x28,"[E][%s] Time LOW register read error\n","mhi_get_remote_time_sync");
                if ((iVar7 != 0) && (*(iVar7 + 0x18) < 3)) {
                    ipc_log_string(*(iVar7 + 0x20),"[E][%s] Time LOW register read error\n","mhi_get_remote_time_sync"
                                  );
                }
            }
            uVar3 = sym.mhi_read_reg(iVar9,puVar14[3],0xc,&uStack_c0);
            if (uVar3 != 0) {
                iVar7 = *(*(iVar9 + 8) + 0xc0);
                _dev_err(iVar5 + 0x28,"[E][%s] Time HIGH register read error\n","mhi_get_remote_time_sync");
                if ((iVar7 != 0) && (*(iVar7 + 0x18) < 3)) {
                    ipc_log_string(*(iVar7 + 0x20),"[E][%s] Time HIGH register read error\n",
                                   "mhi_get_remote_time_sync");
                }
            }
            *arg3 = CONCAT44(uStack_c0,uStack_bc);
            arg3 = *puVar14;
            __cfi_slowpath_diag(0xb2e3bd30d10cd90e,arg3,0x80012a0);
            iVar7 = (*arg3)(iVar9);
            *pcVar4 = iVar7;
            uVar1 = daif;
            daif = uVar1 & 0xffffffffffffff3f;
            iVar7 = *(iVar12 + 0x10) + -1;
            *(iVar12 + 0x10) = iVar7;
            if ((iVar7 == 0) || (*(iVar12 + 0x10) == 0)) {
                preempt_schedule();
            }
            pcVar4 = puVar14[2];
            if (9 < (pcVar4 - unaff_x26 >> 3 | pcVar4 - unaff_x26 << 0x3d)) {
                __cfi_slowpath_diag(0x9d98c101a4fe7fa9,pcVar4,0x80012c0);
            }
            (*pcVar4)(iVar9);
        }
        pcVar4 = *(iVar9 + 0x248);
        if (7 < (pcVar4 + -0x8005c80 >> 3 | pcVar4 << 0x3d)) {
            __cfi_slowpath_diag(0x95232cda069bc43d,pcVar4,0x80012e0);
        }
        (*pcVar4)(iVar9);
        sym.mhi_device_put(*(iVar9 + 8));
code_r0x080152f0:
        pcVar13 = uVar3;
        mutex_unlock(puVar10);
    }
    return pcVar13;
}


// ===== sym.mhi_get_remote_time_sync @ 0x080150bc (size 1196) =====

code * sym.mhi_get_remote_time_sync(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    int iVar3;
    uint32_t uVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong *puVar7;
    code *unaff_x21;
    code *unaff_x22;
    ulong uVar8;
    code *pcVar9;
    ulong *puVar10;
    int64_t iVar11;
    code *unaff_x26;
    int64_t iVar12;
    ulong unaff_x30;
    uint uStack_70;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    iVar6 = *(arg1 + 0x10);
    uStack_70 = 0xffffffff;
    uStack_6c = 0xffffffff;
    iVar11 = *(iVar6 + 8);
    puVar7 = *(iVar11 + 0xc0);
    puVar10 = puVar7[0xd];
    if (puVar10 == NULL) {
        pcVar9 = 0xffffffea;
        arg2 = unaff_x21;
        arg3 = unaff_x22;
    }
    else if (*(iVar6 + 0x17c) < 0x80) {
        puVar7 = puVar10 + 0x10;
        mutex_lock(puVar7);
        if (*(puVar10 + 8) == '\0') {
            uVar4 = sym.mhi_device_get_sync(*(iVar6 + 8));
            if (uVar4 != 0) goto code_r0x080152f0;
            pcVar9 = *(iVar6 + 0x240);
            unaff_x26 = sym.__typeid__ZTSFiP14mhi_controllerE_global_addr;
            if (9 < (pcVar9 + -0x8005c30 >> 3 | pcVar9 << 0x3d)) goto code_r0x080154d8;
            goto code_r0x080151b0;
        }
        uVar8 = puVar10[6];
        mutex_unlock(puVar7);
        puVar7 = puVar10 + 9;
        uVar5 = __msecs_to_jiffies(*(iVar6 + 0x178));
        iVar3 = wait_for_completion_timeout(puVar7,uVar5);
        if ((*(iVar6 + 0x17c) < 0x80) && (iVar3 != 0)) {
            *arg2 = uVar8;
            pcVar9 = NULL;
            *arg3 = puVar10[7];
        }
        else {
            iVar6 = *(*(iVar6 + 8) + 0xc0);
            _dev_err(iVar11 + 0x28,"[E][%s] Pending DB request did not complete, abort\n","mhi_get_remote_time_sync");
            if ((iVar6 != 0) && (*(iVar6 + 0x18) < 3)) {
                ipc_log_string(*(iVar6 + 0x20),"[E][%s] Pending DB request did not complete, abort\n",
                               "mhi_get_remote_time_sync");
            }
            pcVar9 = 0xfffffff5;
        }
    }
    else {
        uVar5 = sym.to_mhi_pm_state_str(*(iVar6 + 0x17c));
        _dev_err(iVar11 + 0x28,"[E][%s] MHI is not in active state, pm_state:%s\n","mhi_get_remote_time_sync",uVar5);
        if ((puVar7 != NULL) && (*(puVar7 + 3) < 3)) {
            puVar7 = puVar7[4];
            uVar5 = sym.to_mhi_pm_state_str(*(iVar6 + 0x17c));
            ipc_log_string(puVar7,"[E][%s] MHI is not in active state, pm_state:%s\n","mhi_get_remote_time_sync",
                           uVar5);
        }
        pcVar9 = 0xfffffffb;
        arg2 = unaff_x21;
        arg3 = unaff_x22;
    }
    while( true ) {
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iStack_68) break;
        __stack_chk_fail();
code_r0x080154d8:
        __cfi_slowpath_diag(0x9d98c101a4fe7fa9,pcVar9,0x8001260);
code_r0x080151b0:
        (*pcVar9)(iVar6);
        pcVar9 = puVar10[1];
        if (9 < (pcVar9 - unaff_x26 >> 3 | pcVar9 - unaff_x26 << 0x3d)) {
            __cfi_slowpath_diag(0x9d98c101a4fe7fa9,pcVar9,0x8001280);
        }
        uVar4 = (*pcVar9)(iVar6);
        if (uVar4 == 0) {
            iVar1 = sp_el0;
            *(iVar1 + 0x10) = *(iVar1 + 0x10) + 1;
            uVar2 = daif;
            daif = uVar2 | 0xc0;
            iVar3 = sym.mhi_read_reg(iVar6,puVar10[3],0xc,&uStack_70);
            if (iVar3 != 0) {
                iVar12 = *(*(iVar6 + 8) + 0xc0);
                _dev_err(iVar11 + 0x28,"[E][%s] Time HIGH register read error\n","mhi_get_remote_time_sync");
                if ((iVar12 != 0) && (*(iVar12 + 0x18) < 3)) {
                    ipc_log_string(*(iVar12 + 0x20),"[E][%s] Time HIGH register read error\n",
                                   "mhi_get_remote_time_sync");
                }
            }
            iVar3 = sym.mhi_read_reg(iVar6,puVar10[3],8,&uStack_6c);
            if (iVar3 != 0) {
                iVar12 = *(*(iVar6 + 8) + 0xc0);
                _dev_err(iVar11 + 0x28,"[E][%s] Time LOW register read error\n","mhi_get_remote_time_sync");
                if ((iVar12 != 0) && (*(iVar12 + 0x18) < 3)) {
                    ipc_log_string(*(iVar12 + 0x20),"[E][%s] Time LOW register read error\n",
                                   "mhi_get_remote_time_sync");
                }
            }
            uVar4 = sym.mhi_read_reg(iVar6,puVar10[3],0xc,&uStack_70);
            if (uVar4 != 0) {
                iVar12 = *(*(iVar6 + 8) + 0xc0);
                _dev_err(iVar11 + 0x28,"[E][%s] Time HIGH register read error\n","mhi_get_remote_time_sync");
                if ((iVar12 != 0) && (*(iVar12 + 0x18) < 3)) {
                    ipc_log_string(*(iVar12 + 0x20),"[E][%s] Time HIGH register read error\n",
                                   "mhi_get_remote_time_sync");
                }
            }
            *arg3 = CONCAT44(uStack_70,uStack_6c);
            arg3 = *puVar10;
            __cfi_slowpath_diag(0xb2e3bd30d10cd90e,arg3,0x80012a0);
            uVar5 = (*arg3)(iVar6);
            *arg2 = uVar5;
            uVar2 = daif;
            daif = uVar2 & 0xffffffffffffff3f;
            iVar12 = *(iVar1 + 0x10) + -1;
            *(iVar1 + 0x10) = iVar12;
            if ((iVar12 == 0) || (*(iVar1 + 0x10) == 0)) {
                preempt_schedule();
            }
            pcVar9 = puVar10[2];
            if (9 < (pcVar9 - unaff_x26 >> 3 | pcVar9 - unaff_x26 << 0x3d)) {
                __cfi_slowpath_diag(0x9d98c101a4fe7fa9,pcVar9,0x80012c0);
            }
            (*pcVar9)(iVar6);
        }
        arg2 = *(iVar6 + 0x248);
        if (7 < (arg2 + -0x8005c80 >> 3 | arg2 << 0x3d)) {
            __cfi_slowpath_diag(0x95232cda069bc43d,arg2,0x80012e0);
        }
        (*arg2)(iVar6);
        sym.mhi_device_put(*(iVar6 + 8));
code_r0x080152f0:
        pcVar9 = uVar4;
        mutex_unlock(puVar7);
    }
    return pcVar9;
}


// ===== sym.mhi_misc_disable @ 0x08015588 (size 84) =====

void sym.mhi_misc_disable(int64_t arg1)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = *(*(*(arg1 + 8) + 0xc0) + 0x60);
    if ((piVar1 != NULL) && (*piVar1 != 0)) {
        dma_free_attrs(*arg1,piVar1[2],*piVar1,piVar1[1],0);
        *piVar1 = 0;
    }
    return;
}


// ===== sym.mhi_misc_cmd_configure @ 0x080155dc (size 64) =====

void sym.mhi_misc_cmd_configure(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint *in_x4;
    int64_t iVar1;
    
    if ((arg2 == 0x49) && (iVar1 = *(*(*(arg1 + 8) + 0xc0) + 0x60), iVar1 != 0)) {
        *arg3 = *(iVar1 + 8);
        *arg4 = *(iVar1 + 0x10) + -1;
        *in_x4 = 0x490000;
    }
    return;
}


// ===== sym.mhi_misc_cmd_completion @ 0x0801561c (size 68) =====

void sym.mhi_misc_cmd_completion(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg2 == 0x49) && (iVar1 = *(*(*(arg1 + 8) + 0xc0) + 0x60), iVar1 != 0)) {
        *(iVar1 + 0x20) = arg3;
        complete(iVar1 + 0x28);
    }
    return;
}


// ===== sym.mhi_get_remote_time @ 0x08015660 (size 1128) =====

int sym.mhi_get_remote_time(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    ulong uVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    char *pcVar6;
    int64_t iVar7;
    ulong *in_x18;
    int64_t iVar8;
    code *pcVar9;
    ulong uVar10;
    ulong *puVar11;
    ulong *puVar12;
    int64_t iVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(arg1 + 0x10);
    iVar13 = *(iVar8 + 8);
    puVar12 = *(*(iVar13 + 0xc0) + 0x68);
    if ((puVar12 == NULL) || (puVar12[4] == 0)) {
        return -0x16;
    }
    mutex_lock(puVar12 + 0x10);
    iVar2 = sym.mhi_device_get_sync(*(iVar8 + 8));
    if (iVar2 != 0) goto code_r0x0801597c;
    pcVar9 = *(iVar8 + 0x240);
    if (9 < (pcVar9 + -0x8005c30 >> 3 | pcVar9 << 0x3d)) {
        __cfi_slowpath_diag(0x9d98c101a4fe7fa9,pcVar9,0x8001300);
    }
    (*pcVar9)(iVar8);
    iVar7 = *(*(iVar8 + 8) + 0xc0);
    if ((iVar7 != 0) && (*(iVar7 + 0x18) < 2)) {
        uVar10 = *(iVar7 + 0x20);
        uVar3 = sym.to_mhi_pm_state_str(*(iVar8 + 0x17c));
        uVar1 = *(iVar8 + 0x188);
        pcVar6 = "INVALID_STATE";
        if ((uVar1 < 0x100) && (0xf6 < uVar1 - 8)) {
            pcVar6 = *(reloc..str.14.llvm.39275123862783422 + uVar1 * 8);
        }
        ipc_log_string(uVar10,"[I][%s] Enter with pm_state:%s MHI_STATE:%s\n","mhi_get_remote_time",uVar3,pcVar6);
    }
    iVar7 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar7 = 0x30;
    }
    piVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar7),0xb20,0x30);
    if (piVar4 == NULL) {
        iVar2 = -0xc;
code_r0x080157dc:
        pcVar9 = *(iVar8 + 0x248);
        if (7 < (pcVar9 + -0x8005c80 >> 3 | pcVar9 << 0x3d)) {
            __cfi_slowpath_diag(0x95232cda069bc43d,pcVar9,0x80013a0);
        }
        (*pcVar9)(iVar8);
        sym.mhi_device_put(*(iVar8 + 8));
    }
    else {
        *(piVar4 + 2) = arg2;
        piVar4[4] = arg1;
        piVar4[5] = arg3;
        if (*(puVar12 + 8) == '\0') {
            pcVar9 = puVar12[1];
            iVar2 = 0;
            if (*(puVar12 + 5) != -2) {
                iVar2 = *(puVar12 + 5) + 1;
            }
            *(puVar12 + 5) = iVar2;
            if (9 < (pcVar9 + -0x8005c30 >> 3 | pcVar9 << 0x3d)) {
                __cfi_slowpath_diag(0x9d98c101a4fe7fa9,pcVar9,0x8001340);
            }
            iVar2 = (*pcVar9)(iVar8);
            if (iVar2 != 0) {
                iVar7 = *(*(iVar8 + 8) + 0xc0);
                _dev_err(iVar13 + 0x28,"[E][%s] LPM disable request failed for %s!\n","mhi_get_remote_time",
                         *(arg1 + 8));
                if ((iVar7 != 0) && (*(iVar7 + 0x18) < 3)) {
                    ipc_log_string(*(iVar7 + 0x20),"[E][%s] LPM disable request failed for %s!\n",
                                   "mhi_get_remote_time",*(arg1 + 8));
                }
                kfree(piVar4);
                goto code_r0x080157dc;
            }
            iVar7 = sp_el0;
            *(iVar7 + 0x10) = *(iVar7 + 0x10) + 1;
            uVar5 = daif;
            daif = uVar5 | 0xc0;
            pcVar9 = *puVar12;
            __cfi_slowpath_diag(0x60,0xb2e3bd30d10cd90e,pcVar9,0x8001360);
            uVar3 = (*pcVar9)(iVar8);
            puVar12[6] = uVar3;
            sym.mhi_write_reg(iVar8,puVar12[4],0,*(puVar12 + 5));
            DataSynchronizationBarrier(3,2,0);
            uVar5 = daif;
            daif = uVar5 & 0xffffffffffffff3f;
            iVar13 = *(iVar7 + 0x10) + -1;
            *(iVar7 + 0x10) = iVar13;
            if ((iVar13 == 0) || (*(iVar7 + 0x10) == 0)) {
                preempt_schedule();
            }
            pcVar9 = puVar12[2];
            if (9 < (pcVar9 + -0x8005c30 >> 3 | pcVar9 << 0x3d)) {
                __cfi_slowpath_diag(0x9d98c101a4fe7fa9,pcVar9,0x8001380);
            }
            (*pcVar9)(iVar8);
            iVar8 = *(*(iVar8 + 8) + 0xc0);
            if ((iVar8 != 0) && (*(iVar8 + 0x18) == 0)) {
                ipc_log_string(*(iVar8 + 0x20),"[D][%s] time DB request with seq:0x%llx\n","mhi_get_remote_time",
                               *(puVar12 + 5));
            }
            *(puVar12 + 9) = 0;
            *(puVar12 + 8) = 1;
            __init_swait_queue_head(puVar12 + 10,"&x->wait",obj.mhi_register_controller.__key);
        }
        else {
            pcVar9 = *(iVar8 + 0x248);
            if (7 < (pcVar9 + -0x8005c80 >> 3 | pcVar9 << 0x3d)) {
                __cfi_slowpath_diag(0x95232cda069bc43d,pcVar9,0x8001320);
            }
            (*pcVar9)(iVar8);
            sym.mhi_device_put(*(iVar8 + 8));
        }
        _raw_spin_lock(puVar12 + 0xd);
        puVar11 = puVar12[0xf];
        uVar5 = __list_add_valid(piVar4,puVar11,puVar12 + 0xe);
        if ((uVar5 & 1) != 0) {
            puVar12[0xf] = piVar4;
            *piVar4 = puVar12 + 0xe;
            piVar4[1] = puVar11;
            *puVar11 = piVar4;
        }
        _raw_spin_unlock(puVar12 + 0xd);
        iVar2 = 0;
    }
code_r0x0801597c:
    mutex_unlock(puVar12 + 0x10);
    return iVar2;
}


// ===== sym.mhi_force_reset @ 0x08015ae8 (size 208) =====

void sym.mhi_force_reset(int64_t arg1)

{
    uint32_t uVar1;
    ulong uVar2;
    char *pcVar3;
    char *pcVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(*(arg1 + 8) + 0xc0);
    if ((iVar5 != 0) && (*(iVar5 + 0x18) == 0)) {
        uVar6 = *(iVar5 + 0x20);
        uVar2 = sym.to_mhi_pm_state_str(*(arg1 + 0x17c));
        uVar1 = *(arg1 + 0x188);
        pcVar3 = "INVALID_STATE";
        if ((uVar1 < 0x100) && (0xf6 < uVar1 - 8)) {
            pcVar3 = *(reloc..str.14.llvm.39275123862783422 + uVar1 * 8);
        }
        if (*(arg1 + 0x184) < 10) {
            pcVar4 = *(reloc..str.llvm.39275123862783422 + *(arg1 + 0x184) * 8);
        }
        else {
            pcVar4 = "INVALID_EE";
        }
        ipc_log_string(uVar6,"[D][%s] Entered with pm_state:%s dev_state:%s ee:%s\n","mhi_force_reset",uVar2,pcVar3
                       ,pcVar4);
    }
    sym.mhi_report_error(arg1);
    sym.mhi_soc_reset(arg1);
    sym.mhi_rddm_download_status(arg1);
    return;
}


// ===== sym.mhi_get_soc_info @ 0x08015bb8 (size 140) =====

int64_t sym.mhi_get_soc_info(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    uVar5 = 0x224;
    uStack_2c = 0;
    iVar4 = sym.mhi_read_reg(arg1,*(arg1 + 0x18),0x224,&uStack_2c);
    if (iVar4 == 0) {
        *(arg1 + 0xcc) = uStack_2c >> 0x1c;
        *(arg1 + 0xd0) = uStack_2c >> 0x10 & 0xfff;
        *(arg1 + 0xd4) = uStack_2c >> 8 & 0xff;
        *(arg1 + 0xd8) = uStack_2c & 0xff;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return iVar4;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.log_level_show;
    iVar4 = *(*(*(iVar4 + -0x18) + 8) + 0xc0);
    if (iVar4 == 0) {
        iVar4 = -5;
    }
    else {
        uVar1 = *(iVar4 + 0x18);
        if (uVar1 < 5) {
            pcVar6 = *(obj.mhi_log_level_str + uVar1 * 8);
        }
        else {
            pcVar6 = "Mask all";
        }
        iVar3 = scnprintf(uVar5,0x1000,"IPC log level begins from: %s\n",pcVar6);
        iVar4 = iVar3;
    }
    return iVar4;
}


// ===== sym.log_level_show @ 0x08015c44 (size 120) =====

int64_t sym.log_level_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    char *pcVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(*(arg1 + -0x18) + 8) + 0xc0);
    if (iVar4 == 0) {
        iVar4 = -5;
    }
    else {
        uVar1 = *(iVar4 + 0x18);
        if (uVar1 < 5) {
            pcVar3 = *(obj.mhi_log_level_str + uVar1 * 8);
        }
        else {
            pcVar3 = "Mask all";
        }
        iVar2 = scnprintf(arg2,0x1000,"IPC log level begins from: %s\n",pcVar3);
        iVar4 = iVar2;
    }
    return iVar4;
}


// ===== sym.log_level_store @ 0x08015cbc (size 248) =====

int64_t sym.log_level_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    char *pcVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar5;
    int64_t iVar6;
    ulong unaff_x30;
    ulong uStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    pcVar3 = &uStack_3c;
    iVar5 = *(arg1 + -0x18);
    uStack_3c = 0;
    iVar6 = *(*(iVar5 + 8) + 0xc0);
    iVar1 = kstrtouint(arg2,0);
    if (iVar1 < 0) {
        arg3 = -0x16;
    }
    else if (iVar6 == 0) {
        arg3 = -5;
    }
    else {
        *(iVar6 + 0x18) = uStack_3c;
        iVar5 = *(*(iVar5 + 8) + 0xc0);
        if ((iVar5 != 0) && (*(iVar5 + 0x18) < 2)) {
            if (uStack_3c < 5) {
                pcVar4 = *(obj.mhi_log_level_str + uStack_3c * 8);
            }
            else {
                pcVar4 = "Mask all";
            }
            pcVar3 = "log_level_store";
            ipc_log_string(*(iVar5 + 0x20),"[I][%s] IPC log level changed to: %s\n","log_level_store",pcVar4);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.time_show;
    pcStack_68 = sym.time_show;
    iVar5 = sp_el0;
    iStack_78 = *(iVar5 + 0x5e0);
    iVar5 = *(iVar6 + -0x18);
    uStack_88 = 0;
    uStack_80 = 0;
    puStack_70 = &stack0xffffffffffffffd0;
    iVar1 = sym.mhi_get_remote_time_sync(iVar6 + -0x28,&uStack_80,&uStack_88);
    if (iVar1 == 0) {
        pcVar4 = "local: %llu remote: %llu (ticks)\n";
        iVar1 = scnprintf(pcVar3,0x1000,"local: %llu remote: %llu (ticks)\n",uStack_80,uStack_88);
    }
    else {
        iVar5 = *(*(iVar5 + 8) + 0xc0);
        _dev_err(iVar6,"[E][%s] Failed to obtain time, ret:%d\n","time_show",iVar1);
        if ((iVar5 != 0) && (*(iVar5 + 0x18) < 3)) {
            ipc_log_string(*(iVar5 + 0x20),"[E][%s] Failed to obtain time, ret:%d\n","time_show",iVar1);
        }
        pcVar4 = "Request failed or feature unsupported\n";
        iVar1 = scnprintf(pcVar3,0x1000,"Request failed or feature unsupported\n");
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_78) {
        return iVar1;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18_00 = sym.time_async_show;
    iVar6 = *(iVar5 + -0x18);
    uVar2 = prandom_u32();
    if (uVar2 == 0) {
        uVar2 = 1;
    }
    iVar1 = sym.mhi_get_remote_time(iVar5 + -0x28,uVar2,0x8005a68);
    if (iVar1 == 0) {
        iVar1 = scnprintf(pcVar4,0x1000,"Requested time asynchronously with seq:%llx\n",uVar2);
    }
    else {
        iVar6 = *(*(iVar6 + 8) + 0xc0);
        _dev_err(iVar5,"[E][%s] Failed to request time, seq:%llx, ret:%d\n","time_async_show",uVar2,iVar1);
        if ((iVar6 != 0) && (*(iVar6 + 0x18) < 3)) {
            ipc_log_string(*(iVar6 + 0x20),"[E][%s] Failed to request time, seq:%llx, ret:%d\n","time_async_show",
                           uVar2,iVar1);
        }
        iVar1 = scnprintf(pcVar4,0x1000,"Request failed or feature unsupported\n");
    }
    return iVar1;
}


// ===== sym.time_show @ 0x08015db4 (size 264) =====

int64_t sym.time_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    uint32_t uVar2;
    char *pcVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iVar4 = *(arg1 + -0x18);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar1 = sym.mhi_get_remote_time_sync(arg1 + -0x28,&uStack_40,&uStack_48);
    if (iVar1 == 0) {
        pcVar3 = "local: %llu remote: %llu (ticks)\n";
        iVar1 = scnprintf(arg2,0x1000,"local: %llu remote: %llu (ticks)\n",uStack_40,uStack_48);
    }
    else {
        iVar4 = *(*(iVar4 + 8) + 0xc0);
        _dev_err(arg1,"[E][%s] Failed to obtain time, ret:%d\n","time_show",iVar1);
        if ((iVar4 != 0) && (*(iVar4 + 0x18) < 3)) {
            ipc_log_string(*(iVar4 + 0x20),"[E][%s] Failed to obtain time, ret:%d\n","time_show",iVar1);
        }
        pcVar3 = "Request failed or feature unsupported\n";
        iVar1 = scnprintf(arg2,0x1000,"Request failed or feature unsupported\n");
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return iVar1;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.time_async_show;
    iVar5 = *(iVar4 + -0x18);
    uVar2 = prandom_u32();
    if (uVar2 == 0) {
        uVar2 = 1;
    }
    iVar1 = sym.mhi_get_remote_time(iVar4 + -0x28,uVar2,0x8005a68);
    if (iVar1 == 0) {
        iVar1 = scnprintf(pcVar3,0x1000,"Requested time asynchronously with seq:%llx\n",uVar2);
    }
    else {
        iVar5 = *(*(iVar5 + 8) + 0xc0);
        _dev_err(iVar4,"[E][%s] Failed to request time, seq:%llx, ret:%d\n","time_async_show",uVar2,iVar1);
        if ((iVar5 != 0) && (*(iVar5 + 0x18) < 3)) {
            ipc_log_string(*(iVar5 + 0x20),"[E][%s] Failed to request time, seq:%llx, ret:%d\n","time_async_show",
                           uVar2,iVar1);
        }
        iVar1 = scnprintf(pcVar3,0x1000,"Request failed or feature unsupported\n");
    }
    return iVar1;
}


// ===== sym.time_async_show @ 0x08015ebc (size 252) =====

int64_t sym.time_async_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + -0x18);
    uVar1 = prandom_u32();
    if (uVar1 == 0) {
        uVar1 = 1;
    }
    iVar2 = sym.mhi_get_remote_time(arg1 + -0x28,uVar1,0x8005a68);
    if (iVar2 == 0) {
        iVar2 = scnprintf(arg2,0x1000,"Requested time asynchronously with seq:%llx\n",uVar1);
    }
    else {
        iVar3 = *(*(iVar3 + 8) + 0xc0);
        _dev_err(arg1,"[E][%s] Failed to request time, seq:%llx, ret:%d\n","time_async_show",uVar1,iVar2);
        if ((iVar3 != 0) && (*(iVar3 + 0x18) < 3)) {
            ipc_log_string(*(iVar3 + 0x20),"[E][%s] Failed to request time, seq:%llx, ret:%d\n","time_async_show",
                           uVar1,iVar2);
        }
        iVar2 = scnprintf(arg2,0x1000,"Request failed or feature unsupported\n");
    }
    return iVar2;
}


// ===== sym.mhi_time_async_cb @ 0x08015fb8 (size 96) =====

void sym.mhi_time_async_cb(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(*(*(arg1 + 0x10) + 8) + 0xc0);
    if ((iVar1 != 0) && (*(iVar1 + 0x18) < 2)) {
        ipc_log_string(*(iVar1 + 0x20),"[I][%s] Time response: seq:%llx local: %llu remote: %llu (ticks)\n",
                       "mhi_time_async_cb",arg2 & 0xffffffff,arg3,arg4);
    }
    return;
}


// ===== sym.mhi_get_capability_offset @ 0x08016018 (size 256) =====

//WARNING: Control flow encountered bad instruction data

void sym.mhi_get_capability_offset(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *puVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    ulong extraout_d0;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iVar4 = *(iVar4 + 0x5e0);
    uVar2 = sym.mhi_read_reg_field(arg1,*(arg1 + 0x18),0x24,0xffffffff);
    if (uVar2 != 0) goto code_r0x0801606c;
    if (*arg3 < 0x1000) {
        uVar2 = sym.mhi_read_reg_field(arg1,*(arg1 + 0x18),*arg3,0xff000000);
        if (uVar2 != 0) goto code_r0x0801606c;
        if (arg2 == 0) {
            uVar2 = 0;
            goto code_r0x0801606c;
        }
        uVar2 = sym.mhi_read_reg_field(arg1,*(arg1 + 0x18),*arg3,0xfff000);
        if (uVar2 != 0) goto code_r0x0801606c;
        *arg3 = 0;
    }
    uVar2 = 0xfffffffa;
code_r0x0801606c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iVar4) {
        puVar3 = __stack_chk_fail(uVar2);
    //[12] -r-x section size 1 named .plt
        *puVar3 = extraout_d0;
        puVar3[1] = extraout_d0;
    //[13] -r-x section size 1 named .init.plt
    //[14] -r-x section size 1 named .text.ftrace_trampoline
    //[19] -r-- section size 1241 named __ksymtab_strings
    //WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
    }
    return;
}


// ===== sym.init_module @ 0x080165ec (size 92) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __mutex_init(0x8000888,"&mhi_bus.lock",obj.mhi_register_controller.__key);
    _obj.mhi_register_controller.__key = obj.mhi_register_controller.__key;
    _obj.mhi_controller_ida = obj.mhi_register_controller.__key;
    bus_register(obj.mhi_bus_type);
    return;
}


// ===== sym.cleanup_module @ 0x08016648 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bus_unregister(obj.mhi_bus_type);
    return;
}

