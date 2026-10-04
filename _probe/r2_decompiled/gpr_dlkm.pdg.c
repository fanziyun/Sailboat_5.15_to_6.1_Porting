// decompiled from gpr_dlkm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 892) =====

//WARNING: Switch with 1 destination removed at 0x08002488

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x550b9e52359ac614) {
            if (arg1 < -0x59a85bcf63dffd48) {
                if (arg1 == -0x69209fe9f9620b1f) {
                    pcVar2 = sym.__gpr_driver_register.cfi_jt;
                }
                else {
                    if (arg1 != -0x61278529fef85643) goto code_r0x08002448;
                    pcVar2 = sym.gpr_callback.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt;
                }
            }
            else if (arg1 == -0x59a85bcf63dffd48) {
                pcVar2 = sym.gpr_device_match.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt;
            }
            else {
                if (arg1 != -0x57be845bca9148ef) goto code_r0x08002448;
                pcVar2 = sym.gpr_device_probe.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt;
            }
        }
        else if (arg1 < -0x2d1ef4d8549a89e5) {
            if (arg1 == -0x550b9e52359ac614) {
                pcVar2 = sym.gpr_notifier_register.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt;
            }
            else {
                if (arg1 != -0x48ef54602b463a27) goto code_r0x08002448;
                pcVar2 = sym.gpr_ssr_disable.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt;
            }
        }
        else if (arg1 == -0x2d1ef4d8549a89e5) {
            pcVar2 = sym.gpr_remove_device.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt;
        }
        else if (arg1 == -0x19ad56ffbc919b67) {
            pcVar2 = sym.gpr_probe.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt;
        }
        else {
            if (arg1 != -0xcf0126c76edc388) goto code_r0x08002448;
            pcVar2 = sym.gpr_set_modem_state.cfi_jt;
        }
    }
    else if (arg1 < 0x5b83a3fd302a5421) {
        if (arg1 < 0x2ce63a3287021e91) {
            if (arg1 == 0x2b3a43e29242445) {
                pcVar2 = sym.init_module.cfi_jt;
            }
            else {
                if (arg1 != 0xebee8548434ef6f) goto code_r0x08002448;
                pcVar2 = sym.gpr_set_q6_state.cfi_jt;
            }
        }
        else if (arg1 == 0x2ce63a3287021e91) {
            pcVar2 = sym.gpr_remove.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt;
        }
        else {
            if (arg1 == 0x3e08a5e09a0a9b37) {
                pcVar2 = sym.gpr_get_modem_state.cfi_jt;
                goto code_r0x08001348;
            }
            if (arg1 != 0x50548911d7317b7f) goto code_r0x08002448;
            pcVar2 = sym.gpr_driver_unregister.cfi_jt;
        }
    }
    else if (arg1 < 0x7afea1120d1f9eaf) {
        if (arg1 == 0x5b83a3fd302a5421) {
            pcVar2 = sym.gpr_dev_release.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt;
code_r0x08001348:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08002448;
        }
        if (arg1 != 0x76182c68fb3000dc) goto code_r0x08002448;
        pcVar2 = sym.gpr_uevent.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt;
    }
    else if (arg1 == 0x7afea1120d1f9eaf) {
        pcVar2 = sym.gpr_send_pkt.cfi_jt;
    }
    else if (arg1 == 0x7d57972cd3914fb1) {
        pcVar2 = sym.gpr_notifier_service_cb.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08002448;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08002448:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800249c);
    (*pcVar1)();
}


// ===== sym.gpr_ssr_disable.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt @ 0x08001388 (size 8) =====

void sym.gpr_ssr_disable.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt(void)

{
    _segment.ehdr = 0;
    return;
}


// ===== sym.gpr_device_match.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt @ 0x08001390 (size 8) =====

ulong sym.gpr_device_match.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    uint32_t *puVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_2 + 0xb0);
    iVar1 = of_match_device(*(param_2 + 0x28),param_1);
    if (iVar1 == 0) {
        if (iVar3 == 0) {
            return 0;
        }
        puVar2 = iVar3 + 0x24;
        while( true ) {
            if ((puVar2[-1] == 0) && (*puVar2 == 0)) {
                return 0;
            }
            if ((puVar2[-1] == *(param_1 + 0x392)) && (*puVar2 == *(param_1 + 0x390))) break;
            puVar2 = puVar2 + 0xe;
        }
    }
    return 1;
}


// ===== sym.gpr_get_modem_state.cfi_jt @ 0x08001398 (size 8) =====

ulong sym.gpr_get_modem_state.cfi_jt(void)

{
    return *0x80000f4;
}


// ===== sym.gpr_get_q6_state.cfi_jt @ 0x080013a0 (size 8) =====

ulong sym.gpr_get_q6_state.cfi_jt(void)

{
    return _obj.q6;
}


// ===== sym.__gpr_driver_register.cfi_jt @ 0x080013a8 (size 8) =====

void sym.__gpr_driver_register.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 0x20) = obj.gprbus;
    *(param_1 + 0x28) = param_2;
    driver_register(param_1 + 0x18);
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080013b0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bus_unregister(obj.gprbus);
    unregister_rpmsg_driver(obj.gpr_driver);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080013b8 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = bus_register(obj.gprbus);
    if (iVar1 == 0) {
        iVar1 = __register_rpmsg_driver(obj.gpr_driver,obj.__this_module);
    }
    else {
        bus_unregister(obj.gprbus);
    }
    return iVar1;
}


// ===== sym.gpr_probe.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt @ 0x080013c0 (size 8) =====

