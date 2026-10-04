// decompiled from xiaomi_touch by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08004000 (size 1540) =====

//WARNING: Switch with 1 destination removed at 0x08004874

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x51c87a31c6197e) {
        if (arg1 < -0x3557318fb8d07b71) {
            if (arg1 < -0x5619cfc5467dbb37) {
                if (arg1 == -0x7bcbda558eb245e5) {
                    pcVar2 = sym.xiaomi_touch_dev_poll.71500f2f3877fbb331f33bdee87fabae.cfi_jt;
                }
                else {
                    if (arg1 == -0x66d421a09845f9f8) {
                        pcVar2 = sym.show_touch_thp_ic_cmd.748cadad2772bcec6da87c64b0fa5f62.cfi_jt;
                        goto code_r0x08004580;
                    }
                    if (arg1 != -0x57ad53f76be3578d) goto code_r0x08004834;
                    pcVar2 = sym.event_stop.cfi_jt;
                }
            }
            else if (arg1 < -0x47ff938869e1f5fc) {
                if (arg1 != -0x5619cfc5467dbb37) {
                    if ((arg1 == -0x550b9e52359ac614) && ((pcVar1 + -0x80046f8 >> 3 | pcVar1 << 0x3d) < 3)) {
                        return;
                    }
                    goto code_r0x08004834;
                }
                pcVar2 = sym.event_start.9d8770af7b3671e63c35d9718c8d6b6b.cfi_jt;
            }
            else if (arg1 == -0x47ff938869e1f5fc) {
                pcVar2 = sym.get_raw_data_base.cfi_jt;
            }
            else {
                if (arg1 != -0x43d6947e578ca021) goto code_r0x08004834;
                pcVar2 = sym.register_touch_panel.cfi_jt;
            }
        }
        else if (arg1 < -0x8dc801903aca538) {
            if (arg1 < -0x2ee0710dce68437c) {
                if (arg1 == -0x3557318fb8d07b71) {
                    pcVar2 = sym.xiaomi_touch_remove.c75ca9bdde7c09fd6e53abbae75ed65e.cfi_jt;
                    goto code_r0x080045cc;
                }
                if (arg1 != -0x329911eda76b0ffb) goto code_r0x08004834;
                pcVar2 = sym.add_common_data_to_buf.cfi_jt;
            }
            else {
                if (arg1 != -0x2ee0710dce68437c) {
                    if (arg1 != -0x210d961c9d239772) goto code_r0x08004834;
                    pcVar2 = sym.unregister_touch_panel.cfi_jt;
                    goto code_r0x080045cc;
                }
                pcVar2 = sym.delayed_work_timer_fn.cfi_jt;
            }
        }
        else if (arg1 < -0x241b1422b50b807) {
            if (arg1 == -0x8dc801903aca538) {
                if ((pcVar1 + -0x80046c8 >> 3 | pcVar1 << 0x3d) < 4) {
                    return;
                }
                goto code_r0x08004834;
            }
            if (arg1 != -0x480e210b8e84b7a) goto code_r0x08004834;
            pcVar2 = sym.last_touch_events_collect.cfi_jt;
        }
        else if (arg1 == -0x241b1422b50b807) {
            pcVar2 = sym.get_xiaomi_touch_class.cfi_jt;
        }
        else {
            if (arg1 != -0x890743871a4a53) goto code_r0x08004834;
            pcVar2 = sym.xiaomi_touch_dev_ioctl.71500f2f3877fbb331f33bdee87fabae.cfi_jt;
        }
    }
    else if (arg1 < 0x40472cb49204949c) {
        if (0x1d7ed092cb04d3f0 < arg1) {
            if (arg1 < 0x321969b888d4949e) {
                if (arg1 != 0x1d7ed092cb04d3f1) {
                    if (arg1 != 0x1e3d0ffe3d0499e9) goto code_r0x08004834;
                    pcVar2 = sym.store_panel_display.748cadad2772bcec6da87c64b0fa5f62.cfi_jt;
code_r0x08004580:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 0xe) {
                        return;
                    }
                    goto code_r0x08004834;
                }
                pcVar2 = sym.proc_tp_write.9d8770af7b3671e63c35d9718c8d6b6b.cfi_jt;
            }
            else {
                if (arg1 != 0x321969b888d4949e) {
                    if (arg1 != 0x379d36f049eb9a81) goto code_r0x08004834;
                    pcVar2 = sym.xiaomi_touch_dev_mmap.71500f2f3877fbb331f33bdee87fabae.cfi_jt;
                    goto code_r0x080045f4;
                }
                pcVar2 = sym.no_llseek.cfi_jt;
            }
code_r0x080045cc:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08004834;
        }
        if (arg1 < 0x7ff5a213d37b1a6) {
            if (arg1 == 0x51c87a31c6197e) {
                pcVar2 = sym.xiaomi_drm_panel_notifier_callback.c75ca9bdde7c09fd6e53abbae75ed65e.cfi_jt;
            }
            else {
                if (arg1 != 0x2b3a43e29242445) goto code_r0x08004834;
                pcVar2 = sym.init_module.cfi_jt;
            }
        }
        else {
            if (arg1 == 0x7ff5a213d37b1a6) {
                pcVar2 = sym.proc_tp_read.9d8770af7b3671e63c35d9718c8d6b6b.cfi_jt;
                goto code_r0x080045cc;
            }
            if (arg1 != 0xcd406f92822d7f0) goto code_r0x08004834;
            pcVar2 = sym.xiaomi_register_panel_notifier.cfi_jt;
        }
    }
    else if (arg1 < 0x5a56611a80dd38e9) {
        if (arg1 < 0x51e6e1ffc9449e36) {
            if (arg1 != 0x40472cb49204949c) {
                if (arg1 != 0x47ce015a85343a42) goto code_r0x08004834;
                pcVar2 = sym.__typeid__ZTSFiiE_global_addr;
                goto code_r0x080045cc;
            }
            pcVar2 = sym.event_next.9d8770af7b3671e63c35d9718c8d6b6b.cfi_jt;
        }
        else if (arg1 == 0x51e6e1ffc9449e36) {
            pcVar2 = sym.xiaomi_touch_mievent_report_int.cfi_jt;
        }
        else {
            if (arg1 != 0x5233d5bc7887ae44) goto code_r0x08004834;
            pcVar2 = sym.event_show.9d8770af7b3671e63c35d9718c8d6b6b.cfi_jt;
        }
    }
    else if (arg1 < 0x7dbc453cfe90f4a5) {
        if (arg1 == 0x5a56611a80dd38e9) {
            pcVar2 = sym.xiaomi_touch_printf.cfi_jt;
        }
        else {
            if (arg1 != 0x68131453fce1715e) goto code_r0x08004834;
            pcVar2 = sym.nl_data_ready.cfi_jt;
        }
    }
    else if (arg1 == 0x7dbc453cfe90f4a5) {
        pcVar2 = sym.xiaomi_touch_mievent_report_str.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08004834;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
code_r0x080045f4:
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08004834:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8004888);
    (*pcVar1)();
}


// ===== sym.delayed_work_timer_fn.cfi_jt @ 0x08004610 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.delayed_work_timer_fn.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.xiaomi_drm_panel_notifier_callback.c75ca9bdde7c09fd6e53abbae75ed65e.cfi_jt @ 0x08004618 (size 8) =====

void sym.xiaomi_drm_panel_notifier_callback.c75ca9bdde7c09fd6e53abbae75ed65e.cfi_jt
               (ulong param_1,ulong param_2,uint32_t *param_3,int64_t param_4,int64_t param_5)

{
    char *arg3;
    uint32_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_3 == NULL) {
        sym.xiaomi_touch_printf(param_1,0x800287e,0x800254e,param_5);
    }
    else if (*param_3 != 4) {
        sym.xiaomi_touch_printf(param_1,0x8001cae,0x800254e,*param_3);
        uVar1 = *param_3;
        switch(uVar1) {
        case 1:
        case 3:
            if (param_3[3] != '\0') {
                return;
            }
            arg3 = "POWER DOWN";
            if (uVar1 != 3) {
                arg3 = 0x8002adb;
            }
            sym.xiaomi_touch_printf(0x8002adb,0x8001ec2,0x800254e,arg3);
            flush_workqueue(*(param_4 + 0x14e0));
            iVar2 = 0x14e8;
            break;
        case 2:
            if (param_3[3] == 0) {
                return;
            }
            sym.xiaomi_touch_printf(param_3[3],0x800243a,0x800254e,uVar1);
            flush_workqueue(*(param_4 + 0x14e0));
            iVar2 = 0x1518;
            break;
        default:
            sym.xiaomi_touch_printf(uVar1 - 1,0x8001ff8,0x800254e,uVar1);
            return;
        }
        queue_work_on(0x20,*(param_4 + 0x14e0),param_4 + iVar2);
    }
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08004620 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.xiaomi_touch_probe.c75ca9bdde7c09fd6e53abbae75ed65e.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.xiaomi_register_panel_notifier.cfi_jt @ 0x08004628 (size 8) =====

void sym.xiaomi_register_panel_notifier.cfi_jt(ulong param_1,uint8_t param_2,uint param_3,uint param_4)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong uVar3;
    char *arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = param_2;
    if (param_2 < 2) {
        if ((*0x80006e2 >> (uVar2 & 0x1f) & 1) != 0) {
            if (param_2 * 0x15e8 == -0x80006e8) {
                return;
            }
            iVar1 = param_2 * 0x15e8;
            *(iVar1 + 0x8001cb8) = param_1;
            *(iVar1 + 0x8001cc8) = param_3;
            *(iVar1 + 0x8001ccc) = param_4;
            *(iVar1 + 0x8001c30) = 0xfffffffe0;
            *(iVar1 + 0x8001c38) = iVar1 + 0x8001c38;
            *(iVar1 + 0x8001c40) = iVar1 + 0x8001c38;
            *(iVar1 + 0x8001c48) = sym.xiaomi_register_panel_notifier_work.c75ca9bdde7c09fd6e53abbae75ed65e.cfi_jt;
            init_timer_key(iVar1 + 0x8001c60,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
            *(iVar1 + 0x8001bd0) = 0xfffffffe0;
            *(iVar1 + 0x8001bd8) = iVar1 + 0x8001bd8;
            *(iVar1 + 0x8001be0) = iVar1 + 0x8001bd8;
            *(iVar1 + 0x8001be8) = sym.xiaomi_touch_suspend_work.c75ca9bdde7c09fd6e53abbae75ed65e.cfi_jt;
            *(iVar1 + 0x8001c00) = 0xfffffffe0;
            *(iVar1 + 0x8001c08) = iVar1 + 0x8001c08;
            *(iVar1 + 0x8001c10) = iVar1 + 0x8001c08;
            uVar3 = ___alloc_skb;
            *(iVar1 + 0x8001c18) = sym.xiaomi_touch_resume_work.c75ca9bdde7c09fd6e53abbae75ed65e.cfi_jt;
            queue_delayed_work_on(0x20,uVar3,iVar1 + 0x8001c30,0);
            return;
        }
        arg1 = "MI_TP_E: %s: panel in touch id %d hasn\'t register, return!";
    }
    else {
        arg1 = "MI_TP_E: %s: touch id %d hasn\'t select, return!";
    }
    sym.xiaomi_touch_printf(uVar2,arg1,0x8002120,uVar2);
    return;
}


// ===== sym.__typeid__ZTSFiiE_global_addr @ 0x08004630 (size 8) =====

ulong sym.__typeid__ZTSFiiE_global_addr(uint32_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.fod_press_status_mutex);
    if (*0x8006000 != param_1) {
        sym.xiaomi_touch_printf(*0x8006000,0x80019f1,0x8001a07,param_1);
        *0x8006000 = param_1;
        sysfs_notify(CONCAT44(*0x8006004,param_1),0,"fod_press_status");
    }
    mutex_unlock(obj.fod_press_status_mutex);
    return 0;
}


// ===== sym.update_palm_sensor_value.cfi_jt @ 0x08004638 (size 8) =====

ulong sym.update_palm_sensor_value.cfi_jt(uint32_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.palm_mutex);
    if (*0x8006000 != param_1) {
        sym.xiaomi_touch_printf(*0x8006000,0x800144b,0x8001bbb,param_1);
        *0x8006000 = param_1;
        sysfs_notify(CONCAT44(*0x8006004,param_1),0,"palm_sensor");
    }
    mutex_unlock(obj.palm_mutex);
    return 0;
}


// ===== sym.unregister_touch_panel.cfi_jt @ 0x08004640 (size 8) =====

void sym.unregister_touch_panel.cfi_jt(uint32_t param_1)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    char *pcVar4;
    uint64_t extraout_x8;
    int64_t iVar5;
    ulong *in_x18;
    uint64_t uVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = param_1;
    uVar2 = 1 << (uVar3 & 0x1f);
    if ((uVar2 & *0x80006e2) == 0) {
        pcVar4 = "MI_TP_E: %s: touch id %d didn\'t register, break unregister!";
        uVar1 = *0x80006e2;
        goto code_r0x08005988;
    }
    uVar6 = param_1;
    if ((param_1 & 0xff) < 2) {
        uVar7 = uVar6 & 0xff;
        if (uVar7 * 0x15e8 == -0x80006e8) {
            sym.xiaomi_touch_remove_proc(uVar6);
            uVar6 = *0x80006e2;
            if ((uVar2 & *0x80006e2) == 0) {
                pcVar4 = "MI_TP_E: %s: panel in touch id %d hasn\'t register, return!";
                goto code_r0x0800585c;
            }
            iVar5 = uVar7 * 0x1c0 + 0x80032b8;
            goto code_r0x08005868;
        }
        iVar5 = uVar7 * 0x15e8;
        kfree(*(iVar5 + 0x80006f8));
        *(iVar5 + 0x80006f8) = 0;
        *(iVar5 + 0x8000700) = 0;
        kfree(*(iVar5 + 0x8000718));
        *(iVar5 + 0x8000718) = 0;
        *(iVar5 + 0x8000720) = 0;
        sym.xiaomi_touch_remove_proc(uVar6);
        if ((uVar2 & *0x80006e2) == 0) {
            sym.xiaomi_touch_printf(*0x80006e2,0x8001a1f,0x8001707,uVar3);
            iVar5 = 0;
        }
        else {
            iVar5 = uVar7 * 0x1c0 + 0x80032b8;
        }
        memset(iVar5 + 0x42,0,0x17e);
        kfree(*(uVar7 * 0x15e8 + 0x8001bc0));
        *(uVar7 * 0x15e8 + 0x8001bc0) = 0;
    }
    else {
        pcVar4 = "MI_TP_E: %s: touch id %d hasn\'t select, return!";
        sym.xiaomi_touch_printf(param_1 & 0xff,0x8001581,0x8002120,uVar3);
        sym.xiaomi_touch_remove_proc(uVar6);
        uVar6 = extraout_x8;
code_r0x0800585c:
        sym.xiaomi_touch_printf(uVar6,pcVar4,0x8001707,uVar3);
        iVar5 = 0;
code_r0x08005868:
        memset(iVar5 + 0x42,0,0x17e);
    }
    pcVar4 = "MI_TP_I: %s: current panel_register_mask is %d";
    uVar3 = *0x80006e2 & (uVar2 ^ 0xffffffff);
    uVar1 = *0x80006e2;
    *0x80006e2 = uVar3;
code_r0x08005988:
    sym.xiaomi_touch_printf(uVar1,pcVar4,0x80023aa,uVar3);
    return;
}


// ===== sym.notify_raw_data_update.cfi_jt @ 0x08004648 (size 8) =====

void sym.notify_raw_data_update.cfi_jt(uint8_t param_1)

{
    int *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    char cVar4;
    bool bVar5;
    uint8_t uVar6;
    char *arg1;
    uint64_t uVar7;
    ulong *in_x18;
    int64_t *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar7 = param_1;
    if (param_1 < 2) {
        uVar6 = *0x80006e2 >> (param_1 & 0x1f);
        uVar7 = uVar6;
        if ((uVar6 & 1) != 0) {
            uVar7 = param_1;
            if (uVar7 * 0x15e8 == -0x80006e8) {
                return;
            }
            piVar1 = uVar7 * 0x15e8 + 0x80006ec;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                    *piVar1 = *piVar1 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            if (*(uVar7 * 0x15e8 + 0x80006f4) <= *piVar1) {
                *piVar1 = 0;
            }
            iVar2 = uVar7 * 0x15e8 + 0x8000738;
            _raw_spin_lock(iVar2);
            piVar3 = uVar7 * 0x15e8 + 0x8000728;
            for (piVar8 = *piVar3; piVar8 != piVar3; piVar8 = *piVar8) {
                __wake_up(piVar8 + 3,3,0,0);
            }
            _raw_spin_unlock(iVar2);
            return;
        }
        arg1 = "MI_TP_E: %s: panel in touch id %d hasn\'t register, return!";
    }
    else {
        arg1 = "MI_TP_E: %s: touch id %d hasn\'t select, return!";
    }
    sym.xiaomi_touch_printf(uVar7,arg1,0x8002120,param_1);
    return;
}


// ===== sym.get_xiaomi_touch_class.cfi_jt @ 0x08004650 (size 8) =====

ulong sym.get_xiaomi_touch_class.cfi_jt(void)

{
    return *0x8006000;
}


// ===== sym.xiaomi_touch_mievent_report_int.cfi_jt @ 0x08004658 (size 8) =====

void sym.xiaomi_touch_mievent_report_int.cfi_jt
               (ulong param_1,uint32_t param_2,int param_3,ulong param_4,ulong param_5,ulong param_6)

{
    int64_t iVar1;
    uint64_t arg3;
    ulong noname_0;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg3 = param_2;
    sym.xiaomi_touch_printf(param_1,0x80012de,0x8000f5a,arg3);
    iVar1 = cdev_tevent_alloc(param_2);
    if (iVar1 == 0) {
        sym.xiaomi_touch_printf(noname_0,0x8001c4a,0x8000f5a,arg3);
    }
    else {
        cdev_tevent_add_int(iVar1,"panel_id",param_3);
        cdev_tevent_add_str(iVar1,"fault_name",param_4);
        cdev_tevent_add_str(iVar1,"vendor_name",param_5);
        cdev_tevent_add_int(iVar1,"error_code",param_6);
        cdev_tevent_write(iVar1);
        cdev_tevent_destroy(iVar1);
    }
    return;
}


// ===== sym.event_show.9d8770af7b3671e63c35d9718c8d6b6b.cfi_jt @ 0x08004660 (size 8) =====

ulong sym.event_show.9d8770af7b3671e63c35d9718c8d6b6b.cfi_jt
                (ulong param_1,int64_t param_2,ulong param_3,code *param_4)

{
    int64_t *piVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    int64_t iVar4;
    code *pcVar5;
    uint8_t *puVar6;
    ulong uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    ulong noname_0;
    ulong noname_0_00;
    ulong noname_0_01;
    ulong noname_0_02;
    ulong noname_0_03;
    ulong noname_0_04;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar10;
    ulong unaff_x30;
    ulong uStack_108;
    ushort uStack_100;
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
    code *pcStack_a8;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    uint uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_28 = *(iVar8 + 0x5e0);
    uStack_30 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    if (*(param_2 + 4) != 0) {
        rtc_time64_to_tm(*(param_2 + 8),&uStack_50);
        param_4 = uStack_40 + 1;
        seq_printf(param_1,"%d-%02d-%02d %02d:%02d:%02d.%09lu UTC Finger (%2d) %s\n",uStack_40._4_4_ + 0x76c,param_4
                   ,uStack_48._4_4_,uStack_48 & 0xffffffff,uStack_50._4_4_,uStack_50 & 0xffffffff);
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_28) {
        return 0;
    }
    puVar6 = __stack_chk_fail();
    *extraout_x18 = sym.xiaomi_touch_create_proc;
    pcStack_a8 = sym.xiaomi_touch_create_proc;
    iVar8 = sp_el0;
    iStack_b8 = *(iVar8 + 0x5e0);
    puStack_b0 = &stack0xffffffffffffffe0;
    if (puVar6 != NULL) {
        uVar3 = *puVar6;
        sym.xiaomi_touch_printf(iStack_b8,0x8002da6,0x8002f14,uVar3 & 0xffffffff);
        if (uVar3 < 2) {
            uStack_100 = 0;
            uStack_108 = 0;
            if (uVar3 == 1) {
                snprintf(&uStack_108,10,0x8001038,1);
            }
            uStack_c8 = 0;
            uStack_c0 = 0;
            uStack_d8 = 0;
            uStack_d0 = 0;
            uVar9 = uVar3;
            uStack_e8 = 0;
            uStack_e0 = 0;
            uStack_f8 = 0;
            uStack_f0 = 0;
            snprintf(&uStack_f8,0x40,"tp_fw_version%s",&uStack_108);
            pcVar5 = obj.proc_tp_ops;
            iVar8 = proc_create_data(&uStack_f8,0x1a4,0,obj.proc_tp_ops,puVar6);
            if (iVar8 == 0) {
                sym.xiaomi_touch_printf(noname_0_00,0x8002f64,0x800105e,pcVar5);
            }
            uVar10 = uVar9 * 0x20;
            uStack_f8 = 0;
            uStack_f0 = 0;
            *(uVar10 + 0x8006678) = iVar8;
            uStack_e8 = 0;
            uStack_e0 = 0;
            uStack_d8 = 0;
            uStack_d0 = 0;
            uStack_c8 = 0;
            uStack_c0 = 0;
            snprintf(&uStack_f8,0x40,"tp_lockdown_info%s",&uStack_108);
            pcVar5 = obj.proc_tp_ops;
            iVar8 = proc_create_data(&uStack_f8,0x1a4,0,obj.proc_tp_ops,puVar6);
            if (iVar8 == 0) {
                sym.xiaomi_touch_printf(noname_0_01,0x8002f64,0x800105e,pcVar5);
            }
            if (0x40 < (uVar9 << 5 | 8)) {
code_r0x080069d4:
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(1,0x80069d8);
                (*pcVar5)();
            }
            uStack_f8 = 0;
            uStack_f0 = 0;
            *(sym.xiaomi_touch_create_proc + uVar9 * 0x20) = iVar8;
            uStack_e8 = 0;
            uStack_e0 = 0;
            uStack_d8 = 0;
            uStack_d0 = 0;
            uStack_c8 = 0;
            uStack_c0 = 0;
            snprintf(&uStack_f8,0x40,"tp_selftest%s",&uStack_108);
            pcVar5 = obj.proc_tp_ops;
            iVar8 = proc_create_data(&uStack_f8,0x1a4,0,obj.proc_tp_ops,puVar6);
            if (iVar8 == 0) {
                sym.xiaomi_touch_printf(noname_0_02,0x8002f64,0x800105e,pcVar5);
            }
            if (0x40 < (uVar10 | 0x10)) goto code_r0x080069d4;
            uStack_f8 = 0;
            uStack_f0 = 0;
            *(uVar9 * 0x20 + 0x8006688) = iVar8;
            uStack_e8 = 0;
            uStack_e0 = 0;
            uStack_d8 = 0;
            uStack_d0 = 0;
            uStack_c8 = 0;
            uStack_c0 = 0;
            snprintf(&uStack_f8,0x40,"tp_data_dump%s",&uStack_108);
            param_4 = obj.proc_tp_ops;
            iVar8 = proc_create_data(&uStack_f8,0x1a4,0,obj.proc_tp_ops,puVar6);
            if (iVar8 == 0) {
                sym.xiaomi_touch_printf(noname_0_03,0x8002f64,0x800105e,param_4);
            }
            iVar4 = *0x8006000;
            if (0x40 < (uVar10 | 0x18)) goto code_r0x080069d4;
            *(uVar9 * 0x20 + 0x8006690) = iVar8;
            if (iVar4 == 0) {
                param_4 = reloc.event_start.9d8770af7b3671e63c35d9718c8d6b6b.cfi_jt;
                *0x8006000 = proc_create_seq_private
                                       ("last_touch_events",0x1a4,0,
                                        reloc.event_start.9d8770af7b3671e63c35d9718c8d6b6b.cfi_jt,0,0);
                if (*0x8006000 == 0) {
                    sym.xiaomi_touch_printf(noname_0_04,0x8002903,0x8002f14,param_4);
                    uVar7 = 0xffffffff;
                    goto code_r0x08006980;
                }
                memset(obj.last_touch_events,0,0x3008);
            }
            __mutex_init(uVar9 * 0x30 + 0x80066c0,"&tp_proc_mutex[touch_id]",0x80066c0);
            uVar7 = 0;
            goto code_r0x08006980;
        }
        param_4 = uVar3 & 0xffffffff;
        sym.xiaomi_touch_printf(noname_0,0x8002790,0x8002f14,param_4);
    }
    uVar7 = 0xffffffff;
code_r0x08006980:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_b8) {
        return uVar7;
    }
    uVar9 = __stack_chk_fail(uVar7);
    *extraout_x18_00 = sym.xiaomi_touch_remove_proc;
    uVar2 = uVar9 & 0xff;
    if (uVar2 < 2) {
        uVar9 = uVar9 & 0xff;
        piVar1 = uVar9 * 0x20 + 0x8006678;
        if (*piVar1 != 0) {
            sym.xiaomi_touch_printf(uVar2,0x8001498,0x8000f14,*piVar1);
            proc_remove(*piVar1);
            *piVar1 = 0;
        }
        if ((uVar9 << 5 | 8) < 0x41) {
            uVar10 = uVar9 * 0x20;
            pcVar5 = sym.xiaomi_touch_create_proc + uVar10;
            if (*pcVar5 != 0) {
                sym.xiaomi_touch_printf(uVar10 + 0x8006678,0x8001498,0x8000f14,*pcVar5);
                proc_remove(*pcVar5);
                *pcVar5 = 0;
            }
            if ((uVar10 | 0x10) < 0x41) {
                piVar1 = uVar9 * 0x20 + 0x8006688;
                if (*piVar1 != 0) {
                    sym.xiaomi_touch_printf(uVar9 * 0x20 + 0x8006678,0x8001498,0x8000f14,*piVar1);
                    proc_remove(*piVar1);
                    *piVar1 = 0;
                }
                if ((uVar10 | 0x18) < 0x41) {
                    piVar1 = uVar9 * 0x20 + 0x8006690;
                    if (*piVar1 != 0) {
                        sym.xiaomi_touch_printf(uVar9 * 0x20 + 0x8006678,0x8001498,0x8000f14,*piVar1);
                        proc_remove(*piVar1);
                        *piVar1 = 0;
                    }
                    if (*0x8006000 == 0) {
                        return 0;
                    }
                    proc_remove();
                    *0x8006000 = 0;
                    return 0;
                }
            }
        }
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(1,0x8006b58);
        (*pcVar5)();
    }
    sym.xiaomi_touch_printf(uVar2,0x8001a5a,0x8000f14,param_4);
    return 0xffffffff;
}


// ===== sym.register_touch_panel.cfi_jt @ 0x08004668 (size 8) =====

ulong sym.register_touch_panel.cfi_jt(ulong param_1,code param_2,uint16_t *param_3,int64_t param_4,int64_t param_5)

{
    uint64_t uVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint16_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    char *pcVar10;
    int iVar11;
    uint32_t uVar12;
    code *extraout_x8;
    code *pcVar13;
    int iVar14;
    ulong *in_x18;
    int64_t *piVar15;
    uint64_t uVar16;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.xiaomi_touch_printf(param_1,0x8002d8d,0x8002136,param_5);
    if (param_2 < 2) {
        pcVar13 = *0x80006e2;
        uVar3 = 1 << (param_2 & 0x1f);
        if ((uVar3 & *0x80006e2) != 0) {
            pcVar10 = "MI_TP_E: %s: touch id %d has register, stop register again!";
code_r0x08005384:
            sym.xiaomi_touch_printf(pcVar13,pcVar10,0x8002136,param_2);
            return 0xffffffff;
        }
        if (param_3 == NULL) {
            pcVar10 = "MI_TP_E: %s: param is null";
        }
        else {
            uVar16 = param_2;
            pcVar13 = uVar16 * 0x1c0 + 0x80032b8;
            *pcVar13 = param_2;
            memcpy(uVar16 * 0x1c0 + 0x80032fa,param_3,0xd6);
            if (param_4 != 0) {
                memcpy(uVar16 * 0x1c0 + 0x80033d0,param_4,0xa8);
            }
            sym.xiaomi_touch_create_proc(pcVar13);
            iVar9 = uVar16 * 0x15e8;
            memset(reloc.xiaomi_touch_probe.c75ca9bdde7c09fd6e53abbae75ed65e.cfi_jt + iVar9,0,0x15e8);
            reloc.xiaomi_touch_probe.c75ca9bdde7c09fd6e53abbae75ed65e.cfi_jt[iVar9] = param_2;
            *(iVar9 + 0x8000738) = 0;
            __mutex_init("MI_TP_E: %s: please select touch id first!" + iVar9,
                         "&xiaomi_touch_data->common_data_buf_lock",obj.register_touch_panel.__key);
            iVar14 = *(param_3 + 9) * 0x1000;
            *(reloc.xiaomi_touch_remove.c75ca9bdde7c09fd6e53abbae75ed65e.cfi_jt + iVar9) = iVar14;
            uVar7 = param_3[5];
            *(iVar9 + 0x80006f4) = uVar7;
            iVar14 = iVar14 * uVar7;
            iVar11 = *(param_3 + 0xb) << 0xc;
            *(iVar9 + 0x800070c) = *(param_3 + 0xb) << 0xc;
            uVar2 = param_3[6];
            *(iVar9 + 0x8000700) = 0;
            *(iVar9 + 0x8000710) = uVar2;
            if (iVar14 != 0) {
                iVar8 = __kmalloc(iVar14,0xdc0);
                if (((iVar8 == 0) && (iVar8 = __kmalloc(iVar14,0xdc0), iVar8 == 0)) &&
                   (iVar8 = __kmalloc(iVar14,0xdc0), iVar8 == 0)) {
                    pcVar13 = obj.pid + uVar16 * 0x15e8;
                    pcVar10 = "MI_TP_E: %s: touch id %d alloc frame data memory failed!";
                    *(uVar16 * 0x15e8 + 0x80006f8) = 0;
                    goto code_r0x08005384;
                }
                iVar5 = (iVar8 << 8) >> 8;
                uVar1 = iVar5 + 0x8000000000;
                iVar6 = uVar1 + _delayed_work_timer_fn;
                if (uVar1 >> 0x26 != 0) {
                    iVar6 = iVar5 - _default_llseek;
                }
                iVar11 = *(iVar9 + 0x800070c);
                uVar2 = *(iVar9 + 0x8000710);
                *(uVar16 * 0x15e8 + 0x80006f8) = iVar8;
                *(iVar9 + 0x8000700) = iVar6;
            }
            iVar11 = iVar11 * uVar2;
            piVar15 = uVar16 * 0x15e8 + 0x8000720;
            *piVar15 = 0;
            if (iVar11 != 0) {
                iVar9 = __kmalloc(iVar11,0xdc0);
                if (((iVar9 == 0) && (iVar9 = __kmalloc(iVar11,0xdc0), iVar9 == 0)) &&
                   (iVar9 = __kmalloc(iVar11,0xdc0), iVar9 == 0)) {
                    pcVar10 = "MI_TP_E: %s: touch id %d alloc raw data memory failed!";
                    pcVar13 = obj.pid + uVar16 * 0x15e8;
                    *(uVar16 * 0x15e8 + 0x8000718) = 0;
                    goto code_r0x08005384;
                }
                iVar6 = (iVar9 << 8) >> 8;
                uVar1 = iVar6 + 0x8000000000;
                iVar8 = uVar1 + _delayed_work_timer_fn;
                if (uVar1 >> 0x26 != 0) {
                    iVar8 = iVar6 - _default_llseek;
                }
                *(uVar16 * 0x15e8 + 0x8000718) = iVar9;
                *piVar15 = iVar8;
            }
            iVar9 = alloc_workqueue("xiaomi-touch-event-queue",0x32,1);
            pcVar13 = obj.pid + uVar16 * 0x15e8;
            *(uVar16 * 0x15e8 + 0x8001bc8) = iVar9;
            if (iVar9 != 0) {
                iVar9 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar9 = 0x30;
                }
                iVar9 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar9),0xdc0,0x27);
                if (iVar9 == 0) {
                    iVar9 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar9 = 0x30;
                    }
                    iVar9 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar9),0xdc0,0x27);
                    if (iVar9 == 0) {
                        iVar9 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar9 = 0x30;
                        }
                        iVar9 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar9),0xdc0,0x27);
                        if (iVar9 == 0) {
                            pcVar10 = "MI_TP_E: %s: alloc poll data memory is failed!";
                            pcVar13 = obj.pid + uVar16 * 0x15e8;
                            *(uVar16 * 0x15e8 + 0x8001bc0) = 0;
                            goto code_r0x08005350;
                        }
                    }
                }
                iVar8 = uVar16 * 0x15e8;
                *(iVar8 + 0x8001bc0) = iVar9;
                *(iVar8 + 0x8000728) = iVar8 + 0x8000728;
                *(iVar8 + 0x8000730) = iVar8 + 0x8000728;
                if (param_4 != 0) {
                    pcVar13 = *(param_4 + 0x10);
                    if (pcVar13 != NULL) {
                        __cfi_slowpath_diag(0x913123bfd37872b,pcVar13,0x8000bb0);
                        (*pcVar13)(param_3 + 0xd);
                    }
                    sym.xiaomi_touch_printf(*(param_3 + 9),0x800226a,0x8002136,*param_3);
                }
                uVar12 = *0x80006e2;
                uVar4 = uVar12 | uVar3;
                *0x80006e2 = uVar4;
                sym.xiaomi_touch_printf(uVar4,0x800251f,0x8002136,uVar12 | uVar3 & 0xff);
                return 0;
            }
            pcVar10 = "MI_TP_E: %s: ERROR: Cannot create work thread";
        }
    }
    else {
        pcVar10 = "MI_TP_E: %s: touch id error, please check it!";
        pcVar13 = extraout_x8;
    }
