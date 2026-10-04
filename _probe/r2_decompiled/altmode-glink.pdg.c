// decompiled from altmode-glink by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 560) =====

//WARNING: Switch with 1 destination removed at 0x08002388

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x21957e5b96463466) {
        if (arg1 < -0x3557318fb8d07b71) {
            if (arg1 == -0x551d0acc4b13f5f7) {
                pcVar2 = sym.altmode_register_notifier.cfi_jt;
            }
            else {
                if (arg1 == -0x550b9e52359ac614) {
                    if ((pcVar1 + -0x8001270 >> 3 | pcVar1 << 0x3d) < 3) {
                        return;
                    }
                    goto code_r0x08002348;
                }
                if (arg1 != -0x4ae0be2e55bc34e8) goto code_r0x08002348;
                pcVar2 = sym.altmode_deregister_client.cfi_jt;
            }
        }
        else {
            if (arg1 == -0x3557318fb8d07b71) {
                if ((pcVar1 + -0x8001298 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08002348;
            }
            if (arg1 == -0x2ee0710dce68437c) {
                pcVar2 = sym.delayed_work_timer_fn.cfi_jt;
            }
            else {
                if (arg1 != -0x2d1ef4d8549a89e5) goto code_r0x08002348;
                pcVar2 = sym.altmode_deregister_notifier.cfi_jt;
            }
        }
    }
    else if (arg1 < 0x270677cd32fe9fb0) {
        if (arg1 == -0x21957e5b96463466) {
            pcVar2 = sym.altmode_send_data.cfi_jt;
        }
        else if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x268e9722c14a4592) goto code_r0x08002348;
            pcVar2 = sym.__typeid__ZTSFiPvS_mE_global_addr;
        }
    }
    else if (arg1 == 0x270677cd32fe9fb0) {
        pcVar2 = sym.altmode_state_cb.2cbc27abfbd7ad4b3b738befddff02f6.cfi_jt;
    }
    else if (arg1 == 0x7e04a0fb7ad8bcd5) {
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    else {
        if (arg1 != 0x7e6289290def9be9) goto code_r0x08002348;
        pcVar2 = sym.altmode_register_client.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08002348:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800239c);
    (*pcVar1)();
}


// ===== sym.altmode_state_cb.2cbc27abfbd7ad4b3b738befddff02f6.cfi_jt @ 0x08001238 (size 8) =====

void sym.altmode_state_cb.2cbc27abfbd7ad4b3b738befddff02f6.cfi_jt(int64_t param_1,int param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ipc_log_string(_segment.ehdr,"state: %d\n",param_2);
    if (param_2 == 1) {
        mutex_lock(param_1 + 0x28);
        if (*(param_1 + 0x68) != param_1 + 0x68) {
            queue_delayed_work_on(0x20,_mutex_lock,param_1 + 0x80,5);
        }
        mutex_unlock(param_1 + 0x28);
    }
    return;
}


// ===== sym.delayed_work_timer_fn.cfi_jt @ 0x08001240 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.delayed_work_timer_fn.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001248 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.altmode_probe.2cbc27abfbd7ad4b3b738befddff02f6.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001250 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.altmode_probe.2cbc27abfbd7ad4b3b738befddff02f6.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.altmode_deregister_notifier.cfi_jt @ 0x08001258 (size 8) =====

int64_t * sym.altmode_deregister_notifier.cfi_jt(code *param_1,int64_t param_2,char *param_3)

{
    int64_t *piVar1;
    int16_t iVar2;
    uint32_t uVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int16_t *piVar8;
    code *pcVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t unaff_x19;
    code *unaff_x20;
    int64_t iVar10;
    int64_t *piVar11;
    int64_t *piVar12;
    int64_t iVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
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
    ulong uStack_d0;
    uint uStack_c8;
    ulong uStack_c4;
    uint uStack_bc;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    code *pcStack_a0;
    int64_t iStack_98;
    int64_t aiStack_88 [11];
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    aiStack_88[10] = *(iVar10 + 0x5e0);
    aiStack_88[8] = 0;
    aiStack_88[9] = 0;
    aiStack_88[6] = 0;
    aiStack_88[7] = 0;
    aiStack_88[4] = 0;
    aiStack_88[5] = 0;
    aiStack_88[2] = 0;
    aiStack_88[3] = 0;
    aiStack_88[0] = 0;
    aiStack_88[1] = 0;
    if (param_1 == NULL) {
        piVar12 = 0xffffffea;
    }
    else {
        param_3 = "#altmode-cells";
        uVar3 = of_parse_phandle_with_args(*(param_1 + 0x2f0),"qcom,altmode-dev","#altmode-cells",0,aiStack_88);
        iVar10 = aiStack_88[0];
        unaff_x19 = param_2;
        if (uVar3 == 0) {
            mutex_lock(obj.notify_lock);
            unaff_x20 = _obj.probe_notify_list;
            if (_obj.probe_notify_list != obj.probe_notify_list) {
                do {
                    pcVar9 = *unaff_x20;
                    if ((*(unaff_x20 + 0x10) == iVar10) && (*(unaff_x20 + 0x20) == param_2)) {
                        uVar7 = __list_del_entry_valid(unaff_x20);
                        if ((uVar7 & 1) != 0) {
                            iVar10 = *unaff_x20;
                            piVar12 = *(unaff_x20 + 8);
                            *(iVar10 + 8) = piVar12;
                            *piVar12 = iVar10;
                        }
                        *unaff_x20 = -0x2152ffffffffff00;
                        *(unaff_x20 + 8) = -0x2152fffffffffede;
                        kfree(unaff_x20);
                        break;
                    }
                    unaff_x20 = pcVar9;
                } while (pcVar9 != obj.probe_notify_list);
            }
            mutex_unlock(obj.notify_lock);
            piVar12 = NULL;
        }
        else {
            piVar12 = uVar3;
            param_3 = piVar12;
            _dev_err(param_1,"Error parsing qcom,altmode-dev property: %d\n");
            unaff_x20 = param_1;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == aiStack_88[10]) {
        return piVar12;
    }
    piVar12 = __stack_chk_fail();
    *extraout_x18 = sym.altmode_send_data;
    pcStack_a8 = sym.altmode_send_data;
    iVar10 = sp_el0;
    iStack_b8 = *(iVar10 + 0x5e0);
    iVar10 = *piVar12;
    uStack_bc = 0;
    uStack_c4 = 0;
    puStack_b0 = &stack0xffffffffffffffd0;
    pcStack_a0 = unaff_x20;
    iStack_98 = unaff_x19;
    if (param_3 < 0x9) {
        uStack_d0 = 0x10000800c;
        uStack_c8 = 0x15;
        memcpy(&uStack_c4);
        *(iVar10 + 0x198) = 0;
        uVar3 = pmic_glink_write(*(iVar10 + 8),&uStack_d0,0x18);
        if (uVar3 == 0) {
            iVar4 = wait_for_completion_timeout(iVar10 + 0x198,0xfa);
            if (iVar4 != 0) {
                piVar12 = NULL;
                goto code_r0x08001644;
            }
            piVar12 = 0xffffff92;
        }
        else {
            piVar12 = uVar3;
        }
        _printk(0x80005ab,"altmode_write",piVar12);
    }
    else {
        _printk(0x8000276,"__altmode_send_data");
        piVar12 = 0xffffffea;
    }
code_r0x08001644:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_b8) {
        return piVar12;
    }
    auVar14 = __stack_chk_fail();
    piVar8 = auVar14._8_8_;
    iVar6 = auVar14._0_8_;
    *extraout_x18_00 = sym.altmode_register_client;
    pcStack_108 = sym.altmode_register_client;
    iVar10 = sp_el0;
    piVar12 = 0xffffffffffffffea;
    iStack_118 = *(iVar10 + 0x5e0);
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    ppuStack_110 = &puStack_b0;
    if ((iVar6 != 0) && (piVar8 != NULL)) {
        if ((*(piVar8 + 4) != 0) && (((*(piVar8 + 8) != 0 && (*(piVar8 + 0xc) != 0)) && (*piVar8 != 0)))) {
            iVar4 = of_parse_phandle_with_args(*(iVar6 + 0x2f0),"qcom,altmode-dev","#altmode-cells",0,&uStack_168);
            if (iVar4 != 0) {
                _dev_err(iVar6,"Error parsing qcom,altmode-dev property: %d\n",iVar4);
                piVar12 = iVar4;
                goto code_r0x080018e8;
            }
            if (uStack_160 == 1) {
                if (uStack_160._4_4_ < 4) {
                    iVar10 = of_find_device_by_node(uStack_168);
                    if ((iVar10 == 0) || (iVar10 = *(iVar10 + 0xa8), iVar10 == 0)) {
                        piVar12 = 0xfffffffffffffdfb;
                    }
                    else {
                        piVar12 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xdc0,0x80);
                        if (piVar12 == NULL) {
                            piVar12 = 0xfffffffffffffff4;
                        }
                        else {
                            *piVar12 = iVar10;
                            iVar2 = *piVar8;
                            *(piVar12 + 7) = uStack_160 >> 0x20;
                            iVar6 = *(piVar8 + 8);
                            iVar13 = *(piVar8 + 0xc);
                            *(piVar12 + 1) = iVar2;
                            piVar12[8] = 0xfffffffe0;
                            piVar12[3] = iVar6;
                            piVar12[4] = iVar13;
                            piVar12[9] = piVar12 + 9;
                            piVar12[10] = piVar12 + 9;
                            uVar5 = *(piVar8 + 4);
                            piVar12[0xb] = sym.client_cb_work.2cbc27abfbd7ad4b3b738befddff02f6.cfi_jt;
                            iVar6 = kstrdup(uVar5,0xcc0);
                            piVar12[2] = iVar6;
                            if (iVar6 == 0) {
                                kfree(piVar12);
                                piVar12 = 0xfffffffffffffff4;
                            }
                            else {
                                iVar6 = iVar10 + 0x28;
                                mutex_lock(iVar6);
                                uVar3 = CONCAT21(piVar12[1],piVar12[7]);
                                iVar4 = idr_alloc(iVar10 + 0x10,piVar12,uVar3,uVar3 + 1,0xcc0);
                                if (iVar4 < 0) {
                                    _printk(0x8000341,"altmode_register_client",*(piVar8 + 4),iVar4);
                                    mutex_unlock(iVar6);
                                    kfree(piVar12[2]);
                                    kfree(piVar12);
                                    piVar12 = iVar4;
                                }
                                else {
                                    piVar1 = piVar12 + 5;
                                    piVar11 = iVar10 + 0x68;
                                    iVar13 = *piVar11;
                                    uVar7 = __list_add_valid(piVar1,piVar11,iVar13);
                                    if ((uVar7 & 1) != 0) {
                                        *(iVar13 + 8) = piVar1;
                                        piVar12[5] = iVar13;
                                        piVar12[6] = piVar11;
                                        *piVar11 = piVar1;
                                    }
                                    mutex_unlock(iVar6);
                                    if (*(iVar10 + 0x78) == 0) {
                                        queue_delayed_work_on(0x20,_mutex_lock,iVar10 + 0x80,5);
                                    }
                                }
                            }
                        }
                    }
                    goto code_r0x080018e8;
                }
                _dev_err(iVar6,"Invalid port_index: %d, max is %d\n",uStack_160._4_4_,3);
            }
            else {
                _dev_err(iVar6,"Error in port_index specification\n");
            }
        }
        piVar12 = 0xffffffffffffffea;
    }
code_r0x080018e8:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) != iStack_118) {
        iVar10 = __stack_chk_fail();
        *extraout_x18_01 = 0x8001964;
        pcVar9 = *(iVar10 + -0x20);
        if (pcVar9 != sym.__typeid__ZTSFiPvS_mE_global_addr) {
            __cfi_slowpath_diag(0x268e9722c14a4592,pcVar9,0x8000200);
        }
        piVar12 = (*pcVar9)(*(iVar10 + -0x28),iVar10 + 0x30,0x10);
        return piVar12;
    }
    return piVar12;
}


// ===== sym.altmode_register_notifier.cfi_jt @ 0x08001260 (size 8) =====

code * sym.altmode_register_notifier.cfi_jt(int64_t param_1,code *param_2,code *param_3)

