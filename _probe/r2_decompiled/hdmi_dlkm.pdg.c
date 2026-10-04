// decompiled from hdmi_dlkm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 504) =====

//WARNING: Switch with 1 destination removed at 0x080036b0

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2882621ee1337d31) {
        if (arg1 < -0xf2d15659b6de7a9) {
            if (arg1 == -0x749213c658cf941a) {
                if ((pcVar1 + -0x8002220 >> 3 | pcVar1 << 0x3d) < 3) {
                    return;
                }
            }
            else if ((arg1 == -0x3557318fb8d07b71) && ((pcVar1 + -0x8002270 >> 3 | pcVar1 << 0x3d) < 2)) {
                return;
            }
            goto code_r0x08003670;
        }
        if (arg1 == -0xf2d15659b6de7a9) {
            pcVar2 = sym.msm_ext_disp_audio_codec_rx_probe.53a2252512e65e323672c106c884d416.cfi_jt;
        }
        else if (arg1 == -0x1410433e4ed4949) {
            pcVar2 = sym.msm_ext_disp_audio_codec_rx_dai_startup.53a2252512e65e323672c106c884d416.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08003670;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x74f0ccf11b57c4f0) {
        if (arg1 == 0x2882621ee1337d31) {
            if ((pcVar1 + -0x8002238 >> 3 | pcVar1 << 0x3d) < 5) {
                return;
            }
            goto code_r0x08003670;
        }
        if (arg1 != 0x5a4b3c1fa7130354) goto code_r0x08003670;
        pcVar2 = sym.msm_ext_disp_audio_codec_rx_dai_shutdown.53a2252512e65e323672c106c884d416.cfi_jt;
    }
    else if (arg1 == 0x74f0ccf11b57c4f0) {
        pcVar2 = sym.msm_ext_disp_audio_codec_rx_dai_hw_params.53a2252512e65e323672c106c884d416.cfi_jt;
    }
    else if (arg1 == 0x7e04a0fb7ad8bcd5) {
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    else {
        if (arg1 != 0x7e6c99e1529760f9) goto code_r0x08003670;
        pcVar2 = sym.msm_ext_disp_audio_codec_rx_remove.53a2252512e65e323672c106c884d416.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08003670:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80036c4);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08002200 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.msm_ext_disp_audio_codec_rx_plat_probe.53a2252512e65e323672c106c884d416.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08002208 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __platform_driver_register
                      (reloc.msm_ext_disp_audio_codec_rx_plat_probe.53a2252512e65e323672c106c884d416.cfi_jt,
                       obj.__this_module);
    if (iVar1 != 0) {
        _printk(0x800137b,"msm_ext_disp_audio_codec_rx_init",iVar1);
    }
    return iVar1;
}


// ===== sym.msm_ext_disp_audio_codec_rx_remove.53a2252512e65e323672c106c884d416.cfi_jt @ 0x08002210 (size 8) =====

void sym.msm_ext_disp_audio_codec_rx_remove.53a2252512e65e323672c106c884d416.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree(*(*(param_1 + 0x18) + 0x98));
    return;
}


// ===== sym.msm_ext_disp_audio_codec_rx_probe.53a2252512e65e323672c106c884d416.cfi_jt @ 0x08002218 (size 8) =====

ulong sym.msm_ext_disp_audio_codec_rx_probe.53a2252512e65e323672c106c884d416.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t *piVar2;
    int64_t iVar3;
    ulong uVar4;
    char *pcVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = kmem_cache_alloc_trace(_snd_soc_info_enum_double,0xdc0,0xb0);
    if (piVar2 == NULL) {
        _dev_err(*(param_1 + 0x18),"%s(): fail to allocate dai data\n","msm_ext_disp_audio_codec_rx_probe");
        uVar4 = 0xfffffff4;
    }
    else {
        iVar3 = of_get_parent(*(*(param_1 + 0x18) + 0x2f0));
        if (iVar3 == 0) {
            uVar4 = *(param_1 + 0x18);
            pcVar5 = "%s(): Parent device tree node not found\n";
        }
        else {
            iVar3 = of_find_device_by_node();
            *piVar2 = iVar3;
            if (iVar3 == 0) {
                uVar4 = *(param_1 + 0x18);
                pcVar5 = "%s(): can\'t get parent pdev\n";
            }
            else {
                iVar1 = msm_ext_disp_register_audio_codec(iVar3,piVar2 + 1);
                if (iVar1 == 0) {
                    __mutex_init(piVar2 + 8,"&codec_data->dp_ops_lock",
                                 reloc.msm_ext_disp_audio_codec_rx_plat_probe.53a2252512e65e323672c106c884d416.cfi_jt);
                    *(*(param_1 + 0x18) + 0x98) = piVar2;
                    return 0;
                }
                uVar4 = *(param_1 + 0x18);
                pcVar5 = "%s(): can\'t register with ext disp core";
            }
        }
        _dev_err(uVar4,pcVar5,"msm_ext_disp_audio_codec_rx_probe");
        kfree(piVar2);
        uVar4 = 0xffffffed;
    }
    return uVar4;
}


// ===== sym.snd_soc_info_enum_double.cfi_jt @ 0x08002220 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_info_enum_double.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.snd_soc_info_multi_ext.cfi_jt @ 0x08002228 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_info_multi_ext.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.msm_ext_disp_edid_ctl_info.53a2252512e65e323672c106c884d416.cfi_jt @ 0x08002230 (size 8) =====

int sym.msm_ext_disp_edid_ctl_info.53a2252512e65e323672c106c884d416.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *puVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    uint64_t uVar4;
    code *pcVar5;
    ulong *puVar6;
    ulong unaff_x30;
    uint uStack_68;
    uint uStack_64;
    uint uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar3 = *(param_1 + 0x80);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    puVar6 = *(*(iVar3 + 0x18) + 0x98);
    if (puVar6 == NULL) {
        iVar2 = ___ratelimit(obj.msm_ext_disp_edid_ctl_info._rs,"msm_ext_disp_edid_ctl_info");
        if (iVar2 == 0) {
            iVar2 = -0x16;
        }
        else {
            _dev_err(*(iVar3 + 0x18),"%s: codec_data is NULL\n","msm_ext_disp_edid_ctl_info");
            iVar2 = -0x16;
        }
    }
    else {
        puVar1 = puVar6 + 8;
        uVar4 = *(param_1 + 0x78);
        mutex_lock(puVar1);
        iVar2 = uVar4;
        uStack_68 = 0x28;
        if (iVar2 != 4) {
            uStack_68 = 0x2c;
        }
        if (4 < (uVar4 & 0xffffffff)) goto code_r0x080025a0;
        uStack_64 = *(puVar6 + iVar2 * 4 + 0x98);
        uStack_60 = *(puVar6 + iVar2 * 4 + 0x84);
        iVar2 = msm_ext_disp_select_audio_codec(*puVar6,&uStack_68);
        pcVar5 = puVar6[2];
        if ((pcVar5 == NULL) || (iVar2 != 0)) {
            *(param_2 + 0x48) = 0;
            *(param_2 + 0x40) = 4;
            mutex_unlock(puVar1);
            iVar2 = 0;
        }
        else {
            __cfi_slowpath_diag(0x54d3e5c2cc804c3b,pcVar5,0x8000a60);
            iVar2 = (*pcVar5)(*puVar6,&uStack_58);
            mutex_unlock(puVar1);
            if (-1 < iVar2) {
                *(param_2 + 0x40) = 4;
                *(param_2 + 0x48) = uStack_40 + uStack_50;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return iVar2;
    }
    __stack_chk_fail();
code_r0x080025a0:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x80025a4);
    (*pcVar5)();
}


// ===== sym.msm_ext_disp_audio_device_set.53a2252512e65e323672c106c884d416.cfi_jt @ 0x08002238 (size 8) =====

ulong sym.msm_ext_disp_audio_device_set.53a2252512e65e323672c106c884d416.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    ulong uVar4;
    char *pcVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x80);
    uVar2 = *(*(param_1 + 0x78) + 0x18);
    if (uVar2 < 3) {
        iVar6 = *(*(iVar1 + 0x18) + 0x98);
        if (iVar6 == 0) {
            iVar3 = ___ratelimit(obj.msm_ext_disp_audio_device_set._rs.48,"msm_ext_disp_audio_device_set");
            if (iVar3 == 0) {
                return 0xffffffea;
            }
            uVar4 = *(iVar1 + 0x18);
            pcVar5 = "%s: codec_data or ops acknowledge() is NULL\n";
        }
        else {
            if ((((*(param_2 + 0x48) < 1) && (-1 < *(param_2 + 0x50))) && (*(param_2 + 0x50) < 3)) &&
               (*(param_2 + 0x48) == 0)) {
                mutex_lock(iVar6 + 0x40);
                iVar1 = iVar6 + uVar2 * 4;
                *(iVar1 + 0x98) = *(param_2 + 0x48);
                *(iVar1 + 0x84) = *(param_2 + 0x50);
                mutex_unlock(iVar6 + 0x40);
                return 0;
            }
            iVar3 = ___ratelimit(obj.msm_ext_disp_audio_device_set._rs.49,"msm_ext_disp_audio_device_set");
            if (iVar3 == 0) {
                return 0xffffffea;
            }
            uVar4 = *(iVar1 + 0x18);
            pcVar5 = "%s: DP audio control index invalid\n";
        }
        _dev_err(uVar4,pcVar5,"msm_ext_disp_audio_device_set");
    }
    else {
        iVar3 = ___ratelimit(obj.msm_ext_disp_audio_device_set._rs,"msm_ext_disp_audio_device_set");
        if (iVar3 != 0) {
            _dev_err(*(iVar1 + 0x18),"%s: invalid dai id: %d\n","msm_ext_disp_audio_device_set",uVar2);
        }
    }
    return 0xffffffea;
}


// ===== sym.msm_ext_disp_edid_get.53a2252512e65e323672c106c884d416.cfi_jt @ 0x08002240 (size 8) =====

