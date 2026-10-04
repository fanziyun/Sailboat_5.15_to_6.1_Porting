// decompiled from ucsi_glink by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 436) =====

//WARNING: Switch with 1 destination removed at 0x0800265c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x268e9722c14a4592) {
        if (arg1 < -0x3557318fb8d07b71) {
            if (arg1 == -0x550b9e52359ac614) {
                pcVar2 = sym.ucsi_qti_setup_work.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt;
            }
            else {
                if (arg1 != -0x4a05a9eac0b09796) goto code_r0x0800261c;
                pcVar2 = sym.ucsi_qti_sync_write.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt;
            }
        }
        else {
            if (arg1 != -0x3557318fb8d07b71) {
                if (arg1 != 0x2b3a43e29242445) goto code_r0x0800261c;
                pcVar2 = sym.init_module.cfi_jt;
                goto code_r0x08001180;
            }
            pcVar2 = sym.ucsi_probe.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt;
        }
code_r0x08001198:
        if (1 < (pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d)) goto code_r0x0800261c;
    }
    else {
        if (arg1 < 0x4aa3977fc3532e27) {
            if (arg1 == 0x268e9722c14a4592) {
                pcVar2 = sym.ucsi_callback.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt;
            }
            else {
                if (arg1 != 0x270677cd32fe9fb0) goto code_r0x0800261c;
                pcVar2 = sym.ucsi_qti_state_cb.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt;
            }
        }
        else {
            if (arg1 == 0x4aa3977fc3532e27) {
                pcVar2 = sym.unregister_ucsi_glink_notifier.cfi_jt;
                goto code_r0x08001198;
            }
            if (arg1 == 0x624156846e4764fe) {
                pcVar2 = sym.ucsi_qti_read.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt;
            }
            else {
                if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800261c;
                pcVar2 = sym.cleanup_module.cfi_jt;
            }
        }
code_r0x08001180:
        if (pcVar1 != pcVar2) {
code_r0x0800261c:
            *in_x18 = unaff_x30;
            if (arg3 != 0) {
                if (4 < *arg3) {
                    return;
                }
                __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
            }
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5502,0x8002670);
            (*pcVar1)();
        }
    }
    return;
}


// ===== sym.ucsi_qti_read.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt @ 0x080011c0 (size 8) =====

uint64_t sym.ucsi_qti_read.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt
                   (ulong param_1,uint32_t param_2,uint64_t param_3,uint64_t param_4)

{
    code *pcVar1;
    uint uVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    uint32_t arg2;
    uint64_t uVar6;
    char *pcVar7;
    uint *extraout_x8;
    uint uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t arg4;
    uint64_t uVar9;
    ulong unaff_x30;
    ulong uStack_180;
    uint uStack_178;
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
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_70 = *(iVar5 + 0x5e0);
    arg4 = param_2;
    uVar6 = param_3;
    uVar9 = param_4;
    iVar5 = ucsi_get_drvdata();
    if (((param_2 < 0x30) && (param_4 < 0x31)) && (arg4 + param_4 < 0x31)) {
        if (*(iVar5 + 0x200) == 0) {
            uVar3 = 0;
            param_4 = uVar6;
            arg4 = uVar9;
        }
        else {
            uStack_180 = 0x10000800b;
            uStack_178 = 0x11;
            mutex_lock(iVar5 + 0x78);
            uVar6 = 0xc;
            *(iVar5 + 0x18) = 0;
            uVar3 = pmic_glink_write(*(iVar5 + 0x10),&uStack_180);
            if (uVar3 < 0) {
                uVar6 = uVar3;
                _printk(0x80004cd,"ucsi_qti_read");
            }
            else {
                iVar4 = wait_for_completion_timeout(iVar5 + 0x18,0x4e2);
                if (iVar4 == 0) {
                    _printk(0x80005bb,"ucsi_qti_read");
                    uVar3 = 0xffffff92;
                }
                else if (*(iVar5 + 0x180) == 0) {
                    uVar3 = 0xffffffc3;
                }
                else {
                    memcpy(param_3,iVar5 + arg4 + 0x144,param_4);
                    *(iVar5 + 0x180) = 0;
                    uStack_80 = 0;
                    uStack_78 = 0;
                    uStack_90 = 0;
                    uStack_88 = 0;
                    uStack_a0 = 0;
                    uStack_98 = 0;
                    uStack_b0 = 0;
                    uStack_a8 = 0;
                    uStack_c0 = 0;
                    uStack_b8 = 0;
                    uStack_d0 = 0;
                    uStack_c8 = 0;
                    uStack_e0 = 0;
                    uStack_d8 = 0;
                    uStack_f0 = 0;
                    uStack_e8 = 0;
                    uStack_100 = 0;
                    uStack_f8 = 0;
                    uStack_110 = 0;
                    uStack_108 = 0;
                    uStack_120 = 0;
                    uStack_118 = 0;
                    uStack_130 = 0;
                    uStack_128 = 0;
                    uStack_140 = 0;
                    uStack_138 = 0;
                    uStack_150 = 0;
                    uStack_148 = 0;
                    uStack_160 = 0;
                    uStack_158 = 0;
                    uStack_170 = 0;
                    uStack_168 = 0;
                    if (param_4 == 0) {
                        uVar6 = 0;
                    }
                    else {
                        uVar9 = 0;
                        uVar6 = 0;
                        do {
                            iVar4 = scnprintf(&uStack_170 + uVar6,0x100 - uVar6,"%02x ",*(param_3 + uVar9));
                            uVar9 = uVar9 + 1;
                            uVar3 = iVar4 + uVar6;
                            uVar6 = uVar3;
                            if (param_4 <= uVar9) break;
                        } while (uVar3 < 0xff);
                        if (0xff < uVar3) {
    //WARNING: Does not return
                            pcVar1 = SoftwareBreakpoint(0x5512,0x8001f0c);
                            (*pcVar1)();
                        }
                    }
                    uVar3 = param_2 >> 2 | param_2 << 0x1e;
                    *(&uStack_170 + uVar6) = 0;
                    if (uVar3 < 9) {
                        pcVar7 = *(uVar3 * 8 + 0x80007b8);
                    }
                    else {
                        pcVar7 = "UNKNOWN:";
                    }
                    ipc_log_string(_segment.ehdr,"%s %s %s\n","read:",pcVar7,&uStack_170);
                    sym.ucsi_qti_notify(iVar5,param_2,param_3,param_4);
                    uVar3 = 0;
                    uVar6 = param_3;
                    uVar9 = param_4;
                }
            }
            mutex_unlock(iVar5 + 0x78);
            param_4 = uVar6;
            arg4 = uVar9;
        }
    }
    else {
        _printk(0x8000386,"validate_ucsi_msg");
        uVar3 = 0xffffffea;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_70) {
        return uVar3;
    }
    __stack_chk_fail();
    uVar8 = extraout_x8 >> 0x20;
    uVar2 = *CONCAT44(uVar8,*extraout_x8);
    *extraout_x18 = 0x8002030;
    iVar5 = ucsi_get_drvdata(CONCAT44(uVar8,uVar2));
    uVar6 = sym.ucsi_qti_glink_write(iVar5,arg2,param_4,arg4);
    return uVar6;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011c8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.ucsi_probe.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080011d0 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.ucsi_probe.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.ucsi_qti_setup_work.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt @ 0x080011d8 (size 8) =====

void sym.ucsi_qti_setup_work.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.ucsi_setup(param_1 + -0x1d0);
    return;
}