{
    int16_t iVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong uVar6;
    uint64_t uVar7;
    int16_t *piVar8;
    char *pcVar9;
    code *pcVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    code *unaff_x19;
    code *unaff_x20;
    int64_t iVar11;
    int64_t unaff_x21;
    code *pcVar12;
    code *pcVar13;
    int64_t iVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
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
    uchar ***pppuStack_1b0;
    code *pcStack_1a8;
    ulong uStack_170;
    uint uStack_168;
    ulong uStack_164;
    uint uStack_15c;
    int64_t iStack_158;
    uchar **ppuStack_150;
    code *pcStack_148;
    code *pcStack_140;
    code *pcStack_138;
    int64_t aiStack_128 [11];
    uchar *puStack_d0;
    code *pcStack_c8;
    int64_t iStack_c0;
    code *pcStack_b0;
    code *pcStack_a8;
    int64_t aiStack_98 [11];
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    pcVar13 = 0xffffffea;
    aiStack_98[10] = *(iVar11 + 0x5e0);
    aiStack_98[8] = 0;
    aiStack_98[9] = 0;
    aiStack_98[6] = 0;
    aiStack_98[7] = 0;
    aiStack_98[4] = 0;
    aiStack_98[5] = 0;
    aiStack_98[2] = 0;
    aiStack_98[3] = 0;
    aiStack_98[0] = 0;
    aiStack_98[1] = 0;
    pcVar9 = param_3;
    pcStack_138 = unaff_x19;
    pcStack_140 = unaff_x20;
    iStack_c0 = unaff_x21;
    if (((param_1 != 0) && (pcStack_138 = param_2, param_2 != NULL)) && (pcStack_140 = param_3, param_3 != NULL)) {
        uVar2 = of_parse_phandle_with_args(*(param_1 + 0x2f0),"qcom,altmode-dev","#altmode-cells",0,aiStack_98);
        iVar11 = aiStack_98[0];
        if (uVar2 == 0) {
            mutex_lock(obj.notify_lock);
            iVar4 = of_find_device_by_node(iVar11);
            iStack_c0 = iVar11;
            if ((iVar4 == 0) || (*(iVar4 + 0xa8) == 0)) {
                pcVar9 = 0x28;
                iVar4 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar4 = 0x30;
                }
                pcVar13 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar4),0xdc0);
                if (pcVar13 == NULL) {
                    mutex_unlock(obj.notify_lock);
                    pcVar13 = 0xfffffff4;
                    goto code_r0x08001428;
                }
                *(pcVar13 + 0x18) = param_2;
                *(pcVar13 + 0x20) = param_3;
                *(pcVar13 + 0x10) = iVar11;
                param_3 = _obj.probe_notify_list;
                pcVar9 = _obj.probe_notify_list;
                uVar7 = __list_add_valid(pcVar13,obj.probe_notify_list);
                if ((uVar7 & 1) != 0) {
                    *(param_3 + 8) = pcVar13;
                    *pcVar13 = param_3;
                    *(pcVar13 + 8) = obj.probe_notify_list;
                    _obj.probe_notify_list = pcVar13;
                }
            }
            else {
                pcVar9 = 0x80001e0;
                __cfi_slowpath_diag(0x4c550309df1cf4c1,param_2);
                (*param_2)(param_3);
            }
            mutex_unlock(obj.notify_lock);
            pcVar13 = NULL;
            pcStack_140 = param_3;
        }
        else {
            pcVar13 = uVar2;
            pcVar9 = pcVar13;
            _dev_err(param_1,"Error parsing qcom,altmode-dev property: %d\n");
            iStack_c0 = param_1;
        }
    }
code_r0x08001428:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == aiStack_98[10]) {
        return pcVar13;
    }
    auVar15 = __stack_chk_fail();
    pcVar12 = auVar15._8_8_;
    pcVar13 = auVar15._0_8_;
    *extraout_x18 = sym.altmode_deregister_notifier;
    pcStack_c8 = sym.altmode_deregister_notifier;
    iVar11 = sp_el0;
    aiStack_128[10] = *(iVar11 + 0x5e0);
    aiStack_128[8] = 0;
    aiStack_128[9] = 0;
    aiStack_128[6] = 0;
    aiStack_128[7] = 0;
    aiStack_128[4] = 0;
    aiStack_128[5] = 0;
    aiStack_128[2] = 0;
    aiStack_128[3] = 0;
    aiStack_128[0] = 0;
    aiStack_128[1] = 0;
    puStack_d0 = &stack0xffffffffffffffc0;
    pcStack_b0 = pcStack_140;
    pcStack_a8 = pcStack_138;
    if (pcVar13 == NULL) {
        pcVar12 = 0xffffffea;
    }
    else {
        pcVar9 = "#altmode-cells";
        uVar2 = of_parse_phandle_with_args(*(pcVar13 + 0x2f0),"qcom,altmode-dev","#altmode-cells",0,aiStack_128);
        iVar11 = aiStack_128[0];
        pcStack_138 = pcVar12;
        if (uVar2 == 0) {
            mutex_lock(obj.notify_lock);
            pcVar13 = _obj.probe_notify_list;
            if (_obj.probe_notify_list != obj.probe_notify_list) {
                do {
                    pcVar10 = *pcVar13;
                    if ((*(pcVar13 + 0x10) == iVar11) && (*(pcVar13 + 0x20) == pcVar12)) {
                        uVar7 = __list_del_entry_valid(pcVar13);
                        if ((uVar7 & 1) != 0) {
                            iVar11 = *pcVar13;
                            piVar5 = *(pcVar13 + 8);
                            *(iVar11 + 8) = piVar5;
                            *piVar5 = iVar11;
                        }
                        *pcVar13 = -0x2152ffffffffff00;
                        *(pcVar13 + 8) = -0x2152fffffffffede;
                        kfree(pcVar13);
                        break;
                    }
                    pcVar13 = pcVar10;
                } while (pcVar10 != obj.probe_notify_list);
            }
            mutex_unlock(obj.notify_lock);
            pcVar12 = NULL;
            pcStack_140 = pcVar13;
        }
        else {
            pcVar12 = uVar2;
            pcVar9 = pcVar12;
            _dev_err(pcVar13,"Error parsing qcom,altmode-dev property: %d\n");
            pcStack_140 = pcVar13;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == aiStack_128[10]) {
        return pcVar12;
    }
    piVar5 = __stack_chk_fail();
    *extraout_x18_00 = sym.altmode_send_data;
    pcStack_148 = sym.altmode_send_data;
    iVar11 = sp_el0;
    iStack_158 = *(iVar11 + 0x5e0);
    iVar11 = *piVar5;
    uStack_15c = 0;
    uStack_164 = 0;
    ppuStack_150 = &puStack_d0;
    if (pcVar9 < 0x9) {
        uStack_170 = 0x10000800c;
        uStack_168 = 0x15;
        memcpy(&uStack_164);
        *(iVar11 + 0x198) = 0;
        uVar2 = pmic_glink_write(*(iVar11 + 8),&uStack_170,0x18);
        if (uVar2 == 0) {
            iVar3 = wait_for_completion_timeout(iVar11 + 0x198,0xfa);
            if (iVar3 != 0) {
                pcVar13 = NULL;
                goto code_r0x08001644;
            }
            pcVar13 = 0xffffff92;
        }
        else {
            pcVar13 = uVar2;
        }
        _printk(0x80005ab,"altmode_write",pcVar13);
    }
    else {
        _printk(0x8000276,"__altmode_send_data");
        pcVar13 = 0xffffffea;
    }
code_r0x08001644:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_158) {
        return pcVar13;
    }
    auVar15 = __stack_chk_fail();
    piVar8 = auVar15._8_8_;
    iVar4 = auVar15._0_8_;
    *extraout_x18_01 = sym.altmode_register_client;
    pcStack_1a8 = sym.altmode_register_client;
    iVar11 = sp_el0;
    pcVar13 = 0xffffffffffffffea;
    iStack_1b8 = *(iVar11 + 0x5e0);
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    pppuStack_1b0 = &ppuStack_150;
    if ((iVar4 != 0) && (piVar8 != NULL)) {
        if ((*(piVar8 + 4) != 0) && (((*(piVar8 + 8) != 0 && (*(piVar8 + 0xc) != 0)) && (*piVar8 != 0)))) {
            iVar3 = of_parse_phandle_with_args(*(iVar4 + 0x2f0),"qcom,altmode-dev","#altmode-cells",0,&uStack_208);
            if (iVar3 != 0) {
                _dev_err(iVar4,"Error parsing qcom,altmode-dev property: %d\n",iVar3);
                pcVar13 = iVar3;
                goto code_r0x080018e8;
            }
            if (uStack_200 == 1) {
                if (uStack_200._4_4_ < 4) {
                    iVar11 = of_find_device_by_node(uStack_208);
                    if ((iVar11 == 0) || (iVar11 = *(iVar11 + 0xa8), iVar11 == 0)) {
                        pcVar13 = 0xfffffffffffffdfb;
                    }
                    else {
                        pcVar13 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xdc0,0x80);
                        if (pcVar13 == NULL) {
                            pcVar13 = 0xfffffffffffffff4;
                        }
                        else {
                            *pcVar13 = iVar11;
                            iVar1 = *piVar8;
                            pcVar13[0x38] = SUB81(uStack_200 >> 0x20,0);
                            iVar4 = *(piVar8 + 8);
                            iVar14 = *(piVar8 + 0xc);
                            *(pcVar13 + 8) = iVar1;
                            *(pcVar13 + 0x40) = 0xfffffffe0;
                            *(pcVar13 + 0x18) = iVar4;
                            *(pcVar13 + 0x20) = iVar14;
                            *(pcVar13 + 0x48) = pcVar13 + 0x48;
                            *(pcVar13 + 0x50) = pcVar13 + 0x48;
                            uVar6 = *(piVar8 + 4);
                            *(pcVar13 + 0x58) = sym.client_cb_work.2cbc27abfbd7ad4b3b738befddff02f6.cfi_jt;
                            iVar4 = kstrdup(uVar6,0xcc0);
                            *(pcVar13 + 0x10) = iVar4;
                            if (iVar4 == 0) {
                                kfree(pcVar13);
                                pcVar13 = 0xfffffffffffffff4;
                            }
                            else {
                                iVar4 = iVar11 + 0x28;
                                mutex_lock(iVar4);
                                iVar3 = idr_alloc(iVar11 + 0x10,pcVar13,CONCAT21(*(pcVar13 + 8),pcVar13[0x38]),
                                                  CONCAT21(*(pcVar13 + 8),pcVar13[0x38]) + 1,0xcc0);
                                if (iVar3 < 0) {
                                    _printk(0x8000341,"altmode_register_client",*(piVar8 + 4),iVar3);
                                    mutex_unlock(iVar4);
                                    kfree(*(pcVar13 + 0x10));
                                    kfree(pcVar13);
                                    pcVar13 = iVar3;
                                }
                                else {
                                    pcVar12 = pcVar13 + 0x28;
                                    piVar5 = iVar11 + 0x68;
                                    iVar14 = *piVar5;
                                    uVar7 = __list_add_valid(pcVar12,piVar5,iVar14);
                                    if ((uVar7 & 1) != 0) {
                                        *(iVar14 + 8) = pcVar12;
                                        *(pcVar13 + 0x28) = iVar14;
                                        *(pcVar13 + 0x30) = piVar5;
                                        *piVar5 = pcVar12;
                                    }
                                    mutex_unlock(iVar4);
                                    if (*(iVar11 + 0x78) == 0) {
                                        queue_delayed_work_on(0x20,_mutex_lock,iVar11 + 0x80,5);
                                    }
                                }
                            }
                        }
                    }
                    goto code_r0x080018e8;
                }
                _dev_err(iVar4,"Invalid port_index: %d, max is %d\n",uStack_200._4_4_,3);
            }
            else {
                _dev_err(iVar4,"Error in port_index specification\n");
            }
        }
        pcVar13 = 0xffffffffffffffea;
    }
code_r0x080018e8:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_1b8) {
        iVar11 = __stack_chk_fail();
        *extraout_x18_02 = 0x8001964;
        pcVar13 = *(iVar11 + -0x20);
        if (pcVar13 != sym.__typeid__ZTSFiPvS_mE_global_addr) {
            __cfi_slowpath_diag(0x268e9722c14a4592,pcVar13,0x8000200);
        }
        pcVar13 = (*pcVar13)(*(iVar11 + -0x28),iVar11 + 0x30,0x10);
        return pcVar13;
    }
    return pcVar13;
}


// ===== sym.altmode_register_client.cfi_jt @ 0x08001268 (size 8) =====

int64_t * sym.altmode_register_client.cfi_jt(int64_t param_1,int16_t *param_2)

{
    int64_t *piVar1;
    uint32_t uVar2;
    int16_t iVar3;
    int iVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    code *pcVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar10;
    int64_t *piVar11;
    int64_t iVar12;
    ulong unaff_x30;
    ulong uStack_98;
    ulong uStack_90;
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
    iVar5 = sp_el0;
    piVar10 = 0xffffffffffffffea;
    iStack_48 = *(iVar5 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    if ((param_1 != 0) && (param_2 != NULL)) {
        if ((*(param_2 + 4) != 0) && (((*(param_2 + 8) != 0 && (*(param_2 + 0xc) != 0)) && (*param_2 != 0)))) {
            iVar4 = of_parse_phandle_with_args(*(param_1 + 0x2f0),"qcom,altmode-dev","#altmode-cells",0,&uStack_98);
            if (iVar4 != 0) {
                _dev_err(param_1,"Error parsing qcom,altmode-dev property: %d\n",iVar4);
                piVar10 = iVar4;
                goto code_r0x080018e8;
            }
            if (uStack_90 == 1) {
                if (uStack_90._4_4_ < 4) {
                    iVar5 = of_find_device_by_node(uStack_98);
                    if ((iVar5 == 0) || (iVar5 = *(iVar5 + 0xa8), iVar5 == 0)) {
                        piVar10 = 0xfffffffffffffdfb;
                    }
                    else {
                        piVar10 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xdc0,0x80);
                        if (piVar10 == NULL) {
                            piVar10 = 0xfffffffffffffff4;
                        }
                        else {
                            *piVar10 = iVar5;
                            iVar3 = *param_2;
                            *(piVar10 + 7) = uStack_90 >> 0x20;
                            iVar7 = *(param_2 + 8);
                            iVar12 = *(param_2 + 0xc);
                            *(piVar10 + 1) = iVar3;
                            piVar10[8] = 0xfffffffe0;
                            piVar10[3] = iVar7;
                            piVar10[4] = iVar12;
                            piVar10[9] = piVar10 + 9;
                            piVar10[10] = piVar10 + 9;
                            uVar6 = *(param_2 + 4);
                            piVar10[0xb] = sym.client_cb_work.2cbc27abfbd7ad4b3b738befddff02f6.cfi_jt;
                            iVar7 = kstrdup(uVar6,0xcc0);
                            piVar10[2] = iVar7;
                            if (iVar7 == 0) {
                                kfree(piVar10);
                                piVar10 = 0xfffffffffffffff4;
                            }
                            else {
                                iVar7 = iVar5 + 0x28;
                                mutex_lock(iVar7);
                                uVar2 = CONCAT21(piVar10[1],piVar10[7]);
                                iVar4 = idr_alloc(iVar5 + 0x10,piVar10,uVar2,uVar2 + 1,0xcc0);
                                if (iVar4 < 0) {
                                    _printk(0x8000341,"altmode_register_client",*(param_2 + 4),iVar4);
                                    mutex_unlock(iVar7);
                                    kfree(piVar10[2]);
                                    kfree(piVar10);
                                    piVar10 = iVar4;
                                }
                                else {
                                    piVar1 = piVar10 + 5;
                                    piVar11 = iVar5 + 0x68;
                                    iVar12 = *piVar11;
                                    uVar8 = __list_add_valid(piVar1,piVar11,iVar12);
                                    if ((uVar8 & 1) != 0) {
                                        *(iVar12 + 8) = piVar1;
                                        piVar10[5] = iVar12;
                                        piVar10[6] = piVar11;
                                        *piVar11 = piVar1;
                                    }
                                    mutex_unlock(iVar7);
                                    if (*(iVar5 + 0x78) == 0) {
                                        queue_delayed_work_on(0x20,_mutex_lock,iVar5 + 0x80,5);
                                    }
                                }
                            }
                        }
                    }
                    goto code_r0x080018e8;
                }
                _dev_err(param_1,"Invalid port_index: %d, max is %d\n",uStack_90._4_4_,3);
            }
            else {
                _dev_err(param_1,"Error in port_index specification\n");
            }
        }
        piVar10 = 0xffffffffffffffea;
    }
code_r0x080018e8:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return piVar10;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = 0x8001964;
    pcVar9 = *(iVar5 + -0x20);
    if (pcVar9 != sym.__typeid__ZTSFiPvS_mE_global_addr) {
        __cfi_slowpath_diag(0x268e9722c14a4592,pcVar9,0x8000200);
    }
    piVar10 = (*pcVar9)(*(iVar5 + -0x28),iVar5 + 0x30,0x10);
    return piVar10;
}