int sym.msm_ext_disp_edid_get.53a2252512e65e323672c106c884d416.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *puVar1;
    uint32_t uVar2;
    int iVar3;
    ulong *in_x18;
    uint64_t uVar4;
    code *pcVar5;
    ulong *puVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uint uStack_78;
    ulong uStack_74;
    ulong uStack_68;
    uint64_t uStack_60;
    ulong uStack_58;
    uint64_t uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    iVar8 = *(param_1 + 0x80);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_74 = 0;
    puVar6 = *(*(iVar8 + 0x18) + 0x98);
    if (puVar6 == NULL) {
        iVar3 = ___ratelimit(obj.msm_ext_disp_edid_get._rs,"msm_ext_disp_edid_get");
        if (iVar3 == 0) {
            iVar3 = -0x16;
        }
        else {
            _dev_err(*(iVar8 + 0x18),"%s: codec_data is NULL\n","msm_ext_disp_edid_get");
            iVar3 = -0x16;
        }
    }
    else {
        puVar1 = puVar6 + 8;
        uVar4 = *(param_1 + 0x78);
        mutex_lock(puVar1);
        iVar3 = uVar4;
        uStack_78 = 0x28;
        if (iVar3 != 4) {
            uStack_78 = 0x2c;
        }
        if (4 < (uVar4 & 0xffffffff)) goto code_r0x080027cc;
        uStack_74 = CONCAT44(*(puVar6 + iVar3 * 4 + 0x84),*(puVar6 + iVar3 * 4 + 0x98));
        iVar3 = msm_ext_disp_select_audio_codec(*puVar6,&uStack_78);
        pcVar5 = puVar6[2];
        if ((pcVar5 == NULL) || (iVar3 != 0)) {
            iVar3 = ___ratelimit(obj.msm_ext_disp_edid_get._rs.19,"msm_ext_disp_edid_get");
            if (iVar3 != 0) {
                _dev_err(*(iVar8 + 0x18),"%s: codec_data or get_audio_edid_blk() is NULL\n","msm_ext_disp_edid_get");
            }
            mutex_unlock(puVar1);
            iVar3 = -0x16;
        }
        else {
            __cfi_slowpath_diag(0x54d3e5c2cc804c3b,pcVar5,0x8000a80);
            iVar3 = (*pcVar5)(*puVar6,&uStack_68);
            mutex_unlock(puVar1);
            if (-1 < iVar3) {
                uVar2 = uStack_60;
                uVar7 = uStack_60 & 0xffffffff;
                uVar4 = uStack_50 & 0xffffffff;
                if (uStack_50 + uStack_60 < 0x201) {
                    memcpy(param_2 + 0x48,uStack_68,uVar7);
                    if (0x200 < uVar2) goto code_r0x080027cc;
                    memcpy(param_2 + 0x48 + uVar7,uStack_58,uVar4);
                }
                else {
                    iVar3 = ___ratelimit(obj.msm_ext_disp_edid_get._rs.21,"msm_ext_disp_edid_get");
                    if (iVar3 == 0) {
                        iVar3 = -0xc;
                    }
                    else {
                        _dev_err(*(iVar8 + 0x18),"%s: Not enough memory to copy EDID data\n","msm_ext_disp_edid_get");
                        iVar3 = -0xc;
                    }
                }
            }
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return iVar3;
    }
    __stack_chk_fail();
code_r0x080027cc:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x80027d0);
    (*pcVar5)();
}


// ===== sym.msm_ext_disp_audio_ack_set.53a2252512e65e323672c106c884d416.cfi_jt @ 0x08002248 (size 8) =====

int sym.msm_ext_disp_audio_ack_set.53a2252512e65e323672c106c884d416.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *puVar1;
    uint uVar2;
    uint8_t uVar3;
    int iVar4;
    int iVar5;
    ulong *in_x18;
    code *pcVar6;
    int64_t iVar7;
    ulong *puVar8;
    ulong unaff_x30;
    uint uStack_58;
    uint uStack_54;
    uint uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_48 = *(iVar7 + 0x5e0);
    iVar7 = *(param_1 + 0x80);
    puVar8 = *(*(iVar7 + 0x18) + 0x98);
    if (puVar8 == NULL) {
        iVar4 = ___ratelimit(obj.msm_ext_disp_audio_ack_set._rs,"msm_ext_disp_audio_ack_set");
        if (iVar4 != 0) {
            _dev_err(*(iVar7 + 0x18),"%s: codec_data is NULL\n","msm_ext_disp_audio_ack_set");
        }
code_r0x08002c10:
        iVar4 = -0x16;
    }
    else {
        puVar1 = puVar8 + 8;
        uVar3 = *(*(param_1 + 0x78) + 4);
        mutex_lock(puVar1);
        uStack_58 = 0x28;
        if (uVar3 != 4) {
            uStack_58 = 0x2c;
        }
        if (4 < uVar3) goto code_r0x08002c70;
        uStack_54 = *(puVar8 + uVar3 * 4 + 0x98);
        uStack_50 = *(puVar8 + uVar3 * 4 + 0x84);
        iVar4 = msm_ext_disp_select_audio_codec(*puVar8,&uStack_58);
        pcVar6 = puVar8[6];
        if ((pcVar6 == NULL) || (iVar4 != 0)) {
            iVar4 = ___ratelimit(obj.msm_ext_disp_audio_ack_set._rs.36,"msm_ext_disp_audio_ack_set");
            if (iVar4 != 0) {
                _dev_err(*(iVar7 + 0x18),"%s: codec_data ops acknowledge() is NULL\n","msm_ext_disp_audio_ack_set");
            }
code_r0x08002c08:
            mutex_unlock(puVar1);
            goto code_r0x08002c10;
        }
        if (2 < *(param_2 + 0x48)) {
            iVar4 = ___ratelimit(obj.msm_ext_disp_audio_ack_set._rs.38,"msm_ext_disp_audio_ack_set");
            if (iVar4 != 0) {
                _dev_err(*(iVar7 + 0x18),"%s: invalid value %d for mixer ctl\n","msm_ext_disp_audio_ack_set",
                         *(param_2 + 0x48));
            }
            goto code_r0x08002c08;
        }
        uVar2 = *(*(param_2 + 0x48) * 4 + 0x8001ec0);
        __cfi_slowpath_diag(0xc5c87252ce7e5351,pcVar6,0x8000ae0);
        iVar4 = (*pcVar6)(*puVar8,uVar2);
        mutex_unlock(puVar1);
        if ((iVar4 < 0) &&
           (iVar5 = ___ratelimit(obj.msm_ext_disp_audio_ack_set._rs.40,"msm_ext_disp_audio_ack_set"), iVar5 != 0)) {
            _dev_err(*(iVar7 + 0x18),"%s: error from acknowledge(), err:%d\n","msm_ext_disp_audio_ack_set",iVar4);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_48) {
        return iVar4;
    }
    __stack_chk_fail();
code_r0x08002c70:
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x5512,0x8002c74);
    (*pcVar6)();
}


// ===== sym.msm_ext_disp_audio_device_get.53a2252512e65e323672c106c884d416.cfi_jt @ 0x08002250 (size 8) =====

ulong sym.msm_ext_disp_audio_device_get.53a2252512e65e323672c106c884d416.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x80);
    uVar2 = *(*(param_1 + 0x78) + 0x18);
    if (uVar2 < 3) {
        iVar4 = *(*(iVar1 + 0x18) + 0x98);
        if (iVar4 != 0) {
            iVar4 = iVar4 + uVar2 * 4;
            *(param_2 + 0x48) = *(iVar4 + 0x98);
            *(param_2 + 0x50) = *(iVar4 + 0x84);
            return 0;
        }
        iVar3 = ___ratelimit(obj.msm_ext_disp_audio_device_get._rs.46,"msm_ext_disp_audio_device_get");
        if (iVar3 != 0) {
            _dev_err(*(iVar1 + 0x18),"%s: codec_data or ops acknowledge() is NULL\n","msm_ext_disp_audio_device_get");
        }
    }
    else {
        iVar3 = ___ratelimit(obj.msm_ext_disp_audio_device_get._rs,"msm_ext_disp_audio_device_get");
        if (iVar3 != 0) {
            _dev_err(*(iVar1 + 0x18),"%s: invalid dai id: %d\n","msm_ext_disp_audio_device_get",uVar2);
        }
    }
    return 0xffffffea;
}


// ===== sym.msm_ext_disp_audio_type_get.53a2252512e65e323672c106c884d416.cfi_jt @ 0x08002258 (size 8) =====

