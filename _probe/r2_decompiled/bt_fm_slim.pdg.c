// decompiled from bt_fm_slim by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 908) =====

//WARNING: Switch with 1 destination removed at 0x08003638

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x30fb635ed9392797) {
            if (arg1 < -0x5909b1e753b06f4f) {
                if (arg1 == -0x749213c658cf941a) {
                    pcVar2 = sym.snd_soc_info_volsw.cfi_jt;
                }
                else {
                    if (arg1 != -0x711344a4f390b2f1) goto code_r0x080035f8;
                    pcVar2 = sym.btfm_slim_remove.19d0651436cf38a125eb062d94492fe4.cfi_jt;
                }
            }
            else if (arg1 == -0x5909b1e753b06f4f) {
                pcVar2 = sym.btfm_slim_codec_read.a359e88802e94561ab50c157ecc72b8e.cfi_jt;
            }
            else {
                if (arg1 != -0x535698a4ed78ea9b) goto code_r0x080035f8;
                pcVar2 = sym.__typeid__ZTSFiP8btfmslimE_global_addr;
            }
        }
        else if (arg1 < -0xf2d15659b6de7a9) {
            if (arg1 == -0x30fb635ed9392797) {
                pcVar2 = sym.btfm_slim_status.19d0651436cf38a125eb062d94492fe4.cfi_jt;
            }
            else {
                if (arg1 != -0x1dc533967f00c5ac) goto code_r0x080035f8;
                pcVar2 = sym.btfm_slim_dai_set_channel_map.a359e88802e94561ab50c157ecc72b8e.cfi_jt;
            }
        }
        else if (arg1 == -0xf2d15659b6de7a9) {
            pcVar2 = sym.btfm_slim_codec_probe.a359e88802e94561ab50c157ecc72b8e.cfi_jt;
        }
        else {
            if (arg1 == -0x1410433e4ed4949) {
                if ((pcVar1 + -0x8002410 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x080035f8;
            }
            if (arg1 != -0x890743871a4a53) goto code_r0x080035f8;
            pcVar2 = sym.btfm_slim_ioctl.19d0651436cf38a125eb062d94492fe4.cfi_jt;
        }
    }
    else if (arg1 < 0x5a4b3c1fa7130354) {
        if (arg1 < 0x2882621ee1337d31) {
            if (arg1 == 0x2b3a43e29242445) {
                pcVar2 = sym.init_module.cfi_jt;
            }
            else {
                if (arg1 != 0x24f46dfc6afa3be1) goto code_r0x080035f8;
                pcVar2 = sym.btfm_slim_codec_write.a359e88802e94561ab50c157ecc72b8e.cfi_jt;
            }
        }
        else {
            if (arg1 == 0x2882621ee1337d31) {
                if ((pcVar1 + -0x8002430 >> 3 | pcVar1 << 0x3d) < 4) {
                    return;
                }
                goto code_r0x080035f8;
            }
            if (arg1 == 0x3a2d6f9b27d89e39) {
                pcVar2 = sym.btfm_slim_dai_get_channel_map.a359e88802e94561ab50c157ecc72b8e.cfi_jt;
            }
            else {
                if (arg1 != 0x5506a421f3afaaeb) goto code_r0x080035f8;
                pcVar2 = sym.__typeid__ZTSFiP8btfmslimhhhE_global_addr;
            }
        }
    }
    else if (arg1 < 0x74f0ccf11b57c4f0) {
        if (arg1 == 0x5a4b3c1fa7130354) {
            pcVar2 = sym.btfm_slim_dai_shutdown.a359e88802e94561ab50c157ecc72b8e.cfi_jt;
        }
        else {
            if (arg1 != 0x616834158b2017a8) goto code_r0x080035f8;
            pcVar2 = sym.btfm_slim_probe.19d0651436cf38a125eb062d94492fe4.cfi_jt;
        }
    }
    else if (arg1 == 0x74f0ccf11b57c4f0) {
        pcVar2 = sym.btfm_slim_dai_hw_params.a359e88802e94561ab50c157ecc72b8e.cfi_jt;
    }
    else if (arg1 == 0x7e04a0fb7ad8bcd5) {
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    else {
        if (arg1 != 0x7e6c99e1529760f9) goto code_r0x080035f8;
        pcVar2 = sym.btfm_slim_codec_remove.a359e88802e94561ab50c157ecc72b8e.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080035f8:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800364c);
    (*pcVar1)();
}


// ===== sym.btfm_slim_codec_read.a359e88802e94561ab50c157ecc72b8e.cfi_jt @ 0x08002398 (size 8) =====

ulong sym.btfm_slim_codec_read.a359e88802e94561ab50c157ecc72b8e.cfi_jt(void)

{
    return 0;
}


// ===== sym.btfm_slim_status.19d0651436cf38a125eb062d94492fe4.cfi_jt @ 0x080023a0 (size 8) =====

int sym.btfm_slim_status.19d0651436cf38a125eb062d94492fe4.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.btfm_slim_register_codec(*(param_1 + 0x98));
    if (iVar1 != 0) {
        _printk(0x80012a3,"btfm_slim_status");
    }
    return iVar1;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080023a8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    slim_driver_unregister(reloc.btfm_slim_probe.19d0651436cf38a125eb062d94492fe4.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080023b0 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __slim_driver_register(reloc.btfm_slim_probe.19d0651436cf38a125eb062d94492fe4.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.btfm_slim_codec_remove.a359e88802e94561ab50c157ecc72b8e.cfi_jt @ 0x080023b8 (size 8) =====

void sym.btfm_slim_codec_remove.a359e88802e94561ab50c157ecc72b8e.cfi_jt(void)

{
    return;
}


// ===== sym.btfm_slim_dai_set_channel_map.a359e88802e94561ab50c157ecc72b8e.cfi_jt @ 0x080023c0 (size 8) =====

ulong sym.btfm_slim_dai_set_channel_map.a359e88802e94561ab50c157ecc72b8e.cfi_jt
                (int64_t param_1,uint32_t param_2,int64_t param_3,uint32_t param_4,int64_t param_5)

{
    bool bVar1;
    int64_t iVar2;
    int16_t *piVar3;
    int64_t iVar4;
    uint32_t uVar5;
    
    iVar2 = *(*(*(param_1 + 0x58) + 0x18) + 0x98);
    if (iVar2 == 0) {
        return 0xffffffea;
    }
    iVar4 = *(iVar2 + 0x448);
    iVar2 = *(iVar2 + 0x450);
    if (iVar4 == 0 || iVar2 == 0) {
        return 0;
    }
    if ((param_4 != 0) && (*(iVar4 + 0x10) != 0xff)) {
        piVar3 = iVar4 + 0x58;
        uVar5 = 1;
        do {
            *(piVar3 + -0x23) = *(param_5 + (-(uVar5 - 1 >> 0x1f) & 0xfffffffc00000000 | uVar5 - 1 << 2));
            if (*piVar3 == 0xff) break;
            bVar1 = uVar5 < param_4;
            piVar3 = piVar3 + 0x24;
            uVar5 = uVar5 + 1;
        } while (bVar1);
    }
    if ((param_2 != 0) && (*(iVar2 + 0x10) != 0xff)) {
        piVar3 = iVar2 + 0x58;
        uVar5 = 1;
        do {
            *(piVar3 + -0x23) = *(param_3 + (-(uVar5 - 1 >> 0x1f) & 0xfffffffc00000000 | uVar5 - 1 << 2));
            if (*piVar3 == 0xff) {
                return 0;
            }
            bVar1 = uVar5 < param_2;
            piVar3 = piVar3 + 0x24;
            uVar5 = uVar5 + 1;
        } while (bVar1);
    }
    return 0;
}


// ===== sym.btfm_slim_dai_shutdown.a359e88802e94561ab50c157ecc72b8e.cfi_jt @ 0x080023c8 (size 8) =====

void sym.btfm_slim_dai_shutdown.a359e88802e94561ab50c157ecc72b8e.cfi_jt(ulong param_1,int64_t param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t *puVar3;
    uint32_t *arg2;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(param_2 + 8);
    if (uVar2 < 4) {
        arg1 = *(*(*(param_2 + 0x58) + 0x18) + 0x98);
        puVar3 = *(arg1 + *(uVar2 * 8 + 0x8001630));
        arg2 = puVar3;
        if (((*puVar3 != 4 && *puVar3 != uVar2) && (arg2 = puVar3 + 0x12, *arg2 != 4 && *arg2 != uVar2)) &&
           (arg2 = puVar3 + 0x24, *arg2 != 4 && *arg2 != uVar2)) {
            uVar1 = puVar3[0x36];
            arg2 = puVar3 + 0x36;
            if (uVar1 != uVar2 && uVar1 != 4) {
                arg2 = puVar3 + 0x48;
            }
        }
        if ((arg2[4] == 0xff) || (*arg2 == 4)) {
            _printk(0x8000d48,"btfm_slim_dai_shutdown");
        }
        else {
            sym.btfm_slim_disable_ch(arg1,arg2,0x1010000 >> (uVar2 << 3 & 0x1f),0x1010102 >> (uVar2 << 3 & 0x1f));
            sym.btfm_slim_hw_deinit(arg1);
        }
    }
    else {
        _printk(0x8000f25,"btfm_slim_dai_shutdown");
    }
    return;
}


// ===== sym.btfm_slim_dai_hw_params.a359e88802e94561ab50c157ecc72b8e.cfi_jt @ 0x080023d0 (size 8) =====

ulong sym.btfm_slim_dai_hw_params.a359e88802e94561ab50c157ecc72b8e.cfi_jt
                (int64_t param_1,int64_t param_2,int64_t param_3)

{
    uint uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(param_2 + 0x24);
    iVar4 = *(*(*(param_3 + 0x58) + 0x18) + 0x98);
    if (uVar2 == 0) {
        uVar2 = *(param_2 + 0x28);
        if (uVar2 == 0) {
            uVar3 = 0;
            goto code_r0x08003bcc;
        }
        uVar3 = 0x20;
    }
    else {
        uVar3 = 0;
    }
    uVar2 = (uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x55555555) << 1;
    uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar3 = LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10) | uVar3;
code_r0x08003bcc:
    uVar1 = snd_pcm_format_width(uVar3);
    *(iVar4 + 0x440) = uVar1;
    *(iVar4 + 0x444) = *(param_1 + 0x3c);
    return 0;
}


// ===== sym.__typeid__ZTSFiP8btfmslimE_global_addr @ 0x080023d8 (size 8) =====

uint32_t sym.__typeid__ZTSFiP8btfmslimE_global_addr(int64_t param_1)

{
    ulong uVar1;
    int iVar2;
    uint32_t uVar3;
    ulong *in_x18;
    uint32_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        iVar2 = sym.btfm_slim_read(param_1,1,0);
        if (iVar2 < 0) {
            _printk(0x8000b48,"btfm_slim_slave_hw_init",iVar2,1);
        }
        uVar3 = sym.btfm_slim_read(param_1,2,0);
        uVar1 = 0x8000b48;
        if (-1 < uVar3) {
            uVar1 = 0x8000ab7;
        }
        uVar4 = uVar3 & uVar3 >> 0x1f;
        _printk(uVar1,"btfm_slim_slave_hw_init",uVar3,2);
    }
    return uVar4;
}


// ===== sym.btfm_slim_probe.19d0651436cf38a125eb062d94492fe4.cfi_jt @ 0x080023e0 (size 8) =====

int sym.btfm_slim_probe.19d0651436cf38a125eb062d94492fe4.cfi_jt(int64_t *param_1)

{
    int iVar1;
    int iVar2;
    int64_t *piVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = param_1[0xe];
    if (iVar4 == 0) {
        iVar4 = *param_1;
    }
    _printk(0x80009ec,"btfm_slim_probe",iVar4);
    *(param_1 + 0x3a5) = 1;
    dev_set_name(param_1,0x8000a3e,"btfmslim_slave");
    iVar4 = param_1[0xe];
    if (iVar4 == 0) {
        iVar4 = *param_1;
    }
    _printk(0x80009ec,"btfm_slim_probe",iVar4);
    _printk(0x8000a41,"btfm_slim_probe");
    if (param_1[0x73] == 0) {
        iVar1 = -0x16;
    }
    else {
        piVar3 = kmem_cache_alloc_trace(_mutex_lock,0xdc0,0x468);
        if (piVar3 == NULL) {
            _printk(0x80011b4,"btfm_slim_probe");
            iVar1 = -0xc;
        }
        else {
            piVar3[1] = param_1;
            piVar3[0x89] = obj.slave_rxport;
            piVar3[0x8a] = obj.slave_txport;
            piVar3[0x8b] = sym.__typeid__ZTSFiP8btfmslimE_global_addr;
            piVar3[0x8c] = sym.__typeid__ZTSFiP8btfmslimhhhE_global_addr;
            __mutex_init(piVar3 + 0x7a,"&btfm_slim->io_lock",
                         reloc.btfm_slim_status.19d0651436cf38a125eb062d94492fe4.cfi_jt);
            __mutex_init(piVar3 + 0x80,"&btfm_slim->xfer_lock",
                         reloc.btfm_slim_status.19d0651436cf38a125eb062d94492fe4.cfi_jt);
            param_1[0x13] = piVar3;
            *piVar3 = param_1;
            iVar1 = btpower_register_slimdev(param_1);
            if (iVar1 < 0) {
                iVar1 = -0x205;
            }
            else {
                _segment.ehdr = piVar3;
                iVar2 = __register_chrdev(0,0,0x100,"btfm_slim",obj.bt_dev_fops);
                _segment.ehdr = CONCAT44(*0x8000004,iVar2);
                if (iVar2 < 0) {
                    _printk(0x8000e97,"btfm_slim_probe","btfm_slim_probe");
                }
                else {
                    _segment.ehdr = __class_create(obj.__this_module,"btfmslim-dev",obj.btfm_slim_probe.__key.42);
                    if (_segment.ehdr < 0xfffffffffffff001) {
                        iVar4 = device_create(_segment.ehdr,0,_segment.ehdr << 0x14,0,"btfmslim");
                        if (iVar4 != 0) {
                            return iVar1;
                        }
                        _printk(0x8000e97,"btfm_slim_probe","btfm_slim_probe");
                        class_destroy(_segment.ehdr);
                    }
                    else {
                        _printk(0x80011d4,"btfm_slim_probe","btfm_slim_probe");
                    }
                    __unregister_chrdev(_segment.ehdr & 0xffffffff,0,0x100,"btfm_slim");
                }
                iVar1 = -1;
            }
            snd_soc_unregister_component(param_1);
            kfree(piVar3);
        }
    }
    return iVar1;
}


// ===== sym.btfm_slim_ioctl.19d0651436cf38a125eb062d94492fe4.cfi_jt @ 0x080023e8 (size 8) =====

int64_t sym.btfm_slim_ioctl.19d0651436cf38a125eb062d94492fe4.cfi_jt(ulong param_1,int param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (param_2 != 0xbfac) {
        return 0;
    }
    *in_x18 = unaff_x30;
    _printk(0x80010f5,"btfm_slim_ioctl");
    iVar1 = sym.btfm_slim_hw_init(_segment.ehdr);
    return iVar1;
}


// ===== sym.__typeid__ZTSFiP8btfmslimhhhE_global_addr @ 0x080023f0 (size 8) =====

int sym.__typeid__ZTSFiP8btfmslimhhhE_global_addr(int64_t param_1,uint32_t param_2,char param_3,char param_4)

{
    uint32_t uVar1;
    bool bVar2;
    int iVar3;
    uint32_t uVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_3 == '\0') {
        uVar7 = param_2 & 0xff;
        if (param_4 != '\0') {
            if (uVar7 < 6) {
                if (uVar7 == 0) {
                    iVar3 = sym.btfm_slim_write(param_1,0x100,1,0);
                    if (iVar3 < 0) {
                        uVar4 = 0x100;
                        goto code_r0x08004094;
                    }
                }
                else if ((1 << (param_2 & 0x1f) & 0x36U) != 0) {
                    uVar4 = param_2 & 0xff;
                    uVar6 = 0x10;
                    if (uVar4 != 4) {
                        uVar6 = 6;
                    }
                    uVar1 = 0x20;
                    if (uVar4 != 5) {
                        uVar1 = uVar6;
                    }
                    uVar4 = uVar4 * 4 + 0x100;
                    _printk(0x8000ff0,"btfm_slim_slave_enable_port",uVar1,uVar4);
                    iVar3 = sym.btfm_slim_write(param_1,uVar4,uVar1,0);
                    if (iVar3 < 0) goto code_r0x08004094;
                }
            }
            uVar4 = uVar7 + 0x1f0;
            iVar3 = sym.btfm_slim_write(param_1,uVar4,3,0);
            if (iVar3 < 0) goto code_r0x08004094;
        }
        uVar4 = uVar7 + 0x50;
    }
    else {
        if (((param_4 != '\0') && (*(param_1 + 0x43c) != 0xac44)) && (*(param_1 + 0x43c) != 0x15888)) {
            bVar2 = 0x17 < (param_2 & 0xff);
            iVar3 = -0x10;
            if (bVar2) {
                iVar3 = -0x18;
            }
            iVar5 = 0x180;
            if (bVar2) {
                iVar5 = 0x181;
            }
            uVar4 = iVar5 + (iVar3 + param_2 & 0xff) * 4;
            iVar3 = sym.btfm_slim_write(param_1,uVar4,1 << (iVar3 + param_2 & 0x1f),0);
            if (iVar3 < 0) goto code_r0x08004094;
        }
        uVar4 = (param_2 & 0xff) + 0x30;
    }
    if ((param_2 & 0xff) < 6) {
        if ((1 << (param_2 & 0x1f) & 0x36U) == 0) {
            if ((param_2 & 0xff) != 0) goto code_r0x08004038;
            uVar7 = 2;
            goto code_r0x0800403c;
        }
        uVar6 = param_4 != '\0' | 0x10;
    }
    else {
code_r0x08004038:
        uVar7 = 0x16;
code_r0x0800403c:
        uVar6 = 0;
        if (param_4 != '\0') {
            uVar6 = uVar7;
        }
        uVar6 = uVar6 | param_4 != '\0';
        if (((param_2 & 0xff) == 0) && (param_4 != '\0')) {
            _printk(0x8000b6c,"btfm_slim_slave_enable_port",uVar6,uVar4);
        }
    }
    iVar3 = sym.btfm_slim_write(param_1,uVar4,uVar6,0);
    if (-1 < iVar3) {
        return iVar3;
    }
code_r0x08004094:
    _printk(0x8000c78,"btfm_slim_slave_enable_port",iVar3,uVar4);
    return iVar3;
}