// ===== sym.altmode_send_pan_ack.2cbc27abfbd7ad4b3b738befddff02f6.cfi_jt @ 0x08001270 (size 8) =====

ulong sym.altmode_send_pan_ack.2cbc27abfbd7ad4b3b738befddff02f6.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    uchar uVar2;
    uint8_t uVar3;
    ulong uVar4;
    int iVar5;
    ulong uVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar10;
    ulong *puVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    ulong uStack_50;
    ulong uStack_48;
    uint8_t uStack_40;
    ushort uStack_3f;
    uchar uStack_3d;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    *(param_1 + 0x90) = 0;
    uVar3 = *(param_1 + 0xb0);
    uVar10 = uVar3;
    uStack_3c = 0;
    uStack_3d = 0;
    uStack_50 = 0x10000800c;
    uStack_48 = 0x1100000015;
    uStack_3f = 0;
    uStack_40 = uVar3;
    iVar5 = pmic_glink_write(*(param_1 + -0x100),&uStack_50,0x18);
    if (iVar5 == 0) {
        iVar5 = wait_for_completion_timeout(param_1 + 0x90,0xfa);
        if (iVar5 == 0) {
            iVar5 = -0x6e;
            _printk(0x80005ab,"altmode_write",0xffffff92);
code_r0x08002130:
            uVar10 = uVar3;
            uVar6 = _printk(0x80004a4,"altmode_send_ack",uVar10,iVar5);
            goto code_r0x080020c0;
        }
    }
    else {
        _printk(0x80005ab,"altmode_write",iVar5);
        if (iVar5 < 0) goto code_r0x08002130;
    }
    uVar6 = ipc_log_string(_segment.ehdr,"port %u: Sent PAN ACK\n");
code_r0x080020c0:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return uVar6;
    }
    auVar12 = __stack_chk_fail();
    iVar9 = auVar12._8_8_;
    iVar7 = auVar12._0_8_;
    *extraout_x18 = sym.altmode_callback;
    ipc_log_string(_segment.ehdr,"len: %zu owner: %u type: %u opcode %04x\n");
    uVar1 = *(iVar9 + 8) & 0xff;
    if (uVar1 == 0x16) {
        if (uVar10 != 0x20) {
            ipc_log_string(_segment.ehdr,"Expected length %u, got: %zu\n",0x20,uVar10);
            return 0xffffffea;
        }
        uVar1 = *(iVar9 + 8) >> 0x10;
        puVar11 = iVar9 + 0xc;
        uVar2 = *puVar11;
        mutex_lock(iVar7 + 0x28);
        iVar8 = idr_find(iVar7 + 0x10,CONCAT41(uVar1,uVar2));
        mutex_unlock(iVar7 + 0x28);
        if (iVar8 == 0) {
            ipc_log_string(_segment.ehdr,"No client associated with SVID %#x port %u\n",uVar1,uVar2);
            *(iVar7 + 0x1b8) = uVar2;
            queue_delayed_work_on(0x20,_mutex_lock,iVar7 + 0x108,5);
        }
        else {
            ipc_log_string(_segment.ehdr,"Payload: %*ph\n",0x10,puVar11);
            cancel_work_sync(iVar8 + 0x40);
            uVar4 = _mutex_lock;
            uVar6 = *(iVar9 + 0x14);
            *(iVar8 + 0x70) = *puVar11;
            *(iVar8 + 0x78) = uVar6;
            queue_work_on(0x20,uVar4,iVar8 + 0x40);
        }
    }
    else if (uVar1 == 0x15) {
        complete(iVar7 + 0x198);
    }
    return 0;
}


// ===== sym.altmode_send_pan_en.2cbc27abfbd7ad4b3b738befddff02f6.cfi_jt @ 0x08001278 (size 8) =====

ulong sym.altmode_send_pan_en.2cbc27abfbd7ad4b3b738befddff02f6.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    uchar uVar2;
    uint8_t uVar3;
    ulong uVar4;
    int iVar5;
    ulong uVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar10;
    ulong *puVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    ulong uStack_90;
    ulong uStack_88;
    uint8_t uStack_80;
    ushort uStack_7f;
    uchar uStack_7d;
    uint uStack_7c;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_28 = *(iVar8 + 0x5e0);
    uStack_40 = 0x10000800c;
    uStack_38 = 0x1000000015;
    uStack_30 = 0;
    *(param_1 + 0x118) = 0;
    iVar5 = pmic_glink_write(*(param_1 + -0x78),&uStack_40,0x18);
    if (iVar5 == 0) {
        iVar5 = wait_for_completion_timeout(param_1 + 0x118,0xfa);
        if (iVar5 != 0) goto code_r0x08001f7c;
        iVar5 = -0x6e;
        _printk(0x80005ab,"altmode_write",0xffffff92);
code_r0x08002008:
        uVar6 = _printk(0x8000311,"altmode_send_pan_en",iVar5);
    }
    else {
        _printk(0x80005ab,"altmode_write",iVar5);
        if (iVar5 < 0) goto code_r0x08002008;
code_r0x08001f7c:
        *(param_1 + -8) = 1;
        uVar6 = ipc_log_string(_segment.ehdr,"Sent PAN EN\n");
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_28) {
        return uVar6;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.altmode_send_pan_ack;
    pcStack_68 = sym.altmode_send_pan_ack;
    iVar8 = sp_el0;
    iStack_78 = *(iVar8 + 0x5e0);
    *(iVar7 + 0x90) = 0;
    uVar3 = *(iVar7 + 0xb0);
    uVar10 = uVar3;
    uStack_7c = 0;
    uStack_7d = 0;
    uStack_90 = 0x10000800c;
    uStack_88 = 0x1100000015;
    uStack_7f = 0;
    uStack_80 = uVar3;
    puStack_70 = &stack0xffffffffffffffe0;
    iVar5 = pmic_glink_write(*(iVar7 + -0x100),&uStack_90,0x18);
    if (iVar5 == 0) {
        iVar5 = wait_for_completion_timeout(iVar7 + 0x90,0xfa);
        if (iVar5 == 0) {
            iVar5 = -0x6e;
            _printk(0x80005ab,"altmode_write",0xffffff92);
code_r0x08002130:
            uVar10 = uVar3;
            uVar6 = _printk(0x80004a4,"altmode_send_ack",uVar10,iVar5);
            goto code_r0x080020c0;
        }
    }
    else {
        _printk(0x80005ab,"altmode_write",iVar5);
        if (iVar5 < 0) goto code_r0x08002130;
    }
    uVar6 = ipc_log_string(_segment.ehdr,"port %u: Sent PAN ACK\n");
code_r0x080020c0:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_78) {
        return uVar6;
    }
    auVar12 = __stack_chk_fail();
    iVar7 = auVar12._8_8_;
    iVar8 = auVar12._0_8_;
    *extraout_x18_00 = sym.altmode_callback;
    ipc_log_string(_segment.ehdr,"len: %zu owner: %u type: %u opcode %04x\n");
    uVar1 = *(iVar7 + 8) & 0xff;
    if (uVar1 == 0x16) {
        if (uVar10 != 0x20) {
            ipc_log_string(_segment.ehdr,"Expected length %u, got: %zu\n",0x20,uVar10);
            return 0xffffffea;
        }
        uVar1 = *(iVar7 + 8) >> 0x10;
        puVar11 = iVar7 + 0xc;
        uVar2 = *puVar11;
        mutex_lock(iVar8 + 0x28);
        iVar9 = idr_find(iVar8 + 0x10,CONCAT41(uVar1,uVar2));
        mutex_unlock(iVar8 + 0x28);
        if (iVar9 == 0) {
            ipc_log_string(_segment.ehdr,"No client associated with SVID %#x port %u\n",uVar1,uVar2);
            *(iVar8 + 0x1b8) = uVar2;
            queue_delayed_work_on(0x20,_mutex_lock,iVar8 + 0x108,5);
        }
        else {
            ipc_log_string(_segment.ehdr,"Payload: %*ph\n",0x10,puVar11);
            cancel_work_sync(iVar9 + 0x40);
            uVar4 = _mutex_lock;
            uVar6 = *(iVar7 + 0x14);
            *(iVar9 + 0x70) = *puVar11;
            *(iVar9 + 0x78) = uVar6;
            queue_work_on(0x20,uVar4,iVar9 + 0x40);
        }
    }
    else if (uVar1 == 0x15) {
        complete(iVar8 + 0x198);
    }
    return 0;
}


// ===== sym.client_cb_work.2cbc27abfbd7ad4b3b738befddff02f6.cfi_jt @ 0x08001280 (size 8) =====

void sym.client_cb_work.2cbc27abfbd7ad4b3b738befddff02f6.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = *(param_1 + -0x20);
    if (pcVar1 != sym.__typeid__ZTSFiPvS_mE_global_addr) {
        __cfi_slowpath_diag(0x268e9722c14a4592,pcVar1,0x8000200);
    }
    (*pcVar1)(*(param_1 + -0x28),param_1 + 0x30,0x10);
    return;
}


// ===== sym.__typeid__ZTSFiPvS_mE_global_addr @ 0x08001288 (size 8) =====

ulong sym.__typeid__ZTSFiPvS_mE_global_addr(int64_t param_1,uint *param_2,int64_t param_3)

{
    uint32_t uVar1;
    ulong uVar2;
    uchar uVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *puVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ipc_log_string(_segment.ehdr,"len: %zu owner: %u type: %u opcode %04x\n",param_3,*param_2,param_2[1],param_2[2]
                  );
    uVar1 = param_2[2] & 0xff;
    if (uVar1 == 0x16) {
        if (param_3 != 0x20) {
            ipc_log_string(_segment.ehdr,"Expected length %u, got: %zu\n",0x20,param_3);
            return 0xffffffea;
        }
        uVar1 = param_2[2] >> 0x10;
        puVar6 = param_2 + 3;
        uVar3 = *puVar6;
        mutex_lock(param_1 + 0x28);
        iVar5 = idr_find(param_1 + 0x10,CONCAT41(uVar1,uVar3));
        mutex_unlock(param_1 + 0x28);
        if (iVar5 == 0) {
            ipc_log_string(_segment.ehdr,"No client associated with SVID %#x port %u\n",uVar1,uVar3);
            *(param_1 + 0x1b8) = uVar3;
            queue_delayed_work_on(0x20,_mutex_lock,param_1 + 0x108,5);
        }
        else {
            ipc_log_string(_segment.ehdr,"Payload: %*ph\n",0x10,puVar6);
            cancel_work_sync(iVar5 + 0x40);
            uVar4 = _mutex_lock;
            uVar2 = *(param_2 + 5);
            *(iVar5 + 0x70) = *puVar6;
            *(iVar5 + 0x78) = uVar2;
            queue_work_on(0x20,uVar4,iVar5 + 0x40);
        }
    }
    else if (uVar1 == 0x15) {
        complete(param_1 + 0x198);
    }
    return 0;
}


// ===== sym.altmode_deregister_client.cfi_jt @ 0x08001290 (size 8) =====

ulong sym.altmode_deregister_client.cfi_jt(int64_t *param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t iVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == NULL) || (iVar6 = *param_1, iVar6 == 0)) {
        uVar5 = 0xffffffed;
    }
    else {
        cancel_work_sync(param_1 + 8);
        mutex_lock(iVar6 + 0x28);
        idr_remove(iVar6 + 0x10,CONCAT21(param_1[1],param_1[7]));
        piVar7 = *(iVar6 + 0x68);
        while (piVar3 = piVar7, iVar6 + 0x68 != piVar3) {
            piVar7 = *piVar3;
            if (piVar3 + -5 == param_1) {
                uVar4 = __list_del_entry_valid(piVar3);
                if ((uVar4 & 1) != 0) {
                    iVar1 = *piVar3;
                    piVar2 = piVar3[1];
                    *(iVar1 + 8) = piVar2;
                    *piVar2 = iVar1;
                }
                *piVar3 = -0x2152ffffffffff00;
                piVar3[1] = -0x2152fffffffffede;
            }
        }
        mutex_unlock(iVar6 + 0x28);
        kfree(param_1[2]);
        kfree(param_1);
        uVar5 = 0;
    }
    return uVar5;
}


