// decompiled from qti_qmi_sensor_v2 by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 544) =====

//WARNING: Switch with 1 destination removed at 0x080022dc

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x13365def634cc965) {
        if (arg1 < -0xfae0556695233a4) {
            if (arg1 != -0x79e1ae77be533008) {
                if (arg1 == -0x550b9e52359ac614) {
                    pcVar2 = sym.qmi_ts_thresh_notify.350366888c9727d19137fadcb5bb7281.cfi_jt;
                }
                else {
                    if (arg1 != -0x3557318fb8d07b71) goto code_r0x0800229c;
                    pcVar2 = sym.qmi_sens_device_probe.350366888c9727d19137fadcb5bb7281.cfi_jt;
                }
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x0800229c;
            }
            pcVar2 = sym.qmi_sensor_set_trips.350366888c9727d19137fadcb5bb7281.cfi_jt;
        }
        else if (arg1 == -0xfae0556695233a4) {
            pcVar2 = sym.thermal_qmi_new_server.350366888c9727d19137fadcb5bb7281.cfi_jt;
        }
        else if (arg1 == -0xc1bd59c70f4d7ab) {
            pcVar2 = sym.qmi_sensor_tz_change_mode.350366888c9727d19137fadcb5bb7281.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x0800229c;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x77b71c1b418c981d) {
        if (arg1 == 0x13365def634cc965) {
            pcVar2 = sym.qmi_sensor_read.350366888c9727d19137fadcb5bb7281.cfi_jt;
        }
        else if (arg1 == 0x2b1394c7097a0a26) {
            pcVar2 = sym.qmi_ts_ind_cb_v02.cfi_jt;
        }
        else {
            if (arg1 != 0x53abe107a3d895d3) goto code_r0x0800229c;
            pcVar2 = sym.thermal_qmi_net_reset.350366888c9727d19137fadcb5bb7281.cfi_jt;
        }
    }
    else if (arg1 == 0x77b71c1b418c981d) {
        pcVar2 = sym.thermal_qmi_del_server.350366888c9727d19137fadcb5bb7281.cfi_jt;
    }
    else if (arg1 == 0x7d57972cd3914fb1) {
        pcVar2 = sym.qmi_sensor_pm_notify.350366888c9727d19137fadcb5bb7281.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800229c;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x0800229c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80022f0);
    (*pcVar1)();
}


// ===== sym.qmi_sensor_tz_change_mode.350366888c9727d19137fadcb5bb7281.cfi_jt @ 0x08002228 (size 8) =====

ulong sym.qmi_sensor_tz_change_mode.350366888c9727d19137fadcb5bb7281.cfi_jt(int64_t param_1,int param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x48);
    if (iVar1 != 0) {
        piVar2 = *(iVar1 + 0x458);
        *(iVar1 + 0x424) = 0x8000000100000000;
        *(iVar1 + 0x418) = 0xfffbd1b0;
        *(iVar1 + 0x42c) = 0x7fffffff;
        for (; iVar1 + 0x458 != piVar2; piVar2 = *piVar2) {
            *(piVar2 + -0x8c) = 0;
            if (param_2 == 0) {
                piVar2[-0xf] = 0xffffffffffffffff;
                *(piVar2[-0x13] + 0x3c0) = 0;
                thermal_cdev_update(piVar2[-0x13]);
            }
        }
    }
    return 0;
}


// ===== sym.thermal_qmi_del_server.350366888c9727d19137fadcb5bb7281.cfi_jt @ 0x08002230 (size 8) =====

void sym.thermal_qmi_del_server.350366888c9727d19137fadcb5bb7281.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    
    for (piVar1 = *(param_1 + 0x178); piVar1 != param_1 + 0x178; piVar1 = *piVar1) {
        *(piVar1 + -1) = 0;
    }
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08002238 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qmi_sens_device_probe.350366888c9727d19137fadcb5bb7281.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08002240 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qmi_sens_device_probe.350366888c9727d19137fadcb5bb7281.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.qmi_sensor_read.350366888c9727d19137fadcb5bb7281.cfi_jt @ 0x08002248 (size 8) =====

int sym.qmi_sensor_read.350366888c9727d19137fadcb5bb7281.cfi_jt(int64_t param_1,uint *param_2,int param_3)

{
    uint64_t uVar1;
    int iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    uchar auVar4 [12];
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    if ((*(param_1 + 0x30) != '\0') && (_obj.in_suspend == 0)) {
        iVar3 = *(param_1 + 0x60);
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_48 = 0;
        uStack_40 = 0;
        strscpy(&uStack_70,param_1 + 8,0x20);
        param_3 = 0x3d;
        uVar1 = uStack_40 >> 8;
        uStack_50._0_2_ = CONCAT11(1,uStack_50);
        uStack_40 = CONCAT71(uVar1 & 0xffffff,1);
        iVar2 = sym.qmi_ts_send_request(iVar3,0x32,0x3d,0x80001e8);
        if (iVar2 < 0) {
            param_3 = 0x80015db;
            _printk(0x80015b2,"qti_qmi_sensor_v2","qmi_ts_request",param_1 + 8,iVar2);
        }
    }
    *param_2 = *(param_1 + 0x50);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_38) {
        auVar4 = __stack_chk_fail();
        iVar3 = auVar4._0_8_;
        *extraout_x18 = 0x8003158;
        if ((*(iVar3 + 0x54) != param_3) || (*(iVar3 + 0x58) != auVar4._8_4_)) {
            *(iVar3 + 0x54) = param_3;
            *(iVar3 + 0x58) = auVar4._8_4_;
            if (*(iVar3 + 0x30) != '\0') {
                iVar2 = sym.qmi_ts_request(iVar3);
                if (-1 < iVar2) {
                    return iVar2;
                }
                _printk(0x80016bc,"qti_qmi_sensor_v2","qmi_sensor_set_trips",iVar3 + 8,*(iVar3 + 0x54),
                        *(iVar3 + 0x58),iVar2);
                return iVar2;
            }
        }
        return 0;
    }
    return 0;
}


// ===== sym.qmi_ts_ind_cb_v02.cfi_jt @ 0x08002250 (size 8) =====

void sym.qmi_ts_ind_cb_v02.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3,int64_t param_4)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    ulong uVar4;
    ulong *in_x18;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_3 == 0) {
        uVar4 = 0x8001462;
    }
    else {
        if ((*(param_4 + 0x24) == 0) && (*(param_4 + 0x30) == '\0')) {
            bVar2 = true;
            cVar1 = *(param_4 + 0x28);
        }
        else {
            bVar2 = false;
            cVar1 = *(param_4 + 0x28);
        }
        if (cVar1 != '\0') {
            piVar5 = *(param_1 + 0x178);
            while( true ) {
                if (param_1 + 0x178 == piVar5) {
                    return;
                }
                iVar3 = strncasecmp(piVar5 + -6,param_4,0x20);
                if (iVar3 == 0) break;
                piVar5 = *piVar5;
            }
            iVar3 = *(param_4 + 0x2c);
            *(piVar5 + 3) = iVar3;
            if (bVar2 || piVar5[2] == 0) {
                return;
            }
            if ((iVar3 < *(piVar5 + 0x1c)) && (*(piVar5 + 4) < iVar3)) {
                return;
            }
            queue_work_on(0x20,___ubsan_handle_cfi_check_fail_abort,piVar5 + 7);
            return;
        }
        uVar4 = 0x800147f;
    }
    _printk(uVar4,"qti_qmi_sensor_v2","qmi_ts_ind_cb_v02");
    return;
}