uint64_t sym.gpr_probe.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *puVar2;
    uint32_t uVar3;
    int iVar4;
    int iVar5;
    uint64_t uVar6;
    ulong *puVar7;
    int64_t *piVar8;
    ulong uVar9;
    char *pcVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar11;
    int64_t iVar12;
    ulong unaff_x30;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_68 = *(iVar12 + 0x5e0);
    uVar6 = audio_notifier_probe_status();
    if ((uVar6 & 1) == 0) {
        _printk(0x80009a5,"gpr_probe");
        uVar6 = 0xfffffdfb;
    }
    else {
        _segment.ehdr = devm_kmalloc(param_1,0x78,0xdc0);
        if (_segment.ehdr == NULL) {
            uVar6 = 0xfffffff4;
        }
        else {
            *(_segment.ehdr + 2) = 0;
            __mutex_init(0x80000f8,"&q6.lock",obj.gpr_probe.__key);
            _raw_spin_lock(_segment.ehdr + 2);
            puVar7 = _segment.ehdr + 2;
            *(_segment.ehdr + 0x14) = 1;
            _raw_spin_unlock(puVar7);
            puVar7 = _segment.ehdr;
            *(param_1 + 0x98) = _segment.ehdr;
            *puVar7 = *(param_1 + 0x3c8);
            puVar7[1] = param_1;
            *(puVar7 + 3) = 0;
            puVar7[4] = 0x1000000400000000;
            puVar7[5] = 0;
            puVar7[6] = 0;
            iVar5 = snd_event_client_register(param_1,obj.gpr_ssr_ops,0);
            if (iVar5 != 0) {
                _dev_err(param_1,"%s: Registration with SND event fwk failed ret = %d\n","gpr_probe",iVar5);
            }
            uVar3 = of_property_read_variable_u32_array(*(param_1 + 0x2f0),0x8000aa7,_segment.ehdr + 7,1,0);
            if (uVar3 < 0) {
                uVar6 = uVar3;
                _dev_err(param_1,"GPR Domain ID not specified in DT\n");
            }
            else {
                iVar12 = *(param_1 + 0x98);
                puVar7 = of_get_next_child(*(param_1 + 0x2f0),0);
                if (puVar7 != NULL) {
                    do {
                        uStack_78 = 0;
                        uStack_70 = 0;
                        uStack_80 = 0;
                        iVar5 = of_property_read_variable_u32_array(puVar7,0x8000aa7,&uStack_80 + 4,1,0);
                        if (-1 < iVar5) {
                            iVar11 = *(param_1 + 0x98);
                            uStack_80 = CONCAT44(uStack_80._4_4_,*(iVar12 + 0x38));
                            piVar8 = kmem_cache_alloc_trace(__dev_err,0xdc0,0x3d0);
                            if (piVar8 != NULL) {
                                *(piVar8 + 0x77) = 0;
                                *(piVar8 + 0x72) = uStack_80 >> 0x20;
                                *(piVar8 + 0x392) = uStack_80;
                                *(piVar8 + 0x394) = uStack_78;
                                strscpy(piVar8 + 0x73,*puVar7,0x20);
                                dev_set_name(piVar8,"gprsvc:%s:%x:%x",piVar8 + 0x73,uStack_80 & 0xffffffff,
                                             uStack_80._4_4_);
                                iVar1 = iVar11 + 0x18;
                                piVar8[0xc] = param_1;
                                piVar8[0x5e] = puVar7;
                                piVar8[0x66] = sym.gpr_dev_release.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt;
                                piVar8[0x10] = obj.gprbus;
                                piVar8[0x11] = 0;
                                _raw_spin_lock(iVar1);
                                idr_alloc(iVar11 + 0x20,piVar8,uStack_80._4_4_,uStack_80._4_4_ + 1,0xa20);
                                _raw_spin_unlock(iVar1);
                                iVar5 = ___ratelimit(obj.gpr_add_device._rs,"gpr_add_device");
                                if (iVar5 != 0) {
                                    iVar11 = piVar8[0xe];
                                    if (iVar11 == 0) {
                                        iVar11 = *piVar8;
                                    }
                                    _dev_info(param_1,"Adding GPR dev: %s\n",iVar11);
                                }
                                iVar5 = device_register(piVar8);
                                if (iVar5 == 0) goto code_r0x08001c0c;
                                iVar4 = ___ratelimit(obj.gpr_add_device._rs.25,"gpr_add_device");
                                if (iVar4 != 0) {
                                    _dev_err(param_1,"device_register failed: %d\n",iVar5);
                                }
                                put_device(piVar8);
                            }
                            iVar5 = ___ratelimit(obj.of_register_gpr_devices._rs,"of_register_gpr_devices");
                            if (iVar5 != 0) {
                                _dev_err(param_1,"Failed to add gpr %d svc\n",uStack_80._4_4_);
                            }
                        }
code_r0x08001c0c:
                        puVar7 = of_get_next_child(*(param_1 + 0x2f0),puVar7);
                    } while (puVar7 != NULL);
                }
                puVar2 = _segment.ehdr;
                puVar7 = _segment.ehdr + 9;
                _segment.ehdr[8] = 0xfffffffe0;
                puVar2[9] = puVar7;
                puVar2[10] = puVar7;
                puVar2[0xb] = sym.gpr_notifier_register.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt;
                if (*(puVar2 + 7) - 1U < 2) {
                    queue_work_on(0x20,_audio_notifier_register,puVar2 + 8);
                    uVar9 = wakeup_source_register(_segment.ehdr[1],"audio-gpr");
                    _segment.ehdr[0xe] = uVar9;
                    _dev_info(param_1,"%s: gpr-lite probe success\n","gpr_probe");
                    uVar6 = 0;
                }
                else {
                    _dev_err(param_1,"%s: invalid dest_domain_id %s\n","gpr_probe");
                    uVar6 = 0xffffffea;
                }
            }
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_68) {
        return uVar6;
    }
    uVar9 = __stack_chk_fail();
    *extraout_x18 = sym.gpr_remove;
    wakeup_source_unregister(_segment.ehdr[0xe]);
    snd_event_client_deregister(uVar9);
    _dev_info(uVar9,"%s: deregistering via subsys_notif_register for domain_id(%d)","gpr_remove",*(_segment.ehdr + 7)
             );
    if (*(_segment.ehdr + 7) == 1) {
        iVar5 = audio_notifier_deregister("gpr_modem");
        if ((-1 < iVar5) ||
           (iVar5 = ___ratelimit(obj.gpr_subsys_notif_deregister._rs,"gpr_subsys_notif_deregister"), iVar5 == 0))
        goto code_r0x08001e70;
        pcVar10 = "gpr_modem";
    }
    else {
        if (((*(_segment.ehdr + 7) != 2) || (iVar5 = audio_notifier_deregister("gpr_adsp"), -1 < iVar5)) ||
           (iVar5 = ___ratelimit(obj.gpr_subsys_notif_deregister._rs,"gpr_subsys_notif_deregister"), iVar5 == 0))
        goto code_r0x08001e70;
        pcVar10 = "gpr_adsp";
    }
    _dev_err(_segment.ehdr[1],"%s: Audio notifier de-register failed for client %s\n","gpr_subsys_notif_deregister",
             pcVar10);
code_r0x08001e70:
    uVar6 = device_for_each_child(uVar9,0,sym.gpr_remove_device.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt);
    return uVar6;
}