code_r0x08005350:
    sym.xiaomi_touch_printf(pcVar13,pcVar10,0x8002136,param_5);
    return 0xffffffff;
}


// ===== sym.event_start.9d8770af7b3671e63c35d9718c8d6b6b.cfi_jt @ 0x08004670 (size 8) =====

int sym.event_start.9d8770af7b3671e63c35d9718c8d6b6b.cfi_jt(ulong param_1,int64_t *param_2)

{
    int iVar1;
    
    iVar1 = 0;
    if (*param_2 < 0x200) {
        iVar1 = (_obj.last_touch_events + *param_2 & 0x1ffU) * 0x18 + 0x8003678;
    }
    return iVar1;
}


// ===== sym.nl_data_ready.cfi_jt @ 0x08004678 (size 8) =====

void sym.nl_data_ready.cfi_jt(int64_t param_1)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    uint64_t noname_0;
    uint64_t extraout_x8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = param_1 + 0xe4;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar2 = *puVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = uVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (uVar2 == 0) {
        uVar5 = 2;
    }
    else {
        if (-1 < (uVar2 + 1 | uVar2)) goto code_r0x08004a60;
        uVar5 = 1;
    }
    refcount_warn_saturate(puVar1,uVar5);
code_r0x08004a60:
    noname_0 = *(param_1 + 0x70);
    if (0xf < *(param_1 + 0x70)) {
        _segment.ehdr = *(*(param_1 + 0xd8) + 0xc);
        kfree_skb(param_1);
        noname_0 = extraout_x8;
    }
    sym.xiaomi_touch_printf(noname_0,0x800264a,0x8002c6e,_segment.ehdr);
    return;
}


// ===== sym.event_stop.cfi_jt @ 0x08004680 (size 8) =====

void sym.event_stop.cfi_jt(void)

{
    return;
}


// ===== sym.event_next.9d8770af7b3671e63c35d9718c8d6b6b.cfi_jt @ 0x08004688 (size 8) =====

int sym.event_next.9d8770af7b3671e63c35d9718c8d6b6b.cfi_jt(ulong param_1,ulong param_2,int64_t *param_3)

{
    int64_t iVar1;
    int iVar2;
    
    iVar1 = *param_3 + 1;
    *param_3 = iVar1;
    iVar2 = 0;
    if (iVar1 < 0x200) {
        iVar2 = (_obj.last_touch_events + iVar1 & 0x1ffU) * 0x18 + 0x8003678;
    }
    return iVar2;
}


// ===== sym.xiaomi_touch_dev_poll.71500f2f3877fbb331f33bdee87fabae.cfi_jt @ 0x08004690 (size 8) =====

uint64_t sym.xiaomi_touch_dev_poll.71500f2f3877fbb331f33bdee87fabae.cfi_jt(int64_t param_1,ulong *param_2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    ulong *in_x18;
    uint64_t arg3;
    code *pcVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_1 + 0xd8);
    iVar2 = sym.get_xiaomi_touch_data(*(iVar5 + 0x11));
    arg3 = 0;
    if (iVar2 != 0) {
        if (((param_2 != NULL) && (iVar5 + 0x18 != 0)) && (pcVar4 = *param_2, pcVar4 != NULL)) {
            __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar4,0x8000c90);
            (*pcVar4)(param_1,iVar5 + 0x18,param_2);
        }
        uVar3 = *(iVar5 + 0x30) != *(iVar2 + 0x54);
        uVar1 = uVar3 << 6;
        if (*(iVar5 + 0x34) != *(iVar2 + 4)) {
            uVar1 = uVar3 << 6 | 2;
        }
        uVar3 = uVar1;
        if (*(iVar5 + 0x38) != *(iVar2 + 0x20)) {
            uVar3 = uVar1 | 0x80;
        }
        arg3 = uVar3;
        sym.xiaomi_touch_printf(uVar1,0x80010b1,0x800203e,arg3);
    }
    return arg3;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08004698 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.xiaomi_touch_probe.c75ca9bdde7c09fd6e53abbae75ed65e.cfi_jt);
    return;
}


// ===== sym.xiaomi_touch_remove.c75ca9bdde7c09fd6e53abbae75ed65e.cfi_jt @ 0x080046a0 (size 8) =====

ulong sym.xiaomi_touch_remove.c75ca9bdde7c09fd6e53abbae75ed65e.cfi_jt(ulong param_1)

{
    int64_t in_x3;
    ulong extraout_x8;
    ulong extraout_x8_00;
    ulong noname_0;
    ulong noname_0_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.xiaomi_touch_printf(param_1,0x8002d8d,0x8001b29,in_x3);
    noname_0 = extraout_x8;
    if (_segment.ehdr != 0) {
        netlink_kernel_release();
        _segment.ehdr = 0;
        noname_0 = extraout_x8_00;
    }
    sym.xiaomi_touch_printf(noname_0,0x8002eca,0x80027b4,in_x3);
    misc_deregister(obj.misc_dev.llvm.16834981253627934478);
    sym.xiaomi_touch_sys_remove();
    memset(obj.pid,0,0x2f58);
    sym.xiaomi_touch_printf(noname_0_00,0x8002457,0x8001b29,in_x3);
    return 0;
}


// ===== sym.xiaomi_touch_probe.c75ca9bdde7c09fd6e53abbae75ed65e.cfi_jt @ 0x080046a8 (size 8) =====

ulong sym.xiaomi_touch_probe.c75ca9bdde7c09fd6e53abbae75ed65e.cfi_jt(void)

{
    int64_t iVar1;
    int64_t in_x3;
    ulong *arg3;
    ulong uVar2;
    ulong extraout_x8;
    ulong noname_0;
    ulong extraout_x8_00;
    ulong extraout_x8_01;
    ulong noname_0_00;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_58;
    code *pcStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    sym.xiaomi_touch_printf(iStack_28,0x8002d8d,0x8001f23,in_x3);
    memset(obj.pid,0,0x2f58);
    sym.xiaomi_touch_sys_init();
    sym.xiaomi_touch_operation_init(0x80006e0);
    arg3 = &uStack_58;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    pcStack_50 = sym.nl_data_ready.cfi_jt;
    _segment.ehdr = __netlink_kernel_create(init_net,0x18,obj.__this_module);
    uVar2 = 0x8000000;
    if (_segment.ehdr == 0) {
        sym.xiaomi_touch_printf(0x8000000,0x8001ae5,0x8000f4d,arg3);
        uVar2 = extraout_x8;
    }
    sym.xiaomi_touch_printf(uVar2,0x8002457,0x8001f23,arg3);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return 0;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.xiaomi_touch_remove;
    sym.xiaomi_touch_printf(noname_0,0x8002d8d,0x8001b29,arg3);
    uVar2 = extraout_x8_00;
    if (_segment.ehdr != 0) {
        netlink_kernel_release();
        _segment.ehdr = 0;
        uVar2 = extraout_x8_01;
    }
    sym.xiaomi_touch_printf(uVar2,0x8002eca,0x80027b4,arg3);
    misc_deregister(obj.misc_dev.llvm.16834981253627934478);
    sym.xiaomi_touch_sys_remove();
    memset(obj.pid,0,0x2f58);
    sym.xiaomi_touch_printf(noname_0_00,0x8002457,0x8001b29,arg3);
    return 0;
}


// ===== sym.no_llseek.cfi_jt @ 0x080046b0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.no_llseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.default_llseek.cfi_jt @ 0x080046b8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.default_llseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.last_touch_events_collect.cfi_jt @ 0x080046c0 (size 8) =====

void sym.last_touch_events_collect.cfi_jt(uint32_t param_1,int param_2)

{
    int64_t iVar1;
    uint32_t uVar2;
    code *pcVar3;
    uint64_t uVar4;
    uint uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *0x8003000;
    if (param_1 < 10) {
        if (9 < param_1) {
code_r0x08006528:
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x5512,0x800652c);
            (*pcVar3)();
        }
        if (*(obj.last_touch_events_collect.event_state + param_1 * 4) != param_2) {
            uVar4 = *0x8003000;
            *(obj.last_touch_events_collect.event_state + param_1 * 4) = param_2;
            if (0x1ff < uVar2) goto code_r0x08006528;
            iVar1 = uVar4 * 0x18;
            uVar5 = 1;
            if (param_2 == 0) {
                uVar5 = 2;
            }
            *(iVar1 + 0x8003678) = param_1;
            *(iVar1 + 0x800367c) = uVar5;
            ktime_get_real_ts64(iVar1 + 0x8003680);
            _obj.last_touch_events = _obj.last_touch_events + 1 & 0x1ff;
        }
    }
    return;
}


// ===== sym.xiaomi_touch_dev_release.71500f2f3877fbb331f33bdee87fabae.cfi_jt @ 0x080046c8 (size 8) =====

ulong sym.xiaomi_touch_dev_release.71500f2f3877fbb331f33bdee87fabae.cfi_jt(ulong param_1,int64_t param_2)

{
    int64_t iVar1;
    int64_t *piVar2;
    int16_t *noname_0;
    int64_t iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t *arg3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg3 = *(param_2 + 0xd8);
    iVar3 = sym.get_xiaomi_touch_data(*(arg3 + 0x11));
    if (iVar3 != 0) {
        _raw_spin_lock(iVar3 + 0x50);
        uVar4 = __list_del_entry_valid(arg3);
        if ((uVar4 & 1) != 0) {
            iVar1 = *arg3;
            piVar2 = arg3[1];
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        arg3[1] = -0x2152fffffffffede;
        _raw_spin_unlock(iVar3 + 0x50);
        synchronize_rcu();
    }
    noname_0 = *0x8003000;
    **0x8003000 = **0x8003000 + -1;
    sym.xiaomi_touch_printf(noname_0,0x80021e9,0x800182d,arg3);
    kfree(arg3);
    return 0;
}


// ===== sym.proc_release.9d8770af7b3671e63c35d9718c8d6b6b.cfi_jt @ 0x080046d0 (size 8) =====

ulong sym.proc_release.9d8770af7b3671e63c35d9718c8d6b6b.cfi_jt
                (ulong param_1,int64_t param_2,ulong param_3,int64_t param_4)

{
    code *pcVar1;
    int64_t noname_0;
    ulong *in_x18;
    uint64_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = **(param_2 + 0xd8);
    if (1 < uVar2) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5512,0x800756c);
        (*pcVar1)();
    }
    uVar3 = uVar2 * 8;
    if (uVar3 < 0x11) {
        iVar4 = *(param_2 + 0x18);
        noname_0 = *(uVar2 * 8 + 0x8006720);
        if (noname_0 != 0) {
            sym.xiaomi_touch_printf(noname_0,0x8001074,0x80019b0,param_4);
            kvfree(*(uVar3 + 0x8006720));
            *(uVar3 + 0x8006720) = 0;
        }
        *(uVar2 * 8 + 0x8006730) = 0;
        sym.xiaomi_touch_printf(0x8006730,0x8002dc2,0x80019b0,iVar4 + 0x38);
        mutex_unlock(uVar2 * 0x30 + 0x80066c0);
        return 0;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(1,0x8007570);
    (*pcVar1)();
}


// ===== sym.xiaomi_touch_dev_open.71500f2f3877fbb331f33bdee87fabae.cfi_jt @ 0x080046d8 (size 8) =====

ulong sym.xiaomi_touch_dev_open.71500f2f3877fbb331f33bdee87fabae.cfi_jt
                (ulong param_1,int64_t param_2,ulong param_3,int64_t param_4)

{
    int16_t *noname_0;
    int64_t arg3;
    ulong uVar1;
    ulong noname_0_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg3 = sym.kzalloc_retry(0x40,3);
    if (arg3 == 0) {
        sym.xiaomi_touch_printf(noname_0_00,0x80016dd,0x8000fc0,param_4);
        uVar1 = 0xffffffff;
    }
    else {
        **0x8003000 = **0x8003000 + 1;
        *(arg3 + 0x11) = 0xff;
        __init_waitqueue_head(arg3 + 0x18,"&client_private_data->poll_wait_queue_head",0x8006788);
        noname_0 = *0x8003000;
        *(param_2 + 0xd8) = arg3;
        sym.xiaomi_touch_printf(noname_0,0x8001402,0x8000fc0,arg3);
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.proc_open.9d8770af7b3671e63c35d9718c8d6b6b.cfi_jt @ 0x080046e0 (size 8) =====

ulong sym.proc_open.9d8770af7b3671e63c35d9718c8d6b6b.cfi_jt
                (ulong param_1,int64_t param_2,ulong param_3,int64_t param_4)

{
    int64_t arg3;
    uint8_t uVar1;
    code *pcVar2;
    int iVar3;
    uint8_t *puVar4;
    int64_t iVar5;
    char *arg1;
    ulong noname_0;
    ulong *in_x18;
    uint64_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar4 = PDE_DATA();
    uVar1 = *puVar4;
    uVar6 = uVar1;
    if (uVar6 < 3) {
        arg3 = *(param_2 + 0x18) + 0x38;
        mutex_lock(uVar6 * 0x30 + 0x80066c0);
        *(param_2 + 0xd8) = puVar4;
        iVar3 = strncmp("tp_data_dump",arg3,0xc);
        if (iVar3 == 0) {
            sym.xiaomi_touch_printf(noname_0,0x8001169,0x8002469,param_4);
            iVar5 = sym.kvzalloc_retry(0x3000,3);
            if (1 < uVar1) goto code_r0x08006cbc;
            if (0x10 < uVar6 * 8) goto code_r0x08006cc0;
            *(uVar6 * 8 + 0x8006720) = iVar5;
            if (iVar5 != 0) goto code_r0x08006c58;
            arg1 = "MI_TP_E: %s: alloc tp proc dump memory error";
        }
        else {
            sym.xiaomi_touch_printf(noname_0,0x8001ce2,0x8002469,param_4);
            iVar5 = sym.kvzalloc_retry(0x100,3);
            if (1 < uVar1) goto code_r0x08006cbc;
            if (0x10 < uVar6 * 8) {
code_r0x08006cc0:
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(1,0x8006cc4);
                (*pcVar2)();
            }
            *(uVar6 * 8 + 0x8006720) = iVar5;
            if (iVar5 != 0) {
code_r0x08006c58:
                *(uVar6 * 8 + 0x8006730) = 0;
                sym.xiaomi_touch_printf(0x8006730,0x800185b,0x8002469,arg3);
                return 0;
            }
            arg1 = "MI_TP_E: %s: alloc tp proc data memory error";
        }
        sym.xiaomi_touch_printf(0x8006720,arg1,0x8002469,param_4);
        return 0xffffffff;
    }
code_r0x08006cbc:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8006cc0);
    (*pcVar2)();
}


// ===== sym.proc_tp_write.9d8770af7b3671e63c35d9718c8d6b6b.cfi_jt @ 0x080046e8 (size 8) =====

uint64_t sym.proc_tp_write.9d8770af7b3671e63c35d9718c8d6b6b.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    int iVar1;
    int64_t iVar2;
    char *arg1;
    uint64_t arg3;
    ulong noname_0;
    ulong extraout_x8;
    ulong noname_0_00;
    ulong noname_0_01;
    ulong noname_0_02;
    ulong noname_0_03;
    ulong extraout_x8_00;
    ulong uVar3;
    ulong *in_x18;
    code *pcVar4;
    uint64_t uVar5;
    uint8_t *arg1_00;
    uint8_t *puVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar6 = *(param_1 + 0xd8);
    if (puVar6 != NULL) {
        uVar5 = *(param_1 + 0x18) + 0x38;
        arg3 = uVar5;
        sym.xiaomi_touch_printf(*(param_1 + 0x18),0x8002f93,0x8002a2f,uVar5);
        iVar1 = strncmp("tp_fw_version",uVar5,10);
        if (iVar1 == 0) {
            arg1_00 = puVar6 + 1;
            arg1_00[0] = 0;
            arg1_00[1] = 0;
            arg1_00[2] = 0;
            arg1_00[3] = 0;
            arg1_00[4] = 0;
            arg1_00[5] = 0;
            arg1_00[6] = 0;
            arg1_00[7] = 0;
            puVar6[0x31] = 0;
            puVar6[0x32] = 0;
            puVar6[0x33] = 0;
            puVar6[0x34] = 0;
            puVar6[0x35] = 0;
            puVar6[0x36] = 0;
            puVar6[0x37] = 0;
            puVar6[0x38] = 0;
            puVar6[0x39] = 0;
            puVar6[0x3a] = 0;
            puVar6[0x3b] = 0;
            puVar6[0x3c] = 0;
            puVar6[0x3d] = 0;
            puVar6[0x3e] = 0;
            puVar6[0x3f] = 0;
            puVar6[0x40] = 0;
            puVar6[0x21] = 0;
            puVar6[0x22] = 0;
            puVar6[0x23] = 0;
            puVar6[0x24] = 0;
            puVar6[0x25] = 0;
            puVar6[0x26] = 0;
            puVar6[0x27] = 0;
            puVar6[0x28] = 0;
            puVar6[0x29] = 0;
            puVar6[0x2a] = 0;
            puVar6[0x2b] = 0;
            puVar6[0x2c] = 0;
            puVar6[0x2d] = 0;
            puVar6[0x2e] = 0;
            puVar6[0x2f] = 0;
            puVar6[0x30] = 0;
            puVar6[0x11] = 0;
            puVar6[0x12] = 0;
            puVar6[0x13] = 0;
            puVar6[0x14] = 0;
            puVar6[0x15] = 0;
            puVar6[0x16] = 0;
            puVar6[0x17] = 0;
            puVar6[0x18] = 0;
            puVar6[0x19] = 0;
            puVar6[0x1a] = 0;
            puVar6[0x1b] = 0;
            puVar6[0x1c] = 0;
            puVar6[0x1d] = 0;
            puVar6[0x1e] = 0;
            puVar6[0x1f] = 0;
            puVar6[0x20] = 0;
            puVar6[9] = 0;
            puVar6[10] = 0;
            puVar6[0xb] = 0;
            puVar6[0xc] = 0;
            puVar6[0xd] = 0;
            puVar6[0xe] = 0;
            puVar6[0xf] = 0;
            puVar6[0x10] = 0;
            uVar5 = param_3;
            if (0x3f < param_3) {
                arg3 = param_3;
                sym.xiaomi_touch_printf(noname_0,0x8002fbd,0x8002a2f,param_3);
                uVar5 = 0x3f;
            }
            __check_object_size(arg1_00,uVar5,0);
            iVar2 = sym._copy_from_user(arg1_00,param_2,uVar5);
            if (iVar2 == 0) {
                sym.xiaomi_touch_printf(noname_0_00,0x800201f,0x8002a2f,arg1_00);
                sym.xiaomi_touch_printf(noname_0_01,0x800132c,0x8002a2f,puVar6 + 0xd7);
                sym.xiaomi_touch_printf(noname_0_02,0x80018cb,0x8002a2f,puVar6 + 0x97);
                sym.xiaomi_touch_printf(noname_0_03,0x800118d,0x8002a2f,0x800166e);
                return param_3;
            }
            arg1 = "MI_TP_E: %s: copy hal version to buf has error";
            uVar3 = noname_0_00;
        }
        else {
            iVar1 = strncmp("tp_selftest",uVar5,0xb);
            if (iVar1 != 0) {
                return param_3;
            }
            *0x8006778 = 0;
            *0x8006780 = 0;
            *0x8006768 = 0;
            *0x8006770 = 0;
            *0x8006758 = 0;
            *0x8006760 = 0;
            _obj.proc_tp_write.self_test_cmd = 0;
            *0x8006750 = 0;
            uVar5 = param_3;
            if (0x3f < param_3) {
                arg3 = param_3;
                sym.xiaomi_touch_printf(obj.proc_tp_write.self_test_cmd,0x80011b5,0x8002a2f,param_3);
                uVar5 = 0x3f;
            }
            __check_object_size(obj.proc_tp_write.self_test_cmd,uVar5,0);
            iVar2 = sym._copy_from_user(0x8006748,param_2,uVar5);
            if (iVar2 == 0) {
                pcVar4 = *(puVar6 + 0x118);
                uVar3 = extraout_x8;
                if (pcVar4 != NULL) {
                    __cfi_slowpath_diag(0x420a964126e89b4e,pcVar4,0x8000c70);
                    if (2 < *puVar6) {
    //WARNING: Does not return
                        pcVar4 = SoftwareBreakpoint(0x5512,0x80074a4);
                        (*pcVar4)();
                    }
                    (*pcVar4)(obj.proc_tp_write.self_test_cmd,obj.self_test_result + *puVar6 * 4);
                    uVar3 = extraout_x8_00;
                }
                sym.xiaomi_touch_printf(uVar3,0x8001f46,0x8002a2f,0x8006748);
                return param_3;
            }
            arg1 = "MI_TP_E: %s: copy self test has error";
            uVar3 = extraout_x8;
        }
        sym.xiaomi_touch_printf(uVar3,arg1,0x8002a2f,arg3);
    }
    return 0xfffffffffffffff2;
}


// ===== sym.xiaomi_touch_dev_write.71500f2f3877fbb331f33bdee87fabae.cfi_jt @ 0x080046f0 (size 8) =====

ulong sym.xiaomi_touch_dev_write.71500f2f3877fbb331f33bdee87fabae.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    return param_3;
}


// ===== sym.xiaomi_touch_resume_work.c75ca9bdde7c09fd6e53abbae75ed65e.cfi_jt @ 0x080046f8 (size 8) =====

void sym.xiaomi_touch_resume_work.c75ca9bdde7c09fd6e53abbae75ed65e.cfi_jt(int64_t param_1)

{
    uint8_t uVar1;
    uint8_t uVar2;
    int64_t iVar3;
    char *arg1;
    char *pcVar4;
    uint64_t arg3;
    int64_t iVar5;
    ulong noname_0;
    uint64_t extraout_x8;
    uint64_t uVar6;
    ulong noname_0_00;
    ulong noname_0_01;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar7;
    uint64_t arg3_00;
    ulong unaff_x30;
    uchar auVar8 [12];
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    ulong uStack_40;
    ulong uStack_38;
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    uStack_38 = 0;
    iStack_30 = 0;
    iStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    ktime_get_real_ts64(&uStack_38);
    time64_to_tm(uStack_38,0,&uStack_60);
    iVar5 = iStack_48 + 0x76c;
    pcVar4 = "xiaomi_touch_resume_work";
    arg3 = 0x8002a01;
    sym.xiaomi_touch_printf(iStack_30 / 1000,0x8001edb,0x8001150,0x8002a01);
    if (param_1 + -0x1518 != NULL) {
        uVar1 = *(param_1 + -0x1518);
        pcVar4 = "xiaomi_touch_resume_work";
        arg3 = uVar1 & 0xffffffff;
        sym.xiaomi_touch_printf(noname_0,0x800214b,0x8001150,arg3);
        if (uVar1 < 2) {
            uVar2 = *0x80006e2 >> (uVar1 & 0x1f);
            uVar6 = uVar2;
            if ((uVar2 & 1) != 0) {
                if (uVar1 * 0x1c0 != -0x80032b8) {
                    pcVar7 = *(uVar1 * 0x1c0 + 0x8003468);
                    if (pcVar7 != NULL) {
                        pcVar4 = 0x8000bf0;
                        __cfi_slowpath_diag(0x16160375c26fc5,pcVar7,0x8000bf0);
                        (*pcVar7)(1);
                    }
                }
                goto code_r0x08005f84;
            }
            arg1 = "MI_TP_E: %s: panel in touch id %d hasn\'t register, return!";
        }
        else {
            arg1 = "MI_TP_E: %s: touch id %d hasn\'t select, return!";
            uVar6 = extraout_x8;
        }
        pcVar4 = "get_xiaomi_touch_driver_param";
        arg3 = uVar1 & 0xffffffff;
        sym.xiaomi_touch_printf(uVar6,arg1,0x8001707,arg3);
    }
code_r0x08005f84:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return;
    }
    auVar8 = __stack_chk_fail();
    *extraout_x18 = sym.xiaomi_touch_mievent_report_int;
    arg3_00 = auVar8._0_8_ & 0xffffffff;
    uVar6 = arg3_00;
    sym.xiaomi_touch_printf(noname_0_00,0x80012de,0x8000f5a,arg3_00);
    iVar3 = cdev_tevent_alloc(arg3_00);
    if (iVar3 == 0) {
        sym.xiaomi_touch_printf(noname_0_01,0x8001c4a,0x8000f5a,uVar6);
    }
    else {
        cdev_tevent_add_int(iVar3,"panel_id",auVar8._8_4_);
        cdev_tevent_add_str(iVar3,"fault_name",pcVar4);
        cdev_tevent_add_str(iVar3,"vendor_name",arg3);
        cdev_tevent_add_int(iVar3,"error_code",iVar5);
        cdev_tevent_write(iVar3);
        cdev_tevent_destroy(iVar3);
    }
    return;
}


// ===== sym.xiaomi_register_panel_notifier_work.c75ca9bdde7c09fd6e53abbae75ed65e.cfi_jt @ 0x08004700 (size 8) =====

void sym.xiaomi_register_panel_notifier_work.c75ca9bdde7c09fd6e53abbae75ed65e.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,code *param_4)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    char *arg1;
    ulong extraout_x8;
    ulong extraout_x8_00;
    ulong extraout_x8_01;
    ulong uVar4;
    ulong *in_x18;
    int iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.xiaomi_touch_printf(0xffffffffffffeab8,0x80015d1,0x8001754,param_4);
    iVar1 = of_count_phandle_with_args(*(*(param_1 + 0x88) + 0x2f0),"panel",0);
    uVar4 = extraout_x8;
    if (0 < iVar1) {
        iVar5 = 0;
        do {
            of_parse_phandle(*(*(param_1 + 0x88) + 0x2f0),"panel",iVar5);
            uVar2 = of_drm_find_panel();
            uVar4 = extraout_x8_00;
            if (uVar2 < 0xfffffffffffff001) {
                if (uVar2 != 0) {
                    param_4 = sym.xiaomi_drm_panel_notifier_callback.c75ca9bdde7c09fd6e53abbae75ed65e.cfi_jt;
                    iVar3 = panel_event_notifier_register
                                      (*(param_1 + 0x98),*(param_1 + 0x9c),uVar2,
                                       sym.xiaomi_drm_panel_notifier_callback.c75ca9bdde7c09fd6e53abbae75ed65e.cfi_jt,
                                       param_1 + -0x1548);
                    *(param_1 + 0x90) = iVar3;
                    if (iVar3 != 0) {
                        return;
                    }
                    arg1 = "MI_TP_E: %s: Failed to register for panel events";
                    uVar4 = extraout_x8_01;
                    goto code_r0x08005c3c;
                }
                break;
            }
            iVar5 = iVar5 + 1;
        } while (iVar1 != iVar5);
    }
    sym.xiaomi_touch_printf(uVar4,0x80015fc,0x8001754,param_4);
    uVar4 = 0x8003000;
    if (*0x8003000 < 5) {
        *0x8003000 = *0x8003000 + 1;
        queue_delayed_work_on(0x20,___alloc_skb,param_1,0x4e2);
    }
    else {
        arg1 = "MI_TP_E: %s: Failed to register panel notifier, not try";
        *0x8003000 = *0x8003000 + 1;
code_r0x08005c3c:
        sym.xiaomi_touch_printf(uVar4,arg1,0x8001754,param_4);
    }
    return;
}


// ===== sym.xiaomi_touch_suspend_work.c75ca9bdde7c09fd6e53abbae75ed65e.cfi_jt @ 0x08004708 (size 8) =====

void sym.xiaomi_touch_suspend_work.c75ca9bdde7c09fd6e53abbae75ed65e.cfi_jt(int64_t param_1)

{
    uint8_t uVar1;
    uint8_t uVar2;
    int64_t iVar3;
    char *pcVar4;
    char *arg1;
    uint64_t uVar5;
    int64_t iVar6;
    ulong noname_0;
    uint64_t extraout_x8;
    ulong noname_0_00;
    uint64_t extraout_x8_00;
    uint64_t uVar7;
    ulong noname_0_01;
    ulong noname_0_02;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar8;
    uint64_t arg3;
    ulong unaff_x30;
    uchar auVar9 [12];
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    int64_t iStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    int64_t iStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    code *pcStack_90;
    uint uStack_80;
    uint uStack_78;
    int64_t iStack_70;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
    uStack_38 = 0;
    iStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    ktime_get_real_ts64(&uStack_38);
    time64_to_tm(uStack_38,0,&uStack_60);
    iStack_70 = iStack_30 / 1000;
    uStack_78 = uStack_60;
    uStack_80 = uStack_60._4_4_;
    sym.xiaomi_touch_printf(iStack_70,0x8001edb,0x8001b0f,0x8002a01);
    pcVar8 = NULL;
    if (param_1 + -0x14e8 != NULL) {
        uVar1 = *(param_1 + -0x14e8);
        pcVar8 = uVar1;
        sym.xiaomi_touch_printf(noname_0,0x800214b,0x8001b0f,pcVar8 & 0xffffffff);
        if (uVar1 < 2) {
            uVar2 = *0x80006e2 >> (uVar1 & 0x1f);
            uVar5 = uVar2;
            if ((uVar2 & 1) != 0) {
                if (uVar1 * 0x1c0 != -0x80032b8) {
                    pcVar8 = *(uVar1 * 0x1c0 + 0x8003468);
                    if (pcVar8 != NULL) {
                        __cfi_slowpath_diag(0x16160375c26fc5,pcVar8,0x8000bd0);
                        (*pcVar8)(0);
                    }
                }
                goto code_r0x08005ddc;
            }
            pcVar4 = "MI_TP_E: %s: panel in touch id %d hasn\'t register, return!";
        }
        else {
            pcVar4 = "MI_TP_E: %s: touch id %d hasn\'t select, return!";
            uVar5 = extraout_x8;
        }
        sym.xiaomi_touch_printf(uVar5,pcVar4,0x8001707,pcVar8 & 0xffffffff);
    }
code_r0x08005ddc:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_28) {
        return;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.xiaomi_touch_resume_work;
    pcStack_98 = sym.xiaomi_touch_resume_work;
    iVar6 = sp_el0;
    iStack_a8 = *(iVar6 + 0x5e0);
    uStack_b8 = 0;
    iStack_b0 = 0;
    iStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e0 = 0;
    puStack_a0 = &stack0xffffffffffffffe0;
    pcStack_90 = pcVar8;
    ktime_get_real_ts64(&uStack_b8);
    time64_to_tm(uStack_b8,0,&uStack_e0);
    iVar6 = iStack_c8 + 0x76c;
    pcVar4 = "xiaomi_touch_resume_work";
    uVar5 = 0x8002a01;
    sym.xiaomi_touch_printf(iStack_b0 / 1000,0x8001edb,0x8001150,0x8002a01);
    if (iVar3 + -0x1518 != NULL) {
        uVar1 = *(iVar3 + -0x1518);
        pcVar4 = "xiaomi_touch_resume_work";
        uVar5 = uVar1 & 0xffffffff;
        sym.xiaomi_touch_printf(noname_0_00,0x800214b,0x8001150,uVar5);
        if (uVar1 < 2) {
            uVar2 = *0x80006e2 >> (uVar1 & 0x1f);
            uVar7 = uVar2;
            if ((uVar2 & 1) != 0) {
                if (uVar1 * 0x1c0 != -0x80032b8) {
                    pcVar8 = *(uVar1 * 0x1c0 + 0x8003468);
                    if (pcVar8 != NULL) {
                        pcVar4 = 0x8000bf0;
                        __cfi_slowpath_diag(0x16160375c26fc5,pcVar8,0x8000bf0);
                        (*pcVar8)(1);
                    }
                }
                goto code_r0x08005f84;
            }
            arg1 = "MI_TP_E: %s: panel in touch id %d hasn\'t register, return!";
        }
        else {
            arg1 = "MI_TP_E: %s: touch id %d hasn\'t select, return!";
            uVar7 = extraout_x8_00;
        }
        pcVar4 = "get_xiaomi_touch_driver_param";
        uVar5 = uVar1 & 0xffffffff;
        sym.xiaomi_touch_printf(uVar7,arg1,0x8001707,uVar5);
    }
code_r0x08005f84:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_a8) {
        return;
    }
    auVar9 = __stack_chk_fail();
    *extraout_x18_00 = sym.xiaomi_touch_mievent_report_int;
    arg3 = auVar9._0_8_ & 0xffffffff;
    uVar7 = arg3;
    sym.xiaomi_touch_printf(noname_0_01,0x80012de,0x8000f5a,arg3);
    iVar3 = cdev_tevent_alloc(arg3);
    if (iVar3 == 0) {
        sym.xiaomi_touch_printf(noname_0_02,0x8001c4a,0x8000f5a,uVar7);
    }
    else {
        cdev_tevent_add_int(iVar3,"panel_id",auVar9._8_4_);
        cdev_tevent_add_str(iVar3,"fault_name",pcVar4);
        cdev_tevent_add_str(iVar3,"vendor_name",uVar5);
        cdev_tevent_add_int(iVar3,"error_code",iVar6);
        cdev_tevent_write(iVar3);
        cdev_tevent_destroy(iVar3);
    }
    return;
}


