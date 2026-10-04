// decompiled from btpower by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08003000 (size 400) =====

//WARNING: Switch with 1 destination removed at 0x0800548c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x3557318fb8d07b71) {
            if (arg1 == -0x66d421a09845f9f8) {
                pcVar2 = sym.extldo_show.14c5a0b45568701d13d7dba8cdfe7851.cfi_jt;
            }
            else {
                if (arg1 != -0x57be845bca9148ef) goto code_r0x0800544c;
                pcVar2 = sym.btpower_register_slimdev.cfi_jt;
            }
        }
        else {
            if (arg1 == -0x3557318fb8d07b71) {
                pcVar2 = sym.bt_power_probe.14c5a0b45568701d13d7dba8cdfe7851.cfi_jt;
code_r0x0800315c:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x0800544c;
            }
            if (arg1 != -0x890743871a4a53) goto code_r0x0800544c;
            pcVar2 = sym.bt_ioctl.14c5a0b45568701d13d7dba8cdfe7851.cfi_jt;
        }
    }
    else if (arg1 < 0x47ce015a85343a42) {
        if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.btpower_get_chipset_version.cfi_jt;
            goto code_r0x0800315c;
        }
        if (arg1 != 0x2b17460ce4bf82db) goto code_r0x0800544c;
        pcVar2 = sym.btpower_toggle_radio.14c5a0b45568701d13d7dba8cdfe7851.cfi_jt;
    }
    else if (arg1 == 0x47ce015a85343a42) {
        pcVar2 = sym.__typeid__ZTSFiiE_global_addr;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800544c;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x0800544c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80054a0);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08003198 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.bt_power_probe.14c5a0b45568701d13d7dba8cdfe7851.cfi_jt);
    return;
}


// ===== sym.btpower_get_chipset_version.cfi_jt @ 0x080031a0 (size 8) =====

uint sym.btpower_get_chipset_version.cfi_jt(void)

{
    return _segment.ehdr;
}


// ===== sym.init_module.cfi_jt @ 0x080031a8 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    obj.probe_finished = 0x0;
    uVar2 = __platform_driver_register(reloc.bt_power_probe.14c5a0b45568701d13d7dba8cdfe7851.cfi_jt,obj.__this_module);
    iVar1 = uVar2;
    if (iVar1 == 0) {
        iVar1 = __register_chrdev(uVar2,0,0x100,0x8000b3b,obj.bt_dev_fops);
        _segment.ehdr = CONCAT44(*0x8000004,iVar1);
        if (iVar1 < 0) {
            _printk(0x80010cf,"btpower_init");
            iVar1 = -1;
        }
        else {
            _segment.ehdr = __class_create(obj.__this_module,"bt-dev",obj.btpower_init.__key);
            if (_segment.ehdr < 0xfffffffffffff001) {
                iVar3 = device_create(_segment.ehdr,0,_segment.ehdr << 0x14,0,"btpower");
                if (iVar3 != 0) {
                    return 0;
                }
                _printk(0x80010cf,"btpower_init");
                class_destroy(_segment.ehdr);
                iVar1 = 0;
            }
            else {
                _printk(0x80014f9,"btpower_init");
                iVar1 = -1;
            }
            __unregister_chrdev(_segment.ehdr & 0xffffffff,0,0x100,0x8000b3b);
        }
        platform_driver_unregister(reloc.bt_power_probe.14c5a0b45568701d13d7dba8cdfe7851.cfi_jt);
    }
    else {
        _printk(0x800070b,"btpower_init",uVar2 & 0xffffffff);
    }
    return iVar1;
}


// ===== sym.extldo_show.14c5a0b45568701d13d7dba8cdfe7851.cfi_jt @ 0x080031b0 (size 8) =====

int64_t sym.extldo_show.14c5a0b45568701d13d7dba8cdfe7851.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,6,"false\n");
    return iVar1;
}


// ===== sym.btpower_toggle_radio.14c5a0b45568701d13d7dba8cdfe7851.cfi_jt @ 0x080031b8 (size 8) =====

ulong sym.btpower_toggle_radio.14c5a0b45568701d13d7dba8cdfe7851.cfi_jt(int64_t param_1,uint8_t param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.previous != (param_2 & 1)) {
        pcVar2 = *(param_1 + 0x38);
        if (pcVar2 != sym.__typeid__ZTSFiiE_global_addr) {
            __cfi_slowpath_diag(0x47ce015a85343a42,pcVar2,0x80006b0);
        }
        uVar1 = (*pcVar2)(~param_2 & 1);
        if (uVar1 != 0) {
            return uVar1;
        }
    }
    obj.previous = param_2 & 1;
    return 0;
}


// ===== sym.__typeid__ZTSFiiE_global_addr @ 0x080031c0 (size 8) =====

int sym.__typeid__ZTSFiiE_global_addr(int param_1)

{
    int iVar1;
    uint32_t arg1;
    ulong uVar2;
    char cVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.perisec_cnss_bt_hw_disable_check(_segment.ehdr);
    if (param_1 == 0) {
        if (0 < *(_segment.ehdr + 8)) {
            if (*(_segment.ehdr + 200) == 0) {
                sym.bt_configure_gpios(0);
            }
            else {
                uVar2 = 0x8001738;
code_r0x080041fc:
                _printk(uVar2,"bluetooth_power");
            }
        }
        if (0 < *(_segment.ehdr + 8)) {
            gpio_free();
        }
        if (0 < *(_segment.ehdr + 0x14)) {
            gpio_free();
        }
        piVar5 = *(_segment.ehdr + 0x30);
        if (piVar5 != NULL) {
            iVar4 = *piVar5;
            if ((iVar4 == 0) || (piVar5[2] == '\0')) {
                _printk(0x8000c5e,"bt_clk_disable",iVar4);
            }
            else {
                clk_disable(iVar4);
                clk_unprepare(iVar4);
                *(piVar5 + 2) = 0;
            }
        }
    }
    else {
        if (param_1 == 2) {
            arg1 = 2;
            goto code_r0x08004114;
        }
        if (param_1 != 1) {
            _printk(0x8000735,"bluetooth_power",param_1);
            return -1;
        }
        if (*(_segment.ehdr + 200) != 0) {
            _printk(0x8001495,"bluetooth_power");
            return -0x16;
        }
        iVar1 = sym.bt_power_vreg_set(1);
        if (iVar1 < 0) {
            uVar2 = 0x80011bd;
        }
        else {
            piVar5 = *(_segment.ehdr + 0x30);
            if (piVar5 == NULL) {
code_r0x08004054:
                if (*(_segment.ehdr + 8) < 1) {
                    return iVar1;
                }
                _obj.bt_power_src_status = 0xffffffffffffffff;
                iVar1 = sym.bt_configure_gpios(1);
                if (-1 < iVar1) {
                    return iVar1;
                }
                uVar2 = 0x8001386;
                goto code_r0x080041fc;
            }
            _printk(0x80012d6,"bt_clk_enable",piVar5[1]);
            iVar4 = *piVar5;
            cVar3 = piVar5[2];
            if (iVar4 != 0) {
                if (cVar3 == '\0') {
                    iVar1 = clk_prepare(iVar4);
                    if (iVar1 == 0) {
                        iVar1 = clk_enable(iVar4);
                        if (iVar1 == 0) {
                            *(piVar5 + 2) = 1;
                            goto code_r0x08004054;
                        }
                        clk_unprepare(iVar4);
                    }
                    _printk(0x80015aa,"bt_clk_enable",piVar5[1],iVar1);
                    if (iVar1 < 0) {
                        uVar2 = 0x8001386;
                        goto code_r0x08004194;
                    }
                    goto code_r0x08004054;
                }
                cVar3 = '\x01';
            }
            _printk(0x8000c5e,"bt_clk_enable",iVar4,cVar3);
            iVar1 = -0x16;
            uVar2 = 0x8001386;
        }
code_r0x08004194:
        _printk(uVar2,"bluetooth_power");
    }
    arg1 = 0;
code_r0x08004114:
    sym.bt_power_vreg_set(arg1);
    return iVar1;
}


// ===== sym.btpower_register_slimdev.cfi_jt @ 0x080031c8 (size 8) =====

uint sym.btpower_register_slimdev.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 != 0) && (_segment.ehdr != 0)) {
        *(_segment.ehdr + 0x20) = param_1;
        return 0;
    }
    _printk(0x8001213,"btpower_register_slimdev");
    return 0xffffffea;
}


// ===== sym.bt_power_probe.14c5a0b45568701d13d7dba8cdfe7851.cfi_jt @ 0x080031d0 (size 8) =====

uint64_t sym.bt_power_probe.14c5a0b45568701d13d7dba8cdfe7851.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int iVar2;
    uint uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *puVar7;
    int64_t *piVar8;
    int64_t iVar9;
    uint32_t *puVar10;
    uint64_t *puVar11;
    int64_t *piVar12;
    ulong uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar14;
    int64_t iVar15;
    ulong uVar16;
    ulong unaff_x30;
    int iStack_8c;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    _obj.bt_power_src_status = 0xfffffffefffffffe;
    *0x8000158 = 0xfffffffefffffffe;
    *0x8000160 = 0xfffffffefffffffe;
    *0x8000168 = 0xfffffffefffffffe;
    *0x8000170 = 0xfffffffefffffffe;
    *0x8000178 = 0xfffffffefffffffe;
    *0x8000180 = 0xfffffffefffffffe;
    *0x8000188 = 0xfffffffefffffffe;
    *0x8000190 = 0xfffffffefffffffe;
    *0x8000198 = 0xfffffffefffffffe;
    *0x80001a0 = 0xfffffffefffffffe;
    *0x80001a8 = 0xfffffffefffffffe;
    *0x80001b0 = 0xfffffffefffffffe;
    *0x80001b8 = 0xfffffffefffffffe;
    *0x80001c0 = 0xfffffffefffffffe;
    *0x80001c8 = 0xfffffffefffffffe;
    _segment.ehdr = kmem_cache_alloc_trace(_get_client_env_object,0xdc0,0xd0);
    if (_segment.ehdr == NULL) {
        uVar6 = 0xfffffff4;
        goto code_r0x08003d60;
    }
    uVar13 = *(param_1 + 0x300);
    *_segment.ehdr = param_1;
    iVar5 = of_find_property(uVar13,"qcom,converged-dt",0);
    piVar12 = _segment.ehdr;
    *(_segment.ehdr + 0x16) = iVar5 != 0;
    if (iVar5 != 0) {
        iVar5 = of_find_property(*(param_1 + 0x300),"qcom,wlan-sw-ctrl-gpio",0);
        if (iVar5 == 0) {
            uVar3 = 0xffffffea;
        }
        else {
            uVar3 = of_get_named_gpio_flags(*(param_1 + 0x300),"qcom,wlan-sw-ctrl-gpio",0,0);
        }
        *(_segment.ehdr + 3) = uVar3;
        gpio_to_desc();
        iVar2 = gpiod_get_raw_value();
        _printk(0x8000ef0,"bt_power_probe",iVar2);
        uVar3 = cnss_utils_update_device_type(iVar2 != 0);
        piVar12 = _segment.ehdr;
        *(_segment.ehdr + 0x18) = uVar3;
    }
    uVar6 = sym.perisec_cnss_bt_hw_disable_check(piVar12);
    if (*(param_1 + 0x300) == 0) {
        uVar6 = uVar6 & 0xffffffff;
        iVar5 = *(param_1 + 0xa0);
        if (iVar5 == 0) {
            uVar13 = 0x8001842;
            goto code_r0x08003e64;
        }
        if (*(iVar5 + 0x38) == 0) {
            *(iVar5 + 0x38) = sym.__typeid__ZTSFiiE_global_addr;
            iVar5 = *(param_1 + 0xa0);
        }
        memcpy(_segment.ehdr,iVar5,0xd0);
        piVar12 = *(param_1 + 0xa0);
        _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
code_r0x08003cb4:
        iVar5 = param_1 + 0x10;
        iVar14 = rfkill_alloc("bt_power",iVar5,2,obj.btpower_rfkill_ops,piVar12);
        if (iVar14 != 0) {
            iVar2 = device_create_file(iVar5,obj.dev_attr_extldo);
            if (iVar2 < 0) {
                _printk(0x80012e0,"btpower_rfkill_probe");
            }
            rfkill_init_sw_state(iVar14,1);
            obj.previous = 0x1;
            iVar2 = rfkill_register(iVar14);
            if (iVar2 == 0) {
                *(param_1 + 0xa8) = iVar14;
            }
            else {
                _dev_err(iVar5,"rfkill register failed=%d\n",iVar2);
                rfkill_destroy(iVar14);
                if (iVar2 < 0) goto code_r0x08003e70;
            }
            piVar12 = _segment.ehdr;
            iVar5 = *_segment.ehdr;
            uVar4 = of_property_read_string_helper(*(iVar5 + 0x300),"qcom,pdc_init_table",0,0,0);
            *(piVar12 + 0xb4) = uVar4;
            if (0 < uVar4) {
                iVar14 = __kmalloc(uVar4 << 3,0xdc0);
                piVar12[0x17] = iVar14;
                iVar2 = of_property_read_string_helper
                                  (*(iVar5 + 0x300),"qcom,pdc_init_table",iVar14,*(piVar12 + 0xb4),0);
                uVar13 = 0x8001041;
                if (-1 < iVar2) {
                    uVar13 = 0x8001061;
                }
                _printk(uVar13);
            }
            sym.btpower_aop_mbox_init(_segment.ehdr);
            uVar6 = 0;
            obj.probe_finished = 0x1;
            goto code_r0x08003d60;
        }
        _dev_err(iVar5,"rfkill allocate failed\n");
    }
    else {
        if (_segment.ehdr != NULL) {
            if ((_segment.ehdr[0x16] != '\0') &&
               (puVar7 = of_get_next_available_child(*(param_1 + 0x300),0), puVar7 != NULL)) {
                do {
                    if (_segment.ehdr[0x18] != 0) {
                        if (_segment.ehdr[0x18] == 1) {
                            iVar2 = strcmp(*puVar7,"bt_qca6490");
                            uVar13 = 0x8001655;
                            goto joined_r0x080038c4;
                        }
code_r0x080039c8:
                        *(param_1 + 0x300) = puVar7;
                        goto code_r0x080039cc;
                    }
                    iVar2 = strcmp(*puVar7,"bt_kiwi");
                    uVar13 = 0x8000a54;
joined_r0x080038c4:
                    if (iVar2 == 0) {
                        _printk(uVar13,"bt_power_populate_dt_pinfo");
                        goto code_r0x080039c8;
                    }
                    puVar7 = of_get_next_available_child(*(param_1 + 0x300),puVar7);
                } while (puVar7 != NULL);
            }
            if (*(param_1 + 0x300) == 0) goto code_r0x08003c9c;
code_r0x080039cc:
            iVar5 = param_1 + 0x10;
            piVar8 = of_device_get_match_data(iVar5);
            piVar12 = _segment.ehdr;
            if (piVar8 == NULL) {
                _printk(0x80010f2,"bt_power_vreg_get");
                uVar6 = 0xffffffea;
                goto code_r0x08003e5c;
            }
            iVar15 = piVar8[3];
            iVar14 = *piVar8;
            iVar9 = piVar8[1];
            _segment.ehdr[10] = piVar8[2];
            piVar12[0xb] = iVar15;
            piVar12[8] = iVar14;
            piVar12[9] = iVar9;
            iVar14 = piVar8[4];
            piVar12[5] = iVar14;
            uVar4 = *(piVar8 + 5);
            *(piVar12 + 0xc) = uVar4;
            if (0 < uVar4) {
                iVar15 = 0;
                while( true ) {
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_88 = 0;
                    uStack_80 = 0;
                    uVar16 = *(iVar14 + iVar15 + 8);
                    iStack_8c = 0;
                    uVar13 = *(param_1 + 0x300);
                    snprintf(&uStack_88,0x20,"%s-supply",uVar16);
                    iVar9 = of_parse_phandle(uVar13,&uStack_88,0);
                    if (iVar9 == 0) {
                        _printk(0x80012ad,"bt_dt_parse_vreg_info",uVar16);
                    }
                    else {
                        uVar6 = regulator_get(iVar5,uVar16);
                        *(iVar14 + iVar15) = uVar6;
                        if (uVar6 < 0xfffffffffffff001) {
                            snprintf(&uStack_88,0x20,"%s-config",*(iVar14 + iVar15 + 8));
                            puVar10 = of_get_property(*(param_1 + 0x300),&uStack_88,&iStack_8c);
                            if ((puVar10 != NULL) && (iStack_8c == 0x10)) {
                                iVar14 = iVar14 + iVar15;
                                uVar1 = (*puVar10 & 0xff00ff00) >> 8 | (*puVar10 & 0xff00ff) << 8;
                                *(iVar14 + 0x10) = uVar1 >> 0x10 | uVar1 << 0x10;
                                uVar1 = (puVar10[1] & 0xff00ff00) >> 8 | (puVar10[1] & 0xff00ff) << 8;
                                *(iVar14 + 0x14) = uVar1 >> 0x10 | uVar1 << 0x10;
                                uVar1 = (puVar10[2] & 0xff00ff00) >> 8 | (puVar10[2] & 0xff00ff) << 8;
                                *(iVar14 + 0x18) = uVar1 >> 0x10 | uVar1 << 0x10;
                                *(iVar14 + 0x1d) = puVar10[3] != 0;
                            }
                        }
                        else {
                            *(iVar14 + iVar15) = 0;
                            _printk(0x8000845,"bt_dt_parse_vreg_info",uVar16,uVar6 & 0xffffffff);
                            if (uVar6 != 0) {
                                piVar12 = _segment.ehdr;
                                if (uVar6 < 0) goto code_r0x08003e5c;
                                goto code_r0x08003cb0;
                            }
                        }
                    }
                    if (uVar4 * 0x28 + -0x28 == iVar15) break;
                    iVar15 = iVar15 + 0x28;
                    iVar14 = _segment.ehdr[5];
                }
            }
            iVar2 = of_get_named_gpio_flags(*(param_1 + 0x300),"qcom,bt-reset-gpio",0,0);
            *(_segment.ehdr + 1) = iVar2;
            if (iVar2 < 0) {
                _printk(0x80018c7);
            }
            iVar2 = of_get_named_gpio_flags(*(param_1 + 0x300),"qcom,wl-reset-gpio",0,0);
            *(_segment.ehdr + 0xc) = iVar2;
            if (iVar2 < 0) {
                _printk(0x80009a9,"bt_power_populate_dt_pinfo");
            }
            iVar2 = of_get_named_gpio_flags(*(param_1 + 0x300),"qcom,bt-sw-ctrl-gpio",0,0);
            *(_segment.ehdr + 2) = iVar2;
            if (iVar2 < 0) {
                _printk(0x8001678);
            }
            iVar2 = of_get_named_gpio_flags(*(param_1 + 0x300),"qcom,bt-debug-gpio",0,0);
            *(_segment.ehdr + 0x14) = iVar2;
            if (iVar2 < 0) {
                _printk(0x800195e);
            }
            iVar2 = of_get_named_gpio_flags(*(param_1 + 0x300),"qcom,xo-clk-gpio",0,0);
            piVar12 = _segment.ehdr;
            *(_segment.ehdr + 0x1c) = iVar2;
            if (iVar2 < 0) {
                _printk(0x80018f3);
                piVar12 = _segment.ehdr;
            }
            uVar13 = *(param_1 + 0x300);
            piVar12[6] = 0;
            iVar14 = of_parse_phandle(uVar13,"clocks",0);
            if (iVar14 == 0) {
                uVar13 = 0x80016b2;
code_r0x08003eec:
                _printk(uVar13,"bt_dt_parse_clk_info");
code_r0x08003ef8:
                _printk(0x800146c,"bt_power_populate_dt_pinfo");
            }
            else {
                puVar11 = devm_kmalloc(iVar5,0x18,0xdc0);
                if (puVar11 == NULL) goto code_r0x08003ef8;
                uVar6 = devm_kmalloc(iVar5,0x14,0xdc0);
                puVar11[1] = uVar6;
                iVar2 = of_property_read_string_helper(uVar13,"clock-names",puVar11 + 1,1,0);
                if (iVar2 < 0) {
                    uVar13 = 0x8001515;
                    goto code_r0x08003eec;
                }
                uVar6 = devm_clk_get(iVar5,puVar11[1]);
                *puVar11 = uVar6;
                if (uVar6 < 0xfffffffffffff001) {
                    piVar12[6] = puVar11;
                }
                else {
                    _printk(0x800191d,"bt_dt_parse_clk_info",puVar11[1],uVar6 & 0xffffffff);
                    *puVar11 = 0;
                    if (uVar6 < 0) goto code_r0x08003ef8;
                }
            }
code_r0x08003c9c:
            piVar12 = _segment.ehdr;
            uVar6 = 0;
            _segment.ehdr[7] = sym.__typeid__ZTSFiiE_global_addr;
code_r0x08003cb0:
            *(param_1 + 0xa0) = piVar12;
            goto code_r0x08003cb4;
        }
        uVar6 = 0xfffffff4;
code_r0x08003e5c:
        uVar13 = 0x800157f;
code_r0x08003e64:
        _printk(uVar13,"bt_power_probe");
    }
