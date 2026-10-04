// decompiled from leds-qti-flash by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 800) =====

//WARNING: Switch with 1 destination removed at 0x08005bc8

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x1031a10342562551) {
        if (arg1 < -0x3557318fb8d07b71) {
            if (arg1 < -0x5229ec05af7c3d4b) {
                if (arg1 == -0x66d421a09845f9f8) {
                    if ((pcVar1 + -0x80023a0 >> 3 | pcVar1 << 0x3d) < 3) {
                        return;
                    }
                    goto code_r0x08005b88;
                }
                if (arg1 != -0x6171bd50b11143a0) goto code_r0x08005b88;
                pcVar2 = sym.qti_flash_led_set_param.cfi_jt;
            }
            else if (arg1 == -0x5229ec05af7c3d4b) {
                pcVar2 = sym.qti_flash_brightness_get.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt;
            }
            else {
                if (arg1 != -0x3987c0e26ee29729) goto code_r0x08005b88;
                pcVar2 = sym.qti_flash_led_irq_handler.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt;
            }
        }
        else {
            if (arg1 < -0xf0bfb91152cab25) {
                if (arg1 == -0x3557318fb8d07b71) {
                    pcVar2 = sym.qti_flash_led_probe.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt;
                }
                else {
                    if (arg1 != -0x26a9ac968b151f18) goto code_r0x08005b88;
                    pcVar2 = sym.qti_flash_timeout_set.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt;
                }
                goto code_r0x080022c4;
            }
            if (arg1 == -0xf0bfb91152cab25) {
                pcVar2 = sym.qti_flash_led_prepare.cfi_jt;
            }
            else {
                if (arg1 != 0x2b3a43e29242445) goto code_r0x08005b88;
                pcVar2 = sym.init_module.cfi_jt;
            }
        }
    }
    else if (arg1 < 0x67966ce7b3be8732) {
        if (arg1 < 0x33e17dc2ef918a9f) {
            if (arg1 != 0x1031a10342562551) {
                if (arg1 != 0x1e3d0ffe3d0499e9) goto code_r0x08005b88;
                pcVar2 = sym.qti_flash_off_time_store.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt;
code_r0x080022c4:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08005b88;
            }
            pcVar2 = sym.qti_flash_brightness_set_blocking.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt;
        }
        else {
            if (arg1 != 0x33e17dc2ef918a9f) {
                if (arg1 != 0x39e63916c3db07da) goto code_r0x08005b88;
                pcVar2 = sym.off_timer_function.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt;
                goto code_r0x080022c4;
            }
            pcVar2 = sym.qti_flash_strobe_get.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt;
        }
    }
    else if (arg1 < 0x6ed88b762d96cca6) {
        if (arg1 != 0x67966ce7b3be8732) {
            if (arg1 != 0x6e57651cf302bec9) goto code_r0x08005b88;
            pcVar2 = sym.qti_flash_led_brightness_set.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt;
            goto code_r0x080022c4;
        }
        pcVar2 = sym.qti_flash_led_brightness_get.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt;
    }
    else if (arg1 == 0x6ed88b762d96cca6) {
        pcVar2 = sym.qti_flash_strobe_set.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08005b88;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08005b88:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8005bdc);
    (*pcVar1)();
}


// ===== sym.qti_flash_timeout_set.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt @ 0x08002328 (size 8) =====

int sym.qti_flash_timeout_set.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt(int64_t param_1,uint32_t param_2)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint8_t auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    if (param_2 == 0) {
        iVar3 = 0;
        *(param_1 + 0x268) = 0;
    }
    else {
        uVar2 = *(param_1 + 0x250);
        if (param_2 / 1000 <= *(param_1 + 0x250)) {
            uVar2 = param_2 / 1000;
        }
        if (uVar2 - 0x501 < 0xfffffb00) {
            iVar3 = -0x16;
        }
        else if ((uVar2 & 0xffff) < 5) {
            iVar3 = -1;
        }
        else {
            iVar4 = *(param_1 + -8);
            auStack_3c[0] = (uVar2 + 5 & 0xffff) / 10 - 1;
            iVar1 = *(param_1 + 0x269) + 0x3e;
            *(param_1 + 0x268) = auStack_3c[0];
            auStack_3c[0] = auStack_3c[0] | 0x80;
            iVar3 = regmap_bulk_write(*(iVar4 + 8),iVar1 + *(iVar4 + 0x58),auStack_3c,1);
            if (iVar3 < 0) {
                _printk(0x800078b,"qti_flash_led_write",iVar1 + *(iVar4 + 0x58),iVar3);
            }
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return iVar3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.on_timer_function;
    iVar3 = sym.qti_flash_switch_enable(iVar4 + -0x1b0);
    if (iVar3 < 0) {
        *(iVar4 + 0xa4) = 0;
        _printk(0x800064f,"on_timer_function",*(iVar4 + -0x1a8),iVar3);
    }
    else {
        *(iVar4 + 0xa4) = 1;
    }
    return 0;
}


// ===== sym.qti_flash_brightness_set.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt @ 0x08002330 (size 8) =====

ulong sym.qti_flash_brightness_set.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qti_flash_led_brightness_set(param_1,param_2);
    return 0;
}


// ===== sym.qti_flash_led_prepare.cfi_jt @ 0x08002338 (size 8) =====

int sym.qti_flash_led_prepare.cfi_jt(ulong *param_1,uint32_t param_2,int64_t param_3)

{
    ulong *puVar1;
    int iVar2;
    ulong *in_x18;
    ulong uVar3;
    ulong *puVar4;
    ulong *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == NULL) {
        uVar3 = 0x800093a;
code_r0x080025d0:
        _printk(uVar3,"qti_flash_led_prepare");
        iVar2 = -0x16;
    }
    else {
        puVar1 = param_1 + 4;
        _raw_read_lock(puVar1);
        puVar5 = param_1 + 5;
        puVar4 = *puVar5;
        if (puVar5 != puVar4) {
            uVar3 = *param_1;
            do {
                iVar2 = strcmp(puVar4[-0x1c],uVar3);
                if (iVar2 == 0) {
                    _raw_read_unlock(puVar1);
                    if (puVar4 == 0x150) goto code_r0x0800259c;
                    if ((param_2 >> 2 & 1) != 0) {
                        if (param_3 == 0) {
                            uVar3 = 0x80001b5;
                            goto code_r0x080025d0;
                        }
                        iVar2 = sym.qti_flash_led_get_max_avail_current(puVar4[-0x2b],param_3);
                        if (iVar2 < 0) {
                            _printk(0x800051d,"qti_flash_led_prepare",iVar2);
                            return iVar2;
                        }
                    }
                    return 0;
                }
                puVar4 = *puVar4;
            } while (puVar5 != puVar4);
        }
        _raw_read_unlock(puVar1);
code_r0x0800259c:
        _printk(0x80011c9,"qti_flash_led_prepare",*param_1);
        iVar2 = -0x13;
    }
    return iVar2;
}


// ===== sym.init_module.cfi_jt @ 0x08002340 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qti_flash_led_probe.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08002348 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qti_flash_led_probe.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt);
    return;
}


// ===== sym.qti_flash_brightness_get.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt @ 0x08002350 (size 8) =====

ulong sym.qti_flash_brightness_get.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt(int64_t param_1,uint *param_2)

{
    *param_2 = *(param_1 + 8);
    return 0;
}


// ===== sym.qti_flash_led_set_param.cfi_jt @ 0x08002358 (size 8) =====

ulong sym.qti_flash_led_set_param.cfi_jt(ulong *param_1,int64_t param_2,int64_t param_3)

{
    ulong *puVar1;
    int iVar2;
    ulong *in_x18;
    ulong uVar3;
    ulong *puVar4;
    ulong *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = param_1 + 4;
    _raw_read_lock(puVar1);
    puVar5 = param_1 + 5;
    puVar4 = *puVar5;
    if (puVar5 != puVar4) {
        uVar3 = *param_1;
        do {
            iVar2 = strcmp(puVar4[-0x1c],uVar3);
            if (iVar2 == 0) {
                _raw_read_unlock(puVar1);
                if (puVar4 != 0x150) {
                    if (param_2 != 0 || param_3 != 0) {
                        puVar4[0x1d] = param_2;
                        puVar4[0x1e] = param_3;
                        return 0;
                    }
                    _printk(0x8000f3a,"qti_flash_led_set_param");
                    return 0xffffffea;
                }
                goto code_r0x08002494;
            }
            puVar4 = *puVar4;
        } while (puVar5 != puVar4);
    }
    _raw_read_unlock(puVar1);
code_r0x08002494:
    _printk(0x80011c9,"qti_flash_led_set_param",*param_1);
    return 0xffffffea;
}


// ===== sym.qti_flash_off_time_store.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt @ 0x08002360 (size 8) =====

uchar * sym.qti_flash_off_time_store.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,uchar *param_4)

{
    code *pcVar1;
    int iVar2;
    uchar *puVar3;
    int64_t extraout_x1;
    int iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    uchar auStack_64 [4];
    uchar auStack_60 [4];
    uchar auStack_5c [4];
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    uchar *puStack_40;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    iVar5 = *(param_1 + 0x98);
    uStack_30 = 0;
    iVar2 = kstrtoull(param_3,0,&uStack_30);
    if (iVar2 < 0) {
        param_4 = iVar2;
    }
    else {
        *(iVar5 + 0x240) = uStack_30;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return param_4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.qti_flash_led_irq_handler;
    pcStack_48 = sym.qti_flash_led_irq_handler;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    auStack_5c[0] = 0;
    auStack_60[0] = 0;
    auStack_64[0] = 0;
    puStack_50 = &stack0xffffffffffffffe0;
    puStack_40 = param_4;
    iVar2 = regmap_bulk_read(*(extraout_x1 + 8),*(extraout_x1 + 0x58) + 0x10,auStack_5c,1);
    if (iVar2 < 0) {
        iVar4 = 0x10;
    }
    else {
        iVar2 = regmap_bulk_read(*(extraout_x1 + 8),*(extraout_x1 + 0x58) + 6,auStack_60,1);
        if (iVar2 < 0) {
            iVar4 = 6;
        }
        else {
            iVar2 = regmap_bulk_read(*(extraout_x1 + 8),*(extraout_x1 + 0x58) + 7,auStack_64,1);
            if (-1 < iVar2) goto code_r0x08005b10;
            iVar4 = 7;
        }
    }
    _printk(0x8000960,"qti_flash_led_read",iVar4 + *(extraout_x1 + 0x58),iVar2);
code_r0x08005b10:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_58) {
        auVar6 = __stack_chk_fail();
        puVar3 = auVar6._0_8_;
        *extraout_x18_00 = sym.__cfi_check_fail;
        if (puVar3 != NULL) {
            switch(*puVar3) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar3,auVar6._8_8_,0);
                break;
            default:
                return puVar3;
            }
        }
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5502,0x8005bdc);
        (*pcVar1)();
    }
    return 0x1;
}


// ===== sym.qti_flash_on_time_store.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt @ 0x08002368 (size 8) =====

int64_t sym.qti_flash_on_time_store.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    int64_t iStack_30;
    int64_t iStack_28;
    
    piVar2 = &iStack_30;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    iVar3 = *(param_1 + 0x98);
    iStack_30 = 0;
    iVar1 = kstrtoull(param_3,0,&iStack_30);
    if (iVar1 < 0) {
        param_4 = iVar1;
    }
    else if (iStack_30 == 0) {
        param_4 = -0x16;
    }
    else {
        *(iVar3 + 0x238) = iStack_30;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.qti_flash_off_time_show;
    iVar1 = scnprintf(piVar2,0x1000,"%lu\n",*(*(iVar3 + 0x98) + 0x240) * 1000);
    return iVar1;
}


// ===== sym.qti_flash_strobe_set.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt @ 0x08002370 (size 8) =====

int sym.qti_flash_strobe_set.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt(int64_t param_1,uint8_t param_2)

{
    char *pcVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t arg3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x275) == (param_2 & 1)) {
        iVar2 = 0;
    }
    else if ((((param_2 & 1) == 0) || (*(param_1 + 0x274) != '\0')) && (*(param_1 + 0x268) != '\0')) {
        arg3 = 1L << (*(param_1 + 0x269) & 0x3f);
        uVar3 = arg3;
        if ((param_2 & 1) == 0) {
            uVar3 = 0;
        }
        iVar2 = sym.qti_flash_led_strobe(*(param_1 + -8),0,arg3,uVar3);
        if (iVar2 < 0) {
            pcVar1 = "strobe";
            if ((param_2 & 1) == 0) {
                pcVar1 = "desrobe";
            }
            _printk(0x80004cc,"qti_flash_strobe_set",pcVar1,iVar2);
        }
        else {
            *(param_1 + 0x275) = param_2 & 1;
            if (((param_2 & 1) == 0) && (iVar2 = sym.qti_flash_led_disable(param_1 + -8), iVar2 < 0)) {
                _printk(0x8000e24,"qti_flash_strobe_set",*(param_1 + 0x269));
            }
        }
    }
    else {
        iVar2 = -0x16;
    }
    return iVar2;
}


// ===== sym.qti_flash_brightness_set_blocking.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt @ 0x08002378 (size 8) =====

ulong sym.qti_flash_brightness_set_blocking.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qti_flash_led_brightness_set(param_1,param_2);
    return 0;
}


// ===== sym.qti_flash_led_brightness_set.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt @ 0x08002380 (size 8) =====

void sym.qti_flash_led_brightness_set.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt(int64_t param_1,uint32_t param_2)

{
    uint32_t uVar1;
    bool bVar2;
    int iVar3;
    int64_t iVar4;
    uint32_t uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(param_1 + -8);
    uVar1 = *(iVar6 + 0x2c);
    if (uVar1 != 0) {
        uVar5 = 0;
        iVar4 = *(iVar6 + 0x10);
        bVar2 = true;
        do {
            if (((*(iVar4 + uVar5 * 0x280 + 0x271) == *(param_1 + 0x269)) &&
                (*(iVar4 + uVar5 * 0x280 + 0x278) != *(param_1 + 0x270))) && (*(iVar4 + uVar5 * 0x280 + 0x27c) != '\0'))
            break;
            uVar5 = uVar5 + 1;
            bVar2 = uVar5 < uVar1;
        } while (uVar1 != uVar5);
        if (bVar2) {
            return;
        }
    }
    iVar3 = sym.__qti_flash_led_brightness_set(param_1,param_2);
    if (iVar3 == 0) {
        *(param_1 + 0x25c) = param_2;
        if (*(iVar6 + 0x30) != 0) {
            iVar3 = 0;
            iVar4 = *(iVar6 + 0x18);
            do {
                if ((*(iVar4 + iVar3 * 600 + 0x255) != '\0') && (*(iVar4 + iVar3 * 600 + 0x254) != '\0')) {
                    sym.qti_flash_led_symmetry_config(iVar4 + iVar3 * 600);
                    return;
                }
                iVar3 = iVar3 + 1;
            } while (*(iVar6 + 0x30) != iVar3);
        }
    }
    return;
}


// ===== sym.qti_flash_led_switch_brightness_set.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt @ 0x08002388 (size 8) =====

void sym.qti_flash_led_switch_brightness_set.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt
               (int64_t param_1,int param_2,int64_t param_3,int64_t param_4)

{
    char *pcVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar noname_1 [16];
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x24c) != (param_2 != 0)) {
        if (param_2 == 0) {
            iVar3 = __hrtimer_get_remaining(param_1 + 0x1f0,0);
            noname_1 = extraout_q0;
            if (999 < iVar3) {
                noname_1 = hrtimer_cancel(param_1 + 0x1f0);
            }
            iVar2 = sym.qti_flash_switch_disable(param_1 + -8,noname_1,param_3,param_4);
        }
        else {
            if (*(param_1 + 0x238) != 0) {
                hrtimer_start_range_ns(param_1 + 0x1a8,*(param_1 + 0x238) * 1000000,0,1);
                return;
            }
            iVar2 = sym.qti_flash_switch_enable(param_1 + -8);
        }
        if (iVar2 < 0) {
            pcVar1 = "enable";
            if (param_2 == 0) {
                pcVar1 = "disable";
            }
            _printk(0x80015a4,"qti_flash_led_switch_brightness_set",pcVar1,iVar2);
        }
        else {
            *(param_1 + 0x24c) = param_2 != 0;
        }
    }
    return;
}


// ===== sym.off_timer_function.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt @ 0x08002390 (size 8) =====

ulong sym.off_timer_function.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt(int64_t param_1)

{
    int iVar1;
    char *arg3;
    int64_t arg2;
    ulong *in_x18;
    ulong unaff_x30;
    uchar noname_1 [16];
    
    *in_x18 = unaff_x30;
    arg3 = "off_timer_function";
    arg2 = 0x3a3;
    noname_1 = _printk(0x8000a9d);
    iVar1 = sym.qti_flash_switch_disable(param_1 + -0x1f8,noname_1,arg3,arg2);
    if (iVar1 < 0) {
        _printk(0x8001346,"off_timer_function",*(param_1 + -0x1f0),iVar1);
    }
    else {
        *(param_1 + 0x5c) = 0;
    }
    return 0;
}


// ===== sym.on_timer_function.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt @ 0x08002398 (size 8) =====

ulong sym.on_timer_function.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.qti_flash_switch_enable(param_1 + -0x1b0);
    if (iVar1 < 0) {
        *(param_1 + 0xa4) = 0;
        _printk(0x800064f,"on_timer_function",*(param_1 + -0x1a8),iVar1);
    }
    else {
        *(param_1 + 0xa4) = 1;
    }
    return 0;
}


// ===== sym.qti_flash_led_max_current_show.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt @ 0x080023a0 (size 8) =====

int64_t sym.qti_flash_led_max_current_show.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x98);
    iVar2 = *(iVar3 + -8);
    iVar1 = sym.qti_flash_led_get_max_avail_current(iVar2,iVar2 + 0x4c);
    if (iVar1 < 0) {
        _printk(0x8000b56,"qti_flash_led_max_current_show",iVar1);
        iVar2 = -0x16;
    }
    else {
        iVar1 = scnprintf(param_3,0x1000,0x8000e10,*(*(iVar3 + -8) + 0x4c));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.qti_flash_off_time_show.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt @ 0x080023a8 (size 8) =====

int64_t sym.qti_flash_off_time_show.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,"%lu\n",*(*(param_1 + 0x98) + 0x240) * 1000);
    return iVar1;
}


// ===== sym.qti_flash_on_time_show.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt @ 0x080023b0 (size 8) =====

int64_t sym.qti_flash_on_time_show.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,"%lu\n",*(*(param_1 + 0x98) + 0x238) * 1000);
    return iVar1;
}


// ===== sym.qti_flash_led_probe.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt @ 0x080023b8 (size 8) =====

uint32_t sym.qti_flash_led_probe.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt(int64_t param_1)