// ===== sym.xiaomi_touch_dev_mmap.71500f2f3877fbb331f33bdee87fabae.cfi_jt @ 0x08004710 (size 8) =====

ulong sym.xiaomi_touch_dev_mmap.71500f2f3877fbb331f33bdee87fabae.cfi_jt
                (int64_t param_1,int64_t *param_2,ulong param_3,uint64_t param_4)

{
    int64_t iVar1;
    int64_t iVar2;
    uint8_t uVar3;
    int iVar4;
    int64_t iVar5;
    char *arg1;
    uint64_t noname_0;
    uint64_t uVar6;
    uint64_t uVar7;
    ulong noname_0_00;
    ulong *in_x18;
    int64_t iVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar9 = *(param_1 + 0xd8);
    iVar1 = *param_2;
    iVar2 = param_2[1];
    iVar8 = param_2[0x13];
    iVar5 = sym.get_xiaomi_touch_data(*(iVar9 + 0x11));
    if (iVar5 == 0) {
        arg1 = "MI_TP_E: %s: please select touch id first!";
        uVar6 = noname_0;
        goto code_r0x08008884;
    }
    param_4 = *(iVar9 + 0x10);
    sym.xiaomi_touch_printf(noname_0,0x8002837,0x8002ba7,param_4);
    uVar3 = *(iVar9 + 0x10);
    uVar6 = uVar3;
    if (uVar3 == 2) {
        sym.xiaomi_touch_printf(2,0x8000ed2,0x8002ba7,param_4);
        uVar7 = *(iVar5 + 0x38);
joined_r0x080087fc:
        uVar6 = 0;
        if (uVar7 != 0) {
            uVar6 = iVar8 + (uVar7 >> 0xc);
            iVar4 = remap_pfn_range(param_2,iVar1,uVar6 & 0xfffffffffffff,iVar2 - iVar1,0x68000000000fc3);
            if (iVar4 != 0) {
                sym.xiaomi_touch_printf(noname_0_00,0x800303a,0x8002ba7,uVar6 & 0xffffffff);
                return 0xffffffff;
            }
            sym.xiaomi_touch_printf(noname_0_00,0x80019bd,0x8002ba7,uVar6 & 0xffffffff);
            return 0;
        }
    }
    else if (uVar3 == 1) {
        sym.xiaomi_touch_printf(1,0x8002d0b,0x8002ba7,param_4);
        uVar7 = *(iVar5 + 0x18);
        goto joined_r0x080087fc;
    }
    arg1 = "MI_TP_E: %s: phy bas is NULL, return!";
code_r0x08008884:
    sym.xiaomi_touch_printf(uVar6,arg1,0x8002ba7,param_4);
    return 0xffffffff;
}


// ===== sym.xiaomi_touch_mievent_report_str.cfi_jt @ 0x08004718 (size 8) =====

void sym.xiaomi_touch_mievent_report_str.cfi_jt
               (ulong param_1,uint32_t param_2,int param_3,ulong param_4,ulong param_5)

{
    int64_t iVar1;
    uint64_t arg3;
    ulong noname_0;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg3 = param_2;
    sym.xiaomi_touch_printf(param_1,0x8001c6f,0x80015b1,arg3);
    iVar1 = cdev_tevent_alloc(param_2);
    if (iVar1 == 0) {
        sym.xiaomi_touch_printf(noname_0,0x8001c4a,0x80015b1,arg3);
    }
    else {
        cdev_tevent_add_int(iVar1,"panel_id",param_3);
        cdev_tevent_add_str(iVar1,"fault_name",param_4);
        cdev_tevent_add_str(iVar1,"vendor_name",param_5);
        cdev_tevent_write(iVar1);
        cdev_tevent_destroy(iVar1);
    }
    return;
}


// ===== sym.show_touch_thp_ic_cmd.748cadad2772bcec6da87c64b0fa5f62.cfi_jt @ 0x08004720 (size 8) =====

ulong sym.show_touch_thp_ic_cmd.748cadad2772bcec6da87c64b0fa5f62.cfi_jt(void)

{
    return 0;
}


// ===== sym.show_touch_thp_ic_cmd_data.748cadad2772bcec6da87c64b0fa5f62.cfi_jt @ 0x08004728 (size 8) =====

int64_t sym.show_touch_thp_ic_cmd_data.748cadad2772bcec6da87c64b0fa5f62.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    ulong uVar1;
    uint16_t uVar2;
    ulong uVar3;
    ulong uVar4;
    code *pcVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int64_t iVar9;
    ulong *puVar10;
    ulong *in_x18;
    uint32_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *0x80067aa;
    uVar12 = *0x80067aa;
    sym.xiaomi_touch_printf(param_1,0x8001aad,0x8002eaf,uVar12);
    mutex_lock(obj.thp_ic_read_data_mutex);
    if (*0x80067a9 == 9) {
        uVar12 = *0x8006000;
        if (*0x8006000 != 0) {
            uVar13 = 0;
            do {
                if (uVar13 == 0x200) goto code_r0x08009c38;
                sym.xiaomi_touch_printf(uVar13 + 0x80067a8,0x8003080,0x8002eaf,uVar13 & 0xffffffff);
                uVar12 = *0x80067ac;
                uVar13 = uVar13 + 1;
            } while (uVar13 < uVar12);
        }
        if (uVar2 < 0xbb9) {
            memcpy(param_4,0x80067b0,uVar12);
            uVar11 = *0x80067ac;
        }
        else if (uVar2 == 0xbea) {
            iVar9 = sym.get_xiaomi_touch_data(0);
            if (param_4 == 0) {
                uVar11 = 0xffffffff;
            }
            else {
                memset(param_4,0,0x1000);
                puVar10 = *(iVar9 + 0x14d8);
                *puVar10 = *0x80067b0;
                uVar4 = *0x80067c0;
                uVar3 = *0x80067b8;
                uVar1 = CONCAT17(*0x80067cf,*0x80067c8);
                *(puVar10 + 0x1f) = CONCAT71(*0x80067d0,*0x80067cf);
                puVar10[2] = uVar4;
                puVar10[3] = uVar1;
                puVar10[1] = uVar3;
                iVar6 = snprintf(param_4,0x1000,"protocol_version:    %hu\n",**(iVar9 + 0x14d8));
                iVar7 = snprintf(param_4 + iVar6,0x1000,"frame_len:    %hu\n",*(*(iVar9 + 0x14d8) + 2));
                iVar8 = snprintf(param_4 + (iVar7 + iVar6),0x1000,"ic_fw_v:    %hu\n",*(*(iVar9 + 0x14d8) + 4));
                iVar8 = iVar8 + iVar7 + iVar6;
                iVar6 = snprintf(param_4 + iVar8,0x1000,"ic_name:    %hu\n",*(*(iVar9 + 0x14d8) + 6));
                iVar6 = iVar6 + iVar8;
                iVar8 = snprintf(param_4 + iVar6,0x1000,"ic_project_name:    %hu\n",*(*(iVar9 + 0x14d8) + 8));
                iVar8 = iVar8 + iVar6;
                iVar6 = snprintf(param_4 + iVar8,0x1000,"ic_supplier_name:    %hu\n",*(*(iVar9 + 0x14d8) + 10));
                iVar6 = iVar6 + iVar8;
                iVar8 = snprintf(param_4 + iVar6,0x1000,"pitch_size_y:    %d\n",*(*(iVar9 + 0x14d8) + 0xc));
                iVar8 = iVar8 + iVar6;
                iVar6 = snprintf(param_4 + iVar8,0x1000,"pitch_size_x:    %d\n",*(*(iVar9 + 0x14d8) + 0xd));
                iVar6 = iVar6 + iVar8;
                iVar8 = snprintf(param_4 + iVar6,0x1000,"numCol:    %d\n",*(*(iVar9 + 0x14d8) + 0xe));
                iVar8 = iVar8 + iVar6;
                iVar6 = snprintf(param_4 + iVar8,0x1000,"numRow:    %d\n",*(*(iVar9 + 0x14d8) + 0xf));
                iVar6 = iVar6 + iVar8;
                iVar8 = snprintf(param_4 + iVar6,0x1000,"packaging_factory:    %hu\n",*(*(iVar9 + 0x14d8) + 0x10));
                iVar8 = iVar8 + iVar6;
                iVar6 = snprintf(param_4 + iVar8,0x1000,"wafe_factory:    %hu\n",*(*(iVar9 + 0x14d8) + 0x12));
                iVar6 = iVar6 + iVar8;
                iVar8 = snprintf(param_4 + iVar6,0x1000,"x_resolution:    %hu\n",*(*(iVar9 + 0x14d8) + 0x14));
                iVar8 = iVar8 + iVar6;
                iVar6 = snprintf(param_4 + iVar8,0x1000,"y_resolution:    %hu\n",*(*(iVar9 + 0x14d8) + 0x16));
                iVar6 = iVar6 + iVar8;
                iVar8 = snprintf(param_4 + iVar6,0x1000,"lockdown_info:    %lu\n",*(*(iVar9 + 0x14d8) + 0x18));
                iVar8 = iVar8 + iVar6;
                iVar6 = snprintf(param_4 + iVar8,0x1000,"frame_data_type:    %d\n",*(*(iVar9 + 0x14d8) + 0x20));
                iVar6 = iVar6 + iVar8;
                iVar8 = snprintf(param_4 + iVar6,0x1000,"mutual_len:    %hu\n",*(*(iVar9 + 0x14d8) + 0x21));
                iVar8 = iVar8 + iVar6;
                iVar6 = snprintf(param_4 + iVar8,0x1000,"slef1_len:    %hu\n",*(*(iVar9 + 0x14d8) + 0x23));
                iVar6 = iVar6 + iVar8;
                iVar8 = snprintf(param_4 + iVar6,0x1000,"slef2_len:    %hu\n",*(*(iVar9 + 0x14d8) + 0x25));
                uVar11 = iVar8 + iVar6;
            }
        }
        else {
            if (uVar12 == 0) {
                iVar8 = 0;
            }
            else {
                uVar12 = 0;
                iVar8 = 0;
                do {
                    if (uVar12 == 0x200) {
code_r0x08009c38:
    //WARNING: Does not return
                        pcVar5 = SoftwareBreakpoint(1,0x8009c3c);
                        (*pcVar5)();
                    }
                    iVar6 = snprintf(param_4 + iVar8,0x1000 - iVar8,0x80027b1,*(uVar12 + 0x80067b0));
                    iVar8 = iVar6 + iVar8;
                    uVar12 = uVar12 + 1;
                } while (uVar12 < *0x80067ac);
            }
            iVar6 = snprintf(param_4 + iVar8,0x1000 - iVar8,0x800275a);
            uVar11 = iVar6 + iVar8;
        }
        mutex_unlock(obj.thp_ic_read_data_mutex);
        iVar9 = uVar11;
    }
    else {
        sym.xiaomi_touch_printf(*0x80067a9,0x800272c,0x8002eaf,uVar12);
        mutex_unlock(obj.thp_ic_read_data_mutex);
        iVar9 = 0;
    }
    return iVar9;
}


// ===== sym.show_panel_color.748cadad2772bcec6da87c64b0fa5f62.cfi_jt @ 0x08004730 (size 8) =====

ulong sym.show_panel_color.748cadad2772bcec6da87c64b0fa5f62.cfi_jt(ulong param_1,ulong param_2,uchar *param_3)

{
    uchar uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = sym.get_xiaomi_touch_driver_param(0);
    uVar3 = 0;
    if (iVar2 != 0) {
        pcVar4 = *(iVar2 + 0x178);
        if (pcVar4 == NULL) {
            uVar3 = 0;
        }
        else {
            __cfi_slowpath_diag(0x605e5176d60dacab,pcVar4,0x8000db0);
            uVar1 = (*pcVar4)();
            uVar3 = 1;
            param_3[1] = 0;
            *param_3 = uVar1;
        }
    }
    return uVar3;
}


// ===== sym.show_enable_touch_raw.748cadad2772bcec6da87c64b0fa5f62.cfi_jt @ 0x08004738 (size 8) =====

int64_t sym.show_enable_touch_raw.748cadad2772bcec6da87c64b0fa5f62.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,0x800216a,*0x8006000);
    return iVar1;
}


// ===== sym.show_touch_vendor.748cadad2772bcec6da87c64b0fa5f62.cfi_jt @ 0x08004740 (size 8) =====

ulong sym.show_touch_vendor.748cadad2772bcec6da87c64b0fa5f62.cfi_jt(ulong param_1,ulong param_2,uchar *param_3)

{
    uchar uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = sym.get_xiaomi_touch_driver_param(0);
    uVar3 = 0;
    if (iVar2 != 0) {
        pcVar4 = *(iVar2 + 0x188);
        if (pcVar4 == NULL) {
            uVar3 = 0;
        }
        else {
            __cfi_slowpath_diag(0x301b554b3b72517f,pcVar4,0x8000df0);
            uVar1 = (*pcVar4)();
            uVar3 = 1;
            param_3[1] = 0;
            *param_3 = uVar1;
        }
    }
    return uVar3;
}


// ===== sym.show_panel_vendor.748cadad2772bcec6da87c64b0fa5f62.cfi_jt @ 0x08004748 (size 8) =====

ulong sym.show_panel_vendor.748cadad2772bcec6da87c64b0fa5f62.cfi_jt(ulong param_1,ulong param_2,uchar *param_3)

{
    uchar uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = sym.get_xiaomi_touch_driver_param(0);
    uVar3 = 0;
    if (iVar2 != 0) {
        pcVar4 = *(iVar2 + 0x170);
        if (pcVar4 == NULL) {
            uVar3 = 0;
        }
        else {
            __cfi_slowpath_diag(0x605e5176d60dacab,pcVar4,0x8000d90);
            uVar1 = (*pcVar4)();
            uVar3 = 1;
            param_3[1] = 0;
            *param_3 = uVar1;
        }
    }
    return uVar3;
}


// ===== sym.show_touch_ic_buffer.748cadad2772bcec6da87c64b0fa5f62.cfi_jt @ 0x08004750 (size 8) =====

int64_t sym.show_touch_ic_buffer.748cadad2772bcec6da87c64b0fa5f62.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong noname_0;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = sym.get_xiaomi_touch_driver_param(0);
    sym.xiaomi_touch_printf(noname_0,0x8002d2d,0x8001818,*0x8006000);
    if ((iVar2 == 0) || (*(iVar2 + 400) == 0)) {
        iVar2 = 0;
    }
    else {
        uVar3 = sym.kzalloc_retry(0x1000,3);
        pcVar4 = *(iVar2 + 400);
        __cfi_slowpath_diag(0x815e38a849dd56af,pcVar4,0x8000e30);
        (*pcVar4)(*0x8006000,uVar3);
        iVar1 = snprintf(param_3,0x1000,0x8001461,uVar3);
        kfree(uVar3);
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.show_resolution_factor.748cadad2772bcec6da87c64b0fa5f62.cfi_jt @ 0x08004758 (size 8) =====

int64_t sym.show_resolution_factor.748cadad2772bcec6da87c64b0fa5f62.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    uchar uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = sym.get_xiaomi_touch_driver_param(0);
    if (iVar2 == 0) {
        uVar3 = 1;
    }
    else {
        uVar3 = *(iVar2 + 0x4a);
    }
    iVar1 = snprintf(param_3,0x1000,0x8000ef2,uVar3);
    return iVar1;
}


// ===== sym.show_touch_doze_analysis.748cadad2772bcec6da87c64b0fa5f62.cfi_jt @ 0x08004760 (size 8) =====

int64_t sym.show_touch_doze_analysis.748cadad2772bcec6da87c64b0fa5f62.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,0x800216a,*0x8006000);
    return iVar1;
}


// ===== sym.show_palm_sensor.748cadad2772bcec6da87c64b0fa5f62.cfi_jt @ 0x08004768 (size 8) =====

int64_t sym.show_palm_sensor.748cadad2772bcec6da87c64b0fa5f62.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,0x800216a,*0x8006000);
    return iVar1;
}


// ===== sym.show_panel_display.748cadad2772bcec6da87c64b0fa5f62.cfi_jt @ 0x08004770 (size 8) =====

ulong sym.show_panel_display.748cadad2772bcec6da87c64b0fa5f62.cfi_jt(ulong param_1,ulong param_2,uchar *param_3)

{
    uchar uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = sym.get_xiaomi_touch_driver_param(0);
    uVar3 = 0;
    if (iVar2 != 0) {
        pcVar4 = *(iVar2 + 0x180);
        if (pcVar4 == NULL) {
            uVar3 = 0;
        }
        else {
            __cfi_slowpath_diag(0x605e5176d60dacab,pcVar4,0x8000dd0);
            uVar1 = (*pcVar4)();
            uVar3 = 1;
            param_3[1] = 0;
            *param_3 = uVar1;
        }
    }
    return uVar3;
}


// ===== sym.show_abnormal_event.748cadad2772bcec6da87c64b0fa5f62.cfi_jt @ 0x08004778 (size 8) =====

ulong sym.show_abnormal_event.748cadad2772bcec6da87c64b0fa5f62.cfi_jt
                (ulong param_1,ulong param_2,uint *param_3,int64_t param_4)

{
    bool bVar1;
    uint uVar2;
    int64_t iVar3;
    char cVar4;
    code *pcVar5;
    ulong *in_x18;
    ulong uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.abnormal_event_mutex);
    if ((_sym.xiaomi_touch_remove_proc == *0x80069d8) && (*0x80069e0 == '\0')) {
        sym.xiaomi_touch_printf(_sym.xiaomi_touch_remove_proc,0x80012ad,0x8000fe4,param_4);
        uVar6 = 0xffffffffffffffff;
    }
    else {
        if (10 < _sym.xiaomi_touch_remove_proc) {
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x5512,0x8009424);
            (*pcVar5)();
        }
        iVar3 = _sym.xiaomi_touch_remove_proc * 6;
        uVar2 = *(iVar3 + 0x80069e2);
        *(param_3 + 1) = *(iVar3 + 0x80069e6);
        *param_3 = uVar2;
        cVar4 = *0x80069e0;
        _sym.xiaomi_touch_remove_proc = _sym.xiaomi_touch_remove_proc + 1;
        bVar1 = _sym.xiaomi_touch_remove_proc < 10;
        if (!bVar1) {
            *0x80069e0 = '\0';
            _sym.xiaomi_touch_remove_proc = 0;
        }
        if ((_sym.xiaomi_touch_remove_proc < *0x8006000) || (bVar1 && cVar4 != '\0')) {
            sysfs_notify(CONCAT44(*0x8006004,*0x8006000),0,"abnormal_event");
        }
        uVar6 = 6;
    }
    mutex_unlock(obj.abnormal_event_mutex);
    return uVar6;
}


// ===== sym.show_fod_press_status.748cadad2772bcec6da87c64b0fa5f62.cfi_jt @ 0x08004780 (size 8) =====

int64_t sym.show_fod_press_status.748cadad2772bcec6da87c64b0fa5f62.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,0x800216a,*0x8006000);
    return iVar1;
}


// ===== sym.show_touch_finger_status.748cadad2772bcec6da87c64b0fa5f62.cfi_jt @ 0x08004788 (size 8) =====

int64_t sym.show_touch_finger_status.748cadad2772bcec6da87c64b0fa5f62.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,0x800216a,*0x8006000);
    return iVar1;
}


// ===== sym.proc_tp_read.9d8770af7b3671e63c35d9718c8d6b6b.cfi_jt @ 0x08004790 (size 8) =====

int64_t sym.proc_tp_read.9d8770af7b3671e63c35d9718c8d6b6b.cfi_jt
                  (int64_t param_1,int64_t param_2,uint64_t param_3,int64_t *param_4)

{
    uint8_t uVar1;
    code *pcVar2;
    int iVar3;
    int64_t arg3;
    ulong noname_0;
    ulong noname_0_00;
    ulong noname_0_01;
    uint *puVar4;
    uint64_t noname_0_02;
    ulong noname_0_03;
    ulong *in_x18;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint8_t *puVar9;
    ulong unaff_x30;
    uchar noname_1 [16];
    int iStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    puVar9 = *(param_1 + 0xd8);
    iStack_6c = 0;
    iVar5 = *(param_1 + 0x18);
    if (puVar9 == NULL) {
code_r0x08007190:
        iVar5 = -0xe;
    }
    else {
        uVar1 = *puVar9;
        iVar7 = uVar1;
        uVar8 = uVar1;
        sym.xiaomi_touch_printf(iStack_68,0x800281e,0x80019a3,*param_4);
        if (*param_4 == 0) {
            iVar5 = iVar5 + 0x38;
            arg3 = iVar5;
            sym.xiaomi_touch_printf(0,0x8002f93,0x80019a3,iVar5);
            iVar3 = strncmp("tp_fw_version",iVar5,10);
            if (iVar3 == 0) {
                sym.xiaomi_touch_printf(noname_0,0x8001870,0x80019a3,arg3);
                pcVar2 = *(puVar9 + 0x130);
                if (pcVar2 != NULL) {
                    __cfi_slowpath_diag(0xf8ea10d0b8f3433,pcVar2,0x8000c10);
                    (*pcVar2)(puVar9 + 0xd7);
                }
                if (1 < uVar1) goto code_r0x0800721c;
                uVar6 = iVar7 * 8;
                if (0x10 < uVar6) goto code_r0x08007204;
                iVar3 = snprintf(*(uVar6 + 0x8006720),0x100,"fw version: %s\n",puVar9 + 0xd7);
                iStack_6c = iStack_6c + iVar3;
                iVar3 = snprintf(*(uVar6 + 0x8006720) + iStack_6c,0x100 - iStack_6c,"driver version: %s\n",
                                 puVar9 + 0x97);
                iStack_6c = iStack_6c + iVar3;
                iVar3 = snprintf(*(uVar6 + 0x8006720) + iStack_6c,0x100 - iStack_6c,"hal version: %s\n",puVar9 + 1);
                iStack_6c = iStack_6c + iVar3;
                iVar3 = snprintf(*(uVar6 + 0x8006720) + iStack_6c,0x100 - iStack_6c,"xiaomi-touch version: %s\n",
                                 "2023.09.13-01");
                iStack_6c = iStack_6c + iVar3;
                *(uVar6 + 0x8006730) = iStack_6c;
            }
            else {
                iVar3 = strncmp("tp_lockdown_info",iVar5,0x10);
                if (iVar3 == 0) {
                    sym.xiaomi_touch_printf(noname_0_00,0x8002950,0x80019a3,arg3);
                    pcVar2 = *(puVar9 + 0x128);
                    if (pcVar2 == NULL) {
                        if (1 < uVar1) goto code_r0x0800721c;
                        iStack_6c = 4;
                        puVar4 = *(uVar8 * 8 + 0x8006720);
                        *(puVar4 + 1) = 0;
                        *puVar4 = 0x6c6c756e;
                    }
                    else {
                        __cfi_slowpath_diag(0x913123bfd37872b,pcVar2,0x8000c30);
                        (*pcVar2)(puVar9 + 0x4f);
                        if (1 < uVar1) goto code_r0x0800721c;
                        iStack_6c = snprintf(*(uVar8 * 8 + 0x8006720),0x100,
                                             "0x%02X,0x%02X,0x%02X,0x%02X,0x%02X,0x%02X,0x%02X,0x%02X\n",puVar9[0x4f],
                                             puVar9[0x50],puVar9[0x51],puVar9[0x52],puVar9[0x53],puVar9[0x54],
                                             puVar9[0x55],puVar9[0x56]);
                    }
                    *(uVar8 * 8 + 0x8006730) = iStack_6c;
                }
                else {
                    iVar3 = strncmp("tp_selftest",iVar5,0xb);
                    if (iVar3 == 0) {
                        if (1 < uVar1) goto code_r0x0800721c;
                        if (8 < iVar7 * 4) goto code_r0x08007204;
                        sym.xiaomi_touch_printf(iVar7 * 4,0x8001d33,0x80019a3,*(obj.self_test_result + iVar7 * 4));
                        uVar6 = iVar7 * 8;
                        if (0x10 < uVar6) goto code_r0x08007204;
                        iStack_6c = snprintf(*(uVar6 + 0x8006720),0x100,0x800216a,*(obj.self_test_result + iVar7 * 4)
                                            );
                        *(uVar6 + 0x8006730) = iStack_6c;
                    }
                    else {
                        iVar3 = strncmp("tp_data_dump",iVar5,0xc);
                        if (iVar3 == 0) {
                            sym.xiaomi_touch_printf(noname_0_01,0x8002571,0x80019a3,arg3);
                            pcVar2 = *(puVar9 + 0x120);
                            if (pcVar2 == NULL) {
                                if (1 < uVar1) goto code_r0x0800721c;
                                *(uVar8 * 8 + 0x8006730) = 0;
                            }
                            else {
                                __cfi_slowpath_diag(0x420a964126e89b4e,pcVar2,0x8000c50);
                                if (1 < uVar1) goto code_r0x0800721c;
                                (*pcVar2)(*(uVar1 * 8 + 0x8006720),&iStack_6c);
                                *(uVar1 * 8 + 0x8006730) = iStack_6c;
                            }
                        }
                        else {
                            if (1 < uVar1) goto code_r0x0800721c;
                            uVar8 = uVar1;
                        }
                    }
                }
            }
joined_r0x08007030:
            if ((uVar8 == 2) || (0x10 < uVar8 * 8)) {
code_r0x08007204:
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(1,0x8007208);
                (*pcVar2)();
            }
            iVar5 = *(uVar8 * 8 + 0x8006730);
            noname_0_02 = iVar5 - *param_4;
            uVar6 = noname_0_02;
            if (param_3 <= noname_0_02) {
                uVar6 = param_3;
            }
            sym.xiaomi_touch_printf(noname_0_02,0x8000e99,0x80019a3,iVar5);
            iVar3 = uVar6;
            if (iVar3 != 0) {
                if (0x7fffffff00000000 < uVar6 << 0x20) {
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x800,0x8007210);
                    (*pcVar2)();
                }
                noname_1 = __check_object_size(*(uVar8 * 8 + 0x8006720) + *param_4,iVar3,1);
                iVar5 = sym._copy_to_user(param_2,noname_1,iVar3);
                if (iVar5 != 0) {
                    sym.xiaomi_touch_printf(noname_0_03,0x8002481,0x80019a3,iVar5);
                    goto code_r0x08007190;
                }
            }
            iVar5 = iVar3;
            *param_4 = *param_4 + iVar5;
        }
        else {
            if (1 < uVar1) goto code_r0x0800721c;
            if (*param_4 < *(uVar8 * 8 + 0x8006730)) goto joined_r0x08007030;
            iVar5 = 0;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return iVar5;
    }
    __stack_chk_fail();
code_r0x0800721c:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8007220);
    (*pcVar2)();
}


// ===== sym.xiaomi_touch_dev_read.71500f2f3877fbb331f33bdee87fabae.cfi_jt @ 0x08004798 (size 8) =====

int64_t sym.xiaomi_touch_dev_read.71500f2f3877fbb331f33bdee87fabae.cfi_jt
                  (int64_t param_1,int64_t param_2,int64_t param_3)

{
    int64_t *piVar1;
    char cVar2;
    bool bVar3;
    code *pcVar4;
    int64_t iVar5;
    ulong noname_0;
    ulong noname_0_00;
    int64_t iVar6;
    int64_t extraout_x8;
    ulong noname_0_01;
    int64_t extraout_x8_00;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    uchar noname_1 [16];
    
    *in_x18 = unaff_x30;
    iVar7 = *(param_1 + 0xd8);
    iVar5 = sym.get_xiaomi_touch_data(*(iVar7 + 0x11));
    if (iVar5 == 0) {
        iVar7 = 0;
    }
    else if (param_3 == 0x208) {
        mutex_lock(iVar5 + 0x14a8);
        piVar1 = iVar7 + 0x30;
        iVar7 = *piVar1;
        sym.xiaomi_touch_printf(noname_0_00,0x8001a84,0x800109b,iVar7);
        iVar6 = *piVar1;
        if (iVar6 == *(iVar5 + 0x54)) {
            sym.xiaomi_touch_printf(iVar6,0x8000f2d,0x800109b,iVar7);
            iVar7 = 0;
            iVar6 = extraout_x8;
        }
        else {
            noname_1 = sym.xiaomi_touch_printf(iVar6,0x8001d5b,0x800109b,0x208);
            if (10 < *piVar1) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x8007e1c);
                (*pcVar4)();
            }
            iVar7 = sym._copy_to_user_1(param_2,noname_1,0x208);
            if (iVar7 == 0) {
                Hint_Prefetch(piVar1,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                        *piVar1 = *piVar1 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                iVar7 = 0x208;
                iVar6 = *piVar1;
                if (9 < iVar6) {
                    *piVar1 = 0;
                }
            }
            else {
                sym.xiaomi_touch_printf(noname_0_01,0x8003002,0x800109b,iVar7);
                iVar7 = -1;
                iVar6 = extraout_x8_00;
            }
        }
        sym.xiaomi_touch_printf(iVar6,0x8002590,0x800109b,iVar7);
        mutex_unlock(iVar5 + 0x14a8);
    }
    else {
        sym.xiaomi_touch_printf(noname_0,0x8001778,0x800109b,param_3);
        iVar7 = 0;
    }
    return iVar7;
}


// ===== sym.get_raw_data_base.cfi_jt @ 0x080047a0 (size 8) =====

int64_t sym.get_raw_data_base.cfi_jt(uint8_t param_1)

{
    uint32_t uVar1;
    uint8_t uVar2;
    char *arg1;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = param_1;
    uVar3 = param_1;
    if (param_1 < 2) {
        uVar2 = *0x80006e2 >> (uVar1 & 0x1f);
        uVar3 = uVar2;
        if ((uVar2 & 1) != 0) {
            uVar3 = param_1;
            if (uVar3 * 0x15e8 == -0x80006e8) {
                return 0;
            }
            iVar4 = *(uVar3 * 0x15e8 + 0x80006f8);
            if (iVar4 == 0) {
                sym.xiaomi_touch_printf(uVar3,0x8001c01,0x800267a,uVar1);
                return 0;
            }
            return iVar4 + *(reloc.xiaomi_touch_remove.c75ca9bdde7c09fd6e53abbae75ed65e.cfi_jt + uVar3 * 0x15e8) *
                           *(uVar3 * 0x15e8 + 0x80006ec);
        }
        arg1 = "MI_TP_E: %s: panel in touch id %d hasn\'t register, return!";
    }
    else {
        arg1 = "MI_TP_E: %s: touch id %d hasn\'t select, return!";
    }
    sym.xiaomi_touch_printf(uVar3,arg1,0x8002120,uVar1);
    return 0;
}


// ===== sym.xiaomi_touch_printf.cfi_jt @ 0x080047a8 (size 8) =====

void sym.xiaomi_touch_printf.cfi_jt(int param_1,ulong param_2)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    ulong uVar6;
    uint64_t noname_0;
    uint64_t extraout_x8;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iVar7 = *(iVar7 + 0x5e0);
    if (param_1 != 0) {
        vprintk(param_2,&stack0xffffffffffffffa8);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iVar7) {
        return;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.nl_data_ready;
    puVar1 = iVar7 + 0xe4;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar2 = *puVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = uVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (uVar2 == 0) {
        uVar6 = 2;
    }
    else {
        if (-1 < (uVar2 + 1 | uVar2)) goto code_r0x08004a60;
        uVar6 = 1;
    }
    refcount_warn_saturate(puVar1,uVar6);
code_r0x08004a60:
    noname_0 = *(iVar7 + 0x70);
    if (0xf < *(iVar7 + 0x70)) {
        _segment.ehdr = *(*(iVar7 + 0xd8) + 0xc);
        kfree_skb(iVar7);
        noname_0 = extraout_x8;
    }
    sym.xiaomi_touch_printf(noname_0,0x800264a,0x8002c6e,_segment.ehdr);
    return;
}


