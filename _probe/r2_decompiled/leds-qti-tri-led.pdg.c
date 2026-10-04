// decompiled from leds-qti-tri-led by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 404) =====

//WARNING: Switch with 1 destination removed at 0x08001fd0

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x1031a10342562551) {
        if (arg1 < -0x2e0ec26f59536246) {
            if (arg1 != -0x66d421a09845f9f8) {
                if ((arg1 == -0x3557318fb8d07b71) && ((pcVar1 + -0x80011d8 >> 3 | pcVar1 << 0x3d) < 2)) {
                    return;
                }
                goto code_r0x08001f90;
            }
            pcVar2 = sym.breath_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else if (arg1 == -0x2e0ec26f59536246) {
            pcVar2 = sym.qpnp_tri_led_set_blink.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08001f90;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x67966ce7b3be8732) {
        if (arg1 == 0x1031a10342562551) {
            pcVar2 = sym.qpnp_tri_led_set_brightness.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != 0x1e3d0ffe3d0499e9) goto code_r0x08001f90;
            pcVar2 = sym.breath_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
    }
    else if (arg1 == 0x67966ce7b3be8732) {
        pcVar2 = sym.qpnp_tri_led_get_brightness.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001f90;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001f90:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001fe4);
    (*pcVar1)();
}


// ===== sym.breath_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011a0 (size 8) =====

int64_t sym.breath_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x800037d,*(*(param_1 + 0x98) + 0x1dd));
    return iVar1;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011a8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qpnp_tri_led_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080011b0 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qpnp_tri_led_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.qpnp_tri_led_set_brightness.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011b8 (size 8) =====

int sym.qpnp_tri_led_set_brightness.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,uint32_t param_2)

{
    int iVar1;
    ulong *in_x18;
    int iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(param_1 + 0x1e8);
    if (0xfe < param_2) {
        param_2 = 0xff;
    }
    if (((param_2 == *(param_1 + 0x1d8)) && (*(param_1 + 0x229) == '\0')) && (*(param_1 + 0x22a) == '\0')) {
        iVar2 = 0;
    }
    else {
        *(param_1 + 0x1d8) = param_2;
        *(param_1 + 0x1dc) = 0;
        *(param_1 + 0x1c8 + (param_2 != 0) * 8) = 0;
        iVar1 = sym.qpnp_tri_led_set(param_1);
        iVar2 = 0;
        if (iVar1 != 0) {
            _dev_err(**(param_1 + 0x1e0),"Set led failed for %s, rc=%d\n",*(param_1 + 0x218),iVar1);
            iVar2 = iVar1;
        }
    }
    mutex_unlock(param_1 + 0x1e8);
    return iVar2;
}


// ===== sym.qpnp_tri_led_get_brightness.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011c0 (size 8) =====

uint sym.qpnp_tri_led_get_brightness.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    return *(param_1 + 8);
}


// ===== sym.qpnp_tri_led_set_blink.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011c8 (size 8) =====

int sym.qpnp_tri_led_set_blink.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
              (int64_t param_1,int64_t *param_2,int64_t *param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(param_1 + 0x1e8);
    iVar2 = *param_2;
    if (((*(param_1 + 0x229) == '\0') || (iVar2 != *(param_1 + 0x1c8))) || (*param_3 != *(param_1 + 0x1d0))) {
        if (iVar2 == 0) {
            *(param_1 + 0x1dc) = 0;
            *(param_1 + 0x1d8) = 0;
        }
        else if (*param_3 == 0) {
            *(param_1 + 0x1dc) = 0;
            *(param_1 + 0x1d8) = *(param_1 + 8);
        }
        else {
            *(param_1 + 0x1c8) = iVar2;
            iVar2 = *param_3;
            *(param_1 + 0x1dc) = 1;
            *(param_1 + 0x1d0) = iVar2;
        }
        iVar1 = sym.qpnp_tri_led_set(param_1);
        if (iVar1 != 0) {
            _dev_err(**(param_1 + 0x1e0),"Set led failed for %s, rc=%d\n",*(param_1 + 0x218),iVar1);
        }
    }
    else {
        iVar1 = 0;
    }
    mutex_unlock(param_1 + 0x1e8);
    return iVar1;
}


// ===== sym.breath_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011d0 (size 8) =====

void sym.breath_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    uchar *puVar4;
    uint uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar6;
    ulong unaff_x30;
    uchar auVar7 [16];
    char acStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    iVar6 = *(param_1 + 0x98);
    acStack_3c[0] = '\0';
    iVar3 = kstrtobool(param_3,acStack_3c);
    if (iVar3 < 0) {
        iVar6 = iVar3;
    }
    else {
        cancel_work_sync(iVar6 + 0xd0);
        mutex_lock(iVar6 + 0x1e8);
        if (*(iVar6 + 0x22a) != acStack_3c[0]) {
            uVar5 = 0;
            if (acStack_3c[0] != '\0') {
                uVar5 = 0xff;
            }
            *(iVar6 + 0x1dc) = 0;
            *(iVar6 + 0x1dd) = acStack_3c[0];
            *(iVar6 + 0x1d8) = uVar5;
            iVar3 = sym.qpnp_tri_led_set(iVar6);
            if (iVar3 < 0) {
                _dev_err(**(iVar6 + 0x1e0),"Set led failed for %s, rc=%d\n",*(iVar6 + 0x218),iVar3);
            }
        }
        mutex_unlock(iVar6 + 0x1e8);
        iVar6 = iVar3;
        if (-1 < iVar3) {
            iVar6 = param_4;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_38) {
        auVar7 = __stack_chk_fail(iVar6);
        puVar4 = auVar7._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar4 != NULL) {
            switch(*puVar4) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar4,auVar7._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x8001fe4);
        (*pcVar2)();
    }
    return;
}


