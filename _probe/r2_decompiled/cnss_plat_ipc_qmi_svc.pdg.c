// decompiled from cnss_plat_ipc_qmi_svc by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 512) =====

//WARNING: Switch with 1 destination removed at 0x08004104

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x395faa72c34c8b69) {
        if (arg1 < -0x3210058236bc9f79) {
            if (arg1 == -0x550b9e52359ac614) {
                pcVar2 = sym.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt;
            }
            else {
                if (arg1 != -0x46d76d34f7c7623a) goto code_r0x080040c4;
                pcVar2 = sym.cnss_plat_ipc_qmi_bye_cb.2372c14ce4309272259c55c9e454de0c.cfi_jt;
            }
        }
        else if (arg1 == -0x3210058236bc9f79) {
            pcVar2 = sym.cnss_plat_ipc_qmi_file_upload.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) {
                if ((arg1 == 0x2b1394c7097a0a26) && ((pcVar1 + -0x8002258 >> 3 | pcVar1 << 0x3d) < 4)) {
                    return;
                }
                goto code_r0x080040c4;
            }
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x759ce6794d72295f) {
        if (arg1 == 0x395faa72c34c8b69) {
            pcVar2 = sym.cnss_plat_ipc_qmi_file_download.cfi_jt;
        }
        else if (arg1 == 0x570e95bb921636ee) {
            pcVar2 = sym.cnss_plat_ipc_register.cfi_jt;
        }
        else {
            if (arg1 != 0x5aac46a39175801a) goto code_r0x080040c4;
            pcVar2 = sym.cnss_plat_ipc_qmi_daemon_config.cfi_jt;
        }
    }
    else if (arg1 == 0x759ce6794d72295f) {
        pcVar2 = sym.cnss_plat_ipc_unregister.cfi_jt;
    }
    else if (arg1 == 0x7b38a7f1693a8f7b) {
        pcVar2 = sym.cnss_plat_ipc_qmi_disconnect_cb.2372c14ce4309272259c55c9e454de0c.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080040c4;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080040c4:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8004118);
    (*pcVar1)();
}


// ===== sym.cnss_plat_ipc_qmi_disconnect_cb.2372c14ce4309272259c55c9e454de0c.cfi_jt @ 0x08002208 (size 8) =====

void sym.cnss_plat_ipc_qmi_disconnect_cb.2372c14ce4309272259c55c9e454de0c.cfi_jt
               (code *param_1,int param_2,char *param_3,char *param_4)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    int64_t iVar4;
    ulong *extraout_x1;
    char *pcVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint uStack_9c;
    int64_t iStack_98;
    uchar *puStack_90;
    ulong uStack_88;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iStack_3c = 0;
    if (_segment.ehdr == param_1) {
        iVar3 = param_3;
        if (((*0x80004e4 != '\0') && (*0x80004dc == param_2)) &&
           (_reloc.cnss_plat_ipc_qmi_bye_cb.2372c14ce4309272259c55c9e454de0c.cfi_jt == iVar3)) {
            iVar4 = sp_el0;
            if ((*(iVar4 + 0x10) & 0xf0000) == 0) {
                if ((*(iVar4 + 0x10) & 0xff00) == 0) {
                    pcVar5 = iVar4 + 0x7a8;
                }
                else {
                    pcVar5 = "soft_irq";
                }
            }
            else {
                pcVar5 = 0x8000b6d;
            }
            param_3 = "cnss_plat_ipc_qmi_disconnect_cb";
            param_4 = 0x8000e77;
            sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar5,0x8000bde,0x8000e77);
            *0x80004d8 = 0;
            *0x80004dc = 0;
            *0x80004e4 = '\0';
            mutex_lock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
            iStack_3c = 0;
            iVar4 = idr_get_next(obj.cnss_plat_ipc_init_work,&iStack_3c);
            while (iVar4 != 0) {
                complete(iVar4 + 0x28);
                iStack_3c = iStack_3c + 1;
                iVar4 = idr_get_next(obj.cnss_plat_ipc_init_work,&iStack_3c);
            }
            mutex_unlock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
            pcVar2 = _segment.ehdr;
            if (_reloc.cnss_plat_ipc_qmi_reg_client_req_msg_v01_ei != 0) {
                if (_segment.ehdr != NULL) {
                    param_3 = 0x8000a90;
                    __cfi_slowpath_diag(0x4f02d134afd44dcb,_segment.ehdr,0x8000a90);
                    (*pcVar2)(_obj.cnss_plat_ipc_qmi_req_handlers,*0x80004e4);
                }
                if (1 < _reloc.cnss_plat_ipc_qmi_reg_client_req_msg_v01_ei) goto code_r0x08003484;
            }
        }
        if (((*0x800050c != '\0') && (*0x8000504 == param_2)) &&
           (_reloc.cnss_plat_ipc_qmi_reg_client_req_handler.2372c14ce4309272259c55c9e454de0c.cfi_jt == iVar3)) {
            iVar4 = sp_el0;
            if ((*(iVar4 + 0x10) & 0xf0000) == 0) {
                if ((*(iVar4 + 0x10) & 0xff00) == 0) {
                    pcVar5 = iVar4 + 0x7a8;
                }
                else {
                    pcVar5 = "soft_irq";
                }
            }
            else {
                pcVar5 = 0x8000b6d;
            }
            param_3 = "cnss_plat_ipc_qmi_disconnect_cb";
            param_4 = 0x8000e77;
            sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar5,0x8000bde,0x8000e77);
            *0x8000500 = 0;
            *0x8000504 = 0;
            *0x800050c = '\0';
            mutex_lock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
            iStack_3c = 0;
            iVar4 = idr_get_next(obj.cnss_plat_ipc_init_work,&iStack_3c);
            while (iVar4 != 0) {
                complete(iVar4 + 0x28);
                iStack_3c = iStack_3c + 1;
                iVar4 = idr_get_next(obj.cnss_plat_ipc_init_work,&iStack_3c);
            }
            mutex_unlock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
            pcVar2 = _segment.ehdr;
            if (*0x8000520 != 0) {
                if (_segment.ehdr != NULL) {
                    param_3 = 0x8000a90;
                    __cfi_slowpath_diag(0x4f02d134afd44dcb,_segment.ehdr,0x8000a90);
                    (*pcVar2)(_reloc.cnss_plat_ipc_qmi_init_setup_req_msg_v01_ei,*0x800050c);
                }
                if (1 < *0x8000520) {
code_r0x08003484:
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x5512,0x8003488);
                    (*pcVar2)();
                }
            }
        }
    }
    else {
        iVar4 = sp_el0;
        if ((*(iVar4 + 0x10) & 0xf0000) == 0) {
            if ((*(iVar4 + 0x10) & 0xff00) == 0) {
                pcVar5 = iVar4 + 0x7a8;
            }
            else {
                pcVar5 = "soft_irq";
            }
        }
        else {
            pcVar5 = 0x8000b6d;
        }
        param_3 = "cnss_plat_ipc_qmi_disconnect_cb";
        param_4 = 0x8000e77;
        sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar5,0x8000bde,0x8000e77);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail();
    *extraout_x18 = 0x800348c;
    uStack_88 = 0x800348c;
    iVar4 = sp_el0;
    iStack_98 = *(iVar4 + 0x5e0);
    uStack_9c = 0;
    puStack_90 = &stack0xffffffffffffffd0;
    if (*param_4 == '\0') {
code_r0x080036b0:
        iVar3 = qmi_send_response(_segment.ehdr,extraout_x1,param_3,6,7,
                                  obj.cnss_plat_ipc_qmi_reg_client_resp_msg_v01_ei,&uStack_9c);
        if (iVar3 < 0) {
            iVar4 = sp_el0;
            if ((*(iVar4 + 0x10) & 0xf0000) == 0) {
                if ((*(iVar4 + 0x10) & 0xff00) == 0) {
                    pcVar5 = iVar4 + 0x7a8;
                }
                else {
                    pcVar5 = "soft_irq";
                }
            }
            else {
                pcVar5 = 0x8000b6d;
            }
            sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar5,0x8000ec6,0x8000e77);
        }
    }
    else {
        iVar3 = *(param_4 + 4);
        if (iVar3 < 2) {
            if (iVar3 * 0x28 - 0x45U < 0xffffffffffffff5f) goto code_r0x08003778;
            if (*(iVar3 * 0x28 + 0x80004e4) == '\0') {
                iVar4 = sp_el0;
                if ((*(iVar4 + 0x10) & 0xf0000) == 0) {
                    if ((*(iVar4 + 0x10) & 0xff00) == 0) {
                        pcVar5 = iVar4 + 0x7a8;
                    }
                    else {
                        pcVar5 = "soft_irq";
                    }
                }
                else {
                    pcVar5 = 0x8000b6d;
                }
                sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar5,0x8000ec6,0x8000c32);
                iVar3 = *(param_4 + 4);
                uVar8 = *extraout_x1;
                *(reloc.cnss_plat_ipc_qmi_bye_cb.2372c14ce4309272259c55c9e454de0c.cfi_jt + iVar3 * 0x28) =
                     *(extraout_x1 + 1);
                *(iVar3 * 0x28 + 0x80004d8) = uVar8;
                if (*(param_4 + 4) * 0x28 - 0x45U < 0xffffffffffffff5f) goto code_r0x08003778;
                *(*(param_4 + 4) * 0x28 + 0x80004e4) = 1;
                uVar1 = *(param_4 + 4);
                if (2 < uVar1) {
code_r0x0800377c:
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x5512,0x8003780);
                    (*pcVar2)();
                }
                uVar7 = uVar1 * 0x28;
                if (0x30 < uVar7) goto code_r0x08003778;
                uVar6 = *(reloc.cnss_plat_ipc_qmi_reg_client_req_msg_v01_ei + uVar7);
                if (uVar6 != 0) {
                    pcVar2 = *(reloc.cnss_plat_ipc_qmi_disconnect_cb.2372c14ce4309272259c55c9e454de0c.cfi_jt +
                              uVar1 * 0x28);
                    if (pcVar2 != NULL) {
                        __cfi_slowpath_diag(0x4f02d134afd44dcb,pcVar2,0x8000a90);
                        (*pcVar2)(*(obj.cnss_plat_ipc_qmi_req_handlers + uVar7),*(uVar7 + 0x80004e4));
                        uVar6 = *(reloc.cnss_plat_ipc_qmi_reg_client_req_msg_v01_ei + uVar7);
                    }
                    if (1 < uVar6) goto code_r0x0800377c;
                }
                goto code_r0x080036b0;
            }
        }
        iVar4 = sp_el0;
        if ((*(iVar4 + 0x10) & 0xf0000) == 0) {
            if ((*(iVar4 + 0x10) & 0xff00) == 0) {
                pcVar5 = iVar4 + 0x7a8;
            }
            else {
                pcVar5 = "soft_irq";
            }
        }
        else {
            pcVar5 = 0x8000b6d;
        }
        sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar5,0x8000ec6,0x8000e77);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_98) {
        return;
    }
    __stack_chk_fail();
code_r0x08003778:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(1,0x800377c);
    (*pcVar2)();
}


// ===== sym.cnss_plat_ipc_qmi_daemon_config.cfi_jt @ 0x08002210 (size 8) =====

code * sym.cnss_plat_ipc_qmi_daemon_config.cfi_jt(void)

{
    code *pcVar1;
    
    pcVar1 = NULL;
    if (*0x800050c != '\0') {
        pcVar1 = obj.daemon_cfg;
    }
    return pcVar1;
}


// ===== sym.cnss_plat_ipc_qmi_bye_cb.2372c14ce4309272259c55c9e454de0c.cfi_jt @ 0x08002218 (size 8) =====

void sym.cnss_plat_ipc_qmi_bye_cb.2372c14ce4309272259c55c9e454de0c.cfi_jt(uint32_t param_1,uint64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.cnss_plat_ipc_qmi_disconnect_cb
              (param_1,param_2,_reloc.cnss_plat_ipc_qmi_bye_cb.2372c14ce4309272259c55c9e454de0c.cfi_jt);
    sym.cnss_plat_ipc_qmi_disconnect_cb
              (param_1,param_2 & 0xffffffff,
               _reloc.cnss_plat_ipc_qmi_reg_client_req_handler.2372c14ce4309272259c55c9e454de0c.cfi_jt);
    return;
}


// ===== sym.cnss_plat_ipc_unregister.cfi_jt @ 0x08002220 (size 8) =====

void sym.cnss_plat_ipc_unregister.cfi_jt(uint32_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    int64_t iVar2;
    code *pcVar3;
    char *arg2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 < 2) {
        if (2 < param_1) {
code_r0x08002df4:
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x5512,0x8002df8);
            (*pcVar3)();
        }
        uVar1 = *(reloc.cnss_plat_ipc_qmi_reg_client_req_msg_v01_ei + param_1 * 0x28);
        if (uVar1 != 0) {
            if (*(obj.cnss_plat_ipc_qmi_req_handlers + param_1 * 0x28) == param_2) {
                iVar2 = param_1 * 0x28;
                *(reloc.cnss_plat_ipc_qmi_reg_client_req_msg_v01_ei + param_1 * 0x28) = uVar1 - 1;
                *(reloc.cnss_plat_ipc_qmi_disconnect_cb.2372c14ce4309272259c55c9e454de0c.cfi_jt + iVar2) = 0;
                *(obj.cnss_plat_ipc_qmi_req_handlers + iVar2) = 0;
            }
            else if (1 < uVar1) goto code_r0x08002df4;
        }
    }
    else {
        iVar2 = sp_el0;
        if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
            if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                arg2 = iVar2 + 0x7a8;
            }
            else {
                arg2 = "soft_irq";
            }
        }
        else {
            arg2 = 0x8000b6d;
        }
        sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,arg2,0x8000ead,0x8000e77);
    }
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08002228 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    cancel_work_sync(obj.cnss_plat_ipc_init_work);
    if (_segment.ehdr != 0) {
        qmi_handle_release();
        kfree(_obj.plat_ipc_qmi_svc);
        idr_destroy(obj.cnss_plat_ipc_init_work);
    }
    if (_segment.ehdr != 0) {
        ipc_log_context_destroy();
        _segment.ehdr = 0;
    }
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08002230 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_find_node_with_property(0,"qcom,wlan");
    while( true ) {
        if (iVar1 == 0) {
            return 0xffffffed;
        }
        uVar2 = of_device_is_available(iVar1);
        if ((uVar2 & 1) != 0) break;
        iVar1 = of_find_node_with_property(iVar1,"qcom,wlan");
    }
    _segment.ehdr = ipc_log_context_create(10,"cnss_plat",0);
    if (_segment.ehdr == 0) {
        _printk(0x8001037);
    }
    queue_work_on(0x20,___stack_chk_fail,obj.cnss_plat_ipc_init_work);
    return 0;
}