// ===== sym.altmode_probe.2cbc27abfbd7ad4b3b738befddff02f6.cfi_jt @ 0x08001298 (size 8) =====

uint64_t sym.altmode_probe.2cbc27abfbd7ad4b3b738befddff02f6.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar6;
    ulong *puVar7;
    code *pcVar8;
    code *pcVar9;
    int64_t *piVar10;
    ulong unaff_x30;
    char *pcStack_80;
    ulong uStack_78;
    int64_t *piStack_70;
    code *pcStack_68;
    code *pcStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iVar5 = param_1 + 0x10;
    iStack_58 = *(iVar2 + 0x5e0);
    uStack_78 = 0x800c;
    piVar3 = devm_kmalloc(iVar5,0x1c0,0xdc0);
    if (piVar3 == NULL) {
        uVar4 = 0xfffffff4;
    }
    else {
        *piVar3 = iVar5;
        __mutex_init(piVar3 + 5,"&amdev->client_lock",obj.altmode_probe.__key);
        piVar3[3] = 0;
        piVar3[4] = 0;
        piVar3[2] = 0x1000000400000000;
        *(piVar3 + 0x33) = 0;
        __init_swait_queue_head(piVar3 + 0x34,"&x->wait",obj.notify_lock);
        piVar3[0x10] = 0xfffffffe0;
        piVar3[0x11] = piVar3 + 0x11;
        piVar3[0x12] = piVar3 + 0x11;
        piVar3[0x13] = sym.altmode_send_pan_en.2cbc27abfbd7ad4b3b738befddff02f6.cfi_jt;
        init_timer_key(piVar3 + 0x16,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
        piVar3[0x21] = 0xfffffffe0;
        piVar3[0x22] = piVar3 + 0x22;
        piVar3[0x23] = piVar3 + 0x22;
        piVar3[0x24] = sym.altmode_send_pan_ack.2cbc27abfbd7ad4b3b738befddff02f6.cfi_jt;
        init_timer_key(piVar3 + 0x27,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
        piVar3[0xb] = piVar3 + 0xb;
        piVar3[0xc] = piVar3 + 0xb;
        piVar3[0xd] = piVar3 + 0xd;
        piVar3[0xe] = piVar3 + 0xd;
        pcStack_80 = "altmode";
        pcStack_68 = sym.__typeid__ZTSFiPvS_mE_global_addr;
        pcStack_60 = sym.altmode_state_cb.2cbc27abfbd7ad4b3b738befddff02f6.cfi_jt;
        piStack_70 = piVar3;
        uVar4 = pmic_glink_register_client(*piVar3,&pcStack_80);
        piVar3[1] = uVar4;
        if (uVar4 < 0xfffffffffffff001) {
            *(param_1 + 0xa8) = piVar3;
            _segment.ehdr = ipc_log_context_create(10,"altmode",0);
            if (_segment.ehdr == 0) {
                _dev_warn(iVar5,"Error in creating ipc_log_context\n");
            }
            mutex_lock(obj.notify_lock);
            pcVar6 = _obj.probe_notify_list;
            if (_obj.probe_notify_list != obj.probe_notify_list) {
                do {
                    pcVar9 = *pcVar6;
                    iVar5 = of_find_device_by_node(*(pcVar6 + 0x10));
                    if ((iVar5 != 0) && (*(iVar5 + 0xa8) != NULL && *(iVar5 + 0xa8) == piVar3)) {
                        pcVar8 = *(pcVar6 + 0x18);
                        __cfi_slowpath_diag(0x4c550309df1cf4c1,pcVar8,0x8000220);
                        (*pcVar8)(*(pcVar6 + 0x20));
                        uVar4 = __list_del_entry_valid(pcVar6);
                        if ((uVar4 & 1) != 0) {
                            iVar5 = *pcVar6;
                            piVar10 = *(pcVar6 + 8);
                            *(iVar5 + 8) = piVar10;
                            *piVar10 = iVar5;
                        }
                        *pcVar6 = -0x2152ffffffffff00;
                        *(pcVar6 + 8) = -0x2152fffffffffede;
                        kfree(pcVar6);
                    }
                    pcVar6 = pcVar9;
                } while (pcVar9 != obj.probe_notify_list);
            }
            mutex_unlock(obj.notify_lock);
            uVar4 = 0;
        }
        else {
            if (uVar4 != -0x205) {
                _dev_err(iVar5,"Error in pmic_glink registration: %d\n",uVar4 & 0xffffffff);
            }
            idr_destroy(piVar3 + 2);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_58) {
        iVar5 = __stack_chk_fail();
        *extraout_x18 = sym.altmode_remove;
        puVar7 = *(iVar5 + 0xa8);
        debugfs_remove(puVar7[0x32]);
        cancel_delayed_work_sync(puVar7 + 0x10);
        cancel_delayed_work_sync(puVar7 + 0x21);
        idr_destroy(puVar7 + 2);
        *(puVar7 + 0xf) = 0;
        mutex_lock(obj.notify_lock);
        pcVar6 = _obj.probe_notify_list;
        while (pcVar6 != obj.probe_notify_list) {
            pcVar9 = *pcVar6;
            uVar4 = __list_del_entry_valid(pcVar6);
            if ((uVar4 & 1) != 0) {
                iVar5 = *pcVar6;
                piVar3 = *(pcVar6 + 8);
                *(iVar5 + 8) = piVar3;
                *piVar3 = iVar5;
            }
            *pcVar6 = -0x2152ffffffffff00;
            *(pcVar6 + 8) = -0x2152fffffffffede;
            kfree(pcVar6);
            pcVar6 = pcVar9;
        }
        mutex_unlock(obj.notify_lock);
        mutex_lock(puVar7 + 5);
        piVar3 = puVar7[0xd];
        while (piVar3 != puVar7 + 0xd) {
            piVar10 = *piVar3;
            uVar4 = __list_del_entry_valid(piVar3);
            if ((uVar4 & 1) != 0) {
                iVar5 = *piVar3;
                piVar1 = piVar3[1];
                *(iVar5 + 8) = piVar1;
                *piVar1 = iVar5;
            }
            *piVar3 = -0x2152ffffffffff00;
            piVar3[1] = -0x2152fffffffffede;
            piVar3 = piVar10;
        }
        mutex_unlock(puVar7 + 5);
        ipc_log_context_destroy(_segment.ehdr);
        _segment.ehdr = 0;
        uVar4 = pmic_glink_unregister_client(puVar7[1]);
        if (uVar4 < 0) {
            _dev_err(*puVar7,"Error in pmic_glink de-registration: %d\n",uVar4 & 0xffffffff);
        }
        return uVar4 & 0xffffffff;
    }
    return uVar4 & 0xffffffff;
}


// ===== sym.altmode_remove.2cbc27abfbd7ad4b3b738befddff02f6.cfi_jt @ 0x080012a0 (size 8) =====

int sym.altmode_remove.2cbc27abfbd7ad4b3b738befddff02f6.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    code *pcVar4;
    int iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong *puVar7;
    code *pcVar8;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar7 = *(param_1 + 0xa8);
    debugfs_remove(puVar7[0x32]);
    cancel_delayed_work_sync(puVar7 + 0x10);
    cancel_delayed_work_sync(puVar7 + 0x21);
    idr_destroy(puVar7 + 2);
    *(puVar7 + 0xf) = 0;
    mutex_lock(obj.notify_lock);
    pcVar4 = _obj.probe_notify_list;
    while (pcVar4 != obj.probe_notify_list) {
        pcVar8 = *pcVar4;
        uVar6 = __list_del_entry_valid(pcVar4);
        if ((uVar6 & 1) != 0) {
            iVar1 = *pcVar4;
            piVar2 = *(pcVar4 + 8);
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        *pcVar4 = -0x2152ffffffffff00;
        *(pcVar4 + 8) = -0x2152fffffffffede;
        kfree(pcVar4);
        pcVar4 = pcVar8;
    }
    mutex_unlock(obj.notify_lock);
    mutex_lock(puVar7 + 5);
    piVar2 = puVar7[0xd];
    while (piVar2 != puVar7 + 0xd) {
        piVar9 = *piVar2;
        uVar6 = __list_del_entry_valid(piVar2);
        if ((uVar6 & 1) != 0) {
            iVar1 = *piVar2;
            piVar3 = piVar2[1];
            *(iVar1 + 8) = piVar3;
            *piVar3 = iVar1;
        }
        *piVar2 = -0x2152ffffffffff00;
        piVar2[1] = -0x2152fffffffffede;
        piVar2 = piVar9;
    }
    mutex_unlock(puVar7 + 5);
    ipc_log_context_destroy(_segment.ehdr);
    _segment.ehdr = 0;
    iVar5 = pmic_glink_unregister_client(puVar7[1]);
    if (iVar5 < 0) {
        _dev_err(*puVar7,"Error in pmic_glink de-registration: %d\n",iVar5);
    }
    return iVar5;
}


// ===== sym.altmode_send_data.cfi_jt @ 0x080012a8 (size 8) =====

int64_t * sym.altmode_send_data.cfi_jt(int64_t *param_1,ulong param_2,uint64_t param_3)

{
    int64_t *piVar1;
    int16_t iVar2;
    uint32_t uVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int16_t *piVar8;
    code *pcVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t *piVar10;
    int64_t iVar11;
    int64_t *piVar12;
    int64_t iVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
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
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    ulong uStack_40;
    uint uStack_38;
    ulong uStack_34;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_28 = *(iVar11 + 0x5e0);
    iVar11 = *param_1;
    uStack_2c = 0;
    uStack_34 = 0;
    if (param_3 < 9) {
        uStack_40 = 0x10000800c;
        uStack_38 = 0x15;
        memcpy(&uStack_34);
        *(iVar11 + 0x198) = 0;
        uVar3 = pmic_glink_write(*(iVar11 + 8),&uStack_40,0x18);
        if (uVar3 == 0) {
            iVar4 = wait_for_completion_timeout(iVar11 + 0x198,0xfa);
            if (iVar4 != 0) {
                piVar10 = NULL;
                goto code_r0x08001644;
            }
            piVar10 = 0xffffff92;
        }
        else {
            piVar10 = uVar3;
        }
        _printk(0x80005ab,"altmode_write",piVar10);
    }
    else {
        _printk(0x8000276,"__altmode_send_data",param_3,8);
        piVar10 = 0xffffffea;
    }
code_r0x08001644:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_28) {
        return piVar10;
    }
    auVar14 = __stack_chk_fail();
    piVar8 = auVar14._8_8_;
    iVar6 = auVar14._0_8_;
    *extraout_x18 = sym.altmode_register_client;
    pcStack_78 = sym.altmode_register_client;
    iVar11 = sp_el0;
    piVar10 = 0xffffffffffffffea;
    iStack_88 = *(iVar11 + 0x5e0);
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
    puStack_80 = &stack0xffffffffffffffe0;
    if ((iVar6 != 0) && (piVar8 != NULL)) {
        if ((*(piVar8 + 4) != 0) && (((*(piVar8 + 8) != 0 && (*(piVar8 + 0xc) != 0)) && (*piVar8 != 0)))) {
            iVar4 = of_parse_phandle_with_args(*(iVar6 + 0x2f0),"qcom,altmode-dev","#altmode-cells",0,&uStack_d8);
            if (iVar4 != 0) {
                _dev_err(iVar6,"Error parsing qcom,altmode-dev property: %d\n",iVar4);
                piVar10 = iVar4;
                goto code_r0x080018e8;
            }
            if (uStack_d0 == 1) {
                if (uStack_d0._4_4_ < 4) {
                    iVar11 = of_find_device_by_node(uStack_d8);
                    if ((iVar11 == 0) || (iVar11 = *(iVar11 + 0xa8), iVar11 == 0)) {
                        piVar10 = 0xfffffffffffffdfb;
                    }
                    else {
                        piVar10 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xdc0,0x80);
                        if (piVar10 == NULL) {
                            piVar10 = 0xfffffffffffffff4;
                        }
                        else {
                            *piVar10 = iVar11;
                            iVar2 = *piVar8;
                            *(piVar10 + 7) = uStack_d0 >> 0x20;
                            iVar6 = *(piVar8 + 8);
                            iVar13 = *(piVar8 + 0xc);
                            *(piVar10 + 1) = iVar2;
                            piVar10[8] = 0xfffffffe0;
                            piVar10[3] = iVar6;
                            piVar10[4] = iVar13;
                            piVar10[9] = piVar10 + 9;
                            piVar10[10] = piVar10 + 9;
                            uVar5 = *(piVar8 + 4);
                            piVar10[0xb] = sym.client_cb_work.2cbc27abfbd7ad4b3b738befddff02f6.cfi_jt;
                            iVar6 = kstrdup(uVar5,0xcc0);
                            piVar10[2] = iVar6;
                            if (iVar6 == 0) {
                                kfree(piVar10);
                                piVar10 = 0xfffffffffffffff4;
                            }
                            else {
                                iVar6 = iVar11 + 0x28;
                                mutex_lock(iVar6);
                                uVar3 = CONCAT21(piVar10[1],piVar10[7]);
                                iVar4 = idr_alloc(iVar11 + 0x10,piVar10,uVar3,uVar3 + 1,0xcc0);
                                if (iVar4 < 0) {
                                    _printk(0x8000341,"altmode_register_client",*(piVar8 + 4),iVar4);
                                    mutex_unlock(iVar6);
                                    kfree(piVar10[2]);
                                    kfree(piVar10);
                                    piVar10 = iVar4;
                                }
                                else {
                                    piVar1 = piVar10 + 5;
                                    piVar12 = iVar11 + 0x68;
                                    iVar13 = *piVar12;
                                    uVar7 = __list_add_valid(piVar1,piVar12,iVar13);
                                    if ((uVar7 & 1) != 0) {
                                        *(iVar13 + 8) = piVar1;
                                        piVar10[5] = iVar13;
                                        piVar10[6] = piVar12;
                                        *piVar12 = piVar1;
                                    }
                                    mutex_unlock(iVar6);
                                    if (*(iVar11 + 0x78) == 0) {
                                        queue_delayed_work_on(0x20,_mutex_lock,iVar11 + 0x80,5);
                                    }
                                }
                            }
                        }
                    }
                    goto code_r0x080018e8;
                }
                _dev_err(iVar6,"Invalid port_index: %d, max is %d\n",uStack_d0._4_4_,3);
            }
            else {
                _dev_err(iVar6,"Error in port_index specification\n");
            }
        }
        piVar10 = 0xffffffffffffffea;
    }
code_r0x080018e8:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_88) {
        return piVar10;
    }
    iVar11 = __stack_chk_fail();
    *extraout_x18_00 = 0x8001964;
    pcVar9 = *(iVar11 + -0x20);
    if (pcVar9 != sym.__typeid__ZTSFiPvS_mE_global_addr) {
        __cfi_slowpath_diag(0x268e9722c14a4592,pcVar9,0x8000200);
    }
    piVar10 = (*pcVar9)(*(iVar11 + -0x28),iVar11 + 0x30,0x10);
    return piVar10;
}