// ===== sym.qpnp_tri_led_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011d8 (size 8) =====

ulong sym.qpnp_tri_led_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t *piVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = *(param_1 + 0xa8);
    if (0 < piVar1[10]) {
        iVar2 = 0;
        iVar3 = 0x50;
        do {
            sysfs_remove_files(*(piVar1[2] + iVar3),obj.breath_attrs);
            iVar2 = iVar2 + 1;
            iVar3 = iVar3 + 0x230;
        } while (iVar2 < piVar1[10]);
    }
    *(*piVar1 + 0x98) = 0;
    return 0;
}


// ===== sym.qpnp_tri_led_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011e0 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08001614)

uint64_t sym.qpnp_tri_led_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    bool bVar1;
    uchar auVar2 [16];
    uint32_t uVar3;
    uint32_t uVar4;
    int64_t *piVar5;
    ulong uVar6;
    int64_t iVar7;
    uint *puVar8;
    uint64_t uVar9;
    int64_t *piVar10;
    ulong uVar11;
    int64_t iVar12;
    char *pcVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    int iVar14;
    uint64_t uVar15;
    int64_t iVar16;
    uint64_t uVar17;
    int64_t iVar18;
    ulong unaff_x30;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    piVar5 = devm_kmalloc(param_1 + 0x10,0x58,0xdc0);
    if (piVar5 == NULL) {
        uVar9 = 0xfffffff4;
        goto code_r0x0800181c;
    }
    uVar6 = *(param_1 + 0x70);
    *piVar5 = param_1 + 0x10;
    iVar7 = dev_get_regmap(uVar6,0);
    piVar5[1] = iVar7;
    if (iVar7 == 0) {
        _dev_err(*piVar5,"Getting regmap failed\n");
        uVar9 = 0xffffffea;
        goto code_r0x0800181c;
    }
    uVar6 = *(*piVar5 + 0x2f0);
    uStack_6c = 0;
    puVar8 = __of_get_address(uVar6,0,0xffffffff,0,0);
    if (puVar8 == NULL) {
        _dev_err(*piVar5,"Getting address failed\n");
code_r0x08001678:
        uVar9 = 0xffffffea;
        goto code_r0x080015d0;
    }
    *(piVar5 + 0x54) = *puVar8 >> 0x18 | *puVar8 >> 8 & 0xff00;
    iVar7 = of_get_next_available_child(uVar6,0);
    if (iVar7 == 0) {
        *(piVar5 + 10) = 0;
code_r0x08001644:
        _dev_err(*piVar5,"No led child node defined\n");
code_r0x08001654:
        uVar9 = 0xffffffed;
    }
    else {
        iVar14 = 0;
        do {
            iVar14 = iVar14 + 1;
            iVar7 = of_get_next_available_child(uVar6,iVar7);
        } while (iVar7 != 0);
        *(piVar5 + 10) = iVar14;
        if (iVar14 == 0) goto code_r0x08001644;
        if (3 < iVar14) {
            _dev_err(*piVar5,"can\'t support %d leds(max %d)\n",iVar14,3);
            goto code_r0x08001678;
        }
        iVar7 = of_find_property(*(*piVar5 + 0x2f0),"nvmem",0);
        if (iVar7 != 0) {
            uVar9 = devm_nvmem_device_get(*piVar5,"pbs_sdam");
            piVar5[3] = uVar9;
            if ((uVar9 != 0) && (uVar9 < 0xfffffffffffff001)) goto code_r0x08001308;
            if (uVar9 == -0x205) {
                piVar5[3] = 0;
code_r0x08001818:
                uVar9 = 0xfffffdfb;
                goto code_r0x0800181c;
            }
            _dev_err(*piVar5,"Couldn\'t get nvmem device, rc=%d\n");
            goto code_r0x08001654;
        }
code_r0x08001308:
        auVar2._8_8_ = 0;
        auVar2._0_8_ = piVar5[10];
        if (SUB168(auVar2 * ZEXT816(0x230),8) == 0) {
            iVar7 = devm_kmalloc(*piVar5,piVar5[10] * 0x230,0xdc0);
            piVar5[2] = iVar7;
            if (iVar7 != 0) {
                piVar10 = of_get_next_available_child(uVar6,0);
                if (piVar10 != NULL) {
                    iVar14 = 0;
                    do {
                        uVar3 = of_property_read_variable_u32_array(piVar10,"led-sources",&uStack_6c,1,0);
                        if (uVar3 < 0) {
                            uVar9 = uVar3;
                            _dev_err(*piVar5,"Get led-sources failed, rc=%d\n",uVar9);
joined_r0x080017d0:
                            if (uVar3 != 0xfffffdfb) goto code_r0x080015d0;
                            goto code_r0x08001818;
                        }
                        if (2 < uStack_6c) {
                            _dev_err(*piVar5,"only support 0~%d current source\n",2);
                            goto code_r0x08001678;
                        }
                        iVar16 = piVar5[2];
                        iVar7 = iVar16 + iVar14 * 0x230;
                        *(iVar7 + 0x1e0) = piVar5;
                        *(iVar7 + 0x228) = uStack_6c;
                        iVar7 = of_get_property(piVar10,"label",0);
                        if (iVar7 == 0) {
                            iVar7 = *piVar10;
                        }
                        iVar18 = iVar16 + iVar14 * 0x230;
                        *(iVar18 + 0x218) = iVar7;
                        uVar9 = devm_of_pwm_get(*piVar5,piVar10,0);
                        *(iVar18 + 0x1a8) = uVar9;
                        if (0xfffffffffffff000 < uVar9) {
                            uVar3 = uVar9;
                            if (uVar3 == 0xfffffdfb) goto code_r0x08001818;
                            _dev_err(*piVar5,"Get pwm device for %s led failed, rc=%d\n",*(iVar18 + 0x218),
                                     uVar9 & 0xffffffff);
                            if (uVar3 < 0) goto joined_r0x080017d0;
                            break;
                        }
                        iVar16 = iVar16 + iVar14 * 0x230;
                        iVar7 = 1000000;
                        if (*(uVar9 + 0x28) != 0) {
                            iVar7 = *(uVar9 + 0x28);
                        }
                        *(iVar16 + 0x1b0) = iVar7;
                        uVar11 = of_get_property(piVar10,"linux,default-trigger",0);
                        *(iVar16 + 0x220) = uVar11;
                        piVar10 = of_get_next_available_child(uVar6,piVar10);
                        iVar14 = iVar14 + 1;
                    } while (piVar10 != NULL);
                }
                piVar10 = piVar5 + 4;
                __mutex_init(piVar10,"&chip->bus_lock",
                             reloc.qpnp_tri_led_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
                uStack_6c = 0;
                mutex_lock(piVar10);
                uVar4 = regmap_read(piVar5[1],*(piVar5 + 0x54) + 4,&uStack_6c);
                uVar3 = uStack_6c;
                if (uVar4 < 0) {
                    uVar9 = uVar4;
                    _dev_err(*piVar5,"Read addr 0x%x failed, rc=%d\n",4,uVar9);
                    mutex_unlock(piVar10);
                    iVar7 = *piVar5;
                    pcVar13 = "Read REG_TYPE failed, rc=%d\n";
code_r0x0800171c:
                    _dev_err(iVar7,pcVar13,uVar9);
                }
                else {
                    mutex_unlock(piVar10);
                    if ((uVar3 & 0xff) == 0x19) {
                        uStack_6c = 0;
                        mutex_lock(piVar10);
                        uVar4 = regmap_read(piVar5[1],*(piVar5 + 0x54) + 5,&uStack_6c);
                        uVar3 = uStack_6c;
                        if (-1 < uVar4) {
                            mutex_unlock(piVar10);
                            *(piVar5 + 0x56) = uVar3;
                            *(*piVar5 + 0x98) = piVar5;
                            if (0 < piVar5[10]) {
                                iVar7 = 0x1a8;
                                uVar17 = 1;
                                do {
                                    iVar18 = piVar5[2];
                                    iVar16 = iVar18 + iVar7;
                                    __mutex_init(iVar16 + 0x40,"&led->lock",
                                                 reloc.qpnp_tri_led_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
                                    *(iVar16 + -0x1a8) = *(iVar16 + 0x70);
                                    *(iVar16 + -0x138) = *(iVar16 + 0x78);
                                    *(iVar16 + -0x180) =
                                         sym.qpnp_tri_led_set_brightness.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                                    *(iVar16 + -0x178) =
                                         sym.qpnp_tri_led_get_brightness.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                                    *(iVar16 + -0x170) =
                                         sym.qpnp_tri_led_set_blink.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                                    *(iVar16 + -0x1a0) = 0xff00000000;
                                    uVar3 = devm_led_classdev_register_ext(*piVar5,iVar16 + -0x1a8,0);
                                    if (uVar3 < 0) {
                                        uVar9 = uVar3;
                                        iVar12 = *piVar5;
                                        pcVar13 = "%s led class device registering failed, rc=%d\n";
                                        uVar6 = *(iVar16 + 0x70);
code_r0x08001748:
                                        _dev_err(iVar12,pcVar13,uVar6,uVar9);
                                        uVar15 = 0;
                                        iVar7 = 0x50;
                                        do {
                                            if (uVar15 < uVar17 - 1) {
                                                sysfs_remove_files(*(piVar5[2] + iVar7),obj.breath_attrs);
                                            }
                                            uVar15 = uVar15 + 1;
                                            iVar7 = iVar7 + 0x230;
                                        } while (uVar17 != uVar15);
                                        iVar7 = *piVar5;
                                        pcVar13 = "Registering LED class devices failed, rc=%d\n";
                                        goto code_r0x080017a0;
                                    }
                                    uVar3 = qpnp_lpg_pwm_get_output_types_supported(*(iVar18 + iVar7));
                                    if ((0 < uVar3) && ((uVar3 >> 1 & 1) != 0)) {
                                        uVar9 = sysfs_create_files(*(iVar18 + iVar7 + -0x158),obj.breath_attrs);
                                        if (uVar9 < 0) {
                                            uVar9 = uVar9 & 0xffffffff;
                                            iVar12 = *piVar5;
                                            uVar6 = *(iVar18 + iVar7 + 0x70);
                                            pcVar13 = "Create breath file for %s led failed, rc=%d\n";
                                            goto code_r0x08001748;
                                        }
                                    }
                                    iVar7 = iVar7 + 0x230;
                                    bVar1 = uVar17 < piVar5[10];
                                    uVar17 = uVar17 + 1;
                                } while (bVar1);
                            }
                            uVar9 = 0;
                            goto code_r0x0800181c;
                        }
                        uVar9 = uVar4;
                        _dev_err(*piVar5,"Read addr 0x%x failed, rc=%d\n",5,uVar9);
                        mutex_unlock(piVar10);
                        iVar7 = *piVar5;
                        pcVar13 = "Read REG_SUBTYPE failed, rc=%d\n";
                        goto code_r0x0800171c;
                    }
                    _dev_err(*piVar5,"invalid subtype(%d)\n",uVar3 & 0xff);
                    uVar9 = 0xffffffed;
                }
                iVar7 = *piVar5;
                pcVar13 = "HW initialization failed, rc=%d\n";
code_r0x080017a0:
                _dev_err(iVar7,pcVar13,uVar9);
                *(*piVar5 + 0x98) = 0;
                goto code_r0x0800181c;
            }
            uVar9 = 0xfffffff4;
        }
        else {
            uVar9 = 0xfffffff4;
            piVar5[2] = 0;
        }
    }
code_r0x080015d0:
    _dev_err(*piVar5,"Devicetree properties parsing failed, rc=%d\n",uVar9 & 0xffffffff);
code_r0x0800181c:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_68) {
        iVar7 = __stack_chk_fail();
        *extraout_x18 = sym.qpnp_tri_led_remove;
        piVar5 = *(iVar7 + 0xa8);
        if (0 < piVar5[10]) {
            iVar7 = 0;
            iVar16 = 0x50;
            do {
                sysfs_remove_files(*(piVar5[2] + iVar16),obj.breath_attrs);
                iVar7 = iVar7 + 1;
                iVar16 = iVar16 + 0x230;
            } while (iVar7 < piVar5[10]);
        }
        *(*piVar5 + 0x98) = 0;
        return 0;
    }
    return uVar9 & 0xffffffff;
}