// ===== sym.xiaomi_touch_dev_ioctl.71500f2f3877fbb331f33bdee87fabae.cfi_jt @ 0x080047b0 (size 8) =====

uint64_t sym.xiaomi_touch_dev_ioctl.71500f2f3877fbb331f33bdee87fabae.cfi_jt
                   (int64_t param_1,uint64_t param_2,uint64_t param_3)

{
    int64_t *piVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    uint32_t uVar7;
    char *pcVar8;
    uint64_t uVar9;
    ulong noname_0;
    uint64_t noname_0_00;
    ulong noname_0_01;
    ulong noname_0_02;
    ulong noname_0_03;
    int *noname_0_04;
    ulong uVar10;
    uint64_t extraout_x8;
    ulong noname_0_05;
    uint64_t extraout_x8_00;
    ulong noname_0_06;
    int *extraout_x8_01;
    ulong *in_x18;
    code *pcVar11;
    int64_t iVar12;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar extraout_q0 [16];
    uchar auVar13 [16];
    uint8_t uStack_250;
    uint8_t uStack_24f;
    uint16_t uStack_24e;
    uint16_t uStack_24c;
    uint32_t uStack_248;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    uVar7 = param_2;
    iStack_48 = *(iVar12 + 0x5e0);
    if ((uVar7 & 0xff00) != 0x5400) {
code_r0x0800825c:
        uVar9 = 0xffffffffffffffea;
        goto code_r0x08008260;
    }
    uVar4 = uVar7 >> 0x10 & 0x3fff;
    iVar12 = *(param_1 + 0xd8);
    uVar9 = uVar7 & 0xff;
    sym.xiaomi_touch_printf(iStack_48,0x80010ce,0x8002b90,uVar9);
    if (5 < (uVar7 & 0xff)) {
        sym.xiaomi_touch_printf(noname_0,0x8002cb5,0x8002b90,0x54);
        goto code_r0x0800825c;
    }
    noname_0_00 = param_2 & 0xff;
    switch(noname_0_00) {
    case 0:
        mutex_lock(obj.ioctl_operation_mutex);
        if (uVar4 != 0x208) {
            sym.xiaomi_touch_printf(noname_0_01,0x8002a3d,0x8002b90,uVar4);
            mutex_unlock(obj.ioctl_operation_mutex);
            goto code_r0x0800825c;
        }
        memset(&uStack_250,0,0x208);
        iVar6 = sym._copy_from_user_1(&uStack_250,param_3);
        if (iVar6 != 0) {
            sym.xiaomi_touch_printf(noname_0_02,0x80016a4,0x8002b90,iVar6);
code_r0x08008470:
            uVar9 = 0xffffffffffffffff;
            goto code_r0x08008474;
        }
        uVar9 = uStack_250;
        if (*(iVar12 + 0x11) != uStack_250) {
            pcVar8 = "MI_TP_E: %s: client id is not equal common data id, please check it!";
code_r0x08008460:
            sym.xiaomi_touch_printf(uVar9,pcVar8,0x8002b90,iVar6);
            goto code_r0x08008470;
        }
        iVar12 = sym.get_xiaomi_touch_driver_param(*(iVar12 + 0x11));
        if (iVar12 == 0) {
            pcVar8 = "MI_TP_E: %s: please select touch id first, then send common data!";
            uVar9 = extraout_x8;
            goto code_r0x08008460;
        }
        uVar9 = uStack_24f;
        auVar13 = extraout_q0;
        switch(uVar9) {
        case 0:
            if (((uStack_24e == 0x2711) && (100 < uStack_248)) && (uStack_248 < 0x7f)) {
                sym.sendnlmsg(uStack_248);
            }
            else {
                pcVar11 = *(iVar12 + 0x138);
                if (pcVar11 != NULL) {
                    uVar10 = 0x8000cf0;
                    goto code_r0x08008650;
                }
            }
            break;
        case 1:
        case 2:
        case 3:
        case 4:
            pcVar11 = *(iVar12 + 0x148);
            if (pcVar11 != NULL) {
                uVar10 = 0x8000d10;
code_r0x08008504:
                __cfi_slowpath_diag(0x559c4a249207745a,pcVar11,uVar10);
                auVar13 = (*pcVar11)(&uStack_250);
            }
            goto code_r0x08008524;
        case 5:
            pcVar11 = *(iVar12 + 0x150);
            if (pcVar11 != NULL) {
                uVar10 = 0x8000d50;
                goto code_r0x08008504;
            }
code_r0x08008524:
            iVar5 = sym._copy_to_user_1(param_3,auVar13,0x208);
            if (iVar5 != 0) {
                sym.xiaomi_touch_printf(noname_0_05,0x8001f96,0x8002b90,uStack_24f);
            }
            break;
        case 6:
            pcVar11 = *(iVar12 + 0x158);
            if (pcVar11 != NULL) {
                uVar10 = 0x8000d30;
code_r0x08008650:
                __cfi_slowpath_diag(0x559c4a249207745a,pcVar11,uVar10);
                (*pcVar11)(&uStack_250);
            }
            break;
        case 7:
            pcVar11 = *(iVar12 + 0x140);
            if (pcVar11 != NULL) {
                uVar10 = 0x8000d70;
                goto code_r0x08008650;
            }
            break;
        case 8:
            pcVar11 = *(iVar12 + 0x1a0);
            if (pcVar11 != NULL) {
                __cfi_slowpath_diag(0x848a497e3db49f6e,pcVar11,0x8000cb0);
                (*pcVar11)(&uStack_250);
            }
            break;
        case 9:
            pcVar11 = *(iVar12 + 0x1a8);
            if (pcVar11 != NULL) {
                __cfi_slowpath_diag(0x848a497e3db49f6e,pcVar11,0x8000cd0);
                iVar5 = (*pcVar11)(&uStack_250);
                uVar9 = extraout_x8_00;
                if (iVar5 == 0) {
                    auVar13 = memcpy(0x80067a8,&uStack_250,0x208);
                    iVar5 = sym._copy_to_user_1(param_3,auVar13,0x208);
                    if (iVar5 != 0) {
                        sym.xiaomi_touch_printf(noname_0_06,0x8001f96,0x8002b90,uStack_24f);
                        goto code_r0x08008470;
                    }
                    break;
                }
            }
            pcVar8 = "MI_TP_E: %s: get thp ic cur value has error";
            goto code_r0x08008460;
        case 10:
            sym.add_common_data_to_buf(uStack_250,0,uStack_24e,uStack_24c);
            uVar9 = 0;
            goto code_r0x08008474;
        case 0xb:
            if (uStack_24e == 0x1a) {
                sym.update_palm_sensor_value(uStack_248);
                uVar9 = 0;
            }
            else {
                uVar9 = 0;
            }
            goto code_r0x08008474;
        default:
            sym.xiaomi_touch_printf(uVar9,0x8001261,0x8002b90,iVar6);
            uVar9 = 0xffffffffffffffea;
code_r0x08008474:
            mutex_unlock(obj.ioctl_operation_mutex);
            goto code_r0x08008260;
        }
        mutex_unlock(obj.ioctl_operation_mutex);
        uVar9 = 0;
        goto code_r0x08008260;
    case 1:
        if (uVar4 == 0xd6) {
            iVar12 = sym.get_xiaomi_touch_driver_param(*(iVar12 + 0x11));
            if (iVar12 == 0) {
                sym.xiaomi_touch_printf(noname_0_03,0x8002df6,0x8002b90,uVar9);
                uVar9 = 0xffffffffffffffff;
            }
            else {
                uVar9 = sym._copy_to_user_1(param_3,noname_1,0xd6);
            }
            goto code_r0x08008260;
        }
        sym.xiaomi_touch_printf(noname_0_00,0x800216e,0x8002b90,uVar4);
        goto code_r0x0800825c;
    case 2:
        sym.xiaomi_touch_printf(noname_0_00,0x8002837,0x8002b90,param_3);
        uVar9 = 0;
        *(iVar12 + 0x10) = param_3;
        goto code_r0x08008260;
    case 3:
        iVar6 = *(iVar12 + 0x11);
        if (-1 < *(iVar12 + 0x11)) {
            sym.xiaomi_touch_printf(iVar6,0x8002973,0x8002b90,uVar9);
            uVar9 = 0;
            goto code_r0x08008260;
        }
        if (param_3 < 2) {
            sym.xiaomi_touch_printf(iVar6,0x800110b,0x8002b90,param_3);
            iVar6 = sym.get_xiaomi_touch_data(param_3 & 0xffffffff);
            if (iVar6 != 0) {
                *(iVar12 + 0x11) = param_3;
                uVar10 = *(iVar6 + 4);
                *(iVar12 + 0x34) = uVar10;
                sym.xiaomi_touch_printf(uVar10,0x80017a5,0x8002b90,*(iVar12 + 0x34));
                uVar10 = *(iVar6 + 0x20);
                *(iVar12 + 0x38) = uVar10;
                sym.xiaomi_touch_printf(uVar10,0x8000f94,0x8002b90,*(iVar12 + 0x38));
                _raw_spin_lock(iVar6 + 0x50);
                sym.list_add_tail_rcu(iVar12,iVar6 + 0x40);
                _raw_spin_unlock(iVar6 + 0x50);
                uVar9 = 0;
                goto code_r0x08008260;
            }
        }
        else {
            sym.xiaomi_touch_printf(iVar6,0x80025be,0x8002b90,param_3);
        }
        break;
    case 4:
        iVar6 = sym.get_xiaomi_touch_data(*(iVar12 + 0x11));
        if (iVar6 != 0) {
            noname_0_04 = iVar12 + 0x34;
            uVar7 = *noname_0_04 & 0xff;
            uVar9 = uVar7;
            if (uVar7 != *(iVar6 + 4)) goto code_r0x080086d8;
        }
        break;
    case 5:
        iVar6 = sym.get_xiaomi_touch_data(*(iVar12 + 0x11));
        if (iVar6 != 0) {
            uVar9 = (param_2 & 0xffffffff) >> 0x1e;
            iVar5 = uVar9;
            if (iVar5 != 2) {
                if (iVar5 == 1) {
                    piVar1 = iVar6 + 0x20;
                    sym.xiaomi_touch_printf(uVar9,0x8002054,0x8002b90,*piVar1);
                    Hint_Prefetch(piVar1,2,0,1);
                    do {
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar3) {
                            *piVar1 = *piVar1 + 1;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                    if (*(iVar6 + 0x28) <= *(iVar6 + 0x20)) {
                        *piVar1 = 0;
                    }
                    sym.notify_xiaomi_touch(iVar6);
                    uVar9 = 0;
                    goto code_r0x08008260;
                }
                goto code_r0x0800825c;
            }
            noname_0_04 = iVar12 + 0x38;
            uVar7 = *noname_0_04 & 0xff;
            uVar9 = uVar7;
            if (uVar7 != *(iVar6 + 0x20)) {
                Hint_Prefetch(noname_0_04,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(noname_0_04,0x10);
                    if (bVar3) {
                        *noname_0_04 = *noname_0_04 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                if (*(iVar6 + 0x28) <= *noname_0_04) {
                    *noname_0_04 = 0;
                }
                pcVar8 = "MI_TP_D: %s: get raw data index is %d";
                goto code_r0x08008308;
            }
        }
    }
    uVar9 = 0xffffffffffffffff;
code_r0x08008260:
    while (iVar12 = sp_el0, *(iVar12 + 0x5e0) != iStack_48) {
        iVar6 = __stack_chk_fail();
        noname_0_04 = extraout_x8_01;
code_r0x080086d8:
        Hint_Prefetch(noname_0_04,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(noname_0_04,0x10);
            if (bVar3) {
                *noname_0_04 = *noname_0_04 + 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (*(iVar6 + 0xc) <= *noname_0_04) {
            *noname_0_04 = 0;
        }
        pcVar8 = "MI_TP_D: %s: get frame data index is %d";
code_r0x08008308:
        sym.xiaomi_touch_printf(noname_0_04,pcVar8,0x8002b90,uVar9 & 0xffffffff);
    }
    return uVar9;
}


// ===== sym.add_common_data_to_buf.cfi_jt @ 0x080047b8 (size 8) =====

void sym.add_common_data_to_buf.cfi_jt(uint8_t param_1,uchar param_2,ushort param_3,uint32_t param_4,ulong param_5)

{
    uint64_t *puVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    int64_t iVar4;
    char cVar5;
    bool bVar6;
    uint8_t uVar7;
    code *pcVar8;
    char *arg1;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    int64_t *piVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar9 = param_1;
    if (param_1 < 2) {
        uVar7 = *0x80006e2 >> (param_1 & 0x1f);
        uVar9 = uVar7;
        if ((uVar7 & 1) != 0) {
            uVar9 = param_1;
            if (uVar9 * 0x15e8 == -0x80006e8) {
                return;
            }
            puVar1 = uVar9 * 0x15e8 + 0x800073c;
            mutex_lock("MI_TP_E: %s: please select touch id first!" + uVar9 * 0x15e8);
            if (*puVar1 < 0xb) {
                uVar10 = *puVar1 & 0xffffffff;
                iVar4 = uVar9 * 0x15e8 + uVar10 * 0x208;
                *(uVar9 * 0x15e8 + uVar10 * 0x208 + 0x8000740) = param_1;
                if (iVar4 + 0x61U < 0x2f59) {
                    uVar2 = iVar4 + 0x60;
                    *(uVar9 * 0x15e8 + uVar10 * 0x208 + 0x8000741) = param_2;
                    if (((uVar2 | 2) < 0x2f59) &&
                       (*(uVar9 * 0x15e8 + uVar10 * 0x208 + 0x8000742) = param_3, (uVar2 | 4) < 0x2f59)) {
                        iVar4 = uVar10 * 0x208 + uVar9 * 0x15e8;
                        *(obj.pid + iVar4 + 100) = param_4;
                        memcpy(obj.pid + iVar4 + 0x68,param_5,-(param_4 >> 0x1f) & 0xfffffffc00000000 | param_4 << 2);
                        Hint_Prefetch(puVar1,2,0,1);
                        do {
                            cVar5 = '\x01';
                            bVar6 = ExclusiveMonitorPass(puVar1,0x10);
                            if (bVar6) {
                                *puVar1 = *puVar1 + 1;
                                cVar5 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar5 != '\0');
                        if (9 < *puVar1) {
                            *puVar1 = 0;
                        }
                        mutex_unlock("MI_TP_E: %s: please select touch id first!" + uVar9 * 0x15e8);
                        iVar4 = uVar9 * 0x15e8 + 0x8000738;
                        _raw_spin_lock(iVar4);
                        piVar3 = uVar9 * 0x15e8 + 0x8000728;
                        for (piVar11 = *piVar3; piVar11 != piVar3; piVar11 = *piVar11) {
                            __wake_up(piVar11 + 3,3,0,0);
                        }
                        _raw_spin_unlock(iVar4);
                        return;
                    }
                }
    //WARNING: Does not return
                pcVar8 = SoftwareBreakpoint(1,0x8005090);
                (*pcVar8)();
            }
    //WARNING: Does not return
            pcVar8 = SoftwareBreakpoint(0x5512,0x8005094);
            (*pcVar8)();
        }
        arg1 = "MI_TP_E: %s: panel in touch id %d hasn\'t register, return!";
    }
    else {
        arg1 = "MI_TP_E: %s: touch id %d hasn\'t select, return!";
    }
    sym.xiaomi_touch_printf(uVar9,arg1,0x8002120,param_1);
    return;
}


// ===== sym.store_panel_display.748cadad2772bcec6da87c64b0fa5f62.cfi_jt @ 0x080047c0 (size 8) =====

ulong sym.store_panel_display.748cadad2772bcec6da87c64b0fa5f62.cfi_jt(void)

{
    ulong in_x3;
    
    return in_x3;
}


// ===== sym.store_fod_press_status.748cadad2772bcec6da87c64b0fa5f62.cfi_jt @ 0x080047c8 (size 8) =====

ulong sym.store_fod_press_status.748cadad2772bcec6da87c64b0fa5f62.cfi_jt(void)

{
    ulong in_x3;
    
    return in_x3;
}


// ===== sym.store_touch_thp_ic_cmd_data.748cadad2772bcec6da87c64b0fa5f62.cfi_jt @ 0x080047d0 (size 8) =====

uint64_t sym.store_touch_thp_ic_cmd_data.748cadad2772bcec6da87c64b0fa5f62.cfi_jt
                   (ulong param_1,ulong param_2,ulong param_3,ulong param_4,uint64_t param_5)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_5 < 0x209) {
        mutex_lock(obj.thp_ic_write_data_mutex);
        memcpy(0x80067a8,param_4,param_5);
        mutex_unlock(obj.thp_ic_write_data_mutex);
    }
    else {
        sym.xiaomi_touch_printf(param_1,0x80021a2,0x80023fa,0x80023fa);
    }
    return param_5;
}


// ===== sym.store_touch_finger_status.748cadad2772bcec6da87c64b0fa5f62.cfi_jt @ 0x080047d8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

ulong sym.store_touch_finger_status.748cadad2772bcec6da87c64b0fa5f62.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iStack_2c = 0;
    iVar2 = sscanf(param_3,0x8000ef2,&iStack_2c);
    if (iVar2 < 0) {
        param_4 = 0xffffffffffffffea;
    }
    else if (*0x8006000 != iStack_2c) {
        *0x8006000 = iStack_2c;
        sysfs_notify(CONCAT44(*0x8006004,iStack_2c),0,"touch_finger_status");
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return param_4;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.store_abnormal_event.748cadad2772bcec6da87c64b0fa5f62.cfi_jt @ 0x080047e0 (size 8) =====

ulong sym.store_abnormal_event.748cadad2772bcec6da87c64b0fa5f62.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,uint *param_4,int64_t param_5)

{
    uint uVar1;
    code *pcVar2;
    bool bVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_5 == 6) {
        mutex_lock(obj.abnormal_event_mutex);
        uVar5 = *0x8006000;
        if (10 < *0x8006000) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x5512,0x8009500);
            (*pcVar2)();
        }
        uVar1 = *param_4;
        *0x80069d8 = *0x8006000 + 1;
        bVar3 = 8 < *0x8006000;
        *(uVar5 * 6 + 0x80069e6) = *(param_4 + 1);
        *(uVar5 * 6 + 0x80069e2) = uVar1;
        if (bVar3) {
            *0x80069d8 = 0;
            *0x80069e0 = 1;
        }
        mutex_unlock(obj.abnormal_event_mutex);
        sysfs_notify(CONCAT44(*0x8006004,*0x8006000),0,"abnormal_event");
        uVar4 = 6;
    }
    else {
        sym.xiaomi_touch_printf(param_1,0x8001fc4,0x8001846,param_5);
        uVar4 = 0xffffffffffffffed;
    }
    return uVar4;
}


// ===== sym.store_touch_doze_analysis.748cadad2772bcec6da87c64b0fa5f62.cfi_jt @ 0x080047e8 (size 8) =====

ulong sym.store_touch_doze_analysis.748cadad2772bcec6da87c64b0fa5f62.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int64_t iVar1;
    int iVar2;
    code *pcVar3;
    ulong extraout_x8;
    ulong noname_0;
    ulong *in_x18;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    pcVar3 = sym.get_xiaomi_touch_driver_param(0);
    uStack_3c = 0;
    iVar2 = sscanf(param_3,0x8000ef2,&uStack_3c);
    if (-1 < iVar2) {
        noname_0 = extraout_x8;
        if (pcVar3 == NULL) goto code_r0x080090c4;
        pcVar3 = *(pcVar3 + 0x198);
        if (pcVar3 == NULL) goto code_r0x080090c4;
        if (1 < (pcVar3 + -0x8004630 >> 3 | pcVar3 << 0x3d)) goto code_r0x08009120;
        while( true ) {
            *0x8006000 = (*pcVar3)(uStack_3c);
            noname_0 = 0x8006000;
code_r0x080090c4:
            sym.xiaomi_touch_printf(noname_0,0x80019f1,0x8001910,uStack_3c);
code_r0x080090e8:
            iVar1 = sp_el0;
            if (*(iVar1 + 0x5e0) == iStack_38) break;
            __stack_chk_fail();
code_r0x08009120:
            __cfi_slowpath_diag(0x47ce015a85343a42,pcVar3,0x8000e10);
        }
        return param_4;
    }
    param_4 = 0xffffffffffffffea;
    goto code_r0x080090e8;
}


// ===== sym.store_panel_color.748cadad2772bcec6da87c64b0fa5f62.cfi_jt @ 0x080047f0 (size 8) =====

ulong sym.store_panel_color.748cadad2772bcec6da87c64b0fa5f62.cfi_jt(void)

{
    ulong in_x3;
    
    return in_x3;
}


// ===== sym.store_enable_touch_raw.748cadad2772bcec6da87c64b0fa5f62.cfi_jt @ 0x080047f8 (size 8) =====

ulong sym.store_enable_touch_raw.748cadad2772bcec6da87c64b0fa5f62.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int64_t iVar1;
    int iVar2;
    code *pcVar3;
    ulong noname_0;
    ulong *in_x18;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    pcVar3 = sym.get_xiaomi_touch_driver_param(0);
    uStack_3c = 0;
    iVar2 = sscanf(param_3,0x8000ef2,&uStack_3c);
    if (-1 < iVar2) {
        sym.xiaomi_touch_printf(noname_0,0x8002233,0x8002e98,uStack_3c);
        if (pcVar3 == NULL) goto code_r0x080095e0;
        pcVar3 = *(pcVar3 + 0x168);
        if (pcVar3 == NULL) goto code_r0x080095e0;
        if (1 < (pcVar3 + -0x8004630 >> 3 | pcVar3 << 0x3d)) goto code_r0x0800962c;
        while( true ) {
            (*pcVar3)(uStack_3c);
code_r0x080095e0:
            *0x8006000 = uStack_3c;
code_r0x080095f4:
            iVar1 = sp_el0;
            if (*(iVar1 + 0x5e0) == iStack_38) break;
            __stack_chk_fail();
code_r0x0800962c:
            __cfi_slowpath_diag(0x47ce015a85343a42,pcVar3,0x8000e50);
        }
        return param_4;
    }
    param_4 = 0xffffffffffffffea;
    goto code_r0x080095f4;
}


// ===== sym.store_palm_sensor.748cadad2772bcec6da87c64b0fa5f62.cfi_jt @ 0x08004800 (size 8) =====

ulong sym.store_palm_sensor.748cadad2772bcec6da87c64b0fa5f62.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int64_t iVar1;
    int iVar2;
    code *pcVar3;
    ulong noname_0;
    ulong *in_x18;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    pcVar3 = sym.get_xiaomi_touch_driver_param(0);
    uStack_3c = 0;
    iVar2 = sscanf(param_3,0x8000ef2,&uStack_3c);
    if (-1 < iVar2) {
        if (pcVar3 == NULL) goto code_r0x0800971c;
        pcVar3 = *(pcVar3 + 0x160);
        if (pcVar3 == NULL) goto code_r0x0800971c;
        if (1 < (pcVar3 + -0x8004630 >> 3 | pcVar3 << 0x3d)) goto code_r0x08009790;
        while( true ) {
            (*pcVar3)(uStack_3c != 0);
code_r0x0800971c:
            sym.add_common_data_to_buf(0,0,0x1a,1);
            sym.xiaomi_touch_printf(noname_0,0x80019f1,0x8001464,uStack_3c);
code_r0x08009758:
            iVar1 = sp_el0;
            if (*(iVar1 + 0x5e0) == iStack_38) break;
            __stack_chk_fail();
code_r0x08009790:
            __cfi_slowpath_diag(0x47ce015a85343a42,pcVar3,0x8000e70);
        }
        return param_4;
    }
    param_4 = 0xffffffffffffffea;
    goto code_r0x08009758;
}


// ===== sym.store_touch_thp_ic_cmd.748cadad2772bcec6da87c64b0fa5f62.cfi_jt @ 0x08004808 (size 8) =====

int64_t sym.store_touch_thp_ic_cmd.748cadad2772bcec6da87c64b0fa5f62.cfi_jt
                  (ulong param_1,ulong param_2,uint8_t *param_3,int64_t param_4)

{
    uint8_t uVar1;
    int64_t iVar2;
    code *pcVar3;
    int iVar4;
    char *arg1;
    char *arg3;
    uint64_t arg3_00;
    ulong noname_0;
    uint64_t uVar5;
    uint64_t extraout_x8;
    uint8_t *puVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar9;
    ulong unaff_x30;
    uint32_t auStack_248 [128];
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_48 = *(iVar2 + 0x5e0);
    mutex_lock(obj.thp_ic_mutex);
    memset(auStack_248,0,0x200);
    uVar1 = *param_3;
    if (uVar1 == 0) {
        arg3_00 = 0;
        sym.xiaomi_touch_printf(noname_0,0x80020a9,0x80012c7,0);
        uVar5 = extraout_x8;
code_r0x08009e34:
        arg1 = "MI_TP_E: %s: unsupport cmd!!";
    }
    else {
        uVar9 = 0;
        uVar5 = 0;
        uVar8 = 0;
        puVar6 = param_3 + 1;
        do {
            uVar7 = uVar1;
            if (uVar7 - 0x30 < 10) {
                if (0x7f < uVar5) {
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x8009f30);
                    (*pcVar3)();
                }
                uVar9 = uVar9 + (~uVar8 & 1);
                auStack_248[uVar5] = (uVar7 + auStack_248[uVar5] * 10) - 0x30;
            }
            else {
                if ((uVar7 != 0x2c) && (uVar7 != 0x20)) break;
                uVar5 = uVar5 + uVar8;
            }
            uVar1 = *puVar6;
            uVar8 = uVar7 - 0x30 < 10;
            puVar6 = puVar6 + 1;
        } while (uVar1 != 0);
        arg3 = "store_touch_thp_ic_cmd";
        arg3_00 = auStack_248[0];
        sym.xiaomi_touch_printf(uVar5,0x80020a9,0x80012c7,arg3_00);
        uVar5 = auStack_248[0] & 0xfffffffe;
        if ((auStack_248[0] & 0xfffffffe) != 8) goto code_r0x08009e34;
        uVar5 = uVar9 - 0x81;
        if (uVar9 - 0x81 < 0xffffff83) {
            arg1 = "MI_TP_E: %s: input format is error!!";
        }
        else {
            uVar7 = uVar9 - 3;
            arg3_00 = uVar7;
            uVar8 = auStack_248[uVar9 - 1];
            uVar5 = uVar8;
            if ((auStack_248[1] < 0) || (auStack_248[1] == 0xbe5)) {
                if ((auStack_248[0] != 8) || (auStack_248[1] != 0xbe5)) goto code_r0x08009e50;
                if (uVar7 == uVar8) {
                    arg3 = 0xbe5;
                    sym.add_common_data_to_buf(0,8,0xbe5,arg3_00);
                    goto code_r0x08009e50;
                }
                arg1 = "MI_TP_E: %s: data format is error!!";
            }
            else {
                if (((uVar9 < 5) && (uVar7 != uVar8)) && (auStack_248[3] == 2)) {
                    arg3 = auStack_248[1];
                    sym.add_common_data_to_buf(0,auStack_248[0],arg3,2);
                    goto code_r0x08009e50;
                }
                arg1 = "MI_TP_E: %s: data mode is error!!";
            }
        }
    }
    arg3 = "store_touch_thp_ic_cmd";
    sym.xiaomi_touch_printf(uVar5,arg1,0x80012c7,arg3_00);
    param_4 = -1;
code_r0x08009e50:
    mutex_unlock(obj.thp_ic_mutex);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_48) {
        return param_4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.show_touch_finger_status;
    iVar4 = snprintf(arg3,0x1000,0x800216a,*0x8006000);
    return iVar4;
}


// ===== sym.store_resolution_factor.748cadad2772bcec6da87c64b0fa5f62.cfi_jt @ 0x08004810 (size 8) =====

ulong sym.store_resolution_factor.748cadad2772bcec6da87c64b0fa5f62.cfi_jt(void)

{
    ulong in_x3;
    
    return in_x3;
}


// ===== sym.store_touch_vendor.748cadad2772bcec6da87c64b0fa5f62.cfi_jt @ 0x08004818 (size 8) =====

ulong sym.store_touch_vendor.748cadad2772bcec6da87c64b0fa5f62.cfi_jt(void)

{
    ulong in_x3;
    
    return in_x3;
}


// ===== sym.store_touch_ic_buffer.748cadad2772bcec6da87c64b0fa5f62.cfi_jt @ 0x08004820 (size 8) =====

ulong sym.store_touch_ic_buffer.748cadad2772bcec6da87c64b0fa5f62.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    char *arg1;
    ulong uVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = sscanf(param_3,"0x%X",0x8006a28);
    arg1 = "MI_TP_I: %s: write addr error format. current addr is 0x%08X";
    if (-1 < iVar2) {
        arg1 = "MI_TP_I: %s: write addr: 0x%08X";
    }
    uVar1 = 0xffffffffffffffea;
    if (-1 < iVar2) {
        uVar1 = param_4;
    }
    sym.xiaomi_touch_printf("MI_TP_I: %s: write addr: 0x%08X",arg1,0x8002e50,*0x8006a28);
    return uVar1;
}


// ===== sym.store_panel_vendor.748cadad2772bcec6da87c64b0fa5f62.cfi_jt @ 0x08004828 (size 8) =====

ulong sym.store_panel_vendor.748cadad2772bcec6da87c64b0fa5f62.cfi_jt(void)

{
    ulong in_x3;
    
    return in_x3;
}


// ===== sym.__cfi_check_fail @ 0x08004830 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08004874

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
    //switch table (4 cases) at 0x8000e90
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8004888);
    (*pcVar1)();
}


// ===== sym.sendnlmsg @ 0x08004888 (size 256) =====

void sym.sendnlmsg(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong noname_0;
    ulong noname_0_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) != 0 && _segment.ehdr != 0) {
        iVar3 = 0xffffffff;
        iVar2 = __alloc_skb(0x20,0xcc0,0);
        if (iVar2 == 0) {
            sym.xiaomi_touch_printf(noname_0,0x8001be3,0x8000f0a,iVar3);
        }
        else {
            if ((*(iVar2 + 0x74) == 0) && (0x1f < *(iVar2 + 0xcc) - *(iVar2 + 200))) {
                iVar3 = __nlmsg_put(iVar2,0,0,0,0x10,0);
            }
            else {
                iVar3 = 0;
            }
            *(iVar2 + 0x34) = 0;
            *(iVar3 + 0x10) = arg1;
            iVar1 = netlink_unicast(CONCAT44(*0x8000004,_segment.ehdr),iVar2,_segment.ehdr,0x40);
            if (iVar1 == 0) {
                sym.xiaomi_touch_printf(noname_0_00,0x80020e1,0x8000f0a,0);
            }
        }
    }
    return;
}


// ===== sym.xiaomi_touch_printf @ 0x08004988 (size 152) =====

void sym.xiaomi_touch_printf(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    int in_w0;
    ulong uVar6;
    uint64_t noname_0_00;
    uint64_t extraout_x8;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iVar7 = *(iVar7 + 0x5e0);
    if (in_w0 != 0) {
        vprintk(arg1,&stack0xffffffffffffffa8);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iVar7) {
        return;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.nl_data_ready;
    puVar1 = iVar7 + 0xe4;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar2 = *puVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = uVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (uVar2 == 0) {
        uVar6 = 2;
    }
    else {
        if (-1 < (uVar2 + 1 | uVar2)) goto code_r0x08004a60;
        uVar6 = 1;
    }
    refcount_warn_saturate(puVar1,uVar6);
code_r0x08004a60:
    noname_0_00 = *(iVar7 + 0x70);
    if (0xf < *(iVar7 + 0x70)) {
        _segment.ehdr = *(*(iVar7 + 0xd8) + 0xc);
        kfree_skb(iVar7);
        noname_0_00 = extraout_x8;
    }
    sym.xiaomi_touch_printf(noname_0_00,0x800264a,0x8002c6e,_segment.ehdr);
    return;
}


// ===== sym.nl_data_ready @ 0x08004a20 (size 224) =====

void sym.nl_data_ready(int64_t arg1)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    uint64_t noname_0;
    uint64_t extraout_x8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = arg1 + 0xe4;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar2 = *puVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = uVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (uVar2 == 0) {
        uVar5 = 2;
    }
    else {
        if (-1 < (uVar2 + 1 | uVar2)) goto code_r0x08004a60;
        uVar5 = 1;
    }
    refcount_warn_saturate(puVar1,uVar5);
code_r0x08004a60:
    noname_0 = *(arg1 + 0x70);
    if (0xf < *(arg1 + 0x70)) {
        _segment.ehdr = *(*(arg1 + 0xd8) + 0xc);
        kfree_skb(arg1);
        noname_0 = extraout_x8;
    }
    sym.xiaomi_touch_printf(noname_0,0x800264a,0x8002c6e,_segment.ehdr);
    return;
}