// ===== sym.gpr_send_pkt.cfi_jt @ 0x080013c8 (size 8) =====

uint32_t sym.gpr_send_pkt.cfi_jt(int64_t param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    int16_t iVar2;
    ushort uVar3;
    uint32_t uVar4;
    int iVar5;
    ulong uVar6;
    char *pcVar7;
    ulong uVar8;
    ulong *in_x18;
    ulong *puVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        iVar5 = ___ratelimit(obj.gpr_send_pkt._rs,"gpr_send_pkt");
        if (iVar5 == 0) {
            return 0xffffffea;
        }
        uVar6 = 0x800076f;
    }
    else {
        if (*(param_1 + 0x60) == 0) {
            iVar5 = ___ratelimit(obj.gpr_send_pkt._rs.3,"gpr_send_pkt");
            if (iVar5 == 0) {
                return 0xffffffea;
            }
            uVar8 = *(param_1 + 0x60);
            uVar6 = 0x8000b13;
            goto code_r0x08001690;
        }
        puVar9 = *(*(param_1 + 0x60) + 0x98);
        if (puVar9 != NULL) {
            iVar2 = *(param_1 + 0x392);
            if (iVar2 == 2) {
                if (_obj.q6 != 2) {
                    iVar5 = ___ratelimit(obj.gpr_send_pkt._rs.7,"gpr_send_pkt");
                    if (iVar5 == 0) {
                        return 0xffffff9a;
                    }
                    uVar6 = puVar9[1];
                    uVar3 = *(param_1 + 0x392);
                    pcVar7 = "%s: domain_id[%d], Still Dsp is not Up\n";
                    goto code_r0x08001714;
                }
                iVar2 = *(param_1 + 0x392);
            }
            if ((iVar2 != 1) || (*0x80000f4 != 0)) {
                uVar6 = _raw_spin_lock_irqsave(param_1 + 0x3b8);
                uVar1 = *param_2;
                *(param_2 + 1) = *(param_1 + 0x392);
                uVar4 = rpmsg_trysend(*puVar9,param_2,uVar1 >> 8);
                _raw_spin_unlock_irqrestore(param_1 + 0x3b8,uVar6);
                if (uVar4 != 0) {
                    return uVar4;
                }
                return uVar1 >> 8;
            }
            iVar5 = ___ratelimit(obj.gpr_send_pkt._rs.9,"gpr_send_pkt");
            if (iVar5 == 0) {
                return 0xffffff9a;
            }
            uVar6 = puVar9[1];
            uVar3 = *(param_1 + 0x392);
            pcVar7 = "%s: domain_id[%d], Still Modem is not Up\n";
code_r0x08001714:
            _dev_err(uVar6,pcVar7,"gpr_send_pkt",uVar3);
            return 0xffffff9a;
        }
        iVar5 = ___ratelimit(obj.gpr_send_pkt._rs.5,"gpr_send_pkt");
        if (iVar5 == 0) {
            return 0xffffffea;
        }
        uVar6 = 0x80006b8;
    }
    uVar8 = 0;
code_r0x08001690:
    _printk(uVar6,"gpr_send_pkt",uVar8);
    return 0xffffffea;
}


// ===== sym.gpr_dev_release.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt @ 0x080013d0 (size 8) =====

void sym.gpr_dev_release.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree();
    return;
}


// ===== sym.gpr_device_remove.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt @ 0x080013d8 (size 8) =====

void sym.gpr_device_remove.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    code *pcVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x88) != 0) {
        pcVar2 = *(*(param_1 + 0x88) + -0x10);
        iVar3 = *(*(param_1 + 0x60) + 0x98);
        if (pcVar2 != NULL) {
            __cfi_slowpath_diag(0x85e55925701a1b9b,pcVar2,0x80005c0);
            (*pcVar2)(param_1);
        }
        iVar1 = iVar3 + 0x18;
        _raw_spin_lock(iVar1);
        idr_remove(iVar3 + 0x20,*(param_1 + 0x390));
        _raw_spin_unlock(iVar1);
    }
    return;
}


// ===== sym.gpr_uevent.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt @ 0x080013e0 (size 8) =====

void sym.gpr_uevent.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt(int64_t param_1,ulong param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_device_uevent_modalias();
    if (iVar1 == -0x13) {
        add_uevent_var(param_2,"MODALIAS=gpr:%s",param_1 + 0x398);
    }
    return;
}


// ===== sym.gpr_set_q6_state.cfi_jt @ 0x080013e8 (size 8) =====

ulong sym.gpr_set_q6_state.cfi_jt(uint32_t param_1)

{
    if (2 < param_1) {
        return 0xffffffea;
    }
    _segment.ehdr = param_1;
    return 0;
}


// ===== sym.gpr_remove_device.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt @ 0x080013f0 (size 8) =====

ulong sym.gpr_remove_device.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    device_unregister();
    return 0;
}


// ===== sym.gpr_callback.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt @ 0x080013f8 (size 8) =====