// ===== sym.qpnp_tri_led_probe @ 0x080011e8 (size 1676) =====

//WARNING: Removing unreachable block (ram,0x08001614)

uint64_t sym.qpnp_tri_led_probe(int64_t arg1)

{
    bool bVar1;
    uchar auVar2 [16];
    uint32_t uVar3;
    uint32_t uVar4;
    int64_t *piVar5;
    ulong uVar6;
    int64_t iVar7;
    uint *puVar8;
    uint64_t uVar9;
    int64_t *piVar10;
    ulong uVar11;
    int64_t iVar12;
    char *pcVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    int iVar14;
    uint64_t uVar15;
    int64_t iVar16;
    uint64_t uVar17;
    int64_t iVar18;
    ulong unaff_x30;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    piVar5 = devm_kmalloc(arg1 + 0x10,0x58,0xdc0);
    if (piVar5 == NULL) {
        uVar9 = 0xfffffff4;
        goto code_r0x0800181c;
    }
    uVar6 = *(arg1 + 0x70);
    *piVar5 = arg1 + 0x10;
    iVar7 = dev_get_regmap(uVar6,0);
    piVar5[1] = iVar7;
    if (iVar7 == 0) {
        _dev_err(*piVar5,"Getting regmap failed\n");
        uVar9 = 0xffffffea;
        goto code_r0x0800181c;
    }
    uVar6 = *(*piVar5 + 0x2f0);
    uStack_6c = 0;
    puVar8 = __of_get_address(uVar6,0,0xffffffff,0,0);
    if (puVar8 == NULL) {
        _dev_err(*piVar5,"Getting address failed\n");
code_r0x08001678:
        uVar9 = 0xffffffea;
        goto code_r0x080015d0;
    }
    *(piVar5 + 0x54) = *puVar8 >> 0x18 | *puVar8 >> 8 & 0xff00;
    iVar7 = of_get_next_available_child(uVar6,0);
    if (iVar7 == 0) {
        *(piVar5 + 10) = 0;
code_r0x08001644:
        _dev_err(*piVar5,"No led child node defined\n");
code_r0x08001654:
        uVar9 = 0xffffffed;
    }
    else {
        iVar14 = 0;
        do {
            iVar14 = iVar14 + 1;
            iVar7 = of_get_next_available_child(uVar6,iVar7);
        } while (iVar7 != 0);
        *(piVar5 + 10) = iVar14;
        if (iVar14 == 0) goto code_r0x08001644;
        if (3 < iVar14) {
            _dev_err(*piVar5,"can\'t support %d leds(max %d)\n",iVar14,3);
            goto code_r0x08001678;
        }
        iVar7 = of_find_property(*(*piVar5 + 0x2f0),"nvmem",0);
        if (iVar7 != 0) {
            uVar9 = devm_nvmem_device_get(*piVar5,"pbs_sdam");
            piVar5[3] = uVar9;
            if ((uVar9 != 0) && (uVar9 < 0xfffffffffffff001)) goto code_r0x08001308;
            if (uVar9 == -0x205) {
                piVar5[3] = 0;
code_r0x08001818:
                uVar9 = 0xfffffdfb;
                goto code_r0x0800181c;
            }
            _dev_err(*piVar5,"Couldn\'t get nvmem device, rc=%d\n");
            goto code_r0x08001654;
        }
code_r0x08001308:
        auVar2._8_8_ = 0;
        auVar2._0_8_ = piVar5[10];
        if (SUB168(auVar2 * ZEXT816(0x230),8) == 0) {
            iVar7 = devm_kmalloc(*piVar5,piVar5[10] * 0x230,0xdc0);
            piVar5[2] = iVar7;
            if (iVar7 != 0) {
                piVar10 = of_get_next_available_child(uVar6,0);
                if (piVar10 != NULL) {
                    iVar14 = 0;
                    do {
                        uVar3 = of_property_read_variable_u32_array(piVar10,"led-sources",&uStack_6c,1,0);
                        if (uVar3 < 0) {
                            uVar9 = uVar3;
                            _dev_err(*piVar5,"Get led-sources failed, rc=%d\n",uVar9);
joined_r0x080017d0:
                            if (uVar3 != 0xfffffdfb) goto code_r0x080015d0;
                            goto code_r0x08001818;
                        }
                        if (2 < uStack_6c) {
                            _dev_err(*piVar5,"only support 0~%d current source\n",2);
                            goto code_r0x08001678;
                        }
                        iVar16 = piVar5[2];
                        iVar7 = iVar16 + iVar14 * 0x230;
                        *(iVar7 + 0x1e0) = piVar5;
                        *(iVar7 + 0x228) = uStack_6c;
                        iVar7 = of_get_property(piVar10,"label",0);
                        if (iVar7 == 0) {
                            iVar7 = *piVar10;
                        }
                        iVar18 = iVar16 + iVar14 * 0x230;
                        *(iVar18 + 0x218) = iVar7;
                        uVar9 = devm_of_pwm_get(*piVar5,piVar10,0);
                        *(iVar18 + 0x1a8) = uVar9;
                        if (0xfffffffffffff000 < uVar9) {
                            uVar3 = uVar9;
                            if (uVar3 == 0xfffffdfb) goto code_r0x08001818;
                            _dev_err(*piVar5,"Get pwm device for %s led failed, rc=%d\n",*(iVar18 + 0x218),
                                     uVar9 & 0xffffffff);
                            if (uVar3 < 0) goto joined_r0x080017d0;
                            break;
                        }
                        iVar16 = iVar16 + iVar14 * 0x230;
                        iVar7 = 1000000;
                        if (*(uVar9 + 0x28) != 0) {
                            iVar7 = *(uVar9 + 0x28);
                        }
                        *(iVar16 + 0x1b0) = iVar7;
                        uVar11 = of_get_property(piVar10,"linux,default-trigger",0);
                        *(iVar16 + 0x220) = uVar11;
                        piVar10 = of_get_next_available_child(uVar6,piVar10);
                        iVar14 = iVar14 + 1;
                    } while (piVar10 != NULL);
                }
                piVar10 = piVar5 + 4;
                __mutex_init(piVar10,"&chip->bus_lock",
                             reloc.qpnp_tri_led_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
                uStack_6c = 0;
                mutex_lock(piVar10);
                uVar4 = regmap_read(piVar5[1],*(piVar5 + 0x54) + 4,&uStack_6c);
                uVar3 = uStack_6c;
                if (uVar4 < 0) {
                    uVar9 = uVar4;
                    _dev_err(*piVar5,"Read addr 0x%x failed, rc=%d\n",4,uVar9);
                    mutex_unlock(piVar10);
                    iVar7 = *piVar5;
                    pcVar13 = "Read REG_TYPE failed, rc=%d\n";
code_r0x0800171c:
                    _dev_err(iVar7,pcVar13,uVar9);
                }
                else {
                    mutex_unlock(piVar10);
                    if ((uVar3 & 0xff) == 0x19) {
                        uStack_6c = 0;
                        mutex_lock(piVar10);
                        uVar4 = regmap_read(piVar5[1],*(piVar5 + 0x54) + 5,&uStack_6c);
                        uVar3 = uStack_6c;
                        if (-1 < uVar4) {
                            mutex_unlock(piVar10);
                            *(piVar5 + 0x56) = uVar3;
                            *(*piVar5 + 0x98) = piVar5;
                            if (0 < piVar5[10]) {
                                iVar7 = 0x1a8;
                                uVar17 = 1;
                                do {
                                    iVar18 = piVar5[2];
                                    iVar16 = iVar18 + iVar7;
                                    __mutex_init(iVar16 + 0x40,"&led->lock",
                                                 reloc.qpnp_tri_led_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
                                    *(iVar16 + -0x1a8) = *(iVar16 + 0x70);
                                    *(iVar16 + -0x138) = *(iVar16 + 0x78);
                                    *(iVar16 + -0x180) =
                                         sym.qpnp_tri_led_set_brightness.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                                    *(iVar16 + -0x178) =
                                         sym.qpnp_tri_led_get_brightness.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                                    *(iVar16 + -0x170) =
                                         sym.qpnp_tri_led_set_blink.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                                    *(iVar16 + -0x1a0) = 0xff00000000;
                                    uVar3 = devm_led_classdev_register_ext(*piVar5,iVar16 + -0x1a8,0);
                                    if (uVar3 < 0) {
                                        uVar9 = uVar3;
                                        iVar12 = *piVar5;
                                        pcVar13 = "%s led class device registering failed, rc=%d\n";
                                        uVar6 = *(iVar16 + 0x70);
code_r0x08001748:
                                        _dev_err(iVar12,pcVar13,uVar6,uVar9);
                                        uVar15 = 0;
                                        iVar7 = 0x50;
                                        do {
                                            if (uVar15 < uVar17 - 1) {
                                                sysfs_remove_files(*(piVar5[2] + iVar7),obj.breath_attrs);
                                            }
                                            uVar15 = uVar15 + 1;
                                            iVar7 = iVar7 + 0x230;
                                        } while (uVar17 != uVar15);
                                        iVar7 = *piVar5;
                                        pcVar13 = "Registering LED class devices failed, rc=%d\n";
                                        goto code_r0x080017a0;
                                    }
                                    uVar3 = qpnp_lpg_pwm_get_output_types_supported(*(iVar18 + iVar7));
                                    if ((0 < uVar3) && ((uVar3 >> 1 & 1) != 0)) {
                                        uVar9 = sysfs_create_files(*(iVar18 + iVar7 + -0x158),obj.breath_attrs);
                                        if (uVar9 < 0) {
                                            uVar9 = uVar9 & 0xffffffff;
                                            iVar12 = *piVar5;
                                            uVar6 = *(iVar18 + iVar7 + 0x70);
                                            pcVar13 = "Create breath file for %s led failed, rc=%d\n";
                                            goto code_r0x08001748;
                                        }
                                    }
                                    iVar7 = iVar7 + 0x230;
                                    bVar1 = uVar17 < piVar5[10];
                                    uVar17 = uVar17 + 1;
                                } while (bVar1);
                            }
                            uVar9 = 0;
                            goto code_r0x0800181c;
                        }
                        uVar9 = uVar4;
                        _dev_err(*piVar5,"Read addr 0x%x failed, rc=%d\n",5,uVar9);
                        mutex_unlock(piVar10);
                        iVar7 = *piVar5;
                        pcVar13 = "Read REG_SUBTYPE failed, rc=%d\n";
                        goto code_r0x0800171c;
                    }
                    _dev_err(*piVar5,"invalid subtype(%d)\n",uVar3 & 0xff);
                    uVar9 = 0xffffffed;
                }
                iVar7 = *piVar5;
                pcVar13 = "HW initialization failed, rc=%d\n";
code_r0x080017a0:
                _dev_err(iVar7,pcVar13,uVar9);
                *(*piVar5 + 0x98) = 0;
                goto code_r0x0800181c;
            }
            uVar9 = 0xfffffff4;
        }
        else {
            uVar9 = 0xfffffff4;
            piVar5[2] = 0;
        }
    }
code_r0x080015d0:
    _dev_err(*piVar5,"Devicetree properties parsing failed, rc=%d\n",uVar9 & 0xffffffff);
code_r0x0800181c:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_68) {
        iVar7 = __stack_chk_fail();
        *extraout_x18 = sym.qpnp_tri_led_remove;
        piVar5 = *(iVar7 + 0xa8);
        if (0 < piVar5[10]) {
            iVar7 = 0;
            iVar16 = 0x50;
            do {
                sysfs_remove_files(*(piVar5[2] + iVar16),obj.breath_attrs);
                iVar7 = iVar7 + 1;
                iVar16 = iVar16 + 0x230;
            } while (iVar7 < piVar5[10]);
        }
        *(*piVar5 + 0x98) = 0;
        return 0;
    }
    return uVar9 & 0xffffffff;
}


// ===== sym.qpnp_tri_led_remove @ 0x08001874 (size 128) =====

ulong sym.qpnp_tri_led_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t *piVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = *(arg1 + 0xa8);
    if (0 < piVar1[10]) {
        iVar2 = 0;
        iVar3 = 0x50;
        do {
            sysfs_remove_files(*(piVar1[2] + iVar3),obj.breath_attrs);
            iVar2 = iVar2 + 1;
            iVar3 = iVar3 + 0x230;
        } while (iVar2 < piVar1[10]);
    }
    *(*piVar1 + 0x98) = 0;
    return 0;
}