ulong sym.msm_ext_disp_audio_type_get.53a2252512e65e323672c106c884d416.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *puVar1;
    uint8_t uVar2;
    int iVar3;
    int iVar4;
    ulong uVar5;
    ulong *in_x18;
    code *pcVar6;
    ulong uVar7;
    int64_t iVar8;
    ulong *puVar9;
    uint64_t uVar10;
    ulong unaff_x30;
    uint uStack_58;
    uint uStack_54;
    uint uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    iVar8 = *(param_1 + 0x80);
    puVar9 = *(*(iVar8 + 0x18) + 0x98);
    if (puVar9 == NULL) {
        iVar3 = ___ratelimit(obj.msm_ext_disp_audio_type_get._rs,"msm_ext_disp_audio_type_get");
        if (iVar3 != 0) {
            _dev_err(*(iVar8 + 0x18),"%s: codec_data is NULL\n","msm_ext_disp_audio_type_get");
        }
code_r0x08002938:
        uVar7 = 0xffffffea;
    }
    else {
        puVar1 = puVar9 + 8;
        uVar2 = *(*(param_1 + 0x78) + 4);
        uVar10 = uVar2;
        mutex_lock(puVar1);
        uStack_58 = 0x28;
        if (uVar2 != 4) {
            uStack_58 = 0x2c;
        }
        if (4 < uVar2) goto code_r0x08002a38;
        uStack_54 = *(puVar9 + uVar10 * 4 + 0x98);
        uStack_50 = *(puVar9 + uVar10 * 4 + 0x84);
        iVar3 = msm_ext_disp_select_audio_codec(*puVar9,&uStack_58);
        if (((puVar9[2] == 0) || (puVar9[4] == 0)) || (iVar3 != 0)) {
            iVar3 = ___ratelimit(obj.msm_ext_disp_audio_type_get._rs.23,"msm_ext_disp_audio_type_get");
            if (iVar3 != 0) {
                _dev_err(*(iVar8 + 0x18),"%s: get_audio_edid_blk() or get_intf_id is NULL\n",
                         "msm_ext_disp_audio_type_get");
            }
            uVar7 = 0xffffffea;
        }
        else {
            pcVar6 = puVar9[3];
            __cfi_slowpath_diag(0xc5c87252ce7e5351,pcVar6,0x8000aa0);
            iVar3 = (*pcVar6)(*puVar9,1);
            *(puVar9 + uVar10 * 4 + 0x70) = iVar3;
            if (iVar3 != 0) {
                pcVar6 = puVar9[4];
                if (1 < (pcVar6 + -0x8002270 >> 3 | pcVar6 << 0x3d)) {
                    __cfi_slowpath_diag(0xcaa8ce70472f848f,pcVar6,0x8000ac0);
                }
                iVar3 = (*pcVar6)(*puVar9);
                mutex_unlock(puVar1);
                if (iVar3 == 0x28) {
                    uVar5 = 1;
                }
                else {
                    if (iVar3 != 0x2c) {
                        iVar4 = ___ratelimit(obj.msm_ext_disp_audio_type_get._rs.29,"msm_ext_disp_audio_type_get");
                        if (iVar4 != 0) {
                            _dev_err(*(iVar8 + 0x18),"%s: Invalid disp_type:%d\n","msm_ext_disp_audio_type_get",iVar3
                                    );
                        }
                        goto code_r0x08002938;
                    }
                    uVar5 = 2;
                }
                uVar7 = 0;
                *(param_2 + 0x48) = uVar5;
                goto code_r0x0800293c;
            }
            iVar3 = ___ratelimit(obj.msm_ext_disp_audio_type_get._rs.27,"msm_ext_disp_audio_type_get");
            if (iVar3 != 0) {
                _dev_err(*(iVar8 + 0x18),"%s: Display cable disconnected\n","msm_ext_disp_audio_type_get");
            }
            uVar7 = 0;
            *(param_2 + 0x48) = 0;
        }
        mutex_unlock(puVar1);
    }
code_r0x0800293c:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return uVar7;
    }
    __stack_chk_fail();
code_r0x08002a38:
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x5512,0x8002a3c);
    (*pcVar6)();
}


// ===== sym.msm_ext_disp_audio_codec_rx_dai_startup.53a2252512e65e323672c106c884d416.cfi_jt @ 0x08002260 (size 8) =====

void sym.msm_ext_disp_audio_codec_rx_dai_startup.53a2252512e65e323672c106c884d416.cfi_jt(ulong param_1,int64_t param_2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    uint uVar4;
    int64_t extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *unaff_x20;
    code *unaff_x21;
    code *pcVar5;
    ulong *puVar6;
    ulong *puVar7;
    ulong unaff_x30;
    uint uStack_98;
    uint uStack_94;
    uint uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    ulong *puStack_70;
    code *pcStack_68;
    ulong *puStack_60;
    int64_t iStack_58;
    uint uStack_48;
    ulong uStack_44;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_44 = 0;
    puVar6 = *(*(*(param_2 + 0x58) + 0x18) + 0x98);
    if (puVar6 == NULL) {
        iVar3 = ___ratelimit(obj.msm_ext_disp_audio_codec_rx_dai_startup._rs,"msm_ext_disp_audio_codec_rx_dai_startup")
        ;
        if (iVar3 != 0) {
            _dev_err(*(param_2 + 0x10),"%s() codec_data is null\n","msm_ext_disp_audio_codec_rx_dai_startup");
        }
code_r0x08002fcc:
        uVar4 = 0xffffffea;
    }
    else {
        unaff_x20 = puVar6 + 8;
        mutex_lock(unaff_x20);
        uVar1 = *(param_2 + 8);
        uStack_48 = 0x28;
        if (uVar1 != 4) {
            uStack_48 = 0x2c;
        }
        if (4 < uVar1) goto code_r0x080030c0;
        uStack_44 = CONCAT44(*(puVar6 + uVar1 * 4 + 0x84),*(puVar6 + uVar1 * 4 + 0x98));
        iVar3 = msm_ext_disp_select_audio_codec(*puVar6,&uStack_48);
        unaff_x21 = puVar6[3];
        if ((unaff_x21 == NULL) || (iVar3 != 0)) {
            iVar3 = ___ratelimit(obj.msm_ext_disp_audio_codec_rx_dai_startup._rs.66,
                                 "msm_ext_disp_audio_codec_rx_dai_startup");
            if (iVar3 != 0) {
                _dev_err(*(param_2 + 0x10),"%s() cable_status is null\n","msm_ext_disp_audio_codec_rx_dai_startup");
            }
            mutex_unlock(unaff_x20);
            goto code_r0x08002fcc;
        }
        __cfi_slowpath_diag(0xc5c87252ce7e5351,unaff_x21,0x8000b00);
        puVar7 = puVar6 + 0xe;
        uVar4 = (*unaff_x21)(*puVar6,1);
        if (4 < *(param_2 + 8)) {
code_r0x080030c0:
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x5512,0x80030c4);
            (*pcVar5)();
        }
        *(puVar7 + *(param_2 + 8) * 4) = uVar4;
        mutex_unlock(unaff_x20);
        if (4 < *(param_2 + 8)) goto code_r0x080030c0;
        iVar3 = *(puVar7 + *(param_2 + 8) * 4);
        puVar6 = puVar7;
        if (iVar3 < 0) {
            iVar3 = ___ratelimit(obj.msm_ext_disp_audio_codec_rx_dai_startup._rs.68,
                                 "msm_ext_disp_audio_codec_rx_dai_startup");
            if (iVar3 != 0) {
                if (4 < *(param_2 + 8)) goto code_r0x080030c0;
                _dev_err(*(param_2 + 0x10),"%s() ext disp core is not ready (ret val = %d)\n",
                         "msm_ext_disp_audio_codec_rx_dai_startup",*(puVar7 + *(param_2 + 8) * 4));
            }
            if (4 < *(param_2 + 8)) goto code_r0x080030c0;
            uVar4 = *(puVar7 + *(param_2 + 8) * 4);
        }
        else if (iVar3 == 0) {
            iVar3 = ___ratelimit(obj.msm_ext_disp_audio_codec_rx_dai_startup._rs.70,
                                 "msm_ext_disp_audio_codec_rx_dai_startup");
            if (iVar3 != 0) {
                if (4 < *(param_2 + 8)) goto code_r0x080030c0;
                _dev_err(*(param_2 + 0x10),"%s() ext disp cable is not connected (ret val = %d)\n",
                         "msm_ext_disp_audio_codec_rx_dai_startup",*(puVar7 + *(param_2 + 8) * 4));
            }
            uVar4 = 0xffffffed;
        }
        else {
            uVar4 = 0;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(uVar4);
    *extraout_x18 = sym.msm_ext_disp_audio_codec_rx_dai_shutdown;
    pcStack_78 = sym.msm_ext_disp_audio_codec_rx_dai_shutdown;
    iVar2 = sp_el0;
    iStack_88 = *(iVar2 + 0x5e0);
    puVar7 = *(*(*(extraout_x1 + 0x58) + 0x18) + 0x98);
    puStack_80 = &stack0xffffffffffffffd0;
    puStack_70 = puVar6;
    pcStack_68 = unaff_x21;
    puStack_60 = unaff_x20;
    iStack_58 = param_2;
    if (puVar7 == NULL) {
        iVar3 = ___ratelimit(obj.msm_ext_disp_audio_codec_rx_dai_shutdown._rs,
                             "msm_ext_disp_audio_codec_rx_dai_shutdown");
        if (iVar3 != 0) {
            _dev_err(*(extraout_x1 + 0x10),"%s() codec_data is null\n","msm_ext_disp_audio_codec_rx_dai_shutdown");
        }
    }
    else {
        mutex_lock(puVar7 + 8);
        uVar1 = *(extraout_x1 + 8);
        uStack_98 = 0x28;
        if (uVar1 != 4) {
            uStack_98 = 0x2c;
        }
        if (4 < uVar1) goto code_r0x080032a0;
        uStack_94 = *(puVar7 + uVar1 * 4 + 0x98);
        uStack_90 = *(puVar7 + uVar1 * 4 + 0x84);
        iVar3 = msm_ext_disp_select_audio_codec(*puVar7,&uStack_98);
        if (((puVar7[5] == 0) || (pcVar5 = puVar7[3], pcVar5 == NULL)) || (iVar3 != 0)) {
            iVar3 = ___ratelimit(obj.msm_ext_disp_audio_codec_rx_dai_shutdown._rs.72,
                                 "msm_ext_disp_audio_codec_rx_dai_shutdown");
            if (iVar3 != 0) {
                _dev_err(*(extraout_x1 + 0x10),"%s: teardown_done or cable_status is null\n",
                         "msm_ext_disp_audio_codec_rx_dai_shutdown");
            }
        }
        else {
            __cfi_slowpath_diag(0xc5c87252ce7e5351,pcVar5,0x8000b20);
            iVar3 = (*pcVar5)(*puVar7,0);
            if ((iVar3 < 0) &&
               (iVar3 = ___ratelimit(obj.msm_ext_disp_audio_codec_rx_dai_shutdown._rs.74,
                                     "msm_ext_disp_audio_codec_rx_dai_shutdown"), iVar3 != 0)) {
                _dev_err(*(extraout_x1 + 0x10),"%s: ext disp core had problems releasing audio flag\n",
                         "msm_ext_disp_audio_codec_rx_dai_shutdown");
            }
            pcVar5 = puVar7[5];
            __cfi_slowpath_diag(0xbd9f1449cc54c886,pcVar5,0x8000b40);
            (*pcVar5)(*puVar7);
        }
        mutex_unlock(puVar7 + 8);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_88) {
        return;
    }
    __stack_chk_fail();
code_r0x080032a0:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x80032a4);
    (*pcVar5)();
}