// ===== sym.qmi_ts_thresh_notify.350366888c9727d19137fadcb5bb7281.cfi_jt @ 0x08002258 (size 8) =====

void sym.qmi_ts_thresh_notify.350366888c9727d19137fadcb5bb7281.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    thermal_zone_device_update(*(param_1 + -0x28),2);
    return;
}


// ===== sym.qmi_ts_svc_arrive.350366888c9727d19137fadcb5bb7281.cfi_jt @ 0x08002260 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08002a94)
//WARNING: Removing unreachable block (ram,0x08002aa0)
//WARNING: Removing unreachable block (ram,0x08002ac8)
//WARNING: Removing unreachable block (ram,0x08002ce4)
//WARNING: Removing unreachable block (ram,0x08002b0c)
//WARNING: Removing unreachable block (ram,0x08002b14)
//WARNING: Removing unreachable block (ram,0x08002b38)
//WARNING: Removing unreachable block (ram,0x08002b44)
//WARNING: Removing unreachable block (ram,0x08002d54)
//WARNING: Removing unreachable block (ram,0x08002b4c)
//WARNING: Removing unreachable block (ram,0x08002b54)
//WARNING: Removing unreachable block (ram,0x08002b7c)
//WARNING: Removing unreachable block (ram,0x08002c34)
//WARNING: Removing unreachable block (ram,0x08002c60)
//WARNING: Removing unreachable block (ram,0x08002be8)
//WARNING: Removing unreachable block (ram,0x08002b1c)
//WARNING: Removing unreachable block (ram,0x08002c64)
//WARNING: Removing unreachable block (ram,0x08002bf0)
//WARNING: Removing unreachable block (ram,0x08002c20)
//WARNING: Removing unreachable block (ram,0x08002c94)
//WARNING: Removing unreachable block (ram,0x08002c2c)
//WARNING: Removing unreachable block (ram,0x08002b6c)
//WARNING: Removing unreachable block (ram,0x08002b78)
//WARNING: Removing unreachable block (ram,0x08002b28)
//WARNING: Removing unreachable block (ram,0x08002ab8)

void sym.qmi_ts_svc_arrive.350366888c9727d19137fadcb5bb7281.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iVar3 = *(iVar2 + 0x5e0);
    iVar2 = kmem_cache_alloc_trace(_system_highpri_wq,0xdc0,0xc6c);
    if (iVar2 != 0) {
        iVar1 = sym.qmi_ts_send_request(param_1 + -400,0x30,0,0x8000068);
        if (iVar1 < 0) {
            _printk(0x8001584,"qti_qmi_sensor_v2","verify_sensor_and_register",*(param_1 + -0x18),iVar1);
        }
        kfree(iVar2);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iVar3) {
        return;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.qmi_ts_thresh_notify;
    thermal_zone_device_update(*(iVar2 + -0x28),2);
    return;
}


// ===== sym.qmi_sensor_set_trips.350366888c9727d19137fadcb5bb7281.cfi_jt @ 0x08002268 (size 8) =====

int sym.qmi_sensor_set_trips.350366888c9727d19137fadcb5bb7281.cfi_jt(int64_t param_1,int param_2,int param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(param_1 + 0x54) != param_3) || (*(param_1 + 0x58) != param_2)) {
        *(param_1 + 0x54) = param_3;
        *(param_1 + 0x58) = param_2;
        if (*(param_1 + 0x30) != '\0') {
            iVar1 = sym.qmi_ts_request(param_1);
            if (-1 < iVar1) {
                return iVar1;
            }
            _printk(0x80016bc,"qti_qmi_sensor_v2","qmi_sensor_set_trips",param_1 + 8,*(param_1 + 0x54),
                    *(param_1 + 0x58),iVar1);
            return iVar1;
        }
    }
    return 0;
}


// ===== sym.qmi_sens_device_probe.350366888c9727d19137fadcb5bb7281.cfi_jt @ 0x08002270 (size 8) =====