// ===== sym.ucsi_qti_notify_work.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt @ 0x080011e0 (size 8) =====

void sym.ucsi_qti_notify_work.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *puVar4;
    ulong *in_x18;
    int64_t iVar5;
    int64_t *piVar6;
    ulong *puVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = param_1 + -200;
    mutex_lock(iVar5);
    puVar7 = param_1 + -0x10;
    puVar4 = *puVar7;
    while (puVar4 != puVar7) {
        piVar6 = *puVar7;
        uVar3 = __list_del_entry_valid(piVar6);
        if ((uVar3 & 1) != 0) {
            iVar1 = *piVar6;
            piVar2 = piVar6[1];
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        *piVar6 = -0x2152ffffffffff00;
        piVar6[1] = -0x2152fffffffffede;
        mutex_unlock(iVar5);
        raw_notifier_call_chain(reloc.ucsi_probe.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt,0,piVar6 + 2);
        kfree(piVar6);
        mutex_lock(iVar5);
        puVar4 = *puVar7;
    }
    mutex_unlock(iVar5);
    return;
}


// ===== sym.ucsi_qti_state_cb.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt @ 0x080011e8 (size 8) =====

void sym.ucsi_qti_state_cb.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt(int64_t param_1,int param_2)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(param_1 + 0x108);
    *(param_1 + 0x200) = param_2;
    if (param_2 == 1) {
        queue_work_on(0x20,_raw_notifier_chain_register,param_1 + 0x1d0);
    }
    else if ((param_2 == 0) && (*(param_1 + 8) != 0)) {
        mutex_lock(param_1 + 0xd8);
        piVar1 = param_1 + 400;
        piVar4 = *(param_1 + 400);
        while (piVar4 != piVar1) {
            piVar6 = *piVar4;
            uVar5 = __list_del_entry_valid(piVar4);
            if ((uVar5 & 1) != 0) {
                iVar2 = *piVar4;
                piVar3 = piVar4[1];
                *(iVar2 + 8) = piVar3;
                *piVar3 = iVar2;
            }
            *piVar4 = -0x2152ffffffffff00;
            piVar4[1] = -0x2152fffffffffede;
            kfree(piVar4);
            piVar4 = piVar6;
        }
        *(param_1 + 400) = piVar1;
        *(param_1 + 0x198) = piVar1;
        mutex_unlock(param_1 + 0xd8);
        ucsi_unregister(*(param_1 + 8));
        ucsi_destroy(*(param_1 + 8));
        *(param_1 + 8) = 0;
    }
    mutex_unlock(param_1 + 0x108);
    return;
}


// ===== sym.ucsi_qti_sync_write.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt @ 0x080011f0 (size 8) =====

void sym.ucsi_qti_sync_write.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt
               (ulong param_1,uint32_t param_2,int64_t param_3,int64_t param_4)

{
    int64_t arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = ucsi_get_drvdata();
    sym.ucsi_qti_glink_write(arg1,param_2,param_3,param_4);
    return;
}


// ===== sym.ucsi_qti_async_write.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt @ 0x080011f8 (size 8) =====

void sym.ucsi_qti_async_write.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt
               (ulong param_1,uint32_t param_2,int64_t param_3,int64_t param_4)

{
    int64_t arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = ucsi_get_drvdata();
    sym.ucsi_qti_glink_write(arg1,param_2,param_3,param_4);
    return;
}


// ===== sym.ucsi_probe.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt @ 0x08001200 (size 8) =====