// ===== sym.msm_ext_disp_audio_codec_rx_dai_hw_params.53a2252512e65e323672c106c884d416.cfi_jt @ 0x08002268 (size 8) =====

uchar * sym.msm_ext_disp_audio_codec_rx_dai_hw_params.53a2252512e65e323672c106c884d416.cfi_jt
                  (ulong param_1,int64_t param_2,int64_t param_3)

{
    ulong *puVar1;
    uint uVar2;
    code *pcVar3;
    int iVar4;
    uint32_t uVar5;
    uchar *puVar6;
    uint uVar7;
    int64_t iVar8;
    uint uVar9;
    uint uVar10;
    uint uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    uint uStack_90;
    uint uStack_8c;
    uint uStack_88;
    uint uStack_84;
    ulong uStack_80;
    uint uStack_78;
    uint uStack_74;
    uint uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    uStack_70 = 0;
    uVar2 = *(param_2 + 0x11c);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    puVar12 = *(*(*(param_3 + 0x58) + 0x18) + 0x98);
    if (puVar12 == NULL) {
        iVar4 = ___ratelimit(obj.msm_ext_disp_audio_codec_rx_dai_hw_params._rs,
                             "msm_ext_disp_audio_codec_rx_dai_hw_params");
        if (iVar4 != 0) {
            _dev_err(*(param_3 + 0x10),"%s() codec_data is null\n","msm_ext_disp_audio_codec_rx_dai_hw_params");
            uVar5 = 0xffffffea;
            goto code_r0x080035a8;
        }
code_r0x080033d4:
        uVar5 = 0xffffffea;
        goto code_r0x080035a8;
    }
    puVar1 = puVar12 + 8;
    mutex_lock(puVar1);
    uVar5 = *(param_3 + 8);
    uVar9 = 0x28;
    if (uVar5 != 4) {
        uVar9 = 0x2c;
    }
    uStack_78 = uVar9;
    if (4 < uVar5) goto code_r0x08003664;
    uStack_74 = *(puVar12 + uVar5 * 4 + 0x98);
    uStack_70 = *(puVar12 + uVar5 * 4 + 0x84);
    iVar4 = msm_ext_disp_select_audio_codec(*puVar12,&uStack_78);
    if ((puVar12[1] == 0) || (iVar4 != 0)) {
        iVar4 = ___ratelimit(obj.msm_ext_disp_audio_codec_rx_dai_hw_params._rs.76,
                             "msm_ext_disp_audio_codec_rx_dai_hw_params");
        if (iVar4 != 0) {
            _dev_err(*(param_3 + 0x10),"%s: audio_info_setup is null\n","msm_ext_disp_audio_codec_rx_dai_hw_params");
        }
        mutex_unlock(puVar1);
        uVar5 = 0xffffffea;
        goto code_r0x080035a8;
    }
    mutex_unlock(puVar1);
    if (4 < *(param_3 + 8)) goto code_r0x08003664;
    iVar4 = *(puVar12 + *(param_3 + 8) * 4 + 0x70);
    if (iVar4 < 0) {
        iVar4 = ___ratelimit(obj.msm_ext_disp_audio_codec_rx_dai_hw_params._rs.78,
                             "msm_ext_disp_audio_codec_rx_dai_hw_params");
        if (iVar4 != 0) {
            if (4 < *(param_3 + 8)) goto code_r0x08003664;
            _dev_err(*(param_3 + 0x10),"%s() ext disp core is not ready (ret val = %d)\n",
                     "msm_ext_disp_audio_codec_rx_dai_hw_params",*(puVar12 + *(param_3 + 8) * 4 + 0x70));
        }
        if (4 < *(param_3 + 8)) goto code_r0x08003664;
        uVar5 = *(puVar12 + *(param_3 + 8) * 4 + 0x70);
        goto code_r0x080035a8;
    }
    if (iVar4 == 0) {
        iVar4 = ___ratelimit(obj.msm_ext_disp_audio_codec_rx_dai_hw_params._rs.79,
                             "msm_ext_disp_audio_codec_rx_dai_hw_params");
        if (iVar4 == 0) {
            uVar5 = 0xffffffed;
        }
        else {
            if (4 < *(param_3 + 8)) goto code_r0x08003664;
            _dev_err(*(param_3 + 0x10),"%s() ext disp cable is not connected (ret val = %d)\n",
                     "msm_ext_disp_audio_codec_rx_dai_hw_params",*(puVar12 + *(param_3 + 8) * 4 + 0x70));
            uVar5 = 0xffffffed;
        }
        goto code_r0x080035a8;
    }
    uVar11 = 0;
    uVar7 = 2;
    uVar10 = uVar2;
    switch(uVar2) {
    case 2:
        goto code_r0x08003504;
    case 3:
        goto code_r0x080034f8;
    case 4:
        uVar7 = 6;
        break;
    case 5:
        uVar7 = 10;
        break;
    case 6:
        uVar7 = 0xb;
        break;
    case 7:
        uVar7 = 0x12;
        goto code_r0x080034f0;
    case 8:
        uVar7 = 0x13;
code_r0x080034f0:
        uVar10 = 0xf;
        goto code_r0x080034f8;
    default:
        iVar4 = ___ratelimit(obj.msm_ext_disp_audio_codec_rx_dai_hw_params._rs.80,
                             "msm_ext_disp_audio_codec_rx_dai_hw_params");
        if (iVar4 != 0) {
            _dev_err(*(param_3 + 0x10),"invalid Channels = %u\n",uVar2);
            uVar5 = 0xffffffea;
            goto code_r0x080035a8;
        }
        goto code_r0x080033d4;
    }
    uVar10 = 7;
code_r0x080034f8:
    uVar11 = uVar7;
    uStack_80 = CONCAT44(uVar10,uStack_80);
code_r0x08003504:
    uStack_90 = *(param_2 + 0x128);
    uStack_84 = 0;
    uStack_8c = uVar2;
    uStack_88 = uVar11;
    mutex_lock(puVar1);
    uStack_78 = uVar9;
    if (4 < *(param_3 + 8)) {
code_r0x08003664:
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x8003668);
        (*pcVar3)();
    }
    iVar8 = *(param_3 + 8) * 4;
    uStack_74 = *(puVar12 + iVar8 + 0x98);
    uStack_70 = *(puVar12 + iVar8 + 0x84);
    uVar5 = msm_ext_disp_select_audio_codec(*puVar12,&uStack_78);
    if (uVar5 == 0) {
        pcVar3 = puVar12[1];
        __cfi_slowpath_diag(0x7d994c24137dc6a1,pcVar3,0x8000b60);
        uVar5 = (*pcVar3)(*puVar12,&uStack_90);
    }
    mutex_unlock(puVar1);
    if ((uVar5 < 0) &&
       (iVar4 = ___ratelimit(obj.msm_ext_disp_audio_codec_rx_dai_hw_params._rs.82,
                             "msm_ext_disp_audio_codec_rx_dai_hw_params"), iVar4 != 0)) {
        _dev_err(*(param_3 + 0x10),"%s() ext disp core is not ready, rc: %d\n",
                 "msm_ext_disp_audio_codec_rx_dai_hw_params",uVar5);
    }
code_r0x080035a8:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_68) {
        auVar13 = __stack_chk_fail();
        puVar6 = auVar13._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar6 != NULL) {
            switch(*puVar6) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar6,auVar13._8_8_,0);
                break;
            default:
                return puVar6;
            }
        }
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5502,0x80036c4);
        (*pcVar3)();
    }
    return uVar5;
}


// ===== sym.__typeid__ZTSFiP15platform_deviceE_global_addr @ 0x08002270 (size 8) =====

void sym.__typeid__ZTSFiP15platform_deviceE_global_addr(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    snd_soc_register_component
              (param_1 + 0x10,obj.msm_ext_disp_codec_rx_driver,obj.msm_ext_disp_audio_codec_rx_dais,4);
    return;
}


// ===== sym.msm_ext_disp_audio_codec_rx_plat_remove.53a2252512e65e323672c106c884d416.cfi_jt @ 0x08002278 (size 8) =====

ulong sym.msm_ext_disp_audio_codec_rx_plat_remove.53a2252512e65e323672c106c884d416.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    snd_soc_unregister_component(param_1 + 0x10);
    return 0;
}


// ===== sym.msm_ext_disp_audio_codec_rx_dai_shutdown.53a2252512e65e323672c106c884d416.cfi_jt @ 0x08002280 (size 8) =====