// ===== sym.netlink_init @ 0x08004b00 (size 172) =====

void sym.netlink_init(void)

{
    bool bVar1;
    int64_t iVar2;
    ulong *arg3;
    ulong extraout_x8;
    ulong extraout_x8_00;
    ulong noname_0;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_48;
    code *pcStack_40;
    ulong uStack_38;
    ulong uStack_30;
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_18 = *(iVar2 + 0x5e0);
    arg3 = &uStack_48;
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    pcStack_40 = sym.nl_data_ready.cfi_jt;
    _segment.ehdr = __netlink_kernel_create(init_net,0x18,obj.__this_module);
    bVar1 = _segment.ehdr == 0;
    if (bVar1) {
        sym.xiaomi_touch_printf(0x8000000,0x8001ae5,0x8000f4d,arg3);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_18) {
        __stack_chk_fail(bVar1);
        *extraout_x18 = sym.netlink_exit;
        noname_0 = extraout_x8;
        if (_segment.ehdr != 0) {
            netlink_kernel_release();
            _segment.ehdr = 0;
            noname_0 = extraout_x8_00;
        }
        sym.xiaomi_touch_printf(noname_0,0x8002eca,0x80027b4,arg3);
        return;
    }
    return;
}


// ===== sym.netlink_exit @ 0x08004bac (size 84) =====

void sym.netlink_exit(ulong param_1)

{
    int64_t in_x3;
    ulong extraout_x8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        netlink_kernel_release();
        _segment.ehdr = 0;
        param_1 = extraout_x8;
    }
    sym.xiaomi_touch_printf(param_1,0x8002eca,0x80027b4,in_x3);
    return;
}


// ===== sym.kzalloc_retry @ 0x08004c00 (size 84) =====

int64_t sym.kzalloc_retry(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *in_x18;
    int iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = arg2 + 1;
    do {
        iVar2 = iVar2 + -1;
        if (iVar2 < 1) {
            return 0;
        }
        iVar1 = __kmalloc(arg1,0xdc0);
    } while (iVar1 == 0);
    return iVar1;
}


// ===== sym.kzalloc_free @ 0x08004c54 (size 36) =====

void sym.kzalloc_free(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree();
    return;
}


// ===== sym.kvzalloc_retry @ 0x08004c78 (size 88) =====

int64_t sym.kvzalloc_retry(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *in_x18;
    int iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = arg2 + 1;
    do {
        iVar2 = iVar2 + -1;
        if (iVar2 < 1) {
            return 0;
        }
        iVar1 = kvmalloc_node(arg1,0xdc0,0xffffffff);
    } while (iVar1 == 0);
    return iVar1;
}


// ===== sym.kvzalloc_free @ 0x08004cd0 (size 36) =====

void sym.kvzalloc_free(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kvfree();
    return;
}


// ===== sym.get_xiaomi_touch_data @ 0x08004cf4 (size 132) =====

code * sym.get_xiaomi_touch_data(int64_t arg1)

{
    uint32_t uVar1;
    uint8_t uVar2;
    char *arg1_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg1 & 0xff;
    if (uVar1 < 2) {
        uVar2 = *0x80006e2 >> (arg1 & 0x1f);
        uVar1 = uVar2;
        if ((uVar2 & 1) != 0) {
            return reloc.xiaomi_touch_probe.c75ca9bdde7c09fd6e53abbae75ed65e.cfi_jt + (arg1 & 0xffU) * 0x15e8;
        }
        arg1_00 = "MI_TP_E: %s: panel in touch id %d hasn\'t register, return!";
    }
    else {
        arg1_00 = "MI_TP_E: %s: touch id %d hasn\'t select, return!";
    }
    sym.xiaomi_touch_printf(uVar1,arg1_00,0x8002120,arg1);
    return NULL;
}


// ===== sym.get_xiaomi_touch_driver_param @ 0x08004d78 (size 136) =====

int64_t sym.get_xiaomi_touch_driver_param(int64_t arg1)

{
    uint32_t uVar1;
    uint8_t uVar2;
    char *arg1_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg1 & 0xff;
    if (uVar1 < 2) {
        uVar2 = *0x80006e2 >> (arg1 & 0x1f);
        uVar1 = uVar2;
        if ((uVar2 & 1) != 0) {
            return (arg1 & 0xffU) * 0x1c0 + 0x80032b8;
        }
        arg1_00 = "MI_TP_E: %s: panel in touch id %d hasn\'t register, return!";
    }
    else {
        arg1_00 = "MI_TP_E: %s: touch id %d hasn\'t select, return!";
    }
    sym.xiaomi_touch_printf(uVar1,arg1_00,0x8001707,arg1);
    return 0;
}


// ===== sym.notify_xiaomi_touch @ 0x08004e00 (size 128) =====

void sym.notify_xiaomi_touch(int64_t arg1)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    if (arg1 != 0) {
        *in_x18 = unaff_x30;
        _raw_spin_lock(arg1 + 0x50);
        for (piVar1 = *(arg1 + 0x40); piVar1 != arg1 + 0x40; piVar1 = *piVar1) {
            __wake_up(piVar1 + 3,3,0,0);
        }
        _raw_spin_unlock(arg1 + 0x50);
    }
    return;
}


// ===== sym.add_common_data_to_buf @ 0x08004e88 (size 580) =====

void sym.add_common_data_to_buf(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t *puVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    int64_t iVar4;
    uint32_t uVar5;
    char cVar6;
    bool bVar7;
    uint8_t uVar8;
    code *pcVar9;
    char *arg1_00;
    uint64_t uVar10;
    ulong *in_x18;
    int64_t *piVar11;
    uint64_t uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    cVar6 = arg1;
    uVar5 = arg1 & 0xff;
    if (uVar5 < 2) {
        uVar8 = *0x80006e2 >> (cVar6 & 0x1f);
        uVar5 = uVar8;
        if ((uVar8 & 1) != 0) {
            uVar12 = arg1 & 0xff;
            if (uVar12 * 0x15e8 == -0x80006e8) {
                return;
            }
            puVar1 = uVar12 * 0x15e8 + 0x800073c;
            mutex_lock("MI_TP_E: %s: please select touch id first!" + uVar12 * 0x15e8);
            if (*puVar1 < 0xb) {
                uVar10 = *puVar1 & 0xffffffff;
                iVar4 = uVar12 * 0x15e8 + uVar10 * 0x208;
                *(uVar12 * 0x15e8 + uVar10 * 0x208 + 0x8000740) = cVar6;
                if (iVar4 + 0x61U < 0x2f59) {
                    uVar2 = iVar4 + 0x60;
                    *(uVar12 * 0x15e8 + uVar10 * 0x208 + 0x8000741) = arg2;
                    if (((uVar2 | 2) < 0x2f59) &&
                       (*(uVar12 * 0x15e8 + uVar10 * 0x208 + 0x8000742) = arg3, (uVar2 | 4) < 0x2f59)) {
                        iVar4 = uVar10 * 0x208 + uVar12 * 0x15e8;
                        *(obj.pid + iVar4 + 100) = arg4;
                        memcpy(obj.pid + iVar4 + 0x68);
                        Hint_Prefetch(puVar1,2,0,1);
                        do {
                            cVar6 = '\x01';
                            bVar7 = ExclusiveMonitorPass(puVar1,0x10);
                            if (bVar7) {
                                *puVar1 = *puVar1 + 1;
                                cVar6 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar6 != '\0');
                        if (9 < *puVar1) {
                            *puVar1 = 0;
                        }
                        mutex_unlock("MI_TP_E: %s: please select touch id first!" + uVar12 * 0x15e8);
                        iVar4 = uVar12 * 0x15e8 + 0x8000738;
                        _raw_spin_lock(iVar4);
                        piVar3 = uVar12 * 0x15e8 + 0x8000728;
                        for (piVar11 = *piVar3; piVar11 != piVar3; piVar11 = *piVar11) {
                            __wake_up(piVar11 + 3,3,0,0);
                        }
                        _raw_spin_unlock(iVar4);
                        return;
                    }
                }
    //WARNING: Does not return
                pcVar9 = SoftwareBreakpoint(1,0x8005090);
                (*pcVar9)();
            }
    //WARNING: Does not return
            pcVar9 = SoftwareBreakpoint(0x5512,0x8005094);
            (*pcVar9)();
        }
        arg1_00 = "MI_TP_E: %s: panel in touch id %d hasn\'t register, return!";
    }
    else {
        arg1_00 = "MI_TP_E: %s: touch id %d hasn\'t select, return!";
    }
    sym.xiaomi_touch_printf(uVar5,arg1_00,0x8002120,cVar6);
    return;
}


// ===== sym.get_raw_data_base @ 0x080050cc (size 212) =====

int64_t sym.get_raw_data_base(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    char *arg1_00;
    uint64_t noname_0;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = arg1;
    uVar1 = arg1 & 0xff;
    if (uVar1 < 2) {
        uVar3 = *0x80006e2 >> (uVar2 & 0x1f);
        uVar1 = uVar3;
        if ((uVar3 & 1) != 0) {
            noname_0 = arg1 & 0xff;
            if (noname_0 * 0x15e8 == -0x80006e8) {
                return 0;
            }
            iVar4 = *(noname_0 * 0x15e8 + 0x80006f8);
            if (iVar4 == 0) {
                sym.xiaomi_touch_printf(noname_0,0x8001c01,0x800267a,uVar2);
                return 0;
            }
            return iVar4 + *(reloc.xiaomi_touch_remove.c75ca9bdde7c09fd6e53abbae75ed65e.cfi_jt + noname_0 * 0x15e8) *
                           *(noname_0 * 0x15e8 + 0x80006ec);
        }
        arg1_00 = "MI_TP_E: %s: panel in touch id %d hasn\'t register, return!";
    }
    else {
        arg1_00 = "MI_TP_E: %s: touch id %d hasn\'t select, return!";
    }
    sym.xiaomi_touch_printf(uVar1,arg1_00,0x8002120,uVar2);
    return 0;
}


// ===== sym.notify_raw_data_update @ 0x080051a4 (size 328) =====

void sym.notify_raw_data_update(int64_t arg1)

{
    int *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint32_t uVar4;
    char cVar5;
    bool bVar6;
    uint8_t uVar7;
    char *arg1_00;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = arg1 & 0xff;
    if (uVar4 < 2) {
        uVar7 = *0x80006e2 >> (arg1 & 0x1f);
        uVar4 = uVar7;
        if ((uVar7 & 1) != 0) {
            uVar8 = arg1 & 0xff;
            if (uVar8 * 0x15e8 == -0x80006e8) {
                return;
            }
            piVar1 = uVar8 * 0x15e8 + 0x80006ec;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                cVar5 = '\x01';
                bVar6 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                    *piVar1 = *piVar1 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                }
            } while (cVar5 != '\0');
            if (*(uVar8 * 0x15e8 + 0x80006f4) <= *piVar1) {
                *piVar1 = 0;
            }
            iVar2 = uVar8 * 0x15e8 + 0x8000738;
            _raw_spin_lock(iVar2);
            piVar3 = uVar8 * 0x15e8 + 0x8000728;
            for (piVar9 = *piVar3; piVar9 != piVar3; piVar9 = *piVar9) {
                __wake_up(piVar9 + 3,3,0,0);
            }
            _raw_spin_unlock(iVar2);
            return;
        }
        arg1_00 = "MI_TP_E: %s: panel in touch id %d hasn\'t register, return!";
    }
    else {
        arg1_00 = "MI_TP_E: %s: touch id %d hasn\'t select, return!";
    }
    sym.xiaomi_touch_printf(uVar4,arg1_00,0x8002120,arg1);
    return;
}


// ===== sym.register_touch_panel @ 0x080052ec (size 1260) =====

ulong sym.register_touch_panel(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    code cVar7;
    int64_t iVar8;
    int64_t iVar9;
    char *pcVar10;
    int64_t in_x3;
    int iVar11;
    uint32_t uVar12;
    ulong in_x8;
    code *extraout_x8;
    code *pcVar13;
    int iVar14;
    ulong *in_x18;
    int64_t *piVar15;
    uint64_t uVar16;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    cVar7 = SUB81(arg1,0);
    sym.xiaomi_touch_printf(in_x8,0x8002d8d,0x8002136,in_x3);
    if ((arg1 & 0xff) < 2) {
        pcVar13 = *0x80006e2;
        uVar3 = 1 << (cVar7 & 0x1f);
        if ((uVar3 & *0x80006e2) != 0) {
            pcVar10 = "MI_TP_E: %s: touch id %d has register, stop register again!";
code_r0x08005384:
            sym.xiaomi_touch_printf(pcVar13,pcVar10,0x8002136,cVar7);
            return 0xffffffff;
        }
        if (arg2 == 0) {
            pcVar10 = "MI_TP_E: %s: param is null";
        }
        else {
            uVar16 = arg1 & 0xff;
            pcVar13 = uVar16 * 0x1c0 + 0x80032b8;
            *pcVar13 = cVar7;
            memcpy(uVar16 * 0x1c0 + 0x80032fa,arg2,0xd6);
            if (arg3 != 0) {
                memcpy(uVar16 * 0x1c0 + 0x80033d0,arg3,0xa8);
            }
            sym.xiaomi_touch_create_proc(pcVar13);
            iVar9 = uVar16 * 0x15e8;
            memset(reloc.xiaomi_touch_probe.c75ca9bdde7c09fd6e53abbae75ed65e.cfi_jt + iVar9,0,0x15e8);
            reloc.xiaomi_touch_probe.c75ca9bdde7c09fd6e53abbae75ed65e.cfi_jt[iVar9] = cVar7;
            *(iVar9 + 0x8000738) = 0;
            __mutex_init("MI_TP_E: %s: please select touch id first!" + iVar9,
                         "&xiaomi_touch_data->common_data_buf_lock",obj.register_touch_panel.__key);
            iVar14 = *(arg2 + 9) * 0x1000;
            *(reloc.xiaomi_touch_remove.c75ca9bdde7c09fd6e53abbae75ed65e.cfi_jt + iVar9) = iVar14;
            uVar2 = *(arg2 + 10);
            *(iVar9 + 0x80006f4) = uVar2;
            iVar14 = iVar14 * uVar2;
            iVar11 = *(arg2 + 0xb) << 0xc;
            *(iVar9 + 0x800070c) = *(arg2 + 0xb) << 0xc;
            uVar2 = *(arg2 + 0xc);
            *(iVar9 + 0x8000700) = 0;
            *(iVar9 + 0x8000710) = uVar2;
            if (iVar14 != 0) {
                iVar8 = __kmalloc(iVar14,0xdc0);
                if (((iVar8 == 0) && (iVar8 = __kmalloc(iVar14,0xdc0), iVar8 == 0)) &&
                   (iVar8 = __kmalloc(iVar14,0xdc0), iVar8 == 0)) {
                    pcVar13 = obj.pid + uVar16 * 0x15e8;
                    pcVar10 = "MI_TP_E: %s: touch id %d alloc frame data memory failed!";
                    *(uVar16 * 0x15e8 + 0x80006f8) = 0;
                    goto code_r0x08005384;
                }
                iVar5 = (iVar8 << 8) >> 8;
                uVar1 = iVar5 + 0x8000000000;
                iVar6 = uVar1 + _delayed_work_timer_fn;
                if (uVar1 >> 0x26 != 0) {
                    iVar6 = iVar5 - _default_llseek;
                }
                iVar11 = *(iVar9 + 0x800070c);
                uVar2 = *(iVar9 + 0x8000710);
                *(uVar16 * 0x15e8 + 0x80006f8) = iVar8;
                *(iVar9 + 0x8000700) = iVar6;
            }
            iVar11 = iVar11 * uVar2;
            piVar15 = uVar16 * 0x15e8 + 0x8000720;
            *piVar15 = 0;
            if (iVar11 != 0) {
                iVar9 = __kmalloc(iVar11,0xdc0);
                if (((iVar9 == 0) && (iVar9 = __kmalloc(iVar11,0xdc0), iVar9 == 0)) &&
                   (iVar9 = __kmalloc(iVar11,0xdc0), iVar9 == 0)) {
                    pcVar10 = "MI_TP_E: %s: touch id %d alloc raw data memory failed!";
                    pcVar13 = obj.pid + uVar16 * 0x15e8;
                    *(uVar16 * 0x15e8 + 0x8000718) = 0;
                    goto code_r0x08005384;
                }
                iVar6 = (iVar9 << 8) >> 8;
                uVar1 = iVar6 + 0x8000000000;
                iVar8 = uVar1 + _delayed_work_timer_fn;
                if (uVar1 >> 0x26 != 0) {
                    iVar8 = iVar6 - _default_llseek;
                }
                *(uVar16 * 0x15e8 + 0x8000718) = iVar9;
                *piVar15 = iVar8;
            }
            iVar9 = alloc_workqueue("xiaomi-touch-event-queue",0x32,1);
            pcVar13 = obj.pid + uVar16 * 0x15e8;
            *(uVar16 * 0x15e8 + 0x8001bc8) = iVar9;
            if (iVar9 != 0) {
                iVar9 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar9 = 0x30;
                }
                iVar9 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar9),0xdc0,0x27);
                if (iVar9 == 0) {
                    iVar9 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar9 = 0x30;
                    }
                    iVar9 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar9),0xdc0,0x27);
                    if (iVar9 == 0) {
                        iVar9 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar9 = 0x30;
                        }
                        iVar9 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar9),0xdc0,0x27);
                        if (iVar9 == 0) {
                            pcVar10 = "MI_TP_E: %s: alloc poll data memory is failed!";
                            pcVar13 = obj.pid + uVar16 * 0x15e8;
                            *(uVar16 * 0x15e8 + 0x8001bc0) = 0;
                            goto code_r0x08005350;
                        }
                    }
                }
                iVar8 = uVar16 * 0x15e8;
                *(iVar8 + 0x8001bc0) = iVar9;
                *(iVar8 + 0x8000728) = iVar8 + 0x8000728;
                *(iVar8 + 0x8000730) = iVar8 + 0x8000728;
                if (arg3 != 0) {
                    pcVar13 = *(arg3 + 0x10);
                    if (pcVar13 != NULL) {
                        __cfi_slowpath_diag(0x913123bfd37872b,pcVar13,0x8000bb0);
                        (*pcVar13)(arg2 + 0xd);
                    }
                    sym.xiaomi_touch_printf(*(arg2 + 9),0x800226a,0x8002136,*arg2);
                }
                uVar12 = *0x80006e2;
                uVar4 = uVar12 | uVar3;
                *0x80006e2 = uVar4;
                sym.xiaomi_touch_printf(uVar4,0x800251f,0x8002136,uVar12 | uVar3 & 0xff);
                return 0;
            }
            pcVar10 = "MI_TP_E: %s: ERROR: Cannot create work thread";
        }
    }
    else {
        pcVar10 = "MI_TP_E: %s: touch id error, please check it!";
        pcVar13 = extraout_x8;
    }
code_r0x08005350:
    sym.xiaomi_touch_printf(pcVar13,pcVar10,0x8002136,in_x3);
    return 0xffffffff;
}


// ===== sym.unregister_touch_panel @ 0x080057d8 (size 492) =====

void sym.unregister_touch_panel(int64_t arg1)

{
    uint32_t uVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    char *pcVar5;
    uint64_t extraout_x8;
    int64_t iVar6;
    ulong *in_x18;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = arg1;
    uVar3 = 1 << (uVar4 & 0x1f);
    if ((uVar3 & *0x80006e2) == 0) {
        pcVar5 = "MI_TP_E: %s: touch id %d didn\'t register, break unregister!";
        uVar2 = *0x80006e2;
        goto code_r0x08005988;
    }
    uVar7 = arg1 & 0xffffffff;
    uVar1 = arg1 & 0xff;
    if (uVar1 < 2) {
        uVar8 = arg1 & 0xff;
        if (uVar8 * 0x15e8 == -0x80006e8) {
            sym.xiaomi_touch_remove_proc(uVar7);
            uVar7 = *0x80006e2;
            if ((uVar3 & *0x80006e2) == 0) {
                pcVar5 = "MI_TP_E: %s: panel in touch id %d hasn\'t register, return!";
                goto code_r0x0800585c;
            }
            iVar6 = uVar8 * 0x1c0 + 0x80032b8;
            goto code_r0x08005868;
        }
        iVar6 = uVar8 * 0x15e8;
        kfree(*(iVar6 + 0x80006f8));
        *(iVar6 + 0x80006f8) = 0;
        *(iVar6 + 0x8000700) = 0;
        kfree(*(iVar6 + 0x8000718));
        *(iVar6 + 0x8000718) = 0;
        *(iVar6 + 0x8000720) = 0;
        sym.xiaomi_touch_remove_proc(uVar7);
        if ((uVar3 & *0x80006e2) == 0) {
            sym.xiaomi_touch_printf(*0x80006e2,0x8001a1f,0x8001707,uVar4);
            iVar6 = 0;
        }
        else {
            iVar6 = uVar8 * 0x1c0 + 0x80032b8;
        }
        memset(iVar6 + 0x42,0,0x17e);
        kfree(*(uVar8 * 0x15e8 + 0x8001bc0));
        *(uVar8 * 0x15e8 + 0x8001bc0) = 0;
    }
    else {
        pcVar5 = "MI_TP_E: %s: touch id %d hasn\'t select, return!";
        sym.xiaomi_touch_printf(uVar1,0x8001581,0x8002120,uVar4);
        sym.xiaomi_touch_remove_proc(uVar7);
        uVar7 = extraout_x8;
code_r0x0800585c:
        sym.xiaomi_touch_printf(uVar7,pcVar5,0x8001707,uVar4);
        iVar6 = 0;
code_r0x08005868:
        memset(iVar6 + 0x42,0,0x17e);
    }
    pcVar5 = "MI_TP_I: %s: current panel_register_mask is %d";
    uVar4 = *0x80006e2 & (uVar3 ^ 0xffffffff);
    uVar2 = *0x80006e2;
    *0x80006e2 = uVar4;
code_r0x08005988:
    sym.xiaomi_touch_printf(uVar2,pcVar5,0x80023aa,uVar4);
    return;
}


// ===== sym.xiaomi_register_panel_notifier @ 0x080059c4 (size 336) =====

void sym.xiaomi_register_panel_notifier(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong uVar3;
    char *arg1_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = arg2;
    if ((arg2 & 0xff) < 2) {
        if ((*0x80006e2 >> (uVar2 & 0x1f) & 1) != 0) {
            if ((arg2 & 0xffU) * 0x15e8 == -0x80006e8) {
                return;
            }
            iVar1 = (arg2 & 0xffU) * 0x15e8;
            *(iVar1 + 0x8001cb8) = arg1;
            *(iVar1 + 0x8001cc8) = arg3;
            *(iVar1 + 0x8001ccc) = arg4;
            *(iVar1 + 0x8001c30) = 0xfffffffe0;
            *(iVar1 + 0x8001c38) = iVar1 + 0x8001c38;
            *(iVar1 + 0x8001c40) = iVar1 + 0x8001c38;
            *(iVar1 + 0x8001c48) = sym.xiaomi_register_panel_notifier_work.c75ca9bdde7c09fd6e53abbae75ed65e.cfi_jt;
            init_timer_key(iVar1 + 0x8001c60,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
            *(iVar1 + 0x8001bd0) = 0xfffffffe0;
            *(iVar1 + 0x8001bd8) = iVar1 + 0x8001bd8;
            *(iVar1 + 0x8001be0) = iVar1 + 0x8001bd8;
            *(iVar1 + 0x8001be8) = sym.xiaomi_touch_suspend_work.c75ca9bdde7c09fd6e53abbae75ed65e.cfi_jt;
            *(iVar1 + 0x8001c00) = 0xfffffffe0;
            *(iVar1 + 0x8001c08) = iVar1 + 0x8001c08;
            *(iVar1 + 0x8001c10) = iVar1 + 0x8001c08;
            uVar3 = ___alloc_skb;
            *(iVar1 + 0x8001c18) = sym.xiaomi_touch_resume_work.c75ca9bdde7c09fd6e53abbae75ed65e.cfi_jt;
            queue_delayed_work_on(0x20,uVar3,iVar1 + 0x8001c30,0);
            return;
        }
        arg1_00 = "MI_TP_E: %s: panel in touch id %d hasn\'t register, return!";
    }
    else {
        arg1_00 = "MI_TP_E: %s: touch id %d hasn\'t select, return!";
    }
    sym.xiaomi_touch_printf(uVar2,arg1_00,0x8002120,uVar2);
    return;
}


// ===== sym.xiaomi_register_panel_notifier_work @ 0x08005b14 (size 336) =====

void sym.xiaomi_register_panel_notifier_work(int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    char *arg1_00;
    code *in_x3;
    ulong extraout_x8;
    ulong extraout_x8_00;
    ulong extraout_x8_01;
    ulong uVar4;
    ulong *in_x18;
    int iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.xiaomi_touch_printf(0xffffffffffffeab8,0x80015d1,0x8001754,in_x3);
    iVar1 = of_count_phandle_with_args(*(*(arg1 + 0x88) + 0x2f0),"panel",0);
    uVar4 = extraout_x8;
    if (0 < iVar1) {
        iVar5 = 0;
        do {
            of_parse_phandle(*(*(arg1 + 0x88) + 0x2f0),"panel",iVar5);
            uVar2 = of_drm_find_panel();
            uVar4 = extraout_x8_00;
            if (uVar2 < 0xfffffffffffff001) {
                if (uVar2 != 0) {
                    in_x3 = sym.xiaomi_drm_panel_notifier_callback.c75ca9bdde7c09fd6e53abbae75ed65e.cfi_jt;
                    iVar3 = panel_event_notifier_register
                                      (*(arg1 + 0x98),*(arg1 + 0x9c),uVar2,
                                       sym.xiaomi_drm_panel_notifier_callback.c75ca9bdde7c09fd6e53abbae75ed65e.cfi_jt,
                                       arg1 + -0x1548);
                    *(arg1 + 0x90) = iVar3;
                    if (iVar3 != 0) {
                        return;
                    }
                    arg1_00 = "MI_TP_E: %s: Failed to register for panel events";
                    uVar4 = extraout_x8_01;
                    goto code_r0x08005c3c;
                }
                break;
            }
            iVar5 = iVar5 + 1;
        } while (iVar1 != iVar5);
    }
    sym.xiaomi_touch_printf(uVar4,0x80015fc,0x8001754,in_x3);
    uVar4 = 0x8003000;
    if (*0x8003000 < 5) {
        *0x8003000 = *0x8003000 + 1;
        queue_delayed_work_on(0x20,___alloc_skb,arg1,0x4e2);
    }
    else {
        arg1_00 = "MI_TP_E: %s: Failed to register panel notifier, not try";
        *0x8003000 = *0x8003000 + 1;
code_r0x08005c3c:
        sym.xiaomi_touch_printf(uVar4,arg1_00,0x8001754,in_x3);
    }
    return;
}


// ===== sym.xiaomi_touch_suspend_work @ 0x08005c64 (size 424) =====

void sym.xiaomi_touch_suspend_work(int64_t arg1)

{
    uint8_t uVar1;
    uint8_t uVar2;
    int64_t iVar3;
    char *pcVar4;
    char *arg1_00;
    uint64_t uVar5;
    int64_t iVar6;
    ulong noname_0;
    uint64_t extraout_x8;
    ulong noname_0_00;
    uint64_t extraout_x8_00;
    uint64_t uVar7;
    ulong noname_0_01;
    ulong noname_0_02;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar8;
    uint64_t arg3;
    ulong unaff_x30;
    uchar auVar9 [12];
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    int64_t iStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    int64_t iStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    code *pcStack_90;
    uint uStack_80;
    uint uStack_78;
    int64_t iStack_70;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
    uStack_38 = 0;
    iStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    ktime_get_real_ts64(&uStack_38);
    time64_to_tm(uStack_38,0,&uStack_60);
    iStack_70 = iStack_30 / 1000;
    uStack_78 = uStack_60;
    uStack_80 = uStack_60._4_4_;
    sym.xiaomi_touch_printf(iStack_70,0x8001edb,0x8001b0f,0x8002a01);
    pcVar8 = NULL;
    if (arg1 + -0x14e8 != NULL) {
        uVar1 = *(arg1 + -0x14e8);
        pcVar8 = uVar1;
        sym.xiaomi_touch_printf(noname_0,0x800214b,0x8001b0f,pcVar8 & 0xffffffff);
        if (uVar1 < 2) {
            uVar2 = *0x80006e2 >> (uVar1 & 0x1f);
            uVar5 = uVar2;
            if ((uVar2 & 1) != 0) {
                if (uVar1 * 0x1c0 != -0x80032b8) {
                    pcVar8 = *(uVar1 * 0x1c0 + 0x8003468);
                    if (pcVar8 != NULL) {
                        __cfi_slowpath_diag(0x16160375c26fc5,pcVar8,0x8000bd0);
                        (*pcVar8)(0);
                    }
                }
                goto code_r0x08005ddc;
            }
            pcVar4 = "MI_TP_E: %s: panel in touch id %d hasn\'t register, return!";
        }
        else {
            pcVar4 = "MI_TP_E: %s: touch id %d hasn\'t select, return!";
            uVar5 = extraout_x8;
        }
        sym.xiaomi_touch_printf(uVar5,pcVar4,0x8001707,pcVar8 & 0xffffffff);
    }
code_r0x08005ddc:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_28) {
        return;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.xiaomi_touch_resume_work;
    pcStack_98 = sym.xiaomi_touch_resume_work;
    iVar6 = sp_el0;
    iStack_a8 = *(iVar6 + 0x5e0);
    uStack_b8 = 0;
    iStack_b0 = 0;
    iStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e0 = 0;
    puStack_a0 = &stack0xffffffffffffffe0;
    pcStack_90 = pcVar8;
    ktime_get_real_ts64(&uStack_b8);
    time64_to_tm(uStack_b8,0,&uStack_e0);
    iVar6 = iStack_c8 + 0x76c;
    pcVar4 = "xiaomi_touch_resume_work";
    uVar5 = 0x8002a01;
    sym.xiaomi_touch_printf(iStack_b0 / 1000,0x8001edb,0x8001150,0x8002a01);
    if (iVar3 + -0x1518 != NULL) {
        uVar1 = *(iVar3 + -0x1518);
        pcVar4 = "xiaomi_touch_resume_work";
        uVar5 = uVar1 & 0xffffffff;
        sym.xiaomi_touch_printf(noname_0_00,0x800214b,0x8001150,uVar5);
        if (uVar1 < 2) {
            uVar2 = *0x80006e2 >> (uVar1 & 0x1f);
            uVar7 = uVar2;
            if ((uVar2 & 1) != 0) {
                if (uVar1 * 0x1c0 != -0x80032b8) {
                    pcVar8 = *(uVar1 * 0x1c0 + 0x8003468);
                    if (pcVar8 != NULL) {
                        pcVar4 = 0x8000bf0;
                        __cfi_slowpath_diag(0x16160375c26fc5,pcVar8,0x8000bf0);
                        (*pcVar8)(1);
                    }
                }
                goto code_r0x08005f84;
            }
            arg1_00 = "MI_TP_E: %s: panel in touch id %d hasn\'t register, return!";
        }
        else {
            arg1_00 = "MI_TP_E: %s: touch id %d hasn\'t select, return!";
            uVar7 = extraout_x8_00;
        }
        pcVar4 = "get_xiaomi_touch_driver_param";
        uVar5 = uVar1 & 0xffffffff;
        sym.xiaomi_touch_printf(uVar7,arg1_00,0x8001707,uVar5);
    }
code_r0x08005f84:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_a8) {
        return;
    }
    auVar9 = __stack_chk_fail();
    *extraout_x18_00 = sym.xiaomi_touch_mievent_report_int;
    arg3 = auVar9._0_8_ & 0xffffffff;
    uVar7 = arg3;
    sym.xiaomi_touch_printf(noname_0_01,0x80012de,0x8000f5a,arg3);
    iVar3 = cdev_tevent_alloc(arg3);
    if (iVar3 == 0) {
        sym.xiaomi_touch_printf(noname_0_02,0x8001c4a,0x8000f5a,uVar7);
    }
    else {
        cdev_tevent_add_int(iVar3,"panel_id",auVar9._8_4_);
        cdev_tevent_add_str(iVar3,"fault_name",pcVar4);
        cdev_tevent_add_str(iVar3,"vendor_name",uVar5);
        cdev_tevent_add_int(iVar3,"error_code",iVar6);
        cdev_tevent_write(iVar3);
        cdev_tevent_destroy(iVar3);
    }
    return;
}


