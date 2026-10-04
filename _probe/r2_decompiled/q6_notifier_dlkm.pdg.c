// decompiled from q6_notifier_dlkm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 472) =====

//WARNING: Switch with 1 destination removed at 0x0800331c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x717e13c02c8a8b12) {
        if (arg1 < 0x2b3a43e29242445) {
            if (arg1 == -0x3557318fb8d07b71) {
                pcVar2 = sym.audio_notify_remove.83e012e43848e12fb063c97850d862dd.cfi_jt;
code_r0x080021a4:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x080032dc;
            }
            if (arg1 != -0x12cc7aa4e77b8c29) goto code_r0x080032dc;
            pcVar2 = sym.audio_notifier_register.cfi_jt;
        }
        else if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else if (arg1 == 0xf8ea10d0b8f3433) {
            pcVar2 = sym.audio_notifier_deregister.cfi_jt;
        }
        else {
            if (arg1 != 0x5c5e12be07400f75) goto code_r0x080032dc;
            pcVar2 = sym.audio_ssr_register.cfi_jt;
        }
    }
    else if (arg1 < 0x7d57972cd3914fb1) {
        if (arg1 == 0x717e13c02c8a8b12) {
            pcVar2 = sym.audio_notifier_pdr_adsp_cb.83e012e43848e12fb063c97850d862dd.cfi_jt;
        }
        else {
            if (arg1 != 0x741b966c574d47b1) goto code_r0x080032dc;
            pcVar2 = sym.audio_notifier_probe_status.cfi_jt;
        }
    }
    else {
        if (arg1 == 0x7d57972cd3914fb1) {
            pcVar2 = sym.__typeid__ZTSFiP14notifier_blockmPvE_global_addr;
            goto code_r0x080021a4;
        }
        if (arg1 == 0x7e04a0fb7ad8bcd5) {
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
        else {
            if (arg1 != 0x7ffad59d50a61c95) goto code_r0x080032dc;
            pcVar2 = sym.audio_ssr_deregister.cfi_jt;
        }
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080032dc:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003330);
    (*pcVar1)();
}


// ===== sym.audio_ssr_register.cfi_jt @ 0x080021e0 (size 8) =====

ulong sym.audio_ssr_register.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        _printk(0x80014d4,"audio_ssr_register");
        uVar1 = 0xffffffffffffffea;
    }
    else {
        uVar1 = qcom_register_ssr_notifier();
    }
    return uVar1;
}


// ===== sym.audio_notifier_deregister.cfi_jt @ 0x080021e8 (size 8) =====

int sym.audio_notifier_deregister.cfi_jt(int64_t param_1)

