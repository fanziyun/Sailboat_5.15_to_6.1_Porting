// decompiled from msm_ext_display by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 280) =====

//WARNING: Switch with 1 destination removed at 0x08001f18

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x7b7166cdd4a8e25) {
        if (arg1 != -0x67021a45e5819bc8) {
            if (arg1 == -0x3557318fb8d07b71) {
                pcVar2 = sym.__typeid__ZTSFiP15platform_deviceE_global_addr;
            }
            else {
                if (arg1 != -0x14315198f43f04ce) goto code_r0x08001ed8;
                pcVar2 = sym.msm_ext_disp_register_intf.cfi_jt;
            }
code_r0x080010d8:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08001ed8;
        }
        pcVar2 = sym.msm_ext_disp_select_audio_codec.cfi_jt;
    }
    else if (arg1 == -0x7b7166cdd4a8e25) {
        pcVar2 = sym.msm_ext_disp_register_audio_codec.cfi_jt;
    }
    else {
        if (arg1 != 0x2b3a43e29242445) {
            if (arg1 != 0x7fcc701b0fb71dbd) goto code_r0x08001ed8;
            pcVar2 = sym.msm_ext_disp_audio_notify.c6f9949fb9c6402b5d4f047cf322e6b1.cfi_jt;
            goto code_r0x080010d8;
        }
        pcVar2 = sym.init_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001ed8:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001f2c);
    (*pcVar1)();
}


// ===== sym.init_module.cfi_jt @ 0x08001120 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __platform_driver_register
                      (reloc.msm_ext_disp_probe.c6f9949fb9c6402b5d4f047cf322e6b1.cfi_jt,obj.__this_module);
    if (iVar1 != 0) {
        _printk(0x80001bd,"msm_ext_disp_init",iVar1);
    }
    return iVar1;
}


// ===== sym.msm_ext_disp_audio_notify.c6f9949fb9c6402b5d4f047cf322e6b1.cfi_jt @ 0x08001128 (size 8) =====

uint64_t sym.msm_ext_disp_audio_notify.c6f9949fb9c6402b5d4f047cf322e6b1.cfi_jt
                   (int64_t param_1,int *param_2,uint32_t param_3)

{
    int64_t iVar1;
    code *pcVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    uint64_t uVar5;
    ulong uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        uVar6 = 0x80001d5;
code_r0x08001a9c:
        _printk(uVar6,"msm_ext_disp_validate_and_get");
    }
    else {
        if ((((param_2 == NULL) || (*param_2 == -1)) || (param_2[1] != 0)) || (1 < param_2[2])) {
            uVar6 = 0x80003c2;
            goto code_r0x08001a9c;
        }
        if (param_3 < 2) {
            uVar5 = *(param_1 + 0xa8);
            if (uVar5 != 0) {
                if (uVar5 < 0xfffffffffffff001) {
                    iVar1 = uVar5 + 0x58;
                    mutex_lock(iVar1);
                    if (*(uVar5 + 0x28) == 0) {
                        _printk(0x8000241,"msm_ext_disp_process_audio");
                        uVar5 = 0xffffffff;
                    }
                    else {
                        if (1 < param_2[2]) {
    //WARNING: Does not return
                            pcVar2 = SoftwareBreakpoint(0x5512,0x8001b04);
                            (*pcVar2)();
                        }
                        uVar6 = *(uVar5 + param_2[2] * 8 + 0x30);
                        uVar3 = extcon_get_state(uVar6,*param_2);
                        if (uVar3 == (param_3 != 0)) {
                            uVar5 = 0xffffffef;
                        }
                        else {
                            uVar4 = extcon_set_state_sync(uVar6,*param_2,param_3 != 0);
                            uVar5 = uVar4 & 0xffffffff;
                            if (uVar4 != 0) {
                                _printk(0x8000451,"msm_ext_disp_process_audio",uVar5);
                            }
                        }
                    }
                    mutex_unlock(iVar1);
                }
                goto code_r0x08001aac;
            }
            uVar6 = 0x8000319;
            goto code_r0x08001a9c;
        }
        _printk(0x8000547,"msm_ext_disp_validate_and_get",param_3);
    }
    uVar5 = 0xffffffffffffffea;
code_r0x08001aac:
    return uVar5 & 0xffffffff;
}


// ===== sym.msm_ext_disp_audio_config.c6f9949fb9c6402b5d4f047cf322e6b1.cfi_jt @ 0x08001130 (size 8) =====

uint64_t sym.msm_ext_disp_audio_config.c6f9949fb9c6402b5d4f047cf322e6b1.cfi_jt
                   (int64_t param_1,int *param_2,uint32_t param_3)

{
    ulong uVar1;
    ulong *puVar2;
    ulong *in_x18;
    uint64_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        uVar1 = 0x80001d5;
code_r0x08001964:
        _printk(uVar1,"msm_ext_disp_validate_and_get");
    }
    else {
        if ((((param_2 == NULL) || (*param_2 == -1)) || (param_2[1] != 0)) || (1 < param_2[2])) {
            uVar1 = 0x80003c2;
            goto code_r0x08001964;
        }
        if (param_3 < 2) {
            uVar3 = *(param_1 + 0xa8);
            if (uVar3 != 0) {
                if (uVar3 < 0xfffffffffffff001) {
                    if (param_3 == 1) {
                        uVar3 = sym.msm_ext_disp_select_audio_codec(param_1,param_2);
                        uVar3 = uVar3 & 0xffffffff;
                    }
                    else {
                        mutex_lock(uVar3 + 0x58);
                        puVar2 = *(uVar3 + 0x28);
                        if (puVar2 != NULL) {
                            puVar2[5] = 0;
                            puVar2[6] = 0;
                            puVar2[3] = 0;
                            puVar2[4] = 0;
                            puVar2[1] = 0;
                            puVar2[2] = 0;
                            *puVar2 = 0;
                        }
                        *(uVar3 + 0x18) = 0xffffffff;
                        mutex_unlock(uVar3 + 0x58);
                        uVar3 = 0;
                    }
                }
                goto code_r0x08001974;
            }
            uVar1 = 0x8000319;
            goto code_r0x08001964;
        }
        _printk(0x8000547,"msm_ext_disp_validate_and_get");
    }
    uVar3 = 0xffffffffffffffea;
code_r0x08001974:
    return uVar3 & 0xffffffff;
}