uint64_t sym.ucsi_probe.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar8;
    int64_t *piVar9;
    ulong unaff_x30;
    char *pcStack_70;
    ulong uStack_68;
    int64_t *piStack_60;
    code *pcStack_58;
    code *pcStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iVar7 = param_1 + 0x10;
    iStack_48 = *(iVar8 + 0x5e0);
    uStack_68 = 0x800b;
    piVar4 = devm_kmalloc(iVar7,0x208,0xdc0);
    if (piVar4 == NULL) {
        uVar5 = 0xfffffff4;
    }
    else {
        piVar4[0x32] = piVar4 + 0x32;
        piVar4[0x33] = piVar4 + 0x32;
        piVar4[0x34] = 0xfffffffe0;
        piVar4[0x35] = piVar4 + 0x35;
        piVar4[0x36] = piVar4 + 0x35;
        piVar4[0x37] = sym.ucsi_qti_notify_work.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt;
        piVar4[0x3a] = 0xfffffffe0;
        piVar4[0x3b] = piVar4 + 0x3b;
        piVar4[0x3c] = piVar4 + 0x3b;
        piVar4[0x3d] = sym.ucsi_qti_setup_work.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt;
        __mutex_init(piVar4 + 0xf,"&udev->read_lock",reloc.ucsi_remove.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt);
        __mutex_init(piVar4 + 0x15,"&udev->write_lock",reloc.ucsi_remove.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt);
        __mutex_init(piVar4 + 0x1b,"&udev->notify_lock",reloc.ucsi_remove.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt);
        __mutex_init(piVar4 + 0x21,"&udev->state_lock",reloc.ucsi_remove.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt);
        *(piVar4 + 3) = 0;
        __init_swait_queue_head(piVar4 + 4,"&x->wait",obj.init_completion.__key);
        *(piVar4 + 7) = 0;
        __init_swait_queue_head(piVar4 + 8,"&x->wait",obj.init_completion.__key);
        *(piVar4 + 0xb) = 0;
        __init_swait_queue_head(piVar4 + 0xc,"&x->wait",obj.init_completion.__key);
        *(piVar4 + 0x30) = 0;
        *(piVar4 + 0x40) = 1;
        pcStack_70 = "ucsi";
        pcStack_58 = sym.ucsi_callback.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt;
        pcStack_50 = sym.ucsi_qti_state_cb.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt;
        piStack_60 = piVar4;
        uVar5 = pmic_glink_register_client(iVar7,&pcStack_70);
        piVar4[2] = uVar5;
        if (uVar5 < 0xfffffffffffff001) {
            *(param_1 + 0xa8) = piVar4;
            *piVar4 = iVar7;
            _segment.ehdr = ipc_log_context_create(10,"ucsi",0);
            if (_segment.ehdr == 0) {
                _dev_warn(iVar7,"Error in creating ipc_log_context\n");
            }
            uVar6 = sym.ucsi_setup(piVar4);
            uVar5 = uVar6 & 0xffffffff;
            if (uVar6 != 0) {
                ipc_log_context_destroy(_segment.ehdr);
                _segment.ehdr = 0;
                pmic_glink_unregister_client(piVar4[2]);
            }
        }
        else if (uVar5 == -0x205) {
            uVar5 = 0xfffffdfb;
        }
        else {
            _dev_err(iVar7,"Error in registering with pmic_glink rc=%d\n",uVar5 & 0xffffffff);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_48) {
        return uVar5 & 0xffffffff;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.ucsi_remove;
    iVar8 = *(iVar7 + 0xa8);
    mutex_lock(iVar8 + 0xd8);
    piVar4 = iVar8 + 400;
    piVar3 = *(iVar8 + 400);
    while (piVar3 != piVar4) {
        piVar9 = *piVar3;
        uVar5 = __list_del_entry_valid(piVar3);
        if ((uVar5 & 1) != 0) {
            iVar1 = *piVar3;
            piVar2 = piVar3[1];
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        *piVar3 = -0x2152ffffffffff00;
        piVar3[1] = -0x2152fffffffffede;
        kfree(piVar3);
        piVar3 = piVar9;
    }
    *(iVar8 + 400) = piVar4;
    *(iVar8 + 0x198) = piVar4;
    mutex_unlock(iVar8 + 0xd8);
    cancel_work_sync(iVar8 + 0x1a0);
    ucsi_unregister(*(iVar8 + 8));
    ucsi_destroy(*(iVar8 + 8));
    uVar5 = pmic_glink_unregister_client(*(iVar8 + 0x10));
    if (uVar5 < 0) {
        _dev_err(iVar7 + 0x10,"pmic_glink_unregister_client failed rc=%d\n",uVar5 & 0xffffffff);
    }
    ipc_log_context_destroy(_segment.ehdr);
    _segment.ehdr = 0;
    return uVar5 & 0xffffffff;
}


// ===== sym.ucsi_remove.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt @ 0x08001208 (size 8) =====

int sym.ucsi_remove.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    int iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(param_1 + 0xa8);
    mutex_lock(iVar7 + 0xd8);
    piVar1 = iVar7 + 400;
    piVar4 = *(iVar7 + 400);
    while (piVar4 != piVar1) {
        piVar8 = *piVar4;
        uVar6 = __list_del_entry_valid(piVar4);
        if ((uVar6 & 1) != 0) {
            iVar2 = *piVar4;
            piVar3 = piVar4[1];
            *(iVar2 + 8) = piVar3;
            *piVar3 = iVar2;
        }
        *piVar4 = -0x2152ffffffffff00;
        piVar4[1] = -0x2152fffffffffede;
        kfree(piVar4);
        piVar4 = piVar8;
    }
    *(iVar7 + 400) = piVar1;
    *(iVar7 + 0x198) = piVar1;
    mutex_unlock(iVar7 + 0xd8);
    cancel_work_sync(iVar7 + 0x1a0);
    ucsi_unregister(*(iVar7 + 8));
    ucsi_destroy(*(iVar7 + 8));
    iVar5 = pmic_glink_unregister_client(*(iVar7 + 0x10));
    if (iVar5 < 0) {
        _dev_err(param_1 + 0x10,"pmic_glink_unregister_client failed rc=%d\n",iVar5);
    }
    ipc_log_context_destroy(_segment.ehdr);
    _segment.ehdr = 0;
    return iVar5;
}


// ===== sym.unregister_ucsi_glink_notifier.cfi_jt @ 0x08001210 (size 8) =====

void sym.unregister_ucsi_glink_notifier.cfi_jt(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    raw_notifier_chain_unregister(reloc.ucsi_probe.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt,param_1);
    return;
}


// ===== sym.register_ucsi_glink_notifier.cfi_jt @ 0x08001218 (size 8) =====

void sym.register_ucsi_glink_notifier.cfi_jt(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    raw_notifier_chain_register(reloc.ucsi_probe.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt,param_1);
    return;
}


// ===== sym.ucsi_callback.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt @ 0x08001220 (size 8) =====

ulong sym.ucsi_callback.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt(int64_t param_1,ulong *param_2,int64_t param_3)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    ulong uVar5;
    ulong uVar6;
    uint32_t uVar7;
    code *pcVar8;
    uint32_t uVar9;
    int iVar10;
    int64_t *piVar11;
    uint64_t uVar12;
    ulong uVar13;
    char *pcVar14;
    uint uVar15;
    uint uVar16;
    int64_t iVar17;
    ulong *in_x18;
    ulong *puVar18;
    ulong unaff_x30;
    uchar uStack_15b;
    uchar uStack_15a;
    uchar uStack_159;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
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
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar17 = sp_el0;
    iStack_58 = *(iVar17 + 0x5e0);
    iVar10 = *(param_2 + 1);
    switch(iVar10) {
    case 0x11:
        if (param_3 == 0x40) {
            uVar13 = param_2[6];
            uVar1 = param_2[4];
            uVar4 = param_2[5];
            *(param_1 + 0x170) = param_2[7];
            uVar2 = param_2[2];
            uVar5 = param_2[3];
            uVar3 = *param_2;
            uVar6 = param_2[1];
            *(param_1 + 0x160) = uVar4;
            *(param_1 + 0x168) = uVar13;
            iVar10 = *(param_1 + 0x174);
            *(param_1 + 0x158) = uVar1;
            *(param_1 + 0x148) = uVar2;
            *(param_1 + 0x150) = uVar5;
            *(param_1 + 0x138) = uVar3;
            *(param_1 + 0x140) = uVar6;
            if (iVar10 != 0) {
                uVar13 = 0x800044a;
                pcVar14 = "handle_ucsi_read_ack";
                goto code_r0x08001b1c;
            }
            *(param_1 + 0x180) = 1;
            complete(param_1 + 0x18);
        }
        else {
            _printk(0x80002da,"handle_ucsi_read_ack",param_3,0x40);
            *(param_1 + 0x180) = 0;
        }
        break;
    case 0x12:
        if (param_3 == 0x10) {
            iVar10 = *(param_2 + 0xc);
            if (iVar10 != 0) {
                uVar13 = 0x800044a;
                pcVar14 = "handle_ucsi_write_ack";
                goto code_r0x08001b1c;
            }
            complete(param_1 + 0x38);
        }
        else {
            _printk(0x80002da,"handle_ucsi_write_ack",param_3,0x10);
        }
        break;
    case 0x13:
        if (param_3 == 0x18) {
            mutex_lock(param_1 + 0x108);
            if (*(param_1 + 0x200) == 0) {
                uVar13 = 0x800023d;
code_r0x08001b38:
                _printk(uVar13,"handle_ucsi_notify");
            }
            else {
                if (*(param_1 + 8) == 0) {
                    uVar13 = 0x8000327;
                    goto code_r0x08001b38;
                }
                uVar7 = *(param_2 + 0xc);
                uStack_68 = 0;
                uStack_60 = 0;
                uStack_78 = 0;
                uStack_70 = 0;
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
                uStack_138 = 0;
                uStack_130 = 0;
                uStack_148 = 0;
                uStack_140 = 0;
                uStack_158 = 0;
                uStack_150 = 0;
                uVar9 = scnprintf(&uStack_158,0x100,"%02x ",uVar7 & 0xff);
                if (uVar9 < 0xff) {
                    uStack_15b = uVar7 >> 8;
                    iVar10 = scnprintf(&uStack_158 + uVar9,0x100 - uVar9,"%02x ",uStack_15b);
                    uVar9 = iVar10 + uVar9;
                    if (uVar9 < 0xff) {
                        uStack_15a = uVar7 >> 0x10;
                        iVar10 = scnprintf(&uStack_158 + uVar9,0x100 - uVar9,"%02x ",uStack_15a);
                        uVar9 = iVar10 + uVar9;
                        if (uVar9 < 0xff) {
                            uStack_159 = uVar7 >> 0x18;
                            iVar10 = scnprintf(&uStack_158 + uVar9,0x100 - uVar9,"%02x ",uStack_159);
                            uVar9 = iVar10 + uVar9;
                        }
                    }
                }
                if (0xff < uVar9) goto code_r0x08001b8c;
                *(&uStack_158 + uVar9) = 0;
                ipc_log_string(CONCAT44(*0x8000004,_segment.ehdr),"%s %s %s\n","notify:","CCI:",&uStack_158);
                if (((*(param_1 + 0x178) >> 1 & 1) != 0) && ((uVar7 & 0xa0000000) != 0)) {
                    complete(param_1 + 0x58);
                }
                if (1 < (uVar7 & 0xff)) {
                    uVar9 = uVar7 >> 1 & 0x7f;
                    if ((((uVar9 <= *(*(param_1 + 8) + 0x24)) && (iVar17 = *(*(param_1 + 8) + 0x30), iVar17 != 0)) &&
                        (uVar12 = uVar9 - 1, iVar17 + uVar12 * 0x378 != 0)) && (*(iVar17 + uVar12 * 0x378 + 8) != 0)) {
                        ucsi_connector_change();
                    }
                }
            }
            mutex_unlock(param_1 + 0x108);
        }
        else {
            pcVar14 = "handle_ucsi_notify";
code_r0x08001aec:
            _printk(0x80002da,pcVar14,param_3,0x18);
        }
        break;
    default:
        uVar13 = 0x80005d2;
        pcVar14 = "ucsi_callback";
code_r0x08001b1c:
        _printk(uVar13,pcVar14,iVar10);
        break;
    case 0x18:
        if (param_3 != 0x18) {
            pcVar14 = "handle_ucsi_notify_cid";
            goto code_r0x08001aec;
        }
        iVar17 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar17 = 0x30;
        }
        piVar11 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar17),0xdc0,0x20);
        if (piVar11 != NULL) {
            uVar7 = *(param_2 + 0xc);
            uVar15 = 1;
            uVar9 = uVar7 >> 1 & 1;
            uVar16 = 1;
            if (uVar9 == 0) {
                uVar15 = 2;
            }
            if ((uVar7 & 1) == 0) {
                uVar16 = 2;
            }
            _printk(0x8000263,"handle_ucsi_notify_cid",uVar7,uVar7 & 1,uVar9);
            *piVar11 = piVar11;
            piVar11[1] = piVar11;
            *(piVar11 + 0x14) = uVar16;
            *(piVar11 + 3) = uVar15;
            *(piVar11 + 2) = _segment.ehdr;
            _segment.ehdr = uVar15;
            mutex_lock(param_1 + 0xd8);
            puVar18 = *(param_1 + 0x198);
            uVar12 = __list_add_valid(piVar11,puVar18,param_1 + 400);
            if ((uVar12 & 1) != 0) {
                *(param_1 + 0x198) = piVar11;
                *piVar11 = param_1 + 400;
                piVar11[1] = puVar18;
                *puVar18 = piVar11;
            }
            mutex_unlock(param_1 + 0xd8);
            queue_work_on(0x20,_raw_notifier_chain_register,param_1 + 0x1a0);
        }
    }
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_58) {
        return 0;
    }
    __stack_chk_fail();
