// decompiled from qti_qmi_cdev by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 436) =====

//WARNING: Switch with 1 destination removed at 0x0800225c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x519d946a5cb8d608) {
        if (arg1 < -0xfae0556695233a4) {
            if (arg1 != -0x550b9e52359ac614) {
                if (arg1 != -0x3557318fb8d07b71) goto code_r0x0800221c;
                pcVar2 = sym.qmi_device_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                goto code_r0x0800215c;
            }
            pcVar2 = sym.qmi_tmd_svc_arrive.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else if (arg1 == -0xfae0556695233a4) {
            pcVar2 = sym.thermal_qmi_new_server.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x0800221c;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x6b571d3f779580cd) {
        if (arg1 == 0x519d946a5cb8d608) {
            pcVar2 = sym.qmi_set_cur_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != 0x53abe107a3d895d3) goto code_r0x0800221c;
            pcVar2 = sym.thermal_qmi_net_reset.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
    }
    else {
        if (arg1 == 0x6b571d3f779580cd) {
            pcVar2 = sym.qmi_get_cur_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
code_r0x0800215c:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x0800221c;
        }
        if (arg1 == 0x77b71c1b418c981d) {
            pcVar2 = sym.thermal_qmi_del_server.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800221c;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x0800221c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002270);
    (*pcVar1)();
}


// ===== sym.thermal_qmi_new_server.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080021c0 (size 8) =====

int64_t sym.thermal_qmi_new_server.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong *param_1,int64_t param_2)

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
    queue_work_on(0x20,_devm_kmalloc,param_1 + 0x31);
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


// ===== sym.qmi_tmd_svc_arrive.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080021c8 (size 8) =====

uint64_t sym.qmi_tmd_svc_arrive.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(code *param_1)