// ===== sym.msm_ext_disp_register_intf.cfi_jt @ 0x08001138 (size 8) =====

uint sym.msm_ext_disp_register_intf.cfi_jt(int64_t param_1,int *param_2)

{
    char *pcVar1;
    char *pcVar2;
    int iVar3;
    ulong *puVar4;
    uint64_t uVar5;
    ulong uVar6;
    int iVar7;
    int64_t *piVar8;
    int *piVar9;
    ulong *in_x18;
    uint uVar10;
    int64_t iVar11;
    int64_t *piVar12;
    ulong *puVar13;
    int64_t iVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || (param_2 == NULL)) {
        uVar6 = 0x800064f;
code_r0x080017dc:
        _printk(uVar6,"msm_ext_disp_register_intf");
        return 0xffffffea;
    }
    iVar11 = *(param_1 + 0xa8);
    if (iVar11 == 0) {
        uVar6 = 0x80005d4;
        goto code_r0x080017dc;
    }
    mutex_lock(iVar11 + 0x58);
    if (*(param_2 + 0x18) == 0) {
        uVar6 = 0x8000587;
code_r0x080017b0:
        _printk(uVar6,"msm_ext_disp_validate_intf");
    }
    else {
        iVar3 = *param_2;
        iVar7 = param_2[1];
        if ((iVar3 != -1) && (iVar7 == 0)) {
            if (param_2[2] < 2) {
                if (((((*(param_2 + 10) != 0) && (*(param_2 + 0xc) != 0)) && (*(param_2 + 0xe) != 0)) &&
                    ((*(param_2 + 0x10) != 0 && (*(param_2 + 0x12) != 0)))) &&
                   ((*(param_2 + 0x14) != 0 && (*(param_2 + 0x16) != 0)))) {
                    piVar12 = iVar11 + 0x48;
                    for (piVar8 = *piVar12; piVar8 != piVar12; piVar8 = *piVar8) {
                        piVar9 = piVar8[-1];
                        if (((*piVar9 == iVar3) && (piVar9[2] == param_2[2])) && (piVar9[1] == 0)) {
                            if (piVar9 != NULL) {
                                pcVar1 = "EXT_DISPLAY_TYPE_DP";
                                if (iVar3 != 0x2c) {
                                    pcVar1 = 0x80004ab;
                                }
                                pcVar2 = "EXT_DISPLAY_TYPE_HDMI";
                                if (iVar3 != 0x28) {
                                    pcVar2 = pcVar1;
                                }
                                _printk(0x800020f,"msm_ext_disp_register_intf",pcVar2,0);
                                uVar10 = 0;
                                goto code_r0x08001818;
                            }
                            break;
                        }
                    }
                    iVar14 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar14 = 0x30;
                    }
                    puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar14),0xdc0,0x18);
                    if (puVar4 == NULL) {
                        uVar10 = 0xfffffff4;
                    }
                    else {
                        puVar13 = puVar4 + 1;
                        *puVar4 = param_2;
                        iVar14 = *piVar12;
                        uVar5 = __list_add_valid(puVar13,piVar12,iVar14);
                        if ((uVar5 & 1) != 0) {
                            *(iVar14 + 8) = puVar13;
                            puVar4[1] = iVar14;
                            puVar4[2] = piVar12;
                            *piVar12 = puVar13;
                        }
                        uVar10 = 0;
                        *(param_2 + 4) = sym.msm_ext_disp_audio_config.c6f9949fb9c6402b5d4f047cf322e6b1.cfi_jt;
                        *(param_2 + 6) = sym.msm_ext_disp_audio_notify.c6f9949fb9c6402b5d4f047cf322e6b1.cfi_jt;
                    }
                    goto code_r0x08001818;
                }
                uVar6 = 0x8000195;
                goto code_r0x080017b0;
            }
            iVar7 = 0;
        }
        _printk(0x800038a,"msm_ext_disp_validate_intf",iVar3,iVar7);
    }
    uVar10 = 0xffffffea;
code_r0x08001818:
    mutex_unlock(iVar11 + 0x58);
    return uVar10;
}


// ===== sym.msm_ext_disp_deregister_intf.cfi_jt @ 0x08001140 (size 8) =====

ulong sym.msm_ext_disp_deregister_intf.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    int64_t iVar5;
    int64_t *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || (param_2 == 0)) {
        uVar4 = 0x800064f;
    }
    else {
        iVar5 = *(param_1 + 0xa8);
        if (iVar5 != 0) {
            mutex_lock(iVar5 + 0x58);
            piVar6 = iVar5 + 0x48;
            do {
                piVar6 = *piVar6;
                if (piVar6 == iVar5 + 0x48) goto code_r0x08001b94;
            } while (piVar6[-1] != param_2);
            uVar3 = __list_del_entry_valid(piVar6);
            if ((uVar3 & 1) != 0) {
                iVar1 = *piVar6;
                piVar2 = piVar6[1];
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar1;
            }
            *piVar6 = -0x2152ffffffffff00;
            piVar6[1] = -0x2152fffffffffede;
            kfree(piVar6 + -1);
code_r0x08001b94:
            *(param_2 + 0x10) = 0;
            *(param_2 + 0x18) = 0;
            mutex_unlock(iVar5 + 0x58);
            return 0;
        }
        uVar4 = 0x80005d4;
    }
    _printk(uVar4,"msm_ext_disp_deregister_intf");
    return 0xffffffea;
}


// ===== sym.__typeid__ZTSFiP15platform_deviceE_global_addr @ 0x08001148 (size 8) =====