// ===== sym.btfm_slim_codec_probe.a359e88802e94561ab50c157ecc72b8e.cfi_jt @ 0x080023f8 (size 8) =====

ulong sym.btfm_slim_codec_probe.a359e88802e94561ab50c157ecc72b8e.cfi_jt(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    snd_soc_add_component_controls(param_1,obj.status_controls,2);
    return 0;
}


// ===== sym.snd_soc_info_volsw.cfi_jt @ 0x08002400 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_info_volsw.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.btfm_slim_codec_write.a359e88802e94561ab50c157ecc72b8e.cfi_jt @ 0x08002408 (size 8) =====

ulong sym.btfm_slim_codec_write.a359e88802e94561ab50c157ecc72b8e.cfi_jt(void)

{
    return 0;
}


// ===== sym.btfm_slim_dai_prepare.a359e88802e94561ab50c157ecc72b8e.cfi_jt @ 0x08002410 (size 8) =====

ulong sym.btfm_slim_dai_prepare.a359e88802e94561ab50c157ecc72b8e.cfi_jt(int64_t param_1,ulong *param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    ulong uVar3;
    uint32_t *arg2;
    uint32_t *puVar4;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(param_1 + 0x3c);
    obj.bt_soc_enable_status = 0x0;
    arg1 = *(*(param_2[0xb] + 0x18) + 0x98);
    *(arg1 + 0x444) = uVar1;
    _printk(0x80008a6,"btfm_slim_dai_prepare",*param_2,*(param_2 + 1),*(param_2 + 9),uVar1 & 0xffff);
    *(arg1 + 0x43c) = *(param_2 + 9);
    uVar1 = *(param_2 + 1);
    if (uVar1 < 4) {
        puVar4 = *(arg1 + *(uVar1 * 8 + 0x8001630));
        arg2 = puVar4;
        if ((*puVar4 != 4) && (*puVar4 != uVar1)) {
            arg2 = puVar4 + 0x12;
            if ((*arg2 != 4) && (*arg2 != uVar1)) {
                arg2 = puVar4 + 0x24;
                if ((*arg2 != 4) && (*arg2 != uVar1)) {
                    uVar2 = puVar4[0x36];
                    arg2 = puVar4 + 0x36;
                    if (uVar2 != uVar1 && uVar2 != 4) {
                        arg2 = puVar4 + 0x48;
                    }
                }
            }
        }
        if ((arg2[4] != 0xff) && (*arg2 != 4)) {
            uVar3 = sym.btfm_slim_enable_ch(arg1,arg2,0x1010000 >> ((uVar1 & 3) << 3),*(param_2 + 9));
            if (uVar3 == 0) {
                obj.bt_soc_enable_status = 0x1;
                return uVar3;
            }
            if (uVar3 != -0x6a) {
                return uVar3;
            }
            _printk(0x8000c06,"btfm_slim_dai_prepare");
            return 0;
        }
        _printk(0x8000d48,"btfm_slim_dai_prepare");
    }
    else {
        _printk(0x8000f25,"btfm_slim_dai_prepare");
    }
    return 0xffffffea;
}