// ===== sym.cnss_plat_ipc_qmi_file_upload.cfi_jt @ 0x08002238 (size 8) =====

uint sym.cnss_plat_ipc_qmi_file_upload.cfi_jt(uint32_t param_1,int64_t param_2,int64_t param_3,uint32_t param_4)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    ulong *puVar4;
    char *pcVar5;
    uint uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    uint uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_58 = *(iVar1 + 0x5e0);
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_88 = 0;
    if (1 < param_1) {
        iVar1 = sp_el0;
        if ((*(iVar1 + 0x10) & 0xf0000) == 0) {
            if ((*(iVar1 + 0x10) & 0xff00) == 0) {
                pcVar5 = iVar1 + 0x7a8;
            }
            else {
                pcVar5 = "soft_irq";
            }
        }
        else {
            pcVar5 = 0x8000b6d;
        }
        sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar5,0x8000f4e,0x8000e77);
        goto code_r0x08002468;
    }
    if (2 < param_1) goto code_r0x08002724;
    uVar6 = 0xffffffea;
    if (((param_3 != 0) && (param_2 != 0)) && (*(param_1 * 0x28 + 0x80004e4) != '\0')) {
        iVar1 = sp_el0;
        if ((*(iVar1 + 0x10) & 0xf0000) == 0) {
            if ((*(iVar1 + 0x10) & 0xff00) == 0) {
                pcVar5 = iVar1 + 0x7a8;
            }
            else {
                pcVar5 = "soft_irq";
            }
        }
        else {
            pcVar5 = 0x8000b6d;
        }
        sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar5,0x8000f4e,0x8000c32);
        if (0x7e < param_4 + 0xfdffffff >> 0x19) {
            puVar4 = sym.cnss_plat_ipc_init_file_data(param_2,param_3,param_4,param_4);
            if (puVar4 != NULL) {
                scnprintf(&uStack_88,0x20,0x8000b85,*puVar4);
                uStack_60 = *(puVar4 + 3);
                uStack_68 = CONCAT44(*(puVar4 + 2),uStack_68);
                iVar3 = qmi_send_indication(_obj.plat_ipc_qmi_svc,param_1 * 0x28 + 0x80004d8,4,0x31,
                                            obj.cnss_plat_ipc_qmi_file_upload_ind_msg_v01_ei,&uStack_88);
                if (iVar3 < 0) {
                    if ((*(iVar1 + 0x10) & 0xf0000) == 0) {
                        if ((*(iVar1 + 0x10) & 0xff00) == 0) {
                            pcVar5 = iVar1 + 0x7a8;
                        }
                        else {
                            pcVar5 = "soft_irq";
                        }
                    }
                    else {
                        pcVar5 = 0x8000b6d;
                    }
                    sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar5,0x8000f4e,0x8000e77);
                }
                else {
                    iVar3 = wait_for_completion_timeout(puVar4 + 5,0x9c4);
                    if (iVar3 == 0) {
                        if ((*(iVar1 + 0x10) & 0xf0000) == 0) {
                            if ((*(iVar1 + 0x10) & 0xff00) == 0) {
                                pcVar5 = iVar1 + 0x7a8;
                            }
                            else {
                                pcVar5 = "soft_irq";
                            }
                        }
                        else {
                            pcVar5 = 0x8000b6d;
                        }
                        sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar5,0x8000f4e,0x8000e77);
                    }
                }
                mutex_lock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
                idr_remove(obj.cnss_plat_ipc_init_work,*(puVar4 + 2));
                mutex_unlock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
                uVar6 = 0xffffffea;
                if (*(puVar4 + 0x24) != 0) {
                    uVar6 = 0;
                }
                kfree(puVar4);
                if ((*(iVar1 + 0x10) & 0xf0000) == 0) {
                    if ((*(iVar1 + 0x10) & 0xff00) == 0) {
                        pcVar5 = iVar1 + 0x7a8;
                    }
                    else {
                        pcVar5 = "soft_irq";
                    }
                }
                else {
                    pcVar5 = 0x8000b6d;
                }
                sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar5,0x8000f4e,0x8001034);
                goto code_r0x0800246c;
            }
            if ((*(iVar1 + 0x10) & 0xf0000) == 0) {
                if ((*(iVar1 + 0x10) & 0xff00) == 0) {
                    pcVar5 = iVar1 + 0x7a8;
                }
                else {
                    pcVar5 = "soft_irq";
                }
            }
            else {
                pcVar5 = 0x8000b6d;
            }
            sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar5,0x8000f4e,0x8000e77);
        }
code_r0x08002468:
        uVar6 = 0xffffffea;
    }
code_r0x0800246c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_58) {
        return uVar6;
    }
    __stack_chk_fail();
code_r0x08002724:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8002728);
    (*pcVar2)();
}


// ===== sym.cnss_plat_ipc_register.cfi_jt @ 0x08002240 (size 8) =====

ulong sym.cnss_plat_ipc_register.cfi_jt(uint32_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    code *pcVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (1 < param_1) {
        iVar2 = sp_el0;
        if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
            if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                pcVar4 = iVar2 + 0x7a8;
            }
            else {
                pcVar4 = "soft_irq";
            }
        }
        else {
            pcVar4 = 0x8000b6d;
        }
        sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar4,0x8000fc8,0x8000e77);
        return 0xffffffea;
    }
    if (param_1 < 3) {
        iVar1 = *(reloc.cnss_plat_ipc_qmi_reg_client_req_msg_v01_ei + param_1 * 0x28);
        if (0 < iVar1) {
            iVar2 = sp_el0;
            if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                    pcVar4 = iVar2 + 0x7a8;
                }
                else {
                    pcVar4 = "soft_irq";
                }
            }
            else {
                pcVar4 = 0x8000b6d;
            }
            sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar4,0x8000fc8,0x8000e77);
            return 0xffffffea;
        }
        if (iVar1 == 0) {
            *(reloc.cnss_plat_ipc_qmi_reg_client_req_msg_v01_ei + param_1 * 0x28) = 1;
            *(reloc.cnss_plat_ipc_qmi_disconnect_cb.2372c14ce4309272259c55c9e454de0c.cfi_jt + param_1 * 0x28) = param_2;
            *(obj.cnss_plat_ipc_qmi_req_handlers + param_1 * 0x28) = param_3;
            return 0;
        }
    }
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8002d60);
    (*pcVar3)();
}


// ===== sym.cnss_plat_ipc_qmi_file_download.cfi_jt @ 0x08002248 (size 8) =====

uint sym.cnss_plat_ipc_qmi_file_download.cfi_jt(uint32_t param_1,int64_t param_2,int64_t param_3,uint32_t *param_4)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    int64_t iVar4;
    char *pcVar5;
    uint uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    if (param_1 < 2) {
        if (2 < param_1) goto code_r0x08002bd0;
        uVar6 = 0xffffffea;
        if (((param_3 != 0) && (param_2 != 0)) && (*(param_1 * 0x28 + 0x80004e4) != '\0')) {
            iVar4 = sym.cnss_plat_ipc_init_file_data(param_2,param_3,*param_4,0);
            if (iVar4 == 0) {
                iVar4 = sp_el0;
                if ((*(iVar4 + 0x10) & 0xf0000) == 0) {
                    if ((*(iVar4 + 0x10) & 0xff00) == 0) {
                        pcVar5 = iVar4 + 0x7a8;
                    }
                    else {
                        pcVar5 = "soft_irq";
                    }
                }
                else {
                    pcVar5 = 0x8000b6d;
                }
                sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar5,0x8000b88,0x8000e77);
                uVar6 = 0xffffffea;
            }
            else {
                scnprintf(&uStack_70,0x20,0x8000b85,param_2);
                uStack_50 = CONCAT44(*(iVar4 + 0x10),uStack_50);
                iVar3 = qmi_send_indication(_obj.plat_ipc_qmi_svc,param_1 * 0x28 + 0x80004d8,2,0x2a,
                                            obj.cnss_plat_ipc_qmi_file_download_ind_msg_v01_ei,&uStack_70);
                if (iVar3 < 0) {
                    iVar1 = sp_el0;
                    if ((*(iVar1 + 0x10) & 0xf0000) == 0) {
                        if ((*(iVar1 + 0x10) & 0xff00) == 0) {
                            pcVar5 = iVar1 + 0x7a8;
                        }
                        else {
                            pcVar5 = "soft_irq";
                        }
                    }
                    else {
                        pcVar5 = 0x8000b6d;
                    }
                    sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar5,0x8000b88,0x8000e77);
                }
                else {
                    iVar3 = wait_for_completion_timeout(iVar4 + 0x28,0x9c4);
                    if (iVar3 == 0) {
                        iVar1 = sp_el0;
                        if ((*(iVar1 + 0x10) & 0xf0000) == 0) {
                            if ((*(iVar1 + 0x10) & 0xff00) == 0) {
                                pcVar5 = iVar1 + 0x7a8;
                            }
                            else {
                                pcVar5 = "soft_irq";
                            }
                        }
                        else {
                            pcVar5 = 0x8000b6d;
                        }
                        sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar5,0x8000b88,0x8000e77);
                    }
                }
                *param_4 = *(iVar4 + 0x18);
                mutex_lock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
                idr_remove(obj.cnss_plat_ipc_init_work,*(iVar4 + 0x10));
                mutex_unlock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
                uVar6 = 0xffffffea;
                if (*(iVar4 + 0x24) != 0) {
                    uVar6 = 0;
                }
                kfree(iVar4);
                iVar4 = sp_el0;
                if ((*(iVar4 + 0x10) & 0xf0000) == 0) {
                    if ((*(iVar4 + 0x10) & 0xff00) == 0) {
                        pcVar5 = iVar4 + 0x7a8;
                    }
                    else {
                        pcVar5 = "soft_irq";
                    }
                }
                else {
                    pcVar5 = 0x8000b6d;
                }
                sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar5,0x8000b88,0x8001034);
            }
        }
    }
    else {
        iVar4 = sp_el0;
        if ((*(iVar4 + 0x10) & 0xf0000) == 0) {
            if ((*(iVar4 + 0x10) & 0xff00) == 0) {
                pcVar5 = iVar4 + 0x7a8;
            }
            else {
                pcVar5 = "soft_irq";
            }
        }
        else {
            pcVar5 = 0x8000b6d;
        }
        sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar5,0x8000b88,0x8000e77);
        uVar6 = 0xffffffea;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return uVar6;
    }
    __stack_chk_fail();
code_r0x08002bd0:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8002bd4);
    (*pcVar2)();
}


// ===== sym.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt @ 0x08002250 (size 8) =====

void sym.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt(void)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = kmem_cache_alloc_trace(_ipc_log_string,0xdc0,0x140);
    if (_segment.ehdr != 0) {
        iVar2 = qmi_handle_init(_segment.ehdr,0xffff,obj.cnss_plat_ipc_qmi_ops,obj.cnss_plat_ipc_qmi_req_handlers);
        if (iVar2 < 0) {
            iVar2 = 0xf0;
            do {
                msleep(0xfa);
                iVar3 = qmi_handle_init(_segment.ehdr,0xffff,obj.cnss_plat_ipc_qmi_ops,
                                        obj.cnss_plat_ipc_qmi_req_handlers);
                if (-1 < iVar3) goto code_r0x08002eb4;
                iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
            iVar1 = sp_el0;
            if ((*(iVar1 + 0x10) & 0xf0000) == 0) {
                if ((*(iVar1 + 0x10) & 0xff00) == 0) {
                    pcVar4 = iVar1 + 0x7a8;
                }
                else {
                    pcVar4 = "soft_irq";
                }
            }
            else {
                pcVar4 = 0x8000b6d;
            }
            sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar4,0x8000f6c,0x8000e77);
        }
        else {
code_r0x08002eb4:
            iVar2 = qmi_add_server(_segment.ehdr,0x42e,1,0);
            iVar1 = sp_el0;
            if (-1 < iVar2) {
                if ((*(iVar1 + 0x10) & 0xf0000) == 0) {
                    if ((*(iVar1 + 0x10) & 0xff00) == 0) {
                        pcVar4 = iVar1 + 0x7a8;
                    }
                    else {
                        pcVar4 = "soft_irq";
                    }
                }
                else {
                    pcVar4 = 0x8000b6d;
                }
                sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar4,0x8000f6c,0x8000c32);
                *0x80004a0 = 0;
                _obj.cnss_plat_ipc_init_work = 0x1000000400000000;
                *0x8000498 = 0;
                __mutex_init(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt,"&svc->file_idr_lock"
                             ,reloc.cnss_plat_ipc_qmi_file_download_req_msg_v01_ei);
                return;
            }
            if ((*(iVar1 + 0x10) & 0xf0000) == 0) {
                if ((*(iVar1 + 0x10) & 0xff00) == 0) {
                    pcVar4 = iVar1 + 0x7a8;
                }
                else {
                    pcVar4 = "soft_irq";
                }
            }
            else {
                pcVar4 = 0x8000b6d;
            }
            sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar4,0x8000f6c,0x8000e77);
            qmi_handle_release(_segment.ehdr);
        }
        kfree(_segment.ehdr);
    }
    return;
}