code_r0x08001b8c:
    //WARNING: Does not return
    pcVar8 = SoftwareBreakpoint(0x5512,0x8001b90);
    (*pcVar8)();
}


// ===== sym.register_ucsi_glink_notifier @ 0x08001228 (size 48) =====

void sym.register_ucsi_glink_notifier(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    raw_notifier_chain_register(reloc.ucsi_probe.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt,arg1);
    return;
}


// ===== sym.unregister_ucsi_glink_notifier @ 0x08001258 (size 48) =====

void sym.unregister_ucsi_glink_notifier(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    raw_notifier_chain_unregister(reloc.ucsi_probe.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt,arg1);
    return;
}


// ===== sym.ucsi_probe @ 0x08001288 (size 608) =====

uint64_t sym.ucsi_probe(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar8;
    int64_t *piVar9;
    ulong unaff_x30;
    char *pcStack_70;
    ulong uStack_68;
    int64_t *piStack_60;
    code *pcStack_58;
    code *pcStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iVar7 = arg1 + 0x10;
    iStack_48 = *(iVar8 + 0x5e0);
    uStack_68 = 0x800b;
    piVar4 = devm_kmalloc(iVar7,0x208,0xdc0);
    if (piVar4 == NULL) {
        uVar5 = 0xfffffff4;
    }
    else {
        piVar4[0x32] = piVar4 + 0x32;
        piVar4[0x33] = piVar4 + 0x32;
        piVar4[0x34] = 0xfffffffe0;
        piVar4[0x35] = piVar4 + 0x35;
        piVar4[0x36] = piVar4 + 0x35;
        piVar4[0x37] = sym.ucsi_qti_notify_work.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt;
        piVar4[0x3a] = 0xfffffffe0;
        piVar4[0x3b] = piVar4 + 0x3b;
        piVar4[0x3c] = piVar4 + 0x3b;
        piVar4[0x3d] = sym.ucsi_qti_setup_work.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt;
        __mutex_init(piVar4 + 0xf,"&udev->read_lock",reloc.ucsi_remove.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt);
        __mutex_init(piVar4 + 0x15,"&udev->write_lock",reloc.ucsi_remove.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt);
        __mutex_init(piVar4 + 0x1b,"&udev->notify_lock",reloc.ucsi_remove.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt);
        __mutex_init(piVar4 + 0x21,"&udev->state_lock",reloc.ucsi_remove.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt);
        *(piVar4 + 3) = 0;
        __init_swait_queue_head(piVar4 + 4,"&x->wait",obj.init_completion.__key);
        *(piVar4 + 7) = 0;
        __init_swait_queue_head(piVar4 + 8,"&x->wait",obj.init_completion.__key);
        *(piVar4 + 0xb) = 0;
        __init_swait_queue_head(piVar4 + 0xc,"&x->wait",obj.init_completion.__key);
        *(piVar4 + 0x30) = 0;
        *(piVar4 + 0x40) = 1;
        pcStack_70 = "ucsi";
        pcStack_58 = sym.ucsi_callback.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt;
        pcStack_50 = sym.ucsi_qti_state_cb.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt;
        piStack_60 = piVar4;
        uVar5 = pmic_glink_register_client(iVar7,&pcStack_70);
        piVar4[2] = uVar5;
        if (uVar5 < 0xfffffffffffff001) {
            *(arg1 + 0xa8) = piVar4;
            *piVar4 = iVar7;
            _segment.ehdr = ipc_log_context_create(10,"ucsi",0);
            if (_segment.ehdr == 0) {
                _dev_warn(iVar7,"Error in creating ipc_log_context\n");
            }
            uVar6 = sym.ucsi_setup(piVar4);
            uVar5 = uVar6 & 0xffffffff;
            if (uVar6 != 0) {
                ipc_log_context_destroy(_segment.ehdr);
                _segment.ehdr = 0;
                pmic_glink_unregister_client(piVar4[2]);
            }
        }
        else if (uVar5 == -0x205) {
            uVar5 = 0xfffffdfb;
        }
        else {
            _dev_err(iVar7,"Error in registering with pmic_glink rc=%d\n",uVar5 & 0xffffffff);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_48) {
        return uVar5 & 0xffffffff;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.ucsi_remove;
    iVar8 = *(iVar7 + 0xa8);
    mutex_lock(iVar8 + 0xd8);
    piVar4 = iVar8 + 400;
    piVar3 = *(iVar8 + 400);
    while (piVar3 != piVar4) {
        piVar9 = *piVar3;
        uVar5 = __list_del_entry_valid(piVar3);
        if ((uVar5 & 1) != 0) {
            iVar1 = *piVar3;
            piVar2 = piVar3[1];
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        *piVar3 = -0x2152ffffffffff00;
        piVar3[1] = -0x2152fffffffffede;
        kfree(piVar3);
        piVar3 = piVar9;
    }
    *(iVar8 + 400) = piVar4;
    *(iVar8 + 0x198) = piVar4;
    mutex_unlock(iVar8 + 0xd8);
    cancel_work_sync(iVar8 + 0x1a0);
    ucsi_unregister(*(iVar8 + 8));
    ucsi_destroy(*(iVar8 + 8));
    uVar5 = pmic_glink_unregister_client(*(iVar8 + 0x10));
    if (uVar5 < 0) {
        _dev_err(iVar7 + 0x10,"pmic_glink_unregister_client failed rc=%d\n",uVar5 & 0xffffffff);
    }
    ipc_log_context_destroy(_segment.ehdr);
    _segment.ehdr = 0;
    return uVar5 & 0xffffffff;
}


// ===== sym.ucsi_remove @ 0x080014e8 (size 272) =====

int sym.ucsi_remove(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    int iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(arg1 + 0xa8);
    mutex_lock(iVar7 + 0xd8);
    piVar1 = iVar7 + 400;
    piVar4 = *(iVar7 + 400);
    while (piVar4 != piVar1) {
        piVar8 = *piVar4;
        uVar6 = __list_del_entry_valid(piVar4);
        if ((uVar6 & 1) != 0) {
            iVar2 = *piVar4;
            piVar3 = piVar4[1];
            *(iVar2 + 8) = piVar3;
            *piVar3 = iVar2;
        }
        *piVar4 = -0x2152ffffffffff00;
        piVar4[1] = -0x2152fffffffffede;
        kfree(piVar4);
        piVar4 = piVar8;
    }
    *(iVar7 + 400) = piVar1;
    *(iVar7 + 0x198) = piVar1;
    mutex_unlock(iVar7 + 0xd8);
    cancel_work_sync(iVar7 + 0x1a0);
    ucsi_unregister(*(iVar7 + 8));
    ucsi_destroy(*(iVar7 + 8));
    iVar5 = pmic_glink_unregister_client(*(iVar7 + 0x10));
    if (iVar5 < 0) {
        _dev_err(arg1 + 0x10,"pmic_glink_unregister_client failed rc=%d\n",iVar5);
    }
    ipc_log_context_destroy(_segment.ehdr);
    _segment.ehdr = 0;
    return iVar5;
}


// ===== sym.ucsi_qti_notify_work @ 0x080015f8 (size 208) =====

void sym.ucsi_qti_notify_work(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *puVar4;
    ulong *in_x18;
    int64_t iVar5;
    int64_t *piVar6;
    ulong *puVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = arg1 + -200;
    mutex_lock(iVar5);
    puVar7 = arg1 + -0x10;
    puVar4 = *puVar7;
    while (puVar4 != puVar7) {
        piVar6 = *puVar7;
        uVar3 = __list_del_entry_valid(piVar6);
        if ((uVar3 & 1) != 0) {
            iVar1 = *piVar6;
            piVar2 = piVar6[1];
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        *piVar6 = -0x2152ffffffffff00;
        piVar6[1] = -0x2152fffffffffede;
        mutex_unlock(iVar5);
        raw_notifier_call_chain(reloc.ucsi_probe.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt,0,piVar6 + 2);
        kfree(piVar6);
        mutex_lock(iVar5);
        puVar4 = *puVar7;
    }
    mutex_unlock(iVar5);
    return;
}


// ===== sym.ucsi_qti_setup_work @ 0x080016d0 (size 40) =====

void sym.ucsi_qti_setup_work(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.ucsi_setup(arg1 + -0x1d0);
    return;
}


// ===== sym.ucsi_callback @ 0x080016f8 (size 1176) =====

ulong sym.ucsi_callback(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    ulong uVar5;
    ulong uVar6;
    uint32_t uVar7;
    code *pcVar8;
    uint32_t uVar9;
    int iVar10;
    int64_t *piVar11;
    uint64_t uVar12;
    ulong uVar13;
    char *pcVar14;
    uint uVar15;
    uint uVar16;
    int64_t iVar17;
    ulong *in_x18;
    ulong *puVar18;
    ulong unaff_x30;
    uchar uStack_15b;
    uchar uStack_15a;
    uchar uStack_159;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
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
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar17 = sp_el0;
    iStack_58 = *(iVar17 + 0x5e0);
    iVar10 = *(arg2 + 8);
    if (iVar10 - 0x11U < 8) {
    //switch table (8 cases) at 0x8000218
        switch(*((iVar10 - 0x11U) * 4 + 0x8000218) + 0x8001748) {
        case 0x800175c:
            if (arg3 != 0x40) {
                _printk(0x80002da,"handle_ucsi_read_ack",arg3,0x40);
                *(arg1 + 0x180) = 0;
                break;
            }
            uVar13 = *(arg2 + 0x30);
            uVar1 = *(arg2 + 0x20);
            uVar4 = *(arg2 + 0x28);
            *(arg1 + 0x170) = *(arg2 + 0x38);
            uVar2 = *(arg2 + 0x10);
            uVar5 = *(arg2 + 0x18);
            uVar3 = *arg2;
            uVar6 = *(arg2 + 8);
            *(arg1 + 0x160) = uVar4;
            *(arg1 + 0x168) = uVar13;
            iVar10 = *(arg1 + 0x174);
            *(arg1 + 0x158) = uVar1;
            *(arg1 + 0x148) = uVar2;
            *(arg1 + 0x150) = uVar5;
            *(arg1 + 0x138) = uVar3;
            *(arg1 + 0x140) = uVar6;
            if (iVar10 == 0) {
                *(arg1 + 0x180) = 1;
                complete(arg1 + 0x18);
                break;
            }
            uVar13 = 0x800044a;
            pcVar14 = "handle_ucsi_read_ack";
            goto code_r0x08001b1c;
        case 0x80017a8:
            if (arg3 == 0x10) {
                iVar10 = *(arg2 + 0xc);
                if (iVar10 != 0) {
                    uVar13 = 0x800044a;
                    pcVar14 = "handle_ucsi_write_ack";
                    goto code_r0x08001b1c;
                }
                complete(arg1 + 0x38);
            }
            else {
                _printk(0x80002da,"handle_ucsi_write_ack",arg3,0x10);
            }
            break;
        case 0x80017c8:
            if (arg3 == 0x18) {
                mutex_lock(arg1 + 0x108);
                if (*(arg1 + 0x200) == 0) {
                    uVar13 = 0x800023d;
code_r0x08001b38:
                    _printk(uVar13,"handle_ucsi_notify");
                }
                else {
                    if (*(arg1 + 8) == 0) {
                        uVar13 = 0x8000327;
                        goto code_r0x08001b38;
                    }
                    uVar7 = *(arg2 + 0xc);
                    uStack_68 = 0;
                    uStack_60 = 0;
                    uStack_78 = 0;
                    uStack_70 = 0;
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
                    uStack_138 = 0;
                    uStack_130 = 0;
                    uStack_148 = 0;
                    uStack_140 = 0;
                    uStack_158 = 0;
                    uStack_150 = 0;
                    uVar9 = scnprintf(&stack0xfffffffffffffea8,0x100,"%02x ",uVar7 & 0xff);
                    if (uVar9 < 0xff) {
                        uStack_15b = uVar7 >> 8;
                        iVar10 = scnprintf(&stack0xfffffffffffffea8 + uVar9,0x100 - uVar9,"%02x ",uStack_15b);
                        uVar9 = iVar10 + uVar9;
                        if (uVar9 < 0xff) {
                            uStack_15a = uVar7 >> 0x10;
                            iVar10 = scnprintf(&stack0xfffffffffffffea8 + uVar9,0x100 - uVar9,"%02x ",uStack_15a);
                            uVar9 = iVar10 + uVar9;
                            if (uVar9 < 0xff) {
                                uStack_159 = uVar7 >> 0x18;
                                iVar10 = scnprintf(&stack0xfffffffffffffea8 + uVar9,0x100 - uVar9,"%02x ",uStack_159)
                                ;
                                uVar9 = iVar10 + uVar9;
                            }
                        }
                    }
                    if (0xff < uVar9) goto code_r0x08001b8c;
                    (&stack0xfffffffffffffea8)[uVar9] = 0;
                    ipc_log_string(CONCAT44(*0x8000004,_segment.ehdr),"%s %s %s\n","notify:","CCI:",
                                   &stack0xfffffffffffffea8);
                    if (((*(arg1 + 0x178) >> 1 & 1) != 0) && ((uVar7 & 0xa0000000) != 0)) {
                        complete(arg1 + 0x58);
                    }
                    if (1 < (uVar7 & 0xff)) {
                        uVar9 = uVar7 >> 1 & 0x7f;
                        if ((((uVar9 <= *(*(arg1 + 8) + 0x24)) && (iVar17 = *(*(arg1 + 8) + 0x30), iVar17 != 0)) &&
                            (uVar12 = uVar9 - 1, iVar17 + uVar12 * 0x378 != 0)) &&
                           (*(iVar17 + uVar12 * 0x378 + 8) != 0)) {
                            ucsi_connector_change();
                        }
                    }
                }
                mutex_unlock(arg1 + 0x108);
            }
            else {
                pcVar14 = "handle_ucsi_notify";
code_r0x08001aec:
                _printk(0x80002da,pcVar14,arg3,0x18);
            }
            break;
        case 0x8001988:
            if (arg3 != 0x18) {
                pcVar14 = "handle_ucsi_notify_cid";
                goto code_r0x08001aec;
            }
            iVar17 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar17 = 0x30;
            }
            piVar11 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar17),0xdc0,0x20);
            if (piVar11 != NULL) {
                uVar7 = *(arg2 + 0xc);
                uVar15 = 1;
                uVar9 = uVar7 >> 1 & 1;
                uVar16 = 1;
                if (uVar9 == 0) {
                    uVar15 = 2;
                }
                if ((uVar7 & 1) == 0) {
                    uVar16 = 2;
                }
                _printk(0x8000263,"handle_ucsi_notify_cid",uVar7,uVar7 & 1,uVar9);
                *piVar11 = piVar11;
                piVar11[1] = piVar11;
                *(piVar11 + 0x14) = uVar16;
                *(piVar11 + 3) = uVar15;
                *(piVar11 + 2) = _segment.ehdr;
                _segment.ehdr = uVar15;
                mutex_lock(arg1 + 0xd8);
                puVar18 = *(arg1 + 0x198);
                uVar12 = __list_add_valid(piVar11,puVar18,arg1 + 400);
                if ((uVar12 & 1) != 0) {
                    *(arg1 + 0x198) = piVar11;
                    *piVar11 = arg1 + 400;
                    piVar11[1] = puVar18;
                    *puVar18 = piVar11;
                }
                mutex_unlock(arg1 + 0xd8);
                queue_work_on(0x20,_raw_notifier_chain_register,arg1 + 0x1a0);
            }
            break;
        default:
            goto code_r0x08001a74;
        }
    }
    else {
code_r0x08001a74:
        uVar13 = 0x80005d2;
        pcVar14 = "ucsi_callback";
code_r0x08001b1c:
        _printk(uVar13,pcVar14,iVar10);
    }
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_58) {
        return 0;
    }
    __stack_chk_fail();
code_r0x08001b8c:
    //WARNING: Does not return
    pcVar8 = SoftwareBreakpoint(0x5512,0x8001b90);
    (*pcVar8)();
}