{
    uint32_t *puVar1;
    int *piVar2;
    uint8_t uVar3;
    bool bVar4;
    char cVar5;
    uint32_t uVar6;
    uint uVar7;
    int iVar8;
    int iVar9;
    uint32_t uVar10;
    int64_t *piVar11;
    int64_t iVar12;
    ulong uVar13;
    int64_t iVar14;
    char *pcVar15;
    uint32_t uVar16;
    int64_t iVar17;
    int64_t iVar18;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar19;
    ulong *puVar20;
    int64_t iVar21;
    ulong *puVar22;
    uint64_t uVar23;
    int64_t iVar24;
    ulong unaff_x30;
    uint uStack_9c;
    ulong uStack_98;
    uint32_t uStack_8c;
    ulong uStack_88;
    uint64_t uStack_80;
    ulong uStack_78;
    uint uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar21 = sp_el0;
    iStack_68 = *(iVar21 + 0x5e0);
    iVar21 = *(param_1 + 0x300);
    piVar11 = devm_kmalloc(param_1 + 0x10,0x68,0xdc0);
    if (piVar11 == NULL) {
        uVar6 = 0xfffffff4;
        goto code_r0x08003da8;
    }
    iVar12 = dev_get_regmap(*(param_1 + 0x70),0);
    piVar11[1] = iVar12;
    if (iVar12 == 0) {
        uVar13 = 0x80010f3;
    }
    else {
        cVar5 = of_device_get_match_data(param_1 + 0x10);
        *(piVar11 + 0x5c) = cVar5;
        if (cVar5 != '\0') {
            *piVar11 = param_1;
            *(piVar11 + 5) = 0;
            uStack_70 = 0;
            uStack_80 = 0;
            uStack_78 = 0;
            uStack_98 = 0;
            uStack_9c = 0;
            uVar6 = of_property_read_variable_u32_array(iVar21,0x80011b1,&uStack_9c,1,0);
            if (uVar6 < 0) {
                _printk(0x8000587,"qti_flash_led_register_device",*(iVar21 + 0x10),uVar6);
                goto code_r0x08003d90;
            }
            *(piVar11 + 0xb) = uStack_9c;
            iVar12 = devm_kmalloc(*piVar11 + 0x10,*(piVar11 + 0x5c) << 2,0xdc0);
            piVar11[7] = iVar12;
            if (iVar12 == 0) {
code_r0x08003ac8:
                uVar6 = 0xfffffff4;
                goto code_r0x08003d90;
            }
            if (*(piVar11 + 0x5c) != '\0') {
                uVar23 = 0;
                while( true ) {
                    *(iVar12 + uVar23 * 4) = 0xffffffea;
                    uVar6 = of_get_named_gpio_flags(iVar21,"hw-strobe-gpios",uVar23 & 0xffffffff,0);
                    if (-1 < uVar6) {
                        if (0x1ff < uVar6) {
                            _printk(0x8001123,"qti_flash_led_register_device");
                            goto code_r0x08003d1c;
                        }
                        *(piVar11[7] + uVar23 * 4) = uVar6;
                        scnprintf(&uStack_80,0x14,"hw_strobe_gpio%d",uVar23 & 0xffffffff);
                        uVar6 = devm_gpio_request_one(*piVar11 + 0x10,*(piVar11[7] + uVar23 * 4),0,&uStack_80);
                        if (uVar6 < 0) {
                            uVar13 = 0x80003e8;
                            goto code_r0x08003b98;
                        }
                        uVar13 = gpio_to_desc(*(piVar11[7] + uVar23 * 4));
                        gpiod_direction_output_raw(uVar13,0);
                    }
                    uVar23 = uVar23 + 1;
                    if (*(piVar11 + 0x5c) <= uVar23) break;
                    iVar12 = piVar11[7];
                }
            }
            iVar12 = of_find_property(iVar21,"qcom,secure-vm",0);
            *(piVar11 + 0x61) = iVar12 != 0;
            uVar7 = of_irq_get_byname(iVar21,"all-ramp-up-done-irq");
            *(piVar11 + 8) = uVar7;
            uVar7 = of_irq_get_byname(iVar21,"all-ramp-down-done-irq");
            *(piVar11 + 0x44) = uVar7;
            uVar7 = of_irq_get_byname(iVar21,"led-fault-irq");
            *(piVar11 + 9) = uVar7;
            iVar12 = of_get_next_available_child(iVar21,0);
            if (iVar12 == 0) {
                uVar23 = *(piVar11 + 0x2c);
                if (*(piVar11 + 0x2c) == 0) goto code_r0x08003b2c;
            }
            else {
                bVar4 = false;
                do {
                    uVar6 = of_property_read_string(iVar12,"label",&uStack_98);
                    uVar13 = uStack_98;
                    if (uVar6 < 0) goto code_r0x08003b1c;
                    iVar8 = strcmp("flash",uStack_98);
                    if ((iVar8 != 0) && (iVar8 = strcmp("torch",uVar13), iVar8 != 0)) {
                        iVar8 = strcmp("indicator",uVar13);
                        if (iVar8 == 0) {
                            iVar8 = *(piVar11 + 0x2c);
                            goto code_r0x08003170;
                        }
                        iVar8 = strcmp("switch",uVar13);
                        if (iVar8 == 0) {
                            *(piVar11 + 6) = piVar11[6] + 1;
                            goto code_r0x08003178;
                        }
                        _printk(0x8000755,"qti_flash_led_register_device",uVar13);
code_r0x08003d1c:
                        uVar6 = 0xffffffea;
                        goto code_r0x08003d90;
                    }
                    iVar8 = *(piVar11 + 0x2c);
                    bVar4 = true;
code_r0x08003170:
                    *(piVar11 + 0x2c) = iVar8 + 1;
code_r0x08003178:
                    iVar12 = of_get_next_available_child(iVar21,iVar12);
                } while (iVar12 != 0);
                uVar23 = *(piVar11 + 0x2c);
                if (*(piVar11 + 0x2c) == 0) {
code_r0x08003b2c:
                    _printk(0x8000419,"qti_flash_led_register_device");
                    uVar6 = 0xfffffff6;
                    goto code_r0x08003d90;
                }
                if ((bVar4) && (piVar11[6] == 0)) {
                    _printk(0x8000fab,"qti_flash_led_register_device");
                    uVar6 = 0xffffffed;
                    goto code_r0x08003d90;
                }
            }
            iVar12 = devm_kmalloc(*piVar11 + 0x10,uVar23 * 0x280,0xdc0);
            piVar11[2] = iVar12;
            if (iVar12 == 0) goto code_r0x08003ac8;
            if (*(piVar11 + 6) != 0) {
                iVar12 = devm_kmalloc(*piVar11 + 0x10,*(piVar11 + 6) * 600,0xdc0);
                piVar11[3] = iVar12;
                if (iVar12 == 0) goto code_r0x08003ac8;
            }
            iVar12 = of_get_next_available_child(iVar21,0);
            if (iVar12 != 0) {
                uVar16 = 0;
                iVar8 = 0;
                do {
                    iVar17 = 1;
                    uVar6 = of_property_read_string(iVar12,"label",&uStack_98);
                    uVar13 = uStack_98;
                    if (uVar6 < 0) goto code_r0x08003b1c;
                    iVar9 = strcmp("flash",uStack_98);
                    if (((iVar9 == 0) || (iVar9 = strcmp("torch",uVar13), iVar9 == 0)) ||
                       (iVar9 = strcmp("indicator",uVar13), iVar9 == 0)) {
                        iVar17 = piVar11[2];
                        iVar19 = uVar16;
                        uStack_88 = 0;
                        puVar20 = iVar17 + uVar16 * 0x280;
                        uStack_8c = 0;
                        uVar6 = of_property_read_string(iVar12,"qcom,led-name");
                        if (uVar6 < 0) {
                            uVar13 = 0x80001f9;
code_r0x08003c6c:
                            _printk(uVar13,"register_flash_device");
                        }
                        else {
                            uVar6 = of_property_read_string(iVar12,"label",&uStack_88);
                            uVar13 = uStack_88;
                            if (uVar6 < 0) {
                                uVar13 = 0x80005d1;
                                goto code_r0x08003c6c;
                            }
                            iVar9 = strcmp(uStack_88,"flash");
                            if (iVar9 != 0) {
                                iVar9 = strcmp(uVar13,"torch");
                                if (iVar9 == 0) {
                                    uVar7 = 2;
                                    goto code_r0x08003658;
                                }
                                iVar9 = strcmp(uVar13,"indicator");
                                if (iVar9 == 0) {
                                    uVar7 = 3;
                                    goto code_r0x08003658;
                                }
                                _printk(0x8000e91,"register_flash_device",uVar13);
code_r0x0800336c:
                                uVar16 = uVar16 + 1;
                                iVar17 = piVar11[2] + iVar19 * 0x280;
code_r0x08003380:
                                *(*(iVar17 + 0x58) + 0x2f0) = iVar12;
                                goto code_r0x08003388;
                            }
                            uVar7 = 1;
code_r0x08003658:
                            iVar24 = iVar17 + iVar19 * 0x280;
                            *(iVar24 + 0x278) = uVar7;
                            uVar6 = of_property_read_variable_u32_array(iVar12,"qcom,id",&uStack_8c,1,0);
                            if (uVar6 < 0) {
                                uVar13 = 0x80010b0;
                                goto code_r0x08003c6c;
                            }
                            iVar14 = iVar17 + iVar19 * 0x280;
                            piVar2 = iVar24 + 0x278;
                            *(iVar14 + 0x271) = uStack_8c;
                            uVar6 = of_property_read_string(iVar12,"qcom,default-led-trigger",iVar14 + 0x78);
                            if ((uVar6 < 0) && (*piVar2 != 3)) {
                                uVar13 = 0x8000dbd;
code_r0x08003e24:
                                _printk(uVar13,"register_flash_device");
                            }
                            else {
                                uVar10 = of_property_read_variable_u32_array(iVar12,"qcom,ires-ua",&uStack_8c,1,0);
                                if (uVar10 < 0) {
                                    uVar13 = 0x8000c0f;
                                    uVar6 = uVar10;
                                }
                                else {
                                    uVar10 = 0xffffffea;
                                    if (uStack_8c == 0x30d4) {
                                        uVar10 = 1;
                                    }
                                    uVar6 = 0;
                                    if (uStack_8c != 5000) {
                                        uVar6 = uVar10;
                                    }
                                    if (uVar6 < 0) {
                                        uVar13 = 0x8000ebf;
                                        uVar10 = uStack_8c;
                                    }
                                    else {
                                        iVar24 = iVar17 + iVar19 * 0x280;
                                        *(iVar24 + 0x25c) = uStack_8c;
                                        *(iVar24 + 0x260) = uStack_8c;
                                        *(iVar24 + 0x273) = uVar6;
                                        *(iVar24 + 0x272) = uVar6;
                                        uVar10 = of_property_read_variable_u32_array
                                                           (iVar12,"qcom,max-current-ma",&uStack_8c,1,0);
                                        if (-1 < uVar10) {
                                            iVar9 = *piVar2;
                                            if ((iVar9 == 1) && (0x5dc < uStack_8c)) {
                                                uVar13 = 0x80009d1;
                                            }
                                            else if ((iVar9 == 2) && (500 < uStack_8c)) {
                                                uVar13 = 0x8001159;
                                            }
                                            else {
                                                if ((iVar9 != 3) || (uStack_8c < 0x65)) {
                                                    iVar14 = iVar17 + iVar19 * 0x280;
                                                    *(iVar14 + 0x26c) = uStack_8c;
                                                    *(iVar14 + 0x14) = uStack_8c;
                                                    sym.get_custom_max_current(puVar20,iVar12);
                                                    iVar9 = of_property_read_variable_u32_array
                                                                      (iVar12,"qcom,duration-ms",&uStack_8c,1,0);
                                                    cVar5 = '\x13';
                                                    if ((-1 < iVar9) && (9 < uStack_8c)) {
                                                        uVar6 = 200;
                                                        if (uStack_8c <= *(iVar17 + iVar19 * 0x280 + 600)) {
                                                            uVar6 = uStack_8c;
                                                        }
                                                        if (uVar6 - 0x501 < 0xfffffb00) {
                                                            uVar13 = 0x800044a;
                                                            goto code_r0x08003d2c;
                                                        }
                                                        cVar5 = (uVar6 + 5 & 0xffff) / 10 + -1;
                                                    }
                                                    iVar18 = iVar17 + iVar19 * 0x280;
                                                    pcVar15 = iVar18 + 0x275;
                                                    *(iVar18 + 0x270) = cVar5;
                                                    *(iVar18 + 0x275) = 0;
                                                    iVar9 = of_property_read_variable_u32_array
                                                                      (iVar12,"qcom,strobe-sel",&uStack_8c,1,0);
                                                    if (-1 < iVar9) {
                                                        *pcVar15 = uStack_8c;
                                                    }
                                                    iVar9 = *piVar2;
                                                    if (iVar9 == 3) {
                                                        *pcVar15 = '\0';
                                                        iVar18 = iVar17 + iVar19 * 0x280;
                                                        *puVar20 = piVar11;
                                                        *(iVar18 + 0x28) =
                                                             
                                                            sym.qti_flash_led_brightness_set.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt
                                                        ;
                                                        *(iVar18 + 0x27c) = 0;
                                                        *(iVar18 + 0x38) =
                                                             
                                                            sym.qti_flash_led_brightness_get.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt
                                                        ;
                                                    }
                                                    else {
                                                        if (*pcVar15 == '\x01') {
                                                            uVar6 = of_property_read_variable_u32_array
                                                                              (iVar12,"qcom,strobe-config",&uStack_8c
                                                                               ,1,0);
                                                            if (uVar6 < 0) {
                                                                uVar13 = 0x80008cb;
                                                                goto code_r0x08003e24;
                                                            }
                                                            iVar9 = *piVar2;
                                                            *puVar20 = piVar11;
                                                            iVar18 = iVar17 + iVar19 * 0x280;
                                                            *(iVar18 + 0x274) = uStack_8c;
                                                            *(iVar18 + 0x27c) = 0;
                                                            *(iVar18 + 0x28) =
                                                                 
                                                            sym.qti_flash_led_brightness_set.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt
                                                            ;
                                                            *(iVar18 + 0x38) =
                                                                 
                                                            sym.qti_flash_led_brightness_get.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt
                                                            ;
                                                            if (iVar9 == 3) goto code_r0x080032e0;
                                                        }
                                                        else {
                                                            *puVar20 = piVar11;
                                                            iVar18 = iVar17 + iVar19 * 0x280;
                                                            *(iVar18 + 0x28) =
                                                                 
                                                            sym.qti_flash_led_brightness_set.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt
                                                            ;
                                                            *(iVar18 + 0x27c) = 0;
                                                            *(iVar18 + 0x38) =
                                                                 
                                                            sym.qti_flash_led_brightness_get.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt
                                                            ;
                                                        }
                                                        *(iVar17 + iVar19 * 0x280 + 0x1b0) =
                                                             
                                                            reloc.qti_flash_brightness_set.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt
                                                        ;
                                                        if (iVar9 == 1) {
                                                            iVar18 = iVar17 + iVar19 * 0x280;
                                                            *(iVar18 + 0x18) = 0x40000;
                                                            *(iVar18 + 0x30) =
                                                                 
                                                            sym.qti_flash_brightness_set_blocking.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt
                                                            ;
                                                        }
                                                    }
code_r0x080032e0:
                                                    iVar17 = iVar17 + iVar19 * 0x280;
                                                    uVar7 = *(iVar14 + 0x26c);
                                                    iVar9 = *(iVar24 + 0x25c);
                                                    *(iVar17 + 0x1b8) = 0;
                                                    *(iVar17 + 0x1bc) = uVar7;
                                                    *(iVar17 + 0x1c0) = 1;
                                                    *(iVar17 + 0x1c8) = 0;
                                                    *(iVar17 + 0x1cc) = *(iVar17 + 600) * 1000;
                                                    *(iVar17 + 0x1c4) = (iVar9 + 500U) / 1000;
                                                    *(iVar17 + 0x1d0) = 0x30d4000002710;
                                                    uVar6 = led_classdev_flash_register_ext
                                                                      (*piVar11 + 0x10,puVar20 + 1,0);
                                                    if (-1 < uVar6) goto code_r0x0800336c;
                                                    _printk(0x800027e,"register_flash_device",puVar20[1]);
                                                    goto code_r0x08003d40;
                                                }
                                                uVar13 = 0x8000602;
                                            }
code_r0x08003d2c:
                                            _printk(uVar13,"register_flash_device");
                                            uVar6 = 0xffffffea;
                                            goto code_r0x08003d40;
                                        }
                                        uVar13 = 0x8000d25;
                                        uVar6 = uVar10;
                                    }
                                }
                                _printk(uVar13,"register_flash_device",uVar10);
                            }
                        }
code_r0x08003d40:
                        _printk(0x80003ad,"qti_flash_led_register_device",*(piVar11[2] + iVar19 * 0x280 + 8),uVar6);
joined_r0x08003d68:
                        if (-1 < uVar16) {
                            iVar21 = uVar16 * 0x280 + 0x280;
                            do {
                                led_classdev_flash_unregister(piVar11[2] + iVar21 + -0x278);
                                iVar21 = iVar21 + -0x280;
                            } while (iVar21 != 0);
                        }
                        goto code_r0x08003d90;
                    }
                    iVar9 = strcmp("switch",uVar13);
                    if (iVar9 == 0) {
                        iVar19 = piVar11[3];
                        iVar24 = iVar8;
                        puVar20 = iVar19 + iVar8 * 600 + 8;
                        uVar6 = of_property_read_string(iVar12,"qcom,led-name");
                        if (uVar6 < 0) {
                            uVar13 = 0x8001267;
code_r0x08003e54:
                            _printk(uVar13,"register_switch_device",uVar6);
                        }
                        else {
                            uVar6 = of_property_read_string
                                              (iVar12,"qcom,default-led-trigger",iVar19 + iVar24 * 600 + 0x78);
                            if (uVar6 < 0) {
                                uVar13 = 0x80012a0;
                                goto code_r0x08003e54;
                            }
                            puVar1 = iVar19 + iVar24 * 600 + 0x250;
                            uVar6 = of_property_read_variable_u32_array(iVar12,"qcom,led-mask",puVar1,1,0);
                            if (-1 < uVar6) {
                                uVar6 = *puVar1;
                                if ((uVar6 == 0) ||
                                   (uVar23 = 0xffffffffffffffff >> (-*(piVar11 + 0x5c) & 0x3f), uVar23 < uVar6)) {
                                    _printk(0x80004f6,"register_switch_device");
                                    uVar6 = 0xffffffea;
                                    goto code_r0x08003f38;
                                }
                                if (uVar6 < uVar23) {
                                    *(piVar11 + 0xc) = 1;
                                }
                                iVar14 = of_find_property(iVar12,"qcom,symmetry-en",0);
                                puVar22 = iVar19 + iVar24 * 600;
                                puVar22[0x48] = 0;
                                *(puVar22 + 0x255) = iVar14 != 0;
                                puVar22[0x49] = 0;
                                hrtimer_init(puVar22 + 0x36,1,1);
                                hrtimer_init(puVar22 + 0x3f,1,1);
                                *puVar22 = piVar11;
                                puVar22[0x3b] = sym.on_timer_function.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt;
                                puVar22[0x44] = sym.off_timer_function.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt;
                                puVar22[5] = 
                                sym.qti_flash_led_switch_brightness_set.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt;
                                puVar22[7] = sym.qti_flash_led_brightness_get.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt;
                                uVar6 = devm_led_classdev_register_ext(*piVar11 + 0x10,puVar20,0);
                                if (uVar6 < 0) {
                                    _printk(0x8000a51,"register_switch_device",*puVar20);
                                    goto code_r0x08003f38;
                                }
                                puVar20 = iVar19 + iVar24 * 600 + 0x58;
                                uVar6 = sysfs_create_file_ns(*puVar20,obj.qti_flash_led_attrs,0);
                                if (uVar6 < 0) {
                                    iVar17 = 0;
                                    bVar4 = true;
code_r0x08003ed8:
                                    _printk(0x80012d5,"register_switch_device",uVar6);
                                    sysfs_remove_file_ns(*puVar20,obj.qti_flash_led_attrs + iVar17 * 0x20,0);
                                    if ((!bVar4) &&
                                       (sysfs_remove_file_ns
                                                  (*puVar20,obj.qti_flash_led_attrs + (iVar17 + -1) * 0x20,0),
                                       iVar17 + -1 != 0)) {
                                        sysfs_remove_file_ns(*puVar20,iVar17 * 0x20 + 0x8000110,0);
                                    }
                                    goto code_r0x08003f38;
                                }
                                uVar6 = sysfs_create_file_ns(*puVar20,0x8000170,0);
                                if (uVar6 < 0) {
                                    bVar4 = false;
                                    goto code_r0x08003ed8;
                                }
                                uVar6 = sysfs_create_file_ns(*puVar20,0x8000190,0);
                                if (uVar6 < 0) {
                                    bVar4 = false;
                                    iVar17 = 2;
                                    goto code_r0x08003ed8;
                                }
                                iVar17 = piVar11[3] + iVar24 * 600;
                                iVar8 = iVar8 + 1;
                                goto code_r0x08003380;
                            }
                            _printk(0x800089b,"register_switch_device",uVar6);
                        }
code_r0x08003f38:
                        _printk(0x8000995,"qti_flash_led_register_device",*(piVar11[3] + iVar24 * 600 + 8),uVar6);
                        uVar16 = uVar16 - 1;
                        goto joined_r0x08003d68;
                    }
code_r0x08003388:
                    iVar12 = of_get_next_available_child(iVar21,iVar12);
                } while (iVar12 != 0);
            }
            uStack_80 = uStack_80 & 0xffffffffffffff00;
            uVar6 = regmap_bulk_read(piVar11[1],piVar11[0xb],&uStack_80,1);
            if (uVar6 < 0) {
                uVar16 = *(piVar11 + 0xb);
code_r0x08003b60:
                uVar13 = 0x8000960;
                pcVar15 = "qti_flash_led_read";
code_r0x08003bd8:
                _printk(uVar13,pcVar15,uVar16,uVar6);
                uVar13 = 0x8000ae4;
            }
            else {
                *(piVar11 + 0x5a) = uStack_80;
                uVar6 = regmap_bulk_read(piVar11[1],*(piVar11 + 0xb) + 5,&uStack_80,1);
                if (uVar6 < 0) {
                    uVar16 = *(piVar11 + 0xb) + 5;
                    goto code_r0x08003b60;
                }
                *(piVar11 + 0x5b) = uStack_80;
                if (*(piVar11 + 0x2c) != 0) {
                    uVar16 = 0;
                    do {
                        uVar10 = *(piVar11[2] + uVar16 * 0x280 + 0x271);
                        iVar8 = uVar10 + 0x3e;
                        uVar6 = regmap_update_bits_base(piVar11[1],*(piVar11 + 0xb) + iVar8,0x80,0,0,0,0);
                        if (uVar6 < 0) {
                            uVar16 = *(piVar11 + 0xb) + iVar8;
code_r0x08003bc8:
                            uVar13 = 0x800084b;
                            pcVar15 = "qti_flash_led_masked_write";
                            goto code_r0x08003bd8;
                        }
                        iVar8 = uVar10 + 0x4a;
                        iVar21 = piVar11[2] + uVar16 * 0x280;
                        uVar3 = *(iVar21 + 0x275) << 2 | *(iVar21 + 0x274) << 4;
                        uStack_80 = CONCAT71(uStack_80._1_7_,uVar3);
                        uVar6 = regmap_update_bits_base(piVar11[1],*(piVar11 + 0xb) + iVar8,0x74,uVar3,0,0,0);
                        if (uVar6 < 0) {
                            uVar16 = *(piVar11 + 0xb) + iVar8;
                            goto code_r0x08003bc8;
                        }
                        uVar16 = uVar16 + 1;
                    } while (uVar16 < *(piVar11 + 0x2c));
                }
                *(piVar11 + 0x54) = 500;
                *(piVar11 + 0x4c) = 0xc8000007d0;
                if ((piVar11[8] < 0) ||
                   (uVar6 = devm_request_threaded_irq
                                      (*piVar11 + 0x10,piVar11[8],0,
                                       sym.qti_flash_led_irq_handler.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt,0x2000,
                                       "flash_all_ramp_up",piVar11), -1 < uVar6)) {
                    if ((*(piVar11 + 0x44) < 0) ||
                       (uVar6 = devm_request_threaded_irq
                                          (*piVar11 + 0x10,*(piVar11 + 0x44),0,
                                           sym.qti_flash_led_irq_handler.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt,0x2000
                                           ,"flash_all_ramp_down",piVar11), -1 < uVar6)) {
                        if ((piVar11[9] < 0) ||
                           (uVar6 = devm_request_threaded_irq
                                              (*piVar11 + 0x10,piVar11[9],0,
                                               sym.qti_flash_led_irq_handler.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt,
                                               0x2000,"flash_fault",piVar11), -1 < uVar6)) {
                            uVar6 = 0;
                            *(param_1 + 0xa8) = piVar11;
                            goto code_r0x08003da8;
                        }
                        uVar7 = piVar11[9];
                        uVar13 = 0x80013ce;
                    }
                    else {
                        uVar7 = *(piVar11 + 0x44);
                        uVar13 = 0x800100d;
                    }
                }
                else {
                    uVar7 = piVar11[8];
                    uVar13 = 0x800068d;
                }
                _printk(uVar13,"qti_flash_led_register_interrupts",uVar7,uVar6);
                uVar13 = 0x8000b1c;
            }
            goto code_r0x08003d98;
        }
        uVar13 = 0x800130b;
    }
    _printk(uVar13,"qti_flash_led_probe");
    uVar6 = 0xffffffea;
    goto code_r0x08003da8;
code_r0x08003b1c:
    uVar13 = 0x800139f;
code_r0x08003b98:
    _printk(uVar13,"qti_flash_led_register_device",uVar6);
code_r0x08003d90:
    uVar13 = 0x80006e8;
code_r0x08003d98:
    _printk(uVar13,"qti_flash_led_probe",uVar6);
code_r0x08003da8:
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) != iStack_68) {
        iVar21 = __stack_chk_fail();
        *extraout_x18 = sym.qti_flash_led_remove;
        iVar21 = *(iVar21 + 0xa8);
        if (*(iVar21 + 0x20) != 0) {
            power_supply_put();
        }
        if (*(iVar21 + 0x30) != 0) {
            uVar6 = 0;
            do {
                sysfs_remove_file_ns(*(*(iVar21 + 0x18) + uVar6 * 600 + 0x58),obj.qti_flash_led_attrs,0);
                sysfs_remove_file_ns(*(*(iVar21 + 0x18) + uVar6 * 600 + 0x58),0x8000170,0);
                sysfs_remove_file_ns(*(*(iVar21 + 0x18) + uVar6 * 600 + 0x58),0x8000190,0);
                uVar6 = uVar6 + 1;
            } while (uVar6 < *(iVar21 + 0x30));
        }
        if (*(iVar21 + 0x2c) != 0) {
            uVar6 = 0;
            do {
                led_classdev_flash_unregister(*(iVar21 + 0x10) + uVar6 * 0x280 + 8);
                uVar6 = uVar6 + 1;
            } while (uVar6 < *(iVar21 + 0x2c));
        }
        return 0;
    }
    return uVar6;
}