uint64_t sym.__typeid__ZTSFiP15platform_deviceE_global_addr(int64_t param_1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        uVar5 = 0x80002c9;
    }
    else {
        iVar6 = *(param_1 + 0x300);
        if (iVar6 != 0) {
            iVar1 = param_1 + 0x10;
            iVar2 = devm_kmalloc(iVar1,0x90,0xdc0);
            if (iVar2 == 0) {
                uVar3 = 0xfffffff4;
                goto code_r0x08001d64;
            }
            *(param_1 + 0xa8) = iVar2;
            *(iVar2 + 0x10) = param_1;
            uVar3 = devm_extcon_dev_allocate(iVar1,obj.msm_ext_disp_supported_cable);
            *(iVar2 + 0x30) = uVar3;
            if (uVar3 < 0xfffffffffffff001) {
                uVar3 = devm_extcon_dev_register(*(iVar2 + 0x10) + 0x10,uVar3);
                if (uVar3 == 0) goto code_r0x08001c74;
code_r0x08001d80:
                uVar3 = uVar3 & 0xffffffff;
                _printk(0x800062e,"msm_ext_disp_extcon_register");
            }
            else if (uVar3 == 0) {
code_r0x08001c74:
                if (*(iVar2 + 0x10) == 0) {
                    _printk(0x8000303,"msm_ext_disp_extcon_register");
                    uVar3 = 0xffffffea;
                }
                else {
                    uVar4 = devm_extcon_dev_allocate(*(iVar2 + 0x10) + 0x10,obj.msm_ext_disp_supported_cable);
                    *(iVar2 + 0x38) = uVar4;
                    if (uVar4 < 0xfffffffffffff001) {
                        uVar3 = devm_extcon_dev_register(*(iVar2 + 0x10) + 0x10);
                        if (uVar3 != 0) goto code_r0x08001d80;
                    }
                    else {
                        uVar3 = uVar4 & 0xffffffff;
                        if (uVar4 != 0) goto code_r0x08001ca4;
                    }
                    uVar4 = of_platform_populate(iVar6,0,0,iVar1);
                    uVar3 = uVar4 & 0xffffffff;
                    if (uVar4 == 0) {
                        __mutex_init(iVar2 + 0x58,"&ext_disp->lock",
                                     reloc.msm_ext_disp_probe.c6f9949fb9c6402b5d4f047cf322e6b1.cfi_jt);
                        *(iVar2 + 0x48) = iVar2 + 0x48;
                        *(iVar2 + 0x50) = iVar2 + 0x48;
                        *(iVar2 + 0x18) = 0xffffffff;
                        *(iVar2 + 0x88) = 0;
                        goto code_r0x08001d64;
                    }
                    _printk(0x80005ff,"msm_ext_disp_probe",uVar3);
                }
            }
code_r0x08001ca4:
            if (*(iVar2 + 0x10) == 0) {
                _printk(0x800064f,"msm_ext_disp_extcon_unregister");
                iVar6 = *(iVar2 + 0x10);
                if (iVar6 != 0) goto code_r0x08001cc0;
code_r0x08001dd4:
                _printk(0x800064f,"msm_ext_disp_extcon_unregister");
            }
            else {
                devm_extcon_dev_unregister(*(iVar2 + 0x10) + 0x10,*(iVar2 + 0x30));
                iVar6 = *(iVar2 + 0x10);
                if (iVar6 == 0) goto code_r0x08001dd4;
code_r0x08001cc0:
                devm_extcon_dev_unregister(iVar6 + 0x10,*(iVar2 + 0x38));
            }
            devm_kfree(*(iVar2 + 0x10) + 0x10,iVar2);
            goto code_r0x08001d64;
        }
        uVar5 = 0x80002ad;
    }
    _printk(uVar5,"msm_ext_disp_probe");
    uVar3 = 0xffffffed;
code_r0x08001d64:
    return uVar3 & 0xffffffff;
}


// ===== sym.msm_ext_disp_remove.c6f9949fb9c6402b5d4f047cf322e6b1.cfi_jt @ 0x08001150 (size 8) =====

ulong sym.msm_ext_disp_remove.c6f9949fb9c6402b5d4f047cf322e6b1.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        uVar1 = 0x80002e9;
    }
    else {
        iVar3 = *(param_1 + 0xa8);
        if (iVar3 != 0) {
            if (*(iVar3 + 0x10) == 0) {
                _printk(0x800064f,"msm_ext_disp_extcon_unregister");
                iVar2 = *(iVar3 + 0x10);
            }
            else {
                devm_extcon_dev_unregister(*(iVar3 + 0x10) + 0x10,*(iVar3 + 0x30));
                iVar2 = *(iVar3 + 0x10);
            }
            if (iVar2 == 0) {
                _printk(0x800064f,"msm_ext_disp_extcon_unregister");
            }
            else {
                devm_extcon_dev_unregister(iVar2 + 0x10,*(iVar3 + 0x38));
            }
            devm_kfree(*(iVar3 + 0x10) + 0x10,iVar3);
            return 0;
        }
        uVar1 = 0x80005bc;
    }
    _printk(uVar1,"msm_ext_disp_remove");
    return 0xffffffed;
}


// ===== sym.msm_ext_disp_register_audio_codec.cfi_jt @ 0x08001158 (size 8) =====

uint sym.msm_ext_disp_register_audio_codec.cfi_jt(int64_t param_1,ulong *param_2)