// ===== sym.ucsi_qti_state_cb @ 0x08001b94 (size 276) =====

void sym.ucsi_qti_state_cb(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int iVar4;
    int64_t *piVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = arg2;
    mutex_lock(arg1 + 0x108);
    *(arg1 + 0x200) = iVar4;
    if (iVar4 == 1) {
        queue_work_on(0x20,_raw_notifier_chain_register,arg1 + 0x1d0);
    }
    else if ((iVar4 == 0) && (*(arg1 + 8) != 0)) {
        mutex_lock(arg1 + 0xd8);
        piVar1 = arg1 + 400;
        piVar5 = *(arg1 + 400);
        while (piVar5 != piVar1) {
            piVar7 = *piVar5;
            uVar6 = __list_del_entry_valid(piVar5);
            if ((uVar6 & 1) != 0) {
                iVar2 = *piVar5;
                piVar3 = piVar5[1];
                *(iVar2 + 8) = piVar3;
                *piVar3 = iVar2;
            }
            *piVar5 = -0x2152ffffffffff00;
            piVar5[1] = -0x2152fffffffffede;
            kfree(piVar5);
            piVar5 = piVar7;
        }
        *(arg1 + 400) = piVar1;
        *(arg1 + 0x198) = piVar1;
        mutex_unlock(arg1 + 0xd8);
        ucsi_unregister(*(arg1 + 8));
        ucsi_destroy(*(arg1 + 8));
        *(arg1 + 8) = 0;
    }
    mutex_unlock(arg1 + 0x108);
    return;
}