// ===== sym.qti_flash_led_remove.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt @ 0x080023c0 (size 8) =====

ulong sym.qti_flash_led_remove.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    uint32_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0xa8);
    if (*(iVar1 + 0x20) != 0) {
        power_supply_put();
    }
    if (*(iVar1 + 0x30) != 0) {
        uVar2 = 0;
        do {
            sysfs_remove_file_ns(*(*(iVar1 + 0x18) + uVar2 * 600 + 0x58),obj.qti_flash_led_attrs,0);
            sysfs_remove_file_ns(*(*(iVar1 + 0x18) + uVar2 * 600 + 0x58),0x8000170,0);
            sysfs_remove_file_ns(*(*(iVar1 + 0x18) + uVar2 * 600 + 0x58),0x8000190,0);
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(iVar1 + 0x30));
    }
    if (*(iVar1 + 0x2c) != 0) {
        uVar2 = 0;
        do {
            led_classdev_flash_unregister(*(iVar1 + 0x10) + uVar2 * 0x280 + 8);
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(iVar1 + 0x2c));
    }
    return 0;
}


// ===== sym.qti_flash_led_brightness_get.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt @ 0x080023c8 (size 8) =====

uint sym.qti_flash_led_brightness_get.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt(int64_t param_1)

{
    return *(param_1 + 8);
}


// ===== sym.qti_flash_led_irq_handler.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt @ 0x080023d0 (size 8) =====

uchar * sym.qti_flash_led_irq_handler.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt(ulong param_1,int64_t param_2)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    uchar *puVar4;
    int iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar6 [16];
    uchar auStack_34 [4];
    uchar auStack_30 [4];
    uchar auStack_2c [4];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    auStack_2c[0] = 0;
    auStack_30[0] = 0;
    auStack_34[0] = 0;
    iVar3 = regmap_bulk_read(*(param_2 + 8),*(param_2 + 0x58) + 0x10,auStack_2c,1);
    if (iVar3 < 0) {
        iVar5 = 0x10;
    }
    else {
        iVar3 = regmap_bulk_read(*(param_2 + 8),*(param_2 + 0x58) + 6,auStack_30,1);
        if (iVar3 < 0) {
            iVar5 = 6;
        }
        else {
            iVar3 = regmap_bulk_read(*(param_2 + 8),*(param_2 + 0x58) + 7,auStack_34,1);
            if (-1 < iVar3) goto code_r0x08005b10;
            iVar5 = 7;
        }
    }
    _printk(0x8000960,"qti_flash_led_read",iVar5 + *(param_2 + 0x58),iVar3);
code_r0x08005b10:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_28) {
        auVar6 = __stack_chk_fail();
        puVar4 = auVar6._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar4 != NULL) {
            switch(*puVar4) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar4,auVar6._8_8_,0);
                break;
            default:
                return puVar4;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x8005bdc);
        (*pcVar2)();
    }
    return 0x1;
}


// ===== sym.qti_flash_strobe_get.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt @ 0x080023d8 (size 8) =====

ulong sym.qti_flash_strobe_get.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt(int64_t param_1,uchar *param_2)

{
    *param_2 = *(param_1 + 0x275);
    return 0;
}


// ===== sym.qti_flash_led_set_param @ 0x080023e0 (size 240) =====

ulong sym.qti_flash_led_set_param(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    ulong uVar3;
    int64_t *piVar4;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0x20;
    _raw_read_lock(iVar1);
    piVar5 = arg1 + 0x28;
    piVar4 = *piVar5;
    if (piVar5 != piVar4) {
        uVar3 = *arg1;
        do {
            iVar2 = strcmp(piVar4[-0x1c],uVar3);
            if (iVar2 == 0) {
                _raw_read_unlock(iVar1);
                if (piVar4 != 0x150) {
                    if (arg2 != 0 || arg3 != 0) {
                        piVar4[0x1d] = arg2;
                        piVar4[0x1e] = arg3;
                        return 0;
                    }
                    _printk(0x8000f3a,"qti_flash_led_set_param");
                    return 0xffffffea;
                }
                goto code_r0x08002494;
            }
            piVar4 = *piVar4;
        } while (piVar5 != piVar4);
    }
    _raw_read_unlock(iVar1);
code_r0x08002494:
    _printk(0x80011c9,"qti_flash_led_set_param",*arg1);
    return 0xffffffea;
}


// ===== sym.qti_flash_led_prepare @ 0x080024d0 (size 308) =====

int sym.qti_flash_led_prepare(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    ulong uVar3;
    int64_t *piVar4;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        uVar3 = 0x800093a;
code_r0x080025d0:
        _printk(uVar3,"qti_flash_led_prepare");
        iVar2 = -0x16;
    }
    else {
        iVar1 = arg1 + 0x20;
        _raw_read_lock(iVar1);
        piVar5 = arg1 + 0x28;
        piVar4 = *piVar5;
        if (piVar5 != piVar4) {
            uVar3 = *arg1;
            do {
                iVar2 = strcmp(piVar4[-0x1c],uVar3);
                if (iVar2 == 0) {
                    _raw_read_unlock(iVar1);
                    if (piVar4 == 0x150) goto code_r0x0800259c;
                    if ((arg2 >> 2 & 1) != 0) {
                        if (arg3 == 0) {
                            uVar3 = 0x80001b5;
                            goto code_r0x080025d0;
                        }
                        iVar2 = sym.qti_flash_led_get_max_avail_current(piVar4[-0x2b],arg3);
                        if (iVar2 < 0) {
                            _printk(0x800051d,"qti_flash_led_prepare",iVar2);
                            return iVar2;
                        }
                    }
                    return 0;
                }
                piVar4 = *piVar4;
            } while (piVar5 != piVar4);
        }
        _raw_read_unlock(iVar1);
code_r0x0800259c:
        _printk(0x80011c9,"qti_flash_led_prepare",*arg1);
        iVar2 = -0x13;
    }
    return iVar2;
}


// ===== sym.qti_flash_led_get_max_avail_current @ 0x08002604 (size 1208) =====

uint64_t sym.qti_flash_led_get_max_avail_current(int64_t arg1,int64_t arg2)

{
    uint32_t *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uchar auVar4 [16];
    code *pcVar5;
    uint32_t uVar6;
    int64_t iVar7;
    ulong uVar8;
    char *pcVar9;
    uint uVar10;
    uint8_t uVar11;
    uint64_t uVar12;
    int64_t iVar13;
    int64_t iVar14;
    uint64_t uVar15;
    int iVar16;
    int64_t iVar17;
    int iVar18;
    uint32_t uVar19;
    ulong *in_x18;
    uint64_t uVar20;
    ulong unaff_x30;
    uint64_t uStack_48;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    if (*(arg1 + 0x61) != '\0') {
        uVar10 = 2000;
code_r0x080029a8:
        uVar20 = 0;
        *(arg1 + 0x4c) = uVar10;
        goto code_r0x080029b0;
    }
    uStack_3c = 0;
    uStack_48 = 0;
    uVar6 = qti_battery_charger_get_prop("battery",0,&uStack_3c);
    uVar20 = uVar6;
    if (uVar6 < 0) {
        uVar8 = 0x800031e;
        goto code_r0x08002a6c;
    }
    if (uStack_3c == 0) {
        *arg2 = 2000;
        *(arg1 + 0x62) = 1;
code_r0x080028dc:
        uVar10 = 0;
        uStack_48 = uStack_48 & 0xffffffffffffff00;
        if ((*(arg1 + 0x5b) == '\a') && (uVar10 = 0x10, *(arg1 + 0x5a) != '\x01')) {
            uVar10 = 0x13;
        }
        uVar6 = regmap_update_bits_base(*(arg1 + 8),*(arg1 + 0x58) + 0x7a,7,uVar10,0,0,0);
        if (uVar6 < 0) {
            iVar16 = *(arg1 + 0x58) + 0x7a;
code_r0x08002a0c:
            uVar8 = 0x800084b;
            pcVar9 = "qti_flash_led_masked_write";
        }
        else {
            uVar6 = regmap_update_bits_base(*(arg1 + 8),*(arg1 + 0x58) + 0x78,7,0x30,0,0,0);
            if (uVar6 < 0) {
                iVar16 = *(arg1 + 0x58) + 0x78;
                goto code_r0x08002a0c;
            }
            uVar6 = regmap_bulk_read(*(arg1 + 8),*(arg1 + 0x58) + 7,&uStack_48,1);
            if (-1 < uVar6) {
                if ((uStack_48 >> 5 & 1) == 0) {
                    if ((uStack_48 >> 4 & 1) != 0) {
                        iVar16 = *(arg1 + 0x54);
                        goto joined_r0x08002990;
                    }
                }
                else {
                    iVar16 = *(arg1 + 0x50);
joined_r0x08002990:
                    if (iVar16 != 0) {
                        iVar18 = *arg2;
                        if (iVar16 <= *arg2) {
                            iVar18 = iVar16;
                        }
                        *arg2 = iVar18;
                    }
                }
                uVar10 = *arg2;
                goto code_r0x080029a8;
            }
            uVar8 = 0x8000960;
            pcVar9 = "qti_flash_led_read";
            iVar16 = *(arg1 + 0x58) + 7;
        }
        uVar20 = uVar6;
        _printk(uVar8,pcVar9,iVar16,uVar20);
        uVar8 = 0x800106d;
    }
    else {
        iVar7 = *(arg1 + 0x20);
        if (iVar7 == 0) {
            iVar7 = power_supply_get_by_name("battery");
            *(arg1 + 0x20) = iVar7;
            if (iVar7 != 0) goto code_r0x0800268c;
            _printk(0x8000b89,"qti_flash_led_calc_max_avail_current",uVar20);
            uVar20 = 0xffffffea;
        }
        else {
code_r0x0800268c:
            uVar6 = power_supply_get_property(iVar7,0xe,&uStack_48);
            if (uVar6 < 0) {
                uVar20 = uVar6;
                uVar8 = 0x8000f78;
            }
            else {
                iVar7 = uStack_48;
                uVar6 = power_supply_get_property(*(arg1 + 0x20),0x11,&uStack_48);
                if (-1 < uVar6) {
                    if (*(arg1 + 0x5b) == '\a') {
                        _segment.ehdr = obj.pm8350c_map;
                        iVar16 = *(arg1 + 0x2c);
                        if (iVar16 == 0) goto code_r0x080027a8;
code_r0x080026fc:
                        iVar18 = 0;
                        uVar6 = 0;
                        do {
                            if (*(*(arg1 + 0x10) + iVar18 * 0x280 + 0x27c) != '\0') {
                                if (*(arg1 + 0x5b) == '\a') {
                                    uVar3 = *(*(arg1 + 0x10) + iVar18 * 0x280 + 0x268);
                                    if (*_segment.ehdr < uVar3) {
                                        uVar19 = 400;
                                    }
                                    else {
                                        uVar19 = *(_segment.ehdr + 2);
                                    }
                                    if (uVar3 <= *(_segment.ehdr + 4)) {
                                        uVar19 = *(_segment.ehdr + 6);
                                    }
                                    if (uVar3 <= *(_segment.ehdr + 8)) {
                                        uVar19 = *(_segment.ehdr + 10);
                                    }
                                    if (uVar3 <= *(_segment.ehdr + 0xc)) {
                                        uVar19 = *(_segment.ehdr + 0xe);
                                    }
                                }
                                else {
                                    uVar19 = 400;
                                }
                                if (uVar6 <= uVar19) {
                                    uVar6 = uVar19;
                                }
                            }
                            iVar18 = iVar18 + 1;
                        } while (iVar16 != iVar18);
                        if (uVar6 == 0) goto code_r0x080027a8;
                    }
                    else {
                        iVar16 = *(arg1 + 0x2c);
                        if (iVar16 != 0) goto code_r0x080026fc;
code_r0x080027a8:
                        uVar6 = 400;
                    }
                    iVar13 = uStack_3c;
                    iVar17 = iVar7 * 1000000;
                    uVar19 = uStack_3c;
                    if (uStack_3c < 0) {
                        uVar19 = uStack_3c + 1;
                    }
                    iVar14 = (uVar19 << 0x20) >> 0x21;
                    iVar2 = -iVar14;
                    if (iVar17 < 0x297913cd401 != 0 < iVar13) {
                        iVar2 = iVar14;
                    }
                    iVar14 = 0;
                    if (iVar13 != 0) {
                        iVar14 = (iVar17 + iVar2 + -2850000000000) / iVar13;
                    }
                    if (iVar14 < 4500000) {
                        iVar7 = 0x98e2cb40;
                        iVar14 = iVar14 - -uStack_48;
                    }
                    else {
                        iVar17 = -500000;
                        if (0 < uStack_3c) {
                            iVar17 = 500000;
                        }
                        iVar13 = SUB168(SEXT816(iVar17 + iVar13 * 4500000) * SEXT816(-0x431bde82d7b634db),8);
                        iVar7 = (((iVar13 >> 0x12) - (iVar13 >> 0x3f)) + iVar7) * 900;
                        iVar14 = uStack_48 + 4500000;
                    }
                    uVar15 = uVar6 * 1000000 + 3500000000;
                    uVar20 = -(uVar15 >> 1);
                    if (0 < iVar14 * iVar7) {
                        uVar20 = uVar15 >> 1;
                    }
                    iVar13 = 0;
                    if (uVar15 != 0) {
                        iVar13 = (uVar20 + iVar14 * iVar7) / uVar15;
                    }
                    iVar7 = -500;
                    if (0 < iVar13) {
                        iVar7 = 500;
                    }
                    auVar4 = SEXT816(iVar7 + iVar13) * SEXT816(0x20c49ba5e353f7cf);
                    iVar16 = (auVar4._8_8_ >> 7) - (auVar4._12_4_ >> 0x1f);
                    if (1999 < iVar16) {
                        iVar16 = 2000;
                    }
                    *arg2 = iVar16;
                    goto code_r0x080028dc;
                }
                uVar20 = uVar6;
                uVar8 = 0x800023d;
            }
code_r0x08002a6c:
            _printk(uVar8,"qti_flash_led_calc_max_avail_current",uVar20);
        }
        uVar8 = 0x800080c;
    }
    _printk(uVar8,"qti_flash_led_get_max_avail_current",uVar20);
code_r0x080029b0:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return uVar20;
    }
    uVar20 = __stack_chk_fail();
    uVar11 = *(uVar20 + 0x250);
    uVar6 = uVar11;
    if (uVar6 != 0) {
        uVar19 = 0;
        do {
            if (9 < uVar19) goto code_r0x08002b68;
            uVar15 = uVar19;
            iVar7 = uVar20 + uVar15 * 4;
            uVar3 = *(iVar7 + 0x200);
            puVar1 = iVar7 + 0x200;
            if (uVar3 == 0) {
                if (9 < uVar6 - 1) {
code_r0x08002b68:
    //WARNING: Does not return
                    pcVar5 = SoftwareBreakpoint(0x5512,0x8002b6c);
                    (*pcVar5)();
                }
                *puVar1 = *(uVar20 + (uVar6 - 1) * 4 + 0x200);
                uVar12 = *(uVar20 + 0x250) - 1;
                if (9 < uVar12) goto code_r0x08002b68;
                uVar19 = uVar19 - 1;
                *(uVar20 + 0x228 + uVar15 * 4) = *(uVar20 + 0x228 + uVar12 * 4);
                uVar11 = *(uVar20 + 0x250) - 1;
                *(uVar20 + 0x250) = uVar11;
            }
            else if (*(uVar20 + 0x26c) < uVar3) {
                *puVar1 = *(uVar20 + 0x26c);
                uVar11 = *(uVar20 + 0x250);
            }
            uVar19 = uVar19 + 1;
            uVar6 = uVar11;
        } while (uVar19 < uVar6);
    }
    return uVar20;
}


// ===== sym.filte_available_current_value @ 0x08002abc (size 176) =====

void sym.filte_available_current_value(int64_t arg1)

{
    uint32_t *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    code *pcVar4;
    uint32_t uVar5;
    uint8_t uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    
    uVar6 = *(arg1 + 0x250);
    uVar7 = uVar6;
    if (uVar7 != 0) {
        uVar5 = 0;
        do {
            if (9 < uVar5) goto code_r0x08002b68;
            uVar9 = uVar5;
            iVar2 = arg1 + uVar9 * 4;
            uVar3 = *(iVar2 + 0x200);
            puVar1 = iVar2 + 0x200;
            if (uVar3 == 0) {
                if (9 < uVar7 - 1) {
code_r0x08002b68:
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x5512,0x8002b6c);
                    (*pcVar4)();
                }
                *puVar1 = *(arg1 + (uVar7 - 1) * 4 + 0x200);
                uVar8 = *(arg1 + 0x250) - 1;
                if (9 < uVar8) goto code_r0x08002b68;
                uVar5 = uVar5 - 1;
                *(arg1 + 0x228 + uVar9 * 4) = *(arg1 + 0x228 + uVar8 * 4);
                uVar6 = *(arg1 + 0x250) - 1;
                *(arg1 + 0x250) = uVar6;
            }
            else if (*(arg1 + 0x26c) < uVar3) {
                *puVar1 = *(arg1 + 0x26c);
                uVar6 = *(arg1 + 0x250);
            }
            uVar5 = uVar5 + 1;
            uVar7 = uVar6;
        } while (uVar5 < uVar7);
    }
    return;
}


// ===== sym.sort_with_time @ 0x08002b6c (size 168) =====

void sym.sort_with_time(int64_t arg1)

{
    uint *puVar1;
    uint uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    code *pcVar5;
    uint32_t uVar6;
    uint32_t *puVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    uint32_t *puVar10;
    uint64_t uVar11;
    
    if (1 < *(arg1 + 0x50)) {
        uVar6 = 0;
        puVar7 = arg1 + 0x2c;
        uVar8 = 1;
        do {
            if (uVar8 == 10) {
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(0x5512,0x8002c14);
                (*pcVar5)();
            }
            puVar1 = arg1 + uVar8 * 4;
            uVar2 = *puVar1;
            uVar3 = puVar1[10];
            puVar10 = puVar7;
            uVar9 = uVar6;
            do {
                uVar4 = *(arg1 + uVar9 * 4 + 0x28);
                if (uVar4 <= uVar3) {
                    uVar9 = uVar9 + 1;
                    goto code_r0x08002b90;
                }
                uVar11 = uVar9;
                *puVar10 = uVar4;
                uVar9 = uVar9 - 1;
                puVar10[-10] = *(arg1 + uVar11 * 4);
                puVar10 = puVar10 + -1;
            } while (uVar9 != 0xffffffff);
            uVar9 = 0;
code_r0x08002b90:
            puVar1 = arg1 + uVar9 * 4;
            uVar8 = uVar8 + 1;
            uVar6 = uVar6 + 1;
            puVar7 = puVar7 + 1;
            puVar1[10] = uVar3;
            *puVar1 = uVar2;
        } while (uVar8 < *(arg1 + 0x50));
    }
    return;
}


// ===== sym.get_custom_max_current @ 0x08002c14 (size 792) =====