// ===== sym.btfm_slim_dai_startup.a359e88802e94561ab50c157ecc72b8e.cfi_jt @ 0x08002418 (size 8) =====

void sym.btfm_slim_dai_startup.a359e88802e94561ab50c157ecc72b8e.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.btfm_slim_hw_init(*(*(*(param_2 + 0x58) + 0x18) + 0x98));
    return;
}


// ===== sym.btfm_slim_dai_get_channel_map.a359e88802e94561ab50c157ecc72b8e.cfi_jt @ 0x08002420 (size 8) =====

ulong sym.btfm_slim_dai_get_channel_map.a359e88802e94561ab50c157ecc72b8e.cfi_jt
                (int64_t param_1,uint32_t *param_2,uint *param_3,uint32_t *param_4,uint *param_5)

{
    int iVar1;
    ulong uVar2;
    uint *puVar3;
    uint32_t uVar4;
    int *piVar5;
    int64_t iVar6;
    int *piVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(*(*(param_1 + 0x58) + 0x18) + 0x98);
    if (iVar6 == 0) {
        return 0xffffffea;
    }
    iVar1 = *(param_1 + 8);
    if (iVar1 - 2U < 2) {
        if ((param_4 == NULL) || (param_5 == NULL)) {
            uVar2 = 0x8000fc9;
            goto code_r0x08003a08;
        }
        piVar7 = *(iVar6 + 0x448);
        if (piVar7 == NULL) {
            return 0xffffffea;
        }
        uVar4 = 0;
        uVar10 = 1;
        uVar8 = 1;
        puVar3 = param_5;
    }
    else {
        uVar4 = 1;
        if (iVar1 != 1) {
            if (iVar1 != 0) {
                uVar2 = 0x800096b;
                goto code_r0x08003a24;
            }
            uVar4 = 2;
        }
        if ((param_2 == NULL) || (param_3 == NULL)) {
            uVar2 = 0x8000bdf;
            param_5 = param_3;
            param_4 = param_2;
code_r0x08003a08:
            _printk(uVar2,"btfm_slim_dai_get_channel_map",param_5,param_4);
            return 0xffffffea;
        }
        piVar7 = *(iVar6 + 0x450);
        if (piVar7 == NULL) {
            return 0xffffffea;
        }
        uVar10 = 0;
        puVar3 = param_3;
        param_3 = param_5;
        uVar8 = uVar4;
    }
    uVar9 = 0;
    *param_3 = 0;
    *param_2 = uVar4;
    *param_4 = uVar10;
    while( true ) {
        if (piVar7 == NULL) {
            return 0xffffffea;
        }
        iVar1 = *(param_1 + 8);
        if (*piVar7 == 4) break;
        piVar5 = piVar7;
        if (*piVar7 != iVar1) {
            piVar5 = piVar7 + 0x12;
            if (*piVar5 != 4) {
                if (*piVar5 != iVar1) {
                    piVar5 = piVar7 + 0x24;
                    if (*piVar5 == 4) break;
                    if (*piVar5 != iVar1) {
                        piVar5 = piVar7 + 0x36;
                        if ((*piVar5 == 4) || (*piVar5 != iVar1)) break;
                    }
                }
                if (iVar1 != 4) goto code_r0x0800393c;
            }
            break;
        }
code_r0x0800393c:
        uVar4 = uVar9 + 1;
        piVar7 = piVar5 + 0x12;
        puVar3[uVar9] = *(piVar5 + 0x12);
        uVar9 = 1;
        if (uVar8 <= uVar4) {
            return 0;
        }
    }
    uVar2 = 0x8000b08;
code_r0x08003a24:
    _printk(uVar2,"btfm_slim_dai_get_channel_map",iVar1);
    return 0xffffffea;
}