// ===== sym.qpnp_tri_led_set_brightness @ 0x080018f4 (size 208) =====

int sym.qpnp_tri_led_set_brightness(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint32_t uVar2;
    ulong *in_x18;
    int iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = arg2;
    mutex_lock(arg1 + 0x1e8);
    if (0xfe < uVar2) {
        uVar2 = 0xff;
    }
    if (((uVar2 == *(arg1 + 0x1d8)) && (*(arg1 + 0x229) == '\0')) && (*(arg1 + 0x22a) == '\0')) {
        iVar3 = 0;
    }
    else {
        *(arg1 + 0x1d8) = uVar2;
        *(arg1 + 0x1dc) = 0;
        *(arg1 + 0x1c8 + (uVar2 != 0) * 8) = 0;
        iVar1 = sym.qpnp_tri_led_set(arg1);
        iVar3 = 0;
        if (iVar1 != 0) {
            _dev_err(**(arg1 + 0x1e0),"Set led failed for %s, rc=%d\n",*(arg1 + 0x218),iVar1);
            iVar3 = iVar1;
        }
    }
    mutex_unlock(arg1 + 0x1e8);
    return iVar3;
}


// ===== sym.qpnp_tri_led_get_brightness @ 0x080019c4 (size 16) =====

uint sym.qpnp_tri_led_get_brightness(int64_t arg1)