int sym.qmi_sens_device_probe.350366888c9727d19137fadcb5bb7281.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    int64_t iVar5;
    uchar auVar6 [16];
    int iVar7;
    int iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t arg1;
    int64_t *piVar11;
    uint64_t uVar12;
    int64_t iVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar14;
    ulong uVar15;
    int64_t iVar16;
    int iVar17;
    code *pcVar18;
    ulong unaff_x30;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iVar13 = param_1 + 0x10;
    iStack_68 = *(iVar9 + 0x5e0);
    uVar15 = *(param_1 + 0x300);
    iVar9 = of_get_next_available_child(uVar15,0);
    if (iVar9 == 0) {
code_r0x080027b4:
        arg1 = _dev_err(iVar13,"No child node to process\n");
        iVar7 = -0xe;
    }
    else {
        uVar1 = 0;
        do {
            uVar14 = uVar1;
            uVar1 = uVar14 + 1;
            iVar9 = of_get_next_available_child(uVar15,iVar9);
        } while (iVar9 != 0);
        if (uVar1 == 0) goto code_r0x080027b4;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar1;
        if ((SUB168(auVar6 * ZEXT816(0x1c0),8) == 0) &&
           (uVar10 = devm_kmalloc(iVar13,uVar1 * 0x1c0,0xdc0), uVar10 != 0)) {
            arg1 = of_get_next_available_child(uVar15,0);
            if ((arg1 != 0) && (uVar14 < 0x7fffffff)) {
                iVar9 = 0;
                do {
                    piVar4 = uVar10 + iVar9 * 0x1c0;
                    iVar7 = of_property_read_variable_u32_array(arg1,"qcom,instance-id",piVar4 + 0x2f,1,0);
                    if (iVar7 < 0) {
                        arg1 = _dev_err(iVar13,"error reading qcom,insance-id. ret:%d\n",iVar7);
                        goto code_r0x080027c8;
                    }
                    iVar16 = uVar10 + iVar9 * 0x1c0;
                    *piVar4 = iVar13;
                    __mutex_init(iVar16 + 0x148,"&ts[idx].mutex",obj.of_get_qmi_ts_platform_data.__key);
                    piVar2 = iVar16 + 0x180;
                    *(iVar16 + 0x180) = piVar2;
                    *(iVar16 + 0x188) = piVar2;
                    *(iVar16 + 400) = 0xfffffffe0;
                    *(iVar16 + 0x198) = iVar16 + 0x198;
                    *(iVar16 + 0x1a0) = iVar16 + 0x198;
                    *(iVar16 + 0x1a8) = sym.qmi_ts_svc_arrive.350366888c9727d19137fadcb5bb7281.cfi_jt;
                    iVar7 = of_property_read_string_helper(arg1,"qcom,qmi-sensor-names",0,0,0);
                    if (iVar7 < 1) {
                        arg1 = _dev_err(iVar13,"Invalid or no sensor. err:%d\n",iVar7);
code_r0x080027ac:
                        iVar7 = -0x16;
                        goto code_r0x080027c8;
                    }
                    iVar17 = 0;
                    do {
                        uStack_70 = 0;
                        piVar11 = devm_kmalloc(iVar13,0xa0,0xdc0);
                        if (piVar11 == NULL) goto code_r0x08002774;
                        of_property_read_string_helper(arg1,"qcom,qmi-sensor-names",&uStack_70,1,iVar17);
                        piVar3 = piVar11 + 1;
                        strscpy(piVar3,uStack_70,0x28);
                        iVar16 = 0;
                        pcVar18 = obj.sensor_clients;
                        while (iVar8 = strcmp(pcVar18,piVar3), iVar8 != 0) {
                            iVar16 = iVar16 + 1;
                            pcVar18 = pcVar18 + 0x28;
                            if (iVar16 == 0x57) {
                                arg1 = _dev_err(iVar13,"Unknown sensor:%s\n",piVar3);
                                goto code_r0x080027ac;
                            }
                        }
                        *(piVar11 + 0xd) = iVar16;
                        piVar3 = piVar11 + 7;
                        piVar11[0xc] = piVar4;
                        *(piVar11 + 0xb) = 0x80000001;
                        *piVar11 = iVar13;
                        piVar11[10] = 0x7fffffff00000000;
                        piVar11[0xe] = 0xfffffffe0;
                        piVar11[0xf] = piVar11 + 0xf;
                        piVar11[0x10] = piVar11 + 0xf;
                        iVar16 = *piVar2;
                        piVar11[0x11] = sym.qmi_ts_thresh_notify.350366888c9727d19137fadcb5bb7281.cfi_jt;
                        uVar12 = __list_add_valid(piVar3,piVar2,iVar16);
                        if ((uVar12 & 1) != 0) {
                            *(iVar16 + 8) = piVar3;
                            piVar11[7] = iVar16;
                            piVar11[8] = piVar2;
                            *piVar2 = piVar3;
                        }
                        iVar17 = iVar17 + 1;
                    } while (iVar17 != iVar7);
                    arg1 = of_get_next_available_child(uVar15,arg1);
                } while ((arg1 != 0) && (iVar9 = iVar9 + 1, iVar9 < uVar1));
            }
            *0x8000004 = uVar10 >> 0x20;
            _segment.ehdr = CONCAT44(*0x8000004,uVar1);
            if (0x7ffffffe < uVar14) {
code_r0x0800277c:
                _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
                register_pm_notifier(reloc.qmi_sensor_pm_notify.350366888c9727d19137fadcb5bb7281.cfi_jt);
                iVar7 = 0;
                goto code_r0x080027cc;
            }
            if (uVar10 + 0x180 != *(uVar10 + 0x180)) {
                iVar16 = 0x340;
                iVar9 = 1;
                do {
                    iVar5 = uVar10 + iVar16;
                    iVar7 = qmi_handle_init(iVar5 + -0x338,0xc6b,
                                            reloc.thermal_qmi_new_server.350366888c9727d19137fadcb5bb7281.cfi_jt,
                                            obj.handlers);
                    if (iVar7 < 0) {
                        arg1 = _dev_err(iVar13,"QMI[0x%x] handle init failed. err:%d\n",*(iVar5 + -0x1c8),iVar7);
                        iVar7 = -0x205;
                        _segment.ehdr = CONCAT44(*0x8000004,iVar9 + -1);
                        goto code_r0x080027c8;
                    }
                    arg1 = qmi_add_lookup(iVar5 + -0x338,0x17,2,*(iVar5 + -0x1c8));
                    if (arg1 < 0) {
                        arg1 = _dev_err(iVar13,"QMI register failed for 0x%x, ret:%d\n",*(uVar10 + iVar16 + -0x1c8),
                                        arg1 & 0xffffffff);
                        iVar7 = -0x205;
                        goto code_r0x080027c8;
                    }
                    if (_segment.ehdr <= iVar9) goto code_r0x0800277c;
                    iVar9 = iVar9 + 1;
                    piVar4 = _segment.ehdr + iVar16;
                    iVar16 = iVar16 + 0x1c0;
                    uVar10 = _segment.ehdr;
                } while (_segment.ehdr + iVar16 + -0x1c0 != *piVar4);
            }
            iVar7 = -0x13;
        }
        else {
code_r0x08002774:
            arg1 = 0;
            iVar7 = -0xc;
        }
    }
code_r0x080027c8:
    sym.qmi_ts_cleanup(arg1);
code_r0x080027cc:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_68) {
        return iVar7;
    }
    iVar13 = __stack_chk_fail();
    *extraout_x18 = 0x8002898;
    sym.qmi_ts_cleanup(iVar13);
    unregister_pm_notifier(reloc.qmi_sensor_pm_notify.350366888c9727d19137fadcb5bb7281.cfi_jt);
    return 0;
}


// ===== sym.qmi_sens_device_remove.350366888c9727d19137fadcb5bb7281.cfi_jt @ 0x08002278 (size 8) =====

ulong sym.qmi_sens_device_remove.350366888c9727d19137fadcb5bb7281.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qmi_ts_cleanup(param_1);
    unregister_pm_notifier(reloc.qmi_sensor_pm_notify.350366888c9727d19137fadcb5bb7281.cfi_jt);
    return 0;
}


// ===== sym.thermal_qmi_net_reset.350366888c9727d19137fadcb5bb7281.cfi_jt @ 0x08002280 (size 8) =====

uint64_t sym.thermal_qmi_net_reset.350366888c9727d19137fadcb5bb7281.cfi_jt(uint64_t param_1)