ulong sym.gpr_callback.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt(int64_t param_1,uint32_t *param_2,uint32_t param_3)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong *in_x18;
    code *pcVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar9 = *(param_1 + 0x98);
    if (param_3 < 0x19) {
        iVar4 = ___ratelimit(obj.gpr_callback._rs,"gpr_callback");
        if (iVar4 != 0) {
            _dev_err(*(iVar9 + 8),"GPR: Improper gpr pkt received:%p %d\n",param_2,param_3);
        }
    }
    else {
        uVar3 = *param_2;
        uVar2 = uVar3 >> 2 & 0x3c;
        if (uVar2 < 0x18) {
            iVar4 = ___ratelimit(obj.gpr_callback._rs.36,"gpr_callback");
            if (iVar4 != 0) {
                _dev_err(*(iVar9 + 8),"GPR: Wrong hdr size:%d\n",uVar2);
            }
        }
        else if (((uVar3 >> 0xb & 0x1fff) < 3) || (param_3 != (uVar3 >> 8 & 0xffff))) {
            iVar4 = ___ratelimit(obj.gpr_callback._rs.38,"gpr_callback");
            if (iVar4 != 0) {
                _dev_err(*(iVar9 + 8),"GPR: Wrong packet size\n");
            }
        }
        else {
            if (param_2[5] == 0x3001000) {
                _dev_err(*(iVar9 + 8),"%s: Acquire wakelock in case of module event with timeout %d","gpr_callback",
                         200);
                pm_wakeup_ws_event(*(_segment.ehdr + 0x70),200,1);
            }
            iVar1 = iVar9 + 0x18;
            uVar2 = param_2[3];
            uVar5 = _raw_spin_lock_irqsave(iVar1);
            iVar6 = idr_find(iVar9 + 0x20,uVar2);
            if (((iVar6 == 0) || (iVar7 = *(iVar6 + 0x88), iVar7 == 0)) &&
               ((iVar6 = idr_find(iVar9 + 0x20,0x17), iVar6 == 0 || (iVar7 = *(iVar6 + 0x88), iVar7 == 0)))) {
                _raw_spin_unlock_irqrestore(iVar1,uVar5);
            }
            else {
                _raw_spin_unlock_irqrestore(iVar1,uVar5);
                if (iVar7 != 0x18) {
                    pcVar8 = *(iVar7 + -8);
                    __cfi_slowpath_diag(0xf56844a47c5a9865,pcVar8,0x80005e0);
                    (*pcVar8)(iVar6,param_2);
                    return 0;
                }
            }
            iVar4 = ___ratelimit(obj.gpr_callback._rs.41,"gpr_callback");
            if (iVar4 != 0) {
                _dev_err(*(iVar9 + 8),"GPR: service is not registered\n");
            }
            if (param_2[5] == 0x3001000) {
                __pm_relax(*(_segment.ehdr + 0x70));
            }
        }
    }
    return 0xffffffea;
}


// ===== sym.gpr_device_probe.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt @ 0x08001400 (size 8) =====

void sym.gpr_device_probe.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = *(*(param_1 + 0x88) + -0x18);
    __cfi_slowpath_diag(0x85e55925701a1b9b,pcVar1,0x80005a0);
    (*pcVar1)(param_1);
    return;
}


// ===== sym.gpr_set_modem_state.cfi_jt @ 0x08001408 (size 8) =====

void sym.gpr_set_modem_state.cfi_jt(uint param_1)

{
    _segment.ehdr = param_1;
    return;
}


// ===== sym.gpr_notifier_service_cb.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt @ 0x08001410 (size 8) =====

ulong sym.gpr_notifier_service_cb.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt
                (ulong param_1,int64_t param_2,int64_t param_3)

{
    char cVar1;
    int64_t iVar2;
    int iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_3 == 0) {
        iVar3 = ___ratelimit(obj.gpr_notifier_service_cb._rs,"gpr_notifier_service_cb");
        if (iVar3 != 0) {
            _dev_err(*(CONCAT44(*0x8000004,_segment.ehdr) + 8),"%s: Callback data is NULL!\n",
                     "gpr_notifier_service_cb");
        }
    }
    else if (param_2 == 1) {
        if (*(param_3 + 4) != 1) {
            iVar3 = ___ratelimit(obj.gpr_adsp_up._rs,"gpr_adsp_up");
            if (iVar3 != 0) {
                _dev_info(*(CONCAT44(*0x8000004,_segment.ehdr) + 8),"%s: Q6 is Up\n","gpr_adsp_up");
            }
            _segment.ehdr = 2;
            snd_event_notify(*(CONCAT44(*0x8000004,2) + 8),1);
        }
        _raw_spin_lock(CONCAT44(*0x8000004,_segment.ehdr) + 0x10);
        iVar2 = CONCAT44(*0x8000004,_segment.ehdr);
        *(iVar2 + 0x14) = 0;
        _raw_spin_unlock(iVar2 + 0x10);
    }
    else if (param_2 == 0) {
        _raw_spin_lock(CONCAT44(*0x8000004,_segment.ehdr) + 0x10);
        cVar1 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x14);
        _raw_spin_unlock(CONCAT44(*0x8000004,_segment.ehdr) + 0x10);
        if (cVar1 == '\0') {
            if (*(param_3 + 4) == 1) {
                _segment.ehdr = 0;
            }
            else {
                iVar3 = ___ratelimit(obj.gpr_adsp_down._rs,"gpr_adsp_down");
                if (iVar3 != 0) {
                    _dev_info(*(CONCAT44(*0x8000004,_segment.ehdr) + 8),"%s: Q6 is Down\n","gpr_adsp_down");
                }
                _segment.ehdr = 0;
                snd_event_notify(*((*0x8000004 << 0x20) + 8),0);
            }
        }
    }
    return 1;
}


// ===== sym.gpr_driver_unregister.cfi_jt @ 0x08001418 (size 8) =====

void sym.gpr_driver_unregister.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    driver_unregister(param_1 + 0x18);
    return;
}


// ===== sym.gpr_remove.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt @ 0x08001420 (size 8) =====

void sym.gpr_remove.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt(ulong param_1)

{
    int iVar1;
    char *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    wakeup_source_unregister(*(_segment.ehdr + 0x70));
    snd_event_client_deregister(param_1);
    _dev_info(param_1,"%s: deregistering via subsys_notif_register for domain_id(%d)","gpr_remove",
              *(_segment.ehdr + 0x38));
    if (*(_segment.ehdr + 0x38) == 1) {
        iVar1 = audio_notifier_deregister("gpr_modem");
        if ((-1 < iVar1) ||
           (iVar1 = ___ratelimit(obj.gpr_subsys_notif_deregister._rs,"gpr_subsys_notif_deregister"), iVar1 == 0))
        goto code_r0x08001e70;
        pcVar2 = "gpr_modem";
    }
    else {
        if (((*(_segment.ehdr + 0x38) != 2) || (iVar1 = audio_notifier_deregister("gpr_adsp"), -1 < iVar1)) ||
           (iVar1 = ___ratelimit(obj.gpr_subsys_notif_deregister._rs,"gpr_subsys_notif_deregister"), iVar1 == 0))
        goto code_r0x08001e70;
        pcVar2 = "gpr_adsp";
    }
    _dev_err(*(_segment.ehdr + 8),"%s: Audio notifier de-register failed for client %s\n",
             "gpr_subsys_notif_deregister",pcVar2);
code_r0x08001e70:
    device_for_each_child(param_1,0,sym.gpr_remove_device.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt);
    return;
}


// ===== sym.gpr_notifier_register.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt @ 0x08001428 (size 8) =====

void sym.gpr_notifier_register.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt(void)