{
    return *(arg1 + 8);
}


// ===== sym.qpnp_tri_led_set_blink @ 0x080019d4 (size 240) =====

int sym.qpnp_tri_led_set_blink(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + 0x1e8);
    arg2 = *arg2;
    if (((*(arg1 + 0x229) == '\0') || (arg2 != *(arg1 + 0x1c8))) || (*arg3 != *(arg1 + 0x1d0))) {
        if (arg2 == 0) {
            *(arg1 + 0x1dc) = 0;
            *(arg1 + 0x1d8) = 0;
        }
        else if (*arg3 == 0) {
            *(arg1 + 0x1dc) = 0;
            *(arg1 + 0x1d8) = *(arg1 + 8);
        }
        else {
            *(arg1 + 0x1c8) = arg2;
            uVar2 = *arg3;
            *(arg1 + 0x1dc) = 1;
            *(arg1 + 0x1d0) = uVar2;
        }
        iVar1 = sym.qpnp_tri_led_set(arg1);
        if (iVar1 != 0) {
            _dev_err(**(arg1 + 0x1e0),"Set led failed for %s, rc=%d\n",*(arg1 + 0x218),iVar1);
        }
    }
    else {
        iVar1 = 0;
    }
    mutex_unlock(arg1 + 0x1e8);
    return iVar1;
}