// ===== sym.cnss_plat_ipc_qmi_file_upload_req_handler.2372c14ce4309272259c55c9e454de0c.cfi_jt @ 0x08002258 (size 8) =====

void sym.cnss_plat_ipc_qmi_file_upload_req_handler.2372c14ce4309272259c55c9e454de0c.cfi_jt
               (ulong param_1,ulong param_2,ulong param_3,uint *param_4)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_4 != NULL) {
        iVar2 = sp_el0;
        if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
            if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                pcVar6 = iVar2 + 0x7a8;
            }
            else {
                pcVar6 = "soft_irq";
            }
        }
        else {
            pcVar6 = 0x8000b6d;
        }
        sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8001062,0x8001034);
        mutex_lock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
        iVar4 = idr_find(obj.cnss_plat_ipc_init_work,*param_4);
        mutex_unlock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
        if (iVar4 == 0) {
            if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                    pcVar6 = iVar2 + 0x7a8;
                }
                else {
                    pcVar6 = "soft_irq";
                }
            }
            else {
                pcVar6 = 0x8000b6d;
            }
            sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8001062,0x8000e77);
        }
        else {
            if (param_4[1] != *(iVar4 + 0x1c)) {
                if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                    if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                        pcVar6 = iVar2 + 0x7a8;
                    }
                    else {
                        pcVar6 = "soft_irq";
                    }
                }
                else {
                    pcVar6 = 0x8000b6d;
                }
                sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8001062,0x8000e77);
                complete(iVar4 + 0x28);
            }
            iVar5 = kmalloc_order_trace(0xf014,0xdc0,4);
            if (iVar5 != 0) {
                *(iVar5 + 4) = *(iVar4 + 0x10);
                iVar3 = *(iVar4 + 0x1c);
                *(iVar4 + 0x1c) = iVar3 + 1;
                *(iVar5 + 0xc) = iVar3;
                uVar1 = *(iVar4 + 0x14);
                if (0xefff < uVar1) {
                    uVar1 = 0xf000;
                }
                *(iVar5 + 0x10) = uVar1;
                *(iVar5 + 8) = *(iVar4 + 0x1c) == *(iVar4 + 0x20);
                memcpy(iVar5 + 0x14,*(iVar4 + 8),uVar1);
                if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                    if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                        pcVar6 = iVar2 + 0x7a8;
                    }
                    else {
                        pcVar6 = "soft_irq";
                    }
                }
                else {
                    pcVar6 = 0x8000b6d;
                }
                sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8001062,0x8001034);
                iVar3 = qmi_send_response(_segment.ehdr,param_2,param_3,5,0xf01e,
                                          obj.cnss_plat_ipc_qmi_file_upload_resp_msg_v01_ei,iVar5);
                if (iVar3 < 0) {
                    if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                        if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                            pcVar6 = iVar2 + 0x7a8;
                        }
                        else {
                            pcVar6 = "soft_irq";
                        }
                    }
                    else {
                        pcVar6 = 0x8000b6d;
                    }
                    sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8001062,0x8000e77);
                }
                else {
                    *(iVar4 + 0x14) = *(iVar4 + 0x14) - *(iVar5 + 0x10);
                    *(iVar4 + 8) = *(iVar4 + 8) + *(iVar5 + 0x10);
                    if (*(iVar5 + 8) != '\0') {
                        *(iVar4 + 0x24) = 1;
                        complete(iVar4 + 0x28);
                    }
                }
                kfree(iVar5);
            }
        }
    }
    return;
}


// ===== sym.cnss_plat_ipc_qmi_reg_client_req_handler.2372c14ce4309272259c55c9e454de0c.cfi_jt @ 0x08002260 (size 8) =====

void sym.cnss_plat_ipc_qmi_reg_client_req_handler.2372c14ce4309272259c55c9e454de0c.cfi_jt
               (ulong param_1,ulong *param_2,ulong param_3,char *param_4)

{
    uint32_t uVar1;
    int64_t iVar2;
    code *pcVar3;
    int iVar4;
    char *pcVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong uVar8;
    ulong *in_x18;
    ulong unaff_x30;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_48 = *(iVar2 + 0x5e0);
    uStack_4c = 0;
    if (*param_4 == '\0') {
code_r0x080036b0:
        iVar4 = qmi_send_response(_segment.ehdr,param_2,param_3,6,7,
                                  obj.cnss_plat_ipc_qmi_reg_client_resp_msg_v01_ei,&uStack_4c);
        if (iVar4 < 0) {
            iVar2 = sp_el0;
            if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                    pcVar5 = iVar2 + 0x7a8;
                }
                else {
                    pcVar5 = "soft_irq";
                }
            }
            else {
                pcVar5 = 0x8000b6d;
            }
            sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar5,0x8000ec6,0x8000e77);
        }
    }
    else {
        iVar4 = *(param_4 + 4);
        if (iVar4 < 2) {
            if (iVar4 * 0x28 - 0x45U < 0xffffffffffffff5f) goto code_r0x08003778;
            if (*(iVar4 * 0x28 + 0x80004e4) == '\0') {
                iVar2 = sp_el0;
                if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                    if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                        pcVar5 = iVar2 + 0x7a8;
                    }
                    else {
                        pcVar5 = "soft_irq";
                    }
                }
                else {
                    pcVar5 = 0x8000b6d;
                }
                sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar5,0x8000ec6,0x8000c32);
                iVar4 = *(param_4 + 4);
                uVar8 = *param_2;
                *(reloc.cnss_plat_ipc_qmi_bye_cb.2372c14ce4309272259c55c9e454de0c.cfi_jt + iVar4 * 0x28) =
                     *(param_2 + 1);
                *(iVar4 * 0x28 + 0x80004d8) = uVar8;
                if (*(param_4 + 4) * 0x28 - 0x45U < 0xffffffffffffff5f) goto code_r0x08003778;
                *(*(param_4 + 4) * 0x28 + 0x80004e4) = 1;
                uVar1 = *(param_4 + 4);
                if (2 < uVar1) {
code_r0x0800377c:
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x8003780);
                    (*pcVar3)();
                }
                uVar7 = uVar1 * 0x28;
                if (0x30 < uVar7) goto code_r0x08003778;
                uVar6 = *(reloc.cnss_plat_ipc_qmi_reg_client_req_msg_v01_ei + uVar7);
                if (uVar6 != 0) {
                    pcVar3 = *(reloc.cnss_plat_ipc_qmi_disconnect_cb.2372c14ce4309272259c55c9e454de0c.cfi_jt +
                              uVar1 * 0x28);
                    if (pcVar3 != NULL) {
                        __cfi_slowpath_diag(0x4f02d134afd44dcb,pcVar3,0x8000a90);
                        (*pcVar3)(*(obj.cnss_plat_ipc_qmi_req_handlers + uVar7),*(uVar7 + 0x80004e4));
                        uVar6 = *(reloc.cnss_plat_ipc_qmi_reg_client_req_msg_v01_ei + uVar7);
                    }
                    if (1 < uVar6) goto code_r0x0800377c;
                }
                goto code_r0x080036b0;
            }
        }
        iVar2 = sp_el0;
        if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
            if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                pcVar5 = iVar2 + 0x7a8;
            }
            else {
                pcVar5 = "soft_irq";
            }
        }
        else {
            pcVar5 = 0x8000b6d;
        }
        sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar5,0x8000ec6,0x8000e77);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_48) {
        return;
    }
    __stack_chk_fail();
code_r0x08003778:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(1,0x800377c);
    (*pcVar3)();
}


// ===== sym.cnss_plat_ipc_qmi_init_setup_req_handler.2372c14ce4309272259c55c9e454de0c.cfi_jt @ 0x08002268 (size 8) =====

void sym.cnss_plat_ipc_qmi_init_setup_req_handler.2372c14ce4309272259c55c9e454de0c.cfi_jt
               (ulong param_1,ulong param_2,char *param_3,code *param_4)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong extraout_x1;
    ulong extraout_x1_00;
    char *pcVar6;
    uint *puVar7;
    uint *puVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong unaff_x30;
    uint uStack_c8;
    uint uStack_c4;
    int iStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    ulong uStack_a8;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_48 = *(iVar2 + 0x5e0);
    iVar2 = sp_el0;
    uStack_58 = 0;
    uStack_50 = 0;
    if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
        if ((*(iVar2 + 0x10) & 0xff00) == 0) {
            pcVar6 = iVar2 + 0x7a8;
        }
        else {
            pcVar6 = "soft_irq";
        }
    }
    else {
        pcVar6 = 0x8000b6d;
    }
    sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8000f0d,0x8001034);
    obj.daemon_cfg = *param_4;
    *0x8000531 = param_4[1];
    *0x8000534 = *(param_4 + 4);
    puVar7 = 0x1;
    iVar3 = qmi_send_response(_segment.ehdr,param_2,param_3,1,0x12,obj.cnss_plat_ipc_qmi_init_setup_resp_msg_v01_ei
                              ,&uStack_58);
    if (iVar3 < 0) {
        if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
            if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                pcVar6 = iVar2 + 0x7a8;
            }
            else {
                pcVar6 = "soft_irq";
            }
        }
        else {
            pcVar6 = 0x8000b6d;
        }
        param_3 = "cnss_plat_ipc_qmi_init_setup_req_handler";
        puVar7 = 0x8000e77;
        sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8000f0d,0x8000e77);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_48) {
        return;
    }
    __stack_chk_fail();
    *extraout_x18 = 0x8003924;
    uStack_a8 = 0x8003924;
    iVar2 = sp_el0;
    iStack_b8 = *(iVar2 + 0x5e0);
    uStack_c8 = 0;
    puVar8 = NULL;
    puStack_b0 = &stack0xffffffffffffffc0;
    if (puVar7 != NULL) {
        iVar2 = sp_el0;
        if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
            if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                pcVar6 = iVar2 + 0x7a8;
            }
            else {
                pcVar6 = "soft_irq";
            }
        }
        else {
            pcVar6 = 0x8000b6d;
        }
        sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8000ab5,0x8001034);
        mutex_lock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
        iVar4 = idr_find(obj.cnss_plat_ipc_init_work,*puVar7);
        mutex_unlock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
        if (iVar4 == 0) {
            if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                    pcVar6 = iVar2 + 0x7a8;
                }
                else {
                    pcVar6 = "soft_irq";
                }
            }
            else {
                pcVar6 = 0x8000b6d;
            }
            param_3 = "cnss_plat_ipc_qmi_file_download_req_handler";
            puVar8 = 0x8000e77;
            sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8000ab5,0x8000e77);
        }
        else {
            if (*(iVar4 + 0x14) < puVar7[1]) {
                if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                    if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                        pcVar6 = iVar2 + 0x7a8;
                    }
                    else {
                        pcVar6 = "soft_irq";
                    }
                }
                else {
                    pcVar6 = 0x8000b6d;
                }
                param_3 = "cnss_plat_ipc_qmi_file_download_req_handler";
                puVar8 = 0x8000e77;
                sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8000ab5,0x8000e77);
            }
            else if ((puVar7[4] < 0xf001) && (*(iVar4 + 0x18) + puVar7[4] <= *(iVar4 + 0x14))) {
                if (puVar7[3] == *(iVar4 + 0x1c)) {
                    memcpy(*(iVar4 + 8),puVar7 + 5);
                    iStack_c0 = *(iVar4 + 0x1c) + 1;
                    puVar8 = 0x3;
                    *(iVar4 + 0x1c) = iStack_c0;
                    *(iVar4 + 8) = *(iVar4 + 8) + puVar7[4];
                    iVar5 = _segment.ehdr;
                    uStack_c4 = *(iVar4 + 0x10);
                    *(iVar4 + 0x18) = *(iVar4 + 0x18) + puVar7[4];
                    iVar3 = qmi_send_response(iVar5,extraout_x1,param_3,3,0x15,
                                              obj.cnss_plat_ipc_qmi_file_download_resp_msg_v01_ei,&uStack_c8);
                    if (iVar3 < 0) {
                        if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                            if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                                pcVar6 = iVar2 + 0x7a8;
                            }
                            else {
                                pcVar6 = "soft_irq";
                            }
                        }
                        else {
                            pcVar6 = 0x8000b6d;
                        }
                        param_3 = "cnss_plat_ipc_qmi_file_download_req_handler";
                        puVar8 = 0x8000e77;
                        sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8000ab5,0x8000e77);
                    }
                    if (*(puVar7 + 2) == '\0') goto code_r0x08003c30;
                    *(iVar4 + 0x24) = 1;
                }
                else {
                    if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                        if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                            pcVar6 = iVar2 + 0x7a8;
                        }
                        else {
                            pcVar6 = "soft_irq";
                        }
                    }
                    else {
                        pcVar6 = 0x8000b6d;
                    }
                    param_3 = "cnss_plat_ipc_qmi_file_download_req_handler";
                    puVar8 = 0x8000e77;
                    sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8000ab5,0x8000e77);
                }
            }
            else {
                if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                    if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                        pcVar6 = iVar2 + 0x7a8;
                    }
                    else {
                        pcVar6 = "soft_irq";
                    }
                }
                else {
                    pcVar6 = 0x8000b6d;
                }
                param_3 = "cnss_plat_ipc_qmi_file_download_req_handler";
                puVar8 = 0x8000e77;
                sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8000ab5,0x8000e77);
            }
            complete(iVar4 + 0x28);
        }
    }