// ===== sym.altmode_register_notifier @ 0x080012b0 (size 436) =====

code * sym.altmode_register_notifier(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t iVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong uVar6;
    uint64_t uVar7;
    int16_t *piVar8;
    char *pcVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    int64_t unaff_x19;
    code *unaff_x20;
    int64_t iVar10;
    int64_t unaff_x21;
    code *pcVar11;
    code *pcVar12;
    int64_t iVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
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
    uchar ***pppuStack_1b0;
    code *pcStack_1a8;
    ulong uStack_170;
    uint uStack_168;
    ulong uStack_164;
    uint uStack_15c;
    int64_t iStack_158;
    uchar **ppuStack_150;
    code *pcStack_148;
    code *pcStack_140;
    int64_t iStack_138;
    int64_t aiStack_128 [11];
    uchar *puStack_d0;
    code *pcStack_c8;
    int64_t iStack_c0;
    code *pcStack_b0;
    int64_t iStack_a8;
    int64_t aiStack_98 [11];
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    pcVar12 = 0xffffffea;
    aiStack_98[10] = *(iVar10 + 0x5e0);
    aiStack_98[8] = 0;
    aiStack_98[9] = 0;
    aiStack_98[6] = 0;
    aiStack_98[7] = 0;
    aiStack_98[4] = 0;
    aiStack_98[5] = 0;
    aiStack_98[2] = 0;
    aiStack_98[3] = 0;
    aiStack_98[0] = 0;
    aiStack_98[1] = 0;
    pcVar9 = arg3;
    iStack_138 = unaff_x19;
    pcStack_140 = unaff_x20;
    iStack_c0 = unaff_x21;
    if (((arg1 != 0) && (iStack_138 = arg2, arg2 != 0)) && (pcStack_140 = arg3, arg3 != 0)) {
        uVar2 = of_parse_phandle_with_args(*(arg1 + 0x2f0),"qcom,altmode-dev","#altmode-cells",0,aiStack_98);
        iVar10 = aiStack_98[0];
        if (uVar2 == 0) {
            mutex_lock(obj.notify_lock);
            iVar4 = of_find_device_by_node(iVar10);
            iStack_c0 = iVar10;
            if ((iVar4 == 0) || (*(iVar4 + 0xa8) == 0)) {
                pcVar9 = 0x28;
                iVar4 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar4 = 0x30;
                }
                pcVar12 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar4),0xdc0);
                if (pcVar12 == NULL) {
                    mutex_unlock(obj.notify_lock);
                    pcVar12 = 0xfffffff4;
                    goto code_r0x08001428;
                }
                *(pcVar12 + 0x18) = arg2;
                *(pcVar12 + 0x20) = arg3;
                *(pcVar12 + 0x10) = iVar10;
                arg3 = _obj.probe_notify_list;
                pcVar9 = _obj.probe_notify_list;
                uVar7 = __list_add_valid(pcVar12,obj.probe_notify_list);
                if ((uVar7 & 1) != 0) {
                    *(arg3 + 8) = pcVar12;
                    *pcVar12 = arg3;
                    *(pcVar12 + 8) = obj.probe_notify_list;
                    _obj.probe_notify_list = pcVar12;
                }
            }
            else {
                pcVar9 = 0x80001e0;
                __cfi_slowpath_diag(0x4c550309df1cf4c1,arg2);
                (*arg2)(arg3);
            }
            mutex_unlock(obj.notify_lock);
            pcVar12 = NULL;
            pcStack_140 = arg3;
        }
        else {
            pcVar12 = uVar2;
            pcVar9 = pcVar12;
            _dev_err(arg1,"Error parsing qcom,altmode-dev property: %d\n");
            iStack_c0 = arg1;
        }
    }
code_r0x08001428:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == aiStack_98[10]) {
        return pcVar12;
    }
    auVar14 = __stack_chk_fail();
    iVar4 = auVar14._8_8_;
    pcVar12 = auVar14._0_8_;
    *extraout_x18 = sym.altmode_deregister_notifier;
    pcStack_c8 = sym.altmode_deregister_notifier;
    iVar10 = sp_el0;
    aiStack_128[10] = *(iVar10 + 0x5e0);
    aiStack_128[8] = 0;
    aiStack_128[9] = 0;
    aiStack_128[6] = 0;
    aiStack_128[7] = 0;
    aiStack_128[4] = 0;
    aiStack_128[5] = 0;
    aiStack_128[2] = 0;
    aiStack_128[3] = 0;
    aiStack_128[0] = 0;
    aiStack_128[1] = 0;
    puStack_d0 = &stack0xffffffffffffffc0;
    pcStack_b0 = pcStack_140;
    iStack_a8 = iStack_138;
    if (pcVar12 == NULL) {
        pcVar11 = 0xffffffea;
    }
    else {
        pcVar9 = "#altmode-cells";
        uVar2 = of_parse_phandle_with_args(*(pcVar12 + 0x2f0),"qcom,altmode-dev","#altmode-cells",0,aiStack_128);
        iVar10 = aiStack_128[0];
        iStack_138 = iVar4;
        if (uVar2 == 0) {
            mutex_lock(obj.notify_lock);
            pcVar12 = _obj.probe_notify_list;
            if (_obj.probe_notify_list != obj.probe_notify_list) {
                do {
                    pcVar11 = *pcVar12;
                    if ((*(pcVar12 + 0x10) == iVar10) && (*(pcVar12 + 0x20) == iVar4)) {
                        uVar7 = __list_del_entry_valid(pcVar12);
                        if ((uVar7 & 1) != 0) {
                            iVar10 = *pcVar12;
                            piVar5 = *(pcVar12 + 8);
                            *(iVar10 + 8) = piVar5;
                            *piVar5 = iVar10;
                        }
                        *pcVar12 = -0x2152ffffffffff00;
                        *(pcVar12 + 8) = -0x2152fffffffffede;
                        kfree(pcVar12);
                        break;
                    }
                    pcVar12 = pcVar11;
                } while (pcVar11 != obj.probe_notify_list);
            }
            mutex_unlock(obj.notify_lock);
            pcVar11 = NULL;
            pcStack_140 = pcVar12;
        }
        else {
            pcVar11 = uVar2;
            pcVar9 = pcVar11;
            _dev_err(pcVar12,"Error parsing qcom,altmode-dev property: %d\n");
            pcStack_140 = pcVar12;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == aiStack_128[10]) {
        return pcVar11;
    }
    piVar5 = __stack_chk_fail();
    *extraout_x18_00 = sym.altmode_send_data;
    pcStack_148 = sym.altmode_send_data;
    iVar10 = sp_el0;
    iStack_158 = *(iVar10 + 0x5e0);
    iVar10 = *piVar5;
    uStack_15c = 0;
    uStack_164 = 0;
    ppuStack_150 = &puStack_d0;
    if (pcVar9 < 0x9) {
        uStack_170 = 0x10000800c;
        uStack_168 = 0x15;
        memcpy(&uStack_164);
        *(iVar10 + 0x198) = 0;
        uVar2 = pmic_glink_write(*(iVar10 + 8),&uStack_170,0x18);
        if (uVar2 == 0) {
            iVar3 = wait_for_completion_timeout(iVar10 + 0x198,0xfa);
            if (iVar3 != 0) {
                pcVar12 = NULL;
                goto code_r0x08001644;
            }
            pcVar12 = 0xffffff92;
        }
        else {
            pcVar12 = uVar2;
        }
        _printk(0x80005ab,"altmode_write",pcVar12);
    }
    else {
        _printk(0x8000276,"__altmode_send_data");
        pcVar12 = 0xffffffea;
    }
code_r0x08001644:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_158) {
        return pcVar12;
    }
    auVar14 = __stack_chk_fail();
    piVar8 = auVar14._8_8_;
    iVar4 = auVar14._0_8_;
    *extraout_x18_01 = sym.altmode_register_client;
    pcStack_1a8 = sym.altmode_register_client;
    iVar10 = sp_el0;
    pcVar12 = 0xffffffffffffffea;
    iStack_1b8 = *(iVar10 + 0x5e0);
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    pppuStack_1b0 = &ppuStack_150;
    if ((iVar4 != 0) && (piVar8 != NULL)) {
        if ((*(piVar8 + 4) != 0) && (((*(piVar8 + 8) != 0 && (*(piVar8 + 0xc) != 0)) && (*piVar8 != 0)))) {
            iVar3 = of_parse_phandle_with_args(*(iVar4 + 0x2f0),"qcom,altmode-dev","#altmode-cells",0,&uStack_208);
            if (iVar3 != 0) {
                _dev_err(iVar4,"Error parsing qcom,altmode-dev property: %d\n",iVar3);
                pcVar12 = iVar3;
                goto code_r0x080018e8;
            }
            if (uStack_200 == 1) {
                if (uStack_200._4_4_ < 4) {
                    iVar10 = of_find_device_by_node(uStack_208);
                    if ((iVar10 == 0) || (iVar10 = *(iVar10 + 0xa8), iVar10 == 0)) {
                        pcVar12 = 0xfffffffffffffdfb;
                    }
                    else {
                        pcVar12 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xdc0,0x80);
                        if (pcVar12 == NULL) {
                            pcVar12 = 0xfffffffffffffff4;
                        }
                        else {
                            *pcVar12 = iVar10;
                            iVar1 = *piVar8;
                            pcVar12[0x38] = SUB81(uStack_200 >> 0x20,0);
                            iVar4 = *(piVar8 + 8);
                            iVar13 = *(piVar8 + 0xc);
                            *(pcVar12 + 8) = iVar1;
                            *(pcVar12 + 0x40) = 0xfffffffe0;
                            *(pcVar12 + 0x18) = iVar4;
                            *(pcVar12 + 0x20) = iVar13;
                            *(pcVar12 + 0x48) = pcVar12 + 0x48;
                            *(pcVar12 + 0x50) = pcVar12 + 0x48;
                            uVar6 = *(piVar8 + 4);
                            *(pcVar12 + 0x58) = sym.client_cb_work.2cbc27abfbd7ad4b3b738befddff02f6.cfi_jt;
                            iVar4 = kstrdup(uVar6,0xcc0);
                            *(pcVar12 + 0x10) = iVar4;
                            if (iVar4 == 0) {
                                kfree(pcVar12);
                                pcVar12 = 0xfffffffffffffff4;
                            }
                            else {
                                iVar4 = iVar10 + 0x28;
                                mutex_lock(iVar4);
                                iVar3 = idr_alloc(iVar10 + 0x10,pcVar12,CONCAT21(*(pcVar12 + 8),pcVar12[0x38]),
                                                  CONCAT21(*(pcVar12 + 8),pcVar12[0x38]) + 1,0xcc0);
                                if (iVar3 < 0) {
                                    _printk(0x8000341,"altmode_register_client",*(piVar8 + 4),iVar3);
                                    mutex_unlock(iVar4);
                                    kfree(*(pcVar12 + 0x10));
                                    kfree(pcVar12);
                                    pcVar12 = iVar3;
                                }
                                else {
                                    pcVar11 = pcVar12 + 0x28;
                                    piVar5 = iVar10 + 0x68;
                                    iVar13 = *piVar5;
                                    uVar7 = __list_add_valid(pcVar11,piVar5,iVar13);
                                    if ((uVar7 & 1) != 0) {
                                        *(iVar13 + 8) = pcVar11;
                                        *(pcVar12 + 0x28) = iVar13;
                                        *(pcVar12 + 0x30) = piVar5;
                                        *piVar5 = pcVar11;
                                    }
                                    mutex_unlock(iVar4);
                                    if (*(iVar10 + 0x78) == 0) {
                                        queue_delayed_work_on(0x20,_mutex_lock,iVar10 + 0x80,5);
                                    }
                                }
                            }
                        }
                    }
                    goto code_r0x080018e8;
                }
                _dev_err(iVar4,"Invalid port_index: %d, max is %d\n",uStack_200._4_4_,3);
            }
            else {
                _dev_err(iVar4,"Error in port_index specification\n");
            }
        }
        pcVar12 = 0xffffffffffffffea;
    }