{
    int64_t iVar1;
    uint64_t uVar2;
    int iVar3;
    int64_t extraout_x1;
    ulong *in_x18;
    int64_t *piVar4;
    int64_t iVar5;
    ulong unaff_x30;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iVar1 = param_1 + 0x178;
    iStack_68 = *(iVar5 + 0x5e0);
    for (piVar4 = *(param_1 + 0x178); piVar4 != iVar1; piVar4 = *piVar4) {
        if (*(piVar4 + -1) != '\0') {
            iVar5 = piVar4[5];
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_88 = 0;
            uStack_80 = 0;
            uStack_98 = 0;
            uStack_90 = 0;
            uStack_a0 = 0;
            strscpy(&uStack_a0,piVar4 + -6,0x20);
            uVar2 = uStack_70 >> 8;
            uStack_80._0_2_ = CONCAT11(1,uStack_80);
            uStack_70 = CONCAT71(uVar2 & 0xffffff,1);
            iVar3 = sym.qmi_ts_send_request(iVar5,0x32,0x3d,0x80001e8);
            if (iVar3 < 0) {
                _printk(0x80015b2,"qti_qmi_sensor_v2","qmi_ts_request",piVar4 + -6,iVar3);
            }
            param_1 = sym.qmi_ts_request(piVar4 + -7);
            if (param_1 != 0) {
                param_1 = _printk(0x800142c,"qti_qmi_sensor_v2","thermal_qmi_net_reset",piVar4[2] + 4,
                                  *(piVar4 + 0x1c),*(piVar4 + 4),param_1 & 0xffffffff);
            }
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return param_1;
    }
    __stack_chk_fail();
    if (extraout_x1 - 1U < 6) {
        _segment.ehdr = *((extraout_x1 - 1U) * 4 + 0x8001928);
    }
    return 0;
}


// ===== sym.qmi_sensor_pm_notify.350366888c9727d19137fadcb5bb7281.cfi_jt @ 0x08002288 (size 8) =====

ulong sym.qmi_sensor_pm_notify.350366888c9727d19137fadcb5bb7281.cfi_jt(ulong param_1,int64_t param_2)

{
    if (param_2 - 1U < 6) {
        _segment.ehdr = *((param_2 - 1U) * 4 + 0x8001928);
    }
    return 0;
}


// ===== sym.thermal_qmi_new_server.350366888c9727d19137fadcb5bb7281.cfi_jt @ 0x08002290 (size 8) =====

int64_t sym.thermal_qmi_new_server.350366888c9727d19137fadcb5bb7281.cfi_jt(ulong *param_1,int64_t param_2)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    ulong unaff_x30;
    uint uStack_38;
    uint uStack_34;
    uint uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_34 = *(param_2 + 0xc);
    uStack_30 = *(param_2 + 0x10);
    uStack_38 = 0x2a;
    mutex_lock(param_1 + 0x28);
    kernel_connect(*param_1,&uStack_38,0xc,0);
    mutex_unlock(param_1 + 0x28);
    queue_work_on(0x20,___ubsan_handle_cfi_check_fail_abort,param_1 + 0x31);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_28) {
        iVar1 = __stack_chk_fail();
        for (piVar2 = *(iVar1 + 0x178); piVar2 != iVar1 + 0x178; piVar2 = *piVar2) {
            *(piVar2 + -1) = 0;
        }
        return iVar1;
    }
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x08002298 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080022dc

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
    //switch table (4 cases) at 0x8001380
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80022f0);
    (*pcVar1)();
}


// ===== sym.qmi_ts_ind_cb_v02 @ 0x080022f0 (size 268) =====

void sym.qmi_ts_ind_cb_v02(int64_t arg1,uchar noname_1 [16],uchar noname_2 [16],int64_t arg2)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    ulong uVar4;
    int64_t in_x2;
    ulong *in_x18;
    int64_t *piVar5;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    
    *in_x18 = unaff_x30;
    if (in_x2 == 0) {
        uVar4 = 0x8001462;
    }
    else {
        if ((*(arg2 + 0x24) == 0) && (*(arg2 + 0x30) == '\0')) {
            bVar2 = true;
            cVar1 = *(arg2 + 0x28);
        }
        else {
            bVar2 = false;
            cVar1 = *(arg2 + 0x28);
        }
        if (cVar1 != '\0') {
            piVar5 = *(arg1 + 0x178);
            while( true ) {
                if (arg1 + 0x178 == piVar5) {
                    return;
                }
                iVar3 = strncasecmp(noname_1,piVar5 + -6,arg2,0x20);
                if (iVar3 == 0) break;
                piVar5 = *piVar5;
                noname_1 = extraout_q0;
            }
            iVar3 = *(arg2 + 0x2c);
            *(piVar5 + 3) = iVar3;
            if (bVar2 || piVar5[2] == 0) {
                return;
            }
            if ((iVar3 < *(piVar5 + 0x1c)) && (*(piVar5 + 4) < iVar3)) {
                return;
            }
            queue_work_on(0x20,___ubsan_handle_cfi_check_fail_abort,piVar5 + 7);
            return;
        }
        uVar4 = 0x800147f;
    }
    _printk(uVar4,"qti_qmi_sensor_v2","qmi_ts_ind_cb_v02");
    return;
}


// ===== sym.qmi_sens_device_probe @ 0x080023fc (size 1188) =====

int sym.qmi_sens_device_probe(int64_t arg1)