// ===== sym.btfm_slim_remove.19d0651436cf38a125eb062d94492fe4.cfi_jt @ 0x08002428 (size 8) =====

void sym.btfm_slim_remove.19d0651436cf38a125eb062d94492fe4.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(param_1 + 0x98);
    snd_soc_unregister_component();
    kfree(uVar1);
    return;
}


// ===== sym.btfm_put_feedback_ch_setting.a359e88802e94561ab50c157ecc72b8e.cfi_jt @ 0x08002430 (size 8) =====

ulong sym.btfm_put_feedback_ch_setting.a359e88802e94561ab50c157ecc72b8e.cfi_jt(ulong param_1,int64_t param_2)

{
    _segment.ehdr = *(param_2 + 0x48);
    return 1;
}


// ===== sym.btfm_soc_status_get.a359e88802e94561ab50c157ecc72b8e.cfi_jt @ 0x08002438 (size 8) =====

ulong sym.btfm_soc_status_get.a359e88802e94561ab50c157ecc72b8e.cfi_jt(ulong param_1,int64_t param_2)

{
    *(param_2 + 0x48) = obj.bt_soc_enable_status;
    return 1;
}


// ===== sym.btfm_get_feedback_ch_setting.a359e88802e94561ab50c157ecc72b8e.cfi_jt @ 0x08002440 (size 8) =====

ulong sym.btfm_get_feedback_ch_setting.a359e88802e94561ab50c157ecc72b8e.cfi_jt(ulong param_1,int64_t param_2)

{
    *(param_2 + 0x48) = _segment.ehdr;
    return 1;
}


// ===== sym.btfm_soc_status_put.a359e88802e94561ab50c157ecc72b8e.cfi_jt @ 0x08002448 (size 8) =====

ulong sym.btfm_soc_status_put.a359e88802e94561ab50c157ecc72b8e.cfi_jt(void)

{
    return 1;
}


// ===== sym.btfm_slim_write @ 0x08002450 (size 352) =====

int sym.btfm_slim_write(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong uVar2;
    int iVar3;
    int iVar4;
    int64_t iVar5;
    ulong *in_x18;
    uint64_t uVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = arg3 & 0xffffffff;
    uVar2 = 0x8000ad1;
    if ((arg4 & 0xffU) != 0) {
        uVar2 = 0x8000d7c;
    }
    _printk(0x800122d,"btfm_slim_write",uVar2);
    iVar1 = arg1 + 0x400;
    iVar4 = (arg2 & 0xffff) + 0x800;
    iVar7 = arg1 + 0x10;
    mutex_lock(iVar1);
    iVar5 = iVar7;
    if ((arg4 & 0xffU) != 0) {
        iVar5 = *(arg1 + 8);
    }
    iVar3 = slim_writeb(iVar5,iVar4,uVar6);
    mutex_unlock(iVar1);
    if (iVar3 != 0) {
        usleep_range_state(5000,0x13ec,2);
        mutex_lock(iVar1);
        iVar5 = iVar7;
        if ((arg4 & 0xffU) != 0) {
            iVar5 = *(arg1 + 8);
        }
        iVar3 = slim_writeb(iVar5,iVar4,uVar6);
        mutex_unlock(iVar1);
        if (iVar3 != 0) {
            usleep_range_state(5000,0x13ec,2);
            mutex_lock(iVar1);
            if ((arg4 & 0xffU) != 0) {
                iVar7 = *(arg1 + 8);
            }
            iVar4 = slim_writeb(iVar7,iVar4,uVar6);
            mutex_unlock(iVar1);
            if (iVar4 == 0) {
                return 0;
            }
            usleep_range_state(5000,0x13ec,2);
            return iVar4;
        }
    }
    return 0;
}


// ===== sym.btfm_slim_read @ 0x080025b0 (size 284) =====

int sym.btfm_slim_read(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    int iVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = arg1 + 0x400;
    iVar5 = arg1 + 0x10;
    iVar1 = arg2 + 0x800;
    mutex_lock(iVar2);
    iVar4 = iVar5;
    if ((arg3 & 0xffU) != 0) {
        iVar4 = *(arg1 + 8);
    }
    iVar3 = slim_readb(iVar4,iVar1);
    mutex_unlock(iVar2);
    if (iVar3 < 1) {
        usleep_range_state(5000,0x13ec,2);
        mutex_lock(iVar2);
        iVar4 = iVar5;
        if ((arg3 & 0xffU) != 0) {
            iVar4 = *(arg1 + 8);
        }
        iVar3 = slim_readb(iVar4,iVar1);
        mutex_unlock(iVar2);
        if (iVar3 < 1) {
            usleep_range_state(5000,0x13ec,2);
            mutex_lock(iVar2);
            if ((arg3 & 0xffU) != 0) {
                iVar5 = *(arg1 + 8);
            }
            iVar3 = slim_readb(iVar5,iVar1);
            mutex_unlock(iVar2);
            if (iVar3 < 1) {
                usleep_range_state(5000,0x13ec,2);
            }
        }
    }
    return iVar3;
}


// ===== sym.btfm_slim_enable_ch @ 0x080026cc (size 628) =====

int sym.btfm_slim_enable_ch(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    uint uVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    uint8_t in_w4;
    ulong *in_x18;
    code *pcVar6;
    uint16_t *puVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = -0x16;
    if ((arg1 != 0) && (arg2 != 0)) {
        iVar4 = slim_stream_allocate(*(arg1 + 8),"BTFM_SLIM");
        *(arg2 + 0x40) = iVar4;
        if (iVar4 == 0) {
            _printk(0x8000a77,"btfm_slim_enable_ch");
            iVar3 = -0x16;
        }
        else {
            *(arg2 + 0x1c) = *(arg1 + 0x440);
            uVar1 = *(arg1 + 0x444);
            *(arg2 + 0x18) = arg4;
            *(arg2 + 0x38) = uVar1;
            *(arg2 + 0x20) = in_w4;
            iVar4 = __kmalloc(in_w4 * 4,0xdc0);
            *(arg2 + 0x28) = iVar4;
            if (iVar4 == 0) {
                iVar3 = -0xc;
            }
            else {
                if (in_w4 != 0) {
                    iVar4 = 0;
                    puVar7 = arg2 + 0x10;
                    do {
                        pcVar6 = *(arg1 + 0x460);
                        if (pcVar6 != NULL) {
                            if (pcVar6 != sym.__typeid__ZTSFiP8btfmslimhhhE_global_addr) {
                                __cfi_slowpath_diag(0x5506a421f3afaaeb,pcVar6,0x8000790);
                            }
                            iVar3 = (*pcVar6)(arg1,*puVar7,arg3 & 0xffffffff,1);
                            if (iVar3 < 0) {
                                uVar5 = 0x80011f6;
                                goto code_r0x08002900;
                            }
                        }
                        *(*(arg2 + 0x28) + iVar4) = puVar7[1];
                        iVar4 = iVar4 + 4;
                        *(arg2 + 0x30) = 1L << (*puVar7 & 0x3f) | *(arg2 + 0x30);
                        puVar7 = puVar7 + 0x24;
                    } while (in_w4 * 4 - iVar4 != 0);
                }
                _printk(0x80010ac,"btfm_slim_enable_ch",*(arg2 + 0x10),*(arg2 + 0x12));
                uVar2 = btpower_get_chipset_version();
                _printk(0x8000f42,"btfm_slim_enable_ch",uVar2);
                if (_segment.ehdr != 0) {
                    _segment.ehdr = 0;
                }
                iVar3 = slim_stream_prepare(*(arg2 + 0x40),arg2 + 0x18);
                if (iVar3 == 0) {
                    iVar3 = slim_stream_enable(*(arg2 + 0x40));
                    if (iVar3 == 0) {
                        _segment.ehdr = _segment.ehdr + 1;
                        _printk(0x8001240,"btfm_slim_enable_ch");
                        return 0;
                    }
                    uVar5 = 0x8000ba2;
                }
                else {
                    uVar5 = 0x80008e5;
                }
code_r0x08002900:
                _printk(uVar5,"btfm_slim_enable_ch",iVar3);
                _printk(0x8000d80,"btfm_slim_enable_ch",iVar3,_segment.ehdr);
                kfree(*(arg2 + 0x28));
                *(arg2 + 0x28) = 0;
            }
        }
    }
    return iVar3;
}


// ===== sym.btfm_slim_disable_ch @ 0x08002940 (size 788) =====

