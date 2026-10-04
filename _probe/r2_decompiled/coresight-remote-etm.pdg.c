// decompiled from coresight-remote-etm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 440) =====

//WARNING: Switch with 1 destination removed at 0x080018bc

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x4b596879dd0fbb8) {
        if (arg1 < -0xfae0556695233a4) {
            if (arg1 != -0x57be845bca9148ef) {
                if ((arg1 == -0x3557318fb8d07b71) && ((pcVar1 + -0x80011f0 >> 3 | pcVar1 << 0x3d) < 2)) {
                    return;
                }
                goto code_r0x0800187c;
            }
            pcVar2 = sym.remote_etm_freeze.9d1d4fcef480712af5d271e871ba7157.cfi_jt;
        }
        else if (arg1 == -0xfae0556695233a4) {
            pcVar2 = sym.service_remote_etm_new_server.9d1d4fcef480712af5d271e871ba7157.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x0800187c;
            pcVar2 = sym.remote_etm_init.cfi_jt;
        }
    }
    else if (arg1 < 0x76439dfb02cc8756) {
        if (arg1 == 0x4b596879dd0fbb8) {
            pcVar2 = sym.remote_etm_disable.9d1d4fcef480712af5d271e871ba7157.cfi_jt;
        }
        else {
            if (arg1 != 0x7a682b931f8f094) goto code_r0x0800187c;
            pcVar2 = sym.remote_etm_enable.9d1d4fcef480712af5d271e871ba7157.cfi_jt;
        }
    }
    else if (arg1 == 0x76439dfb02cc8756) {
        pcVar2 = sym.remote_etm_trace_id.9d1d4fcef480712af5d271e871ba7157.cfi_jt;
    }
    else if (arg1 == 0x77b71c1b418c981d) {
        pcVar2 = sym.service_remote_etm_del_server.9d1d4fcef480712af5d271e871ba7157.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800187c;
        pcVar2 = sym.remote_etm_exit.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x0800187c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80018d0);
    (*pcVar1)();
}


// ===== sym.remote_etm_trace_id.9d1d4fcef480712af5d271e871ba7157.cfi_jt @ 0x080011c0 (size 8) =====

uint sym.remote_etm_trace_id.9d1d4fcef480712af5d271e871ba7157.cfi_jt(int64_t param_1)

{
    return *(*(*(param_1 + 0x98) + 0x98) + 0x188);
}


// ===== sym.service_remote_etm_del_server.9d1d4fcef480712af5d271e871ba7157.cfi_jt @ 0x080011c8 (size 8) =====

void sym.service_remote_etm_del_server.9d1d4fcef480712af5d271e871ba7157.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 0x14c) = 0;
    _dev_info(*(param_1 + -0x40),"Connection disconnected between QMI handle and %d service\n",*(param_1 + 0x140));
    return;
}


// ===== sym.remote_etm_init.cfi_jt @ 0x080011d0 (size 8) =====

void sym.remote_etm_init.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.remote_etm_probe.9d1d4fcef480712af5d271e871ba7157.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.remote_etm_exit.cfi_jt @ 0x080011d8 (size 8) =====

void sym.remote_etm_exit.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.remote_etm_probe.9d1d4fcef480712af5d271e871ba7157.cfi_jt);
    return;
}


// ===== sym.remote_etm_freeze.9d1d4fcef480712af5d271e871ba7157.cfi_jt @ 0x080011e0 (size 8) =====

ulong sym.remote_etm_freeze.9d1d4fcef480712af5d271e871ba7157.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    coresight_disable(*(*(param_1 + 0x98) + 8));
    return 0;
}


// ===== sym.service_remote_etm_new_server.9d1d4fcef480712af5d271e871ba7157.cfi_jt @ 0x080011e8 (size 8) =====

ulong sym.service_remote_etm_new_server.9d1d4fcef480712af5d271e871ba7157.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 0x150) = 0x2a;
    *(param_1 + 0x154) = *(param_2 + 0xc);
    uVar1 = *(param_2 + 0x10);
    *(param_1 + 0x14c) = 1;
    *(param_1 + 0x158) = uVar1;
    _dev_info(*(param_1 + -0x40),"Connection established between QMI handle and %d service\n",*(param_1 + 0x140));
    return 0;
}