// ===== sym.xiaomi_touch_resume_work @ 0x08005e0c (size 424) =====

void sym.xiaomi_touch_resume_work(int64_t arg1)

{
    uint8_t uVar1;
    uint8_t uVar2;
    int64_t iVar3;
    char *arg1_00;
    char *pcVar4;
    uint64_t arg3;
    int64_t iVar5;
    ulong noname_0;
    uint64_t extraout_x8;
    uint64_t uVar6;
    ulong noname_0_00;
    ulong noname_0_01;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar7;
    uint64_t arg3_00;
    ulong unaff_x30;
    uchar auVar8 [12];
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    ulong uStack_40;
    ulong uStack_38;
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    uStack_38 = 0;
    iStack_30 = 0;
    iStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    ktime_get_real_ts64(&uStack_38);
    time64_to_tm(uStack_38,0,&uStack_60);
    iVar5 = iStack_48 + 0x76c;
    pcVar4 = "xiaomi_touch_resume_work";
    arg3 = 0x8002a01;
    sym.xiaomi_touch_printf(iStack_30 / 1000,0x8001edb,0x8001150,0x8002a01);
    if (arg1 + -0x1518 != NULL) {
        uVar1 = *(arg1 + -0x1518);
        pcVar4 = "xiaomi_touch_resume_work";
        arg3 = uVar1 & 0xffffffff;
        sym.xiaomi_touch_printf(noname_0,0x800214b,0x8001150,arg3);
        if (uVar1 < 2) {
            uVar2 = *0x80006e2 >> (uVar1 & 0x1f);
            uVar6 = uVar2;
            if ((uVar2 & 1) != 0) {
                if (uVar1 * 0x1c0 != -0x80032b8) {
                    pcVar7 = *(uVar1 * 0x1c0 + 0x8003468);
                    if (pcVar7 != NULL) {
                        pcVar4 = 0x8000bf0;
                        __cfi_slowpath_diag(0x16160375c26fc5,pcVar7,0x8000bf0);
                        (*pcVar7)(1);
                    }
                }
                goto code_r0x08005f84;
            }
            arg1_00 = "MI_TP_E: %s: panel in touch id %d hasn\'t register, return!";
        }
        else {
            arg1_00 = "MI_TP_E: %s: touch id %d hasn\'t select, return!";
            uVar6 = extraout_x8;
        }
        pcVar4 = "get_xiaomi_touch_driver_param";
        arg3 = uVar1 & 0xffffffff;
        sym.xiaomi_touch_printf(uVar6,arg1_00,0x8001707,arg3);
    }
code_r0x08005f84:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return;
    }
    auVar8 = __stack_chk_fail();
    *extraout_x18 = sym.xiaomi_touch_mievent_report_int;
    arg3_00 = auVar8._0_8_ & 0xffffffff;
    uVar6 = arg3_00;
    sym.xiaomi_touch_printf(noname_0_00,0x80012de,0x8000f5a,arg3_00);
    iVar3 = cdev_tevent_alloc(arg3_00);
    if (iVar3 == 0) {
        sym.xiaomi_touch_printf(noname_0_01,0x8001c4a,0x8000f5a,uVar6);
    }
    else {
        cdev_tevent_add_int(iVar3,"panel_id",auVar8._8_4_);
        cdev_tevent_add_str(iVar3,"fault_name",pcVar4);
        cdev_tevent_add_str(iVar3,"vendor_name",arg3);
        cdev_tevent_add_int(iVar3,"error_code",iVar5);
        cdev_tevent_write(iVar3);
        cdev_tevent_destroy(iVar3);
    }
    return;
}


// ===== sym.xiaomi_touch_mievent_report_int @ 0x08005fb4 (size 256) =====

void sym.xiaomi_touch_mievent_report_int(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint64_t arg3_00;
    ulong in_x8;
    ulong noname_0;
    ulong *in_x18;
    uint64_t arg3_01;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg3_01 = arg1 & 0xffffffff;
    arg3_00 = arg3_01;
    sym.xiaomi_touch_printf(in_x8,0x80012de,0x8000f5a,arg3_01);
    iVar1 = cdev_tevent_alloc(arg3_01);
    if (iVar1 == 0) {
        sym.xiaomi_touch_printf(noname_0,0x8001c4a,0x8000f5a,arg3_00);
    }
    else {
        cdev_tevent_add_int(iVar1,"panel_id",arg2);
        cdev_tevent_add_str(iVar1,"fault_name",arg3);
        cdev_tevent_add_str(iVar1,"vendor_name",arg4);
        cdev_tevent_add_int(iVar1,"error_code");
        cdev_tevent_write(iVar1);
        cdev_tevent_destroy(iVar1);
    }
    return;
}


// ===== sym.xiaomi_touch_mievent_report_str @ 0x080060b4 (size 220) =====

void sym.xiaomi_touch_mievent_report_str(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint64_t arg3_00;
    ulong in_x8;
    ulong noname_0;
    ulong *in_x18;
    uint64_t arg3_01;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg3_01 = arg1 & 0xffffffff;
    arg3_00 = arg3_01;
    sym.xiaomi_touch_printf(in_x8,0x8001c6f,0x80015b1,arg3_01);
    iVar1 = cdev_tevent_alloc(arg3_01);
    if (iVar1 == 0) {
        sym.xiaomi_touch_printf(noname_0,0x8001c4a,0x80015b1,arg3_00);
    }
    else {
        cdev_tevent_add_int(iVar1,"panel_id",arg2);
        cdev_tevent_add_str(iVar1,"fault_name",arg3);
        cdev_tevent_add_str(iVar1,"vendor_name",arg4);
        cdev_tevent_write(iVar1);
        cdev_tevent_destroy(iVar1);
    }
    return;
}


// ===== sym.xiaomi_drm_panel_notifier_callback @ 0x08006190 (size 332) =====

void sym.xiaomi_drm_panel_notifier_callback(ulong noname_0,int64_t arg1,int64_t arg2)

{
    char *arg3;
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t in_x3;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        sym.xiaomi_touch_printf(noname_0,0x800287e,0x800254e,in_x3);
    }
    else if (*arg1 != 4) {
        sym.xiaomi_touch_printf(noname_0,0x8001cae,0x800254e,*arg1);
        uVar1 = *arg1;
        uVar2 = uVar1 - 1;
        if (uVar2 < 4) {
    //switch table (3 cases) at 0x8000e95
            switch(*(uVar2 + 0x8000e95) * 4 + 0x8006200) {
            case 0x8006204:
                if (*(arg1 + 0xc) != '\0') {
                    return;
                }
                arg3 = "POWER DOWN";
                if (uVar1 != 3) {
                    arg3 = 0x8002adb;
                }
                sym.xiaomi_touch_printf(0x8002adb,0x8001ec2,0x800254e,arg3);
                flush_workqueue(*(arg2 + 0x14e0));
                iVar3 = 0x14e8;
                break;
            case 0x800629c:
                if (*(arg1 + 0xc) == 0) {
                    return;
                }
                sym.xiaomi_touch_printf(*(arg1 + 0xc),0x800243a,0x800254e,uVar1);
                flush_workqueue(*(arg2 + 0x14e0));
                iVar3 = 0x1518;
            }
            queue_work_on(0x20,*(arg2 + 0x14e0),arg2 + iVar3);
        }
        else {
            sym.xiaomi_touch_printf(uVar2,0x8001ff8,0x800254e,uVar1);
        }
    }
    return;
}


// ===== sym.xiaomi_touch_probe @ 0x080062dc (size 256) =====

ulong sym.xiaomi_touch_probe(void)

{
    int64_t iVar1;
    int64_t in_x3;
    ulong *arg3;
    ulong uVar2;
    ulong extraout_x8;
    ulong noname_0;
    ulong extraout_x8_00;
    ulong extraout_x8_01;
    ulong noname_0_00;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_58;
    code *pcStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    sym.xiaomi_touch_printf(iStack_28,0x8002d8d,0x8001f23,in_x3);
    memset(obj.pid,0,0x2f58);
    sym.xiaomi_touch_sys_init();
    sym.xiaomi_touch_operation_init(0x80006e0);
    arg3 = &uStack_58;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    pcStack_50 = sym.nl_data_ready.cfi_jt;
    _segment.ehdr = __netlink_kernel_create(init_net,0x18,obj.__this_module);
    uVar2 = 0x8000000;
    if (_segment.ehdr == 0) {
        sym.xiaomi_touch_printf(0x8000000,0x8001ae5,0x8000f4d,arg3);
        uVar2 = extraout_x8;
    }
    sym.xiaomi_touch_printf(uVar2,0x8002457,0x8001f23,arg3);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return 0;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.xiaomi_touch_remove;
    sym.xiaomi_touch_printf(noname_0,0x8002d8d,0x8001b29,arg3);
    uVar2 = extraout_x8_00;
    if (_segment.ehdr != 0) {
        netlink_kernel_release();
        _segment.ehdr = 0;
        uVar2 = extraout_x8_01;
    }
    sym.xiaomi_touch_printf(uVar2,0x8002eca,0x80027b4,arg3);
    misc_deregister(obj.misc_dev.llvm.16834981253627934478);
    sym.xiaomi_touch_sys_remove();
    memset(obj.pid,0,0x2f58);
    sym.xiaomi_touch_printf(noname_0_00,0x8002457,0x8001b29,arg3);
    return 0;
}


// ===== sym.xiaomi_touch_remove @ 0x080063dc (size 172) =====

ulong sym.xiaomi_touch_remove(ulong param_1)

{
    int64_t in_x3;
    ulong extraout_x8;
    ulong extraout_x8_00;
    ulong noname_0;
    ulong noname_0_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.xiaomi_touch_printf(param_1,0x8002d8d,0x8001b29,in_x3);
    noname_0 = extraout_x8;
    if (_segment.ehdr != 0) {
        netlink_kernel_release();
        _segment.ehdr = 0;
        noname_0 = extraout_x8_00;
    }
    sym.xiaomi_touch_printf(noname_0,0x8002eca,0x80027b4,in_x3);
    misc_deregister(obj.misc_dev.llvm.16834981253627934478);
    sym.xiaomi_touch_sys_remove();
    memset(obj.pid,0,0x2f58);
    sym.xiaomi_touch_printf(noname_0_00,0x8002457,0x8001b29,in_x3);
    return 0;
}


// ===== sym.last_touch_events_collect @ 0x08006488 (size 164) =====

void sym.last_touch_events_collect(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    code *pcVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *0x8003000;
    uVar4 = arg1;
    if (uVar4 < 10) {
        if (9 < uVar4) {
code_r0x08006528:
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x5512,0x800652c);
            (*pcVar3)();
        }
        if (*(obj.last_touch_events_collect.event_state + (arg1 & 0xffffffffU) * 4) != arg2) {
            uVar5 = *0x8003000;
            *(obj.last_touch_events_collect.event_state + (arg1 & 0xffffffffU) * 4) = arg2;
            if (0x1ff < uVar2) goto code_r0x08006528;
            iVar1 = uVar5 * 0x18;
            uVar6 = 1;
            if (arg2 == 0) {
                uVar6 = 2;
            }
            *(iVar1 + 0x8003678) = uVar4;
            *(iVar1 + 0x800367c) = uVar6;
            ktime_get_real_ts64(iVar1 + 0x8003680);
            _obj.last_touch_events = _obj.last_touch_events + 1 & 0x1ff;
        }
    }
    return;
}


// ===== sym.event_stop @ 0x0800652c (size 12) =====

void sym.event_stop(void)

{
    return;
}


// ===== sym.event_start @ 0x08006538 (size 56) =====

int sym.event_start(ulong noname_0,int64_t arg1)

{
    int iVar1;
    
    iVar1 = 0;
    if (*arg1 < 0x200) {
        iVar1 = (_obj.last_touch_events + *arg1 & 0x1ffU) * 0x18 + 0x8003678;
    }
    return iVar1;
}


// ===== sym.event_next @ 0x08006570 (size 64) =====

int sym.event_next(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    
    iVar1 = *arg1 + 1;
    *arg1 = iVar1;
    iVar2 = 0;
    if (iVar1 < 0x200) {
        iVar2 = (_obj.last_touch_events + iVar1 & 0x1ffU) * 0x18 + 0x8003678;
    }
    return iVar2;
}


// ===== sym.event_show @ 0x080065b0 (size 208) =====

ulong sym.event_show(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    uint uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_30 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    if (*(arg2 + 4) != 0) {
        uVar2 = rtc_time64_to_tm(*(arg2 + 8),&uStack_50);
        return uVar2;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return 0;
    }
    uVar2 = __stack_chk_fail();
    return uVar2;
}


// ===== sym.xiaomi_touch_create_proc @ 0x08006680 (size 192) =====

ulong sym.xiaomi_touch_create_proc(int64_t arg1)

{
    int64_t *piVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    int64_t iVar4;
    code *pcVar5;
    ulong uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    code *in_x3;
    ulong noname_0;
    ulong noname_0_00;
    ulong noname_0_01;
    ulong noname_0_02;
    ulong noname_0_03;
    ulong noname_0_04;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar9;
    ulong unaff_x30;
    ulong uStack_98;
    ushort uStack_90;
    ulong uStack_88;
    ulong uStack_80;
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
    if (arg1 != 0) {
        uVar3 = *arg1;
        sym.xiaomi_touch_printf(iStack_48,0x8002da6,0x8002f14,uVar3 & 0xffffffff);
        if (uVar3 < 2) {
            uStack_90 = 0;
            uStack_98 = 0;
            if (uVar3 == 1) {
                uVar6 = snprintf(&stack0xffffffffffffff68,10,0x8001038,1);
                return uVar6;
            }
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_68 = 0;
            uStack_60 = 0;
            uVar8 = uVar3;
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_88 = 0;
            uStack_80 = 0;
            snprintf(&stack0xffffffffffffff78,0x40,"tp_fw_version%s",&stack0xffffffffffffff68);
            pcVar5 = obj.proc_tp_ops;
            iVar7 = proc_create_data(&stack0xffffffffffffff78,0x1a4,0,obj.proc_tp_ops,arg1);
            if (iVar7 == 0) {
                sym.xiaomi_touch_printf(noname_0_00,0x8002f64,0x800105e,pcVar5);
            }
            uVar9 = uVar8 * 0x20;
            uStack_88 = 0;
            uStack_80 = 0;
            *(uVar9 + 0x8006678) = iVar7;
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_68 = 0;
            uStack_60 = 0;
            uStack_58 = 0;
            uStack_50 = 0;
            snprintf(&stack0xffffffffffffff78,0x40,"tp_lockdown_info%s",&stack0xffffffffffffff68);
            pcVar5 = obj.proc_tp_ops;
            iVar7 = proc_create_data(&stack0xffffffffffffff78,0x1a4,0,obj.proc_tp_ops,arg1);
            if (iVar7 == 0) {
                sym.xiaomi_touch_printf(noname_0_01,0x8002f64,0x800105e,pcVar5);
            }
            if (0x40 < (uVar8 << 5 | 8)) {
code_r0x080069d4:
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(1,0x80069d8);
                (*pcVar5)();
            }
            uStack_88 = 0;
            uStack_80 = 0;
            *(sym.xiaomi_touch_create_proc + uVar8 * 0x20) = iVar7;
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_68 = 0;
            uStack_60 = 0;
            uStack_58 = 0;
            uStack_50 = 0;
            snprintf(&stack0xffffffffffffff78,0x40,"tp_selftest%s",&stack0xffffffffffffff68);
            pcVar5 = obj.proc_tp_ops;
            iVar7 = proc_create_data(&stack0xffffffffffffff78,0x1a4,0,obj.proc_tp_ops,arg1);
            if (iVar7 == 0) {
                sym.xiaomi_touch_printf(noname_0_02,0x8002f64,0x800105e,pcVar5);
            }
            if (0x40 < (uVar9 | 0x10)) goto code_r0x080069d4;
            uStack_88 = 0;
            uStack_80 = 0;
            *(uVar8 * 0x20 + 0x8006688) = iVar7;
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_68 = 0;
            uStack_60 = 0;
            uStack_58 = 0;
            uStack_50 = 0;
            snprintf(&stack0xffffffffffffff78,0x40,"tp_data_dump%s",&stack0xffffffffffffff68);
            in_x3 = obj.proc_tp_ops;
            iVar7 = proc_create_data(&stack0xffffffffffffff78,0x1a4,0,obj.proc_tp_ops,arg1);
            if (iVar7 == 0) {
                sym.xiaomi_touch_printf(noname_0_03,0x8002f64,0x800105e,in_x3);
            }
            iVar4 = *0x8006000;
            if (0x40 < (uVar9 | 0x18)) goto code_r0x080069d4;
            *(uVar8 * 0x20 + 0x8006690) = iVar7;
            if (iVar4 == 0) {
                in_x3 = reloc.event_start.9d8770af7b3671e63c35d9718c8d6b6b.cfi_jt;
                *0x8006000 = proc_create_seq_private
                                       ("last_touch_events",0x1a4,0,
                                        reloc.event_start.9d8770af7b3671e63c35d9718c8d6b6b.cfi_jt,0,0);
                if (*0x8006000 == 0) {
                    sym.xiaomi_touch_printf(noname_0_04,0x8002903,0x8002f14,in_x3);
                    uVar6 = 0xffffffff;
                    goto code_r0x08006980;
                }
                memset(obj.last_touch_events,0,0x3008);
            }
            __mutex_init(uVar8 * 0x30 + 0x80066c0,"&tp_proc_mutex[touch_id]",0x80066c0);
            uVar6 = 0;
            goto code_r0x08006980;
        }
        in_x3 = uVar3 & 0xffffffff;
        sym.xiaomi_touch_printf(noname_0,0x8002790,0x8002f14,in_x3);
    }
    uVar6 = 0xffffffff;
code_r0x08006980:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_48) {
        return uVar6;
    }
    uVar8 = __stack_chk_fail(uVar6);
    *extraout_x18 = sym.xiaomi_touch_remove_proc;
    uVar2 = uVar8 & 0xff;
    if (uVar2 < 2) {
        uVar8 = uVar8 & 0xff;
        piVar1 = uVar8 * 0x20 + 0x8006678;
        if (*piVar1 != 0) {
            sym.xiaomi_touch_printf(uVar2,0x8001498,0x8000f14,*piVar1);
            proc_remove(*piVar1);
            *piVar1 = 0;
        }
        if ((uVar8 << 5 | 8) < 0x41) {
            uVar9 = uVar8 * 0x20;
            pcVar5 = sym.xiaomi_touch_create_proc + uVar9;
            if (*pcVar5 != 0) {
                sym.xiaomi_touch_printf(uVar9 + 0x8006678,0x8001498,0x8000f14,*pcVar5);
                proc_remove(*pcVar5);
                *pcVar5 = 0;
            }
            if ((uVar9 | 0x10) < 0x41) {
                piVar1 = uVar8 * 0x20 + 0x8006688;
                if (*piVar1 != 0) {
                    sym.xiaomi_touch_printf(uVar8 * 0x20 + 0x8006678,0x8001498,0x8000f14,*piVar1);
                    proc_remove(*piVar1);
                    *piVar1 = 0;
                }
                if ((uVar9 | 0x18) < 0x41) {
                    piVar1 = uVar8 * 0x20 + 0x8006690;
                    if (*piVar1 != 0) {
                        sym.xiaomi_touch_printf(uVar8 * 0x20 + 0x8006678,0x8001498,0x8000f14,*piVar1);
                        proc_remove(*piVar1);
                        *piVar1 = 0;
                    }
                    if (*0x8006000 == 0) {
                        return 0;
                    }
                    proc_remove();
                    *0x8006000 = 0;
                    return 0;
                }
            }
        }
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(1,0x8006b58);
        (*pcVar5)();
    }
    sym.xiaomi_touch_printf(uVar2,0x8001a5a,0x8000f14,in_x3);
    return 0xffffffff;
}


// ===== obj.self_test_result @ 0x08006740 (size 8) =====

ulong obj.self_test_result(void)

{
    int64_t *piVar1;
    uint32_t uVar2;
    int64_t iVar3;
    code *pcVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong noname_0;
    ulong noname_0_00;
    ulong noname_0_01;
    ulong noname_0_02;
    ulong noname_0_03;
    ulong *extraout_x18;
    uint64_t unaff_x20;
    uint64_t uVar7;
    uint64_t uVar8;
    int64_t unaff_x29;
    ulong uStack0000000000000018;
    ulong uStack0000000000000020;
    ulong uStack0000000000000028;
    ulong uStack0000000000000030;
    ulong uStack0000000000000038;
    ulong uStack0000000000000040;
    ulong in_stack_00000048;
    ulong in_stack_00000050;
    
    uStack0000000000000038 = 0;
    uStack0000000000000040 = 0;
    uVar7 = unaff_x20 & 0xff;
    uStack0000000000000028 = 0;
    uStack0000000000000030 = 0;
    uStack0000000000000018 = 0;
    uStack0000000000000020 = 0;
    snprintf();
    pcVar4 = obj.proc_tp_ops;
    iVar5 = proc_create_data(&stack0x00000018,0x1a4,0);
    if (iVar5 == 0) {
        sym.xiaomi_touch_printf(noname_0,0x8002f64,0x800105e,pcVar4);
    }
    uVar8 = uVar7 * 0x20;
    uStack0000000000000018 = 0;
    uStack0000000000000020 = 0;
    *(uVar8 + 0x8006678) = iVar5;
    uStack0000000000000028 = 0;
    uStack0000000000000030 = 0;
    uStack0000000000000038 = 0;
    uStack0000000000000040 = 0;
    in_stack_00000048 = 0;
    in_stack_00000050 = 0;
    snprintf(&stack0x00000018,0x40,"tp_lockdown_info%s",&stack0x00000008);
    pcVar4 = obj.proc_tp_ops;
    iVar5 = proc_create_data(&stack0x00000018,0x1a4,0);
    if (iVar5 == 0) {
        sym.xiaomi_touch_printf(noname_0_00,0x8002f64,0x800105e,pcVar4);
    }
    if (0x40 < (uVar7 << 5 | 8)) {
code_r0x080069d4:
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(1,0x80069d8);
        (*pcVar4)();
    }
    uStack0000000000000018 = 0;
    uStack0000000000000020 = 0;
    *(sym.xiaomi_touch_create_proc + uVar7 * 0x20) = iVar5;
    uStack0000000000000028 = 0;
    uStack0000000000000030 = 0;
    uStack0000000000000038 = 0;
    uStack0000000000000040 = 0;
    in_stack_00000048 = 0;
    in_stack_00000050 = 0;
    snprintf(&stack0x00000018,0x40,"tp_selftest%s",&stack0x00000008);
    pcVar4 = obj.proc_tp_ops;
    iVar5 = proc_create_data(&stack0x00000018,0x1a4,0);
    if (iVar5 == 0) {
        sym.xiaomi_touch_printf(noname_0_01,0x8002f64,0x800105e,pcVar4);
    }
    if (0x40 < (uVar8 | 0x10)) goto code_r0x080069d4;
    uStack0000000000000018 = 0;
    uStack0000000000000020 = 0;
    *(uVar7 * 0x20 + 0x8006688) = iVar5;
    uStack0000000000000028 = 0;
    uStack0000000000000030 = 0;
    uStack0000000000000038 = 0;
    uStack0000000000000040 = 0;
    in_stack_00000048 = 0;
    in_stack_00000050 = 0;
    snprintf(&stack0x00000018,0x40,"tp_data_dump%s",&stack0x00000008);
    pcVar4 = obj.proc_tp_ops;
    iVar5 = proc_create_data(&stack0x00000018,0x1a4,0);
    if (iVar5 == 0) {
        sym.xiaomi_touch_printf(noname_0_02,0x8002f64,0x800105e,pcVar4);
    }
    iVar3 = *0x8006000;
    if (0x40 < (uVar8 | 0x18)) goto code_r0x080069d4;
    *(uVar7 * 0x20 + 0x8006690) = iVar5;
    if (iVar3 == 0) {
        pcVar4 = reloc.event_start.9d8770af7b3671e63c35d9718c8d6b6b.cfi_jt;
        *0x8006000 = proc_create_seq_private
                               ("last_touch_events",0x1a4,0,reloc.event_start.9d8770af7b3671e63c35d9718c8d6b6b.cfi_jt
                                ,0,0);
        if (*0x8006000 == 0) {
            sym.xiaomi_touch_printf(noname_0_03,0x8002903,0x8002f14,pcVar4);
            uVar6 = 0xffffffff;
            goto code_r0x08006980;
        }
        memset(obj.last_touch_events,0,0x3008);
    }
    __mutex_init(uVar7 * 0x30 + 0x80066c0,"&tp_proc_mutex[touch_id]",0x80066c0);
    uVar6 = 0;
code_r0x08006980:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == *(unaff_x29 + -8)) {
        return uVar6;
    }
    uVar7 = __stack_chk_fail(uVar6);
    *extraout_x18 = sym.xiaomi_touch_remove_proc;
    uVar2 = uVar7 & 0xff;
    if (uVar2 < 2) {
        uVar7 = uVar7 & 0xff;
        piVar1 = uVar7 * 0x20 + 0x8006678;
        if (*piVar1 != 0) {
            sym.xiaomi_touch_printf(uVar2,0x8001498,0x8000f14,*piVar1);
            proc_remove(*piVar1);
            *piVar1 = 0;
        }
        if ((uVar7 << 5 | 8) < 0x41) {
            uVar8 = uVar7 * 0x20;
            pcVar4 = sym.xiaomi_touch_create_proc + uVar8;
            if (*pcVar4 != 0) {
                sym.xiaomi_touch_printf(uVar8 + 0x8006678,0x8001498,0x8000f14,*pcVar4);
                proc_remove(*pcVar4);
                *pcVar4 = 0;
            }
            if ((uVar8 | 0x10) < 0x41) {
                piVar1 = uVar7 * 0x20 + 0x8006688;
                if (*piVar1 != 0) {
                    sym.xiaomi_touch_printf(uVar7 * 0x20 + 0x8006678,0x8001498,0x8000f14,*piVar1);
                    proc_remove(*piVar1);
                    *piVar1 = 0;
                }
                if ((uVar8 | 0x18) < 0x41) {
                    piVar1 = uVar7 * 0x20 + 0x8006690;
                    if (*piVar1 != 0) {
                        sym.xiaomi_touch_printf(uVar7 * 0x20 + 0x8006678,0x8001498,0x8000f14,*piVar1);
                        proc_remove(*piVar1);
                        *piVar1 = 0;
                    }
                    if (*0x8006000 == 0) {
                        return 0;
                    }
                    proc_remove();
                    *0x8006000 = 0;
                    return 0;
                }
            }
        }
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(1,0x8006b58);
        (*pcVar4)();
    }
    sym.xiaomi_touch_printf(uVar2,0x8001a5a,0x8000f14,pcVar4);
    return 0xffffffff;
}


// ===== obj.proc_tp_write.self_test_cmd @ 0x08006748 (size 660) =====

void obj.proc_tp_write.self_test_cmd(void)

{
    ulong uStack0000000000000018;
    ulong uStack0000000000000020;
    ulong uStack0000000000000028;
    ulong uStack0000000000000030;
    
    uStack0000000000000028 = 0;
    uStack0000000000000030 = 0;
    uStack0000000000000018 = 0;
    uStack0000000000000020 = 0;
    snprintf();
    proc_create_data(&stack0x00000018,0x1a4,0,obj.proc_tp_ops);
    return;
}


// ===== sym.xiaomi_touch_remove_proc @ 0x080069dc (size 380) =====

ulong sym.xiaomi_touch_remove_proc(int64_t arg1)

{
    int64_t *piVar1;
    uint32_t uVar2;
    code *pcVar3;
    int64_t in_x3;
    ulong *in_x18;
    uint64_t uVar4;
    uint64_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = arg1 & 0xff;
    if (1 < uVar2) {
        sym.xiaomi_touch_printf(uVar2,0x8001a5a,0x8000f14,in_x3);
        return 0xffffffff;
    }
    uVar4 = arg1 & 0xff;
    piVar1 = uVar4 * 0x20 + 0x8006678;
    if (*piVar1 != 0) {
        sym.xiaomi_touch_printf(uVar2,0x8001498,0x8000f14,*piVar1);
        proc_remove(*piVar1);
        *piVar1 = 0;
    }
    if ((uVar4 << 5 | 8) < 0x41) {
        uVar5 = uVar4 * 0x20;
        pcVar3 = sym.xiaomi_touch_create_proc + uVar5;
        if (*pcVar3 != 0) {
            sym.xiaomi_touch_printf(uVar5 + 0x8006678,0x8001498,0x8000f14,*pcVar3);
            proc_remove(*pcVar3);
            *pcVar3 = 0;
        }
        if ((uVar5 | 0x10) < 0x41) {
            piVar1 = uVar4 * 0x20 + 0x8006688;
            if (*piVar1 != 0) {
                sym.xiaomi_touch_printf(uVar4 * 0x20 + 0x8006678,0x8001498,0x8000f14,*piVar1);
                proc_remove(*piVar1);
                *piVar1 = 0;
            }
            if ((uVar5 | 0x18) < 0x41) {
                piVar1 = uVar4 * 0x20 + 0x8006690;
                if (*piVar1 != 0) {
                    sym.xiaomi_touch_printf(uVar4 * 0x20 + 0x8006678,0x8001498,0x8000f14,*piVar1);
                    proc_remove(*piVar1);
                    *piVar1 = 0;
                }
                if (*0x8006000 == 0) {
                    return 0;
                }
                proc_remove();
                *0x8006000 = 0;
                return 0;
            }
        }
    }
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(1,0x8006b58);
    (*pcVar3)();
}


// ===== sym.proc_open @ 0x08006b58 (size 364) =====

ulong sym.proc_open(ulong noname_0,int64_t arg1)

{
    int64_t arg3;
    uint8_t uVar1;
    code *pcVar2;
    int iVar3;
    uint8_t *puVar4;
    int64_t iVar5;
    char *arg1_00;
    int64_t in_x3;
    ulong noname_0_00;
    ulong *in_x18;
    uint64_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar4 = PDE_DATA();
    uVar1 = *puVar4;
    uVar6 = uVar1;
    if (uVar6 < 3) {
        arg3 = *(arg1 + 0x18) + 0x38;
        mutex_lock(uVar6 * 0x30 + 0x80066c0);
        *(arg1 + 0xd8) = puVar4;
        iVar3 = strncmp("tp_data_dump",arg3,0xc);
        if (iVar3 == 0) {
            sym.xiaomi_touch_printf(noname_0_00,0x8001169,0x8002469,in_x3);
            iVar5 = sym.kvzalloc_retry(0x3000,3);
            if (1 < uVar1) goto code_r0x08006cbc;
            if (0x10 < uVar6 * 8) goto code_r0x08006cc0;
            *(uVar6 * 8 + 0x8006720) = iVar5;
            if (iVar5 != 0) goto code_r0x08006c58;
            arg1_00 = "MI_TP_E: %s: alloc tp proc dump memory error";
        }
        else {
            sym.xiaomi_touch_printf(noname_0_00,0x8001ce2,0x8002469,in_x3);
            iVar5 = sym.kvzalloc_retry(0x100,3);
            if (1 < uVar1) goto code_r0x08006cbc;
            if (0x10 < uVar6 * 8) {
code_r0x08006cc0:
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(1,0x8006cc4);
                (*pcVar2)();
            }
            *(uVar6 * 8 + 0x8006720) = iVar5;
            if (iVar5 != 0) {
code_r0x08006c58:
                *(uVar6 * 8 + 0x8006730) = 0;
                sym.xiaomi_touch_printf(0x8006730,0x800185b,0x8002469,arg3);
                return 0;
            }
            arg1_00 = "MI_TP_E: %s: alloc tp proc data memory error";
        }
        sym.xiaomi_touch_printf(0x8006720,arg1_00,0x8002469,in_x3);
        return 0xffffffff;
    }
code_r0x08006cbc:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8006cc0);
    (*pcVar2)();
}


// ===== sym.proc_tp_read @ 0x08006cc4 (size 1372) =====