{
    char *pcVar1;
    char *pcVar2;
    ulong uVar3;
    int iVar4;
    int *piVar5;
    int64_t iVar6;
    int *piVar7;
    ulong *puVar8;
    ulong uVar9;
    ulong *puVar10;
    ulong *in_x18;
    code *pcVar11;
    uint uVar12;
    ulong uVar13;
    ulong *puVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || (param_2 == NULL)) {
        uVar13 = 0x800064f;
    }
    else {
        puVar14 = *(param_1 + 0xa8);
        if (puVar14 != NULL) {
            mutex_lock(puVar14 + 0xb);
            if (puVar14[5] == 0) {
                puVar14[5] = param_2;
                if (*(puVar14 + 0x11) != '\0') {
                    piVar7 = puVar14 + 3;
                    *(puVar14 + 0x11) = 0;
                    if (piVar7 == NULL) {
                        _printk(0x800064f,"msm_ext_disp_get_intf_data");
                    }
                    else {
                        puVar10 = puVar14 + 9;
                        puVar8 = *puVar10;
                        if (puVar8 != puVar10) {
                            do {
                                piVar5 = puVar8[-1];
                                if (((*piVar5 == *piVar7) && (piVar5[2] == *(puVar14 + 4))) &&
                                   (piVar5[1] == *(puVar14 + 0x1c))) {
                                    if (piVar5 != NULL) {
                                        uVar13 = *(piVar5 + 0xe);
                                        uVar9 = *(piVar5 + 10);
                                        param_2[1] = *(piVar5 + 0xc);
                                        param_2[2] = uVar13;
                                        *param_2 = uVar9;
                                        uVar9 = *(piVar5 + 0x16);
                                        uVar13 = *(piVar5 + 0x10);
                                        uVar3 = *(piVar5 + 0x12);
                                        param_2[5] = *(piVar5 + 0x14);
                                        param_2[6] = uVar9;
                                        param_2[3] = uVar13;
                                        param_2[4] = uVar3;
                                        *puVar14 = *(piVar5 + 0x18);
                                        puVar14[1] = *(piVar5 + 0x1a);
                                        iVar6 = puVar14[5];
                                        goto joined_r0x08001458;
                                    }
                                    break;
                                }
                                puVar8 = *puVar8;
                            } while (puVar8 != puVar10);
                        }
                    }
                    pcVar1 = "EXT_DISPLAY_TYPE_DP";
                    if (*(puVar14 + 3) != 0x2c) {
                        pcVar1 = 0x80004ab;
                    }
                    pcVar2 = "EXT_DISPLAY_TYPE_HDMI";
                    if (*(puVar14 + 3) != 0x28) {
                        pcVar2 = pcVar1;
                    }
                    _printk(0x8000402,"msm_ext_disp_update_audio_ops",pcVar2,*(puVar14 + 0x1c),*(puVar14 + 4));
                    iVar6 = puVar14[5];
joined_r0x08001458:
                    if (iVar6 == 0) {
                        _printk(0x8000241,"msm_ext_disp_process_audio");
                    }
                    else {
                        if (1 < *(puVar14 + 4)) {
    //WARNING: Does not return
                            pcVar11 = SoftwareBreakpoint(0x5512,0x8001494);
                            (*pcVar11)();
                        }
                        uVar13 = puVar14[*(puVar14 + 4) + 6];
                        iVar4 = extcon_get_state(uVar13,*(puVar14 + 3));
                        if ((iVar4 != 1) && (iVar4 = extcon_set_state_sync(uVar13,*piVar7,1), iVar4 != 0)) {
                            _printk(0x8000451,"msm_ext_disp_process_audio",iVar4);
                        }
                    }
                }
                uVar12 = 0;
            }
            else {
                _printk(0x800034f,"msm_ext_disp_register_audio_codec");
                uVar12 = 0xffffffea;
            }
            mutex_unlock(puVar14 + 0xb);
            iVar4 = *(puVar14 + 3);
            if (iVar4 == -1) {
                return uVar12;
            }
            puVar10 = puVar14[9];
            do {
                if (puVar10 == puVar14 + 9) {
code_r0x08001360:
                    pcVar1 = "EXT_DISPLAY_TYPE_DP";
                    if (iVar4 != 0x2c) {
                        pcVar1 = 0x80004ab;
                    }
                    pcVar2 = "EXT_DISPLAY_TYPE_HDMI";
                    if (iVar4 != 0x28) {
                        pcVar2 = pcVar1;
                    }
                    _printk(0x80005eb,"msm_ext_disp_ready_for_display",pcVar2);
                    return uVar12;
                }
                piVar7 = puVar10[-1];
                if (((*piVar7 == iVar4) && (piVar7[2] == *(puVar14 + 4))) && (piVar7[1] == *(puVar14 + 0x1c))) {
                    if (piVar7 != NULL) {
                        uVar13 = *(piVar7 + 0xe);
                        puVar10 = puVar14[5];
                        uVar9 = *(piVar7 + 10);
                        puVar10[1] = *(piVar7 + 0xc);
                        puVar10[2] = uVar13;
                        *puVar10 = uVar9;
                        uVar9 = *(piVar7 + 0x16);
                        uVar13 = *(piVar7 + 0x10);
                        uVar3 = *(piVar7 + 0x12);
                        puVar10[5] = *(piVar7 + 0x14);
                        puVar10[6] = uVar9;
                        puVar10[3] = uVar13;
                        puVar10[4] = uVar3;
                        pcVar11 = *(piVar7 + 0x16);
                        if (1 < (pcVar11 + -0x8001148 >> 3 | pcVar11 << 0x3d)) {
                            __cfi_slowpath_diag(0xcaa8ce70472f848f,pcVar11,0x8000170);
                        }
                        (*pcVar11)(puVar14[2]);
                        return uVar12;
                    }
                    goto code_r0x08001360;
                }
                puVar10 = *puVar10;
            } while( true );
        }
        uVar13 = 0x80005d4;
    }
    _printk(uVar13,"msm_ext_disp_register_audio_codec");
    return 0xffffffea;
}


// ===== sym.msm_ext_disp_select_audio_codec.cfi_jt @ 0x08001160 (size 8) =====

uint sym.msm_ext_disp_select_audio_codec.cfi_jt(int64_t param_1,int *param_2)

{
    char *pcVar1;
    char *pcVar2;
    ulong uVar3;
    int iVar4;
    ulong *puVar5;
    ulong uVar6;
    int *piVar7;
    ulong *puVar8;
    ulong uVar9;
    ulong *in_x18;
    uint uVar10;
    ulong *puVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || (param_2 == NULL)) {
        uVar6 = 0x800064f;
    }
    else {
        puVar11 = *(param_1 + 0xa8);
        if (puVar11 != NULL) {
            mutex_lock(puVar11 + 0xb);
            puVar5 = puVar11[5];
            if (puVar5 == NULL) {
                _printk(0x8000270,"msm_ext_disp_select_audio_codec");
                *(puVar11 + 0x11) = 1;
                iVar4 = param_2[2];
                uVar10 = 0xffffffea;
                puVar11[3] = *param_2;
                *(puVar11 + 4) = iVar4;
            }
            else {
                iVar4 = *param_2;
                for (puVar8 = puVar11[9]; puVar8 != puVar11 + 9; puVar8 = *puVar8) {
                    piVar7 = puVar8[-1];
                    if (((*piVar7 == iVar4) && (piVar7[2] == param_2[2])) && (piVar7[1] == param_2[1])) {
                        if (piVar7 != NULL) {
                            uVar6 = *(piVar7 + 0xe);
                            uVar9 = *(piVar7 + 10);
                            puVar5[1] = *(piVar7 + 0xc);
                            puVar5[2] = uVar6;
                            *puVar5 = uVar9;
                            uVar9 = *(piVar7 + 0x16);
                            uVar6 = *(piVar7 + 0x10);
                            uVar3 = *(piVar7 + 0x12);
                            puVar5[5] = *(piVar7 + 0x14);
                            puVar5[6] = uVar9;
                            puVar5[3] = uVar6;
                            puVar5[4] = uVar3;
                            uVar6 = *param_2;
                            uVar10 = 0;
                            *(puVar11 + 4) = param_2[2];
                            puVar11[3] = uVar6;
                            *puVar11 = *(piVar7 + 0x18);
                            puVar11[1] = *(piVar7 + 0x1a);
                            goto code_r0x080015d4;
                        }
                        break;
                    }
                }
                pcVar1 = "EXT_DISPLAY_TYPE_DP";
                if (iVar4 != 0x2c) {
                    pcVar1 = 0x80004ab;
                }
                pcVar2 = "EXT_DISPLAY_TYPE_HDMI";
                if (iVar4 != 0x28) {
                    pcVar2 = pcVar1;
                }
                _printk(0x8000402,"msm_ext_disp_update_audio_ops",pcVar2,param_2[1],param_2[2]);
                uVar10 = 0xffffffed;
            }
code_r0x080015d4:
            mutex_unlock(puVar11 + 0xb);
            return uVar10;
        }
        uVar6 = 0x80005d4;
    }
    _printk(uVar6,"msm_ext_disp_select_audio_codec");
    return 0xffffffea;
}