{
    code *pcVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong uVar7;
    uint uVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    uint16_t *unaff_x19;
    code *unaff_x21;
    int64_t iVar10;
    code *unaff_x22;
    code *unaff_x23;
    uint64_t uVar11;
    ulong unaff_x30;
    uchar auVar12 [12];
    uchar auVar13 [16];
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    uint32_t uStack_134;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ushort uStack_110;
    int64_t iStack_108;
    uchar *puStack_100;
    code *pcStack_f8;
    code *pcStack_f0;
    code *pcStack_e0;
    code *pcStack_d8;
    code *pcStack_d0;
    uint16_t *puStack_c8;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    uchar auStack_6c [4];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_b8 = 0;
    auStack_6c[0] = 0;
    puVar4 = kmem_cache_alloc_trace(___ubsan_handle_cfi_check_fail_abort,0xdc0,0xcd4);
    uVar11 = 0;
    puStack_c8 = unaff_x19;
    pcVar1 = param_1;
    if (puVar4 != NULL) {
        unaff_x22 = param_1 + -400;
        pcVar1 = param_1 + -0x48;
        mutex_lock(pcVar1);
        unaff_x21 = param_1 + -0x188;
        uVar2 = qmi_txn_init(unaff_x21,&uStack_b8,obj.tmd_get_mitigation_device_list_resp_msg_v01_ei,puVar4);
        if (uVar2 < 0) {
            uVar8 = *(param_1 + -0x18);
            uVar7 = 0x800107b;
            goto code_r0x08002ad4;
        }
        iVar3 = qmi_send_request(unaff_x21,0,&uStack_b8,0x20,0,obj.tmd_mitigation_dev_list_type_v01_ei,auStack_6c)
        ;
        if (iVar3 < 0) {
            qmi_txn_cancel(&uStack_b8);
code_r0x08002964:
            mutex_unlock(pcVar1);
        }
        else {
            uVar2 = qmi_txn_wait(&uStack_b8,0x19);
            if (uVar2 < 0) {
                uVar8 = *(param_1 + -0x18);
                uVar7 = 0x80011b4;
code_r0x08002ad4:
                _printk(uVar7,"qti_qmi_cdev","verify_devices_and_register",uVar8,uVar2);
                goto code_r0x08002964;
            }
            uVar2 = *puVar4;
            if (*puVar4 != 0) {
                uVar8 = *(param_1 + -0x18);
                uVar7 = 0x8000f75;
                goto code_r0x08002ad4;
            }
            mutex_unlock(pcVar1);
            param_1 = param_1 + -0x10;
            if (*(puVar4 + 4) != 0) {
                uVar11 = 0;
                unaff_x21 = 0x22;
                unaff_x22 = 0x1;
                pcVar1 = reloc.qmi_get_max_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                do {
                    unaff_x23 = *param_1;
                    if (param_1 != unaff_x23) {
                        if (0x20 < uVar11) goto code_r0x08002aec;
                        do {
                            iVar3 = strncasecmp(unaff_x23 + -0x28,puVar4 + uVar11 * 0x11 + 6,0x20);
                            if (iVar3 == 0) {
                                unaff_x23[-8] = 0x1;
                                *(unaff_x23 + 0x1c) = *(puVar4 + uVar11 * 0x22 + 0x2d);
                                sym.qmi_tmd_send_state_request(unaff_x23 + -0x50,*(unaff_x23 + 0x18));
                                if (*(unaff_x23 + 0x10) == 0) {
                                    uVar5 = thermal_of_cooling_device_register
                                                      (*(unaff_x23 + -0x50),unaff_x23 + -0x48,unaff_x23 + -0x50,
                                                       reloc.qmi_get_max_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
                                    *(unaff_x23 + 0x10) = uVar5;
                                    if (0xfffffffffffff000 < uVar5) {
                                        _printk(0x8001130,"qti_qmi_cdev","qmi_register_cooling_device",
                                                unaff_x23 + -0x48,uVar5);
                                    }
                                }
                                break;
                            }
                            unaff_x23 = *unaff_x23;
                        } while (param_1 != unaff_x23);
                    }
                    uVar11 = uVar11 + 1;
                } while (uVar11 < *(puVar4 + 4));
            }
            if (puVar4[0x226] != '\0') {
                uVar11 = 0;
                unaff_x21 = 0x22;
                unaff_x22 = 0x1;
                pcVar1 = reloc.qmi_get_max_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                do {
                    if (*(puVar4 + 0x228) <= uVar11) break;
                    unaff_x23 = *param_1;
                    if (param_1 != unaff_x23) {
                        if (0x40 < uVar11) {
code_r0x08002aec:
    //WARNING: Does not return
                            pcVar1 = SoftwareBreakpoint(0x5512,0x8002af0);
                            (*pcVar1)();
                        }
                        do {
                            iVar3 = strncasecmp(unaff_x23 + -0x28,puVar4 + uVar11 * 0x11 + 0x22a,0x20);
                            if (iVar3 == 0) {
                                unaff_x23[-8] = 0x1;
                                *(unaff_x23 + 0x1c) = *(puVar4 + uVar11 * 0x22 + 0x475);
                                sym.qmi_tmd_send_state_request(unaff_x23 + -0x50,*(unaff_x23 + 0x18));
                                if (*(unaff_x23 + 0x10) == 0) {
                                    uVar5 = thermal_of_cooling_device_register
                                                      (*(unaff_x23 + -0x50),unaff_x23 + -0x48,unaff_x23 + -0x50,
                                                       reloc.qmi_get_max_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
                                    *(unaff_x23 + 0x10) = uVar5;
                                    if (0xfffffffffffff000 < uVar5) {
                                        _printk(0x8001130,"qti_qmi_cdev","qmi_register_cooling_device",
                                                unaff_x23 + -0x48,uVar5);
                                    }
                                }
                                break;
                            }
                            unaff_x23 = *unaff_x23;
                        } while (param_1 != unaff_x23);
                    }
                    uVar11 = uVar11 + 1;
                } while (puVar4[0x226] != '\0');
            }
        }
        uVar11 = kfree(puVar4);
        puStack_c8 = puVar4;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return uVar11;
    }
    auVar12 = __stack_chk_fail();
    iVar6 = auVar12._0_8_;
    *extraout_x18 = sym.qmi_tmd_send_state_request;
    pcStack_f8 = sym.qmi_tmd_send_state_request;
    iVar9 = sp_el0;
    iStack_108 = *(iVar9 + 0x5e0);
    iVar10 = *(iVar6 + 0x70);
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_180 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_134 = 0;
    puStack_100 = &stack0xffffffffffffffa0;
    pcStack_f0 = unaff_x23;
    pcStack_e0 = unaff_x22;
    pcStack_d8 = unaff_x21;
    pcStack_d0 = pcVar1;
    strscpy(&uStack_130,iVar6 + 0x28,0x20);
    iVar9 = iVar10 + 0x148;
    uStack_110 = CONCAT11(auVar12[8],uStack_110);
    mutex_lock(iVar9);
    iVar10 = iVar10 + 8;
    uVar2 = qmi_txn_init(iVar10,&uStack_180,obj.tmd_set_mitigation_level_resp_msg_v01_ei,&uStack_134);
    if (uVar2 < 0) {
        uVar7 = 0x8000fb2;
    }
    else {
        uVar2 = qmi_send_request(iVar10,0,&uStack_180,0x21,0x28,obj.tmd_set_mitigation_level_req_msg_v01_ei,
                                 &uStack_130);
        if (uVar2 < 0) {
            _printk(0x8001220,"qti_qmi_cdev","qmi_tmd_send_state_request",auVar12._8_4_ & 0xff,iVar6 + 8,uVar2);
            qmi_txn_cancel(&uStack_180);
            goto code_r0x08002bd4;
        }
        uVar2 = qmi_txn_wait(&uStack_180,0x19);
        if (uVar2 < 0) {
            uVar7 = 0x8000f3d;
        }
        else {
            uVar2 = uStack_134 & 0xffff;
            if (uStack_134 == 0) goto code_r0x08002bd4;
            uVar7 = 0x80011ec;
        }
    }
    _printk(uVar7,"qti_qmi_cdev","qmi_tmd_send_state_request",auVar12._8_4_ & 0xff,iVar6 + 8,uVar2);
code_r0x08002bd4:
    mutex_unlock(iVar9);
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_108) {
        return uVar2;
    }
    auVar13 = __stack_chk_fail();
    iVar9 = *(auVar13._0_8_ + 0x3a8);
    if (iVar9 == 0) {
        return 0xffffffea;
    }
    *auVar13._8_8_ = *(iVar9 + 0x6c);
    return 0;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080021d0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qmi_device_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080021d8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qmi_device_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.thermal_qmi_net_reset.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080021e0 (size 8) =====

void sym.thermal_qmi_net_reset.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong *puVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    for (puVar1 = *(param_1 + 0x178); puVar1 != param_1 + 0x178; puVar1 = *puVar1) {
        if (*(puVar1 + -1) != '\0') {
            sym.qmi_tmd_send_state_request(puVar1 + -10,*(puVar1 + 3));
        }
    }
    return;
}


// ===== sym.thermal_qmi_del_server.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080021e8 (size 8) =====

void sym.thermal_qmi_del_server.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    
    for (piVar1 = *(param_1 + 0x178); piVar1 != param_1 + 0x178; piVar1 = *piVar1) {
        *(piVar1 + -1) = 0;
    }
    return;
}