{
    char *pcVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint32_t uVar4;
    code *pcVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    ulong *in_x18;
    int *piVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    code *pcVar12;
    code *pcVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        iVar8 = ___ratelimit(obj.audio_notifier_deregister._rs,"audio_notifier_deregister");
        if (iVar8 == 0) {
            iVar8 = -0x16;
        }
        else {
            _printk(0x8001325,"audio_notifier_deregister");
            iVar8 = -0x16;
        }
    }
    else {
        mutex_lock(obj.client_list);
        if (_obj.client_list == obj.client_list) {
            iVar8 = 0;
        }
        else {
            iVar8 = 0;
            pcVar5 = _obj.client_list;
            do {
                pcVar12 = pcVar5 + 0x18;
                pcVar13 = *pcVar5;
                iVar6 = strcmp(param_1,pcVar12);
                if (iVar6 == 0) {
                    uVar4 = *(pcVar5 + 0x2c);
                    uVar10 = uVar4;
                    if (uVar4 < 2) {
                        uVar11 = *(pcVar5 + 0x30);
                        if (1 < *(pcVar5 + 0x30)) {
    //WARNING: Does not return
                            pcVar5 = SoftwareBreakpoint(0x5512,0x80025f4);
                            (*pcVar5)();
                        }
                        piVar9 = uVar10 * 0x650 + uVar11 * 0x328 + 0x8000300;
                        if (*piVar9 == 1) {
                            if (uVar4 == 1) {
                                iVar6 = audio_pdr_service_deregister(*(uVar11 * 0x328 + 0x8000934));
joined_r0x08002424:
                                if (-1 < iVar6) {
                                    iVar2 = uVar11 * 0x328 + uVar10 * 0x650;
                                    pcVar1 = "SSR_ADSP" + iVar2 + 0x18;
                                    pcVar1[0] = '\0';
                                    pcVar1[1] = '\0';
                                    pcVar1[2] = '\0';
                                    pcVar1[3] = '\0';
                                    pcVar1 = "SSR_ADSP" + iVar2 + 0x20;
                                    pcVar1[0] = '\0';
                                    pcVar1[1] = '\0';
                                    pcVar1[2] = '\0';
                                    pcVar1[3] = '\0';
                                    pcVar1[4] = '\0';
                                    pcVar1[5] = '\0';
                                    pcVar1[6] = '\0';
                                    pcVar1[7] = '\0';
                                    goto code_r0x08002360;
                                }
                                iVar8 = ___ratelimit(obj.audio_notifier_dereg_service._rs.23,
                                                     "audio_notifier_dereg_service");
                                if (iVar8 != 0) {
                                    _printk(0x80012e2,"audio_notifier_dereg_service",
                                            "SSR_ADSP" + uVar11 * 0x328 + uVar10 * 0x650,iVar6);
                                }
                            }
                            else {
                                if (uVar4 == 0) {
                                    iVar6 = qcom_unregister_ssr_notifier
                                                      (*(uVar11 * 0x328 + 0x80002f0),*(uVar11 * 0x328 + 0x80002f8));
                                    goto joined_r0x08002424;
                                }
                                iVar8 = ___ratelimit(obj.audio_notifier_dereg_service._rs,
                                                     "audio_notifier_dereg_service");
                                if (iVar8 != 0) {
                                    _printk(0x8001739,"audio_notifier_dereg_service",uVar4);
                                }
                                iVar6 = -0x16;
                            }
                            iVar7 = ___ratelimit(obj.audio_notifier_dereg_client._rs.9,"audio_notifier_dereg_client");
                            iVar8 = iVar6;
                            if (iVar7 != 0) {
                                _printk(0x800162c,"audio_notifier_dereg_client",pcVar12,
                                        "SSR_ADSP" + uVar11 * 0x328 + uVar10 * 0x650,iVar6);
                            }
                        }
                        else {
code_r0x08002360:
                            iVar6 = srcu_notifier_chain_unregister
                                              (uVar10 * 0x650 + uVar11 * 0x328 + 0x8000308,*(pcVar5 + 0x10));
                            if (-1 < iVar6) {
                                *(pcVar5 + 0x2c) = 0xfffffffe;
                                if (0 < *piVar9) {
                                    *piVar9 = *piVar9 + -1;
                                }
                                goto code_r0x080023a0;
                            }
                            iVar7 = ___ratelimit(obj.audio_notifier_dereg_client._rs.11,"audio_notifier_dereg_client");
                            iVar8 = iVar6;
                            if (iVar7 != 0) {
                                _printk(0x80014ef,"audio_notifier_dereg_client",iVar6);
                            }
                        }
                    }
                    else {
                        if (uVar4 == 0xfffffffe) {
code_r0x080023a0:
                            uVar10 = __list_del_entry_valid(pcVar5);
                            if ((uVar10 & 1) != 0) {
                                iVar2 = *pcVar5;
                                piVar3 = *(pcVar5 + 8);
                                *(iVar2 + 8) = piVar3;
                                *piVar3 = iVar2;
                            }
                            *pcVar5 = -0x2152ffffffffff00;
                            *(pcVar5 + 8) = -0x2152fffffffffede;
                            kfree(pcVar5);
                            goto code_r0x080022c0;
                        }
                        iVar8 = ___ratelimit(obj.audio_notifier_dereg_client._rs,"audio_notifier_dereg_client");
                        if (iVar8 != 0) {
                            _printk(0x8001265,"audio_notifier_dereg_client",pcVar12,*(pcVar5 + 0x2c));
                        }
                        iVar8 = -0x16;
                    }
                    iVar6 = ___ratelimit(obj.audio_notifier_deregister._rs.1,"audio_notifier_deregister");
                    if (iVar6 != 0) {
                        _printk(0x80013a6,"audio_notifier_deregister",iVar8,*(pcVar5 + 0x2c),*(pcVar5 + 0x30));
                    }
                }
code_r0x080022c0:
                pcVar5 = pcVar13;
            } while (pcVar13 != obj.client_list);
        }
        mutex_unlock(obj.client_list);
    }
    return iVar8;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080021f0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.audio_notify_probe.83e012e43848e12fb063c97850d862dd.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080021f8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.audio_notify_probe.83e012e43848e12fb063c97850d862dd.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.audio_notifier_pdr_adsp_cb.83e012e43848e12fb063c97850d862dd.cfi_jt @ 0x08002200 (size 8) =====

void sym.audio_notifier_pdr_adsp_cb.83e012e43848e12fb063c97850d862dd.cfi_jt(int param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.audio_notifier_service_cb(param_1,1,0);
    return;
}


// ===== sym.audio_notifier_register.cfi_jt @ 0x08002208 (size 8) =====

int sym.audio_notifier_register.cfi_jt(int64_t param_1,uint param_2,int64_t param_3)