code_r0x08003c30:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_b8) {
        __stack_chk_fail();
        *extraout_x18_00 = 0x8003cfc;
        if (puVar8 != NULL) {
            iVar2 = sp_el0;
            if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                    pcVar6 = iVar2 + 0x7a8;
                }
                else {
                    pcVar6 = "soft_irq";
                }
            }
            else {
                pcVar6 = 0x8000b6d;
            }
            sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8001062,0x8001034);
            mutex_lock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
            iVar4 = idr_find(obj.cnss_plat_ipc_init_work,*puVar8);
            mutex_unlock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
            if (iVar4 == 0) {
                if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                    if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                        pcVar6 = iVar2 + 0x7a8;
                    }
                    else {
                        pcVar6 = "soft_irq";
                    }
                }
                else {
                    pcVar6 = 0x8000b6d;
                }
                sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8001062,0x8000e77);
            }
            else {
                if (puVar8[1] != *(iVar4 + 0x1c)) {
                    if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                        if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                            pcVar6 = iVar2 + 0x7a8;
                        }
                        else {
                            pcVar6 = "soft_irq";
                        }
                    }
                    else {
                        pcVar6 = 0x8000b6d;
                    }
                    sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8001062,0x8000e77);
                    complete(iVar4 + 0x28);
                }
                iVar5 = kmalloc_order_trace(0xf014,0xdc0,4);
                if (iVar5 != 0) {
                    *(iVar5 + 4) = *(iVar4 + 0x10);
                    iVar3 = *(iVar4 + 0x1c);
                    *(iVar4 + 0x1c) = iVar3 + 1;
                    *(iVar5 + 0xc) = iVar3;
                    uVar1 = *(iVar4 + 0x14);
                    if (0xefff < uVar1) {
                        uVar1 = 0xf000;
                    }
                    *(iVar5 + 0x10) = uVar1;
                    *(iVar5 + 8) = *(iVar4 + 0x1c) == *(iVar4 + 0x20);
                    memcpy(iVar5 + 0x14,*(iVar4 + 8),uVar1);
                    if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                        if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                            pcVar6 = iVar2 + 0x7a8;
                        }
                        else {
                            pcVar6 = "soft_irq";
                        }
                    }
                    else {
                        pcVar6 = 0x8000b6d;
                    }
                    sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8001062,0x8001034);
                    iVar3 = qmi_send_response(_segment.ehdr,extraout_x1_00,param_3,5,0xf01e,
                                              obj.cnss_plat_ipc_qmi_file_upload_resp_msg_v01_ei,iVar5);
                    if (iVar3 < 0) {
                        if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                            if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                                pcVar6 = iVar2 + 0x7a8;
                            }
                            else {
                                pcVar6 = "soft_irq";
                            }
                        }
                        else {
                            pcVar6 = 0x8000b6d;
                        }
                        sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8001062,0x8000e77);
                    }
                    else {
                        *(iVar4 + 0x14) = *(iVar4 + 0x14) - *(iVar5 + 0x10);
                        *(iVar4 + 8) = *(iVar4 + 8) + *(iVar5 + 0x10);
                        if (*(iVar5 + 8) != '\0') {
                            *(iVar4 + 0x24) = 1;
                            complete(iVar4 + 0x28);
                        }
                    }
                    kfree(iVar5);
                }
            }
        }
        return;
    }
    return;
}


// ===== sym.cnss_plat_ipc_qmi_file_download_req_handler.2372c14ce4309272259c55c9e454de0c.cfi_jt @ 0x08002270 (size 8) =====

void sym.cnss_plat_ipc_qmi_file_download_req_handler.2372c14ce4309272259c55c9e454de0c.cfi_jt
               (ulong param_1,ulong param_2,char *param_3,uint *param_4)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong extraout_x1;
    char *pcVar6;
    uint *puVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint uStack_68;
    uint uStack_64;
    int iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_58 = *(iVar2 + 0x5e0);
    uStack_68 = 0;
    puVar7 = NULL;
    if (param_4 != NULL) {
        iVar2 = sp_el0;
        if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
            if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                pcVar6 = iVar2 + 0x7a8;
            }
            else {
                pcVar6 = "soft_irq";
            }
        }
        else {
            pcVar6 = 0x8000b6d;
        }
        sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8000ab5,0x8001034);
        mutex_lock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
        iVar4 = idr_find(obj.cnss_plat_ipc_init_work,*param_4);
        mutex_unlock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
        if (iVar4 == 0) {
            if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                    pcVar6 = iVar2 + 0x7a8;
                }
                else {
                    pcVar6 = "soft_irq";
                }
            }
            else {
                pcVar6 = 0x8000b6d;
            }
            param_3 = "cnss_plat_ipc_qmi_file_download_req_handler";
            puVar7 = 0x8000e77;
            sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8000ab5,0x8000e77);
        }
        else {
            if (*(iVar4 + 0x14) < param_4[1]) {
                if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                    if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                        pcVar6 = iVar2 + 0x7a8;
                    }
                    else {
                        pcVar6 = "soft_irq";
                    }
                }
                else {
                    pcVar6 = 0x8000b6d;
                }
                param_3 = "cnss_plat_ipc_qmi_file_download_req_handler";
                puVar7 = 0x8000e77;
                sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8000ab5,0x8000e77);
            }
            else if ((param_4[4] < 0xf001) && (*(iVar4 + 0x18) + param_4[4] <= *(iVar4 + 0x14))) {
                if (param_4[3] == *(iVar4 + 0x1c)) {
                    memcpy(*(iVar4 + 8),param_4 + 5);
                    iStack_60 = *(iVar4 + 0x1c) + 1;
                    puVar7 = 0x3;
                    *(iVar4 + 0x1c) = iStack_60;
                    *(iVar4 + 8) = *(iVar4 + 8) + param_4[4];
                    iVar5 = _segment.ehdr;
                    uStack_64 = *(iVar4 + 0x10);
                    *(iVar4 + 0x18) = *(iVar4 + 0x18) + param_4[4];
                    iVar3 = qmi_send_response(iVar5,param_2,param_3,3,0x15,
                                              obj.cnss_plat_ipc_qmi_file_download_resp_msg_v01_ei,&uStack_68);
                    if (iVar3 < 0) {
                        if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                            if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                                pcVar6 = iVar2 + 0x7a8;
                            }
                            else {
                                pcVar6 = "soft_irq";
                            }
                        }
                        else {
                            pcVar6 = 0x8000b6d;
                        }
                        param_3 = "cnss_plat_ipc_qmi_file_download_req_handler";
                        puVar7 = 0x8000e77;
                        sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8000ab5,0x8000e77);
                    }
                    if (*(param_4 + 2) == '\0') goto code_r0x08003c30;
                    *(iVar4 + 0x24) = 1;
                }
                else {
                    if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                        if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                            pcVar6 = iVar2 + 0x7a8;
                        }
                        else {
                            pcVar6 = "soft_irq";
                        }
                    }
                    else {
                        pcVar6 = 0x8000b6d;
                    }
                    param_3 = "cnss_plat_ipc_qmi_file_download_req_handler";
                    puVar7 = 0x8000e77;
                    sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8000ab5,0x8000e77);
                }
            }
            else {
                if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                    if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                        pcVar6 = iVar2 + 0x7a8;
                    }
                    else {
                        pcVar6 = "soft_irq";
                    }
                }
                else {
                    pcVar6 = 0x8000b6d;
                }
                param_3 = "cnss_plat_ipc_qmi_file_download_req_handler";
                puVar7 = 0x8000e77;
                sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8000ab5,0x8000e77);
            }
            complete(iVar4 + 0x28);
        }
    }
code_r0x08003c30:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_58) {
        __stack_chk_fail();
        *extraout_x18 = 0x8003cfc;
        if (puVar7 != NULL) {
            iVar2 = sp_el0;
            if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                    pcVar6 = iVar2 + 0x7a8;
                }
                else {
                    pcVar6 = "soft_irq";
                }
            }
            else {
                pcVar6 = 0x8000b6d;
            }
            sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8001062,0x8001034);
            mutex_lock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
            iVar4 = idr_find(obj.cnss_plat_ipc_init_work,*puVar7);
            mutex_unlock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
            if (iVar4 == 0) {
                if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                    if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                        pcVar6 = iVar2 + 0x7a8;
                    }
                    else {
                        pcVar6 = "soft_irq";
                    }
                }
                else {
                    pcVar6 = 0x8000b6d;
                }
                sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8001062,0x8000e77);
            }
            else {
                if (puVar7[1] != *(iVar4 + 0x1c)) {
                    if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                        if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                            pcVar6 = iVar2 + 0x7a8;
                        }
                        else {
                            pcVar6 = "soft_irq";
                        }
                    }
                    else {
                        pcVar6 = 0x8000b6d;
                    }
                    sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8001062,0x8000e77);
                    complete(iVar4 + 0x28);
                }
                iVar5 = kmalloc_order_trace(0xf014,0xdc0,4);
                if (iVar5 != 0) {
                    *(iVar5 + 4) = *(iVar4 + 0x10);
                    iVar3 = *(iVar4 + 0x1c);
                    *(iVar4 + 0x1c) = iVar3 + 1;
                    *(iVar5 + 0xc) = iVar3;
                    uVar1 = *(iVar4 + 0x14);
                    if (0xefff < uVar1) {
                        uVar1 = 0xf000;
                    }
                    *(iVar5 + 0x10) = uVar1;
                    *(iVar5 + 8) = *(iVar4 + 0x1c) == *(iVar4 + 0x20);
                    memcpy(iVar5 + 0x14,*(iVar4 + 8),uVar1);
                    if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                        if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                            pcVar6 = iVar2 + 0x7a8;
                        }
                        else {
                            pcVar6 = "soft_irq";
                        }
                    }
                    else {
                        pcVar6 = 0x8000b6d;
                    }
                    sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8001062,0x8001034);
                    iVar3 = qmi_send_response(_segment.ehdr,extraout_x1,param_3,5,0xf01e,
                                              obj.cnss_plat_ipc_qmi_file_upload_resp_msg_v01_ei,iVar5);
                    if (iVar3 < 0) {
                        if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                            if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                                pcVar6 = iVar2 + 0x7a8;
                            }
                            else {
                                pcVar6 = "soft_irq";
                            }
                        }
                        else {
                            pcVar6 = 0x8000b6d;
                        }
                        sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8001062,0x8000e77);
                    }
                    else {
                        *(iVar4 + 0x14) = *(iVar4 + 0x14) - *(iVar5 + 0x10);
                        *(iVar4 + 8) = *(iVar4 + 8) + *(iVar5 + 0x10);
                        if (*(iVar5 + 8) != '\0') {
                            *(iVar4 + 0x24) = 1;
                            complete(iVar4 + 0x28);
                        }
                    }
                    kfree(iVar5);
                }
            }
        }
        return;
    }
    return;
}


// ===== sym.cnss_plat_ipc_debug_log_print @ 0x08002278 (size 200) =====