code_r0x08003e70:
    kfree(_segment.ehdr);
code_r0x08003d60:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_68) {
        return uVar6 & 0xffffffff;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.bt_power_remove;
    iVar14 = *(iVar5 + 0xa8);
    obj.probe_finished = 0x0;
    if (iVar14 != 0) {
        rfkill_unregister(iVar14);
    }
    rfkill_destroy(iVar14);
    *(iVar5 + 0xa8) = 0;
    uVar4 = *(_segment.ehdr + 0xc);
    if (0 < uVar4) {
        iVar5 = 0;
        piVar12 = _segment.ehdr;
        do {
            if (*(piVar12[5] + iVar5) != 0) {
                regulator_put(*(piVar12[5] + iVar5));
                piVar12 = _segment.ehdr;
            }
            iVar5 = iVar5 + 0x28;
        } while (uVar4 * 0x28 - iVar5 != 0);
    }
    kfree();
    return 0;
}


// ===== sym.bt_power_remove.14c5a0b45568701d13d7dba8cdfe7851.cfi_jt @ 0x080031d8 (size 8) =====

ulong sym.bt_power_remove.14c5a0b45568701d13d7dba8cdfe7851.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0xa8);
    obj.probe_finished = 0x0;
    if (iVar4 != 0) {
        rfkill_unregister(iVar4);
    }
    rfkill_destroy(iVar4);
    *(param_1 + 0xa8) = 0;
    uVar1 = *(_segment.ehdr + 0x60);
    if (0 < uVar1) {
        iVar4 = 0;
        iVar2 = _segment.ehdr;
        do {
            iVar3 = *(*(iVar2 + 0x28) + iVar4);
            if (iVar3 != 0) {
                regulator_put(iVar3);
                iVar2 = _segment.ehdr;
            }
            iVar4 = iVar4 + 0x28;
        } while (uVar1 * 0x28 - iVar4 != 0);
    }
    kfree();
    return 0;
}


// ===== sym.bt_ioctl.14c5a0b45568701d13d7dba8cdfe7851.cfi_jt @ 0x080031e0 (size 8) =====

int64_t sym.bt_ioctl.14c5a0b45568701d13d7dba8cdfe7851.cfi_jt
                  (uchar param_1 [16],ulong param_2,uint param_3,uint64_t param_4)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    code *pcVar4;
    int iVar5;
    int iVar6;
    uint uVar7;
    int64_t iVar8;
    ulong uVar9;
    char *pcVar10;
    uint32_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar12;
    int64_t iVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
    
    *in_x18 = unaff_x30;
    if ((CONCAT44(*0x8000004,_segment.ehdr) == 0) || ((obj.probe_finished & 1) == 0)) {
        _printk(0x8000fee,"bt_ioctl");
        return -0xb;
    }
    iVar8 = -0x203;
    iVar6 = 0;
    iVar5 = param_4;
    switch(param_3) {
    case 0xbfac:
        break;
    case 0xbfad:
        _printk(0x8000c01,"bt_ioctl",param_4 & 0xffffffff);
        if (_segment.ehdr == iVar5) {
            _printk(0x8001300,"bt_ioctl",param_4 & 0xffffffff);
            goto code_r0x08004dac;
        }
        iVar6 = sym.bluetooth_power(param_4 & 0xffffffff);
        if (iVar6 == 0) {
            _segment.ehdr = iVar5;
        }
        break;
    case 0xbfae:
        _printk(0x8000753,"bt_ioctl",param_4 & 0xffffffff);
        if (iVar5 == 0) {
            _printk(0x80013ba,"bt_ioctl");
            iVar6 = 0;
            _segment.ehdr = 0;
        }
        else {
            iVar6 = 0;
            _segment.ehdr = iVar5;
        }
        break;
    case 0xbfaf:
        iVar8 = sym._copy_to_user(param_4,param_1,0x20);
        if (iVar8 == 0) goto code_r0x08004dac;
code_r0x08005000:
        _printk(0x8000a01,"bt_ioctl");
        iVar6 = -0xe;
        break;
    case 0xbfb0:
        _printk(0x8001889);
        if (*(CONCAT44(*0x8000004,_segment.ehdr) + 0x10) < 1) {
            _printk(0x8000afa);
            return -0x16;
        }
        _segment.ehdr = -1;
        gpio_to_desc();
        iVar6 = gpiod_direction_input();
        if (iVar6 == 0) {
            gpio_to_desc(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x10));
            iVar5 = gpiod_get_raw_value();
            iVar8 = CONCAT44(*0x8000004,_segment.ehdr);
            _segment.ehdr = iVar5;
            _printk(0x800077b,*(iVar8 + 0x10),iVar5);
        }
        else {
            _printk(0x800193f,"bt_ioctl");
            _printk(0x8000f7c,"bt_ioctl",iVar6);
        }
        break;
    case 0xbfb1:
        _printk(0x800107e);
        sym.set_gpios_srcs_status(0x800180e,0xe,*(CONCAT44(*0x8000004,_segment.ehdr) + 8));
        auVar14 = sym.set_gpios_srcs_status(0x8000a1c,0xf,*(CONCAT44(*0x8000004,_segment.ehdr) + 0x10));
        iVar8 = CONCAT44(*0x8000004,_segment.ehdr);
        uVar2 = *(iVar8 + 0x60);
        if (0 < uVar2) {
            iVar13 = 0;
            do {
                iVar12 = *(iVar8 + 0x28);
                iVar8 = iVar12 + iVar13;
                if (iVar8 != 0) {
                    iVar1 = iVar12 + iVar13;
                    uVar3 = *(iVar1 + 0x24);
                    if (0x1f < uVar3) {
    //WARNING: Does not return
                        pcVar4 = SoftwareBreakpoint(0x5512,0x80050c8);
                        (*pcVar4)();
                    }
                    *(obj.bt_power_src_status + uVar3 * 4) = 0xffffffff;
                    if (*(iVar1 + 0x1c) == '\0') {
                        uVar11 = 0;
code_r0x08004f9c:
                        uVar9 = 0x80013f2;
                        pcVar10 = "set_pwr_srcs_status";
                        iVar8 = *(iVar12 + iVar13 + 8);
                    }
                    else {
                        iVar6 = regulator_is_enabled(*(iVar12 + iVar13));
                        if (iVar6 == 0) {
                            uVar11 = *(iVar1 + 0x1c);
                            goto code_r0x08004f9c;
                        }
                        uVar11 = regulator_get_voltage(*(iVar12 + iVar13));
                        *(obj.bt_power_src_status + uVar3 * 4) = uVar11;
                        pcVar10 = (iVar12 + iVar13)[1];
                        uVar9 = 0x80018a1;
                    }
                    auVar14 = _printk(uVar9,pcVar10,iVar8,uVar11);
                }
                if (uVar2 * 0x28 + -0x28 == iVar13) break;
                iVar8 = CONCAT44(*0x8000004,_segment.ehdr);
                iVar13 = iVar13 + 0x28;
            } while( true );
        }
        iVar8 = sym._copy_to_user(param_4,auVar14,0x80);
        if (iVar8 != 0) goto code_r0x08005000;
        goto code_r0x08004dac;
    default:
        goto code_r0x08004dbc;
    case 0xbfc0:
        _printk(0x8000b1c,"bt_ioctl");
        sym.btpower_enable_ipa_vreg(CONCAT44(*0x8000004,_segment.ehdr));
code_r0x08004dac:
        iVar6 = 0;
        break;
    case 0xbfc1:
        _printk(0x8000895,"bt_ioctl");
        iVar6 = param_4;
        auVar14 = panic("subsys-restart: Resetting the SoC - Bluetooth crashed\n");
        *extraout_x18 = sym.set_gpios_srcs_status;
        if (iVar6 < 0) {
            iVar8 = _printk(0x80013d9,"set_gpios_srcs_status",auVar14._0_8_);
        }
        else {
            iVar8 = (auVar14._8_8_ & 0xffffffff) * 4;
            *(obj.bt_power_src_status + iVar8) = 0xffffffff;
            gpio_to_desc(iVar6);
            uVar7 = gpiod_get_raw_value();
            *(obj.bt_power_src_status + iVar8) = uVar7;
            iVar8 = _printk(0x8001186,auVar14._0_8_,iVar6,uVar7);
        }
        return iVar8;
    }
    iVar8 = iVar6;
code_r0x08004dbc:
    return iVar8;
}


// ===== sym.perisec_cnss_bt_hw_disable_check @ 0x080031e8 (size 540) =====

int sym.perisec_cnss_bt_hw_disable_check(int64_t arg1)

{
    code *pcVar1;
    ulong uVar2;
    int iVar3;
    int64_t iVar4;
    int iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    char acStack_98 [4];
    uint uStack_94;
    code *pcStack_90;
    ulong uStack_88;
    uint uStack_7c;
    uint *puStack_78;
    ulong uStack_70;
    char *pcStack_68;
    ulong uStack_60;
    uint *puStack_58;
    ulong uStack_50;
    code *pcStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    pcStack_90 = NULL;
    uStack_88 = 0;
    uStack_94 = 0x502;
    pcStack_68 = NULL;
    uStack_60 = 0;
    puStack_78 = NULL;
    uStack_70 = 0;
    acStack_98[0] = '\0';
    iVar5 = 0;
    if (*(arg1 + 0xc4) == '\0') {
        iVar3 = get_client_env_object(&pcStack_90);
        uVar2 = uStack_88;
        pcVar1 = pcStack_90;
        if (iVar3 == 0) {
            puStack_58 = &uStack_7c;
            pcStack_48 = NULL;
            uStack_40 = 0;
            uStack_7c = 0x108;
            uStack_50 = 4;
            __cfi_slowpath_diag(0x265628c5e7c4aad4,pcStack_90,0x8000690);
            iVar3 = (*pcVar1)(uVar2,0,&puStack_58,0x1001);
            uVar2 = uStack_40;
            pcVar1 = pcStack_48;
            if (iVar3 == 0) {
                puStack_78 = &uStack_94;
                pcStack_68 = acStack_98;
                uStack_70 = 4;
                uStack_60 = 1;
                __cfi_slowpath_diag(0x265628c5e7c4aad4,pcStack_48,0x8000690);
                iVar3 = (*pcVar1)(uVar2,1,&puStack_78,0x11);
                if (iVar3 == 0) {
                    if (acStack_98[0] == '\x01') {
                        iVar3 = 0;
                        *(arg1 + 200) = 1;
                    }
                    else {
                        iVar3 = 0;
                        *(arg1 + 200) = 0;
                    }
                }
                else {
                    if (iVar3 == 10) {
                        iVar3 = 0;
                        *(arg1 + 0xc4) = 1;
                    }
                    __cfi_slowpath_diag(0x265628c5e7c4aad4,pcVar1,0x8000690);
                    (*pcVar1)(uVar2,0xffff,0,0);
                }
            }
            else if (iVar3 == 0xc) {
                iVar3 = 0;
                *(arg1 + 0xc4) = 1;
            }
            uVar2 = uStack_88;
            pcVar1 = pcStack_90;
            __cfi_slowpath_diag(0x265628c5e7c4aad4,pcStack_90,0x8000690);
            (*pcVar1)(uVar2,0xffff,0,0);
            iVar5 = 0;
            if (iVar3 == 0) goto code_r0x08003394;
        }
        _printk(0x800109a);
        iVar5 = iVar3;
    }
code_r0x08003394:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_38) {
        iVar4 = __stack_chk_fail(iVar5);
        *extraout_x18 = sym.btpower_register_slimdev;
        if ((iVar4 == 0) || (_segment.ehdr == 0)) {
            _printk(0x8001213,"btpower_register_slimdev");
            iVar5 = -0x16;
        }
        else {
            iVar5 = 0;
            *(_segment.ehdr + 0x20) = iVar4;
        }
        return iVar5;
    }
    return iVar5;
}