{
    int64_t iVar1;
    ulong *puVar2;
    int iVar3;
    int iVar4;
    ulong *arg1;
    uint64_t uVar5;
    ulong uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        iVar3 = ___ratelimit(obj.audio_notifier_register._rs,"audio_notifier_register");
        if (iVar3 == 0) {
            return -0x16;
        }
        uVar6 = 0x8001325;
    }
    else {
        if (param_3 != 0) {
            iVar1 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar1 = 0x30;
            }
            arg1 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xcc0,0x38);
            if (arg1 == NULL) {
                return -0xc;
            }
            *arg1 = arg1;
            arg1[1] = arg1;
            arg1[2] = param_3;
            strlcpy(arg1 + 3,param_1,0x14);
            *(arg1 + 0x2c) = 0xfffffffe;
            *(arg1 + 6) = param_2;
            mutex_lock(obj.client_list);
            iVar3 = sym.audio_notifier_reg_client(arg1);
            puVar2 = *0x8000158;
            if (iVar3 < 0) {
                mutex_unlock(obj.client_list);
                iVar4 = ___ratelimit(obj.audio_notifier_register._rs.5,"audio_notifier_register");
                if (iVar4 != 0) {
                    _printk(0x8001753,"audio_notifier_register",arg1 + 3,iVar3);
                }
                kfree(arg1);
                return iVar3;
            }
            uVar5 = __list_add_valid(arg1,*0x8000158,obj.client_list);
            if ((uVar5 & 1) != 0) {
                *0x8000158 = arg1;
                *arg1 = obj.client_list;
                arg1[1] = puVar2;
                *puVar2 = arg1;
            }
            mutex_unlock(obj.client_list);
            return iVar3;
        }
        iVar3 = ___ratelimit(obj.audio_notifier_register._rs.3,"audio_notifier_register");
        if (iVar3 == 0) {
            return -0x16;
        }
        uVar6 = 0x8001846;
    }
    _printk(uVar6,"audio_notifier_register");
    return -0x16;
}


// ===== sym.__typeid__ZTSFiP14notifier_blockmPvE_global_addr @ 0x08002210 (size 8) =====

ulong sym.__typeid__ZTSFiP14notifier_blockmPvE_global_addr(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.audio_notifier_service_cb(param_2,0,0);
    return 1;
}


// ===== sym.audio_notifier_ssr_modem_cb.83e012e43848e12fb063c97850d862dd.cfi_jt @ 0x08002218 (size 8) =====

ulong sym.audio_notifier_ssr_modem_cb.83e012e43848e12fb063c97850d862dd.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.audio_notifier_service_cb(param_2,0,1);
    return 1;
}


// ===== sym.audio_ssr_deregister.cfi_jt @ 0x08002220 (size 8) =====

void sym.audio_ssr_deregister.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    qcom_unregister_ssr_notifier();
    return;
}


// ===== sym.audio_notify_remove.83e012e43848e12fb063c97850d862dd.cfi_jt @ 0x08002228 (size 8) =====

ulong sym.audio_notify_remove.83e012e43848e12fb063c97850d862dd.cfi_jt(void)

{
    return 0;
}


// ===== sym.audio_notify_probe.83e012e43848e12fb063c97850d862dd.cfi_jt @ 0x08002230 (size 8) =====

ulong sym.audio_notify_probe.83e012e43848e12fb063c97850d862dd.cfi_jt(code *param_1)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    int64_t *piVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong *in_x18;
    code *pcVar7;
    code *pcVar8;
    ulong unaff_x30;
    uint uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    pcVar7 = param_1 + 0x10;
    iStack_58 = *(iVar6 + 0x5e0);
    uStack_5c = 0;
    _segment.ehdr = NULL;
    piVar4 = devm_kmalloc(pcVar7,0x10,0xdc0);
    if (piVar4 == NULL) {
        uVar5 = 0xfffffff4;
    }
    else {
        uVar5 = *(param_1 + 0x300);
        *(piVar4 + 1) = 0;
        *(param_1 + 0xa8) = piVar4;
        iVar6 = of_find_property(uVar5,"qcom,rproc-handle",&uStack_5c);
        if (iVar6 == 0) {
            _dev_err(pcVar7,"Missing remotproc handle\n");
            uVar5 = 0xffffffea;
        }
        else {
            uVar1 = (**(iVar6 + 0x10) & 0xff00ff00) >> 8 | (**(iVar6 + 0x10) & 0xff00ff) << 8;
            iVar6 = rproc_get_by_phandle(uVar1 >> 0x10 | uVar1 << 0x10);
            *piVar4 = iVar6;
            if (iVar6 == 0) {
                iVar2 = ___ratelimit(obj.audio_notify_probe._rs,"audio_notify_probe");
                if (iVar2 != 0) {
                    _dev_info(pcVar7,"remotproc handle NULL\n");
                }
                uVar5 = 0xfffffdfb;
            }
            else {
                _segment.ehdr = param_1;
                __mutex_init(obj.client_list,"&notifier_mutex",obj.audio_notifier_deregister._rs.1);
                if (-2 < _segment.ehdr) {
                    srcu_init_notifier_head(0x8000308);
                }
                if (-2 < _segment.ehdr) {
                    srcu_init_notifier_head(0x8000630);
                }
                if (-2 < _segment.ehdr) {
                    srcu_init_notifier_head(0x8000958);
                }
                if (-2 < _segment.ehdr) {
                    srcu_init_notifier_head(0x8000c80);
                }
                if (_segment.ehdr == -1) {
                    _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
                }
                if (_segment.ehdr == -1) {
                    _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
                }
                mutex_lock(obj.client_list);
                if (((*0x8000938 == -2) && (*0x8000c60 == -2)) &&
                   (pcVar7 = _segment.ehdr, _segment.ehdr != obj.client_list)) {
                    do {
                        pcVar8 = *pcVar7;
                        iVar2 = sym.audio_notifier_reg_client(pcVar7);
                        if ((iVar2 < 0) &&
                           (iVar3 = ___ratelimit(obj.audio_notifier_reg_all_clients._rs,
                                                 "audio_notifier_reg_all_clients"), iVar3 != 0)) {
                            _printk(0x80016e8,"audio_notifier_reg_all_clients",pcVar7 + 0x18,iVar2);
                        }
                        pcVar7 = pcVar8;
                    } while (pcVar8 != obj.client_list);
                }
                mutex_unlock(obj.client_list);
                uVar5 = 0;
                *(piVar4 + 1) = 1;
            }
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_58) {
        __stack_chk_fail(uVar5);
        return 0;
    }
    return uVar5;
}