// ===== sym.msm_hdmi_register_audio_codec @ 0x08001168 (size 36) =====

void sym.msm_hdmi_register_audio_codec(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.msm_ext_disp_register_audio_codec(arg1,arg2);
    return;
}


// ===== sym.msm_ext_disp_register_audio_codec @ 0x0800118c (size 812) =====

uint sym.msm_ext_disp_register_audio_codec(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    char *pcVar2;
    ulong uVar3;
    int iVar4;
    int *piVar5;
    int64_t iVar6;
    int *piVar7;
    ulong *puVar8;
    ulong uVar9;
    ulong *puVar10;
    ulong *in_x18;
    code *pcVar11;
    uint uVar12;
    ulong uVar13;
    ulong *puVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (arg2 == 0)) {
        uVar13 = 0x800064f;
    }
    else {
        puVar14 = *(arg1 + 0xa8);
        if (puVar14 != NULL) {
            mutex_lock(puVar14 + 0xb);
            if (puVar14[5] == 0) {
                puVar14[5] = arg2;
                if (*(puVar14 + 0x11) != '\0') {
                    piVar7 = puVar14 + 3;
                    *(puVar14 + 0x11) = 0;
                    if (piVar7 == NULL) {
                        _printk(0x800064f,"msm_ext_disp_get_intf_data");
                    }
                    else {
                        puVar10 = puVar14 + 9;
                        puVar8 = *puVar10;
                        if (puVar8 != puVar10) {
                            do {
                                piVar5 = puVar8[-1];
                                if (((*piVar5 == *piVar7) && (piVar5[2] == *(puVar14 + 4))) &&
                                   (piVar5[1] == *(puVar14 + 0x1c))) {
                                    if (piVar5 != NULL) {
                                        uVar13 = *(piVar5 + 0xe);
                                        uVar9 = *(piVar5 + 10);
                                        *(arg2 + 8) = *(piVar5 + 0xc);
                                        *(arg2 + 0x10) = uVar13;
                                        *arg2 = uVar9;
                                        uVar9 = *(piVar5 + 0x16);
                                        uVar13 = *(piVar5 + 0x10);
                                        uVar3 = *(piVar5 + 0x12);
                                        *(arg2 + 0x28) = *(piVar5 + 0x14);
                                        *(arg2 + 0x30) = uVar9;
                                        *(arg2 + 0x18) = uVar13;
                                        *(arg2 + 0x20) = uVar3;
                                        *puVar14 = *(piVar5 + 0x18);
                                        puVar14[1] = *(piVar5 + 0x1a);
                                        iVar6 = puVar14[5];
                                        goto joined_r0x08001458;
                                    }
                                    break;
                                }
                                puVar8 = *puVar8;
                            } while (puVar8 != puVar10);
                        }
                    }
                    pcVar1 = "EXT_DISPLAY_TYPE_DP";
                    if (*(puVar14 + 3) != 0x2c) {
                        pcVar1 = 0x80004ab;
                    }
                    pcVar2 = "EXT_DISPLAY_TYPE_HDMI";
                    if (*(puVar14 + 3) != 0x28) {
                        pcVar2 = pcVar1;
                    }
                    _printk(0x8000402,"msm_ext_disp_update_audio_ops",pcVar2,*(puVar14 + 0x1c),*(puVar14 + 4));
                    iVar6 = puVar14[5];
joined_r0x08001458:
                    if (iVar6 == 0) {
                        _printk(0x8000241,"msm_ext_disp_process_audio");
                    }
                    else {
                        if (1 < *(puVar14 + 4)) {
    //WARNING: Does not return
                            pcVar11 = SoftwareBreakpoint(0x5512,0x8001494);
                            (*pcVar11)();
                        }
                        uVar13 = puVar14[*(puVar14 + 4) + 6];
                        iVar4 = extcon_get_state(uVar13,*(puVar14 + 3));
                        if ((iVar4 != 1) && (iVar4 = extcon_set_state_sync(uVar13,*piVar7,1), iVar4 != 0)) {
                            _printk(0x8000451,"msm_ext_disp_process_audio",iVar4);
                        }
                    }
                }
                uVar12 = 0;
            }
            else {
                _printk(0x800034f,"msm_ext_disp_register_audio_codec");
                uVar12 = 0xffffffea;
            }
            mutex_unlock(puVar14 + 0xb);
            iVar4 = *(puVar14 + 3);
            if (iVar4 == -1) {
                return uVar12;
            }
            puVar10 = puVar14[9];
            do {
                if (puVar10 == puVar14 + 9) {
code_r0x08001360:
                    pcVar1 = "EXT_DISPLAY_TYPE_DP";
                    if (iVar4 != 0x2c) {
                        pcVar1 = 0x80004ab;
                    }
                    pcVar2 = "EXT_DISPLAY_TYPE_HDMI";
                    if (iVar4 != 0x28) {
                        pcVar2 = pcVar1;
                    }
                    _printk(0x80005eb,"msm_ext_disp_ready_for_display",pcVar2);
                    return uVar12;
                }
                piVar7 = puVar10[-1];
                if (((*piVar7 == iVar4) && (piVar7[2] == *(puVar14 + 4))) && (piVar7[1] == *(puVar14 + 0x1c))) {
                    if (piVar7 != NULL) {
                        uVar13 = *(piVar7 + 0xe);
                        puVar10 = puVar14[5];
                        uVar9 = *(piVar7 + 10);
                        puVar10[1] = *(piVar7 + 0xc);
                        puVar10[2] = uVar13;
                        *puVar10 = uVar9;
                        uVar9 = *(piVar7 + 0x16);
                        uVar13 = *(piVar7 + 0x10);
                        uVar3 = *(piVar7 + 0x12);
                        puVar10[5] = *(piVar7 + 0x14);
                        puVar10[6] = uVar9;
                        puVar10[3] = uVar13;
                        puVar10[4] = uVar3;
                        pcVar11 = *(piVar7 + 0x16);
                        if (1 < (pcVar11 + -0x8001148 >> 3 | pcVar11 << 0x3d)) {
                            __cfi_slowpath_diag(0xcaa8ce70472f848f,pcVar11,0x8000170);
                        }
                        (*pcVar11)(puVar14[2]);
                        return uVar12;
                    }
                    goto code_r0x08001360;
                }
                puVar10 = *puVar10;
            } while( true );
        }
        uVar13 = 0x80005d4;
    }
    _printk(uVar13,"msm_ext_disp_register_audio_codec");
    return 0xffffffea;
}