// ===== sym.btpower_register_slimdev @ 0x08003404 (size 88) =====

uint sym.btpower_register_slimdev(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (_segment.ehdr == 0)) {
        _printk(0x8001213,"btpower_register_slimdev");
        uVar1 = 0xffffffea;
    }
    else {
        uVar1 = 0;
        *(_segment.ehdr + 0x20) = arg1;
    }
    return uVar1;
}


// ===== sym.btpower_get_chipset_version @ 0x0800345c (size 20) =====

uint sym.btpower_get_chipset_version(void)

{
    return _segment.ehdr;
}


// ===== sym.bt_aop_send_msg @ 0x08003470 (size 144) =====

uint64_t sym.bt_aop_send_msg(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint uVar4;
    int64_t iVar5;
    int64_t *piVar6;
    int64_t iVar7;
    ulong *puVar8;
    int64_t *piVar9;
    int64_t iVar10;
    uint32_t *puVar11;
    uint64_t *puVar12;
    ulong uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint64_t uVar14;
    uint64_t uVar15;
    uint64_t unaff_x22;
    ulong unaff_x23;
    int64_t iVar16;
    int64_t iVar17;
    ulong uVar18;
    ulong unaff_x30;
    int iStack_18c;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    int64_t iStack_168;
    uchar ***pppuStack_160;
    code *pcStack_158;
    ulong uStack_f8;
    ulong uStack_f0;
    int64_t iStack_e8;
    uchar **ppuStack_e0;
    code *pcStack_d8;
    ulong uStack_d0;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    uint64_t uStack_b0;
    int64_t iStack_a8;
    ulong uStack_98;
    uint64_t uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    ulong uStack_38;
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    uStack_38 = 0x40;
    iStack_30 = arg2;
    uVar2 = mbox_send_message(*(arg1 + 0xa0),&uStack_38);
    if (uVar2 < 0) {
        uVar14 = uVar2;
        _printk(0x8000c26,arg2);
    }
    else {
        uVar14 = 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return uVar14;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.bt_aop_pdc_reconfig;
    pcStack_78 = sym.bt_aop_pdc_reconfig;
    iVar7 = sp_el0;
    iStack_88 = *(iVar7 + 0x5e0);
    iStack_a8 = arg2;
    puStack_80 = &stack0xffffffffffffffe0;
    if ((*(iVar5 + 0xb4) < 1) || (iStack_a8 = iVar5, *(iVar5 + 0xb8) == NULL)) {
code_r0x080035ac:
        uVar15 = 0;
    }
    else {
        uVar14 = **(iVar5 + 0xb8);
        uStack_98 = 0x40;
        uStack_90 = uVar14;
        uVar2 = mbox_send_message(*(iVar5 + 0xa0),&uStack_98);
        if (-1 < uVar2) {
            unaff_x22 = 1;
            unaff_x23 = 0x40;
            do {
                if (*(iVar5 + 0xb4) <= unaff_x22) goto code_r0x080035ac;
                uVar14 = *(*(iVar5 + 0xb8) + unaff_x22 * 8);
                uStack_98 = 0x40;
                uStack_90 = uVar14;
                uVar2 = mbox_send_message(*(iVar5 + 0xa0),&uStack_98);
                unaff_x22 = unaff_x22 + 1;
            } while (-1 < uVar2);
        }
        uVar15 = uVar2;
        _printk(0x8000c26,uVar14);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_88) {
        return uVar15;
    }
    piVar6 = __stack_chk_fail();
    *extraout_x18_00 = sym.btpower_aop_mbox_init;
    pcStack_d8 = sym.btpower_aop_mbox_init;
    iVar7 = sp_el0;
    iStack_e8 = *(iVar7 + 0x5e0);
    piVar6[0xd] = *piVar6 + 0x10;
    *(piVar6 + 0xe) = 1;
    piVar6[0xf] = 1000;
    *(piVar6 + 0x10) = 0;
    piVar6[0x14] = 0;
    ppuStack_e0 = &puStack_80;
    uStack_d0 = unaff_x23;
    uStack_c0 = unaff_x22;
    uStack_b8 = uVar15;
    uStack_b0 = uVar14;
    uVar14 = mbox_request_channel(piVar6 + 0xd,0);
    if (uVar14 < 0xfffffffffffff001) {
        piVar6[0x14] = uVar14;
        iVar3 = of_property_read_string(*(*piVar6 + 0x300),"qcom,vreg_ipa",piVar6 + 0x15);
        uVar13 = 0x80006eb;
        if (iVar3 != 0) {
            uVar13 = 0x8001715;
        }
        _printk(uVar13,"btpower_aop_mbox_init");
        if ((0 < *(piVar6 + 0xb4)) && (piVar6[0x17] != NULL)) {
            uVar13 = *piVar6[0x17];
            uStack_f8 = 0x40;
            uStack_f0 = uVar13;
            iVar3 = mbox_send_message(piVar6[0x14],&uStack_f8);
            if (-1 < iVar3) {
                uVar14 = 1;
                do {
                    if (*(piVar6 + 0xb4) <= uVar14) goto code_r0x08003734;
                    uVar13 = *(piVar6[0x17] + uVar14 * 8);
                    uStack_f8 = 0x40;
                    uStack_f0 = uVar13;
                    iVar3 = mbox_send_message(piVar6[0x14],&uStack_f8);
                    uVar14 = uVar14 + 1;
                } while (-1 < iVar3);
            }
            _printk(0x8000c26,uVar13);
            _printk(0x8001439,iVar3);
        }
code_r0x08003734:
        uVar14 = 0;
    }
    else {
        _printk(0x8001349,"btpower_aop_mbox_init");
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_e8) {
        return uVar14 & 0xffffffff;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18_01 = sym.bt_power_probe;
    pcStack_158 = sym.bt_power_probe;
    iVar7 = sp_el0;
    iStack_168 = *(iVar7 + 0x5e0);
    _obj.bt_power_src_status = 0xfffffffefffffffe;
    *0x8000158 = 0xfffffffefffffffe;
    *0x8000160 = 0xfffffffefffffffe;
    *0x8000168 = 0xfffffffefffffffe;
    *0x8000170 = 0xfffffffefffffffe;
    *0x8000178 = 0xfffffffefffffffe;
    *0x8000180 = 0xfffffffefffffffe;
    *0x8000188 = 0xfffffffefffffffe;
    *0x8000190 = 0xfffffffefffffffe;
    *0x8000198 = 0xfffffffefffffffe;
    *0x80001a0 = 0xfffffffefffffffe;
    *0x80001a8 = 0xfffffffefffffffe;
    *0x80001b0 = 0xfffffffefffffffe;
    *0x80001b8 = 0xfffffffefffffffe;
    *0x80001c0 = 0xfffffffefffffffe;
    *0x80001c8 = 0xfffffffefffffffe;
    pppuStack_160 = &ppuStack_e0;
    _segment.ehdr = kmem_cache_alloc_trace(_get_client_env_object,0xdc0,0xd0);
    if (_segment.ehdr == NULL) {
        uVar14 = 0xfffffff4;
        goto code_r0x08003d60;
    }
    uVar13 = *(iVar5 + 0x300);
    *_segment.ehdr = iVar5;
    iVar7 = of_find_property(uVar13,"qcom,converged-dt",0);
    piVar6 = _segment.ehdr;
    *(_segment.ehdr + 0x16) = iVar7 != 0;
    if (iVar7 != 0) {
        iVar7 = of_find_property(*(iVar5 + 0x300),"qcom,wlan-sw-ctrl-gpio",0);
        if (iVar7 == 0) {
            uVar4 = 0xffffffea;
        }
        else {
            uVar4 = of_get_named_gpio_flags(*(iVar5 + 0x300),"qcom,wlan-sw-ctrl-gpio",0,0);
        }
        *(_segment.ehdr + 3) = uVar4;
        gpio_to_desc();
        iVar3 = gpiod_get_raw_value();
        _printk(0x8000ef0,"bt_power_probe",iVar3);
        uVar4 = cnss_utils_update_device_type(iVar3 != 0);
        piVar6 = _segment.ehdr;
        *(_segment.ehdr + 0x18) = uVar4;
    }
    uVar14 = sym.perisec_cnss_bt_hw_disable_check(piVar6);
    if (*(iVar5 + 0x300) == 0) {
        uVar14 = uVar14 & 0xffffffff;
        iVar7 = *(iVar5 + 0xa0);
        if (iVar7 == 0) {
            uVar13 = 0x8001842;
            goto code_r0x08003e64;
        }
        if (*(iVar7 + 0x38) == 0) {
            *(iVar7 + 0x38) = sym.__typeid__ZTSFiiE_global_addr;
            iVar7 = *(iVar5 + 0xa0);
        }
        memcpy(_segment.ehdr,iVar7,0xd0);
        piVar6 = *(iVar5 + 0xa0);
        _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
code_r0x08003cb4:
        iVar7 = iVar5 + 0x10;
        iVar16 = rfkill_alloc("bt_power",iVar7,2,obj.btpower_rfkill_ops,piVar6);
        if (iVar16 != 0) {
            iVar3 = device_create_file(iVar7,obj.dev_attr_extldo);
            if (iVar3 < 0) {
                _printk(0x80012e0,"btpower_rfkill_probe");
            }
            rfkill_init_sw_state(iVar16,1);
            obj.previous = 0x1;
            iVar3 = rfkill_register(iVar16);
            if (iVar3 == 0) {
                *(iVar5 + 0xa8) = iVar16;
            }
            else {
                _dev_err(iVar7,"rfkill register failed=%d\n",iVar3);
                rfkill_destroy(iVar16);
                if (iVar3 < 0) goto code_r0x08003e70;
            }
            piVar6 = _segment.ehdr;
            iVar7 = *_segment.ehdr;
            uVar2 = of_property_read_string_helper(*(iVar7 + 0x300),"qcom,pdc_init_table",0,0,0);
            *(piVar6 + 0xb4) = uVar2;
            if (0 < uVar2) {
                iVar5 = __kmalloc(uVar2 << 3,0xdc0);
                piVar6[0x17] = iVar5;
                iVar3 = of_property_read_string_helper
                                  (*(iVar7 + 0x300),"qcom,pdc_init_table",iVar5,*(piVar6 + 0xb4),0);
                uVar13 = 0x8001041;
                if (-1 < iVar3) {
                    uVar13 = 0x8001061;
                }
                _printk(uVar13);
            }
            sym.btpower_aop_mbox_init(_segment.ehdr);
            uVar14 = 0;
            obj.probe_finished = 0x1;
            goto code_r0x08003d60;
        }
        _dev_err(iVar7,"rfkill allocate failed\n");
    }
    else {
        if (_segment.ehdr != NULL) {
            if ((_segment.ehdr[0x16] != '\0') &&
               (puVar8 = of_get_next_available_child(*(iVar5 + 0x300),0), puVar8 != NULL)) {
                do {
                    if (_segment.ehdr[0x18] != 0) {
                        if (_segment.ehdr[0x18] == 1) {
                            iVar3 = strcmp(*puVar8,"bt_qca6490");
                            uVar13 = 0x8001655;
                            goto joined_r0x080038c4;
                        }
code_r0x080039c8:
                        *(iVar5 + 0x300) = puVar8;
                        goto code_r0x080039cc;
                    }
                    iVar3 = strcmp(*puVar8,"bt_kiwi");
                    uVar13 = 0x8000a54;
joined_r0x080038c4:
                    if (iVar3 == 0) {
                        _printk(uVar13,"bt_power_populate_dt_pinfo");
                        goto code_r0x080039c8;
                    }
                    puVar8 = of_get_next_available_child(*(iVar5 + 0x300),puVar8);
                } while (puVar8 != NULL);
            }
            if (*(iVar5 + 0x300) == 0) goto code_r0x08003c9c;
code_r0x080039cc:
            iVar7 = iVar5 + 0x10;
            piVar9 = of_device_get_match_data(iVar7);
            piVar6 = _segment.ehdr;
            if (piVar9 == NULL) {
                _printk(0x80010f2,"bt_power_vreg_get");
                uVar14 = 0xffffffea;
                goto code_r0x08003e5c;
            }
            iVar17 = piVar9[3];
            iVar16 = *piVar9;
            iVar10 = piVar9[1];
            _segment.ehdr[10] = piVar9[2];
            piVar6[0xb] = iVar17;
            piVar6[8] = iVar16;
            piVar6[9] = iVar10;
            iVar16 = piVar9[4];
            piVar6[5] = iVar16;
            uVar2 = *(piVar9 + 5);
            *(piVar6 + 0xc) = uVar2;
            if (0 < uVar2) {
                iVar17 = 0;
                while( true ) {
                    uStack_178 = 0;
                    uStack_170 = 0;
                    uStack_188 = 0;
                    uStack_180 = 0;
                    uVar18 = *(iVar16 + iVar17 + 8);
                    iStack_18c = 0;
                    uVar13 = *(iVar5 + 0x300);
                    snprintf(&uStack_188,0x20,"%s-supply",uVar18);
                    iVar10 = of_parse_phandle(uVar13,&uStack_188,0);
                    if (iVar10 == 0) {
                        _printk(0x80012ad,"bt_dt_parse_vreg_info",uVar18);
                    }
                    else {
                        uVar14 = regulator_get(iVar7,uVar18);
                        *(iVar16 + iVar17) = uVar14;
                        if (uVar14 < 0xfffffffffffff001) {
                            snprintf(&uStack_188,0x20,"%s-config",*(iVar16 + iVar17 + 8));
                            puVar11 = of_get_property(*(iVar5 + 0x300),&uStack_188,&iStack_18c);
                            if ((puVar11 != NULL) && (iStack_18c == 0x10)) {
                                iVar16 = iVar16 + iVar17;
                                uVar1 = (*puVar11 & 0xff00ff00) >> 8 | (*puVar11 & 0xff00ff) << 8;
                                *(iVar16 + 0x10) = uVar1 >> 0x10 | uVar1 << 0x10;
                                uVar1 = (puVar11[1] & 0xff00ff00) >> 8 | (puVar11[1] & 0xff00ff) << 8;
                                *(iVar16 + 0x14) = uVar1 >> 0x10 | uVar1 << 0x10;
                                uVar1 = (puVar11[2] & 0xff00ff00) >> 8 | (puVar11[2] & 0xff00ff) << 8;
                                *(iVar16 + 0x18) = uVar1 >> 0x10 | uVar1 << 0x10;
                                *(iVar16 + 0x1d) = puVar11[3] != 0;
                            }
                        }
                        else {
                            *(iVar16 + iVar17) = 0;
                            _printk(0x8000845,"bt_dt_parse_vreg_info",uVar18,uVar14 & 0xffffffff);
                            if (uVar14 != 0) {
                                piVar6 = _segment.ehdr;
                                if (uVar14 < 0) goto code_r0x08003e5c;
                                goto code_r0x08003cb0;
                            }
                        }
                    }
                    if (uVar2 * 0x28 + -0x28 == iVar17) break;
                    iVar17 = iVar17 + 0x28;
                    iVar16 = _segment.ehdr[5];
                }
            }
            iVar3 = of_get_named_gpio_flags(*(iVar5 + 0x300),"qcom,bt-reset-gpio",0,0);
            *(_segment.ehdr + 1) = iVar3;
            if (iVar3 < 0) {
                _printk(0x80018c7);
            }
            iVar3 = of_get_named_gpio_flags(*(iVar5 + 0x300),"qcom,wl-reset-gpio",0,0);
            *(_segment.ehdr + 0xc) = iVar3;
            if (iVar3 < 0) {
                _printk(0x80009a9,"bt_power_populate_dt_pinfo");
            }
            iVar3 = of_get_named_gpio_flags(*(iVar5 + 0x300),"qcom,bt-sw-ctrl-gpio",0,0);
            *(_segment.ehdr + 2) = iVar3;
            if (iVar3 < 0) {
                _printk(0x8001678);
            }
            iVar3 = of_get_named_gpio_flags(*(iVar5 + 0x300),"qcom,bt-debug-gpio",0,0);
            *(_segment.ehdr + 0x14) = iVar3;
            if (iVar3 < 0) {
                _printk(0x800195e);
            }
            iVar3 = of_get_named_gpio_flags(*(iVar5 + 0x300),"qcom,xo-clk-gpio",0,0);
            piVar6 = _segment.ehdr;
            *(_segment.ehdr + 0x1c) = iVar3;
            if (iVar3 < 0) {
                _printk(0x80018f3);
                piVar6 = _segment.ehdr;
            }
            uVar13 = *(iVar5 + 0x300);
            piVar6[6] = 0;
            iVar16 = of_parse_phandle(uVar13,"clocks",0);
            if (iVar16 == 0) {
                uVar13 = 0x80016b2;
code_r0x08003eec:
                _printk(uVar13,"bt_dt_parse_clk_info");
code_r0x08003ef8:
                _printk(0x800146c,"bt_power_populate_dt_pinfo");
            }
            else {
                puVar12 = devm_kmalloc(iVar7,0x18,0xdc0);
                if (puVar12 == NULL) goto code_r0x08003ef8;
                uVar14 = devm_kmalloc(iVar7,0x14,0xdc0);
                puVar12[1] = uVar14;
                iVar3 = of_property_read_string_helper(uVar13,"clock-names",puVar12 + 1,1,0);
                if (iVar3 < 0) {
                    uVar13 = 0x8001515;
                    goto code_r0x08003eec;
                }
                uVar14 = devm_clk_get(iVar7,puVar12[1]);
                *puVar12 = uVar14;
                if (uVar14 < 0xfffffffffffff001) {
                    piVar6[6] = puVar12;
                }
                else {
                    _printk(0x800191d,"bt_dt_parse_clk_info",puVar12[1],uVar14 & 0xffffffff);
                    *puVar12 = 0;
                    if (uVar14 < 0) goto code_r0x08003ef8;
                }
            }
code_r0x08003c9c:
            piVar6 = _segment.ehdr;
            uVar14 = 0;
            _segment.ehdr[7] = sym.__typeid__ZTSFiiE_global_addr;
code_r0x08003cb0:
            *(iVar5 + 0xa0) = piVar6;
            goto code_r0x08003cb4;
        }
        uVar14 = 0xfffffff4;
code_r0x08003e5c:
        uVar13 = 0x800157f;
code_r0x08003e64:
        _printk(uVar13,"bt_power_probe");
    }
code_r0x08003e70:
    kfree(_segment.ehdr);
code_r0x08003d60:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_168) {
        return uVar14 & 0xffffffff;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18_02 = sym.bt_power_remove;
    iVar5 = *(iVar7 + 0xa8);
    obj.probe_finished = 0x0;
    if (iVar5 != 0) {
        rfkill_unregister(iVar5);
    }
    rfkill_destroy(iVar5);
    *(iVar7 + 0xa8) = 0;
    uVar2 = *(_segment.ehdr + 0xc);
    if (0 < uVar2) {
        iVar7 = 0;
        piVar6 = _segment.ehdr;
        do {
            if (*(piVar6[5] + iVar7) != 0) {
                regulator_put(*(piVar6[5] + iVar7));
                piVar6 = _segment.ehdr;
            }
            iVar7 = iVar7 + 0x28;
        } while (uVar2 * 0x28 - iVar7 != 0);
    }
    kfree();
    return 0;
}


// ===== sym.bt_aop_pdc_reconfig @ 0x08003500 (size 236) =====

uint64_t sym.bt_aop_pdc_reconfig(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint uVar4;
    int64_t *piVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong *puVar8;
    int64_t *piVar9;
    int64_t iVar10;
    uint32_t *puVar11;
    uint64_t *puVar12;
    ulong uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t unaff_x19;
    ulong unaff_x20;
    uint64_t uVar14;
    uint64_t unaff_x22;
    ulong unaff_x23;
    int64_t iVar15;
    int64_t iVar16;
    ulong uVar17;
    ulong unaff_x30;
    int iStack_14c;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    int64_t iStack_128;
    uchar **ppuStack_120;
    code *pcStack_118;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    ulong uStack_90;
    uint64_t uStack_80;
    uint64_t uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_48 = *(iVar7 + 0x5e0);
    iStack_68 = unaff_x19;
    if ((*(arg1 + 0xb4) < 1) || (iStack_68 = arg1, *(arg1 + 0xb8) == NULL)) {
code_r0x080035ac:
        uVar14 = 0;
    }
    else {
        unaff_x20 = **(arg1 + 0xb8);
        uStack_58 = 0x40;
        uStack_50 = unaff_x20;
        uVar2 = mbox_send_message(*(arg1 + 0xa0),&uStack_58);
        if (-1 < uVar2) {
            unaff_x22 = 1;
            unaff_x23 = 0x40;
            do {
                if (*(arg1 + 0xb4) <= unaff_x22) goto code_r0x080035ac;
                unaff_x20 = *(*(arg1 + 0xb8) + unaff_x22 * 8);
                uStack_58 = 0x40;
                uStack_50 = unaff_x20;
                uVar2 = mbox_send_message(*(arg1 + 0xa0),&uStack_58);
                unaff_x22 = unaff_x22 + 1;
            } while (-1 < uVar2);
        }
        uVar14 = uVar2;
        _printk(0x8000c26,unaff_x20);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_48) {
        return uVar14;
    }
    piVar5 = __stack_chk_fail();
    *extraout_x18 = sym.btpower_aop_mbox_init;
    pcStack_98 = sym.btpower_aop_mbox_init;
    iVar7 = sp_el0;
    iStack_a8 = *(iVar7 + 0x5e0);
    piVar5[0xd] = *piVar5 + 0x10;
    *(piVar5 + 0xe) = 1;
    piVar5[0xf] = 1000;
    *(piVar5 + 0x10) = 0;
    piVar5[0x14] = 0;
    puStack_a0 = &stack0xffffffffffffffc0;
    uStack_90 = unaff_x23;
    uStack_80 = unaff_x22;
    uStack_78 = uVar14;
    uStack_70 = unaff_x20;
    uVar14 = mbox_request_channel(piVar5 + 0xd,0);
    if (uVar14 < 0xfffffffffffff001) {
        piVar5[0x14] = uVar14;
        iVar3 = of_property_read_string(*(*piVar5 + 0x300),"qcom,vreg_ipa",piVar5 + 0x15);
        uVar13 = 0x80006eb;
        if (iVar3 != 0) {
            uVar13 = 0x8001715;
        }
        _printk(uVar13,"btpower_aop_mbox_init");
        if ((0 < *(piVar5 + 0xb4)) && (piVar5[0x17] != NULL)) {
            uVar13 = *piVar5[0x17];
            uStack_b8 = 0x40;
            uStack_b0 = uVar13;
            iVar3 = mbox_send_message(piVar5[0x14],&uStack_b8);
            if (-1 < iVar3) {
                uVar14 = 1;
                do {
                    if (*(piVar5 + 0xb4) <= uVar14) goto code_r0x08003734;
                    uVar13 = *(piVar5[0x17] + uVar14 * 8);
                    uStack_b8 = 0x40;
                    uStack_b0 = uVar13;
                    iVar3 = mbox_send_message(piVar5[0x14],&uStack_b8);
                    uVar14 = uVar14 + 1;
                } while (-1 < iVar3);
            }
            _printk(0x8000c26,uVar13);
            _printk(0x8001439,iVar3);
        }
code_r0x08003734:
        uVar14 = 0;
    }
    else {
        _printk(0x8001349,"btpower_aop_mbox_init");
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_a8) {
        return uVar14 & 0xffffffff;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18_00 = sym.bt_power_probe;
    pcStack_118 = sym.bt_power_probe;
    iVar7 = sp_el0;
    iStack_128 = *(iVar7 + 0x5e0);
    _obj.bt_power_src_status = 0xfffffffefffffffe;
    *0x8000158 = 0xfffffffefffffffe;
    *0x8000160 = 0xfffffffefffffffe;
    *0x8000168 = 0xfffffffefffffffe;
    *0x8000170 = 0xfffffffefffffffe;
    *0x8000178 = 0xfffffffefffffffe;
    *0x8000180 = 0xfffffffefffffffe;
    *0x8000188 = 0xfffffffefffffffe;
    *0x8000190 = 0xfffffffefffffffe;
    *0x8000198 = 0xfffffffefffffffe;
    *0x80001a0 = 0xfffffffefffffffe;
    *0x80001a8 = 0xfffffffefffffffe;
    *0x80001b0 = 0xfffffffefffffffe;
    *0x80001b8 = 0xfffffffefffffffe;
    *0x80001c0 = 0xfffffffefffffffe;
    *0x80001c8 = 0xfffffffefffffffe;
    ppuStack_120 = &puStack_a0;
    _segment.ehdr = kmem_cache_alloc_trace(_get_client_env_object,0xdc0,0xd0);
    if (_segment.ehdr == NULL) {
        uVar14 = 0xfffffff4;
        goto code_r0x08003d60;
    }
    uVar13 = *(iVar6 + 0x300);
    *_segment.ehdr = iVar6;
    iVar7 = of_find_property(uVar13,"qcom,converged-dt",0);
    piVar5 = _segment.ehdr;
    *(_segment.ehdr + 0x16) = iVar7 != 0;
    if (iVar7 != 0) {
        iVar7 = of_find_property(*(iVar6 + 0x300),"qcom,wlan-sw-ctrl-gpio",0);
        if (iVar7 == 0) {
            uVar4 = 0xffffffea;
        }
        else {
            uVar4 = of_get_named_gpio_flags(*(iVar6 + 0x300),"qcom,wlan-sw-ctrl-gpio",0,0);
        }
        *(_segment.ehdr + 3) = uVar4;
        gpio_to_desc();
        iVar3 = gpiod_get_raw_value();
        _printk(0x8000ef0,"bt_power_probe",iVar3);
        uVar4 = cnss_utils_update_device_type(iVar3 != 0);
        piVar5 = _segment.ehdr;
        *(_segment.ehdr + 0x18) = uVar4;
    }
    uVar14 = sym.perisec_cnss_bt_hw_disable_check(piVar5);
    if (*(iVar6 + 0x300) == 0) {
        uVar14 = uVar14 & 0xffffffff;
        iVar7 = *(iVar6 + 0xa0);
        if (iVar7 == 0) {
            uVar13 = 0x8001842;
            goto code_r0x08003e64;
        }
        if (*(iVar7 + 0x38) == 0) {
            *(iVar7 + 0x38) = sym.__typeid__ZTSFiiE_global_addr;
            iVar7 = *(iVar6 + 0xa0);
        }
        memcpy(_segment.ehdr,iVar7,0xd0);
        piVar5 = *(iVar6 + 0xa0);
        _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
code_r0x08003cb4:
        iVar7 = iVar6 + 0x10;
        iVar15 = rfkill_alloc("bt_power",iVar7,2,obj.btpower_rfkill_ops,piVar5);
        if (iVar15 != 0) {
            iVar3 = device_create_file(iVar7,obj.dev_attr_extldo);
            if (iVar3 < 0) {
                _printk(0x80012e0,"btpower_rfkill_probe");
            }
            rfkill_init_sw_state(iVar15,1);
            obj.previous = 0x1;
            iVar3 = rfkill_register(iVar15);
            if (iVar3 == 0) {
                *(iVar6 + 0xa8) = iVar15;
            }
            else {
                _dev_err(iVar7,"rfkill register failed=%d\n",iVar3);
                rfkill_destroy(iVar15);
                if (iVar3 < 0) goto code_r0x08003e70;
            }
            piVar5 = _segment.ehdr;
            iVar7 = *_segment.ehdr;
            uVar2 = of_property_read_string_helper(*(iVar7 + 0x300),"qcom,pdc_init_table",0,0,0);
            *(piVar5 + 0xb4) = uVar2;
            if (0 < uVar2) {
                iVar6 = __kmalloc(uVar2 << 3,0xdc0);
                piVar5[0x17] = iVar6;
                iVar3 = of_property_read_string_helper
                                  (*(iVar7 + 0x300),"qcom,pdc_init_table",iVar6,*(piVar5 + 0xb4),0);
                uVar13 = 0x8001041;
                if (-1 < iVar3) {
                    uVar13 = 0x8001061;
                }
                _printk(uVar13);
            }
            sym.btpower_aop_mbox_init(_segment.ehdr);
            uVar14 = 0;
            obj.probe_finished = 0x1;
            goto code_r0x08003d60;
        }
        _dev_err(iVar7,"rfkill allocate failed\n");
    }
    else {
        if (_segment.ehdr != NULL) {
            if ((_segment.ehdr[0x16] != '\0') &&
               (puVar8 = of_get_next_available_child(*(iVar6 + 0x300),0), puVar8 != NULL)) {
                do {
                    if (_segment.ehdr[0x18] != 0) {
                        if (_segment.ehdr[0x18] == 1) {
                            iVar3 = strcmp(*puVar8,"bt_qca6490");
                            uVar13 = 0x8001655;
                            goto joined_r0x080038c4;
                        }
code_r0x080039c8:
                        *(iVar6 + 0x300) = puVar8;
                        goto code_r0x080039cc;
                    }
                    iVar3 = strcmp(*puVar8,"bt_kiwi");
                    uVar13 = 0x8000a54;
joined_r0x080038c4:
                    if (iVar3 == 0) {
                        _printk(uVar13,"bt_power_populate_dt_pinfo");
                        goto code_r0x080039c8;
                    }
                    puVar8 = of_get_next_available_child(*(iVar6 + 0x300),puVar8);
                } while (puVar8 != NULL);
            }
            if (*(iVar6 + 0x300) == 0) goto code_r0x08003c9c;
code_r0x080039cc:
            iVar7 = iVar6 + 0x10;
            piVar9 = of_device_get_match_data(iVar7);
            piVar5 = _segment.ehdr;
            if (piVar9 == NULL) {
                _printk(0x80010f2,"bt_power_vreg_get");
                uVar14 = 0xffffffea;
                goto code_r0x08003e5c;
            }
            iVar16 = piVar9[3];
            iVar15 = *piVar9;
            iVar10 = piVar9[1];
            _segment.ehdr[10] = piVar9[2];
            piVar5[0xb] = iVar16;
            piVar5[8] = iVar15;
            piVar5[9] = iVar10;
            iVar15 = piVar9[4];
            piVar5[5] = iVar15;
            uVar2 = *(piVar9 + 5);
            *(piVar5 + 0xc) = uVar2;
            if (0 < uVar2) {
                iVar16 = 0;
                while( true ) {
                    uStack_138 = 0;
                    uStack_130 = 0;
                    uStack_148 = 0;
                    uStack_140 = 0;
                    uVar17 = *(iVar15 + iVar16 + 8);
                    iStack_14c = 0;
                    uVar13 = *(iVar6 + 0x300);
                    snprintf(&uStack_148,0x20,"%s-supply",uVar17);
                    iVar10 = of_parse_phandle(uVar13,&uStack_148,0);
                    if (iVar10 == 0) {
                        _printk(0x80012ad,"bt_dt_parse_vreg_info",uVar17);
                    }
                    else {
                        uVar14 = regulator_get(iVar7,uVar17);
                        *(iVar15 + iVar16) = uVar14;
                        if (uVar14 < 0xfffffffffffff001) {
                            snprintf(&uStack_148,0x20,"%s-config",*(iVar15 + iVar16 + 8));
                            puVar11 = of_get_property(*(iVar6 + 0x300),&uStack_148,&iStack_14c);
                            if ((puVar11 != NULL) && (iStack_14c == 0x10)) {
                                iVar15 = iVar15 + iVar16;
                                uVar1 = (*puVar11 & 0xff00ff00) >> 8 | (*puVar11 & 0xff00ff) << 8;
                                *(iVar15 + 0x10) = uVar1 >> 0x10 | uVar1 << 0x10;
                                uVar1 = (puVar11[1] & 0xff00ff00) >> 8 | (puVar11[1] & 0xff00ff) << 8;
                                *(iVar15 + 0x14) = uVar1 >> 0x10 | uVar1 << 0x10;
                                uVar1 = (puVar11[2] & 0xff00ff00) >> 8 | (puVar11[2] & 0xff00ff) << 8;
                                *(iVar15 + 0x18) = uVar1 >> 0x10 | uVar1 << 0x10;
                                *(iVar15 + 0x1d) = puVar11[3] != 0;
                            }
                        }
                        else {
                            *(iVar15 + iVar16) = 0;
                            _printk(0x8000845,"bt_dt_parse_vreg_info",uVar17,uVar14 & 0xffffffff);
                            if (uVar14 != 0) {
                                piVar5 = _segment.ehdr;
                                if (uVar14 < 0) goto code_r0x08003e5c;
                                goto code_r0x08003cb0;
                            }
                        }
                    }
                    if (uVar2 * 0x28 + -0x28 == iVar16) break;
                    iVar16 = iVar16 + 0x28;
                    iVar15 = _segment.ehdr[5];
                }
            }
            iVar3 = of_get_named_gpio_flags(*(iVar6 + 0x300),"qcom,bt-reset-gpio",0,0);
            *(_segment.ehdr + 1) = iVar3;
            if (iVar3 < 0) {
                _printk(0x80018c7);
            }
            iVar3 = of_get_named_gpio_flags(*(iVar6 + 0x300),"qcom,wl-reset-gpio",0,0);
            *(_segment.ehdr + 0xc) = iVar3;
            if (iVar3 < 0) {
                _printk(0x80009a9,"bt_power_populate_dt_pinfo");
            }
            iVar3 = of_get_named_gpio_flags(*(iVar6 + 0x300),"qcom,bt-sw-ctrl-gpio",0,0);
            *(_segment.ehdr + 2) = iVar3;
            if (iVar3 < 0) {
                _printk(0x8001678);
            }
            iVar3 = of_get_named_gpio_flags(*(iVar6 + 0x300),"qcom,bt-debug-gpio",0,0);
            *(_segment.ehdr + 0x14) = iVar3;
            if (iVar3 < 0) {
                _printk(0x800195e);
            }
            iVar3 = of_get_named_gpio_flags(*(iVar6 + 0x300),"qcom,xo-clk-gpio",0,0);
            piVar5 = _segment.ehdr;
            *(_segment.ehdr + 0x1c) = iVar3;
            if (iVar3 < 0) {
                _printk(0x80018f3);
                piVar5 = _segment.ehdr;
            }
            uVar13 = *(iVar6 + 0x300);
            piVar5[6] = 0;
            iVar15 = of_parse_phandle(uVar13,"clocks",0);
            if (iVar15 == 0) {
                uVar13 = 0x80016b2;
code_r0x08003eec:
                _printk(uVar13,"bt_dt_parse_clk_info");
code_r0x08003ef8:
                _printk(0x800146c,"bt_power_populate_dt_pinfo");
            }
            else {
                puVar12 = devm_kmalloc(iVar7,0x18,0xdc0);
                if (puVar12 == NULL) goto code_r0x08003ef8;
                uVar14 = devm_kmalloc(iVar7,0x14,0xdc0);
                puVar12[1] = uVar14;
                iVar3 = of_property_read_string_helper(uVar13,"clock-names",puVar12 + 1,1,0);
                if (iVar3 < 0) {
                    uVar13 = 0x8001515;
                    goto code_r0x08003eec;
                }
                uVar14 = devm_clk_get(iVar7,puVar12[1]);
                *puVar12 = uVar14;
                if (uVar14 < 0xfffffffffffff001) {
                    piVar5[6] = puVar12;
                }
                else {
                    _printk(0x800191d,"bt_dt_parse_clk_info",puVar12[1],uVar14 & 0xffffffff);
                    *puVar12 = 0;
                    if (uVar14 < 0) goto code_r0x08003ef8;
                }
            }
code_r0x08003c9c:
            piVar5 = _segment.ehdr;
            uVar14 = 0;
            _segment.ehdr[7] = sym.__typeid__ZTSFiiE_global_addr;
code_r0x08003cb0:
            *(iVar6 + 0xa0) = piVar5;
            goto code_r0x08003cb4;
        }
        uVar14 = 0xfffffff4;
code_r0x08003e5c:
        uVar13 = 0x800157f;
code_r0x08003e64:
        _printk(uVar13,"bt_power_probe");
    }
code_r0x08003e70:
    kfree(_segment.ehdr);
code_r0x08003d60:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_128) {
        return uVar14 & 0xffffffff;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18_01 = sym.bt_power_remove;
    iVar6 = *(iVar7 + 0xa8);
    obj.probe_finished = 0x0;
    if (iVar6 != 0) {
        rfkill_unregister(iVar6);
    }
    rfkill_destroy(iVar6);
    *(iVar7 + 0xa8) = 0;
    uVar2 = *(_segment.ehdr + 0xc);
    if (0 < uVar2) {
        iVar7 = 0;
        piVar5 = _segment.ehdr;
        do {
            if (*(piVar5[5] + iVar7) != 0) {
                regulator_put(*(piVar5[5] + iVar7));
                piVar5 = _segment.ehdr;
            }
            iVar7 = iVar7 + 0x28;
        } while (uVar2 * 0x28 - iVar7 != 0);
    }
    kfree();
    return 0;
}


// ===== sym.btpower_aop_mbox_init @ 0x080035ec (size 392) =====

uint64_t sym.btpower_aop_mbox_init(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    uint uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong *puVar8;
    int64_t *piVar9;
    int64_t iVar10;
    uint32_t *puVar11;
    uint64_t *puVar12;
    int64_t *piVar13;
    ulong uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar15;
    int64_t iVar16;
    ulong uVar17;
    ulong unaff_x30;
    int iStack_ec;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_48 = *(iVar7 + 0x5e0);
    *(arg1 + 0x68) = *arg1 + 0x10;
    *(arg1 + 0x70) = 1;
    *(arg1 + 0x78) = 1000;
    *(arg1 + 0x80) = 0;
    *(arg1 + 0xa0) = 0;
    uVar5 = mbox_request_channel(arg1 + 0x68,0);
    if (uVar5 < 0xfffffffffffff001) {
        *(arg1 + 0xa0) = uVar5;
        iVar2 = of_property_read_string(*(*arg1 + 0x300),"qcom,vreg_ipa",arg1 + 0xa8);
        uVar14 = 0x80006eb;
        if (iVar2 != 0) {
            uVar14 = 0x8001715;
        }
        _printk(uVar14,"btpower_aop_mbox_init");
        if ((0 < *(arg1 + 0xb4)) && (*(arg1 + 0xb8) != NULL)) {
            uVar14 = **(arg1 + 0xb8);
            uStack_58 = 0x40;
            uStack_50 = uVar14;
            iVar2 = mbox_send_message(*(arg1 + 0xa0),&uStack_58);
            if (-1 < iVar2) {
                uVar5 = 1;
                do {
                    if (*(arg1 + 0xb4) <= uVar5) goto code_r0x08003734;
                    uVar14 = *(*(arg1 + 0xb8) + uVar5 * 8);
                    uStack_58 = 0x40;
                    uStack_50 = uVar14;
                    iVar2 = mbox_send_message(*(arg1 + 0xa0),&uStack_58);
                    uVar5 = uVar5 + 1;
                } while (-1 < iVar2);
            }
            _printk(0x8000c26,uVar14);
            _printk(0x8001439,iVar2);
        }
code_r0x08003734:
        uVar5 = 0;
    }
    else {
        _printk(0x8001349,"btpower_aop_mbox_init");
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_48) {
        return uVar5 & 0xffffffff;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.bt_power_probe;
    pcStack_b8 = sym.bt_power_probe;
    iVar7 = sp_el0;
    iStack_c8 = *(iVar7 + 0x5e0);
    _obj.bt_power_src_status = 0xfffffffefffffffe;
    *0x8000158 = 0xfffffffefffffffe;
    *0x8000160 = 0xfffffffefffffffe;
    *0x8000168 = 0xfffffffefffffffe;
    *0x8000170 = 0xfffffffefffffffe;
    *0x8000178 = 0xfffffffefffffffe;
    *0x8000180 = 0xfffffffefffffffe;
    *0x8000188 = 0xfffffffefffffffe;
    *0x8000190 = 0xfffffffefffffffe;
    *0x8000198 = 0xfffffffefffffffe;
    *0x80001a0 = 0xfffffffefffffffe;
    *0x80001a8 = 0xfffffffefffffffe;
    *0x80001b0 = 0xfffffffefffffffe;
    *0x80001b8 = 0xfffffffefffffffe;
    *0x80001c0 = 0xfffffffefffffffe;
    *0x80001c8 = 0xfffffffefffffffe;
    puStack_c0 = &stack0xffffffffffffffc0;
    _segment.ehdr = kmem_cache_alloc_trace(_get_client_env_object,0xdc0,0xd0);
    if (_segment.ehdr == NULL) {
        uVar5 = 0xfffffff4;
        goto code_r0x08003d60;
    }
    uVar14 = *(iVar6 + 0x300);
    *_segment.ehdr = iVar6;
    iVar7 = of_find_property(uVar14,"qcom,converged-dt",0);
    piVar13 = _segment.ehdr;
    *(_segment.ehdr + 0x16) = iVar7 != 0;
    if (iVar7 != 0) {
        iVar7 = of_find_property(*(iVar6 + 0x300),"qcom,wlan-sw-ctrl-gpio",0);
        if (iVar7 == 0) {
            uVar3 = 0xffffffea;
        }
        else {
            uVar3 = of_get_named_gpio_flags(*(iVar6 + 0x300),"qcom,wlan-sw-ctrl-gpio",0,0);
        }
        *(_segment.ehdr + 3) = uVar3;
        gpio_to_desc();
        iVar2 = gpiod_get_raw_value();
        _printk(0x8000ef0,"bt_power_probe",iVar2);
        uVar3 = cnss_utils_update_device_type(iVar2 != 0);
        piVar13 = _segment.ehdr;
        *(_segment.ehdr + 0x18) = uVar3;
    }
    uVar5 = sym.perisec_cnss_bt_hw_disable_check(piVar13);
    if (*(iVar6 + 0x300) == 0) {
        uVar5 = uVar5 & 0xffffffff;
        iVar7 = *(iVar6 + 0xa0);
        if (iVar7 == 0) {
            uVar14 = 0x8001842;
            goto code_r0x08003e64;
        }
        if (*(iVar7 + 0x38) == 0) {
            *(iVar7 + 0x38) = sym.__typeid__ZTSFiiE_global_addr;
            iVar7 = *(iVar6 + 0xa0);
        }
        memcpy(_segment.ehdr,iVar7,0xd0);
        piVar13 = *(iVar6 + 0xa0);
        _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
code_r0x08003cb4:
        iVar7 = iVar6 + 0x10;
        iVar15 = rfkill_alloc("bt_power",iVar7,2,obj.btpower_rfkill_ops,piVar13);
        if (iVar15 != 0) {
            iVar2 = device_create_file(iVar7,obj.dev_attr_extldo);
            if (iVar2 < 0) {
                _printk(0x80012e0,"btpower_rfkill_probe");
            }
            rfkill_init_sw_state(iVar15,1);
            obj.previous = 0x1;
            iVar2 = rfkill_register(iVar15);
            if (iVar2 == 0) {
                *(iVar6 + 0xa8) = iVar15;
            }
            else {
                _dev_err(iVar7,"rfkill register failed=%d\n",iVar2);
                rfkill_destroy(iVar15);
                if (iVar2 < 0) goto code_r0x08003e70;
            }
            piVar13 = _segment.ehdr;
            iVar7 = *_segment.ehdr;
            uVar4 = of_property_read_string_helper(*(iVar7 + 0x300),"qcom,pdc_init_table",0,0,0);
            *(piVar13 + 0xb4) = uVar4;
            if (0 < uVar4) {
                iVar6 = __kmalloc(uVar4 << 3,0xdc0);
                piVar13[0x17] = iVar6;
                iVar2 = of_property_read_string_helper
                                  (*(iVar7 + 0x300),"qcom,pdc_init_table",iVar6,*(piVar13 + 0xb4),0);
                uVar14 = 0x8001041;
                if (-1 < iVar2) {
                    uVar14 = 0x8001061;
                }
                _printk(uVar14);
            }
            sym.btpower_aop_mbox_init(_segment.ehdr);
            uVar5 = 0;
            obj.probe_finished = 0x1;
            goto code_r0x08003d60;
        }
        _dev_err(iVar7,"rfkill allocate failed\n");
    }
    else {
        if (_segment.ehdr != NULL) {
            if ((_segment.ehdr[0x16] != '\0') &&
               (puVar8 = of_get_next_available_child(*(iVar6 + 0x300),0), puVar8 != NULL)) {
                do {
                    if (_segment.ehdr[0x18] != 0) {
                        if (_segment.ehdr[0x18] == 1) {
                            iVar2 = strcmp(*puVar8,"bt_qca6490");
                            uVar14 = 0x8001655;
                            goto joined_r0x080038c4;
                        }
code_r0x080039c8:
                        *(iVar6 + 0x300) = puVar8;
                        goto code_r0x080039cc;
                    }
                    iVar2 = strcmp(*puVar8,"bt_kiwi");
                    uVar14 = 0x8000a54;
joined_r0x080038c4:
                    if (iVar2 == 0) {
                        _printk(uVar14,"bt_power_populate_dt_pinfo");
                        goto code_r0x080039c8;
                    }
                    puVar8 = of_get_next_available_child(*(iVar6 + 0x300),puVar8);
                } while (puVar8 != NULL);
            }
            if (*(iVar6 + 0x300) == 0) goto code_r0x08003c9c;
code_r0x080039cc:
            iVar7 = iVar6 + 0x10;
            piVar9 = of_device_get_match_data(iVar7);
            piVar13 = _segment.ehdr;
            if (piVar9 == NULL) {
                _printk(0x80010f2,"bt_power_vreg_get");
                uVar5 = 0xffffffea;
                goto code_r0x08003e5c;
            }
            iVar16 = piVar9[3];
            iVar15 = *piVar9;
            iVar10 = piVar9[1];
            _segment.ehdr[10] = piVar9[2];
            piVar13[0xb] = iVar16;
            piVar13[8] = iVar15;
            piVar13[9] = iVar10;
            iVar15 = piVar9[4];
            piVar13[5] = iVar15;
            uVar4 = *(piVar9 + 5);
            *(piVar13 + 0xc) = uVar4;
            if (0 < uVar4) {
                iVar16 = 0;
                while( true ) {
                    uStack_d8 = 0;
                    uStack_d0 = 0;
                    uStack_e8 = 0;
                    uStack_e0 = 0;
                    uVar17 = *(iVar15 + iVar16 + 8);
                    iStack_ec = 0;
                    uVar14 = *(iVar6 + 0x300);
                    snprintf(&uStack_e8,0x20,"%s-supply",uVar17);
                    iVar10 = of_parse_phandle(uVar14,&uStack_e8,0);
                    if (iVar10 == 0) {
                        _printk(0x80012ad,"bt_dt_parse_vreg_info",uVar17);
                    }
                    else {
                        uVar5 = regulator_get(iVar7,uVar17);
                        *(iVar15 + iVar16) = uVar5;
                        if (uVar5 < 0xfffffffffffff001) {
                            snprintf(&uStack_e8,0x20,"%s-config",*(iVar15 + iVar16 + 8));
                            puVar11 = of_get_property(*(iVar6 + 0x300),&uStack_e8,&iStack_ec);
                            if ((puVar11 != NULL) && (iStack_ec == 0x10)) {
                                iVar15 = iVar15 + iVar16;
                                uVar1 = (*puVar11 & 0xff00ff00) >> 8 | (*puVar11 & 0xff00ff) << 8;
                                *(iVar15 + 0x10) = uVar1 >> 0x10 | uVar1 << 0x10;
                                uVar1 = (puVar11[1] & 0xff00ff00) >> 8 | (puVar11[1] & 0xff00ff) << 8;
                                *(iVar15 + 0x14) = uVar1 >> 0x10 | uVar1 << 0x10;
                                uVar1 = (puVar11[2] & 0xff00ff00) >> 8 | (puVar11[2] & 0xff00ff) << 8;
                                *(iVar15 + 0x18) = uVar1 >> 0x10 | uVar1 << 0x10;
                                *(iVar15 + 0x1d) = puVar11[3] != 0;
                            }
                        }
                        else {
                            *(iVar15 + iVar16) = 0;
                            _printk(0x8000845,"bt_dt_parse_vreg_info",uVar17,uVar5 & 0xffffffff);
                            if (uVar5 != 0) {
                                piVar13 = _segment.ehdr;
                                if (uVar5 < 0) goto code_r0x08003e5c;
                                goto code_r0x08003cb0;
                            }
                        }
                    }
                    if (uVar4 * 0x28 + -0x28 == iVar16) break;
                    iVar16 = iVar16 + 0x28;
                    iVar15 = _segment.ehdr[5];
                }
            }
            iVar2 = of_get_named_gpio_flags(*(iVar6 + 0x300),"qcom,bt-reset-gpio",0,0);
            *(_segment.ehdr + 1) = iVar2;
            if (iVar2 < 0) {
                _printk(0x80018c7);
            }
            iVar2 = of_get_named_gpio_flags(*(iVar6 + 0x300),"qcom,wl-reset-gpio",0,0);
            *(_segment.ehdr + 0xc) = iVar2;
            if (iVar2 < 0) {
                _printk(0x80009a9,"bt_power_populate_dt_pinfo");
            }
            iVar2 = of_get_named_gpio_flags(*(iVar6 + 0x300),"qcom,bt-sw-ctrl-gpio",0,0);
            *(_segment.ehdr + 2) = iVar2;
            if (iVar2 < 0) {
                _printk(0x8001678);
            }
            iVar2 = of_get_named_gpio_flags(*(iVar6 + 0x300),"qcom,bt-debug-gpio",0,0);
            *(_segment.ehdr + 0x14) = iVar2;
            if (iVar2 < 0) {
                _printk(0x800195e);
            }
            iVar2 = of_get_named_gpio_flags(*(iVar6 + 0x300),"qcom,xo-clk-gpio",0,0);
            piVar13 = _segment.ehdr;
            *(_segment.ehdr + 0x1c) = iVar2;
            if (iVar2 < 0) {
                _printk(0x80018f3);
                piVar13 = _segment.ehdr;
            }
            uVar14 = *(iVar6 + 0x300);
            piVar13[6] = 0;
            iVar15 = of_parse_phandle(uVar14,"clocks",0);
            if (iVar15 == 0) {
                uVar14 = 0x80016b2;
code_r0x08003eec:
                _printk(uVar14,"bt_dt_parse_clk_info");
code_r0x08003ef8:
                _printk(0x800146c,"bt_power_populate_dt_pinfo");
            }
            else {
                puVar12 = devm_kmalloc(iVar7,0x18,0xdc0);
                if (puVar12 == NULL) goto code_r0x08003ef8;
                uVar5 = devm_kmalloc(iVar7,0x14,0xdc0);
                puVar12[1] = uVar5;
                iVar2 = of_property_read_string_helper(uVar14,"clock-names",puVar12 + 1,1,0);
                if (iVar2 < 0) {
                    uVar14 = 0x8001515;
                    goto code_r0x08003eec;
                }
                uVar5 = devm_clk_get(iVar7,puVar12[1]);
                *puVar12 = uVar5;
                if (uVar5 < 0xfffffffffffff001) {
                    piVar13[6] = puVar12;
                }
                else {
                    _printk(0x800191d,"bt_dt_parse_clk_info",puVar12[1],uVar5 & 0xffffffff);
                    *puVar12 = 0;
                    if (uVar5 < 0) goto code_r0x08003ef8;
                }
            }
code_r0x08003c9c:
            piVar13 = _segment.ehdr;
            uVar5 = 0;
            _segment.ehdr[7] = sym.__typeid__ZTSFiiE_global_addr;
code_r0x08003cb0:
            *(iVar6 + 0xa0) = piVar13;
            goto code_r0x08003cb4;
        }
        uVar5 = 0xfffffff4;
code_r0x08003e5c:
        uVar14 = 0x800157f;
code_r0x08003e64:
        _printk(uVar14,"bt_power_probe");
    }
code_r0x08003e70:
    kfree(_segment.ehdr);
code_r0x08003d60:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_c8) {
        return uVar5 & 0xffffffff;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18_00 = sym.bt_power_remove;
    iVar6 = *(iVar7 + 0xa8);
    obj.probe_finished = 0x0;
    if (iVar6 != 0) {
        rfkill_unregister(iVar6);
    }
    rfkill_destroy(iVar6);
    *(iVar7 + 0xa8) = 0;
    uVar4 = *(_segment.ehdr + 0xc);
    if (0 < uVar4) {
        iVar7 = 0;
        piVar13 = _segment.ehdr;
        do {
            if (*(piVar13[5] + iVar7) != 0) {
                regulator_put(*(piVar13[5] + iVar7));
                piVar13 = _segment.ehdr;
            }
            iVar7 = iVar7 + 0x28;
        } while (uVar4 * 0x28 - iVar7 != 0);
    }
    kfree();
    return 0;
}


// ===== sym.bt_power_probe @ 0x08003774 (size 1996) =====

uint64_t sym.bt_power_probe(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    uint uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *puVar7;
    int64_t *piVar8;
    int64_t iVar9;
    uint32_t *puVar10;
    uint64_t *puVar11;
    int64_t *piVar12;
    ulong uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar14;
    int64_t iVar15;
    ulong uVar16;
    ulong unaff_x30;
    int iStack_8c;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    _obj.bt_power_src_status = 0xfffffffefffffffe;
    *0x8000158 = 0xfffffffefffffffe;
    *0x8000160 = 0xfffffffefffffffe;
    *0x8000168 = 0xfffffffefffffffe;
    *0x8000170 = 0xfffffffefffffffe;
    *0x8000178 = 0xfffffffefffffffe;
    *0x8000180 = 0xfffffffefffffffe;
    *0x8000188 = 0xfffffffefffffffe;
    *0x8000190 = 0xfffffffefffffffe;
    *0x8000198 = 0xfffffffefffffffe;
    *0x80001a0 = 0xfffffffefffffffe;
    *0x80001a8 = 0xfffffffefffffffe;
    *0x80001b0 = 0xfffffffefffffffe;
    *0x80001b8 = 0xfffffffefffffffe;
    *0x80001c0 = 0xfffffffefffffffe;
    *0x80001c8 = 0xfffffffefffffffe;
    _segment.ehdr = kmem_cache_alloc_trace(_get_client_env_object,0xdc0,0xd0);
    if (_segment.ehdr == NULL) {
        uVar6 = 0xfffffff4;
        goto code_r0x08003d60;
    }
    uVar13 = *(arg1 + 0x300);
    *_segment.ehdr = arg1;
    iVar5 = of_find_property(uVar13,"qcom,converged-dt",0);
    piVar12 = _segment.ehdr;
    *(_segment.ehdr + 0x16) = iVar5 != 0;
    if (iVar5 != 0) {
        iVar5 = of_find_property(*(arg1 + 0x300),"qcom,wlan-sw-ctrl-gpio",0);
        if (iVar5 == 0) {
            uVar3 = 0xffffffea;
        }
        else {
            uVar3 = of_get_named_gpio_flags(*(arg1 + 0x300),"qcom,wlan-sw-ctrl-gpio",0,0);
        }
        *(_segment.ehdr + 3) = uVar3;
        gpio_to_desc();
        iVar2 = gpiod_get_raw_value();
        _printk(0x8000ef0,"bt_power_probe",iVar2);
        uVar3 = cnss_utils_update_device_type(iVar2 != 0);
        piVar12 = _segment.ehdr;
        *(_segment.ehdr + 0x18) = uVar3;
    }
    uVar6 = sym.perisec_cnss_bt_hw_disable_check(piVar12);
    if (*(arg1 + 0x300) == 0) {
        uVar6 = uVar6 & 0xffffffff;
        iVar5 = *(arg1 + 0xa0);
        if (iVar5 == 0) {
            uVar13 = 0x8001842;
            goto code_r0x08003e64;
        }
        if (*(iVar5 + 0x38) == 0) {
            *(iVar5 + 0x38) = sym.__typeid__ZTSFiiE_global_addr;
            iVar5 = *(arg1 + 0xa0);
        }
        memcpy(_segment.ehdr,iVar5,0xd0);
        piVar12 = *(arg1 + 0xa0);
        _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
code_r0x08003cb4:
        iVar5 = arg1 + 0x10;
        iVar14 = rfkill_alloc("bt_power",iVar5,2,obj.btpower_rfkill_ops,piVar12);
        if (iVar14 != 0) {
            iVar2 = device_create_file(iVar5,obj.dev_attr_extldo);
            if (iVar2 < 0) {
                _printk(0x80012e0,"btpower_rfkill_probe");
            }
            rfkill_init_sw_state(iVar14,1);
            obj.previous = 0x1;
            iVar2 = rfkill_register(iVar14);
            if (iVar2 == 0) {
                *(arg1 + 0xa8) = iVar14;
            }
            else {
                _dev_err(iVar5,"rfkill register failed=%d\n",iVar2);
                rfkill_destroy(iVar14);
                if (iVar2 < 0) goto code_r0x08003e70;
            }
            piVar12 = _segment.ehdr;
            iVar5 = *_segment.ehdr;
            uVar4 = of_property_read_string_helper(*(iVar5 + 0x300),"qcom,pdc_init_table",0,0,0);
            *(piVar12 + 0xb4) = uVar4;
            if (0 < uVar4) {
                iVar14 = __kmalloc(uVar4 << 3,0xdc0);
                piVar12[0x17] = iVar14;
                iVar2 = of_property_read_string_helper
                                  (*(iVar5 + 0x300),"qcom,pdc_init_table",iVar14,*(piVar12 + 0xb4),0);
                uVar13 = 0x8001041;
                if (-1 < iVar2) {
                    uVar13 = 0x8001061;
                }
                _printk(uVar13);
            }
            sym.btpower_aop_mbox_init(_segment.ehdr);
            uVar6 = 0;
            obj.probe_finished = 0x1;
            goto code_r0x08003d60;
        }
        _dev_err(iVar5,"rfkill allocate failed\n");
    }
    else {
        if (_segment.ehdr != NULL) {
            if ((_segment.ehdr[0x16] != '\0') &&
               (puVar7 = of_get_next_available_child(*(arg1 + 0x300),0), puVar7 != NULL)) {
                do {
                    if (_segment.ehdr[0x18] != 0) {
                        if (_segment.ehdr[0x18] == 1) {
                            iVar2 = strcmp(*puVar7,"bt_qca6490");
                            uVar13 = 0x8001655;
                            goto joined_r0x080038c4;
                        }
code_r0x080039c8:
                        *(arg1 + 0x300) = puVar7;
                        goto code_r0x080039cc;
                    }
                    iVar2 = strcmp(*puVar7,"bt_kiwi");
                    uVar13 = 0x8000a54;
joined_r0x080038c4:
                    if (iVar2 == 0) {
                        _printk(uVar13,"bt_power_populate_dt_pinfo");
                        goto code_r0x080039c8;
                    }
                    puVar7 = of_get_next_available_child(*(arg1 + 0x300),puVar7);
                } while (puVar7 != NULL);
            }
            if (*(arg1 + 0x300) == 0) goto code_r0x08003c9c;
code_r0x080039cc:
            iVar5 = arg1 + 0x10;
            piVar8 = of_device_get_match_data(iVar5);
            piVar12 = _segment.ehdr;
            if (piVar8 == NULL) {
                _printk(0x80010f2,"bt_power_vreg_get");
                uVar6 = 0xffffffea;
                goto code_r0x08003e5c;
            }
            iVar15 = piVar8[3];
            iVar14 = *piVar8;
            iVar9 = piVar8[1];
            _segment.ehdr[10] = piVar8[2];
            piVar12[0xb] = iVar15;
            piVar12[8] = iVar14;
            piVar12[9] = iVar9;
            iVar14 = piVar8[4];
            piVar12[5] = iVar14;
            uVar4 = *(piVar8 + 5);
            *(piVar12 + 0xc) = uVar4;
            if (0 < uVar4) {
                iVar15 = 0;
                while( true ) {
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_88 = 0;
                    uStack_80 = 0;
                    uVar16 = *(iVar14 + iVar15 + 8);
                    iStack_8c = 0;
                    uVar13 = *(arg1 + 0x300);
                    snprintf(&uStack_88,0x20,"%s-supply",uVar16);
                    iVar9 = of_parse_phandle(uVar13,&uStack_88,0);
                    if (iVar9 == 0) {
                        _printk(0x80012ad,"bt_dt_parse_vreg_info",uVar16);
                    }
                    else {
                        uVar6 = regulator_get(iVar5,uVar16);
                        *(iVar14 + iVar15) = uVar6;
                        if (uVar6 < 0xfffffffffffff001) {
                            snprintf(&uStack_88,0x20,"%s-config",*(iVar14 + iVar15 + 8));
                            puVar10 = of_get_property(*(arg1 + 0x300),&uStack_88,&iStack_8c);
                            if ((puVar10 != NULL) && (iStack_8c == 0x10)) {
                                iVar14 = iVar14 + iVar15;
                                uVar1 = (*puVar10 & 0xff00ff00) >> 8 | (*puVar10 & 0xff00ff) << 8;
                                *(iVar14 + 0x10) = uVar1 >> 0x10 | uVar1 << 0x10;
                                uVar1 = (puVar10[1] & 0xff00ff00) >> 8 | (puVar10[1] & 0xff00ff) << 8;
                                *(iVar14 + 0x14) = uVar1 >> 0x10 | uVar1 << 0x10;
                                uVar1 = (puVar10[2] & 0xff00ff00) >> 8 | (puVar10[2] & 0xff00ff) << 8;
                                *(iVar14 + 0x18) = uVar1 >> 0x10 | uVar1 << 0x10;
                                *(iVar14 + 0x1d) = puVar10[3] != 0;
                            }
                        }
                        else {
                            *(iVar14 + iVar15) = 0;
                            _printk(0x8000845,"bt_dt_parse_vreg_info",uVar16,uVar6 & 0xffffffff);
                            if (uVar6 != 0) {
                                piVar12 = _segment.ehdr;
                                if (uVar6 < 0) goto code_r0x08003e5c;
                                goto code_r0x08003cb0;
                            }
                        }
                    }
                    if (uVar4 * 0x28 + -0x28 == iVar15) break;
                    iVar15 = iVar15 + 0x28;
                    iVar14 = _segment.ehdr[5];
                }
            }
            iVar2 = of_get_named_gpio_flags(*(arg1 + 0x300),"qcom,bt-reset-gpio",0,0);
            *(_segment.ehdr + 1) = iVar2;
            if (iVar2 < 0) {
                _printk(0x80018c7);
            }
            iVar2 = of_get_named_gpio_flags(*(arg1 + 0x300),"qcom,wl-reset-gpio",0,0);
            *(_segment.ehdr + 0xc) = iVar2;
            if (iVar2 < 0) {
                _printk(0x80009a9,"bt_power_populate_dt_pinfo");
            }
            iVar2 = of_get_named_gpio_flags(*(arg1 + 0x300),"qcom,bt-sw-ctrl-gpio",0,0);
            *(_segment.ehdr + 2) = iVar2;
            if (iVar2 < 0) {
                _printk(0x8001678);
            }
            iVar2 = of_get_named_gpio_flags(*(arg1 + 0x300),"qcom,bt-debug-gpio",0,0);
            *(_segment.ehdr + 0x14) = iVar2;
            if (iVar2 < 0) {
                _printk(0x800195e);
            }
            iVar2 = of_get_named_gpio_flags(*(arg1 + 0x300),"qcom,xo-clk-gpio",0,0);
            piVar12 = _segment.ehdr;
            *(_segment.ehdr + 0x1c) = iVar2;
            if (iVar2 < 0) {
                _printk(0x80018f3);
                piVar12 = _segment.ehdr;
            }
            uVar13 = *(arg1 + 0x300);
            piVar12[6] = 0;
            iVar14 = of_parse_phandle(uVar13,"clocks",0);
            if (iVar14 == 0) {
                uVar13 = 0x80016b2;
code_r0x08003eec:
                _printk(uVar13,"bt_dt_parse_clk_info");
code_r0x08003ef8:
                _printk(0x800146c,"bt_power_populate_dt_pinfo");
            }
            else {
                puVar11 = devm_kmalloc(iVar5,0x18,0xdc0);
                if (puVar11 == NULL) goto code_r0x08003ef8;
                uVar6 = devm_kmalloc(iVar5,0x14,0xdc0);
                puVar11[1] = uVar6;
                iVar2 = of_property_read_string_helper(uVar13,"clock-names",puVar11 + 1,1,0);
                if (iVar2 < 0) {
                    uVar13 = 0x8001515;
                    goto code_r0x08003eec;
                }
                uVar6 = devm_clk_get(iVar5,puVar11[1]);
                *puVar11 = uVar6;
                if (uVar6 < 0xfffffffffffff001) {
                    piVar12[6] = puVar11;
                }
                else {
                    _printk(0x800191d,"bt_dt_parse_clk_info",puVar11[1],uVar6 & 0xffffffff);
                    *puVar11 = 0;
                    if (uVar6 < 0) goto code_r0x08003ef8;
                }
            }
code_r0x08003c9c:
            piVar12 = _segment.ehdr;
            uVar6 = 0;
            _segment.ehdr[7] = sym.__typeid__ZTSFiiE_global_addr;
code_r0x08003cb0:
            *(arg1 + 0xa0) = piVar12;
            goto code_r0x08003cb4;
        }
        uVar6 = 0xfffffff4;
code_r0x08003e5c:
        uVar13 = 0x800157f;
code_r0x08003e64:
        _printk(uVar13,"bt_power_probe");
    }
code_r0x08003e70:
    kfree(_segment.ehdr);
code_r0x08003d60:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_68) {
        return uVar6 & 0xffffffff;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.bt_power_remove;
    iVar14 = *(iVar5 + 0xa8);
    obj.probe_finished = 0x0;
    if (iVar14 != 0) {
        rfkill_unregister(iVar14);
    }
    rfkill_destroy(iVar14);
    *(iVar5 + 0xa8) = 0;
    uVar4 = *(_segment.ehdr + 0xc);
    if (0 < uVar4) {
        iVar5 = 0;
        piVar12 = _segment.ehdr;
        do {
            if (*(piVar12[5] + iVar5) != 0) {
                regulator_put(*(piVar12[5] + iVar5));
                piVar12 = _segment.ehdr;
            }
            iVar5 = iVar5 + 0x28;
        } while (uVar4 * 0x28 - iVar5 != 0);
    }
    kfree();
    return 0;
}


// ===== sym.bt_power_remove @ 0x08003f40 (size 172) =====

ulong sym.bt_power_remove(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0xa8);
    obj.probe_finished = 0x0;
    if (iVar4 != 0) {
        rfkill_unregister(iVar4);
    }
    rfkill_destroy(iVar4);
    *(arg1 + 0xa8) = 0;
    uVar1 = *(_segment.ehdr + 0x60);
    if (0 < uVar1) {
        iVar4 = 0;
        iVar2 = _segment.ehdr;
        do {
            iVar3 = *(*(iVar2 + 0x28) + iVar4);
            if (iVar3 != 0) {
                regulator_put(iVar3);
                iVar2 = _segment.ehdr;
            }
            iVar4 = iVar4 + 0x28;
        } while (uVar1 * 0x28 - iVar4 != 0);
    }
    kfree();
    return 0;
}


// ===== sym.bluetooth_power @ 0x08003fec (size 648) =====

int sym.bluetooth_power(int64_t arg1)

{
    int iVar1;
    int iVar2;
    uint32_t arg1_00;
    ulong uVar3;
    char cVar4;
    ulong *in_x18;
    int64_t iVar5;
    int64_t *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1;
    iVar2 = sym.perisec_cnss_bt_hw_disable_check(_segment.ehdr);
    if (iVar1 == 0) {
        if (0 < *(_segment.ehdr + 8)) {
            if (*(_segment.ehdr + 200) == 0) {
                sym.bt_configure_gpios(0);
            }
            else {
                uVar3 = 0x8001738;
code_r0x080041fc:
                _printk(uVar3,"bluetooth_power");
            }
        }
        if (0 < *(_segment.ehdr + 8)) {
            gpio_free();
        }
        if (0 < *(_segment.ehdr + 0x14)) {
            gpio_free();
        }
        piVar6 = *(_segment.ehdr + 0x30);
        if (piVar6 != NULL) {
            iVar5 = *piVar6;
            if ((iVar5 == 0) || (piVar6[2] == '\0')) {
                _printk(0x8000c5e,"bt_clk_disable",iVar5);
            }
            else {
                clk_disable(iVar5);
                clk_unprepare(iVar5);
                *(piVar6 + 2) = 0;
            }
        }
    }
    else {
        if (iVar1 == 2) {
            arg1_00 = 2;
            goto code_r0x08004114;
        }
        if (iVar1 != 1) {
            _printk(0x8000735,"bluetooth_power",arg1 & 0xffffffff);
            return -1;
        }
        if (*(_segment.ehdr + 200) != 0) {
            _printk(0x8001495,"bluetooth_power");
            return -0x16;
        }
        iVar2 = sym.bt_power_vreg_set(1);
        if (iVar2 < 0) {
            uVar3 = 0x80011bd;
        }
        else {
            piVar6 = *(_segment.ehdr + 0x30);
            if (piVar6 == NULL) {
code_r0x08004054:
                if (*(_segment.ehdr + 8) < 1) {
                    return iVar2;
                }
                _obj.bt_power_src_status = 0xffffffffffffffff;
                iVar2 = sym.bt_configure_gpios(1);
                if (-1 < iVar2) {
                    return iVar2;
                }
                uVar3 = 0x8001386;
                goto code_r0x080041fc;
            }
            _printk(0x80012d6,"bt_clk_enable",piVar6[1]);
            iVar5 = *piVar6;
            cVar4 = piVar6[2];
            if (iVar5 != 0) {
                if (cVar4 == '\0') {
                    iVar2 = clk_prepare(iVar5);
                    if (iVar2 == 0) {
                        iVar2 = clk_enable(iVar5);
                        if (iVar2 == 0) {
                            *(piVar6 + 2) = 1;
                            goto code_r0x08004054;
                        }
                        clk_unprepare(iVar5);
                    }
                    _printk(0x80015aa,"bt_clk_enable",piVar6[1],iVar2);
                    if (iVar2 < 0) {
                        uVar3 = 0x8001386;
                        goto code_r0x08004194;
                    }
                    goto code_r0x08004054;
                }
                cVar4 = '\x01';
            }
            _printk(0x8000c5e,"bt_clk_enable",iVar5,cVar4);
            iVar2 = -0x16;
            uVar3 = 0x8001386;
        }
code_r0x08004194:
        _printk(uVar3,"bluetooth_power");
    }
    arg1_00 = 0;
code_r0x08004114:
    sym.bt_power_vreg_set(arg1_00);
    return iVar2;
}


// ===== sym.bt_power_vreg_set @ 0x08004274 (size 928) =====

int sym.bt_power_vreg_set(uint32_t arg1)

{
    int64_t iVar1;
    ulong *puVar2;
    uint32_t uVar3;
    code *pcVar4;
    int iVar5;
    uint uVar6;
    ulong uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t iVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = *(_segment.ehdr + 0x60);
    uVar8 = uVar3;
    if (arg1 == 0) {
        if (0 < uVar3) {
            iVar9 = 0;
            do {
                iVar10 = *(_segment.ehdr + 0x28);
                if (iVar10 + iVar9 == 0) {
                    iVar5 = 0;
                }
                else if (*(iVar10 + iVar9 + 0x1c) == '\0') {
                    iVar5 = 0;
                }
                else {
                    iVar5 = regulator_disable(*(iVar10 + iVar9));
                    if (iVar5 < 0) {
                        uVar7 = 0x8000e63;
                    }
                    else {
                        *(iVar10 + iVar9 + 0x1c) = 0;
                        if ((((*(iVar10 + iVar9 + 0x10) == 0) || (*(iVar10 + iVar9 + 0x14) == 0)) ||
                            (iVar5 = regulator_set_voltage(*(iVar10 + iVar9),0), uVar7 = 0x8000b6f, -1 < iVar5)) &&
                           (iVar5 = regulator_set_load(*(iVar10 + iVar9),0), uVar7 = 0x8000b9d, -1 < iVar5))
                        goto joined_r0x08004444;
                    }
                    _printk(uVar7,"bt_vreg_disable",*(iVar10 + iVar9 + 8),iVar5);
                }
joined_r0x08004444:
                if (uVar8 * 0x28 + -0x28 == iVar9) {
                    return iVar5;
                }
                iVar9 = iVar9 + 0x28;
            } while( true );
        }
    }
    else if (arg1 == 1) {
        if (0 < uVar3) {
            iVar9 = 0;
            iVar5 = 0;
            do {
                iVar10 = *(_segment.ehdr + 0x28);
                if (*(iVar10 + iVar9) != 0) {
                    iVar1 = iVar10 + iVar9;
                    uVar3 = *(iVar1 + 0x20);
                    if (0x1f < uVar3) {
    //WARNING: Does not return
                        pcVar4 = SoftwareBreakpoint(0x5512,0x8004614);
                        (*pcVar4)();
                    }
                    *(obj.bt_power_src_status + uVar3 * 4) = 0xffffffff;
                    if (*(iVar1 + 0x1c) == '\0') {
                        puVar2 = iVar10 + iVar9;
                        if (((*(puVar2 + 2) != 0) && (*(puVar2 + 0x14) != 0)) &&
                           (iVar5 = regulator_set_voltage(*(iVar10 + iVar9)), iVar5 < 0)) {
                            uVar7 = 0x8000b6f;
code_r0x080045f8:
                            _printk(uVar7,"bt_vreg_enable",*(iVar10 + iVar9 + 8),iVar5);
                            return iVar5;
                        }
                        iVar5 = regulator_set_load(*puVar2,*(puVar2 + 3));
                        if (iVar5 < 0) {
                            uVar7 = 0x8000b9d;
                            goto code_r0x080045f8;
                        }
                        iVar5 = regulator_enable(*(iVar10 + iVar9));
                        if (iVar5 < 0) {
                            uVar7 = 0x8000a97;
                            goto code_r0x080045f8;
                        }
                        *(iVar1 + 0x1c) = 1;
                    }
                    else {
                        iVar5 = 0;
                    }
                    uVar6 = regulator_get_voltage(*(iVar10 + iVar9));
                    *(obj.bt_power_src_status + uVar3 * 4) = uVar6;
                }
                if (uVar8 * 0x28 + -0x28 == iVar9) {
                    return iVar5;
                }
                iVar9 = iVar9 + 0x28;
            } while( true );
        }
    }
    else {
        if (arg1 != 2) {
            _printk(0x8000735,"bt_power_vreg_set",1);
            return -1;
        }
        if (0 < uVar3) {
            iVar9 = 0;
            while( true ) {
                iVar10 = *(_segment.ehdr + 0x28);
                if ((iVar10 + iVar9 == 0) || (*(iVar10 + iVar9 + 0x1c) == '\0')) {
                    iVar5 = 0;
                }
                else if (*(iVar10 + iVar9 + 0x1d) == '\0') {
                    iVar5 = 0;
                }
                else if ((((*(iVar10 + iVar9 + 0x10) != 0) && (*(iVar10 + iVar9 + 0x14) != 0)) &&
                         (iVar5 = regulator_set_voltage(*(iVar10 + iVar9),0), uVar7 = 0x8000b6f, iVar5 < 0)) ||
                        (iVar5 = regulator_set_load(*(iVar10 + iVar9),0), uVar7 = 0x8000b9d, iVar5 < 0)) {
                    _printk(uVar7,"bt_vreg_enable_retention",*(iVar10 + iVar9 + 8),iVar5);
                }
                if (uVar8 * 0x28 + -0x28 == iVar9) break;
                iVar9 = iVar9 + 0x28;
            }
            return iVar5;
        }
    }
    return 0;
}


// ===== sym.bt_configure_gpios @ 0x08004614 (size 1140) =====

uint32_t sym.bt_configure_gpios(int64_t arg1)

{
    uint uVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    uint uVar5;
    uint32_t uVar6;
    int iVar7;
    int iVar8;
    ulong uVar9;
    ulong *in_x18;
    uint64_t uVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar10 = arg1 & 0xffffffff;
    iVar4 = CONCAT44(*0x8000004,_segment.ehdr);
    uVar1 = *(iVar4 + 8);
    iVar2 = *(iVar4 + 0x10);
    if (arg1 == 0) {
        uVar9 = gpio_to_desc(uVar1);
        gpiod_set_raw_value(uVar9,0);
        msleep(100);
        gpio_to_desc(uVar1);
        uVar5 = gpiod_get_raw_value();
        _printk(0x80016ef,uVar1,uVar5);
        uVar6 = 0;
        if (-1 < iVar2) {
            gpio_to_desc(iVar2);
            uVar5 = gpiod_get_raw_value();
            _printk(0x8000d13,iVar2,uVar5);
            uVar6 = 0;
        }
    }
    else {
        iVar8 = *(iVar4 + 0xc);
        iVar3 = *(iVar4 + 0x14);
        uVar6 = gpio_request(uVar1,"bt_sys_rst_n");
        if (uVar6 != 0) {
            uVar9 = 0x8000df9;
            uVar10 = uVar6;
            goto code_r0x080049c0;
        }
        _printk(0x8000c8a);
        gpio_to_desc(uVar1);
        uVar5 = gpiod_get_raw_value();
        _printk(0x800177e,uVar1,uVar5);
        uVar9 = gpio_to_desc(uVar1);
        uVar6 = gpiod_direction_output_raw(uVar9,0);
        if (uVar6 != 0) goto code_r0x080049c8;
        gpio_to_desc(uVar1);
        _segment.ehdr = gpiod_get_raw_value();
        msleep(0x32);
        _printk(0x8000f25);
        gpio_to_desc(uVar1);
        uVar5 = gpiod_get_raw_value();
        _printk(0x800177e,uVar1,uVar5);
        if (-1 < iVar2) {
            gpio_to_desc(iVar2);
            _segment.ehdr = gpiod_get_raw_value();
            _printk(0x8000d73,iVar2,_segment.ehdr);
        }
        if (iVar8 < 0) {
code_r0x080047d0:
            sym.btpower_set_xo_clk_gpio_state(1);
            _printk(0x8000bc8);
            uVar9 = gpio_to_desc(uVar1);
            uVar6 = gpiod_direction_output_raw(uVar9,1);
            if (uVar6 != 0) goto code_r0x080049c8;
            gpio_to_desc(uVar1);
            _segment.ehdr = gpiod_get_raw_value();
            sym.btpower_set_xo_clk_gpio_state(0);
            if (-1 < iVar8) goto code_r0x08004814;
        }
        else {
            gpio_to_desc(iVar8);
            uVar5 = gpiod_get_raw_value();
            _printk(0x8000cb5,iVar8,uVar5);
            gpio_to_desc(iVar8);
            iVar7 = gpiod_get_raw_value();
            if (iVar7 != 0) goto code_r0x080047d0;
code_r0x08004814:
            gpio_to_desc(iVar8);
            iVar8 = gpiod_get_raw_value();
            if (iVar8 == 0) {
                gpio_to_desc(uVar1);
                iVar8 = gpiod_get_raw_value();
                if (iVar8 != 0) {
                    _printk(0x8001110);
                    _printk(0x8000fa7);
                    uVar9 = gpio_to_desc(uVar1);
                    uVar6 = gpiod_direction_output_raw(uVar9,0);
                    if (uVar6 != 0) goto code_r0x080049c8;
                    gpio_to_desc(uVar1);
                    _segment.ehdr = gpiod_get_raw_value();
                }
                _printk(0x8001017);
                _printk(0x8000867);
                msleep(100);
                _printk(0x8000ac1);
                sym.btpower_set_xo_clk_gpio_state(1);
                uVar9 = gpio_to_desc(uVar1);
                uVar6 = gpiod_direction_output_raw(uVar9,1);
                if (uVar6 != 0) goto code_r0x080049c8;
                gpio_to_desc(uVar1);
                _segment.ehdr = gpiod_get_raw_value();
                sym.btpower_set_xo_clk_gpio_state(0);
            }
        }
        gpio_to_desc(uVar1);
        iVar8 = gpiod_get_raw_value();
        if (iVar8 == 0) {
            sym.btpower_set_xo_clk_gpio_state(1);
            _printk(0x8000e1f);
            _printk(0x8000e48);
            uVar9 = gpio_to_desc(uVar1);
            uVar6 = gpiod_direction_output_raw(uVar9,1);
            if (uVar6 != 0) {
code_r0x080049c8:
                _printk(0x8000da5,"bt_configure_gpios");
                return uVar6;
            }
            gpio_to_desc(uVar1);
            _segment.ehdr = gpiod_get_raw_value();
            sym.btpower_set_xo_clk_gpio_state(0);
        }
        msleep(0x32);
        if (iVar2 < 0) {
            uVar6 = 0;
        }
        else {
            gpio_to_desc(iVar2);
            uVar6 = gpiod_direction_input();
            if (uVar6 == 0) {
                gpio_to_desc(iVar2);
                iVar8 = gpiod_get_raw_value();
                if ((iVar8 == 0) && (-1 < iVar3)) {
                    uVar6 = gpio_request(iVar3,"bt_debug_n");
                    if (uVar6 == 0) {
                        uVar9 = gpio_to_desc(iVar3);
                        uVar6 = gpiod_direction_output_raw(uVar9,1);
                        if (uVar6 != 0) {
                            _printk(0x8000ebe,"bt_configure_gpios");
                        }
                    }
                    else {
                        _printk(0x80015cd);
                    }
                }
            }
            else {
                _printk(0x8000e9e,"bt_configure_gpios",uVar6);
            }
        }
        gpio_to_desc(uVar1);
        uVar5 = gpiod_get_raw_value();
        _printk(0x8000ce4,uVar1,uVar5);
        if (-1 < iVar2) {
            gpio_to_desc(iVar2);
            _segment.ehdr = gpiod_get_raw_value();
            _printk(0x80015ed,iVar2,_segment.ehdr);
        }
    }
    uVar9 = 0x8000fcd;
code_r0x080049c0:
    _printk(uVar9,"bt_configure_gpios",uVar1,uVar10);
    return uVar6;
}


// ===== sym.btpower_set_xo_clk_gpio_state @ 0x08004a88 (size 448) =====

void sym.btpower_set_xo_clk_gpio_state(int64_t arg1)

{
    int iVar1;
    bool bVar2;
    int iVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(_segment.ehdr + 0x1c);
    if (iVar1 < 0) {
        return;
    }
    iVar3 = gpio_request(iVar1,"bt_xo_clk_gpio");
    if (iVar3 == 0) {
code_r0x08004b90:
        if ((arg1 & 1U) == 0) {
            usleep_range_state(4000,6000,2);
            uVar4 = gpio_to_desc(iVar1);
            gpiod_direction_output_raw(uVar4,0);
        }
        else {
            uVar4 = gpio_to_desc(iVar1);
            gpiod_direction_output_raw(uVar4,1);
            usleep_range_state(100,200,2);
        }
        _printk(0x8000f55,"btpower_set_xo_clk_gpio_state",iVar1);
        gpio_free(iVar1);
    }
    else {
        usleep_range_state(10000,20000,2);
        iVar3 = gpio_request(iVar1,"bt_xo_clk_gpio");
        bVar2 = iVar3 == 0;
        if (iVar3 == 0) {
code_r0x08004b88:
            iVar3 = 0;
            if (bVar2) goto code_r0x08004b90;
        }
        else {
            usleep_range_state(10000,20000,2);
            iVar3 = gpio_request(iVar1,"bt_xo_clk_gpio");
            bVar2 = iVar3 == 0;
            if (iVar3 == 0) goto code_r0x08004b88;
            usleep_range_state(10000,20000,2);
            iVar3 = gpio_request(iVar1,"bt_xo_clk_gpio");
            bVar2 = iVar3 == 0;
            if (iVar3 == 0) goto code_r0x08004b88;
            usleep_range_state(10000,20000,2);
            iVar3 = gpio_request(iVar1,"bt_xo_clk_gpio");
            bVar2 = iVar3 == 0;
            if (iVar3 == 0) goto code_r0x08004b88;
            usleep_range_state(10000,20000,2);
            iVar3 = gpio_request(iVar1,"bt_xo_clk_gpio");
            if (iVar3 == 0) goto code_r0x08004b90;
        }
        _printk(0x800179d,"btpower_set_xo_clk_gpio_state",iVar1,iVar3);
    }
    return;
}


// ===== sym.btpower_toggle_radio @ 0x08004c48 (size 164) =====

ulong sym.btpower_toggle_radio(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg2 & 1;
    if (obj.previous != uVar1) {
        pcVar3 = *(arg1 + 0x38);
        if (pcVar3 != sym.__typeid__ZTSFiiE_global_addr) {
            __cfi_slowpath_diag(0x47ce015a85343a42,pcVar3,0x80006b0);
        }
        uVar2 = (*pcVar3)(~arg2 & 1);
        if (uVar2 != 0) {
            return uVar2;
        }
    }
    obj.previous = SUB41(uVar1,0);
    return 0;
}


// ===== sym.extldo_show @ 0x08004cec (size 56) =====

int64_t sym.extldo_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg1,6,"false\n");
    return iVar1;
}


// ===== sym.bt_ioctl @ 0x08004d24 (size 1196) =====

int64_t sym.bt_ioctl(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    code *pcVar4;
    int iVar5;
    int iVar6;
    uint uVar7;
    int64_t iVar8;
    ulong uVar9;
    char *pcVar10;
    uint32_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar12;
    int64_t iVar13;
    ulong unaff_x30;
    uchar in_q0 [16];
    uchar auVar14 [16];
    
    *in_x18 = unaff_x30;
    if ((CONCAT44(*0x8000004,_segment.ehdr) == 0) || ((obj.probe_finished & 1) == 0)) {
        _printk(0x8000fee,"bt_ioctl");
        return -0xb;
    }
    iVar8 = -0x203;
    uVar1 = arg1 - 0xbfac;
    if (0x15 < uVar1) {
        return -0x203;
    }
    iVar6 = 0;
    //switch table (21 cases) at 0x80006d0
    iVar5 = arg2;
    switch(*(uVar1 + 0x80006d0) * 4 + 0x8004d94) {
    case 0x8004d98:
        iVar8 = sym._copy_to_user(arg2,in_q0,0x20);
        if (iVar8 == 0) goto code_r0x08004dac;
code_r0x08005000:
        _printk(0x8000a01,"bt_ioctl");
        iVar6 = -0xe;
        break;
    case 0x8004dbc:
        goto code_r0x08004dbc;
    case 0x8004e00:
        _printk(0x8000c01,"bt_ioctl",arg2 & 0xffffffff);
        if (_segment.ehdr == iVar5) {
            _printk(0x8001300,"bt_ioctl",arg2 & 0xffffffff);
            goto code_r0x08004dac;
        }
        iVar6 = sym.bluetooth_power(arg2 & 0xffffffff);
        if (iVar6 == 0) {
            _segment.ehdr = iVar5;
        }
        break;
    case 0x8004e44:
        _printk(0x8000753,"bt_ioctl",arg2 & 0xffffffff);
        if (iVar5 == 0) {
            _printk(0x80013ba,"bt_ioctl");
            iVar6 = 0;
            _segment.ehdr = 0;
        }
        else {
            iVar6 = 0;
            _segment.ehdr = iVar5;
        }
        break;
    case 0x8004e74:
        _printk(0x8001889);
        if (*(CONCAT44(*0x8000004,_segment.ehdr) + 0x10) < 1) {
            _printk(0x8000afa);
            return -0x16;
        }
        _segment.ehdr = -1;
        gpio_to_desc();
        iVar6 = gpiod_direction_input();
        if (iVar6 == 0) {
            gpio_to_desc(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x10));
            iVar5 = gpiod_get_raw_value();
            iVar8 = CONCAT44(*0x8000004,_segment.ehdr);
            _segment.ehdr = iVar5;
            _printk(0x800077b,*(iVar8 + 0x10),iVar5);
        }
        else {
            _printk(0x800193f,"bt_ioctl");
            _printk(0x8000f7c,"bt_ioctl",iVar6);
        }
        break;
    case 0x8004ee0:
        _printk(0x800107e);
        sym.set_gpios_srcs_status(0x800180e,0xe,*(CONCAT44(*0x8000004,_segment.ehdr) + 8));
        auVar14 = sym.set_gpios_srcs_status(0x8000a1c,0xf,*(CONCAT44(*0x8000004,_segment.ehdr) + 0x10));
        iVar8 = CONCAT44(*0x8000004,_segment.ehdr);
        uVar1 = *(iVar8 + 0x60);
        if (0 < uVar1) {
            iVar13 = 0;
            do {
                iVar12 = *(iVar8 + 0x28);
                iVar8 = iVar12 + iVar13;
                if (iVar8 != 0) {
                    iVar2 = iVar12 + iVar13;
                    uVar3 = *(iVar2 + 0x24);
                    if (0x1f < uVar3) {
    //WARNING: Does not return
                        pcVar4 = SoftwareBreakpoint(0x5512,0x80050c8);
                        (*pcVar4)();
                    }
                    *(obj.bt_power_src_status + uVar3 * 4) = 0xffffffff;
                    if (*(iVar2 + 0x1c) == '\0') {
                        uVar11 = 0;
code_r0x08004f9c:
                        uVar9 = 0x80013f2;
                        pcVar10 = "set_pwr_srcs_status";
                        iVar8 = *(iVar12 + iVar13 + 8);
                    }
                    else {
                        iVar6 = regulator_is_enabled(*(iVar12 + iVar13));
                        if (iVar6 == 0) {
                            uVar11 = *(iVar2 + 0x1c);
                            goto code_r0x08004f9c;
                        }
                        uVar11 = regulator_get_voltage(*(iVar12 + iVar13));
                        *(obj.bt_power_src_status + uVar3 * 4) = uVar11;
                        pcVar10 = (iVar12 + iVar13)[1];
                        uVar9 = 0x80018a1;
                    }
                    auVar14 = _printk(uVar9,pcVar10,iVar8,uVar11);
                }
                if (uVar1 * 0x28 + -0x28 == iVar13) break;
                iVar8 = CONCAT44(*0x8000004,_segment.ehdr);
                iVar13 = iVar13 + 0x28;
            } while( true );
        }
        iVar8 = sym._copy_to_user(arg2,auVar14,0x80);
        if (iVar8 != 0) goto code_r0x08005000;
        goto code_r0x08004dac;
    case 0x8005020:
        _printk(0x8000b1c,"bt_ioctl");
        sym.btpower_enable_ipa_vreg(CONCAT44(*0x8000004,_segment.ehdr));
code_r0x08004dac:
        iVar6 = 0;
        break;
    case 0x80050cc:
        _printk(0x8000895,"bt_ioctl");
        iVar6 = arg2;
        auVar14 = panic("subsys-restart: Resetting the SoC - Bluetooth crashed\n");
        *extraout_x18 = sym.set_gpios_srcs_status;
        if (iVar6 < 0) {
            iVar8 = _printk(0x80013d9,"set_gpios_srcs_status",auVar14._0_8_);
        }
        else {
            iVar8 = (auVar14._8_8_ & 0xffffffff) * 4;
            *(obj.bt_power_src_status + iVar8) = 0xffffffff;
            gpio_to_desc(iVar6);
            uVar7 = gpiod_get_raw_value();
            *(obj.bt_power_src_status + iVar8) = uVar7;
            iVar8 = _printk(0x8001186,auVar14._0_8_,iVar6,uVar7);
        }
        return iVar8;
    }
    iVar8 = iVar6;
code_r0x08004dbc:
    return iVar8;
}