// ===== sym.qmi_get_cur_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080021f0 (size 8) =====

ulong sym.qmi_get_cur_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,uint64_t *param_2)

{
    if (*(param_1 + 0x3a8) != 0) {
        *param_2 = *(*(param_1 + 0x3a8) + 0x68);
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.qmi_get_max_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080021f8 (size 8) =====

ulong sym.qmi_get_max_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,uint64_t *param_2)

{
    if (*(param_1 + 0x3a8) != 0) {
        *param_2 = *(*(param_1 + 0x3a8) + 0x6c);
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.qmi_device_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002200 (size 8) =====

ulong sym.qmi_device_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qmi_tmd_cleanup();
    return 0;
}


// ===== sym.qmi_device_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002208 (size 8) =====

int sym.qmi_device_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    int64_t *piVar5;
    uchar auVar6 [16];
    int iVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong *puVar10;
    int64_t *piVar11;
    uint64_t uVar12;
    char *pcVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar14;
    int64_t iVar15;
    int64_t iVar16;
    uint32_t uVar17;
    ulong unaff_x30;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iVar2 = param_1 + 0x10;
    iStack_68 = *(iVar8 + 0x5e0);
    uVar14 = *(param_1 + 0x300);
    iVar8 = of_get_next_available_child(uVar14,0);
    if (iVar8 == 0) {
code_r0x080025e4:
        _dev_err(iVar2,"No child node to process\n");
        iVar7 = -0xe;
    }
    else {
        uVar1 = 0;
        do {
            uVar17 = uVar1;
            uVar1 = uVar17 + 1;
            iVar8 = of_get_next_available_child(uVar14,iVar8);
        } while (iVar8 != 0);
        if (uVar1 == 0) goto code_r0x080025e4;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar1;
        if ((SUB168(auVar6 * ZEXT816(0x1c0),8) == 0) &&
           (iVar8 = devm_kmalloc(iVar2,uVar1 * 0x1c0,0xdc0), iVar8 != 0)) {
            iVar9 = of_get_next_available_child(uVar14,0);
            if ((iVar9 != 0) && (uVar17 < 0x7fffffff)) {
                iVar15 = 0;
                do {
                    piVar5 = iVar8 + iVar15 * 0x1c0;
                    iVar7 = of_property_read_variable_u32_array(iVar9,"qcom,instance-id",piVar5 + 0x2f,1,0);
                    if (iVar7 < 0) {
                        _dev_err(iVar2,"error reading qcom,insance-id. ret:%d\n",iVar7);
                        goto code_r0x08002504;
                    }
                    iVar16 = iVar8 + iVar15 * 0x1c0;
                    *piVar5 = iVar2;
                    __mutex_init(iVar16 + 0x148,"&tmd[idx].mutex",obj.of_get_qmi_tmd_platform_data.__key);
                    piVar3 = iVar16 + 0x180;
                    *(iVar16 + 0x180) = piVar3;
                    *(iVar16 + 0x188) = piVar3;
                    *(iVar16 + 400) = 0xfffffffe0;
                    *(iVar16 + 0x198) = iVar16 + 0x198;
                    *(iVar16 + 0x1a0) = iVar16 + 0x198;
                    *(iVar16 + 0x1a8) = sym.qmi_tmd_svc_arrive.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    for (puVar10 = of_get_next_available_child(iVar9,0); puVar10 != NULL;
                        puVar10 = of_get_next_available_child(iVar9,puVar10)) {
                        uStack_70 = 0;
                        piVar11 = devm_kmalloc(iVar2,0x78,0xdc0);
                        if (piVar11 == NULL) goto code_r0x08002500;
                        strscpy(piVar11 + 1,*puVar10,0x20);
                        iVar7 = of_property_read_string(puVar10,"qcom,qmi-dev-name",&uStack_70);
                        if (iVar7 != 0) {
                            pcVar13 = "Fail to parse dev name for %s\n";
code_r0x080024b4:
                            _dev_err(iVar2,pcVar13,*puVar10);
                            break;
                        }
                        strscpy(piVar11 + 5,uStack_70,0x20);
                        iVar16 = 0;
                        while (iVar7 = strcmp(obj.device_clients + iVar16,piVar11 + 5), iVar7 != 0) {
                            iVar16 = iVar16 + 0x20;
                            if (iVar16 == 0x8e0) {
                                pcVar13 = "Not supported dev name for %s\n";
                                goto code_r0x080024b4;
                            }
                        }
                        iVar16 = *piVar3;
                        piVar4 = piVar11 + 10;
                        piVar11[0xe] = piVar5;
                        *piVar11 = puVar10;
                        *(piVar11 + 0xd) = 0;
                        uVar12 = __list_add_valid(piVar4,piVar3,iVar16);
                        if ((uVar12 & 1) != 0) {
                            *(iVar16 + 8) = piVar4;
                            piVar11[10] = iVar16;
                            piVar11[0xb] = piVar3;
                            *piVar3 = piVar4;
                        }
                    }
                    iVar9 = of_get_next_available_child(uVar14,iVar9);
                } while ((iVar9 != 0) && (iVar15 = iVar15 + 1, iVar15 < uVar1));
            }
            *0x8000004 = iVar8 >> 0x20;
            _segment.ehdr = CONCAT44(*0x8000004,uVar1);
            if (uVar17 < 0x7fffffff) {
                iVar9 = 0x178;
                iVar15 = 1;
                while( true ) {
                    piVar5 = iVar8 + iVar9 + 8;
                    if (piVar5 != *piVar5) {
                        iVar16 = iVar8 + iVar9 + -0x170;
                        iVar7 = qmi_handle_init(iVar16,0xccf,
                                                reloc.thermal_qmi_new_server.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0)
                        ;
                        if (iVar7 < 0) {
                            _dev_err(iVar2,"QMI[0x%x] handle init failed. err:%d\n",*(iVar8 + iVar9),iVar7);
                            _segment.ehdr = CONCAT44(*0x8000004,iVar15 + -1);
                            goto code_r0x08002504;
                        }
                        iVar7 = qmi_add_lookup(iVar16,0x18,1,*(iVar8 + iVar9));
                        if (iVar7 < 0) {
                            _dev_err(iVar2,"QMI register failed for 0x%x, ret:%d\n",*(iVar8 + iVar9),iVar7);
                            goto code_r0x08002504;
                        }
                    }
                    if (_segment.ehdr <= iVar15) break;
                    iVar9 = iVar9 + 0x1c0;
                    iVar15 = iVar15 + 1;
                    iVar8 = _segment.ehdr;
                }
            }
            iVar7 = 0;
            goto code_r0x080025a4;
        }
code_r0x08002500:
        iVar7 = -0xc;
    }
code_r0x08002504:
    sym.qmi_tmd_cleanup();
code_r0x080025a4:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_68) {
        return iVar7;
    }
    __stack_chk_fail();
    *extraout_x18 = 0x8002664;
    sym.qmi_tmd_cleanup();
    return 0;
}