// ===== sym.audio_notifier_probe_status.cfi_jt @ 0x08002238 (size 8) =====

ulong sym.audio_notifier_probe_status.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        if (*(_segment.ehdr + 0xa8) == 0) {
            _dev_err(_segment.ehdr + 0x10," %s: Private data get failed\n","audio_notifier_probe_status");
        }
        else if (*(*(_segment.ehdr + 0xa8) + 8) != '\0') {
            return 1;
        }
    }
    return 0;
}


// ===== sym.audio_notifier_deregister @ 0x08002240 (size 948) =====

int sym.audio_notifier_deregister(int64_t arg1)

{
    char *pcVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint32_t uVar4;
    code *pcVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    ulong *in_x18;
    int *piVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    code *pcVar12;
    code *pcVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        iVar8 = ___ratelimit(obj.audio_notifier_deregister._rs,"audio_notifier_deregister");
        if (iVar8 == 0) {
            iVar8 = -0x16;
        }
        else {
            _printk(0x8001325,"audio_notifier_deregister");
            iVar8 = -0x16;
        }
    }
    else {
        mutex_lock(obj.client_list);
        if (_obj.client_list == obj.client_list) {
            iVar8 = 0;
        }
        else {
            iVar8 = 0;
            pcVar5 = _obj.client_list;
            do {
                pcVar12 = pcVar5 + 0x18;
                pcVar13 = *pcVar5;
                iVar6 = strcmp(arg1,pcVar12);
                if (iVar6 == 0) {
                    uVar4 = *(pcVar5 + 0x2c);
                    uVar10 = uVar4;
                    if (uVar4 < 2) {
                        uVar11 = *(pcVar5 + 0x30);
                        if (1 < *(pcVar5 + 0x30)) {
    //WARNING: Does not return
                            pcVar5 = SoftwareBreakpoint(0x5512,0x80025f4);
                            (*pcVar5)();
                        }
                        piVar9 = uVar10 * 0x650 + uVar11 * 0x328 + 0x8000300;
                        if (*piVar9 == 1) {
                            if (uVar4 == 1) {
                                iVar6 = audio_pdr_service_deregister(*(uVar11 * 0x328 + 0x8000934));
joined_r0x08002424:
                                if (-1 < iVar6) {
                                    iVar2 = uVar11 * 0x328 + uVar10 * 0x650;
                                    pcVar1 = "SSR_ADSP" + iVar2 + 0x18;
                                    pcVar1[0] = '\0';
                                    pcVar1[1] = '\0';
                                    pcVar1[2] = '\0';
                                    pcVar1[3] = '\0';
                                    pcVar1 = "SSR_ADSP" + iVar2 + 0x20;
                                    pcVar1[0] = '\0';
                                    pcVar1[1] = '\0';
                                    pcVar1[2] = '\0';
                                    pcVar1[3] = '\0';
                                    pcVar1[4] = '\0';
                                    pcVar1[5] = '\0';
                                    pcVar1[6] = '\0';
                                    pcVar1[7] = '\0';
                                    goto code_r0x08002360;
                                }
                                iVar8 = ___ratelimit(obj.audio_notifier_dereg_service._rs.23,
                                                     "audio_notifier_dereg_service");
                                if (iVar8 != 0) {
                                    _printk(0x80012e2,"audio_notifier_dereg_service",
                                            "SSR_ADSP" + uVar11 * 0x328 + uVar10 * 0x650,iVar6);
                                }
                            }
                            else {
                                if (uVar4 == 0) {
                                    iVar6 = qcom_unregister_ssr_notifier
                                                      (*(uVar11 * 0x328 + 0x80002f0),*(uVar11 * 0x328 + 0x80002f8));
                                    goto joined_r0x08002424;
                                }
                                iVar8 = ___ratelimit(obj.audio_notifier_dereg_service._rs,
                                                     "audio_notifier_dereg_service");
                                if (iVar8 != 0) {
                                    _printk(0x8001739,"audio_notifier_dereg_service",uVar4);
                                }
                                iVar6 = -0x16;
                            }
                            iVar7 = ___ratelimit(obj.audio_notifier_dereg_client._rs.9,"audio_notifier_dereg_client");
                            iVar8 = iVar6;
                            if (iVar7 != 0) {
                                _printk(0x800162c,"audio_notifier_dereg_client",pcVar12,
                                        "SSR_ADSP" + uVar11 * 0x328 + uVar10 * 0x650,iVar6);
                            }
                        }
                        else {
code_r0x08002360:
                            iVar6 = srcu_notifier_chain_unregister
                                              (uVar10 * 0x650 + uVar11 * 0x328 + 0x8000308,*(pcVar5 + 0x10));
                            if (-1 < iVar6) {
                                *(pcVar5 + 0x2c) = 0xfffffffe;
                                if (0 < *piVar9) {
                                    *piVar9 = *piVar9 + -1;
                                }
                                goto code_r0x080023a0;
                            }
                            iVar7 = ___ratelimit(obj.audio_notifier_dereg_client._rs.11,"audio_notifier_dereg_client");
                            iVar8 = iVar6;
                            if (iVar7 != 0) {
                                _printk(0x80014ef,"audio_notifier_dereg_client",iVar6);
                            }
                        }
                    }
                    else {
                        if (uVar4 == 0xfffffffe) {
code_r0x080023a0:
                            uVar10 = __list_del_entry_valid(pcVar5);
                            if ((uVar10 & 1) != 0) {
                                iVar2 = *pcVar5;
                                piVar3 = *(pcVar5 + 8);
                                *(iVar2 + 8) = piVar3;
                                *piVar3 = iVar2;
                            }
                            *pcVar5 = -0x2152ffffffffff00;
                            *(pcVar5 + 8) = -0x2152fffffffffede;
                            kfree(pcVar5);
                            goto code_r0x080022c0;
                        }
                        iVar8 = ___ratelimit(obj.audio_notifier_dereg_client._rs,"audio_notifier_dereg_client");
                        if (iVar8 != 0) {
                            _printk(0x8001265,"audio_notifier_dereg_client",pcVar12,*(pcVar5 + 0x2c));
                        }
                        iVar8 = -0x16;
                    }
                    iVar6 = ___ratelimit(obj.audio_notifier_deregister._rs.1,"audio_notifier_deregister");
                    if (iVar6 != 0) {
                        _printk(0x80013a6,"audio_notifier_deregister",iVar8,*(pcVar5 + 0x2c),*(pcVar5 + 0x30));
                    }
                }
code_r0x080022c0:
                pcVar5 = pcVar13;
            } while (pcVar13 != obj.client_list);
        }
        mutex_unlock(obj.client_list);
    }
    return iVar8;
}