code_r0x080018e8:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) != iStack_1b8) {
        iVar10 = __stack_chk_fail();
        *extraout_x18_02 = 0x8001964;
        pcVar12 = *(iVar10 + -0x20);
        if (pcVar12 != sym.__typeid__ZTSFiPvS_mE_global_addr) {
            __cfi_slowpath_diag(0x268e9722c14a4592,pcVar12,0x8000200);
        }
        pcVar12 = (*pcVar12)(*(iVar10 + -0x28),iVar10 + 0x30,0x10);
        return pcVar12;
    }
    return pcVar12;
}


// ===== sym.altmode_deregister_notifier @ 0x08001464 (size 348) =====

int64_t * sym.altmode_deregister_notifier(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int16_t iVar2;
    uint32_t uVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int16_t *piVar8;
    char *in_x2;
    code *pcVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t unaff_x19;
    code *unaff_x20;
    int64_t iVar10;
    int64_t *piVar11;
    int64_t *piVar12;
    int64_t iVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
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
    ulong uStack_d0;
    uint uStack_c8;
    ulong uStack_c4;
    uint uStack_bc;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    code *pcStack_a0;
    int64_t iStack_98;
    int64_t aiStack_88 [11];
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    aiStack_88[10] = *(iVar10 + 0x5e0);
    aiStack_88[8] = 0;
    aiStack_88[9] = 0;
    aiStack_88[6] = 0;
    aiStack_88[7] = 0;
    aiStack_88[4] = 0;
    aiStack_88[5] = 0;
    aiStack_88[2] = 0;
    aiStack_88[3] = 0;
    aiStack_88[0] = 0;
    aiStack_88[1] = 0;
    if (arg1 == 0) {
        piVar12 = 0xffffffea;
    }
    else {
        in_x2 = "#altmode-cells";
        uVar3 = of_parse_phandle_with_args(*(arg1 + 0x2f0),"qcom,altmode-dev","#altmode-cells",0,aiStack_88);
        iVar10 = aiStack_88[0];
        unaff_x19 = arg2;
        if (uVar3 == 0) {
            mutex_lock(obj.notify_lock);
            unaff_x20 = _obj.probe_notify_list;
            if (_obj.probe_notify_list != obj.probe_notify_list) {
                do {
                    pcVar9 = *unaff_x20;
                    if ((*(unaff_x20 + 0x10) == iVar10) && (*(unaff_x20 + 0x20) == arg2)) {
                        uVar7 = __list_del_entry_valid(unaff_x20);
                        if ((uVar7 & 1) != 0) {
                            iVar10 = *unaff_x20;
                            piVar12 = *(unaff_x20 + 8);
                            *(iVar10 + 8) = piVar12;
                            *piVar12 = iVar10;
                        }
                        *unaff_x20 = -0x2152ffffffffff00;
                        *(unaff_x20 + 8) = -0x2152fffffffffede;
                        kfree(unaff_x20);
                        break;
                    }
                    unaff_x20 = pcVar9;
                } while (pcVar9 != obj.probe_notify_list);
            }
            mutex_unlock(obj.notify_lock);
            piVar12 = NULL;
        }
        else {
            piVar12 = uVar3;
            in_x2 = piVar12;
            _dev_err(arg1,"Error parsing qcom,altmode-dev property: %d\n");
            unaff_x20 = arg1;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == aiStack_88[10]) {
        return piVar12;
    }
    piVar12 = __stack_chk_fail();
    *extraout_x18 = sym.altmode_send_data;
    pcStack_a8 = sym.altmode_send_data;
    iVar10 = sp_el0;
    iStack_b8 = *(iVar10 + 0x5e0);
    iVar10 = *piVar12;
    uStack_bc = 0;
    uStack_c4 = 0;
    puStack_b0 = &stack0xffffffffffffffd0;
    pcStack_a0 = unaff_x20;
    iStack_98 = unaff_x19;
    if (in_x2 < 0x9) {
        uStack_d0 = 0x10000800c;
        uStack_c8 = 0x15;
        memcpy(&uStack_c4);
        *(iVar10 + 0x198) = 0;
        uVar3 = pmic_glink_write(*(iVar10 + 8),&uStack_d0,0x18);
        if (uVar3 == 0) {
            iVar4 = wait_for_completion_timeout(iVar10 + 0x198,0xfa);
            if (iVar4 != 0) {
                piVar12 = NULL;
                goto code_r0x08001644;
            }
            piVar12 = 0xffffff92;
        }
        else {
            piVar12 = uVar3;
        }
        _printk(0x80005ab,"altmode_write",piVar12);
    }
    else {
        _printk(0x8000276,"__altmode_send_data");
        piVar12 = 0xffffffea;
    }
code_r0x08001644:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_b8) {
        return piVar12;
    }
    auVar14 = __stack_chk_fail();
    piVar8 = auVar14._8_8_;
    iVar6 = auVar14._0_8_;
    *extraout_x18_00 = sym.altmode_register_client;
    pcStack_108 = sym.altmode_register_client;
    iVar10 = sp_el0;
    piVar12 = 0xffffffffffffffea;
    iStack_118 = *(iVar10 + 0x5e0);
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    ppuStack_110 = &puStack_b0;
    if ((iVar6 != 0) && (piVar8 != NULL)) {
        if ((*(piVar8 + 4) != 0) && (((*(piVar8 + 8) != 0 && (*(piVar8 + 0xc) != 0)) && (*piVar8 != 0)))) {
            iVar4 = of_parse_phandle_with_args(*(iVar6 + 0x2f0),"qcom,altmode-dev","#altmode-cells",0,&uStack_168);
            if (iVar4 != 0) {
                _dev_err(iVar6,"Error parsing qcom,altmode-dev property: %d\n",iVar4);
                piVar12 = iVar4;
                goto code_r0x080018e8;
            }
            if (uStack_160 == 1) {
                if (uStack_160._4_4_ < 4) {
                    iVar10 = of_find_device_by_node(uStack_168);
                    if ((iVar10 == 0) || (iVar10 = *(iVar10 + 0xa8), iVar10 == 0)) {
                        piVar12 = 0xfffffffffffffdfb;
                    }
                    else {
                        piVar12 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xdc0,0x80);
                        if (piVar12 == NULL) {
                            piVar12 = 0xfffffffffffffff4;
                        }
                        else {
                            *piVar12 = iVar10;
                            iVar2 = *piVar8;
                            *(piVar12 + 7) = uStack_160 >> 0x20;
                            iVar6 = *(piVar8 + 8);
                            iVar13 = *(piVar8 + 0xc);
                            *(piVar12 + 1) = iVar2;
                            piVar12[8] = 0xfffffffe0;
                            piVar12[3] = iVar6;
                            piVar12[4] = iVar13;
                            piVar12[9] = piVar12 + 9;
                            piVar12[10] = piVar12 + 9;
                            uVar5 = *(piVar8 + 4);
                            piVar12[0xb] = sym.client_cb_work.2cbc27abfbd7ad4b3b738befddff02f6.cfi_jt;
                            iVar6 = kstrdup(uVar5,0xcc0);
                            piVar12[2] = iVar6;
                            if (iVar6 == 0) {
                                kfree(piVar12);
                                piVar12 = 0xfffffffffffffff4;
                            }
                            else {
                                iVar6 = iVar10 + 0x28;
                                mutex_lock(iVar6);
                                uVar3 = CONCAT21(piVar12[1],piVar12[7]);
                                iVar4 = idr_alloc(iVar10 + 0x10,piVar12,uVar3,uVar3 + 1,0xcc0);
                                if (iVar4 < 0) {
                                    _printk(0x8000341,"altmode_register_client",*(piVar8 + 4),iVar4);
                                    mutex_unlock(iVar6);
                                    kfree(piVar12[2]);
                                    kfree(piVar12);
                                    piVar12 = iVar4;
                                }
                                else {
                                    piVar1 = piVar12 + 5;
                                    piVar11 = iVar10 + 0x68;
                                    iVar13 = *piVar11;
                                    uVar7 = __list_add_valid(piVar1,piVar11,iVar13);
                                    if ((uVar7 & 1) != 0) {
                                        *(iVar13 + 8) = piVar1;
                                        piVar12[5] = iVar13;
                                        piVar12[6] = piVar11;
                                        *piVar11 = piVar1;
                                    }
                                    mutex_unlock(iVar6);
                                    if (*(iVar10 + 0x78) == 0) {
                                        queue_delayed_work_on(0x20,_mutex_lock,iVar10 + 0x80,5);
                                    }
                                }
                            }
                        }
                    }
                    goto code_r0x080018e8;
                }
                _dev_err(iVar6,"Invalid port_index: %d, max is %d\n",uStack_160._4_4_,3);
            }
            else {
                _dev_err(iVar6,"Error in port_index specification\n");
            }
        }
        piVar12 = 0xffffffffffffffea;
    }
code_r0x080018e8:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) != iStack_118) {
        iVar10 = __stack_chk_fail();
        *extraout_x18_01 = 0x8001964;
        pcVar9 = *(iVar10 + -0x20);
        if (pcVar9 != sym.__typeid__ZTSFiPvS_mE_global_addr) {
            __cfi_slowpath_diag(0x268e9722c14a4592,pcVar9,0x8000200);
        }
        piVar12 = (*pcVar9)(*(iVar10 + -0x28),iVar10 + 0x30,0x10);
        return piVar12;
    }
    return piVar12;
}


// ===== sym.altmode_send_data @ 0x080015c0 (size 256) =====

int64_t * sym.altmode_send_data(int64_t arg1,uchar noname_1 [16],uint32_t arg2)

{
    int64_t *piVar1;
    int16_t iVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    int16_t *piVar9;
    code *pcVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t *piVar11;
    int64_t *piVar12;
    int64_t iVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
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
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    ulong uStack_40;
    uint uStack_38;
    ulong uStack_34;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    arg1 = *arg1;
    uStack_2c = 0;
    uStack_34 = 0;
    if (arg2 < 9) {
        uStack_40 = 0x10000800c;
        uStack_38 = 0x15;
        memcpy(&uStack_34);
        *(arg1 + 0x198) = 0;
        uVar3 = pmic_glink_write(*(arg1 + 8),&uStack_40,0x18);
        if (uVar3 == 0) {
            iVar4 = wait_for_completion_timeout(arg1 + 0x198,0xfa);
            if (iVar4 != 0) {
                piVar11 = NULL;
                goto code_r0x08001644;
            }
            piVar11 = 0xffffff92;
        }
        else {
            piVar11 = uVar3;
        }
        _printk(0x80005ab,"altmode_write",piVar11);
    }
    else {
        _printk(0x8000276,"__altmode_send_data",arg2,8);
        piVar11 = 0xffffffea;
    }
code_r0x08001644:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return piVar11;
    }
    auVar14 = __stack_chk_fail();
    piVar9 = auVar14._8_8_;
    iVar7 = auVar14._0_8_;
    *extraout_x18 = sym.altmode_register_client;
    pcStack_78 = sym.altmode_register_client;
    iVar5 = sp_el0;
    piVar11 = 0xffffffffffffffea;
    iStack_88 = *(iVar5 + 0x5e0);
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
    puStack_80 = &stack0xffffffffffffffe0;
    if ((iVar7 != 0) && (piVar9 != NULL)) {
        if ((*(piVar9 + 4) != 0) && (((*(piVar9 + 8) != 0 && (*(piVar9 + 0xc) != 0)) && (*piVar9 != 0)))) {
            iVar4 = of_parse_phandle_with_args(*(iVar7 + 0x2f0),"qcom,altmode-dev","#altmode-cells",0,&uStack_d8);
            if (iVar4 != 0) {
                _dev_err(iVar7,"Error parsing qcom,altmode-dev property: %d\n",iVar4);
                piVar11 = iVar4;
                goto code_r0x080018e8;
            }
            if (uStack_d0 == 1) {
                if (uStack_d0._4_4_ < 4) {
                    iVar5 = of_find_device_by_node(uStack_d8);
                    if ((iVar5 == 0) || (iVar5 = *(iVar5 + 0xa8), iVar5 == 0)) {
                        piVar11 = 0xfffffffffffffdfb;
                    }
                    else {
                        piVar11 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xdc0,0x80);
                        if (piVar11 == NULL) {
                            piVar11 = 0xfffffffffffffff4;
                        }
                        else {
                            *piVar11 = iVar5;
                            iVar2 = *piVar9;
                            *(piVar11 + 7) = uStack_d0 >> 0x20;
                            iVar7 = *(piVar9 + 8);
                            iVar13 = *(piVar9 + 0xc);
                            *(piVar11 + 1) = iVar2;
                            piVar11[8] = 0xfffffffe0;
                            piVar11[3] = iVar7;
                            piVar11[4] = iVar13;
                            piVar11[9] = piVar11 + 9;
                            piVar11[10] = piVar11 + 9;
                            uVar6 = *(piVar9 + 4);
                            piVar11[0xb] = sym.client_cb_work.2cbc27abfbd7ad4b3b738befddff02f6.cfi_jt;
                            iVar7 = kstrdup(uVar6,0xcc0);
                            piVar11[2] = iVar7;
                            if (iVar7 == 0) {
                                kfree(piVar11);
                                piVar11 = 0xfffffffffffffff4;
                            }
                            else {
                                iVar7 = iVar5 + 0x28;
                                mutex_lock(iVar7);
                                uVar3 = CONCAT21(piVar11[1],piVar11[7]);
                                iVar4 = idr_alloc(iVar5 + 0x10,piVar11,uVar3,uVar3 + 1,0xcc0);
                                if (iVar4 < 0) {
                                    _printk(0x8000341,"altmode_register_client",*(piVar9 + 4),iVar4);
                                    mutex_unlock(iVar7);
                                    kfree(piVar11[2]);
                                    kfree(piVar11);
                                    piVar11 = iVar4;
                                }
                                else {
                                    piVar1 = piVar11 + 5;
                                    piVar12 = iVar5 + 0x68;
                                    iVar13 = *piVar12;
                                    uVar8 = __list_add_valid(piVar1,piVar12,iVar13);
                                    if ((uVar8 & 1) != 0) {
                                        *(iVar13 + 8) = piVar1;
                                        piVar11[5] = iVar13;
                                        piVar11[6] = piVar12;
                                        *piVar12 = piVar1;
                                    }
                                    mutex_unlock(iVar7);
                                    if (*(iVar5 + 0x78) == 0) {
                                        queue_delayed_work_on(0x20,_mutex_lock,iVar5 + 0x80,5);
                                    }
                                }
                            }
                        }
                    }
                    goto code_r0x080018e8;
                }
                _dev_err(iVar7,"Invalid port_index: %d, max is %d\n",uStack_d0._4_4_,3);
            }
            else {
                _dev_err(iVar7,"Error in port_index specification\n");
            }
        }
        piVar11 = 0xffffffffffffffea;
    }