uint64_t sym.cnss_plat_ipc_debug_log_print(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    uint64_t uVar4;
    ulong *puVar5;
    char *pcVar6;
    uint32_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar8 [16];
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    uint uStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    uchar auStack_48 [8];
    uchar *puStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    puStack_40 = &stack0xffffffffffffff98;
    if (arg4 != 0) {
        _printk("%scnss_plat: %pV",arg4,auStack_48);
    }
    uVar4 = ipc_log_string(arg1,"[%s] %s: %pV",arg2,arg3,auStack_48);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    auVar8 = __stack_chk_fail();
    *extraout_x18 = sym.cnss_plat_ipc_qmi_file_upload;
    pcStack_c8 = sym.cnss_plat_ipc_qmi_file_upload;
    iVar1 = sp_el0;
    iStack_d8 = *(iVar1 + 0x5e0);
    uStack_e0 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_108 = 0;
    puStack_d0 = &stack0xffffffffffffffd0;
    if (1 < auVar8._0_4_) {
        iVar1 = sp_el0;
        if ((*(iVar1 + 0x10) & 0xf0000) == 0) {
            if ((*(iVar1 + 0x10) & 0xff00) == 0) {
                pcVar6 = iVar1 + 0x7a8;
            }
            else {
                pcVar6 = "soft_irq";
            }
        }
        else {
            pcVar6 = 0x8000b6d;
        }
        sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8000f4e,0x8000e77);
        goto code_r0x08002468;
    }
    if (2 < auVar8._0_4_) goto code_r0x08002724;
    uVar4 = 0xffffffea;
    if (((arg2 != 0) && (auVar8._8_8_ != 0)) && (*((auVar8._0_8_ & 0xffffffff) * 0x28 + 0x80004e4) != '\0')) {
        iVar1 = sp_el0;
        if ((*(iVar1 + 0x10) & 0xf0000) == 0) {
            if ((*(iVar1 + 0x10) & 0xff00) == 0) {
                pcVar6 = iVar1 + 0x7a8;
            }
            else {
                pcVar6 = "soft_irq";
            }
        }
        else {
            pcVar6 = 0x8000b6d;
        }
        sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8000f4e,0x8000c32);
        if (0x7e < arg3 + 0xfdffffffU >> 0x19) {
            puVar5 = sym.cnss_plat_ipc_init_file_data(auVar8._8_8_,arg2,arg3 & 0xffffffff,arg3 & 0xffffffff);
            if (puVar5 != NULL) {
                scnprintf(&uStack_108,0x20,0x8000b85,*puVar5);
                uStack_e0 = *(puVar5 + 3);
                uStack_e8 = CONCAT44(*(puVar5 + 2),uStack_e8);
                iVar3 = qmi_send_indication(_obj.plat_ipc_qmi_svc,(auVar8._0_8_ & 0xffffffff) * 0x28 + 0x80004d8,4,
                                            0x31,obj.cnss_plat_ipc_qmi_file_upload_ind_msg_v01_ei,&uStack_108);
                if (iVar3 < 0) {
                    if ((*(iVar1 + 0x10) & 0xf0000) == 0) {
                        if ((*(iVar1 + 0x10) & 0xff00) == 0) {
                            pcVar6 = iVar1 + 0x7a8;
                        }
                        else {
                            pcVar6 = "soft_irq";
                        }
                    }
                    else {
                        pcVar6 = 0x8000b6d;
                    }
                    sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8000f4e,0x8000e77);
                }
                else {
                    iVar3 = wait_for_completion_timeout(puVar5 + 5,0x9c4);
                    if (iVar3 == 0) {
                        if ((*(iVar1 + 0x10) & 0xf0000) == 0) {
                            if ((*(iVar1 + 0x10) & 0xff00) == 0) {
                                pcVar6 = iVar1 + 0x7a8;
                            }
                            else {
                                pcVar6 = "soft_irq";
                            }
                        }
                        else {
                            pcVar6 = 0x8000b6d;
                        }
                        sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8000f4e,0x8000e77);
                    }
                }
                mutex_lock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
                idr_remove(obj.cnss_plat_ipc_init_work,*(puVar5 + 2));
                mutex_unlock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
                uVar7 = 0xffffffea;
                if (*(puVar5 + 0x24) != 0) {
                    uVar7 = 0;
                }
                uVar4 = uVar7;
                kfree(puVar5);
                if ((*(iVar1 + 0x10) & 0xf0000) == 0) {
                    if ((*(iVar1 + 0x10) & 0xff00) == 0) {
                        pcVar6 = iVar1 + 0x7a8;
                    }
                    else {
                        pcVar6 = "soft_irq";
                    }
                }
                else {
                    pcVar6 = 0x8000b6d;
                }
                sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8000f4e,0x8001034);
                goto code_r0x0800246c;
            }
            if ((*(iVar1 + 0x10) & 0xf0000) == 0) {
                if ((*(iVar1 + 0x10) & 0xff00) == 0) {
                    pcVar6 = iVar1 + 0x7a8;
                }
                else {
                    pcVar6 = "soft_irq";
                }
            }
            else {
                pcVar6 = 0x8000b6d;
            }
            sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8000f4e,0x8000e77);
        }
code_r0x08002468:
        uVar4 = 0xffffffea;
    }
code_r0x0800246c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_d8) {
        return uVar4;
    }
    __stack_chk_fail();
code_r0x08002724:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8002728);
    (*pcVar2)();
}


// ===== sym.cnss_plat_ipc_qmi_file_upload @ 0x08002340 (size 1000) =====

uint sym.cnss_plat_ipc_qmi_file_upload(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    ulong *puVar4;
    char *pcVar5;
    uint uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    uint uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_58 = *(iVar1 + 0x5e0);
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_88 = 0;
    if (1 < arg1) {
        iVar1 = sp_el0;
        if ((*(iVar1 + 0x10) & 0xf0000) == 0) {
            if ((*(iVar1 + 0x10) & 0xff00) == 0) {
                pcVar5 = iVar1 + 0x7a8;
            }
            else {
                pcVar5 = "soft_irq";
            }
        }
        else {
            pcVar5 = 0x8000b6d;
        }
        sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar5,0x8000f4e,0x8000e77);
        goto code_r0x08002468;
    }
    if (2 < arg1) goto code_r0x08002724;
    uVar6 = 0xffffffea;
    if (((arg3 != 0) && (arg2 != 0)) && (*(arg1 * 0x28 + 0x80004e4) != '\0')) {
        iVar1 = sp_el0;
        if ((*(iVar1 + 0x10) & 0xf0000) == 0) {
            if ((*(iVar1 + 0x10) & 0xff00) == 0) {
                pcVar5 = iVar1 + 0x7a8;
            }
            else {
                pcVar5 = "soft_irq";
            }
        }
        else {
            pcVar5 = 0x8000b6d;
        }
        sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar5,0x8000f4e,0x8000c32);
        if (0x7e < arg4 + 0xfdffffffU >> 0x19) {
            puVar4 = sym.cnss_plat_ipc_init_file_data(arg2,arg3,arg4 & 0xffffffff,arg4 & 0xffffffff);
            if (puVar4 != NULL) {
                scnprintf(&uStack_88,0x20,0x8000b85,*puVar4);
                uStack_60 = *(puVar4 + 3);
                uStack_68 = CONCAT44(*(puVar4 + 2),uStack_68);
                iVar3 = qmi_send_indication(_obj.plat_ipc_qmi_svc,arg1 * 0x28 + 0x80004d8,4,0x31,
                                            obj.cnss_plat_ipc_qmi_file_upload_ind_msg_v01_ei,&uStack_88);
                if (iVar3 < 0) {
                    if ((*(iVar1 + 0x10) & 0xf0000) == 0) {
                        if ((*(iVar1 + 0x10) & 0xff00) == 0) {
                            pcVar5 = iVar1 + 0x7a8;
                        }
                        else {
                            pcVar5 = "soft_irq";
                        }
                    }
                    else {
                        pcVar5 = 0x8000b6d;
                    }
                    sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar5,0x8000f4e,0x8000e77);
                }
                else {
                    iVar3 = wait_for_completion_timeout(puVar4 + 5,0x9c4);
                    if (iVar3 == 0) {
                        if ((*(iVar1 + 0x10) & 0xf0000) == 0) {
                            if ((*(iVar1 + 0x10) & 0xff00) == 0) {
                                pcVar5 = iVar1 + 0x7a8;
                            }
                            else {
                                pcVar5 = "soft_irq";
                            }
                        }
                        else {
                            pcVar5 = 0x8000b6d;
                        }
                        sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar5,0x8000f4e,0x8000e77);
                    }
                }
                mutex_lock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
                idr_remove(obj.cnss_plat_ipc_init_work,*(puVar4 + 2));
                mutex_unlock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
                uVar6 = 0xffffffea;
                if (*(puVar4 + 0x24) != 0) {
                    uVar6 = 0;
                }
                kfree(puVar4);
                if ((*(iVar1 + 0x10) & 0xf0000) == 0) {
                    if ((*(iVar1 + 0x10) & 0xff00) == 0) {
                        pcVar5 = iVar1 + 0x7a8;
                    }
                    else {
                        pcVar5 = "soft_irq";
                    }
                }
                else {
                    pcVar5 = 0x8000b6d;
                }
                sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar5,0x8000f4e,0x8001034);
                goto code_r0x0800246c;
            }
            if ((*(iVar1 + 0x10) & 0xf0000) == 0) {
                if ((*(iVar1 + 0x10) & 0xff00) == 0) {
                    pcVar5 = iVar1 + 0x7a8;
                }
                else {
                    pcVar5 = "soft_irq";
                }
            }
            else {
                pcVar5 = 0x8000b6d;
            }
            sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar5,0x8000f4e,0x8000e77);
        }
code_r0x08002468:
        uVar6 = 0xffffffea;
    }
code_r0x0800246c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_58) {
        return uVar6;
    }
    __stack_chk_fail();
code_r0x08002724:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8002728);
    (*pcVar2)();
}


// ===== sym.cnss_plat_ipc_init_file_data @ 0x08002758 (size 252) =====

int64_t * sym.cnss_plat_ipc_init_file_data(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint uVar1;
    int64_t *piVar2;
    int iVar3;
    ulong *in_x18;
    int iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = kmem_cache_alloc_trace(_ipc_log_string,0xcc0,0x48);
    if (piVar2 != NULL) {
        *piVar2 = arg1;
        piVar2[1] = arg2;
        iVar4 = arg4;
        *(piVar2 + 0x14) = arg3;
        *(piVar2 + 3) = iVar4;
        *(piVar2 + 0x1c) = 0;
        *(piVar2 + 0x24) = 0;
        if (iVar4 == 0) {
            iVar3 = 0;
        }
        else {
            iVar3 = (arg4 & 0xffffffffU) / 0xf000;
            if (iVar4 + iVar3 * -0xf000 != 0) {
                iVar3 = (arg4 & 0xffffffffU) / 0xf000 + 1;
            }
        }
        *(piVar2 + 4) = iVar3;
        *(piVar2 + 5) = 0;
        __init_swait_queue_head(piVar2 + 6,"&x->wait",reloc.cnss_plat_ipc_qmi_file_download_req_msg_v01_ei);
        mutex_lock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
        uVar1 = idr_alloc_cyclic(obj.cnss_plat_ipc_init_work,piVar2,0,0xffffffff,0xcc0);
        *(piVar2 + 2) = uVar1;
        mutex_unlock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
    }
    return piVar2;
}


// ===== sym.cnss_plat_ipc_qmi_file_download @ 0x08002854 (size 896) =====

uint sym.cnss_plat_ipc_qmi_file_download(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    int64_t iVar4;
    char *pcVar5;
    uint uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    if (arg1 < 2) {
        if (2 < arg1) goto code_r0x08002bd0;
        uVar6 = 0xffffffea;
        if (((arg3 != 0) && (arg2 != 0)) && (*(arg1 * 0x28 + 0x80004e4) != '\0')) {
            iVar4 = sym.cnss_plat_ipc_init_file_data(arg2,arg3,*arg4,0);
            if (iVar4 == 0) {
                iVar4 = sp_el0;
                if ((*(iVar4 + 0x10) & 0xf0000) == 0) {
                    if ((*(iVar4 + 0x10) & 0xff00) == 0) {
                        pcVar5 = iVar4 + 0x7a8;
                    }
                    else {
                        pcVar5 = "soft_irq";
                    }
                }
                else {
                    pcVar5 = 0x8000b6d;
                }
                sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar5,0x8000b88,0x8000e77);
                uVar6 = 0xffffffea;
            }
            else {
                scnprintf(&uStack_70,0x20,0x8000b85,arg2);
                uStack_50 = CONCAT44(*(iVar4 + 0x10),uStack_50);
                iVar3 = qmi_send_indication(_obj.plat_ipc_qmi_svc,arg1 * 0x28 + 0x80004d8,2,0x2a,
                                            obj.cnss_plat_ipc_qmi_file_download_ind_msg_v01_ei,&uStack_70);
                if (iVar3 < 0) {
                    iVar1 = sp_el0;
                    if ((*(iVar1 + 0x10) & 0xf0000) == 0) {
                        if ((*(iVar1 + 0x10) & 0xff00) == 0) {
                            pcVar5 = iVar1 + 0x7a8;
                        }
                        else {
                            pcVar5 = "soft_irq";
                        }
                    }
                    else {
                        pcVar5 = 0x8000b6d;
                    }
                    sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar5,0x8000b88,0x8000e77);
                }
                else {
                    iVar3 = wait_for_completion_timeout(iVar4 + 0x28,0x9c4);
                    if (iVar3 == 0) {
                        iVar1 = sp_el0;
                        if ((*(iVar1 + 0x10) & 0xf0000) == 0) {
                            if ((*(iVar1 + 0x10) & 0xff00) == 0) {
                                pcVar5 = iVar1 + 0x7a8;
                            }
                            else {
                                pcVar5 = "soft_irq";
                            }
                        }
                        else {
                            pcVar5 = 0x8000b6d;
                        }
                        sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar5,0x8000b88,0x8000e77);
                    }
                }
                *arg4 = *(iVar4 + 0x18);
                mutex_lock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
                idr_remove(obj.cnss_plat_ipc_init_work,*(iVar4 + 0x10));
                mutex_unlock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
                uVar6 = 0xffffffea;
                if (*(iVar4 + 0x24) != 0) {
                    uVar6 = 0;
                }
                kfree(iVar4);
                iVar4 = sp_el0;
                if ((*(iVar4 + 0x10) & 0xf0000) == 0) {
                    if ((*(iVar4 + 0x10) & 0xff00) == 0) {
                        pcVar5 = iVar4 + 0x7a8;
                    }
                    else {
                        pcVar5 = "soft_irq";
                    }
                }
                else {
                    pcVar5 = 0x8000b6d;
                }
                sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar5,0x8000b88,0x8001034);
            }
        }
    }
    else {
        iVar4 = sp_el0;
        if ((*(iVar4 + 0x10) & 0xf0000) == 0) {
            if ((*(iVar4 + 0x10) & 0xff00) == 0) {
                pcVar5 = iVar4 + 0x7a8;
            }
            else {
                pcVar5 = "soft_irq";
            }
        }
        else {
            pcVar5 = 0x8000b6d;
        }
        sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar5,0x8000b88,0x8000e77);
        uVar6 = 0xffffffea;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return uVar6;
    }
    __stack_chk_fail();
code_r0x08002bd0:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8002bd4);
    (*pcVar2)();
}


// ===== sym.cnss_plat_ipc_qmi_daemon_config @ 0x08002bfc (size 36) =====

code * sym.cnss_plat_ipc_qmi_daemon_config(void)

{
    code *pcVar1;
    
    pcVar1 = NULL;
    if (*0x800050c != '\0') {
        pcVar1 = obj.daemon_cfg;
    }
    return pcVar1;
}


// ===== sym.cnss_plat_ipc_register @ 0x08002c20 (size 320) =====