uint64_t sym.get_custom_max_current(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    bool bVar4;
    code *pcVar5;
    char cVar6;
    uint32_t uVar7;
    uint uVar8;
    int iVar9;
    int iVar10;
    uint64_t uVar11;
    int64_t iVar12;
    int64_t *piVar13;
    int64_t iVar14;
    ulong uVar15;
    int64_t iVar16;
    char *pcVar17;
    uint32_t uVar18;
    uint64_t uVar19;
    ulong uVar20;
    int64_t iVar21;
    int64_t iVar22;
    uint32_t *puVar23;
    uint64_t uVar24;
    uint32_t *puVar25;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar26;
    ulong *puVar27;
    int64_t iVar28;
    ulong *puVar29;
    uint8_t *puVar30;
    uint32_t uVar31;
    int64_t iVar32;
    ulong unaff_x30;
    uint uStack_dc;
    ulong uStack_d8;
    uint32_t uStack_cc;
    ulong uStack_c8;
    uint64_t uStack_c0;
    ulong uStack_b8;
    uint uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar28 = sp_el0;
    iStack_38 = *(iVar28 + 0x5e0);
    uStack_3c = 0;
    if (*(arg1 + 0x278) == 1) {
        *(arg1 + 600) = 0x500;
        uVar11 = of_property_read_variable_u32_array(arg2,"xiaomi,max-duration-ms",&uStack_3c,1,0);
        if (((-1 < uVar11) && (9 < uStack_3c)) && (uStack_3c < 0x501)) {
            *(arg1 + 600) = uStack_3c;
        }
    }
    else {
        uVar7 = of_property_count_elems_of_size(arg2,"xiaomi,currents-with-time",4);
        if (uVar7 < 1) {
            uVar11 = _printk(0x800140c,"get_custom_max_current");
            *(arg1 + 0x250) = 0;
        }
        else {
            if (uVar7 < 0xb) {
                *(arg1 + 0x250) = uVar7;
            }
            else {
                uVar7 = 10;
                _printk(0x8000358,"get_custom_max_current",10);
                *(arg1 + 0x250) = 10;
            }
            puVar30 = arg1 + 0x250;
            uVar7 = of_property_read_variable_u32_array(arg2,"xiaomi,currents-with-time",arg1 + 0x200,uVar7,0);
            if (uVar7 < 0) {
                uVar11 = uVar7;
                uVar3 = *puVar30;
                uVar15 = 0x8000cc5;
                uVar20 = 0x6b3;
            }
            else {
                uVar11 = of_property_read_variable_u32_array
                                   (arg2,"xiaomi,time-for-currents",arg1 + 0x228,*(arg1 + 0x250),0);
                if (-1 < uVar11) {
                    uVar19 = *(arg1 + 0x250);
                    uVar7 = *(arg1 + 0x250);
                    if (uVar7 != 0) {
                        uVar18 = 0;
                        do {
                            if (9 < uVar18) goto code_r0x08002da4;
                            uVar24 = uVar18;
                            iVar28 = arg1 + uVar24 * 4;
                            uVar31 = *(iVar28 + 0x200);
                            puVar23 = iVar28 + 0x200;
                            if (uVar31 == 0) {
                                if (9 < uVar7 - 1) goto code_r0x08002da4;
                                *puVar23 = *(arg1 + (uVar7 - 1) * 4 + 0x200);
                                uVar19 = *(arg1 + 0x250) - 1;
                                if (9 < uVar19) goto code_r0x08002da4;
                                uVar18 = uVar18 - 1;
                                *(arg1 + 0x228 + uVar24 * 4) = *(arg1 + 0x228 + uVar19 * 4);
                                uVar7 = *(arg1 + 0x250) - 1;
                                uVar19 = uVar7;
                                *(arg1 + 0x250) = uVar7;
                            }
                            else if (*(arg1 + 0x26c) < uVar31) {
                                *puVar23 = *(arg1 + 0x26c);
                                uVar19 = *puVar30;
                            }
                            uVar18 = uVar18 + 1;
                            uVar7 = uVar19 & 0xff;
                        } while (uVar18 < uVar7);
                        if (1 < uVar7) {
                            uVar7 = 0;
                            puVar23 = arg1 + 0x22c;
                            uVar24 = 1;
                            do {
                                if (uVar24 == 10) goto code_r0x08002da4;
                                iVar28 = arg1 + uVar24 * 4;
                                uVar8 = *(iVar28 + 0x200);
                                uVar31 = *(iVar28 + 0x228);
                                puVar25 = puVar23;
                                uVar18 = uVar7;
                                do {
                                    uVar2 = *(arg1 + uVar18 * 4 + 0x228);
                                    if (uVar2 <= uVar31) {
                                        uVar18 = uVar18 + 1;
                                        goto code_r0x08002dc4;
                                    }
                                    uVar19 = uVar18;
                                    *puVar25 = uVar2;
                                    uVar18 = uVar18 - 1;
                                    puVar25[-10] = *(arg1 + uVar19 * 4 + 0x200);
                                    puVar25 = puVar25 + -1;
                                } while (uVar18 != 0xffffffff);
                                uVar18 = 0;
code_r0x08002dc4:
                                iVar28 = arg1 + uVar18 * 4;
                                uVar24 = uVar24 + 1;
                                uVar7 = uVar7 + 1;
                                puVar23 = puVar23 + 1;
                                *(iVar28 + 0x228) = uVar31;
                                *(iVar28 + 0x200) = uVar8;
                                uVar19 = *(arg1 + 0x250);
                            } while (uVar24 < uVar19);
                        }
                        if ((uVar19 & 0xff) != 0) {
                            uVar7 = (uVar19 & 0xff) - 1;
                            if (9 < uVar7) {
code_r0x08002da4:
    //WARNING: Does not return
                                pcVar5 = SoftwareBreakpoint(0x5512,0x8002da8);
                                (*pcVar5)();
                            }
                            *(arg1 + 0x254) = *(arg1 + uVar7 * 4 + 0x200);
                        }
                    }
                    goto code_r0x08002ef8;
                }
                uVar3 = *puVar30;
                uVar11 = uVar11 & 0xffffffff;
                uVar15 = 0x8001449;
                uVar20 = 0x6be;
            }
            uVar11 = _printk(uVar15,"get_custom_max_current","get_custom_max_current",uVar20,uVar11,uVar3);
            *puVar30 = 0;
        }
    }
code_r0x08002ef8:
    iVar28 = sp_el0;
    if (*(iVar28 + 0x5e0) == iStack_38) {
        return uVar11;
    }
    iVar12 = __stack_chk_fail();
    *extraout_x18 = sym.qti_flash_led_probe;
    pcStack_98 = sym.qti_flash_led_probe;
    iVar28 = sp_el0;
    iStack_a8 = *(iVar28 + 0x5e0);
    iVar28 = *(iVar12 + 0x300);
    puStack_a0 = &stack0xffffffffffffffd0;
    piVar13 = devm_kmalloc(iVar12 + 0x10,0x68,0xdc0);
    if (piVar13 == NULL) {
        uVar11 = 0xfffffff4;
        goto code_r0x08003da8;
    }
    iVar14 = dev_get_regmap(*(iVar12 + 0x70),0);
    piVar13[1] = iVar14;
    if (iVar14 == 0) {
        uVar15 = 0x80010f3;
    }
    else {
        cVar6 = of_device_get_match_data(iVar12 + 0x10);
        *(piVar13 + 0x5c) = cVar6;
        if (cVar6 != '\0') {
            *piVar13 = iVar12;
            *(piVar13 + 5) = 0;
            uStack_b0 = 0;
            uStack_c0 = 0;
            uStack_b8 = 0;
            uStack_d8 = 0;
            uStack_dc = 0;
            uVar7 = of_property_read_variable_u32_array(iVar28,0x80011b1,&uStack_dc,1,0);
            if (uVar7 < 0) {
                uVar11 = uVar7;
                _printk(0x8000587,"qti_flash_led_register_device",*(iVar28 + 0x10),uVar11);
                goto code_r0x08003d90;
            }
            *(piVar13 + 0xb) = uStack_dc;
            iVar14 = devm_kmalloc(*piVar13 + 0x10,*(piVar13 + 0x5c) << 2,0xdc0);
            piVar13[7] = iVar14;
            if (iVar14 == 0) {
code_r0x08003ac8:
                uVar11 = 0xfffffff4;
                goto code_r0x08003d90;
            }
            if (*(piVar13 + 0x5c) != '\0') {
                uVar11 = 0;
                while( true ) {
                    *(iVar14 + uVar11 * 4) = 0xffffffea;
                    uVar7 = of_get_named_gpio_flags(iVar28,"hw-strobe-gpios",uVar11 & 0xffffffff,0);
                    if (-1 < uVar7) {
                        if (0x1ff < uVar7) {
                            _printk(0x8001123,"qti_flash_led_register_device");
                            goto code_r0x08003d1c;
                        }
                        *(piVar13[7] + uVar11 * 4) = uVar7;
                        scnprintf(&uStack_c0,0x14,"hw_strobe_gpio%d",uVar11 & 0xffffffff);
                        uVar7 = devm_gpio_request_one(*piVar13 + 0x10,*(piVar13[7] + uVar11 * 4),0,&uStack_c0);
                        if (uVar7 < 0) {
                            uVar15 = 0x80003e8;
                            goto code_r0x08003b98;
                        }
                        uVar15 = gpio_to_desc(*(piVar13[7] + uVar11 * 4));
                        gpiod_direction_output_raw(uVar15,0);
                    }
                    uVar11 = uVar11 + 1;
                    if (*(piVar13 + 0x5c) <= uVar11) break;
                    iVar14 = piVar13[7];
                }
            }
            iVar14 = of_find_property(iVar28,"qcom,secure-vm",0);
            *(piVar13 + 0x61) = iVar14 != 0;
            uVar8 = of_irq_get_byname(iVar28,"all-ramp-up-done-irq");
            *(piVar13 + 8) = uVar8;
            uVar8 = of_irq_get_byname(iVar28,"all-ramp-down-done-irq");
            *(piVar13 + 0x44) = uVar8;
            uVar8 = of_irq_get_byname(iVar28,"led-fault-irq");
            *(piVar13 + 9) = uVar8;
            iVar14 = of_get_next_available_child(iVar28,0);
            if (iVar14 == 0) {
                uVar11 = *(piVar13 + 0x2c);
                if (*(piVar13 + 0x2c) == 0) goto code_r0x08003b2c;
            }
            else {
                bVar4 = false;
                do {
                    uVar7 = of_property_read_string(iVar14,"label",&uStack_d8);
                    uVar15 = uStack_d8;
                    if (uVar7 < 0) goto code_r0x08003b1c;
                    iVar9 = strcmp("flash",uStack_d8);
                    if ((iVar9 != 0) && (iVar9 = strcmp("torch",uVar15), iVar9 != 0)) {
                        iVar9 = strcmp("indicator",uVar15);
                        if (iVar9 == 0) {
                            iVar9 = *(piVar13 + 0x2c);
                            goto code_r0x08003170;
                        }
                        iVar9 = strcmp("switch",uVar15);
                        if (iVar9 == 0) {
                            *(piVar13 + 6) = piVar13[6] + 1;
                            goto code_r0x08003178;
                        }
                        _printk(0x8000755,"qti_flash_led_register_device",uVar15);
code_r0x08003d1c:
                        uVar11 = 0xffffffea;
                        goto code_r0x08003d90;
                    }
                    iVar9 = *(piVar13 + 0x2c);
                    bVar4 = true;
code_r0x08003170:
                    *(piVar13 + 0x2c) = iVar9 + 1;
code_r0x08003178:
                    iVar14 = of_get_next_available_child(iVar28,iVar14);
                } while (iVar14 != 0);
                uVar11 = *(piVar13 + 0x2c);
                if (*(piVar13 + 0x2c) == 0) {
code_r0x08003b2c:
                    _printk(0x8000419,"qti_flash_led_register_device");
                    uVar11 = 0xfffffff6;
                    goto code_r0x08003d90;
                }
                if ((bVar4) && (piVar13[6] == 0)) {
                    _printk(0x8000fab,"qti_flash_led_register_device");
                    uVar11 = 0xffffffed;
                    goto code_r0x08003d90;
                }
            }
            iVar14 = devm_kmalloc(*piVar13 + 0x10,uVar11 * 0x280,0xdc0);
            piVar13[2] = iVar14;
            if (iVar14 == 0) goto code_r0x08003ac8;
            if (*(piVar13 + 6) != 0) {
                iVar14 = devm_kmalloc(*piVar13 + 0x10,*(piVar13 + 6) * 600,0xdc0);
                piVar13[3] = iVar14;
                if (iVar14 == 0) goto code_r0x08003ac8;
            }
            iVar14 = of_get_next_available_child(iVar28,0);
            if (iVar14 != 0) {
                uVar18 = 0;
                iVar9 = 0;
                do {
                    iVar21 = 1;
                    uVar7 = of_property_read_string(iVar14,"label",&uStack_d8);
                    uVar15 = uStack_d8;
                    if (uVar7 < 0) goto code_r0x08003b1c;
                    iVar10 = strcmp("flash",uStack_d8);
                    if (((iVar10 == 0) || (iVar10 = strcmp("torch",uVar15), iVar10 == 0)) ||
                       (iVar10 = strcmp("indicator",uVar15), iVar10 == 0)) {
                        iVar21 = piVar13[2];
                        iVar26 = uVar18;
                        uStack_c8 = 0;
                        puVar27 = iVar21 + uVar18 * 0x280;
                        uStack_cc = 0;
                        uVar7 = of_property_read_string(iVar14,"qcom,led-name");
                        if (uVar7 < 0) {
                            uVar11 = uVar7;
                            uVar15 = 0x80001f9;
code_r0x08003c6c:
                            _printk(uVar15,"register_flash_device");
                        }
                        else {
                            uVar7 = of_property_read_string(iVar14,"label",&uStack_c8);
                            uVar15 = uStack_c8;
                            if (uVar7 < 0) {
                                uVar11 = uVar7;
                                uVar15 = 0x80005d1;
                                goto code_r0x08003c6c;
                            }
                            iVar10 = strcmp(uStack_c8,"flash");
                            if (iVar10 != 0) {
                                iVar10 = strcmp(uVar15,"torch");
                                if (iVar10 == 0) {
                                    uVar8 = 2;
                                    goto code_r0x08003658;
                                }
                                iVar10 = strcmp(uVar15,"indicator");
                                if (iVar10 == 0) {
                                    uVar8 = 3;
                                    goto code_r0x08003658;
                                }
                                _printk(0x8000e91,"register_flash_device",uVar15);
code_r0x0800336c:
                                uVar18 = uVar18 + 1;
                                iVar21 = piVar13[2] + iVar26 * 0x280;
code_r0x08003380:
                                *(*(iVar21 + 0x58) + 0x2f0) = iVar14;
                                goto code_r0x08003388;
                            }
                            uVar8 = 1;
code_r0x08003658:
                            iVar32 = iVar21 + iVar26 * 0x280;
                            *(iVar32 + 0x278) = uVar8;
                            uVar7 = of_property_read_variable_u32_array(iVar14,"qcom,id",&uStack_cc,1,0);
                            if (uVar7 < 0) {
                                uVar11 = uVar7;
                                uVar15 = 0x80010b0;
                                goto code_r0x08003c6c;
                            }
                            iVar16 = iVar21 + iVar26 * 0x280;
                            piVar1 = iVar32 + 0x278;
                            *(iVar16 + 0x271) = uStack_cc;
                            uVar7 = of_property_read_string(iVar14,"qcom,default-led-trigger",iVar16 + 0x78);
                            if ((uVar7 < 0) && (*piVar1 != 3)) {
                                uVar15 = 0x8000dbd;
code_r0x08003e24:
                                uVar11 = uVar7;
                                _printk(uVar15,"register_flash_device");
                            }
                            else {
                                uVar7 = of_property_read_variable_u32_array(iVar14,"qcom,ires-ua",&uStack_cc,1,0);
                                if (uVar7 < 0) {
                                    uVar15 = 0x8000c0f;
code_r0x08003ca8:
                                    uVar19 = uVar7;
                                    uVar11 = uVar19;
                                }
                                else {
                                    uVar19 = uStack_cc;
                                    uVar7 = 0xffffffea;
                                    if (uStack_cc == 0x30d4) {
                                        uVar7 = 1;
                                    }
                                    uVar31 = 0;
                                    if (uStack_cc != 5000) {
                                        uVar31 = uVar7;
                                    }
                                    uVar11 = uVar31;
                                    if (-1 < uVar31) {
                                        iVar32 = iVar21 + iVar26 * 0x280;
                                        *(iVar32 + 0x25c) = uStack_cc;
                                        *(iVar32 + 0x260) = uStack_cc;
                                        *(iVar32 + 0x273) = uVar31;
                                        *(iVar32 + 0x272) = uVar31;
                                        uVar7 = of_property_read_variable_u32_array
                                                          (iVar14,"qcom,max-current-ma",&uStack_cc,1,0);
                                        if (-1 < uVar7) {
                                            iVar10 = *piVar1;
                                            if ((iVar10 == 1) && (0x5dc < uStack_cc)) {
                                                uVar15 = 0x80009d1;
                                            }
                                            else if ((iVar10 == 2) && (500 < uStack_cc)) {
                                                uVar15 = 0x8001159;
                                            }
                                            else {
                                                if ((iVar10 != 3) || (uStack_cc < 0x65)) {
                                                    iVar16 = iVar21 + iVar26 * 0x280;
                                                    *(iVar16 + 0x26c) = uStack_cc;
                                                    *(iVar16 + 0x14) = uStack_cc;
                                                    sym.get_custom_max_current(puVar27,iVar14);
                                                    iVar10 = of_property_read_variable_u32_array
                                                                       (iVar14,"qcom,duration-ms",&uStack_cc,1,0);
                                                    cVar6 = '\x13';
                                                    if ((-1 < iVar10) && (9 < uStack_cc)) {
                                                        uVar7 = 200;
                                                        if (uStack_cc <= *(iVar21 + iVar26 * 0x280 + 600)) {
                                                            uVar7 = uStack_cc;
                                                        }
                                                        if (uVar7 - 0x501 < 0xfffffb00) {
                                                            uVar15 = 0x800044a;
                                                            goto code_r0x08003d2c;
                                                        }
                                                        cVar6 = (uVar7 + 5 & 0xffff) / 10 + -1;
                                                    }
                                                    iVar22 = iVar21 + iVar26 * 0x280;
                                                    pcVar17 = iVar22 + 0x275;
                                                    *(iVar22 + 0x270) = cVar6;
                                                    *(iVar22 + 0x275) = 0;
                                                    iVar10 = of_property_read_variable_u32_array
                                                                       (iVar14,"qcom,strobe-sel",&uStack_cc,1,0);
                                                    if (-1 < iVar10) {
                                                        *pcVar17 = uStack_cc;
                                                    }
                                                    iVar10 = *piVar1;
                                                    if (iVar10 == 3) {
                                                        *pcVar17 = '\0';
                                                        iVar22 = iVar21 + iVar26 * 0x280;
                                                        *puVar27 = piVar13;
                                                        *(iVar22 + 0x28) =
                                                             
                                                            sym.qti_flash_led_brightness_set.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt
                                                        ;
                                                        *(iVar22 + 0x27c) = 0;
                                                        *(iVar22 + 0x38) =
                                                             
                                                            sym.qti_flash_led_brightness_get.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt
                                                        ;
                                                    }
                                                    else {
                                                        if (*pcVar17 == '\x01') {
                                                            uVar7 = of_property_read_variable_u32_array
                                                                              (iVar14,"qcom,strobe-config",&uStack_cc
                                                                               ,1,0);
                                                            if (uVar7 < 0) {
                                                                uVar15 = 0x80008cb;
                                                                goto code_r0x08003e24;
                                                            }
                                                            iVar10 = *piVar1;
                                                            *puVar27 = piVar13;
                                                            iVar22 = iVar21 + iVar26 * 0x280;
                                                            *(iVar22 + 0x274) = uStack_cc;
                                                            *(iVar22 + 0x27c) = 0;
                                                            *(iVar22 + 0x28) =
                                                                 
                                                            sym.qti_flash_led_brightness_set.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt
                                                            ;
                                                            *(iVar22 + 0x38) =
                                                                 
                                                            sym.qti_flash_led_brightness_get.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt
                                                            ;
                                                            if (iVar10 == 3) goto code_r0x080032e0;
                                                        }
                                                        else {
                                                            *puVar27 = piVar13;
                                                            iVar22 = iVar21 + iVar26 * 0x280;
                                                            *(iVar22 + 0x28) =
                                                                 
                                                            sym.qti_flash_led_brightness_set.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt
                                                            ;
                                                            *(iVar22 + 0x27c) = 0;
                                                            *(iVar22 + 0x38) =
                                                                 
                                                            sym.qti_flash_led_brightness_get.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt
                                                            ;
                                                        }
                                                        *(iVar21 + iVar26 * 0x280 + 0x1b0) =
                                                             
                                                            reloc.qti_flash_brightness_set.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt
                                                        ;
                                                        if (iVar10 == 1) {
                                                            iVar22 = iVar21 + iVar26 * 0x280;
                                                            *(iVar22 + 0x18) = 0x40000;
                                                            *(iVar22 + 0x30) =
                                                                 
                                                            sym.qti_flash_brightness_set_blocking.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt
                                                            ;
                                                        }
                                                    }
code_r0x080032e0:
                                                    iVar21 = iVar21 + iVar26 * 0x280;
                                                    uVar8 = *(iVar16 + 0x26c);
                                                    iVar10 = *(iVar32 + 0x25c);
                                                    *(iVar21 + 0x1b8) = 0;
                                                    *(iVar21 + 0x1bc) = uVar8;
                                                    *(iVar21 + 0x1c0) = 1;
                                                    *(iVar21 + 0x1c8) = 0;
                                                    *(iVar21 + 0x1cc) = *(iVar21 + 600) * 1000;
                                                    *(iVar21 + 0x1c4) = (iVar10 + 500U) / 1000;
                                                    *(iVar21 + 0x1d0) = 0x30d4000002710;
                                                    uVar7 = led_classdev_flash_register_ext
                                                                      (*piVar13 + 0x10,puVar27 + 1,0);
                                                    if (-1 < uVar7) goto code_r0x0800336c;
                                                    uVar11 = uVar7;
                                                    _printk(0x800027e,"register_flash_device",puVar27[1]);
                                                    goto code_r0x08003d40;
                                                }
                                                uVar15 = 0x8000602;
                                            }
code_r0x08003d2c:
                                            _printk(uVar15,"register_flash_device");
                                            uVar11 = 0xffffffea;
                                            goto code_r0x08003d40;
                                        }
                                        uVar15 = 0x8000d25;
                                        goto code_r0x08003ca8;
                                    }
                                    uVar15 = 0x8000ebf;
                                }
                                _printk(uVar15,"register_flash_device",uVar19);
                            }
                        }
code_r0x08003d40:
                        _printk(0x80003ad,"qti_flash_led_register_device",*(piVar13[2] + iVar26 * 0x280 + 8),uVar11);
joined_r0x08003d68:
                        if (-1 < uVar18) {
                            iVar28 = uVar18 * 0x280 + 0x280;
                            do {
                                led_classdev_flash_unregister(piVar13[2] + iVar28 + -0x278);
                                iVar28 = iVar28 + -0x280;
                            } while (iVar28 != 0);
                        }
                        goto code_r0x08003d90;
                    }
                    iVar10 = strcmp("switch",uVar15);
                    if (iVar10 == 0) {
                        iVar26 = piVar13[3];
                        iVar32 = iVar9;
                        puVar27 = iVar26 + iVar9 * 600 + 8;
                        uVar7 = of_property_read_string(iVar14,"qcom,led-name");
                        if (uVar7 < 0) {
                            uVar15 = 0x8001267;
code_r0x08003e54:
                            uVar11 = uVar7;
                            _printk(uVar15,"register_switch_device",uVar11);
                        }
                        else {
                            uVar7 = of_property_read_string
                                              (iVar14,"qcom,default-led-trigger",iVar26 + iVar32 * 600 + 0x78);
                            if (uVar7 < 0) {
                                uVar15 = 0x80012a0;
                                goto code_r0x08003e54;
                            }
                            puVar23 = iVar26 + iVar32 * 600 + 0x250;
                            uVar7 = of_property_read_variable_u32_array(iVar14,"qcom,led-mask",puVar23,1,0);
                            if (-1 < uVar7) {
                                uVar7 = *puVar23;
                                if ((uVar7 == 0) ||
                                   (uVar11 = 0xffffffffffffffff >> (-*(piVar13 + 0x5c) & 0x3f), uVar11 < uVar7)) {
                                    _printk(0x80004f6,"register_switch_device");
                                    uVar11 = 0xffffffea;
                                    goto code_r0x08003f38;
                                }
                                if (uVar7 < uVar11) {
                                    *(piVar13 + 0xc) = 1;
                                }
                                iVar16 = of_find_property(iVar14,"qcom,symmetry-en",0);
                                puVar29 = iVar26 + iVar32 * 600;
                                puVar29[0x48] = 0;
                                *(puVar29 + 0x255) = iVar16 != 0;
                                puVar29[0x49] = 0;
                                hrtimer_init(puVar29 + 0x36,1,1);
                                hrtimer_init(puVar29 + 0x3f,1,1);
                                *puVar29 = piVar13;
                                puVar29[0x3b] = sym.on_timer_function.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt;
                                puVar29[0x44] = sym.off_timer_function.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt;
                                puVar29[5] = 
                                sym.qti_flash_led_switch_brightness_set.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt;
                                puVar29[7] = sym.qti_flash_led_brightness_get.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt;
                                uVar7 = devm_led_classdev_register_ext(*piVar13 + 0x10,puVar27,0);
                                if (uVar7 < 0) {
                                    uVar11 = uVar7;
                                    _printk(0x8000a51,"register_switch_device",*puVar27);
                                    goto code_r0x08003f38;
                                }
                                puVar27 = iVar26 + iVar32 * 600 + 0x58;
                                uVar7 = sysfs_create_file_ns(*puVar27,obj.qti_flash_led_attrs,0);
                                if (uVar7 < 0) {
                                    uVar11 = uVar7;
                                    iVar21 = 0;
                                    bVar4 = true;
code_r0x08003ed8:
                                    _printk(0x80012d5,"register_switch_device",uVar11);
                                    sysfs_remove_file_ns(*puVar27,obj.qti_flash_led_attrs + iVar21 * 0x20,0);
                                    if ((!bVar4) &&
                                       (sysfs_remove_file_ns
                                                  (*puVar27,obj.qti_flash_led_attrs + (iVar21 + -1) * 0x20,0),
                                       iVar21 + -1 != 0)) {
                                        sysfs_remove_file_ns(*puVar27,iVar21 * 0x20 + 0x8000110,0);
                                    }
                                    goto code_r0x08003f38;
                                }
                                uVar7 = sysfs_create_file_ns(*puVar27,0x8000170,0);
                                if (uVar7 < 0) {
                                    uVar11 = uVar7;
                                    bVar4 = false;
                                    goto code_r0x08003ed8;
                                }
                                uVar7 = sysfs_create_file_ns(*puVar27,0x8000190,0);
                                if (uVar7 < 0) {
                                    uVar11 = uVar7;
                                    bVar4 = false;
                                    iVar21 = 2;
                                    goto code_r0x08003ed8;
                                }
                                iVar21 = piVar13[3] + iVar32 * 600;
                                iVar9 = iVar9 + 1;
                                goto code_r0x08003380;
                            }
                            uVar11 = uVar7;
                            _printk(0x800089b,"register_switch_device",uVar11);
                        }
code_r0x08003f38:
                        _printk(0x8000995,"qti_flash_led_register_device",*(piVar13[3] + iVar32 * 600 + 8),uVar11);
                        uVar18 = uVar18 - 1;
                        goto joined_r0x08003d68;
                    }
code_r0x08003388:
                    iVar14 = of_get_next_available_child(iVar28,iVar14);
                } while (iVar14 != 0);
            }
            uStack_c0 = uStack_c0 & 0xffffffffffffff00;
            uVar7 = regmap_bulk_read(piVar13[1],piVar13[0xb],&uStack_c0,1);
            if (uVar7 < 0) {
                uVar18 = *(piVar13 + 0xb);
code_r0x08003b60:
                uVar15 = 0x8000960;
                pcVar17 = "qti_flash_led_read";
code_r0x08003bd8:
                uVar11 = uVar7;
                _printk(uVar15,pcVar17,uVar18,uVar11);
                uVar15 = 0x8000ae4;
            }
            else {
                *(piVar13 + 0x5a) = uStack_c0;
                uVar7 = regmap_bulk_read(piVar13[1],*(piVar13 + 0xb) + 5,&uStack_c0,1);
                if (uVar7 < 0) {
                    uVar18 = *(piVar13 + 0xb) + 5;
                    goto code_r0x08003b60;
                }
                *(piVar13 + 0x5b) = uStack_c0;
                if (*(piVar13 + 0x2c) != 0) {
                    uVar18 = 0;
                    do {
                        uVar31 = *(piVar13[2] + uVar18 * 0x280 + 0x271);
                        iVar9 = uVar31 + 0x3e;
                        uVar7 = regmap_update_bits_base(piVar13[1],*(piVar13 + 0xb) + iVar9,0x80,0,0,0,0);
                        if (uVar7 < 0) {
                            uVar18 = *(piVar13 + 0xb) + iVar9;
code_r0x08003bc8:
                            uVar15 = 0x800084b;
                            pcVar17 = "qti_flash_led_masked_write";
                            goto code_r0x08003bd8;
                        }
                        iVar9 = uVar31 + 0x4a;
                        iVar28 = piVar13[2] + uVar18 * 0x280;
                        uVar3 = *(iVar28 + 0x275) << 2 | *(iVar28 + 0x274) << 4;
                        uStack_c0 = CONCAT71(uStack_c0._1_7_,uVar3);
                        uVar7 = regmap_update_bits_base(piVar13[1],*(piVar13 + 0xb) + iVar9,0x74,uVar3,0,0,0);
                        if (uVar7 < 0) {
                            uVar18 = *(piVar13 + 0xb) + iVar9;
                            goto code_r0x08003bc8;
                        }
                        uVar18 = uVar18 + 1;
                    } while (uVar18 < *(piVar13 + 0x2c));
                }
                *(piVar13 + 0x54) = 500;
                *(piVar13 + 0x4c) = 0xc8000007d0;
                if ((piVar13[8] < 0) ||
                   (uVar7 = devm_request_threaded_irq
                                      (*piVar13 + 0x10,piVar13[8],0,
                                       sym.qti_flash_led_irq_handler.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt,0x2000,
                                       "flash_all_ramp_up",piVar13), -1 < uVar7)) {
                    if ((*(piVar13 + 0x44) < 0) ||
                       (uVar7 = devm_request_threaded_irq
                                          (*piVar13 + 0x10,*(piVar13 + 0x44),0,
                                           sym.qti_flash_led_irq_handler.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt,0x2000
                                           ,"flash_all_ramp_down",piVar13), -1 < uVar7)) {
                        if ((piVar13[9] < 0) ||
                           (uVar7 = devm_request_threaded_irq
                                              (*piVar13 + 0x10,piVar13[9],0,
                                               sym.qti_flash_led_irq_handler.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt,
                                               0x2000,"flash_fault",piVar13), -1 < uVar7)) {
                            uVar11 = 0;
                            *(iVar12 + 0xa8) = piVar13;
                            goto code_r0x08003da8;
                        }
                        uVar11 = uVar7;
                        uVar8 = piVar13[9];
                        uVar15 = 0x80013ce;
                    }
                    else {
                        uVar8 = *(piVar13 + 0x44);
                        uVar11 = uVar7;
                        uVar15 = 0x800100d;
                    }
                }
                else {
                    uVar8 = piVar13[8];
                    uVar11 = uVar7;
                    uVar15 = 0x800068d;
                }
                _printk(uVar15,"qti_flash_led_register_interrupts",uVar8,uVar11);
                uVar15 = 0x8000b1c;
            }
            goto code_r0x08003d98;
        }
        uVar15 = 0x800130b;
    }
    _printk(uVar15,"qti_flash_led_probe");
    uVar11 = 0xffffffea;
    goto code_r0x08003da8;
code_r0x08003b1c:
    uVar15 = 0x800139f;
code_r0x08003b98:
    uVar11 = uVar7;
    _printk(uVar15,"qti_flash_led_register_device",uVar11);
code_r0x08003d90:
    uVar15 = 0x80006e8;
code_r0x08003d98:
    _printk(uVar15,"qti_flash_led_probe",uVar11);
code_r0x08003da8:
    iVar28 = sp_el0;
    if (*(iVar28 + 0x5e0) == iStack_a8) {
        return uVar11;
    }
    iVar28 = __stack_chk_fail();
    *extraout_x18_00 = sym.qti_flash_led_remove;
    iVar28 = *(iVar28 + 0xa8);
    if (*(iVar28 + 0x20) != 0) {
        power_supply_put();
    }
    if (*(iVar28 + 0x30) != 0) {
        uVar7 = 0;
        do {
            sysfs_remove_file_ns(*(*(iVar28 + 0x18) + uVar7 * 600 + 0x58),obj.qti_flash_led_attrs,0);
            sysfs_remove_file_ns(*(*(iVar28 + 0x18) + uVar7 * 600 + 0x58),0x8000170,0);
            sysfs_remove_file_ns(*(*(iVar28 + 0x18) + uVar7 * 600 + 0x58),0x8000190,0);
            uVar7 = uVar7 + 1;
        } while (uVar7 < *(iVar28 + 0x30));
    }
    if (*(iVar28 + 0x2c) != 0) {
        uVar7 = 0;
        do {
            led_classdev_flash_unregister(*(iVar28 + 0x10) + uVar7 * 0x280 + 8);
            uVar7 = uVar7 + 1;
        } while (uVar7 < *(iVar28 + 0x2c));
    }
    return 0;
}