// ===== sym.set_gpios_srcs_status @ 0x080050ec (size 152) =====

void sym.set_gpios_srcs_status(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg3 < 0) {
        _printk(0x80013d9,"set_gpios_srcs_status",arg1);
    }
    else {
        iVar2 = (arg2 & 0xffffffffU) * 4;
        *(obj.bt_power_src_status + iVar2) = 0xffffffff;
        gpio_to_desc(arg3 & 0xffffffff);
        uVar1 = gpiod_get_raw_value();
        *(obj.bt_power_src_status + iVar2) = uVar1;
        _printk(0x8001186,arg1,arg3 & 0xffffffff,uVar1);
    }
    return;
}


// ===== sym.btpower_enable_ipa_vreg @ 0x08005184 (size 336) =====

ulong * sym.btpower_enable_ipa_vreg(int64_t arg1)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    bool bVar4;
    int iVar5;
    ulong uVar6;
    ulong *puVar7;
    uint64_t uVar8;
    ulong *in_x2;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_88;
    ulong *puStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    if (obj.btpower_enable_ipa_vreg.config_done == 0x1) {
        uVar6 = 0x8000dc4;
    }
    else {
        if ((*(arg1 + 0xa8) != 0) && (*(arg1 + 0xa0) != 0)) {
            uStack_48 = 0;
            uStack_40 = 0;
            uStack_88 = 0x40;
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_68 = 0;
            uStack_60 = 0;
            uStack_78 = 0;
            uStack_70 = 0;
            snprintf(&uStack_78,0x40,"{class: wlan_pdc, res: %s.%s, %s: %d}",*(arg1 + 0xa8),0x800114e,"upval",1);
            in_x2 = &uStack_78;
            _printk(0x80011f3,"btpower_aop_set_vreg_param");
            puStack_80 = &uStack_78;
            iVar5 = mbox_send_message(*(arg1 + 0xa0),&uStack_88);
            if (iVar5 < 0) {
                in_x2 = &uStack_78;
                puVar7 = _printk(0x800140a,"btpower_aop_set_vreg_param",in_x2,iVar5);
            }
            else {
                puVar7 = _printk(0x80018b5,"btpower_enable_ipa_vreg");
                obj.btpower_enable_ipa_vreg.config_done = 0x1;
            }
            goto code_r0x080051f0;
        }
        uVar6 = 0x800079c;
    }
    puVar7 = _printk(uVar6,"btpower_enable_ipa_vreg");