// ===== sym.remote_etm_remove.9d1d4fcef480712af5d271e871ba7157.cfi_jt @ 0x080011f0 (size 8) =====

ulong sym.remote_etm_remove.9d1d4fcef480712af5d271e871ba7157.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0xa8);
    __pm_runtime_disable(param_1 + 0x10,1);
    qmi_handle_release(iVar1 + 0x40);
    coresight_unregister(*(iVar1 + 8));
    return 0;
}


// ===== sym.remote_etm_probe.9d1d4fcef480712af5d271e871ba7157.cfi_jt @ 0x080011f8 (size 8) =====

uint64_t sym.remote_etm_probe.9d1d4fcef480712af5d271e871ba7157.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t *piVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar7;
    ulong unaff_x30;
    ulong uStack_98;
    ulong uStack_90;
    code *pcStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iVar6 = param_1 + 0x10;
    iStack_48 = *(iVar7 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    iStack_68 = 0;
    uStack_60 = 0;
    iStack_78 = 0;
    uStack_70 = 0;
    pcStack_88 = NULL;
    uStack_80 = 0;
    uStack_90 = 0;
    iStack_68 = coresight_alloc_device_name(obj.remote_etm_devs,iVar6);
    if (iStack_68 != 0) {
        uVar3 = coresight_get_platform_data(iVar6);
        if (0xfffffffffffff000 < uVar3) goto code_r0x08001374;
        *(param_1 + 0xa0) = uVar3;
        piVar4 = devm_kmalloc(iVar6,0x1a0,0xdc0);
        if (piVar4 != NULL) {
            uVar5 = *(param_1 + 0x300);
            *piVar4 = iVar6;
            *(param_1 + 0xa8) = piVar4;
            uVar3 = of_property_read_variable_u32_array(uVar5,"qcom,inst-id",piVar4 + 0x30,1,0);
            if (uVar3 < 0) {
                uVar3 = uVar3 & 0xffffffff;
            }
            else {
                __mutex_init(piVar4 + 2,"&drvdata->mutex",
                             reloc.remote_etm_probe.9d1d4fcef480712af5d271e871ba7157.cfi_jt);
                piVar1 = piVar4 + 8;
                uVar2 = qmi_handle_init(piVar1,7,
                                        reloc.service_remote_etm_new_server.9d1d4fcef480712af5d271e871ba7157.cfi_jt,0);
                if (uVar2 < 0) {
                    uVar3 = uVar2;
                    _dev_err(iVar6,"Remote ETM client init failed ret:%d\n",uVar3);
                }
                else {
                    qmi_add_lookup(piVar1,0x33,1,piVar4[0x30]);
                    uStack_98 = 0x100000004;
                    uStack_80 = *(param_1 + 0xa0);
                    *(piVar4 + 0x31) = _segment.ehdr;
                    pcStack_88 = obj.remote_cs_ops;
                    _segment.ehdr = _segment.ehdr + 1;
                    iStack_78 = iVar6;
                    uVar3 = coresight_register(&uStack_98);
                    piVar4[1] = uVar3;
                    if (uVar3 < 0xfffffffffffff001) {
                        _dev_info(iVar6,"Remote ETM initialized\n");
                        pm_runtime_enable(iVar6);
                        if (0x1f < *(piVar4 + 0x30)) {
                            _dev_err(iVar6,"inst_id greater than boot_enable bit mask\n");
                        }
                        uVar3 = 0;
                    }
                    else {
                        qmi_handle_release(piVar1);
                    }
                }
            }
            goto code_r0x08001374;
        }
    }
    uVar3 = 0xfffffff4;
code_r0x08001374:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return uVar3 & 0xffffffff;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.remote_etm_remove;
    iVar7 = *(iVar6 + 0xa8);
    __pm_runtime_disable(iVar6 + 0x10,1);
    qmi_handle_release(iVar7 + 0x40);
    coresight_unregister(*(iVar7 + 8));
    return 0;
}