// ===== sym.qti_flash_led_probe @ 0x08002f2c (size 4164) =====

uint32_t sym.qti_flash_led_probe(int64_t arg1)

{
    uint32_t *puVar1;
    int *piVar2;
    uint8_t uVar3;
    bool bVar4;
    char cVar5;
    uint32_t uVar6;
    uint uVar7;
    int iVar8;
    int iVar9;
    uint32_t uVar10;
    int64_t *piVar11;
    int64_t iVar12;
    ulong uVar13;
    int64_t iVar14;
    char *pcVar15;
    uint32_t uVar16;
    int64_t iVar17;
    int64_t iVar18;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar19;
    ulong *puVar20;
    int64_t iVar21;
    ulong *puVar22;
    uint64_t uVar23;
    int64_t iVar24;
    ulong unaff_x30;
    uint uStack_9c;
    ulong uStack_98;
    uint32_t uStack_8c;
    ulong uStack_88;
    uint64_t uStack_80;
    ulong uStack_78;
    uint uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar21 = sp_el0;
    iStack_68 = *(iVar21 + 0x5e0);
    iVar21 = *(arg1 + 0x300);
    piVar11 = devm_kmalloc(arg1 + 0x10,0x68,0xdc0);
    if (piVar11 == NULL) {
        uVar6 = 0xfffffff4;
        goto code_r0x08003da8;
    }
    iVar12 = dev_get_regmap(*(arg1 + 0x70),0);
    piVar11[1] = iVar12;
    if (iVar12 == 0) {
        uVar13 = 0x80010f3;
    }
    else {
        cVar5 = of_device_get_match_data(arg1 + 0x10);
        *(piVar11 + 0x5c) = cVar5;
        if (cVar5 != '\0') {
            *piVar11 = arg1;
            *(piVar11 + 5) = 0;
            uStack_70 = 0;
            uStack_80 = 0;
            uStack_78 = 0;
            uStack_98 = 0;
            uStack_9c = 0;
            uVar6 = of_property_read_variable_u32_array(iVar21,0x80011b1,&uStack_9c,1,0);
            if (uVar6 < 0) {
                _printk(0x8000587,"qti_flash_led_register_device",*(iVar21 + 0x10),uVar6);
                goto code_r0x08003d90;
            }
            *(piVar11 + 0xb) = uStack_9c;
            iVar12 = devm_kmalloc(*piVar11 + 0x10,*(piVar11 + 0x5c) << 2,0xdc0);
            piVar11[7] = iVar12;
            if (iVar12 == 0) {
code_r0x08003ac8:
                uVar6 = 0xfffffff4;
                goto code_r0x08003d90;
            }
            if (*(piVar11 + 0x5c) != '\0') {
                uVar23 = 0;
                while( true ) {
                    *(iVar12 + uVar23 * 4) = 0xffffffea;
                    uVar6 = of_get_named_gpio_flags(iVar21,"hw-strobe-gpios",uVar23 & 0xffffffff,0);
                    if (-1 < uVar6) {
                        if (0x1ff < uVar6) {
                            _printk(0x8001123,"qti_flash_led_register_device");
                            goto code_r0x08003d1c;
                        }
                        *(piVar11[7] + uVar23 * 4) = uVar6;
                        scnprintf(&uStack_80,0x14,"hw_strobe_gpio%d",uVar23 & 0xffffffff);
                        uVar6 = devm_gpio_request_one(*piVar11 + 0x10,*(piVar11[7] + uVar23 * 4),0,&uStack_80);
                        if (uVar6 < 0) {
                            uVar13 = 0x80003e8;
                            goto code_r0x08003b98;
                        }
                        uVar13 = gpio_to_desc(*(piVar11[7] + uVar23 * 4));
                        gpiod_direction_output_raw(uVar13,0);
                    }
                    uVar23 = uVar23 + 1;
                    if (*(piVar11 + 0x5c) <= uVar23) break;
                    iVar12 = piVar11[7];
                }
            }
            iVar12 = of_find_property(iVar21,"qcom,secure-vm",0);
            *(piVar11 + 0x61) = iVar12 != 0;
            uVar7 = of_irq_get_byname(iVar21,"all-ramp-up-done-irq");
            *(piVar11 + 8) = uVar7;
            uVar7 = of_irq_get_byname(iVar21,"all-ramp-down-done-irq");
            *(piVar11 + 0x44) = uVar7;
            uVar7 = of_irq_get_byname(iVar21,"led-fault-irq");
            *(piVar11 + 9) = uVar7;
            iVar12 = of_get_next_available_child(iVar21,0);
            if (iVar12 == 0) {
                uVar23 = *(piVar11 + 0x2c);
                if (*(piVar11 + 0x2c) == 0) goto code_r0x08003b2c;
            }
            else {
                bVar4 = false;
                do {
                    uVar6 = of_property_read_string(iVar12,"label",&uStack_98);
                    uVar13 = uStack_98;
                    if (uVar6 < 0) goto code_r0x08003b1c;
                    iVar8 = strcmp("flash",uStack_98);
                    if ((iVar8 != 0) && (iVar8 = strcmp("torch",uVar13), iVar8 != 0)) {
                        iVar8 = strcmp("indicator",uVar13);
                        if (iVar8 == 0) {
                            iVar8 = *(piVar11 + 0x2c);
                            goto code_r0x08003170;
                        }
                        iVar8 = strcmp("switch",uVar13);
                        if (iVar8 == 0) {
                            *(piVar11 + 6) = piVar11[6] + 1;
                            goto code_r0x08003178;
                        }
                        _printk(0x8000755,"qti_flash_led_register_device",uVar13);
code_r0x08003d1c:
                        uVar6 = 0xffffffea;
                        goto code_r0x08003d90;
                    }
                    iVar8 = *(piVar11 + 0x2c);
                    bVar4 = true;
code_r0x08003170:
                    *(piVar11 + 0x2c) = iVar8 + 1;
code_r0x08003178:
                    iVar12 = of_get_next_available_child(iVar21,iVar12);
                } while (iVar12 != 0);
                uVar23 = *(piVar11 + 0x2c);
                if (*(piVar11 + 0x2c) == 0) {
code_r0x08003b2c:
                    _printk(0x8000419,"qti_flash_led_register_device");
                    uVar6 = 0xfffffff6;
                    goto code_r0x08003d90;
                }
                if ((bVar4) && (piVar11[6] == 0)) {
                    _printk(0x8000fab,"qti_flash_led_register_device");
                    uVar6 = 0xffffffed;
                    goto code_r0x08003d90;
                }
            }
            iVar12 = devm_kmalloc(*piVar11 + 0x10,uVar23 * 0x280,0xdc0);
            piVar11[2] = iVar12;
            if (iVar12 == 0) goto code_r0x08003ac8;
            if (*(piVar11 + 6) != 0) {
                iVar12 = devm_kmalloc(*piVar11 + 0x10,*(piVar11 + 6) * 600,0xdc0);
                piVar11[3] = iVar12;
                if (iVar12 == 0) goto code_r0x08003ac8;
            }
            iVar12 = of_get_next_available_child(iVar21,0);
            if (iVar12 != 0) {
                uVar16 = 0;
                iVar8 = 0;
                do {
                    iVar17 = 1;
                    uVar6 = of_property_read_string(iVar12,"label",&uStack_98);
                    uVar13 = uStack_98;
                    if (uVar6 < 0) goto code_r0x08003b1c;
                    iVar9 = strcmp("flash",uStack_98);
                    if (((iVar9 == 0) || (iVar9 = strcmp("torch",uVar13), iVar9 == 0)) ||
                       (iVar9 = strcmp("indicator",uVar13), iVar9 == 0)) {
                        iVar17 = piVar11[2];
                        iVar19 = uVar16;
                        uStack_88 = 0;
                        puVar20 = iVar17 + uVar16 * 0x280;
                        uStack_8c = 0;
                        uVar6 = of_property_read_string(iVar12,"qcom,led-name");
                        if (uVar6 < 0) {
                            uVar13 = 0x80001f9;
code_r0x08003c6c:
                            _printk(uVar13,"register_flash_device");
                        }
                        else {
                            uVar6 = of_property_read_string(iVar12,"label",&uStack_88);
                            uVar13 = uStack_88;
                            if (uVar6 < 0) {
                                uVar13 = 0x80005d1;
                                goto code_r0x08003c6c;
                            }
                            iVar9 = strcmp(uStack_88,"flash");
                            if (iVar9 != 0) {
                                iVar9 = strcmp(uVar13,"torch");
                                if (iVar9 == 0) {
                                    uVar7 = 2;
                                    goto code_r0x08003658;
                                }
                                iVar9 = strcmp(uVar13,"indicator");
                                if (iVar9 == 0) {
                                    uVar7 = 3;
                                    goto code_r0x08003658;
                                }
                                _printk(0x8000e91,"register_flash_device",uVar13);
code_r0x0800336c:
                                uVar16 = uVar16 + 1;
                                iVar17 = piVar11[2] + iVar19 * 0x280;
code_r0x08003380:
                                *(*(iVar17 + 0x58) + 0x2f0) = iVar12;
                                goto code_r0x08003388;
                            }
                            uVar7 = 1;
code_r0x08003658:
                            iVar24 = iVar17 + iVar19 * 0x280;
                            *(iVar24 + 0x278) = uVar7;
                            uVar6 = of_property_read_variable_u32_array(iVar12,"qcom,id",&uStack_8c,1,0);
                            if (uVar6 < 0) {
                                uVar13 = 0x80010b0;
                                goto code_r0x08003c6c;
                            }
                            iVar14 = iVar17 + iVar19 * 0x280;
                            piVar2 = iVar24 + 0x278;
                            *(iVar14 + 0x271) = uStack_8c;
                            uVar6 = of_property_read_string(iVar12,"qcom,default-led-trigger",iVar14 + 0x78);
                            if ((uVar6 < 0) && (*piVar2 != 3)) {
                                uVar13 = 0x8000dbd;
code_r0x08003e24:
                                _printk(uVar13,"register_flash_device");
                            }
                            else {
                                uVar10 = of_property_read_variable_u32_array(iVar12,"qcom,ires-ua",&uStack_8c,1,0);
                                if (uVar10 < 0) {
                                    uVar13 = 0x8000c0f;
                                    uVar6 = uVar10;
                                }
                                else {
                                    uVar10 = 0xffffffea;
                                    if (uStack_8c == 0x30d4) {
                                        uVar10 = 1;
                                    }
                                    uVar6 = 0;
                                    if (uStack_8c != 5000) {
                                        uVar6 = uVar10;
                                    }
                                    if (uVar6 < 0) {
                                        uVar13 = 0x8000ebf;
                                        uVar10 = uStack_8c;
                                    }
                                    else {
                                        iVar24 = iVar17 + iVar19 * 0x280;
                                        *(iVar24 + 0x25c) = uStack_8c;
                                        *(iVar24 + 0x260) = uStack_8c;
                                        *(iVar24 + 0x273) = uVar6;
                                        *(iVar24 + 0x272) = uVar6;
                                        uVar10 = of_property_read_variable_u32_array
                                                           (iVar12,"qcom,max-current-ma",&uStack_8c,1,0);
                                        if (-1 < uVar10) {
                                            iVar9 = *piVar2;
                                            if ((iVar9 == 1) && (0x5dc < uStack_8c)) {
                                                uVar13 = 0x80009d1;
                                            }
                                            else if ((iVar9 == 2) && (500 < uStack_8c)) {
                                                uVar13 = 0x8001159;
                                            }
                                            else {
                                                if ((iVar9 != 3) || (uStack_8c < 0x65)) {
                                                    iVar14 = iVar17 + iVar19 * 0x280;
                                                    *(iVar14 + 0x26c) = uStack_8c;
                                                    *(iVar14 + 0x14) = uStack_8c;
                                                    sym.get_custom_max_current(puVar20,iVar12);
                                                    iVar9 = of_property_read_variable_u32_array
                                                                      (iVar12,"qcom,duration-ms",&uStack_8c,1,0);
                                                    cVar5 = '\x13';
                                                    if ((-1 < iVar9) && (9 < uStack_8c)) {
                                                        uVar6 = 200;
                                                        if (uStack_8c <= *(iVar17 + iVar19 * 0x280 + 600)) {
                                                            uVar6 = uStack_8c;
                                                        }
                                                        if (uVar6 - 0x501 < 0xfffffb00) {
                                                            uVar13 = 0x800044a;
                                                            goto code_r0x08003d2c;
                                                        }
                                                        cVar5 = (uVar6 + 5 & 0xffff) / 10 + -1;
                                                    }
                                                    iVar18 = iVar17 + iVar19 * 0x280;
                                                    pcVar15 = iVar18 + 0x275;
                                                    *(iVar18 + 0x270) = cVar5;
                                                    *(iVar18 + 0x275) = 0;
                                                    iVar9 = of_property_read_variable_u32_array
                                                                      (iVar12,"qcom,strobe-sel",&uStack_8c,1,0);
                                                    if (-1 < iVar9) {
                                                        *pcVar15 = uStack_8c;
                                                    }
                                                    iVar9 = *piVar2;
                                                    if (iVar9 == 3) {
                                                        *pcVar15 = '\0';
                                                        iVar18 = iVar17 + iVar19 * 0x280;
                                                        *puVar20 = piVar11;
                                                        *(iVar18 + 0x28) =
                                                             
                                                            sym.qti_flash_led_brightness_set.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt
                                                        ;
                                                        *(iVar18 + 0x27c) = 0;
                                                        *(iVar18 + 0x38) =
                                                             
                                                            sym.qti_flash_led_brightness_get.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt
                                                        ;
                                                    }
                                                    else {
                                                        if (*pcVar15 == '\x01') {
                                                            uVar6 = of_property_read_variable_u32_array
                                                                              (iVar12,"qcom,strobe-config",&uStack_8c
                                                                               ,1,0);
                                                            if (uVar6 < 0) {
                                                                uVar13 = 0x80008cb;
                                                                goto code_r0x08003e24;
                                                            }
                                                            iVar9 = *piVar2;
                                                            *puVar20 = piVar11;
                                                            iVar18 = iVar17 + iVar19 * 0x280;
                                                            *(iVar18 + 0x274) = uStack_8c;
                                                            *(iVar18 + 0x27c) = 0;
                                                            *(iVar18 + 0x28) =
                                                                 
                                                            sym.qti_flash_led_brightness_set.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt
                                                            ;
                                                            *(iVar18 + 0x38) =
                                                                 
                                                            sym.qti_flash_led_brightness_get.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt
                                                            ;
                                                            if (iVar9 == 3) goto code_r0x080032e0;
                                                        }
                                                        else {
                                                            *puVar20 = piVar11;
                                                            iVar18 = iVar17 + iVar19 * 0x280;
                                                            *(iVar18 + 0x28) =
                                                                 
                                                            sym.qti_flash_led_brightness_set.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt
                                                            ;
                                                            *(iVar18 + 0x27c) = 0;
                                                            *(iVar18 + 0x38) =
                                                                 
                                                            sym.qti_flash_led_brightness_get.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt
                                                            ;
                                                        }
                                                        *(iVar17 + iVar19 * 0x280 + 0x1b0) =
                                                             
                                                            reloc.qti_flash_brightness_set.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt
                                                        ;
                                                        if (iVar9 == 1) {
                                                            iVar18 = iVar17 + iVar19 * 0x280;
                                                            *(iVar18 + 0x18) = 0x40000;
                                                            *(iVar18 + 0x30) =
                                                                 
                                                            sym.qti_flash_brightness_set_blocking.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt
                                                            ;
                                                        }
                                                    }
code_r0x080032e0:
                                                    iVar17 = iVar17 + iVar19 * 0x280;
                                                    uVar7 = *(iVar14 + 0x26c);
                                                    iVar9 = *(iVar24 + 0x25c);
                                                    *(iVar17 + 0x1b8) = 0;
                                                    *(iVar17 + 0x1bc) = uVar7;
                                                    *(iVar17 + 0x1c0) = 1;
                                                    *(iVar17 + 0x1c8) = 0;
                                                    *(iVar17 + 0x1cc) = *(iVar17 + 600) * 1000;
                                                    *(iVar17 + 0x1c4) = (iVar9 + 500U) / 1000;
                                                    *(iVar17 + 0x1d0) = 0x30d4000002710;
                                                    uVar6 = led_classdev_flash_register_ext
                                                                      (*piVar11 + 0x10,puVar20 + 1,0);
                                                    if (-1 < uVar6) goto code_r0x0800336c;
                                                    _printk(0x800027e,"register_flash_device",puVar20[1]);
                                                    goto code_r0x08003d40;
                                                }
                                                uVar13 = 0x8000602;
                                            }
code_r0x08003d2c:
                                            _printk(uVar13,"register_flash_device");
                                            uVar6 = 0xffffffea;
                                            goto code_r0x08003d40;
                                        }
                                        uVar13 = 0x8000d25;
                                        uVar6 = uVar10;
                                    }
                                }
                                _printk(uVar13,"register_flash_device",uVar10);
                            }
                        }
code_r0x08003d40:
                        _printk(0x80003ad,"qti_flash_led_register_device",*(piVar11[2] + iVar19 * 0x280 + 8),uVar6);
joined_r0x08003d68:
                        if (-1 < uVar16) {
                            iVar21 = uVar16 * 0x280 + 0x280;
                            do {
                                led_classdev_flash_unregister(piVar11[2] + iVar21 + -0x278);
                                iVar21 = iVar21 + -0x280;
                            } while (iVar21 != 0);
                        }
                        goto code_r0x08003d90;
                    }
                    iVar9 = strcmp("switch",uVar13);
                    if (iVar9 == 0) {
                        iVar19 = piVar11[3];
                        iVar24 = iVar8;
                        puVar20 = iVar19 + iVar8 * 600 + 8;
                        uVar6 = of_property_read_string(iVar12,"qcom,led-name");
                        if (uVar6 < 0) {
                            uVar13 = 0x8001267;
code_r0x08003e54:
                            _printk(uVar13,"register_switch_device",uVar6);
                        }
                        else {
                            uVar6 = of_property_read_string
                                              (iVar12,"qcom,default-led-trigger",iVar19 + iVar24 * 600 + 0x78);
                            if (uVar6 < 0) {
                                uVar13 = 0x80012a0;
                                goto code_r0x08003e54;
                            }
                            puVar1 = iVar19 + iVar24 * 600 + 0x250;
                            uVar6 = of_property_read_variable_u32_array(iVar12,"qcom,led-mask",puVar1,1,0);
                            if (-1 < uVar6) {
                                uVar6 = *puVar1;
                                if ((uVar6 == 0) ||
                                   (uVar23 = 0xffffffffffffffff >> (-*(piVar11 + 0x5c) & 0x3f), uVar23 < uVar6)) {
                                    _printk(0x80004f6,"register_switch_device");
                                    uVar6 = 0xffffffea;
                                    goto code_r0x08003f38;
                                }
                                if (uVar6 < uVar23) {
                                    *(piVar11 + 0xc) = 1;
                                }
                                iVar14 = of_find_property(iVar12,"qcom,symmetry-en",0);
                                puVar22 = iVar19 + iVar24 * 600;
                                puVar22[0x48] = 0;
                                *(puVar22 + 0x255) = iVar14 != 0;
                                puVar22[0x49] = 0;
                                hrtimer_init(puVar22 + 0x36,1,1);
                                hrtimer_init(puVar22 + 0x3f,1,1);
                                *puVar22 = piVar11;
                                puVar22[0x3b] = sym.on_timer_function.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt;
                                puVar22[0x44] = sym.off_timer_function.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt;
                                puVar22[5] = 
                                sym.qti_flash_led_switch_brightness_set.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt;
                                puVar22[7] = sym.qti_flash_led_brightness_get.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt;
                                uVar6 = devm_led_classdev_register_ext(*piVar11 + 0x10,puVar20,0);
                                if (uVar6 < 0) {
                                    _printk(0x8000a51,"register_switch_device",*puVar20);
                                    goto code_r0x08003f38;
                                }
                                puVar20 = iVar19 + iVar24 * 600 + 0x58;
                                uVar6 = sysfs_create_file_ns(*puVar20,obj.qti_flash_led_attrs,0);
                                if (uVar6 < 0) {
                                    iVar17 = 0;
                                    bVar4 = true;
code_r0x08003ed8:
                                    _printk(0x80012d5,"register_switch_device",uVar6);
                                    sysfs_remove_file_ns(*puVar20,obj.qti_flash_led_attrs + iVar17 * 0x20,0);
                                    if ((!bVar4) &&
                                       (sysfs_remove_file_ns
                                                  (*puVar20,obj.qti_flash_led_attrs + (iVar17 + -1) * 0x20,0),
                                       iVar17 + -1 != 0)) {
                                        sysfs_remove_file_ns(*puVar20,iVar17 * 0x20 + 0x8000110,0);
                                    }
                                    goto code_r0x08003f38;
                                }
                                uVar6 = sysfs_create_file_ns(*puVar20,0x8000170,0);
                                if (uVar6 < 0) {
                                    bVar4 = false;
                                    goto code_r0x08003ed8;
                                }
                                uVar6 = sysfs_create_file_ns(*puVar20,0x8000190,0);
                                if (uVar6 < 0) {
                                    bVar4 = false;
                                    iVar17 = 2;
                                    goto code_r0x08003ed8;
                                }
                                iVar17 = piVar11[3] + iVar24 * 600;
                                iVar8 = iVar8 + 1;
                                goto code_r0x08003380;
                            }
                            _printk(0x800089b,"register_switch_device",uVar6);
                        }
code_r0x08003f38:
                        _printk(0x8000995,"qti_flash_led_register_device",*(piVar11[3] + iVar24 * 600 + 8),uVar6);
                        uVar16 = uVar16 - 1;
                        goto joined_r0x08003d68;
                    }
code_r0x08003388:
                    iVar12 = of_get_next_available_child(iVar21,iVar12);
                } while (iVar12 != 0);
            }
            uStack_80 = uStack_80 & 0xffffffffffffff00;
            uVar6 = regmap_bulk_read(piVar11[1],piVar11[0xb],&uStack_80,1);
            if (uVar6 < 0) {
                uVar16 = *(piVar11 + 0xb);
code_r0x08003b60:
                uVar13 = 0x8000960;
                pcVar15 = "qti_flash_led_read";
code_r0x08003bd8:
                _printk(uVar13,pcVar15,uVar16,uVar6);
                uVar13 = 0x8000ae4;
            }
            else {
                *(piVar11 + 0x5a) = uStack_80;
                uVar6 = regmap_bulk_read(piVar11[1],*(piVar11 + 0xb) + 5,&uStack_80,1);
                if (uVar6 < 0) {
                    uVar16 = *(piVar11 + 0xb) + 5;
                    goto code_r0x08003b60;
                }
                *(piVar11 + 0x5b) = uStack_80;
                if (*(piVar11 + 0x2c) != 0) {
                    uVar16 = 0;
                    do {
                        uVar10 = *(piVar11[2] + uVar16 * 0x280 + 0x271);
                        iVar8 = uVar10 + 0x3e;
                        uVar6 = regmap_update_bits_base(piVar11[1],*(piVar11 + 0xb) + iVar8,0x80,0,0,0,0);
                        if (uVar6 < 0) {
                            uVar16 = *(piVar11 + 0xb) + iVar8;
code_r0x08003bc8:
                            uVar13 = 0x800084b;
                            pcVar15 = "qti_flash_led_masked_write";
                            goto code_r0x08003bd8;
                        }
                        iVar8 = uVar10 + 0x4a;
                        iVar21 = piVar11[2] + uVar16 * 0x280;
                        uVar3 = *(iVar21 + 0x275) << 2 | *(iVar21 + 0x274) << 4;
                        uStack_80 = CONCAT71(uStack_80._1_7_,uVar3);
                        uVar6 = regmap_update_bits_base(piVar11[1],*(piVar11 + 0xb) + iVar8,0x74,uVar3,0,0,0);
                        if (uVar6 < 0) {
                            uVar16 = *(piVar11 + 0xb) + iVar8;
                            goto code_r0x08003bc8;
                        }
                        uVar16 = uVar16 + 1;
                    } while (uVar16 < *(piVar11 + 0x2c));
                }
                *(piVar11 + 0x54) = 500;
                *(piVar11 + 0x4c) = 0xc8000007d0;
                if ((piVar11[8] < 0) ||
                   (uVar6 = devm_request_threaded_irq
                                      (*piVar11 + 0x10,piVar11[8],0,
                                       sym.qti_flash_led_irq_handler.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt,0x2000,
                                       "flash_all_ramp_up",piVar11), -1 < uVar6)) {
                    if ((*(piVar11 + 0x44) < 0) ||
                       (uVar6 = devm_request_threaded_irq
                                          (*piVar11 + 0x10,*(piVar11 + 0x44),0,
                                           sym.qti_flash_led_irq_handler.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt,0x2000
                                           ,"flash_all_ramp_down",piVar11), -1 < uVar6)) {
                        if ((piVar11[9] < 0) ||
                           (uVar6 = devm_request_threaded_irq
                                              (*piVar11 + 0x10,piVar11[9],0,
                                               sym.qti_flash_led_irq_handler.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt,
                                               0x2000,"flash_fault",piVar11), -1 < uVar6)) {
                            uVar6 = 0;
                            *(arg1 + 0xa8) = piVar11;
                            goto code_r0x08003da8;
                        }
                        uVar7 = piVar11[9];
                        uVar13 = 0x80013ce;
                    }
                    else {
                        uVar7 = *(piVar11 + 0x44);
                        uVar13 = 0x800100d;
                    }
                }
                else {
                    uVar7 = piVar11[8];
                    uVar13 = 0x800068d;
                }
                _printk(uVar13,"qti_flash_led_register_interrupts",uVar7,uVar6);
                uVar13 = 0x8000b1c;
            }
            goto code_r0x08003d98;
        }
        uVar13 = 0x800130b;
    }
    _printk(uVar13,"qti_flash_led_probe");
    uVar6 = 0xffffffea;
    goto code_r0x08003da8;
code_r0x08003b1c:
    uVar13 = 0x800139f;
code_r0x08003b98:
    _printk(uVar13,"qti_flash_led_register_device",uVar6);
code_r0x08003d90:
    uVar13 = 0x80006e8;
code_r0x08003d98:
    _printk(uVar13,"qti_flash_led_probe",uVar6);
code_r0x08003da8:
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) != iStack_68) {
        iVar21 = __stack_chk_fail();
        *extraout_x18 = sym.qti_flash_led_remove;
        iVar21 = *(iVar21 + 0xa8);
        if (*(iVar21 + 0x20) != 0) {
            power_supply_put();
        }
        if (*(iVar21 + 0x30) != 0) {
            uVar6 = 0;
            do {
                sysfs_remove_file_ns(*(*(iVar21 + 0x18) + uVar6 * 600 + 0x58),obj.qti_flash_led_attrs,0);
                sysfs_remove_file_ns(*(*(iVar21 + 0x18) + uVar6 * 600 + 0x58),0x8000170,0);
                sysfs_remove_file_ns(*(*(iVar21 + 0x18) + uVar6 * 600 + 0x58),0x8000190,0);
                uVar6 = uVar6 + 1;
            } while (uVar6 < *(iVar21 + 0x30));
        }
        if (*(iVar21 + 0x2c) != 0) {
            uVar6 = 0;
            do {
                led_classdev_flash_unregister(*(iVar21 + 0x10) + uVar6 * 0x280 + 8);
                uVar6 = uVar6 + 1;
            } while (uVar6 < *(iVar21 + 0x2c));
        }
        return 0;
    }
    return uVar6;
}