ulong sym.cnss_plat_ipc_register(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    code *pcVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (1 < arg1) {
        iVar2 = sp_el0;
        if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
            if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                pcVar4 = iVar2 + 0x7a8;
            }
            else {
                pcVar4 = "soft_irq";
            }
        }
        else {
            pcVar4 = 0x8000b6d;
        }
        sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar4,0x8000fc8,0x8000e77);
        return 0xffffffea;
    }
    if (arg1 < 3) {
        iVar1 = *(reloc.cnss_plat_ipc_qmi_reg_client_req_msg_v01_ei + (arg1 & 0xffffffffU) * 0x28);
        if (0 < iVar1) {
            iVar2 = sp_el0;
            if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                    pcVar4 = iVar2 + 0x7a8;
                }
                else {
                    pcVar4 = "soft_irq";
                }
            }
            else {
                pcVar4 = 0x8000b6d;
            }
            sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar4,0x8000fc8,0x8000e77);
            return 0xffffffea;
        }
        if (iVar1 == 0) {
            iVar2 = (arg1 & 0xffffffffU) * 0x28;
            *(reloc.cnss_plat_ipc_qmi_reg_client_req_msg_v01_ei + (arg1 & 0xffffffffU) * 0x28) = 1;
            *(reloc.cnss_plat_ipc_qmi_disconnect_cb.2372c14ce4309272259c55c9e454de0c.cfi_jt + iVar2) = arg2;
            *(obj.cnss_plat_ipc_qmi_req_handlers + iVar2) = arg3;
            return 0;
        }
    }
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8002d60);
    (*pcVar3)();
}


// ===== sym.cnss_plat_ipc_unregister @ 0x08002d70 (size 232) =====

void sym.cnss_plat_ipc_unregister(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    code *pcVar3;
    char *arg2_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 < 2) {
        if (2 < arg1) {
code_r0x08002df4:
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x5512,0x8002df8);
            (*pcVar3)();
        }
        uVar1 = *(reloc.cnss_plat_ipc_qmi_reg_client_req_msg_v01_ei + (arg1 & 0xffffffffU) * 0x28);
        if (uVar1 != 0) {
            if (*(obj.cnss_plat_ipc_qmi_req_handlers + (arg1 & 0xffffffffU) * 0x28) == arg2) {
                iVar2 = (arg1 & 0xffffffffU) * 0x28;
                *(reloc.cnss_plat_ipc_qmi_reg_client_req_msg_v01_ei + (arg1 & 0xffffffffU) * 0x28) = uVar1 - 1;
                *(reloc.cnss_plat_ipc_qmi_disconnect_cb.2372c14ce4309272259c55c9e454de0c.cfi_jt + iVar2) = 0;
                *(obj.cnss_plat_ipc_qmi_req_handlers + iVar2) = 0;
            }
            else if (1 < uVar1) goto code_r0x08002df4;
        }
    }
    else {
        iVar2 = sp_el0;
        if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
            if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                arg2_00 = iVar2 + 0x7a8;
            }
            else {
                arg2_00 = "soft_irq";
            }
        }
        else {
            arg2_00 = 0x8000b6d;
        }
        sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,arg2_00,0x8000ead,0x8000e77);
    }
    return;
}


// ===== sym.cnss_plat_ipc_init_fn @ 0x08002e60 (size 560) =====

void sym.cnss_plat_ipc_init_fn(void)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = kmem_cache_alloc_trace(_ipc_log_string,0xdc0,0x140);
    if (_segment.ehdr != 0) {
        iVar2 = qmi_handle_init(_segment.ehdr,0xffff,obj.cnss_plat_ipc_qmi_ops,obj.cnss_plat_ipc_qmi_req_handlers);
        if (iVar2 < 0) {
            iVar2 = 0xf0;
            do {
                msleep(0xfa);
                iVar3 = qmi_handle_init(_segment.ehdr,0xffff,obj.cnss_plat_ipc_qmi_ops,
                                        obj.cnss_plat_ipc_qmi_req_handlers);
                if (-1 < iVar3) goto code_r0x08002eb4;
                iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
            iVar1 = sp_el0;
            if ((*(iVar1 + 0x10) & 0xf0000) == 0) {
                if ((*(iVar1 + 0x10) & 0xff00) == 0) {
                    pcVar4 = iVar1 + 0x7a8;
                }
                else {
                    pcVar4 = "soft_irq";
                }
            }
            else {
                pcVar4 = 0x8000b6d;
            }
            sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar4,0x8000f6c,0x8000e77);
        }
        else {
code_r0x08002eb4:
            iVar2 = qmi_add_server(_segment.ehdr,0x42e,1,0);
            iVar1 = sp_el0;
            if (-1 < iVar2) {
                if ((*(iVar1 + 0x10) & 0xf0000) == 0) {
                    if ((*(iVar1 + 0x10) & 0xff00) == 0) {
                        pcVar4 = iVar1 + 0x7a8;
                    }
                    else {
                        pcVar4 = "soft_irq";
                    }
                }
                else {
                    pcVar4 = 0x8000b6d;
                }
                sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar4,0x8000f6c,0x8000c32);
                *0x80004a0 = 0;
                _obj.cnss_plat_ipc_init_work = 0x1000000400000000;
                *0x8000498 = 0;
                __mutex_init(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt,"&svc->file_idr_lock"
                             ,reloc.cnss_plat_ipc_qmi_file_download_req_msg_v01_ei);
                return;
            }
            if ((*(iVar1 + 0x10) & 0xf0000) == 0) {
                if ((*(iVar1 + 0x10) & 0xff00) == 0) {
                    pcVar4 = iVar1 + 0x7a8;
                }
                else {
                    pcVar4 = "soft_irq";
                }
            }
            else {
                pcVar4 = 0x8000b6d;
            }
            sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar4,0x8000f6c,0x8000e77);
            qmi_handle_release(_segment.ehdr);
        }
        kfree(_segment.ehdr);
    }
    return;
}


// ===== sym.cnss_plat_ipc_qmi_bye_cb @ 0x080030a4 (size 88) =====

void sym.cnss_plat_ipc_qmi_bye_cb(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.cnss_plat_ipc_qmi_disconnect_cb
              (arg1,arg2,_reloc.cnss_plat_ipc_qmi_bye_cb.2372c14ce4309272259c55c9e454de0c.cfi_jt);
    sym.cnss_plat_ipc_qmi_disconnect_cb
              (arg1,arg2 & 0xffffffff,
               _reloc.cnss_plat_ipc_qmi_reg_client_req_handler.2372c14ce4309272259c55c9e454de0c.cfi_jt);
    return;
}


// ===== sym.cnss_plat_ipc_qmi_disconnect_cb @ 0x080030fc (size 936) =====

void sym.cnss_plat_ipc_qmi_disconnect_cb(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    int64_t iVar4;
    ulong *extraout_x1;
    char *pcVar5;
    char *pcVar6;
    char *in_x3;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint uStack_9c;
    int64_t iStack_98;
    uchar *puStack_90;
    ulong uStack_88;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iStack_3c = 0;
    if (_segment.ehdr == arg1) {
        pcVar6 = arg3;
        if (((*0x80004e4 != '\0') && (*0x80004dc == arg2)) &&
           (_reloc.cnss_plat_ipc_qmi_bye_cb.2372c14ce4309272259c55c9e454de0c.cfi_jt == arg3)) {
            iVar4 = sp_el0;
            if ((*(iVar4 + 0x10) & 0xf0000) == 0) {
                if ((*(iVar4 + 0x10) & 0xff00) == 0) {
                    pcVar5 = iVar4 + 0x7a8;
                }
                else {
                    pcVar5 = "soft_irq";
                }
            }
            else {
                pcVar5 = 0x8000b6d;
            }
            pcVar6 = "cnss_plat_ipc_qmi_disconnect_cb";
            in_x3 = 0x8000e77;
            sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar5,0x8000bde,0x8000e77);
            *0x80004d8 = 0;
            *0x80004dc = 0;
            *0x80004e4 = '\0';
            mutex_lock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
            iStack_3c = 0;
            iVar4 = idr_get_next(obj.cnss_plat_ipc_init_work,&stack0xffffffffffffffc4);
            while (iVar4 != 0) {
                complete(iVar4 + 0x28);
                iStack_3c = iStack_3c + 1;
                iVar4 = idr_get_next(obj.cnss_plat_ipc_init_work,&stack0xffffffffffffffc4);
            }
            mutex_unlock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
            pcVar2 = _segment.ehdr;
            if (_reloc.cnss_plat_ipc_qmi_reg_client_req_msg_v01_ei != 0) {
                if (_segment.ehdr != NULL) {
                    pcVar6 = 0x8000a90;
                    __cfi_slowpath_diag(0x4f02d134afd44dcb,_segment.ehdr,0x8000a90);
                    (*pcVar2)(_obj.cnss_plat_ipc_qmi_req_handlers,*0x80004e4);
                }
                if (1 < _reloc.cnss_plat_ipc_qmi_reg_client_req_msg_v01_ei) goto code_r0x08003484;
            }
        }
        if (((*0x800050c != '\0') && (*0x8000504 == arg2)) &&
           (_reloc.cnss_plat_ipc_qmi_reg_client_req_handler.2372c14ce4309272259c55c9e454de0c.cfi_jt == arg3)) {
            iVar4 = sp_el0;
            if ((*(iVar4 + 0x10) & 0xf0000) == 0) {
                if ((*(iVar4 + 0x10) & 0xff00) == 0) {
                    pcVar5 = iVar4 + 0x7a8;
                }
                else {
                    pcVar5 = "soft_irq";
                }
            }
            else {
                pcVar5 = 0x8000b6d;
            }
            pcVar6 = "cnss_plat_ipc_qmi_disconnect_cb";
            in_x3 = 0x8000e77;
            sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar5,0x8000bde,0x8000e77);
            *0x8000500 = 0;
            *0x8000504 = 0;
            *0x800050c = '\0';
            mutex_lock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
            iStack_3c = 0;
            iVar4 = idr_get_next(obj.cnss_plat_ipc_init_work,&stack0xffffffffffffffc4);
            while (iVar4 != 0) {
                complete(iVar4 + 0x28);
                iStack_3c = iStack_3c + 1;
                iVar4 = idr_get_next(obj.cnss_plat_ipc_init_work,&stack0xffffffffffffffc4);
            }
            mutex_unlock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
            pcVar2 = _segment.ehdr;
            if (*0x8000520 != 0) {
                if (_segment.ehdr != NULL) {
                    pcVar6 = 0x8000a90;
                    __cfi_slowpath_diag(0x4f02d134afd44dcb,_segment.ehdr,0x8000a90);
                    (*pcVar2)(_reloc.cnss_plat_ipc_qmi_init_setup_req_msg_v01_ei,*0x800050c);
                }
                if (1 < *0x8000520) {
code_r0x08003484:
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x5512,0x8003488);
                    (*pcVar2)();
                }
            }
        }
    }
    else {
        iVar4 = sp_el0;
        if ((*(iVar4 + 0x10) & 0xf0000) == 0) {
            if ((*(iVar4 + 0x10) & 0xff00) == 0) {
                pcVar5 = iVar4 + 0x7a8;
            }
            else {
                pcVar5 = "soft_irq";
            }
        }
        else {
            pcVar5 = 0x8000b6d;
        }
        pcVar6 = "cnss_plat_ipc_qmi_disconnect_cb";
        in_x3 = 0x8000e77;
        sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar5,0x8000bde,0x8000e77);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail();
    *extraout_x18 = 0x800348c;
    uStack_88 = 0x800348c;
    iVar4 = sp_el0;
    iStack_98 = *(iVar4 + 0x5e0);
    uStack_9c = 0;
    puStack_90 = &stack0xffffffffffffffd0;
    if (*in_x3 == '\0') {
code_r0x080036b0:
        iVar3 = qmi_send_response(_segment.ehdr,extraout_x1,pcVar6,6,7,
                                  obj.cnss_plat_ipc_qmi_reg_client_resp_msg_v01_ei,&stack0xffffffffffffff64);
        if (iVar3 < 0) {
            iVar4 = sp_el0;
            if ((*(iVar4 + 0x10) & 0xf0000) == 0) {
                if ((*(iVar4 + 0x10) & 0xff00) == 0) {
                    pcVar6 = iVar4 + 0x7a8;
                }
                else {
                    pcVar6 = "soft_irq";
                }
            }
            else {
                pcVar6 = 0x8000b6d;
            }
            sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8000ec6,0x8000e77);
        }
    }
    else {
        iVar3 = *(in_x3 + 4);
        if (iVar3 < 2) {
            if (iVar3 * 0x28 - 0x45U < 0xffffffffffffff5f) goto code_r0x08003778;
            if (*(iVar3 * 0x28 + 0x80004e4) == '\0') {
                iVar4 = sp_el0;
                if ((*(iVar4 + 0x10) & 0xf0000) == 0) {
                    if ((*(iVar4 + 0x10) & 0xff00) == 0) {
                        pcVar5 = iVar4 + 0x7a8;
                    }
                    else {
                        pcVar5 = "soft_irq";
                    }
                }
                else {
                    pcVar5 = 0x8000b6d;
                }
                sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar5,0x8000ec6,0x8000c32);
                iVar3 = *(in_x3 + 4);
                uVar9 = *extraout_x1;
                *(reloc.cnss_plat_ipc_qmi_bye_cb.2372c14ce4309272259c55c9e454de0c.cfi_jt + iVar3 * 0x28) =
                     *(extraout_x1 + 1);
                *(iVar3 * 0x28 + 0x80004d8) = uVar9;
                if (*(in_x3 + 4) * 0x28 - 0x45U < 0xffffffffffffff5f) goto code_r0x08003778;
                *(*(in_x3 + 4) * 0x28 + 0x80004e4) = 1;
                uVar1 = *(in_x3 + 4);
                if (2 < uVar1) {
code_r0x0800377c:
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x5512,0x8003780);
                    (*pcVar2)();
                }
                uVar8 = uVar1 * 0x28;
                if (0x30 < uVar8) goto code_r0x08003778;
                uVar7 = *(reloc.cnss_plat_ipc_qmi_reg_client_req_msg_v01_ei + uVar8);
                if (uVar7 != 0) {
                    pcVar2 = *(reloc.cnss_plat_ipc_qmi_disconnect_cb.2372c14ce4309272259c55c9e454de0c.cfi_jt +
                              uVar1 * 0x28);
                    if (pcVar2 != NULL) {
                        __cfi_slowpath_diag(0x4f02d134afd44dcb,pcVar2,0x8000a90);
                        (*pcVar2)(*(obj.cnss_plat_ipc_qmi_req_handlers + uVar8),*(uVar8 + 0x80004e4));
                        uVar7 = *(reloc.cnss_plat_ipc_qmi_reg_client_req_msg_v01_ei + uVar8);
                    }
                    if (1 < uVar7) goto code_r0x0800377c;
                }
                goto code_r0x080036b0;
            }
        }
        iVar4 = sp_el0;
        if ((*(iVar4 + 0x10) & 0xf0000) == 0) {
            if ((*(iVar4 + 0x10) & 0xff00) == 0) {
                pcVar6 = iVar4 + 0x7a8;
            }
            else {
                pcVar6 = "soft_irq";
            }
        }
        else {
            pcVar6 = 0x8000b6d;
        }
        sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8000ec6,0x8000e77);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_98) {
        return;
    }
    __stack_chk_fail();