int sym.btfm_slim_disable_ch(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    code *pcVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        return -0x16;
    }
    if (arg2 == 0) {
        return -0x16;
    }
    _printk(0x8001017,"btfm_slim_disable_ch",*(arg2 + 0x10));
    if (*(arg2 + 0x40) == 0) {
        _printk(0x8000dbc,"btfm_slim_disable_ch");
        return -0x16;
    }
    if (((arg3 & 0xffU) != 0) && ((*(arg1 + 0x43c) == 0x15888 || (*(arg1 + 0x43c) == 0xac44)))) {
        _printk(0x8000de6,"btfm_slim_disable_ch");
        iVar2 = slim_stream_unprepare_disconnect_port(*(arg2 + 0x40),1,0);
        if (iVar2 != 0) {
            _printk(0x8000d0d,"btfm_slim_disable_ch",iVar2);
        }
    }
    iVar2 = slim_stream_disable(*(arg2 + 0x40));
    if (iVar2 != 0) {
        _printk(0x800084d,"btfm_slim_disable_ch",iVar2);
        if (((*(arg1 + 0x43c) != 0xac44) && (*(arg1 + 0x43c) != 0x15888)) &&
           (iVar2 = slim_stream_unprepare_disconnect_port(*(arg2 + 0x40),1,0), iVar2 != 0)) {
            _printk(0x8000d0d,"btfm_slim_disable_ch",iVar2);
        }
    }
    iVar2 = slim_stream_unprepare_disconnect_port(*(arg2 + 0x40),0,1);
    if (iVar2 != 0) {
        _printk(0x8000921,"btfm_slim_disable_ch",iVar2);
    }
    uVar3 = arg4 & 0xff;
    if ((arg4 & 0xffU) != 0) {
        do {
            pcVar5 = *(arg1 + 0x460);
            if (pcVar5 != NULL) {
                if (pcVar5 != sym.__typeid__ZTSFiP8btfmslimhhhE_global_addr) {
                    __cfi_slowpath_diag(0x5506a421f3afaaeb,pcVar5,0x80007b0);
                }
                iVar2 = (*pcVar5)(arg1,*(arg2 + 0x10),arg3 & 0xffffffff,0);
                if (iVar2 < 0) {
                    _printk(0x800105d,"btfm_slim_disable_ch",iVar2);
                    break;
                }
            }
            arg2 = arg2 + 0x48;
            uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
    }
    *(arg2 + 0x30) = 0;
    if (*(arg2 + 0x28) != 0) {
        kfree();
    }
    if (0 < _segment.ehdr) {
        _segment.ehdr = _segment.ehdr + -1;
    }
    iVar1 = _segment.ehdr;
    *(arg2 + 0x40) = 0;
    _printk(0x8001240,"btfm_slim_disable_ch",iVar1);
    uVar3 = btpower_get_chipset_version();
    if (_segment.ehdr != 0) {
        return iVar2;
    }
    if (uVar3 < 0x400c1211) {
        if ((uVar3 == 0x400c0200) || (uVar3 == 0x400c0210)) goto code_r0x08002c34;
        uVar4 = 0x1201;
    }
    else {
        if ((uVar3 + 0xbfe8ff00 < 2) || (uVar3 == 0x40170200)) goto code_r0x08002c34;
        uVar4 = 0x1211;
    }
    if (uVar3 != (uVar4 | 0x400c0000)) {
        return iVar2;
    }
code_r0x08002c34:
    _printk(0x8000a04,"btfm_slim_disable_ch");
    msleep(200);
    return iVar2;
}


// ===== sym.btfm_slim_hw_init @ 0x08002c54 (size 1464) =====

int sym.btfm_slim_hw_init(int64_t arg1)

{
    int16_t iVar1;
    uint32_t uVar2;
    int iVar3;
    ulong uVar4;
    uint32_t uVar5;
    ulong uVar6;
    ulong *in_x18;
    code *pcVar7;
    ushort uVar8;
    int64_t iVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        return -0x16;
    }
    if (*(arg1 + 0x430) != '\0') {
        return 0;
    }
    iVar10 = *(arg1 + 8);
    mutex_lock(arg1 + 0x3d0);
    _printk(0x8000f60,"btfm_slim_hw_init",*(iVar10 + 0x394),*(iVar10 + 0x392),*(iVar10 + 0x391),*(iVar10 + 0x390));
    uVar2 = btpower_get_chipset_version();
    _printk(0x8000f42,"btfm_slim_hw_init",uVar2);
    uVar8 = 0x221;
    uVar4 = 0x80010c4;
    uVar6 = uVar4;
    if (uVar2 < 0x400c0210) {
        uVar6 = 0x80010c4;
        if ((uVar2 == 0x400c0100) || (uVar2 == 0x400c0110)) goto code_r0x08002d80;
        uVar5 = 0x200;
code_r0x08002d74:
        uVar6 = uVar4;
        if (uVar2 == (uVar5 | 0x400c0000)) goto code_r0x08002d80;
        if ((uVar2 & 0xffffffef) == 0x40140100) {
            uVar8 = 0x222;
            uVar6 = 0x8000805;
            goto code_r0x08002d80;
        }
        if (uVar2 < 0x40070101) {
            if (uVar2 < 0x40010320) {
                if ((0x24 < uVar2 + 0xbffefe00) || ((1L << (uVar2 + 0xbffefe00 & 0x3f) & 0x1000100003U) == 0)) {
                    uVar5 = 0x40010310;
                    goto code_r0x080030e0;
                }
            }
            else if (((0x30 < uVar2 + 0xbffdfee0) || ((1L << (uVar2 + 0xbffdfee0 & 0x3f) & 0x1000100010001U) == 0)) &&
                    (uVar2 != 0x40010320)) {
                uVar5 = 0x40014320;
code_r0x080030e0:
                if (uVar2 != uVar5) goto code_r0x08002dc4;
            }
code_r0x080030e8:
            uVar8 = 0x220;
            uVar6 = 0x8000c9d;
            goto code_r0x08002d80;
        }
        if (uVar2 < 0x40075120) {
            if ((0x2f < uVar2 + 0xbff8feff) || ((1L << (uVar2 + 0xbff8feff & 0x3f) & 0x800080008001U) == 0)) {
                uVar5 = 0x4130;
code_r0x080030dc:
                uVar5 = uVar5 | 0x40070000;
                goto code_r0x080030e0;
            }
            goto code_r0x080030e8;
        }
        if (uVar2 < 0x40170100) {
            if (uVar2 != 0x40075120) {
                uVar5 = 0x5130;
                goto code_r0x080030dc;
            }
            goto code_r0x080030e8;
        }
        uVar8 = 0x220;
        uVar6 = 0x8000c3f;
        if ((uVar2 + 0xbfe8ff00 < 2) || (uVar2 == 0x40170200)) goto code_r0x08002d80;
    }
    else {
        if ((uVar2 != 0x400c0210) && (uVar2 != 0x400c1201)) {
            uVar5 = 0x1211;
            goto code_r0x08002d74;
        }
code_r0x08002d80:
        _printk(uVar6,"btfm_slim_hw_init");
        *(iVar10 + 0x3a5) = 0;
        *(iVar10 + 0x392) = uVar8;
        *(iVar10 + 0x394) = 0x217;
        *(iVar10 + 0x390) = 0x100;
        *(arg1 + 0x98) = 0;
        uVar6 = *(*(arg1 + 8) + 0x398);
        *(arg1 + 0x3a4) = 0x217;
        *(arg1 + 0x3a2) = uVar8;
        *(arg1 + 0x3a0) = 0;
        *(arg1 + 0x3a8) = uVar6;
        *(arg1 + 0x3b4) = 0;
    }
code_r0x08002dc4:
    _printk(0x8000e1b,"btfm_slim_hw_init",*(iVar10 + 0x394),*(iVar10 + 0x392),*(iVar10 + 0x391),*(iVar10 + 0x390));
    _printk(0x800099b,"btfm_slim_hw_init",*(arg1 + 0x3a4),*(arg1 + 0x3a2),*(arg1 + 0x3a1),*(arg1 + 0x3a0));
    iVar10 = _snd_soc_info_volsw;
    uVar6 = *(arg1 + 8);
    _printk(0x8000e6c,"btfm_slim_get_logical_addr");
    do {
        iVar3 = slim_get_logical_addr(uVar6);
        iVar9 = _snd_soc_info_volsw;
        if (iVar3 == 0) {
            _printk(0x8000e6c,"btfm_slim_get_logical_addr");
            goto code_r0x08002e84;
        }
        usleep_range_state(1000,0x44c,2);
    } while ((-0x19 - iVar10) + _snd_soc_info_volsw < 0);