// ===== sym.qti_flash_led_remove @ 0x08003f70 (size 228) =====

ulong sym.qti_flash_led_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    uint32_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0xa8);
    if (*(iVar1 + 0x20) != 0) {
        power_supply_put();
    }
    if (*(iVar1 + 0x30) != 0) {
        uVar2 = 0;
        do {
            sysfs_remove_file_ns(*(*(iVar1 + 0x18) + uVar2 * 600 + 0x58),obj.qti_flash_led_attrs,0);
            sysfs_remove_file_ns(*(*(iVar1 + 0x18) + uVar2 * 600 + 0x58),0x8000170,0);
            sysfs_remove_file_ns(*(*(iVar1 + 0x18) + uVar2 * 600 + 0x58),0x8000190,0);
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(iVar1 + 0x30));
    }
    if (*(iVar1 + 0x2c) != 0) {
        uVar2 = 0;
        do {
            led_classdev_flash_unregister(*(iVar1 + 0x10) + uVar2 * 0x280 + 8);
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(iVar1 + 0x2c));
    }
    return 0;
}


// ===== sym.qti_flash_led_brightness_set @ 0x08004054 (size 268) =====

void sym.qti_flash_led_brightness_set(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    bool bVar2;
    int iVar3;
    int64_t iVar4;
    uint32_t uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(arg1 + -8);
    uVar1 = *(iVar6 + 0x2c);
    if (uVar1 != 0) {
        uVar5 = 0;
        iVar4 = *(iVar6 + 0x10);
        bVar2 = true;
        do {
            if (((*(iVar4 + uVar5 * 0x280 + 0x271) == *(arg1 + 0x269)) &&
                (*(iVar4 + uVar5 * 0x280 + 0x278) != *(arg1 + 0x270))) && (*(iVar4 + uVar5 * 0x280 + 0x27c) != '\0'))
            break;
            uVar5 = uVar5 + 1;
            bVar2 = uVar5 < uVar1;
        } while (uVar1 != uVar5);
        if (bVar2) {
            return;
        }
    }
    iVar3 = sym.__qti_flash_led_brightness_set(arg1,arg2);
    if (iVar3 == 0) {
        *(arg1 + 0x25c) = arg2;
        if (*(iVar6 + 0x30) != 0) {
            iVar3 = 0;
            iVar4 = *(iVar6 + 0x18);
            do {
                if ((*(iVar4 + iVar3 * 600 + 0x255) != '\0') && (*(iVar4 + iVar3 * 600 + 0x254) != '\0')) {
                    sym.qti_flash_led_symmetry_config(iVar4 + iVar3 * 600);
                    return;
                }
                iVar3 = iVar3 + 1;
            } while (*(iVar6 + 0x30) != iVar3);
        }
    }
    return;
}


// ===== sym.qti_flash_led_brightness_get @ 0x08004160 (size 16) =====

uint sym.qti_flash_led_brightness_get(int64_t arg1)

{
    return *(arg1 + 8);
}


// ===== sym.qti_flash_brightness_set_blocking @ 0x08004170 (size 40) =====

ulong sym.qti_flash_brightness_set_blocking(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qti_flash_led_brightness_set(arg1,arg2);
    return 0;
}


// ===== sym.__qti_flash_led_brightness_set @ 0x08004198 (size 896) =====

uint32_t sym.__qti_flash_led_brightness_set(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint8_t uVar5;
    code *pcVar6;
    uint32_t uVar7;
    ulong uVar8;
    char *pcVar9;
    uint64_t arg3;
    uint uVar10;
    ulong *in_x18;
    int64_t *arg1_00;
    int64_t iVar11;
    ulong unaff_x30;
    uint8_t auStack_5c [4];
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_58 = *(iVar2 + 0x5e0);
    arg1_00 = arg1 + -8;
    if (arg2 == 0) {
        uVar7 = sym.qti_flash_led_strobe(*arg1_00,0,1L << (*(arg1 + 0x269) & 0x3f),0);
        if (uVar7 < 0) {
            uVar8 = 0x8000c4a;
            arg2 = uVar7;
            goto code_r0x0800449c;
        }
        uVar7 = sym.qti_flash_led_disable(arg1_00);
        if (uVar7 < 0) {
            _printk(0x8000d59,"__qti_flash_led_brightness_set");
        }
        *(arg1 + 8) = 0;
    }
    else {
        uVar7 = *(arg1 + 0x254) + 500;
        uVar5 = *(arg1 + 0x26b);
        *(arg1 + 0x254) = *(arg1 + 600);
        *(arg1 + 0x26a) = uVar5;
        uVar3 = uVar7 / 1000;
        if (uVar7 / 1000 <= arg2) {
            uVar3 = arg2;
        }
        if (*(arg1 + 0x264) <= uVar3) {
            uVar3 = *(arg1 + 0x264);
        }
        if (1 < uVar5) goto code_r0x08004514;
        if (*(obj.flash_led_max_ires_values + uVar5 * 4) < uVar3) {
            uVar10 = 0x30d4;
            if (uVar3 < 0x281) {
                uVar10 = 5000;
            }
            *(arg1 + 0x254) = uVar10;
            *(arg1 + 0x26b) = 0x280 < uVar3;
        }
        iVar11 = *(arg1 + -8);
        *(arg1 + 0x260) = uVar3;
        uVar5 = *(arg1 + 0x269);
        *(arg1 + 8) = uVar3;
        iVar2 = iVar11 + 0x28;
        _raw_spin_lock(iVar2);
        uVar7 = (*(arg1 + 0x26a) == '\0') << (*(arg1 + 0x269) & 0x1f);
        auStack_5c[0] = uVar7;
        uVar7 = regmap_update_bits_base
                          (*(iVar11 + 8),*(iVar11 + 0x58) + 0x49,1L << (*(arg1 + 0x269) & 0x3f) & 0xff,uVar7 & 0xff,
                           0,0,0);
        if (uVar7 < 0) {
            iVar1 = *(iVar11 + 0x58) + 0x49;
code_r0x0800444c:
            uVar8 = 0x800084b;
            pcVar9 = "qti_flash_led_masked_write";
        }
        else {
            uVar7 = 0;
            uVar3 = *(arg1 + 0x260);
            iVar1 = uVar5 + 0x42;
            if ((uVar3 != 0) && (uVar4 = *(arg1 + 0x254), uVar4 != 0)) {
                if (uVar3 < (uVar4 + 500) / 1000) {
                    uVar7 = 0;
                }
                else {
                    uVar7 = 0;
                    if (uVar4 != 0) {
                        uVar7 = (uVar3 * 1000 + (uVar4 >> 1)) / uVar4;
                    }
                    uVar7 = uVar7 - 1 & 0xff;
                }
            }
            uVar7 = regmap_update_bits_base(*(iVar11 + 8),*(iVar11 + 0x58) + iVar1,0x7f,uVar7,0,0,0);
            if (uVar7 < 0) {
                iVar1 = *(iVar11 + 0x58) + iVar1;
                goto code_r0x0800444c;
            }
            if ((*(arg1 + 0x270) & 0xfffffffe) == 2) {
                if (*(arg1 + 0x275) == '\0') goto code_r0x080043bc;
                uVar7 = 0;
code_r0x080043f0:
                _raw_spin_unlock(iVar2);
                if (*(arg1 + 0x270) == 3) {
                    arg3 = 1L << (*(arg1 + 0x269) & 0x3f);
                    uVar7 = sym.qti_flash_led_strobe(*arg1_00,0,arg3,arg3 & 0xffffffff);
                    if (uVar7 < 0) {
                        uVar8 = 0x8001503;
                        arg2 = uVar7;
                        goto code_r0x0800449c;
                    }
                }
                goto code_r0x080044a0;
            }
            if (*(arg1 + 0x270) != 1) {
code_r0x080043bc:
                *(arg1 + 0x274) = 1;
                if ((*(arg1 + 0x26d) == '\x01') && (*(*(iVar11 + 0x38) + *(arg1 + 0x269) * 4) < 0x200)) {
                    uVar8 = gpio_to_desc();
                    gpiod_set_raw_value(uVar8,1);
                }
                goto code_r0x080043f0;
            }
            iVar1 = uVar5 + 0x3e;
            auStack_5c[0] = *(arg1 + 0x268) | 0x80;
            uVar7 = regmap_bulk_write(*(iVar11 + 8),*(iVar11 + 0x58) + iVar1,auStack_5c,1);
            if (-1 < uVar7) goto code_r0x080043bc;
            uVar8 = 0x800078b;
            pcVar9 = "qti_flash_led_write";
            iVar1 = *(iVar11 + 0x58) + iVar1;
        }
        _printk(uVar8,pcVar9,iVar1,uVar7);
        _raw_spin_unlock(iVar2);
        uVar8 = 0x80002b7;
code_r0x0800449c:
        _printk(uVar8,"__qti_flash_led_brightness_set",arg2);
    }
code_r0x080044a0:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_58) {
        return uVar7;
    }
    __stack_chk_fail();