// ===== sym.qmi_set_cur_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002210 (size 8) =====

ulong sym.qmi_set_cur_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,uint64_t param_2)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x3a8);
    if ((arg1 == 0) || (*(arg1 + 0x6c) < param_2)) {
        uVar1 = 0xffffffea;
    }
    else if (*(arg1 + 0x68) == param_2) {
        uVar1 = 0;
    }
    else {
        if (*(arg1 + 0x48) == '\0') {
            uVar1 = 0;
        }
        else {
            uVar1 = sym.qmi_tmd_send_state_request(arg1,param_2 & 0xffffffff);
        }
        *(arg1 + 0x68) = param_2;
    }
    return uVar1;
}


// ===== sym.__cfi_check_fail @ 0x08002218 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800225c

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
    //switch table (4 cases) at 0x8000f28
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002270);
    (*pcVar1)();
}


// ===== sym.qmi_device_probe @ 0x08002270 (size 1016) =====

uint64_t sym.qmi_device_probe(int64_t arg1)

{
    uint32_t uVar1;
    int64_t *piVar2;
    uchar auVar3 [16];
    uint32_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *puVar7;
    int64_t iVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar10;
    int64_t iVar11;
    int64_t iVar12;
    uint32_t uVar13;
    ulong unaff_x30;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iVar8 = arg1 + 0x10;
    iStack_68 = *(iVar5 + 0x5e0);
    uVar10 = *(arg1 + 0x300);
    iVar5 = of_get_next_available_child(uVar10,0);
    if (iVar5 == 0) {
code_r0x080025e4:
        _dev_err(iVar8,"No child node to process\n");
        uVar4 = 0xfffffff2;
    }
    else {
        uVar1 = 0;
        do {
            uVar13 = uVar1;
            uVar1 = uVar13 + 1;
            iVar5 = of_get_next_available_child(uVar10,iVar5);
        } while (iVar5 != 0);
        if (uVar1 == 0) goto code_r0x080025e4;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar1;
        if ((SUB168(auVar3 * ZEXT816(0x1c0),8) == 0) &&
           (iVar5 = devm_kmalloc(iVar8,uVar1 * 0x1c0,0xdc0), iVar5 != 0)) {
            iVar6 = of_get_next_available_child(uVar10,0);
            if ((iVar6 != 0) && (uVar13 < 0x7fffffff)) {
                iVar11 = 0;
                do {
                    piVar2 = iVar5 + iVar11 * 0x1c0;
                    uVar4 = of_property_read_variable_u32_array(iVar6,"qcom,instance-id",piVar2 + 0x2f,1,0);
                    if (uVar4 < 0) {
                        _dev_err(iVar8,"error reading qcom,insance-id. ret:%d\n",uVar4);
                        goto code_r0x08002504;
                    }
                    iVar12 = iVar5 + iVar11 * 0x1c0;
                    *piVar2 = iVar8;
                    __mutex_init(iVar12 + 0x148,"&tmd[idx].mutex",obj.of_get_qmi_tmd_platform_data.__key);
                    *(iVar12 + 0x180) = iVar12 + 0x180;
                    *(iVar12 + 0x188) = iVar12 + 0x180;
                    *(iVar12 + 400) = 0xfffffffe0;
                    *(iVar12 + 0x198) = iVar12 + 0x198;
                    *(iVar12 + 0x1a0) = iVar12 + 0x198;
                    *(iVar12 + 0x1a8) = sym.qmi_tmd_svc_arrive.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    puVar7 = of_get_next_available_child(iVar6,0);
                    if (puVar7 != NULL) {
                        uStack_70 = 0;
                        iVar8 = devm_kmalloc(iVar8,0x78,0xdc0);
                        if (iVar8 != 0) {
                            strscpy(iVar8 + 8,*puVar7,0x20);
                            uVar9 = of_property_read_string(puVar7,"qcom,qmi-dev-name",&stack0xffffffffffffff90);
                            return uVar9;
                        }
                        goto code_r0x08002500;
                    }
                    iVar6 = of_get_next_available_child(uVar10,iVar6);
                } while ((iVar6 != 0) && (iVar11 = iVar11 + 1, iVar11 < uVar1));
            }
            *0x8000004 = iVar5 >> 0x20;
            _segment.ehdr = CONCAT44(*0x8000004,uVar1);
            if (uVar13 < 0x7fffffff) {
                iVar6 = 0x178;
                iVar11 = 1;
                while( true ) {
                    piVar2 = iVar5 + iVar6 + 8;
                    if (piVar2 != *piVar2) {
                        iVar12 = iVar5 + iVar6 + -0x170;
                        uVar4 = qmi_handle_init(iVar12,0xccf,
                                                reloc.thermal_qmi_new_server.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0)
                        ;
                        if (uVar4 < 0) {
                            _dev_err(iVar8,"QMI[0x%x] handle init failed. err:%d\n",*(iVar5 + iVar6),uVar4);
                            _segment.ehdr = CONCAT44(*0x8000004,iVar11 + -1);
                            goto code_r0x08002504;
                        }
                        uVar4 = qmi_add_lookup(iVar12,0x18,1,*(iVar5 + iVar6));
                        if (uVar4 < 0) {
                            _dev_err(iVar8,"QMI register failed for 0x%x, ret:%d\n",*(iVar5 + iVar6),uVar4);
                            goto code_r0x08002504;
                        }
                    }
                    if (_segment.ehdr <= iVar11) break;
                    iVar6 = iVar6 + 0x1c0;
                    iVar11 = iVar11 + 1;
                    iVar5 = _segment.ehdr;
                }
            }
            uVar4 = 0;
            goto code_r0x080025a4;
        }
code_r0x08002500:
        uVar4 = 0xfffffff4;
    }
code_r0x08002504:
    sym.qmi_tmd_cleanup();
code_r0x080025a4:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
        *extraout_x18 = 0x8002664;
        sym.qmi_tmd_cleanup();
        return 0;
    }
    return uVar4;
}