{
    int iVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(_segment.ehdr + 0x38) == 1) {
        iVar1 = audio_notifier_register
                          ("gpr_modem",1,reloc.gpr_notifier_service_cb.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt);
        if ((-1 < iVar1) || (iVar2 = ___ratelimit(obj.q6,"gpr_subsys_notif_register"), iVar2 == 0))
        goto code_r0x080021d0;
        uVar3 = 1;
    }
    else {
        if (((*(_segment.ehdr + 0x38) != 2) ||
            (iVar1 = audio_notifier_register("gpr_adsp",0,obj.adsp_service_nb), -1 < iVar1)) ||
           (iVar2 = ___ratelimit(obj.q6,"gpr_subsys_notif_register"), iVar2 == 0)) goto code_r0x080021d0;
        uVar3 = 0;
    }
    _dev_err(*(_segment.ehdr + 8),"%s: Audio notifier register failed for domain %d ret = %d\n",
             "gpr_subsys_notif_register",uVar3,iVar1);
code_r0x080021d0:
    iVar1 = ___ratelimit(obj.gpr_notifier_register._rs,"gpr_notifier_register");
    if (iVar1 != 0) {
        _dev_info(*(_segment.ehdr + 8),"%s: registered via subsys_notif_register for domain id(%d)",
                  "gpr_notifier_register",*(_segment.ehdr + 0x38));
    }
    return;
}


// ===== sym.gpr_get_q6_state @ 0x08001430 (size 24) =====

ulong sym.gpr_get_q6_state(void)

{
    return _obj.q6;
}


// ===== sym.gpr_get_modem_state @ 0x0800144c (size 24) =====

ulong sym.gpr_get_modem_state(void)

{
    return *0x80000f4;
}


// ===== sym.gpr_subsys_notif_register @ 0x08001468 (size 124) =====

void sym.gpr_subsys_notif_register(ulong noname_0,int64_t arg1)

{
    int iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = audio_notifier_register();
    if (iVar1 < 0) {
        iVar2 = ___ratelimit(obj.q6,"gpr_subsys_notif_register");
        if (iVar2 != 0) {
            _dev_err(*(_segment.ehdr + 8),"%s: Audio notifier register failed for domain %d ret = %d\n",
                     "gpr_subsys_notif_register",arg1 & 0xffffffff,iVar1);
        }
    }
    return;
}


// ===== sym.gpr_subsys_notif_deregister @ 0x080014e4 (size 116) =====

void sym.gpr_subsys_notif_deregister(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = audio_notifier_deregister();
    if ((iVar1 < 0) &&
       (iVar1 = ___ratelimit(obj.gpr_subsys_notif_deregister._rs,"gpr_subsys_notif_deregister"), iVar1 != 0)) {
        _dev_err(*(_segment.ehdr + 8),"%s: Audio notifier de-register failed for client %s\n",
                 "gpr_subsys_notif_deregister",arg1);
    }
    return;
}


// ===== sym.gpr_send_pkt @ 0x08001558 (size 464) =====

uint32_t sym.gpr_send_pkt(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int16_t iVar2;
    ushort uVar3;
    uint32_t uVar4;
    int iVar5;
    ulong uVar6;
    char *pcVar7;
    ulong uVar8;
    ulong *in_x18;
    ulong *puVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        iVar5 = ___ratelimit(obj.gpr_send_pkt._rs,"gpr_send_pkt");
        if (iVar5 == 0) {
            return 0xffffffea;
        }
        uVar6 = 0x800076f;
    }
    else {
        if (*(arg1 + 0x60) == 0) {
            iVar5 = ___ratelimit(obj.gpr_send_pkt._rs.3,"gpr_send_pkt");
            if (iVar5 == 0) {
                return 0xffffffea;
            }
            uVar8 = *(arg1 + 0x60);
            uVar6 = 0x8000b13;
            goto code_r0x08001690;
        }
        puVar9 = *(*(arg1 + 0x60) + 0x98);
        if (puVar9 != NULL) {
            iVar2 = *(arg1 + 0x392);
            if (iVar2 == 2) {
                if (_obj.q6 != 2) {
                    iVar5 = ___ratelimit(obj.gpr_send_pkt._rs.7,"gpr_send_pkt");
                    if (iVar5 == 0) {
                        return 0xffffff9a;
                    }
                    uVar6 = puVar9[1];
                    uVar3 = *(arg1 + 0x392);
                    pcVar7 = "%s: domain_id[%d], Still Dsp is not Up\n";
                    goto code_r0x08001714;
                }
                iVar2 = *(arg1 + 0x392);
            }
            if ((iVar2 != 1) || (*0x80000f4 != 0)) {
                uVar6 = _raw_spin_lock_irqsave(arg1 + 0x3b8);
                uVar1 = *arg2;
                *(arg2 + 4) = *(arg1 + 0x392);
                uVar4 = rpmsg_trysend(*puVar9,arg2,uVar1 >> 8);
                _raw_spin_unlock_irqrestore(arg1 + 0x3b8,uVar6);
                if (uVar4 != 0) {
                    return uVar4;
                }
                return uVar1 >> 8;
            }
            iVar5 = ___ratelimit(obj.gpr_send_pkt._rs.9,"gpr_send_pkt");
            if (iVar5 == 0) {
                return 0xffffff9a;
            }
            uVar6 = puVar9[1];
            uVar3 = *(arg1 + 0x392);
            pcVar7 = "%s: domain_id[%d], Still Modem is not Up\n";
code_r0x08001714:
            _dev_err(uVar6,pcVar7,"gpr_send_pkt",uVar3);
            return 0xffffff9a;
        }
        iVar5 = ___ratelimit(obj.gpr_send_pkt._rs.5,"gpr_send_pkt");
        if (iVar5 == 0) {
            return 0xffffffea;
        }
        uVar6 = 0x80006b8;
    }
    uVar8 = 0;
code_r0x08001690:
    _printk(uVar6,"gpr_send_pkt",uVar8);
    return 0xffffffea;
}


// ===== sym.gpr_set_modem_state @ 0x08001730 (size 20) =====

void sym.gpr_set_modem_state(int64_t arg1)

{
    _segment.ehdr = arg1;
    return;
}


// ===== sym.gpr_set_q6_state @ 0x08001744 (size 44) =====

ulong sym.gpr_set_q6_state(uint32_t arg1)

{
    if (2 < arg1) {
        return 0xffffffea;
    }
    _segment.ehdr = arg1;
    return 0;
}


// ===== sym.gpr_device_match @ 0x08001770 (size 140) =====