// ===== sym.qpnp_tri_led_set @ 0x08001ac4 (size 896) =====

uint64_t sym.qpnp_tri_led_set(int64_t arg1)

{
    ulong *puVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    uint8_t uVar4;
    uint8_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int iVar8;
    int64_t iVar9;
    char *pcVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    ushort uVar13;
    uint uVar14;
    ulong uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar16;
    ulong unaff_x30;
    uchar auStack_64 [4];
    uint64_t uStack_60;
    uint64_t uStack_58;
    uint uStack_50;
    bool bStack_4c;
    unkbyte3 Stack_4b;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_48 = *(iVar9 + 0x5e0);
    if (*(arg1 + 0x1dc) == '\0') {
        uStack_60 = *(arg1 + 0x1b0);
        uVar12 = uStack_60 * *(arg1 + 0x1d8);
        uStack_58 = uVar12 / 0xff;
        if (uStack_60 < uStack_58 && 0xfe < uVar12) {
            uStack_60 = uStack_58 + 1;
        }
    }
    else {
        uStack_58 = *(arg1 + 0x1c8) * 1000000;
        uVar12 = (*(arg1 + 0x1d0) + *(arg1 + 0x1c8)) * 1000000;
        uStack_60 = uStack_58 | 1;
        if (uStack_58 <= uVar12) {
            uStack_60 = uVar12;
        }
    }
    *(arg1 + 0x1b8) = uStack_60;
    *(arg1 + 0x1c0) = uStack_58;
    auStack_64[0] = 0;
    uVar15 = *(*(arg1 + 0x1a8) + 0x48);
    uVar14 = 1;
    if (*(arg1 + 0x1dd) != '\0') {
        uVar14 = 2;
    }
    Stack_4b = uVar15 >> 0x28;
    _uStack_50 = CONCAT14(uStack_58 != 0,uVar15);
    uVar6 = qpnp_lpg_pwm_set_output_type(*(arg1 + 0x1a8),uVar14);
    if (uVar6 < 0) {
        puVar16 = *(arg1 + 0x1e0);
        uVar15 = *arg1;
        pcVar10 = "Set output_type for %s led failed, rc=%d\n";
code_r0x08001d30:
        uVar12 = uVar6;
        _dev_err(*puVar16,pcVar10,uVar15,uVar12);
        _dev_err(**(arg1 + 0x1e0),"Configure PWM for %s led failed, rc=%d\n",*arg1,uVar12);
    }
    else {
        uVar6 = pwm_apply_state(*(arg1 + 0x1a8),&uStack_60);
        if (uVar6 < 0) {
            puVar16 = *(arg1 + 0x1e0);
            uVar15 = *arg1;
            pcVar10 = "Apply PWM state for %s led failed, rc=%d\n";
            goto code_r0x08001d30;
        }
        puVar16 = *(arg1 + 0x1e0);
        uVar6 = 1 << (7 - *(arg1 + 0x228) & 0x1f);
        uVar3 = 0;
        if (*(arg1 + 0x1c0) != 0) {
            uVar3 = uVar6;
        }
        if ((*(puVar16 + 0x56) == '\x03') && (puVar16[3] != 0)) {
            uVar4 = *(puVar16 + 0x57);
            uVar5 = 1 << (*(arg1 + 0x228) & 0x1f);
            uVar2 = uVar4 & (uVar5 ^ 0xff);
            if ((uVar3 & 0xff) != 0) {
                uVar2 = uVar4 | uVar5;
            }
            *(puVar16 + 0x57) = uVar2;
            puVar16 = *(arg1 + 0x1e0);
            if ((*(puVar16 + 0x57) & uVar4) != 0) goto code_r0x08001c70;
            auStack_64[0] = 1;
            if (*(puVar16 + 0x57) == 0) {
                auStack_64[0] = 2;
            }
            uVar7 = nvmem_device_write(puVar16[3],0x42,1,auStack_64);
            if (uVar7 < 0) {
                uVar12 = uVar7;
                pcVar10 = "Couldn\'t set PBS_ARG, rc=%d\n";
                uVar15 = **(arg1 + 0x1e0);
            }
            else {
                auStack_64[0] = 1;
                uVar7 = nvmem_device_write(*(*(arg1 + 0x1e0) + 0x18),0xe6,1,auStack_64);
                if (uVar7 < 0) {
                    uVar12 = uVar7;
                    pcVar10 = "Couldn\'t set PBS_TRIG_CLR, rc=%d\n";
                    uVar15 = **(arg1 + 0x1e0);
                }
                else {
                    auStack_64[0] = 1;
                    uVar7 = nvmem_device_write(*(*(arg1 + 0x1e0) + 0x18),0xe5,1,auStack_64);
                    puVar16 = *(arg1 + 0x1e0);
                    if (-1 < uVar7) goto code_r0x08001c70;
                    uVar12 = uVar7;
                    uVar15 = *puVar16;
                    pcVar10 = "Couldn\'t set PBS_TRIG_SET, rc=%d\n";
                }
            }
            _dev_err(uVar15,pcVar10,uVar12);
        }
        else {
code_r0x08001c70:
            puVar1 = puVar16 + 4;
            mutex_lock(puVar1);
            uVar6 = uVar6 & 0xff;
            uVar11 = uVar6;
            uVar7 = regmap_update_bits_base(puVar16[1],*(puVar16 + 0x54) + 0x46,uVar11,uVar3 & 0xff,0,0,0);
            uVar12 = uVar7;
            if (-1 < uVar7) {
                mutex_unlock(puVar1);
                if (*(arg1 + 0x1dc) == '\0') {
                    if (*(arg1 + 0x1dd) == '\0') {
                        *(arg1 + 8) = *(arg1 + 0x1d8);
                        *(arg1 + 0x229) = 0;
                        goto code_r0x08001e08;
                    }
                    uVar13 = 0x100;
                }
                else {
                    uVar13 = 1;
                }
                *(arg1 + 8) = 0xff;
                *(arg1 + 0x229) = uVar13;
                goto code_r0x08001e08;
            }
            _dev_err(*puVar16,"Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",0x46,uVar3 & 0xff,uVar6
                     ,uVar12);
            mutex_unlock(puVar1);
            _dev_err(**(arg1 + 0x1e0),"Update addr 0x%x failed, rc=%d\n",0x46,uVar12);
        }
    }
    uVar11 = *arg1;
    _dev_err(**(arg1 + 0x1e0),"__tri_led_set %s failed, rc=%d\n",uVar11,uVar12);
code_r0x08001e08:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_48) {
        return uVar12;
    }
    iVar9 = __stack_chk_fail();
    *extraout_x18 = sym.breath_show;
    iVar8 = scnprintf(uVar11,0x1000,0x800037d,*(*(iVar9 + 0x98) + 0x1dd));
    return iVar8;
}