{
    uint32_t uVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    int64_t iVar5;
    uchar auVar6 [16];
    int iVar7;
    int iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t arg1_00;
    int64_t *piVar11;
    uint64_t uVar12;
    int64_t iVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar14;
    ulong uVar15;
    int64_t iVar16;
    int iVar17;
    code *pcVar18;
    ulong unaff_x30;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iVar13 = arg1 + 0x10;
    iStack_68 = *(iVar9 + 0x5e0);
    uVar15 = *(arg1 + 0x300);
    iVar9 = of_get_next_available_child(uVar15,0);
    if (iVar9 == 0) {
code_r0x080027b4:
        arg1_00 = _dev_err(iVar13,"No child node to process\n");
        iVar7 = -0xe;
    }
    else {
        uVar1 = 0;
        do {
            uVar14 = uVar1;
            uVar1 = uVar14 + 1;
            iVar9 = of_get_next_available_child(uVar15,iVar9);
        } while (iVar9 != 0);
        if (uVar1 == 0) goto code_r0x080027b4;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar1;
        if ((SUB168(auVar6 * ZEXT816(0x1c0),8) == 0) &&
           (uVar10 = devm_kmalloc(iVar13,uVar1 * 0x1c0,0xdc0), uVar10 != 0)) {
            arg1_00 = of_get_next_available_child(uVar15,0);
            if ((arg1_00 != 0) && (uVar14 < 0x7fffffff)) {
                iVar9 = 0;
                do {
                    piVar4 = uVar10 + iVar9 * 0x1c0;
                    iVar7 = of_property_read_variable_u32_array(arg1_00,"qcom,instance-id",piVar4 + 0x2f,1,0);
                    if (iVar7 < 0) {
                        arg1_00 = _dev_err(iVar13,"error reading qcom,insance-id. ret:%d\n",iVar7);
                        goto code_r0x080027c8;
                    }
                    iVar16 = uVar10 + iVar9 * 0x1c0;
                    *piVar4 = iVar13;
                    __mutex_init(iVar16 + 0x148,"&ts[idx].mutex",obj.of_get_qmi_ts_platform_data.__key);
                    piVar2 = iVar16 + 0x180;
                    *(iVar16 + 0x180) = piVar2;
                    *(iVar16 + 0x188) = piVar2;
                    *(iVar16 + 400) = 0xfffffffe0;
                    *(iVar16 + 0x198) = iVar16 + 0x198;
                    *(iVar16 + 0x1a0) = iVar16 + 0x198;
                    *(iVar16 + 0x1a8) = sym.qmi_ts_svc_arrive.350366888c9727d19137fadcb5bb7281.cfi_jt;
                    iVar7 = of_property_read_string_helper(arg1_00,"qcom,qmi-sensor-names",0,0,0);
                    if (iVar7 < 1) {
                        arg1_00 = _dev_err(iVar13,"Invalid or no sensor. err:%d\n",iVar7);
code_r0x080027ac:
                        iVar7 = -0x16;
                        goto code_r0x080027c8;
                    }
                    iVar17 = 0;
                    do {
                        uStack_70 = 0;
                        piVar11 = devm_kmalloc(iVar13,0xa0,0xdc0);
                        if (piVar11 == NULL) goto code_r0x08002774;
                        of_property_read_string_helper
                                  (arg1_00,"qcom,qmi-sensor-names",&stack0xffffffffffffff90,1,iVar17);
                        piVar3 = piVar11 + 1;
                        strscpy(piVar3,uStack_70,0x28);
                        iVar16 = 0;
                        pcVar18 = obj.sensor_clients;
                        while (iVar8 = strcmp(pcVar18,piVar3), iVar8 != 0) {
                            iVar16 = iVar16 + 1;
                            pcVar18 = pcVar18 + 0x28;
                            if (iVar16 == 0x57) {
                                arg1_00 = _dev_err(iVar13,"Unknown sensor:%s\n",piVar3);
                                goto code_r0x080027ac;
                            }
                        }
                        *(piVar11 + 0xd) = iVar16;
                        piVar3 = piVar11 + 7;
                        piVar11[0xc] = piVar4;
                        *(piVar11 + 0xb) = 0x80000001;
                        *piVar11 = iVar13;
                        piVar11[10] = 0x7fffffff00000000;
                        piVar11[0xe] = 0xfffffffe0;
                        piVar11[0xf] = piVar11 + 0xf;
                        piVar11[0x10] = piVar11 + 0xf;
                        iVar16 = *piVar2;
                        piVar11[0x11] = sym.qmi_ts_thresh_notify.350366888c9727d19137fadcb5bb7281.cfi_jt;
                        uVar12 = __list_add_valid(piVar3,piVar2,iVar16);
                        if ((uVar12 & 1) != 0) {
                            *(iVar16 + 8) = piVar3;
                            piVar11[7] = iVar16;
                            piVar11[8] = piVar2;
                            *piVar2 = piVar3;
                        }
                        iVar17 = iVar17 + 1;
                    } while (iVar17 != iVar7);
                    arg1_00 = of_get_next_available_child(uVar15,arg1_00);
                } while ((arg1_00 != 0) && (iVar9 = iVar9 + 1, iVar9 < uVar1));
            }
            *0x8000004 = uVar10 >> 0x20;
            _segment.ehdr = CONCAT44(*0x8000004,uVar1);
            if (0x7ffffffe < uVar14) {
code_r0x0800277c:
                _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
                register_pm_notifier(reloc.qmi_sensor_pm_notify.350366888c9727d19137fadcb5bb7281.cfi_jt);
                iVar7 = 0;
                goto code_r0x080027cc;
            }
            if (uVar10 + 0x180 != *(uVar10 + 0x180)) {
                iVar16 = 0x340;
                iVar9 = 1;
                do {
                    iVar5 = uVar10 + iVar16;
                    iVar7 = qmi_handle_init(iVar5 + -0x338,0xc6b,
                                            reloc.thermal_qmi_new_server.350366888c9727d19137fadcb5bb7281.cfi_jt,
                                            obj.handlers);
                    if (iVar7 < 0) {
                        arg1_00 = _dev_err(iVar13,"QMI[0x%x] handle init failed. err:%d\n",*(iVar5 + -0x1c8),iVar7);
                        iVar7 = -0x205;
                        _segment.ehdr = CONCAT44(*0x8000004,iVar9 + -1);
                        goto code_r0x080027c8;
                    }
                    arg1_00 = qmi_add_lookup(iVar5 + -0x338,0x17,2,*(iVar5 + -0x1c8));
                    if (arg1_00 < 0) {
                        arg1_00 = _dev_err(iVar13,"QMI register failed for 0x%x, ret:%d\n",*(uVar10 + iVar16 + -0x1c8)
                                           ,arg1_00 & 0xffffffff);
                        iVar7 = -0x205;
                        goto code_r0x080027c8;
                    }
                    if (_segment.ehdr <= iVar9) goto code_r0x0800277c;
                    iVar9 = iVar9 + 1;
                    piVar4 = _segment.ehdr + iVar16;
                    iVar16 = iVar16 + 0x1c0;
                    uVar10 = _segment.ehdr;
                } while (_segment.ehdr + iVar16 + -0x1c0 != *piVar4);
            }
            iVar7 = -0x13;
        }
        else {
code_r0x08002774:
            arg1_00 = 0;
            iVar7 = -0xc;
        }
    }
code_r0x080027c8:
    sym.qmi_ts_cleanup(arg1_00);
code_r0x080027cc:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_68) {
        return iVar7;
    }
    iVar13 = __stack_chk_fail();
    *extraout_x18 = 0x8002898;
    sym.qmi_ts_cleanup(iVar13);
    unregister_pm_notifier(reloc.qmi_sensor_pm_notify.350366888c9727d19137fadcb5bb7281.cfi_jt);
    return 0;
}


// ===== sym.qmi_sens_device_remove @ 0x080028a0 (size 52) =====

ulong sym.qmi_sens_device_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qmi_ts_cleanup(arg1);
    unregister_pm_notifier(reloc.qmi_sensor_pm_notify.350366888c9727d19137fadcb5bb7281.cfi_jt);
    return 0;
}


// ===== sym.qmi_ts_cleanup @ 0x080028d4 (size 268) =====

int64_t sym.qmi_ts_cleanup(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t iVar6;
    int64_t iVar7;
    int64_t *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < _segment.ehdr) {
        iVar6 = 0;
        do {
            iVar3 = CONCAT44(*0x8000004,_segment.ehdr);
            iVar7 = iVar3 + iVar6 * 0x1c0;
            mutex_lock(iVar7 + 0x148);
            piVar4 = *(iVar7 + 0x180);
            while (iVar7 + 0x180 != piVar4) {
                *(piVar4 + -1) = 0;
                piVar8 = *piVar4;
                if (piVar4[2] != 0) {
                    thermal_zone_of_sensor_unregister(piVar4[-7]);
                    piVar4[2] = 0;
                }
                uVar5 = __list_del_entry_valid(piVar4);
                if ((uVar5 & 1) != 0) {
                    iVar1 = *piVar4;
                    piVar2 = piVar4[1];
                    *(iVar1 + 8) = piVar2;
                    *piVar2 = iVar1;
                }
                *piVar4 = -0x2152ffffffffff00;
                piVar4[1] = -0x2152fffffffffede;
                piVar4 = piVar8;
            }
            qmi_handle_release(iVar3 + iVar6 * 0x1c0 + 8);
            arg1 = mutex_unlock(iVar7 + 0x148);
            iVar6 = iVar6 + 1;
        } while (iVar6 < _segment.ehdr);
    }
    _segment.ehdr = 0;
    return arg1;
}