ulong sym.gpr_device_match(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t *puVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg2 + 0xb0);
    iVar1 = of_match_device(*(arg2 + 0x28),arg1);
    if (iVar1 == 0) {
        if (iVar3 == 0) {
            return 0;
        }
        puVar2 = iVar3 + 0x24;
        while( true ) {
            if ((puVar2[-1] == 0) && (*puVar2 == 0)) {
                return 0;
            }
            if ((puVar2[-1] == *(arg1 + 0x392)) && (*puVar2 == *(arg1 + 0x390))) break;
            puVar2 = puVar2 + 0xe;
        }
    }
    return 1;
}


// ===== sym.gpr_uevent @ 0x080017fc (size 80) =====

void sym.gpr_uevent(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_device_uevent_modalias();
    if (iVar1 == -0x13) {
        add_uevent_var(arg2,"MODALIAS=gpr:%s",arg1 + 0x398);
    }
    return;
}


// ===== sym.gpr_device_probe @ 0x0800184c (size 92) =====

void sym.gpr_device_probe(int64_t arg1)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = *(*(arg1 + 0x88) + -0x18);
    __cfi_slowpath_diag(0x85e55925701a1b9b,pcVar1,0x80005a0);
    (*pcVar1)(arg1);
    return;
}


// ===== sym.gpr_device_remove @ 0x080018a8 (size 148) =====

void sym.gpr_device_remove(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    code *pcVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x88) != 0) {
        pcVar2 = *(*(arg1 + 0x88) + -0x10);
        iVar3 = *(*(arg1 + 0x60) + 0x98);
        if (pcVar2 != NULL) {
            __cfi_slowpath_diag(0x85e55925701a1b9b,pcVar2,0x80005c0);
            (*pcVar2)(arg1);
        }
        iVar1 = iVar3 + 0x18;
        _raw_spin_lock(iVar1);
        idr_remove(iVar3 + 0x20,*(arg1 + 0x390));
        _raw_spin_unlock(iVar1);
    }
    return;
}


// ===== sym.__gpr_driver_register @ 0x0800193c (size 56) =====

void sym.__gpr_driver_register(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x20) = obj.gprbus;
    *(arg1 + 0x28) = arg2;
    driver_register(arg1 + 0x18);
    return;
}


// ===== sym.gpr_driver_unregister @ 0x08001974 (size 40) =====

void sym.gpr_driver_unregister(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    driver_unregister(arg1 + 0x18);
    return;
}


// ===== sym.gpr_probe @ 0x0800199c (size 1040) =====

uint64_t sym.gpr_probe(int64_t arg1)