code_r0x08003778:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(1,0x800377c);
    (*pcVar2)();
}


// ===== sym.cnss_plat_ipc_qmi_reg_client_req_handler @ 0x080034a4 (size 732) =====

void sym.cnss_plat_ipc_qmi_reg_client_req_handler(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int64_t iVar2;
    code *pcVar3;
    int iVar4;
    char *pcVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong uVar8;
    ulong *in_x18;
    ulong unaff_x30;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_48 = *(iVar2 + 0x5e0);
    uStack_4c = 0;
    if (*arg4 == '\0') {
code_r0x080036b0:
        iVar4 = qmi_send_response(_segment.ehdr,arg2,arg3,6,7,obj.cnss_plat_ipc_qmi_reg_client_resp_msg_v01_ei,
                                  &uStack_4c);
        if (iVar4 < 0) {
            iVar2 = sp_el0;
            if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                    pcVar5 = iVar2 + 0x7a8;
                }
                else {
                    pcVar5 = "soft_irq";
                }
            }
            else {
                pcVar5 = 0x8000b6d;
            }
            sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar5,0x8000ec6,0x8000e77);
        }
    }
    else {
        iVar4 = *(arg4 + 4);
        if (iVar4 < 2) {
            if (iVar4 * 0x28 - 0x45U < 0xffffffffffffff5f) goto code_r0x08003778;
            if (*(iVar4 * 0x28 + 0x80004e4) == '\0') {
                iVar2 = sp_el0;
                if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                    if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                        pcVar5 = iVar2 + 0x7a8;
                    }
                    else {
                        pcVar5 = "soft_irq";
                    }
                }
                else {
                    pcVar5 = 0x8000b6d;
                }
                sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar5,0x8000ec6,0x8000c32);
                uVar8 = *arg2;
                iVar2 = *(arg4 + 4) * 0x28;
                *(reloc.cnss_plat_ipc_qmi_bye_cb.2372c14ce4309272259c55c9e454de0c.cfi_jt + iVar2) = *(arg2 + 8);
                *(iVar2 + 0x80004d8) = uVar8;
                if (*(arg4 + 4) * 0x28 - 0x45U < 0xffffffffffffff5f) goto code_r0x08003778;
                *(*(arg4 + 4) * 0x28 + 0x80004e4) = 1;
                uVar1 = *(arg4 + 4);
                if (2 < uVar1) {
code_r0x0800377c:
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x8003780);
                    (*pcVar3)();
                }
                uVar7 = uVar1 * 0x28;
                if (0x30 < uVar7) goto code_r0x08003778;
                uVar6 = *(reloc.cnss_plat_ipc_qmi_reg_client_req_msg_v01_ei + uVar7);
                if (uVar6 != 0) {
                    pcVar3 = *(reloc.cnss_plat_ipc_qmi_disconnect_cb.2372c14ce4309272259c55c9e454de0c.cfi_jt +
                              uVar1 * 0x28);
                    if (pcVar3 != NULL) {
                        __cfi_slowpath_diag(0x4f02d134afd44dcb,pcVar3,0x8000a90);
                        (*pcVar3)(*(obj.cnss_plat_ipc_qmi_req_handlers + uVar7),*(uVar7 + 0x80004e4));
                        uVar6 = *(reloc.cnss_plat_ipc_qmi_reg_client_req_msg_v01_ei + uVar7);
                    }
                    if (1 < uVar6) goto code_r0x0800377c;
                }
                goto code_r0x080036b0;
            }
        }
        iVar2 = sp_el0;
        if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
            if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                pcVar5 = iVar2 + 0x7a8;
            }
            else {
                pcVar5 = "soft_irq";
            }
        }
        else {
            pcVar5 = 0x8000b6d;
        }
        sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar5,0x8000ec6,0x8000e77);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_48) {
        return;
    }
    __stack_chk_fail();
code_r0x08003778:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(1,0x800377c);
    (*pcVar3)();
}


// ===== sym.cnss_plat_ipc_qmi_init_setup_req_handler @ 0x08003798 (size 412) =====

void sym.cnss_plat_ipc_qmi_init_setup_req_handler(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong extraout_x1;
    ulong extraout_x1_00;
    char *pcVar6;
    char *pcVar7;
    uint *puVar8;
    uint *puVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong unaff_x30;
    uint uStack_c8;
    uint uStack_c4;
    int iStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    ulong uStack_a8;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_48 = *(iVar2 + 0x5e0);
    iVar2 = sp_el0;
    uStack_58 = 0;
    uStack_50 = 0;
    if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
        if ((*(iVar2 + 0x10) & 0xff00) == 0) {
            pcVar7 = iVar2 + 0x7a8;
        }
        else {
            pcVar7 = "soft_irq";
        }
    }
    else {
        pcVar7 = 0x8000b6d;
    }
    sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar7,0x8000f0d,0x8001034);
    obj.daemon_cfg = *arg3;
    *0x8000531 = *(arg3 + 1);
    *0x8000534 = *(arg3 + 4);
    puVar8 = 0x1;
    iVar3 = qmi_send_response(_segment.ehdr,arg1,arg2,1,0x12,obj.cnss_plat_ipc_qmi_init_setup_resp_msg_v01_ei,
                              &stack0xffffffffffffffa8);
    pcVar7 = arg2;
    if (iVar3 < 0) {
        if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
            if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                pcVar6 = iVar2 + 0x7a8;
            }
            else {
                pcVar6 = "soft_irq";
            }
        }
        else {
            pcVar6 = 0x8000b6d;
        }
        pcVar7 = "cnss_plat_ipc_qmi_init_setup_req_handler";
        puVar8 = 0x8000e77;
        sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8000f0d,0x8000e77);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_48) {
        return;
    }
    __stack_chk_fail();
    *extraout_x18 = 0x8003924;
    uStack_a8 = 0x8003924;
    iVar2 = sp_el0;
    iStack_b8 = *(iVar2 + 0x5e0);
    uStack_c8 = 0;
    puVar9 = NULL;
    puStack_b0 = &stack0xffffffffffffffc0;
    if (puVar8 != NULL) {
        iVar2 = sp_el0;
        if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
            if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                pcVar6 = iVar2 + 0x7a8;
            }
            else {
                pcVar6 = "soft_irq";
            }
        }
        else {
            pcVar6 = 0x8000b6d;
        }
        sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8000ab5,0x8001034);
        mutex_lock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
        iVar4 = idr_find(obj.cnss_plat_ipc_init_work,*puVar8);
        mutex_unlock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
        if (iVar4 == 0) {
            if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                    pcVar6 = iVar2 + 0x7a8;
                }
                else {
                    pcVar6 = "soft_irq";
                }
            }
            else {
                pcVar6 = 0x8000b6d;
            }
            pcVar7 = "cnss_plat_ipc_qmi_file_download_req_handler";
            puVar9 = 0x8000e77;
            sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8000ab5,0x8000e77);
        }
        else {
            if (*(iVar4 + 0x14) < puVar8[1]) {
                if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                    if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                        pcVar6 = iVar2 + 0x7a8;
                    }
                    else {
                        pcVar6 = "soft_irq";
                    }
                }
                else {
                    pcVar6 = 0x8000b6d;
                }
                pcVar7 = "cnss_plat_ipc_qmi_file_download_req_handler";
                puVar9 = 0x8000e77;
                sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8000ab5,0x8000e77);
            }
            else if ((puVar8[4] < 0xf001) && (*(iVar4 + 0x18) + puVar8[4] <= *(iVar4 + 0x14))) {
                if (puVar8[3] == *(iVar4 + 0x1c)) {
                    memcpy(*(iVar4 + 8),puVar8 + 5);
                    iStack_c0 = *(iVar4 + 0x1c) + 1;
                    puVar9 = 0x3;
                    *(iVar4 + 0x1c) = iStack_c0;
                    *(iVar4 + 8) = *(iVar4 + 8) + puVar8[4];
                    iVar5 = _segment.ehdr;
                    uStack_c4 = *(iVar4 + 0x10);
                    *(iVar4 + 0x18) = *(iVar4 + 0x18) + puVar8[4];
                    iVar3 = qmi_send_response(iVar5,extraout_x1,pcVar7,3,0x15,
                                              obj.cnss_plat_ipc_qmi_file_download_resp_msg_v01_ei,
                                              &stack0xffffffffffffff38);
                    if (iVar3 < 0) {
                        if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                            if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                                pcVar6 = iVar2 + 0x7a8;
                            }
                            else {
                                pcVar6 = "soft_irq";
                            }
                        }
                        else {
                            pcVar6 = 0x8000b6d;
                        }
                        pcVar7 = "cnss_plat_ipc_qmi_file_download_req_handler";
                        puVar9 = 0x8000e77;
                        sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8000ab5,0x8000e77);
                    }
                    if (*(puVar8 + 2) == '\0') goto code_r0x08003c30;
                    *(iVar4 + 0x24) = 1;
                }
                else {
                    if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                        if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                            pcVar6 = iVar2 + 0x7a8;
                        }
                        else {
                            pcVar6 = "soft_irq";
                        }
                    }
                    else {
                        pcVar6 = 0x8000b6d;
                    }
                    pcVar7 = "cnss_plat_ipc_qmi_file_download_req_handler";
                    puVar9 = 0x8000e77;
                    sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8000ab5,0x8000e77);
                }
            }
            else {
                if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                    if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                        pcVar6 = iVar2 + 0x7a8;
                    }
                    else {
                        pcVar6 = "soft_irq";
                    }
                }
                else {
                    pcVar6 = 0x8000b6d;
                }
                pcVar7 = "cnss_plat_ipc_qmi_file_download_req_handler";
                puVar9 = 0x8000e77;
                sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8000ab5,0x8000e77);
            }
            complete(iVar4 + 0x28);
        }
    }
code_r0x08003c30:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_b8) {
        __stack_chk_fail();
        *extraout_x18_00 = 0x8003cfc;
        if (puVar9 != NULL) {
            iVar2 = sp_el0;
            if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                    pcVar6 = iVar2 + 0x7a8;
                }
                else {
                    pcVar6 = "soft_irq";
                }
            }
            else {
                pcVar6 = 0x8000b6d;
            }
            sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8001062,0x8001034);
            mutex_lock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
            iVar4 = idr_find(obj.cnss_plat_ipc_init_work,*puVar9);
            mutex_unlock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
            if (iVar4 == 0) {
                if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                    if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                        pcVar7 = iVar2 + 0x7a8;
                    }
                    else {
                        pcVar7 = "soft_irq";
                    }
                }
                else {
                    pcVar7 = 0x8000b6d;
                }
                sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar7,0x8001062,0x8000e77);
            }
            else {
                if (puVar9[1] != *(iVar4 + 0x1c)) {
                    if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                        if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                            pcVar6 = iVar2 + 0x7a8;
                        }
                        else {
                            pcVar6 = "soft_irq";
                        }
                    }
                    else {
                        pcVar6 = 0x8000b6d;
                    }
                    sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8001062,0x8000e77);
                    complete(iVar4 + 0x28);
                }
                iVar5 = kmalloc_order_trace(0xf014,0xdc0,4);
                if (iVar5 != 0) {
                    *(iVar5 + 4) = *(iVar4 + 0x10);
                    iVar3 = *(iVar4 + 0x1c);
                    *(iVar4 + 0x1c) = iVar3 + 1;
                    *(iVar5 + 0xc) = iVar3;
                    uVar1 = *(iVar4 + 0x14);
                    if (0xefff < uVar1) {
                        uVar1 = 0xf000;
                    }
                    *(iVar5 + 0x10) = uVar1;
                    *(iVar5 + 8) = *(iVar4 + 0x1c) == *(iVar4 + 0x20);
                    memcpy(iVar5 + 0x14,*(iVar4 + 8),uVar1);
                    if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                        if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                            pcVar6 = iVar2 + 0x7a8;
                        }
                        else {
                            pcVar6 = "soft_irq";
                        }
                    }
                    else {
                        pcVar6 = 0x8000b6d;
                    }
                    sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8001062,0x8001034);
                    iVar3 = qmi_send_response(_segment.ehdr,extraout_x1_00,pcVar7,5,0xf01e,
                                              obj.cnss_plat_ipc_qmi_file_upload_resp_msg_v01_ei,iVar5);
                    if (iVar3 < 0) {
                        if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                            if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                                pcVar7 = iVar2 + 0x7a8;
                            }
                            else {
                                pcVar7 = "soft_irq";
                            }
                        }
                        else {
                            pcVar7 = 0x8000b6d;
                        }
                        sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar7,0x8001062,0x8000e77);
                    }
                    else {
                        *(iVar4 + 0x14) = *(iVar4 + 0x14) - *(iVar5 + 0x10);
                        *(iVar4 + 8) = *(iVar4 + 8) + *(iVar5 + 0x10);
                        if (*(iVar5 + 8) != '\0') {
                            *(iVar4 + 0x24) = 1;
                            complete(iVar4 + 0x28);
                        }
                    }
                    kfree(iVar5);
                }
            }
        }
        return;
    }
    return;
}