// ===== sym.audio_notifier_register @ 0x080025f4 (size 440) =====

int sym.audio_notifier_register(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong *puVar2;
    int iVar3;
    int iVar4;
    ulong *arg1_00;
    uint64_t uVar5;
    ulong uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        iVar3 = ___ratelimit(obj.audio_notifier_register._rs,"audio_notifier_register");
        if (iVar3 == 0) {
            return -0x16;
        }
        uVar6 = 0x8001325;
    }
    else {
        if (arg3 != 0) {
            iVar1 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar1 = 0x30;
            }
            arg1_00 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xcc0,0x38);
            if (arg1_00 == NULL) {
                return -0xc;
            }
            *arg1_00 = arg1_00;
            arg1_00[1] = arg1_00;
            arg1_00[2] = arg3;
            strlcpy(arg1_00 + 3,arg1,0x14);
            *(arg1_00 + 0x2c) = 0xfffffffe;
            *(arg1_00 + 6) = arg2;
            mutex_lock(obj.client_list);
            iVar3 = sym.audio_notifier_reg_client(arg1_00);
            puVar2 = *0x8000158;
            if (iVar3 < 0) {
                mutex_unlock(obj.client_list);
                iVar4 = ___ratelimit(obj.audio_notifier_register._rs.5,"audio_notifier_register");
                if (iVar4 != 0) {
                    _printk(0x8001753,"audio_notifier_register",arg1_00 + 3,iVar3);
                }
                kfree(arg1_00);
                return iVar3;
            }
            uVar5 = __list_add_valid(arg1_00,*0x8000158,obj.client_list);
            if ((uVar5 & 1) != 0) {
                *0x8000158 = arg1_00;
                *arg1_00 = obj.client_list;
                arg1_00[1] = puVar2;
                *puVar2 = arg1_00;
            }
            mutex_unlock(obj.client_list);
            return iVar3;
        }
        iVar3 = ___ratelimit(obj.audio_notifier_register._rs.3,"audio_notifier_register");
        if (iVar3 == 0) {
            return -0x16;
        }
        uVar6 = 0x8001846;
    }
    _printk(uVar6,"audio_notifier_register");
    return -0x16;
}


// ===== sym.audio_notifier_reg_client @ 0x080027ac (size 996) =====

ulong sym.audio_notifier_reg_client(int64_t arg1)