{
    int64_t iVar1;
    ulong *puVar2;
    uint32_t uVar3;
    int iVar4;
    int iVar5;
    uint64_t uVar6;
    ulong *puVar7;
    int64_t *piVar8;
    ulong uVar9;
    char *pcVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar11;
    int64_t iVar12;
    ulong unaff_x30;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_68 = *(iVar12 + 0x5e0);
    uVar6 = audio_notifier_probe_status();
    if ((uVar6 & 1) == 0) {
        _printk(0x80009a5,"gpr_probe");
        uVar6 = 0xfffffdfb;
    }
    else {
        _segment.ehdr = devm_kmalloc(arg1,0x78,0xdc0);
        if (_segment.ehdr == NULL) {
            uVar6 = 0xfffffff4;
        }
        else {
            *(_segment.ehdr + 2) = 0;
            __mutex_init(0x80000f8,"&q6.lock",obj.gpr_probe.__key);
            _raw_spin_lock(_segment.ehdr + 2);
            puVar7 = _segment.ehdr + 2;
            *(_segment.ehdr + 0x14) = 1;
            _raw_spin_unlock(puVar7);
            puVar7 = _segment.ehdr;
            *(arg1 + 0x98) = _segment.ehdr;
            *puVar7 = *(arg1 + 0x3c8);
            puVar7[1] = arg1;
            *(puVar7 + 3) = 0;
            puVar7[4] = 0x1000000400000000;
            puVar7[5] = 0;
            puVar7[6] = 0;
            iVar5 = snd_event_client_register(arg1,obj.gpr_ssr_ops,0);
            if (iVar5 != 0) {
                _dev_err(arg1,"%s: Registration with SND event fwk failed ret = %d\n","gpr_probe",iVar5);
            }
            uVar3 = of_property_read_variable_u32_array(*(arg1 + 0x2f0),0x8000aa7,_segment.ehdr + 7,1,0);
            if (uVar3 < 0) {
                uVar6 = uVar3;
                _dev_err(arg1,"GPR Domain ID not specified in DT\n");
            }
            else {
                iVar12 = *(arg1 + 0x98);
                puVar7 = of_get_next_child(*(arg1 + 0x2f0),0);
                if (puVar7 != NULL) {
                    do {
                        uStack_78 = 0;
                        uStack_70 = 0;
                        uStack_80 = 0;
                        iVar5 = of_property_read_variable_u32_array(puVar7,0x8000aa7,&uStack_80 + 4,1,0);
                        if (-1 < iVar5) {
                            iVar11 = *(arg1 + 0x98);
                            uStack_80 = CONCAT44(uStack_80._4_4_,*(iVar12 + 0x38));
                            piVar8 = kmem_cache_alloc_trace(__dev_err,0xdc0,0x3d0);
                            if (piVar8 != NULL) {
                                *(piVar8 + 0x77) = 0;
                                *(piVar8 + 0x72) = uStack_80 >> 0x20;
                                *(piVar8 + 0x392) = uStack_80;
                                *(piVar8 + 0x394) = uStack_78;
                                strscpy(piVar8 + 0x73,*puVar7,0x20);
                                dev_set_name(piVar8,"gprsvc:%s:%x:%x",piVar8 + 0x73,uStack_80 & 0xffffffff,
                                             uStack_80._4_4_);
                                iVar1 = iVar11 + 0x18;
                                piVar8[0xc] = arg1;
                                piVar8[0x5e] = puVar7;
                                piVar8[0x66] = sym.gpr_dev_release.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt;
                                piVar8[0x10] = obj.gprbus;
                                piVar8[0x11] = 0;
                                _raw_spin_lock(iVar1);
                                idr_alloc(iVar11 + 0x20,piVar8,uStack_80._4_4_,uStack_80._4_4_ + 1,0xa20);
                                _raw_spin_unlock(iVar1);
                                iVar5 = ___ratelimit(obj.gpr_add_device._rs,"gpr_add_device");
                                if (iVar5 != 0) {
                                    iVar11 = piVar8[0xe];
                                    if (iVar11 == 0) {
                                        iVar11 = *piVar8;
                                    }
                                    _dev_info(arg1,"Adding GPR dev: %s\n",iVar11);
                                }
                                iVar5 = device_register(piVar8);
                                if (iVar5 == 0) goto code_r0x08001c0c;
                                iVar4 = ___ratelimit(obj.gpr_add_device._rs.25,"gpr_add_device");
                                if (iVar4 != 0) {
                                    _dev_err(arg1,"device_register failed: %d\n",iVar5);
                                }
                                put_device(piVar8);
                            }
                            iVar5 = ___ratelimit(obj.of_register_gpr_devices._rs,"of_register_gpr_devices");
                            if (iVar5 != 0) {
                                _dev_err(arg1,"Failed to add gpr %d svc\n",uStack_80._4_4_);
                            }
                        }
code_r0x08001c0c:
                        puVar7 = of_get_next_child(*(arg1 + 0x2f0),puVar7);
                    } while (puVar7 != NULL);
                }
                puVar2 = _segment.ehdr;
                puVar7 = _segment.ehdr + 9;
                _segment.ehdr[8] = 0xfffffffe0;
                puVar2[9] = puVar7;
                puVar2[10] = puVar7;
                puVar2[0xb] = sym.gpr_notifier_register.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt;
                if (*(puVar2 + 7) - 1U < 2) {
                    queue_work_on(0x20,_audio_notifier_register,puVar2 + 8);
                    uVar9 = wakeup_source_register(_segment.ehdr[1],"audio-gpr");
                    _segment.ehdr[0xe] = uVar9;
                    _dev_info(arg1,"%s: gpr-lite probe success\n","gpr_probe");
                    uVar6 = 0;
                }
                else {
                    _dev_err(arg1,"%s: invalid dest_domain_id %s\n","gpr_probe");
                    uVar6 = 0xffffffea;
                }
            }
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_68) {
        return uVar6;
    }
    uVar9 = __stack_chk_fail();
    *extraout_x18 = sym.gpr_remove;
    wakeup_source_unregister(_segment.ehdr[0xe]);
    snd_event_client_deregister(uVar9);
    _dev_info(uVar9,"%s: deregistering via subsys_notif_register for domain_id(%d)","gpr_remove",*(_segment.ehdr + 7)
             );
    if (*(_segment.ehdr + 7) == 1) {
        iVar5 = audio_notifier_deregister("gpr_modem");
        if ((-1 < iVar5) ||
           (iVar5 = ___ratelimit(obj.gpr_subsys_notif_deregister._rs,"gpr_subsys_notif_deregister"), iVar5 == 0))
        goto code_r0x08001e70;
        pcVar10 = "gpr_modem";
    }
    else {
        if (((*(_segment.ehdr + 7) != 2) || (iVar5 = audio_notifier_deregister("gpr_adsp"), -1 < iVar5)) ||
           (iVar5 = ___ratelimit(obj.gpr_subsys_notif_deregister._rs,"gpr_subsys_notif_deregister"), iVar5 == 0))
        goto code_r0x08001e70;
        pcVar10 = "gpr_adsp";
    }
    _dev_err(_segment.ehdr[1],"%s: Audio notifier de-register failed for client %s\n","gpr_subsys_notif_deregister",
             pcVar10);
code_r0x08001e70:
    uVar6 = device_for_each_child(uVar9,0,sym.gpr_remove_device.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt);
    return uVar6;
}


// ===== sym.gpr_remove @ 0x08001dac (size 276) =====

void sym.gpr_remove(int64_t arg1)

{
    int iVar1;
    char *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    wakeup_source_unregister(*(_segment.ehdr + 0x70));
    snd_event_client_deregister(arg1);
    _dev_info(arg1,"%s: deregistering via subsys_notif_register for domain_id(%d)","gpr_remove",
              *(_segment.ehdr + 0x38));
    if (*(_segment.ehdr + 0x38) == 1) {
        iVar1 = audio_notifier_deregister("gpr_modem");
        if ((-1 < iVar1) ||
           (iVar1 = ___ratelimit(obj.gpr_subsys_notif_deregister._rs,"gpr_subsys_notif_deregister"), iVar1 == 0))
        goto code_r0x08001e70;
        pcVar2 = "gpr_modem";
    }
    else {
        if (((*(_segment.ehdr + 0x38) != 2) || (iVar1 = audio_notifier_deregister("gpr_adsp"), -1 < iVar1)) ||
           (iVar1 = ___ratelimit(obj.gpr_subsys_notif_deregister._rs,"gpr_subsys_notif_deregister"), iVar1 == 0))
        goto code_r0x08001e70;
        pcVar2 = "gpr_adsp";
    }
    _dev_err(*(_segment.ehdr + 8),"%s: Audio notifier de-register failed for client %s\n",
             "gpr_subsys_notif_deregister",pcVar2);
code_r0x08001e70:
    device_for_each_child(arg1,0,sym.gpr_remove_device.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt);
    return;
}


// ===== sym.gpr_callback @ 0x08001ec0 (size 596) =====

ulong sym.gpr_callback(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    ushort uVar4;
    int iVar5;
    ulong uVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong *in_x18;
    code *pcVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar10 = *(arg1 + 0x98);
    if (arg3 < 0x19) {
        iVar5 = ___ratelimit(obj.gpr_callback._rs,"gpr_callback");
        if (iVar5 != 0) {
            _dev_err(*(iVar10 + 8),"GPR: Improper gpr pkt received:%p %d\n",arg2,arg3);
        }
    }
    else {
        uVar3 = *arg2;
        uVar2 = uVar3 >> 2 & 0x3c;
        if (uVar2 < 0x18) {
            iVar5 = ___ratelimit(obj.gpr_callback._rs.36,"gpr_callback");
            if (iVar5 != 0) {
                _dev_err(*(iVar10 + 8),"GPR: Wrong hdr size:%d\n",uVar2);
            }
        }
        else if (((uVar3 >> 0xb & 0x1fff) < 3) || (arg3 != (uVar3 >> 8 & 0xffff))) {
            iVar5 = ___ratelimit(obj.gpr_callback._rs.38,"gpr_callback");
            if (iVar5 != 0) {
                _dev_err(*(iVar10 + 8),"GPR: Wrong packet size\n");
            }
        }
        else {
            if (*(arg2 + 0x14) == 0x3001000) {
                _dev_err(*(iVar10 + 8),"%s: Acquire wakelock in case of module event with timeout %d","gpr_callback",
                         200);
                pm_wakeup_ws_event(*(_segment.ehdr + 0x70),200,1);
            }
            iVar1 = iVar10 + 0x18;
            uVar4 = *(arg2 + 0xc);
            uVar6 = _raw_spin_lock_irqsave(iVar1);
            iVar7 = idr_find(iVar10 + 0x20,uVar4);
            if (((iVar7 == 0) || (iVar8 = *(iVar7 + 0x88), iVar8 == 0)) &&
               ((iVar7 = idr_find(iVar10 + 0x20,0x17), iVar7 == 0 || (iVar8 = *(iVar7 + 0x88), iVar8 == 0)))) {
                _raw_spin_unlock_irqrestore(iVar1,uVar6);
            }
            else {
                _raw_spin_unlock_irqrestore(iVar1,uVar6);
                if (iVar8 != 0x18) {
                    pcVar9 = *(iVar8 + -8);
                    __cfi_slowpath_diag(0xf56844a47c5a9865,pcVar9,0x80005e0);
                    (*pcVar9)(iVar7,arg2);
                    return 0;
                }
            }
            iVar5 = ___ratelimit(obj.gpr_callback._rs.41,"gpr_callback");
            if (iVar5 != 0) {
                _dev_err(*(iVar10 + 8),"GPR: service is not registered\n");
            }
            if (*(arg2 + 0x14) == 0x3001000) {
                __pm_relax(*(_segment.ehdr + 0x70));
            }
        }
    }
    return 0xffffffea;
}


// ===== sym.gpr_notifier_register @ 0x08002114 (size 308) =====

void sym.gpr_notifier_register(void)

{
    int iVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(_segment.ehdr + 0x38) == 1) {
        iVar1 = audio_notifier_register
                          ("gpr_modem",1,reloc.gpr_notifier_service_cb.fce2f1814c8a6c60f53ee2b854cb092a.cfi_jt);
        if ((-1 < iVar1) || (iVar2 = ___ratelimit(obj.q6,"gpr_subsys_notif_register"), iVar2 == 0))
        goto code_r0x080021d0;
        uVar3 = 1;
    }
    else {
        if (((*(_segment.ehdr + 0x38) != 2) ||
            (iVar1 = audio_notifier_register("gpr_adsp",0,obj.adsp_service_nb), -1 < iVar1)) ||
           (iVar2 = ___ratelimit(obj.q6,"gpr_subsys_notif_register"), iVar2 == 0)) goto code_r0x080021d0;
        uVar3 = 0;
    }
    _dev_err(*(_segment.ehdr + 8),"%s: Audio notifier register failed for domain %d ret = %d\n",
             "gpr_subsys_notif_register",uVar3,iVar1);
code_r0x080021d0:
    iVar1 = ___ratelimit(obj.gpr_notifier_register._rs,"gpr_notifier_register");
    if (iVar1 != 0) {
        _dev_info(*(_segment.ehdr + 8),"%s: registered via subsys_notif_register for domain id(%d)",
                  "gpr_notifier_register",*(_segment.ehdr + 0x38));
    }
    return;
}