// ===== sym.cnss_plat_ipc_qmi_file_download_req_handler @ 0x08003934 (size 1016) =====

void sym.cnss_plat_ipc_qmi_file_download_req_handler(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong extraout_x1;
    char *pcVar6;
    char *pcVar7;
    uint *puVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint uStack_68;
    uint uStack_64;
    int iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_58 = *(iVar2 + 0x5e0);
    uStack_68 = 0;
    puVar8 = NULL;
    if (arg4 != 0) {
        iVar2 = sp_el0;
        if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
            if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                pcVar6 = iVar2 + 0x7a8;
            }
            else {
                pcVar6 = "soft_irq";
            }
        }
        else {
            pcVar6 = 0x8000b6d;
        }
        sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8000ab5,0x8001034);
        mutex_lock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
        iVar4 = idr_find(obj.cnss_plat_ipc_init_work,*arg4);
        mutex_unlock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
        if (iVar4 == 0) {
            if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                    pcVar6 = iVar2 + 0x7a8;
                }
                else {
                    pcVar6 = "soft_irq";
                }
            }
            else {
                pcVar6 = 0x8000b6d;
            }
            pcVar7 = "cnss_plat_ipc_qmi_file_download_req_handler";
            puVar8 = 0x8000e77;
            arg1 = sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8000ab5,0x8000e77);
            arg3 = pcVar7;
        }
        else {
            if (*(iVar4 + 0x14) < *(arg4 + 4)) {
                if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                    if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                        pcVar6 = iVar2 + 0x7a8;
                    }
                    else {
                        pcVar6 = "soft_irq";
                    }
                }
                else {
                    pcVar6 = 0x8000b6d;
                }
                pcVar7 = "cnss_plat_ipc_qmi_file_download_req_handler";
                puVar8 = 0x8000e77;
                sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8000ab5,0x8000e77);
                arg3 = pcVar7;
            }
            else if ((*(arg4 + 0x10) < 0xf001) && (*(iVar4 + 0x18) + *(arg4 + 0x10) <= *(iVar4 + 0x14))) {
                if (*(arg4 + 0xc) == *(iVar4 + 0x1c)) {
                    memcpy(*(iVar4 + 8),arg4 + 0x14);
                    iStack_60 = *(iVar4 + 0x1c) + 1;
                    puVar8 = 0x3;
                    *(iVar4 + 0x1c) = iStack_60;
                    *(iVar4 + 8) = *(iVar4 + 8) + *(arg4 + 0x10);
                    iVar5 = _segment.ehdr;
                    uStack_64 = *(iVar4 + 0x10);
                    *(iVar4 + 0x18) = *(iVar4 + 0x18) + *(arg4 + 0x10);
                    arg1 = qmi_send_response(iVar5,arg2,arg3,3,0x15,
                                             obj.cnss_plat_ipc_qmi_file_download_resp_msg_v01_ei,
                                             &stack0xffffffffffffff98);
                    if (arg1 < 0) {
                        if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                            if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                                pcVar6 = iVar2 + 0x7a8;
                            }
                            else {
                                pcVar6 = "soft_irq";
                            }
                        }
                        else {
                            pcVar6 = 0x8000b6d;
                        }
                        pcVar7 = "cnss_plat_ipc_qmi_file_download_req_handler";
                        puVar8 = 0x8000e77;
                        arg1 = sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8000ab5,0x8000e77);
                        arg3 = pcVar7;
                    }
                    if (*(arg4 + 8) == '\0') goto code_r0x08003c30;
                    *(iVar4 + 0x24) = 1;
                }
                else {
                    if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                        if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                            pcVar6 = iVar2 + 0x7a8;
                        }
                        else {
                            pcVar6 = "soft_irq";
                        }
                    }
                    else {
                        pcVar6 = 0x8000b6d;
                    }
                    pcVar7 = "cnss_plat_ipc_qmi_file_download_req_handler";
                    puVar8 = 0x8000e77;
                    sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8000ab5,0x8000e77);
                    arg3 = pcVar7;
                }
            }
            else {
                if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                    if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                        pcVar6 = iVar2 + 0x7a8;
                    }
                    else {
                        pcVar6 = "soft_irq";
                    }
                }
                else {
                    pcVar6 = 0x8000b6d;
                }
                pcVar7 = "cnss_plat_ipc_qmi_file_download_req_handler";
                puVar8 = 0x8000e77;
                sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8000ab5,0x8000e77);
                arg3 = pcVar7;
            }
            arg1 = complete(iVar4 + 0x28);
        }
    }
code_r0x08003c30:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_58) {
        __stack_chk_fail(arg1);
        *extraout_x18 = 0x8003cfc;
        if (puVar8 != NULL) {
            iVar2 = sp_el0;
            if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                    pcVar6 = iVar2 + 0x7a8;
                }
                else {
                    pcVar6 = "soft_irq";
                }
            }
            else {
                pcVar6 = 0x8000b6d;
            }
            sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8001062,0x8001034);
            mutex_lock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
            iVar4 = idr_find(obj.cnss_plat_ipc_init_work,*puVar8);
            mutex_unlock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
            if (iVar4 == 0) {
                if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                    if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                        pcVar6 = iVar2 + 0x7a8;
                    }
                    else {
                        pcVar6 = "soft_irq";
                    }
                }
                else {
                    pcVar6 = 0x8000b6d;
                }
                sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8001062,0x8000e77);
            }
            else {
                if (puVar8[1] != *(iVar4 + 0x1c)) {
                    if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                        if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                            pcVar6 = iVar2 + 0x7a8;
                        }
                        else {
                            pcVar6 = "soft_irq";
                        }
                    }
                    else {
                        pcVar6 = 0x8000b6d;
                    }
                    sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8001062,0x8000e77);
                    complete(iVar4 + 0x28);
                }
                iVar5 = kmalloc_order_trace(0xf014,0xdc0,4);
                if (iVar5 != 0) {
                    *(iVar5 + 4) = *(iVar4 + 0x10);
                    iVar3 = *(iVar4 + 0x1c);
                    *(iVar4 + 0x1c) = iVar3 + 1;
                    *(iVar5 + 0xc) = iVar3;
                    uVar1 = *(iVar4 + 0x14);
                    if (0xefff < uVar1) {
                        uVar1 = 0xf000;
                    }
                    *(iVar5 + 0x10) = uVar1;
                    *(iVar5 + 8) = *(iVar4 + 0x1c) == *(iVar4 + 0x20);
                    memcpy(iVar5 + 0x14,*(iVar4 + 8),uVar1);
                    if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                        if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                            pcVar6 = iVar2 + 0x7a8;
                        }
                        else {
                            pcVar6 = "soft_irq";
                        }
                    }
                    else {
                        pcVar6 = 0x8000b6d;
                    }
                    sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8001062,0x8001034);
                    iVar3 = qmi_send_response(_segment.ehdr,extraout_x1,arg3,5,0xf01e,
                                              obj.cnss_plat_ipc_qmi_file_upload_resp_msg_v01_ei,iVar5);
                    if (iVar3 < 0) {
                        if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                            if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                                pcVar6 = iVar2 + 0x7a8;
                            }
                            else {
                                pcVar6 = "soft_irq";
                            }
                        }
                        else {
                            pcVar6 = 0x8000b6d;
                        }
                        sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8001062,0x8000e77);
                    }
                    else {
                        *(iVar4 + 0x14) = *(iVar4 + 0x14) - *(iVar5 + 0x10);
                        *(iVar4 + 8) = *(iVar4 + 8) + *(iVar5 + 0x10);
                        if (*(iVar5 + 8) != '\0') {
                            *(iVar4 + 0x24) = 1;
                            complete(iVar4 + 0x28);
                        }
                    }
                    kfree(iVar5);
                }
            }
        }
        return;
    }
    return;
}


// ===== sym.cnss_plat_ipc_qmi_file_upload_req_handler @ 0x08003d2c (size 876) =====

void sym.cnss_plat_ipc_qmi_file_upload_req_handler(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        iVar2 = sp_el0;
        if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
            if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                pcVar6 = iVar2 + 0x7a8;
            }
            else {
                pcVar6 = "soft_irq";
            }
        }
        else {
            pcVar6 = 0x8000b6d;
        }
        sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8001062,0x8001034);
        mutex_lock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
        iVar4 = idr_find(obj.cnss_plat_ipc_init_work,*arg3);
        mutex_unlock(reloc.cnss_plat_ipc_init_fn.2372c14ce4309272259c55c9e454de0c.cfi_jt);
        if (iVar4 == 0) {
            if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                    pcVar6 = iVar2 + 0x7a8;
                }
                else {
                    pcVar6 = "soft_irq";
                }
            }
            else {
                pcVar6 = 0x8000b6d;
            }
            sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8001062,0x8000e77);
        }
        else {
            if (*(arg3 + 4) != *(iVar4 + 0x1c)) {
                if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                    if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                        pcVar6 = iVar2 + 0x7a8;
                    }
                    else {
                        pcVar6 = "soft_irq";
                    }
                }
                else {
                    pcVar6 = 0x8000b6d;
                }
                sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8001062,0x8000e77);
                complete(iVar4 + 0x28);
            }
            iVar5 = kmalloc_order_trace(0xf014,0xdc0,4);
            if (iVar5 != 0) {
                *(iVar5 + 4) = *(iVar4 + 0x10);
                iVar3 = *(iVar4 + 0x1c);
                *(iVar4 + 0x1c) = iVar3 + 1;
                *(iVar5 + 0xc) = iVar3;
                uVar1 = *(iVar4 + 0x14);
                if (0xefff < uVar1) {
                    uVar1 = 0xf000;
                }
                *(iVar5 + 0x10) = uVar1;
                *(iVar5 + 8) = *(iVar4 + 0x1c) == *(iVar4 + 0x20);
                memcpy(iVar5 + 0x14,*(iVar4 + 8),uVar1);
                if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                    if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                        pcVar6 = iVar2 + 0x7a8;
                    }
                    else {
                        pcVar6 = "soft_irq";
                    }
                }
                else {
                    pcVar6 = 0x8000b6d;
                }
                sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8001062,0x8001034);
                iVar3 = qmi_send_response(_segment.ehdr,arg1,arg2,5,0xf01e,
                                          obj.cnss_plat_ipc_qmi_file_upload_resp_msg_v01_ei,iVar5);
                if (iVar3 < 0) {
                    if ((*(iVar2 + 0x10) & 0xf0000) == 0) {
                        if ((*(iVar2 + 0x10) & 0xff00) == 0) {
                            pcVar6 = iVar2 + 0x7a8;
                        }
                        else {
                            pcVar6 = "soft_irq";
                        }
                    }
                    else {
                        pcVar6 = 0x8000b6d;
                    }
                    sym.cnss_plat_ipc_debug_log_print(_segment.ehdr,pcVar6,0x8001062,0x8000e77);
                }
                else {
                    *(iVar4 + 0x14) = *(iVar4 + 0x14) - *(iVar5 + 0x10);
                    *(iVar4 + 8) = *(iVar4 + 8) + *(iVar5 + 0x10);
                    if (*(iVar5 + 8) != '\0') {
                        *(iVar4 + 0x24) = 1;
                        complete(iVar4 + 0x28);
                    }
                }
                kfree(iVar5);
            }
        }
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x080040c0 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08004104

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
    //switch table (4 cases) at 0x8000ab0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8004118);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x0800437c (size 188) =====

ulong sym.init_module(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_find_node_with_property(0,"qcom,wlan");
    while( true ) {
        if (iVar1 == 0) {
            return 0xffffffed;
        }
        uVar2 = of_device_is_available(iVar1);
        if ((uVar2 & 1) != 0) break;
        iVar1 = of_find_node_with_property(iVar1,"qcom,wlan");
    }
    _segment.ehdr = ipc_log_context_create(10,"cnss_plat",0);
    if (_segment.ehdr == 0) {
        _printk(0x8001037);
    }
    queue_work_on(0x20,___stack_chk_fail,obj.cnss_plat_ipc_init_work);
    return 0;
}


// ===== sym.cleanup_module @ 0x08004438 (size 112) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    cancel_work_sync(obj.cnss_plat_ipc_init_work);
    if (_segment.ehdr != 0) {
        qmi_handle_release();
        kfree(_obj.plat_ipc_qmi_svc);
        idr_destroy(obj.cnss_plat_ipc_init_work);
    }
    if (_segment.ehdr != 0) {
        ipc_log_context_destroy();
        _segment.ehdr = 0;
    }
    return;
}