{
    bool bVar1;
    char *pcVar2;
    int *piVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int iVar6;
    ulong uVar7;
    ulong *puVar8;
    uint64_t uVar9;
    uint32_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar11;
    code *pcVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    ulong unaff_x30;
    uint32_t uStack_70;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    uVar4 = *(arg1 + 0x30);
    uVar14 = uVar4;
    uVar10 = 0;
    if (uVar4 != 1) {
        uVar10 = 0xfffffffe;
    }
    if (uVar4 == 0) {
        uVar10 = 1;
    }
    if (uVar10 < 0) {
        iVar6 = ___ratelimit(obj.audio_notifier_reg_client._rs,"audio_notifier_reg_client");
        if (iVar6 != 0) {
            _printk(0x800160d,"audio_notifier_reg_client",uVar10);
        }
code_r0x08002b2c:
        uVar7 = 0xffffffea;
    }
    else {
        if (1 < uVar4) {
code_r0x08002b88:
    //WARNING: Does not return
            pcVar12 = SoftwareBreakpoint(0x5512,0x8002b8c);
            (*pcVar12)();
        }
        uVar7 = 0;
        do {
            iVar5 = _segment.ehdr;
            if (0xc87 < uVar14 * 0x328 + uVar10 * 0x650) {
code_r0x08002b84:
    //WARNING: Does not return
                pcVar12 = SoftwareBreakpoint(1,0x8002b88);
                (*pcVar12)();
            }
            uVar13 = uVar10;
            iVar6 = *(uVar13 * 0x650 + uVar14 * 0x328 + 0x80002e8);
            if (iVar6 == -1) {
                iVar6 = ___ratelimit(obj.audio_notifier_reg_client._rs.27,"audio_notifier_reg_client");
                if (iVar6 != 0) {
                    _printk(0x8001884,"audio_notifier_reg_client");
                }
                goto code_r0x08002b2c;
            }
            if ((-1 < iVar6) && (*(arg1 + 0x2c) == -2)) {
                uVar4 = *(arg1 + 0x30);
                uVar11 = uVar4;
                if (1 < uVar4) goto code_r0x08002b88;
                if ((uVar11 * 0x328 + uVar10 * 0x650) - 0xc70 < 0xfffffffffffff360) goto code_r0x08002b84;
                piVar3 = uVar13 * 0x650 + uVar11 * 0x328 + 0x8000300;
                if (*piVar3 == 0) {
                    if (*(_segment.ehdr + 0xa8) != NULL) {
                        if (uVar10 == 1) {
                            uVar9 = audio_pdr_service_register
                                              (*(uVar11 * 0x328 + 0x8000934),
                                               *(
                                                reloc.audio_notifier_pdr_adsp_cb.83e012e43848e12fb063c97850d862dd.cfi_jt
                                                + uVar11 * 0x328));
joined_r0x080029c0:
                            if ((uVar9 != 0) && (uVar9 < 0xfffffffffffff001)) {
                                iVar5 = uVar11 * 0x328 + uVar13 * 0x650;
                                *("SSR_ADSP" + iVar5 + 0x20) = uVar9;
                                pcVar2 = "SSR_ADSP" + iVar5 + 0x18;
                                pcVar2[0] = '\0';
                                pcVar2[1] = '\0';
                                pcVar2[2] = '\0';
                                pcVar2[3] = '\0';
                                _printk(0x8001688,"audio_notifier_reg_service");
                                goto code_r0x080028c0;
                            }
                            iVar6 = ___ratelimit(obj.audio_notifier_reg_service._rs.35,"audio_notifier_reg_service");
                            if (iVar6 != 0) {
                                _printk(0x8001479,"audio_notifier_reg_service",
                                        "SSR_ADSP" + uVar11 * 0x328 + uVar13 * 0x650);
                            }
                        }
                        else {
                            if (uVar10 == 0) {
                                uVar9 = sym.audio_ssr_register
                                                  (*(**(_segment.ehdr + 0xa8) + 0x18),*(uVar11 * 0x328 + 0x80002f8));
                                goto joined_r0x080029c0;
                            }
                            iVar6 = ___ratelimit(obj.audio_notifier_reg_service._rs.34,"audio_notifier_reg_service");
                            if (iVar6 != 0) {
                                _printk(0x8001739,"audio_notifier_reg_service",uVar10);
                            }
                        }
                        iVar6 = ___ratelimit(obj.audio_notifier_reg_client_service._rs.32,
                                             "audio_notifier_reg_client_service");
                        if (iVar6 != 0) {
                            _printk(0x800143a,"audio_notifier_reg_client_service",
                                    "SSR_ADSP" + uVar11 * 0x328 + uVar13 * 0x650,arg1 + 0x18);
                        }
                        iVar6 = ___ratelimit(obj.audio_notifier_reg_client._rs.29,"audio_notifier_reg_client");
                        if (iVar6 != 0) {
                            _printk(0x80017cc,"audio_notifier_reg_client",arg1 + 0x18,
                                    "SSR_ADSP" + uVar14 * 0x328 + uVar13 * 0x650);
                        }
                        uVar7 = 0xffffffea;
                        goto code_r0x08002844;
                    }
                    iVar6 = ___ratelimit(obj.audio_notifier_reg_service._rs,"audio_notifier_reg_service");
                    if (iVar6 != 0) {
                        _dev_err(iVar5 + 0x10," %s: Private data get failed\n","audio_notifier_reg_service");
                    }
                }
code_r0x080028c0:
                *(arg1 + 0x2c) = uVar10;
                srcu_notifier_chain_register(uVar13 * 0x650 + uVar11 * 0x328 + 0x8000308,*(arg1 + 0x10));
                *piVar3 = *piVar3 + 1;
                if (*(arg1 + 0x2c) == 1) {
                    puVar8 = *(arg1 + 0x10);
                    pcVar12 = *puVar8;
                    uStack_70 = uVar10;
                    uStack_6c = uVar4;
                    if (1 < (pcVar12 + -0x8002210 >> 3 | pcVar12 << 0x3d)) {
                        __cfi_slowpath_diag(0x7d57972cd3914fb1,pcVar12,0x8001240);
                        puVar8 = *(arg1 + 0x10);
                    }
                    (*pcVar12)(puVar8,*(uVar13 * 0x650 + uVar11 * 0x328 + 0x80002e8),&uStack_70);
                }
                uVar7 = 0;
            }
code_r0x08002844:
            bVar1 = 0 < uVar10;
            uVar10 = uVar10 - 1;
        } while (bVar1);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_68) {
        return uVar7;
    }
    __stack_chk_fail(uVar7);
    *extraout_x18 = sym.audio_notifier_probe_status;
    if (_segment.ehdr != 0) {
        if (*(_segment.ehdr + 0xa8) == 0) {
            _dev_err(_segment.ehdr + 0x10," %s: Private data get failed\n","audio_notifier_probe_status");
        }
        else if (*(*(_segment.ehdr + 0xa8) + 8) != '\0') {
            return 1;
        }
    }
    return 0;
}