// ===== sym.gpr_ssr_disable @ 0x08002248 (size 20) =====

void sym.gpr_ssr_disable(int64_t arg1)

{
    _segment.ehdr = 0;
    return;
}


// ===== sym.gpr_dev_release @ 0x0800225c (size 36) =====

void sym.gpr_dev_release(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree();
    return;
}


// ===== sym.gpr_notifier_service_cb @ 0x08002280 (size 412) =====

ulong sym.gpr_notifier_service_cb(ulong noname_0,uint32_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        iVar3 = ___ratelimit(obj.gpr_notifier_service_cb._rs,"gpr_notifier_service_cb");
        if (iVar3 != 0) {
            _dev_err(*(CONCAT44(*0x8000004,_segment.ehdr) + 8),"%s: Callback data is NULL!\n",
                     "gpr_notifier_service_cb");
        }
    }
    else if (arg1 == 1) {
        if (*(arg2 + 4) != 1) {
            iVar3 = ___ratelimit(obj.gpr_adsp_up._rs,"gpr_adsp_up");
            if (iVar3 != 0) {
                _dev_info(*(CONCAT44(*0x8000004,_segment.ehdr) + 8),"%s: Q6 is Up\n","gpr_adsp_up");
            }
            _segment.ehdr = 2;
            snd_event_notify(*(CONCAT44(*0x8000004,2) + 8),1);
        }
        _raw_spin_lock(CONCAT44(*0x8000004,_segment.ehdr) + 0x10);
        iVar2 = CONCAT44(*0x8000004,_segment.ehdr);
        *(iVar2 + 0x14) = 0;
        _raw_spin_unlock(iVar2 + 0x10);
    }
    else if (arg1 == 0) {
        _raw_spin_lock(CONCAT44(*0x8000004,_segment.ehdr) + 0x10);
        cVar1 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x14);
        _raw_spin_unlock(CONCAT44(*0x8000004,_segment.ehdr) + 0x10);
        if (cVar1 == '\0') {
            if (*(arg2 + 4) == 1) {
                _segment.ehdr = 0;
            }
            else {
                iVar3 = ___ratelimit(obj.gpr_adsp_down._rs,"gpr_adsp_down");
                if (iVar3 != 0) {
                    _dev_info(*(CONCAT44(*0x8000004,_segment.ehdr) + 8),"%s: Q6 is Down\n","gpr_adsp_down");
                }
                _segment.ehdr = 0;
                snd_event_notify(*((*0x8000004 << 0x20) + 8),0);
            }
        }
    }
    return 1;
}


// ===== sym.gpr_remove_device @ 0x0800241c (size 40) =====

ulong sym.gpr_remove_device(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    device_unregister();
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x08002444 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08002488

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
    //switch table (4 cases) at 0x8000600
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800249c);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08002530 (size 104) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = bus_register(obj.gprbus);
    if (iVar1 == 0) {
        iVar1 = __register_rpmsg_driver(obj.gpr_driver,obj.__this_module);
    }
    else {
        bus_unregister(obj.gprbus);
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x08002598 (size 56) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bus_unregister(obj.gprbus);
    unregister_rpmsg_driver(obj.gpr_driver);
    return;
}