// ===== sym.remote_etm_disable.9d1d4fcef480712af5d271e871ba7157.cfi_jt @ 0x08001200 (size 8) =====

ulong sym.remote_etm_disable.9d1d4fcef480712af5d271e871ba7157.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    char *pcVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar6;
    ulong unaff_x30;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_44;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_44 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    puVar6 = *(*(param_1 + 0x98) + 0x98);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    mutex_lock(puVar6 + 2);
    if (*(puVar6 + 0x18c) == '\0') {
        _dev_err(*puVar6,"QMI service not connected!\n");
    }
    else {
        uStack_44 = uStack_44 & 0xffffffff;
        uVar1 = qmi_txn_init(puVar6 + 8,&uStack_90,obj.coresight_set_etm_resp_msg_v01_ei,&uStack_44);
        if (uVar1 < 0) {
            uVar3 = *puVar6;
            pcVar5 = "QMI tx init failed , ret:%d\n";
        }
        else {
            iVar2 = qmi_send_request(puVar6 + 8,puVar6 + 0x32,&uStack_90,0x2c,7,
                                     obj.coresight_set_etm_req_msg_v01_ei,&uStack_44 + 4);
            if (iVar2 < 0) {
                _dev_err(*puVar6,"QMI send req failed, ret:%d\n");
                qmi_txn_cancel(&uStack_90);
                goto code_r0x0800180c;
            }
            uVar1 = qmi_txn_wait(&uStack_90,0x4e2);
            if (uVar1 < 0) {
                uVar3 = *puVar6;
                pcVar5 = "QMI qmi txn wait failed, ret:%d\n";
            }
            else {
                if (uStack_44 == 0) {
                    *(puVar6 + 0x184) = 0;
                    _dev_info(*puVar6,"Remote ETM tracing disabled for instance %d\n",*(puVar6 + 0x30));
                    goto code_r0x0800180c;
                }
                uVar3 = *puVar6;
                uVar1 = uStack_44._2_2_;
                pcVar5 = "QMI request failed 0x%x\n";
            }
        }
        _dev_err(uVar3,pcVar5,uVar1);
    }
code_r0x0800180c:
    uVar3 = mutex_unlock(puVar6 + 2);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return uVar3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.remote_etm_freeze;
    coresight_disable(*(*(iVar4 + 0x98) + 8));
    return 0;
}


// ===== sym.remote_etm_enable.9d1d4fcef480712af5d271e871ba7157.cfi_jt @ 0x08001208 (size 8) =====

uint64_t sym.remote_etm_enable.9d1d4fcef480712af5d271e871ba7157.cfi_jt(int64_t param_1)