code_r0x080018e8:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_88) {
        return piVar11;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18_00 = 0x8001964;
    pcVar10 = *(iVar5 + -0x20);
    if (pcVar10 != sym.__typeid__ZTSFiPvS_mE_global_addr) {
        __cfi_slowpath_diag(0x268e9722c14a4592,pcVar10,0x8000200);
    }
    piVar11 = (*pcVar10)(*(iVar5 + -0x28),iVar5 + 0x30,0x10);
    return piVar11;
}


// ===== sym.altmode_register_client @ 0x080016c0 (size 680) =====

int64_t * sym.altmode_register_client(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint32_t uVar2;
    ushort uVar3;
    int iVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    code *pcVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar10;
    int64_t *piVar11;
    int64_t iVar12;
    ulong unaff_x30;
    ulong uStack_98;
    ulong uStack_90;
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
    iVar5 = sp_el0;
    piVar10 = 0xffffffffffffffea;
    iStack_48 = *(iVar5 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    if ((arg1 != 0) && (arg2 != 0)) {
        if ((*(arg2 + 8) != 0) && (((*(arg2 + 0x10) != 0 && (*(arg2 + 0x18) != 0)) && (*arg2 != 0)))) {
            iVar4 = of_parse_phandle_with_args
                              (*(arg1 + 0x2f0),"qcom,altmode-dev","#altmode-cells",0,&stack0xffffffffffffff68);
            if (iVar4 != 0) {
                _dev_err(arg1,"Error parsing qcom,altmode-dev property: %d\n",iVar4);
                piVar10 = iVar4;
                goto code_r0x080018e8;
            }
            if (uStack_90 == 1) {
                if (uStack_90._4_4_ < 4) {
                    iVar5 = of_find_device_by_node(uStack_98);
                    if ((iVar5 == 0) || (iVar5 = *(iVar5 + 0xa8), iVar5 == 0)) {
                        piVar10 = 0xfffffffffffffdfb;
                    }
                    else {
                        piVar10 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xdc0,0x80);
                        if (piVar10 == NULL) {
                            piVar10 = 0xfffffffffffffff4;
                        }
                        else {
                            *piVar10 = iVar5;
                            uVar3 = *arg2;
                            *(piVar10 + 7) = uStack_90 >> 0x20;
                            iVar7 = *(arg2 + 0x10);
                            iVar12 = *(arg2 + 0x18);
                            *(piVar10 + 1) = uVar3;
                            piVar10[8] = 0xfffffffe0;
                            piVar10[3] = iVar7;
                            piVar10[4] = iVar12;
                            piVar10[9] = piVar10 + 9;
                            piVar10[10] = piVar10 + 9;
                            uVar6 = *(arg2 + 8);
                            piVar10[0xb] = sym.client_cb_work.2cbc27abfbd7ad4b3b738befddff02f6.cfi_jt;
                            iVar7 = kstrdup(uVar6,0xcc0);
                            piVar10[2] = iVar7;
                            if (iVar7 == 0) {
                                kfree(piVar10);
                                piVar10 = 0xfffffffffffffff4;
                            }
                            else {
                                iVar7 = iVar5 + 0x28;
                                mutex_lock(iVar7);
                                uVar2 = CONCAT21(piVar10[1],piVar10[7]);
                                iVar4 = idr_alloc(iVar5 + 0x10,piVar10,uVar2,uVar2 + 1,0xcc0);
                                if (iVar4 < 0) {
                                    _printk(0x8000341,"altmode_register_client",*(arg2 + 8),iVar4);
                                    mutex_unlock(iVar7);
                                    kfree(piVar10[2]);
                                    kfree(piVar10);
                                    piVar10 = iVar4;
                                }
                                else {
                                    piVar1 = piVar10 + 5;
                                    piVar11 = iVar5 + 0x68;
                                    iVar12 = *piVar11;
                                    uVar8 = __list_add_valid(piVar1,piVar11,iVar12);
                                    if ((uVar8 & 1) != 0) {
                                        *(iVar12 + 8) = piVar1;
                                        piVar10[5] = iVar12;
                                        piVar10[6] = piVar11;
                                        *piVar11 = piVar1;
                                    }
                                    mutex_unlock(iVar7);
                                    if (*(iVar5 + 0x78) == 0) {
                                        queue_delayed_work_on(0x20,_mutex_lock,iVar5 + 0x80,5);
                                    }
                                }
                            }
                        }
                    }
                    goto code_r0x080018e8;
                }
                _dev_err(arg1,"Invalid port_index: %d, max is %d\n",uStack_90._4_4_,3);
            }
            else {
                _dev_err(arg1,"Error in port_index specification\n");
            }
        }
        piVar10 = 0xffffffffffffffea;
    }
code_r0x080018e8:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return piVar10;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = 0x8001964;
    pcVar9 = *(iVar5 + -0x20);
    if (pcVar9 != sym.__typeid__ZTSFiPvS_mE_global_addr) {
        __cfi_slowpath_diag(0x268e9722c14a4592,pcVar9,0x8000200);
    }
    piVar10 = (*pcVar9)(*(iVar5 + -0x28),iVar5 + 0x30,0x10);
    return piVar10;
}


// ===== sym.client_cb_work @ 0x08001968 (size 124) =====

void sym.client_cb_work(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = *(arg1 + -0x20);
    if (pcVar1 != sym.__typeid__ZTSFiPvS_mE_global_addr) {
        __cfi_slowpath_diag(0x268e9722c14a4592,pcVar1,0x8000200);
    }
    (*pcVar1)(*(arg1 + -0x28),arg1 + 0x30,0x10);
    return;
}


// ===== sym.altmode_deregister_client @ 0x080019e4 (size 236) =====

ulong sym.altmode_deregister_client(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t iVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (iVar6 = *arg1, iVar6 == 0)) {
        uVar5 = 0xffffffed;
    }
    else {
        cancel_work_sync(arg1 + 0x40);
        mutex_lock(iVar6 + 0x28);
        idr_remove(iVar6 + 0x10,CONCAT21(*(arg1 + 8),*(arg1 + 0x38)));
        piVar7 = *(iVar6 + 0x68);
        while (piVar3 = piVar7, iVar6 + 0x68 != piVar3) {
            piVar7 = *piVar3;
            if (piVar3 + -5 == arg1) {
                uVar4 = __list_del_entry_valid(piVar3);
                if ((uVar4 & 1) != 0) {
                    iVar1 = *piVar3;
                    piVar2 = piVar3[1];
                    *(iVar1 + 8) = piVar2;
                    *piVar2 = iVar1;
                }
                *piVar3 = -0x2152ffffffffff00;
                piVar3[1] = -0x2152fffffffffede;
            }
        }
        mutex_unlock(iVar6 + 0x28);
        kfree(*(arg1 + 0x10));
        kfree(arg1);
        uVar5 = 0;
    }
    return uVar5;
}


// ===== sym.altmode_probe @ 0x08001ad0 (size 736) =====