void sym.msm_ext_disp_audio_codec_rx_dai_shutdown.53a2252512e65e323672c106c884d416.cfi_jt
               (ulong param_1,int64_t param_2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong *puVar5;
    ulong unaff_x30;
    uint uStack_48;
    uint uStack_44;
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    puVar5 = *(*(*(param_2 + 0x58) + 0x18) + 0x98);
    if (puVar5 == NULL) {
        iVar3 = ___ratelimit(obj.msm_ext_disp_audio_codec_rx_dai_shutdown._rs,
                             "msm_ext_disp_audio_codec_rx_dai_shutdown");
        if (iVar3 != 0) {
            _dev_err(*(param_2 + 0x10),"%s() codec_data is null\n","msm_ext_disp_audio_codec_rx_dai_shutdown");
        }
    }
    else {
        mutex_lock(puVar5 + 8);
        uVar1 = *(param_2 + 8);
        uStack_48 = 0x28;
        if (uVar1 != 4) {
            uStack_48 = 0x2c;
        }
        if (4 < uVar1) goto code_r0x080032a0;
        uStack_44 = *(puVar5 + uVar1 * 4 + 0x98);
        uStack_40 = *(puVar5 + uVar1 * 4 + 0x84);
        iVar3 = msm_ext_disp_select_audio_codec(*puVar5,&uStack_48);
        if (((puVar5[5] == 0) || (pcVar4 = puVar5[3], pcVar4 == NULL)) || (iVar3 != 0)) {
            iVar3 = ___ratelimit(obj.msm_ext_disp_audio_codec_rx_dai_shutdown._rs.72,
                                 "msm_ext_disp_audio_codec_rx_dai_shutdown");
            if (iVar3 != 0) {
                _dev_err(*(param_2 + 0x10),"%s: teardown_done or cable_status is null\n",
                         "msm_ext_disp_audio_codec_rx_dai_shutdown");
            }
        }
        else {
            __cfi_slowpath_diag(0xc5c87252ce7e5351,pcVar4,0x8000b20);
            iVar3 = (*pcVar4)(*puVar5,0);
            if ((iVar3 < 0) &&
               (iVar3 = ___ratelimit(obj.msm_ext_disp_audio_codec_rx_dai_shutdown._rs.74,
                                     "msm_ext_disp_audio_codec_rx_dai_shutdown"), iVar3 != 0)) {
                _dev_err(*(param_2 + 0x10),"%s: ext disp core had problems releasing audio flag\n",
                         "msm_ext_disp_audio_codec_rx_dai_shutdown");
            }
            pcVar4 = puVar5[5];
            __cfi_slowpath_diag(0xbd9f1449cc54c886,pcVar4,0x8000b40);
            (*pcVar4)(*puVar5);
        }
        mutex_unlock(puVar5 + 8);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail();
code_r0x080032a0:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x80032a4);
    (*pcVar4)();
}


// ===== sym.msm_ext_disp_audio_codec_rx_plat_probe @ 0x08002288 (size 60) =====

void sym.msm_ext_disp_audio_codec_rx_plat_probe(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    snd_soc_register_component(arg1 + 0x10,obj.msm_ext_disp_codec_rx_driver,obj.msm_ext_disp_audio_codec_rx_dais,4);
    return;
}


// ===== sym.msm_ext_disp_audio_codec_rx_plat_remove @ 0x080022c4 (size 44) =====

ulong sym.msm_ext_disp_audio_codec_rx_plat_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    snd_soc_unregister_component(arg1 + 0x10);
    return 0;
}


// ===== sym.msm_ext_disp_audio_codec_rx_probe @ 0x080022f0 (size 248) =====

ulong sym.msm_ext_disp_audio_codec_rx_probe(int64_t arg1)

{
    int iVar1;
    int64_t *piVar2;
    int64_t iVar3;
    ulong uVar4;
    char *pcVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = kmem_cache_alloc_trace(_snd_soc_info_enum_double,0xdc0,0xb0);
    if (piVar2 == NULL) {
        _dev_err(*(arg1 + 0x18),"%s(): fail to allocate dai data\n","msm_ext_disp_audio_codec_rx_probe");
        uVar4 = 0xfffffff4;
    }
    else {
        iVar3 = of_get_parent(*(*(arg1 + 0x18) + 0x2f0));
        if (iVar3 == 0) {
            uVar4 = *(arg1 + 0x18);
            pcVar5 = "%s(): Parent device tree node not found\n";
        }
        else {
            iVar3 = of_find_device_by_node();
            *piVar2 = iVar3;
            if (iVar3 == 0) {
                uVar4 = *(arg1 + 0x18);
                pcVar5 = "%s(): can\'t get parent pdev\n";
            }
            else {
                iVar1 = msm_ext_disp_register_audio_codec(iVar3,piVar2 + 1);
                if (iVar1 == 0) {
                    __mutex_init(piVar2 + 8,"&codec_data->dp_ops_lock",
                                 reloc.msm_ext_disp_audio_codec_rx_plat_probe.53a2252512e65e323672c106c884d416.cfi_jt);
                    *(*(arg1 + 0x18) + 0x98) = piVar2;
                    return 0;
                }
                uVar4 = *(arg1 + 0x18);
                pcVar5 = "%s(): can\'t register with ext disp core";
            }
        }
        _dev_err(uVar4,pcVar5,"msm_ext_disp_audio_codec_rx_probe");
        kfree(piVar2);
        uVar4 = 0xffffffed;
    }
    return uVar4;
}


// ===== sym.msm_ext_disp_audio_codec_rx_remove @ 0x080023e8 (size 44) =====

void sym.msm_ext_disp_audio_codec_rx_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree(*(*(arg1 + 0x18) + 0x98));
    return;
}


// ===== sym.msm_ext_disp_edid_ctl_info @ 0x08002414 (size 400) =====

int sym.msm_ext_disp_edid_ctl_info(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    uint64_t uVar4;
    code *pcVar5;
    ulong *puVar6;
    ulong unaff_x30;
    uint uStack_68;
    uint uStack_64;
    uint uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar3 = *(arg1 + 0x80);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    puVar6 = *(*(iVar3 + 0x18) + 0x98);
    if (puVar6 == NULL) {
        iVar2 = ___ratelimit(obj.msm_ext_disp_edid_ctl_info._rs,"msm_ext_disp_edid_ctl_info");
        if (iVar2 == 0) {
            iVar2 = -0x16;
        }
        else {
            _dev_err(*(iVar3 + 0x18),"%s: codec_data is NULL\n","msm_ext_disp_edid_ctl_info");
            iVar2 = -0x16;
        }
    }
    else {
        puVar1 = puVar6 + 8;
        uVar4 = *(arg1 + 0x78);
        mutex_lock(puVar1);
        iVar2 = uVar4;
        uStack_68 = 0x28;
        if (iVar2 != 4) {
            uStack_68 = 0x2c;
        }
        if (4 < (uVar4 & 0xffffffff)) goto code_r0x080025a0;
        uStack_64 = *(puVar6 + iVar2 * 4 + 0x98);
        uStack_60 = *(puVar6 + iVar2 * 4 + 0x84);
        iVar2 = msm_ext_disp_select_audio_codec(*puVar6,&uStack_68);
        pcVar5 = puVar6[2];
        if ((pcVar5 == NULL) || (iVar2 != 0)) {
            *(arg2 + 0x48) = 0;
            *(arg2 + 0x40) = 4;
            mutex_unlock(puVar1);
            iVar2 = 0;
        }
        else {
            __cfi_slowpath_diag(0x54d3e5c2cc804c3b,pcVar5,0x8000a60);
            iVar2 = (*pcVar5)(*puVar6,&uStack_58);
            mutex_unlock(puVar1);
            if (-1 < iVar2) {
                *(arg2 + 0x40) = 4;
                *(arg2 + 0x48) = uStack_40 + uStack_50;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return iVar2;
    }
    __stack_chk_fail();
code_r0x080025a0:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x80025a4);
    (*pcVar5)();
}


// ===== sym.msm_ext_disp_edid_get @ 0x080025a4 (size 556) =====

int sym.msm_ext_disp_edid_get(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    uint32_t uVar2;
    int iVar3;
    ulong *in_x18;
    uint64_t uVar4;
    code *pcVar5;
    ulong *puVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uint uStack_78;
    ulong uStack_74;
    ulong uStack_68;
    uint64_t uStack_60;
    ulong uStack_58;
    uint64_t uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    iVar8 = *(arg1 + 0x80);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_74 = 0;
    puVar6 = *(*(iVar8 + 0x18) + 0x98);
    if (puVar6 == NULL) {
        iVar3 = ___ratelimit(obj.msm_ext_disp_edid_get._rs,"msm_ext_disp_edid_get");
        if (iVar3 == 0) {
            iVar3 = -0x16;
        }
        else {
            _dev_err(*(iVar8 + 0x18),"%s: codec_data is NULL\n","msm_ext_disp_edid_get");
            iVar3 = -0x16;
        }
    }
    else {
        puVar1 = puVar6 + 8;
        uVar4 = *(arg1 + 0x78);
        mutex_lock(puVar1);
        iVar3 = uVar4;
        uStack_78 = 0x28;
        if (iVar3 != 4) {
            uStack_78 = 0x2c;
        }
        if (4 < (uVar4 & 0xffffffff)) goto code_r0x080027cc;
        uStack_74 = CONCAT44(*(puVar6 + iVar3 * 4 + 0x84),*(puVar6 + iVar3 * 4 + 0x98));
        iVar3 = msm_ext_disp_select_audio_codec(*puVar6,&uStack_78);
        pcVar5 = puVar6[2];
        if ((pcVar5 == NULL) || (iVar3 != 0)) {
            iVar3 = ___ratelimit(obj.msm_ext_disp_edid_get._rs.19,"msm_ext_disp_edid_get");
            if (iVar3 != 0) {
                _dev_err(*(iVar8 + 0x18),"%s: codec_data or get_audio_edid_blk() is NULL\n","msm_ext_disp_edid_get");
            }
            mutex_unlock(puVar1);
            iVar3 = -0x16;
        }
        else {
            __cfi_slowpath_diag(0x54d3e5c2cc804c3b,pcVar5,0x8000a80);
            iVar3 = (*pcVar5)(*puVar6,&uStack_68);
            mutex_unlock(puVar1);
            if (-1 < iVar3) {
                uVar2 = uStack_60;
                uVar7 = uStack_60 & 0xffffffff;
                uVar4 = uStack_50 & 0xffffffff;
                if (uStack_50 + uStack_60 < 0x201) {
                    memcpy(arg2 + 0x48,uStack_68,uVar7);
                    if (0x200 < uVar2) goto code_r0x080027cc;
                    memcpy(arg2 + 0x48 + uVar7,uStack_58,uVar4);
                }
                else {
                    iVar3 = ___ratelimit(obj.msm_ext_disp_edid_get._rs.21,"msm_ext_disp_edid_get");
                    if (iVar3 == 0) {
                        iVar3 = -0xc;
                    }
                    else {
                        _dev_err(*(iVar8 + 0x18),"%s: Not enough memory to copy EDID data\n","msm_ext_disp_edid_get");
                        iVar3 = -0xc;
                    }
                }
            }
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return iVar3;
    }
    __stack_chk_fail();
code_r0x080027cc:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x80027d0);
    (*pcVar5)();
}


// ===== sym.msm_ext_disp_audio_type_get @ 0x080027d0 (size 656) =====

ulong sym.msm_ext_disp_audio_type_get(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    uint8_t uVar2;
    int iVar3;
    int iVar4;
    ulong uVar5;
    ulong *in_x18;
    code *pcVar6;
    ulong uVar7;
    int64_t iVar8;
    ulong *puVar9;
    uint64_t uVar10;
    ulong unaff_x30;
    uint uStack_58;
    uint uStack_54;
    uint uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    iVar8 = *(arg1 + 0x80);
    puVar9 = *(*(iVar8 + 0x18) + 0x98);
    if (puVar9 == NULL) {
        iVar3 = ___ratelimit(obj.msm_ext_disp_audio_type_get._rs,"msm_ext_disp_audio_type_get");
        if (iVar3 != 0) {
            _dev_err(*(iVar8 + 0x18),"%s: codec_data is NULL\n","msm_ext_disp_audio_type_get");
        }
code_r0x08002938:
        uVar7 = 0xffffffea;
    }
    else {
        puVar1 = puVar9 + 8;
        uVar2 = *(*(arg1 + 0x78) + 4);
        uVar10 = uVar2;
        mutex_lock(puVar1);
        uStack_58 = 0x28;
        if (uVar2 != 4) {
            uStack_58 = 0x2c;
        }
        if (4 < uVar2) goto code_r0x08002a38;
        uStack_54 = *(puVar9 + uVar10 * 4 + 0x98);
        uStack_50 = *(puVar9 + uVar10 * 4 + 0x84);
        iVar3 = msm_ext_disp_select_audio_codec(*puVar9,&uStack_58);
        if (((puVar9[2] == 0) || (puVar9[4] == 0)) || (iVar3 != 0)) {
            iVar3 = ___ratelimit(obj.msm_ext_disp_audio_type_get._rs.23,"msm_ext_disp_audio_type_get");
            if (iVar3 != 0) {
                _dev_err(*(iVar8 + 0x18),"%s: get_audio_edid_blk() or get_intf_id is NULL\n",
                         "msm_ext_disp_audio_type_get");
            }
            uVar7 = 0xffffffea;
        }
        else {
            pcVar6 = puVar9[3];
            __cfi_slowpath_diag(0xc5c87252ce7e5351,pcVar6,0x8000aa0);
            iVar3 = (*pcVar6)(*puVar9,1);
            *(puVar9 + uVar10 * 4 + 0x70) = iVar3;
            if (iVar3 != 0) {
                pcVar6 = puVar9[4];
                if (1 < (pcVar6 + -0x8002270 >> 3 | pcVar6 << 0x3d)) {
                    __cfi_slowpath_diag(0xcaa8ce70472f848f,pcVar6,0x8000ac0);
                }
                iVar3 = (*pcVar6)(*puVar9);
                mutex_unlock(puVar1);
                if (iVar3 == 0x28) {
                    uVar5 = 1;
                }
                else {
                    if (iVar3 != 0x2c) {
                        iVar4 = ___ratelimit(obj.msm_ext_disp_audio_type_get._rs.29,"msm_ext_disp_audio_type_get");
                        if (iVar4 != 0) {
                            _dev_err(*(iVar8 + 0x18),"%s: Invalid disp_type:%d\n","msm_ext_disp_audio_type_get",iVar3
                                    );
                        }
                        goto code_r0x08002938;
                    }
                    uVar5 = 2;
                }
                uVar7 = 0;
                *(arg2 + 0x48) = uVar5;
                goto code_r0x0800293c;
            }
            iVar3 = ___ratelimit(obj.msm_ext_disp_audio_type_get._rs.27,"msm_ext_disp_audio_type_get");
            if (iVar3 != 0) {
                _dev_err(*(iVar8 + 0x18),"%s: Display cable disconnected\n","msm_ext_disp_audio_type_get");
            }
            uVar7 = 0;
            *(arg2 + 0x48) = 0;
        }
        mutex_unlock(puVar1);
    }
code_r0x0800293c:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return uVar7;
    }
    __stack_chk_fail();
code_r0x08002a38:
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x5512,0x8002a3c);
    (*pcVar6)();
}