code_r0x08002eb0:
    _printk(0x8000edf,"btfm_slim_hw_init",iVar3);
code_r0x08002ec8:
    mutex_unlock(arg1 + 0x3d0);
    return iVar3;
    while (usleep_range_state(1000,0x44c,2), (-0x19 - iVar9) + _snd_soc_info_volsw < 0) {
code_r0x08002e84:
        iVar3 = slim_get_logical_addr(arg1 + 0x10);
        if (iVar3 == 0) {
            iVar3 = btpower_get_chipset_version();
            _printk(0x8000f42,"btfm_slim_alloc_port",iVar3);
            iVar9 = *(arg1 + 0x448);
            iVar10 = *(arg1 + 0x450);
            if ((iVar3 + 0xbffefcf0U < 0x4011) && (iVar1 = *(iVar10 + 0x10), iVar1 != 0xff)) {
                if (iVar1 == 1) {
                    uVar8 = 5;
code_r0x080030fc:
                    *(iVar10 + 0x10) = uVar8;
                }
                else if (iVar1 == 2) {
                    uVar8 = 4;
                    goto code_r0x080030fc;
                }
                _printk(0x8000ad5,"btfm_slim_alloc_port");
                iVar1 = *(iVar10 + 0x58);
                if (iVar1 != 0xff) {
                    if (iVar1 == 1) {
                        uVar8 = 5;
code_r0x0800314c:
                        *(iVar10 + 0x58) = uVar8;
                    }
                    else if (iVar1 == 2) {
                        uVar8 = 4;
                        goto code_r0x0800314c;
                    }
                    _printk(0x8000ad5,"btfm_slim_alloc_port");
                    iVar1 = *(iVar10 + 0xa0);
                    if (iVar1 != 0xff) {
                        if (iVar1 == 1) {
                            uVar8 = 5;
code_r0x0800318c:
                            *(iVar10 + 0xa0) = uVar8;
                        }
                        else if (iVar1 == 2) {
                            uVar8 = 4;
                            goto code_r0x0800318c;
                        }
                        _printk(0x8000ad5,"btfm_slim_alloc_port");
                        iVar1 = *(iVar10 + 0xe8);
                        if (iVar1 != 0xff) {
                            if (iVar1 == 1) {
                                uVar8 = 5;
code_r0x080031cc:
                                *(iVar10 + 0xe8) = uVar8;
                            }
                            else if (iVar1 == 2) {
                                uVar8 = 4;
                                goto code_r0x080031cc;
                            }
                            _printk(0x8000ad5,"btfm_slim_alloc_port");
                        }
                    }
                }
                iVar10 = *(arg1 + 0x450);
            }
            iVar3 = -0x16;
            if ((iVar9 != 0) && (iVar3 = -0x16, iVar10 != 0)) {
                pcVar7 = *(arg1 + 0x458);
                if (pcVar7 == NULL) {
                    iVar3 = 0;
                }
                else {
                    if (pcVar7 != sym.__typeid__ZTSFiP8btfmslimE_global_addr) {
                        __cfi_slowpath_diag(0xaca9675b12871565,pcVar7,0x80007d0);
                    }
                    iVar3 = (*pcVar7)(arg1);
                }
                *(arg1 + 0x430) = 1;
            }
            goto code_r0x08002ec8;
        }
    }
    goto code_r0x08002eb0;
}


// ===== sym.btfm_slim_hw_deinit @ 0x0800320c (size 112) =====

ulong sym.btfm_slim_hw_deinit(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000e6c,"btfm_slim_hw_deinit");
    if (arg1 == 0) {
        uVar1 = 0xffffffea;
    }
    else {
        if (*(arg1 + 0x430) != '\0') {
            mutex_lock(arg1 + 0x3d0);
            *(arg1 + 0x430) = 0;
            mutex_unlock(arg1 + 0x3d0);
        }
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.btfm_slim_get_hwep_details @ 0x0800327c (size 12) =====

void sym.btfm_slim_get_hwep_details(void)

{
    return;
}


// ===== sym.btfm_slim_probe @ 0x08003288 (size 644) =====

int sym.btfm_slim_probe(int64_t arg1)

{
    int iVar1;
    int iVar2;
    int64_t *piVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x70);
    if (iVar4 == 0) {
        iVar4 = *arg1;
    }
    _printk(0x80009ec,"btfm_slim_probe",iVar4);
    *(arg1 + 0x3a5) = 1;
    dev_set_name(arg1,0x8000a3e,"btfmslim_slave");
    iVar4 = *(arg1 + 0x70);
    if (iVar4 == 0) {
        iVar4 = *arg1;
    }
    _printk(0x80009ec,"btfm_slim_probe",iVar4);
    _printk(0x8000a41,"btfm_slim_probe");
    if (*(arg1 + 0x398) == 0) {
        iVar1 = -0x16;
    }
    else {
        piVar3 = kmem_cache_alloc_trace(_mutex_lock,0xdc0,0x468);
        if (piVar3 == NULL) {
            _printk(0x80011b4,"btfm_slim_probe");
            iVar1 = -0xc;
        }
        else {
            piVar3[1] = arg1;
            piVar3[0x89] = obj.slave_rxport;
            piVar3[0x8a] = obj.slave_txport;
            piVar3[0x8b] = sym.__typeid__ZTSFiP8btfmslimE_global_addr;
            piVar3[0x8c] = sym.__typeid__ZTSFiP8btfmslimhhhE_global_addr;
            __mutex_init(piVar3 + 0x7a,"&btfm_slim->io_lock",
                         reloc.btfm_slim_status.19d0651436cf38a125eb062d94492fe4.cfi_jt);
            __mutex_init(piVar3 + 0x80,"&btfm_slim->xfer_lock",
                         reloc.btfm_slim_status.19d0651436cf38a125eb062d94492fe4.cfi_jt);
            *(arg1 + 0x98) = piVar3;
            *piVar3 = arg1;
            iVar1 = btpower_register_slimdev(arg1);
            if (iVar1 < 0) {
                iVar1 = -0x205;
            }
            else {
                _segment.ehdr = piVar3;
                iVar2 = __register_chrdev(0,0,0x100,"btfm_slim",obj.bt_dev_fops);
                _segment.ehdr = CONCAT44(*0x8000004,iVar2);
                if (iVar2 < 0) {
                    _printk(0x8000e97,"btfm_slim_probe","btfm_slim_probe");
                }
                else {
                    _segment.ehdr = __class_create(obj.__this_module,"btfmslim-dev",obj.btfm_slim_probe.__key.42);
                    if (_segment.ehdr < 0xfffffffffffff001) {
                        iVar4 = device_create(_segment.ehdr,0,_segment.ehdr << 0x14,0,"btfmslim");
                        if (iVar4 != 0) {
                            return iVar1;
                        }
                        _printk(0x8000e97,"btfm_slim_probe","btfm_slim_probe");
                        class_destroy(_segment.ehdr);
                    }
                    else {
                        _printk(0x80011d4,"btfm_slim_probe","btfm_slim_probe");
                    }
                    __unregister_chrdev(_segment.ehdr & 0xffffffff,0,0x100,"btfm_slim");
                }
                iVar1 = -1;
            }
            snd_soc_unregister_component(arg1);
            kfree(piVar3);
        }
    }
    return iVar1;
}


// ===== sym.btfm_slim_remove @ 0x0800350c (size 56) =====

void sym.btfm_slim_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + 0x98);
    snd_soc_unregister_component();
    kfree(uVar1);
    return;
}


// ===== sym.btfm_slim_status @ 0x08003544 (size 84) =====

int sym.btfm_slim_status(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.btfm_slim_register_codec(*(arg1 + 0x98));
    if (iVar1 != 0) {
        _printk(0x80012a3,"btfm_slim_status");
    }
    return iVar1;
}


// ===== sym.btfm_slim_ioctl @ 0x08003598 (size 92) =====

int64_t sym.btfm_slim_ioctl(ulong noname_0,uint32_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 != 0xbfac) {
        return 0;
    }
    *in_x18 = unaff_x30;
    _printk(0x80010f5,"btfm_slim_ioctl");
    iVar1 = sym.btfm_slim_hw_init(_segment.ehdr);
    return iVar1;
}


// ===== sym.__cfi_check_fail @ 0x080035f4 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08003638

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
    //switch table (4 cases) at 0x80007f0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800364c);
    (*pcVar1)();
}