// ===== sym.msm_ext_disp_select_audio_codec @ 0x080014b8 (size 412) =====

uint sym.msm_ext_disp_select_audio_codec(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    char *pcVar2;
    ulong uVar3;
    int iVar4;
    uint uVar5;
    ulong *puVar6;
    ulong uVar7;
    int *piVar8;
    ulong *puVar9;
    ulong uVar10;
    ulong *in_x18;
    uint uVar11;
    ulong *puVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (arg2 == 0)) {
        uVar7 = 0x800064f;
    }
    else {
        puVar12 = *(arg1 + 0xa8);
        if (puVar12 != NULL) {
            mutex_lock(puVar12 + 0xb);
            puVar6 = puVar12[5];
            if (puVar6 == NULL) {
                _printk(0x8000270,"msm_ext_disp_select_audio_codec");
                *(puVar12 + 0x11) = 1;
                uVar5 = *(arg2 + 8);
                uVar11 = 0xffffffea;
                puVar12[3] = *arg2;
                *(puVar12 + 4) = uVar5;
            }
            else {
                iVar4 = *arg2;
                for (puVar9 = puVar12[9]; puVar9 != puVar12 + 9; puVar9 = *puVar9) {
                    piVar8 = puVar9[-1];
                    if (((*piVar8 == iVar4) && (piVar8[2] == *(arg2 + 8))) && (piVar8[1] == *(arg2 + 4))) {
                        if (piVar8 != NULL) {
                            uVar7 = *(piVar8 + 0xe);
                            uVar10 = *(piVar8 + 10);
                            puVar6[1] = *(piVar8 + 0xc);
                            puVar6[2] = uVar7;
                            *puVar6 = uVar10;
                            uVar10 = *(piVar8 + 0x16);
                            uVar7 = *(piVar8 + 0x10);
                            uVar3 = *(piVar8 + 0x12);
                            puVar6[5] = *(piVar8 + 0x14);
                            puVar6[6] = uVar10;
                            puVar6[3] = uVar7;
                            puVar6[4] = uVar3;
                            uVar7 = *arg2;
                            uVar11 = 0;
                            *(puVar12 + 4) = *(arg2 + 8);
                            puVar12[3] = uVar7;
                            *puVar12 = *(piVar8 + 0x18);
                            puVar12[1] = *(piVar8 + 0x1a);
                            goto code_r0x080015d4;
                        }
                        break;
                    }
                }
                pcVar1 = "EXT_DISPLAY_TYPE_DP";
                if (iVar4 != 0x2c) {
                    pcVar1 = 0x80004ab;
                }
                pcVar2 = "EXT_DISPLAY_TYPE_HDMI";
                if (iVar4 != 0x28) {
                    pcVar2 = pcVar1;
                }
                _printk(0x8000402,"msm_ext_disp_update_audio_ops",pcVar2,*(arg2 + 4),*(arg2 + 8));
                uVar11 = 0xffffffed;
            }
code_r0x080015d4:
            mutex_unlock(puVar12 + 0xb);
            return uVar11;
        }
        uVar7 = 0x80005d4;
    }
    _printk(uVar7,"msm_ext_disp_select_audio_codec");
    return 0xffffffea;
}


// ===== sym.msm_ext_disp_register_intf @ 0x08001654 (size 564) =====

uint sym.msm_ext_disp_register_intf(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    char *pcVar2;
    int iVar3;
    uint64_t uVar4;
    ulong uVar5;
    int iVar6;
    int64_t *piVar7;
    int *piVar8;
    ulong *in_x18;
    uint uVar9;
    int64_t iVar10;
    int64_t *piVar11;
    int64_t *piVar12;
    int64_t iVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (arg2 == 0)) {
        uVar5 = 0x800064f;
code_r0x080017dc:
        _printk(uVar5,"msm_ext_disp_register_intf");
        return 0xffffffea;
    }
    iVar10 = *(arg1 + 0xa8);
    if (iVar10 == 0) {
        uVar5 = 0x80005d4;
        goto code_r0x080017dc;
    }
    mutex_lock(iVar10 + 0x58);
    if (*(arg2 + 0x60) == 0) {
        uVar5 = 0x8000587;
code_r0x080017b0:
        _printk(uVar5,"msm_ext_disp_validate_intf");
    }
    else {
        iVar3 = *arg2;
        iVar6 = *(arg2 + 4);
        if ((iVar3 != -1) && (iVar6 == 0)) {
            if (*(arg2 + 8) < 2) {
                if (((((*(arg2 + 0x28) != 0) && (*(arg2 + 0x30) != 0)) && (*(arg2 + 0x38) != 0)) &&
                    ((*(arg2 + 0x40) != 0 && (*(arg2 + 0x48) != 0)))) &&
                   ((*(arg2 + 0x50) != 0 && (*(arg2 + 0x58) != 0)))) {
                    piVar11 = iVar10 + 0x48;
                    for (piVar7 = *piVar11; piVar7 != piVar11; piVar7 = *piVar7) {
                        piVar8 = piVar7[-1];
                        if (((*piVar8 == iVar3) && (piVar8[2] == *(arg2 + 8))) && (piVar8[1] == 0)) {
                            if (piVar8 != NULL) {
                                pcVar1 = "EXT_DISPLAY_TYPE_DP";
                                if (iVar3 != 0x2c) {
                                    pcVar1 = 0x80004ab;
                                }
                                pcVar2 = "EXT_DISPLAY_TYPE_HDMI";
                                if (iVar3 != 0x28) {
                                    pcVar2 = pcVar1;
                                }
                                _printk(0x800020f,"msm_ext_disp_register_intf",pcVar2,0);
                                uVar9 = 0;
                                goto code_r0x08001818;
                            }
                            break;
                        }
                    }
                    iVar13 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar13 = 0x30;
                    }
                    piVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar13),0xdc0,0x18);
                    if (piVar7 == NULL) {
                        uVar9 = 0xfffffff4;
                    }
                    else {
                        piVar12 = piVar7 + 1;
                        *piVar7 = arg2;
                        iVar13 = *piVar11;
                        uVar4 = __list_add_valid(piVar12,piVar11,iVar13);
                        if ((uVar4 & 1) != 0) {
                            *(iVar13 + 8) = piVar12;
                            piVar7[1] = iVar13;
                            piVar7[2] = piVar11;
                            *piVar11 = piVar12;
                        }
                        uVar9 = 0;
                        *(arg2 + 0x10) = sym.msm_ext_disp_audio_config.c6f9949fb9c6402b5d4f047cf322e6b1.cfi_jt;
                        *(arg2 + 0x18) = sym.msm_ext_disp_audio_notify.c6f9949fb9c6402b5d4f047cf322e6b1.cfi_jt;
                    }
                    goto code_r0x08001818;
                }
                uVar5 = 0x8000195;
                goto code_r0x080017b0;
            }
            iVar6 = 0;
        }
        _printk(0x800038a,"msm_ext_disp_validate_intf",iVar3,iVar6);
    }
    uVar9 = 0xffffffea;