// ===== sym.audio_notifier_probe_status @ 0x08002b90 (size 96) =====

ulong sym.audio_notifier_probe_status(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        if (*(_segment.ehdr + 0xa8) == 0) {
            _dev_err(_segment.ehdr + 0x10," %s: Private data get failed\n","audio_notifier_probe_status");
        }
        else if (*(*(_segment.ehdr + 0xa8) + 8) != '\0') {
            return 1;
        }
    }
    return 0;
}


// ===== sym.audio_notifier_pdr_adsp_cb @ 0x08002bf0 (size 48) =====

void sym.audio_notifier_pdr_adsp_cb(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.audio_notifier_service_cb(arg1,1,0);
    return;
}


// ===== sym.audio_notifier_ssr_adsp_cb @ 0x08002c20 (size 52) =====

ulong sym.audio_notifier_ssr_adsp_cb(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.audio_notifier_service_cb(arg1,0,0);
    return 1;
}


// ===== sym.audio_notifier_service_cb @ 0x08002c54 (size 428) =====

void sym.audio_notifier_service_cb(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t iVar2;
    ulong uVar3;
    int iVar4;
    int iVar5;
    int64_t iVar6;
    ulong *in_x18;
    char *pcVar7;
    ulong unaff_x30;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar4 = sym.audio_notifier_convert_opcode(arg1,&uStack_40);
    uVar3 = uStack_40;
    if (-1 < iVar4) {
        pcVar7 = "SSR_ADSP" + (arg3 & 0xffffffffU) * 0x328 + (arg2 & 0xffffffffU) * 0x650;
        uStack_48 = CONCAT44(arg3,arg2);
        _printk(0x8001864,"audio_notifier_service_cb",pcVar7,uStack_40);
        mutex_lock(obj.client_list);
        *(pcVar7 + 0x18) = uVar3;
        iVar4 = srcu_notifier_call_chain(pcVar7 + 0x38,uVar3,&uStack_48);
        if (iVar4 < 0) {
            iVar5 = ___ratelimit(obj.audio_notifier_service_cb._rs,"audio_notifier_service_cb");
            if (iVar5 != 0) {
                _printk(0x80017fd,"audio_notifier_service_cb",iVar4,pcVar7,uVar3);
            }
        }
        mutex_unlock(obj.client_list);
    }
    while( true ) {
        iVar2 = sp_el0;
        if (*(iVar2 + 0x5e0) == iStack_38) break;
        __stack_chk_fail();
        iVar2 = tpidr_el1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar2) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar2) & 0x3f) & 1) !=
            0) {
            iVar2 = sp_el0;
            piVar1 = iVar2 + 0x10;
            *(iVar2 + 0x10) = *piVar1 + 1;
            __traceiter_rproc_qcom_event(0,"audio","audio_notifier","audio_notifier_service_cb_exit");
            iVar6 = *piVar1;
            *(iVar2 + 0x10) = iVar6 + -1;
            if ((iVar6 + -1 == 0) || (*piVar1 == 0)) {
                preempt_schedule_notrace();
            }
        }
    }
    return;
}


// ===== sym.audio_notifier_convert_opcode @ 0x08002e10 (size 140) =====