// ===== sym.ucsi_setup @ 0x08001ca8 (size 228) =====

uint64_t sym.ucsi_setup(int64_t arg1)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 8) != 0) {
        _dev_err(*arg1,"ucsi is not NULL\n");
        uVar1 = 0xffffffea;
        goto code_r0x08001d1c;
    }
    mutex_lock(arg1 + 0x108);
    uVar1 = ucsi_create(*arg1,reloc.ucsi_qti_read.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt);
    *(arg1 + 8) = uVar1;
    if (uVar1 < 0xfffffffffffff001) {
        ucsi_set_drvdata(uVar1,arg1);
        uVar2 = ucsi_register(*(arg1 + 8));
        uVar1 = uVar2 & 0xffffffff;
        if (uVar2 != 0) {
            _dev_err(*arg1,"ucsi_register failed rc=%d\n",uVar1);
            ucsi_destroy(*(arg1 + 8));
            goto code_r0x08001d84;
        }
    }
    else {
        _dev_err(*arg1,"ucsi_create failed rc=%d\n",uVar1 & 0xffffffff);
code_r0x08001d84:
        *(arg1 + 8) = 0;
    }
    mutex_unlock(arg1 + 0x108);
code_r0x08001d1c:
    return uVar1 & 0xffffffff;
}