code_r0x08001818:
    mutex_unlock(iVar10 + 0x58);
    return uVar9;
}


// ===== sym.msm_ext_disp_audio_config @ 0x08001888 (size 260) =====

uint64_t sym.msm_ext_disp_audio_config(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    ulong uVar1;
    ulong *puVar2;
    ulong *in_x18;
    uint64_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        uVar1 = 0x80001d5;
code_r0x08001964:
        _printk(uVar1,"msm_ext_disp_validate_and_get");
    }
    else {
        if ((((arg2 == 0) || (*arg2 == -1)) || (*(arg2 + 4) != 0)) || (1 < *(arg2 + 8))) {
            uVar1 = 0x80003c2;
            goto code_r0x08001964;
        }
        if (arg3 < 2) {
            uVar3 = *(arg1 + 0xa8);
            if (uVar3 != 0) {
                if (uVar3 < 0xfffffffffffff001) {
                    if (arg3 == 1) {
                        uVar3 = sym.msm_ext_disp_select_audio_codec(arg1,arg2);
                        uVar3 = uVar3 & 0xffffffff;
                    }
                    else {
                        mutex_lock(uVar3 + 0x58);
                        puVar2 = *(uVar3 + 0x28);
                        if (puVar2 != NULL) {
                            puVar2[5] = 0;
                            puVar2[6] = 0;
                            puVar2[3] = 0;
                            puVar2[4] = 0;
                            puVar2[1] = 0;
                            puVar2[2] = 0;
                            *puVar2 = 0;
                        }
                        *(uVar3 + 0x18) = 0xffffffff;
                        mutex_unlock(uVar3 + 0x58);
                        uVar3 = 0;
                    }
                }
                goto code_r0x08001974;
            }
            uVar1 = 0x8000319;
            goto code_r0x08001964;
        }
        _printk(0x8000547,"msm_ext_disp_validate_and_get");
    }
    uVar3 = 0xffffffffffffffea;
code_r0x08001974:
    return uVar3 & 0xffffffff;
}


// ===== sym.msm_ext_disp_audio_notify @ 0x0800198c (size 376) =====

uint64_t sym.msm_ext_disp_audio_notify(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t iVar1;
    code *pcVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    uint64_t uVar5;
    ulong uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        uVar6 = 0x80001d5;
code_r0x08001a9c:
        _printk(uVar6,"msm_ext_disp_validate_and_get");
    }
    else {
        if ((((arg2 == 0) || (*arg2 == -1)) || (*(arg2 + 4) != 0)) || (1 < *(arg2 + 8))) {
            uVar6 = 0x80003c2;
            goto code_r0x08001a9c;
        }
        if (arg3 < 2) {
            uVar5 = *(arg1 + 0xa8);
            if (uVar5 != 0) {
                if (uVar5 < 0xfffffffffffff001) {
                    iVar1 = uVar5 + 0x58;
                    mutex_lock(iVar1);
                    if (*(uVar5 + 0x28) == 0) {
                        _printk(0x8000241,"msm_ext_disp_process_audio");
                        uVar5 = 0xffffffff;
                    }
                    else {
                        if (1 < *(arg2 + 8)) {
    //WARNING: Does not return
                            pcVar2 = SoftwareBreakpoint(0x5512,0x8001b04);
                            (*pcVar2)();
                        }
                        uVar6 = *(uVar5 + *(arg2 + 8) * 8 + 0x30);
                        uVar3 = extcon_get_state(uVar6,*arg2);
                        if (uVar3 == (arg3 != 0)) {
                            uVar5 = 0xffffffef;
                        }
                        else {
                            uVar4 = extcon_set_state_sync(uVar6,*arg2,arg3 != 0);
                            uVar5 = uVar4 & 0xffffffff;
                            if (uVar4 != 0) {
                                _printk(0x8000451,"msm_ext_disp_process_audio",uVar5);
                            }
                        }
                    }
                    mutex_unlock(iVar1);
                }
                goto code_r0x08001aac;
            }
            uVar6 = 0x8000319;
            goto code_r0x08001a9c;
        }
        _printk(0x8000547,"msm_ext_disp_validate_and_get",arg3);
    }
    uVar5 = 0xffffffffffffffea;
code_r0x08001aac:
    return uVar5 & 0xffffffff;
}


// ===== sym.msm_ext_disp_deregister_intf @ 0x08001b04 (size 224) =====