{
    ulong *puVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t iVar6;
    char *pcVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar8;
    ulong *unaff_x21;
    ulong *puVar9;
    ulong unaff_x30;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d4;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong *puStack_b0;
    uint64_t uStack_a0;
    ulong *puStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_44;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_44 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    puVar9 = *(*(param_1 + 0x98) + 0x98);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    puVar1 = puVar9 + 2;
    mutex_lock(puVar1);
    if (*(puVar9 + 0x18c) == '\0') {
        _dev_err(*puVar9,"QMI service not connected!\n");
        uVar8 = 0x16;
code_r0x08001638:
        mutex_unlock(puVar1);
    }
    else {
        unaff_x21 = puVar9 + 8;
        uStack_44 = CONCAT44(1,uStack_44);
        uVar2 = qmi_txn_init(unaff_x21,&uStack_90,obj.coresight_set_etm_resp_msg_v01_ei,&uStack_44);
        if (uVar2 < 0) {
            uVar5 = *puVar9;
            pcVar7 = "QMI tx init failed , ret:%d\n";
code_r0x08001630:
            uVar8 = uVar2;
            _dev_err(uVar5,pcVar7,uVar8);
            goto code_r0x08001638;
        }
        uVar8 = qmi_send_request(unaff_x21,puVar9 + 0x32,&uStack_90,0x2c,7,obj.coresight_set_etm_req_msg_v01_ei,
                                 &uStack_44 + 4);
        if (uVar8 < 0) {
            _dev_err(*puVar9,"QMI send ACK failed, ret:%d\n",uVar8 & 0xffffffff);
            qmi_txn_cancel(&uStack_90);
            goto code_r0x08001638;
        }
        uVar2 = qmi_txn_wait(&uStack_90,0x4e2);
        if (uVar2 < 0) {
            uVar5 = *puVar9;
            pcVar7 = "QMI qmi txn wait failed, ret:%d\n";
            goto code_r0x08001630;
        }
        if (uStack_44 != 0) {
            _dev_err(*puVar9,"QMI request failed 0x%x\n",uStack_44._2_2_);
        }
        *(puVar9 + 0x184) = 1;
        mutex_unlock(puVar1);
        _dev_info(*puVar9,"Remote ETM tracing enabled for instance %d\n",*(puVar9 + 0x30));
        uVar8 = 0;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return uVar8 & 0xffffffff;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.remote_etm_disable;
    pcStack_b8 = sym.remote_etm_disable;
    iVar6 = sp_el0;
    iStack_c8 = *(iVar6 + 0x5e0);
    uStack_d4 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    puVar9 = *(*(iVar4 + 0x98) + 0x98);
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_120 = 0;
    puStack_c0 = &stack0xffffffffffffffd0;
    puStack_b0 = unaff_x21;
    uStack_a0 = uVar8;
    puStack_98 = puVar1;
    mutex_lock(puVar9 + 2);
    if (*(puVar9 + 0x18c) == '\0') {
        _dev_err(*puVar9,"QMI service not connected!\n");
    }
    else {
        uStack_d4 = uStack_d4 & 0xffffffff;
        uVar2 = qmi_txn_init(puVar9 + 8,&uStack_120,obj.coresight_set_etm_resp_msg_v01_ei,&uStack_d4);
        if (uVar2 < 0) {
            uVar5 = *puVar9;
            pcVar7 = "QMI tx init failed , ret:%d\n";
        }
        else {
            iVar3 = qmi_send_request(puVar9 + 8,puVar9 + 0x32,&uStack_120,0x2c,7,
                                     obj.coresight_set_etm_req_msg_v01_ei,&uStack_d4 + 4);
            if (iVar3 < 0) {
                _dev_err(*puVar9,"QMI send req failed, ret:%d\n");
                qmi_txn_cancel(&uStack_120);
                goto code_r0x0800180c;
            }
            uVar2 = qmi_txn_wait(&uStack_120,0x4e2);
            if (uVar2 < 0) {
                uVar5 = *puVar9;
                pcVar7 = "QMI qmi txn wait failed, ret:%d\n";
            }
            else {
                if (uStack_d4 == 0) {
                    *(puVar9 + 0x184) = 0;
                    _dev_info(*puVar9,"Remote ETM tracing disabled for instance %d\n",*(puVar9 + 0x30));
                    goto code_r0x0800180c;
                }
                uVar5 = *puVar9;
                uVar2 = uStack_d4._2_2_;
                pcVar7 = "QMI request failed 0x%x\n";
            }
        }
        _dev_err(uVar5,pcVar7,uVar2);
    }
code_r0x0800180c:
    uVar8 = mutex_unlock(puVar9 + 2);
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_c8) {
        return uVar8;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18_00 = sym.remote_etm_freeze;
    coresight_disable(*(*(iVar6 + 0x98) + 8));
    return 0;
}


// ===== sym.remote_etm_probe @ 0x08001210 (size 516) =====

uint64_t sym.remote_etm_probe(int64_t arg1)

{
    int64_t *piVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t *piVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar7;
    ulong unaff_x30;
    ulong uStack_98;
    ulong uStack_90;
    code *pcStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iVar6 = arg1 + 0x10;
    iStack_48 = *(iVar7 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    iStack_68 = 0;
    uStack_60 = 0;
    iStack_78 = 0;
    uStack_70 = 0;
    pcStack_88 = NULL;
    uStack_80 = 0;
    uStack_90 = 0;
    iStack_68 = coresight_alloc_device_name(obj.remote_etm_devs,iVar6);
    if (iStack_68 != 0) {
        uVar3 = coresight_get_platform_data(iVar6);
        if (0xfffffffffffff000 < uVar3) goto code_r0x08001374;
        *(arg1 + 0xa0) = uVar3;
        piVar4 = devm_kmalloc(iVar6,0x1a0,0xdc0);
        if (piVar4 != NULL) {
            uVar5 = *(arg1 + 0x300);
            *piVar4 = iVar6;
            *(arg1 + 0xa8) = piVar4;
            uVar3 = of_property_read_variable_u32_array(uVar5,"qcom,inst-id",piVar4 + 0x30,1,0);
            if (uVar3 < 0) {
                uVar3 = uVar3 & 0xffffffff;
            }
            else {
                __mutex_init(piVar4 + 2,"&drvdata->mutex",
                             reloc.remote_etm_probe.9d1d4fcef480712af5d271e871ba7157.cfi_jt);
                piVar1 = piVar4 + 8;
                uVar2 = qmi_handle_init(piVar1,7,
                                        reloc.service_remote_etm_new_server.9d1d4fcef480712af5d271e871ba7157.cfi_jt,0);
                if (uVar2 < 0) {
                    uVar3 = uVar2;
                    _dev_err(iVar6,"Remote ETM client init failed ret:%d\n",uVar3);
                }
                else {
                    qmi_add_lookup(piVar1,0x33,1,piVar4[0x30]);
                    uStack_98 = 0x100000004;
                    uStack_80 = *(arg1 + 0xa0);
                    *(piVar4 + 0x31) = _segment.ehdr;
                    pcStack_88 = obj.remote_cs_ops;
                    _segment.ehdr = _segment.ehdr + 1;
                    iStack_78 = iVar6;
                    uVar3 = coresight_register(&uStack_98);
                    piVar4[1] = uVar3;
                    if (uVar3 < 0xfffffffffffff001) {
                        _dev_info(iVar6,"Remote ETM initialized\n");
                        pm_runtime_enable(iVar6);
                        if (0x1f < *(piVar4 + 0x30)) {
                            _dev_err(iVar6,"inst_id greater than boot_enable bit mask\n");
                        }
                        uVar3 = 0;
                    }
                    else {
                        qmi_handle_release(piVar1);
                    }
                }
            }
            goto code_r0x08001374;
        }
    }
    uVar3 = 0xfffffff4;
code_r0x08001374:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return uVar3 & 0xffffffff;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.remote_etm_remove;
    iVar7 = *(iVar6 + 0xa8);
    __pm_runtime_disable(iVar6 + 0x10,1);
    qmi_handle_release(iVar7 + 0x40);
    coresight_unregister(*(iVar7 + 8));
    return 0;
}


// ===== sym.remote_etm_remove @ 0x08001414 (size 80) =====

ulong sym.remote_etm_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0xa8);
    __pm_runtime_disable(arg1 + 0x10,1);
    qmi_handle_release(iVar1 + 0x40);
    coresight_unregister(*(iVar1 + 8));
    return 0;
}