// ===== sym.qmi_ts_svc_arrive @ 0x080029e0 (size 892) =====

//WARNING: Removing unreachable block (ram,0x08002a94)
//WARNING: Removing unreachable block (ram,0x08002aa0)
//WARNING: Removing unreachable block (ram,0x08002ac8)
//WARNING: Removing unreachable block (ram,0x08002ce4)
//WARNING: Removing unreachable block (ram,0x08002b0c)
//WARNING: Removing unreachable block (ram,0x08002b14)
//WARNING: Removing unreachable block (ram,0x08002b38)
//WARNING: Removing unreachable block (ram,0x08002b44)
//WARNING: Removing unreachable block (ram,0x08002d54)
//WARNING: Removing unreachable block (ram,0x08002b4c)
//WARNING: Removing unreachable block (ram,0x08002b54)
//WARNING: Removing unreachable block (ram,0x08002b7c)
//WARNING: Removing unreachable block (ram,0x08002c34)
//WARNING: Removing unreachable block (ram,0x08002c60)
//WARNING: Removing unreachable block (ram,0x08002be8)
//WARNING: Removing unreachable block (ram,0x08002b1c)
//WARNING: Removing unreachable block (ram,0x08002c64)
//WARNING: Removing unreachable block (ram,0x08002bf0)
//WARNING: Removing unreachable block (ram,0x08002c20)
//WARNING: Removing unreachable block (ram,0x08002c94)
//WARNING: Removing unreachable block (ram,0x08002c2c)
//WARNING: Removing unreachable block (ram,0x08002b6c)
//WARNING: Removing unreachable block (ram,0x08002b78)
//WARNING: Removing unreachable block (ram,0x08002b28)
//WARNING: Removing unreachable block (ram,0x08002ab8)

void sym.qmi_ts_svc_arrive(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iVar3 = *(iVar2 + 0x5e0);
    iVar2 = kmem_cache_alloc_trace(_system_highpri_wq,0xdc0,0xc6c);
    if (iVar2 != 0) {
        iVar1 = sym.qmi_ts_send_request(arg1 + -400,0x30,0,0x8000068);
        if (iVar1 < 0) {
            _printk(0x8001584,"qti_qmi_sensor_v2","verify_sensor_and_register",*(arg1 + -0x18),iVar1);
        }
        kfree(iVar2);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iVar3) {
        return;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.qmi_ts_thresh_notify;
    thermal_zone_device_update(*(iVar2 + -0x28),2);
    return;
}


// ===== sym.qmi_ts_thresh_notify @ 0x08002d5c (size 44) =====

void sym.qmi_ts_thresh_notify(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    thermal_zone_device_update(*(arg1 + -0x28),2);
    return;
}


// ===== sym.qmi_ts_send_request @ 0x08002d88 (size 404) =====

uint64_t sym.qmi_ts_send_request(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    ulong uVar5;
    int64_t iVar6;
    int iVar7;
    uint16_t *in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t uVar8;
    int64_t iVar9;
    int64_t iVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    uchar auVar12 [12];
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    int64_t iStack_168;
    uchar **ppuStack_160;
    code *pcStack_158;
    int64_t iStack_148;
    uint64_t uStack_140;
    int64_t iStack_138;
    uint uStack_124;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    int64_t iStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    uint64_t uStack_d0;
    uint64_t uStack_c0;
    int64_t iStack_b8;
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
    iVar1 = sp_el0;
    iVar10 = arg1 + 0x148;
    iStack_68 = *(iVar1 + 0x5e0);
    uVar8 = arg2 & 0xffffffff;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b0 = 0;
    mutex_lock(iVar10);
    uVar2 = qmi_txn_init(arg1 + 8,&uStack_b0);
    if (uVar2 < 0) {
        uVar4 = uVar2;
        uVar5 = 0x8001616;
    }
    else {
        uVar4 = qmi_send_request(arg1 + 8,0,&uStack_b0,uVar8,arg3,arg4);
        if (uVar4 < 0) {
            _printk(0x8001763,"qti_qmi_sensor_v2","qmi_ts_send_request",uVar8,uVar4 & 0xffffffff);
            qmi_txn_cancel(&uStack_b0);
            goto code_r0x08002e58;
        }
        uVar2 = qmi_txn_wait(&uStack_b0,0x19);
        if (uVar2 < 0) {
            uVar4 = uVar2;
            uVar5 = 0x8001385;
        }
        else {
            uVar4 = *in_x7;
            if (*in_x7 == 0) goto code_r0x08002e58;
            uVar5 = 0x80013cc;
        }
    }
    _printk(uVar5,"qti_qmi_sensor_v2","qmi_ts_send_request",uVar8,uVar4);
code_r0x08002e58:
    mutex_unlock(iVar10);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return uVar4 & 0xffffffff;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.qmi_ts_request;
    pcStack_d8 = sym.qmi_ts_request;
    iVar9 = sp_el0;
    iVar1 = iVar6 + 8;
    iStack_e8 = *(iVar9 + 0x5e0);
    iVar9 = *(iVar6 + 0x60);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    iStack_f0 = 0;
    uStack_124 = 0;
    puStack_e0 = &stack0xffffffffffffffa0;
    uStack_d0 = uVar4;
    uStack_c0 = uVar8;
    iStack_b8 = iVar10;
    strscpy(&uStack_120,iVar1,0x20);
    uVar5 = uStack_100;
    uStack_100 = CONCAT44(*(iVar6 + 0x54),uStack_100);
    iVar7 = 0x3d;
    iStack_f0._1_7_ = iStack_f0 >> 8 & 0xffffff;
    uStack_f8 = CONCAT44(*(iVar6 + 0x58),uStack_f8);
    uStack_100._0_3_ = CONCAT12(*(iVar6 + 0x54) != 0x7fffffff,uVar5);
    uStack_f8 = CONCAT71(uStack_f8._1_7_,*(iVar6 + 0x58) != -0x7fffffff);
    iStack_f0 = iStack_f0._1_7_ << 8;
    uVar2 = sym.qmi_ts_send_request(iVar9,0x32,0x3d,0x80001e8);
    uVar8 = uVar2;
    if (uVar2 < 0) {
        iVar7 = 0x80015db;
        _printk(0x80015b2,"qti_qmi_sensor_v2","qmi_ts_request",iVar1,uVar8);
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) != iStack_e8) {
        auVar11 = __stack_chk_fail();
        iVar6 = auVar11._0_8_;
        *extraout_x18_00 = sym.qmi_sensor_read;
        pcStack_158 = sym.qmi_sensor_read;
        iVar10 = sp_el0;
        iStack_168 = *(iVar10 + 0x5e0);
        ppuStack_160 = &puStack_e0;
        iStack_148 = iVar9;
        uStack_140 = uVar8;
        iStack_138 = iVar1;
        if ((*(iVar6 + 0x30) != '\0') && (_obj.in_suspend == 0)) {
            iVar10 = *(iVar6 + 0x60);
            uStack_1a0 = 0;
            uStack_198 = 0;
            uStack_190 = 0;
            uStack_188 = 0;
            uStack_180 = 0;
            uStack_178 = 0;
            uStack_170 = 0;
            strscpy(&uStack_1a0,iVar6 + 8,0x20);
            iVar7 = 0x3d;
            uVar8 = uStack_170 >> 8;
            uStack_180._0_2_ = CONCAT11(1,uStack_180);
            uStack_170 = CONCAT71(uVar8 & 0xffffff,1);
            iVar3 = sym.qmi_ts_send_request(iVar10,0x32,0x3d,0x80001e8);
            if (iVar3 < 0) {
                iVar7 = 0x80015db;
                _printk(0x80015b2,"qti_qmi_sensor_v2","qmi_ts_request",iVar6 + 8,iVar3);
            }
        }
        *auVar11._8_8_ = *(iVar6 + 0x50);
        iVar10 = sp_el0;
        if (*(iVar10 + 0x5e0) != iStack_168) {
            auVar12 = __stack_chk_fail();
            iVar10 = auVar12._0_8_;
            *extraout_x18_01 = 0x8003158;
            if ((*(iVar10 + 0x54) != iVar7) || (*(iVar10 + 0x58) != auVar12._8_4_)) {
                *(iVar10 + 0x54) = iVar7;
                *(iVar10 + 0x58) = auVar12._8_4_;
                if (*(iVar10 + 0x30) != '\0') {
                    uVar2 = sym.qmi_ts_request(iVar10);
                    uVar8 = uVar2;
                    if (-1 < uVar2) {
                        return uVar8;
                    }
                    _printk(0x80016bc,"qti_qmi_sensor_v2","qmi_sensor_set_trips",iVar10 + 8,*(iVar10 + 0x54),
                            *(iVar10 + 0x58),uVar8);
                    return uVar8;
                }
            }
            return 0;
        }
        return 0;
    }
    return uVar8;
}