// ===== sym.msm_ext_disp_audio_ack_set @ 0x08002a60 (size 532) =====

int sym.msm_ext_disp_audio_ack_set(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    uint uVar2;
    uint8_t uVar3;
    int iVar4;
    int iVar5;
    ulong *in_x18;
    code *pcVar6;
    int64_t iVar7;
    ulong *puVar8;
    ulong unaff_x30;
    uint uStack_58;
    uint uStack_54;
    uint uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_48 = *(iVar7 + 0x5e0);
    iVar7 = *(arg1 + 0x80);
    puVar8 = *(*(iVar7 + 0x18) + 0x98);
    if (puVar8 == NULL) {
        iVar4 = ___ratelimit(obj.msm_ext_disp_audio_ack_set._rs,"msm_ext_disp_audio_ack_set");
        if (iVar4 != 0) {
            _dev_err(*(iVar7 + 0x18),"%s: codec_data is NULL\n","msm_ext_disp_audio_ack_set");
        }
code_r0x08002c10:
        iVar4 = -0x16;
    }
    else {
        puVar1 = puVar8 + 8;
        uVar3 = *(*(arg1 + 0x78) + 4);
        mutex_lock(puVar1);
        uStack_58 = 0x28;
        if (uVar3 != 4) {
            uStack_58 = 0x2c;
        }
        if (4 < uVar3) goto code_r0x08002c70;
        uStack_54 = *(puVar8 + uVar3 * 4 + 0x98);
        uStack_50 = *(puVar8 + uVar3 * 4 + 0x84);
        iVar4 = msm_ext_disp_select_audio_codec(*puVar8,&uStack_58);
        pcVar6 = puVar8[6];
        if ((pcVar6 == NULL) || (iVar4 != 0)) {
            iVar4 = ___ratelimit(obj.msm_ext_disp_audio_ack_set._rs.36,"msm_ext_disp_audio_ack_set");
            if (iVar4 != 0) {
                _dev_err(*(iVar7 + 0x18),"%s: codec_data ops acknowledge() is NULL\n","msm_ext_disp_audio_ack_set");
            }
code_r0x08002c08:
            mutex_unlock(puVar1);
            goto code_r0x08002c10;
        }
        if (2 < *(arg2 + 0x48)) {
            iVar4 = ___ratelimit(obj.msm_ext_disp_audio_ack_set._rs.38,"msm_ext_disp_audio_ack_set");
            if (iVar4 != 0) {
                _dev_err(*(iVar7 + 0x18),"%s: invalid value %d for mixer ctl\n","msm_ext_disp_audio_ack_set",
                         *(arg2 + 0x48));
            }
            goto code_r0x08002c08;
        }
        uVar2 = *(*(arg2 + 0x48) * 4 + 0x8001ec0);
        __cfi_slowpath_diag(0xc5c87252ce7e5351,pcVar6,0x8000ae0);
        iVar4 = (*pcVar6)(*puVar8,uVar2);
        mutex_unlock(puVar1);
        if ((iVar4 < 0) &&
           (iVar5 = ___ratelimit(obj.msm_ext_disp_audio_ack_set._rs.40,"msm_ext_disp_audio_ack_set"), iVar5 != 0)) {
            _dev_err(*(iVar7 + 0x18),"%s: error from acknowledge(), err:%d\n","msm_ext_disp_audio_ack_set",iVar4);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_48) {
        return iVar4;
    }
    __stack_chk_fail();
code_r0x08002c70:
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x5512,0x8002c74);
    (*pcVar6)();
}


// ===== sym.msm_ext_disp_audio_device_get @ 0x08002c74 (size 208) =====

ulong sym.msm_ext_disp_audio_device_get(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x80);
    uVar2 = *(*(arg1 + 0x78) + 0x18);
    if (uVar2 < 3) {
        iVar4 = *(*(iVar1 + 0x18) + 0x98);
        if (iVar4 != 0) {
            iVar4 = iVar4 + uVar2 * 4;
            *(arg2 + 0x48) = *(iVar4 + 0x98);
            *(arg2 + 0x50) = *(iVar4 + 0x84);
            return 0;
        }
        iVar3 = ___ratelimit(obj.msm_ext_disp_audio_device_get._rs.46,"msm_ext_disp_audio_device_get");
        if (iVar3 != 0) {
            _dev_err(*(iVar1 + 0x18),"%s: codec_data or ops acknowledge() is NULL\n","msm_ext_disp_audio_device_get");
        }
    }
    else {
        iVar3 = ___ratelimit(obj.msm_ext_disp_audio_device_get._rs,"msm_ext_disp_audio_device_get");
        if (iVar3 != 0) {
            _dev_err(*(iVar1 + 0x18),"%s: invalid dai id: %d\n","msm_ext_disp_audio_device_get",uVar2);
        }
    }
    return 0xffffffea;
}


// ===== sym.msm_ext_disp_audio_device_set @ 0x08002d44 (size 312) =====