// ===== sym.breath_show @ 0x08001e44 (size 68) =====

int64_t sym.breath_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x800037d,*(*(arg1 + 0x98) + 0x1dd));
    return iVar1;
}


// ===== sym.breath_store @ 0x08001e88 (size 260) =====

void sym.breath_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    uchar *puVar4;
    uint uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar6;
    ulong unaff_x30;
    uchar auVar7 [16];
    char acStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    iVar6 = *(arg1 + 0x98);
    acStack_3c[0] = '\0';
    iVar3 = kstrtobool(arg2,acStack_3c);
    if (iVar3 < 0) {
        iVar6 = iVar3;
    }
    else {
        cancel_work_sync(iVar6 + 0xd0);
        mutex_lock(iVar6 + 0x1e8);
        if (*(iVar6 + 0x22a) != acStack_3c[0]) {
            uVar5 = 0;
            if (acStack_3c[0] != '\0') {
                uVar5 = 0xff;
            }
            *(iVar6 + 0x1dc) = 0;
            *(iVar6 + 0x1dd) = acStack_3c[0];
            *(iVar6 + 0x1d8) = uVar5;
            iVar3 = sym.qpnp_tri_led_set(iVar6);
            if (iVar3 < 0) {
                _dev_err(**(iVar6 + 0x1e0),"Set led failed for %s, rc=%d\n",*(iVar6 + 0x218),iVar3);
            }
        }
        mutex_unlock(iVar6 + 0x1e8);
        iVar6 = iVar3;
        if (-1 < iVar3) {
            iVar6 = arg3;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_38) {
        auVar7 = __stack_chk_fail(iVar6);
        puVar4 = auVar7._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar4 != NULL) {
            switch(*puVar4) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar4,auVar7._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x8001fe4);
        (*pcVar2)();
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x08001f8c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001fd0

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
    //switch table (4 cases) at 0x8000160
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001fe4);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001ff4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qpnp_tri_led_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08002028 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qpnp_tri_led_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}