int64_t sym.proc_tp_read(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    code *pcVar2;
    int iVar3;
    int64_t arg3_00;
    ulong noname_0;
    ulong noname_0_00;
    ulong noname_0_01;
    uint *puVar4;
    uint64_t noname_0_02;
    ulong noname_0_03;
    ulong *in_x18;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint8_t *puVar9;
    ulong unaff_x30;
    uchar noname_1 [16];
    int iStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    puVar9 = *(arg1 + 0xd8);
    iStack_6c = 0;
    iVar5 = *(arg1 + 0x18);
    if (puVar9 == NULL) {
code_r0x08007190:
        iVar5 = -0xe;
    }
    else {
        uVar1 = *puVar9;
        iVar7 = uVar1;
        uVar8 = uVar1;
        sym.xiaomi_touch_printf(iStack_68,0x800281e,0x80019a3,*arg4);
        if (*arg4 == 0) {
            iVar5 = iVar5 + 0x38;
            arg3_00 = iVar5;
            sym.xiaomi_touch_printf(0,0x8002f93,0x80019a3,iVar5);
            iVar3 = strncmp("tp_fw_version",iVar5,10);
            if (iVar3 == 0) {
                sym.xiaomi_touch_printf(noname_0,0x8001870,0x80019a3,arg3_00);
                pcVar2 = *(puVar9 + 0x130);
                if (pcVar2 != NULL) {
                    __cfi_slowpath_diag(0xf8ea10d0b8f3433,pcVar2,0x8000c10);
                    (*pcVar2)(puVar9 + 0xd7);
                }
                if (1 < uVar1) goto code_r0x0800721c;
                uVar6 = iVar7 * 8;
                if (0x10 < uVar6) goto code_r0x08007204;
                iVar3 = snprintf(*(uVar6 + 0x8006720),0x100,"fw version: %s\n",puVar9 + 0xd7);
                iStack_6c = iStack_6c + iVar3;
                iVar3 = snprintf(*(uVar6 + 0x8006720) + iStack_6c,0x100 - iStack_6c,"driver version: %s\n",
                                 puVar9 + 0x97);
                iStack_6c = iStack_6c + iVar3;
                iVar3 = snprintf(*(uVar6 + 0x8006720) + iStack_6c,0x100 - iStack_6c,"hal version: %s\n",puVar9 + 1);
                iStack_6c = iStack_6c + iVar3;
                iVar3 = snprintf(*(uVar6 + 0x8006720) + iStack_6c,0x100 - iStack_6c,"xiaomi-touch version: %s\n",
                                 "2023.09.13-01");
                iStack_6c = iStack_6c + iVar3;
                *(uVar6 + 0x8006730) = iStack_6c;
            }
            else {
                iVar3 = strncmp("tp_lockdown_info",iVar5,0x10);
                if (iVar3 == 0) {
                    sym.xiaomi_touch_printf(noname_0_00,0x8002950,0x80019a3,arg3_00);
                    pcVar2 = *(puVar9 + 0x128);
                    if (pcVar2 == NULL) {
                        if (1 < uVar1) goto code_r0x0800721c;
                        iStack_6c = 4;
                        puVar4 = *(uVar8 * 8 + 0x8006720);
                        *(puVar4 + 1) = 0;
                        *puVar4 = 0x6c6c756e;
                    }
                    else {
                        __cfi_slowpath_diag(0x913123bfd37872b,pcVar2,0x8000c30);
                        (*pcVar2)(puVar9 + 0x4f);
                        if (1 < uVar1) goto code_r0x0800721c;
                        iStack_6c = snprintf(*(uVar8 * 8 + 0x8006720),0x100,
                                             "0x%02X,0x%02X,0x%02X,0x%02X,0x%02X,0x%02X,0x%02X,0x%02X\n",puVar9[0x4f],
                                             puVar9[0x50],puVar9[0x51],puVar9[0x52],puVar9[0x53],puVar9[0x54],
                                             puVar9[0x55],puVar9[0x56]);
                    }
                    *(uVar8 * 8 + 0x8006730) = iStack_6c;
                }
                else {
                    iVar3 = strncmp("tp_selftest",iVar5,0xb);
                    if (iVar3 == 0) {
                        if (1 < uVar1) goto code_r0x0800721c;
                        if (8 < iVar7 * 4) goto code_r0x08007204;
                        sym.xiaomi_touch_printf(iVar7 * 4,0x8001d33,0x80019a3,*(obj.self_test_result + iVar7 * 4));
                        uVar6 = iVar7 * 8;
                        if (0x10 < uVar6) goto code_r0x08007204;
                        iStack_6c = snprintf(*(uVar6 + 0x8006720),0x100,0x800216a,*(obj.self_test_result + iVar7 * 4)
                                            );
                        *(uVar6 + 0x8006730) = iStack_6c;
                    }
                    else {
                        iVar3 = strncmp("tp_data_dump",iVar5,0xc);
                        if (iVar3 == 0) {
                            sym.xiaomi_touch_printf(noname_0_01,0x8002571,0x80019a3,arg3_00);
                            pcVar2 = *(puVar9 + 0x120);
                            if (pcVar2 == NULL) {
                                if (1 < uVar1) goto code_r0x0800721c;
                                *(uVar8 * 8 + 0x8006730) = 0;
                            }
                            else {
                                __cfi_slowpath_diag(0x420a964126e89b4e,pcVar2,0x8000c50);
                                if (1 < uVar1) goto code_r0x0800721c;
                                (*pcVar2)(*(uVar1 * 8 + 0x8006720),&iStack_6c);
                                *(uVar1 * 8 + 0x8006730) = iStack_6c;
                            }
                        }
                        else {
                            if (1 < uVar1) goto code_r0x0800721c;
                            uVar8 = uVar1;
                        }
                    }
                }
            }
joined_r0x08007030:
            if ((uVar8 == 2) || (0x10 < uVar8 * 8)) {
code_r0x08007204:
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(1,0x8007208);
                (*pcVar2)();
            }
            iVar5 = *(uVar8 * 8 + 0x8006730);
            noname_0_02 = iVar5 - *arg4;
            uVar6 = noname_0_02;
            if (arg3 <= noname_0_02) {
                uVar6 = arg3;
            }
            sym.xiaomi_touch_printf(noname_0_02,0x8000e99,0x80019a3,iVar5);
            iVar3 = uVar6;
            if (iVar3 != 0) {
                if (0x7fffffff00000000 < uVar6 << 0x20) {
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x800,0x8007210);
                    (*pcVar2)();
                }
                noname_1 = __check_object_size(*(uVar8 * 8 + 0x8006720) + *arg4,iVar3,1);
                iVar5 = sym._copy_to_user(arg2,noname_1,iVar3);
                if (iVar5 != 0) {
                    sym.xiaomi_touch_printf(noname_0_03,0x8002481,0x80019a3,iVar5);
                    goto code_r0x08007190;
                }
            }
            iVar5 = iVar3;
            *arg4 = *arg4 + iVar5;
        }
        else {
            if (1 < uVar1) goto code_r0x0800721c;
            if (*arg4 < *(uVar8 * 8 + 0x8006730)) goto joined_r0x08007030;
            iVar5 = 0;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return iVar5;
    }
    __stack_chk_fail();
code_r0x0800721c:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8007220);
    (*pcVar2)();
}


// ===== sym.proc_tp_write @ 0x08007220 (size 644) =====

int64_t sym.proc_tp_write(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    char *arg1_00;
    int64_t arg3_00;
    ulong noname_0;
    ulong extraout_x8;
    ulong noname_0_00;
    ulong noname_0_01;
    ulong noname_0_02;
    ulong noname_0_03;
    ulong extraout_x8_00;
    ulong uVar2;
    ulong *in_x18;
    code *pcVar3;
    int64_t iVar4;
    uint8_t *arg1_01;
    uint8_t *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar5 = *(arg1 + 0xd8);
    if (puVar5 != NULL) {
        iVar4 = *(arg1 + 0x18) + 0x38;
        arg3_00 = iVar4;
        sym.xiaomi_touch_printf(*(arg1 + 0x18),0x8002f93,0x8002a2f,iVar4);
        iVar1 = strncmp("tp_fw_version",iVar4,10);
        if (iVar1 == 0) {
            arg1_01 = puVar5 + 1;
            arg1_01[0] = 0;
            arg1_01[1] = 0;
            arg1_01[2] = 0;
            arg1_01[3] = 0;
            arg1_01[4] = 0;
            arg1_01[5] = 0;
            arg1_01[6] = 0;
            arg1_01[7] = 0;
            puVar5[0x31] = 0;
            puVar5[0x32] = 0;
            puVar5[0x33] = 0;
            puVar5[0x34] = 0;
            puVar5[0x35] = 0;
            puVar5[0x36] = 0;
            puVar5[0x37] = 0;
            puVar5[0x38] = 0;
            puVar5[0x39] = 0;
            puVar5[0x3a] = 0;
            puVar5[0x3b] = 0;
            puVar5[0x3c] = 0;
            puVar5[0x3d] = 0;
            puVar5[0x3e] = 0;
            puVar5[0x3f] = 0;
            puVar5[0x40] = 0;
            puVar5[0x21] = 0;
            puVar5[0x22] = 0;
            puVar5[0x23] = 0;
            puVar5[0x24] = 0;
            puVar5[0x25] = 0;
            puVar5[0x26] = 0;
            puVar5[0x27] = 0;
            puVar5[0x28] = 0;
            puVar5[0x29] = 0;
            puVar5[0x2a] = 0;
            puVar5[0x2b] = 0;
            puVar5[0x2c] = 0;
            puVar5[0x2d] = 0;
            puVar5[0x2e] = 0;
            puVar5[0x2f] = 0;
            puVar5[0x30] = 0;
            puVar5[0x11] = 0;
            puVar5[0x12] = 0;
            puVar5[0x13] = 0;
            puVar5[0x14] = 0;
            puVar5[0x15] = 0;
            puVar5[0x16] = 0;
            puVar5[0x17] = 0;
            puVar5[0x18] = 0;
            puVar5[0x19] = 0;
            puVar5[0x1a] = 0;
            puVar5[0x1b] = 0;
            puVar5[0x1c] = 0;
            puVar5[0x1d] = 0;
            puVar5[0x1e] = 0;
            puVar5[0x1f] = 0;
            puVar5[0x20] = 0;
            puVar5[9] = 0;
            puVar5[10] = 0;
            puVar5[0xb] = 0;
            puVar5[0xc] = 0;
            puVar5[0xd] = 0;
            puVar5[0xe] = 0;
            puVar5[0xf] = 0;
            puVar5[0x10] = 0;
            iVar4 = arg3;
            if (0x3f < arg3) {
                arg3_00 = arg3;
                sym.xiaomi_touch_printf(noname_0,0x8002fbd,0x8002a2f,arg3);
                iVar4 = 0x3f;
            }
            __check_object_size(arg1_01,iVar4,0);
            iVar4 = sym._copy_from_user(arg1_01,arg2,iVar4);
            if (iVar4 == 0) {
                sym.xiaomi_touch_printf(noname_0_00,0x800201f,0x8002a2f,arg1_01);
                sym.xiaomi_touch_printf(noname_0_01,0x800132c,0x8002a2f,puVar5 + 0xd7);
                sym.xiaomi_touch_printf(noname_0_02,0x80018cb,0x8002a2f,puVar5 + 0x97);
                sym.xiaomi_touch_printf(noname_0_03,0x800118d,0x8002a2f,0x800166e);
                return arg3;
            }
            arg1_00 = "MI_TP_E: %s: copy hal version to buf has error";
            uVar2 = noname_0_00;
        }
        else {
            iVar1 = strncmp("tp_selftest",iVar4,0xb);
            if (iVar1 != 0) {
                return arg3;
            }
            *0x8006778 = 0;
            *0x8006780 = 0;
            *0x8006768 = 0;
            *0x8006770 = 0;
            *0x8006758 = 0;
            *0x8006760 = 0;
            _obj.proc_tp_write.self_test_cmd = 0;
            *0x8006750 = 0;
            iVar4 = arg3;
            if (0x3f < arg3) {
                arg3_00 = arg3;
                sym.xiaomi_touch_printf(obj.proc_tp_write.self_test_cmd,0x80011b5,0x8002a2f,arg3);
                iVar4 = 0x3f;
            }
            __check_object_size(obj.proc_tp_write.self_test_cmd,iVar4,0);
            iVar4 = sym._copy_from_user(0x8006748,arg2,iVar4);
            if (iVar4 == 0) {
                pcVar3 = *(puVar5 + 0x118);
                uVar2 = extraout_x8;
                if (pcVar3 != NULL) {
                    __cfi_slowpath_diag(0x420a964126e89b4e,pcVar3,0x8000c70);
                    if (2 < *puVar5) {
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(0x5512,0x80074a4);
                        (*pcVar3)();
                    }
                    (*pcVar3)(obj.proc_tp_write.self_test_cmd,obj.self_test_result + *puVar5 * 4);
                    uVar2 = extraout_x8_00;
                }
                sym.xiaomi_touch_printf(uVar2,0x8001f46,0x8002a2f,0x8006748);
                return arg3;
            }
            arg1_00 = "MI_TP_E: %s: copy self test has error";
            uVar2 = extraout_x8;
        }
        sym.xiaomi_touch_printf(uVar2,arg1_00,0x8002a2f,arg3_00);
    }
    return -0xe;
}


// ===== sym.proc_release @ 0x080074a4 (size 204) =====

ulong sym.proc_release(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    int64_t in_x3;
    int64_t noname_0;
    ulong *in_x18;
    uint64_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = **(arg2 + 0xd8);
    if (1 < uVar2) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5512,0x800756c);
        (*pcVar1)();
    }
    uVar3 = uVar2 * 8;
    if (uVar3 < 0x11) {
        iVar4 = *(arg2 + 0x18);
        noname_0 = *(uVar2 * 8 + 0x8006720);
        if (noname_0 != 0) {
            sym.xiaomi_touch_printf(noname_0,0x8001074,0x80019b0,in_x3);
            kvfree(*(uVar3 + 0x8006720));
            *(uVar3 + 0x8006720) = 0;
        }
        *(uVar2 * 8 + 0x8006730) = 0;
        sym.xiaomi_touch_printf(0x8006730,0x8002dc2,0x80019b0,iVar4 + 0x38);
        mutex_unlock(uVar2 * 0x30 + 0x80066c0);
        return 0;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(1,0x8007570);
    (*pcVar1)();
}