ulong sym.msm_ext_disp_audio_device_set(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    ulong uVar4;
    char *pcVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x80);
    uVar2 = *(*(arg1 + 0x78) + 0x18);
    if (uVar2 < 3) {
        iVar6 = *(*(iVar1 + 0x18) + 0x98);
        if (iVar6 == 0) {
            iVar3 = ___ratelimit(obj.msm_ext_disp_audio_device_set._rs.48,"msm_ext_disp_audio_device_set");
            if (iVar3 == 0) {
                return 0xffffffea;
            }
            uVar4 = *(iVar1 + 0x18);
            pcVar5 = "%s: codec_data or ops acknowledge() is NULL\n";
        }
        else {
            if ((((*(arg2 + 0x48) < 1) && (-1 < *(arg2 + 0x50))) && (*(arg2 + 0x50) < 3)) && (*(arg2 + 0x48) == 0)) {
                mutex_lock(iVar6 + 0x40);
                iVar1 = iVar6 + uVar2 * 4;
                *(iVar1 + 0x98) = *(arg2 + 0x48);
                *(iVar1 + 0x84) = *(arg2 + 0x50);
                mutex_unlock(iVar6 + 0x40);
                return 0;
            }
            iVar3 = ___ratelimit(obj.msm_ext_disp_audio_device_set._rs.49,"msm_ext_disp_audio_device_set");
            if (iVar3 == 0) {
                return 0xffffffea;
            }
            uVar4 = *(iVar1 + 0x18);
            pcVar5 = "%s: DP audio control index invalid\n";
        }
        _dev_err(uVar4,pcVar5,"msm_ext_disp_audio_device_set");
    }
    else {
        iVar3 = ___ratelimit(obj.msm_ext_disp_audio_device_set._rs,"msm_ext_disp_audio_device_set");
        if (iVar3 != 0) {
            _dev_err(*(iVar1 + 0x18),"%s: invalid dai id: %d\n","msm_ext_disp_audio_device_set",uVar2);
        }
    }
    return 0xffffffea;
}


// ===== sym.msm_ext_disp_audio_codec_rx_dai_startup @ 0x08002e7c (size 588) =====

void sym.msm_ext_disp_audio_codec_rx_dai_startup(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    uint uVar4;
    int64_t extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *unaff_x20;
    code *unaff_x21;
    code *pcVar5;
    ulong *puVar6;
    ulong *puVar7;
    ulong unaff_x30;
    uint uStack_98;
    uint uStack_94;
    uint uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    ulong *puStack_70;
    code *pcStack_68;
    ulong *puStack_60;
    int64_t iStack_58;
    uint uStack_48;
    ulong uStack_44;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_44 = 0;
    puVar6 = *(*(*(arg1 + 0x58) + 0x18) + 0x98);
    if (puVar6 == NULL) {
        iVar3 = ___ratelimit(obj.msm_ext_disp_audio_codec_rx_dai_startup._rs,"msm_ext_disp_audio_codec_rx_dai_startup")
        ;
        if (iVar3 != 0) {
            _dev_err(*(arg1 + 0x10),"%s() codec_data is null\n","msm_ext_disp_audio_codec_rx_dai_startup");
        }
code_r0x08002fcc:
        uVar4 = 0xffffffea;
    }
    else {
        unaff_x20 = puVar6 + 8;
        mutex_lock(unaff_x20);
        uVar1 = *(arg1 + 8);
        uStack_48 = 0x28;
        if (uVar1 != 4) {
            uStack_48 = 0x2c;
        }
        if (4 < uVar1) goto code_r0x080030c0;
        uStack_44 = CONCAT44(*(puVar6 + uVar1 * 4 + 0x84),*(puVar6 + uVar1 * 4 + 0x98));
        iVar3 = msm_ext_disp_select_audio_codec(*puVar6,&uStack_48);
        unaff_x21 = puVar6[3];
        if ((unaff_x21 == NULL) || (iVar3 != 0)) {
            iVar3 = ___ratelimit(obj.msm_ext_disp_audio_codec_rx_dai_startup._rs.66,
                                 "msm_ext_disp_audio_codec_rx_dai_startup");
            if (iVar3 != 0) {
                _dev_err(*(arg1 + 0x10),"%s() cable_status is null\n","msm_ext_disp_audio_codec_rx_dai_startup");
            }
            mutex_unlock(unaff_x20);
            goto code_r0x08002fcc;
        }
        __cfi_slowpath_diag(0xc5c87252ce7e5351,unaff_x21,0x8000b00);
        puVar7 = puVar6 + 0xe;
        uVar4 = (*unaff_x21)(*puVar6,1);
        if (4 < *(arg1 + 8)) {
code_r0x080030c0:
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x5512,0x80030c4);
            (*pcVar5)();
        }
        *(puVar7 + *(arg1 + 8) * 4) = uVar4;
        mutex_unlock(unaff_x20);
        if (4 < *(arg1 + 8)) goto code_r0x080030c0;
        iVar3 = *(puVar7 + *(arg1 + 8) * 4);
        puVar6 = puVar7;
        if (iVar3 < 0) {
            iVar3 = ___ratelimit(obj.msm_ext_disp_audio_codec_rx_dai_startup._rs.68,
                                 "msm_ext_disp_audio_codec_rx_dai_startup");
            if (iVar3 != 0) {
                if (4 < *(arg1 + 8)) goto code_r0x080030c0;
                _dev_err(*(arg1 + 0x10),"%s() ext disp core is not ready (ret val = %d)\n",
                         "msm_ext_disp_audio_codec_rx_dai_startup",*(puVar7 + *(arg1 + 8) * 4));
            }
            if (4 < *(arg1 + 8)) goto code_r0x080030c0;
            uVar4 = *(puVar7 + *(arg1 + 8) * 4);
        }
        else if (iVar3 == 0) {
            iVar3 = ___ratelimit(obj.msm_ext_disp_audio_codec_rx_dai_startup._rs.70,
                                 "msm_ext_disp_audio_codec_rx_dai_startup");
            if (iVar3 != 0) {
                if (4 < *(arg1 + 8)) goto code_r0x080030c0;
                _dev_err(*(arg1 + 0x10),"%s() ext disp cable is not connected (ret val = %d)\n",
                         "msm_ext_disp_audio_codec_rx_dai_startup",*(puVar7 + *(arg1 + 8) * 4));
            }
            uVar4 = 0xffffffed;
        }
        else {
            uVar4 = 0;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(uVar4);
    *extraout_x18 = sym.msm_ext_disp_audio_codec_rx_dai_shutdown;
    pcStack_78 = sym.msm_ext_disp_audio_codec_rx_dai_shutdown;
    iVar2 = sp_el0;
    iStack_88 = *(iVar2 + 0x5e0);
    puVar7 = *(*(*(extraout_x1 + 0x58) + 0x18) + 0x98);
    puStack_80 = &stack0xffffffffffffffd0;
    puStack_70 = puVar6;
    pcStack_68 = unaff_x21;
    puStack_60 = unaff_x20;
    iStack_58 = arg1;
    if (puVar7 == NULL) {
        iVar3 = ___ratelimit(obj.msm_ext_disp_audio_codec_rx_dai_shutdown._rs,
                             "msm_ext_disp_audio_codec_rx_dai_shutdown");
        if (iVar3 != 0) {
            _dev_err(*(extraout_x1 + 0x10),"%s() codec_data is null\n","msm_ext_disp_audio_codec_rx_dai_shutdown");
        }
    }
    else {
        mutex_lock(puVar7 + 8);
        uVar1 = *(extraout_x1 + 8);
        uStack_98 = 0x28;
        if (uVar1 != 4) {
            uStack_98 = 0x2c;
        }
        if (4 < uVar1) goto code_r0x080032a0;
        uStack_94 = *(puVar7 + uVar1 * 4 + 0x98);
        uStack_90 = *(puVar7 + uVar1 * 4 + 0x84);
        iVar3 = msm_ext_disp_select_audio_codec(*puVar7,&uStack_98);
        if (((puVar7[5] == 0) || (pcVar5 = puVar7[3], pcVar5 == NULL)) || (iVar3 != 0)) {
            iVar3 = ___ratelimit(obj.msm_ext_disp_audio_codec_rx_dai_shutdown._rs.72,
                                 "msm_ext_disp_audio_codec_rx_dai_shutdown");
            if (iVar3 != 0) {
                _dev_err(*(extraout_x1 + 0x10),"%s: teardown_done or cable_status is null\n",
                         "msm_ext_disp_audio_codec_rx_dai_shutdown");
            }
        }
        else {
            __cfi_slowpath_diag(0xc5c87252ce7e5351,pcVar5,0x8000b20);
            iVar3 = (*pcVar5)(*puVar7,0);
            if ((iVar3 < 0) &&
               (iVar3 = ___ratelimit(obj.msm_ext_disp_audio_codec_rx_dai_shutdown._rs.74,
                                     "msm_ext_disp_audio_codec_rx_dai_shutdown"), iVar3 != 0)) {
                _dev_err(*(extraout_x1 + 0x10),"%s: ext disp core had problems releasing audio flag\n",
                         "msm_ext_disp_audio_codec_rx_dai_shutdown");
            }
            pcVar5 = puVar7[5];
            __cfi_slowpath_diag(0xbd9f1449cc54c886,pcVar5,0x8000b40);
            (*pcVar5)(*puVar7);
        }
        mutex_unlock(puVar7 + 8);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_88) {
        return;
    }
    __stack_chk_fail();
code_r0x080032a0:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x80032a4);
    (*pcVar5)();
}


// ===== sym.msm_ext_disp_audio_codec_rx_dai_shutdown @ 0x080030c8 (size 476) =====

