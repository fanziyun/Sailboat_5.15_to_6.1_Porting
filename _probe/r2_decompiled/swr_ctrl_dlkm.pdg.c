// decompiled from swr_ctrl_dlkm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08003000 (size 944) =====

//WARNING: Switch with 1 destination removed at 0x0800b6bc

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (-0x550b9e52359ac615 < arg1) {
            if (arg1 < -0x3557318fb8d07b71) {
                if (arg1 == -0x550b9e52359ac614) {
                    pcVar2 = sym.swrm_wakeup_work.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
                }
                else {
                    if (arg1 != -0x3987c0e26ee29729) goto code_r0x0800b67c;
                    pcVar2 = sym.swr_mstr_interrupt.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
                }
            }
            else if (arg1 == -0x3557318fb8d07b71) {
                pcVar2 = sym.swrm_remove.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
            }
            else {
                if (arg1 != -0x23bde9afdf166dc6) {
                    if (arg1 != -0x8dc801903aca538) goto code_r0x0800b67c;
                    pcVar2 = sym.swrm_debug_open.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
                    goto code_r0x080033a0;
                }
                pcVar2 = sym.swrm_device_wakeup_vote.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
            }
code_r0x0800337c:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x0800b67c;
        }
        if (arg1 < -0x5b2c57ccc0f2d030) {
            if (arg1 == -0x7c47aca76627e07c) {
                pcVar2 = sym.swrm_connect_port.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
                goto code_r0x0800337c;
            }
            if (arg1 != -0x69404fb83fd1b1d1) goto code_r0x0800b67c;
            pcVar2 = sym.swrm_get_logical_dev_num.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
        }
        else if (arg1 == -0x5b2c57ccc0f2d030) {
            pcVar2 = sym.swrm_write.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
        }
        else {
            if (arg1 != -0x5aad911cff9c034d) {
                if ((arg1 == -0x57be845bca9148ef) && ((pcVar1 + -0x8003410 >> 3 | pcVar1 << 0x3d) < 4)) {
                    return;
                }
                goto code_r0x0800b67c;
            }
            pcVar2 = sym.swrm_bulk_write.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
        }
    }
    else if (arg1 < 0x472ddadd5f5404d8) {
        if (arg1 < 0x14d6870314834279) {
            if (arg1 != 0x2b3a43e29242445) {
                if (arg1 != 0x7ff5a213d37b1a6) goto code_r0x0800b67c;
                pcVar2 = sym.swrm_debug_reg_dump.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
                goto code_r0x0800337c;
            }
            pcVar2 = sym.init_module.cfi_jt;
        }
        else if (arg1 == 0x14d6870314834279) {
            pcVar2 = sym.swrm_remove_from_group.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
        }
        else {
            if (arg1 == 0x1d7ed092cb04d3f1) {
                pcVar2 = sym.swrm_debug_write.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
                goto code_r0x0800337c;
            }
            if (arg1 != 0x44b1a2caaae81ced) goto code_r0x0800b67c;
            pcVar2 = sym.swrm_wcd_notify.cfi_jt;
        }
    }
    else if (arg1 < 0x557ebd4b018aa613) {
        if (arg1 == 0x472ddadd5f5404d8) {
            pcVar2 = sym.swrm_read.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
        }
        else {
            if (arg1 != 0x49a6495099b987e5) goto code_r0x0800b67c;
            pcVar2 = sym.swrm_slvdev_datapath_control.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
        }
    }
    else if (arg1 == 0x557ebd4b018aa613) {
        pcVar2 = sym.swrm_init_port_params.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
    }
    else if (arg1 == 0x7d57972cd3914fb1) {
        pcVar2 = sym.swrm_event_notify.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800b67c;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
code_r0x080033a0:
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x0800b67c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800b6d0);
    (*pcVar1)();
}


// ===== sym.swrm_get_logical_dev_num.4f7a57b380afe65abf3a3fec691fe242.cfi_jt @ 0x080033b8 (size 8) =====

int sym.swrm_get_logical_dev_num.4f7a57b380afe65abf3a3fec691fe242.cfi_jt
              (int64_t param_1,uint64_t param_2,uchar *param_3)

{
    int64_t *piVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    ulong uVar8;
    ulong *in_x18;
    int64_t arg1;
    int64_t iVar9;
    int iVar10;
    uint32_t uVar11;
    int64_t *piVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || (arg1 = *(param_1 + 0x98), arg1 == 0)) {
        _printk(0x80015b5,"swrm_get_logical_dev_num");
        return -0x16;
    }
    uVar2 = *(arg1 + 0x1ee4);
    mutex_lock(arg1 + 0x1d50);
    cVar3 = *(arg1 + 0x38d4);
    mutex_unlock(arg1 + 0x1d50);
    if (cVar3 == '\0') {
        return -0x16;
    }
    __pm_runtime_resume(*(arg1 + 0x1c70),4);
    if (uVar2 - 1 < 0xfffffffe) {
        piVar1 = param_1 + 0x3d8;
        iVar10 = -0x16;
        uVar11 = 1;
        do {
            uVar6 = sym.swr_master_read(arg1,uVar11 * 8 + 0x534);
            uVar7 = sym.swr_master_read(arg1,uVar11 * 8 + 0x530);
            piVar12 = *piVar1;
            if (piVar1 != piVar12) {
                uVar6 = uVar7 & 0xffffffff | (uVar6 & 0xffff) << 0x20;
                do {
                    if (piVar12[0x75] == uVar6) {
                        iVar5 = sym.swr_master_read(arg1,0x1090);
                        *(arg1 + 0x1ee8) = iVar5;
                        if ((iVar5 >> ((uVar11 & 0xf) << 1) & 3U) - 1 < 2) {
                            *(piVar12 + 2) = uVar11;
                            if (uVar6 == param_2) {
                                *param_3 = uVar11;
                                _dev_info(*(arg1 + 0x1c70),"%s: devnum %d assigned for dev %llx\n",
                                          "swrm_get_logical_dev_num",uVar11,piVar12[0x75]);
                                iVar10 = 0;
                            }
                        }
                    }
                    piVar12 = *piVar12;
                } while (piVar1 != piVar12);
            }
            bVar4 = uVar11 != uVar2;
            uVar11 = uVar11 + 1;
        } while (bVar4);
        if (iVar10 == 0) goto code_r0x08006d2c;
    }
    else {
        iVar10 = -0x16;
    }
    _dev_err(*(arg1 + 0x1c70),"%s: device 0x%llx is not ready\n","swrm_get_logical_dev_num",param_2);
code_r0x08006d2c:
    iVar9 = *(arg1 + 0x1c70);
    uVar8 = ktime_get_mono_fast_ns();
    *(iVar9 + 0x218) = uVar8;
    __pm_runtime_suspend(*(arg1 + 0x1c70),0xd);
    return iVar10;
}


// ===== sym.swrm_slvdev_datapath_control.4f7a57b380afe65abf3a3fec691fe242.cfi_jt @ 0x080033c0 (size 8) =====

ulong sym.swrm_slvdev_datapath_control.4f7a57b380afe65abf3a3fec691fe242.cfi_jt(int64_t param_1,uint64_t param_2)

{
    uint64_t *puVar1;
    ushort *puVar2;
    uint32_t uVar3;
    uint8_t uVar4;
    int iVar5;
    uint8_t uVar6;
    uint32_t uVar7;
    char cVar8;
    bool bVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    int iVar12;
    uint32_t uVar13;
    ulong uVar14;
    int iVar15;
    uchar *puVar16;
    uint64_t uVar17;
    int64_t iVar18;
    int iVar19;
    int iVar20;
    ulong *in_x18;
    int64_t arg1;
    int64_t iVar21;
    uint32_t uVar22;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || (arg1 = *(param_1 + 0x98), arg1 == 0)) {
        iVar12 = ___ratelimit(obj.swrm_slvdev_datapath_control._rs,"swrm_slvdev_datapath_control");
        if (iVar12 == 0) {
            return 0xfffffff2;
        }
        _printk(0x8001add,"swrm_slvdev_datapath_control");
        return 0xfffffff2;
    }
    mutex_lock(arg1 + 0x1d80);
    if ((*(arg1 + 0x3718) == 4) && ((param_2 & 1) == 0)) {
        if ((*(arg1 + 0x3710) >> 1 & 1) == 0) goto code_r0x08007b74;
        puVar1 = arg1 + 0x3710;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar8 = '\x01';
            bVar9 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar9) {
                *puVar1 = *puVar1 & 0xfffffffffffffffd;
                cVar8 = ExclusiveMonitorsStatus();
            }
        } while (cVar8 != '\0');
        sym.swrm_cleanup_disabled_port_reqs(param_1);
        *(arg1 + 0x394c) = 0;
        if (*(param_1 + 0x1c09) != '\0') goto code_r0x08007b74;
        iVar21 = *(arg1 + 0x1c70);
        uVar14 = ktime_get_mono_fast_ns();
        *(iVar21 + 0x218) = uVar14;
    }
    else {
        uVar10 = sym.swr_master_read(arg1,0x104c);
        uVar10 = uVar10 & 1;
        puVar1 = arg1 + 0x3710;
        if ((param_2 & 1) == 0) {
            if ((*(arg1 + 0x3710) >> 1 & 1) == 0) goto code_r0x08007b74;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar8 = '\x01';
                bVar9 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar9) {
                    *puVar1 = *puVar1 & 0xfffffffffffffffd;
                    cVar8 = ExclusiveMonitorsStatus();
                }
            } while (cVar8 != '\0');
            sym.swrm_disable_ports(param_1,uVar10 ^ 1);
            bVar9 = *(param_1 + 0x1c09) != '\0';
            uVar11 = 0;
            if (bVar9) {
                uVar11 = 7;
            }
            iVar12 = 2;
            if (bVar9) {
                iVar12 = 0x10;
            }
            iVar15 = *(arg1 + 0x1ee0);
        }
        else {
            if ((*(arg1 + 0x3710) & 1) == 0) goto code_r0x08007b74;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar8 = '\x01';
                bVar9 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar9) {
                    *puVar1 = *puVar1 & 0xfffffffffffffffe;
                    cVar8 = ExclusiveMonitorsStatus();
                }
            } while (cVar8 != '\0');
            iVar12 = *(arg1 + 0x1e8c);
            if (iVar12 != 3) {
                if ((*(arg1 + 0x1fa0) == '\0') || (iVar12 != 2)) {
                    if (iVar12 == 2) {
                        uVar17 = (*(arg1 + 0x1ee0) == 0xac4400) << 1;
                    }
                    else if ((iVar12 == 1) && (*(arg1 + 0x1f00) != '\0')) {
                        uVar17 = *(arg1 + 0x1f10) == 4800000;
                    }
                    else {
                        uVar17 = 0;
                    }
                }
                else {
                    uVar17 = 1;
                }
                iVar21 = 0;
                puVar16 = arg1 + 0x1f0f;
                iVar18 = *(*(arg1 + 0x3930) + uVar17 * 8);
                do {
                    if (puVar16[-0xf] != '\0') {
                        puVar2 = iVar18 + iVar21;
                        *(puVar16 + -9) = *puVar2;
                        puVar16[-0xc] = *(puVar2 + 1);
                        puVar16[-0xb] = *(puVar2 + 3);
                        puVar16[-7] = *(puVar2 + 2);
                        puVar16[-6] = *(puVar2 + 5);
                        puVar16[-4] = *(puVar2 + 7);
                        puVar16[-5] = *(puVar2 + 4);
                        puVar16[-3] = *(puVar2 + 3);
                        puVar16[-2] = *(puVar2 + 9);
                        puVar16[-1] = *(puVar2 + 5);
                        *puVar16 = *(puVar2 + 0xb);
                    }
                    iVar21 = iVar21 + 0xc;
                    puVar16 = puVar16 + 0x28;
                } while (iVar21 != 0x9c);
            }
            sym.swr_master_write(arg1,*(arg1 + 0x1e90) * 0x1000 + 0x4004,0x1dfdfd);
            iVar21 = *(param_1 + 0x98);
            if (iVar21 == 0) {
                iVar12 = ___ratelimit(obj.swrm_apply_port_config._rs,"swrm_apply_port_config");
                if (iVar12 != 0) {
                    _printk(0x80015b5,"swrm_apply_port_config");
                }
            }
            else {
                uVar11 = sym.swr_master_read(iVar21,0x104c);
                if (*(iVar21 + 0x3960) == 0) {
                    uVar6 = *(iVar21 + 0x1e8a);
                    uVar4 = 0;
                    if (uVar6 != 0xe) {
                        uVar4 = uVar6 + 1 & 0xf;
                    }
                    *(iVar21 + 0x1e8a) = uVar4;
                    sym.swrm_cmd_fifo_wr_cmd(iVar21,1,0xf,uVar6);
                }
                sym.swrm_copy_data_port_config(param_1,~uVar11 & 1);
            }
            iVar15 = *(arg1 + 0x1ee0);
            uVar11 = 0;
            if (iVar15 != 600000) {
                uVar11 = 7;
            }
            iVar12 = 2;
            if (iVar15 != 600000) {
                iVar12 = 0x10;
            }
        }
        iVar5 = *(arg1 + 0x1edc);
        uVar22 = 0;
        bVar9 = iVar5 != 0xac4400;
        iVar19 = 0x40;
        if (bVar9) {
            iVar19 = 0x32;
        }
        iVar20 = 0xe5b;
        if (bVar9) {
            iVar20 = 4000;
        }
        iVar20 = iVar19 * iVar12 * iVar20;
        uVar7 = 0;
        if (iVar20 != 0) {
            uVar7 = (iVar15 << 1) / iVar20;
        }
        iVar12 = 3;
        if (bVar9) {
            iVar12 = 1;
        }
        if ((iVar15 != 0) && (iVar5 != 0)) {
            iVar19 = 0;
            if (iVar15 != 0) {
                iVar19 = iVar5 / iVar15;
            }
            uVar22 = 0x500;
            switch(iVar19) {
            case 2:
                uVar22 = 0x100;
                break;
            default:
                uVar22 = 0;
                break;
            case 4:
                uVar22 = 0x200;
                break;
            case 8:
                uVar22 = 0x300;
                break;
            case 0x10:
                uVar22 = 0x400;
                break;
            case 0x20:
                break;
            }
        }
        uVar3 = (uVar10 ^ 1) << 6 | 0x101c;
        uVar13 = sym.swr_master_read(arg1,uVar3);
        uVar11 = uVar11 | iVar12 << 3;
        sym.swr_master_write(arg1,uVar3,uVar13 & 0xff00f800 | (uVar22 | uVar11 | (uVar7 & 0xff) << 0x10) - 0x10000);
        sym.swrm_cmd_fifo_wr_cmd(arg1,uVar11,0xf,0xf);
        if ((param_2 & 1) == 0) {
            sym.swrm_disable_ports(param_1,uVar10);
            sym.swrm_cleanup_disabled_port_reqs(param_1);
        }
        else {
            sym.swrm_copy_data_port_config(param_1,uVar10);
        }
        if (*(param_1 + 0x1c09) != '\0') goto code_r0x08007b74;
        iVar21 = *(arg1 + 0x1c70);
        uVar14 = ktime_get_mono_fast_ns();
        *(iVar21 + 0x218) = uVar14;
        if ((param_2 & 1) == 0) {
            pm_runtime_set_autosuspend_delay(*(arg1 + 0x1c70),0x50);
        }
    }
    __pm_runtime_suspend(*(arg1 + 0x1c70),0xd);
code_r0x08007b74:
    mutex_unlock(arg1 + 0x1d80);
    return 0;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080033c8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.swrm_probe.4f7a57b380afe65abf3a3fec691fe242.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080033d0 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.swrm_probe.4f7a57b380afe65abf3a3fec691fe242.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.swrm_bulk_write.4f7a57b380afe65abf3a3fec691fe242.cfi_jt @ 0x080033d8 (size 8) =====

ulong sym.swrm_bulk_write.4f7a57b380afe65abf3a3fec691fe242.cfi_jt
                (int64_t param_1,uint8_t param_2,int64_t param_3,int64_t param_4,uint64_t param_5)

{
    uint8_t uVar1;
    char cVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    uint16_t uVar5;
    int iVar6;
    int64_t arg2;
    int64_t arg3;
    ulong uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint32_t uVar10;
    ulong *in_x18;
    int64_t iVar11;
    ulong uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((param_1 == 0) || (iVar11 = *(param_1 + 0x98), iVar11 == 0)) || (*(iVar11 + 0x1e98) == 0)) {
        iVar6 = ___ratelimit(obj.swrm_bulk_write._rs,"swrm_bulk_write");
        if (iVar6 != 0) {
            _dev_err(param_1,"%s: swrm is NULL\n","swrm_bulk_write");
        }
    }
    else if (param_5 != 0) {
        mutex_lock(iVar11 + 0x1d50);
        cVar2 = *(iVar11 + 0x38d4);
        mutex_unlock(iVar11 + 0x1d50);
        if (cVar2 == '\0') {
            return 0;
        }
        __pm_runtime_resume(*(iVar11 + 0x1c70),4);
        if (param_2 == 0) {
            iVar6 = ___ratelimit(obj.swrm_bulk_write._rs.203,"swrm_bulk_write");
            if (iVar6 != 0) {
                _dev_err(param_1,"%s: No support of Bulk write for master regs\n","swrm_bulk_write");
            }
            uVar12 = 0xffffffea;
        }
        else {
            if (param_5 >> 0x3e == 0) {
                arg2 = __kmalloc(param_5 << 2,0xdc0);
                if (arg2 != 0) {
                    arg3 = __kmalloc(param_5 << 2,0xdc0);
                    if (arg3 == 0) {
                        uVar12 = 0xfffffff4;
                    }
                    else {
                        uVar8 = 0;
                        do {
                            uVar4 = *(param_4 + uVar8);
                            uVar3 = *(iVar11 + 0x1e89);
                            uVar5 = *(param_3 + uVar8 * 2);
                            if (uVar3 == 0xf) {
                                uVar10 = 0xf0000;
                            }
                            else {
                                uVar1 = 0;
                                if (uVar3 < 0xe) {
                                    uVar1 = uVar3 + 1;
                                }
                                uVar10 = uVar1 << 0x10;
                                *(iVar11 + 0x1e89) = uVar1;
                            }
                            iVar9 = uVar8 * 4;
                            uVar8 = uVar8 + 1;
                            *(arg3 + iVar9) = param_2 << 0x14 | uVar5 | uVar4 << 0x18 | uVar10;
                            *(arg2 + iVar9) = *(iVar11 + 0x1e90) * 0x1000 + 0x4020;
                        } while (uVar8 < param_5);
                        sym.swr_master_bulk_write(iVar11,arg2,arg3,param_5 & 0xffffffff);
                        kfree(arg3);
                        uVar12 = 0;
                    }
                    kfree(arg2);
                    goto code_r0x08006ba4;
                }
            }
            uVar12 = 0xfffffff4;
        }
code_r0x08006ba4:
        __pm_runtime_suspend(*(iVar11 + 0x1c70),0xd);
        iVar11 = *(iVar11 + 0x1c70);
        uVar7 = ktime_get_mono_fast_ns();
        *(iVar11 + 0x218) = uVar7;
        return uVar12;
    }
    return 0xffffffea;
}


// ===== sym.swrm_wcd_notify.cfi_jt @ 0x080033e0 (size 8) =====

int sym.swrm_wcd_notify.cfi_jt(int64_t param_1,int param_2,uint32_t *param_3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    char cVar3;
    int iVar4;
    int iVar5;
    int64_t iVar6;
    code *pcVar7;
    ulong uVar8;
    char *pcVar9;
    ulong uVar10;
    ulong *in_x18;
    int64_t arg2;
    int64_t *piVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        iVar4 = ___ratelimit(obj.swrm_wcd_notify._rs,"swrm_wcd_notify");
        if (iVar4 == 0) {
            return -0x16;
        }
        _printk(0x8001a73,"swrm_wcd_notify");
        return -0x16;
    }
    arg2 = *(param_1 + 0xa8);
    if (arg2 == 0) {
        iVar4 = ___ratelimit(obj.swrm_wcd_notify._rs.8,"swrm_wcd_notify");
        if (iVar4 == 0) {
            return -0x16;
        }
        param_1 = param_1 + 0x10;
        pcVar9 = "%s: swrm is NULL\n";
        goto code_r0x08003f58;
    }
    if (0xb < param_2 - 1U) {
code_r0x08003b44:
        iVar4 = ___ratelimit(obj.swrm_wcd_notify._rs.42,"swrm_wcd_notify");
        if (iVar4 == 0) {
            return 0;
        }
        _dev_err(*(arg2 + 0x1c70),"%s: swr master unknown id %d\n","swrm_wcd_notify",param_2);
        return 0;
    }
    switch(param_2) {
    case 1:
        __trace_bprintk(0x80039a4,*0x800b000,"swrm_wcd_notify");
        mutex_lock(arg2 + 0x1d80);
        if (*(arg2 + 0x3718) != 3) {
            sym.swrm_device_down(param_1 + 0x10);
        }
        break;
    case 2:
        __trace_bprintk(0x8003a40,*0x800b000,"swrm_wcd_notify");
        mutex_lock(arg2 + 0x1d50);
        cVar3 = *(arg2 + 0x38d4);
        mutex_unlock(arg2 + 0x1d50);
        if (cVar3 != '\0') {
            mutex_lock(arg2 + 0x1d80);
            uVar8 = ktime_get_mono_fast_ns();
            *(param_1 + 0x228) = uVar8;
            __pm_runtime_resume(param_1 + 0x10,4);
            mutex_lock(arg2 + 0x1db0);
            piVar11 = *(arg2 + 0x3d8);
            if (piVar11 == arg2 + 0x3d8) {
                iVar4 = 0;
            }
            else {
                do {
                    iVar4 = swr_reset_device(piVar11 + -6);
                    if (iVar4 == -0x13 || iVar4 == 0) {
                        iVar4 = 0;
                    }
                    else {
                        iVar5 = ___ratelimit(obj.swrm_wcd_notify._rs.30,"swrm_wcd_notify");
                        if (iVar5 != 0) {
                            _dev_err(*(arg2 + 0x1c70),"%s: failed to reset swr device %d\n","swrm_wcd_notify",
                                     piVar11[2]);
                        }
                        sym.swrm_clk_request(arg2,0);
                    }
                    piVar11 = *piVar11;
                } while (piVar11 != arg2 + 0x3d8);
            }
            uVar8 = ktime_get_mono_fast_ns();
            *(param_1 + 0x228) = uVar8;
            __pm_runtime_suspend(param_1 + 0x10,0xd);
            mutex_unlock(arg2 + 0x1db0);
            mutex_unlock(arg2 + 0x1d80);
            return iVar4;
        }
        return -0x10;
    case 3:
        goto code_r0x08003b44;
    case 4:
        if (param_3 != NULL) {
            mutex_lock(arg2 + 0x1d80);
            uVar2 = *param_3;
            *(arg2 + 0x3728) = uVar2;
            if ((uVar2 < 2) || (*(arg2 + 0x372c) != '\0')) {
                piVar11 = *(arg2 + 0x3d8);
                if (piVar11 != arg2 + 0x3d8) {
                    do {
                        iVar4 = swr_set_device_group(piVar11 + -6,0);
                        if ((iVar4 != 0) &&
                           (iVar5 = ___ratelimit(obj.swrm_wcd_notify._rs.35,"swrm_wcd_notify"), iVar5 != 0)) {
                            _dev_err(*(arg2 + 0x1c70),"%s: set num ch failed\n","swrm_wcd_notify");
                        }
                        piVar11 = *piVar11;
                    } while (piVar11 != arg2 + 0x3d8);
                    goto code_r0x080040f4;
                }
            }
            else {
                piVar11 = *(arg2 + 0x3d8);
                if (piVar11 != arg2 + 0x3d8) {
                    do {
                        iVar4 = swr_set_device_group(piVar11 + -6,0xf);
                        if ((iVar4 != 0) &&
                           (iVar5 = ___ratelimit(obj.swrm_wcd_notify._rs.33,"swrm_wcd_notify"), iVar5 != 0)) {
                            _dev_err(*(arg2 + 0x1c70),"%s: set num ch failed\n","swrm_wcd_notify");
                        }
                        piVar11 = *piVar11;
                    } while (piVar11 != arg2 + 0x3d8);
                    goto code_r0x080040f4;
                }
            }
            iVar4 = 0;
code_r0x080040f4:
            mutex_unlock(arg2 + 0x1d80);
            return iVar4;
        }
        pcVar7 = obj.swrm_wcd_notify._rs.32;
code_r0x08003f90:
        iVar4 = ___ratelimit(pcVar7,"swrm_wcd_notify");
        if (iVar4 == 0) {
            return -0x16;
        }
        param_1 = *(arg2 + 0x1c70);
        pcVar9 = "%s: data is NULL\n";
code_r0x08003f58:
        _dev_err(param_1,pcVar9,"swrm_wcd_notify");
        return -0x16;
    case 5:
        if (param_3 == NULL) {
            pcVar7 = obj.swrm_wcd_notify._rs.12;
            goto code_r0x08003f90;
        }
        mutex_lock(arg2 + 0x1d80);
        uVar1 = *(arg2 + 0x1edc);
        uVar2 = *param_3;
        if (uVar1 != uVar2) {
            if (*(arg2 + 0x3718) != 3) {
                *(arg2 + 0x1edc) = uVar2;
                *(arg2 + 0x1ee0) = uVar2;
                sym.swrm_switch_frame_shape(arg2,uVar2);
                sym.swrm_device_suspend(param_1 + 0x10);
            }
            usleep_range_state(10000,0x2904,2);
            uVar1 = *param_3;
        }
        *(arg2 + 0x1edc) = uVar1;
        *(arg2 + 0x1ee0) = uVar1;
        break;
    case 6:
        __trace_bprintk(0x8003c88,*0x800b000,"swrm_wcd_notify");
        mutex_lock(arg2 + 0x1d80);
        iVar6 = arg2 + 0x1d50;
        mutex_lock(iVar6);
        *(arg2 + 0x38d4) = 0;
        mutex_unlock(iVar6);
        if (*(arg2 + 0x3718) != 3) {
            sym.swrm_device_down(param_1 + 0x10);
        }
        mutex_lock(iVar6);
        if (*(arg2 + 0x3954) != 0) {
            digital_cdc_rsc_mgr_hw_vote_disable(*(arg2 + 0x3938),*(arg2 + 0x1c70));
        }
        *(arg2 + 0x3954) = 0;
        if (*(arg2 + 0x3958) != 0) {
            digital_cdc_rsc_mgr_hw_vote_disable(*(arg2 + 0x3940),*(arg2 + 0x1c70));
        }
        *(arg2 + 0x3958) = 0;
        mutex_unlock(iVar6);
        mutex_lock(arg2 + 0x1db0);
        *(arg2 + 0x3718) = 4;
        mutex_unlock(arg2 + 0x1db0);
        break;
    case 7:
        __trace_bprintk(0x8003d4c,*0x800b000,"swrm_wcd_notify");
        *(arg2 + 0x1c90) = 0;
        if (((*(arg2 + 0x1c88) != 0) && (iVar6 = wait_for_completion_timeout(arg2 + 0x1c90,0x7d), iVar6 == 0)) &&
           (iVar4 = ___ratelimit(obj.swrm_wcd_notify._rs.20,"swrm_wcd_notify"), iVar4 != 0)) {
            _dev_err(*(arg2 + 0x1c70),"%s: clock voting not zero\n","swrm_wcd_notify");
        }
        if ((*(arg2 + 0x3718) == 2) || (iVar6 = pm_runtime_autosuspend_expiration(*(arg2 + 0x1c70)), iVar6 != 0)) {
            *(arg2 + 0x3718) = 5;
            pm_runtime_set_autosuspend_delay(*(arg2 + 0x1c70),1);
            usleep_range_state(50000,0xc3b4,2);
            *(arg2 + 0x3718) = 4;
        }
        iVar6 = arg2 + 0x1d50;
        mutex_lock(iVar6);
        *(arg2 + 0x38d4) = 1;
        goto code_r0x08003f18;
    case 8:
        if (param_3 != NULL) {
            mutex_lock(arg2 + 0x1d80);
            *(arg2 + 0x38d0) = *param_3;
            iVar4 = sym.swrm_register_wake_irq(arg2);
            if ((iVar4 != 0) && (iVar5 = ___ratelimit(obj.swrm_wcd_notify._rs.38,"swrm_wcd_notify"), iVar5 != 0)) {
                _dev_err(*(arg2 + 0x1c70),"%s: register wake_irq failed\n","swrm_wcd_notify");
            }
            goto code_r0x080040f4;
        }
        iVar4 = ___ratelimit(obj.swrm_wcd_notify._rs.36,"swrm_wcd_notify");
        if (iVar4 == 0) {
            return -0x16;
        }
        param_1 = *(arg2 + 0x1c70);
        pcVar9 = "%s: reg wake irq data is NULL\n";
        goto code_r0x08003f58;
    case 9:
        if (param_3 != NULL) {
            mutex_lock(arg2 + 0x1d80);
            if (*param_3 == 0) {
                iVar4 = -0x16;
            }
            else {
                iVar4 = sym.swrm_alloc_port_mem(param_1 + 0x10,arg2,param_3[1],*param_3);
                if (iVar4 == 0) {
                    sym.swrm_copy_port_config(arg2,param_3,*param_3);
                }
            }
            mutex_unlock(arg2 + 0x1d80);
            return iVar4;
        }
        iVar4 = ___ratelimit(obj.swrm_wcd_notify._rs.40,"swrm_wcd_notify");
        if (iVar4 == 0) {
            return -0x16;
        }
        uVar8 = *(arg2 + 0x1c70);
        pcVar9 = "%s: data is NULL for id=%d\n";
        uVar10 = 9;
code_r0x08004038:
        _dev_err(uVar8,pcVar9,"swrm_wcd_notify",uVar10);
        return -0x16;
    case 10:
        if (param_3 == NULL) {
            iVar4 = ___ratelimit(obj.swrm_wcd_notify._rs.10,"swrm_wcd_notify");
            if (iVar4 == 0) {
                return -0x16;
            }
            uVar8 = *(arg2 + 0x1c70);
            pcVar9 = "%s: data is NULL for id:%d\n";
            uVar10 = 10;
            goto code_r0x08004038;
        }
        mutex_lock(arg2 + 0x1d80);
        if (*(arg2 + 0x395c) != *param_3) {
            if (*(arg2 + 0x3718) == 2) {
                *(arg2 + 0x38d6) = 1;
                sym.swrm_device_suspend(param_1 + 0x10);
                if (*(arg2 + 0x3718) == 2) {
                    *(arg2 + 0x38d6) = 0;
                }
            }
            *(arg2 + 0x395c) = *param_3;
        }
        break;
    default:
        goto code_r0x08003f24;
    }
    iVar6 = arg2 + 0x1d80;
code_r0x08003f18:
    mutex_unlock(iVar6);
code_r0x08003f24:
    return 0;
}


// ===== sym.swrm_debug_open.4f7a57b380afe65abf3a3fec691fe242.cfi_jt @ 0x080033e8 (size 8) =====

ulong sym.swrm_debug_open.4f7a57b380afe65abf3a3fec691fe242.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(param_2 + 0xd8) = *(param_1 + 0x2d8);
    return 0;
}


// ===== sym.swrm_connect_port.4f7a57b380afe65abf3a3fec691fe242.cfi_jt @ 0x080033f0 (size 8) =====

int sym.swrm_connect_port.4f7a57b380afe65abf3a3fec691fe242.cfi_jt(int64_t param_1,uchar *param_2)

{
    char *pcVar1;
    int64_t iVar2;
    char *pcVar3;
    uint uVar4;
    uint32_t uVar5;
    uchar uVar6;
    uchar uVar7;
    char cVar8;
    bool bVar9;
    code *pcVar10;
    int iVar11;
    int iVar12;
    int64_t *piVar13;
    uint64_t uVar14;
    uint8_t uVar15;
    uint32_t uVar16;
    int64_t *piVar17;
    uint64_t *extraout_x8;
    uint64_t *puVar18;
    ulong *in_x18;
    int64_t unaff_x20;
    int64_t iVar19;
    int64_t *piVar20;
    int64_t iVar21;
    uint32_t uVar22;
    uint64_t uVar23;
    uint64_t uVar24;
    ulong unaff_x30;
    uint8_t auStack_70 [4];
    uint8_t auStack_6c [4];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar19 = sp_el0;
    iStack_68 = *(iVar19 + 0x5e0);
    if (param_1 == 0) {
        if (param_2 == NULL) goto code_r0x08007040;
    }
    else {
        iVar19 = *(param_1 + 0x98);
        auStack_6c[0] = 0;
        auStack_70[0] = 0;
        if (param_2 == NULL) goto code_r0x08007040;
        if (iVar19 != 0) {
            unaff_x20 = iVar19 + 0x1d80;
            mutex_lock(unaff_x20);
            iVar2 = iVar19 + 0x1d50;
            mutex_lock(iVar2);
            if (*(iVar19 + 0x38d4) == '\0') {
                swr_port_response(param_1,*param_2);
                mutex_unlock(iVar2);
                mutex_unlock(unaff_x20);
                goto code_r0x08007040;
            }
            mutex_unlock(iVar2);
            pcVar3 = param_1 + 0x1c09;
            if (*pcVar3 == '\0') {
                __pm_runtime_resume(*(iVar19 + 0x1c70),4);
                uVar15 = 0;
                if (param_2[2] == '\0') goto code_r0x0800735c;
            }
            else if (param_2[2] == '\0') {
                uVar15 = 0;
                goto code_r0x0800735c;
            }
            uVar24 = 0;
            iVar2 = iVar19 + 0x1ef0;
            do {
                if (uVar24 == 0xe) {
code_r0x080073c4:
    //WARNING: Does not return
                    pcVar10 = SoftwareBreakpoint(0x5512,0x80073c8);
                    (*pcVar10)();
                }
                pcVar1 = param_2 + uVar24 + 3;
                iVar11 = sym.swrm_get_master_port(iVar19,auStack_6c,auStack_70,param_2[uVar24 + 0x66]);
                uVar15 = auStack_6c[0];
                if (iVar11 != 0) {
                    iVar12 = ___ratelimit(obj.swrm_connect_port._rs.211,"swrm_connect_port");
                    if (iVar12 != 0) {
                        _dev_err(param_1,"%s: mstr portid for slv port %d not found\n","swrm_connect_port",*pcVar1);
                    }
code_r0x080073a0:
                    swr_port_response(param_1,*param_2);
                    sym.swrm_cleanup_disabled_port_reqs(param_1);
                    mutex_unlock(unaff_x20);
                    goto code_r0x08007044;
                }
                uVar23 = auStack_6c[0];
                if (0x9a < uVar23) goto code_r0x080073c4;
                piVar20 = iVar2 + uVar23 * 0x28;
                piVar17 = *piVar20;
                uVar22 = auStack_6c[0];
                if (piVar20 != piVar17) {
                    do {
                        if ((*(piVar17 + -6) == *pcVar1) && (piVar13 = piVar17 + -1, *piVar13 == param_2[1])) {
                            if (piVar13 != NULL) goto code_r0x080071e0;
                            break;
                        }
                        piVar17 = *piVar17;
                    } while (piVar20 != piVar17);
                }
                iVar21 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar21 = 0x30;
                }
                piVar13 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar21),0xdc0,0x28);
                if (piVar13 == NULL) {
                    iVar11 = -0xc;
                    goto code_r0x080073a0;
                }
                uVar6 = param_2[1];
                cVar8 = *pcVar1;
                *(piVar13 + 0x1f) = 0;
                piVar17 = piVar13 + 1;
                uVar7 = param_2[uVar24 + 0x11];
                *piVar13 = uVar6;
                uVar4 = *(param_2 + uVar24 * 4 + 0x20);
                *(piVar13 + 2) = cVar8;
                *(piVar13 + 3) = uVar15;
                *(piVar13 + 0x21) = uVar7;
                *(piVar13 + 0x24) = uVar4;
                iVar21 = *piVar20;
                uVar14 = __list_add_valid(piVar17,piVar20,iVar21);
                if ((uVar14 & 1) != 0) {
                    *(iVar21 + 8) = piVar17;
                    piVar13[1] = iVar21;
                    piVar13[2] = piVar20;
                    *piVar20 = piVar17;
                }
code_r0x080071e0:
                iVar21 = iVar2 + uVar23 * 0x28;
                *(piVar13 + 4) = *(piVar13 + 4) | param_2[uVar24 + 0x58];
                *(iVar21 + 0x10) = 1;
                *(iVar21 + 0x12) = *(iVar21 + 0x12) | auStack_70[0];
                *(param_1 + 0x1c68) = *(param_1 + 0x1c68) | 1 << (uVar22 & 0x1f);
                if ((*(iVar19 + 0x3898) == 0) || (*(iVar19 + 0x1e94) == 0)) {
                    *(iVar2 + uVar23 * 0x28 + 0x20) = *(param_2 + uVar24 * 4 + 0x20);
                }
                else {
                    iVar21 = iVar2 + uVar23 * 0x28;
                    *(iVar21 + 0x20) = *(iVar21 + 0x20) + *(param_2 + uVar24 * 4 + 0x20);
                    uVar22 = *(iVar19 + 0x1f38) + *(iVar19 + 0x1f10) + *(iVar19 + 0x1f60) + *(iVar19 + 0x1f88) +
                             *(iVar19 + 0x1fb0) + *(iVar19 + 0x1fd8) + *(iVar19 + 0x2000) + *(iVar19 + 0x2028) +
                             *(iVar19 + 0x2050) + *(iVar19 + 0x2078) + *(iVar19 + 0x20a0) + *(iVar19 + 0x20c8) +
                             *(iVar19 + 0x20f0);
                    uVar5 = *(iVar19 + 0x1edc);
                    uVar16 = uVar5;
                    if (uVar22 != 0) {
                        if (uVar5 == 0xac4400) {
                            uVar16 = 0xac4400;
                        }
                        else {
                            uVar16 = uVar22;
                            if ((uVar5 == 9600000) && (uVar16 = 600000, 600000 < uVar22)) {
                                uVar4 = 9600000;
                                if (uVar22 < 0x493e01) {
                                    uVar4 = 4800000;
                                }
                                *(iVar19 + 0x1ee0) = uVar4;
                                goto code_r0x080070c0;
                            }
                        }
                    }
                    *(iVar19 + 0x1ee0) = uVar16;
                }
code_r0x080070c0:
                uVar15 = param_2[2];
                uVar24 = uVar24 + 1;
            } while (uVar24 < uVar15);
code_r0x0800735c:
            puVar18 = iVar19 + 0x3710;
            *pcVar3 = *pcVar3 + uVar15;
            goto code_r0x080073d0;
        }
    }
    iVar11 = ___ratelimit(obj.swrm_connect_port._rs,"swrm_connect_port");
    if (iVar11 != 0) {
        _dev_err(param_1,"%s: Invalid handle to swr controller\n","swrm_connect_port");
    }
code_r0x08007040:
    iVar11 = -0x16;
code_r0x08007044:
    while (iVar19 = sp_el0, *(iVar19 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
        puVar18 = extraout_x8;
code_r0x080073d0:
        Hint_Prefetch(puVar18,2,0,1);
        do {
            cVar8 = '\x01';
            bVar9 = ExclusiveMonitorPass(puVar18,0x10);
            if (bVar9) {
                *puVar18 = *puVar18 | 1;
                cVar8 = ExclusiveMonitorsStatus();
            }
        } while (cVar8 != '\0');
        swr_port_response(param_1,*param_2);
        mutex_unlock(unaff_x20);
        iVar11 = 0;
    }
    return iVar11;
}


// ===== sym.swrm_disconnect_port.4f7a57b380afe65abf3a3fec691fe242.cfi_jt @ 0x080033f8 (size 8) =====

void sym.swrm_disconnect_port.4f7a57b380afe65abf3a3fec691fe242.cfi_jt(int64_t param_1,uchar *param_2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t *puVar4;
    uint32_t uVar5;
    char cVar6;
    bool bVar7;
    code *pcVar8;
    int iVar9;
    ulong uVar10;
    char *pcVar11;
    uint8_t uVar12;
    uint32_t uVar13;
    uint64_t uVar14;
    int64_t *piVar15;
    int64_t *piVar16;
    int64_t iVar17;
    ulong *in_x18;
    int64_t iVar18;
    uint64_t uVar19;
    ulong unaff_x30;
    uint8_t auStack_70 [4];
    uint8_t auStack_6c [4];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar18 = sp_el0;
    iStack_68 = *(iVar18 + 0x5e0);
    if (param_1 == 0) {
code_r0x0800764c:
        auStack_6c[0] = 0;
        iVar9 = ___ratelimit(obj.swrm_disconnect_port._rs,"swrm_disconnect_port");
        if (iVar9 != 0) {
            pcVar11 = "%s: Invalid handle to swr controller\n";
code_r0x0800766c:
            _dev_err(param_1,pcVar11,"swrm_disconnect_port");
        }
    }
    else {
        iVar18 = *(param_1 + 0x98);
        auStack_6c[0] = 0;
        auStack_70[0] = 0;
        if (iVar18 == 0) goto code_r0x0800764c;
        if (param_2 != NULL) {
            iVar2 = iVar18 + 0x1d80;
            mutex_lock(iVar2);
            uVar12 = 0;
            if (param_2[2] != '\0') {
                uVar19 = 0;
                iVar3 = iVar18 + 0x1ef0;
                do {
                    if (uVar19 == 0xe) goto code_r0x08007758;
                    iVar9 = sym.swrm_get_master_port(iVar18,auStack_6c,auStack_70,param_2[uVar19 + 0x66]);
                    if (iVar9 != 0) {
                        iVar9 = ___ratelimit(obj.swrm_disconnect_port._rs.218,"swrm_disconnect_port");
                        if (iVar9 != 0) {
                            pcVar11 = "%s: mstr portid for slv port %d not found\n";
code_r0x08007718:
                            _dev_err(param_1,pcVar11,"swrm_disconnect_port",param_2[uVar19 + 3]);
                        }
code_r0x080076bc:
                        swr_port_response(param_1,*param_2);
                        mutex_unlock(iVar2);
                        goto code_r0x080076d0;
                    }
                    uVar14 = auStack_6c[0];
                    if (0x9a < uVar14) goto code_r0x08007758;
                    piVar16 = iVar3 + uVar14 * 0x28;
                    piVar15 = *piVar16;
                    if (piVar16 == piVar15) {
code_r0x080076a4:
                        iVar9 = ___ratelimit(obj.swrm_disconnect_port._rs.219,"swrm_disconnect_port");
                        if (iVar9 != 0) {
                            pcVar11 = "%s:port not enabled : port %d\n";
                            goto code_r0x08007718;
                        }
                        goto code_r0x080076bc;
                    }
                    while ((*(piVar15 + -6) != param_2[uVar19 + 3] || (piVar15[-1] != param_2[1]))) {
                        piVar15 = *piVar15;
                        if (piVar16 == piVar15) goto code_r0x080076a4;
                    }
                    if (piVar15 + -1 == NULL) goto code_r0x080076a4;
                    iVar17 = iVar3 + uVar14 * 0x28;
                    *(piVar15 + 3) = *(piVar15 + 3) & (param_2[uVar19 + 0x58] ^ 0xff);
                    uVar12 = *(iVar17 + 0x12) & (auStack_70[0] ^ 0xff);
                    *(iVar17 + 0x12) = uVar12;
                    if (((*(iVar18 + 0x3898) != 0) && (*(iVar18 + 0x1e94) != 0)) && (uVar12 == 0)) {
                        *(iVar3 + uVar14 * 0x28 + 0x20) = 0;
                        uVar1 = *(iVar18 + 0x1f38) + *(iVar18 + 0x1f10) + *(iVar18 + 0x1f60) + *(iVar18 + 0x1f88) +
                                *(iVar18 + 0x1fb0) + *(iVar18 + 0x1fd8) + *(iVar18 + 0x2000) + *(iVar18 + 0x2028) +
                                *(iVar18 + 0x2050) + *(iVar18 + 0x2078) + *(iVar18 + 0x20a0) + *(iVar18 + 0x20c8) +
                                *(iVar18 + 0x20f0);
                        uVar5 = *(iVar18 + 0x1edc);
                        uVar13 = uVar5;
                        if (uVar1 != 0) {
                            if (uVar5 == 0xac4400) {
                                uVar13 = 0xac4400;
                            }
                            else {
                                uVar13 = uVar1;
                                if (((uVar5 == 9600000) && (uVar13 = 600000, 600000 < uVar1)) &&
                                   (uVar13 = 9600000, uVar1 < 0x493e01)) {
                                    uVar13 = 4800000;
                                }
                            }
                        }
                        *(iVar18 + 0x1ee0) = uVar13;
                    }
                    uVar12 = param_2[2];
                    uVar19 = uVar19 + 1;
                } while (uVar19 < uVar12);
            }
            puVar4 = iVar18 + 0x3710;
            *(param_1 + 0x1c09) = *(param_1 + 0x1c09) - uVar12;
            Hint_Prefetch(puVar4,2,0,1);
            do {
                cVar6 = '\x01';
                bVar7 = ExclusiveMonitorPass(puVar4,0x10);
                if (bVar7) {
                    *puVar4 = *puVar4 | 2;
                    cVar6 = ExclusiveMonitorsStatus();
                }
            } while (cVar6 != '\0');
            swr_port_response(param_1,*param_2);
            mutex_unlock(iVar2);
            uVar10 = 0;
            goto code_r0x080076d4;
        }
        iVar9 = ___ratelimit(obj.swrm_disconnect_port._rs.216,"swrm_disconnect_port");
        if (iVar9 != 0) {
            pcVar11 = "%s: portinfo is NULL\n";
            goto code_r0x0800766c;
        }
    }
code_r0x080076d0:
    uVar10 = 0xffffffea;
code_r0x080076d4:
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail(uVar10);
code_r0x08007758:
    //WARNING: Does not return
    pcVar8 = SoftwareBreakpoint(0x5512,0x800775c);
    (*pcVar8)();
}


// ===== sym.swrm_wakeup_work.4f7a57b380afe65abf3a3fec691fe242.cfi_jt @ 0x08003400 (size 8) =====

void sym.swrm_wakeup_work.4f7a57b380afe65abf3a3fec691fe242.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    char cVar2;
    int iVar3;
    uint64_t uVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 + -0x38a0 != 0) && (piVar1 = param_1 + -0x1c30, *piVar1 != 0)) {
        __trace_bprintk(0x8008d68,*0x800b000,"swrm_wakeup_work");
        mutex_lock(param_1 + -0x1b50);
        cVar2 = *(param_1 + 0x34);
        mutex_unlock(param_1 + -0x1b50);
        if (cVar2 != '\0') {
            uVar4 = sym.swrm_lock_sleep(param_1 + -0x38a0);
            if ((uVar4 & 1) == 0) {
                _dev_err(*piVar1,"%s Failed to hold suspend\n","swrm_wakeup_work");
            }
            else {
                __pm_runtime_resume(*piVar1,4);
                iVar6 = *piVar1;
                uVar5 = ktime_get_mono_fast_ns();
                *(iVar6 + 0x218) = uVar5;
                __pm_runtime_suspend(*piVar1,0xd);
                mutex_lock(param_1 + -0x1ac0);
                iVar3 = *(param_1 + 0x88) + -1;
                *(param_1 + 0x88) = iVar3;
                if (iVar3 == 0) {
                    if (*(param_1 + 0x68) == 1) {
                        *(param_1 + 0x68) = 0;
                    }
                    cpu_latency_qos_update_request(param_1 + 0x38,0xffffffff);
                    pm_relax(*piVar1);
                }
                mutex_unlock(param_1 + -0x1ac0);
                __wake_up(param_1 + 0x70,3,0,0);
            }
        }
        __trace_bprintk(0x8008e40,*0x800b000,"swrm_wakeup_work");
        pm_relax(*piVar1);
        return;
    }
    _printk(0x80027d6,"swrm_wakeup_work");
    return;
}


// ===== sym.swrm_notify_work_fn.4f7a57b380afe65abf3a3fec691fe242.cfi_jt @ 0x08003408 (size 8) =====

void sym.swrm_notify_work_fn.4f7a57b380afe65abf3a3fec691fe242.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0x3780) || (*(param_1 + -0x60) == 0)) {
        iVar1 = ___ratelimit(obj.swrm_notify_work_fn._rs,"swrm_notify_work_fn");
        if (iVar1 != 0) {
            _printk(0x8001c86,"swrm_notify_work_fn");
        }
    }
    else {
        sym.swrm_wcd_notify(*(param_1 + -0x60),1,0);
    }
    return;
}


// ===== sym.swrm_resume.4f7a57b380afe65abf3a3fec691fe242.cfi_jt @ 0x08003410 (size 8) =====

int sym.swrm_resume.4f7a57b380afe65abf3a3fec691fe242.cfi_jt(int64_t param_1)

{
    int iVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0x98);
    if ((*(param_1 + 0x200) & 7) == 0) {
        iVar2 = __pm_runtime_suspend(param_1,0);
        iVar1 = 0;
        if (iVar2 != 0) goto code_r0x0800b61c;
    }
    iVar1 = sym.swrm_runtime_resume(param_1);
    if (iVar1 == 0) {
        uVar3 = ktime_get_mono_fast_ns();
        *(param_1 + 0x218) = uVar3;
        __pm_runtime_suspend(param_1,9);
    }
code_r0x0800b61c:
    mutex_lock(iVar4 + 0x1de0);
    if (*(iVar4 + 0x3908) == 2) {
        *(iVar4 + 0x3908) = 0;
    }
    mutex_unlock(iVar4 + 0x1de0);
    __wake_up(iVar4 + 0x3910,3,0,0);
    return iVar1;
}


// ===== sym.swrm_suspend.4f7a57b380afe65abf3a3fec691fe242.cfi_jt @ 0x08003418 (size 8) =====

uint64_t sym.swrm_suspend.4f7a57b380afe65abf3a3fec691fe242.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar6;
    int64_t iVar7;
    ulong unaff_x30;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    iVar7 = *(param_1 + 0x98);
    iVar4 = iVar7 + 0x1de0;
    mutex_lock(iVar4);
    if (*(iVar7 + 0x3908) == 1) {
        mutex_unlock(iVar4);
        if (iVar7 != 0) {
            mutex_lock(iVar4);
            if (*(iVar7 + 0x3908) == 0) {
                *(iVar7 + 0x3908) = 2;
                mutex_unlock(iVar4);
            }
            else {
                mutex_unlock(iVar4);
                uStack_68 = 0;
                uStack_60 = 0;
                uStack_78 = 0;
                uStack_70 = 0;
                uStack_80 = 0;
                init_wait_entry(&uStack_80,0);
                iVar6 = 1;
                while( true ) {
                    prepare_to_wait_event(iVar7 + 0x3910,&uStack_80,2);
                    mutex_lock(iVar4);
                    iVar2 = *(iVar7 + 0x3908);
                    if (iVar2 == 0) {
                        *(iVar7 + 0x3908) = 2;
                    }
                    mutex_unlock(iVar4);
                    if (iVar6 == 0 && iVar2 == 0) {
                        iVar6 = 1;
                    }
                    if ((iVar2 == 0) || (iVar6 == 0)) break;
                    iVar6 = schedule_timeout(iVar6);
                }
                finish_wait(iVar7 + 0x3910,&uStack_80);
                if (iVar6 == 0) goto code_r0x0800b574;
            }
        }
        mutex_lock(iVar4);
code_r0x0800b520:
        mutex_unlock(iVar4);
        if (((*(param_1 + 0x200) & 7) == 0) && (*(param_1 + 0x20c) == 2)) goto code_r0x0800b574;
        uVar3 = sym.swrm_runtime_suspend(param_1);
        if (uVar3 == -0x10) goto code_r0x0800b574;
        if (uVar3 == 0) {
            __pm_runtime_disable(param_1,1);
            __pm_runtime_set_status(param_1,2);
            pm_runtime_enable(param_1);
            goto code_r0x0800b574;
        }
    }
    else {
        if (*(iVar7 + 0x3908) != 0) goto code_r0x0800b520;
        mutex_unlock(iVar4);
        sym.swrm_device_suspend(*(iVar7 + 0x1c70));
        mutex_lock(iVar4);
        if (*(iVar7 + 0x3908) != 1) {
            if (*(iVar7 + 0x3908) == 0) {
                *(iVar7 + 0x3908) = 2;
            }
            goto code_r0x0800b520;
        }
        mutex_unlock(iVar4);
code_r0x0800b574:
        uVar3 = 0;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_58) {
        return uVar3;
    }
    iVar4 = __stack_chk_fail(uVar3);
    *extraout_x18 = sym.swrm_resume;
    iVar7 = *(iVar4 + 0x98);
    if ((*(iVar4 + 0x200) & 7) == 0) {
        iVar2 = __pm_runtime_suspend(iVar4,0);
        uVar3 = 0;
        if (iVar2 != 0) goto code_r0x0800b61c;
    }
    uVar1 = sym.swrm_runtime_resume(iVar4);
    uVar3 = uVar1;
    if (uVar1 == 0) {
        uVar5 = ktime_get_mono_fast_ns();
        *(iVar4 + 0x218) = uVar5;
        __pm_runtime_suspend(iVar4,9);
    }
code_r0x0800b61c:
    mutex_lock(iVar7 + 0x1de0);
    if (*(iVar7 + 0x3908) == 2) {
        *(iVar7 + 0x3908) = 0;
    }
    mutex_unlock(iVar7 + 0x1de0);
    __wake_up(iVar7 + 0x3910,3,0,0);
    return uVar3;
}


// ===== sym.swrm_runtime_suspend.4f7a57b380afe65abf3a3fec691fe242.cfi_jt @ 0x08003420 (size 8) =====

int sym.swrm_runtime_suspend.4f7a57b380afe65abf3a3fec691fe242.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    bool bVar2;
    bool bVar3;
    int iVar4;
    int iVar5;
    uint32_t uVar6;
    int iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong *in_x18;
    int64_t arg1;
    int64_t *piVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x98);
    __trace_bprintk(0x80049d0,*0x800b000,"swrm_runtime_suspend",*(arg1 + 0x3718));
    if (*(arg1 + 0x3718) == 5) {
        *(arg1 + 0x3718) = 4;
        return 0;
    }
    mutex_lock(arg1 + 0x1e40);
    iVar1 = arg1 + 0x1db0;
    mutex_lock(iVar1);
    mutex_lock(arg1 + 0x3730);
    iVar7 = *(arg1 + 0x3718);
    mutex_unlock(arg1 + 0x3730);
    iVar4 = sym.swrm_request_hw_vote(arg1,0,1);
    if ((iVar4 == 0) || (iVar5 = ___ratelimit(obj.swrm_runtime_suspend._rs,"swrm_runtime_suspend"), iVar5 == 0)) {
        if (*(arg1 + 0x3974) == 0) goto code_r0x08004acc;
code_r0x08004a88:
        iVar5 = sym.swrm_request_hw_vote(arg1,1,1);
        bVar3 = iVar5 != 0;
        if (iVar7 == 4) goto code_r0x08004b18;
code_r0x08004ad8:
        if (iVar7 != 2) goto code_r0x08004e24;
        if (*(arg1 + 0x1c09) == '\0') goto code_r0x08004b18;
        __trace_bprintk(0x8004ae8,*0x800b000,"swrm_runtime_suspend");
        iVar5 = -0x10;
        iVar7 = *(arg1 + 0x3974);
joined_r0x08004b10:
        if (iVar7 != 0) goto code_r0x08004e38;
code_r0x08004e14:
        if (*(arg1 + 0x3718) == 2) goto code_r0x08004e4c;
    }
    else {
        _dev_err(param_1,"%s:lpass core hw enable failed\n","swrm_runtime_suspend");
        if (*(arg1 + 0x3974) != 0) goto code_r0x08004a88;
code_r0x08004acc:
        bVar3 = false;
        if (iVar7 != 4) goto code_r0x08004ad8;
code_r0x08004b18:
        if ((*(arg1 + 0x3898) == 0) || (*(arg1 + 0x3718) == 4)) {
            iVar5 = ___ratelimit(obj.swrm_runtime_suspend._rs.66,"swrm_runtime_suspend");
            if (iVar5 != 0) {
                _dev_err(param_1,"%s: clk stop mode not supported or SSR entry\n","swrm_runtime_suspend");
            }
            if (*(arg1 + 0x3718) != 4) {
                mutex_unlock(iVar1);
                sym.swrm_cmd_fifo_wr_cmd(arg1,8,0xf,0xf);
                mutex_lock(iVar1);
                sym.swr_master_write(arg1,*(arg1 + 0x1e90) * 0x1000 + 0x4004,0x1dfdfd);
                uVar6 = sym.swr_master_read(arg1,0x1048);
                sym.swr_master_write(arg1,0x1048,uVar6 | 2);
                sym.swr_master_write(arg1,4,0);
                for (piVar10 = *(arg1 + 0x3d8); piVar10 != arg1 + 0x3d8; piVar10 = *piVar10) {
                    iVar5 = swr_device_down(piVar10 + -6);
                    if (iVar5 != 0) {
                        if (iVar5 != -0x13) {
                            iVar7 = ___ratelimit(obj.swrm_runtime_suspend._rs.72,"swrm_runtime_suspend");
                            if (iVar7 != 0) {
                                _dev_err(param_1,"%s: failed to shutdown swr dev %d\n","swrm_runtime_suspend",
                                         *(piVar10 + 2));
                            }
                            __trace_bprintk(0x8004c44,*0x800b000,"swrm_runtime_suspend",*(piVar10 + 2));
                            iVar7 = *(arg1 + 0x3974);
                            goto joined_r0x08004b10;
                        }
                        __trace_bprintk(0x8004bf4,*0x800b000,"swrm_runtime_suspend");
                    }
                }
                __trace_bprintk(0x8004cd8,*0x800b000,"swrm_runtime_suspend");
            }
        }
        else {
            uVar6 = *(arg1 + 0x392c) & 0xfffffff7;
            *(arg1 + 0x392c) = uVar6;
            sym.swr_master_write(arg1,*(arg1 + 0x1e90) * 0x1000 + 0x4004,uVar6);
            mutex_unlock(iVar1);
            sym.swrm_cmd_fifo_wr_cmd(arg1,2,0xf,0xf);
            mutex_lock(iVar1);
            usleep_range_state(100,0x69,2);
        }
        if (0x1050001 < *(arg1 + 0x1ed8)) {
            iVar5 = -100;
            do {
                uVar8 = sym.swr_master_read(arg1,*(arg1 + 0x1e90) * 0x1000 + 0x4064);
                if ((uVar8 & 1) == 0) goto code_r0x08004d60;
                usleep_range_state(500,0x1fe,2);
                bVar2 = iVar5 != -1;
                iVar5 = iVar5 + 1;
            } while (bVar2);
            iVar5 = ___ratelimit(obj.swrm_check_link_status._rs,"swrm_check_link_status");
            if (iVar5 != 0) {
                _dev_err(*(arg1 + 0x1c70),"%s: link status not %s\n","swrm_check_link_status","disconnected");
            }
        }
code_r0x08004d60:
        iVar5 = sym.swrm_clk_request(arg1,0);
        if (iVar5 == 0) {
            if (*(arg1 + 0x3898) != 0) {
                if (*(arg1 + 0x1ed4) < 1) {
                    if (*(arg1 + 0x38d0) != 0) {
                        iVar5 = ___ratelimit(obj.swrm_runtime_suspend._rs.83,"swrm_runtime_suspend");
                        if (iVar5 != 0) {
                            _dev_err(param_1,"%s:notifications disabled\n","swrm_runtime_suspend");
                        }
                        *(arg1 + 0x38d5) = 0;
                    }
                }
                else {
                    iVar9 = irq_get_irq_data();
                    if ((iVar9 != 0) && ((*(*(iVar9 + 0x10) + 2) & 1) != 0)) {
                        enable_irq(*(arg1 + 0x1ed4));
                    }
                }
            }
            if (iVar7 == 4) goto code_r0x08004e08;
code_r0x08004e24:
            *(arg1 + 0x3718) = 3;
            iVar7 = *(arg1 + 0x3974);
        }
        else {
            iVar7 = ___ratelimit(obj.swrm_runtime_suspend._rs.81,"swrm_runtime_suspend");
            if (iVar7 != 0) {
                _dev_err(param_1,"%s: swrmn clk failed\n","swrm_runtime_suspend");
            }
code_r0x08004e08:
            iVar7 = *(arg1 + 0x3974);
        }
        iVar5 = 0;
        if (iVar7 == 0) goto code_r0x08004e14;
code_r0x08004e38:
        if (bVar3) goto code_r0x08004e4c;
    }
    sym.swrm_request_hw_vote(arg1,1,0);
code_r0x08004e4c:
    if (iVar4 == 0) {
        sym.swrm_request_hw_vote(arg1,0,0);
    }
    mutex_unlock(iVar1);
    mutex_unlock(arg1 + 0x1e40);
    __trace_bprintk(0x8004e70,*0x800b000,"swrm_runtime_suspend",*(arg1 + 0x3718));
    pm_runtime_set_autosuspend_delay(param_1,_segment.ehdr);
    return iVar5;
}


// ===== sym.swrm_runtime_resume.4f7a57b380afe65abf3a3fec691fe242.cfi_jt @ 0x08003428 (size 8) =====

int sym.swrm_runtime_resume.4f7a57b380afe65abf3a3fec691fe242.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint8_t uVar3;
    uint uVar4;
    uint8_t uVar5;
    bool bVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    uint32_t uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    ulong *in_x18;
    int64_t arg1;
    int64_t *piVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x98);
    __trace_bprintk(0x8009094,*0x800b000,"swrm_runtime_resume",*(arg1 + 0x3718));
    iVar1 = arg1 + 0x1e40;
    mutex_lock(iVar1);
    iVar2 = arg1 + 0x1db0;
    mutex_lock(iVar2);
    iVar7 = sym.swrm_request_hw_vote(arg1,0,1);
    if (iVar7 == 0) {
        iVar7 = sym.swrm_request_hw_vote(arg1,1,1);
        if ((iVar7 != 0) && (iVar8 = ___ratelimit(obj.swrm_runtime_resume._rs.184,"swrm_runtime_resume"), iVar8 != 0))
        {
            _dev_err(param_1,"%s:lpass audio hw enable failed\n","swrm_runtime_resume");
        }
        if ((*(arg1 + 0x3718) == 3) || ((*(arg1 + 0x3718) == 4 && (*(arg1 + 0x38d4) != '\0')))) {
            if (*(arg1 + 0x3898) != 0) {
                if (0 < *(arg1 + 0x1ed4)) {
                    iVar11 = irq_get_irq_data();
                    if (iVar11 == 0) {
                        iVar7 = ___ratelimit(obj.swrm_runtime_resume._rs.185,"swrm_runtime_resume");
                        if (iVar7 != 0) {
                            _printk(0x8001ff7,"swrm_runtime_resume");
                        }
                        goto code_r0x08009120;
                    }
                    mutex_lock(arg1 + 0x1e10);
                    iVar11 = irq_get_irq_data(*(arg1 + 0x1ed4));
                    if ((*(*(iVar11 + 0x10) + 2) & 1) == 0) {
                        disable_irq_nosync(*(arg1 + 0x1ed4));
                    }
                    mutex_unlock(arg1 + 0x1e10);
                }
                if ((*(arg1 + 0x38d0) != 0) &&
                   (iVar8 = ___ratelimit(obj.swrm_runtime_resume._rs.186,"swrm_runtime_resume"), iVar8 != 0)) {
                    _dev_err(param_1,"%s:notifications disabled\n","swrm_runtime_resume");
                }
            }
            bVar6 = true;
            iVar8 = sym.swrm_clk_request(arg1,1);
            if (iVar8 == 0) {
                if ((*(arg1 + 0x3898) == 0) || (*(arg1 + 0x3718) == 4)) {
                    for (piVar13 = *(arg1 + 0x3d8); piVar13 != arg1 + 0x3d8; piVar13 = *piVar13) {
                        iVar8 = swr_device_up(piVar13 + -6);
                        if (iVar8 != 0) {
                            if (iVar8 != -0x13) {
                                iVar9 = ___ratelimit(obj.swrm_runtime_resume._rs.191,"swrm_runtime_resume");
                                if (iVar9 != 0) {
                                    _dev_err(param_1,"%s: failed to wakeup swr dev %d\n","swrm_runtime_resume",
                                             *(piVar13 + 2));
                                }
                                sym.swrm_clk_request(arg1,0);
                                bVar6 = false;
                                goto code_r0x080094f8;
                            }
                            __trace_bprintk(0x8009268,*0x800b000,"swrm_runtime_resume");
                        }
                    }
                    sym.swr_master_write(arg1,8,1);
                    sym.swr_master_write(arg1,8,1);
                    sym.swr_master_write(arg1,0x1044,1);
                    sym.swrm_master_init(arg1);
                    usleep_range_state(100,0x69,2);
                    if (0x1050001 < *(arg1 + 0x1ed8)) {
                        iVar8 = -100;
                        do {
                            uVar12 = sym.swr_master_read(arg1,*(arg1 + 0x1e90) * 0x1000 + 0x4064);
                            if ((uVar12 & 1) != 0) goto code_r0x0800938c;
                            usleep_range_state(500,0x1fe,2);
                            bVar6 = iVar8 != -1;
                            iVar8 = iVar8 + 1;
                        } while (bVar6);
                        iVar8 = ___ratelimit(obj.swrm_check_link_status._rs,"swrm_check_link_status");
                        if (iVar8 != 0) {
                            _dev_err(*(arg1 + 0x1c70),"%s: link status not %s\n","swrm_check_link_status","connected"
                                    );
                        }
                    }
code_r0x0800938c:
                    uVar5 = *(arg1 + 0x1e8a);
                    uVar3 = 0;
                    if (uVar5 != 0xe) {
                        uVar3 = uVar5 + 1 & 0xf;
                    }
                    *(arg1 + 0x1e8a) = uVar3;
                    sym.swrm_cmd_fifo_wr_cmd(arg1,4,0xf,uVar5);
                    if (*(arg1 + 0x3718) == 4) {
                        mutex_unlock(iVar2);
                        sym.swrm_cmd_fifo_wr_cmd(arg1,8,0xf,0xf);
                        mutex_lock(iVar2);
                    }
                }
                else {
                    if (*(arg1 + 0x1e80) != 0) {
                        uVar10 = sym.readl(*(arg1 + 0x1e80));
                        sym.writel(uVar10 & 0xfffffffd,*(arg1 + 0x1e80));
                    }
                    sym.swr_master_write(arg1,*(arg1 + 0x1e90) * 0x1000 + 0x4060,1);
                    sym.swr_master_write(arg1,*(arg1 + 0x1e90) * 0x1000 + 0x4008,8);
                    uVar10 = *(arg1 + 0x392c) | 8;
                    *(arg1 + 0x392c) = uVar10;
                    sym.swr_master_write(arg1,*(arg1 + 0x1e90) * 0x1000 + 0x4004,uVar10);
                    usleep_range_state(100,0x69,2);
                    if (0x1050001 < *(arg1 + 0x1ed8)) {
                        iVar8 = -100;
                        do {
                            uVar12 = sym.swr_master_read(arg1,*(arg1 + 0x1e90) * 0x1000 + 0x4064);
                            if ((uVar12 & 1) != 0) goto code_r0x080094e8;
                            usleep_range_state(500,0x1fe,2);
                            bVar6 = iVar8 != -1;
                            iVar8 = iVar8 + 1;
                        } while (bVar6);
                        iVar8 = ___ratelimit(obj.swrm_check_link_status._rs,"swrm_check_link_status");
                        if (iVar8 != 0) {
                            _dev_err(*(arg1 + 0x1c70),"%s: link status not %s\n","swrm_check_link_status","connected"
                                    );
                        }
                    }
                }
code_r0x080094e8:
                bVar6 = false;
                iVar8 = 0;
                *(arg1 + 0x3718) = 2;
            }
            else {
                iVar8 = 0;
            }
        }
        else {
            bVar6 = false;
            iVar8 = 0;
        }
code_r0x080094f8:
        if ((*(arg1 + 0x3974) != 0) && (iVar7 == 0)) {
            sym.swrm_request_hw_vote(arg1,1,0);
        }
        sym.swrm_request_hw_vote(arg1,0,0);
        uVar4 = _segment.ehdr;
        if (bVar6 || iVar7 != 0) {
            uVar4 = 1;
        }
        pm_runtime_set_autosuspend_delay(param_1,uVar4);
        if (*(arg1 + 0x38d6) != '\0') {
            *(arg1 + 0x38d6) = '\0';
        }
        mutex_unlock(iVar2);
        mutex_unlock(iVar1);
        __trace_bprintk(0x8009564,*0x800b000,"swrm_runtime_resume",*(arg1 + 0x3718));
    }
    else {
        iVar7 = ___ratelimit(obj.swrm_runtime_resume._rs,"swrm_runtime_resume");
        if (iVar7 != 0) {
            _dev_err(param_1,"%s:lpass core hw enable failed\n","swrm_runtime_resume");
        }
        pm_runtime_set_autosuspend_delay(param_1,1);
        if (*(arg1 + 0x38d6) != '\0') {
            *(arg1 + 0x38d6) = 0;
        }
code_r0x08009120:
        mutex_unlock(iVar2);
        mutex_unlock(iVar1);
        iVar8 = 0;
    }
    return iVar8;
}


// ===== sym.swrm_event_notify.4f7a57b380afe65abf3a3fec691fe242.cfi_jt @ 0x08003430 (size 8) =====

ulong sym.swrm_event_notify.4f7a57b380afe65abf3a3fec691fe242.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0x3768) || (*(param_1 + -0x1af8) == 0)) {
        iVar1 = ___ratelimit(obj.swrm_event_notify._rs,"swrm_event_notify");
        if (iVar1 != 0) {
            _printk(0x8001ca2,"swrm_event_notify");
        }
        return 0xffffffea;
    }
    if (param_2 == 4) {
        if ((*(param_1 + 0x168) == 0) || (*(param_1 + 0x16d) != '\0')) {
            return 0;
        }
        *(param_1 + 0x16d) = '\x01';
        pm_stay_awake();
        param_1 = param_1 + 0x138;
    }
    else {
        if (param_2 != 1) {
            iVar1 = ___ratelimit(obj.swrm_event_notify._rs.288,"swrm_event_notify");
            if (iVar1 == 0) {
                return 0xffffffea;
            }
            _dev_err(*(param_1 + -0x1af8),"%s: invalid event type: %lu\n","swrm_event_notify",param_2);
            return 0xffffffea;
        }
        param_1 = param_1 + 0x18;
    }
    queue_work_on(0x20,_of_get_named_gpio_flags,param_1);
    return 0;
}


// ===== sym.swrm_read.4f7a57b380afe65abf3a3fec691fe242.cfi_jt @ 0x08003438 (size 8) =====

ulong sym.swrm_read.4f7a57b380afe65abf3a3fec691fe242.cfi_jt
                (int64_t param_1,uint64_t param_2,ulong param_3,uint8_t *param_4)

{
    char cVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    int iVar5;
    ulong uVar6;
    ulong uVar7;
    char *pcVar8;
    uint8_t *arg4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t arg1;
    int64_t iVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    uint uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_58 = *(iVar9 + 0x5e0);
    if (param_1 == 0) {
code_r0x080067ac:
        uStack_5c = 0;
        iVar5 = ___ratelimit(obj.swrm_read._rs,"swrm_read");
        arg4 = param_4;
        if (iVar5 != 0) {
            pcVar8 = "%s: swrm is NULL\n";
code_r0x08006834:
            _dev_err(param_1,pcVar8,"swrm_read");
            arg4 = param_4;
        }
    }
    else {
        iVar9 = *(param_1 + 0x98);
        uStack_5c = 0;
        if (iVar9 == 0) goto code_r0x080067ac;
        if ((param_2 & 0xff) != 0) {
            arg4 = param_4;
            mutex_lock(iVar9 + 0x1d50);
            cVar1 = *(iVar9 + 0x38d4);
            mutex_unlock(iVar9 + 0x1d50);
            if (cVar1 == '\0') {
                uVar7 = 0;
            }
            else {
                __pm_runtime_resume(*(iVar9 + 0x1c70),4);
                if (*(iVar9 + 0x38d6) != '\0') {
                    sym.swrm_runtime_resume(*(iVar9 + 0x1c70));
                }
                uVar2 = *(iVar9 + 0x1e8a);
                arg4 = uVar2;
                uVar3 = 0;
                if (uVar2 != 0xe) {
                    uVar3 = uVar2 + 1 & 0xf;
                }
                *(iVar9 + 0x1e8a) = uVar3;
                sym.swrm_cmd_fifo_rd_cmd(iVar9,&uStack_5c,param_2 & 0xffffffff,arg4);
                *param_4 = uStack_5c;
                __pm_runtime_suspend(*(iVar9 + 0x1c70),0xd);
                iVar9 = *(iVar9 + 0x1c70);
                uVar6 = ktime_get_mono_fast_ns();
                uVar7 = 0;
                *(iVar9 + 0x218) = uVar6;
            }
            goto code_r0x080067c8;
        }
        iVar5 = ___ratelimit(obj.swrm_read._rs.180,"swrm_read");
        arg4 = param_4;
        if (iVar5 != 0) {
            pcVar8 = "%s: invalid slave dev num\n";
            goto code_r0x08006834;
        }
    }
    uVar7 = 0xffffffea;
code_r0x080067c8:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_58) {
        return uVar7;
    }
    auVar10 = __stack_chk_fail(uVar7);
    iVar9 = auVar10._0_8_;
    *extraout_x18 = sym.swrm_write;
    if ((iVar9 == 0) || (arg1 = *(iVar9 + 0x98), arg1 == 0)) {
        iVar5 = ___ratelimit(obj.swrm_write._rs,"swrm_write");
        if (iVar5 == 0) {
            return 0xffffffea;
        }
        pcVar8 = "%s: swrm is NULL\n";
    }
    else {
        if ((auVar10._8_8_ & 0xff) != 0) {
            uVar3 = *arg4;
            mutex_lock(arg1 + 0x1d50);
            cVar1 = *(arg1 + 0x38d4);
            mutex_unlock(arg1 + 0x1d50);
            if (cVar1 == '\0') {
                return 0;
            }
            __pm_runtime_resume(*(arg1 + 0x1c70),4);
            if (*(arg1 + 0x38d6) != '\0') {
                sym.swrm_runtime_resume(*(arg1 + 0x1c70));
            }
            uVar4 = *(arg1 + 0x1e8a);
            uVar2 = 0;
            if (uVar4 != 0xe) {
                uVar2 = uVar4 + 1 & 0xf;
            }
            *(arg1 + 0x1e8a) = uVar2;
            sym.swrm_cmd_fifo_wr_cmd(arg1,uVar3,auVar10._8_8_ & 0xffffffff,uVar4);
            __pm_runtime_suspend(*(arg1 + 0x1c70),0xd);
            iVar9 = *(arg1 + 0x1c70);
            uVar7 = ktime_get_mono_fast_ns();
            *(iVar9 + 0x218) = uVar7;
            return 0;
        }
        iVar5 = ___ratelimit(obj.swrm_write._rs.200,"swrm_write");
        if (iVar5 == 0) {
            return 0xffffffea;
        }
        pcVar8 = "%s: invalid slave dev num\n";
    }
    _dev_err(iVar9,pcVar8,"swrm_write");
    return 0xffffffea;
}


// ===== sym.swrm_device_wakeup_vote.4f7a57b380afe65abf3a3fec691fe242.cfi_jt @ 0x08003440 (size 8) =====

void sym.swrm_device_wakeup_vote.4f7a57b380afe65abf3a3fec691fe242.cfi_jt(int64_t param_1)

{
    int iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || (arg1 = *(param_1 + 0x98), arg1 == 0)) {
        iVar1 = ___ratelimit(obj.swrm_device_wakeup_vote._rs,"swrm_device_wakeup_vote");
        if (iVar1 != 0) {
            _printk(0x80015b5,"swrm_device_wakeup_vote");
        }
    }
    else {
        uVar2 = sym.swrm_lock_sleep(arg1);
        if ((uVar2 & 1) == 0) {
            iVar1 = ___ratelimit(obj.swrm_device_wakeup_vote._rs.224,"swrm_device_wakeup_vote");
            if (iVar1 != 0) {
                _dev_err(*(arg1 + 0x1c70),"%s Failed to hold suspend\n","swrm_device_wakeup_vote");
            }
        }
        else {
            iVar1 = sym.swrm_request_hw_vote(arg1,0,1);
            if ((iVar1 != 0) &&
               (iVar1 = ___ratelimit(obj.swrm_device_wakeup_vote._rs.225,"swrm_device_wakeup_vote"), iVar1 != 0)) {
                _dev_err(*(arg1 + 0x1c70),"%s:lpass core hw enable failed\n","swrm_device_wakeup_vote");
            }
            iVar1 = sym.swrm_request_hw_vote(arg1,1,1);
            if ((iVar1 != 0) &&
               (iVar1 = ___ratelimit(obj.swrm_device_wakeup_vote._rs.226,"swrm_device_wakeup_vote"), iVar1 != 0)) {
                _dev_err(*(arg1 + 0x1c70),"%s:lpass audio hw enable failed\n","swrm_device_wakeup_vote");
            }
            __pm_runtime_resume(*(arg1 + 0x1c70),4);
        }
    }
    return;
}


// ===== sym.swrm_device_wakeup_unvote.4f7a57b380afe65abf3a3fec691fe242.cfi_jt @ 0x08003448 (size 8) =====

void sym.swrm_device_wakeup_unvote.4f7a57b380afe65abf3a3fec691fe242.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t arg1;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || (arg1 = *(param_1 + 0x98), arg1 == 0)) {
        iVar1 = ___ratelimit(obj.swrm_device_wakeup_unvote._rs,"swrm_device_wakeup_unvote");
        if (iVar1 != 0) {
            _printk(0x80015b5,"swrm_device_wakeup_unvote");
        }
    }
    else {
        iVar3 = *(arg1 + 0x1c70);
        uVar2 = ktime_get_mono_fast_ns();
        *(iVar3 + 0x218) = uVar2;
        __pm_runtime_suspend(*(arg1 + 0x1c70),0xd);
        sym.swrm_request_hw_vote(arg1,1,0);
        sym.swrm_request_hw_vote(arg1,0,0);
        mutex_lock(arg1 + 0x1de0);
        iVar1 = *(arg1 + 0x3928) + -1;
        *(arg1 + 0x3928) = iVar1;
        if (iVar1 == 0) {
            if (*(arg1 + 0x3908) == 1) {
                *(arg1 + 0x3908) = 0;
            }
            cpu_latency_qos_update_request(arg1 + 0x38d8,0xffffffff);
            pm_relax(*(arg1 + 0x1c70));
        }
        mutex_unlock(arg1 + 0x1de0);
        __wake_up(arg1 + 0x3910,3,0,0);
    }
    return;
}


// ===== sym.swrm_init_port_params.4f7a57b380afe65abf3a3fec691fe242.cfi_jt @ 0x08003450 (size 8) =====

uint sym.swrm_init_port_params.4f7a57b380afe65abf3a3fec691fe242.cfi_jt
               (int64_t param_1,int param_2,uint32_t param_3,int64_t *param_4)

{
    uint *puVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    code *pcVar6;
    ulong uVar7;
    uint32_t uVar8;
    int64_t iVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong *in_x18;
    uint uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || (iVar10 = *(param_1 + 0x98), iVar10 == 0)) {
        uVar12 = 0;
        uVar7 = 0x80015b5;
    }
    else {
        if (param_2 != 0) {
            if (param_3 != 0) {
                iVar3 = iVar10 + 0x397c;
                iVar11 = 0;
                iVar9 = param_3 * 8;
                uVar8 = param_2 * 0xe - 0xe;
                uVar2 = uVar8;
                do {
                    if (0x99 < uVar2) goto code_r0x08006f44;
                    puVar1 = iVar3 + uVar2 * 8;
                    uVar2 = uVar2 + 1;
                    *puVar1 = *(*param_4 + iVar11);
                    iVar4 = *param_4 + iVar11;
                    iVar11 = iVar11 + 8;
                    puVar1[1] = *(iVar4 + 4);
                } while (iVar9 - iVar11 != 0);
                iVar11 = 0;
                uVar2 = uVar8;
                do {
                    if (0x99 < uVar2) goto code_r0x08006f44;
                    iVar4 = iVar3 + uVar2 * 8;
                    uVar2 = uVar2 + 1;
                    *(iVar4 + 0x4d0) = *(param_4[1] + iVar11);
                    iVar5 = param_4[1] + iVar11;
                    iVar11 = iVar11 + 8;
                    *(iVar4 + 0x4d4) = *(iVar5 + 4);
                } while (iVar9 - iVar11 != 0);
                iVar11 = 0;
                uVar2 = uVar8;
                do {
                    if (0x99 < uVar2) goto code_r0x08006f44;
                    iVar4 = iVar3 + uVar2 * 8;
                    uVar2 = uVar2 + 1;
                    *(iVar4 + 0x9a0) = *(param_4[2] + iVar11);
                    iVar5 = param_4[2] + iVar11;
                    iVar11 = iVar11 + 8;
                    *(iVar4 + 0x9a4) = *(iVar5 + 4);
                } while (iVar9 - iVar11 != 0);
                iVar10 = iVar10 + uVar8 * 8;
                iVar11 = 0;
                do {
                    if (0x99 < uVar8) {
code_r0x08006f44:
    //WARNING: Does not return
                        pcVar6 = SoftwareBreakpoint(0x5512,0x8006f48);
                        (*pcVar6)();
                    }
                    uVar8 = uVar8 + 1;
                    *(iVar10 + 0x47ec + iVar11) = *(param_4[3] + iVar11);
                    *(iVar10 + 0x47f0 + iVar11) = *(param_4[3] + iVar11 + 4);
                    iVar11 = iVar11 + 8;
                } while (iVar9 - iVar11 != 0);
            }
            return 0;
        }
        uVar12 = 0xffffffea;
        uVar7 = 0x800256c;
    }
    _printk(uVar7,"swrm_init_port_params");
    return uVar12;
}


// ===== sym.swr_mstr_interrupt.4f7a57b380afe65abf3a3fec691fe242.cfi_jt @ 0x08003458 (size 8) =====

uint64_t sym.swr_mstr_interrupt.4f7a57b380afe65abf3a3fec691fe242.cfi_jt(ulong param_1,int64_t param_2)

{
    char *pcVar1;
    int64_t *piVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    char cVar5;
    bool bVar6;
    int iVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint uVar12;
    uint64_t uVar13;
    int64_t iVar14;
    uint64_t uVar15;
    char *pcVar16;
    uint32_t uVar17;
    int64_t iVar18;
    uint32_t uVar19;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x20;
    uint64_t unaff_x22;
    ulong uVar20;
    uchar *unaff_x24;
    uint8_t *puVar21;
    ulong *puVar22;
    uint32_t *puVar23;
    ulong unaff_x30;
    int aiStack_168 [4];
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    uint32_t auStack_138 [12];
    int64_t iStack_108;
    uchar *puStack_100;
    code *pcStack_f8;
    uint8_t *puStack_f0;
    uchar *puStack_e0;
    char *pcStack_d8;
    uint64_t uStack_d0;
    uint64_t uStack_c8;
    int64_t iStack_c0;
    int64_t iStack_b8;
    int64_t iStack_a8;
    uint8_t *puStack_a0;
    uchar *puStack_98;
    int64_t iStack_90;
    uint32_t uStack_84;
    uint32_t uStack_80;
    uint32_t uStack_7c;
    ulong *puStack_78;
    uint uStack_70;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar18 = sp_el0;
    iStack_68 = *(iVar18 + 0x5e0);
    pcVar1 = param_2 + 0x38d4;
    puVar21 = param_2 + 0x1e8a;
    uStack_70 = 0;
    __trace_bprintk(0x8008028,*0x800b000,"swr_mstr_interrupt");
    uVar13 = sym.swrm_lock_sleep(param_2);
    if ((uVar13 & 1) == 0) {
        iVar7 = ___ratelimit(obj.swr_mstr_interrupt._rs,"swr_mstr_interrupt");
        if (iVar7 == 0) {
            uVar13 = 0;
        }
        else {
            _dev_err(*(param_2 + 0x1c70),"%s Failed to hold suspend\n","swr_mstr_interrupt");
            uVar13 = 0;
        }
        goto code_r0x08008948;
    }
    iVar18 = param_2 + 0x1db0;
    mutex_lock(iVar18);
    iVar7 = sym.swrm_request_hw_vote(param_2,0,1);
    uVar13 = 0;
    if (iVar7 == 0) {
        iVar7 = sym.swrm_request_hw_vote(param_2,1,1);
        if (iVar7 == 0) {
            iVar7 = sym.swrm_clk_request(param_2,1);
            if (iVar7 == 0) {
                iStack_a8 = iVar18;
                mutex_unlock(iVar18);
                uStack_80 = sym.swr_master_read(param_2,*(param_2 + 0x1e90) * 0x1000 + 0x4000);
                uVar11 = *(param_2 + 0x392c) & uStack_80;
                __trace_bprintk(0x80080f8,*0x800b000,"swr_mstr_interrupt",uVar11);
                puStack_98 = param_2 + 0x3978;
                unaff_x22 = 5;
                uStack_84 = 0;
                iStack_90 = param_2 + 0x1cd0;
                uStack_7c = 0;
                puStack_78 = param_2 + 0x3d8;
                puStack_a0 = puVar21;
                do {
                    uVar10 = 0;
                    do {
                        uVar8 = 1 << (uVar10 & 0x1f) & uVar11;
                        unaff_x24 = uVar8;
                        if (uVar8 < 0x100) {
                            switch(unaff_x24) {
                            case NULL:
                            case 0x2:
                                break;
                            case 0x1:
                                uVar8 = sym.swr_master_read(param_2,0x1090);
                                if (*(param_2 + 0x1ee4) != -1) {
                                    unaff_x24 = NULL;
code_r0x08008224:
                                    uVar9 = unaff_x24;
                                    if ((uVar8 & 3) != 2) goto code_r0x08008230;
                                    uVar4 = *puVar21;
                                    uVar3 = 0;
                                    if (uVar4 != 0xe) {
                                        uVar3 = uVar4 + 1 & 0xf;
                                    }
                                    *puVar21 = uVar3;
                                    sym.swrm_cmd_fifo_rd_cmd(param_2,&uStack_70,unaff_x24,uVar4);
                                    uVar4 = *puVar21;
                                    uVar3 = 0;
                                    if (uVar4 != 0xe) {
                                        uVar3 = uVar4 + 1 & 0xf;
                                    }
                                    *puVar21 = uVar3;
                                    sym.swrm_cmd_fifo_wr_cmd(param_2,4,unaff_x24,uVar4);
                                    uVar4 = *puVar21;
                                    uVar3 = 0;
                                    if (uVar4 != 0xe) {
                                        uVar3 = uVar4 + 1 & 0xf;
                                    }
                                    *puVar21 = uVar3;
                                    sym.swrm_cmd_fifo_wr_cmd(param_2,0,unaff_x24,uVar4);
                                    for (puVar22 = *(param_2 + 0x3d8); puVar22 != puStack_78; puVar22 = *puVar22) {
                                        if ((*(puVar22 + 2) == (uVar9 & 0xff)) && (iVar18 = puVar22[0x77], iVar18 != 0)
                                           ) {
                                            while( true ) {
                                                *(puVar22 + 0x78) = 0;
                                                uStack_6c = 0;
                                                iVar18 = __irq_resolve_mapping(iVar18,0,&uStack_6c);
                                                uVar12 = 0;
                                                if (iVar18 != 0) {
                                                    uVar12 = uStack_6c;
                                                }
                                                handle_nested_irq(uVar12);
                                                __trace_bprintk(0x80086e4,*0x800b000,"swr_mstr_interrupt");
                                                if ((*(puVar22 + 0x78) == '\0') || (*pcVar1 == '\0')) break;
                                                iVar18 = puVar22[0x77];
                                            }
                                        }
                                    }
                                    uStack_7c = 0;
                                    puVar21 = puStack_a0;
                                    uStack_84 = uVar9;
                                    break;
                                }
code_r0x08008240:
                                iVar7 = ___ratelimit(obj.swr_mstr_interrupt._rs.235,"swr_mstr_interrupt");
                                if (iVar7 != 0) {
                                    _dev_err(*(param_2 + 0x1c70),"%s: no slave alert found.spurious interrupt\n",
                                             "swr_mstr_interrupt");
                                }
                                uStack_7c = 0xffffffea;
                                break;
                            case 0x3:
                            case 0x5:
                            case 0x6:
                            case 0x7:
                            case 0x9:
                            case 0xa:
                            case 0xb:
                            case 0xc:
                            case 0xd:
                            case 0xe:
                            case 0xf:
                            case 0x11:
                            case 0x12:
                            case 0x13:
                            case 0x14:
                            case 0x15:
                            case 0x16:
                            case 0x17:
                            case 0x18:
                            case 0x19:
                            case 0x1a:
                            case 0x1b:
                            case 0x1c:
                            case 0x1d:
                            case 0x1e:
                            case 0x1f:
                            case 0x21:
                            case 0x22:
                            case 0x23:
                            case 0x24:
                            case 0x25:
                            case 0x26:
                            case 0x27:
                            case 0x28:
                            case 0x29:
                            case 0x2a:
                            case 0x2b:
                            case 0x2c:
                            case 0x2d:
                            case 0x2e:
                            case 0x2f:
                            case 0x30:
                            case 0x31:
                            case 0x32:
                            case 0x33:
                            case 0x34:
                            case 0x35:
                            case 0x36:
                            case 0x37:
                            case 0x38:
                            case 0x39:
                            case 0x3a:
                            case 0x3b:
                            case 0x3c:
                            case 0x3d:
                            case 0x3e:
                            case 0x3f:
code_r0x080083f0:
                                iVar7 = ___ratelimit(obj.swr_mstr_interrupt._rs.261,"swr_mstr_interrupt");
                                if (iVar7 != 0) {
                                    _dev_err(*(param_2 + 0x1c70),"%s: SWR unknown interrupt value: %d\n",
                                             "swr_mstr_interrupt",uVar8);
                                }
                                uStack_7c = 0;
                                break;
                            case 0x4:
                                uVar9 = sym.swr_master_read(param_2,0x1090);
                                unaff_x24 = uVar9;
                                __trace_bprintk(0x800841c,*0x800b000,"swr_mstr_interrupt",unaff_x24,
                                                *(param_2 + 0x1ee8));
                                sym.swrm_enable_slave_irq(param_2);
                                uVar8 = *(param_2 + 0x1ee8);
                                if (uVar9 != uVar8) {
                                    if (*(param_2 + 0x1ee4) != -1) {
                                        uVar17 = 0;
                                        uVar19 = uVar9;
                                        do {
                                            if ((uVar19 & 3) != (uVar8 & 3)) {
                                                *(param_2 + 0x1ee8) = uVar9;
                                                uStack_84 = uVar17;
                                                if ((uVar19 & 3) == 1) goto code_r0x080087a8;
                                                if ((uVar19 & 3) != 0) goto code_r0x080081c0;
                                                goto code_r0x08008498;
                                            }
                                            uVar19 = uVar19 >> 2;
                                            uVar8 = uVar8 >> 2;
                                            uVar17 = uVar17 + 1;
                                        } while (*(param_2 + 0x1ee4) + 1U != uVar17);
                                    }
                                    *(param_2 + 0x1ee8) = uVar9;
code_r0x08008498:
                                    if ((uStack_84 & 0xff) == 0) {
                                        uStack_84 = 0;
code_r0x080087a8:
                                        *(param_2 + 0x3970) = 1;
                                    }
                                }
                                break;
                            case 0x8:
                                iVar7 = ___ratelimit(obj.swr_mstr_interrupt._rs.245,"swr_mstr_interrupt");
                                if (iVar7 != 0) {
                                    _dev_err(*(param_2 + 0x1c70),"%s: SWR bus clsh detected\n","swr_mstr_interrupt");
                                }
                                uVar8 = *(param_2 + 0x1e90);
                                uVar13 = *(param_2 + 0x392c) & 0xfffffff7;
                                goto code_r0x080081a8;
                            case 0x10:
                                uVar13 = sym.swr_master_read(param_2,*(param_2 + 0x1e90) * 0x1000 + 0x4050);
                                unaff_x24 = uVar13 & 0xffffffff;
                                iVar7 = ___ratelimit(obj.swr_mstr_interrupt._rs.247,"swr_mstr_interrupt");
                                if (iVar7 != 0) {
                                    uVar20 = *(param_2 + 0x1c70);
                                    pcVar16 = "%s: SWR read FIFO overflow fifo status %x\n";
code_r0x08008590:
                                    _dev_err(uVar20,pcVar16,"swr_mstr_interrupt",unaff_x24);
                                }
                                break;
                            case 0x20:
                                uVar13 = sym.swr_master_read(param_2,*(param_2 + 0x1e90) * 0x1000 + 0x4050);
                                unaff_x24 = uVar13 & 0xffffffff;
                                iVar7 = ___ratelimit(obj.swr_mstr_interrupt._rs.249,"swr_mstr_interrupt");
                                if (iVar7 != 0) {
                                    uVar20 = *(param_2 + 0x1c70);
                                    pcVar16 = "%s: SWR read FIFO underflow fifo status %x\n";
                                    goto code_r0x08008590;
                                }
                                break;
                            case 0x40:
                                uVar13 = sym.swr_master_read(param_2,*(param_2 + 0x1e90) * 0x1000 + 0x4050);
                                unaff_x24 = uVar13 & 0xffffffff;
                                iVar7 = ___ratelimit(obj.swr_mstr_interrupt._rs.251,"swr_mstr_interrupt");
                                if (iVar7 != 0) {
                                    uVar20 = *(param_2 + 0x1c70);
                                    pcVar16 = "%s: SWR write FIFO overflow fifo status %x\n";
                                    goto code_r0x08008590;
                                }
                                break;
                            default:
                                if (uVar8 != 0x80) goto code_r0x080083f0;
                                uVar13 = sym.swr_master_read(param_2,*(param_2 + 0x1e90) * 0x1000 + 0x4050);
                                unaff_x24 = uVar13 & 0xffffffff;
                                iVar7 = ___ratelimit(obj.swr_mstr_interrupt._rs.253,"swr_mstr_interrupt");
                                if (iVar7 != 0) {
                                    _dev_err(*(param_2 + 0x1c70),"%s: SWR CMD error, fifo status 0x%x, flushing fifo\n"
                                             ,"swr_mstr_interrupt",unaff_x24);
                                }
                                uVar15 = 0x308;
code_r0x080083e4:
                                uVar13 = 1;
code_r0x080081b8:
                                sym.swr_master_write(param_2,uVar15,uVar13);
                            }
                        }
                        else if (uVar8 < 0x1000) {
                            if (uVar8 < 0x400) {
                                if (uVar8 == 0x100) {
                                    iVar7 = ___ratelimit(obj.swr_mstr_interrupt._rs.255,"swr_mstr_interrupt");
                                    if (iVar7 != 0) {
                                        _dev_err(*(param_2 + 0x1c70),"%s: SWR Port collision detected\n",
                                                 "swr_mstr_interrupt");
                                    }
                                    uVar8 = *(param_2 + 0x1e90);
                                    uVar13 = *(param_2 + 0x392c) & 0xfffffeff;
                                }
                                else {
                                    if (uVar8 != 0x200) goto code_r0x080083f0;
                                    uVar8 = *(param_2 + 0x1e90);
                                    uVar13 = *(param_2 + 0x392c) & 0xfffffdff;
                                }
code_r0x080081a8:
                                uVar15 = uVar8 * 0x1000 + 0x4004;
                                *(param_2 + 0x392c) = uVar13;
                                goto code_r0x080081b8;
                            }
                            if (uVar8 != 0x400) {
                                if (uVar8 == 0x800) {
                                    sym.swr_master_write(param_2,0x500,0);
                                    unaff_x22 = unaff_x22 + 1;
                                    do {
                                        iVar7 = sym.swr_master_read(param_2,0x504);
                                        uVar8 = unaff_x22 - 1;
                                        unaff_x22 = uVar8;
                                        if (iVar7 == 0) break;
                                    } while (uVar8 != 0);
                                    uVar15 = 0x500;
                                    goto code_r0x080083e4;
                                }
                                goto code_r0x080083f0;
                            }
                            complete(iStack_90);
                        }
                        else if (uVar8 < 0x4000) {
                            if (uVar8 != 0x1000) {
                                if (uVar8 != 0x2000) goto code_r0x080083f0;
                                if (0x1050001 < *(param_2 + 0x1ed8)) {
                                    unaff_x24 = 0xffffff9c;
                                    do {
                                        uVar13 = sym.swr_master_read(param_2,*(param_2 + 0x1e90) * 0x1000 + 0x4064);
                                        if ((uVar13 & 1) != 0) goto code_r0x080081c0;
                                        usleep_range_state(500,0x1fe,2);
                                        iVar7 = unaff_x24;
                                        unaff_x24 = iVar7 + 1;
                                    } while (iVar7 != -1);
                                    iVar7 = ___ratelimit(obj.swrm_check_link_status._rs,"swrm_check_link_status");
                                    if (iVar7 != 0) {
                                        _dev_err(*(param_2 + 0x1c70),"%s: link status not %s\n",
                                                 "swrm_check_link_status","connected");
                                    }
                                }
                            }
                        }
                        else if (uVar8 != 0x4000) {
                            if (uVar8 == 0x10000) {
                                if (*(param_2 + 0x3718) != 2) {
                                    iVar7 = ___ratelimit(obj.swr_mstr_interrupt._rs.257,"swr_mstr_interrupt");
                                    if (iVar7 != 0) {
                                        _dev_err(*(param_2 + 0x1c70),"%s: SWR wokeup during clock stop\n",
                                                 "swr_mstr_interrupt");
                                    }
                                    unaff_x24 = puStack_98;
                                    *puStack_98 = 1;
                                    sym.swrm_enable_slave_irq(param_2);
                                    *unaff_x24 = 0;
                                }
                            }
                            else {
                                if (uVar8 != 0x80000) goto code_r0x080083f0;
                                uVar13 = sym.swr_master_read(param_2,*(param_2 + 0x1e90) * 0x1000 + 0x4050);
                                unaff_x24 = uVar13 & 0xffffffff;
                                iVar7 = ___ratelimit(obj.swr_mstr_interrupt._rs.259,"swr_mstr_interrupt");
                                if (iVar7 != 0) {
                                    _dev_err(*(param_2 + 0x1c70),"%s: SWR CMD Ignored, fifo status 0x%x\n",
                                             "swr_mstr_interrupt",unaff_x24);
                                }
                                usleep_range_state(0xdac,0xdb1,2);
                            }
                        }
code_r0x080081c0:
                        uVar10 = uVar10 + 1;
                    } while (uVar10 != 0x17);
                    sym.swr_master_write(param_2,*(param_2 + 0x1e90) * 0x1000 + 0x4008,uStack_80);
                    sym.swr_master_write(param_2,*(param_2 + 0x1e90) * 0x1000 + 0x4008,0);
                    if (*(param_2 + 0x3970) != '\0') {
                        sym.swrm_enable_slave_irq(param_2);
                        *(param_2 + 0x3970) = 0;
                    }
                    uVar10 = sym.swr_master_read(param_2,*(param_2 + 0x1e90) * 0x1000 + 0x4000);
                    iVar18 = iStack_a8;
                    uVar11 = *(param_2 + 0x392c) & uVar10;
                    if ((uVar11 == 0) ||
                       ((*(*(param_2 + 0x1c70) + 0x20c) == 2 && ((*(*(param_2 + 0x1c70) + 0x200) & 7) == 0))))
                    goto code_r0x0800887c;
                    uStack_80 = uVar10;
                    __trace_bprintk(0x8008160,*0x800b000,"swr_mstr_interrupt",uVar11);
                } while( true );
            }
            iVar7 = ___ratelimit(obj.swr_mstr_interrupt._rs.229,"swr_mstr_interrupt");
            if (iVar7 == 0) {
                uVar13 = 0;
            }
            else {
                _dev_err(param_2,"%s: swrm clk failed\n","swr_mstr_interrupt");
                uVar13 = 0;
            }
            goto code_r0x08008898;
        }
        uVar13 = 0;
        goto code_r0x080088a8;
    }
    goto code_r0x080088b8;
code_r0x08008230:
    uVar8 = uVar8 >> 2;
    unaff_x24 = uVar9 + 1;
    if (*(param_2 + 0x1ee4) + 1U == uVar9 + 1) goto code_r0x08008240;
    goto code_r0x08008224;
code_r0x0800887c:
    mutex_lock(iStack_a8);
    sym.swrm_clk_request(param_2,0);
    uVar13 = uStack_7c;
code_r0x08008898:
    sym.swrm_request_hw_vote(param_2,1,0);
code_r0x080088a8:
    sym.swrm_request_hw_vote(param_2,0,0);
code_r0x080088b8:
    mutex_unlock(iVar18);
    unaff_x20 = param_2 + 0x1de0;
    mutex_lock(unaff_x20);
    iVar7 = *(param_2 + 0x3928) + -1;
    *(param_2 + 0x3928) = iVar7;
    if (iVar7 == 0) {
        if (*(param_2 + 0x3908) == 1) {
            *(param_2 + 0x3908) = 0;
        }
        cpu_latency_qos_update_request(param_2 + 0x38d8,0xffffffff);
        pm_relax(*(param_2 + 0x1c70));
    }
    mutex_unlock(unaff_x20);
    __wake_up(param_2 + 0x3910,3,0,0);
    __trace_bprintk(0x8008928,*0x800b000,"swr_mstr_interrupt");
code_r0x08008948:
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_68) {
        return uVar13;
    }
    iVar14 = __stack_chk_fail();
    *extraout_x18 = sym.swrm_master_init;
    pcStack_f8 = sym.swrm_master_init;
    iVar18 = sp_el0;
    iStack_108 = *(iVar18 + 0x5e0);
    auStack_138[8] = 0;
    auStack_138[9] = 0;
    auStack_138[10] = 0;
    auStack_138[0xb] = 0;
    auStack_138[4] = 0;
    auStack_138[5] = 0;
    auStack_138[6] = 0;
    auStack_138[7] = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uVar12 = 3;
    if (*(iVar14 + 0x1e8c) == 1) {
        uVar12 = 1;
    }
    uStack_158 = 0;
    uStack_150 = 0;
    puStack_100 = &stack0xffffffffffffffa0;
    puStack_f0 = puVar21;
    puStack_e0 = unaff_x24;
    pcStack_d8 = pcVar1;
    uStack_d0 = unaff_x22;
    uStack_c8 = uVar13;
    iStack_c0 = unaff_x20;
    iStack_b8 = param_2;
    if ((0x105ffff < *(iVar14 + 0x1ed8)) && (*(iVar14 + 0x1e80) != 0)) {
        uVar11 = sym.readl(*(iVar14 + 0x1e80));
        sym.writel(uVar11 & 0xfffffffd,*(iVar14 + 0x1e80));
        usleep_range_state(500,0x1f9,2);
        sym.readl(*(iVar14 + 0x1e80));
    }
    if (iVar14 == 0) {
        aiStack_168[0] = 8;
    }
    else {
        iVar7 = *(iVar14 + 0x1ee0) << 1;
        aiStack_168[0] = ((iVar7 * 0x14f8b589 >> 0x2f) - (iVar7 >> 0x1f) & 0xff) * 0x10000 + -0xfff8;
    }
    aiStack_168[1] = 1;
    auStack_138[0] = 0x101c;
    auStack_138[1] = 0x500;
    aiStack_168[2] = sym.swr_master_read(iVar14,0x1048);
    aiStack_168[2] = aiStack_168[2] | 0x3e0000;
    auStack_138[2] = 0x1048;
    auStack_138[3] = 0x314;
    if (*(iVar14 + 0x1ed8) < 0x1070000) {
        iVar7 = *(iVar14 + 0x1e90);
        iVar18 = 4;
    }
    else {
        iVar7 = *(iVar14 + 0x1e90);
        iVar18 = 5;
        auStack_138[4] = 0x18;
        uStack_158 = CONCAT44(uStack_158._4_4_,iVar7);
    }
    iVar7 = iVar7 * 0x1000;
    uVar11 = iVar18;
    auStack_138[iVar18] = iVar7 + 0x4060;
    aiStack_168[iVar18] = 1;
    aiStack_168[uVar11 + 1] = 2;
    auStack_138[uVar11 | 2] = iVar7 + 0x4008;
    aiStack_168[3] = uVar12;
    aiStack_168[uVar11 | 2] = -1;
    auStack_138[uVar11 + 1] = 4;
    uVar13 = uVar11 + 5;
    auStack_138[uVar11 + 3] = iVar7 + 0x4004;
    *(iVar14 + 0x392c) = 0x1dfdfd;
    aiStack_168[uVar11 + 3] = 0x1dfdfd;
    auStack_138[uVar11 + 4] = 4;
    aiStack_168[uVar11 + 4] = 3;
    sym.swr_master_bulk_write(iVar14,auStack_138,aiStack_168,uVar13);
    iVar7 = *(iVar14 + 0x1ed8);
    if (iVar7 < 0x1050002) {
code_r0x08008cc0:
        if (0x1050000 < iVar7) {
            uVar11 = sym.swr_master_read(iVar14,0x314);
            sym.swr_master_write(iVar14,0x314,uVar11 | 0x80000000);
        }
        uVar15 = 0;
    }
    else {
        iVar7 = -100;
        do {
            uVar15 = sym.swr_master_read(iVar14,*(iVar14 + 0x1e90) * 0x1000 + 0x4064);
            if ((uVar15 & 1) != 0) {
                iVar7 = *(iVar14 + 0x1ed8);
                goto code_r0x08008cc0;
            }
            usleep_range_state(500,0x1fe,2);
            bVar6 = iVar7 != -1;
            iVar7 = iVar7 + 1;
        } while (bVar6);
        iVar7 = ___ratelimit(obj.swrm_check_link_status._rs,"swrm_check_link_status");
        if (iVar7 != 0) {
            _dev_err(*(iVar14 + 0x1c70),"%s: link status not %s\n","swrm_check_link_status","connected");
        }
        _dev_err(*(iVar14 + 0x1c70),"%s: swr link failed to connect\n","swrm_master_init");
        puVar23 = auStack_138;
        do {
            usleep_range_state(0x32,0x37,2);
            uVar11 = *puVar23;
            uVar20 = *(iVar14 + 0x1c70);
            uVar12 = sym.swr_master_read(iVar14,uVar11);
            _dev_err(uVar20,"%s:reg:0x%x val:0x%x\n","swrm_master_init",uVar11,uVar12);
            uVar13 = uVar13 - 1;
            uVar15 = 0xffffffea;
            puVar23 = puVar23 + 1;
        } while (uVar13 != 0);
    }
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) != iStack_108) {
        iVar18 = __stack_chk_fail(uVar15);
        *extraout_x18_00 = sym.swrm_wakeup_work;
        if ((iVar18 + -0x38a0 == 0) || (piVar2 = iVar18 + -0x1c30, *piVar2 == 0)) {
            uVar13 = _printk(0x80027d6,"swrm_wakeup_work");
        }
        else {
            __trace_bprintk(0x8008d68,*0x800b000,"swrm_wakeup_work");
            mutex_lock(iVar18 + -0x1b50);
            cVar5 = *(iVar18 + 0x34);
            mutex_unlock(iVar18 + -0x1b50);
            if (cVar5 != '\0') {
                uVar13 = sym.swrm_lock_sleep(iVar18 + -0x38a0);
                if ((uVar13 & 1) == 0) {
                    _dev_err(*piVar2,"%s Failed to hold suspend\n","swrm_wakeup_work");
                }
                else {
                    __pm_runtime_resume(*piVar2,4);
                    iVar14 = *piVar2;
                    uVar20 = ktime_get_mono_fast_ns();
                    *(iVar14 + 0x218) = uVar20;
                    __pm_runtime_suspend(*piVar2,0xd);
                    mutex_lock(iVar18 + -0x1ac0);
                    iVar7 = *(iVar18 + 0x88) + -1;
                    *(iVar18 + 0x88) = iVar7;
                    if (iVar7 == 0) {
                        if (*(iVar18 + 0x68) == 1) {
                            *(iVar18 + 0x68) = 0;
                        }
                        cpu_latency_qos_update_request(iVar18 + 0x38,0xffffffff);
                        pm_relax(*piVar2);
                    }
                    mutex_unlock(iVar18 + -0x1ac0);
                    __wake_up(iVar18 + 0x70,3,0,0);
                }
            }
            __trace_bprintk(0x8008e40,*0x800b000,"swrm_wakeup_work");
            uVar13 = pm_relax(*piVar2);
        }
        return uVar13;
    }
    return uVar15;
}


// ===== sym.swrm_wakeup_interrupt.4f7a57b380afe65abf3a3fec691fe242.cfi_jt @ 0x08003460 (size 8) =====

ulong sym.swrm_wakeup_interrupt.4f7a57b380afe65abf3a3fec691fe242.cfi_jt(ulong param_1,int64_t param_2)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 == 0) || (*(param_2 + 0x1c70) == 0)) {
        uVar4 = ___ratelimit(obj.swrm_wakeup_interrupt._rs,"swrm_wakeup_interrupt");
        if (uVar4 == 0) {
            return uVar4;
        }
        uVar4 = 0x80027d6;
code_r0x08003820:
        _printk(uVar4,"swrm_wakeup_interrupt");
        uVar4 = 0;
    }
    else {
        __trace_bprintk(0x80036ac,*0x800b000,"swrm_wakeup_interrupt");
        iVar3 = param_2 + 0x1d50;
        mutex_lock(iVar3);
        if ((*(param_2 + 0x3718) == 4) || (*(param_2 + 0x38d4) == '\0')) {
            if (0 < *(param_2 + 0x1ed4)) {
                iVar5 = irq_get_irq_data();
                if (iVar5 == 0) {
                    iVar1 = ___ratelimit(obj.swrm_wakeup_interrupt._rs.47,"swrm_wakeup_interrupt");
                    if (iVar1 != 0) {
                        _printk(0x8001ff7,"swrm_wakeup_interrupt");
                    }
                    mutex_unlock(iVar3);
                    return 0;
                }
                mutex_lock(param_2 + 0x1e10);
                iVar5 = irq_get_irq_data(*(param_2 + 0x1ed4));
                if ((*(*(iVar5 + 0x10) + 2) & 1) == 0) {
                    disable_irq_nosync(*(param_2 + 0x1ed4));
                }
                mutex_unlock(param_2 + 0x1e10);
            }
            mutex_unlock(iVar3);
        }
        else {
            mutex_unlock(iVar3);
            uVar2 = sym.swrm_lock_sleep(param_2);
            if ((uVar2 & 1) == 0) {
                iVar1 = ___ratelimit(obj.swrm_wakeup_interrupt._rs.49,"swrm_wakeup_interrupt");
                if (iVar1 != 0) {
                    _dev_err(*(param_2 + 0x1c70),"%s Failed to hold suspend\n","swrm_wakeup_interrupt");
                }
            }
            else {
                if (0 < *(param_2 + 0x1ed4)) {
                    iVar3 = irq_get_irq_data();
                    if (iVar3 == 0) {
                        uVar4 = ___ratelimit(obj.swrm_wakeup_interrupt._rs.51,"swrm_wakeup_interrupt");
                        if (uVar4 == 0) {
                            return uVar4;
                        }
                        uVar4 = 0x8001ff7;
                        goto code_r0x08003820;
                    }
                    mutex_lock(param_2 + 0x1e10);
                    iVar3 = irq_get_irq_data(*(param_2 + 0x1ed4));
                    if ((*(*(iVar3 + 0x10) + 2) & 1) == 0) {
                        disable_irq_nosync(*(param_2 + 0x1ed4));
                    }
                    mutex_unlock(param_2 + 0x1e10);
                }
                __pm_runtime_resume(*(param_2 + 0x1c70),4);
                iVar3 = *(param_2 + 0x1c70);
                uVar4 = ktime_get_mono_fast_ns();
                *(iVar3 + 0x218) = uVar4;
                __pm_runtime_suspend(*(param_2 + 0x1c70),0xd);
                mutex_lock(param_2 + 0x1de0);
                iVar1 = *(param_2 + 0x3928) + -1;
                *(param_2 + 0x3928) = iVar1;
                if (iVar1 == 0) {
                    if (*(param_2 + 0x3908) == 1) {
                        *(param_2 + 0x3908) = 0;
                    }
                    cpu_latency_qos_update_request(param_2 + 0x38d8,0xffffffff);
                    pm_relax(*(param_2 + 0x1c70));
                }
                mutex_unlock(param_2 + 0x1de0);
                __wake_up(param_2 + 0x3910,3,0,0);
            }
            __trace_bprintk(0x80037dc,*0x800b000,"swrm_wakeup_interrupt");
        }
        uVar4 = 1;
    }
    return uVar4;
}


// ===== sym.swrm_remove.4f7a57b380afe65abf3a3fec691fe242.cfi_jt @ 0x08003468 (size 8) =====

ulong sym.swrm_remove.4f7a57b380afe65abf3a3fec691fe242.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0xa8);
    pcVar4 = *(iVar3 + 0x1ec8);
    if (pcVar4 == NULL) {
        if (*(iVar3 + 0x1ed0) == 0) {
            iVar1 = *(iVar3 + 0x1ed4);
            if (iVar1 < 1) goto code_r0x08006640;
        }
        else {
            iVar2 = irq_get_irq_data();
            if (iVar2 != 0) {
                iVar2 = irq_get_irq_data(*(iVar3 + 0x1ed0));
                **(iVar2 + 0x10) = **(iVar2 + 0x10) & 0xfffffff0;
                **(iVar2 + 0x10) = **(iVar2 + 0x10) | 0x2000000;
            }
            if (*(iVar3 + 0x3950) != 0) {
                irq_set_irq_wake(*(iVar3 + 0x1ed0),0);
                device_init_wakeup(*(iVar3 + 0x1c70),0);
            }
            iVar1 = *(iVar3 + 0x1ed0);
        }
        free_irq(iVar1,iVar3);
    }
    else {
        __cfi_slowpath_diag(0x884c3e86bfd834e5,pcVar4,0x8001310);
        (*pcVar4)(*(iVar3 + 0x1e98),sym.swr_mstr_interrupt.4f7a57b380afe65abf3a3fec691fe242.cfi_jt,iVar3,0);
    }
code_r0x08006640:
    cancel_work_sync(iVar3 + 0x38a0);
    param_1 = param_1 + 0x10;
    __pm_runtime_disable(param_1,1);
    __pm_runtime_set_status(param_1,2);
    swr_unregister_master(iVar3);
    cpu_latency_qos_remove_request(iVar3 + 0x38d8);
    devm_kfree(param_1,iVar3);
    return 0;
}


// ===== sym.swrm_probe.4f7a57b380afe65abf3a3fec691fe242.cfi_jt @ 0x08003470 (size 8) =====

uint32_t sym.swrm_probe.4f7a57b380afe65abf3a3fec691fe242.cfi_jt(int64_t param_1)

{
    uchar *puVar1;
    int *piVar2;
    int64_t iVar3;
    int64_t iVar4;
    ushort *puVar5;
    uint uVar6;
    uint32_t uVar7;
    int iVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    int64_t iVar11;
    ulong uVar12;
    uint64_t uVar13;
    int64_t *piVar14;
    char *pcVar15;
    int64_t iVar16;
    int64_t iVar17;
    uint64_t uVar18;
    uint *puVar19;
    int64_t iVar20;
    int64_t iVar21;
    int64_t iVar22;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar23;
    code *pcVar24;
    ulong unaff_x30;
    uint32_t uStack_74;
    uint uStack_70;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    piVar14 = param_1 + 0x10;
    iStack_68 = *(iVar11 + 0x5e0);
    uStack_6c = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    iVar11 = devm_kmalloc(piVar14,0x4ce8,0xdc0);
    if (iVar11 == 0) {
code_r0x08005efc:
        uVar9 = 0xfffffff4;
        goto code_r0x08006524;
    }
    piVar23 = *(param_1 + 0xa0);
    *(iVar11 + 0x3720) = param_1;
    *(iVar11 + 0x1c70) = piVar14;
    *(param_1 + 0xa8) = iVar11;
    *(iVar11 + 0x98) = iVar11;
    if (piVar23 == NULL) {
        pcVar15 = "%s: pdata from parent is NULL\n";
code_r0x080063b0:
        _dev_err(piVar14,pcVar15,"swrm_probe");
        uVar9 = 0xffffffea;
    }
    else {
        iVar16 = *piVar23;
        *(iVar11 + 0x1e98) = iVar16;
        if (iVar16 == 0) {
            pcVar15 = "%s: swrm->handle is NULL\n";
            goto code_r0x080063b0;
        }
        iVar8 = of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,swr-master-ee-val",iVar11 + 0x1e90,1,0)
        ;
        if (iVar8 < 0) {
            *(iVar11 + 0x1e90) = 1;
        }
        iVar8 = of_property_read_variable_u32_array
                          (*(param_1 + 0x300),"qcom,swr-master-version",iVar11 + 0x1ed8,1,0);
        if (iVar8 < 0) {
            *(iVar11 + 0x1ed8) = 0x2000000;
        }
        uVar9 = of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,swr_master_id",iVar11 + 0x1e8c,1,0);
        if (uVar9 < 0) {
            _dev_err(piVar14,"%s: failed to get master id\n","swrm_probe");
            goto code_r0x08006524;
        }
        iVar8 = of_property_read_variable_u32_array
                          (*(param_1 + 0x300),"qcom,dynamic-port-map-supported",iVar11 + 0x1e94,1,0);
        if (iVar8 < 0) {
            *(iVar11 + 0x1e94) = 1;
        }
        piVar2 = iVar11 + 0x1e70;
        iVar8 = of_property_read_variable_u32_array(*(param_1 + 0x300),"swrm-io-base",piVar2,1,0);
        if (-1 < iVar8) {
            of_property_read_variable_u32_array(*(param_1 + 0x300),"swrm-io-base",piVar2,1,0);
        }
        if (*piVar2 == 0) {
            iVar16 = piVar23[1];
            *(iVar11 + 0x1ea0) = iVar16;
            if (iVar16 == 0) {
                pcVar15 = "%s: swrm->read is NULL\n";
            }
            else {
                iVar16 = piVar23[2];
                *(iVar11 + 0x1ea8) = iVar16;
                if (iVar16 == 0) {
                    pcVar15 = "%s: swrm->write is NULL\n";
                }
                else {
                    iVar16 = piVar23[3];
                    *(iVar11 + 0x1eb0) = iVar16;
                    if (iVar16 != 0) goto code_r0x08005a4c;
                    pcVar15 = "%s: swrm->bulk_write is NULL\n";
                }
            }
            goto code_r0x080063b0;
        }
        uVar12 = devm_ioremap(piVar14,*piVar2,0x60a8);
        *(iVar11 + 0x1e78) = uVar12;
code_r0x08005a4c:
        uVar12 = *(param_1 + 0x300);
        *(iVar11 + 0x1ec0) = piVar23[5];
        iVar8 = of_property_read_variable_u32_array(uVar12,"qcom,swrm-hctl-reg",&uStack_70,1,0);
        if (-1 < iVar8) {
            uVar12 = devm_ioremap(piVar14,uStack_70,4);
            *(iVar11 + 0x1e80) = uVar12;
        }
        iVar16 = piVar23[4];
        *(iVar11 + 0x1eb8) = iVar16;
        if (iVar16 == 0) {
            pcVar15 = "%s: swrm->clk is NULL\n";
            goto code_r0x080063b0;
        }
        iVar8 = of_property_read_variable_u32_array
                          (*(param_1 + 0x300),"qcom,swr-clock-stop-mode0",iVar11 + 0x3898,1,0);
        if (iVar8 < 0) {
            *(iVar11 + 0x3898) = 0;
        }
        uVar9 = of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,swr-num-ports",&uStack_6c,1,0);
        if (uVar9 < 0) {
            uVar12 = *(iVar11 + 0x1c70);
            pcVar15 = "%s: Failed to get num_ports\n";
code_r0x080062f8:
            _dev_err(uVar12,pcVar15,"swrm_probe");
        }
        else {
            uVar12 = *(param_1 + 0x300);
            *(iVar11 + 0x37b0) = uStack_6c;
            iVar16 = of_find_property(uVar12,"qcom,swr-port-mapping",&uStack_74);
            uVar10 = uStack_74;
            if (iVar16 == 0) {
                _dev_err(*(iVar11 + 0x1c70),"missing port mapping\n");
                uVar9 = 0;
            }
            else {
                *(iVar11 + 0x394c) = 0;
                if (0xd < uStack_6c) {
                    pcVar15 = "%s:invalid number of swr ports\n";
                    goto code_r0x080063b0;
                }
                iVar16 = devm_kmalloc(piVar14,uStack_74,0xdc0);
                if (iVar16 == 0) goto code_r0x08005efc;
                uVar9 = of_property_read_variable_u32_array
                                  (*(param_1 + 0x300),"qcom,swr-port-mapping",iVar16,(uVar10 / 0xc) * 3,0);
                if (uVar9 < 0) {
                    uVar12 = *(iVar11 + 0x1c70);
                    pcVar15 = "%s: Failed to read port mapping\n";
                    goto code_r0x080062f8;
                }
                if (0xb < uVar10) {
                    uVar10 = uVar10 / 0xc;
                    uVar9 = 0;
                    if (uVar10 < 2) {
                        uVar10 = 1;
                    }
                    uVar18 = uVar10;
                    puVar19 = iVar16 + 4;
                    uVar10 = 0;
                    do {
                        uVar7 = puVar19[-1];
                        if (uVar7 != uVar10) {
                            uVar9 = 0;
                        }
                        if (0xd < uVar7 || 7 < uVar9) {
                            _dev_err(piVar14,"%s:invalid port_num %d or ch_iter %d\n","swrm_probe");
                            uVar9 = 0;
                            goto code_r0x08006524;
                        }
                        uVar18 = uVar18 - 1;
                        uVar6 = puVar19[1];
                        puVar1 = iVar11 + 0x37b1 + uVar7 * 0x10 + uVar9 * 2;
                        uVar9 = uVar9 + 1;
                        *puVar1 = *puVar19;
                        puVar1[1] = uVar6;
                        puVar19 = puVar19 + 3;
                        uVar10 = uVar7;
                    } while (uVar18 != 0);
                }
                devm_kfree(piVar14,iVar16);
                uVar10 = of_property_read_variable_u32_array
                                   (*(param_1 + 0x300),"qcom,is-always-on",iVar11 + 0x3974,1,0);
                iVar16 = piVar23[6];
                *(iVar11 + 0x1c09) = 0;
                *(iVar11 + 0x1e8a) = 0;
                *(iVar11 + 0x1ec8) = iVar16;
                *(iVar11 + 0x1c20) = sym.swrm_read.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
                *(iVar11 + 0x1c30) = sym.swrm_bulk_write.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
                *(iVar11 + 0x1c28) = sym.swrm_write.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
                *(iVar11 + 0x1c38) = sym.swrm_get_logical_dev_num.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
                *(iVar11 + 0x38d4) = 1;
                *(iVar11 + 0x1c60) = sym.swrm_device_wakeup_unvote.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
                *(iVar11 + 0x60) = piVar14;
                *(iVar11 + 0x1c40) = sym.swrm_init_port_params.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
                *(iVar11 + 0x1e88) = 0;
                *(iVar11 + 0x1c10) = sym.swrm_connect_port.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
                *(iVar11 + 0x1ee8) = 0;
                *(iVar11 + 0x3728) = 0;
                *(iVar11 + 0x1c18) = sym.swrm_disconnect_port.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
                *(iVar11 + 0x1c88) = 0;
                *(iVar11 + 0x3950) = 0;
                *(iVar11 + 0x3718) = 2;
                *(iVar11 + 0x1c48) = sym.swrm_slvdev_datapath_control.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
                *(iVar11 + 0x38d0) = 0;
                *(iVar11 + 0x3970) = 0;
                *(iVar11 + 0x3978) = 0;
                *(iVar11 + 0x1c50) = sym.swrm_remove_from_group.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
                *(iVar11 + 0x3960) = 0;
                *(iVar11 + 0x1cb0) = 0;
                *(iVar11 + 0x1c58) = sym.swrm_device_wakeup_vote.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
                *(iVar11 + 0x2f0) = *(param_1 + 0x300);
                *(iVar11 + 0x1edc) = 0x927c0000927c00;
                piVar2 = iVar11 + 0x3950;
                __init_swait_queue_head(iVar11 + 0x1cb8,"&x->wait",obj.init_completion.__key);
                *(iVar11 + 0x1cd0) = 0;
                __init_swait_queue_head(iVar11 + 0x1cd8,"&x->wait",obj.init_completion.__key);
                *(iVar11 + 0x1c90) = 0;
                __init_swait_queue_head(iVar11 + 0x1c98,"&x->wait",obj.init_completion.__key);
                __mutex_init(iVar11 + 0x1e10,"&swrm->irq_lock",obj.init_completion.__key);
                iVar3 = iVar11 + 0x1d80;
                __mutex_init(iVar3,"&swrm->mlock",obj.init_completion.__key);
                __mutex_init(iVar11 + 0x1db0,"&swrm->reslock",obj.init_completion.__key);
                __mutex_init(iVar11 + 0x3730,"&swrm->force_down_lock",obj.init_completion.__key);
                __mutex_init(iVar11 + 0x1d20,"&swrm->iolock",obj.init_completion.__key);
                __mutex_init(iVar11 + 0x1cf0,"&swrm->clklock",obj.init_completion.__key);
                __mutex_init(iVar11 + 0x1d50,"&swrm->devlock",obj.init_completion.__key);
                __mutex_init(iVar11 + 0x1de0,"&swrm->pm_lock",obj.init_completion.__key);
                __mutex_init(iVar11 + 0x1e40,"&swrm->runtime_lock",obj.init_completion.__key);
                *(iVar11 + 0x3928) = 0;
                *(iVar11 + 0x3908) = 0;
                __init_waitqueue_head(iVar11 + 0x3910,"&swrm->pm_wq",obj.init_completion.__key);
                cpu_latency_qos_add_request(iVar11 + 0x38d8,0xffffffff);
                iVar17 = 0xd;
                iVar16 = 0x1ef0;
                iVar20 = 0x1f08;
                iVar21 = 0x1f06;
                iVar22 = 0x1f03;
                do {
                    iVar4 = iVar11 + iVar16;
                    *iVar4 = iVar4;
                    *(iVar4 + 8) = iVar4;
                    if (*(iVar11 + 0x1e8c) == 3) {
                        puVar5 = iVar11 + iVar22;
                        *(iVar11 + iVar21) = 0xffff;
                        *puVar5 = 0;
                        *(iVar11 + iVar20 + 1) = 0xff;
                        *(iVar11 + iVar20) = 0xffffffff;
                        puVar5[5] = 0;
                        *(puVar5 + 6) = 0;
                    }
                    iVar17 = iVar17 + -1;
                    iVar16 = iVar16 + 0x28;
                    iVar20 = iVar20 + 0x28;
                    iVar21 = iVar21 + 0x28;
                    iVar22 = iVar22 + 0x28;
                } while (iVar17 != 0);
                iVar8 = of_property_read_variable_u32_array
                                  (*(param_1 + 0x300),"qcom,disable-div2-clk-switch",iVar11 + 0x3960,1,0);
                if (iVar8 < 0) {
                    *(iVar11 + 0x3960) = 0;
                }
                uVar13 = devm_clk_get(piVar14,"lpass_core_hw_vote");
                uVar18 = 0;
                if (uVar13 < 0xfffffffffffff001) {
                    uVar18 = uVar13;
                }
                *(iVar11 + 0x3938) = uVar18;
                uVar18 = devm_clk_get(piVar14,"lpass_audio_hw_vote");
                pcVar24 = *(iVar11 + 0x1ec8);
                uVar9 = 0;
                if (uVar13 < 0xfffffffffffff001 && uVar18 < 0xfffffffffffff001) {
                    uVar9 = uVar10 & uVar10 >> 0x1f;
                }
                uVar13 = 0;
                if (uVar18 < 0xfffffffffffff001) {
                    uVar13 = uVar18;
                }
                *(iVar11 + 0x3940) = uVar13;
                if (pcVar24 == NULL) {
                    uVar10 = platform_get_irq_byname(param_1,"swr_master_irq");
                    *(iVar11 + 0x1ed0) = uVar10;
                    if (uVar10 < 0) {
                        piVar14 = *(iVar11 + 0x1c70);
                        pcVar15 = "%s() error getting irq hdle: %d\n";
                    }
                    else {
                        uVar9 = request_threaded_irq
                                          (uVar10,0,sym.swr_mstr_interrupt.4f7a57b380afe65abf3a3fec691fe242.cfi_jt,
                                           0x2001,"swr_master_irq",iVar11);
                        if (uVar9 == 0) goto code_r0x0800601c;
                        piVar14 = *(iVar11 + 0x1c70);
                        pcVar15 = "%s: Failed to request irq %d\n";
                        uVar10 = uVar9;
                    }
code_r0x08006518:
                    _dev_err(piVar14,pcVar15,"swrm_probe",uVar10);
                }
                else {
                    __cfi_slowpath_diag(0x884c3e86bfd834e5,pcVar24,0x80012b0);
                    uVar9 = (*pcVar24)(*(iVar11 + 0x1e98),
                                       sym.swr_mstr_interrupt.4f7a57b380afe65abf3a3fec691fe242.cfi_jt,iVar11,1);
                    if (uVar9 != 0) {
                        pcVar15 = "%s: IRQ register failed ret %d\n";
                        uVar10 = uVar9;
                        goto code_r0x08006518;
                    }
code_r0x0800601c:
                    of_property_read_variable_u32_array
                              (*(param_1 + 0x300),"qcom,swr-mstr-irq-wakeup-capable",piVar2,1,0);
                    if (*piVar2 != 0) {
                        irq_set_irq_wake(*(iVar11 + 0x1ed0),1);
                        iVar8 = device_init_wakeup(*(iVar11 + 0x1c70),1);
                        if (iVar8 != 0) {
                            _dev_info(*(iVar11 + 0x1c70),"%s: Device wakeup init failed: %d\n","swrm_probe",iVar8);
                        }
                    }
                    uVar9 = swr_register_master(iVar11);
                    if (uVar9 == 0) {
                        swr_master_add_boarddevices(iVar11);
                        if (*(iVar11 + 0x3974) == 0) {
                            sym.swrm_request_hw_vote(iVar11,1,1);
                        }
                        mutex_lock(iVar3);
                        sym.swrm_clk_request(iVar11,1);
                        uVar9 = sym.swr_master_read(iVar11,0x100);
                        *(iVar11 + 0x3964) = uVar9 >> 0xf & 0x1f;
                        uVar9 = sym.swr_master_read(iVar11,0x100);
                        *(iVar11 + 0x3968) = uVar9 >> 10 & 0x1f;
                        iVar8 = sym.swr_master_read(iVar11,0);
                        if (*(iVar11 + 0x1ed8) != iVar8) {
                            _dev_info(piVar14,
                                      "%s: version specified in dtsi: 0x%x not match with HW read version 0x%x\n",
                                      "swrm_probe",*(iVar11 + 0x1ed8),iVar8);
                        }
                        uVar9 = sym.swr_master_read(iVar11,0x100);
                        *(iVar11 + 0x396c) = uVar9 >> 0x14 & 0xf;
                        uVar9 = of_property_read_variable_u32_array
                                          (*(*(iVar11 + 0x1c70) + 0x2f0),"qcom,swr-num-dev",iVar11 + 0x1ee4,1,0);
                        if (uVar9 < 0) {
                            _dev_err(piVar14,"%s: Looking up %s property failed\n","swrm_probe","qcom,swr-num-dev");
                        }
                        else if (*(iVar11 + 0x396c) < *(iVar11 + 0x1ee4)) {
                            _dev_err(piVar14,"%s: num_dev %d > max limit %d\n","swrm_probe");
                            uVar9 = 0xffffffea;
                        }
                        else {
                            iVar8 = sym.swrm_master_init(iVar11);
                            if (-1 < iVar8) {
                                mutex_unlock(iVar3);
                                *(iVar11 + 0x38a0) = 0xfffffffe0;
                                *(iVar11 + 0x38a8) = iVar11 + 0x38a8;
                                *(iVar11 + 0x38b0) = iVar11 + 0x38a8;
                                iVar16 = *(param_1 + 0x300);
                                *(iVar11 + 0x38b8) = sym.swrm_wakeup_work.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
                                if (iVar16 != 0) {
                                    of_register_swr_devices(iVar11);
                                }
                                iVar16 = *(param_1 + 0x80);
                                if (iVar16 == 0) {
                                    iVar16 = *piVar14;
                                }
                                uVar18 = debugfs_create_dir(iVar16,0);
                                *(iVar11 + 0x4cc0) = uVar18;
                                if (uVar18 < 0xfffffffffffff001) {
                                    uVar12 = debugfs_create_file("swrm_peek",0x8124,uVar18,iVar11,
                                                                 obj.swrm_debug_read_ops);
                                    *(iVar11 + 0x4cc8) = uVar12;
                                    uVar12 = debugfs_create_file("swrm_poke",0x8124,*(iVar11 + 0x4cc0),iVar11,
                                                                 obj.swrm_debug_write_ops);
                                    *(iVar11 + 0x4cd0) = uVar12;
                                    uVar12 = debugfs_create_file("swrm_reg_dump",0x8124,*(iVar11 + 0x4cc0),iVar11,
                                                                 obj.swrm_debug_dump_ops);
                                    *(iVar11 + 0x4cd8) = uVar12;
                                }
                                pm_runtime_set_autosuspend_delay(piVar14,_segment.ehdr);
                                __pm_runtime_use_autosuspend(piVar14,1);
                                __pm_runtime_set_status(piVar14,0);
                                pm_runtime_enable(piVar14);
                                uVar12 = ktime_get_mono_fast_ns();
                                *(param_1 + 0x228) = uVar12;
                                uVar9 = 0;
                                *(iVar11 + 0x3780) = 0xfffffffe0;
                                *(iVar11 + 0x3788) = iVar11 + 0x3788;
                                *(iVar11 + 0x3790) = iVar11 + 0x3788;
                                *(iVar11 + 0x3798) = sym.swrm_notify_work_fn.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
                                *(iVar11 + 0x3768) = sym.swrm_event_notify.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
                                goto code_r0x08006524;
                            }
                            _dev_err(piVar14,"%s: Error in master Initialization , err %d\n","swrm_probe",iVar8);
                            uVar9 = 0xfffffdfb;
                        }
                        mutex_unlock(iVar3);
                        swr_unregister_master(iVar11);
                        device_init_wakeup(*(iVar11 + 0x1c70),0);
                    }
                    else {
                        _dev_err(piVar14,"%s: error adding swr master\n","swrm_probe");
                    }
                    pcVar24 = *(iVar11 + 0x1ec8);
                    if (pcVar24 == NULL) {
                        if (*(iVar11 + 0x1ed0) != 0) {
                            iVar16 = irq_get_irq_data();
                            if (iVar16 != 0) {
                                iVar16 = irq_get_irq_data(*(iVar11 + 0x1ed0));
                                **(iVar16 + 0x10) = **(iVar16 + 0x10) & 0xfffffff0;
                                **(iVar16 + 0x10) = **(iVar16 + 0x10) | 0x2000000;
                            }
                            if (*piVar2 != 0) {
                                irq_set_irq_wake(*(iVar11 + 0x1ed0),0);
                            }
                            free_irq(*(iVar11 + 0x1ed0),iVar11);
                        }
                    }
                    else {
                        __cfi_slowpath_diag(0x884c3e86bfd834e5,pcVar24,0x80012d0);
                        (*pcVar24)(*(iVar11 + 0x1e98),sym.swr_mstr_interrupt.4f7a57b380afe65abf3a3fec691fe242.cfi_jt,
                                   iVar11,0);
                    }
                }
                cpu_latency_qos_remove_request(iVar11 + 0x38d8);
            }
        }
    }
code_r0x08006524:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_68) {
        return uVar9;
    }
    iVar11 = __stack_chk_fail();
    *extraout_x18 = sym.swrm_remove;
    iVar16 = *(iVar11 + 0xa8);
    pcVar24 = *(iVar16 + 0x1ec8);
    if (pcVar24 == NULL) {
        if (*(iVar16 + 0x1ed0) == 0) {
            iVar8 = *(iVar16 + 0x1ed4);
            if (iVar8 < 1) goto code_r0x08006640;
        }
        else {
            iVar20 = irq_get_irq_data();
            if (iVar20 != 0) {
                iVar20 = irq_get_irq_data(*(iVar16 + 0x1ed0));
                **(iVar20 + 0x10) = **(iVar20 + 0x10) & 0xfffffff0;
                **(iVar20 + 0x10) = **(iVar20 + 0x10) | 0x2000000;
            }
            if (*(iVar16 + 0x3950) != 0) {
                irq_set_irq_wake(*(iVar16 + 0x1ed0),0);
                device_init_wakeup(*(iVar16 + 0x1c70),0);
            }
            iVar8 = *(iVar16 + 0x1ed0);
        }
        free_irq(iVar8,iVar16);
    }
    else {
        __cfi_slowpath_diag(0x884c3e86bfd834e5,pcVar24,0x8001310);
        (*pcVar24)(*(iVar16 + 0x1e98),sym.swr_mstr_interrupt.4f7a57b380afe65abf3a3fec691fe242.cfi_jt,iVar16,0);
    }
code_r0x08006640:
    cancel_work_sync(iVar16 + 0x38a0);
    iVar11 = iVar11 + 0x10;
    __pm_runtime_disable(iVar11,1);
    __pm_runtime_set_status(iVar11,2);
    swr_unregister_master(iVar16);
    cpu_latency_qos_remove_request(iVar16 + 0x38d8);
    devm_kfree(iVar11,iVar16);
    return 0;
}


// ===== sym.swrm_remove_from_group.4f7a57b380afe65abf3a3fec691fe242.cfi_jt @ 0x08003478 (size 8) =====

bool sym.swrm_remove_from_group.4f7a57b380afe65abf3a3fec691fe242.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    ulong *in_x18;
    bool bVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        bVar2 = false;
    }
    else {
        iVar3 = *(param_1 + 0x98);
        bVar2 = false;
        if (iVar3 != 0) {
            mutex_lock(iVar3 + 0x1d80);
            bVar2 = 1 < *(iVar3 + 0x3728);
            if (1 < *(iVar3 + 0x3728)) {
                piVar1 = *(param_1 + 0x3d8);
                if (param_1 + 0x3d8 != piVar1) {
                    do {
                        *(piVar1 + 0x76) = 0;
                        *(param_1 + 0x1c0b) = 0;
                        piVar1 = *piVar1;
                    } while (param_1 + 0x3d8 != piVar1);
                }
            }
            mutex_unlock(iVar3 + 0x1d80);
        }
    }
    return bVar2;
}


// ===== sym.swrm_debug_reg_dump.4f7a57b380afe65abf3a3fec691fe242.cfi_jt @ 0x08003480 (size 8) =====

char * sym.swrm_debug_reg_dump.4f7a57b380afe65abf3a3fec691fe242.cfi_jt
                 (int64_t param_1,int64_t param_2,char *param_3,uint64_t *param_4)

{
    ulong *puVar1;
    uint64_t uVar2;
    bool bVar3;
    uint uVar4;
    uint32_t uVar5;
    int iVar6;
    int64_t iVar7;
    ulong uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar11;
    uint64_t uVar12;
    char *pcVar13;
    char *pcVar14;
    char *arg2;
    char *pcVar15;
    ulong unaff_x30;
    uchar noname_1 [16];
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    pcVar13 = 0xffffffffffffffea;
    iStack_68 = *(iVar11 + 0x5e0);
    if ((((param_2 != 0) && (param_1 != 0)) && (param_3 != NULL)) && (param_4 != NULL)) {
        iVar11 = *(param_1 + 0xd8);
        if ((iVar11 == 0) || (uVar12 = *param_4, uVar12 < 0)) {
            pcVar13 = 0xffffffffffffffea;
        }
        else {
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_88 = 0;
            uStack_80 = 0;
            pcVar13 = NULL;
            if (uVar12 < 0x60a9) {
                pcVar15 = param_3 + -1;
                arg2 = param_3;
                pcVar13 = NULL;
                do {
                    iVar6 = uVar12;
                    pcVar14 = pcVar13;
                    if (0x13aa < iVar6 - 0x2c55U) {
                        usleep_range_state(100,0x96,2);
                        uVar4 = sym.swr_master_read(iVar11,uVar12 & 0xffffffff);
                        param_3 = "0x%.3x: 0x%.2x\n";
                        uVar5 = snprintf(&uStack_88,0x19,"0x%.3x: 0x%.2x\n",uVar12 & 0xffffffff,uVar4);
                        if (uVar5 < 0) {
                            iVar6 = ___ratelimit(obj.swrm_reg_show._rs,"swrm_reg_show");
                            if (iVar6 != 0) {
                                uVar8 = 0x80019ac;
code_r0x0800b238:
                                _printk(uVar8,"swrm_reg_show");
                            }
                        }
                        else {
                            arg2 = uVar5;
                            pcVar14 = pcVar13 + arg2;
                            if (pcVar15 <= pcVar14) break;
                            noname_1 = __check_object_size(&uStack_88,arg2,1);
                            iVar7 = sym._copy_to_user(pcVar13 + param_2,noname_1,arg2);
                            if (iVar7 == 0) {
                                *param_4 = *param_4 + 4;
                                goto code_r0x0800b118;
                            }
                            iVar6 = ___ratelimit(obj.swrm_reg_show._rs.284,"swrm_reg_show");
                            param_3 = arg2;
                            if (iVar6 != 0) {
                                uVar8 = 0x800208d;
                                goto code_r0x0800b238;
                            }
                        }
                        pcVar13 = 0xfffffffffffffff2;
                        break;
                    }
code_r0x0800b118:
                    uVar12 = iVar6 + 4;
                    param_3 = arg2;
                    pcVar13 = pcVar14;
                } while (iVar6 < 0x60a5);
            }
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_68) {
        return pcVar13;
    }
    uVar9 = __stack_chk_fail();
    *extraout_x18 = sym._copy_to_user;
    puVar1 = sp_el0;
    uVar12 = (uVar9 << 8) >> 8;
    if (((*(puVar1 + 0x3e) >> 5 & 1) != 0) || (uVar10 = uVar9, (*puVar1 >> 0x1a & 1) != 0)) {
        uVar10 = uVar9 & uVar12;
    }
    bVar3 = CARRY8(uVar10,param_3);
    pcVar13 = param_3 + uVar10;
    uVar10 = 0;
    if (!bVar3 || pcVar13 == NULL) {
        uVar10 = 0x7fffffffff;
    }
    if (bVar3) {
        pcVar13 = 0xffffffffffffffff;
    }
    if (!CARRY8(pcVar13,~uVar10) && !CARRY8(pcVar13 + ~uVar10,bVar3) || pcVar13 == uVar10 + !bVar3) {
        if ((_gpiod_to_irq >> 0x18 & 1) == 0) {
            uVar10 = daif;
            if ((uVar10 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr1_el1 = puVar1[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar1[1];
            InstructionSynchronizationBarrier();
            daif = uVar10;
        }
        if ((uVar9 & uVar12 & 0xffffff8000000000) != 0) {
            uVar9 = 0;
        }
        param_3 = __arch_copy_to_user(uVar9);
        if ((_gpiod_to_irq >> 0x18 & 1) == 0) {
            uVar12 = daif;
            if ((uVar12 & 0x80) == 0) {
                uVar9 = daif;
                daif = uVar9 | 0xc0;
            }
            uVar9 = ttbr1_el1;
            ttbr0_el1 = (uVar9 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar9 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar12;
        }
    }
    return param_3;
}


// ===== sym.swrm_debug_read.4f7a57b380afe65abf3a3fec691fe242.cfi_jt @ 0x08003488 (size 8) =====

int64_t * sym.swrm_debug_read.4f7a57b380afe65abf3a3fec691fe242.cfi_jt
                    (int64_t param_1,int64_t param_2,int64_t *param_3,int64_t *param_4)

{
    int iVar1;
    uint uVar2;
    int64_t *piVar3;
    ulong uVar4;
    int64_t *piVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    ulong uStack_a0;
    uchar *puStack_98;
    uint64_t auStack_90 [2];
    uint uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar5 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    piVar3 = 0xffffffffffffffea;
    iStack_40 = 0;
    if ((((param_2 != 0) && (param_1 != 0)) && (param_3 != NULL)) && (param_4 != NULL)) {
        if ((*(param_1 + 0xd8) == 0) || (*param_4 < 0)) {
            piVar3 = 0xffffffffffffffea;
        }
        else {
            snprintf(&iStack_40,8,"0x%x\n",*(*(param_1 + 0xd8) + 0x4ce0));
            uVar4 = strnlen(&iStack_40,7);
            piVar3 = simple_read_from_buffer(param_2,param_3,param_4,&iStack_40,uVar4);
            param_3 = param_4;
            param_4 = piVar5;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return piVar3;
    }
    auVar8 = __stack_chk_fail(piVar3);
    *extraout_x18 = sym.swrm_debug_peek_write;
    pcStack_68 = sym.swrm_debug_peek_write;
    iVar7 = sp_el0;
    iStack_78 = *(iVar7 + 0x5e0);
    piVar5 = 0xffffffffffffffea;
    uStack_a0 = 0;
    uStack_80 = 0;
    auStack_90[0] = 0;
    auStack_90[1] = 0;
    puStack_70 = &stack0xffffffffffffffd0;
    if (((auVar8._8_8_ == 0) || (auVar8._0_8_ == 0)) || ((param_3 == NULL || (param_4 == NULL)))) goto code_r0x0800aca0;
    iVar7 = *(auVar8._0_8_ + 0xd8);
    if (iVar7 != 0) {
        piVar5 = 0xffffffffffffffea;
        if ((0x7 < param_3) || (*param_4 < 0)) goto code_r0x0800aca0;
        __check_object_size(&uStack_a0,param_3,0);
        iVar1 = sym._copy_from_user(&uStack_a0,auVar8._8_8_,param_3);
        if (iVar1 != 0) {
            piVar5 = 0xfffffffffffffff2;
            goto code_r0x0800aca0;
        }
        *(&uStack_a0 + param_3) = 0;
        puStack_98 = &uStack_a0;
        iVar6 = strsep(&puStack_98,0x80017d0);
        if (iVar6 != 0) {
            uVar2 = 0x10;
            if ((*(iVar6 + 1) & 0xdf) != 0x58) {
                uVar2 = 10;
            }
            iVar1 = kstrtouint(iVar6,uVar2,auStack_90);
            if (iVar1 == 0) {
                strsep(&puStack_98,0x80017d0);
                if (auStack_90[0] < 0x60a9) {
                    uVar2 = sym.swr_master_read(iVar7,auStack_90[0] & 0xffffffff);
                    *(iVar7 + 0x4ce0) = uVar2;
                    piVar5 = param_3;
                    goto code_r0x0800aca0;
                }
            }
        }
        iVar1 = ___ratelimit(obj.swrm_debug_peek_write._rs,"swrm_debug_peek_write");
        if (iVar1 != 0) {
            _dev_err(*(iVar7 + 0x1c70),"%s: rc = %d\n","swrm_debug_peek_write",0xffffffea);
        }
    }
    piVar5 = 0xffffffffffffffea;
code_r0x0800aca0:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_78) {
        return piVar5;
    }
    auVar8 = __stack_chk_fail(piVar5);
    *(auVar8._8_8_ + 0xd8) = *(auVar8._0_8_ + 0x2d8);
    return NULL;
}


// ===== sym.swrm_debug_write.4f7a57b380afe65abf3a3fec691fe242.cfi_jt @ 0x08003490 (size 8) =====

uint64_t *
sym.swrm_debug_write.4f7a57b380afe65abf3a3fec691fe242.cfi_jt
          (int64_t param_1,int64_t param_2,uint64_t *param_3,uint64_t *param_4)

{
    char *pcVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t *puVar8;
    int64_t iVar9;
    ulong uVar10;
    uint64_t uVar11;
    char *arg3;
    uint64_t uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar13;
    uint64_t uVar14;
    uint64_t *puVar15;
    uint64_t *arg2;
    uint64_t *puVar16;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar auVar17 [16];
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    int64_t *piStack_78;
    uint64_t auStack_70 [2];
    uint uStack_60;
    int64_t aiStack_58 [5];
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    aiStack_58[4] = *(iVar13 + 0x5e0);
    puVar8 = 0xffffffffffffffea;
    aiStack_58[2] = 0;
    aiStack_58[3] = 0;
    aiStack_58[0] = 0;
    aiStack_58[1] = 0;
    uStack_60 = 0;
    auStack_70[0] = 0;
    auStack_70[1] = 0;
    arg3 = param_3;
    if ((((param_2 != 0) && (param_1 != 0)) && (param_4 != NULL)) &&
       ((puVar8 = 0xffffffffffffffea, param_3 < 0x20 && (iVar13 = *(param_1 + 0xd8), iVar13 != 0)))) {
        __check_object_size(aiStack_58,param_3,0);
        iVar5 = sym._copy_from_user(aiStack_58,param_2,param_3);
        if (iVar5 == 0) {
            *(aiStack_58 + param_3) = '\0';
            piStack_78 = aiStack_58;
            iVar9 = strsep(&piStack_78,0x80017d0);
            if (iVar9 != 0) {
                arg3 = auStack_70;
                uVar6 = 0x10;
                if ((*(iVar9 + 1) & 0xdf) != 0x58) {
                    uVar6 = 10;
                }
                iVar5 = kstrtouint(iVar9,uVar6);
                if ((iVar5 == 0) && (iVar9 = strsep(&piStack_78,0x80017d0), iVar9 != 0)) {
                    arg3 = auStack_70 | 4;
                    uVar6 = 0x10;
                    if ((*(iVar9 + 1) & 0xdf) != 0x58) {
                        uVar6 = 10;
                    }
                    iVar5 = kstrtouint(iVar9,uVar6);
                    if (iVar5 == 0) {
                        strsep(&piStack_78,0x80017d0);
                        if (auStack_70[0] < 0x60a9) {
                            arg3 = auStack_70[0] >> 0x20;
                            sym.swr_master_write(iVar13,auStack_70[0] & 0xffffffff,arg3);
                            puVar8 = param_3;
                            goto code_r0x0800afb4;
                        }
                    }
                }
            }
            iVar5 = ___ratelimit(obj.swrm_debug_write._rs,"swrm_debug_write");
            if (iVar5 != 0) {
                arg3 = 0xffffffea;
                _printk(0x80014de,"swrm_debug_write");
            }
            puVar8 = 0xffffffffffffffea;
        }
        else {
            puVar8 = 0xfffffffffffffff2;
        }
    }
code_r0x0800afb4:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == aiStack_58[4]) {
        return puVar8;
    }
    auVar17 = __stack_chk_fail(puVar8);
    *extraout_x18 = sym.swrm_debug_reg_dump;
    pcStack_d8 = sym.swrm_debug_reg_dump;
    iVar13 = sp_el0;
    puVar8 = 0xffffffffffffffea;
    iStack_e8 = *(iVar13 + 0x5e0);
    puStack_e0 = &stack0xffffffffffffffd0;
    if ((((auVar17._8_8_ != 0) && (auVar17._0_8_ != 0)) && (arg3 != NULL)) && (param_4 != NULL)) {
        iVar13 = *(auVar17._0_8_ + 0xd8);
        if ((iVar13 == 0) || (uVar14 = *param_4, uVar14 < 0)) {
            puVar8 = 0xffffffffffffffea;
        }
        else {
            uStack_f8 = 0;
            uStack_f0 = 0;
            uStack_108 = 0;
            uStack_100 = 0;
            puVar8 = NULL;
            if (uVar14 < 0x60a9) {
                puVar16 = arg3 + -1;
                arg2 = arg3;
                puVar8 = NULL;
                do {
                    iVar5 = uVar14;
                    puVar15 = puVar8;
                    if (0x13aa < iVar5 - 0x2c55U) {
                        usleep_range_state(100,0x96,2);
                        uVar6 = sym.swr_master_read(iVar13,uVar14 & 0xffffffff);
                        arg3 = "0x%.3x: 0x%.2x\n";
                        uVar7 = snprintf(&uStack_108,0x19,"0x%.3x: 0x%.2x\n",uVar14 & 0xffffffff,uVar6);
                        if (uVar7 < 0) {
                            iVar5 = ___ratelimit(obj.swrm_reg_show._rs,"swrm_reg_show");
                            if (iVar5 != 0) {
                                uVar10 = 0x80019ac;
code_r0x0800b238:
                                _printk(uVar10,"swrm_reg_show");
                            }
                        }
                        else {
                            arg2 = uVar7;
                            puVar15 = puVar8 + arg2;
                            if (puVar16 <= puVar15) break;
                            noname_1 = __check_object_size(&uStack_108,arg2,1);
                            iVar9 = sym._copy_to_user(auVar17._8_8_ + puVar8,noname_1,arg2);
                            if (iVar9 == 0) {
                                *param_4 = *param_4 + 4;
                                goto code_r0x0800b118;
                            }
                            iVar5 = ___ratelimit(obj.swrm_reg_show._rs.284,"swrm_reg_show");
                            arg3 = arg2;
                            if (iVar5 != 0) {
                                uVar10 = 0x800208d;
                                goto code_r0x0800b238;
                            }
                        }
                        puVar8 = 0xfffffffffffffff2;
                        break;
                    }
code_r0x0800b118:
                    uVar14 = iVar5 + 4;
                    arg3 = arg2;
                    puVar8 = puVar15;
                } while (iVar5 < 0x60a5);
            }
        }
    }
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_e8) {
        return puVar8;
    }
    uVar11 = __stack_chk_fail();
    *extraout_x18_00 = sym._copy_to_user;
    puVar2 = sp_el0;
    uVar14 = (uVar11 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar12 = uVar11, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar12 = uVar11 & uVar14;
    }
    bVar4 = CARRY8(uVar12,arg3);
    pcVar1 = uVar12 + arg3;
    uVar12 = 0;
    if (!bVar4 || pcVar1 == NULL) {
        uVar12 = 0x7fffffffff;
    }
    if (bVar4) {
        pcVar1 = 0xffffffffffffffff;
    }
    if (!CARRY8(pcVar1,~uVar12) && !CARRY8(pcVar1 + ~uVar12,bVar4) || pcVar1 == uVar12 + !bVar4) {
        if ((_gpiod_to_irq >> 0x18 & 1) == 0) {
            uVar12 = daif;
            if ((uVar12 & 0x80) == 0) {
                uVar3 = daif;
                daif = uVar3 | 0xc0;
            }
            uVar3 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar3 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar12;
        }
        if ((uVar11 & uVar14 & 0xffffff8000000000) != 0) {
            uVar11 = 0;
        }
        arg3 = __arch_copy_to_user(uVar11);
        if ((_gpiod_to_irq >> 0x18 & 1) == 0) {
            uVar14 = daif;
            if ((uVar14 & 0x80) == 0) {
                uVar11 = daif;
                daif = uVar11 | 0xc0;
            }
            uVar11 = ttbr1_el1;
            ttbr0_el1 = (uVar11 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar11 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar14;
        }
    }
    return arg3;
}


// ===== sym.swrm_debug_peek_write.4f7a57b380afe65abf3a3fec691fe242.cfi_jt @ 0x08003498 (size 8) =====

uint64_t sym.swrm_debug_peek_write.4f7a57b380afe65abf3a3fec691fe242.cfi_jt
                   (int64_t param_1,int64_t param_2,uint64_t param_3,int64_t *param_4)

{
    int iVar1;
    uint uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    ulong uStack_60;
    uchar *puStack_58;
    uint64_t auStack_50 [2];
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    uVar3 = 0xffffffffffffffea;
    uStack_60 = 0;
    uStack_40 = 0;
    auStack_50[0] = 0;
    auStack_50[1] = 0;
    if ((((param_2 == 0) || (param_1 == 0)) || (param_3 == 0)) || (param_4 == NULL)) goto code_r0x0800aca0;
    iVar5 = *(param_1 + 0xd8);
    if (iVar5 != 0) {
        uVar3 = 0xffffffffffffffea;
        if ((7 < param_3) || (*param_4 < 0)) goto code_r0x0800aca0;
        __check_object_size(&uStack_60,param_3,0);
        iVar1 = sym._copy_from_user(&uStack_60,param_2,param_3);
        if (iVar1 != 0) {
            uVar3 = 0xfffffffffffffff2;
            goto code_r0x0800aca0;
        }
        *(&uStack_60 + param_3) = 0;
        puStack_58 = &uStack_60;
        iVar4 = strsep(&puStack_58,0x80017d0);
        if (iVar4 != 0) {
            uVar2 = 0x10;
            if ((*(iVar4 + 1) & 0xdf) != 0x58) {
                uVar2 = 10;
            }
            iVar1 = kstrtouint(iVar4,uVar2,auStack_50);
            if (iVar1 == 0) {
                strsep(&puStack_58,0x80017d0);
                if (auStack_50[0] < 0x60a9) {
                    uVar2 = sym.swr_master_read(iVar5,auStack_50[0] & 0xffffffff);
                    *(iVar5 + 0x4ce0) = uVar2;
                    uVar3 = param_3;
                    goto code_r0x0800aca0;
                }
            }
        }
        iVar1 = ___ratelimit(obj.swrm_debug_peek_write._rs,"swrm_debug_peek_write");
        if (iVar1 != 0) {
            _dev_err(*(iVar5 + 0x1c70),"%s: rc = %d\n","swrm_debug_peek_write",0xffffffea);
        }
    }
    uVar3 = 0xffffffffffffffea;
code_r0x0800aca0:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return uVar3;
    }
    auVar6 = __stack_chk_fail(uVar3);
    *(auVar6._8_8_ + 0xd8) = *(auVar6._0_8_ + 0x2d8);
    return 0;
}


// ===== sym.swrm_write.4f7a57b380afe65abf3a3fec691fe242.cfi_jt @ 0x080034a0 (size 8) =====

ulong sym.swrm_write.4f7a57b380afe65abf3a3fec691fe242.cfi_jt
                (int64_t param_1,uint64_t param_2,ulong param_3,uint8_t *param_4)

{
    uint8_t uVar1;
    uint8_t uVar2;
    char cVar3;
    uint8_t uVar4;
    int iVar5;
    ulong uVar6;
    char *pcVar7;
    ulong *in_x18;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || (iVar8 = *(param_1 + 0x98), iVar8 == 0)) {
        iVar5 = ___ratelimit(obj.swrm_write._rs,"swrm_write");
        if (iVar5 == 0) {
            return 0xffffffea;
        }
        pcVar7 = "%s: swrm is NULL\n";
    }
    else {
        if ((param_2 & 0xff) != 0) {
            uVar2 = *param_4;
            mutex_lock(iVar8 + 0x1d50);
            cVar3 = *(iVar8 + 0x38d4);
            mutex_unlock(iVar8 + 0x1d50);
            if (cVar3 == '\0') {
                return 0;
            }
            __pm_runtime_resume(*(iVar8 + 0x1c70),4);
            if (*(iVar8 + 0x38d6) != '\0') {
                sym.swrm_runtime_resume(*(iVar8 + 0x1c70));
            }
            uVar4 = *(iVar8 + 0x1e8a);
            uVar1 = 0;
            if (uVar4 != 0xe) {
                uVar1 = uVar4 + 1 & 0xf;
            }
            *(iVar8 + 0x1e8a) = uVar1;
            sym.swrm_cmd_fifo_wr_cmd(iVar8,uVar2,param_2 & 0xffffffff,uVar4);
            __pm_runtime_suspend(*(iVar8 + 0x1c70),0xd);
            iVar8 = *(iVar8 + 0x1c70);
            uVar6 = ktime_get_mono_fast_ns();
            *(iVar8 + 0x218) = uVar6;
            return 0;
        }
        iVar5 = ___ratelimit(obj.swrm_write._rs.200,"swrm_write");
        if (iVar5 == 0) {
            return 0xffffffea;
        }
        pcVar7 = "%s: invalid slave dev num\n";
    }
    _dev_err(param_1,pcVar7,"swrm_write");
    return 0xffffffea;
}


// ===== sym.swrm_get_clk_div_rate @ 0x080034a8 (size 120) =====

uint64_t sym.swrm_get_clk_div_rate(uint32_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    
    uVar3 = arg2;
    uVar2 = arg1;
    if (uVar3 != 0) {
        if (arg1 == 0xac4400) {
            uVar2 = 0xac4400;
        }
        else {
            if (arg1 != 9600000) {
                return arg2 & 0xffffffff;
            }
            uVar2 = 600000;
            if (600000 < uVar3) {
                uVar1 = 9600000;
                if (uVar3 < 0x493e01) {
                    uVar1 = 4800000;
                }
                return uVar1;
            }
        }
    }
    return uVar2;
}


// ===== sym.swrm_register_wake_irq @ 0x08003520 (size 356) =====

uint sym.swrm_register_wake_irq(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    uint uVar4;
    ulong uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x38d0) == 0) {
        uVar1 = of_get_named_gpio_flags(*(*(arg1 + 0x1c70) + 0x2f0),"qcom,swr-wakeup-irq",0,0);
        if (uVar1 < 0x200) {
            gpio_to_desc();
            uVar5 = gpiod_to_irq();
            *(arg1 + 0x1ed4) = uVar5;
            if (uVar5 < 0) {
                iVar2 = ___ratelimit(obj.swrm_register_wake_irq._rs,"swrm_register_wake_irq");
                if (iVar2 != 0) {
                    _dev_err(*(arg1 + 0x1c70),"Unable to configure irq\n");
                }
                return *(arg1 + 0x1ed4);
            }
code_r0x080035b4:
            iVar2 = request_threaded_irq
                              (uVar5,0,sym.swrm_wakeup_interrupt.4f7a57b380afe65abf3a3fec691fe242.cfi_jt,0x2004,
                               "swr_wake_irq",arg1);
            if (iVar2 == 0) {
                irq_set_irq_wake(*(arg1 + 0x1ed4),1);
                goto code_r0x0800353c;
            }
            iVar3 = ___ratelimit(obj.swrm_register_wake_irq._rs.5,"swrm_register_wake_irq");
            if (iVar3 != 0) {
                _dev_err(*(arg1 + 0x1c70),"%s: Failed to request irq %d\n","swrm_register_wake_irq",iVar2);
                return 0xffffffea;
            }
        }
        else {
            uVar5 = platform_get_irq_byname(*(arg1 + 0x3720),"swr_wake_irq");
            if (-1 < uVar5) {
                *(arg1 + 0x1ed4) = uVar5;
                goto code_r0x080035b4;
            }
            iVar2 = ___ratelimit(obj.swrm_register_wake_irq._rs.3,"swrm_register_wake_irq");
            if (iVar2 != 0) {
                _dev_err(*(arg1 + 0x1c70),"TLMM connect gpio not found\n");
                return 0xffffffea;
            }
        }
        uVar4 = 0xffffffea;
    }
    else {
code_r0x0800353c:
        uVar4 = 0;
    }
    return uVar4;
}


// ===== sym.swrm_wakeup_interrupt @ 0x08003684 (size 692) =====

ulong sym.swrm_wakeup_interrupt(ulong noname_0,int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (*(arg1 + 0x1c70) == 0)) {
        uVar4 = ___ratelimit(obj.swrm_wakeup_interrupt._rs,"swrm_wakeup_interrupt");
        if (uVar4 == 0) {
            return uVar4;
        }
        uVar4 = 0x80027d6;
code_r0x08003820:
        _printk(uVar4,"swrm_wakeup_interrupt");
        uVar4 = 0;
    }
    else {
        __trace_bprintk(0x80036ac,*0x800b000,"swrm_wakeup_interrupt");
        iVar3 = arg1 + 0x1d50;
        mutex_lock(iVar3);
        if ((*(arg1 + 0x3718) == 4) || (*(arg1 + 0x38d4) == '\0')) {
            if (0 < *(arg1 + 0x1ed4)) {
                iVar5 = irq_get_irq_data();
                if (iVar5 == 0) {
                    iVar1 = ___ratelimit(obj.swrm_wakeup_interrupt._rs.47,"swrm_wakeup_interrupt");
                    if (iVar1 != 0) {
                        _printk(0x8001ff7,"swrm_wakeup_interrupt");
                    }
                    mutex_unlock(iVar3);
                    return 0;
                }
                mutex_lock(arg1 + 0x1e10);
                iVar5 = irq_get_irq_data(*(arg1 + 0x1ed4));
                if ((*(*(iVar5 + 0x10) + 2) & 1) == 0) {
                    disable_irq_nosync(*(arg1 + 0x1ed4));
                }
                mutex_unlock(arg1 + 0x1e10);
            }
            mutex_unlock(iVar3);
        }
        else {
            mutex_unlock(iVar3);
            uVar2 = sym.swrm_lock_sleep(arg1);
            if ((uVar2 & 1) != 0) {
                if (*(arg1 + 0x1ed4) < 1) {
code_r0x08003750:
                    __pm_runtime_resume(*(arg1 + 0x1c70),4);
                    iVar3 = *(arg1 + 0x1c70);
                    uVar4 = ktime_get_mono_fast_ns();
                    *(iVar3 + 0x218) = uVar4;
                    __pm_runtime_suspend(*(arg1 + 0x1c70),0xd);
                    mutex_lock(arg1 + 0x1de0);
                    iVar1 = *(arg1 + 0x3928) + -1;
                    *(arg1 + 0x3928) = iVar1;
                    if (iVar1 == 0) {
                        if (*(arg1 + 0x3908) == 1) {
                            *(arg1 + 0x3908) = 0;
                        }
                        cpu_latency_qos_update_request(arg1 + 0x38d8,0xffffffff);
                        pm_relax(*(arg1 + 0x1c70));
                    }
                    mutex_unlock(arg1 + 0x1de0);
                    uVar4 = __wake_up(arg1 + 0x3910,3,0,0);
                    return uVar4;
                }
                iVar3 = irq_get_irq_data();
                if (iVar3 != 0) {
                    mutex_lock(arg1 + 0x1e10);
                    iVar3 = irq_get_irq_data(*(arg1 + 0x1ed4));
                    if ((*(*(iVar3 + 0x10) + 2) & 1) == 0) {
                        disable_irq_nosync(*(arg1 + 0x1ed4));
                    }
                    mutex_unlock(arg1 + 0x1e10);
                    goto code_r0x08003750;
                }
                uVar4 = ___ratelimit(obj.swrm_wakeup_interrupt._rs.51,"swrm_wakeup_interrupt");
                if (uVar4 == 0) {
                    return uVar4;
                }
                uVar4 = 0x8001ff7;
                goto code_r0x08003820;
            }
            iVar1 = ___ratelimit(obj.swrm_wakeup_interrupt._rs.49,"swrm_wakeup_interrupt");
            if (iVar1 != 0) {
                _dev_err(*(arg1 + 0x1c70),"%s Failed to hold suspend\n","swrm_wakeup_interrupt");
            }
            __trace_bprintk(0x80037dc,*0x800b000,"swrm_wakeup_interrupt");
        }
        uVar4 = 1;
    }
    return uVar4;
}


// ===== sym.swrm_wcd_notify @ 0x08003938 (size 1992) =====

int sym.swrm_wcd_notify(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    char cVar2;
    uint32_t uVar3;
    int iVar4;
    int iVar5;
    int64_t iVar6;
    code *pcVar7;
    ulong uVar8;
    char *pcVar9;
    ulong uVar10;
    ulong *in_x18;
    int64_t arg2_00;
    int64_t *piVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        iVar4 = ___ratelimit(obj.swrm_wcd_notify._rs,"swrm_wcd_notify");
        if (iVar4 == 0) {
            return -0x16;
        }
        _printk(0x8001a73,"swrm_wcd_notify");
        return -0x16;
    }
    arg2_00 = *(arg1 + 0xa8);
    if (arg2_00 == 0) {
        iVar4 = ___ratelimit(obj.swrm_wcd_notify._rs.8,"swrm_wcd_notify");
        if (iVar4 == 0) {
            return -0x16;
        }
        arg1 = arg1 + 0x10;
        pcVar9 = "%s: swrm is NULL\n";
        goto code_r0x08003f58;
    }
    uVar3 = arg2 - 1;
    if (0xb < uVar3) {
code_r0x08003b44:
        iVar4 = ___ratelimit(obj.swrm_wcd_notify._rs.42,"swrm_wcd_notify");
        if (iVar4 == 0) {
            return 0;
        }
        _dev_err(*(arg2_00 + 0x1c70),"%s: swr master unknown id %d\n","swrm_wcd_notify",arg2 & 0xffffffff);
        return 0;
    }
    //switch table (12 cases) at 0x8001330
    switch(*(uVar3 * 2 + 0x8001330) * 4 + 0x80039a4) {
    case 0x80039a8:
        __trace_bprintk(0x80039a4,*0x800b000,"swrm_wcd_notify");
        mutex_lock(arg2_00 + 0x1d80);
        if (*(arg2_00 + 0x3718) != 3) {
            sym.swrm_device_down(arg1 + 0x10);
        }
        break;
    case 0x8003a44:
        __trace_bprintk(0x8003a40,*0x800b000,"swrm_wcd_notify");
        mutex_lock(arg2_00 + 0x1d50);
        cVar2 = *(arg2_00 + 0x38d4);
        mutex_unlock(arg2_00 + 0x1d50);
        if (cVar2 != '\0') {
            mutex_lock(arg2_00 + 0x1d80);
            uVar8 = ktime_get_mono_fast_ns();
            *(arg1 + 0x228) = uVar8;
            __pm_runtime_resume(arg1 + 0x10,4);
            mutex_lock(arg2_00 + 0x1db0);
            piVar11 = *(arg2_00 + 0x3d8);
            if (piVar11 == arg2_00 + 0x3d8) {
                iVar4 = 0;
            }
            else {
                do {
                    iVar4 = swr_reset_device(piVar11 + -6);
                    if (iVar4 == -0x13 || iVar4 == 0) {
                        iVar4 = 0;
                    }
                    else {
                        iVar5 = ___ratelimit(obj.swrm_wcd_notify._rs.30,"swrm_wcd_notify");
                        if (iVar5 != 0) {
                            _dev_err(*(arg2_00 + 0x1c70),"%s: failed to reset swr device %d\n","swrm_wcd_notify",
                                     piVar11[2]);
                        }
                        sym.swrm_clk_request(arg2_00,0);
                    }
                    piVar11 = *piVar11;
                } while (piVar11 != arg2_00 + 0x3d8);
            }
            uVar8 = ktime_get_mono_fast_ns();
            *(arg1 + 0x228) = uVar8;
            __pm_runtime_suspend(arg1 + 0x10,0xd);
            mutex_unlock(arg2_00 + 0x1db0);
            mutex_unlock(arg2_00 + 0x1d80);
            return iVar4;
        }
        return -0x10;
    case 0x8003b44:
        goto code_r0x08003b44;
    case 0x8003b80:
        if (arg3 != 0) {
            mutex_lock(arg2_00 + 0x1d80);
            iVar4 = *arg3;
            *(arg2_00 + 0x3728) = iVar4;
            if ((iVar4 < 2) || (*(arg2_00 + 0x372c) != '\0')) {
                piVar11 = *(arg2_00 + 0x3d8);
                if (piVar11 != arg2_00 + 0x3d8) {
                    do {
                        iVar4 = swr_set_device_group(piVar11 + -6,0);
                        if ((iVar4 != 0) &&
                           (iVar5 = ___ratelimit(obj.swrm_wcd_notify._rs.35,"swrm_wcd_notify"), iVar5 != 0)) {
                            _dev_err(*(arg2_00 + 0x1c70),"%s: set num ch failed\n","swrm_wcd_notify");
                        }
                        piVar11 = *piVar11;
                    } while (piVar11 != arg2_00 + 0x3d8);
                    goto code_r0x080040f4;
                }
            }
            else {
                piVar11 = *(arg2_00 + 0x3d8);
                if (piVar11 != arg2_00 + 0x3d8) {
                    do {
                        iVar4 = swr_set_device_group(piVar11 + -6,0xf);
                        if ((iVar4 != 0) &&
                           (iVar5 = ___ratelimit(obj.swrm_wcd_notify._rs.33,"swrm_wcd_notify"), iVar5 != 0)) {
                            _dev_err(*(arg2_00 + 0x1c70),"%s: set num ch failed\n","swrm_wcd_notify");
                        }
                        piVar11 = *piVar11;
                    } while (piVar11 != arg2_00 + 0x3d8);
                    goto code_r0x080040f4;
                }
            }
            iVar4 = 0;
code_r0x080040f4:
            mutex_unlock(arg2_00 + 0x1d80);
            return iVar4;
        }
        pcVar7 = obj.swrm_wcd_notify._rs.32;
code_r0x08003f90:
        iVar4 = ___ratelimit(pcVar7,"swrm_wcd_notify");
        if (iVar4 == 0) {
            return -0x16;
        }
        arg1 = *(arg2_00 + 0x1c70);
        pcVar9 = "%s: data is NULL\n";
code_r0x08003f58:
        _dev_err(arg1,pcVar9,"swrm_wcd_notify");
        return -0x16;
    case 0x8003c20:
        if (arg3 == 0) {
            pcVar7 = obj.swrm_wcd_notify._rs.12;
            goto code_r0x08003f90;
        }
        mutex_lock(arg2_00 + 0x1d80);
        uVar1 = *(arg2_00 + 0x1edc);
        uVar3 = *arg3;
        if (uVar1 != uVar3) {
            if (*(arg2_00 + 0x3718) != 3) {
                *(arg2_00 + 0x1edc) = uVar3;
                *(arg2_00 + 0x1ee0) = uVar3;
                sym.swrm_switch_frame_shape(arg2_00,uVar3);
                sym.swrm_device_suspend(arg1 + 0x10);
            }
            usleep_range_state(10000,0x2904,2);
            uVar1 = *arg3;
        }
        *(arg2_00 + 0x1edc) = uVar1;
        *(arg2_00 + 0x1ee0) = uVar1;
        break;
    case 0x8003c8c:
        __trace_bprintk(0x8003c88,*0x800b000,"swrm_wcd_notify");
        mutex_lock(arg2_00 + 0x1d80);
        iVar6 = arg2_00 + 0x1d50;
        mutex_lock(iVar6);
        *(arg2_00 + 0x38d4) = 0;
        mutex_unlock(iVar6);
        if (*(arg2_00 + 0x3718) != 3) {
            sym.swrm_device_down(arg1 + 0x10);
        }
        mutex_lock(iVar6);
        if (*(arg2_00 + 0x3954) != 0) {
            digital_cdc_rsc_mgr_hw_vote_disable(*(arg2_00 + 0x3938),*(arg2_00 + 0x1c70));
        }
        *(arg2_00 + 0x3954) = 0;
        if (*(arg2_00 + 0x3958) != 0) {
            digital_cdc_rsc_mgr_hw_vote_disable(*(arg2_00 + 0x3940),*(arg2_00 + 0x1c70));
        }
        *(arg2_00 + 0x3958) = 0;
        mutex_unlock(iVar6);
        mutex_lock(arg2_00 + 0x1db0);
        *(arg2_00 + 0x3718) = 4;
        mutex_unlock(arg2_00 + 0x1db0);
        break;
    case 0x8003d50:
        __trace_bprintk(0x8003d4c,*0x800b000,"swrm_wcd_notify");
        *(arg2_00 + 0x1c90) = 0;
        if (((*(arg2_00 + 0x1c88) != 0) && (iVar6 = wait_for_completion_timeout(arg2_00 + 0x1c90,0x7d), iVar6 == 0))
           && (iVar4 = ___ratelimit(obj.swrm_wcd_notify._rs.20,"swrm_wcd_notify"), iVar4 != 0)) {
            _dev_err(*(arg2_00 + 0x1c70),"%s: clock voting not zero\n","swrm_wcd_notify");
        }
        if ((*(arg2_00 + 0x3718) == 2) || (iVar6 = pm_runtime_autosuspend_expiration(*(arg2_00 + 0x1c70)), iVar6 != 0))
        {
            *(arg2_00 + 0x3718) = 5;
            pm_runtime_set_autosuspend_delay(*(arg2_00 + 0x1c70),1);
            usleep_range_state(50000,0xc3b4,2);
            *(arg2_00 + 0x3718) = 4;
        }
        iVar6 = arg2_00 + 0x1d50;
        mutex_lock(iVar6);
        *(arg2_00 + 0x38d4) = 1;
        goto code_r0x08003f18;
    case 0x8003e0c:
        if (arg3 != 0) {
            mutex_lock(arg2_00 + 0x1d80);
            *(arg2_00 + 0x38d0) = *arg3;
            iVar4 = sym.swrm_register_wake_irq(arg2_00);
            if ((iVar4 != 0) && (iVar5 = ___ratelimit(obj.swrm_wcd_notify._rs.38,"swrm_wcd_notify"), iVar5 != 0)) {
                _dev_err(*(arg2_00 + 0x1c70),"%s: register wake_irq failed\n","swrm_wcd_notify");
            }
            goto code_r0x080040f4;
        }
        iVar4 = ___ratelimit(obj.swrm_wcd_notify._rs.36,"swrm_wcd_notify");
        if (iVar4 == 0) {
            return -0x16;
        }
        arg1 = *(arg2_00 + 0x1c70);
        pcVar9 = "%s: reg wake irq data is NULL\n";
        goto code_r0x08003f58;
    case 0x8003e70:
        if (arg3 != 0) {
            mutex_lock(arg2_00 + 0x1d80);
            if (*arg3 == 0) {
                iVar4 = -0x16;
            }
            else {
                iVar4 = sym.swrm_alloc_port_mem(arg1 + 0x10,arg2_00,*(arg3 + 4),*arg3);
                if (iVar4 == 0) {
                    sym.swrm_copy_port_config(arg2_00,arg3,*arg3);
                }
            }
            mutex_unlock(arg2_00 + 0x1d80);
            return iVar4;
        }
        iVar4 = ___ratelimit(obj.swrm_wcd_notify._rs.40,"swrm_wcd_notify");
        if (iVar4 == 0) {
            return -0x16;
        }
        uVar8 = *(arg2_00 + 0x1c70);
        pcVar9 = "%s: data is NULL for id=%d\n";
        uVar10 = 9;
code_r0x08004038:
        _dev_err(uVar8,pcVar9,"swrm_wcd_notify",uVar10);
        return -0x16;
    case 0x8003ebc:
        if (arg3 == 0) {
            iVar4 = ___ratelimit(obj.swrm_wcd_notify._rs.10,"swrm_wcd_notify");
            if (iVar4 == 0) {
                return -0x16;
            }
            uVar8 = *(arg2_00 + 0x1c70);
            pcVar9 = "%s: data is NULL for id:%d\n";
            uVar10 = 10;
            goto code_r0x08004038;
        }
        mutex_lock(arg2_00 + 0x1d80);
        if (*(arg2_00 + 0x395c) != *arg3) {
            if (*(arg2_00 + 0x3718) == 2) {
                *(arg2_00 + 0x38d6) = 1;
                sym.swrm_device_suspend(arg1 + 0x10);
                if (*(arg2_00 + 0x3718) == 2) {
                    *(arg2_00 + 0x38d6) = 0;
                }
            }
            *(arg2_00 + 0x395c) = *arg3;
        }
        break;
    case 0x8003f24:
        goto code_r0x08003f24;
    }
    iVar6 = arg2_00 + 0x1d80;
code_r0x08003f18:
    mutex_unlock(iVar6);
code_r0x08003f24:
    return 0;
}


// ===== sym.swrm_device_suspend @ 0x0800411c (size 156) =====

void sym.swrm_device_suspend(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __trace_bprintk(0x8004120,*0x800b000,"swrm_device_suspend",*(*(arg1 + 0x98) + 0x3718));
    if ((((*(arg1 + 0x200) & 7) != 0) || (*(arg1 + 0x20c) != 2)) &&
       (iVar1 = sym.swrm_runtime_suspend(arg1), iVar1 == 0)) {
        __pm_runtime_disable(arg1,1);
        __pm_runtime_set_status(arg1,2);
        pm_runtime_enable(arg1);
    }
    return;
}


// ===== sym.swrm_switch_frame_shape @ 0x080041b8 (size 216) =====

void sym.swrm_switch_frame_shape(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = 3;
    if (arg2 != 0xac4400) {
        iVar3 = 1;
    }
    uVar5 = 7;
    if (arg2 != 0xac4400) {
        uVar5 = 0;
    }
    uVar2 = sym.swr_master_read(arg1,0x104c);
    if (arg1 == 0) {
        uVar4 = 0;
    }
    else {
        iVar1 = 0x396c00;
        if (arg2 != 0xac4400) {
            iVar1 = 400000;
        }
        uVar4 = 0;
        if (iVar1 != 0) {
            uVar4 = (*(arg1 + 0x1ee0) << 1) / iVar1;
        }
        uVar4 = (uVar4 & 0xff) * 0x10000 - 0x10000;
    }
    uVar5 = uVar5 | iVar3 << 3;
    sym.swr_master_write(arg1,(~uVar2 & 1) << 6 | 0x101c,uVar4 | uVar5);
    sym.swrm_cmd_fifo_wr_cmd(arg1,uVar5,0xf,0xf);
    return;
}


// ===== sym.swrm_device_down @ 0x08004290 (size 132) =====

void sym.swrm_device_down(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x98);
    __trace_bprintk(0x80042ac,*0x800b000,"swrm_device_down",*(iVar1 + 0x3718));
    mutex_lock(iVar1 + 0x3730);
    *(iVar1 + 0x3718) = 4;
    mutex_unlock(iVar1 + 0x3730);
    sym.swrm_device_suspend(arg1);
    return;
}


// ===== sym.swrm_clk_request @ 0x08004314 (size 728) =====

int sym.swrm_clk_request(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int iVar2;
    ulong *in_x18;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x1eb8) == 0) || (*(arg1 + 0x1e98) == 0)) {
        return -0x16;
    }
    mutex_lock(arg1 + 0x1cf0);
    if ((arg2 & 1U) == 0) {
        iVar1 = *(arg1 + 0x1c88) + -1;
        *(arg1 + 0x1c88) = iVar1;
        if (iVar1 == 0) {
            __trace_bprintk(0x8004418,*0x800b000,"swrm_clk_request",0);
            pcVar3 = *(arg1 + 0x1eb8);
            __cfi_slowpath_diag(0x2b17460ce4bf82db,pcVar3,0x8001290);
            (*pcVar3)(*(arg1 + 0x1e98),0);
            complete(arg1 + 0x1c90);
        }
        iVar1 = 0;
    }
    else {
        if (*(arg1 + 0x38d4) == '\0') {
            iVar1 = -0x13;
            goto code_r0x0800453c;
        }
        if (*(arg1 + 0x1ed8) < 0x1050002) {
            pcVar3 = *(arg1 + 0x1ec0);
            iVar1 = 0;
            if (pcVar3 != NULL) {
                __cfi_slowpath_diag(0x2b17460ce4bf82db,pcVar3,0x8001210);
                iVar1 = (*pcVar3)(*(arg1 + 0x1e98),1);
                if (iVar1 != 0) {
                    iVar2 = ___ratelimit(obj.swrm_clk_request._rs,"swrm_clk_request");
                    if (iVar2 != 0) {
                        _dev_err(*(arg1 + 0x1c70),"%s: core vote request failed\n","swrm_clk_request");
                    }
                    pcVar3 = *(arg1 + 0x1ec0);
                    __cfi_slowpath_diag(0x2b17460ce4bf82db,pcVar3,0x8001230);
                    (*pcVar3)(*(arg1 + 0x1e98),0);
                    goto code_r0x0800453c;
                }
                pcVar3 = *(arg1 + 0x1ec0);
                __cfi_slowpath_diag(0x2b17460ce4bf82db,pcVar3,0x8001250);
                iVar1 = (*pcVar3)(*(arg1 + 0x1e98),0);
            }
        }
        else {
            iVar1 = 0;
        }
        iVar2 = *(arg1 + 0x1c88);
        *(arg1 + 0x1c88) = iVar2 + 1;
        if (iVar2 == 0) {
            __trace_bprintk(0x800449c,*0x800b000,"swrm_clk_request");
            pcVar3 = *(arg1 + 0x1eb8);
            __cfi_slowpath_diag(0x2b17460ce4bf82db,pcVar3,0x8001270);
            iVar1 = (*pcVar3)(*(arg1 + 0x1e98),1);
            if (iVar1 != 0) {
                iVar2 = ___ratelimit(obj.swrm_clk_request._rs.111,"swrm_clk_request");
                if (iVar2 != 0) {
                    _dev_err(*(arg1 + 0x1c70),"%s: clock enable req failed","swrm_clk_request");
                }
                *(arg1 + 0x1c88) = *(arg1 + 0x1c88) + -1;
            }
        }
    }
    if (*(arg1 + 0x1c88) < 0) {
        iVar2 = ___ratelimit(obj.swrm_clk_request._rs.117,"swrm_clk_request");
        if (iVar2 != 0) {
            _dev_err(*(arg1 + 0x1c70),"%s: swrm clk count mismatch\n","swrm_clk_request");
        }
        *(arg1 + 0x1c88) = 0;
    }
code_r0x0800453c:
    mutex_unlock(arg1 + 0x1cf0);
    return iVar1;
}


// ===== sym.swrm_alloc_port_mem @ 0x080045ec (size 220) =====

ulong sym.swrm_alloc_port_mem(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg2 + 0x3930);
    if (iVar3 == 0) {
        iVar3 = devm_kmalloc(arg1,0x20,0xdc0);
        *(arg2 + 0x3930) = iVar3;
        if (iVar3 != 0) goto code_r0x08004638;
code_r0x080046ac:
        uVar2 = 0xfffffff4;
    }
    else {
code_r0x08004638:
        if (*(iVar3 + (arg3 & 0xffffffffU) * 8) == 0) {
            uVar2 = devm_kmalloc(arg1,(arg4 & 0xffffffffU) * 0xc,0xdc0);
            iVar3 = (arg3 & 0xffffffffU) * 8;
            *(*(arg2 + 0x3930) + iVar3) = uVar2;
            if (*(*(arg2 + 0x3930) + iVar3) == 0) goto code_r0x080046ac;
        }
        else {
            iVar1 = ___ratelimit(obj.swrm_alloc_port_mem._rs,"swrm_alloc_port_mem");
            if (iVar1 != 0) {
                _dev_err(*(arg2 + 0x1c70),"%s: called more than once\n","swrm_alloc_port_mem");
            }
        }
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.swrm_copy_port_config @ 0x080046c8 (size 172) =====

void sym.swrm_copy_port_config(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    ulong *puVar3;
    ulong uVar4;
    ulong *puVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        uVar2 = 0;
        iVar1 = *(arg2 + 4);
        do {
            puVar3 = *(arg2 + 8) + uVar2 * 0xc;
            if (puVar3 == NULL) {
                iVar1 = ___ratelimit(obj.swrm_copy_port_config._rs,"swrm_copy_port_config");
                if (iVar1 == 0) {
                    return;
                }
                _dev_err(*(arg1 + 0x1c70),"%s: Invalid params\n","swrm_copy_port_config");
                return;
            }
            uVar4 = *puVar3;
            puVar5 = *(*(arg1 + 0x3930) + iVar1 * 8) + uVar2 * 0xc;
            uVar2 = uVar2 + 1;
            *(puVar5 + 1) = *(puVar3 + 1);
            *puVar5 = uVar4;
        } while (arg3 != uVar2);
    }
    return;
}


// ===== sym.swrm_lock_sleep @ 0x08004774 (size 544) =====

int sym.swrm_lock_sleep(int64_t arg1)

{
    int64_t iVar1;
    bool bVar2;
    bool bVar3;
    int iVar4;
    int iVar5;
    uint32_t uVar6;
    int iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong *in_x18;
    ulong *extraout_x18;
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
    iVar11 = sp_el0;
    iVar8 = arg1 + 0x1de0;
    iStack_48 = *(iVar11 + 0x5e0);
    mutex_lock(iVar8);
    iVar7 = *(arg1 + 0x3928);
    *(arg1 + 0x3928) = iVar7 + 1;
    if (iVar7 == 0) {
        cpu_latency_qos_update_request(arg1 + 0x38d8,10);
        pm_stay_awake(*(arg1 + 0x1c70));
    }
    mutex_unlock(iVar8);
    if (arg1 == 0) {
code_r0x080048a8:
        iVar7 = 1;
    }
    else {
        mutex_lock(iVar8);
        iVar7 = *(arg1 + 0x3908);
        if (iVar7 == 0) {
            *(arg1 + 0x3908) = 1;
            mutex_unlock(iVar8);
            goto code_r0x080048a8;
        }
        mutex_unlock(iVar8);
        if (iVar7 == 1) goto code_r0x080048a8;
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_70 = 0;
        init_wait_entry(&uStack_70,0);
        iVar11 = 0xaf;
        while( true ) {
            prepare_to_wait_event(arg1 + 0x3910,&uStack_70,2);
            mutex_lock(iVar8);
            uVar6 = *(arg1 + 0x3908);
            if (uVar6 == 0) {
                *(arg1 + 0x3908) = 1;
            }
            mutex_unlock(iVar8);
            if (iVar11 == 0 && uVar6 < 2) {
                iVar11 = 1;
            }
            if ((uVar6 < 2) || (iVar11 == 0)) break;
            iVar11 = schedule_timeout(iVar11);
        }
        finish_wait(arg1 + 0x3910,&uStack_70);
        if (iVar11 != 0) goto code_r0x080048a8;
        iVar7 = ___ratelimit(obj.swrm_lock_sleep._rs,"swrm_lock_sleep");
        if (iVar7 != 0) {
            _dev_err(*(arg1 + 0x1c70),"%s: system didn\'t resume within %dms, s %d, w %d\n","swrm_lock_sleep",700,
                     *(arg1 + 0x3908),*(arg1 + 0x3928));
        }
        mutex_lock(iVar8);
        iVar7 = *(arg1 + 0x3928) + -1;
        *(arg1 + 0x3928) = iVar7;
        if (iVar7 == 0) {
            if (*(arg1 + 0x3908) == 1) {
                *(arg1 + 0x3908) = 0;
            }
            cpu_latency_qos_update_request(arg1 + 0x38d8,0xffffffff);
            pm_relax(*(arg1 + 0x1c70));
        }
        mutex_unlock(iVar8);
        iVar7 = 0;
    }
    __wake_up(arg1 + 0x3910,3,0,0);
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return iVar7;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = sym.swrm_runtime_suspend;
    iVar11 = *(iVar8 + 0x98);
    __trace_bprintk(0x80049d0,*0x800b000,"swrm_runtime_suspend",*(iVar11 + 0x3718));
    if (*(iVar11 + 0x3718) == 5) {
        *(iVar11 + 0x3718) = 4;
        return 0;
    }
    mutex_lock(iVar11 + 0x1e40);
    iVar1 = iVar11 + 0x1db0;
    mutex_lock(iVar1);
    mutex_lock(iVar11 + 0x3730);
    iVar7 = *(iVar11 + 0x3718);
    mutex_unlock(iVar11 + 0x3730);
    iVar4 = sym.swrm_request_hw_vote(iVar11,0,1);
    if ((iVar4 == 0) || (iVar5 = ___ratelimit(obj.swrm_runtime_suspend._rs,"swrm_runtime_suspend"), iVar5 == 0)) {
        if (*(iVar11 + 0x3974) == 0) goto code_r0x08004acc;
code_r0x08004a88:
        iVar5 = sym.swrm_request_hw_vote(iVar11,1,1);
        bVar3 = iVar5 != 0;
        if (iVar7 == 4) goto code_r0x08004b18;
code_r0x08004ad8:
        if (iVar7 != 2) goto code_r0x08004e24;
        if (*(iVar11 + 0x1c09) == '\0') goto code_r0x08004b18;
        __trace_bprintk(0x8004ae8,*0x800b000,"swrm_runtime_suspend");
        iVar5 = -0x10;
        iVar7 = *(iVar11 + 0x3974);
joined_r0x08004b10:
        if (iVar7 != 0) goto code_r0x08004e38;
code_r0x08004e14:
        if (*(iVar11 + 0x3718) == 2) goto code_r0x08004e4c;
    }
    else {
        _dev_err(iVar8,"%s:lpass core hw enable failed\n","swrm_runtime_suspend");
        if (*(iVar11 + 0x3974) != 0) goto code_r0x08004a88;
code_r0x08004acc:
        bVar3 = false;
        if (iVar7 != 4) goto code_r0x08004ad8;
code_r0x08004b18:
        if ((*(iVar11 + 0x3898) == 0) || (*(iVar11 + 0x3718) == 4)) {
            iVar5 = ___ratelimit(obj.swrm_runtime_suspend._rs.66,"swrm_runtime_suspend");
            if (iVar5 != 0) {
                _dev_err(iVar8,"%s: clk stop mode not supported or SSR entry\n","swrm_runtime_suspend");
            }
            if (*(iVar11 + 0x3718) != 4) {
                mutex_unlock(iVar1);
                sym.swrm_cmd_fifo_wr_cmd(iVar11,8,0xf,0xf);
                mutex_lock(iVar1);
                sym.swr_master_write(iVar11,*(iVar11 + 0x1e90) * 0x1000 + 0x4004,0x1dfdfd);
                uVar6 = sym.swr_master_read(iVar11,0x1048);
                sym.swr_master_write(iVar11,0x1048,uVar6 | 2);
                sym.swr_master_write(iVar11,4,0);
                for (piVar12 = *(iVar11 + 0x3d8); piVar12 != iVar11 + 0x3d8; piVar12 = *piVar12) {
                    iVar5 = swr_device_down(piVar12 + -6);
                    if (iVar5 != 0) {
                        if (iVar5 != -0x13) {
                            iVar7 = ___ratelimit(obj.swrm_runtime_suspend._rs.72,"swrm_runtime_suspend");
                            if (iVar7 != 0) {
                                _dev_err(iVar8,"%s: failed to shutdown swr dev %d\n","swrm_runtime_suspend",
                                         *(piVar12 + 2));
                            }
                            __trace_bprintk(0x8004c44,*0x800b000,"swrm_runtime_suspend",*(piVar12 + 2));
                            iVar7 = *(iVar11 + 0x3974);
                            goto joined_r0x08004b10;
                        }
                        __trace_bprintk(0x8004bf4,*0x800b000,"swrm_runtime_suspend");
                    }
                }
                __trace_bprintk(0x8004cd8,*0x800b000,"swrm_runtime_suspend");
            }
        }
        else {
            uVar6 = *(iVar11 + 0x392c) & 0xfffffff7;
            *(iVar11 + 0x392c) = uVar6;
            sym.swr_master_write(iVar11,*(iVar11 + 0x1e90) * 0x1000 + 0x4004,uVar6);
            mutex_unlock(iVar1);
            sym.swrm_cmd_fifo_wr_cmd(iVar11,2,0xf,0xf);
            mutex_lock(iVar1);
            usleep_range_state(100,0x69,2);
        }
        if (0x1050001 < *(iVar11 + 0x1ed8)) {
            iVar5 = -100;
            do {
                uVar9 = sym.swr_master_read(iVar11,*(iVar11 + 0x1e90) * 0x1000 + 0x4064);
                if ((uVar9 & 1) == 0) goto code_r0x08004d60;
                usleep_range_state(500,0x1fe,2);
                bVar2 = iVar5 != -1;
                iVar5 = iVar5 + 1;
            } while (bVar2);
            iVar5 = ___ratelimit(obj.swrm_check_link_status._rs,"swrm_check_link_status");
            if (iVar5 != 0) {
                _dev_err(*(iVar11 + 0x1c70),"%s: link status not %s\n","swrm_check_link_status","disconnected");
            }
        }
code_r0x08004d60:
        iVar5 = sym.swrm_clk_request(iVar11,0);
        if (iVar5 == 0) {
            if (*(iVar11 + 0x3898) != 0) {
                if (*(iVar11 + 0x1ed4) < 1) {
                    if (*(iVar11 + 0x38d0) != 0) {
                        iVar5 = ___ratelimit(obj.swrm_runtime_suspend._rs.83,"swrm_runtime_suspend");
                        if (iVar5 != 0) {
                            _dev_err(iVar8,"%s:notifications disabled\n","swrm_runtime_suspend");
                        }
                        *(iVar11 + 0x38d5) = 0;
                    }
                }
                else {
                    iVar10 = irq_get_irq_data();
                    if ((iVar10 != 0) && ((*(*(iVar10 + 0x10) + 2) & 1) != 0)) {
                        enable_irq(*(iVar11 + 0x1ed4));
                    }
                }
            }
            if (iVar7 == 4) goto code_r0x08004e08;
code_r0x08004e24:
            *(iVar11 + 0x3718) = 3;
            iVar7 = *(iVar11 + 0x3974);
        }
        else {
            iVar7 = ___ratelimit(obj.swrm_runtime_suspend._rs.81,"swrm_runtime_suspend");
            if (iVar7 != 0) {
                _dev_err(iVar8,"%s: swrmn clk failed\n","swrm_runtime_suspend");
            }
code_r0x08004e08:
            iVar7 = *(iVar11 + 0x3974);
        }
        iVar5 = 0;
        if (iVar7 == 0) goto code_r0x08004e14;
code_r0x08004e38:
        if (bVar3) goto code_r0x08004e4c;
    }
    sym.swrm_request_hw_vote(iVar11,1,0);
code_r0x08004e4c:
    if (iVar4 == 0) {
        sym.swrm_request_hw_vote(iVar11,0,0);
    }
    mutex_unlock(iVar1);
    mutex_unlock(iVar11 + 0x1e40);
    __trace_bprintk(0x8004e70,*0x800b000,"swrm_runtime_suspend",*(iVar11 + 0x3718));
    pm_runtime_set_autosuspend_delay(iVar8,_segment.ehdr);
    return iVar5;
}


// ===== sym.swrm_runtime_suspend @ 0x08004994 (size 1464) =====

ulong sym.swrm_runtime_suspend(int64_t arg1)

{
    int64_t iVar1;
    bool bVar2;
    bool bVar3;
    int iVar4;
    int iVar5;
    uint32_t uVar6;
    int iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong uVar10;
    ulong *in_x18;
    int64_t arg1_00;
    int64_t *piVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x98);
    __trace_bprintk(0x80049d0,*0x800b000,"swrm_runtime_suspend",*(arg1_00 + 0x3718));
    if (*(arg1_00 + 0x3718) == 5) {
        *(arg1_00 + 0x3718) = 4;
        return 0;
    }
    mutex_lock(arg1_00 + 0x1e40);
    iVar1 = arg1_00 + 0x1db0;
    mutex_lock(iVar1);
    mutex_lock(arg1_00 + 0x3730);
    iVar7 = *(arg1_00 + 0x3718);
    mutex_unlock(arg1_00 + 0x3730);
    iVar4 = sym.swrm_request_hw_vote(arg1_00,0,1);
    if ((iVar4 == 0) || (iVar5 = ___ratelimit(obj.swrm_runtime_suspend._rs,"swrm_runtime_suspend"), iVar5 == 0)) {
        if (*(arg1_00 + 0x3974) != 0) goto code_r0x08004a88;
code_r0x08004acc:
        bVar3 = false;
        if (iVar7 == 4) goto code_r0x08004b18;
code_r0x08004ad8:
        if (iVar7 != 2) goto code_r0x08004e24;
        if (*(arg1_00 + 0x1c09) == '\0') goto code_r0x08004b18;
        __trace_bprintk(0x8004ae8,*0x800b000,"swrm_runtime_suspend");
        iVar7 = *(arg1_00 + 0x3974);
joined_r0x08004b10:
        if (iVar7 == 0) goto code_r0x08004e14;
code_r0x08004e38:
        if (bVar3) goto code_r0x08004e4c;
    }
    else {
        _dev_err(arg1,"%s:lpass core hw enable failed\n","swrm_runtime_suspend");
        if (*(arg1_00 + 0x3974) == 0) goto code_r0x08004acc;
code_r0x08004a88:
        iVar5 = sym.swrm_request_hw_vote(arg1_00,1,1);
        bVar3 = iVar5 != 0;
        if (iVar7 != 4) goto code_r0x08004ad8;
code_r0x08004b18:
        if ((*(arg1_00 + 0x3898) == 0) || (*(arg1_00 + 0x3718) == 4)) {
            iVar5 = ___ratelimit(obj.swrm_runtime_suspend._rs.66,"swrm_runtime_suspend");
            if (iVar5 != 0) {
                _dev_err(arg1,"%s: clk stop mode not supported or SSR entry\n","swrm_runtime_suspend");
            }
            if (*(arg1_00 + 0x3718) != 4) {
                mutex_unlock(iVar1);
                sym.swrm_cmd_fifo_wr_cmd(arg1_00,8,0xf,0xf);
                mutex_lock(iVar1);
                sym.swr_master_write(arg1_00,*(arg1_00 + 0x1e90) * 0x1000 + 0x4004,0x1dfdfd);
                uVar6 = sym.swr_master_read(arg1_00,0x1048);
                sym.swr_master_write(arg1_00,0x1048,uVar6 | 2);
                sym.swr_master_write(arg1_00,4,0);
                for (piVar11 = *(arg1_00 + 0x3d8); piVar11 != arg1_00 + 0x3d8; piVar11 = *piVar11) {
                    iVar5 = swr_device_down(piVar11 + -6);
                    if (iVar5 != 0) {
                        if (iVar5 != -0x13) {
                            iVar7 = ___ratelimit(obj.swrm_runtime_suspend._rs.72,"swrm_runtime_suspend");
                            if (iVar7 != 0) {
                                _dev_err(arg1,"%s: failed to shutdown swr dev %d\n","swrm_runtime_suspend",
                                         *(piVar11 + 2));
                            }
                            __trace_bprintk(0x8004c44,*0x800b000,"swrm_runtime_suspend",*(piVar11 + 2));
                            iVar7 = *(arg1_00 + 0x3974);
                            goto joined_r0x08004b10;
                        }
                        __trace_bprintk(0x8004bf4,*0x800b000,"swrm_runtime_suspend");
                    }
                }
                __trace_bprintk(0x8004cd8,*0x800b000,"swrm_runtime_suspend");
            }
        }
        else {
            uVar6 = *(arg1_00 + 0x392c) & 0xfffffff7;
            *(arg1_00 + 0x392c) = uVar6;
            sym.swr_master_write(arg1_00,*(arg1_00 + 0x1e90) * 0x1000 + 0x4004,uVar6);
            mutex_unlock(iVar1);
            sym.swrm_cmd_fifo_wr_cmd(arg1_00,2,0xf,0xf);
            mutex_lock(iVar1);
            usleep_range_state(100,0x69,2);
        }
        if (0x1050001 < *(arg1_00 + 0x1ed8)) {
            iVar5 = -100;
            do {
                uVar8 = sym.swr_master_read(arg1_00,*(arg1_00 + 0x1e90) * 0x1000 + 0x4064);
                if ((uVar8 & 1) == 0) goto code_r0x08004d60;
                usleep_range_state(500,0x1fe,2);
                bVar2 = iVar5 != -1;
                iVar5 = iVar5 + 1;
            } while (bVar2);
            iVar5 = ___ratelimit(obj.swrm_check_link_status._rs,"swrm_check_link_status");
            if (iVar5 != 0) {
                _dev_err(*(arg1_00 + 0x1c70),"%s: link status not %s\n","swrm_check_link_status","disconnected");
            }
        }
code_r0x08004d60:
        iVar5 = sym.swrm_clk_request(arg1_00,0);
        if (iVar5 == 0) {
            if (*(arg1_00 + 0x3898) != 0) {
                if (*(arg1_00 + 0x1ed4) < 1) {
                    if (*(arg1_00 + 0x38d0) != 0) {
                        iVar5 = ___ratelimit(obj.swrm_runtime_suspend._rs.83,"swrm_runtime_suspend");
                        if (iVar5 != 0) {
                            _dev_err(arg1,"%s:notifications disabled\n","swrm_runtime_suspend");
                        }
                        *(arg1_00 + 0x38d5) = 0;
                    }
                }
                else {
                    iVar9 = irq_get_irq_data();
                    if ((iVar9 != 0) && ((*(*(iVar9 + 0x10) + 2) & 1) != 0)) {
                        enable_irq(*(arg1_00 + 0x1ed4));
                    }
                }
            }
            if (iVar7 == 4) goto code_r0x08004e08;
code_r0x08004e24:
            *(arg1_00 + 0x3718) = 3;
            iVar7 = *(arg1_00 + 0x3974);
        }
        else {
            iVar7 = ___ratelimit(obj.swrm_runtime_suspend._rs.81,"swrm_runtime_suspend");
            if (iVar7 != 0) {
                _dev_err(arg1,"%s: swrmn clk failed\n","swrm_runtime_suspend");
            }
code_r0x08004e08:
            iVar7 = *(arg1_00 + 0x3974);
        }
        if (iVar7 != 0) goto code_r0x08004e38;
code_r0x08004e14:
        if (*(arg1_00 + 0x3718) == 2) goto code_r0x08004e4c;
    }
    sym.swrm_request_hw_vote(arg1_00,1,0);
code_r0x08004e4c:
    if (iVar4 == 0) {
        sym.swrm_request_hw_vote(arg1_00,0,0);
    }
    mutex_unlock(iVar1);
    uVar10 = mutex_unlock(arg1_00 + 0x1e40);
    return uVar10;
}


// ===== sym.swrm_request_hw_vote @ 0x08004f4c (size 540) =====

ulong sym.swrm_request_hw_vote(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0x1d50;
    mutex_lock(iVar1);
    if (arg2 == 1) {
        iVar3 = *(arg1 + 0x3940);
        if (iVar3 == 0) goto code_r0x08005088;
        if ((arg3 & 1U) != 0) {
            if (*(arg1 + 0x38d4) == '\0') {
                uVar4 = 0x80050f4;
                goto code_r0x08005110;
            }
            iVar2 = *(arg1 + 0x3958);
            *(arg1 + 0x3958) = iVar2 + 1;
            if ((iVar2 == 0) && (iVar2 = digital_cdc_rsc_mgr_hw_vote_enable(iVar3,*(arg1 + 0x1c70)), iVar2 < 0)) {
                iVar2 = ___ratelimit(obj.swrm_request_hw_vote._rs.94,"swrm_request_hw_vote");
                if (iVar2 != 0) {
                    _dev_err(*(arg1 + 0x1c70),"%s:lpass audio hw enable failed\n","swrm_request_hw_vote");
                }
                *(arg1 + 0x3958) = *(arg1 + 0x3958) + -1;
            }
            goto code_r0x08005088;
        }
        iVar2 = *(arg1 + 0x3958) + -1;
        *(arg1 + 0x3958) = iVar2;
        if (iVar2 < 0) {
            *(arg1 + 0x3958) = 0;
            goto code_r0x08005088;
        }
    }
    else {
        if ((arg2 != 0) || (iVar3 = *(arg1 + 0x3938), iVar3 == 0)) goto code_r0x08005088;
        if ((arg3 & 1U) != 0) {
            if (*(arg1 + 0x38d4) == '\0') {
                uVar4 = 0x80050d4;
code_r0x08005110:
                __trace_bprintk(uVar4,*0x800b000,"swrm_request_hw_vote");
                mutex_unlock(iVar1);
                return 0xffffffed;
            }
            iVar2 = *(arg1 + 0x3954);
            *(arg1 + 0x3954) = iVar2 + 1;
            if ((iVar2 == 0) && (iVar2 = digital_cdc_rsc_mgr_hw_vote_enable(iVar3,*(arg1 + 0x1c70)), iVar2 < 0)) {
                iVar2 = ___ratelimit(obj.swrm_request_hw_vote._rs,"swrm_request_hw_vote");
                if (iVar2 != 0) {
                    _dev_err(*(arg1 + 0x1c70),"%s:lpass core hw enable failed\n","swrm_request_hw_vote");
                }
                *(arg1 + 0x3954) = *(arg1 + 0x3954) + -1;
            }
            goto code_r0x08005088;
        }
        iVar2 = *(arg1 + 0x3954) + -1;
        *(arg1 + 0x3954) = iVar2;
        if (iVar2 < 0) {
            *(arg1 + 0x3954) = 0;
            goto code_r0x08005088;
        }
    }
    if (iVar2 == 0) {
        digital_cdc_rsc_mgr_hw_vote_disable(iVar3,*(arg1 + 0x1c70));
    }
code_r0x08005088:
    uVar4 = mutex_unlock(iVar1);
    return uVar4;
}


// ===== sym.swr_master_write @ 0x08005168 (size 332) =====

void sym.swr_master_write(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(arg1 + 0x1ea8);
    if (pcVar2 != NULL) {
        __cfi_slowpath_diag(0x861e518841accff8,pcVar2,0x80011f0);
        (*pcVar2)(*(arg1 + 0x1e98),arg2 & 0xffff,arg3 & 0xffffffffU);
        return;
    }
    mutex_lock(arg1 + 0x1d50);
    if (*(arg1 + 0x38d4) == '\0') goto code_r0x08005290;
    if (*(arg1 + 0x1ed8) < 0x1050002) {
        iVar1 = sym.swrm_clk_request(arg1,1);
        if (iVar1 != 0) {
            iVar1 = ___ratelimit(obj.swrm_ahb_write._rs,"swrm_ahb_write");
            if (iVar1 != 0) {
                _dev_err(*(arg1 + 0x1c70),"%s: clock request failed\n","swrm_ahb_write");
            }
            goto code_r0x08005290;
        }
code_r0x08005250:
        sym.writel(arg3 & 0xffffffffU,*(arg1 + 0x1e78) + (arg2 & 0xffffU));
        if (*(arg1 + 0x1ed8) < 0x1050002) {
            sym.swrm_clk_request(arg1,0);
            goto code_r0x08005278;
        }
    }
    else {
        iVar1 = sym.swrm_core_vote_request(arg1,1);
        if (iVar1 != -0x20a) {
            if (iVar1 != 0) goto code_r0x08005290;
            goto code_r0x08005250;
        }
code_r0x08005278:
        if (*(arg1 + 0x1ed8) < 0x1050002) goto code_r0x08005290;
    }
    sym.swrm_core_vote_request(arg1,0);
code_r0x08005290:
    mutex_unlock(arg1 + 0x1d50);
    return;
}


// ===== sym.swrm_cmd_fifo_wr_cmd @ 0x080052b4 (size 340) =====

void sym.swrm_cmd_fifo_wr_cmd(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    uint32_t in_w4;
    ulong *in_x18;
    uint32_t uVar4;
    ulong unaff_x30;
    
    uVar3 = arg4;
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + 0x1d20);
    uVar4 = uVar3;
    if ((uVar3 & 0xff) != 0xf) {
        if ((arg4 & 0xffU) != 0) {
            uVar4 = 0;
            if ((uVar3 & 0xff) < 0xe) {
                uVar4 = uVar3 + 1;
            }
            uVar3 = (uVar4 & 0xff) << 0x10;
            goto code_r0x08005354;
        }
        uVar2 = *(arg1 + 0x1e89);
        if (uVar2 != 0xf) {
            uVar4 = 0;
            uVar1 = 0;
            if (uVar2 < 0xe) {
                uVar1 = uVar2 + 1;
            }
            uVar3 = uVar1 << 0x10;
            *(arg1 + 0x1e89) = uVar1;
            goto code_r0x08005354;
        }
        uVar4 = 0;
    }
    uVar3 = 0xf0000;
code_r0x08005354:
    sym.swrm_wait_for_fifo_avail(arg1,0);
    sym.swr_master_write
              (arg1,*(arg1 + 0x1e90) * 0x1000 + 0x4020,in_w4 & 0xffff | arg2 << 0x18 | (arg3 & 0xff) << 0x14 | uVar3);
    if (*(arg1 + 0x1ea8) == 0) {
        usleep_range_state(0x96,0x9b,2);
    }
    if ((uVar4 & 0xff) == 0xf) {
        if (*(arg1 + 0x1ed8) == 0x1040000) {
            usleep_range_state(10000,0x2774,2);
        }
        else {
            wait_for_completion_timeout(arg1 + 0x1cd0,0x32);
        }
    }
    mutex_unlock(arg1 + 0x1d20);
    return;
}


// ===== sym.swr_master_read @ 0x08005408 (size 352) =====

uint sym.swr_master_read(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    int iVar2;
    ulong *in_x18;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar3 = *(arg1 + 0x1ea0);
    if (pcVar3 != NULL) {
        __cfi_slowpath_diag(0xf18e3b0fcc3d3246,pcVar3,0x80011b0);
        uVar1 = (*pcVar3)(*(arg1 + 0x1e98),arg2 & 0xffffffff);
        return uVar1;
    }
    mutex_lock(arg1 + 0x1d50);
    if (*(arg1 + 0x38d4) == '\0') {
code_r0x080054c0:
        uVar1 = 0;
    }
    else {
        if (*(arg1 + 0x1ed8) < 0x1050002) {
            iVar2 = sym.swrm_clk_request(arg1,1);
            if (iVar2 != 0) {
                iVar2 = ___ratelimit(obj.swrm_ahb_read._rs,"swrm_ahb_read");
                if (iVar2 != 0) {
                    _dev_err(*(arg1 + 0x1c70),"%s: clock request failed\n","swrm_ahb_read");
                    uVar1 = 0;
                    goto code_r0x08005520;
                }
                goto code_r0x080054c0;
            }
code_r0x080054dc:
            uVar1 = sym.readl(*(arg1 + 0x1e78) + (arg2 & 0xffff));
            if (*(arg1 + 0x1ed8) < 0x1050002) {
                sym.swrm_clk_request(arg1,0);
                goto code_r0x08005508;
            }
        }
        else {
            iVar2 = sym.swrm_core_vote_request(arg1,1);
            uVar1 = 0;
            if (iVar2 != -0x20a) {
                if (iVar2 != 0) goto code_r0x08005520;
                goto code_r0x080054dc;
            }
code_r0x08005508:
            if (*(arg1 + 0x1ed8) < 0x1050002) goto code_r0x08005520;
        }
        sym.swrm_core_vote_request(arg1,0);
    }
code_r0x08005520:
    mutex_unlock(arg1 + 0x1d50);
    return uVar1;
}


// ===== sym.swrm_core_vote_request @ 0x08005568 (size 236) =====

int sym.swrm_core_vote_request(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int iVar2;
    ulong *in_x18;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x1e98) == 0) {
        iVar1 = -0x16;
    }
    else {
        mutex_lock(arg1 + 0x1cf0);
        if (*(arg1 + 0x38d4) == '\0') {
            iVar1 = -0x13;
        }
        else {
            pcVar3 = *(arg1 + 0x1ec0);
            if (pcVar3 == NULL) {
                iVar1 = 0;
            }
            else {
                __cfi_slowpath_diag(0x2b17460ce4bf82db,pcVar3,0x80011d0);
                iVar1 = (*pcVar3)(*(arg1 + 0x1e98),arg2 & 1);
                if ((iVar1 != 0) &&
                   (iVar2 = ___ratelimit(obj.swrm_core_vote_request._rs,"swrm_core_vote_request"), iVar2 != 0)) {
                    _dev_err(*(arg1 + 0x1c70),"%s: core vote request failed\n","swrm_core_vote_request");
                }
            }
        }
        mutex_unlock(arg1 + 0x1cf0);
    }
    return iVar1;
}


// ===== sym.readl @ 0x08005654 (size 124) =====

uint sym.readl(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8005658);
    uVar1 = *arg1;
    DataMemoryBarrier(0,1);
    log_post_read_mmio(uVar1,0x20,arg1,0x800569c);
    return uVar1;
}


// ===== sym.writel @ 0x080056d4 (size 124) =====

void sym.writel(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80056f0);
    DataMemoryBarrier(0,2);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x800571c);
    return;
}


// ===== sym.swrm_wait_for_fifo_avail @ 0x08005750 (size 324) =====

void sym.swrm_wait_for_fifo_avail(int64_t arg1,int64_t arg2)

{
    bool bVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    char *pcVar5;
    uint32_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = sym.swr_master_read(arg1,*(arg1 + 0x1e90) * 0x1000 + 0x4050);
    if (arg2 == 0) {
        uVar6 = *(arg1 + 0x3968);
        uVar2 = uVar2 >> 8 & 0x1f;
        if (uVar2 == uVar6) {
            iVar3 = -0x1d;
            do {
                usleep_range_state(500,0x1fe,2);
                uVar2 = sym.swr_master_read(arg1,*(arg1 + 0x1e90) * 0x1000 + 0x4050);
                uVar6 = *(arg1 + 0x3968);
                uVar2 = uVar2 >> 8 & 0x1f;
                if (uVar2 < uVar6) break;
                bVar1 = iVar3 != 0;
                iVar3 = iVar3 + 1;
            } while (bVar1);
        }
        if ((uVar2 == uVar6) &&
           (iVar3 = ___ratelimit(obj.swrm_wait_for_fifo_avail._rs.103,"swrm_wait_for_fifo_avail"), iVar3 != 0)) {
            pcVar5 = "%s err write overflow\n";
code_r0x08005880:
            _dev_err(*(arg1 + 0x1c70),pcVar5,"swrm_wait_for_fifo_avail");
        }
    }
    else if ((uVar2 & 0x1f0000) == 0) {
        uVar2 = 0xffffffe1;
        do {
            bVar1 = 0xfffffffe < uVar2;
            uVar2 = uVar2 + 1;
            if (bVar1) {
                iVar3 = ___ratelimit(obj.swrm_wait_for_fifo_avail._rs,"swrm_wait_for_fifo_avail");
                if (iVar3 == 0) {
                    return;
                }
                pcVar5 = "%s err read underflow\n";
                goto code_r0x08005880;
            }
            usleep_range_state(500,0x1fe,2);
            uVar4 = sym.swr_master_read(arg1,*(arg1 + 0x1e90) * 0x1000 + 0x4050);
        } while ((uVar4 & 0x1f0000) == 0);
    }
    return;
}


// ===== sym.swrm_probe @ 0x08005894 (size 3284) =====

uint32_t sym.swrm_probe(int64_t arg1)

{
    uchar *puVar1;
    int *piVar2;
    int64_t iVar3;
    int64_t iVar4;
    ushort *puVar5;
    uint uVar6;
    uint32_t uVar7;
    int iVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    int64_t iVar11;
    ulong uVar12;
    uint64_t uVar13;
    int64_t *piVar14;
    char *pcVar15;
    int64_t iVar16;
    int64_t iVar17;
    uint64_t uVar18;
    uint *puVar19;
    int64_t iVar20;
    int64_t iVar21;
    int64_t iVar22;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar23;
    code *pcVar24;
    ulong unaff_x30;
    uint32_t uStack_74;
    uint uStack_70;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    piVar14 = arg1 + 0x10;
    iStack_68 = *(iVar11 + 0x5e0);
    uStack_6c = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    iVar11 = devm_kmalloc(piVar14,0x4ce8,0xdc0);
    if (iVar11 == 0) {
code_r0x08005efc:
        uVar9 = 0xfffffff4;
        goto code_r0x08006524;
    }
    piVar23 = *(arg1 + 0xa0);
    *(iVar11 + 0x3720) = arg1;
    *(iVar11 + 0x1c70) = piVar14;
    *(arg1 + 0xa8) = iVar11;
    *(iVar11 + 0x98) = iVar11;
    if (piVar23 == NULL) {
        pcVar15 = "%s: pdata from parent is NULL\n";
code_r0x080063b0:
        _dev_err(piVar14,pcVar15,"swrm_probe");
        uVar9 = 0xffffffea;
    }
    else {
        iVar16 = *piVar23;
        *(iVar11 + 0x1e98) = iVar16;
        if (iVar16 == 0) {
            pcVar15 = "%s: swrm->handle is NULL\n";
            goto code_r0x080063b0;
        }
        iVar8 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,swr-master-ee-val",iVar11 + 0x1e90,1,0);
        if (iVar8 < 0) {
            *(iVar11 + 0x1e90) = 1;
        }
        iVar8 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,swr-master-version",iVar11 + 0x1ed8,1,0);
        if (iVar8 < 0) {
            *(iVar11 + 0x1ed8) = 0x2000000;
        }
        uVar9 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,swr_master_id",iVar11 + 0x1e8c,1,0);
        if (uVar9 < 0) {
            _dev_err(piVar14,"%s: failed to get master id\n","swrm_probe");
            goto code_r0x08006524;
        }
        iVar8 = of_property_read_variable_u32_array
                          (*(arg1 + 0x300),"qcom,dynamic-port-map-supported",iVar11 + 0x1e94,1,0);
        if (iVar8 < 0) {
            *(iVar11 + 0x1e94) = 1;
        }
        piVar2 = iVar11 + 0x1e70;
        iVar8 = of_property_read_variable_u32_array(*(arg1 + 0x300),"swrm-io-base",piVar2,1,0);
        if (-1 < iVar8) {
            of_property_read_variable_u32_array(*(arg1 + 0x300),"swrm-io-base",piVar2,1,0);
        }
        if (*piVar2 == 0) {
            iVar16 = piVar23[1];
            *(iVar11 + 0x1ea0) = iVar16;
            if (iVar16 == 0) {
                pcVar15 = "%s: swrm->read is NULL\n";
            }
            else {
                iVar16 = piVar23[2];
                *(iVar11 + 0x1ea8) = iVar16;
                if (iVar16 == 0) {
                    pcVar15 = "%s: swrm->write is NULL\n";
                }
                else {
                    iVar16 = piVar23[3];
                    *(iVar11 + 0x1eb0) = iVar16;
                    if (iVar16 != 0) goto code_r0x08005a4c;
                    pcVar15 = "%s: swrm->bulk_write is NULL\n";
                }
            }
            goto code_r0x080063b0;
        }
        uVar12 = devm_ioremap(piVar14,*piVar2,0x60a8);
        *(iVar11 + 0x1e78) = uVar12;
code_r0x08005a4c:
        uVar12 = *(arg1 + 0x300);
        *(iVar11 + 0x1ec0) = piVar23[5];
        iVar8 = of_property_read_variable_u32_array(uVar12,"qcom,swrm-hctl-reg",&uStack_70,1,0);
        if (-1 < iVar8) {
            uVar12 = devm_ioremap(piVar14,uStack_70,4);
            *(iVar11 + 0x1e80) = uVar12;
        }
        iVar16 = piVar23[4];
        *(iVar11 + 0x1eb8) = iVar16;
        if (iVar16 == 0) {
            pcVar15 = "%s: swrm->clk is NULL\n";
            goto code_r0x080063b0;
        }
        iVar8 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,swr-clock-stop-mode0",iVar11 + 0x3898,1,0)
        ;
        if (iVar8 < 0) {
            *(iVar11 + 0x3898) = 0;
        }
        uVar9 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,swr-num-ports",&uStack_6c,1,0);
        if (uVar9 < 0) {
            uVar12 = *(iVar11 + 0x1c70);
            pcVar15 = "%s: Failed to get num_ports\n";
code_r0x080062f8:
            _dev_err(uVar12,pcVar15,"swrm_probe");
        }
        else {
            uVar12 = *(arg1 + 0x300);
            *(iVar11 + 0x37b0) = uStack_6c;
            iVar16 = of_find_property(uVar12,"qcom,swr-port-mapping",&uStack_74);
            uVar10 = uStack_74;
            if (iVar16 == 0) {
                _dev_err(*(iVar11 + 0x1c70),"missing port mapping\n");
                uVar9 = 0;
            }
            else {
                *(iVar11 + 0x394c) = 0;
                if (0xd < uStack_6c) {
                    pcVar15 = "%s:invalid number of swr ports\n";
                    goto code_r0x080063b0;
                }
                iVar16 = devm_kmalloc(piVar14,uStack_74,0xdc0);
                if (iVar16 == 0) goto code_r0x08005efc;
                uVar9 = of_property_read_variable_u32_array
                                  (*(arg1 + 0x300),"qcom,swr-port-mapping",iVar16,(uVar10 / 0xc) * 3,0);
                if (uVar9 < 0) {
                    uVar12 = *(iVar11 + 0x1c70);
                    pcVar15 = "%s: Failed to read port mapping\n";
                    goto code_r0x080062f8;
                }
                if (0xb < uVar10) {
                    uVar10 = uVar10 / 0xc;
                    uVar9 = 0;
                    if (uVar10 < 2) {
                        uVar10 = 1;
                    }
                    uVar18 = uVar10;
                    puVar19 = iVar16 + 4;
                    uVar10 = 0;
                    do {
                        uVar7 = puVar19[-1];
                        if (uVar7 != uVar10) {
                            uVar9 = 0;
                        }
                        if (0xd < uVar7 || 7 < uVar9) {
                            _dev_err(piVar14,"%s:invalid port_num %d or ch_iter %d\n","swrm_probe");
                            uVar9 = 0;
                            goto code_r0x08006524;
                        }
                        uVar18 = uVar18 - 1;
                        uVar6 = puVar19[1];
                        puVar1 = iVar11 + 0x37b1 + uVar7 * 0x10 + uVar9 * 2;
                        uVar9 = uVar9 + 1;
                        *puVar1 = *puVar19;
                        puVar1[1] = uVar6;
                        puVar19 = puVar19 + 3;
                        uVar10 = uVar7;
                    } while (uVar18 != 0);
                }
                devm_kfree(piVar14,iVar16);
                uVar10 = of_property_read_variable_u32_array
                                   (*(arg1 + 0x300),"qcom,is-always-on",iVar11 + 0x3974,1,0);
                iVar16 = piVar23[6];
                *(iVar11 + 0x1c09) = 0;
                *(iVar11 + 0x1e8a) = 0;
                *(iVar11 + 0x1ec8) = iVar16;
                *(iVar11 + 0x1c20) = sym.swrm_read.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
                *(iVar11 + 0x1c30) = sym.swrm_bulk_write.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
                *(iVar11 + 0x1c28) = sym.swrm_write.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
                *(iVar11 + 0x1c38) = sym.swrm_get_logical_dev_num.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
                *(iVar11 + 0x38d4) = 1;
                *(iVar11 + 0x1c60) = sym.swrm_device_wakeup_unvote.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
                *(iVar11 + 0x60) = piVar14;
                *(iVar11 + 0x1c40) = sym.swrm_init_port_params.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
                *(iVar11 + 0x1e88) = 0;
                *(iVar11 + 0x1c10) = sym.swrm_connect_port.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
                *(iVar11 + 0x1ee8) = 0;
                *(iVar11 + 0x3728) = 0;
                *(iVar11 + 0x1c18) = sym.swrm_disconnect_port.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
                *(iVar11 + 0x1c88) = 0;
                *(iVar11 + 0x3950) = 0;
                *(iVar11 + 0x3718) = 2;
                *(iVar11 + 0x1c48) = sym.swrm_slvdev_datapath_control.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
                *(iVar11 + 0x38d0) = 0;
                *(iVar11 + 0x3970) = 0;
                *(iVar11 + 0x3978) = 0;
                *(iVar11 + 0x1c50) = sym.swrm_remove_from_group.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
                *(iVar11 + 0x3960) = 0;
                *(iVar11 + 0x1cb0) = 0;
                *(iVar11 + 0x1c58) = sym.swrm_device_wakeup_vote.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
                *(iVar11 + 0x2f0) = *(arg1 + 0x300);
                *(iVar11 + 0x1edc) = 0x927c0000927c00;
                piVar2 = iVar11 + 0x3950;
                __init_swait_queue_head(iVar11 + 0x1cb8,"&x->wait",obj.init_completion.__key);
                *(iVar11 + 0x1cd0) = 0;
                __init_swait_queue_head(iVar11 + 0x1cd8,"&x->wait",obj.init_completion.__key);
                *(iVar11 + 0x1c90) = 0;
                __init_swait_queue_head(iVar11 + 0x1c98,"&x->wait",obj.init_completion.__key);
                __mutex_init(iVar11 + 0x1e10,"&swrm->irq_lock",obj.init_completion.__key);
                iVar3 = iVar11 + 0x1d80;
                __mutex_init(iVar3,"&swrm->mlock",obj.init_completion.__key);
                __mutex_init(iVar11 + 0x1db0,"&swrm->reslock",obj.init_completion.__key);
                __mutex_init(iVar11 + 0x3730,"&swrm->force_down_lock",obj.init_completion.__key);
                __mutex_init(iVar11 + 0x1d20,"&swrm->iolock",obj.init_completion.__key);
                __mutex_init(iVar11 + 0x1cf0,"&swrm->clklock",obj.init_completion.__key);
                __mutex_init(iVar11 + 0x1d50,"&swrm->devlock",obj.init_completion.__key);
                __mutex_init(iVar11 + 0x1de0,"&swrm->pm_lock",obj.init_completion.__key);
                __mutex_init(iVar11 + 0x1e40,"&swrm->runtime_lock",obj.init_completion.__key);
                *(iVar11 + 0x3928) = 0;
                *(iVar11 + 0x3908) = 0;
                __init_waitqueue_head(iVar11 + 0x3910,"&swrm->pm_wq",obj.init_completion.__key);
                cpu_latency_qos_add_request(iVar11 + 0x38d8,0xffffffff);
                iVar17 = 0xd;
                iVar16 = 0x1ef0;
                iVar20 = 0x1f08;
                iVar21 = 0x1f06;
                iVar22 = 0x1f03;
                do {
                    iVar4 = iVar11 + iVar16;
                    *iVar4 = iVar4;
                    *(iVar4 + 8) = iVar4;
                    if (*(iVar11 + 0x1e8c) == 3) {
                        puVar5 = iVar11 + iVar22;
                        *(iVar11 + iVar21) = 0xffff;
                        *puVar5 = 0;
                        *(iVar11 + iVar20 + 1) = 0xff;
                        *(iVar11 + iVar20) = 0xffffffff;
                        puVar5[5] = 0;
                        *(puVar5 + 6) = 0;
                    }
                    iVar17 = iVar17 + -1;
                    iVar16 = iVar16 + 0x28;
                    iVar20 = iVar20 + 0x28;
                    iVar21 = iVar21 + 0x28;
                    iVar22 = iVar22 + 0x28;
                } while (iVar17 != 0);
                iVar8 = of_property_read_variable_u32_array
                                  (*(arg1 + 0x300),"qcom,disable-div2-clk-switch",iVar11 + 0x3960,1,0);
                if (iVar8 < 0) {
                    *(iVar11 + 0x3960) = 0;
                }
                uVar13 = devm_clk_get(piVar14,"lpass_core_hw_vote");
                uVar18 = 0;
                if (uVar13 < 0xfffffffffffff001) {
                    uVar18 = uVar13;
                }
                *(iVar11 + 0x3938) = uVar18;
                uVar18 = devm_clk_get(piVar14,"lpass_audio_hw_vote");
                pcVar24 = *(iVar11 + 0x1ec8);
                uVar9 = 0;
                if (uVar13 < 0xfffffffffffff001 && uVar18 < 0xfffffffffffff001) {
                    uVar9 = uVar10 & uVar10 >> 0x1f;
                }
                uVar13 = 0;
                if (uVar18 < 0xfffffffffffff001) {
                    uVar13 = uVar18;
                }
                *(iVar11 + 0x3940) = uVar13;
                if (pcVar24 == NULL) {
                    uVar10 = platform_get_irq_byname(arg1,"swr_master_irq");
                    *(iVar11 + 0x1ed0) = uVar10;
                    if (uVar10 < 0) {
                        piVar14 = *(iVar11 + 0x1c70);
                        pcVar15 = "%s() error getting irq hdle: %d\n";
                    }
                    else {
                        uVar9 = request_threaded_irq
                                          (uVar10,0,sym.swr_mstr_interrupt.4f7a57b380afe65abf3a3fec691fe242.cfi_jt,
                                           0x2001,"swr_master_irq",iVar11);
                        if (uVar9 == 0) goto code_r0x0800601c;
                        piVar14 = *(iVar11 + 0x1c70);
                        pcVar15 = "%s: Failed to request irq %d\n";
                        uVar10 = uVar9;
                    }
code_r0x08006518:
                    _dev_err(piVar14,pcVar15,"swrm_probe",uVar10);
                }
                else {
                    __cfi_slowpath_diag(0x884c3e86bfd834e5,pcVar24,0x80012b0);
                    uVar9 = (*pcVar24)(*(iVar11 + 0x1e98),
                                       sym.swr_mstr_interrupt.4f7a57b380afe65abf3a3fec691fe242.cfi_jt,iVar11,1);
                    if (uVar9 != 0) {
                        pcVar15 = "%s: IRQ register failed ret %d\n";
                        uVar10 = uVar9;
                        goto code_r0x08006518;
                    }
code_r0x0800601c:
                    of_property_read_variable_u32_array
                              (*(arg1 + 0x300),"qcom,swr-mstr-irq-wakeup-capable",piVar2,1,0);
                    if (*piVar2 != 0) {
                        irq_set_irq_wake(*(iVar11 + 0x1ed0),1);
                        iVar8 = device_init_wakeup(*(iVar11 + 0x1c70),1);
                        if (iVar8 != 0) {
                            _dev_info(*(iVar11 + 0x1c70),"%s: Device wakeup init failed: %d\n","swrm_probe",iVar8);
                        }
                    }
                    uVar9 = swr_register_master(iVar11);
                    if (uVar9 == 0) {
                        swr_master_add_boarddevices(iVar11);
                        if (*(iVar11 + 0x3974) == 0) {
                            sym.swrm_request_hw_vote(iVar11,1,1);
                        }
                        mutex_lock(iVar3);
                        sym.swrm_clk_request(iVar11,1);
                        uVar9 = sym.swr_master_read(iVar11,0x100);
                        *(iVar11 + 0x3964) = uVar9 >> 0xf & 0x1f;
                        uVar9 = sym.swr_master_read(iVar11,0x100);
                        *(iVar11 + 0x3968) = uVar9 >> 10 & 0x1f;
                        iVar8 = sym.swr_master_read(iVar11,0);
                        if (*(iVar11 + 0x1ed8) != iVar8) {
                            _dev_info(piVar14,
                                      "%s: version specified in dtsi: 0x%x not match with HW read version 0x%x\n",
                                      "swrm_probe",*(iVar11 + 0x1ed8),iVar8);
                        }
                        uVar9 = sym.swr_master_read(iVar11,0x100);
                        *(iVar11 + 0x396c) = uVar9 >> 0x14 & 0xf;
                        uVar9 = of_property_read_variable_u32_array
                                          (*(*(iVar11 + 0x1c70) + 0x2f0),"qcom,swr-num-dev",iVar11 + 0x1ee4,1,0);
                        if (uVar9 < 0) {
                            _dev_err(piVar14,"%s: Looking up %s property failed\n","swrm_probe","qcom,swr-num-dev");
                        }
                        else if (*(iVar11 + 0x396c) < *(iVar11 + 0x1ee4)) {
                            _dev_err(piVar14,"%s: num_dev %d > max limit %d\n","swrm_probe");
                            uVar9 = 0xffffffea;
                        }
                        else {
                            iVar8 = sym.swrm_master_init(iVar11);
                            if (-1 < iVar8) {
                                mutex_unlock(iVar3);
                                *(iVar11 + 0x38a0) = 0xfffffffe0;
                                *(iVar11 + 0x38a8) = iVar11 + 0x38a8;
                                *(iVar11 + 0x38b0) = iVar11 + 0x38a8;
                                iVar16 = *(arg1 + 0x300);
                                *(iVar11 + 0x38b8) = sym.swrm_wakeup_work.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
                                if (iVar16 != 0) {
                                    of_register_swr_devices(iVar11);
                                }
                                iVar16 = *(arg1 + 0x80);
                                if (iVar16 == 0) {
                                    iVar16 = *piVar14;
                                }
                                uVar18 = debugfs_create_dir(iVar16,0);
                                *(iVar11 + 0x4cc0) = uVar18;
                                if (uVar18 < 0xfffffffffffff001) {
                                    uVar12 = debugfs_create_file("swrm_peek",0x8124,uVar18,iVar11,
                                                                 obj.swrm_debug_read_ops);
                                    *(iVar11 + 0x4cc8) = uVar12;
                                    uVar12 = debugfs_create_file("swrm_poke",0x8124,*(iVar11 + 0x4cc0),iVar11,
                                                                 obj.swrm_debug_write_ops);
                                    *(iVar11 + 0x4cd0) = uVar12;
                                    uVar12 = debugfs_create_file("swrm_reg_dump",0x8124,*(iVar11 + 0x4cc0),iVar11,
                                                                 obj.swrm_debug_dump_ops);
                                    *(iVar11 + 0x4cd8) = uVar12;
                                }
                                pm_runtime_set_autosuspend_delay(piVar14,_segment.ehdr);
                                __pm_runtime_use_autosuspend(piVar14,1);
                                __pm_runtime_set_status(piVar14,0);
                                pm_runtime_enable(piVar14);
                                uVar12 = ktime_get_mono_fast_ns();
                                *(arg1 + 0x228) = uVar12;
                                uVar9 = 0;
                                *(iVar11 + 0x3780) = 0xfffffffe0;
                                *(iVar11 + 0x3788) = iVar11 + 0x3788;
                                *(iVar11 + 0x3790) = iVar11 + 0x3788;
                                *(iVar11 + 0x3798) = sym.swrm_notify_work_fn.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
                                *(iVar11 + 0x3768) = sym.swrm_event_notify.4f7a57b380afe65abf3a3fec691fe242.cfi_jt;
                                goto code_r0x08006524;
                            }
                            _dev_err(piVar14,"%s: Error in master Initialization , err %d\n","swrm_probe",iVar8);
                            uVar9 = 0xfffffdfb;
                        }
                        mutex_unlock(iVar3);
                        swr_unregister_master(iVar11);
                        device_init_wakeup(*(iVar11 + 0x1c70),0);
                    }
                    else {
                        _dev_err(piVar14,"%s: error adding swr master\n","swrm_probe");
                    }
                    pcVar24 = *(iVar11 + 0x1ec8);
                    if (pcVar24 == NULL) {
                        if (*(iVar11 + 0x1ed0) != 0) {
                            iVar16 = irq_get_irq_data();
                            if (iVar16 != 0) {
                                iVar16 = irq_get_irq_data(*(iVar11 + 0x1ed0));
                                **(iVar16 + 0x10) = **(iVar16 + 0x10) & 0xfffffff0;
                                **(iVar16 + 0x10) = **(iVar16 + 0x10) | 0x2000000;
                            }
                            if (*piVar2 != 0) {
                                irq_set_irq_wake(*(iVar11 + 0x1ed0),0);
                            }
                            free_irq(*(iVar11 + 0x1ed0),iVar11);
                        }
                    }
                    else {
                        __cfi_slowpath_diag(0x884c3e86bfd834e5,pcVar24,0x80012d0);
                        (*pcVar24)(*(iVar11 + 0x1e98),sym.swr_mstr_interrupt.4f7a57b380afe65abf3a3fec691fe242.cfi_jt,
                                   iVar11,0);
                    }
                }
                cpu_latency_qos_remove_request(iVar11 + 0x38d8);
            }
        }
    }
code_r0x08006524:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_68) {
        return uVar9;
    }
    iVar11 = __stack_chk_fail();
    *extraout_x18 = sym.swrm_remove;
    iVar16 = *(iVar11 + 0xa8);
    pcVar24 = *(iVar16 + 0x1ec8);
    if (pcVar24 == NULL) {
        if (*(iVar16 + 0x1ed0) == 0) {
            iVar8 = *(iVar16 + 0x1ed4);
            if (iVar8 < 1) goto code_r0x08006640;
        }
        else {
            iVar20 = irq_get_irq_data();
            if (iVar20 != 0) {
                iVar20 = irq_get_irq_data(*(iVar16 + 0x1ed0));
                **(iVar20 + 0x10) = **(iVar20 + 0x10) & 0xfffffff0;
                **(iVar20 + 0x10) = **(iVar20 + 0x10) | 0x2000000;
            }
            if (*(iVar16 + 0x3950) != 0) {
                irq_set_irq_wake(*(iVar16 + 0x1ed0),0);
                device_init_wakeup(*(iVar16 + 0x1c70),0);
            }
            iVar8 = *(iVar16 + 0x1ed0);
        }
        free_irq(iVar8,iVar16);
    }
    else {
        __cfi_slowpath_diag(0x884c3e86bfd834e5,pcVar24,0x8001310);
        (*pcVar24)(*(iVar16 + 0x1e98),sym.swr_mstr_interrupt.4f7a57b380afe65abf3a3fec691fe242.cfi_jt,iVar16,0);
    }
code_r0x08006640:
    cancel_work_sync(iVar16 + 0x38a0);
    iVar11 = iVar11 + 0x10;
    __pm_runtime_disable(iVar11,1);
    __pm_runtime_set_status(iVar11,2);
    swr_unregister_master(iVar16);
    cpu_latency_qos_remove_request(iVar16 + 0x38d8);
    devm_kfree(iVar11,iVar16);
    return 0;
}


// ===== sym.swrm_remove @ 0x08006568 (size 316) =====

ulong sym.swrm_remove(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0xa8);
    pcVar4 = *(iVar3 + 0x1ec8);
    if (pcVar4 == NULL) {
        if (*(iVar3 + 0x1ed0) == 0) {
            iVar1 = *(iVar3 + 0x1ed4);
            if (iVar1 < 1) goto code_r0x08006640;
        }
        else {
            iVar2 = irq_get_irq_data();
            if (iVar2 != 0) {
                iVar2 = irq_get_irq_data(*(iVar3 + 0x1ed0));
                **(iVar2 + 0x10) = **(iVar2 + 0x10) & 0xfffffff0;
                **(iVar2 + 0x10) = **(iVar2 + 0x10) | 0x2000000;
            }
            if (*(iVar3 + 0x3950) != 0) {
                irq_set_irq_wake(*(iVar3 + 0x1ed0),0);
                device_init_wakeup(*(iVar3 + 0x1c70),0);
            }
            iVar1 = *(iVar3 + 0x1ed0);
        }
        free_irq(iVar1,iVar3);
    }
    else {
        __cfi_slowpath_diag(0x884c3e86bfd834e5,pcVar4,0x8001310);
        (*pcVar4)(*(iVar3 + 0x1e98),sym.swr_mstr_interrupt.4f7a57b380afe65abf3a3fec691fe242.cfi_jt,iVar3,0);
    }
code_r0x08006640:
    cancel_work_sync(iVar3 + 0x38a0);
    arg1 = arg1 + 0x10;
    __pm_runtime_disable(arg1,1);
    __pm_runtime_set_status(arg1,2);
    swr_unregister_master(iVar3);
    cpu_latency_qos_remove_request(iVar3 + 0x38d8);
    devm_kfree(arg1,iVar3);
    return 0;
}


// ===== sym.swrm_read @ 0x080066a4 (size 424) =====

ulong sym.swrm_read(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    int iVar5;
    ulong uVar6;
    ulong uVar7;
    char *pcVar8;
    uint8_t *arg4_00;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t arg1_00;
    int64_t iVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    uint uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_58 = *(iVar9 + 0x5e0);
    if (arg1 == 0) {
code_r0x080067ac:
        uStack_5c = 0;
        iVar5 = ___ratelimit(obj.swrm_read._rs,"swrm_read");
        arg4_00 = arg4;
        if (iVar5 != 0) {
            pcVar8 = "%s: swrm is NULL\n";
code_r0x08006834:
            _dev_err(arg1,pcVar8,"swrm_read");
            arg4_00 = arg4;
        }
    }
    else {
        iVar9 = *(arg1 + 0x98);
        uStack_5c = 0;
        if (iVar9 == 0) goto code_r0x080067ac;
        if ((arg2 & 0xff) != 0) {
            arg4_00 = arg4;
            mutex_lock(iVar9 + 0x1d50);
            cVar1 = *(iVar9 + 0x38d4);
            mutex_unlock(iVar9 + 0x1d50);
            if (cVar1 == '\0') {
                uVar7 = 0;
            }
            else {
                __pm_runtime_resume(*(iVar9 + 0x1c70),4);
                if (*(iVar9 + 0x38d6) != '\0') {
                    sym.swrm_runtime_resume(*(iVar9 + 0x1c70));
                }
                uVar2 = *(iVar9 + 0x1e8a);
                arg4_00 = uVar2;
                uVar3 = 0;
                if (uVar2 != 0xe) {
                    uVar3 = uVar2 + 1 & 0xf;
                }
                *(iVar9 + 0x1e8a) = uVar3;
                sym.swrm_cmd_fifo_rd_cmd(iVar9,&uStack_5c,arg2,arg4_00);
                *arg4 = uStack_5c;
                __pm_runtime_suspend(*(iVar9 + 0x1c70),0xd);
                iVar9 = *(iVar9 + 0x1c70);
                uVar6 = ktime_get_mono_fast_ns();
                uVar7 = 0;
                *(iVar9 + 0x218) = uVar6;
            }
            goto code_r0x080067c8;
        }
        iVar5 = ___ratelimit(obj.swrm_read._rs.180,"swrm_read");
        arg4_00 = arg4;
        if (iVar5 != 0) {
            pcVar8 = "%s: invalid slave dev num\n";
            goto code_r0x08006834;
        }
    }
    uVar7 = 0xffffffea;
code_r0x080067c8:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_58) {
        return uVar7;
    }
    auVar10 = __stack_chk_fail(uVar7);
    iVar9 = auVar10._0_8_;
    *extraout_x18 = sym.swrm_write;
    if ((iVar9 == 0) || (arg1_00 = *(iVar9 + 0x98), arg1_00 == 0)) {
        iVar5 = ___ratelimit(obj.swrm_write._rs,"swrm_write");
        if (iVar5 == 0) {
            return 0xffffffea;
        }
        pcVar8 = "%s: swrm is NULL\n";
    }
    else {
        if ((auVar10._8_8_ & 0xff) != 0) {
            uVar3 = *arg4_00;
            mutex_lock(arg1_00 + 0x1d50);
            cVar1 = *(arg1_00 + 0x38d4);
            mutex_unlock(arg1_00 + 0x1d50);
            if (cVar1 == '\0') {
                return 0;
            }
            __pm_runtime_resume(*(arg1_00 + 0x1c70),4);
            if (*(arg1_00 + 0x38d6) != '\0') {
                sym.swrm_runtime_resume(*(arg1_00 + 0x1c70));
            }
            uVar4 = *(arg1_00 + 0x1e8a);
            uVar2 = 0;
            if (uVar4 != 0xe) {
                uVar2 = uVar4 + 1 & 0xf;
            }
            *(arg1_00 + 0x1e8a) = uVar2;
            sym.swrm_cmd_fifo_wr_cmd(arg1_00,uVar3,auVar10._8_8_ & 0xffffffff,uVar4);
            __pm_runtime_suspend(*(arg1_00 + 0x1c70),0xd);
            iVar9 = *(arg1_00 + 0x1c70);
            uVar7 = ktime_get_mono_fast_ns();
            *(iVar9 + 0x218) = uVar7;
            return 0;
        }
        iVar5 = ___ratelimit(obj.swrm_write._rs.200,"swrm_write");
        if (iVar5 == 0) {
            return 0xffffffea;
        }
        pcVar8 = "%s: invalid slave dev num\n";
    }
    _dev_err(iVar9,pcVar8,"swrm_write");
    return 0xffffffea;
}


// ===== sym.swrm_write @ 0x0800684c (size 356) =====

ulong sym.swrm_write(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uint8_t uVar2;
    char cVar3;
    uint8_t uVar4;
    int iVar5;
    ulong uVar6;
    char *pcVar7;
    ulong *in_x18;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (iVar8 = *(arg1 + 0x98), iVar8 == 0)) {
        iVar5 = ___ratelimit(obj.swrm_write._rs,"swrm_write");
        if (iVar5 == 0) {
            return 0xffffffea;
        }
        pcVar7 = "%s: swrm is NULL\n";
    }
    else {
        if ((arg2 & 0xff) != 0) {
            uVar2 = *arg4;
            mutex_lock(iVar8 + 0x1d50);
            cVar3 = *(iVar8 + 0x38d4);
            mutex_unlock(iVar8 + 0x1d50);
            if (cVar3 == '\0') {
                return 0;
            }
            __pm_runtime_resume(*(iVar8 + 0x1c70),4);
            if (*(iVar8 + 0x38d6) != '\0') {
                sym.swrm_runtime_resume(*(iVar8 + 0x1c70));
            }
            uVar4 = *(iVar8 + 0x1e8a);
            uVar1 = 0;
            if (uVar4 != 0xe) {
                uVar1 = uVar4 + 1 & 0xf;
            }
            *(iVar8 + 0x1e8a) = uVar1;
            sym.swrm_cmd_fifo_wr_cmd(iVar8,uVar2,arg2,uVar4);
            __pm_runtime_suspend(*(iVar8 + 0x1c70),0xd);
            iVar8 = *(iVar8 + 0x1c70);
            uVar6 = ktime_get_mono_fast_ns();
            *(iVar8 + 0x218) = uVar6;
            return 0;
        }
        iVar5 = ___ratelimit(obj.swrm_write._rs.200,"swrm_write");
        if (iVar5 == 0) {
            return 0xffffffea;
        }
        pcVar7 = "%s: invalid slave dev num\n";
    }
    _dev_err(arg1,pcVar7,"swrm_write");
    return 0xffffffea;
}


// ===== sym.swrm_bulk_write @ 0x080069b0 (size 556) =====

ulong sym.swrm_bulk_write(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    char cVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    uint16_t uVar5;
    int iVar6;
    int64_t arg2_00;
    int64_t arg3_00;
    ulong uVar7;
    uint64_t in_x4;
    uint64_t uVar8;
    int64_t iVar9;
    uint32_t uVar10;
    ulong *in_x18;
    int64_t iVar11;
    ulong uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg1 == 0) || (iVar11 = *(arg1 + 0x98), iVar11 == 0)) || (*(iVar11 + 0x1e98) == 0)) {
        iVar6 = ___ratelimit(obj.swrm_bulk_write._rs,"swrm_bulk_write");
        if (iVar6 != 0) {
            _dev_err(arg1,"%s: swrm is NULL\n","swrm_bulk_write");
        }
    }
    else if (in_x4 != 0) {
        mutex_lock(iVar11 + 0x1d50);
        cVar2 = *(iVar11 + 0x38d4);
        mutex_unlock(iVar11 + 0x1d50);
        if (cVar2 == '\0') {
            return 0;
        }
        __pm_runtime_resume(*(iVar11 + 0x1c70),4);
        if ((arg2 & 0xffU) == 0) {
            iVar6 = ___ratelimit(obj.swrm_bulk_write._rs.203,"swrm_bulk_write");
            if (iVar6 != 0) {
                _dev_err(arg1,"%s: No support of Bulk write for master regs\n","swrm_bulk_write");
            }
            uVar12 = 0xffffffea;
        }
        else {
            if (in_x4 >> 0x3e == 0) {
                arg2_00 = __kmalloc(in_x4 << 2,0xdc0);
                if (arg2_00 != 0) {
                    arg3_00 = __kmalloc(in_x4 << 2,0xdc0);
                    if (arg3_00 == 0) {
                        uVar12 = 0xfffffff4;
                    }
                    else {
                        uVar8 = 0;
                        do {
                            uVar4 = *(arg4 + uVar8);
                            uVar3 = *(iVar11 + 0x1e89);
                            uVar5 = *(arg3 + uVar8 * 2);
                            if (uVar3 == 0xf) {
                                uVar10 = 0xf0000;
                            }
                            else {
                                uVar1 = 0;
                                if (uVar3 < 0xe) {
                                    uVar1 = uVar3 + 1;
                                }
                                uVar10 = uVar1 << 0x10;
                                *(iVar11 + 0x1e89) = uVar1;
                            }
                            iVar9 = uVar8 * 4;
                            uVar8 = uVar8 + 1;
                            *(arg3_00 + iVar9) = (arg2 & 0xff) << 0x14 | uVar5 | uVar4 << 0x18 | uVar10;
                            *(arg2_00 + iVar9) = *(iVar11 + 0x1e90) * 0x1000 + 0x4020;
                        } while (uVar8 < in_x4);
                        sym.swr_master_bulk_write(iVar11,arg2_00,arg3_00,in_x4 & 0xffffffff);
                        kfree(arg3_00);
                        uVar12 = 0;
                    }
                    kfree(arg2_00);
                    goto code_r0x08006ba4;
                }
            }
            uVar12 = 0xfffffff4;
        }
code_r0x08006ba4:
        __pm_runtime_suspend(*(iVar11 + 0x1c70),0xd);
        iVar11 = *(iVar11 + 0x1c70);
        uVar7 = ktime_get_mono_fast_ns();
        *(iVar11 + 0x218) = uVar7;
        return uVar12;
    }
    return 0xffffffea;
}


// ===== sym.swrm_get_logical_dev_num @ 0x08006bdc (size 464) =====

int sym.swrm_get_logical_dev_num(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    ulong uVar8;
    ulong *in_x18;
    int64_t arg1_00;
    int64_t iVar9;
    int iVar10;
    uint32_t uVar11;
    int64_t *piVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (arg1_00 = *(arg1 + 0x98), arg1_00 == 0)) {
        _printk(0x80015b5,"swrm_get_logical_dev_num");
        return -0x16;
    }
    uVar2 = *(arg1_00 + 0x1ee4);
    mutex_lock(arg1_00 + 0x1d50);
    cVar3 = *(arg1_00 + 0x38d4);
    mutex_unlock(arg1_00 + 0x1d50);
    if (cVar3 == '\0') {
        return -0x16;
    }
    __pm_runtime_resume(*(arg1_00 + 0x1c70),4);
    if (uVar2 - 1 < 0xfffffffe) {
        piVar1 = arg1 + 0x3d8;
        iVar10 = -0x16;
        uVar11 = 1;
        do {
            uVar6 = sym.swr_master_read(arg1_00,uVar11 * 8 + 0x534);
            uVar7 = sym.swr_master_read(arg1_00,uVar11 * 8 + 0x530);
            piVar12 = *piVar1;
            if (piVar1 != piVar12) {
                uVar6 = uVar7 & 0xffffffff | (uVar6 & 0xffff) << 0x20;
                do {
                    if (piVar12[0x75] == uVar6) {
                        iVar5 = sym.swr_master_read(arg1_00,0x1090);
                        *(arg1_00 + 0x1ee8) = iVar5;
                        if ((iVar5 >> ((uVar11 & 0xf) << 1) & 3U) - 1 < 2) {
                            *(piVar12 + 2) = uVar11;
                            if (uVar6 == arg2) {
                                *arg3 = uVar11;
                                _dev_info(*(arg1_00 + 0x1c70),"%s: devnum %d assigned for dev %llx\n",
                                          "swrm_get_logical_dev_num",uVar11,piVar12[0x75]);
                                iVar10 = 0;
                            }
                        }
                    }
                    piVar12 = *piVar12;
                } while (piVar1 != piVar12);
            }
            bVar4 = uVar11 != uVar2;
            uVar11 = uVar11 + 1;
        } while (bVar4);
        if (iVar10 == 0) goto code_r0x08006d2c;
    }
    else {
        iVar10 = -0x16;
    }
    _dev_err(*(arg1_00 + 0x1c70),"%s: device 0x%llx is not ready\n","swrm_get_logical_dev_num",arg2);
code_r0x08006d2c:
    iVar9 = *(arg1_00 + 0x1c70);
    uVar8 = ktime_get_mono_fast_ns();
    *(iVar9 + 0x218) = uVar8;
    __pm_runtime_suspend(*(arg1_00 + 0x1c70),0xd);
    return iVar10;
}


// ===== sym.swrm_init_port_params @ 0x08006dac (size 412) =====

uint sym.swrm_init_port_params(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *puVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    code *pcVar6;
    ulong uVar7;
    uint32_t uVar8;
    int64_t iVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong *in_x18;
    uint uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (iVar10 = *(arg1 + 0x98), iVar10 == 0)) {
        uVar12 = 0;
        uVar7 = 0x80015b5;
    }
    else {
        if (arg2 != 0) {
            if (arg3 != 0) {
                iVar3 = iVar10 + 0x397c;
                iVar11 = 0;
                iVar9 = (arg3 & 0xffffffffU) * 8;
                uVar8 = arg2 * 0xe - 0xe;
                uVar2 = uVar8;
                do {
                    if (0x99 < uVar2) goto code_r0x08006f44;
                    puVar1 = iVar3 + uVar2 * 8;
                    uVar2 = uVar2 + 1;
                    *puVar1 = *(*arg4 + iVar11);
                    iVar4 = *arg4 + iVar11;
                    iVar11 = iVar11 + 8;
                    puVar1[1] = *(iVar4 + 4);
                } while (iVar9 - iVar11 != 0);
                iVar11 = 0;
                uVar2 = uVar8;
                do {
                    if (0x99 < uVar2) goto code_r0x08006f44;
                    iVar4 = iVar3 + uVar2 * 8;
                    uVar2 = uVar2 + 1;
                    *(iVar4 + 0x4d0) = *(*(arg4 + 8) + iVar11);
                    iVar5 = *(arg4 + 8) + iVar11;
                    iVar11 = iVar11 + 8;
                    *(iVar4 + 0x4d4) = *(iVar5 + 4);
                } while (iVar9 - iVar11 != 0);
                iVar11 = 0;
                uVar2 = uVar8;
                do {
                    if (0x99 < uVar2) goto code_r0x08006f44;
                    iVar4 = iVar3 + uVar2 * 8;
                    uVar2 = uVar2 + 1;
                    *(iVar4 + 0x9a0) = *(*(arg4 + 0x10) + iVar11);
                    iVar5 = *(arg4 + 0x10) + iVar11;
                    iVar11 = iVar11 + 8;
                    *(iVar4 + 0x9a4) = *(iVar5 + 4);
                } while (iVar9 - iVar11 != 0);
                iVar10 = iVar10 + uVar8 * 8;
                iVar11 = 0;
                do {
                    if (0x99 < uVar8) {
code_r0x08006f44:
    //WARNING: Does not return
                        pcVar6 = SoftwareBreakpoint(0x5512,0x8006f48);
                        (*pcVar6)();
                    }
                    uVar8 = uVar8 + 1;
                    *(iVar10 + 0x47ec + iVar11) = *(*(arg4 + 0x18) + iVar11);
                    *(iVar10 + 0x47f0 + iVar11) = *(*(arg4 + 0x18) + iVar11 + 4);
                    iVar11 = iVar11 + 8;
                } while (iVar9 - iVar11 != 0);
            }
            return 0;
        }
        uVar12 = 0xffffffea;
        uVar7 = 0x800256c;
    }
    _printk(uVar7,"swrm_init_port_params");
    return uVar12;
}


// ===== sym.swrm_connect_port @ 0x08006f48 (size 1192) =====

int sym.swrm_connect_port(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    int64_t iVar2;
    char *pcVar3;
    uint uVar4;
    uint32_t uVar5;
    uchar uVar6;
    uchar uVar7;
    char cVar8;
    bool bVar9;
    code *pcVar10;
    int iVar11;
    int iVar12;
    int64_t *piVar13;
    uint64_t uVar14;
    uint8_t uVar15;
    uint32_t uVar16;
    int64_t *piVar17;
    uint64_t *extraout_x8;
    uint64_t *puVar18;
    ulong *in_x18;
    int64_t unaff_x20;
    int64_t iVar19;
    int64_t *piVar20;
    int64_t iVar21;
    uint32_t uVar22;
    uint64_t uVar23;
    uint64_t uVar24;
    ulong unaff_x30;
    uint8_t auStack_70 [4];
    uint8_t auStack_6c [4];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar19 = sp_el0;
    iStack_68 = *(iVar19 + 0x5e0);
    if (arg1 == 0) {
        if (arg2 == 0) goto code_r0x08007040;
    }
    else {
        iVar19 = *(arg1 + 0x98);
        auStack_6c[0] = 0;
        auStack_70[0] = 0;
        if (arg2 == 0) goto code_r0x08007040;
        if (iVar19 != 0) {
            unaff_x20 = iVar19 + 0x1d80;
            mutex_lock(unaff_x20);
            iVar2 = iVar19 + 0x1d50;
            mutex_lock(iVar2);
            if (*(iVar19 + 0x38d4) == '\0') {
                swr_port_response(arg1,*arg2);
                mutex_unlock(iVar2);
                mutex_unlock(unaff_x20);
                goto code_r0x08007040;
            }
            mutex_unlock(iVar2);
            pcVar3 = arg1 + 0x1c09;
            if (*pcVar3 == '\0') {
                __pm_runtime_resume(*(iVar19 + 0x1c70),4);
                uVar15 = 0;
                if (*(arg2 + 2) == '\0') goto code_r0x0800735c;
            }
            else if (*(arg2 + 2) == '\0') {
                uVar15 = 0;
                goto code_r0x0800735c;
            }
            uVar24 = 0;
            iVar2 = iVar19 + 0x1ef0;
            do {
                if (uVar24 == 0xe) {
code_r0x080073c4:
    //WARNING: Does not return
                    pcVar10 = SoftwareBreakpoint(0x5512,0x80073c8);
                    (*pcVar10)();
                }
                pcVar1 = arg2 + uVar24 + 3;
                iVar11 = sym.swrm_get_master_port(iVar19,auStack_6c,auStack_70,*(arg2 + uVar24 + 0x66));
                uVar15 = auStack_6c[0];
                if (iVar11 != 0) {
                    iVar12 = ___ratelimit(obj.swrm_connect_port._rs.211,"swrm_connect_port");
                    if (iVar12 != 0) {
                        _dev_err(arg1,"%s: mstr portid for slv port %d not found\n","swrm_connect_port",*pcVar1);
                    }
code_r0x080073a0:
                    swr_port_response(arg1,*arg2);
                    sym.swrm_cleanup_disabled_port_reqs(arg1);
                    mutex_unlock(unaff_x20);
                    goto code_r0x08007044;
                }
                uVar23 = auStack_6c[0];
                if (0x9a < uVar23) goto code_r0x080073c4;
                piVar20 = iVar2 + uVar23 * 0x28;
                piVar17 = *piVar20;
                uVar22 = auStack_6c[0];
                if (piVar20 != piVar17) {
                    do {
                        if ((*(piVar17 + -6) == *pcVar1) && (piVar13 = piVar17 + -1, *piVar13 == *(arg2 + 1))) {
                            if (piVar13 != NULL) goto code_r0x080071e0;
                            break;
                        }
                        piVar17 = *piVar17;
                    } while (piVar20 != piVar17);
                }
                iVar21 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar21 = 0x30;
                }
                piVar13 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar21),0xdc0,0x28);
                if (piVar13 == NULL) {
                    iVar11 = -0xc;
                    goto code_r0x080073a0;
                }
                uVar6 = *(arg2 + 1);
                cVar8 = *pcVar1;
                *(piVar13 + 0x1f) = 0;
                piVar17 = piVar13 + 1;
                uVar7 = *(arg2 + uVar24 + 0x11);
                *piVar13 = uVar6;
                uVar4 = *(arg2 + uVar24 * 4 + 0x20);
                *(piVar13 + 2) = cVar8;
                *(piVar13 + 3) = uVar15;
                *(piVar13 + 0x21) = uVar7;
                *(piVar13 + 0x24) = uVar4;
                iVar21 = *piVar20;
                uVar14 = __list_add_valid(piVar17,piVar20,iVar21);
                if ((uVar14 & 1) != 0) {
                    *(iVar21 + 8) = piVar17;
                    piVar13[1] = iVar21;
                    piVar13[2] = piVar20;
                    *piVar20 = piVar17;
                }
code_r0x080071e0:
                iVar21 = iVar2 + uVar23 * 0x28;
                *(piVar13 + 4) = *(piVar13 + 4) | *(arg2 + uVar24 + 0x58);
                *(iVar21 + 0x10) = 1;
                *(iVar21 + 0x12) = *(iVar21 + 0x12) | auStack_70[0];
                *(arg1 + 0x1c68) = *(arg1 + 0x1c68) | 1 << (uVar22 & 0x1f);
                if ((*(iVar19 + 0x3898) == 0) || (*(iVar19 + 0x1e94) == 0)) {
                    *(iVar2 + uVar23 * 0x28 + 0x20) = *(arg2 + uVar24 * 4 + 0x20);
                }
                else {
                    iVar21 = iVar2 + uVar23 * 0x28;
                    *(iVar21 + 0x20) = *(iVar21 + 0x20) + *(arg2 + uVar24 * 4 + 0x20);
                    uVar22 = *(iVar19 + 0x1f38) + *(iVar19 + 0x1f10) + *(iVar19 + 0x1f60) + *(iVar19 + 0x1f88) +
                             *(iVar19 + 0x1fb0) + *(iVar19 + 0x1fd8) + *(iVar19 + 0x2000) + *(iVar19 + 0x2028) +
                             *(iVar19 + 0x2050) + *(iVar19 + 0x2078) + *(iVar19 + 0x20a0) + *(iVar19 + 0x20c8) +
                             *(iVar19 + 0x20f0);
                    uVar5 = *(iVar19 + 0x1edc);
                    uVar16 = uVar5;
                    if (uVar22 != 0) {
                        if (uVar5 == 0xac4400) {
                            uVar16 = 0xac4400;
                        }
                        else {
                            uVar16 = uVar22;
                            if ((uVar5 == 9600000) && (uVar16 = 600000, 600000 < uVar22)) {
                                uVar4 = 9600000;
                                if (uVar22 < 0x493e01) {
                                    uVar4 = 4800000;
                                }
                                *(iVar19 + 0x1ee0) = uVar4;
                                goto code_r0x080070c0;
                            }
                        }
                    }
                    *(iVar19 + 0x1ee0) = uVar16;
                }
code_r0x080070c0:
                uVar15 = *(arg2 + 2);
                uVar24 = uVar24 + 1;
            } while (uVar24 < uVar15);
code_r0x0800735c:
            puVar18 = iVar19 + 0x3710;
            *pcVar3 = *pcVar3 + uVar15;
            goto code_r0x080073d0;
        }
    }
    iVar11 = ___ratelimit(obj.swrm_connect_port._rs,"swrm_connect_port");
    if (iVar11 != 0) {
        _dev_err(arg1,"%s: Invalid handle to swr controller\n","swrm_connect_port");
    }
code_r0x08007040:
    iVar11 = -0x16;
code_r0x08007044:
    while (iVar19 = sp_el0, *(iVar19 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
        puVar18 = extraout_x8;
code_r0x080073d0:
        Hint_Prefetch(puVar18,2,0,1);
        do {
            cVar8 = '\x01';
            bVar9 = ExclusiveMonitorPass(puVar18,0x10);
            if (bVar9) {
                *puVar18 = *puVar18 | 1;
                cVar8 = ExclusiveMonitorsStatus();
            }
        } while (cVar8 != '\0');
        swr_port_response(arg1,*arg2);
        mutex_unlock(unaff_x20);
        iVar11 = 0;
    }
    return iVar11;
}


// ===== sym.swrm_disconnect_port @ 0x080073f0 (size 912) =====

void sym.swrm_disconnect_port(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t *puVar4;
    uint32_t uVar5;
    char cVar6;
    bool bVar7;
    code *pcVar8;
    int iVar9;
    ulong uVar10;
    char *pcVar11;
    char *pcVar12;
    uint8_t uVar13;
    uint32_t uVar14;
    uint64_t uVar15;
    int64_t *piVar16;
    int64_t *piVar17;
    int64_t iVar18;
    ulong *in_x18;
    int64_t iVar19;
    uint64_t uVar20;
    ulong unaff_x30;
    uint8_t auStack_70 [4];
    uint8_t auStack_6c [4];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar19 = sp_el0;
    iStack_68 = *(iVar19 + 0x5e0);
    if (arg1 == 0) {
code_r0x0800764c:
        auStack_6c[0] = 0;
        iVar9 = ___ratelimit(obj.swrm_disconnect_port._rs,"swrm_disconnect_port");
        if (iVar9 != 0) {
            pcVar11 = "%s: Invalid handle to swr controller\n";
code_r0x0800766c:
            _dev_err(arg1,pcVar11,"swrm_disconnect_port");
        }
    }
    else {
        iVar19 = *(arg1 + 0x98);
        auStack_6c[0] = 0;
        auStack_70[0] = 0;
        if (iVar19 == 0) goto code_r0x0800764c;
        if (arg2 != 0) {
            iVar2 = iVar19 + 0x1d80;
            mutex_lock(iVar2);
            uVar13 = 0;
            if (*(arg2 + 2) != '\0') {
                uVar20 = 0;
                iVar3 = iVar19 + 0x1ef0;
                do {
                    if (uVar20 == 0xe) goto code_r0x08007758;
                    pcVar11 = arg2 + uVar20 + 3;
                    iVar9 = sym.swrm_get_master_port(iVar19,auStack_6c,auStack_70,*(arg2 + uVar20 + 0x66));
                    if (iVar9 != 0) {
                        iVar9 = ___ratelimit(obj.swrm_disconnect_port._rs.218,"swrm_disconnect_port");
                        if (iVar9 != 0) {
                            pcVar12 = "%s: mstr portid for slv port %d not found\n";
code_r0x08007718:
                            _dev_err(arg1,pcVar12,"swrm_disconnect_port",*pcVar11);
                        }
code_r0x080076bc:
                        swr_port_response(arg1,*arg2);
                        mutex_unlock(iVar2);
                        goto code_r0x080076d0;
                    }
                    uVar15 = auStack_6c[0];
                    if (0x9a < uVar15) goto code_r0x08007758;
                    piVar17 = iVar3 + uVar15 * 0x28;
                    piVar16 = *piVar17;
                    if (piVar17 == piVar16) {
code_r0x080076a4:
                        iVar9 = ___ratelimit(obj.swrm_disconnect_port._rs.219,"swrm_disconnect_port");
                        if (iVar9 != 0) {
                            pcVar12 = "%s:port not enabled : port %d\n";
                            goto code_r0x08007718;
                        }
                        goto code_r0x080076bc;
                    }
                    while ((*(piVar16 + -6) != *pcVar11 || (piVar16[-1] != *(arg2 + 1)))) {
                        piVar16 = *piVar16;
                        if (piVar17 == piVar16) goto code_r0x080076a4;
                    }
                    if (piVar16 + -1 == NULL) goto code_r0x080076a4;
                    iVar18 = iVar3 + uVar15 * 0x28;
                    *(piVar16 + 3) = *(piVar16 + 3) & (*(arg2 + uVar20 + 0x58) ^ 0xff);
                    uVar13 = *(iVar18 + 0x12) & (auStack_70[0] ^ 0xff);
                    *(iVar18 + 0x12) = uVar13;
                    if (((*(iVar19 + 0x3898) != 0) && (*(iVar19 + 0x1e94) != 0)) && (uVar13 == 0)) {
                        *(iVar3 + uVar15 * 0x28 + 0x20) = 0;
                        uVar1 = *(iVar19 + 0x1f38) + *(iVar19 + 0x1f10) + *(iVar19 + 0x1f60) + *(iVar19 + 0x1f88) +
                                *(iVar19 + 0x1fb0) + *(iVar19 + 0x1fd8) + *(iVar19 + 0x2000) + *(iVar19 + 0x2028) +
                                *(iVar19 + 0x2050) + *(iVar19 + 0x2078) + *(iVar19 + 0x20a0) + *(iVar19 + 0x20c8) +
                                *(iVar19 + 0x20f0);
                        uVar5 = *(iVar19 + 0x1edc);
                        uVar14 = uVar5;
                        if (uVar1 != 0) {
                            if (uVar5 == 0xac4400) {
                                uVar14 = 0xac4400;
                            }
                            else {
                                uVar14 = uVar1;
                                if (((uVar5 == 9600000) && (uVar14 = 600000, 600000 < uVar1)) &&
                                   (uVar14 = 9600000, uVar1 < 0x493e01)) {
                                    uVar14 = 4800000;
                                }
                            }
                        }
                        *(iVar19 + 0x1ee0) = uVar14;
                    }
                    uVar13 = *(arg2 + 2);
                    uVar20 = uVar20 + 1;
                } while (uVar20 < uVar13);
            }
            puVar4 = iVar19 + 0x3710;
            *(arg1 + 0x1c09) = *(arg1 + 0x1c09) - uVar13;
            Hint_Prefetch(puVar4,2,0,1);
            do {
                cVar6 = '\x01';
                bVar7 = ExclusiveMonitorPass(puVar4,0x10);
                if (bVar7) {
                    *puVar4 = *puVar4 | 2;
                    cVar6 = ExclusiveMonitorsStatus();
                }
            } while (cVar6 != '\0');
            swr_port_response(arg1,*arg2);
            mutex_unlock(iVar2);
            uVar10 = 0;
            goto code_r0x080076d4;
        }
        iVar9 = ___ratelimit(obj.swrm_disconnect_port._rs.216,"swrm_disconnect_port");
        if (iVar9 != 0) {
            pcVar11 = "%s: portinfo is NULL\n";
            goto code_r0x0800766c;
        }
    }
code_r0x080076d0:
    uVar10 = 0xffffffea;
code_r0x080076d4:
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail(uVar10);
code_r0x08007758:
    //WARNING: Does not return
    pcVar8 = SoftwareBreakpoint(0x5512,0x800775c);
    (*pcVar8)();
}


// ===== sym.swrm_slvdev_datapath_control @ 0x08007780 (size 1392) =====

ulong sym.swrm_slvdev_datapath_control(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    ushort *puVar2;
    uint32_t uVar3;
    uint8_t uVar4;
    int iVar5;
    uint8_t uVar6;
    uint32_t uVar7;
    char cVar8;
    bool bVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    int iVar12;
    uint32_t uVar13;
    ulong uVar14;
    int iVar15;
    uchar *puVar16;
    uint64_t uVar17;
    int64_t iVar18;
    int iVar19;
    int iVar20;
    ulong *in_x18;
    int64_t arg1_00;
    int64_t iVar21;
    uint32_t uVar22;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (arg1_00 = *(arg1 + 0x98), arg1_00 == 0)) {
        iVar12 = ___ratelimit(obj.swrm_slvdev_datapath_control._rs,"swrm_slvdev_datapath_control");
        if (iVar12 == 0) {
            return 0xfffffff2;
        }
        _printk(0x8001add,"swrm_slvdev_datapath_control");
        return 0xfffffff2;
    }
    mutex_lock(arg1_00 + 0x1d80);
    if ((*(arg1_00 + 0x3718) == 4) && ((arg2 & 1U) == 0)) {
        if ((*(arg1_00 + 0x3710) >> 1 & 1) == 0) goto code_r0x08007b74;
        puVar1 = arg1_00 + 0x3710;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar8 = '\x01';
            bVar9 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar9) {
                *puVar1 = *puVar1 & 0xfffffffffffffffd;
                cVar8 = ExclusiveMonitorsStatus();
            }
        } while (cVar8 != '\0');
        sym.swrm_cleanup_disabled_port_reqs(arg1);
        *(arg1_00 + 0x394c) = 0;
        if (*(arg1 + 0x1c09) != '\0') goto code_r0x08007b74;
        iVar21 = *(arg1_00 + 0x1c70);
        uVar14 = ktime_get_mono_fast_ns();
        *(iVar21 + 0x218) = uVar14;
    }
    else {
        uVar10 = sym.swr_master_read(arg1_00,0x104c);
        uVar10 = uVar10 & 1;
        puVar1 = arg1_00 + 0x3710;
        if ((arg2 & 1U) == 0) {
            if ((*(arg1_00 + 0x3710) >> 1 & 1) == 0) goto code_r0x08007b74;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar8 = '\x01';
                bVar9 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar9) {
                    *puVar1 = *puVar1 & 0xfffffffffffffffd;
                    cVar8 = ExclusiveMonitorsStatus();
                }
            } while (cVar8 != '\0');
            sym.swrm_disable_ports(arg1,uVar10 ^ 1);
            bVar9 = *(arg1 + 0x1c09) != '\0';
            uVar11 = 0;
            if (bVar9) {
                uVar11 = 7;
            }
            iVar12 = 2;
            if (bVar9) {
                iVar12 = 0x10;
            }
            iVar15 = *(arg1_00 + 0x1ee0);
        }
        else {
            if ((*(arg1_00 + 0x3710) & 1) == 0) goto code_r0x08007b74;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar8 = '\x01';
                bVar9 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar9) {
                    *puVar1 = *puVar1 & 0xfffffffffffffffe;
                    cVar8 = ExclusiveMonitorsStatus();
                }
            } while (cVar8 != '\0');
            iVar12 = *(arg1_00 + 0x1e8c);
            if (iVar12 != 3) {
                if ((*(arg1_00 + 0x1fa0) == '\0') || (iVar12 != 2)) {
                    if (iVar12 == 2) {
                        uVar17 = (*(arg1_00 + 0x1ee0) == 0xac4400) << 1;
                    }
                    else if ((iVar12 == 1) && (*(arg1_00 + 0x1f00) != '\0')) {
                        uVar17 = *(arg1_00 + 0x1f10) == 4800000;
                    }
                    else {
                        uVar17 = 0;
                    }
                }
                else {
                    uVar17 = 1;
                }
                iVar21 = 0;
                puVar16 = arg1_00 + 0x1f0f;
                iVar18 = *(*(arg1_00 + 0x3930) + uVar17 * 8);
                do {
                    if (puVar16[-0xf] != '\0') {
                        puVar2 = iVar18 + iVar21;
                        *(puVar16 + -9) = *puVar2;
                        puVar16[-0xc] = *(puVar2 + 1);
                        puVar16[-0xb] = *(puVar2 + 3);
                        puVar16[-7] = *(puVar2 + 2);
                        puVar16[-6] = *(puVar2 + 5);
                        puVar16[-4] = *(puVar2 + 7);
                        puVar16[-5] = *(puVar2 + 4);
                        puVar16[-3] = *(puVar2 + 3);
                        puVar16[-2] = *(puVar2 + 9);
                        puVar16[-1] = *(puVar2 + 5);
                        *puVar16 = *(puVar2 + 0xb);
                    }
                    iVar21 = iVar21 + 0xc;
                    puVar16 = puVar16 + 0x28;
                } while (iVar21 != 0x9c);
            }
            sym.swr_master_write(arg1_00,*(arg1_00 + 0x1e90) * 0x1000 + 0x4004,0x1dfdfd);
            iVar21 = *(arg1 + 0x98);
            if (iVar21 == 0) {
                iVar12 = ___ratelimit(obj.swrm_apply_port_config._rs,"swrm_apply_port_config");
                if (iVar12 != 0) {
                    _printk(0x80015b5,"swrm_apply_port_config");
                }
            }
            else {
                uVar11 = sym.swr_master_read(iVar21,0x104c);
                if (*(iVar21 + 0x3960) == 0) {
                    uVar6 = *(iVar21 + 0x1e8a);
                    uVar4 = 0;
                    if (uVar6 != 0xe) {
                        uVar4 = uVar6 + 1 & 0xf;
                    }
                    *(iVar21 + 0x1e8a) = uVar4;
                    sym.swrm_cmd_fifo_wr_cmd(iVar21,1,0xf,uVar6);
                }
                sym.swrm_copy_data_port_config(arg1,~uVar11 & 1);
            }
            iVar15 = *(arg1_00 + 0x1ee0);
            uVar11 = 0;
            if (iVar15 != 600000) {
                uVar11 = 7;
            }
            iVar12 = 2;
            if (iVar15 != 600000) {
                iVar12 = 0x10;
            }
        }
        iVar5 = *(arg1_00 + 0x1edc);
        uVar22 = 0;
        bVar9 = iVar5 != 0xac4400;
        iVar19 = 0x40;
        if (bVar9) {
            iVar19 = 0x32;
        }
        iVar20 = 0xe5b;
        if (bVar9) {
            iVar20 = 4000;
        }
        iVar20 = iVar19 * iVar12 * iVar20;
        uVar7 = 0;
        if (iVar20 != 0) {
            uVar7 = (iVar15 << 1) / iVar20;
        }
        iVar12 = 3;
        if (bVar9) {
            iVar12 = 1;
        }
        if ((iVar15 != 0) && (iVar5 != 0)) {
            iVar19 = 0;
            if (iVar15 != 0) {
                iVar19 = iVar5 / iVar15;
            }
            uVar22 = 0x500;
    //switch table (30 cases) at 0x8001348
            switch(iVar19) {
            case 2:
                uVar22 = 0x100;
                break;
            default:
                uVar22 = 0;
                break;
            case 4:
                uVar22 = 0x200;
                break;
            case 8:
                uVar22 = 0x300;
                break;
            case 0x10:
                uVar22 = 0x400;
                break;
            case 0x20:
                break;
            }
        }
        uVar3 = (uVar10 ^ 1) << 6 | 0x101c;
        uVar13 = sym.swr_master_read(arg1_00,uVar3);
        uVar11 = uVar11 | iVar12 << 3;
        sym.swr_master_write(arg1_00,uVar3,uVar13 & 0xff00f800 | (uVar22 | uVar11 | (uVar7 & 0xff) << 0x10) - 0x10000)
        ;
        sym.swrm_cmd_fifo_wr_cmd(arg1_00,uVar11,0xf,0xf);
        if ((arg2 & 1U) == 0) {
            sym.swrm_disable_ports(arg1,uVar10);
            sym.swrm_cleanup_disabled_port_reqs(arg1);
        }
        else {
            sym.swrm_copy_data_port_config(arg1,uVar10);
        }
        if (*(arg1 + 0x1c09) != '\0') goto code_r0x08007b74;
        iVar21 = *(arg1_00 + 0x1c70);
        uVar14 = ktime_get_mono_fast_ns();
        *(iVar21 + 0x218) = uVar14;
        if ((arg2 & 1U) == 0) {
            pm_runtime_set_autosuspend_delay(*(arg1_00 + 0x1c70),0x50);
        }
    }
    __pm_runtime_suspend(*(arg1_00 + 0x1c70),0xd);
code_r0x08007b74:
    mutex_unlock(arg1_00 + 0x1d80);
    return 0;
}


// ===== sym.swrm_remove_from_group @ 0x08007cf0 (size 164) =====

bool sym.swrm_remove_from_group(int64_t arg1)

{
    int64_t *piVar1;
    ulong *in_x18;
    bool bVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        bVar2 = false;
    }
    else {
        iVar3 = *(arg1 + 0x98);
        bVar2 = false;
        if (iVar3 != 0) {
            mutex_lock(iVar3 + 0x1d80);
            bVar2 = 1 < *(iVar3 + 0x3728);
            if (1 < *(iVar3 + 0x3728)) {
                piVar1 = *(arg1 + 0x3d8);
                if (arg1 + 0x3d8 != piVar1) {
                    do {
                        *(piVar1 + 0x76) = 0;
                        *(arg1 + 0x1c0b) = 0;
                        piVar1 = *piVar1;
                    } while (arg1 + 0x3d8 != piVar1);
                }
            }
            mutex_unlock(iVar3 + 0x1d80);
        }
    }
    return bVar2;
}


// ===== sym.swrm_device_wakeup_vote @ 0x08007d94 (size 324) =====

void sym.swrm_device_wakeup_vote(int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (arg1_00 = *(arg1 + 0x98), arg1_00 == 0)) {
        iVar1 = ___ratelimit(obj.swrm_device_wakeup_vote._rs,"swrm_device_wakeup_vote");
        if (iVar1 != 0) {
            _printk(0x80015b5,"swrm_device_wakeup_vote");
        }
    }
    else {
        uVar2 = sym.swrm_lock_sleep(arg1_00);
        if ((uVar2 & 1) == 0) {
            iVar1 = ___ratelimit(obj.swrm_device_wakeup_vote._rs.224,"swrm_device_wakeup_vote");
            if (iVar1 != 0) {
                _dev_err(*(arg1_00 + 0x1c70),"%s Failed to hold suspend\n","swrm_device_wakeup_vote");
            }
        }
        else {
            iVar1 = sym.swrm_request_hw_vote(arg1_00,0,1);
            if ((iVar1 != 0) &&
               (iVar1 = ___ratelimit(obj.swrm_device_wakeup_vote._rs.225,"swrm_device_wakeup_vote"), iVar1 != 0)) {
                _dev_err(*(arg1_00 + 0x1c70),"%s:lpass core hw enable failed\n","swrm_device_wakeup_vote");
            }
            iVar1 = sym.swrm_request_hw_vote(arg1_00,1,1);
            if ((iVar1 != 0) &&
               (iVar1 = ___ratelimit(obj.swrm_device_wakeup_vote._rs.226,"swrm_device_wakeup_vote"), iVar1 != 0)) {
                _dev_err(*(arg1_00 + 0x1c70),"%s:lpass audio hw enable failed\n","swrm_device_wakeup_vote");
            }
            __pm_runtime_resume(*(arg1_00 + 0x1c70),4);
        }
    }
    return;
}


// ===== sym.swrm_device_wakeup_unvote @ 0x08007ed8 (size 264) =====

void sym.swrm_device_wakeup_unvote(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t arg1_00;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (arg1_00 = *(arg1 + 0x98), arg1_00 == 0)) {
        iVar1 = ___ratelimit(obj.swrm_device_wakeup_unvote._rs,"swrm_device_wakeup_unvote");
        if (iVar1 != 0) {
            _printk(0x80015b5,"swrm_device_wakeup_unvote");
        }
    }
    else {
        iVar3 = *(arg1_00 + 0x1c70);
        uVar2 = ktime_get_mono_fast_ns();
        *(iVar3 + 0x218) = uVar2;
        __pm_runtime_suspend(*(arg1_00 + 0x1c70),0xd);
        sym.swrm_request_hw_vote(arg1_00,1,0);
        sym.swrm_request_hw_vote(arg1_00,0,0);
        mutex_lock(arg1_00 + 0x1de0);
        iVar1 = *(arg1_00 + 0x3928) + -1;
        *(arg1_00 + 0x3928) = iVar1;
        if (iVar1 == 0) {
            if (*(arg1_00 + 0x3908) == 1) {
                *(arg1_00 + 0x3908) = 0;
            }
            cpu_latency_qos_update_request(arg1_00 + 0x38d8,0xffffffff);
            pm_relax(*(arg1_00 + 0x1c70));
        }
        mutex_unlock(arg1_00 + 0x1de0);
        __wake_up(arg1_00 + 0x3910,3,0,0);
    }
    return;
}


// ===== sym.swr_mstr_interrupt @ 0x08007fe0 (size 2572) =====

ulong sym.swr_mstr_interrupt(int64_t arg1,int64_t arg2)

{
    uint8_t *puVar1;
    int64_t *piVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    char cVar5;
    bool bVar6;
    int iVar7;
    uint32_t uVar8;
    int iVar9;
    uint uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint64_t uVar13;
    ulong uVar14;
    int64_t iVar15;
    uint64_t uVar16;
    char *pcVar17;
    uint32_t uVar18;
    int64_t iVar19;
    uint32_t uVar20;
    int64_t iVar21;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar22;
    ulong *puVar23;
    uint32_t *puVar24;
    ulong unaff_x30;
    int aiStack_168 [4];
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    uint32_t auStack_138 [12];
    int64_t iStack_108;
    uchar *puStack_100;
    code *pcStack_f8;
    uint8_t *puStack_f0;
    uint32_t uStack_84;
    uint32_t uStack_80;
    uint uStack_70;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar19 = sp_el0;
    iStack_68 = *(iVar19 + 0x5e0);
    puVar1 = arg2 + 0x1e8a;
    uStack_70 = 0;
    __trace_bprintk(0x8008028,*0x800b000,"swr_mstr_interrupt");
    uVar13 = sym.swrm_lock_sleep(arg2);
    if ((uVar13 & 1) == 0) {
        iVar7 = ___ratelimit(obj.swr_mstr_interrupt._rs,"swr_mstr_interrupt");
        if (iVar7 != 0) {
            _dev_err(*(arg2 + 0x1c70),"%s Failed to hold suspend\n","swr_mstr_interrupt");
        }
        iVar19 = sp_el0;
        if (*(iVar19 + 0x5e0) == iStack_68) {
            return 0;
        }
        iVar15 = __stack_chk_fail();
        *extraout_x18 = sym.swrm_master_init;
        pcStack_f8 = sym.swrm_master_init;
        iVar19 = sp_el0;
        iStack_108 = *(iVar19 + 0x5e0);
        auStack_138[8] = 0;
        auStack_138[9] = 0;
        auStack_138[10] = 0;
        auStack_138[0xb] = 0;
        auStack_138[4] = 0;
        auStack_138[5] = 0;
        auStack_138[6] = 0;
        auStack_138[7] = 0;
        uStack_148 = 0;
        uStack_140 = 0;
        uVar10 = 3;
        if (*(iVar15 + 0x1e8c) == 1) {
            uVar10 = 1;
        }
        uStack_158 = 0;
        uStack_150 = 0;
        puStack_100 = &stack0xffffffffffffffa0;
        puStack_f0 = puVar1;
        if ((0x105ffff < *(iVar15 + 0x1ed8)) && (*(iVar15 + 0x1e80) != 0)) {
            uVar12 = sym.readl(*(iVar15 + 0x1e80));
            sym.writel(uVar12 & 0xfffffffd,*(iVar15 + 0x1e80));
            usleep_range_state(500,0x1f9,2);
            sym.readl(*(iVar15 + 0x1e80));
        }
        if (iVar15 == 0) {
            aiStack_168[0] = 8;
        }
        else {
            iVar7 = *(iVar15 + 0x1ee0) << 1;
            aiStack_168[0] = ((iVar7 * 0x14f8b589 >> 0x2f) - (iVar7 >> 0x1f) & 0xff) * 0x10000 + -0xfff8;
        }
        aiStack_168[1] = 1;
        auStack_138[0] = 0x101c;
        auStack_138[1] = 0x500;
        aiStack_168[2] = sym.swr_master_read(iVar15,0x1048);
        aiStack_168[2] = aiStack_168[2] | 0x3e0000;
        auStack_138[2] = 0x1048;
        auStack_138[3] = 0x314;
        if (*(iVar15 + 0x1ed8) < 0x1070000) {
            iVar7 = *(iVar15 + 0x1e90);
            iVar19 = 4;
        }
        else {
            iVar7 = *(iVar15 + 0x1e90);
            iVar19 = 5;
            auStack_138[4] = 0x18;
            uStack_158 = CONCAT44(uStack_158._4_4_,iVar7);
        }
        iVar7 = iVar7 * 0x1000;
        uVar12 = iVar19;
        *(&stack0xfffffffffffffec8 + iVar19 * 4) = iVar7 + 0x4060;
        *(&stack0xfffffffffffffe98 + iVar19 * 4) = 1;
        iVar19 = (uVar12 + 1) * 4;
        iVar21 = (uVar12 | 2) * 4;
        *(&stack0xfffffffffffffe98 + iVar19) = 2;
        *(&stack0xfffffffffffffec8 + iVar21) = iVar7 + 0x4008;
        aiStack_168[3] = uVar10;
        *(&stack0xfffffffffffffe98 + iVar21) = 0xffffffff;
        iVar21 = (uVar12 + 3) * 4;
        *(&stack0xfffffffffffffec8 + iVar19) = 4;
        uVar13 = uVar12 + 5;
        *(&stack0xfffffffffffffec8 + iVar21) = iVar7 + 0x4004;
        iVar19 = (uVar12 + 4) * 4;
        *(iVar15 + 0x392c) = 0x1dfdfd;
        *(&stack0xfffffffffffffe98 + iVar21) = 0x1dfdfd;
        *(&stack0xfffffffffffffec8 + iVar19) = 4;
        *(&stack0xfffffffffffffe98 + iVar19) = 3;
        sym.swr_master_bulk_write(iVar15,&stack0xfffffffffffffec8,&stack0xfffffffffffffe98,uVar13);
        iVar7 = *(iVar15 + 0x1ed8);
        if (iVar7 < 0x1050002) {
code_r0x08008cc0:
            if (0x1050000 < iVar7) {
                uVar12 = sym.swr_master_read(iVar15,0x314);
                sym.swr_master_write(iVar15,0x314,uVar12 | 0x80000000);
            }
            uVar14 = 0;
        }
        else {
            iVar7 = -100;
            do {
                uVar16 = sym.swr_master_read(iVar15,*(iVar15 + 0x1e90) * 0x1000 + 0x4064);
                if ((uVar16 & 1) != 0) {
                    iVar7 = *(iVar15 + 0x1ed8);
                    goto code_r0x08008cc0;
                }
                usleep_range_state(500,0x1fe,2);
                bVar6 = iVar7 != -1;
                iVar7 = iVar7 + 1;
            } while (bVar6);
            iVar7 = ___ratelimit(obj.swrm_check_link_status._rs,"swrm_check_link_status");
            if (iVar7 != 0) {
                _dev_err(*(iVar15 + 0x1c70),"%s: link status not %s\n","swrm_check_link_status","connected");
            }
            _dev_err(*(iVar15 + 0x1c70),"%s: swr link failed to connect\n","swrm_master_init");
            puVar24 = &stack0xfffffffffffffec8;
            do {
                usleep_range_state(0x32,0x37,2);
                uVar12 = *puVar24;
                uVar14 = *(iVar15 + 0x1c70);
                uVar10 = sym.swr_master_read(iVar15,uVar12);
                _dev_err(uVar14,"%s:reg:0x%x val:0x%x\n","swrm_master_init",uVar12,uVar10);
                uVar13 = uVar13 - 1;
                uVar14 = 0xffffffea;
                puVar24 = puVar24 + 1;
            } while (uVar13 != 0);
        }
        iVar19 = sp_el0;
        if (*(iVar19 + 0x5e0) != iStack_108) {
            iVar19 = __stack_chk_fail(uVar14);
            *extraout_x18_00 = sym.swrm_wakeup_work;
            if ((iVar19 + -0x38a0 == 0) || (piVar2 = iVar19 + -0x1c30, *piVar2 == 0)) {
                uVar14 = _printk(0x80027d6,"swrm_wakeup_work");
            }
            else {
                __trace_bprintk(0x8008d68,*0x800b000,"swrm_wakeup_work");
                mutex_lock(iVar19 + -0x1b50);
                cVar5 = *(iVar19 + 0x34);
                mutex_unlock(iVar19 + -0x1b50);
                if (cVar5 != '\0') {
                    uVar13 = sym.swrm_lock_sleep(iVar19 + -0x38a0);
                    if ((uVar13 & 1) == 0) {
                        _dev_err(*piVar2,"%s Failed to hold suspend\n","swrm_wakeup_work");
                    }
                    else {
                        __pm_runtime_resume(*piVar2,4);
                        iVar15 = *piVar2;
                        uVar14 = ktime_get_mono_fast_ns();
                        *(iVar15 + 0x218) = uVar14;
                        __pm_runtime_suspend(*piVar2,0xd);
                        mutex_lock(iVar19 + -0x1ac0);
                        iVar7 = *(iVar19 + 0x88) + -1;
                        *(iVar19 + 0x88) = iVar7;
                        if (iVar7 == 0) {
                            if (*(iVar19 + 0x68) == 1) {
                                *(iVar19 + 0x68) = 0;
                            }
                            cpu_latency_qos_update_request(iVar19 + 0x38,0xffffffff);
                            pm_relax(*piVar2);
                        }
                        mutex_unlock(iVar19 + -0x1ac0);
                        __wake_up(iVar19 + 0x70,3,0,0);
                    }
                }
                __trace_bprintk(0x8008e40,*0x800b000,"swrm_wakeup_work");
                uVar14 = pm_relax(*piVar2);
            }
            return uVar14;
        }
        return uVar14;
    }
    iVar19 = arg2 + 0x1db0;
    mutex_lock(iVar19);
    iVar7 = sym.swrm_request_hw_vote(arg2,0,1);
    if (iVar7 != 0) goto code_r0x080088b8;
    iVar7 = sym.swrm_request_hw_vote(arg2,1,1);
    if (iVar7 == 0) {
        iVar7 = sym.swrm_clk_request(arg2,1);
        if (iVar7 == 0) {
            mutex_unlock(iVar19);
            uStack_80 = sym.swr_master_read(arg2,*(arg2 + 0x1e90) * 0x1000 + 0x4000);
            uVar12 = *(arg2 + 0x392c) & uStack_80;
            __trace_bprintk(0x80080f8,*0x800b000,"swr_mstr_interrupt",uVar12);
            uStack_84 = 0;
            do {
                uVar22 = 0;
                do {
                    uVar8 = 1 << (uVar22 & 0x1f) & uVar12;
                    if (uVar8 < 0x100) {
    //switch table (128 cases) at 0x80013c4
                        switch(uVar8) {
                        case 0:
                        case 2:
                            break;
                        case 1:
                            uVar8 = sym.swr_master_read(arg2,0x1090);
                            if (*(arg2 + 0x1ee4) != -1) {
                                uVar11 = 0;
code_r0x08008224:
                                if ((uVar8 & 3) != 2) goto code_r0x08008230;
                                uVar4 = *puVar1;
                                uVar3 = 0;
                                if (uVar4 != 0xe) {
                                    uVar3 = uVar4 + 1 & 0xf;
                                }
                                *puVar1 = uVar3;
                                sym.swrm_cmd_fifo_rd_cmd(arg2,&stack0xffffffffffffff90,uVar11,uVar4);
                                uVar4 = *puVar1;
                                uVar3 = 0;
                                if (uVar4 != 0xe) {
                                    uVar3 = uVar4 + 1 & 0xf;
                                }
                                *puVar1 = uVar3;
                                sym.swrm_cmd_fifo_wr_cmd(arg2,4,uVar11,uVar4);
                                uVar4 = *puVar1;
                                uVar3 = 0;
                                if (uVar4 != 0xe) {
                                    uVar3 = uVar4 + 1 & 0xf;
                                }
                                *puVar1 = uVar3;
                                sym.swrm_cmd_fifo_wr_cmd(arg2,0,uVar11,uVar4);
                                for (puVar23 = *(arg2 + 0x3d8); uStack_84 = uVar11, puVar23 != arg2 + 0x3d8;
                                    puVar23 = *puVar23) {
                                    if ((*(puVar23 + 2) == (uVar11 & 0xff)) && (puVar23[0x77] != 0)) {
                                        *(puVar23 + 0x78) = 0;
                                        uStack_6c = 0;
                                        iVar19 = __irq_resolve_mapping(puVar23[0x77],0,&stack0xffffffffffffff94);
                                        uVar10 = 0;
                                        if (iVar19 != 0) {
                                            uVar10 = uStack_6c;
                                        }
                                        uVar14 = handle_nested_irq(uVar10);
                                        return uVar14;
                                    }
                                }
                                break;
                            }
code_r0x08008240:
                            iVar7 = ___ratelimit(obj.swr_mstr_interrupt._rs.235,"swr_mstr_interrupt");
                            if (iVar7 != 0) {
                                _dev_err(*(arg2 + 0x1c70),"%s: no slave alert found.spurious interrupt\n",
                                         "swr_mstr_interrupt");
                            }
                            break;
                        case 3:
                        case 5:
                        case 6:
                        case 7:
                        case 9:
                        case 10:
                        case 0xb:
                        case 0xc:
                        case 0xd:
                        case 0xe:
                        case 0xf:
                        case 0x11:
                        case 0x12:
                        case 0x13:
                        case 0x14:
                        case 0x15:
                        case 0x16:
                        case 0x17:
                        case 0x18:
                        case 0x19:
                        case 0x1a:
                        case 0x1b:
                        case 0x1c:
                        case 0x1d:
                        case 0x1e:
                        case 0x1f:
                        case 0x21:
                        case 0x22:
                        case 0x23:
                        case 0x24:
                        case 0x25:
                        case 0x26:
                        case 0x27:
                        case 0x28:
                        case 0x29:
                        case 0x2a:
                        case 0x2b:
                        case 0x2c:
                        case 0x2d:
                        case 0x2e:
                        case 0x2f:
                        case 0x30:
                        case 0x31:
                        case 0x32:
                        case 0x33:
                        case 0x34:
                        case 0x35:
                        case 0x36:
                        case 0x37:
                        case 0x38:
                        case 0x39:
                        case 0x3a:
                        case 0x3b:
                        case 0x3c:
                        case 0x3d:
                        case 0x3e:
                        case 0x3f:
                            goto code_r0x080083f0;
                        case 4:
                            uVar11 = sym.swr_master_read(arg2,0x1090);
                            __trace_bprintk(0x800841c,*0x800b000,"swr_mstr_interrupt",uVar11,*(arg2 + 0x1ee8));
                            sym.swrm_enable_slave_irq(arg2);
                            uVar8 = *(arg2 + 0x1ee8);
                            if (uVar11 != uVar8) {
                                if (*(arg2 + 0x1ee4) != -1) {
                                    uVar18 = 0;
                                    uVar20 = uVar11;
                                    do {
                                        if ((uVar20 & 3) != (uVar8 & 3)) {
                                            *(arg2 + 0x1ee8) = uVar11;
                                            uStack_84 = uVar18;
                                            if ((uVar20 & 3) == 1) goto code_r0x080087a8;
                                            if ((uVar20 & 3) != 0) goto code_r0x080081c0;
                                            goto code_r0x08008498;
                                        }
                                        uVar20 = uVar20 >> 2;
                                        uVar8 = uVar8 >> 2;
                                        uVar18 = uVar18 + 1;
                                    } while (*(arg2 + 0x1ee4) + 1U != uVar18);
                                }
                                *(arg2 + 0x1ee8) = uVar11;
code_r0x08008498:
                                if ((uStack_84 & 0xff) == 0) {
                                    uStack_84 = 0;
code_r0x080087a8:
                                    *(arg2 + 0x3970) = 1;
                                }
                            }
                            break;
                        case 8:
                            iVar7 = ___ratelimit(obj.swr_mstr_interrupt._rs.245,"swr_mstr_interrupt");
                            if (iVar7 != 0) {
                                _dev_err(*(arg2 + 0x1c70),"%s: SWR bus clsh detected\n","swr_mstr_interrupt");
                            }
                            uVar12 = *(arg2 + 0x1e90);
                            uVar13 = *(arg2 + 0x392c) & 0xfffffff7;
                            goto code_r0x080081a8;
                        case 0x10:
                            uVar10 = sym.swr_master_read(arg2,*(arg2 + 0x1e90) * 0x1000 + 0x4050);
                            iVar7 = ___ratelimit(obj.swr_mstr_interrupt._rs.247,"swr_mstr_interrupt");
                            if (iVar7 != 0) {
                                uVar14 = *(arg2 + 0x1c70);
                                pcVar17 = "%s: SWR read FIFO overflow fifo status %x\n";
code_r0x08008590:
                                _dev_err(uVar14,pcVar17,"swr_mstr_interrupt",uVar10);
                            }
                            break;
                        case 0x20:
                            uVar10 = sym.swr_master_read(arg2,*(arg2 + 0x1e90) * 0x1000 + 0x4050);
                            iVar7 = ___ratelimit(obj.swr_mstr_interrupt._rs.249,"swr_mstr_interrupt");
                            if (iVar7 != 0) {
                                uVar14 = *(arg2 + 0x1c70);
                                pcVar17 = "%s: SWR read FIFO underflow fifo status %x\n";
                                goto code_r0x08008590;
                            }
                            break;
                        case 0x40:
                            uVar10 = sym.swr_master_read(arg2,*(arg2 + 0x1e90) * 0x1000 + 0x4050);
                            iVar7 = ___ratelimit(obj.swr_mstr_interrupt._rs.251,"swr_mstr_interrupt");
                            if (iVar7 != 0) {
                                uVar14 = *(arg2 + 0x1c70);
                                pcVar17 = "%s: SWR write FIFO overflow fifo status %x\n";
                                goto code_r0x08008590;
                            }
                            break;
                        default:
                            if (uVar8 == 0x80) {
                                uVar10 = sym.swr_master_read(arg2,*(arg2 + 0x1e90) * 0x1000 + 0x4050);
                                iVar7 = ___ratelimit(obj.swr_mstr_interrupt._rs.253,"swr_mstr_interrupt");
                                if (iVar7 != 0) {
                                    _dev_err(*(arg2 + 0x1c70),"%s: SWR CMD error, fifo status 0x%x, flushing fifo\n",
                                             "swr_mstr_interrupt",uVar10);
                                }
                                uVar16 = 0x308;
                                goto code_r0x080083e4;
                            }
code_r0x080083f0:
                            iVar7 = ___ratelimit(obj.swr_mstr_interrupt._rs.261,"swr_mstr_interrupt");
                            if (iVar7 != 0) {
                                _dev_err(*(arg2 + 0x1c70),"%s: SWR unknown interrupt value: %d\n","swr_mstr_interrupt"
                                         ,uVar8);
                            }
                        }
                    }
                    else {
                        if (uVar8 < 0x1000) {
                            if (0x3ff < uVar8) {
                                if (uVar8 == 0x400) {
                                    complete(arg2 + 0x1cd0);
                                    goto code_r0x080081c0;
                                }
                                if (uVar8 != 0x800) goto code_r0x080083f0;
                                sym.swr_master_write(arg2,0x500,0);
                                iVar7 = 6;
                                goto code_r0x080082f0;
                            }
                            if (uVar8 == 0x100) {
                                iVar7 = ___ratelimit(obj.swr_mstr_interrupt._rs.255,"swr_mstr_interrupt");
                                if (iVar7 != 0) {
                                    _dev_err(*(arg2 + 0x1c70),"%s: SWR Port collision detected\n","swr_mstr_interrupt"
                                            );
                                }
                                uVar12 = *(arg2 + 0x1e90);
                                uVar13 = *(arg2 + 0x392c) & 0xfffffeff;
                            }
                            else {
                                if (uVar8 != 0x200) goto code_r0x080083f0;
                                uVar12 = *(arg2 + 0x1e90);
                                uVar13 = *(arg2 + 0x392c) & 0xfffffdff;
                            }
code_r0x080081a8:
                            uVar16 = uVar12 * 0x1000 + 0x4004;
                            *(arg2 + 0x392c) = uVar13;
                            goto code_r0x080081b8;
                        }
                        if (uVar8 < 0x4000) {
                            if (uVar8 != 0x1000) {
                                if (uVar8 != 0x2000) goto code_r0x080083f0;
                                if (0x1050001 < *(arg2 + 0x1ed8)) {
                                    iVar7 = -100;
                                    do {
                                        uVar13 = sym.swr_master_read(arg2,*(arg2 + 0x1e90) * 0x1000 + 0x4064);
                                        if ((uVar13 & 1) != 0) goto code_r0x080081c0;
                                        usleep_range_state(500,0x1fe,2);
                                        bVar6 = iVar7 != -1;
                                        iVar7 = iVar7 + 1;
                                    } while (bVar6);
                                    iVar7 = ___ratelimit(obj.swrm_check_link_status._rs,"swrm_check_link_status");
                                    if (iVar7 != 0) {
                                        _dev_err(*(arg2 + 0x1c70),"%s: link status not %s\n","swrm_check_link_status"
                                                 ,"connected");
                                    }
                                }
                            }
                        }
                        else if (uVar8 != 0x4000) {
                            if (uVar8 == 0x10000) {
                                if (*(arg2 + 0x3718) != 2) {
                                    iVar7 = ___ratelimit(obj.swr_mstr_interrupt._rs.257,"swr_mstr_interrupt");
                                    if (iVar7 != 0) {
                                        _dev_err(*(arg2 + 0x1c70),"%s: SWR wokeup during clock stop\n",
                                                 "swr_mstr_interrupt");
                                    }
                                    *(arg2 + 0x3978) = 1;
                                    sym.swrm_enable_slave_irq(arg2);
                                    *(arg2 + 0x3978) = 0;
                                }
                            }
                            else {
                                if (uVar8 != 0x80000) goto code_r0x080083f0;
                                uVar10 = sym.swr_master_read(arg2,*(arg2 + 0x1e90) * 0x1000 + 0x4050);
                                iVar7 = ___ratelimit(obj.swr_mstr_interrupt._rs.259,"swr_mstr_interrupt");
                                if (iVar7 != 0) {
                                    _dev_err(*(arg2 + 0x1c70),"%s: SWR CMD Ignored, fifo status 0x%x\n",
                                             "swr_mstr_interrupt",uVar10);
                                }
                                usleep_range_state(0xdac,0xdb1,2);
                            }
                        }
                    }
code_r0x080081c0:
                    uVar22 = uVar22 + 1;
                } while (uVar22 != 0x17);
                sym.swr_master_write(arg2,*(arg2 + 0x1e90) * 0x1000 + 0x4008,uStack_80);
                sym.swr_master_write(arg2,*(arg2 + 0x1e90) * 0x1000 + 0x4008,0);
                if (*(arg2 + 0x3970) != '\0') {
                    sym.swrm_enable_slave_irq(arg2);
                    *(arg2 + 0x3970) = 0;
                }
                uStack_80 = sym.swr_master_read(arg2,*(arg2 + 0x1e90) * 0x1000 + 0x4000);
                uVar12 = *(arg2 + 0x392c) & uStack_80;
                if ((uVar12 == 0) || ((*(*(arg2 + 0x1c70) + 0x20c) == 2 && ((*(*(arg2 + 0x1c70) + 0x200) & 7) == 0))))
                goto code_r0x0800887c;
                __trace_bprintk(0x8008160,*0x800b000,"swr_mstr_interrupt",uVar12);
            } while( true );
        }
        iVar7 = ___ratelimit(obj.swr_mstr_interrupt._rs.229,"swr_mstr_interrupt");
        if (iVar7 != 0) {
            _dev_err(arg2,"%s: swrm clk failed\n","swr_mstr_interrupt");
        }
        goto code_r0x08008898;
    }
code_r0x080088a8:
    sym.swrm_request_hw_vote(arg2,0,0);
code_r0x080088b8:
    mutex_unlock(iVar19);
    mutex_lock(arg2 + 0x1de0);
    iVar7 = *(arg2 + 0x3928) + -1;
    *(arg2 + 0x3928) = iVar7;
    if (iVar7 == 0) {
        if (*(arg2 + 0x3908) == 1) {
            *(arg2 + 0x3908) = 0;
        }
        cpu_latency_qos_update_request(arg2 + 0x38d8,0xffffffff);
        pm_relax(*(arg2 + 0x1c70));
    }
    mutex_unlock(arg2 + 0x1de0);
    uVar14 = __wake_up(arg2 + 0x3910,3,0,0);
    return uVar14;
code_r0x08008230:
    uVar8 = uVar8 >> 2;
    uVar11 = uVar11 + 1;
    if (*(arg2 + 0x1ee4) + 1U == uVar11) goto code_r0x08008240;
    goto code_r0x08008224;
code_r0x0800887c:
    mutex_lock(iVar19);
    sym.swrm_clk_request(arg2,0);
code_r0x08008898:
    sym.swrm_request_hw_vote(arg2,1,0);
    goto code_r0x080088a8;
    while (iVar7 != 0) {
code_r0x080082f0:
        iVar9 = sym.swr_master_read(arg2,0x504);
        iVar7 = iVar7 + -1;
        if (iVar9 == 0) break;
    }
    uVar16 = 0x500;
code_r0x080083e4:
    uVar13 = 1;
code_r0x080081b8:
    uVar14 = sym.swr_master_write(arg2,uVar16,uVar13);
    return uVar14;
}


// ===== sym.swrm_master_init @ 0x080089ec (size 832) =====

void sym.swrm_master_init(int64_t arg1)

{
    int64_t *piVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    int iVar5;
    uint uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar9;
    int64_t iVar10;
    ulong uVar11;
    uint32_t *puVar12;
    ulong unaff_x30;
    int aiStack_b8 [4];
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    uint32_t auStack_88 [12];
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
    auStack_88[8] = 0;
    auStack_88[9] = 0;
    auStack_88[10] = 0;
    auStack_88[0xb] = 0;
    auStack_88[4] = 0;
    auStack_88[5] = 0;
    auStack_88[6] = 0;
    auStack_88[7] = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uVar6 = 3;
    if (*(arg1 + 0x1e8c) == 1) {
        uVar6 = 1;
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    if ((0x105ffff < *(arg1 + 0x1ed8)) && (*(arg1 + 0x1e80) != 0)) {
        uVar4 = sym.readl(*(arg1 + 0x1e80));
        sym.writel(uVar4 & 0xfffffffd,*(arg1 + 0x1e80));
        usleep_range_state(500,0x1f9,2);
        sym.readl(*(arg1 + 0x1e80));
    }
    if (arg1 == 0) {
        aiStack_b8[0] = 8;
    }
    else {
        iVar5 = *(arg1 + 0x1ee0) << 1;
        aiStack_b8[0] = ((iVar5 * 0x14f8b589 >> 0x2f) - (iVar5 >> 0x1f) & 0xff) * 0x10000 + -0xfff8;
    }
    aiStack_b8[1] = 1;
    auStack_88[0] = 0x101c;
    auStack_88[1] = 0x500;
    aiStack_b8[2] = sym.swr_master_read(arg1,0x1048);
    aiStack_b8[2] = aiStack_b8[2] | 0x3e0000;
    auStack_88[2] = 0x1048;
    auStack_88[3] = 0x314;
    if (*(arg1 + 0x1ed8) < 0x1070000) {
        iVar5 = *(arg1 + 0x1e90);
        iVar8 = 4;
    }
    else {
        iVar5 = *(arg1 + 0x1e90);
        iVar8 = 5;
        auStack_88[4] = 0x18;
        uStack_a8 = CONCAT44(uStack_a8._4_4_,iVar5);
    }
    iVar5 = iVar5 * 0x1000;
    uVar4 = iVar8;
    auStack_88[iVar8] = iVar5 + 0x4060;
    aiStack_b8[iVar8] = 1;
    aiStack_b8[uVar4 + 1] = 2;
    auStack_88[uVar4 | 2] = iVar5 + 0x4008;
    aiStack_b8[3] = uVar6;
    aiStack_b8[uVar4 | 2] = -1;
    auStack_88[uVar4 + 1] = 4;
    uVar9 = uVar4 + 5;
    auStack_88[uVar4 + 3] = iVar5 + 0x4004;
    *(arg1 + 0x392c) = 0x1dfdfd;
    aiStack_b8[uVar4 + 3] = 0x1dfdfd;
    auStack_88[uVar4 + 4] = 4;
    aiStack_b8[uVar4 + 4] = 3;
    sym.swr_master_bulk_write(arg1,auStack_88,aiStack_b8,uVar9);
    iVar5 = *(arg1 + 0x1ed8);
    if (iVar5 < 0x1050002) {
code_r0x08008cc0:
        if (0x1050000 < iVar5) {
            uVar4 = sym.swr_master_read(arg1,0x314);
            sym.swr_master_write(arg1,0x314,uVar4 | 0x80000000);
        }
        uVar11 = 0;
    }
    else {
        iVar5 = -100;
        do {
            uVar7 = sym.swr_master_read(arg1,*(arg1 + 0x1e90) * 0x1000 + 0x4064);
            if ((uVar7 & 1) != 0) {
                iVar5 = *(arg1 + 0x1ed8);
                goto code_r0x08008cc0;
            }
            usleep_range_state(500,0x1fe,2);
            bVar3 = iVar5 != -1;
            iVar5 = iVar5 + 1;
        } while (bVar3);
        iVar5 = ___ratelimit(obj.swrm_check_link_status._rs,"swrm_check_link_status");
        if (iVar5 != 0) {
            _dev_err(*(arg1 + 0x1c70),"%s: link status not %s\n","swrm_check_link_status","connected");
        }
        _dev_err(*(arg1 + 0x1c70),"%s: swr link failed to connect\n","swrm_master_init");
        puVar12 = auStack_88;
        do {
            usleep_range_state(0x32,0x37,2);
            uVar4 = *puVar12;
            uVar11 = *(arg1 + 0x1c70);
            uVar6 = sym.swr_master_read(arg1,uVar4);
            _dev_err(uVar11,"%s:reg:0x%x val:0x%x\n","swrm_master_init",uVar4,uVar6);
            uVar9 = uVar9 - 1;
            uVar11 = 0xffffffea;
            puVar12 = puVar12 + 1;
        } while (uVar9 != 0);
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_58) {
        iVar8 = __stack_chk_fail(uVar11);
        *extraout_x18 = sym.swrm_wakeup_work;
        if ((iVar8 + -0x38a0 == 0) || (piVar1 = iVar8 + -0x1c30, *piVar1 == 0)) {
            _printk(0x80027d6,"swrm_wakeup_work");
        }
        else {
            __trace_bprintk(0x8008d68,*0x800b000,"swrm_wakeup_work");
            mutex_lock(iVar8 + -0x1b50);
            cVar2 = *(iVar8 + 0x34);
            mutex_unlock(iVar8 + -0x1b50);
            if (cVar2 != '\0') {
                uVar9 = sym.swrm_lock_sleep(iVar8 + -0x38a0);
                if ((uVar9 & 1) == 0) {
                    _dev_err(*piVar1,"%s Failed to hold suspend\n","swrm_wakeup_work");
                }
                else {
                    __pm_runtime_resume(*piVar1,4);
                    iVar10 = *piVar1;
                    uVar11 = ktime_get_mono_fast_ns();
                    *(iVar10 + 0x218) = uVar11;
                    __pm_runtime_suspend(*piVar1,0xd);
                    mutex_lock(iVar8 + -0x1ac0);
                    iVar5 = *(iVar8 + 0x88) + -1;
                    *(iVar8 + 0x88) = iVar5;
                    if (iVar5 == 0) {
                        if (*(iVar8 + 0x68) == 1) {
                            *(iVar8 + 0x68) = 0;
                        }
                        cpu_latency_qos_update_request(iVar8 + 0x38,0xffffffff);
                        pm_relax(*piVar1);
                    }
                    mutex_unlock(iVar8 + -0x1ac0);
                    __wake_up(iVar8 + 0x70,3,0,0);
                }
            }
            __trace_bprintk(0x8008e40,*0x800b000,"swrm_wakeup_work");
            pm_relax(*piVar1);
        }
        return;
    }
    return;
}


// ===== sym.swrm_wakeup_work @ 0x08008d2c (size 392) =====

void sym.swrm_wakeup_work(int64_t arg1)

{
    int64_t *piVar1;
    char cVar2;
    int iVar3;
    uint64_t uVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 + -0x38a0 != 0) && (piVar1 = arg1 + -0x1c30, *piVar1 != 0)) {
        __trace_bprintk(0x8008d68,*0x800b000,"swrm_wakeup_work");
        mutex_lock(arg1 + -0x1b50);
        cVar2 = *(arg1 + 0x34);
        mutex_unlock(arg1 + -0x1b50);
        if (cVar2 != '\0') {
            uVar4 = sym.swrm_lock_sleep(arg1 + -0x38a0);
            if ((uVar4 & 1) != 0) {
                __pm_runtime_resume(*piVar1,4);
                iVar6 = *piVar1;
                uVar5 = ktime_get_mono_fast_ns();
                *(iVar6 + 0x218) = uVar5;
                __pm_runtime_suspend(*piVar1,0xd);
                mutex_lock(arg1 + -0x1ac0);
                iVar3 = *(arg1 + 0x88) + -1;
                *(arg1 + 0x88) = iVar3;
                if (iVar3 == 0) {
                    if (*(arg1 + 0x68) == 1) {
                        *(arg1 + 0x68) = 0;
                    }
                    cpu_latency_qos_update_request(arg1 + 0x38,0xffffffff);
                    pm_relax(*piVar1);
                }
                mutex_unlock(arg1 + -0x1ac0);
                __wake_up(arg1 + 0x70,3,0,0);
                return;
            }
            _dev_err(*piVar1,"%s Failed to hold suspend\n","swrm_wakeup_work");
        }
        __trace_bprintk(0x8008e40,*0x800b000,"swrm_wakeup_work");
        pm_relax(*piVar1);
        return;
    }
    _printk(0x80027d6,"swrm_wakeup_work");
    return;
}


// ===== sym.swrm_notify_work_fn @ 0x08008eb4 (size 116) =====

void sym.swrm_notify_work_fn(uint32_t arg1)

{
    int iVar1;
    int64_t arg1_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0x3780) || (arg1_00 = *(arg1 - 0x60), arg1_00 == 0)) {
        iVar1 = ___ratelimit(obj.swrm_notify_work_fn._rs,"swrm_notify_work_fn");
        if (iVar1 != 0) {
            _printk(0x8001c86,"swrm_notify_work_fn");
        }
    }
    else {
        sym.swrm_wcd_notify(arg1_00,1,0);
    }
    return;
}


// ===== sym.swrm_event_notify @ 0x08008f28 (size 292) =====

ulong sym.swrm_event_notify(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0x3768) || (*(arg1 + -0x1af8) == 0)) {
        iVar1 = ___ratelimit(obj.swrm_event_notify._rs,"swrm_event_notify");
        if (iVar1 != 0) {
            _printk(0x8001ca2,"swrm_event_notify");
        }
        return 0xffffffea;
    }
    if (arg2 == 4) {
        if ((*(arg1 + 0x168) == 0) || (*(arg1 + 0x16d) != '\0')) {
            return 0;
        }
        *(arg1 + 0x16d) = '\x01';
        pm_stay_awake();
        arg1 = arg1 + 0x138;
    }
    else {
        if (arg2 != 1) {
            iVar1 = ___ratelimit(obj.swrm_event_notify._rs.288,"swrm_event_notify");
            if (iVar1 == 0) {
                return 0xffffffea;
            }
            _dev_err(*(arg1 + -0x1af8),"%s: invalid event type: %lu\n","swrm_event_notify",arg2);
            return 0xffffffea;
        }
        arg1 = arg1 + 0x18;
    }
    queue_work_on(0x20,_of_get_named_gpio_flags,arg1);
    return 0;
}


// ===== sym.swrm_runtime_resume @ 0x0800904c (size 1592) =====

ulong sym.swrm_runtime_resume(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint8_t uVar3;
    uint uVar4;
    uint8_t uVar5;
    bool bVar6;
    int iVar7;
    int iVar8;
    uint32_t uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    ulong uVar12;
    ulong *in_x18;
    int64_t arg1_00;
    int64_t *piVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x98);
    __trace_bprintk(0x8009094,*0x800b000,"swrm_runtime_resume",*(arg1_00 + 0x3718));
    iVar1 = arg1_00 + 0x1e40;
    mutex_lock(iVar1);
    iVar2 = arg1_00 + 0x1db0;
    mutex_lock(iVar2);
    iVar7 = sym.swrm_request_hw_vote(arg1_00,0,1);
    if (iVar7 != 0) {
        iVar7 = ___ratelimit(obj.swrm_runtime_resume._rs,"swrm_runtime_resume");
        if (iVar7 != 0) {
            _dev_err(arg1,"%s:lpass core hw enable failed\n","swrm_runtime_resume");
        }
        pm_runtime_set_autosuspend_delay(arg1,1);
        if (*(arg1_00 + 0x38d6) != '\0') {
            *(arg1_00 + 0x38d6) = 0;
        }
code_r0x08009120:
        mutex_unlock(iVar2);
        mutex_unlock(iVar1);
        return 0;
    }
    iVar7 = sym.swrm_request_hw_vote(arg1_00,1,1);
    if ((iVar7 != 0) && (iVar8 = ___ratelimit(obj.swrm_runtime_resume._rs.184,"swrm_runtime_resume"), iVar8 != 0)) {
        _dev_err(arg1,"%s:lpass audio hw enable failed\n","swrm_runtime_resume");
    }
    if ((*(arg1_00 + 0x3718) == 3) || ((*(arg1_00 + 0x3718) == 4 && (*(arg1_00 + 0x38d4) != '\0')))) {
        if (*(arg1_00 + 0x3898) != 0) {
            if (0 < *(arg1_00 + 0x1ed4)) {
                iVar10 = irq_get_irq_data();
                if (iVar10 == 0) {
                    iVar7 = ___ratelimit(obj.swrm_runtime_resume._rs.185,"swrm_runtime_resume");
                    if (iVar7 != 0) {
                        _printk(0x8001ff7,"swrm_runtime_resume");
                    }
                    goto code_r0x08009120;
                }
                mutex_lock(arg1_00 + 0x1e10);
                iVar10 = irq_get_irq_data(*(arg1_00 + 0x1ed4));
                if ((*(*(iVar10 + 0x10) + 2) & 1) == 0) {
                    disable_irq_nosync(*(arg1_00 + 0x1ed4));
                }
                mutex_unlock(arg1_00 + 0x1e10);
            }
            if ((*(arg1_00 + 0x38d0) != 0) &&
               (iVar8 = ___ratelimit(obj.swrm_runtime_resume._rs.186,"swrm_runtime_resume"), iVar8 != 0)) {
                _dev_err(arg1,"%s:notifications disabled\n","swrm_runtime_resume");
            }
        }
        bVar6 = true;
        iVar8 = sym.swrm_clk_request(arg1_00,1);
        if (iVar8 == 0) {
            if ((*(arg1_00 + 0x3898) == 0) || (*(arg1_00 + 0x3718) == 4)) {
                for (piVar13 = *(arg1_00 + 0x3d8); piVar13 != arg1_00 + 0x3d8; piVar13 = *piVar13) {
                    iVar8 = swr_device_up(piVar13 + -6);
                    if (iVar8 != 0) {
                        if (iVar8 != -0x13) {
                            iVar8 = ___ratelimit(obj.swrm_runtime_resume._rs.191,"swrm_runtime_resume");
                            if (iVar8 != 0) {
                                _dev_err(arg1,"%s: failed to wakeup swr dev %d\n","swrm_runtime_resume",
                                         *(piVar13 + 2));
                            }
                            sym.swrm_clk_request(arg1_00,0);
                            bVar6 = false;
                            goto code_r0x080094f8;
                        }
                        __trace_bprintk(0x8009268,*0x800b000,"swrm_runtime_resume");
                    }
                }
                sym.swr_master_write(arg1_00,8,1);
                sym.swr_master_write(arg1_00,8,1);
                sym.swr_master_write(arg1_00,0x1044,1);
                sym.swrm_master_init(arg1_00);
                usleep_range_state(100,0x69,2);
                if (0x1050001 < *(arg1_00 + 0x1ed8)) {
                    iVar8 = -100;
                    do {
                        uVar11 = sym.swr_master_read(arg1_00,*(arg1_00 + 0x1e90) * 0x1000 + 0x4064);
                        if ((uVar11 & 1) != 0) goto code_r0x0800938c;
                        usleep_range_state(500,0x1fe,2);
                        bVar6 = iVar8 != -1;
                        iVar8 = iVar8 + 1;
                    } while (bVar6);
                    iVar8 = ___ratelimit(obj.swrm_check_link_status._rs,"swrm_check_link_status");
                    if (iVar8 != 0) {
                        _dev_err(*(arg1_00 + 0x1c70),"%s: link status not %s\n","swrm_check_link_status","connected")
                        ;
                    }
                }
code_r0x0800938c:
                uVar5 = *(arg1_00 + 0x1e8a);
                uVar3 = 0;
                if (uVar5 != 0xe) {
                    uVar3 = uVar5 + 1 & 0xf;
                }
                *(arg1_00 + 0x1e8a) = uVar3;
                sym.swrm_cmd_fifo_wr_cmd(arg1_00,4,0xf,uVar5);
                if (*(arg1_00 + 0x3718) == 4) {
                    mutex_unlock(iVar2);
                    sym.swrm_cmd_fifo_wr_cmd(arg1_00,8,0xf,0xf);
                    mutex_lock(iVar2);
                }
            }
            else {
                if (*(arg1_00 + 0x1e80) != 0) {
                    uVar9 = sym.readl(*(arg1_00 + 0x1e80));
                    sym.writel(uVar9 & 0xfffffffd,*(arg1_00 + 0x1e80));
                }
                sym.swr_master_write(arg1_00,*(arg1_00 + 0x1e90) * 0x1000 + 0x4060,1);
                sym.swr_master_write(arg1_00,*(arg1_00 + 0x1e90) * 0x1000 + 0x4008,8);
                uVar9 = *(arg1_00 + 0x392c) | 8;
                *(arg1_00 + 0x392c) = uVar9;
                sym.swr_master_write(arg1_00,*(arg1_00 + 0x1e90) * 0x1000 + 0x4004,uVar9);
                usleep_range_state(100,0x69,2);
                if (0x1050001 < *(arg1_00 + 0x1ed8)) {
                    iVar8 = -100;
                    do {
                        uVar11 = sym.swr_master_read(arg1_00,*(arg1_00 + 0x1e90) * 0x1000 + 0x4064);
                        if ((uVar11 & 1) != 0) goto code_r0x080094e8;
                        usleep_range_state(500,0x1fe,2);
                        bVar6 = iVar8 != -1;
                        iVar8 = iVar8 + 1;
                    } while (bVar6);
                    iVar8 = ___ratelimit(obj.swrm_check_link_status._rs,"swrm_check_link_status");
                    if (iVar8 != 0) {
                        _dev_err(*(arg1_00 + 0x1c70),"%s: link status not %s\n","swrm_check_link_status","connected")
                        ;
                    }
                }
            }
code_r0x080094e8:
            bVar6 = false;
            *(arg1_00 + 0x3718) = 2;
        }
    }
    else {
        bVar6 = false;
    }
code_r0x080094f8:
    if ((*(arg1_00 + 0x3974) != 0) && (iVar7 == 0)) {
        sym.swrm_request_hw_vote(arg1_00,1,0);
    }
    sym.swrm_request_hw_vote(arg1_00,0,0);
    uVar4 = _segment.ehdr;
    if (bVar6 || iVar7 != 0) {
        uVar4 = 1;
    }
    pm_runtime_set_autosuspend_delay(arg1,uVar4);
    if (*(arg1_00 + 0x38d6) != '\0') {
        *(arg1_00 + 0x38d6) = '\0';
    }
    mutex_unlock(iVar2);
    uVar12 = mutex_unlock(iVar1);
    return uVar12;
}


// ===== sym.swrm_cmd_fifo_rd_cmd @ 0x08009684 (size 656) =====

void sym.swrm_cmd_fifo_rd_cmd(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t *puVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int iVar7;
    uint32_t in_w4;
    int in_w5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + 0x1d20);
    puVar1 = arg1 + 0x1e88;
    uVar4 = *puVar1;
    if (uVar4 == 0xf) {
        uVar6 = 0xf0000;
    }
    else {
        uVar3 = 0;
        if (uVar4 < 0xe) {
            uVar3 = uVar4 + 1;
        }
        uVar6 = uVar3 << 0x10;
        *puVar1 = uVar3;
    }
    uVar2 = arg3 & 0xff;
    uVar6 = in_w4 & 0xffff | in_w5 << 0x18 | uVar2 << 0x14 | uVar6;
    if (*(arg1 + 0x1ea0) == 0) {
        sym.swrm_wait_for_fifo_avail(arg1,0);
        usleep_range_state(100,0x69,2);
        sym.swr_master_write(arg1,*(arg1 + 0x1e90) * 0x1000 + 0x4024,uVar6);
        usleep_range_state(0xfa,0xff,2);
    }
    else {
        sym.swr_master_write(arg1,*(arg1 + 0x1e90) * 0x1000 + 0x4024,uVar6);
    }
    sym.swrm_wait_for_fifo_avail(arg1,1);
    uVar5 = sym.swr_master_read(arg1,*(arg1 + 0x1e90) * 0x1000 + 0x4040);
    *arg2 = uVar5;
    if ((uVar5 >> 8 & 0xf) != *puVar1) {
        usleep_range_state(500,0x1f9,2);
        uVar5 = sym.swr_master_read(arg1,*(arg1 + 0x1e90) * 0x1000 + 0x4040);
        *arg2 = uVar5;
        if ((uVar5 >> 8 & 0xf) != *puVar1) {
            usleep_range_state(500,0x1f9,2);
            uVar5 = sym.swr_master_read(arg1,*(arg1 + 0x1e90) * 0x1000 + 0x4040);
            *arg2 = uVar5;
            if ((uVar5 >> 8 & 0xf) != *puVar1) {
                usleep_range_state(500,0x1f9,2);
                sym.swr_master_write(arg1,*(arg1 + 0x1e90) * 0x1000 + 0x4024,uVar6);
                uVar6 = sym.swr_master_read(arg1,*(arg1 + 0x1e90) * 0x1000 + 0x4040);
                *arg2 = uVar6;
                if ((uVar6 >> 8 & 0xf) != *puVar1) {
                    iVar7 = ___ratelimit(obj.swrm_cmd_fifo_rd_cmd._rs,"swrm_cmd_fifo_rd_cmd");
                    if (iVar7 != 0) {
                        _dev_err(*(arg1 + 0x1c70),
                                 "%s: reg: 0x%x, cmd_id: 0x%x, \t\t\t\trcmd_id: 0x%x, dev_num: 0x%x, cmd_data: 0x%x\n",
                                 "swrm_cmd_fifo_rd_cmd",in_w4 & 0xffff,arg4 & 0xff,*puVar1,uVar2,*arg2);
                    }
                    iVar7 = ___ratelimit(obj.swrm_cmd_fifo_rd_cmd._rs.198,"swrm_cmd_fifo_rd_cmd");
                    if (iVar7 != 0) {
                        _dev_err(*(arg1 + 0x1c70),"%s: failed to read fifo\n","swrm_cmd_fifo_rd_cmd");
                    }
                }
            }
        }
    }
    mutex_unlock(arg1 + 0x1d20);
    return;
}


// ===== sym.swr_master_bulk_write @ 0x08009914 (size 284) =====

void sym.swr_master_bulk_write(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    ulong *in_x18;
    code *pcVar2;
    int iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(arg1 + 0x1eb0);
    if (pcVar2 == NULL) {
        mutex_lock(arg1 + 0x1d20);
        if (arg4 != 0) {
            iVar3 = 0;
            do {
                usleep_range_state(0x32,0x37,2);
                uVar1 = *(arg2 + iVar3 * 4);
                if (uVar1 == *(arg1 + 0x1e90) * 0x1000 + 0x4020U) {
                    sym.swrm_wait_for_fifo_avail(arg1,0);
                    uVar1 = *(arg2 + iVar3 * 4);
                }
                sym.swr_master_write(arg1,uVar1,*(arg3 + iVar3 * 4));
                iVar3 = iVar3 + 1;
            } while (arg4 != iVar3);
        }
        usleep_range_state(100,0x6e,2);
        mutex_unlock(arg1 + 0x1d20);
    }
    else {
        __cfi_slowpath_diag(0x90060173f2a914ff,pcVar2,0x80012f0);
        (*pcVar2)(*(arg1 + 0x1e98),arg2,arg3,arg4 & 0xffffffff);
    }
    return;
}


// ===== sym.swrm_get_master_port @ 0x08009a30 (size 392) =====

ulong sym.swrm_get_master_port(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    bool bVar4;
    int iVar5;
    uint8_t *puVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *arg2 = 0;
    uVar9 = *(arg1 + 0x37b0);
    if (uVar9 != 0) {
        uVar7 = 0;
        bVar4 = false;
        uVar2 = arg4 & 0xff;
        puVar6 = arg1 + 0x37cf;
        iVar8 = 1;
        do {
            if (uVar7 == 0xd) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x8009bb8);
                (*pcVar3)();
            }
            if (puVar6[-0xe] == uVar2) {
                iVar8 = 0;
joined_r0x08009b14:
                if (!bVar4) {
                    *arg2 = uVar7;
                    *arg3 = puVar6[iVar8 * 2 + -0xd];
                    return 0;
                }
                break;
            }
            if (puVar6[-0xc] == uVar2) goto joined_r0x08009b14;
            if (puVar6[-10] == uVar2) {
                iVar8 = 2;
                goto joined_r0x08009b14;
            }
            if (puVar6[-8] == uVar2) {
                iVar8 = 3;
                goto joined_r0x08009b14;
            }
            if (puVar6[-6] == uVar2) {
                iVar8 = 4;
                goto joined_r0x08009b14;
            }
            if (puVar6[-4] == uVar2) {
                iVar8 = 5;
                goto joined_r0x08009b14;
            }
            if (puVar6[-2] == uVar2) {
                iVar8 = 6;
                goto joined_r0x08009b14;
            }
            if (*puVar6 == uVar2) {
                iVar8 = 7;
                goto joined_r0x08009b14;
            }
            uVar1 = uVar7 + 1;
            uVar7 = uVar7 + 1;
            bVar4 = uVar9 <= uVar1;
            puVar6 = puVar6 + 0x10;
        } while (uVar9 != uVar7);
    }
    iVar5 = ___ratelimit(obj.swrm_get_master_port._rs,"swrm_get_master_port");
    if (iVar5 != 0) {
        _dev_err(*(arg1 + 0x1c70),"%s: port type not supported by master\n","swrm_get_master_port");
    }
    return 0xffffffea;
}


// ===== sym.swrm_cleanup_disabled_port_reqs @ 0x08009bb8 (size 320) =====

void sym.swrm_cleanup_disabled_port_reqs(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    char cVar3;
    int64_t *piVar4;
    int iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    int64_t iVar8;
    int64_t *piVar9;
    int64_t *piVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (*(arg1 + 0x98) == 0)) {
        iVar5 = ___ratelimit(obj.swrm_cleanup_disabled_port_reqs._rs,"swrm_cleanup_disabled_port_reqs");
        if (iVar5 != 0) {
            _printk(0x8001add,"swrm_cleanup_disabled_port_reqs");
        }
    }
    else {
        iVar8 = 0;
        iVar1 = *(arg1 + 0x98) + 0x1ef0;
        do {
            piVar9 = iVar1 + iVar8 * 0x28;
            piVar10 = *piVar9;
            while (piVar4 = piVar10, piVar9 != piVar4) {
                cVar3 = piVar4[3];
                piVar10 = *piVar4;
                if ((*(piVar4 + 0x17) != cVar3) && (*(piVar4 + 0x17) = cVar3, cVar3 == '\0')) {
                    uVar6 = __list_del_entry_valid(piVar4);
                    if ((uVar6 & 1) != 0) {
                        iVar7 = *piVar4;
                        piVar2 = piVar4[1];
                        *(iVar7 + 8) = piVar2;
                        *piVar2 = iVar7;
                    }
                    *piVar4 = -0x2152ffffffffff00;
                    piVar4[1] = -0x2152fffffffffede;
                    kfree(piVar4 + -1);
                }
            }
            iVar7 = iVar1 + iVar8 * 0x28;
            cVar3 = *(iVar7 + 0x12);
            *(iVar7 + 0x11) = cVar3;
            if (cVar3 == '\0') {
                *(iVar1 + iVar8 * 0x28 + 0x10) = 0;
                *(arg1 + 0x1c68) = *(arg1 + 0x1c68) & (iVar8 ^ 0xffff);
            }
            iVar8 = iVar8 + 1;
        } while (iVar8 != 0xd);
    }
    return;
}


// ===== sym.swrm_disable_ports @ 0x08009cf8 (size 464) =====

void sym.swrm_disable_ports(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    uint8_t uVar5;
    uint8_t uVar6;
    int iVar7;
    ulong *in_x18;
    int64_t arg1_00;
    ulong *puVar8;
    int64_t iVar9;
    ulong *puVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (arg1_00 = *(arg1 + 0x98), arg1_00 == 0)) {
        iVar7 = ___ratelimit(obj.swrm_disable_ports._rs,"swrm_disable_ports");
        if (iVar7 != 0) {
            _printk(0x8001add,"swrm_disable_ports");
        }
    }
    else {
        iVar2 = arg1_00 + 0x1ef0;
        iVar11 = 0;
        do {
            puVar10 = iVar2 + iVar11 * 0x28;
            if (*(puVar10 + 2) != '\0') {
                for (puVar8 = *puVar10; puVar10 != puVar8; puVar8 = *puVar8) {
                    uVar4 = *(puVar8 + 3);
                    if (uVar4 != *(puVar8 + 0x17)) {
                        uVar5 = *(arg1_00 + 0x1e8a);
                        uVar6 = *(puVar8 + -1);
                        uVar3 = 0;
                        if (uVar5 != 0xe) {
                            uVar3 = uVar5 + 1 & 0xf;
                        }
                        *(arg1_00 + 0x1e8a) = uVar3;
                        sym.swrm_cmd_fifo_wr_cmd(arg1_00,uVar4,uVar6,uVar5);
                    }
                }
                iVar9 = iVar2 + iVar11 * 0x28;
                uVar1 = iVar11 + 1;
                sym.swr_master_write
                          (arg1_00,(arg2 & 0xff) * 0x40 + 0x1024 + uVar1 * 0x100,
                           *(iVar9 + 0x12) << 0x18 | *(iVar9 + 0x14) << 0x10 | *(iVar9 + 0x13) << 8 | *(iVar9 + 0x16));
                if (*(iVar9 + 0x12) == '\0') {
                    if ((uVar1 & 0xff) - 0xe < 0xfffffff3) {
                        iVar7 = ___ratelimit(obj.swrm_pcm_port_config._rs,"swrm_pcm_port_config");
                        if (iVar7 != 0) {
                            _dev_err(*(arg1_00 + 0x1c70),"%s: invalid port: %d\n","swrm_pcm_port_config",
                                     iVar11 + 1U & 0xffffffff);
                        }
                    }
                    else if (*(iVar2 + iVar11 * 0x28 + 0x1f) != '\0') {
                        sym.swr_master_write(arg1_00,uVar1 * 0x100 + 0x1054,0);
                    }
                }
            }
            iVar11 = iVar11 + 1;
        } while (iVar11 != 0xd);
    }
    return;
}


// ===== sym.swrm_copy_data_port_config @ 0x08009ec8 (size 2672) =====

uint32_t * sym.swrm_copy_data_port_config(int64_t arg1,int64_t arg2)

{
    uint16_t *puVar1;
    uint8_t *puVar2;
    uint8_t *puVar3;
    uint8_t *puVar4;
    uint8_t *puVar5;
    uint8_t *puVar6;
    uint8_t *puVar7;
    uint8_t *puVar8;
    char cVar9;
    uint8_t uVar10;
    uint8_t uVar11;
    uint32_t uVar12;
    int iVar13;
    code *pcVar14;
    uint16_t uVar15;
    uint32_t uVar16;
    int iVar17;
    uint uVar18;
    uint32_t *puVar19;
    ulong uVar20;
    uint32_t *puVar21;
    uint32_t uVar22;
    int64_t *piVar23;
    uint32_t *puVar24;
    char *arg3;
    uint32_t *in_x3;
    uint32_t uVar25;
    uint32_t uVar26;
    uint8_t uVar27;
    int64_t iVar28;
    int64_t iVar29;
    uint64_t uVar30;
    uint64_t uVar31;
    uint8_t *puVar32;
    uint8_t uVar33;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t iVar34;
    uint32_t *unaff_x20;
    uint32_t *unaff_x21;
    uint32_t *puVar35;
    uint32_t *puVar36;
    uint32_t *puVar37;
    uint32_t *puVar38;
    uint64_t unaff_x23;
    int64_t *piVar39;
    ulong unaff_x30;
    uchar auVar40 [16];
    char acStack_550 [8];
    uchar *puStack_548;
    uint64_t auStack_540 [2];
    uint uStack_530;
    int64_t iStack_528;
    uchar ***pppuStack_520;
    code *pcStack_518;
    uint32_t *puStack_510;
    uint32_t *puStack_508;
    uint32_t *puStack_500;
    uint32_t *puStack_4f8;
    uint32_t auStack_4f0 [2];
    int64_t iStack_4e8;
    uchar **ppuStack_4e0;
    code *pcStack_4d8;
    uint32_t *puStack_4d0;
    uint32_t *puStack_4c0;
    uint32_t *puStack_4b8;
    uint uStack_4ac;
    int64_t iStack_4a8;
    uchar *puStack_4a0;
    code *pcStack_498;
    uint64_t uStack_490;
    uint32_t *puStack_480;
    uint32_t *puStack_478;
    uint32_t *puStack_470;
    int64_t iStack_468;
    int iStack_454;
    int64_t iStack_450;
    uint32_t *puStack_448;
    uint8_t auStack_440 [16];
    uint32_t auStack_430 [120];
    int aiStack_250 [120];
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar34 = sp_el0;
    puVar38 = arg2 & 0xffffffff;
    iStack_70 = *(iVar34 + 0x5e0);
    memset(aiStack_250,0,0x1e0);
    arg3 = 0x1e0;
    memset(auStack_430,0);
    iVar34 = 0;
    if ((arg1 == 0) || (iVar34 = *(arg1 + 0x98), iVar34 == 0)) {
        puVar36 = ___ratelimit(obj.swrm_copy_data_port_config._rs,"swrm_copy_data_port_config");
        if (puVar36 != 0) {
            puVar36 = _printk(0x8001add,"swrm_copy_data_port_config");
        }
    }
    else {
        iVar29 = iVar34 + 0x1ef0;
        uVar16 = arg2 & 0xff;
        unaff_x21 = NULL;
        uVar12 = uVar16 * 0x10;
        puVar38 = uVar12;
        puVar8 = iVar34 + 0x1e8a;
        iStack_454 = uVar16 << 6;
        auStack_440[0] = 0xff;
        auStack_440[1] = 0xff;
        auStack_440[2] = 0xff;
        auStack_440[3] = 0xff;
        auStack_440[4] = 0xff;
        auStack_440[5] = 0xff;
        auStack_440[6] = 0xff;
        auStack_440[7] = 0xff;
        auStack_440[8] = 0xff;
        auStack_440[9] = 0xff;
        auStack_440[10] = 0xff;
        unaff_x20 = NULL;
        iStack_450 = iVar29;
        do {
            piVar39 = iVar29 + unaff_x20 * 0x28;
            puVar36 = unaff_x20 + 1;
            if (piVar39[2] != '\0') {
                puStack_448 = puVar36;
                if (*(iVar29 + unaff_x20 * 0x28 + 0x1f) != '\0') {
                    sym.swr_master_write(iVar34,unaff_x20 * 0x100 + 0x1154,3);
                    iVar29 = iStack_450;
                }
                iVar29 = iVar29 + unaff_x20 * 0x28;
                piVar23 = *piVar39;
                puVar1 = iVar29 + 0x16;
                puVar32 = iVar29 + 0x13;
                puVar2 = iVar29 + 0x18;
                puVar3 = iVar29 + 0x19;
                puVar4 = iVar29 + 0x1c;
                puVar5 = iVar29 + 0x1b;
                puVar6 = iVar29 + 0x1a;
                puVar7 = iVar29 + 0x1d;
                if (piVar39 == piVar23) {
                    uVar33 = 0;
                    uVar15 = 0xffff;
                }
                else {
                    arg3 = NULL;
                    uVar33 = 0;
                    uVar16 = 0xffff;
                    puVar36 = unaff_x21;
                    do {
                        uVar11 = *(piVar23 + -1);
                        if (uVar11 != 0) {
                            in_x3 = *(piVar23 + -6);
                            uVar22 = *(piVar23 + -6);
                            if (*(iVar34 + 0x1e8c) == 3) {
                                iVar17 = *(iVar34 + 0x1ee0);
                                if (iVar17 == 600000) {
                                    iVar28 = 3;
                                }
                                else if (iVar17 == 4800000) {
                                    iVar28 = 1;
                                }
                                else if (iVar17 == 1200000) {
                                    iVar28 = 2;
                                }
                                else {
                                    iVar28 = 0;
                                }
                                uVar25 = (uVar22 + uVar11 * 0xe) - 0xe;
                                unaff_x21 = uVar25;
                                if (uVar25 < 0x9a) {
                                    uVar26 = 0;
                                    if (*(piVar23 + 0x1c) != 0) {
                                        uVar26 = (iVar17 << 1) / *(piVar23 + 0x1c);
                                    }
                                    unaff_x23 = 0xffffffff;
                                    iVar28 = iVar34 + iVar28 * 0x4d0 + uVar25 * 8;
                                    uVar26 = uVar26 - 1;
                                    *(piVar23 + -2) = uVar26;
                                    uVar25 = *(iVar28 + 0x397c);
                                    *(piVar23 + -4) = 0;
                                    *(piVar23 + 0x15) = 0xff;
                                    *(piVar23 + 0x11) = 0xffffffff;
                                    *(piVar23 + -5) = uVar25;
                                    uVar27 = *(iVar28 + 0x3980);
                                    unaff_x21 = uVar25;
                                    goto code_r0x0800a16c;
                                }
                                uVar26 = *(piVar23 + -2);
                            }
                            else {
                                uVar26 = *puVar1;
                                *(piVar23 + -2) = *puVar1;
                                *(piVar23 + -5) = *puVar32;
                                *(piVar23 + -4) = *(iVar29 + 0x14);
                                *(piVar23 + 0x11) = *puVar2;
                                *(piVar23 + 0x12) = *puVar3;
                                *(piVar23 + 0x15) = *puVar4;
                                *(piVar23 + 0x14) = *puVar5;
                                *(piVar23 + 0x13) = *puVar6;
                                uVar27 = *puVar7;
                                unaff_x21 = puVar36;
code_r0x0800a16c:
                                *(piVar23 + 0x16) = uVar27;
                                if (*(iVar34 + 0x1e8c) == 1) {
                                    iVar17 = *(iVar34 + 0x1ee0);
                                    if (iVar17 == 600000) {
                                        iVar28 = 3;
                                    }
                                    else if (iVar17 == 4800000) {
                                        iVar28 = 1;
                                    }
                                    else if (iVar17 == 1200000) {
                                        iVar28 = 2;
                                    }
                                    else {
                                        iVar28 = 0;
                                    }
                                    unaff_x21 = 0xe;
                                    uVar25 = (uVar22 + uVar11 * 0xe) - 0xe;
                                    if (uVar25 < 0x9a) {
                                        unaff_x21 = 0x4d0;
                                        iVar17 = *(iVar34 + iVar28 * 0x4d0 + uVar25 * 8 + 0x397c);
                                        if (iVar17 != 0) {
                                            *(piVar23 + -5) = iVar17;
                                        }
                                    }
                                }
                            }
                            uVar25 = puVar36;
                            if (arg3 == 0) {
                                uVar33 = *(piVar23 + 0x16);
                                uVar16 = uVar26;
                            }
                            else if (((uVar16 & 0xffff) != (uVar26 & 0xffff)) || (uVar33 != *(piVar23 + 0x16))) {
                                puVar36 = ___ratelimit(obj.swrm_copy_data_port_config._rs.222,
                                                       "swrm_copy_data_port_config");
                                if (puVar36 != 0) {
                                    arg3 = "swrm_copy_data_port_config";
                                    in_x3 = unaff_x20 & 0xffffffff;
                                    puVar36 = _dev_err(*(iVar34 + 0x1c70),
                                                       "%s:slaves/slave ports attaching to mport%d are not using same SI or data lane, update slave tables,bailing out without setting port config\n"
                                                      );
                                }
                                goto code_r0x0800a8b8;
                            }
                            if (0x77 < uVar25) goto code_r0x0800a92c;
                            iVar28 = uVar25;
                            if (0x1e0 < iVar28 * 4) goto code_r0x0800a930;
                            aiStack_250[iVar28] = *(iVar34 + 0x1e90) * 0x1000 + 0x4020;
                            uVar27 = *puVar8;
                            uVar11 = 0;
                            if (uVar27 != 0xe) {
                                uVar11 = uVar27 + 1 & 0xf;
                            }
                            uVar26 = uVar22 * 0x100 + uVar12;
                            *puVar8 = uVar11;
                            auStack_430[iVar28] =
                                 uVar26 + 0x120 | uVar27 << 0x10 | *(piVar23 + -1) << 0x14 | *(piVar23 + 3) << 0x18;
                            if (uVar25 == 0x77) goto code_r0x0800a92c;
                            unaff_x23 = uVar26 + 0x122;
                            aiStack_250[uVar25 + 1] = *(iVar34 + 0x1e90) * 0x1000 + 0x4020;
                            uVar27 = *puVar8;
                            uVar11 = 0;
                            if (uVar27 != 0xe) {
                                uVar11 = uVar27 + 1 & 0xf;
                            }
                            *puVar8 = uVar11;
                            puVar35 = uVar25 + 2;
                            auStack_430[uVar25 + 1] =
                                 uVar26 + 0x122 | uVar27 << 0x10 | *(piVar23 + -1) << 0x14 | *(piVar23 + -2) << 0x18;
                            puVar36 = puVar35;
                            if (0xff < *(piVar23 + -2)) {
                                if (0x75 < uVar25) goto code_r0x0800a92c;
                                aiStack_250[puVar35] = *(iVar34 + 0x1e90) * 0x1000 + 0x4020;
                                uVar27 = *puVar8;
                                uVar11 = 0;
                                if (uVar27 != 0xe) {
                                    uVar11 = uVar27 + 1 & 0xf;
                                }
                                *puVar8 = uVar11;
                                unaff_x23 = *(piVar23 + -1);
                                puVar36 = uVar25 + 3;
                                auStack_430[puVar35] =
                                     uVar26 + 0x123 | uVar27 << 0x10 | *(piVar23 + -1) << 0x14 |
                                     (*(piVar23 + -2) & 0xff00) << 0x10;
                            }
                            puVar35 = puVar36;
                            if (*(piVar23 + -5) != -1) {
                                if (0x77 < puVar36) goto code_r0x0800a92c;
                                unaff_x23 = uVar26 + 0x124;
                                puVar35 = puVar36 + 1;
                                aiStack_250[puVar36] = *(iVar34 + 0x1e90) * 0x1000 + 0x4020;
                                uVar27 = *puVar8;
                                uVar11 = 0;
                                if (uVar27 != 0xe) {
                                    uVar11 = uVar27 + 1 & 0xf;
                                }
                                *puVar8 = uVar11;
                                auStack_430[puVar36] =
                                     uVar26 + 0x124 | uVar27 << 0x10 | *(piVar23 + -1) << 0x14 | *(piVar23 + -5) << 0x18
                                ;
                            }
                            puVar36 = puVar35;
                            if (*(piVar23 + -4) != -1) {
                                if (0x77 < puVar35) goto code_r0x0800a92c;
                                unaff_x23 = uVar26 + 0x125;
                                puVar36 = puVar35 + 1;
                                aiStack_250[puVar35] = *(iVar34 + 0x1e90) * 0x1000 + 0x4020;
                                uVar27 = *puVar8;
                                uVar11 = 0;
                                if (uVar27 != 0xe) {
                                    uVar11 = uVar27 + 1 & 0xf;
                                }
                                *puVar8 = uVar11;
                                auStack_430[puVar35] =
                                     uVar26 + 0x125 | uVar27 << 0x10 | *(piVar23 + -1) << 0x14 | *(piVar23 + -4) << 0x18
                                ;
                            }
                            cVar9 = *(piVar23 + 0x11);
                            puVar35 = puVar36;
                            if ((cVar9 != -1) && (uVar11 = *(piVar23 + 0x12), uVar11 != 0xff)) {
                                if (0x77 < puVar36) goto code_r0x0800a92c;
                                unaff_x23 = puVar36 * 4;
                                puVar35 = puVar36 + 1;
                                aiStack_250[puVar36] = *(iVar34 + 0x1e90) * 0x1000 + 0x4020;
                                uVar10 = *puVar8;
                                uVar27 = 0;
                                if (uVar10 != 0xe) {
                                    uVar27 = uVar10 + 1 & 0xf;
                                }
                                *puVar8 = uVar27;
                                auStack_430[puVar36] =
                                     (uVar26 | (uVar11 | cVar9 << 4) << 0x18) + 0x126 | uVar10 << 0x10 |
                                     *(piVar23 + -1) << 0x14;
                            }
                            puVar36 = puVar35;
                            if (*(piVar23 + 0x15) != -1) {
                                if (0x77 < puVar35) goto code_r0x0800a92c;
                                puVar36 = puVar35 + 1;
                                aiStack_250[puVar35] = *(iVar34 + 0x1e90) * 0x1000 + 0x4020;
                                uVar27 = *puVar8;
                                uVar11 = 0;
                                if (uVar27 != 0xe) {
                                    uVar11 = uVar27 + 1 & 0xf;
                                }
                                *puVar8 = uVar11;
                                unaff_x23 = *(piVar23 + 0x15);
                                auStack_430[puVar35] =
                                     uVar22 * 0x100 + 0x103 | uVar27 << 0x10 | *(piVar23 + -1) << 0x14 |
                                     *(piVar23 + 0x15) << 0x18;
                            }
                            puVar35 = puVar36;
                            if (*(piVar23 + 0x14) != -1) {
                                if (0x77 < puVar36) goto code_r0x0800a92c;
                                puVar35 = puVar36 + 1;
                                aiStack_250[puVar36] = *(iVar34 + 0x1e90) * 0x1000 + 0x4020;
                                uVar27 = *puVar8;
                                uVar11 = 0;
                                if (uVar27 != 0xe) {
                                    uVar11 = uVar27 + 1 & 0xf;
                                }
                                *puVar8 = uVar11;
                                unaff_x23 = *(piVar23 + 0x14);
                                auStack_430[puVar36] =
                                     uVar26 + 0x127 | uVar27 << 0x10 | *(piVar23 + -1) << 0x14 |
                                     *(piVar23 + 0x14) << 0x18;
                            }
                            puVar37 = puVar35;
                            if (*(piVar23 + 0x13) != -1) {
                                if (0x77 < puVar35) goto code_r0x0800a92c;
                                puVar37 = puVar35 + 1;
                                aiStack_250[puVar35] = *(iVar34 + 0x1e90) * 0x1000 + 0x4020;
                                uVar27 = *puVar8;
                                uVar11 = 0;
                                if (uVar27 != 0xe) {
                                    uVar11 = uVar27 + 1 & 0xf;
                                }
                                *puVar8 = uVar11;
                                unaff_x23 = *(piVar23 + 0x13);
                                auStack_430[puVar35] =
                                     uVar26 + 0x121 | uVar27 << 0x10 | *(piVar23 + -1) << 0x14 |
                                     *(piVar23 + 0x13) << 0x18;
                            }
                            puVar36 = puVar37;
                            if (*(piVar23 + 0x16) != -1) {
                                if (0x77 < puVar37) goto code_r0x0800a92c;
                                puVar36 = puVar37 + 1;
                                aiStack_250[puVar37] = *(iVar34 + 0x1e90) * 0x1000 + 0x4020;
                                uVar27 = *puVar8;
                                uVar11 = 0;
                                if (uVar27 != 0xe) {
                                    uVar11 = uVar27 + 1 & 0xf;
                                }
                                *puVar8 = uVar11;
                                auStack_430[puVar37] =
                                     uVar26 + 0x128 | uVar27 << 0x10 | *(piVar23 + -1) << 0x14 |
                                     *(piVar23 + 0x16) << 0x18;
                            }
                            *(piVar23 + 0x17) = piVar23[3];
                            if (10 < *(piVar23 + -1)) goto code_r0x0800a92c;
                            arg3 = arg3 + 1;
                            auStack_440[*(piVar23 + -1)] = *(piVar23 + -5);
                        }
                        uVar15 = uVar16;
                        piVar23 = *piVar23;
                        unaff_x21 = puVar36;
                    } while (piVar39 != piVar23);
                }
                iVar17 = *(iVar34 + 0x1e8c);
                if (iVar17 == 3) {
                    *puVar1 = uVar15;
                    *puVar7 = uVar33;
                    iVar17 = *(iVar34 + 0x1e8c);
                }
                uVar22 = *(iVar29 + 0x14);
                uVar16 = 0;
                if (uVar22 != 0xff) {
                    uVar16 = uVar22 << 0x10;
                }
                if (iVar17 == 3) {
                    uVar22 = auStack_440[1];
                    if (0xe < uVar22) {
                        uVar22 = 0xf;
                    }
                    uVar26 = auStack_440[2];
                    if (uVar22 <= auStack_440[2]) {
                        uVar26 = uVar22;
                    }
                    uVar22 = auStack_440[3];
                    if (uVar26 <= auStack_440[3]) {
                        uVar22 = uVar26;
                    }
                    uVar26 = auStack_440[4];
                    if (uVar22 <= auStack_440[4]) {
                        uVar26 = uVar22;
                    }
                    uVar22 = auStack_440[5];
                    if (uVar26 <= auStack_440[5]) {
                        uVar22 = uVar26;
                    }
                    uVar26 = auStack_440[6];
                    if (uVar22 <= auStack_440[6]) {
                        uVar26 = uVar22;
                    }
                    uVar22 = auStack_440[7];
                    if (uVar26 <= auStack_440[7]) {
                        uVar22 = uVar26;
                    }
                    uVar26 = auStack_440[8];
                    if (uVar22 <= auStack_440[8]) {
                        uVar26 = uVar22;
                    }
                    uVar25 = auStack_440[9];
                    if (uVar26 <= auStack_440[9]) {
                        uVar25 = uVar26;
                    }
                    uVar22 = auStack_440[10];
                    if (uVar25 <= auStack_440[10]) {
                        uVar22 = uVar25;
                    }
                }
                else {
                    uVar22 = *puVar32;
                }
                uVar26 = unaff_x21;
                *puVar32 = uVar22;
                puVar32 = iStack_450 + unaff_x20 * 0x28 + 0x12;
                if (0x77 < uVar26) {
code_r0x0800a92c:
    //WARNING: Does not return
                    pcVar14 = SoftwareBreakpoint(0x5512,0x800a930);
                    (*pcVar14)();
                }
                iVar28 = uVar26;
                if (0x1e0 < iVar28 * 4) {
code_r0x0800a930:
    //WARNING: Does not return
                    pcVar14 = SoftwareBreakpoint(1,0x800a934);
                    (*pcVar14)();
                }
                iVar13 = puStack_448 * 0x100;
                iVar17 = iVar13 + iStack_454;
                auStack_430[iVar28] = uVar16 | *puVar32 << 0x18 | uVar22 << 8 | *puVar1;
                aiStack_250[iVar28] = iVar17 + 0x1024;
                if (uVar26 == 0x77) goto code_r0x0800a92c;
                aiStack_250[uVar26 + 1] = iVar17 + 0x103c;
                auStack_430[uVar26 + 1] = *(iVar29 + 0x17);
                uVar30 = uVar26 + 2;
                uVar31 = uVar30;
                if (*puVar7 != 0xff) {
                    if (0x75 < uVar26) goto code_r0x0800a92c;
                    aiStack_250[uVar30] = iVar17 + 0x1028;
                    uVar31 = uVar26 + 3;
                    auStack_430[uVar30] = *puVar7;
                }
                uVar30 = uVar31;
                if (*puVar4 != 0xff) {
                    if (0x77 < uVar31) goto code_r0x0800a92c;
                    uVar30 = uVar31 + 1;
                    aiStack_250[uVar31] = iVar13 + 0x102c;
                    auStack_430[uVar31] = *puVar4;
                }
                uVar16 = uVar30;
                if (*puVar6 != 0xff) {
                    if (0x77 < uVar16) goto code_r0x0800a92c;
                    uVar16 = uVar16 + 1;
                    aiStack_250[uVar30] = iVar17 + 0x1030;
                    auStack_430[uVar30] = *puVar6;
                }
                if ((*puVar2 == 0xff) || (*puVar3 == 0xff)) {
                    if (0x77 < uVar16) goto code_r0x0800a92c;
                    aiStack_250[uVar16] = iVar17 + 0x1034;
                    auStack_430[uVar16] = 0xf0;
                }
                else {
                    if (0x77 < uVar16) goto code_r0x0800a92c;
                    aiStack_250[uVar16] = iVar17 + 0x1034;
                    auStack_430[uVar16] = (*puVar3 & 0xf) << 4 | *puVar2;
                }
                puVar36 = uVar16 + 1;
                unaff_x21 = puVar36;
                if (*puVar5 != 0xff) {
                    if (0x76 < uVar16) goto code_r0x0800a92c;
                    unaff_x21 = uVar16 + 2;
                    aiStack_250[puVar36] = iVar17 + 0x1038;
                    auStack_430[puVar36] = *puVar5;
                }
                *(iStack_450 + unaff_x20 * 0x28 + 0x11) = *puVar32;
                puVar36 = puStack_448;
                iVar29 = iStack_450;
            }
            unaff_x20 = puVar36;
        } while (puVar36 != 0xd);
        arg3 = auStack_430;
        in_x3 = unaff_x21;
        puVar36 = sym.swr_master_bulk_write(iVar34,aiStack_250,arg3,unaff_x21);
    }
code_r0x0800a8b8:
    iVar29 = sp_el0;
    if (*(iVar29 + 0x5e0) == iStack_70) {
        return puVar36;
    }
    puVar36 = __stack_chk_fail();
    *extraout_x18 = sym.swrm_enable_slave_irq;
    pcStack_498 = sym.swrm_enable_slave_irq;
    iVar29 = sp_el0;
    iStack_4a8 = *(iVar29 + 0x5e0);
    uStack_4ac = 0;
    puStack_4a0 = &stack0xffffffffffffffa0;
    uStack_490 = unaff_x23;
    puStack_480 = puVar38;
    puStack_478 = unaff_x21;
    puStack_470 = unaff_x20;
    iStack_468 = iVar34;
    puVar35 = sym.swr_master_read(puVar36,0x1090);
    if ((puVar35 != 0) && (uVar16 = puVar36[0x7b9], uVar16 != 0xffffffff)) {
        unaff_x20 = puVar35 & 0xffffffff;
        unaff_x21 = NULL;
        puVar38 = puVar36 + 0xe5e;
        puVar8 = puVar36 + 0x1e8a;
        do {
            iVar17 = unaff_x21;
            if ((unaff_x20 & 3) != 0) {
                if (*puVar38 == '\0') {
                    uVar11 = *puVar8;
                    uVar33 = 0;
                    if (uVar11 != 0xe) {
                        uVar33 = uVar11 + 1 & 0xf;
                    }
                    *puVar8 = uVar33;
                    sym.swrm_cmd_fifo_rd_cmd(puVar36,&uStack_4ac,unaff_x21,uVar11);
                    uVar11 = *puVar8;
                    uVar33 = 0;
                    if (uVar11 != 0xe) {
                        uVar33 = uVar11 + 1 & 0xf;
                    }
                    *puVar8 = uVar33;
                    sym.swrm_cmd_fifo_wr_cmd(puVar36,0xff,unaff_x21,uVar11);
                }
                uVar11 = *puVar8;
                in_x3 = uVar11;
                uVar33 = 0;
                if (uVar11 != 0xe) {
                    uVar33 = uVar11 + 1 & 0xf;
                }
                *puVar8 = uVar33;
                puVar35 = sym.swrm_cmd_fifo_wr_cmd(puVar36,4,unaff_x21,in_x3);
                uVar16 = puVar36[0x7b9];
                arg3 = unaff_x21;
            }
            unaff_x20 = unaff_x20 >> 2;
            uVar12 = iVar17 + 1;
            unaff_x21 = uVar12;
        } while (uVar12 < uVar16 + 1);
    }
    iVar34 = sp_el0;
    if (*(iVar34 + 0x5e0) == iStack_4a8) {
        return puVar35;
    }
    auVar40 = __stack_chk_fail();
    puVar24 = auVar40._8_8_;
    puVar21 = auStack_4f0;
    *extraout_x18_00 = sym.swrm_debug_read;
    pcStack_4d8 = sym.swrm_debug_read;
    iVar34 = sp_el0;
    iStack_4e8 = *(iVar34 + 0x5e0);
    puVar19 = 0xffffffffffffffea;
    auStack_4f0[0] = 0;
    auStack_4f0[1] = 0;
    puVar35 = arg3;
    puVar37 = unaff_x20;
    ppuStack_4e0 = &puStack_4a0;
    puStack_4d0 = unaff_x21;
    puStack_4c0 = unaff_x20;
    puStack_4b8 = puVar36;
    if ((((puVar24 != NULL) && (auVar40._0_8_ != 0)) && (puVar37 = arg3, arg3 != NULL)) &&
       (puVar36 = in_x3, in_x3 != NULL)) {
        iVar34 = *(auVar40._0_8_ + 0xd8);
        if ((iVar34 == 0) || (*in_x3 < 0)) {
            puVar19 = 0xffffffffffffffea;
        }
        else {
            snprintf(auStack_4f0,8,"0x%x\n",*(iVar34 + 0x4ce0));
            uVar20 = strnlen(auStack_4f0,7);
            puVar35 = in_x3;
            puVar19 = simple_read_from_buffer(puVar24,arg3,in_x3,auStack_4f0,uVar20);
            in_x3 = puVar21;
            unaff_x21 = puVar24;
        }
    }
    iVar34 = sp_el0;
    if (*(iVar34 + 0x5e0) == iStack_4e8) {
        return puVar19;
    }
    auVar40 = __stack_chk_fail(puVar19);
    *extraout_x18_01 = sym.swrm_debug_peek_write;
    pcStack_518 = sym.swrm_debug_peek_write;
    iVar34 = sp_el0;
    iStack_528 = *(iVar34 + 0x5e0);
    puVar21 = 0xffffffffffffffea;
    acStack_550[0] = '\0';
    acStack_550[1] = '\0';
    acStack_550[2] = '\0';
    acStack_550[3] = '\0';
    acStack_550[4] = '\0';
    acStack_550[5] = '\0';
    acStack_550[6] = '\0';
    acStack_550[7] = '\0';
    uStack_530 = 0;
    auStack_540[0] = 0;
    auStack_540[1] = 0;
    pppuStack_520 = &ppuStack_4e0;
    puStack_510 = puVar38;
    puStack_508 = unaff_x21;
    puStack_500 = puVar37;
    puStack_4f8 = puVar36;
    if (((auVar40._8_8_ == 0) || (auVar40._0_8_ == 0)) || ((puVar35 == NULL || (in_x3 == NULL)))) goto code_r0x0800aca0;
    iVar34 = *(auVar40._0_8_ + 0xd8);
    if (iVar34 != 0) {
        puVar21 = 0xffffffffffffffea;
        if ((0x7 < puVar35) || (*in_x3 < 0)) goto code_r0x0800aca0;
        __check_object_size(acStack_550,puVar35,0);
        iVar17 = sym._copy_from_user(acStack_550,auVar40._8_8_,puVar35);
        if (iVar17 != 0) {
            puVar21 = 0xfffffffffffffff2;
            goto code_r0x0800aca0;
        }
        acStack_550[puVar35] = '\0';
        puStack_548 = acStack_550;
        iVar29 = strsep(&puStack_548,0x80017d0);
        if (iVar29 != 0) {
            uVar18 = 0x10;
            if ((*(iVar29 + 1) & 0xdf) != 0x58) {
                uVar18 = 10;
            }
            iVar17 = kstrtouint(iVar29,uVar18,auStack_540);
            if (iVar17 == 0) {
                strsep(&puStack_548,0x80017d0);
                if (auStack_540[0] < 0x60a9) {
                    uVar18 = sym.swr_master_read(iVar34,auStack_540[0] & 0xffffffff);
                    *(iVar34 + 0x4ce0) = uVar18;
                    puVar21 = puVar35;
                    goto code_r0x0800aca0;
                }
            }
        }
        iVar17 = ___ratelimit(obj.swrm_debug_peek_write._rs,"swrm_debug_peek_write");
        if (iVar17 != 0) {
            _dev_err(*(iVar34 + 0x1c70),"%s: rc = %d\n","swrm_debug_peek_write",0xffffffea);
        }
    }
    puVar21 = 0xffffffffffffffea;
code_r0x0800aca0:
    iVar34 = sp_el0;
    if (*(iVar34 + 0x5e0) != iStack_528) {
        auVar40 = __stack_chk_fail(puVar21);
        *(auVar40._8_8_ + 0xd8) = *(auVar40._0_8_ + 0x2d8);
        return NULL;
    }
    return puVar21;
}


// ===== sym.swrm_enable_slave_irq @ 0x0800a938 (size 340) =====

int64_t * sym.swrm_enable_slave_irq(int64_t arg1)

{
    uint32_t uVar1;
    uint8_t *puVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    int iVar5;
    uint uVar6;
    int64_t *piVar7;
    int64_t *piVar8;
    ulong uVar9;
    int64_t *piVar10;
    int64_t iVar11;
    int64_t *piVar12;
    int64_t *in_x2;
    int64_t *in_x3;
    int64_t iVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t *piVar14;
    int64_t *unaff_x20;
    int64_t *piVar15;
    int iVar16;
    int64_t *unaff_x21;
    char *unaff_x22;
    ulong unaff_x30;
    uchar auVar17 [16];
    ulong uStack_f0;
    uchar *puStack_e8;
    uint64_t auStack_e0 [2];
    uint uStack_d0;
    int64_t iStack_c8;
    uchar **ppuStack_c0;
    code *pcStack_b8;
    char *pcStack_b0;
    int64_t *piStack_a8;
    int64_t *piStack_a0;
    int64_t *piStack_98;
    int64_t iStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    int64_t *piStack_70;
    int64_t *piStack_60;
    int64_t iStack_58;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_48 = *(iVar13 + 0x5e0);
    uStack_4c = 0;
    piVar7 = sym.swr_master_read(arg1,0x1090);
    if (piVar7 != 0) {
        iVar5 = *(arg1 + 0x1ee4);
        if (iVar5 != -1) {
            unaff_x20 = piVar7 & 0xffffffff;
            unaff_x21 = NULL;
            unaff_x22 = arg1 + 0x3978;
            puVar2 = arg1 + 0x1e8a;
            do {
                iVar16 = unaff_x21;
                if ((unaff_x20 & 3) != 0) {
                    if (*unaff_x22 == '\0') {
                        uVar4 = *puVar2;
                        uVar3 = 0;
                        if (uVar4 != 0xe) {
                            uVar3 = uVar4 + 1 & 0xf;
                        }
                        *puVar2 = uVar3;
                        sym.swrm_cmd_fifo_rd_cmd(arg1,&uStack_4c,unaff_x21,uVar4);
                        uVar4 = *puVar2;
                        uVar3 = 0;
                        if (uVar4 != 0xe) {
                            uVar3 = uVar4 + 1 & 0xf;
                        }
                        *puVar2 = uVar3;
                        sym.swrm_cmd_fifo_wr_cmd(arg1,0xff,unaff_x21,uVar4);
                    }
                    uVar4 = *puVar2;
                    in_x3 = uVar4;
                    uVar3 = 0;
                    if (uVar4 != 0xe) {
                        uVar3 = uVar4 + 1 & 0xf;
                    }
                    *puVar2 = uVar3;
                    piVar7 = sym.swrm_cmd_fifo_wr_cmd(arg1,4,unaff_x21,in_x3);
                    iVar5 = *(arg1 + 0x1ee4);
                    in_x2 = unaff_x21;
                }
                unaff_x20 = unaff_x20 >> 2;
                uVar1 = iVar16 + 1;
                unaff_x21 = uVar1;
            } while (uVar1 < iVar5 + 1U);
        }
    }
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_48) {
        return piVar7;
    }
    auVar17 = __stack_chk_fail();
    piVar12 = auVar17._8_8_;
    piVar10 = &iStack_90;
    *extraout_x18 = sym.swrm_debug_read;
    pcStack_78 = sym.swrm_debug_read;
    iVar13 = sp_el0;
    iStack_88 = *(iVar13 + 0x5e0);
    piVar8 = 0xffffffffffffffea;
    iStack_90 = 0;
    piVar7 = in_x2;
    piVar14 = arg1;
    piVar15 = unaff_x20;
    puStack_80 = &stack0xffffffffffffffc0;
    piStack_70 = unaff_x21;
    piStack_60 = unaff_x20;
    iStack_58 = arg1;
    if ((((piVar12 != NULL) && (auVar17._0_8_ != 0)) && (piVar15 = in_x2, in_x2 != NULL)) &&
       (piVar14 = in_x3, in_x3 != NULL)) {
        iVar13 = *(auVar17._0_8_ + 0xd8);
        if ((iVar13 == 0) || (*in_x3 < 0)) {
            piVar8 = 0xffffffffffffffea;
        }
        else {
            snprintf(&iStack_90,8,"0x%x\n",*(iVar13 + 0x4ce0));
            uVar9 = strnlen(&iStack_90,7);
            piVar7 = in_x3;
            piVar8 = simple_read_from_buffer(piVar12,in_x2,in_x3,&iStack_90,uVar9);
            in_x3 = piVar10;
            unaff_x21 = piVar12;
        }
    }
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_88) {
        return piVar8;
    }
    auVar17 = __stack_chk_fail(piVar8);
    *extraout_x18_00 = sym.swrm_debug_peek_write;
    pcStack_b8 = sym.swrm_debug_peek_write;
    iVar13 = sp_el0;
    iStack_c8 = *(iVar13 + 0x5e0);
    piVar10 = 0xffffffffffffffea;
    uStack_f0 = 0;
    uStack_d0 = 0;
    auStack_e0[0] = 0;
    auStack_e0[1] = 0;
    ppuStack_c0 = &puStack_80;
    pcStack_b0 = unaff_x22;
    piStack_a8 = unaff_x21;
    piStack_a0 = piVar15;
    piStack_98 = piVar14;
    if (((auVar17._8_8_ == 0) || (auVar17._0_8_ == 0)) || ((piVar7 == NULL || (in_x3 == NULL)))) goto code_r0x0800aca0;
    iVar13 = *(auVar17._0_8_ + 0xd8);
    if (iVar13 != 0) {
        piVar10 = 0xffffffffffffffea;
        if ((0x7 < piVar7) || (*in_x3 < 0)) goto code_r0x0800aca0;
        __check_object_size(&uStack_f0,piVar7,0);
        iVar5 = sym._copy_from_user(&uStack_f0,auVar17._8_8_,piVar7);
        if (iVar5 != 0) {
            piVar10 = 0xfffffffffffffff2;
            goto code_r0x0800aca0;
        }
        *(&uStack_f0 + piVar7) = 0;
        puStack_e8 = &uStack_f0;
        iVar11 = strsep(&puStack_e8,0x80017d0);
        if (iVar11 != 0) {
            uVar6 = 0x10;
            if ((*(iVar11 + 1) & 0xdf) != 0x58) {
                uVar6 = 10;
            }
            iVar5 = kstrtouint(iVar11,uVar6,auStack_e0);
            if (iVar5 == 0) {
                strsep(&puStack_e8,0x80017d0);
                if (auStack_e0[0] < 0x60a9) {
                    uVar6 = sym.swr_master_read(iVar13,auStack_e0[0] & 0xffffffff);
                    *(iVar13 + 0x4ce0) = uVar6;
                    piVar10 = piVar7;
                    goto code_r0x0800aca0;
                }
            }
        }
        iVar5 = ___ratelimit(obj.swrm_debug_peek_write._rs,"swrm_debug_peek_write");
        if (iVar5 != 0) {
            _dev_err(*(iVar13 + 0x1c70),"%s: rc = %d\n","swrm_debug_peek_write",0xffffffea);
        }
    }
    piVar10 = 0xffffffffffffffea;
code_r0x0800aca0:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_c8) {
        return piVar10;
    }
    auVar17 = __stack_chk_fail(piVar10);
    *(auVar17._8_8_ + 0xd8) = *(auVar17._0_8_ + 0x2d8);
    return NULL;
}


// ===== sym.swrm_debug_read @ 0x0800aa8c (size 220) =====

uint64_t sym.swrm_debug_read(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint uVar2;
    uint64_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t *piVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    ulong uStack_a0;
    uchar *puStack_98;
    uint64_t auStack_90 [2];
    uint uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar6 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    uVar3 = 0xffffffffffffffea;
    iStack_40 = 0;
    if ((((arg2 != 0) && (arg1 != 0)) && (arg3 != 0)) && (arg4 != 0)) {
        if ((*(arg1 + 0xd8) == 0) || (*arg4 < 0)) {
            uVar3 = 0xffffffffffffffea;
        }
        else {
            snprintf(&iStack_40,8,"0x%x\n",*(*(arg1 + 0xd8) + 0x4ce0));
            uVar4 = strnlen(&iStack_40,7);
            uVar3 = simple_read_from_buffer(arg2,arg3,arg4,&iStack_40,uVar4);
            arg3 = arg4;
            arg4 = piVar6;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return uVar3;
    }
    auVar8 = __stack_chk_fail(uVar3);
    *extraout_x18 = sym.swrm_debug_peek_write;
    pcStack_68 = sym.swrm_debug_peek_write;
    iVar7 = sp_el0;
    iStack_78 = *(iVar7 + 0x5e0);
    uVar3 = 0xffffffffffffffea;
    uStack_a0 = 0;
    uStack_80 = 0;
    auStack_90[0] = 0;
    auStack_90[1] = 0;
    puStack_70 = &stack0xffffffffffffffd0;
    if (((auVar8._8_8_ == 0) || (auVar8._0_8_ == 0)) || ((arg3 == 0 || (arg4 == NULL)))) goto code_r0x0800aca0;
    iVar7 = *(auVar8._0_8_ + 0xd8);
    if (iVar7 != 0) {
        uVar3 = 0xffffffffffffffea;
        if ((7 < arg3) || (*arg4 < 0)) goto code_r0x0800aca0;
        __check_object_size(&uStack_a0,arg3,0);
        iVar1 = sym._copy_from_user(&uStack_a0,auVar8._8_8_,arg3);
        if (iVar1 != 0) {
            uVar3 = 0xfffffffffffffff2;
            goto code_r0x0800aca0;
        }
        *(&uStack_a0 + arg3) = 0;
        puStack_98 = &uStack_a0;
        iVar5 = strsep(&puStack_98,0x80017d0);
        if (iVar5 != 0) {
            uVar2 = 0x10;
            if ((*(iVar5 + 1) & 0xdf) != 0x58) {
                uVar2 = 10;
            }
            iVar1 = kstrtouint(iVar5,uVar2,auStack_90);
            if (iVar1 == 0) {
                strsep(&puStack_98,0x80017d0);
                if (auStack_90[0] < 0x60a9) {
                    uVar2 = sym.swr_master_read(iVar7,auStack_90[0] & 0xffffffff);
                    *(iVar7 + 0x4ce0) = uVar2;
                    uVar3 = arg3;
                    goto code_r0x0800aca0;
                }
            }
        }
        iVar1 = ___ratelimit(obj.swrm_debug_peek_write._rs,"swrm_debug_peek_write");
        if (iVar1 != 0) {
            _dev_err(*(iVar7 + 0x1c70),"%s: rc = %d\n","swrm_debug_peek_write",0xffffffea);
        }
    }
    uVar3 = 0xffffffffffffffea;
code_r0x0800aca0:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_78) {
        return uVar3;
    }
    auVar8 = __stack_chk_fail(uVar3);
    *(auVar8._8_8_ + 0xd8) = *(auVar8._0_8_ + 0x2d8);
    return 0;
}


// ===== sym.swrm_debug_peek_write @ 0x0800ab68 (size 396) =====

int64_t sym.swrm_debug_peek_write(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    uchar auVar5 [16];
    ulong uStack_60;
    uchar *puStack_58;
    uint64_t auStack_50 [2];
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar3 = -0x16;
    uStack_60 = 0;
    uStack_40 = 0;
    auStack_50[0] = 0;
    auStack_50[1] = 0;
    if ((((arg2 == 0) || (arg1 == 0)) || (arg3 == 0)) || (arg4 == 0)) goto code_r0x0800aca0;
    iVar4 = *(arg1 + 0xd8);
    if (iVar4 != 0) {
        iVar3 = -0x16;
        if ((7 < arg3) || (*arg4 < 0)) goto code_r0x0800aca0;
        __check_object_size(&uStack_60,arg3,0);
        iVar1 = sym._copy_from_user(&uStack_60,arg2,arg3);
        if (iVar1 != 0) {
            iVar3 = -0xe;
            goto code_r0x0800aca0;
        }
        *(&uStack_60 + arg3) = 0;
        puStack_58 = &uStack_60;
        iVar3 = strsep(&puStack_58,0x80017d0);
        if (iVar3 != 0) {
            uVar2 = 0x10;
            if ((*(iVar3 + 1) & 0xdf) != 0x58) {
                uVar2 = 10;
            }
            iVar1 = kstrtouint(iVar3,uVar2,auStack_50);
            if (iVar1 == 0) {
                strsep(&puStack_58,0x80017d0);
                if (auStack_50[0] < 0x60a9) {
                    uVar2 = sym.swr_master_read(iVar4,auStack_50[0] & 0xffffffff);
                    *(iVar4 + 0x4ce0) = uVar2;
                    iVar3 = arg3;
                    goto code_r0x0800aca0;
                }
            }
        }
        iVar1 = ___ratelimit(obj.swrm_debug_peek_write._rs,"swrm_debug_peek_write");
        if (iVar1 != 0) {
            _dev_err(*(iVar4 + 0x1c70),"%s: rc = %d\n","swrm_debug_peek_write",0xffffffea);
        }
    }
    iVar3 = -0x16;
code_r0x0800aca0:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return iVar3;
    }
    auVar5 = __stack_chk_fail(iVar3);
    *(auVar5._8_8_ + 0xd8) = *(auVar5._0_8_ + 0x2d8);
    return 0;
}


// ===== sym.swrm_debug_open @ 0x0800acf4 (size 24) =====

ulong sym.swrm_debug_open(int64_t arg1,int64_t arg2)

{
    *(arg2 + 0xd8) = *(arg1 + 0x2d8);
    return 0;
}


// ===== sym._copy_from_user @ 0x0800ad0c (size 376) =====

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
        if ((_gpiod_to_irq >> 0x18 & 1) == 0) {
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
        if ((_gpiod_to_irq >> 0x18 & 1) == 0) {
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


// ===== sym.swrm_debug_write @ 0x0800aec0 (size 436) =====

uint64_t * sym.swrm_debug_write(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    char *pcVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t *puVar8;
    int64_t iVar9;
    ulong uVar10;
    uint64_t uVar11;
    char *arg3_00;
    uint64_t *in_x3;
    uint64_t uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar13;
    uint64_t uVar14;
    uint64_t *puVar15;
    uint64_t *puVar16;
    uint64_t *puVar17;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar auVar18 [16];
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    int64_t *piStack_78;
    uint64_t auStack_70 [2];
    uint uStack_60;
    int64_t aiStack_58 [5];
    
    puVar16 = arg3;
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    aiStack_58[4] = *(iVar13 + 0x5e0);
    puVar8 = 0xffffffffffffffea;
    aiStack_58[2] = 0;
    aiStack_58[3] = 0;
    aiStack_58[0] = 0;
    aiStack_58[1] = 0;
    uStack_60 = 0;
    auStack_70[0] = 0;
    auStack_70[1] = 0;
    arg3_00 = puVar16;
    if ((((arg2 != 0) && (arg1 != 0)) && (in_x3 != NULL)) &&
       ((puVar8 = 0xffffffffffffffea, puVar16 < 0x20 && (iVar13 = *(arg1 + 0xd8), iVar13 != 0)))) {
        __check_object_size(aiStack_58,puVar16,0);
        iVar5 = sym._copy_from_user(aiStack_58,arg2,puVar16);
        if (iVar5 == 0) {
            *(aiStack_58 + puVar16) = '\0';
            piStack_78 = aiStack_58;
            iVar9 = strsep(&piStack_78,0x80017d0);
            if (iVar9 != 0) {
                arg3_00 = auStack_70;
                uVar6 = 0x10;
                if ((*(iVar9 + 1) & 0xdf) != 0x58) {
                    uVar6 = 10;
                }
                iVar5 = kstrtouint(iVar9,uVar6);
                if ((iVar5 == 0) && (iVar9 = strsep(&piStack_78,0x80017d0), iVar9 != 0)) {
                    arg3_00 = auStack_70 | 4;
                    uVar6 = 0x10;
                    if ((*(iVar9 + 1) & 0xdf) != 0x58) {
                        uVar6 = 10;
                    }
                    iVar5 = kstrtouint(iVar9,uVar6);
                    if (iVar5 == 0) {
                        strsep(&piStack_78,0x80017d0);
                        if (auStack_70[0] < 0x60a9) {
                            arg3_00 = auStack_70[0] >> 0x20;
                            sym.swr_master_write(iVar13,auStack_70[0] & 0xffffffff,arg3_00);
                            puVar8 = puVar16;
                            goto code_r0x0800afb4;
                        }
                    }
                }
            }
            iVar5 = ___ratelimit(obj.swrm_debug_write._rs,"swrm_debug_write");
            if (iVar5 != 0) {
                arg3_00 = 0xffffffea;
                _printk(0x80014de,"swrm_debug_write");
            }
            puVar8 = 0xffffffffffffffea;
        }
        else {
            puVar8 = 0xfffffffffffffff2;
        }
    }
code_r0x0800afb4:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == aiStack_58[4]) {
        return puVar8;
    }
    auVar18 = __stack_chk_fail(puVar8);
    *extraout_x18 = sym.swrm_debug_reg_dump;
    pcStack_d8 = sym.swrm_debug_reg_dump;
    iVar13 = sp_el0;
    puVar8 = 0xffffffffffffffea;
    iStack_e8 = *(iVar13 + 0x5e0);
    puStack_e0 = &stack0xffffffffffffffd0;
    if ((((auVar18._8_8_ != 0) && (auVar18._0_8_ != 0)) && (arg3_00 != NULL)) && (in_x3 != NULL)) {
        iVar13 = *(auVar18._0_8_ + 0xd8);
        if ((iVar13 == 0) || (uVar14 = *in_x3, uVar14 < 0)) {
            puVar8 = 0xffffffffffffffea;
        }
        else {
            uStack_f8 = 0;
            uStack_f0 = 0;
            uStack_108 = 0;
            uStack_100 = 0;
            puVar8 = NULL;
            if (uVar14 < 0x60a9) {
                puVar17 = arg3_00 + -1;
                puVar16 = arg3_00;
                puVar8 = NULL;
                do {
                    iVar5 = uVar14;
                    puVar15 = puVar8;
                    if (0x13aa < iVar5 - 0x2c55U) {
                        usleep_range_state(100,0x96,2);
                        uVar6 = sym.swr_master_read(iVar13,uVar14 & 0xffffffff);
                        arg3_00 = "0x%.3x: 0x%.2x\n";
                        uVar7 = snprintf(&uStack_108,0x19,"0x%.3x: 0x%.2x\n",uVar14 & 0xffffffff,uVar6);
                        if (uVar7 < 0) {
                            iVar5 = ___ratelimit(obj.swrm_reg_show._rs,"swrm_reg_show");
                            if (iVar5 != 0) {
                                uVar10 = 0x80019ac;
code_r0x0800b238:
                                _printk(uVar10,"swrm_reg_show");
                            }
                        }
                        else {
                            puVar16 = uVar7;
                            puVar15 = puVar8 + puVar16;
                            if (puVar17 <= puVar15) break;
                            noname_1 = __check_object_size(&uStack_108,puVar16,1);
                            iVar9 = sym._copy_to_user(auVar18._8_8_ + puVar8,noname_1,puVar16);
                            if (iVar9 == 0) {
                                *in_x3 = *in_x3 + 4;
                                goto code_r0x0800b118;
                            }
                            iVar5 = ___ratelimit(obj.swrm_reg_show._rs.284,"swrm_reg_show");
                            arg3_00 = puVar16;
                            if (iVar5 != 0) {
                                uVar10 = 0x800208d;
                                goto code_r0x0800b238;
                            }
                        }
                        puVar8 = 0xfffffffffffffff2;
                        break;
                    }
code_r0x0800b118:
                    uVar14 = iVar5 + 4;
                    arg3_00 = puVar16;
                    puVar8 = puVar15;
                } while (iVar5 < 0x60a5);
            }
        }
    }
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_e8) {
        return puVar8;
    }
    uVar11 = __stack_chk_fail();
    *extraout_x18_00 = sym._copy_to_user;
    puVar2 = sp_el0;
    uVar14 = (uVar11 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar12 = uVar11, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar12 = uVar11 & uVar14;
    }
    bVar4 = CARRY8(uVar12,arg3_00);
    pcVar1 = uVar12 + arg3_00;
    uVar12 = 0;
    if (!bVar4 || pcVar1 == NULL) {
        uVar12 = 0x7fffffffff;
    }
    if (bVar4) {
        pcVar1 = 0xffffffffffffffff;
    }
    if (!CARRY8(pcVar1,~uVar12) && !CARRY8(pcVar1 + ~uVar12,bVar4) || pcVar1 == uVar12 + !bVar4) {
        if ((_gpiod_to_irq >> 0x18 & 1) == 0) {
            uVar12 = daif;
            if ((uVar12 & 0x80) == 0) {
                uVar3 = daif;
                daif = uVar3 | 0xc0;
            }
            uVar3 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar3 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar12;
        }
        if ((uVar11 & uVar14 & 0xffffff8000000000) != 0) {
            uVar11 = 0;
        }
        arg3_00 = __arch_copy_to_user(uVar11);
        if ((_gpiod_to_irq >> 0x18 & 1) == 0) {
            uVar14 = daif;
            if ((uVar14 & 0x80) == 0) {
                uVar11 = daif;
                daif = uVar11 | 0xc0;
            }
            uVar11 = ttbr1_el1;
            ttbr0_el1 = (uVar11 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar11 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar14;
        }
    }
    return arg3_00;
}


// ===== sym.swrm_debug_reg_dump @ 0x0800b074 (size 472) =====

char * sym.swrm_debug_reg_dump(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    uint64_t uVar2;
    bool bVar3;
    uint uVar4;
    uint32_t uVar5;
    int iVar6;
    int64_t iVar7;
    ulong uVar8;
    uint64_t uVar9;
    char *pcVar10;
    uint64_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar12;
    uint64_t uVar13;
    char *pcVar14;
    char *pcVar15;
    char *arg2_00;
    char *pcVar16;
    ulong unaff_x30;
    uchar noname_1 [16];
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    pcVar14 = 0xffffffffffffffea;
    iStack_68 = *(iVar12 + 0x5e0);
    if ((((arg2 != 0) && (arg1 != 0)) && (arg3 != 0)) && (arg4 != 0)) {
        iVar12 = *(arg1 + 0xd8);
        if ((iVar12 == 0) || (uVar13 = *arg4, uVar13 < 0)) {
            pcVar14 = 0xffffffffffffffea;
        }
        else {
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_88 = 0;
            uStack_80 = 0;
            pcVar14 = NULL;
            if (uVar13 < 0x60a9) {
                pcVar16 = arg3 - 1;
                arg2_00 = arg3;
                pcVar14 = NULL;
                do {
                    iVar6 = uVar13;
                    pcVar15 = pcVar14;
                    if (0x13aa < iVar6 - 0x2c55U) {
                        usleep_range_state(100,0x96,2);
                        uVar4 = sym.swr_master_read(iVar12,uVar13 & 0xffffffff);
                        pcVar10 = "0x%.3x: 0x%.2x\n";
                        uVar5 = snprintf(&uStack_88,0x19,"0x%.3x: 0x%.2x\n",uVar13 & 0xffffffff,uVar4);
                        if (uVar5 < 0) {
                            iVar6 = ___ratelimit(obj.swrm_reg_show._rs,"swrm_reg_show");
                            if (iVar6 != 0) {
                                uVar8 = 0x80019ac;
code_r0x0800b238:
                                _printk(uVar8,"swrm_reg_show");
                            }
                        }
                        else {
                            arg2_00 = uVar5;
                            pcVar15 = pcVar14 + arg2_00;
                            arg3 = pcVar10;
                            if (pcVar16 <= pcVar15) break;
                            noname_1 = __check_object_size(&uStack_88,arg2_00,1);
                            iVar7 = sym._copy_to_user(pcVar14 + arg2,noname_1,arg2_00);
                            if (iVar7 == 0) {
                                *arg4 = *arg4 + 4;
                                goto code_r0x0800b118;
                            }
                            iVar6 = ___ratelimit(obj.swrm_reg_show._rs.284,"swrm_reg_show");
                            pcVar10 = arg2_00;
                            if (iVar6 != 0) {
                                uVar8 = 0x800208d;
                                goto code_r0x0800b238;
                            }
                        }
                        arg3 = pcVar10;
                        pcVar14 = 0xfffffffffffffff2;
                        break;
                    }
code_r0x0800b118:
                    uVar13 = iVar6 + 4;
                    arg3 = arg2_00;
                    pcVar14 = pcVar15;
                } while (iVar6 < 0x60a5);
            }
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_68) {
        return pcVar14;
    }
    uVar9 = __stack_chk_fail();
    *extraout_x18 = sym._copy_to_user;
    puVar1 = sp_el0;
    uVar13 = (uVar9 << 8) >> 8;
    if (((*(puVar1 + 0x3e) >> 5 & 1) != 0) || (uVar11 = uVar9, (*puVar1 >> 0x1a & 1) != 0)) {
        uVar11 = uVar9 & uVar13;
    }
    bVar3 = CARRY8(uVar11,arg3);
    pcVar14 = arg3 + uVar11;
    uVar11 = 0;
    if (!bVar3 || pcVar14 == NULL) {
        uVar11 = 0x7fffffffff;
    }
    if (bVar3) {
        pcVar14 = 0xffffffffffffffff;
    }
    if (!CARRY8(pcVar14,~uVar11) && !CARRY8(pcVar14 + ~uVar11,bVar3) || pcVar14 == uVar11 + !bVar3) {
        if ((_gpiod_to_irq >> 0x18 & 1) == 0) {
            uVar11 = daif;
            if ((uVar11 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr1_el1 = puVar1[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar1[1];
            InstructionSynchronizationBarrier();
            daif = uVar11;
        }
        if ((uVar9 & uVar13 & 0xffffff8000000000) != 0) {
            uVar9 = 0;
        }
        arg3 = __arch_copy_to_user(uVar9);
        if ((_gpiod_to_irq >> 0x18 & 1) == 0) {
            uVar13 = daif;
            if ((uVar13 & 0x80) == 0) {
                uVar9 = daif;
                daif = uVar9 | 0xc0;
            }
            uVar9 = ttbr1_el1;
            ttbr0_el1 = (uVar9 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar9 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar13;
        }
    }
    return arg3;
}


// ===== sym._copy_to_user @ 0x0800b24c (size 312) =====

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
        if ((_gpiod_to_irq >> 0x18 & 1) == 0) {
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
        if ((_gpiod_to_irq >> 0x18 & 1) == 0) {
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


// ===== sym.swrm_suspend @ 0x0800b3c0 (size 500) =====

uint64_t sym.swrm_suspend(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar6;
    int64_t iVar7;
    ulong unaff_x30;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    iVar7 = *(arg1 + 0x98);
    iVar4 = iVar7 + 0x1de0;
    mutex_lock(iVar4);
    if (*(iVar7 + 0x3908) == 1) {
        mutex_unlock(iVar4);
        if (iVar7 != 0) {
            mutex_lock(iVar4);
            if (*(iVar7 + 0x3908) == 0) {
                *(iVar7 + 0x3908) = 2;
                mutex_unlock(iVar4);
            }
            else {
                mutex_unlock(iVar4);
                uStack_68 = 0;
                uStack_60 = 0;
                uStack_78 = 0;
                uStack_70 = 0;
                uStack_80 = 0;
                init_wait_entry(&uStack_80,0);
                iVar6 = 1;
                while( true ) {
                    prepare_to_wait_event(iVar7 + 0x3910,&uStack_80,2);
                    mutex_lock(iVar4);
                    iVar2 = *(iVar7 + 0x3908);
                    if (iVar2 == 0) {
                        *(iVar7 + 0x3908) = 2;
                    }
                    mutex_unlock(iVar4);
                    if (iVar6 == 0 && iVar2 == 0) {
                        iVar6 = 1;
                    }
                    if ((iVar2 == 0) || (iVar6 == 0)) break;
                    iVar6 = schedule_timeout(iVar6);
                }
                finish_wait(iVar7 + 0x3910,&uStack_80);
                if (iVar6 == 0) goto code_r0x0800b574;
            }
        }
        mutex_lock(iVar4);
code_r0x0800b520:
        mutex_unlock(iVar4);
        if (((*(arg1 + 0x200) & 7) == 0) && (*(arg1 + 0x20c) == 2)) goto code_r0x0800b574;
        uVar3 = sym.swrm_runtime_suspend(arg1);
        if (uVar3 == -0x10) goto code_r0x0800b574;
        if (uVar3 == 0) {
            __pm_runtime_disable(arg1,1);
            __pm_runtime_set_status(arg1,2);
            pm_runtime_enable(arg1);
            goto code_r0x0800b574;
        }
    }
    else {
        if (*(iVar7 + 0x3908) != 0) goto code_r0x0800b520;
        mutex_unlock(iVar4);
        sym.swrm_device_suspend(*(iVar7 + 0x1c70));
        mutex_lock(iVar4);
        if (*(iVar7 + 0x3908) != 1) {
            if (*(iVar7 + 0x3908) == 0) {
                *(iVar7 + 0x3908) = 2;
            }
            goto code_r0x0800b520;
        }
        mutex_unlock(iVar4);
code_r0x0800b574:
        uVar3 = 0;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_58) {
        return uVar3;
    }
    iVar4 = __stack_chk_fail(uVar3);
    *extraout_x18 = sym.swrm_resume;
    iVar7 = *(iVar4 + 0x98);
    if ((*(iVar4 + 0x200) & 7) == 0) {
        iVar2 = __pm_runtime_suspend(iVar4,0);
        uVar3 = 0;
        if (iVar2 != 0) goto code_r0x0800b61c;
    }
    uVar1 = sym.swrm_runtime_resume(iVar4);
    uVar3 = uVar1;
    if (uVar1 == 0) {
        uVar5 = ktime_get_mono_fast_ns();
        *(iVar4 + 0x218) = uVar5;
        __pm_runtime_suspend(iVar4,9);
    }
code_r0x0800b61c:
    mutex_lock(iVar7 + 0x1de0);
    if (*(iVar7 + 0x3908) == 2) {
        *(iVar7 + 0x3908) = 0;
    }
    mutex_unlock(iVar7 + 0x1de0);
    __wake_up(iVar7 + 0x3910,3,0,0);
    return uVar3;
}


// ===== sym.swrm_resume @ 0x0800b5b4 (size 196) =====

int sym.swrm_resume(int64_t arg1)

{
    int iVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x98);
    if ((*(arg1 + 0x200) & 7) == 0) {
        iVar2 = __pm_runtime_suspend(arg1,0);
        iVar1 = 0;
        if (iVar2 != 0) goto code_r0x0800b61c;
    }
    iVar1 = sym.swrm_runtime_resume(arg1);
    if (iVar1 == 0) {
        uVar3 = ktime_get_mono_fast_ns();
        *(arg1 + 0x218) = uVar3;
        __pm_runtime_suspend(arg1,9);
    }
code_r0x0800b61c:
    mutex_lock(iVar4 + 0x1de0);
    if (*(iVar4 + 0x3908) == 2) {
        *(iVar4 + 0x3908) = 0;
    }
    mutex_unlock(iVar4 + 0x1de0);
    __wake_up(iVar4 + 0x3910,3,0,0);
    return iVar1;
}


// ===== sym.__cfi_check_fail @ 0x0800b678 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800b6bc

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
    //switch table (4 cases) at 0x8001405
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800b6d0);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x0800b6e4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.swrm_probe.4f7a57b380afe65abf3a3fec691fe242.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x0800b718 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.swrm_probe.4f7a57b380afe65abf3a3fec691fe242.cfi_jt);
    return;
}