uint64_t sym.altmode_probe(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar6;
    ulong *puVar7;
    code *pcVar8;
    code *pcVar9;
    int64_t *piVar10;
    ulong unaff_x30;
    char *pcStack_80;
    ulong uStack_78;
    int64_t *piStack_70;
    code *pcStack_68;
    code *pcStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iVar5 = arg1 + 0x10;
    iStack_58 = *(iVar2 + 0x5e0);
    uStack_78 = 0x800c;
    piVar3 = devm_kmalloc(iVar5,0x1c0,0xdc0);
    if (piVar3 == NULL) {
        uVar4 = 0xfffffff4;
    }
    else {
        *piVar3 = iVar5;
        __mutex_init(piVar3 + 5,"&amdev->client_lock",obj.altmode_probe.__key);
        piVar3[3] = 0;
        piVar3[4] = 0;
        piVar3[2] = 0x1000000400000000;
        *(piVar3 + 0x33) = 0;
        __init_swait_queue_head(piVar3 + 0x34,"&x->wait",obj.notify_lock);
        piVar3[0x10] = 0xfffffffe0;
        piVar3[0x11] = piVar3 + 0x11;
        piVar3[0x12] = piVar3 + 0x11;
        piVar3[0x13] = sym.altmode_send_pan_en.2cbc27abfbd7ad4b3b738befddff02f6.cfi_jt;
        init_timer_key(piVar3 + 0x16,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
        piVar3[0x21] = 0xfffffffe0;
        piVar3[0x22] = piVar3 + 0x22;
        piVar3[0x23] = piVar3 + 0x22;
        piVar3[0x24] = sym.altmode_send_pan_ack.2cbc27abfbd7ad4b3b738befddff02f6.cfi_jt;
        init_timer_key(piVar3 + 0x27,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
        piVar3[0xb] = piVar3 + 0xb;
        piVar3[0xc] = piVar3 + 0xb;
        piVar3[0xd] = piVar3 + 0xd;
        piVar3[0xe] = piVar3 + 0xd;
        pcStack_80 = "altmode";
        pcStack_68 = sym.__typeid__ZTSFiPvS_mE_global_addr;
        pcStack_60 = sym.altmode_state_cb.2cbc27abfbd7ad4b3b738befddff02f6.cfi_jt;
        piStack_70 = piVar3;
        uVar4 = pmic_glink_register_client(*piVar3,&pcStack_80);
        piVar3[1] = uVar4;
        if (uVar4 < 0xfffffffffffff001) {
            *(arg1 + 0xa8) = piVar3;
            _segment.ehdr = ipc_log_context_create(10,"altmode",0);
            if (_segment.ehdr == 0) {
                _dev_warn(iVar5,"Error in creating ipc_log_context\n");
            }
            mutex_lock(obj.notify_lock);
            pcVar6 = _obj.probe_notify_list;
            if (_obj.probe_notify_list != obj.probe_notify_list) {
                do {
                    pcVar9 = *pcVar6;
                    iVar5 = of_find_device_by_node(*(pcVar6 + 0x10));
                    if ((iVar5 != 0) && (*(iVar5 + 0xa8) != NULL && *(iVar5 + 0xa8) == piVar3)) {
                        pcVar8 = *(pcVar6 + 0x18);
                        __cfi_slowpath_diag(0x4c550309df1cf4c1,pcVar8,0x8000220);
                        (*pcVar8)(*(pcVar6 + 0x20));
                        uVar4 = __list_del_entry_valid(pcVar6);
                        if ((uVar4 & 1) != 0) {
                            iVar5 = *pcVar6;
                            piVar10 = *(pcVar6 + 8);
                            *(iVar5 + 8) = piVar10;
                            *piVar10 = iVar5;
                        }
                        *pcVar6 = -0x2152ffffffffff00;
                        *(pcVar6 + 8) = -0x2152fffffffffede;
                        kfree(pcVar6);
                    }
                    pcVar6 = pcVar9;
                } while (pcVar9 != obj.probe_notify_list);
            }
            mutex_unlock(obj.notify_lock);
            uVar4 = 0;
        }
        else {
            if (uVar4 != -0x205) {
                _dev_err(iVar5,"Error in pmic_glink registration: %d\n",uVar4 & 0xffffffff);
            }
            idr_destroy(piVar3 + 2);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_58) {
        iVar5 = __stack_chk_fail();
        *extraout_x18 = sym.altmode_remove;
        puVar7 = *(iVar5 + 0xa8);
        debugfs_remove(puVar7[0x32]);
        cancel_delayed_work_sync(puVar7 + 0x10);
        cancel_delayed_work_sync(puVar7 + 0x21);
        idr_destroy(puVar7 + 2);
        *(puVar7 + 0xf) = 0;
        mutex_lock(obj.notify_lock);
        pcVar6 = _obj.probe_notify_list;
        while (pcVar6 != obj.probe_notify_list) {
            pcVar9 = *pcVar6;
            uVar4 = __list_del_entry_valid(pcVar6);
            if ((uVar4 & 1) != 0) {
                iVar5 = *pcVar6;
                piVar3 = *(pcVar6 + 8);
                *(iVar5 + 8) = piVar3;
                *piVar3 = iVar5;
            }
            *pcVar6 = -0x2152ffffffffff00;
            *(pcVar6 + 8) = -0x2152fffffffffede;
            kfree(pcVar6);
            pcVar6 = pcVar9;
        }
        mutex_unlock(obj.notify_lock);
        mutex_lock(puVar7 + 5);
        piVar3 = puVar7[0xd];
        while (piVar3 != puVar7 + 0xd) {
            piVar10 = *piVar3;
            uVar4 = __list_del_entry_valid(piVar3);
            if ((uVar4 & 1) != 0) {
                iVar5 = *piVar3;
                piVar1 = piVar3[1];
                *(iVar5 + 8) = piVar1;
                *piVar1 = iVar5;
            }
            *piVar3 = -0x2152ffffffffff00;
            piVar3[1] = -0x2152fffffffffede;
            piVar3 = piVar10;
        }
        mutex_unlock(puVar7 + 5);
        ipc_log_context_destroy(_segment.ehdr);
        _segment.ehdr = 0;
        uVar4 = pmic_glink_unregister_client(puVar7[1]);
        if (uVar4 < 0) {
            _dev_err(*puVar7,"Error in pmic_glink de-registration: %d\n",uVar4 & 0xffffffff);
        }
        return uVar4 & 0xffffffff;
    }
    return uVar4 & 0xffffffff;
}


// ===== sym.altmode_remove @ 0x08001db0 (size 356) =====

int sym.altmode_remove(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    code *pcVar4;
    int iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong *puVar7;
    code *pcVar8;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar7 = *(arg1 + 0xa8);
    debugfs_remove(puVar7[0x32]);
    cancel_delayed_work_sync(puVar7 + 0x10);
    cancel_delayed_work_sync(puVar7 + 0x21);
    idr_destroy(puVar7 + 2);
    *(puVar7 + 0xf) = 0;
    mutex_lock(obj.notify_lock);
    pcVar4 = _obj.probe_notify_list;
    while (pcVar4 != obj.probe_notify_list) {
        pcVar8 = *pcVar4;
        uVar6 = __list_del_entry_valid(pcVar4);
        if ((uVar6 & 1) != 0) {
            iVar1 = *pcVar4;
            piVar2 = *(pcVar4 + 8);
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        *pcVar4 = -0x2152ffffffffff00;
        *(pcVar4 + 8) = -0x2152fffffffffede;
        kfree(pcVar4);
        pcVar4 = pcVar8;
    }
    mutex_unlock(obj.notify_lock);
    mutex_lock(puVar7 + 5);
    piVar2 = puVar7[0xd];
    while (piVar2 != puVar7 + 0xd) {
        piVar9 = *piVar2;
        uVar6 = __list_del_entry_valid(piVar2);
        if ((uVar6 & 1) != 0) {
            iVar1 = *piVar2;
            piVar3 = piVar2[1];
            *(iVar1 + 8) = piVar3;
            *piVar3 = iVar1;
        }
        *piVar2 = -0x2152ffffffffff00;
        piVar2[1] = -0x2152fffffffffede;
        piVar2 = piVar9;
    }
    mutex_unlock(puVar7 + 5);
    ipc_log_context_destroy(_segment.ehdr);
    _segment.ehdr = 0;
    iVar5 = pmic_glink_unregister_client(puVar7[1]);
    if (iVar5 < 0) {
        _dev_err(*puVar7,"Error in pmic_glink de-registration: %d\n",iVar5);
    }
    return iVar5;
}


// ===== sym.altmode_send_pan_en @ 0x08001f14 (size 276) =====

ulong sym.altmode_send_pan_en(int64_t arg1)

{
    uint32_t uVar1;
    uchar uVar2;
    uint8_t uVar3;
    ulong uVar4;
    int iVar5;
    ulong uVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar10;
    ulong *puVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    ulong uStack_90;
    ulong uStack_88;
    uint8_t uStack_80;
    ushort uStack_7f;
    uchar uStack_7d;
    uint uStack_7c;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_28 = *(iVar8 + 0x5e0);
    uStack_40 = 0x10000800c;
    uStack_38 = 0x1000000015;
    uStack_30 = 0;
    *(arg1 + 0x118) = 0;
    iVar5 = pmic_glink_write(*(arg1 + -0x78),&uStack_40,0x18);
    if (iVar5 == 0) {
        iVar5 = wait_for_completion_timeout(arg1 + 0x118,0xfa);
        if (iVar5 != 0) goto code_r0x08001f7c;
        iVar5 = -0x6e;
        _printk(0x80005ab,"altmode_write",0xffffff92);
code_r0x08002008:
        uVar6 = _printk(0x8000311,"altmode_send_pan_en",iVar5);
    }
    else {
        _printk(0x80005ab,"altmode_write",iVar5);
        if (iVar5 < 0) goto code_r0x08002008;
code_r0x08001f7c:
        *(arg1 + -8) = 1;
        uVar6 = ipc_log_string(_segment.ehdr,"Sent PAN EN\n");
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_28) {
        return uVar6;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.altmode_send_pan_ack;
    pcStack_68 = sym.altmode_send_pan_ack;
    iVar8 = sp_el0;
    iStack_78 = *(iVar8 + 0x5e0);
    *(iVar7 + 0x90) = 0;
    uVar3 = *(iVar7 + 0xb0);
    uVar10 = uVar3;
    uStack_7c = 0;
    uStack_7d = 0;
    uStack_90 = 0x10000800c;
    uStack_88 = 0x1100000015;
    uStack_7f = 0;
    uStack_80 = uVar3;
    puStack_70 = &stack0xffffffffffffffe0;
    iVar5 = pmic_glink_write(*(iVar7 + -0x100),&uStack_90,0x18);
    if (iVar5 == 0) {
        iVar5 = wait_for_completion_timeout(iVar7 + 0x90,0xfa);
        if (iVar5 == 0) {
            iVar5 = -0x6e;
            _printk(0x80005ab,"altmode_write",0xffffff92);
code_r0x08002130:
            uVar10 = uVar3;
            uVar6 = _printk(0x80004a4,"altmode_send_ack",uVar10,iVar5);
            goto code_r0x080020c0;
        }
    }
    else {
        _printk(0x80005ab,"altmode_write",iVar5);
        if (iVar5 < 0) goto code_r0x08002130;
    }
    uVar6 = ipc_log_string(_segment.ehdr,"port %u: Sent PAN ACK\n");
code_r0x080020c0:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_78) {
        return uVar6;
    }
    auVar12 = __stack_chk_fail();
    iVar7 = auVar12._8_8_;
    iVar8 = auVar12._0_8_;
    *extraout_x18_00 = sym.altmode_callback;
    ipc_log_string(_segment.ehdr,"len: %zu owner: %u type: %u opcode %04x\n");
    uVar1 = *(iVar7 + 8) & 0xff;
    if (uVar1 == 0x16) {
        if (uVar10 != 0x20) {
            ipc_log_string(_segment.ehdr,"Expected length %u, got: %zu\n",0x20,uVar10);
            return 0xffffffea;
        }
        uVar1 = *(iVar7 + 8) >> 0x10;
        puVar11 = iVar7 + 0xc;
        uVar2 = *puVar11;
        mutex_lock(iVar8 + 0x28);
        iVar9 = idr_find(iVar8 + 0x10,CONCAT41(uVar1,uVar2));
        mutex_unlock(iVar8 + 0x28);
        if (iVar9 == 0) {
            ipc_log_string(_segment.ehdr,"No client associated with SVID %#x port %u\n",uVar1,uVar2);
            *(iVar8 + 0x1b8) = uVar2;
            queue_delayed_work_on(0x20,_mutex_lock,iVar8 + 0x108,5);
        }
        else {
            ipc_log_string(_segment.ehdr,"Payload: %*ph\n",0x10,puVar11);
            cancel_work_sync(iVar9 + 0x40);
            uVar4 = _mutex_lock;
            uVar6 = *(iVar7 + 0x14);
            *(iVar9 + 0x70) = *puVar11;
            *(iVar9 + 0x78) = uVar6;
            queue_work_on(0x20,uVar4,iVar9 + 0x40);
        }
    }
    else if (uVar1 == 0x15) {
        complete(iVar8 + 0x198);
    }
    return 0;
}


// ===== sym.altmode_send_pan_ack @ 0x08002028 (size 300) =====

ulong sym.altmode_send_pan_ack(int64_t arg1)

{
    uint32_t uVar1;
    uchar uVar2;
    uint8_t uVar3;
    ulong uVar4;
    int iVar5;
    ulong uVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar10;
    ulong *puVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    ulong uStack_50;
    ulong uStack_48;
    uint8_t uStack_40;
    ushort uStack_3f;
    uchar uStack_3d;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    *(arg1 + 0x90) = 0;
    uVar3 = *(arg1 + 0xb0);
    uVar10 = uVar3;
    uStack_3c = 0;
    uStack_3d = 0;
    uStack_50 = 0x10000800c;
    uStack_48 = 0x1100000015;
    uStack_3f = 0;
    uStack_40 = uVar3;
    iVar5 = pmic_glink_write(*(arg1 + -0x100),&uStack_50,0x18);
    if (iVar5 == 0) {
        iVar5 = wait_for_completion_timeout(arg1 + 0x90,0xfa);
        if (iVar5 == 0) {
            iVar5 = -0x6e;
            _printk(0x80005ab,"altmode_write",0xffffff92);
code_r0x08002130:
            uVar10 = uVar3;
            uVar6 = _printk(0x80004a4,"altmode_send_ack",uVar10,iVar5);
            goto code_r0x080020c0;
        }
    }
    else {
        _printk(0x80005ab,"altmode_write",iVar5);
        if (iVar5 < 0) goto code_r0x08002130;
    }
    uVar6 = ipc_log_string(_segment.ehdr,"port %u: Sent PAN ACK\n");
code_r0x080020c0:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return uVar6;
    }
    auVar12 = __stack_chk_fail();
    iVar9 = auVar12._8_8_;
    iVar7 = auVar12._0_8_;
    *extraout_x18 = sym.altmode_callback;
    ipc_log_string(_segment.ehdr,"len: %zu owner: %u type: %u opcode %04x\n");
    uVar1 = *(iVar9 + 8) & 0xff;
    if (uVar1 == 0x16) {
        if (uVar10 != 0x20) {
            ipc_log_string(_segment.ehdr,"Expected length %u, got: %zu\n",0x20,uVar10);
            return 0xffffffea;
        }
        uVar1 = *(iVar9 + 8) >> 0x10;
        puVar11 = iVar9 + 0xc;
        uVar2 = *puVar11;
        mutex_lock(iVar7 + 0x28);
        iVar8 = idr_find(iVar7 + 0x10,CONCAT41(uVar1,uVar2));
        mutex_unlock(iVar7 + 0x28);
        if (iVar8 == 0) {
            ipc_log_string(_segment.ehdr,"No client associated with SVID %#x port %u\n",uVar1,uVar2);
            *(iVar7 + 0x1b8) = uVar2;
            queue_delayed_work_on(0x20,_mutex_lock,iVar7 + 0x108,5);
        }
        else {
            ipc_log_string(_segment.ehdr,"Payload: %*ph\n",0x10,puVar11);
            cancel_work_sync(iVar8 + 0x40);
            uVar4 = _mutex_lock;
            uVar6 = *(iVar9 + 0x14);
            *(iVar8 + 0x70) = *puVar11;
            *(iVar8 + 0x78) = uVar6;
            queue_work_on(0x20,uVar4,iVar8 + 0x40);
        }
    }
    else if (uVar1 == 0x15) {
        complete(iVar7 + 0x198);
    }
    return 0;
}


// ===== sym.altmode_callback @ 0x08002154 (size 352) =====

ulong sym.altmode_callback(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    ulong uVar2;
    uchar uVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *puVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ipc_log_string(_segment.ehdr,"len: %zu owner: %u type: %u opcode %04x\n",arg3,*arg2,*(arg2 + 4),*(arg2 + 8));
    uVar1 = *(arg2 + 8) & 0xff;
    if (uVar1 == 0x16) {
        if (arg3 != 0x20) {
            ipc_log_string(_segment.ehdr,"Expected length %u, got: %zu\n",0x20,arg3);
            return 0xffffffea;
        }
        uVar1 = *(arg2 + 8) >> 0x10;
        puVar6 = arg2 + 0xc;
        uVar3 = *puVar6;
        mutex_lock(arg1 + 0x28);
        iVar5 = idr_find(arg1 + 0x10,CONCAT41(uVar1,uVar3));
        mutex_unlock(arg1 + 0x28);
        if (iVar5 == 0) {
            ipc_log_string(_segment.ehdr,"No client associated with SVID %#x port %u\n",uVar1,uVar3);
            *(arg1 + 0x1b8) = uVar3;
            queue_delayed_work_on(0x20,_mutex_lock,arg1 + 0x108,5);
        }
        else {
            ipc_log_string(_segment.ehdr,"Payload: %*ph\n",0x10,puVar6);
            cancel_work_sync(iVar5 + 0x40);
            uVar4 = _mutex_lock;
            uVar2 = *(arg2 + 0x14);
            *(iVar5 + 0x70) = *puVar6;
            *(iVar5 + 0x78) = uVar2;
            queue_work_on(0x20,uVar4,iVar5 + 0x40);
        }
    }
    else if (uVar1 == 0x15) {
        complete(arg1 + 0x198);
    }
    return 0;
}


// ===== sym.altmode_state_cb @ 0x080022b4 (size 140) =====

void sym.altmode_state_cb(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ipc_log_string(_segment.ehdr,"state: %d\n",arg2 & 0xffffffff);
    if (arg2 == 1) {
        mutex_lock(arg1 + 0x28);
        if (*(arg1 + 0x68) != arg1 + 0x68) {
            queue_delayed_work_on(0x20,_mutex_lock,arg1 + 0x80,5);
        }
        mutex_unlock(arg1 + 0x28);
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x08002344 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08002388

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
    //switch table (4 cases) at 0x8000240
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800239c);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08002420 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.altmode_probe.2cbc27abfbd7ad4b3b738befddff02f6.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08002454 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.altmode_probe.2cbc27abfbd7ad4b3b738befddff02f6.cfi_jt);
    return;
}