void sym.msm_ext_disp_audio_codec_rx_dai_shutdown(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong *puVar5;
    ulong unaff_x30;
    uint uStack_48;
    uint uStack_44;
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    puVar5 = *(*(*(arg1 + 0x58) + 0x18) + 0x98);
    if (puVar5 == NULL) {
        iVar3 = ___ratelimit(obj.msm_ext_disp_audio_codec_rx_dai_shutdown._rs,
                             "msm_ext_disp_audio_codec_rx_dai_shutdown");
        if (iVar3 != 0) {
            _dev_err(*(arg1 + 0x10),"%s() codec_data is null\n","msm_ext_disp_audio_codec_rx_dai_shutdown");
        }
    }
    else {
        mutex_lock(puVar5 + 8);
        uVar1 = *(arg1 + 8);
        uStack_48 = 0x28;
        if (uVar1 != 4) {
            uStack_48 = 0x2c;
        }
        if (4 < uVar1) goto code_r0x080032a0;
        uStack_44 = *(puVar5 + uVar1 * 4 + 0x98);
        uStack_40 = *(puVar5 + uVar1 * 4 + 0x84);
        iVar3 = msm_ext_disp_select_audio_codec(*puVar5,&uStack_48);
        if (((puVar5[5] == 0) || (pcVar4 = puVar5[3], pcVar4 == NULL)) || (iVar3 != 0)) {
            iVar3 = ___ratelimit(obj.msm_ext_disp_audio_codec_rx_dai_shutdown._rs.72,
                                 "msm_ext_disp_audio_codec_rx_dai_shutdown");
            if (iVar3 != 0) {
                _dev_err(*(arg1 + 0x10),"%s: teardown_done or cable_status is null\n",
                         "msm_ext_disp_audio_codec_rx_dai_shutdown");
            }
        }
        else {
            __cfi_slowpath_diag(0xc5c87252ce7e5351,pcVar4,0x8000b20);
            iVar3 = (*pcVar4)(*puVar5,0);
            if ((iVar3 < 0) &&
               (iVar3 = ___ratelimit(obj.msm_ext_disp_audio_codec_rx_dai_shutdown._rs.74,
                                     "msm_ext_disp_audio_codec_rx_dai_shutdown"), iVar3 != 0)) {
                _dev_err(*(arg1 + 0x10),"%s: ext disp core had problems releasing audio flag\n",
                         "msm_ext_disp_audio_codec_rx_dai_shutdown");
            }
            pcVar4 = puVar5[5];
            __cfi_slowpath_diag(0xbd9f1449cc54c886,pcVar4,0x8000b40);
            (*pcVar4)(*puVar5);
        }
        mutex_unlock(puVar5 + 8);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail();
code_r0x080032a0:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x80032a4);
    (*pcVar4)();
}


// ===== sym.msm_ext_disp_audio_codec_rx_dai_hw_params @ 0x080032a4 (size 968) =====

uchar * sym.msm_ext_disp_audio_codec_rx_dai_hw_params(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *puVar1;
    code *pcVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    uchar *puVar6;
    uint uVar7;
    int64_t iVar8;
    uint uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    uint uStack_90;
    int iStack_8c;
    uint uStack_88;
    uint uStack_84;
    ulong uStack_80;
    uint uStack_78;
    uint uStack_74;
    uint uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    uStack_70 = 0;
    iVar4 = *(arg2 + 0x11c);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    puVar10 = *(*(*(arg3 + 0x58) + 0x18) + 0x98);
    if (puVar10 == NULL) {
        iVar4 = ___ratelimit(obj.msm_ext_disp_audio_codec_rx_dai_hw_params._rs,
                             "msm_ext_disp_audio_codec_rx_dai_hw_params");
        if (iVar4 != 0) {
            _dev_err(*(arg3 + 0x10),"%s() codec_data is null\n","msm_ext_disp_audio_codec_rx_dai_hw_params");
            uVar5 = 0xffffffea;
            goto code_r0x080035a8;
        }
code_r0x080033d4:
        uVar5 = 0xffffffea;
        goto code_r0x080035a8;
    }
    puVar1 = puVar10 + 8;
    mutex_lock(puVar1);
    uVar5 = *(arg3 + 8);
    uVar9 = 0x28;
    if (uVar5 != 4) {
        uVar9 = 0x2c;
    }
    uStack_78 = uVar9;
    if (4 < uVar5) goto code_r0x08003664;
    uStack_74 = *(puVar10 + uVar5 * 4 + 0x98);
    uStack_70 = *(puVar10 + uVar5 * 4 + 0x84);
    iVar3 = msm_ext_disp_select_audio_codec(*puVar10,&stack0xffffffffffffff88);
    if ((puVar10[1] == 0) || (iVar3 != 0)) {
        iVar4 = ___ratelimit(obj.msm_ext_disp_audio_codec_rx_dai_hw_params._rs.76,
                             "msm_ext_disp_audio_codec_rx_dai_hw_params");
        if (iVar4 != 0) {
            _dev_err(*(arg3 + 0x10),"%s: audio_info_setup is null\n","msm_ext_disp_audio_codec_rx_dai_hw_params");
        }
        mutex_unlock(puVar1);
        uVar5 = 0xffffffea;
        goto code_r0x080035a8;
    }
    mutex_unlock(puVar1);
    if (4 < *(arg3 + 8)) goto code_r0x08003664;
    iVar3 = *(puVar10 + *(arg3 + 8) * 4 + 0x70);
    if (iVar3 < 0) {
        iVar4 = ___ratelimit(obj.msm_ext_disp_audio_codec_rx_dai_hw_params._rs.78,
                             "msm_ext_disp_audio_codec_rx_dai_hw_params");
        if (iVar4 != 0) {
            if (4 < *(arg3 + 8)) goto code_r0x08003664;
            _dev_err(*(arg3 + 0x10),"%s() ext disp core is not ready (ret val = %d)\n",
                     "msm_ext_disp_audio_codec_rx_dai_hw_params",*(puVar10 + *(arg3 + 8) * 4 + 0x70));
        }
        if (4 < *(arg3 + 8)) goto code_r0x08003664;
        uVar5 = *(puVar10 + *(arg3 + 8) * 4 + 0x70);
        goto code_r0x080035a8;
    }
    if (iVar3 == 0) {
        iVar4 = ___ratelimit(obj.msm_ext_disp_audio_codec_rx_dai_hw_params._rs.79,
                             "msm_ext_disp_audio_codec_rx_dai_hw_params");
        if (iVar4 == 0) {
            uVar5 = 0xffffffed;
        }
        else {
            if (4 < *(arg3 + 8)) goto code_r0x08003664;
            _dev_err(*(arg3 + 0x10),"%s() ext disp cable is not connected (ret val = %d)\n",
                     "msm_ext_disp_audio_codec_rx_dai_hw_params",*(puVar10 + *(arg3 + 8) * 4 + 0x70));
            uVar5 = 0xffffffed;
        }
        goto code_r0x080035a8;
    }
    if (6 < iVar4 - 2U) {
        iVar3 = ___ratelimit(obj.msm_ext_disp_audio_codec_rx_dai_hw_params._rs.80,
                             "msm_ext_disp_audio_codec_rx_dai_hw_params");
        if (iVar3 != 0) {
            _dev_err(*(arg3 + 0x10),"invalid Channels = %u\n",iVar4);
            uVar5 = 0xffffffea;
            goto code_r0x080035a8;
        }
        goto code_r0x080033d4;
    }
    uStack_88 = 0;
    //switch table (6 cases) at 0x8000b80
    uVar7 = 2;
    iVar3 = iVar4;
    switch(*((iVar4 - 2U) + 0x8000b80) * 4 + 0x80033b0) {
    case 0x80033b4:
        uVar7 = 6;
        break;
    case 0x80034c4:
        uVar7 = 10;
        break;
    case 0x80034d0:
        uVar7 = 0xb;
        break;
    case 0x80034e0:
        uVar7 = 0x12;
        goto code_r0x080034f0;
    case 0x80034ec:
        uVar7 = 0x13;
code_r0x080034f0:
        iVar3 = 0xf;
    case 0x80034f8:
        goto code_r0x080034f8;
    case 0x8003504:
        goto code_r0x08003504;
    }
    iVar3 = 7;
code_r0x080034f8:
    uStack_88 = uVar7;
    uStack_80 = CONCAT44(iVar3,uStack_80);
code_r0x08003504:
    uStack_90 = *(arg2 + 0x128);
    uStack_84 = 0;
    iStack_8c = iVar4;
    mutex_lock(puVar1);
    uStack_78 = uVar9;
    if (4 < *(arg3 + 8)) {
code_r0x08003664:
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5512,0x8003668);
        (*pcVar2)();
    }
    iVar8 = *(arg3 + 8) * 4;
    uStack_74 = *(puVar10 + iVar8 + 0x98);
    uStack_70 = *(puVar10 + iVar8 + 0x84);
    uVar5 = msm_ext_disp_select_audio_codec(*puVar10,&stack0xffffffffffffff88);
    if (uVar5 == 0) {
        pcVar2 = puVar10[1];
        __cfi_slowpath_diag(0x7d994c24137dc6a1,pcVar2,0x8000b60);
        uVar5 = (*pcVar2)(*puVar10,&stack0xffffffffffffff70);
    }
    mutex_unlock(puVar1);
    if ((uVar5 < 0) &&
       (iVar4 = ___ratelimit(obj.msm_ext_disp_audio_codec_rx_dai_hw_params._rs.82,
                             "msm_ext_disp_audio_codec_rx_dai_hw_params"), iVar4 != 0)) {
        _dev_err(*(arg3 + 0x10),"%s() ext disp core is not ready, rc: %d\n",
                 "msm_ext_disp_audio_codec_rx_dai_hw_params",uVar5);
    }
code_r0x080035a8:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_68) {
        auVar11 = __stack_chk_fail();
        puVar6 = auVar11._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar6 != NULL) {
            switch(*puVar6) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar6,auVar11._8_8_,0);
                break;
            default:
                return puVar6;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x80036c4);
        (*pcVar2)();
    }
    return uVar5;
}


// ===== sym.__cfi_check_fail @ 0x0800366c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080036b0

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
    //switch table (4 cases) at 0x8000b87
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80036c4);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080036d4 (size 100) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __platform_driver_register
                      (reloc.msm_ext_disp_audio_codec_rx_plat_probe.53a2252512e65e323672c106c884d416.cfi_jt,
                       obj.__this_module);
    if (iVar1 != 0) {
        _printk(0x800137b,"msm_ext_disp_audio_codec_rx_init",iVar1);
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x08003738 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.msm_ext_disp_audio_codec_rx_plat_probe.53a2252512e65e323672c106c884d416.cfi_jt);
    return;
}