ulong sym.audio_notifier_convert_opcode(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 < 0xfffffff) {
        if (arg1 == 1) {
code_r0x08002e78:
            uVar1 = 1;
            goto code_r0x08002e7c;
        }
        if (arg1 != 2) {
            return 0xffffffea;
        }
    }
    else {
        if (arg1 == 0x1fffffff) goto code_r0x08002e78;
        if (arg1 != 0xfffffff) {
            return 0xffffffea;
        }
    }
    uVar1 = 0;
code_r0x08002e7c:
    *arg2 = uVar1;
    return 0;
}


// ===== sym.audio_notifier_ssr_modem_cb @ 0x08003000 (size 52) =====

ulong sym.audio_notifier_ssr_modem_cb(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.audio_notifier_service_cb(arg1,0,1);
    return 1;
}


// ===== sym.audio_notify_probe @ 0x08003034 (size 660) =====

ulong sym.audio_notify_probe(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    int64_t *piVar5;
    ulong uVar6;
    int64_t iVar7;
    ulong *in_x18;
    code *arg1_00;
    code *pcVar8;
    ulong unaff_x30;
    uint uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iVar1 = arg1 + 0x10;
    iStack_58 = *(iVar7 + 0x5e0);
    uStack_5c = 0;
    _segment.ehdr = NULL;
    piVar5 = devm_kmalloc(iVar1,0x10,0xdc0);
    if (piVar5 == NULL) {
        uVar6 = 0xfffffff4;
    }
    else {
        uVar6 = *(arg1 + 0x300);
        *(piVar5 + 1) = 0;
        *(arg1 + 0xa8) = piVar5;
        iVar7 = of_find_property(uVar6,"qcom,rproc-handle",&uStack_5c);
        if (iVar7 == 0) {
            _dev_err(iVar1,"Missing remotproc handle\n");
            uVar6 = 0xffffffea;
        }
        else {
            uVar2 = (**(iVar7 + 0x10) & 0xff00ff00) >> 8 | (**(iVar7 + 0x10) & 0xff00ff) << 8;
            iVar7 = rproc_get_by_phandle(uVar2 >> 0x10 | uVar2 << 0x10);
            *piVar5 = iVar7;
            if (iVar7 == 0) {
                iVar3 = ___ratelimit(obj.audio_notify_probe._rs,"audio_notify_probe");
                if (iVar3 != 0) {
                    _dev_info(iVar1,"remotproc handle NULL\n");
                }
                uVar6 = 0xfffffdfb;
            }
            else {
                _segment.ehdr = arg1;
                __mutex_init(obj.client_list,"&notifier_mutex",obj.audio_notifier_deregister._rs.1);
                if (-2 < _segment.ehdr) {
                    srcu_init_notifier_head(0x8000308);
                }
                if (-2 < _segment.ehdr) {
                    srcu_init_notifier_head(0x8000630);
                }
                if (-2 < _segment.ehdr) {
                    srcu_init_notifier_head(0x8000958);
                }
                if (-2 < _segment.ehdr) {
                    srcu_init_notifier_head(0x8000c80);
                }
                if (_segment.ehdr == -1) {
                    _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
                }
                if (_segment.ehdr == -1) {
                    _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
                }
                mutex_lock(obj.client_list);
                if (((*0x8000938 == -2) && (*0x8000c60 == -2)) &&
                   (arg1_00 = _segment.ehdr, _segment.ehdr != obj.client_list)) {
                    do {
                        pcVar8 = *arg1_00;
                        iVar3 = sym.audio_notifier_reg_client(arg1_00);
                        if ((iVar3 < 0) &&
                           (iVar4 = ___ratelimit(obj.audio_notifier_reg_all_clients._rs,
                                                 "audio_notifier_reg_all_clients"), iVar4 != 0)) {
                            _printk(0x80016e8,"audio_notifier_reg_all_clients",arg1_00 + 0x18,iVar3);
                        }
                        arg1_00 = pcVar8;
                    } while (pcVar8 != obj.client_list);
                }
                mutex_unlock(obj.client_list);
                uVar6 = 0;
                *(piVar5 + 1) = 1;
            }
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_58) {
        __stack_chk_fail(uVar6);
        return 0;
    }
    return uVar6;
}


// ===== sym.audio_notify_remove @ 0x080032c8 (size 16) =====

ulong sym.audio_notify_remove(int64_t arg1)

{
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x080032d8 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800331c

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
    //switch table (4 cases) at 0x8001260
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003330);
    (*pcVar1)();
}


// ===== sym.audio_ssr_register @ 0x08003330 (size 68) =====

ulong sym.audio_ssr_register(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        _printk(0x80014d4,"audio_ssr_register");
        uVar1 = 0xffffffffffffffea;
    }
    else {
        uVar1 = qcom_register_ssr_notifier();
    }
    return uVar1;
}


// ===== sym.audio_ssr_deregister @ 0x08003374 (size 36) =====

void sym.audio_ssr_deregister(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    qcom_unregister_ssr_notifier();
    return;
}


// ===== sym.init_module @ 0x0800341c (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.audio_notify_probe.83e012e43848e12fb063c97850d862dd.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08003450 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.audio_notify_probe.83e012e43848e12fb063c97850d862dd.cfi_jt);
    return;
}

