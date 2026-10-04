// decompiled from nvme-core by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08005000 (size 2764) =====

//WARNING: Switch with 1 destination removed at 0x0800f3d0

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x890743871a4a53) {
        if (arg1 < -0x341edbb17ad98203) {
            if (arg1 < -0x58966f00c0c3c4d7) {
                if (arg1 < -0x66d421a09845f9f8) {
                    if (arg1 == -0x7d6c7a596492db19) {
                        pcVar2 = sym.nvme_put_ns.cfi_jt;
                    }
                    else if (arg1 == -0x7941e44777a4d961) {
                        pcVar2 = sym.nvme_host_path_error.cfi_jt;
                    }
                    else {
                        if (arg1 != -0x7297755540180e50) goto code_r0x0800f390;
                        pcVar2 = sym.nvme_pr_clear.21529633b7289604a80e82acd8b43a39.cfi_jt;
                    }
                }
                else if (arg1 < -0x5afbc2eec40acb7d) {
                    if (arg1 == -0x66d421a09845f9f8) {
                        if ((pcVar1 + -0x8005d90 >> 3 | pcVar1 << 0x3d) < 0x1a) {
                            return;
                        }
                        goto code_r0x0800f390;
                    }
                    if (arg1 != -0x618f617b6a11953a) goto code_r0x0800f390;
                    pcVar2 = sym.nvme_set_latency_tolerance.21529633b7289604a80e82acd8b43a39.cfi_jt;
                }
                else {
                    if (arg1 == -0x5afbc2eec40acb7d) {
                        pcVar2 = sym.trace_event_raw_event_nvme_setup_cmd.21529633b7289604a80e82acd8b43a39.cfi_jt;
                        goto code_r0x08005a48;
                    }
                    if (arg1 != -0x58f060f51867eb24) goto code_r0x0800f390;
                    pcVar2 = sym.__nvme_submit_sync_cmd.cfi_jt;
                }
            }
            else if (arg1 < -0x4aa26867f22d93bb) {
                if (arg1 == -0x58966f00c0c3c4d7) {
                    pcVar2 = sym.nvme_wait_freeze_timeout.cfi_jt;
                }
                else {
                    if (arg1 == -0x550b9e52359ac614) {
                        pcVar2 = sym.nvme_keep_alive_work.21529633b7289604a80e82acd8b43a39.cfi_jt;
                        goto code_r0x080059ec;
                    }
                    if (arg1 != -0x4dd8a868e2da8fa7) goto code_r0x0800f390;
                    pcVar2 = sym.nvme_keep_alive_end_io.21529633b7289604a80e82acd8b43a39.cfi_jt;
                }
            }
            else if (arg1 < -0x35a4a9cbf3de17a5) {
                if (arg1 != -0x4aa26867f22d93bb) {
                    if (arg1 != -0x3db7f943f28066d7) goto code_r0x0800f390;
                    pcVar2 = sym.nvme_dev_attrs_are_visible.21529633b7289604a80e82acd8b43a39.cfi_jt;
                    goto code_r0x08005aa0;
                }
                pcVar2 = sym.nvme_pr_reserve.21529633b7289604a80e82acd8b43a39.cfi_jt;
            }
            else if (arg1 == -0x35a4a9cbf3de17a5) {
                pcVar2 = sym.nvme_setup_cmd.cfi_jt;
            }
            else {
                if (arg1 != -0x358dd37c2776d4b3) goto code_r0x0800f390;
                pcVar2 = sym.nvme_change_ctrl_state.cfi_jt;
            }
        }
        else if (arg1 < -0x1b07a7b8e9ca9c73) {
            if (arg1 < -0x218c0108fde83420) {
                if (arg1 == -0x341edbb17ad98203) {
                    pcVar2 = sym.nvme_get_features.cfi_jt;
code_r0x08005aa0:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                        return;
                    }
                    goto code_r0x0800f390;
                }
                if (arg1 != -0x2ee0710dce68437c) {
                    if (arg1 != -0x2720a9a88918346c) goto code_r0x0800f390;
                    pcVar2 = sym.perf_trace_nvme_complete_rq.21529633b7289604a80e82acd8b43a39.cfi_jt;
                    goto code_r0x08005a48;
                }
                pcVar2 = sym.delayed_work_timer_fn.cfi_jt;
            }
            else if (arg1 < -0x1ccddbc1b909101c) {
                if (arg1 == -0x218c0108fde83420) {
                    pcVar2 = sym.trace_event_raw_init.cfi_jt;
                }
                else {
                    if (arg1 != -0x1dd70febe8b7915c) goto code_r0x0800f390;
                    pcVar2 = sym.nvme_pr_preempt.21529633b7289604a80e82acd8b43a39.cfi_jt;
                }
            }
            else if (arg1 == -0x1ccddbc1b909101c) {
                pcVar2 = sym.nvme_ctrl_from_file.cfi_jt;
            }
            else {
                if (arg1 != -0x1c7ed234650ea9dd) goto code_r0x0800f390;
                pcVar2 = sym.__traceiter_nvme_sq.cfi_jt;
            }
        }
        else if (arg1 < -0x8dc801903aca538) {
            if (arg1 == -0x1b07a7b8e9ca9c73) {
                pcVar2 = sym.nvme_submit_sync_cmd.cfi_jt;
            }
            else if (arg1 == -0x1333327e8027de15) {
                pcVar2 = sym.__traceiter_nvme_complete_rq.cfi_jt;
            }
            else {
                if (arg1 != -0x10de3120ac56a18b) goto code_r0x0800f390;
                pcVar2 = sym.nvme_cancel_request.cfi_jt;
            }
        }
        else {
            if (-0x323ea04e3ec6a04 < arg1) {
                if (arg1 != -0x323ea04e3ec6a03) {
                    if (arg1 != -0x2ac316d8df914f8) goto code_r0x0800f390;
                    pcVar2 = sym.__typeid__ZTSFvP4krefE_global_addr;
                    goto code_r0x08005a48;
                }
                pcVar2 = sym.nvme_cleanup_cmd.cfi_jt;
                goto code_r0x08005aa0;
            }
            if (arg1 == -0x8dc801903aca538) {
                pcVar2 = sym.nvme_dev_open.21529633b7289604a80e82acd8b43a39.cfi_jt;
                goto code_r0x0800594c;
            }
            if (arg1 != -0x4a7eaea00448ba4) goto code_r0x0800f390;
            pcVar2 = sym.nvme_alloc_request.cfi_jt;
        }
    }
    else if (arg1 < 0x3ec62a7e59c75578) {
        if (arg1 < 0x1e3d0ffe3d0499e9) {
            if (arg1 < 0x2cacc2bd58eed34) {
                if (arg1 == -0x890743871a4a53) {
                    pcVar2 = sym.nvme_ns_chr_ioctl.cfi_jt;
code_r0x08005a48:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                        return;
                    }
                    goto code_r0x0800f390;
                }
                if (arg1 == 0x1c012ca067e0d8e) {
                    pcVar2 = sym.nvme_init_ctrl.cfi_jt;
                }
                else {
                    if (arg1 != 0x2b3a43e29242445) goto code_r0x0800f390;
                    pcVar2 = sym.init_module.cfi_jt;
                }
            }
            else if (arg1 < 0x160c3e25aa7f0ba3) {
                if (arg1 == 0x2cacc2bd58eed34) {
                    pcVar2 = sym.perf_trace_nvme_sq.21529633b7289604a80e82acd8b43a39.cfi_jt;
                    goto code_r0x08005a48;
                }
                if (arg1 != 0x45805ff0dc3597c) goto code_r0x0800f390;
                pcVar2 = sym.nvme_set_queue_count.cfi_jt;
            }
            else if (arg1 == 0x160c3e25aa7f0ba3) {
                pcVar2 = sym.nvme_command_effects.cfi_jt;
            }
            else {
                if (arg1 != 0x1c2b0952efa24c7a) goto code_r0x0800f390;
                pcVar2 = sym.trace_event_reg.cfi_jt;
            }
        }
        else if (arg1 < 0x33199aac1c784c1e) {
            if (arg1 == 0x1e3d0ffe3d0499e9) {
                pcVar2 = sym.nvme_ctrl_loss_tmo_store.21529633b7289604a80e82acd8b43a39.cfi_jt;
code_r0x080059ec:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 6) {
                    return;
                }
                goto code_r0x0800f390;
            }
            if (arg1 == 0x21ef12169e8db80b) {
                pcVar2 = sym.blkdev_compat_ptr_ioctl.cfi_jt;
                goto code_r0x08005aa0;
            }
            if (arg1 != 0x24014373ef427c2d) goto code_r0x0800f390;
            pcVar2 = sym.__traceiter_nvme_setup_cmd.cfi_jt;
        }
        else if (arg1 < 0x39299c2e989f45d4) {
            if (arg1 != 0x33199aac1c784c1e) {
                if ((arg1 == 0x33d2dab7d229586b) && ((pcVar1 + -0x8005e60 >> 3 | pcVar1 << 0x3d) < 0xf)) {
                    return;
                }
                goto code_r0x0800f390;
            }
            pcVar2 = sym.nvme_open.21529633b7289604a80e82acd8b43a39.cfi_jt;
        }
        else {
            if (arg1 != 0x39299c2e989f45d4) {
                if (arg1 != 0x3dd1a39e589289fe) goto code_r0x0800f390;
                pcVar2 = sym.trace_raw_output_nvme_sq.21529633b7289604a80e82acd8b43a39.cfi_jt;
code_r0x0800594c:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 4) {
                    return;
                }
                goto code_r0x0800f390;
            }
            pcVar2 = sym.nvme_fail_nonready_command.cfi_jt;
        }
    }
    else if (arg1 < 0x5b83a3fd302a5421) {
        if (arg1 < 0x483e1eec9148a0b0) {
            if (arg1 == 0x3ec62a7e59c75578) {
                pcVar2 = sym.nvme_getgeo.cfi_jt;
            }
            else if (arg1 == 0x4572bfaac58cbe04) {
                pcVar2 = sym.nvme_complete_async_event.cfi_jt;
            }
            else {
                if (arg1 != 0x458a33e81622b08d) goto code_r0x0800f390;
                pcVar2 = sym.nvme_pr_release.21529633b7289604a80e82acd8b43a39.cfi_jt;
            }
        }
        else if (arg1 < 0x50a2d14af647d7f8) {
            if (arg1 != 0x483e1eec9148a0b0) {
                if (arg1 != 0x4f12288915264865) goto code_r0x0800f390;
                pcVar2 = sym.trace_event_raw_event_nvme_async_event.21529633b7289604a80e82acd8b43a39.cfi_jt;
                goto code_r0x08005a48;
            }
            pcVar2 = sym.nvme_pr_register.21529633b7289604a80e82acd8b43a39.cfi_jt;
        }
        else if (arg1 == 0x50a2d14af647d7f8) {
            pcVar2 = sym.nvme_release.21529633b7289604a80e82acd8b43a39.cfi_jt;
        }
        else {
            if (arg1 != 0x57486d3257e2c4d2) goto code_r0x0800f390;
            pcVar2 = sym.nvme_find_get_ns.cfi_jt;
        }
    }
    else if (arg1 < 0x76182c68fb3000dc) {
        if (arg1 < 0x6ad09b0303836bf1) {
            if (arg1 == 0x5b83a3fd302a5421) {
                pcVar2 = sym.nvme_release_subsystem.21529633b7289604a80e82acd8b43a39.cfi_jt;
                goto code_r0x08005a48;
            }
            if (arg1 != 0x64bafb36429f7524) goto code_r0x0800f390;
            pcVar2 = sym.__nvme_check_ready.cfi_jt;
        }
        else {
            if (arg1 == 0x6ad09b0303836bf1) {
                if ((pcVar1 + -0x8005c28 >> 3 | pcVar1 << 0x3d) < 7) {
                    return;
                }
                goto code_r0x0800f390;
            }
            if (arg1 != 0x6deefed463c110c5) goto code_r0x0800f390;
            pcVar2 = sym.nvme_wait_reset.cfi_jt;
        }
    }
    else if (arg1 < 0x7a76ccdcc9bcded2) {
        if (arg1 == 0x76182c68fb3000dc) {
            pcVar2 = sym.nvme_class_uevent.21529633b7289604a80e82acd8b43a39.cfi_jt;
        }
        else {
            if (arg1 != 0x76ea95ca039c1fa0) goto code_r0x0800f390;
            pcVar2 = sym.__traceiter_nvme_async_event.cfi_jt;
        }
    }
    else if (arg1 == 0x7a76ccdcc9bcded2) {
        pcVar2 = sym.nvme_execute_passthru_rq.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800f390;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x0800f390:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800f3e4);
    (*pcVar1)();
}


// ===== sym.nvme_put_ns.cfi_jt @ 0x08005ad8 (size 8) =====

void sym.nvme_put_ns.cfi_jt(int64_t param_1)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = param_1 + 0x38;
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
        put_disk(*(param_1 + 0x20));
        sym.nvme_put_ns_head(*(param_1 + 0x40));
        put_device(*(*(param_1 + 0x10) + 0x460));
        kfree(param_1);
    }
    else if (iVar2 < 1) {
        refcount_warn_saturate(piVar1,3);
    }
    return;
}


// ===== sym.nvme_execute_passthru_rq.cfi_jt @ 0x08005ae0 (size 8) =====

uint32_t sym.nvme_execute_passthru_rq.cfi_jt(int64_t *param_1)

{
    uint32_t uVar1;
    uint8_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t arg1;
    uint32_t uVar4;
    ulong uVar5;
    uint8_t *puVar6;
    uint32_t uVar7;
    int64_t *piVar8;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar6 = param_1[0x26];
    arg1 = param_1[0x29];
    iVar3 = *(*param_1 + 0x58);
    if (iVar3 == 0) {
        uVar2 = *puVar6;
        uVar7 = 0;
        if (*(arg1 + 0xa18) != 0) {
            uVar7 = *(*(arg1 + 0xa18) + uVar2 * 4);
        }
        uVar4 = 0x30002;
        if (uVar2 != 0x84) {
            uVar4 = 0;
        }
        uVar1 = 0x30006;
        if (uVar2 != 0x80) {
            uVar1 = uVar4;
        }
        uVar7 = uVar7 | uVar1;
        if ((uVar7 & 0x30000) != 0) {
            mutex_lock(arg1 + 0x10);
            mutex_lock(*(arg1 + 0x568) + 0x3b0);
            iVar3 = arg1 + 0x90;
            down_read(iVar3);
            piVar8 = arg1 + 0x80;
            for (piVar9 = *piVar8; piVar9 != piVar8; piVar9 = *piVar9) {
                blk_freeze_queue_start(piVar9[3]);
            }
            up_read(iVar3);
            down_read(iVar3);
            for (piVar9 = *piVar8; piVar9 != piVar8; piVar9 = *piVar9) {
                blk_mq_freeze_queue_wait(piVar9[3]);
            }
            up_read(iVar3);
        }
        uVar5 = 0;
    }
    else {
        uVar5 = *(iVar3 + 0x20);
        iVar3 = *(*(iVar3 + 0x40) + 800);
        if (((iVar3 != 0) && (3 < *(iVar3 + *puVar6 * 4 + 0x400))) && ((obj.nvme_command_effects.__print_once & 1) == 0)
           ) {
            obj.nvme_command_effects.__print_once = 0x1;
            _dev_warn(*(arg1 + 0x460),"IO command:%02x has unhandled effects:%08x\n");
        }
        uVar7 = 0;
    }
    blk_execute_rq(uVar5,param_1,0);
    if ((*(param_1 + 0x142) & 1) == 0) {
        uVar4 = *(param_1 + 0x144);
        if (*(param_1 + 0x144) == 0) {
            uVar4 = blk_status_to_errno();
        }
    }
    else {
        uVar4 = 0xfffffffc;
    }
    if (uVar7 != 0) {
        if ((uVar7 & 0x30000) != 0) {
            down_read(arg1 + 0x90);
            for (piVar9 = *(arg1 + 0x80); piVar9 != arg1 + 0x80; piVar9 = *piVar9) {
                blk_mq_unfreeze_queue(piVar9[3]);
            }
            up_read(arg1 + 0x90);
            mutex_unlock(*(arg1 + 0x568) + 0x3b0);
            sym.nvme_remove_invalid_namespaces(arg1,0xffffffff);
            mutex_unlock(arg1 + 0x10);
        }
        if ((uVar7 >> 4 & 1) != 0) {
            sym.nvme_init_ctrl_finish(arg1);
        }
        if ((uVar7 & 0xc) != 0) {
            if ((*(arg1 + 4) == 1) && (*(arg1 + 0x70) != 0)) {
                queue_work_on(0x20,_segment.ehdr,arg1 + 0xa30);
            }
            flush_work(arg1 + 0xa30);
        }
        if (((*puVar6 == 9) && (uVar4 == 0)) && (puVar6[0x28] == 0xf)) {
            uVar7 = *(puVar6 + 0x2c) + 999;
            _dev_info(*(arg1 + 0x460),"keep alive interval updated from %u ms to %u ms\n",*(arg1 + 0x604) * 1000 >> 1
                      ,(uVar7 / 1000) * 1000 >> 1);
            if (*(arg1 + 0x604) != 0) {
                cancel_delayed_work_sync(arg1 + 0xa90);
            }
            *(arg1 + 0x604) = uVar7 / 1000;
            if (999 < uVar7) {
                queue_delayed_work_on(0x20,_segment.ehdr,arg1 + 0xa90,(uVar7 / 1000) * 0xfa >> 1);
            }
        }
    }
    return uVar4;
}


// ===== sym.__traceiter_nvme_async_event.cfi_jt @ 0x08005ae8 (size 8) =====

ulong sym.__traceiter_nvme_async_event.cfi_jt(ulong param_1,ulong param_2,uint param_3)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x80112b0;
    piVar1 = *0x80112b0;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__nvme_submit_sync_cmd.cfi_jt @ 0x08005af0 (size 8) =====

uint64_t sym.__nvme_submit_sync_cmd.cfi_jt
                   (ulong param_1,uint8_t *param_2,int64_t *param_3,int64_t param_4,int param_5,int param_6,
                   int param_7,int param_8,uint param_9)

{
    int iVar1;
    code *pcVar2;
    ulong uVar3;
    ulong uVar4;
    ulong uVar5;
    ulong uVar6;
    ulong uVar7;
    uint32_t uVar8;
    int64_t *piVar9;
    uint8_t uVar10;
    uint uVar11;
    ulong *puVar12;
    ulong *in_x18;
    uint64_t uVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar10 = *param_2;
    if (param_7 == -1) {
        if (uVar10 == 0x7f) {
            uVar10 = param_2[4];
        }
        uVar11 = 0x22;
        if ((uVar10 & 1) != 0) {
            uVar11 = 0x23;
        }
        piVar9 = blk_mq_alloc_request(param_1,uVar11,param_9);
    }
    else {
        if (uVar10 == 0x7f) {
            uVar10 = param_2[4];
        }
        uVar11 = 0x22;
        if ((uVar10 & 1) != 0) {
            uVar11 = 0x23;
        }
        iVar1 = 0;
        if (param_7 != 0) {
            iVar1 = param_7 + -1;
        }
        piVar9 = blk_mq_alloc_request_hctx(param_1,uVar11,param_9,iVar1);
    }
    if (piVar9 < 0xfffffffffffff001) {
        pcVar2 = obj.admin_timeout;
        if (*(*piVar9 + 0x58) != 0) {
            pcVar2 = obj.nvme_io_timeout;
        }
        *(piVar9 + 0xec) = *pcVar2 * 0xfa;
        param_2[1] = param_2[1] & 0x3f;
        uVar8 = *(piVar9 + 3);
        *(piVar9 + 3) = uVar8 | 0x400;
        if (*(piVar9[2] + 300) == 2) {
            *(piVar9 + 3) = uVar8 | 0x1000400;
        }
        *(piVar9 + 0x144) = 0;
        *(piVar9 + 0x141) = 0;
        puVar12 = piVar9[0x26];
        *(piVar9 + 0x1c) = *(piVar9 + 0x1c) | 0x80;
        uVar4 = *(param_2 + 0x18);
        uVar3 = *param_2;
        uVar5 = *(param_2 + 8);
        puVar12[2] = *(param_2 + 0x10);
        puVar12[3] = uVar4;
        puVar12[1] = uVar5;
        uVar4 = *(param_2 + 0x30);
        uVar6 = *(param_2 + 0x38);
        uVar5 = *(param_2 + 0x20);
        uVar7 = *(param_2 + 0x28);
        *puVar12 = uVar3;
        puVar12[6] = uVar4;
        puVar12[7] = uVar6;
        puVar12[4] = uVar5;
        puVar12[5] = uVar7;
    }
    if (0xfffffffffffff000 < piVar9) {
        return piVar9 & 0xffffffff;
    }
    if (param_6 != 0) {
        *(piVar9 + 0xec) = param_6;
    }
    if ((param_4 != 0) && (param_5 != 0)) {
        uVar8 = blk_rq_map_kern(param_1,piVar9,param_4,param_5,0xcc0);
        uVar13 = uVar8;
        if (uVar8 != 0) goto code_r0x080081d0;
    }
    blk_execute_rq(0,piVar9,param_8 != 0);
    if ((*(piVar9 + 0x142) & 1) == 0) {
        uVar13 = *(piVar9 + 0x144);
        if (*(piVar9 + 0x144) == 0) {
            uVar13 = blk_status_to_errno();
            uVar13 = uVar13 & 0xffffffff;
        }
        if ((param_3 != NULL) && (-1 < uVar13)) {
            *param_3 = piVar9[0x27];
        }
    }
    else {
        uVar13 = 0xfffffffc;
    }
code_r0x080081d0:
    blk_mq_free_request(piVar9);
    return uVar13;
}


// ===== sym.nvme_getgeo.cfi_jt @ 0x08005af8 (size 8) =====

ulong sym.nvme_getgeo.cfi_jt(int64_t param_1,ushort *param_2)

{
    *param_2 = 0x2040;
    param_2[1] = *(*(*(*(param_1 + 0x3f0) + 0x40) + 0x28) + 0x50) >> 0x14;
    return 0;
}


// ===== sym.nvme_alloc_request.cfi_jt @ 0x08005b00 (size 8) =====

void sym.nvme_alloc_request.cfi_jt(ulong param_1,uint8_t *param_2)

{
    code *pcVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    ulong uVar5;
    ulong uVar6;
    uint32_t uVar7;
    uint8_t uVar8;
    int64_t *piVar9;
    uint uVar10;
    ulong *puVar11;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar8 = *param_2;
    if (uVar8 == 0x7f) {
        uVar8 = param_2[4];
    }
    uVar10 = 0x22;
    if ((uVar8 & 1) != 0) {
        uVar10 = 0x23;
    }
    piVar9 = blk_mq_alloc_request(param_1,uVar10);
    if (piVar9 < 0xfffffffffffff001) {
        pcVar1 = obj.admin_timeout;
        if (*(*piVar9 + 0x58) != 0) {
            pcVar1 = obj.nvme_io_timeout;
        }
        *(piVar9 + 0xec) = *pcVar1 * 0xfa;
        param_2[1] = param_2[1] & 0x3f;
        uVar7 = *(piVar9 + 3);
        *(piVar9 + 3) = uVar7 | 0x400;
        if (*(piVar9[2] + 300) == 2) {
            *(piVar9 + 3) = uVar7 | 0x1000400;
        }
        *(piVar9 + 0x144) = 0;
        *(piVar9 + 0x141) = 0;
        puVar11 = piVar9[0x26];
        *(piVar9 + 0x1c) = *(piVar9 + 0x1c) | 0x80;
        uVar3 = *(param_2 + 0x18);
        uVar2 = *param_2;
        uVar4 = *(param_2 + 8);
        puVar11[2] = *(param_2 + 0x10);
        puVar11[3] = uVar3;
        puVar11[1] = uVar4;
        uVar3 = *(param_2 + 0x30);
        uVar5 = *(param_2 + 0x38);
        uVar4 = *(param_2 + 0x20);
        uVar6 = *(param_2 + 0x28);
        *puVar11 = uVar2;
        puVar11[6] = uVar3;
        puVar11[7] = uVar5;
        puVar11[4] = uVar4;
        puVar11[5] = uVar6;
    }
    return;
}


// ===== sym.__nvme_check_ready.cfi_jt @ 0x08005b08 (size 8) =====

uint32_t sym.__nvme_check_ready.cfi_jt(int64_t param_1,int64_t *param_2,uint32_t param_3)

{
    if ((*param_2 != *(param_1 + 0x48)) || ((*(param_2 + 0x142) >> 1 & 1) == 0)) {
        if ((*(*(param_1 + 0x40) + 0x10) & 1) == 0) goto code_r0x080079d8;
        if (*(param_1 + 4) != 6) {
            if ((((*(param_1 + 4) == 3) && ((*(param_2 + 3) & 0xfe) == 0x22)) && (*param_2[0x26] == '\x7f')) &&
               (param_2[0x26][4] == '\x01')) {
                param_3 = 1;
            }
            goto code_r0x080079d8;
        }
    }
    param_3 = 0;
code_r0x080079d8:
    return param_3 & 1;
}


// ===== sym.nvme_pr_register.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005b10 (size 8) =====

void sym.nvme_pr_register.21529633b7289604a80e82acd8b43a39.cfi_jt
               (int64_t param_1,int64_t param_2,ulong param_3,uint32_t param_4)

{
    int iVar1;
    ulong uVar2;
    ulong uVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    code *pcVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    int64_t aiStack_228 [2];
    uint uStack_218;
    uint uStack_214;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
    uint64_t uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    int64_t iStack_1d8;
    ulong **ppuStack_1d0;
    code *pcStack_1c8;
    uint uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    uint uStack_1a8;
    uint uStack_1a4;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    uint64_t uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    int64_t iStack_168;
    ulong **ppuStack_160;
    code *pcStack_158;
    uint uStack_150;
    int64_t aiStack_148 [2];
    uint uStack_138;
    uint uStack_134;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    uint64_t uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    uchar **ppuStack_f0;
    code *pcStack_e8;
    uint uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    uint uStack_c8;
    uint uStack_c4;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    uint64_t uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uint uStack_70;
    int64_t iStack_68;
    ulong uStack_60;
    uint uStack_58;
    uint uStack_54;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    uint64_t uStack_30;
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_18 = *(iVar6 + 0x5e0);
    if (param_4 < 2) {
        iVar6 = *(*(param_1 + 0x3f0) + 0x58);
        uVar8 = 0xc0000000;
        if (param_2 != 0) {
            uVar8 = 0xc0000002;
        }
        piVar4 = &iStack_68;
        uVar3 = 0;
        uStack_28 = 0;
        uStack_20 = 0;
        uStack_38 = 0;
        uStack_48 = 0;
        uStack_40 = 0;
        uStack_50 = 0;
        uStack_30 = uVar8 & 0xfffffff0 | uVar8 & 7 | (param_4 & 1) << 3;
        _uStack_58 = CONCAT44(*(*(iVar6 + 0x40) + 0x2d0),0xd);
        uStack_70 = 0;
        iStack_68 = param_2;
        uStack_60 = param_3;
        uVar2 = sym.__nvme_submit_sync_cmd(*(iVar6 + 0x18),&uStack_58,0,piVar4);
        param_4 = piVar4;
        param_3 = uVar3;
    }
    else {
        uVar2 = 0xffffffa1;
    }
    iVar1 = param_3;
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_18) {
        return;
    }
    auVar10 = __stack_chk_fail(uVar2);
    *extraout_x18 = sym.nvme_pr_reserve;
    pcStack_78 = sym.nvme_pr_reserve;
    iVar6 = sp_el0;
    iStack_88 = *(iVar6 + 0x5e0);
    puStack_80 = &stack0xfffffffffffffff0;
    if (param_4 < 2) {
        uVar8 = (iVar1 - 1U) * 0x100 + 0x100;
        iVar6 = *(*(auVar10._0_8_ + 0x3f0) + 0x58);
        if (5 < iVar1 - 1U) {
            uVar8 = 0;
        }
        uStack_d0 = 0;
        iVar1 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_a8 = 0;
        uStack_b8 = 0;
        uStack_b0 = 0;
        uStack_c0 = 0;
        uStack_a0 = uVar8 | (param_4 & 1) << 3;
        _uStack_c8 = CONCAT44(*(*(iVar6 + 0x40) + 0x2d0),0x11);
        uStack_e0 = 0;
        uStack_d8 = auVar10._8_8_;
        uVar2 = sym.__nvme_submit_sync_cmd(*(iVar6 + 0x18),&uStack_c8,0,&uStack_d8);
    }
    else {
        uVar2 = 0xffffffa1;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_88) {
        return;
    }
    auVar10 = __stack_chk_fail(uVar2);
    aiStack_148[0] = auVar10._8_8_;
    *extraout_x18_00 = sym.nvme_pr_release;
    pcStack_e8 = sym.nvme_pr_release;
    iVar6 = sp_el0;
    iStack_f8 = *(iVar6 + 0x5e0);
    piVar4 = aiStack_148;
    uVar5 = 0;
    uVar8 = (iVar1 - 1U) * 0x100 + 0x100;
    if (5 < iVar1 - 1U) {
        uVar8 = 0;
    }
    aiStack_148[1] = 0;
    iVar6 = *(*(auVar10._0_8_ + 0x3f0) + 0x58);
    uVar2 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_130 = 0;
    uStack_110 = uVar8 | (aiStack_148[0] == 0) << 3;
    _uStack_138 = CONCAT44(*(*(iVar6 + 0x40) + 0x2d0),0x15);
    uStack_150 = 0;
    ppuStack_f0 = &puStack_80;
    sym.__nvme_submit_sync_cmd(*(iVar6 + 0x18),&uStack_138,0,piVar4);
    iVar1 = piVar4;
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_f8) {
        return;
    }
    auVar10 = __stack_chk_fail();
    uStack_1b8 = auVar10._8_8_;
    *extraout_x18_01 = sym.nvme_pr_preempt;
    pcStack_158 = sym.nvme_pr_preempt;
    iVar6 = sp_el0;
    iStack_168 = *(iVar6 + 0x5e0);
    uVar8 = (iVar1 - 1U) * 0x100 + 0x100;
    if (5 < iVar1 - 1U) {
        uVar8 = 0;
    }
    uVar7 = 1;
    if ((uVar5 & 1) != 0) {
        uVar7 = 2;
    }
    iVar6 = *(*(auVar10._0_8_ + 0x3f0) + 0x58);
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_1a0 = 0;
    uStack_180 = uVar8 | uVar7;
    _uStack_1a8 = CONCAT44(*(*(iVar6 + 0x40) + 0x2d0),0x11);
    uStack_1c0 = 0;
    uStack_1b0 = uVar2;
    ppuStack_160 = &ppuStack_f0;
    sym.__nvme_submit_sync_cmd(*(iVar6 + 0x18),&uStack_1a8,0,&uStack_1b8);
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_168) {
        return;
    }
    auVar10 = __stack_chk_fail();
    aiStack_228[0] = auVar10._8_8_;
    *extraout_x18_02 = sym.nvme_pr_clear;
    pcStack_1c8 = sym.nvme_pr_clear;
    iVar6 = sp_el0;
    iStack_1d8 = *(iVar6 + 0x5e0);
    uVar8 = 9;
    if (aiStack_228[0] != 0) {
        uVar8 = 1;
    }
    uStack_210 = 0;
    aiStack_228[1] = 0;
    iVar6 = *(*(auVar10._0_8_ + 0x3f0) + 0x58);
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1f8 = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_1f0 = uVar8;
    _uStack_218 = CONCAT44(*(*(iVar6 + 0x40) + 0x2d0),0x15);
    ppuStack_1d0 = &ppuStack_160;
    sym.__nvme_submit_sync_cmd(*(iVar6 + 0x18),&uStack_218,0,aiStack_228);
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_1d8) {
        return;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18_03 = sym.nvme_disable_ctrl;
    *(iVar6 + 0x598) = *(iVar6 + 0x598) & 0xffff3ffe;
    pcVar9 = *(*(iVar6 + 0x40) + 0x20);
    __cfi_slowpath_diag(0x5fd0dd7266111d21,pcVar9,0x8002710);
    iVar1 = (*pcVar9)(iVar6,0x14,*(iVar6 + 0x598));
    if (iVar1 == 0) {
        if ((*(iVar6 + 0x610) >> 3 & 1) != 0) {
            msleep(0x8fc);
        }
        sym.nvme_wait_ready(iVar6,*(iVar6 + 0x5a8),0);
    }
    return;
}


// ===== sym.nvme_wait_reset.cfi_jt @ 0x08005b18 (size 8) =====

bool sym.nvme_wait_reset.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    code *pcVar4;
    bool bVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint32_t uVar8;
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
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    uVar6 = sym.nvme_change_ctrl_state(param_1,2);
    if ((uVar6 & 1) == 0) {
        if (*(param_1 + 4) < 4) {
            uStack_38 = 0;
            uStack_30 = 0;
            uStack_48 = 0;
            uStack_40 = 0;
            uStack_50 = 0;
            init_wait_entry(&uStack_50,0);
            while( true ) {
                prepare_to_wait_event(param_1 + 0x550,&uStack_50,2);
                uVar6 = sym.nvme_change_ctrl_state(param_1,2);
                if ((uVar6 & 1) != 0) break;
                if (3 < *(param_1 + 4)) {
                    if ((2 < *(param_1 + 4) - 4) && ((obj.nvme_state_terminal.__already_done & 1) == 0)) {
                        obj.nvme_state_terminal.__already_done = 0x1;
                        __warn_printk("Unhandled ctrl state:%d");
    //WARNING: Does not return
                        pcVar4 = SoftwareBreakpoint(0x800,0x8007500);
                        (*pcVar4)();
                    }
                    break;
                }
                schedule();
            }
            finish_wait(param_1 + 0x550,&uStack_50);
        }
        else if ((2 < *(param_1 + 4) - 4) && ((obj.nvme_state_terminal.__already_done & 1) == 0)) {
            obj.nvme_state_terminal.__already_done = 0x1;
            __warn_printk("Unhandled ctrl state:%d");
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x800,0x800748c);
            (*pcVar4)();
        }
    }
    iVar7 = sp_el0;
    bVar5 = *(param_1 + 4) == 2;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return bVar5;
    }
    iVar7 = __stack_chk_fail(bVar5);
    *extraout_x18 = sym.nvme_tryget_ns_head;
    puVar1 = iVar7 + 0x310;
    uVar6 = *puVar1;
    if (uVar6 == 0) {
        uVar8 = 0;
    }
    else {
        do {
            uVar8 = uVar6;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar6 = uVar2;
                if (uVar2 != uVar8) break;
                cVar3 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar8 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
        } while ((uVar8 != uVar2) && (uVar8 = 0, uVar2 != 0));
    }
    if ((uVar8 + 1 | uVar8) < 0) {
        refcount_warn_saturate(puVar1,0);
    }
    return uVar8 != 0;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08005b20 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    class_destroy(CONCAT44(*0x8000004,_segment.ehdr));
    class_destroy(CONCAT44(*0x8000004,_segment.ehdr));
    class_destroy(CONCAT44(*0x8000004,_segment.ehdr));
    unregister_chrdev_region(_segment.ehdr,0x100000);
    unregister_chrdev_region(_segment.ehdr,0x100000);
    destroy_workqueue(CONCAT44(*0x8000004,_segment.ehdr));
    destroy_workqueue(CONCAT44(*0x8000004,_segment.ehdr));
    destroy_workqueue(CONCAT44(*0x8000004,_segment.ehdr));
    ida_destroy(obj.nvme_ns_chr_minor_ida);
    ida_destroy(obj.nvme_instance_ida);
    return;
}


// ===== sym.nvme_set_latency_tolerance.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005b28 (size 8) =====

void sym.nvme_set_latency_tolerance.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1,uint32_t param_2)

{
    int64_t iVar1;
    int64_t arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x98);
    iVar1 = -1;
    if ((param_2 | 0x80000000) != 0xffffffff) {
        iVar1 = param_2;
    }
    if ((*(arg1 + 0xc18) != iVar1) && (*(arg1 + 0xc18) = iVar1, *(arg1 + 4) == 1)) {
        sym.nvme_configure_apst(arg1);
    }
    return;
}


// ===== sym.nvme_get_features.cfi_jt @ 0x08005b30 (size 8) =====

uint64_t sym.nvme_get_features.cfi_jt
                   (int64_t param_1,uint param_2,uint param_3,int64_t param_4,ulong param_5,uint *param_6)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int *piVar4;
    int iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar6 [16];
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    uint uStack_c0;
    uint32_t uStack_bc;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    uint uStack_40;
    uint uStack_3c;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_48 = 0;
    _uStack_40 = CONCAT44(param_3,param_2);
    uStack_70 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    uStack_68 = 10;
    uVar3 = sym.__nvme_submit_sync_cmd(*(param_1 + 0x48),&uStack_68,&uStack_70,param_4);
    if ((param_6 != NULL) && (-1 < uVar3)) {
        *param_6 = uStack_70;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    auVar6 = __stack_chk_fail();
    piVar4 = auVar6._8_8_;
    *extraout_x18 = sym.nvme_set_queue_count;
    pcStack_98 = sym.nvme_set_queue_count;
    iVar1 = sp_el0;
    iStack_a8 = *(iVar1 + 0x5e0);
    uStack_f0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e0 = 0;
    uStack_e8 = 9;
    _uStack_c0 = CONCAT44(*piVar4 - 1U | (*piVar4 - 1U) * 0x10000,7);
    puStack_a0 = &stack0xffffffffffffffe0;
    uVar2 = sym.__nvme_submit_sync_cmd(*(auVar6._0_8_ + 0x48),&uStack_e8,&uStack_f0,0);
    uVar3 = uVar2;
    if (-1 < uVar2) {
        if (uVar2 == 0) {
            iVar5 = *piVar4;
            uVar2 = uStack_f0 & 0xffff;
            if (uStack_f0 >> 0x10 <= (uStack_f0 & 0xffff)) {
                uVar2 = uStack_f0 >> 0x10;
            }
            if (uVar2 + 1 <= iVar5) {
                iVar5 = uVar2 + 1;
            }
        }
        else {
            _dev_err(*(auVar6._0_8_ + 0x460),"Could not set queue count (%d)\n");
            iVar5 = 0;
        }
        uVar3 = 0;
        *piVar4 = iVar5;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_a8) {
        auVar6 = __stack_chk_fail();
        *auVar6._8_8_ = 0x2040;
        auVar6._8_8_[1] = *(*(*(*(auVar6._0_8_ + 0x3f0) + 0x40) + 0x28) + 0x50) >> 0x14;
        return 0;
    }
    return uVar3;
}


// ===== sym.nvme_set_features.cfi_jt @ 0x08005b38 (size 8) =====

uint64_t sym.nvme_set_features.cfi_jt
                   (int64_t param_1,uint param_2,uint param_3,int64_t param_4,ulong param_5,uint *param_6)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int *piVar4;
    uint uVar5;
    uint *puVar6;
    int iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong unaff_x30;
    uchar auVar8 [12];
    uchar auVar9 [16];
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    uint uStack_140;
    uint32_t uStack_13c;
    ulong uStack_138;
    ulong uStack_130;
    int64_t iStack_128;
    uchar **ppuStack_120;
    code *pcStack_118;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    uint uStack_c0;
    uint uStack_bc;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    uint *puStack_90;
    uint uStack_80;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    uint uStack_40;
    uint uStack_3c;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    ulong *arg3;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    puVar6 = NULL;
    uStack_48 = 0;
    _uStack_40 = CONCAT44(param_3,param_2);
    arg3 = &uStack_70;
    uStack_70 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    uStack_68 = 9;
    uStack_80 = 0;
    uVar3 = sym.__nvme_submit_sync_cmd(*(param_1 + 0x48),&uStack_68,arg3,param_4);
    uVar5 = SUB84(arg3,0);
    if ((param_6 != NULL) && (-1 < uVar3)) {
        *param_6 = uStack_70;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    auVar8 = __stack_chk_fail();
    *extraout_x18 = sym.nvme_get_features;
    pcStack_98 = sym.nvme_get_features;
    iVar1 = sp_el0;
    iStack_a8 = *(iVar1 + 0x5e0);
    uStack_c8 = 0;
    _uStack_c0 = CONCAT44(uVar5,auVar8._8_4_);
    uStack_f0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e0 = 0;
    uStack_e8 = 10;
    puStack_a0 = &stack0xffffffffffffffe0;
    puStack_90 = param_6;
    uVar3 = sym.__nvme_submit_sync_cmd(*(auVar8._0_8_ + 0x48),&uStack_e8,&uStack_f0,param_4);
    if ((puVar6 != NULL) && (-1 < uVar3)) {
        *puVar6 = uStack_f0;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_a8) {
        auVar9 = __stack_chk_fail();
        piVar4 = auVar9._8_8_;
        *extraout_x18_00 = sym.nvme_set_queue_count;
        pcStack_118 = sym.nvme_set_queue_count;
        iVar1 = sp_el0;
        iStack_128 = *(iVar1 + 0x5e0);
        uStack_170 = 0;
        uStack_138 = 0;
        uStack_130 = 0;
        uStack_148 = 0;
        uStack_158 = 0;
        uStack_150 = 0;
        uStack_160 = 0;
        uStack_168 = 9;
        _uStack_140 = CONCAT44(*piVar4 - 1U | (*piVar4 - 1U) * 0x10000,7);
        ppuStack_120 = &puStack_a0;
        uVar2 = sym.__nvme_submit_sync_cmd(*(auVar9._0_8_ + 0x48),&uStack_168,&uStack_170,0);
        uVar3 = uVar2;
        if (-1 < uVar2) {
            if (uVar2 == 0) {
                iVar7 = *piVar4;
                uVar2 = uStack_170 & 0xffff;
                if (uStack_170 >> 0x10 <= (uStack_170 & 0xffff)) {
                    uVar2 = uStack_170 >> 0x10;
                }
                if (uVar2 + 1 <= iVar7) {
                    iVar7 = uVar2 + 1;
                }
            }
            else {
                _dev_err(*(auVar9._0_8_ + 0x460),"Could not set queue count (%d)\n");
                iVar7 = 0;
            }
            uVar3 = 0;
            *piVar4 = iVar7;
        }
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) != iStack_128) {
            auVar9 = __stack_chk_fail();
            *auVar9._8_8_ = 0x2040;
            auVar9._8_8_[1] = *(*(*(*(auVar9._0_8_ + 0x3f0) + 0x40) + 0x28) + 0x50) >> 0x14;
            return 0;
        }
        return uVar3;
    }
    return uVar3;
}


// ===== sym.nvme_wait_freeze_timeout.cfi_jt @ 0x08005b40 (size 8) =====

uint64_t sym.nvme_wait_freeze_timeout.cfi_jt(int64_t param_1,uint64_t param_2)

{
    int iVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    down_read(param_1 + 0x90);
    for (piVar2 = *(param_1 + 0x80); piVar2 != param_1 + 0x80; piVar2 = *piVar2) {
        iVar1 = blk_mq_freeze_queue_wait_timeout(piVar2[3],param_2);
        param_2 = iVar1;
        if (iVar1 < 1) break;
    }
    up_read(param_1 + 0x90);
    return param_2 & 0xffffffff;
}


// ===== sym.__traceiter_nvme_sq.cfi_jt @ 0x08005b48 (size 8) =====

ulong sym.__traceiter_nvme_sq.cfi_jt(ulong param_1,ulong param_2,uint param_3,uint param_4)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x80112f8;
    piVar1 = *0x80112f8;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.trace_event_reg.cfi_jt @ 0x08005b50 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_reg.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.trace_event_raw_event_nvme_setup_cmd.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005b58 (size 8) =====

//WARNING: Removing unreachable block (ram,0x0800686c)
//WARNING: Removing unreachable block (ram,0x080062e0)
//WARNING: Removing unreachable block (ram,0x080065e0)
//WARNING: Removing unreachable block (ram,0x08006ab8)

void sym.trace_event_raw_event_nvme_setup_cmd.21529633b7289604a80e82acd8b43a39.cfi_jt
               (int64_t param_1,int64_t *param_2,uint32_t *param_3,ushort param_4)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong in_tmp_ldXn;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t *piVar5;
    int64_t *piVar6;
    ushort uVar7;
    ushort uVar8;
    uint32_t *puVar10;
    uint32_t *puVar11;
    ushort uVar12;
    int64_t iVar13;
    ulong uVar14;
    int64_t iVar15;
    ulong uVar16;
    ulong uVar17;
    ulong uVar18;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    uint32_t uVar19;
    ulong unaff_x30;
    uchar auVar20 [16];
    uchar auVar21 [16];
    uchar auVar22 [16];
    uchar auStack_340 [12];
    uint uStack_334;
    int64_t iStack_330;
    int64_t iStack_328;
    ulong **ppuStack_320;
    code *pcStack_318;
    ulong uStack_2d8;
    ulong uStack_2d0;
    ulong uStack_2c8;
    ulong uStack_2c0;
    ulong uStack_2b8;
    ulong uStack_2b0;
    int64_t iStack_2a8;
    ulong **ppuStack_2a0;
    ulong uStack_298;
    code *pcStack_290;
    int64_t iStack_280;
    int64_t *piStack_278;
    uint64_t uStack_270;
    int64_t iStack_268;
    uchar auStack_260 [12];
    uint uStack_254;
    int64_t iStack_250;
    int64_t iStack_248;
    ulong **ppuStack_240;
    code *pcStack_238;
    code *pcStack_230;
    ulong uStack_220;
    uchar auStack_218 [16];
    uint64_t uStack_208;
    ulong uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    int64_t iStack_1c8;
    ulong **ppuStack_1c0;
    ulong uStack_1b8;
    code *pcStack_1b0;
    int64_t *piStack_1a8;
    int64_t *piStack_1a0;
    int64_t iStack_198;
    uchar auStack_190 [12];
    uint32_t uStack_184;
    int64_t iStack_180;
    int64_t iStack_178;
    ulong **ppuStack_170;
    code *pcStack_168;
    int64_t *piStack_160;
    ulong uStack_158;
    uchar auStack_150 [16];
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
    uint32_t *puStack_e0;
    int64_t iStack_d8;
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
    uint uVar9;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar19 = *(param_1 + 0x48);
    if ((uVar19 >> 8 & 1) == 0) {
        puVar10 = param_3;
        if ((uVar19 >> 7 & 1) != 0) {
            puVar10 = NULL;
            param_4 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar19 >> 6 & 1) == 0) &&
           (((uVar19 >> 9 & 1) == 0 || (uVar3 = trace_event_ignore_this_pid(param_1), (uVar3 & 1) == 0))))
        goto code_r0x08006144;
    }
    else {
code_r0x08006144:
        puVar10 = 0x58;
        iVar4 = trace_event_buffer_reserve(&uStack_68,param_1);
        if (iVar4 != 0) {
            *(iVar4 + 0x28) = *(param_2[0x29] + 0x68);
            uVar19 = 0;
            if (*(*param_2 + 0x58) != 0) {
                uVar19 = *(param_2[2] + 0x1cc) + 1U & 0xffff;
            }
            *(iVar4 + 0x2c) = uVar19;
            *(iVar4 + 0x30) = *param_3;
            *(iVar4 + 0x31) = *(param_3 + 1);
            *(iVar4 + 0x34) = *(param_3 + 2);
            uVar19 = param_3[1];
            *(iVar4 + 0x3c) = 0;
            *(iVar4 + 0x38) = uVar19;
            *(iVar4 + 0x32) = param_3[1];
            iVar13 = param_2[0x14];
            if (iVar13 == 0) {
                *(iVar4 + 0x18) = 0;
                *(iVar4 + 0x20) = 0;
                *(iVar4 + 8) = 0;
                *(iVar4 + 0x10) = 0;
            }
            else {
                uVar16 = *(iVar13 + 0x24);
                uVar17 = *(iVar13 + 0x14);
                uVar14 = *(iVar13 + 0xc);
                *(iVar4 + 0x18) = *(iVar13 + 0x1c);
                *(iVar4 + 0x20) = uVar16;
                *(iVar4 + 8) = uVar14;
                *(iVar4 + 0x10) = uVar17;
            }
            uVar14 = *(param_3 + 0xe);
            uVar16 = *(param_3 + 10);
            *(iVar4 + 0x45) = *(param_3 + 0xc);
            *(iVar4 + 0x4d) = uVar14;
            *(iVar4 + 0x3d) = uVar16;
            trace_event_buffer_commit(&uStack_68);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    auVar20 = __stack_chk_fail();
    piVar5 = auVar20._8_8_;
    iVar13 = auVar20._0_8_;
    *extraout_x18 = sym.perf_trace_nvme_setup_cmd;
    pcStack_a8 = sym.perf_trace_nvme_setup_cmd;
    iVar4 = sp_el0;
    iStack_b8 = *(iVar4 + 0x5e0);
    iStack_c0 = 0;
    uStack_c4 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar13 + 0x78);
    puStack_b0 = &stack0xffffffffffffffd0;
    if ((*(iVar13 + 0x80) != 0) || (puVar11 = puVar10, *piVar1 != 0)) {
        puVar11 = &uStack_c4;
        iVar4 = perf_trace_buf_alloc(0x5c,&iStack_c0);
        uVar3 = _trace_event_reg;
        if (iVar4 != 0) {
            *(iStack_c0 + 0xe8) = &puStack_b0;
            *(iStack_c0 + 0xf8) = auStack_d0;
            *(iStack_c0 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8006230;
            *(iStack_c0 + 0x108) = 5;
            *(iVar4 + 0x28) = *(piVar5[0x29] + 0x68);
            uVar19 = 0;
            if (*(*piVar5 + 0x58) != 0) {
                uVar19 = *(piVar5[2] + 0x1cc) + 1U & 0xffff;
            }
            *(iVar4 + 0x2c) = uVar19;
            *(iVar4 + 0x30) = *puVar10;
            *(iVar4 + 0x31) = *(puVar10 + 1);
            *(iVar4 + 0x34) = *(puVar10 + 2);
            uVar19 = puVar10[1];
            *(iVar4 + 0x3c) = 0;
            *(iVar4 + 0x38) = uVar19;
            *(iVar4 + 0x32) = puVar10[1];
            iVar15 = piVar5[0x14];
            if (iVar15 == 0) {
                *(iVar4 + 0x18) = 0;
                *(iVar4 + 0x20) = 0;
                *(iVar4 + 8) = 0;
                *(iVar4 + 0x10) = 0;
            }
            else {
                uVar16 = *(iVar15 + 0x24);
                uVar17 = *(iVar15 + 0x14);
                uVar14 = *(iVar15 + 0xc);
                *(iVar4 + 0x18) = *(iVar15 + 0x1c);
                *(iVar4 + 0x20) = uVar16;
                *(iVar4 + 8) = uVar14;
                *(iVar4 + 0x10) = uVar17;
            }
            uVar14 = *(puVar10 + 0xc);
            uVar16 = *(puVar10 + 10);
            puVar11 = uStack_c4;
            *(iVar4 + 0x4d) = *(puVar10 + 0xe);
            *(iVar4 + 0x45) = uVar14;
            *(iVar4 + 0x3d) = uVar16;
            iVar15 = iVar13;
            perf_trace_run_bpf_submit(iVar4,0x5c,puVar11,iVar13,1,iStack_c0,piVar1,0);
            param_4 = iVar15;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar20 = __stack_chk_fail();
    piVar6 = auVar20._8_8_;
    iVar15 = auVar20._0_8_;
    uVar14 = tpidr_el2;
    *extraout_x18_00 = 0x80063e4;
    uStack_f8 = 0x80063e4;
    iVar4 = sp_el0;
    iStack_108 = *(iVar4 + 0x5e0);
    uVar14 = *(iVar15 + 0x48);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uVar19 = uVar14;
    ppuStack_100 = &puStack_b0;
    piStack_f0 = piVar1;
    puStack_e0 = puVar10;
    iStack_d8 = iVar13;
    if ((uVar19 >> 8 & 1) == 0) {
        if ((uVar19 >> 7 & 1) != 0) {
            puVar11 = NULL;
            param_4 = 0;
            event_triggers_call(iVar15,0);
        }
        if (((uVar19 >> 6 & 1) == 0) &&
           (((uVar19 >> 9 & 1) == 0 || (uVar3 = trace_event_ignore_this_pid(iVar15), (uVar3 & 1) == 0))))
        goto code_r0x08006460;
    }
    else {
code_r0x08006460:
        puVar11 = 0x48;
        iVar4 = trace_event_buffer_reserve(&uStack_138,iVar15);
        if (iVar4 != 0) {
            *(iVar4 + 0x28) = *(piVar6[0x29] + 0x68);
            uVar19 = 0;
            if (*(*piVar6 + 0x58) != 0) {
                uVar19 = *(piVar6[2] + 0x1cc) + 1U & 0xffff;
            }
            *(iVar4 + 0x2c) = uVar19;
            *(iVar4 + 0x30) = *(piVar6[0x26] + 2);
            *(iVar4 + 0x38) = piVar6[0x27];
            *(iVar4 + 0x40) = *(piVar6 + 0x141);
            *(iVar4 + 0x41) = *(piVar6 + 0x142);
            *(iVar4 + 0x42) = *(piVar6 + 0x144);
            iVar13 = piVar6[0x14];
            if (iVar13 == 0) {
                *(iVar4 + 0x18) = 0;
                *(iVar4 + 0x20) = 0;
                *(iVar4 + 8) = 0;
                *(iVar4 + 0x10) = 0;
            }
            else {
                uVar17 = *(iVar13 + 0x24);
                uVar18 = *(iVar13 + 0x14);
                uVar16 = *(iVar13 + 0xc);
                *(iVar4 + 0x18) = *(iVar13 + 0x1c);
                *(iVar4 + 0x20) = uVar17;
                *(iVar4 + 8) = uVar16;
                *(iVar4 + 0x10) = uVar18;
            }
            trace_event_buffer_commit(&uStack_138);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_108) {
        return;
    }
    auVar21 = __stack_chk_fail();
    piVar6 = auVar21._8_8_;
    iVar13 = auVar21._0_8_;
    *extraout_x18_01 = sym.perf_trace_nvme_complete_rq;
    pcStack_168 = sym.perf_trace_nvme_complete_rq;
    iVar4 = sp_el0;
    iStack_178 = *(iVar4 + 0x5e0);
    iStack_180 = 0;
    uStack_184 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar13 + 0x78);
    ppuStack_170 = &ppuStack_100;
    piStack_160 = piVar5;
    uStack_158 = uVar14;
    auStack_150 = auVar20;
    if ((*(iVar13 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar11 = &uStack_184;
        iVar4 = perf_trace_buf_alloc(0x4c,&iStack_180);
        uVar3 = _trace_event_reg;
        if (iVar4 != 0) {
            *(iStack_180 + 0xe8) = &ppuStack_170;
            *(iStack_180 + 0xf8) = auStack_190;
            *(iStack_180 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8006538;
            *(iStack_180 + 0x108) = 5;
            *(iVar4 + 0x28) = *(piVar6[0x29] + 0x68);
            uVar19 = 0;
            if (*(*piVar6 + 0x58) != 0) {
                uVar19 = *(piVar6[2] + 0x1cc) + 1U & 0xffff;
            }
            *(iVar4 + 0x2c) = uVar19;
            *(iVar4 + 0x30) = *(piVar6[0x26] + 2);
            *(iVar4 + 0x38) = piVar6[0x27];
            *(iVar4 + 0x40) = *(piVar6 + 0x141);
            *(iVar4 + 0x41) = *(piVar6 + 0x142);
            *(iVar4 + 0x42) = *(piVar6 + 0x144);
            iVar15 = piVar6[0x14];
            if (iVar15 == 0) {
                *(iVar4 + 0x18) = 0;
                *(iVar4 + 0x20) = 0;
                *(iVar4 + 8) = 0;
                *(iVar4 + 0x10) = 0;
            }
            else {
                uVar16 = *(iVar15 + 0x24);
                uVar17 = *(iVar15 + 0x14);
                uVar14 = *(iVar15 + 0xc);
                *(iVar4 + 0x18) = *(iVar15 + 0x1c);
                *(iVar4 + 0x20) = uVar16;
                *(iVar4 + 8) = uVar14;
                *(iVar4 + 0x10) = uVar17;
            }
            puVar11 = uStack_184;
            iVar15 = iVar13;
            perf_trace_run_bpf_submit(iVar4,0x4c,puVar11,iVar13,1,iStack_180,piVar1,0);
            param_4 = iVar15;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_178) {
        return;
    }
    auVar20 = __stack_chk_fail();
    iVar15 = auVar20._0_8_;
    uVar14 = tpidr_el2;
    *extraout_x18_02 = 0x80066cc;
    uStack_1b8 = 0x80066cc;
    pcStack_1b0 = sym.perf_trace_nvme_complete_rq;
    iVar4 = sp_el0;
    iStack_1c8 = *(iVar4 + 0x5e0);
    uVar14 = *(iVar15 + 0x48);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uVar19 = uVar14;
    ppuStack_1c0 = &ppuStack_170;
    piStack_1a0 = piVar1;
    if ((uVar19 >> 8 & 1) == 0) {
        puVar10 = puVar11;
        if ((uVar19 >> 7 & 1) != 0) {
            puVar10 = NULL;
            param_4 = 0;
            piStack_1a8 = piVar6;
            iStack_198 = iVar13;
            event_triggers_call(iVar15,0);
            auVar21._8_8_ = piStack_1a8;
            auVar21._0_8_ = iStack_198;
        }
        piStack_1a8 = auVar21._8_8_;
        iStack_198 = auVar21._0_8_;
        if (((uVar19 >> 6 & 1) == 0) &&
           (((uVar19 >> 9 & 1) == 0 ||
            (uVar3 = trace_event_ignore_this_pid(iVar15), auVar21._8_8_ = piStack_1a8, auVar21._0_8_ = iStack_198,
            (uVar3 & 1) == 0)))) goto code_r0x0800674c;
    }
    else {
code_r0x0800674c:
        piStack_1a8 = auVar21._8_8_;
        iStack_198 = auVar21._0_8_;
        puVar10 = 0x10;
        iVar4 = trace_event_buffer_reserve(&uStack_1f8,iVar15);
        auVar21._8_8_ = piStack_1a8;
        auVar21._0_8_ = iStack_198;
        if (iVar4 != 0) {
            *(iVar4 + 8) = *(auVar20._8_8_ + 0x68);
            *(iVar4 + 0xc) = puVar11;
            trace_event_buffer_commit(&uStack_1f8);
            auVar21._8_8_ = piStack_1a8;
            auVar21._0_8_ = iStack_198;
        }
    }
    piStack_1a8 = auVar21._8_8_;
    iStack_198 = auVar21._0_8_;
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_1c8) {
        return;
    }
    auVar22 = __stack_chk_fail();
    iVar13 = auVar22._0_8_;
    *extraout_x18_03 = sym.perf_trace_nvme_async_event;
    pcStack_238 = sym.perf_trace_nvme_async_event;
    pcStack_230 = sym.perf_trace_nvme_setup_cmd;
    iVar4 = sp_el0;
    iStack_248 = *(iVar4 + 0x5e0);
    uVar3 = puVar10 & 0xffffffff;
    iStack_250 = 0;
    uStack_254 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar13 + 0x78);
    ppuStack_240 = &ppuStack_1c0;
    uStack_220 = uVar14;
    uStack_208 = puVar11 & 0xffffffff;
    auStack_218 = auVar20;
    if ((*(iVar13 + 0x80) != 0) || (uVar9 = puVar10, *piVar1 != 0)) {
        uVar9 = SUB84(&uStack_254,0);
        iVar4 = perf_trace_buf_alloc(0x14,&iStack_250);
        uVar2 = _trace_event_reg;
        if (iVar4 != 0) {
            *(iStack_250 + 0xe8) = &ppuStack_240;
            *(iStack_250 + 0xf8) = auStack_260;
            *(iStack_250 + 0x100) = ~(-1L << (uVar2 & 0x3f)) & 0x80067a4;
            *(iStack_250 + 0x108) = 5;
            *(iVar4 + 8) = *(auVar22._8_8_ + 0x68);
            *(iVar4 + 0xc) = puVar10;
            iVar15 = iVar13;
            uVar9 = uStack_254;
            perf_trace_run_bpf_submit(iVar4,0x14,uStack_254,iVar13,1,iStack_250,piVar1,0);
            param_4 = iVar15;
        }
    }
    uVar7 = uVar9;
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_248) {
        return;
    }
    auVar20 = __stack_chk_fail();
    piVar5 = auVar20._8_8_;
    iVar15 = auVar20._0_8_;
    uVar14 = tpidr_el2;
    *extraout_x18_04 = 0x80068c4;
    uStack_298 = 0x80068c4;
    pcStack_290 = sym.perf_trace_nvme_async_event;
    iVar4 = sp_el0;
    iStack_2a8 = *(iVar4 + 0x5e0);
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    uVar19 = *(iVar15 + 0x48);
    ppuStack_2a0 = &ppuStack_240;
    piStack_278 = piVar1;
    uStack_270 = uVar3;
    uVar12 = param_4;
    if ((uVar19 >> 8 & 1) == 0) {
        uVar8 = uVar7;
        if ((uVar19 >> 7 & 1) != 0) {
            uVar8 = 0;
            uVar12 = 0;
            iStack_280 = auVar22._8_8_;
            iStack_268 = iVar13;
            event_triggers_call(iVar15,0);
            auVar22._8_8_ = iStack_280;
            auVar22._0_8_ = iStack_268;
        }
        iStack_280 = auVar22._8_8_;
        iStack_268 = auVar22._0_8_;
        if ((uVar19 >> 6 & 1) != 0) goto code_r0x080069cc;
        if ((uVar19 >> 9 & 1) != 0) {
            uVar3 = trace_event_ignore_this_pid(iVar15);
            auVar22._8_8_ = iStack_280;
            auVar22._0_8_ = iStack_268;
            if ((uVar3 & 1) != 0) goto code_r0x080069cc;
        }
    }
    iStack_280 = auVar22._8_8_;
    iStack_268 = auVar22._0_8_;
    uVar8 = 0x34;
    iVar4 = trace_event_buffer_reserve(&uStack_2d8,iVar15);
    auVar22._8_8_ = iStack_280;
    auVar22._0_8_ = iStack_268;
    if (iVar4 != 0) {
        *(iVar4 + 8) = *(piVar5[0x29] + 0x68);
        iVar13 = piVar5[0x14];
        if (iVar13 == 0) {
            *(iVar4 + 0x1c) = 0;
            *(iVar4 + 0x24) = 0;
            *(iVar4 + 0xc) = 0;
            *(iVar4 + 0x14) = 0;
        }
        else {
            uVar16 = *(iVar13 + 0x24);
            uVar17 = *(iVar13 + 0x14);
            uVar14 = *(iVar13 + 0xc);
            *(iVar4 + 0x1c) = *(iVar13 + 0x1c);
            *(iVar4 + 0x24) = uVar16;
            *(iVar4 + 0xc) = uVar14;
            *(iVar4 + 0x14) = uVar17;
        }
        uVar19 = 0;
        if (*(*piVar5 + 0x58) != 0) {
            uVar19 = *(piVar5[2] + 0x1cc) + 1U & 0xffff;
        }
        *(iVar4 + 0x2c) = uVar19;
        *(iVar4 + 0x30) = uVar7;
        *(iVar4 + 0x32) = param_4;
        trace_event_buffer_commit(&uStack_2d8);
        auVar22._8_8_ = iStack_280;
        auVar22._0_8_ = iStack_268;
    }
code_r0x080069cc:
    iStack_280 = auVar22._8_8_;
    iStack_268 = auVar22._0_8_;
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_2a8) {
        return;
    }
    auVar20 = __stack_chk_fail();
    piVar5 = auVar20._8_8_;
    iVar13 = auVar20._0_8_;
    *extraout_x18_05 = sym.perf_trace_nvme_sq;
    pcStack_318 = sym.perf_trace_nvme_sq;
    iVar4 = sp_el0;
    iStack_328 = *(iVar4 + 0x5e0);
    iStack_330 = 0;
    uStack_334 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar13 + 0x78);
    ppuStack_320 = &ppuStack_2a0;
    if (((*(iVar13 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar4 = perf_trace_buf_alloc(0x34,&iStack_330,&uStack_334), uVar3 = _trace_event_reg, iVar4 != 0)) {
        *(iStack_330 + 0xe8) = &ppuStack_320;
        *(iStack_330 + 0xf8) = auStack_340;
        *(iStack_330 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8006a04;
        *(iStack_330 + 0x108) = 5;
        *(iVar4 + 8) = *(piVar5[0x29] + 0x68);
        iVar15 = piVar5[0x14];
        if (iVar15 == 0) {
            *(iVar4 + 0x1c) = 0;
            *(iVar4 + 0x24) = 0;
            *(iVar4 + 0xc) = 0;
            *(iVar4 + 0x14) = 0;
        }
        else {
            uVar16 = *(iVar15 + 0x24);
            uVar17 = *(iVar15 + 0x14);
            uVar14 = *(iVar15 + 0xc);
            *(iVar4 + 0x1c) = *(iVar15 + 0x1c);
            *(iVar4 + 0x24) = uVar16;
            *(iVar4 + 0xc) = uVar14;
            *(iVar4 + 0x14) = uVar17;
        }
        uVar19 = 0;
        if (*(*piVar5 + 0x58) != 0) {
            uVar19 = *(piVar5[2] + 0x1cc) + 1U & 0xffff;
        }
        *(iVar4 + 0x2c) = uVar19;
        *(iVar4 + 0x30) = uVar8;
        *(iVar4 + 0x32) = uVar12;
        perf_trace_run_bpf_submit(iVar4,0x34,uStack_334,iVar13,1,iStack_330,piVar1,0);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_328) {
        __stack_chk_fail();
        uVar14 = tpidr_el2;
        *extraout_x18_06 = 0x8006b84;
        bpf_trace_run2(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_nvme_setup_cmd.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005b60 (size 8) =====

void sym.__bpf_trace_nvme_setup_cmd.21529633b7289604a80e82acd8b43a39.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run2();
    return;
}


// ===== sym.perf_trace_nvme_setup_cmd.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005b68 (size 8) =====

//WARNING: Removing unreachable block (ram,0x0800686c)
//WARNING: Removing unreachable block (ram,0x080065e0)
//WARNING: Removing unreachable block (ram,0x08006ab8)

void sym.perf_trace_nvme_setup_cmd.21529633b7289604a80e82acd8b43a39.cfi_jt
               (int64_t param_1,int64_t *param_2,uint32_t *param_3,ushort param_4)

{
    int64_t *piVar1;
    ulong in_tmp_ldXn;
    int64_t iVar2;
    uint64_t uVar3;
    ushort uVar5;
    ushort uVar6;
    uint32_t *puVar8;
    uint32_t *puVar9;
    ushort uVar10;
    uint64_t uVar11;
    int64_t iVar12;
    ulong uVar13;
    int64_t iVar14;
    ulong uVar15;
    ulong uVar16;
    ulong uVar17;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    uint32_t uVar18;
    uint64_t unaff_x30;
    uchar auVar19 [16];
    uchar auVar20 [16];
    uchar auStack_2d0 [12];
    uint uStack_2c4;
    int64_t iStack_2c0;
    int64_t iStack_2b8;
    ulong **ppuStack_2b0;
    code *pcStack_2a8;
    ulong uStack_268;
    ulong uStack_260;
    ulong uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    ulong uStack_240;
    int64_t iStack_238;
    ulong **ppuStack_230;
    ulong uStack_228;
    code *pcStack_220;
    int64_t iStack_210;
    int64_t *piStack_208;
    uint64_t uStack_200;
    int64_t iStack_1f8;
    uchar auStack_1f0 [12];
    uint uStack_1e4;
    int64_t iStack_1e0;
    int64_t iStack_1d8;
    ulong **ppuStack_1d0;
    code *pcStack_1c8;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    int64_t iStack_158;
    ulong **ppuStack_150;
    ulong uStack_148;
    code *pcStack_140;
    int64_t *piStack_138;
    int64_t *piStack_130;
    int64_t iStack_128;
    uchar auStack_120 [12];
    uint32_t uStack_114;
    int64_t iStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    code *pcStack_f8;
    int64_t *piStack_f0;
    ulong uStack_e8;
    uchar auStack_e0 [16];
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
    uint32_t *puStack_70;
    int64_t iStack_68;
    uchar auStack_60 [12];
    uint32_t uStack_54;
    int64_t iStack_50;
    int64_t iStack_48;
    int64_t *piVar4;
    uint uVar7;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_48 = *(iVar2 + 0x5e0);
    iStack_50 = 0;
    uStack_54 = 0;
    iVar2 = tpidr_el1;
    piVar1 = iVar2 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (puVar8 = param_3, *piVar1 != 0)) {
        puVar8 = &uStack_54;
        iVar2 = perf_trace_buf_alloc(0x5c,&iStack_50);
        uVar3 = _trace_event_reg;
        if (iVar2 != 0) {
            *(iStack_50 + 0xe8) = &stack0xffffffffffffffc0;
            uVar11 = -1L << (uVar3 & 0x3f);
            uVar3 = (~uVar11 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar3 = uVar11 | unaff_x30;
            }
            *(iStack_50 + 0xf8) = auStack_60;
            *(iStack_50 + 0x100) = uVar3;
            *(iStack_50 + 0x108) = 5;
            *(iVar2 + 0x28) = *(param_2[0x29] + 0x68);
            uVar18 = 0;
            if (*(*param_2 + 0x58) != 0) {
                uVar18 = *(param_2[2] + 0x1cc) + 1U & 0xffff;
            }
            *(iVar2 + 0x2c) = uVar18;
            *(iVar2 + 0x30) = *param_3;
            *(iVar2 + 0x31) = *(param_3 + 1);
            *(iVar2 + 0x34) = *(param_3 + 2);
            uVar18 = param_3[1];
            *(iVar2 + 0x3c) = 0;
            *(iVar2 + 0x38) = uVar18;
            *(iVar2 + 0x32) = param_3[1];
            iVar12 = param_2[0x14];
            if (iVar12 == 0) {
                *(iVar2 + 0x18) = 0;
                *(iVar2 + 0x20) = 0;
                *(iVar2 + 8) = 0;
                *(iVar2 + 0x10) = 0;
            }
            else {
                uVar15 = *(iVar12 + 0x24);
                uVar16 = *(iVar12 + 0x14);
                uVar13 = *(iVar12 + 0xc);
                *(iVar2 + 0x18) = *(iVar12 + 0x1c);
                *(iVar2 + 0x20) = uVar15;
                *(iVar2 + 8) = uVar13;
                *(iVar2 + 0x10) = uVar16;
            }
            uVar13 = *(param_3 + 0xc);
            uVar15 = *(param_3 + 10);
            puVar8 = uStack_54;
            *(iVar2 + 0x4d) = *(param_3 + 0xe);
            *(iVar2 + 0x45) = uVar13;
            *(iVar2 + 0x3d) = uVar15;
            iVar12 = param_1;
            perf_trace_run_bpf_submit(iVar2,0x5c,puVar8,param_1,1,iStack_50,piVar1,0);
            param_4 = iVar12;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_48) {
        return;
    }
    auVar19 = __stack_chk_fail();
    piVar4 = auVar19._8_8_;
    iVar12 = auVar19._0_8_;
    uVar13 = tpidr_el2;
    *extraout_x18 = 0x80063e4;
    uStack_88 = 0x80063e4;
    iVar2 = sp_el0;
    iStack_98 = *(iVar2 + 0x5e0);
    uVar13 = *(iVar12 + 0x48);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uVar18 = uVar13;
    puStack_90 = &stack0xffffffffffffffc0;
    piStack_80 = piVar1;
    puStack_70 = param_3;
    iStack_68 = param_1;
    if ((uVar18 >> 8 & 1) == 0) {
        if ((uVar18 >> 7 & 1) != 0) {
            puVar8 = NULL;
            param_4 = 0;
            event_triggers_call(iVar12,0);
        }
        if (((uVar18 >> 6 & 1) == 0) &&
           (((uVar18 >> 9 & 1) == 0 || (uVar3 = trace_event_ignore_this_pid(iVar12), (uVar3 & 1) == 0))))
        goto code_r0x08006460;
    }
    else {
code_r0x08006460:
        puVar8 = 0x48;
        iVar2 = trace_event_buffer_reserve(&uStack_c8,iVar12);
        if (iVar2 != 0) {
            *(iVar2 + 0x28) = *(piVar4[0x29] + 0x68);
            uVar18 = 0;
            if (*(*piVar4 + 0x58) != 0) {
                uVar18 = *(piVar4[2] + 0x1cc) + 1U & 0xffff;
            }
            *(iVar2 + 0x2c) = uVar18;
            *(iVar2 + 0x30) = *(piVar4[0x26] + 2);
            *(iVar2 + 0x38) = piVar4[0x27];
            *(iVar2 + 0x40) = *(piVar4 + 0x141);
            *(iVar2 + 0x41) = *(piVar4 + 0x142);
            *(iVar2 + 0x42) = *(piVar4 + 0x144);
            iVar12 = piVar4[0x14];
            if (iVar12 == 0) {
                *(iVar2 + 0x18) = 0;
                *(iVar2 + 0x20) = 0;
                *(iVar2 + 8) = 0;
                *(iVar2 + 0x10) = 0;
            }
            else {
                uVar16 = *(iVar12 + 0x24);
                uVar17 = *(iVar12 + 0x14);
                uVar15 = *(iVar12 + 0xc);
                *(iVar2 + 0x18) = *(iVar12 + 0x1c);
                *(iVar2 + 0x20) = uVar16;
                *(iVar2 + 8) = uVar15;
                *(iVar2 + 0x10) = uVar17;
            }
            trace_event_buffer_commit(&uStack_c8);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_98) {
        return;
    }
    auVar20 = __stack_chk_fail();
    piVar4 = auVar20._8_8_;
    iVar12 = auVar20._0_8_;
    *extraout_x18_00 = sym.perf_trace_nvme_complete_rq;
    pcStack_f8 = sym.perf_trace_nvme_complete_rq;
    iVar2 = sp_el0;
    iStack_108 = *(iVar2 + 0x5e0);
    iStack_110 = 0;
    uStack_114 = 0;
    iVar2 = tpidr_el1;
    piVar1 = iVar2 + *(iVar12 + 0x78);
    ppuStack_100 = &puStack_90;
    piStack_f0 = param_2;
    uStack_e8 = uVar13;
    auStack_e0 = auVar19;
    if ((*(iVar12 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar8 = &uStack_114;
        iVar2 = perf_trace_buf_alloc(0x4c,&iStack_110);
        uVar3 = _trace_event_reg;
        if (iVar2 != 0) {
            *(iStack_110 + 0xe8) = &ppuStack_100;
            *(iStack_110 + 0xf8) = auStack_120;
            *(iStack_110 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8006538;
            *(iStack_110 + 0x108) = 5;
            *(iVar2 + 0x28) = *(piVar4[0x29] + 0x68);
            uVar18 = 0;
            if (*(*piVar4 + 0x58) != 0) {
                uVar18 = *(piVar4[2] + 0x1cc) + 1U & 0xffff;
            }
            *(iVar2 + 0x2c) = uVar18;
            *(iVar2 + 0x30) = *(piVar4[0x26] + 2);
            *(iVar2 + 0x38) = piVar4[0x27];
            *(iVar2 + 0x40) = *(piVar4 + 0x141);
            *(iVar2 + 0x41) = *(piVar4 + 0x142);
            *(iVar2 + 0x42) = *(piVar4 + 0x144);
            iVar14 = piVar4[0x14];
            if (iVar14 == 0) {
                *(iVar2 + 0x18) = 0;
                *(iVar2 + 0x20) = 0;
                *(iVar2 + 8) = 0;
                *(iVar2 + 0x10) = 0;
            }
            else {
                uVar15 = *(iVar14 + 0x24);
                uVar16 = *(iVar14 + 0x14);
                uVar13 = *(iVar14 + 0xc);
                *(iVar2 + 0x18) = *(iVar14 + 0x1c);
                *(iVar2 + 0x20) = uVar15;
                *(iVar2 + 8) = uVar13;
                *(iVar2 + 0x10) = uVar16;
            }
            puVar8 = uStack_114;
            iVar14 = iVar12;
            perf_trace_run_bpf_submit(iVar2,0x4c,puVar8,iVar12,1,iStack_110,piVar1,0);
            param_4 = iVar14;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_108) {
        return;
    }
    auVar19 = __stack_chk_fail();
    iVar14 = auVar19._0_8_;
    uVar13 = tpidr_el2;
    *extraout_x18_01 = 0x80066cc;
    uStack_148 = 0x80066cc;
    pcStack_140 = sym.perf_trace_nvme_complete_rq;
    iVar2 = sp_el0;
    iStack_158 = *(iVar2 + 0x5e0);
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uVar18 = *(iVar14 + 0x48);
    ppuStack_150 = &ppuStack_100;
    piStack_130 = piVar1;
    if ((uVar18 >> 8 & 1) == 0) {
        puVar9 = puVar8;
        if ((uVar18 >> 7 & 1) != 0) {
            puVar9 = NULL;
            param_4 = 0;
            piStack_138 = piVar4;
            iStack_128 = iVar12;
            event_triggers_call(iVar14,0);
            auVar20._8_8_ = piStack_138;
            auVar20._0_8_ = iStack_128;
        }
        piStack_138 = auVar20._8_8_;
        iStack_128 = auVar20._0_8_;
        if (((uVar18 >> 6 & 1) == 0) &&
           (((uVar18 >> 9 & 1) == 0 ||
            (uVar3 = trace_event_ignore_this_pid(iVar14), auVar20._8_8_ = piStack_138, auVar20._0_8_ = iStack_128,
            (uVar3 & 1) == 0)))) goto code_r0x0800674c;
    }
    else {
code_r0x0800674c:
        piStack_138 = auVar20._8_8_;
        iStack_128 = auVar20._0_8_;
        puVar9 = 0x10;
        iVar2 = trace_event_buffer_reserve(&uStack_188,iVar14);
        auVar20._8_8_ = piStack_138;
        auVar20._0_8_ = iStack_128;
        if (iVar2 != 0) {
            *(iVar2 + 8) = *(auVar19._8_8_ + 0x68);
            *(iVar2 + 0xc) = puVar8;
            trace_event_buffer_commit(&uStack_188);
            auVar20._8_8_ = piStack_138;
            auVar20._0_8_ = iStack_128;
        }
    }
    piStack_138 = auVar20._8_8_;
    iStack_128 = auVar20._0_8_;
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_158) {
        return;
    }
    auVar19 = __stack_chk_fail();
    iVar12 = auVar19._0_8_;
    *extraout_x18_02 = sym.perf_trace_nvme_async_event;
    pcStack_1c8 = sym.perf_trace_nvme_async_event;
    iVar2 = sp_el0;
    iStack_1d8 = *(iVar2 + 0x5e0);
    uVar3 = puVar9 & 0xffffffff;
    iStack_1e0 = 0;
    uStack_1e4 = 0;
    iVar2 = tpidr_el1;
    piVar1 = iVar2 + *(iVar12 + 0x78);
    ppuStack_1d0 = &ppuStack_150;
    if ((*(iVar12 + 0x80) != 0) || (uVar7 = puVar9, *piVar1 != 0)) {
        uVar7 = SUB84(&uStack_1e4,0);
        iVar2 = perf_trace_buf_alloc(0x14,&iStack_1e0);
        uVar11 = _trace_event_reg;
        if (iVar2 != 0) {
            *(iStack_1e0 + 0xe8) = &ppuStack_1d0;
            *(iStack_1e0 + 0xf8) = auStack_1f0;
            *(iStack_1e0 + 0x100) = ~(-1L << (uVar11 & 0x3f)) & 0x80067a4;
            *(iStack_1e0 + 0x108) = 5;
            *(iVar2 + 8) = *(auVar19._8_8_ + 0x68);
            *(iVar2 + 0xc) = puVar9;
            iVar14 = iVar12;
            uVar7 = uStack_1e4;
            perf_trace_run_bpf_submit(iVar2,0x14,uStack_1e4,iVar12,1,iStack_1e0,piVar1,0);
            param_4 = iVar14;
        }
    }
    uVar5 = uVar7;
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_1d8) {
        return;
    }
    auVar20 = __stack_chk_fail();
    piVar4 = auVar20._8_8_;
    iVar14 = auVar20._0_8_;
    uVar13 = tpidr_el2;
    *extraout_x18_03 = 0x80068c4;
    uStack_228 = 0x80068c4;
    pcStack_220 = sym.perf_trace_nvme_async_event;
    iVar2 = sp_el0;
    iStack_238 = *(iVar2 + 0x5e0);
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_268 = 0;
    uStack_260 = 0;
    uVar18 = *(iVar14 + 0x48);
    ppuStack_230 = &ppuStack_1d0;
    piStack_208 = piVar1;
    uStack_200 = uVar3;
    uVar10 = param_4;
    if ((uVar18 >> 8 & 1) == 0) {
        uVar6 = uVar5;
        if ((uVar18 >> 7 & 1) != 0) {
            uVar6 = 0;
            uVar10 = 0;
            iStack_210 = auVar19._8_8_;
            iStack_1f8 = iVar12;
            event_triggers_call(iVar14,0);
            auVar19._8_8_ = iStack_210;
            auVar19._0_8_ = iStack_1f8;
        }
        iStack_210 = auVar19._8_8_;
        iStack_1f8 = auVar19._0_8_;
        if ((uVar18 >> 6 & 1) != 0) goto code_r0x080069cc;
        if ((uVar18 >> 9 & 1) != 0) {
            uVar3 = trace_event_ignore_this_pid(iVar14);
            auVar19._8_8_ = iStack_210;
            auVar19._0_8_ = iStack_1f8;
            if ((uVar3 & 1) != 0) goto code_r0x080069cc;
        }
    }
    iStack_210 = auVar19._8_8_;
    iStack_1f8 = auVar19._0_8_;
    uVar6 = 0x34;
    iVar2 = trace_event_buffer_reserve(&uStack_268,iVar14);
    auVar19._8_8_ = iStack_210;
    auVar19._0_8_ = iStack_1f8;
    if (iVar2 != 0) {
        *(iVar2 + 8) = *(piVar4[0x29] + 0x68);
        iVar12 = piVar4[0x14];
        if (iVar12 == 0) {
            *(iVar2 + 0x1c) = 0;
            *(iVar2 + 0x24) = 0;
            *(iVar2 + 0xc) = 0;
            *(iVar2 + 0x14) = 0;
        }
        else {
            uVar15 = *(iVar12 + 0x24);
            uVar16 = *(iVar12 + 0x14);
            uVar13 = *(iVar12 + 0xc);
            *(iVar2 + 0x1c) = *(iVar12 + 0x1c);
            *(iVar2 + 0x24) = uVar15;
            *(iVar2 + 0xc) = uVar13;
            *(iVar2 + 0x14) = uVar16;
        }
        uVar18 = 0;
        if (*(*piVar4 + 0x58) != 0) {
            uVar18 = *(piVar4[2] + 0x1cc) + 1U & 0xffff;
        }
        *(iVar2 + 0x2c) = uVar18;
        *(iVar2 + 0x30) = uVar5;
        *(iVar2 + 0x32) = param_4;
        trace_event_buffer_commit(&uStack_268);
        auVar19._8_8_ = iStack_210;
        auVar19._0_8_ = iStack_1f8;
    }
code_r0x080069cc:
    iStack_210 = auVar19._8_8_;
    iStack_1f8 = auVar19._0_8_;
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_238) {
        return;
    }
    auVar19 = __stack_chk_fail();
    piVar4 = auVar19._8_8_;
    iVar12 = auVar19._0_8_;
    *extraout_x18_04 = sym.perf_trace_nvme_sq;
    pcStack_2a8 = sym.perf_trace_nvme_sq;
    iVar2 = sp_el0;
    iStack_2b8 = *(iVar2 + 0x5e0);
    iStack_2c0 = 0;
    uStack_2c4 = 0;
    iVar2 = tpidr_el1;
    piVar1 = iVar2 + *(iVar12 + 0x78);
    ppuStack_2b0 = &ppuStack_230;
    if (((*(iVar12 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar2 = perf_trace_buf_alloc(0x34,&iStack_2c0,&uStack_2c4), uVar3 = _trace_event_reg, iVar2 != 0)) {
        *(iStack_2c0 + 0xe8) = &ppuStack_2b0;
        *(iStack_2c0 + 0xf8) = auStack_2d0;
        *(iStack_2c0 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8006a04;
        *(iStack_2c0 + 0x108) = 5;
        *(iVar2 + 8) = *(piVar4[0x29] + 0x68);
        iVar14 = piVar4[0x14];
        if (iVar14 == 0) {
            *(iVar2 + 0x1c) = 0;
            *(iVar2 + 0x24) = 0;
            *(iVar2 + 0xc) = 0;
            *(iVar2 + 0x14) = 0;
        }
        else {
            uVar15 = *(iVar14 + 0x24);
            uVar16 = *(iVar14 + 0x14);
            uVar13 = *(iVar14 + 0xc);
            *(iVar2 + 0x1c) = *(iVar14 + 0x1c);
            *(iVar2 + 0x24) = uVar15;
            *(iVar2 + 0xc) = uVar13;
            *(iVar2 + 0x14) = uVar16;
        }
        uVar18 = 0;
        if (*(*piVar4 + 0x58) != 0) {
            uVar18 = *(piVar4[2] + 0x1cc) + 1U & 0xffff;
        }
        *(iVar2 + 0x2c) = uVar18;
        *(iVar2 + 0x30) = uVar6;
        *(iVar2 + 0x32) = uVar10;
        perf_trace_run_bpf_submit(iVar2,0x34,uStack_2c4,iVar12,1,iStack_2c0,piVar1,0);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_2b8) {
        __stack_chk_fail();
        uVar13 = tpidr_el2;
        *extraout_x18_05 = 0x8006b84;
        bpf_trace_run2(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.nvme_pr_reserve.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005b70 (size 8) =====

void sym.nvme_pr_reserve.21529633b7289604a80e82acd8b43a39.cfi_jt
               (int64_t param_1,ulong param_2,int param_3,uint32_t param_4)

{
    int iVar1;
    ulong uVar2;
    int64_t *arg4;
    uint64_t uVar3;
    int64_t iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    code *pcVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    int64_t aiStack_1b8 [2];
    uint uStack_1a8;
    uint uStack_1a4;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    uint64_t uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    int64_t iStack_168;
    ulong **ppuStack_160;
    code *pcStack_158;
    uint uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    uint uStack_138;
    uint uStack_134;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    uint64_t uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    uchar **ppuStack_f0;
    code *pcStack_e8;
    uint uStack_e0;
    int64_t aiStack_d8 [2];
    uint uStack_c8;
    uint uStack_c4;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    uint64_t uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uint uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    uint uStack_58;
    uint uStack_54;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    uint64_t uStack_30;
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_18 = *(iVar4 + 0x5e0);
    if (param_4 < 2) {
        uVar6 = (param_3 - 1U) * 0x100 + 0x100;
        iVar4 = *(*(param_1 + 0x3f0) + 0x58);
        if (5 < param_3 - 1U) {
            uVar6 = 0;
        }
        uStack_60 = 0;
        param_3 = 0;
        uStack_28 = 0;
        uStack_20 = 0;
        uStack_38 = 0;
        uStack_48 = 0;
        uStack_40 = 0;
        uStack_50 = 0;
        uStack_30 = uVar6 | (param_4 & 1) << 3;
        _uStack_58 = CONCAT44(*(*(iVar4 + 0x40) + 0x2d0),0x11);
        uStack_70 = 0;
        uStack_68 = param_2;
        uVar2 = sym.__nvme_submit_sync_cmd(*(iVar4 + 0x18),&uStack_58,0,&uStack_68);
    }
    else {
        uVar2 = 0xffffffa1;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_18) {
        return;
    }
    auVar8 = __stack_chk_fail(uVar2);
    aiStack_d8[0] = auVar8._8_8_;
    *extraout_x18 = sym.nvme_pr_release;
    pcStack_78 = sym.nvme_pr_release;
    iVar4 = sp_el0;
    iStack_88 = *(iVar4 + 0x5e0);
    arg4 = aiStack_d8;
    uVar3 = 0;
    uVar6 = (param_3 - 1U) * 0x100 + 0x100;
    if (5 < param_3 - 1U) {
        uVar6 = 0;
    }
    aiStack_d8[1] = 0;
    iVar4 = *(*(auVar8._0_8_ + 0x3f0) + 0x58);
    uVar2 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c0 = 0;
    uStack_a0 = uVar6 | (aiStack_d8[0] == 0) << 3;
    _uStack_c8 = CONCAT44(*(*(iVar4 + 0x40) + 0x2d0),0x15);
    uStack_e0 = 0;
    puStack_80 = &stack0xfffffffffffffff0;
    sym.__nvme_submit_sync_cmd(*(iVar4 + 0x18),&uStack_c8,0,arg4);
    iVar1 = arg4;
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_88) {
        return;
    }
    auVar8 = __stack_chk_fail();
    uStack_148 = auVar8._8_8_;
    *extraout_x18_00 = sym.nvme_pr_preempt;
    pcStack_e8 = sym.nvme_pr_preempt;
    iVar4 = sp_el0;
    iStack_f8 = *(iVar4 + 0x5e0);
    uVar6 = (iVar1 - 1U) * 0x100 + 0x100;
    if (5 < iVar1 - 1U) {
        uVar6 = 0;
    }
    uVar5 = 1;
    if ((uVar3 & 1) != 0) {
        uVar5 = 2;
    }
    iVar4 = *(*(auVar8._0_8_ + 0x3f0) + 0x58);
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_130 = 0;
    uStack_110 = uVar6 | uVar5;
    _uStack_138 = CONCAT44(*(*(iVar4 + 0x40) + 0x2d0),0x11);
    uStack_150 = 0;
    uStack_140 = uVar2;
    ppuStack_f0 = &puStack_80;
    sym.__nvme_submit_sync_cmd(*(iVar4 + 0x18),&uStack_138,0,&uStack_148);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_f8) {
        return;
    }
    auVar8 = __stack_chk_fail();
    aiStack_1b8[0] = auVar8._8_8_;
    *extraout_x18_01 = sym.nvme_pr_clear;
    pcStack_158 = sym.nvme_pr_clear;
    iVar4 = sp_el0;
    iStack_168 = *(iVar4 + 0x5e0);
    uVar6 = 9;
    if (aiStack_1b8[0] != 0) {
        uVar6 = 1;
    }
    uStack_1a0 = 0;
    aiStack_1b8[1] = 0;
    iVar4 = *(*(auVar8._0_8_ + 0x3f0) + 0x58);
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_180 = uVar6;
    _uStack_1a8 = CONCAT44(*(*(iVar4 + 0x40) + 0x2d0),0x15);
    ppuStack_160 = &ppuStack_f0;
    sym.__nvme_submit_sync_cmd(*(iVar4 + 0x18),&uStack_1a8,0,aiStack_1b8);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_168) {
        return;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18_02 = sym.nvme_disable_ctrl;
    *(iVar4 + 0x598) = *(iVar4 + 0x598) & 0xffff3ffe;
    pcVar7 = *(*(iVar4 + 0x40) + 0x20);
    __cfi_slowpath_diag(0x5fd0dd7266111d21,pcVar7,0x8002710);
    iVar1 = (*pcVar7)(iVar4,0x14,*(iVar4 + 0x598));
    if (iVar1 == 0) {
        if ((*(iVar4 + 0x610) >> 3 & 1) != 0) {
            msleep(0x8fc);
        }
        sym.nvme_wait_ready(iVar4,*(iVar4 + 0x5a8),0);
    }
    return;
}


// ===== sym.nvme_find_get_ns.cfi_jt @ 0x08005b78 (size 8) =====

ulong * sym.nvme_find_get_ns.cfi_jt(int64_t param_1,uint32_t param_2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong *puVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    down_read(param_1 + 0x90);
    for (puVar7 = *(param_1 + 0x80); puVar7 != param_1 + 0x80; puVar7 = *puVar7) {
        if (*(puVar7[8] + 0x2d0) == param_2) {
            puVar1 = puVar7 + 7;
            uVar6 = *puVar1;
            if (uVar6 == 0) {
                uVar5 = 0;
            }
            else {
                do {
                    uVar5 = uVar6;
                    Hint_Prefetch(puVar1,2,0,1);
                    do {
                        uVar2 = *puVar1;
                        uVar6 = uVar2;
                        if (uVar2 != uVar5) break;
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar4) {
                            *puVar1 = uVar5 + 1;
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                } while ((uVar5 != uVar2) && (uVar5 = 0, uVar2 != 0));
            }
            if ((uVar5 + 1 | uVar5) < 0) {
                refcount_warn_saturate(puVar1,0);
            }
            if (uVar5 != 0) goto code_r0x0800a378;
        }
        else if (param_2 < *(puVar7[8] + 0x2d0)) break;
    }
    puVar7 = NULL;
code_r0x0800a378:
    up_read(param_1 + 0x90);
    return puVar7;
}


// ===== sym.nvme_host_path_error.cfi_jt @ 0x08005b80 (size 8) =====

ulong sym.nvme_host_path_error.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 0x144) = 0x370;
    *(param_1 + 0xe4) = 2;
    sym.nvme_complete_rq(param_1);
    return 0;
}


// ===== sym.nvme_cancel_request.cfi_jt @ 0x08005b88 (size 8) =====

ulong sym.nvme_cancel_request.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0xe4) != 2) {
        *(param_1 + 0x144) = 0x371;
        *(param_1 + 0x142) = *(param_1 + 0x142) | 1;
        blk_mq_complete_request();
    }
    return 1;
}


// ===== sym.nvme_fail_nonready_command.cfi_jt @ 0x08005b90 (size 8) =====

ulong sym.nvme_fail_nonready_command.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((*(param_1 + 4) - 5U < 2) || ((*(param_1 + 0xc48) & 1) != 0)) || ((*(param_2 + 0x18) & 0x2000700) != 0)) {
        *(param_2 + 0x144) = 0x370;
        *(param_2 + 0xe4) = 2;
        sym.nvme_complete_rq(param_2);
        uVar1 = 0;
    }
    else {
        uVar1 = 9;
    }
    return uVar1;
}


// ===== sym.trace_event_raw_init.cfi_jt @ 0x08005b98 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_raw_init.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.delayed_work_timer_fn.cfi_jt @ 0x08005ba0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.delayed_work_timer_fn.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.nvme_pr_preempt.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005ba8 (size 8) =====

void sym.nvme_pr_preempt.21529633b7289604a80e82acd8b43a39.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,int param_4,uint64_t param_5)

{
    int iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    int64_t aiStack_d8 [2];
    uint uStack_c8;
    uint uStack_c4;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    uint64_t uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uint uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    uint uStack_58;
    uint uStack_54;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    uint64_t uStack_30;
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_18 = *(iVar2 + 0x5e0);
    uVar4 = (param_4 - 1U) * 0x100 + 0x100;
    if (5 < param_4 - 1U) {
        uVar4 = 0;
    }
    uVar3 = 1;
    if ((param_5 & 1) != 0) {
        uVar3 = 2;
    }
    iVar2 = *(*(param_1 + 0x3f0) + 0x58);
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_38 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_30 = uVar4 | uVar3;
    _uStack_58 = CONCAT44(*(*(iVar2 + 0x40) + 0x2d0),0x11);
    uStack_70 = 0;
    uStack_68 = param_2;
    uStack_60 = param_3;
    sym.__nvme_submit_sync_cmd(*(iVar2 + 0x18),&uStack_58,0,&uStack_68);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_18) {
        return;
    }
    auVar6 = __stack_chk_fail();
    aiStack_d8[0] = auVar6._8_8_;
    *extraout_x18 = sym.nvme_pr_clear;
    pcStack_78 = sym.nvme_pr_clear;
    iVar2 = sp_el0;
    iStack_88 = *(iVar2 + 0x5e0);
    uVar4 = 9;
    if (aiStack_d8[0] != 0) {
        uVar4 = 1;
    }
    uStack_c0 = 0;
    aiStack_d8[1] = 0;
    iVar2 = *(*(auVar6._0_8_ + 0x3f0) + 0x58);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a0 = uVar4;
    _uStack_c8 = CONCAT44(*(*(iVar2 + 0x40) + 0x2d0),0x15);
    puStack_80 = &stack0xfffffffffffffff0;
    sym.__nvme_submit_sync_cmd(*(iVar2 + 0x18),&uStack_c8,0,aiStack_d8);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_88) {
        return;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18_00 = sym.nvme_disable_ctrl;
    *(iVar2 + 0x598) = *(iVar2 + 0x598) & 0xffff3ffe;
    pcVar5 = *(*(iVar2 + 0x40) + 0x20);
    __cfi_slowpath_diag(0x5fd0dd7266111d21,pcVar5,0x8002710);
    iVar1 = (*pcVar5)(iVar2,0x14,*(iVar2 + 0x598));
    if (iVar1 == 0) {
        if ((*(iVar2 + 0x610) >> 3 & 1) != 0) {
            msleep(0x8fc);
        }
        sym.nvme_wait_ready(iVar2,*(iVar2 + 0x5a8),0);
    }
    return;
}


// ===== sym.nvme_command_effects.cfi_jt @ 0x08005bb0 (size 8) =====

uint32_t sym.nvme_command_effects.cfi_jt(int64_t param_1,int64_t param_2,uint8_t param_3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 0) {
        uVar3 = 0;
        if (*(param_1 + 0xa18) != 0) {
            uVar3 = *(*(param_1 + 0xa18) + param_3 * 4);
        }
        uVar2 = 0x30002;
        if (param_3 != 0x84) {
            uVar2 = 0;
        }
        uVar1 = 0x30006;
        if (param_3 != 0x80) {
            uVar1 = uVar2;
        }
        uVar3 = uVar3 | uVar1;
    }
    else {
        iVar4 = *(*(param_2 + 0x40) + 800);
        if (((iVar4 != 0) && (3 < *(iVar4 + param_3 * 4 + 0x400))) && ((obj.nvme_command_effects.__print_once & 1) == 0)
           ) {
            obj.nvme_command_effects.__print_once = 0x1;
            _dev_warn(*(param_1 + 0x460),"IO command:%02x has unhandled effects:%08x\n",param_3);
        }
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.perf_trace_nvme_complete_rq.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005bb8 (size 8) =====

//WARNING: Removing unreachable block (ram,0x0800686c)
//WARNING: Removing unreachable block (ram,0x08006ab8)

void sym.perf_trace_nvme_complete_rq.21529633b7289604a80e82acd8b43a39.cfi_jt
               (int64_t param_1,int64_t *param_2,uint32_t *param_3,ushort param_4)

{
    int64_t *piVar1;
    ulong in_tmp_ldXn;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t *piVar4;
    ushort uVar5;
    ushort uVar6;
    uint32_t *puVar8;
    ushort uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    ulong uVar12;
    int64_t iVar13;
    ulong uVar14;
    ulong uVar15;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint32_t uVar16;
    uint64_t unaff_x30;
    uchar auVar17 [16];
    uchar auVar18 [16];
    uchar auStack_200 [12];
    uint uStack_1f4;
    int64_t iStack_1f0;
    int64_t iStack_1e8;
    ulong **ppuStack_1e0;
    code *pcStack_1d8;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    int64_t iStack_168;
    ulong **ppuStack_160;
    ulong uStack_158;
    code *pcStack_150;
    int64_t iStack_140;
    int64_t *piStack_138;
    uint64_t uStack_130;
    int64_t iStack_128;
    uchar auStack_120 [12];
    uint uStack_114;
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
    uint uVar7;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    iStack_40 = 0;
    uStack_44 = 0;
    iVar2 = tpidr_el1;
    piVar1 = iVar2 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (*piVar1 != 0)) {
        param_3 = &uStack_44;
        iVar2 = perf_trace_buf_alloc(0x4c,&iStack_40);
        uVar3 = _trace_event_reg;
        if (iVar2 != 0) {
            *(iStack_40 + 0xe8) = &stack0xffffffffffffffd0;
            uVar10 = -1L << (uVar3 & 0x3f);
            uVar3 = (~uVar10 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar3 = uVar10 | unaff_x30;
            }
            *(iStack_40 + 0xf8) = auStack_50;
            *(iStack_40 + 0x100) = uVar3;
            *(iStack_40 + 0x108) = 5;
            *(iVar2 + 0x28) = *(param_2[0x29] + 0x68);
            uVar16 = 0;
            if (*(*param_2 + 0x58) != 0) {
                uVar16 = *(param_2[2] + 0x1cc) + 1U & 0xffff;
            }
            *(iVar2 + 0x2c) = uVar16;
            *(iVar2 + 0x30) = *(param_2[0x26] + 2);
            *(iVar2 + 0x38) = param_2[0x27];
            *(iVar2 + 0x40) = *(param_2 + 0x141);
            *(iVar2 + 0x41) = *(param_2 + 0x142);
            *(iVar2 + 0x42) = *(param_2 + 0x144);
            iVar11 = param_2[0x14];
            if (iVar11 == 0) {
                *(iVar2 + 0x18) = 0;
                *(iVar2 + 0x20) = 0;
                *(iVar2 + 8) = 0;
                *(iVar2 + 0x10) = 0;
            }
            else {
                uVar14 = *(iVar11 + 0x24);
                uVar15 = *(iVar11 + 0x14);
                uVar12 = *(iVar11 + 0xc);
                *(iVar2 + 0x18) = *(iVar11 + 0x1c);
                *(iVar2 + 0x20) = uVar14;
                *(iVar2 + 8) = uVar12;
                *(iVar2 + 0x10) = uVar15;
            }
            param_3 = uStack_44;
            perf_trace_run_bpf_submit(iVar2,0x4c,param_3,param_1,1,iStack_40,piVar1,0);
            param_4 = param_1;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return;
    }
    auVar17 = __stack_chk_fail();
    iVar11 = auVar17._0_8_;
    uVar12 = tpidr_el2;
    *extraout_x18 = 0x80066cc;
    uStack_78 = 0x80066cc;
    iVar2 = sp_el0;
    iStack_88 = *(iVar2 + 0x5e0);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uVar16 = *(iVar11 + 0x48);
    puStack_80 = &stack0xffffffffffffffd0;
    if ((uVar16 >> 8 & 1) == 0) {
        puVar8 = param_3;
        if ((uVar16 >> 7 & 1) != 0) {
            puVar8 = NULL;
            param_4 = 0;
            event_triggers_call(iVar11,0);
        }
        if (((uVar16 >> 6 & 1) == 0) &&
           (((uVar16 >> 9 & 1) == 0 || (uVar3 = trace_event_ignore_this_pid(iVar11), (uVar3 & 1) == 0))))
        goto code_r0x0800674c;
    }
    else {
code_r0x0800674c:
        puVar8 = 0x10;
        iVar2 = trace_event_buffer_reserve(&uStack_b8,iVar11);
        if (iVar2 != 0) {
            *(iVar2 + 8) = *(auVar17._8_8_ + 0x68);
            *(iVar2 + 0xc) = param_3;
            trace_event_buffer_commit(&uStack_b8);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_88) {
        return;
    }
    auVar17 = __stack_chk_fail();
    iVar11 = auVar17._0_8_;
    *extraout_x18_00 = sym.perf_trace_nvme_async_event;
    pcStack_f8 = sym.perf_trace_nvme_async_event;
    iVar2 = sp_el0;
    iStack_108 = *(iVar2 + 0x5e0);
    uVar3 = puVar8 & 0xffffffff;
    iStack_110 = 0;
    uStack_114 = 0;
    iVar2 = tpidr_el1;
    piVar1 = iVar2 + *(iVar11 + 0x78);
    ppuStack_100 = &puStack_80;
    if ((*(iVar11 + 0x80) != 0) || (uVar7 = puVar8, *piVar1 != 0)) {
        uVar7 = SUB84(&uStack_114,0);
        iVar2 = perf_trace_buf_alloc(0x14,&iStack_110);
        uVar10 = _trace_event_reg;
        if (iVar2 != 0) {
            *(iStack_110 + 0xe8) = &ppuStack_100;
            *(iStack_110 + 0xf8) = auStack_120;
            *(iStack_110 + 0x100) = ~(-1L << (uVar10 & 0x3f)) & 0x80067a4;
            *(iStack_110 + 0x108) = 5;
            *(iVar2 + 8) = *(auVar17._8_8_ + 0x68);
            *(iVar2 + 0xc) = puVar8;
            iVar13 = iVar11;
            uVar7 = uStack_114;
            perf_trace_run_bpf_submit(iVar2,0x14,uStack_114,iVar11,1,iStack_110,piVar1,0);
            param_4 = iVar13;
        }
    }
    uVar5 = uVar7;
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_108) {
        return;
    }
    auVar18 = __stack_chk_fail();
    piVar4 = auVar18._8_8_;
    iVar13 = auVar18._0_8_;
    uVar12 = tpidr_el2;
    *extraout_x18_01 = 0x80068c4;
    uStack_158 = 0x80068c4;
    pcStack_150 = sym.perf_trace_nvme_async_event;
    iVar2 = sp_el0;
    iStack_168 = *(iVar2 + 0x5e0);
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    uVar16 = *(iVar13 + 0x48);
    ppuStack_160 = &ppuStack_100;
    piStack_138 = piVar1;
    uStack_130 = uVar3;
    uVar9 = param_4;
    if ((uVar16 >> 8 & 1) == 0) {
        uVar6 = uVar5;
        if ((uVar16 >> 7 & 1) != 0) {
            uVar6 = 0;
            uVar9 = 0;
            iStack_140 = auVar17._8_8_;
            iStack_128 = iVar11;
            event_triggers_call(iVar13,0);
            auVar17._8_8_ = iStack_140;
            auVar17._0_8_ = iStack_128;
        }
        iStack_140 = auVar17._8_8_;
        iStack_128 = auVar17._0_8_;
        if ((uVar16 >> 6 & 1) != 0) goto code_r0x080069cc;
        if ((uVar16 >> 9 & 1) != 0) {
            uVar3 = trace_event_ignore_this_pid(iVar13);
            auVar17._8_8_ = iStack_140;
            auVar17._0_8_ = iStack_128;
            if ((uVar3 & 1) != 0) goto code_r0x080069cc;
        }
    }
    iStack_140 = auVar17._8_8_;
    iStack_128 = auVar17._0_8_;
    uVar6 = 0x34;
    iVar2 = trace_event_buffer_reserve(&uStack_198,iVar13);
    auVar17._8_8_ = iStack_140;
    auVar17._0_8_ = iStack_128;
    if (iVar2 != 0) {
        *(iVar2 + 8) = *(piVar4[0x29] + 0x68);
        iVar11 = piVar4[0x14];
        if (iVar11 == 0) {
            *(iVar2 + 0x1c) = 0;
            *(iVar2 + 0x24) = 0;
            *(iVar2 + 0xc) = 0;
            *(iVar2 + 0x14) = 0;
        }
        else {
            uVar14 = *(iVar11 + 0x24);
            uVar15 = *(iVar11 + 0x14);
            uVar12 = *(iVar11 + 0xc);
            *(iVar2 + 0x1c) = *(iVar11 + 0x1c);
            *(iVar2 + 0x24) = uVar14;
            *(iVar2 + 0xc) = uVar12;
            *(iVar2 + 0x14) = uVar15;
        }
        uVar16 = 0;
        if (*(*piVar4 + 0x58) != 0) {
            uVar16 = *(piVar4[2] + 0x1cc) + 1U & 0xffff;
        }
        *(iVar2 + 0x2c) = uVar16;
        *(iVar2 + 0x30) = uVar5;
        *(iVar2 + 0x32) = param_4;
        trace_event_buffer_commit(&uStack_198);
        auVar17._8_8_ = iStack_140;
        auVar17._0_8_ = iStack_128;
    }
code_r0x080069cc:
    iStack_140 = auVar17._8_8_;
    iStack_128 = auVar17._0_8_;
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_168) {
        return;
    }
    auVar17 = __stack_chk_fail();
    piVar4 = auVar17._8_8_;
    iVar11 = auVar17._0_8_;
    *extraout_x18_02 = sym.perf_trace_nvme_sq;
    pcStack_1d8 = sym.perf_trace_nvme_sq;
    iVar2 = sp_el0;
    iStack_1e8 = *(iVar2 + 0x5e0);
    iStack_1f0 = 0;
    uStack_1f4 = 0;
    iVar2 = tpidr_el1;
    piVar1 = iVar2 + *(iVar11 + 0x78);
    ppuStack_1e0 = &ppuStack_160;
    if (((*(iVar11 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar2 = perf_trace_buf_alloc(0x34,&iStack_1f0,&uStack_1f4), uVar3 = _trace_event_reg, iVar2 != 0)) {
        *(iStack_1f0 + 0xe8) = &ppuStack_1e0;
        *(iStack_1f0 + 0xf8) = auStack_200;
        *(iStack_1f0 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8006a04;
        *(iStack_1f0 + 0x108) = 5;
        *(iVar2 + 8) = *(piVar4[0x29] + 0x68);
        iVar13 = piVar4[0x14];
        if (iVar13 == 0) {
            *(iVar2 + 0x1c) = 0;
            *(iVar2 + 0x24) = 0;
            *(iVar2 + 0xc) = 0;
            *(iVar2 + 0x14) = 0;
        }
        else {
            uVar14 = *(iVar13 + 0x24);
            uVar15 = *(iVar13 + 0x14);
            uVar12 = *(iVar13 + 0xc);
            *(iVar2 + 0x1c) = *(iVar13 + 0x1c);
            *(iVar2 + 0x24) = uVar14;
            *(iVar2 + 0xc) = uVar12;
            *(iVar2 + 0x14) = uVar15;
        }
        uVar16 = 0;
        if (*(*piVar4 + 0x58) != 0) {
            uVar16 = *(piVar4[2] + 0x1cc) + 1U & 0xffff;
        }
        *(iVar2 + 0x2c) = uVar16;
        *(iVar2 + 0x30) = uVar6;
        *(iVar2 + 0x32) = uVar9;
        perf_trace_run_bpf_submit(iVar2,0x34,uStack_1f4,iVar11,1,iStack_1f0,piVar1,0);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_1e8) {
        __stack_chk_fail();
        uVar12 = tpidr_el2;
        *extraout_x18_03 = 0x8006b84;
        bpf_trace_run2(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_nvme_complete_rq.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005bc0 (size 8) =====

//WARNING: Removing unreachable block (ram,0x0800686c)
//WARNING: Removing unreachable block (ram,0x080065e0)
//WARNING: Removing unreachable block (ram,0x08006ab8)

void sym.trace_event_raw_event_nvme_complete_rq.21529633b7289604a80e82acd8b43a39.cfi_jt
               (int64_t param_1,int64_t *param_2,uint32_t *param_3,ushort param_4)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong in_tmp_ldXn;
    uint64_t uVar3;
    int64_t iVar4;
    ushort uVar6;
    ushort uVar7;
    uint32_t *puVar9;
    ushort uVar10;
    int64_t iVar11;
    ulong uVar12;
    int64_t iVar13;
    ulong uVar14;
    ulong uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    uint32_t uVar16;
    ulong unaff_x30;
    uchar auVar17 [16];
    uchar auVar18 [16];
    uchar auStack_270 [12];
    uint uStack_264;
    int64_t iStack_260;
    int64_t iStack_258;
    ulong **ppuStack_250;
    code *pcStack_248;
    ulong uStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    int64_t iStack_1d8;
    ulong **ppuStack_1d0;
    ulong uStack_1c8;
    code *pcStack_1c0;
    int64_t iStack_1b0;
    int64_t *piStack_1a8;
    uint64_t uStack_1a0;
    int64_t iStack_198;
    uchar auStack_190 [12];
    uint uStack_184;
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
    int64_t *piStack_d0;
    int64_t iStack_c8;
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
    int64_t *piVar5;
    uint uVar8;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar16 = *(param_1 + 0x48);
    if ((uVar16 >> 8 & 1) == 0) {
        if ((uVar16 >> 7 & 1) != 0) {
            param_3 = NULL;
            param_4 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar16 >> 6 & 1) == 0) &&
           (((uVar16 >> 9 & 1) == 0 || (uVar3 = trace_event_ignore_this_pid(param_1), (uVar3 & 1) == 0))))
        goto code_r0x08006460;
    }
    else {
code_r0x08006460:
        param_3 = 0x48;
        iVar4 = trace_event_buffer_reserve(&uStack_68,param_1);
        if (iVar4 != 0) {
            *(iVar4 + 0x28) = *(param_2[0x29] + 0x68);
            uVar16 = 0;
            if (*(*param_2 + 0x58) != 0) {
                uVar16 = *(param_2[2] + 0x1cc) + 1U & 0xffff;
            }
            *(iVar4 + 0x2c) = uVar16;
            *(iVar4 + 0x30) = *(param_2[0x26] + 2);
            *(iVar4 + 0x38) = param_2[0x27];
            *(iVar4 + 0x40) = *(param_2 + 0x141);
            *(iVar4 + 0x41) = *(param_2 + 0x142);
            *(iVar4 + 0x42) = *(param_2 + 0x144);
            iVar11 = param_2[0x14];
            if (iVar11 == 0) {
                *(iVar4 + 0x18) = 0;
                *(iVar4 + 0x20) = 0;
                *(iVar4 + 8) = 0;
                *(iVar4 + 0x10) = 0;
            }
            else {
                uVar14 = *(iVar11 + 0x24);
                uVar15 = *(iVar11 + 0x14);
                uVar12 = *(iVar11 + 0xc);
                *(iVar4 + 0x18) = *(iVar11 + 0x1c);
                *(iVar4 + 0x20) = uVar14;
                *(iVar4 + 8) = uVar12;
                *(iVar4 + 0x10) = uVar15;
            }
            trace_event_buffer_commit(&uStack_68);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    auVar17 = __stack_chk_fail();
    piVar5 = auVar17._8_8_;
    iVar11 = auVar17._0_8_;
    *extraout_x18 = sym.perf_trace_nvme_complete_rq;
    pcStack_98 = sym.perf_trace_nvme_complete_rq;
    iVar4 = sp_el0;
    iStack_a8 = *(iVar4 + 0x5e0);
    iStack_b0 = 0;
    uStack_b4 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar11 + 0x78);
    puStack_a0 = &stack0xffffffffffffffd0;
    if ((*(iVar11 + 0x80) != 0) || (*piVar1 != 0)) {
        param_3 = &uStack_b4;
        iVar4 = perf_trace_buf_alloc(0x4c,&iStack_b0);
        uVar3 = _trace_event_reg;
        if (iVar4 != 0) {
            *(iStack_b0 + 0xe8) = &puStack_a0;
            *(iStack_b0 + 0xf8) = auStack_c0;
            *(iStack_b0 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8006538;
            *(iStack_b0 + 0x108) = 5;
            *(iVar4 + 0x28) = *(piVar5[0x29] + 0x68);
            uVar16 = 0;
            if (*(*piVar5 + 0x58) != 0) {
                uVar16 = *(piVar5[2] + 0x1cc) + 1U & 0xffff;
            }
            *(iVar4 + 0x2c) = uVar16;
            *(iVar4 + 0x30) = *(piVar5[0x26] + 2);
            *(iVar4 + 0x38) = piVar5[0x27];
            *(iVar4 + 0x40) = *(piVar5 + 0x141);
            *(iVar4 + 0x41) = *(piVar5 + 0x142);
            *(iVar4 + 0x42) = *(piVar5 + 0x144);
            iVar13 = piVar5[0x14];
            if (iVar13 == 0) {
                *(iVar4 + 0x18) = 0;
                *(iVar4 + 0x20) = 0;
                *(iVar4 + 8) = 0;
                *(iVar4 + 0x10) = 0;
            }
            else {
                uVar14 = *(iVar13 + 0x24);
                uVar15 = *(iVar13 + 0x14);
                uVar12 = *(iVar13 + 0xc);
                *(iVar4 + 0x18) = *(iVar13 + 0x1c);
                *(iVar4 + 0x20) = uVar14;
                *(iVar4 + 8) = uVar12;
                *(iVar4 + 0x10) = uVar15;
            }
            param_3 = uStack_b4;
            iVar13 = iVar11;
            perf_trace_run_bpf_submit(iVar4,0x4c,param_3,iVar11,1,iStack_b0,piVar1,0);
            param_4 = iVar13;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_a8) {
        return;
    }
    auVar18 = __stack_chk_fail();
    iVar13 = auVar18._0_8_;
    uVar12 = tpidr_el2;
    *extraout_x18_00 = 0x80066cc;
    uStack_e8 = 0x80066cc;
    pcStack_e0 = sym.perf_trace_nvme_complete_rq;
    iVar4 = sp_el0;
    iStack_f8 = *(iVar4 + 0x5e0);
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uVar16 = *(iVar13 + 0x48);
    ppuStack_f0 = &puStack_a0;
    piStack_d0 = piVar1;
    if ((uVar16 >> 8 & 1) == 0) {
        puVar9 = param_3;
        if ((uVar16 >> 7 & 1) != 0) {
            puVar9 = NULL;
            param_4 = 0;
            piStack_d8 = piVar5;
            iStack_c8 = iVar11;
            event_triggers_call(iVar13,0);
            auVar17._8_8_ = piStack_d8;
            auVar17._0_8_ = iStack_c8;
        }
        piStack_d8 = auVar17._8_8_;
        iStack_c8 = auVar17._0_8_;
        if (((uVar16 >> 6 & 1) == 0) &&
           (((uVar16 >> 9 & 1) == 0 ||
            (uVar3 = trace_event_ignore_this_pid(iVar13), auVar17._8_8_ = piStack_d8, auVar17._0_8_ = iStack_c8,
            (uVar3 & 1) == 0)))) goto code_r0x0800674c;
    }
    else {
code_r0x0800674c:
        piStack_d8 = auVar17._8_8_;
        iStack_c8 = auVar17._0_8_;
        puVar9 = 0x10;
        iVar4 = trace_event_buffer_reserve(&uStack_128,iVar13);
        auVar17._8_8_ = piStack_d8;
        auVar17._0_8_ = iStack_c8;
        if (iVar4 != 0) {
            *(iVar4 + 8) = *(auVar18._8_8_ + 0x68);
            *(iVar4 + 0xc) = param_3;
            trace_event_buffer_commit(&uStack_128);
            auVar17._8_8_ = piStack_d8;
            auVar17._0_8_ = iStack_c8;
        }
    }
    piStack_d8 = auVar17._8_8_;
    iStack_c8 = auVar17._0_8_;
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_f8) {
        return;
    }
    auVar18 = __stack_chk_fail();
    iVar11 = auVar18._0_8_;
    *extraout_x18_01 = sym.perf_trace_nvme_async_event;
    pcStack_168 = sym.perf_trace_nvme_async_event;
    iVar4 = sp_el0;
    iStack_178 = *(iVar4 + 0x5e0);
    uVar3 = puVar9 & 0xffffffff;
    iStack_180 = 0;
    uStack_184 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar11 + 0x78);
    ppuStack_170 = &ppuStack_f0;
    if ((*(iVar11 + 0x80) != 0) || (uVar8 = puVar9, *piVar1 != 0)) {
        uVar8 = SUB84(&uStack_184,0);
        iVar4 = perf_trace_buf_alloc(0x14,&iStack_180);
        uVar2 = _trace_event_reg;
        if (iVar4 != 0) {
            *(iStack_180 + 0xe8) = &ppuStack_170;
            *(iStack_180 + 0xf8) = auStack_190;
            *(iStack_180 + 0x100) = ~(-1L << (uVar2 & 0x3f)) & 0x80067a4;
            *(iStack_180 + 0x108) = 5;
            *(iVar4 + 8) = *(auVar18._8_8_ + 0x68);
            *(iVar4 + 0xc) = puVar9;
            iVar13 = iVar11;
            uVar8 = uStack_184;
            perf_trace_run_bpf_submit(iVar4,0x14,uStack_184,iVar11,1,iStack_180,piVar1,0);
            param_4 = iVar13;
        }
    }
    uVar6 = uVar8;
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_178) {
        return;
    }
    auVar17 = __stack_chk_fail();
    piVar5 = auVar17._8_8_;
    iVar13 = auVar17._0_8_;
    uVar12 = tpidr_el2;
    *extraout_x18_02 = 0x80068c4;
    uStack_1c8 = 0x80068c4;
    pcStack_1c0 = sym.perf_trace_nvme_async_event;
    iVar4 = sp_el0;
    iStack_1d8 = *(iVar4 + 0x5e0);
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    uVar16 = *(iVar13 + 0x48);
    ppuStack_1d0 = &ppuStack_170;
    piStack_1a8 = piVar1;
    uStack_1a0 = uVar3;
    uVar10 = param_4;
    if ((uVar16 >> 8 & 1) == 0) {
        uVar7 = uVar6;
        if ((uVar16 >> 7 & 1) != 0) {
            uVar7 = 0;
            uVar10 = 0;
            iStack_1b0 = auVar18._8_8_;
            iStack_198 = iVar11;
            event_triggers_call(iVar13,0);
            auVar18._8_8_ = iStack_1b0;
            auVar18._0_8_ = iStack_198;
        }
        iStack_1b0 = auVar18._8_8_;
        iStack_198 = auVar18._0_8_;
        if ((uVar16 >> 6 & 1) != 0) goto code_r0x080069cc;
        if ((uVar16 >> 9 & 1) != 0) {
            uVar3 = trace_event_ignore_this_pid(iVar13);
            auVar18._8_8_ = iStack_1b0;
            auVar18._0_8_ = iStack_198;
            if ((uVar3 & 1) != 0) goto code_r0x080069cc;
        }
    }
    iStack_1b0 = auVar18._8_8_;
    iStack_198 = auVar18._0_8_;
    uVar7 = 0x34;
    iVar4 = trace_event_buffer_reserve(&uStack_208,iVar13);
    auVar18._8_8_ = iStack_1b0;
    auVar18._0_8_ = iStack_198;
    if (iVar4 != 0) {
        *(iVar4 + 8) = *(piVar5[0x29] + 0x68);
        iVar11 = piVar5[0x14];
        if (iVar11 == 0) {
            *(iVar4 + 0x1c) = 0;
            *(iVar4 + 0x24) = 0;
            *(iVar4 + 0xc) = 0;
            *(iVar4 + 0x14) = 0;
        }
        else {
            uVar14 = *(iVar11 + 0x24);
            uVar15 = *(iVar11 + 0x14);
            uVar12 = *(iVar11 + 0xc);
            *(iVar4 + 0x1c) = *(iVar11 + 0x1c);
            *(iVar4 + 0x24) = uVar14;
            *(iVar4 + 0xc) = uVar12;
            *(iVar4 + 0x14) = uVar15;
        }
        uVar16 = 0;
        if (*(*piVar5 + 0x58) != 0) {
            uVar16 = *(piVar5[2] + 0x1cc) + 1U & 0xffff;
        }
        *(iVar4 + 0x2c) = uVar16;
        *(iVar4 + 0x30) = uVar6;
        *(iVar4 + 0x32) = param_4;
        trace_event_buffer_commit(&uStack_208);
        auVar18._8_8_ = iStack_1b0;
        auVar18._0_8_ = iStack_198;
    }
code_r0x080069cc:
    iStack_1b0 = auVar18._8_8_;
    iStack_198 = auVar18._0_8_;
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_1d8) {
        return;
    }
    auVar17 = __stack_chk_fail();
    piVar5 = auVar17._8_8_;
    iVar11 = auVar17._0_8_;
    *extraout_x18_03 = sym.perf_trace_nvme_sq;
    pcStack_248 = sym.perf_trace_nvme_sq;
    iVar4 = sp_el0;
    iStack_258 = *(iVar4 + 0x5e0);
    iStack_260 = 0;
    uStack_264 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar11 + 0x78);
    ppuStack_250 = &ppuStack_1d0;
    if (((*(iVar11 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar4 = perf_trace_buf_alloc(0x34,&iStack_260,&uStack_264), uVar3 = _trace_event_reg, iVar4 != 0)) {
        *(iStack_260 + 0xe8) = &ppuStack_250;
        *(iStack_260 + 0xf8) = auStack_270;
        *(iStack_260 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8006a04;
        *(iStack_260 + 0x108) = 5;
        *(iVar4 + 8) = *(piVar5[0x29] + 0x68);
        iVar13 = piVar5[0x14];
        if (iVar13 == 0) {
            *(iVar4 + 0x1c) = 0;
            *(iVar4 + 0x24) = 0;
            *(iVar4 + 0xc) = 0;
            *(iVar4 + 0x14) = 0;
        }
        else {
            uVar14 = *(iVar13 + 0x24);
            uVar15 = *(iVar13 + 0x14);
            uVar12 = *(iVar13 + 0xc);
            *(iVar4 + 0x1c) = *(iVar13 + 0x1c);
            *(iVar4 + 0x24) = uVar14;
            *(iVar4 + 0xc) = uVar12;
            *(iVar4 + 0x14) = uVar15;
        }
        uVar16 = 0;
        if (*(*piVar5 + 0x58) != 0) {
            uVar16 = *(piVar5[2] + 0x1cc) + 1U & 0xffff;
        }
        *(iVar4 + 0x2c) = uVar16;
        *(iVar4 + 0x30) = uVar7;
        *(iVar4 + 0x32) = uVar10;
        perf_trace_run_bpf_submit(iVar4,0x34,uStack_264,iVar11,1,iStack_260,piVar1,0);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_258) {
        __stack_chk_fail();
        uVar12 = tpidr_el2;
        *extraout_x18_04 = 0x8006b84;
        bpf_trace_run2(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_nvme_complete_rq.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005bc8 (size 8) =====

void sym.__bpf_trace_nvme_complete_rq.21529633b7289604a80e82acd8b43a39.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run1();
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08005bd0 (size 8) =====

uint64_t sym.init_module.cfi_jt(void)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = alloc_workqueue("nvme-wq",0x4a,0);
    if (_segment.ehdr == 0) {
        uVar2 = 0xfffffff4;
        _segment.ehdr = 0;
    }
    else {
        _segment.ehdr = alloc_workqueue("nvme-reset-wq",0x4a,0);
        if (_segment.ehdr == 0) {
            uVar2 = 0xfffffff4;
            _segment.ehdr = 0;
        }
        else {
            _segment.ehdr = alloc_workqueue("nvme-delete-wq",0x4a,0);
            if (_segment.ehdr == 0) {
                uVar2 = 0xfffffff4;
            }
            else {
                uVar1 = alloc_chrdev_region(obj.nvme_init_ctrl.__key,0,0x100000,"nvme");
                if (uVar1 < 0) {
                    uVar2 = uVar1;
                }
                else {
                    uVar2 = __class_create(obj.__this_module,"nvme",obj.nvme_core_init.__key);
                    _segment.ehdr = uVar2;
                    if (uVar2 < 0xfffffffffffff001) {
                        *(uVar2 + 0x28) = sym.nvme_class_uevent.21529633b7289604a80e82acd8b43a39.cfi_jt;
                        _segment.ehdr = __class_create(obj.__this_module,"nvme-subsystem",obj.nvme_core_init.__key);
                        if (_segment.ehdr < 0xfffffffffffff001) {
                            uVar1 = alloc_chrdev_region(reloc.__traceiter_nvme_sq.cfi_jt,0,0x100000,"nvme-generic");
                            if (uVar1 < 0) {
                                uVar2 = uVar1;
                            }
                            else {
                                uVar2 = __class_create(obj.__this_module,"nvme-generic",obj.nvme_core_init.__key);
                                _segment.ehdr = uVar2;
                                if (uVar2 < 0xfffffffffffff001) {
                                    uVar2 = 0;
                                    goto code_r0x080110d8;
                                }
                                unregister_chrdev_region(uVar2 & 0xffffffff,0x100000);
                            }
                            class_destroy(_segment.ehdr);
                        }
                        else {
                            uVar2 = _segment.ehdr & 0xffffffff;
                        }
                        class_destroy(_segment.ehdr);
                    }
                    unregister_chrdev_region(_segment.ehdr & 0xffffffff,0x100000);
                }
                destroy_workqueue(_segment.ehdr);
            }
            destroy_workqueue(_segment.ehdr);
        }
        destroy_workqueue(_segment.ehdr);
    }
code_r0x080110d8:
    return uVar2 & 0xffffffff;
}


// ===== sym.nvme_release.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005bd8 (size 8) =====

void sym.nvme_release.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x58);
    module_put(*(*(*(arg1 + 0x10) + 0x40) + 8));
    sym.nvme_put_ns(arg1);
    return;
}


// ===== sym.nvme_ctrl_loss_tmo_store.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005be0 (size 8) =====

int64_t sym.nvme_ctrl_loss_tmo_store.21529633b7289604a80e82acd8b43a39.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    int iVar2;
    int *piVar3;
    uint32_t uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    ulong unaff_x30;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    piVar3 = &iStack_2c;
    iStack_2c = 0;
    iVar5 = *(*(param_1 + 0x98) + 0xc50);
    iVar2 = kstrtoint(param_3,10,piVar3);
    if (iVar2 == 0) {
        if (iStack_2c < 0) {
            uVar4 = 0xffffffff;
        }
        else {
            uVar1 = *(iVar5 + 0x44);
            uVar4 = 0;
            if (uVar1 != 0) {
                uVar4 = ((iStack_2c + uVar1) - 1) / uVar1;
            }
        }
        *(iVar5 + 0x58) = uVar4;
    }
    else {
        param_4 = -0x16;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_28) {
        iVar5 = __stack_chk_fail();
        *extraout_x18 = sym.nvme_ctrl_reconnect_delay_show;
        iVar2 = *(*(*(iVar5 + 0x98) + 0xc50) + 0x44);
        if (iVar2 == -1) {
            iVar2 = sysfs_emit(piVar3,"off\n");
        }
        else {
            iVar2 = sysfs_emit(piVar3,0x80034b6,iVar2);
        }
        return iVar2;
    }
    return param_4;
}


// ===== sym.nvme_sysfs_rescan.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005be8 (size 8) =====

ulong sym.nvme_sysfs_rescan.21529633b7289604a80e82acd8b43a39.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x98);
    if ((*(iVar1 + 4) == 1) && (*(iVar1 + 0x70) != 0)) {
        queue_work_on(0x20,_segment.ehdr,iVar1 + 0xa30);
    }
    return param_4;
}


// ===== sym.nvme_sysfs_reset.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005bf0 (size 8) =====

ulong sym.nvme_sysfs_reset.21529633b7289604a80e82acd8b43a39.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    uint64_t uVar1;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x98);
    uVar1 = sym.nvme_change_ctrl_state(arg1,2);
    if ((uVar1 & 1) != 0) {
        uVar1 = queue_work_on(0x20,_segment.ehdr,arg1 + 0x4f0);
        if ((uVar1 & 1) != 0) {
            flush_work(arg1 + 0x4f0);
            if (*(arg1 + 4) == 1) {
                return param_4;
            }
            return 0xffffffffffffff9a;
        }
    }
    return 0xfffffffffffffff0;
}


// ===== sym.nvme_ctrl_fast_io_fail_tmo_store.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005bf8 (size 8) =====

ulong sym.nvme_ctrl_fast_io_fail_tmo_store.21529633b7289604a80e82acd8b43a39.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    ulong unaff_x30;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    iStack_2c = 0;
    iVar4 = *(*(param_1 + 0x98) + 0xc50);
    uVar3 = param_4;
    iVar1 = kstrtoint(param_3,10,&iStack_2c);
    if (iVar1 == 0) {
        iVar1 = iStack_2c;
        if (iStack_2c < 0) {
            iVar1 = -1;
        }
        *(iVar4 + 0x6c) = iVar1;
    }
    else {
        param_4 = 0xffffffffffffffea;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_28) {
        iVar4 = __stack_chk_fail();
        *extraout_x18 = sym.nvme_sysfs_reset;
        iVar4 = *(iVar4 + 0x98);
        uVar2 = sym.nvme_change_ctrl_state(iVar4,2);
        if ((uVar2 & 1) != 0) {
            uVar2 = queue_work_on(0x20,_segment.ehdr,iVar4 + 0x4f0);
            if ((uVar2 & 1) != 0) {
                flush_work(iVar4 + 0x4f0);
                if (*(iVar4 + 4) == 1) {
                    return uVar3;
                }
                return 0xffffffffffffff9a;
            }
        }
        return 0xfffffffffffffff0;
    }
    return param_4;
}


// ===== sym.nvme_sysfs_delete.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005c00 (size 8) =====

ulong sym.nvme_sysfs_delete.21529633b7289604a80e82acd8b43a39.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    uint64_t uVar1;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x98);
    uVar1 = device_remove_file_self();
    if ((uVar1 & 1) != 0) {
        get_device(*(arg1 + 0x460));
        uVar1 = sym.nvme_change_ctrl_state(arg1,4);
        if ((uVar1 & 1) != 0) {
            sym.nvme_do_delete_ctrl(arg1);
        }
        put_device(*(arg1 + 0x460));
    }
    return param_4;
}


// ===== sym.nvme_ctrl_reconnect_delay_store.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005c08 (size 8) =====

int64_t sym.nvme_ctrl_reconnect_delay_store.21529633b7289604a80e82acd8b43a39.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    uint *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    puVar2 = &uStack_2c;
    iVar3 = *(param_1 + 0x98);
    uStack_2c = 0;
    iVar1 = kstrtouint(param_3,10,puVar2);
    if (iVar1 == 0) {
        *(*(iVar3 + 0xc50) + 0x44) = uStack_2c;
    }
    else {
        param_4 = iVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.nvme_ctrl_fast_io_fail_tmo_show;
    iVar1 = *(*(*(iVar3 + 0x98) + 0xc50) + 0x6c);
    if (iVar1 == -1) {
        iVar1 = sysfs_emit(puVar2,"off\n");
    }
    else {
        iVar1 = sysfs_emit(puVar2,0x80034b6,iVar1);
    }
    return iVar1;
}


// ===== sym.nvme_pr_clear.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005c10 (size 8) =====

void sym.nvme_pr_clear.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar4;
    ulong unaff_x30;
    int64_t aiStack_68 [2];
    uint uStack_58;
    uint uStack_54;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    uint64_t uStack_30;
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_18 = *(iVar2 + 0x5e0);
    uVar3 = 9;
    if (param_2 != 0) {
        uVar3 = 1;
    }
    uStack_50 = 0;
    aiStack_68[1] = 0;
    iVar2 = *(*(param_1 + 0x3f0) + 0x58);
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_38 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_30 = uVar3;
    _uStack_58 = CONCAT44(*(*(iVar2 + 0x40) + 0x2d0),0x15);
    aiStack_68[0] = param_2;
    sym.__nvme_submit_sync_cmd(*(iVar2 + 0x18),&uStack_58,0,aiStack_68);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_18) {
        return;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.nvme_disable_ctrl;
    *(iVar2 + 0x598) = *(iVar2 + 0x598) & 0xffff3ffe;
    pcVar4 = *(*(iVar2 + 0x40) + 0x20);
    __cfi_slowpath_diag(0x5fd0dd7266111d21,pcVar4,0x8002710);
    iVar1 = (*pcVar4)(iVar2,0x14,*(iVar2 + 0x598));
    if (iVar1 == 0) {
        if ((*(iVar2 + 0x610) >> 3 & 1) != 0) {
            msleep(0x8fc);
        }
        sym.nvme_wait_ready(iVar2,*(iVar2 + 0x5a8),0);
    }
    return;
}


// ===== sym.nvme_keep_alive_end_io.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005c18 (size 8) =====

void sym.nvme_keep_alive_end_io.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1,char param_2)

{
    uchar *puVar1;
    ulong uVar2;
    ulong *in_x18;
    uchar *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar3 = *(param_1 + 0x120);
    blk_mq_free_request();
    if (param_2 == '\0') {
        puVar1 = puVar3 + 0xc;
        *puVar3 = 0;
        uVar2 = _raw_spin_lock_irqsave(puVar1);
        if ((*(puVar3 + 4) | 2) == 3) {
            _raw_spin_unlock_irqrestore(puVar1,uVar2);
            queue_delayed_work_on(0x20,_segment.ehdr,puVar3 + 0xa90,*(puVar3 + 0x604) * 0xfa >> 1);
        }
        else {
            _raw_spin_unlock_irqrestore(puVar1,uVar2);
        }
    }
    else {
        _dev_err(*(puVar3 + 0x460),"failed nvme_keep_alive_end_io error=%d\n",param_2);
    }
    return;
}


// ===== sym.__traceiter_nvme_complete_rq.cfi_jt @ 0x08005c20 (size 8) =====

ulong sym.__traceiter_nvme_complete_rq.cfi_jt(ulong param_1,ulong param_2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8011268;
    piVar1 = *0x8011268;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.nvme_shutdown_ctrl.cfi_jt @ 0x08005c28 (size 8) =====

uint64_t sym.nvme_shutdown_ctrl.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,int64_t param_6,
                   uint64_t param_7,ulong param_8)

{
    uint *puVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    ulong uVar4;
    uint uVar5;
    uint uVar6;
    char cVar7;
    char cVar8;
    int16_t iVar9;
    int16_t iVar10;
    int16_t iVar11;
    uint64_t *puVar12;
    code cVar13;
    ulong *puVar14;
    char cVar15;
    uint32_t uVar16;
    int iVar17;
    uint64_t uVar18;
    int64_t iVar19;
    int16_t *arg4;
    uint *arg1;
    int64_t iVar20;
    uint *puVar21;
    uchar *arg4_00;
    int64_t *piVar22;
    uchar uVar23;
    uchar uVar24;
    uint8_t uVar25;
    ulong uVar26;
    uint32_t uVar27;
    ulong uVar28;
    uint32_t uVar29;
    uint32_t uVar30;
    ulong uVar31;
    ulong uVar32;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar33;
    ulong *puVar34;
    ulong unaff_x30;
    uchar auVar35 [12];
    int64_t iStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    int64_t iStack_118;
    uchar **ppuStack_110;
    code *pcStack_108;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar19 = _trace_event_ignore_this_pid;
    iVar20 = sp_el0;
    iStack_48 = *(iVar20 + 0x5e0);
    uStack_4c = 0;
    iVar17 = *(param_1 + 0x600);
    *(param_1 + 0x598) = *(param_1 + 0x598) & 0xffff3fff | 0x4000;
    pcVar33 = *(*(param_1 + 0x40) + 0x20);
    __cfi_slowpath_diag(0x5fd0dd7266111d21,pcVar33,0x8002770);
    uVar23 = *(param_1 + 0x598);
    uVar18 = (*pcVar33)(param_1,0x14);
    uVar25 = param_5;
    uVar24 = param_4;
    if (uVar18 == 0) {
        puVar12 = sp_el0;
        do {
            pcVar33 = *(*(param_1 + 0x40) + 0x18);
            __cfi_slowpath_diag(0x79bc8fe92a26dc5e,pcVar33,0x8002790);
            uVar23 = SUB81(&uStack_4c,0);
            uVar18 = (*pcVar33)(param_1,0x1c);
            uVar25 = param_5;
            uVar24 = param_4;
            if (uVar18 != 0) goto code_r0x08009034;
            if ((uStack_4c & 0xc) == 8) {
                uVar18 = 0;
                goto code_r0x08009034;
            }
            msleep(100);
            uVar25 = param_5;
            uVar24 = param_4;
            if (((*puVar12 & 1) != 0) && ((*(puVar12 + 0x829) & 1) != 0)) {
                uVar18 = 0xfffffffc;
                goto code_r0x08009034;
            }
        } while (-1 < (iVar19 + iVar17 * 0xfa) - _trace_event_ignore_this_pid);
        _dev_err(*(param_1 + 0x460),"Device shutdown incomplete; abort shutdown\n");
        uVar18 = 0xffffffed;
    }
code_r0x08009034:
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_48) {
        return uVar18;
    }
    auVar35 = __stack_chk_fail(uVar18);
    *extraout_x18 = sym.nvme_get_log;
    pcStack_58 = sym.nvme_get_log;
    iVar20 = sp_el0;
    iStack_68 = *(iVar20 + 0x5e0);
    uStack_a0 = 0;
    uStack_88 = 0;
    iVar17 = (param_7 >> 2) + -1;
    uStack_a8 = CONCAT44(auVar35._8_4_,2);
    uStack_80._0_2_ = CONCAT11(uVar24,uVar23);
    iStack_70 = uVar25 << 0x18;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_80 = CONCAT24(iVar17 >> 0x10,CONCAT22(iVar17,uStack_80));
    uStack_78 = param_8;
    puStack_60 = &stack0xffffffffffffffc0;
    uVar18 = sym.__nvme_submit_sync_cmd(*(auVar35._0_8_ + 0x48),&uStack_a8,0,param_6);
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_68) {
        return uVar18;
    }
    iVar19 = __stack_chk_fail();
    *extraout_x18_00 = sym.nvme_init_ctrl_finish;
    pcStack_108 = sym.nvme_init_ctrl_finish;
    iVar20 = sp_el0;
    iStack_118 = *(iVar20 + 0x5e0);
    pcVar33 = *(*(iVar19 + 0x40) + 0x18);
    ppuStack_110 = &puStack_60;
    __cfi_slowpath_diag(0x79bc8fe92a26dc5e,pcVar33,0x80027b0);
    uVar16 = (*pcVar33)(iVar19,8,iVar19 + 0x5e4);
    if (uVar16 != 0) {
        uVar18 = uVar16;
        _dev_err(*(iVar19 + 0x460),"Reading VS failed (%d)\n",uVar18);
        goto code_r0x08009c84;
    }
    uVar26 = *(iVar19 + 0x5a8);
    uVar2 = uVar26;
    if (*(iVar19 + 0x5d6) <= (uVar26 & 0xffff)) {
        uVar2 = *(iVar19 + 0x5d6);
    }
    *(iVar19 + 0x5d6) = uVar2;
    if (0x100 < *(iVar19 + 0x5e4) >> 8) {
        *(iVar19 + 0x608) = uVar26 >> 0x24 & 1;
    }
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_150 = 0;
    uStack_158 = 6;
    uStack_130 = 1;
    arg4 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0xcc0,0x1000);
    if (arg4 == NULL) {
        iVar17 = -0xc;
code_r0x0800964c:
        _dev_err(*(iVar19 + 0x460),"Identify Controller failed (%d)\n",iVar17);
        uVar18 = 0xfffffffb;
    }
    else {
        iVar17 = sym.__nvme_submit_sync_cmd(*(iVar19 + 0x48),&uStack_158,0,arg4);
        if (iVar17 != 0) {
            kfree(arg4);
            goto code_r0x0800964c;
        }
        if (((*(arg4 + 0x105) >> 1 & 1) == 0) ||
           (uVar16 = sym.nvme_get_effects_log(iVar19,0,iVar19 + 0xa18), -1 < uVar16)) {
            if ((*(*(iVar19 + 0x40) + 0x10) & 1) == 0) {
                *(iVar19 + 0x594) = arg4[0x27];
            }
            if (*(iVar19 + 8) == '\0') {
                arg1 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0xdc0,0x538);
                if (arg1 == NULL) {
                    uVar18 = 0xfffffff4;
                    goto code_r0x08009610;
                }
                *arg1 = 0xffffffff;
                __mutex_init(arg1 + 0xec,"&subsys->lock",obj.nvme_init_subsystem.__key);
                arg1[0xe6] = 1;
                *(arg1 + 0xf8) = arg1 + 0xf8;
                *(arg1 + 0xfa) = arg1 + 0xf8;
                *(arg1 + 0xfc) = arg1 + 0xfc;
                *(arg1 + 0xfe) = arg1 + 0xfc;
                if ((*(iVar19 + 0x611) & 1) == 0) {
                    iVar20 = strnlen(arg4 + 0x180,0xdf);
                    if (0xdd < iVar20 - 1U) {
                        if (0x10200 < *(iVar19 + 0x5e4)) {
                            _dev_warn(*(iVar19 + 0x460),"missing or invalid SUBNQN field.\n");
                        }
                        goto code_r0x08009680;
                    }
                    strlcpy(arg1 + 0x100,arg4 + 0x180,0xdf);
                }
                else {
code_r0x08009680:
                    uVar16 = snprintf(arg1 + 0x100,0xdf,"nqn.2014.08.org.nvmexpress:%04x%04x",*arg4,arg4[1]);
                    if (0xdf < uVar16) goto code_r0x08009e44;
                    uVar26 = *(arg4 + 6);
                    uVar5 = *(arg4 + 10);
                    *(arg1 + uVar16 + 0x400) = *(arg4 + 2);
                    *(arg1 + uVar16 + 0x408) = uVar26;
                    *(arg1 + uVar16 + 0x410) = uVar5;
                    if (0xcb < uVar16) goto code_r0x08009e44;
                    uVar4 = *(arg4 + 0x14);
                    uVar30 = uVar16 + 0x14;
                    uVar26 = *(arg4 + 0x18);
                    uVar28 = *(arg4 + 0x1c);
                    uVar31 = *(arg4 + 0xc);
                    *(arg1 + uVar30 + 0x408) = *(arg4 + 0x10);
                    *(arg1 + uVar30 + 0x410) = uVar4;
                    *(arg1 + uVar30 + 0x418) = uVar26;
                    *(arg1 + uVar30 + 0x420) = uVar28;
                    *(arg1 + uVar30 + 0x400) = uVar31;
                    if (0xa3 < uVar16) goto code_r0x08009e44;
                    memset(arg1 + uVar16 + 0x3c + 0x400,0,0xdf - (uVar16 + 0x3c));
                }
                uVar26 = *(arg4 + 6);
                uVar5 = *(arg4 + 10);
                puVar1 = arg1 + 2;
                *(arg1 + 0x4df) = *(arg4 + 2);
                *(arg1 + 0x4e7) = uVar26;
                uVar31 = *(arg4 + 0x10);
                uVar26 = *(arg4 + 0x14);
                uVar4 = *(arg4 + 0x18);
                *(arg1 + 0x4ef) = uVar5;
                uVar28 = *(arg4 + 0x1c);
                uVar32 = *(arg4 + 0xc);
                iVar11 = arg4[0x26];
                *(arg1 + 0x503) = uVar26;
                *(arg1 + 0x50b) = uVar4;
                iVar9 = *arg4;
                *(arg1 + 0x513) = uVar28;
                *(arg1 + 0x4f3) = uVar32;
                *(arg1 + 0x4fb) = uVar31;
                iVar10 = arg4[0x108];
                *(arg1 + 0x149) = iVar9;
                uVar26 = _segment.ehdr;
                uVar5 = *(iVar19 + 0x68);
                *(arg1 + 0x523) = iVar11;
                *(arg1 + 0x526) = iVar10;
                *(arg1 + 0xca) = uVar26;
                *(arg1 + 0xce) = sym.nvme_release_subsystem.21529633b7289604a80e82acd8b43a39.cfi_jt;
                *(arg1 + 0xcc) = obj.nvme_subsys_attrs_groups;
                dev_set_name(puVar1,"nvme-subsys%d",uVar5);
                device_initialize(puVar1);
                mutex_lock(obj.nvme_subsystems_lock);
                puVar21 = sym.__nvme_find_get_subsystem(arg1 + 0x100);
                if (puVar21 == NULL) {
                    uVar16 = device_add(puVar1);
                    if (uVar16 == 0) {
                        puVar34 = arg1 + 0xe8;
                        *(arg1 + 0x14c) = 0;
                        puVar14 = *0x8002238;
                        *(arg1 + 0x14a) = 0x1000000500000000;
                        uVar18 = __list_add_valid(puVar34,puVar14,obj.nvme_subsystems);
                        if ((uVar18 & 1) != 0) {
                            *0x8002238 = puVar34;
                            *(arg1 + 0xe8) = obj.nvme_subsystems;
                            *(arg1 + 0xea) = puVar14;
                            *puVar14 = puVar34;
                        }
                        goto code_r0x080098bc;
                    }
                    uVar18 = uVar16;
                    _dev_err(*(iVar19 + 0x460),"failed to register subsystem device.\n");
                    put_device(puVar1);
                }
                else {
                    put_device(puVar1);
                    for (puVar34 = *(puVar21 + 0xf8); arg1 = puVar21, puVar21 + 0xf8 != puVar34; puVar34 = *puVar34) {
                        if (*(puVar34 + -0x56c) < 4) {
                            if (*(puVar34 + 0x24) == *(iVar19 + 0x594)) {
                                iVar20 = puVar34[-0x22][0xe];
                                if (iVar20 == 0) {
                                    iVar20 = *puVar34[-0x22];
                                }
                                _dev_err(*(iVar19 + 0x460),"Duplicate cntlid %u with %s, rejecting\n",
                                         *(puVar34 + 0x24),iVar20);
                            }
                            else {
                                if (((*(arg4 + 0x26) >> 1 & 1) != 0) ||
                                   ((*(iVar19 + 0xc50) != 0 && (*(*(iVar19 + 0xc50) + 0x48) != '\0'))))
                                goto code_r0x08009800;
                                _dev_err(*(iVar19 + 0x460),"Subsystem does not support multiple controllers\n");
                            }
                            uVar18 = 0xffffffea;
                            goto code_r0x08009e00;
                        }
                        if ((2 < *(puVar34 + -0x56c) - 4) && ((obj.nvme_state_terminal.__already_done & 1) == 0)) {
                            obj.nvme_state_terminal.__already_done = 0x1;
                            __warn_printk("Unhandled ctrl state:%d");
    //WARNING: Does not return
                            pcVar33 = SoftwareBreakpoint(0x800,0x8009860);
                            (*pcVar33)();
                        }
code_r0x08009800:
                    }
code_r0x080098bc:
                    piVar22 = *(iVar19 + 0x460);
                    iVar20 = piVar22[0xe];
                    if (iVar20 == 0) {
                        iVar20 = *piVar22;
                    }
                    uVar16 = sysfs_create_link(arg1 + 2,piVar22,iVar20);
                    if (uVar16 == 0) {
                        if (puVar21 == NULL) {
                            *arg1 = *(iVar19 + 0x68);
                        }
                        *(iVar19 + 0x568) = arg1;
                        iVar20 = iVar19 + 0x570;
                        piVar22 = *(arg1 + 0xfa);
                        uVar18 = __list_add_valid(iVar20,piVar22,arg1 + 0xf8);
                        if ((uVar18 & 1) != 0) {
                            *(arg1 + 0xfa) = iVar20;
                            *(iVar19 + 0x570) = arg1 + 0xf8;
                            *(iVar19 + 0x578) = piVar22;
                            *piVar22 = iVar20;
                        }
                        mutex_unlock(obj.nvme_subsystems_lock);
                        iVar20 = 0;
                        do {
                            if (*(obj.core_quirks + iVar20 * 0x20) == *arg4) {
                                if (iVar20 == 1) {
                                    if (*(arg4 + 0x20) == 0x3131313130333232) {
code_r0x08009948:
                                        *(iVar19 + 0x610) = *(iVar19 + 0x610) | *(iVar20 * 0x20 + 0x8004488);
                                    }
                                }
                                else {
                                    uVar26 = *(iVar20 * 0x20 + 0x8004478);
                                    uVar18 = strlen(uVar26);
                                    if (0x28 < uVar18) {
    //WARNING: Does not return
                                        pcVar33 = SoftwareBreakpoint(0x800,0x80099ec);
                                        (*pcVar33)();
                                    }
                                    iVar17 = bcmp(arg4 + 0xc,uVar26,uVar18);
                                    if (iVar17 == 0) {
                                        if (uVar18 < 0x28) {
                                            do {
                                                if (*(arg4 + uVar18 + 0x18) != ' ') goto code_r0x0800995c;
                                                uVar18 = uVar18 + 1;
                                            } while (uVar18 != 0x28);
                                        }
                                        goto code_r0x08009948;
                                    }
                                }
                            }
code_r0x0800995c:
                            iVar20 = iVar20 + 1;
                        } while (iVar20 != 4);
                        goto code_r0x0800931c;
                    }
                    uVar18 = uVar16;
                    _dev_err(*(iVar19 + 0x460),"failed to create sysfs link from subsystem.\n");
code_r0x08009e00:
                    sym.nvme_put_subsystem(arg1);
                }
                mutex_unlock(obj.nvme_subsystems_lock);
                goto code_r0x08009610;
            }
code_r0x0800931c:
            cVar13 = obj.force_apst;
            *(*(iVar19 + 0x568) + 0x51b) = *(arg4 + 0x20);
            if ((cVar13 != 0x0) && ((*(iVar19 + 0x610) >> 5 & 1) != 0)) {
                _dev_warn(*(iVar19 + 0x460),
                          "forcibly allowing all power states due to nvme_core.force_apst -- use at your own risk\n");
                *(iVar19 + 0x610) = *(iVar19 + 0x610) & 0xffffffffffffffdf;
            }
            iVar9 = arg4[0x40];
            iVar10 = arg4[0x80];
            *(iVar19 + 0x5ca) = *(arg4 + 0x41);
            iVar11 = arg4[0x87];
            *(iVar19 + 0x5c8) = iVar9;
            uVar25 = *(arg4 + 0x81);
            *(iVar19 + 0x5d0) = iVar10;
            iVar9 = arg4[0x104];
            uVar5 = *(arg4 + 0x2e);
            *(iVar19 + 0x59c) = iVar11;
            uVar6 = *(arg4 + 0x85);
            *(iVar19 + 0x5ce) = iVar9;
            *(iVar19 + 0x5f4) = uVar5;
            *(iVar19 + 0x5f0) = uVar6;
            *(iVar19 + 0x5dc) = uVar25 + 1;
            uVar25 = *(arg4 + 0x4d);
            *(iVar19 + 0x5e0) = *(arg4 + 0x20d);
            if (uVar25 == 0) {
                uVar30 = *(iVar19 + 0x5b0);
                uVar16 = 0xffffffff;
                uVar27 = 0xffffffff;
                uVar3 = uVar30;
joined_r0x08009480:
                uVar29 = uVar27;
                if ((uVar3 != 0) && (uVar29 = uVar30, uVar16 <= uVar30)) {
                    uVar29 = uVar16;
                }
            }
            else {
                uVar27 = uVar25 + (*(iVar19 + 0x5ae) & 0xf) + 3;
                uVar3 = uVar27;
                if (0x1f < uVar27) {
                    uVar3 = 0;
                }
                uVar16 = 1L << (uVar3 & 0x3f);
                uVar30 = *(iVar19 + 0x5b0);
                if (uVar16 >> (uVar3 & 0x1f) != 1 || uVar3 != uVar27) {
                    uVar16 = 0xffffffff;
                }
                uVar29 = uVar16;
                uVar27 = uVar30;
                uVar3 = uVar16;
                if (uVar30 != 0) goto joined_r0x08009480;
            }
            *(iVar19 + 0x5b0) = uVar29;
            sym.nvme_set_queue_limits(iVar19,*(iVar19 + 0x48));
            iVar9 = arg4[0xa0];
            uVar5 = *(arg4 + 0x10e);
            uVar6 = *(arg4 + 0x30);
            *(iVar19 + 0x5e8) = *(arg4 + 0x10c);
            uVar16 = *(arg4 + 0x2c);
            *(iVar19 + 0x5ec) = iVar9;
            *(iVar19 + 0x5d8) = uVar5;
            *(iVar19 + 0x5fc) = uVar6;
            if (uVar16 == 0) {
                *(iVar19 + 0x600) = obj.shutdown_timeout;
            }
            else {
                uVar27 = obj.shutdown_timeout;
                uVar30 = uVar16 / 1000000;
                if (uVar16 / 1000000 <= obj.shutdown_timeout) {
                    uVar30 = uVar27;
                }
                if (0x3b < uVar30) {
                    uVar30 = 0x3c;
                }
                *(iVar19 + 0x600) = uVar30;
                if (uVar30 != uVar27) {
                    _dev_info(*(iVar19 + 0x460),"Shutdown timeout set to %u seconds\n");
                }
            }
            cVar7 = *(arg4 + 0x109);
            cVar8 = *(iVar19 + 0xc20);
            *(iVar19 + 0x5ee) = *(arg4 + 0x107);
            *(iVar19 + 0x5ef) = cVar7;
            if ((*(iVar19 + 0x610) >> 4 & 1) == 0) {
                cVar15 = cVar7 != '\0';
            }
            else {
                cVar15 = false;
                if ((obj.force_apst != 0x0) && (cVar7 != '\0')) {
                    _dev_warn(*(iVar19 + 0x460),
                              "forcibly allowing APST due to nvme_core.force_apst -- use at your own risk\n");
                    cVar15 = true;
                }
            }
            *(iVar19 + 0xc20) = cVar15;
            memcpy(iVar19 + 0x618,arg4 + 0x400,0x400);
            if ((*(*(iVar19 + 0x40) + 0x10) & 1) != 0) {
                iVar9 = arg4[0x27];
                uVar5 = *(arg4 + 0x380);
                *(iVar19 + 0xc3c) = arg4[900];
                uVar6 = *(arg4 + 0x382);
                iVar10 = arg4[0x101];
                *(iVar19 + 0xc34) = uVar5;
                *(iVar19 + 0xc38) = uVar6;
                *(iVar19 + 0xc3e) = iVar10;
                if (*(iVar19 + 0x594) == iVar9) {
                    if (((*(iVar19 + 0xc50) != 0) && (*(*(iVar19 + 0xc50) + 0x48) != '\0')) || (*(iVar19 + 0x5ec) != 0))
                    goto code_r0x080095ec;
                    _dev_err(*(iVar19 + 0x460),"keep-alive support is mandatory for fabrics\n");
                    uVar18 = 0xffffffea;
                }
                else {
                    _dev_err(*(iVar19 + 0x460),"Mismatching cntlid: Connect %u vs Identify %u, rejecting\n");
                    uVar18 = 0xffffffea;
                }
                goto code_r0x08009610;
            }
            uVar5 = *(arg4 + 0xa6);
            iVar9 = arg4[0xa8];
            *(iVar19 + 0xc24) = *(arg4 + 0x88);
            *(iVar19 + 0xc2c) = uVar5;
            *(iVar19 + 0xc30) = iVar9;
code_r0x080095ec:
            if ((*(*(iVar19 + 0x568) + 0x523) >> 3 & 1) == 0) {
                if (cVar15 == false) goto code_r0x08009a08;
code_r0x080095fc:
                if (cVar8 != '\0') goto code_r0x08009a08;
                dev_pm_qos_expose_latency_tolerance(*(iVar19 + 0x460));
            }
            else {
                _dev_warn(*(iVar19 + 0x460),
                          "Please enable CONFIG_NVME_MULTIPATH for full support of multi-port devices.\n");
                cVar15 = *(iVar19 + 0xc20);
                if (cVar15 != '\0') goto code_r0x080095fc;
code_r0x08009a08:
                if ((cVar15 == '\0') && (cVar8 != '\0')) {
                    dev_pm_qos_hide_latency_tolerance(*(iVar19 + 0x460));
                }
            }
            kfree(arg4);
            uVar16 = sym.nvme_configure_apst(iVar19);
            if (uVar16 < 0) {
                uVar18 = uVar16;
            }
            else {
                if ((*(iVar19 + 0x5ce) >> 6 & 1) != 0) {
                    iStack_180 = ktime_get_with_offset(0);
                    uStack_128 = 0;
                    uStack_120 = 0;
                    iStack_180 = iStack_180 / 1000000;
                    uStack_138 = 0;
                    uStack_148 = 0;
                    uStack_140 = 0;
                    uStack_150 = 0;
                    uStack_178 = 0;
                    uStack_158 = 9;
                    uStack_130 = 0xe;
                    uVar16 = sym.__nvme_submit_sync_cmd(*(iVar19 + 0x48),&uStack_158,&uStack_178,&iStack_180);
                    if (uVar16 != 0) {
                        uVar18 = uVar16;
                        if ((obj.nvme_configure_timestamp.__print_once & 1) == 0) {
                            obj.nvme_configure_timestamp.__print_once = 0x1;
                            _dev_warn(*(iVar19 + 0x460),"could not set timestamp (%d)\n",uVar18);
                        }
                        if (uVar16 < 0) goto code_r0x08009c84;
                    }
                }
                if (((*(iVar19 + 0x5d0) >> 5 & 1) == 0) || (obj.streams == 0x0)) {
code_r0x08009be8:
                    iVar9 = *(iVar19 + 0x5c8);
                }
                else {
                    uStack_120 = 0;
                    uStack_138 = 0;
                    uStack_148 = 0;
                    uStack_140 = 0;
                    uStack_150 = 0;
                    uStack_130 = 0x100000000;
                    uStack_158 = 0xffffffff00000019;
                    uStack_128 = 0x101;
                    uVar16 = sym.__nvme_submit_sync_cmd(*(iVar19 + 0x48),&uStack_158,0,0);
                    if (uVar16 != 0) {
code_r0x08009be4:
                        uVar18 = uVar16;
                        if (uVar16 < 0) goto code_r0x08009c84;
                        goto code_r0x08009be8;
                    }
                    uStack_150 = 0;
                    uStack_128 = 0;
                    uStack_120 = 0;
                    uStack_138 = 0;
                    uStack_148 = 0;
                    uStack_140 = 0;
                    uStack_178 = 0;
                    uStack_170 = 0;
                    uStack_168 = 0;
                    uStack_160 = 0;
                    uStack_158 = 0xffffffff0000001a;
                    uStack_130 = 0x10100000007;
                    uVar16 = sym.__nvme_submit_sync_cmd(*(iVar19 + 0x48),&uStack_158,0,&uStack_178);
                    if (uVar16 != 0) {
code_r0x08009b90:
                        uStack_150 = 0;
                        uStack_158 = 0xffffffff00000019;
                        uStack_120 = 0;
                        uStack_138 = 0;
                        uStack_130 = 0x100000000;
                        uStack_128 = 0x100;
                        uStack_148 = 0;
                        uStack_140 = 0;
                        sym.__nvme_submit_sync_cmd(*(iVar19 + 0x48),&uStack_158,0,0);
                        goto code_r0x08009be4;
                    }
                    *(iVar19 + 0x5d2) = uStack_178._2_2_;
                    if (uStack_178._2_2_ < 4) {
                        _dev_info(*(iVar19 + 0x460),"too few streams (%u) available\n");
                        goto code_r0x08009b90;
                    }
                    *(iVar19 + 0x5d4) = 4;
                    _dev_info(*(iVar19 + 0x460),"Using %u streams\n",4);
                    iVar9 = *(iVar19 + 0x5c8);
                }
                if ((iVar9 != 0) &&
                   (arg4_00 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0xdc0,0x200), arg4_00 != NULL)) {
                    uStack_150 = 0;
                    *arg4_00 = 1;
                    uStack_158 = 9;
                    uStack_178 = 0;
                    uStack_128 = 0;
                    uStack_120 = 0;
                    uStack_138 = 0;
                    uStack_130 = 0x16;
                    uStack_148 = 0;
                    uStack_140 = 0;
                    uVar16 = sym.__nvme_submit_sync_cmd(*(iVar19 + 0x48),&uStack_158,&uStack_178,arg4_00);
                    uVar18 = uVar16;
                    kfree(arg4_00);
                    if (uVar16 < 0) goto code_r0x08009c84;
                }
                uVar18 = 0;
                *(iVar19 + 8) = 1;
            }
        }
        else {
            uVar18 = uVar16;
code_r0x08009610:
            kfree(arg4);
        }
    }
code_r0x08009c84:
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_118) {
        return uVar18;
    }
    __stack_chk_fail();
code_r0x08009e44:
    //WARNING: Does not return
    pcVar33 = SoftwareBreakpoint(0x5512,0x8009e48);
    (*pcVar33)();
}


// ===== sym.nvme_delete_ctrl.cfi_jt @ 0x08005c30 (size 8) =====

uint sym.nvme_delete_ctrl.cfi_jt(int64_t param_1)

{
    uint64_t uVar1;
    ulong *in_x18;
    uint uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.nvme_change_ctrl_state(param_1,4);
    uVar2 = 0xfffffff0;
    if ((uVar1 & 1) != 0) {
        uVar1 = queue_work_on(0x20,_segment.ehdr,param_1 + 0x520);
        uVar2 = 0;
        if ((uVar1 & 1) == 0) {
            uVar2 = 0xfffffff0;
        }
    }
    return uVar2;
}


// ===== sym.nvme_disable_ctrl.cfi_jt @ 0x08005c38 (size 8) =====

void sym.nvme_disable_ctrl.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 0x598) = *(param_1 + 0x598) & 0xffff3ffe;
    pcVar2 = *(*(param_1 + 0x40) + 0x20);
    __cfi_slowpath_diag(0x5fd0dd7266111d21,pcVar2,0x8002710);
    iVar1 = (*pcVar2)(param_1,0x14,*(param_1 + 0x598));
    if (iVar1 == 0) {
        if ((*(param_1 + 0x610) >> 3 & 1) != 0) {
            msleep(0x8fc);
        }
        sym.nvme_wait_ready(param_1,*(param_1 + 0x5a8),0);
    }
    return;
}


// ===== sym.nvme_reset_ctrl.cfi_jt @ 0x08005c40 (size 8) =====

uint sym.nvme_reset_ctrl.cfi_jt(int64_t param_1)

{
    uint64_t uVar1;
    ulong *in_x18;
    uint uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.nvme_change_ctrl_state(param_1,2);
    uVar2 = 0xfffffff0;
    if ((uVar1 & 1) != 0) {
        uVar1 = queue_work_on(0x20,_segment.ehdr,param_1 + 0x4f0);
        uVar2 = 0;
        if ((uVar1 & 1) == 0) {
            uVar2 = 0xfffffff0;
        }
    }
    return uVar2;
}


// ===== sym.nvme_init_ctrl_finish.cfi_jt @ 0x08005c48 (size 8) =====

int sym.nvme_init_ctrl_finish.cfi_jt(int64_t param_1)

{
    uint *puVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    ulong uVar4;
    uint uVar5;
    uint uVar6;
    uint8_t uVar7;
    char cVar8;
    char cVar9;
    int16_t iVar10;
    int16_t iVar11;
    int16_t iVar12;
    code cVar13;
    ulong *puVar14;
    char cVar15;
    int iVar16;
    uint32_t uVar17;
    int16_t *arg4;
    uint *arg1;
    int64_t iVar18;
    uint *puVar19;
    uint64_t uVar20;
    uchar *arg4_00;
    int64_t *piVar21;
    ulong uVar22;
    uint32_t uVar23;
    ulong uVar24;
    uint32_t uVar25;
    uint32_t uVar26;
    ulong uVar27;
    ulong uVar28;
    ulong *in_x18;
    code *pcVar29;
    ulong *puVar30;
    ulong unaff_x30;
    int64_t iStack_d0;
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
    iVar18 = sp_el0;
    iStack_68 = *(iVar18 + 0x5e0);
    pcVar29 = *(*(param_1 + 0x40) + 0x18);
    __cfi_slowpath_diag(0x79bc8fe92a26dc5e,pcVar29,0x80027b0);
    iVar16 = (*pcVar29)(param_1,8,param_1 + 0x5e4);
    if (iVar16 != 0) {
        _dev_err(*(param_1 + 0x460),"Reading VS failed (%d)\n",iVar16);
        goto code_r0x08009c84;
    }
    uVar22 = *(param_1 + 0x5a8);
    uVar2 = uVar22;
    if (*(param_1 + 0x5d6) <= (uVar22 & 0xffff)) {
        uVar2 = *(param_1 + 0x5d6);
    }
    *(param_1 + 0x5d6) = uVar2;
    if (0x100 < *(param_1 + 0x5e4) >> 8) {
        *(param_1 + 0x608) = uVar22 >> 0x24 & 1;
    }
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    uStack_a8 = 6;
    uStack_80 = 1;
    arg4 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0xcc0,0x1000);
    if (arg4 == NULL) {
        iVar16 = -0xc;
code_r0x0800964c:
        _dev_err(*(param_1 + 0x460),"Identify Controller failed (%d)\n",iVar16);
        iVar16 = -5;
    }
    else {
        iVar16 = sym.__nvme_submit_sync_cmd(*(param_1 + 0x48),&uStack_a8,0,arg4);
        if (iVar16 != 0) {
            kfree(arg4);
            goto code_r0x0800964c;
        }
        if (((*(arg4 + 0x105) >> 1 & 1) == 0) ||
           (iVar16 = sym.nvme_get_effects_log(param_1,0,param_1 + 0xa18), -1 < iVar16)) {
            if ((*(*(param_1 + 0x40) + 0x10) & 1) == 0) {
                *(param_1 + 0x594) = arg4[0x27];
            }
            if (*(param_1 + 8) == '\0') {
                arg1 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0xdc0,0x538);
                if (arg1 == NULL) {
                    iVar16 = -0xc;
                    goto code_r0x08009610;
                }
                *arg1 = 0xffffffff;
                __mutex_init(arg1 + 0xec,"&subsys->lock",obj.nvme_init_subsystem.__key);
                arg1[0xe6] = 1;
                *(arg1 + 0xf8) = arg1 + 0xf8;
                *(arg1 + 0xfa) = arg1 + 0xf8;
                *(arg1 + 0xfc) = arg1 + 0xfc;
                *(arg1 + 0xfe) = arg1 + 0xfc;
                if ((*(param_1 + 0x611) & 1) == 0) {
                    iVar18 = strnlen(arg4 + 0x180,0xdf);
                    if (0xdd < iVar18 - 1U) {
                        if (0x10200 < *(param_1 + 0x5e4)) {
                            _dev_warn(*(param_1 + 0x460),"missing or invalid SUBNQN field.\n");
                        }
                        goto code_r0x08009680;
                    }
                    strlcpy(arg1 + 0x100,arg4 + 0x180,0xdf);
                }
                else {
code_r0x08009680:
                    uVar17 = snprintf(arg1 + 0x100,0xdf,"nqn.2014.08.org.nvmexpress:%04x%04x",*arg4,arg4[1]);
                    if (0xdf < uVar17) goto code_r0x08009e44;
                    uVar22 = *(arg4 + 6);
                    uVar5 = *(arg4 + 10);
                    *(arg1 + uVar17 + 0x400) = *(arg4 + 2);
                    *(arg1 + uVar17 + 0x408) = uVar22;
                    *(arg1 + uVar17 + 0x410) = uVar5;
                    if (0xcb < uVar17) goto code_r0x08009e44;
                    uVar4 = *(arg4 + 0x14);
                    uVar26 = uVar17 + 0x14;
                    uVar22 = *(arg4 + 0x18);
                    uVar24 = *(arg4 + 0x1c);
                    uVar27 = *(arg4 + 0xc);
                    *(arg1 + uVar26 + 0x408) = *(arg4 + 0x10);
                    *(arg1 + uVar26 + 0x410) = uVar4;
                    *(arg1 + uVar26 + 0x418) = uVar22;
                    *(arg1 + uVar26 + 0x420) = uVar24;
                    *(arg1 + uVar26 + 0x400) = uVar27;
                    if (0xa3 < uVar17) goto code_r0x08009e44;
                    memset(arg1 + uVar17 + 0x3c + 0x400,0,0xdf - (uVar17 + 0x3c));
                }
                uVar22 = *(arg4 + 6);
                uVar5 = *(arg4 + 10);
                puVar1 = arg1 + 2;
                *(arg1 + 0x4df) = *(arg4 + 2);
                *(arg1 + 0x4e7) = uVar22;
                uVar27 = *(arg4 + 0x10);
                uVar22 = *(arg4 + 0x14);
                uVar4 = *(arg4 + 0x18);
                *(arg1 + 0x4ef) = uVar5;
                uVar24 = *(arg4 + 0x1c);
                uVar28 = *(arg4 + 0xc);
                iVar12 = arg4[0x26];
                *(arg1 + 0x503) = uVar22;
                *(arg1 + 0x50b) = uVar4;
                iVar10 = *arg4;
                *(arg1 + 0x513) = uVar24;
                *(arg1 + 0x4f3) = uVar28;
                *(arg1 + 0x4fb) = uVar27;
                iVar11 = arg4[0x108];
                *(arg1 + 0x149) = iVar10;
                uVar22 = _segment.ehdr;
                uVar5 = *(param_1 + 0x68);
                *(arg1 + 0x523) = iVar12;
                *(arg1 + 0x526) = iVar11;
                *(arg1 + 0xca) = uVar22;
                *(arg1 + 0xce) = sym.nvme_release_subsystem.21529633b7289604a80e82acd8b43a39.cfi_jt;
                *(arg1 + 0xcc) = obj.nvme_subsys_attrs_groups;
                dev_set_name(puVar1,"nvme-subsys%d",uVar5);
                device_initialize(puVar1);
                mutex_lock(obj.nvme_subsystems_lock);
                puVar19 = sym.__nvme_find_get_subsystem(arg1 + 0x100);
                if (puVar19 == NULL) {
                    iVar16 = device_add(puVar1);
                    if (iVar16 == 0) {
                        puVar30 = arg1 + 0xe8;
                        *(arg1 + 0x14c) = 0;
                        puVar14 = *0x8002238;
                        *(arg1 + 0x14a) = 0x1000000500000000;
                        uVar20 = __list_add_valid(puVar30,puVar14,obj.nvme_subsystems);
                        if ((uVar20 & 1) != 0) {
                            *0x8002238 = puVar30;
                            *(arg1 + 0xe8) = obj.nvme_subsystems;
                            *(arg1 + 0xea) = puVar14;
                            *puVar14 = puVar30;
                        }
                        goto code_r0x080098bc;
                    }
                    _dev_err(*(param_1 + 0x460),"failed to register subsystem device.\n");
                    put_device(puVar1);
                }
                else {
                    put_device(puVar1);
                    for (puVar30 = *(puVar19 + 0xf8); arg1 = puVar19, puVar19 + 0xf8 != puVar30; puVar30 = *puVar30) {
                        if (*(puVar30 + -0x56c) < 4) {
                            if (*(puVar30 + 0x24) == *(param_1 + 0x594)) {
                                iVar18 = puVar30[-0x22][0xe];
                                if (iVar18 == 0) {
                                    iVar18 = *puVar30[-0x22];
                                }
                                _dev_err(*(param_1 + 0x460),"Duplicate cntlid %u with %s, rejecting\n",
                                         *(puVar30 + 0x24),iVar18);
                            }
                            else {
                                if (((*(arg4 + 0x26) >> 1 & 1) != 0) ||
                                   ((*(param_1 + 0xc50) != 0 && (*(*(param_1 + 0xc50) + 0x48) != '\0'))))
                                goto code_r0x08009800;
                                _dev_err(*(param_1 + 0x460),"Subsystem does not support multiple controllers\n");
                            }
                            iVar16 = -0x16;
                            goto code_r0x08009e00;
                        }
                        if ((2 < *(puVar30 + -0x56c) - 4) && ((obj.nvme_state_terminal.__already_done & 1) == 0)) {
                            obj.nvme_state_terminal.__already_done = 0x1;
                            __warn_printk("Unhandled ctrl state:%d");
    //WARNING: Does not return
                            pcVar29 = SoftwareBreakpoint(0x800,0x8009860);
                            (*pcVar29)();
                        }
code_r0x08009800:
                    }
code_r0x080098bc:
                    piVar21 = *(param_1 + 0x460);
                    iVar18 = piVar21[0xe];
                    if (iVar18 == 0) {
                        iVar18 = *piVar21;
                    }
                    iVar16 = sysfs_create_link(arg1 + 2,piVar21,iVar18);
                    if (iVar16 == 0) {
                        if (puVar19 == NULL) {
                            *arg1 = *(param_1 + 0x68);
                        }
                        *(param_1 + 0x568) = arg1;
                        iVar18 = param_1 + 0x570;
                        piVar21 = *(arg1 + 0xfa);
                        uVar20 = __list_add_valid(iVar18,piVar21,arg1 + 0xf8);
                        if ((uVar20 & 1) != 0) {
                            *(arg1 + 0xfa) = iVar18;
                            *(param_1 + 0x570) = arg1 + 0xf8;
                            *(param_1 + 0x578) = piVar21;
                            *piVar21 = iVar18;
                        }
                        mutex_unlock(obj.nvme_subsystems_lock);
                        iVar18 = 0;
                        do {
                            if (*(obj.core_quirks + iVar18 * 0x20) == *arg4) {
                                if (iVar18 == 1) {
                                    if (*(arg4 + 0x20) == 0x3131313130333232) {
code_r0x08009948:
                                        *(param_1 + 0x610) = *(param_1 + 0x610) | *(iVar18 * 0x20 + 0x8004488);
                                    }
                                }
                                else {
                                    uVar22 = *(iVar18 * 0x20 + 0x8004478);
                                    uVar20 = strlen(uVar22);
                                    if (0x28 < uVar20) {
    //WARNING: Does not return
                                        pcVar29 = SoftwareBreakpoint(0x800,0x80099ec);
                                        (*pcVar29)();
                                    }
                                    iVar16 = bcmp(arg4 + 0xc,uVar22,uVar20);
                                    if (iVar16 == 0) {
                                        if (uVar20 < 0x28) {
                                            do {
                                                if (*(arg4 + uVar20 + 0x18) != ' ') goto code_r0x0800995c;
                                                uVar20 = uVar20 + 1;
                                            } while (uVar20 != 0x28);
                                        }
                                        goto code_r0x08009948;
                                    }
                                }
                            }
code_r0x0800995c:
                            iVar18 = iVar18 + 1;
                        } while (iVar18 != 4);
                        goto code_r0x0800931c;
                    }
                    _dev_err(*(param_1 + 0x460),"failed to create sysfs link from subsystem.\n");
code_r0x08009e00:
                    sym.nvme_put_subsystem(arg1);
                }
                mutex_unlock(obj.nvme_subsystems_lock);
                goto code_r0x08009610;
            }
code_r0x0800931c:
            cVar13 = obj.force_apst;
            *(*(param_1 + 0x568) + 0x51b) = *(arg4 + 0x20);
            if ((cVar13 != 0x0) && ((*(param_1 + 0x610) >> 5 & 1) != 0)) {
                _dev_warn(*(param_1 + 0x460),
                          "forcibly allowing all power states due to nvme_core.force_apst -- use at your own risk\n");
                *(param_1 + 0x610) = *(param_1 + 0x610) & 0xffffffffffffffdf;
            }
            iVar10 = arg4[0x40];
            iVar11 = arg4[0x80];
            *(param_1 + 0x5ca) = *(arg4 + 0x41);
            iVar12 = arg4[0x87];
            *(param_1 + 0x5c8) = iVar10;
            uVar7 = *(arg4 + 0x81);
            *(param_1 + 0x5d0) = iVar11;
            iVar10 = arg4[0x104];
            uVar5 = *(arg4 + 0x2e);
            *(param_1 + 0x59c) = iVar12;
            uVar6 = *(arg4 + 0x85);
            *(param_1 + 0x5ce) = iVar10;
            *(param_1 + 0x5f4) = uVar5;
            *(param_1 + 0x5f0) = uVar6;
            *(param_1 + 0x5dc) = uVar7 + 1;
            uVar7 = *(arg4 + 0x4d);
            *(param_1 + 0x5e0) = *(arg4 + 0x20d);
            if (uVar7 == 0) {
                uVar26 = *(param_1 + 0x5b0);
                uVar17 = 0xffffffff;
                uVar23 = 0xffffffff;
                uVar3 = uVar26;
joined_r0x08009480:
                uVar25 = uVar23;
                if ((uVar3 != 0) && (uVar25 = uVar26, uVar17 <= uVar26)) {
                    uVar25 = uVar17;
                }
            }
            else {
                uVar23 = uVar7 + (*(param_1 + 0x5ae) & 0xf) + 3;
                uVar3 = uVar23;
                if (0x1f < uVar23) {
                    uVar3 = 0;
                }
                uVar17 = 1L << (uVar3 & 0x3f);
                uVar26 = *(param_1 + 0x5b0);
                if (uVar17 >> (uVar3 & 0x1f) != 1 || uVar3 != uVar23) {
                    uVar17 = 0xffffffff;
                }
                uVar25 = uVar17;
                uVar23 = uVar26;
                uVar3 = uVar17;
                if (uVar26 != 0) goto joined_r0x08009480;
            }
            *(param_1 + 0x5b0) = uVar25;
            sym.nvme_set_queue_limits(param_1,*(param_1 + 0x48));
            iVar10 = arg4[0xa0];
            uVar5 = *(arg4 + 0x10e);
            uVar6 = *(arg4 + 0x30);
            *(param_1 + 0x5e8) = *(arg4 + 0x10c);
            uVar17 = *(arg4 + 0x2c);
            *(param_1 + 0x5ec) = iVar10;
            *(param_1 + 0x5d8) = uVar5;
            *(param_1 + 0x5fc) = uVar6;
            if (uVar17 == 0) {
                *(param_1 + 0x600) = obj.shutdown_timeout;
            }
            else {
                uVar23 = obj.shutdown_timeout;
                uVar26 = uVar17 / 1000000;
                if (uVar17 / 1000000 <= obj.shutdown_timeout) {
                    uVar26 = uVar23;
                }
                if (0x3b < uVar26) {
                    uVar26 = 0x3c;
                }
                *(param_1 + 0x600) = uVar26;
                if (uVar26 != uVar23) {
                    _dev_info(*(param_1 + 0x460),"Shutdown timeout set to %u seconds\n");
                }
            }
            cVar8 = *(arg4 + 0x109);
            cVar9 = *(param_1 + 0xc20);
            *(param_1 + 0x5ee) = *(arg4 + 0x107);
            *(param_1 + 0x5ef) = cVar8;
            if ((*(param_1 + 0x610) >> 4 & 1) == 0) {
                cVar15 = cVar8 != '\0';
            }
            else {
                cVar15 = false;
                if ((obj.force_apst != 0x0) && (cVar8 != '\0')) {
                    _dev_warn(*(param_1 + 0x460),
                              "forcibly allowing APST due to nvme_core.force_apst -- use at your own risk\n");
                    cVar15 = true;
                }
            }
            *(param_1 + 0xc20) = cVar15;
            memcpy(param_1 + 0x618,arg4 + 0x400,0x400);
            if ((*(*(param_1 + 0x40) + 0x10) & 1) != 0) {
                iVar10 = arg4[0x27];
                uVar5 = *(arg4 + 0x380);
                *(param_1 + 0xc3c) = arg4[900];
                uVar6 = *(arg4 + 0x382);
                iVar11 = arg4[0x101];
                *(param_1 + 0xc34) = uVar5;
                *(param_1 + 0xc38) = uVar6;
                *(param_1 + 0xc3e) = iVar11;
                if (*(param_1 + 0x594) == iVar10) {
                    if (((*(param_1 + 0xc50) != 0) && (*(*(param_1 + 0xc50) + 0x48) != '\0')) ||
                       (*(param_1 + 0x5ec) != 0)) goto code_r0x080095ec;
                    _dev_err(*(param_1 + 0x460),"keep-alive support is mandatory for fabrics\n");
                    iVar16 = -0x16;
                }
                else {
                    _dev_err(*(param_1 + 0x460),"Mismatching cntlid: Connect %u vs Identify %u, rejecting\n");
                    iVar16 = -0x16;
                }
                goto code_r0x08009610;
            }
            uVar5 = *(arg4 + 0xa6);
            iVar10 = arg4[0xa8];
            *(param_1 + 0xc24) = *(arg4 + 0x88);
            *(param_1 + 0xc2c) = uVar5;
            *(param_1 + 0xc30) = iVar10;
code_r0x080095ec:
            if ((*(*(param_1 + 0x568) + 0x523) >> 3 & 1) == 0) {
                if (cVar15 == false) goto code_r0x08009a08;
code_r0x080095fc:
                if (cVar9 != '\0') goto code_r0x08009a08;
                dev_pm_qos_expose_latency_tolerance(*(param_1 + 0x460));
            }
            else {
                _dev_warn(*(param_1 + 0x460),
                          "Please enable CONFIG_NVME_MULTIPATH for full support of multi-port devices.\n");
                cVar15 = *(param_1 + 0xc20);
                if (cVar15 != '\0') goto code_r0x080095fc;
code_r0x08009a08:
                if ((cVar15 == '\0') && (cVar9 != '\0')) {
                    dev_pm_qos_hide_latency_tolerance(*(param_1 + 0x460));
                }
            }
            kfree(arg4);
            iVar16 = sym.nvme_configure_apst(param_1);
            if (-1 < iVar16) {
                if ((*(param_1 + 0x5ce) >> 6 & 1) != 0) {
                    iStack_d0 = ktime_get_with_offset(0);
                    uStack_78 = 0;
                    uStack_70 = 0;
                    iStack_d0 = iStack_d0 / 1000000;
                    uStack_88 = 0;
                    uStack_98 = 0;
                    uStack_90 = 0;
                    uStack_a0 = 0;
                    uStack_c8 = 0;
                    uStack_a8 = 9;
                    uStack_80 = 0xe;
                    iVar16 = sym.__nvme_submit_sync_cmd(*(param_1 + 0x48),&uStack_a8,&uStack_c8,&iStack_d0);
                    if (iVar16 != 0) {
                        if ((obj.nvme_configure_timestamp.__print_once & 1) == 0) {
                            obj.nvme_configure_timestamp.__print_once = 0x1;
                            _dev_warn(*(param_1 + 0x460),"could not set timestamp (%d)\n",iVar16);
                        }
                        if (iVar16 < 0) goto code_r0x08009c84;
                    }
                }
                if (((*(param_1 + 0x5d0) >> 5 & 1) == 0) || (obj.streams == 0x0)) {
code_r0x08009be8:
                    iVar10 = *(param_1 + 0x5c8);
                }
                else {
                    uStack_70 = 0;
                    uStack_88 = 0;
                    uStack_98 = 0;
                    uStack_90 = 0;
                    uStack_a0 = 0;
                    uStack_80 = 0x100000000;
                    uStack_a8 = 0xffffffff00000019;
                    uStack_78 = 0x101;
                    iVar16 = sym.__nvme_submit_sync_cmd(*(param_1 + 0x48),&uStack_a8,0,0);
                    if (iVar16 != 0) {
code_r0x08009be4:
                        if (iVar16 < 0) goto code_r0x08009c84;
                        goto code_r0x08009be8;
                    }
                    uStack_a0 = 0;
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_88 = 0;
                    uStack_98 = 0;
                    uStack_90 = 0;
                    uStack_c8 = 0;
                    uStack_c0 = 0;
                    uStack_b8 = 0;
                    uStack_b0 = 0;
                    uStack_a8 = 0xffffffff0000001a;
                    uStack_80 = 0x10100000007;
                    iVar16 = sym.__nvme_submit_sync_cmd(*(param_1 + 0x48),&uStack_a8,0,&uStack_c8);
                    if (iVar16 != 0) {
code_r0x08009b90:
                        uStack_a0 = 0;
                        uStack_a8 = 0xffffffff00000019;
                        uStack_70 = 0;
                        uStack_88 = 0;
                        uStack_80 = 0x100000000;
                        uStack_78 = 0x100;
                        uStack_98 = 0;
                        uStack_90 = 0;
                        sym.__nvme_submit_sync_cmd(*(param_1 + 0x48),&uStack_a8,0,0);
                        goto code_r0x08009be4;
                    }
                    *(param_1 + 0x5d2) = uStack_c8._2_2_;
                    if (uStack_c8._2_2_ < 4) {
                        _dev_info(*(param_1 + 0x460),"too few streams (%u) available\n");
                        goto code_r0x08009b90;
                    }
                    *(param_1 + 0x5d4) = 4;
                    _dev_info(*(param_1 + 0x460),"Using %u streams\n",4);
                    iVar10 = *(param_1 + 0x5c8);
                }
                if ((iVar10 != 0) &&
                   (arg4_00 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0xdc0,0x200), arg4_00 != NULL)) {
                    uStack_a0 = 0;
                    *arg4_00 = 1;
                    uStack_a8 = 9;
                    uStack_c8 = 0;
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_88 = 0;
                    uStack_80 = 0x16;
                    uStack_98 = 0;
                    uStack_90 = 0;
                    iVar16 = sym.__nvme_submit_sync_cmd(*(param_1 + 0x48),&uStack_a8,&uStack_c8,arg4_00);
                    kfree(arg4_00);
                    if (iVar16 < 0) goto code_r0x08009c84;
                }
                iVar16 = 0;
                *(param_1 + 8) = 1;
            }
        }
        else {
code_r0x08009610:
            kfree(arg4);
        }
    }
code_r0x08009c84:
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_68) {
        return iVar16;
    }
    __stack_chk_fail();
code_r0x08009e44:
    //WARNING: Does not return
    pcVar29 = SoftwareBreakpoint(0x5512,0x8009e48);
    (*pcVar29)();
}


// ===== sym.nvme_enable_ctrl.cfi_jt @ 0x08005c50 (size 8) =====

int sym.nvme_enable_ctrl.cfi_jt(int64_t param_1)

{
    uint uVar1;
    int iVar2;
    uint64_t uVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar4 = *(*(param_1 + 0x40) + 0x28);
    __cfi_slowpath_diag(0x18cb069a6cd6e3b9,pcVar4,0x8002730);
    iVar2 = (*pcVar4)(param_1,0,param_1 + 0x5a8);
    if (iVar2 == 0) {
        uVar3 = *(param_1 + 0x5a8);
        if ((uVar3 >> 0x30 & 0xf) == 0) {
            uVar1 = 0x460001;
            if ((uVar3 & 0x80000000000) != 0) {
                uVar1 = 0x460061;
            }
            *(param_1 + 0x598) = uVar1;
            pcVar4 = *(*(param_1 + 0x40) + 0x20);
            __cfi_slowpath_diag(0x5fd0dd7266111d21,pcVar4,0x8002750);
            iVar2 = (*pcVar4)(param_1,0x14,*(param_1 + 0x598));
            if (iVar2 == 0) {
                iVar2 = sym.nvme_wait_ready(param_1,*(param_1 + 0x5a8),1);
            }
        }
        else {
            _dev_err(*(param_1 + 0x460),"Minimum device page size %u too large for host (%u)\n",
                     0x1000 << (uVar3 >> 0x30 & 0xf),0x1000);
            iVar2 = -0x13;
        }
    }
    else {
        _dev_err(*(param_1 + 0x460),"Reading CAP failed (%d)\n",iVar2);
    }
    return iVar2;
}


// ===== sym.nvme_try_sched_reset.cfi_jt @ 0x08005c58 (size 8) =====

uint sym.nvme_try_sched_reset.cfi_jt(int64_t param_1)

{
    uint64_t uVar1;
    ulong *in_x18;
    uint uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = 0xfffffff0;
    if (*(param_1 + 4) == 2) {
        uVar1 = queue_work_on(0x20,_segment.ehdr,param_1 + 0x4f0);
        uVar2 = 0;
        if ((uVar1 & 1) == 0) {
            uVar2 = 0xfffffff0;
        }
    }
    return uVar2;
}


// ===== sym.nvme_open.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005c60 (size 8) =====

void sym.nvme_open.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.nvme_ns_open(*(*(param_1 + 0x3f0) + 0x58));
    return;
}


// ===== sym.__traceiter_nvme_setup_cmd.cfi_jt @ 0x08005c68 (size 8) =====

ulong sym.__traceiter_nvme_setup_cmd.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8011220;
    piVar1 = *0x8011220;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.nvme_ctrl_from_file.cfi_jt @ 0x08005c70 (size 8) =====

ulong sym.nvme_ctrl_from_file.cfi_jt(int64_t param_1)

{
    if (*(param_1 + 0x28) != obj.nvme_dev_fops) {
        return 0;
    }
    return *(param_1 + 0xd8);
}


// ===== sym.blkdev_compat_ptr_ioctl.cfi_jt @ 0x08005c78 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.blkdev_compat_ptr_ioctl.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.nvme_ioctl.cfi_jt @ 0x08005c80 (size 8) =====

void sym.nvme_ioctl.cfi_jt(int64_t param_1,ulong param_2,uint32_t param_3,int64_t param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__nvme_ioctl(*(*(param_1 + 0x3f0) + 0x58),param_3,param_4);
    return;
}


// ===== sym.nvme_cleanup_cmd.cfi_jt @ 0x08005c88 (size 8) =====

void sym.nvme_cleanup_cmd.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(param_1 + 0x1e) >> 2 & 1) != 0) {
        if (*(param_1 + 0x68) == *(*(param_1 + 0x148) + 0xc58)) {
            puVar1 = *(param_1 + 0x148) + 0xc60;
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
        else {
            kfree(((*(param_1 + 0x68) & 0x3ffffffffffc0) << 6 | 0xff00000000000000) + *(param_1 + 0x74));
        }
    }
    return;
}


// ===== sym.nvme_complete_rq.cfi_jt @ 0x08005c90 (size 8) =====

void sym.nvme_complete_rq.cfi_jt(int64_t *param_1)

{
    uint64_t *puVar1;
    uint16_t uVar2;
    char cVar3;
    bool bVar4;
    uchar uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(param_1 + 0x1e) >> 2 & 1) != 0) {
        if (param_1[0xd] == *(param_1[0x29] + 0xc58)) {
            puVar1 = param_1[0x29] + 0xc60;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = *puVar1 & 0xfffffffffffffffe;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
        }
        else {
            kfree(((param_1[0xd] & 0x3ffffffffffc0U) << 6 | 0xff00000000000000) + *(param_1 + 0x74));
        }
    }
    if (*(param_1[0x29] + 0x5ec) != 0) {
        *param_1[0x29] = 1;
    }
    uVar2 = *(param_1 + 0x144);
    if ((((uVar2 == 0) || ((*(param_1 + 3) & 0x700) != 0)) || ((uVar2 >> 0xe & 1) != 0)) ||
       (obj.nvme_max_retries <= *(param_1 + 0x141))) {
code_r0x0800706c:
        uVar5 = sym.nvme_error_status(uVar2);
        blk_mq_end_request(param_1,uVar5);
    }
    else {
        if ((*(param_1 + 3) >> 0x19 & 1) == 0) {
            if ((*(*param_1 + 0x60) >> 1 & 1) != 0) goto code_r0x0800706c;
        }
        else {
            if ((uVar2 & 0x700) == 0x300) {
                return;
            }
            if ((*(*param_1 + 0x60) >> 1 & 1) != 0) {
                return;
            }
        }
        if ((uVar2 >> 0xb & 3) == 0) {
            iVar6 = 0;
        }
        else {
            iVar6 = *(param_1[0x29] + ((uVar2 >> 0xb & 3) - 1) * 2 + 0x5c8) * 100;
        }
        *(param_1 + 0x141) = *(param_1 + 0x141) + 1;
        blk_mq_requeue_request(param_1,0);
        blk_mq_delay_kick_requeue_list(*param_1,iVar6);
    }
    return;
}


// ===== sym.nvme_complete_async_event.cfi_jt @ 0x08005c98 (size 8) =====

void sym.nvme_complete_async_event.cfi_jt(int64_t param_1,uint16_t param_2,uint32_t *param_3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *param_3;
    if (param_2 < 2) {
        uVar1 = uVar2 & 7;
        if (uVar1 < 8) {
            if ((1 << uVar1 & 0xc3U) == 0) {
                if (uVar1 == 2) {
                    sym.nvme_handle_aen_notice(param_1,uVar2);
                }
            }
            else {
                *(param_1 + 0x5f8) = uVar2;
            }
        }
        queue_work_on(0x20,_segment.ehdr,param_1 + 0xa60);
    }
    return;
}


// ===== sym.perf_trace_nvme_sq.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005ca0 (size 8) =====

void sym.perf_trace_nvme_sq.21529633b7289604a80e82acd8b43a39.cfi_jt
               (int64_t param_1,int64_t *param_2,ushort param_3,ushort param_4)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong in_tmp_ldXn;
    int64_t iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong uVar7;
    ulong uVar8;
    ulong uVar9;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uchar auStack_60 [12];
    uint uStack_54;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    iStack_50 = 0;
    uStack_54 = 0;
    iVar3 = tpidr_el1;
    piVar1 = iVar3 + *(param_1 + 0x78);
    if (((*(param_1 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar3 = perf_trace_buf_alloc(0x34,&iStack_50,&uStack_54), uVar2 = _trace_event_reg, iVar3 != 0)) {
        *(iStack_50 + 0xe8) = &stack0xffffffffffffffc0;
        uVar5 = -1L << (uVar2 & 0x3f);
        uVar2 = (~uVar5 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar2 = uVar5 | unaff_x30;
        }
        *(iStack_50 + 0xf8) = auStack_60;
        *(iStack_50 + 0x100) = uVar2;
        *(iStack_50 + 0x108) = 5;
        *(iVar3 + 8) = *(param_2[0x29] + 0x68);
        iVar6 = param_2[0x14];
        if (iVar6 == 0) {
            *(iVar3 + 0x1c) = 0;
            *(iVar3 + 0x24) = 0;
            *(iVar3 + 0xc) = 0;
            *(iVar3 + 0x14) = 0;
        }
        else {
            uVar8 = *(iVar6 + 0x24);
            uVar9 = *(iVar6 + 0x14);
            uVar7 = *(iVar6 + 0xc);
            *(iVar3 + 0x1c) = *(iVar6 + 0x1c);
            *(iVar3 + 0x24) = uVar8;
            *(iVar3 + 0xc) = uVar7;
            *(iVar3 + 0x14) = uVar9;
        }
        uVar4 = 0;
        if (*(*param_2 + 0x58) != 0) {
            uVar4 = *(param_2[2] + 0x1cc) + 1U & 0xffff;
        }
        *(iVar3 + 0x2c) = uVar4;
        *(iVar3 + 0x30) = param_3;
        *(iVar3 + 0x32) = param_4;
        perf_trace_run_bpf_submit(iVar3,0x34,uStack_54,param_1,1,iStack_50,piVar1,0);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return;
    }
    __stack_chk_fail();
    uVar7 = tpidr_el2;
    *extraout_x18 = 0x8006b84;
    bpf_trace_run2(in_tmp_ldXn);
    return;
}


// ===== sym.trace_event_raw_event_nvme_sq.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005ca8 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08006ab8)

void sym.trace_event_raw_event_nvme_sq.21529633b7289604a80e82acd8b43a39.cfi_jt
               (int64_t param_1,int64_t *param_2,ushort param_3,ushort param_4)

{
    int64_t *piVar1;
    ulong in_tmp_ldXn;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t *piVar4;
    ushort uVar5;
    ushort uVar6;
    int64_t iVar7;
    ulong uVar8;
    int64_t iVar9;
    ulong uVar10;
    ulong uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    uchar auStack_e0 [12];
    uint uStack_d4;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar12 = *(param_1 + 0x48);
    uVar6 = param_4;
    if ((uVar12 >> 8 & 1) == 0) {
        uVar5 = param_3;
        if ((uVar12 >> 7 & 1) != 0) {
            uVar5 = 0;
            uVar6 = 0;
            event_triggers_call(param_1,0);
        }
        if ((uVar12 >> 6 & 1) != 0) goto code_r0x080069cc;
        if ((uVar12 >> 9 & 1) != 0) {
            uVar2 = trace_event_ignore_this_pid(param_1);
            if ((uVar2 & 1) != 0) goto code_r0x080069cc;
        }
    }
    uVar5 = 0x34;
    iVar3 = trace_event_buffer_reserve(&uStack_78,param_1);
    if (iVar3 != 0) {
        *(iVar3 + 8) = *(param_2[0x29] + 0x68);
        iVar7 = param_2[0x14];
        if (iVar7 == 0) {
            *(iVar3 + 0x1c) = 0;
            *(iVar3 + 0x24) = 0;
            *(iVar3 + 0xc) = 0;
            *(iVar3 + 0x14) = 0;
        }
        else {
            uVar10 = *(iVar7 + 0x24);
            uVar11 = *(iVar7 + 0x14);
            uVar8 = *(iVar7 + 0xc);
            *(iVar3 + 0x1c) = *(iVar7 + 0x1c);
            *(iVar3 + 0x24) = uVar10;
            *(iVar3 + 0xc) = uVar8;
            *(iVar3 + 0x14) = uVar11;
        }
        uVar12 = 0;
        if (*(*param_2 + 0x58) != 0) {
            uVar12 = *(param_2[2] + 0x1cc) + 1U & 0xffff;
        }
        *(iVar3 + 0x2c) = uVar12;
        *(iVar3 + 0x30) = param_3;
        *(iVar3 + 0x32) = param_4;
        trace_event_buffer_commit(&uStack_78);
    }
code_r0x080069cc:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return;
    }
    auVar13 = __stack_chk_fail();
    piVar4 = auVar13._8_8_;
    iVar7 = auVar13._0_8_;
    *extraout_x18 = sym.perf_trace_nvme_sq;
    pcStack_b8 = sym.perf_trace_nvme_sq;
    iVar3 = sp_el0;
    iStack_c8 = *(iVar3 + 0x5e0);
    iStack_d0 = 0;
    uStack_d4 = 0;
    iVar3 = tpidr_el1;
    piVar1 = iVar3 + *(iVar7 + 0x78);
    puStack_c0 = &stack0xffffffffffffffc0;
    if (((*(iVar7 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar3 = perf_trace_buf_alloc(0x34,&iStack_d0,&uStack_d4), uVar2 = _trace_event_reg, iVar3 != 0)) {
        *(iStack_d0 + 0xe8) = &puStack_c0;
        *(iStack_d0 + 0xf8) = auStack_e0;
        *(iStack_d0 + 0x100) = ~(-1L << (uVar2 & 0x3f)) & 0x8006a04;
        *(iStack_d0 + 0x108) = 5;
        *(iVar3 + 8) = *(piVar4[0x29] + 0x68);
        iVar9 = piVar4[0x14];
        if (iVar9 == 0) {
            *(iVar3 + 0x1c) = 0;
            *(iVar3 + 0x24) = 0;
            *(iVar3 + 0xc) = 0;
            *(iVar3 + 0x14) = 0;
        }
        else {
            uVar10 = *(iVar9 + 0x24);
            uVar11 = *(iVar9 + 0x14);
            uVar8 = *(iVar9 + 0xc);
            *(iVar3 + 0x1c) = *(iVar9 + 0x1c);
            *(iVar3 + 0x24) = uVar10;
            *(iVar3 + 0xc) = uVar8;
            *(iVar3 + 0x14) = uVar11;
        }
        uVar12 = 0;
        if (*(*piVar4 + 0x58) != 0) {
            uVar12 = *(piVar4[2] + 0x1cc) + 1U & 0xffff;
        }
        *(iVar3 + 0x2c) = uVar12;
        *(iVar3 + 0x30) = uVar5;
        *(iVar3 + 0x32) = uVar6;
        perf_trace_run_bpf_submit(iVar3,0x34,uStack_d4,iVar7,1,iStack_d0,piVar1,0);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_c8) {
        __stack_chk_fail();
        uVar8 = tpidr_el2;
        *extraout_x18_00 = 0x8006b84;
        bpf_trace_run2(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_nvme_sq.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005cb0 (size 8) =====

void sym.__bpf_trace_nvme_sq.21529633b7289604a80e82acd8b43a39.cfi_jt
               (ulong param_1,ulong param_2,ushort param_3,uint param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run3(param_1,param_2,param_3,param_4);
    return;
}


// ===== sym.nvme_change_ctrl_state.cfi_jt @ 0x08005cb8 (size 8) =====

ulong sym.nvme_change_ctrl_state.cfi_jt(int64_t param_1,int param_2)

{
    int64_t iVar1;
    uint64_t *puVar2;
    uint32_t uVar3;
    int iVar4;
    char cVar5;
    bool bVar6;
    ulong uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = param_1 + 0xc;
    uVar7 = _raw_spin_lock_irqsave(iVar1);
    if (param_2 - 1U < 6) {
        uVar3 = *(param_1 + 4);
        switch(param_2) {
        case 1:
            if ((3 < uVar3) || (uVar3 == 1)) goto code_r0x08006e84;
            break;
        case 2:
            if (1 < uVar3) goto code_r0x08006e84;
            break;
        case 3:
            if ((uVar3 | 2) != 2) goto code_r0x08006e84;
            break;
        case 4:
            if (2 < uVar3 - 1) goto code_r0x08006e84;
            break;
        case 5:
            if ((uVar3 | 2) != 6) goto code_r0x08006e84;
            break;
        case 6:
            if (uVar3 != 4) goto code_r0x08006e84;
        }
        *(param_1 + 4) = param_2;
        __wake_up(param_1 + 0x550,3,0,0);
        _raw_spin_unlock_irqrestore(iVar1,uVar7);
        if (*(param_1 + 4) == 1) {
            if ((uVar3 == 3) && (*(param_1 + 0xc50) != 0)) {
                cancel_delayed_work_sync(param_1 + 0xb18);
                puVar2 = param_1 + 0xc48;
                Hint_Prefetch(puVar2,2,0,1);
                do {
                    cVar5 = '\x01';
                    bVar6 = ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar6) {
                        *puVar2 = *puVar2 & 0xfffffffffffffffe;
                        cVar5 = ExclusiveMonitorsStatus();
                    }
                } while (cVar5 != '\0');
                return 1;
            }
        }
        else {
            if (*(param_1 + 4) != 3) {
                return 1;
            }
            if (uVar3 != 2) {
                return 1;
            }
            if ((*(param_1 + 0xc50) != 0) && (iVar4 = *(*(param_1 + 0xc50) + 0x6c), iVar4 != -1)) {
                queue_delayed_work_on(0x20,_delayed_work_timer_fn,param_1 + 0xb18,iVar4 * 0xfa);
            }
        }
        uVar7 = 1;
    }
    else {
code_r0x08006e84:
        _raw_spin_unlock_irqrestore(iVar1,uVar7);
        uVar7 = 0;
    }
    return uVar7;
}


// ===== sym.nvme_release_subsystem.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005cc0 (size 8) =====

void sym.nvme_release_subsystem.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (-1 < *(param_1 + -8)) {
        ida_free(obj.nvme_instance_ida);
    }
    kfree(param_1 + -8);
    return;
}


// ===== sym.nvme_cdev_rel.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005cc8 (size 8) =====

void sym.nvme_cdev_rel.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ida_free(obj.nvme_ns_chr_minor_ida,*(param_1 + 0x300) & 0xfffff);
    return;
}


// ===== sym.nvme_free_ctrl.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005cd0 (size 8) =====

void sym.nvme_free_ctrl.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int *arg1;
    code *pcVar5;
    ulong unaff_x30;
    uchar auVar6 [12];
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    arg1 = *(param_1 + 0x498);
    if ((arg1 == NULL) || (*(param_1 + -0x68) != *arg1)) {
        ida_free(obj.nvme_instance_ida);
    }
    iVar4 = param_1 + 0x950;
    uStack_40 = 0;
    iVar1 = xa_find(iVar4,&uStack_40,0xffffffffffffffff,8);
    while (iVar1 != 0) {
        xa_erase(iVar4,uStack_40);
        kfree(iVar1);
        iVar1 = xa_find_after(iVar4,&uStack_40,0xffffffffffffffff,8);
    }
    xa_destroy(iVar4);
    __free_pages(*(param_1 + 0xb88),0);
    if (arg1 != NULL) {
        mutex_lock(obj.nvme_subsystems_lock);
        uVar2 = __list_del_entry_valid(param_1 + 0x4a0);
        if ((uVar2 & 1) != 0) {
            piVar3 = *(param_1 + 0x4a8);
            iVar4 = *(param_1 + 0x4a0);
            *(iVar4 + 8) = piVar3;
            *piVar3 = iVar4;
        }
        *(param_1 + 0x4a0) = 0xdead000000000100;
        *(param_1 + 0x4a8) = 0xdead000000000122;
        iVar4 = (*(param_1 + 0x390))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(param_1 + 0x390);
        }
        sysfs_remove_link(arg1 + 2,iVar4);
        mutex_unlock(obj.nvme_subsystems_lock);
    }
    pcVar5 = *(*(param_1 + -0x90) + 0x30);
    if (0xe < (pcVar5 + -0x8005e60 >> 3 | pcVar5 << 0x3d)) {
        __cfi_slowpath_diag(0x33d2dab7d229586b,pcVar5,0x8002890);
    }
    (*pcVar5)(param_1 + -0xd0);
    if (arg1 != NULL) {
        sym.nvme_put_subsystem(arg1);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    auVar6 = __stack_chk_fail();
    *extraout_x18 = sym.nvme_set_latency_tolerance;
    iVar1 = *(auVar6._0_8_ + 0x98);
    iVar4 = -1;
    if ((auVar6._8_4_ | 0x80000000) != 0xffffffff) {
        iVar4 = auVar6._8_4_;
    }
    if ((*(iVar1 + 0xc18) != iVar4) && (*(iVar1 + 0xc18) = iVar4, *(iVar1 + 4) == 1)) {
        sym.nvme_configure_apst(iVar1);
    }
    return;
}


// ===== sym.nvme_setup_cmd.cfi_jt @ 0x08005cd8 (size 8) =====

uint sym.nvme_setup_cmd.cfi_jt(int64_t param_1,int64_t param_2)

{
    code *pcVar1;
    uint uVar2;
    int64_t arg4;
    uint16_t uVar3;
    ulong *in_x18;
    ulong *arg3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg3 = *(param_2 + 0x130);
    iVar4 = *(param_2 + 0x148);
    if ((*(param_2 + 0x1c) >> 7 & 1) == 0) {
        *(param_2 + 0x144) = 0;
        *(param_2 + 0x141) = 0;
        *(param_2 + 0x1c) = *(param_2 + 0x1c) | 0x80;
        arg3[6] = 0;
        arg3[7] = 0;
        arg3[4] = 0;
        arg3[5] = 0;
        arg3[2] = 0;
        arg3[3] = 0;
        *arg3 = 0;
        arg3[1] = 0;
    }
    uVar2 = 0;
    switch(*(param_2 + 0x18)) {
    case 0:
        arg4 = 2;
        goto code_r0x08007ac0;
    case 1:
        arg4 = 1;
        goto code_r0x08007ac0;
    case 2:
        *arg3 = 0;
        uVar2 = 0;
        *(arg3 + 4) = *(*(param_1 + 0x40) + 0x2d0);
        break;
    case 3:
        goto code_r0x08007b3c;
    default:
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x8007ba0);
        (*pcVar1)();
    case 9:
        if ((*(*(param_1 + 0x10) + 0x610) >> 2 & 1) == 0) {
            *arg3 = 8;
            *(arg3 + 4) = *(*(param_1 + 0x40) + 0x2d0);
            arg3[5] = *(param_2 + 0x30) >> (*(param_1 + 0x48) - 9 & 0x3f);
            *(arg3 + 6) = (*(param_2 + 0x28) >> (*(param_1 + 0x48) & 0x1f)) + -1;
            if ((*(param_1 + 0x54) == '\0') || (*(param_1 + 0x4c) != 8)) {
                uVar2 = 0;
                *(arg3 + 0x32) = 0;
            }
            else {
                uVar2 = 0;
                *(arg3 + 0x32) = 0x2000;
            }
            break;
        }
        goto code_r0x08007b3c;
    case 10:
    case 0xb:
    case 0xc:
    case 0xf:
    case 0x11:
        uVar2 = 1;
        break;
    case 0xd:
        arg4 = 0x7d;
code_r0x08007ac0:
        uVar2 = sym.nvme_setup_rw(param_1,param_2,arg3,arg4);
        break;
    case 0x22:
    case 0x23:
        break;
    }
code_r0x08007b50:
    uVar3 = *(param_2 + 0x140);
    if ((*(iVar4 + 0x612) >> 1 & 1) == 0) {
        uVar3 = uVar3 + 1;
        *(param_2 + 0x140) = uVar3;
    }
    *(arg3 + 2) = *(param_2 + 0x20) | uVar3 << 0xc;
    return uVar2;
code_r0x08007b3c:
    uVar2 = sym.nvme_setup_discard(param_1,param_2,arg3);
    goto code_r0x08007b50;
}


// ===== sym.nvme_dev_open.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005ce0 (size 8) =====

ulong sym.nvme_dev_open.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint64_t uVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x2b0);
    if (*(iVar3 + -0x464) == 1) {
        get_device(*(iVar3 + -8));
        uVar1 = try_module_get(*(*(iVar3 + -0x428) + 8));
        if ((uVar1 & 1) == 0) {
            put_device(*(iVar3 + -8));
            uVar2 = 0xffffffea;
        }
        else {
            uVar2 = 0;
            *(param_2 + 0xd8) = iVar3 + -0x468;
        }
    }
    else {
        uVar2 = 0xfffffff5;
    }
    return uVar2;
}


// ===== sym.nvme_ns_chr_open.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005ce8 (size 8) =====

void sym.nvme_ns_chr_open.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.nvme_ns_open(*(param_1 + 0x2b0) - 0x68);
    return;
}


// ===== sym.nvme_dev_release.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005cf0 (size 8) =====

ulong sym.nvme_dev_release.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x2b0);
    module_put(*(*(iVar1 + -0x428) + 8));
    put_device(*(iVar1 + -8));
    return 0;
}


// ===== sym.nvme_ns_chr_release.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005cf8 (size 8) =====

ulong sym.nvme_ns_chr_release.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x2b0);
    module_put(*(*(*(iVar1 + -0x58) + 0x40) + 8));
    sym.nvme_put_ns(iVar1 + -0x68);
    return 0;
}


// ===== sym.nvme_class_uevent.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005d00 (size 8) =====

ulong sym.nvme_class_uevent.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1,ulong param_2)

{
    char *pcVar1;
    char *pcVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0xb80);
    uVar3 = add_uevent_var(param_2,"NVME_TRTYPE=%s",**(param_1 + -0x90));
    if (uVar3 == 0) {
        if (iVar4 == 0) {
            uVar3 = 0;
        }
        else {
            uVar3 = add_uevent_var(param_2,"NVME_TRADDR=%s",*(iVar4 + 0x18));
            if (uVar3 == 0) {
                pcVar1 = "none";
                pcVar2 = pcVar1;
                if (*(iVar4 + 0x20) != NULL) {
                    pcVar2 = *(iVar4 + 0x20);
                }
                uVar3 = add_uevent_var(param_2,"NVME_TRSVCID=%s",pcVar2);
                if (uVar3 == 0) {
                    pcVar2 = pcVar1;
                    if (*(iVar4 + 0x28) != NULL) {
                        pcVar2 = *(iVar4 + 0x28);
                    }
                    uVar3 = add_uevent_var(param_2,"NVME_HOST_TRADDR=%s",pcVar2);
                    if (uVar3 == 0) {
                        if (*(iVar4 + 0x30) != NULL) {
                            pcVar1 = *(iVar4 + 0x30);
                        }
                        uVar3 = add_uevent_var(param_2,"NVME_HOST_IFACE=%s",pcVar1);
                    }
                }
            }
        }
    }
    return uVar3;
}


// ===== sym.nvme_keep_alive_work.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005d08 (size 8) =====

void sym.nvme_keep_alive_work.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    ulong uVar5;
    ulong uVar6;
    uint32_t uVar7;
    int iVar8;
    uint8_t uVar9;
    int64_t *piVar10;
    uint64_t uVar11;
    uint uVar12;
    ulong *puVar13;
    ulong *in_x18;
    char *arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = param_1 + -0xa90;
    if (((*(param_1 + -0x494) >> 6 & 1) == 0) || (*arg1 == '\0')) {
        uVar9 = *(param_1 + 0x110);
        if (uVar9 == 0x7f) {
            uVar9 = *(param_1 + 0x114);
        }
        uVar12 = 0x22;
        if ((uVar9 & 1) != 0) {
            uVar12 = 0x23;
        }
        piVar10 = blk_mq_alloc_request(*(param_1 + -0xa48),uVar12,3);
        if (piVar10 < 0xfffffffffffff001) {
            pcVar1 = obj.admin_timeout;
            if (*(*piVar10 + 0x58) != 0) {
                pcVar1 = obj.nvme_io_timeout;
            }
            *(piVar10 + 0xec) = *pcVar1 * 0xfa;
            *(param_1 + 0x111) = *(param_1 + 0x111) & 0x3f;
            uVar7 = *(piVar10 + 3);
            *(piVar10 + 3) = uVar7 | 0x400;
            if (*(piVar10[2] + 300) == 2) {
                *(piVar10 + 3) = uVar7 | 0x1000400;
            }
            *(piVar10 + 0x144) = 0;
            *(piVar10 + 0x141) = 0;
            puVar13 = piVar10[0x26];
            *(piVar10 + 0x1c) = *(piVar10 + 0x1c) | 0x80;
            uVar3 = *(param_1 + 0x128);
            uVar2 = *(param_1 + 0x110);
            uVar4 = *(param_1 + 0x118);
            puVar13[2] = *(param_1 + 0x120);
            puVar13[3] = uVar3;
            puVar13[1] = uVar4;
            uVar3 = *(param_1 + 0x140);
            uVar5 = *(param_1 + 0x148);
            uVar4 = *(param_1 + 0x130);
            uVar6 = *(param_1 + 0x138);
            *puVar13 = uVar2;
            puVar13[6] = uVar3;
            puVar13[7] = uVar5;
            puVar13[4] = uVar4;
            puVar13[5] = uVar6;
            iVar8 = *(param_1 + -0x48c);
            piVar10[0x24] = arg1;
            *(piVar10 + 0xec) = iVar8 * 0xfa;
            blk_execute_rq_nowait(0,piVar10,0,sym.nvme_keep_alive_end_io.21529633b7289604a80e82acd8b43a39.cfi_jt);
        }
        else {
            _dev_err(*(param_1 + -0x630),"keep-alive failed: %ld\n");
            uVar11 = sym.nvme_change_ctrl_state(arg1,2);
            if ((uVar11 & 1) != 0) {
                queue_work_on(0x20,_segment.ehdr,param_1 + -0x5a0);
            }
        }
    }
    else {
        *arg1 = '\0';
        queue_delayed_work_on(0x20,_segment.ehdr,param_1,*(param_1 + -0x48c) * 0xfa >> 1);
    }
    return;
}


// ===== sym.nvme_scan_work.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005d10 (size 8) =====

void sym.nvme_scan_work.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    int64_t iVar6;
    int64_t arg1;
    uint uVar7;
    uint64_t *extraout_x8;
    uint64_t *puVar8;
    uint64_t uVar9;
    uint32_t uVar10;
    ulong *in_x18;
    int64_t unaff_x19;
    uint64_t unaff_x22;
    code *unaff_x25;
    ulong unaff_x30;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    uint64_t uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    if ((*(param_1 + -0xa2c) == 1) && (unaff_x19 = param_1 + -0xa30, *(param_1 + -0x9c0) != 0)) {
        uVar7 = 0;
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        uVar2 = *(param_1 + -0x462) & 4;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        *(param_1 + -0x470) = uVar2 << 6;
        *(param_1 + -0x474) = -((uVar2 << 0xd) >> 0xf);
        if (((*(param_1 + -0x462) >> 3 & 1) != 0) && ((*(param_1 + -0x420) >> 9 & 1) == 0)) {
            uVar7 = *(param_1 + -0x480);
        }
        unaff_x22 = 0x10100;
        unaff_x25 = trace_event_reg;
        uVar2 = 0x10100;
        if ((*(param_1 + -0x420) & 2) != 0) {
            uVar2 = 0x10200;
        }
        *(param_1 + -0x46c) = uVar7;
        if ((uVar2 <= *(param_1 + -0x44c)) &&
           (iVar6 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0xdc0,0x1000), iVar6 != 0)) {
            uStack_a8 = CONCAT71(uStack_a8._1_7_,6);
            uStack_80 = CONCAT71(uStack_80._1_7_,6);
            uStack_80 = uStack_80 & 0xffffffffffffff;
            iVar5 = sym.__nvme_submit_sync_cmd(*(param_1 + -0x9e8),&uStack_a8,0,iVar6);
            if (iVar5 == 0) {
                if (*(iVar6 + 3) != 0) {
                    *(param_1 + -0x470) = *(iVar6 + 3);
                }
                if (*(iVar6 + 4) != 0) {
                    *(param_1 + -0x474) = *(iVar6 + 4);
                }
                if (*(iVar6 + 1) != 0) {
                    uVar2 = *(iVar6 + 1) + (*(param_1 + -0x482) & 0xf) + 3;
                    uVar1 = uVar2;
                    if (0x1f < uVar2) {
                        uVar1 = 0;
                    }
                    uVar10 = 1L << (uVar1 & 0x3f);
                    if (uVar10 >> (uVar1 & 0x1f) != 1 || uVar1 != uVar2) {
                        uVar10 = 0xffffffff;
                    }
                    *(param_1 + -0x46c) = uVar10;
                }
                kfree(iVar6);
            }
            else {
                kfree(iVar6);
                if (iVar5 < 0) {
                    _dev_warn(*(param_1 + -0x5d0),"reading non-mdts-limits failed: %d\n",iVar5);
                    goto code_r0x0800b440;
                }
            }
        }
        puVar8 = param_1 + 0x1e0;
        goto code_r0x0800b484;
    }
code_r0x0800b440:
    do {
        iVar6 = sp_el0;
        if (*(iVar6 + 0x5e0) == iStack_68) {
            return;
        }
        __stack_chk_fail();
        puVar8 = extraout_x8;
code_r0x0800b484:
        Hint_Prefetch(puVar8,2,0,1);
        do {
            uVar9 = *puVar8;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar8,0x10);
            if (bVar4) {
                *puVar8 = uVar9 & 0xfffffffffffffffe;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
        if ((uVar9 & 1) != 0) {
            _dev_info(*(unaff_x19 + 0x460),"rescanning namespaces.\n");
            sym.nvme_clear_changed_ns_log(unaff_x19);
        }
        mutex_lock(unaff_x19 + 0x10);
        uVar2 = unaff_x22;
        if ((*(unaff_x19 + 0x610) & 2) != 0) {
            uVar2 = unaff_x22 + 0x100;
        }
        if ((uVar2 <= *(unaff_x19 + 0x5e4)) &&
           (iVar6 = kmem_cache_alloc_trace(*(unaff_x25 + 0x10),0xdc0,0x1000), iVar6 != 0)) {
            unaff_x22 = 0;
            while( true ) {
                uStack_78 = 0;
                uStack_70 = 0;
                uStack_88 = 0;
                uStack_98 = 0;
                uStack_90 = 0;
                uStack_a0 = 0;
                uStack_a8 = CONCAT44(unaff_x22,6);
                uStack_80 = 2;
                iVar5 = sym.__nvme_submit_sync_cmd(*(unaff_x19 + 0x48),&uStack_a8,0,iVar6);
                if (iVar5 != 0) break;
                iVar5 = 0;
                do {
                    uVar2 = *(iVar6 + iVar5 * 4);
                    if (uVar2 == 0) {
                        sym.nvme_remove_invalid_namespaces(unaff_x19,unaff_x22);
                        goto code_r0x0800b3f4;
                    }
                    sym.nvme_validate_or_alloc_ns(unaff_x19,uVar2);
                    uVar1 = unaff_x22 + 1;
                    unaff_x22 = uVar1;
                    uVar9 = unaff_x22;
                    if (uVar1 < uVar2) {
                        do {
                            arg1 = sym.nvme_find_get_ns(unaff_x19,uVar9);
                            if (arg1 != 0) {
                                sym.nvme_ns_remove(arg1);
                                sym.nvme_put_ns(arg1);
                            }
                            uVar1 = uVar9 + 1;
                            uVar9 = uVar1;
                            unaff_x22 = uVar2;
                        } while (uVar2 != uVar1);
                    }
                    iVar5 = iVar5 + 1;
                } while (iVar5 != 0x400);
            }
            _dev_warn(*(unaff_x19 + 0x460),"Identify NS List failed (status=0x%x)\n",iVar5);
            kfree(iVar6);
        }
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_a0 = 0;
        uStack_a8 = 6;
        uStack_80 = 1;
        iVar6 = kmem_cache_alloc_trace(*(unaff_x25 + 0x10),0xcc0,0x1000);
        if (iVar6 != 0) {
            iVar5 = sym.__nvme_submit_sync_cmd(*(unaff_x19 + 0x48),&uStack_a8,0,iVar6);
            if (iVar5 == 0) {
                uVar2 = *(iVar6 + 0x204);
                unaff_x22 = uVar2;
                kfree(iVar6);
                if (uVar2 != 0) {
                    uVar9 = 1;
                    do {
                        sym.nvme_validate_or_alloc_ns(unaff_x19,uVar9);
                        uVar1 = uVar9 + 1;
                        uVar9 = uVar1;
                    } while (uVar1 <= uVar2);
                }
                sym.nvme_remove_invalid_namespaces(unaff_x19,uVar2);
            }
            else {
code_r0x0800b3f4:
                kfree(iVar6);
            }
        }
        mutex_unlock(unaff_x19 + 0x10);
    } while( true );
}


// ===== sym.nvme_fw_act_work.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005d18 (size 8) =====

void sym.nvme_fw_act_work.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    int64_t iVar6;
    int64_t *piVar7;
    code *pcVar8;
    int64_t *piVar9;
    ulong unaff_x30;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar1 = _trace_event_ignore_this_pid;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    iVar5 = param_1 + -0xbe0;
    iVar2 = *0x8002000 * 1000;
    if (*(param_1 + -0x644) != 0) {
        iVar2 = *(param_1 + -0x644) * 100;
    }
    iVar3 = __msecs_to_jiffies(iVar2);
    iVar6 = param_1 + -0xb50;
    down_read(iVar6);
    piVar9 = param_1 + -0xb60;
    for (piVar7 = *piVar9; piVar7 != piVar9; piVar7 = *piVar7) {
        blk_mq_quiesce_queue(piVar7[3]);
    }
    up_read(iVar6);
    pcVar8 = *(*(param_1 + -0xba0) + 0x18);
    uStack_98 = uStack_98._4_4_ << 0x20;
    __cfi_slowpath_diag(0x79bc8fe92a26dc5e,pcVar8,0x8002830);
    iVar2 = (*pcVar8)(iVar5,0x1c,&uStack_98);
    if (iVar2 == 0) {
        while (((uStack_98 != 0xffffffff && ((*(param_1 + -0x648) & 1) != 0)) && ((uStack_98 >> 5 & 1) != 0))) {
            if ((iVar3 + iVar1) - _trace_event_ignore_this_pid < 0) {
                _dev_warn(*(param_1 + -0x780),"Fw activation timeout, reset controller\n");
                if (*(param_1 + -0xbdc) == 2) {
                    queue_work_on(0x20,_segment.ehdr,param_1 + -0x6f0);
                }
                goto code_r0x0800b770;
            }
            msleep(100);
            uStack_98 = uStack_98 & 0xffffffff00000000;
            pcVar8 = *(*(param_1 + -0xba0) + 0x18);
            __cfi_slowpath_diag(0x79bc8fe92a26dc5e,pcVar8,0x8002830);
            iVar2 = (*pcVar8)(iVar5,0x1c,&uStack_98);
            if (iVar2 != 0) break;
        }
    }
    uVar4 = sym.nvme_change_ctrl_state(iVar5,1);
    if ((uVar4 & 1) != 0) {
        down_read(iVar6);
        for (piVar7 = *piVar9; piVar7 != piVar9; piVar7 = *piVar7) {
            blk_mq_unquiesce_queue(piVar7[3]);
        }
        up_read(iVar6);
        iVar5 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0xcc0,0x200);
        if (iVar5 != 0) {
            uStack_90 = 0;
            uStack_68 = 0;
            uStack_98 = 0xffffffff00000002;
            uStack_60 = 0;
            uStack_80 = 0;
            uStack_78 = 0;
            uStack_70 = 0x7f0003;
            uStack_88 = 0;
            iVar2 = sym.__nvme_submit_sync_cmd(*(param_1 + -0xb98),&uStack_98,0,iVar5);
            if (iVar2 != 0) {
                _dev_warn(*(param_1 + -0x780),"Get FW SLOT INFO log error\n");
            }
            kfree(iVar5);
        }
    }
code_r0x0800b770:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_58) {
        return;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.nvme_delete_ctrl_work;
    sym.nvme_do_delete_ctrl(iVar5 + -0x520);
    return;
}


// ===== sym.nvme_delete_ctrl_work.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005d20 (size 8) =====

void sym.nvme_delete_ctrl_work.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.nvme_do_delete_ctrl(param_1 + -0x520);
    return;
}


// ===== sym.nvme_failfast_work.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005d28 (size 8) =====

void sym.nvme_failfast_work.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + -0xb14) == 3) {
        puVar1 = param_1 + 0x130;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 | 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        _dev_info(*(param_1 + -0x6b8),"failfast expired\n");
    }
    return;
}


// ===== sym.nvme_async_event_work.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005d30 (size 8) =====

void sym.nvme_async_event_work.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    code *pcVar3;
    code *extraout_x8;
    ulong *in_x18;
    ulong unaff_x30;
    int64_t aiStack_38 [3];
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    aiStack_38[2] = *(iVar2 + 0x5e0);
    iVar1 = *(param_1 + -0x468);
    aiStack_38[1] = 0;
    *(param_1 + -0x468) = 0;
    if (iVar1 != 0) {
        aiStack_38[0] = kasprintf(0xcc0,"NVME_AEN=%#08x");
        if (aiStack_38[0] != 0) {
            kobject_uevent_env(*(param_1 + -0x600),2,aiStack_38);
            kfree(aiStack_38[0]);
        }
    }
    if (*(param_1 + -0xa5c) != 1) goto code_r0x0800b568;
    pcVar3 = *(*(param_1 + -0xa20) + 0x38);
    if (0xe < (pcVar3 + -0x8005e60 >> 3 | pcVar3 << 0x3d)) goto code_r0x0800b598;
    while( true ) {
        (*pcVar3)(param_1 + -0xa60);
code_r0x0800b568:
        iVar2 = sp_el0;
        if (*(iVar2 + 0x5e0) == aiStack_38[2]) break;
        __stack_chk_fail();
        pcVar3 = extraout_x8;
code_r0x0800b598:
        __cfi_slowpath_diag(0x33d2dab7d229586b,pcVar3,0x8002810);
    }
    return;
}


// ===== sym.nvme_pr_release.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005d38 (size 8) =====

void sym.nvme_pr_release.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1,int64_t param_2,int param_3)

{
    int iVar1;
    ulong uVar2;
    int64_t *arg4;
    uint64_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    code *pcVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    int64_t aiStack_148 [2];
    uint uStack_138;
    uint uStack_134;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    uint64_t uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    uchar **ppuStack_f0;
    code *pcStack_e8;
    uint uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    uint uStack_c8;
    uint uStack_c4;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    uint64_t uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uint uStack_70;
    int64_t aiStack_68 [2];
    uint uStack_58;
    uint uStack_54;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    uint64_t uStack_30;
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_18 = *(iVar6 + 0x5e0);
    arg4 = aiStack_68;
    uVar3 = 0;
    uVar5 = (param_3 - 1U) * 0x100 + 0x100;
    if (5 < param_3 - 1U) {
        uVar5 = 0;
    }
    aiStack_68[1] = 0;
    iVar6 = *(*(param_1 + 0x3f0) + 0x58);
    uVar2 = 0;
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_38 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_30 = uVar5 | (param_2 == 0) << 3;
    _uStack_58 = CONCAT44(*(*(iVar6 + 0x40) + 0x2d0),0x15);
    uStack_70 = 0;
    aiStack_68[0] = param_2;
    sym.__nvme_submit_sync_cmd(*(iVar6 + 0x18),&uStack_58,0,arg4);
    iVar1 = arg4;
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_18) {
        return;
    }
    auVar8 = __stack_chk_fail();
    uStack_d8 = auVar8._8_8_;
    *extraout_x18 = sym.nvme_pr_preempt;
    pcStack_78 = sym.nvme_pr_preempt;
    iVar6 = sp_el0;
    iStack_88 = *(iVar6 + 0x5e0);
    uVar5 = (iVar1 - 1U) * 0x100 + 0x100;
    if (5 < iVar1 - 1U) {
        uVar5 = 0;
    }
    uVar4 = 1;
    if ((uVar3 & 1) != 0) {
        uVar4 = 2;
    }
    iVar6 = *(*(auVar8._0_8_ + 0x3f0) + 0x58);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c0 = 0;
    uStack_a0 = uVar5 | uVar4;
    _uStack_c8 = CONCAT44(*(*(iVar6 + 0x40) + 0x2d0),0x11);
    uStack_e0 = 0;
    uStack_d0 = uVar2;
    puStack_80 = &stack0xfffffffffffffff0;
    sym.__nvme_submit_sync_cmd(*(iVar6 + 0x18),&uStack_c8,0,&uStack_d8);
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_88) {
        return;
    }
    auVar8 = __stack_chk_fail();
    aiStack_148[0] = auVar8._8_8_;
    *extraout_x18_00 = sym.nvme_pr_clear;
    pcStack_e8 = sym.nvme_pr_clear;
    iVar6 = sp_el0;
    iStack_f8 = *(iVar6 + 0x5e0);
    uVar5 = 9;
    if (aiStack_148[0] != 0) {
        uVar5 = 1;
    }
    uStack_130 = 0;
    aiStack_148[1] = 0;
    iVar6 = *(*(auVar8._0_8_ + 0x3f0) + 0x58);
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_110 = uVar5;
    _uStack_138 = CONCAT44(*(*(iVar6 + 0x40) + 0x2d0),0x15);
    ppuStack_f0 = &puStack_80;
    sym.__nvme_submit_sync_cmd(*(iVar6 + 0x18),&uStack_138,0,aiStack_148);
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_f8) {
        return;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18_01 = sym.nvme_disable_ctrl;
    *(iVar6 + 0x598) = *(iVar6 + 0x598) & 0xffff3ffe;
    pcVar7 = *(*(iVar6 + 0x40) + 0x20);
    __cfi_slowpath_diag(0x5fd0dd7266111d21,pcVar7,0x8002710);
    iVar1 = (*pcVar7)(iVar6,0x14,*(iVar6 + 0x598));
    if (iVar1 == 0) {
        if ((*(iVar6 + 0x610) >> 3 & 1) != 0) {
            msleep(0x8fc);
        }
        sym.nvme_wait_ready(iVar6,*(iVar6 + 0x5a8),0);
    }
    return;
}


// ===== sym.__typeid__ZTSFvP4krefE_global_addr @ 0x08005d40 (size 8) =====

void sym.__typeid__ZTSFvP4krefE_global_addr(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.nvme_subsystems_lock);
    uVar3 = __list_del_entry_valid(param_1 + 8);
    if ((uVar3 & 1) != 0) {
        iVar1 = *(param_1 + 8);
        piVar2 = *(param_1 + 0x10);
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    *(param_1 + 8) = 0xdead000000000100;
    *(param_1 + 0x10) = 0xdead000000000122;
    mutex_unlock(obj.nvme_subsystems_lock);
    ida_destroy(param_1 + 400);
    device_del(param_1 + -0x390);
    put_device(param_1 + -0x390);
    return;
}


// ===== sym.nvme_free_ns.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005d48 (size 8) =====

void sym.nvme_free_ns.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    put_disk(*(param_1 + -0x18));
    sym.nvme_put_ns_head(*(param_1 + 8));
    put_device(*(*(param_1 + -0x28) + 0x460));
    kfree(param_1 + -0x38);
    return;
}


// ===== sym.nvme_free_ns_head.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005d50 (size 8) =====

void sym.nvme_free_ns_head.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ida_free(*(param_1 + -0x48) + 0x528,*(param_1 + 8));
    cleanup_srcu_struct(param_1 + -0x300);
    sym.nvme_put_subsystem(*(param_1 + -0x48));
    kfree(param_1 + -0x310);
    return;
}


// ===== sym.trace_raw_output_nvme_sq.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005d58 (size 8) =====

void sym.trace_raw_output_nvme_sq.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint uVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0x20e8);
    iVar2 = trace_raw_output_prep(param_1,param_3);
    if (iVar2 == 1) {
        uVar1 = *(iVar4 + 8);
        uVar3 = sym.nvme_trace_disk_name(param_1 + 0x88,iVar4 + 0xc);
        trace_event_printf(param_1,"nvme%d: %sqid=%d, head=%u, tail=%u\n",uVar1,uVar3,*(iVar4 + 0x2c),
                           *(iVar4 + 0x30),*(iVar4 + 0x32));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_nvme_async_event.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005d60 (size 8) =====

void sym.trace_raw_output_nvme_async_event.21529633b7289604a80e82acd8b43a39.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3)

{
    uint uVar1;
    uint uVar2;
    int iVar3;
    ulong uVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_1 + 0x20e8);
    iVar3 = trace_raw_output_prep(param_1,param_3);
    if (iVar3 == 1) {
        uVar1 = *(iVar5 + 8);
        uVar2 = *(iVar5 + 0xc);
        uVar4 = trace_print_symbols_seq(param_1 + 0x88,uVar2,obj.trace_raw_output_nvme_async_event.symbols);
        trace_event_printf(param_1,"nvme%d: NVME_AEN=%#08x [%s]\n",uVar1,uVar2,uVar4);
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_nvme_setup_cmd.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005d68 (size 8) =====

void sym.trace_raw_output_nvme_setup_cmd.21529633b7289604a80e82acd8b43a39.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3)

{
    int64_t arg1;
    uint uVar1;
    uint uVar2;
    uchar uVar3;
    uchar uVar4;
    uint8_t uVar5;
    ushort uVar6;
    int iVar7;
    ulong uVar8;
    ulong uVar9;
    ulong uVar10;
    char cVar11;
    code *pcVar12;
    ulong *in_x18;
    int64_t iVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar13 = *(param_1 + 0x20e8);
    iVar7 = trace_raw_output_prep(param_1,param_3);
    if (iVar7 == 1) {
        arg1 = param_1 + 0x88;
        uVar1 = *(iVar13 + 0x28);
        uVar8 = sym.nvme_trace_disk_name(arg1,iVar13 + 8);
        cVar11 = *(iVar13 + 0x30);
        iVar7 = *(iVar13 + 0x2c);
        uVar6 = *(iVar13 + 0x34);
        uVar2 = *(iVar13 + 0x38);
        uVar3 = *(iVar13 + 0x31);
        uVar4 = *(iVar13 + 0x3c);
        if (cVar11 == '\x7f') {
            cVar11 = *(iVar13 + 0x32);
            pcVar12 = obj.trace_raw_output_nvme_setup_cmd.symbols;
        }
        else if (iVar7 == 0) {
            pcVar12 = obj.trace_raw_output_nvme_setup_cmd.symbols.48;
        }
        else {
            pcVar12 = obj.trace_raw_output_nvme_setup_cmd.symbols.33;
        }
        uVar9 = trace_print_symbols_seq(arg1,cVar11,pcVar12);
        uVar5 = *(iVar13 + 0x30);
        if (uVar5 == 0x7f) {
            uVar10 = sym.nvme_trace_parse_fabrics_cmd(arg1,*(iVar13 + 0x32),iVar13 + 0x3d);
        }
        else if (*(iVar13 + 0x2c) == 0) {
            uVar10 = sym.nvme_trace_parse_admin_cmd(arg1,uVar5,iVar13 + 0x3d);
        }
        else {
            uVar10 = sym.nvme_trace_parse_nvm_cmd(arg1,uVar5,iVar13 + 0x3d);
        }
        trace_event_printf(param_1,"nvme%d: %sqid=%d, cmdid=%u, nsid=%u, flags=0x%x, meta=0x%x, cmd=(%s %s)\n",uVar1,
                           uVar8,iVar7,uVar6,uVar2,uVar3,uVar4,uVar9,uVar10);
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_nvme_complete_rq.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005d70 (size 8) =====

void sym.trace_raw_output_nvme_complete_rq.21529633b7289604a80e82acd8b43a39.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3)

{
    uint uVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0x20e8);
    iVar2 = trace_raw_output_prep(param_1,param_3);
    if (iVar2 == 1) {
        uVar1 = *(iVar4 + 0x28);
        uVar3 = sym.nvme_trace_disk_name(param_1 + 0x88,iVar4 + 8);
        trace_event_printf(param_1,"nvme%d: %sqid=%d, cmdid=%u, res=%#llx, retries=%u, flags=0x%x, status=%#x\n",uVar1
                           ,uVar3,*(iVar4 + 0x2c),*(iVar4 + 0x30),*(iVar4 + 0x38),*(iVar4 + 0x40),*(iVar4 + 0x41)
                           ,*(iVar4 + 0x42));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.nvme_dev_attrs_are_visible.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005d78 (size 8) =====

ushort sym.nvme_dev_attrs_are_visible.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1,code *param_2)

{
    int64_t iVar1;
    
    iVar1 = *(param_1 + 0x98);
    if (param_2 == obj.dev_attr_delete_controller) {
        iVar1 = *(*(iVar1 + 0x40) + 0x40);
    }
    else if (param_2 == obj.dev_attr_address) {
        iVar1 = *(*(iVar1 + 0x40) + 0x50);
    }
    else {
        if ((((param_2 != obj.dev_attr_hostnqn) && (param_2 != obj.dev_attr_hostid)) &&
            (param_2 != obj.dev_attr_ctrl_loss_tmo)) &&
           ((param_2 != obj.dev_attr_reconnect_delay && (param_2 != obj.dev_attr_fast_io_fail_tmo))))
        goto code_r0x0800e99c;
        iVar1 = *(iVar1 + 0xc50);
    }
    if (iVar1 == 0) {
        return 0;
    }
code_r0x0800e99c:
    return *(param_2 + 8);
}


// ===== sym.nvme_ns_id_attrs_are_visible.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005d80 (size 8) =====

ushort sym.nvme_ns_id_attrs_are_visible.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1,code *param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    int64_t *piVar2;
    
    *in_x18 = unaff_x30;
    piVar2 = *(param_1 + 0x3b0) + 0x58;
    if (*(*(param_1 + 0x3b0) + 0x48) == obj.nvme_bdev_ops) {
        piVar2 = *piVar2 + 0x40;
    }
    iVar1 = *piVar2;
    if (param_2 == obj.dev_attr_uuid) {
        if (*(iVar1 + 0x2ec) != _uuid_null || *(iVar1 + 0x2f4) != _try_module_get) goto code_r0x0800cc14;
    }
    else if (param_2 != obj.dev_attr_nguid) {
        if ((param_2 == obj.dev_attr_eui) && (iVar1 = memchr_inv(iVar1 + 0x2d4,0,8), iVar1 == 0)) {
            return 0;
        }
        goto code_r0x0800cc14;
    }
    iVar1 = memchr_inv(iVar1 + 0x2dc,0,0x10);
    if (iVar1 == 0) {
        return 0;
    }
code_r0x0800cc14:
    return *(param_2 + 8);
}


// ===== sym.nvme_init_ctrl.cfi_jt @ 0x08005d88 (size 8) =====

int sym.nvme_init_ctrl.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3,ulong param_4)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    uint64_t uVar6;
    int iVar7;
    int64_t iVar8;
    uint uVar9;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = param_1 + 0xc48;
    *(param_1 + 4) = 0;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = *puVar1 & 0xfffffffffffffffe;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    *(param_1 + 0xc) = 0;
    __mutex_init(param_1 + 0x10,"&ctrl->scan_lock",obj.nvme_init_ctrl.__key);
    *(param_1 + 0x80) = param_1 + 0x80;
    *(param_1 + 0x88) = param_1 + 0x80;
    *(param_1 + 0xa20) = 0;
    *(param_1 + 0xa28) = 0;
    __init_rwsem(param_1 + 0x90,"&ctrl->namespaces_rwsem",obj.nvme_init_ctrl.__key);
    *(param_1 + 0x60) = param_2;
    *(param_1 + 0x40) = param_3;
    *(param_1 + 0x6c) = 0xffffffff;
    *(param_1 + 0x610) = param_4;
    *(param_1 + 0xa30) = 0xfffffffe0;
    *(param_1 + 0xa38) = param_1 + 0xa38;
    *(param_1 + 0xa40) = param_1 + 0xa38;
    *(param_1 + 0xa48) = sym.nvme_scan_work.21529633b7289604a80e82acd8b43a39.cfi_jt;
    *(param_1 + 0xa60) = 0xfffffffe0;
    *(param_1 + 0xa68) = param_1 + 0xa68;
    *(param_1 + 0xa70) = param_1 + 0xa68;
    *(param_1 + 0xa78) = sym.nvme_async_event_work.21529633b7289604a80e82acd8b43a39.cfi_jt;
    *(param_1 + 0xbe0) = 0xfffffffe0;
    *(param_1 + 0xbe8) = param_1 + 0xbe8;
    *(param_1 + 0xbf0) = param_1 + 0xbe8;
    *(param_1 + 0xbf8) = sym.nvme_fw_act_work.21529633b7289604a80e82acd8b43a39.cfi_jt;
    *(param_1 + 0x520) = 0xfffffffe0;
    *(param_1 + 0x528) = param_1 + 0x528;
    *(param_1 + 0x530) = param_1 + 0x528;
    *(param_1 + 0x538) = sym.nvme_delete_ctrl_work.21529633b7289604a80e82acd8b43a39.cfi_jt;
    __init_waitqueue_head(param_1 + 0x550,"&ctrl->state_wq",obj.nvme_init_ctrl.__key);
    *(param_1 + 0xa90) = 0xfffffffe0;
    *(param_1 + 0xa98) = param_1 + 0xa98;
    *(param_1 + 0xaa0) = param_1 + 0xa98;
    *(param_1 + 0xaa8) = sym.nvme_keep_alive_work.21529633b7289604a80e82acd8b43a39.cfi_jt;
    init_timer_key(param_1 + 0xac0,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
    *(param_1 + 0xb18) = 0xfffffffe0;
    *(param_1 + 0xb20) = param_1 + 0xb20;
    *(param_1 + 0xb28) = param_1 + 0xb20;
    *(param_1 + 0xb30) = sym.nvme_failfast_work.21529633b7289604a80e82acd8b43a39.cfi_jt;
    init_timer_key(param_1 + 0xb48,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
    *(param_1 + 0xba0) = 0;
    *(param_1 + 0xbd8) = 0;
    *(param_1 + 0xbd0) = 0;
    *(param_1 + 0xbc8) = 0;
    *(param_1 + 0xbc0) = 0;
    *(param_1 + 3000) = 0;
    *(param_1 + 0xbb0) = 0;
    *(param_1 + 0xba8) = 0;
    *(param_1 + 0xba0) = 0x18;
    uVar5 = tpidr_el1;
    iVar8 = __alloc_pages(uVar5,0xcc0,0,0,0);
    *(param_1 + 0xc58) = iVar8;
    if (iVar8 == 0) {
        iVar7 = -0xc;
    }
    else {
        iVar7 = ida_alloc_range(obj.nvme_instance_ida,0,0xffffffff,0xcc0);
        if (-1 < iVar7) {
            iVar8 = param_1 + 0xd0;
            *(param_1 + 0x68) = iVar7;
            device_initialize(iVar8);
            uVar5 = CONCAT44(*0x8000004,_segment.ehdr);
            uVar2 = _segment.ehdr & 0xfff00000;
            *(param_1 + 0x3f8) = obj.nvme_dev_attr_groups;
            *(param_1 + 0x400) = sym.nvme_free_ctrl.21529633b7289604a80e82acd8b43a39.cfi_jt;
            *(param_1 + 0x130) = *(param_1 + 0x60);
            *(param_1 + 0x3f0) = uVar5;
            *(param_1 + 0x460) = iVar8;
            *(param_1 + 0x3d0) = uVar2 | *(param_1 + 0x68);
            *(param_1 + 0x168) = param_1;
            iVar7 = dev_set_name(iVar8,"nvme%d");
            if (iVar7 == 0) {
                get_device(*(param_1 + 0x460));
                cdev_init(param_1 + 0x468,obj.nvme_dev_fops);
                *(param_1 + 0x4c8) = *(param_3 + 8);
                iVar7 = cdev_device_add(param_1 + 0x468,*(param_1 + 0x460));
                uVar6 = *0x8002000;
                if (iVar7 == 0) {
                    *(*(param_1 + 0x460) + 0x240) =
                         sym.nvme_set_latency_tolerance.21529633b7289604a80e82acd8b43a39.cfi_jt;
                    uVar9 = uVar6;
                    if (0x7ffffffe < uVar6) {
                        uVar9 = 0x7fffffff;
                    }
                    dev_pm_qos_update_user_latency_tolerance(*(param_1 + 0x460),uVar9);
                    return 0;
                }
                put_device();
                kfree_const(**(param_1 + 0x460));
            }
            ida_free(obj.nvme_instance_ida,*(param_1 + 0x68));
        }
        if (*(param_1 + 0xc58) != 0) {
            __free_pages(*(param_1 + 0xc58),0);
        }
    }
    return iVar7;
}


// ===== sym.uuid_show.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005d90 (size 8) =====

int64_t sym.uuid_show.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *(param_1 + 0x3b0) + 0x58;
    if (*(*(param_1 + 0x3b0) + 0x48) == obj.nvme_bdev_ops) {
        piVar2 = *piVar2 + 0x40;
    }
    iVar3 = *piVar2;
    piVar2 = iVar3 + 0x2ec;
    if (*piVar2 == _uuid_null && *(iVar3 + 0x2f4) == _try_module_get) {
        iVar1 = ___ratelimit(obj.uuid_show._rs,"uuid_show");
        if (iVar1 != 0) {
            _dev_warn(param_1,"No UUID available providing old NGUID\n");
        }
        piVar2 = iVar3 + 0x2dc;
    }
    iVar1 = sysfs_emit(param_3,"%pU\n",piVar2);
    return iVar1;
}


// ===== sym.firmware_rev_show.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005d98 (size 8) =====

int64_t sym.firmware_rev_show.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_3,"%.*s\n",8,*(*(param_1 + 0x98) + 0x568) + 0x51b);
    return iVar1;
}


// ===== sym.sqsize_show.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005da0 (size 8) =====

int64_t sym.sqsize_show.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_3,0x80034b6,*(*(param_1 + 0x98) + 0x5d6));
    return iVar1;
}


// ===== sym.nvme_sysfs_show_hostid.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005da8 (size 8) =====

int64_t sym.nvme_sysfs_show_hostid.21529633b7289604a80e82acd8b43a39.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_3,"%pU\n",*(*(*(param_1 + 0x98) + 0xc50) + 0x50) + 0xf7);
    return iVar1;
}


// ===== sym.eui_show.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005db0 (size 8) =====

int64_t sym.eui_show.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *(param_1 + 0x3b0) + 0x58;
    if (*(*(param_1 + 0x3b0) + 0x48) == obj.nvme_bdev_ops) {
        piVar2 = *piVar2 + 0x40;
    }
    iVar1 = sysfs_emit(param_3,"%8ph\n",*piVar2 + 0x2d4);
    return iVar1;
}


// ===== sym.nvme_sysfs_show_transport.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005db8 (size 8) =====

int64_t sym.nvme_sysfs_show_transport.21529633b7289604a80e82acd8b43a39.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_3,0x8003d42,**(*(param_1 + 0x98) + 0x40));
    return iVar1;
}


// ===== sym.nvme_ctrl_reconnect_delay_show.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005dc0 (size 8) =====

int64_t sym.nvme_ctrl_reconnect_delay_show.21529633b7289604a80e82acd8b43a39.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(*(*(param_1 + 0x98) + 0xc50) + 0x44);
    if (iVar1 == -1) {
        iVar1 = sysfs_emit(param_3,"off\n");
    }
    else {
        iVar1 = sysfs_emit(param_3,0x80034b6,iVar1);
    }
    return iVar1;
}


// ===== sym.nsid_show.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005dc8 (size 8) =====

int64_t sym.nsid_show.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *(param_1 + 0x3b0) + 0x58;
    if (*(*(param_1 + 0x3b0) + 0x48) == obj.nvme_bdev_ops) {
        piVar2 = *piVar2 + 0x40;
    }
    iVar1 = sysfs_emit(param_3,0x80034b6,*(*piVar2 + 0x2d0));
    return iVar1;
}


// ===== sym.nvme_subsys_show_nqn.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005dd0 (size 8) =====

int64_t sym.nvme_subsys_show_nqn.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_3,0x8003d42,param_1 + 0x3f8);
    return iVar1;
}


// ===== sym.queue_count_show.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005dd8 (size 8) =====

int64_t sym.queue_count_show.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_3,0x80034b6,*(*(param_1 + 0x98) + 0x5a0));
    return iVar1;
}


// ===== sym.nvme_sysfs_show_state.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005de0 (size 8) =====

int64_t sym.nvme_sysfs_show_state.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint32_t uVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(*(param_1 + 0x98) + 4);
    if (uVar1 < 7) {
        iVar2 = sysfs_emit(param_3,0x8003d42,*(obj.nvme_sysfs_show_state.state_name + uVar1 * 8));
    }
    else {
        iVar2 = sysfs_emit(param_3,"unknown state\n");
    }
    return iVar2;
}


// ===== sym.wwid_show.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005de8 (size 8) =====

int64_t sym.wwid_show.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uchar uVar1;
    int iVar2;
    int64_t iVar3;
    char *pcVar4;
    int64_t *piVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar5 = *(param_1 + 0x3b0) + 0x58;
    if (*(*(param_1 + 0x3b0) + 0x48) == obj.nvme_bdev_ops) {
        piVar5 = *piVar5 + 0x40;
    }
    iVar7 = *piVar5;
    piVar5 = iVar7 + 0x2ec;
    if (*piVar5 == _uuid_null && *(iVar7 + 0x2f4) == _try_module_get) {
        piVar5 = iVar7 + 0x2dc;
        iVar8 = *(iVar7 + 0x2c8);
        iVar3 = memchr_inv(piVar5,0,0x10);
        if (iVar3 == 0) {
            piVar5 = iVar7 + 0x2d4;
            iVar3 = memchr_inv(piVar5,0,8);
            if (iVar3 == 0) {
                if ((*(iVar8 + 0x4f2) | 0x20) == 0x20) {
                    if ((*(iVar8 + 0x4f1) | 0x20) == 0x20) {
                        if ((*(iVar8 + 0x4f0) | 0x20) == 0x20) {
                            if ((*(iVar8 + 0x4ef) | 0x20) == 0x20) {
                                if ((*(iVar8 + 0x4ee) | 0x20) == 0x20) {
                                    if ((*(iVar8 + 0x4ed) | 0x20) == 0x20) {
                                        if ((*(iVar8 + 0x4ec) | 0x20) == 0x20) {
                                            if ((*(iVar8 + 0x4eb) | 0x20) == 0x20) {
                                                if ((*(iVar8 + 0x4ea) | 0x20) == 0x20) {
                                                    if ((*(iVar8 + 0x4e9) | 0x20) == 0x20) {
                                                        if ((*(iVar8 + 0x4e8) | 0x20) == 0x20) {
                                                            if ((*(iVar8 + 0x4e7) | 0x20) == 0x20) {
                                                                if ((*(iVar8 + 0x4e6) | 0x20) == 0x20) {
                                                                    if ((*(iVar8 + 0x4e5) | 0x20) == 0x20) {
                                                                        if ((*(iVar8 + 0x4e4) | 0x20) == 0x20) {
                                                                            if ((*(iVar8 + 0x4e3) | 0x20) == 0x20) {
                                                                                if ((*(iVar8 + 0x4e2) | 0x20) == 0x20) {
                                                                                    if ((*(iVar8 + 0x4e1) | 0x20) ==
                                                                                        0x20) {
                                                                                        if ((*(iVar8 + 0x4e0) | 0x20) ==
                                                                                            0x20) {
                                                                                            uVar1 = (*(iVar8 + 0x4df) &
                                                                                                    0xdf) != 0;
                                                                                        }
                                                                                        else {
                                                                                            uVar1 = 2;
                                                                                        }
                                                                                    }
                                                                                    else {
                                                                                        uVar1 = 3;
                                                                                    }
                                                                                }
                                                                                else {
                                                                                    uVar1 = 4;
                                                                                }
                                                                            }
                                                                            else {
                                                                                uVar1 = 5;
                                                                            }
                                                                        }
                                                                        else {
                                                                            uVar1 = 6;
                                                                        }
                                                                    }
                                                                    else {
                                                                        uVar1 = 7;
                                                                    }
                                                                }
                                                                else {
                                                                    uVar1 = 8;
                                                                }
                                                            }
                                                            else {
                                                                uVar1 = 9;
                                                            }
                                                        }
                                                        else {
                                                            uVar1 = 10;
                                                        }
                                                    }
                                                    else {
                                                        uVar1 = 0xb;
                                                    }
                                                }
                                                else {
                                                    uVar1 = 0xc;
                                                }
                                            }
                                            else {
                                                uVar1 = 0xd;
                                            }
                                        }
                                        else {
                                            uVar1 = 0xe;
                                        }
                                    }
                                    else {
                                        uVar1 = 0xf;
                                    }
                                }
                                else {
                                    uVar1 = 0x10;
                                }
                            }
                            else {
                                uVar1 = 0x11;
                            }
                        }
                        else {
                            uVar1 = 0x12;
                        }
                    }
                    else {
                        uVar1 = 0x13;
                    }
                }
                else {
                    uVar1 = 0x14;
                }
                iVar3 = 0x51a;
                do {
                    if ((*(iVar8 + iVar3) | 0x20) != 0x20) {
                        iVar2 = iVar3 + -0x4f2;
                        goto code_r0x0800d220;
                    }
                    uVar6 = iVar3 - 0x4f2;
                    iVar3 = iVar3 + -1;
                } while (1 < uVar6);
                iVar2 = 0;
code_r0x0800d220:
                iVar2 = sysfs_emit(param_3,"nvme.%04x-%*phN-%*phN-%08x\n",*(iVar8 + 0x524),uVar1,iVar8 + 0x4df,
                                   iVar2,iVar8 + 0x4f3,*(iVar7 + 0x2d0));
                goto code_r0x0800cff8;
            }
            pcVar4 = "eui.%8phN\n";
        }
        else {
            pcVar4 = "eui.%16phN\n";
        }
    }
    else {
        pcVar4 = "uuid.%pU\n";
    }
    iVar2 = sysfs_emit(param_3,pcVar4,piVar5);
code_r0x0800cff8:
    return iVar2;
}


// ===== sym.nvme_ctrl_fast_io_fail_tmo_show.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005df0 (size 8) =====

int64_t sym.nvme_ctrl_fast_io_fail_tmo_show.21529633b7289604a80e82acd8b43a39.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(*(*(param_1 + 0x98) + 0xc50) + 0x6c);
    if (iVar1 == -1) {
        iVar1 = sysfs_emit(param_3,"off\n");
    }
    else {
        iVar1 = sysfs_emit(param_3,0x80034b6,iVar1);
    }
    return iVar1;
}


// ===== sym.nvme_sysfs_show_hostnqn.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005df8 (size 8) =====

int64_t sym.nvme_sysfs_show_hostnqn.21529633b7289604a80e82acd8b43a39.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_3,0x8003d42,*(*(*(param_1 + 0x98) + 0xc50) + 0x50) + 0x18);
    return iVar1;
}


// ===== sym.cntlid_show.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005e00 (size 8) =====

int64_t sym.cntlid_show.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_3,0x80034b6,*(*(param_1 + 0x98) + 0x594));
    return iVar1;
}


// ===== sym.nvme_sysfs_show_subsysnqn.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005e08 (size 8) =====

int64_t sym.nvme_sysfs_show_subsysnqn.21529633b7289604a80e82acd8b43a39.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_3,0x8003d42,*(*(param_1 + 0x98) + 0x568) + 0x400);
    return iVar1;
}


// ===== sym.kato_show.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005e10 (size 8) =====

int64_t sym.kato_show.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_3,0x80034b6,*(*(param_1 + 0x98) + 0x604));
    return iVar1;
}


// ===== sym.numa_node_show.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005e18 (size 8) =====

int64_t sym.numa_node_show.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_3,0x80034b6,*(*(param_1 + 0x98) + 0x6c));
    return iVar1;
}


// ===== sym.serial_show.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005e20 (size 8) =====

int64_t sym.serial_show.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_3,"%.*s\n",0x14,*(*(param_1 + 0x98) + 0x568) + 0x4df);
    return iVar1;
}


// ===== sym.nguid_show.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005e28 (size 8) =====

int64_t sym.nguid_show.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *(param_1 + 0x3b0) + 0x58;
    if (*(*(param_1 + 0x3b0) + 0x48) == obj.nvme_bdev_ops) {
        piVar2 = *piVar2 + 0x40;
    }
    iVar1 = sysfs_emit(param_3,"%pU\n",*piVar2 + 0x2dc);
    return iVar1;
}


// ===== sym.subsys_serial_show.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005e30 (size 8) =====

int64_t sym.subsys_serial_show.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_3,"%.*s\n",0x14,param_1 + 0x4d7);
    return iVar1;
}


// ===== sym.subsys_model_show.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005e38 (size 8) =====

int64_t sym.subsys_model_show.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_3,"%.*s\n",0x28,param_1 + 0x4eb);
    return iVar1;
}


// ===== sym.subsys_firmware_rev_show.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005e40 (size 8) =====

int64_t sym.subsys_firmware_rev_show.21529633b7289604a80e82acd8b43a39.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_3,"%.*s\n",8,param_1 + 0x513);
    return iVar1;
}


// ===== sym.nvme_ctrl_loss_tmo_show.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005e48 (size 8) =====

int64_t sym.nvme_ctrl_loss_tmo_show.21529633b7289604a80e82acd8b43a39.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x98) + 0xc50);
    iVar1 = *(iVar2 + 0x58);
    if (iVar1 == -1) {
        iVar1 = sysfs_emit(param_3,"off\n");
    }
    else {
        iVar1 = sysfs_emit(param_3,0x80034b6,*(iVar2 + 0x44) * iVar1);
    }
    return iVar1;
}


// ===== sym.model_show.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005e50 (size 8) =====

int64_t sym.model_show.21529633b7289604a80e82acd8b43a39.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_3,"%.*s\n",0x28,*(*(param_1 + 0x98) + 0x568) + 0x4f3);
    return iVar1;
}


// ===== sym.nvme_sysfs_show_address.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005e58 (size 8) =====

int64_t sym.nvme_sysfs_show_address.21529633b7289604a80e82acd8b43a39.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x98);
    pcVar3 = *(*(iVar2 + 0x40) + 0x50);
    __cfi_slowpath_diag(0x53c4d649265157ae,pcVar3,0x8002870);
    iVar1 = (*pcVar3)(iVar2,param_3,0x1000);
    return iVar1;
}


// ===== sym.__typeid__ZTSFvP9nvme_ctrlE_global_addr @ 0x08005e60 (size 8) =====

void sym.__typeid__ZTSFvP9nvme_ctrlE_global_addr(int64_t param_1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x604) != 0) {
        cancel_delayed_work_sync(param_1 + 0xa90);
    }
    if (*(param_1 + 0xc50) != 0) {
        cancel_delayed_work_sync(param_1 + 0xb18);
        puVar1 = param_1 + 0xc48;
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
    flush_work(param_1 + 0xa60);
    cancel_work_sync(param_1 + 0xbe0);
    pcVar4 = *(*(param_1 + 0x40) + 0x48);
    if (pcVar4 != NULL) {
        if (0xe < (pcVar4 + -0x8005e60 >> 3 | pcVar4 << 0x3d)) {
            __cfi_slowpath_diag(0x33d2dab7d229586b,pcVar4,0x80027d0);
        }
        (*pcVar4)(param_1);
    }
    return;
}


// ===== sym.nvme_sync_queues.cfi_jt @ 0x08005e68 (size 8) =====

void sym.nvme_sync_queues.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    down_read(param_1 + 0x90);
    for (piVar1 = *(param_1 + 0x80); piVar1 != param_1 + 0x80; piVar1 = *piVar1) {
        blk_sync_queue(piVar1[3]);
    }
    up_read(param_1 + 0x90);
    if (*(param_1 + 0x48) != 0) {
        blk_sync_queue();
    }
    return;
}


// ===== sym.nvme_uninit_ctrl.cfi_jt @ 0x08005e70 (size 8) =====

void sym.nvme_uninit_ctrl.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    dev_pm_qos_hide_latency_tolerance(*(param_1 + 0x460));
    cdev_device_del(param_1 + 0x468,*(param_1 + 0x460));
    put_device(*(param_1 + 0x460));
    return;
}


// ===== sym.nvme_start_freeze.cfi_jt @ 0x08005e78 (size 8) =====

void sym.nvme_start_freeze.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    down_read(param_1 + 0x90);
    for (piVar1 = *(param_1 + 0x80); piVar1 != param_1 + 0x80; piVar1 = *piVar1) {
        blk_freeze_queue_start(piVar1[3]);
    }
    up_read(param_1 + 0x90);
    return;
}


// ===== sym.nvme_sync_io_queues.cfi_jt @ 0x08005e80 (size 8) =====

void sym.nvme_sync_io_queues.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    down_read(param_1 + 0x90);
    for (piVar1 = *(param_1 + 0x80); piVar1 != param_1 + 0x80; piVar1 = *piVar1) {
        blk_sync_queue(piVar1[3]);
    }
    up_read(param_1 + 0x90);
    return;
}


// ===== sym.nvme_stop_queues.cfi_jt @ 0x08005e88 (size 8) =====

void sym.nvme_stop_queues.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    down_read(param_1 + 0x90);
    for (piVar1 = *(param_1 + 0x80); piVar1 != param_1 + 0x80; piVar1 = *piVar1) {
        blk_mq_quiesce_queue(piVar1[3]);
    }
    up_read(param_1 + 0x90);
    return;
}


// ===== sym.nvme_start_queues.cfi_jt @ 0x08005e90 (size 8) =====

void sym.nvme_start_queues.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    down_read(param_1 + 0x90);
    for (piVar1 = *(param_1 + 0x80); piVar1 != param_1 + 0x80; piVar1 = *piVar1) {
        blk_mq_unquiesce_queue(piVar1[3]);
    }
    up_read(param_1 + 0x90);
    return;
}


// ===== sym.nvme_unfreeze.cfi_jt @ 0x08005e98 (size 8) =====

void sym.nvme_unfreeze.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    down_read(param_1 + 0x90);
    for (piVar1 = *(param_1 + 0x80); piVar1 != param_1 + 0x80; piVar1 = *piVar1) {
        blk_mq_unfreeze_queue(piVar1[3]);
    }
    up_read(param_1 + 0x90);
    return;
}


// ===== sym.nvme_cancel_admin_tagset.cfi_jt @ 0x08005ea0 (size 8) =====

void sym.nvme_cancel_admin_tagset.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x78) != 0) {
        blk_mq_tagset_busy_iter(*(param_1 + 0x78),sym.nvme_cancel_request.cfi_jt,param_1);
        blk_mq_tagset_wait_completed_request(*(param_1 + 0x78));
    }
    return;
}


// ===== sym.nvme_start_ctrl.cfi_jt @ 0x08005ea8 (size 8) =====

void sym.nvme_start_ctrl.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    uint64_t uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    if (*(param_1 + 0x604) != 0) {
        queue_delayed_work_on(0x20,_segment.ehdr,param_1 + 0xa90,*(param_1 + 0x604) * 0xfa >> 1);
    }
    uVar1 = *(param_1 + 0x5f4) & 0x80000b00;
    if (uVar1 != 0) {
        uStack_80 = 0;
        uStack_48 = 0;
        uStack_40 = 0;
        uStack_58 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_70 = 0;
        uStack_78 = 9;
        uStack_50 = CONCAT44(*(param_1 + 0x5f4),0xb) & 0x80000b00ffffffff;
        iVar2 = sym.__nvme_submit_sync_cmd(*(param_1 + 0x48),&uStack_78,&uStack_80,0);
        if (iVar2 != 0) {
            _dev_warn(*(param_1 + 0x460),"Failed to configure AEN (cfg %x)\n",uVar1);
        }
        queue_work_on(0x20,_segment.ehdr,param_1 + 0xa60);
    }
    if (1 < *(param_1 + 0x5a0)) {
        if ((*(param_1 + 4) == 1) && (*(param_1 + 0x70) != 0)) {
            queue_work_on(0x20,_segment.ehdr,param_1 + 0xa30);
        }
        down_read(param_1 + 0x90);
        for (piVar4 = *(param_1 + 0x80); piVar4 != param_1 + 0x80; piVar4 = *piVar4) {
            blk_mq_unquiesce_queue(piVar4[3]);
        }
        up_read(param_1 + 0x90);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_38) {
        iVar3 = __stack_chk_fail();
        *extraout_x18 = sym.nvme_start_queues;
        down_read(iVar3 + 0x90);
        for (piVar4 = *(iVar3 + 0x80); piVar4 != iVar3 + 0x80; piVar4 = *piVar4) {
            blk_mq_unquiesce_queue(piVar4[3]);
        }
        up_read(iVar3 + 0x90);
        return;
    }
    return;
}


// ===== sym.nvme_kill_queues.cfi_jt @ 0x08005eb0 (size 8) =====

void sym.nvme_kill_queues.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    down_read(param_1 + 0x90);
    if ((*(param_1 + 0x48) != 0) && ((*(*(param_1 + 0x48) + 0x60) >> 1 & 1) == 0)) {
        blk_mq_unquiesce_queue();
    }
    for (puVar5 = *(param_1 + 0x80); puVar5 != param_1 + 0x80; puVar5 = *puVar5) {
        puVar1 = puVar5 + 0xc;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar4 = *puVar1;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = uVar4 | 2;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
        if ((uVar4 >> 1 & 1) == 0) {
            blk_mark_disk_dead(puVar5[4]);
            blk_mq_unquiesce_queue(puVar5[3]);
            set_capacity_and_notify(puVar5[4],0);
        }
    }
    up_read(param_1 + 0x90);
    return;
}


// ===== sym.nvme_remove_namespaces.cfi_jt @ 0x08005eb8 (size 8) =====

void sym.nvme_remove_namespaces.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    uint64_t *puVar2;
    ulong ***pppuVar3;
    ulong **ppuVar4;
    char cVar5;
    bool bVar6;
    int64_t iVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong ***pppuVar9;
    ulong *puVar10;
    ulong unaff_x30;
    ulong **ppuStack_38;
    ulong **ppuStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    ppuStack_38 = &ppuStack_38;
    ppuStack_30 = ppuStack_38;
    flush_work(param_1 + 0xa30);
    if (*(param_1 + 4) == 6) {
        sym.nvme_kill_queues(param_1);
    }
    sym.nvme_change_ctrl_state(param_1,5);
    down_write(param_1 + 0x90);
    piVar1 = param_1 + 0x80;
    if (piVar1 != *piVar1) {
        pppuVar3 = *(param_1 + 0x80);
        ppuVar4 = *(param_1 + 0x88);
        pppuVar3[1] = &ppuStack_38;
        *ppuVar4 = ppuStack_38;
        ppuStack_38[1] = ppuVar4;
        *(param_1 + 0x80) = piVar1;
        *(param_1 + 0x88) = piVar1;
        ppuStack_38 = pppuVar3;
    }
    up_write(param_1 + 0x90);
    pppuVar3 = ppuStack_38;
    while (pppuVar3 != &ppuStack_38) {
        pppuVar9 = *pppuVar3;
        sym.nvme_ns_remove(pppuVar3);
        pppuVar3 = pppuVar9;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_28) {
        iVar7 = __stack_chk_fail();
        *extraout_x18 = 0x800a4b4;
        down_read(iVar7 + 0x90);
        if ((*(iVar7 + 0x48) != 0) && ((*(*(iVar7 + 0x48) + 0x60) >> 1 & 1) == 0)) {
            blk_mq_unquiesce_queue();
        }
        for (puVar10 = *(iVar7 + 0x80); puVar10 != iVar7 + 0x80; puVar10 = *puVar10) {
            puVar2 = puVar10 + 0xc;
            Hint_Prefetch(puVar2,2,0,1);
            do {
                uVar8 = *puVar2;
                cVar5 = '\x01';
                bVar6 = ExclusiveMonitorPass(puVar2,0x10);
                if (bVar6) {
                    *puVar2 = uVar8 | 2;
                    cVar5 = ExclusiveMonitorsStatus();
                }
            } while (cVar5 != '\0');
            DataMemoryBarrier(2,3);
            if ((uVar8 >> 1 & 1) == 0) {
                blk_mark_disk_dead(puVar10[4]);
                blk_mq_unquiesce_queue(puVar10[3]);
                set_capacity_and_notify(puVar10[4],0);
            }
        }
        up_read(iVar7 + 0x90);
        return;
    }
    return;
}


// ===== sym.nvme_cancel_tagset.cfi_jt @ 0x08005ec0 (size 8) =====

void sym.nvme_cancel_tagset.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x70) != 0) {
        blk_mq_tagset_busy_iter(*(param_1 + 0x70),sym.nvme_cancel_request.cfi_jt,param_1);
        blk_mq_tagset_wait_completed_request(*(param_1 + 0x70));
    }
    return;
}


// ===== sym.nvme_stop_keep_alive.cfi_jt @ 0x08005ec8 (size 8) =====

void sym.nvme_stop_keep_alive.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x604) != 0) {
        cancel_delayed_work_sync(param_1 + 0xa90);
    }
    return;
}


// ===== sym.nvme_wait_freeze.cfi_jt @ 0x08005ed0 (size 8) =====

void sym.nvme_wait_freeze.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    down_read(param_1 + 0x90);
    for (piVar1 = *(param_1 + 0x80); piVar1 != param_1 + 0x80; piVar1 = *piVar1) {
        blk_mq_freeze_queue_wait(piVar1[3]);
    }
    up_read(param_1 + 0x90);
    return;
}


// ===== sym.nvme_submit_sync_cmd.cfi_jt @ 0x08005ed8 (size 8) =====

void sym.nvme_submit_sync_cmd.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__nvme_submit_sync_cmd(param_1,param_2,0,param_3);
    return;
}


// ===== sym.trace_event_raw_event_nvme_async_event.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005ee0 (size 8) =====

//WARNING: Removing unreachable block (ram,0x0800686c)
//WARNING: Removing unreachable block (ram,0x08006ab8)

void sym.trace_event_raw_event_nvme_async_event.21529633b7289604a80e82acd8b43a39.cfi_jt
               (int64_t param_1,int64_t param_2,uint64_t param_3,ushort param_4)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong in_tmp_ldXn;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ushort uVar6;
    ushort uVar7;
    uint64_t uVar9;
    ushort uVar10;
    int64_t iVar11;
    ulong uVar12;
    int64_t iVar13;
    ulong uVar14;
    ulong uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint32_t uVar16;
    ulong unaff_x30;
    uchar auVar17 [16];
    uchar auVar18 [16];
    uchar auStack_1b0 [12];
    uint uStack_1a4;
    int64_t iStack_1a0;
    int64_t iStack_198;
    ulong **ppuStack_190;
    code *pcStack_188;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    int64_t iStack_118;
    uchar **ppuStack_110;
    ulong uStack_108;
    code *pcStack_100;
    int64_t iStack_f0;
    int64_t *piStack_e8;
    uint64_t uStack_e0;
    int64_t iStack_d8;
    uchar auStack_d0 [12];
    uint uStack_c4;
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
    uint uVar8;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar16 = *(param_1 + 0x48);
    if ((uVar16 >> 8 & 1) == 0) {
        uVar9 = param_3;
        if ((uVar16 >> 7 & 1) != 0) {
            uVar9 = 0;
            param_4 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar16 >> 6 & 1) == 0) &&
           (((uVar16 >> 9 & 1) == 0 || (uVar3 = trace_event_ignore_this_pid(param_1), (uVar3 & 1) == 0))))
        goto code_r0x0800674c;
    }
    else {
code_r0x0800674c:
        uVar9 = 0x10;
        iVar4 = trace_event_buffer_reserve(&uStack_68,param_1);
        if (iVar4 != 0) {
            *(iVar4 + 8) = *(param_2 + 0x68);
            *(iVar4 + 0xc) = param_3;
            trace_event_buffer_commit(&uStack_68);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    auVar17 = __stack_chk_fail();
    iVar11 = auVar17._0_8_;
    *extraout_x18 = sym.perf_trace_nvme_async_event;
    pcStack_a8 = sym.perf_trace_nvme_async_event;
    iVar4 = sp_el0;
    iStack_b8 = *(iVar4 + 0x5e0);
    uVar3 = uVar9 & 0xffffffff;
    iStack_c0 = 0;
    uStack_c4 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar11 + 0x78);
    puStack_b0 = &stack0xffffffffffffffd0;
    if ((*(iVar11 + 0x80) != 0) || (uVar8 = uVar9, *piVar1 != 0)) {
        uVar8 = SUB84(&uStack_c4,0);
        iVar4 = perf_trace_buf_alloc(0x14,&iStack_c0);
        uVar2 = _trace_event_reg;
        if (iVar4 != 0) {
            *(iStack_c0 + 0xe8) = &puStack_b0;
            *(iStack_c0 + 0xf8) = auStack_d0;
            *(iStack_c0 + 0x100) = ~(-1L << (uVar2 & 0x3f)) & 0x80067a4;
            *(iStack_c0 + 0x108) = 5;
            *(iVar4 + 8) = *(auVar17._8_8_ + 0x68);
            *(iVar4 + 0xc) = uVar9;
            iVar13 = iVar11;
            uVar8 = uStack_c4;
            perf_trace_run_bpf_submit(iVar4,0x14,uStack_c4,iVar11,1,iStack_c0,piVar1,0);
            param_4 = iVar13;
        }
    }
    uVar6 = uVar8;
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar18 = __stack_chk_fail();
    piVar5 = auVar18._8_8_;
    iVar13 = auVar18._0_8_;
    uVar12 = tpidr_el2;
    *extraout_x18_00 = 0x80068c4;
    uStack_108 = 0x80068c4;
    pcStack_100 = sym.perf_trace_nvme_async_event;
    iVar4 = sp_el0;
    iStack_118 = *(iVar4 + 0x5e0);
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uVar16 = *(iVar13 + 0x48);
    ppuStack_110 = &puStack_b0;
    piStack_e8 = piVar1;
    uStack_e0 = uVar3;
    uVar10 = param_4;
    if ((uVar16 >> 8 & 1) == 0) {
        uVar7 = uVar6;
        if ((uVar16 >> 7 & 1) != 0) {
            uVar7 = 0;
            uVar10 = 0;
            iStack_f0 = auVar17._8_8_;
            iStack_d8 = iVar11;
            event_triggers_call(iVar13,0);
            auVar17._8_8_ = iStack_f0;
            auVar17._0_8_ = iStack_d8;
        }
        iStack_f0 = auVar17._8_8_;
        iStack_d8 = auVar17._0_8_;
        if ((uVar16 >> 6 & 1) != 0) goto code_r0x080069cc;
        if ((uVar16 >> 9 & 1) != 0) {
            uVar9 = trace_event_ignore_this_pid(iVar13);
            auVar17._8_8_ = iStack_f0;
            auVar17._0_8_ = iStack_d8;
            if ((uVar9 & 1) != 0) goto code_r0x080069cc;
        }
    }
    iStack_f0 = auVar17._8_8_;
    iStack_d8 = auVar17._0_8_;
    uVar7 = 0x34;
    iVar4 = trace_event_buffer_reserve(&uStack_148,iVar13);
    auVar17._8_8_ = iStack_f0;
    auVar17._0_8_ = iStack_d8;
    if (iVar4 != 0) {
        *(iVar4 + 8) = *(piVar5[0x29] + 0x68);
        iVar11 = piVar5[0x14];
        if (iVar11 == 0) {
            *(iVar4 + 0x1c) = 0;
            *(iVar4 + 0x24) = 0;
            *(iVar4 + 0xc) = 0;
            *(iVar4 + 0x14) = 0;
        }
        else {
            uVar14 = *(iVar11 + 0x24);
            uVar15 = *(iVar11 + 0x14);
            uVar12 = *(iVar11 + 0xc);
            *(iVar4 + 0x1c) = *(iVar11 + 0x1c);
            *(iVar4 + 0x24) = uVar14;
            *(iVar4 + 0xc) = uVar12;
            *(iVar4 + 0x14) = uVar15;
        }
        uVar16 = 0;
        if (*(*piVar5 + 0x58) != 0) {
            uVar16 = *(piVar5[2] + 0x1cc) + 1U & 0xffff;
        }
        *(iVar4 + 0x2c) = uVar16;
        *(iVar4 + 0x30) = uVar6;
        *(iVar4 + 0x32) = param_4;
        trace_event_buffer_commit(&uStack_148);
        auVar17._8_8_ = iStack_f0;
        auVar17._0_8_ = iStack_d8;
    }
code_r0x080069cc:
    iStack_f0 = auVar17._8_8_;
    iStack_d8 = auVar17._0_8_;
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_118) {
        return;
    }
    auVar17 = __stack_chk_fail();
    piVar5 = auVar17._8_8_;
    iVar11 = auVar17._0_8_;
    *extraout_x18_01 = sym.perf_trace_nvme_sq;
    pcStack_188 = sym.perf_trace_nvme_sq;
    iVar4 = sp_el0;
    iStack_198 = *(iVar4 + 0x5e0);
    iStack_1a0 = 0;
    uStack_1a4 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar11 + 0x78);
    ppuStack_190 = &ppuStack_110;
    if (((*(iVar11 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar4 = perf_trace_buf_alloc(0x34,&iStack_1a0,&uStack_1a4), uVar9 = _trace_event_reg, iVar4 != 0)) {
        *(iStack_1a0 + 0xe8) = &ppuStack_190;
        *(iStack_1a0 + 0xf8) = auStack_1b0;
        *(iStack_1a0 + 0x100) = ~(-1L << (uVar9 & 0x3f)) & 0x8006a04;
        *(iStack_1a0 + 0x108) = 5;
        *(iVar4 + 8) = *(piVar5[0x29] + 0x68);
        iVar13 = piVar5[0x14];
        if (iVar13 == 0) {
            *(iVar4 + 0x1c) = 0;
            *(iVar4 + 0x24) = 0;
            *(iVar4 + 0xc) = 0;
            *(iVar4 + 0x14) = 0;
        }
        else {
            uVar14 = *(iVar13 + 0x24);
            uVar15 = *(iVar13 + 0x14);
            uVar12 = *(iVar13 + 0xc);
            *(iVar4 + 0x1c) = *(iVar13 + 0x1c);
            *(iVar4 + 0x24) = uVar14;
            *(iVar4 + 0xc) = uVar12;
            *(iVar4 + 0x14) = uVar15;
        }
        uVar16 = 0;
        if (*(*piVar5 + 0x58) != 0) {
            uVar16 = *(piVar5[2] + 0x1cc) + 1U & 0xffff;
        }
        *(iVar4 + 0x2c) = uVar16;
        *(iVar4 + 0x30) = uVar7;
        *(iVar4 + 0x32) = uVar10;
        perf_trace_run_bpf_submit(iVar4,0x34,uStack_1a4,iVar11,1,iStack_1a0,piVar1,0);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_198) {
        __stack_chk_fail();
        uVar12 = tpidr_el2;
        *extraout_x18_02 = 0x8006b84;
        bpf_trace_run2(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_nvme_async_event.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005ee8 (size 8) =====

void sym.__bpf_trace_nvme_async_event.21529633b7289604a80e82acd8b43a39.cfi_jt
               (ulong param_1,ulong param_2,uint param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run2(param_1,param_2,param_3);
    return;
}


// ===== sym.perf_trace_nvme_async_event.21529633b7289604a80e82acd8b43a39.cfi_jt @ 0x08005ef0 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08006ab8)

void sym.perf_trace_nvme_async_event.21529633b7289604a80e82acd8b43a39.cfi_jt
               (int64_t param_1,int64_t param_2,uint param_3,ushort param_4)

{
    ulong in_tmp_ldXn;
    int64_t iVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    ushort uVar5;
    ushort uVar6;
    ushort uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong uVar11;
    int64_t iVar12;
    ulong uVar13;
    ulong uVar14;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint32_t uVar15;
    uint64_t unaff_x30;
    uchar auVar16 [16];
    uchar auStack_140 [12];
    uint uStack_134;
    int64_t iStack_130;
    int64_t iStack_128;
    uchar **ppuStack_120;
    code *pcStack_118;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    ulong uStack_98;
    uchar auStack_60 [12];
    uint uStack_54;
    int64_t iStack_50;
    int64_t iStack_48;
    uint uVar7;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_48 = *(iVar1 + 0x5e0);
    iStack_50 = 0;
    uStack_54 = 0;
    iVar1 = tpidr_el1;
    piVar3 = iVar1 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (uVar7 = param_3, *piVar3 != 0)) {
        uVar7 = SUB84(&uStack_54,0);
        iVar1 = perf_trace_buf_alloc(0x14,&iStack_50);
        uVar2 = _trace_event_reg;
        if (iVar1 != 0) {
            *(iStack_50 + 0xe8) = &stack0xffffffffffffffc0;
            *(iStack_50 + 0xf8) = auStack_60;
            uVar9 = -1L << (uVar2 & 0x3f);
            uVar2 = (~uVar9 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar2 = uVar9 | unaff_x30;
            }
            *(iStack_50 + 0x100) = uVar2;
            *(iStack_50 + 0x108) = 5;
            *(iVar1 + 8) = *(param_2 + 0x68);
            *(iVar1 + 0xc) = param_3;
            uVar7 = uStack_54;
            perf_trace_run_bpf_submit(iVar1,0x14,uStack_54,param_1,1,iStack_50,piVar3,0);
            param_4 = param_1;
        }
    }
    uVar5 = uVar7;
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_48) {
        return;
    }
    auVar16 = __stack_chk_fail();
    piVar3 = auVar16._8_8_;
    iVar10 = auVar16._0_8_;
    uVar11 = tpidr_el2;
    *extraout_x18 = 0x80068c4;
    uStack_98 = 0x80068c4;
    iVar1 = sp_el0;
    iStack_a8 = *(iVar1 + 0x5e0);
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uVar15 = *(iVar10 + 0x48);
    puStack_a0 = &stack0xffffffffffffffc0;
    uVar8 = param_4;
    if ((uVar15 >> 8 & 1) == 0) {
        uVar6 = uVar5;
        if ((uVar15 >> 7 & 1) != 0) {
            uVar6 = 0;
            uVar8 = 0;
            event_triggers_call(iVar10,0);
        }
        if ((uVar15 >> 6 & 1) != 0) goto code_r0x080069cc;
        if ((uVar15 >> 9 & 1) != 0) {
            uVar2 = trace_event_ignore_this_pid(iVar10);
            if ((uVar2 & 1) != 0) goto code_r0x080069cc;
        }
    }
    uVar6 = 0x34;
    iVar1 = trace_event_buffer_reserve(&uStack_d8,iVar10);
    if (iVar1 != 0) {
        *(iVar1 + 8) = *(piVar3[0x29] + 0x68);
        iVar10 = piVar3[0x14];
        if (iVar10 == 0) {
            *(iVar1 + 0x1c) = 0;
            *(iVar1 + 0x24) = 0;
            *(iVar1 + 0xc) = 0;
            *(iVar1 + 0x14) = 0;
        }
        else {
            uVar13 = *(iVar10 + 0x24);
            uVar14 = *(iVar10 + 0x14);
            uVar11 = *(iVar10 + 0xc);
            *(iVar1 + 0x1c) = *(iVar10 + 0x1c);
            *(iVar1 + 0x24) = uVar13;
            *(iVar1 + 0xc) = uVar11;
            *(iVar1 + 0x14) = uVar14;
        }
        uVar15 = 0;
        if (*(*piVar3 + 0x58) != 0) {
            uVar15 = *(piVar3[2] + 0x1cc) + 1U & 0xffff;
        }
        *(iVar1 + 0x2c) = uVar15;
        *(iVar1 + 0x30) = uVar5;
        *(iVar1 + 0x32) = param_4;
        trace_event_buffer_commit(&uStack_d8);
    }
code_r0x080069cc:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_a8) {
        return;
    }
    auVar16 = __stack_chk_fail();
    piVar4 = auVar16._8_8_;
    iVar10 = auVar16._0_8_;
    *extraout_x18_00 = sym.perf_trace_nvme_sq;
    pcStack_118 = sym.perf_trace_nvme_sq;
    iVar1 = sp_el0;
    iStack_128 = *(iVar1 + 0x5e0);
    iStack_130 = 0;
    uStack_134 = 0;
    iVar1 = tpidr_el1;
    piVar3 = iVar1 + *(iVar10 + 0x78);
    ppuStack_120 = &puStack_a0;
    if (((*(iVar10 + 0x80) != 0) || (*piVar3 != 0)) &&
       (iVar1 = perf_trace_buf_alloc(0x34,&iStack_130,&uStack_134), uVar2 = _trace_event_reg, iVar1 != 0)) {
        *(iStack_130 + 0xe8) = &ppuStack_120;
        *(iStack_130 + 0xf8) = auStack_140;
        *(iStack_130 + 0x100) = ~(-1L << (uVar2 & 0x3f)) & 0x8006a04;
        *(iStack_130 + 0x108) = 5;
        *(iVar1 + 8) = *(piVar4[0x29] + 0x68);
        iVar12 = piVar4[0x14];
        if (iVar12 == 0) {
            *(iVar1 + 0x1c) = 0;
            *(iVar1 + 0x24) = 0;
            *(iVar1 + 0xc) = 0;
            *(iVar1 + 0x14) = 0;
        }
        else {
            uVar13 = *(iVar12 + 0x24);
            uVar14 = *(iVar12 + 0x14);
            uVar11 = *(iVar12 + 0xc);
            *(iVar1 + 0x1c) = *(iVar12 + 0x1c);
            *(iVar1 + 0x24) = uVar13;
            *(iVar1 + 0xc) = uVar11;
            *(iVar1 + 0x14) = uVar14;
        }
        uVar15 = 0;
        if (*(*piVar4 + 0x58) != 0) {
            uVar15 = *(piVar4[2] + 0x1cc) + 1U & 0xffff;
        }
        *(iVar1 + 0x2c) = uVar15;
        *(iVar1 + 0x30) = uVar6;
        *(iVar1 + 0x32) = uVar8;
        perf_trace_run_bpf_submit(iVar1,0x34,uStack_134,iVar10,1,iStack_130,piVar3,0);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_128) {
        __stack_chk_fail();
        uVar11 = tpidr_el2;
        *extraout_x18_01 = 0x8006b84;
        bpf_trace_run2(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.nvme_ns_chr_ioctl.cfi_jt @ 0x08005ef8 (size 8) =====

int64_t sym.nvme_ns_chr_ioctl.cfi_jt(int64_t param_1,uint32_t param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.__nvme_ioctl(*(*(param_1 + 0x20) + 0x2b0) + -0x68,param_2,param_3);
    return iVar1;
}


// ===== sym.compat_ptr_ioctl.cfi_jt @ 0x08005f00 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.compat_ptr_ioctl.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.nvme_dev_ioctl.cfi_jt @ 0x08005f08 (size 8) =====

int64_t sym.nvme_dev_ioctl.cfi_jt(int64_t param_1,int param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t arg1;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0xd8);
    if (param_2 < 0x4e44) {
        if (param_2 == -0x3fb7b1bf) {
            iVar1 = sym.nvme_user_cmd(arg1,0,param_3);
        }
        else if (param_2 == -0x3fb7b1bd) {
            iVar1 = sym.nvme_dev_user_cmd(arg1,param_3);
        }
        else {
            if (param_2 != -0x3fafb1b9) {
                return -0x19;
            }
            iVar1 = sym.nvme_user_cmd64(arg1,0,param_3);
        }
    }
    else if (param_2 == 0x4e45) {
        if (*(arg1 + 0x608) == '\0') {
            return -0x19;
        }
        pcVar2 = *(*(arg1 + 0x40) + 0x20);
        __cfi_slowpath_diag(0x5fd0dd7266111d21,pcVar2,0x80028b0);
        iVar1 = (*pcVar2)(arg1,0x20,0x4e564d65);
    }
    else {
        if (param_2 == 0x4e46) {
            sym.nvme_queue_scan(arg1);
            return 0;
        }
        if (param_2 != 0x4e44) {
            return -0x19;
        }
        _dev_warn(*(arg1 + 0x460),"resetting controller\n");
        iVar1 = sym.nvme_reset_ctrl_sync(arg1);
    }
    return iVar1;
}


// ===== sym.nvme_set_queue_count.cfi_jt @ 0x08005f10 (size 8) =====

int sym.nvme_set_queue_count.cfi_jt(int64_t param_1,int *param_2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    int iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auVar5 [16];
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    uint uStack_40;
    uint32_t uStack_3c;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    uStack_70 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    uStack_68 = 9;
    _uStack_40 = CONCAT44(*param_2 - 1U | (*param_2 - 1U) * 0x10000,7);
    iVar3 = sym.__nvme_submit_sync_cmd(*(param_1 + 0x48),&uStack_68,&uStack_70,0);
    if (-1 < iVar3) {
        if (iVar3 == 0) {
            iVar4 = *param_2;
            uVar1 = uStack_70 & 0xffff;
            if (uStack_70 >> 0x10 <= (uStack_70 & 0xffff)) {
                uVar1 = uStack_70 >> 0x10;
            }
            if (uVar1 + 1 <= iVar4) {
                iVar4 = uVar1 + 1;
            }
        }
        else {
            _dev_err(*(param_1 + 0x460),"Could not set queue count (%d)\n");
            iVar4 = 0;
        }
        iVar3 = 0;
        *param_2 = iVar4;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_28) {
        auVar5 = __stack_chk_fail();
        *auVar5._8_8_ = 0x2040;
        auVar5._8_8_[1] = *(*(*(*(auVar5._0_8_ + 0x3f0) + 0x40) + 0x28) + 0x50) >> 0x14;
        return 0;
    }
    return iVar3;
}


// ===== sym.__traceiter_nvme_setup_cmd @ 0x08005f18 (size 104) =====

ulong sym.__traceiter_nvme_setup_cmd(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8011220;
    piVar1 = *0x8011220;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],arg2,arg3);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_nvme_complete_rq @ 0x08005f88 (size 88) =====

ulong sym.__traceiter_nvme_complete_rq(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8011268;
    piVar1 = *0x8011268;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],arg2);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_nvme_async_event @ 0x08005fe8 (size 104) =====

ulong sym.__traceiter_nvme_async_event(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x80112b0 != NULL) {
        piVar1 = *0x80112b0;
        do {
            (**piVar1)(piVar1[1],arg2,arg3 & 0xffffffff);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.__traceiter_nvme_sq @ 0x08006058 (size 112) =====

ulong sym.__traceiter_nvme_sq(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x80112f8 != NULL) {
        piVar1 = *0x80112f8;
        do {
            (**piVar1)(piVar1[1],arg2,arg3 & 0xffffffff,arg4 & 0xffffffff);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.trace_event_raw_event_nvme_setup_cmd @ 0x080060d0 (size 352) =====

//WARNING: Removing unreachable block (ram,0x0800686c)
//WARNING: Removing unreachable block (ram,0x080062e0)
//WARNING: Removing unreachable block (ram,0x080065e0)
//WARNING: Removing unreachable block (ram,0x08006ab8)

void sym.trace_event_raw_event_nvme_setup_cmd(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong in_tmp_ldXn;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t *piVar5;
    int64_t *piVar6;
    ushort uVar7;
    ushort uVar8;
    uint32_t *puVar10;
    uint32_t *puVar11;
    ushort in_w3;
    ushort uVar12;
    int64_t iVar13;
    ulong uVar14;
    int64_t iVar15;
    ulong uVar16;
    ulong uVar17;
    ulong uVar18;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    uint32_t uVar19;
    ulong unaff_x30;
    uchar auVar20 [16];
    uchar auVar21 [16];
    uchar auVar22 [16];
    uchar auStack_340 [12];
    uint uStack_334;
    int64_t iStack_330;
    int64_t iStack_328;
    ulong **ppuStack_320;
    code *pcStack_318;
    ulong uStack_2d8;
    ulong uStack_2d0;
    ulong uStack_2c8;
    ulong uStack_2c0;
    ulong uStack_2b8;
    ulong uStack_2b0;
    int64_t iStack_2a8;
    ulong **ppuStack_2a0;
    ulong uStack_298;
    code *pcStack_290;
    int64_t iStack_280;
    int64_t *piStack_278;
    uint64_t uStack_270;
    int64_t iStack_268;
    uchar auStack_260 [12];
    uint uStack_254;
    int64_t iStack_250;
    int64_t iStack_248;
    ulong **ppuStack_240;
    code *pcStack_238;
    code *pcStack_230;
    ulong uStack_220;
    uchar auStack_218 [16];
    uint64_t uStack_208;
    ulong uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    int64_t iStack_1c8;
    ulong **ppuStack_1c0;
    ulong uStack_1b8;
    code *pcStack_1b0;
    int64_t *piStack_1a8;
    int64_t *piStack_1a0;
    int64_t iStack_198;
    uchar auStack_190 [12];
    uint32_t uStack_184;
    int64_t iStack_180;
    int64_t iStack_178;
    ulong **ppuStack_170;
    code *pcStack_168;
    int64_t *piStack_160;
    ulong uStack_158;
    uchar auStack_150 [16];
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
    uint32_t *puStack_e0;
    int64_t iStack_d8;
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
    uint uVar9;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar19 = *(arg1 + 0x48);
    if ((uVar19 >> 8 & 1) == 0) {
        puVar10 = arg3;
        if ((uVar19 >> 7 & 1) != 0) {
            puVar10 = NULL;
            in_w3 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar19 >> 6 & 1) == 0) &&
           (((uVar19 >> 9 & 1) == 0 || (uVar3 = trace_event_ignore_this_pid(arg1), (uVar3 & 1) == 0))))
        goto code_r0x08006144;
    }
    else {
code_r0x08006144:
        puVar10 = 0x58;
        iVar4 = trace_event_buffer_reserve(&uStack_68,arg1);
        if (iVar4 != 0) {
            *(iVar4 + 0x28) = *(*(arg2 + 0x148) + 0x68);
            uVar19 = 0;
            if (*(*arg2 + 0x58) != 0) {
                uVar19 = *(*(arg2 + 0x10) + 0x1cc) + 1U & 0xffff;
            }
            *(iVar4 + 0x2c) = uVar19;
            *(iVar4 + 0x30) = *arg3;
            *(iVar4 + 0x31) = *(arg3 + 1);
            *(iVar4 + 0x34) = *(arg3 + 2);
            uVar9 = *(arg3 + 4);
            *(iVar4 + 0x3c) = 0;
            *(iVar4 + 0x38) = uVar9;
            *(iVar4 + 0x32) = *(arg3 + 4);
            iVar13 = *(arg2 + 0xa0);
            if (iVar13 == 0) {
                *(iVar4 + 0x18) = 0;
                *(iVar4 + 0x20) = 0;
                *(iVar4 + 8) = 0;
                *(iVar4 + 0x10) = 0;
            }
            else {
                uVar16 = *(iVar13 + 0x24);
                uVar17 = *(iVar13 + 0x14);
                uVar14 = *(iVar13 + 0xc);
                *(iVar4 + 0x18) = *(iVar13 + 0x1c);
                *(iVar4 + 0x20) = uVar16;
                *(iVar4 + 8) = uVar14;
                *(iVar4 + 0x10) = uVar17;
            }
            uVar14 = *(arg3 + 0x38);
            uVar16 = *(arg3 + 0x28);
            *(iVar4 + 0x45) = *(arg3 + 0x30);
            *(iVar4 + 0x4d) = uVar14;
            *(iVar4 + 0x3d) = uVar16;
            trace_event_buffer_commit(&uStack_68);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    auVar20 = __stack_chk_fail();
    piVar5 = auVar20._8_8_;
    iVar13 = auVar20._0_8_;
    *extraout_x18 = sym.perf_trace_nvme_setup_cmd;
    pcStack_a8 = sym.perf_trace_nvme_setup_cmd;
    iVar4 = sp_el0;
    iStack_b8 = *(iVar4 + 0x5e0);
    iStack_c0 = 0;
    uStack_c4 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar13 + 0x78);
    puStack_b0 = &stack0xffffffffffffffd0;
    if ((*(iVar13 + 0x80) != 0) || (puVar11 = puVar10, *piVar1 != 0)) {
        puVar11 = &uStack_c4;
        iVar4 = perf_trace_buf_alloc(0x5c,&iStack_c0);
        uVar3 = _trace_event_reg;
        if (iVar4 != 0) {
            *(iStack_c0 + 0xe8) = &puStack_b0;
            *(iStack_c0 + 0xf8) = auStack_d0;
            *(iStack_c0 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8006230;
            *(iStack_c0 + 0x108) = 5;
            *(iVar4 + 0x28) = *(piVar5[0x29] + 0x68);
            uVar19 = 0;
            if (*(*piVar5 + 0x58) != 0) {
                uVar19 = *(piVar5[2] + 0x1cc) + 1U & 0xffff;
            }
            *(iVar4 + 0x2c) = uVar19;
            *(iVar4 + 0x30) = *puVar10;
            *(iVar4 + 0x31) = *(puVar10 + 1);
            *(iVar4 + 0x34) = *(puVar10 + 2);
            uVar19 = puVar10[1];
            *(iVar4 + 0x3c) = 0;
            *(iVar4 + 0x38) = uVar19;
            *(iVar4 + 0x32) = puVar10[1];
            iVar15 = piVar5[0x14];
            if (iVar15 == 0) {
                *(iVar4 + 0x18) = 0;
                *(iVar4 + 0x20) = 0;
                *(iVar4 + 8) = 0;
                *(iVar4 + 0x10) = 0;
            }
            else {
                uVar16 = *(iVar15 + 0x24);
                uVar17 = *(iVar15 + 0x14);
                uVar14 = *(iVar15 + 0xc);
                *(iVar4 + 0x18) = *(iVar15 + 0x1c);
                *(iVar4 + 0x20) = uVar16;
                *(iVar4 + 8) = uVar14;
                *(iVar4 + 0x10) = uVar17;
            }
            uVar14 = *(puVar10 + 0xc);
            uVar16 = *(puVar10 + 10);
            puVar11 = uStack_c4;
            *(iVar4 + 0x4d) = *(puVar10 + 0xe);
            *(iVar4 + 0x45) = uVar14;
            *(iVar4 + 0x3d) = uVar16;
            iVar15 = iVar13;
            perf_trace_run_bpf_submit(iVar4,0x5c,puVar11,iVar13,1,iStack_c0,piVar1,0);
            in_w3 = iVar15;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar20 = __stack_chk_fail();
    piVar6 = auVar20._8_8_;
    iVar15 = auVar20._0_8_;
    uVar14 = tpidr_el2;
    *extraout_x18_00 = 0x80063e4;
    uStack_f8 = 0x80063e4;
    iVar4 = sp_el0;
    iStack_108 = *(iVar4 + 0x5e0);
    uVar14 = *(iVar15 + 0x48);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uVar19 = uVar14;
    ppuStack_100 = &puStack_b0;
    piStack_f0 = piVar1;
    puStack_e0 = puVar10;
    iStack_d8 = iVar13;
    if ((uVar19 >> 8 & 1) == 0) {
        if ((uVar19 >> 7 & 1) != 0) {
            puVar11 = NULL;
            in_w3 = 0;
            event_triggers_call(iVar15,0);
        }
        if (((uVar19 >> 6 & 1) == 0) &&
           (((uVar19 >> 9 & 1) == 0 || (uVar3 = trace_event_ignore_this_pid(iVar15), (uVar3 & 1) == 0))))
        goto code_r0x08006460;
    }
    else {
code_r0x08006460:
        puVar11 = 0x48;
        iVar4 = trace_event_buffer_reserve(&uStack_138,iVar15);
        if (iVar4 != 0) {
            *(iVar4 + 0x28) = *(piVar6[0x29] + 0x68);
            uVar19 = 0;
            if (*(*piVar6 + 0x58) != 0) {
                uVar19 = *(piVar6[2] + 0x1cc) + 1U & 0xffff;
            }
            *(iVar4 + 0x2c) = uVar19;
            *(iVar4 + 0x30) = *(piVar6[0x26] + 2);
            *(iVar4 + 0x38) = piVar6[0x27];
            *(iVar4 + 0x40) = *(piVar6 + 0x141);
            *(iVar4 + 0x41) = *(piVar6 + 0x142);
            *(iVar4 + 0x42) = *(piVar6 + 0x144);
            iVar13 = piVar6[0x14];
            if (iVar13 == 0) {
                *(iVar4 + 0x18) = 0;
                *(iVar4 + 0x20) = 0;
                *(iVar4 + 8) = 0;
                *(iVar4 + 0x10) = 0;
            }
            else {
                uVar17 = *(iVar13 + 0x24);
                uVar18 = *(iVar13 + 0x14);
                uVar16 = *(iVar13 + 0xc);
                *(iVar4 + 0x18) = *(iVar13 + 0x1c);
                *(iVar4 + 0x20) = uVar17;
                *(iVar4 + 8) = uVar16;
                *(iVar4 + 0x10) = uVar18;
            }
            trace_event_buffer_commit(&uStack_138);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_108) {
        return;
    }
    auVar21 = __stack_chk_fail();
    piVar6 = auVar21._8_8_;
    iVar13 = auVar21._0_8_;
    *extraout_x18_01 = sym.perf_trace_nvme_complete_rq;
    pcStack_168 = sym.perf_trace_nvme_complete_rq;
    iVar4 = sp_el0;
    iStack_178 = *(iVar4 + 0x5e0);
    iStack_180 = 0;
    uStack_184 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar13 + 0x78);
    ppuStack_170 = &ppuStack_100;
    piStack_160 = piVar5;
    uStack_158 = uVar14;
    auStack_150 = auVar20;
    if ((*(iVar13 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar11 = &uStack_184;
        iVar4 = perf_trace_buf_alloc(0x4c,&iStack_180);
        uVar3 = _trace_event_reg;
        if (iVar4 != 0) {
            *(iStack_180 + 0xe8) = &ppuStack_170;
            *(iStack_180 + 0xf8) = auStack_190;
            *(iStack_180 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8006538;
            *(iStack_180 + 0x108) = 5;
            *(iVar4 + 0x28) = *(piVar6[0x29] + 0x68);
            uVar19 = 0;
            if (*(*piVar6 + 0x58) != 0) {
                uVar19 = *(piVar6[2] + 0x1cc) + 1U & 0xffff;
            }
            *(iVar4 + 0x2c) = uVar19;
            *(iVar4 + 0x30) = *(piVar6[0x26] + 2);
            *(iVar4 + 0x38) = piVar6[0x27];
            *(iVar4 + 0x40) = *(piVar6 + 0x141);
            *(iVar4 + 0x41) = *(piVar6 + 0x142);
            *(iVar4 + 0x42) = *(piVar6 + 0x144);
            iVar15 = piVar6[0x14];
            if (iVar15 == 0) {
                *(iVar4 + 0x18) = 0;
                *(iVar4 + 0x20) = 0;
                *(iVar4 + 8) = 0;
                *(iVar4 + 0x10) = 0;
            }
            else {
                uVar16 = *(iVar15 + 0x24);
                uVar17 = *(iVar15 + 0x14);
                uVar14 = *(iVar15 + 0xc);
                *(iVar4 + 0x18) = *(iVar15 + 0x1c);
                *(iVar4 + 0x20) = uVar16;
                *(iVar4 + 8) = uVar14;
                *(iVar4 + 0x10) = uVar17;
            }
            puVar11 = uStack_184;
            iVar15 = iVar13;
            perf_trace_run_bpf_submit(iVar4,0x4c,puVar11,iVar13,1,iStack_180,piVar1,0);
            in_w3 = iVar15;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_178) {
        return;
    }
    auVar20 = __stack_chk_fail();
    iVar15 = auVar20._0_8_;
    uVar14 = tpidr_el2;
    *extraout_x18_02 = 0x80066cc;
    uStack_1b8 = 0x80066cc;
    pcStack_1b0 = sym.perf_trace_nvme_complete_rq;
    iVar4 = sp_el0;
    iStack_1c8 = *(iVar4 + 0x5e0);
    uVar14 = *(iVar15 + 0x48);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uVar19 = uVar14;
    ppuStack_1c0 = &ppuStack_170;
    piStack_1a0 = piVar1;
    if ((uVar19 >> 8 & 1) == 0) {
        puVar10 = puVar11;
        if ((uVar19 >> 7 & 1) != 0) {
            puVar10 = NULL;
            in_w3 = 0;
            piStack_1a8 = piVar6;
            iStack_198 = iVar13;
            event_triggers_call(iVar15,0);
            auVar21._8_8_ = piStack_1a8;
            auVar21._0_8_ = iStack_198;
        }
        piStack_1a8 = auVar21._8_8_;
        iStack_198 = auVar21._0_8_;
        if (((uVar19 >> 6 & 1) == 0) &&
           (((uVar19 >> 9 & 1) == 0 ||
            (uVar3 = trace_event_ignore_this_pid(iVar15), auVar21._8_8_ = piStack_1a8, auVar21._0_8_ = iStack_198,
            (uVar3 & 1) == 0)))) goto code_r0x0800674c;
    }
    else {
code_r0x0800674c:
        piStack_1a8 = auVar21._8_8_;
        iStack_198 = auVar21._0_8_;
        puVar10 = 0x10;
        iVar4 = trace_event_buffer_reserve(&uStack_1f8,iVar15);
        auVar21._8_8_ = piStack_1a8;
        auVar21._0_8_ = iStack_198;
        if (iVar4 != 0) {
            *(iVar4 + 8) = *(auVar20._8_8_ + 0x68);
            *(iVar4 + 0xc) = puVar11;
            trace_event_buffer_commit(&uStack_1f8);
            auVar21._8_8_ = piStack_1a8;
            auVar21._0_8_ = iStack_198;
        }
    }
    piStack_1a8 = auVar21._8_8_;
    iStack_198 = auVar21._0_8_;
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_1c8) {
        return;
    }
    auVar22 = __stack_chk_fail();
    iVar13 = auVar22._0_8_;
    *extraout_x18_03 = sym.perf_trace_nvme_async_event;
    pcStack_238 = sym.perf_trace_nvme_async_event;
    pcStack_230 = sym.perf_trace_nvme_setup_cmd;
    iVar4 = sp_el0;
    iStack_248 = *(iVar4 + 0x5e0);
    uVar3 = puVar10 & 0xffffffff;
    iStack_250 = 0;
    uStack_254 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar13 + 0x78);
    ppuStack_240 = &ppuStack_1c0;
    uStack_220 = uVar14;
    uStack_208 = puVar11 & 0xffffffff;
    auStack_218 = auVar20;
    if ((*(iVar13 + 0x80) != 0) || (uVar9 = puVar10, *piVar1 != 0)) {
        uVar9 = SUB84(&uStack_254,0);
        iVar4 = perf_trace_buf_alloc(0x14,&iStack_250);
        uVar2 = _trace_event_reg;
        if (iVar4 != 0) {
            *(iStack_250 + 0xe8) = &ppuStack_240;
            *(iStack_250 + 0xf8) = auStack_260;
            *(iStack_250 + 0x100) = ~(-1L << (uVar2 & 0x3f)) & 0x80067a4;
            *(iStack_250 + 0x108) = 5;
            *(iVar4 + 8) = *(auVar22._8_8_ + 0x68);
            *(iVar4 + 0xc) = puVar10;
            iVar15 = iVar13;
            uVar9 = uStack_254;
            perf_trace_run_bpf_submit(iVar4,0x14,uStack_254,iVar13,1,iStack_250,piVar1,0);
            in_w3 = iVar15;
        }
    }
    uVar7 = uVar9;
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_248) {
        return;
    }
    auVar20 = __stack_chk_fail();
    piVar5 = auVar20._8_8_;
    iVar15 = auVar20._0_8_;
    uVar14 = tpidr_el2;
    *extraout_x18_04 = 0x80068c4;
    uStack_298 = 0x80068c4;
    pcStack_290 = sym.perf_trace_nvme_async_event;
    iVar4 = sp_el0;
    iStack_2a8 = *(iVar4 + 0x5e0);
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    uVar19 = *(iVar15 + 0x48);
    ppuStack_2a0 = &ppuStack_240;
    piStack_278 = piVar1;
    uStack_270 = uVar3;
    uVar12 = in_w3;
    if ((uVar19 >> 8 & 1) == 0) {
        uVar8 = uVar7;
        if ((uVar19 >> 7 & 1) != 0) {
            uVar8 = 0;
            uVar12 = 0;
            iStack_280 = auVar22._8_8_;
            iStack_268 = iVar13;
            event_triggers_call(iVar15,0);
            auVar22._8_8_ = iStack_280;
            auVar22._0_8_ = iStack_268;
        }
        iStack_280 = auVar22._8_8_;
        iStack_268 = auVar22._0_8_;
        if ((uVar19 >> 6 & 1) != 0) goto code_r0x080069cc;
        if ((uVar19 >> 9 & 1) != 0) {
            uVar3 = trace_event_ignore_this_pid(iVar15);
            auVar22._8_8_ = iStack_280;
            auVar22._0_8_ = iStack_268;
            if ((uVar3 & 1) != 0) goto code_r0x080069cc;
        }
    }
    iStack_280 = auVar22._8_8_;
    iStack_268 = auVar22._0_8_;
    uVar8 = 0x34;
    iVar4 = trace_event_buffer_reserve(&uStack_2d8,iVar15);
    auVar22._8_8_ = iStack_280;
    auVar22._0_8_ = iStack_268;
    if (iVar4 != 0) {
        *(iVar4 + 8) = *(piVar5[0x29] + 0x68);
        iVar13 = piVar5[0x14];
        if (iVar13 == 0) {
            *(iVar4 + 0x1c) = 0;
            *(iVar4 + 0x24) = 0;
            *(iVar4 + 0xc) = 0;
            *(iVar4 + 0x14) = 0;
        }
        else {
            uVar16 = *(iVar13 + 0x24);
            uVar17 = *(iVar13 + 0x14);
            uVar14 = *(iVar13 + 0xc);
            *(iVar4 + 0x1c) = *(iVar13 + 0x1c);
            *(iVar4 + 0x24) = uVar16;
            *(iVar4 + 0xc) = uVar14;
            *(iVar4 + 0x14) = uVar17;
        }
        uVar19 = 0;
        if (*(*piVar5 + 0x58) != 0) {
            uVar19 = *(piVar5[2] + 0x1cc) + 1U & 0xffff;
        }
        *(iVar4 + 0x2c) = uVar19;
        *(iVar4 + 0x30) = uVar7;
        *(iVar4 + 0x32) = in_w3;
        trace_event_buffer_commit(&uStack_2d8);
        auVar22._8_8_ = iStack_280;
        auVar22._0_8_ = iStack_268;
    }
code_r0x080069cc:
    iStack_280 = auVar22._8_8_;
    iStack_268 = auVar22._0_8_;
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_2a8) {
        return;
    }
    auVar20 = __stack_chk_fail();
    piVar5 = auVar20._8_8_;
    iVar13 = auVar20._0_8_;
    *extraout_x18_05 = sym.perf_trace_nvme_sq;
    pcStack_318 = sym.perf_trace_nvme_sq;
    iVar4 = sp_el0;
    iStack_328 = *(iVar4 + 0x5e0);
    iStack_330 = 0;
    uStack_334 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar13 + 0x78);
    ppuStack_320 = &ppuStack_2a0;
    if (((*(iVar13 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar4 = perf_trace_buf_alloc(0x34,&iStack_330,&uStack_334), uVar3 = _trace_event_reg, iVar4 != 0)) {
        *(iStack_330 + 0xe8) = &ppuStack_320;
        *(iStack_330 + 0xf8) = auStack_340;
        *(iStack_330 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8006a04;
        *(iStack_330 + 0x108) = 5;
        *(iVar4 + 8) = *(piVar5[0x29] + 0x68);
        iVar15 = piVar5[0x14];
        if (iVar15 == 0) {
            *(iVar4 + 0x1c) = 0;
            *(iVar4 + 0x24) = 0;
            *(iVar4 + 0xc) = 0;
            *(iVar4 + 0x14) = 0;
        }
        else {
            uVar16 = *(iVar15 + 0x24);
            uVar17 = *(iVar15 + 0x14);
            uVar14 = *(iVar15 + 0xc);
            *(iVar4 + 0x1c) = *(iVar15 + 0x1c);
            *(iVar4 + 0x24) = uVar16;
            *(iVar4 + 0xc) = uVar14;
            *(iVar4 + 0x14) = uVar17;
        }
        uVar19 = 0;
        if (*(*piVar5 + 0x58) != 0) {
            uVar19 = *(piVar5[2] + 0x1cc) + 1U & 0xffff;
        }
        *(iVar4 + 0x2c) = uVar19;
        *(iVar4 + 0x30) = uVar8;
        *(iVar4 + 0x32) = uVar12;
        perf_trace_run_bpf_submit(iVar4,0x34,uStack_334,iVar13,1,iStack_330,piVar1,0);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_328) {
        __stack_chk_fail();
        uVar14 = tpidr_el2;
        *extraout_x18_06 = 0x8006b84;
        bpf_trace_run2(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.perf_trace_nvme_setup_cmd @ 0x08006230 (size 448) =====

//WARNING: Removing unreachable block (ram,0x0800686c)
//WARNING: Removing unreachable block (ram,0x080065e0)
//WARNING: Removing unreachable block (ram,0x08006ab8)

void sym.perf_trace_nvme_setup_cmd(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    ulong in_tmp_ldXn;
    int64_t iVar2;
    uint64_t uVar3;
    ushort uVar5;
    ushort uVar6;
    uchar *puVar8;
    uchar *puVar9;
    ushort in_w3;
    ushort uVar10;
    uint64_t uVar11;
    int64_t iVar12;
    ulong uVar13;
    int64_t iVar14;
    ulong uVar15;
    ulong uVar16;
    ulong uVar17;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    uint32_t uVar18;
    uint64_t unaff_x30;
    uchar auVar19 [16];
    uchar auVar20 [16];
    uchar auStack_2d0 [12];
    uint uStack_2c4;
    int64_t iStack_2c0;
    int64_t iStack_2b8;
    uchar *puStack_2b0;
    code *pcStack_2a8;
    ulong uStack_268;
    ulong uStack_260;
    ulong uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    ulong uStack_240;
    int64_t iStack_238;
    uchar *puStack_230;
    ulong uStack_228;
    code *pcStack_220;
    int64_t iStack_210;
    int64_t *piStack_208;
    uint64_t uStack_200;
    int64_t iStack_1f8;
    uchar auStack_1f0 [12];
    uint uStack_1e4;
    int64_t iStack_1e0;
    int64_t iStack_1d8;
    uchar *puStack_1d0;
    code *pcStack_1c8;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    int64_t iStack_158;
    uchar *puStack_150;
    ulong uStack_148;
    code *pcStack_140;
    int64_t *piStack_138;
    int64_t *piStack_130;
    int64_t iStack_128;
    uchar auStack_120 [12];
    uint32_t uStack_114;
    int64_t iStack_110;
    int64_t iStack_108;
    uchar *puStack_100;
    code *pcStack_f8;
    int64_t iStack_f0;
    ulong uStack_e8;
    uchar auStack_e0 [16];
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
    int64_t iStack_70;
    int64_t iStack_68;
    uchar auStack_60 [12];
    uint32_t uStack_54;
    int64_t iStack_50;
    int64_t iStack_48;
    int64_t *piVar4;
    uint uVar7;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_48 = *(iVar2 + 0x5e0);
    iStack_50 = 0;
    uStack_54 = 0;
    iVar2 = tpidr_el1;
    piVar1 = iVar2 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (puVar8 = arg3, *piVar1 != 0)) {
        puVar8 = &stack0xffffffffffffffac;
        iVar2 = perf_trace_buf_alloc(0x5c,&stack0xffffffffffffffb0);
        uVar3 = _trace_event_reg;
        if (iVar2 != 0) {
            *(iStack_50 + 0xe8) = &stack0xffffffffffffffc0;
            uVar11 = -1L << (uVar3 & 0x3f);
            uVar3 = (~uVar11 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar3 = uVar11 | unaff_x30;
            }
            *(iStack_50 + 0xf8) = &stack0xffffffffffffffa0;
            *(iStack_50 + 0x100) = uVar3;
            *(iStack_50 + 0x108) = 5;
            *(iVar2 + 0x28) = *(*(arg2 + 0x148) + 0x68);
            uVar18 = 0;
            if (*(*arg2 + 0x58) != 0) {
                uVar18 = *(*(arg2 + 0x10) + 0x1cc) + 1U & 0xffff;
            }
            *(iVar2 + 0x2c) = uVar18;
            *(iVar2 + 0x30) = *arg3;
            *(iVar2 + 0x31) = *(arg3 + 1);
            *(iVar2 + 0x34) = *(arg3 + 2);
            uVar7 = *(arg3 + 4);
            *(iVar2 + 0x3c) = 0;
            *(iVar2 + 0x38) = uVar7;
            *(iVar2 + 0x32) = *(arg3 + 4);
            iVar12 = *(arg2 + 0xa0);
            if (iVar12 == 0) {
                *(iVar2 + 0x18) = 0;
                *(iVar2 + 0x20) = 0;
                *(iVar2 + 8) = 0;
                *(iVar2 + 0x10) = 0;
            }
            else {
                uVar15 = *(iVar12 + 0x24);
                uVar16 = *(iVar12 + 0x14);
                uVar13 = *(iVar12 + 0xc);
                *(iVar2 + 0x18) = *(iVar12 + 0x1c);
                *(iVar2 + 0x20) = uVar15;
                *(iVar2 + 8) = uVar13;
                *(iVar2 + 0x10) = uVar16;
            }
            uVar13 = *(arg3 + 0x30);
            uVar15 = *(arg3 + 0x28);
            puVar8 = uStack_54;
            *(iVar2 + 0x4d) = *(arg3 + 0x38);
            *(iVar2 + 0x45) = uVar13;
            *(iVar2 + 0x3d) = uVar15;
            iVar12 = arg1;
            perf_trace_run_bpf_submit(iVar2,0x5c,puVar8,arg1,1,iStack_50,piVar1,0);
            in_w3 = iVar12;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_48) {
        return;
    }
    auVar19 = __stack_chk_fail();
    piVar4 = auVar19._8_8_;
    iVar12 = auVar19._0_8_;
    uVar13 = tpidr_el2;
    *extraout_x18 = 0x80063e4;
    uStack_88 = 0x80063e4;
    iVar2 = sp_el0;
    iStack_98 = *(iVar2 + 0x5e0);
    uVar13 = *(iVar12 + 0x48);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uVar18 = uVar13;
    puStack_90 = &stack0xffffffffffffffc0;
    piStack_80 = piVar1;
    iStack_70 = arg3;
    iStack_68 = arg1;
    if ((uVar18 >> 8 & 1) == 0) {
        if ((uVar18 >> 7 & 1) != 0) {
            puVar8 = NULL;
            in_w3 = 0;
            event_triggers_call(iVar12,0);
        }
        if (((uVar18 >> 6 & 1) == 0) &&
           (((uVar18 >> 9 & 1) == 0 || (uVar3 = trace_event_ignore_this_pid(iVar12), (uVar3 & 1) == 0))))
        goto code_r0x08006460;
    }
    else {
code_r0x08006460:
        puVar8 = 0x48;
        iVar2 = trace_event_buffer_reserve(&stack0xffffffffffffff38,iVar12);
        if (iVar2 != 0) {
            *(iVar2 + 0x28) = *(piVar4[0x29] + 0x68);
            uVar18 = 0;
            if (*(*piVar4 + 0x58) != 0) {
                uVar18 = *(piVar4[2] + 0x1cc) + 1U & 0xffff;
            }
            *(iVar2 + 0x2c) = uVar18;
            *(iVar2 + 0x30) = *(piVar4[0x26] + 2);
            *(iVar2 + 0x38) = piVar4[0x27];
            *(iVar2 + 0x40) = *(piVar4 + 0x141);
            *(iVar2 + 0x41) = *(piVar4 + 0x142);
            *(iVar2 + 0x42) = *(piVar4 + 0x144);
            iVar12 = piVar4[0x14];
            if (iVar12 == 0) {
                *(iVar2 + 0x18) = 0;
                *(iVar2 + 0x20) = 0;
                *(iVar2 + 8) = 0;
                *(iVar2 + 0x10) = 0;
            }
            else {
                uVar16 = *(iVar12 + 0x24);
                uVar17 = *(iVar12 + 0x14);
                uVar15 = *(iVar12 + 0xc);
                *(iVar2 + 0x18) = *(iVar12 + 0x1c);
                *(iVar2 + 0x20) = uVar16;
                *(iVar2 + 8) = uVar15;
                *(iVar2 + 0x10) = uVar17;
            }
            trace_event_buffer_commit(&stack0xffffffffffffff38);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_98) {
        return;
    }
    auVar20 = __stack_chk_fail();
    piVar4 = auVar20._8_8_;
    iVar12 = auVar20._0_8_;
    *extraout_x18_00 = sym.perf_trace_nvme_complete_rq;
    pcStack_f8 = sym.perf_trace_nvme_complete_rq;
    iVar2 = sp_el0;
    iStack_108 = *(iVar2 + 0x5e0);
    iStack_110 = 0;
    uStack_114 = 0;
    iVar2 = tpidr_el1;
    piVar1 = iVar2 + *(iVar12 + 0x78);
    puStack_100 = &stack0xffffffffffffff70;
    iStack_f0 = arg2;
    uStack_e8 = uVar13;
    auStack_e0 = auVar19;
    if ((*(iVar12 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar8 = &stack0xfffffffffffffeec;
        iVar2 = perf_trace_buf_alloc(0x4c,&stack0xfffffffffffffef0);
        uVar3 = _trace_event_reg;
        if (iVar2 != 0) {
            *(iStack_110 + 0xe8) = &stack0xffffffffffffff00;
            *(iStack_110 + 0xf8) = &stack0xfffffffffffffee0;
            *(iStack_110 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8006538;
            *(iStack_110 + 0x108) = 5;
            *(iVar2 + 0x28) = *(piVar4[0x29] + 0x68);
            uVar18 = 0;
            if (*(*piVar4 + 0x58) != 0) {
                uVar18 = *(piVar4[2] + 0x1cc) + 1U & 0xffff;
            }
            *(iVar2 + 0x2c) = uVar18;
            *(iVar2 + 0x30) = *(piVar4[0x26] + 2);
            *(iVar2 + 0x38) = piVar4[0x27];
            *(iVar2 + 0x40) = *(piVar4 + 0x141);
            *(iVar2 + 0x41) = *(piVar4 + 0x142);
            *(iVar2 + 0x42) = *(piVar4 + 0x144);
            iVar14 = piVar4[0x14];
            if (iVar14 == 0) {
                *(iVar2 + 0x18) = 0;
                *(iVar2 + 0x20) = 0;
                *(iVar2 + 8) = 0;
                *(iVar2 + 0x10) = 0;
            }
            else {
                uVar15 = *(iVar14 + 0x24);
                uVar16 = *(iVar14 + 0x14);
                uVar13 = *(iVar14 + 0xc);
                *(iVar2 + 0x18) = *(iVar14 + 0x1c);
                *(iVar2 + 0x20) = uVar15;
                *(iVar2 + 8) = uVar13;
                *(iVar2 + 0x10) = uVar16;
            }
            puVar8 = uStack_114;
            iVar14 = iVar12;
            perf_trace_run_bpf_submit(iVar2,0x4c,puVar8,iVar12,1,iStack_110,piVar1,0);
            in_w3 = iVar14;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_108) {
        return;
    }
    auVar19 = __stack_chk_fail();
    iVar14 = auVar19._0_8_;
    uVar13 = tpidr_el2;
    *extraout_x18_01 = 0x80066cc;
    uStack_148 = 0x80066cc;
    pcStack_140 = sym.perf_trace_nvme_complete_rq;
    iVar2 = sp_el0;
    iStack_158 = *(iVar2 + 0x5e0);
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uVar18 = *(iVar14 + 0x48);
    puStack_150 = &stack0xffffffffffffff00;
    piStack_130 = piVar1;
    if ((uVar18 >> 8 & 1) == 0) {
        puVar9 = puVar8;
        if ((uVar18 >> 7 & 1) != 0) {
            puVar9 = NULL;
            in_w3 = 0;
            piStack_138 = piVar4;
            iStack_128 = iVar12;
            event_triggers_call(iVar14,0);
            auVar20._8_8_ = piStack_138;
            auVar20._0_8_ = iStack_128;
        }
        piStack_138 = auVar20._8_8_;
        iStack_128 = auVar20._0_8_;
        if (((uVar18 >> 6 & 1) == 0) &&
           (((uVar18 >> 9 & 1) == 0 ||
            (uVar3 = trace_event_ignore_this_pid(iVar14), auVar20._8_8_ = piStack_138, auVar20._0_8_ = iStack_128,
            (uVar3 & 1) == 0)))) goto code_r0x0800674c;
    }
    else {
code_r0x0800674c:
        piStack_138 = auVar20._8_8_;
        iStack_128 = auVar20._0_8_;
        puVar9 = 0x10;
        iVar2 = trace_event_buffer_reserve(&stack0xfffffffffffffe78,iVar14);
        auVar20._8_8_ = piStack_138;
        auVar20._0_8_ = iStack_128;
        if (iVar2 != 0) {
            *(iVar2 + 8) = *(auVar19._8_8_ + 0x68);
            *(iVar2 + 0xc) = puVar8;
            trace_event_buffer_commit(&stack0xfffffffffffffe78);
            auVar20._8_8_ = piStack_138;
            auVar20._0_8_ = iStack_128;
        }
    }
    piStack_138 = auVar20._8_8_;
    iStack_128 = auVar20._0_8_;
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_158) {
        return;
    }
    auVar19 = __stack_chk_fail();
    iVar12 = auVar19._0_8_;
    *extraout_x18_02 = sym.perf_trace_nvme_async_event;
    pcStack_1c8 = sym.perf_trace_nvme_async_event;
    iVar2 = sp_el0;
    iStack_1d8 = *(iVar2 + 0x5e0);
    uVar3 = puVar9 & 0xffffffff;
    iStack_1e0 = 0;
    uStack_1e4 = 0;
    iVar2 = tpidr_el1;
    piVar1 = iVar2 + *(iVar12 + 0x78);
    puStack_1d0 = &stack0xfffffffffffffeb0;
    if ((*(iVar12 + 0x80) != 0) || (uVar7 = puVar9, *piVar1 != 0)) {
        uVar7 = SUB84(&stack0xfffffffffffffe1c,0);
        iVar2 = perf_trace_buf_alloc(0x14,&stack0xfffffffffffffe20);
        uVar11 = _trace_event_reg;
        if (iVar2 != 0) {
            *(iStack_1e0 + 0xe8) = &stack0xfffffffffffffe30;
            *(iStack_1e0 + 0xf8) = &stack0xfffffffffffffe10;
            *(iStack_1e0 + 0x100) = ~(-1L << (uVar11 & 0x3f)) & 0x80067a4;
            *(iStack_1e0 + 0x108) = 5;
            *(iVar2 + 8) = *(auVar19._8_8_ + 0x68);
            *(iVar2 + 0xc) = puVar9;
            iVar14 = iVar12;
            uVar7 = uStack_1e4;
            perf_trace_run_bpf_submit(iVar2,0x14,uStack_1e4,iVar12,1,iStack_1e0,piVar1,0);
            in_w3 = iVar14;
        }
    }
    uVar5 = uVar7;
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_1d8) {
        return;
    }
    auVar20 = __stack_chk_fail();
    piVar4 = auVar20._8_8_;
    iVar14 = auVar20._0_8_;
    uVar13 = tpidr_el2;
    *extraout_x18_03 = 0x80068c4;
    uStack_228 = 0x80068c4;
    pcStack_220 = sym.perf_trace_nvme_async_event;
    iVar2 = sp_el0;
    iStack_238 = *(iVar2 + 0x5e0);
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_268 = 0;
    uStack_260 = 0;
    uVar18 = *(iVar14 + 0x48);
    puStack_230 = &stack0xfffffffffffffe30;
    piStack_208 = piVar1;
    uStack_200 = uVar3;
    uVar10 = in_w3;
    if ((uVar18 >> 8 & 1) == 0) {
        uVar6 = uVar5;
        if ((uVar18 >> 7 & 1) != 0) {
            uVar6 = 0;
            uVar10 = 0;
            iStack_210 = auVar19._8_8_;
            iStack_1f8 = iVar12;
            event_triggers_call(iVar14,0);
            auVar19._8_8_ = iStack_210;
            auVar19._0_8_ = iStack_1f8;
        }
        iStack_210 = auVar19._8_8_;
        iStack_1f8 = auVar19._0_8_;
        if ((uVar18 >> 6 & 1) != 0) goto code_r0x080069cc;
        if ((uVar18 >> 9 & 1) != 0) {
            uVar3 = trace_event_ignore_this_pid(iVar14);
            auVar19._8_8_ = iStack_210;
            auVar19._0_8_ = iStack_1f8;
            if ((uVar3 & 1) != 0) goto code_r0x080069cc;
        }
    }
    iStack_210 = auVar19._8_8_;
    iStack_1f8 = auVar19._0_8_;
    uVar6 = 0x34;
    iVar2 = trace_event_buffer_reserve(&stack0xfffffffffffffd98,iVar14);
    auVar19._8_8_ = iStack_210;
    auVar19._0_8_ = iStack_1f8;
    if (iVar2 != 0) {
        *(iVar2 + 8) = *(piVar4[0x29] + 0x68);
        iVar12 = piVar4[0x14];
        if (iVar12 == 0) {
            *(iVar2 + 0x1c) = 0;
            *(iVar2 + 0x24) = 0;
            *(iVar2 + 0xc) = 0;
            *(iVar2 + 0x14) = 0;
        }
        else {
            uVar15 = *(iVar12 + 0x24);
            uVar16 = *(iVar12 + 0x14);
            uVar13 = *(iVar12 + 0xc);
            *(iVar2 + 0x1c) = *(iVar12 + 0x1c);
            *(iVar2 + 0x24) = uVar15;
            *(iVar2 + 0xc) = uVar13;
            *(iVar2 + 0x14) = uVar16;
        }
        uVar18 = 0;
        if (*(*piVar4 + 0x58) != 0) {
            uVar18 = *(piVar4[2] + 0x1cc) + 1U & 0xffff;
        }
        *(iVar2 + 0x2c) = uVar18;
        *(iVar2 + 0x30) = uVar5;
        *(iVar2 + 0x32) = in_w3;
        trace_event_buffer_commit(&stack0xfffffffffffffd98);
        auVar19._8_8_ = iStack_210;
        auVar19._0_8_ = iStack_1f8;
    }
code_r0x080069cc:
    iStack_210 = auVar19._8_8_;
    iStack_1f8 = auVar19._0_8_;
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_238) {
        return;
    }
    auVar19 = __stack_chk_fail();
    piVar4 = auVar19._8_8_;
    iVar12 = auVar19._0_8_;
    *extraout_x18_04 = sym.perf_trace_nvme_sq;
    pcStack_2a8 = sym.perf_trace_nvme_sq;
    iVar2 = sp_el0;
    iStack_2b8 = *(iVar2 + 0x5e0);
    iStack_2c0 = 0;
    uStack_2c4 = 0;
    iVar2 = tpidr_el1;
    piVar1 = iVar2 + *(iVar12 + 0x78);
    puStack_2b0 = &stack0xfffffffffffffdd0;
    if (((*(iVar12 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar2 = perf_trace_buf_alloc(0x34,&stack0xfffffffffffffd40,&stack0xfffffffffffffd3c),
       uVar3 = _trace_event_reg, iVar2 != 0)) {
        *(iStack_2c0 + 0xe8) = &stack0xfffffffffffffd50;
        *(iStack_2c0 + 0xf8) = &stack0xfffffffffffffd30;
        *(iStack_2c0 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8006a04;
        *(iStack_2c0 + 0x108) = 5;
        *(iVar2 + 8) = *(piVar4[0x29] + 0x68);
        iVar14 = piVar4[0x14];
        if (iVar14 == 0) {
            *(iVar2 + 0x1c) = 0;
            *(iVar2 + 0x24) = 0;
            *(iVar2 + 0xc) = 0;
            *(iVar2 + 0x14) = 0;
        }
        else {
            uVar15 = *(iVar14 + 0x24);
            uVar16 = *(iVar14 + 0x14);
            uVar13 = *(iVar14 + 0xc);
            *(iVar2 + 0x1c) = *(iVar14 + 0x1c);
            *(iVar2 + 0x24) = uVar15;
            *(iVar2 + 0xc) = uVar13;
            *(iVar2 + 0x14) = uVar16;
        }
        uVar18 = 0;
        if (*(*piVar4 + 0x58) != 0) {
            uVar18 = *(piVar4[2] + 0x1cc) + 1U & 0xffff;
        }
        *(iVar2 + 0x2c) = uVar18;
        *(iVar2 + 0x30) = uVar6;
        *(iVar2 + 0x32) = uVar10;
        perf_trace_run_bpf_submit(iVar2,0x34,uStack_2c4,iVar12,1,iStack_2c0,piVar1,0);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_2b8) {
        __stack_chk_fail();
        uVar13 = tpidr_el2;
        *extraout_x18_05 = 0x8006b84;
        bpf_trace_run2(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_nvme_complete_rq @ 0x080063f0 (size 328) =====

//WARNING: Removing unreachable block (ram,0x0800686c)
//WARNING: Removing unreachable block (ram,0x080065e0)
//WARNING: Removing unreachable block (ram,0x08006ab8)

void sym.trace_event_raw_event_nvme_complete_rq(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong in_tmp_ldXn;
    uint64_t uVar3;
    int64_t iVar4;
    ushort uVar6;
    ushort uVar7;
    uint32_t *in_x2;
    uint32_t *puVar9;
    ushort in_w3;
    ushort uVar10;
    int64_t iVar11;
    ulong uVar12;
    int64_t iVar13;
    ulong uVar14;
    ulong uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    uint32_t uVar16;
    ulong unaff_x30;
    uchar auVar17 [16];
    uchar auVar18 [16];
    uchar auStack_270 [12];
    uint uStack_264;
    int64_t iStack_260;
    int64_t iStack_258;
    ulong **ppuStack_250;
    code *pcStack_248;
    ulong uStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    int64_t iStack_1d8;
    ulong **ppuStack_1d0;
    ulong uStack_1c8;
    code *pcStack_1c0;
    int64_t iStack_1b0;
    int64_t *piStack_1a8;
    uint64_t uStack_1a0;
    int64_t iStack_198;
    uchar auStack_190 [12];
    uint uStack_184;
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
    int64_t *piStack_d0;
    int64_t iStack_c8;
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
    int64_t *piVar5;
    uint uVar8;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar16 = *(arg1 + 0x48);
    if ((uVar16 >> 8 & 1) == 0) {
        if ((uVar16 >> 7 & 1) != 0) {
            in_x2 = NULL;
            in_w3 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar16 >> 6 & 1) == 0) &&
           (((uVar16 >> 9 & 1) == 0 || (uVar3 = trace_event_ignore_this_pid(arg1), (uVar3 & 1) == 0))))
        goto code_r0x08006460;
    }
    else {
code_r0x08006460:
        in_x2 = 0x48;
        iVar4 = trace_event_buffer_reserve(&uStack_68,arg1);
        if (iVar4 != 0) {
            *(iVar4 + 0x28) = *(*(arg2 + 0x148) + 0x68);
            uVar16 = 0;
            if (*(*arg2 + 0x58) != 0) {
                uVar16 = *(*(arg2 + 0x10) + 0x1cc) + 1U & 0xffff;
            }
            *(iVar4 + 0x2c) = uVar16;
            *(iVar4 + 0x30) = *(*(arg2 + 0x130) + 2);
            *(iVar4 + 0x38) = *(arg2 + 0x138);
            *(iVar4 + 0x40) = *(arg2 + 0x141);
            *(iVar4 + 0x41) = *(arg2 + 0x142);
            *(iVar4 + 0x42) = *(arg2 + 0x144);
            iVar11 = *(arg2 + 0xa0);
            if (iVar11 == 0) {
                *(iVar4 + 0x18) = 0;
                *(iVar4 + 0x20) = 0;
                *(iVar4 + 8) = 0;
                *(iVar4 + 0x10) = 0;
            }
            else {
                uVar14 = *(iVar11 + 0x24);
                uVar15 = *(iVar11 + 0x14);
                uVar12 = *(iVar11 + 0xc);
                *(iVar4 + 0x18) = *(iVar11 + 0x1c);
                *(iVar4 + 0x20) = uVar14;
                *(iVar4 + 8) = uVar12;
                *(iVar4 + 0x10) = uVar15;
            }
            trace_event_buffer_commit(&uStack_68);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    auVar17 = __stack_chk_fail();
    piVar5 = auVar17._8_8_;
    iVar11 = auVar17._0_8_;
    *extraout_x18 = sym.perf_trace_nvme_complete_rq;
    pcStack_98 = sym.perf_trace_nvme_complete_rq;
    iVar4 = sp_el0;
    iStack_a8 = *(iVar4 + 0x5e0);
    iStack_b0 = 0;
    uStack_b4 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar11 + 0x78);
    puStack_a0 = &stack0xffffffffffffffd0;
    if ((*(iVar11 + 0x80) != 0) || (*piVar1 != 0)) {
        in_x2 = &uStack_b4;
        iVar4 = perf_trace_buf_alloc(0x4c,&iStack_b0);
        uVar3 = _trace_event_reg;
        if (iVar4 != 0) {
            *(iStack_b0 + 0xe8) = &puStack_a0;
            *(iStack_b0 + 0xf8) = auStack_c0;
            *(iStack_b0 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8006538;
            *(iStack_b0 + 0x108) = 5;
            *(iVar4 + 0x28) = *(piVar5[0x29] + 0x68);
            uVar16 = 0;
            if (*(*piVar5 + 0x58) != 0) {
                uVar16 = *(piVar5[2] + 0x1cc) + 1U & 0xffff;
            }
            *(iVar4 + 0x2c) = uVar16;
            *(iVar4 + 0x30) = *(piVar5[0x26] + 2);
            *(iVar4 + 0x38) = piVar5[0x27];
            *(iVar4 + 0x40) = *(piVar5 + 0x141);
            *(iVar4 + 0x41) = *(piVar5 + 0x142);
            *(iVar4 + 0x42) = *(piVar5 + 0x144);
            iVar13 = piVar5[0x14];
            if (iVar13 == 0) {
                *(iVar4 + 0x18) = 0;
                *(iVar4 + 0x20) = 0;
                *(iVar4 + 8) = 0;
                *(iVar4 + 0x10) = 0;
            }
            else {
                uVar14 = *(iVar13 + 0x24);
                uVar15 = *(iVar13 + 0x14);
                uVar12 = *(iVar13 + 0xc);
                *(iVar4 + 0x18) = *(iVar13 + 0x1c);
                *(iVar4 + 0x20) = uVar14;
                *(iVar4 + 8) = uVar12;
                *(iVar4 + 0x10) = uVar15;
            }
            in_x2 = uStack_b4;
            iVar13 = iVar11;
            perf_trace_run_bpf_submit(iVar4,0x4c,in_x2,iVar11,1,iStack_b0,piVar1,0);
            in_w3 = iVar13;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_a8) {
        return;
    }
    auVar18 = __stack_chk_fail();
    iVar13 = auVar18._0_8_;
    uVar12 = tpidr_el2;
    *extraout_x18_00 = 0x80066cc;
    uStack_e8 = 0x80066cc;
    pcStack_e0 = sym.perf_trace_nvme_complete_rq;
    iVar4 = sp_el0;
    iStack_f8 = *(iVar4 + 0x5e0);
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uVar16 = *(iVar13 + 0x48);
    ppuStack_f0 = &puStack_a0;
    piStack_d0 = piVar1;
    if ((uVar16 >> 8 & 1) == 0) {
        puVar9 = in_x2;
        if ((uVar16 >> 7 & 1) != 0) {
            puVar9 = NULL;
            in_w3 = 0;
            piStack_d8 = piVar5;
            iStack_c8 = iVar11;
            event_triggers_call(iVar13,0);
            auVar17._8_8_ = piStack_d8;
            auVar17._0_8_ = iStack_c8;
        }
        piStack_d8 = auVar17._8_8_;
        iStack_c8 = auVar17._0_8_;
        if (((uVar16 >> 6 & 1) == 0) &&
           (((uVar16 >> 9 & 1) == 0 ||
            (uVar3 = trace_event_ignore_this_pid(iVar13), auVar17._8_8_ = piStack_d8, auVar17._0_8_ = iStack_c8,
            (uVar3 & 1) == 0)))) goto code_r0x0800674c;
    }
    else {
code_r0x0800674c:
        piStack_d8 = auVar17._8_8_;
        iStack_c8 = auVar17._0_8_;
        puVar9 = 0x10;
        iVar4 = trace_event_buffer_reserve(&uStack_128,iVar13);
        auVar17._8_8_ = piStack_d8;
        auVar17._0_8_ = iStack_c8;
        if (iVar4 != 0) {
            *(iVar4 + 8) = *(auVar18._8_8_ + 0x68);
            *(iVar4 + 0xc) = in_x2;
            trace_event_buffer_commit(&uStack_128);
            auVar17._8_8_ = piStack_d8;
            auVar17._0_8_ = iStack_c8;
        }
    }
    piStack_d8 = auVar17._8_8_;
    iStack_c8 = auVar17._0_8_;
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_f8) {
        return;
    }
    auVar18 = __stack_chk_fail();
    iVar11 = auVar18._0_8_;
    *extraout_x18_01 = sym.perf_trace_nvme_async_event;
    pcStack_168 = sym.perf_trace_nvme_async_event;
    iVar4 = sp_el0;
    iStack_178 = *(iVar4 + 0x5e0);
    uVar3 = puVar9 & 0xffffffff;
    iStack_180 = 0;
    uStack_184 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar11 + 0x78);
    ppuStack_170 = &ppuStack_f0;
    if ((*(iVar11 + 0x80) != 0) || (uVar8 = puVar9, *piVar1 != 0)) {
        uVar8 = SUB84(&uStack_184,0);
        iVar4 = perf_trace_buf_alloc(0x14,&iStack_180);
        uVar2 = _trace_event_reg;
        if (iVar4 != 0) {
            *(iStack_180 + 0xe8) = &ppuStack_170;
            *(iStack_180 + 0xf8) = auStack_190;
            *(iStack_180 + 0x100) = ~(-1L << (uVar2 & 0x3f)) & 0x80067a4;
            *(iStack_180 + 0x108) = 5;
            *(iVar4 + 8) = *(auVar18._8_8_ + 0x68);
            *(iVar4 + 0xc) = puVar9;
            iVar13 = iVar11;
            uVar8 = uStack_184;
            perf_trace_run_bpf_submit(iVar4,0x14,uStack_184,iVar11,1,iStack_180,piVar1,0);
            in_w3 = iVar13;
        }
    }
    uVar6 = uVar8;
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_178) {
        return;
    }
    auVar17 = __stack_chk_fail();
    piVar5 = auVar17._8_8_;
    iVar13 = auVar17._0_8_;
    uVar12 = tpidr_el2;
    *extraout_x18_02 = 0x80068c4;
    uStack_1c8 = 0x80068c4;
    pcStack_1c0 = sym.perf_trace_nvme_async_event;
    iVar4 = sp_el0;
    iStack_1d8 = *(iVar4 + 0x5e0);
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    uVar16 = *(iVar13 + 0x48);
    ppuStack_1d0 = &ppuStack_170;
    piStack_1a8 = piVar1;
    uStack_1a0 = uVar3;
    uVar10 = in_w3;
    if ((uVar16 >> 8 & 1) == 0) {
        uVar7 = uVar6;
        if ((uVar16 >> 7 & 1) != 0) {
            uVar7 = 0;
            uVar10 = 0;
            iStack_1b0 = auVar18._8_8_;
            iStack_198 = iVar11;
            event_triggers_call(iVar13,0);
            auVar18._8_8_ = iStack_1b0;
            auVar18._0_8_ = iStack_198;
        }
        iStack_1b0 = auVar18._8_8_;
        iStack_198 = auVar18._0_8_;
        if ((uVar16 >> 6 & 1) != 0) goto code_r0x080069cc;
        if ((uVar16 >> 9 & 1) != 0) {
            uVar3 = trace_event_ignore_this_pid(iVar13);
            auVar18._8_8_ = iStack_1b0;
            auVar18._0_8_ = iStack_198;
            if ((uVar3 & 1) != 0) goto code_r0x080069cc;
        }
    }
    iStack_1b0 = auVar18._8_8_;
    iStack_198 = auVar18._0_8_;
    uVar7 = 0x34;
    iVar4 = trace_event_buffer_reserve(&uStack_208,iVar13);
    auVar18._8_8_ = iStack_1b0;
    auVar18._0_8_ = iStack_198;
    if (iVar4 != 0) {
        *(iVar4 + 8) = *(piVar5[0x29] + 0x68);
        iVar11 = piVar5[0x14];
        if (iVar11 == 0) {
            *(iVar4 + 0x1c) = 0;
            *(iVar4 + 0x24) = 0;
            *(iVar4 + 0xc) = 0;
            *(iVar4 + 0x14) = 0;
        }
        else {
            uVar14 = *(iVar11 + 0x24);
            uVar15 = *(iVar11 + 0x14);
            uVar12 = *(iVar11 + 0xc);
            *(iVar4 + 0x1c) = *(iVar11 + 0x1c);
            *(iVar4 + 0x24) = uVar14;
            *(iVar4 + 0xc) = uVar12;
            *(iVar4 + 0x14) = uVar15;
        }
        uVar16 = 0;
        if (*(*piVar5 + 0x58) != 0) {
            uVar16 = *(piVar5[2] + 0x1cc) + 1U & 0xffff;
        }
        *(iVar4 + 0x2c) = uVar16;
        *(iVar4 + 0x30) = uVar6;
        *(iVar4 + 0x32) = in_w3;
        trace_event_buffer_commit(&uStack_208);
        auVar18._8_8_ = iStack_1b0;
        auVar18._0_8_ = iStack_198;
    }
code_r0x080069cc:
    iStack_1b0 = auVar18._8_8_;
    iStack_198 = auVar18._0_8_;
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_1d8) {
        return;
    }
    auVar17 = __stack_chk_fail();
    piVar5 = auVar17._8_8_;
    iVar11 = auVar17._0_8_;
    *extraout_x18_03 = sym.perf_trace_nvme_sq;
    pcStack_248 = sym.perf_trace_nvme_sq;
    iVar4 = sp_el0;
    iStack_258 = *(iVar4 + 0x5e0);
    iStack_260 = 0;
    uStack_264 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar11 + 0x78);
    ppuStack_250 = &ppuStack_1d0;
    if (((*(iVar11 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar4 = perf_trace_buf_alloc(0x34,&iStack_260,&uStack_264), uVar3 = _trace_event_reg, iVar4 != 0)) {
        *(iStack_260 + 0xe8) = &ppuStack_250;
        *(iStack_260 + 0xf8) = auStack_270;
        *(iStack_260 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8006a04;
        *(iStack_260 + 0x108) = 5;
        *(iVar4 + 8) = *(piVar5[0x29] + 0x68);
        iVar13 = piVar5[0x14];
        if (iVar13 == 0) {
            *(iVar4 + 0x1c) = 0;
            *(iVar4 + 0x24) = 0;
            *(iVar4 + 0xc) = 0;
            *(iVar4 + 0x14) = 0;
        }
        else {
            uVar14 = *(iVar13 + 0x24);
            uVar15 = *(iVar13 + 0x14);
            uVar12 = *(iVar13 + 0xc);
            *(iVar4 + 0x1c) = *(iVar13 + 0x1c);
            *(iVar4 + 0x24) = uVar14;
            *(iVar4 + 0xc) = uVar12;
            *(iVar4 + 0x14) = uVar15;
        }
        uVar16 = 0;
        if (*(*piVar5 + 0x58) != 0) {
            uVar16 = *(piVar5[2] + 0x1cc) + 1U & 0xffff;
        }
        *(iVar4 + 0x2c) = uVar16;
        *(iVar4 + 0x30) = uVar7;
        *(iVar4 + 0x32) = uVar10;
        perf_trace_run_bpf_submit(iVar4,0x34,uStack_264,iVar11,1,iStack_260,piVar1,0);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_258) {
        __stack_chk_fail();
        uVar12 = tpidr_el2;
        *extraout_x18_04 = 0x8006b84;
        bpf_trace_run2(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.perf_trace_nvme_complete_rq @ 0x08006538 (size 416) =====

//WARNING: Removing unreachable block (ram,0x0800686c)
//WARNING: Removing unreachable block (ram,0x08006ab8)

void sym.perf_trace_nvme_complete_rq(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong in_tmp_ldXn;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t *piVar4;
    ushort uVar5;
    ushort uVar6;
    uchar *in_x2;
    uchar *puVar8;
    ushort in_w3;
    ushort uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    ulong uVar12;
    int64_t iVar13;
    ulong uVar14;
    ulong uVar15;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint32_t uVar16;
    uint64_t unaff_x30;
    uchar auVar17 [16];
    uchar auVar18 [16];
    uchar auStack_200 [12];
    uint uStack_1f4;
    int64_t iStack_1f0;
    int64_t iStack_1e8;
    uchar *puStack_1e0;
    code *pcStack_1d8;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    int64_t iStack_168;
    uchar *puStack_160;
    ulong uStack_158;
    code *pcStack_150;
    int64_t iStack_140;
    int64_t *piStack_138;
    uint64_t uStack_130;
    int64_t iStack_128;
    uchar auStack_120 [12];
    uint uStack_114;
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
    uint uVar7;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    iStack_40 = 0;
    uStack_44 = 0;
    iVar2 = tpidr_el1;
    piVar1 = iVar2 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (*piVar1 != 0)) {
        in_x2 = &stack0xffffffffffffffbc;
        iVar2 = perf_trace_buf_alloc(0x4c,&stack0xffffffffffffffc0);
        uVar3 = _trace_event_reg;
        if (iVar2 != 0) {
            *(iStack_40 + 0xe8) = &stack0xffffffffffffffd0;
            uVar10 = -1L << (uVar3 & 0x3f);
            uVar3 = (~uVar10 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar3 = uVar10 | unaff_x30;
            }
            *(iStack_40 + 0xf8) = &stack0xffffffffffffffb0;
            *(iStack_40 + 0x100) = uVar3;
            *(iStack_40 + 0x108) = 5;
            *(iVar2 + 0x28) = *(*(arg2 + 0x148) + 0x68);
            uVar16 = 0;
            if (*(*arg2 + 0x58) != 0) {
                uVar16 = *(*(arg2 + 0x10) + 0x1cc) + 1U & 0xffff;
            }
            *(iVar2 + 0x2c) = uVar16;
            *(iVar2 + 0x30) = *(*(arg2 + 0x130) + 2);
            *(iVar2 + 0x38) = *(arg2 + 0x138);
            *(iVar2 + 0x40) = *(arg2 + 0x141);
            *(iVar2 + 0x41) = *(arg2 + 0x142);
            *(iVar2 + 0x42) = *(arg2 + 0x144);
            iVar11 = *(arg2 + 0xa0);
            if (iVar11 == 0) {
                *(iVar2 + 0x18) = 0;
                *(iVar2 + 0x20) = 0;
                *(iVar2 + 8) = 0;
                *(iVar2 + 0x10) = 0;
            }
            else {
                uVar14 = *(iVar11 + 0x24);
                uVar15 = *(iVar11 + 0x14);
                uVar12 = *(iVar11 + 0xc);
                *(iVar2 + 0x18) = *(iVar11 + 0x1c);
                *(iVar2 + 0x20) = uVar14;
                *(iVar2 + 8) = uVar12;
                *(iVar2 + 0x10) = uVar15;
            }
            in_x2 = uStack_44;
            perf_trace_run_bpf_submit(iVar2,0x4c,in_x2,arg1,1,iStack_40,piVar1,0);
            in_w3 = arg1;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return;
    }
    auVar17 = __stack_chk_fail();
    iVar11 = auVar17._0_8_;
    uVar12 = tpidr_el2;
    *extraout_x18 = 0x80066cc;
    uStack_78 = 0x80066cc;
    iVar2 = sp_el0;
    iStack_88 = *(iVar2 + 0x5e0);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uVar16 = *(iVar11 + 0x48);
    puStack_80 = &stack0xffffffffffffffd0;
    if ((uVar16 >> 8 & 1) == 0) {
        puVar8 = in_x2;
        if ((uVar16 >> 7 & 1) != 0) {
            puVar8 = NULL;
            in_w3 = 0;
            event_triggers_call(iVar11,0);
        }
        if (((uVar16 >> 6 & 1) == 0) &&
           (((uVar16 >> 9 & 1) == 0 || (uVar3 = trace_event_ignore_this_pid(iVar11), (uVar3 & 1) == 0))))
        goto code_r0x0800674c;
    }
    else {
code_r0x0800674c:
        puVar8 = 0x10;
        iVar2 = trace_event_buffer_reserve(&stack0xffffffffffffff48,iVar11);
        if (iVar2 != 0) {
            *(iVar2 + 8) = *(auVar17._8_8_ + 0x68);
            *(iVar2 + 0xc) = in_x2;
            trace_event_buffer_commit(&stack0xffffffffffffff48);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_88) {
        return;
    }
    auVar17 = __stack_chk_fail();
    iVar11 = auVar17._0_8_;
    *extraout_x18_00 = sym.perf_trace_nvme_async_event;
    pcStack_f8 = sym.perf_trace_nvme_async_event;
    iVar2 = sp_el0;
    iStack_108 = *(iVar2 + 0x5e0);
    uVar3 = puVar8 & 0xffffffff;
    iStack_110 = 0;
    uStack_114 = 0;
    iVar2 = tpidr_el1;
    piVar1 = iVar2 + *(iVar11 + 0x78);
    puStack_100 = &stack0xffffffffffffff80;
    if ((*(iVar11 + 0x80) != 0) || (uVar7 = puVar8, *piVar1 != 0)) {
        uVar7 = SUB84(&stack0xfffffffffffffeec,0);
        iVar2 = perf_trace_buf_alloc(0x14,&stack0xfffffffffffffef0);
        uVar10 = _trace_event_reg;
        if (iVar2 != 0) {
            *(iStack_110 + 0xe8) = &stack0xffffffffffffff00;
            *(iStack_110 + 0xf8) = &stack0xfffffffffffffee0;
            *(iStack_110 + 0x100) = ~(-1L << (uVar10 & 0x3f)) & 0x80067a4;
            *(iStack_110 + 0x108) = 5;
            *(iVar2 + 8) = *(auVar17._8_8_ + 0x68);
            *(iVar2 + 0xc) = puVar8;
            iVar13 = iVar11;
            uVar7 = uStack_114;
            perf_trace_run_bpf_submit(iVar2,0x14,uStack_114,iVar11,1,iStack_110,piVar1,0);
            in_w3 = iVar13;
        }
    }
    uVar5 = uVar7;
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_108) {
        return;
    }
    auVar18 = __stack_chk_fail();
    piVar4 = auVar18._8_8_;
    iVar13 = auVar18._0_8_;
    uVar12 = tpidr_el2;
    *extraout_x18_01 = 0x80068c4;
    uStack_158 = 0x80068c4;
    pcStack_150 = sym.perf_trace_nvme_async_event;
    iVar2 = sp_el0;
    iStack_168 = *(iVar2 + 0x5e0);
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    uVar16 = *(iVar13 + 0x48);
    puStack_160 = &stack0xffffffffffffff00;
    piStack_138 = piVar1;
    uStack_130 = uVar3;
    uVar9 = in_w3;
    if ((uVar16 >> 8 & 1) == 0) {
        uVar6 = uVar5;
        if ((uVar16 >> 7 & 1) != 0) {
            uVar6 = 0;
            uVar9 = 0;
            iStack_140 = auVar17._8_8_;
            iStack_128 = iVar11;
            event_triggers_call(iVar13,0);
            auVar17._8_8_ = iStack_140;
            auVar17._0_8_ = iStack_128;
        }
        iStack_140 = auVar17._8_8_;
        iStack_128 = auVar17._0_8_;
        if ((uVar16 >> 6 & 1) != 0) goto code_r0x080069cc;
        if ((uVar16 >> 9 & 1) != 0) {
            uVar3 = trace_event_ignore_this_pid(iVar13);
            auVar17._8_8_ = iStack_140;
            auVar17._0_8_ = iStack_128;
            if ((uVar3 & 1) != 0) goto code_r0x080069cc;
        }
    }
    iStack_140 = auVar17._8_8_;
    iStack_128 = auVar17._0_8_;
    uVar6 = 0x34;
    iVar2 = trace_event_buffer_reserve(&stack0xfffffffffffffe68,iVar13);
    auVar17._8_8_ = iStack_140;
    auVar17._0_8_ = iStack_128;
    if (iVar2 != 0) {
        *(iVar2 + 8) = *(piVar4[0x29] + 0x68);
        iVar11 = piVar4[0x14];
        if (iVar11 == 0) {
            *(iVar2 + 0x1c) = 0;
            *(iVar2 + 0x24) = 0;
            *(iVar2 + 0xc) = 0;
            *(iVar2 + 0x14) = 0;
        }
        else {
            uVar14 = *(iVar11 + 0x24);
            uVar15 = *(iVar11 + 0x14);
            uVar12 = *(iVar11 + 0xc);
            *(iVar2 + 0x1c) = *(iVar11 + 0x1c);
            *(iVar2 + 0x24) = uVar14;
            *(iVar2 + 0xc) = uVar12;
            *(iVar2 + 0x14) = uVar15;
        }
        uVar16 = 0;
        if (*(*piVar4 + 0x58) != 0) {
            uVar16 = *(piVar4[2] + 0x1cc) + 1U & 0xffff;
        }
        *(iVar2 + 0x2c) = uVar16;
        *(iVar2 + 0x30) = uVar5;
        *(iVar2 + 0x32) = in_w3;
        trace_event_buffer_commit(&stack0xfffffffffffffe68);
        auVar17._8_8_ = iStack_140;
        auVar17._0_8_ = iStack_128;
    }
code_r0x080069cc:
    iStack_140 = auVar17._8_8_;
    iStack_128 = auVar17._0_8_;
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_168) {
        return;
    }
    auVar17 = __stack_chk_fail();
    piVar4 = auVar17._8_8_;
    iVar11 = auVar17._0_8_;
    *extraout_x18_02 = sym.perf_trace_nvme_sq;
    pcStack_1d8 = sym.perf_trace_nvme_sq;
    iVar2 = sp_el0;
    iStack_1e8 = *(iVar2 + 0x5e0);
    iStack_1f0 = 0;
    uStack_1f4 = 0;
    iVar2 = tpidr_el1;
    piVar1 = iVar2 + *(iVar11 + 0x78);
    puStack_1e0 = &stack0xfffffffffffffea0;
    if (((*(iVar11 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar2 = perf_trace_buf_alloc(0x34,&stack0xfffffffffffffe10,&stack0xfffffffffffffe0c),
       uVar3 = _trace_event_reg, iVar2 != 0)) {
        *(iStack_1f0 + 0xe8) = &stack0xfffffffffffffe20;
        *(iStack_1f0 + 0xf8) = &stack0xfffffffffffffe00;
        *(iStack_1f0 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8006a04;
        *(iStack_1f0 + 0x108) = 5;
        *(iVar2 + 8) = *(piVar4[0x29] + 0x68);
        iVar13 = piVar4[0x14];
        if (iVar13 == 0) {
            *(iVar2 + 0x1c) = 0;
            *(iVar2 + 0x24) = 0;
            *(iVar2 + 0xc) = 0;
            *(iVar2 + 0x14) = 0;
        }
        else {
            uVar14 = *(iVar13 + 0x24);
            uVar15 = *(iVar13 + 0x14);
            uVar12 = *(iVar13 + 0xc);
            *(iVar2 + 0x1c) = *(iVar13 + 0x1c);
            *(iVar2 + 0x24) = uVar14;
            *(iVar2 + 0xc) = uVar12;
            *(iVar2 + 0x14) = uVar15;
        }
        uVar16 = 0;
        if (*(*piVar4 + 0x58) != 0) {
            uVar16 = *(piVar4[2] + 0x1cc) + 1U & 0xffff;
        }
        *(iVar2 + 0x2c) = uVar16;
        *(iVar2 + 0x30) = uVar6;
        *(iVar2 + 0x32) = uVar9;
        perf_trace_run_bpf_submit(iVar2,0x34,uStack_1f4,iVar11,1,iStack_1f0,piVar1,0);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_1e8) {
        __stack_chk_fail();
        uVar12 = tpidr_el2;
        *extraout_x18_03 = 0x8006b84;
        bpf_trace_run2(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_nvme_async_event @ 0x080066d8 (size 204) =====

//WARNING: Removing unreachable block (ram,0x0800686c)
//WARNING: Removing unreachable block (ram,0x08006ab8)

void sym.trace_event_raw_event_nvme_async_event(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong in_tmp_ldXn;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ushort uVar6;
    ushort uVar7;
    uint64_t uVar9;
    ushort in_w3;
    ushort uVar10;
    int64_t iVar11;
    ulong uVar12;
    int64_t iVar13;
    ulong uVar14;
    ulong uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint32_t uVar16;
    ulong unaff_x30;
    uchar auVar17 [16];
    uchar auVar18 [16];
    uchar auStack_1b0 [12];
    uint uStack_1a4;
    int64_t iStack_1a0;
    int64_t iStack_198;
    ulong **ppuStack_190;
    code *pcStack_188;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    int64_t iStack_118;
    uchar **ppuStack_110;
    ulong uStack_108;
    code *pcStack_100;
    int64_t iStack_f0;
    int64_t *piStack_e8;
    uint64_t uStack_e0;
    int64_t iStack_d8;
    uchar auStack_d0 [12];
    uint uStack_c4;
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
    uint uVar8;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar16 = *(arg1 + 0x48);
    if ((uVar16 >> 8 & 1) == 0) {
        uVar9 = arg3;
        if ((uVar16 >> 7 & 1) != 0) {
            uVar9 = 0;
            in_w3 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar16 >> 6 & 1) == 0) &&
           (((uVar16 >> 9 & 1) == 0 || (uVar3 = trace_event_ignore_this_pid(arg1), (uVar3 & 1) == 0))))
        goto code_r0x0800674c;
    }
    else {
code_r0x0800674c:
        uVar9 = 0x10;
        iVar4 = trace_event_buffer_reserve(&uStack_68,arg1);
        if (iVar4 != 0) {
            *(iVar4 + 8) = *(arg2 + 0x68);
            *(iVar4 + 0xc) = arg3;
            trace_event_buffer_commit(&uStack_68);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    auVar17 = __stack_chk_fail();
    iVar11 = auVar17._0_8_;
    *extraout_x18 = sym.perf_trace_nvme_async_event;
    pcStack_a8 = sym.perf_trace_nvme_async_event;
    iVar4 = sp_el0;
    iStack_b8 = *(iVar4 + 0x5e0);
    uVar3 = uVar9 & 0xffffffff;
    iStack_c0 = 0;
    uStack_c4 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar11 + 0x78);
    puStack_b0 = &stack0xffffffffffffffd0;
    if ((*(iVar11 + 0x80) != 0) || (uVar8 = uVar9, *piVar1 != 0)) {
        uVar8 = SUB84(&uStack_c4,0);
        iVar4 = perf_trace_buf_alloc(0x14,&iStack_c0);
        uVar2 = _trace_event_reg;
        if (iVar4 != 0) {
            *(iStack_c0 + 0xe8) = &puStack_b0;
            *(iStack_c0 + 0xf8) = auStack_d0;
            *(iStack_c0 + 0x100) = ~(-1L << (uVar2 & 0x3f)) & 0x80067a4;
            *(iStack_c0 + 0x108) = 5;
            *(iVar4 + 8) = *(auVar17._8_8_ + 0x68);
            *(iVar4 + 0xc) = uVar9;
            iVar13 = iVar11;
            uVar8 = uStack_c4;
            perf_trace_run_bpf_submit(iVar4,0x14,uStack_c4,iVar11,1,iStack_c0,piVar1,0);
            in_w3 = iVar13;
        }
    }
    uVar6 = uVar8;
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar18 = __stack_chk_fail();
    piVar5 = auVar18._8_8_;
    iVar13 = auVar18._0_8_;
    uVar12 = tpidr_el2;
    *extraout_x18_00 = 0x80068c4;
    uStack_108 = 0x80068c4;
    pcStack_100 = sym.perf_trace_nvme_async_event;
    iVar4 = sp_el0;
    iStack_118 = *(iVar4 + 0x5e0);
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uVar16 = *(iVar13 + 0x48);
    ppuStack_110 = &puStack_b0;
    piStack_e8 = piVar1;
    uStack_e0 = uVar3;
    uVar10 = in_w3;
    if ((uVar16 >> 8 & 1) == 0) {
        uVar7 = uVar6;
        if ((uVar16 >> 7 & 1) != 0) {
            uVar7 = 0;
            uVar10 = 0;
            iStack_f0 = auVar17._8_8_;
            iStack_d8 = iVar11;
            event_triggers_call(iVar13,0);
            auVar17._8_8_ = iStack_f0;
            auVar17._0_8_ = iStack_d8;
        }
        iStack_f0 = auVar17._8_8_;
        iStack_d8 = auVar17._0_8_;
        if ((uVar16 >> 6 & 1) != 0) goto code_r0x080069cc;
        if ((uVar16 >> 9 & 1) != 0) {
            uVar9 = trace_event_ignore_this_pid(iVar13);
            auVar17._8_8_ = iStack_f0;
            auVar17._0_8_ = iStack_d8;
            if ((uVar9 & 1) != 0) goto code_r0x080069cc;
        }
    }
    iStack_f0 = auVar17._8_8_;
    iStack_d8 = auVar17._0_8_;
    uVar7 = 0x34;
    iVar4 = trace_event_buffer_reserve(&uStack_148,iVar13);
    auVar17._8_8_ = iStack_f0;
    auVar17._0_8_ = iStack_d8;
    if (iVar4 != 0) {
        *(iVar4 + 8) = *(piVar5[0x29] + 0x68);
        iVar11 = piVar5[0x14];
        if (iVar11 == 0) {
            *(iVar4 + 0x1c) = 0;
            *(iVar4 + 0x24) = 0;
            *(iVar4 + 0xc) = 0;
            *(iVar4 + 0x14) = 0;
        }
        else {
            uVar14 = *(iVar11 + 0x24);
            uVar15 = *(iVar11 + 0x14);
            uVar12 = *(iVar11 + 0xc);
            *(iVar4 + 0x1c) = *(iVar11 + 0x1c);
            *(iVar4 + 0x24) = uVar14;
            *(iVar4 + 0xc) = uVar12;
            *(iVar4 + 0x14) = uVar15;
        }
        uVar16 = 0;
        if (*(*piVar5 + 0x58) != 0) {
            uVar16 = *(piVar5[2] + 0x1cc) + 1U & 0xffff;
        }
        *(iVar4 + 0x2c) = uVar16;
        *(iVar4 + 0x30) = uVar6;
        *(iVar4 + 0x32) = in_w3;
        trace_event_buffer_commit(&uStack_148);
        auVar17._8_8_ = iStack_f0;
        auVar17._0_8_ = iStack_d8;
    }
code_r0x080069cc:
    iStack_f0 = auVar17._8_8_;
    iStack_d8 = auVar17._0_8_;
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_118) {
        return;
    }
    auVar17 = __stack_chk_fail();
    piVar5 = auVar17._8_8_;
    iVar11 = auVar17._0_8_;
    *extraout_x18_01 = sym.perf_trace_nvme_sq;
    pcStack_188 = sym.perf_trace_nvme_sq;
    iVar4 = sp_el0;
    iStack_198 = *(iVar4 + 0x5e0);
    iStack_1a0 = 0;
    uStack_1a4 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar11 + 0x78);
    ppuStack_190 = &ppuStack_110;
    if (((*(iVar11 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar4 = perf_trace_buf_alloc(0x34,&iStack_1a0,&uStack_1a4), uVar9 = _trace_event_reg, iVar4 != 0)) {
        *(iStack_1a0 + 0xe8) = &ppuStack_190;
        *(iStack_1a0 + 0xf8) = auStack_1b0;
        *(iStack_1a0 + 0x100) = ~(-1L << (uVar9 & 0x3f)) & 0x8006a04;
        *(iStack_1a0 + 0x108) = 5;
        *(iVar4 + 8) = *(piVar5[0x29] + 0x68);
        iVar13 = piVar5[0x14];
        if (iVar13 == 0) {
            *(iVar4 + 0x1c) = 0;
            *(iVar4 + 0x24) = 0;
            *(iVar4 + 0xc) = 0;
            *(iVar4 + 0x14) = 0;
        }
        else {
            uVar14 = *(iVar13 + 0x24);
            uVar15 = *(iVar13 + 0x14);
            uVar12 = *(iVar13 + 0xc);
            *(iVar4 + 0x1c) = *(iVar13 + 0x1c);
            *(iVar4 + 0x24) = uVar14;
            *(iVar4 + 0xc) = uVar12;
            *(iVar4 + 0x14) = uVar15;
        }
        uVar16 = 0;
        if (*(*piVar5 + 0x58) != 0) {
            uVar16 = *(piVar5[2] + 0x1cc) + 1U & 0xffff;
        }
        *(iVar4 + 0x2c) = uVar16;
        *(iVar4 + 0x30) = uVar7;
        *(iVar4 + 0x32) = uVar10;
        perf_trace_run_bpf_submit(iVar4,0x34,uStack_1a4,iVar11,1,iStack_1a0,piVar1,0);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_198) {
        __stack_chk_fail();
        uVar12 = tpidr_el2;
        *extraout_x18_02 = 0x8006b84;
        bpf_trace_run2(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.perf_trace_nvme_async_event @ 0x080067a4 (size 300) =====

//WARNING: Removing unreachable block (ram,0x08006ab8)

void sym.perf_trace_nvme_async_event(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong in_tmp_ldXn;
    int64_t iVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    ushort uVar5;
    ushort uVar6;
    ushort in_w3;
    ushort uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong uVar11;
    int64_t iVar12;
    ulong uVar13;
    ulong uVar14;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint32_t uVar15;
    uint64_t unaff_x30;
    uchar auVar16 [16];
    uchar auStack_140 [12];
    uint uStack_134;
    int64_t iStack_130;
    int64_t iStack_128;
    uchar *puStack_120;
    code *pcStack_118;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    ulong uStack_98;
    uchar auStack_60 [12];
    uint uStack_54;
    int64_t iStack_50;
    int64_t iStack_48;
    uint uVar7;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_48 = *(iVar1 + 0x5e0);
    iStack_50 = 0;
    uStack_54 = 0;
    iVar1 = tpidr_el1;
    piVar3 = iVar1 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (uVar7 = arg3, *piVar3 != 0)) {
        uVar7 = SUB84(&stack0xffffffffffffffac,0);
        iVar1 = perf_trace_buf_alloc(0x14,&stack0xffffffffffffffb0);
        uVar2 = _trace_event_reg;
        if (iVar1 != 0) {
            *(iStack_50 + 0xe8) = &stack0xffffffffffffffc0;
            *(iStack_50 + 0xf8) = &stack0xffffffffffffffa0;
            uVar9 = -1L << (uVar2 & 0x3f);
            uVar2 = (~uVar9 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar2 = uVar9 | unaff_x30;
            }
            *(iStack_50 + 0x100) = uVar2;
            *(iStack_50 + 0x108) = 5;
            *(iVar1 + 8) = *(arg2 + 0x68);
            *(iVar1 + 0xc) = arg3;
            uVar7 = uStack_54;
            perf_trace_run_bpf_submit(iVar1,0x14,uStack_54,arg1,1,iStack_50,piVar3,0);
            in_w3 = arg1;
        }
    }
    uVar5 = uVar7;
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_48) {
        return;
    }
    auVar16 = __stack_chk_fail();
    piVar3 = auVar16._8_8_;
    iVar10 = auVar16._0_8_;
    uVar11 = tpidr_el2;
    *extraout_x18 = 0x80068c4;
    uStack_98 = 0x80068c4;
    iVar1 = sp_el0;
    iStack_a8 = *(iVar1 + 0x5e0);
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uVar15 = *(iVar10 + 0x48);
    puStack_a0 = &stack0xffffffffffffffc0;
    uVar8 = in_w3;
    if ((uVar15 >> 8 & 1) == 0) {
        uVar6 = uVar5;
        if ((uVar15 >> 7 & 1) != 0) {
            uVar6 = 0;
            uVar8 = 0;
            event_triggers_call(iVar10,0);
        }
        if ((uVar15 >> 6 & 1) != 0) goto code_r0x080069cc;
        if ((uVar15 >> 9 & 1) != 0) {
            uVar2 = trace_event_ignore_this_pid(iVar10);
            if ((uVar2 & 1) != 0) goto code_r0x080069cc;
        }
    }
    uVar6 = 0x34;
    iVar1 = trace_event_buffer_reserve(&stack0xffffffffffffff28,iVar10);
    if (iVar1 != 0) {
        *(iVar1 + 8) = *(piVar3[0x29] + 0x68);
        iVar10 = piVar3[0x14];
        if (iVar10 == 0) {
            *(iVar1 + 0x1c) = 0;
            *(iVar1 + 0x24) = 0;
            *(iVar1 + 0xc) = 0;
            *(iVar1 + 0x14) = 0;
        }
        else {
            uVar13 = *(iVar10 + 0x24);
            uVar14 = *(iVar10 + 0x14);
            uVar11 = *(iVar10 + 0xc);
            *(iVar1 + 0x1c) = *(iVar10 + 0x1c);
            *(iVar1 + 0x24) = uVar13;
            *(iVar1 + 0xc) = uVar11;
            *(iVar1 + 0x14) = uVar14;
        }
        uVar15 = 0;
        if (*(*piVar3 + 0x58) != 0) {
            uVar15 = *(piVar3[2] + 0x1cc) + 1U & 0xffff;
        }
        *(iVar1 + 0x2c) = uVar15;
        *(iVar1 + 0x30) = uVar5;
        *(iVar1 + 0x32) = in_w3;
        trace_event_buffer_commit(&stack0xffffffffffffff28);
    }
code_r0x080069cc:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_a8) {
        return;
    }
    auVar16 = __stack_chk_fail();
    piVar4 = auVar16._8_8_;
    iVar10 = auVar16._0_8_;
    *extraout_x18_00 = sym.perf_trace_nvme_sq;
    pcStack_118 = sym.perf_trace_nvme_sq;
    iVar1 = sp_el0;
    iStack_128 = *(iVar1 + 0x5e0);
    iStack_130 = 0;
    uStack_134 = 0;
    iVar1 = tpidr_el1;
    piVar3 = iVar1 + *(iVar10 + 0x78);
    puStack_120 = &stack0xffffffffffffff60;
    if (((*(iVar10 + 0x80) != 0) || (*piVar3 != 0)) &&
       (iVar1 = perf_trace_buf_alloc(0x34,&stack0xfffffffffffffed0,&stack0xfffffffffffffecc),
       uVar2 = _trace_event_reg, iVar1 != 0)) {
        *(iStack_130 + 0xe8) = &stack0xfffffffffffffee0;
        *(iStack_130 + 0xf8) = &stack0xfffffffffffffec0;
        *(iStack_130 + 0x100) = ~(-1L << (uVar2 & 0x3f)) & 0x8006a04;
        *(iStack_130 + 0x108) = 5;
        *(iVar1 + 8) = *(piVar4[0x29] + 0x68);
        iVar12 = piVar4[0x14];
        if (iVar12 == 0) {
            *(iVar1 + 0x1c) = 0;
            *(iVar1 + 0x24) = 0;
            *(iVar1 + 0xc) = 0;
            *(iVar1 + 0x14) = 0;
        }
        else {
            uVar13 = *(iVar12 + 0x24);
            uVar14 = *(iVar12 + 0x14);
            uVar11 = *(iVar12 + 0xc);
            *(iVar1 + 0x1c) = *(iVar12 + 0x1c);
            *(iVar1 + 0x24) = uVar13;
            *(iVar1 + 0xc) = uVar11;
            *(iVar1 + 0x14) = uVar14;
        }
        uVar15 = 0;
        if (*(*piVar4 + 0x58) != 0) {
            uVar15 = *(piVar4[2] + 0x1cc) + 1U & 0xffff;
        }
        *(iVar1 + 0x2c) = uVar15;
        *(iVar1 + 0x30) = uVar6;
        *(iVar1 + 0x32) = uVar8;
        perf_trace_run_bpf_submit(iVar1,0x34,uStack_134,iVar10,1,iStack_130,piVar3,0);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_128) {
        __stack_chk_fail();
        uVar11 = tpidr_el2;
        *extraout_x18_01 = 0x8006b84;
        bpf_trace_run2(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_nvme_sq @ 0x080068d0 (size 308) =====

//WARNING: Removing unreachable block (ram,0x08006ab8)

void sym.trace_event_raw_event_nvme_sq(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    ulong in_tmp_ldXn;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t *piVar4;
    ushort uVar5;
    ushort uVar6;
    ushort uVar7;
    int64_t iVar8;
    ulong uVar9;
    int64_t iVar10;
    ulong uVar11;
    ulong uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
    uchar auStack_e0 [12];
    uint uStack_d4;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    uVar6 = arg4;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar13 = *(arg1 + 0x48);
    uVar7 = uVar6;
    if ((uVar13 >> 8 & 1) == 0) {
        uVar5 = arg3;
        if ((uVar13 >> 7 & 1) != 0) {
            uVar5 = 0;
            uVar7 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar13 >> 6 & 1) != 0) ||
           (((uVar13 >> 9 & 1) != 0 && (uVar2 = trace_event_ignore_this_pid(arg1), (uVar2 & 1) != 0))))
        goto code_r0x080069cc;
    }
    uVar5 = 0x34;
    iVar3 = trace_event_buffer_reserve(&uStack_78,arg1);
    if (iVar3 != 0) {
        *(iVar3 + 8) = *(*(arg2 + 0x148) + 0x68);
        iVar8 = *(arg2 + 0xa0);
        if (iVar8 == 0) {
            *(iVar3 + 0x1c) = 0;
            *(iVar3 + 0x24) = 0;
            *(iVar3 + 0xc) = 0;
            *(iVar3 + 0x14) = 0;
        }
        else {
            uVar11 = *(iVar8 + 0x24);
            uVar12 = *(iVar8 + 0x14);
            uVar9 = *(iVar8 + 0xc);
            *(iVar3 + 0x1c) = *(iVar8 + 0x1c);
            *(iVar3 + 0x24) = uVar11;
            *(iVar3 + 0xc) = uVar9;
            *(iVar3 + 0x14) = uVar12;
        }
        uVar13 = 0;
        if (*(*arg2 + 0x58) != 0) {
            uVar13 = *(*(arg2 + 0x10) + 0x1cc) + 1U & 0xffff;
        }
        *(iVar3 + 0x2c) = uVar13;
        *(iVar3 + 0x30) = arg3;
        *(iVar3 + 0x32) = uVar6;
        trace_event_buffer_commit(&uStack_78);
    }
code_r0x080069cc:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return;
    }
    auVar14 = __stack_chk_fail();
    piVar4 = auVar14._8_8_;
    iVar8 = auVar14._0_8_;
    *extraout_x18 = sym.perf_trace_nvme_sq;
    pcStack_b8 = sym.perf_trace_nvme_sq;
    iVar3 = sp_el0;
    iStack_c8 = *(iVar3 + 0x5e0);
    iStack_d0 = 0;
    uStack_d4 = 0;
    iVar3 = tpidr_el1;
    piVar1 = iVar3 + *(iVar8 + 0x78);
    puStack_c0 = &stack0xffffffffffffffc0;
    if (((*(iVar8 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar3 = perf_trace_buf_alloc(0x34,&iStack_d0,&uStack_d4), uVar2 = _trace_event_reg, iVar3 != 0)) {
        *(iStack_d0 + 0xe8) = &puStack_c0;
        *(iStack_d0 + 0xf8) = auStack_e0;
        *(iStack_d0 + 0x100) = ~(-1L << (uVar2 & 0x3f)) & 0x8006a04;
        *(iStack_d0 + 0x108) = 5;
        *(iVar3 + 8) = *(piVar4[0x29] + 0x68);
        iVar10 = piVar4[0x14];
        if (iVar10 == 0) {
            *(iVar3 + 0x1c) = 0;
            *(iVar3 + 0x24) = 0;
            *(iVar3 + 0xc) = 0;
            *(iVar3 + 0x14) = 0;
        }
        else {
            uVar11 = *(iVar10 + 0x24);
            uVar12 = *(iVar10 + 0x14);
            uVar9 = *(iVar10 + 0xc);
            *(iVar3 + 0x1c) = *(iVar10 + 0x1c);
            *(iVar3 + 0x24) = uVar11;
            *(iVar3 + 0xc) = uVar9;
            *(iVar3 + 0x14) = uVar12;
        }
        uVar13 = 0;
        if (*(*piVar4 + 0x58) != 0) {
            uVar13 = *(piVar4[2] + 0x1cc) + 1U & 0xffff;
        }
        *(iVar3 + 0x2c) = uVar13;
        *(iVar3 + 0x30) = uVar5;
        *(iVar3 + 0x32) = uVar7;
        perf_trace_run_bpf_submit(iVar3,0x34,uStack_d4,iVar8,1,iStack_d0,piVar1,0);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_c8) {
        __stack_chk_fail();
        uVar9 = tpidr_el2;
        *extraout_x18_00 = 0x8006b84;
        bpf_trace_run2(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.perf_trace_nvme_sq @ 0x08006a04 (size 396) =====

void sym.perf_trace_nvme_sq(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong in_tmp_ldXn;
    int64_t iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong uVar7;
    ulong uVar8;
    ulong uVar9;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uchar auStack_60 [12];
    uint uStack_54;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    iStack_50 = 0;
    uStack_54 = 0;
    iVar3 = tpidr_el1;
    piVar1 = iVar3 + *(arg1 + 0x78);
    if (((*(arg1 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar3 = perf_trace_buf_alloc(0x34,&stack0xffffffffffffffb0,&stack0xffffffffffffffac),
       uVar2 = _trace_event_reg, iVar3 != 0)) {
        *(iStack_50 + 0xe8) = &stack0xffffffffffffffc0;
        uVar5 = -1L << (uVar2 & 0x3f);
        uVar2 = (~uVar5 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar2 = uVar5 | unaff_x30;
        }
        *(iStack_50 + 0xf8) = &stack0xffffffffffffffa0;
        *(iStack_50 + 0x100) = uVar2;
        *(iStack_50 + 0x108) = 5;
        *(iVar3 + 8) = *(*(arg2 + 0x148) + 0x68);
        iVar6 = *(arg2 + 0xa0);
        if (iVar6 == 0) {
            *(iVar3 + 0x1c) = 0;
            *(iVar3 + 0x24) = 0;
            *(iVar3 + 0xc) = 0;
            *(iVar3 + 0x14) = 0;
        }
        else {
            uVar8 = *(iVar6 + 0x24);
            uVar9 = *(iVar6 + 0x14);
            uVar7 = *(iVar6 + 0xc);
            *(iVar3 + 0x1c) = *(iVar6 + 0x1c);
            *(iVar3 + 0x24) = uVar8;
            *(iVar3 + 0xc) = uVar7;
            *(iVar3 + 0x14) = uVar9;
        }
        uVar4 = 0;
        if (*(*arg2 + 0x58) != 0) {
            uVar4 = *(*(arg2 + 0x10) + 0x1cc) + 1U & 0xffff;
        }
        *(iVar3 + 0x2c) = uVar4;
        *(iVar3 + 0x30) = arg3;
        *(iVar3 + 0x32) = arg4;
        perf_trace_run_bpf_submit(iVar3,0x34,uStack_54,arg1,1,iStack_50,piVar1,0);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return;
    }
    __stack_chk_fail();
    uVar7 = tpidr_el2;
    *extraout_x18 = 0x8006b84;
    bpf_trace_run2(in_tmp_ldXn);
    return;
}


// ===== sym.__bpf_trace_nvme_setup_cmd @ 0x08006b90 (size 36) =====

void sym.__bpf_trace_nvme_setup_cmd(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run2();
    return;
}


// ===== sym.__bpf_trace_nvme_complete_rq @ 0x08006bb4 (size 36) =====

void sym.__bpf_trace_nvme_complete_rq(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run1();
    return;
}


// ===== sym.__bpf_trace_nvme_async_event @ 0x08006bd8 (size 40) =====

void sym.__bpf_trace_nvme_async_event(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    ulong in_x0;
    ulong in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run2(in_x0,in_x1,arg1 & 0xffffffff);
    return;
}


// ===== sym.__bpf_trace_nvme_sq @ 0x08006c00 (size 44) =====

void sym.__bpf_trace_nvme_sq(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    ulong in_x0;
    ulong in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run3(in_x0,in_x1,arg1 & 0xffff,arg2 & 0xffffffff);
    return;
}


// ===== sym.nvme_queue_scan @ 0x08006c2c (size 72) =====

void sym.nvme_queue_scan(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 4) == 1) && (*(arg1 + 0x70) != 0)) {
        queue_work_on(0x20,_segment.ehdr,arg1 + 0xa30);
    }
    return;
}


// ===== sym.nvme_try_sched_reset @ 0x08006c74 (size 88) =====

uint sym.nvme_try_sched_reset(int64_t arg1)

{
    uint64_t uVar1;
    ulong *in_x18;
    uint uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = 0xfffffff0;
    if (*(arg1 + 4) == 2) {
        uVar1 = queue_work_on(0x20,_segment.ehdr,arg1 + 0x4f0);
        uVar2 = 0;
        if ((uVar1 & 1) == 0) {
            uVar2 = 0xfffffff0;
        }
    }
    return uVar2;
}


// ===== sym.nvme_reset_ctrl @ 0x08006ccc (size 92) =====

uint sym.nvme_reset_ctrl(int64_t arg1)

{
    uint64_t uVar1;
    ulong *in_x18;
    uint uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.nvme_change_ctrl_state(arg1,2);
    uVar2 = 0xfffffff0;
    if ((uVar1 & 1) != 0) {
        uVar1 = queue_work_on(0x20,_segment.ehdr,arg1 + 0x4f0);
        uVar2 = 0;
        if ((uVar1 & 1) == 0) {
            uVar2 = 0xfffffff0;
        }
    }
    return uVar2;
}


// ===== sym.nvme_change_ctrl_state @ 0x08006d28 (size 464) =====

ulong sym.nvme_change_ctrl_state(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t *puVar2;
    uint32_t uVar3;
    int iVar4;
    char cVar5;
    bool bVar6;
    uint32_t uVar7;
    ulong uVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0xc;
    uVar8 = _raw_spin_lock_irqsave(iVar1);
    uVar7 = arg2 - 1;
    if (uVar7 < 6) {
        uVar3 = *(arg1 + 4);
    //switch table (6 cases) at 0x80028d0
        switch(*(uVar7 * 4 + 0x80028d0) + 0x8006d74) {
        case 0x8006d88:
            if ((3 < uVar3) || (uVar3 == 1)) goto code_r0x08006e84;
            break;
        case 0x8006e50:
            if ((uVar3 | 2) != 6) goto code_r0x08006e84;
            break;
        case 0x8006e64:
            if ((uVar3 | 2) != 2) goto code_r0x08006e84;
            break;
        case 0x8006e78:
            if (2 < uVar3 - 1) goto code_r0x08006e84;
            break;
        case 0x8006eb4:
            if (1 < uVar3) goto code_r0x08006e84;
            break;
        case 0x8006ec4:
            if (uVar3 != 4) goto code_r0x08006e84;
        }
        *(arg1 + 4) = arg2;
        __wake_up(arg1 + 0x550,3,0,0);
        _raw_spin_unlock_irqrestore(iVar1,uVar8);
        if (*(arg1 + 4) == 1) {
            if ((uVar3 == 3) && (*(arg1 + 0xc50) != 0)) {
                cancel_delayed_work_sync(arg1 + 0xb18);
                puVar2 = arg1 + 0xc48;
                Hint_Prefetch(puVar2,2,0,1);
                do {
                    cVar5 = '\x01';
                    bVar6 = ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar6) {
                        *puVar2 = *puVar2 & 0xfffffffffffffffe;
                        cVar5 = ExclusiveMonitorsStatus();
                    }
                } while (cVar5 != '\0');
                return 1;
            }
        }
        else {
            if (*(arg1 + 4) != 3) {
                return 1;
            }
            if (uVar3 != 2) {
                return 1;
            }
            if ((*(arg1 + 0xc50) != 0) && (iVar4 = *(*(arg1 + 0xc50) + 0x6c), iVar4 != -1)) {
                queue_delayed_work_on(0x20,_delayed_work_timer_fn,arg1 + 0xb18,iVar4 * 0xfa);
            }
        }
        uVar8 = 1;
    }
    else {
code_r0x08006e84:
        _raw_spin_unlock_irqrestore(iVar1,uVar8);
        uVar8 = 0;
    }
    return uVar8;
}


// ===== sym.nvme_reset_ctrl_sync @ 0x08006ef8 (size 116) =====

uint sym.nvme_reset_ctrl_sync(int64_t arg1)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.nvme_change_ctrl_state(arg1,2);
    if ((uVar1 & 1) != 0) {
        uVar1 = queue_work_on(0x20,_segment.ehdr,arg1 + 0x4f0);
        if ((uVar1 & 1) != 0) {
            flush_work(arg1 + 0x4f0);
            if (*(arg1 + 4) == 1) {
                return 0;
            }
            return 0xffffff9a;
        }
    }
    return 0xfffffff0;
}


// ===== sym.nvme_delete_ctrl @ 0x08006f6c (size 92) =====

uint sym.nvme_delete_ctrl(int64_t arg1)

{
    uint64_t uVar1;
    ulong *in_x18;
    uint uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.nvme_change_ctrl_state(arg1,4);
    uVar2 = 0xfffffff0;
    if ((uVar1 & 1) != 0) {
        uVar1 = queue_work_on(0x20,_segment.ehdr,arg1 + 0x520);
        uVar2 = 0;
        if ((uVar1 & 1) == 0) {
            uVar2 = 0xfffffff0;
        }
    }
    return uVar2;
}


// ===== sym.nvme_complete_rq @ 0x08006fc8 (size 568) =====

void sym.nvme_complete_rq(int64_t arg1)

{
    uint64_t *puVar1;
    uint16_t uVar2;
    char cVar3;
    bool bVar4;
    uchar uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x1e) >> 2 & 1) != 0) {
        if (*(arg1 + 0x68) == *(*(arg1 + 0x148) + 0xc58)) {
            puVar1 = *(arg1 + 0x148) + 0xc60;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = *puVar1 & 0xfffffffffffffffe;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
        }
        else {
            kfree(((*(arg1 + 0x68) & 0x3ffffffffffc0) << 6 | 0xff00000000000000) + *(arg1 + 0x74));
        }
    }
    if (*(*(arg1 + 0x148) + 0x5ec) != 0) {
        **(arg1 + 0x148) = 1;
    }
    uVar2 = *(arg1 + 0x144);
    if ((((uVar2 == 0) || ((*(arg1 + 0x18) & 0x700) != 0)) || ((uVar2 >> 0xe & 1) != 0)) ||
       (obj.nvme_max_retries <= *(arg1 + 0x141))) {
code_r0x0800706c:
        uVar5 = sym.nvme_error_status(uVar2);
        blk_mq_end_request(arg1,uVar5);
    }
    else {
        if ((*(arg1 + 0x18) >> 0x19 & 1) == 0) {
            if ((*(*arg1 + 0x60) >> 1 & 1) != 0) goto code_r0x0800706c;
        }
        else {
            if ((uVar2 & 0x700) == 0x300) {
                return;
            }
            if ((*(*arg1 + 0x60) >> 1 & 1) != 0) {
                return;
            }
        }
        if ((uVar2 >> 0xb & 3) == 0) {
            iVar6 = 0;
        }
        else {
            iVar6 = *(*(arg1 + 0x148) + ((uVar2 >> 0xb & 3) - 1) * 2 + 0x5c8) * 100;
        }
        *(arg1 + 0x141) = *(arg1 + 0x141) + 1;
        blk_mq_requeue_request(arg1,0);
        blk_mq_delay_kick_requeue_list(*arg1,iVar6);
    }
    return;
}


// ===== sym.nvme_cleanup_cmd @ 0x08007200 (size 176) =====

void sym.nvme_cleanup_cmd(int64_t arg1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x1e) >> 2 & 1) != 0) {
        if (*(arg1 + 0x68) == *(*(arg1 + 0x148) + 0xc58)) {
            puVar1 = *(arg1 + 0x148) + 0xc60;
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
        else {
            kfree(((*(arg1 + 0x68) & 0x3ffffffffffc0) << 6 | 0xff00000000000000) + *(arg1 + 0x74));
        }
    }
    return;
}


// ===== sym.nvme_host_path_error @ 0x080072b0 (size 56) =====

ulong sym.nvme_host_path_error(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x144) = 0x370;
    *(arg1 + 0xe4) = 2;
    sym.nvme_complete_rq(arg1);
    return 0;
}


// ===== sym.nvme_cancel_request @ 0x080072e8 (size 76) =====

ulong sym.nvme_cancel_request(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0xe4) != 2) {
        *(arg1 + 0x144) = 0x371;
        *(arg1 + 0x142) = *(arg1 + 0x142) | 1;
        blk_mq_complete_request();
    }
    return 1;
}


// ===== sym.nvme_cancel_tagset @ 0x08007338 (size 76) =====

void sym.nvme_cancel_tagset(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x70) != 0) {
        blk_mq_tagset_busy_iter(*(arg1 + 0x70),sym.nvme_cancel_request.cfi_jt,arg1);
        blk_mq_tagset_wait_completed_request(*(arg1 + 0x70));
    }
    return;
}


// ===== sym.nvme_cancel_admin_tagset @ 0x08007384 (size 76) =====

void sym.nvme_cancel_admin_tagset(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x78) != 0) {
        blk_mq_tagset_busy_iter(*(arg1 + 0x78),sym.nvme_cancel_request.cfi_jt,arg1);
        blk_mq_tagset_wait_completed_request(*(arg1 + 0x78));
    }
    return;
}


// ===== sym.nvme_wait_reset @ 0x080073d0 (size 312) =====

bool sym.nvme_wait_reset(int64_t arg1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    code *pcVar4;
    bool bVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint32_t uVar8;
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
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    uVar6 = sym.nvme_change_ctrl_state(arg1,2);
    if ((uVar6 & 1) == 0) {
        if (*(arg1 + 4) < 4) {
            uStack_38 = 0;
            uStack_30 = 0;
            uStack_48 = 0;
            uStack_40 = 0;
            uStack_50 = 0;
            init_wait_entry(&uStack_50,0);
            while( true ) {
                prepare_to_wait_event(arg1 + 0x550,&uStack_50,2);
                uVar6 = sym.nvme_change_ctrl_state(arg1,2);
                if ((uVar6 & 1) != 0) break;
                if (3 < *(arg1 + 4)) {
                    if ((2 < *(arg1 + 4) - 4) && ((obj.nvme_state_terminal.__already_done & 1) == 0)) {
                        obj.nvme_state_terminal.__already_done = 0x1;
                        __warn_printk("Unhandled ctrl state:%d");
    //WARNING: Does not return
                        pcVar4 = SoftwareBreakpoint(0x800,0x8007500);
                        (*pcVar4)();
                    }
                    break;
                }
                schedule();
            }
            finish_wait(arg1 + 0x550,&uStack_50);
        }
        else if ((2 < *(arg1 + 4) - 4) && ((obj.nvme_state_terminal.__already_done & 1) == 0)) {
            obj.nvme_state_terminal.__already_done = 0x1;
            __warn_printk("Unhandled ctrl state:%d");
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x800,0x800748c);
            (*pcVar4)();
        }
    }
    iVar7 = sp_el0;
    bVar5 = *(arg1 + 4) == 2;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return bVar5;
    }
    iVar7 = __stack_chk_fail(bVar5);
    *extraout_x18 = sym.nvme_tryget_ns_head;
    puVar1 = iVar7 + 0x310;
    uVar6 = *puVar1;
    if (uVar6 == 0) {
        uVar8 = 0;
    }
    else {
        do {
            uVar8 = uVar6;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar6 = uVar2;
                if (uVar2 != uVar8) break;
                cVar3 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar8 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
        } while ((uVar8 != uVar2) && (uVar8 = 0, uVar2 != 0));
    }
    if ((uVar8 + 1 | uVar8) < 0) {
        refcount_warn_saturate(puVar1,0);
    }
    return uVar8 != 0;
}


// ===== sym.nvme_tryget_ns_head @ 0x08007508 (size 196) =====

bool sym.nvme_tryget_ns_head(uint32_t arg1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = arg1 + 0x310;
    uVar6 = *puVar1;
    if (uVar6 == 0) {
        uVar5 = 0;
    }
    else {
        do {
            uVar5 = uVar6;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar6 = uVar2;
                if (uVar2 != uVar5) break;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar5 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
        } while ((uVar5 != uVar2) && (uVar5 = 0, uVar2 != 0));
    }
    if ((uVar5 + 1 | uVar5) < 0) {
        refcount_warn_saturate(puVar1,0);
    }
    return uVar5 != 0;
}


// ===== sym.nvme_put_ns_head @ 0x080075cc (size 192) =====

void sym.nvme_put_ns_head(int64_t arg1)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = arg1 + 0x310;
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
        ida_free(*(arg1 + 0x2c8) + 0x528,*(arg1 + 0x318));
        cleanup_srcu_struct(arg1 + 0x10);
        sym.nvme_put_subsystem(*(arg1 + 0x2c8));
        kfree(arg1);
    }
    else if (iVar2 < 1) {
        refcount_warn_saturate(piVar1,3);
    }
    return;
}


// ===== sym.nvme_free_ns_head @ 0x0800768c (size 88) =====

void sym.nvme_free_ns_head(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ida_free(*(arg1 + -0x48) + 0x528,*(arg1 + 8));
    cleanup_srcu_struct(arg1 + -0x300);
    sym.nvme_put_subsystem(*(arg1 + -0x48));
    kfree(arg1 + -0x310);
    return;
}


// ===== sym.nvme_put_ns @ 0x080076e4 (size 188) =====

void sym.nvme_put_ns(int64_t arg1)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = arg1 + 0x38;
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
        put_disk(*(arg1 + 0x20));
        sym.nvme_put_ns_head(*(arg1 + 0x40));
        put_device(*(*(arg1 + 0x10) + 0x460));
        kfree(arg1);
    }
    else if (iVar2 < 1) {
        refcount_warn_saturate(piVar1,3);
    }
    return;
}


// ===== sym.nvme_free_ns @ 0x080077a0 (size 84) =====

void sym.nvme_free_ns(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    put_disk(*(arg1 + -0x18));
    sym.nvme_put_ns_head(*(arg1 + 8));
    put_device(*(*(arg1 + -0x28) + 0x460));
    kfree(arg1 + -0x38);
    return;
}


// ===== sym.nvme_alloc_request @ 0x080077f4 (size 256) =====

void sym.nvme_alloc_request(ulong noname_0,int64_t arg1)

{
    code *pcVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    ulong uVar5;
    ulong uVar6;
    uint32_t uVar7;
    uint8_t uVar8;
    ulong in_x0;
    int64_t *piVar9;
    uint uVar10;
    ulong *puVar11;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar8 = *arg1;
    if (uVar8 == 0x7f) {
        uVar8 = *(arg1 + 4);
    }
    uVar10 = 0x22;
    if ((uVar8 & 1) != 0) {
        uVar10 = 0x23;
    }
    piVar9 = blk_mq_alloc_request(in_x0,uVar10);
    if (piVar9 < 0xfffffffffffff001) {
        pcVar1 = obj.admin_timeout;
        if (*(*piVar9 + 0x58) != 0) {
            pcVar1 = obj.nvme_io_timeout;
        }
        *(piVar9 + 0xec) = *pcVar1 * 0xfa;
        *(arg1 + 1) = *(arg1 + 1) & 0x3f;
        uVar7 = *(piVar9 + 3);
        *(piVar9 + 3) = uVar7 | 0x400;
        if (*(piVar9[2] + 300) == 2) {
            *(piVar9 + 3) = uVar7 | 0x1000400;
        }
        *(piVar9 + 0x144) = 0;
        *(piVar9 + 0x141) = 0;
        puVar11 = piVar9[0x26];
        *(piVar9 + 0x1c) = *(piVar9 + 0x1c) | 0x80;
        uVar3 = *(arg1 + 0x18);
        uVar2 = *arg1;
        uVar4 = *(arg1 + 8);
        puVar11[2] = *(arg1 + 0x10);
        puVar11[3] = uVar3;
        puVar11[1] = uVar4;
        uVar3 = *(arg1 + 0x30);
        uVar5 = *(arg1 + 0x38);
        uVar4 = *(arg1 + 0x20);
        uVar6 = *(arg1 + 0x28);
        *puVar11 = uVar2;
        puVar11[6] = uVar3;
        puVar11[7] = uVar5;
        puVar11[4] = uVar4;
        puVar11[5] = uVar6;
    }
    return;
}


// ===== sym.nvme_fail_nonready_command @ 0x080078f4 (size 112) =====

ulong sym.nvme_fail_nonready_command(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((*(arg1 + 4) - 5U < 2) || ((*(arg1 + 0xc48) & 1) != 0)) || ((*(arg2 + 0x18) & 0x2000700) != 0)) {
        *(arg2 + 0x144) = 0x370;
        *(arg2 + 0xe4) = 2;
        sym.nvme_complete_rq(arg2);
        uVar1 = 0;
    }
    else {
        uVar1 = 9;
    }
    return uVar1;
}


// ===== sym.__nvme_check_ready @ 0x08007964 (size 128) =====

uint32_t sym.__nvme_check_ready(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    
    uVar1 = arg3;
    if ((*arg2 != *(arg1 + 0x48)) || ((*(arg2 + 0x142) >> 1 & 1) == 0)) {
        if ((*(*(arg1 + 0x40) + 0x10) & 1) == 0) goto code_r0x080079d8;
        if (*(arg1 + 4) != 6) {
            if ((((*(arg1 + 4) == 3) && ((*(arg2 + 0x18) & 0xfe) == 0x22)) && (**(arg2 + 0x130) == '\x7f')) &&
               ((*(arg2 + 0x130))[4] == '\x01')) {
                uVar1 = 1;
            }
            goto code_r0x080079d8;
        }
    }
    uVar1 = 0;
code_r0x080079d8:
    return uVar1 & 1;
}


// ===== sym.nvme_setup_cmd @ 0x080079e4 (size 460) =====

uint sym.nvme_setup_cmd(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    uint uVar2;
    int64_t arg4;
    uint16_t uVar3;
    ulong *in_x18;
    ulong *arg3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg3 = *(arg2 + 0x130);
    iVar4 = *(arg2 + 0x148);
    if ((*(arg2 + 0x1c) >> 7 & 1) == 0) {
        *(arg2 + 0x144) = 0;
        *(arg2 + 0x141) = 0;
        *(arg2 + 0x1c) = *(arg2 + 0x1c) | 0x80;
        arg3[6] = 0;
        arg3[7] = 0;
        arg3[4] = 0;
        arg3[5] = 0;
        arg3[2] = 0;
        arg3[3] = 0;
        *arg3 = 0;
        arg3[1] = 0;
    }
    if (0x23 < *(arg2 + 0x18)) {
code_r0x08007b98:
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x8007ba0);
        (*pcVar1)();
    }
    uVar2 = 0;
    //switch table (35 cases) at 0x8003df8
    switch(*(*(arg2 + 0x18) * 4 + 0x8003df8) + 0x8007a50) {
    case 0x8007a64:
        uVar2 = 1;
        break;
    case 0x8007a70:
        *arg3 = 0;
        uVar2 = 0;
        *(arg3 + 4) = *(*(arg1 + 0x40) + 0x2d0);
        break;
    case 0x8007a8c:
        arg4 = 0x7d;
code_r0x08007ac0:
        uVar2 = sym.nvme_setup_rw(arg1,arg2,arg3,arg4);
        break;
    case 0x8007aa0:
        arg4 = 1;
        goto code_r0x08007ac0;
    case 0x8007ab4:
        arg4 = 2;
        goto code_r0x08007ac0;
    case 0x8007acc:
        if ((*(*(arg1 + 0x10) + 0x610) >> 2 & 1) == 0) {
            *arg3 = 8;
            *(arg3 + 4) = *(*(arg1 + 0x40) + 0x2d0);
            arg3[5] = *(arg2 + 0x30) >> (*(arg1 + 0x48) - 9 & 0x3f);
            *(arg3 + 6) = (*(arg2 + 0x28) >> (*(arg1 + 0x48) & 0x1f)) + -1;
            if ((*(arg1 + 0x54) == '\0') || (*(arg1 + 0x4c) != 8)) {
                uVar2 = 0;
                *(arg3 + 0x32) = 0;
            }
            else {
                uVar2 = 0;
                *(arg3 + 0x32) = 0x2000;
            }
            break;
        }
    case 0x8007b3c:
        goto code_r0x08007b3c;
    case 0x8007b98:
        goto code_r0x08007b98;
    }
code_r0x08007b50:
    uVar3 = *(arg2 + 0x140);
    if ((*(iVar4 + 0x612) >> 1 & 1) == 0) {
        uVar3 = uVar3 + 1;
        *(arg2 + 0x140) = uVar3;
    }
    *(arg3 + 2) = *(arg2 + 0x20) | uVar3 << 0xc;
    return uVar2;
code_r0x08007b3c:
    uVar2 = sym.nvme_setup_discard(arg1,arg2,arg3);
    goto code_r0x08007b50;
}


// ===== sym.nvme_setup_discard @ 0x08007c68 (size 524) =====

uint sym.nvme_setup_discard(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint *puVar1;
    uint64_t *puVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint uVar5;
    char cVar6;
    bool bVar7;
    code *pcVar8;
    uint64_t uVar9;
    int64_t *piVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint64_t uVar13;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar11 = *(arg2 + 0xca);
    if (*(arg2 + 0xca) < 2) {
        uVar11 = 1;
    }
    uVar9 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0x2b20,0x1000);
    if (uVar9 != 0) {
        piVar10 = *(arg2 + 0x38);
joined_r0x08007dbc:
        if (piVar10 != NULL) {
            uVar12 = 0;
            do {
                if ((uVar12 & 0xffff) < uVar11) {
                    uVar3 = *(arg1 + 0x48);
                    puVar1 = uVar9 + uVar12 * 0x10;
                    uVar4 = *(piVar10 + 5);
                    uVar13 = piVar10[4];
                    *puVar1 = 0;
                    puVar1[1] = uVar4 >> (uVar3 & 0x1f);
                    *(puVar1 + 2) = uVar13 >> (uVar3 - 9 & 0x3f);
                }
                piVar10 = *piVar10;
                uVar12 = uVar12 + 1;
            } while (piVar10 != NULL);
            if (uVar11 == (uVar12 & 0xffff)) {
                *arg3 = 9;
                uVar5 = *(*(arg1 + 0x40) + 0x2d0);
                *(arg3 + 0x28) = uVar11 - 1;
                *(arg3 + 0x2c) = 4;
                *(arg3 + 4) = uVar5;
                *(arg2 + 0x70) = 0x1000;
                *(arg2 + 0x74) = uVar9 & 0xfff;
                *(arg2 + 0x68) = (((uVar9 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x200000000;
                *(arg2 + 0x1c) = *(arg2 + 0x1c) | 0x40000;
                return 0;
            }
        }
    //WARNING: Does not return
        pcVar8 = SoftwareBreakpoint(0x800,0x8007dc4);
        (*pcVar8)();
    }
    puVar2 = *(arg1 + 0x10) + 0xc60;
    if ((*puVar2 & 1) == 0) {
        Hint_Prefetch(puVar2,2,0,1);
        do {
            uVar9 = *puVar2;
            cVar6 = '\x01';
            bVar7 = ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
                *puVar2 = uVar9 | 1;
                cVar6 = ExclusiveMonitorsStatus();
            }
        } while (cVar6 != '\0');
        if ((uVar9 & 1) == 0) {
            uVar9 = (*(*(arg1 + 0x10) + 0xc58) & 0x3ffffffffffc0) << 6 | 0xff00000000000000;
            piVar10 = *(arg2 + 0x38);
            goto joined_r0x08007dbc;
        }
    }
    return 9;
}


// ===== sym.nvme_setup_rw @ 0x08007e8c (size 364) =====

ulong sym.nvme_setup_rw(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    code *pcVar4;
    uint32_t uVar5;
    uint16_t uVar6;
    int iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint16_t uVar10;
    
    iVar8 = *(arg1 + 0x10);
    uVar5 = *(arg2 + 0x18);
    *arg3 = arg4;
    *(arg3 + 4) = *(*(arg1 + 0x40) + 0x2d0);
    *(arg3 + 0x28) = *(arg2 + 0x30) >> (*(arg1 + 0x48) - 9 & 0x3f);
    uVar6 = uVar5 >> 3 & 0x4000;
    if ((uVar5 & 0x80100) != 0) {
        uVar6 = uVar6 | 0x8000;
    }
    uVar5 = -(uVar5 >> 0x13 & 1) & 7;
    *(arg3 + 0x30) = (*(arg2 + 0x28) >> (*(arg1 + 0x48) & 0x1f)) + -1;
    if (*(arg2 + 0x18) == '\x01') {
        uVar10 = *(iVar8 + 0x5d4);
        if (uVar10 != 0) {
            if (*(arg2 + 0xe0) < 2) {
                uVar9 = 0;
            }
            else {
                uVar3 = *(arg2 + 0xe0) - 1;
                uVar9 = uVar3;
                if (uVar10 <= uVar3 && uVar3 != uVar10) {
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x800,0x8007ff8);
                    (*pcVar4)();
                }
                uVar6 = uVar6 | 0x10;
                uVar5 = uVar5 | uVar3 * 0x10000;
                if (4 < uVar3) goto code_r0x08007f50;
            }
            iVar8 = *arg2 + uVar9 * 8;
            *(iVar8 + 0x848) = *(iVar8 + 0x848) + (*(arg2 + 0x28) >> 9);
        }
    }
code_r0x08007f50:
    if (*(arg1 + 0x4c) != 0) {
        uVar2 = *(arg1 + 0x54);
        if ((uVar2 == 0) || (*(arg1 + 0x4c) != 8)) {
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x800,0x8007fec);
            (*pcVar4)();
        }
        if (uVar2 - 1 < 2) {
            uVar10 = 0x3600;
            if (arg4 != 0x7d) {
                uVar10 = 0x3400;
            }
            uVar6 = uVar6 | uVar10;
            iVar7 = 0x200;
            if (*arg2 != 0) {
                iVar1 = *(*arg2 + 0x4e0);
                iVar7 = 0x200;
                if (iVar1 != 0) {
                    iVar7 = iVar1;
                }
            }
            *(arg3 + 0x38) = *(arg2 + 0x30) >> (0x16 - LZCOUNT(iVar7) & 0x3f);
        }
        else if (uVar2 == 3) {
            uVar6 = uVar6 | 0x3000;
        }
        else {
            uVar6 = uVar6 | 0x2000;
        }
    }
    *(arg3 + 0x32) = uVar6;
    *(arg3 + 0x34) = uVar5;
    return 0;
}


// ===== sym.__nvme_submit_sync_cmd @ 0x08008004 (size 520) =====

uint64_t sym.__nvme_submit_sync_cmd(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    code *pcVar2;
    ulong uVar3;
    ulong uVar4;
    ulong uVar5;
    ulong uVar6;
    ulong uVar7;
    uint32_t uVar8;
    int64_t *piVar9;
    int in_w4;
    int in_w5;
    int in_w6;
    int in_w7;
    uint8_t uVar10;
    uint uVar11;
    ulong *puVar12;
    ulong *in_x18;
    uint64_t uVar13;
    ulong unaff_x30;
    uint in_stack_00000000;
    
    *in_x18 = unaff_x30;
    uVar10 = *arg2;
    if (in_w6 == -1) {
        if (uVar10 == 0x7f) {
            uVar10 = *(arg2 + 4);
        }
        uVar11 = 0x22;
        if ((uVar10 & 1) != 0) {
            uVar11 = 0x23;
        }
        piVar9 = blk_mq_alloc_request(arg1,uVar11,in_stack_00000000);
    }
    else {
        if (uVar10 == 0x7f) {
            uVar10 = *(arg2 + 4);
        }
        uVar11 = 0x22;
        if ((uVar10 & 1) != 0) {
            uVar11 = 0x23;
        }
        iVar1 = 0;
        if (in_w6 != 0) {
            iVar1 = in_w6 + -1;
        }
        piVar9 = blk_mq_alloc_request_hctx(arg1,uVar11,in_stack_00000000,iVar1);
    }
    if (piVar9 < 0xfffffffffffff001) {
        pcVar2 = obj.admin_timeout;
        if (*(*piVar9 + 0x58) != 0) {
            pcVar2 = obj.nvme_io_timeout;
        }
        *(piVar9 + 0xec) = *pcVar2 * 0xfa;
        *(arg2 + 1) = *(arg2 + 1) & 0x3f;
        uVar8 = *(piVar9 + 3);
        *(piVar9 + 3) = uVar8 | 0x400;
        if (*(piVar9[2] + 300) == 2) {
            *(piVar9 + 3) = uVar8 | 0x1000400;
        }
        *(piVar9 + 0x144) = 0;
        *(piVar9 + 0x141) = 0;
        puVar12 = piVar9[0x26];
        *(piVar9 + 0x1c) = *(piVar9 + 0x1c) | 0x80;
        uVar4 = *(arg2 + 0x18);
        uVar3 = *arg2;
        uVar5 = *(arg2 + 8);
        puVar12[2] = *(arg2 + 0x10);
        puVar12[3] = uVar4;
        puVar12[1] = uVar5;
        uVar4 = *(arg2 + 0x30);
        uVar6 = *(arg2 + 0x38);
        uVar5 = *(arg2 + 0x20);
        uVar7 = *(arg2 + 0x28);
        *puVar12 = uVar3;
        puVar12[6] = uVar4;
        puVar12[7] = uVar6;
        puVar12[4] = uVar5;
        puVar12[5] = uVar7;
    }
    if (0xfffffffffffff000 < piVar9) {
        return piVar9 & 0xffffffff;
    }
    if (in_w5 != 0) {
        *(piVar9 + 0xec) = in_w5;
    }
    if ((arg4 != 0) && (in_w4 != 0)) {
        uVar8 = blk_rq_map_kern(arg1,piVar9,arg4,in_w4,0xcc0);
        uVar13 = uVar8;
        if (uVar8 != 0) goto code_r0x080081d0;
    }
    blk_execute_rq(0,piVar9,in_w7 != 0);
    if ((*(piVar9 + 0x142) & 1) == 0) {
        uVar13 = *(piVar9 + 0x144);
        if (*(piVar9 + 0x144) == 0) {
            uVar13 = blk_status_to_errno();
            uVar13 = uVar13 & 0xffffffff;
        }
        if ((arg3 != 0) && (-1 < uVar13)) {
            *arg3 = piVar9[0x27];
        }
    }
    else {
        uVar13 = 0xfffffffc;
    }
code_r0x080081d0:
    blk_mq_free_request(piVar9);
    return uVar13;
}


// ===== sym.nvme_submit_sync_cmd @ 0x0800820c (size 72) =====

void sym.nvme_submit_sync_cmd(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__nvme_submit_sync_cmd(arg1,in_x1,0,arg2);
    return;
}


// ===== sym.nvme_command_effects @ 0x08008254 (size 172) =====

uint32_t sym.nvme_command_effects(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        uVar4 = 0;
        if (*(arg1 + 0xa18) != 0) {
            uVar4 = *(*(arg1 + 0xa18) + (arg3 & 0xffU) * 4);
        }
        uVar1 = arg3 & 0xff;
        uVar3 = 0x30002;
        if (uVar1 != 0x84) {
            uVar3 = 0;
        }
        uVar2 = 0x30006;
        if (uVar1 != 0x80) {
            uVar2 = uVar3;
        }
        uVar4 = uVar4 | uVar2;
    }
    else {
        iVar5 = *(*(arg2 + 0x40) + 800);
        if (((iVar5 != 0) && (3 < *(iVar5 + (arg3 & 0xffU) * 4 + 0x400))) &&
           ((obj.nvme_command_effects.__print_once & 1) == 0)) {
            obj.nvme_command_effects.__print_once = 0x1;
            _dev_warn(*(arg1 + 0x460),"IO command:%02x has unhandled effects:%08x\n",arg3 & 0xff);
        }
        uVar4 = 0;
    }
    return uVar4;
}


// ===== sym.nvme_execute_passthru_rq @ 0x08008300 (size 732) =====

uint32_t sym.nvme_execute_passthru_rq(int64_t arg1)

{
    uint32_t uVar1;
    uint8_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t arg1_00;
    uint32_t uVar4;
    ulong uVar5;
    uint8_t *puVar6;
    uint32_t uVar7;
    int64_t *piVar8;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar6 = *(arg1 + 0x130);
    arg1_00 = *(arg1 + 0x148);
    iVar3 = *(*arg1 + 0x58);
    if (iVar3 == 0) {
        uVar2 = *puVar6;
        uVar7 = 0;
        if (*(arg1_00 + 0xa18) != 0) {
            uVar7 = *(*(arg1_00 + 0xa18) + uVar2 * 4);
        }
        uVar4 = 0x30002;
        if (uVar2 != 0x84) {
            uVar4 = 0;
        }
        uVar1 = 0x30006;
        if (uVar2 != 0x80) {
            uVar1 = uVar4;
        }
        uVar7 = uVar7 | uVar1;
        if ((uVar7 & 0x30000) != 0) {
            mutex_lock(arg1_00 + 0x10);
            mutex_lock(*(arg1_00 + 0x568) + 0x3b0);
            iVar3 = arg1_00 + 0x90;
            down_read(iVar3);
            piVar8 = arg1_00 + 0x80;
            for (piVar9 = *piVar8; piVar9 != piVar8; piVar9 = *piVar9) {
                blk_freeze_queue_start(piVar9[3]);
            }
            up_read(iVar3);
            down_read(iVar3);
            for (piVar9 = *piVar8; piVar9 != piVar8; piVar9 = *piVar9) {
                blk_mq_freeze_queue_wait(piVar9[3]);
            }
            up_read(iVar3);
        }
        uVar5 = 0;
    }
    else {
        uVar5 = *(iVar3 + 0x20);
        iVar3 = *(*(iVar3 + 0x40) + 800);
        if (((iVar3 != 0) && (3 < *(iVar3 + *puVar6 * 4 + 0x400))) && ((obj.nvme_command_effects.__print_once & 1) == 0)
           ) {
            obj.nvme_command_effects.__print_once = 0x1;
            _dev_warn(*(arg1_00 + 0x460),"IO command:%02x has unhandled effects:%08x\n");
        }
        uVar7 = 0;
    }
    blk_execute_rq(uVar5,arg1,0);
    if ((*(arg1 + 0x142) & 1) == 0) {
        uVar4 = *(arg1 + 0x144);
        if (*(arg1 + 0x144) == 0) {
            uVar4 = blk_status_to_errno();
        }
    }
    else {
        uVar4 = 0xfffffffc;
    }
    if (uVar7 != 0) {
        if ((uVar7 & 0x30000) != 0) {
            down_read(arg1_00 + 0x90);
            for (piVar9 = *(arg1_00 + 0x80); piVar9 != arg1_00 + 0x80; piVar9 = *piVar9) {
                blk_mq_unfreeze_queue(piVar9[3]);
            }
            up_read(arg1_00 + 0x90);
            mutex_unlock(*(arg1_00 + 0x568) + 0x3b0);
            sym.nvme_remove_invalid_namespaces(arg1_00,0xffffffff);
            mutex_unlock(arg1_00 + 0x10);
        }
        if ((uVar7 >> 4 & 1) != 0) {
            sym.nvme_init_ctrl_finish(arg1_00);
        }
        if ((uVar7 & 0xc) != 0) {
            if ((*(arg1_00 + 4) == 1) && (*(arg1_00 + 0x70) != 0)) {
                queue_work_on(0x20,_segment.ehdr,arg1_00 + 0xa30);
            }
            flush_work(arg1_00 + 0xa30);
        }
        if (((*puVar6 == 9) && (uVar4 == 0)) && (puVar6[0x28] == 0xf)) {
            uVar7 = *(puVar6 + 0x2c) + 999;
            _dev_info(*(arg1_00 + 0x460),"keep alive interval updated from %u ms to %u ms\n",
                      *(arg1_00 + 0x604) * 1000 >> 1,(uVar7 / 1000) * 1000 >> 1);
            if (*(arg1_00 + 0x604) != 0) {
                cancel_delayed_work_sync(arg1_00 + 0xa90);
            }
            *(arg1_00 + 0x604) = uVar7 / 1000;
            if (999 < uVar7) {
                queue_delayed_work_on(0x20,_segment.ehdr,arg1_00 + 0xa90,(uVar7 / 1000) * 0xfa >> 1);
            }
        }
    }
    return uVar4;
}


// ===== sym.nvme_stop_keep_alive @ 0x080085dc (size 48) =====

void sym.nvme_stop_keep_alive(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x604) != 0) {
        cancel_delayed_work_sync(arg1 + 0xa90);
    }
    return;
}


// ===== sym.nvme_set_features @ 0x0800860c (size 168) =====

uint64_t sym.nvme_set_features(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int *piVar4;
    uint uVar5;
    int64_t in_x3;
    uint *in_x5;
    uint *puVar6;
    int iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong unaff_x30;
    uchar auVar8 [12];
    uchar auVar9 [16];
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    uint uStack_140;
    uint32_t uStack_13c;
    ulong uStack_138;
    ulong uStack_130;
    int64_t iStack_128;
    uchar **ppuStack_120;
    code *pcStack_118;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    uint uStack_c0;
    uint uStack_bc;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    uint uStack_80;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    ulong *arg3_00;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    puVar6 = NULL;
    uStack_48 = 0;
    uStack_40 = CONCAT44(arg3,arg2);
    arg3_00 = &uStack_70;
    uStack_70 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    uStack_68 = 9;
    uStack_80 = 0;
    uVar3 = sym.__nvme_submit_sync_cmd(*(arg1 + 0x48),&uStack_68,arg3_00,in_x3);
    uVar5 = SUB84(arg3_00,0);
    if ((in_x5 != NULL) && (-1 < uVar3)) {
        *in_x5 = uStack_70;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    auVar8 = __stack_chk_fail();
    *extraout_x18 = sym.nvme_get_features;
    pcStack_98 = sym.nvme_get_features;
    iVar1 = sp_el0;
    iStack_a8 = *(iVar1 + 0x5e0);
    uStack_c8 = 0;
    _uStack_c0 = CONCAT44(uVar5,auVar8._8_4_);
    uStack_f0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e0 = 0;
    uStack_e8 = 10;
    puStack_a0 = &stack0xffffffffffffffe0;
    uVar3 = sym.__nvme_submit_sync_cmd(*(auVar8._0_8_ + 0x48),&uStack_e8,&uStack_f0,in_x3);
    if ((puVar6 != NULL) && (-1 < uVar3)) {
        *puVar6 = uStack_f0;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_a8) {
        auVar9 = __stack_chk_fail();
        piVar4 = auVar9._8_8_;
        *extraout_x18_00 = sym.nvme_set_queue_count;
        pcStack_118 = sym.nvme_set_queue_count;
        iVar1 = sp_el0;
        iStack_128 = *(iVar1 + 0x5e0);
        uStack_170 = 0;
        uStack_138 = 0;
        uStack_130 = 0;
        uStack_148 = 0;
        uStack_158 = 0;
        uStack_150 = 0;
        uStack_160 = 0;
        uStack_168 = 9;
        _uStack_140 = CONCAT44(*piVar4 - 1U | (*piVar4 - 1U) * 0x10000,7);
        ppuStack_120 = &puStack_a0;
        uVar2 = sym.__nvme_submit_sync_cmd(*(auVar9._0_8_ + 0x48),&uStack_168,&uStack_170,0);
        uVar3 = uVar2;
        if (-1 < uVar2) {
            if (uVar2 == 0) {
                iVar7 = *piVar4;
                uVar2 = uStack_170 & 0xffff;
                if (uStack_170 >> 0x10 <= (uStack_170 & 0xffff)) {
                    uVar2 = uStack_170 >> 0x10;
                }
                if (uVar2 + 1 <= iVar7) {
                    iVar7 = uVar2 + 1;
                }
            }
            else {
                _dev_err(*(auVar9._0_8_ + 0x460),"Could not set queue count (%d)\n");
                iVar7 = 0;
            }
            uVar3 = 0;
            *piVar4 = iVar7;
        }
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) != iStack_128) {
            auVar9 = __stack_chk_fail();
            *auVar9._8_8_ = 0x2040;
            auVar9._8_8_[1] = *(*(*(*(auVar9._0_8_ + 0x3f0) + 0x40) + 0x28) + 0x50) >> 0x14;
            return 0;
        }
        return uVar3;
    }
    return uVar3;
}


// ===== sym.nvme_get_features @ 0x080086b4 (size 168) =====

uint64_t sym.nvme_get_features(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int *piVar4;
    int64_t in_x3;
    uint *in_x5;
    int iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar6 [16];
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    uint uStack_c0;
    uint32_t uStack_bc;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = CONCAT44(arg3,arg2);
    uStack_70 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    uStack_68 = 10;
    uVar3 = sym.__nvme_submit_sync_cmd(*(arg1 + 0x48),&uStack_68,&uStack_70,in_x3);
    if ((in_x5 != NULL) && (-1 < uVar3)) {
        *in_x5 = uStack_70;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    auVar6 = __stack_chk_fail();
    piVar4 = auVar6._8_8_;
    *extraout_x18 = sym.nvme_set_queue_count;
    pcStack_98 = sym.nvme_set_queue_count;
    iVar1 = sp_el0;
    iStack_a8 = *(iVar1 + 0x5e0);
    uStack_f0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e0 = 0;
    uStack_e8 = 9;
    _uStack_c0 = CONCAT44(*piVar4 - 1U | (*piVar4 - 1U) * 0x10000,7);
    puStack_a0 = &stack0xffffffffffffffe0;
    uVar2 = sym.__nvme_submit_sync_cmd(*(auVar6._0_8_ + 0x48),&uStack_e8,&uStack_f0,0);
    uVar3 = uVar2;
    if (-1 < uVar2) {
        if (uVar2 == 0) {
            iVar5 = *piVar4;
            uVar2 = uStack_f0 & 0xffff;
            if (uStack_f0 >> 0x10 <= (uStack_f0 & 0xffff)) {
                uVar2 = uStack_f0 >> 0x10;
            }
            if (uVar2 + 1 <= iVar5) {
                iVar5 = uVar2 + 1;
            }
        }
        else {
            _dev_err(*(auVar6._0_8_ + 0x460),"Could not set queue count (%d)\n");
            iVar5 = 0;
        }
        uVar3 = 0;
        *piVar4 = iVar5;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_a8) {
        auVar6 = __stack_chk_fail();
        *auVar6._8_8_ = 0x2040;
        auVar6._8_8_[1] = *(*(*(*(auVar6._0_8_ + 0x3f0) + 0x40) + 0x28) + 0x50) >> 0x14;
        return 0;
    }
    return uVar3;
}


// ===== sym.nvme_set_queue_count @ 0x0800875c (size 264) =====

int sym.nvme_set_queue_count(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    int iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auVar5 [16];
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    uint uStack_40;
    uint32_t uStack_3c;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    uStack_70 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    uStack_68 = 9;
    _uStack_40 = CONCAT44(*arg2 - 1U | (*arg2 - 1U) * 0x10000,7);
    iVar3 = sym.__nvme_submit_sync_cmd(*(arg1 + 0x48),&uStack_68,&uStack_70,0);
    if (-1 < iVar3) {
        if (iVar3 == 0) {
            iVar4 = *arg2;
            uVar1 = uStack_70 & 0xffff;
            if (uStack_70 >> 0x10 <= (uStack_70 & 0xffff)) {
                uVar1 = uStack_70 >> 0x10;
            }
            if (uVar1 + 1 <= iVar4) {
                iVar4 = uVar1 + 1;
            }
        }
        else {
            _dev_err(*(arg1 + 0x460),"Could not set queue count (%d)\n");
            iVar4 = 0;
        }
        iVar3 = 0;
        *arg2 = iVar4;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_28) {
        auVar5 = __stack_chk_fail();
        *auVar5._8_8_ = 0x2040;
        auVar5._8_8_[1] = *(*(*(*(auVar5._0_8_ + 0x3f0) + 0x40) + 0x28) + 0x50) >> 0x14;
        return 0;
    }
    return iVar3;
}


// ===== sym.nvme_getgeo @ 0x08008864 (size 48) =====

ulong sym.nvme_getgeo(int64_t arg1,int64_t arg2)

{
    *arg2 = 0x2040;
    *(arg2 + 2) = *(*(*(*(arg1 + 0x3f0) + 0x40) + 0x28) + 0x50) >> 0x14;
    return 0;
}


// ===== sym.nvme_pr_register @ 0x08008894 (size 208) =====

void sym.nvme_pr_register(int64_t arg1,uint32_t arg2,uint32_t arg3,uint32_t arg4)

{
    int iVar1;
    ulong uVar2;
    uint64_t uVar3;
    uint64_t *arg4_00;
    int64_t *arg4_01;
    int64_t iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    code *pcVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    int64_t aiStack_228 [2];
    uint uStack_218;
    uint uStack_214;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
    uint64_t uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    int64_t iStack_1d8;
    ulong **ppuStack_1d0;
    code *pcStack_1c8;
    uint uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    uint uStack_1a8;
    uint uStack_1a4;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    uint64_t uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    int64_t iStack_168;
    ulong **ppuStack_160;
    code *pcStack_158;
    uint uStack_150;
    int64_t aiStack_148 [2];
    uint uStack_138;
    uint uStack_134;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    uint64_t uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    uchar **ppuStack_f0;
    code *pcStack_e8;
    uint uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    uint uStack_c8;
    uint uStack_c4;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    uint64_t uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uint uStack_70;
    uint64_t uStack_68;
    uint64_t uStack_60;
    uint uStack_58;
    uint uStack_54;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    uint64_t uStack_30;
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    uVar3 = arg3;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_18 = *(iVar4 + 0x5e0);
    if (arg4 < 2) {
        iVar4 = *(*(arg1 + 0x3f0) + 0x58);
        uVar6 = 0xc0000000;
        if (arg2 != 0) {
            uVar6 = 0xc0000002;
        }
        arg4_00 = &uStack_68;
        arg3 = 0;
        uStack_28 = 0;
        uStack_20 = 0;
        uStack_38 = 0;
        uStack_48 = 0;
        uStack_40 = 0;
        uStack_50 = 0;
        uStack_30 = uVar6 & 0xfffffff0 | uVar6 & 7 | (arg4 & 1) << 3;
        _uStack_58 = CONCAT44(*(*(iVar4 + 0x40) + 0x2d0),0xd);
        uStack_70 = 0;
        uStack_68 = arg2;
        uStack_60 = uVar3;
        uVar2 = sym.__nvme_submit_sync_cmd(*(iVar4 + 0x18),&uStack_58,0,arg4_00);
        arg4 = arg4_00;
    }
    else {
        uVar2 = 0xffffffa1;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_18) {
        return;
    }
    auVar8 = __stack_chk_fail(uVar2);
    *extraout_x18 = sym.nvme_pr_reserve;
    pcStack_78 = sym.nvme_pr_reserve;
    iVar4 = sp_el0;
    iStack_88 = *(iVar4 + 0x5e0);
    puStack_80 = &stack0xfffffffffffffff0;
    if (arg4 < 2) {
        uVar6 = (arg3 - 1) * 0x100 + 0x100;
        iVar4 = *(*(auVar8._0_8_ + 0x3f0) + 0x58);
        if (5 < arg3 - 1) {
            uVar6 = 0;
        }
        uStack_d0 = 0;
        arg3 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_a8 = 0;
        uStack_b8 = 0;
        uStack_b0 = 0;
        uStack_c0 = 0;
        uStack_a0 = uVar6 | (arg4 & 1) << 3;
        _uStack_c8 = CONCAT44(*(*(iVar4 + 0x40) + 0x2d0),0x11);
        uStack_e0 = 0;
        uStack_d8 = auVar8._8_8_;
        uVar2 = sym.__nvme_submit_sync_cmd(*(iVar4 + 0x18),&uStack_c8,0,&uStack_d8);
    }
    else {
        uVar2 = 0xffffffa1;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_88) {
        return;
    }
    auVar8 = __stack_chk_fail(uVar2);
    aiStack_148[0] = auVar8._8_8_;
    *extraout_x18_00 = sym.nvme_pr_release;
    pcStack_e8 = sym.nvme_pr_release;
    iVar4 = sp_el0;
    iStack_f8 = *(iVar4 + 0x5e0);
    arg4_01 = aiStack_148;
    uVar3 = 0;
    uVar6 = (arg3 - 1) * 0x100 + 0x100;
    if (5 < arg3 - 1) {
        uVar6 = 0;
    }
    aiStack_148[1] = 0;
    iVar4 = *(*(auVar8._0_8_ + 0x3f0) + 0x58);
    uVar2 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_130 = 0;
    uStack_110 = uVar6 | (aiStack_148[0] == 0) << 3;
    _uStack_138 = CONCAT44(*(*(iVar4 + 0x40) + 0x2d0),0x15);
    uStack_150 = 0;
    ppuStack_f0 = &puStack_80;
    sym.__nvme_submit_sync_cmd(*(iVar4 + 0x18),&uStack_138,0,arg4_01);
    iVar1 = arg4_01;
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_f8) {
        return;
    }
    auVar8 = __stack_chk_fail();
    uStack_1b8 = auVar8._8_8_;
    *extraout_x18_01 = sym.nvme_pr_preempt;
    pcStack_158 = sym.nvme_pr_preempt;
    iVar4 = sp_el0;
    iStack_168 = *(iVar4 + 0x5e0);
    uVar6 = (iVar1 - 1U) * 0x100 + 0x100;
    if (5 < iVar1 - 1U) {
        uVar6 = 0;
    }
    uVar5 = 1;
    if ((uVar3 & 1) != 0) {
        uVar5 = 2;
    }
    iVar4 = *(*(auVar8._0_8_ + 0x3f0) + 0x58);
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_1a0 = 0;
    uStack_180 = uVar6 | uVar5;
    _uStack_1a8 = CONCAT44(*(*(iVar4 + 0x40) + 0x2d0),0x11);
    uStack_1c0 = 0;
    uStack_1b0 = uVar2;
    ppuStack_160 = &ppuStack_f0;
    sym.__nvme_submit_sync_cmd(*(iVar4 + 0x18),&uStack_1a8,0,&uStack_1b8);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_168) {
        return;
    }
    auVar8 = __stack_chk_fail();
    aiStack_228[0] = auVar8._8_8_;
    *extraout_x18_02 = sym.nvme_pr_clear;
    pcStack_1c8 = sym.nvme_pr_clear;
    iVar4 = sp_el0;
    iStack_1d8 = *(iVar4 + 0x5e0);
    uVar6 = 9;
    if (aiStack_228[0] != 0) {
        uVar6 = 1;
    }
    uStack_210 = 0;
    aiStack_228[1] = 0;
    iVar4 = *(*(auVar8._0_8_ + 0x3f0) + 0x58);
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1f8 = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_1f0 = uVar6;
    _uStack_218 = CONCAT44(*(*(iVar4 + 0x40) + 0x2d0),0x15);
    ppuStack_1d0 = &ppuStack_160;
    sym.__nvme_submit_sync_cmd(*(iVar4 + 0x18),&uStack_218,0,aiStack_228);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_1d8) {
        return;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18_03 = sym.nvme_disable_ctrl;
    *(iVar4 + 0x598) = *(iVar4 + 0x598) & 0xffff3ffe;
    pcVar7 = *(*(iVar4 + 0x40) + 0x20);
    __cfi_slowpath_diag(0x5fd0dd7266111d21,pcVar7,0x8002710);
    iVar1 = (*pcVar7)(iVar4,0x14,*(iVar4 + 0x598));
    if (iVar1 == 0) {
        if ((*(iVar4 + 0x610) >> 3 & 1) != 0) {
            msleep(0x8fc);
        }
        sym.nvme_wait_ready(iVar4,*(iVar4 + 0x5a8),0);
    }
    return;
}


// ===== sym.nvme_pr_reserve @ 0x08008964 (size 208) =====

void sym.nvme_pr_reserve(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    int iVar1;
    ulong uVar2;
    int64_t *arg4_00;
    uint64_t uVar3;
    int64_t iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    code *pcVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    int64_t aiStack_1b8 [2];
    uint uStack_1a8;
    uint uStack_1a4;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    uint64_t uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    int64_t iStack_168;
    ulong **ppuStack_160;
    code *pcStack_158;
    uint uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    uint uStack_138;
    uint uStack_134;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    uint64_t uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    uchar **ppuStack_f0;
    code *pcStack_e8;
    uint uStack_e0;
    int64_t aiStack_d8 [2];
    uint uStack_c8;
    uint uStack_c4;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    uint64_t uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uint uStack_70;
    int64_t aiStack_68 [2];
    uint uStack_58;
    uint uStack_54;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    uint64_t uStack_30;
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    iVar1 = arg3;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_18 = *(iVar4 + 0x5e0);
    if (arg4 < 2) {
        uVar6 = (iVar1 - 1U) * 0x100 + 0x100;
        iVar4 = *(*(arg1 + 0x3f0) + 0x58);
        if (5 < iVar1 - 1U) {
            uVar6 = 0;
        }
        aiStack_68[1] = 0;
        iVar1 = 0;
        uStack_28 = 0;
        uStack_20 = 0;
        uStack_38 = 0;
        uStack_48 = 0;
        uStack_40 = 0;
        uStack_50 = 0;
        uStack_30 = uVar6 | (arg4 & 1) << 3;
        _uStack_58 = CONCAT44(*(*(iVar4 + 0x40) + 0x2d0),0x11);
        uStack_70 = 0;
        aiStack_68[0] = arg2;
        uVar2 = sym.__nvme_submit_sync_cmd(*(iVar4 + 0x18),&uStack_58,0,aiStack_68);
    }
    else {
        uVar2 = 0xffffffa1;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_18) {
        return;
    }
    auVar8 = __stack_chk_fail(uVar2);
    aiStack_d8[0] = auVar8._8_8_;
    *extraout_x18 = sym.nvme_pr_release;
    pcStack_78 = sym.nvme_pr_release;
    iVar4 = sp_el0;
    iStack_88 = *(iVar4 + 0x5e0);
    arg4_00 = aiStack_d8;
    uVar3 = 0;
    uVar6 = (iVar1 - 1U) * 0x100 + 0x100;
    if (5 < iVar1 - 1U) {
        uVar6 = 0;
    }
    aiStack_d8[1] = 0;
    iVar4 = *(*(auVar8._0_8_ + 0x3f0) + 0x58);
    uVar2 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c0 = 0;
    uStack_a0 = uVar6 | (aiStack_d8[0] == 0) << 3;
    _uStack_c8 = CONCAT44(*(*(iVar4 + 0x40) + 0x2d0),0x15);
    uStack_e0 = 0;
    puStack_80 = &stack0xfffffffffffffff0;
    sym.__nvme_submit_sync_cmd(*(iVar4 + 0x18),&uStack_c8,0,arg4_00);
    iVar1 = arg4_00;
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_88) {
        return;
    }
    auVar8 = __stack_chk_fail();
    uStack_148 = auVar8._8_8_;
    *extraout_x18_00 = sym.nvme_pr_preempt;
    pcStack_e8 = sym.nvme_pr_preempt;
    iVar4 = sp_el0;
    iStack_f8 = *(iVar4 + 0x5e0);
    uVar6 = (iVar1 - 1U) * 0x100 + 0x100;
    if (5 < iVar1 - 1U) {
        uVar6 = 0;
    }
    uVar5 = 1;
    if ((uVar3 & 1) != 0) {
        uVar5 = 2;
    }
    iVar4 = *(*(auVar8._0_8_ + 0x3f0) + 0x58);
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_130 = 0;
    uStack_110 = uVar6 | uVar5;
    _uStack_138 = CONCAT44(*(*(iVar4 + 0x40) + 0x2d0),0x11);
    uStack_150 = 0;
    uStack_140 = uVar2;
    ppuStack_f0 = &puStack_80;
    sym.__nvme_submit_sync_cmd(*(iVar4 + 0x18),&uStack_138,0,&uStack_148);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_f8) {
        return;
    }
    auVar8 = __stack_chk_fail();
    aiStack_1b8[0] = auVar8._8_8_;
    *extraout_x18_01 = sym.nvme_pr_clear;
    pcStack_158 = sym.nvme_pr_clear;
    iVar4 = sp_el0;
    iStack_168 = *(iVar4 + 0x5e0);
    uVar6 = 9;
    if (aiStack_1b8[0] != 0) {
        uVar6 = 1;
    }
    uStack_1a0 = 0;
    aiStack_1b8[1] = 0;
    iVar4 = *(*(auVar8._0_8_ + 0x3f0) + 0x58);
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_180 = uVar6;
    _uStack_1a8 = CONCAT44(*(*(iVar4 + 0x40) + 0x2d0),0x15);
    ppuStack_160 = &ppuStack_f0;
    sym.__nvme_submit_sync_cmd(*(iVar4 + 0x18),&uStack_1a8,0,aiStack_1b8);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_168) {
        return;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18_02 = sym.nvme_disable_ctrl;
    *(iVar4 + 0x598) = *(iVar4 + 0x598) & 0xffff3ffe;
    pcVar7 = *(*(iVar4 + 0x40) + 0x20);
    __cfi_slowpath_diag(0x5fd0dd7266111d21,pcVar7,0x8002710);
    iVar1 = (*pcVar7)(iVar4,0x14,*(iVar4 + 0x598));
    if (iVar1 == 0) {
        if ((*(iVar4 + 0x610) >> 3 & 1) != 0) {
            msleep(0x8fc);
        }
        sym.nvme_wait_ready(iVar4,*(iVar4 + 0x5a8),0);
    }
    return;
}


// ===== sym.nvme_pr_release @ 0x08008a34 (size 200) =====

void sym.nvme_pr_release(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int iVar1;
    ulong uVar2;
    uint64_t *arg4;
    uint64_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    code *pcVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    int64_t aiStack_148 [2];
    uint uStack_138;
    uint uStack_134;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    uint64_t uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    uchar **ppuStack_f0;
    code *pcStack_e8;
    uint uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    uint uStack_c8;
    uint uStack_c4;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    uint64_t uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uint uStack_70;
    uint64_t auStack_68 [2];
    uint uStack_58;
    uint uStack_54;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    uint64_t uStack_30;
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    auStack_68[0] = arg2;
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_18 = *(iVar6 + 0x5e0);
    arg4 = auStack_68;
    uVar3 = 0;
    uVar4 = arg3 - 1;
    uVar5 = uVar4 * 0x100 + 0x100;
    if (5 < uVar4) {
        uVar5 = 0;
    }
    auStack_68[1] = 0;
    iVar6 = *(*(arg1 + 0x3f0) + 0x58);
    uVar2 = 0;
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_38 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_30 = uVar5 | (auStack_68[0] == 0) << 3;
    _uStack_58 = CONCAT44(*(*(iVar6 + 0x40) + 0x2d0),0x15);
    uStack_70 = 0;
    sym.__nvme_submit_sync_cmd(*(iVar6 + 0x18),&uStack_58,0,arg4);
    iVar1 = arg4;
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_18) {
        return;
    }
    auVar8 = __stack_chk_fail();
    uStack_d8 = auVar8._8_8_;
    *extraout_x18 = sym.nvme_pr_preempt;
    pcStack_78 = sym.nvme_pr_preempt;
    iVar6 = sp_el0;
    iStack_88 = *(iVar6 + 0x5e0);
    uVar5 = (iVar1 - 1U) * 0x100 + 0x100;
    if (5 < iVar1 - 1U) {
        uVar5 = 0;
    }
    uVar4 = 1;
    if ((uVar3 & 1) != 0) {
        uVar4 = 2;
    }
    iVar6 = *(*(auVar8._0_8_ + 0x3f0) + 0x58);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c0 = 0;
    uStack_a0 = uVar5 | uVar4;
    _uStack_c8 = CONCAT44(*(*(iVar6 + 0x40) + 0x2d0),0x11);
    uStack_e0 = 0;
    uStack_d0 = uVar2;
    puStack_80 = &stack0xfffffffffffffff0;
    sym.__nvme_submit_sync_cmd(*(iVar6 + 0x18),&uStack_c8,0,&uStack_d8);
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_88) {
        return;
    }
    auVar8 = __stack_chk_fail();
    aiStack_148[0] = auVar8._8_8_;
    *extraout_x18_00 = sym.nvme_pr_clear;
    pcStack_e8 = sym.nvme_pr_clear;
    iVar6 = sp_el0;
    iStack_f8 = *(iVar6 + 0x5e0);
    uVar5 = 9;
    if (aiStack_148[0] != 0) {
        uVar5 = 1;
    }
    uStack_130 = 0;
    aiStack_148[1] = 0;
    iVar6 = *(*(auVar8._0_8_ + 0x3f0) + 0x58);
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_110 = uVar5;
    _uStack_138 = CONCAT44(*(*(iVar6 + 0x40) + 0x2d0),0x15);
    ppuStack_f0 = &puStack_80;
    sym.__nvme_submit_sync_cmd(*(iVar6 + 0x18),&uStack_138,0,aiStack_148);
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_f8) {
        return;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18_01 = sym.nvme_disable_ctrl;
    *(iVar6 + 0x598) = *(iVar6 + 0x598) & 0xffff3ffe;
    pcVar7 = *(*(iVar6 + 0x40) + 0x20);
    __cfi_slowpath_diag(0x5fd0dd7266111d21,pcVar7,0x8002710);
    iVar1 = (*pcVar7)(iVar6,0x14,*(iVar6 + 0x598));
    if (iVar1 == 0) {
        if ((*(iVar6 + 0x610) >> 3 & 1) != 0) {
            msleep(0x8fc);
        }
        sym.nvme_wait_ready(iVar6,*(iVar6 + 0x5a8),0);
    }
    return;
}


// ===== sym.nvme_pr_preempt @ 0x08008afc (size 204) =====

void sym.nvme_pr_preempt(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint64_t in_x4;
    int64_t iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    int64_t aiStack_d8 [2];
    uint uStack_c8;
    uint uStack_c4;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    uint64_t uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uint uStack_70;
    int64_t iStack_68;
    int64_t iStack_60;
    uint uStack_58;
    uint uStack_54;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    uint64_t uStack_30;
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    uVar3 = arg4 - 1;
    iStack_18 = *(iVar2 + 0x5e0);
    uVar4 = uVar3 * 0x100 + 0x100;
    if (5 < uVar3) {
        uVar4 = 0;
    }
    uVar3 = 1;
    if ((in_x4 & 1) != 0) {
        uVar3 = 2;
    }
    iVar2 = *(*(arg1 + 0x3f0) + 0x58);
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_38 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_30 = uVar4 | uVar3;
    _uStack_58 = CONCAT44(*(*(iVar2 + 0x40) + 0x2d0),0x11);
    uStack_70 = 0;
    iStack_68 = arg2;
    iStack_60 = arg3;
    sym.__nvme_submit_sync_cmd(*(iVar2 + 0x18),&uStack_58,0,&iStack_68);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_18) {
        return;
    }
    auVar6 = __stack_chk_fail();
    aiStack_d8[0] = auVar6._8_8_;
    *extraout_x18 = sym.nvme_pr_clear;
    pcStack_78 = sym.nvme_pr_clear;
    iVar2 = sp_el0;
    iStack_88 = *(iVar2 + 0x5e0);
    uVar4 = 9;
    if (aiStack_d8[0] != 0) {
        uVar4 = 1;
    }
    uStack_c0 = 0;
    aiStack_d8[1] = 0;
    iVar2 = *(*(auVar6._0_8_ + 0x3f0) + 0x58);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a0 = uVar4;
    _uStack_c8 = CONCAT44(*(*(iVar2 + 0x40) + 0x2d0),0x15);
    puStack_80 = &stack0xfffffffffffffff0;
    sym.__nvme_submit_sync_cmd(*(iVar2 + 0x18),&uStack_c8,0,aiStack_d8);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_88) {
        return;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18_00 = sym.nvme_disable_ctrl;
    *(iVar2 + 0x598) = *(iVar2 + 0x598) & 0xffff3ffe;
    pcVar5 = *(*(iVar2 + 0x40) + 0x20);
    __cfi_slowpath_diag(0x5fd0dd7266111d21,pcVar5,0x8002710);
    iVar1 = (*pcVar5)(iVar2,0x14,*(iVar2 + 0x598));
    if (iVar1 == 0) {
        if ((*(iVar2 + 0x610) >> 3 & 1) != 0) {
            msleep(0x8fc);
        }
        sym.nvme_wait_ready(iVar2,*(iVar2 + 0x5a8),0);
    }
    return;
}


// ===== sym.nvme_pr_clear @ 0x08008bc8 (size 180) =====

void sym.nvme_pr_clear(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar4;
    ulong unaff_x30;
    uint64_t auStack_68 [2];
    uint uStack_58;
    uint uStack_54;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    uint64_t uStack_30;
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    auStack_68[0] = arg2;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_18 = *(iVar2 + 0x5e0);
    uVar3 = 9;
    if (auStack_68[0] != 0) {
        uVar3 = 1;
    }
    uStack_50 = 0;
    auStack_68[1] = 0;
    iVar2 = *(*(arg1 + 0x3f0) + 0x58);
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_38 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_30 = uVar3;
    _uStack_58 = CONCAT44(*(*(iVar2 + 0x40) + 0x2d0),0x15);
    sym.__nvme_submit_sync_cmd(*(iVar2 + 0x18),&uStack_58,0,auStack_68);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_18) {
        return;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.nvme_disable_ctrl;
    *(iVar2 + 0x598) = *(iVar2 + 0x598) & 0xffff3ffe;
    pcVar4 = *(*(iVar2 + 0x40) + 0x20);
    __cfi_slowpath_diag(0x5fd0dd7266111d21,pcVar4,0x8002710);
    iVar1 = (*pcVar4)(iVar2,0x14,*(iVar2 + 0x598));
    if (iVar1 == 0) {
        if ((*(iVar2 + 0x610) >> 3 & 1) != 0) {
            msleep(0x8fc);
        }
        sym.nvme_wait_ready(iVar2,*(iVar2 + 0x5a8),0);
    }
    return;
}


// ===== sym.nvme_disable_ctrl @ 0x08008c7c (size 152) =====

void sym.nvme_disable_ctrl(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x598) = *(arg1 + 0x598) & 0xffff3ffe;
    pcVar2 = *(*(arg1 + 0x40) + 0x20);
    __cfi_slowpath_diag(0x5fd0dd7266111d21,pcVar2,0x8002710);
    iVar1 = (*pcVar2)(arg1,0x14,*(arg1 + 0x598));
    if (iVar1 == 0) {
        if ((*(arg1 + 0x610) >> 3 & 1) != 0) {
            msleep(0x8fc);
        }
        sym.nvme_wait_ready(arg1,*(arg1 + 0x5a8),0);
    }
    return;
}


// ===== sym.nvme_wait_ready @ 0x08008d14 (size 356) =====

uint64_t sym.nvme_wait_ready(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint uVar1;
    char *pcVar2;
    uint64_t *puVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar7;
    ulong unaff_x30;
    uint32_t uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_58 = *(iVar6 + 0x5e0);
    uStack_5c = 0;
    puVar3 = sp_el0;
    iVar6 = _trace_event_ignore_this_pid + ((arg2 >> 0x18 & 0xff) * 0xfa + 0xfa >> 1);
    do {
        pcVar7 = *(*(arg1 + 0x40) + 0x18);
        __cfi_slowpath_diag(0x79bc8fe92a26dc5e,pcVar7,0x80027f0);
        uVar5 = (*pcVar7)(arg1,0x1c,&uStack_5c);
        if (uVar5 != 0) goto code_r0x08008e3c;
        if (uStack_5c == 0xffffffff) goto code_r0x08008e38;
        if ((((uStack_5c & 1) == 0 ^ arg3) & 1) != 0) {
            uVar5 = 0;
            goto code_r0x08008e3c;
        }
        usleep_range_state(1000,2000,2);
        if (((*puVar3 & 1) != 0) && ((*(puVar3 + 0x829) & 1) != 0)) {
            uVar5 = 0xfffffffc;
            goto code_r0x08008e3c;
        }
    } while (-1 < iVar6 - _trace_event_ignore_this_pid);
    pcVar2 = "initialisation";
    if ((arg3 & 1U) == 0) {
        pcVar2 = "reset";
    }
    _dev_err(*(arg1 + 0x460),"Device not ready; aborting %s, CSTS=0x%x\n",pcVar2,uStack_5c);
code_r0x08008e38:
    uVar5 = 0xffffffed;
code_r0x08008e3c:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_58) {
        return uVar5;
    }
    iVar6 = __stack_chk_fail(uVar5);
    *extraout_x18 = sym.nvme_enable_ctrl;
    pcVar7 = *(*(iVar6 + 0x40) + 0x28);
    __cfi_slowpath_diag(0x18cb069a6cd6e3b9,pcVar7,0x8002730);
    uVar4 = (*pcVar7)(iVar6,0,iVar6 + 0x5a8);
    if (uVar4 == 0) {
        uVar5 = *(iVar6 + 0x5a8);
        if ((uVar5 >> 0x30 & 0xf) == 0) {
            uVar1 = 0x460001;
            if ((uVar5 & 0x80000000000) != 0) {
                uVar1 = 0x460061;
            }
            *(iVar6 + 0x598) = uVar1;
            pcVar7 = *(*(iVar6 + 0x40) + 0x20);
            __cfi_slowpath_diag(0x5fd0dd7266111d21,pcVar7,0x8002750);
            uVar4 = (*pcVar7)(iVar6,0x14,*(iVar6 + 0x598));
            uVar5 = uVar4;
            if (uVar4 == 0) {
                uVar5 = sym.nvme_wait_ready(iVar6,*(iVar6 + 0x5a8),1);
                uVar5 = uVar5 & 0xffffffff;
            }
        }
        else {
            _dev_err(*(iVar6 + 0x460),"Minimum device page size %u too large for host (%u)\n",
                     0x1000 << (uVar5 >> 0x30 & 0xf),0x1000);
            uVar5 = 0xffffffed;
        }
    }
    else {
        uVar5 = uVar4;
        _dev_err(*(iVar6 + 0x460),"Reading CAP failed (%d)\n",uVar5);
    }
    return uVar5;
}


// ===== sym.nvme_enable_ctrl @ 0x08008e78 (size 304) =====

int sym.nvme_enable_ctrl(int64_t arg1)

{
    uint uVar1;
    int iVar2;
    uint64_t uVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar4 = *(*(arg1 + 0x40) + 0x28);
    __cfi_slowpath_diag(0x18cb069a6cd6e3b9,pcVar4,0x8002730);
    iVar2 = (*pcVar4)(arg1,0,arg1 + 0x5a8);
    if (iVar2 == 0) {
        uVar3 = *(arg1 + 0x5a8);
        if ((uVar3 >> 0x30 & 0xf) == 0) {
            uVar1 = 0x460001;
            if ((uVar3 & 0x80000000000) != 0) {
                uVar1 = 0x460061;
            }
            *(arg1 + 0x598) = uVar1;
            pcVar4 = *(*(arg1 + 0x40) + 0x20);
            __cfi_slowpath_diag(0x5fd0dd7266111d21,pcVar4,0x8002750);
            iVar2 = (*pcVar4)(arg1,0x14,*(arg1 + 0x598));
            if (iVar2 == 0) {
                iVar2 = sym.nvme_wait_ready(arg1,*(arg1 + 0x5a8),1);
            }
        }
        else {
            _dev_err(*(arg1 + 0x460),"Minimum device page size %u too large for host (%u)\n",
                     0x1000 << (uVar3 >> 0x30 & 0xf),0x1000);
            iVar2 = -0x13;
        }
    }
    else {
        _dev_err(*(arg1 + 0x460),"Reading CAP failed (%d)\n",iVar2);
    }
    return iVar2;
}


// ===== sym.nvme_shutdown_ctrl @ 0x08008fa8 (size 372) =====

uint64_t sym.nvme_shutdown_ctrl(int64_t arg1)

{
    uint *puVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    ulong uVar4;
    uint uVar5;
    uint uVar6;
    char cVar7;
    char cVar8;
    int16_t iVar9;
    int16_t iVar10;
    int16_t iVar11;
    uint64_t *puVar12;
    code cVar13;
    ulong *puVar14;
    char cVar15;
    uint32_t uVar16;
    int iVar17;
    uint64_t uVar18;
    int64_t iVar19;
    int16_t *arg4;
    uint *arg1_00;
    int64_t iVar20;
    uint *puVar21;
    uchar *arg4_00;
    int64_t *piVar22;
    uchar uVar23;
    uchar uVar24;
    ulong in_x3;
    uint8_t uVar25;
    ulong in_x4;
    int64_t in_x5;
    uint64_t in_x6;
    ulong uVar26;
    uint32_t uVar27;
    ulong uVar28;
    uint32_t uVar29;
    uint32_t uVar30;
    ulong uVar31;
    ulong uVar32;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar33;
    ulong *puVar34;
    ulong unaff_x30;
    uchar auVar35 [12];
    int64_t iStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    int64_t iStack_118;
    uchar **ppuStack_110;
    code *pcStack_108;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    int64_t iStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar19 = _trace_event_ignore_this_pid;
    iVar20 = sp_el0;
    iStack_48 = *(iVar20 + 0x5e0);
    uStack_4c = 0;
    iVar17 = *(arg1 + 0x600);
    *(arg1 + 0x598) = *(arg1 + 0x598) & 0xffff3fff | 0x4000;
    pcVar33 = *(*(arg1 + 0x40) + 0x20);
    __cfi_slowpath_diag(0x5fd0dd7266111d21,pcVar33,0x8002770);
    uVar23 = *(arg1 + 0x598);
    uVar18 = (*pcVar33)(arg1,0x14);
    uVar25 = in_x4;
    uVar24 = in_x3;
    if (uVar18 == 0) {
        puVar12 = sp_el0;
        do {
            pcVar33 = *(*(arg1 + 0x40) + 0x18);
            __cfi_slowpath_diag(0x79bc8fe92a26dc5e,pcVar33,0x8002790);
            uVar23 = SUB81(&uStack_4c,0);
            uVar18 = (*pcVar33)(arg1,0x1c);
            uVar25 = in_x4;
            uVar24 = in_x3;
            if (uVar18 != 0) goto code_r0x08009034;
            if ((uStack_4c & 0xc) == 8) {
                uVar18 = 0;
                goto code_r0x08009034;
            }
            msleep(100);
            uVar25 = in_x4;
            uVar24 = in_x3;
            if (((*puVar12 & 1) != 0) && ((*(puVar12 + 0x829) & 1) != 0)) {
                uVar18 = 0xfffffffc;
                goto code_r0x08009034;
            }
        } while (-1 < (iVar19 + iVar17 * 0xfa) - _trace_event_ignore_this_pid);
        _dev_err(*(arg1 + 0x460),"Device shutdown incomplete; abort shutdown\n");
        uVar18 = 0xffffffed;
    }
code_r0x08009034:
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_48) {
        return uVar18;
    }
    auVar35 = __stack_chk_fail(uVar18);
    *extraout_x18 = sym.nvme_get_log;
    pcStack_58 = sym.nvme_get_log;
    iVar20 = sp_el0;
    iStack_68 = *(iVar20 + 0x5e0);
    uStack_a0 = 0;
    uStack_88 = 0;
    iVar17 = (in_x6 >> 2) + -1;
    uStack_a8 = CONCAT44(auVar35._8_4_,2);
    uStack_80._0_2_ = CONCAT11(uVar24,uVar23);
    iStack_70 = uVar25 << 0x18;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_80 = CONCAT24(iVar17 >> 0x10,CONCAT22(iVar17,uStack_80));
    puStack_60 = &stack0xffffffffffffffc0;
    uVar18 = sym.__nvme_submit_sync_cmd(*(auVar35._0_8_ + 0x48),&uStack_a8,0,in_x5);
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_68) {
        return uVar18;
    }
    iVar19 = __stack_chk_fail();
    *extraout_x18_00 = sym.nvme_init_ctrl_finish;
    pcStack_108 = sym.nvme_init_ctrl_finish;
    iVar20 = sp_el0;
    iStack_118 = *(iVar20 + 0x5e0);
    pcVar33 = *(*(iVar19 + 0x40) + 0x18);
    ppuStack_110 = &puStack_60;
    __cfi_slowpath_diag(0x79bc8fe92a26dc5e,pcVar33,0x80027b0);
    uVar16 = (*pcVar33)(iVar19,8,iVar19 + 0x5e4);
    if (uVar16 != 0) {
        uVar18 = uVar16;
        _dev_err(*(iVar19 + 0x460),"Reading VS failed (%d)\n",uVar18);
        goto code_r0x08009c84;
    }
    uVar26 = *(iVar19 + 0x5a8);
    uVar2 = uVar26;
    if (*(iVar19 + 0x5d6) <= (uVar26 & 0xffff)) {
        uVar2 = *(iVar19 + 0x5d6);
    }
    *(iVar19 + 0x5d6) = uVar2;
    if (0x100 < *(iVar19 + 0x5e4) >> 8) {
        *(iVar19 + 0x608) = uVar26 >> 0x24 & 1;
    }
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_150 = 0;
    uStack_158 = 6;
    uStack_130 = 1;
    arg4 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0xcc0,0x1000);
    if (arg4 == NULL) {
        iVar17 = -0xc;
code_r0x0800964c:
        _dev_err(*(iVar19 + 0x460),"Identify Controller failed (%d)\n",iVar17);
        uVar18 = 0xfffffffb;
    }
    else {
        iVar17 = sym.__nvme_submit_sync_cmd(*(iVar19 + 0x48),&uStack_158,0,arg4);
        if (iVar17 != 0) {
            kfree(arg4);
            goto code_r0x0800964c;
        }
        if (((*(arg4 + 0x105) >> 1 & 1) == 0) ||
           (uVar16 = sym.nvme_get_effects_log(iVar19,0,iVar19 + 0xa18), -1 < uVar16)) {
            if ((*(*(iVar19 + 0x40) + 0x10) & 1) == 0) {
                *(iVar19 + 0x594) = arg4[0x27];
            }
            if (*(iVar19 + 8) == '\0') {
                arg1_00 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0xdc0,0x538);
                if (arg1_00 == NULL) {
                    uVar18 = 0xfffffff4;
                    goto code_r0x08009610;
                }
                *arg1_00 = 0xffffffff;
                __mutex_init(arg1_00 + 0xec,"&subsys->lock",obj.nvme_init_subsystem.__key);
                arg1_00[0xe6] = 1;
                *(arg1_00 + 0xf8) = arg1_00 + 0xf8;
                *(arg1_00 + 0xfa) = arg1_00 + 0xf8;
                *(arg1_00 + 0xfc) = arg1_00 + 0xfc;
                *(arg1_00 + 0xfe) = arg1_00 + 0xfc;
                if ((*(iVar19 + 0x611) & 1) == 0) {
                    iVar20 = strnlen(arg4 + 0x180,0xdf);
                    if (0xdd < iVar20 - 1U) {
                        if (0x10200 < *(iVar19 + 0x5e4)) {
                            _dev_warn(*(iVar19 + 0x460),"missing or invalid SUBNQN field.\n");
                        }
                        goto code_r0x08009680;
                    }
                    strlcpy(arg1_00 + 0x100,arg4 + 0x180,0xdf);
                }
                else {
code_r0x08009680:
                    uVar16 = snprintf(arg1_00 + 0x100,0xdf,"nqn.2014.08.org.nvmexpress:%04x%04x",*arg4,arg4[1]);
                    if (0xdf < uVar16) goto code_r0x08009e44;
                    uVar26 = *(arg4 + 6);
                    uVar5 = *(arg4 + 10);
                    *(arg1_00 + uVar16 + 0x400) = *(arg4 + 2);
                    *(arg1_00 + uVar16 + 0x408) = uVar26;
                    *(arg1_00 + uVar16 + 0x410) = uVar5;
                    if (0xcb < uVar16) goto code_r0x08009e44;
                    uVar4 = *(arg4 + 0x14);
                    uVar30 = uVar16 + 0x14;
                    uVar26 = *(arg4 + 0x18);
                    uVar28 = *(arg4 + 0x1c);
                    uVar31 = *(arg4 + 0xc);
                    *(arg1_00 + uVar30 + 0x408) = *(arg4 + 0x10);
                    *(arg1_00 + uVar30 + 0x410) = uVar4;
                    *(arg1_00 + uVar30 + 0x418) = uVar26;
                    *(arg1_00 + uVar30 + 0x420) = uVar28;
                    *(arg1_00 + uVar30 + 0x400) = uVar31;
                    if (0xa3 < uVar16) goto code_r0x08009e44;
                    memset(arg1_00 + uVar16 + 0x3c + 0x400,0,0xdf - (uVar16 + 0x3c));
                }
                uVar26 = *(arg4 + 6);
                uVar5 = *(arg4 + 10);
                puVar1 = arg1_00 + 2;
                *(arg1_00 + 0x4df) = *(arg4 + 2);
                *(arg1_00 + 0x4e7) = uVar26;
                uVar31 = *(arg4 + 0x10);
                uVar26 = *(arg4 + 0x14);
                uVar4 = *(arg4 + 0x18);
                *(arg1_00 + 0x4ef) = uVar5;
                uVar28 = *(arg4 + 0x1c);
                uVar32 = *(arg4 + 0xc);
                iVar11 = arg4[0x26];
                *(arg1_00 + 0x503) = uVar26;
                *(arg1_00 + 0x50b) = uVar4;
                iVar9 = *arg4;
                *(arg1_00 + 0x513) = uVar28;
                *(arg1_00 + 0x4f3) = uVar32;
                *(arg1_00 + 0x4fb) = uVar31;
                iVar10 = arg4[0x108];
                *(arg1_00 + 0x149) = iVar9;
                uVar26 = _segment.ehdr;
                uVar5 = *(iVar19 + 0x68);
                *(arg1_00 + 0x523) = iVar11;
                *(arg1_00 + 0x526) = iVar10;
                *(arg1_00 + 0xca) = uVar26;
                *(arg1_00 + 0xce) = sym.nvme_release_subsystem.21529633b7289604a80e82acd8b43a39.cfi_jt;
                *(arg1_00 + 0xcc) = obj.nvme_subsys_attrs_groups;
                dev_set_name(puVar1,"nvme-subsys%d",uVar5);
                device_initialize(puVar1);
                mutex_lock(obj.nvme_subsystems_lock);
                puVar21 = sym.__nvme_find_get_subsystem(arg1_00 + 0x100);
                if (puVar21 == NULL) {
                    uVar16 = device_add(puVar1);
                    if (uVar16 == 0) {
                        puVar34 = arg1_00 + 0xe8;
                        *(arg1_00 + 0x14c) = 0;
                        puVar14 = *0x8002238;
                        *(arg1_00 + 0x14a) = 0x1000000500000000;
                        uVar18 = __list_add_valid(puVar34,puVar14,obj.nvme_subsystems);
                        if ((uVar18 & 1) != 0) {
                            *0x8002238 = puVar34;
                            *(arg1_00 + 0xe8) = obj.nvme_subsystems;
                            *(arg1_00 + 0xea) = puVar14;
                            *puVar14 = puVar34;
                        }
                        goto code_r0x080098bc;
                    }
                    uVar18 = uVar16;
                    _dev_err(*(iVar19 + 0x460),"failed to register subsystem device.\n");
                    put_device(puVar1);
                }
                else {
                    put_device(puVar1);
                    for (puVar34 = *(puVar21 + 0xf8); arg1_00 = puVar21, puVar21 + 0xf8 != puVar34; puVar34 = *puVar34)
                    {
                        if (*(puVar34 + -0x56c) < 4) {
                            if (*(puVar34 + 0x24) == *(iVar19 + 0x594)) {
                                iVar20 = puVar34[-0x22][0xe];
                                if (iVar20 == 0) {
                                    iVar20 = *puVar34[-0x22];
                                }
                                _dev_err(*(iVar19 + 0x460),"Duplicate cntlid %u with %s, rejecting\n",
                                         *(puVar34 + 0x24),iVar20);
                            }
                            else {
                                if (((*(arg4 + 0x26) >> 1 & 1) != 0) ||
                                   ((*(iVar19 + 0xc50) != 0 && (*(*(iVar19 + 0xc50) + 0x48) != '\0'))))
                                goto code_r0x08009800;
                                _dev_err(*(iVar19 + 0x460),"Subsystem does not support multiple controllers\n");
                            }
                            uVar18 = 0xffffffea;
                            goto code_r0x08009e00;
                        }
                        if ((2 < *(puVar34 + -0x56c) - 4) && ((obj.nvme_state_terminal.__already_done & 1) == 0)) {
                            obj.nvme_state_terminal.__already_done = 0x1;
                            __warn_printk("Unhandled ctrl state:%d");
    //WARNING: Does not return
                            pcVar33 = SoftwareBreakpoint(0x800,0x8009860);
                            (*pcVar33)();
                        }
code_r0x08009800:
                    }
code_r0x080098bc:
                    piVar22 = *(iVar19 + 0x460);
                    iVar20 = piVar22[0xe];
                    if (iVar20 == 0) {
                        iVar20 = *piVar22;
                    }
                    uVar16 = sysfs_create_link(arg1_00 + 2,piVar22,iVar20);
                    if (uVar16 == 0) {
                        if (puVar21 == NULL) {
                            *arg1_00 = *(iVar19 + 0x68);
                        }
                        *(iVar19 + 0x568) = arg1_00;
                        iVar20 = iVar19 + 0x570;
                        piVar22 = *(arg1_00 + 0xfa);
                        uVar18 = __list_add_valid(iVar20,piVar22,arg1_00 + 0xf8);
                        if ((uVar18 & 1) != 0) {
                            *(arg1_00 + 0xfa) = iVar20;
                            *(iVar19 + 0x570) = arg1_00 + 0xf8;
                            *(iVar19 + 0x578) = piVar22;
                            *piVar22 = iVar20;
                        }
                        mutex_unlock(obj.nvme_subsystems_lock);
                        iVar20 = 0;
                        do {
                            if (*(obj.core_quirks + iVar20 * 0x20) == *arg4) {
                                if (iVar20 == 1) {
                                    if (*(arg4 + 0x20) == 0x3131313130333232) {
code_r0x08009948:
                                        *(iVar19 + 0x610) = *(iVar19 + 0x610) | *(iVar20 * 0x20 + 0x8004488);
                                    }
                                }
                                else {
                                    uVar26 = *(iVar20 * 0x20 + 0x8004478);
                                    uVar18 = strlen(uVar26);
                                    if (0x28 < uVar18) {
    //WARNING: Does not return
                                        pcVar33 = SoftwareBreakpoint(0x800,0x80099ec);
                                        (*pcVar33)();
                                    }
                                    iVar17 = bcmp(arg4 + 0xc,uVar26,uVar18);
                                    if (iVar17 == 0) {
                                        if (uVar18 < 0x28) {
                                            do {
                                                if (*(arg4 + uVar18 + 0x18) != ' ') goto code_r0x0800995c;
                                                uVar18 = uVar18 + 1;
                                            } while (uVar18 != 0x28);
                                        }
                                        goto code_r0x08009948;
                                    }
                                }
                            }
code_r0x0800995c:
                            iVar20 = iVar20 + 1;
                        } while (iVar20 != 4);
                        goto code_r0x0800931c;
                    }
                    uVar18 = uVar16;
                    _dev_err(*(iVar19 + 0x460),"failed to create sysfs link from subsystem.\n");
code_r0x08009e00:
                    sym.nvme_put_subsystem(arg1_00);
                }
                mutex_unlock(obj.nvme_subsystems_lock);
                goto code_r0x08009610;
            }
code_r0x0800931c:
            cVar13 = obj.force_apst;
            *(*(iVar19 + 0x568) + 0x51b) = *(arg4 + 0x20);
            if ((cVar13 != 0x0) && ((*(iVar19 + 0x610) >> 5 & 1) != 0)) {
                _dev_warn(*(iVar19 + 0x460),
                          "forcibly allowing all power states due to nvme_core.force_apst -- use at your own risk\n");
                *(iVar19 + 0x610) = *(iVar19 + 0x610) & 0xffffffffffffffdf;
            }
            iVar9 = arg4[0x40];
            iVar10 = arg4[0x80];
            *(iVar19 + 0x5ca) = *(arg4 + 0x41);
            iVar11 = arg4[0x87];
            *(iVar19 + 0x5c8) = iVar9;
            uVar25 = *(arg4 + 0x81);
            *(iVar19 + 0x5d0) = iVar10;
            iVar9 = arg4[0x104];
            uVar5 = *(arg4 + 0x2e);
            *(iVar19 + 0x59c) = iVar11;
            uVar6 = *(arg4 + 0x85);
            *(iVar19 + 0x5ce) = iVar9;
            *(iVar19 + 0x5f4) = uVar5;
            *(iVar19 + 0x5f0) = uVar6;
            *(iVar19 + 0x5dc) = uVar25 + 1;
            uVar25 = *(arg4 + 0x4d);
            *(iVar19 + 0x5e0) = *(arg4 + 0x20d);
            if (uVar25 == 0) {
                uVar30 = *(iVar19 + 0x5b0);
                uVar16 = 0xffffffff;
                uVar27 = 0xffffffff;
                uVar3 = uVar30;
joined_r0x08009480:
                uVar29 = uVar27;
                if ((uVar3 != 0) && (uVar29 = uVar30, uVar16 <= uVar30)) {
                    uVar29 = uVar16;
                }
            }
            else {
                uVar27 = uVar25 + (*(iVar19 + 0x5ae) & 0xf) + 3;
                uVar3 = uVar27;
                if (0x1f < uVar27) {
                    uVar3 = 0;
                }
                uVar16 = 1L << (uVar3 & 0x3f);
                uVar30 = *(iVar19 + 0x5b0);
                if (uVar16 >> (uVar3 & 0x1f) != 1 || uVar3 != uVar27) {
                    uVar16 = 0xffffffff;
                }
                uVar29 = uVar16;
                uVar27 = uVar30;
                uVar3 = uVar16;
                if (uVar30 != 0) goto joined_r0x08009480;
            }
            *(iVar19 + 0x5b0) = uVar29;
            sym.nvme_set_queue_limits(iVar19,*(iVar19 + 0x48));
            iVar9 = arg4[0xa0];
            uVar5 = *(arg4 + 0x10e);
            uVar6 = *(arg4 + 0x30);
            *(iVar19 + 0x5e8) = *(arg4 + 0x10c);
            uVar16 = *(arg4 + 0x2c);
            *(iVar19 + 0x5ec) = iVar9;
            *(iVar19 + 0x5d8) = uVar5;
            *(iVar19 + 0x5fc) = uVar6;
            if (uVar16 == 0) {
                *(iVar19 + 0x600) = obj.shutdown_timeout;
            }
            else {
                uVar27 = obj.shutdown_timeout;
                uVar30 = uVar16 / 1000000;
                if (uVar16 / 1000000 <= obj.shutdown_timeout) {
                    uVar30 = uVar27;
                }
                if (0x3b < uVar30) {
                    uVar30 = 0x3c;
                }
                *(iVar19 + 0x600) = uVar30;
                if (uVar30 != uVar27) {
                    _dev_info(*(iVar19 + 0x460),"Shutdown timeout set to %u seconds\n");
                }
            }
            cVar7 = *(arg4 + 0x109);
            cVar8 = *(iVar19 + 0xc20);
            *(iVar19 + 0x5ee) = *(arg4 + 0x107);
            *(iVar19 + 0x5ef) = cVar7;
            if ((*(iVar19 + 0x610) >> 4 & 1) == 0) {
                cVar15 = cVar7 != '\0';
            }
            else {
                cVar15 = false;
                if ((obj.force_apst != 0x0) && (cVar7 != '\0')) {
                    _dev_warn(*(iVar19 + 0x460),
                              "forcibly allowing APST due to nvme_core.force_apst -- use at your own risk\n");
                    cVar15 = true;
                }
            }
            *(iVar19 + 0xc20) = cVar15;
            memcpy(iVar19 + 0x618,arg4 + 0x400,0x400);
            if ((*(*(iVar19 + 0x40) + 0x10) & 1) != 0) {
                iVar9 = arg4[0x27];
                uVar5 = *(arg4 + 0x380);
                *(iVar19 + 0xc3c) = arg4[900];
                uVar6 = *(arg4 + 0x382);
                iVar10 = arg4[0x101];
                *(iVar19 + 0xc34) = uVar5;
                *(iVar19 + 0xc38) = uVar6;
                *(iVar19 + 0xc3e) = iVar10;
                if (*(iVar19 + 0x594) == iVar9) {
                    if (((*(iVar19 + 0xc50) != 0) && (*(*(iVar19 + 0xc50) + 0x48) != '\0')) || (*(iVar19 + 0x5ec) != 0))
                    goto code_r0x080095ec;
                    _dev_err(*(iVar19 + 0x460),"keep-alive support is mandatory for fabrics\n");
                    uVar18 = 0xffffffea;
                }
                else {
                    _dev_err(*(iVar19 + 0x460),"Mismatching cntlid: Connect %u vs Identify %u, rejecting\n");
                    uVar18 = 0xffffffea;
                }
                goto code_r0x08009610;
            }
            uVar5 = *(arg4 + 0xa6);
            iVar9 = arg4[0xa8];
            *(iVar19 + 0xc24) = *(arg4 + 0x88);
            *(iVar19 + 0xc2c) = uVar5;
            *(iVar19 + 0xc30) = iVar9;
code_r0x080095ec:
            if ((*(*(iVar19 + 0x568) + 0x523) >> 3 & 1) == 0) {
                if (cVar15 == false) goto code_r0x08009a08;
code_r0x080095fc:
                if (cVar8 != '\0') goto code_r0x08009a08;
                dev_pm_qos_expose_latency_tolerance(*(iVar19 + 0x460));
            }
            else {
                _dev_warn(*(iVar19 + 0x460),
                          "Please enable CONFIG_NVME_MULTIPATH for full support of multi-port devices.\n");
                cVar15 = *(iVar19 + 0xc20);
                if (cVar15 != '\0') goto code_r0x080095fc;
code_r0x08009a08:
                if ((cVar15 == '\0') && (cVar8 != '\0')) {
                    dev_pm_qos_hide_latency_tolerance(*(iVar19 + 0x460));
                }
            }
            kfree(arg4);
            uVar16 = sym.nvme_configure_apst(iVar19);
            if (uVar16 < 0) {
                uVar18 = uVar16;
            }
            else {
                if ((*(iVar19 + 0x5ce) >> 6 & 1) != 0) {
                    iStack_180 = ktime_get_with_offset(0);
                    uStack_128 = 0;
                    uStack_120 = 0;
                    iStack_180 = iStack_180 / 1000000;
                    uStack_138 = 0;
                    uStack_148 = 0;
                    uStack_140 = 0;
                    uStack_150 = 0;
                    uStack_178 = 0;
                    uStack_158 = 9;
                    uStack_130 = 0xe;
                    uVar16 = sym.__nvme_submit_sync_cmd(*(iVar19 + 0x48),&uStack_158,&uStack_178,&iStack_180);
                    if (uVar16 != 0) {
                        uVar18 = uVar16;
                        if ((obj.nvme_configure_timestamp.__print_once & 1) == 0) {
                            obj.nvme_configure_timestamp.__print_once = 0x1;
                            _dev_warn(*(iVar19 + 0x460),"could not set timestamp (%d)\n",uVar18);
                        }
                        if (uVar16 < 0) goto code_r0x08009c84;
                    }
                }
                if (((*(iVar19 + 0x5d0) >> 5 & 1) == 0) || (obj.streams == 0x0)) {
code_r0x08009be8:
                    iVar9 = *(iVar19 + 0x5c8);
                }
                else {
                    uStack_120 = 0;
                    uStack_138 = 0;
                    uStack_148 = 0;
                    uStack_140 = 0;
                    uStack_150 = 0;
                    uStack_130 = 0x100000000;
                    uStack_158 = 0xffffffff00000019;
                    uStack_128 = 0x101;
                    uVar16 = sym.__nvme_submit_sync_cmd(*(iVar19 + 0x48),&uStack_158,0,0);
                    if (uVar16 != 0) {
code_r0x08009be4:
                        uVar18 = uVar16;
                        if (uVar16 < 0) goto code_r0x08009c84;
                        goto code_r0x08009be8;
                    }
                    uStack_150 = 0;
                    uStack_128 = 0;
                    uStack_120 = 0;
                    uStack_138 = 0;
                    uStack_148 = 0;
                    uStack_140 = 0;
                    uStack_178 = 0;
                    uStack_170 = 0;
                    uStack_168 = 0;
                    uStack_160 = 0;
                    uStack_158 = 0xffffffff0000001a;
                    uStack_130 = 0x10100000007;
                    uVar16 = sym.__nvme_submit_sync_cmd(*(iVar19 + 0x48),&uStack_158,0,&uStack_178);
                    if (uVar16 != 0) {
code_r0x08009b90:
                        uStack_150 = 0;
                        uStack_158 = 0xffffffff00000019;
                        uStack_120 = 0;
                        uStack_138 = 0;
                        uStack_130 = 0x100000000;
                        uStack_128 = 0x100;
                        uStack_148 = 0;
                        uStack_140 = 0;
                        sym.__nvme_submit_sync_cmd(*(iVar19 + 0x48),&uStack_158,0,0);
                        goto code_r0x08009be4;
                    }
                    *(iVar19 + 0x5d2) = uStack_178._2_2_;
                    if (uStack_178._2_2_ < 4) {
                        _dev_info(*(iVar19 + 0x460),"too few streams (%u) available\n");
                        goto code_r0x08009b90;
                    }
                    *(iVar19 + 0x5d4) = 4;
                    _dev_info(*(iVar19 + 0x460),"Using %u streams\n",4);
                    iVar9 = *(iVar19 + 0x5c8);
                }
                if ((iVar9 != 0) &&
                   (arg4_00 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0xdc0,0x200), arg4_00 != NULL)) {
                    uStack_150 = 0;
                    *arg4_00 = 1;
                    uStack_158 = 9;
                    uStack_178 = 0;
                    uStack_128 = 0;
                    uStack_120 = 0;
                    uStack_138 = 0;
                    uStack_130 = 0x16;
                    uStack_148 = 0;
                    uStack_140 = 0;
                    uVar16 = sym.__nvme_submit_sync_cmd(*(iVar19 + 0x48),&uStack_158,&uStack_178,arg4_00);
                    uVar18 = uVar16;
                    kfree(arg4_00);
                    if (uVar16 < 0) goto code_r0x08009c84;
                }
                uVar18 = 0;
                *(iVar19 + 8) = 1;
            }
        }
        else {
            uVar18 = uVar16;
code_r0x08009610:
            kfree(arg4);
        }
    }
code_r0x08009c84:
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_118) {
        return uVar18;
    }
    __stack_chk_fail();
code_r0x08009e44:
    //WARNING: Does not return
    pcVar33 = SoftwareBreakpoint(0x5512,0x8009e48);
    (*pcVar33)();
}


// ===== sym.nvme_get_log @ 0x0800911c (size 184) =====

uint64_t sym.nvme_get_log(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *puVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    ulong uVar4;
    uint uVar5;
    uint uVar6;
    uint8_t uVar7;
    char cVar8;
    char cVar9;
    int16_t iVar10;
    int16_t iVar11;
    int16_t iVar12;
    code cVar13;
    ulong *puVar14;
    char cVar15;
    uint32_t uVar16;
    int iVar17;
    uint64_t uVar18;
    int64_t arg1_00;
    int16_t *arg4_00;
    uint *arg1_01;
    int64_t iVar19;
    uint *puVar20;
    uchar *arg4_01;
    int64_t *piVar21;
    uint8_t in_w4;
    int64_t in_x5;
    uint64_t in_x6;
    ulong uVar22;
    uint32_t uVar23;
    ulong uVar24;
    uint32_t uVar25;
    uint32_t uVar26;
    ulong uVar27;
    ulong uVar28;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar29;
    ulong *puVar30;
    ulong unaff_x30;
    int64_t iStack_130;
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
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar19 = sp_el0;
    iStack_18 = *(iVar19 + 0x5e0);
    uStack_50 = 0;
    uStack_38 = 0;
    iVar17 = (in_x6 >> 2) + -1;
    uStack_58 = CONCAT44(arg2,2);
    uStack_30._0_2_ = CONCAT11(arg4,arg3);
    iStack_20 = in_w4 << 0x18;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_30 = CONCAT24(iVar17 >> 0x10,CONCAT22(iVar17,uStack_30));
    uVar18 = sym.__nvme_submit_sync_cmd(*(arg1 + 0x48),&uStack_58,0,in_x5);
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_18) {
        return uVar18;
    }
    arg1_00 = __stack_chk_fail();
    *extraout_x18 = sym.nvme_init_ctrl_finish;
    pcStack_b8 = sym.nvme_init_ctrl_finish;
    iVar19 = sp_el0;
    iStack_c8 = *(iVar19 + 0x5e0);
    pcVar29 = *(*(arg1_00 + 0x40) + 0x18);
    puStack_c0 = &stack0xfffffffffffffff0;
    __cfi_slowpath_diag(0x79bc8fe92a26dc5e,pcVar29,0x80027b0);
    uVar16 = (*pcVar29)(arg1_00,8,arg1_00 + 0x5e4);
    if (uVar16 != 0) {
        uVar18 = uVar16;
        _dev_err(*(arg1_00 + 0x460),"Reading VS failed (%d)\n",uVar18);
        goto code_r0x08009c84;
    }
    uVar22 = *(arg1_00 + 0x5a8);
    uVar2 = uVar22;
    if (*(arg1_00 + 0x5d6) <= (uVar22 & 0xffff)) {
        uVar2 = *(arg1_00 + 0x5d6);
    }
    *(arg1_00 + 0x5d6) = uVar2;
    if (0x100 < *(arg1_00 + 0x5e4) >> 8) {
        *(arg1_00 + 0x608) = uVar22 >> 0x24 & 1;
    }
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_100 = 0;
    uStack_108 = 6;
    uStack_e0 = 1;
    arg4_00 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0xcc0,0x1000);
    if (arg4_00 == NULL) {
        iVar17 = -0xc;
code_r0x0800964c:
        _dev_err(*(arg1_00 + 0x460),"Identify Controller failed (%d)\n",iVar17);
        uVar18 = 0xfffffffb;
    }
    else {
        iVar17 = sym.__nvme_submit_sync_cmd(*(arg1_00 + 0x48),&uStack_108,0,arg4_00);
        if (iVar17 != 0) {
            kfree(arg4_00);
            goto code_r0x0800964c;
        }
        if (((*(arg4_00 + 0x105) >> 1 & 1) == 0) ||
           (uVar16 = sym.nvme_get_effects_log(arg1_00,0,arg1_00 + 0xa18), -1 < uVar16)) {
            if ((*(*(arg1_00 + 0x40) + 0x10) & 1) == 0) {
                *(arg1_00 + 0x594) = arg4_00[0x27];
            }
            if (*(arg1_00 + 8) == '\0') {
                arg1_01 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0xdc0,0x538);
                if (arg1_01 == NULL) {
                    uVar18 = 0xfffffff4;
                    goto code_r0x08009610;
                }
                *arg1_01 = 0xffffffff;
                __mutex_init(arg1_01 + 0xec,"&subsys->lock",obj.nvme_init_subsystem.__key);
                arg1_01[0xe6] = 1;
                *(arg1_01 + 0xf8) = arg1_01 + 0xf8;
                *(arg1_01 + 0xfa) = arg1_01 + 0xf8;
                *(arg1_01 + 0xfc) = arg1_01 + 0xfc;
                *(arg1_01 + 0xfe) = arg1_01 + 0xfc;
                if ((*(arg1_00 + 0x611) & 1) == 0) {
                    iVar19 = strnlen(arg4_00 + 0x180,0xdf);
                    if (0xdd < iVar19 - 1U) {
                        if (0x10200 < *(arg1_00 + 0x5e4)) {
                            _dev_warn(*(arg1_00 + 0x460),"missing or invalid SUBNQN field.\n");
                        }
                        goto code_r0x08009680;
                    }
                    strlcpy(arg1_01 + 0x100,arg4_00 + 0x180,0xdf);
                }
                else {
code_r0x08009680:
                    uVar16 = snprintf(arg1_01 + 0x100,0xdf,"nqn.2014.08.org.nvmexpress:%04x%04x",*arg4_00,arg4_00[1]
                                     );
                    if (0xdf < uVar16) goto code_r0x08009e44;
                    uVar22 = *(arg4_00 + 6);
                    uVar5 = *(arg4_00 + 10);
                    *(arg1_01 + uVar16 + 0x400) = *(arg4_00 + 2);
                    *(arg1_01 + uVar16 + 0x408) = uVar22;
                    *(arg1_01 + uVar16 + 0x410) = uVar5;
                    if (0xcb < uVar16) goto code_r0x08009e44;
                    uVar4 = *(arg4_00 + 0x14);
                    uVar26 = uVar16 + 0x14;
                    uVar22 = *(arg4_00 + 0x18);
                    uVar24 = *(arg4_00 + 0x1c);
                    uVar27 = *(arg4_00 + 0xc);
                    *(arg1_01 + uVar26 + 0x408) = *(arg4_00 + 0x10);
                    *(arg1_01 + uVar26 + 0x410) = uVar4;
                    *(arg1_01 + uVar26 + 0x418) = uVar22;
                    *(arg1_01 + uVar26 + 0x420) = uVar24;
                    *(arg1_01 + uVar26 + 0x400) = uVar27;
                    if (0xa3 < uVar16) goto code_r0x08009e44;
                    memset(arg1_01 + uVar16 + 0x3c + 0x400,0,0xdf - (uVar16 + 0x3c));
                }
                uVar22 = *(arg4_00 + 6);
                uVar5 = *(arg4_00 + 10);
                puVar1 = arg1_01 + 2;
                *(arg1_01 + 0x4df) = *(arg4_00 + 2);
                *(arg1_01 + 0x4e7) = uVar22;
                uVar27 = *(arg4_00 + 0x10);
                uVar22 = *(arg4_00 + 0x14);
                uVar4 = *(arg4_00 + 0x18);
                *(arg1_01 + 0x4ef) = uVar5;
                uVar24 = *(arg4_00 + 0x1c);
                uVar28 = *(arg4_00 + 0xc);
                iVar12 = arg4_00[0x26];
                *(arg1_01 + 0x503) = uVar22;
                *(arg1_01 + 0x50b) = uVar4;
                iVar10 = *arg4_00;
                *(arg1_01 + 0x513) = uVar24;
                *(arg1_01 + 0x4f3) = uVar28;
                *(arg1_01 + 0x4fb) = uVar27;
                iVar11 = arg4_00[0x108];
                *(arg1_01 + 0x149) = iVar10;
                uVar22 = _segment.ehdr;
                uVar5 = *(arg1_00 + 0x68);
                *(arg1_01 + 0x523) = iVar12;
                *(arg1_01 + 0x526) = iVar11;
                *(arg1_01 + 0xca) = uVar22;
                *(arg1_01 + 0xce) = sym.nvme_release_subsystem.21529633b7289604a80e82acd8b43a39.cfi_jt;
                *(arg1_01 + 0xcc) = obj.nvme_subsys_attrs_groups;
                dev_set_name(puVar1,"nvme-subsys%d",uVar5);
                device_initialize(puVar1);
                mutex_lock(obj.nvme_subsystems_lock);
                puVar20 = sym.__nvme_find_get_subsystem(arg1_01 + 0x100);
                if (puVar20 == NULL) {
                    uVar16 = device_add(puVar1);
                    if (uVar16 == 0) {
                        puVar30 = arg1_01 + 0xe8;
                        *(arg1_01 + 0x14c) = 0;
                        puVar14 = *0x8002238;
                        *(arg1_01 + 0x14a) = 0x1000000500000000;
                        uVar18 = __list_add_valid(puVar30,puVar14,obj.nvme_subsystems);
                        if ((uVar18 & 1) != 0) {
                            *0x8002238 = puVar30;
                            *(arg1_01 + 0xe8) = obj.nvme_subsystems;
                            *(arg1_01 + 0xea) = puVar14;
                            *puVar14 = puVar30;
                        }
                        goto code_r0x080098bc;
                    }
                    uVar18 = uVar16;
                    _dev_err(*(arg1_00 + 0x460),"failed to register subsystem device.\n");
                    put_device(puVar1);
                }
                else {
                    put_device(puVar1);
                    for (puVar30 = *(puVar20 + 0xf8); arg1_01 = puVar20, puVar20 + 0xf8 != puVar30; puVar30 = *puVar30)
                    {
                        if (*(puVar30 + -0x56c) < 4) {
                            if (*(puVar30 + 0x24) == *(arg1_00 + 0x594)) {
                                iVar19 = puVar30[-0x22][0xe];
                                if (iVar19 == 0) {
                                    iVar19 = *puVar30[-0x22];
                                }
                                _dev_err(*(arg1_00 + 0x460),"Duplicate cntlid %u with %s, rejecting\n",
                                         *(puVar30 + 0x24),iVar19);
                            }
                            else {
                                if (((*(arg4_00 + 0x26) >> 1 & 1) != 0) ||
                                   ((*(arg1_00 + 0xc50) != 0 && (*(*(arg1_00 + 0xc50) + 0x48) != '\0'))))
                                goto code_r0x08009800;
                                _dev_err(*(arg1_00 + 0x460),"Subsystem does not support multiple controllers\n");
                            }
                            uVar18 = 0xffffffea;
                            goto code_r0x08009e00;
                        }
                        if ((2 < *(puVar30 + -0x56c) - 4) && ((obj.nvme_state_terminal.__already_done & 1) == 0)) {
                            obj.nvme_state_terminal.__already_done = 0x1;
                            __warn_printk("Unhandled ctrl state:%d");
    //WARNING: Does not return
                            pcVar29 = SoftwareBreakpoint(0x800,0x8009860);
                            (*pcVar29)();
                        }
code_r0x08009800:
                    }
code_r0x080098bc:
                    piVar21 = *(arg1_00 + 0x460);
                    iVar19 = piVar21[0xe];
                    if (iVar19 == 0) {
                        iVar19 = *piVar21;
                    }
                    uVar16 = sysfs_create_link(arg1_01 + 2,piVar21,iVar19);
                    if (uVar16 == 0) {
                        if (puVar20 == NULL) {
                            *arg1_01 = *(arg1_00 + 0x68);
                        }
                        *(arg1_00 + 0x568) = arg1_01;
                        iVar19 = arg1_00 + 0x570;
                        piVar21 = *(arg1_01 + 0xfa);
                        uVar18 = __list_add_valid(iVar19,piVar21,arg1_01 + 0xf8);
                        if ((uVar18 & 1) != 0) {
                            *(arg1_01 + 0xfa) = iVar19;
                            *(arg1_00 + 0x570) = arg1_01 + 0xf8;
                            *(arg1_00 + 0x578) = piVar21;
                            *piVar21 = iVar19;
                        }
                        mutex_unlock(obj.nvme_subsystems_lock);
                        iVar19 = 0;
                        do {
                            if (*(obj.core_quirks + iVar19 * 0x20) == *arg4_00) {
                                if (iVar19 == 1) {
                                    if (*(arg4_00 + 0x20) == 0x3131313130333232) {
code_r0x08009948:
                                        *(arg1_00 + 0x610) = *(arg1_00 + 0x610) | *(iVar19 * 0x20 + 0x8004488);
                                    }
                                }
                                else {
                                    uVar22 = *(iVar19 * 0x20 + 0x8004478);
                                    uVar18 = strlen(uVar22);
                                    if (0x28 < uVar18) {
    //WARNING: Does not return
                                        pcVar29 = SoftwareBreakpoint(0x800,0x80099ec);
                                        (*pcVar29)();
                                    }
                                    iVar17 = bcmp(arg4_00 + 0xc,uVar22,uVar18);
                                    if (iVar17 == 0) {
                                        if (uVar18 < 0x28) {
                                            do {
                                                if (*(arg4_00 + uVar18 + 0x18) != ' ') goto code_r0x0800995c;
                                                uVar18 = uVar18 + 1;
                                            } while (uVar18 != 0x28);
                                        }
                                        goto code_r0x08009948;
                                    }
                                }
                            }
code_r0x0800995c:
                            iVar19 = iVar19 + 1;
                        } while (iVar19 != 4);
                        goto code_r0x0800931c;
                    }
                    uVar18 = uVar16;
                    _dev_err(*(arg1_00 + 0x460),"failed to create sysfs link from subsystem.\n");
code_r0x08009e00:
                    sym.nvme_put_subsystem(arg1_01);
                }
                mutex_unlock(obj.nvme_subsystems_lock);
                goto code_r0x08009610;
            }
code_r0x0800931c:
            cVar13 = obj.force_apst;
            *(*(arg1_00 + 0x568) + 0x51b) = *(arg4_00 + 0x20);
            if ((cVar13 != 0x0) && ((*(arg1_00 + 0x610) >> 5 & 1) != 0)) {
                _dev_warn(*(arg1_00 + 0x460),
                          "forcibly allowing all power states due to nvme_core.force_apst -- use at your own risk\n");
                *(arg1_00 + 0x610) = *(arg1_00 + 0x610) & 0xffffffffffffffdf;
            }
            iVar10 = arg4_00[0x40];
            iVar11 = arg4_00[0x80];
            *(arg1_00 + 0x5ca) = *(arg4_00 + 0x41);
            iVar12 = arg4_00[0x87];
            *(arg1_00 + 0x5c8) = iVar10;
            uVar7 = *(arg4_00 + 0x81);
            *(arg1_00 + 0x5d0) = iVar11;
            iVar10 = arg4_00[0x104];
            uVar5 = *(arg4_00 + 0x2e);
            *(arg1_00 + 0x59c) = iVar12;
            uVar6 = *(arg4_00 + 0x85);
            *(arg1_00 + 0x5ce) = iVar10;
            *(arg1_00 + 0x5f4) = uVar5;
            *(arg1_00 + 0x5f0) = uVar6;
            *(arg1_00 + 0x5dc) = uVar7 + 1;
            uVar7 = *(arg4_00 + 0x4d);
            *(arg1_00 + 0x5e0) = *(arg4_00 + 0x20d);
            if (uVar7 == 0) {
                uVar26 = *(arg1_00 + 0x5b0);
                uVar16 = 0xffffffff;
                uVar23 = 0xffffffff;
                uVar3 = uVar26;
joined_r0x08009480:
                uVar25 = uVar23;
                if ((uVar3 != 0) && (uVar25 = uVar26, uVar16 <= uVar26)) {
                    uVar25 = uVar16;
                }
            }
            else {
                uVar23 = uVar7 + (*(arg1_00 + 0x5ae) & 0xf) + 3;
                uVar3 = uVar23;
                if (0x1f < uVar23) {
                    uVar3 = 0;
                }
                uVar16 = 1L << (uVar3 & 0x3f);
                uVar26 = *(arg1_00 + 0x5b0);
                if (uVar16 >> (uVar3 & 0x1f) != 1 || uVar3 != uVar23) {
                    uVar16 = 0xffffffff;
                }
                uVar25 = uVar16;
                uVar23 = uVar26;
                uVar3 = uVar16;
                if (uVar26 != 0) goto joined_r0x08009480;
            }
            *(arg1_00 + 0x5b0) = uVar25;
            sym.nvme_set_queue_limits(arg1_00,*(arg1_00 + 0x48));
            iVar10 = arg4_00[0xa0];
            uVar5 = *(arg4_00 + 0x10e);
            uVar6 = *(arg4_00 + 0x30);
            *(arg1_00 + 0x5e8) = *(arg4_00 + 0x10c);
            uVar16 = *(arg4_00 + 0x2c);
            *(arg1_00 + 0x5ec) = iVar10;
            *(arg1_00 + 0x5d8) = uVar5;
            *(arg1_00 + 0x5fc) = uVar6;
            if (uVar16 == 0) {
                *(arg1_00 + 0x600) = obj.shutdown_timeout;
            }
            else {
                uVar23 = obj.shutdown_timeout;
                uVar26 = uVar16 / 1000000;
                if (uVar16 / 1000000 <= obj.shutdown_timeout) {
                    uVar26 = uVar23;
                }
                if (0x3b < uVar26) {
                    uVar26 = 0x3c;
                }
                *(arg1_00 + 0x600) = uVar26;
                if (uVar26 != uVar23) {
                    _dev_info(*(arg1_00 + 0x460),"Shutdown timeout set to %u seconds\n");
                }
            }
            cVar8 = *(arg4_00 + 0x109);
            cVar9 = *(arg1_00 + 0xc20);
            *(arg1_00 + 0x5ee) = *(arg4_00 + 0x107);
            *(arg1_00 + 0x5ef) = cVar8;
            if ((*(arg1_00 + 0x610) >> 4 & 1) == 0) {
                cVar15 = cVar8 != '\0';
            }
            else {
                cVar15 = false;
                if ((obj.force_apst != 0x0) && (cVar8 != '\0')) {
                    _dev_warn(*(arg1_00 + 0x460),
                              "forcibly allowing APST due to nvme_core.force_apst -- use at your own risk\n");
                    cVar15 = true;
                }
            }
            *(arg1_00 + 0xc20) = cVar15;
            memcpy(arg1_00 + 0x618,arg4_00 + 0x400,0x400);
            if ((*(*(arg1_00 + 0x40) + 0x10) & 1) != 0) {
                iVar10 = arg4_00[0x27];
                uVar5 = *(arg4_00 + 0x380);
                *(arg1_00 + 0xc3c) = arg4_00[900];
                uVar6 = *(arg4_00 + 0x382);
                iVar11 = arg4_00[0x101];
                *(arg1_00 + 0xc34) = uVar5;
                *(arg1_00 + 0xc38) = uVar6;
                *(arg1_00 + 0xc3e) = iVar11;
                if (*(arg1_00 + 0x594) == iVar10) {
                    if (((*(arg1_00 + 0xc50) != 0) && (*(*(arg1_00 + 0xc50) + 0x48) != '\0')) ||
                       (*(arg1_00 + 0x5ec) != 0)) goto code_r0x080095ec;
                    _dev_err(*(arg1_00 + 0x460),"keep-alive support is mandatory for fabrics\n");
                    uVar18 = 0xffffffea;
                }
                else {
                    _dev_err(*(arg1_00 + 0x460),"Mismatching cntlid: Connect %u vs Identify %u, rejecting\n");
                    uVar18 = 0xffffffea;
                }
                goto code_r0x08009610;
            }
            uVar5 = *(arg4_00 + 0xa6);
            iVar10 = arg4_00[0xa8];
            *(arg1_00 + 0xc24) = *(arg4_00 + 0x88);
            *(arg1_00 + 0xc2c) = uVar5;
            *(arg1_00 + 0xc30) = iVar10;
code_r0x080095ec:
            if ((*(*(arg1_00 + 0x568) + 0x523) >> 3 & 1) == 0) {
                if (cVar15 == false) goto code_r0x08009a08;
code_r0x080095fc:
                if (cVar9 != '\0') goto code_r0x08009a08;
                dev_pm_qos_expose_latency_tolerance(*(arg1_00 + 0x460));
            }
            else {
                _dev_warn(*(arg1_00 + 0x460),
                          "Please enable CONFIG_NVME_MULTIPATH for full support of multi-port devices.\n");
                cVar15 = *(arg1_00 + 0xc20);
                if (cVar15 != '\0') goto code_r0x080095fc;
code_r0x08009a08:
                if ((cVar15 == '\0') && (cVar9 != '\0')) {
                    dev_pm_qos_hide_latency_tolerance(*(arg1_00 + 0x460));
                }
            }
            kfree(arg4_00);
            uVar16 = sym.nvme_configure_apst(arg1_00);
            if (uVar16 < 0) {
                uVar18 = uVar16;
            }
            else {
                if ((*(arg1_00 + 0x5ce) >> 6 & 1) != 0) {
                    iStack_130 = ktime_get_with_offset(0);
                    uStack_d8 = 0;
                    uStack_d0 = 0;
                    iStack_130 = iStack_130 / 1000000;
                    uStack_e8 = 0;
                    uStack_f8 = 0;
                    uStack_f0 = 0;
                    uStack_100 = 0;
                    uStack_128 = 0;
                    uStack_108 = 9;
                    uStack_e0 = 0xe;
                    uVar16 = sym.__nvme_submit_sync_cmd(*(arg1_00 + 0x48),&uStack_108,&uStack_128,&iStack_130);
                    if (uVar16 != 0) {
                        uVar18 = uVar16;
                        if ((obj.nvme_configure_timestamp.__print_once & 1) == 0) {
                            obj.nvme_configure_timestamp.__print_once = 0x1;
                            _dev_warn(*(arg1_00 + 0x460),"could not set timestamp (%d)\n",uVar18);
                        }
                        if (uVar16 < 0) goto code_r0x08009c84;
                    }
                }
                if (((*(arg1_00 + 0x5d0) >> 5 & 1) == 0) || (obj.streams == 0x0)) {
code_r0x08009be8:
                    iVar10 = *(arg1_00 + 0x5c8);
                }
                else {
                    uStack_d0 = 0;
                    uStack_e8 = 0;
                    uStack_f8 = 0;
                    uStack_f0 = 0;
                    uStack_100 = 0;
                    uStack_e0 = 0x100000000;
                    uStack_108 = 0xffffffff00000019;
                    uStack_d8 = 0x101;
                    uVar16 = sym.__nvme_submit_sync_cmd(*(arg1_00 + 0x48),&uStack_108,0,0);
                    if (uVar16 != 0) {
code_r0x08009be4:
                        uVar18 = uVar16;
                        if (uVar16 < 0) goto code_r0x08009c84;
                        goto code_r0x08009be8;
                    }
                    uStack_100 = 0;
                    uStack_d8 = 0;
                    uStack_d0 = 0;
                    uStack_e8 = 0;
                    uStack_f8 = 0;
                    uStack_f0 = 0;
                    uStack_128 = 0;
                    uStack_120 = 0;
                    uStack_118 = 0;
                    uStack_110 = 0;
                    uStack_108 = 0xffffffff0000001a;
                    uStack_e0 = 0x10100000007;
                    uVar16 = sym.__nvme_submit_sync_cmd(*(arg1_00 + 0x48),&uStack_108,0,&uStack_128);
                    if (uVar16 != 0) {
code_r0x08009b90:
                        uStack_100 = 0;
                        uStack_108 = 0xffffffff00000019;
                        uStack_d0 = 0;
                        uStack_e8 = 0;
                        uStack_e0 = 0x100000000;
                        uStack_d8 = 0x100;
                        uStack_f8 = 0;
                        uStack_f0 = 0;
                        sym.__nvme_submit_sync_cmd(*(arg1_00 + 0x48),&uStack_108,0,0);
                        goto code_r0x08009be4;
                    }
                    *(arg1_00 + 0x5d2) = uStack_128._2_2_;
                    if (uStack_128._2_2_ < 4) {
                        _dev_info(*(arg1_00 + 0x460),"too few streams (%u) available\n");
                        goto code_r0x08009b90;
                    }
                    *(arg1_00 + 0x5d4) = 4;
                    _dev_info(*(arg1_00 + 0x460),"Using %u streams\n",4);
                    iVar10 = *(arg1_00 + 0x5c8);
                }
                if ((iVar10 != 0) &&
                   (arg4_01 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0xdc0,0x200), arg4_01 != NULL)) {
                    uStack_100 = 0;
                    *arg4_01 = 1;
                    uStack_108 = 9;
                    uStack_128 = 0;
                    uStack_d8 = 0;
                    uStack_d0 = 0;
                    uStack_e8 = 0;
                    uStack_e0 = 0x16;
                    uStack_f8 = 0;
                    uStack_f0 = 0;
                    uVar16 = sym.__nvme_submit_sync_cmd(*(arg1_00 + 0x48),&uStack_108,&uStack_128,arg4_01);
                    uVar18 = uVar16;
                    kfree(arg4_01);
                    if (uVar16 < 0) goto code_r0x08009c84;
                }
                uVar18 = 0;
                *(arg1_00 + 8) = 1;
            }
        }
        else {
            uVar18 = uVar16;
code_r0x08009610:
            kfree(arg4_00);
        }
    }
code_r0x08009c84:
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_c8) {
        return uVar18;
    }
    __stack_chk_fail();
code_r0x08009e44:
    //WARNING: Does not return
    pcVar29 = SoftwareBreakpoint(0x5512,0x8009e48);
    (*pcVar29)();
}


// ===== sym.nvme_init_ctrl_finish @ 0x080091d4 (size 3188) =====

int sym.nvme_init_ctrl_finish(int64_t arg1)

{
    uint *puVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    ulong uVar4;
    uint uVar5;
    uint uVar6;
    uint8_t uVar7;
    char cVar8;
    char cVar9;
    int16_t iVar10;
    int16_t iVar11;
    int16_t iVar12;
    code cVar13;
    ulong *puVar14;
    char cVar15;
    int iVar16;
    uint32_t uVar17;
    int16_t *arg4;
    uint *arg1_00;
    int64_t iVar18;
    uint *puVar19;
    uint64_t uVar20;
    uchar *arg4_00;
    int64_t *piVar21;
    ulong uVar22;
    uint32_t uVar23;
    ulong uVar24;
    uint32_t uVar25;
    uint32_t uVar26;
    ulong uVar27;
    ulong uVar28;
    ulong *in_x18;
    code *pcVar29;
    ulong *puVar30;
    ulong unaff_x30;
    int64_t iStack_d0;
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
    iVar18 = sp_el0;
    iStack_68 = *(iVar18 + 0x5e0);
    pcVar29 = *(*(arg1 + 0x40) + 0x18);
    __cfi_slowpath_diag(0x79bc8fe92a26dc5e,pcVar29,0x80027b0);
    iVar16 = (*pcVar29)(arg1,8,arg1 + 0x5e4);
    if (iVar16 != 0) {
        _dev_err(*(arg1 + 0x460),"Reading VS failed (%d)\n",iVar16);
        goto code_r0x08009c84;
    }
    uVar22 = *(arg1 + 0x5a8);
    uVar2 = uVar22;
    if (*(arg1 + 0x5d6) <= (uVar22 & 0xffff)) {
        uVar2 = *(arg1 + 0x5d6);
    }
    *(arg1 + 0x5d6) = uVar2;
    if (0x100 < *(arg1 + 0x5e4) >> 8) {
        *(arg1 + 0x608) = uVar22 >> 0x24 & 1;
    }
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    uStack_a8 = 6;
    uStack_80 = 1;
    arg4 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0xcc0,0x1000);
    if (arg4 == NULL) {
        iVar16 = -0xc;
code_r0x0800964c:
        _dev_err(*(arg1 + 0x460),"Identify Controller failed (%d)\n",iVar16);
        iVar16 = -5;
    }
    else {
        iVar16 = sym.__nvme_submit_sync_cmd(*(arg1 + 0x48),&uStack_a8,0,arg4);
        if (iVar16 != 0) {
            kfree(arg4);
            goto code_r0x0800964c;
        }
        if (((*(arg4 + 0x105) >> 1 & 1) == 0) ||
           (iVar16 = sym.nvme_get_effects_log(arg1,0,arg1 + 0xa18), -1 < iVar16)) {
            if ((*(*(arg1 + 0x40) + 0x10) & 1) == 0) {
                *(arg1 + 0x594) = arg4[0x27];
            }
            if (*(arg1 + 8) == '\0') {
                arg1_00 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0xdc0,0x538);
                if (arg1_00 == NULL) {
                    iVar16 = -0xc;
                    goto code_r0x08009610;
                }
                *arg1_00 = 0xffffffff;
                __mutex_init(arg1_00 + 0xec,"&subsys->lock",obj.nvme_init_subsystem.__key);
                arg1_00[0xe6] = 1;
                *(arg1_00 + 0xf8) = arg1_00 + 0xf8;
                *(arg1_00 + 0xfa) = arg1_00 + 0xf8;
                *(arg1_00 + 0xfc) = arg1_00 + 0xfc;
                *(arg1_00 + 0xfe) = arg1_00 + 0xfc;
                if ((*(arg1 + 0x611) & 1) == 0) {
                    iVar18 = strnlen(arg4 + 0x180,0xdf);
                    if (0xdd < iVar18 - 1U) {
                        if (0x10200 < *(arg1 + 0x5e4)) {
                            _dev_warn(*(arg1 + 0x460),"missing or invalid SUBNQN field.\n");
                        }
                        goto code_r0x08009680;
                    }
                    strlcpy(arg1_00 + 0x100,arg4 + 0x180,0xdf);
                }
                else {
code_r0x08009680:
                    uVar17 = snprintf(arg1_00 + 0x100,0xdf,"nqn.2014.08.org.nvmexpress:%04x%04x",*arg4,arg4[1]);
                    if (0xdf < uVar17) goto code_r0x08009e44;
                    uVar22 = *(arg4 + 6);
                    uVar5 = *(arg4 + 10);
                    *(arg1_00 + uVar17 + 0x400) = *(arg4 + 2);
                    *(arg1_00 + uVar17 + 0x408) = uVar22;
                    *(arg1_00 + uVar17 + 0x410) = uVar5;
                    if (0xcb < uVar17) goto code_r0x08009e44;
                    uVar4 = *(arg4 + 0x14);
                    uVar26 = uVar17 + 0x14;
                    uVar22 = *(arg4 + 0x18);
                    uVar24 = *(arg4 + 0x1c);
                    uVar27 = *(arg4 + 0xc);
                    *(arg1_00 + uVar26 + 0x408) = *(arg4 + 0x10);
                    *(arg1_00 + uVar26 + 0x410) = uVar4;
                    *(arg1_00 + uVar26 + 0x418) = uVar22;
                    *(arg1_00 + uVar26 + 0x420) = uVar24;
                    *(arg1_00 + uVar26 + 0x400) = uVar27;
                    if (0xa3 < uVar17) goto code_r0x08009e44;
                    memset(arg1_00 + uVar17 + 0x3c + 0x400,0,0xdf - (uVar17 + 0x3c));
                }
                uVar22 = *(arg4 + 6);
                uVar5 = *(arg4 + 10);
                puVar1 = arg1_00 + 2;
                *(arg1_00 + 0x4df) = *(arg4 + 2);
                *(arg1_00 + 0x4e7) = uVar22;
                uVar27 = *(arg4 + 0x10);
                uVar22 = *(arg4 + 0x14);
                uVar4 = *(arg4 + 0x18);
                *(arg1_00 + 0x4ef) = uVar5;
                uVar24 = *(arg4 + 0x1c);
                uVar28 = *(arg4 + 0xc);
                iVar12 = arg4[0x26];
                *(arg1_00 + 0x503) = uVar22;
                *(arg1_00 + 0x50b) = uVar4;
                iVar10 = *arg4;
                *(arg1_00 + 0x513) = uVar24;
                *(arg1_00 + 0x4f3) = uVar28;
                *(arg1_00 + 0x4fb) = uVar27;
                iVar11 = arg4[0x108];
                *(arg1_00 + 0x149) = iVar10;
                uVar22 = _segment.ehdr;
                uVar5 = *(arg1 + 0x68);
                *(arg1_00 + 0x523) = iVar12;
                *(arg1_00 + 0x526) = iVar11;
                *(arg1_00 + 0xca) = uVar22;
                *(arg1_00 + 0xce) = sym.nvme_release_subsystem.21529633b7289604a80e82acd8b43a39.cfi_jt;
                *(arg1_00 + 0xcc) = obj.nvme_subsys_attrs_groups;
                dev_set_name(puVar1,"nvme-subsys%d",uVar5);
                device_initialize(puVar1);
                mutex_lock(obj.nvme_subsystems_lock);
                puVar19 = sym.__nvme_find_get_subsystem(arg1_00 + 0x100);
                if (puVar19 == NULL) {
                    iVar16 = device_add(puVar1);
                    if (iVar16 == 0) {
                        puVar30 = arg1_00 + 0xe8;
                        *(arg1_00 + 0x14c) = 0;
                        puVar14 = *0x8002238;
                        *(arg1_00 + 0x14a) = 0x1000000500000000;
                        uVar20 = __list_add_valid(puVar30,puVar14,obj.nvme_subsystems);
                        if ((uVar20 & 1) != 0) {
                            *0x8002238 = puVar30;
                            *(arg1_00 + 0xe8) = obj.nvme_subsystems;
                            *(arg1_00 + 0xea) = puVar14;
                            *puVar14 = puVar30;
                        }
                        goto code_r0x080098bc;
                    }
                    _dev_err(*(arg1 + 0x460),"failed to register subsystem device.\n");
                    put_device(puVar1);
                }
                else {
                    put_device(puVar1);
                    for (puVar30 = *(puVar19 + 0xf8); arg1_00 = puVar19, puVar19 + 0xf8 != puVar30; puVar30 = *puVar30)
                    {
                        if (*(puVar30 + -0x56c) < 4) {
                            if (*(puVar30 + 0x24) == *(arg1 + 0x594)) {
                                iVar18 = puVar30[-0x22][0xe];
                                if (iVar18 == 0) {
                                    iVar18 = *puVar30[-0x22];
                                }
                                _dev_err(*(arg1 + 0x460),"Duplicate cntlid %u with %s, rejecting\n",*(puVar30 + 0x24)
                                         ,iVar18);
                            }
                            else {
                                if (((*(arg4 + 0x26) >> 1 & 1) != 0) ||
                                   ((*(arg1 + 0xc50) != 0 && (*(*(arg1 + 0xc50) + 0x48) != '\0'))))
                                goto code_r0x08009800;
                                _dev_err(*(arg1 + 0x460),"Subsystem does not support multiple controllers\n");
                            }
                            iVar16 = -0x16;
                            goto code_r0x08009e00;
                        }
                        if ((2 < *(puVar30 + -0x56c) - 4) && ((obj.nvme_state_terminal.__already_done & 1) == 0)) {
                            obj.nvme_state_terminal.__already_done = 0x1;
                            __warn_printk("Unhandled ctrl state:%d");
    //WARNING: Does not return
                            pcVar29 = SoftwareBreakpoint(0x800,0x8009860);
                            (*pcVar29)();
                        }
code_r0x08009800:
                    }
code_r0x080098bc:
                    piVar21 = *(arg1 + 0x460);
                    iVar18 = piVar21[0xe];
                    if (iVar18 == 0) {
                        iVar18 = *piVar21;
                    }
                    iVar16 = sysfs_create_link(arg1_00 + 2,piVar21,iVar18);
                    if (iVar16 == 0) {
                        if (puVar19 == NULL) {
                            *arg1_00 = *(arg1 + 0x68);
                        }
                        *(arg1 + 0x568) = arg1_00;
                        iVar18 = arg1 + 0x570;
                        piVar21 = *(arg1_00 + 0xfa);
                        uVar20 = __list_add_valid(iVar18,piVar21,arg1_00 + 0xf8);
                        if ((uVar20 & 1) != 0) {
                            *(arg1_00 + 0xfa) = iVar18;
                            *(arg1 + 0x570) = arg1_00 + 0xf8;
                            *(arg1 + 0x578) = piVar21;
                            *piVar21 = iVar18;
                        }
                        mutex_unlock(obj.nvme_subsystems_lock);
                        iVar18 = 0;
                        do {
                            if (*(obj.core_quirks + iVar18 * 0x20) == *arg4) {
                                if (iVar18 == 1) {
                                    if (*(arg4 + 0x20) == 0x3131313130333232) {
code_r0x08009948:
                                        *(arg1 + 0x610) = *(arg1 + 0x610) | *(iVar18 * 0x20 + 0x8004488);
                                    }
                                }
                                else {
                                    uVar22 = *(iVar18 * 0x20 + 0x8004478);
                                    uVar20 = strlen(uVar22);
                                    if (0x28 < uVar20) {
    //WARNING: Does not return
                                        pcVar29 = SoftwareBreakpoint(0x800,0x80099ec);
                                        (*pcVar29)();
                                    }
                                    iVar16 = bcmp(arg4 + 0xc,uVar22,uVar20);
                                    if (iVar16 == 0) {
                                        if (uVar20 < 0x28) {
                                            do {
                                                if (*(arg4 + uVar20 + 0x18) != ' ') goto code_r0x0800995c;
                                                uVar20 = uVar20 + 1;
                                            } while (uVar20 != 0x28);
                                        }
                                        goto code_r0x08009948;
                                    }
                                }
                            }
code_r0x0800995c:
                            iVar18 = iVar18 + 1;
                        } while (iVar18 != 4);
                        goto code_r0x0800931c;
                    }
                    _dev_err(*(arg1 + 0x460),"failed to create sysfs link from subsystem.\n");
code_r0x08009e00:
                    sym.nvme_put_subsystem(arg1_00);
                }
                mutex_unlock(obj.nvme_subsystems_lock);
                goto code_r0x08009610;
            }
code_r0x0800931c:
            cVar13 = obj.force_apst;
            *(*(arg1 + 0x568) + 0x51b) = *(arg4 + 0x20);
            if ((cVar13 != 0x0) && ((*(arg1 + 0x610) >> 5 & 1) != 0)) {
                _dev_warn(*(arg1 + 0x460),
                          "forcibly allowing all power states due to nvme_core.force_apst -- use at your own risk\n");
                *(arg1 + 0x610) = *(arg1 + 0x610) & 0xffffffffffffffdf;
            }
            iVar10 = arg4[0x40];
            iVar11 = arg4[0x80];
            *(arg1 + 0x5ca) = *(arg4 + 0x41);
            iVar12 = arg4[0x87];
            *(arg1 + 0x5c8) = iVar10;
            uVar7 = *(arg4 + 0x81);
            *(arg1 + 0x5d0) = iVar11;
            iVar10 = arg4[0x104];
            uVar5 = *(arg4 + 0x2e);
            *(arg1 + 0x59c) = iVar12;
            uVar6 = *(arg4 + 0x85);
            *(arg1 + 0x5ce) = iVar10;
            *(arg1 + 0x5f4) = uVar5;
            *(arg1 + 0x5f0) = uVar6;
            *(arg1 + 0x5dc) = uVar7 + 1;
            uVar7 = *(arg4 + 0x4d);
            *(arg1 + 0x5e0) = *(arg4 + 0x20d);
            if (uVar7 == 0) {
                uVar26 = *(arg1 + 0x5b0);
                uVar17 = 0xffffffff;
                uVar23 = 0xffffffff;
                uVar3 = uVar26;
joined_r0x08009480:
                uVar25 = uVar23;
                if ((uVar3 != 0) && (uVar25 = uVar26, uVar17 <= uVar26)) {
                    uVar25 = uVar17;
                }
            }
            else {
                uVar23 = uVar7 + (*(arg1 + 0x5ae) & 0xf) + 3;
                uVar3 = uVar23;
                if (0x1f < uVar23) {
                    uVar3 = 0;
                }
                uVar17 = 1L << (uVar3 & 0x3f);
                uVar26 = *(arg1 + 0x5b0);
                if (uVar17 >> (uVar3 & 0x1f) != 1 || uVar3 != uVar23) {
                    uVar17 = 0xffffffff;
                }
                uVar25 = uVar17;
                uVar23 = uVar26;
                uVar3 = uVar17;
                if (uVar26 != 0) goto joined_r0x08009480;
            }
            *(arg1 + 0x5b0) = uVar25;
            sym.nvme_set_queue_limits(arg1,*(arg1 + 0x48));
            iVar10 = arg4[0xa0];
            uVar5 = *(arg4 + 0x10e);
            uVar6 = *(arg4 + 0x30);
            *(arg1 + 0x5e8) = *(arg4 + 0x10c);
            uVar17 = *(arg4 + 0x2c);
            *(arg1 + 0x5ec) = iVar10;
            *(arg1 + 0x5d8) = uVar5;
            *(arg1 + 0x5fc) = uVar6;
            if (uVar17 == 0) {
                *(arg1 + 0x600) = obj.shutdown_timeout;
            }
            else {
                uVar23 = obj.shutdown_timeout;
                uVar26 = uVar17 / 1000000;
                if (uVar17 / 1000000 <= obj.shutdown_timeout) {
                    uVar26 = uVar23;
                }
                if (0x3b < uVar26) {
                    uVar26 = 0x3c;
                }
                *(arg1 + 0x600) = uVar26;
                if (uVar26 != uVar23) {
                    _dev_info(*(arg1 + 0x460),"Shutdown timeout set to %u seconds\n");
                }
            }
            cVar8 = *(arg4 + 0x109);
            cVar9 = *(arg1 + 0xc20);
            *(arg1 + 0x5ee) = *(arg4 + 0x107);
            *(arg1 + 0x5ef) = cVar8;
            if ((*(arg1 + 0x610) >> 4 & 1) == 0) {
                cVar15 = cVar8 != '\0';
            }
            else {
                cVar15 = false;
                if ((obj.force_apst != 0x0) && (cVar8 != '\0')) {
                    _dev_warn(*(arg1 + 0x460),
                              "forcibly allowing APST due to nvme_core.force_apst -- use at your own risk\n");
                    cVar15 = true;
                }
            }
            *(arg1 + 0xc20) = cVar15;
            memcpy(arg1 + 0x618,arg4 + 0x400,0x400);
            if ((*(*(arg1 + 0x40) + 0x10) & 1) != 0) {
                iVar10 = arg4[0x27];
                uVar5 = *(arg4 + 0x380);
                *(arg1 + 0xc3c) = arg4[900];
                uVar6 = *(arg4 + 0x382);
                iVar11 = arg4[0x101];
                *(arg1 + 0xc34) = uVar5;
                *(arg1 + 0xc38) = uVar6;
                *(arg1 + 0xc3e) = iVar11;
                if (*(arg1 + 0x594) == iVar10) {
                    if (((*(arg1 + 0xc50) != 0) && (*(*(arg1 + 0xc50) + 0x48) != '\0')) || (*(arg1 + 0x5ec) != 0))
                    goto code_r0x080095ec;
                    _dev_err(*(arg1 + 0x460),"keep-alive support is mandatory for fabrics\n");
                    iVar16 = -0x16;
                }
                else {
                    _dev_err(*(arg1 + 0x460),"Mismatching cntlid: Connect %u vs Identify %u, rejecting\n");
                    iVar16 = -0x16;
                }
                goto code_r0x08009610;
            }
            uVar5 = *(arg4 + 0xa6);
            iVar10 = arg4[0xa8];
            *(arg1 + 0xc24) = *(arg4 + 0x88);
            *(arg1 + 0xc2c) = uVar5;
            *(arg1 + 0xc30) = iVar10;
code_r0x080095ec:
            if ((*(*(arg1 + 0x568) + 0x523) >> 3 & 1) == 0) {
                if (cVar15 == false) goto code_r0x08009a08;
code_r0x080095fc:
                if (cVar9 != '\0') goto code_r0x08009a08;
                dev_pm_qos_expose_latency_tolerance(*(arg1 + 0x460));
            }
            else {
                _dev_warn(*(arg1 + 0x460),
                          "Please enable CONFIG_NVME_MULTIPATH for full support of multi-port devices.\n");
                cVar15 = *(arg1 + 0xc20);
                if (cVar15 != '\0') goto code_r0x080095fc;
code_r0x08009a08:
                if ((cVar15 == '\0') && (cVar9 != '\0')) {
                    dev_pm_qos_hide_latency_tolerance(*(arg1 + 0x460));
                }
            }
            kfree(arg4);
            iVar16 = sym.nvme_configure_apst(arg1);
            if (-1 < iVar16) {
                if ((*(arg1 + 0x5ce) >> 6 & 1) != 0) {
                    iStack_d0 = ktime_get_with_offset(0);
                    uStack_78 = 0;
                    uStack_70 = 0;
                    iStack_d0 = iStack_d0 / 1000000;
                    uStack_88 = 0;
                    uStack_98 = 0;
                    uStack_90 = 0;
                    uStack_a0 = 0;
                    uStack_c8 = 0;
                    uStack_a8 = 9;
                    uStack_80 = 0xe;
                    iVar16 = sym.__nvme_submit_sync_cmd(*(arg1 + 0x48),&uStack_a8,&uStack_c8,&iStack_d0);
                    if (iVar16 != 0) {
                        if ((obj.nvme_configure_timestamp.__print_once & 1) == 0) {
                            obj.nvme_configure_timestamp.__print_once = 0x1;
                            _dev_warn(*(arg1 + 0x460),"could not set timestamp (%d)\n",iVar16);
                        }
                        if (iVar16 < 0) goto code_r0x08009c84;
                    }
                }
                if (((*(arg1 + 0x5d0) >> 5 & 1) == 0) || (obj.streams == 0x0)) {
code_r0x08009be8:
                    iVar10 = *(arg1 + 0x5c8);
                }
                else {
                    uStack_70 = 0;
                    uStack_88 = 0;
                    uStack_98 = 0;
                    uStack_90 = 0;
                    uStack_a0 = 0;
                    uStack_80 = 0x100000000;
                    uStack_a8 = 0xffffffff00000019;
                    uStack_78 = 0x101;
                    iVar16 = sym.__nvme_submit_sync_cmd(*(arg1 + 0x48),&uStack_a8,0,0);
                    if (iVar16 != 0) {
code_r0x08009be4:
                        if (iVar16 < 0) goto code_r0x08009c84;
                        goto code_r0x08009be8;
                    }
                    uStack_a0 = 0;
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_88 = 0;
                    uStack_98 = 0;
                    uStack_90 = 0;
                    uStack_c8 = 0;
                    uStack_c0 = 0;
                    uStack_b8 = 0;
                    uStack_b0 = 0;
                    uStack_a8 = 0xffffffff0000001a;
                    uStack_80 = 0x10100000007;
                    iVar16 = sym.__nvme_submit_sync_cmd(*(arg1 + 0x48),&uStack_a8,0,&uStack_c8);
                    if (iVar16 != 0) {
code_r0x08009b90:
                        uStack_a0 = 0;
                        uStack_a8 = 0xffffffff00000019;
                        uStack_70 = 0;
                        uStack_88 = 0;
                        uStack_80 = 0x100000000;
                        uStack_78 = 0x100;
                        uStack_98 = 0;
                        uStack_90 = 0;
                        sym.__nvme_submit_sync_cmd(*(arg1 + 0x48),&uStack_a8,0,0);
                        goto code_r0x08009be4;
                    }
                    *(arg1 + 0x5d2) = uStack_c8._2_2_;
                    if (uStack_c8._2_2_ < 4) {
                        _dev_info(*(arg1 + 0x460),"too few streams (%u) available\n");
                        goto code_r0x08009b90;
                    }
                    *(arg1 + 0x5d4) = 4;
                    _dev_info(*(arg1 + 0x460),"Using %u streams\n",4);
                    iVar10 = *(arg1 + 0x5c8);
                }
                if ((iVar10 != 0) &&
                   (arg4_00 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0xdc0,0x200), arg4_00 != NULL)) {
                    uStack_a0 = 0;
                    *arg4_00 = 1;
                    uStack_a8 = 9;
                    uStack_c8 = 0;
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_88 = 0;
                    uStack_80 = 0x16;
                    uStack_98 = 0;
                    uStack_90 = 0;
                    iVar16 = sym.__nvme_submit_sync_cmd(*(arg1 + 0x48),&uStack_a8,&uStack_c8,arg4_00);
                    kfree(arg4_00);
                    if (iVar16 < 0) goto code_r0x08009c84;
                }
                iVar16 = 0;
                *(arg1 + 8) = 1;
            }
        }
        else {
code_r0x08009610:
            kfree(arg4);
        }
    }
code_r0x08009c84:
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_68) {
        return iVar16;
    }
    __stack_chk_fail();
code_r0x08009e44:
    //WARNING: Does not return
    pcVar29 = SoftwareBreakpoint(0x5512,0x8009e48);
    (*pcVar29)();
}


// ===== sym.nvme_configure_apst @ 0x08009e48 (size 796) =====

uint64_t sym.nvme_configure_apst(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    code *pcVar5;
    bool bVar6;
    bool bVar7;
    uint32_t uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    ulong extraout_x1;
    uint64_t uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    uint8_t *puVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    uint uStack_50;
    uint32_t uStack_4c;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    if (*(arg1 + 0x5ef) == '\0') {
code_r0x08009f5c:
        uVar8 = 0;
        goto code_r0x0800a080;
    }
    if (0x1f < *(arg1 + 0x5ee)) {
        _dev_warn(*(arg1 + 0x460),"NPSS is invalid; not using APST\n");
        uVar8 = 0;
        goto code_r0x0800a080;
    }
    iVar9 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0xdc0,0x100);
    uVar11 = *0x8002000;
    if (iVar9 == 0) goto code_r0x08009f5c;
    uVar8 = *(arg1 + 0xc20);
    if (*(arg1 + 0xc20) != 0) {
        uVar12 = *(arg1 + 0xc18);
        uVar8 = 0;
        if (uVar12 != 0) {
            uVar3 = *(arg1 + 0x5ee);
            uVar15 = uVar3;
            bVar6 = *0x8002000 == 0;
            if ((*(arg1 + 0x610) >> 5 & 1) == 0) {
                if (0x1f < uVar3) {
code_r0x0800a15c:
    //WARNING: Does not return
                    pcVar5 = SoftwareBreakpoint(0x5512,0x800a160);
                    (*pcVar5)();
                }
                iVar1 = arg1 + uVar15 * 0x20;
                if (((*(iVar1 + 0x61b) >> 1 & 1) == 0) || (uVar13 = *(iVar1 + 0x620), uVar12 < uVar13))
                goto code_r0x08009f14;
                uVar13 = *(arg1 + uVar15 * 0x20 + 0x61c) + uVar13;
                if (bVar6) {
                    uVar10 = 0xffffff;
                    if (uVar13 < 0x13ffffed) {
                        uVar10 = (uVar13 + 0x13) / 0x14;
                    }
                    uVar8 = 0xffffffff;
code_r0x0800a150:
                    uVar14 = uVar10 << 8 | uVar15 << 3;
                }
                else {
                    uVar10 = *0x8002000;
                    if (uVar13 <= *0x8002000) {
                        uVar8 = 1;
                        goto code_r0x0800a150;
                    }
                    uVar14 = 0;
                    uVar8 = 0xffffffff;
                    if ((*0x8002000 != 0) && (uVar13 <= *0x8002000)) {
                        uVar8 = 2;
                        goto code_r0x0800a150;
                    }
                }
            }
            else {
code_r0x08009f14:
                uVar14 = 0;
                uVar8 = 0xffffffff;
            }
            if (uVar3 != 0) {
                uVar13 = uVar15 * 8;
                puVar16 = arg1 + uVar15 * 0x20 + 0x5fb;
                do {
                    uVar13 = uVar13 - 8;
                    uVar10 = uVar15 - 1;
                    if (uVar14 == 0) {
                        if (0x1f < uVar10) goto code_r0x0800a15c;
                    }
                    else {
                        if (0x1f < uVar10) goto code_r0x0800a15c;
                        *(iVar9 + uVar10 * 8) = uVar14;
                    }
                    uVar4 = uVar8;
                    if (((*puVar16 >> 1 & 1) == 0) || (uVar12 < *(puVar16 + 5))) goto code_r0x08009f80;
                    uVar2 = *(puVar16 + 1) + *(puVar16 + 5);
                    if (bVar6) {
                        uVar14 = 0xffffff;
                        if (uVar2 < 0x13ffffed) {
                            uVar14 = (uVar2 + 0x13) / 0x14;
                        }
code_r0x08009f78:
                        uVar14 = uVar13 & 0xfffffff8 | uVar14 << 8;
                        uVar4 = uVar8;
                    }
                    else if (uVar11 < uVar2) {
                        if (((uVar11 != 0) && (uVar2 <= uVar11)) && (2 < uVar8)) {
                            pcVar5 = obj.apst_secondary_timeout_ms;
                            uVar8 = 2;
code_r0x0800a014:
                            uVar14 = *pcVar5;
                            goto code_r0x08009f78;
                        }
                    }
                    else {
                        bVar7 = uVar8 != 1;
                        pcVar5 = obj.apst_primary_timeout_ms;
                        uVar8 = 1;
                        uVar4 = 1;
                        if (bVar7) goto code_r0x0800a014;
                    }
code_r0x08009f80:
                    uVar8 = uVar4;
                    puVar16 = puVar16 + -0x20;
                    bVar7 = 1 < uVar15;
                    uVar15 = uVar10;
                } while (bVar7);
            }
            uVar8 = 1;
        }
    }
    uStack_80 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_78 = 9;
    _uStack_50 = CONCAT44(uVar8,0xc);
    uVar8 = sym.__nvme_submit_sync_cmd(*(arg1 + 0x48),&uStack_78,&uStack_80,iVar9);
    if (uVar8 != 0) {
        _dev_err(*(arg1 + 0x460),"failed to set APST feature (%d)\n",uVar8);
    }
    kfree(iVar9);
code_r0x0800a080:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_38) {
        __stack_chk_fail();
        *extraout_x18 = sym.nvme_cdev_del;
        cdev_device_del();
        uVar11 = put_device(extraout_x1);
        return uVar11;
    }
    return uVar8;
}


// ===== sym.nvme_cdev_del @ 0x0800a164 (size 56) =====

void sym.nvme_cdev_del(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    cdev_device_del();
    put_device(arg1);
    return;
}


// ===== sym.nvme_cdev_add @ 0x0800a19c (size 204) =====

uint32_t sym.nvme_cdev_add(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = ida_alloc_range(obj.nvme_ns_chr_minor_ida,0,0xffffffff,0xcc0);
    uVar2 = _segment.ehdr;
    if (-1 < uVar3) {
        uVar1 = CONCAT44(*0x8000004,_segment.ehdr);
        *(arg2 + 0x330) = sym.nvme_cdev_rel.21529633b7289604a80e82acd8b43a39.cfi_jt;
        *(arg2 + 800) = uVar1;
        *(arg2 + 0x300) = uVar2 & 0xfff00000 | uVar3;
        device_initialize(arg2);
        cdev_init(arg1,arg3);
        *(arg1 + 0x60) = arg4;
        uVar3 = cdev_device_add(arg1,arg2);
        if (uVar3 != 0) {
            put_device(arg2);
        }
    }
    return uVar3;
}


// ===== sym.nvme_cdev_rel @ 0x0800a268 (size 52) =====

void sym.nvme_cdev_rel(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ida_free(obj.nvme_ns_chr_minor_ida,*(arg1 + 0x300) & 0xfffff);
    return;
}


// ===== sym.nvme_find_get_ns @ 0x0800a29c (size 292) =====

ulong * sym.nvme_find_get_ns(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong *puVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    down_read(arg1 + 0x90);
    for (puVar7 = *(arg1 + 0x80); puVar7 != arg1 + 0x80; puVar7 = *puVar7) {
        if (*(puVar7[8] + 0x2d0) == arg2) {
            puVar1 = puVar7 + 7;
            uVar6 = *puVar1;
            if (uVar6 == 0) {
                uVar5 = 0;
            }
            else {
                do {
                    uVar5 = uVar6;
                    Hint_Prefetch(puVar1,2,0,1);
                    do {
                        uVar2 = *puVar1;
                        uVar6 = uVar2;
                        if (uVar2 != uVar5) break;
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar4) {
                            *puVar1 = uVar5 + 1;
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                } while ((uVar5 != uVar2) && (uVar5 = 0, uVar2 != 0));
            }
            if ((uVar5 + 1 | uVar5) < 0) {
                refcount_warn_saturate(puVar1,0);
            }
            if (uVar5 != 0) goto code_r0x0800a378;
        }
        else if (arg2 < *(puVar7[8] + 0x2d0)) break;
    }
    puVar7 = NULL;
code_r0x0800a378:
    up_read(arg1 + 0x90);
    return puVar7;
}


// ===== sym.nvme_remove_namespaces @ 0x0800a3c0 (size 248) =====

void sym.nvme_remove_namespaces(int64_t arg1)

{
    int64_t *piVar1;
    uint64_t *puVar2;
    uchar *puVar3;
    char cVar4;
    bool bVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar7;
    ulong *puVar8;
    ulong unaff_x30;
    uchar *puStack_38;
    uchar *puStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    puStack_38 = &stack0xffffffffffffffc8;
    puStack_30 = puStack_38;
    flush_work(arg1 + 0xa30);
    if (*(arg1 + 4) == 6) {
        sym.nvme_kill_queues(arg1);
    }
    sym.nvme_change_ctrl_state(arg1,5);
    down_write(arg1 + 0x90);
    piVar1 = arg1 + 0x80;
    if (piVar1 != *piVar1) {
        puVar3 = *(arg1 + 0x80);
        puVar8 = *(arg1 + 0x88);
        *(puVar3 + 8) = &stack0xffffffffffffffc8;
        *puVar8 = puStack_38;
        *(puStack_38 + 8) = puVar8;
        *(arg1 + 0x80) = piVar1;
        *(arg1 + 0x88) = piVar1;
        puStack_38 = puVar3;
    }
    up_write(arg1 + 0x90);
    piVar1 = puStack_38;
    while (piVar1 != &stack0xffffffffffffffc8) {
        iVar7 = *piVar1;
        sym.nvme_ns_remove(piVar1);
        piVar1 = iVar7;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_28) {
        iVar7 = __stack_chk_fail();
        *extraout_x18 = 0x800a4b4;
        down_read(iVar7 + 0x90);
        if ((*(iVar7 + 0x48) != 0) && ((*(*(iVar7 + 0x48) + 0x60) >> 1 & 1) == 0)) {
            blk_mq_unquiesce_queue();
        }
        for (puVar8 = *(iVar7 + 0x80); puVar8 != iVar7 + 0x80; puVar8 = *puVar8) {
            puVar2 = puVar8 + 0xc;
            Hint_Prefetch(puVar2,2,0,1);
            do {
                uVar6 = *puVar2;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar2,0x10);
                if (bVar5) {
                    *puVar2 = uVar6 | 2;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
            if ((uVar6 >> 1 & 1) == 0) {
                blk_mark_disk_dead(puVar8[4]);
                blk_mq_unquiesce_queue(puVar8[3]);
                set_capacity_and_notify(puVar8[4],0);
            }
        }
        up_read(iVar7 + 0x90);
        return;
    }
    return;
}


// ===== sym.nvme_kill_queues @ 0x0800a4b8 (size 212) =====

void sym.nvme_kill_queues(int64_t arg1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    down_read(arg1 + 0x90);
    if ((*(arg1 + 0x48) != 0) && ((*(*(arg1 + 0x48) + 0x60) >> 1 & 1) == 0)) {
        blk_mq_unquiesce_queue();
    }
    for (puVar5 = *(arg1 + 0x80); puVar5 != arg1 + 0x80; puVar5 = *puVar5) {
        puVar1 = puVar5 + 0xc;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar4 = *puVar1;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = uVar4 | 2;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
        if ((uVar4 >> 1 & 1) == 0) {
            blk_mark_disk_dead(puVar5[4]);
            blk_mq_unquiesce_queue(puVar5[3]);
            set_capacity_and_notify(puVar5[4],0);
        }
    }
    up_read(arg1 + 0x90);
    return;
}


// ===== sym.nvme_ns_remove @ 0x0800a58c (size 428) =====

void sym.nvme_ns_remove(int64_t arg1)

{
    uint64_t *puVar1;
    int64_t iVar2;
    char cVar3;
    bool bVar4;
    int64_t *piVar5;
    int64_t iVar6;
    uint64_t uVar7;
    ulong *in_x18;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = arg1 + 0x60;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = uVar7 | 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
    if ((uVar7 & 1) == 0) {
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
                *puVar1 = *puVar1 & 0xffffffffffffffef;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        set_capacity(*(arg1 + 0x20),0);
        mutex_lock(*(*(arg1 + 0x10) + 0x568) + 0x3b0);
        uVar7 = __list_del_entry_valid(arg1 + 0x28);
        if ((uVar7 & 1) != 0) {
            iVar2 = *(arg1 + 0x28);
            piVar5 = *(arg1 + 0x30);
            *(iVar2 + 8) = piVar5;
            *piVar5 = iVar2;
        }
        *(arg1 + 0x30) = 0xdead000000000122;
        if (*(arg1 + 0x40) == **(arg1 + 0x40)) {
            iVar8 = *(arg1 + 0x40);
            iVar2 = iVar8 + 0x300;
            uVar7 = __list_del_entry_valid(iVar2);
            if ((uVar7 & 1) != 0) {
                piVar5 = *(iVar8 + 0x308);
                iVar6 = *(iVar8 + 0x300);
                *(iVar6 + 8) = piVar5;
                *piVar5 = iVar6;
            }
            *(iVar8 + 0x300) = iVar2;
            *(iVar8 + 0x308) = iVar2;
        }
        mutex_unlock(*(*(arg1 + 0x10) + 0x568) + 0x3b0);
        synchronize_rcu();
        cdev_device_del(arg1 + 0x68,arg1 + 0xf0);
        put_device(arg1 + 0xf0);
        del_gendisk(*(arg1 + 0x20));
        blk_cleanup_queue(*(arg1 + 0x18));
        down_write(*(arg1 + 0x10) + 0x90);
        uVar7 = __list_del_entry_valid(arg1);
        if ((uVar7 & 1) != 0) {
            iVar2 = *arg1;
            piVar5 = *(arg1 + 8);
            *(iVar2 + 8) = piVar5;
            *piVar5 = iVar2;
        }
        *arg1 = arg1;
        *(arg1 + 8) = arg1;
        up_write(*(arg1 + 0x10) + 0x90);
        sym.nvme_put_ns(arg1);
    }
    return;
}


// ===== sym.nvme_complete_async_event @ 0x0800a738 (size 156) =====

void sym.nvme_complete_async_event(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *arg3;
    if ((arg2 & 0xffff) < 2) {
        uVar1 = uVar2 & 7;
        if (uVar1 < 8) {
            if ((1 << uVar1 & 0xc3U) == 0) {
                if (uVar1 == 2) {
                    sym.nvme_handle_aen_notice(arg1,uVar2);
                }
            }
            else {
                *(arg1 + 0x5f8) = uVar2;
            }
        }
        queue_work_on(0x20,_segment.ehdr,arg1 + 0xa60);
    }
    return;
}


// ===== sym.nvme_handle_aen_notice @ 0x0800a890 (size 440) =====

void sym.nvme_handle_aen_notice(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = arg2 >> 8 & 0xff;
    if (uVar4 == 0xf0) {
        *(arg1 + 0x5f8) = arg2;
        return;
    }
    if (uVar4 == 1) {
        uVar5 = sym.nvme_change_ctrl_state(arg1,2);
        if ((uVar5 & 1) == 0) {
            return;
        }
        arg1 = arg1 + 0xbe0;
    }
    else {
        if (uVar4 != 0) {
            _dev_warn(*(arg1 + 0x460),"async event result %08x\n");
            return;
        }
        puVar1 = arg1 + 0xc10;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 | 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (*(arg1 + 4) != 1) {
            return;
        }
        if (*(arg1 + 0x70) == 0) {
            return;
        }
        arg1 = arg1 + 0xa30;
    }
    queue_work_on(0x20,_segment.ehdr,arg1);
    return;
}


// ===== sym.nvme_stop_ctrl @ 0x0800aa48 (size 240) =====

void sym.nvme_stop_ctrl(int64_t arg1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x604) != 0) {
        cancel_delayed_work_sync(arg1 + 0xa90);
    }
    if (*(arg1 + 0xc50) != 0) {
        cancel_delayed_work_sync(arg1 + 0xb18);
        puVar1 = arg1 + 0xc48;
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
    flush_work(arg1 + 0xa60);
    cancel_work_sync(arg1 + 0xbe0);
    pcVar4 = *(*(arg1 + 0x40) + 0x48);
    if (pcVar4 != NULL) {
        if (0xe < (pcVar4 + -0x8005e60 >> 3 | pcVar4 << 0x3d)) {
            __cfi_slowpath_diag(0x33d2dab7d229586b,pcVar4,0x80027d0);
        }
        (*pcVar4)(arg1);
    }
    return;
}


// ===== sym.nvme_start_ctrl @ 0x0800ab38 (size 376) =====

void sym.nvme_start_ctrl(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    uint64_t uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    if (*(arg1 + 0x604) != 0) {
        queue_delayed_work_on(0x20,_segment.ehdr,arg1 + 0xa90,*(arg1 + 0x604) * 0xfa >> 1);
    }
    uVar1 = *(arg1 + 0x5f4) & 0x80000b00;
    if (uVar1 != 0) {
        uStack_80 = 0;
        uStack_48 = 0;
        uStack_40 = 0;
        uStack_58 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_70 = 0;
        uStack_78 = 9;
        uStack_50 = CONCAT44(*(arg1 + 0x5f4),0xb) & 0x80000b00ffffffff;
        iVar2 = sym.__nvme_submit_sync_cmd(*(arg1 + 0x48),&uStack_78,&uStack_80,0);
        if (iVar2 != 0) {
            _dev_warn(*(arg1 + 0x460),"Failed to configure AEN (cfg %x)\n",uVar1);
        }
        queue_work_on(0x20,_segment.ehdr,arg1 + 0xa60);
    }
    if (1 < *(arg1 + 0x5a0)) {
        if ((*(arg1 + 4) == 1) && (*(arg1 + 0x70) != 0)) {
            queue_work_on(0x20,_segment.ehdr,arg1 + 0xa30);
        }
        down_read(arg1 + 0x90);
        for (piVar4 = *(arg1 + 0x80); piVar4 != arg1 + 0x80; piVar4 = *piVar4) {
            blk_mq_unquiesce_queue(piVar4[3]);
        }
        up_read(arg1 + 0x90);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_38) {
        iVar3 = __stack_chk_fail();
        *extraout_x18 = sym.nvme_start_queues;
        down_read(iVar3 + 0x90);
        for (piVar4 = *(iVar3 + 0x80); piVar4 != iVar3 + 0x80; piVar4 = *piVar4) {
            blk_mq_unquiesce_queue(piVar4[3]);
        }
        up_read(iVar3 + 0x90);
        return;
    }
    return;
}


// ===== sym.nvme_start_queues @ 0x0800acb0 (size 104) =====

void sym.nvme_start_queues(int64_t arg1)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    down_read(arg1 + 0x90);
    for (piVar1 = *(arg1 + 0x80); piVar1 != arg1 + 0x80; piVar1 = *piVar1) {
        blk_mq_unquiesce_queue(piVar1[3]);
    }
    up_read(arg1 + 0x90);
    return;
}


// ===== sym.nvme_uninit_ctrl @ 0x0800ad18 (size 72) =====

void sym.nvme_uninit_ctrl(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    dev_pm_qos_hide_latency_tolerance(*(arg1 + 0x460));
    cdev_device_del(arg1 + 0x468,*(arg1 + 0x460));
    put_device(*(arg1 + 0x460));
    return;
}


// ===== sym.nvme_init_ctrl @ 0x0800ad60 (size 860) =====

int sym.nvme_init_ctrl(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    uint64_t uVar6;
    int iVar7;
    int64_t iVar8;
    uint uVar9;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = arg1 + 0xc48;
    *(arg1 + 4) = 0;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = *puVar1 & 0xfffffffffffffffe;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    *(arg1 + 0xc) = 0;
    __mutex_init(arg1 + 0x10,"&ctrl->scan_lock",obj.nvme_init_ctrl.__key);
    *(arg1 + 0x80) = arg1 + 0x80;
    *(arg1 + 0x88) = arg1 + 0x80;
    *(arg1 + 0xa20) = 0;
    *(arg1 + 0xa28) = 0;
    __init_rwsem(arg1 + 0x90,"&ctrl->namespaces_rwsem",obj.nvme_init_ctrl.__key);
    *(arg1 + 0x60) = arg2;
    *(arg1 + 0x40) = arg3;
    *(arg1 + 0x6c) = 0xffffffff;
    *(arg1 + 0x610) = arg4;
    *(arg1 + 0xa30) = 0xfffffffe0;
    *(arg1 + 0xa38) = arg1 + 0xa38;
    *(arg1 + 0xa40) = arg1 + 0xa38;
    *(arg1 + 0xa48) = sym.nvme_scan_work.21529633b7289604a80e82acd8b43a39.cfi_jt;
    *(arg1 + 0xa60) = 0xfffffffe0;
    *(arg1 + 0xa68) = arg1 + 0xa68;
    *(arg1 + 0xa70) = arg1 + 0xa68;
    *(arg1 + 0xa78) = sym.nvme_async_event_work.21529633b7289604a80e82acd8b43a39.cfi_jt;
    *(arg1 + 0xbe0) = 0xfffffffe0;
    *(arg1 + 0xbe8) = arg1 + 0xbe8;
    *(arg1 + 0xbf0) = arg1 + 0xbe8;
    *(arg1 + 0xbf8) = sym.nvme_fw_act_work.21529633b7289604a80e82acd8b43a39.cfi_jt;
    *(arg1 + 0x520) = 0xfffffffe0;
    *(arg1 + 0x528) = arg1 + 0x528;
    *(arg1 + 0x530) = arg1 + 0x528;
    *(arg1 + 0x538) = sym.nvme_delete_ctrl_work.21529633b7289604a80e82acd8b43a39.cfi_jt;
    __init_waitqueue_head(arg1 + 0x550,"&ctrl->state_wq",obj.nvme_init_ctrl.__key);
    *(arg1 + 0xa90) = 0xfffffffe0;
    *(arg1 + 0xa98) = arg1 + 0xa98;
    *(arg1 + 0xaa0) = arg1 + 0xa98;
    *(arg1 + 0xaa8) = sym.nvme_keep_alive_work.21529633b7289604a80e82acd8b43a39.cfi_jt;
    init_timer_key(arg1 + 0xac0,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
    *(arg1 + 0xb18) = 0xfffffffe0;
    *(arg1 + 0xb20) = arg1 + 0xb20;
    *(arg1 + 0xb28) = arg1 + 0xb20;
    *(arg1 + 0xb30) = sym.nvme_failfast_work.21529633b7289604a80e82acd8b43a39.cfi_jt;
    init_timer_key(arg1 + 0xb48,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
    *(arg1 + 0xba0) = 0;
    *(arg1 + 0xbd8) = 0;
    *(arg1 + 0xbd0) = 0;
    *(arg1 + 0xbc8) = 0;
    *(arg1 + 0xbc0) = 0;
    *(arg1 + 3000) = 0;
    *(arg1 + 0xbb0) = 0;
    *(arg1 + 0xba8) = 0;
    *(arg1 + 0xba0) = 0x18;
    uVar5 = tpidr_el1;
    iVar8 = __alloc_pages(uVar5,0xcc0,0,0,0);
    *(arg1 + 0xc58) = iVar8;
    if (iVar8 == 0) {
        iVar7 = -0xc;
    }
    else {
        iVar7 = ida_alloc_range(obj.nvme_instance_ida,0,0xffffffff,0xcc0);
        if (-1 < iVar7) {
            iVar8 = arg1 + 0xd0;
            *(arg1 + 0x68) = iVar7;
            device_initialize(iVar8);
            uVar5 = CONCAT44(*0x8000004,_segment.ehdr);
            uVar2 = _segment.ehdr & 0xfff00000;
            *(arg1 + 0x3f8) = obj.nvme_dev_attr_groups;
            *(arg1 + 0x400) = sym.nvme_free_ctrl.21529633b7289604a80e82acd8b43a39.cfi_jt;
            *(arg1 + 0x130) = *(arg1 + 0x60);
            *(arg1 + 0x3f0) = uVar5;
            *(arg1 + 0x460) = iVar8;
            *(arg1 + 0x3d0) = uVar2 | *(arg1 + 0x68);
            *(arg1 + 0x168) = arg1;
            iVar7 = dev_set_name(iVar8,"nvme%d");
            if (iVar7 == 0) {
                get_device(*(arg1 + 0x460));
                cdev_init(arg1 + 0x468,obj.nvme_dev_fops);
                *(arg1 + 0x4c8) = *(arg3 + 8);
                iVar7 = cdev_device_add(arg1 + 0x468,*(arg1 + 0x460));
                uVar6 = *0x8002000;
                if (iVar7 == 0) {
                    *(*(arg1 + 0x460) + 0x240) = sym.nvme_set_latency_tolerance.21529633b7289604a80e82acd8b43a39.cfi_jt;
                    uVar9 = uVar6;
                    if (0x7ffffffe < uVar6) {
                        uVar9 = 0x7fffffff;
                    }
                    dev_pm_qos_update_user_latency_tolerance(*(arg1 + 0x460),uVar9);
                    return 0;
                }
                put_device();
                kfree_const(**(arg1 + 0x460));
            }
            ida_free(obj.nvme_instance_ida,*(arg1 + 0x68));
        }
        if (*(arg1 + 0xc58) != 0) {
            __free_pages(*(arg1 + 0xc58),0);
        }
    }
    return iVar7;
}


// ===== sym.nvme_scan_work @ 0x0800b0bc (size 1036) =====

void sym.nvme_scan_work(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    int64_t iVar6;
    int64_t arg1_00;
    uint uVar7;
    uint64_t *extraout_x8;
    uint64_t *puVar8;
    uint64_t uVar9;
    uint32_t uVar10;
    ulong *in_x18;
    int64_t unaff_x19;
    uint64_t unaff_x22;
    code *unaff_x25;
    ulong unaff_x30;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    uint64_t uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    if ((*(arg1 + -0xa2c) == 1) && (unaff_x19 = arg1 + -0xa30, *(arg1 + -0x9c0) != 0)) {
        uVar7 = 0;
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        uVar2 = *(arg1 + -0x462) & 4;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        *(arg1 + -0x470) = uVar2 << 6;
        *(arg1 + -0x474) = -((uVar2 << 0xd) >> 0xf);
        if (((*(arg1 + -0x462) >> 3 & 1) != 0) && ((*(arg1 + -0x420) >> 9 & 1) == 0)) {
            uVar7 = *(arg1 + -0x480);
        }
        unaff_x22 = 0x10100;
        unaff_x25 = trace_event_reg;
        uVar2 = 0x10100;
        if ((*(arg1 + -0x420) & 2) != 0) {
            uVar2 = 0x10200;
        }
        *(arg1 + -0x46c) = uVar7;
        if ((uVar2 <= *(arg1 + -0x44c)) &&
           (iVar6 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0xdc0,0x1000), iVar6 != 0)) {
            uStack_a8 = CONCAT71(uStack_a8._1_7_,6);
            uStack_80 = CONCAT71(uStack_80._1_7_,6);
            uStack_80 = uStack_80 & 0xffffffffffffff;
            iVar5 = sym.__nvme_submit_sync_cmd(*(arg1 + -0x9e8),&uStack_a8,0,iVar6);
            if (iVar5 == 0) {
                if (*(iVar6 + 3) != 0) {
                    *(arg1 + -0x470) = *(iVar6 + 3);
                }
                if (*(iVar6 + 4) != 0) {
                    *(arg1 + -0x474) = *(iVar6 + 4);
                }
                if (*(iVar6 + 1) != 0) {
                    uVar2 = *(iVar6 + 1) + (*(arg1 + -0x482) & 0xf) + 3;
                    uVar1 = uVar2;
                    if (0x1f < uVar2) {
                        uVar1 = 0;
                    }
                    uVar10 = 1L << (uVar1 & 0x3f);
                    if (uVar10 >> (uVar1 & 0x1f) != 1 || uVar1 != uVar2) {
                        uVar10 = 0xffffffff;
                    }
                    *(arg1 + -0x46c) = uVar10;
                }
                kfree(iVar6);
            }
            else {
                kfree(iVar6);
                if (iVar5 < 0) {
                    _dev_warn(*(arg1 + -0x5d0),"reading non-mdts-limits failed: %d\n",iVar5);
                    goto code_r0x0800b440;
                }
            }
        }
        puVar8 = arg1 + 0x1e0;
        goto code_r0x0800b484;
    }
code_r0x0800b440:
    do {
        iVar6 = sp_el0;
        if (*(iVar6 + 0x5e0) == iStack_68) {
            return;
        }
        __stack_chk_fail();
        puVar8 = extraout_x8;
code_r0x0800b484:
        Hint_Prefetch(puVar8,2,0,1);
        do {
            uVar9 = *puVar8;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar8,0x10);
            if (bVar4) {
                *puVar8 = uVar9 & 0xfffffffffffffffe;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
        if ((uVar9 & 1) != 0) {
            _dev_info(*(unaff_x19 + 0x460),"rescanning namespaces.\n");
            sym.nvme_clear_changed_ns_log(unaff_x19);
        }
        mutex_lock(unaff_x19 + 0x10);
        uVar2 = unaff_x22;
        if ((*(unaff_x19 + 0x610) & 2) != 0) {
            uVar2 = unaff_x22 + 0x100;
        }
        if ((uVar2 <= *(unaff_x19 + 0x5e4)) &&
           (iVar6 = kmem_cache_alloc_trace(*(unaff_x25 + 0x10),0xdc0,0x1000), iVar6 != 0)) {
            unaff_x22 = 0;
            while( true ) {
                uStack_78 = 0;
                uStack_70 = 0;
                uStack_88 = 0;
                uStack_98 = 0;
                uStack_90 = 0;
                uStack_a0 = 0;
                uStack_a8 = CONCAT44(unaff_x22,6);
                uStack_80 = 2;
                iVar5 = sym.__nvme_submit_sync_cmd(*(unaff_x19 + 0x48),&uStack_a8,0,iVar6);
                if (iVar5 != 0) break;
                iVar5 = 0;
                do {
                    uVar2 = *(iVar6 + iVar5 * 4);
                    if (uVar2 == 0) {
                        sym.nvme_remove_invalid_namespaces(unaff_x19,unaff_x22);
                        goto code_r0x0800b3f4;
                    }
                    sym.nvme_validate_or_alloc_ns(unaff_x19,uVar2);
                    uVar1 = unaff_x22 + 1;
                    unaff_x22 = uVar1;
                    uVar9 = unaff_x22;
                    if (uVar1 < uVar2) {
                        do {
                            arg1_00 = sym.nvme_find_get_ns(unaff_x19,uVar9);
                            if (arg1_00 != 0) {
                                sym.nvme_ns_remove(arg1_00);
                                sym.nvme_put_ns(arg1_00);
                            }
                            uVar1 = uVar9 + 1;
                            uVar9 = uVar1;
                            unaff_x22 = uVar2;
                        } while (uVar2 != uVar1);
                    }
                    iVar5 = iVar5 + 1;
                } while (iVar5 != 0x400);
            }
            _dev_warn(*(unaff_x19 + 0x460),"Identify NS List failed (status=0x%x)\n",iVar5);
            kfree(iVar6);
        }
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_a0 = 0;
        uStack_a8 = 6;
        uStack_80 = 1;
        iVar6 = kmem_cache_alloc_trace(*(unaff_x25 + 0x10),0xcc0,0x1000);
        if (iVar6 != 0) {
            iVar5 = sym.__nvme_submit_sync_cmd(*(unaff_x19 + 0x48),&uStack_a8,0,iVar6);
            if (iVar5 == 0) {
                uVar2 = *(iVar6 + 0x204);
                unaff_x22 = uVar2;
                kfree(iVar6);
                if (uVar2 != 0) {
                    uVar9 = 1;
                    do {
                        sym.nvme_validate_or_alloc_ns(unaff_x19,uVar9);
                        uVar1 = uVar9 + 1;
                        uVar9 = uVar1;
                    } while (uVar1 <= uVar2);
                }
                sym.nvme_remove_invalid_namespaces(unaff_x19,uVar2);
            }
            else {
code_r0x0800b3f4:
                kfree(iVar6);
            }
        }
        mutex_unlock(unaff_x19 + 0x10);
    } while( true );
}


// ===== sym.nvme_async_event_work @ 0x0800b4c8 (size 252) =====

void sym.nvme_async_event_work(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    code *pcVar3;
    code *extraout_x8;
    ulong *in_x18;
    ulong unaff_x30;
    int64_t aiStack_38 [3];
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    aiStack_38[2] = *(iVar2 + 0x5e0);
    iVar1 = *(arg1 + -0x468);
    aiStack_38[1] = 0;
    *(arg1 + -0x468) = 0;
    if (iVar1 != 0) {
        aiStack_38[0] = kasprintf(0xcc0,"NVME_AEN=%#08x");
        if (aiStack_38[0] != 0) {
            kobject_uevent_env(*(arg1 + -0x600),2,aiStack_38);
            kfree(aiStack_38[0]);
        }
    }
    if (*(arg1 + -0xa5c) != 1) goto code_r0x0800b568;
    pcVar3 = *(*(arg1 + -0xa20) + 0x38);
    if (0xe < (pcVar3 + -0x8005e60 >> 3 | pcVar3 << 0x3d)) goto code_r0x0800b598;
    while( true ) {
        (*pcVar3)(arg1 + -0xa60);
code_r0x0800b568:
        iVar2 = sp_el0;
        if (*(iVar2 + 0x5e0) == aiStack_38[2]) break;
        __stack_chk_fail();
        pcVar3 = extraout_x8;
code_r0x0800b598:
        __cfi_slowpath_diag(0x33d2dab7d229586b,pcVar3,0x8002810);
    }
    return;
}


// ===== sym.nvme_fw_act_work @ 0x0800b5c4 (size 680) =====

void sym.nvme_fw_act_work(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    int64_t iVar6;
    int64_t *piVar7;
    code *pcVar8;
    int64_t *piVar9;
    ulong unaff_x30;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar1 = _trace_event_ignore_this_pid;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    iVar5 = arg1 + -0xbe0;
    iVar2 = *0x8002000 * 1000;
    if (*(arg1 + -0x644) != 0) {
        iVar2 = *(arg1 + -0x644) * 100;
    }
    iVar3 = __msecs_to_jiffies(iVar2);
    iVar6 = arg1 + -0xb50;
    down_read(iVar6);
    piVar9 = arg1 + -0xb60;
    for (piVar7 = *piVar9; piVar7 != piVar9; piVar7 = *piVar7) {
        blk_mq_quiesce_queue(piVar7[3]);
    }
    up_read(iVar6);
    pcVar8 = *(*(arg1 + -0xba0) + 0x18);
    uStack_98 = uStack_98._4_4_ << 0x20;
    __cfi_slowpath_diag(0x79bc8fe92a26dc5e,pcVar8,0x8002830);
    iVar2 = (*pcVar8)(iVar5,0x1c,&uStack_98);
    if (iVar2 == 0) {
        while (((uStack_98 != 0xffffffff && ((*(arg1 + -0x648) & 1) != 0)) && ((uStack_98 >> 5 & 1) != 0))) {
            if ((iVar3 + iVar1) - _trace_event_ignore_this_pid < 0) {
                _dev_warn(*(arg1 + -0x780),"Fw activation timeout, reset controller\n");
                if (*(arg1 + -0xbdc) == 2) {
                    queue_work_on(0x20,_segment.ehdr,arg1 + -0x6f0);
                }
                goto code_r0x0800b770;
            }
            msleep(100);
            uStack_98 = uStack_98 & 0xffffffff00000000;
            pcVar8 = *(*(arg1 + -0xba0) + 0x18);
            __cfi_slowpath_diag(0x79bc8fe92a26dc5e,pcVar8,0x8002830);
            iVar2 = (*pcVar8)(iVar5,0x1c,&uStack_98);
            if (iVar2 != 0) break;
        }
    }
    uVar4 = sym.nvme_change_ctrl_state(iVar5,1);
    if ((uVar4 & 1) != 0) {
        down_read(iVar6);
        for (piVar7 = *piVar9; piVar7 != piVar9; piVar7 = *piVar7) {
            blk_mq_unquiesce_queue(piVar7[3]);
        }
        up_read(iVar6);
        iVar5 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0xcc0,0x200);
        if (iVar5 != 0) {
            uStack_90 = 0;
            uStack_68 = 0;
            uStack_98 = 0xffffffff00000002;
            uStack_60 = 0;
            uStack_80 = 0;
            uStack_78 = 0;
            uStack_70 = 0x7f0003;
            uStack_88 = 0;
            iVar2 = sym.__nvme_submit_sync_cmd(*(arg1 + -0xb98),&uStack_98,0,iVar5);
            if (iVar2 != 0) {
                _dev_warn(*(arg1 + -0x780),"Get FW SLOT INFO log error\n");
            }
            kfree(iVar5);
        }
    }
code_r0x0800b770:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_58) {
        return;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.nvme_delete_ctrl_work;
    sym.nvme_do_delete_ctrl(iVar5 + -0x520);
    return;
}


// ===== sym.nvme_delete_ctrl_work @ 0x0800b86c (size 40) =====

void sym.nvme_delete_ctrl_work(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.nvme_do_delete_ctrl(arg1 + -0x520);
    return;
}


// ===== sym.nvme_keep_alive_work @ 0x0800b894 (size 432) =====

void sym.nvme_keep_alive_work(int64_t arg1)

{
    code *pcVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    ulong uVar5;
    ulong uVar6;
    uint32_t uVar7;
    int iVar8;
    uint8_t uVar9;
    int64_t *piVar10;
    uint64_t uVar11;
    uint uVar12;
    ulong *puVar13;
    ulong *in_x18;
    char *arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = arg1 + -0xa90;
    if (((*(arg1 + -0x494) >> 6 & 1) == 0) || (*arg1_00 == '\0')) {
        uVar9 = *(arg1 + 0x110);
        if (uVar9 == 0x7f) {
            uVar9 = *(arg1 + 0x114);
        }
        uVar12 = 0x22;
        if ((uVar9 & 1) != 0) {
            uVar12 = 0x23;
        }
        piVar10 = blk_mq_alloc_request(*(arg1 + -0xa48),uVar12,3);
        if (piVar10 < 0xfffffffffffff001) {
            pcVar1 = obj.admin_timeout;
            if (*(*piVar10 + 0x58) != 0) {
                pcVar1 = obj.nvme_io_timeout;
            }
            *(piVar10 + 0xec) = *pcVar1 * 0xfa;
            *(arg1 + 0x111) = *(arg1 + 0x111) & 0x3f;
            uVar7 = *(piVar10 + 3);
            *(piVar10 + 3) = uVar7 | 0x400;
            if (*(piVar10[2] + 300) == 2) {
                *(piVar10 + 3) = uVar7 | 0x1000400;
            }
            *(piVar10 + 0x144) = 0;
            *(piVar10 + 0x141) = 0;
            puVar13 = piVar10[0x26];
            *(piVar10 + 0x1c) = *(piVar10 + 0x1c) | 0x80;
            uVar3 = *(arg1 + 0x128);
            uVar2 = *(arg1 + 0x110);
            uVar4 = *(arg1 + 0x118);
            puVar13[2] = *(arg1 + 0x120);
            puVar13[3] = uVar3;
            puVar13[1] = uVar4;
            uVar3 = *(arg1 + 0x140);
            uVar5 = *(arg1 + 0x148);
            uVar4 = *(arg1 + 0x130);
            uVar6 = *(arg1 + 0x138);
            *puVar13 = uVar2;
            puVar13[6] = uVar3;
            puVar13[7] = uVar5;
            puVar13[4] = uVar4;
            puVar13[5] = uVar6;
            iVar8 = *(arg1 + -0x48c);
            piVar10[0x24] = arg1_00;
            *(piVar10 + 0xec) = iVar8 * 0xfa;
            blk_execute_rq_nowait(0,piVar10,0,sym.nvme_keep_alive_end_io.21529633b7289604a80e82acd8b43a39.cfi_jt);
        }
        else {
            _dev_err(*(arg1 + -0x630),"keep-alive failed: %ld\n");
            uVar11 = sym.nvme_change_ctrl_state(arg1_00,2);
            if ((uVar11 & 1) != 0) {
                queue_work_on(0x20,_segment.ehdr,arg1 + -0x5a0);
            }
        }
    }
    else {
        *arg1_00 = '\0';
        queue_delayed_work_on(0x20,_segment.ehdr,arg1,*(arg1 + -0x48c) * 0xfa >> 1);
    }
    return;
}


// ===== sym.nvme_failfast_work @ 0x0800ba44 (size 128) =====

void sym.nvme_failfast_work(int64_t arg1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + -0xb14) == 3) {
        puVar1 = arg1 + 0x130;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 | 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        _dev_info(*(arg1 + -0x6b8),"failfast expired\n");
    }
    return;
}


// ===== sym.nvme_free_ctrl @ 0x0800bac4 (size 428) =====

void sym.nvme_free_ctrl(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int *arg1_00;
    code *pcVar5;
    ulong unaff_x30;
    uchar auVar6 [12];
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    arg1_00 = *(arg1 + 0x498);
    if ((arg1_00 == NULL) || (*(arg1 + -0x68) != *arg1_00)) {
        ida_free(obj.nvme_instance_ida);
    }
    iVar4 = arg1 + 0x950;
    uStack_40 = 0;
    iVar1 = xa_find(iVar4,&uStack_40,0xffffffffffffffff,8);
    while (iVar1 != 0) {
        xa_erase(iVar4,uStack_40);
        kfree(iVar1);
        iVar1 = xa_find_after(iVar4,&uStack_40,0xffffffffffffffff,8);
    }
    xa_destroy(iVar4);
    __free_pages(*(arg1 + 0xb88),0);
    if (arg1_00 != NULL) {
        mutex_lock(obj.nvme_subsystems_lock);
        uVar2 = __list_del_entry_valid(arg1 + 0x4a0);
        if ((uVar2 & 1) != 0) {
            piVar3 = *(arg1 + 0x4a8);
            iVar4 = *(arg1 + 0x4a0);
            *(iVar4 + 8) = piVar3;
            *piVar3 = iVar4;
        }
        *(arg1 + 0x4a0) = 0xdead000000000100;
        *(arg1 + 0x4a8) = 0xdead000000000122;
        iVar4 = (*(arg1 + 0x390))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(arg1 + 0x390);
        }
        sysfs_remove_link(arg1_00 + 2,iVar4);
        mutex_unlock(obj.nvme_subsystems_lock);
    }
    pcVar5 = *(*(arg1 + -0x90) + 0x30);
    if (0xe < (pcVar5 + -0x8005e60 >> 3 | pcVar5 << 0x3d)) {
        __cfi_slowpath_diag(0x33d2dab7d229586b,pcVar5,0x8002890);
    }
    (*pcVar5)(arg1 + -0xd0);
    if (arg1_00 != NULL) {
        sym.nvme_put_subsystem(arg1_00);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    auVar6 = __stack_chk_fail();
    *extraout_x18 = sym.nvme_set_latency_tolerance;
    iVar1 = *(auVar6._0_8_ + 0x98);
    iVar4 = -1;
    if ((auVar6._8_4_ | 0x80000000) != 0xffffffff) {
        iVar4 = auVar6._8_4_;
    }
    if ((*(iVar1 + 0xc18) != iVar4) && (*(iVar1 + 0xc18) = iVar4, *(iVar1 + 4) == 1)) {
        sym.nvme_configure_apst(iVar1);
    }
    return;
}


// ===== sym.nvme_set_latency_tolerance @ 0x0800bc70 (size 88) =====

void sym.nvme_set_latency_tolerance(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t arg1_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x98);
    iVar1 = -1;
    if ((arg2 | 0x80000000) != 0xffffffff) {
        iVar1 = arg2;
    }
    if ((*(arg1_00 + 0xc18) != iVar1) && (*(arg1_00 + 0xc18) = iVar1, *(arg1_00 + 4) == 1)) {
        sym.nvme_configure_apst(arg1_00);
    }
    return;
}


// ===== sym.nvme_unfreeze @ 0x0800bcc8 (size 104) =====

void sym.nvme_unfreeze(int64_t arg1)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    down_read(arg1 + 0x90);
    for (piVar1 = *(arg1 + 0x80); piVar1 != arg1 + 0x80; piVar1 = *piVar1) {
        blk_mq_unfreeze_queue(piVar1[3]);
    }
    up_read(arg1 + 0x90);
    return;
}


// ===== sym.nvme_wait_freeze_timeout @ 0x0800bd30 (size 128) =====

uint64_t sym.nvme_wait_freeze_timeout(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    down_read(arg1 + 0x90);
    for (piVar2 = *(arg1 + 0x80); piVar2 != arg1 + 0x80; piVar2 = *piVar2) {
        iVar1 = blk_mq_freeze_queue_wait_timeout(piVar2[3],arg2);
        arg2 = iVar1;
        if (iVar1 < 1) break;
    }
    up_read(arg1 + 0x90);
    return arg2 & 0xffffffff;
}


// ===== sym.nvme_wait_freeze @ 0x0800bdb0 (size 104) =====

void sym.nvme_wait_freeze(int64_t arg1)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    down_read(arg1 + 0x90);
    for (piVar1 = *(arg1 + 0x80); piVar1 != arg1 + 0x80; piVar1 = *piVar1) {
        blk_mq_freeze_queue_wait(piVar1[3]);
    }
    up_read(arg1 + 0x90);
    return;
}


// ===== sym.nvme_start_freeze @ 0x0800be18 (size 104) =====

void sym.nvme_start_freeze(int64_t arg1)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    down_read(arg1 + 0x90);
    for (piVar1 = *(arg1 + 0x80); piVar1 != arg1 + 0x80; piVar1 = *piVar1) {
        blk_freeze_queue_start(piVar1[3]);
    }
    up_read(arg1 + 0x90);
    return;
}


// ===== sym.nvme_stop_queues @ 0x0800be80 (size 104) =====

void sym.nvme_stop_queues(int64_t arg1)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    down_read(arg1 + 0x90);
    for (piVar1 = *(arg1 + 0x80); piVar1 != arg1 + 0x80; piVar1 = *piVar1) {
        blk_mq_quiesce_queue(piVar1[3]);
    }
    up_read(arg1 + 0x90);
    return;
}


// ===== sym.nvme_sync_io_queues @ 0x0800bee8 (size 104) =====

void sym.nvme_sync_io_queues(int64_t arg1)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    down_read(arg1 + 0x90);
    for (piVar1 = *(arg1 + 0x80); piVar1 != arg1 + 0x80; piVar1 = *piVar1) {
        blk_sync_queue(piVar1[3]);
    }
    up_read(arg1 + 0x90);
    return;
}


// ===== sym.nvme_sync_queues @ 0x0800bf50 (size 120) =====

void sym.nvme_sync_queues(int64_t arg1)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    down_read(arg1 + 0x90);
    for (piVar1 = *(arg1 + 0x80); piVar1 != arg1 + 0x80; piVar1 = *piVar1) {
        blk_sync_queue(piVar1[3]);
    }
    up_read(arg1 + 0x90);
    if (*(arg1 + 0x48) != 0) {
        blk_sync_queue();
    }
    return;
}


// ===== sym.nvme_ctrl_from_file @ 0x0800bfc8 (size 48) =====

ulong sym.nvme_ctrl_from_file(int64_t arg1)

{
    if (*(arg1 + 0x28) != obj.nvme_dev_fops) {
        return 0;
    }
    return *(arg1 + 0xd8);
}


// ===== sym.trace_raw_output_nvme_setup_cmd @ 0x0800bff8 (size 348) =====

void sym.trace_raw_output_nvme_setup_cmd(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t arg1_00;
    uint uVar1;
    uint uVar2;
    uchar uVar3;
    uchar uVar4;
    uint8_t uVar5;
    ushort uVar6;
    int iVar7;
    ulong uVar8;
    ulong uVar9;
    ulong uVar10;
    char cVar11;
    code *pcVar12;
    ulong *in_x18;
    int64_t iVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar13 = *(arg1 + 0x20e8);
    iVar7 = trace_raw_output_prep(arg1,arg2);
    if (iVar7 == 1) {
        arg1_00 = arg1 + 0x88;
        uVar1 = *(iVar13 + 0x28);
        uVar8 = sym.nvme_trace_disk_name(arg1_00,iVar13 + 8);
        cVar11 = *(iVar13 + 0x30);
        iVar7 = *(iVar13 + 0x2c);
        uVar6 = *(iVar13 + 0x34);
        uVar2 = *(iVar13 + 0x38);
        uVar3 = *(iVar13 + 0x31);
        uVar4 = *(iVar13 + 0x3c);
        if (cVar11 == '\x7f') {
            cVar11 = *(iVar13 + 0x32);
            pcVar12 = obj.trace_raw_output_nvme_setup_cmd.symbols;
        }
        else if (iVar7 == 0) {
            pcVar12 = obj.trace_raw_output_nvme_setup_cmd.symbols.48;
        }
        else {
            pcVar12 = obj.trace_raw_output_nvme_setup_cmd.symbols.33;
        }
        uVar9 = trace_print_symbols_seq(arg1_00,cVar11,pcVar12);
        uVar5 = *(iVar13 + 0x30);
        if (uVar5 == 0x7f) {
            uVar10 = sym.nvme_trace_parse_fabrics_cmd(arg1_00,*(iVar13 + 0x32),iVar13 + 0x3d);
        }
        else if (*(iVar13 + 0x2c) == 0) {
            uVar10 = sym.nvme_trace_parse_admin_cmd(arg1_00,uVar5,iVar13 + 0x3d);
        }
        else {
            uVar10 = sym.nvme_trace_parse_nvm_cmd(arg1_00,uVar5,iVar13 + 0x3d);
        }
        trace_event_printf(arg1,"nvme%d: %sqid=%d, cmdid=%u, nsid=%u, flags=0x%x, meta=0x%x, cmd=(%s %s)\n",uVar1,
                           uVar8,iVar7,uVar6,uVar2,uVar3,uVar4,uVar9,uVar10);
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_nvme_complete_rq @ 0x0800c154 (size 164) =====

void sym.trace_raw_output_nvme_complete_rq(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint uVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x20e8);
    iVar2 = trace_raw_output_prep(arg1,arg2);
    if (iVar2 == 1) {
        uVar1 = *(iVar4 + 0x28);
        uVar3 = sym.nvme_trace_disk_name(arg1 + 0x88,iVar4 + 8);
        trace_event_printf(arg1,"nvme%d: %sqid=%d, cmdid=%u, res=%#llx, retries=%u, flags=0x%x, status=%#x\n",uVar1,
                           uVar3,*(iVar4 + 0x2c),*(iVar4 + 0x30),*(iVar4 + 0x38),*(iVar4 + 0x40),*(iVar4 + 0x41),
                           *(iVar4 + 0x42));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_nvme_async_event @ 0x0800c1f8 (size 140) =====

void sym.trace_raw_output_nvme_async_event(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint uVar1;
    uint uVar2;
    int iVar3;
    ulong uVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + 0x20e8);
    iVar3 = trace_raw_output_prep(arg1,arg2);
    if (iVar3 == 1) {
        uVar1 = *(iVar5 + 8);
        uVar2 = *(iVar5 + 0xc);
        uVar4 = trace_print_symbols_seq(arg1 + 0x88,uVar2,obj.trace_raw_output_nvme_async_event.symbols);
        trace_event_printf(arg1,"nvme%d: NVME_AEN=%#08x [%s]\n",uVar1,uVar2,uVar4);
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_nvme_sq @ 0x0800c284 (size 140) =====

void sym.trace_raw_output_nvme_sq(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint uVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x20e8);
    iVar2 = trace_raw_output_prep(arg1,arg2);
    if (iVar2 == 1) {
        uVar1 = *(iVar4 + 8);
        uVar3 = sym.nvme_trace_disk_name(arg1 + 0x88,iVar4 + 0xc);
        trace_event_printf(arg1,"nvme%d: %sqid=%d, head=%u, tail=%u\n",uVar1,uVar3,*(iVar4 + 0x2c),*(iVar4 + 0x30)
                           ,*(iVar4 + 0x32));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.nvme_error_status @ 0x0800c310 (size 340) =====

ulong sym.nvme_error_status(int64_t arg1)

{
    uint32_t uVar1;
    ulong uVar2;
    
    uVar1 = arg1 & 0x7ff;
    if (uVar1 < 0x1bd) {
        if (uVar1 < 0x22) {
            uVar2 = 0;
    //switch table (33 cases) at 0x8003e88
            switch(*(uVar1 + 0x8003e88) * 4 + 0x800c3ac) {
            case 0x800c3b0:
                return 1;
            case 0x800c3e8:
                goto code_r0x0800c3e8;
            case 0x800c460:
                goto code_r0x0800c460;
            }
        }
        else {
            if (uVar1 - 0x80 < 4) {
    //switch table (3 cases) at 0x8003eaa
                switch(*((uVar1 - 0x80) + 0x8003eaa) * 4 + 0x800c3e4) {
                case 0x800c428:
                    return 3;
                case 0x800c438:
                    return 6;
                }
code_r0x0800c3e8:
                return 5;
            }
            if (uVar1 - 0x180 < 4) {
    //switch table (3 cases) at 0x8003eae
                switch(*((uVar1 - 0x180) + 0x8003eae) * 4 + 0x800c380) {
                case 0x800c384:
                    return 7;
                case 0x800c3b0:
                    return 1;
                case 0x800c3c0:
                    return 8;
                }
            }
        }
    }
    else if (uVar1 < 0x280) {
        if (uVar1 == 0x1bd) {
            return 0x10;
        }
        if (uVar1 == 0x1be) {
            return 0xf;
        }
    }
    else {
        if (uVar1 - 0x280 < 8) {
            if ((1 << (uVar1 - 0x280 & 0x1f) & 0xe3U) != 0) {
                return 7;
            }
            return 8;
        }
        if (uVar1 == 0x370) {
            return 4;
        }
    }
    uVar2 = 10;
code_r0x0800c460:
    return uVar2;
}


// ===== sym.nvme_put_subsystem @ 0x0800c464 (size 244) =====

void sym.nvme_put_subsystem(int64_t arg1)

{
    int *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int iVar4;
    char cVar5;
    bool bVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = arg1 + 0x398;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        iVar4 = *piVar1;
        cVar5 = '\x01';
        bVar6 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
            *piVar1 = iVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
        }
    } while (cVar5 != '\0');
    if (iVar4 == 1) {
        DataMemoryBarrier(2,1);
        mutex_lock(obj.nvme_subsystems_lock);
        uVar7 = __list_del_entry_valid(arg1 + 0x3a0);
        if ((uVar7 & 1) != 0) {
            iVar2 = *(arg1 + 0x3a0);
            piVar3 = *(arg1 + 0x3a8);
            *(iVar2 + 8) = piVar3;
            *piVar3 = iVar2;
        }
        *(arg1 + 0x3a0) = 0xdead000000000100;
        *(arg1 + 0x3a8) = 0xdead000000000122;
        mutex_unlock(obj.nvme_subsystems_lock);
        ida_destroy(arg1 + 0x528);
        device_del(arg1 + 8);
        put_device(arg1 + 8);
    }
    else if (iVar4 < 1) {
        refcount_warn_saturate(piVar1,3);
    }
    return;
}


// ===== sym.nvme_destroy_subsystem @ 0x0800c558 (size 140) =====

void sym.nvme_destroy_subsystem(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.nvme_subsystems_lock);
    uVar3 = __list_del_entry_valid(arg1 + 8);
    if ((uVar3 & 1) != 0) {
        iVar1 = *(arg1 + 8);
        piVar2 = *(arg1 + 0x10);
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    *(arg1 + 8) = 0xdead000000000100;
    *(arg1 + 0x10) = 0xdead000000000122;
    mutex_unlock(obj.nvme_subsystems_lock);
    ida_destroy(arg1 + 400);
    device_del(arg1 + -0x390);
    put_device(arg1 + -0x390);
    return;
}


// ===== sym.nvme_remove_invalid_namespaces @ 0x0800c5e4 (size 296) =====

int64_t ***** sym.nvme_remove_invalid_namespaces(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t ****ppppiVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t *****pppppiVar6;
    uint32_t uVar7;
    int64_t ****ppppiVar8;
    int64_t iVar9;
    ulong uVar10;
    int64_t *****in_x2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t *****pppppiVar11;
    int64_t *****pppppiVar12;
    int64_t *****pppppiVar13;
    uint64_t uVar14;
    int64_t *****unaff_x23;
    ulong unaff_x30;
    uchar auVar15 [16];
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    int64_t iStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    int64_t ****ppppiStack_a0;
    int64_t ****ppppiStack_98;
    int64_t ****ppppiStack_90;
    int64_t iStack_88;
    int64_t ****ppppiStack_80;
    int64_t ****ppppiStack_78;
    int64_t ****ppppiStack_68;
    int64_t ****ppppiStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iVar9 = arg1 + 0x90;
    iStack_58 = *(iVar1 + 0x5e0);
    pppppiVar11 = arg2 & 0xffffffff;
    ppppiStack_68 = &ppppiStack_68;
    ppppiStack_60 = &ppppiStack_68;
    down_write(iVar9);
    pppppiVar12 = arg1 + 0x80;
    pppppiVar13 = *pppppiVar12;
    while (pppppiVar6 = pppppiVar13, pppppiVar6 != pppppiVar12) {
        pppppiVar13 = *pppppiVar6;
        if ((arg2 < *(pppppiVar6[8] + 0x5a)) || ((pppppiVar6[0xc] >> 1 & 1) != 0)) {
            uVar14 = __list_del_entry_valid(pppppiVar6);
            unaff_x23 = ppppiStack_60;
            if ((uVar14 & 1) != 0) {
                ppppiVar8 = *pppppiVar6;
                ppppiVar2 = pppppiVar6[1];
                ppppiVar8[1] = ppppiVar2;
                *ppppiVar2 = ppppiVar8;
            }
            in_x2 = &ppppiStack_68;
            uVar14 = __list_add_valid(pppppiVar6,ppppiStack_60);
            if ((uVar14 & 1) != 0) {
                *pppppiVar6 = &ppppiStack_68;
                pppppiVar6[1] = unaff_x23;
                ppppiStack_60 = pppppiVar6;
                *unaff_x23 = pppppiVar6;
            }
        }
    }
    up_write(iVar9);
    pppppiVar13 = ppppiStack_68;
    if (ppppiStack_68 != &ppppiStack_68) {
        pppppiVar11 = &ppppiStack_68;
        pppppiVar12 = ppppiStack_68;
        do {
            pppppiVar13 = *pppppiVar12;
            sym.nvme_ns_remove(pppppiVar12);
            pppppiVar12 = pppppiVar13;
        } while (pppppiVar13 != pppppiVar11);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_58) {
        return pppppiVar13;
    }
    auVar15 = __stack_chk_fail();
    *extraout_x18 = sym.nvme_get_effects_log;
    pcStack_a8 = sym.nvme_get_effects_log;
    iVar5 = sp_el0;
    iVar1 = auVar15._0_8_ + 0xa20;
    uVar14 = auVar15._8_8_ & 0xff;
    iStack_b8 = *(iVar5 + 0x5e0);
    puStack_b0 = &stack0xffffffffffffffb0;
    ppppiStack_a0 = &ppppiStack_68;
    ppppiStack_98 = unaff_x23;
    ppppiStack_90 = pppppiVar6;
    iStack_88 = iVar9;
    ppppiStack_80 = pppppiVar12;
    ppppiStack_78 = pppppiVar11;
    ppppiVar8 = xa_load(iVar1,uVar14);
    if (ppppiVar8 == NULL) {
        ppppiVar8 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0xdc0,0x1000);
        if (ppppiVar8 == NULL) {
            uVar7 = 0xfffffff4;
            goto code_r0x0800c768;
        }
        uStack_f0 = 0;
        uStack_d8 = 0;
        uStack_f8 = 2;
        uStack_c8 = 0;
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_d0 = 0x3ff0005;
        iStack_c0 = (auVar15._8_8_ & 0xff) << 0x18;
        uVar7 = sym.__nvme_submit_sync_cmd(*(auVar15._0_8_ + 0x48),&uStack_f8,0,ppppiVar8);
        if (uVar7 != 0) {
            kfree(ppppiVar8);
            goto code_r0x0800c768;
        }
        xa_store(iVar1,uVar14,ppppiVar8,0xcc0);
    }
    uVar7 = 0;
    *in_x2 = ppppiVar8;
code_r0x0800c768:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_b8) {
        auVar15 = __stack_chk_fail();
        uVar10 = auVar15._8_8_;
        iVar9 = auVar15._0_8_;
        *extraout_x18_00 = sym.nvme_set_queue_limits;
        uVar3 = *(iVar9 + 0x5e0);
        if (*(iVar9 + 0x5b0) != 0) {
            uVar7 = *(iVar9 + 0x5b4);
            uVar4 = *(iVar9 + 0x5b0) >> 3;
            if (uVar4 + 1 < uVar7 || uVar7 == 0) {
                uVar7 = uVar4 + 1;
            }
            blk_queue_max_hw_sectors(uVar10);
            if (0xfffe < uVar7) {
                uVar7 = 0xffff;
            }
            blk_queue_max_segments(uVar10,uVar7);
        }
        uVar3 = uVar3 & 1;
        blk_queue_virt_boundary(uVar10,0xfff);
        blk_queue_dma_alignment(uVar10,3);
        pppppiVar11 = blk_queue_write_cache(uVar10,uVar3,uVar3);
        return pppppiVar11;
    }
    return uVar7;
}


// ===== sym.nvme_get_effects_log @ 0x0800c70c (size 316) =====

uint64_t sym.nvme_get_effects_log(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar7 [16];
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    iVar4 = xa_load(arg1 + 0xa20,arg2 & 0xffU);
    if (iVar4 == 0) {
        iVar4 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0xdc0,0x1000);
        if (iVar4 == 0) {
            uVar3 = 0xfffffff4;
            goto code_r0x0800c768;
        }
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_88 = 2;
        uStack_58 = 0;
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_60 = 0x3ff0005;
        iStack_50 = (arg2 & 0xffU) << 0x18;
        uVar3 = sym.__nvme_submit_sync_cmd(*(arg1 + 0x48),&uStack_88,0,iVar4);
        if (uVar3 != 0) {
            kfree(iVar4);
            goto code_r0x0800c768;
        }
        xa_store(arg1 + 0xa20,arg2 & 0xffU,iVar4,0xcc0);
    }
    uVar3 = 0;
    *arg3 = iVar4;
code_r0x0800c768:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return uVar3;
    }
    auVar7 = __stack_chk_fail();
    uVar6 = auVar7._8_8_;
    iVar4 = auVar7._0_8_;
    *extraout_x18 = sym.nvme_set_queue_limits;
    uVar1 = *(iVar4 + 0x5e0);
    if (*(iVar4 + 0x5b0) != 0) {
        uVar3 = *(iVar4 + 0x5b4);
        uVar2 = *(iVar4 + 0x5b0) >> 3;
        if (uVar2 + 1 < uVar3 || uVar3 == 0) {
            uVar3 = uVar2 + 1;
        }
        blk_queue_max_hw_sectors(uVar6);
        if (0xfffe < uVar3) {
            uVar3 = 0xffff;
        }
        blk_queue_max_segments(uVar6,uVar3);
    }
    uVar1 = uVar1 & 1;
    blk_queue_virt_boundary(uVar6,0xfff);
    blk_queue_dma_alignment(uVar6,3);
    uVar5 = blk_queue_write_cache(uVar6,uVar1,uVar1);
    return uVar5;
}


// ===== sym.nvme_set_queue_limits @ 0x0800c848 (size 160) =====

void sym.nvme_set_queue_limits(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(arg1 + 0x5e0);
    if (*(arg1 + 0x5b0) != 0) {
        uVar1 = *(arg1 + 0x5b4);
        uVar3 = *(arg1 + 0x5b0) >> 3;
        if (uVar3 + 1 < uVar1 || uVar1 == 0) {
            uVar1 = uVar3 + 1;
        }
        blk_queue_max_hw_sectors(arg2);
        if (0xfffe < uVar1) {
            uVar1 = 0xffff;
        }
        blk_queue_max_segments(arg2,uVar1);
    }
    uVar2 = uVar2 & 1;
    blk_queue_virt_boundary(arg2,0xfff);
    blk_queue_dma_alignment(arg2,3);
    blk_queue_write_cache(arg2,uVar2,uVar2);
    return;
}


// ===== sym.nvme_release_subsystem @ 0x0800c8e8 (size 72) =====

void sym.nvme_release_subsystem(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (-1 < *(arg1 + -8)) {
        ida_free(obj.nvme_instance_ida);
    }
    kfree(arg1 + -8);
    return;
}


// ===== sym.__nvme_find_get_subsystem @ 0x0800c930 (size 300) =====

code * sym.__nvme_find_get_subsystem(int64_t arg1)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    code *pcVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    code *pcVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = strcmp(arg1,"nqn.2014-08.org.nvmexpress.discovery");
    if ((iVar4 != 0) && (pcVar8 = *0x8002000, *0x8002000 != obj.nvme_subsystems)) {
        do {
            iVar4 = strcmp(pcVar8 + 0x60,arg1);
            if (iVar4 == 0) {
                pcVar5 = pcVar8 + -8;
                uVar7 = *pcVar5;
                if (uVar7 == 0) {
                    uVar6 = 0;
                }
                else {
                    do {
                        uVar6 = uVar7;
                        Hint_Prefetch(pcVar5,2,0,1);
                        do {
                            uVar1 = *pcVar5;
                            uVar7 = uVar1;
                            if (uVar1 != uVar6) break;
                            cVar2 = '\x01';
                            bVar3 = ExclusiveMonitorPass(pcVar5,0x10);
                            if (bVar3) {
                                *pcVar5 = uVar6 + 1;
                                cVar2 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar2 != '\0');
                    } while ((uVar6 != uVar1) && (uVar6 = 0, uVar1 != 0));
                }
                if ((uVar6 + 1 | uVar6) < 0) {
                    refcount_warn_saturate(pcVar5,0);
                }
                if (uVar6 != 0) {
                    return pcVar8 + -0x3a0;
                }
            }
            pcVar8 = *pcVar8;
        } while (pcVar8 != obj.nvme_subsystems);
    }
    return NULL;
}


// ===== sym.subsys_model_show @ 0x0800ca5c (size 60) =====

int64_t sym.subsys_model_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,"%.*s\n",0x28,arg1 + 0x4eb);
    return iVar1;
}


// ===== sym.subsys_serial_show @ 0x0800ca98 (size 60) =====

int64_t sym.subsys_serial_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,"%.*s\n",0x14,arg1 + 0x4d7);
    return iVar1;
}


// ===== sym.subsys_firmware_rev_show @ 0x0800cad4 (size 60) =====

int64_t sym.subsys_firmware_rev_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,"%.*s\n",8,arg1 + 0x513);
    return iVar1;
}


// ===== sym.nvme_subsys_show_nqn @ 0x0800cb10 (size 60) =====

int64_t sym.nvme_subsys_show_nqn(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,0x8003d42,arg1 + 0x3f8);
    return iVar1;
}


// ===== sym.nvme_ns_id_attrs_are_visible @ 0x0800cb4c (size 224) =====

ushort sym.nvme_ns_id_attrs_are_visible(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    int64_t *piVar2;
    
    *in_x18 = unaff_x30;
    piVar2 = *(arg1 + 0x3b0) + 0x58;
    if (*(*(arg1 + 0x3b0) + 0x48) == obj.nvme_bdev_ops) {
        piVar2 = *piVar2 + 0x40;
    }
    iVar1 = *piVar2;
    if (arg2 == obj.dev_attr_uuid) {
        if (*(iVar1 + 0x2ec) != _uuid_null || *(iVar1 + 0x2f4) != _try_module_get) goto code_r0x0800cc14;
    }
    else if (arg2 != obj.dev_attr_nguid) {
        if ((arg2 == obj.dev_attr_eui) && (iVar1 = memchr_inv(iVar1 + 0x2d4,0,8), iVar1 == 0)) {
            return 0;
        }
        goto code_r0x0800cc14;
    }
    iVar1 = memchr_inv(iVar1 + 0x2dc,0,0x10);
    if (iVar1 == 0) {
        return 0;
    }
code_r0x0800cc14:
    return *(arg2 + 8);
}


// ===== sym.nvme_open @ 0x0800cc2c (size 44) =====

void sym.nvme_open(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.nvme_ns_open(*(*(arg1 + 0x3f0) + 0x58));
    return;
}


// ===== sym.nvme_release @ 0x0800cc58 (size 68) =====

void sym.nvme_release(int64_t arg1)

{
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x58);
    module_put(*(*(*(arg1_00 + 0x10) + 0x40) + 8));
    sym.nvme_put_ns(arg1_00);
    return;
}


// ===== sym.nvme_ns_open @ 0x0800cc9c (size 240) =====

ulong sym.nvme_ns_open(uint32_t arg1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    uint64_t arg1_00;
    uint32_t uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    arg1_00 = arg1;
    *in_x18 = unaff_x30;
    puVar1 = arg1_00 + 0x38;
    uVar6 = *puVar1;
    if (uVar6 == 0) {
        uVar5 = 0;
    }
    else {
        do {
            uVar5 = uVar6;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar6 = uVar2;
                if (uVar2 != uVar5) break;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar5 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
        } while ((uVar5 != uVar2) && (uVar5 = 0, uVar2 != 0));
    }
    if ((uVar5 + 1 | uVar5) < 0) {
        refcount_warn_saturate(puVar1,0);
    }
    if (uVar5 != 0) {
        uVar6 = try_module_get(*(*(*(arg1_00 + 0x10) + 0x40) + 8));
        if ((uVar6 & 1) != 0) {
            return 0;
        }
        sym.nvme_put_ns(arg1_00);
    }
    return 0xfffffffa;
}


// ===== sym.uuid_show @ 0x0800cd8c (size 208) =====

int64_t sym.uuid_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    
    *in_x18 = unaff_x30;
    piVar2 = *(arg1 + 0x3b0) + 0x58;
    if (*(*(arg1 + 0x3b0) + 0x48) == obj.nvme_bdev_ops) {
        piVar2 = *piVar2 + 0x40;
    }
    iVar3 = *piVar2;
    piVar2 = iVar3 + 0x2ec;
    if (*piVar2 == _uuid_null && *(iVar3 + 0x2f4) == _try_module_get) {
        iVar1 = ___ratelimit(obj.uuid_show._rs,"uuid_show");
        noname_1 = extraout_q0;
        if (iVar1 != 0) {
            noname_1 = _dev_warn(arg1,"No UUID available providing old NGUID\n");
        }
        piVar2 = iVar3 + 0x2dc;
    }
    iVar1 = sysfs_emit(noname_1,arg2,"%pU\n",piVar2);
    return iVar1;
}


// ===== sym.nguid_show @ 0x0800ce5c (size 100) =====

int64_t sym.nguid_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *(arg1 + 0x3b0) + 0x58;
    if (*(*(arg1 + 0x3b0) + 0x48) == obj.nvme_bdev_ops) {
        piVar2 = *piVar2 + 0x40;
    }
    iVar1 = sysfs_emit(arg2,"%pU\n",*piVar2 + 0x2dc);
    return iVar1;
}


// ===== sym.eui_show @ 0x0800cec0 (size 100) =====

int64_t sym.eui_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *(arg1 + 0x3b0) + 0x58;
    if (*(*(arg1 + 0x3b0) + 0x48) == obj.nvme_bdev_ops) {
        piVar2 = *piVar2 + 0x40;
    }
    iVar1 = sysfs_emit(arg2,"%8ph\n",*piVar2 + 0x2d4);
    return iVar1;
}


// ===== sym.wwid_show @ 0x0800cf24 (size 800) =====

int64_t sym.wwid_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uchar uVar1;
    int iVar2;
    int64_t iVar3;
    char *pcVar4;
    int64_t *piVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    
    *in_x18 = unaff_x30;
    piVar5 = *(arg1 + 0x3b0) + 0x58;
    if (*(*(arg1 + 0x3b0) + 0x48) == obj.nvme_bdev_ops) {
        piVar5 = *piVar5 + 0x40;
    }
    iVar7 = *piVar5;
    piVar5 = iVar7 + 0x2ec;
    if (*piVar5 == _uuid_null && *(iVar7 + 0x2f4) == _try_module_get) {
        piVar5 = iVar7 + 0x2dc;
        iVar8 = *(iVar7 + 0x2c8);
        iVar3 = memchr_inv(piVar5,0,0x10);
        if (iVar3 == 0) {
            piVar5 = iVar7 + 0x2d4;
            iVar3 = memchr_inv(piVar5,0,8);
            if (iVar3 == 0) {
                if ((*(iVar8 + 0x4f2) | 0x20) == 0x20) {
                    if ((*(iVar8 + 0x4f1) | 0x20) == 0x20) {
                        if ((*(iVar8 + 0x4f0) | 0x20) == 0x20) {
                            if ((*(iVar8 + 0x4ef) | 0x20) == 0x20) {
                                if ((*(iVar8 + 0x4ee) | 0x20) == 0x20) {
                                    if ((*(iVar8 + 0x4ed) | 0x20) == 0x20) {
                                        if ((*(iVar8 + 0x4ec) | 0x20) == 0x20) {
                                            if ((*(iVar8 + 0x4eb) | 0x20) == 0x20) {
                                                if ((*(iVar8 + 0x4ea) | 0x20) == 0x20) {
                                                    if ((*(iVar8 + 0x4e9) | 0x20) == 0x20) {
                                                        if ((*(iVar8 + 0x4e8) | 0x20) == 0x20) {
                                                            if ((*(iVar8 + 0x4e7) | 0x20) == 0x20) {
                                                                if ((*(iVar8 + 0x4e6) | 0x20) == 0x20) {
                                                                    if ((*(iVar8 + 0x4e5) | 0x20) == 0x20) {
                                                                        if ((*(iVar8 + 0x4e4) | 0x20) == 0x20) {
                                                                            if ((*(iVar8 + 0x4e3) | 0x20) == 0x20) {
                                                                                if ((*(iVar8 + 0x4e2) | 0x20) == 0x20) {
                                                                                    if ((*(iVar8 + 0x4e1) | 0x20) ==
                                                                                        0x20) {
                                                                                        if ((*(iVar8 + 0x4e0) | 0x20) ==
                                                                                            0x20) {
                                                                                            uVar1 = (*(iVar8 + 0x4df) &
                                                                                                    0xdf) != 0;
                                                                                        }
                                                                                        else {
                                                                                            uVar1 = 2;
                                                                                        }
                                                                                    }
                                                                                    else {
                                                                                        uVar1 = 3;
                                                                                    }
                                                                                }
                                                                                else {
                                                                                    uVar1 = 4;
                                                                                }
                                                                            }
                                                                            else {
                                                                                uVar1 = 5;
                                                                            }
                                                                        }
                                                                        else {
                                                                            uVar1 = 6;
                                                                        }
                                                                    }
                                                                    else {
                                                                        uVar1 = 7;
                                                                    }
                                                                }
                                                                else {
                                                                    uVar1 = 8;
                                                                }
                                                            }
                                                            else {
                                                                uVar1 = 9;
                                                            }
                                                        }
                                                        else {
                                                            uVar1 = 10;
                                                        }
                                                    }
                                                    else {
                                                        uVar1 = 0xb;
                                                    }
                                                }
                                                else {
                                                    uVar1 = 0xc;
                                                }
                                            }
                                            else {
                                                uVar1 = 0xd;
                                            }
                                        }
                                        else {
                                            uVar1 = 0xe;
                                        }
                                    }
                                    else {
                                        uVar1 = 0xf;
                                    }
                                }
                                else {
                                    uVar1 = 0x10;
                                }
                            }
                            else {
                                uVar1 = 0x11;
                            }
                        }
                        else {
                            uVar1 = 0x12;
                        }
                    }
                    else {
                        uVar1 = 0x13;
                    }
                }
                else {
                    uVar1 = 0x14;
                }
                iVar3 = 0x51a;
                do {
                    if ((*(iVar8 + iVar3) | 0x20) != 0x20) {
                        iVar2 = iVar3 + -0x4f2;
                        goto code_r0x0800d220;
                    }
                    uVar6 = iVar3 - 0x4f2;
                    iVar3 = iVar3 + -1;
                } while (1 < uVar6);
                iVar2 = 0;
code_r0x0800d220:
                iVar2 = sysfs_emit(arg2,"nvme.%04x-%*phN-%*phN-%08x\n",*(iVar8 + 0x524),uVar1,iVar8 + 0x4df,iVar2,
                                   iVar8 + 0x4f3,*(iVar7 + 0x2d0));
                goto code_r0x0800cff8;
            }
            pcVar4 = "eui.%8phN\n";
            noname_1 = extraout_q0_00;
        }
        else {
            pcVar4 = "eui.%16phN\n";
            noname_1 = extraout_q0;
        }
    }
    else {
        pcVar4 = "uuid.%pU\n";
    }
    iVar2 = sysfs_emit(noname_1,arg2,pcVar4,piVar5);
code_r0x0800cff8:
    return iVar2;
}


// ===== sym.nsid_show @ 0x0800d244 (size 100) =====

int64_t sym.nsid_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *(arg1 + 0x3b0) + 0x58;
    if (*(*(arg1 + 0x3b0) + 0x48) == obj.nvme_bdev_ops) {
        piVar2 = *piVar2 + 0x40;
    }
    iVar1 = sysfs_emit(arg2,0x80034b6,*(*piVar2 + 0x2d0));
    return iVar1;
}


// ===== sym.nvme_clear_changed_ns_log @ 0x0800d2a8 (size 244) =====

//WARNING: Type propagation algorithm not settling

uint64_t sym.nvme_clear_changed_ns_log(int64_t arg1)

{
    uchar *puVar1;
    uint32_t uVar2;
    code cVar3;
    uint16_t uVar4;
    int16_t iVar5;
    char cVar6;
    bool bVar7;
    bool bVar8;
    uint32_t uVar9;
    int64_t *******pppppppiVar10;
    uint32_t uVar11;
    int iVar12;
    int iVar13;
    int64_t *******pppppppiVar14;
    uint64_t uVar15;
    int64_t *piVar16;
    int64_t *piVar17;
    uint64_t uVar18;
    int64_t ******ppppppiVar19;
    int64_t iVar20;
    char *pcVar21;
    char *pcVar22;
    code *pcVar23;
    int64_t *******in_x3;
    uint64_t uVar24;
    int64_t iVar25;
    ulong *puVar26;
    int64_t *piVar27;
    uint64_t *extraout_x8;
    uint64_t *puVar28;
    uint8_t uVar29;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t *unaff_x21;
    int64_t iVar30;
    uint64_t unaff_x22;
    int64_t *******unaff_x23;
    int64_t iVar31;
    uint64_t unaff_x24;
    ulong *unaff_x25;
    uint64_t unaff_x26;
    ulong unaff_x30;
    uchar auVar32 [16];
    uchar auVar33 [12];
    ulong uStack_288;
    ulong uStack_280;
    ulong uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    ulong uStack_260;
    ulong uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    int64_t iStack_228;
    uchar ***pppuStack_220;
    code *pcStack_218;
    uint64_t uStack_210;
    ulong *puStack_208;
    uint64_t uStack_200;
    int64_t *******pppppppiStack_1f8;
    uint64_t uStack_1f0;
    int64_t iStack_1e8;
    int64_t *******pppppppiStack_1e0;
    int64_t *******pppppppiStack_1d8;
    uint uStack_1d0;
    int64_t aiStack_1c8 [9];
    uchar **ppuStack_180;
    ulong uStack_178;
    uint64_t uStack_170;
    int64_t *piStack_168;
    int64_t *******pppppppiStack_160;
    uint64_t uStack_158;
    uint uStack_150;
    int64_t ******ppppppiStack_148;
    int64_t iStack_140;
    int64_t iStack_138;
    int64_t iStack_130;
    int64_t iStack_128;
    uint8_t uStack_120;
    int64_t *******pppppppiStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar25 = sp_el0;
    iStack_28 = *(iVar25 + 0x5e0);
    pcVar22 = 0x1000;
    pppppppiVar14 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0xdc0);
    uVar15 = 0;
    if (pppppppiVar14 != NULL) {
        uStack_60 = 0;
        uStack_48 = 0;
        pcVar22 = NULL;
        uStack_68 = 0xffffffff00000002;
        uStack_38 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_30 = 0;
        uStack_40 = 0x3ff0004;
        in_x3 = pppppppiVar14;
        uVar11 = sym.__nvme_submit_sync_cmd(*(arg1 + 0x48),&uStack_68,0,pppppppiVar14);
        if (uVar11 != 0) {
            pcVar22 = uVar11;
            _dev_warn(*(arg1 + 0x460),"reading changed ns log failed: %d\n");
        }
        uVar15 = kfree(pppppppiVar14);
    }
    iVar25 = sp_el0;
    if (*(iVar25 + 0x5e0) == iStack_28) {
        return uVar15;
    }
    auVar32 = __stack_chk_fail();
    uVar18 = auVar32._8_8_;
    uVar15 = auVar32._0_8_;
    *extraout_x18 = sym.nvme_validate_or_alloc_ns;
    pcStack_c8 = sym.nvme_validate_or_alloc_ns;
    iVar25 = sp_el0;
    pppppppiVar14 = uVar18 & 0xffffffff;
    iStack_d8 = *(iVar25 + 0x5e0);
    uStack_120 = 0;
    iStack_130 = 0;
    iStack_128 = 0;
    iStack_140 = 0;
    iStack_138 = 0;
    ppppppiStack_148 = NULL;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    pppppppiStack_118 = NULL;
    uStack_110 = 0;
    piVar16 = unaff_x21;
    puStack_d0 = &stack0xffffffffffffffe0;
    if (((*(uVar15 + 0x5e4) >> 8 < 0x103) && ((*(uVar15 + 0x598) & 0x70) != 0x60)) || (*(uVar15 + 0x611) < '\0')) {
code_r0x0800d5f0:
        piVar17 = sym.nvme_find_get_ns(uVar15,pppppppiVar14);
        if (piVar17 == NULL) {
            pcVar23 = uStack_120;
            piStack_168 = piVar16;
            if (uStack_120 == 0) {
                pcVar23 = &ppppppiStack_148;
                in_x3 = &pppppppiStack_118;
                pppppppiStack_118 = NULL;
                uVar24 = sym.nvme_identify_ns(uVar15,pppppppiVar14,pcVar23,in_x3);
                if (uVar24 == 0) {
                    pcVar23 = 0x480;
                    piVar17 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0xdc0);
                    unaff_x23 = pppppppiStack_118;
                    if (piVar17 != NULL) {
                        pcVar23 = obj.nvme_core_init.__key;
                        uVar24 = __blk_mq_alloc_disk(*(uVar15 + 0x70),piVar17);
                        piVar16 = piVar17;
                        if (uVar24 < 0xfffffffffffff001) {
                            *(uVar24 + 0x58) = piVar17;
                            *(uVar24 + 0x48) = obj.nvme_bdev_ops;
                            piVar17[4] = uVar24;
                            iVar30 = *(uVar15 + 0xc50);
                            iVar25 = *(uVar24 + 0x50);
                            piVar17[3] = iVar25;
                            if ((iVar30 != 0) && (*(iVar30 + 0x5e) != '\0')) {
                                blk_queue_flag_set(0xf);
                                iVar25 = piVar17[3];
                            }
                            blk_queue_flag_set(6,iVar25);
                            if ((*(*(uVar15 + 0x40) + 0x10) >> 2 & 1) != 0) {
                                blk_queue_flag_set(0x19,piVar17[3]);
                            }
                            unaff_x23 = pppppppiStack_118;
                            piVar17[2] = uVar15;
                            *(piVar17 + 7) = 1;
                            cVar3 = *(pppppppiStack_118 + 0x1e);
                            unaff_x25 = cVar3;
                            mutex_lock(*(uVar15 + 0x568) + 0x3b0);
                            unaff_x24 = sym.nvme_find_ns_head(auVar32._0_4_,uVar18 & 0xffffffff);
                            unaff_x22 = uVar24;
                            if (unaff_x24 == 0) {
                                iVar30 = *(uVar15 + 0x568);
                                bVar7 = iStack_130 != _uuid_null;
                                bVar8 = iStack_128 != _try_module_get;
                                unaff_x26 = bVar7 || bVar8;
                                unaff_x24 = memchr_inv(&iStack_140,0,0x10);
                                iVar25 = memchr_inv(&ppppppiStack_148,0,8);
                                for (puVar26 = *(iVar30 + 0x3f0); iVar30 + 0x3f0 != puVar26; puVar26 = *puVar26) {
                                    if ((((bVar7 || bVar8) &&
                                         (iStack_130 == *(puVar26 + -0x14) && iStack_128 == *(puVar26 + -0xc))) ||
                                        ((unaff_x24 != 0 &&
                                         (iStack_140 == *(puVar26 + -0x24) && iStack_138 == *(puVar26 + -0x1c))))) ||
                                       ((iVar25 != 0 && (ppppppiStack_148 == *(puVar26 + -0x2c))))) {
                                        pcVar23 = pppppppiVar14;
                                        _dev_err(*(uVar15 + 0x460),"duplicate IDs for nsid %d\n");
                                        goto code_r0x0800db78;
                                    }
                                }
                                in_x3 = cVar3 & 1;
                                pcVar23 = &ppppppiStack_148;
                                unaff_x24 = sym.nvme_alloc_ns_head(uVar15,pppppppiVar14,pcVar23,in_x3);
                                if (unaff_x24 < 0xfffffffffffff001) {
code_r0x0800d9f4:
                                    unaff_x25 = *(unaff_x24 + 8);
                                    pppppppiVar14 = piVar17 + 5;
                                    uVar18 = __list_add_valid(pppppppiVar14,unaff_x25,unaff_x24);
                                    if ((uVar18 & 1) != 0) {
                                        piVar17[5] = unaff_x24;
                                        piVar17[6] = unaff_x25;
                                        *unaff_x25 = pppppppiVar14;
                                        *(unaff_x24 + 8) = pppppppiVar14;
                                    }
                                    iVar25 = *(uVar15 + 0x568);
                                    piVar17[8] = unaff_x24;
                                    mutex_unlock(iVar25 + 0x3b0);
                                }
                                else {
                                    mutex_unlock(*(uVar15 + 0x568) + 0x3b0);
                                    if (unaff_x24 != 0) goto code_r0x0800db84;
                                }
                                pcVar23 = *(uVar15 + 0x68);
                                in_x3 = *(piVar17[8] + 0x318);
                                sprintf(uVar24 + 0xc,"nvme%dn%d");
                                iVar12 = sym.nvme_update_ns_info(piVar17,unaff_x23);
                                if (iVar12 == 0) {
                                    pppppppiVar14 = uVar15 + 0x90;
                                    down_write(pppppppiVar14);
                                    sym.nvme_ns_add_to_ctrl_list(piVar17);
                                    up_write(pppppppiVar14);
                                    get_device(*(uVar15 + 0x460));
                                    pcVar23 = obj.nvme_ns_id_attr_groups;
                                    iVar12 = device_add_disk(*(uVar15 + 0x460),piVar17[4]);
                                    if (iVar12 == 0) {
                                        sym.nvme_add_ns_cdev(piVar17);
                                        goto code_r0x0800db98;
                                    }
                                    put_device(*(uVar15 + 0x460));
                                    down_write(pppppppiVar14);
                                    uVar18 = __list_del_entry_valid(piVar17);
                                    if ((uVar18 & 1) != 0) {
                                        iVar25 = *piVar17;
                                        piVar27 = piVar17[1];
                                        *(iVar25 + 8) = piVar27;
                                        *piVar27 = iVar25;
                                    }
                                    *piVar17 = piVar17;
                                    piVar17[1] = piVar17;
                                    up_write(pppppppiVar14);
                                }
                                mutex_lock(*(uVar15 + 0x568) + 0x3b0);
                                uVar18 = __list_del_entry_valid(piVar17 + 5);
                                if ((uVar18 & 1) != 0) {
                                    iVar25 = piVar17[5];
                                    piVar27 = piVar17[6];
                                    *(iVar25 + 8) = piVar27;
                                    *piVar27 = iVar25;
                                }
                                piVar17[6] = -0x2152fffffffffede;
                                if (piVar17[8] == *piVar17[8]) {
                                    iVar25 = piVar17[8];
                                    pppppppiVar14 = iVar25 + 0x300;
                                    uVar18 = __list_del_entry_valid(pppppppiVar14);
                                    if ((uVar18 & 1) != 0) {
                                        piVar27 = *(iVar25 + 0x308);
                                        iVar30 = *(iVar25 + 0x300);
                                        *(iVar30 + 8) = piVar27;
                                        *piVar27 = iVar30;
                                    }
                                    *(iVar25 + 0x300) = pppppppiVar14;
                                    *(iVar25 + 0x308) = pppppppiVar14;
                                }
                                mutex_unlock(*(uVar15 + 0x568) + 0x3b0);
                                sym.nvme_put_ns_head(piVar17[8]);
                            }
                            else {
                                if (((cVar3 & 1) == 0) || (*(unaff_x24 + 0x314) == '\0')) {
                                    pcVar22 = "Duplicate unshared namespace %d\n";
                                }
                                else {
                                    if ((((*(unaff_x24 + 0x2ec) == iStack_130 && *(unaff_x24 + 0x2f4) == iStack_128) &&
                                         (*(unaff_x24 + 0x2dc) == iStack_140 && *(unaff_x24 + 0x2e4) == iStack_138)) &&
                                        (*(unaff_x24 + 0x2d4) == ppppppiStack_148)) &&
                                       (*(unaff_x24 + 0x2fc) == uStack_120)) goto code_r0x0800d9f4;
                                    pcVar22 = "IDs don\'t match for shared namespace %d\n";
                                }
                                pcVar23 = uVar18 & 0xffffffff;
                                _dev_err(*(uVar15 + 0x460),pcVar22);
                                sym.nvme_put_ns_head(unaff_x24);
code_r0x0800db78:
                                mutex_unlock(*(uVar15 + 0x568) + 0x3b0);
                            }
code_r0x0800db84:
                            blk_cleanup_disk(uVar24);
                        }
                        kfree(piVar17);
                        unaff_x23 = pppppppiStack_118;
                    }
code_r0x0800db98:
                    uVar24 = kfree(unaff_x23);
                    piStack_168 = piVar16;
                }
            }
            else if (uStack_120 == 2) {
                pcVar23 = pppppppiVar14;
                uVar24 = _dev_warn(*(uVar15 + 0x460),"nsid %u not supported without CONFIG_BLK_DEV_ZONED\n");
            }
            else {
                in_x3 = pppppppiVar14;
                uVar24 = _dev_warn(*(uVar15 + 0x460),"unknown csi %u for nsid %u\n");
            }
        }
        else {
            pppppppiStack_118 = NULL;
            if ((piVar17[0xc] >> 1 & 1) == 0) {
                pcVar22 = &ppppppiStack_148;
                in_x3 = &pppppppiStack_118;
                uVar11 = sym.nvme_identify_ns(piVar17[2],*(piVar17[8] + 0x2d0),pcVar22,in_x3);
                pppppppiVar10 = pppppppiStack_118;
                uVar15 = uVar11;
                if (uVar11 != 0) goto code_r0x0800d808;
                iVar25 = piVar17[8];
                if ((((*(iVar25 + 0x2ec) == iStack_130 && *(iVar25 + 0x2f4) == iStack_128) &&
                     (*(iVar25 + 0x2dc) == iStack_140 && *(iVar25 + 0x2e4) == iStack_138)) &&
                    (*(iVar25 + 0x2d4) == ppppppiStack_148)) && (*(iVar25 + 0x2fc) == uStack_120)) {
                    uVar15 = sym.nvme_update_ns_info(piVar17,pppppppiStack_118);
                    uVar15 = uVar15 & 0xffffffff;
                    pppppppiVar14 = pppppppiVar10;
                }
                else {
                    pcVar22 = *(iVar25 + 0x2d0);
                    _dev_err(*(piVar17[2] + 0x460),"identifiers changed for nsid %d\n");
                    uVar15 = 0x400b;
                    pppppppiVar14 = pppppppiStack_118;
                }
                kfree(pppppppiVar14);
                iVar12 = uVar15;
                pcVar23 = pcVar22;
            }
            else {
                uVar15 = 0x400b;
code_r0x0800d808:
                iVar12 = uVar15;
                pcVar23 = pcVar22;
            }
            if ((0 < iVar12) && ((uVar15 >> 0xe & 1) != 0)) {
                sym.nvme_ns_remove(piVar17);
            }
            uVar24 = sym.nvme_put_ns(piVar17);
            piStack_168 = piVar17;
        }
    }
    else {
        pcVar23 = 0x1000;
        pppppppiStack_118 = uVar18 << 0x20;
        pppppppiStack_118 = CONCAT71(pppppppiStack_118._1_7_,6);
        uStack_f0 = 3;
        piVar16 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0xdc0);
        uVar24 = 0;
        piStack_168 = unaff_x21;
        if (piVar16 != NULL) {
            pcVar22 = NULL;
            uStack_150 = 0;
            uVar11 = sym.__nvme_submit_sync_cmd(*(uVar15 + 0x48),&pppppppiStack_118,0,piVar16);
            if (uVar11 == 0) {
                uVar24 = 0;
                unaff_x22 = 0;
                do {
                    puVar1 = piVar16 + uVar24;
                    uVar29 = puVar1[1];
                    in_x3 = uVar29;
                    if (uVar29 == 0) break;
                    switch(*puVar1) {
                    case 1:
                        pcVar21 = "%s %d for NVME_NIDT_EUI64\n";
                        if (uVar29 != 8) {
code_r0x0800d5c4:
                            pcVar22 = "ctrl returned bogus length:";
                            _dev_warn(*(uVar15 + 0x460),pcVar21);
                            goto code_r0x0800d5d4;
                        }
                        if ((*(uVar15 + 0x612) >> 2 & 1) == 0) {
                            ppppppiStack_148 = *(puVar1 + 4);
                            in_x3 = 0x8;
                        }
                        else {
                            in_x3 = 0x8;
                        }
                        break;
                    case 2:
                        if (uVar29 != 0x10) {
                            pcVar21 = "%s %d for NVME_NIDT_NGUID\n";
                            goto code_r0x0800d5c4;
                        }
                        if ((*(uVar15 + 0x612) >> 2 & 1) == 0) {
                            iStack_140 = *(puVar1 + 4);
                            in_x3 = 0x10;
                            iStack_138 = *(puVar1 + 0xc);
                        }
                        else {
code_r0x0800d4bc:
                            in_x3 = 0x10;
                        }
                        break;
                    case 3:
                        pcVar21 = "%s %d for NVME_NIDT_UUID\n";
                        if (uVar29 != 0x10) goto code_r0x0800d5c4;
                        if ((*(uVar15 + 0x612) >> 2 & 1) != 0) goto code_r0x0800d4bc;
                        iStack_130 = *(puVar1 + 4);
                        in_x3 = 0x10;
                        iStack_128 = *(puVar1 + 0xc);
                        break;
                    case 4:
                        pcVar21 = "%s %d for NVME_NIDT_CSI\n";
                        if (uVar29 != 1) goto code_r0x0800d5c4;
                        uStack_120 = puVar1[4];
                        unaff_x22 = 1;
                    }
                    uVar11 = uVar24 + in_x3 + 4;
                    uVar24 = uVar11;
                } while (uVar11 < 0x1000);
code_r0x0800d5d4:
                if (((*(uVar15 + 0x598) & 0x70) != 0x60) || (unaff_x22 != 0)) {
                    kfree(piVar16);
                    goto code_r0x0800d5f0;
                }
                pcVar23 = pppppppiVar14;
                _dev_warn(*(uVar15 + 0x460),"Command set not reported for nsid:%d\n");
            }
            else {
                in_x3 = uVar11;
                pcVar23 = uVar18 & 0xffffffff;
                _dev_warn(*(uVar15 + 0x460),"Identify Descriptors failed (nsid=%u, status=0x%x)\n");
            }
            uVar24 = kfree(piVar16);
            piStack_168 = piVar16;
        }
    }
    iVar25 = sp_el0;
    if (*(iVar25 + 0x5e0) == iStack_d8) {
        return uVar24;
    }
    auVar33 = __stack_chk_fail();
    iVar30 = auVar33._0_8_;
    *extraout_x18_00 = 0x800dba8;
    uStack_178 = 0x800dba8;
    iVar25 = sp_el0;
    aiStack_1c8[8] = *(iVar25 + 0x5e0);
    aiStack_1c8[1] = 0;
    aiStack_1c8[0] = auVar33._8_4_ << 0x20;
    aiStack_1c8[0] = CONCAT71(aiStack_1c8[0]._1_7_,6);
    aiStack_1c8[6] = 0;
    aiStack_1c8[7] = 0;
    aiStack_1c8[4] = 0;
    aiStack_1c8[5] = 0;
    aiStack_1c8[2] = 0;
    aiStack_1c8[3] = 0;
    ppuStack_180 = &puStack_d0;
    uStack_170 = unaff_x22;
    pppppppiStack_160 = pppppppiVar14;
    uStack_158 = uVar15;
    ppppppiVar19 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0xcc0,0x1000);
    *in_x3 = ppppppiVar19;
    pppppppiVar14 = pcVar23;
    if (ppppppiVar19 == NULL) {
        uVar15 = 0xfffffff4;
    }
    else {
        uStack_1d0 = 0;
        uVar11 = sym.__nvme_submit_sync_cmd(*(iVar30 + 0x48),aiStack_1c8,0,ppppppiVar19);
        if (uVar11 == 0) {
            if ((*in_x3)[1] == NULL) {
                uVar15 = 0x400b;
                kfree();
            }
            else {
                if ((*(iVar30 + 0x612) >> 2 & 1) == 0) {
                    if (0x100 < *(iVar30 + 0x5e4) >> 8) {
                        iVar25 = memchr_inv(pcVar23,0,8);
                        if (iVar25 == 0) {
                            *pcVar23 = (*in_x3)[0xf];
                        }
                        if (0x101ff < *(iVar30 + 0x5e4)) {
                            pppppppiVar14 = pcVar23 + 8;
                            iVar25 = memchr_inv(pppppppiVar14,0,0x10);
                            uVar15 = 0;
                            if (iVar25 == 0) {
                                uVar15 = 0;
                                ppppppiVar19 = (*in_x3)[0xe];
                                *pppppppiVar14 = (*in_x3)[0xd];
                                *(pcVar23 + 0x10) = ppppppiVar19;
                            }
                            goto code_r0x0800dd1c;
                        }
                    }
                }
                else {
                    _dev_info(*(iVar30 + 0x460),"Ignoring bogus Namespace Identifiers\n");
                }
                uVar15 = 0;
            }
        }
        else {
            uVar15 = uVar11;
            _dev_warn(*(iVar30 + 0x460),"Identify namespace failed (%d)\n",uVar15);
            kfree(*in_x3);
        }
    }
code_r0x0800dd1c:
    iVar25 = sp_el0;
    if (*(iVar25 + 0x5e0) == aiStack_1c8[8]) {
        return uVar15;
    }
    auVar32 = __stack_chk_fail();
    piVar16 = auVar32._8_8_;
    iVar20 = auVar32._0_8_;
    *extraout_x18_01 = sym.nvme_update_ns_info;
    pcStack_218 = sym.nvme_update_ns_info;
    iVar25 = sp_el0;
    iStack_228 = *(iVar25 + 0x5e0);
    uVar29 = *(piVar16 + 0x1a);
    pppuStack_220 = &ppuStack_180;
    uStack_210 = unaff_x26;
    puStack_208 = unaff_x25;
    uStack_200 = unaff_x24;
    pppppppiStack_1f8 = unaff_x23;
    uStack_1f0 = uVar15;
    iStack_1e8 = iVar30;
    pppppppiStack_1e0 = pppppppiVar14;
    pppppppiStack_1d8 = in_x3;
    blk_mq_freeze_queue(*(*(iVar20 + 0x20) + 0x50));
    *(iVar20 + 0x48) = *(piVar16 + (uVar29 & 0xf) * 4 + 0x82);
    sym.nvme_set_queue_limits(*(iVar20 + 0x10),*(iVar20 + 0x18));
    iVar5 = *(piVar16 + (*(piVar16 + 0x1a) & 0xf) * 4 + 0x80);
    iVar25 = *(iVar20 + 0x10);
    *(iVar20 + 0x4c) = iVar5;
    if (iVar5 == 8) {
        uVar29 = *(piVar16 + 0x1d) & 7;
        uVar15 = *(iVar20 + 0x58) & 0xfffffffffffffffc;
        *(iVar20 + 0x54) = uVar29;
        *(iVar20 + 0x58) = uVar15;
code_r0x0800de10:
        uVar11 = *(*(iVar25 + 0x40) + 0x10);
        if ((uVar11 >> 1 & 1) != 0) {
            if ((uVar11 & 1) == 0) {
                if ((*(piVar16 + 0x1a) >> 4 & 1) == 0) {
                    uVar15 = uVar15 | 2;
                }
                else {
                    uVar15 = uVar15 | 1;
                }
            }
            else {
                if ((*(piVar16 + 0x1a) >> 4 & 1) == 0) {
    //WARNING: Does not return
                    pcVar23 = SoftwareBreakpoint(0x800,0x800e1d8);
                    (*pcVar23)();
                }
                *(iVar20 + 0x58) = uVar15 | 1;
                if (((*(iVar25 + 0x5b8) == 0) || (uVar29 == 0)) || (iVar5 != 8)) goto code_r0x0800de60;
                uVar15 = uVar15 | 3;
            }
            *(iVar20 + 0x58) = uVar15;
        }
    }
    else {
        *(iVar20 + 0x54) = 0;
        uVar15 = *(iVar20 + 0x58) & 0xfffffffffffffffc;
        *(iVar20 + 0x58) = uVar15;
        if (iVar5 != 0) {
            uVar29 = 0;
            goto code_r0x0800de10;
        }
    }
code_r0x0800de60:
    if ((*(iVar25 + 0x610) & 1) == 0) {
code_r0x0800dea4:
        uVar15 = *(piVar16 + 0x2e) << (*(iVar20 + 0x48) - 9 & 0x3f);
    }
    else {
        uVar11 = *(iVar25 + 0x5b0);
        uVar15 = uVar11;
        uVar11 = uVar11 - (uVar11 >> 1 & 0x55555555);
        uVar11 = (uVar11 & 0x33333333) + (uVar11 >> 2 & 0x33333333);
        if ((uVar11 + (uVar11 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 != 1) goto code_r0x0800dea4;
    }
    uVar11 = uVar15;
    if (uVar11 != 0) {
        if ((uVar11 & uVar11 - 1) == 0) {
            blk_queue_chunk_sectors(*(iVar20 + 0x18),uVar15 & 0xffffffff);
        }
        else if (*(*(*(*(iVar20 + 0x20) + 0x40) + 0x28) + 0xf8) == 0) {
            _printk(0x8003bc3,*(iVar20 + 0x20) + 0xc);
        }
    }
    uVar11 = *(iVar20 + 0x48);
    iVar30 = *(iVar20 + 0x20);
    iVar25 = 0;
    if (uVar11 < 0xd) {
        iVar25 = *piVar16 << (uVar11 - 9 & 0x3f);
    }
    uVar2 = 0x200;
    if (uVar11 < 0xd) {
        uVar2 = 1 << (uVar11 & 0x1f) & 0xffff;
    }
    uVar11 = uVar2;
    if (*(*(iVar20 + 0x10) + 0x5d4) != 0) {
        uStack_260 = 0;
        uStack_268 = CONCAT44(*(*(iVar20 + 0x40) + 0x2d0),0x1a);
        uStack_238 = 0;
        uStack_230 = 0;
        uStack_248 = 0;
        uStack_258 = 0;
        uStack_250 = 0;
        uStack_288 = 0;
        uStack_280 = 0;
        uStack_278 = 0;
        uStack_270 = 0;
        uStack_240 = 0x10100000007;
        iVar13 = sym.__nvme_submit_sync_cmd(*(*(iVar20 + 0x10) + 0x48),&uStack_268,0,&uStack_288);
        iVar12 = 0;
        if (iVar13 != 0) goto code_r0x0800dfc4;
        *(iVar20 + 0x50) = uStack_278;
        *(iVar20 + 0x4e) = uStack_278._4_2_;
        if (uStack_278 != 0) {
            uVar11 = uStack_278 << (*(iVar20 + 0x48) & 0x1f);
            if (uStack_278._4_2_ == 0) {
                iVar12 = 0;
            }
            else {
                iVar12 = uVar11 * uStack_278._4_2_;
            }
            goto code_r0x0800dfc4;
        }
    }
    iVar12 = 0;
code_r0x0800dfc4:
    uVar9 = uVar2;
    if (*(piVar16 + 0x2a) == 0) {
        if (((*(piVar16 + 3) >> 1 & 1) == 0) || (uVar4 = *(piVar16 + 0x24), uVar4 == 0)) {
            uVar4 = *(*(*(iVar20 + 0x10) + 0x568) + 0x526);
        }
        uVar9 = uVar2 + uVar2 * uVar4;
    }
    if ((*(piVar16 + 3) >> 4 & 1) != 0) {
        uVar11 = uVar2 + uVar2 * *(piVar16 + 8);
        iVar12 = uVar2 + uVar2 * *(piVar16 + 9);
    }
    blk_queue_logical_block_size(*(iVar30 + 0x50),uVar2);
    uVar2 = uVar11;
    if (uVar9 <= uVar11) {
        uVar2 = uVar9;
    }
    blk_queue_physical_block_size(*(iVar30 + 0x50),uVar2);
    blk_queue_io_min(*(iVar30 + 0x50),uVar11);
    blk_queue_io_opt(*(iVar30 + 0x50),iVar12);
    if ((*(iVar20 + 0x4c) != 0) && (*(iVar20 + 0x4c) != 8 || *(iVar20 + 0x54) == '\0')) {
        iVar25 = 0;
    }
    set_capacity_and_notify(iVar30,iVar25);
    iVar25 = *(iVar30 + 0x50);
    iVar31 = *(iVar20 + 0x10);
    iVar12 = 0x200;
    if (iVar25 != 0) {
        iVar12 = 0x200;
        if (*(iVar25 + 0x4e0) != 0) {
            iVar12 = *(iVar25 + 0x4e0);
        }
    }
    if (*(iVar31 + 0x5bc) == 0) {
        blk_queue_flag_clear(8,iVar25);
    }
    else {
        if (((*(iVar31 + 0x5d4) != 0) && (*(iVar20 + 0x50) != 0)) && (*(iVar20 + 0x4e) != 0)) {
            iVar12 = *(iVar20 + 0x50) * iVar12 * *(iVar20 + 0x4e);
        }
        *(iVar25 + 0x508) = 0;
        *(iVar25 + 0x504) = iVar12;
        uVar15 = blk_queue_flag_test_and_set(8,iVar25);
        if ((uVar15 & 1) == 0) {
            blk_queue_max_discard_sectors(iVar25,*(iVar31 + 0x5bc));
            blk_queue_max_discard_segments(iVar25,*(iVar31 + 0x5c0));
            if ((*(iVar31 + 0x610) >> 2 & 1) != 0) {
                blk_queue_max_write_zeroes_sectors(iVar25,0xffffffff);
            }
        }
    }
    blk_queue_max_write_zeroes_sectors(*(iVar30 + 0x50),*(*(iVar20 + 0x10) + 0x5c4));
    if (*(*(iVar20 + 0x40) + 0x2fc) == '\x02') {
        _dev_warn(*(*(iVar20 + 0x10) + 0x460),"Please enable CONFIG_BLK_DEV_ZONED to support ZNS devices\n");
        uVar11 = 0xffffffa3;
        while( true ) {
            blk_mq_unfreeze_queue(*(*(iVar20 + 0x20) + 0x50));
            iVar25 = sp_el0;
            if (*(iVar25 + 0x5e0) == iStack_228) break;
            __stack_chk_fail();
            puVar28 = extraout_x8;
code_r0x0800e1f0:
            Hint_Prefetch(puVar28,2,0,1);
            do {
                cVar6 = '\x01';
                bVar7 = ExclusiveMonitorPass(puVar28,0x10);
                if (bVar7) {
                    *puVar28 = *puVar28 | 0x10;
                    cVar6 = ExclusiveMonitorsStatus();
                }
            } while (cVar6 != '\0');
            uVar11 = 0;
        }
        return uVar11;
    }
    if ((*(piVar16 + 99) & 1) == 0) {
        uVar15 = *(iVar20 + 0x60) >> 3 & 1;
    }
    else {
        uVar15 = 1;
    }
    set_disk_ro(*(iVar20 + 0x20),uVar15);
    puVar28 = iVar20 + 0x60;
    goto code_r0x0800e1f0;
}


// ===== sym.nvme_validate_or_alloc_ns @ 0x0800d39c (size 2064) =====

uint64_t sym.nvme_validate_or_alloc_ns(int64_t arg1,int64_t arg2)

{
    uchar *puVar1;
    uint32_t uVar2;
    ulong uVar3;
    code cVar4;
    uint16_t uVar5;
    int16_t iVar6;
    char cVar7;
    bool bVar8;
    bool bVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    int iVar12;
    int iVar13;
    int64_t *piVar14;
    int64_t *piVar15;
    uint64_t uVar16;
    int64_t iVar17;
    char *pcVar18;
    char *in_x2;
    code *pcVar19;
    code *in_x3;
    uint64_t uVar20;
    int64_t iVar21;
    ulong *puVar22;
    int64_t *piVar23;
    uint64_t *extraout_x8;
    uint64_t *puVar24;
    uint8_t uVar25;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar26;
    int64_t *unaff_x21;
    int64_t iVar27;
    uint64_t unaff_x22;
    code *unaff_x23;
    int64_t iVar28;
    uint64_t unaff_x24;
    ulong *unaff_x25;
    uint64_t unaff_x26;
    ulong unaff_x30;
    uchar auVar29 [12];
    uchar auVar30 [16];
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    int64_t iStack_1b8;
    uchar *puStack_1b0;
    code *pcStack_1a8;
    uint64_t uStack_1a0;
    ulong *puStack_198;
    uint64_t uStack_190;
    code *pcStack_188;
    uint64_t uStack_180;
    int64_t iStack_178;
    code *pcStack_170;
    code *pcStack_168;
    uint uStack_160;
    int64_t aiStack_158 [9];
    uchar *puStack_110;
    ulong uStack_108;
    uint64_t uStack_100;
    int64_t *piStack_f8;
    code *pcStack_f0;
    uint64_t uStack_e8;
    uint uStack_e0;
    int64_t iStack_d8;
    int64_t iStack_d0;
    int64_t iStack_c8;
    int64_t iStack_c0;
    int64_t iStack_b8;
    uint8_t uStack_b0;
    code *pcStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar21 = sp_el0;
    pcVar26 = arg2 & 0xffffffff;
    iStack_68 = *(iVar21 + 0x5e0);
    uStack_b0 = 0;
    iStack_c0 = 0;
    iStack_b8 = 0;
    iStack_d0 = 0;
    iStack_c8 = 0;
    iStack_d8 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    pcStack_a8 = NULL;
    uStack_a0 = 0;
    piVar14 = unaff_x21;
    if (((*(arg1 + 0x5e4) >> 8 < 0x103) && ((*(arg1 + 0x598) & 0x70) != 0x60)) || (*(arg1 + 0x611) < '\0')) {
code_r0x0800d5f0:
        piVar15 = sym.nvme_find_get_ns(arg1,pcVar26);
        if (piVar15 == NULL) {
            pcVar19 = uStack_b0;
            piStack_f8 = piVar14;
            if (uStack_b0 == 0) {
                pcVar19 = &stack0xffffffffffffff28;
                in_x3 = &stack0xffffffffffffff58;
                pcStack_a8 = NULL;
                uVar20 = sym.nvme_identify_ns(arg1,pcVar26,pcVar19,in_x3);
                if (uVar20 == 0) {
                    pcVar19 = 0x480;
                    piVar15 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0xdc0);
                    unaff_x23 = pcStack_a8;
                    if (piVar15 != NULL) {
                        pcVar19 = obj.nvme_core_init.__key;
                        uVar20 = __blk_mq_alloc_disk(*(arg1 + 0x70),piVar15);
                        piVar14 = piVar15;
                        if (uVar20 < 0xfffffffffffff001) {
                            *(uVar20 + 0x58) = piVar15;
                            *(uVar20 + 0x48) = obj.nvme_bdev_ops;
                            piVar15[4] = uVar20;
                            iVar27 = *(arg1 + 0xc50);
                            iVar21 = *(uVar20 + 0x50);
                            piVar15[3] = iVar21;
                            if ((iVar27 != 0) && (*(iVar27 + 0x5e) != '\0')) {
                                blk_queue_flag_set(0xf);
                                iVar21 = piVar15[3];
                            }
                            blk_queue_flag_set(6,iVar21);
                            if ((*(*(arg1 + 0x40) + 0x10) >> 2 & 1) != 0) {
                                blk_queue_flag_set(0x19,piVar15[3]);
                            }
                            unaff_x23 = pcStack_a8;
                            piVar15[2] = arg1;
                            *(piVar15 + 7) = 1;
                            cVar4 = pcStack_a8[0x1e];
                            unaff_x25 = cVar4;
                            mutex_lock(*(arg1 + 0x568) + 0x3b0);
                            unaff_x24 = sym.nvme_find_ns_head(arg1,arg2 & 0xffffffff);
                            unaff_x22 = uVar20;
                            if (unaff_x24 == 0) {
                                iVar27 = *(arg1 + 0x568);
                                bVar8 = iStack_c0 != _uuid_null;
                                bVar9 = iStack_b8 != _try_module_get;
                                unaff_x26 = bVar8 || bVar9;
                                unaff_x24 = memchr_inv(&stack0xffffffffffffff30,0,0x10);
                                iVar21 = memchr_inv(&stack0xffffffffffffff28,0,8);
                                for (puVar22 = *(iVar27 + 0x3f0); iVar27 + 0x3f0 != puVar22; puVar22 = *puVar22) {
                                    if ((((bVar8 || bVar9) &&
                                         (iStack_c0 == *(puVar22 + -0x14) && iStack_b8 == *(puVar22 + -0xc))) ||
                                        ((unaff_x24 != 0 &&
                                         (iStack_d0 == *(puVar22 + -0x24) && iStack_c8 == *(puVar22 + -0x1c))))) ||
                                       ((iVar21 != 0 && (iStack_d8 == *(puVar22 + -0x2c))))) {
                                        pcVar19 = pcVar26;
                                        _dev_err(*(arg1 + 0x460),"duplicate IDs for nsid %d\n");
                                        goto code_r0x0800db78;
                                    }
                                }
                                in_x3 = cVar4 & 1;
                                pcVar19 = &stack0xffffffffffffff28;
                                unaff_x24 = sym.nvme_alloc_ns_head(arg1,pcVar26,pcVar19,in_x3);
                                if (unaff_x24 < 0xfffffffffffff001) {
code_r0x0800d9f4:
                                    unaff_x25 = *(unaff_x24 + 8);
                                    pcVar26 = piVar15 + 5;
                                    uVar16 = __list_add_valid(pcVar26,unaff_x25,unaff_x24);
                                    if ((uVar16 & 1) != 0) {
                                        piVar15[5] = unaff_x24;
                                        piVar15[6] = unaff_x25;
                                        *unaff_x25 = pcVar26;
                                        *(unaff_x24 + 8) = pcVar26;
                                    }
                                    iVar21 = *(arg1 + 0x568);
                                    piVar15[8] = unaff_x24;
                                    mutex_unlock(iVar21 + 0x3b0);
                                }
                                else {
                                    mutex_unlock(*(arg1 + 0x568) + 0x3b0);
                                    if (unaff_x24 != 0) goto code_r0x0800db84;
                                }
                                pcVar19 = *(arg1 + 0x68);
                                in_x3 = *(piVar15[8] + 0x318);
                                sprintf(uVar20 + 0xc,"nvme%dn%d");
                                iVar12 = sym.nvme_update_ns_info(piVar15,unaff_x23);
                                if (iVar12 == 0) {
                                    pcVar26 = arg1 + 0x90;
                                    down_write(pcVar26);
                                    sym.nvme_ns_add_to_ctrl_list(piVar15);
                                    up_write(pcVar26);
                                    get_device(*(arg1 + 0x460));
                                    pcVar19 = obj.nvme_ns_id_attr_groups;
                                    iVar12 = device_add_disk(*(arg1 + 0x460),piVar15[4]);
                                    if (iVar12 == 0) {
                                        sym.nvme_add_ns_cdev(piVar15);
                                        goto code_r0x0800db98;
                                    }
                                    put_device(*(arg1 + 0x460));
                                    down_write(pcVar26);
                                    uVar16 = __list_del_entry_valid(piVar15);
                                    if ((uVar16 & 1) != 0) {
                                        iVar21 = *piVar15;
                                        piVar23 = piVar15[1];
                                        *(iVar21 + 8) = piVar23;
                                        *piVar23 = iVar21;
                                    }
                                    *piVar15 = piVar15;
                                    piVar15[1] = piVar15;
                                    up_write(pcVar26);
                                }
                                mutex_lock(*(arg1 + 0x568) + 0x3b0);
                                uVar16 = __list_del_entry_valid(piVar15 + 5);
                                if ((uVar16 & 1) != 0) {
                                    iVar21 = piVar15[5];
                                    piVar23 = piVar15[6];
                                    *(iVar21 + 8) = piVar23;
                                    *piVar23 = iVar21;
                                }
                                piVar15[6] = -0x2152fffffffffede;
                                if (piVar15[8] == *piVar15[8]) {
                                    iVar21 = piVar15[8];
                                    pcVar26 = iVar21 + 0x300;
                                    uVar16 = __list_del_entry_valid(pcVar26);
                                    if ((uVar16 & 1) != 0) {
                                        piVar23 = *(iVar21 + 0x308);
                                        iVar27 = *(iVar21 + 0x300);
                                        *(iVar27 + 8) = piVar23;
                                        *piVar23 = iVar27;
                                    }
                                    *(iVar21 + 0x300) = pcVar26;
                                    *(iVar21 + 0x308) = pcVar26;
                                }
                                mutex_unlock(*(arg1 + 0x568) + 0x3b0);
                                sym.nvme_put_ns_head(piVar15[8]);
                            }
                            else {
                                if (((cVar4 & 1) == 0) || (*(unaff_x24 + 0x314) == '\0')) {
                                    pcVar18 = "Duplicate unshared namespace %d\n";
                                }
                                else {
                                    if ((((*(unaff_x24 + 0x2ec) == iStack_c0 && *(unaff_x24 + 0x2f4) == iStack_b8) &&
                                         (*(unaff_x24 + 0x2dc) == iStack_d0 && *(unaff_x24 + 0x2e4) == iStack_c8)) &&
                                        (*(unaff_x24 + 0x2d4) == iStack_d8)) && (*(unaff_x24 + 0x2fc) == uStack_b0))
                                    goto code_r0x0800d9f4;
                                    pcVar18 = "IDs don\'t match for shared namespace %d\n";
                                }
                                pcVar19 = arg2 & 0xffffffff;
                                _dev_err(*(arg1 + 0x460),pcVar18);
                                sym.nvme_put_ns_head(unaff_x24);
code_r0x0800db78:
                                mutex_unlock(*(arg1 + 0x568) + 0x3b0);
                            }
code_r0x0800db84:
                            blk_cleanup_disk(uVar20);
                        }
                        kfree(piVar15);
                        unaff_x23 = pcStack_a8;
                    }
code_r0x0800db98:
                    uVar20 = kfree(unaff_x23);
                    piStack_f8 = piVar14;
                }
            }
            else if (uStack_b0 == 2) {
                pcVar19 = pcVar26;
                uVar20 = _dev_warn(*(arg1 + 0x460),"nsid %u not supported without CONFIG_BLK_DEV_ZONED\n");
            }
            else {
                in_x3 = pcVar26;
                uVar20 = _dev_warn(*(arg1 + 0x460),"unknown csi %u for nsid %u\n");
            }
        }
        else {
            pcStack_a8 = NULL;
            if ((piVar15[0xc] >> 1 & 1) == 0) {
                in_x2 = &stack0xffffffffffffff28;
                in_x3 = &stack0xffffffffffffff58;
                uVar11 = sym.nvme_identify_ns(piVar15[2],*(piVar15[8] + 0x2d0),in_x2,in_x3);
                pcVar19 = pcStack_a8;
                arg1 = uVar11;
                if (uVar11 != 0) goto code_r0x0800d808;
                iVar21 = piVar15[8];
                if ((((*(iVar21 + 0x2ec) == iStack_c0 && *(iVar21 + 0x2f4) == iStack_b8) &&
                     (*(iVar21 + 0x2dc) == iStack_d0 && *(iVar21 + 0x2e4) == iStack_c8)) &&
                    (*(iVar21 + 0x2d4) == iStack_d8)) && (*(iVar21 + 0x2fc) == uStack_b0)) {
                    uVar20 = sym.nvme_update_ns_info(piVar15,pcStack_a8);
                    arg1 = uVar20 & 0xffffffff;
                    pcVar26 = pcVar19;
                }
                else {
                    in_x2 = *(iVar21 + 0x2d0);
                    _dev_err(*(piVar15[2] + 0x460),"identifiers changed for nsid %d\n");
                    arg1 = 0x400b;
                    pcVar26 = pcStack_a8;
                }
                kfree(pcVar26);
                iVar12 = arg1;
                pcVar19 = in_x2;
            }
            else {
                arg1 = 0x400b;
code_r0x0800d808:
                iVar12 = arg1;
                pcVar19 = in_x2;
            }
            if ((0 < iVar12) && ((arg1 >> 0xe & 1) != 0)) {
                sym.nvme_ns_remove(piVar15);
            }
            uVar20 = sym.nvme_put_ns(piVar15);
            piStack_f8 = piVar15;
        }
    }
    else {
        pcVar19 = 0x1000;
        pcStack_a8 = arg2 << 0x20;
        pcStack_a8 = CONCAT71(pcStack_a8._1_7_,6);
        uStack_80 = 3;
        piVar14 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0xdc0);
        uVar20 = 0;
        piStack_f8 = unaff_x21;
        if (piVar14 != NULL) {
            in_x2 = NULL;
            uStack_e0 = 0;
            uVar11 = sym.__nvme_submit_sync_cmd(*(arg1 + 0x48),&stack0xffffffffffffff58,0,piVar14);
            if (uVar11 == 0) {
                uVar20 = 0;
                unaff_x22 = 0;
                do {
                    puVar1 = piVar14 + uVar20;
                    uVar25 = puVar1[1];
                    in_x3 = uVar25;
                    if (uVar25 == 0) break;
    //switch table (4 cases) at 0x8003eb4
                    switch(*puVar1) {
                    case 1:
                        pcVar18 = "%s %d for NVME_NIDT_EUI64\n";
                        if (uVar25 != 8) {
code_r0x0800d5c4:
                            in_x2 = "ctrl returned bogus length:";
                            _dev_warn(*(arg1 + 0x460),pcVar18);
                            goto code_r0x0800d5d4;
                        }
                        if ((*(arg1 + 0x612) >> 2 & 1) == 0) {
                            iStack_d8 = *(puVar1 + 4);
                            in_x3 = 0x8;
                        }
                        else {
                            in_x3 = 0x8;
                        }
                        break;
                    case 2:
                        if (uVar25 != 0x10) {
                            pcVar18 = "%s %d for NVME_NIDT_NGUID\n";
                            goto code_r0x0800d5c4;
                        }
                        if ((*(arg1 + 0x612) >> 2 & 1) == 0) {
                            iStack_d0 = *(puVar1 + 4);
                            in_x3 = 0x10;
                            iStack_c8 = *(puVar1 + 0xc);
                        }
                        else {
code_r0x0800d4bc:
                            in_x3 = 0x10;
                        }
                        break;
                    case 3:
                        pcVar18 = "%s %d for NVME_NIDT_UUID\n";
                        if (uVar25 != 0x10) goto code_r0x0800d5c4;
                        if ((*(arg1 + 0x612) >> 2 & 1) != 0) goto code_r0x0800d4bc;
                        iStack_c0 = *(puVar1 + 4);
                        in_x3 = 0x10;
                        iStack_b8 = *(puVar1 + 0xc);
                        break;
                    case 4:
                        pcVar18 = "%s %d for NVME_NIDT_CSI\n";
                        if (uVar25 != 1) goto code_r0x0800d5c4;
                        uStack_b0 = puVar1[4];
                        unaff_x22 = 1;
                    }
                    uVar11 = uVar20 + in_x3 + 4;
                    uVar20 = uVar11;
                } while (uVar11 < 0x1000);
code_r0x0800d5d4:
                if (((*(arg1 + 0x598) & 0x70) != 0x60) || (unaff_x22 != 0)) {
                    kfree(piVar14);
                    goto code_r0x0800d5f0;
                }
                pcVar19 = pcVar26;
                _dev_warn(*(arg1 + 0x460),"Command set not reported for nsid:%d\n");
            }
            else {
                in_x3 = uVar11;
                pcVar19 = arg2 & 0xffffffff;
                _dev_warn(*(arg1 + 0x460),"Identify Descriptors failed (nsid=%u, status=0x%x)\n");
            }
            uVar20 = kfree(piVar14);
            piStack_f8 = piVar14;
        }
    }
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) == iStack_68) {
        return uVar20;
    }
    auVar29 = __stack_chk_fail();
    iVar27 = auVar29._0_8_;
    *extraout_x18 = 0x800dba8;
    uStack_108 = 0x800dba8;
    iVar21 = sp_el0;
    aiStack_158[8] = *(iVar21 + 0x5e0);
    aiStack_158[1] = 0;
    aiStack_158[0] = auVar29._8_4_ << 0x20;
    aiStack_158[0] = CONCAT71(aiStack_158[0]._1_7_,6);
    aiStack_158[6] = 0;
    aiStack_158[7] = 0;
    aiStack_158[4] = 0;
    aiStack_158[5] = 0;
    aiStack_158[2] = 0;
    aiStack_158[3] = 0;
    puStack_110 = &stack0xffffffffffffffa0;
    uStack_100 = unaff_x22;
    pcStack_f0 = pcVar26;
    uStack_e8 = arg1;
    iVar21 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0xcc0,0x1000);
    *in_x3 = iVar21;
    pcVar26 = pcVar19;
    if (iVar21 == 0) {
        uVar20 = 0xfffffff4;
    }
    else {
        uStack_160 = 0;
        uVar11 = sym.__nvme_submit_sync_cmd(*(iVar27 + 0x48),&stack0xfffffffffffffea8,0,iVar21);
        if (uVar11 == 0) {
            if (*(*in_x3 + 8) == 0) {
                uVar20 = 0x400b;
                kfree();
            }
            else {
                if ((*(iVar27 + 0x612) >> 2 & 1) == 0) {
                    if (0x100 < *(iVar27 + 0x5e4) >> 8) {
                        iVar21 = memchr_inv(pcVar19,0,8);
                        if (iVar21 == 0) {
                            *pcVar19 = *(*in_x3 + 0x78);
                        }
                        if (0x101ff < *(iVar27 + 0x5e4)) {
                            pcVar26 = pcVar19 + 8;
                            iVar21 = memchr_inv(pcVar26,0,0x10);
                            uVar20 = 0;
                            if (iVar21 == 0) {
                                uVar20 = 0;
                                uVar3 = *(*in_x3 + 0x70);
                                *pcVar26 = *(*in_x3 + 0x68);
                                *(pcVar19 + 0x10) = uVar3;
                            }
                            goto code_r0x0800dd1c;
                        }
                    }
                }
                else {
                    _dev_info(*(iVar27 + 0x460),"Ignoring bogus Namespace Identifiers\n");
                }
                uVar20 = 0;
            }
        }
        else {
            uVar20 = uVar11;
            _dev_warn(*(iVar27 + 0x460),"Identify namespace failed (%d)\n",uVar20);
            kfree(*in_x3);
        }
    }
code_r0x0800dd1c:
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) == aiStack_158[8]) {
        return uVar20;
    }
    auVar30 = __stack_chk_fail();
    piVar14 = auVar30._8_8_;
    iVar17 = auVar30._0_8_;
    *extraout_x18_00 = sym.nvme_update_ns_info;
    pcStack_1a8 = sym.nvme_update_ns_info;
    iVar21 = sp_el0;
    iStack_1b8 = *(iVar21 + 0x5e0);
    uVar25 = *(piVar14 + 0x1a);
    puStack_1b0 = &stack0xfffffffffffffef0;
    uStack_1a0 = unaff_x26;
    puStack_198 = unaff_x25;
    uStack_190 = unaff_x24;
    pcStack_188 = unaff_x23;
    uStack_180 = uVar20;
    iStack_178 = iVar27;
    pcStack_170 = pcVar26;
    pcStack_168 = in_x3;
    blk_mq_freeze_queue(*(*(iVar17 + 0x20) + 0x50));
    *(iVar17 + 0x48) = *(piVar14 + (uVar25 & 0xf) * 4 + 0x82);
    sym.nvme_set_queue_limits(*(iVar17 + 0x10),*(iVar17 + 0x18));
    iVar6 = *(piVar14 + (*(piVar14 + 0x1a) & 0xf) * 4 + 0x80);
    iVar21 = *(iVar17 + 0x10);
    *(iVar17 + 0x4c) = iVar6;
    if (iVar6 == 8) {
        uVar25 = *(piVar14 + 0x1d) & 7;
        uVar20 = *(iVar17 + 0x58) & 0xfffffffffffffffc;
        *(iVar17 + 0x54) = uVar25;
        *(iVar17 + 0x58) = uVar20;
code_r0x0800de10:
        uVar11 = *(*(iVar21 + 0x40) + 0x10);
        if ((uVar11 >> 1 & 1) != 0) {
            if ((uVar11 & 1) == 0) {
                if ((*(piVar14 + 0x1a) >> 4 & 1) == 0) {
                    uVar20 = uVar20 | 2;
                }
                else {
                    uVar20 = uVar20 | 1;
                }
            }
            else {
                if ((*(piVar14 + 0x1a) >> 4 & 1) == 0) {
    //WARNING: Does not return
                    pcVar26 = SoftwareBreakpoint(0x800,0x800e1d8);
                    (*pcVar26)();
                }
                *(iVar17 + 0x58) = uVar20 | 1;
                if (((*(iVar21 + 0x5b8) == 0) || (uVar25 == 0)) || (iVar6 != 8)) goto code_r0x0800de60;
                uVar20 = uVar20 | 3;
            }
            *(iVar17 + 0x58) = uVar20;
        }
    }
    else {
        *(iVar17 + 0x54) = 0;
        uVar20 = *(iVar17 + 0x58) & 0xfffffffffffffffc;
        *(iVar17 + 0x58) = uVar20;
        if (iVar6 != 0) {
            uVar25 = 0;
            goto code_r0x0800de10;
        }
    }
code_r0x0800de60:
    if ((*(iVar21 + 0x610) & 1) == 0) {
code_r0x0800dea4:
        uVar20 = *(piVar14 + 0x2e) << (*(iVar17 + 0x48) - 9 & 0x3f);
    }
    else {
        uVar11 = *(iVar21 + 0x5b0);
        uVar20 = uVar11;
        uVar11 = uVar11 - (uVar11 >> 1 & 0x55555555);
        uVar11 = (uVar11 & 0x33333333) + (uVar11 >> 2 & 0x33333333);
        if ((uVar11 + (uVar11 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 != 1) goto code_r0x0800dea4;
    }
    uVar11 = uVar20;
    if (uVar11 != 0) {
        if ((uVar11 & uVar11 - 1) == 0) {
            blk_queue_chunk_sectors(*(iVar17 + 0x18),uVar20 & 0xffffffff);
        }
        else if (*(*(*(*(iVar17 + 0x20) + 0x40) + 0x28) + 0xf8) == 0) {
            _printk(0x8003bc3,*(iVar17 + 0x20) + 0xc);
        }
    }
    uVar11 = *(iVar17 + 0x48);
    iVar27 = *(iVar17 + 0x20);
    iVar21 = 0;
    if (uVar11 < 0xd) {
        iVar21 = *piVar14 << (uVar11 - 9 & 0x3f);
    }
    uVar2 = 0x200;
    if (uVar11 < 0xd) {
        uVar2 = 1 << (uVar11 & 0x1f) & 0xffff;
    }
    uVar11 = uVar2;
    if (*(*(iVar17 + 0x10) + 0x5d4) != 0) {
        uStack_1f0 = 0;
        uStack_1f8 = CONCAT44(*(*(iVar17 + 0x40) + 0x2d0),0x1a);
        uStack_1c8 = 0;
        uStack_1c0 = 0;
        uStack_1d8 = 0;
        uStack_1e8 = 0;
        uStack_1e0 = 0;
        uStack_218 = 0;
        uStack_210 = 0;
        uStack_208 = 0;
        uStack_200 = 0;
        uStack_1d0 = 0x10100000007;
        iVar13 = sym.__nvme_submit_sync_cmd
                           (*(*(iVar17 + 0x10) + 0x48),&stack0xfffffffffffffe08,0,&stack0xfffffffffffffde8);
        iVar12 = 0;
        if (iVar13 != 0) goto code_r0x0800dfc4;
        *(iVar17 + 0x50) = uStack_208;
        *(iVar17 + 0x4e) = uStack_208._4_2_;
        if (uStack_208 != 0) {
            uVar11 = uStack_208 << (*(iVar17 + 0x48) & 0x1f);
            if (uStack_208._4_2_ == 0) {
                iVar12 = 0;
            }
            else {
                iVar12 = uVar11 * uStack_208._4_2_;
            }
            goto code_r0x0800dfc4;
        }
    }
    iVar12 = 0;
code_r0x0800dfc4:
    uVar10 = uVar2;
    if (*(piVar14 + 0x2a) == 0) {
        if (((*(piVar14 + 3) >> 1 & 1) == 0) || (uVar5 = *(piVar14 + 0x24), uVar5 == 0)) {
            uVar5 = *(*(*(iVar17 + 0x10) + 0x568) + 0x526);
        }
        uVar10 = uVar2 + uVar2 * uVar5;
    }
    if ((*(piVar14 + 3) >> 4 & 1) != 0) {
        uVar11 = uVar2 + uVar2 * *(piVar14 + 8);
        iVar12 = uVar2 + uVar2 * *(piVar14 + 9);
    }
    blk_queue_logical_block_size(*(iVar27 + 0x50),uVar2);
    uVar2 = uVar11;
    if (uVar10 <= uVar11) {
        uVar2 = uVar10;
    }
    blk_queue_physical_block_size(*(iVar27 + 0x50),uVar2);
    blk_queue_io_min(*(iVar27 + 0x50),uVar11);
    blk_queue_io_opt(*(iVar27 + 0x50),iVar12);
    if ((*(iVar17 + 0x4c) != 0) && (*(iVar17 + 0x4c) != 8 || *(iVar17 + 0x54) == '\0')) {
        iVar21 = 0;
    }
    set_capacity_and_notify(iVar27,iVar21);
    iVar21 = *(iVar27 + 0x50);
    iVar28 = *(iVar17 + 0x10);
    iVar12 = 0x200;
    if (iVar21 != 0) {
        iVar12 = 0x200;
        if (*(iVar21 + 0x4e0) != 0) {
            iVar12 = *(iVar21 + 0x4e0);
        }
    }
    if (*(iVar28 + 0x5bc) == 0) {
        blk_queue_flag_clear(8,iVar21);
    }
    else {
        if (((*(iVar28 + 0x5d4) != 0) && (*(iVar17 + 0x50) != 0)) && (*(iVar17 + 0x4e) != 0)) {
            iVar12 = *(iVar17 + 0x50) * iVar12 * *(iVar17 + 0x4e);
        }
        *(iVar21 + 0x508) = 0;
        *(iVar21 + 0x504) = iVar12;
        uVar20 = blk_queue_flag_test_and_set(8,iVar21);
        if ((uVar20 & 1) == 0) {
            blk_queue_max_discard_sectors(iVar21,*(iVar28 + 0x5bc));
            blk_queue_max_discard_segments(iVar21,*(iVar28 + 0x5c0));
            if ((*(iVar28 + 0x610) >> 2 & 1) != 0) {
                blk_queue_max_write_zeroes_sectors(iVar21,0xffffffff);
            }
        }
    }
    blk_queue_max_write_zeroes_sectors(*(iVar27 + 0x50),*(*(iVar17 + 0x10) + 0x5c4));
    if (*(*(iVar17 + 0x40) + 0x2fc) == '\x02') {
        _dev_warn(*(*(iVar17 + 0x10) + 0x460),"Please enable CONFIG_BLK_DEV_ZONED to support ZNS devices\n");
        uVar11 = 0xffffffa3;
        while( true ) {
            blk_mq_unfreeze_queue(*(*(iVar17 + 0x20) + 0x50));
            iVar21 = sp_el0;
            if (*(iVar21 + 0x5e0) == iStack_1b8) break;
            __stack_chk_fail();
            puVar24 = extraout_x8;
code_r0x0800e1f0:
            Hint_Prefetch(puVar24,2,0,1);
            do {
                cVar7 = '\x01';
                bVar8 = ExclusiveMonitorPass(puVar24,0x10);
                if (bVar8) {
                    *puVar24 = *puVar24 | 0x10;
                    cVar7 = ExclusiveMonitorsStatus();
                }
            } while (cVar7 != '\0');
            uVar11 = 0;
        }
        return uVar11;
    }
    if ((*(piVar14 + 99) & 1) == 0) {
        uVar20 = *(iVar17 + 0x60) >> 3 & 1;
    }
    else {
        uVar20 = 1;
    }
    set_disk_ro(*(iVar17 + 0x20),uVar20);
    puVar24 = iVar17 + 0x60;
    goto code_r0x0800e1f0;
}


// ===== sym.nvme_identify_ns @ 0x0800dbac (size 424) =====

int sym.nvme_identify_ns(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    ulong uVar2;
    uint16_t uVar3;
    int16_t iVar4;
    char cVar5;
    bool bVar6;
    uint32_t uVar7;
    code *pcVar8;
    int iVar9;
    int iVar10;
    int64_t iVar11;
    int64_t iVar12;
    int64_t *piVar13;
    uint32_t uVar14;
    uint64_t *extraout_x8;
    uint64_t *puVar15;
    uint64_t uVar16;
    uint8_t uVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar18;
    int64_t iVar19;
    ulong unaff_x30;
    uchar auVar20 [16];
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    uint uStack_118;
    uint uStack_114;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    int64_t aiStack_78 [9];
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    aiStack_78[8] = *(iVar11 + 0x5e0);
    aiStack_78[1] = 0;
    aiStack_78[0] = arg2 << 0x20;
    aiStack_78[0] = CONCAT71(aiStack_78[0]._1_7_,6);
    aiStack_78[6] = 0;
    aiStack_78[7] = 0;
    aiStack_78[4] = 0;
    aiStack_78[5] = 0;
    aiStack_78[2] = 0;
    aiStack_78[3] = 0;
    iVar11 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0xcc0,0x1000);
    *arg4 = iVar11;
    if (iVar11 == 0) {
        iVar9 = -0xc;
    }
    else {
        iVar9 = sym.__nvme_submit_sync_cmd(*(arg1 + 0x48),aiStack_78,0,iVar11);
        if (iVar9 == 0) {
            if (*(*arg4 + 8) == 0) {
                iVar9 = 0x400b;
                kfree();
            }
            else {
                if ((*(arg1 + 0x612) >> 2 & 1) == 0) {
                    if (0x100 < *(arg1 + 0x5e4) >> 8) {
                        iVar11 = memchr_inv(arg3,0,8);
                        if (iVar11 == 0) {
                            *arg3 = *(*arg4 + 0x78);
                        }
                        if (0x101ff < *(arg1 + 0x5e4)) {
                            iVar11 = memchr_inv(arg3 + 8,0,0x10);
                            iVar9 = 0;
                            if (iVar11 == 0) {
                                iVar9 = 0;
                                uVar2 = *(*arg4 + 0x70);
                                *(arg3 + 8) = *(*arg4 + 0x68);
                                *(arg3 + 0x10) = uVar2;
                            }
                            goto code_r0x0800dd1c;
                        }
                    }
                }
                else {
                    _dev_info(*(arg1 + 0x460),"Ignoring bogus Namespace Identifiers\n");
                }
                iVar9 = 0;
            }
        }
        else {
            _dev_warn(*(arg1 + 0x460),"Identify namespace failed (%d)\n",iVar9);
            kfree(*arg4);
        }
    }
code_r0x0800dd1c:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == aiStack_78[8]) {
        return iVar9;
    }
    auVar20 = __stack_chk_fail();
    piVar13 = auVar20._8_8_;
    iVar12 = auVar20._0_8_;
    *extraout_x18 = sym.nvme_update_ns_info;
    pcStack_c8 = sym.nvme_update_ns_info;
    iVar11 = sp_el0;
    iStack_d8 = *(iVar11 + 0x5e0);
    uVar17 = *(piVar13 + 0x1a);
    puStack_d0 = &stack0xffffffffffffffd0;
    blk_mq_freeze_queue(*(*(iVar12 + 0x20) + 0x50));
    *(iVar12 + 0x48) = *(piVar13 + (uVar17 & 0xf) * 4 + 0x82);
    sym.nvme_set_queue_limits(*(iVar12 + 0x10),*(iVar12 + 0x18));
    iVar4 = *(piVar13 + (*(piVar13 + 0x1a) & 0xf) * 4 + 0x80);
    iVar11 = *(iVar12 + 0x10);
    *(iVar12 + 0x4c) = iVar4;
    if (iVar4 == 8) {
        uVar17 = *(piVar13 + 0x1d) & 7;
        uVar16 = *(iVar12 + 0x58) & 0xfffffffffffffffc;
        *(iVar12 + 0x54) = uVar17;
        *(iVar12 + 0x58) = uVar16;
code_r0x0800de10:
        uVar14 = *(*(iVar11 + 0x40) + 0x10);
        if ((uVar14 >> 1 & 1) != 0) {
            if ((uVar14 & 1) == 0) {
                if ((*(piVar13 + 0x1a) >> 4 & 1) == 0) {
                    uVar16 = uVar16 | 2;
                }
                else {
                    uVar16 = uVar16 | 1;
                }
            }
            else {
                if ((*(piVar13 + 0x1a) >> 4 & 1) == 0) {
    //WARNING: Does not return
                    pcVar8 = SoftwareBreakpoint(0x800,0x800e1d8);
                    (*pcVar8)();
                }
                *(iVar12 + 0x58) = uVar16 | 1;
                if (((*(iVar11 + 0x5b8) == 0) || (uVar17 == 0)) || (iVar4 != 8)) goto code_r0x0800de60;
                uVar16 = uVar16 | 3;
            }
            *(iVar12 + 0x58) = uVar16;
        }
    }
    else {
        *(iVar12 + 0x54) = 0;
        uVar16 = *(iVar12 + 0x58) & 0xfffffffffffffffc;
        *(iVar12 + 0x58) = uVar16;
        if (iVar4 != 0) {
            uVar17 = 0;
            goto code_r0x0800de10;
        }
    }
code_r0x0800de60:
    if ((*(iVar11 + 0x610) & 1) == 0) {
code_r0x0800dea4:
        uVar16 = *(piVar13 + 0x2e) << (*(iVar12 + 0x48) - 9 & 0x3f);
    }
    else {
        uVar14 = *(iVar11 + 0x5b0);
        uVar16 = uVar14;
        uVar14 = uVar14 - (uVar14 >> 1 & 0x55555555);
        uVar14 = (uVar14 & 0x33333333) + (uVar14 >> 2 & 0x33333333);
        if ((uVar14 + (uVar14 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 != 1) goto code_r0x0800dea4;
    }
    uVar14 = uVar16;
    if (uVar14 != 0) {
        if ((uVar14 & uVar14 - 1) == 0) {
            blk_queue_chunk_sectors(*(iVar12 + 0x18),uVar16 & 0xffffffff);
        }
        else if (*(*(*(*(iVar12 + 0x20) + 0x40) + 0x28) + 0xf8) == 0) {
            _printk(0x8003bc3,*(iVar12 + 0x20) + 0xc);
        }
    }
    uVar14 = *(iVar12 + 0x48);
    iVar18 = *(iVar12 + 0x20);
    iVar11 = 0;
    if (uVar14 < 0xd) {
        iVar11 = *piVar13 << (uVar14 - 9 & 0x3f);
    }
    uVar1 = 0x200;
    if (uVar14 < 0xd) {
        uVar1 = 1 << (uVar14 & 0x1f) & 0xffff;
    }
    uVar14 = uVar1;
    if (*(*(iVar12 + 0x10) + 0x5d4) != 0) {
        uStack_110 = 0;
        _uStack_118 = CONCAT44(*(*(iVar12 + 0x40) + 0x2d0),0x1a);
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_f8 = 0;
        uStack_108 = 0;
        uStack_100 = 0;
        uStack_138 = 0;
        uStack_130 = 0;
        uStack_128 = 0;
        uStack_120 = 0;
        uStack_f0 = 0x10100000007;
        iVar10 = sym.__nvme_submit_sync_cmd(*(*(iVar12 + 0x10) + 0x48),&uStack_118,0,&uStack_138);
        iVar9 = 0;
        if (iVar10 != 0) goto code_r0x0800dfc4;
        *(iVar12 + 0x50) = uStack_128;
        *(iVar12 + 0x4e) = uStack_128._4_2_;
        if (uStack_128 != 0) {
            uVar14 = uStack_128 << (*(iVar12 + 0x48) & 0x1f);
            if (uStack_128._4_2_ == 0) {
                iVar9 = 0;
            }
            else {
                iVar9 = uVar14 * uStack_128._4_2_;
            }
            goto code_r0x0800dfc4;
        }
    }
    iVar9 = 0;
code_r0x0800dfc4:
    uVar7 = uVar1;
    if (*(piVar13 + 0x2a) == 0) {
        if (((*(piVar13 + 3) >> 1 & 1) == 0) || (uVar3 = *(piVar13 + 0x24), uVar3 == 0)) {
            uVar3 = *(*(*(iVar12 + 0x10) + 0x568) + 0x526);
        }
        uVar7 = uVar1 + uVar1 * uVar3;
    }
    if ((*(piVar13 + 3) >> 4 & 1) != 0) {
        uVar14 = uVar1 + uVar1 * *(piVar13 + 8);
        iVar9 = uVar1 + uVar1 * *(piVar13 + 9);
    }
    blk_queue_logical_block_size(*(iVar18 + 0x50),uVar1);
    uVar1 = uVar14;
    if (uVar7 <= uVar14) {
        uVar1 = uVar7;
    }
    blk_queue_physical_block_size(*(iVar18 + 0x50),uVar1);
    blk_queue_io_min(*(iVar18 + 0x50),uVar14);
    blk_queue_io_opt(*(iVar18 + 0x50),iVar9);
    if ((*(iVar12 + 0x4c) != 0) && (*(iVar12 + 0x4c) != 8 || *(iVar12 + 0x54) == '\0')) {
        iVar11 = 0;
    }
    set_capacity_and_notify(iVar18,iVar11);
    iVar11 = *(iVar18 + 0x50);
    iVar19 = *(iVar12 + 0x10);
    iVar9 = 0x200;
    if (iVar11 != 0) {
        iVar9 = 0x200;
        if (*(iVar11 + 0x4e0) != 0) {
            iVar9 = *(iVar11 + 0x4e0);
        }
    }
    if (*(iVar19 + 0x5bc) == 0) {
        blk_queue_flag_clear(8,iVar11);
    }
    else {
        if (((*(iVar19 + 0x5d4) != 0) && (*(iVar12 + 0x50) != 0)) && (*(iVar12 + 0x4e) != 0)) {
            iVar9 = *(iVar12 + 0x50) * iVar9 * *(iVar12 + 0x4e);
        }
        *(iVar11 + 0x508) = 0;
        *(iVar11 + 0x504) = iVar9;
        uVar16 = blk_queue_flag_test_and_set(8,iVar11);
        if ((uVar16 & 1) == 0) {
            blk_queue_max_discard_sectors(iVar11,*(iVar19 + 0x5bc));
            blk_queue_max_discard_segments(iVar11,*(iVar19 + 0x5c0));
            if ((*(iVar19 + 0x610) >> 2 & 1) != 0) {
                blk_queue_max_write_zeroes_sectors(iVar11,0xffffffff);
            }
        }
    }
    blk_queue_max_write_zeroes_sectors(*(iVar18 + 0x50),*(*(iVar12 + 0x10) + 0x5c4));
    if (*(*(iVar12 + 0x40) + 0x2fc) == '\x02') {
        _dev_warn(*(*(iVar12 + 0x10) + 0x460),"Please enable CONFIG_BLK_DEV_ZONED to support ZNS devices\n");
        iVar9 = -0x5d;
        while( true ) {
            blk_mq_unfreeze_queue(*(*(iVar12 + 0x20) + 0x50));
            iVar11 = sp_el0;
            if (*(iVar11 + 0x5e0) == iStack_d8) break;
            __stack_chk_fail();
            puVar15 = extraout_x8;
code_r0x0800e1f0:
            Hint_Prefetch(puVar15,2,0,1);
            do {
                cVar5 = '\x01';
                bVar6 = ExclusiveMonitorPass(puVar15,0x10);
                if (bVar6) {
                    *puVar15 = *puVar15 | 0x10;
                    cVar5 = ExclusiveMonitorsStatus();
                }
            } while (cVar5 != '\0');
            iVar9 = 0;
        }
        return iVar9;
    }
    if ((*(piVar13 + 99) & 1) == 0) {
        uVar16 = *(iVar12 + 0x60) >> 3 & 1;
    }
    else {
        uVar16 = 1;
    }
    set_disk_ro(*(iVar12 + 0x20),uVar16);
    puVar15 = iVar12 + 0x60;
    goto code_r0x0800e1f0;
}


// ===== sym.nvme_update_ns_info @ 0x0800dd54 (size 1212) =====

uint sym.nvme_update_ns_info(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint16_t uVar2;
    int16_t iVar3;
    char cVar4;
    bool bVar5;
    uint32_t uVar6;
    code *pcVar7;
    int iVar8;
    uint32_t uVar9;
    int64_t iVar10;
    uint64_t *extraout_x8;
    uint64_t *puVar11;
    uint64_t uVar12;
    uint8_t uVar13;
    ulong *in_x18;
    uint uVar14;
    int64_t iVar15;
    int64_t iVar16;
    int iVar17;
    ulong unaff_x30;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    uint uStack_98;
    uint uStack_94;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_58 = *(iVar10 + 0x5e0);
    uVar13 = *(arg2 + 0x1a);
    blk_mq_freeze_queue(*(*(arg1 + 0x20) + 0x50));
    *(arg1 + 0x48) = *(arg2 + 0x80 + (uVar13 & 0xf) * 4 + 2);
    sym.nvme_set_queue_limits(*(arg1 + 0x10),*(arg1 + 0x18));
    iVar3 = *(arg2 + 0x80 + (*(arg2 + 0x1a) & 0xf) * 4);
    iVar10 = *(arg1 + 0x10);
    *(arg1 + 0x4c) = iVar3;
    if (iVar3 == 8) {
        uVar13 = *(arg2 + 0x1d) & 7;
        uVar12 = *(arg1 + 0x58) & 0xfffffffffffffffc;
        *(arg1 + 0x54) = uVar13;
        *(arg1 + 0x58) = uVar12;
code_r0x0800de10:
        uVar9 = *(*(iVar10 + 0x40) + 0x10);
        if ((uVar9 >> 1 & 1) != 0) {
            if ((uVar9 & 1) == 0) {
                if ((*(arg2 + 0x1a) >> 4 & 1) == 0) {
                    uVar12 = uVar12 | 2;
                }
                else {
                    uVar12 = uVar12 | 1;
                }
            }
            else {
                if ((*(arg2 + 0x1a) >> 4 & 1) == 0) {
    //WARNING: Does not return
                    pcVar7 = SoftwareBreakpoint(0x800,0x800e1d8);
                    (*pcVar7)();
                }
                *(arg1 + 0x58) = uVar12 | 1;
                if (((*(iVar10 + 0x5b8) == 0) || (uVar13 == 0)) || (iVar3 != 8)) goto code_r0x0800de60;
                uVar12 = uVar12 | 3;
            }
            *(arg1 + 0x58) = uVar12;
        }
    }
    else {
        *(arg1 + 0x54) = 0;
        uVar12 = *(arg1 + 0x58) & 0xfffffffffffffffc;
        *(arg1 + 0x58) = uVar12;
        if (iVar3 != 0) {
            uVar13 = 0;
            goto code_r0x0800de10;
        }
    }
code_r0x0800de60:
    if ((*(iVar10 + 0x610) & 1) == 0) {
code_r0x0800dea4:
        uVar12 = *(arg2 + 0x2e) << (*(arg1 + 0x48) - 9 & 0x3f);
    }
    else {
        uVar9 = *(iVar10 + 0x5b0);
        uVar12 = uVar9;
        uVar9 = uVar9 - (uVar9 >> 1 & 0x55555555);
        uVar9 = (uVar9 & 0x33333333) + (uVar9 >> 2 & 0x33333333);
        if ((uVar9 + (uVar9 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 != 1) goto code_r0x0800dea4;
    }
    uVar9 = uVar12;
    if (uVar9 != 0) {
        if ((uVar9 & uVar9 - 1) == 0) {
            blk_queue_chunk_sectors(*(arg1 + 0x18),uVar12 & 0xffffffff);
        }
        else if (*(*(*(*(arg1 + 0x20) + 0x40) + 0x28) + 0xf8) == 0) {
            _printk(0x8003bc3,*(arg1 + 0x20) + 0xc);
        }
    }
    uVar9 = *(arg1 + 0x48);
    iVar15 = *(arg1 + 0x20);
    iVar10 = 0;
    if (uVar9 < 0xd) {
        iVar10 = *arg2 << (uVar9 - 9 & 0x3f);
    }
    uVar1 = 0x200;
    if (uVar9 < 0xd) {
        uVar1 = 1 << (uVar9 & 0x1f) & 0xffff;
    }
    uVar9 = uVar1;
    if (*(*(arg1 + 0x10) + 0x5d4) != 0) {
        uStack_90 = 0;
        _uStack_98 = CONCAT44(*(*(arg1 + 0x40) + 0x2d0),0x1a);
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_78 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_b8 = 0;
        uStack_b0 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_70 = 0x10100000007;
        iVar8 = sym.__nvme_submit_sync_cmd(*(*(arg1 + 0x10) + 0x48),&uStack_98,0,&uStack_b8);
        iVar17 = 0;
        if (iVar8 != 0) goto code_r0x0800dfc4;
        *(arg1 + 0x50) = uStack_a8;
        *(arg1 + 0x4e) = uStack_a8._4_2_;
        if (uStack_a8 != 0) {
            uVar9 = uStack_a8 << (*(arg1 + 0x48) & 0x1f);
            if (uStack_a8._4_2_ == 0) {
                iVar17 = 0;
            }
            else {
                iVar17 = uVar9 * uStack_a8._4_2_;
            }
            goto code_r0x0800dfc4;
        }
    }
    iVar17 = 0;
code_r0x0800dfc4:
    uVar6 = uVar1;
    if (*(arg2 + 0x2a) == 0) {
        if (((*(arg2 + 0x18) >> 1 & 1) == 0) || (uVar2 = *(arg2 + 0x24), uVar2 == 0)) {
            uVar2 = *(*(*(arg1 + 0x10) + 0x568) + 0x526);
        }
        uVar6 = uVar1 + uVar1 * uVar2;
    }
    if ((*(arg2 + 0x18) >> 4 & 1) != 0) {
        uVar9 = uVar1 + uVar1 * *(arg2 + 0x40);
        iVar17 = uVar1 + uVar1 * *(arg2 + 0x48);
    }
    blk_queue_logical_block_size(*(iVar15 + 0x50),uVar1);
    uVar1 = uVar9;
    if (uVar6 <= uVar9) {
        uVar1 = uVar6;
    }
    blk_queue_physical_block_size(*(iVar15 + 0x50),uVar1);
    blk_queue_io_min(*(iVar15 + 0x50),uVar9);
    blk_queue_io_opt(*(iVar15 + 0x50),iVar17);
    if ((*(arg1 + 0x4c) != 0) && (*(arg1 + 0x4c) != 8 || *(arg1 + 0x54) == '\0')) {
        iVar10 = 0;
    }
    set_capacity_and_notify(iVar15,iVar10);
    iVar10 = *(iVar15 + 0x50);
    iVar16 = *(arg1 + 0x10);
    iVar17 = 0x200;
    if (iVar10 != 0) {
        iVar17 = 0x200;
        if (*(iVar10 + 0x4e0) != 0) {
            iVar17 = *(iVar10 + 0x4e0);
        }
    }
    if (*(iVar16 + 0x5bc) == 0) {
        blk_queue_flag_clear(8,iVar10);
    }
    else {
        if (((*(iVar16 + 0x5d4) != 0) && (*(arg1 + 0x50) != 0)) && (*(arg1 + 0x4e) != 0)) {
            iVar17 = *(arg1 + 0x50) * iVar17 * *(arg1 + 0x4e);
        }
        *(iVar10 + 0x508) = 0;
        *(iVar10 + 0x504) = iVar17;
        uVar12 = blk_queue_flag_test_and_set(8,iVar10);
        if ((uVar12 & 1) == 0) {
            blk_queue_max_discard_sectors(iVar10,*(iVar16 + 0x5bc));
            blk_queue_max_discard_segments(iVar10,*(iVar16 + 0x5c0));
            if ((*(iVar16 + 0x610) >> 2 & 1) != 0) {
                blk_queue_max_write_zeroes_sectors(iVar10,0xffffffff);
            }
        }
    }
    blk_queue_max_write_zeroes_sectors(*(iVar15 + 0x50),*(*(arg1 + 0x10) + 0x5c4));
    if (*(*(arg1 + 0x40) + 0x2fc) == '\x02') {
        _dev_warn(*(*(arg1 + 0x10) + 0x460),"Please enable CONFIG_BLK_DEV_ZONED to support ZNS devices\n");
        uVar14 = 0xffffffa3;
        while( true ) {
            blk_mq_unfreeze_queue(*(*(arg1 + 0x20) + 0x50));
            iVar10 = sp_el0;
            if (*(iVar10 + 0x5e0) == iStack_58) break;
            __stack_chk_fail();
            puVar11 = extraout_x8;
code_r0x0800e1f0:
            Hint_Prefetch(puVar11,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar11,0x10);
                if (bVar5) {
                    *puVar11 = *puVar11 | 0x10;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            uVar14 = 0;
        }
        return uVar14;
    }
    if ((*(arg2 + 99) & 1) == 0) {
        uVar12 = *(arg1 + 0x60) >> 3 & 1;
    }
    else {
        uVar12 = 1;
    }
    set_disk_ro(*(arg1 + 0x20),uVar12);
    puVar11 = arg1 + 0x60;
    goto code_r0x0800e1f0;
}


// ===== sym.nvme_ns_add_to_ctrl_list @ 0x0800e210 (size 192) =====

void sym.nvme_ns_add_to_ctrl_list(int64_t arg1)

{
    int64_t *piVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(arg1 + 0x10) + 0x88);
    piVar1 = *(arg1 + 0x10) + 0x80;
    if (piVar4 == piVar1) {
code_r0x0800e26c:
        iVar3 = *piVar1;
        uVar2 = __list_add_valid(arg1,piVar1,iVar3);
        if ((uVar2 & 1) != 0) {
            *(iVar3 + 8) = arg1;
            *arg1 = iVar3;
            *(arg1 + 8) = piVar1;
            *piVar1 = arg1;
        }
    }
    else {
        iVar3 = piVar4[8];
        while (*(*(arg1 + 0x40) + 0x2d0) <= *(iVar3 + 0x2d0)) {
            piVar4 = piVar4[1];
            if (piVar4 == piVar1) goto code_r0x0800e26c;
            iVar3 = piVar4[8];
        }
        iVar3 = *piVar4;
        uVar2 = __list_add_valid(arg1,piVar4,iVar3);
        if ((uVar2 & 1) != 0) {
            *(iVar3 + 8) = arg1;
            *arg1 = iVar3;
            *(arg1 + 8) = piVar4;
            *piVar4 = arg1;
        }
    }
    return;
}


// ===== sym.nvme_add_ns_cdev @ 0x0800e2d0 (size 240) =====

void sym.nvme_add_ns_cdev(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    ulong *in_x18;
    ulong uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0xf0;
    *(arg1 + 0x150) = *(*(arg1 + 0x10) + 0x460);
    iVar4 = dev_set_name(iVar1,"ng%dn%d",*(*(arg1 + 0x10) + 0x68),*(*(arg1 + 0x40) + 0x318));
    if (iVar4 == 0) {
        uVar6 = *(*(*(arg1 + 0x10) + 0x40) + 8);
        uVar5 = ida_alloc_range(obj.nvme_ns_chr_minor_ida,0,0xffffffff,0xcc0);
        uVar3 = _segment.ehdr;
        if (-1 < uVar5) {
            uVar2 = CONCAT44(*0x8000004,_segment.ehdr);
            *(arg1 + 0x420) = sym.nvme_cdev_rel.21529633b7289604a80e82acd8b43a39.cfi_jt;
            *(arg1 + 0x410) = uVar2;
            *(arg1 + 0x3f0) = uVar3 & 0xfff00000 | uVar5;
            device_initialize(iVar1);
            cdev_init(arg1 + 0x68,obj.nvme_ns_chr_fops);
            *(arg1 + 200) = uVar6;
            iVar4 = cdev_device_add(arg1 + 0x68,iVar1);
            if (iVar4 != 0) {
                put_device(iVar1);
            }
        }
    }
    return;
}


// ===== sym.nvme_find_ns_head @ 0x0800e3c0 (size 340) =====

int64_t * sym.nvme_find_ns_head(uint32_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    int64_t *piVar10;
    ulong unaff_x30;
    
    uVar5 = arg1;
    *in_x18 = unaff_x30;
    iVar6 = *(uVar5 + 0x568);
    piVar10 = *(iVar6 + 0x3f0);
    if (iVar6 + 0x3f0 != piVar10) {
        do {
            if (((piVar10[-6] == arg2) &&
                ((((*(piVar10 + 0x14) != '\0' || ((*(uVar5 + 0x5d0) >> 3 & 1) != 0)) ||
                  ((*(iVar6 + 0x523) >> 3 & 1) != 0)) || ((*(uVar5 + 0x5fc) >> 2 & 1) != 0)))) &&
               (piVar9 = piVar10 + -0x60, *piVar9 != piVar9)) {
                puVar1 = piVar10 + 2;
                uVar8 = *puVar1;
                if (uVar8 == 0) {
                    uVar7 = 0;
                }
                else {
                    do {
                        uVar7 = uVar8;
                        Hint_Prefetch(puVar1,2,0,1);
                        do {
                            uVar2 = *puVar1;
                            uVar8 = uVar2;
                            if (uVar2 != uVar7) break;
                            cVar3 = '\x01';
                            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                            if (bVar4) {
                                *puVar1 = uVar7 + 1;
                                cVar3 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar3 != '\0');
                    } while ((uVar7 != uVar2) && (uVar7 = 0, uVar2 != 0));
                }
                if ((uVar7 + 1 | uVar7) < 0) {
                    refcount_warn_saturate(puVar1,0);
                }
                if (uVar7 != 0) {
                    return piVar9;
                }
            }
            iVar6 = *(uVar5 + 0x568);
            piVar10 = *piVar10;
        } while (iVar6 + 0x3f0 != piVar10);
    }
    return NULL;
}


// ===== sym.nvme_alloc_ns_head @ 0x0800e514 (size 516) =====

int64_t sym.nvme_alloc_ns_head(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint32_t *puVar2;
    ulong uVar3;
    ulong uVar4;
    uint8_t uVar5;
    char cVar6;
    bool bVar7;
    uchar uVar8;
    uint32_t uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    ulong uVar12;
    ulong *in_x18;
    int64_t *piVar13;
    int64_t iVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar10 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0xdc0,0x748);
    if (iVar10 == 0) {
        uVar9 = 0xfffffff4;
    }
    else {
        uVar9 = ida_alloc_range(*(arg1 + 0x568) + 0x528,1,0xffffffff,0xcc0);
        if (uVar9 < 0) {
            kfree(iVar10);
        }
        else {
            *(iVar10 + 0x318) = uVar9;
            *iVar10 = iVar10;
            *(iVar10 + 8) = iVar10;
            uVar9 = init_srcu_struct(iVar10 + 0x10);
            if (uVar9 == 0) {
                uVar3 = *(arg3 + 0x10);
                uVar4 = *(arg3 + 0x18);
                uVar12 = *(arg3 + 0x20);
                *(iVar10 + 0x2d0) = arg2;
                iVar14 = *(arg1 + 0x568);
                uVar5 = *(arg3 + 0x28);
                *(iVar10 + 0x2e4) = uVar3;
                *(iVar10 + 0x2ec) = uVar4;
                uVar3 = *arg3;
                uVar4 = *(arg3 + 8);
                *(iVar10 + 0x2f4) = uVar12;
                *(iVar10 + 0x2c8) = iVar14;
                *(iVar10 + 0x2fc) = uVar5;
                *(iVar10 + 0x314) = arg4 & 1;
                *(iVar10 + 0x2d4) = uVar3;
                *(iVar10 + 0x2dc) = uVar4;
                *(iVar10 + 0x310) = 1;
                if (uVar5 == 0) {
                    *(iVar10 + 800) = *(arg1 + 0xa18);
code_r0x0800e684:
                    piVar13 = *(iVar14 + 0x3f8);
                    iVar1 = iVar10 + 0x300;
                    uVar11 = __list_add_valid(iVar1,piVar13,iVar14 + 0x3f0);
                    if ((uVar11 & 1) != 0) {
                        *(iVar14 + 0x3f8) = iVar1;
                        *(iVar10 + 0x300) = iVar14 + 0x3f0;
                        *(iVar10 + 0x308) = piVar13;
                        *piVar13 = iVar1;
                    }
                    puVar2 = *(arg1 + 0x568) + 0x398;
                    Hint_Prefetch(puVar2,2,0,1);
                    do {
                        uVar9 = *puVar2;
                        cVar6 = '\x01';
                        bVar7 = ExclusiveMonitorPass(puVar2,0x10);
                        if (bVar7) {
                            *puVar2 = uVar9 + 1;
                            cVar6 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar6 != '\0');
                    if (uVar9 == 0) {
                        refcount_warn_saturate(puVar2,2);
                        return iVar10;
                    }
                    if (-1 < (uVar9 + 1 | uVar9)) {
                        return iVar10;
                    }
                    refcount_warn_saturate(puVar2,1);
                    return iVar10;
                }
                uVar9 = sym.nvme_get_effects_log(arg1,uVar5,iVar10 + 800);
                if (uVar9 == 0) {
                    iVar14 = *(arg1 + 0x568);
                    goto code_r0x0800e684;
                }
                cleanup_srcu_struct(iVar10 + 0x10);
            }
            ida_free(*(arg1 + 0x568) + 0x528,*(iVar10 + 0x318));
            kfree(iVar10);
            if (0 < uVar9) {
                uVar8 = sym.nvme_error_status(uVar9);
                uVar9 = blk_status_to_errno(uVar8);
            }
        }
    }
    return uVar9;
}


// ===== sym.nvme_ns_chr_open @ 0x0800e718 (size 44) =====

void sym.nvme_ns_chr_open(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.nvme_ns_open(*(arg1 + 0x2b0) - 0x68);
    return;
}


// ===== sym.nvme_ns_chr_release @ 0x0800e744 (size 76) =====

ulong sym.nvme_ns_chr_release(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x2b0);
    module_put(*(*(*(iVar1 + -0x58) + 0x40) + 8));
    sym.nvme_put_ns(iVar1 + -0x68);
    return 0;
}


// ===== sym.nvme_do_delete_ctrl @ 0x0800e790 (size 204) =====

void sym.nvme_do_delete_ctrl(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _dev_info(*(arg1 + 0x460),"Removing ctrl: NQN \"%s\"\n",*(*(arg1 + 0xc50) + 0x10));
    flush_work(arg1 + 0x4f0);
    sym.nvme_stop_ctrl(arg1);
    sym.nvme_remove_namespaces(arg1);
    pcVar1 = *(*(arg1 + 0x40) + 0x40);
    if (0xe < (pcVar1 + -0x8005e60 >> 3 | pcVar1 << 0x3d)) {
        __cfi_slowpath_diag(0x33d2dab7d229586b,pcVar1,0x8002850);
    }
    (*pcVar1)(arg1);
    dev_pm_qos_hide_latency_tolerance(*(arg1 + 0x460));
    cdev_device_del(arg1 + 0x468,*(arg1 + 0x460));
    put_device(*(arg1 + 0x460));
    return;
}


// ===== sym.nvme_keep_alive_end_io @ 0x0800e85c (size 168) =====

void sym.nvme_keep_alive_end_io(int64_t arg1,int64_t arg2)

{
    uchar *puVar1;
    ulong uVar2;
    ulong *in_x18;
    uchar *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar3 = *(arg1 + 0x120);
    blk_mq_free_request();
    if ((arg2 & 0xffU) == 0) {
        puVar1 = puVar3 + 0xc;
        *puVar3 = 0;
        uVar2 = _raw_spin_lock_irqsave(puVar1);
        if ((*(puVar3 + 4) | 2) == 3) {
            _raw_spin_unlock_irqrestore(puVar1,uVar2);
            queue_delayed_work_on(0x20,_segment.ehdr,puVar3 + 0xa90,*(puVar3 + 0x604) * 0xfa >> 1);
        }
        else {
            _raw_spin_unlock_irqrestore(puVar1,uVar2);
        }
    }
    else {
        _dev_err(*(puVar3 + 0x460),"failed nvme_keep_alive_end_io error=%d\n",arg2 & 0xff);
    }
    return;
}


// ===== sym.nvme_dev_attrs_are_visible @ 0x0800e904 (size 180) =====

ushort sym.nvme_dev_attrs_are_visible(int64_t arg1,uint32_t arg2)

{
    code *pcVar1;
    int64_t iVar2;
    
    pcVar1 = arg2;
    iVar2 = *(arg1 + 0x98);
    if (pcVar1 == obj.dev_attr_delete_controller) {
        iVar2 = *(*(iVar2 + 0x40) + 0x40);
    }
    else if (pcVar1 == obj.dev_attr_address) {
        iVar2 = *(*(iVar2 + 0x40) + 0x50);
    }
    else {
        if ((((pcVar1 != obj.dev_attr_hostnqn) && (pcVar1 != obj.dev_attr_hostid)) &&
            (pcVar1 != obj.dev_attr_ctrl_loss_tmo)) &&
           ((pcVar1 != obj.dev_attr_reconnect_delay && (pcVar1 != obj.dev_attr_fast_io_fail_tmo))))
        goto code_r0x0800e99c;
        iVar2 = *(iVar2 + 0xc50);
    }
    if (iVar2 == 0) {
        return 0;
    }
code_r0x0800e99c:
    return *(pcVar1 + 8);
}


// ===== sym.nvme_sysfs_delete @ 0x0800e9b8 (size 100) =====

int64_t sym.nvme_sysfs_delete(int64_t arg1,uchar noname_1 [16],uchar noname_2 [16],int64_t arg2)

{
    uint64_t uVar1;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x98);
    uVar1 = device_remove_file_self();
    if ((uVar1 & 1) != 0) {
        get_device(*(arg1_00 + 0x460));
        uVar1 = sym.nvme_change_ctrl_state(arg1_00,4);
        if ((uVar1 & 1) != 0) {
            sym.nvme_do_delete_ctrl(arg1_00);
        }
        put_device(*(arg1_00 + 0x460));
    }
    return arg2;
}


// ===== sym.nvme_sysfs_show_address @ 0x0800ea1c (size 116) =====

int64_t sym.nvme_sysfs_show_address(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x98);
    pcVar3 = *(*(iVar2 + 0x40) + 0x50);
    __cfi_slowpath_diag(0x53c4d649265157ae,pcVar3,0x8002870);
    iVar1 = (*pcVar3)(iVar2,arg2,0x1000);
    return iVar1;
}


// ===== sym.nvme_sysfs_show_hostnqn @ 0x0800ea90 (size 72) =====

int64_t sym.nvme_sysfs_show_hostnqn(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,0x8003d42,*(*(*(arg1 + 0x98) + 0xc50) + 0x50) + 0x18);
    return iVar1;
}


// ===== sym.nvme_sysfs_show_hostid @ 0x0800ead8 (size 72) =====

int64_t sym.nvme_sysfs_show_hostid(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,"%pU\n",*(*(*(arg1 + 0x98) + 0xc50) + 0x50) + 0xf7);
    return iVar1;
}


// ===== sym.nvme_ctrl_loss_tmo_show @ 0x0800eb20 (size 96) =====

int64_t sym.nvme_ctrl_loss_tmo_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x98) + 0xc50);
    iVar1 = *(iVar2 + 0x58);
    if (iVar1 == -1) {
        iVar1 = sysfs_emit(arg2,"off\n");
    }
    else {
        iVar1 = sysfs_emit(arg2,0x80034b6,*(iVar2 + 0x44) * iVar1);
    }
    return iVar1;
}


// ===== sym.nvme_ctrl_loss_tmo_store @ 0x0800eb80 (size 172) =====

int64_t sym.nvme_ctrl_loss_tmo_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    int *piVar3;
    uint32_t uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    ulong unaff_x30;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    piVar3 = &iStack_2c;
    iStack_2c = 0;
    iVar5 = *(*(arg1 + 0x98) + 0xc50);
    iVar2 = kstrtoint(arg2,10,piVar3);
    if (iVar2 == 0) {
        if (iStack_2c < 0) {
            uVar4 = 0xffffffff;
        }
        else {
            uVar1 = *(iVar5 + 0x44);
            uVar4 = 0;
            if (uVar1 != 0) {
                uVar4 = ((iStack_2c + uVar1) - 1) / uVar1;
            }
        }
        *(iVar5 + 0x58) = uVar4;
    }
    else {
        arg3 = -0x16;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_28) {
        iVar5 = __stack_chk_fail();
        *extraout_x18 = sym.nvme_ctrl_reconnect_delay_show;
        iVar2 = *(*(*(iVar5 + 0x98) + 0xc50) + 0x44);
        if (iVar2 == -1) {
            iVar2 = sysfs_emit(piVar3,"off\n");
        }
        else {
            iVar2 = sysfs_emit(piVar3,0x80034b6,iVar2);
        }
        return iVar2;
    }
    return arg3;
}


// ===== sym.nvme_ctrl_reconnect_delay_show @ 0x0800ec2c (size 92) =====

int64_t sym.nvme_ctrl_reconnect_delay_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(*(*(arg1 + 0x98) + 0xc50) + 0x44);
    if (iVar1 == -1) {
        iVar1 = sysfs_emit(arg2,"off\n");
    }
    else {
        iVar1 = sysfs_emit(arg2,0x80034b6,iVar1);
    }
    return iVar1;
}


// ===== sym.nvme_ctrl_reconnect_delay_store @ 0x0800ec88 (size 144) =====

int64_t sym.nvme_ctrl_reconnect_delay_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    puVar2 = &uStack_2c;
    iVar3 = *(arg1 + 0x98);
    uStack_2c = 0;
    iVar1 = kstrtouint(arg2,10,puVar2);
    if (iVar1 == 0) {
        *(*(iVar3 + 0xc50) + 0x44) = uStack_2c;
    }
    else {
        arg3 = iVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.nvme_ctrl_fast_io_fail_tmo_show;
    iVar1 = *(*(*(iVar3 + 0x98) + 0xc50) + 0x6c);
    if (iVar1 == -1) {
        iVar1 = sysfs_emit(puVar2,"off\n");
    }
    else {
        iVar1 = sysfs_emit(puVar2,0x80034b6,iVar1);
    }
    return iVar1;
}


// ===== sym.nvme_ctrl_fast_io_fail_tmo_show @ 0x0800ed18 (size 92) =====

int64_t sym.nvme_ctrl_fast_io_fail_tmo_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(*(*(arg1 + 0x98) + 0xc50) + 0x6c);
    if (iVar1 == -1) {
        iVar1 = sysfs_emit(arg2,"off\n");
    }
    else {
        iVar1 = sysfs_emit(arg2,0x80034b6,iVar1);
    }
    return iVar1;
}


// ===== sym.nvme_ctrl_fast_io_fail_tmo_store @ 0x0800ed74 (size 152) =====

int64_t sym.nvme_ctrl_fast_io_fail_tmo_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    ulong unaff_x30;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    iStack_2c = 0;
    iVar4 = *(*(arg1 + 0x98) + 0xc50);
    iVar3 = arg3;
    iVar1 = kstrtoint(arg2,10,&iStack_2c);
    if (iVar1 == 0) {
        iVar1 = iStack_2c;
        if (iStack_2c < 0) {
            iVar1 = -1;
        }
        *(iVar4 + 0x6c) = iVar1;
    }
    else {
        arg3 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_28) {
        iVar4 = __stack_chk_fail();
        *extraout_x18 = sym.nvme_sysfs_reset;
        iVar4 = *(iVar4 + 0x98);
        uVar2 = sym.nvme_change_ctrl_state(iVar4,2);
        if ((uVar2 & 1) != 0) {
            uVar2 = queue_work_on(0x20,_segment.ehdr,iVar4 + 0x4f0);
            if ((uVar2 & 1) != 0) {
                flush_work(iVar4 + 0x4f0);
                if (*(iVar4 + 4) == 1) {
                    return iVar3;
                }
                return -0x66;
            }
        }
        return -0x10;
    }
    return arg3;
}


// ===== sym.nvme_sysfs_reset @ 0x0800ee0c (size 136) =====

int64_t sym.nvme_sysfs_reset(int64_t arg1,uchar noname_1 [16],uchar noname_2 [16],int64_t arg2)

{
    uint64_t uVar1;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x98);
    uVar1 = sym.nvme_change_ctrl_state(arg1_00,2);
    if ((uVar1 & 1) != 0) {
        uVar1 = queue_work_on(0x20,_segment.ehdr,arg1_00 + 0x4f0);
        if ((uVar1 & 1) != 0) {
            flush_work(arg1_00 + 0x4f0);
            if (*(arg1_00 + 4) == 1) {
                return arg2;
            }
            return -0x66;
        }
    }
    return -0x10;
}


// ===== sym.nvme_sysfs_rescan @ 0x0800ee94 (size 92) =====

int64_t sym.nvme_sysfs_rescan(int64_t arg1,uchar noname_1 [16],uchar noname_2 [16],int64_t arg2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x98);
    if ((*(iVar1 + 4) == 1) && (*(iVar1 + 0x70) != 0)) {
        queue_work_on(0x20,_segment.ehdr,iVar1 + 0xa30);
    }
    return arg2;
}


// ===== sym.model_show @ 0x0800eef0 (size 68) =====

int64_t sym.model_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,"%.*s\n",0x28,*(*(arg1 + 0x98) + 0x568) + 0x4f3);
    return iVar1;
}


// ===== sym.serial_show @ 0x0800ef34 (size 68) =====

int64_t sym.serial_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,"%.*s\n",0x14,*(*(arg1 + 0x98) + 0x568) + 0x4df);
    return iVar1;
}


// ===== sym.firmware_rev_show @ 0x0800ef78 (size 68) =====

int64_t sym.firmware_rev_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,"%.*s\n",8,*(*(arg1 + 0x98) + 0x568) + 0x51b);
    return iVar1;
}


// ===== sym.cntlid_show @ 0x0800efbc (size 64) =====

int64_t sym.cntlid_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,0x80034b6,*(*(arg1 + 0x98) + 0x594));
    return iVar1;
}


// ===== sym.nvme_sysfs_show_transport @ 0x0800effc (size 68) =====

int64_t sym.nvme_sysfs_show_transport(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,0x8003d42,**(*(arg1 + 0x98) + 0x40));
    return iVar1;
}


// ===== sym.nvme_sysfs_show_subsysnqn @ 0x0800f040 (size 68) =====

int64_t sym.nvme_sysfs_show_subsysnqn(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,0x8003d42,*(*(arg1 + 0x98) + 0x568) + 0x400);
    return iVar1;
}


// ===== sym.nvme_sysfs_show_state @ 0x0800f084 (size 96) =====

int64_t sym.nvme_sysfs_show_state(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(*(arg1 + 0x98) + 4);
    if (uVar1 < 7) {
        iVar2 = sysfs_emit(arg2,0x8003d42,*(obj.nvme_sysfs_show_state.state_name + uVar1 * 8));
    }
    else {
        iVar2 = sysfs_emit(arg2,"unknown state\n");
    }
    return iVar2;
}


// ===== sym.numa_node_show @ 0x0800f0e4 (size 64) =====

int64_t sym.numa_node_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,0x80034b6,*(*(arg1 + 0x98) + 0x6c));
    return iVar1;
}


// ===== sym.queue_count_show @ 0x0800f124 (size 64) =====

int64_t sym.queue_count_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,0x80034b6,*(*(arg1 + 0x98) + 0x5a0));
    return iVar1;
}


// ===== sym.sqsize_show @ 0x0800f164 (size 64) =====

int64_t sym.sqsize_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,0x80034b6,*(*(arg1 + 0x98) + 0x5d6));
    return iVar1;
}


// ===== sym.kato_show @ 0x0800f1a4 (size 64) =====

int64_t sym.kato_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,0x80034b6,*(*(arg1 + 0x98) + 0x604));
    return iVar1;
}


// ===== sym.nvme_dev_open @ 0x0800f1e4 (size 128) =====

ulong sym.nvme_dev_open(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x2b0);
    if (*(iVar3 + -0x464) == 1) {
        get_device(*(iVar3 + -8));
        uVar1 = try_module_get(*(*(iVar3 + -0x428) + 8));
        if ((uVar1 & 1) == 0) {
            put_device(*(iVar3 + -8));
            uVar2 = 0xffffffea;
        }
        else {
            uVar2 = 0;
            *(arg2 + 0xd8) = iVar3 + -0x468;
        }
    }
    else {
        uVar2 = 0xfffffff5;
    }
    return uVar2;
}


// ===== sym.nvme_dev_release @ 0x0800f264 (size 72) =====

ulong sym.nvme_dev_release(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x2b0);
    module_put(*(*(iVar1 + -0x428) + 8));
    put_device(*(iVar1 + -8));
    return 0;
}


// ===== sym.nvme_class_uevent @ 0x0800f2ac (size 224) =====

ulong sym.nvme_class_uevent(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    char *pcVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0xb80);
    uVar3 = add_uevent_var(arg2,"NVME_TRTYPE=%s",**(arg1 + -0x90));
    if (uVar3 == 0) {
        if (iVar4 == 0) {
            uVar3 = 0;
        }
        else {
            uVar3 = add_uevent_var(arg2,"NVME_TRADDR=%s",*(iVar4 + 0x18));
            if (uVar3 == 0) {
                pcVar1 = "none";
                pcVar2 = pcVar1;
                if (*(iVar4 + 0x20) != NULL) {
                    pcVar2 = *(iVar4 + 0x20);
                }
                uVar3 = add_uevent_var(arg2,"NVME_TRSVCID=%s",pcVar2);
                if (uVar3 == 0) {
                    pcVar2 = pcVar1;
                    if (*(iVar4 + 0x28) != NULL) {
                        pcVar2 = *(iVar4 + 0x28);
                    }
                    uVar3 = add_uevent_var(arg2,"NVME_HOST_TRADDR=%s",pcVar2);
                    if (uVar3 == 0) {
                        if (*(iVar4 + 0x30) != NULL) {
                            pcVar1 = *(iVar4 + 0x30);
                        }
                        uVar3 = add_uevent_var(arg2,"NVME_HOST_IFACE=%s",pcVar1);
                    }
                }
            }
        }
    }
    return uVar3;
}


// ===== sym.__cfi_check_fail @ 0x0800f38c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800f3d0

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
    //switch table (4 cases) at 0x8003ec4
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800f3e4);
    (*pcVar1)();
}


// ===== sym.nvme_ioctl @ 0x0800f3e4 (size 52) =====

void sym.nvme_ioctl(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__nvme_ioctl(*(*(arg1 + 0x3f0) + 0x58),arg2,arg3);
    return;
}


// ===== sym.__nvme_ioctl @ 0x0800f418 (size 672) =====

uint64_t sym.__nvme_ioctl(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint64_t *puVar2;
    ulong uVar3;
    int iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t arg4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar8 [12];
    ulong uStack_98;
    uint64_t uStack_90;
    uint64_t uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    uint64_t auStack_68 [6];
    uint16_t uStack_38;
    uint16_t uStack_36;
    uint uStack_34;
    uint uStack_30;
    ushort uStack_2c;
    ushort uStack_2a;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
    uVar5 = 0xffffffe7;
    uVar7 = arg3;
    if (arg2 < -0x3fafb1b8) {
        if (arg2 != 0xc0484e41) {
            if (arg2 == 0xc0484e43) {
                uVar5 = sym.nvme_user_cmd(*(arg1 + 0x10),arg1,arg3);
                uVar7 = arg3;
                goto code_r0x0800f550;
            }
            if (arg2 != 0xc0504e47) goto code_r0x0800f550;
        }
        iVar6 = *(arg1 + 0x10);
        if (arg2 != 0xc0504e47) {
            if (arg2 == 0xc0484e41) {
                uVar5 = sym.nvme_user_cmd(iVar6,0,arg3);
                uVar7 = arg3;
            }
            else {
                uVar5 = 0;
            }
            goto code_r0x0800f550;
        }
        arg1 = 0;
    }
    else {
        if (arg2 != 0xc0504e48) {
            if (arg2 == 0x4e40) {
                uVar5 = *(*(arg1 + 0x40) + 0x2d0);
                goto code_r0x0800f550;
            }
            if (arg2 != 0x40304e42) goto code_r0x0800f550;
            uVar7 = 0x30;
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_88 = 0;
            uStack_80 = 0;
            uStack_98 = 0;
            uStack_90 = 0;
            iVar6 = sym._copy_from_user(&uStack_98,arg3,0x30);
            if (iVar6 != 0) {
                uVar5 = 0xfffffff2;
                goto code_r0x0800f550;
            }
            if (uStack_98._1_1_ == '\0') {
                uVar5 = 0xffffffea;
                if ((5 < uStack_98) || ((1 << (uStack_98 & 0x1f) & 0x26U) == 0)) goto code_r0x0800f550;
                uVar1 = uStack_98._4_2_ + 1 << (*(arg1 + 0x48) & 0x1f);
                arg4 = uVar1;
                if (((uStack_98._2_2_ >> 0xd & 1) == 0) || (*(arg1 + 0x4c) != 8)) {
                    uVar3 = sp_el0;
                    iVar4 = (uStack_98._4_2_ + 1) * *(arg1 + 0x4c);
                    if ((*(arg1 + 0x58) & 1) == 0) {
                        if ((iVar4 != 0) && ((uVar5 = 0xffffffea, uStack_90 == 0 || ((uStack_90 & 3) != 0))))
                        goto code_r0x0800f550;
                    }
                    else {
code_r0x0800f634:
                        arg4 = iVar4 + uVar1;
                    }
                }
                else {
                    puVar2 = sp_el0;
                    uVar5 = uStack_90;
                    if ((*puVar2 & 0x400000) != 0) {
                        uVar5 = uStack_90 & 0xffffffff;
                    }
                    if (uVar5 != 0) goto code_r0x0800f54c;
                    iVar4 = 0;
                    if ((*(arg1 + 0x58) & 1) != 0) goto code_r0x0800f634;
                }
                uStack_38 = uStack_98._4_2_;
                uStack_36 = uStack_98._2_2_;
                auStack_68[1] = 0;
                auStack_68[2] = 0;
                auStack_68[3] = 0;
                auStack_68[0] = CONCAT44(*(*(arg1 + 0x40) + 0x2d0),uStack_98) & 0xffffffff000000ff;
                auStack_68[4] = 0;
                auStack_68[5] = uStack_80;
                uStack_34 = uStack_78;
                uStack_30 = uStack_78._4_4_;
                uStack_2c = uStack_70;
                puVar2 = sp_el0;
                uStack_2a = uStack_70._2_2_;
                uVar7 = uStack_88;
                if ((*puVar2 & 0x400000) != 0) {
                    uVar7 = uStack_88 & 0xffffffff;
                }
                uVar5 = sym.nvme_submit_user_cmd(*(arg1 + 0x18),auStack_68,uVar7,arg4);
            }
            else {
code_r0x0800f54c:
                uVar5 = 0xffffffea;
            }
            goto code_r0x0800f550;
        }
        iVar6 = *(arg1 + 0x10);
    }
    uVar5 = sym.nvme_user_cmd64(iVar6,arg1,arg3);
    uVar7 = arg3;
code_r0x0800f550:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_28) {
        return uVar5;
    }
    auVar8 = __stack_chk_fail(uVar5);
    *extraout_x18 = sym.nvme_ns_chr_ioctl;
    iVar4 = sym.__nvme_ioctl(*(*(auVar8._0_8_ + 0x20) + 0x2b0) + -0x68,auVar8._8_4_,uVar7);
    return iVar4;
}


// ===== sym.nvme_ns_chr_ioctl @ 0x0800f6b8 (size 52) =====

int64_t sym.nvme_ns_chr_ioctl(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.__nvme_ioctl(*(*(arg1 + 0x20) + 0x2b0) + -0x68,arg2,arg3);
    return iVar1;
}


// ===== sym.nvme_dev_ioctl @ 0x0800f6ec (size 320) =====

int64_t sym.nvme_dev_ioctl(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *in_x18;
    int64_t arg1_00;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0xd8);
    iVar1 = arg2;
    if (iVar1 < 0x4e44) {
        if (iVar1 == -0x3fb7b1bf) {
            iVar1 = sym.nvme_user_cmd(arg1_00,0,arg3);
        }
        else if (iVar1 == -0x3fb7b1bd) {
            iVar1 = sym.nvme_dev_user_cmd(arg1_00,arg3);
        }
        else {
            if (iVar1 != -0x3fafb1b9) {
                return -0x19;
            }
            iVar1 = sym.nvme_user_cmd64(arg1_00,0,arg3);
        }
    }
    else if (iVar1 == 0x4e45) {
        if (*(arg1_00 + 0x608) == '\0') {
            return -0x19;
        }
        pcVar2 = *(*(arg1_00 + 0x40) + 0x20);
        __cfi_slowpath_diag(0x5fd0dd7266111d21,pcVar2,0x80028b0);
        iVar1 = (*pcVar2)(arg1_00,0x20,0x4e564d65);
    }
    else {
        if (iVar1 == 0x4e46) {
            sym.nvme_queue_scan(arg1_00);
            return 0;
        }
        if (iVar1 != 0x4e44) {
            return -0x19;
        }
        _dev_warn(*(arg1_00 + 0x460),"resetting controller\n");
        iVar1 = sym.nvme_reset_ctrl_sync(arg1_00);
    }
    return iVar1;
}


// ===== sym.nvme_user_cmd @ 0x0800f82c (size 680) =====

void sym.nvme_user_cmd(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint64_t uVar2;
    bool bVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    uint *extraout_x8;
    uint *puVar7;
    uint extraout_w9;
    uint *puVar8;
    ulong *in_x18;
    ulong unaff_x30;
    uint uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    uint64_t uStack_a8;
    uint64_t uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    uint64_t uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    uint uStack_48;
    uint uStack_44;
    uint uStack_40;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c0 = 0;
    uVar4 = capable(0x15);
    if ((uVar4 & 1) == 0) {
        uVar6 = 0xfffffff3;
        goto code_r0x0800f8a0;
    }
    iVar5 = sym._copy_from_user(&uStack_c0,arg3,0x48);
    if (iVar5 == 0) {
        if (uStack_c0._1_1_ != '\0') {
            uVar6 = 0xffffffea;
            goto code_r0x0800f8a0;
        }
        if ((arg2 != 0) && (*(*(arg2 + 0x40) + 0x2d0) != uStack_c0._4_4_)) {
            iVar5 = sp_el0;
            _dev_err(*(arg1 + 0x460),"%s: nsid (%u) in cmd does not match nsid (%u)of namespace\n",iVar5 + 0x7a8);
            uVar6 = 0xffffffea;
            goto code_r0x0800f8a0;
        }
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_78 = uStack_c0 & 0xffffffff000000ff;
        uStack_70 = uStack_b8;
        uStack_58 = 0;
        uStack_50 = uStack_98;
        uStack_48 = uStack_90;
        uStack_44 = uStack_90._4_4_;
        uStack_40 = uStack_88;
        uStack_3c = uStack_88._4_4_;
        if (uStack_80 != 0) {
            __msecs_to_jiffies();
        }
        piVar1 = arg1 + 0x48;
        arg1 = sp_el0;
        if (arg2 != 0) {
            piVar1 = arg2 + 0x18;
        }
        uVar4 = uStack_a8;
        if ((*arg1 & 0x400000) != 0) {
            uVar4 = uStack_a8 & 0xffffffff;
        }
        uVar6 = sym.nvme_submit_user_cmd(*piVar1,&uStack_78,uVar4,uStack_a0 >> 0x20);
        if (uVar6 < 0) goto code_r0x0800f8a0;
        puVar7 = arg3 + 0x44;
        uVar4 = puVar7 * 0x100 >> 8;
        if (((*(arg1 + 0x3e) >> 5 & 1) != 0) || (puVar8 = puVar7, (*arg1 >> 0x1a & 1) != 0)) {
            puVar8 = puVar7 & uVar4;
        }
        bVar3 = 0xfffffffffffffffb < puVar8;
        puVar8 = puVar8 + 1;
        uVar2 = 0;
        if (!bVar3 || puVar8 == NULL) {
            uVar2 = 0x7fffffffff;
        }
        if (bVar3) {
            puVar8 = 0xffffffffffffffff;
        }
        if (!CARRY8(puVar8,~uVar2) && !CARRY8(puVar8 + ~uVar2,bVar3) || puVar8 == uVar2 + !bVar3) {
            if ((puVar7 & uVar4 & 0xffffff8000000000) != 0) {
                puVar7 = NULL;
            }
            uStack_c8 = 0;
            goto code_r0x0800fab0;
        }
    }
    uVar6 = 0xfffffff2;
code_r0x0800f8a0:
    while (iVar5 = sp_el0, *(iVar5 + 0x5e0) != iStack_38) {
        uVar6 = __stack_chk_fail(uVar6);
        puVar7 = extraout_x8;
        uStack_c8 = extraout_w9;
code_r0x0800fab0:
        if ((_trace_event_buffer_commit >> 0x18 & 1) == 0) {
            uVar4 = daif;
            if ((uVar4 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr1_el1 = *(arg1 + 8) & 0xffff000000000000 | uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = *(arg1 + 8);
            InstructionSynchronizationBarrier();
            daif = uVar4;
        }
        *puVar7 = uStack_c8;
        if ((_trace_event_buffer_commit >> 0x18 & 1) == 0) {
            uVar4 = daif;
            if ((uVar4 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr0_el1 = (uVar2 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar4;
        }
    }
    return;
}


// ===== sym.nvme_user_cmd64 @ 0x0800fb10 (size 684) =====

void sym.nvme_user_cmd64(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint64_t uVar2;
    bool bVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong *extraout_x8;
    ulong *puVar7;
    ulong extraout_x9;
    ulong uVar8;
    ulong *puVar9;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    uint64_t uStack_b0;
    uint64_t uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    uint64_t uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    uint uStack_48;
    uint uStack_44;
    uint uStack_40;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
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
    uVar4 = capable(0x15);
    if ((uVar4 & 1) == 0) {
        uVar6 = 0xfffffff3;
        goto code_r0x0800fb84;
    }
    iVar5 = sym._copy_from_user(&uStack_c8,arg3,0x50);
    if (iVar5 == 0) {
        if (uStack_c8._1_1_ != '\0') {
            uVar6 = 0xffffffea;
            goto code_r0x0800fb84;
        }
        if ((arg2 != 0) && (*(*(arg2 + 0x40) + 0x2d0) != uStack_c8._4_4_)) {
            iVar5 = sp_el0;
            _dev_err(*(arg1 + 0x460),"%s: nsid (%u) in cmd does not match nsid (%u)of namespace\n",iVar5 + 0x7a8);
            uVar6 = 0xffffffea;
            goto code_r0x0800fb84;
        }
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_78 = uStack_c8 & 0xffffffff000000ff;
        uStack_70 = uStack_c0;
        uStack_58 = 0;
        uStack_50 = uStack_a0;
        uStack_48 = uStack_98;
        uStack_44 = uStack_98._4_4_;
        uStack_40 = uStack_90;
        uStack_3c = uStack_90._4_4_;
        if (uStack_88 != 0) {
            __msecs_to_jiffies();
        }
        piVar1 = arg1 + 0x48;
        arg1 = sp_el0;
        if (arg2 != 0) {
            piVar1 = arg2 + 0x18;
        }
        uVar4 = uStack_b0;
        if ((*arg1 & 0x400000) != 0) {
            uVar4 = uStack_b0 & 0xffffffff;
        }
        uVar6 = sym.nvme_submit_user_cmd(*piVar1,&uStack_78,uVar4,uStack_a8 >> 0x20);
        if (uVar6 < 0) goto code_r0x0800fb84;
        puVar7 = arg3 + 0x48;
        uVar4 = puVar7 * 0x100 >> 8;
        if (((*(arg1 + 0x3e) >> 5 & 1) != 0) || (puVar9 = puVar7, (*arg1 >> 0x1a & 1) != 0)) {
            puVar9 = puVar7 & uVar4;
        }
        bVar3 = 0xfffffffffffffff7 < puVar9;
        puVar9 = puVar9 + 1;
        uVar2 = 0;
        if (!bVar3 || puVar9 == NULL) {
            uVar2 = 0x7fffffffff;
        }
        if (bVar3) {
            puVar9 = 0xffffffffffffffff;
        }
        if (!CARRY8(puVar9,~uVar2) && !CARRY8(puVar9 + ~uVar2,bVar3) || puVar9 == uVar2 + !bVar3) {
            uVar8 = uStack_80;
            if ((puVar7 & uVar4 & 0xffffff8000000000) == 0) goto code_r0x0800fd98;
            puVar7 = NULL;
            goto code_r0x0800fd98;
        }
    }
    uVar6 = 0xfffffff2;
code_r0x0800fb84:
    while (iVar5 = sp_el0, *(iVar5 + 0x5e0) != iStack_38) {
        uVar6 = __stack_chk_fail(uVar6);
        puVar7 = extraout_x8;
        uVar8 = extraout_x9;
code_r0x0800fd98:
        if ((_trace_event_buffer_commit >> 0x18 & 1) == 0) {
            uVar4 = daif;
            if ((uVar4 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr1_el1 = *(arg1 + 8) & 0xffff000000000000 | uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = *(arg1 + 8);
            InstructionSynchronizationBarrier();
            daif = uVar4;
        }
        *puVar7 = uVar8;
        if ((_trace_event_buffer_commit >> 0x18 & 1) == 0) {
            uVar4 = daif;
            if ((uVar4 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr0_el1 = (uVar2 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar4;
        }
    }
    return;
}


// ===== sym.nvme_dev_user_cmd @ 0x0800fdf8 (size 284) =====

uint sym.nvme_dev_user_cmd(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t *puVar2;
    int64_t arg2_00;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    uint uVar6;
    ulong uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0x90;
    down_read(iVar1);
    if (arg1 + 0x80 == *(arg1 + 0x80)) {
        uVar6 = 0xffffffe7;
code_r0x0800fe38:
        up_read(iVar1);
        return uVar6;
    }
    arg2_00 = *(arg1 + 0x80);
    if (arg2_00 != *(arg1 + 0x88)) {
        _dev_warn(*(arg1 + 0x460),"NVME_IOCTL_IO_CMD not supported when multiple namespaces present!\n");
        uVar6 = 0xffffffea;
        goto code_r0x0800fe38;
    }
    _dev_warn(*(arg1 + 0x460),"using deprecated NVME_IOCTL_IO_CMD ioctl on the char device!\n");
    puVar2 = arg2_00 + 0x38;
    Hint_Prefetch(puVar2,2,0,1);
    do {
        uVar3 = *puVar2;
        cVar4 = '\x01';
        bVar5 = ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
            *puVar2 = uVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    if (uVar3 == 0) {
        uVar7 = 2;
    }
    else {
        if (-1 < (uVar3 + 1 | uVar3)) goto code_r0x0800fe9c;
        uVar7 = 1;
    }
    refcount_warn_saturate(puVar2,uVar7);
code_r0x0800fe9c:
    up_read(iVar1);
    uVar6 = sym.nvme_user_cmd(arg1,arg2_00,arg2);
    sym.nvme_put_ns(arg2_00);
    return uVar6;
}


// ===== sym.nvme_submit_user_cmd @ 0x0800ff14 (size 636) =====

uint64_t sym.nvme_submit_user_cmd(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    code *pcVar2;
    bool bVar3;
    uint32_t uVar4;
    uint64_t arg1_00;
    int64_t iVar5;
    int64_t in_x4;
    uint32_t in_w5;
    ulong *in_x6;
    int in_w7;
    int64_t iVar6;
    ulong *in_x18;
    int64_t iVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint8_t uVar10;
    ulong unaff_x30;
    uchar noname_1 [16];
    
    *in_x18 = unaff_x30;
    uVar10 = *arg2;
    if (uVar10 == 0x7f) {
        uVar10 = *(arg2 + 4);
        iVar6 = *(arg1 + 0x58);
        if (iVar6 != 0) goto code_r0x0800ff6c;
code_r0x0800ff84:
        iVar6 = 0;
        iVar7 = 0;
    }
    else {
        iVar6 = *(arg1 + 0x58);
        if (iVar6 == 0) goto code_r0x0800ff84;
code_r0x0800ff6c:
        iVar6 = *(iVar6 + 0x20);
        iVar7 = *(iVar6 + 0x40);
    }
    arg1_00 = sym.nvme_alloc_request(iVar6,arg2);
    if (0xfffffffffffff000 < arg1_00) {
        return arg1_00 & 0xffffffff;
    }
    if (in_w7 != 0) {
        *(arg1_00 + 0xec) = in_w7;
    }
    iVar6 = 0;
    uVar8 = 0;
    *(arg1_00 + 0x142) = *(arg1_00 + 0x142) | 2;
    if ((arg3 == 0) || (arg4 == 0)) goto code_r0x080100cc;
    uVar4 = blk_rq_map_user(arg1,arg1_00,0,arg3,arg4 & 0xffffffff,0xcc0);
    uVar9 = uVar4;
    if (uVar4 != 0) goto code_r0x0801014c;
    iVar6 = *(arg1_00 + 0x38);
    if (iVar7 == 0) {
        uVar8 = 0;
code_r0x080100cc:
        uVar4 = sym.nvme_execute_passthru_rq(arg1_00);
        if (in_x6 != NULL) {
            *in_x6 = *(arg1_00 + 0x138);
        }
        bVar3 = uVar4 == 0;
        if (uVar8 != 0 && bVar3) {
            uVar4 = 0;
        }
        uVar9 = uVar4;
        if ((uVar8 != 0 && bVar3) && ((uVar10 & 1) == 0)) {
            if (in_w5 < 0) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x800,0x8010188);
                (*pcVar2)();
            }
            noname_1 = __check_object_size(uVar8,in_w5,1);
            iVar7 = sym._copy_to_user(in_x4,noname_1,in_w5);
            uVar4 = 0;
            if (iVar7 != 0) {
                uVar4 = 0xfffffff2;
            }
            uVar9 = uVar4;
        }
        kfree(uVar8);
    }
    else {
        uVar1 = *(iVar6 + 0x14);
        *(iVar6 + 0x14) = uVar1 & 0xefff;
        if (*(iVar6 + 8) != iVar7) {
            *(iVar6 + 0x14) = uVar1 & 0xef7f;
        }
        *(iVar6 + 8) = iVar7;
        bio_associate_blkg(iVar6);
        uVar8 = 0;
        if ((in_x4 == 0) || (in_w5 == 0)) goto code_r0x080100cc;
        uVar8 = in_w5;
        iVar7 = __kmalloc(uVar8,0xcc0);
        if (iVar7 == 0) {
            uVar9 = 0xfffffff400000000;
        }
        else {
            if ((uVar10 & 1) == 0) {
code_r0x08010088:
                uVar9 = 0xffffffea00000000;
            }
            else {
                uVar9 = 0xfffffff200000000;
                if (in_w5 < 0) {
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x800,0x8010190);
                    (*pcVar2)();
                }
                __check_object_size(iVar7,uVar8,0);
                iVar5 = sym._copy_from_user(iVar7,in_x4,uVar8);
                if (iVar5 == 0) goto code_r0x08010088;
            }
            kfree(iVar7);
        }
        uVar8 = uVar9 >> 0x20;
        if (uVar8 < 0xfffffffffffff001) {
            *(arg1_00 + 0x18) = *(arg1_00 + 0x18) | 0x10000;
            goto code_r0x080100cc;
        }
        uVar9 = uVar9 >> 0x20;
    }
    if (iVar6 != 0) {
        blk_rq_unmap_user(iVar6);
    }
code_r0x0801014c:
    blk_mq_free_request(arg1_00);
    return uVar9;
}


// ===== sym._copy_from_user @ 0x08010194 (size 376) =====

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
        if ((_trace_event_buffer_commit >> 0x18 & 1) == 0) {
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
        if ((_trace_event_buffer_commit >> 0x18 & 1) == 0) {
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


// ===== sym._copy_to_user @ 0x08010348 (size 312) =====

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
        if ((_trace_event_buffer_commit >> 0x18 & 1) == 0) {
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
        if ((_trace_event_buffer_commit >> 0x18 & 1) == 0) {
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


// ===== sym.nvme_trace_parse_admin_cmd @ 0x080104bc (size 736) =====

int64_t sym.nvme_trace_parse_admin_cmd(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint uVar3;
    uchar uVar4;
    uint8_t uVar5;
    ushort uVar6;
    ushort uVar7;
    ushort uVar8;
    code *pcVar9;
    char *pcVar10;
    ulong *in_x18;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg2 & 0xff;
    if (10 < uVar1) {
        if (uVar1 == 0x80) {
            uVar2 = *(arg1 + 0x1010);
            if (*(arg1 + 0x1008) <= *(arg1 + 0x1010)) {
                uVar2 = *(arg1 + 0x1008);
            }
            if (0x1000 < uVar2) goto code_r0x08010798;
            uVar5 = *arg3;
            iVar11 = arg1 + (uVar2 & 0xffffffff);
            trace_seq_printf(arg1,"lbaf=%u, mset=%u, pi=%u, pil=%u, ses=%u",uVar5 & 0xf,uVar5 >> 4 & 1,uVar5 >> 5,
                             *(arg3 + 1) & 1,*(arg3 + 1) >> 1 & 7);
            goto code_r0x08010774;
        }
        if (uVar1 == 0x86) {
            uVar2 = *(arg1 + 0x1010);
            if (*(arg1 + 0x1008) <= *(arg1 + 0x1010)) {
                uVar2 = *(arg1 + 0x1008);
            }
            if (0x1000 < uVar2) goto code_r0x08010798;
            iVar11 = arg1 + (uVar2 & 0xffffffff);
            trace_seq_printf(arg1,"slba=0x%llx, mndw=0x%x, rl=0x%x, atype=%u",*arg3,*(arg3 + 8),*(arg3 + 0xc),
                             *(arg3 + 0xf));
            goto code_r0x08010774;
        }
code_r0x08010584:
        uVar2 = *(arg1 + 0x1010);
        if (*(arg1 + 0x1008) <= *(arg1 + 0x1010)) {
            uVar2 = *(arg1 + 0x1008);
        }
        if (0x1000 < uVar2) {
code_r0x08010798:
    //WARNING: Does not return
            pcVar9 = SoftwareBreakpoint(0x5512,0x801079c);
            (*pcVar9)();
        }
        iVar11 = arg1 + (uVar2 & 0xffffffff);
        trace_seq_printf(arg1,"cdw10=%*ph",0x18,arg3);
        goto code_r0x08010774;
    }
    //switch table (11 cases) at 0x8004730
    switch(*((arg2 & 0xffU) + 0x8004730) * 4 + 0x8010500) {
    case 0x8010504:
        uVar2 = *(arg1 + 0x1010);
        if (*(arg1 + 0x1008) <= *(arg1 + 0x1010)) {
            uVar2 = *(arg1 + 0x1008);
        }
        if (0x1000 < uVar2) goto code_r0x08010798;
        uVar6 = *arg3;
        pcVar10 = "sqid=%u";
        break;
    default:
        goto code_r0x08010584;
    case 0x80105c0:
        uVar2 = *(arg1 + 0x1010);
        if (*(arg1 + 0x1008) <= *(arg1 + 0x1010)) {
            uVar2 = *(arg1 + 0x1008);
        }
        if (0x1000 < uVar2) goto code_r0x08010798;
        uVar6 = *arg3;
        uVar7 = *(arg3 + 2);
        uVar8 = *(arg3 + 4);
        pcVar10 = "sqid=%u, qsize=%u, sq_flags=0x%x, cqid=%u";
        goto code_r0x08010660;
    case 0x80105f8:
        uVar2 = *(arg1 + 0x1010);
        if (*(arg1 + 0x1008) <= *(arg1 + 0x1010)) {
            uVar2 = *(arg1 + 0x1008);
        }
        if (0x1000 < uVar2) goto code_r0x08010798;
        uVar6 = *arg3;
        pcVar10 = "cqid=%u";
        break;
    case 0x8010630:
        uVar2 = *(arg1 + 0x1010);
        if (*(arg1 + 0x1008) <= *(arg1 + 0x1010)) {
            uVar2 = *(arg1 + 0x1008);
        }
        if (0x1000 < uVar2) goto code_r0x08010798;
        uVar6 = *arg3;
        uVar7 = *(arg3 + 2);
        uVar8 = *(arg3 + 4);
        pcVar10 = "cqid=%u, qsize=%u, cq_flags=0x%x, irq_vector=%u";
code_r0x08010660:
        iVar11 = arg1 + (uVar2 & 0xffffffff);
        trace_seq_printf(arg1,pcVar10,uVar6,uVar7,uVar8,*(arg3 + 6));
        goto code_r0x08010774;
    case 0x8010674:
        uVar2 = *(arg1 + 0x1010);
        if (*(arg1 + 0x1008) <= *(arg1 + 0x1010)) {
            uVar2 = *(arg1 + 0x1008);
        }
        if (uVar2 < 0x1001) {
            iVar11 = arg1 + (uVar2 & 0xffffffff);
            trace_seq_printf(arg1,"cns=%u, ctrlid=%u",*arg3,*(arg3 + 2));
            goto code_r0x08010774;
        }
        goto code_r0x08010798;
    case 0x80106b0:
        uVar2 = *(arg1 + 0x1010);
        if (*(arg1 + 0x1008) <= *(arg1 + 0x1010)) {
            uVar2 = *(arg1 + 0x1008);
        }
        if (0x1000 < uVar2) goto code_r0x08010798;
        uVar4 = *arg3;
        uVar3 = *(arg3 + 4);
        pcVar10 = "fid=0x%x, sv=0x%x, cdw11=0x%x";
        uVar5 = *(arg3 + 3) & 8;
        goto code_r0x08010720;
    case 0x80106ec:
        uVar2 = *(arg1 + 0x1010);
        if (*(arg1 + 0x1008) <= *(arg1 + 0x1010)) {
            uVar2 = *(arg1 + 0x1008);
        }
        if (0x1000 < uVar2) goto code_r0x08010798;
        uVar4 = *arg3;
        uVar3 = *(arg3 + 4);
        pcVar10 = "fid=0x%x, sel=0x%x, cdw11=0x%x";
        uVar5 = *(arg3 + 1) & 7;
code_r0x08010720:
        iVar11 = arg1 + (uVar2 & 0xffffffff);
        trace_seq_printf(arg1,pcVar10,uVar4,uVar5,uVar3);
        goto code_r0x08010774;
    }
    iVar11 = arg1 + (uVar2 & 0xffffffff);
    trace_seq_printf(arg1,pcVar10,uVar6);
code_r0x08010774:
    trace_seq_putc(arg1,0);
    return iVar11;
}


// ===== sym.nvme_trace_parse_nvm_cmd @ 0x0801079c (size 420) =====

int64_t sym.nvme_trace_parse_nvm_cmd(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    code *pcVar2;
    char *pcVar3;
    ulong uVar4;
    uint32_t uVar5;
    uint16_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    ulong *in_x18;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar7 = arg2 & 0xff;
    if (uVar7 < 0x79) {
        if ((uVar7 - 1 < 2) || (uVar7 == 8)) {
code_r0x0801082c:
            uVar1 = *(arg1 + 0x1010);
            if (*(arg1 + 0x1008) <= *(arg1 + 0x1010)) {
                uVar1 = *(arg1 + 0x1008);
            }
            if (0x1000 < uVar1) goto code_r0x0801093c;
            uVar7 = *(arg3 + 0xc);
            uVar8 = *(arg3 + 0x10);
            uVar4 = *arg3;
            uVar5 = *(arg3 + 8);
            uVar6 = *(arg3 + 10);
            pcVar3 = "slba=%llu, len=%u, ctrl=0x%x, dsmgmt=%u, reftag=%u";
code_r0x08010910:
            iVar9 = arg1 + (uVar1 & 0xffffffff);
            trace_seq_printf(arg1,pcVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
            goto code_r0x08010918;
        }
        if (uVar7 == 9) {
            uVar1 = *(arg1 + 0x1010);
            if (*(arg1 + 0x1008) <= *(arg1 + 0x1010)) {
                uVar1 = *(arg1 + 0x1008);
            }
            if (0x1000 < uVar1) goto code_r0x0801093c;
            iVar9 = arg1 + (uVar1 & 0xffffffff);
            trace_seq_printf(arg1,"nr=%u, attributes=%u",*arg3,*(arg3 + 4));
            goto code_r0x08010918;
        }
    }
    else {
        if (uVar7 == 0x79) {
            uVar1 = *(arg1 + 0x1010);
            if (*(arg1 + 0x1008) <= *(arg1 + 0x1010)) {
                uVar1 = *(arg1 + 0x1008);
            }
            if (uVar1 < 0x1001) {
                iVar9 = arg1 + (uVar1 & 0xffffffff);
                trace_seq_printf(arg1,"slba=%llu, zsa=%u, all=%u",*arg3,*(arg3 + 0xc),*(arg3 + 0xd));
                goto code_r0x08010918;
            }
            goto code_r0x0801093c;
        }
        if (uVar7 == 0x7a) {
            uVar1 = *(arg1 + 0x1010);
            if (*(arg1 + 0x1008) <= *(arg1 + 0x1010)) {
                uVar1 = *(arg1 + 0x1008);
            }
            if (0x1000 < uVar1) goto code_r0x0801093c;
            uVar4 = *arg3;
            uVar5 = *(arg3 + 8);
            uVar6 = *(arg3 + 0xc);
            pcVar3 = "slba=%llu, numd=%u, zra=%u, zrasf=%u, pr=%u";
            uVar7 = *(arg3 + 0xd);
            uVar8 = *(arg3 + 0xe);
            goto code_r0x08010910;
        }
        if (uVar7 == 0x7d) goto code_r0x0801082c;
    }
    uVar1 = *(arg1 + 0x1010);
    if (*(arg1 + 0x1008) <= *(arg1 + 0x1010)) {
        uVar1 = *(arg1 + 0x1008);
    }
    if (0x1000 < uVar1) {
code_r0x0801093c:
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5512,0x8010940);
        (*pcVar2)();
    }
    iVar9 = arg1 + (uVar1 & 0xffffffff);
    trace_seq_printf(arg1,"cdw10=%*ph",0x18,arg3);
code_r0x08010918:
    trace_seq_putc(arg1,0);
    return iVar9;
}


// ===== sym.nvme_trace_parse_fabrics_cmd @ 0x08010940 (size 328) =====

int64_t sym.nvme_trace_parse_fabrics_cmd(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint64_t uVar2;
    code *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg2 & 0xff;
    if (uVar1 == 4) {
        uVar2 = *(arg1 + 0x1010);
        if (*(arg1 + 0x1008) <= *(arg1 + 0x1010)) {
            uVar2 = *(arg1 + 0x1008);
        }
        if (0x1000 < uVar2) goto code_r0x08010a84;
        iVar4 = arg1 + (uVar2 & 0xffffffff);
        trace_seq_printf(arg1,"attrib=%u, ofst=0x%x",*arg3,*(arg3 + 4));
    }
    else if (uVar1 == 1) {
        uVar2 = *(arg1 + 0x1010);
        if (*(arg1 + 0x1008) <= *(arg1 + 0x1010)) {
            uVar2 = *(arg1 + 0x1008);
        }
        if (0x1000 < uVar2) goto code_r0x08010a84;
        iVar4 = arg1 + (uVar2 & 0xffffffff);
        trace_seq_printf(arg1,"recfmt=%u, qid=%u, sqsize=%u, cattr=%u, kato=%u",*arg3,*(arg3 + 2),*(arg3 + 4),
                         *(arg3 + 6),*(arg3 + 8));
    }
    else if ((arg2 & 0xffU) == 0) {
        uVar2 = *(arg1 + 0x1010);
        if (*(arg1 + 0x1008) <= *(arg1 + 0x1010)) {
            uVar2 = *(arg1 + 0x1008);
        }
        if (0x1000 < uVar2) {
code_r0x08010a84:
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x5512,0x8010a88);
            (*pcVar3)();
        }
        iVar4 = arg1 + (uVar2 & 0xffffffff);
        trace_seq_printf(arg1,"attrib=%u, ofst=0x%x, value=0x%llx",*arg3,*(arg3 + 4),*(arg3 + 8));
    }
    else {
        uVar2 = *(arg1 + 0x1010);
        if (*(arg1 + 0x1008) <= *(arg1 + 0x1010)) {
            uVar2 = *(arg1 + 0x1008);
        }
        if (0x1000 < uVar2) goto code_r0x08010a84;
        iVar4 = arg1 + (uVar2 & 0xffffffff);
        trace_seq_printf(arg1,"specific=%*ph",0x18,arg3);
    }
    trace_seq_putc(arg1,0);
    return iVar4;
}


// ===== sym.nvme_trace_disk_name @ 0x08010a88 (size 120) =====

int64_t sym.nvme_trace_disk_name(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + 0x1010);
    if (*(arg1 + 0x1008) <= *(arg1 + 0x1010)) {
        uVar1 = *(arg1 + 0x1008);
    }
    if (uVar1 < 0x1001) {
        if (*arg2 != '\0') {
            trace_seq_printf(arg1,"disk=%s, ",arg2);
        }
        trace_seq_putc(arg1,0);
        return arg1 + (uVar1 & 0xffffffff);
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8010b00);
    (*pcVar2)();
}


// ===== sym.init_module @ 0x08010f0c (size 500) =====

uint64_t sym.init_module(void)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = alloc_workqueue("nvme-wq",0x4a,0);
    if (_segment.ehdr == 0) {
        uVar2 = 0xfffffff4;
        _segment.ehdr = 0;
    }
    else {
        _segment.ehdr = alloc_workqueue("nvme-reset-wq",0x4a,0);
        if (_segment.ehdr == 0) {
            uVar2 = 0xfffffff4;
            _segment.ehdr = 0;
        }
        else {
            _segment.ehdr = alloc_workqueue("nvme-delete-wq",0x4a,0);
            if (_segment.ehdr == 0) {
                uVar2 = 0xfffffff4;
            }
            else {
                uVar1 = alloc_chrdev_region(obj.nvme_init_ctrl.__key,0,0x100000,"nvme");
                if (uVar1 < 0) {
                    uVar2 = uVar1;
                }
                else {
                    uVar2 = __class_create(obj.__this_module,"nvme",obj.nvme_core_init.__key);
                    _segment.ehdr = uVar2;
                    if (uVar2 < 0xfffffffffffff001) {
                        *(uVar2 + 0x28) = sym.nvme_class_uevent.21529633b7289604a80e82acd8b43a39.cfi_jt;
                        uVar2 = __class_create(obj.__this_module,"nvme-subsystem",obj.nvme_core_init.__key);
                        return uVar2;
                    }
                    unregister_chrdev_region(uVar2 & 0xffffffff,0x100000);
                }
                destroy_workqueue(_segment.ehdr);
            }
            destroy_workqueue(_segment.ehdr);
        }
        destroy_workqueue(_segment.ehdr);
    }
    return uVar2 & 0xffffffff;
}


// ===== sym.cleanup_module @ 0x08011100 (size 160) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    class_destroy(CONCAT44(*0x8000004,_segment.ehdr));
    class_destroy(CONCAT44(*0x8000004,_segment.ehdr));
    class_destroy(CONCAT44(*0x8000004,_segment.ehdr));
    unregister_chrdev_region(_segment.ehdr,0x100000);
    unregister_chrdev_region(_segment.ehdr,0x100000);
    destroy_workqueue(CONCAT44(*0x8000004,_segment.ehdr));
    destroy_workqueue(CONCAT44(*0x8000004,_segment.ehdr));
    destroy_workqueue(CONCAT44(*0x8000004,_segment.ehdr));
    ida_destroy(obj.nvme_ns_chr_minor_ida);
    ida_destroy(obj.nvme_instance_ida);
    return;
}