// ===== sym.btfm_slim_register_codec @ 0x0800364c (size 128) =====

int sym.btfm_slim_register_codec(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *arg1;
    _dev_err(uVar2,0x8001042);
    iVar1 = snd_soc_register_component(uVar2,obj.btfmslim_codec,obj.btfmslim_dai,4);
    if (iVar1 != 0) {
        _printk(0x8000881,"btfm_slim_register_codec",iVar1);
    }
    return iVar1;
}


// ===== sym.btfm_slim_unregister_codec @ 0x080036cc (size 36) =====

void sym.btfm_slim_unregister_codec(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    snd_soc_unregister_component();
    return;
}


// ===== sym.btfm_slim_codec_probe @ 0x080036f0 (size 52) =====

ulong sym.btfm_slim_codec_probe(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    snd_soc_add_component_controls(param_1,obj.status_controls,2);
    return 0;
}


// ===== sym.btfm_slim_codec_remove @ 0x08003724 (size 12) =====

void sym.btfm_slim_codec_remove(void)

{
    return;
}


// ===== sym.btfm_slim_codec_read @ 0x08003730 (size 16) =====

ulong sym.btfm_slim_codec_read(int64_t arg1)

{
    return 0;
}


// ===== sym.btfm_slim_codec_write @ 0x08003740 (size 16) =====

ulong sym.btfm_slim_codec_write(int64_t arg1)

{
    return 0;
}


// ===== sym.btfm_soc_status_get @ 0x08003750 (size 28) =====

ulong sym.btfm_soc_status_get(ulong noname_0,int64_t arg1)

{
    *(arg1 + 0x48) = obj.bt_soc_enable_status;
    return 1;
}


// ===== sym.btfm_soc_status_put @ 0x0800376c (size 16) =====

ulong sym.btfm_soc_status_put(void)

{
    return 1;
}


// ===== sym.btfm_get_feedback_ch_setting @ 0x0800377c (size 28) =====

ulong sym.btfm_get_feedback_ch_setting(ulong noname_0,int64_t arg1)

{
    *(arg1 + 0x48) = _segment.ehdr;
    return 1;
}


// ===== sym.btfm_put_feedback_ch_setting @ 0x08003798 (size 28) =====

ulong sym.btfm_put_feedback_ch_setting(ulong noname_0,int64_t arg1)

{
    _segment.ehdr = *(arg1 + 0x48);
    return 1;
}


// ===== sym.btfm_slim_dai_set_channel_map @ 0x080037b4 (size 224) =====

ulong sym.btfm_slim_dai_set_channel_map(int64_t arg1,uint32_t arg2,int64_t arg3,uint32_t arg4)

{
    bool bVar1;
    int64_t in_x4;
    int64_t iVar2;
    int16_t *piVar3;
    int64_t iVar4;
    uint32_t uVar5;
    
    iVar2 = *(*(*(arg1 + 0x58) + 0x18) + 0x98);
    if (iVar2 == 0) {
        return 0xffffffea;
    }
    iVar4 = *(iVar2 + 0x448);
    iVar2 = *(iVar2 + 0x450);
    if (iVar4 == 0 || iVar2 == 0) {
        return 0;
    }
    if ((arg4 != 0) && (*(iVar4 + 0x10) != 0xff)) {
        piVar3 = iVar4 + 0x58;
        uVar5 = 1;
        do {
            *(piVar3 + -0x23) = *(in_x4 + (-(uVar5 - 1 >> 0x1f) & 0xfffffffc00000000 | uVar5 - 1 << 2));
            if (*piVar3 == 0xff) break;
            bVar1 = uVar5 < arg4;
            piVar3 = piVar3 + 0x24;
            uVar5 = uVar5 + 1;
        } while (bVar1);
    }
    if ((arg2 != 0) && (*(iVar2 + 0x10) != 0xff)) {
        piVar3 = iVar2 + 0x58;
        uVar5 = 1;
        do {
            *(piVar3 + -0x23) = *(arg3 + (-(uVar5 - 1 >> 0x1f) & 0xfffffffc00000000 | uVar5 - 1 << 2));
            if (*piVar3 == 0xff) {
                return 0;
            }
            bVar1 = uVar5 < arg2;
            piVar3 = piVar3 + 0x24;
            uVar5 = uVar5 + 1;
        } while (bVar1);
    }
    return 0;
}


// ===== sym.btfm_slim_dai_get_channel_map @ 0x08003894 (size 424) =====

ulong sym.btfm_slim_dai_get_channel_map(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    ulong uVar2;
    uint *puVar3;
    uint *in_x4;
    uint32_t uVar4;
    int *piVar5;
    int64_t iVar6;
    int *piVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint uVar10;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(*(*(arg1 + 0x58) + 0x18) + 0x98);
    if (iVar6 == 0) {
        return 0xffffffea;
    }
    iVar1 = *(arg1 + 8);
    if (iVar1 - 2U < 2) {
        if ((arg4 == 0) || (in_x4 == NULL)) {
            uVar2 = 0x8000fc9;
            goto code_r0x08003a08;
        }
        piVar7 = *(iVar6 + 0x448);
        if (piVar7 == NULL) {
            return 0xffffffea;
        }
        uVar4 = 0;
        uVar10 = 1;
        uVar8 = 1;
        puVar3 = in_x4;
    }
    else {
        uVar4 = 1;
        if (iVar1 != 1) {
            if (iVar1 != 0) {
                uVar2 = 0x800096b;
                goto code_r0x08003a24;
            }
            uVar4 = 2;
        }
        if ((arg2 == 0) || (arg3 == 0)) {
            uVar2 = 0x8000bdf;
code_r0x08003a08:
            _printk(uVar2,"btfm_slim_dai_get_channel_map");
            return 0xffffffea;
        }
        piVar7 = *(iVar6 + 0x450);
        if (piVar7 == NULL) {
            return 0xffffffea;
        }
        uVar10 = 0;
        puVar3 = arg3;
        arg3 = in_x4;
        uVar8 = uVar4;
    }
    uVar9 = 0;
    *arg3 = 0;
    *arg2 = uVar4;
    *arg4 = uVar10;
    while( true ) {
        if (piVar7 == NULL) {
            return 0xffffffea;
        }
        iVar1 = *(arg1 + 8);
        if (*piVar7 == 4) break;
        piVar5 = piVar7;
        if (*piVar7 != iVar1) {
            piVar5 = piVar7 + 0x12;
            if (*piVar5 != 4) {
                if (*piVar5 != iVar1) {
                    piVar5 = piVar7 + 0x24;
                    if (*piVar5 == 4) break;
                    if (*piVar5 != iVar1) {
                        piVar5 = piVar7 + 0x36;
                        if ((*piVar5 == 4) || (*piVar5 != iVar1)) break;
                    }
                }
                if (iVar1 != 4) goto code_r0x0800393c;
            }
            break;
        }
code_r0x0800393c:
        uVar4 = uVar9 + 1;
        piVar7 = piVar5 + 0x12;
        puVar3[uVar9] = *(piVar5 + 0x12);
        uVar9 = 1;
        if (uVar8 <= uVar4) {
            return 0;
        }
    }
    uVar2 = 0x8000b08;
code_r0x08003a24:
    _printk(uVar2,"btfm_slim_dai_get_channel_map",iVar1);
    return 0xffffffea;
}


// ===== sym.btfm_slim_dai_startup @ 0x08003a3c (size 48) =====

void sym.btfm_slim_dai_startup(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.btfm_slim_hw_init(*(*(*(arg1 + 0x58) + 0x18) + 0x98));
    return;
}


// ===== sym.btfm_slim_dai_shutdown @ 0x08003a6c (size 276) =====

void sym.btfm_slim_dai_shutdown(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t *puVar3;
    uint32_t *arg2;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(arg1 + 8);
    if (uVar2 < 4) {
        arg1_00 = *(*(*(arg1 + 0x58) + 0x18) + 0x98);
        puVar3 = *(arg1_00 + *(uVar2 * 8 + 0x8001630));
        arg2 = puVar3;
        if (((*puVar3 != 4 && *puVar3 != uVar2) && (arg2 = puVar3 + 0x12, *arg2 != 4 && *arg2 != uVar2)) &&
           (arg2 = puVar3 + 0x24, *arg2 != 4 && *arg2 != uVar2)) {
            uVar1 = puVar3[0x36];
            arg2 = puVar3 + 0x36;
            if (uVar1 != uVar2 && uVar1 != 4) {
                arg2 = puVar3 + 0x48;
            }
        }
        if ((arg2[4] == 0xff) || (*arg2 == 4)) {
            _printk(0x8000d48,"btfm_slim_dai_shutdown");
        }
        else {
            sym.btfm_slim_disable_ch(arg1_00,arg2,0x1010000 >> (uVar2 << 3 & 0x1f),0x1010102 >> (uVar2 << 3 & 0x1f));
            sym.btfm_slim_hw_deinit(arg1_00);
        }
    }
    else {
        _printk(0x8000f25,"btfm_slim_dai_shutdown");
    }
    return;
}