code_r0x08004514:
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x5512,0x8004518);
    (*pcVar6)();
}


// ===== sym.qti_flash_led_symmetry_config @ 0x08004518 (size 324) =====

ulong sym.qti_flash_led_symmetry_config(int64_t arg1)

{
    uint8_t uVar1;
    ulong uVar2;
    uint64_t arg3;
    uint32_t uVar3;
    int64_t iVar4;
    int iVar5;
    ulong *in_x18;
    int64_t arg1_00;
    uint32_t uVar6;
    uint32_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *arg1;
    if (*(arg1_00 + 0x2c) != 0) {
        iVar5 = 0;
        uVar6 = 0;
        uVar3 = *(arg1 + 0x250);
        iVar4 = *(arg1_00 + 0x10);
        do {
            if (((uVar3 >> (*(iVar4 + iVar5 * 0x280 + 0x271) & 0x3f) & 1) != 0) &&
               (*(iVar4 + iVar5 * 0x280 + 0x27c) != '\0')) {
                uVar6 = *(iVar4 + iVar5 * 0x280 + 0x278);
            }
            iVar5 = iVar5 + 1;
        } while (*(arg1_00 + 0x2c) != iVar5);
        if (uVar6 != 0) {
            uVar1 = *(arg1_00 + 0x5c);
            if ((0xffffffffffffffffU >> (-uVar1 & 0x3f) != uVar3) || (*(arg1_00 + 0x60) == '\0')) {
                uVar2 = sym.qti_flash_config_group_symmetry(arg1_00,uVar6,uVar3,*(arg1 + 0x248));
                return uVar2;
            }
            uVar3 = *(arg1_00 + 0x30);
            if (uVar3 != 0) {
                uVar2 = 0;
                uVar7 = 1;
                while( true ) {
                    arg3 = *(*(arg1_00 + 0x18) + (uVar7 - 1) * 600 + 0x250);
                    if (0xffffffffffffffffU >> (-uVar1 & 0x3f) != arg3) {
                        uVar2 = sym.qti_flash_config_group_symmetry
                                          (arg1_00,uVar6,arg3,*(arg1 + (uVar7 - 1) * 600 + 0x248));
                        if (uVar2 < 0) {
                            return uVar2;
                        }
                        uVar3 = *(arg1_00 + 0x30);
                    }
                    if (uVar3 <= uVar7) break;
                    uVar1 = *(arg1_00 + 0x5c);
                    uVar7 = uVar7 + 1;
                }
                return uVar2;
            }
        }
    }
    return 0;
}


// ===== sym.qti_flash_led_strobe @ 0x0800465c (size 776) =====

uint64_t sym.qti_flash_led_strobe(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint8_t uVar2;
    char cVar3;
    uint32_t uVar4;
    int64_t *piVar5;
    ulong uVar6;
    char *pcVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    ulong in_x7;
    uint64_t uVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar13;
    int iVar14;
    ulong unaff_x30;
    uchar *puVar15;
    code *pcVar16;
    uchar auStack_64 [4];
    uchar auStack_60 [4];
    uchar auStack_5c [4];
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    puVar15 = &stack0xffffffffffffffb0;
    iVar13 = sp_el0;
    iStack_58 = *(iVar13 + 0x5e0);
    uVar9 = arg4;
    uVar4 = uVar9 & 0xff;
    uVar8 = arg3;
    uVar1 = uVar8 & 0xff;
    _raw_spin_lock(arg1 + 0x28);
    uVar2 = *(arg1 + 0x5c);
    if ((uVar4 & uVar1) == 0) {
        if (uVar2 != 0) {
            uVar10 = 0;
            uVar11 = *(arg1 + 0x5d);
            do {
                uVar12 = 1L << (uVar10 & 0x3f);
                if (((uVar12 & uVar1) != 0 && (uVar11 & uVar12) != 0) && (uVar12 & uVar4) == 0) {
                    uVar11 = uVar11 & (uVar12 ^ 0xffffffff);
                    *(arg1 + 0x5d) = uVar11;
                }
                uVar10 = uVar10 + 1;
            } while (uVar2 != uVar10);
        }
        uVar4 = regmap_update_bits_base(*(arg1 + 8),*(arg1 + 0x58) + 0x4e,uVar8 & 0xff,uVar9 & 0xff,0,0,0);
        if (uVar4 < 0) {
            uVar10 = uVar4;
code_r0x08004894:
            uVar6 = 0x800084b;
            pcVar7 = "qti_flash_led_masked_write";
            iVar14 = *(arg1 + 0x58) + 0x4e;
            goto code_r0x080048ac;
        }
        if ((*(arg1 + 0x5f) == '\0') || (auStack_60[0] = 0, *(arg1 + 0x62) != '\0')) {
            cVar3 = *(arg1 + 0x5e);
joined_r0x08004824:
            if ((cVar3 == '\0') || (*(arg1 + 0x5d) != '\0')) {
                uVar10 = 0;
            }
            else {
                auStack_5c[0] = 0;
                uVar4 = regmap_bulk_write(*(arg1 + 8),*(arg1 + 0x58) + 0x46,auStack_5c,1);
                uVar10 = uVar4;
                if (uVar4 < 0) goto code_r0x080048fc;
                *(arg1 + 0x5e) = 0;
            }
        }
        else {
            uVar4 = regmap_bulk_write(*(arg1 + 8),*(arg1 + 0x58) + 0x65,auStack_60,1);
            if (-1 < uVar4) {
                *(arg1 + 0x5f) = 0;
                cVar3 = *(arg1 + 0x5e);
                goto joined_r0x08004824;
            }
            uVar10 = uVar4;
            _printk(0x800078b,"qti_flash_led_write",*(arg1 + 0x58) + 0x65,uVar10);
            _printk(0x80007bf,"qti_flash_lmh_mitigation_config","disable",uVar10);
        }
    }
    else {
        if (uVar2 != 0) {
            uVar10 = 0;
            do {
                uVar12 = 1L << (uVar10 & 0x3f);
                if ((uVar12 & uVar1) != 0 && (uVar12 & uVar4) != 0) {
                    *(arg1 + 0x5d) = *(arg1 + 0x5d) | uVar12;
                }
                uVar10 = uVar10 + 1;
            } while (uVar2 != uVar10);
        }
        if ((*(arg1 + 0x5e) == '\0') && (*(arg1 + 0x5d) != '\0')) {
            auStack_64[0] = 0x80;
            uVar4 = regmap_bulk_write(*(arg1 + 8),*(arg1 + 0x58) + 0x46,auStack_64,1);
            if (-1 < uVar4) {
                *(arg1 + 0x5e) = 1;
                goto code_r0x0800473c;
            }
            uVar10 = uVar4;
code_r0x080048fc:
            uVar6 = 0x800078b;
            pcVar7 = "qti_flash_led_write";
            iVar14 = *(arg1 + 0x58) + 0x46;
code_r0x080048ac:
            _printk(uVar6,pcVar7,iVar14,uVar10);
        }
        else {
code_r0x0800473c:
            if ((arg2 != 0) && (*(arg2 + 0x248) != 0)) {
                hrtimer_start_range_ns(arg2 + 0x1f8,*(arg2 + 0x248) * 1000000,0,1);
            }
            uVar4 = regmap_update_bits_base(*(arg1 + 8),*(arg1 + 0x58) + 0x4e,uVar8 & 0xff,uVar9 & 0xff,0,0,0);
            uVar10 = uVar4;
            if (uVar4 < 0) goto code_r0x08004894;
        }
    }
    _raw_spin_unlock(arg1 + 0x28);
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_58) {
        return uVar10;
    }
    piVar5 = __stack_chk_fail();
    *extraout_x18 = sym.qti_flash_led_disable;
    pcVar16 = sym.qti_flash_led_disable;
    if (*(piVar5 + 0x27c) == '\0') {
        return 0;
    }
    iVar13 = *piVar5;
    _raw_spin_lock(iVar13 + 0x28);
    if ((*(piVar5 + 0x275) == '\x01') && (*(*(iVar13 + 0x38) + *(piVar5 + 0x271) * 4) < 0x200)) {
        uVar6 = gpio_to_desc();
        gpiod_set_raw_value(uVar6,0);
    }
    iVar14 = *(piVar5 + 0x271) + 0x42;
    uVar4 = regmap_update_bits_base
                      (*(iVar13 + 8),iVar14 + *(iVar13 + 0x58),0x7f,0,0,0,0,in_x7,puVar15,pcVar16,uVar10);
    if (uVar4 < 0) {
        uVar10 = uVar4;
    }
    else {
        iVar14 = *(piVar5 + 0x271) + 0x3e;
        uVar4 = regmap_update_bits_base
                          (*(iVar13 + 8),iVar14 + *(iVar13 + 0x58),0x80,0,0,0,0,in_x7,puVar15,pcVar16,uVar10);
        uVar10 = uVar4;
        if (-1 < uVar4) {
            *(piVar5 + 0x27c) = 0;
            *(piVar5 + 0x264) = 0;
            goto code_r0x08004a38;
        }
    }
    _printk(0x800084b,"qti_flash_led_masked_write",iVar14 + *(iVar13 + 0x58),uVar10);
code_r0x08004a38:
    _raw_spin_unlock(iVar13 + 0x28);
    return uVar10;
}


// ===== sym.qti_flash_led_disable @ 0x08004964 (size 300) =====

int sym.qti_flash_led_disable(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    int iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x27c) == '\0') {
        return 0;
    }
    iVar3 = *arg1;
    _raw_spin_lock(iVar3 + 0x28);
    if ((*(arg1 + 0x275) == '\x01') && (*(*(iVar3 + 0x38) + *(arg1 + 0x271) * 4) < 0x200)) {
        uVar2 = gpio_to_desc();
        gpiod_set_raw_value(uVar2,0);
    }
    iVar4 = *(arg1 + 0x271) + 0x42;
    iVar1 = regmap_update_bits_base(*(iVar3 + 8),iVar4 + *(iVar3 + 0x58),0x7f,0,0,0,0);
    if (-1 < iVar1) {
        iVar4 = *(arg1 + 0x271) + 0x3e;
        iVar1 = regmap_update_bits_base(*(iVar3 + 8),iVar4 + *(iVar3 + 0x58),0x80,0,0,0,0);
        if (-1 < iVar1) {
            *(arg1 + 0x27c) = 0;
            *(arg1 + 0x264) = 0;
            goto code_r0x08004a38;
        }
    }
    _printk(0x800084b,"qti_flash_led_masked_write",iVar4 + *(iVar3 + 0x58),iVar1);
code_r0x08004a38:
    _raw_spin_unlock(iVar3 + 0x28);
    return iVar1;
}


// ===== sym.qti_flash_config_group_symmetry @ 0x08004a90 (size 856) =====