// ===== sym.service_remote_etm_new_server @ 0x08001464 (size 92) =====

ulong sym.service_remote_etm_new_server(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x150) = 0x2a;
    *(arg1 + 0x154) = *(arg2 + 0xc);
    uVar1 = *(arg2 + 0x10);
    *(arg1 + 0x14c) = 1;
    *(arg1 + 0x158) = uVar1;
    _dev_info(*(arg1 + -0x40),"Connection established between QMI handle and %d service\n",*(arg1 + 0x140));
    return 0;
}


// ===== sym.service_remote_etm_del_server @ 0x080014c0 (size 60) =====

void sym.service_remote_etm_del_server(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x14c) = 0;
    _dev_info(*(arg1 + -0x40),"Connection disconnected between QMI handle and %d service\n",*(arg1 + 0x140));
    return;
}


// ===== sym.remote_etm_trace_id @ 0x080014fc (size 24) =====

uint sym.remote_etm_trace_id(int64_t arg1)

{
    return *(*(*(arg1 + 0x98) + 0x98) + 0x188);
}


// ===== sym.remote_etm_enable @ 0x08001514 (size 428) =====

uint64_t sym.remote_etm_enable(int64_t arg1)

{
    ulong *puVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t iVar6;
    char *pcVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar8;
    ulong *unaff_x21;
    ulong *puVar9;
    ulong unaff_x30;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d4;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong *puStack_b0;
    uint64_t uStack_a0;
    ulong *puStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_44;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_44 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    puVar9 = *(*(arg1 + 0x98) + 0x98);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    puVar1 = puVar9 + 2;
    mutex_lock(puVar1);
    if (*(puVar9 + 0x18c) == '\0') {
        _dev_err(*puVar9,"QMI service not connected!\n");
        uVar8 = 0x16;
code_r0x08001638:
        mutex_unlock(puVar1);
    }
    else {
        unaff_x21 = puVar9 + 8;
        uStack_44 = CONCAT44(1,uStack_44);
        uVar2 = qmi_txn_init(unaff_x21,&uStack_90,obj.coresight_set_etm_resp_msg_v01_ei,&uStack_44);
        if (uVar2 < 0) {
            uVar5 = *puVar9;
            pcVar7 = "QMI tx init failed , ret:%d\n";
code_r0x08001630:
            uVar8 = uVar2;
            _dev_err(uVar5,pcVar7,uVar8);
            goto code_r0x08001638;
        }
        uVar8 = qmi_send_request(unaff_x21,puVar9 + 0x32,&uStack_90,0x2c,7,obj.coresight_set_etm_req_msg_v01_ei,
                                 &uStack_44 + 4);
        if (uVar8 < 0) {
            _dev_err(*puVar9,"QMI send ACK failed, ret:%d\n",uVar8 & 0xffffffff);
            qmi_txn_cancel(&uStack_90);
            goto code_r0x08001638;
        }
        uVar2 = qmi_txn_wait(&uStack_90,0x4e2);
        if (uVar2 < 0) {
            uVar5 = *puVar9;
            pcVar7 = "QMI qmi txn wait failed, ret:%d\n";
            goto code_r0x08001630;
        }
        if (uStack_44 != 0) {
            _dev_err(*puVar9,"QMI request failed 0x%x\n",uStack_44._2_2_);
        }
        *(puVar9 + 0x184) = 1;
        mutex_unlock(puVar1);
        _dev_info(*puVar9,"Remote ETM tracing enabled for instance %d\n",*(puVar9 + 0x30));
        uVar8 = 0;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return uVar8 & 0xffffffff;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.remote_etm_disable;
    pcStack_b8 = sym.remote_etm_disable;
    iVar6 = sp_el0;
    iStack_c8 = *(iVar6 + 0x5e0);
    uStack_d4 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    puVar9 = *(*(iVar4 + 0x98) + 0x98);
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_120 = 0;
    puStack_c0 = &stack0xffffffffffffffd0;
    puStack_b0 = unaff_x21;
    uStack_a0 = uVar8;
    puStack_98 = puVar1;
    mutex_lock(puVar9 + 2);
    if (*(puVar9 + 0x18c) == '\0') {
        _dev_err(*puVar9,"QMI service not connected!\n");
    }
    else {
        uStack_d4 = uStack_d4 & 0xffffffff;
        uVar2 = qmi_txn_init(puVar9 + 8,&uStack_120,obj.coresight_set_etm_resp_msg_v01_ei,&uStack_d4);
        if (uVar2 < 0) {
            uVar5 = *puVar9;
            pcVar7 = "QMI tx init failed , ret:%d\n";
        }
        else {
            iVar3 = qmi_send_request(puVar9 + 8,puVar9 + 0x32,&uStack_120,0x2c,7,
                                     obj.coresight_set_etm_req_msg_v01_ei,&uStack_d4 + 4);
            if (iVar3 < 0) {
                _dev_err(*puVar9,"QMI send req failed, ret:%d\n");
                qmi_txn_cancel(&uStack_120);
                goto code_r0x0800180c;
            }
            uVar2 = qmi_txn_wait(&uStack_120,0x4e2);
            if (uVar2 < 0) {
                uVar5 = *puVar9;
                pcVar7 = "QMI qmi txn wait failed, ret:%d\n";
            }
            else {
                if (uStack_d4 == 0) {
                    *(puVar9 + 0x184) = 0;
                    _dev_info(*puVar9,"Remote ETM tracing disabled for instance %d\n",*(puVar9 + 0x30));
                    goto code_r0x0800180c;
                }
                uVar5 = *puVar9;
                uVar2 = uStack_d4._2_2_;
                pcVar7 = "QMI request failed 0x%x\n";
            }
        }
        _dev_err(uVar5,pcVar7,uVar2);
    }
code_r0x0800180c:
    uVar8 = mutex_unlock(puVar9 + 2);
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_c8) {
        return uVar8;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18_00 = sym.remote_etm_freeze;
    coresight_disable(*(*(iVar6 + 0x98) + 8));
    return 0;
}


// ===== sym.remote_etm_disable @ 0x080016c0 (size 392) =====

ulong sym.remote_etm_disable(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    char *pcVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar6;
    ulong unaff_x30;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_44;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_44 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    puVar6 = *(*(arg1 + 0x98) + 0x98);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    mutex_lock(puVar6 + 2);
    if (*(puVar6 + 0x18c) == '\0') {
        _dev_err(*puVar6,"QMI service not connected!\n");
    }
    else {
        uStack_44 = uStack_44 & 0xffffffff;
        uVar1 = qmi_txn_init(puVar6 + 8,&uStack_90,obj.coresight_set_etm_resp_msg_v01_ei,&uStack_44);
        if (uVar1 < 0) {
            uVar3 = *puVar6;
            pcVar5 = "QMI tx init failed , ret:%d\n";
        }
        else {
            iVar2 = qmi_send_request(puVar6 + 8,puVar6 + 0x32,&uStack_90,0x2c,7,
                                     obj.coresight_set_etm_req_msg_v01_ei,&uStack_44 + 4);
            if (iVar2 < 0) {
                _dev_err(*puVar6,"QMI send req failed, ret:%d\n");
                qmi_txn_cancel(&uStack_90);
                goto code_r0x0800180c;
            }
            uVar1 = qmi_txn_wait(&uStack_90,0x4e2);
            if (uVar1 < 0) {
                uVar3 = *puVar6;
                pcVar5 = "QMI qmi txn wait failed, ret:%d\n";
            }
            else {
                if (uStack_44 == 0) {
                    *(puVar6 + 0x184) = 0;
                    _dev_info(*puVar6,"Remote ETM tracing disabled for instance %d\n",*(puVar6 + 0x30));
                    goto code_r0x0800180c;
                }
                uVar3 = *puVar6;
                uVar1 = uStack_44._2_2_;
                pcVar5 = "QMI request failed 0x%x\n";
            }
        }
        _dev_err(uVar3,pcVar5,uVar1);
    }
code_r0x0800180c:
    uVar3 = mutex_unlock(puVar6 + 2);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return uVar3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.remote_etm_freeze;
    coresight_disable(*(*(iVar4 + 0x98) + 8));
    return 0;
}


// ===== sym.remote_etm_freeze @ 0x08001848 (size 48) =====

ulong sym.remote_etm_freeze(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    coresight_disable(*(*(arg1 + 0x98) + 8));
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x08001878 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080018bc

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
    //switch table (4 cases) at 0x8000200
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80018d0);
    (*pcVar1)();
}


// ===== sym.remote_etm_init @ 0x080018d4 (size 52) =====

void sym.remote_etm_init(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.remote_etm_probe.9d1d4fcef480712af5d271e871ba7157.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.remote_etm_exit @ 0x08001908 (size 44) =====

void sym.remote_etm_exit(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.remote_etm_probe.9d1d4fcef480712af5d271e871ba7157.cfi_jt);
    return;
}