// ===== sym.btfm_slim_dai_hw_params @ 0x08003b80 (size 128) =====

ulong sym.btfm_slim_dai_hw_params(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(arg2 + 0x24);
    iVar4 = *(*(*(arg3 + 0x58) + 0x18) + 0x98);
    if (uVar2 == 0) {
        uVar2 = *(arg2 + 0x28);
        if (uVar2 == 0) {
            uVar3 = 0;
            goto code_r0x08003bcc;
        }
        uVar3 = 0x20;
    }
    else {
        uVar3 = 0;
    }
    uVar2 = (uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x55555555) << 1;
    uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar3 = LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10) | uVar3;
code_r0x08003bcc:
    uVar1 = snd_pcm_format_width(uVar3);
    *(iVar4 + 0x440) = uVar1;
    *(iVar4 + 0x444) = *(arg1 + 0x3c);
    return 0;
}


// ===== sym.btfm_slim_dai_prepare @ 0x08003c00 (size 408) =====

ulong sym.btfm_slim_dai_prepare(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    ulong uVar3;
    uint32_t *arg2_00;
    uint32_t *puVar4;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + 0x3c);
    obj.bt_soc_enable_status = 0x0;
    arg1_00 = *(*(*(arg2 + 0x58) + 0x18) + 0x98);
    *(arg1_00 + 0x444) = uVar1;
    _printk(0x80008a6,"btfm_slim_dai_prepare",*arg2,*(arg2 + 8),*(arg2 + 0x48),uVar1 & 0xffff);
    *(arg1_00 + 0x43c) = *(arg2 + 0x48);
    uVar1 = *(arg2 + 8);
    if (uVar1 < 4) {
        puVar4 = *(arg1_00 + *(uVar1 * 8 + 0x8001630));
        arg2_00 = puVar4;
        if ((*puVar4 != 4) && (*puVar4 != uVar1)) {
            arg2_00 = puVar4 + 0x12;
            if ((*arg2_00 != 4) && (*arg2_00 != uVar1)) {
                arg2_00 = puVar4 + 0x24;
                if ((*arg2_00 != 4) && (*arg2_00 != uVar1)) {
                    uVar2 = puVar4[0x36];
                    arg2_00 = puVar4 + 0x36;
                    if (uVar2 != uVar1 && uVar2 != 4) {
                        arg2_00 = puVar4 + 0x48;
                    }
                }
            }
        }
        if ((arg2_00[4] != 0xff) && (*arg2_00 != 4)) {
            uVar3 = sym.btfm_slim_enable_ch(arg1_00,arg2_00,0x1010000 >> ((uVar1 & 3) << 3),*(arg2 + 0x48));
            if (uVar3 == 0) {
                obj.bt_soc_enable_status = 0x1;
                return uVar3;
            }
            if (uVar3 != -0x6a) {
                return uVar3;
            }
            _printk(0x8000c06,"btfm_slim_dai_prepare");
            return 0;
        }
        _printk(0x8000d48,"btfm_slim_dai_prepare");
    }
    else {
        _printk(0x8000f25,"btfm_slim_dai_prepare");
    }
    return 0xffffffea;
}


// ===== sym.btfm_slim_slave_hw_init @ 0x08003d98 (size 168) =====

uint32_t sym.btfm_slim_slave_hw_init(int64_t arg1)

{
    ulong uVar1;
    int iVar2;
    uint32_t uVar3;
    ulong *in_x18;
    uint32_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        iVar2 = sym.btfm_slim_read(arg1,1,0);
        if (iVar2 < 0) {
            _printk(0x8000b48,"btfm_slim_slave_hw_init",iVar2,1);
        }
        uVar3 = sym.btfm_slim_read(arg1,2,0);
        uVar1 = 0x8000b48;
        if (-1 < uVar3) {
            uVar1 = 0x8000ab7;
        }
        uVar4 = uVar3 & uVar3 >> 0x1f;
        _printk(uVar1,"btfm_slim_slave_hw_init",uVar3,2);
    }
    return uVar4;
}


// ===== sym.btfm_slim_slave_enable_port @ 0x08003e40 (size 636) =====

int sym.btfm_slim_slave_enable_port(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    bool bVar2;
    int iVar3;
    uint32_t uVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    ulong *in_x18;
    uint32_t uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar7 = arg2;
    if ((arg3 & 0xff) == 0) {
        uVar8 = uVar7 & 0xff;
        if ((arg4 & 0xffU) != 0) {
            if (uVar8 < 6) {
                if ((arg2 & 0xffU) == 0) {
                    iVar3 = sym.btfm_slim_write(arg1,0x100,1,0);
                    if (iVar3 < 0) {
                        uVar4 = 0x100;
                        goto code_r0x08004094;
                    }
                }
                else if ((1 << (uVar7 & 0x1f) & 0x36U) != 0) {
                    uVar4 = uVar7 & 0xff;
                    uVar6 = 0x10;
                    if (uVar4 != 4) {
                        uVar6 = 6;
                    }
                    uVar1 = 0x20;
                    if (uVar4 != 5) {
                        uVar1 = uVar6;
                    }
                    uVar4 = uVar4 * 4 + 0x100;
                    _printk(0x8000ff0,"btfm_slim_slave_enable_port",uVar1,uVar4);
                    iVar3 = sym.btfm_slim_write(arg1,uVar4,uVar1,0);
                    if (iVar3 < 0) goto code_r0x08004094;
                }
            }
            uVar4 = uVar8 + 0x1f0;
            iVar3 = sym.btfm_slim_write(arg1,uVar4,3,0);
            if (iVar3 < 0) goto code_r0x08004094;
        }
        uVar4 = uVar8 + 0x50;
    }
    else {
        if ((((arg4 & 0xffU) != 0) && (*(arg1 + 0x43c) != 0xac44)) && (*(arg1 + 0x43c) != 0x15888)) {
            bVar2 = 0x17 < (uVar7 & 0xff);
            iVar3 = -0x10;
            if (bVar2) {
                iVar3 = -0x18;
            }
            iVar5 = 0x180;
            if (bVar2) {
                iVar5 = 0x181;
            }
            uVar4 = iVar5 + (iVar3 + uVar7 & 0xff) * 4;
            iVar3 = sym.btfm_slim_write(arg1,uVar4,1 << (iVar3 + uVar7 & 0x1f),0);
            if (iVar3 < 0) goto code_r0x08004094;
        }
        uVar4 = (uVar7 & 0xff) + 0x30;
    }
    uVar8 = (arg4 & 0xffU) != 0;
    if ((uVar7 & 0xff) < 6) {
        if ((1 << (uVar7 & 0x1f) & 0x36U) == 0) {
            if ((arg2 & 0xffU) != 0) goto code_r0x08004038;
            uVar7 = 2;
            goto code_r0x0800403c;
        }
        uVar8 = uVar8 | 0x10;
    }
    else {
code_r0x08004038:
        uVar7 = 0x16;
code_r0x0800403c:
        uVar6 = 0;
        if ((arg4 & 0xffU) != 0) {
            uVar6 = uVar7;
        }
        uVar8 = uVar6 | uVar8;
        if (((arg2 & 0xffU) == 0) && ((arg4 & 0xffU) != 0)) {
            _printk(0x8000b6c,"btfm_slim_slave_enable_port",uVar8,uVar4);
        }
    }
    iVar3 = sym.btfm_slim_write(arg1,uVar4,uVar8,0);
    if (-1 < iVar3) {
        return iVar3;
    }
code_r0x08004094:
    _printk(0x8000c78,"btfm_slim_slave_enable_port",iVar3,uVar4);
    return iVar3;
}


// ===== sym.init_module @ 0x080040c4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __slim_driver_register(reloc.btfm_slim_probe.19d0651436cf38a125eb062d94492fe4.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x080040f8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    slim_driver_unregister(reloc.btfm_slim_probe.19d0651436cf38a125eb062d94492fe4.cfi_jt);
    return;
}