// ===== sym._copy_to_user @ 0x08007570 (size 312) =====

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
        if ((_netlink_unicast >> 0x18 & 1) == 0) {
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
        if ((_netlink_unicast >> 0x18 & 1) == 0) {
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


// ===== sym._copy_to_user_1 @ 0x080076e4 (size 312) =====

int64_t sym._copy_to_user_1(int64_t arg1,uchar noname_1 [16],int64_t arg2)

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
        if ((_netlink_unicast >> 0x18 & 1) == 0) {
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
        if ((_netlink_unicast >> 0x18 & 1) == 0) {
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


// ===== sym._copy_from_user @ 0x08007858 (size 376) =====

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
        if ((_netlink_unicast >> 0x18 & 1) == 0) {
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
        if ((_netlink_unicast >> 0x18 & 1) == 0) {
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


// ===== sym._copy_from_user_1 @ 0x08007a0c (size 364) =====

int64_t sym._copy_from_user_1(int64_t arg1,int64_t arg2)

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
    bVar4 = 0xfffffffffffffdf7 < uVar6;
    uVar6 = uVar6 + 0x208;
    uVar1 = 0;
    if (!bVar4 || uVar6 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar6 = 0xffffffffffffffff;
    }
    if ((CARRY8(uVar6,~uVar1) || CARRY8(uVar6 + ~uVar1,bVar4)) && uVar6 != uVar1 + !bVar4) {
        iVar5 = 0x208;
    }
    else {
        if ((_netlink_unicast >> 0x18 & 1) == 0) {
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
        iVar5 = __arch_copy_from_user(arg1,arg2,0x208);
        if ((_netlink_unicast >> 0x18 & 1) == 0) {
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
    memset((arg1 - iVar5) + 0x208,0,iVar5);
    return iVar5;
}


// ===== sym.xiaomi_touch_operation_init @ 0x08007bb4 (size 140) =====

uint64_t sym.xiaomi_touch_operation_init(int64_t arg1)

{
    uint32_t uVar1;
    int64_t in_x3;
    ulong in_x8;
    ulong *in_x18;
    uint64_t arg3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        sym.xiaomi_touch_printf(in_x8,0x8001f6b,0x8002dda,in_x3);
        arg3 = 0xffffffff;
    }
    else {
        uVar1 = misc_register(obj.misc_dev.llvm.16834981253627934478);
        arg3 = uVar1;
        *0x8003000 = arg1;
        if (uVar1 != 0) {
            sym.xiaomi_touch_printf(0x8003000,0x800167c,0x8002dda,arg3);
        }
    }
    return arg3;
}


// ===== sym.xiaomi_touch_operation_remove @ 0x08007c40 (size 48) =====

ulong sym.xiaomi_touch_operation_remove(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    misc_deregister(obj.misc_dev.llvm.16834981253627934478);
    return 0;
}


// ===== sym.xiaomi_touch_dev_read @ 0x08007c70 (size 488) =====

int64_t sym.xiaomi_touch_dev_read(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    char cVar2;
    bool bVar3;
    code *pcVar4;
    int64_t iVar5;
    ulong noname_0;
    ulong noname_0_00;
    int64_t iVar6;
    int64_t extraout_x8;
    ulong noname_0_01;
    int64_t extraout_x8_00;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    uchar noname_1 [16];
    
    *in_x18 = unaff_x30;
    iVar7 = *(arg1 + 0xd8);
    iVar5 = sym.get_xiaomi_touch_data(*(iVar7 + 0x11));
    if (iVar5 == 0) {
        iVar7 = 0;
    }
    else if (arg3 == 0x208) {
        mutex_lock(iVar5 + 0x14a8);
        piVar1 = iVar7 + 0x30;
        iVar7 = *piVar1;
        sym.xiaomi_touch_printf(noname_0_00,0x8001a84,0x800109b,iVar7);
        iVar6 = *piVar1;
        if (iVar6 == *(iVar5 + 0x54)) {
            sym.xiaomi_touch_printf(iVar6,0x8000f2d,0x800109b,iVar7);
            iVar7 = 0;
            iVar6 = extraout_x8;
        }
        else {
            noname_1 = sym.xiaomi_touch_printf(iVar6,0x8001d5b,0x800109b,0x208);
            if (10 < *piVar1) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x8007e1c);
                (*pcVar4)();
            }
            iVar7 = sym._copy_to_user_1(arg2,noname_1,0x208);
            if (iVar7 == 0) {
                Hint_Prefetch(piVar1,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                        *piVar1 = *piVar1 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                iVar7 = 0x208;
                iVar6 = *piVar1;
                if (9 < iVar6) {
                    *piVar1 = 0;
                }
            }
            else {
                sym.xiaomi_touch_printf(noname_0_01,0x8003002,0x800109b,iVar7);
                iVar7 = -1;
                iVar6 = extraout_x8_00;
            }
        }
        sym.xiaomi_touch_printf(iVar6,0x8002590,0x800109b,iVar7);
        mutex_unlock(iVar5 + 0x14a8);
    }
    else {
        sym.xiaomi_touch_printf(noname_0,0x8001778,0x800109b,arg3);
        iVar7 = 0;
    }
    return iVar7;
}


// ===== sym.xiaomi_touch_dev_write @ 0x08007e58 (size 16) =====

int64_t sym.xiaomi_touch_dev_write(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    return arg1;
}


// ===== sym.xiaomi_touch_dev_poll @ 0x08007e68 (size 272) =====

uint64_t sym.xiaomi_touch_dev_poll(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    ulong *in_x18;
    uint64_t arg3;
    code *pcVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + 0xd8);
    iVar2 = sym.get_xiaomi_touch_data(*(iVar5 + 0x11));
    arg3 = 0;
    if (iVar2 != 0) {
        if (((arg2 != 0) && (iVar5 + 0x18 != 0)) && (pcVar4 = *arg2, pcVar4 != NULL)) {
            __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar4,0x8000c90);
            (*pcVar4)(arg1,iVar5 + 0x18,arg2);
        }
        uVar3 = *(iVar5 + 0x30) != *(iVar2 + 0x54);
        uVar1 = uVar3 << 6;
        if (*(iVar5 + 0x34) != *(iVar2 + 4)) {
            uVar1 = uVar3 << 6 | 2;
        }
        uVar3 = uVar1;
        if (*(iVar5 + 0x38) != *(iVar2 + 0x20)) {
            uVar3 = uVar1 | 0x80;
        }
        arg3 = uVar3;
        sym.xiaomi_touch_printf(uVar1,0x80010b1,0x800203e,arg3);
    }
    return arg3;
}


// ===== sym.xiaomi_touch_dev_ioctl @ 0x08007f90 (size 1968) =====

uint64_t sym.xiaomi_touch_dev_ioctl(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    uint32_t uVar7;
    char *pcVar8;
    uint64_t uVar9;
    ulong noname_0;
    uint64_t noname_0_00;
    ulong noname_0_01;
    ulong noname_0_02;
    ulong noname_0_03;
    int *noname_0_04;
    ulong uVar10;
    uint64_t extraout_x8;
    ulong noname_0_05;
    uint64_t extraout_x8_00;
    ulong noname_0_06;
    int *extraout_x8_01;
    ulong *in_x18;
    code *pcVar11;
    int64_t iVar12;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar extraout_q0 [16];
    uchar auVar13 [16];
    uint8_t uStack_250;
    uint8_t uStack_24f;
    uint16_t uStack_24e;
    uint16_t uStack_24c;
    uint32_t uStack_248;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    uVar7 = arg2;
    iStack_48 = *(iVar12 + 0x5e0);
    if ((uVar7 & 0xff00) != 0x5400) {
code_r0x0800825c:
        uVar9 = 0xffffffffffffffea;
        goto code_r0x08008260;
    }
    uVar4 = uVar7 >> 0x10 & 0x3fff;
    iVar12 = *(arg1 + 0xd8);
    uVar9 = uVar7 & 0xff;
    sym.xiaomi_touch_printf(iStack_48,0x80010ce,0x8002b90,uVar9);
    if (5 < (uVar7 & 0xff)) {
        sym.xiaomi_touch_printf(noname_0,0x8002cb5,0x8002b90,0x54);
        goto code_r0x0800825c;
    }
    noname_0_00 = arg2 & 0xff;
    //switch table (5 cases) at 0x80032a8
    switch(*(noname_0_00 * 4 + 0x80032a8) + 0x8008018) {
    case 0x800802c:
        mutex_lock(obj.ioctl_operation_mutex);
        if (uVar4 != 0x208) {
            sym.xiaomi_touch_printf(noname_0_01,0x8002a3d,0x8002b90,uVar4);
            mutex_unlock(obj.ioctl_operation_mutex);
            goto code_r0x0800825c;
        }
        memset(&stack0xfffffffffffffdb0,0,0x208);
        iVar6 = sym._copy_from_user_1(&stack0xfffffffffffffdb0,arg3);
        if (iVar6 != 0) {
            sym.xiaomi_touch_printf(noname_0_02,0x80016a4,0x8002b90,iVar6);
code_r0x08008470:
            uVar9 = 0xffffffffffffffff;
            goto code_r0x08008474;
        }
        uVar9 = uStack_250;
        if (*(iVar12 + 0x11) != uStack_250) {
            pcVar8 = "MI_TP_E: %s: client id is not equal common data id, please check it!";
code_r0x08008460:
            sym.xiaomi_touch_printf(uVar9,pcVar8,0x8002b90,iVar6);
            goto code_r0x08008470;
        }
        iVar12 = sym.get_xiaomi_touch_driver_param(*(iVar12 + 0x11));
        if (iVar12 == 0) {
            pcVar8 = "MI_TP_E: %s: please select touch id first, then send common data!";
            uVar9 = extraout_x8;
            goto code_r0x08008460;
        }
        uVar9 = uStack_24f;
        auVar13 = extraout_q0;
    //switch table (11 cases) at 0x80032c0
        switch(uVar9) {
        case 0:
            if (((uStack_24e == 0x2711) && (100 < uStack_248)) && (uStack_248 < 0x7f)) {
                sym.sendnlmsg(uStack_248);
            }
            else {
                iVar12 = *(iVar12 + 0x138);
                if (iVar12 != 0) {
                    uVar10 = 0x8000cf0;
                    goto code_r0x08008650;
                }
            }
            break;
        case 1:
        case 2:
        case 3:
        case 4:
            pcVar11 = *(iVar12 + 0x148);
            if (pcVar11 != NULL) {
                uVar10 = 0x8000d10;
code_r0x08008504:
                __cfi_slowpath_diag(0x559c4a249207745a,pcVar11,uVar10);
                auVar13 = (*pcVar11)(&stack0xfffffffffffffdb0);
            }
            goto code_r0x08008524;
        case 5:
            pcVar11 = *(iVar12 + 0x150);
            if (pcVar11 != NULL) {
                uVar10 = 0x8000d50;
                goto code_r0x08008504;
            }
code_r0x08008524:
            iVar5 = sym._copy_to_user_1(arg3,auVar13,0x208);
            if (iVar5 != 0) {
                sym.xiaomi_touch_printf(noname_0_05,0x8001f96,0x8002b90,uStack_24f);
            }
            break;
        case 6:
            iVar12 = *(iVar12 + 0x158);
            if (iVar12 != 0) {
                uVar10 = 0x8000d30;
code_r0x08008650:
                uVar9 = __cfi_slowpath_diag(0x559c4a249207745a,iVar12,uVar10);
                return uVar9;
            }
            break;
        case 7:
            iVar12 = *(iVar12 + 0x140);
            if (iVar12 != 0) {
                uVar10 = 0x8000d70;
                goto code_r0x08008650;
            }
            break;
        case 8:
            pcVar11 = *(iVar12 + 0x1a0);
            if (pcVar11 != NULL) {
                __cfi_slowpath_diag(0x848a497e3db49f6e,pcVar11,0x8000cb0);
                (*pcVar11)(&stack0xfffffffffffffdb0);
            }
            break;
        case 9:
            pcVar11 = *(iVar12 + 0x1a8);
            if (pcVar11 != NULL) {
                __cfi_slowpath_diag(0x848a497e3db49f6e,pcVar11,0x8000cd0);
                iVar5 = (*pcVar11)(&stack0xfffffffffffffdb0);
                uVar9 = extraout_x8_00;
                if (iVar5 == 0) {
                    auVar13 = memcpy(0x80067a8,&stack0xfffffffffffffdb0,0x208);
                    iVar5 = sym._copy_to_user_1(arg3,auVar13,0x208);
                    if (iVar5 != 0) {
                        sym.xiaomi_touch_printf(noname_0_06,0x8001f96,0x8002b90,uStack_24f);
                        goto code_r0x08008470;
                    }
                    break;
                }
            }
            pcVar8 = "MI_TP_E: %s: get thp ic cur value has error";
            goto code_r0x08008460;
        case 10:
            sym.add_common_data_to_buf(uStack_250,0,uStack_24e,uStack_24c);
            uVar9 = 0;
            goto code_r0x08008474;
        case 0xb:
            if (uStack_24e == 0x1a) {
                sym.update_palm_sensor_value(uStack_248);
                uVar9 = 0;
            }
            else {
                uVar9 = 0;
            }
            goto code_r0x08008474;
        default:
            sym.xiaomi_touch_printf(uVar9,0x8001261,0x8002b90,iVar6);
            uVar9 = 0xffffffffffffffea;
code_r0x08008474:
            mutex_unlock(obj.ioctl_operation_mutex);
            goto code_r0x08008260;
        }
        mutex_unlock(obj.ioctl_operation_mutex);
        uVar9 = 0;
        goto code_r0x08008260;
    case 0x8008084:
        iVar6 = sym.get_xiaomi_touch_data(*(iVar12 + 0x11));
        if (iVar6 != 0) {
            noname_0_04 = iVar12 + 0x34;
            uVar7 = *noname_0_04 & 0xff;
            uVar9 = uVar7;
            if (uVar7 != *(iVar6 + 4)) goto code_r0x080086d8;
        }
        break;
    case 0x80080e0:
        sym.xiaomi_touch_printf(noname_0_00,0x8002837,0x8002b90,arg3);
        uVar9 = 0;
        *(iVar12 + 0x10) = arg3;
        goto code_r0x08008260;
    case 0x800810c:
        iVar6 = *(iVar12 + 0x11);
        if (-1 < *(iVar12 + 0x11)) {
            sym.xiaomi_touch_printf(iVar6,0x8002973,0x8002b90,uVar9);
            uVar9 = 0;
            goto code_r0x08008260;
        }
        if (arg3 < 2) {
            sym.xiaomi_touch_printf(iVar6,0x800110b,0x8002b90,arg3);
            iVar6 = sym.get_xiaomi_touch_data(arg3 & 0xffffffff);
            if (iVar6 != 0) {
                *(iVar12 + 0x11) = arg3;
                uVar10 = *(iVar6 + 4);
                *(iVar12 + 0x34) = uVar10;
                sym.xiaomi_touch_printf(uVar10,0x80017a5,0x8002b90,*(iVar12 + 0x34));
                uVar10 = *(iVar6 + 0x20);
                *(iVar12 + 0x38) = uVar10;
                sym.xiaomi_touch_printf(uVar10,0x8000f94,0x8002b90,*(iVar12 + 0x38));
                _raw_spin_lock(iVar6 + 0x50);
                sym.list_add_tail_rcu(iVar12,iVar6 + 0x40);
                _raw_spin_unlock(iVar6 + 0x50);
                uVar9 = 0;
                goto code_r0x08008260;
            }
        }
        else {
            sym.xiaomi_touch_printf(iVar6,0x80025be,0x8002b90,arg3);
        }
        break;
    case 0x8008138:
        if (uVar4 == 0xd6) {
            iVar12 = sym.get_xiaomi_touch_driver_param(*(iVar12 + 0x11));
            if (iVar12 == 0) {
                sym.xiaomi_touch_printf(noname_0_03,0x8002df6,0x8002b90,uVar9);
                uVar9 = 0xffffffffffffffff;
            }
            else {
                uVar9 = sym._copy_to_user_1(arg3,noname_1,0xd6);
            }
            goto code_r0x08008260;
        }
        sym.xiaomi_touch_printf(noname_0_00,0x800216e,0x8002b90,uVar4);
        goto code_r0x0800825c;
    case 0x8008168:
        iVar6 = sym.get_xiaomi_touch_data(*(iVar12 + 0x11));
        if (iVar6 != 0) {
            uVar9 = (arg2 & 0xffffffffU) >> 0x1e;
            iVar5 = uVar9;
            if (iVar5 != 2) {
                if (iVar5 == 1) {
                    piVar1 = iVar6 + 0x20;
                    sym.xiaomi_touch_printf(uVar9,0x8002054,0x8002b90,*piVar1);
                    Hint_Prefetch(piVar1,2,0,1);
                    do {
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar3) {
                            *piVar1 = *piVar1 + 1;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                    if (*(iVar6 + 0x28) <= *(iVar6 + 0x20)) {
                        *piVar1 = 0;
                    }
                    sym.notify_xiaomi_touch(iVar6);
                    uVar9 = 0;
                    goto code_r0x08008260;
                }
                goto code_r0x0800825c;
            }
            noname_0_04 = iVar12 + 0x38;
            uVar7 = *noname_0_04 & 0xff;
            uVar9 = uVar7;
            if (uVar7 != *(iVar6 + 0x20)) {
                Hint_Prefetch(noname_0_04,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(noname_0_04,0x10);
                    if (bVar3) {
                        *noname_0_04 = *noname_0_04 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                if (*(iVar6 + 0x28) <= *noname_0_04) {
                    *noname_0_04 = 0;
                }
                pcVar8 = "MI_TP_D: %s: get raw data index is %d";
                goto code_r0x08008308;
            }
        }
    }
    uVar9 = 0xffffffffffffffff;
code_r0x08008260:
    while (iVar12 = sp_el0, *(iVar12 + 0x5e0) != iStack_48) {
        iVar6 = __stack_chk_fail();
        noname_0_04 = extraout_x8_01;
code_r0x080086d8:
        Hint_Prefetch(noname_0_04,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(noname_0_04,0x10);
            if (bVar3) {
                *noname_0_04 = *noname_0_04 + 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (*(iVar6 + 0xc) <= *noname_0_04) {
            *noname_0_04 = 0;
        }
        pcVar8 = "MI_TP_D: %s: get frame data index is %d";
code_r0x08008308:
        sym.xiaomi_touch_printf(noname_0_04,pcVar8,0x8002b90,uVar9 & 0xffffffff);
    }
    return uVar9;
}


// ===== sym.xiaomi_touch_dev_mmap @ 0x08008770 (size 364) =====

ulong sym.xiaomi_touch_dev_mmap(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint8_t uVar3;
    int iVar4;
    int64_t iVar5;
    char *arg1_00;
    uint64_t in_x3;
    uint64_t noname_0;
    uint64_t uVar6;
    uint64_t uVar7;
    ulong noname_0_00;
    ulong *in_x18;
    int64_t iVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar9 = *(arg1 + 0xd8);
    iVar1 = *arg2;
    iVar2 = *(arg2 + 8);
    iVar8 = *(arg2 + 0x98);
    iVar5 = sym.get_xiaomi_touch_data(*(iVar9 + 0x11));
    if (iVar5 == 0) {
        arg1_00 = "MI_TP_E: %s: please select touch id first!";
        uVar6 = noname_0;
        goto code_r0x08008884;
    }
    in_x3 = *(iVar9 + 0x10);
    sym.xiaomi_touch_printf(noname_0,0x8002837,0x8002ba7,in_x3);
    uVar3 = *(iVar9 + 0x10);
    uVar6 = uVar3;
    if (uVar3 == 2) {
        sym.xiaomi_touch_printf(2,0x8000ed2,0x8002ba7,in_x3);
        uVar7 = *(iVar5 + 0x38);
joined_r0x080087fc:
        uVar6 = 0;
        if (uVar7 != 0) {
            uVar6 = iVar8 + (uVar7 >> 0xc);
            iVar4 = remap_pfn_range(arg2,iVar1,uVar6 & 0xfffffffffffff,iVar2 - iVar1,0x68000000000fc3);
            if (iVar4 != 0) {
                sym.xiaomi_touch_printf(noname_0_00,0x800303a,0x8002ba7,uVar6 & 0xffffffff);
                return 0xffffffff;
            }
            sym.xiaomi_touch_printf(noname_0_00,0x80019bd,0x8002ba7,uVar6 & 0xffffffff);
            return 0;
        }
    }
    else if (uVar3 == 1) {
        sym.xiaomi_touch_printf(1,0x8002d0b,0x8002ba7,in_x3);
        uVar7 = *(iVar5 + 0x18);
        goto joined_r0x080087fc;
    }
    arg1_00 = "MI_TP_E: %s: phy bas is NULL, return!";
code_r0x08008884:
    sym.xiaomi_touch_printf(uVar6,arg1_00,0x8002ba7,in_x3);
    return 0xffffffff;
}


// ===== sym.xiaomi_touch_dev_open @ 0x080088dc (size 200) =====

ulong sym.xiaomi_touch_dev_open(ulong noname_0,int64_t arg1)

{
    int16_t *noname_0_00;
    int64_t arg3;
    ulong uVar1;
    int64_t in_x3;
    ulong noname_0_01;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg3 = sym.kzalloc_retry(0x40,3);
    if (arg3 == 0) {
        sym.xiaomi_touch_printf(noname_0_01,0x80016dd,0x8000fc0,in_x3);
        uVar1 = 0xffffffff;
    }
    else {
        **0x8003000 = **0x8003000 + 1;
        *(arg3 + 0x11) = 0xff;
        __init_waitqueue_head(arg3 + 0x18,"&client_private_data->poll_wait_queue_head",0x8006788);
        noname_0_00 = *0x8003000;
        *(arg1 + 0xd8) = arg3;
        sym.xiaomi_touch_printf(noname_0_00,0x8001402,0x8000fc0,arg3);
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.xiaomi_touch_dev_release @ 0x080089a4 (size 180) =====

ulong sym.xiaomi_touch_dev_release(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int16_t *noname_0_00;
    int64_t iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t *arg3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg3 = *(arg1 + 0xd8);
    iVar3 = sym.get_xiaomi_touch_data(*(arg3 + 0x11));
    if (iVar3 != 0) {
        _raw_spin_lock(iVar3 + 0x50);
        uVar4 = __list_del_entry_valid(arg3);
        if ((uVar4 & 1) != 0) {
            iVar1 = *arg3;
            piVar2 = arg3[1];
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        arg3[1] = -0x2152fffffffffede;
        _raw_spin_unlock(iVar3 + 0x50);
        synchronize_rcu();
    }
    noname_0_00 = *0x8003000;
    **0x8003000 = **0x8003000 + -1;
    sym.xiaomi_touch_printf(noname_0_00,0x80021e9,0x800182d,arg3);
    kfree(arg3);
    return 0;
}


// ===== sym.list_add_tail_rcu @ 0x08008a58 (size 88) =====

void sym.list_add_tail_rcu(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *(arg2 + 8);
    uVar1 = __list_add_valid(arg1,piVar2,arg2);
    if ((uVar1 & 1) != 0) {
        *arg1 = arg2;
        *(arg1 + 8) = piVar2;
        *piVar2 = arg1;
        *(arg2 + 8) = arg1;
    }
    return;
}


// ===== sym.update_fod_press_status @ 0x08008ab0 (size 144) =====

ulong sym.update_fod_press_status(int64_t arg1)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg1;
    mutex_lock(obj.fod_press_status_mutex);
    if (*0x8006000 != uVar1) {
        sym.xiaomi_touch_printf(*0x8006000,0x80019f1,0x8001a07,arg1 & 0xffffffff);
        *0x8006000 = uVar1;
        sysfs_notify(CONCAT44(*0x8006004,uVar1),0,"fod_press_status");
    }
    mutex_unlock(obj.fod_press_status_mutex);
    return 0;
}


// ===== sym.update_palm_sensor_value @ 0x08008b40 (size 144) =====

ulong sym.update_palm_sensor_value(int64_t arg1)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg1;
    mutex_lock(obj.palm_mutex);
    if (*0x8006000 != uVar1) {
        sym.xiaomi_touch_printf(*0x8006000,0x800144b,0x8001bbb,arg1 & 0xffffffff);
        *0x8006000 = uVar1;
        sysfs_notify(CONCAT44(*0x8006004,uVar1),0,"palm_sensor");
    }
    mutex_unlock(obj.palm_mutex);
    return 0;
}


// ===== sym.get_xiaomi_touch_class @ 0x08008bd0 (size 20) =====

ulong sym.get_xiaomi_touch_class(void)

{
    return *0x8006000;
}


// ===== sym.update_get_ic_current_value @ 0x08008be4 (size 52) =====

void sym.update_get_ic_current_value(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    memcpy(0x80067a8,arg1,0x208);
    return;
}


// ===== sym.xiaomi_touch_sys_init @ 0x08008c18 (size 248) =====

uint64_t sym.xiaomi_touch_sys_init(ulong param_1)

{
    uint32_t uVar1;
    char *arg1;
    int64_t in_x3;
    ulong noname_0;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.xiaomi_touch_printf(param_1,0x80029a6,0x8002e3a,in_x3);
    *0x8006000 = __class_create(obj.__this_module,"touch",0x80069b0);
    if (*0x8006000 == 0) {
        arg1 = "MI_TP_E: %s: create device class err";
    }
    else {
        in_x3 = 0;
        *0x8006000 = device_create(*0x8006000,0,0x54,0,"touch_dev");
        if (*0x8006000 != 0) {
            *0x80069c8 = obj.touch_attr_group;
            uVar1 = sysfs_create_group();
            if (uVar1 == 0) {
                return 0;
            }
            sym.xiaomi_touch_printf(noname_0,0x80014ec,0x8002e3a,uVar1);
            return uVar1;
        }
        arg1 = "MI_TP_E: %s: create device dev err";
    }
    *0x8006000 = 0;
    sym.xiaomi_touch_printf(0x8006000,arg1,0x8002e3a,in_x3);
    return 0xffffffff;
}


// ===== sym.xiaomi_touch_sys_remove @ 0x08008d10 (size 104) =====

ulong sym.xiaomi_touch_sys_remove(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8006000 != 0) {
        sysfs_remove_group(*0x8006000,0x80069b0);
        device_destroy(*0x8006000,0x54);
        *0x8006000 = 0;
    }
    if (*0x8006000 != 0) {
        class_destroy();
        *0x8006000 = 0;
    }
    return 0;
}


// ===== sym.show_fod_press_status @ 0x08008d78 (size 64) =====

int64_t sym.show_fod_press_status(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,0x800216a,*0x8006000);
    return iVar1;
}


// ===== sym.store_fod_press_status @ 0x08008db8 (size 16) =====

int64_t sym.store_fod_press_status(int64_t arg1)

{
    return arg1;
}


// ===== sym.show_panel_vendor @ 0x08008dc8 (size 124) =====

ulong sym.show_panel_vendor(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uchar uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = sym.get_xiaomi_touch_driver_param(0);
    uVar3 = 0;
    if (iVar2 != 0) {
        pcVar4 = *(iVar2 + 0x170);
        if (pcVar4 == NULL) {
            uVar3 = 0;
        }
        else {
            __cfi_slowpath_diag(0x605e5176d60dacab,pcVar4,0x8000d90);
            uVar1 = (*pcVar4)();
            uVar3 = 1;
            *(arg2 + 1) = 0;
            *arg2 = uVar1;
        }
    }
    return uVar3;
}


// ===== sym.store_panel_vendor @ 0x08008e44 (size 16) =====

int64_t sym.store_panel_vendor(int64_t arg1)

{
    return arg1;
}


// ===== sym.show_panel_color @ 0x08008e54 (size 124) =====

ulong sym.show_panel_color(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uchar uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = sym.get_xiaomi_touch_driver_param(0);
    uVar3 = 0;
    if (iVar2 != 0) {
        pcVar4 = *(iVar2 + 0x178);
        if (pcVar4 == NULL) {
            uVar3 = 0;
        }
        else {
            __cfi_slowpath_diag(0x605e5176d60dacab,pcVar4,0x8000db0);
            uVar1 = (*pcVar4)();
            uVar3 = 1;
            *(arg2 + 1) = 0;
            *arg2 = uVar1;
        }
    }
    return uVar3;
}


// ===== sym.store_panel_color @ 0x08008ed0 (size 16) =====

int64_t sym.store_panel_color(int64_t arg1)

{
    return arg1;
}


// ===== sym.show_panel_display @ 0x08008ee0 (size 124) =====

ulong sym.show_panel_display(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uchar uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = sym.get_xiaomi_touch_driver_param(0);
    uVar3 = 0;
    if (iVar2 != 0) {
        pcVar4 = *(iVar2 + 0x180);
        if (pcVar4 == NULL) {
            uVar3 = 0;
        }
        else {
            __cfi_slowpath_diag(0x605e5176d60dacab,pcVar4,0x8000dd0);
            uVar1 = (*pcVar4)();
            uVar3 = 1;
            *(arg2 + 1) = 0;
            *arg2 = uVar1;
        }
    }
    return uVar3;
}


// ===== sym.store_panel_display @ 0x08008f5c (size 16) =====

int64_t sym.store_panel_display(int64_t arg1)

{
    return arg1;
}


// ===== sym.show_touch_vendor @ 0x08008f6c (size 124) =====

ulong sym.show_touch_vendor(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uchar uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = sym.get_xiaomi_touch_driver_param(0);
    uVar3 = 0;
    if (iVar2 != 0) {
        pcVar4 = *(iVar2 + 0x188);
        if (pcVar4 == NULL) {
            uVar3 = 0;
        }
        else {
            __cfi_slowpath_diag(0x301b554b3b72517f,pcVar4,0x8000df0);
            uVar1 = (*pcVar4)();
            uVar3 = 1;
            *(arg2 + 1) = 0;
            *arg2 = uVar1;
        }
    }
    return uVar3;
}


// ===== sym.store_touch_vendor @ 0x08008fe8 (size 16) =====

int64_t sym.store_touch_vendor(int64_t arg1)

{
    return arg1;
}


// ===== sym.show_touch_doze_analysis @ 0x08008ff8 (size 64) =====

int64_t sym.show_touch_doze_analysis(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,0x800216a,*0x8006000);
    return iVar1;
}


// ===== sym.store_touch_doze_analysis @ 0x08009038 (size 268) =====

int64_t sym.store_touch_doze_analysis(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    code *pcVar3;
    ulong extraout_x8;
    ulong noname_0;
    ulong *in_x18;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    pcVar3 = sym.get_xiaomi_touch_driver_param(0);
    uStack_3c = 0;
    iVar2 = sscanf(arg2,0x8000ef2,&uStack_3c);
    if (-1 < iVar2) {
        noname_0 = extraout_x8;
        if (pcVar3 == NULL) goto code_r0x080090c4;
        pcVar3 = *(pcVar3 + 0x198);
        if (pcVar3 == NULL) goto code_r0x080090c4;
        if (1 < (pcVar3 + -0x8004630 >> 3 | pcVar3 << 0x3d)) goto code_r0x08009120;
        while( true ) {
            *0x8006000 = (*pcVar3)(uStack_3c);
            noname_0 = 0x8006000;
code_r0x080090c4:
            sym.xiaomi_touch_printf(noname_0,0x80019f1,0x8001910,uStack_3c);
code_r0x080090e8:
            iVar1 = sp_el0;
            if (*(iVar1 + 0x5e0) == iStack_38) break;
            __stack_chk_fail();
code_r0x08009120:
            __cfi_slowpath_diag(0x47ce015a85343a42,pcVar3,0x8000e10);
        }
        return arg3;
    }
    arg3 = -0x16;
    goto code_r0x080090e8;
}


// ===== sym.show_touch_ic_buffer @ 0x08009144 (size 220) =====

int64_t sym.show_touch_ic_buffer(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong noname_0;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = sym.get_xiaomi_touch_driver_param(0);
    sym.xiaomi_touch_printf(noname_0,0x8002d2d,0x8001818,*0x8006000);
    if ((iVar2 == 0) || (*(iVar2 + 400) == 0)) {
        iVar2 = 0;
    }
    else {
        uVar3 = sym.kzalloc_retry(0x1000,3);
        pcVar4 = *(iVar2 + 400);
        __cfi_slowpath_diag(0x815e38a849dd56af,pcVar4,0x8000e30);
        (*pcVar4)(*0x8006000,uVar3);
        iVar1 = snprintf(arg2,0x1000,0x8001461,uVar3);
        kfree(uVar3);
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.store_touch_ic_buffer @ 0x08009220 (size 128) =====

int64_t sym.store_touch_ic_buffer(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    char *arg1_00;
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = sscanf(arg1,"0x%X",0x8006a28);
    arg1_00 = "MI_TP_I: %s: write addr error format. current addr is 0x%08X";
    if (-1 < iVar2) {
        arg1_00 = "MI_TP_I: %s: write addr: 0x%08X";
    }
    iVar1 = -0x16;
    if (-1 < iVar2) {
        iVar1 = arg2;
    }
    sym.xiaomi_touch_printf("MI_TP_I: %s: write addr: 0x%08X",arg1_00,0x8002e50,*0x8006a28);
    return iVar1;
}


// ===== sym.show_resolution_factor @ 0x080092a0 (size 92) =====

int64_t sym.show_resolution_factor(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    uchar uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = sym.get_xiaomi_touch_driver_param(0);
    if (iVar2 == 0) {
        uVar3 = 1;
    }
    else {
        uVar3 = *(iVar2 + 0x4a);
    }
    iVar1 = snprintf(arg2,0x1000,0x8000ef2,uVar3);
    return iVar1;
}


// ===== sym.store_resolution_factor @ 0x080092fc (size 16) =====

int64_t sym.store_resolution_factor(int64_t arg1)

{
    return arg1;
}


// ===== sym.show_abnormal_event @ 0x0800930c (size 280) =====

ulong sym.show_abnormal_event(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    bool bVar1;
    uint uVar2;
    int64_t iVar3;
    char cVar4;
    code *pcVar5;
    int64_t in_x3;
    ulong *in_x18;
    ulong uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.abnormal_event_mutex);
    if ((_sym.xiaomi_touch_remove_proc == *0x80069d8) && (*0x80069e0 == '\0')) {
        sym.xiaomi_touch_printf(_sym.xiaomi_touch_remove_proc,0x80012ad,0x8000fe4,in_x3);
        uVar6 = 0xffffffffffffffff;
    }
    else {
        if (10 < _sym.xiaomi_touch_remove_proc) {
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x5512,0x8009424);
            (*pcVar5)();
        }
        iVar3 = _sym.xiaomi_touch_remove_proc * 6;
        uVar2 = *(iVar3 + 0x80069e2);
        *(arg1 + 4) = *(iVar3 + 0x80069e6);
        *arg1 = uVar2;
        cVar4 = *0x80069e0;
        _sym.xiaomi_touch_remove_proc = _sym.xiaomi_touch_remove_proc + 1;
        bVar1 = _sym.xiaomi_touch_remove_proc < 10;
        if (!bVar1) {
            *0x80069e0 = '\0';
            _sym.xiaomi_touch_remove_proc = 0;
        }
        if ((_sym.xiaomi_touch_remove_proc < *0x8006000) || (bVar1 && cVar4 != '\0')) {
            sysfs_notify(CONCAT44(*0x8006004,*0x8006000),0,"abnormal_event");
        }
        uVar6 = 6;
    }
    mutex_unlock(obj.abnormal_event_mutex);
    return uVar6;
}


// ===== sym.store_abnormal_event @ 0x08009424 (size 220) =====

ulong sym.store_abnormal_event(ulong noname_0,uchar noname_1 [16],int64_t arg1,uint32_t arg2)

{
    uint uVar1;
    code *pcVar2;
    bool bVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 6) {
        mutex_lock(obj.abnormal_event_mutex);
        uVar5 = *0x8006000;
        if (10 < *0x8006000) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x5512,0x8009500);
            (*pcVar2)();
        }
        uVar1 = *arg1;
        *0x80069d8 = *0x8006000 + 1;
        bVar3 = 8 < *0x8006000;
        *(uVar5 * 6 + 0x80069e6) = *(arg1 + 4);
        *(uVar5 * 6 + 0x80069e2) = uVar1;
        if (bVar3) {
            *0x80069d8 = 0;
            *0x80069e0 = 1;
        }
        mutex_unlock(obj.abnormal_event_mutex);
        sysfs_notify(CONCAT44(*0x8006004,*0x8006000),0,"abnormal_event");
        uVar4 = 6;
    }
    else {
        sym.xiaomi_touch_printf(noname_0,0x8001fc4,0x8001846,arg2);
        uVar4 = 0xffffffffffffffed;
    }
    return uVar4;
}


// ===== sym.show_enable_touch_raw @ 0x08009500 (size 64) =====

int64_t sym.show_enable_touch_raw(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,0x800216a,*0x8006000);
    return iVar1;
}


// ===== sym.store_enable_touch_raw @ 0x08009540 (size 272) =====

int64_t sym.store_enable_touch_raw(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    code *pcVar3;
    ulong noname_0;
    ulong *in_x18;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    pcVar3 = sym.get_xiaomi_touch_driver_param(0);
    uStack_3c = 0;
    iVar2 = sscanf(arg2,0x8000ef2,&uStack_3c);
    if (-1 < iVar2) {
        sym.xiaomi_touch_printf(noname_0,0x8002233,0x8002e98,uStack_3c);
        if (pcVar3 == NULL) goto code_r0x080095e0;
        pcVar3 = *(pcVar3 + 0x168);
        if (pcVar3 == NULL) goto code_r0x080095e0;
        if (1 < (pcVar3 + -0x8004630 >> 3 | pcVar3 << 0x3d)) goto code_r0x0800962c;
        while( true ) {
            (*pcVar3)(uStack_3c);
code_r0x080095e0:
            *0x8006000 = uStack_3c;
code_r0x080095f4:
            iVar1 = sp_el0;
            if (*(iVar1 + 0x5e0) == iStack_38) break;
            __stack_chk_fail();
code_r0x0800962c:
            __cfi_slowpath_diag(0x47ce015a85343a42,pcVar3,0x8000e50);
        }
        return arg3;
    }
    arg3 = -0x16;
    goto code_r0x080095f4;
}


// ===== sym.show_palm_sensor @ 0x08009650 (size 64) =====

int64_t sym.show_palm_sensor(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,0x800216a,*0x8006000);
    return iVar1;
}


// ===== sym.store_palm_sensor @ 0x08009690 (size 292) =====

int64_t sym.store_palm_sensor(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    code *pcVar3;
    ulong noname_0;
    ulong *in_x18;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    pcVar3 = sym.get_xiaomi_touch_driver_param(0);
    uStack_3c = 0;
    iVar2 = sscanf(arg2,0x8000ef2,&uStack_3c);
    if (-1 < iVar2) {
        if (pcVar3 == NULL) goto code_r0x0800971c;
        pcVar3 = *(pcVar3 + 0x160);
        if (pcVar3 == NULL) goto code_r0x0800971c;
        if (1 < (pcVar3 + -0x8004630 >> 3 | pcVar3 << 0x3d)) goto code_r0x08009790;
        while( true ) {
            (*pcVar3)(uStack_3c != 0);
code_r0x0800971c:
            sym.add_common_data_to_buf(0,0,0x1a,1);
            sym.xiaomi_touch_printf(noname_0,0x80019f1,0x8001464,uStack_3c);
code_r0x08009758:
            iVar1 = sp_el0;
            if (*(iVar1 + 0x5e0) == iStack_38) break;
            __stack_chk_fail();
code_r0x08009790:
            __cfi_slowpath_diag(0x47ce015a85343a42,pcVar3,0x8000e70);
        }
        return arg3;
    }
    arg3 = -0x16;
    goto code_r0x08009758;
}


// ===== sym.show_touch_thp_ic_cmd_data @ 0x080097b4 (size 1160) =====

int64_t sym.show_touch_thp_ic_cmd_data(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    ulong uVar1;
    uint16_t uVar2;
    ulong uVar3;
    ulong uVar4;
    code *pcVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int64_t iVar9;
    ulong *puVar10;
    ulong *in_x18;
    uint32_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *0x80067aa;
    uVar12 = *0x80067aa;
    sym.xiaomi_touch_printf(noname_0,0x8001aad,0x8002eaf,uVar12);
    mutex_lock(obj.thp_ic_read_data_mutex);
    if (*0x80067a9 == 9) {
        uVar12 = *0x8006000;
        if (*0x8006000 != 0) {
            uVar13 = 0;
            do {
                if (uVar13 == 0x200) goto code_r0x08009c38;
                sym.xiaomi_touch_printf(uVar13 + 0x80067a8,0x8003080,0x8002eaf,uVar13 & 0xffffffff);
                uVar12 = *0x80067ac;
                uVar13 = uVar13 + 1;
            } while (uVar13 < uVar12);
        }
        if (uVar2 < 0xbb9) {
            memcpy(arg1,0x80067b0,uVar12);
            uVar11 = *0x80067ac;
        }
        else if (uVar2 == 0xbea) {
            iVar9 = sym.get_xiaomi_touch_data(0);
            if (arg1 == 0) {
                uVar11 = 0xffffffff;
            }
            else {
                memset(arg1,0,0x1000);
                puVar10 = *(iVar9 + 0x14d8);
                *puVar10 = *0x80067b0;
                uVar4 = *0x80067c0;
                uVar3 = *0x80067b8;
                uVar1 = CONCAT17(*0x80067cf,*0x80067c8);
                *(puVar10 + 0x1f) = CONCAT71(*0x80067d0,*0x80067cf);
                puVar10[2] = uVar4;
                puVar10[3] = uVar1;
                puVar10[1] = uVar3;
                iVar6 = snprintf(arg1,0x1000,"protocol_version:    %hu\n",**(iVar9 + 0x14d8));
                iVar7 = snprintf(arg1 + iVar6,0x1000,"frame_len:    %hu\n",*(*(iVar9 + 0x14d8) + 2));
                iVar8 = snprintf(arg1 + (iVar7 + iVar6),0x1000,"ic_fw_v:    %hu\n",*(*(iVar9 + 0x14d8) + 4));
                iVar8 = iVar8 + iVar7 + iVar6;
                iVar6 = snprintf(arg1 + iVar8,0x1000,"ic_name:    %hu\n",*(*(iVar9 + 0x14d8) + 6));
                iVar6 = iVar6 + iVar8;
                iVar8 = snprintf(arg1 + iVar6,0x1000,"ic_project_name:    %hu\n",*(*(iVar9 + 0x14d8) + 8));
                iVar8 = iVar8 + iVar6;
                iVar6 = snprintf(arg1 + iVar8,0x1000,"ic_supplier_name:    %hu\n",*(*(iVar9 + 0x14d8) + 10));
                iVar6 = iVar6 + iVar8;
                iVar8 = snprintf(arg1 + iVar6,0x1000,"pitch_size_y:    %d\n",*(*(iVar9 + 0x14d8) + 0xc));
                iVar8 = iVar8 + iVar6;
                iVar6 = snprintf(arg1 + iVar8,0x1000,"pitch_size_x:    %d\n",*(*(iVar9 + 0x14d8) + 0xd));
                iVar6 = iVar6 + iVar8;
                iVar8 = snprintf(arg1 + iVar6,0x1000,"numCol:    %d\n",*(*(iVar9 + 0x14d8) + 0xe));
                iVar8 = iVar8 + iVar6;
                iVar6 = snprintf(arg1 + iVar8,0x1000,"numRow:    %d\n",*(*(iVar9 + 0x14d8) + 0xf));
                iVar6 = iVar6 + iVar8;
                iVar8 = snprintf(arg1 + iVar6,0x1000,"packaging_factory:    %hu\n",*(*(iVar9 + 0x14d8) + 0x10));
                iVar8 = iVar8 + iVar6;
                iVar6 = snprintf(arg1 + iVar8,0x1000,"wafe_factory:    %hu\n",*(*(iVar9 + 0x14d8) + 0x12));
                iVar6 = iVar6 + iVar8;
                iVar8 = snprintf(arg1 + iVar6,0x1000,"x_resolution:    %hu\n",*(*(iVar9 + 0x14d8) + 0x14));
                iVar8 = iVar8 + iVar6;
                iVar6 = snprintf(arg1 + iVar8,0x1000,"y_resolution:    %hu\n",*(*(iVar9 + 0x14d8) + 0x16));
                iVar6 = iVar6 + iVar8;
                iVar8 = snprintf(arg1 + iVar6,0x1000,"lockdown_info:    %lu\n",*(*(iVar9 + 0x14d8) + 0x18));
                iVar8 = iVar8 + iVar6;
                iVar6 = snprintf(arg1 + iVar8,0x1000,"frame_data_type:    %d\n",*(*(iVar9 + 0x14d8) + 0x20));
                iVar6 = iVar6 + iVar8;
                iVar8 = snprintf(arg1 + iVar6,0x1000,"mutual_len:    %hu\n",*(*(iVar9 + 0x14d8) + 0x21));
                iVar8 = iVar8 + iVar6;
                iVar6 = snprintf(arg1 + iVar8,0x1000,"slef1_len:    %hu\n",*(*(iVar9 + 0x14d8) + 0x23));
                iVar6 = iVar6 + iVar8;
                iVar8 = snprintf(arg1 + iVar6,0x1000,"slef2_len:    %hu\n",*(*(iVar9 + 0x14d8) + 0x25));
                uVar11 = iVar8 + iVar6;
            }
        }
        else {
            if (uVar12 == 0) {
                iVar8 = 0;
            }
            else {
                uVar12 = 0;
                iVar8 = 0;
                do {
                    if (uVar12 == 0x200) {
code_r0x08009c38:
    //WARNING: Does not return
                        pcVar5 = SoftwareBreakpoint(1,0x8009c3c);
                        (*pcVar5)();
                    }
                    iVar6 = snprintf(arg1 + iVar8,0x1000 - iVar8,0x80027b1,*(uVar12 + 0x80067b0));
                    iVar8 = iVar6 + iVar8;
                    uVar12 = uVar12 + 1;
                } while (uVar12 < *0x80067ac);
            }
            iVar6 = snprintf(arg1 + iVar8,0x1000 - iVar8,0x800275a);
            uVar11 = iVar6 + iVar8;
        }
        mutex_unlock(obj.thp_ic_read_data_mutex);
        iVar9 = uVar11;
    }
    else {
        sym.xiaomi_touch_printf(*0x80067a9,0x800272c,0x8002eaf,uVar12);
        mutex_unlock(obj.thp_ic_read_data_mutex);
        iVar9 = 0;
    }
    return iVar9;
}


// ===== sym.store_touch_thp_ic_cmd_data @ 0x08009c3c (size 148) =====

uint32_t sym.store_touch_thp_ic_cmd_data(ulong noname_0,uchar noname_1 [16],int64_t arg1,uint32_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 < 0x209) {
        mutex_lock(obj.thp_ic_write_data_mutex);
        memcpy(0x80067a8,arg1,arg2);
        mutex_unlock(obj.thp_ic_write_data_mutex);
    }
    else {
        sym.xiaomi_touch_printf(noname_0,0x80021a2,0x80023fa,0x80023fa);
    }
    return arg2;
}


// ===== sym.show_touch_thp_ic_cmd @ 0x08009cd0 (size 16) =====

ulong sym.show_touch_thp_ic_cmd(void)

{
    return 0;
}


// ===== sym.store_touch_thp_ic_cmd @ 0x08009ce0 (size 596) =====

int64_t sym.store_touch_thp_ic_cmd(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    int64_t iVar2;
    code *pcVar3;
    int iVar4;
    char *arg1_00;
    char *arg3;
    uint64_t arg3_00;
    ulong noname_0_00;
    uint64_t uVar5;
    uint64_t extraout_x8;
    uint8_t *puVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar9;
    ulong unaff_x30;
    uint32_t auStack_248 [128];
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_48 = *(iVar2 + 0x5e0);
    mutex_lock(obj.thp_ic_mutex);
    memset(auStack_248,0,0x200);
    uVar1 = *arg1;
    if (uVar1 == 0) {
        arg3_00 = 0;
        sym.xiaomi_touch_printf(noname_0_00,0x80020a9,0x80012c7,0);
        uVar5 = extraout_x8;
code_r0x08009e34:
        arg1_00 = "MI_TP_E: %s: unsupport cmd!!";
    }
    else {
        uVar9 = 0;
        uVar5 = 0;
        uVar8 = 0;
        puVar6 = arg1 + 1;
        do {
            uVar7 = uVar1;
            if (uVar7 - 0x30 < 10) {
                if (0x7f < uVar5) {
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x8009f30);
                    (*pcVar3)();
                }
                uVar9 = uVar9 + (~uVar8 & 1);
                auStack_248[uVar5] = (uVar7 + auStack_248[uVar5] * 10) - 0x30;
            }
            else {
                if ((uVar7 != 0x2c) && (uVar7 != 0x20)) break;
                uVar5 = uVar5 + uVar8;
            }
            uVar1 = *puVar6;
            uVar8 = uVar7 - 0x30 < 10;
            puVar6 = puVar6 + 1;
        } while (uVar1 != 0);
        arg3 = "store_touch_thp_ic_cmd";
        arg3_00 = auStack_248[0];
        sym.xiaomi_touch_printf(uVar5,0x80020a9,0x80012c7,arg3_00);
        uVar5 = auStack_248[0] & 0xfffffffe;
        if ((auStack_248[0] & 0xfffffffe) != 8) goto code_r0x08009e34;
        uVar5 = uVar9 - 0x81;
        if (uVar9 - 0x81 < 0xffffff83) {
            arg1_00 = "MI_TP_E: %s: input format is error!!";
        }
        else {
            uVar7 = uVar9 - 3;
            arg3_00 = uVar7;
            uVar8 = auStack_248[uVar9 - 1];
            uVar5 = uVar8;
            if ((auStack_248[1] < 0) || (auStack_248[1] == 0xbe5)) {
                if ((auStack_248[0] != 8) || (auStack_248[1] != 0xbe5)) goto code_r0x08009e50;
                if (uVar7 == uVar8) {
                    arg3 = 0xbe5;
                    sym.add_common_data_to_buf(0,8,0xbe5,arg3_00);
                    goto code_r0x08009e50;
                }
                arg1_00 = "MI_TP_E: %s: data format is error!!";
            }
            else {
                if (((uVar9 < 5) && (uVar7 != uVar8)) && (auStack_248[3] == 2)) {
                    arg3 = auStack_248[1];
                    sym.add_common_data_to_buf(0,auStack_248[0],arg3,2);
                    goto code_r0x08009e50;
                }
                arg1_00 = "MI_TP_E: %s: data mode is error!!";
            }
        }
    }
    arg3 = "store_touch_thp_ic_cmd";
    sym.xiaomi_touch_printf(uVar5,arg1_00,0x80012c7,arg3_00);
    arg2 = -1;
code_r0x08009e50:
    mutex_unlock(obj.thp_ic_mutex);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_48) {
        return arg2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.show_touch_finger_status;
    iVar4 = snprintf(arg3,0x1000,0x800216a,*0x8006000);
    return iVar4;
}


// ===== sym.show_touch_finger_status @ 0x08009f34 (size 64) =====

int64_t sym.show_touch_finger_status(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,0x800216a,*0x8006000);
    return iVar1;
}


// ===== sym.store_touch_finger_status @ 0x08009f74 (size 176) =====

//WARNING: Control flow encountered bad instruction data

int64_t sym.store_touch_finger_status(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iStack_2c = 0;
    iVar2 = sscanf(arg1,0x8000ef2,&iStack_2c);
    if (iVar2 < 0) {
        arg2 = -0x16;
    }
    else if (*0x8006000 != iStack_2c) {
        *0x8006000 = iStack_2c;
        sysfs_notify(CONCAT44(*0x8006004,iStack_2c),0,"touch_finger_status");
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return arg2;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.init_module @ 0x0800a178 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.xiaomi_touch_probe.c75ca9bdde7c09fd6e53abbae75ed65e.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x0800a1ac (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.xiaomi_touch_probe.c75ca9bdde7c09fd6e53abbae75ed65e.cfi_jt);
    return;
}