// ===== sym.ucsi_qti_read @ 0x08001d8c (size 684) =====

uint64_t sym.ucsi_qti_read(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint uVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    uint32_t arg2_00;
    uint64_t uVar6;
    char *pcVar7;
    uint *extraout_x8;
    uint uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar9;
    uint64_t arg4;
    uint64_t uVar10;
    ulong unaff_x30;
    ulong uStack_180;
    uint uStack_178;
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
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_70 = *(iVar5 + 0x5e0);
    arg4 = arg1 & 0xffffffff;
    uVar6 = arg2;
    uVar10 = arg3;
    iVar5 = ucsi_get_drvdata();
    uVar9 = arg1;
    if (((uVar9 < 0x30) && (arg3 < 0x31)) && (arg4 + arg3 < 0x31)) {
        if (*(iVar5 + 0x200) == 0) {
            uVar3 = 0;
            arg3 = uVar6;
            arg4 = uVar10;
        }
        else {
            uStack_180 = 0x10000800b;
            uStack_178 = 0x11;
            mutex_lock(iVar5 + 0x78);
            uVar6 = 0xc;
            *(iVar5 + 0x18) = 0;
            uVar3 = pmic_glink_write(*(iVar5 + 0x10),&stack0xfffffffffffffe80);
            if (uVar3 < 0) {
                uVar6 = uVar3;
                _printk(0x80004cd,"ucsi_qti_read");
            }
            else {
                iVar4 = wait_for_completion_timeout(iVar5 + 0x18,0x4e2);
                if (iVar4 == 0) {
                    _printk(0x80005bb,"ucsi_qti_read");
                    uVar3 = 0xffffff92;
                }
                else if (*(iVar5 + 0x180) == 0) {
                    uVar3 = 0xffffffc3;
                }
                else {
                    memcpy(arg2,iVar5 + arg4 + 0x144,arg3);
                    *(iVar5 + 0x180) = 0;
                    uStack_80 = 0;
                    uStack_78 = 0;
                    uStack_90 = 0;
                    uStack_88 = 0;
                    uStack_a0 = 0;
                    uStack_98 = 0;
                    uStack_b0 = 0;
                    uStack_a8 = 0;
                    uStack_c0 = 0;
                    uStack_b8 = 0;
                    uStack_d0 = 0;
                    uStack_c8 = 0;
                    uStack_e0 = 0;
                    uStack_d8 = 0;
                    uStack_f0 = 0;
                    uStack_e8 = 0;
                    uStack_100 = 0;
                    uStack_f8 = 0;
                    uStack_110 = 0;
                    uStack_108 = 0;
                    uStack_120 = 0;
                    uStack_118 = 0;
                    uStack_130 = 0;
                    uStack_128 = 0;
                    uStack_140 = 0;
                    uStack_138 = 0;
                    uStack_150 = 0;
                    uStack_148 = 0;
                    uStack_160 = 0;
                    uStack_158 = 0;
                    uStack_170 = 0;
                    uStack_168 = 0;
                    if (arg3 == 0) {
                        uVar6 = 0;
                    }
                    else {
                        uVar10 = 0;
                        uVar6 = 0;
                        do {
                            iVar4 = scnprintf(&stack0xfffffffffffffe90 + uVar6,0x100 - uVar6,"%02x ",*(arg2 + uVar10)
                                             );
                            uVar10 = uVar10 + 1;
                            uVar3 = iVar4 + uVar6;
                            uVar6 = uVar3;
                            if (arg3 <= uVar10) break;
                        } while (uVar3 < 0xff);
                        if (0xff < uVar3) {
    //WARNING: Does not return
                            pcVar1 = SoftwareBreakpoint(0x5512,0x8001f0c);
                            (*pcVar1)();
                        }
                    }
                    uVar9 = uVar9 >> 2 | uVar9 << 0x1e;
                    (&stack0xfffffffffffffe90)[uVar6] = 0;
                    if (uVar9 < 9) {
                        pcVar7 = *(uVar9 * 8 + 0x80007b8);
                    }
                    else {
                        pcVar7 = "UNKNOWN:";
                    }
                    ipc_log_string(_segment.ehdr,"%s %s %s\n","read:",pcVar7,&stack0xfffffffffffffe90);
                    sym.ucsi_qti_notify(iVar5,arg1 & 0xffffffff,arg2,arg3);
                    uVar3 = 0;
                    uVar6 = arg2;
                    uVar10 = arg3;
                }
            }
            mutex_unlock(iVar5 + 0x78);
            arg3 = uVar6;
            arg4 = uVar10;
        }
    }
    else {
        _printk(0x8000386,"validate_ucsi_msg");
        uVar3 = 0xffffffea;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_70) {
        return uVar3;
    }
    __stack_chk_fail();
    uVar8 = extraout_x8 >> 0x20;
    uVar2 = *CONCAT44(uVar8,*extraout_x8);
    *extraout_x18 = 0x8002030;
    iVar5 = ucsi_get_drvdata(CONCAT44(uVar8,uVar2));
    uVar6 = sym.ucsi_qti_glink_write(iVar5,arg2_00,arg3,arg4);
    return uVar6;
}


// ===== sym.ucsi_qti_sync_write @ 0x08002038 (size 84) =====

void sym.ucsi_qti_sync_write(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = ucsi_get_drvdata();
    sym.ucsi_qti_glink_write(arg1_00,arg1,arg2,arg3);
    return;
}


// ===== sym.ucsi_qti_async_write @ 0x0800208c (size 84) =====

void sym.ucsi_qti_async_write(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = ucsi_get_drvdata();
    sym.ucsi_qti_glink_write(arg1_00,arg1,arg2,arg3);
    return;
}


// ===== sym.ucsi_qti_notify @ 0x080020e0 (size 372) =====

void sym.ucsi_qti_notify(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    int64_t iVar1;
    uint64_t *puVar2;
    int64_t iVar3;
    int iVar4;
    char cVar5;
    bool bVar6;
    uint16_t uVar7;
    int64_t *piVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *puVar10;
    ulong uVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg4 == 9) {
        iVar1 = arg1 + 0xd8;
        mutex_lock(iVar1);
        uVar11 = *(arg1 + 0x188);
        mutex_unlock(iVar1);
        if ((arg2 == 0x10) && ((uVar11 >> 1 & 1) != 0)) {
            iVar3 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar3 = 0x30;
            }
            piVar8 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar3),0xdc0,0x20);
            if (piVar8 != NULL) {
                *piVar8 = piVar8;
                piVar8[1] = piVar8;
                puVar2 = arg1 + 0x188;
                uVar7 = *(arg3 + 2) >> 0xd;
                iVar4 = (uVar7 == 5) << 1;
                if (uVar7 == 6) {
                    iVar4 = 1;
                }
                *(piVar8 + 0x14) = _segment.ehdr;
                *(piVar8 + 3) = _segment.ehdr;
                *(piVar8 + 2) = iVar4;
                _segment.ehdr = iVar4;
                mutex_lock(iVar1);
                puVar10 = *(arg1 + 0x198);
                uVar9 = __list_add_valid(piVar8,puVar10,arg1 + 400);
                if ((uVar9 & 1) != 0) {
                    *(arg1 + 0x198) = piVar8;
                    *piVar8 = arg1 + 400;
                    piVar8[1] = puVar10;
                    *puVar10 = piVar8;
                }
                Hint_Prefetch(puVar2,2,0,1);
                do {
                    cVar5 = '\x01';
                    bVar6 = ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar6) {
                        *puVar2 = *puVar2 & 0xfffffffffffffffd;
                        cVar5 = ExclusiveMonitorsStatus();
                    }
                } while (cVar5 != '\0');
                mutex_unlock(iVar1);
                queue_work_on(0x20,_raw_notifier_chain_register,arg1 + 0x1a0);
            }
        }
    }
    return;
}