// ===== sym.qmi_ts_request @ 0x08002f1c (size 288) =====

int sym.qmi_ts_request(int64_t arg1)

{
    uint64_t uVar1;
    ulong uVar2;
    int iVar3;
    int iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar6;
    ulong unaff_x30;
    uchar auVar7 [16];
    uchar auVar8 [12];
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
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    iVar6 = *(arg1 + 0x60);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    iStack_40 = 0;
    strscpy(&uStack_70,arg1 + 8,0x20);
    uVar2 = uStack_50;
    uStack_50 = CONCAT44(*(arg1 + 0x54),uStack_50);
    iVar4 = 0x3d;
    iStack_40._1_7_ = iStack_40 >> 8 & 0xffffff;
    uStack_48 = CONCAT44(*(arg1 + 0x58),uStack_48);
    uStack_50._0_3_ = CONCAT12(*(arg1 + 0x54) != 0x7fffffff,uVar2);
    uStack_48 = CONCAT71(uStack_48._1_7_,*(arg1 + 0x58) != -0x7fffffff);
    iStack_40 = iStack_40._1_7_ << 8;
    iVar3 = sym.qmi_ts_send_request(iVar6,0x32,0x3d,0x80001e8);
    if (iVar3 < 0) {
        iVar4 = 0x80015db;
        _printk(0x80015b2,"qti_qmi_sensor_v2","qmi_ts_request",arg1 + 8,iVar3);
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return iVar3;
    }
    auVar7 = __stack_chk_fail();
    iVar5 = auVar7._0_8_;
    *extraout_x18 = sym.qmi_sensor_read;
    pcStack_a8 = sym.qmi_sensor_read;
    iVar6 = sp_el0;
    iStack_b8 = *(iVar6 + 0x5e0);
    puStack_b0 = &stack0xffffffffffffffd0;
    if ((*(iVar5 + 0x30) != '\0') && (_obj.in_suspend == 0)) {
        iVar6 = *(iVar5 + 0x60);
        uStack_f0 = 0;
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_d8 = 0;
        uStack_d0 = 0;
        uStack_c8 = 0;
        uStack_c0 = 0;
        strscpy(&uStack_f0,iVar5 + 8,0x20);
        iVar4 = 0x3d;
        uVar1 = uStack_c0 >> 8;
        uStack_d0._0_2_ = CONCAT11(1,uStack_d0);
        uStack_c0 = CONCAT71(uVar1 & 0xffffff,1);
        iVar3 = sym.qmi_ts_send_request(iVar6,0x32,0x3d,0x80001e8);
        if (iVar3 < 0) {
            iVar4 = 0x80015db;
            _printk(0x80015b2,"qti_qmi_sensor_v2","qmi_ts_request",iVar5 + 8,iVar3);
        }
    }
    *auVar7._8_8_ = *(iVar5 + 0x50);
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_b8) {
        auVar8 = __stack_chk_fail();
        iVar6 = auVar8._0_8_;
        *extraout_x18_00 = 0x8003158;
        if ((*(iVar6 + 0x54) != iVar4) || (*(iVar6 + 0x58) != auVar8._8_4_)) {
            *(iVar6 + 0x54) = iVar4;
            *(iVar6 + 0x58) = auVar8._8_4_;
            if (*(iVar6 + 0x30) != '\0') {
                iVar4 = sym.qmi_ts_request(iVar6);
                if (-1 < iVar4) {
                    return iVar4;
                }
                _printk(0x80016bc,"qti_qmi_sensor_v2","qmi_sensor_set_trips",iVar6 + 8,*(iVar6 + 0x54),
                        *(iVar6 + 0x58),iVar4);
                return iVar4;
            }
        }
        return 0;
    }
    return 0;
}


// ===== sym.qmi_sensor_read @ 0x0800303c (size 288) =====