// ===== sym.qmi_device_remove @ 0x08002668 (size 40) =====

ulong sym.qmi_device_remove(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qmi_tmd_cleanup();
    return 0;
}


// ===== sym.qmi_tmd_cleanup @ 0x08002690 (size 256) =====

void sym.qmi_tmd_cleanup(void)

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
        iVar3 = CONCAT44(*0x8000004,_segment.ehdr);
        do {
            iVar7 = iVar3 + iVar6 * 0x1c0;
            mutex_lock(iVar7 + 0x148);
            piVar4 = *(iVar7 + 0x180);
            while (iVar7 + 0x180 != piVar4) {
                *(piVar4 + -1) = 0;
                piVar8 = *piVar4;
                if (piVar4[2] != 0) {
                    thermal_cooling_device_unregister();
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
            mutex_unlock(iVar7 + 0x148);
            iVar6 = iVar6 + 1;
        } while (iVar6 < _segment.ehdr);
    }
    return;
}


// ===== sym.qmi_tmd_svc_arrive @ 0x08002790 (size 868) =====

uint64_t sym.qmi_tmd_svc_arrive(int64_t arg1)

{
    int64_t *piVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    uint16_t *puVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong uVar8;
    uint uVar9;
    int64_t iVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    uint16_t *unaff_x19;
    int64_t unaff_x21;
    int64_t iVar11;
    int64_t unaff_x22;
    int64_t *unaff_x23;
    uint64_t uVar12;
    ulong unaff_x30;
    uchar auVar13 [12];
    uchar auVar14 [16];
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    uint32_t uStack_134;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ushort uStack_110;
    int64_t iStack_108;
    uchar *puStack_100;
    code *pcStack_f8;
    int64_t *piStack_f0;
    int64_t iStack_e0;
    int64_t iStack_d8;
    code *pcStack_d0;
    uint16_t *puStack_c8;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    uchar auStack_6c [4];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_68 = *(iVar10 + 0x5e0);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_b8 = 0;
    auStack_6c[0] = 0;
    puVar5 = kmem_cache_alloc_trace(___ubsan_handle_cfi_check_fail_abort,0xdc0,0xcd4);
    uVar12 = 0;
    puStack_c8 = unaff_x19;
    if (puVar5 != NULL) {
        unaff_x22 = arg1 + -400;
        pcVar2 = arg1 + -0x48;
        mutex_lock(pcVar2);
        unaff_x21 = arg1 + -0x188;
        uVar3 = qmi_txn_init(unaff_x21,&uStack_b8,obj.tmd_get_mitigation_device_list_resp_msg_v01_ei,puVar5);
        if (uVar3 < 0) {
            uVar9 = *(arg1 + -0x18);
            uVar8 = 0x800107b;
            goto code_r0x08002ad4;
        }
        iVar4 = qmi_send_request(unaff_x21,0,&uStack_b8,0x20,0,obj.tmd_mitigation_dev_list_type_v01_ei,auStack_6c)
        ;
        if (iVar4 < 0) {
            qmi_txn_cancel(&uStack_b8);
code_r0x08002964:
            mutex_unlock(pcVar2);
        }
        else {
            uVar3 = qmi_txn_wait(&uStack_b8,0x19);
            if (uVar3 < 0) {
                uVar9 = *(arg1 + -0x18);
                uVar8 = 0x80011b4;
code_r0x08002ad4:
                _printk(uVar8,"qti_qmi_cdev","verify_devices_and_register",uVar9,uVar3);
                goto code_r0x08002964;
            }
            uVar3 = *puVar5;
            if (*puVar5 != 0) {
                uVar9 = *(arg1 + -0x18);
                uVar8 = 0x8000f75;
                goto code_r0x08002ad4;
            }
            mutex_unlock(pcVar2);
            piVar1 = arg1 + -0x10;
            if (*(puVar5 + 4) != 0) {
                uVar12 = 0;
                unaff_x21 = 0x22;
                unaff_x22 = 1;
                pcVar2 = reloc.qmi_get_max_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                do {
                    unaff_x23 = *piVar1;
                    if (piVar1 != unaff_x23) {
                        if (0x20 < uVar12) goto code_r0x08002aec;
                        do {
                            iVar4 = strncasecmp(unaff_x23 + -5,puVar5 + uVar12 * 0x11 + 6,0x20);
                            if (iVar4 == 0) {
                                *(unaff_x23 + -1) = 1;
                                *(unaff_x23 + 0x1c) = *(puVar5 + uVar12 * 0x22 + 0x2d);
                                sym.qmi_tmd_send_state_request(unaff_x23 + -10,*(unaff_x23 + 3));
                                if (unaff_x23[2] == 0) {
                                    uVar6 = thermal_of_cooling_device_register
                                                      (unaff_x23[-10],unaff_x23 + -9,unaff_x23 + -10,
                                                       reloc.qmi_get_max_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
                                    unaff_x23[2] = uVar6;
                                    if (0xfffffffffffff000 < uVar6) {
                                        _printk(0x8001130,"qti_qmi_cdev","qmi_register_cooling_device",unaff_x23 + -9
                                                ,uVar6);
                                    }
                                }
                                break;
                            }
                            unaff_x23 = *unaff_x23;
                        } while (piVar1 != unaff_x23);
                    }
                    uVar12 = uVar12 + 1;
                } while (uVar12 < *(puVar5 + 4));
            }
            if (puVar5[0x226] != '\0') {
                uVar12 = 0;
                unaff_x21 = 0x22;
                unaff_x22 = 1;
                pcVar2 = reloc.qmi_get_max_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                do {
                    if (*(puVar5 + 0x228) <= uVar12) break;
                    unaff_x23 = *piVar1;
                    if (piVar1 != unaff_x23) {
                        if (0x40 < uVar12) {
code_r0x08002aec:
    //WARNING: Does not return
                            pcVar2 = SoftwareBreakpoint(0x5512,0x8002af0);
                            (*pcVar2)();
                        }
                        do {
                            iVar4 = strncasecmp(unaff_x23 + -5,puVar5 + uVar12 * 0x11 + 0x22a,0x20);
                            if (iVar4 == 0) {
                                *(unaff_x23 + -1) = 1;
                                *(unaff_x23 + 0x1c) = *(puVar5 + uVar12 * 0x22 + 0x475);
                                sym.qmi_tmd_send_state_request(unaff_x23 + -10,*(unaff_x23 + 3));
                                if (unaff_x23[2] == 0) {
                                    uVar6 = thermal_of_cooling_device_register
                                                      (unaff_x23[-10],unaff_x23 + -9,unaff_x23 + -10,
                                                       reloc.qmi_get_max_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
                                    unaff_x23[2] = uVar6;
                                    if (0xfffffffffffff000 < uVar6) {
                                        _printk(0x8001130,"qti_qmi_cdev","qmi_register_cooling_device",unaff_x23 + -9
                                                ,uVar6);
                                    }
                                }
                                break;
                            }
                            unaff_x23 = *unaff_x23;
                        } while (piVar1 != unaff_x23);
                    }
                    uVar12 = uVar12 + 1;
                } while (puVar5[0x226] != '\0');
            }
        }
        uVar12 = kfree(puVar5);
        puStack_c8 = puVar5;
        arg1 = pcVar2;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return uVar12;
    }
    auVar13 = __stack_chk_fail();
    iVar7 = auVar13._0_8_;
    *extraout_x18 = sym.qmi_tmd_send_state_request;
    pcStack_f8 = sym.qmi_tmd_send_state_request;
    iVar10 = sp_el0;
    iStack_108 = *(iVar10 + 0x5e0);
    iVar11 = *(iVar7 + 0x70);
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_180 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_134 = 0;
    puStack_100 = &stack0xffffffffffffffa0;
    piStack_f0 = unaff_x23;
    iStack_e0 = unaff_x22;
    iStack_d8 = unaff_x21;
    pcStack_d0 = arg1;
    strscpy(&uStack_130,iVar7 + 0x28,0x20);
    iVar10 = iVar11 + 0x148;
    uStack_110 = CONCAT11(auVar13[8],uStack_110);
    mutex_lock(iVar10);
    iVar11 = iVar11 + 8;
    uVar3 = qmi_txn_init(iVar11,&uStack_180,obj.tmd_set_mitigation_level_resp_msg_v01_ei,&uStack_134);
    if (uVar3 < 0) {
        uVar8 = 0x8000fb2;
    }
    else {
        uVar3 = qmi_send_request(iVar11,0,&uStack_180,0x21,0x28,obj.tmd_set_mitigation_level_req_msg_v01_ei,
                                 &uStack_130);
        if (uVar3 < 0) {
            _printk(0x8001220,"qti_qmi_cdev","qmi_tmd_send_state_request",auVar13._8_4_ & 0xff,iVar7 + 8,uVar3);
            qmi_txn_cancel(&uStack_180);
            goto code_r0x08002bd4;
        }
        uVar3 = qmi_txn_wait(&uStack_180,0x19);
        if (uVar3 < 0) {
            uVar8 = 0x8000f3d;
        }
        else {
            uVar3 = uStack_134 & 0xffff;
            if (uStack_134 == 0) goto code_r0x08002bd4;
            uVar8 = 0x80011ec;
        }
    }
    _printk(uVar8,"qti_qmi_cdev","qmi_tmd_send_state_request",auVar13._8_4_ & 0xff,iVar7 + 8,uVar3);
code_r0x08002bd4:
    mutex_unlock(iVar10);
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_108) {
        return uVar3;
    }
    auVar14 = __stack_chk_fail();
    iVar10 = *(auVar14._0_8_ + 0x3a8);
    if (iVar10 == 0) {
        return 0xffffffea;
    }
    *auVar14._8_8_ = *(iVar10 + 0x6c);
    return 0;
}


// ===== sym.qmi_tmd_send_state_request @ 0x08002af4 (size 436) =====

uint32_t sym.qmi_tmd_send_state_request(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    uchar auVar5 [16];
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    uint32_t uStack_74;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ushort uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    iVar4 = *(arg1 + 0x70);
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c0 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_74 = 0;
    strscpy(&uStack_70,arg1 + 0x28,0x20);
    iVar3 = iVar4 + 0x148;
    uStack_50 = CONCAT11(arg2,uStack_50);
    mutex_lock(iVar3);
    iVar4 = iVar4 + 8;
    uVar1 = qmi_txn_init(iVar4,&uStack_c0,obj.tmd_set_mitigation_level_resp_msg_v01_ei,&uStack_74);
    if (uVar1 < 0) {
        uVar2 = 0x8000fb2;
    }
    else {
        uVar1 = qmi_send_request(iVar4,0,&uStack_c0,0x21,0x28,obj.tmd_set_mitigation_level_req_msg_v01_ei,
                                 &uStack_70);
        if (uVar1 < 0) {
            _printk(0x8001220,"qti_qmi_cdev","qmi_tmd_send_state_request",arg2 & 0xff,arg1 + 8,uVar1);
            qmi_txn_cancel(&uStack_c0);
            goto code_r0x08002bd4;
        }
        uVar1 = qmi_txn_wait(&uStack_c0,0x19);
        if (uVar1 < 0) {
            uVar2 = 0x8000f3d;
        }
        else {
            uVar1 = uStack_74 & 0xffff;
            if (uStack_74 == 0) goto code_r0x08002bd4;
            uVar2 = 0x80011ec;
        }
    }
    _printk(uVar2,"qti_qmi_cdev","qmi_tmd_send_state_request",arg2 & 0xff,arg1 + 8,uVar1);
code_r0x08002bd4:
    mutex_unlock(iVar3);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return uVar1;
    }
    auVar5 = __stack_chk_fail();
    iVar3 = *(auVar5._0_8_ + 0x3a8);
    if (iVar3 != 0) {
        *auVar5._8_8_ = *(iVar3 + 0x6c);
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.qmi_get_max_state @ 0x08002ca8 (size 44) =====

ulong sym.qmi_get_max_state(int64_t arg1,int64_t arg2)

{
    if (*(arg1 + 0x3a8) != 0) {
        *arg2 = *(*(arg1 + 0x3a8) + 0x6c);
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.qmi_get_cur_state @ 0x08002cd4 (size 44) =====

ulong sym.qmi_get_cur_state(int64_t arg1,int64_t arg2)

{
    if (*(arg1 + 0x3a8) != 0) {
        *arg2 = *(*(arg1 + 0x3a8) + 0x68);
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.qmi_set_cur_state @ 0x08002d00 (size 124) =====

ulong sym.qmi_set_cur_state(int64_t arg1,uint32_t arg2)

{
    ulong uVar1;
    uint64_t arg2_00;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    arg2_00 = arg2;
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x3a8);
    if ((arg1_00 == 0) || (*(arg1_00 + 0x6c) < arg2_00)) {
        uVar1 = 0xffffffea;
    }
    else if (*(arg1_00 + 0x68) == arg2_00) {
        uVar1 = 0;
    }
    else {
        if (*(arg1_00 + 0x48) == '\0') {
            uVar1 = 0;
        }
        else {
            uVar1 = sym.qmi_tmd_send_state_request(arg1_00,arg2_00);
        }
        *(arg1_00 + 0x68) = arg2;
    }
    return uVar1;
}


// ===== sym.thermal_qmi_new_server @ 0x08002d7c (size 168) =====

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
    queue_work_on(0x20,_devm_kmalloc,arg1 + 0x188);
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


// ===== sym.thermal_qmi_del_server @ 0x08002e24 (size 44) =====

void sym.thermal_qmi_del_server(int64_t arg1)

{
    int64_t *piVar1;
    
    for (piVar1 = *(arg1 + 0x178); piVar1 != arg1 + 0x178; piVar1 = *piVar1) {
        *(piVar1 + -1) = 0;
    }
    return;
}


// ===== sym.thermal_qmi_net_reset @ 0x08002e50 (size 88) =====

void sym.thermal_qmi_net_reset(int64_t arg1)

{
    ulong *in_x18;
    ulong *puVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    for (puVar1 = *(arg1 + 0x178); puVar1 != arg1 + 0x178; puVar1 = *puVar1) {
        if (*(puVar1 + -1) != '\0') {
            sym.qmi_tmd_send_state_request(puVar1 + -10,*(puVar1 + 3));
        }
    }
    return;
}


// ===== sym.init_module @ 0x08002eb4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qmi_device_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08002ee8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qmi_device_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}