// ===== sym.ucsi_qti_glink_write @ 0x08002254 (size 964) =====

uint64_t sym.ucsi_qti_glink_write(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    bool bVar2;
    int64_t iVar3;
    code *pcVar4;
    int iVar5;
    uint32_t uVar6;
    char *pcVar7;
    char *pcVar8;
    uint64_t in_x4;
    uint64_t *extraout_x8;
    uint64_t *puVar9;
    ulong *in_x18;
    int64_t unaff_x19;
    uint64_t unaff_x20;
    uint64_t uVar10;
    char *unaff_x22;
    uint *unaff_x24;
    uint64_t uVar11;
    ulong unaff_x30;
    int64_t iStack_1b8;
    ulong uStack_1b0;
    uint uStack_1a8;
    ulong uStack_1a4;
    ulong uStack_19c;
    ulong uStack_194;
    ulong uStack_18c;
    ulong uStack_184;
    ulong uStack_17c;
    uint uStack_174;
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
    int64_t iStack_70;
    
    uVar11 = arg2;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_70 = *(iVar3 + 0x5e0);
    uStack_174 = 0;
    uStack_17c = 0;
    uStack_184 = 0;
    uStack_18c = 0;
    uStack_194 = 0;
    uStack_19c = 0;
    uStack_1a4 = 0;
    if (((0x2f < arg2) || (0x30 < arg4)) || (0x30 < uVar11 + arg4)) {
        _printk(0x8000386,"validate_ucsi_msg",arg4,uVar11);
        uVar11 = 0xffffffea;
        arg1 = unaff_x19;
        goto code_r0x080024e0;
    }
    if (*(arg1 + 0x200) == 0) {
        uVar11 = 0;
        goto code_r0x080024e0;
    }
    unaff_x20 = in_x4 & 0xffffffff;
    uStack_1b0 = 0x10000800b;
    uStack_1a8 = 0x12;
    memcpy(&uStack_1a4 + uVar11,arg3,arg4);
    iStack_1b8 = arg1 + 0xa8;
    mutex_lock();
    unaff_x24 = arg1 + 0x38;
    *unaff_x24 = 0;
    unaff_x22 = arg3;
    if ((in_x4 & 1) == 0) {
        pcVar7 = "async_write:";
        goto code_r0x0800235c;
    }
    puVar9 = arg1 + 0x178;
    do {
        arg2 = uVar11;
        Hint_Prefetch(puVar9,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(puVar9,0x10);
            if (bVar2) {
                *puVar9 = *puVar9 | 2;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        *(arg1 + 0x58) = 0;
        pcVar7 = "sync_write:";
code_r0x0800235c:
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_b0 = 0;
        uStack_a8 = 0;
        uStack_c0 = 0;
        uStack_b8 = 0;
        uStack_d0 = 0;
        uStack_c8 = 0;
        uStack_e0 = 0;
        uStack_d8 = 0;
        uStack_f0 = 0;
        uStack_e8 = 0;
        uStack_100 = 0;
        uStack_f8 = 0;
        uStack_110 = 0;
        uStack_108 = 0;
        uStack_120 = 0;
        uStack_118 = 0;
        uStack_130 = 0;
        uStack_128 = 0;
        uStack_140 = 0;
        uStack_138 = 0;
        uStack_150 = 0;
        uStack_148 = 0;
        uStack_160 = 0;
        uStack_158 = 0;
        uStack_170 = 0;
        uStack_168 = 0;
        if (arg4 == 0) {
            uVar11 = 0;
        }
        else {
            uVar10 = 0;
            uVar11 = 0;
            do {
                iVar5 = scnprintf(&uStack_170 + uVar11,0x100 - uVar11,"%02x ",unaff_x22[uVar10]);
                uVar10 = uVar10 + 1;
                uVar6 = iVar5 + uVar11;
                uVar11 = uVar6;
                if (arg4 <= uVar10) break;
            } while (uVar6 < 0xff);
            unaff_x20 = unaff_x20 & 0xffffffff;
            if (0xff < uVar6) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x8002408);
                (*pcVar4)();
            }
        }
        uVar6 = arg2 >> 2 | arg2 << 0x1e;
        *(&uStack_170 + uVar11) = 0;
        if (uVar6 < 9) {
            pcVar8 = *(uVar6 * 8 + 0x80007b8);
        }
        else {
            pcVar8 = "UNKNOWN:";
        }
        ipc_log_string(_segment.ehdr,"%s %s %s\n",pcVar7,pcVar8,&uStack_170);
        uVar6 = pmic_glink_write(*(arg1 + 0x10),&uStack_1b0,0x40);
        if (uVar6 < 0) {
            uVar11 = uVar6;
            _printk(0x80004cd,"ucsi_qti_glink_write",uVar11);
code_r0x080024c0:
            if ((unaff_x20 & 1) != 0) goto code_r0x080024c8;
        }
        else {
            iVar5 = wait_for_completion_timeout(unaff_x24,0x4e2);
            if (iVar5 == 0) {
                _printk(0x80005bb,"ucsi_qti_glink_write");
                uVar11 = 0xffffff92;
                goto code_r0x080024c0;
            }
            if (((unaff_x20 & 1) == 0) || (iVar5 = wait_for_completion_timeout(arg1 + 0x58,0x4e2), iVar5 != 0)) {
                if (*unaff_x22 == '\x12') {
                    unaff_x22 = arg1 + 0xd8;
                    mutex_lock(unaff_x22);
                    puVar9 = arg1 + 0x188;
                    Hint_Prefetch(puVar9,2,0,1);
                    do {
                        cVar1 = '\x01';
                        bVar2 = ExclusiveMonitorPass(puVar9,0x10);
                        if (bVar2) {
                            *puVar9 = *puVar9 | 2;
                            cVar1 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar1 != '\0');
                    mutex_unlock(unaff_x22);
                }
                uVar11 = 0;
                goto code_r0x080024c0;
            }
            _printk(0x80003e8,"ucsi_qti_glink_write");
            uVar11 = 0xffffff92;
code_r0x080024c8:
            puVar9 = arg1 + 0x178;
            Hint_Prefetch(puVar9,2,0,1);
            do {
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(puVar9,0x10);
                if (bVar2) {
                    *puVar9 = *puVar9 & 0xfffffffffffffffd;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
        }
        mutex_unlock(iStack_1b8);
code_r0x080024e0:
        iVar3 = sp_el0;
        if (*(iVar3 + 0x5e0) == iStack_70) {
            return uVar11;
        }
        __stack_chk_fail();
        puVar9 = extraout_x8;
    } while( true );
}


// ===== sym.__cfi_check_fail @ 0x08002618 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800265c

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
    //switch table (4 cases) at 0x8000238
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002670);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080026b0 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.ucsi_probe.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x080026e4 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.ucsi_probe.1e9e695c68c63c561b24baa7a8b214e9.cfi_jt);
    return;
}