int sym.qmi_sensor_read(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int iVar2;
    int in_w2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    uchar auVar4 [12];
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    if ((*(arg1 + 0x30) != '\0') && (_obj.in_suspend == 0)) {
        iVar3 = *(arg1 + 0x60);
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_48 = 0;
        uStack_40 = 0;
        strscpy(&stack0xffffffffffffff90,arg1 + 8,0x20);
        in_w2 = 0x3d;
        uVar1 = uStack_40 >> 8;
        uStack_50._0_2_ = CONCAT11(1,uStack_50);
        uStack_40 = CONCAT71(uVar1 & 0xffffff,1);
        iVar2 = sym.qmi_ts_send_request(iVar3,0x32,0x3d,0x80001e8);
        if (iVar2 < 0) {
            in_w2 = 0x80015db;
            _printk(0x80015b2,"qti_qmi_sensor_v2","qmi_ts_request",arg1 + 8,iVar2);
        }
    }
    *arg2 = *(arg1 + 0x50);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_38) {
        auVar4 = __stack_chk_fail();
        iVar3 = auVar4._0_8_;
        *extraout_x18 = 0x8003158;
        if ((*(iVar3 + 0x54) != in_w2) || (*(iVar3 + 0x58) != auVar4._8_4_)) {
            *(iVar3 + 0x54) = in_w2;
            *(iVar3 + 0x58) = auVar4._8_4_;
            if (*(iVar3 + 0x30) != '\0') {
                iVar2 = sym.qmi_ts_request(iVar3);
                if (-1 < iVar2) {
                    return iVar2;
                }
                _printk(0x80016bc,"qti_qmi_sensor_v2","qmi_sensor_set_trips",iVar3 + 8,*(iVar3 + 0x54),
                        *(iVar3 + 0x58),iVar2);
                return iVar2;
            }
        }
        return 0;
    }
    return 0;
}


// ===== sym.qmi_sensor_set_trips @ 0x0800315c (size 148) =====

int sym.qmi_sensor_set_trips(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x54) != arg3) || (*(arg1 + 0x58) != arg2)) {
        *(arg1 + 0x54) = arg3;
        *(arg1 + 0x58) = arg2;
        if (*(arg1 + 0x30) != '\0') {
            iVar1 = sym.qmi_ts_request(arg1);
            if (-1 < iVar1) {
                return iVar1;
            }
            _printk(0x80016bc,"qti_qmi_sensor_v2","qmi_sensor_set_trips",arg1 + 8,*(arg1 + 0x54),*(arg1 + 0x58),
                    iVar1);
            return iVar1;
        }
    }
    return 0;
}


// ===== sym.qmi_sensor_tz_change_mode @ 0x080031f0 (size 168) =====

ulong sym.qmi_sensor_tz_change_mode(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x48);
    if (iVar1 != 0) {
        piVar2 = *(iVar1 + 0x458);
        *(iVar1 + 0x424) = 0x8000000100000000;
        *(iVar1 + 0x418) = 0xfffbd1b0;
        *(iVar1 + 0x42c) = 0x7fffffff;
        if (iVar1 + 0x458 != piVar2) {
            do {
                *(piVar2 + -0x8c) = 0;
                if (arg2 == 0) {
                    piVar2[-0xf] = -1;
                    *(piVar2[-0x13] + 0x3c0) = 0;
                    thermal_cdev_update(piVar2[-0x13]);
                }
                piVar2 = *piVar2;
            } while (iVar1 + 0x458 != piVar2);
        }
    }
    return 0;
}


// ===== sym.thermal_qmi_new_server @ 0x08003298 (size 168) =====

int64_t sym.thermal_qmi_new_server(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    ulong unaff_x30;
    uint uStack_38;
    uint uStack_34;
    uint uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_34 = *(arg2 + 0xc);
    uStack_30 = *(arg2 + 0x10);
    uStack_38 = 0x2a;
    mutex_lock(arg1 + 0x140);
    kernel_connect(*arg1,&uStack_38,0xc,0);
    mutex_unlock(arg1 + 0x140);
    queue_work_on(0x20,___ubsan_handle_cfi_check_fail_abort,arg1 + 0x188);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_28) {
        iVar1 = __stack_chk_fail();
        for (piVar2 = *(iVar1 + 0x178); piVar2 != iVar1 + 0x178; piVar2 = *piVar2) {
            *(piVar2 + -1) = 0;
        }
        return iVar1;
    }
    return 0;
}


// ===== sym.thermal_qmi_del_server @ 0x08003340 (size 44) =====

void sym.thermal_qmi_del_server(int64_t arg1)

{
    int64_t *piVar1;
    
    for (piVar1 = *(arg1 + 0x178); piVar1 != arg1 + 0x178; piVar1 = *piVar1) {
        *(piVar1 + -1) = 0;
    }
    return;
}


// ===== sym.thermal_qmi_net_reset @ 0x0800336c (size 380) =====

uint64_t sym.thermal_qmi_net_reset(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    int iVar3;
    int64_t extraout_x1;
    ulong *in_x18;
    int64_t *piVar4;
    int64_t iVar5;
    ulong unaff_x30;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iVar1 = arg1 + 0x178;
    iStack_68 = *(iVar5 + 0x5e0);
    for (piVar4 = *(arg1 + 0x178); piVar4 != iVar1; piVar4 = *piVar4) {
        if (*(piVar4 + -1) != '\0') {
            iVar5 = piVar4[5];
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_88 = 0;
            uStack_80 = 0;
            uStack_98 = 0;
            uStack_90 = 0;
            uStack_a0 = 0;
            strscpy(&uStack_a0,piVar4 + -6,0x20);
            uVar2 = uStack_70 >> 8;
            uStack_80._0_2_ = CONCAT11(1,uStack_80);
            uStack_70 = CONCAT71(uVar2 & 0xffffff,1);
            iVar3 = sym.qmi_ts_send_request(iVar5,0x32,0x3d,0x80001e8);
            if (iVar3 < 0) {
                _printk(0x80015b2,"qti_qmi_sensor_v2","qmi_ts_request",piVar4 + -6,iVar3);
            }
            arg1 = sym.qmi_ts_request(piVar4 + -7);
            if (arg1 != 0) {
                arg1 = _printk(0x800142c,"qti_qmi_sensor_v2","thermal_qmi_net_reset",piVar4[2] + 4,*(piVar4 + 0x1c)
                               ,*(piVar4 + 4),arg1 & 0xffffffff);
            }
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return arg1;
    }
    __stack_chk_fail();
    if (extraout_x1 - 1U < 6) {
        _segment.ehdr = *((extraout_x1 - 1U) * 4 + 0x8001928);
    }
    return 0;
}


// ===== sym.qmi_sensor_pm_notify @ 0x080034e8 (size 52) =====

ulong sym.qmi_sensor_pm_notify(int64_t arg1,int64_t arg2)

{
    if (arg2 - 1U < 6) {
        _segment.ehdr = *((arg2 - 1U) * 4 + 0x8001928);
    }
    return 0;
}


// ===== sym.init_module @ 0x08003524 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qmi_sens_device_probe.350366888c9727d19137fadcb5bb7281.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08003558 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qmi_sens_device_probe.350366888c9727d19137fadcb5bb7281.cfi_jt);
    return;
}