ulong sym.msm_ext_disp_deregister_intf(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    int64_t iVar5;
    int64_t *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (arg2 == 0)) {
        uVar4 = 0x800064f;
    }
    else {
        iVar5 = *(arg1 + 0xa8);
        if (iVar5 != 0) {
            mutex_lock(iVar5 + 0x58);
            piVar6 = iVar5 + 0x48;
            do {
                piVar6 = *piVar6;
                if (piVar6 == iVar5 + 0x48) goto code_r0x08001b94;
            } while (piVar6[-1] != arg2);
            uVar3 = __list_del_entry_valid(piVar6);
            if ((uVar3 & 1) != 0) {
                iVar1 = *piVar6;
                piVar2 = piVar6[1];
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar1;
            }
            *piVar6 = -0x2152ffffffffff00;
            piVar6[1] = -0x2152fffffffffede;
            kfree(piVar6 + -1);
code_r0x08001b94:
            *(arg2 + 0x10) = 0;
            *(arg2 + 0x18) = 0;
            mutex_unlock(iVar5 + 0x58);
            return 0;
        }
        uVar4 = 0x80005d4;
    }
    _printk(uVar4,"msm_ext_disp_deregister_intf");
    return 0xffffffea;
}


// ===== sym.msm_ext_disp_probe @ 0x08001be4 (size 548) =====

uint64_t sym.msm_ext_disp_probe(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        uVar5 = 0x80002c9;
    }
    else {
        iVar6 = *(arg1 + 0x300);
        if (iVar6 != 0) {
            iVar1 = arg1 + 0x10;
            iVar2 = devm_kmalloc(iVar1,0x90,0xdc0);
            if (iVar2 == 0) {
                uVar3 = 0xfffffff4;
                goto code_r0x08001d64;
            }
            *(arg1 + 0xa8) = iVar2;
            *(iVar2 + 0x10) = arg1;
            uVar3 = devm_extcon_dev_allocate(iVar1,obj.msm_ext_disp_supported_cable);
            *(iVar2 + 0x30) = uVar3;
            if (uVar3 < 0xfffffffffffff001) {
                uVar3 = devm_extcon_dev_register(*(iVar2 + 0x10) + 0x10,uVar3);
                if (uVar3 == 0) goto code_r0x08001c74;
code_r0x08001d80:
                uVar3 = uVar3 & 0xffffffff;
                _printk(0x800062e,"msm_ext_disp_extcon_register");
            }
            else if (uVar3 == 0) {
code_r0x08001c74:
                if (*(iVar2 + 0x10) == 0) {
                    _printk(0x8000303,"msm_ext_disp_extcon_register");
                    uVar3 = 0xffffffea;
                }
                else {
                    uVar4 = devm_extcon_dev_allocate(*(iVar2 + 0x10) + 0x10,obj.msm_ext_disp_supported_cable);
                    *(iVar2 + 0x38) = uVar4;
                    if (uVar4 < 0xfffffffffffff001) {
                        uVar3 = devm_extcon_dev_register(*(iVar2 + 0x10) + 0x10);
                        if (uVar3 != 0) goto code_r0x08001d80;
                    }
                    else {
                        uVar3 = uVar4 & 0xffffffff;
                        if (uVar4 != 0) goto code_r0x08001ca4;
                    }
                    uVar4 = of_platform_populate(iVar6,0,0,iVar1);
                    uVar3 = uVar4 & 0xffffffff;
                    if (uVar4 == 0) {
                        __mutex_init(iVar2 + 0x58,"&ext_disp->lock",
                                     reloc.msm_ext_disp_probe.c6f9949fb9c6402b5d4f047cf322e6b1.cfi_jt);
                        *(iVar2 + 0x48) = iVar2 + 0x48;
                        *(iVar2 + 0x50) = iVar2 + 0x48;
                        *(iVar2 + 0x18) = 0xffffffff;
                        *(iVar2 + 0x88) = 0;
                        goto code_r0x08001d64;
                    }
                    _printk(0x80005ff,"msm_ext_disp_probe",uVar3);
                }
            }
code_r0x08001ca4:
            if (*(iVar2 + 0x10) == 0) {
                _printk(0x800064f,"msm_ext_disp_extcon_unregister");
                iVar6 = *(iVar2 + 0x10);
                if (iVar6 != 0) goto code_r0x08001cc0;
code_r0x08001dd4:
                _printk(0x800064f,"msm_ext_disp_extcon_unregister");
            }
            else {
                devm_extcon_dev_unregister(*(iVar2 + 0x10) + 0x10,*(iVar2 + 0x30));
                iVar6 = *(iVar2 + 0x10);
                if (iVar6 == 0) goto code_r0x08001dd4;
code_r0x08001cc0:
                devm_extcon_dev_unregister(iVar6 + 0x10,*(iVar2 + 0x38));
            }
            devm_kfree(*(iVar2 + 0x10) + 0x10,iVar2);
            goto code_r0x08001d64;
        }
        uVar5 = 0x80002ad;
    }
    _printk(uVar5,"msm_ext_disp_probe");
    uVar3 = 0xffffffed;
code_r0x08001d64:
    return uVar3 & 0xffffffff;
}


// ===== sym.msm_ext_disp_remove @ 0x08001e08 (size 204) =====

ulong sym.msm_ext_disp_remove(int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        uVar1 = 0x80002e9;
    }
    else {
        iVar3 = *(arg1 + 0xa8);
        if (iVar3 != 0) {
            if (*(iVar3 + 0x10) == 0) {
                _printk(0x800064f,"msm_ext_disp_extcon_unregister");
                iVar2 = *(iVar3 + 0x10);
            }
            else {
                devm_extcon_dev_unregister(*(iVar3 + 0x10) + 0x10,*(iVar3 + 0x30));
                iVar2 = *(iVar3 + 0x10);
            }
            if (iVar2 == 0) {
                _printk(0x800064f,"msm_ext_disp_extcon_unregister");
            }
            else {
                devm_extcon_dev_unregister(iVar2 + 0x10,*(iVar3 + 0x38));
            }
            devm_kfree(*(iVar3 + 0x10) + 0x10,iVar3);
            return 0;
        }
        uVar1 = 0x80005bc;
    }
    _printk(uVar1,"msm_ext_disp_remove");
    return 0xffffffed;
}


// ===== sym.__cfi_check_fail @ 0x08001ed4 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001f18

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
    //switch table (4 cases) at 0x8000190
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001f2c);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001fb0 (size 100) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __platform_driver_register
                      (reloc.msm_ext_disp_probe.c6f9949fb9c6402b5d4f047cf322e6b1.cfi_jt,obj.__this_module);
    if (iVar1 != 0) {
        _printk(0x80001bd,"msm_ext_disp_init",iVar1);
    }
    return iVar1;
}