code_r0x080051f0:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return puVar7;
    }
    uVar8 = __stack_chk_fail();
    *extraout_x18 = sym._copy_to_user;
    puVar7 = sp_el0;
    uVar3 = (uVar8 << 8) >> 8;
    if (((*(puVar7 + 0x3e) >> 5 & 1) != 0) || (uVar9 = uVar8, (*puVar7 >> 0x1a & 1) != 0)) {
        uVar9 = uVar8 & uVar3;
    }
    bVar4 = CARRY8(uVar9,in_x2);
    uVar9 = uVar9 + in_x2;
    uVar1 = 0;
    if (!bVar4 || uVar9 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar9 = 0xffffffffffffffff;
    }
    if (!CARRY8(uVar9,~uVar1) && !CARRY8(uVar9 + ~uVar1,bVar4) || uVar9 == uVar1 + !bVar4) {
        if ((__printk >> 0x18 & 1) == 0) {
            uVar9 = daif;
            if ((uVar9 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar7[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar7[1];
            InstructionSynchronizationBarrier();
            daif = uVar9;
        }
        if ((uVar8 & uVar3 & 0xffffff8000000000) != 0) {
            uVar8 = 0;
        }
        in_x2 = __arch_copy_to_user(uVar8);
        if ((__printk >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar8 = daif;
                daif = uVar8 | 0xc0;
            }
            uVar8 = ttbr1_el1;
            ttbr0_el1 = (uVar8 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar8 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
    }
    return in_x2;
}


// ===== sym._copy_to_user @ 0x080052d4 (size 312) =====

int64_t sym._copy_to_user(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = sp_el0;
    uVar3 = (arg1 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar5 = arg1, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar5 = arg1 & uVar3;
    }
    bVar4 = CARRY8(uVar5,arg2);
    uVar5 = uVar5 + arg2;
    uVar1 = 0;
    if (!bVar4 || uVar5 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar5 = 0xffffffffffffffff;
    }
    if (!CARRY8(uVar5,~uVar1) && !CARRY8(uVar5 + ~uVar1,bVar4) || uVar5 == uVar1 + !bVar4) {
        if ((__printk >> 0x18 & 1) == 0) {
            uVar5 = daif;
            if ((uVar5 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar5;
        }
        if ((arg1 & uVar3 & 0xffffff8000000000) != 0) {
            arg1 = 0;
        }
        arg2 = __arch_copy_to_user(arg1);
        if ((__printk >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar5 = daif;
                daif = uVar5 | 0xc0;
            }
            uVar5 = ttbr1_el1;
            ttbr0_el1 = (uVar5 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar5 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
    }
    return arg2;
}


// ===== sym.__cfi_check_fail @ 0x08005448 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800548c

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
    //switch table (4 cases) at 0x80006e6
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80054a0);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080054dc (size 356) =====

uint64_t sym.init_module(void)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    obj.probe_finished = 0x0;
    uVar3 = __platform_driver_register(reloc.bt_power_probe.14c5a0b45568701d13d7dba8cdfe7851.cfi_jt,obj.__this_module);
    uVar1 = uVar3;
    if (uVar1 == 0) {
        iVar2 = __register_chrdev(uVar3,0,0x100,0x8000b3b,obj.bt_dev_fops);
        _segment.ehdr = CONCAT44(*0x8000004,iVar2);
        if (iVar2 < 0) {
            _printk(0x80010cf,"btpower_init");
        }
        else {
            _segment.ehdr = __class_create(obj.__this_module,"bt-dev",obj.btpower_init.__key);
            if (_segment.ehdr < 0xfffffffffffff001) {
                iVar4 = device_create(_segment.ehdr,0,_segment.ehdr << 0x14,0,"btpower");
                if (iVar4 == 0) {
                    uVar3 = _printk(0x80010cf,"btpower_init");
                    return uVar3;
                }
                uVar1 = 0;
                goto code_r0x08005588;
            }
            _printk(0x80014f9,"btpower_init");
            __unregister_chrdev(_segment.ehdr & 0xffffffff,0,0x100,0x8000b3b);
        }
        uVar1 = 0xffffffff;
        platform_driver_unregister(reloc.bt_power_probe.14c5a0b45568701d13d7dba8cdfe7851.cfi_jt);
    }
    else {
        _printk(0x800070b,"btpower_init",uVar3 & 0xffffffff);
    }
code_r0x08005588:
    return uVar1;
}


// ===== sym.cleanup_module @ 0x08005640 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.bt_power_probe.14c5a0b45568701d13d7dba8cdfe7851.cfi_jt);
    return;
}