ulong sym.qti_flash_config_group_symmetry(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint8_t uVar2;
    code *pcVar3;
    ulong uVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    int64_t iVar7;
    uint32_t uVar8;
    int64_t iVar9;
    uint32_t uVar10;
    ulong *in_x18;
    int64_t iVar11;
    int iVar12;
    int iVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = *(arg1 + 0x2c);
    if (uVar6 != 0) {
        uVar8 = 0;
        iVar12 = 0;
        iVar13 = 0;
        iVar7 = *(arg1 + 0x10);
        do {
            iVar11 = uVar8;
            uVar5 = *(iVar7 + uVar8 * 0x280 + 0x271);
            if ((((arg3 & 0xffffffffU) >> (uVar5 & 0x3f) & 1) != 0) && (*(iVar7 + iVar11 * 0x280 + 0x278) == arg2)) {
                uVar2 = *(iVar7 + iVar11 * 0x280 + 0x250);
                if (uVar2 != 0) {
                    if (arg4 == 0) {
code_r0x08004c6c:
                        uVar10 = *(iVar7 + iVar11 * 0x280 + 0x254);
                    }
                    else {
                        if (*(iVar7 + iVar11 * 0x280 + 0x228) < arg4) {
                            if (uVar2 != 1) {
                                if (arg4 <= *(iVar7 + iVar11 * 0x280 + 0x22c)) {
                                    uVar10 = 1;
                                    goto code_r0x08004c64;
                                }
                                if (uVar2 != 2) {
                                    if (arg4 <= *(iVar7 + iVar11 * 0x280 + 0x230)) {
                                        uVar10 = 2;
                                        goto code_r0x08004c64;
                                    }
                                    if (uVar2 != 3) {
                                        if (arg4 <= *(iVar7 + iVar11 * 0x280 + 0x234)) {
                                            uVar10 = 3;
                                            goto code_r0x08004c64;
                                        }
                                        if (uVar2 != 4) {
                                            if (arg4 <= *(iVar7 + iVar11 * 0x280 + 0x238)) {
                                                uVar10 = 4;
                                                goto code_r0x08004c64;
                                            }
                                            if (uVar2 != 5) {
                                                if (arg4 <= *(iVar7 + iVar11 * 0x280 + 0x23c)) {
                                                    uVar10 = 5;
                                                    goto code_r0x08004c64;
                                                }
                                                if (uVar2 != 6) {
                                                    if (arg4 <= *(iVar7 + iVar11 * 0x280 + 0x240)) {
                                                        uVar10 = 6;
                                                        goto code_r0x08004c64;
                                                    }
                                                    if (uVar2 != 7) {
                                                        if (arg4 <= *(iVar7 + iVar11 * 0x280 + 0x244)) {
                                                            uVar10 = 7;
                                                            goto code_r0x08004c64;
                                                        }
                                                        if (uVar2 != 8) {
                                                            if (arg4 <= *(iVar7 + iVar11 * 0x280 + 0x248)) {
                                                                uVar10 = 8;
                                                                goto code_r0x08004c64;
                                                            }
                                                            if (uVar2 != 9) {
                                                                if (arg4 <= *(iVar7 + iVar11 * 0x280 + 0x24c)) {
                                                                    uVar10 = 9;
                                                                    goto code_r0x08004c64;
                                                                }
                                                                if (uVar2 != 10) {
    //WARNING: Does not return
                                                                    pcVar3 = SoftwareBreakpoint(0x5512,0x8004de8);
                                                                    (*pcVar3)();
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            goto code_r0x08004c6c;
                        }
                        uVar10 = 0;
code_r0x08004c64:
                        if (uVar10 == uVar2) goto code_r0x08004c6c;
                        uVar10 = *(iVar7 + iVar11 * 0x280 + uVar10 * 4 + 0x200);
                    }
                    if (uVar10 != 0) {
                        iVar9 = iVar7 + iVar11 * 0x280;
                        uVar1 = *(iVar9 + 0x264);
                        if (uVar10 < uVar1) {
                            _printk(0x800155b,"check_current_with_time","check_current_with_time",0x276,uVar5,uVar1
                                    ,uVar10);
                            *(iVar9 + 0x264) = uVar10;
                            iVar7 = *(arg1 + 0x10);
                            uVar6 = *(arg1 + 0x2c);
                        }
                    }
                }
                iVar12 = iVar12 + 1;
                iVar13 = *(iVar7 + iVar11 * 0x280 + 0x264) + iVar13;
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < uVar6);
        if (iVar12 != 0) {
            uVar4 = 0;
            if (uVar6 == 0) {
                return 0;
            }
            uVar8 = 0;
            if (iVar12 != 0) {
                uVar8 = iVar13 / iVar12;
            }
            uVar10 = 1;
            while( true ) {
                iVar12 = uVar10 - 1;
                if ((((arg3 & 0xffffffffU) >> (*(iVar7 + iVar12 * 0x280 + 0x271) & 0x3f) & 1) != 0) &&
                   (*(iVar7 + iVar12 * 0x280 + 0x278) == arg2)) {
                    uVar4 = sym.__qti_flash_led_brightness_set(iVar7 + iVar12 * 0x280 + 8,uVar8);
                    if (uVar4 < 0) {
                        return uVar4;
                    }
                    uVar6 = *(arg1 + 0x2c);
                }
                if (uVar6 <= uVar10) break;
                iVar7 = *(arg1 + 0x10);
                uVar10 = uVar10 + 1;
            }
            return uVar4;
        }
    }
    _printk(0x8001230,"qti_flash_config_group_symmetry");
    return 0xffffffea;
}


// ===== sym.qti_flash_brightness_set @ 0x08004de8 (size 40) =====

ulong sym.qti_flash_brightness_set(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qti_flash_led_brightness_set(arg1,arg2);
    return 0;
}


// ===== sym.qti_flash_brightness_get @ 0x08004e10 (size 24) =====

ulong sym.qti_flash_brightness_get(int64_t arg1,int64_t arg2)

{
    *arg2 = *(arg1 + 8);
    return 0;
}


// ===== sym.qti_flash_strobe_set @ 0x08004e28 (size 252) =====

int sym.qti_flash_strobe_set(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    char *pcVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t arg3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg2 & 1;
    if (*(arg1 + 0x275) == uVar1) {
        iVar3 = 0;
    }
    else if ((((arg2 & 1U) == 0) || (*(arg1 + 0x274) != '\0')) && (*(arg1 + 0x268) != '\0')) {
        arg3 = 1L << (*(arg1 + 0x269) & 0x3f);
        uVar4 = arg3;
        if ((arg2 & 1U) == 0) {
            uVar4 = 0;
        }
        iVar3 = sym.qti_flash_led_strobe(*(arg1 + -8),0,arg3,uVar4);
        if (iVar3 < 0) {
            pcVar2 = "strobe";
            if ((arg2 & 1U) == 0) {
                pcVar2 = "desrobe";
            }
            _printk(0x80004cc,"qti_flash_strobe_set",pcVar2,iVar3);
        }
        else {
            *(arg1 + 0x275) = uVar1;
            if (((arg2 & 1U) == 0) && (iVar3 = sym.qti_flash_led_disable(arg1 + -8), iVar3 < 0)) {
                _printk(0x8000e24,"qti_flash_strobe_set",*(arg1 + 0x269));
            }
        }
    }
    else {
        iVar3 = -0x16;
    }
    return iVar3;
}


// ===== sym.qti_flash_strobe_get @ 0x08004f24 (size 24) =====

ulong sym.qti_flash_strobe_get(int64_t arg1,int64_t arg2)

{
    *arg2 = *(arg1 + 0x275);
    return 0;
}


// ===== sym.qti_flash_timeout_set @ 0x08004f3c (size 296) =====

ulong sym.qti_flash_timeout_set(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar5;
    ulong unaff_x30;
    uint8_t auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    if (arg2 == 0) {
        uVar5 = 0;
        *(arg1 + 0x268) = 0;
    }
    else {
        uVar4 = (arg2 & 0xffffffffU) / 1000;
        uVar1 = *(arg1 + 0x250);
        if (uVar4 <= *(arg1 + 0x250)) {
            uVar1 = uVar4;
        }
        if (uVar1 - 0x501 < 0xfffffb00) {
            uVar5 = 0xffffffea;
        }
        else {
            if (4 < (uVar1 & 0xffff)) {
                auStack_3c[0] = (uVar1 + 5 & 0xffff) / 10 - 1;
                *(arg1 + 0x268) = auStack_3c[0];
                auStack_3c[0] = auStack_3c[0] | 0x80;
                uVar5 = regmap_bulk_write(*(*(arg1 + -8) + 8),*(arg1 + 0x269) + 0x3e + *(*(arg1 + -8) + 0x58),
                                          auStack_3c,1);
                return uVar5;
            }
            uVar5 = 0xffffffff;
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar5;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.on_timer_function;
    iVar2 = sym.qti_flash_switch_enable(iVar3 + -0x1b0);
    if (iVar2 < 0) {
        *(iVar3 + 0xa4) = 0;
        _printk(0x800064f,"on_timer_function",*(iVar3 + -0x1a8),iVar2);
    }
    else {
        *(iVar3 + 0xa4) = 1;
    }
    return 0;
}


// ===== sym.on_timer_function @ 0x08005064 (size 112) =====

ulong sym.on_timer_function(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.qti_flash_switch_enable(arg1 + -0x1b0);
    if (iVar1 < 0) {
        *(arg1 + 0xa4) = 0;
        _printk(0x800064f,"on_timer_function",*(arg1 + -0x1a8),iVar1);
    }
    else {
        *(arg1 + 0xa4) = 1;
    }
    return 0;
}


// ===== sym.off_timer_function @ 0x080050d4 (size 132) =====

ulong sym.off_timer_function(int64_t arg1)

{
    int iVar1;
    char *arg3;
    int64_t arg2;
    ulong *in_x18;
    ulong unaff_x30;
    uchar noname_1 [16];
    
    *in_x18 = unaff_x30;
    arg3 = "off_timer_function";
    arg2 = 0x3a3;
    noname_1 = _printk(0x8000a9d);
    iVar1 = sym.qti_flash_switch_disable(arg1 + -0x1f8,noname_1,arg3,arg2);
    if (iVar1 < 0) {
        _printk(0x8001346,"off_timer_function",*(arg1 + -0x1f0),iVar1);
    }
    else {
        *(arg1 + 0x5c) = 0;
    }
    return 0;
}


// ===== sym.qti_flash_led_switch_brightness_set @ 0x08005158 (size 236) =====

void sym.qti_flash_led_switch_brightness_set(int64_t arg1,uint32_t arg2)

{
    char *pcVar1;
    int iVar2;
    int64_t iVar3;
    int64_t in_x2;
    int64_t in_x3;
    ulong *in_x18;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar noname_1 [16];
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x24c) != (arg2 != 0)) {
        if (arg2 == 0) {
            iVar3 = __hrtimer_get_remaining(arg1 + 0x1f0,0);
            noname_1 = extraout_q0;
            if (999 < iVar3) {
                noname_1 = hrtimer_cancel(arg1 + 0x1f0);
            }
            iVar2 = sym.qti_flash_switch_disable(arg1 + -8,noname_1,in_x2,in_x3);
        }
        else {
            if (*(arg1 + 0x238) != 0) {
                hrtimer_start_range_ns(arg1 + 0x1a8,*(arg1 + 0x238) * 1000000,0,1);
                return;
            }
            iVar2 = sym.qti_flash_switch_enable(arg1 + -8);
        }
        if (iVar2 < 0) {
            pcVar1 = "enable";
            if (arg2 == 0) {
                pcVar1 = "disable";
            }
            _printk(0x80015a4,"qti_flash_led_switch_brightness_set",pcVar1,iVar2);
        }
        else {
            *(arg1 + 0x24c) = arg2 != 0;
        }
    }
    return;
}


// ===== sym.qti_flash_switch_enable @ 0x08005244 (size 996) =====

int sym.qti_flash_switch_enable(int64_t arg1)

{
    uint8_t uVar1;
    uint32_t uVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    bool bVar6;
    int iVar7;
    int64_t *piVar8;
    uint64_t uVar9;
    char *pcVar10;
    uint64_t in_x4;
    uint64_t in_x6;
    uint32_t uVar11;
    uint64_t in_x7;
    uint32_t uVar12;
    uint64_t uVar13;
    int64_t iVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    int64_t iVar17;
    uint32_t uVar18;
    uint32_t uVar19;
    int iVar20;
    uint64_t uVar21;
    uint32_t uVar22;
    uint64_t uVar23;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar24;
    uint32_t unaff_w21;
    uint64_t uVar25;
    uint32_t uVar26;
    uint32_t uVar27;
    uint32_t uVar28;
    uint32_t uVar29;
    ulong unaff_x30;
    uchar auStack_70 [4];
    uchar auStack_6c [4];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar24 = sp_el0;
    iStack_68 = *(iVar24 + 0x5e0);
    iVar24 = *arg1;
    if ((*(arg1 + 0x255) == '\0') || (iVar7 = sym.qti_flash_led_symmetry_config(arg1), -1 < iVar7)) {
        uVar12 = *(iVar24 + 0x2c);
        if (uVar12 == 0) {
            uVar25 = 0;
code_r0x08005490:
            if ((*(iVar24 + 0x5f) != '\0') && (auStack_6c[0] = 0, *(iVar24 + 0x62) == '\0')) {
                iVar7 = regmap_bulk_write(*(iVar24 + 8),*(iVar24 + 0x58) + 0x65,auStack_6c,1);
                if (iVar7 < 0) {
                    _printk(0x800078b,"qti_flash_led_write",*(iVar24 + 0x58) + 0x65,iVar7);
                    pcVar10 = "disable";
                    goto code_r0x08005618;
                }
                *(iVar24 + 0x5f) = 0;
            }
        }
        else {
            uVar16 = *(arg1 + 0x250);
            iVar14 = *(iVar24 + 0x10);
            if (0x80000000 < uVar12 + 0x7fffffff) {
                uVar15 = uVar12 & 0xfffffffe;
                uVar18 = 0;
                uVar19 = 0;
                iVar7 = 0;
                iVar20 = 0;
                iVar17 = iVar14;
                uVar22 = uVar15;
                do {
                    uVar11 = in_x7;
                    uVar25 = 1L << (*(iVar17 + 0x271) & 0x3f) & uVar16;
                    uVar13 = 1L << (*(iVar17 + 0x4f1) & 0x3f) & uVar16;
                    if (uVar25 != 0) {
                        uVar11 = *(iVar17 + 0x27c);
                    }
                    if (uVar13 != 0) {
                        unaff_w21 = *(iVar17 + 0x4fc);
                    }
                    bVar5 = uVar11 == 0;
                    uVar26 = bVar5;
                    bVar6 = unaff_w21 == 0;
                    uVar28 = uVar25 == 0 || bVar5;
                    uVar27 = bVar6;
                    if (uVar28 == 0) {
                        uVar26 = *(iVar17 + 0x278);
                    }
                    uVar2 = uVar13 == 0 || bVar6;
                    if (uVar2 == 0) {
                        uVar27 = *(iVar17 + 0x4f8);
                    }
                    uVar29 = uVar27 == 1;
                    uVar28 = (uVar28 ^ 1) & uVar26 == 1;
                    if (uVar28 == 1) {
                        uVar28 = *(iVar17 + 0x264);
                    }
                    if (((uVar2 ^ 1) & uVar29) != 0) {
                        uVar29 = *(iVar17 + 0x4e4);
                    }
                    bVar3 = unaff_w21 == 0;
                    unaff_w21 = bVar3;
                    bVar4 = uVar11 == 0;
                    in_x7 = bVar4;
                    if ((uVar25 != 0 && !bVar5) && uVar26 != 1) {
                        uVar28 = 0;
                    }
                    in_x6 = uVar28;
                    if ((uVar13 != 0 && !bVar6) && uVar27 != 1) {
                        uVar29 = 0;
                    }
                    uVar11 = 0;
                    if (uVar25 != 0 && (uVar25 == 0 || !bVar4)) {
                        uVar11 = uVar28;
                    }
                    in_x4 = uVar11;
                    uVar26 = 0;
                    if (uVar25 != 0 && (uVar25 == 0 || !bVar4)) {
                        uVar26 = 1 << (*(iVar17 + 0x271) & 0x1f);
                    }
                    uVar27 = 0;
                    if (uVar13 != 0 && (uVar13 == 0 || !bVar3)) {
                        uVar27 = uVar29;
                    }
                    uVar28 = 0;
                    if (uVar13 != 0 && (uVar13 == 0 || !bVar3)) {
                        uVar28 = 1 << (*(iVar17 + 0x4f1) & 0x1f);
                    }
                    iVar7 = iVar7 + uVar11;
                    iVar20 = iVar20 + uVar27;
                    uVar18 = uVar18 | uVar26;
                    uVar19 = uVar19 | uVar28;
                    iVar17 = iVar17 + 0x500;
                    uVar22 = uVar22 - 2;
                } while (uVar22 != 0);
                iVar20 = iVar20 + iVar7;
                uVar25 = uVar19 | uVar18;
                goto joined_r0x08005434;
            }
            uVar25 = 0;
            uVar15 = 0;
            iVar20 = 0;
            do {
                iVar17 = uVar15;
                uVar1 = *(iVar14 + uVar15 * 0x280 + 0x271);
                if (((uVar16 >> (uVar1 & 0x3f) & 1) != 0) && (*(iVar14 + iVar17 * 0x280 + 0x27c) != '\0')) {
                    if (*(iVar14 + iVar17 * 0x280 + 0x278) == 1) {
                        iVar20 = *(iVar14 + iVar17 * 0x280 + 0x264) + iVar20;
                    }
                    uVar25 = uVar25 | 1 << (uVar1 & 0x1f);
                }
                uVar15 = uVar15 + 1;
joined_r0x08005434:
            } while (uVar12 != uVar15);
            if (iVar20 < 1000) goto code_r0x08005490;
            auStack_70[0] = 1;
            if ((*(iVar24 + 0x62) == '\0') && (*(iVar24 + 0x5f) != '\x01')) {
                iVar7 = regmap_bulk_write(*(iVar24 + 8),*(iVar24 + 0x58) + 0x65,auStack_70,1);
                if (-1 < iVar7) {
                    *(iVar24 + 0x5f) = 1;
                    goto code_r0x08005480;
                }
                _printk(0x800078b,"qti_flash_led_write",*(iVar24 + 0x58) + 0x65,iVar7);
                pcVar10 = "enable";
code_r0x08005618:
                _printk(0x80007bf,"qti_flash_lmh_mitigation_config",pcVar10,iVar7);
                goto code_r0x080054dc;
            }
code_r0x08005480:
            __const_udelay(0x20c4ac);
        }
        iVar7 = sym.qti_flash_led_strobe(iVar24,arg1,*(arg1 + 0x250),uVar25);
    }
    else {
        _printk(0x80014a8,"qti_flash_switch_enable",iVar7);
    }
code_r0x080054dc:
    iVar24 = sp_el0;
    if (*(iVar24 + 0x5e0) == iStack_68) {
        return iVar7;
    }
    piVar8 = __stack_chk_fail();
    *extraout_x18 = sym.qti_flash_switch_disable;
    iVar24 = *piVar8;
    uVar12 = *(iVar24 + 0x2c);
    if (uVar12 == 0) {
        uVar25 = 0;
    }
    else {
        uVar13 = *(piVar8 + 0x4a);
        iVar14 = *(iVar24 + 0x10);
        if (uVar12 + 0x7fffffff < 0x80000001) {
            uVar25 = 0;
            uVar16 = 0;
        }
        else {
            uVar16 = uVar12 & 0xfffffffe;
            uVar15 = 0;
            uVar18 = 0;
            iVar17 = iVar14;
            uVar19 = uVar16;
            do {
                uVar11 = in_x6;
                uVar22 = in_x4;
                uVar9 = 1L << (*(iVar17 + 0x271) & 0x3f);
                uVar23 = 1L << (*(iVar17 + 0x4f1) & 0x3f);
                uVar25 = uVar9 & uVar13;
                uVar21 = uVar23 & uVar13;
                if (uVar25 != 0) {
                    uVar22 = *(iVar17 + 0x27c);
                }
                if (uVar21 != 0) {
                    uVar11 = *(iVar17 + 0x4fc);
                }
                iVar17 = iVar17 + 0x500;
                in_x4 = uVar22 == 0;
                in_x6 = uVar11 == 0;
                uVar26 = 0;
                if (uVar25 != 0 && (uVar25 == 0 || uVar22 != 0)) {
                    uVar26 = uVar9;
                }
                uVar22 = 0;
                if (uVar21 != 0 && (uVar21 == 0 || uVar11 != 0)) {
                    uVar22 = uVar23;
                }
                uVar15 = uVar15 | uVar26;
                uVar18 = uVar18 | uVar22;
                uVar19 = uVar19 - 2;
            } while (uVar19 != 0);
            uVar25 = uVar18 | uVar15;
            if (uVar12 == uVar16) goto code_r0x08005734;
        }
        do {
            uVar21 = 1L << (*(iVar14 + uVar16 * 0x280 + 0x271) & 0x3f);
            if (((uVar21 & uVar13) != 0) && (*(iVar14 + uVar16 * 0x280 + 0x27c) != '\0')) {
                uVar25 = uVar25 | uVar21;
            }
            uVar16 = uVar16 + 1;
        } while (uVar12 != uVar16);
    }
code_r0x08005734:
    iVar7 = sym.qti_flash_led_strobe(iVar24,0,uVar25,~uVar25);
    if (iVar7 < 0) {
        _printk(0x8000c82,"qti_flash_switch_disable",iVar7);
    }
    else {
        uVar12 = *(iVar24 + 0x2c);
        if (uVar12 != 0) {
            uVar16 = 0;
            do {
                iVar14 = *(iVar24 + 0x10) + uVar16 * 0x280;
                if (((*(piVar8 + 0x4a) >> (*(iVar14 + 0x271) & 0x3f) & 1) != 0) &&
                   (*(*(iVar24 + 0x10) + uVar16 * 0x280 + 0x27c) != '\0')) {
                    iVar7 = sym.qti_flash_led_disable(iVar14);
                    if (iVar7 < 0) {
                        _printk(0x80002f4,"qti_flash_switch_disable",*(iVar24 + 0x10) + uVar16 * 0x280 + 0x271);
                        break;
                    }
                    uVar12 = *(iVar24 + 0x2c);
                }
                uVar16 = uVar16 + 1;
            } while (uVar16 < uVar12);
        }
        piVar8[0x49] = 0;
        piVar8[0x48] = 0;
    }
    return iVar7;
}


// ===== sym.qti_flash_switch_disable @ 0x08005628 (size 556) =====

int sym.qti_flash_switch_disable(int64_t arg1,uchar noname_1 [16],int64_t arg3,int64_t arg2)

{
    uint32_t uVar1;
    bool bVar2;
    bool bVar3;
    uint32_t uVar4;
    int iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint32_t in_w4;
    uint32_t in_w6;
    uint32_t uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint64_t uVar14;
    int64_t iVar15;
    uint32_t uVar16;
    uint64_t uVar17;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *arg1;
    uVar8 = *(arg1_00 + 0x2c);
    if (uVar8 == 0) {
        uVar7 = 0;
    }
    else {
        uVar9 = *(arg1 + 0x250);
        iVar10 = *(arg1_00 + 0x10);
        if (uVar8 + 0x7fffffff < 0x80000001) {
            uVar7 = 0;
            uVar11 = 0;
        }
        else {
            uVar11 = uVar8 & 0xfffffffe;
            uVar12 = 0;
            uVar13 = 0;
            iVar15 = iVar10;
            uVar1 = uVar11;
            do {
                uVar6 = 1L << (*(iVar15 + 0x271) & 0x3f);
                uVar17 = 1L << (*(iVar15 + 0x4f1) & 0x3f);
                uVar7 = uVar6 & uVar9;
                uVar14 = uVar17 & uVar9;
                if (uVar7 != 0) {
                    in_w4 = *(iVar15 + 0x27c);
                }
                if (uVar14 != 0) {
                    in_w6 = *(iVar15 + 0x4fc);
                }
                iVar15 = iVar15 + 0x500;
                bVar2 = in_w4 == 0;
                in_w4 = bVar2;
                bVar3 = in_w6 == 0;
                in_w6 = bVar3;
                uVar4 = 0;
                if (uVar7 != 0 && (uVar7 == 0 || !bVar2)) {
                    uVar4 = uVar6;
                }
                uVar16 = 0;
                if (uVar14 != 0 && (uVar14 == 0 || !bVar3)) {
                    uVar16 = uVar17;
                }
                uVar12 = uVar12 | uVar4;
                uVar13 = uVar13 | uVar16;
                uVar1 = uVar1 - 2;
            } while (uVar1 != 0);
            uVar7 = uVar13 | uVar12;
            if (uVar8 == uVar11) goto code_r0x08005734;
        }
        do {
            uVar14 = 1L << (*(iVar10 + uVar11 * 0x280 + 0x271) & 0x3f);
            if (((uVar14 & uVar9) != 0) && (*(iVar10 + uVar11 * 0x280 + 0x27c) != '\0')) {
                uVar7 = uVar7 | uVar14;
            }
            uVar11 = uVar11 + 1;
        } while (uVar8 != uVar11);
    }
code_r0x08005734:
    iVar5 = sym.qti_flash_led_strobe(arg1_00,0,uVar7,~uVar7);
    if (iVar5 < 0) {
        _printk(0x8000c82,"qti_flash_switch_disable",iVar5);
    }
    else {
        uVar8 = *(arg1_00 + 0x2c);
        if (uVar8 != 0) {
            uVar11 = 0;
            do {
                iVar10 = *(arg1_00 + 0x10) + uVar11 * 0x280;
                if (((*(arg1 + 0x250) >> (*(iVar10 + 0x271) & 0x3f) & 1) != 0) &&
                   (*(*(arg1_00 + 0x10) + uVar11 * 0x280 + 0x27c) != '\0')) {
                    iVar5 = sym.qti_flash_led_disable(iVar10);
                    if (iVar5 < 0) {
                        _printk(0x80002f4,"qti_flash_switch_disable",*(arg1_00 + 0x10) + uVar11 * 0x280 + 0x271);
                        break;
                    }
                    uVar8 = *(arg1_00 + 0x2c);
                }
                uVar11 = uVar11 + 1;
            } while (uVar11 < uVar8);
        }
        *(arg1 + 0x248) = 0;
        *(arg1 + 0x240) = 0;
    }
    return iVar5;
}


// ===== sym.qti_flash_led_max_current_show @ 0x08005854 (size 128) =====

int64_t sym.qti_flash_led_max_current_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x98);
    iVar2 = *(iVar3 + -8);
    iVar1 = sym.qti_flash_led_get_max_avail_current(iVar2,iVar2 + 0x4c);
    if (iVar1 < 0) {
        _printk(0x8000b56,"qti_flash_led_max_current_show",iVar1);
        iVar2 = -0x16;
    }
    else {
        iVar1 = scnprintf(arg2,0x1000,0x8000e10,*(*(iVar3 + -8) + 0x4c));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.qti_flash_on_time_show @ 0x080058d4 (size 72) =====

int64_t sym.qti_flash_on_time_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,"%lu\n",*(*(arg1 + 0x98) + 0x238) * 1000);
    return iVar1;
}


// ===== sym.qti_flash_on_time_store @ 0x0800591c (size 152) =====

int64_t sym.qti_flash_on_time_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    int64_t iStack_30;
    int64_t iStack_28;
    
    piVar2 = &iStack_30;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    iVar3 = *(arg1 + 0x98);
    iStack_30 = 0;
    iVar1 = kstrtoull(arg2,0,&iStack_30);
    if (iVar1 < 0) {
        arg3 = iVar1;
    }
    else if (iStack_30 == 0) {
        arg3 = -0x16;
    }
    else {
        *(iVar3 + 0x238) = iStack_30;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.qti_flash_off_time_show;
    iVar1 = scnprintf(piVar2,0x1000,"%lu\n",*(*(iVar3 + 0x98) + 0x240) * 1000);
    return iVar1;
}


// ===== sym.qti_flash_off_time_show @ 0x080059b4 (size 72) =====

int64_t sym.qti_flash_off_time_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,"%lu\n",*(*(arg1 + 0x98) + 0x240) * 1000);
    return iVar1;
}


// ===== sym.qti_flash_off_time_store @ 0x080059fc (size 140) =====

uchar * sym.qti_flash_off_time_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    uchar *puVar3;
    int64_t extraout_x1;
    int iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    uchar auStack_64 [4];
    uchar auStack_60 [4];
    uchar auStack_5c [4];
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    uchar *puStack_40;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    iVar5 = *(arg1 + 0x98);
    uStack_30 = 0;
    iVar2 = kstrtoull(arg2,0,&uStack_30);
    if (iVar2 < 0) {
        arg3 = iVar2;
    }
    else {
        *(iVar5 + 0x240) = uStack_30;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return arg3;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.qti_flash_led_irq_handler;
    pcStack_48 = sym.qti_flash_led_irq_handler;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    auStack_5c[0] = 0;
    auStack_60[0] = 0;
    auStack_64[0] = 0;
    puStack_50 = &stack0xffffffffffffffe0;
    puStack_40 = arg3;
    iVar2 = regmap_bulk_read(*(extraout_x1 + 8),*(extraout_x1 + 0x58) + 0x10,auStack_5c,1);
    if (iVar2 < 0) {
        iVar4 = 0x10;
    }
    else {
        iVar2 = regmap_bulk_read(*(extraout_x1 + 8),*(extraout_x1 + 0x58) + 6,auStack_60,1);
        if (iVar2 < 0) {
            iVar4 = 6;
        }
        else {
            iVar2 = regmap_bulk_read(*(extraout_x1 + 8),*(extraout_x1 + 0x58) + 7,auStack_64,1);
            if (-1 < iVar2) goto code_r0x08005b10;
            iVar4 = 7;
        }
    }
    _printk(0x8000960,"qti_flash_led_read",iVar4 + *(extraout_x1 + 0x58),iVar2);
code_r0x08005b10:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_58) {
        auVar6 = __stack_chk_fail();
        puVar3 = auVar6._0_8_;
        *extraout_x18_00 = sym.__cfi_check_fail;
        if (puVar3 != NULL) {
            switch(*puVar3) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar3,auVar6._8_8_,0);
                break;
            default:
                return puVar3;
            }
        }
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5502,0x8005bdc);
        (*pcVar1)();
    }
    return 0x1;
}


// ===== sym.qti_flash_led_irq_handler @ 0x08005a88 (size 252) =====

uchar * sym.qti_flash_led_irq_handler(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    uchar *puVar4;
    int iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar6 [16];
    uchar auStack_34 [4];
    uchar auStack_30 [4];
    uchar auStack_2c [4];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    auStack_2c[0] = 0;
    auStack_30[0] = 0;
    auStack_34[0] = 0;
    iVar3 = regmap_bulk_read(*(arg2 + 8),*(arg2 + 0x58) + 0x10,auStack_2c,1);
    if (iVar3 < 0) {
        iVar5 = 0x10;
    }
    else {
        iVar3 = regmap_bulk_read(*(arg2 + 8),*(arg2 + 0x58) + 6,auStack_30,1);
        if (iVar3 < 0) {
            iVar5 = 6;
        }
        else {
            iVar3 = regmap_bulk_read(*(arg2 + 8),*(arg2 + 0x58) + 7,auStack_34,1);
            if (-1 < iVar3) goto code_r0x08005b10;
            iVar5 = 7;
        }
    }
    _printk(0x8000960,"qti_flash_led_read",iVar5 + *(arg2 + 0x58),iVar3);
code_r0x08005b10:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_28) {
        auVar6 = __stack_chk_fail();
        puVar4 = auVar6._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar4 != NULL) {
            switch(*puVar4) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar4,auVar6._8_8_,0);
                break;
            default:
                return puVar4;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x8005bdc);
        (*pcVar2)();
    }
    return 0x1;
}


// ===== sym.__cfi_check_fail @ 0x08005b84 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08005bc8

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
    //switch table (4 cases) at 0x80001b0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8005bdc);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08005c14 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qti_flash_led_probe.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08005c48 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qti_flash_led_probe.30780f8c8ebe6fabb3a9a85b2af2f1c7.cfi_jt);
    return;
}

