// decompiled from lt9611uxc by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 996) =====

//WARNING: Switch with 1 destination removed at 0x08006e24

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x3d02fbcf29a5cb2) {
        if (arg1 < -0x3987c0e26ee29729) {
            if (arg1 < -0x66d421a09845f9f8) {
                if (arg1 == -0x7a963debe8378d0e) {
                    pcVar2 = sym.lt9611uxc_connector_mode_valid.e58709b06554ea617982e3f2e7a32f4b.cfi_jt;
                }
                else {
                    if (arg1 != -0x77338b146cdc8ca2) goto code_r0x08006de4;
                    pcVar2 = sym.lt9611uxc_firmware_cb.e58709b06554ea617982e3f2e7a32f4b.cfi_jt;
                }
            }
            else {
                if (arg1 == -0x66d421a09845f9f8) {
                    pcVar2 = sym.firmware_upgrade_show.e58709b06554ea617982e3f2e7a32f4b.cfi_jt;
code_r0x08002334:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                        return;
                    }
                    goto code_r0x08006de4;
                }
                if (arg1 == -0x550b9e52359ac614) {
                    pcVar2 = sym.lt9611uxc_hpd_work.cfi_jt;
                }
                else {
                    if (arg1 != -0x4478583436183362) goto code_r0x08006de4;
                    pcVar2 = sym.__typeid__ZTSF20drm_connector_statusP13drm_connectorbE_global_addr;
                }
            }
        }
        else if (arg1 < -0x27fa6cbf7efa52b0) {
            if (arg1 == -0x3987c0e26ee29729) {
                pcVar2 = sym.lt9611uxc_irq_thread_handler.e58709b06554ea617982e3f2e7a32f4b.cfi_jt;
            }
            else {
                if (arg1 != -0x361ba07c8d14641f) goto code_r0x08006de4;
                pcVar2 = sym.lt9611uxc_get_edid_block.e58709b06554ea617982e3f2e7a32f4b.cfi_jt;
            }
        }
        else if (arg1 == -0x27fa6cbf7efa52b0) {
            pcVar2 = sym.drm_atomic_helper_connector_destroy_state.cfi_jt;
        }
        else {
            if (arg1 != -0x21795a5800700eaf) {
                if (arg1 != -0x61358ef9566063a) goto code_r0x08006de4;
                pcVar2 = sym.drm_connector_cleanup.cfi_jt;
                goto code_r0x08002334;
            }
            pcVar2 = sym.lt9611uxc_bridge_mode_set.e58709b06554ea617982e3f2e7a32f4b.cfi_jt;
        }
    }
    else if (arg1 < 0x31c6a09ce65cd7ab) {
        if (arg1 < 0x121c51a5d59f1d7d) {
            if (arg1 == -0x3d02fbcf29a5cb2) {
                if ((pcVar1 + -0x8002440 >> 3 | pcVar1 << 0x3d) < 4) {
                    return;
                }
                goto code_r0x08006de4;
            }
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08006de4;
            pcVar2 = sym.init_module.cfi_jt;
        }
        else if (arg1 == 0x121c51a5d59f1d7d) {
            pcVar2 = sym.lt9611uxc_bridge_attach.e58709b06554ea617982e3f2e7a32f4b.cfi_jt;
        }
        else {
            if (arg1 != 0x18aafba39062885f) {
                if ((arg1 == 0x1e3d0ffe3d0499e9) && ((pcVar1 + -0x80024b0 >> 3 | pcVar1 << 0x3d) < 3)) {
                    return;
                }
                goto code_r0x08006de4;
            }
            pcVar2 = sym.lt9611uxc_probe.e58709b06554ea617982e3f2e7a32f4b.cfi_jt;
        }
    }
    else if (arg1 < 0x54063ff94b34c072) {
        if (arg1 == 0x31c6a09ce65cd7ab) {
            pcVar2 = sym.drm_helper_probe_single_connector_modes.cfi_jt;
        }
        else if (arg1 == 0x3e9bfea9c0d997da) {
            pcVar2 = sym.drm_atomic_helper_connector_duplicate_state.cfi_jt;
        }
        else {
            if (arg1 != 0x4118517922f19547) goto code_r0x08006de4;
            pcVar2 = sym.lt9611uxc_bridge_mode_fixup.e58709b06554ea617982e3f2e7a32f4b.cfi_jt;
        }
    }
    else if (arg1 == 0x54063ff94b34c072) {
        pcVar2 = sym.lt9611uxc_connector_get_modes.e58709b06554ea617982e3f2e7a32f4b.cfi_jt;
    }
    else if (arg1 == 0x7e04a0fb7ad8bcd5) {
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    else {
        if (arg1 != 0x7ea68a074636b5b8) goto code_r0x08006de4;
        pcVar2 = sym.lt9611uxc_remove.e58709b06554ea617982e3f2e7a32f4b.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08006de4:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8006e38);
    (*pcVar1)();
}


// ===== sym.lt9611uxc_get_edid_block.e58709b06554ea617982e3f2e7a32f4b.cfi_jt @ 0x080023f0 (size 8) =====

ulong sym.lt9611uxc_get_edid_block.e58709b06554ea617982e3f2e7a32f4b.cfi_jt
                (int64_t param_1,ulong param_2,int param_3,ulong param_4)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (param_3 << 7 < 0x101) {
        *in_x18 = unaff_x30;
        memcpy(param_2,param_1 + (param_3 << 7) + 0xa28,param_4);
        return 0;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8006de0);
    (*pcVar1)();
}


// ===== sym.lt9611uxc_firmware_cb.e58709b06554ea617982e3f2e7a32f4b.cfi_jt @ 0x080023f8 (size 8) =====

void sym.lt9611uxc_firmware_cb.e58709b06554ea617982e3f2e7a32f4b.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        _printk(0x8000b17,"lt9611uxc_firmware_cb");
    }
    else {
        sym.lt9611uxc_firmware_upgrade(param_2,param_1);
        release_firmware(param_1);
    }
    return;
}


// ===== sym.lt9611uxc_connector_get_modes.e58709b06554ea617982e3f2e7a32f4b.cfi_jt @ 0x08002400 (size 8) =====

uint sym.lt9611uxc_connector_get_modes.e58709b06554ea617982e3f2e7a32f4b.cfi_jt(ulong *param_1)

{
    int iVar1;
    int iVar2;
    ulong *puVar3;
    char cVar4;
    ushort uVar5;
    uint16_t uVar6;
    ushort uVar7;
    ulong *puVar8;
    ulong *puVar9;
    int iVar10;
    uint uVar11;
    int iVar12;
    ulong uVar13;
    int *piVar14;
    int64_t iVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar16;
    int64_t *piVar17;
    int64_t *piVar18;
    ulong *puVar19;
    ulong *puVar20;
    ulong unaff_x30;
    uchar auVar21 [16];
    ulong uStack_80;
    ulong *puStack_78;
    ulong uStack_70;
    ulong *puStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    puVar19 = param_1 + -6;
    iStack_58 = *(iVar15 + 0x5e0);
    piVar18 = param_1 + -0x2c;
    mutex_lock(puVar19);
    if ((*(param_1 + 0xace) == '\0') && (*(param_1 + 0x159) == '\0')) {
        if ((*(param_1 + 0xacb) == '\0') && (*(param_1 + 0xacf) != '\0')) {
            *(param_1 + 0xacf) = 0;
            mutex_unlock(puVar19);
            if (*(param_1 + 0x159) == '\0') {
                puStack_68 = NULL;
                uStack_60 = 0;
                puStack_78 = NULL;
                uStack_70 = 0;
                uStack_80 = 0;
                init_wait_entry(&uStack_80,0);
                puVar16 = param_1 + 0x116;
                prepare_to_wait_event(puVar16,&uStack_80,2);
                if (*(param_1 + 0x159) == '\0') {
                    iVar15 = 500;
                    do {
                        iVar15 = schedule_timeout(iVar15);
                        prepare_to_wait_event(puVar16,&uStack_80,2);
                        if (iVar15 == 0 && *(param_1 + 0x159) != '\0') {
                            iVar15 = 1;
                        }
                    } while ((*(param_1 + 0x159) == '\0') && (iVar15 != 0));
                    finish_wait(puVar16,&uStack_80);
                    if (iVar15 == 0) goto code_r0x08006950;
                }
                else {
                    finish_wait(puVar16,&uStack_80);
                }
            }
            goto code_r0x08006560;
        }
        mutex_unlock(puVar19);
    }
    else {
        *(param_1 + 0xace) = 0;
        *(param_1 + 0x159) = 0;
        mutex_unlock(puVar19);
code_r0x08006560:
        if (param_1[-7] == 0) {
            mutex_lock(puVar19);
            sym.lt9611uxc_ctl_en(piVar18);
            sym.lt9611uxc_edid_en(piVar18);
            param_1[0x138] = 0;
            param_1[0x137] = 0;
            puVar16 = param_1 + 0x139;
            param_1[0x136] = 0;
            param_1[0x135] = 0;
            param_1[0x134] = 0;
            param_1[0x133] = 0;
            param_1[0x132] = 0;
            param_1[0x131] = 0;
            param_1[0x130] = 0;
            param_1[0x12f] = 0;
            param_1[0x12e] = 0;
            param_1[0x12d] = 0;
            param_1[300] = 0;
            param_1[299] = 0;
            param_1[0x12a] = 0;
            param_1[0x129] = 0;
            param_1[0x128] = 0;
            param_1[0x127] = 0;
            param_1[0x126] = 0;
            param_1[0x125] = 0;
            param_1[0x124] = 0;
            param_1[0x123] = 0;
            param_1[0x122] = 0;
            param_1[0x121] = 0;
            param_1[0x120] = 0;
            param_1[0x11f] = 0;
            param_1[0x11e] = 0;
            param_1[0x11d] = 0;
            param_1[0x11c] = 0;
            param_1[0x11b] = 0;
            param_1[0x11a] = 0;
            param_1[0x119] = 0;
            uVar5 = *(param_1[0xec] + 2);
            param_1[0x139] = 0;
            param_1[0x13a] = 0;
            param_1[0x13b] = 0;
            param_1[0x13c] = 0;
            param_1[0x13d] = 0;
            param_1[0x13e] = 0;
            param_1[0x13f] = 0;
            param_1[0x140] = 0;
            param_1[0x141] = 0;
            param_1[0x142] = 0;
            param_1[0x143] = 0;
            param_1[0x144] = 0;
            param_1[0x145] = 0;
            param_1[0x146] = 0;
            param_1[0x147] = 0;
            *(param_1 + 0x139) = 0xb0ff;
            param_1[0x148] = 0;
            uStack_80 = CONCAT62(0x20000,uVar5);
            puStack_78 = puVar16;
            iVar10 = i2c_transfer(*(param_1[0xec] + 0x18),&uStack_80,1);
            if (iVar10 < 1) {
                _printk(0x8001311,"lt9611uxc_write_byte");
            }
            puVar20 = param_1 + 0x149;
            uVar6 = *(param_1[0xec] + 2);
            *puVar16 = 0;
            param_1[0x13a] = 0;
            param_1[0x13b] = 0;
            param_1[0x13c] = 0;
            param_1[0x13d] = 0;
            param_1[0x13e] = 0;
            param_1[0x13f] = 0;
            param_1[0x140] = 0;
            param_1[0x141] = 0;
            param_1[0x142] = 0;
            param_1[0x143] = 0;
            param_1[0x144] = 0;
            param_1[0x145] = 0;
            param_1[0x146] = 0;
            param_1[0x147] = 0;
            param_1[0x148] = 0;
            *(param_1 + 0x139) = 10;
            uStack_80._0_4_ = uVar6;
            uStack_80._0_6_ = CONCAT24(2,uStack_80);
            uStack_80 = uStack_80;
            puStack_78 = puVar16;
            iVar10 = i2c_transfer(*(param_1[0xec] + 0x18),&uStack_80,1);
            if (iVar10 < 1) {
                _printk(0x8001311,"lt9611uxc_write_byte");
            }
            iVar15 = param_1[0xec];
            uVar5 = *(iVar15 + 2);
            uVar7 = *(iVar15 + 2);
            param_1[0x157] = 0;
            param_1[0x158] = 0;
            param_1[0x155] = 0;
            param_1[0x156] = 0;
            param_1[0x153] = 0;
            param_1[0x154] = 0;
            param_1[0x151] = 0;
            param_1[0x152] = 0;
            param_1[0x14f] = 0;
            param_1[0x150] = 0;
            param_1[0x14d] = 0;
            param_1[0x14e] = 0;
            param_1[0x14b] = 0;
            param_1[0x14c] = 0;
            param_1[0x149] = 0;
            param_1[0x14a] = 0;
            param_1[0x147] = 0;
            param_1[0x148] = 0;
            param_1[0x145] = 0;
            param_1[0x146] = 0;
            param_1[0x143] = 0;
            param_1[0x144] = 0;
            param_1[0x141] = 0;
            param_1[0x142] = 0;
            param_1[0x13f] = 0;
            param_1[0x140] = 0;
            param_1[0x13d] = 0;
            param_1[0x13e] = 0;
            param_1[0x13b] = 0;
            param_1[0x13c] = 0;
            *puVar16 = 0;
            param_1[0x13a] = 0;
            *(param_1 + 0x139) = 0xb0;
            uStack_80 = CONCAT62(0x10000,uVar5);
            uStack_70._0_6_ = CONCAT42(0x800001,uVar7);
            uStack_70 = uStack_70;
            puStack_78 = puVar16;
            puStack_68 = puVar20;
            iVar10 = i2c_transfer(*(iVar15 + 0x18),&uStack_80,2);
            if (iVar10 == 2) {
                param_1[0x125] = param_1[0x155];
                param_1[0x126] = param_1[0x156];
                param_1[0x127] = param_1[0x157];
                param_1[0x128] = param_1[0x158];
                param_1[0x121] = param_1[0x151];
                param_1[0x122] = param_1[0x152];
                param_1[0x123] = param_1[0x153];
                param_1[0x124] = param_1[0x154];
                param_1[0x11d] = param_1[0x14d];
                param_1[0x11e] = param_1[0x14e];
                param_1[0x11f] = param_1[0x14f];
                param_1[0x120] = param_1[0x150];
                param_1[0x119] = *puVar20;
                param_1[0x11a] = param_1[0x14a];
                param_1[0x11b] = param_1[0x14b];
                param_1[0x11c] = param_1[0x14c];
                cVar4 = *(param_1 + 0x946);
            }
            else {
                _printk(0x80006dd,"lt9611uxc_read");
                cVar4 = *(param_1 + 0x946);
            }
            if (cVar4 != '\0') {
                uVar6 = *(param_1[0xec] + 2);
                *puVar16 = 0;
                param_1[0x13a] = 0;
                param_1[0x13b] = 0;
                param_1[0x13c] = 0;
                param_1[0x13d] = 0;
                param_1[0x13e] = 0;
                param_1[0x13f] = 0;
                param_1[0x140] = 0;
                param_1[0x141] = 0;
                param_1[0x142] = 0;
                param_1[0x143] = 0;
                param_1[0x144] = 0;
                param_1[0x145] = 0;
                param_1[0x146] = 0;
                param_1[0x147] = 0;
                param_1[0x148] = 0;
                *(param_1 + 0x139) = 0x800a;
                uStack_80._0_4_ = uVar6;
                uStack_80._0_6_ = CONCAT24(2,uStack_80);
                uStack_80 = uStack_80;
                puStack_78 = puVar16;
                iVar10 = i2c_transfer(*(param_1[0xec] + 0x18),&uStack_80,1);
                if (iVar10 < 1) {
                    _printk(0x8001311,"lt9611uxc_write_byte");
                }
                iVar15 = param_1[0xec];
                uVar5 = *(iVar15 + 2);
                uVar7 = *(iVar15 + 2);
                param_1[0x157] = 0;
                param_1[0x158] = 0;
                param_1[0x155] = 0;
                param_1[0x156] = 0;
                param_1[0x153] = 0;
                param_1[0x154] = 0;
                param_1[0x151] = 0;
                param_1[0x152] = 0;
                param_1[0x14f] = 0;
                param_1[0x150] = 0;
                param_1[0x14d] = 0;
                param_1[0x14e] = 0;
                param_1[0x14b] = 0;
                param_1[0x14c] = 0;
                param_1[0x149] = 0;
                param_1[0x14a] = 0;
                param_1[0x147] = 0;
                param_1[0x148] = 0;
                param_1[0x145] = 0;
                param_1[0x146] = 0;
                param_1[0x143] = 0;
                param_1[0x144] = 0;
                param_1[0x141] = 0;
                param_1[0x142] = 0;
                param_1[0x13f] = 0;
                param_1[0x140] = 0;
                param_1[0x13d] = 0;
                param_1[0x13e] = 0;
                param_1[0x13b] = 0;
                param_1[0x13c] = 0;
                *puVar16 = 0;
                param_1[0x13a] = 0;
                *(param_1 + 0x139) = 0xb0;
                uStack_80 = CONCAT62(0x10000,uVar5);
                uStack_70._0_6_ = CONCAT42(0x800001,uVar7);
                uStack_70 = uStack_70;
                puStack_78 = puVar16;
                puStack_68 = puVar20;
                iVar10 = i2c_transfer(*(iVar15 + 0x18),&uStack_80,2);
                if (iVar10 == 2) {
                    param_1[0x135] = param_1[0x155];
                    param_1[0x136] = param_1[0x156];
                    param_1[0x137] = param_1[0x157];
                    param_1[0x138] = param_1[0x158];
                    param_1[0x131] = param_1[0x151];
                    param_1[0x132] = param_1[0x152];
                    param_1[0x133] = param_1[0x153];
                    param_1[0x134] = param_1[0x154];
                    param_1[0x12d] = param_1[0x14d];
                    param_1[0x12e] = param_1[0x14e];
                    param_1[0x12f] = param_1[0x14f];
                    param_1[0x130] = param_1[0x150];
                    param_1[0x129] = *puVar20;
                    param_1[0x12a] = param_1[0x14a];
                    param_1[299] = param_1[0x14b];
                    param_1[300] = param_1[0x14c];
                }
                else {
                    _printk(0x80006dd,"lt9611uxc_read");
                }
            }
            sym.lt9611uxc_ctl_disable(piVar18);
            mutex_unlock(puVar19);
            uVar13 = drm_do_get_edid(param_1,sym.lt9611uxc_get_edid_block.e58709b06554ea617982e3f2e7a32f4b.cfi_jt,
                                     piVar18);
            param_1[-7] = uVar13;
        }
    }
code_r0x08006950:
    if (param_1[-7] == 0) {
        for (piVar17 = param_1[0xef]; param_1 + 0xef != piVar17; piVar17 = *piVar17) {
            iVar15 = drm_mode_duplicate(*param_1,piVar17 + -8);
            if (iVar15 == 0) {
                _printk(0x800138a,"lt9611uxc_connector_get_modes",*(piVar17 + -0x3c),*(piVar17 + -0x32));
                break;
            }
            drm_mode_probed_add(param_1,iVar15);
        }
        uVar11 = *(param_1 + 0xee);
    }
    else {
        drm_connector_update_edid_property(param_1);
        uVar11 = drm_add_edid_modes(param_1,param_1[-7]);
    }
    uStack_80 = 0;
    if (param_1[-7] == 0) {
        iVar10 = of_property_read_string(*(*piVar18 + 0x2f0),"lt,preferred-mode",&uStack_80);
        param_1 = param_1 + 0x16;
        puVar19 = *param_1;
        if (iVar10 == 0) {
            if (param_1 != puVar19) {
                do {
                    iVar10 = strcmp(puVar19 + 2,uStack_80);
                    if (iVar10 == 0) {
                        *(puVar19 + -2) = *(puVar19 + -2) | 8;
                    }
                    puVar19 = *puVar19;
                } while (param_1 != puVar19);
            }
            goto code_r0x08006b1c;
        }
        if (param_1 == puVar19) {
            puVar16 = NULL;
        }
        else {
            do {
                puVar16 = puVar19;
                puVar19 = *puVar16;
            } while (param_1 != puVar19);
            puVar16 = puVar16 + -8;
        }
    }
    else {
        param_1 = param_1 + 0x16;
        if (param_1 == *param_1) goto code_r0x08006b1c;
        puVar19 = *param_1;
        puVar20 = puVar19 + -8;
        puVar9 = puVar19 + -8;
        while (puVar16 = puVar9, puVar8 = puVar20, param_1 != puVar19) {
            puVar19 = *puVar19;
            puVar20 = puVar19 + -8;
            *(puVar8 + 0x3e) = *(puVar8 + 0x3e) & 0xf7;
            puVar9 = puVar8;
            if (puVar8 != puVar16) {
                puVar3 = puVar8;
                if (*(puVar8 + 0xe) * *(puVar8 + 4) <= *(puVar16 + 0xe) * *(puVar16 + 4)) {
                    puVar3 = puVar16;
                }
                iVar10 = drm_mode_vrefresh(puVar8);
                iVar12 = drm_mode_vrefresh(puVar3);
                puVar9 = puVar3;
                if (*(puVar8 + 0xe) * *(puVar8 + 4) == *(puVar3 + 0xe) * *(puVar3 + 4)) {
                    iVar1 = 0x3c - iVar10;
                    if (-1 < iVar10 + -0x3c) {
                        iVar1 = iVar10 + -0x3c;
                    }
                    iVar2 = 0x3c - iVar12;
                    if (-1 < iVar12 + -0x3c) {
                        iVar2 = iVar12 + -0x3c;
                    }
                    puVar9 = puVar8;
                    if (0x3c < iVar10 || iVar2 <= iVar1) {
                        puVar9 = puVar3;
                    }
                }
            }
        }
    }
    *(puVar16 + 0x3e) = *(puVar16 + 0x3e) | 8;
code_r0x08006b1c:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_58) {
        return uVar11;
    }
    auVar21 = __stack_chk_fail();
    piVar14 = auVar21._8_8_;
    iVar15 = auVar21._0_8_;
    *extraout_x18 = 0x8006ca8;
    if (*(iVar15 + 0xaca) == '\0') {
        piVar18 = *(iVar15 + 0x778);
        do {
            do {
                piVar17 = piVar18;
                if (iVar15 + 0x778 == piVar17) {
                    return 0xfffffffe;
                }
                piVar18 = *piVar17;
            } while ((*(piVar14 + 0xe) != *(piVar17 + -0x32)) || (piVar14[1] != *(piVar17 + -0x3c)));
            iVar10 = drm_mode_vrefresh(piVar14);
            iVar12 = drm_mode_vrefresh(piVar17 + -8);
        } while ((iVar10 != iVar12) || (*piVar14 != *(piVar17 + -8)));
    }
    else if ((*(piVar14 + 0xe) != *(iVar15 + 0x80e)) || (piVar14[1] != *(iVar15 + 0x804))) {
        return 0xfffffffe;
    }
    return 0;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08002408 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    i2c_del_driver(obj.lt9611uxc_driver);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08002410 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    i2c_register_driver(obj.__this_module,obj.lt9611uxc_driver);
    return;
}


// ===== sym.drm_atomic_helper_connector_destroy_state.cfi_jt @ 0x08002418 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.drm_atomic_helper_connector_destroy_state.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.drm_atomic_helper_connector_duplicate_state.cfi_jt @ 0x08002420 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.drm_atomic_helper_connector_duplicate_state.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.lt9611uxc_remove.e58709b06554ea617982e3f2e7a32f4b.cfi_jt @ 0x08002428 (size 8) =====

uint sym.lt9611uxc_remove.e58709b06554ea617982e3f2e7a32f4b.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    uint uVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    ulong *in_x18;
    int64_t arg1;
    int64_t iVar5;
    int64_t *piVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0xb8);
    if (arg1 == 0) {
        uVar2 = 0xffffffea;
    }
    else {
        mipi_dsi_detach(*(arg1 + 0x120));
        mipi_dsi_device_unregister(*(arg1 + 0x120));
        drm_bridge_remove(arg1 + 8);
        param_1 = param_1 + 0x20;
        if (param_1 == 0) {
            _printk(0x8000726,"lt9611uxc_sysfs_remove","lt9611uxc_sysfs_remove");
        }
        else {
            sysfs_remove_group(param_1,obj.lt9611uxc_sysfs_attr_grp);
        }
        disable_irq(*(arg1 + 0x894));
        free_irq(*(arg1 + 0x894),arg1);
        uVar2 = sym.lt9611uxc_gpio_configure(arg1);
        if (param_1 == 0) {
            _printk(0x8000f44,"lt9611uxc_put_dt_supply",0,arg1);
        }
        else {
            iVar5 = *(arg1 + 0x8b8);
            if ((iVar5 != 0) && (uVar4 = *(arg1 + 0x8b4) - 1, -1 < uVar4)) {
                do {
                    piVar6 = iVar5 + uVar4 * 0x48;
                    if (*piVar6 != 0) {
                        regulator_set_voltage(*piVar6,0,*(iVar5 + uVar4 * 0x48 + 0x2c));
                        regulator_put(*piVar6);
                        *piVar6 = 0;
                    }
                    uVar4 = uVar4 - 1;
                } while (-1 < uVar4);
                iVar5 = *(arg1 + 0x8b8);
            }
            if (iVar5 != 0) {
                *(arg1 + 0x8b8) = 0;
            }
            *(arg1 + 0x8b4) = 0;
        }
        piVar6 = *(arg1 + 0x8d8);
        while (piVar6 != arg1 + 0x8d8) {
            piVar7 = *piVar6;
            uVar3 = __list_del_entry_valid(piVar6);
            if ((uVar3 & 1) != 0) {
                iVar5 = *piVar6;
                piVar1 = piVar6[1];
                *(iVar5 + 8) = piVar1;
                *piVar1 = iVar5;
            }
            *piVar6 = -0x2152ffffffffff00;
            piVar6[1] = -0x2152fffffffffede;
            kfree(piVar6 + -8);
            piVar6 = piVar7;
        }
        if (*(arg1 + 0x9d8) != 0) {
            destroy_workqueue();
        }
    }
    return uVar2;
}


// ===== sym.lt9611uxc_bridge_mode_set.e58709b06554ea617982e3f2e7a32f4b.cfi_jt @ 0x08002430 (size 8) =====

void sym.lt9611uxc_bridge_mode_set.e58709b06554ea617982e3f2e7a32f4b.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    drm_mode_copy(param_1 + 0x8e0,param_3);
    return;
}


// ===== sym.lt9611uxc_connector_mode_valid.e58709b06554ea617982e3f2e7a32f4b.cfi_jt @ 0x08002438 (size 8) =====

ulong sym.lt9611uxc_connector_mode_valid.e58709b06554ea617982e3f2e7a32f4b.cfi_jt(int64_t param_1,int *param_2)

{
    int64_t *piVar1;
    int iVar2;
    int iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0xaca) == '\0') {
        piVar4 = *(param_1 + 0x778);
        do {
            do {
                piVar1 = piVar4;
                if (param_1 + 0x778 == piVar1) {
                    return 0xfffffffe;
                }
                piVar4 = *piVar1;
            } while ((*(param_2 + 0xe) != *(piVar1 + -0x32)) || (param_2[1] != *(piVar1 + -0x3c)));
            iVar2 = drm_mode_vrefresh(param_2);
            iVar3 = drm_mode_vrefresh(piVar1 + -8);
        } while ((iVar2 != iVar3) || (*param_2 != *(piVar1 + -8)));
    }
    else if ((*(param_2 + 0xe) != *(param_1 + 0x80e)) || (param_2[1] != *(param_1 + 0x804))) {
        return 0xfffffffe;
    }
    return 0;
}


// ===== sym.lt9611uxc_bridge_enable.e58709b06554ea617982e3f2e7a32f4b.cfi_jt @ 0x08002440 (size 8) =====

void sym.lt9611uxc_bridge_enable.e58709b06554ea617982e3f2e7a32f4b.cfi_jt(void)

{
    return;
}


// ===== sym.lt9611uxc_bridge_disable.e58709b06554ea617982e3f2e7a32f4b.cfi_jt @ 0x08002448 (size 8) =====

void sym.lt9611uxc_bridge_disable.e58709b06554ea617982e3f2e7a32f4b.cfi_jt(void)

{
    return;
}


// ===== sym.lt9611uxc_bridge_post_disable.e58709b06554ea617982e3f2e7a32f4b.cfi_jt @ 0x08002450 (size 8) =====

void sym.lt9611uxc_bridge_post_disable.e58709b06554ea617982e3f2e7a32f4b.cfi_jt(void)

{
    return;
}


// ===== sym.lt9611uxc_bridge_pre_enable.e58709b06554ea617982e3f2e7a32f4b.cfi_jt @ 0x08002458 (size 8) =====

void sym.lt9611uxc_bridge_pre_enable.e58709b06554ea617982e3f2e7a32f4b.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = gpio_to_desc(*(param_1 + 0x898));
    gpiod_set_raw_value(uVar1,1);
    msleep(0x14);
    uVar1 = gpio_to_desc(*(param_1 + 0x898));
    gpiod_set_raw_value(uVar1,0);
    msleep(0x14);
    uVar1 = gpio_to_desc(*(param_1 + 0x898));
    gpiod_set_raw_value(uVar1,1);
    msleep(300);
    return;
}


// ===== sym.lt9611uxc_bridge_mode_fixup.e58709b06554ea617982e3f2e7a32f4b.cfi_jt @ 0x08002460 (size 8) =====

ulong sym.lt9611uxc_bridge_mode_fixup.e58709b06554ea617982e3f2e7a32f4b.cfi_jt(void)

{
    return 1;
}


// ===== sym.drm_helper_probe_single_connector_modes.cfi_jt @ 0x08002468 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.drm_helper_probe_single_connector_modes.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.drm_connector_cleanup.cfi_jt @ 0x08002470 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.drm_connector_cleanup.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.drm_atomic_helper_connector_reset.cfi_jt @ 0x08002478 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.drm_atomic_helper_connector_reset.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.__typeid__ZTSF20drm_connector_statusP13drm_connectorbE_global_addr @ 0x08002480 (size 8) =====

uint sym.__typeid__ZTSF20drm_connector_statusP13drm_connectorbE_global_addr(int64_t param_1,uint64_t param_2)

{
    int iVar1;
    int iVar2;
    ulong *puVar3;
    char cVar4;
    ushort uVar5;
    ushort uVar6;
    uint16_t uVar7;
    ulong *puVar8;
    ulong *puVar9;
    int iVar10;
    uint uVar11;
    int iVar12;
    ulong *puVar13;
    ulong uVar14;
    int *piVar15;
    int64_t iVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *puVar17;
    int64_t *piVar18;
    int64_t *piVar19;
    ulong *puVar20;
    ulong *puVar21;
    ulong unaff_x30;
    uchar auVar22 [16];
    ulong uStack_f0;
    ulong *puStack_e8;
    ulong uStack_e0;
    ulong *puStack_d8;
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong uStack_68;
    ulong *puStack_60;
    ulong uStack_58;
    uint8_t *puStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar16 = sp_el0;
    iStack_48 = *(iVar16 + 0x5e0);
    *(param_1 + 0x768) = 2;
    if ((param_2 & 1) == 0) {
        uVar11 = 1;
        *(param_1 + 0x768) = 1;
    }
    else {
        mutex_lock(param_1 + -0x30);
        sym.lt9611uxc_ctl_en(param_1 + -0x160);
        puVar13 = param_1 + 0x9c8;
        uVar5 = *(*(param_1 + 0x760) + 2);
        *(param_1 + 0x9c8) = 0;
        *(param_1 + 0x9d0) = 0;
        *(param_1 + 0x9d8) = 0;
        *(param_1 + 0x9e0) = 0;
        *(param_1 + 0x9e8) = 0;
        *(param_1 + 0x9f0) = 0;
        *(param_1 + 0x9f8) = 0;
        *(param_1 + 0xa00) = 0;
        *(param_1 + 0xa08) = 0;
        *(param_1 + 0xa10) = 0;
        *(param_1 + 0xa18) = 0;
        *(param_1 + 0xa20) = 0;
        *(param_1 + 0xa28) = 0;
        *(param_1 + 0xa30) = 0;
        *(param_1 + 0xa38) = 0;
        *(param_1 + 0x9c8) = 0xb0ff;
        *(param_1 + 0xa40) = 0;
        uStack_68 = CONCAT62(0x20000,uVar5);
        puStack_60 = puVar13;
        iVar10 = i2c_transfer(*(*(param_1 + 0x760) + 0x18),&uStack_68,1);
        if (iVar10 < 1) {
            _printk(0x8001311,"lt9611uxc_write_byte");
        }
        iVar16 = *(param_1 + 0x760);
        uVar5 = *(iVar16 + 2);
        uVar6 = *(iVar16 + 2);
        *(param_1 + 0xab8) = 0;
        *(param_1 + 0xac0) = 0;
        *(param_1 + 0xaa8) = 0;
        *(param_1 + 0xab0) = 0;
        *(param_1 + 0xa98) = 0;
        *(param_1 + 0xaa0) = 0;
        *(param_1 + 0xa88) = 0;
        *(param_1 + 0xa90) = 0;
        *(param_1 + 0xa78) = 0;
        *(param_1 + 0xa80) = 0;
        *(param_1 + 0xa68) = 0;
        *(param_1 + 0xa70) = 0;
        *(param_1 + 0xa58) = 0;
        *(param_1 + 0xa60) = 0;
        *(param_1 + 0xa48) = 0;
        *(param_1 + 0xa50) = 0;
        *(param_1 + 0xa38) = 0;
        *(param_1 + 0xa40) = 0;
        *(param_1 + 0xa28) = 0;
        *(param_1 + 0xa30) = 0;
        *(param_1 + 0xa18) = 0;
        *(param_1 + 0xa20) = 0;
        *(param_1 + 0xa08) = 0;
        *(param_1 + 0xa10) = 0;
        *(param_1 + 0x9f8) = 0;
        *(param_1 + 0xa00) = 0;
        *(param_1 + 0x9e8) = 0;
        *(param_1 + 0x9f0) = 0;
        *(param_1 + 0x9d8) = 0;
        *(param_1 + 0x9e0) = 0;
        *puVar13 = 0;
        *(param_1 + 0x9d0) = 0;
        *(param_1 + 0x9c8) = 0x23;
        uStack_68 = CONCAT62(0x10000,uVar5);
        uStack_58 = CONCAT42(0x10001,uVar6);
        puStack_60 = puVar13;
        puStack_50 = param_1 + 0xa48;
        iVar10 = i2c_transfer(*(iVar16 + 0x18),&uStack_68,2);
        if (iVar10 == 2) {
            if ((*(param_1 + 0xa48) >> 1 & 1) != 0) {
                *(param_1 + 0x768) = 1;
            }
        }
        else {
            _printk(0x80006dd,"lt9611uxc_read");
            _printk(0x8000a64,"lt9611uxc_connector_detect");
        }
        sym.lt9611uxc_ctl_disable(param_1 + -0x160);
        mutex_unlock(param_1 + -0x30);
        msleep(0x32);
        uVar11 = *(param_1 + 0x768);
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_48) {
        return uVar11;
    }
    puVar13 = __stack_chk_fail(uVar11);
    *extraout_x18 = sym.lt9611uxc_connector_get_modes;
    pcStack_b8 = sym.lt9611uxc_connector_get_modes;
    iVar16 = sp_el0;
    puVar20 = puVar13 + -6;
    iStack_c8 = *(iVar16 + 0x5e0);
    piVar19 = puVar13 + -0x2c;
    puStack_c0 = &stack0xffffffffffffffc0;
    mutex_lock(puVar20);
    if ((*(puVar13 + 0xace) == '\0') && (*(puVar13 + 0x159) == '\0')) {
        if ((*(puVar13 + 0xacb) == '\0') && (*(puVar13 + 0xacf) != '\0')) {
            *(puVar13 + 0xacf) = 0;
            mutex_unlock(puVar20);
            if (*(puVar13 + 0x159) == '\0') {
                puStack_d8 = NULL;
                uStack_d0 = 0;
                puStack_e8 = NULL;
                uStack_e0 = 0;
                uStack_f0 = 0;
                init_wait_entry(&uStack_f0,0);
                puVar17 = puVar13 + 0x116;
                prepare_to_wait_event(puVar17,&uStack_f0,2);
                if (*(puVar13 + 0x159) == '\0') {
                    iVar16 = 500;
                    do {
                        iVar16 = schedule_timeout(iVar16);
                        prepare_to_wait_event(puVar17,&uStack_f0,2);
                        if (iVar16 == 0 && *(puVar13 + 0x159) != '\0') {
                            iVar16 = 1;
                        }
                    } while ((*(puVar13 + 0x159) == '\0') && (iVar16 != 0));
                    finish_wait(puVar17,&uStack_f0);
                    if (iVar16 == 0) goto code_r0x08006950;
                }
                else {
                    finish_wait(puVar17,&uStack_f0);
                }
            }
            goto code_r0x08006560;
        }
        mutex_unlock(puVar20);
    }
    else {
        *(puVar13 + 0xace) = 0;
        *(puVar13 + 0x159) = 0;
        mutex_unlock(puVar20);
code_r0x08006560:
        if (puVar13[-7] == 0) {
            mutex_lock(puVar20);
            sym.lt9611uxc_ctl_en(piVar19);
            sym.lt9611uxc_edid_en(piVar19);
            puVar13[0x138] = 0;
            puVar13[0x137] = 0;
            puVar17 = puVar13 + 0x139;
            puVar13[0x136] = 0;
            puVar13[0x135] = 0;
            puVar13[0x134] = 0;
            puVar13[0x133] = 0;
            puVar13[0x132] = 0;
            puVar13[0x131] = 0;
            puVar13[0x130] = 0;
            puVar13[0x12f] = 0;
            puVar13[0x12e] = 0;
            puVar13[0x12d] = 0;
            puVar13[300] = 0;
            puVar13[299] = 0;
            puVar13[0x12a] = 0;
            puVar13[0x129] = 0;
            puVar13[0x128] = 0;
            puVar13[0x127] = 0;
            puVar13[0x126] = 0;
            puVar13[0x125] = 0;
            puVar13[0x124] = 0;
            puVar13[0x123] = 0;
            puVar13[0x122] = 0;
            puVar13[0x121] = 0;
            puVar13[0x120] = 0;
            puVar13[0x11f] = 0;
            puVar13[0x11e] = 0;
            puVar13[0x11d] = 0;
            puVar13[0x11c] = 0;
            puVar13[0x11b] = 0;
            puVar13[0x11a] = 0;
            puVar13[0x119] = 0;
            uVar5 = *(puVar13[0xec] + 2);
            puVar13[0x139] = 0;
            puVar13[0x13a] = 0;
            puVar13[0x13b] = 0;
            puVar13[0x13c] = 0;
            puVar13[0x13d] = 0;
            puVar13[0x13e] = 0;
            puVar13[0x13f] = 0;
            puVar13[0x140] = 0;
            puVar13[0x141] = 0;
            puVar13[0x142] = 0;
            puVar13[0x143] = 0;
            puVar13[0x144] = 0;
            puVar13[0x145] = 0;
            puVar13[0x146] = 0;
            puVar13[0x147] = 0;
            *(puVar13 + 0x139) = 0xb0ff;
            puVar13[0x148] = 0;
            uStack_f0 = CONCAT62(0x20000,uVar5);
            puStack_e8 = puVar17;
            iVar10 = i2c_transfer(*(puVar13[0xec] + 0x18),&uStack_f0,1);
            if (iVar10 < 1) {
                _printk(0x8001311,"lt9611uxc_write_byte");
            }
            puVar21 = puVar13 + 0x149;
            uVar7 = *(puVar13[0xec] + 2);
            *puVar17 = 0;
            puVar13[0x13a] = 0;
            puVar13[0x13b] = 0;
            puVar13[0x13c] = 0;
            puVar13[0x13d] = 0;
            puVar13[0x13e] = 0;
            puVar13[0x13f] = 0;
            puVar13[0x140] = 0;
            puVar13[0x141] = 0;
            puVar13[0x142] = 0;
            puVar13[0x143] = 0;
            puVar13[0x144] = 0;
            puVar13[0x145] = 0;
            puVar13[0x146] = 0;
            puVar13[0x147] = 0;
            puVar13[0x148] = 0;
            *(puVar13 + 0x139) = 10;
            uStack_f0._0_4_ = uVar7;
            uStack_f0._0_6_ = CONCAT24(2,uStack_f0);
            uStack_f0 = uStack_f0;
            puStack_e8 = puVar17;
            iVar10 = i2c_transfer(*(puVar13[0xec] + 0x18),&uStack_f0,1);
            if (iVar10 < 1) {
                _printk(0x8001311,"lt9611uxc_write_byte");
            }
            iVar16 = puVar13[0xec];
            uVar5 = *(iVar16 + 2);
            uVar6 = *(iVar16 + 2);
            puVar13[0x157] = 0;
            puVar13[0x158] = 0;
            puVar13[0x155] = 0;
            puVar13[0x156] = 0;
            puVar13[0x153] = 0;
            puVar13[0x154] = 0;
            puVar13[0x151] = 0;
            puVar13[0x152] = 0;
            puVar13[0x14f] = 0;
            puVar13[0x150] = 0;
            puVar13[0x14d] = 0;
            puVar13[0x14e] = 0;
            puVar13[0x14b] = 0;
            puVar13[0x14c] = 0;
            puVar13[0x149] = 0;
            puVar13[0x14a] = 0;
            puVar13[0x147] = 0;
            puVar13[0x148] = 0;
            puVar13[0x145] = 0;
            puVar13[0x146] = 0;
            puVar13[0x143] = 0;
            puVar13[0x144] = 0;
            puVar13[0x141] = 0;
            puVar13[0x142] = 0;
            puVar13[0x13f] = 0;
            puVar13[0x140] = 0;
            puVar13[0x13d] = 0;
            puVar13[0x13e] = 0;
            puVar13[0x13b] = 0;
            puVar13[0x13c] = 0;
            *puVar17 = 0;
            puVar13[0x13a] = 0;
            *(puVar13 + 0x139) = 0xb0;
            uStack_f0 = CONCAT62(0x10000,uVar5);
            uStack_e0._0_6_ = CONCAT42(0x800001,uVar6);
            uStack_e0 = uStack_e0;
            puStack_e8 = puVar17;
            puStack_d8 = puVar21;
            iVar10 = i2c_transfer(*(iVar16 + 0x18),&uStack_f0,2);
            if (iVar10 == 2) {
                puVar13[0x125] = puVar13[0x155];
                puVar13[0x126] = puVar13[0x156];
                puVar13[0x127] = puVar13[0x157];
                puVar13[0x128] = puVar13[0x158];
                puVar13[0x121] = puVar13[0x151];
                puVar13[0x122] = puVar13[0x152];
                puVar13[0x123] = puVar13[0x153];
                puVar13[0x124] = puVar13[0x154];
                puVar13[0x11d] = puVar13[0x14d];
                puVar13[0x11e] = puVar13[0x14e];
                puVar13[0x11f] = puVar13[0x14f];
                puVar13[0x120] = puVar13[0x150];
                puVar13[0x119] = *puVar21;
                puVar13[0x11a] = puVar13[0x14a];
                puVar13[0x11b] = puVar13[0x14b];
                puVar13[0x11c] = puVar13[0x14c];
                cVar4 = *(puVar13 + 0x946);
            }
            else {
                _printk(0x80006dd,"lt9611uxc_read");
                cVar4 = *(puVar13 + 0x946);
            }
            if (cVar4 != '\0') {
                uVar7 = *(puVar13[0xec] + 2);
                *puVar17 = 0;
                puVar13[0x13a] = 0;
                puVar13[0x13b] = 0;
                puVar13[0x13c] = 0;
                puVar13[0x13d] = 0;
                puVar13[0x13e] = 0;
                puVar13[0x13f] = 0;
                puVar13[0x140] = 0;
                puVar13[0x141] = 0;
                puVar13[0x142] = 0;
                puVar13[0x143] = 0;
                puVar13[0x144] = 0;
                puVar13[0x145] = 0;
                puVar13[0x146] = 0;
                puVar13[0x147] = 0;
                puVar13[0x148] = 0;
                *(puVar13 + 0x139) = 0x800a;
                uStack_f0._0_4_ = uVar7;
                uStack_f0._0_6_ = CONCAT24(2,uStack_f0);
                uStack_f0 = uStack_f0;
                puStack_e8 = puVar17;
                iVar10 = i2c_transfer(*(puVar13[0xec] + 0x18),&uStack_f0,1);
                if (iVar10 < 1) {
                    _printk(0x8001311,"lt9611uxc_write_byte");
                }
                iVar16 = puVar13[0xec];
                uVar5 = *(iVar16 + 2);
                uVar6 = *(iVar16 + 2);
                puVar13[0x157] = 0;
                puVar13[0x158] = 0;
                puVar13[0x155] = 0;
                puVar13[0x156] = 0;
                puVar13[0x153] = 0;
                puVar13[0x154] = 0;
                puVar13[0x151] = 0;
                puVar13[0x152] = 0;
                puVar13[0x14f] = 0;
                puVar13[0x150] = 0;
                puVar13[0x14d] = 0;
                puVar13[0x14e] = 0;
                puVar13[0x14b] = 0;
                puVar13[0x14c] = 0;
                puVar13[0x149] = 0;
                puVar13[0x14a] = 0;
                puVar13[0x147] = 0;
                puVar13[0x148] = 0;
                puVar13[0x145] = 0;
                puVar13[0x146] = 0;
                puVar13[0x143] = 0;
                puVar13[0x144] = 0;
                puVar13[0x141] = 0;
                puVar13[0x142] = 0;
                puVar13[0x13f] = 0;
                puVar13[0x140] = 0;
                puVar13[0x13d] = 0;
                puVar13[0x13e] = 0;
                puVar13[0x13b] = 0;
                puVar13[0x13c] = 0;
                *puVar17 = 0;
                puVar13[0x13a] = 0;
                *(puVar13 + 0x139) = 0xb0;
                uStack_f0 = CONCAT62(0x10000,uVar5);
                uStack_e0._0_6_ = CONCAT42(0x800001,uVar6);
                uStack_e0 = uStack_e0;
                puStack_e8 = puVar17;
                puStack_d8 = puVar21;
                iVar10 = i2c_transfer(*(iVar16 + 0x18),&uStack_f0,2);
                if (iVar10 == 2) {
                    puVar13[0x135] = puVar13[0x155];
                    puVar13[0x136] = puVar13[0x156];
                    puVar13[0x137] = puVar13[0x157];
                    puVar13[0x138] = puVar13[0x158];
                    puVar13[0x131] = puVar13[0x151];
                    puVar13[0x132] = puVar13[0x152];
                    puVar13[0x133] = puVar13[0x153];
                    puVar13[0x134] = puVar13[0x154];
                    puVar13[0x12d] = puVar13[0x14d];
                    puVar13[0x12e] = puVar13[0x14e];
                    puVar13[0x12f] = puVar13[0x14f];
                    puVar13[0x130] = puVar13[0x150];
                    puVar13[0x129] = *puVar21;
                    puVar13[0x12a] = puVar13[0x14a];
                    puVar13[299] = puVar13[0x14b];
                    puVar13[300] = puVar13[0x14c];
                }
                else {
                    _printk(0x80006dd,"lt9611uxc_read");
                }
            }
            sym.lt9611uxc_ctl_disable(piVar19);
            mutex_unlock(puVar20);
            uVar14 = drm_do_get_edid(puVar13,sym.lt9611uxc_get_edid_block.e58709b06554ea617982e3f2e7a32f4b.cfi_jt,
                                     piVar19);
            puVar13[-7] = uVar14;
        }
    }
code_r0x08006950:
    if (puVar13[-7] == 0) {
        for (piVar18 = puVar13[0xef]; puVar13 + 0xef != piVar18; piVar18 = *piVar18) {
            iVar16 = drm_mode_duplicate(*puVar13,piVar18 + -8);
            if (iVar16 == 0) {
                _printk(0x800138a,"lt9611uxc_connector_get_modes",*(piVar18 + -0x3c),*(piVar18 + -0x32));
                break;
            }
            drm_mode_probed_add(puVar13,iVar16);
        }
        uVar11 = *(puVar13 + 0xee);
    }
    else {
        drm_connector_update_edid_property(puVar13);
        uVar11 = drm_add_edid_modes(puVar13,puVar13[-7]);
    }
    uStack_f0 = 0;
    if (puVar13[-7] == 0) {
        iVar10 = of_property_read_string(*(*piVar19 + 0x2f0),"lt,preferred-mode",&uStack_f0);
        puVar13 = puVar13 + 0x16;
        puVar20 = *puVar13;
        if (iVar10 == 0) {
            if (puVar13 != puVar20) {
                do {
                    iVar10 = strcmp(puVar20 + 2,uStack_f0);
                    if (iVar10 == 0) {
                        *(puVar20 + -2) = *(puVar20 + -2) | 8;
                    }
                    puVar20 = *puVar20;
                } while (puVar13 != puVar20);
            }
            goto code_r0x08006b1c;
        }
        if (puVar13 == puVar20) {
            puVar17 = NULL;
        }
        else {
            do {
                puVar17 = puVar20;
                puVar20 = *puVar17;
            } while (puVar13 != puVar20);
            puVar17 = puVar17 + -8;
        }
    }
    else {
        puVar13 = puVar13 + 0x16;
        if (puVar13 == *puVar13) goto code_r0x08006b1c;
        puVar20 = *puVar13;
        puVar21 = puVar20 + -8;
        puVar9 = puVar20 + -8;
        while (puVar17 = puVar9, puVar8 = puVar21, puVar13 != puVar20) {
            puVar20 = *puVar20;
            puVar21 = puVar20 + -8;
            *(puVar8 + 0x3e) = *(puVar8 + 0x3e) & 0xf7;
            puVar9 = puVar8;
            if (puVar8 != puVar17) {
                puVar3 = puVar8;
                if (*(puVar8 + 0xe) * *(puVar8 + 4) <= *(puVar17 + 0xe) * *(puVar17 + 4)) {
                    puVar3 = puVar17;
                }
                iVar10 = drm_mode_vrefresh(puVar8);
                iVar12 = drm_mode_vrefresh(puVar3);
                puVar9 = puVar3;
                if (*(puVar8 + 0xe) * *(puVar8 + 4) == *(puVar3 + 0xe) * *(puVar3 + 4)) {
                    iVar1 = 0x3c - iVar10;
                    if (-1 < iVar10 + -0x3c) {
                        iVar1 = iVar10 + -0x3c;
                    }
                    iVar2 = 0x3c - iVar12;
                    if (-1 < iVar12 + -0x3c) {
                        iVar2 = iVar12 + -0x3c;
                    }
                    puVar9 = puVar8;
                    if (0x3c < iVar10 || iVar2 <= iVar1) {
                        puVar9 = puVar3;
                    }
                }
            }
        }
    }
    *(puVar17 + 0x3e) = *(puVar17 + 0x3e) | 8;
code_r0x08006b1c:
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_c8) {
        return uVar11;
    }
    auVar22 = __stack_chk_fail();
    piVar15 = auVar22._8_8_;
    iVar16 = auVar22._0_8_;
    *extraout_x18_00 = 0x8006ca8;
    if (*(iVar16 + 0xaca) == '\0') {
        piVar19 = *(iVar16 + 0x778);
        do {
            do {
                piVar18 = piVar19;
                if (iVar16 + 0x778 == piVar18) {
                    return 0xfffffffe;
                }
                piVar19 = *piVar18;
            } while ((*(piVar15 + 0xe) != *(piVar18 + -0x32)) || (piVar15[1] != *(piVar18 + -0x3c)));
            iVar10 = drm_mode_vrefresh(piVar15);
            iVar12 = drm_mode_vrefresh(piVar18 + -8);
        } while ((iVar10 != iVar12) || (*piVar15 != *(piVar18 + -8)));
    }
    else if ((*(piVar15 + 0xe) != *(iVar16 + 0x80e)) || (piVar15[1] != *(iVar16 + 0x804))) {
        return 0xfffffffe;
    }
    return 0;
}


// ===== sym.lt9611uxc_irq_thread_handler.e58709b06554ea617982e3f2e7a32f4b.cfi_jt @ 0x08002488 (size 8) =====

int64_t sym.lt9611uxc_irq_thread_handler.e58709b06554ea617982e3f2e7a32f4b.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *puVar1;
    uint8_t *puVar2;
    char cVar3;
    char cVar4;
    char cVar5;
    ushort uVar6;
    ushort uVar7;
    int iVar8;
    int64_t iVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    int64_t iVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar13;
    int64_t *piVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    ulong uStack_78;
    ulong *puStack_70;
    ulong uStack_68;
    uint8_t *puStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iVar9 = param_2 + 0x130;
    iStack_58 = *(iVar12 + 0x5e0);
    mutex_lock(iVar9);
    cVar3 = *(param_2 + 0xc2b);
    sym.lt9611uxc_ctl_en(param_2);
    puVar1 = param_2 + 0xb28;
    uVar6 = *(*(param_2 + 0x8c0) + 2);
    *(param_2 + 0xb28) = 0;
    *(param_2 + 0xb30) = 0;
    *(param_2 + 0xb38) = 0;
    *(param_2 + 0xb40) = 0;
    *(param_2 + 0xb48) = 0;
    *(param_2 + 0xb50) = 0;
    *(param_2 + 0xb58) = 0;
    *(param_2 + 0xb60) = 0;
    *(param_2 + 0xb68) = 0;
    *(param_2 + 0xb70) = 0;
    *(param_2 + 0xb78) = 0;
    *(param_2 + 0xb80) = 0;
    *(param_2 + 0xb88) = 0;
    *(param_2 + 0xb90) = 0;
    *(param_2 + 0xb98) = 0;
    *(param_2 + 0xb28) = 0xb0ff;
    *(param_2 + 0xba0) = 0;
    uStack_78 = CONCAT62(0x20000,uVar6);
    puStack_70 = puVar1;
    iVar8 = i2c_transfer(*(*(param_2 + 0x8c0) + 0x18),&uStack_78,1);
    if (iVar8 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar12 = *(param_2 + 0x8c0);
    puVar2 = param_2 + 0xba8;
    uVar6 = *(iVar12 + 2);
    uVar7 = *(iVar12 + 2);
    *(param_2 + 0xc18) = 0;
    *(param_2 + 0xc20) = 0;
    *(param_2 + 0xc08) = 0;
    *(param_2 + 0xc10) = 0;
    *(param_2 + 0xbf8) = 0;
    *(param_2 + 0xc00) = 0;
    *(param_2 + 0xbe8) = 0;
    *(param_2 + 0xbf0) = 0;
    *(param_2 + 0xbd8) = 0;
    *(param_2 + 0xbe0) = 0;
    *(param_2 + 0xbc8) = 0;
    *(param_2 + 0xbd0) = 0;
    *(param_2 + 3000) = 0;
    *(param_2 + 0xbc0) = 0;
    *(param_2 + 0xba8) = 0;
    *(param_2 + 0xbb0) = 0;
    *(param_2 + 0xb98) = 0;
    *(param_2 + 0xba0) = 0;
    *(param_2 + 0xb88) = 0;
    *(param_2 + 0xb90) = 0;
    *(param_2 + 0xb78) = 0;
    *(param_2 + 0xb80) = 0;
    *(param_2 + 0xb68) = 0;
    *(param_2 + 0xb70) = 0;
    *(param_2 + 0xb58) = 0;
    *(param_2 + 0xb60) = 0;
    *(param_2 + 0xb48) = 0;
    *(param_2 + 0xb50) = 0;
    *(param_2 + 0xb38) = 0;
    *(param_2 + 0xb40) = 0;
    *puVar1 = 0;
    *(param_2 + 0xb30) = 0;
    *(param_2 + 0xb28) = 0x22;
    uStack_78 = CONCAT62(0x10000,uVar6);
    uStack_68._0_6_ = CONCAT42(0x10001,uVar7);
    uStack_68 = uStack_68;
    puStack_70 = puVar1;
    puStack_60 = puVar2;
    iVar8 = i2c_transfer(*(iVar12 + 0x18),&uStack_78,2);
    if (iVar8 == 2) {
        uVar11 = *puVar2;
        if (*puVar2 == 0) {
            _printk(0x8000b5b,"lt9611uxc_irq_thread_handler");
        }
        else {
            uVar6 = *(*(param_2 + 0x8c0) + 2);
            *puVar1 = 0;
            *(param_2 + 0xb30) = 0;
            *(param_2 + 0xb38) = 0;
            *(param_2 + 0xb40) = 0;
            *(param_2 + 0xb48) = 0;
            *(param_2 + 0xb50) = 0;
            *(param_2 + 0xb58) = 0;
            *(param_2 + 0xb60) = 0;
            *(param_2 + 0xb68) = 0;
            *(param_2 + 0xb70) = 0;
            *(param_2 + 0xb78) = 0;
            *(param_2 + 0xb80) = 0;
            *(param_2 + 0xb88) = 0;
            *(param_2 + 0xb90) = 0;
            *(param_2 + 0xb98) = 0;
            *(param_2 + 0xba0) = 0;
            *(param_2 + 0xb28) = 0x22;
            uStack_78 = CONCAT62(0x20000,uVar6);
            puStack_70 = puVar1;
            iVar8 = i2c_transfer(*(*(param_2 + 0x8c0) + 0x18),&uStack_78,1);
            if (iVar8 < 1) {
                _printk(0x8001311,"lt9611uxc_write_byte");
            }
            iVar12 = *(param_2 + 0x8c0);
            uVar6 = *(iVar12 + 2);
            uVar7 = *(iVar12 + 2);
            *(param_2 + 0xc18) = 0;
            *(param_2 + 0xc20) = 0;
            *(param_2 + 0xc08) = 0;
            *(param_2 + 0xc10) = 0;
            *(param_2 + 0xbf8) = 0;
            *(param_2 + 0xc00) = 0;
            *(param_2 + 0xbe8) = 0;
            *(param_2 + 0xbf0) = 0;
            *(param_2 + 0xbd8) = 0;
            *(param_2 + 0xbe0) = 0;
            *(param_2 + 0xbc8) = 0;
            *(param_2 + 0xbd0) = 0;
            *(param_2 + 3000) = 0;
            *(param_2 + 0xbc0) = 0;
            *(param_2 + 0xba8) = 0;
            *(param_2 + 0xbb0) = 0;
            *(param_2 + 0xb98) = 0;
            *(param_2 + 0xba0) = 0;
            *(param_2 + 0xb88) = 0;
            *(param_2 + 0xb90) = 0;
            *(param_2 + 0xb78) = 0;
            *(param_2 + 0xb80) = 0;
            *(param_2 + 0xb68) = 0;
            *(param_2 + 0xb70) = 0;
            *(param_2 + 0xb58) = 0;
            *(param_2 + 0xb60) = 0;
            *(param_2 + 0xb48) = 0;
            *(param_2 + 0xb50) = 0;
            *(param_2 + 0xb38) = 0;
            *(param_2 + 0xb40) = 0;
            *puVar1 = 0;
            *(param_2 + 0xb30) = 0;
            *(param_2 + 0xb28) = 0x23;
            uStack_78 = CONCAT62(0x10000,uVar6);
            uStack_68._0_6_ = CONCAT42(0x10001,uVar7);
            uStack_68 = uStack_68;
            puStack_70 = puVar1;
            puStack_60 = puVar2;
            iVar8 = i2c_transfer(*(iVar12 + 0x18),&uStack_78,2);
            if (iVar8 == 2) {
                uVar10 = *puVar2;
            }
            else {
                _printk(0x80006dd,"lt9611uxc_read");
                uVar10 = 0;
            }
            *(param_2 + 0xc2c) = uVar10 >> 1 & 1;
            *(param_2 + 0xc2b) = uVar10 & 1;
            if ((uVar10 >> 1 & 1) == 0) {
                *(param_2 + 0xc2f) = 0;
            }
            else {
                *(param_2 + 0xc2f) = 1;
            }
        }
    }
    else {
        _printk(0x80006dd,"lt9611uxc_read");
        _printk(0x80002e9,"lt9611uxc_irq_thread_handler");
        uVar11 = 0;
    }
    sym.lt9611uxc_ctl_disable(param_2);
    cVar4 = *(param_2 + 0xc2d);
    cVar5 = *(param_2 + 0xc2b);
    if ((cVar4 == '\0') && (cVar5 != '\0')) {
        *(param_2 + 0xc2e) = 1;
        if (cVar3 == '\0') {
code_r0x080058a8:
            *(param_2 + 0xc28) = 1;
            mutex_unlock(iVar9);
            __wake_up(param_2 + 0xa10,3,0,0);
            goto code_r0x080058cc;
        }
    }
    else {
        if (cVar3 == '\0') {
            if (cVar4 != '\0' && cVar5 != '\0') goto code_r0x080058a8;
        }
        else if (cVar4 != '\0' && cVar5 != '\0') goto code_r0x0800589c;
        *(param_2 + 0xc28) = 0;
    }
code_r0x0800589c:
    mutex_unlock(iVar9);
code_r0x080058cc:
    msleep(0x32);
    if (((uVar11 >> 1 & 1) != 0) && (*(param_2 + 0xc2d) != '\0')) {
        queue_work_on(0x20,*(param_2 + 0x9d8),param_2 + 0x9e0);
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_58) {
        auVar15 = __stack_chk_fail();
        iVar12 = auVar15._8_8_;
        iVar9 = auVar15._0_8_;
        *extraout_x18 = sym.lt9611uxc_put_dt_supply;
        if ((iVar9 == 0) || (iVar12 == 0)) {
            iVar9 = _printk(0x8000f44,"lt9611uxc_put_dt_supply",iVar9,iVar12);
        }
        else {
            iVar13 = *(iVar12 + 0x8b8);
            if ((iVar13 != 0) && (uVar11 = *(iVar12 + 0x8b4) - 1, -1 < uVar11)) {
                do {
                    piVar14 = iVar13 + uVar11 * 0x48;
                    iVar9 = 0;
                    if (*piVar14 != 0) {
                        regulator_set_voltage(*piVar14,0,*(iVar13 + uVar11 * 0x48 + 0x2c));
                        iVar9 = regulator_put(*piVar14);
                        *piVar14 = 0;
                    }
                    uVar11 = uVar11 - 1;
                } while (-1 < uVar11);
                iVar13 = *(iVar12 + 0x8b8);
            }
            if (iVar13 != 0) {
                *(iVar12 + 0x8b8) = 0;
            }
            *(iVar12 + 0x8b4) = 0;
        }
        return iVar9;
    }
    return 1;
}


// ===== sym.lt9611uxc_bridge_attach.e58709b06554ea617982e3f2e7a32f4b.cfi_jt @ 0x08002490 (size 8) =====

uint64_t sym.lt9611uxc_bridge_attach.e58709b06554ea617982e3f2e7a32f4b.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    char *pcVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    uint64_t uVar5;
    ulong unaff_x30;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_58 = _str.lt9611;
    uStack_50 = *0x8001610;
    uStack_48 = *0x8001618;
    uStack_40 = *0x8001620;
    if (*(param_1 + 0x70) == 0) {
        __drm_err("Parent encoder object not found");
        uVar5 = 0xffffffed;
    }
    else {
        iVar3 = param_1 + 0x158;
        uVar1 = drm_connector_init(*(param_1 + 0x68),iVar3,obj.lt9611uxc_connector_funcs,0xb);
        if (uVar1 == 0) {
            *(param_1 + 0x708) = reloc.lt9611uxc_connector_get_modes.e58709b06554ea617982e3f2e7a32f4b.cfi_jt;
            uVar1 = drm_connector_register(iVar3);
            if (uVar1 == 0) {
                *(param_1 + 0x700) = 2;
                uVar1 = drm_connector_attach_encoder(iVar3,*(param_1 + 0x70));
                if (uVar1 == 0) {
                    iVar3 = of_find_mipi_dsi_host_by_node(*(param_1 + 0x110));
                    if (iVar3 == 0) {
                        __drm_err("failed to find dsi host\n");
                        uVar5 = 0xfffffdfb;
                    }
                    else {
                        uVar4 = mipi_dsi_device_register_full(iVar3,&uStack_58);
                        if (uVar4 < 0xfffffffffffff001) {
                            *(uVar4 + 0x3b0) = 4;
                            *(uVar4 + 0x3b8) = 0x15;
                            uVar1 = mipi_dsi_attach(uVar4);
                            if (uVar1 < 0) {
                                uVar5 = uVar1;
                                _printk(0x8000a40,"lt9611uxc_bridge_attach");
                                mipi_dsi_device_unregister(uVar4);
                            }
                            else {
                                *(param_1 + 0x118) = uVar4;
                                *(param_1 + 0xc25) = 1;
                                _printk(0x800040f,"lt9611uxc_bridge_attach");
                                uVar5 = 0;
                            }
                        }
                        else {
                            __drm_err("failed to create dsi device\n");
                            uVar5 = uVar4;
                        }
                    }
                    goto code_r0x08006124;
                }
                uVar5 = uVar1;
                pcVar2 = "Failed to link up connector to encoder: %d\n";
            }
            else {
                uVar5 = uVar1;
                pcVar2 = "Failed to register connector: %d\n";
            }
        }
        else {
            uVar5 = uVar1;
            pcVar2 = "Failed to initialize connector: %d\n";
        }
        __drm_err(pcVar2,uVar5);
    }
code_r0x08006124:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar5 & 0xffffffff;
    }
    __stack_chk_fail();
    return 1;
}


// ===== sym.firmware_upgrade_show.e58709b06554ea617982e3f2e7a32f4b.cfi_jt @ 0x08002498 (size 8) =====

int64_t sym.firmware_upgrade_show.e58709b06554ea617982e3f2e7a32f4b.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8000d38,*(*(param_1 + 0x98) + 0xc30));
    return iVar1;
}


// ===== sym.edid_mode_show.e58709b06554ea617982e3f2e7a32f4b.cfi_jt @ 0x080024a0 (size 8) =====

int64_t sym.edid_mode_show.e58709b06554ea617982e3f2e7a32f4b.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    ushort uVar1;
    ushort uVar2;
    uint uVar3;
    int iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_1 + 0x98);
    uVar1 = *(iVar5 + 0x8ec);
    uVar2 = *(iVar5 + 0x8f6);
    uVar3 = drm_mode_vrefresh(iVar5 + 0x8e8);
    iVar4 = scnprintf(param_3,0x1000,"%dx%d@%d\n",uVar1,uVar2,uVar3);
    return iVar4;
}


// ===== sym.lt9611uxc_hpd_work.cfi_jt @ 0x080024a8 (size 8) =====

void sym.lt9611uxc_hpd_work.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    code *pcVar4;
    code *extraout_x8;
    ulong *in_x18;
    ulong *puVar5;
    int64_t unaff_x20;
    ulong *unaff_x21;
    ulong unaff_x30;
    ulong *puStack_a0;
    ulong *puStack_98;
    char *pcStack_90;
    ulong uStack_88;
    ulong uStack_80;
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
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    puVar5 = param_1 + -0x9e0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    if (puVar5 == NULL) goto code_r0x080025d8;
    if (*(param_1 + -0x718) == 0) goto code_r0x080025d8;
    pcVar4 = *(*(param_1 + -0x718) + 0x10);
    if (pcVar4 == NULL) goto code_r0x080025d8;
    unaff_x20 = *(param_1 + -0x880);
    iVar3 = param_1 + -0x880;
    unaff_x21 = *(param_1 + -0x7d8);
    if (pcVar4 != sym.__typeid__ZTSF20drm_connector_statusP13drm_connectorbE_global_addr) goto code_r0x0800260c;
    while( true ) {
        iVar1 = (*pcVar4)(iVar3,1);
        *(puVar5 + 0x41) = iVar1;
        if ((unaff_x21 != iVar1) || (puVar5[0x25] == 0)) {
            if (iVar1 != 1) {
                *(puVar5 + 0x185) = 0;
                kfree(puVar5[0x25]);
                puVar5[0x25] = 0;
            }
            unaff_x21 = &uStack_58;
            scnprintf(&uStack_58,0x20,"name=%s",puVar5[0x35]);
            uVar2 = drm_get_connector_status_name(*(puVar5 + 0x41));
            puVar5 = &uStack_78;
            scnprintf(&uStack_78,0x20,"status=%s",uVar2);
            uStack_88 = 0;
            uStack_80 = 0;
            pcStack_90 = "HOTPLUG=1";
            puStack_a0 = unaff_x21;
            puStack_98 = puVar5;
            kobject_uevent_env(*(*(unaff_x20 + 0x40) + 8),2,&puStack_a0);
        }
code_r0x080025d8:
        iVar3 = sp_el0;
        if (*(iVar3 + 0x5e0) == iStack_38) break;
        iVar3 = __stack_chk_fail();
        pcVar4 = extraout_x8;
code_r0x0800260c:
        __cfi_slowpath_diag(0xbb87a7cbc9e7cc9e,pcVar4,0x8000250);
    }
    return;
}


// ===== sym.edid_mode_store.e58709b06554ea617982e3f2e7a32f4b.cfi_jt @ 0x080024b0 (size 8) =====

uint64_t sym.edid_mode_store.e58709b06554ea617982e3f2e7a32f4b.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    char *pcVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar6;
    int64_t iVar7;
    ulong unaff_x30;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    iVar7 = *(param_1 + 0x98);
    uStack_30 = 0;
    if (iVar7 == 0) {
        _printk(0x8001375,"edid_mode_store");
        param_4 = 0xffffffffffffffea;
    }
    else {
        iVar1 = sscanf(param_3,"%d %d",&uStack_30 + 4,&uStack_30);
        if (((iVar1 == 2) && (uStack_30._4_4_ != 0)) && (uStack_30 != 0)) {
            *(iVar7 + 0x964) = uStack_30 >> 0x20;
            *(iVar7 + 0x96e) = uStack_30;
            *(iVar7 + 0xc2a) = 1;
        }
        else {
            param_4 = 0xffffffffffffffea;
            *(iVar7 + 0xc2a) = 0;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.lt9611uxc_bridge_attach;
    pcStack_58 = sym.lt9611uxc_bridge_attach;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    uStack_88 = _str.lt9611;
    uStack_80 = *0x8001610;
    uStack_78 = *0x8001618;
    uStack_70 = *0x8001620;
    puStack_60 = &stack0xffffffffffffffe0;
    if (*(iVar3 + 0x70) == 0) {
        __drm_err("Parent encoder object not found");
        uVar6 = 0xffffffed;
    }
    else {
        iVar7 = iVar3 + 0x158;
        uVar2 = drm_connector_init(*(iVar3 + 0x68),iVar7,obj.lt9611uxc_connector_funcs,0xb);
        if (uVar2 == 0) {
            *(iVar3 + 0x708) = reloc.lt9611uxc_connector_get_modes.e58709b06554ea617982e3f2e7a32f4b.cfi_jt;
            uVar2 = drm_connector_register(iVar7);
            if (uVar2 == 0) {
                *(iVar3 + 0x700) = 2;
                uVar2 = drm_connector_attach_encoder(iVar7,*(iVar3 + 0x70));
                if (uVar2 == 0) {
                    iVar7 = of_find_mipi_dsi_host_by_node(*(iVar3 + 0x110));
                    if (iVar7 == 0) {
                        __drm_err("failed to find dsi host\n");
                        uVar6 = 0xfffffdfb;
                    }
                    else {
                        uVar5 = mipi_dsi_device_register_full(iVar7,&uStack_88);
                        if (uVar5 < 0xfffffffffffff001) {
                            *(uVar5 + 0x3b0) = 4;
                            *(uVar5 + 0x3b8) = 0x15;
                            uVar2 = mipi_dsi_attach(uVar5);
                            if (uVar2 < 0) {
                                uVar6 = uVar2;
                                _printk(0x8000a40,"lt9611uxc_bridge_attach");
                                mipi_dsi_device_unregister(uVar5);
                            }
                            else {
                                *(iVar3 + 0x118) = uVar5;
                                *(iVar3 + 0xc25) = 1;
                                _printk(0x800040f,"lt9611uxc_bridge_attach");
                                uVar6 = 0;
                            }
                        }
                        else {
                            __drm_err("failed to create dsi device\n");
                            uVar6 = uVar5;
                        }
                    }
                    goto code_r0x08006124;
                }
                uVar6 = uVar2;
                pcVar4 = "Failed to link up connector to encoder: %d\n";
            }
            else {
                uVar6 = uVar2;
                pcVar4 = "Failed to register connector: %d\n";
            }
        }
        else {
            uVar6 = uVar2;
            pcVar4 = "Failed to initialize connector: %d\n";
        }
        __drm_err(pcVar4,uVar6);
    }
code_r0x08006124:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return uVar6 & 0xffffffff;
    }
    __stack_chk_fail();
    return 1;
}


// ===== sym.dump_info_store.e58709b06554ea617982e3f2e7a32f4b.cfi_jt @ 0x080024b8 (size 8) =====

ulong sym.dump_info_store.e58709b06554ea617982e3f2e7a32f4b.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x98);
    if (iVar1 == 0) {
        _printk(0x8001375,"dump_info_store");
        param_4 = 0xffffffffffffffea;
    }
    else {
        print_hex_dump(0x80003fb,0x800115c,0,0x10,1,iVar1 + 0xa28,0x80,0);
        print_hex_dump(0x80003fb,0x800115c,0,0x10,1,iVar1 + 0xaa8,0x80,0);
    }
    return param_4;
}


// ===== sym.firmware_upgrade_store.e58709b06554ea617982e3f2e7a32f4b.cfi_jt @ 0x080024c0 (size 8) =====

ulong sym.firmware_upgrade_store.e58709b06554ea617982e3f2e7a32f4b.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x98);
    if (iVar2 == 0) {
        _printk(0x8001375,"firmware_upgrade_store");
        param_4 = 0xffffffffffffffea;
    }
    else {
        iVar1 = request_firmware_nowait
                          (obj.__this_module,1,"lt9611uxc_fw.bin",*(iVar2 + 0x8c0) + 0x20,0xcc0,iVar2,
                           sym.lt9611uxc_firmware_cb.e58709b06554ea617982e3f2e7a32f4b.cfi_jt);
        if (iVar1 == 0) {
            _printk(0x8000be9,"firmware_upgrade_store");
        }
        else {
            _printk(0x800031b,"firmware_upgrade_store",iVar1);
        }
    }
    return param_4;
}


// ===== sym.lt9611uxc_probe.e58709b06554ea617982e3f2e7a32f4b.cfi_jt @ 0x080024c8 (size 8) =====

int sym.lt9611uxc_probe.e58709b06554ea617982e3f2e7a32f4b.cfi_jt(uint64_t param_1)

{
    int16_t iVar1;
    int16_t iVar2;
    code cVar3;
    ushort uVar4;
    ushort uVar5;
    char cVar6;
    uint uVar7;
    int iVar8;
    int iVar9;
    uint32_t uVar10;
    code *arg1;
    int64_t iVar11;
    int64_t iVar12;
    ulong uVar13;
    int64_t iVar14;
    uint64_t uVar15;
    uint32_t uVar16;
    uint32_t uVar17;
    ulong *in_x18;
    code *unaff_x19;
    code *unaff_x20;
    uint64_t unaff_x21;
    code *unaff_x23;
    code *pcVar18;
    code *pcVar19;
    code *pcVar20;
    code *unaff_x26;
    ulong *puVar21;
    ulong unaff_x30;
    code *pcStack_b0;
    code *pcStack_a8;
    uint uStack_9c;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    code *pcStack_80;
    ulong uStack_78;
    code *pcStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_68 = *(iVar14 + 0x5e0);
    if ((param_1 == 0) || (unaff_x21 = param_1, *(param_1 + 0x310) == 0)) {
        _printk(0x8000306,"lt9611uxc_probe");
        iVar9 = -0x16;
        param_1 = unaff_x21;
        goto code_r0x08003fa8;
    }
    unaff_x19 = *(param_1 + 0x18);
    unaff_x20 = *(*(unaff_x19 + 0x10) + 0x20);
    __cfi_slowpath_diag(0x6871e466cec98751,unaff_x20,0x8000270);
    uVar15 = (*unaff_x20)(unaff_x19);
    if ((uVar15 & 1) == 0) {
        _printk(0x8000c9e,"lt9611uxc_probe");
        iVar9 = -0x13;
        goto code_r0x08003fa8;
    }
    pcVar18 = param_1 + 0x20;
    _printk(0x8000cc0,"lt9611uxc_probe","lt9611uxc_probe");
    arg1 = devm_kmalloc(pcVar18,0xc38,0xdc0);
    unaff_x20 = pcVar18;
    if (arg1 == NULL) {
        iVar9 = -0xc;
        goto code_r0x08003fa8;
    }
    pcVar19 = *(param_1 + 0x310);
    iVar14 = of_graph_get_endpoint_by_regs(pcVar19,0,0);
    if (iVar14 == 0) {
        uVar13 = 0x8000d3c;
code_r0x080040b0:
        _printk(uVar13,"lt9611uxc_parse_dt");
        iVar9 = -0x13;
    }
    else {
        uVar15 = of_graph_get_remote_port_parent();
        *(arg1 + 0x118) = uVar15;
        if (uVar15 == 0) {
            uVar13 = 0x8000e6b;
            goto code_r0x080040b0;
        }
        uVar10 = of_get_named_gpio_flags(pcVar19,"lt,irq-gpio",0,0);
        iVar9 = 0;
        *(arg1 + 0x89c) = uVar10;
        if (0x1ff < uVar10) {
            _printk(0x800083a,"lt9611uxc_parse_dt");
            iVar9 = -0x16;
        }
        uVar10 = of_get_named_gpio_flags(pcVar19,"lt,reset-gpio",0,0);
        *(arg1 + 0x8a0) = uVar10;
        if (0x1ff < uVar10) {
            _printk(0x80005ef,"lt9611uxc_parse_dt");
            iVar9 = -0x16;
        }
        uVar7 = of_get_named_gpio_flags(pcVar19,"lt,hdmi-ps-gpio",0,0);
        *(arg1 + 0x8a4) = uVar7;
        uVar7 = of_get_named_gpio_flags(pcVar19,"lt,hdmi-en-gpio",0,0);
        *(arg1 + 0x8a8) = uVar7;
        uVar7 = of_get_named_gpio_flags(pcVar19,"lt,hdmi-3p3-en",0,0);
        *(arg1 + 0x8ac) = uVar7;
        uVar7 = of_get_named_gpio_flags(pcVar19,"lt,hdmi-1p2-en",0,0);
        *(arg1 + 0x8b0) = uVar7;
        iVar14 = of_find_property(pcVar19,"lt,ac-mode",0);
        pcStack_a8 = arg1 + 0x8d8;
        arg1[0x898] = iVar14 != 0;
        *(arg1 + 0x8d8) = pcStack_a8;
        *(arg1 + 0x8e0) = pcStack_a8;
        uStack_88 = uStack_88._4_4_ << 0x20;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_9c = 0;
        iVar14 = of_get_child_by_name(pcVar19,"lt,customize-modes");
        if ((iVar14 == 0) && (iVar14 = of_parse_phandle(pcVar19,"lt,customize-modes",0), iVar14 == 0)) {
            _printk(0x8000f8e,"lt9611uxc_parse_dt_modes");
        }
        else {
            iVar11 = of_get_next_child(iVar14,0);
            if (iVar11 == 0) {
                unaff_x26 = NULL;
            }
            else {
                unaff_x26 = NULL;
                uVar10 = 0;
                do {
                    pcVar20 = kmem_cache_alloc_trace(_drm_atomic_helper_connector_destroy_state,0xdc0,0x78);
                    if (pcVar20 == NULL) {
                        _printk(0x8000e88,"lt9611uxc_parse_dt_modes");
                    }
                    else {
                        iVar8 = of_property_read_variable_u32_array(iVar11,"lt,mode-h-active",pcVar20 + 4,1,0);
                        pcVar19 = pcVar20;
                        if (iVar8 < 0) {
                            uVar13 = 0x8000473;
                        }
                        else {
                            iVar8 = of_property_read_variable_u32_array
                                              (iVar11,"lt,mode-h-front-porch",&uStack_88,1,0);
                            if (iVar8 < 0) {
                                uVar13 = 0x8001234;
                            }
                            else {
                                iVar8 = of_property_read_variable_u32_array
                                                  (iVar11,"lt,mode-h-pulse-width",&uStack_90 + 4,1,0);
                                if (iVar8 < 0) {
                                    uVar13 = 0x8000cd5;
                                }
                                else {
                                    iVar8 = of_property_read_variable_u32_array
                                                      (iVar11,"lt,mode-h-back-porch",&uStack_90,1,0);
                                    if (iVar8 < 0) {
                                        uVar13 = 0x8001047;
                                    }
                                    else {
                                        iVar12 = of_find_property(iVar11,"lt,mode-h-active-high",0);
                                        iVar8 = of_property_read_variable_u32_array
                                                          (iVar11,"lt,mode-v-active",pcVar20 + 0xe,1,0);
                                        if (iVar8 < 0) {
                                            uVar13 = 0x8000d5d;
                                        }
                                        else {
                                            iVar8 = of_property_read_variable_u32_array
                                                              (iVar11,"lt,mode-v-front-porch",&uStack_98 + 4,1,0);
                                            if (iVar8 < 0) {
                                                uVar13 = 0x800094e;
                                            }
                                            else {
                                                iVar8 = of_property_read_variable_u32_array
                                                                  (iVar11,"lt,mode-v-pulse-width",&uStack_98,1,0);
                                                if (iVar8 < 0) {
                                                    uVar13 = 0x8000757;
                                                }
                                                else {
                                                    iVar8 = of_property_read_variable_u32_array
                                                                      (iVar11,"lt,mode-v-back-porch",&uStack_9c,1,0)
                                                    ;
                                                    if (iVar8 < 0) {
                                                        uVar13 = 0x8000979;
                                                    }
                                                    else {
                                                        unaff_x20 = of_find_property(iVar11,"lt,mode-v-active-high",0)
                                                        ;
                                                        iVar8 = of_property_read_variable_u32_array
                                                                          (iVar11,"lt,mode-clock-in-khz",pcVar20,1,0
                                                                          );
                                                        if (-1 < iVar8) {
                                                            iVar1 = *(pcVar20 + 4) + uStack_88 + uStack_90._4_2_;
                                                            puVar21 = *(arg1 + 0x8e0);
                                                            *(pcVar20 + 6) = *(pcVar20 + 4) + uStack_88;
                                                            *(pcVar20 + 8) = iVar1;
                                                            iVar2 = *(pcVar20 + 0xe) + uStack_98._4_2_ + uStack_98;
                                                            *(pcVar20 + 0x10) = *(pcVar20 + 0xe) + uStack_98._4_2_;
                                                            *(pcVar20 + 10) = iVar1 + uStack_90;
                                                            uVar16 = 1;
                                                            if (iVar12 == 0) {
                                                                uVar16 = 2;
                                                            }
                                                            uVar17 = 8;
                                                            if (unaff_x20 != NULL) {
                                                                uVar17 = 4;
                                                            }
                                                            unaff_x20 = pcVar20 + 0x40;
                                                            uVar10 = uVar16 | uVar10 | uVar17;
                                                            *(pcVar20 + 0x12) = iVar2;
                                                            *(pcVar20 + 0x14) = iVar2 + uStack_9c;
                                                            *(pcVar20 + 0x18) = uVar10;
                                                            uVar15 = __list_add_valid(unaff_x20,puVar21,pcStack_a8);
                                                            if ((uVar15 & 1) != 0) {
                                                                *(arg1 + 0x8e0) = unaff_x20;
                                                                *(pcVar20 + 0x40) = pcStack_a8;
                                                                *(pcVar20 + 0x48) = puVar21;
                                                                *puVar21 = unaff_x20;
                                                            }
                                                            unaff_x26 = unaff_x26 + 1;
                                                            drm_mode_set_name(pcVar20);
                                                            goto code_r0x080042cc;
                                                        }
                                                        uVar13 = 0x8000d15;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        _printk(uVar13,"lt9611uxc_parse_dt_modes",iVar8);
                        kfree(pcVar20);
                    }
code_r0x080042cc:
                    iVar11 = of_get_next_child(iVar14,iVar11);
                } while (iVar11 != 0);
            }
            *(arg1 + 0x8d0) = unaff_x26;
            unaff_x23 = arg1;
        }
        pcStack_b0 = pcVar18;
        if (iVar9 == 0) {
            uStack_90 = uStack_90 & 0xffffffff;
            if (pcVar18 != NULL) {
                uVar13 = *(param_1 + 0x310);
                *(arg1 + 0x8b4) = 0;
                unaff_x19 = of_get_child_by_name(uVar13,"lt,supply-entries");
                if (unaff_x19 == NULL) {
                    uVar13 = 0x80004ab;
                    unaff_x19 = pcVar19;
                }
                else {
                    iVar14 = of_get_next_available_child(unaff_x19,0);
                    if (iVar14 == 0) {
                        *(arg1 + 0x8b4) = 0;
                    }
                    else {
                        unaff_x20 = NULL;
                        do {
                            uVar10 = unaff_x20 + 1;
                            unaff_x20 = uVar10;
                            iVar14 = of_get_next_available_child(unaff_x19,iVar14);
                        } while (iVar14 != 0);
                        *(arg1 + 0x8b4) = uVar10;
                        if (uVar10 != 0) {
                            uVar15 = devm_kmalloc(pcVar18,unaff_x20 * 0x48,0xdc0);
                            *(arg1 + 0x8b8) = uVar15;
                            pcStack_a8 = arg1;
                            if (uVar15 != 0) {
                                unaff_x20 = of_get_next_available_child(unaff_x19,0);
                                if (unaff_x20 != NULL) {
                                    unaff_x26 = NULL;
                                    do {
                                        uStack_88 = 0;
                                        iVar9 = of_property_read_string(unaff_x20,"lt,supply-name",&uStack_88);
                                        if (iVar9 != 0) {
                                            uVar13 = 0x800035d;
code_r0x08004e70:
                                            _printk(uVar13,"lt9611uxc_get_dt_supply",iVar9);
                                            goto code_r0x080050d0;
                                        }
                                        iVar8 = unaff_x26;
                                        strscpy(*(arg1 + 0x8b8) + iVar8 * 0x48 + 8,uStack_88,0x20);
                                        iVar9 = of_property_read_variable_u32_array
                                                          (unaff_x20,"lt,supply-min-voltage",&uStack_90 + 4,1,0);
                                        if (iVar9 < 0) {
                                            uVar13 = 0x80004ca;
                                            goto code_r0x08004e70;
                                        }
                                        *(*(arg1 + 0x8b8) + iVar8 * 0x48 + 0x28) = uStack_90._4_4_;
                                        iVar9 = of_property_read_variable_u32_array
                                                          (unaff_x20,"lt,supply-max-voltage",&uStack_90 + 4,1,0);
                                        if (iVar9 < 0) {
                                            _printk(0x8000598,"lt9611uxc_get_dt_supply",iVar9);
                                            unaff_x23 = arg1;
                                            goto code_r0x080050d0;
                                        }
                                        iVar14 = iVar8 * 0x48;
                                        *(*(arg1 + 0x8b8) + iVar14 + 0x2c) = uStack_90._4_4_;
                                        iVar9 = of_property_read_variable_u32_array
                                                          (unaff_x20,"lt,supply-enable-load",&uStack_90 + 4,1,0);
                                        uVar7 = 0;
                                        if (-1 < iVar9) {
                                            uVar7 = uStack_90._4_4_;
                                        }
                                        *(*(arg1 + 0x8b8) + iVar14 + 0x30) = uVar7;
                                        iVar9 = of_property_read_variable_u32_array
                                                          (unaff_x20,"lt,supply-disable-load",&uStack_90 + 4,1,0);
                                        uVar7 = 0;
                                        if (-1 < iVar9) {
                                            uVar7 = uStack_90._4_4_;
                                        }
                                        *(*(arg1 + 0x8b8) + iVar14 + 0x34) = uVar7;
                                        iVar9 = of_property_read_variable_u32_array
                                                          (unaff_x20,"lt,supply-pre-on-sleep",&uStack_90 + 4,1,0);
                                        uVar7 = 0;
                                        if (-1 < iVar9) {
                                            uVar7 = uStack_90._4_4_;
                                        }
                                        *(*(arg1 + 0x8b8) + iVar14 + 0x38) = uVar7;
                                        iVar9 = of_property_read_variable_u32_array
                                                          (unaff_x20,"lt,supply-pre-off-sleep",&uStack_90 + 4,1,0);
                                        uVar7 = 0;
                                        if (-1 < iVar9) {
                                            uVar7 = uStack_90._4_4_;
                                        }
                                        *(*(arg1 + 0x8b8) + iVar14 + 0x40) = uVar7;
                                        iVar9 = of_property_read_variable_u32_array
                                                          (unaff_x20,"lt,supply-post-on-sleep",&uStack_90 + 4,1,0);
                                        uVar7 = 0;
                                        if (-1 < iVar9) {
                                            uVar7 = uStack_90._4_4_;
                                        }
                                        *(*(arg1 + 0x8b8) + iVar14 + 0x3c) = uVar7;
                                        iVar9 = of_property_read_variable_u32_array
                                                          (unaff_x20,"lt,supply-post-off-sleep",&uStack_90 + 4,1,0);
                                        unaff_x26 = iVar8 + 1;
                                        uVar7 = 0;
                                        if (-1 < iVar9) {
                                            uVar7 = uStack_90._4_4_;
                                        }
                                        *(*(arg1 + 0x8b8) + iVar14 + 0x44) = uVar7;
                                        unaff_x20 = of_get_next_available_child(unaff_x19,unaff_x20);
                                        unaff_x23 = arg1;
                                    } while (unaff_x20 != NULL);
                                }
                                unaff_x20 = *(arg1 + 0x8b8);
                                if (unaff_x20 == NULL) goto code_r0x08004624;
                                uVar10 = *(arg1 + 0x8b4);
                                if (uVar10 < 1) goto code_r0x08004624;
                                unaff_x19 = unaff_x20 + 8;
                                uVar15 = regulator_get(pcVar18,unaff_x19);
                                iVar9 = 0;
                                pcVar19 = NULL;
                                *unaff_x20 = uVar15;
                                pcVar20 = unaff_x20;
                                if (uVar15 == 0) goto code_r0x08004e34;
                                if (0xfffffffffffff000 < uVar15) goto code_r0x08004e34;
                                iVar9 = regulator_set_voltage(uVar15,*(unaff_x20 + 0x28),*(unaff_x20 + 0x2c));
                                if (iVar9 < 0) {
                                    unaff_x23 = NULL;
                                }
                                else {
                                    unaff_x23 = NULL;
                                    iVar14 = 0;
                                    do {
                                        iVar11 = iVar14;
                                        if (uVar10 * 0x48 + -0x48 == iVar11) goto code_r0x08004624;
                                        unaff_x26 = unaff_x20 + iVar11;
                                        unaff_x19 = unaff_x26 + 0x50;
                                        uVar15 = regulator_get(pcVar18,unaff_x19);
                                        *(unaff_x26 + 0x48) = uVar15;
                                        if (uVar15 == 0) goto code_r0x08005068;
                                        if (0xfffffffffffff000 < uVar15) goto code_r0x08005068;
                                        iVar9 = regulator_set_voltage
                                                          (uVar15,*(unaff_x20 + iVar11 + 0x70),
                                                           *(unaff_x20 + iVar11 + 0x74));
                                        unaff_x23 = unaff_x23 + 1;
                                        iVar14 = iVar11 + 0x48;
                                    } while (-1 < iVar9);
                                    unaff_x19 = unaff_x20 + iVar11 + 0x50;
                                }
                                pcVar18 = unaff_x23 & 0xffffffff;
                                _printk(0x8000ade,"lt9611uxc_config_vreg",unaff_x19);
                                goto code_r0x080050b4;
                            }
                            iVar9 = -0xc;
                            uVar13 = 0x8001329;
                            goto code_r0x080040c8;
                        }
                    }
                    uVar13 = 0x8000eb3;
                }
                _printk(uVar13,"lt9611uxc_get_dt_supply");
                goto code_r0x08004624;
            }
            _printk(0x8000f44,"lt9611uxc_get_dt_supply",0,arg1);
            iVar9 = -0x16;
            uVar13 = 0x8001329;
            unaff_x19 = pcVar19;
            goto code_r0x080040c8;
        }
    }
    uVar13 = 0x8000aa8;
    unaff_x19 = pcVar19;
code_r0x080040c8:
    do {
        _printk(uVar13,"lt9611uxc_probe");
code_r0x08003fa8:
        while( true ) {
            iVar14 = sp_el0;
            if (*(iVar14 + 0x5e0) == iStack_68) {
                return iVar9;
            }
            __stack_chk_fail();
code_r0x08005068:
            pcVar19 = unaff_x23 + 1;
            pcVar20 = unaff_x26 + 0x48;
code_r0x08004e34:
            _printk(0x80009a3,"lt9611uxc_config_vreg",unaff_x19,iVar9);
            while( true ) {
                uVar10 = pcVar19 - 1;
                unaff_x23 = uVar10;
                *pcVar20 = 0;
                if (uVar10 < 0) break;
                regulator_set_load(*(unaff_x20 + unaff_x23 * 0x48),0);
                pcVar18 = unaff_x23;
code_r0x080050b4:
                pcVar20 = unaff_x20 + pcVar18 * 0x48;
                regulator_put(*pcVar20);
                pcVar19 = unaff_x23;
            }
            unaff_x23 = pcVar19;
            arg1 = pcStack_a8;
            if (iVar9 != 0) break;
code_r0x08004624:
            *(arg1 + 0x8c0) = param_1;
            *arg1 = pcStack_b0;
            iVar9 = sym.lt9611uxc_gpio_configure(arg1);
            unaff_x23 = pcStack_b0;
            if (iVar9 != 0) {
                _printk(0x80007e9,"lt9611uxc_probe");
                goto code_r0x08004ae8;
            }
            if (*(arg1 + 0x8a8) < 0x200) {
                uVar13 = gpio_to_desc();
                gpiod_set_raw_value(uVar13,1);
                msleep(0x14);
            }
            unaff_x20 = *(arg1 + 0x8b8);
            uVar10 = *(arg1 + 0x8b4);
            unaff_x19 = uVar10;
            if (*(arg1 + 0x8ac) < 0x200) {
                uVar13 = gpio_to_desc();
                gpiod_set_raw_value(uVar13,1);
            }
            if (*(arg1 + 0x8b0) < 0x200) {
                uVar13 = gpio_to_desc();
                gpiod_set_raw_value(uVar13,1);
            }
            if (0 < uVar10) {
                iVar9 = 0;
                pcVar18 = NULL;
                if ((*unaff_x20 != 0) && (*unaff_x20 < 0xfffffffffffff001)) {
                    pcVar18 = NULL;
                    pcVar20 = unaff_x19 + -1;
                    unaff_x26 = 0x3e8;
                    pcVar19 = unaff_x20;
                    do {
                        uVar10 = regulator_is_enabled();
                        unaff_x19 = uVar10;
                        if ((*(pcVar19 + 0x38) != 0) && (uVar10 == 0)) {
                            iVar14 = *(pcVar19 + 0x38) * 1000;
                            usleep_range_state(iVar14,iVar14,2);
                        }
                        iVar9 = regulator_set_load(*pcVar19,*(pcVar19 + 0x30));
                        if (iVar9 < 0) {
                            _printk(0x800067e,"lt9611uxc_enable_vreg",pcVar19 + 8);
                            goto code_r0x08004774;
                        }
                        iVar9 = regulator_enable(*pcVar19);
                        if ((*(pcVar19 + 0x3c) != 0) && (uVar10 == 0)) {
                            iVar14 = *(pcVar19 + 0x3c) * 1000;
                            usleep_range_state(iVar14,iVar14,2);
                        }
                        if (iVar9 < 0) {
                            _printk(0x8000697,"lt9611uxc_enable_vreg",pcVar19 + 8);
                            regulator_set_load(*pcVar19,*(pcVar19 + 0x34));
                            goto code_r0x08004774;
                        }
                        if (pcVar20 == pcVar18) goto code_r0x08004778;
                        pcVar19 = pcVar19 + 0x48;
                        pcVar18 = pcVar18 + 1;
                    } while ((*pcVar19 != 0) && (*pcVar19 < 0xfffffffffffff001));
                }
                _printk(0x8000af6,"lt9611uxc_enable_vreg",unaff_x20 + (pcVar18 & 0xffffffff) * 0x48 + 8,iVar9);
code_r0x08004774:
                if (pcVar18 != 0) {
                    unaff_x19 = pcVar18 + 1;
                    unaff_x20 = unaff_x20 + pcVar18 * 0x48 + -0x48;
                    do {
                        if (*(unaff_x20 + 0x40) != 0) {
                            iVar14 = *(unaff_x20 + 0x40) * 1000;
                            usleep_range_state(iVar14,iVar14,2);
                        }
                        regulator_set_load(*unaff_x20,*(unaff_x20 + 0x34));
                        regulator_disable(*unaff_x20);
                        if (*(unaff_x20 + 0x44) != 0) {
                            iVar14 = *(unaff_x20 + 0x44) * 1000;
                            usleep_range_state(iVar14,iVar14,2);
                        }
                        unaff_x19 = unaff_x19 + -1;
                        unaff_x20 = unaff_x20 + -0x48;
                    } while (1 < unaff_x19);
                }
code_r0x08004778:
                if (iVar9 == 0) goto code_r0x08004780;
                _printk(0x8001348,"lt9611uxc_probe");
                goto code_r0x08004adc;
            }
code_r0x08004780:
            uVar13 = gpio_to_desc(*(arg1 + 0x8a0));
            gpiod_set_raw_value(uVar13,1);
            msleep(0x14);
            uVar13 = gpio_to_desc(*(arg1 + 0x8a0));
            gpiod_set_raw_value(uVar13,0);
            msleep(0x14);
            uVar13 = gpio_to_desc(*(arg1 + 0x8a0));
            gpiod_set_raw_value(uVar13,1);
            msleep(300);
            sym.lt9611uxc_ctl_en(arg1);
            unaff_x19 = arg1 + 0xb28;
            uVar4 = *(*(arg1 + 0x8c0) + 2);
            *(arg1 + 0xb28) = 0;
            *(arg1 + 0xb30) = 0;
            *(arg1 + 0xb38) = 0;
            *(arg1 + 0xb40) = 0;
            *(arg1 + 0xb48) = 0;
            *(arg1 + 0xb50) = 0;
            *(arg1 + 0xb58) = 0;
            *(arg1 + 0xb60) = 0;
            *(arg1 + 0xb68) = 0;
            *(arg1 + 0xb70) = 0;
            *(arg1 + 0xb78) = 0;
            *(arg1 + 0xb80) = 0;
            *(arg1 + 0xb88) = 0;
            *(arg1 + 0xb90) = 0;
            *(arg1 + 0xb98) = 0;
            *(arg1 + 0xb28) = 0x81ff;
            *(arg1 + 0xba0) = 0;
            uStack_88 = CONCAT62(0x20000,uVar4);
            pcStack_80 = unaff_x19;
            iVar9 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_88,1);
            if (iVar9 < 1) {
                _printk(0x8001311,"lt9611uxc_write_byte");
            }
            uVar15 = *(arg1 + 0x8c0);
            uVar4 = *(uVar15 + 2);
            unaff_x20 = 0x10001;
            uVar5 = *(uVar15 + 2);
            *(arg1 + 0xc18) = 0;
            *(arg1 + 0xc20) = 0;
            *(arg1 + 0xc08) = 0;
            *(arg1 + 0xc10) = 0;
            *(arg1 + 0xbf8) = 0;
            *(arg1 + 0xc00) = 0;
            *(arg1 + 0xbe8) = 0;
            *(arg1 + 0xbf0) = 0;
            *(arg1 + 0xbd8) = 0;
            *(arg1 + 0xbe0) = 0;
            *(arg1 + 0xbc8) = 0;
            *(arg1 + 0xbd0) = 0;
            *(arg1 + 3000) = 0;
            *(arg1 + 0xbc0) = 0;
            *(arg1 + 0xba8) = 0;
            *(arg1 + 0xbb0) = 0;
            *(arg1 + 0xb98) = 0;
            *(arg1 + 0xba0) = 0;
            *(arg1 + 0xb88) = 0;
            *(arg1 + 0xb90) = 0;
            *(arg1 + 0xb78) = 0;
            *(arg1 + 0xb80) = 0;
            *(arg1 + 0xb68) = 0;
            *(arg1 + 0xb70) = 0;
            *(arg1 + 0xb58) = 0;
            *(arg1 + 0xb60) = 0;
            *(arg1 + 0xb48) = 0;
            *(arg1 + 0xb50) = 0;
            *(arg1 + 0xb38) = 0;
            *(arg1 + 0xb40) = 0;
            *unaff_x19 = 0;
            *(arg1 + 0xb30) = 0;
            uStack_88 = CONCAT62(0x10000,uVar4);
            uStack_78._0_6_ = CONCAT42(0x10001,uVar5);
            uStack_78 = uStack_78;
            pcStack_80 = unaff_x19;
            pcStack_70 = arg1 + 0xba8;
            iVar9 = i2c_transfer(*(uVar15 + 0x18),&uStack_88,2);
            if (iVar9 != 2) {
code_r0x08004a44:
                _printk(0x80006dd,"lt9611uxc_read");
                _printk(0x8000bcd,"lt9611uxc_read_device_id");
                sym.lt9611uxc_ctl_disable(arg1);
                msleep(0x32);
                _printk(0x8000f25,"lt9611uxc_probe");
                iVar9 = -1;
                goto code_r0x08004adc;
            }
            uVar15 = *(arg1 + 0x8c0);
            uVar4 = *(uVar15 + 2);
            uVar5 = *(uVar15 + 2);
            cVar3 = arg1[0xba8];
            *(arg1 + 0xc18) = 0;
            *(arg1 + 0xc20) = 0;
            *(arg1 + 0xc08) = 0;
            *(arg1 + 0xc10) = 0;
            *(arg1 + 0xbf8) = 0;
            *(arg1 + 0xc00) = 0;
            *(arg1 + 0xbe8) = 0;
            *(arg1 + 0xbf0) = 0;
            *(arg1 + 0xbd8) = 0;
            *(arg1 + 0xbe0) = 0;
            *(arg1 + 0xbc8) = 0;
            *(arg1 + 0xbd0) = 0;
            *(arg1 + 3000) = 0;
            *(arg1 + 0xbc0) = 0;
            *(arg1 + 0xba8) = 0;
            *(arg1 + 0xbb0) = 0;
            *(arg1 + 0xb98) = 0;
            *(arg1 + 0xba0) = 0;
            *(arg1 + 0xb88) = 0;
            *(arg1 + 0xb90) = 0;
            *(arg1 + 0xb78) = 0;
            *(arg1 + 0xb80) = 0;
            *(arg1 + 0xb68) = 0;
            *(arg1 + 0xb70) = 0;
            *(arg1 + 0xb58) = 0;
            *(arg1 + 0xb60) = 0;
            *(arg1 + 0xb48) = 0;
            *(arg1 + 0xb50) = 0;
            *(arg1 + 0xb38) = 0;
            *(arg1 + 0xb40) = 0;
            *unaff_x19 = 0;
            *(arg1 + 0xb30) = 0;
            arg1[0xb28] = 0x1;
            uStack_88 = CONCAT62(0x10000,uVar4);
            uStack_78._0_6_ = CONCAT42(0x10001,uVar5);
            uStack_78 = uStack_78;
            pcStack_80 = unaff_x19;
            pcStack_70 = arg1 + 0xba8;
            iVar9 = i2c_transfer(*(uVar15 + 0x18),&uStack_88,2);
            if (iVar9 != 2) goto code_r0x08004a44;
            _printk(0x80010d6,"lt9611uxc_read_device_id",CONCAT11(cVar3,arg1[0xba8]));
            sym.lt9611uxc_ctl_disable(arg1);
            msleep(0x32);
            *(param_1 + 0xb8) = arg1;
            iVar9 = sysfs_create_group(pcStack_b0,obj.lt9611uxc_sysfs_attr_grp);
            unaff_x19 = arg1;
            if (iVar9 != 0) {
                _printk(0x8000c51,"lt9611uxc_sysfs_init","lt9611uxc_sysfs_init",iVar9);
                uVar13 = 0x8000b76;
                goto code_r0x08004ed0;
            }
            cVar6 = sym.lt9611uxc_get_version(arg1);
            if (cVar6 == '\0') {
                iVar9 = request_firmware_nowait
                                  (obj.__this_module,1,"lt9611uxc_fw.bin",pcStack_b0,0xcc0,arg1,
                                   sym.lt9611uxc_firmware_cb.e58709b06554ea617982e3f2e7a32f4b.cfi_jt);
                if (iVar9 != 0) {
                    _printk(0x800031b,"lt9611uxc_probe",iVar9);
                    goto code_r0x08004adc;
                }
            }
            else {
                _printk(0x800101c,"lt9611uxc_probe");
                __mutex_init(arg1 + 0x130,"&pdata->lock",obj.lt9611uxc_probe.__key);
                __init_waitqueue_head(arg1 + 0xa10,"&pdata->edid_wq",obj.lt9611uxc_probe.__key);
                *(arg1 + 0x90) = *(param_1 + 0x310);
                *(arg1 + 0xb0) = reloc.lt9611uxc_bridge_attach.e58709b06554ea617982e3f2e7a32f4b.cfi_jt;
                drm_bridge_add(arg1 + 8);
                uVar15 = alloc_workqueue(0x8000499,0xe000a,1,"lt9611uxc_wk");
                *(arg1 + 0x9d8) = uVar15;
                unaff_x20 = arg1;
                if (uVar15 == 0) {
                    _printk(0x8001214,"lt9611uxc_probe");
                    iVar9 = 0;
                    goto code_r0x08004adc;
                }
                *(arg1 + 0x9e0) = 0xfffffffe0;
                *(arg1 + 0x9e8) = arg1 + 0x9e8;
                *(arg1 + 0x9f0) = arg1 + 0x9e8;
                *(arg1 + 0x9f8) = sym.lt9611uxc_hpd_work.cfi_jt;
                gpio_to_desc(*(arg1 + 0x89c));
                uVar13 = gpiod_to_irq();
                *(arg1 + 0x894) = uVar13;
                iVar9 = request_threaded_irq
                                  (uVar13,0,sym.lt9611uxc_irq_thread_handler.e58709b06554ea617982e3f2e7a32f4b.cfi_jt,
                                   0x2002,"lt9611uxc_irq",arg1);
                if (iVar9 != 0) {
                    uVar13 = 0x80010b9;
code_r0x08004ed0:
                    _printk(uVar13,"lt9611uxc_probe");
code_r0x08004adc:
                    sym.lt9611uxc_gpio_configure(arg1);
code_r0x08004ae8:
                    sym.lt9611uxc_put_dt_supply(pcStack_b0,arg1);
                }
            }
        }
code_r0x080050d0:
        if (*(pcStack_a8 + 0x8b8) != 0) {
            *(pcStack_a8 + 0x8b8) = 0;
            *(pcStack_a8 + 0x8b4) = 0;
        }
        uVar13 = 0x8001329;
    } while( true );
}


// ===== sym.lt9611uxc_hpd_work @ 0x080024d0 (size 360) =====

void sym.lt9611uxc_hpd_work(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    code *pcVar4;
    code *extraout_x8;
    ulong *in_x18;
    ulong *puVar5;
    int64_t unaff_x20;
    ulong *unaff_x21;
    ulong unaff_x30;
    ulong *puStack_a0;
    ulong *puStack_98;
    char *pcStack_90;
    ulong uStack_88;
    ulong uStack_80;
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
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    puVar5 = arg1 + -0x9e0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    if (puVar5 == NULL) goto code_r0x080025d8;
    if (*(arg1 + -0x718) == 0) goto code_r0x080025d8;
    pcVar4 = *(*(arg1 + -0x718) + 0x10);
    if (pcVar4 == NULL) goto code_r0x080025d8;
    unaff_x20 = *(arg1 + -0x880);
    iVar3 = arg1 + -0x880;
    unaff_x21 = *(arg1 + -0x7d8);
    if (pcVar4 != sym.__typeid__ZTSF20drm_connector_statusP13drm_connectorbE_global_addr) goto code_r0x0800260c;
    while( true ) {
        iVar1 = (*pcVar4)(iVar3,1);
        *(puVar5 + 0x41) = iVar1;
        if ((unaff_x21 != iVar1) || (puVar5[0x25] == 0)) {
            if (iVar1 != 1) {
                *(puVar5 + 0x185) = 0;
                kfree(puVar5[0x25]);
                puVar5[0x25] = 0;
            }
            unaff_x21 = &uStack_58;
            scnprintf(&uStack_58,0x20,"name=%s",puVar5[0x35]);
            uVar2 = drm_get_connector_status_name(*(puVar5 + 0x41));
            puVar5 = &uStack_78;
            scnprintf(&uStack_78,0x20,"status=%s",uVar2);
            uStack_88 = 0;
            uStack_80 = 0;
            pcStack_90 = "HOTPLUG=1";
            puStack_a0 = unaff_x21;
            puStack_98 = puVar5;
            kobject_uevent_env(*(*(unaff_x20 + 0x40) + 8),2,&puStack_a0);
        }
code_r0x080025d8:
        iVar3 = sp_el0;
        if (*(iVar3 + 0x5e0) == iStack_38) break;
        iVar3 = __stack_chk_fail();
        pcVar4 = extraout_x8;
code_r0x0800260c:
        __cfi_slowpath_diag(0xbb87a7cbc9e7cc9e,pcVar4,0x8000250);
    }
    return;
}


// ===== sym.lt9611uxc_config @ 0x08002638 (size 268) =====

uint64_t sym.lt9611uxc_config(int64_t arg1)

{
    int16_t iVar1;
    int16_t iVar2;
    char *pcVar3;
    ulong uVar4;
    ulong uVar5;
    code cVar6;
    uint16_t uVar7;
    ushort uVar8;
    ushort uVar9;
    bool bVar10;
    char cVar11;
    int iVar12;
    uint uVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    int iVar16;
    uint64_t uVar17;
    int64_t iVar18;
    int64_t iVar19;
    uint64_t uVar20;
    ulong *puVar21;
    code *pcVar22;
    code *pcVar23;
    code *arg1_00;
    ulong uVar24;
    uint64_t *puVar25;
    uint64_t uVar26;
    uchar uVar27;
    uchar uVar28;
    uint32_t uVar29;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    ulong *extraout_x18_08;
    ulong *extraout_x18_09;
    code *pcVar30;
    ulong *puVar31;
    int64_t iVar32;
    uint64_t uVar33;
    char *pcVar34;
    code *pcVar35;
    code *pcVar36;
    char *pcVar37;
    code *pcVar38;
    code *pcVar39;
    code *unaff_x26;
    ulong unaff_x27;
    ulong *puVar40;
    ulong unaff_x28;
    ulong *puVar41;
    ulong unaff_x30;
    uchar auVar42 [16];
    code *pcStack_590;
    code *pcStack_588;
    uint uStack_57c;
    ulong uStack_578;
    ulong uStack_570;
    ulong uStack_568;
    code *pcStack_560;
    ulong uStack_558;
    code *pcStack_550;
    int64_t iStack_548;
    ulong ***pppuStack_540;
    code *pcStack_538;
    ulong *puStack_530;
    ulong *puStack_528;
    code *pcStack_520;
    int64_t iStack_518;
    char *pcStack_510;
    code *pcStack_508;
    uint64_t uStack_500;
    code *pcStack_4f8;
    ulong uStack_4f0;
    code *pcStack_4e8;
    ulong uStack_4d8;
    code *pcStack_4d0;
    int64_t iStack_4c8;
    ulong ***pppuStack_4c0;
    code *pcStack_4b8;
    ulong *puStack_4b0;
    uint64_t *puStack_4a0;
    int64_t iStack_498;
    ulong uStack_488;
    ulong *puStack_480;
    int64_t iStack_478;
    ulong ***pppuStack_470;
    code *pcStack_468;
    ulong *puStack_460;
    ulong *puStack_458;
    code *pcStack_450;
    uint64_t uStack_448;
    char *pcStack_440;
    code *pcStack_438;
    int64_t iStack_430;
    ulong *puStack_428;
    uint64_t uStack_420;
    uint64_t uStack_418;
    uint32_t uStack_40c;
    uint64_t uStack_408;
    uint32_t uStack_3fc;
    ulong uStack_3f8;
    ulong *puStack_3f0;
    ulong uStack_3e8;
    ulong *puStack_3e0;
    ulong uStack_3d8;
    ulong uStack_3d0;
    int64_t iStack_3c8;
    ulong ***pppuStack_3c0;
    code *pcStack_3b8;
    ulong uStack_3b0;
    ulong uStack_3a8;
    code *pcStack_3a0;
    uint64_t uStack_398;
    ulong *puStack_390;
    char *pcStack_388;
    ulong uStack_380;
    ulong *puStack_378;
    ulong uStack_370;
    int64_t iStack_368;
    ulong uStack_358;
    ulong *puStack_350;
    int64_t iStack_348;
    ulong ***pppuStack_340;
    code *pcStack_338;
    uint64_t uStack_330;
    ulong uStack_328;
    ulong *puStack_320;
    int64_t iStack_318;
    ulong uStack_308;
    ulong *puStack_300;
    int64_t iStack_2f8;
    ulong ***pppuStack_2f0;
    code *pcStack_2e8;
    uint64_t uStack_2e0;
    uchar auStack_2d0 [16];
    ulong uStack_2b8;
    ulong uStack_2b0;
    ulong uStack_2a8;
    ulong uStack_2a0;
    ulong uStack_298;
    ulong *puStack_290;
    ulong uStack_288;
    code *pcStack_280;
    int64_t iStack_278;
    ulong ***pppuStack_270;
    code *pcStack_268;
    ulong uStack_210;
    ulong *puStack_208;
    uint uStack_200;
    ushort uStack_1fc;
    uchar uStack_1fa;
    uchar uStack_1f9;
    uchar uStack_1f8;
    uchar uStack_1f7;
    uchar uStack_1f6;
    uchar uStack_1f5;
    uint uStack_1f4;
    ushort uStack_1f0;
    int64_t iStack_1e8;
    ulong ***pppuStack_1e0;
    code *pcStack_1d8;
    ulong uStack_1d0;
    ulong *puStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    char *pcStack_1a8;
    ulong uStack_1a0;
    int64_t iStack_198;
    ulong uStack_188;
    ulong *puStack_180;
    int64_t iStack_178;
    uchar ***pppuStack_170;
    code *pcStack_168;
    ulong uStack_160;
    ulong *puStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong *puStack_130;
    int64_t iStack_128;
    ulong uStack_118;
    ulong *puStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    code *pcStack_f8;
    ulong *puStack_f0;
    uint64_t uStack_e0;
    int64_t iStack_d8;
    ulong uStack_c8;
    ulong *puStack_c0;
    ulong uStack_b8;
    uint8_t *puStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    char *pcStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    ulong uStack_68;
    ulong *puStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar19 = sp_el0;
    iVar32 = 0;
    iStack_58 = *(iVar19 + 0x5e0);
    puVar21 = arg1 + 0xb28;
    do {
        uVar9 = *(iVar32 + 0x8001730);
        uVar7 = *(*(arg1 + 0x8c0) + 2);
        *puVar21 = 0;
        *(arg1 + 0xb30) = 0;
        *(arg1 + 0xb38) = 0;
        *(arg1 + 0xb40) = 0;
        *(arg1 + 0xb48) = 0;
        *(arg1 + 0xb50) = 0;
        *(arg1 + 0xb58) = 0;
        *(arg1 + 0xb60) = 0;
        *(arg1 + 0xb68) = 0;
        *(arg1 + 0xb70) = 0;
        *(arg1 + 0xb78) = 0;
        *(arg1 + 0xb80) = 0;
        *(arg1 + 0xb88) = 0;
        *(arg1 + 0xb90) = 0;
        *(arg1 + 0xb98) = 0;
        *(arg1 + 0xba0) = 0;
        *(arg1 + 0xb28) = uVar9;
        uStack_68 = CONCAT24(2,uVar7);
        puStack_60 = puVar21;
        uVar17 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_68,1);
        if (uVar17 < 1) {
            uVar17 = _printk(0x8001311,"lt9611uxc_write_byte");
        }
        iVar32 = iVar32 + 2;
    } while (iVar32 != 0xe);
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_58) {
        return uVar17;
    }
    iVar18 = __stack_chk_fail();
    *extraout_x18 = sym.lt9611uxc_get_version;
    pcStack_98 = sym.lt9611uxc_get_version;
    pcStack_88 = "lt9611uxc_write_byte";
    uStack_80 = 0x8001311;
    iVar19 = sp_el0;
    iStack_a8 = *(iVar19 + 0x5e0);
    puVar40 = iVar18 + 0xb28;
    uVar9 = *(*(iVar18 + 0x8c0) + 2);
    *(iVar18 + 0xb28) = 0;
    *(iVar18 + 0xb30) = 0;
    *(iVar18 + 0xb38) = 0;
    *(iVar18 + 0xb40) = 0;
    *(iVar18 + 0xb48) = 0;
    *(iVar18 + 0xb50) = 0;
    *(iVar18 + 0xb58) = 0;
    *(iVar18 + 0xb60) = 0;
    *(iVar18 + 0xb68) = 0;
    *(iVar18 + 0xb70) = 0;
    *(iVar18 + 0xb78) = 0;
    *(iVar18 + 0xb80) = 0;
    *(iVar18 + 0xb88) = 0;
    *(iVar18 + 0xb90) = 0;
    *(iVar18 + 0xb98) = 0;
    *(iVar18 + 0xb28) = 0x80ff;
    *(iVar18 + 0xba0) = 0;
    uStack_c8 = CONCAT62(0x20000,uVar9);
    puStack_c0 = puVar40;
    puStack_a0 = &stack0xffffffffffffffb0;
    iStack_90 = iVar32;
    iStack_78 = arg1;
    iVar12 = i2c_transfer(*(*(iVar18 + 0x8c0) + 0x18),&uStack_c8,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar9 = *(*(iVar18 + 0x8c0) + 2);
    *puVar40 = 0;
    *(iVar18 + 0xb30) = 0;
    *(iVar18 + 0xb38) = 0;
    *(iVar18 + 0xb40) = 0;
    *(iVar18 + 0xb48) = 0;
    *(iVar18 + 0xb50) = 0;
    *(iVar18 + 0xb58) = 0;
    *(iVar18 + 0xb60) = 0;
    *(iVar18 + 0xb68) = 0;
    *(iVar18 + 0xb70) = 0;
    *(iVar18 + 0xb78) = 0;
    *(iVar18 + 0xb80) = 0;
    *(iVar18 + 0xb88) = 0;
    *(iVar18 + 0xb90) = 0;
    *(iVar18 + 0xb98) = 0;
    *(iVar18 + 0xba0) = 0;
    *(iVar18 + 0xb28) = 0x1ee;
    uStack_c8 = CONCAT62(0x20000,uVar9);
    puStack_c0 = puVar40;
    iVar12 = i2c_transfer(*(*(iVar18 + 0x8c0) + 0x18),&uStack_c8,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar9 = *(*(iVar18 + 0x8c0) + 2);
    *puVar40 = 0;
    *(iVar18 + 0xb30) = 0;
    *(iVar18 + 0xb38) = 0;
    *(iVar18 + 0xb40) = 0;
    *(iVar18 + 0xb48) = 0;
    *(iVar18 + 0xb50) = 0;
    *(iVar18 + 0xb58) = 0;
    *(iVar18 + 0xb60) = 0;
    *(iVar18 + 0xb68) = 0;
    *(iVar18 + 0xb70) = 0;
    *(iVar18 + 0xb78) = 0;
    *(iVar18 + 0xb80) = 0;
    *(iVar18 + 0xb88) = 0;
    *(iVar18 + 0xb90) = 0;
    *(iVar18 + 0xb98) = 0;
    *(iVar18 + 0xba0) = 0;
    *(iVar18 + 0xb28) = 0xb0ff;
    uStack_c8 = CONCAT62(0x20000,uVar9);
    puStack_c0 = puVar40;
    iVar12 = i2c_transfer(*(*(iVar18 + 0x8c0) + 0x18),&uStack_c8,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar32 = *(iVar18 + 0x8c0);
    uVar9 = *(iVar32 + 2);
    uVar8 = *(iVar32 + 2);
    *(iVar18 + 0xc18) = 0;
    *(iVar18 + 0xc20) = 0;
    *(iVar18 + 0xc08) = 0;
    *(iVar18 + 0xc10) = 0;
    *(iVar18 + 0xbf8) = 0;
    *(iVar18 + 0xc00) = 0;
    *(iVar18 + 0xbe8) = 0;
    *(iVar18 + 0xbf0) = 0;
    *(iVar18 + 0xbd8) = 0;
    *(iVar18 + 0xbe0) = 0;
    *(iVar18 + 0xbc8) = 0;
    *(iVar18 + 0xbd0) = 0;
    *(iVar18 + 3000) = 0;
    *(iVar18 + 0xbc0) = 0;
    *(iVar18 + 0xba8) = 0;
    *(iVar18 + 0xbb0) = 0;
    *(iVar18 + 0xb98) = 0;
    *(iVar18 + 0xba0) = 0;
    *(iVar18 + 0xb88) = 0;
    *(iVar18 + 0xb90) = 0;
    *(iVar18 + 0xb78) = 0;
    *(iVar18 + 0xb80) = 0;
    *(iVar18 + 0xb68) = 0;
    *(iVar18 + 0xb70) = 0;
    *(iVar18 + 0xb58) = 0;
    *(iVar18 + 0xb60) = 0;
    *(iVar18 + 0xb48) = 0;
    *(iVar18 + 0xb50) = 0;
    *(iVar18 + 0xb38) = 0;
    *(iVar18 + 0xb40) = 0;
    *puVar40 = 0;
    *(iVar18 + 0xb30) = 0;
    *(iVar18 + 0xb28) = 0x21;
    uStack_c8 = CONCAT62(0x10000,uVar9);
    uStack_b8 = CONCAT42(0x10001,uVar8);
    puStack_c0 = puVar40;
    puStack_b0 = iVar18 + 0xba8;
    iVar12 = i2c_transfer(*(iVar32 + 0x18),&uStack_c8,2);
    if (iVar12 == 2) {
        uVar17 = *(iVar18 + 0xba8);
        _printk(0x80011e8,"lt9611uxc_get_version",uVar17);
    }
    else {
        _printk(0x80006dd,"lt9611uxc_read");
        _printk(0x8000396,"lt9611uxc_get_version");
        uVar17 = 0;
    }
    uVar9 = *(*(iVar18 + 0x8c0) + 2);
    *puVar40 = 0;
    *(iVar18 + 0xb30) = 0;
    *(iVar18 + 0xb38) = 0;
    *(iVar18 + 0xb40) = 0;
    *(iVar18 + 0xb48) = 0;
    *(iVar18 + 0xb50) = 0;
    *(iVar18 + 0xb58) = 0;
    *(iVar18 + 0xb60) = 0;
    *(iVar18 + 0xb68) = 0;
    *(iVar18 + 0xb70) = 0;
    *(iVar18 + 0xb78) = 0;
    *(iVar18 + 0xb80) = 0;
    *(iVar18 + 0xb88) = 0;
    *(iVar18 + 0xb90) = 0;
    *(iVar18 + 0xb98) = 0;
    *(iVar18 + 0xba0) = 0;
    *(iVar18 + 0xb28) = 0x80ff;
    uStack_c8 = CONCAT62(0x20000,uVar9);
    puStack_c0 = puVar40;
    iVar12 = i2c_transfer(*(*(iVar18 + 0x8c0) + 0x18),&uStack_c8,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar9 = *(*(iVar18 + 0x8c0) + 2);
    *puVar40 = 0;
    *(iVar18 + 0xb30) = 0;
    *(iVar18 + 0xb38) = 0;
    *(iVar18 + 0xb40) = 0;
    *(iVar18 + 0xb48) = 0;
    *(iVar18 + 0xb50) = 0;
    *(iVar18 + 0xb58) = 0;
    *(iVar18 + 0xb60) = 0;
    *(iVar18 + 0xb68) = 0;
    *(iVar18 + 0xb70) = 0;
    *(iVar18 + 0xb78) = 0;
    *(iVar18 + 0xb80) = 0;
    *(iVar18 + 0xb88) = 0;
    *(iVar18 + 0xb90) = 0;
    *(iVar18 + 0xb98) = 0;
    *(iVar18 + 0xba0) = 0;
    *(iVar18 + 0xb28) = 0xee;
    uStack_c8 = CONCAT62(0x20000,uVar9);
    puStack_c0 = puVar40;
    iVar12 = i2c_transfer(*(*(iVar18 + 0x8c0) + 0x18),&uStack_c8,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    msleep(0x32);
    iVar32 = sp_el0;
    if (*(iVar32 + 0x5e0) == iStack_a8) {
        return uVar17;
    }
    iVar19 = __stack_chk_fail();
    *extraout_x18_00 = sym.lt9611uxc_flash_write_en;
    pcStack_f8 = sym.lt9611uxc_flash_write_en;
    iVar32 = sp_el0;
    iStack_108 = *(iVar32 + 0x5e0);
    puVar31 = iVar19 + 0xb28;
    uVar9 = *(*(iVar19 + 0x8c0) + 2);
    *(iVar19 + 0xb28) = 0;
    *(iVar19 + 0xb30) = 0;
    *(iVar19 + 0xb38) = 0;
    *(iVar19 + 0xb40) = 0;
    *(iVar19 + 0xb48) = 0;
    *(iVar19 + 0xb50) = 0;
    *(iVar19 + 0xb58) = 0;
    *(iVar19 + 0xb60) = 0;
    *(iVar19 + 0xb68) = 0;
    *(iVar19 + 0xb70) = 0;
    *(iVar19 + 0xb78) = 0;
    *(iVar19 + 0xb80) = 0;
    *(iVar19 + 0xb88) = 0;
    *(iVar19 + 0xb90) = 0;
    *(iVar19 + 0xb98) = 0;
    *(iVar19 + 0xb28) = 0x81ff;
    *(iVar19 + 0xba0) = 0;
    uStack_118 = CONCAT62(0x20000,uVar9);
    puStack_110 = puVar31;
    ppuStack_100 = &puStack_a0;
    puStack_f0 = puVar40;
    uStack_e0 = uVar17;
    iStack_d8 = iVar18;
    iVar12 = i2c_transfer(*(*(iVar19 + 0x8c0) + 0x18),&uStack_118,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar7 = *(*(iVar19 + 0x8c0) + 2);
    *puVar31 = 0;
    *(iVar19 + 0xb30) = 0;
    *(iVar19 + 0xb38) = 0;
    *(iVar19 + 0xb40) = 0;
    *(iVar19 + 0xb48) = 0;
    *(iVar19 + 0xb50) = 0;
    *(iVar19 + 0xb58) = 0;
    *(iVar19 + 0xb60) = 0;
    *(iVar19 + 0xb68) = 0;
    *(iVar19 + 0xb70) = 0;
    *(iVar19 + 0xb78) = 0;
    *(iVar19 + 0xb80) = 0;
    *(iVar19 + 0xb88) = 0;
    *(iVar19 + 0xb90) = 0;
    *(iVar19 + 0xb98) = 0;
    *(iVar19 + 0xba0) = 0;
    *(iVar19 + 0xb28) = 0xbf08;
    uStack_118._0_4_ = uVar7;
    uStack_118._0_6_ = CONCAT24(2,uStack_118);
    uStack_118 = uStack_118;
    puStack_110 = puVar31;
    iVar12 = i2c_transfer(*(*(iVar19 + 0x8c0) + 0x18),&uStack_118,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    msleep(0x14);
    uVar9 = *(*(iVar19 + 0x8c0) + 2);
    *puVar31 = 0;
    *(iVar19 + 0xb30) = 0;
    *(iVar19 + 0xb38) = 0;
    *(iVar19 + 0xb40) = 0;
    *(iVar19 + 0xb48) = 0;
    *(iVar19 + 0xb50) = 0;
    *(iVar19 + 0xb58) = 0;
    *(iVar19 + 0xb60) = 0;
    *(iVar19 + 0xb68) = 0;
    *(iVar19 + 0xb70) = 0;
    *(iVar19 + 0xb78) = 0;
    *(iVar19 + 0xb80) = 0;
    *(iVar19 + 0xb88) = 0;
    *(iVar19 + 0xb90) = 0;
    *(iVar19 + 0xb98) = 0;
    *(iVar19 + 0xba0) = 0;
    *(iVar19 + 0xb28) = 0xff08;
    uStack_118 = CONCAT62(0x20000,uVar9);
    puStack_110 = puVar31;
    iVar12 = i2c_transfer(*(*(iVar19 + 0x8c0) + 0x18),&uStack_118,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    msleep(0x14);
    uVar9 = *(*(iVar19 + 0x8c0) + 2);
    *puVar31 = 0;
    *(iVar19 + 0xb30) = 0;
    *(iVar19 + 0xb38) = 0;
    *(iVar19 + 0xb40) = 0;
    *(iVar19 + 0xb48) = 0;
    *(iVar19 + 0xb50) = 0;
    *(iVar19 + 0xb58) = 0;
    *(iVar19 + 0xb60) = 0;
    *(iVar19 + 0xb68) = 0;
    *(iVar19 + 0xb70) = 0;
    *(iVar19 + 0xb78) = 0;
    *(iVar19 + 0xb80) = 0;
    *(iVar19 + 0xb88) = 0;
    *(iVar19 + 0xb90) = 0;
    *(iVar19 + 0xb98) = 0;
    *(iVar19 + 0xba0) = 0;
    *(iVar19 + 0xb28) = 0x80ff;
    uStack_118 = CONCAT62(0x20000,uVar9);
    puStack_110 = puVar31;
    iVar12 = i2c_transfer(*(*(iVar19 + 0x8c0) + 0x18),&uStack_118,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar7 = *(*(iVar19 + 0x8c0) + 2);
    *puVar31 = 0;
    *(iVar19 + 0xb30) = 0;
    *(iVar19 + 0xb38) = 0;
    *(iVar19 + 0xb40) = 0;
    *(iVar19 + 0xb48) = 0;
    *(iVar19 + 0xb50) = 0;
    *(iVar19 + 0xb58) = 0;
    *(iVar19 + 0xb60) = 0;
    *(iVar19 + 0xb68) = 0;
    *(iVar19 + 0xb70) = 0;
    *(iVar19 + 0xb78) = 0;
    *(iVar19 + 0xb80) = 0;
    *(iVar19 + 0xb88) = 0;
    *(iVar19 + 0xb90) = 0;
    *(iVar19 + 0xb98) = 0;
    *(iVar19 + 0xba0) = 0;
    *(iVar19 + 0xb28) = 0x45a;
    uStack_118._0_4_ = uVar7;
    uStack_118._0_6_ = CONCAT24(2,uStack_118);
    uStack_118 = uStack_118;
    puStack_110 = puVar31;
    iVar12 = i2c_transfer(*(*(iVar19 + 0x8c0) + 0x18),&uStack_118,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar7 = *(*(iVar19 + 0x8c0) + 2);
    *puVar31 = 0;
    *(iVar19 + 0xb30) = 0;
    *(iVar19 + 0xb38) = 0;
    *(iVar19 + 0xb40) = 0;
    *(iVar19 + 0xb48) = 0;
    *(iVar19 + 0xb50) = 0;
    *(iVar19 + 0xb58) = 0;
    *(iVar19 + 0xb60) = 0;
    *(iVar19 + 0xb68) = 0;
    *(iVar19 + 0xb70) = 0;
    *(iVar19 + 0xb78) = 0;
    *(iVar19 + 0xb80) = 0;
    *(iVar19 + 0xb88) = 0;
    *(iVar19 + 0xb90) = 0;
    *(iVar19 + 0xb98) = 0;
    *(iVar19 + 0xba0) = 0;
    *(iVar19 + 0xb28) = 0x5a;
    uStack_118._0_4_ = uVar7;
    uStack_118._0_6_ = CONCAT24(2,uStack_118);
    uStack_118 = uStack_118;
    puStack_110 = puVar31;
    uVar17 = i2c_transfer(*(*(iVar19 + 0x8c0) + 0x18),&uStack_118,1);
    if (uVar17 < 1) {
        uVar17 = _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar32 = sp_el0;
    if (*(iVar32 + 0x5e0) == iStack_108) {
        return uVar17;
    }
    iVar18 = __stack_chk_fail();
    *extraout_x18_01 = sym.lt9611uxc_block_erase;
    pcStack_168 = sym.lt9611uxc_block_erase;
    uStack_160 = 2;
    uStack_148 = 0x8001730;
    uStack_140 = 0x200000000;
    uStack_138 = 2;
    iVar32 = sp_el0;
    iStack_178 = *(iVar32 + 0x5e0);
    pppuStack_170 = &ppuStack_100;
    puStack_150 = puVar21;
    puStack_130 = puVar31;
    iStack_128 = iVar19;
    _printk(0x80005d5,"lt9611uxc_block_erase");
    iVar32 = 0;
    puVar21 = iVar18 + 0xb28;
    do {
        uVar9 = *(iVar32 + 0x800173e);
        uVar7 = *(*(iVar18 + 0x8c0) + 2);
        *puVar21 = 0;
        *(iVar18 + 0xb30) = 0;
        *(iVar18 + 0xb38) = 0;
        *(iVar18 + 0xb40) = 0;
        *(iVar18 + 0xb48) = 0;
        *(iVar18 + 0xb50) = 0;
        *(iVar18 + 0xb58) = 0;
        *(iVar18 + 0xb60) = 0;
        *(iVar18 + 0xb68) = 0;
        *(iVar18 + 0xb70) = 0;
        *(iVar18 + 0xb78) = 0;
        *(iVar18 + 0xb80) = 0;
        *(iVar18 + 0xb88) = 0;
        *(iVar18 + 0xb90) = 0;
        *(iVar18 + 0xb98) = 0;
        *(iVar18 + 0xba0) = 0;
        *(iVar18 + 0xb28) = uVar9;
        uStack_188 = CONCAT24(2,uVar7);
        puStack_180 = puVar21;
        iVar12 = i2c_transfer(*(*(iVar18 + 0x8c0) + 0x18),&uStack_188,1);
        if (iVar12 < 1) {
            _printk(0x8001311,"lt9611uxc_write_byte");
        }
        iVar32 = iVar32 + 2;
    } while (iVar32 != 0x12);
    uVar17 = msleep(3000);
    iVar32 = sp_el0;
    if (*(iVar32 + 0x5e0) == iStack_178) {
        return uVar17;
    }
    auVar42 = __stack_chk_fail();
    iVar19 = auVar42._0_8_;
    *extraout_x18_02 = sym.lt9611uxc_flash_read_addr_set;
    pcStack_1d8 = sym.lt9611uxc_flash_read_addr_set;
    uStack_1d0 = 2;
    uStack_1b8 = 0x800173e;
    pcStack_1a8 = "lt9611uxc_write_byte";
    uStack_1a0 = 0x8001311;
    iVar32 = sp_el0;
    iStack_1e8 = *(iVar32 + 0x5e0);
    uStack_1f9 = auVar42[10];
    uStack_200 = 0xa05a5f5e;
    uStack_1f8 = 0x5c;
    uStack_1fc = 0x805a;
    uStack_1f6 = 0x5d;
    uStack_1f7 = auVar42[9];
    uStack_1f4 = 0x805a905a;
    uVar28 = 0x5f;
    uStack_1f0 = 0x2158;
    uVar27 = 0x5e;
    uStack_1fa = 0x5b;
    uStack_1f5 = auVar42[8];
    uStack_1b0 = 0x12;
    iVar32 = 0;
    pppuStack_1e0 = &pppuStack_170;
    puStack_1c0 = puVar21;
    iStack_198 = iVar18;
    while( true ) {
        uVar26 = 1;
        uVar7 = *(*(iVar19 + 0x8c0) + 2);
        *(iVar19 + 0xb28) = 0;
        *(iVar19 + 0xb30) = 0;
        *(iVar19 + 0xb38) = 0;
        *(iVar19 + 0xb40) = 0;
        *(iVar19 + 0xb48) = 0;
        *(iVar19 + 0xb50) = 0;
        *(iVar19 + 0xb58) = 0;
        *(iVar19 + 0xb60) = 0;
        *(iVar19 + 0xb68) = 0;
        *(iVar19 + 0xb70) = 0;
        *(iVar19 + 0xb78) = 0;
        *(iVar19 + 0xb80) = 0;
        *(iVar19 + 0xb88) = 0;
        *(iVar19 + 0xb90) = 0;
        *(iVar19 + 0xb98) = 0;
        *(iVar19 + 0xba0) = 0;
        *(iVar19 + 0xb28) = uVar27;
        *(iVar19 + 0xb29) = uVar28;
        uStack_210 = CONCAT24(2,uVar7);
        puStack_208 = iVar19 + 0xb28;
        uVar17 = i2c_transfer(*(*(iVar19 + 0x8c0) + 0x18),&uStack_210);
        if (uVar17 < 1) {
            uVar17 = _printk(0x8001311,"lt9611uxc_write_byte");
        }
        if (iVar32 == 0x10) break;
        uVar27 = *(&uStack_200 + iVar32 + 2);
        uVar28 = *(&uStack_200 + iVar32 + 3);
        iVar32 = iVar32 + 2;
    }
    iVar32 = sp_el0;
    if (*(iVar32 + 0x5e0) == iStack_1e8) {
        return uVar17;
    }
    auVar42 = __stack_chk_fail();
    iVar19 = auVar42._0_8_;
    *extraout_x18_03 = sym.lt9611uxc_fw_read_back;
    pcStack_268 = sym.lt9611uxc_fw_read_back;
    iVar32 = sp_el0;
    iStack_278 = *(iVar32 + 0x5e0);
    uVar17 = uVar26 & 0xffffffff;
    bVar10 = (uVar26 & 0x1f) != 0;
    puVar21 = iVar19 + 0xb28;
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    uVar33 = bVar10;
    uVar9 = *(*(iVar19 + 0x8c0) + 2);
    *(iVar19 + 0xb28) = 0;
    *(iVar19 + 0xb30) = 0;
    *(iVar19 + 0xb38) = 0;
    *(iVar19 + 0xb40) = 0;
    *(iVar19 + 0xb48) = 0;
    *(iVar19 + 0xb50) = 0;
    *(iVar19 + 0xb58) = 0;
    *(iVar19 + 0xb60) = 0;
    *(iVar19 + 0xb68) = 0;
    *(iVar19 + 0xb70) = 0;
    *(iVar19 + 0xb78) = 0;
    *(iVar19 + 0xb80) = 0;
    *(iVar19 + 0xb88) = 0;
    *(iVar19 + 0xb90) = 0;
    *(iVar19 + 0xb98) = 0;
    *(iVar19 + 0xba0) = 0;
    *(iVar19 + 0xb28) = 0x80ff;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_298 = CONCAT62(0x20000,uVar9);
    puStack_290 = puVar21;
    pppuStack_270 = &pppuStack_1e0;
    iVar12 = i2c_transfer(*(*(iVar19 + 0x8c0) + 0x18),&uStack_298,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    pcVar34 = 0x2;
    uVar7 = *(*(iVar19 + 0x8c0) + 2);
    *puVar21 = 0;
    *(iVar19 + 0xb30) = 0;
    *(iVar19 + 0xb38) = 0;
    *(iVar19 + 0xb40) = 0;
    *(iVar19 + 0xb48) = 0;
    *(iVar19 + 0xb50) = 0;
    *(iVar19 + 0xb58) = 0;
    *(iVar19 + 0xb60) = 0;
    *(iVar19 + 0xb68) = 0;
    *(iVar19 + 0xb70) = 0;
    *(iVar19 + 0xb78) = 0;
    *(iVar19 + 0xb80) = 0;
    *(iVar19 + 0xb88) = 0;
    *(iVar19 + 0xb90) = 0;
    *(iVar19 + 0xb98) = 0;
    *(iVar19 + 0xba0) = 0;
    *(iVar19 + 0xb28) = 0x1ee;
    uStack_298._0_4_ = uVar7;
    uStack_298._0_6_ = CONCAT24(2,uStack_298);
    uStack_298 = uStack_298;
    puStack_290 = puVar21;
    iVar12 = i2c_transfer(*(*(iVar19 + 0x8c0) + 0x18),&uStack_298,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar7 = *(*(iVar19 + 0x8c0) + 2);
    *puVar21 = 0;
    *(iVar19 + 0xb30) = 0;
    *(iVar19 + 0xb38) = 0;
    *(iVar19 + 0xb40) = 0;
    *(iVar19 + 0xb48) = 0;
    *(iVar19 + 0xb50) = 0;
    *(iVar19 + 0xb58) = 0;
    *(iVar19 + 0xb60) = 0;
    *(iVar19 + 0xb68) = 0;
    *(iVar19 + 0xb70) = 0;
    *(iVar19 + 0xb78) = 0;
    *(iVar19 + 0xb80) = 0;
    *(iVar19 + 0xb88) = 0;
    *(iVar19 + 0xb90) = 0;
    *(iVar19 + 0xb98) = 0;
    *(iVar19 + 0xba0) = 0;
    *(iVar19 + 0xb28) = 0x845a;
    uStack_298._0_4_ = uVar7;
    uStack_298._0_6_ = CONCAT24(2,uStack_298);
    uStack_298 = uStack_298;
    puStack_290 = puVar21;
    iVar12 = i2c_transfer(*(*(iVar19 + 0x8c0) + 0x18),&uStack_298,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar7 = *(*(iVar19 + 0x8c0) + 2);
    *puVar21 = 0;
    *(iVar19 + 0xb30) = 0;
    *(iVar19 + 0xb38) = 0;
    *(iVar19 + 0xb40) = 0;
    *(iVar19 + 0xb48) = 0;
    *(iVar19 + 0xb50) = 0;
    *(iVar19 + 0xb58) = 0;
    *(iVar19 + 0xb60) = 0;
    *(iVar19 + 0xb68) = 0;
    *(iVar19 + 0xb70) = 0;
    *(iVar19 + 0xb78) = 0;
    *(iVar19 + 0xb80) = 0;
    *(iVar19 + 0xb88) = 0;
    *(iVar19 + 0xb90) = 0;
    *(iVar19 + 0xb98) = 0;
    *(iVar19 + 0xba0) = 0;
    *(iVar19 + 0xb28) = 0x805a;
    uStack_298._0_4_ = uVar7;
    uStack_298._0_6_ = CONCAT24(2,uStack_298);
    uStack_298 = uStack_298;
    puStack_290 = puVar21;
    uVar20 = i2c_transfer(*(*(iVar19 + 0x8c0) + 0x18),&uStack_298,1);
    if (uVar20 < 1) {
        uVar20 = _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar16 = uVar26;
    iVar12 = iVar16 + 0x1f;
    if (-1 < iVar16) {
        iVar12 = iVar16;
    }
    uVar14 = bVar10 + (iVar12 >> 5);
    uVar26 = uVar14;
    if (0 < uVar14) {
        uVar17 = 0;
        unaff_x26 = iVar19 + 0xba8;
        unaff_x27 = 1;
        unaff_x28 = 0x200001;
        uVar33 = 0x5f;
        pcVar34 = "lt9611uxc_read";
        do {
            uStack_2a8 = 0;
            uStack_2a0 = 0;
            uStack_2b8 = 0;
            uStack_2b0 = 0;
            sym.lt9611uxc_flash_read_addr_set(iVar19,uVar17 & 0xffffffff);
            iVar32 = *(iVar19 + 0x8c0);
            uVar9 = *(iVar32 + 2);
            uVar8 = *(iVar32 + 2);
            *(iVar19 + 0xc18) = 0;
            *(iVar19 + 0xc20) = 0;
            *(iVar19 + 0xc08) = 0;
            *(iVar19 + 0xc10) = 0;
            *(iVar19 + 0xbf8) = 0;
            *(iVar19 + 0xc00) = 0;
            *(iVar19 + 0xbe8) = 0;
            *(iVar19 + 0xbf0) = 0;
            *(iVar19 + 0xbd8) = 0;
            *(iVar19 + 0xbe0) = 0;
            *(iVar19 + 0xbc8) = 0;
            *(iVar19 + 0xbd0) = 0;
            *(iVar19 + 3000) = 0;
            *(iVar19 + 0xbc0) = 0;
            *(iVar19 + 0xba8) = 0;
            *(iVar19 + 0xbb0) = 0;
            *(iVar19 + 0xb98) = 0;
            *(iVar19 + 0xba0) = 0;
            *(iVar19 + 0xb88) = 0;
            *(iVar19 + 0xb90) = 0;
            *(iVar19 + 0xb78) = 0;
            *(iVar19 + 0xb80) = 0;
            *(iVar19 + 0xb68) = 0;
            *(iVar19 + 0xb70) = 0;
            *(iVar19 + 0xb58) = 0;
            *(iVar19 + 0xb60) = 0;
            *(iVar19 + 0xb48) = 0;
            *(iVar19 + 0xb50) = 0;
            *(iVar19 + 0xb38) = 0;
            *(iVar19 + 0xb40) = 0;
            *puVar21 = 0;
            *(iVar19 + 0xb30) = 0;
            *(iVar19 + 0xb28) = 0x5f;
            uStack_298 = CONCAT62(0x10000,uVar9);
            uStack_288 = CONCAT42(0x200001,uVar8);
            puStack_290 = puVar21;
            pcStack_280 = unaff_x26;
            uVar20 = i2c_transfer(*(iVar32 + 0x18),&uStack_298,2);
            if (uVar20 == 2) {
                uStack_2b8 = *unaff_x26;
                uStack_2b0 = *(iVar19 + 0xbb0);
                uStack_2a8 = *(iVar19 + 3000);
                uStack_2a0 = *(iVar19 + 0xbc0);
            }
            else {
                uVar20 = _printk(0x80006dd,"lt9611uxc_read");
            }
            puVar40 = auVar42._8_8_ + uVar17;
            uVar17 = uVar17 + 0x20;
            uVar14 = uVar26 - 1;
            uVar26 = uVar14;
            *puVar40 = uStack_2b8;
            puVar40[1] = uStack_2b0;
            puVar40[2] = uStack_2a8;
            puVar40[3] = uStack_2a0;
        } while (uVar14 != 0);
        uVar26 = 0;
    }
    iVar32 = sp_el0;
    if (*(iVar32 + 0x5e0) == iStack_278) {
        return uVar20;
    }
    iVar19 = __stack_chk_fail();
    *extraout_x18_04 = sym.lt9611uxc_flash_write_config;
    pcStack_2e8 = sym.lt9611uxc_flash_write_config;
    iVar32 = sp_el0;
    iStack_2f8 = *(iVar32 + 0x5e0);
    pppuStack_2f0 = &pppuStack_270;
    uStack_2e0 = uVar17;
    auStack_2d0 = auVar42;
    sym.lt9611uxc_flash_write_en(iVar19);
    puVar40 = iVar19 + 0xb28;
    uVar9 = *(*(iVar19 + 0x8c0) + 2);
    *(iVar19 + 0xb28) = 0;
    *(iVar19 + 0xb30) = 0;
    *(iVar19 + 0xb38) = 0;
    *(iVar19 + 0xb40) = 0;
    *(iVar19 + 0xb48) = 0;
    *(iVar19 + 0xb50) = 0;
    *(iVar19 + 0xb58) = 0;
    *(iVar19 + 0xb60) = 0;
    *(iVar19 + 0xb68) = 0;
    *(iVar19 + 0xb70) = 0;
    *(iVar19 + 0xb78) = 0;
    *(iVar19 + 0xb80) = 0;
    *(iVar19 + 0xb88) = 0;
    *(iVar19 + 0xb90) = 0;
    *(iVar19 + 0xb98) = 0;
    *(iVar19 + 0xb28) = 0x80ff;
    *(iVar19 + 0xba0) = 0;
    uStack_308 = CONCAT62(0x20000,uVar9);
    puStack_300 = puVar40;
    iVar12 = i2c_transfer(*(*(iVar19 + 0x8c0) + 0x18),&uStack_308,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar7 = *(*(iVar19 + 0x8c0) + 2);
    *puVar40 = 0;
    *(iVar19 + 0xb30) = 0;
    *(iVar19 + 0xb38) = 0;
    *(iVar19 + 0xb40) = 0;
    *(iVar19 + 0xb48) = 0;
    *(iVar19 + 0xb50) = 0;
    *(iVar19 + 0xb58) = 0;
    *(iVar19 + 0xb60) = 0;
    *(iVar19 + 0xb68) = 0;
    *(iVar19 + 0xb70) = 0;
    *(iVar19 + 0xb78) = 0;
    *(iVar19 + 0xb80) = 0;
    *(iVar19 + 0xb88) = 0;
    *(iVar19 + 0xb90) = 0;
    *(iVar19 + 0xb98) = 0;
    *(iVar19 + 0xba0) = 0;
    *(iVar19 + 0xb28) = 0xdf5e;
    uStack_308._0_4_ = uVar7;
    uStack_308._0_6_ = CONCAT24(2,uStack_308);
    uStack_308 = uStack_308;
    puStack_300 = puVar40;
    iVar12 = i2c_transfer(*(*(iVar19 + 0x8c0) + 0x18),&uStack_308,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar7 = *(*(iVar19 + 0x8c0) + 2);
    *puVar40 = 0;
    *(iVar19 + 0xb30) = 0;
    *(iVar19 + 0xb38) = 0;
    *(iVar19 + 0xb40) = 0;
    *(iVar19 + 0xb48) = 0;
    *(iVar19 + 0xb50) = 0;
    *(iVar19 + 0xb58) = 0;
    *(iVar19 + 0xb60) = 0;
    *(iVar19 + 0xb68) = 0;
    *(iVar19 + 0xb70) = 0;
    *(iVar19 + 0xb78) = 0;
    *(iVar19 + 0xb80) = 0;
    *(iVar19 + 0xb88) = 0;
    *(iVar19 + 0xb90) = 0;
    *(iVar19 + 0xb98) = 0;
    *(iVar19 + 0xba0) = 0;
    *(iVar19 + 0xb28) = 0x205a;
    uStack_308._0_4_ = uVar7;
    uStack_308._0_6_ = CONCAT24(2,uStack_308);
    uStack_308 = uStack_308;
    puStack_300 = puVar40;
    iVar12 = i2c_transfer(*(*(iVar19 + 0x8c0) + 0x18),&uStack_308,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar7 = *(*(iVar19 + 0x8c0) + 2);
    *puVar40 = 0;
    *(iVar19 + 0xb30) = 0;
    *(iVar19 + 0xb38) = 0;
    *(iVar19 + 0xb40) = 0;
    *(iVar19 + 0xb48) = 0;
    *(iVar19 + 0xb50) = 0;
    *(iVar19 + 0xb58) = 0;
    *(iVar19 + 0xb60) = 0;
    *(iVar19 + 0xb68) = 0;
    *(iVar19 + 0xb70) = 0;
    *(iVar19 + 0xb78) = 0;
    *(iVar19 + 0xb80) = 0;
    *(iVar19 + 0xb88) = 0;
    *(iVar19 + 0xb90) = 0;
    *(iVar19 + 0xb98) = 0;
    *(iVar19 + 0xba0) = 0;
    *(iVar19 + 0xb28) = 0x5a;
    uStack_308._0_4_ = uVar7;
    uStack_308._0_6_ = CONCAT24(2,uStack_308);
    uStack_308 = uStack_308;
    puStack_300 = puVar40;
    iVar12 = i2c_transfer(*(*(iVar19 + 0x8c0) + 0x18),&uStack_308,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar7 = *(*(iVar19 + 0x8c0) + 2);
    *puVar40 = 0;
    *(iVar19 + 0xb30) = 0;
    *(iVar19 + 0xb38) = 0;
    *(iVar19 + 0xb40) = 0;
    *(iVar19 + 0xb48) = 0;
    *(iVar19 + 0xb50) = 0;
    *(iVar19 + 0xb58) = 0;
    *(iVar19 + 0xb60) = 0;
    *(iVar19 + 0xb68) = 0;
    *(iVar19 + 0xb70) = 0;
    *(iVar19 + 0xb78) = 0;
    *(iVar19 + 0xb80) = 0;
    *(iVar19 + 0xb88) = 0;
    *(iVar19 + 0xb90) = 0;
    *(iVar19 + 0xb98) = 0;
    *(iVar19 + 0xba0) = 0;
    *(iVar19 + 0xb28) = 0x2158;
    uStack_308._0_4_ = uVar7;
    uStack_308._0_6_ = CONCAT24(2,uStack_308);
    uStack_308 = uStack_308;
    puStack_300 = puVar40;
    uVar17 = i2c_transfer(*(*(iVar19 + 0x8c0) + 0x18),&uStack_308,1);
    if (uVar17 < 1) {
        uVar17 = _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar32 = sp_el0;
    if (*(iVar32 + 0x5e0) == iStack_2f8) {
        return uVar17;
    }
    auVar42 = __stack_chk_fail();
    iVar18 = auVar42._0_8_;
    *extraout_x18_05 = sym.lt9611uxc_flash_write_addr_set;
    pcStack_338 = sym.lt9611uxc_flash_write_addr_set;
    uStack_328 = 2;
    iVar32 = sp_el0;
    iStack_348 = *(iVar32 + 0x5e0);
    puVar31 = iVar18 + 0xb28;
    uVar9 = *(*(iVar18 + 0x8c0) + 2);
    *(iVar18 + 0xb28) = 0;
    *(iVar18 + 0xb30) = 0;
    *(iVar18 + 0xb38) = 0;
    *(iVar18 + 0xb40) = 0;
    *(iVar18 + 0xb48) = 0;
    *(iVar18 + 0xb50) = 0;
    *(iVar18 + 0xb58) = 0;
    *(iVar18 + 0xb60) = 0;
    *(iVar18 + 0xb68) = 0;
    *(iVar18 + 0xb70) = 0;
    *(iVar18 + 0xb78) = 0;
    *(iVar18 + 0xb80) = 0;
    *(iVar18 + 0xb88) = 0;
    *(iVar18 + 0xb28) = 0x5b;
    *(iVar18 + 0xb90) = 0;
    *(iVar18 + 0xb98) = 0;
    *(iVar18 + 0xba0) = 0;
    *(iVar18 + 0xb29) = auVar42[10];
    uStack_358 = CONCAT62(0x20000,uVar9);
    puStack_350 = puVar31;
    pppuStack_340 = &pppuStack_2f0;
    uStack_330 = uVar33;
    puStack_320 = puVar40;
    iStack_318 = iVar19;
    iVar12 = i2c_transfer(*(*(iVar18 + 0x8c0) + 0x18),&uStack_358,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar7 = *(*(iVar18 + 0x8c0) + 2);
    *puVar31 = 0;
    *(iVar18 + 0xb30) = 0;
    *(iVar18 + 0xb38) = 0;
    *(iVar18 + 0xb40) = 0;
    *(iVar18 + 0xb48) = 0;
    *(iVar18 + 0xb50) = 0;
    *(iVar18 + 0xb58) = 0;
    *(iVar18 + 0xb60) = 0;
    *(iVar18 + 0xb68) = 0;
    *(iVar18 + 0xb70) = 0;
    *(iVar18 + 0xb78) = 0;
    *(iVar18 + 0xb80) = 0;
    *(iVar18 + 0xb88) = 0;
    *(iVar18 + 0xb90) = 0;
    *(iVar18 + 0xb98) = 0;
    *(iVar18 + 0xba0) = 0;
    *(iVar18 + 0xb28) = 0x5c;
    *(iVar18 + 0xb29) = auVar42[9];
    uStack_358._0_4_ = uVar7;
    uStack_358._0_6_ = CONCAT24(2,uStack_358);
    uStack_358 = uStack_358;
    puStack_350 = puVar31;
    iVar12 = i2c_transfer(*(*(iVar18 + 0x8c0) + 0x18),&uStack_358,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar7 = *(*(iVar18 + 0x8c0) + 2);
    *puVar31 = 0;
    *(iVar18 + 0xb30) = 0;
    *(iVar18 + 0xb38) = 0;
    *(iVar18 + 0xb40) = 0;
    *(iVar18 + 0xb48) = 0;
    *(iVar18 + 0xb50) = 0;
    *(iVar18 + 0xb58) = 0;
    *(iVar18 + 0xb60) = 0;
    *(iVar18 + 0xb68) = 0;
    *(iVar18 + 0xb70) = 0;
    *(iVar18 + 0xb78) = 0;
    *(iVar18 + 0xb80) = 0;
    *(iVar18 + 0xb88) = 0;
    *(iVar18 + 0xb90) = 0;
    *(iVar18 + 0xb98) = 0;
    *(iVar18 + 0xba0) = 0;
    *(iVar18 + 0xb28) = 0x5d;
    *(iVar18 + 0xb29) = auVar42[8];
    uStack_358._0_4_ = uVar7;
    uStack_358._0_6_ = CONCAT24(2,uStack_358);
    uStack_358 = uStack_358;
    puStack_350 = puVar31;
    iVar12 = i2c_transfer(*(*(iVar18 + 0x8c0) + 0x18),&uStack_358,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar7 = *(*(iVar18 + 0x8c0) + 2);
    *puVar31 = 0;
    *(iVar18 + 0xb30) = 0;
    *(iVar18 + 0xb38) = 0;
    *(iVar18 + 0xb40) = 0;
    *(iVar18 + 0xb48) = 0;
    *(iVar18 + 0xb50) = 0;
    *(iVar18 + 0xb58) = 0;
    *(iVar18 + 0xb60) = 0;
    *(iVar18 + 0xb68) = 0;
    *(iVar18 + 0xb70) = 0;
    *(iVar18 + 0xb78) = 0;
    *(iVar18 + 0xb80) = 0;
    *(iVar18 + 0xb88) = 0;
    *(iVar18 + 0xb90) = 0;
    *(iVar18 + 0xb98) = 0;
    *(iVar18 + 0xba0) = 0;
    *(iVar18 + 0xb28) = 0x105a;
    uStack_358._0_4_ = uVar7;
    uStack_358._0_6_ = CONCAT24(2,uStack_358);
    uStack_358 = uStack_358;
    puStack_350 = puVar31;
    iVar12 = i2c_transfer(*(*(iVar18 + 0x8c0) + 0x18),&uStack_358,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar14 = 1;
    uVar7 = *(*(iVar18 + 0x8c0) + 2);
    *puVar31 = 0;
    *(iVar18 + 0xb30) = 0;
    *(iVar18 + 0xb38) = 0;
    *(iVar18 + 0xb40) = 0;
    *(iVar18 + 0xb48) = 0;
    *(iVar18 + 0xb50) = 0;
    *(iVar18 + 0xb58) = 0;
    *(iVar18 + 0xb60) = 0;
    *(iVar18 + 0xb68) = 0;
    *(iVar18 + 0xb70) = 0;
    *(iVar18 + 0xb78) = 0;
    *(iVar18 + 0xb80) = 0;
    *(iVar18 + 0xb88) = 0;
    *(iVar18 + 0xb90) = 0;
    *(iVar18 + 0xb98) = 0;
    *(iVar18 + 0xba0) = 0;
    *(iVar18 + 0xb28) = 0x5a;
    uStack_358._0_4_ = uVar7;
    uStack_358._0_6_ = CONCAT24(2,uStack_358);
    uStack_358 = uStack_358;
    puStack_350 = puVar31;
    uVar17 = i2c_transfer(*(*(iVar18 + 0x8c0) + 0x18),&uStack_358);
    if (uVar17 < 1) {
        uVar17 = _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar32 = sp_el0;
    if (*(iVar32 + 0x5e0) == iStack_348) {
        return uVar17;
    }
    auVar42 = __stack_chk_fail();
    pcVar37 = auVar42._8_8_;
    iVar32 = auVar42._0_8_;
    *extraout_x18_06 = sym.lt9611uxc_firmware_write;
    pcStack_3b8 = sym.lt9611uxc_firmware_write;
    uStack_380 = 2;
    uStack_370 = 2;
    uVar15 = uVar14 + 0x1f;
    if (-1 < uVar14) {
        uVar15 = uVar14;
    }
    iVar19 = sp_el0;
    iStack_3c8 = *(iVar19 + 0x5e0);
    uVar17 = uVar15 >> 5;
    uVar29 = uVar14 % 0x20;
    puVar40 = iVar32 + 0xb28;
    puVar41 = iVar32 + 0xb29;
    pppuStack_3c0 = &pppuStack_340;
    uStack_3b0 = unaff_x28;
    uStack_3a8 = unaff_x27;
    pcStack_3a0 = unaff_x26;
    uStack_398 = uVar26;
    puStack_390 = puVar21;
    pcStack_388 = pcVar34;
    puStack_378 = puVar31;
    iStack_368 = iVar18;
    if (uVar14 < 0x20) {
        pcVar35 = NULL;
        uVar26 = uVar29;
        pcVar34 = unaff_x26;
    }
    else {
        pcVar35 = NULL;
        puVar31 = 0x21;
        pcVar34 = "lt9611uxc_write";
        uStack_40c = uVar15 >> 5;
        uStack_408 = uVar29;
        uStack_3fc = uVar14;
        do {
            pcVar3 = pcVar37 + pcVar35;
            sym.lt9611uxc_flash_write_config(iVar32);
            uVar9 = *(*(iVar32 + 0x8c0) + 2);
            *(iVar32 + 0xb28) = 0x59;
            uVar4 = *(pcVar3 + 0x18);
            uVar24 = *pcVar3;
            uVar5 = *(pcVar3 + 8);
            uStack_3e8 = CONCAT62(0x210000,uVar9);
            *(iVar32 + 0xb39) = *(pcVar3 + 0x10);
            *(iVar32 + 0xb41) = uVar4;
            *puVar41 = uVar24;
            *(iVar32 + 0xb31) = uVar5;
            puStack_3e0 = puVar40;
            iVar12 = i2c_transfer(*(*(iVar32 + 0x8c0) + 0x18),&uStack_3e8,1);
            if (iVar12 < 1) {
                _printk(0x8001311,"lt9611uxc_write");
            }
            sym.lt9611uxc_flash_write_addr_set(iVar32,pcVar35 & 0xffffffff);
            msleep(0x14);
            pcVar35 = pcVar35 + 0x20;
            uVar14 = uVar17 - 1;
            uVar17 = uVar14;
        } while (uVar14 != 0);
        pcVar37 = pcVar37 + pcVar35;
        uVar17 = uStack_40c;
        uVar29 = uStack_408;
        uVar26 = uStack_408;
        uVar14 = uStack_3fc;
    }
    if (0 < uVar29) {
        uStack_3d8 = 0xffffffffffffffff;
        uStack_3d0 = 0xffffffffffffffff;
        uStack_3e8 = 0xffffffffffffffff;
        puStack_3e0 = 0xffffffffffffffff;
        memcpy(&uStack_3e8,pcVar37,uVar26);
        sym.lt9611uxc_flash_write_config(iVar32);
        uVar9 = *(*(iVar32 + 0x8c0) + 2);
        *puVar41 = uStack_3e8;
        *(iVar32 + 0xb31) = puStack_3e0;
        *(iVar32 + 0xb39) = uStack_3d8;
        *(iVar32 + 0xb41) = uStack_3d0;
        *(iVar32 + 0xb28) = 0x59;
        uStack_3f8 = CONCAT62(0x210000,uVar9);
        puStack_3f0 = puVar40;
        iVar12 = i2c_transfer(*(*(iVar32 + 0x8c0) + 0x18),&uStack_3f8,1);
        if (iVar12 < 1) {
            _printk(0x8001311,"lt9611uxc_write");
        }
        sym.lt9611uxc_flash_write_addr_set(iVar32,pcVar35 & 0xffffffff);
        msleep(0x14);
    }
    msleep(0x14);
    uVar33 = _printk(0x8000dc1,"lt9611uxc_firmware_write",uVar14,uVar17,uVar26 & 0xffffffff);
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_3c8) {
        return uVar33;
    }
    auVar42 = __stack_chk_fail();
    puVar25 = auVar42._8_8_;
    iVar18 = auVar42._0_8_;
    *extraout_x18_07 = sym.lt9611uxc_firmware_upgrade;
    pcStack_468 = sym.lt9611uxc_firmware_upgrade;
    iVar19 = sp_el0;
    iStack_478 = *(iVar19 + 0x5e0);
    uVar33 = *puVar25;
    pppuStack_470 = &pppuStack_3c0;
    puStack_460 = puVar41;
    puStack_458 = puVar40;
    pcStack_450 = pcVar34;
    uStack_448 = uVar17;
    pcStack_440 = pcVar37;
    pcStack_438 = pcVar35;
    iStack_430 = iVar32;
    puStack_428 = puVar31;
    uStack_420 = uVar26;
    uStack_418 = uVar14;
    _printk(0x8000c20,"lt9611uxc_firmware_upgrade",uVar33 & 0xffffffff);
    iVar32 = uVar33 << 0x20;
    puVar21 = __kmalloc(iVar32 + 0x1f00000000 >> 0x20 & 0xffffffffffffffe0,0xdc0);
    uVar17 = 0;
    puStack_4b0 = puVar31;
    if (puVar21 != NULL) {
        iVar19 = 0;
        puVar40 = iVar18 + 0xb28;
        puVar41 = 0x8001730;
        pcVar35 = 0x2;
        pcVar37 = "lt9611uxc_write_byte";
        *(iVar18 + 0xc30) = 1;
        do {
            uVar9 = *(iVar19 + 0x8001730);
            uVar7 = *(*(iVar18 + 0x8c0) + 2);
            *puVar40 = 0;
            *(iVar18 + 0xb30) = 0;
            *(iVar18 + 0xb38) = 0;
            *(iVar18 + 0xb40) = 0;
            *(iVar18 + 0xb48) = 0;
            *(iVar18 + 0xb50) = 0;
            *(iVar18 + 0xb58) = 0;
            *(iVar18 + 0xb60) = 0;
            *(iVar18 + 0xb68) = 0;
            *(iVar18 + 0xb70) = 0;
            *(iVar18 + 0xb78) = 0;
            *(iVar18 + 0xb80) = 0;
            *(iVar18 + 0xb88) = 0;
            *(iVar18 + 0xb90) = 0;
            *(iVar18 + 0xb98) = 0;
            *(iVar18 + 0xba0) = 0;
            *(iVar18 + 0xb28) = uVar9;
            uStack_488 = CONCAT24(2,uVar7);
            puStack_480 = puVar40;
            iVar12 = i2c_transfer(*(*(iVar18 + 0x8c0) + 0x18),&uStack_488,1);
            if (iVar12 < 1) {
                _printk(0x8001311,"lt9611uxc_write_byte");
            }
            iVar19 = iVar19 + 2;
        } while (iVar19 != 0xe);
        sym.lt9611uxc_block_erase(iVar18);
        sym.lt9611uxc_block_erase(iVar18);
        sym.lt9611uxc_firmware_write(iVar18,puVar25[1],uVar33 & 0xffffffff);
        msleep(0x14);
        sym.lt9611uxc_fw_read_back(iVar18,puVar21,uVar33);
        iVar12 = bcmp(puVar25[1],puVar21,iVar32 >> 0x20);
        uVar24 = 0x8000ff4;
        if (iVar12 != 0) {
            uVar24 = 0x8000a82;
        }
        *(iVar18 + 0xc30) = (iVar12 != 0) << 1;
        _printk(uVar24,"lt9611uxc_firmware_upgrade");
        uVar17 = kfree(puVar21);
        pcVar34 = 0xe;
        puStack_4b0 = puVar21;
    }
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_478) {
        return uVar17;
    }
    pcVar22 = __stack_chk_fail();
    *extraout_x18_08 = sym.lt9611uxc_edid_en;
    pcStack_4b8 = sym.lt9611uxc_edid_en;
    iVar19 = sp_el0;
    iStack_4c8 = *(iVar19 + 0x5e0);
    pcVar36 = pcVar22 + 0xb28;
    uVar9 = *(*(pcVar22 + 0x8c0) + 2);
    *(pcVar22 + 0xb28) = 0;
    *(pcVar22 + 0xb30) = 0;
    *(pcVar22 + 0xb38) = 0;
    *(pcVar22 + 0xb40) = 0;
    *(pcVar22 + 0xb48) = 0;
    *(pcVar22 + 0xb50) = 0;
    *(pcVar22 + 0xb58) = 0;
    *(pcVar22 + 0xb60) = 0;
    *(pcVar22 + 0xb68) = 0;
    *(pcVar22 + 0xb70) = 0;
    *(pcVar22 + 0xb78) = 0;
    *(pcVar22 + 0xb80) = 0;
    *(pcVar22 + 0xb88) = 0;
    *(pcVar22 + 0xb90) = 0;
    *(pcVar22 + 0xb98) = 0;
    *(pcVar22 + 0xb28) = 0xb0ff;
    *(pcVar22 + 0xba0) = 0;
    uStack_4d8 = CONCAT62(0x20000,uVar9);
    pcStack_4d0 = pcVar36;
    pppuStack_4c0 = &pppuStack_470;
    puStack_4a0 = puVar25;
    iStack_498 = iVar18;
    iVar12 = i2c_transfer(*(*(pcVar22 + 0x8c0) + 0x18),&uStack_4d8,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar9 = *(*(pcVar22 + 0x8c0) + 2);
    *pcVar36 = 0;
    *(pcVar22 + 0xb30) = 0;
    *(pcVar22 + 0xb38) = 0;
    *(pcVar22 + 0xb40) = 0;
    *(pcVar22 + 0xb48) = 0;
    *(pcVar22 + 0xb50) = 0;
    *(pcVar22 + 0xb58) = 0;
    *(pcVar22 + 0xb60) = 0;
    *(pcVar22 + 0xb68) = 0;
    *(pcVar22 + 0xb70) = 0;
    *(pcVar22 + 0xb78) = 0;
    *(pcVar22 + 0xb80) = 0;
    *(pcVar22 + 0xb88) = 0;
    *(pcVar22 + 0xb90) = 0;
    *(pcVar22 + 0xb98) = 0;
    *(pcVar22 + 0xba0) = 0;
    *(pcVar22 + 0xb28) = 0x100b;
    uStack_4d8 = CONCAT62(0x20000,uVar9);
    pcStack_4d0 = pcVar36;
    uVar17 = i2c_transfer(*(*(pcVar22 + 0x8c0) + 0x18),&uStack_4d8,1);
    if (uVar17 < 1) {
        uVar17 = _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_4c8) {
        return uVar17;
    }
    pcVar23 = __stack_chk_fail();
    *extraout_x18_09 = sym.lt9611uxc_probe;
    pcStack_538 = sym.lt9611uxc_probe;
    uStack_4f0 = 0x200000000;
    iVar19 = sp_el0;
    iStack_548 = *(iVar19 + 0x5e0);
    pppuStack_540 = &pppuStack_4c0;
    puStack_530 = puVar41;
    puStack_528 = puVar40;
    pcStack_520 = pcVar34;
    iStack_518 = iVar32;
    pcStack_510 = pcVar37;
    pcStack_508 = pcVar35;
    uStack_500 = uVar33;
    pcStack_4f8 = pcVar36;
    pcStack_4e8 = pcVar22;
    if ((pcVar23 == NULL) || (pcVar36 = pcVar23, *(pcVar23 + 0x310) == 0)) {
        _printk(0x8000306,"lt9611uxc_probe");
        uVar17 = 0xffffffea;
        pcVar30 = 0x200000000;
        pcVar23 = pcVar36;
        goto code_r0x08003fa8;
    }
    pcVar22 = *(pcVar23 + 0x18);
    pcVar30 = *(*(pcVar22 + 0x10) + 0x20);
    __cfi_slowpath_diag(0x6871e466cec98751,pcVar30,0x8000270);
    uVar17 = (*pcVar30)(pcVar22);
    if ((uVar17 & 1) == 0) {
        _printk(0x8000c9e,"lt9611uxc_probe");
        uVar17 = 0xffffffed;
        goto code_r0x08003fa8;
    }
    pcVar36 = pcVar23 + 0x20;
    _printk(0x8000cc0,"lt9611uxc_probe","lt9611uxc_probe");
    arg1_00 = devm_kmalloc(pcVar36,0xc38,0xdc0);
    pcVar30 = pcVar36;
    if (arg1_00 == NULL) {
        uVar17 = 0xfffffff4;
        goto code_r0x08003fa8;
    }
    pcVar38 = *(pcVar23 + 0x310);
    iVar32 = of_graph_get_endpoint_by_regs(pcVar38,0,0);
    if (iVar32 == 0) {
        uVar24 = 0x8000d3c;
code_r0x080040b0:
        _printk(uVar24,"lt9611uxc_parse_dt");
        uVar17 = 0xffffffed;
    }
    else {
        uVar17 = of_graph_get_remote_port_parent();
        *(arg1_00 + 0x118) = uVar17;
        if (uVar17 == 0) {
            uVar24 = 0x8000e6b;
            goto code_r0x080040b0;
        }
        uVar14 = of_get_named_gpio_flags(pcVar38,"lt,irq-gpio",0,0);
        uVar17 = 0;
        *(arg1_00 + 0x89c) = uVar14;
        if (0x1ff < uVar14) {
            _printk(0x800083a,"lt9611uxc_parse_dt");
            uVar17 = 0xffffffea;
        }
        uVar14 = of_get_named_gpio_flags(pcVar38,"lt,reset-gpio",0,0);
        *(arg1_00 + 0x8a0) = uVar14;
        if (0x1ff < uVar14) {
            _printk(0x80005ef,"lt9611uxc_parse_dt");
            uVar17 = 0xffffffea;
        }
        uVar13 = of_get_named_gpio_flags(pcVar38,"lt,hdmi-ps-gpio",0,0);
        *(arg1_00 + 0x8a4) = uVar13;
        uVar13 = of_get_named_gpio_flags(pcVar38,"lt,hdmi-en-gpio",0,0);
        *(arg1_00 + 0x8a8) = uVar13;
        uVar13 = of_get_named_gpio_flags(pcVar38,"lt,hdmi-3p3-en",0,0);
        *(arg1_00 + 0x8ac) = uVar13;
        uVar13 = of_get_named_gpio_flags(pcVar38,"lt,hdmi-1p2-en",0,0);
        *(arg1_00 + 0x8b0) = uVar13;
        iVar32 = of_find_property(pcVar38,"lt,ac-mode",0);
        pcStack_588 = arg1_00 + 0x8d8;
        arg1_00[0x898] = iVar32 != 0;
        *(arg1_00 + 0x8d8) = pcStack_588;
        *(arg1_00 + 0x8e0) = pcStack_588;
        uStack_568 = uStack_568._4_4_ << 0x20;
        uStack_578 = 0;
        uStack_570 = 0;
        uStack_57c = 0;
        iVar32 = of_get_child_by_name(pcVar38,"lt,customize-modes");
        if (iVar32 == 0) {
            iVar32 = of_parse_phandle(pcVar38,"lt,customize-modes",0);
            if (iVar32 != 0) goto code_r0x08004254;
            _printk(0x8000f8e,"lt9611uxc_parse_dt_modes");
        }
        else {
code_r0x08004254:
            iVar19 = of_get_next_child(iVar32,0);
            if (iVar19 == 0) {
                pcVar34 = NULL;
            }
            else {
                pcVar34 = NULL;
                uVar14 = 0;
                do {
                    pcVar35 = kmem_cache_alloc_trace(_drm_atomic_helper_connector_destroy_state,0xdc0,0x78);
                    if (pcVar35 == NULL) {
                        _printk(0x8000e88,"lt9611uxc_parse_dt_modes");
                    }
                    else {
                        iVar12 = of_property_read_variable_u32_array(iVar19,"lt,mode-h-active",pcVar35 + 4,1,0);
                        pcVar38 = pcVar35;
                        if (iVar12 < 0) {
                            uVar24 = 0x8000473;
                        }
                        else {
                            iVar12 = of_property_read_variable_u32_array
                                               (iVar19,"lt,mode-h-front-porch",&uStack_568,1,0);
                            if (iVar12 < 0) {
                                uVar24 = 0x8001234;
                            }
                            else {
                                iVar12 = of_property_read_variable_u32_array
                                                   (iVar19,"lt,mode-h-pulse-width",&uStack_570 + 4,1,0);
                                if (iVar12 < 0) {
                                    uVar24 = 0x8000cd5;
                                }
                                else {
                                    iVar12 = of_property_read_variable_u32_array
                                                       (iVar19,"lt,mode-h-back-porch",&uStack_570,1,0);
                                    if (iVar12 < 0) {
                                        uVar24 = 0x8001047;
                                    }
                                    else {
                                        iVar18 = of_find_property(iVar19,"lt,mode-h-active-high",0);
                                        iVar12 = of_property_read_variable_u32_array
                                                           (iVar19,"lt,mode-v-active",pcVar35 + 0xe,1,0);
                                        if (iVar12 < 0) {
                                            uVar24 = 0x8000d5d;
                                        }
                                        else {
                                            iVar12 = of_property_read_variable_u32_array
                                                               (iVar19,"lt,mode-v-front-porch",&uStack_578 + 4,1,0);
                                            if (iVar12 < 0) {
                                                uVar24 = 0x800094e;
                                            }
                                            else {
                                                iVar12 = of_property_read_variable_u32_array
                                                                   (iVar19,"lt,mode-v-pulse-width",&uStack_578,1,0);
                                                if (iVar12 < 0) {
                                                    uVar24 = 0x8000757;
                                                }
                                                else {
                                                    iVar12 = of_property_read_variable_u32_array
                                                                       (iVar19,"lt,mode-v-back-porch",&uStack_57c,1,
                                                                        0);
                                                    if (iVar12 < 0) {
                                                        uVar24 = 0x8000979;
                                                    }
                                                    else {
                                                        pcVar30 = of_find_property(iVar19,"lt,mode-v-active-high",0);
                                                        iVar12 = of_property_read_variable_u32_array
                                                                           (iVar19,"lt,mode-clock-in-khz",pcVar35,1,
                                                                            0);
                                                        if (-1 < iVar12) {
                                                            iVar1 = *(pcVar35 + 4) + uStack_568 + uStack_570._4_2_;
                                                            puVar21 = *(arg1_00 + 0x8e0);
                                                            *(pcVar35 + 6) = *(pcVar35 + 4) + uStack_568;
                                                            *(pcVar35 + 8) = iVar1;
                                                            iVar2 = *(pcVar35 + 0xe) + uStack_578._4_2_ + uStack_578;
                                                            *(pcVar35 + 0x10) = *(pcVar35 + 0xe) + uStack_578._4_2_;
                                                            *(pcVar35 + 10) = iVar1 + uStack_570;
                                                            uVar15 = 1;
                                                            if (iVar18 == 0) {
                                                                uVar15 = 2;
                                                            }
                                                            uVar29 = 8;
                                                            if (pcVar30 != NULL) {
                                                                uVar29 = 4;
                                                            }
                                                            pcVar30 = pcVar35 + 0x40;
                                                            uVar14 = uVar15 | uVar14 | uVar29;
                                                            *(pcVar35 + 0x12) = iVar2;
                                                            *(pcVar35 + 0x14) = iVar2 + uStack_57c;
                                                            *(pcVar35 + 0x18) = uVar14;
                                                            uVar26 = __list_add_valid(pcVar30,puVar21,pcStack_588);
                                                            if ((uVar26 & 1) != 0) {
                                                                *(arg1_00 + 0x8e0) = pcVar30;
                                                                *(pcVar35 + 0x40) = pcStack_588;
                                                                *(pcVar35 + 0x48) = puVar21;
                                                                *puVar21 = pcVar30;
                                                            }
                                                            pcVar34 = pcVar34 + 1;
                                                            drm_mode_set_name(pcVar35);
                                                            goto code_r0x080042cc;
                                                        }
                                                        uVar24 = 0x8000d15;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        _printk(uVar24,"lt9611uxc_parse_dt_modes",iVar12);
                        kfree(pcVar35);
                    }
code_r0x080042cc:
                    iVar19 = of_get_next_child(iVar32,iVar19);
                } while (iVar19 != 0);
            }
            *(arg1_00 + 0x8d0) = pcVar34;
            pcVar35 = arg1_00;
        }
        pcStack_590 = pcVar36;
        if (uVar17 == 0) {
            uStack_570 = uStack_570 & 0xffffffff;
            if (pcVar36 != NULL) {
                uVar17 = *(pcVar23 + 0x310);
                *(arg1_00 + 0x8b4) = 0;
                pcVar22 = of_get_child_by_name(uVar17,"lt,supply-entries");
                if (pcVar22 == NULL) {
                    uVar24 = 0x80004ab;
                    pcVar22 = pcVar38;
                }
                else {
                    iVar32 = of_get_next_available_child(pcVar22,0);
                    if (iVar32 == 0) {
                        *(arg1_00 + 0x8b4) = 0;
                    }
                    else {
                        pcVar30 = NULL;
                        do {
                            uVar14 = pcVar30 + 1;
                            pcVar30 = uVar14;
                            iVar32 = of_get_next_available_child(pcVar22,iVar32);
                        } while (iVar32 != 0);
                        *(arg1_00 + 0x8b4) = uVar14;
                        if (uVar14 != 0) {
                            uVar17 = devm_kmalloc(pcVar36,pcVar30 * 0x48,0xdc0);
                            *(arg1_00 + 0x8b8) = uVar17;
                            pcStack_588 = arg1_00;
                            if (uVar17 != 0) {
                                pcVar30 = of_get_next_available_child(pcVar22,0);
                                if (pcVar30 != NULL) {
                                    pcVar34 = NULL;
                                    do {
                                        uStack_568 = 0;
                                        uVar14 = of_property_read_string(pcVar30,"lt,supply-name",&uStack_568);
                                        if (uVar14 != 0) {
                                            uVar24 = 0x800035d;
code_r0x08004e70:
                                            uVar17 = uVar14;
                                            _printk(uVar24,"lt9611uxc_get_dt_supply",uVar17);
                                            goto code_r0x080050d0;
                                        }
                                        iVar12 = pcVar34;
                                        strscpy(*(arg1_00 + 0x8b8) + iVar12 * 0x48 + 8,uStack_568,0x20);
                                        uVar14 = of_property_read_variable_u32_array
                                                           (pcVar30,"lt,supply-min-voltage",&uStack_570 + 4,1,0);
                                        if (uVar14 < 0) {
                                            uVar24 = 0x80004ca;
                                            goto code_r0x08004e70;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar12 * 0x48 + 0x28) = uStack_570._4_4_;
                                        uVar14 = of_property_read_variable_u32_array
                                                           (pcVar30,"lt,supply-max-voltage",&uStack_570 + 4,1,0);
                                        if (uVar14 < 0) {
                                            uVar17 = uVar14;
                                            _printk(0x8000598,"lt9611uxc_get_dt_supply",uVar17);
                                            pcVar35 = arg1_00;
                                            goto code_r0x080050d0;
                                        }
                                        iVar32 = iVar12 * 0x48;
                                        *(*(arg1_00 + 0x8b8) + iVar32 + 0x2c) = uStack_570._4_4_;
                                        iVar16 = of_property_read_variable_u32_array
                                                           (pcVar30,"lt,supply-enable-load",&uStack_570 + 4,1,0);
                                        uVar13 = 0;
                                        if (-1 < iVar16) {
                                            uVar13 = uStack_570._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar32 + 0x30) = uVar13;
                                        iVar16 = of_property_read_variable_u32_array
                                                           (pcVar30,"lt,supply-disable-load",&uStack_570 + 4,1,0);
                                        uVar13 = 0;
                                        if (-1 < iVar16) {
                                            uVar13 = uStack_570._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar32 + 0x34) = uVar13;
                                        iVar16 = of_property_read_variable_u32_array
                                                           (pcVar30,"lt,supply-pre-on-sleep",&uStack_570 + 4,1,0);
                                        uVar13 = 0;
                                        if (-1 < iVar16) {
                                            uVar13 = uStack_570._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar32 + 0x38) = uVar13;
                                        iVar16 = of_property_read_variable_u32_array
                                                           (pcVar30,"lt,supply-pre-off-sleep",&uStack_570 + 4,1,0);
                                        uVar13 = 0;
                                        if (-1 < iVar16) {
                                            uVar13 = uStack_570._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar32 + 0x40) = uVar13;
                                        iVar16 = of_property_read_variable_u32_array
                                                           (pcVar30,"lt,supply-post-on-sleep",&uStack_570 + 4,1,0);
                                        uVar13 = 0;
                                        if (-1 < iVar16) {
                                            uVar13 = uStack_570._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar32 + 0x3c) = uVar13;
                                        iVar16 = of_property_read_variable_u32_array
                                                           (pcVar30,"lt,supply-post-off-sleep",&uStack_570 + 4,1,0);
                                        pcVar34 = iVar12 + 1;
                                        uVar13 = 0;
                                        if (-1 < iVar16) {
                                            uVar13 = uStack_570._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar32 + 0x44) = uVar13;
                                        pcVar30 = of_get_next_available_child(pcVar22,pcVar30);
                                        pcVar35 = arg1_00;
                                    } while (pcVar30 != NULL);
                                }
                                pcVar30 = *(arg1_00 + 0x8b8);
                                if (pcVar30 == NULL) goto code_r0x08004624;
                                uVar14 = *(arg1_00 + 0x8b4);
                                if (uVar14 < 1) goto code_r0x08004624;
                                pcVar22 = pcVar30 + 8;
                                uVar26 = regulator_get(pcVar36,pcVar22);
                                uVar17 = 0;
                                pcVar38 = NULL;
                                *pcVar30 = uVar26;
                                pcVar39 = pcVar30;
                                if (uVar26 == 0) goto code_r0x08004e34;
                                if (0xfffffffffffff000 < uVar26) goto code_r0x08004e34;
                                uVar15 = regulator_set_voltage(uVar26,*(pcVar30 + 0x28),*(pcVar30 + 0x2c));
                                uVar17 = uVar15;
                                if (uVar15 < 0) {
                                    pcVar35 = NULL;
                                }
                                else {
                                    pcVar35 = NULL;
                                    iVar32 = 0;
                                    do {
                                        iVar19 = iVar32;
                                        if (uVar14 * 0x48 + -0x48 == iVar19) goto code_r0x08004624;
                                        pcVar34 = pcVar30 + iVar19;
                                        pcVar22 = pcVar34 + 0x50;
                                        uVar26 = regulator_get(pcVar36,pcVar22);
                                        *(pcVar34 + 0x48) = uVar26;
                                        if (uVar26 == 0) goto code_r0x08005068;
                                        if (0xfffffffffffff000 < uVar26) goto code_r0x08005068;
                                        uVar15 = regulator_set_voltage
                                                           (uVar26,*(pcVar30 + iVar19 + 0x70),
                                                            *(pcVar30 + iVar19 + 0x74));
                                        uVar17 = uVar15;
                                        pcVar35 = pcVar35 + 1;
                                        iVar32 = iVar19 + 0x48;
                                    } while (-1 < uVar15);
                                    pcVar22 = pcVar30 + iVar19 + 0x50;
                                }
                                pcVar36 = pcVar35 & 0xffffffff;
                                _printk(0x8000ade,"lt9611uxc_config_vreg",pcVar22);
                                goto code_r0x080050b4;
                            }
                            uVar17 = 0xfffffff4;
                            uVar24 = 0x8001329;
                            goto code_r0x080040c8;
                        }
                    }
                    uVar24 = 0x8000eb3;
                }
                _printk(uVar24,"lt9611uxc_get_dt_supply");
                goto code_r0x08004624;
            }
            _printk(0x8000f44,"lt9611uxc_get_dt_supply",0,arg1_00);
            uVar17 = 0xffffffea;
            uVar24 = 0x8001329;
            pcVar22 = pcVar38;
            goto code_r0x080040c8;
        }
    }
    uVar24 = 0x8000aa8;
    pcVar22 = pcVar38;
code_r0x080040c8:
    do {
        _printk(uVar24,"lt9611uxc_probe");
code_r0x08003fa8:
        while( true ) {
            iVar32 = sp_el0;
            if (*(iVar32 + 0x5e0) == iStack_548) {
                return uVar17;
            }
            __stack_chk_fail();
code_r0x08005068:
            pcVar38 = pcVar35 + 1;
            pcVar39 = pcVar34 + 0x48;
code_r0x08004e34:
            _printk(0x80009a3,"lt9611uxc_config_vreg",pcVar22,uVar17);
            while( true ) {
                uVar14 = pcVar38 - 1;
                pcVar35 = uVar14;
                *pcVar39 = 0;
                if (uVar14 < 0) break;
                regulator_set_load(*(pcVar30 + pcVar35 * 0x48),0);
                pcVar36 = pcVar35;
code_r0x080050b4:
                pcVar39 = pcVar30 + pcVar36 * 0x48;
                regulator_put(*pcVar39);
                pcVar38 = pcVar35;
            }
            pcVar35 = pcVar38;
            arg1_00 = pcStack_588;
            if (uVar17 != 0) break;
code_r0x08004624:
            *(arg1_00 + 0x8c0) = pcVar23;
            *arg1_00 = pcStack_590;
            uVar14 = sym.lt9611uxc_gpio_configure(arg1_00);
            pcVar35 = pcStack_590;
            if (uVar14 != 0) {
                uVar17 = uVar14;
                _printk(0x80007e9,"lt9611uxc_probe");
                goto code_r0x08004ae8;
            }
            if (*(arg1_00 + 0x8a8) < 0x200) {
                uVar24 = gpio_to_desc();
                gpiod_set_raw_value(uVar24,1);
                msleep(0x14);
            }
            pcVar30 = *(arg1_00 + 0x8b8);
            uVar14 = *(arg1_00 + 0x8b4);
            pcVar22 = uVar14;
            if (*(arg1_00 + 0x8ac) < 0x200) {
                uVar24 = gpio_to_desc();
                gpiod_set_raw_value(uVar24,1);
            }
            if (*(arg1_00 + 0x8b0) < 0x200) {
                uVar24 = gpio_to_desc();
                gpiod_set_raw_value(uVar24,1);
            }
            if (0 < uVar14) {
                uVar17 = 0;
                pcVar36 = NULL;
                if ((*pcVar30 != 0) && (*pcVar30 < 0xfffffffffffff001)) {
                    pcVar36 = NULL;
                    pcVar39 = pcVar22 + -1;
                    pcVar34 = 0x3e8;
                    pcVar38 = pcVar30;
                    do {
                        uVar14 = regulator_is_enabled();
                        pcVar22 = uVar14;
                        if ((*(pcVar38 + 0x38) != 0) && (uVar14 == 0)) {
                            iVar32 = *(pcVar38 + 0x38) * 1000;
                            usleep_range_state(iVar32,iVar32,2);
                        }
                        uVar15 = regulator_set_load(*pcVar38,*(pcVar38 + 0x30));
                        if (uVar15 < 0) {
                            uVar17 = uVar15;
                            _printk(0x800067e,"lt9611uxc_enable_vreg",pcVar38 + 8);
                            goto code_r0x08004774;
                        }
                        uVar15 = regulator_enable(*pcVar38);
                        uVar17 = uVar15;
                        if ((*(pcVar38 + 0x3c) != 0) && (uVar14 == 0)) {
                            iVar32 = *(pcVar38 + 0x3c) * 1000;
                            usleep_range_state(iVar32,iVar32,2);
                        }
                        if (uVar15 < 0) {
                            _printk(0x8000697,"lt9611uxc_enable_vreg",pcVar38 + 8);
                            regulator_set_load(*pcVar38,*(pcVar38 + 0x34));
                            goto code_r0x08004774;
                        }
                        if (pcVar39 == pcVar36) goto code_r0x08004778;
                        pcVar38 = pcVar38 + 0x48;
                        pcVar36 = pcVar36 + 1;
                    } while ((*pcVar38 != 0) && (*pcVar38 < 0xfffffffffffff001));
                }
                _printk(0x8000af6,"lt9611uxc_enable_vreg",pcVar30 + (pcVar36 & 0xffffffff) * 0x48 + 8,uVar17);
code_r0x08004774:
                if (pcVar36 != 0) {
                    pcVar22 = pcVar36 + 1;
                    pcVar30 = pcVar30 + pcVar36 * 0x48 + -0x48;
                    do {
                        if (*(pcVar30 + 0x40) != 0) {
                            iVar32 = *(pcVar30 + 0x40) * 1000;
                            usleep_range_state(iVar32,iVar32,2);
                        }
                        regulator_set_load(*pcVar30,*(pcVar30 + 0x34));
                        regulator_disable(*pcVar30);
                        if (*(pcVar30 + 0x44) != 0) {
                            iVar32 = *(pcVar30 + 0x44) * 1000;
                            usleep_range_state(iVar32,iVar32,2);
                        }
                        pcVar22 = pcVar22 + -1;
                        pcVar30 = pcVar30 + -0x48;
                    } while (1 < pcVar22);
                }
code_r0x08004778:
                if (uVar17 == 0) goto code_r0x08004780;
                _printk(0x8001348,"lt9611uxc_probe");
                goto code_r0x08004adc;
            }
code_r0x08004780:
            uVar24 = gpio_to_desc(*(arg1_00 + 0x8a0));
            gpiod_set_raw_value(uVar24,1);
            msleep(0x14);
            uVar24 = gpio_to_desc(*(arg1_00 + 0x8a0));
            gpiod_set_raw_value(uVar24,0);
            msleep(0x14);
            uVar24 = gpio_to_desc(*(arg1_00 + 0x8a0));
            gpiod_set_raw_value(uVar24,1);
            msleep(300);
            sym.lt9611uxc_ctl_en(arg1_00);
            pcVar22 = arg1_00 + 0xb28;
            uVar9 = *(*(arg1_00 + 0x8c0) + 2);
            *(arg1_00 + 0xb28) = 0;
            *(arg1_00 + 0xb30) = 0;
            *(arg1_00 + 0xb38) = 0;
            *(arg1_00 + 0xb40) = 0;
            *(arg1_00 + 0xb48) = 0;
            *(arg1_00 + 0xb50) = 0;
            *(arg1_00 + 0xb58) = 0;
            *(arg1_00 + 0xb60) = 0;
            *(arg1_00 + 0xb68) = 0;
            *(arg1_00 + 0xb70) = 0;
            *(arg1_00 + 0xb78) = 0;
            *(arg1_00 + 0xb80) = 0;
            *(arg1_00 + 0xb88) = 0;
            *(arg1_00 + 0xb90) = 0;
            *(arg1_00 + 0xb98) = 0;
            *(arg1_00 + 0xb28) = 0x81ff;
            *(arg1_00 + 0xba0) = 0;
            uStack_568 = CONCAT62(0x20000,uVar9);
            pcStack_560 = pcVar22;
            iVar12 = i2c_transfer(*(*(arg1_00 + 0x8c0) + 0x18),&uStack_568,1);
            if (iVar12 < 1) {
                _printk(0x8001311,"lt9611uxc_write_byte");
            }
            uVar17 = *(arg1_00 + 0x8c0);
            uVar9 = *(uVar17 + 2);
            pcVar30 = 0x10001;
            uVar8 = *(uVar17 + 2);
            *(arg1_00 + 0xc18) = 0;
            *(arg1_00 + 0xc20) = 0;
            *(arg1_00 + 0xc08) = 0;
            *(arg1_00 + 0xc10) = 0;
            *(arg1_00 + 0xbf8) = 0;
            *(arg1_00 + 0xc00) = 0;
            *(arg1_00 + 0xbe8) = 0;
            *(arg1_00 + 0xbf0) = 0;
            *(arg1_00 + 0xbd8) = 0;
            *(arg1_00 + 0xbe0) = 0;
            *(arg1_00 + 0xbc8) = 0;
            *(arg1_00 + 0xbd0) = 0;
            *(arg1_00 + 3000) = 0;
            *(arg1_00 + 0xbc0) = 0;
            *(arg1_00 + 0xba8) = 0;
            *(arg1_00 + 0xbb0) = 0;
            *(arg1_00 + 0xb98) = 0;
            *(arg1_00 + 0xba0) = 0;
            *(arg1_00 + 0xb88) = 0;
            *(arg1_00 + 0xb90) = 0;
            *(arg1_00 + 0xb78) = 0;
            *(arg1_00 + 0xb80) = 0;
            *(arg1_00 + 0xb68) = 0;
            *(arg1_00 + 0xb70) = 0;
            *(arg1_00 + 0xb58) = 0;
            *(arg1_00 + 0xb60) = 0;
            *(arg1_00 + 0xb48) = 0;
            *(arg1_00 + 0xb50) = 0;
            *(arg1_00 + 0xb38) = 0;
            *(arg1_00 + 0xb40) = 0;
            *pcVar22 = 0;
            *(arg1_00 + 0xb30) = 0;
            uStack_568 = CONCAT62(0x10000,uVar9);
            uStack_558._0_6_ = CONCAT42(0x10001,uVar8);
            uStack_558 = uStack_558;
            pcStack_560 = pcVar22;
            pcStack_550 = arg1_00 + 0xba8;
            iVar12 = i2c_transfer(*(uVar17 + 0x18),&uStack_568,2);
            if (iVar12 != 2) {
code_r0x08004a44:
                _printk(0x80006dd,"lt9611uxc_read");
                _printk(0x8000bcd,"lt9611uxc_read_device_id");
                sym.lt9611uxc_ctl_disable(arg1_00);
                msleep(0x32);
                _printk(0x8000f25,"lt9611uxc_probe");
                uVar17 = 0xffffffff;
                goto code_r0x08004adc;
            }
            uVar17 = *(arg1_00 + 0x8c0);
            uVar9 = *(uVar17 + 2);
            uVar8 = *(uVar17 + 2);
            cVar6 = arg1_00[0xba8];
            *(arg1_00 + 0xc18) = 0;
            *(arg1_00 + 0xc20) = 0;
            *(arg1_00 + 0xc08) = 0;
            *(arg1_00 + 0xc10) = 0;
            *(arg1_00 + 0xbf8) = 0;
            *(arg1_00 + 0xc00) = 0;
            *(arg1_00 + 0xbe8) = 0;
            *(arg1_00 + 0xbf0) = 0;
            *(arg1_00 + 0xbd8) = 0;
            *(arg1_00 + 0xbe0) = 0;
            *(arg1_00 + 0xbc8) = 0;
            *(arg1_00 + 0xbd0) = 0;
            *(arg1_00 + 3000) = 0;
            *(arg1_00 + 0xbc0) = 0;
            *(arg1_00 + 0xba8) = 0;
            *(arg1_00 + 0xbb0) = 0;
            *(arg1_00 + 0xb98) = 0;
            *(arg1_00 + 0xba0) = 0;
            *(arg1_00 + 0xb88) = 0;
            *(arg1_00 + 0xb90) = 0;
            *(arg1_00 + 0xb78) = 0;
            *(arg1_00 + 0xb80) = 0;
            *(arg1_00 + 0xb68) = 0;
            *(arg1_00 + 0xb70) = 0;
            *(arg1_00 + 0xb58) = 0;
            *(arg1_00 + 0xb60) = 0;
            *(arg1_00 + 0xb48) = 0;
            *(arg1_00 + 0xb50) = 0;
            *(arg1_00 + 0xb38) = 0;
            *(arg1_00 + 0xb40) = 0;
            *pcVar22 = 0;
            *(arg1_00 + 0xb30) = 0;
            arg1_00[0xb28] = 0x1;
            uStack_568 = CONCAT62(0x10000,uVar9);
            uStack_558._0_6_ = CONCAT42(0x10001,uVar8);
            uStack_558 = uStack_558;
            pcStack_560 = pcVar22;
            pcStack_550 = arg1_00 + 0xba8;
            iVar12 = i2c_transfer(*(uVar17 + 0x18),&uStack_568,2);
            if (iVar12 != 2) goto code_r0x08004a44;
            _printk(0x80010d6,"lt9611uxc_read_device_id",CONCAT11(cVar6,arg1_00[0xba8]));
            sym.lt9611uxc_ctl_disable(arg1_00);
            msleep(0x32);
            *(pcVar23 + 0xb8) = arg1_00;
            uVar14 = sysfs_create_group(pcStack_590,obj.lt9611uxc_sysfs_attr_grp);
            pcVar22 = arg1_00;
            if (uVar14 != 0) {
                uVar17 = uVar14;
                _printk(0x8000c51,"lt9611uxc_sysfs_init","lt9611uxc_sysfs_init",uVar17);
                uVar24 = 0x8000b76;
                goto code_r0x08004ed0;
            }
            cVar11 = sym.lt9611uxc_get_version(arg1_00);
            if (cVar11 == '\0') {
                uVar14 = request_firmware_nowait
                                   (obj.__this_module,1,"lt9611uxc_fw.bin",pcStack_590,0xcc0,arg1_00,
                                    sym.lt9611uxc_firmware_cb.e58709b06554ea617982e3f2e7a32f4b.cfi_jt);
                uVar17 = uVar14;
                if (uVar14 != 0) {
                    _printk(0x800031b,"lt9611uxc_probe",uVar17);
                    goto code_r0x08004adc;
                }
            }
            else {
                _printk(0x800101c,"lt9611uxc_probe");
                __mutex_init(arg1_00 + 0x130,"&pdata->lock",obj.lt9611uxc_probe.__key);
                __init_waitqueue_head(arg1_00 + 0xa10,"&pdata->edid_wq",obj.lt9611uxc_probe.__key);
                *(arg1_00 + 0x90) = *(pcVar23 + 0x310);
                *(arg1_00 + 0xb0) = reloc.lt9611uxc_bridge_attach.e58709b06554ea617982e3f2e7a32f4b.cfi_jt;
                drm_bridge_add(arg1_00 + 8);
                uVar17 = alloc_workqueue(0x8000499,0xe000a,1,"lt9611uxc_wk");
                *(arg1_00 + 0x9d8) = uVar17;
                pcVar30 = arg1_00;
                if (uVar17 == 0) {
                    _printk(0x8001214,"lt9611uxc_probe");
                    uVar17 = 0;
                    goto code_r0x08004adc;
                }
                *(arg1_00 + 0x9e0) = 0xfffffffe0;
                *(arg1_00 + 0x9e8) = arg1_00 + 0x9e8;
                *(arg1_00 + 0x9f0) = arg1_00 + 0x9e8;
                *(arg1_00 + 0x9f8) = sym.lt9611uxc_hpd_work.cfi_jt;
                gpio_to_desc(*(arg1_00 + 0x89c));
                uVar24 = gpiod_to_irq();
                *(arg1_00 + 0x894) = uVar24;
                uVar14 = request_threaded_irq
                                   (uVar24,0,sym.lt9611uxc_irq_thread_handler.e58709b06554ea617982e3f2e7a32f4b.cfi_jt
                                    ,0x2002,"lt9611uxc_irq",arg1_00);
                uVar17 = uVar14;
                if (uVar14 != 0) {
                    uVar24 = 0x80010b9;
code_r0x08004ed0:
                    _printk(uVar24,"lt9611uxc_probe");
code_r0x08004adc:
                    sym.lt9611uxc_gpio_configure(arg1_00);
code_r0x08004ae8:
                    sym.lt9611uxc_put_dt_supply(pcStack_590,arg1_00);
                }
            }
        }
code_r0x080050d0:
        if (*(pcStack_588 + 0x8b8) != 0) {
            *(pcStack_588 + 0x8b8) = 0;
            *(pcStack_588 + 0x8b4) = 0;
        }
        uVar24 = 0x8001329;
    } while( true );
}


// ===== sym.lt9611uxc_get_version @ 0x08002744 (size 912) =====

uint64_t sym.lt9611uxc_get_version(int64_t arg1)

{
    int16_t iVar1;
    int16_t iVar2;
    char *pcVar3;
    ulong uVar4;
    ulong uVar5;
    code cVar6;
    ushort uVar7;
    ushort uVar8;
    uint16_t uVar9;
    bool bVar10;
    char cVar11;
    int iVar12;
    uint uVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    int iVar16;
    int64_t iVar17;
    uint64_t uVar18;
    ulong *puVar19;
    code *pcVar20;
    code *pcVar21;
    code *arg1_00;
    int64_t iVar22;
    ulong uVar23;
    uint64_t *puVar24;
    uint64_t uVar25;
    uchar uVar26;
    int64_t iVar27;
    uchar uVar28;
    uint32_t uVar29;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    ulong *extraout_x18_08;
    uint64_t uVar30;
    code *pcVar31;
    ulong *puVar32;
    uint64_t uVar33;
    char *pcVar34;
    code *pcVar35;
    code *pcVar36;
    char *pcVar37;
    code *pcVar38;
    code *pcVar39;
    code *unaff_x26;
    ulong unaff_x27;
    ulong *puVar40;
    ulong unaff_x28;
    ulong *puVar41;
    ulong unaff_x30;
    uchar auVar42 [16];
    code *pcStack_520;
    code *pcStack_518;
    uint uStack_50c;
    ulong uStack_508;
    ulong uStack_500;
    ulong uStack_4f8;
    code *pcStack_4f0;
    ulong uStack_4e8;
    code *pcStack_4e0;
    int64_t iStack_4d8;
    ulong ***pppuStack_4d0;
    code *pcStack_4c8;
    ulong *puStack_4c0;
    ulong *puStack_4b8;
    code *pcStack_4b0;
    int64_t iStack_4a8;
    char *pcStack_4a0;
    code *pcStack_498;
    uint64_t uStack_490;
    code *pcStack_488;
    ulong uStack_480;
    code *pcStack_478;
    ulong uStack_468;
    code *pcStack_460;
    int64_t iStack_458;
    ulong ***pppuStack_450;
    code *pcStack_448;
    ulong *puStack_440;
    uint64_t *puStack_430;
    int64_t iStack_428;
    ulong uStack_418;
    ulong *puStack_410;
    int64_t iStack_408;
    ulong ***pppuStack_400;
    code *pcStack_3f8;
    ulong *puStack_3f0;
    ulong *puStack_3e8;
    code *pcStack_3e0;
    uint64_t uStack_3d8;
    char *pcStack_3d0;
    code *pcStack_3c8;
    int64_t iStack_3c0;
    ulong *puStack_3b8;
    uint64_t uStack_3b0;
    uint64_t uStack_3a8;
    uint32_t uStack_39c;
    uint64_t uStack_398;
    uint32_t uStack_38c;
    ulong uStack_388;
    ulong *puStack_380;
    ulong uStack_378;
    ulong *puStack_370;
    ulong uStack_368;
    ulong uStack_360;
    int64_t iStack_358;
    ulong ***pppuStack_350;
    code *pcStack_348;
    ulong uStack_340;
    ulong uStack_338;
    code *pcStack_330;
    uint64_t uStack_328;
    ulong *puStack_320;
    char *pcStack_318;
    ulong uStack_310;
    ulong *puStack_308;
    ulong uStack_300;
    int64_t iStack_2f8;
    ulong uStack_2e8;
    ulong *puStack_2e0;
    int64_t iStack_2d8;
    ulong ***pppuStack_2d0;
    code *pcStack_2c8;
    uint64_t uStack_2c0;
    ulong uStack_2b8;
    ulong *puStack_2b0;
    int64_t iStack_2a8;
    ulong uStack_298;
    ulong *puStack_290;
    int64_t iStack_288;
    ulong ***pppuStack_280;
    code *pcStack_278;
    uint64_t uStack_270;
    uchar auStack_260 [16];
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    ulong *puStack_220;
    ulong uStack_218;
    code *pcStack_210;
    int64_t iStack_208;
    ulong ***pppuStack_200;
    code *pcStack_1f8;
    ulong uStack_1a0;
    ulong *puStack_198;
    uint uStack_190;
    ushort uStack_18c;
    uchar uStack_18a;
    uchar uStack_189;
    uchar uStack_188;
    uchar uStack_187;
    uchar uStack_186;
    uchar uStack_185;
    uint uStack_184;
    ushort uStack_180;
    int64_t iStack_178;
    uchar ***pppuStack_170;
    code *pcStack_168;
    ulong uStack_160;
    ulong *puStack_150;
    ulong uStack_148;
    ulong uStack_140;
    char *pcStack_138;
    ulong uStack_130;
    int64_t iStack_128;
    ulong uStack_118;
    ulong *puStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    code *pcStack_f8;
    ulong uStack_a8;
    ulong *puStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    ulong *puStack_80;
    uint64_t uStack_70;
    int64_t iStack_68;
    ulong uStack_58;
    ulong *puStack_50;
    ulong uStack_48;
    uint8_t *puStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar27 = sp_el0;
    iStack_38 = *(iVar27 + 0x5e0);
    puVar19 = arg1 + 0xb28;
    uVar7 = *(*(arg1 + 0x8c0) + 2);
    *(arg1 + 0xb28) = 0;
    *(arg1 + 0xb30) = 0;
    *(arg1 + 0xb38) = 0;
    *(arg1 + 0xb40) = 0;
    *(arg1 + 0xb48) = 0;
    *(arg1 + 0xb50) = 0;
    *(arg1 + 0xb58) = 0;
    *(arg1 + 0xb60) = 0;
    *(arg1 + 0xb68) = 0;
    *(arg1 + 0xb70) = 0;
    *(arg1 + 0xb78) = 0;
    *(arg1 + 0xb80) = 0;
    *(arg1 + 0xb88) = 0;
    *(arg1 + 0xb90) = 0;
    *(arg1 + 0xb98) = 0;
    *(arg1 + 0xb28) = 0x80ff;
    *(arg1 + 0xba0) = 0;
    uStack_58 = CONCAT62(0x20000,uVar7);
    puStack_50 = puVar19;
    iVar12 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_58,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar7 = *(*(arg1 + 0x8c0) + 2);
    *puVar19 = 0;
    *(arg1 + 0xb30) = 0;
    *(arg1 + 0xb38) = 0;
    *(arg1 + 0xb40) = 0;
    *(arg1 + 0xb48) = 0;
    *(arg1 + 0xb50) = 0;
    *(arg1 + 0xb58) = 0;
    *(arg1 + 0xb60) = 0;
    *(arg1 + 0xb68) = 0;
    *(arg1 + 0xb70) = 0;
    *(arg1 + 0xb78) = 0;
    *(arg1 + 0xb80) = 0;
    *(arg1 + 0xb88) = 0;
    *(arg1 + 0xb90) = 0;
    *(arg1 + 0xb98) = 0;
    *(arg1 + 0xba0) = 0;
    *(arg1 + 0xb28) = 0x1ee;
    uStack_58 = CONCAT62(0x20000,uVar7);
    puStack_50 = puVar19;
    iVar12 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_58,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar7 = *(*(arg1 + 0x8c0) + 2);
    *puVar19 = 0;
    *(arg1 + 0xb30) = 0;
    *(arg1 + 0xb38) = 0;
    *(arg1 + 0xb40) = 0;
    *(arg1 + 0xb48) = 0;
    *(arg1 + 0xb50) = 0;
    *(arg1 + 0xb58) = 0;
    *(arg1 + 0xb60) = 0;
    *(arg1 + 0xb68) = 0;
    *(arg1 + 0xb70) = 0;
    *(arg1 + 0xb78) = 0;
    *(arg1 + 0xb80) = 0;
    *(arg1 + 0xb88) = 0;
    *(arg1 + 0xb90) = 0;
    *(arg1 + 0xb98) = 0;
    *(arg1 + 0xba0) = 0;
    *(arg1 + 0xb28) = 0xb0ff;
    uStack_58 = CONCAT62(0x20000,uVar7);
    puStack_50 = puVar19;
    iVar12 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_58,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar27 = *(arg1 + 0x8c0);
    uVar7 = *(iVar27 + 2);
    uVar8 = *(iVar27 + 2);
    *(arg1 + 0xc18) = 0;
    *(arg1 + 0xc20) = 0;
    *(arg1 + 0xc08) = 0;
    *(arg1 + 0xc10) = 0;
    *(arg1 + 0xbf8) = 0;
    *(arg1 + 0xc00) = 0;
    *(arg1 + 0xbe8) = 0;
    *(arg1 + 0xbf0) = 0;
    *(arg1 + 0xbd8) = 0;
    *(arg1 + 0xbe0) = 0;
    *(arg1 + 0xbc8) = 0;
    *(arg1 + 0xbd0) = 0;
    *(arg1 + 3000) = 0;
    *(arg1 + 0xbc0) = 0;
    *(arg1 + 0xba8) = 0;
    *(arg1 + 0xbb0) = 0;
    *(arg1 + 0xb98) = 0;
    *(arg1 + 0xba0) = 0;
    *(arg1 + 0xb88) = 0;
    *(arg1 + 0xb90) = 0;
    *(arg1 + 0xb78) = 0;
    *(arg1 + 0xb80) = 0;
    *(arg1 + 0xb68) = 0;
    *(arg1 + 0xb70) = 0;
    *(arg1 + 0xb58) = 0;
    *(arg1 + 0xb60) = 0;
    *(arg1 + 0xb48) = 0;
    *(arg1 + 0xb50) = 0;
    *(arg1 + 0xb38) = 0;
    *(arg1 + 0xb40) = 0;
    *puVar19 = 0;
    *(arg1 + 0xb30) = 0;
    *(arg1 + 0xb28) = 0x21;
    uStack_58 = CONCAT62(0x10000,uVar7);
    uStack_48 = CONCAT42(0x10001,uVar8);
    puStack_50 = puVar19;
    puStack_40 = arg1 + 0xba8;
    iVar12 = i2c_transfer(*(iVar27 + 0x18),&uStack_58,2);
    if (iVar12 == 2) {
        uVar30 = *(arg1 + 0xba8);
        _printk(0x80011e8,"lt9611uxc_get_version",uVar30);
    }
    else {
        _printk(0x80006dd,"lt9611uxc_read");
        _printk(0x8000396,"lt9611uxc_get_version");
        uVar30 = 0;
    }
    uVar7 = *(*(arg1 + 0x8c0) + 2);
    *puVar19 = 0;
    *(arg1 + 0xb30) = 0;
    *(arg1 + 0xb38) = 0;
    *(arg1 + 0xb40) = 0;
    *(arg1 + 0xb48) = 0;
    *(arg1 + 0xb50) = 0;
    *(arg1 + 0xb58) = 0;
    *(arg1 + 0xb60) = 0;
    *(arg1 + 0xb68) = 0;
    *(arg1 + 0xb70) = 0;
    *(arg1 + 0xb78) = 0;
    *(arg1 + 0xb80) = 0;
    *(arg1 + 0xb88) = 0;
    *(arg1 + 0xb90) = 0;
    *(arg1 + 0xb98) = 0;
    *(arg1 + 0xba0) = 0;
    *(arg1 + 0xb28) = 0x80ff;
    uStack_58 = CONCAT62(0x20000,uVar7);
    puStack_50 = puVar19;
    iVar12 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_58,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar7 = *(*(arg1 + 0x8c0) + 2);
    *puVar19 = 0;
    *(arg1 + 0xb30) = 0;
    *(arg1 + 0xb38) = 0;
    *(arg1 + 0xb40) = 0;
    *(arg1 + 0xb48) = 0;
    *(arg1 + 0xb50) = 0;
    *(arg1 + 0xb58) = 0;
    *(arg1 + 0xb60) = 0;
    *(arg1 + 0xb68) = 0;
    *(arg1 + 0xb70) = 0;
    *(arg1 + 0xb78) = 0;
    *(arg1 + 0xb80) = 0;
    *(arg1 + 0xb88) = 0;
    *(arg1 + 0xb90) = 0;
    *(arg1 + 0xb98) = 0;
    *(arg1 + 0xba0) = 0;
    *(arg1 + 0xb28) = 0xee;
    uStack_58 = CONCAT62(0x20000,uVar7);
    puStack_50 = puVar19;
    iVar12 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_58,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    msleep(0x32);
    iVar27 = sp_el0;
    if (*(iVar27 + 0x5e0) == iStack_38) {
        return uVar30;
    }
    iVar17 = __stack_chk_fail();
    *extraout_x18 = sym.lt9611uxc_flash_write_en;
    pcStack_88 = sym.lt9611uxc_flash_write_en;
    iVar27 = sp_el0;
    iStack_98 = *(iVar27 + 0x5e0);
    puVar40 = iVar17 + 0xb28;
    uVar7 = *(*(iVar17 + 0x8c0) + 2);
    *(iVar17 + 0xb28) = 0;
    *(iVar17 + 0xb30) = 0;
    *(iVar17 + 0xb38) = 0;
    *(iVar17 + 0xb40) = 0;
    *(iVar17 + 0xb48) = 0;
    *(iVar17 + 0xb50) = 0;
    *(iVar17 + 0xb58) = 0;
    *(iVar17 + 0xb60) = 0;
    *(iVar17 + 0xb68) = 0;
    *(iVar17 + 0xb70) = 0;
    *(iVar17 + 0xb78) = 0;
    *(iVar17 + 0xb80) = 0;
    *(iVar17 + 0xb88) = 0;
    *(iVar17 + 0xb90) = 0;
    *(iVar17 + 0xb98) = 0;
    *(iVar17 + 0xb28) = 0x81ff;
    *(iVar17 + 0xba0) = 0;
    uStack_a8 = CONCAT62(0x20000,uVar7);
    puStack_a0 = puVar40;
    puStack_90 = &stack0xffffffffffffffd0;
    puStack_80 = puVar19;
    uStack_70 = uVar30;
    iStack_68 = arg1;
    iVar12 = i2c_transfer(*(*(iVar17 + 0x8c0) + 0x18),&uStack_a8,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar9 = *(*(iVar17 + 0x8c0) + 2);
    *puVar40 = 0;
    *(iVar17 + 0xb30) = 0;
    *(iVar17 + 0xb38) = 0;
    *(iVar17 + 0xb40) = 0;
    *(iVar17 + 0xb48) = 0;
    *(iVar17 + 0xb50) = 0;
    *(iVar17 + 0xb58) = 0;
    *(iVar17 + 0xb60) = 0;
    *(iVar17 + 0xb68) = 0;
    *(iVar17 + 0xb70) = 0;
    *(iVar17 + 0xb78) = 0;
    *(iVar17 + 0xb80) = 0;
    *(iVar17 + 0xb88) = 0;
    *(iVar17 + 0xb90) = 0;
    *(iVar17 + 0xb98) = 0;
    *(iVar17 + 0xba0) = 0;
    *(iVar17 + 0xb28) = 0xbf08;
    uStack_a8._0_4_ = uVar9;
    uStack_a8._0_6_ = CONCAT24(2,uStack_a8);
    uStack_a8 = uStack_a8;
    puStack_a0 = puVar40;
    iVar12 = i2c_transfer(*(*(iVar17 + 0x8c0) + 0x18),&uStack_a8,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    msleep(0x14);
    uVar7 = *(*(iVar17 + 0x8c0) + 2);
    *puVar40 = 0;
    *(iVar17 + 0xb30) = 0;
    *(iVar17 + 0xb38) = 0;
    *(iVar17 + 0xb40) = 0;
    *(iVar17 + 0xb48) = 0;
    *(iVar17 + 0xb50) = 0;
    *(iVar17 + 0xb58) = 0;
    *(iVar17 + 0xb60) = 0;
    *(iVar17 + 0xb68) = 0;
    *(iVar17 + 0xb70) = 0;
    *(iVar17 + 0xb78) = 0;
    *(iVar17 + 0xb80) = 0;
    *(iVar17 + 0xb88) = 0;
    *(iVar17 + 0xb90) = 0;
    *(iVar17 + 0xb98) = 0;
    *(iVar17 + 0xba0) = 0;
    *(iVar17 + 0xb28) = 0xff08;
    uStack_a8 = CONCAT62(0x20000,uVar7);
    puStack_a0 = puVar40;
    iVar12 = i2c_transfer(*(*(iVar17 + 0x8c0) + 0x18),&uStack_a8,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    msleep(0x14);
    uVar7 = *(*(iVar17 + 0x8c0) + 2);
    *puVar40 = 0;
    *(iVar17 + 0xb30) = 0;
    *(iVar17 + 0xb38) = 0;
    *(iVar17 + 0xb40) = 0;
    *(iVar17 + 0xb48) = 0;
    *(iVar17 + 0xb50) = 0;
    *(iVar17 + 0xb58) = 0;
    *(iVar17 + 0xb60) = 0;
    *(iVar17 + 0xb68) = 0;
    *(iVar17 + 0xb70) = 0;
    *(iVar17 + 0xb78) = 0;
    *(iVar17 + 0xb80) = 0;
    *(iVar17 + 0xb88) = 0;
    *(iVar17 + 0xb90) = 0;
    *(iVar17 + 0xb98) = 0;
    *(iVar17 + 0xba0) = 0;
    *(iVar17 + 0xb28) = 0x80ff;
    uStack_a8 = CONCAT62(0x20000,uVar7);
    puStack_a0 = puVar40;
    iVar12 = i2c_transfer(*(*(iVar17 + 0x8c0) + 0x18),&uStack_a8,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar9 = *(*(iVar17 + 0x8c0) + 2);
    *puVar40 = 0;
    *(iVar17 + 0xb30) = 0;
    *(iVar17 + 0xb38) = 0;
    *(iVar17 + 0xb40) = 0;
    *(iVar17 + 0xb48) = 0;
    *(iVar17 + 0xb50) = 0;
    *(iVar17 + 0xb58) = 0;
    *(iVar17 + 0xb60) = 0;
    *(iVar17 + 0xb68) = 0;
    *(iVar17 + 0xb70) = 0;
    *(iVar17 + 0xb78) = 0;
    *(iVar17 + 0xb80) = 0;
    *(iVar17 + 0xb88) = 0;
    *(iVar17 + 0xb90) = 0;
    *(iVar17 + 0xb98) = 0;
    *(iVar17 + 0xba0) = 0;
    *(iVar17 + 0xb28) = 0x45a;
    uStack_a8._0_4_ = uVar9;
    uStack_a8._0_6_ = CONCAT24(2,uStack_a8);
    uStack_a8 = uStack_a8;
    puStack_a0 = puVar40;
    iVar12 = i2c_transfer(*(*(iVar17 + 0x8c0) + 0x18),&uStack_a8,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar9 = *(*(iVar17 + 0x8c0) + 2);
    *puVar40 = 0;
    *(iVar17 + 0xb30) = 0;
    *(iVar17 + 0xb38) = 0;
    *(iVar17 + 0xb40) = 0;
    *(iVar17 + 0xb48) = 0;
    *(iVar17 + 0xb50) = 0;
    *(iVar17 + 0xb58) = 0;
    *(iVar17 + 0xb60) = 0;
    *(iVar17 + 0xb68) = 0;
    *(iVar17 + 0xb70) = 0;
    *(iVar17 + 0xb78) = 0;
    *(iVar17 + 0xb80) = 0;
    *(iVar17 + 0xb88) = 0;
    *(iVar17 + 0xb90) = 0;
    *(iVar17 + 0xb98) = 0;
    *(iVar17 + 0xba0) = 0;
    *(iVar17 + 0xb28) = 0x5a;
    uStack_a8._0_4_ = uVar9;
    uStack_a8._0_6_ = CONCAT24(2,uStack_a8);
    uStack_a8 = uStack_a8;
    puStack_a0 = puVar40;
    uVar30 = i2c_transfer(*(*(iVar17 + 0x8c0) + 0x18),&uStack_a8,1);
    if (uVar30 < 1) {
        uVar30 = _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar27 = sp_el0;
    if (*(iVar27 + 0x5e0) == iStack_98) {
        return uVar30;
    }
    iVar17 = __stack_chk_fail();
    *extraout_x18_00 = sym.lt9611uxc_block_erase;
    pcStack_f8 = sym.lt9611uxc_block_erase;
    iVar27 = sp_el0;
    iStack_108 = *(iVar27 + 0x5e0);
    ppuStack_100 = &puStack_90;
    _printk(0x80005d5,"lt9611uxc_block_erase");
    iVar27 = 0;
    puVar19 = iVar17 + 0xb28;
    do {
        uVar7 = *(iVar27 + 0x800173e);
        uVar9 = *(*(iVar17 + 0x8c0) + 2);
        *puVar19 = 0;
        *(iVar17 + 0xb30) = 0;
        *(iVar17 + 0xb38) = 0;
        *(iVar17 + 0xb40) = 0;
        *(iVar17 + 0xb48) = 0;
        *(iVar17 + 0xb50) = 0;
        *(iVar17 + 0xb58) = 0;
        *(iVar17 + 0xb60) = 0;
        *(iVar17 + 0xb68) = 0;
        *(iVar17 + 0xb70) = 0;
        *(iVar17 + 0xb78) = 0;
        *(iVar17 + 0xb80) = 0;
        *(iVar17 + 0xb88) = 0;
        *(iVar17 + 0xb90) = 0;
        *(iVar17 + 0xb98) = 0;
        *(iVar17 + 0xba0) = 0;
        *(iVar17 + 0xb28) = uVar7;
        uStack_118 = CONCAT24(2,uVar9);
        puStack_110 = puVar19;
        iVar12 = i2c_transfer(*(*(iVar17 + 0x8c0) + 0x18),&uStack_118,1);
        if (iVar12 < 1) {
            _printk(0x8001311,"lt9611uxc_write_byte");
        }
        iVar27 = iVar27 + 2;
    } while (iVar27 != 0x12);
    uVar30 = msleep(3000);
    iVar27 = sp_el0;
    if (*(iVar27 + 0x5e0) == iStack_108) {
        return uVar30;
    }
    auVar42 = __stack_chk_fail();
    iVar22 = auVar42._0_8_;
    *extraout_x18_01 = sym.lt9611uxc_flash_read_addr_set;
    pcStack_168 = sym.lt9611uxc_flash_read_addr_set;
    uStack_160 = 2;
    uStack_148 = 0x800173e;
    pcStack_138 = "lt9611uxc_write_byte";
    uStack_130 = 0x8001311;
    iVar27 = sp_el0;
    iStack_178 = *(iVar27 + 0x5e0);
    uStack_189 = auVar42[10];
    uStack_190 = 0xa05a5f5e;
    uStack_188 = 0x5c;
    uStack_18c = 0x805a;
    uStack_186 = 0x5d;
    uStack_187 = auVar42[9];
    uStack_184 = 0x805a905a;
    uVar28 = 0x5f;
    uStack_180 = 0x2158;
    uVar26 = 0x5e;
    uStack_18a = 0x5b;
    uStack_185 = auVar42[8];
    uStack_140 = 0x12;
    iVar27 = 0;
    pppuStack_170 = &ppuStack_100;
    puStack_150 = puVar19;
    iStack_128 = iVar17;
    while( true ) {
        uVar25 = 1;
        uVar9 = *(*(iVar22 + 0x8c0) + 2);
        *(iVar22 + 0xb28) = 0;
        *(iVar22 + 0xb30) = 0;
        *(iVar22 + 0xb38) = 0;
        *(iVar22 + 0xb40) = 0;
        *(iVar22 + 0xb48) = 0;
        *(iVar22 + 0xb50) = 0;
        *(iVar22 + 0xb58) = 0;
        *(iVar22 + 0xb60) = 0;
        *(iVar22 + 0xb68) = 0;
        *(iVar22 + 0xb70) = 0;
        *(iVar22 + 0xb78) = 0;
        *(iVar22 + 0xb80) = 0;
        *(iVar22 + 0xb88) = 0;
        *(iVar22 + 0xb90) = 0;
        *(iVar22 + 0xb98) = 0;
        *(iVar22 + 0xba0) = 0;
        *(iVar22 + 0xb28) = uVar26;
        *(iVar22 + 0xb29) = uVar28;
        uStack_1a0 = CONCAT24(2,uVar9);
        puStack_198 = iVar22 + 0xb28;
        uVar30 = i2c_transfer(*(*(iVar22 + 0x8c0) + 0x18),&uStack_1a0);
        if (uVar30 < 1) {
            uVar30 = _printk(0x8001311,"lt9611uxc_write_byte");
        }
        if (iVar27 == 0x10) break;
        uVar26 = *(&uStack_190 + iVar27 + 2);
        uVar28 = *(&uStack_190 + iVar27 + 3);
        iVar27 = iVar27 + 2;
    }
    iVar27 = sp_el0;
    if (*(iVar27 + 0x5e0) == iStack_178) {
        return uVar30;
    }
    auVar42 = __stack_chk_fail();
    iVar17 = auVar42._0_8_;
    *extraout_x18_02 = sym.lt9611uxc_fw_read_back;
    pcStack_1f8 = sym.lt9611uxc_fw_read_back;
    iVar27 = sp_el0;
    iStack_208 = *(iVar27 + 0x5e0);
    uVar30 = uVar25 & 0xffffffff;
    bVar10 = (uVar25 & 0x1f) != 0;
    puVar19 = iVar17 + 0xb28;
    uStack_238 = 0;
    uStack_230 = 0;
    uVar33 = bVar10;
    uVar7 = *(*(iVar17 + 0x8c0) + 2);
    *(iVar17 + 0xb28) = 0;
    *(iVar17 + 0xb30) = 0;
    *(iVar17 + 0xb38) = 0;
    *(iVar17 + 0xb40) = 0;
    *(iVar17 + 0xb48) = 0;
    *(iVar17 + 0xb50) = 0;
    *(iVar17 + 0xb58) = 0;
    *(iVar17 + 0xb60) = 0;
    *(iVar17 + 0xb68) = 0;
    *(iVar17 + 0xb70) = 0;
    *(iVar17 + 0xb78) = 0;
    *(iVar17 + 0xb80) = 0;
    *(iVar17 + 0xb88) = 0;
    *(iVar17 + 0xb90) = 0;
    *(iVar17 + 0xb98) = 0;
    *(iVar17 + 0xba0) = 0;
    *(iVar17 + 0xb28) = 0x80ff;
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_228 = CONCAT62(0x20000,uVar7);
    puStack_220 = puVar19;
    pppuStack_200 = &pppuStack_170;
    iVar12 = i2c_transfer(*(*(iVar17 + 0x8c0) + 0x18),&uStack_228,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    pcVar34 = 0x2;
    uVar9 = *(*(iVar17 + 0x8c0) + 2);
    *puVar19 = 0;
    *(iVar17 + 0xb30) = 0;
    *(iVar17 + 0xb38) = 0;
    *(iVar17 + 0xb40) = 0;
    *(iVar17 + 0xb48) = 0;
    *(iVar17 + 0xb50) = 0;
    *(iVar17 + 0xb58) = 0;
    *(iVar17 + 0xb60) = 0;
    *(iVar17 + 0xb68) = 0;
    *(iVar17 + 0xb70) = 0;
    *(iVar17 + 0xb78) = 0;
    *(iVar17 + 0xb80) = 0;
    *(iVar17 + 0xb88) = 0;
    *(iVar17 + 0xb90) = 0;
    *(iVar17 + 0xb98) = 0;
    *(iVar17 + 0xba0) = 0;
    *(iVar17 + 0xb28) = 0x1ee;
    uStack_228._0_4_ = uVar9;
    uStack_228._0_6_ = CONCAT24(2,uStack_228);
    uStack_228 = uStack_228;
    puStack_220 = puVar19;
    iVar12 = i2c_transfer(*(*(iVar17 + 0x8c0) + 0x18),&uStack_228,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar9 = *(*(iVar17 + 0x8c0) + 2);
    *puVar19 = 0;
    *(iVar17 + 0xb30) = 0;
    *(iVar17 + 0xb38) = 0;
    *(iVar17 + 0xb40) = 0;
    *(iVar17 + 0xb48) = 0;
    *(iVar17 + 0xb50) = 0;
    *(iVar17 + 0xb58) = 0;
    *(iVar17 + 0xb60) = 0;
    *(iVar17 + 0xb68) = 0;
    *(iVar17 + 0xb70) = 0;
    *(iVar17 + 0xb78) = 0;
    *(iVar17 + 0xb80) = 0;
    *(iVar17 + 0xb88) = 0;
    *(iVar17 + 0xb90) = 0;
    *(iVar17 + 0xb98) = 0;
    *(iVar17 + 0xba0) = 0;
    *(iVar17 + 0xb28) = 0x845a;
    uStack_228._0_4_ = uVar9;
    uStack_228._0_6_ = CONCAT24(2,uStack_228);
    uStack_228 = uStack_228;
    puStack_220 = puVar19;
    iVar12 = i2c_transfer(*(*(iVar17 + 0x8c0) + 0x18),&uStack_228,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar9 = *(*(iVar17 + 0x8c0) + 2);
    *puVar19 = 0;
    *(iVar17 + 0xb30) = 0;
    *(iVar17 + 0xb38) = 0;
    *(iVar17 + 0xb40) = 0;
    *(iVar17 + 0xb48) = 0;
    *(iVar17 + 0xb50) = 0;
    *(iVar17 + 0xb58) = 0;
    *(iVar17 + 0xb60) = 0;
    *(iVar17 + 0xb68) = 0;
    *(iVar17 + 0xb70) = 0;
    *(iVar17 + 0xb78) = 0;
    *(iVar17 + 0xb80) = 0;
    *(iVar17 + 0xb88) = 0;
    *(iVar17 + 0xb90) = 0;
    *(iVar17 + 0xb98) = 0;
    *(iVar17 + 0xba0) = 0;
    *(iVar17 + 0xb28) = 0x805a;
    uStack_228._0_4_ = uVar9;
    uStack_228._0_6_ = CONCAT24(2,uStack_228);
    uStack_228 = uStack_228;
    puStack_220 = puVar19;
    uVar18 = i2c_transfer(*(*(iVar17 + 0x8c0) + 0x18),&uStack_228,1);
    if (uVar18 < 1) {
        uVar18 = _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar16 = uVar25;
    iVar12 = iVar16 + 0x1f;
    if (-1 < iVar16) {
        iVar12 = iVar16;
    }
    uVar14 = bVar10 + (iVar12 >> 5);
    uVar25 = uVar14;
    if (0 < uVar14) {
        uVar30 = 0;
        unaff_x26 = iVar17 + 0xba8;
        unaff_x27 = 1;
        unaff_x28 = 0x200001;
        uVar33 = 0x5f;
        pcVar34 = "lt9611uxc_read";
        do {
            uStack_238 = 0;
            uStack_230 = 0;
            uStack_248 = 0;
            uStack_240 = 0;
            sym.lt9611uxc_flash_read_addr_set(iVar17,uVar30 & 0xffffffff);
            iVar27 = *(iVar17 + 0x8c0);
            uVar7 = *(iVar27 + 2);
            uVar8 = *(iVar27 + 2);
            *(iVar17 + 0xc18) = 0;
            *(iVar17 + 0xc20) = 0;
            *(iVar17 + 0xc08) = 0;
            *(iVar17 + 0xc10) = 0;
            *(iVar17 + 0xbf8) = 0;
            *(iVar17 + 0xc00) = 0;
            *(iVar17 + 0xbe8) = 0;
            *(iVar17 + 0xbf0) = 0;
            *(iVar17 + 0xbd8) = 0;
            *(iVar17 + 0xbe0) = 0;
            *(iVar17 + 0xbc8) = 0;
            *(iVar17 + 0xbd0) = 0;
            *(iVar17 + 3000) = 0;
            *(iVar17 + 0xbc0) = 0;
            *(iVar17 + 0xba8) = 0;
            *(iVar17 + 0xbb0) = 0;
            *(iVar17 + 0xb98) = 0;
            *(iVar17 + 0xba0) = 0;
            *(iVar17 + 0xb88) = 0;
            *(iVar17 + 0xb90) = 0;
            *(iVar17 + 0xb78) = 0;
            *(iVar17 + 0xb80) = 0;
            *(iVar17 + 0xb68) = 0;
            *(iVar17 + 0xb70) = 0;
            *(iVar17 + 0xb58) = 0;
            *(iVar17 + 0xb60) = 0;
            *(iVar17 + 0xb48) = 0;
            *(iVar17 + 0xb50) = 0;
            *(iVar17 + 0xb38) = 0;
            *(iVar17 + 0xb40) = 0;
            *puVar19 = 0;
            *(iVar17 + 0xb30) = 0;
            *(iVar17 + 0xb28) = 0x5f;
            uStack_228 = CONCAT62(0x10000,uVar7);
            uStack_218 = CONCAT42(0x200001,uVar8);
            puStack_220 = puVar19;
            pcStack_210 = unaff_x26;
            uVar18 = i2c_transfer(*(iVar27 + 0x18),&uStack_228,2);
            if (uVar18 == 2) {
                uStack_248 = *unaff_x26;
                uStack_240 = *(iVar17 + 0xbb0);
                uStack_238 = *(iVar17 + 3000);
                uStack_230 = *(iVar17 + 0xbc0);
            }
            else {
                uVar18 = _printk(0x80006dd,"lt9611uxc_read");
            }
            puVar40 = auVar42._8_8_ + uVar30;
            uVar30 = uVar30 + 0x20;
            uVar14 = uVar25 - 1;
            uVar25 = uVar14;
            *puVar40 = uStack_248;
            puVar40[1] = uStack_240;
            puVar40[2] = uStack_238;
            puVar40[3] = uStack_230;
        } while (uVar14 != 0);
        uVar25 = 0;
    }
    iVar27 = sp_el0;
    if (*(iVar27 + 0x5e0) == iStack_208) {
        return uVar18;
    }
    iVar17 = __stack_chk_fail();
    *extraout_x18_03 = sym.lt9611uxc_flash_write_config;
    pcStack_278 = sym.lt9611uxc_flash_write_config;
    iVar27 = sp_el0;
    iStack_288 = *(iVar27 + 0x5e0);
    pppuStack_280 = &pppuStack_200;
    uStack_270 = uVar30;
    auStack_260 = auVar42;
    sym.lt9611uxc_flash_write_en(iVar17);
    puVar40 = iVar17 + 0xb28;
    uVar7 = *(*(iVar17 + 0x8c0) + 2);
    *(iVar17 + 0xb28) = 0;
    *(iVar17 + 0xb30) = 0;
    *(iVar17 + 0xb38) = 0;
    *(iVar17 + 0xb40) = 0;
    *(iVar17 + 0xb48) = 0;
    *(iVar17 + 0xb50) = 0;
    *(iVar17 + 0xb58) = 0;
    *(iVar17 + 0xb60) = 0;
    *(iVar17 + 0xb68) = 0;
    *(iVar17 + 0xb70) = 0;
    *(iVar17 + 0xb78) = 0;
    *(iVar17 + 0xb80) = 0;
    *(iVar17 + 0xb88) = 0;
    *(iVar17 + 0xb90) = 0;
    *(iVar17 + 0xb98) = 0;
    *(iVar17 + 0xb28) = 0x80ff;
    *(iVar17 + 0xba0) = 0;
    uStack_298 = CONCAT62(0x20000,uVar7);
    puStack_290 = puVar40;
    iVar12 = i2c_transfer(*(*(iVar17 + 0x8c0) + 0x18),&uStack_298,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar9 = *(*(iVar17 + 0x8c0) + 2);
    *puVar40 = 0;
    *(iVar17 + 0xb30) = 0;
    *(iVar17 + 0xb38) = 0;
    *(iVar17 + 0xb40) = 0;
    *(iVar17 + 0xb48) = 0;
    *(iVar17 + 0xb50) = 0;
    *(iVar17 + 0xb58) = 0;
    *(iVar17 + 0xb60) = 0;
    *(iVar17 + 0xb68) = 0;
    *(iVar17 + 0xb70) = 0;
    *(iVar17 + 0xb78) = 0;
    *(iVar17 + 0xb80) = 0;
    *(iVar17 + 0xb88) = 0;
    *(iVar17 + 0xb90) = 0;
    *(iVar17 + 0xb98) = 0;
    *(iVar17 + 0xba0) = 0;
    *(iVar17 + 0xb28) = 0xdf5e;
    uStack_298._0_4_ = uVar9;
    uStack_298._0_6_ = CONCAT24(2,uStack_298);
    uStack_298 = uStack_298;
    puStack_290 = puVar40;
    iVar12 = i2c_transfer(*(*(iVar17 + 0x8c0) + 0x18),&uStack_298,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar9 = *(*(iVar17 + 0x8c0) + 2);
    *puVar40 = 0;
    *(iVar17 + 0xb30) = 0;
    *(iVar17 + 0xb38) = 0;
    *(iVar17 + 0xb40) = 0;
    *(iVar17 + 0xb48) = 0;
    *(iVar17 + 0xb50) = 0;
    *(iVar17 + 0xb58) = 0;
    *(iVar17 + 0xb60) = 0;
    *(iVar17 + 0xb68) = 0;
    *(iVar17 + 0xb70) = 0;
    *(iVar17 + 0xb78) = 0;
    *(iVar17 + 0xb80) = 0;
    *(iVar17 + 0xb88) = 0;
    *(iVar17 + 0xb90) = 0;
    *(iVar17 + 0xb98) = 0;
    *(iVar17 + 0xba0) = 0;
    *(iVar17 + 0xb28) = 0x205a;
    uStack_298._0_4_ = uVar9;
    uStack_298._0_6_ = CONCAT24(2,uStack_298);
    uStack_298 = uStack_298;
    puStack_290 = puVar40;
    iVar12 = i2c_transfer(*(*(iVar17 + 0x8c0) + 0x18),&uStack_298,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar9 = *(*(iVar17 + 0x8c0) + 2);
    *puVar40 = 0;
    *(iVar17 + 0xb30) = 0;
    *(iVar17 + 0xb38) = 0;
    *(iVar17 + 0xb40) = 0;
    *(iVar17 + 0xb48) = 0;
    *(iVar17 + 0xb50) = 0;
    *(iVar17 + 0xb58) = 0;
    *(iVar17 + 0xb60) = 0;
    *(iVar17 + 0xb68) = 0;
    *(iVar17 + 0xb70) = 0;
    *(iVar17 + 0xb78) = 0;
    *(iVar17 + 0xb80) = 0;
    *(iVar17 + 0xb88) = 0;
    *(iVar17 + 0xb90) = 0;
    *(iVar17 + 0xb98) = 0;
    *(iVar17 + 0xba0) = 0;
    *(iVar17 + 0xb28) = 0x5a;
    uStack_298._0_4_ = uVar9;
    uStack_298._0_6_ = CONCAT24(2,uStack_298);
    uStack_298 = uStack_298;
    puStack_290 = puVar40;
    iVar12 = i2c_transfer(*(*(iVar17 + 0x8c0) + 0x18),&uStack_298,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar9 = *(*(iVar17 + 0x8c0) + 2);
    *puVar40 = 0;
    *(iVar17 + 0xb30) = 0;
    *(iVar17 + 0xb38) = 0;
    *(iVar17 + 0xb40) = 0;
    *(iVar17 + 0xb48) = 0;
    *(iVar17 + 0xb50) = 0;
    *(iVar17 + 0xb58) = 0;
    *(iVar17 + 0xb60) = 0;
    *(iVar17 + 0xb68) = 0;
    *(iVar17 + 0xb70) = 0;
    *(iVar17 + 0xb78) = 0;
    *(iVar17 + 0xb80) = 0;
    *(iVar17 + 0xb88) = 0;
    *(iVar17 + 0xb90) = 0;
    *(iVar17 + 0xb98) = 0;
    *(iVar17 + 0xba0) = 0;
    *(iVar17 + 0xb28) = 0x2158;
    uStack_298._0_4_ = uVar9;
    uStack_298._0_6_ = CONCAT24(2,uStack_298);
    uStack_298 = uStack_298;
    puStack_290 = puVar40;
    uVar30 = i2c_transfer(*(*(iVar17 + 0x8c0) + 0x18),&uStack_298,1);
    if (uVar30 < 1) {
        uVar30 = _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar27 = sp_el0;
    if (*(iVar27 + 0x5e0) == iStack_288) {
        return uVar30;
    }
    auVar42 = __stack_chk_fail();
    iVar22 = auVar42._0_8_;
    *extraout_x18_04 = sym.lt9611uxc_flash_write_addr_set;
    pcStack_2c8 = sym.lt9611uxc_flash_write_addr_set;
    uStack_2b8 = 2;
    iVar27 = sp_el0;
    iStack_2d8 = *(iVar27 + 0x5e0);
    puVar32 = iVar22 + 0xb28;
    uVar7 = *(*(iVar22 + 0x8c0) + 2);
    *(iVar22 + 0xb28) = 0;
    *(iVar22 + 0xb30) = 0;
    *(iVar22 + 0xb38) = 0;
    *(iVar22 + 0xb40) = 0;
    *(iVar22 + 0xb48) = 0;
    *(iVar22 + 0xb50) = 0;
    *(iVar22 + 0xb58) = 0;
    *(iVar22 + 0xb60) = 0;
    *(iVar22 + 0xb68) = 0;
    *(iVar22 + 0xb70) = 0;
    *(iVar22 + 0xb78) = 0;
    *(iVar22 + 0xb80) = 0;
    *(iVar22 + 0xb88) = 0;
    *(iVar22 + 0xb28) = 0x5b;
    *(iVar22 + 0xb90) = 0;
    *(iVar22 + 0xb98) = 0;
    *(iVar22 + 0xba0) = 0;
    *(iVar22 + 0xb29) = auVar42[10];
    uStack_2e8 = CONCAT62(0x20000,uVar7);
    puStack_2e0 = puVar32;
    pppuStack_2d0 = &pppuStack_280;
    uStack_2c0 = uVar33;
    puStack_2b0 = puVar40;
    iStack_2a8 = iVar17;
    iVar12 = i2c_transfer(*(*(iVar22 + 0x8c0) + 0x18),&uStack_2e8,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar9 = *(*(iVar22 + 0x8c0) + 2);
    *puVar32 = 0;
    *(iVar22 + 0xb30) = 0;
    *(iVar22 + 0xb38) = 0;
    *(iVar22 + 0xb40) = 0;
    *(iVar22 + 0xb48) = 0;
    *(iVar22 + 0xb50) = 0;
    *(iVar22 + 0xb58) = 0;
    *(iVar22 + 0xb60) = 0;
    *(iVar22 + 0xb68) = 0;
    *(iVar22 + 0xb70) = 0;
    *(iVar22 + 0xb78) = 0;
    *(iVar22 + 0xb80) = 0;
    *(iVar22 + 0xb88) = 0;
    *(iVar22 + 0xb90) = 0;
    *(iVar22 + 0xb98) = 0;
    *(iVar22 + 0xba0) = 0;
    *(iVar22 + 0xb28) = 0x5c;
    *(iVar22 + 0xb29) = auVar42[9];
    uStack_2e8._0_4_ = uVar9;
    uStack_2e8._0_6_ = CONCAT24(2,uStack_2e8);
    uStack_2e8 = uStack_2e8;
    puStack_2e0 = puVar32;
    iVar12 = i2c_transfer(*(*(iVar22 + 0x8c0) + 0x18),&uStack_2e8,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar9 = *(*(iVar22 + 0x8c0) + 2);
    *puVar32 = 0;
    *(iVar22 + 0xb30) = 0;
    *(iVar22 + 0xb38) = 0;
    *(iVar22 + 0xb40) = 0;
    *(iVar22 + 0xb48) = 0;
    *(iVar22 + 0xb50) = 0;
    *(iVar22 + 0xb58) = 0;
    *(iVar22 + 0xb60) = 0;
    *(iVar22 + 0xb68) = 0;
    *(iVar22 + 0xb70) = 0;
    *(iVar22 + 0xb78) = 0;
    *(iVar22 + 0xb80) = 0;
    *(iVar22 + 0xb88) = 0;
    *(iVar22 + 0xb90) = 0;
    *(iVar22 + 0xb98) = 0;
    *(iVar22 + 0xba0) = 0;
    *(iVar22 + 0xb28) = 0x5d;
    *(iVar22 + 0xb29) = auVar42[8];
    uStack_2e8._0_4_ = uVar9;
    uStack_2e8._0_6_ = CONCAT24(2,uStack_2e8);
    uStack_2e8 = uStack_2e8;
    puStack_2e0 = puVar32;
    iVar12 = i2c_transfer(*(*(iVar22 + 0x8c0) + 0x18),&uStack_2e8,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar9 = *(*(iVar22 + 0x8c0) + 2);
    *puVar32 = 0;
    *(iVar22 + 0xb30) = 0;
    *(iVar22 + 0xb38) = 0;
    *(iVar22 + 0xb40) = 0;
    *(iVar22 + 0xb48) = 0;
    *(iVar22 + 0xb50) = 0;
    *(iVar22 + 0xb58) = 0;
    *(iVar22 + 0xb60) = 0;
    *(iVar22 + 0xb68) = 0;
    *(iVar22 + 0xb70) = 0;
    *(iVar22 + 0xb78) = 0;
    *(iVar22 + 0xb80) = 0;
    *(iVar22 + 0xb88) = 0;
    *(iVar22 + 0xb90) = 0;
    *(iVar22 + 0xb98) = 0;
    *(iVar22 + 0xba0) = 0;
    *(iVar22 + 0xb28) = 0x105a;
    uStack_2e8._0_4_ = uVar9;
    uStack_2e8._0_6_ = CONCAT24(2,uStack_2e8);
    uStack_2e8 = uStack_2e8;
    puStack_2e0 = puVar32;
    iVar12 = i2c_transfer(*(*(iVar22 + 0x8c0) + 0x18),&uStack_2e8,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar14 = 1;
    uVar9 = *(*(iVar22 + 0x8c0) + 2);
    *puVar32 = 0;
    *(iVar22 + 0xb30) = 0;
    *(iVar22 + 0xb38) = 0;
    *(iVar22 + 0xb40) = 0;
    *(iVar22 + 0xb48) = 0;
    *(iVar22 + 0xb50) = 0;
    *(iVar22 + 0xb58) = 0;
    *(iVar22 + 0xb60) = 0;
    *(iVar22 + 0xb68) = 0;
    *(iVar22 + 0xb70) = 0;
    *(iVar22 + 0xb78) = 0;
    *(iVar22 + 0xb80) = 0;
    *(iVar22 + 0xb88) = 0;
    *(iVar22 + 0xb90) = 0;
    *(iVar22 + 0xb98) = 0;
    *(iVar22 + 0xba0) = 0;
    *(iVar22 + 0xb28) = 0x5a;
    uStack_2e8._0_4_ = uVar9;
    uStack_2e8._0_6_ = CONCAT24(2,uStack_2e8);
    uStack_2e8 = uStack_2e8;
    puStack_2e0 = puVar32;
    uVar30 = i2c_transfer(*(*(iVar22 + 0x8c0) + 0x18),&uStack_2e8);
    if (uVar30 < 1) {
        uVar30 = _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar27 = sp_el0;
    if (*(iVar27 + 0x5e0) == iStack_2d8) {
        return uVar30;
    }
    auVar42 = __stack_chk_fail();
    pcVar37 = auVar42._8_8_;
    iVar27 = auVar42._0_8_;
    *extraout_x18_05 = sym.lt9611uxc_firmware_write;
    pcStack_348 = sym.lt9611uxc_firmware_write;
    uStack_310 = 2;
    uStack_300 = 2;
    uVar15 = uVar14 + 0x1f;
    if (-1 < uVar14) {
        uVar15 = uVar14;
    }
    iVar17 = sp_el0;
    iStack_358 = *(iVar17 + 0x5e0);
    uVar30 = uVar15 >> 5;
    uVar29 = uVar14 % 0x20;
    puVar40 = iVar27 + 0xb28;
    puVar41 = iVar27 + 0xb29;
    pppuStack_350 = &pppuStack_2d0;
    uStack_340 = unaff_x28;
    uStack_338 = unaff_x27;
    pcStack_330 = unaff_x26;
    uStack_328 = uVar25;
    puStack_320 = puVar19;
    pcStack_318 = pcVar34;
    puStack_308 = puVar32;
    iStack_2f8 = iVar22;
    if (uVar14 < 0x20) {
        pcVar35 = NULL;
        uVar25 = uVar29;
        pcVar34 = unaff_x26;
    }
    else {
        pcVar35 = NULL;
        puVar32 = 0x21;
        pcVar34 = "lt9611uxc_write";
        uStack_39c = uVar15 >> 5;
        uStack_398 = uVar29;
        uStack_38c = uVar14;
        do {
            pcVar3 = pcVar37 + pcVar35;
            sym.lt9611uxc_flash_write_config(iVar27);
            uVar7 = *(*(iVar27 + 0x8c0) + 2);
            *(iVar27 + 0xb28) = 0x59;
            uVar4 = *(pcVar3 + 0x18);
            uVar23 = *pcVar3;
            uVar5 = *(pcVar3 + 8);
            uStack_378 = CONCAT62(0x210000,uVar7);
            *(iVar27 + 0xb39) = *(pcVar3 + 0x10);
            *(iVar27 + 0xb41) = uVar4;
            *puVar41 = uVar23;
            *(iVar27 + 0xb31) = uVar5;
            puStack_370 = puVar40;
            iVar12 = i2c_transfer(*(*(iVar27 + 0x8c0) + 0x18),&uStack_378,1);
            if (iVar12 < 1) {
                _printk(0x8001311,"lt9611uxc_write");
            }
            sym.lt9611uxc_flash_write_addr_set(iVar27,pcVar35 & 0xffffffff);
            msleep(0x14);
            pcVar35 = pcVar35 + 0x20;
            uVar14 = uVar30 - 1;
            uVar30 = uVar14;
        } while (uVar14 != 0);
        pcVar37 = pcVar37 + pcVar35;
        uVar30 = uStack_39c;
        uVar29 = uStack_398;
        uVar25 = uStack_398;
        uVar14 = uStack_38c;
    }
    if (0 < uVar29) {
        uStack_368 = 0xffffffffffffffff;
        uStack_360 = 0xffffffffffffffff;
        uStack_378 = 0xffffffffffffffff;
        puStack_370 = 0xffffffffffffffff;
        memcpy(&uStack_378,pcVar37,uVar25);
        sym.lt9611uxc_flash_write_config(iVar27);
        uVar7 = *(*(iVar27 + 0x8c0) + 2);
        *puVar41 = uStack_378;
        *(iVar27 + 0xb31) = puStack_370;
        *(iVar27 + 0xb39) = uStack_368;
        *(iVar27 + 0xb41) = uStack_360;
        *(iVar27 + 0xb28) = 0x59;
        uStack_388 = CONCAT62(0x210000,uVar7);
        puStack_380 = puVar40;
        iVar12 = i2c_transfer(*(*(iVar27 + 0x8c0) + 0x18),&uStack_388,1);
        if (iVar12 < 1) {
            _printk(0x8001311,"lt9611uxc_write");
        }
        sym.lt9611uxc_flash_write_addr_set(iVar27,pcVar35 & 0xffffffff);
        msleep(0x14);
    }
    msleep(0x14);
    uVar33 = _printk(0x8000dc1,"lt9611uxc_firmware_write",uVar14,uVar30,uVar25 & 0xffffffff);
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_358) {
        return uVar33;
    }
    auVar42 = __stack_chk_fail();
    puVar24 = auVar42._8_8_;
    iVar22 = auVar42._0_8_;
    *extraout_x18_06 = sym.lt9611uxc_firmware_upgrade;
    pcStack_3f8 = sym.lt9611uxc_firmware_upgrade;
    iVar17 = sp_el0;
    iStack_408 = *(iVar17 + 0x5e0);
    uVar33 = *puVar24;
    pppuStack_400 = &pppuStack_350;
    puStack_3f0 = puVar41;
    puStack_3e8 = puVar40;
    pcStack_3e0 = pcVar34;
    uStack_3d8 = uVar30;
    pcStack_3d0 = pcVar37;
    pcStack_3c8 = pcVar35;
    iStack_3c0 = iVar27;
    puStack_3b8 = puVar32;
    uStack_3b0 = uVar25;
    uStack_3a8 = uVar14;
    _printk(0x8000c20,"lt9611uxc_firmware_upgrade",uVar33 & 0xffffffff);
    iVar27 = uVar33 << 0x20;
    puVar19 = __kmalloc(iVar27 + 0x1f00000000 >> 0x20 & 0xffffffffffffffe0,0xdc0);
    uVar30 = 0;
    puStack_440 = puVar32;
    if (puVar19 != NULL) {
        iVar17 = 0;
        puVar40 = iVar22 + 0xb28;
        puVar41 = 0x8001730;
        pcVar35 = 0x2;
        pcVar37 = "lt9611uxc_write_byte";
        *(iVar22 + 0xc30) = 1;
        do {
            uVar7 = *(iVar17 + 0x8001730);
            uVar9 = *(*(iVar22 + 0x8c0) + 2);
            *puVar40 = 0;
            *(iVar22 + 0xb30) = 0;
            *(iVar22 + 0xb38) = 0;
            *(iVar22 + 0xb40) = 0;
            *(iVar22 + 0xb48) = 0;
            *(iVar22 + 0xb50) = 0;
            *(iVar22 + 0xb58) = 0;
            *(iVar22 + 0xb60) = 0;
            *(iVar22 + 0xb68) = 0;
            *(iVar22 + 0xb70) = 0;
            *(iVar22 + 0xb78) = 0;
            *(iVar22 + 0xb80) = 0;
            *(iVar22 + 0xb88) = 0;
            *(iVar22 + 0xb90) = 0;
            *(iVar22 + 0xb98) = 0;
            *(iVar22 + 0xba0) = 0;
            *(iVar22 + 0xb28) = uVar7;
            uStack_418 = CONCAT24(2,uVar9);
            puStack_410 = puVar40;
            iVar12 = i2c_transfer(*(*(iVar22 + 0x8c0) + 0x18),&uStack_418,1);
            if (iVar12 < 1) {
                _printk(0x8001311,"lt9611uxc_write_byte");
            }
            iVar17 = iVar17 + 2;
        } while (iVar17 != 0xe);
        sym.lt9611uxc_block_erase(iVar22);
        sym.lt9611uxc_block_erase(iVar22);
        sym.lt9611uxc_firmware_write(iVar22,puVar24[1],uVar33 & 0xffffffff);
        msleep(0x14);
        sym.lt9611uxc_fw_read_back(iVar22,puVar19,uVar33);
        iVar12 = bcmp(puVar24[1],puVar19,iVar27 >> 0x20);
        uVar23 = 0x8000ff4;
        if (iVar12 != 0) {
            uVar23 = 0x8000a82;
        }
        *(iVar22 + 0xc30) = (iVar12 != 0) << 1;
        _printk(uVar23,"lt9611uxc_firmware_upgrade");
        uVar30 = kfree(puVar19);
        pcVar34 = 0xe;
        puStack_440 = puVar19;
    }
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_408) {
        return uVar30;
    }
    pcVar20 = __stack_chk_fail();
    *extraout_x18_07 = sym.lt9611uxc_edid_en;
    pcStack_448 = sym.lt9611uxc_edid_en;
    iVar17 = sp_el0;
    iStack_458 = *(iVar17 + 0x5e0);
    pcVar36 = pcVar20 + 0xb28;
    uVar7 = *(*(pcVar20 + 0x8c0) + 2);
    *(pcVar20 + 0xb28) = 0;
    *(pcVar20 + 0xb30) = 0;
    *(pcVar20 + 0xb38) = 0;
    *(pcVar20 + 0xb40) = 0;
    *(pcVar20 + 0xb48) = 0;
    *(pcVar20 + 0xb50) = 0;
    *(pcVar20 + 0xb58) = 0;
    *(pcVar20 + 0xb60) = 0;
    *(pcVar20 + 0xb68) = 0;
    *(pcVar20 + 0xb70) = 0;
    *(pcVar20 + 0xb78) = 0;
    *(pcVar20 + 0xb80) = 0;
    *(pcVar20 + 0xb88) = 0;
    *(pcVar20 + 0xb90) = 0;
    *(pcVar20 + 0xb98) = 0;
    *(pcVar20 + 0xb28) = 0xb0ff;
    *(pcVar20 + 0xba0) = 0;
    uStack_468 = CONCAT62(0x20000,uVar7);
    pcStack_460 = pcVar36;
    pppuStack_450 = &pppuStack_400;
    puStack_430 = puVar24;
    iStack_428 = iVar22;
    iVar12 = i2c_transfer(*(*(pcVar20 + 0x8c0) + 0x18),&uStack_468,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar7 = *(*(pcVar20 + 0x8c0) + 2);
    *pcVar36 = 0;
    *(pcVar20 + 0xb30) = 0;
    *(pcVar20 + 0xb38) = 0;
    *(pcVar20 + 0xb40) = 0;
    *(pcVar20 + 0xb48) = 0;
    *(pcVar20 + 0xb50) = 0;
    *(pcVar20 + 0xb58) = 0;
    *(pcVar20 + 0xb60) = 0;
    *(pcVar20 + 0xb68) = 0;
    *(pcVar20 + 0xb70) = 0;
    *(pcVar20 + 0xb78) = 0;
    *(pcVar20 + 0xb80) = 0;
    *(pcVar20 + 0xb88) = 0;
    *(pcVar20 + 0xb90) = 0;
    *(pcVar20 + 0xb98) = 0;
    *(pcVar20 + 0xba0) = 0;
    *(pcVar20 + 0xb28) = 0x100b;
    uStack_468 = CONCAT62(0x20000,uVar7);
    pcStack_460 = pcVar36;
    uVar30 = i2c_transfer(*(*(pcVar20 + 0x8c0) + 0x18),&uStack_468,1);
    if (uVar30 < 1) {
        uVar30 = _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_458) {
        return uVar30;
    }
    pcVar21 = __stack_chk_fail();
    *extraout_x18_08 = sym.lt9611uxc_probe;
    pcStack_4c8 = sym.lt9611uxc_probe;
    uStack_480 = 0x200000000;
    iVar17 = sp_el0;
    iStack_4d8 = *(iVar17 + 0x5e0);
    pppuStack_4d0 = &pppuStack_450;
    puStack_4c0 = puVar41;
    puStack_4b8 = puVar40;
    pcStack_4b0 = pcVar34;
    iStack_4a8 = iVar27;
    pcStack_4a0 = pcVar37;
    pcStack_498 = pcVar35;
    uStack_490 = uVar33;
    pcStack_488 = pcVar36;
    pcStack_478 = pcVar20;
    if ((pcVar21 == NULL) || (pcVar36 = pcVar21, *(pcVar21 + 0x310) == 0)) {
        _printk(0x8000306,"lt9611uxc_probe");
        uVar30 = 0xffffffea;
        pcVar31 = 0x200000000;
        pcVar21 = pcVar36;
        goto code_r0x08003fa8;
    }
    pcVar20 = *(pcVar21 + 0x18);
    pcVar31 = *(*(pcVar20 + 0x10) + 0x20);
    __cfi_slowpath_diag(0x6871e466cec98751,pcVar31,0x8000270);
    uVar30 = (*pcVar31)(pcVar20);
    if ((uVar30 & 1) == 0) {
        _printk(0x8000c9e,"lt9611uxc_probe");
        uVar30 = 0xffffffed;
        goto code_r0x08003fa8;
    }
    pcVar36 = pcVar21 + 0x20;
    _printk(0x8000cc0,"lt9611uxc_probe","lt9611uxc_probe");
    arg1_00 = devm_kmalloc(pcVar36,0xc38,0xdc0);
    pcVar31 = pcVar36;
    if (arg1_00 == NULL) {
        uVar30 = 0xfffffff4;
        goto code_r0x08003fa8;
    }
    pcVar38 = *(pcVar21 + 0x310);
    iVar27 = of_graph_get_endpoint_by_regs(pcVar38,0,0);
    if (iVar27 == 0) {
        uVar23 = 0x8000d3c;
code_r0x080040b0:
        _printk(uVar23,"lt9611uxc_parse_dt");
        uVar30 = 0xffffffed;
    }
    else {
        uVar30 = of_graph_get_remote_port_parent();
        *(arg1_00 + 0x118) = uVar30;
        if (uVar30 == 0) {
            uVar23 = 0x8000e6b;
            goto code_r0x080040b0;
        }
        uVar14 = of_get_named_gpio_flags(pcVar38,"lt,irq-gpio",0,0);
        uVar30 = 0;
        *(arg1_00 + 0x89c) = uVar14;
        if (0x1ff < uVar14) {
            _printk(0x800083a,"lt9611uxc_parse_dt");
            uVar30 = 0xffffffea;
        }
        uVar14 = of_get_named_gpio_flags(pcVar38,"lt,reset-gpio",0,0);
        *(arg1_00 + 0x8a0) = uVar14;
        if (0x1ff < uVar14) {
            _printk(0x80005ef,"lt9611uxc_parse_dt");
            uVar30 = 0xffffffea;
        }
        uVar13 = of_get_named_gpio_flags(pcVar38,"lt,hdmi-ps-gpio",0,0);
        *(arg1_00 + 0x8a4) = uVar13;
        uVar13 = of_get_named_gpio_flags(pcVar38,"lt,hdmi-en-gpio",0,0);
        *(arg1_00 + 0x8a8) = uVar13;
        uVar13 = of_get_named_gpio_flags(pcVar38,"lt,hdmi-3p3-en",0,0);
        *(arg1_00 + 0x8ac) = uVar13;
        uVar13 = of_get_named_gpio_flags(pcVar38,"lt,hdmi-1p2-en",0,0);
        *(arg1_00 + 0x8b0) = uVar13;
        iVar27 = of_find_property(pcVar38,"lt,ac-mode",0);
        pcStack_518 = arg1_00 + 0x8d8;
        arg1_00[0x898] = iVar27 != 0;
        *(arg1_00 + 0x8d8) = pcStack_518;
        *(arg1_00 + 0x8e0) = pcStack_518;
        uStack_4f8 = uStack_4f8._4_4_ << 0x20;
        uStack_508 = 0;
        uStack_500 = 0;
        uStack_50c = 0;
        iVar27 = of_get_child_by_name(pcVar38,"lt,customize-modes");
        if (iVar27 == 0) {
            iVar27 = of_parse_phandle(pcVar38,"lt,customize-modes",0);
            if (iVar27 != 0) goto code_r0x08004254;
            _printk(0x8000f8e,"lt9611uxc_parse_dt_modes");
        }
        else {
code_r0x08004254:
            iVar17 = of_get_next_child(iVar27,0);
            if (iVar17 == 0) {
                pcVar34 = NULL;
            }
            else {
                pcVar34 = NULL;
                uVar14 = 0;
                do {
                    pcVar35 = kmem_cache_alloc_trace(_drm_atomic_helper_connector_destroy_state,0xdc0,0x78);
                    if (pcVar35 == NULL) {
                        _printk(0x8000e88,"lt9611uxc_parse_dt_modes");
                    }
                    else {
                        iVar12 = of_property_read_variable_u32_array(iVar17,"lt,mode-h-active",pcVar35 + 4,1,0);
                        pcVar38 = pcVar35;
                        if (iVar12 < 0) {
                            uVar23 = 0x8000473;
                        }
                        else {
                            iVar12 = of_property_read_variable_u32_array
                                               (iVar17,"lt,mode-h-front-porch",&uStack_4f8,1,0);
                            if (iVar12 < 0) {
                                uVar23 = 0x8001234;
                            }
                            else {
                                iVar12 = of_property_read_variable_u32_array
                                                   (iVar17,"lt,mode-h-pulse-width",&uStack_500 + 4,1,0);
                                if (iVar12 < 0) {
                                    uVar23 = 0x8000cd5;
                                }
                                else {
                                    iVar12 = of_property_read_variable_u32_array
                                                       (iVar17,"lt,mode-h-back-porch",&uStack_500,1,0);
                                    if (iVar12 < 0) {
                                        uVar23 = 0x8001047;
                                    }
                                    else {
                                        iVar22 = of_find_property(iVar17,"lt,mode-h-active-high",0);
                                        iVar12 = of_property_read_variable_u32_array
                                                           (iVar17,"lt,mode-v-active",pcVar35 + 0xe,1,0);
                                        if (iVar12 < 0) {
                                            uVar23 = 0x8000d5d;
                                        }
                                        else {
                                            iVar12 = of_property_read_variable_u32_array
                                                               (iVar17,"lt,mode-v-front-porch",&uStack_508 + 4,1,0);
                                            if (iVar12 < 0) {
                                                uVar23 = 0x800094e;
                                            }
                                            else {
                                                iVar12 = of_property_read_variable_u32_array
                                                                   (iVar17,"lt,mode-v-pulse-width",&uStack_508,1,0);
                                                if (iVar12 < 0) {
                                                    uVar23 = 0x8000757;
                                                }
                                                else {
                                                    iVar12 = of_property_read_variable_u32_array
                                                                       (iVar17,"lt,mode-v-back-porch",&uStack_50c,1,
                                                                        0);
                                                    if (iVar12 < 0) {
                                                        uVar23 = 0x8000979;
                                                    }
                                                    else {
                                                        pcVar31 = of_find_property(iVar17,"lt,mode-v-active-high",0);
                                                        iVar12 = of_property_read_variable_u32_array
                                                                           (iVar17,"lt,mode-clock-in-khz",pcVar35,1,
                                                                            0);
                                                        if (-1 < iVar12) {
                                                            iVar1 = *(pcVar35 + 4) + uStack_4f8 + uStack_500._4_2_;
                                                            puVar19 = *(arg1_00 + 0x8e0);
                                                            *(pcVar35 + 6) = *(pcVar35 + 4) + uStack_4f8;
                                                            *(pcVar35 + 8) = iVar1;
                                                            iVar2 = *(pcVar35 + 0xe) + uStack_508._4_2_ + uStack_508;
                                                            *(pcVar35 + 0x10) = *(pcVar35 + 0xe) + uStack_508._4_2_;
                                                            *(pcVar35 + 10) = iVar1 + uStack_500;
                                                            uVar15 = 1;
                                                            if (iVar22 == 0) {
                                                                uVar15 = 2;
                                                            }
                                                            uVar29 = 8;
                                                            if (pcVar31 != NULL) {
                                                                uVar29 = 4;
                                                            }
                                                            pcVar31 = pcVar35 + 0x40;
                                                            uVar14 = uVar15 | uVar14 | uVar29;
                                                            *(pcVar35 + 0x12) = iVar2;
                                                            *(pcVar35 + 0x14) = iVar2 + uStack_50c;
                                                            *(pcVar35 + 0x18) = uVar14;
                                                            uVar25 = __list_add_valid(pcVar31,puVar19,pcStack_518);
                                                            if ((uVar25 & 1) != 0) {
                                                                *(arg1_00 + 0x8e0) = pcVar31;
                                                                *(pcVar35 + 0x40) = pcStack_518;
                                                                *(pcVar35 + 0x48) = puVar19;
                                                                *puVar19 = pcVar31;
                                                            }
                                                            pcVar34 = pcVar34 + 1;
                                                            drm_mode_set_name(pcVar35);
                                                            goto code_r0x080042cc;
                                                        }
                                                        uVar23 = 0x8000d15;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        _printk(uVar23,"lt9611uxc_parse_dt_modes",iVar12);
                        kfree(pcVar35);
                    }
code_r0x080042cc:
                    iVar17 = of_get_next_child(iVar27,iVar17);
                } while (iVar17 != 0);
            }
            *(arg1_00 + 0x8d0) = pcVar34;
            pcVar35 = arg1_00;
        }
        pcStack_520 = pcVar36;
        if (uVar30 == 0) {
            uStack_500 = uStack_500 & 0xffffffff;
            if (pcVar36 != NULL) {
                uVar30 = *(pcVar21 + 0x310);
                *(arg1_00 + 0x8b4) = 0;
                pcVar20 = of_get_child_by_name(uVar30,"lt,supply-entries");
                if (pcVar20 == NULL) {
                    uVar23 = 0x80004ab;
                    pcVar20 = pcVar38;
                }
                else {
                    iVar27 = of_get_next_available_child(pcVar20,0);
                    if (iVar27 == 0) {
                        *(arg1_00 + 0x8b4) = 0;
                    }
                    else {
                        pcVar31 = NULL;
                        do {
                            uVar14 = pcVar31 + 1;
                            pcVar31 = uVar14;
                            iVar27 = of_get_next_available_child(pcVar20,iVar27);
                        } while (iVar27 != 0);
                        *(arg1_00 + 0x8b4) = uVar14;
                        if (uVar14 != 0) {
                            uVar30 = devm_kmalloc(pcVar36,pcVar31 * 0x48,0xdc0);
                            *(arg1_00 + 0x8b8) = uVar30;
                            pcStack_518 = arg1_00;
                            if (uVar30 != 0) {
                                pcVar31 = of_get_next_available_child(pcVar20,0);
                                if (pcVar31 != NULL) {
                                    pcVar34 = NULL;
                                    do {
                                        uStack_4f8 = 0;
                                        uVar14 = of_property_read_string(pcVar31,"lt,supply-name",&uStack_4f8);
                                        if (uVar14 != 0) {
                                            uVar23 = 0x800035d;
code_r0x08004e70:
                                            uVar30 = uVar14;
                                            _printk(uVar23,"lt9611uxc_get_dt_supply",uVar30);
                                            goto code_r0x080050d0;
                                        }
                                        iVar12 = pcVar34;
                                        strscpy(*(arg1_00 + 0x8b8) + iVar12 * 0x48 + 8,uStack_4f8,0x20);
                                        uVar14 = of_property_read_variable_u32_array
                                                           (pcVar31,"lt,supply-min-voltage",&uStack_500 + 4,1,0);
                                        if (uVar14 < 0) {
                                            uVar23 = 0x80004ca;
                                            goto code_r0x08004e70;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar12 * 0x48 + 0x28) = uStack_500._4_4_;
                                        uVar14 = of_property_read_variable_u32_array
                                                           (pcVar31,"lt,supply-max-voltage",&uStack_500 + 4,1,0);
                                        if (uVar14 < 0) {
                                            uVar30 = uVar14;
                                            _printk(0x8000598,"lt9611uxc_get_dt_supply",uVar30);
                                            pcVar35 = arg1_00;
                                            goto code_r0x080050d0;
                                        }
                                        iVar27 = iVar12 * 0x48;
                                        *(*(arg1_00 + 0x8b8) + iVar27 + 0x2c) = uStack_500._4_4_;
                                        iVar16 = of_property_read_variable_u32_array
                                                           (pcVar31,"lt,supply-enable-load",&uStack_500 + 4,1,0);
                                        uVar13 = 0;
                                        if (-1 < iVar16) {
                                            uVar13 = uStack_500._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar27 + 0x30) = uVar13;
                                        iVar16 = of_property_read_variable_u32_array
                                                           (pcVar31,"lt,supply-disable-load",&uStack_500 + 4,1,0);
                                        uVar13 = 0;
                                        if (-1 < iVar16) {
                                            uVar13 = uStack_500._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar27 + 0x34) = uVar13;
                                        iVar16 = of_property_read_variable_u32_array
                                                           (pcVar31,"lt,supply-pre-on-sleep",&uStack_500 + 4,1,0);
                                        uVar13 = 0;
                                        if (-1 < iVar16) {
                                            uVar13 = uStack_500._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar27 + 0x38) = uVar13;
                                        iVar16 = of_property_read_variable_u32_array
                                                           (pcVar31,"lt,supply-pre-off-sleep",&uStack_500 + 4,1,0);
                                        uVar13 = 0;
                                        if (-1 < iVar16) {
                                            uVar13 = uStack_500._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar27 + 0x40) = uVar13;
                                        iVar16 = of_property_read_variable_u32_array
                                                           (pcVar31,"lt,supply-post-on-sleep",&uStack_500 + 4,1,0);
                                        uVar13 = 0;
                                        if (-1 < iVar16) {
                                            uVar13 = uStack_500._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar27 + 0x3c) = uVar13;
                                        iVar16 = of_property_read_variable_u32_array
                                                           (pcVar31,"lt,supply-post-off-sleep",&uStack_500 + 4,1,0);
                                        pcVar34 = iVar12 + 1;
                                        uVar13 = 0;
                                        if (-1 < iVar16) {
                                            uVar13 = uStack_500._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar27 + 0x44) = uVar13;
                                        pcVar31 = of_get_next_available_child(pcVar20,pcVar31);
                                        pcVar35 = arg1_00;
                                    } while (pcVar31 != NULL);
                                }
                                pcVar31 = *(arg1_00 + 0x8b8);
                                if (pcVar31 == NULL) goto code_r0x08004624;
                                uVar14 = *(arg1_00 + 0x8b4);
                                if (uVar14 < 1) goto code_r0x08004624;
                                pcVar20 = pcVar31 + 8;
                                uVar25 = regulator_get(pcVar36,pcVar20);
                                uVar30 = 0;
                                pcVar38 = NULL;
                                *pcVar31 = uVar25;
                                pcVar39 = pcVar31;
                                if (uVar25 == 0) goto code_r0x08004e34;
                                if (0xfffffffffffff000 < uVar25) goto code_r0x08004e34;
                                uVar15 = regulator_set_voltage(uVar25,*(pcVar31 + 0x28),*(pcVar31 + 0x2c));
                                uVar30 = uVar15;
                                if (uVar15 < 0) {
                                    pcVar35 = NULL;
                                }
                                else {
                                    pcVar35 = NULL;
                                    iVar27 = 0;
                                    do {
                                        iVar17 = iVar27;
                                        if (uVar14 * 0x48 + -0x48 == iVar17) goto code_r0x08004624;
                                        pcVar34 = pcVar31 + iVar17;
                                        pcVar20 = pcVar34 + 0x50;
                                        uVar25 = regulator_get(pcVar36,pcVar20);
                                        *(pcVar34 + 0x48) = uVar25;
                                        if (uVar25 == 0) goto code_r0x08005068;
                                        if (0xfffffffffffff000 < uVar25) goto code_r0x08005068;
                                        uVar15 = regulator_set_voltage
                                                           (uVar25,*(pcVar31 + iVar17 + 0x70),
                                                            *(pcVar31 + iVar17 + 0x74));
                                        uVar30 = uVar15;
                                        pcVar35 = pcVar35 + 1;
                                        iVar27 = iVar17 + 0x48;
                                    } while (-1 < uVar15);
                                    pcVar20 = pcVar31 + iVar17 + 0x50;
                                }
                                pcVar36 = pcVar35 & 0xffffffff;
                                _printk(0x8000ade,"lt9611uxc_config_vreg",pcVar20);
                                goto code_r0x080050b4;
                            }
                            uVar30 = 0xfffffff4;
                            uVar23 = 0x8001329;
                            goto code_r0x080040c8;
                        }
                    }
                    uVar23 = 0x8000eb3;
                }
                _printk(uVar23,"lt9611uxc_get_dt_supply");
                goto code_r0x08004624;
            }
            _printk(0x8000f44,"lt9611uxc_get_dt_supply",0,arg1_00);
            uVar30 = 0xffffffea;
            uVar23 = 0x8001329;
            pcVar20 = pcVar38;
            goto code_r0x080040c8;
        }
    }
    uVar23 = 0x8000aa8;
    pcVar20 = pcVar38;
code_r0x080040c8:
    do {
        _printk(uVar23,"lt9611uxc_probe");
code_r0x08003fa8:
        while( true ) {
            iVar27 = sp_el0;
            if (*(iVar27 + 0x5e0) == iStack_4d8) {
                return uVar30;
            }
            __stack_chk_fail();
code_r0x08005068:
            pcVar38 = pcVar35 + 1;
            pcVar39 = pcVar34 + 0x48;
code_r0x08004e34:
            _printk(0x80009a3,"lt9611uxc_config_vreg",pcVar20,uVar30);
            while( true ) {
                uVar14 = pcVar38 - 1;
                pcVar35 = uVar14;
                *pcVar39 = 0;
                if (uVar14 < 0) break;
                regulator_set_load(*(pcVar31 + pcVar35 * 0x48),0);
                pcVar36 = pcVar35;
code_r0x080050b4:
                pcVar39 = pcVar31 + pcVar36 * 0x48;
                regulator_put(*pcVar39);
                pcVar38 = pcVar35;
            }
            pcVar35 = pcVar38;
            arg1_00 = pcStack_518;
            if (uVar30 != 0) break;
code_r0x08004624:
            *(arg1_00 + 0x8c0) = pcVar21;
            *arg1_00 = pcStack_520;
            uVar14 = sym.lt9611uxc_gpio_configure(arg1_00);
            pcVar35 = pcStack_520;
            if (uVar14 != 0) {
                uVar30 = uVar14;
                _printk(0x80007e9,"lt9611uxc_probe");
                goto code_r0x08004ae8;
            }
            if (*(arg1_00 + 0x8a8) < 0x200) {
                uVar23 = gpio_to_desc();
                gpiod_set_raw_value(uVar23,1);
                msleep(0x14);
            }
            pcVar31 = *(arg1_00 + 0x8b8);
            uVar14 = *(arg1_00 + 0x8b4);
            pcVar20 = uVar14;
            if (*(arg1_00 + 0x8ac) < 0x200) {
                uVar23 = gpio_to_desc();
                gpiod_set_raw_value(uVar23,1);
            }
            if (*(arg1_00 + 0x8b0) < 0x200) {
                uVar23 = gpio_to_desc();
                gpiod_set_raw_value(uVar23,1);
            }
            if (0 < uVar14) {
                uVar30 = 0;
                pcVar36 = NULL;
                if ((*pcVar31 != 0) && (*pcVar31 < 0xfffffffffffff001)) {
                    pcVar36 = NULL;
                    pcVar39 = pcVar20 + -1;
                    pcVar34 = 0x3e8;
                    pcVar38 = pcVar31;
                    do {
                        uVar14 = regulator_is_enabled();
                        pcVar20 = uVar14;
                        if ((*(pcVar38 + 0x38) != 0) && (uVar14 == 0)) {
                            iVar27 = *(pcVar38 + 0x38) * 1000;
                            usleep_range_state(iVar27,iVar27,2);
                        }
                        uVar15 = regulator_set_load(*pcVar38,*(pcVar38 + 0x30));
                        if (uVar15 < 0) {
                            uVar30 = uVar15;
                            _printk(0x800067e,"lt9611uxc_enable_vreg",pcVar38 + 8);
                            goto code_r0x08004774;
                        }
                        uVar15 = regulator_enable(*pcVar38);
                        uVar30 = uVar15;
                        if ((*(pcVar38 + 0x3c) != 0) && (uVar14 == 0)) {
                            iVar27 = *(pcVar38 + 0x3c) * 1000;
                            usleep_range_state(iVar27,iVar27,2);
                        }
                        if (uVar15 < 0) {
                            _printk(0x8000697,"lt9611uxc_enable_vreg",pcVar38 + 8);
                            regulator_set_load(*pcVar38,*(pcVar38 + 0x34));
                            goto code_r0x08004774;
                        }
                        if (pcVar39 == pcVar36) goto code_r0x08004778;
                        pcVar38 = pcVar38 + 0x48;
                        pcVar36 = pcVar36 + 1;
                    } while ((*pcVar38 != 0) && (*pcVar38 < 0xfffffffffffff001));
                }
                _printk(0x8000af6,"lt9611uxc_enable_vreg",pcVar31 + (pcVar36 & 0xffffffff) * 0x48 + 8,uVar30);
code_r0x08004774:
                if (pcVar36 != 0) {
                    pcVar20 = pcVar36 + 1;
                    pcVar31 = pcVar31 + pcVar36 * 0x48 + -0x48;
                    do {
                        if (*(pcVar31 + 0x40) != 0) {
                            iVar27 = *(pcVar31 + 0x40) * 1000;
                            usleep_range_state(iVar27,iVar27,2);
                        }
                        regulator_set_load(*pcVar31,*(pcVar31 + 0x34));
                        regulator_disable(*pcVar31);
                        if (*(pcVar31 + 0x44) != 0) {
                            iVar27 = *(pcVar31 + 0x44) * 1000;
                            usleep_range_state(iVar27,iVar27,2);
                        }
                        pcVar20 = pcVar20 + -1;
                        pcVar31 = pcVar31 + -0x48;
                    } while (1 < pcVar20);
                }
code_r0x08004778:
                if (uVar30 == 0) goto code_r0x08004780;
                _printk(0x8001348,"lt9611uxc_probe");
                goto code_r0x08004adc;
            }
code_r0x08004780:
            uVar23 = gpio_to_desc(*(arg1_00 + 0x8a0));
            gpiod_set_raw_value(uVar23,1);
            msleep(0x14);
            uVar23 = gpio_to_desc(*(arg1_00 + 0x8a0));
            gpiod_set_raw_value(uVar23,0);
            msleep(0x14);
            uVar23 = gpio_to_desc(*(arg1_00 + 0x8a0));
            gpiod_set_raw_value(uVar23,1);
            msleep(300);
            sym.lt9611uxc_ctl_en(arg1_00);
            pcVar20 = arg1_00 + 0xb28;
            uVar7 = *(*(arg1_00 + 0x8c0) + 2);
            *(arg1_00 + 0xb28) = 0;
            *(arg1_00 + 0xb30) = 0;
            *(arg1_00 + 0xb38) = 0;
            *(arg1_00 + 0xb40) = 0;
            *(arg1_00 + 0xb48) = 0;
            *(arg1_00 + 0xb50) = 0;
            *(arg1_00 + 0xb58) = 0;
            *(arg1_00 + 0xb60) = 0;
            *(arg1_00 + 0xb68) = 0;
            *(arg1_00 + 0xb70) = 0;
            *(arg1_00 + 0xb78) = 0;
            *(arg1_00 + 0xb80) = 0;
            *(arg1_00 + 0xb88) = 0;
            *(arg1_00 + 0xb90) = 0;
            *(arg1_00 + 0xb98) = 0;
            *(arg1_00 + 0xb28) = 0x81ff;
            *(arg1_00 + 0xba0) = 0;
            uStack_4f8 = CONCAT62(0x20000,uVar7);
            pcStack_4f0 = pcVar20;
            iVar12 = i2c_transfer(*(*(arg1_00 + 0x8c0) + 0x18),&uStack_4f8,1);
            if (iVar12 < 1) {
                _printk(0x8001311,"lt9611uxc_write_byte");
            }
            uVar30 = *(arg1_00 + 0x8c0);
            uVar7 = *(uVar30 + 2);
            pcVar31 = 0x10001;
            uVar8 = *(uVar30 + 2);
            *(arg1_00 + 0xc18) = 0;
            *(arg1_00 + 0xc20) = 0;
            *(arg1_00 + 0xc08) = 0;
            *(arg1_00 + 0xc10) = 0;
            *(arg1_00 + 0xbf8) = 0;
            *(arg1_00 + 0xc00) = 0;
            *(arg1_00 + 0xbe8) = 0;
            *(arg1_00 + 0xbf0) = 0;
            *(arg1_00 + 0xbd8) = 0;
            *(arg1_00 + 0xbe0) = 0;
            *(arg1_00 + 0xbc8) = 0;
            *(arg1_00 + 0xbd0) = 0;
            *(arg1_00 + 3000) = 0;
            *(arg1_00 + 0xbc0) = 0;
            *(arg1_00 + 0xba8) = 0;
            *(arg1_00 + 0xbb0) = 0;
            *(arg1_00 + 0xb98) = 0;
            *(arg1_00 + 0xba0) = 0;
            *(arg1_00 + 0xb88) = 0;
            *(arg1_00 + 0xb90) = 0;
            *(arg1_00 + 0xb78) = 0;
            *(arg1_00 + 0xb80) = 0;
            *(arg1_00 + 0xb68) = 0;
            *(arg1_00 + 0xb70) = 0;
            *(arg1_00 + 0xb58) = 0;
            *(arg1_00 + 0xb60) = 0;
            *(arg1_00 + 0xb48) = 0;
            *(arg1_00 + 0xb50) = 0;
            *(arg1_00 + 0xb38) = 0;
            *(arg1_00 + 0xb40) = 0;
            *pcVar20 = 0;
            *(arg1_00 + 0xb30) = 0;
            uStack_4f8 = CONCAT62(0x10000,uVar7);
            uStack_4e8._0_6_ = CONCAT42(0x10001,uVar8);
            uStack_4e8 = uStack_4e8;
            pcStack_4f0 = pcVar20;
            pcStack_4e0 = arg1_00 + 0xba8;
            iVar12 = i2c_transfer(*(uVar30 + 0x18),&uStack_4f8,2);
            if (iVar12 != 2) {
code_r0x08004a44:
                _printk(0x80006dd,"lt9611uxc_read");
                _printk(0x8000bcd,"lt9611uxc_read_device_id");
                sym.lt9611uxc_ctl_disable(arg1_00);
                msleep(0x32);
                _printk(0x8000f25,"lt9611uxc_probe");
                uVar30 = 0xffffffff;
                goto code_r0x08004adc;
            }
            uVar30 = *(arg1_00 + 0x8c0);
            uVar7 = *(uVar30 + 2);
            uVar8 = *(uVar30 + 2);
            cVar6 = arg1_00[0xba8];
            *(arg1_00 + 0xc18) = 0;
            *(arg1_00 + 0xc20) = 0;
            *(arg1_00 + 0xc08) = 0;
            *(arg1_00 + 0xc10) = 0;
            *(arg1_00 + 0xbf8) = 0;
            *(arg1_00 + 0xc00) = 0;
            *(arg1_00 + 0xbe8) = 0;
            *(arg1_00 + 0xbf0) = 0;
            *(arg1_00 + 0xbd8) = 0;
            *(arg1_00 + 0xbe0) = 0;
            *(arg1_00 + 0xbc8) = 0;
            *(arg1_00 + 0xbd0) = 0;
            *(arg1_00 + 3000) = 0;
            *(arg1_00 + 0xbc0) = 0;
            *(arg1_00 + 0xba8) = 0;
            *(arg1_00 + 0xbb0) = 0;
            *(arg1_00 + 0xb98) = 0;
            *(arg1_00 + 0xba0) = 0;
            *(arg1_00 + 0xb88) = 0;
            *(arg1_00 + 0xb90) = 0;
            *(arg1_00 + 0xb78) = 0;
            *(arg1_00 + 0xb80) = 0;
            *(arg1_00 + 0xb68) = 0;
            *(arg1_00 + 0xb70) = 0;
            *(arg1_00 + 0xb58) = 0;
            *(arg1_00 + 0xb60) = 0;
            *(arg1_00 + 0xb48) = 0;
            *(arg1_00 + 0xb50) = 0;
            *(arg1_00 + 0xb38) = 0;
            *(arg1_00 + 0xb40) = 0;
            *pcVar20 = 0;
            *(arg1_00 + 0xb30) = 0;
            arg1_00[0xb28] = 0x1;
            uStack_4f8 = CONCAT62(0x10000,uVar7);
            uStack_4e8._0_6_ = CONCAT42(0x10001,uVar8);
            uStack_4e8 = uStack_4e8;
            pcStack_4f0 = pcVar20;
            pcStack_4e0 = arg1_00 + 0xba8;
            iVar12 = i2c_transfer(*(uVar30 + 0x18),&uStack_4f8,2);
            if (iVar12 != 2) goto code_r0x08004a44;
            _printk(0x80010d6,"lt9611uxc_read_device_id",CONCAT11(cVar6,arg1_00[0xba8]));
            sym.lt9611uxc_ctl_disable(arg1_00);
            msleep(0x32);
            *(pcVar21 + 0xb8) = arg1_00;
            uVar14 = sysfs_create_group(pcStack_520,obj.lt9611uxc_sysfs_attr_grp);
            pcVar20 = arg1_00;
            if (uVar14 != 0) {
                uVar30 = uVar14;
                _printk(0x8000c51,"lt9611uxc_sysfs_init","lt9611uxc_sysfs_init",uVar30);
                uVar23 = 0x8000b76;
                goto code_r0x08004ed0;
            }
            cVar11 = sym.lt9611uxc_get_version(arg1_00);
            if (cVar11 == '\0') {
                uVar14 = request_firmware_nowait
                                   (obj.__this_module,1,"lt9611uxc_fw.bin",pcStack_520,0xcc0,arg1_00,
                                    sym.lt9611uxc_firmware_cb.e58709b06554ea617982e3f2e7a32f4b.cfi_jt);
                uVar30 = uVar14;
                if (uVar14 != 0) {
                    _printk(0x800031b,"lt9611uxc_probe",uVar30);
                    goto code_r0x08004adc;
                }
            }
            else {
                _printk(0x800101c,"lt9611uxc_probe");
                __mutex_init(arg1_00 + 0x130,"&pdata->lock",obj.lt9611uxc_probe.__key);
                __init_waitqueue_head(arg1_00 + 0xa10,"&pdata->edid_wq",obj.lt9611uxc_probe.__key);
                *(arg1_00 + 0x90) = *(pcVar21 + 0x310);
                *(arg1_00 + 0xb0) = reloc.lt9611uxc_bridge_attach.e58709b06554ea617982e3f2e7a32f4b.cfi_jt;
                drm_bridge_add(arg1_00 + 8);
                uVar30 = alloc_workqueue(0x8000499,0xe000a,1,"lt9611uxc_wk");
                *(arg1_00 + 0x9d8) = uVar30;
                pcVar31 = arg1_00;
                if (uVar30 == 0) {
                    _printk(0x8001214,"lt9611uxc_probe");
                    uVar30 = 0;
                    goto code_r0x08004adc;
                }
                *(arg1_00 + 0x9e0) = 0xfffffffe0;
                *(arg1_00 + 0x9e8) = arg1_00 + 0x9e8;
                *(arg1_00 + 0x9f0) = arg1_00 + 0x9e8;
                *(arg1_00 + 0x9f8) = sym.lt9611uxc_hpd_work.cfi_jt;
                gpio_to_desc(*(arg1_00 + 0x89c));
                uVar23 = gpiod_to_irq();
                *(arg1_00 + 0x894) = uVar23;
                uVar14 = request_threaded_irq
                                   (uVar23,0,sym.lt9611uxc_irq_thread_handler.e58709b06554ea617982e3f2e7a32f4b.cfi_jt
                                    ,0x2002,"lt9611uxc_irq",arg1_00);
                uVar30 = uVar14;
                if (uVar14 != 0) {
                    uVar23 = 0x80010b9;
code_r0x08004ed0:
                    _printk(uVar23,"lt9611uxc_probe");
code_r0x08004adc:
                    sym.lt9611uxc_gpio_configure(arg1_00);
code_r0x08004ae8:
                    sym.lt9611uxc_put_dt_supply(pcStack_520,arg1_00);
                }
            }
        }
code_r0x080050d0:
        if (*(pcStack_518 + 0x8b8) != 0) {
            *(pcStack_518 + 0x8b8) = 0;
            *(pcStack_518 + 0x8b4) = 0;
        }
        uVar23 = 0x8001329;
    } while( true );
}


// ===== sym.lt9611uxc_flash_write_en @ 0x08002ad4 (size 824) =====

uint64_t sym.lt9611uxc_flash_write_en(int64_t arg1)

{
    int16_t iVar1;
    int16_t iVar2;
    char *pcVar3;
    ulong uVar4;
    ulong uVar5;
    code cVar6;
    ushort uVar7;
    uint16_t uVar8;
    ushort uVar9;
    bool bVar10;
    char cVar11;
    int iVar12;
    uint uVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    int iVar16;
    uint64_t uVar17;
    int64_t iVar18;
    uint64_t uVar19;
    ulong *puVar20;
    code *pcVar21;
    code *pcVar22;
    code *arg1_00;
    int64_t iVar23;
    ulong uVar24;
    uint64_t *puVar25;
    uint64_t uVar26;
    uchar uVar27;
    uchar uVar28;
    uint32_t uVar29;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    code *pcVar30;
    ulong *puVar31;
    int64_t iVar32;
    uint64_t uVar33;
    char *pcVar34;
    code *pcVar35;
    code *pcVar36;
    char *pcVar37;
    code *pcVar38;
    code *pcVar39;
    code *unaff_x26;
    ulong unaff_x27;
    ulong *puVar40;
    ulong unaff_x28;
    ulong *puVar41;
    ulong unaff_x30;
    uchar auVar42 [16];
    code *pcStack_4c0;
    code *pcStack_4b8;
    uint uStack_4ac;
    ulong uStack_4a8;
    ulong uStack_4a0;
    ulong uStack_498;
    code *pcStack_490;
    ulong uStack_488;
    code *pcStack_480;
    int64_t iStack_478;
    ulong ***pppuStack_470;
    code *pcStack_468;
    ulong *puStack_460;
    ulong *puStack_458;
    code *pcStack_450;
    int64_t iStack_448;
    char *pcStack_440;
    code *pcStack_438;
    uint64_t uStack_430;
    code *pcStack_428;
    ulong uStack_420;
    code *pcStack_418;
    ulong uStack_408;
    code *pcStack_400;
    int64_t iStack_3f8;
    ulong ***pppuStack_3f0;
    code *pcStack_3e8;
    ulong *puStack_3e0;
    uint64_t *puStack_3d0;
    int64_t iStack_3c8;
    ulong uStack_3b8;
    ulong *puStack_3b0;
    int64_t iStack_3a8;
    ulong ***pppuStack_3a0;
    code *pcStack_398;
    ulong *puStack_390;
    ulong *puStack_388;
    code *pcStack_380;
    uint64_t uStack_378;
    char *pcStack_370;
    code *pcStack_368;
    int64_t iStack_360;
    ulong *puStack_358;
    uint64_t uStack_350;
    uint64_t uStack_348;
    uint32_t uStack_33c;
    uint64_t uStack_338;
    uint32_t uStack_32c;
    ulong uStack_328;
    ulong *puStack_320;
    ulong uStack_318;
    ulong *puStack_310;
    ulong uStack_308;
    ulong uStack_300;
    int64_t iStack_2f8;
    ulong ***pppuStack_2f0;
    code *pcStack_2e8;
    ulong uStack_2e0;
    ulong uStack_2d8;
    code *pcStack_2d0;
    uint64_t uStack_2c8;
    ulong *puStack_2c0;
    char *pcStack_2b8;
    ulong uStack_2b0;
    ulong *puStack_2a8;
    ulong uStack_2a0;
    int64_t iStack_298;
    ulong uStack_288;
    ulong *puStack_280;
    int64_t iStack_278;
    ulong ***pppuStack_270;
    code *pcStack_268;
    uint64_t uStack_260;
    ulong uStack_258;
    ulong *puStack_250;
    int64_t iStack_248;
    ulong uStack_238;
    ulong *puStack_230;
    int64_t iStack_228;
    ulong ***pppuStack_220;
    code *pcStack_218;
    uint64_t uStack_210;
    uchar auStack_200 [16];
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong *puStack_1c0;
    ulong uStack_1b8;
    code *pcStack_1b0;
    int64_t iStack_1a8;
    uchar ***pppuStack_1a0;
    code *pcStack_198;
    ulong uStack_140;
    ulong *puStack_138;
    uint uStack_130;
    ushort uStack_12c;
    uchar uStack_12a;
    uchar uStack_129;
    uchar uStack_128;
    uchar uStack_127;
    uchar uStack_126;
    uchar uStack_125;
    uint uStack_124;
    ushort uStack_120;
    int64_t iStack_118;
    uchar **ppuStack_110;
    code *pcStack_108;
    ulong uStack_100;
    ulong *puStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    char *pcStack_d8;
    ulong uStack_d0;
    int64_t iStack_c8;
    ulong uStack_b8;
    ulong *puStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    ulong uStack_48;
    ulong *puStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar32 = sp_el0;
    iStack_38 = *(iVar32 + 0x5e0);
    puVar20 = arg1 + 0xb28;
    uVar7 = *(*(arg1 + 0x8c0) + 2);
    *(arg1 + 0xb28) = 0;
    *(arg1 + 0xb30) = 0;
    *(arg1 + 0xb38) = 0;
    *(arg1 + 0xb40) = 0;
    *(arg1 + 0xb48) = 0;
    *(arg1 + 0xb50) = 0;
    *(arg1 + 0xb58) = 0;
    *(arg1 + 0xb60) = 0;
    *(arg1 + 0xb68) = 0;
    *(arg1 + 0xb70) = 0;
    *(arg1 + 0xb78) = 0;
    *(arg1 + 0xb80) = 0;
    *(arg1 + 0xb88) = 0;
    *(arg1 + 0xb90) = 0;
    *(arg1 + 0xb98) = 0;
    *(arg1 + 0xb28) = 0x81ff;
    *(arg1 + 0xba0) = 0;
    uStack_48 = CONCAT62(0x20000,uVar7);
    puStack_40 = puVar20;
    iVar12 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_48,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar8 = *(*(arg1 + 0x8c0) + 2);
    *puVar20 = 0;
    *(arg1 + 0xb30) = 0;
    *(arg1 + 0xb38) = 0;
    *(arg1 + 0xb40) = 0;
    *(arg1 + 0xb48) = 0;
    *(arg1 + 0xb50) = 0;
    *(arg1 + 0xb58) = 0;
    *(arg1 + 0xb60) = 0;
    *(arg1 + 0xb68) = 0;
    *(arg1 + 0xb70) = 0;
    *(arg1 + 0xb78) = 0;
    *(arg1 + 0xb80) = 0;
    *(arg1 + 0xb88) = 0;
    *(arg1 + 0xb90) = 0;
    *(arg1 + 0xb98) = 0;
    *(arg1 + 0xba0) = 0;
    *(arg1 + 0xb28) = 0xbf08;
    uStack_48._0_4_ = uVar8;
    uStack_48._0_6_ = CONCAT24(2,uStack_48);
    uStack_48 = uStack_48;
    puStack_40 = puVar20;
    iVar12 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_48,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    msleep(0x14);
    uVar7 = *(*(arg1 + 0x8c0) + 2);
    *puVar20 = 0;
    *(arg1 + 0xb30) = 0;
    *(arg1 + 0xb38) = 0;
    *(arg1 + 0xb40) = 0;
    *(arg1 + 0xb48) = 0;
    *(arg1 + 0xb50) = 0;
    *(arg1 + 0xb58) = 0;
    *(arg1 + 0xb60) = 0;
    *(arg1 + 0xb68) = 0;
    *(arg1 + 0xb70) = 0;
    *(arg1 + 0xb78) = 0;
    *(arg1 + 0xb80) = 0;
    *(arg1 + 0xb88) = 0;
    *(arg1 + 0xb90) = 0;
    *(arg1 + 0xb98) = 0;
    *(arg1 + 0xba0) = 0;
    *(arg1 + 0xb28) = 0xff08;
    uStack_48 = CONCAT62(0x20000,uVar7);
    puStack_40 = puVar20;
    iVar12 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_48,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    msleep(0x14);
    uVar7 = *(*(arg1 + 0x8c0) + 2);
    *puVar20 = 0;
    *(arg1 + 0xb30) = 0;
    *(arg1 + 0xb38) = 0;
    *(arg1 + 0xb40) = 0;
    *(arg1 + 0xb48) = 0;
    *(arg1 + 0xb50) = 0;
    *(arg1 + 0xb58) = 0;
    *(arg1 + 0xb60) = 0;
    *(arg1 + 0xb68) = 0;
    *(arg1 + 0xb70) = 0;
    *(arg1 + 0xb78) = 0;
    *(arg1 + 0xb80) = 0;
    *(arg1 + 0xb88) = 0;
    *(arg1 + 0xb90) = 0;
    *(arg1 + 0xb98) = 0;
    *(arg1 + 0xba0) = 0;
    *(arg1 + 0xb28) = 0x80ff;
    uStack_48 = CONCAT62(0x20000,uVar7);
    puStack_40 = puVar20;
    iVar12 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_48,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar8 = *(*(arg1 + 0x8c0) + 2);
    *puVar20 = 0;
    *(arg1 + 0xb30) = 0;
    *(arg1 + 0xb38) = 0;
    *(arg1 + 0xb40) = 0;
    *(arg1 + 0xb48) = 0;
    *(arg1 + 0xb50) = 0;
    *(arg1 + 0xb58) = 0;
    *(arg1 + 0xb60) = 0;
    *(arg1 + 0xb68) = 0;
    *(arg1 + 0xb70) = 0;
    *(arg1 + 0xb78) = 0;
    *(arg1 + 0xb80) = 0;
    *(arg1 + 0xb88) = 0;
    *(arg1 + 0xb90) = 0;
    *(arg1 + 0xb98) = 0;
    *(arg1 + 0xba0) = 0;
    *(arg1 + 0xb28) = 0x45a;
    uStack_48._0_4_ = uVar8;
    uStack_48._0_6_ = CONCAT24(2,uStack_48);
    uStack_48 = uStack_48;
    puStack_40 = puVar20;
    iVar12 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_48,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar8 = *(*(arg1 + 0x8c0) + 2);
    *puVar20 = 0;
    *(arg1 + 0xb30) = 0;
    *(arg1 + 0xb38) = 0;
    *(arg1 + 0xb40) = 0;
    *(arg1 + 0xb48) = 0;
    *(arg1 + 0xb50) = 0;
    *(arg1 + 0xb58) = 0;
    *(arg1 + 0xb60) = 0;
    *(arg1 + 0xb68) = 0;
    *(arg1 + 0xb70) = 0;
    *(arg1 + 0xb78) = 0;
    *(arg1 + 0xb80) = 0;
    *(arg1 + 0xb88) = 0;
    *(arg1 + 0xb90) = 0;
    *(arg1 + 0xb98) = 0;
    *(arg1 + 0xba0) = 0;
    *(arg1 + 0xb28) = 0x5a;
    uStack_48._0_4_ = uVar8;
    uStack_48._0_6_ = CONCAT24(2,uStack_48);
    uStack_48 = uStack_48;
    puStack_40 = puVar20;
    uVar17 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_48,1);
    if (uVar17 < 1) {
        uVar17 = _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar32 = sp_el0;
    if (*(iVar32 + 0x5e0) == iStack_38) {
        return uVar17;
    }
    iVar18 = __stack_chk_fail();
    *extraout_x18 = sym.lt9611uxc_block_erase;
    pcStack_98 = sym.lt9611uxc_block_erase;
    iVar32 = sp_el0;
    iStack_a8 = *(iVar32 + 0x5e0);
    puStack_a0 = &stack0xffffffffffffffd0;
    _printk(0x80005d5,"lt9611uxc_block_erase");
    iVar32 = 0;
    puVar20 = iVar18 + 0xb28;
    do {
        uVar7 = *(iVar32 + 0x800173e);
        uVar8 = *(*(iVar18 + 0x8c0) + 2);
        *puVar20 = 0;
        *(iVar18 + 0xb30) = 0;
        *(iVar18 + 0xb38) = 0;
        *(iVar18 + 0xb40) = 0;
        *(iVar18 + 0xb48) = 0;
        *(iVar18 + 0xb50) = 0;
        *(iVar18 + 0xb58) = 0;
        *(iVar18 + 0xb60) = 0;
        *(iVar18 + 0xb68) = 0;
        *(iVar18 + 0xb70) = 0;
        *(iVar18 + 0xb78) = 0;
        *(iVar18 + 0xb80) = 0;
        *(iVar18 + 0xb88) = 0;
        *(iVar18 + 0xb90) = 0;
        *(iVar18 + 0xb98) = 0;
        *(iVar18 + 0xba0) = 0;
        *(iVar18 + 0xb28) = uVar7;
        uStack_b8 = CONCAT24(2,uVar8);
        puStack_b0 = puVar20;
        iVar12 = i2c_transfer(*(*(iVar18 + 0x8c0) + 0x18),&uStack_b8,1);
        if (iVar12 < 1) {
            _printk(0x8001311,"lt9611uxc_write_byte");
        }
        iVar32 = iVar32 + 2;
    } while (iVar32 != 0x12);
    uVar17 = msleep(3000);
    iVar32 = sp_el0;
    if (*(iVar32 + 0x5e0) == iStack_a8) {
        return uVar17;
    }
    auVar42 = __stack_chk_fail();
    iVar23 = auVar42._0_8_;
    *extraout_x18_00 = sym.lt9611uxc_flash_read_addr_set;
    pcStack_108 = sym.lt9611uxc_flash_read_addr_set;
    uStack_100 = 2;
    uStack_e8 = 0x800173e;
    pcStack_d8 = "lt9611uxc_write_byte";
    uStack_d0 = 0x8001311;
    iVar32 = sp_el0;
    iStack_118 = *(iVar32 + 0x5e0);
    uStack_129 = auVar42[10];
    uStack_130 = 0xa05a5f5e;
    uStack_128 = 0x5c;
    uStack_12c = 0x805a;
    uStack_126 = 0x5d;
    uStack_127 = auVar42[9];
    uStack_124 = 0x805a905a;
    uVar28 = 0x5f;
    uStack_120 = 0x2158;
    uVar27 = 0x5e;
    uStack_12a = 0x5b;
    uStack_125 = auVar42[8];
    uStack_e0 = 0x12;
    iVar32 = 0;
    ppuStack_110 = &puStack_a0;
    puStack_f0 = puVar20;
    iStack_c8 = iVar18;
    while( true ) {
        uVar26 = 1;
        uVar8 = *(*(iVar23 + 0x8c0) + 2);
        *(iVar23 + 0xb28) = 0;
        *(iVar23 + 0xb30) = 0;
        *(iVar23 + 0xb38) = 0;
        *(iVar23 + 0xb40) = 0;
        *(iVar23 + 0xb48) = 0;
        *(iVar23 + 0xb50) = 0;
        *(iVar23 + 0xb58) = 0;
        *(iVar23 + 0xb60) = 0;
        *(iVar23 + 0xb68) = 0;
        *(iVar23 + 0xb70) = 0;
        *(iVar23 + 0xb78) = 0;
        *(iVar23 + 0xb80) = 0;
        *(iVar23 + 0xb88) = 0;
        *(iVar23 + 0xb90) = 0;
        *(iVar23 + 0xb98) = 0;
        *(iVar23 + 0xba0) = 0;
        *(iVar23 + 0xb28) = uVar27;
        *(iVar23 + 0xb29) = uVar28;
        uStack_140 = CONCAT24(2,uVar8);
        puStack_138 = iVar23 + 0xb28;
        uVar17 = i2c_transfer(*(*(iVar23 + 0x8c0) + 0x18),&uStack_140);
        if (uVar17 < 1) {
            uVar17 = _printk(0x8001311,"lt9611uxc_write_byte");
        }
        if (iVar32 == 0x10) break;
        uVar27 = *(&uStack_130 + iVar32 + 2);
        uVar28 = *(&uStack_130 + iVar32 + 3);
        iVar32 = iVar32 + 2;
    }
    iVar32 = sp_el0;
    if (*(iVar32 + 0x5e0) == iStack_118) {
        return uVar17;
    }
    auVar42 = __stack_chk_fail();
    iVar18 = auVar42._0_8_;
    *extraout_x18_01 = sym.lt9611uxc_fw_read_back;
    pcStack_198 = sym.lt9611uxc_fw_read_back;
    iVar32 = sp_el0;
    iStack_1a8 = *(iVar32 + 0x5e0);
    uVar17 = uVar26 & 0xffffffff;
    bVar10 = (uVar26 & 0x1f) != 0;
    puVar20 = iVar18 + 0xb28;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uVar33 = bVar10;
    uVar7 = *(*(iVar18 + 0x8c0) + 2);
    *(iVar18 + 0xb28) = 0;
    *(iVar18 + 0xb30) = 0;
    *(iVar18 + 0xb38) = 0;
    *(iVar18 + 0xb40) = 0;
    *(iVar18 + 0xb48) = 0;
    *(iVar18 + 0xb50) = 0;
    *(iVar18 + 0xb58) = 0;
    *(iVar18 + 0xb60) = 0;
    *(iVar18 + 0xb68) = 0;
    *(iVar18 + 0xb70) = 0;
    *(iVar18 + 0xb78) = 0;
    *(iVar18 + 0xb80) = 0;
    *(iVar18 + 0xb88) = 0;
    *(iVar18 + 0xb90) = 0;
    *(iVar18 + 0xb98) = 0;
    *(iVar18 + 0xba0) = 0;
    *(iVar18 + 0xb28) = 0x80ff;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = CONCAT62(0x20000,uVar7);
    puStack_1c0 = puVar20;
    pppuStack_1a0 = &ppuStack_110;
    iVar12 = i2c_transfer(*(*(iVar18 + 0x8c0) + 0x18),&uStack_1c8,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    pcVar34 = 0x2;
    uVar8 = *(*(iVar18 + 0x8c0) + 2);
    *puVar20 = 0;
    *(iVar18 + 0xb30) = 0;
    *(iVar18 + 0xb38) = 0;
    *(iVar18 + 0xb40) = 0;
    *(iVar18 + 0xb48) = 0;
    *(iVar18 + 0xb50) = 0;
    *(iVar18 + 0xb58) = 0;
    *(iVar18 + 0xb60) = 0;
    *(iVar18 + 0xb68) = 0;
    *(iVar18 + 0xb70) = 0;
    *(iVar18 + 0xb78) = 0;
    *(iVar18 + 0xb80) = 0;
    *(iVar18 + 0xb88) = 0;
    *(iVar18 + 0xb90) = 0;
    *(iVar18 + 0xb98) = 0;
    *(iVar18 + 0xba0) = 0;
    *(iVar18 + 0xb28) = 0x1ee;
    uStack_1c8._0_4_ = uVar8;
    uStack_1c8._0_6_ = CONCAT24(2,uStack_1c8);
    uStack_1c8 = uStack_1c8;
    puStack_1c0 = puVar20;
    iVar12 = i2c_transfer(*(*(iVar18 + 0x8c0) + 0x18),&uStack_1c8,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar8 = *(*(iVar18 + 0x8c0) + 2);
    *puVar20 = 0;
    *(iVar18 + 0xb30) = 0;
    *(iVar18 + 0xb38) = 0;
    *(iVar18 + 0xb40) = 0;
    *(iVar18 + 0xb48) = 0;
    *(iVar18 + 0xb50) = 0;
    *(iVar18 + 0xb58) = 0;
    *(iVar18 + 0xb60) = 0;
    *(iVar18 + 0xb68) = 0;
    *(iVar18 + 0xb70) = 0;
    *(iVar18 + 0xb78) = 0;
    *(iVar18 + 0xb80) = 0;
    *(iVar18 + 0xb88) = 0;
    *(iVar18 + 0xb90) = 0;
    *(iVar18 + 0xb98) = 0;
    *(iVar18 + 0xba0) = 0;
    *(iVar18 + 0xb28) = 0x845a;
    uStack_1c8._0_4_ = uVar8;
    uStack_1c8._0_6_ = CONCAT24(2,uStack_1c8);
    uStack_1c8 = uStack_1c8;
    puStack_1c0 = puVar20;
    iVar12 = i2c_transfer(*(*(iVar18 + 0x8c0) + 0x18),&uStack_1c8,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar8 = *(*(iVar18 + 0x8c0) + 2);
    *puVar20 = 0;
    *(iVar18 + 0xb30) = 0;
    *(iVar18 + 0xb38) = 0;
    *(iVar18 + 0xb40) = 0;
    *(iVar18 + 0xb48) = 0;
    *(iVar18 + 0xb50) = 0;
    *(iVar18 + 0xb58) = 0;
    *(iVar18 + 0xb60) = 0;
    *(iVar18 + 0xb68) = 0;
    *(iVar18 + 0xb70) = 0;
    *(iVar18 + 0xb78) = 0;
    *(iVar18 + 0xb80) = 0;
    *(iVar18 + 0xb88) = 0;
    *(iVar18 + 0xb90) = 0;
    *(iVar18 + 0xb98) = 0;
    *(iVar18 + 0xba0) = 0;
    *(iVar18 + 0xb28) = 0x805a;
    uStack_1c8._0_4_ = uVar8;
    uStack_1c8._0_6_ = CONCAT24(2,uStack_1c8);
    uStack_1c8 = uStack_1c8;
    puStack_1c0 = puVar20;
    uVar19 = i2c_transfer(*(*(iVar18 + 0x8c0) + 0x18),&uStack_1c8,1);
    if (uVar19 < 1) {
        uVar19 = _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar16 = uVar26;
    iVar12 = iVar16 + 0x1f;
    if (-1 < iVar16) {
        iVar12 = iVar16;
    }
    uVar14 = bVar10 + (iVar12 >> 5);
    uVar26 = uVar14;
    if (0 < uVar14) {
        uVar17 = 0;
        unaff_x26 = iVar18 + 0xba8;
        unaff_x27 = 1;
        unaff_x28 = 0x200001;
        uVar33 = 0x5f;
        pcVar34 = "lt9611uxc_read";
        do {
            uStack_1d8 = 0;
            uStack_1d0 = 0;
            uStack_1e8 = 0;
            uStack_1e0 = 0;
            sym.lt9611uxc_flash_read_addr_set(iVar18,uVar17 & 0xffffffff);
            iVar32 = *(iVar18 + 0x8c0);
            uVar7 = *(iVar32 + 2);
            uVar9 = *(iVar32 + 2);
            *(iVar18 + 0xc18) = 0;
            *(iVar18 + 0xc20) = 0;
            *(iVar18 + 0xc08) = 0;
            *(iVar18 + 0xc10) = 0;
            *(iVar18 + 0xbf8) = 0;
            *(iVar18 + 0xc00) = 0;
            *(iVar18 + 0xbe8) = 0;
            *(iVar18 + 0xbf0) = 0;
            *(iVar18 + 0xbd8) = 0;
            *(iVar18 + 0xbe0) = 0;
            *(iVar18 + 0xbc8) = 0;
            *(iVar18 + 0xbd0) = 0;
            *(iVar18 + 3000) = 0;
            *(iVar18 + 0xbc0) = 0;
            *(iVar18 + 0xba8) = 0;
            *(iVar18 + 0xbb0) = 0;
            *(iVar18 + 0xb98) = 0;
            *(iVar18 + 0xba0) = 0;
            *(iVar18 + 0xb88) = 0;
            *(iVar18 + 0xb90) = 0;
            *(iVar18 + 0xb78) = 0;
            *(iVar18 + 0xb80) = 0;
            *(iVar18 + 0xb68) = 0;
            *(iVar18 + 0xb70) = 0;
            *(iVar18 + 0xb58) = 0;
            *(iVar18 + 0xb60) = 0;
            *(iVar18 + 0xb48) = 0;
            *(iVar18 + 0xb50) = 0;
            *(iVar18 + 0xb38) = 0;
            *(iVar18 + 0xb40) = 0;
            *puVar20 = 0;
            *(iVar18 + 0xb30) = 0;
            *(iVar18 + 0xb28) = 0x5f;
            uStack_1c8 = CONCAT62(0x10000,uVar7);
            uStack_1b8 = CONCAT42(0x200001,uVar9);
            puStack_1c0 = puVar20;
            pcStack_1b0 = unaff_x26;
            uVar19 = i2c_transfer(*(iVar32 + 0x18),&uStack_1c8,2);
            if (uVar19 == 2) {
                uStack_1e8 = *unaff_x26;
                uStack_1e0 = *(iVar18 + 0xbb0);
                uStack_1d8 = *(iVar18 + 3000);
                uStack_1d0 = *(iVar18 + 0xbc0);
            }
            else {
                uVar19 = _printk(0x80006dd,"lt9611uxc_read");
            }
            puVar40 = auVar42._8_8_ + uVar17;
            uVar17 = uVar17 + 0x20;
            uVar14 = uVar26 - 1;
            uVar26 = uVar14;
            *puVar40 = uStack_1e8;
            puVar40[1] = uStack_1e0;
            puVar40[2] = uStack_1d8;
            puVar40[3] = uStack_1d0;
        } while (uVar14 != 0);
        uVar26 = 0;
    }
    iVar32 = sp_el0;
    if (*(iVar32 + 0x5e0) == iStack_1a8) {
        return uVar19;
    }
    iVar18 = __stack_chk_fail();
    *extraout_x18_02 = sym.lt9611uxc_flash_write_config;
    pcStack_218 = sym.lt9611uxc_flash_write_config;
    iVar32 = sp_el0;
    iStack_228 = *(iVar32 + 0x5e0);
    pppuStack_220 = &pppuStack_1a0;
    uStack_210 = uVar17;
    auStack_200 = auVar42;
    sym.lt9611uxc_flash_write_en(iVar18);
    puVar40 = iVar18 + 0xb28;
    uVar7 = *(*(iVar18 + 0x8c0) + 2);
    *(iVar18 + 0xb28) = 0;
    *(iVar18 + 0xb30) = 0;
    *(iVar18 + 0xb38) = 0;
    *(iVar18 + 0xb40) = 0;
    *(iVar18 + 0xb48) = 0;
    *(iVar18 + 0xb50) = 0;
    *(iVar18 + 0xb58) = 0;
    *(iVar18 + 0xb60) = 0;
    *(iVar18 + 0xb68) = 0;
    *(iVar18 + 0xb70) = 0;
    *(iVar18 + 0xb78) = 0;
    *(iVar18 + 0xb80) = 0;
    *(iVar18 + 0xb88) = 0;
    *(iVar18 + 0xb90) = 0;
    *(iVar18 + 0xb98) = 0;
    *(iVar18 + 0xb28) = 0x80ff;
    *(iVar18 + 0xba0) = 0;
    uStack_238 = CONCAT62(0x20000,uVar7);
    puStack_230 = puVar40;
    iVar12 = i2c_transfer(*(*(iVar18 + 0x8c0) + 0x18),&uStack_238,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar8 = *(*(iVar18 + 0x8c0) + 2);
    *puVar40 = 0;
    *(iVar18 + 0xb30) = 0;
    *(iVar18 + 0xb38) = 0;
    *(iVar18 + 0xb40) = 0;
    *(iVar18 + 0xb48) = 0;
    *(iVar18 + 0xb50) = 0;
    *(iVar18 + 0xb58) = 0;
    *(iVar18 + 0xb60) = 0;
    *(iVar18 + 0xb68) = 0;
    *(iVar18 + 0xb70) = 0;
    *(iVar18 + 0xb78) = 0;
    *(iVar18 + 0xb80) = 0;
    *(iVar18 + 0xb88) = 0;
    *(iVar18 + 0xb90) = 0;
    *(iVar18 + 0xb98) = 0;
    *(iVar18 + 0xba0) = 0;
    *(iVar18 + 0xb28) = 0xdf5e;
    uStack_238._0_4_ = uVar8;
    uStack_238._0_6_ = CONCAT24(2,uStack_238);
    uStack_238 = uStack_238;
    puStack_230 = puVar40;
    iVar12 = i2c_transfer(*(*(iVar18 + 0x8c0) + 0x18),&uStack_238,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar8 = *(*(iVar18 + 0x8c0) + 2);
    *puVar40 = 0;
    *(iVar18 + 0xb30) = 0;
    *(iVar18 + 0xb38) = 0;
    *(iVar18 + 0xb40) = 0;
    *(iVar18 + 0xb48) = 0;
    *(iVar18 + 0xb50) = 0;
    *(iVar18 + 0xb58) = 0;
    *(iVar18 + 0xb60) = 0;
    *(iVar18 + 0xb68) = 0;
    *(iVar18 + 0xb70) = 0;
    *(iVar18 + 0xb78) = 0;
    *(iVar18 + 0xb80) = 0;
    *(iVar18 + 0xb88) = 0;
    *(iVar18 + 0xb90) = 0;
    *(iVar18 + 0xb98) = 0;
    *(iVar18 + 0xba0) = 0;
    *(iVar18 + 0xb28) = 0x205a;
    uStack_238._0_4_ = uVar8;
    uStack_238._0_6_ = CONCAT24(2,uStack_238);
    uStack_238 = uStack_238;
    puStack_230 = puVar40;
    iVar12 = i2c_transfer(*(*(iVar18 + 0x8c0) + 0x18),&uStack_238,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar8 = *(*(iVar18 + 0x8c0) + 2);
    *puVar40 = 0;
    *(iVar18 + 0xb30) = 0;
    *(iVar18 + 0xb38) = 0;
    *(iVar18 + 0xb40) = 0;
    *(iVar18 + 0xb48) = 0;
    *(iVar18 + 0xb50) = 0;
    *(iVar18 + 0xb58) = 0;
    *(iVar18 + 0xb60) = 0;
    *(iVar18 + 0xb68) = 0;
    *(iVar18 + 0xb70) = 0;
    *(iVar18 + 0xb78) = 0;
    *(iVar18 + 0xb80) = 0;
    *(iVar18 + 0xb88) = 0;
    *(iVar18 + 0xb90) = 0;
    *(iVar18 + 0xb98) = 0;
    *(iVar18 + 0xba0) = 0;
    *(iVar18 + 0xb28) = 0x5a;
    uStack_238._0_4_ = uVar8;
    uStack_238._0_6_ = CONCAT24(2,uStack_238);
    uStack_238 = uStack_238;
    puStack_230 = puVar40;
    iVar12 = i2c_transfer(*(*(iVar18 + 0x8c0) + 0x18),&uStack_238,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar8 = *(*(iVar18 + 0x8c0) + 2);
    *puVar40 = 0;
    *(iVar18 + 0xb30) = 0;
    *(iVar18 + 0xb38) = 0;
    *(iVar18 + 0xb40) = 0;
    *(iVar18 + 0xb48) = 0;
    *(iVar18 + 0xb50) = 0;
    *(iVar18 + 0xb58) = 0;
    *(iVar18 + 0xb60) = 0;
    *(iVar18 + 0xb68) = 0;
    *(iVar18 + 0xb70) = 0;
    *(iVar18 + 0xb78) = 0;
    *(iVar18 + 0xb80) = 0;
    *(iVar18 + 0xb88) = 0;
    *(iVar18 + 0xb90) = 0;
    *(iVar18 + 0xb98) = 0;
    *(iVar18 + 0xba0) = 0;
    *(iVar18 + 0xb28) = 0x2158;
    uStack_238._0_4_ = uVar8;
    uStack_238._0_6_ = CONCAT24(2,uStack_238);
    uStack_238 = uStack_238;
    puStack_230 = puVar40;
    uVar17 = i2c_transfer(*(*(iVar18 + 0x8c0) + 0x18),&uStack_238,1);
    if (uVar17 < 1) {
        uVar17 = _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar32 = sp_el0;
    if (*(iVar32 + 0x5e0) == iStack_228) {
        return uVar17;
    }
    auVar42 = __stack_chk_fail();
    iVar23 = auVar42._0_8_;
    *extraout_x18_03 = sym.lt9611uxc_flash_write_addr_set;
    pcStack_268 = sym.lt9611uxc_flash_write_addr_set;
    uStack_258 = 2;
    iVar32 = sp_el0;
    iStack_278 = *(iVar32 + 0x5e0);
    puVar31 = iVar23 + 0xb28;
    uVar7 = *(*(iVar23 + 0x8c0) + 2);
    *(iVar23 + 0xb28) = 0;
    *(iVar23 + 0xb30) = 0;
    *(iVar23 + 0xb38) = 0;
    *(iVar23 + 0xb40) = 0;
    *(iVar23 + 0xb48) = 0;
    *(iVar23 + 0xb50) = 0;
    *(iVar23 + 0xb58) = 0;
    *(iVar23 + 0xb60) = 0;
    *(iVar23 + 0xb68) = 0;
    *(iVar23 + 0xb70) = 0;
    *(iVar23 + 0xb78) = 0;
    *(iVar23 + 0xb80) = 0;
    *(iVar23 + 0xb88) = 0;
    *(iVar23 + 0xb28) = 0x5b;
    *(iVar23 + 0xb90) = 0;
    *(iVar23 + 0xb98) = 0;
    *(iVar23 + 0xba0) = 0;
    *(iVar23 + 0xb29) = auVar42[10];
    uStack_288 = CONCAT62(0x20000,uVar7);
    puStack_280 = puVar31;
    pppuStack_270 = &pppuStack_220;
    uStack_260 = uVar33;
    puStack_250 = puVar40;
    iStack_248 = iVar18;
    iVar12 = i2c_transfer(*(*(iVar23 + 0x8c0) + 0x18),&uStack_288,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar8 = *(*(iVar23 + 0x8c0) + 2);
    *puVar31 = 0;
    *(iVar23 + 0xb30) = 0;
    *(iVar23 + 0xb38) = 0;
    *(iVar23 + 0xb40) = 0;
    *(iVar23 + 0xb48) = 0;
    *(iVar23 + 0xb50) = 0;
    *(iVar23 + 0xb58) = 0;
    *(iVar23 + 0xb60) = 0;
    *(iVar23 + 0xb68) = 0;
    *(iVar23 + 0xb70) = 0;
    *(iVar23 + 0xb78) = 0;
    *(iVar23 + 0xb80) = 0;
    *(iVar23 + 0xb88) = 0;
    *(iVar23 + 0xb90) = 0;
    *(iVar23 + 0xb98) = 0;
    *(iVar23 + 0xba0) = 0;
    *(iVar23 + 0xb28) = 0x5c;
    *(iVar23 + 0xb29) = auVar42[9];
    uStack_288._0_4_ = uVar8;
    uStack_288._0_6_ = CONCAT24(2,uStack_288);
    uStack_288 = uStack_288;
    puStack_280 = puVar31;
    iVar12 = i2c_transfer(*(*(iVar23 + 0x8c0) + 0x18),&uStack_288,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar8 = *(*(iVar23 + 0x8c0) + 2);
    *puVar31 = 0;
    *(iVar23 + 0xb30) = 0;
    *(iVar23 + 0xb38) = 0;
    *(iVar23 + 0xb40) = 0;
    *(iVar23 + 0xb48) = 0;
    *(iVar23 + 0xb50) = 0;
    *(iVar23 + 0xb58) = 0;
    *(iVar23 + 0xb60) = 0;
    *(iVar23 + 0xb68) = 0;
    *(iVar23 + 0xb70) = 0;
    *(iVar23 + 0xb78) = 0;
    *(iVar23 + 0xb80) = 0;
    *(iVar23 + 0xb88) = 0;
    *(iVar23 + 0xb90) = 0;
    *(iVar23 + 0xb98) = 0;
    *(iVar23 + 0xba0) = 0;
    *(iVar23 + 0xb28) = 0x5d;
    *(iVar23 + 0xb29) = auVar42[8];
    uStack_288._0_4_ = uVar8;
    uStack_288._0_6_ = CONCAT24(2,uStack_288);
    uStack_288 = uStack_288;
    puStack_280 = puVar31;
    iVar12 = i2c_transfer(*(*(iVar23 + 0x8c0) + 0x18),&uStack_288,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar8 = *(*(iVar23 + 0x8c0) + 2);
    *puVar31 = 0;
    *(iVar23 + 0xb30) = 0;
    *(iVar23 + 0xb38) = 0;
    *(iVar23 + 0xb40) = 0;
    *(iVar23 + 0xb48) = 0;
    *(iVar23 + 0xb50) = 0;
    *(iVar23 + 0xb58) = 0;
    *(iVar23 + 0xb60) = 0;
    *(iVar23 + 0xb68) = 0;
    *(iVar23 + 0xb70) = 0;
    *(iVar23 + 0xb78) = 0;
    *(iVar23 + 0xb80) = 0;
    *(iVar23 + 0xb88) = 0;
    *(iVar23 + 0xb90) = 0;
    *(iVar23 + 0xb98) = 0;
    *(iVar23 + 0xba0) = 0;
    *(iVar23 + 0xb28) = 0x105a;
    uStack_288._0_4_ = uVar8;
    uStack_288._0_6_ = CONCAT24(2,uStack_288);
    uStack_288 = uStack_288;
    puStack_280 = puVar31;
    iVar12 = i2c_transfer(*(*(iVar23 + 0x8c0) + 0x18),&uStack_288,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar14 = 1;
    uVar8 = *(*(iVar23 + 0x8c0) + 2);
    *puVar31 = 0;
    *(iVar23 + 0xb30) = 0;
    *(iVar23 + 0xb38) = 0;
    *(iVar23 + 0xb40) = 0;
    *(iVar23 + 0xb48) = 0;
    *(iVar23 + 0xb50) = 0;
    *(iVar23 + 0xb58) = 0;
    *(iVar23 + 0xb60) = 0;
    *(iVar23 + 0xb68) = 0;
    *(iVar23 + 0xb70) = 0;
    *(iVar23 + 0xb78) = 0;
    *(iVar23 + 0xb80) = 0;
    *(iVar23 + 0xb88) = 0;
    *(iVar23 + 0xb90) = 0;
    *(iVar23 + 0xb98) = 0;
    *(iVar23 + 0xba0) = 0;
    *(iVar23 + 0xb28) = 0x5a;
    uStack_288._0_4_ = uVar8;
    uStack_288._0_6_ = CONCAT24(2,uStack_288);
    uStack_288 = uStack_288;
    puStack_280 = puVar31;
    uVar17 = i2c_transfer(*(*(iVar23 + 0x8c0) + 0x18),&uStack_288);
    if (uVar17 < 1) {
        uVar17 = _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar32 = sp_el0;
    if (*(iVar32 + 0x5e0) == iStack_278) {
        return uVar17;
    }
    auVar42 = __stack_chk_fail();
    pcVar37 = auVar42._8_8_;
    iVar32 = auVar42._0_8_;
    *extraout_x18_04 = sym.lt9611uxc_firmware_write;
    pcStack_2e8 = sym.lt9611uxc_firmware_write;
    uStack_2b0 = 2;
    uStack_2a0 = 2;
    uVar15 = uVar14 + 0x1f;
    if (-1 < uVar14) {
        uVar15 = uVar14;
    }
    iVar18 = sp_el0;
    iStack_2f8 = *(iVar18 + 0x5e0);
    uVar17 = uVar15 >> 5;
    uVar29 = uVar14 % 0x20;
    puVar40 = iVar32 + 0xb28;
    puVar41 = iVar32 + 0xb29;
    pppuStack_2f0 = &pppuStack_270;
    uStack_2e0 = unaff_x28;
    uStack_2d8 = unaff_x27;
    pcStack_2d0 = unaff_x26;
    uStack_2c8 = uVar26;
    puStack_2c0 = puVar20;
    pcStack_2b8 = pcVar34;
    puStack_2a8 = puVar31;
    iStack_298 = iVar23;
    if (uVar14 < 0x20) {
        pcVar35 = NULL;
        uVar26 = uVar29;
        pcVar34 = unaff_x26;
    }
    else {
        pcVar35 = NULL;
        puVar31 = 0x21;
        pcVar34 = "lt9611uxc_write";
        uStack_33c = uVar15 >> 5;
        uStack_338 = uVar29;
        uStack_32c = uVar14;
        do {
            pcVar3 = pcVar37 + pcVar35;
            sym.lt9611uxc_flash_write_config(iVar32);
            uVar7 = *(*(iVar32 + 0x8c0) + 2);
            *(iVar32 + 0xb28) = 0x59;
            uVar4 = *(pcVar3 + 0x18);
            uVar24 = *pcVar3;
            uVar5 = *(pcVar3 + 8);
            uStack_318 = CONCAT62(0x210000,uVar7);
            *(iVar32 + 0xb39) = *(pcVar3 + 0x10);
            *(iVar32 + 0xb41) = uVar4;
            *puVar41 = uVar24;
            *(iVar32 + 0xb31) = uVar5;
            puStack_310 = puVar40;
            iVar12 = i2c_transfer(*(*(iVar32 + 0x8c0) + 0x18),&uStack_318,1);
            if (iVar12 < 1) {
                _printk(0x8001311,"lt9611uxc_write");
            }
            sym.lt9611uxc_flash_write_addr_set(iVar32,pcVar35 & 0xffffffff);
            msleep(0x14);
            pcVar35 = pcVar35 + 0x20;
            uVar14 = uVar17 - 1;
            uVar17 = uVar14;
        } while (uVar14 != 0);
        pcVar37 = pcVar37 + pcVar35;
        uVar17 = uStack_33c;
        uVar29 = uStack_338;
        uVar26 = uStack_338;
        uVar14 = uStack_32c;
    }
    if (0 < uVar29) {
        uStack_308 = 0xffffffffffffffff;
        uStack_300 = 0xffffffffffffffff;
        uStack_318 = 0xffffffffffffffff;
        puStack_310 = 0xffffffffffffffff;
        memcpy(&uStack_318,pcVar37,uVar26);
        sym.lt9611uxc_flash_write_config(iVar32);
        uVar7 = *(*(iVar32 + 0x8c0) + 2);
        *puVar41 = uStack_318;
        *(iVar32 + 0xb31) = puStack_310;
        *(iVar32 + 0xb39) = uStack_308;
        *(iVar32 + 0xb41) = uStack_300;
        *(iVar32 + 0xb28) = 0x59;
        uStack_328 = CONCAT62(0x210000,uVar7);
        puStack_320 = puVar40;
        iVar12 = i2c_transfer(*(*(iVar32 + 0x8c0) + 0x18),&uStack_328,1);
        if (iVar12 < 1) {
            _printk(0x8001311,"lt9611uxc_write");
        }
        sym.lt9611uxc_flash_write_addr_set(iVar32,pcVar35 & 0xffffffff);
        msleep(0x14);
    }
    msleep(0x14);
    uVar33 = _printk(0x8000dc1,"lt9611uxc_firmware_write",uVar14,uVar17,uVar26 & 0xffffffff);
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_2f8) {
        return uVar33;
    }
    auVar42 = __stack_chk_fail();
    puVar25 = auVar42._8_8_;
    iVar23 = auVar42._0_8_;
    *extraout_x18_05 = sym.lt9611uxc_firmware_upgrade;
    pcStack_398 = sym.lt9611uxc_firmware_upgrade;
    iVar18 = sp_el0;
    iStack_3a8 = *(iVar18 + 0x5e0);
    uVar33 = *puVar25;
    pppuStack_3a0 = &pppuStack_2f0;
    puStack_390 = puVar41;
    puStack_388 = puVar40;
    pcStack_380 = pcVar34;
    uStack_378 = uVar17;
    pcStack_370 = pcVar37;
    pcStack_368 = pcVar35;
    iStack_360 = iVar32;
    puStack_358 = puVar31;
    uStack_350 = uVar26;
    uStack_348 = uVar14;
    _printk(0x8000c20,"lt9611uxc_firmware_upgrade",uVar33 & 0xffffffff);
    iVar32 = uVar33 << 0x20;
    puVar20 = __kmalloc(iVar32 + 0x1f00000000 >> 0x20 & 0xffffffffffffffe0,0xdc0);
    uVar17 = 0;
    puStack_3e0 = puVar31;
    if (puVar20 != NULL) {
        iVar18 = 0;
        puVar40 = iVar23 + 0xb28;
        puVar41 = 0x8001730;
        pcVar35 = 0x2;
        pcVar37 = "lt9611uxc_write_byte";
        *(iVar23 + 0xc30) = 1;
        do {
            uVar7 = *(iVar18 + 0x8001730);
            uVar8 = *(*(iVar23 + 0x8c0) + 2);
            *puVar40 = 0;
            *(iVar23 + 0xb30) = 0;
            *(iVar23 + 0xb38) = 0;
            *(iVar23 + 0xb40) = 0;
            *(iVar23 + 0xb48) = 0;
            *(iVar23 + 0xb50) = 0;
            *(iVar23 + 0xb58) = 0;
            *(iVar23 + 0xb60) = 0;
            *(iVar23 + 0xb68) = 0;
            *(iVar23 + 0xb70) = 0;
            *(iVar23 + 0xb78) = 0;
            *(iVar23 + 0xb80) = 0;
            *(iVar23 + 0xb88) = 0;
            *(iVar23 + 0xb90) = 0;
            *(iVar23 + 0xb98) = 0;
            *(iVar23 + 0xba0) = 0;
            *(iVar23 + 0xb28) = uVar7;
            uStack_3b8 = CONCAT24(2,uVar8);
            puStack_3b0 = puVar40;
            iVar12 = i2c_transfer(*(*(iVar23 + 0x8c0) + 0x18),&uStack_3b8,1);
            if (iVar12 < 1) {
                _printk(0x8001311,"lt9611uxc_write_byte");
            }
            iVar18 = iVar18 + 2;
        } while (iVar18 != 0xe);
        sym.lt9611uxc_block_erase(iVar23);
        sym.lt9611uxc_block_erase(iVar23);
        sym.lt9611uxc_firmware_write(iVar23,puVar25[1],uVar33 & 0xffffffff);
        msleep(0x14);
        sym.lt9611uxc_fw_read_back(iVar23,puVar20,uVar33);
        iVar12 = bcmp(puVar25[1],puVar20,iVar32 >> 0x20);
        uVar24 = 0x8000ff4;
        if (iVar12 != 0) {
            uVar24 = 0x8000a82;
        }
        *(iVar23 + 0xc30) = (iVar12 != 0) << 1;
        _printk(uVar24,"lt9611uxc_firmware_upgrade");
        uVar17 = kfree(puVar20);
        pcVar34 = 0xe;
        puStack_3e0 = puVar20;
    }
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_3a8) {
        return uVar17;
    }
    pcVar21 = __stack_chk_fail();
    *extraout_x18_06 = sym.lt9611uxc_edid_en;
    pcStack_3e8 = sym.lt9611uxc_edid_en;
    iVar18 = sp_el0;
    iStack_3f8 = *(iVar18 + 0x5e0);
    pcVar36 = pcVar21 + 0xb28;
    uVar7 = *(*(pcVar21 + 0x8c0) + 2);
    *(pcVar21 + 0xb28) = 0;
    *(pcVar21 + 0xb30) = 0;
    *(pcVar21 + 0xb38) = 0;
    *(pcVar21 + 0xb40) = 0;
    *(pcVar21 + 0xb48) = 0;
    *(pcVar21 + 0xb50) = 0;
    *(pcVar21 + 0xb58) = 0;
    *(pcVar21 + 0xb60) = 0;
    *(pcVar21 + 0xb68) = 0;
    *(pcVar21 + 0xb70) = 0;
    *(pcVar21 + 0xb78) = 0;
    *(pcVar21 + 0xb80) = 0;
    *(pcVar21 + 0xb88) = 0;
    *(pcVar21 + 0xb90) = 0;
    *(pcVar21 + 0xb98) = 0;
    *(pcVar21 + 0xb28) = 0xb0ff;
    *(pcVar21 + 0xba0) = 0;
    uStack_408 = CONCAT62(0x20000,uVar7);
    pcStack_400 = pcVar36;
    pppuStack_3f0 = &pppuStack_3a0;
    puStack_3d0 = puVar25;
    iStack_3c8 = iVar23;
    iVar12 = i2c_transfer(*(*(pcVar21 + 0x8c0) + 0x18),&uStack_408,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar7 = *(*(pcVar21 + 0x8c0) + 2);
    *pcVar36 = 0;
    *(pcVar21 + 0xb30) = 0;
    *(pcVar21 + 0xb38) = 0;
    *(pcVar21 + 0xb40) = 0;
    *(pcVar21 + 0xb48) = 0;
    *(pcVar21 + 0xb50) = 0;
    *(pcVar21 + 0xb58) = 0;
    *(pcVar21 + 0xb60) = 0;
    *(pcVar21 + 0xb68) = 0;
    *(pcVar21 + 0xb70) = 0;
    *(pcVar21 + 0xb78) = 0;
    *(pcVar21 + 0xb80) = 0;
    *(pcVar21 + 0xb88) = 0;
    *(pcVar21 + 0xb90) = 0;
    *(pcVar21 + 0xb98) = 0;
    *(pcVar21 + 0xba0) = 0;
    *(pcVar21 + 0xb28) = 0x100b;
    uStack_408 = CONCAT62(0x20000,uVar7);
    pcStack_400 = pcVar36;
    uVar17 = i2c_transfer(*(*(pcVar21 + 0x8c0) + 0x18),&uStack_408,1);
    if (uVar17 < 1) {
        uVar17 = _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_3f8) {
        return uVar17;
    }
    pcVar22 = __stack_chk_fail();
    *extraout_x18_07 = sym.lt9611uxc_probe;
    pcStack_468 = sym.lt9611uxc_probe;
    uStack_420 = 0x200000000;
    iVar18 = sp_el0;
    iStack_478 = *(iVar18 + 0x5e0);
    pppuStack_470 = &pppuStack_3f0;
    puStack_460 = puVar41;
    puStack_458 = puVar40;
    pcStack_450 = pcVar34;
    iStack_448 = iVar32;
    pcStack_440 = pcVar37;
    pcStack_438 = pcVar35;
    uStack_430 = uVar33;
    pcStack_428 = pcVar36;
    pcStack_418 = pcVar21;
    if ((pcVar22 == NULL) || (pcVar36 = pcVar22, *(pcVar22 + 0x310) == 0)) {
        _printk(0x8000306,"lt9611uxc_probe");
        uVar17 = 0xffffffea;
        pcVar30 = 0x200000000;
        pcVar22 = pcVar36;
        goto code_r0x08003fa8;
    }
    pcVar21 = *(pcVar22 + 0x18);
    pcVar30 = *(*(pcVar21 + 0x10) + 0x20);
    __cfi_slowpath_diag(0x6871e466cec98751,pcVar30,0x8000270);
    uVar17 = (*pcVar30)(pcVar21);
    if ((uVar17 & 1) == 0) {
        _printk(0x8000c9e,"lt9611uxc_probe");
        uVar17 = 0xffffffed;
        goto code_r0x08003fa8;
    }
    pcVar36 = pcVar22 + 0x20;
    _printk(0x8000cc0,"lt9611uxc_probe","lt9611uxc_probe");
    arg1_00 = devm_kmalloc(pcVar36,0xc38,0xdc0);
    pcVar30 = pcVar36;
    if (arg1_00 == NULL) {
        uVar17 = 0xfffffff4;
        goto code_r0x08003fa8;
    }
    pcVar38 = *(pcVar22 + 0x310);
    iVar32 = of_graph_get_endpoint_by_regs(pcVar38,0,0);
    if (iVar32 == 0) {
        uVar24 = 0x8000d3c;
code_r0x080040b0:
        _printk(uVar24,"lt9611uxc_parse_dt");
        uVar17 = 0xffffffed;
    }
    else {
        uVar17 = of_graph_get_remote_port_parent();
        *(arg1_00 + 0x118) = uVar17;
        if (uVar17 == 0) {
            uVar24 = 0x8000e6b;
            goto code_r0x080040b0;
        }
        uVar14 = of_get_named_gpio_flags(pcVar38,"lt,irq-gpio",0,0);
        uVar17 = 0;
        *(arg1_00 + 0x89c) = uVar14;
        if (0x1ff < uVar14) {
            _printk(0x800083a,"lt9611uxc_parse_dt");
            uVar17 = 0xffffffea;
        }
        uVar14 = of_get_named_gpio_flags(pcVar38,"lt,reset-gpio",0,0);
        *(arg1_00 + 0x8a0) = uVar14;
        if (0x1ff < uVar14) {
            _printk(0x80005ef,"lt9611uxc_parse_dt");
            uVar17 = 0xffffffea;
        }
        uVar13 = of_get_named_gpio_flags(pcVar38,"lt,hdmi-ps-gpio",0,0);
        *(arg1_00 + 0x8a4) = uVar13;
        uVar13 = of_get_named_gpio_flags(pcVar38,"lt,hdmi-en-gpio",0,0);
        *(arg1_00 + 0x8a8) = uVar13;
        uVar13 = of_get_named_gpio_flags(pcVar38,"lt,hdmi-3p3-en",0,0);
        *(arg1_00 + 0x8ac) = uVar13;
        uVar13 = of_get_named_gpio_flags(pcVar38,"lt,hdmi-1p2-en",0,0);
        *(arg1_00 + 0x8b0) = uVar13;
        iVar32 = of_find_property(pcVar38,"lt,ac-mode",0);
        pcStack_4b8 = arg1_00 + 0x8d8;
        arg1_00[0x898] = iVar32 != 0;
        *(arg1_00 + 0x8d8) = pcStack_4b8;
        *(arg1_00 + 0x8e0) = pcStack_4b8;
        uStack_498 = uStack_498._4_4_ << 0x20;
        uStack_4a8 = 0;
        uStack_4a0 = 0;
        uStack_4ac = 0;
        iVar32 = of_get_child_by_name(pcVar38,"lt,customize-modes");
        if (iVar32 == 0) {
            iVar32 = of_parse_phandle(pcVar38,"lt,customize-modes",0);
            if (iVar32 != 0) goto code_r0x08004254;
            _printk(0x8000f8e,"lt9611uxc_parse_dt_modes");
        }
        else {
code_r0x08004254:
            iVar18 = of_get_next_child(iVar32,0);
            if (iVar18 == 0) {
                pcVar34 = NULL;
            }
            else {
                pcVar34 = NULL;
                uVar14 = 0;
                do {
                    pcVar35 = kmem_cache_alloc_trace(_drm_atomic_helper_connector_destroy_state,0xdc0,0x78);
                    if (pcVar35 == NULL) {
                        _printk(0x8000e88,"lt9611uxc_parse_dt_modes");
                    }
                    else {
                        iVar12 = of_property_read_variable_u32_array(iVar18,"lt,mode-h-active",pcVar35 + 4,1,0);
                        pcVar38 = pcVar35;
                        if (iVar12 < 0) {
                            uVar24 = 0x8000473;
                        }
                        else {
                            iVar12 = of_property_read_variable_u32_array
                                               (iVar18,"lt,mode-h-front-porch",&uStack_498,1,0);
                            if (iVar12 < 0) {
                                uVar24 = 0x8001234;
                            }
                            else {
                                iVar12 = of_property_read_variable_u32_array
                                                   (iVar18,"lt,mode-h-pulse-width",&uStack_4a0 + 4,1,0);
                                if (iVar12 < 0) {
                                    uVar24 = 0x8000cd5;
                                }
                                else {
                                    iVar12 = of_property_read_variable_u32_array
                                                       (iVar18,"lt,mode-h-back-porch",&uStack_4a0,1,0);
                                    if (iVar12 < 0) {
                                        uVar24 = 0x8001047;
                                    }
                                    else {
                                        iVar23 = of_find_property(iVar18,"lt,mode-h-active-high",0);
                                        iVar12 = of_property_read_variable_u32_array
                                                           (iVar18,"lt,mode-v-active",pcVar35 + 0xe,1,0);
                                        if (iVar12 < 0) {
                                            uVar24 = 0x8000d5d;
                                        }
                                        else {
                                            iVar12 = of_property_read_variable_u32_array
                                                               (iVar18,"lt,mode-v-front-porch",&uStack_4a8 + 4,1,0);
                                            if (iVar12 < 0) {
                                                uVar24 = 0x800094e;
                                            }
                                            else {
                                                iVar12 = of_property_read_variable_u32_array
                                                                   (iVar18,"lt,mode-v-pulse-width",&uStack_4a8,1,0);
                                                if (iVar12 < 0) {
                                                    uVar24 = 0x8000757;
                                                }
                                                else {
                                                    iVar12 = of_property_read_variable_u32_array
                                                                       (iVar18,"lt,mode-v-back-porch",&uStack_4ac,1,
                                                                        0);
                                                    if (iVar12 < 0) {
                                                        uVar24 = 0x8000979;
                                                    }
                                                    else {
                                                        pcVar30 = of_find_property(iVar18,"lt,mode-v-active-high",0);
                                                        iVar12 = of_property_read_variable_u32_array
                                                                           (iVar18,"lt,mode-clock-in-khz",pcVar35,1,
                                                                            0);
                                                        if (-1 < iVar12) {
                                                            iVar1 = *(pcVar35 + 4) + uStack_498 + uStack_4a0._4_2_;
                                                            puVar20 = *(arg1_00 + 0x8e0);
                                                            *(pcVar35 + 6) = *(pcVar35 + 4) + uStack_498;
                                                            *(pcVar35 + 8) = iVar1;
                                                            iVar2 = *(pcVar35 + 0xe) + uStack_4a8._4_2_ + uStack_4a8;
                                                            *(pcVar35 + 0x10) = *(pcVar35 + 0xe) + uStack_4a8._4_2_;
                                                            *(pcVar35 + 10) = iVar1 + uStack_4a0;
                                                            uVar15 = 1;
                                                            if (iVar23 == 0) {
                                                                uVar15 = 2;
                                                            }
                                                            uVar29 = 8;
                                                            if (pcVar30 != NULL) {
                                                                uVar29 = 4;
                                                            }
                                                            pcVar30 = pcVar35 + 0x40;
                                                            uVar14 = uVar15 | uVar14 | uVar29;
                                                            *(pcVar35 + 0x12) = iVar2;
                                                            *(pcVar35 + 0x14) = iVar2 + uStack_4ac;
                                                            *(pcVar35 + 0x18) = uVar14;
                                                            uVar26 = __list_add_valid(pcVar30,puVar20,pcStack_4b8);
                                                            if ((uVar26 & 1) != 0) {
                                                                *(arg1_00 + 0x8e0) = pcVar30;
                                                                *(pcVar35 + 0x40) = pcStack_4b8;
                                                                *(pcVar35 + 0x48) = puVar20;
                                                                *puVar20 = pcVar30;
                                                            }
                                                            pcVar34 = pcVar34 + 1;
                                                            drm_mode_set_name(pcVar35);
                                                            goto code_r0x080042cc;
                                                        }
                                                        uVar24 = 0x8000d15;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        _printk(uVar24,"lt9611uxc_parse_dt_modes",iVar12);
                        kfree(pcVar35);
                    }
code_r0x080042cc:
                    iVar18 = of_get_next_child(iVar32,iVar18);
                } while (iVar18 != 0);
            }
            *(arg1_00 + 0x8d0) = pcVar34;
            pcVar35 = arg1_00;
        }
        pcStack_4c0 = pcVar36;
        if (uVar17 == 0) {
            uStack_4a0 = uStack_4a0 & 0xffffffff;
            if (pcVar36 != NULL) {
                uVar17 = *(pcVar22 + 0x310);
                *(arg1_00 + 0x8b4) = 0;
                pcVar21 = of_get_child_by_name(uVar17,"lt,supply-entries");
                if (pcVar21 == NULL) {
                    uVar24 = 0x80004ab;
                    pcVar21 = pcVar38;
                }
                else {
                    iVar32 = of_get_next_available_child(pcVar21,0);
                    if (iVar32 == 0) {
                        *(arg1_00 + 0x8b4) = 0;
                    }
                    else {
                        pcVar30 = NULL;
                        do {
                            uVar14 = pcVar30 + 1;
                            pcVar30 = uVar14;
                            iVar32 = of_get_next_available_child(pcVar21,iVar32);
                        } while (iVar32 != 0);
                        *(arg1_00 + 0x8b4) = uVar14;
                        if (uVar14 != 0) {
                            uVar17 = devm_kmalloc(pcVar36,pcVar30 * 0x48,0xdc0);
                            *(arg1_00 + 0x8b8) = uVar17;
                            pcStack_4b8 = arg1_00;
                            if (uVar17 != 0) {
                                pcVar30 = of_get_next_available_child(pcVar21,0);
                                if (pcVar30 != NULL) {
                                    pcVar34 = NULL;
                                    do {
                                        uStack_498 = 0;
                                        uVar14 = of_property_read_string(pcVar30,"lt,supply-name",&uStack_498);
                                        if (uVar14 != 0) {
                                            uVar24 = 0x800035d;
code_r0x08004e70:
                                            uVar17 = uVar14;
                                            _printk(uVar24,"lt9611uxc_get_dt_supply",uVar17);
                                            goto code_r0x080050d0;
                                        }
                                        iVar12 = pcVar34;
                                        strscpy(*(arg1_00 + 0x8b8) + iVar12 * 0x48 + 8,uStack_498,0x20);
                                        uVar14 = of_property_read_variable_u32_array
                                                           (pcVar30,"lt,supply-min-voltage",&uStack_4a0 + 4,1,0);
                                        if (uVar14 < 0) {
                                            uVar24 = 0x80004ca;
                                            goto code_r0x08004e70;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar12 * 0x48 + 0x28) = uStack_4a0._4_4_;
                                        uVar14 = of_property_read_variable_u32_array
                                                           (pcVar30,"lt,supply-max-voltage",&uStack_4a0 + 4,1,0);
                                        if (uVar14 < 0) {
                                            uVar17 = uVar14;
                                            _printk(0x8000598,"lt9611uxc_get_dt_supply",uVar17);
                                            pcVar35 = arg1_00;
                                            goto code_r0x080050d0;
                                        }
                                        iVar32 = iVar12 * 0x48;
                                        *(*(arg1_00 + 0x8b8) + iVar32 + 0x2c) = uStack_4a0._4_4_;
                                        iVar16 = of_property_read_variable_u32_array
                                                           (pcVar30,"lt,supply-enable-load",&uStack_4a0 + 4,1,0);
                                        uVar13 = 0;
                                        if (-1 < iVar16) {
                                            uVar13 = uStack_4a0._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar32 + 0x30) = uVar13;
                                        iVar16 = of_property_read_variable_u32_array
                                                           (pcVar30,"lt,supply-disable-load",&uStack_4a0 + 4,1,0);
                                        uVar13 = 0;
                                        if (-1 < iVar16) {
                                            uVar13 = uStack_4a0._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar32 + 0x34) = uVar13;
                                        iVar16 = of_property_read_variable_u32_array
                                                           (pcVar30,"lt,supply-pre-on-sleep",&uStack_4a0 + 4,1,0);
                                        uVar13 = 0;
                                        if (-1 < iVar16) {
                                            uVar13 = uStack_4a0._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar32 + 0x38) = uVar13;
                                        iVar16 = of_property_read_variable_u32_array
                                                           (pcVar30,"lt,supply-pre-off-sleep",&uStack_4a0 + 4,1,0);
                                        uVar13 = 0;
                                        if (-1 < iVar16) {
                                            uVar13 = uStack_4a0._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar32 + 0x40) = uVar13;
                                        iVar16 = of_property_read_variable_u32_array
                                                           (pcVar30,"lt,supply-post-on-sleep",&uStack_4a0 + 4,1,0);
                                        uVar13 = 0;
                                        if (-1 < iVar16) {
                                            uVar13 = uStack_4a0._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar32 + 0x3c) = uVar13;
                                        iVar16 = of_property_read_variable_u32_array
                                                           (pcVar30,"lt,supply-post-off-sleep",&uStack_4a0 + 4,1,0);
                                        pcVar34 = iVar12 + 1;
                                        uVar13 = 0;
                                        if (-1 < iVar16) {
                                            uVar13 = uStack_4a0._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar32 + 0x44) = uVar13;
                                        pcVar30 = of_get_next_available_child(pcVar21,pcVar30);
                                        pcVar35 = arg1_00;
                                    } while (pcVar30 != NULL);
                                }
                                pcVar30 = *(arg1_00 + 0x8b8);
                                if (pcVar30 == NULL) goto code_r0x08004624;
                                uVar14 = *(arg1_00 + 0x8b4);
                                if (uVar14 < 1) goto code_r0x08004624;
                                pcVar21 = pcVar30 + 8;
                                uVar26 = regulator_get(pcVar36,pcVar21);
                                uVar17 = 0;
                                pcVar38 = NULL;
                                *pcVar30 = uVar26;
                                pcVar39 = pcVar30;
                                if (uVar26 == 0) goto code_r0x08004e34;
                                if (0xfffffffffffff000 < uVar26) goto code_r0x08004e34;
                                uVar15 = regulator_set_voltage(uVar26,*(pcVar30 + 0x28),*(pcVar30 + 0x2c));
                                uVar17 = uVar15;
                                if (uVar15 < 0) {
                                    pcVar35 = NULL;
                                }
                                else {
                                    pcVar35 = NULL;
                                    iVar32 = 0;
                                    do {
                                        iVar18 = iVar32;
                                        if (uVar14 * 0x48 + -0x48 == iVar18) goto code_r0x08004624;
                                        pcVar34 = pcVar30 + iVar18;
                                        pcVar21 = pcVar34 + 0x50;
                                        uVar26 = regulator_get(pcVar36,pcVar21);
                                        *(pcVar34 + 0x48) = uVar26;
                                        if (uVar26 == 0) goto code_r0x08005068;
                                        if (0xfffffffffffff000 < uVar26) goto code_r0x08005068;
                                        uVar15 = regulator_set_voltage
                                                           (uVar26,*(pcVar30 + iVar18 + 0x70),
                                                            *(pcVar30 + iVar18 + 0x74));
                                        uVar17 = uVar15;
                                        pcVar35 = pcVar35 + 1;
                                        iVar32 = iVar18 + 0x48;
                                    } while (-1 < uVar15);
                                    pcVar21 = pcVar30 + iVar18 + 0x50;
                                }
                                pcVar36 = pcVar35 & 0xffffffff;
                                _printk(0x8000ade,"lt9611uxc_config_vreg",pcVar21);
                                goto code_r0x080050b4;
                            }
                            uVar17 = 0xfffffff4;
                            uVar24 = 0x8001329;
                            goto code_r0x080040c8;
                        }
                    }
                    uVar24 = 0x8000eb3;
                }
                _printk(uVar24,"lt9611uxc_get_dt_supply");
                goto code_r0x08004624;
            }
            _printk(0x8000f44,"lt9611uxc_get_dt_supply",0,arg1_00);
            uVar17 = 0xffffffea;
            uVar24 = 0x8001329;
            pcVar21 = pcVar38;
            goto code_r0x080040c8;
        }
    }
    uVar24 = 0x8000aa8;
    pcVar21 = pcVar38;
code_r0x080040c8:
    do {
        _printk(uVar24,"lt9611uxc_probe");
code_r0x08003fa8:
        while( true ) {
            iVar32 = sp_el0;
            if (*(iVar32 + 0x5e0) == iStack_478) {
                return uVar17;
            }
            __stack_chk_fail();
code_r0x08005068:
            pcVar38 = pcVar35 + 1;
            pcVar39 = pcVar34 + 0x48;
code_r0x08004e34:
            _printk(0x80009a3,"lt9611uxc_config_vreg",pcVar21,uVar17);
            while( true ) {
                uVar14 = pcVar38 - 1;
                pcVar35 = uVar14;
                *pcVar39 = 0;
                if (uVar14 < 0) break;
                regulator_set_load(*(pcVar30 + pcVar35 * 0x48),0);
                pcVar36 = pcVar35;
code_r0x080050b4:
                pcVar39 = pcVar30 + pcVar36 * 0x48;
                regulator_put(*pcVar39);
                pcVar38 = pcVar35;
            }
            pcVar35 = pcVar38;
            arg1_00 = pcStack_4b8;
            if (uVar17 != 0) break;
code_r0x08004624:
            *(arg1_00 + 0x8c0) = pcVar22;
            *arg1_00 = pcStack_4c0;
            uVar14 = sym.lt9611uxc_gpio_configure(arg1_00);
            pcVar35 = pcStack_4c0;
            if (uVar14 != 0) {
                uVar17 = uVar14;
                _printk(0x80007e9,"lt9611uxc_probe");
                goto code_r0x08004ae8;
            }
            if (*(arg1_00 + 0x8a8) < 0x200) {
                uVar24 = gpio_to_desc();
                gpiod_set_raw_value(uVar24,1);
                msleep(0x14);
            }
            pcVar30 = *(arg1_00 + 0x8b8);
            uVar14 = *(arg1_00 + 0x8b4);
            pcVar21 = uVar14;
            if (*(arg1_00 + 0x8ac) < 0x200) {
                uVar24 = gpio_to_desc();
                gpiod_set_raw_value(uVar24,1);
            }
            if (*(arg1_00 + 0x8b0) < 0x200) {
                uVar24 = gpio_to_desc();
                gpiod_set_raw_value(uVar24,1);
            }
            if (0 < uVar14) {
                uVar17 = 0;
                pcVar36 = NULL;
                if ((*pcVar30 != 0) && (*pcVar30 < 0xfffffffffffff001)) {
                    pcVar36 = NULL;
                    pcVar39 = pcVar21 + -1;
                    pcVar34 = 0x3e8;
                    pcVar38 = pcVar30;
                    do {
                        uVar14 = regulator_is_enabled();
                        pcVar21 = uVar14;
                        if ((*(pcVar38 + 0x38) != 0) && (uVar14 == 0)) {
                            iVar32 = *(pcVar38 + 0x38) * 1000;
                            usleep_range_state(iVar32,iVar32,2);
                        }
                        uVar15 = regulator_set_load(*pcVar38,*(pcVar38 + 0x30));
                        if (uVar15 < 0) {
                            uVar17 = uVar15;
                            _printk(0x800067e,"lt9611uxc_enable_vreg",pcVar38 + 8);
                            goto code_r0x08004774;
                        }
                        uVar15 = regulator_enable(*pcVar38);
                        uVar17 = uVar15;
                        if ((*(pcVar38 + 0x3c) != 0) && (uVar14 == 0)) {
                            iVar32 = *(pcVar38 + 0x3c) * 1000;
                            usleep_range_state(iVar32,iVar32,2);
                        }
                        if (uVar15 < 0) {
                            _printk(0x8000697,"lt9611uxc_enable_vreg",pcVar38 + 8);
                            regulator_set_load(*pcVar38,*(pcVar38 + 0x34));
                            goto code_r0x08004774;
                        }
                        if (pcVar39 == pcVar36) goto code_r0x08004778;
                        pcVar38 = pcVar38 + 0x48;
                        pcVar36 = pcVar36 + 1;
                    } while ((*pcVar38 != 0) && (*pcVar38 < 0xfffffffffffff001));
                }
                _printk(0x8000af6,"lt9611uxc_enable_vreg",pcVar30 + (pcVar36 & 0xffffffff) * 0x48 + 8,uVar17);
code_r0x08004774:
                if (pcVar36 != 0) {
                    pcVar21 = pcVar36 + 1;
                    pcVar30 = pcVar30 + pcVar36 * 0x48 + -0x48;
                    do {
                        if (*(pcVar30 + 0x40) != 0) {
                            iVar32 = *(pcVar30 + 0x40) * 1000;
                            usleep_range_state(iVar32,iVar32,2);
                        }
                        regulator_set_load(*pcVar30,*(pcVar30 + 0x34));
                        regulator_disable(*pcVar30);
                        if (*(pcVar30 + 0x44) != 0) {
                            iVar32 = *(pcVar30 + 0x44) * 1000;
                            usleep_range_state(iVar32,iVar32,2);
                        }
                        pcVar21 = pcVar21 + -1;
                        pcVar30 = pcVar30 + -0x48;
                    } while (1 < pcVar21);
                }
code_r0x08004778:
                if (uVar17 == 0) goto code_r0x08004780;
                _printk(0x8001348,"lt9611uxc_probe");
                goto code_r0x08004adc;
            }
code_r0x08004780:
            uVar24 = gpio_to_desc(*(arg1_00 + 0x8a0));
            gpiod_set_raw_value(uVar24,1);
            msleep(0x14);
            uVar24 = gpio_to_desc(*(arg1_00 + 0x8a0));
            gpiod_set_raw_value(uVar24,0);
            msleep(0x14);
            uVar24 = gpio_to_desc(*(arg1_00 + 0x8a0));
            gpiod_set_raw_value(uVar24,1);
            msleep(300);
            sym.lt9611uxc_ctl_en(arg1_00);
            pcVar21 = arg1_00 + 0xb28;
            uVar7 = *(*(arg1_00 + 0x8c0) + 2);
            *(arg1_00 + 0xb28) = 0;
            *(arg1_00 + 0xb30) = 0;
            *(arg1_00 + 0xb38) = 0;
            *(arg1_00 + 0xb40) = 0;
            *(arg1_00 + 0xb48) = 0;
            *(arg1_00 + 0xb50) = 0;
            *(arg1_00 + 0xb58) = 0;
            *(arg1_00 + 0xb60) = 0;
            *(arg1_00 + 0xb68) = 0;
            *(arg1_00 + 0xb70) = 0;
            *(arg1_00 + 0xb78) = 0;
            *(arg1_00 + 0xb80) = 0;
            *(arg1_00 + 0xb88) = 0;
            *(arg1_00 + 0xb90) = 0;
            *(arg1_00 + 0xb98) = 0;
            *(arg1_00 + 0xb28) = 0x81ff;
            *(arg1_00 + 0xba0) = 0;
            uStack_498 = CONCAT62(0x20000,uVar7);
            pcStack_490 = pcVar21;
            iVar12 = i2c_transfer(*(*(arg1_00 + 0x8c0) + 0x18),&uStack_498,1);
            if (iVar12 < 1) {
                _printk(0x8001311,"lt9611uxc_write_byte");
            }
            uVar17 = *(arg1_00 + 0x8c0);
            uVar7 = *(uVar17 + 2);
            pcVar30 = 0x10001;
            uVar9 = *(uVar17 + 2);
            *(arg1_00 + 0xc18) = 0;
            *(arg1_00 + 0xc20) = 0;
            *(arg1_00 + 0xc08) = 0;
            *(arg1_00 + 0xc10) = 0;
            *(arg1_00 + 0xbf8) = 0;
            *(arg1_00 + 0xc00) = 0;
            *(arg1_00 + 0xbe8) = 0;
            *(arg1_00 + 0xbf0) = 0;
            *(arg1_00 + 0xbd8) = 0;
            *(arg1_00 + 0xbe0) = 0;
            *(arg1_00 + 0xbc8) = 0;
            *(arg1_00 + 0xbd0) = 0;
            *(arg1_00 + 3000) = 0;
            *(arg1_00 + 0xbc0) = 0;
            *(arg1_00 + 0xba8) = 0;
            *(arg1_00 + 0xbb0) = 0;
            *(arg1_00 + 0xb98) = 0;
            *(arg1_00 + 0xba0) = 0;
            *(arg1_00 + 0xb88) = 0;
            *(arg1_00 + 0xb90) = 0;
            *(arg1_00 + 0xb78) = 0;
            *(arg1_00 + 0xb80) = 0;
            *(arg1_00 + 0xb68) = 0;
            *(arg1_00 + 0xb70) = 0;
            *(arg1_00 + 0xb58) = 0;
            *(arg1_00 + 0xb60) = 0;
            *(arg1_00 + 0xb48) = 0;
            *(arg1_00 + 0xb50) = 0;
            *(arg1_00 + 0xb38) = 0;
            *(arg1_00 + 0xb40) = 0;
            *pcVar21 = 0;
            *(arg1_00 + 0xb30) = 0;
            uStack_498 = CONCAT62(0x10000,uVar7);
            uStack_488._0_6_ = CONCAT42(0x10001,uVar9);
            uStack_488 = uStack_488;
            pcStack_490 = pcVar21;
            pcStack_480 = arg1_00 + 0xba8;
            iVar12 = i2c_transfer(*(uVar17 + 0x18),&uStack_498,2);
            if (iVar12 != 2) {
code_r0x08004a44:
                _printk(0x80006dd,"lt9611uxc_read");
                _printk(0x8000bcd,"lt9611uxc_read_device_id");
                sym.lt9611uxc_ctl_disable(arg1_00);
                msleep(0x32);
                _printk(0x8000f25,"lt9611uxc_probe");
                uVar17 = 0xffffffff;
                goto code_r0x08004adc;
            }
            uVar17 = *(arg1_00 + 0x8c0);
            uVar7 = *(uVar17 + 2);
            uVar9 = *(uVar17 + 2);
            cVar6 = arg1_00[0xba8];
            *(arg1_00 + 0xc18) = 0;
            *(arg1_00 + 0xc20) = 0;
            *(arg1_00 + 0xc08) = 0;
            *(arg1_00 + 0xc10) = 0;
            *(arg1_00 + 0xbf8) = 0;
            *(arg1_00 + 0xc00) = 0;
            *(arg1_00 + 0xbe8) = 0;
            *(arg1_00 + 0xbf0) = 0;
            *(arg1_00 + 0xbd8) = 0;
            *(arg1_00 + 0xbe0) = 0;
            *(arg1_00 + 0xbc8) = 0;
            *(arg1_00 + 0xbd0) = 0;
            *(arg1_00 + 3000) = 0;
            *(arg1_00 + 0xbc0) = 0;
            *(arg1_00 + 0xba8) = 0;
            *(arg1_00 + 0xbb0) = 0;
            *(arg1_00 + 0xb98) = 0;
            *(arg1_00 + 0xba0) = 0;
            *(arg1_00 + 0xb88) = 0;
            *(arg1_00 + 0xb90) = 0;
            *(arg1_00 + 0xb78) = 0;
            *(arg1_00 + 0xb80) = 0;
            *(arg1_00 + 0xb68) = 0;
            *(arg1_00 + 0xb70) = 0;
            *(arg1_00 + 0xb58) = 0;
            *(arg1_00 + 0xb60) = 0;
            *(arg1_00 + 0xb48) = 0;
            *(arg1_00 + 0xb50) = 0;
            *(arg1_00 + 0xb38) = 0;
            *(arg1_00 + 0xb40) = 0;
            *pcVar21 = 0;
            *(arg1_00 + 0xb30) = 0;
            arg1_00[0xb28] = 0x1;
            uStack_498 = CONCAT62(0x10000,uVar7);
            uStack_488._0_6_ = CONCAT42(0x10001,uVar9);
            uStack_488 = uStack_488;
            pcStack_490 = pcVar21;
            pcStack_480 = arg1_00 + 0xba8;
            iVar12 = i2c_transfer(*(uVar17 + 0x18),&uStack_498,2);
            if (iVar12 != 2) goto code_r0x08004a44;
            _printk(0x80010d6,"lt9611uxc_read_device_id",CONCAT11(cVar6,arg1_00[0xba8]));
            sym.lt9611uxc_ctl_disable(arg1_00);
            msleep(0x32);
            *(pcVar22 + 0xb8) = arg1_00;
            uVar14 = sysfs_create_group(pcStack_4c0,obj.lt9611uxc_sysfs_attr_grp);
            pcVar21 = arg1_00;
            if (uVar14 != 0) {
                uVar17 = uVar14;
                _printk(0x8000c51,"lt9611uxc_sysfs_init","lt9611uxc_sysfs_init",uVar17);
                uVar24 = 0x8000b76;
                goto code_r0x08004ed0;
            }
            cVar11 = sym.lt9611uxc_get_version(arg1_00);
            if (cVar11 == '\0') {
                uVar14 = request_firmware_nowait
                                   (obj.__this_module,1,"lt9611uxc_fw.bin",pcStack_4c0,0xcc0,arg1_00,
                                    sym.lt9611uxc_firmware_cb.e58709b06554ea617982e3f2e7a32f4b.cfi_jt);
                uVar17 = uVar14;
                if (uVar14 != 0) {
                    _printk(0x800031b,"lt9611uxc_probe",uVar17);
                    goto code_r0x08004adc;
                }
            }
            else {
                _printk(0x800101c,"lt9611uxc_probe");
                __mutex_init(arg1_00 + 0x130,"&pdata->lock",obj.lt9611uxc_probe.__key);
                __init_waitqueue_head(arg1_00 + 0xa10,"&pdata->edid_wq",obj.lt9611uxc_probe.__key);
                *(arg1_00 + 0x90) = *(pcVar22 + 0x310);
                *(arg1_00 + 0xb0) = reloc.lt9611uxc_bridge_attach.e58709b06554ea617982e3f2e7a32f4b.cfi_jt;
                drm_bridge_add(arg1_00 + 8);
                uVar17 = alloc_workqueue(0x8000499,0xe000a,1,"lt9611uxc_wk");
                *(arg1_00 + 0x9d8) = uVar17;
                pcVar30 = arg1_00;
                if (uVar17 == 0) {
                    _printk(0x8001214,"lt9611uxc_probe");
                    uVar17 = 0;
                    goto code_r0x08004adc;
                }
                *(arg1_00 + 0x9e0) = 0xfffffffe0;
                *(arg1_00 + 0x9e8) = arg1_00 + 0x9e8;
                *(arg1_00 + 0x9f0) = arg1_00 + 0x9e8;
                *(arg1_00 + 0x9f8) = sym.lt9611uxc_hpd_work.cfi_jt;
                gpio_to_desc(*(arg1_00 + 0x89c));
                uVar24 = gpiod_to_irq();
                *(arg1_00 + 0x894) = uVar24;
                uVar14 = request_threaded_irq
                                   (uVar24,0,sym.lt9611uxc_irq_thread_handler.e58709b06554ea617982e3f2e7a32f4b.cfi_jt
                                    ,0x2002,"lt9611uxc_irq",arg1_00);
                uVar17 = uVar14;
                if (uVar14 != 0) {
                    uVar24 = 0x80010b9;
code_r0x08004ed0:
                    _printk(uVar24,"lt9611uxc_probe");
code_r0x08004adc:
                    sym.lt9611uxc_gpio_configure(arg1_00);
code_r0x08004ae8:
                    sym.lt9611uxc_put_dt_supply(pcStack_4c0,arg1_00);
                }
            }
        }
code_r0x080050d0:
        if (*(pcStack_4b8 + 0x8b8) != 0) {
            *(pcStack_4b8 + 0x8b8) = 0;
            *(pcStack_4b8 + 0x8b4) = 0;
        }
        uVar24 = 0x8001329;
    } while( true );
}


// ===== sym.lt9611uxc_block_erase @ 0x08002e0c (size 296) =====

uint64_t sym.lt9611uxc_block_erase(int64_t arg1)

{
    int16_t iVar1;
    int16_t iVar2;
    char *pcVar3;
    ulong uVar4;
    ulong uVar5;
    code cVar6;
    uint16_t uVar7;
    ushort uVar8;
    ushort uVar9;
    bool bVar10;
    char cVar11;
    int iVar12;
    uint uVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    int iVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    int64_t iVar19;
    ulong *puVar20;
    code *pcVar21;
    code *pcVar22;
    code *arg1_00;
    int64_t iVar23;
    ulong uVar24;
    uint64_t *puVar25;
    uint64_t uVar26;
    uchar uVar27;
    uchar uVar28;
    uint32_t uVar29;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    code *pcVar30;
    ulong *puVar31;
    int64_t iVar32;
    uint64_t uVar33;
    char *pcVar34;
    code *pcVar35;
    code *pcVar36;
    char *pcVar37;
    code *pcVar38;
    code *pcVar39;
    code *unaff_x26;
    ulong unaff_x27;
    ulong *puVar40;
    ulong unaff_x28;
    ulong *puVar41;
    ulong unaff_x30;
    uchar auVar42 [16];
    code *pcStack_470;
    code *pcStack_468;
    uint uStack_45c;
    ulong uStack_458;
    ulong uStack_450;
    ulong uStack_448;
    code *pcStack_440;
    ulong uStack_438;
    code *pcStack_430;
    int64_t iStack_428;
    ulong ***pppuStack_420;
    code *pcStack_418;
    ulong *puStack_410;
    ulong *puStack_408;
    code *pcStack_400;
    int64_t iStack_3f8;
    char *pcStack_3f0;
    code *pcStack_3e8;
    uint64_t uStack_3e0;
    code *pcStack_3d8;
    ulong uStack_3d0;
    code *pcStack_3c8;
    ulong uStack_3b8;
    code *pcStack_3b0;
    int64_t iStack_3a8;
    ulong ***pppuStack_3a0;
    code *pcStack_398;
    ulong *puStack_390;
    uint64_t *puStack_380;
    int64_t iStack_378;
    ulong uStack_368;
    ulong *puStack_360;
    int64_t iStack_358;
    ulong ***pppuStack_350;
    code *pcStack_348;
    ulong *puStack_340;
    ulong *puStack_338;
    code *pcStack_330;
    uint64_t uStack_328;
    char *pcStack_320;
    code *pcStack_318;
    int64_t iStack_310;
    ulong *puStack_308;
    uint64_t uStack_300;
    uint64_t uStack_2f8;
    uint32_t uStack_2ec;
    uint64_t uStack_2e8;
    uint32_t uStack_2dc;
    ulong uStack_2d8;
    ulong *puStack_2d0;
    ulong uStack_2c8;
    ulong *puStack_2c0;
    ulong uStack_2b8;
    ulong uStack_2b0;
    int64_t iStack_2a8;
    ulong ***pppuStack_2a0;
    code *pcStack_298;
    ulong uStack_290;
    ulong uStack_288;
    code *pcStack_280;
    uint64_t uStack_278;
    ulong *puStack_270;
    char *pcStack_268;
    ulong uStack_260;
    ulong *puStack_258;
    ulong uStack_250;
    int64_t iStack_248;
    ulong uStack_238;
    ulong *puStack_230;
    int64_t iStack_228;
    ulong ***pppuStack_220;
    code *pcStack_218;
    uint64_t uStack_210;
    ulong uStack_208;
    ulong *puStack_200;
    int64_t iStack_1f8;
    ulong uStack_1e8;
    ulong *puStack_1e0;
    int64_t iStack_1d8;
    uchar ***pppuStack_1d0;
    code *pcStack_1c8;
    uint64_t uStack_1c0;
    uchar auStack_1b0 [16];
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong *puStack_170;
    ulong uStack_168;
    code *pcStack_160;
    int64_t iStack_158;
    uchar **ppuStack_150;
    code *pcStack_148;
    ulong uStack_f0;
    ulong *puStack_e8;
    uint uStack_e0;
    ushort uStack_dc;
    uchar uStack_da;
    uchar uStack_d9;
    uchar uStack_d8;
    uchar uStack_d7;
    uchar uStack_d6;
    uchar uStack_d5;
    uint uStack_d4;
    ushort uStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong uStack_b0;
    ulong *puStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    char *pcStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    ulong uStack_68;
    ulong *puStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar32 = sp_el0;
    iStack_58 = *(iVar32 + 0x5e0);
    _printk(0x80005d5,"lt9611uxc_block_erase");
    iVar32 = 0;
    puVar20 = arg1 + 0xb28;
    do {
        uVar9 = *(iVar32 + 0x800173e);
        uVar7 = *(*(arg1 + 0x8c0) + 2);
        *puVar20 = 0;
        *(arg1 + 0xb30) = 0;
        *(arg1 + 0xb38) = 0;
        *(arg1 + 0xb40) = 0;
        *(arg1 + 0xb48) = 0;
        *(arg1 + 0xb50) = 0;
        *(arg1 + 0xb58) = 0;
        *(arg1 + 0xb60) = 0;
        *(arg1 + 0xb68) = 0;
        *(arg1 + 0xb70) = 0;
        *(arg1 + 0xb78) = 0;
        *(arg1 + 0xb80) = 0;
        *(arg1 + 0xb88) = 0;
        *(arg1 + 0xb90) = 0;
        *(arg1 + 0xb98) = 0;
        *(arg1 + 0xba0) = 0;
        *(arg1 + 0xb28) = uVar9;
        uStack_68 = CONCAT24(2,uVar7);
        puStack_60 = puVar20;
        iVar12 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_68,1);
        if (iVar12 < 1) {
            _printk(0x8001311,"lt9611uxc_write_byte");
        }
        iVar32 = iVar32 + 2;
    } while (iVar32 != 0x12);
    uVar17 = msleep(3000);
    iVar32 = sp_el0;
    if (*(iVar32 + 0x5e0) == iStack_58) {
        return uVar17;
    }
    auVar42 = __stack_chk_fail();
    iVar19 = auVar42._0_8_;
    *extraout_x18 = sym.lt9611uxc_flash_read_addr_set;
    pcStack_b8 = sym.lt9611uxc_flash_read_addr_set;
    uStack_b0 = 2;
    uStack_98 = 0x800173e;
    pcStack_88 = "lt9611uxc_write_byte";
    uStack_80 = 0x8001311;
    iVar32 = sp_el0;
    iStack_c8 = *(iVar32 + 0x5e0);
    uStack_d9 = auVar42[10];
    uStack_e0 = 0xa05a5f5e;
    uStack_d8 = 0x5c;
    uStack_dc = 0x805a;
    uStack_d6 = 0x5d;
    uStack_d7 = auVar42[9];
    uStack_d4 = 0x805a905a;
    uVar28 = 0x5f;
    uStack_d0 = 0x2158;
    uVar27 = 0x5e;
    uStack_da = 0x5b;
    uStack_d5 = auVar42[8];
    uStack_90 = 0x12;
    iVar32 = 0;
    puStack_c0 = &stack0xffffffffffffffb0;
    puStack_a0 = puVar20;
    iStack_78 = arg1;
    while( true ) {
        uVar26 = 1;
        uVar7 = *(*(iVar19 + 0x8c0) + 2);
        *(iVar19 + 0xb28) = 0;
        *(iVar19 + 0xb30) = 0;
        *(iVar19 + 0xb38) = 0;
        *(iVar19 + 0xb40) = 0;
        *(iVar19 + 0xb48) = 0;
        *(iVar19 + 0xb50) = 0;
        *(iVar19 + 0xb58) = 0;
        *(iVar19 + 0xb60) = 0;
        *(iVar19 + 0xb68) = 0;
        *(iVar19 + 0xb70) = 0;
        *(iVar19 + 0xb78) = 0;
        *(iVar19 + 0xb80) = 0;
        *(iVar19 + 0xb88) = 0;
        *(iVar19 + 0xb90) = 0;
        *(iVar19 + 0xb98) = 0;
        *(iVar19 + 0xba0) = 0;
        *(iVar19 + 0xb28) = uVar27;
        *(iVar19 + 0xb29) = uVar28;
        uStack_f0 = CONCAT24(2,uVar7);
        puStack_e8 = iVar19 + 0xb28;
        uVar17 = i2c_transfer(*(*(iVar19 + 0x8c0) + 0x18),&uStack_f0);
        if (uVar17 < 1) {
            uVar17 = _printk(0x8001311,"lt9611uxc_write_byte");
        }
        if (iVar32 == 0x10) break;
        uVar27 = *(&uStack_e0 + iVar32 + 2);
        uVar28 = *(&uStack_e0 + iVar32 + 3);
        iVar32 = iVar32 + 2;
    }
    iVar32 = sp_el0;
    if (*(iVar32 + 0x5e0) == iStack_c8) {
        return uVar17;
    }
    auVar42 = __stack_chk_fail();
    iVar19 = auVar42._0_8_;
    *extraout_x18_00 = sym.lt9611uxc_fw_read_back;
    pcStack_148 = sym.lt9611uxc_fw_read_back;
    iVar32 = sp_el0;
    iStack_158 = *(iVar32 + 0x5e0);
    uVar17 = uVar26 & 0xffffffff;
    bVar10 = (uVar26 & 0x1f) != 0;
    puVar20 = iVar19 + 0xb28;
    uStack_188 = 0;
    uStack_180 = 0;
    uVar33 = bVar10;
    uVar9 = *(*(iVar19 + 0x8c0) + 2);
    *(iVar19 + 0xb28) = 0;
    *(iVar19 + 0xb30) = 0;
    *(iVar19 + 0xb38) = 0;
    *(iVar19 + 0xb40) = 0;
    *(iVar19 + 0xb48) = 0;
    *(iVar19 + 0xb50) = 0;
    *(iVar19 + 0xb58) = 0;
    *(iVar19 + 0xb60) = 0;
    *(iVar19 + 0xb68) = 0;
    *(iVar19 + 0xb70) = 0;
    *(iVar19 + 0xb78) = 0;
    *(iVar19 + 0xb80) = 0;
    *(iVar19 + 0xb88) = 0;
    *(iVar19 + 0xb90) = 0;
    *(iVar19 + 0xb98) = 0;
    *(iVar19 + 0xba0) = 0;
    *(iVar19 + 0xb28) = 0x80ff;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_178 = CONCAT62(0x20000,uVar9);
    puStack_170 = puVar20;
    ppuStack_150 = &puStack_c0;
    iVar12 = i2c_transfer(*(*(iVar19 + 0x8c0) + 0x18),&uStack_178,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    pcVar34 = 0x2;
    uVar7 = *(*(iVar19 + 0x8c0) + 2);
    *puVar20 = 0;
    *(iVar19 + 0xb30) = 0;
    *(iVar19 + 0xb38) = 0;
    *(iVar19 + 0xb40) = 0;
    *(iVar19 + 0xb48) = 0;
    *(iVar19 + 0xb50) = 0;
    *(iVar19 + 0xb58) = 0;
    *(iVar19 + 0xb60) = 0;
    *(iVar19 + 0xb68) = 0;
    *(iVar19 + 0xb70) = 0;
    *(iVar19 + 0xb78) = 0;
    *(iVar19 + 0xb80) = 0;
    *(iVar19 + 0xb88) = 0;
    *(iVar19 + 0xb90) = 0;
    *(iVar19 + 0xb98) = 0;
    *(iVar19 + 0xba0) = 0;
    *(iVar19 + 0xb28) = 0x1ee;
    uStack_178._0_4_ = uVar7;
    uStack_178._0_6_ = CONCAT24(2,uStack_178);
    uStack_178 = uStack_178;
    puStack_170 = puVar20;
    iVar12 = i2c_transfer(*(*(iVar19 + 0x8c0) + 0x18),&uStack_178,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar7 = *(*(iVar19 + 0x8c0) + 2);
    *puVar20 = 0;
    *(iVar19 + 0xb30) = 0;
    *(iVar19 + 0xb38) = 0;
    *(iVar19 + 0xb40) = 0;
    *(iVar19 + 0xb48) = 0;
    *(iVar19 + 0xb50) = 0;
    *(iVar19 + 0xb58) = 0;
    *(iVar19 + 0xb60) = 0;
    *(iVar19 + 0xb68) = 0;
    *(iVar19 + 0xb70) = 0;
    *(iVar19 + 0xb78) = 0;
    *(iVar19 + 0xb80) = 0;
    *(iVar19 + 0xb88) = 0;
    *(iVar19 + 0xb90) = 0;
    *(iVar19 + 0xb98) = 0;
    *(iVar19 + 0xba0) = 0;
    *(iVar19 + 0xb28) = 0x845a;
    uStack_178._0_4_ = uVar7;
    uStack_178._0_6_ = CONCAT24(2,uStack_178);
    uStack_178 = uStack_178;
    puStack_170 = puVar20;
    iVar12 = i2c_transfer(*(*(iVar19 + 0x8c0) + 0x18),&uStack_178,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar7 = *(*(iVar19 + 0x8c0) + 2);
    *puVar20 = 0;
    *(iVar19 + 0xb30) = 0;
    *(iVar19 + 0xb38) = 0;
    *(iVar19 + 0xb40) = 0;
    *(iVar19 + 0xb48) = 0;
    *(iVar19 + 0xb50) = 0;
    *(iVar19 + 0xb58) = 0;
    *(iVar19 + 0xb60) = 0;
    *(iVar19 + 0xb68) = 0;
    *(iVar19 + 0xb70) = 0;
    *(iVar19 + 0xb78) = 0;
    *(iVar19 + 0xb80) = 0;
    *(iVar19 + 0xb88) = 0;
    *(iVar19 + 0xb90) = 0;
    *(iVar19 + 0xb98) = 0;
    *(iVar19 + 0xba0) = 0;
    *(iVar19 + 0xb28) = 0x805a;
    uStack_178._0_4_ = uVar7;
    uStack_178._0_6_ = CONCAT24(2,uStack_178);
    uStack_178 = uStack_178;
    puStack_170 = puVar20;
    uVar18 = i2c_transfer(*(*(iVar19 + 0x8c0) + 0x18),&uStack_178,1);
    if (uVar18 < 1) {
        uVar18 = _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar16 = uVar26;
    iVar12 = iVar16 + 0x1f;
    if (-1 < iVar16) {
        iVar12 = iVar16;
    }
    uVar14 = bVar10 + (iVar12 >> 5);
    uVar26 = uVar14;
    if (0 < uVar14) {
        uVar17 = 0;
        unaff_x26 = iVar19 + 0xba8;
        unaff_x27 = 1;
        unaff_x28 = 0x200001;
        uVar33 = 0x5f;
        pcVar34 = "lt9611uxc_read";
        do {
            uStack_188 = 0;
            uStack_180 = 0;
            uStack_198 = 0;
            uStack_190 = 0;
            sym.lt9611uxc_flash_read_addr_set(iVar19,uVar17 & 0xffffffff);
            iVar32 = *(iVar19 + 0x8c0);
            uVar9 = *(iVar32 + 2);
            uVar8 = *(iVar32 + 2);
            *(iVar19 + 0xc18) = 0;
            *(iVar19 + 0xc20) = 0;
            *(iVar19 + 0xc08) = 0;
            *(iVar19 + 0xc10) = 0;
            *(iVar19 + 0xbf8) = 0;
            *(iVar19 + 0xc00) = 0;
            *(iVar19 + 0xbe8) = 0;
            *(iVar19 + 0xbf0) = 0;
            *(iVar19 + 0xbd8) = 0;
            *(iVar19 + 0xbe0) = 0;
            *(iVar19 + 0xbc8) = 0;
            *(iVar19 + 0xbd0) = 0;
            *(iVar19 + 3000) = 0;
            *(iVar19 + 0xbc0) = 0;
            *(iVar19 + 0xba8) = 0;
            *(iVar19 + 0xbb0) = 0;
            *(iVar19 + 0xb98) = 0;
            *(iVar19 + 0xba0) = 0;
            *(iVar19 + 0xb88) = 0;
            *(iVar19 + 0xb90) = 0;
            *(iVar19 + 0xb78) = 0;
            *(iVar19 + 0xb80) = 0;
            *(iVar19 + 0xb68) = 0;
            *(iVar19 + 0xb70) = 0;
            *(iVar19 + 0xb58) = 0;
            *(iVar19 + 0xb60) = 0;
            *(iVar19 + 0xb48) = 0;
            *(iVar19 + 0xb50) = 0;
            *(iVar19 + 0xb38) = 0;
            *(iVar19 + 0xb40) = 0;
            *puVar20 = 0;
            *(iVar19 + 0xb30) = 0;
            *(iVar19 + 0xb28) = 0x5f;
            uStack_178 = CONCAT62(0x10000,uVar9);
            uStack_168 = CONCAT42(0x200001,uVar8);
            puStack_170 = puVar20;
            pcStack_160 = unaff_x26;
            uVar18 = i2c_transfer(*(iVar32 + 0x18),&uStack_178,2);
            if (uVar18 == 2) {
                uStack_198 = *unaff_x26;
                uStack_190 = *(iVar19 + 0xbb0);
                uStack_188 = *(iVar19 + 3000);
                uStack_180 = *(iVar19 + 0xbc0);
            }
            else {
                uVar18 = _printk(0x80006dd,"lt9611uxc_read");
            }
            puVar40 = auVar42._8_8_ + uVar17;
            uVar17 = uVar17 + 0x20;
            uVar14 = uVar26 - 1;
            uVar26 = uVar14;
            *puVar40 = uStack_198;
            puVar40[1] = uStack_190;
            puVar40[2] = uStack_188;
            puVar40[3] = uStack_180;
        } while (uVar14 != 0);
        uVar26 = 0;
    }
    iVar32 = sp_el0;
    if (*(iVar32 + 0x5e0) == iStack_158) {
        return uVar18;
    }
    iVar19 = __stack_chk_fail();
    *extraout_x18_01 = sym.lt9611uxc_flash_write_config;
    pcStack_1c8 = sym.lt9611uxc_flash_write_config;
    iVar32 = sp_el0;
    iStack_1d8 = *(iVar32 + 0x5e0);
    pppuStack_1d0 = &ppuStack_150;
    uStack_1c0 = uVar17;
    auStack_1b0 = auVar42;
    sym.lt9611uxc_flash_write_en(iVar19);
    puVar40 = iVar19 + 0xb28;
    uVar9 = *(*(iVar19 + 0x8c0) + 2);
    *(iVar19 + 0xb28) = 0;
    *(iVar19 + 0xb30) = 0;
    *(iVar19 + 0xb38) = 0;
    *(iVar19 + 0xb40) = 0;
    *(iVar19 + 0xb48) = 0;
    *(iVar19 + 0xb50) = 0;
    *(iVar19 + 0xb58) = 0;
    *(iVar19 + 0xb60) = 0;
    *(iVar19 + 0xb68) = 0;
    *(iVar19 + 0xb70) = 0;
    *(iVar19 + 0xb78) = 0;
    *(iVar19 + 0xb80) = 0;
    *(iVar19 + 0xb88) = 0;
    *(iVar19 + 0xb90) = 0;
    *(iVar19 + 0xb98) = 0;
    *(iVar19 + 0xb28) = 0x80ff;
    *(iVar19 + 0xba0) = 0;
    uStack_1e8 = CONCAT62(0x20000,uVar9);
    puStack_1e0 = puVar40;
    iVar12 = i2c_transfer(*(*(iVar19 + 0x8c0) + 0x18),&uStack_1e8,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar7 = *(*(iVar19 + 0x8c0) + 2);
    *puVar40 = 0;
    *(iVar19 + 0xb30) = 0;
    *(iVar19 + 0xb38) = 0;
    *(iVar19 + 0xb40) = 0;
    *(iVar19 + 0xb48) = 0;
    *(iVar19 + 0xb50) = 0;
    *(iVar19 + 0xb58) = 0;
    *(iVar19 + 0xb60) = 0;
    *(iVar19 + 0xb68) = 0;
    *(iVar19 + 0xb70) = 0;
    *(iVar19 + 0xb78) = 0;
    *(iVar19 + 0xb80) = 0;
    *(iVar19 + 0xb88) = 0;
    *(iVar19 + 0xb90) = 0;
    *(iVar19 + 0xb98) = 0;
    *(iVar19 + 0xba0) = 0;
    *(iVar19 + 0xb28) = 0xdf5e;
    uStack_1e8._0_4_ = uVar7;
    uStack_1e8._0_6_ = CONCAT24(2,uStack_1e8);
    uStack_1e8 = uStack_1e8;
    puStack_1e0 = puVar40;
    iVar12 = i2c_transfer(*(*(iVar19 + 0x8c0) + 0x18),&uStack_1e8,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar7 = *(*(iVar19 + 0x8c0) + 2);
    *puVar40 = 0;
    *(iVar19 + 0xb30) = 0;
    *(iVar19 + 0xb38) = 0;
    *(iVar19 + 0xb40) = 0;
    *(iVar19 + 0xb48) = 0;
    *(iVar19 + 0xb50) = 0;
    *(iVar19 + 0xb58) = 0;
    *(iVar19 + 0xb60) = 0;
    *(iVar19 + 0xb68) = 0;
    *(iVar19 + 0xb70) = 0;
    *(iVar19 + 0xb78) = 0;
    *(iVar19 + 0xb80) = 0;
    *(iVar19 + 0xb88) = 0;
    *(iVar19 + 0xb90) = 0;
    *(iVar19 + 0xb98) = 0;
    *(iVar19 + 0xba0) = 0;
    *(iVar19 + 0xb28) = 0x205a;
    uStack_1e8._0_4_ = uVar7;
    uStack_1e8._0_6_ = CONCAT24(2,uStack_1e8);
    uStack_1e8 = uStack_1e8;
    puStack_1e0 = puVar40;
    iVar12 = i2c_transfer(*(*(iVar19 + 0x8c0) + 0x18),&uStack_1e8,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar7 = *(*(iVar19 + 0x8c0) + 2);
    *puVar40 = 0;
    *(iVar19 + 0xb30) = 0;
    *(iVar19 + 0xb38) = 0;
    *(iVar19 + 0xb40) = 0;
    *(iVar19 + 0xb48) = 0;
    *(iVar19 + 0xb50) = 0;
    *(iVar19 + 0xb58) = 0;
    *(iVar19 + 0xb60) = 0;
    *(iVar19 + 0xb68) = 0;
    *(iVar19 + 0xb70) = 0;
    *(iVar19 + 0xb78) = 0;
    *(iVar19 + 0xb80) = 0;
    *(iVar19 + 0xb88) = 0;
    *(iVar19 + 0xb90) = 0;
    *(iVar19 + 0xb98) = 0;
    *(iVar19 + 0xba0) = 0;
    *(iVar19 + 0xb28) = 0x5a;
    uStack_1e8._0_4_ = uVar7;
    uStack_1e8._0_6_ = CONCAT24(2,uStack_1e8);
    uStack_1e8 = uStack_1e8;
    puStack_1e0 = puVar40;
    iVar12 = i2c_transfer(*(*(iVar19 + 0x8c0) + 0x18),&uStack_1e8,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar7 = *(*(iVar19 + 0x8c0) + 2);
    *puVar40 = 0;
    *(iVar19 + 0xb30) = 0;
    *(iVar19 + 0xb38) = 0;
    *(iVar19 + 0xb40) = 0;
    *(iVar19 + 0xb48) = 0;
    *(iVar19 + 0xb50) = 0;
    *(iVar19 + 0xb58) = 0;
    *(iVar19 + 0xb60) = 0;
    *(iVar19 + 0xb68) = 0;
    *(iVar19 + 0xb70) = 0;
    *(iVar19 + 0xb78) = 0;
    *(iVar19 + 0xb80) = 0;
    *(iVar19 + 0xb88) = 0;
    *(iVar19 + 0xb90) = 0;
    *(iVar19 + 0xb98) = 0;
    *(iVar19 + 0xba0) = 0;
    *(iVar19 + 0xb28) = 0x2158;
    uStack_1e8._0_4_ = uVar7;
    uStack_1e8._0_6_ = CONCAT24(2,uStack_1e8);
    uStack_1e8 = uStack_1e8;
    puStack_1e0 = puVar40;
    uVar17 = i2c_transfer(*(*(iVar19 + 0x8c0) + 0x18),&uStack_1e8,1);
    if (uVar17 < 1) {
        uVar17 = _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar32 = sp_el0;
    if (*(iVar32 + 0x5e0) == iStack_1d8) {
        return uVar17;
    }
    auVar42 = __stack_chk_fail();
    iVar23 = auVar42._0_8_;
    *extraout_x18_02 = sym.lt9611uxc_flash_write_addr_set;
    pcStack_218 = sym.lt9611uxc_flash_write_addr_set;
    uStack_208 = 2;
    iVar32 = sp_el0;
    iStack_228 = *(iVar32 + 0x5e0);
    puVar31 = iVar23 + 0xb28;
    uVar9 = *(*(iVar23 + 0x8c0) + 2);
    *(iVar23 + 0xb28) = 0;
    *(iVar23 + 0xb30) = 0;
    *(iVar23 + 0xb38) = 0;
    *(iVar23 + 0xb40) = 0;
    *(iVar23 + 0xb48) = 0;
    *(iVar23 + 0xb50) = 0;
    *(iVar23 + 0xb58) = 0;
    *(iVar23 + 0xb60) = 0;
    *(iVar23 + 0xb68) = 0;
    *(iVar23 + 0xb70) = 0;
    *(iVar23 + 0xb78) = 0;
    *(iVar23 + 0xb80) = 0;
    *(iVar23 + 0xb88) = 0;
    *(iVar23 + 0xb28) = 0x5b;
    *(iVar23 + 0xb90) = 0;
    *(iVar23 + 0xb98) = 0;
    *(iVar23 + 0xba0) = 0;
    *(iVar23 + 0xb29) = auVar42[10];
    uStack_238 = CONCAT62(0x20000,uVar9);
    puStack_230 = puVar31;
    pppuStack_220 = &pppuStack_1d0;
    uStack_210 = uVar33;
    puStack_200 = puVar40;
    iStack_1f8 = iVar19;
    iVar12 = i2c_transfer(*(*(iVar23 + 0x8c0) + 0x18),&uStack_238,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar7 = *(*(iVar23 + 0x8c0) + 2);
    *puVar31 = 0;
    *(iVar23 + 0xb30) = 0;
    *(iVar23 + 0xb38) = 0;
    *(iVar23 + 0xb40) = 0;
    *(iVar23 + 0xb48) = 0;
    *(iVar23 + 0xb50) = 0;
    *(iVar23 + 0xb58) = 0;
    *(iVar23 + 0xb60) = 0;
    *(iVar23 + 0xb68) = 0;
    *(iVar23 + 0xb70) = 0;
    *(iVar23 + 0xb78) = 0;
    *(iVar23 + 0xb80) = 0;
    *(iVar23 + 0xb88) = 0;
    *(iVar23 + 0xb90) = 0;
    *(iVar23 + 0xb98) = 0;
    *(iVar23 + 0xba0) = 0;
    *(iVar23 + 0xb28) = 0x5c;
    *(iVar23 + 0xb29) = auVar42[9];
    uStack_238._0_4_ = uVar7;
    uStack_238._0_6_ = CONCAT24(2,uStack_238);
    uStack_238 = uStack_238;
    puStack_230 = puVar31;
    iVar12 = i2c_transfer(*(*(iVar23 + 0x8c0) + 0x18),&uStack_238,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar7 = *(*(iVar23 + 0x8c0) + 2);
    *puVar31 = 0;
    *(iVar23 + 0xb30) = 0;
    *(iVar23 + 0xb38) = 0;
    *(iVar23 + 0xb40) = 0;
    *(iVar23 + 0xb48) = 0;
    *(iVar23 + 0xb50) = 0;
    *(iVar23 + 0xb58) = 0;
    *(iVar23 + 0xb60) = 0;
    *(iVar23 + 0xb68) = 0;
    *(iVar23 + 0xb70) = 0;
    *(iVar23 + 0xb78) = 0;
    *(iVar23 + 0xb80) = 0;
    *(iVar23 + 0xb88) = 0;
    *(iVar23 + 0xb90) = 0;
    *(iVar23 + 0xb98) = 0;
    *(iVar23 + 0xba0) = 0;
    *(iVar23 + 0xb28) = 0x5d;
    *(iVar23 + 0xb29) = auVar42[8];
    uStack_238._0_4_ = uVar7;
    uStack_238._0_6_ = CONCAT24(2,uStack_238);
    uStack_238 = uStack_238;
    puStack_230 = puVar31;
    iVar12 = i2c_transfer(*(*(iVar23 + 0x8c0) + 0x18),&uStack_238,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar7 = *(*(iVar23 + 0x8c0) + 2);
    *puVar31 = 0;
    *(iVar23 + 0xb30) = 0;
    *(iVar23 + 0xb38) = 0;
    *(iVar23 + 0xb40) = 0;
    *(iVar23 + 0xb48) = 0;
    *(iVar23 + 0xb50) = 0;
    *(iVar23 + 0xb58) = 0;
    *(iVar23 + 0xb60) = 0;
    *(iVar23 + 0xb68) = 0;
    *(iVar23 + 0xb70) = 0;
    *(iVar23 + 0xb78) = 0;
    *(iVar23 + 0xb80) = 0;
    *(iVar23 + 0xb88) = 0;
    *(iVar23 + 0xb90) = 0;
    *(iVar23 + 0xb98) = 0;
    *(iVar23 + 0xba0) = 0;
    *(iVar23 + 0xb28) = 0x105a;
    uStack_238._0_4_ = uVar7;
    uStack_238._0_6_ = CONCAT24(2,uStack_238);
    uStack_238 = uStack_238;
    puStack_230 = puVar31;
    iVar12 = i2c_transfer(*(*(iVar23 + 0x8c0) + 0x18),&uStack_238,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar14 = 1;
    uVar7 = *(*(iVar23 + 0x8c0) + 2);
    *puVar31 = 0;
    *(iVar23 + 0xb30) = 0;
    *(iVar23 + 0xb38) = 0;
    *(iVar23 + 0xb40) = 0;
    *(iVar23 + 0xb48) = 0;
    *(iVar23 + 0xb50) = 0;
    *(iVar23 + 0xb58) = 0;
    *(iVar23 + 0xb60) = 0;
    *(iVar23 + 0xb68) = 0;
    *(iVar23 + 0xb70) = 0;
    *(iVar23 + 0xb78) = 0;
    *(iVar23 + 0xb80) = 0;
    *(iVar23 + 0xb88) = 0;
    *(iVar23 + 0xb90) = 0;
    *(iVar23 + 0xb98) = 0;
    *(iVar23 + 0xba0) = 0;
    *(iVar23 + 0xb28) = 0x5a;
    uStack_238._0_4_ = uVar7;
    uStack_238._0_6_ = CONCAT24(2,uStack_238);
    uStack_238 = uStack_238;
    puStack_230 = puVar31;
    uVar17 = i2c_transfer(*(*(iVar23 + 0x8c0) + 0x18),&uStack_238);
    if (uVar17 < 1) {
        uVar17 = _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar32 = sp_el0;
    if (*(iVar32 + 0x5e0) == iStack_228) {
        return uVar17;
    }
    auVar42 = __stack_chk_fail();
    pcVar37 = auVar42._8_8_;
    iVar32 = auVar42._0_8_;
    *extraout_x18_03 = sym.lt9611uxc_firmware_write;
    pcStack_298 = sym.lt9611uxc_firmware_write;
    uStack_260 = 2;
    uStack_250 = 2;
    uVar15 = uVar14 + 0x1f;
    if (-1 < uVar14) {
        uVar15 = uVar14;
    }
    iVar19 = sp_el0;
    iStack_2a8 = *(iVar19 + 0x5e0);
    uVar17 = uVar15 >> 5;
    uVar29 = uVar14 % 0x20;
    puVar40 = iVar32 + 0xb28;
    puVar41 = iVar32 + 0xb29;
    pppuStack_2a0 = &pppuStack_220;
    uStack_290 = unaff_x28;
    uStack_288 = unaff_x27;
    pcStack_280 = unaff_x26;
    uStack_278 = uVar26;
    puStack_270 = puVar20;
    pcStack_268 = pcVar34;
    puStack_258 = puVar31;
    iStack_248 = iVar23;
    if (uVar14 < 0x20) {
        pcVar35 = NULL;
        uVar26 = uVar29;
        pcVar34 = unaff_x26;
    }
    else {
        pcVar35 = NULL;
        puVar31 = 0x21;
        pcVar34 = "lt9611uxc_write";
        uStack_2ec = uVar15 >> 5;
        uStack_2e8 = uVar29;
        uStack_2dc = uVar14;
        do {
            pcVar3 = pcVar37 + pcVar35;
            sym.lt9611uxc_flash_write_config(iVar32);
            uVar9 = *(*(iVar32 + 0x8c0) + 2);
            *(iVar32 + 0xb28) = 0x59;
            uVar4 = *(pcVar3 + 0x18);
            uVar24 = *pcVar3;
            uVar5 = *(pcVar3 + 8);
            uStack_2c8 = CONCAT62(0x210000,uVar9);
            *(iVar32 + 0xb39) = *(pcVar3 + 0x10);
            *(iVar32 + 0xb41) = uVar4;
            *puVar41 = uVar24;
            *(iVar32 + 0xb31) = uVar5;
            puStack_2c0 = puVar40;
            iVar12 = i2c_transfer(*(*(iVar32 + 0x8c0) + 0x18),&uStack_2c8,1);
            if (iVar12 < 1) {
                _printk(0x8001311,"lt9611uxc_write");
            }
            sym.lt9611uxc_flash_write_addr_set(iVar32,pcVar35 & 0xffffffff);
            msleep(0x14);
            pcVar35 = pcVar35 + 0x20;
            uVar14 = uVar17 - 1;
            uVar17 = uVar14;
        } while (uVar14 != 0);
        pcVar37 = pcVar37 + pcVar35;
        uVar17 = uStack_2ec;
        uVar29 = uStack_2e8;
        uVar26 = uStack_2e8;
        uVar14 = uStack_2dc;
    }
    if (0 < uVar29) {
        uStack_2b8 = 0xffffffffffffffff;
        uStack_2b0 = 0xffffffffffffffff;
        uStack_2c8 = 0xffffffffffffffff;
        puStack_2c0 = 0xffffffffffffffff;
        memcpy(&uStack_2c8,pcVar37,uVar26);
        sym.lt9611uxc_flash_write_config(iVar32);
        uVar9 = *(*(iVar32 + 0x8c0) + 2);
        *puVar41 = uStack_2c8;
        *(iVar32 + 0xb31) = puStack_2c0;
        *(iVar32 + 0xb39) = uStack_2b8;
        *(iVar32 + 0xb41) = uStack_2b0;
        *(iVar32 + 0xb28) = 0x59;
        uStack_2d8 = CONCAT62(0x210000,uVar9);
        puStack_2d0 = puVar40;
        iVar12 = i2c_transfer(*(*(iVar32 + 0x8c0) + 0x18),&uStack_2d8,1);
        if (iVar12 < 1) {
            _printk(0x8001311,"lt9611uxc_write");
        }
        sym.lt9611uxc_flash_write_addr_set(iVar32,pcVar35 & 0xffffffff);
        msleep(0x14);
    }
    msleep(0x14);
    uVar33 = _printk(0x8000dc1,"lt9611uxc_firmware_write",uVar14,uVar17,uVar26 & 0xffffffff);
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_2a8) {
        return uVar33;
    }
    auVar42 = __stack_chk_fail();
    puVar25 = auVar42._8_8_;
    iVar23 = auVar42._0_8_;
    *extraout_x18_04 = sym.lt9611uxc_firmware_upgrade;
    pcStack_348 = sym.lt9611uxc_firmware_upgrade;
    iVar19 = sp_el0;
    iStack_358 = *(iVar19 + 0x5e0);
    uVar33 = *puVar25;
    pppuStack_350 = &pppuStack_2a0;
    puStack_340 = puVar41;
    puStack_338 = puVar40;
    pcStack_330 = pcVar34;
    uStack_328 = uVar17;
    pcStack_320 = pcVar37;
    pcStack_318 = pcVar35;
    iStack_310 = iVar32;
    puStack_308 = puVar31;
    uStack_300 = uVar26;
    uStack_2f8 = uVar14;
    _printk(0x8000c20,"lt9611uxc_firmware_upgrade",uVar33 & 0xffffffff);
    iVar32 = uVar33 << 0x20;
    puVar20 = __kmalloc(iVar32 + 0x1f00000000 >> 0x20 & 0xffffffffffffffe0,0xdc0);
    uVar17 = 0;
    puStack_390 = puVar31;
    if (puVar20 != NULL) {
        iVar19 = 0;
        puVar40 = iVar23 + 0xb28;
        puVar41 = 0x8001730;
        pcVar35 = 0x2;
        pcVar37 = "lt9611uxc_write_byte";
        *(iVar23 + 0xc30) = 1;
        do {
            uVar9 = *(iVar19 + 0x8001730);
            uVar7 = *(*(iVar23 + 0x8c0) + 2);
            *puVar40 = 0;
            *(iVar23 + 0xb30) = 0;
            *(iVar23 + 0xb38) = 0;
            *(iVar23 + 0xb40) = 0;
            *(iVar23 + 0xb48) = 0;
            *(iVar23 + 0xb50) = 0;
            *(iVar23 + 0xb58) = 0;
            *(iVar23 + 0xb60) = 0;
            *(iVar23 + 0xb68) = 0;
            *(iVar23 + 0xb70) = 0;
            *(iVar23 + 0xb78) = 0;
            *(iVar23 + 0xb80) = 0;
            *(iVar23 + 0xb88) = 0;
            *(iVar23 + 0xb90) = 0;
            *(iVar23 + 0xb98) = 0;
            *(iVar23 + 0xba0) = 0;
            *(iVar23 + 0xb28) = uVar9;
            uStack_368 = CONCAT24(2,uVar7);
            puStack_360 = puVar40;
            iVar12 = i2c_transfer(*(*(iVar23 + 0x8c0) + 0x18),&uStack_368,1);
            if (iVar12 < 1) {
                _printk(0x8001311,"lt9611uxc_write_byte");
            }
            iVar19 = iVar19 + 2;
        } while (iVar19 != 0xe);
        sym.lt9611uxc_block_erase(iVar23);
        sym.lt9611uxc_block_erase(iVar23);
        sym.lt9611uxc_firmware_write(iVar23,puVar25[1],uVar33 & 0xffffffff);
        msleep(0x14);
        sym.lt9611uxc_fw_read_back(iVar23,puVar20,uVar33);
        iVar12 = bcmp(puVar25[1],puVar20,iVar32 >> 0x20);
        uVar24 = 0x8000ff4;
        if (iVar12 != 0) {
            uVar24 = 0x8000a82;
        }
        *(iVar23 + 0xc30) = (iVar12 != 0) << 1;
        _printk(uVar24,"lt9611uxc_firmware_upgrade");
        uVar17 = kfree(puVar20);
        pcVar34 = 0xe;
        puStack_390 = puVar20;
    }
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_358) {
        return uVar17;
    }
    pcVar21 = __stack_chk_fail();
    *extraout_x18_05 = sym.lt9611uxc_edid_en;
    pcStack_398 = sym.lt9611uxc_edid_en;
    iVar19 = sp_el0;
    iStack_3a8 = *(iVar19 + 0x5e0);
    pcVar36 = pcVar21 + 0xb28;
    uVar9 = *(*(pcVar21 + 0x8c0) + 2);
    *(pcVar21 + 0xb28) = 0;
    *(pcVar21 + 0xb30) = 0;
    *(pcVar21 + 0xb38) = 0;
    *(pcVar21 + 0xb40) = 0;
    *(pcVar21 + 0xb48) = 0;
    *(pcVar21 + 0xb50) = 0;
    *(pcVar21 + 0xb58) = 0;
    *(pcVar21 + 0xb60) = 0;
    *(pcVar21 + 0xb68) = 0;
    *(pcVar21 + 0xb70) = 0;
    *(pcVar21 + 0xb78) = 0;
    *(pcVar21 + 0xb80) = 0;
    *(pcVar21 + 0xb88) = 0;
    *(pcVar21 + 0xb90) = 0;
    *(pcVar21 + 0xb98) = 0;
    *(pcVar21 + 0xb28) = 0xb0ff;
    *(pcVar21 + 0xba0) = 0;
    uStack_3b8 = CONCAT62(0x20000,uVar9);
    pcStack_3b0 = pcVar36;
    pppuStack_3a0 = &pppuStack_350;
    puStack_380 = puVar25;
    iStack_378 = iVar23;
    iVar12 = i2c_transfer(*(*(pcVar21 + 0x8c0) + 0x18),&uStack_3b8,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar9 = *(*(pcVar21 + 0x8c0) + 2);
    *pcVar36 = 0;
    *(pcVar21 + 0xb30) = 0;
    *(pcVar21 + 0xb38) = 0;
    *(pcVar21 + 0xb40) = 0;
    *(pcVar21 + 0xb48) = 0;
    *(pcVar21 + 0xb50) = 0;
    *(pcVar21 + 0xb58) = 0;
    *(pcVar21 + 0xb60) = 0;
    *(pcVar21 + 0xb68) = 0;
    *(pcVar21 + 0xb70) = 0;
    *(pcVar21 + 0xb78) = 0;
    *(pcVar21 + 0xb80) = 0;
    *(pcVar21 + 0xb88) = 0;
    *(pcVar21 + 0xb90) = 0;
    *(pcVar21 + 0xb98) = 0;
    *(pcVar21 + 0xba0) = 0;
    *(pcVar21 + 0xb28) = 0x100b;
    uStack_3b8 = CONCAT62(0x20000,uVar9);
    pcStack_3b0 = pcVar36;
    uVar17 = i2c_transfer(*(*(pcVar21 + 0x8c0) + 0x18),&uStack_3b8,1);
    if (uVar17 < 1) {
        uVar17 = _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_3a8) {
        return uVar17;
    }
    pcVar22 = __stack_chk_fail();
    *extraout_x18_06 = sym.lt9611uxc_probe;
    pcStack_418 = sym.lt9611uxc_probe;
    uStack_3d0 = 0x200000000;
    iVar19 = sp_el0;
    iStack_428 = *(iVar19 + 0x5e0);
    pppuStack_420 = &pppuStack_3a0;
    puStack_410 = puVar41;
    puStack_408 = puVar40;
    pcStack_400 = pcVar34;
    iStack_3f8 = iVar32;
    pcStack_3f0 = pcVar37;
    pcStack_3e8 = pcVar35;
    uStack_3e0 = uVar33;
    pcStack_3d8 = pcVar36;
    pcStack_3c8 = pcVar21;
    if ((pcVar22 == NULL) || (pcVar36 = pcVar22, *(pcVar22 + 0x310) == 0)) {
        _printk(0x8000306,"lt9611uxc_probe");
        uVar17 = 0xffffffea;
        pcVar30 = 0x200000000;
        pcVar22 = pcVar36;
        goto code_r0x08003fa8;
    }
    pcVar21 = *(pcVar22 + 0x18);
    pcVar30 = *(*(pcVar21 + 0x10) + 0x20);
    __cfi_slowpath_diag(0x6871e466cec98751,pcVar30,0x8000270);
    uVar17 = (*pcVar30)(pcVar21);
    if ((uVar17 & 1) == 0) {
        _printk(0x8000c9e,"lt9611uxc_probe");
        uVar17 = 0xffffffed;
        goto code_r0x08003fa8;
    }
    pcVar36 = pcVar22 + 0x20;
    _printk(0x8000cc0,"lt9611uxc_probe","lt9611uxc_probe");
    arg1_00 = devm_kmalloc(pcVar36,0xc38,0xdc0);
    pcVar30 = pcVar36;
    if (arg1_00 == NULL) {
        uVar17 = 0xfffffff4;
        goto code_r0x08003fa8;
    }
    pcVar38 = *(pcVar22 + 0x310);
    iVar32 = of_graph_get_endpoint_by_regs(pcVar38,0,0);
    if (iVar32 == 0) {
        uVar24 = 0x8000d3c;
code_r0x080040b0:
        _printk(uVar24,"lt9611uxc_parse_dt");
        uVar17 = 0xffffffed;
    }
    else {
        uVar17 = of_graph_get_remote_port_parent();
        *(arg1_00 + 0x118) = uVar17;
        if (uVar17 == 0) {
            uVar24 = 0x8000e6b;
            goto code_r0x080040b0;
        }
        uVar14 = of_get_named_gpio_flags(pcVar38,"lt,irq-gpio",0,0);
        uVar17 = 0;
        *(arg1_00 + 0x89c) = uVar14;
        if (0x1ff < uVar14) {
            _printk(0x800083a,"lt9611uxc_parse_dt");
            uVar17 = 0xffffffea;
        }
        uVar14 = of_get_named_gpio_flags(pcVar38,"lt,reset-gpio",0,0);
        *(arg1_00 + 0x8a0) = uVar14;
        if (0x1ff < uVar14) {
            _printk(0x80005ef,"lt9611uxc_parse_dt");
            uVar17 = 0xffffffea;
        }
        uVar13 = of_get_named_gpio_flags(pcVar38,"lt,hdmi-ps-gpio",0,0);
        *(arg1_00 + 0x8a4) = uVar13;
        uVar13 = of_get_named_gpio_flags(pcVar38,"lt,hdmi-en-gpio",0,0);
        *(arg1_00 + 0x8a8) = uVar13;
        uVar13 = of_get_named_gpio_flags(pcVar38,"lt,hdmi-3p3-en",0,0);
        *(arg1_00 + 0x8ac) = uVar13;
        uVar13 = of_get_named_gpio_flags(pcVar38,"lt,hdmi-1p2-en",0,0);
        *(arg1_00 + 0x8b0) = uVar13;
        iVar32 = of_find_property(pcVar38,"lt,ac-mode",0);
        pcStack_468 = arg1_00 + 0x8d8;
        arg1_00[0x898] = iVar32 != 0;
        *(arg1_00 + 0x8d8) = pcStack_468;
        *(arg1_00 + 0x8e0) = pcStack_468;
        uStack_448 = uStack_448._4_4_ << 0x20;
        uStack_458 = 0;
        uStack_450 = 0;
        uStack_45c = 0;
        iVar32 = of_get_child_by_name(pcVar38,"lt,customize-modes");
        if (iVar32 == 0) {
            iVar32 = of_parse_phandle(pcVar38,"lt,customize-modes",0);
            if (iVar32 != 0) goto code_r0x08004254;
            _printk(0x8000f8e,"lt9611uxc_parse_dt_modes");
        }
        else {
code_r0x08004254:
            iVar19 = of_get_next_child(iVar32,0);
            if (iVar19 == 0) {
                pcVar34 = NULL;
            }
            else {
                pcVar34 = NULL;
                uVar14 = 0;
                do {
                    pcVar35 = kmem_cache_alloc_trace(_drm_atomic_helper_connector_destroy_state,0xdc0,0x78);
                    if (pcVar35 == NULL) {
                        _printk(0x8000e88,"lt9611uxc_parse_dt_modes");
                    }
                    else {
                        iVar12 = of_property_read_variable_u32_array(iVar19,"lt,mode-h-active",pcVar35 + 4,1,0);
                        pcVar38 = pcVar35;
                        if (iVar12 < 0) {
                            uVar24 = 0x8000473;
                        }
                        else {
                            iVar12 = of_property_read_variable_u32_array
                                               (iVar19,"lt,mode-h-front-porch",&uStack_448,1,0);
                            if (iVar12 < 0) {
                                uVar24 = 0x8001234;
                            }
                            else {
                                iVar12 = of_property_read_variable_u32_array
                                                   (iVar19,"lt,mode-h-pulse-width",&uStack_450 + 4,1,0);
                                if (iVar12 < 0) {
                                    uVar24 = 0x8000cd5;
                                }
                                else {
                                    iVar12 = of_property_read_variable_u32_array
                                                       (iVar19,"lt,mode-h-back-porch",&uStack_450,1,0);
                                    if (iVar12 < 0) {
                                        uVar24 = 0x8001047;
                                    }
                                    else {
                                        iVar23 = of_find_property(iVar19,"lt,mode-h-active-high",0);
                                        iVar12 = of_property_read_variable_u32_array
                                                           (iVar19,"lt,mode-v-active",pcVar35 + 0xe,1,0);
                                        if (iVar12 < 0) {
                                            uVar24 = 0x8000d5d;
                                        }
                                        else {
                                            iVar12 = of_property_read_variable_u32_array
                                                               (iVar19,"lt,mode-v-front-porch",&uStack_458 + 4,1,0);
                                            if (iVar12 < 0) {
                                                uVar24 = 0x800094e;
                                            }
                                            else {
                                                iVar12 = of_property_read_variable_u32_array
                                                                   (iVar19,"lt,mode-v-pulse-width",&uStack_458,1,0);
                                                if (iVar12 < 0) {
                                                    uVar24 = 0x8000757;
                                                }
                                                else {
                                                    iVar12 = of_property_read_variable_u32_array
                                                                       (iVar19,"lt,mode-v-back-porch",&uStack_45c,1,
                                                                        0);
                                                    if (iVar12 < 0) {
                                                        uVar24 = 0x8000979;
                                                    }
                                                    else {
                                                        pcVar30 = of_find_property(iVar19,"lt,mode-v-active-high",0);
                                                        iVar12 = of_property_read_variable_u32_array
                                                                           (iVar19,"lt,mode-clock-in-khz",pcVar35,1,
                                                                            0);
                                                        if (-1 < iVar12) {
                                                            iVar1 = *(pcVar35 + 4) + uStack_448 + uStack_450._4_2_;
                                                            puVar20 = *(arg1_00 + 0x8e0);
                                                            *(pcVar35 + 6) = *(pcVar35 + 4) + uStack_448;
                                                            *(pcVar35 + 8) = iVar1;
                                                            iVar2 = *(pcVar35 + 0xe) + uStack_458._4_2_ + uStack_458;
                                                            *(pcVar35 + 0x10) = *(pcVar35 + 0xe) + uStack_458._4_2_;
                                                            *(pcVar35 + 10) = iVar1 + uStack_450;
                                                            uVar15 = 1;
                                                            if (iVar23 == 0) {
                                                                uVar15 = 2;
                                                            }
                                                            uVar29 = 8;
                                                            if (pcVar30 != NULL) {
                                                                uVar29 = 4;
                                                            }
                                                            pcVar30 = pcVar35 + 0x40;
                                                            uVar14 = uVar15 | uVar14 | uVar29;
                                                            *(pcVar35 + 0x12) = iVar2;
                                                            *(pcVar35 + 0x14) = iVar2 + uStack_45c;
                                                            *(pcVar35 + 0x18) = uVar14;
                                                            uVar26 = __list_add_valid(pcVar30,puVar20,pcStack_468);
                                                            if ((uVar26 & 1) != 0) {
                                                                *(arg1_00 + 0x8e0) = pcVar30;
                                                                *(pcVar35 + 0x40) = pcStack_468;
                                                                *(pcVar35 + 0x48) = puVar20;
                                                                *puVar20 = pcVar30;
                                                            }
                                                            pcVar34 = pcVar34 + 1;
                                                            drm_mode_set_name(pcVar35);
                                                            goto code_r0x080042cc;
                                                        }
                                                        uVar24 = 0x8000d15;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        _printk(uVar24,"lt9611uxc_parse_dt_modes",iVar12);
                        kfree(pcVar35);
                    }
code_r0x080042cc:
                    iVar19 = of_get_next_child(iVar32,iVar19);
                } while (iVar19 != 0);
            }
            *(arg1_00 + 0x8d0) = pcVar34;
            pcVar35 = arg1_00;
        }
        pcStack_470 = pcVar36;
        if (uVar17 == 0) {
            uStack_450 = uStack_450 & 0xffffffff;
            if (pcVar36 != NULL) {
                uVar17 = *(pcVar22 + 0x310);
                *(arg1_00 + 0x8b4) = 0;
                pcVar21 = of_get_child_by_name(uVar17,"lt,supply-entries");
                if (pcVar21 == NULL) {
                    uVar24 = 0x80004ab;
                    pcVar21 = pcVar38;
                }
                else {
                    iVar32 = of_get_next_available_child(pcVar21,0);
                    if (iVar32 == 0) {
                        *(arg1_00 + 0x8b4) = 0;
                    }
                    else {
                        pcVar30 = NULL;
                        do {
                            uVar14 = pcVar30 + 1;
                            pcVar30 = uVar14;
                            iVar32 = of_get_next_available_child(pcVar21,iVar32);
                        } while (iVar32 != 0);
                        *(arg1_00 + 0x8b4) = uVar14;
                        if (uVar14 != 0) {
                            uVar17 = devm_kmalloc(pcVar36,pcVar30 * 0x48,0xdc0);
                            *(arg1_00 + 0x8b8) = uVar17;
                            pcStack_468 = arg1_00;
                            if (uVar17 != 0) {
                                pcVar30 = of_get_next_available_child(pcVar21,0);
                                if (pcVar30 != NULL) {
                                    pcVar34 = NULL;
                                    do {
                                        uStack_448 = 0;
                                        uVar14 = of_property_read_string(pcVar30,"lt,supply-name",&uStack_448);
                                        if (uVar14 != 0) {
                                            uVar24 = 0x800035d;
code_r0x08004e70:
                                            uVar17 = uVar14;
                                            _printk(uVar24,"lt9611uxc_get_dt_supply",uVar17);
                                            goto code_r0x080050d0;
                                        }
                                        iVar12 = pcVar34;
                                        strscpy(*(arg1_00 + 0x8b8) + iVar12 * 0x48 + 8,uStack_448,0x20);
                                        uVar14 = of_property_read_variable_u32_array
                                                           (pcVar30,"lt,supply-min-voltage",&uStack_450 + 4,1,0);
                                        if (uVar14 < 0) {
                                            uVar24 = 0x80004ca;
                                            goto code_r0x08004e70;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar12 * 0x48 + 0x28) = uStack_450._4_4_;
                                        uVar14 = of_property_read_variable_u32_array
                                                           (pcVar30,"lt,supply-max-voltage",&uStack_450 + 4,1,0);
                                        if (uVar14 < 0) {
                                            uVar17 = uVar14;
                                            _printk(0x8000598,"lt9611uxc_get_dt_supply",uVar17);
                                            pcVar35 = arg1_00;
                                            goto code_r0x080050d0;
                                        }
                                        iVar32 = iVar12 * 0x48;
                                        *(*(arg1_00 + 0x8b8) + iVar32 + 0x2c) = uStack_450._4_4_;
                                        iVar16 = of_property_read_variable_u32_array
                                                           (pcVar30,"lt,supply-enable-load",&uStack_450 + 4,1,0);
                                        uVar13 = 0;
                                        if (-1 < iVar16) {
                                            uVar13 = uStack_450._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar32 + 0x30) = uVar13;
                                        iVar16 = of_property_read_variable_u32_array
                                                           (pcVar30,"lt,supply-disable-load",&uStack_450 + 4,1,0);
                                        uVar13 = 0;
                                        if (-1 < iVar16) {
                                            uVar13 = uStack_450._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar32 + 0x34) = uVar13;
                                        iVar16 = of_property_read_variable_u32_array
                                                           (pcVar30,"lt,supply-pre-on-sleep",&uStack_450 + 4,1,0);
                                        uVar13 = 0;
                                        if (-1 < iVar16) {
                                            uVar13 = uStack_450._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar32 + 0x38) = uVar13;
                                        iVar16 = of_property_read_variable_u32_array
                                                           (pcVar30,"lt,supply-pre-off-sleep",&uStack_450 + 4,1,0);
                                        uVar13 = 0;
                                        if (-1 < iVar16) {
                                            uVar13 = uStack_450._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar32 + 0x40) = uVar13;
                                        iVar16 = of_property_read_variable_u32_array
                                                           (pcVar30,"lt,supply-post-on-sleep",&uStack_450 + 4,1,0);
                                        uVar13 = 0;
                                        if (-1 < iVar16) {
                                            uVar13 = uStack_450._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar32 + 0x3c) = uVar13;
                                        iVar16 = of_property_read_variable_u32_array
                                                           (pcVar30,"lt,supply-post-off-sleep",&uStack_450 + 4,1,0);
                                        pcVar34 = iVar12 + 1;
                                        uVar13 = 0;
                                        if (-1 < iVar16) {
                                            uVar13 = uStack_450._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar32 + 0x44) = uVar13;
                                        pcVar30 = of_get_next_available_child(pcVar21,pcVar30);
                                        pcVar35 = arg1_00;
                                    } while (pcVar30 != NULL);
                                }
                                pcVar30 = *(arg1_00 + 0x8b8);
                                if (pcVar30 == NULL) goto code_r0x08004624;
                                uVar14 = *(arg1_00 + 0x8b4);
                                if (uVar14 < 1) goto code_r0x08004624;
                                pcVar21 = pcVar30 + 8;
                                uVar26 = regulator_get(pcVar36,pcVar21);
                                uVar17 = 0;
                                pcVar38 = NULL;
                                *pcVar30 = uVar26;
                                pcVar39 = pcVar30;
                                if (uVar26 == 0) goto code_r0x08004e34;
                                if (0xfffffffffffff000 < uVar26) goto code_r0x08004e34;
                                uVar15 = regulator_set_voltage(uVar26,*(pcVar30 + 0x28),*(pcVar30 + 0x2c));
                                uVar17 = uVar15;
                                if (uVar15 < 0) {
                                    pcVar35 = NULL;
                                }
                                else {
                                    pcVar35 = NULL;
                                    iVar32 = 0;
                                    do {
                                        iVar19 = iVar32;
                                        if (uVar14 * 0x48 + -0x48 == iVar19) goto code_r0x08004624;
                                        pcVar34 = pcVar30 + iVar19;
                                        pcVar21 = pcVar34 + 0x50;
                                        uVar26 = regulator_get(pcVar36,pcVar21);
                                        *(pcVar34 + 0x48) = uVar26;
                                        if (uVar26 == 0) goto code_r0x08005068;
                                        if (0xfffffffffffff000 < uVar26) goto code_r0x08005068;
                                        uVar15 = regulator_set_voltage
                                                           (uVar26,*(pcVar30 + iVar19 + 0x70),
                                                            *(pcVar30 + iVar19 + 0x74));
                                        uVar17 = uVar15;
                                        pcVar35 = pcVar35 + 1;
                                        iVar32 = iVar19 + 0x48;
                                    } while (-1 < uVar15);
                                    pcVar21 = pcVar30 + iVar19 + 0x50;
                                }
                                pcVar36 = pcVar35 & 0xffffffff;
                                _printk(0x8000ade,"lt9611uxc_config_vreg",pcVar21);
                                goto code_r0x080050b4;
                            }
                            uVar17 = 0xfffffff4;
                            uVar24 = 0x8001329;
                            goto code_r0x080040c8;
                        }
                    }
                    uVar24 = 0x8000eb3;
                }
                _printk(uVar24,"lt9611uxc_get_dt_supply");
                goto code_r0x08004624;
            }
            _printk(0x8000f44,"lt9611uxc_get_dt_supply",0,arg1_00);
            uVar17 = 0xffffffea;
            uVar24 = 0x8001329;
            pcVar21 = pcVar38;
            goto code_r0x080040c8;
        }
    }
    uVar24 = 0x8000aa8;
    pcVar21 = pcVar38;
code_r0x080040c8:
    do {
        _printk(uVar24,"lt9611uxc_probe");
code_r0x08003fa8:
        while( true ) {
            iVar32 = sp_el0;
            if (*(iVar32 + 0x5e0) == iStack_428) {
                return uVar17;
            }
            __stack_chk_fail();
code_r0x08005068:
            pcVar38 = pcVar35 + 1;
            pcVar39 = pcVar34 + 0x48;
code_r0x08004e34:
            _printk(0x80009a3,"lt9611uxc_config_vreg",pcVar21,uVar17);
            while( true ) {
                uVar14 = pcVar38 - 1;
                pcVar35 = uVar14;
                *pcVar39 = 0;
                if (uVar14 < 0) break;
                regulator_set_load(*(pcVar30 + pcVar35 * 0x48),0);
                pcVar36 = pcVar35;
code_r0x080050b4:
                pcVar39 = pcVar30 + pcVar36 * 0x48;
                regulator_put(*pcVar39);
                pcVar38 = pcVar35;
            }
            pcVar35 = pcVar38;
            arg1_00 = pcStack_468;
            if (uVar17 != 0) break;
code_r0x08004624:
            *(arg1_00 + 0x8c0) = pcVar22;
            *arg1_00 = pcStack_470;
            uVar14 = sym.lt9611uxc_gpio_configure(arg1_00);
            pcVar35 = pcStack_470;
            if (uVar14 != 0) {
                uVar17 = uVar14;
                _printk(0x80007e9,"lt9611uxc_probe");
                goto code_r0x08004ae8;
            }
            if (*(arg1_00 + 0x8a8) < 0x200) {
                uVar24 = gpio_to_desc();
                gpiod_set_raw_value(uVar24,1);
                msleep(0x14);
            }
            pcVar30 = *(arg1_00 + 0x8b8);
            uVar14 = *(arg1_00 + 0x8b4);
            pcVar21 = uVar14;
            if (*(arg1_00 + 0x8ac) < 0x200) {
                uVar24 = gpio_to_desc();
                gpiod_set_raw_value(uVar24,1);
            }
            if (*(arg1_00 + 0x8b0) < 0x200) {
                uVar24 = gpio_to_desc();
                gpiod_set_raw_value(uVar24,1);
            }
            if (0 < uVar14) {
                uVar17 = 0;
                pcVar36 = NULL;
                if ((*pcVar30 != 0) && (*pcVar30 < 0xfffffffffffff001)) {
                    pcVar36 = NULL;
                    pcVar39 = pcVar21 + -1;
                    pcVar34 = 0x3e8;
                    pcVar38 = pcVar30;
                    do {
                        uVar14 = regulator_is_enabled();
                        pcVar21 = uVar14;
                        if ((*(pcVar38 + 0x38) != 0) && (uVar14 == 0)) {
                            iVar32 = *(pcVar38 + 0x38) * 1000;
                            usleep_range_state(iVar32,iVar32,2);
                        }
                        uVar15 = regulator_set_load(*pcVar38,*(pcVar38 + 0x30));
                        if (uVar15 < 0) {
                            uVar17 = uVar15;
                            _printk(0x800067e,"lt9611uxc_enable_vreg",pcVar38 + 8);
                            goto code_r0x08004774;
                        }
                        uVar15 = regulator_enable(*pcVar38);
                        uVar17 = uVar15;
                        if ((*(pcVar38 + 0x3c) != 0) && (uVar14 == 0)) {
                            iVar32 = *(pcVar38 + 0x3c) * 1000;
                            usleep_range_state(iVar32,iVar32,2);
                        }
                        if (uVar15 < 0) {
                            _printk(0x8000697,"lt9611uxc_enable_vreg",pcVar38 + 8);
                            regulator_set_load(*pcVar38,*(pcVar38 + 0x34));
                            goto code_r0x08004774;
                        }
                        if (pcVar39 == pcVar36) goto code_r0x08004778;
                        pcVar38 = pcVar38 + 0x48;
                        pcVar36 = pcVar36 + 1;
                    } while ((*pcVar38 != 0) && (*pcVar38 < 0xfffffffffffff001));
                }
                _printk(0x8000af6,"lt9611uxc_enable_vreg",pcVar30 + (pcVar36 & 0xffffffff) * 0x48 + 8,uVar17);
code_r0x08004774:
                if (pcVar36 != 0) {
                    pcVar21 = pcVar36 + 1;
                    pcVar30 = pcVar30 + pcVar36 * 0x48 + -0x48;
                    do {
                        if (*(pcVar30 + 0x40) != 0) {
                            iVar32 = *(pcVar30 + 0x40) * 1000;
                            usleep_range_state(iVar32,iVar32,2);
                        }
                        regulator_set_load(*pcVar30,*(pcVar30 + 0x34));
                        regulator_disable(*pcVar30);
                        if (*(pcVar30 + 0x44) != 0) {
                            iVar32 = *(pcVar30 + 0x44) * 1000;
                            usleep_range_state(iVar32,iVar32,2);
                        }
                        pcVar21 = pcVar21 + -1;
                        pcVar30 = pcVar30 + -0x48;
                    } while (1 < pcVar21);
                }
code_r0x08004778:
                if (uVar17 == 0) goto code_r0x08004780;
                _printk(0x8001348,"lt9611uxc_probe");
                goto code_r0x08004adc;
            }
code_r0x08004780:
            uVar24 = gpio_to_desc(*(arg1_00 + 0x8a0));
            gpiod_set_raw_value(uVar24,1);
            msleep(0x14);
            uVar24 = gpio_to_desc(*(arg1_00 + 0x8a0));
            gpiod_set_raw_value(uVar24,0);
            msleep(0x14);
            uVar24 = gpio_to_desc(*(arg1_00 + 0x8a0));
            gpiod_set_raw_value(uVar24,1);
            msleep(300);
            sym.lt9611uxc_ctl_en(arg1_00);
            pcVar21 = arg1_00 + 0xb28;
            uVar9 = *(*(arg1_00 + 0x8c0) + 2);
            *(arg1_00 + 0xb28) = 0;
            *(arg1_00 + 0xb30) = 0;
            *(arg1_00 + 0xb38) = 0;
            *(arg1_00 + 0xb40) = 0;
            *(arg1_00 + 0xb48) = 0;
            *(arg1_00 + 0xb50) = 0;
            *(arg1_00 + 0xb58) = 0;
            *(arg1_00 + 0xb60) = 0;
            *(arg1_00 + 0xb68) = 0;
            *(arg1_00 + 0xb70) = 0;
            *(arg1_00 + 0xb78) = 0;
            *(arg1_00 + 0xb80) = 0;
            *(arg1_00 + 0xb88) = 0;
            *(arg1_00 + 0xb90) = 0;
            *(arg1_00 + 0xb98) = 0;
            *(arg1_00 + 0xb28) = 0x81ff;
            *(arg1_00 + 0xba0) = 0;
            uStack_448 = CONCAT62(0x20000,uVar9);
            pcStack_440 = pcVar21;
            iVar12 = i2c_transfer(*(*(arg1_00 + 0x8c0) + 0x18),&uStack_448,1);
            if (iVar12 < 1) {
                _printk(0x8001311,"lt9611uxc_write_byte");
            }
            uVar17 = *(arg1_00 + 0x8c0);
            uVar9 = *(uVar17 + 2);
            pcVar30 = 0x10001;
            uVar8 = *(uVar17 + 2);
            *(arg1_00 + 0xc18) = 0;
            *(arg1_00 + 0xc20) = 0;
            *(arg1_00 + 0xc08) = 0;
            *(arg1_00 + 0xc10) = 0;
            *(arg1_00 + 0xbf8) = 0;
            *(arg1_00 + 0xc00) = 0;
            *(arg1_00 + 0xbe8) = 0;
            *(arg1_00 + 0xbf0) = 0;
            *(arg1_00 + 0xbd8) = 0;
            *(arg1_00 + 0xbe0) = 0;
            *(arg1_00 + 0xbc8) = 0;
            *(arg1_00 + 0xbd0) = 0;
            *(arg1_00 + 3000) = 0;
            *(arg1_00 + 0xbc0) = 0;
            *(arg1_00 + 0xba8) = 0;
            *(arg1_00 + 0xbb0) = 0;
            *(arg1_00 + 0xb98) = 0;
            *(arg1_00 + 0xba0) = 0;
            *(arg1_00 + 0xb88) = 0;
            *(arg1_00 + 0xb90) = 0;
            *(arg1_00 + 0xb78) = 0;
            *(arg1_00 + 0xb80) = 0;
            *(arg1_00 + 0xb68) = 0;
            *(arg1_00 + 0xb70) = 0;
            *(arg1_00 + 0xb58) = 0;
            *(arg1_00 + 0xb60) = 0;
            *(arg1_00 + 0xb48) = 0;
            *(arg1_00 + 0xb50) = 0;
            *(arg1_00 + 0xb38) = 0;
            *(arg1_00 + 0xb40) = 0;
            *pcVar21 = 0;
            *(arg1_00 + 0xb30) = 0;
            uStack_448 = CONCAT62(0x10000,uVar9);
            uStack_438._0_6_ = CONCAT42(0x10001,uVar8);
            uStack_438 = uStack_438;
            pcStack_440 = pcVar21;
            pcStack_430 = arg1_00 + 0xba8;
            iVar12 = i2c_transfer(*(uVar17 + 0x18),&uStack_448,2);
            if (iVar12 != 2) {
code_r0x08004a44:
                _printk(0x80006dd,"lt9611uxc_read");
                _printk(0x8000bcd,"lt9611uxc_read_device_id");
                sym.lt9611uxc_ctl_disable(arg1_00);
                msleep(0x32);
                _printk(0x8000f25,"lt9611uxc_probe");
                uVar17 = 0xffffffff;
                goto code_r0x08004adc;
            }
            uVar17 = *(arg1_00 + 0x8c0);
            uVar9 = *(uVar17 + 2);
            uVar8 = *(uVar17 + 2);
            cVar6 = arg1_00[0xba8];
            *(arg1_00 + 0xc18) = 0;
            *(arg1_00 + 0xc20) = 0;
            *(arg1_00 + 0xc08) = 0;
            *(arg1_00 + 0xc10) = 0;
            *(arg1_00 + 0xbf8) = 0;
            *(arg1_00 + 0xc00) = 0;
            *(arg1_00 + 0xbe8) = 0;
            *(arg1_00 + 0xbf0) = 0;
            *(arg1_00 + 0xbd8) = 0;
            *(arg1_00 + 0xbe0) = 0;
            *(arg1_00 + 0xbc8) = 0;
            *(arg1_00 + 0xbd0) = 0;
            *(arg1_00 + 3000) = 0;
            *(arg1_00 + 0xbc0) = 0;
            *(arg1_00 + 0xba8) = 0;
            *(arg1_00 + 0xbb0) = 0;
            *(arg1_00 + 0xb98) = 0;
            *(arg1_00 + 0xba0) = 0;
            *(arg1_00 + 0xb88) = 0;
            *(arg1_00 + 0xb90) = 0;
            *(arg1_00 + 0xb78) = 0;
            *(arg1_00 + 0xb80) = 0;
            *(arg1_00 + 0xb68) = 0;
            *(arg1_00 + 0xb70) = 0;
            *(arg1_00 + 0xb58) = 0;
            *(arg1_00 + 0xb60) = 0;
            *(arg1_00 + 0xb48) = 0;
            *(arg1_00 + 0xb50) = 0;
            *(arg1_00 + 0xb38) = 0;
            *(arg1_00 + 0xb40) = 0;
            *pcVar21 = 0;
            *(arg1_00 + 0xb30) = 0;
            arg1_00[0xb28] = 0x1;
            uStack_448 = CONCAT62(0x10000,uVar9);
            uStack_438._0_6_ = CONCAT42(0x10001,uVar8);
            uStack_438 = uStack_438;
            pcStack_440 = pcVar21;
            pcStack_430 = arg1_00 + 0xba8;
            iVar12 = i2c_transfer(*(uVar17 + 0x18),&uStack_448,2);
            if (iVar12 != 2) goto code_r0x08004a44;
            _printk(0x80010d6,"lt9611uxc_read_device_id",CONCAT11(cVar6,arg1_00[0xba8]));
            sym.lt9611uxc_ctl_disable(arg1_00);
            msleep(0x32);
            *(pcVar22 + 0xb8) = arg1_00;
            uVar14 = sysfs_create_group(pcStack_470,obj.lt9611uxc_sysfs_attr_grp);
            pcVar21 = arg1_00;
            if (uVar14 != 0) {
                uVar17 = uVar14;
                _printk(0x8000c51,"lt9611uxc_sysfs_init","lt9611uxc_sysfs_init",uVar17);
                uVar24 = 0x8000b76;
                goto code_r0x08004ed0;
            }
            cVar11 = sym.lt9611uxc_get_version(arg1_00);
            if (cVar11 == '\0') {
                uVar14 = request_firmware_nowait
                                   (obj.__this_module,1,"lt9611uxc_fw.bin",pcStack_470,0xcc0,arg1_00,
                                    sym.lt9611uxc_firmware_cb.e58709b06554ea617982e3f2e7a32f4b.cfi_jt);
                uVar17 = uVar14;
                if (uVar14 != 0) {
                    _printk(0x800031b,"lt9611uxc_probe",uVar17);
                    goto code_r0x08004adc;
                }
            }
            else {
                _printk(0x800101c,"lt9611uxc_probe");
                __mutex_init(arg1_00 + 0x130,"&pdata->lock",obj.lt9611uxc_probe.__key);
                __init_waitqueue_head(arg1_00 + 0xa10,"&pdata->edid_wq",obj.lt9611uxc_probe.__key);
                *(arg1_00 + 0x90) = *(pcVar22 + 0x310);
                *(arg1_00 + 0xb0) = reloc.lt9611uxc_bridge_attach.e58709b06554ea617982e3f2e7a32f4b.cfi_jt;
                drm_bridge_add(arg1_00 + 8);
                uVar17 = alloc_workqueue(0x8000499,0xe000a,1,"lt9611uxc_wk");
                *(arg1_00 + 0x9d8) = uVar17;
                pcVar30 = arg1_00;
                if (uVar17 == 0) {
                    _printk(0x8001214,"lt9611uxc_probe");
                    uVar17 = 0;
                    goto code_r0x08004adc;
                }
                *(arg1_00 + 0x9e0) = 0xfffffffe0;
                *(arg1_00 + 0x9e8) = arg1_00 + 0x9e8;
                *(arg1_00 + 0x9f0) = arg1_00 + 0x9e8;
                *(arg1_00 + 0x9f8) = sym.lt9611uxc_hpd_work.cfi_jt;
                gpio_to_desc(*(arg1_00 + 0x89c));
                uVar24 = gpiod_to_irq();
                *(arg1_00 + 0x894) = uVar24;
                uVar14 = request_threaded_irq
                                   (uVar24,0,sym.lt9611uxc_irq_thread_handler.e58709b06554ea617982e3f2e7a32f4b.cfi_jt
                                    ,0x2002,"lt9611uxc_irq",arg1_00);
                uVar17 = uVar14;
                if (uVar14 != 0) {
                    uVar24 = 0x80010b9;
code_r0x08004ed0:
                    _printk(uVar24,"lt9611uxc_probe");
code_r0x08004adc:
                    sym.lt9611uxc_gpio_configure(arg1_00);
code_r0x08004ae8:
                    sym.lt9611uxc_put_dt_supply(pcStack_470,arg1_00);
                }
            }
        }
code_r0x080050d0:
        if (*(pcStack_468 + 0x8b8) != 0) {
            *(pcStack_468 + 0x8b8) = 0;
            *(pcStack_468 + 0x8b4) = 0;
        }
        uVar24 = 0x8001329;
    } while( true );
}


// ===== sym.lt9611uxc_flash_read_addr_set @ 0x08002f34 (size 372) =====

uint64_t sym.lt9611uxc_flash_read_addr_set(int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    int16_t iVar2;
    char *pcVar3;
    ulong uVar4;
    ulong uVar5;
    code cVar6;
    uint16_t uVar7;
    ushort uVar8;
    ushort uVar9;
    bool bVar10;
    char cVar11;
    int iVar12;
    uint uVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    int iVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    int64_t iVar19;
    ulong *puVar20;
    code *pcVar21;
    code *pcVar22;
    code *arg1_00;
    int64_t iVar23;
    ulong uVar24;
    uint64_t *puVar25;
    uint64_t uVar26;
    uchar uVar27;
    int64_t iVar28;
    uchar uVar29;
    uint32_t uVar30;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    code *pcVar31;
    ulong *puVar32;
    uint64_t uVar33;
    char *pcVar34;
    code *pcVar35;
    code *pcVar36;
    char *pcVar37;
    code *pcVar38;
    code *pcVar39;
    code *unaff_x26;
    ulong unaff_x27;
    ulong *puVar40;
    ulong unaff_x28;
    ulong *puVar41;
    ulong unaff_x30;
    uchar auVar42 [16];
    code *pcStack_400;
    code *pcStack_3f8;
    uint uStack_3ec;
    ulong uStack_3e8;
    ulong uStack_3e0;
    ulong uStack_3d8;
    code *pcStack_3d0;
    ulong uStack_3c8;
    code *pcStack_3c0;
    int64_t iStack_3b8;
    ulong ***pppuStack_3b0;
    code *pcStack_3a8;
    ulong *puStack_3a0;
    ulong *puStack_398;
    code *pcStack_390;
    int64_t iStack_388;
    char *pcStack_380;
    code *pcStack_378;
    uint64_t uStack_370;
    code *pcStack_368;
    ulong uStack_360;
    code *pcStack_358;
    ulong uStack_348;
    code *pcStack_340;
    int64_t iStack_338;
    ulong ***pppuStack_330;
    code *pcStack_328;
    ulong *puStack_320;
    uint64_t *puStack_310;
    int64_t iStack_308;
    ulong uStack_2f8;
    ulong *puStack_2f0;
    int64_t iStack_2e8;
    ulong ***pppuStack_2e0;
    code *pcStack_2d8;
    ulong *puStack_2d0;
    ulong *puStack_2c8;
    code *pcStack_2c0;
    uint64_t uStack_2b8;
    char *pcStack_2b0;
    code *pcStack_2a8;
    int64_t iStack_2a0;
    ulong *puStack_298;
    uint64_t uStack_290;
    uint64_t uStack_288;
    uint32_t uStack_27c;
    uint64_t uStack_278;
    uint32_t uStack_26c;
    ulong uStack_268;
    ulong *puStack_260;
    ulong uStack_258;
    ulong *puStack_250;
    ulong uStack_248;
    ulong uStack_240;
    int64_t iStack_238;
    ulong ***pppuStack_230;
    code *pcStack_228;
    ulong uStack_220;
    ulong uStack_218;
    code *pcStack_210;
    uint64_t uStack_208;
    ulong *puStack_200;
    char *pcStack_1f8;
    ulong uStack_1f0;
    ulong *puStack_1e8;
    ulong uStack_1e0;
    int64_t iStack_1d8;
    ulong uStack_1c8;
    ulong *puStack_1c0;
    int64_t iStack_1b8;
    uchar ***pppuStack_1b0;
    code *pcStack_1a8;
    uint64_t uStack_1a0;
    ulong uStack_198;
    ulong *puStack_190;
    int64_t iStack_188;
    ulong uStack_178;
    ulong *puStack_170;
    int64_t iStack_168;
    uchar **ppuStack_160;
    code *pcStack_158;
    uint64_t uStack_150;
    uchar auStack_140 [16];
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong *puStack_100;
    ulong uStack_f8;
    code *pcStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    ulong uStack_80;
    ulong *puStack_78;
    uint uStack_70;
    ushort uStack_6c;
    uchar uStack_6a;
    uchar uStack_69;
    uchar uStack_68;
    uchar uStack_67;
    uchar uStack_66;
    uchar uStack_65;
    uint uStack_64;
    ushort uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar28 = sp_el0;
    iStack_58 = *(iVar28 + 0x5e0);
    uStack_69 = arg2 >> 0x10;
    uStack_70 = 0xa05a5f5e;
    uStack_68 = 0x5c;
    uStack_6c = 0x805a;
    uStack_66 = 0x5d;
    uStack_67 = arg2 >> 8;
    uStack_64 = 0x805a905a;
    uVar29 = 0x5f;
    uStack_60 = 0x2158;
    uVar27 = 0x5e;
    uStack_6a = 0x5b;
    uStack_65 = arg2;
    iVar28 = 0;
    while( true ) {
        uVar26 = 1;
        uVar7 = *(*(arg1 + 0x8c0) + 2);
        *(arg1 + 0xb28) = 0;
        *(arg1 + 0xb30) = 0;
        *(arg1 + 0xb38) = 0;
        *(arg1 + 0xb40) = 0;
        *(arg1 + 0xb48) = 0;
        *(arg1 + 0xb50) = 0;
        *(arg1 + 0xb58) = 0;
        *(arg1 + 0xb60) = 0;
        *(arg1 + 0xb68) = 0;
        *(arg1 + 0xb70) = 0;
        *(arg1 + 0xb78) = 0;
        *(arg1 + 0xb80) = 0;
        *(arg1 + 0xb88) = 0;
        *(arg1 + 0xb90) = 0;
        *(arg1 + 0xb98) = 0;
        *(arg1 + 0xba0) = 0;
        *(arg1 + 0xb28) = uVar27;
        *(arg1 + 0xb29) = uVar29;
        uStack_80 = CONCAT24(2,uVar7);
        puStack_78 = arg1 + 0xb28;
        uVar17 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_80);
        if (uVar17 < 1) {
            uVar17 = _printk(0x8001311,"lt9611uxc_write_byte");
        }
        if (iVar28 == 0x10) break;
        uVar27 = *(&uStack_70 + iVar28 + 2);
        uVar29 = *(&uStack_70 + iVar28 + 3);
        iVar28 = iVar28 + 2;
    }
    iVar28 = sp_el0;
    if (*(iVar28 + 0x5e0) == iStack_58) {
        return uVar17;
    }
    auVar42 = __stack_chk_fail();
    iVar19 = auVar42._0_8_;
    *extraout_x18 = sym.lt9611uxc_fw_read_back;
    pcStack_d8 = sym.lt9611uxc_fw_read_back;
    iVar28 = sp_el0;
    iStack_e8 = *(iVar28 + 0x5e0);
    uVar17 = uVar26 & 0xffffffff;
    bVar10 = (uVar26 & 0x1f) != 0;
    puVar20 = iVar19 + 0xb28;
    uStack_118 = 0;
    uStack_110 = 0;
    uVar33 = bVar10;
    uVar8 = *(*(iVar19 + 0x8c0) + 2);
    *(iVar19 + 0xb28) = 0;
    *(iVar19 + 0xb30) = 0;
    *(iVar19 + 0xb38) = 0;
    *(iVar19 + 0xb40) = 0;
    *(iVar19 + 0xb48) = 0;
    *(iVar19 + 0xb50) = 0;
    *(iVar19 + 0xb58) = 0;
    *(iVar19 + 0xb60) = 0;
    *(iVar19 + 0xb68) = 0;
    *(iVar19 + 0xb70) = 0;
    *(iVar19 + 0xb78) = 0;
    *(iVar19 + 0xb80) = 0;
    *(iVar19 + 0xb88) = 0;
    *(iVar19 + 0xb90) = 0;
    *(iVar19 + 0xb98) = 0;
    *(iVar19 + 0xba0) = 0;
    *(iVar19 + 0xb28) = 0x80ff;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_108 = CONCAT62(0x20000,uVar8);
    puStack_100 = puVar20;
    puStack_e0 = &stack0xffffffffffffffb0;
    iVar12 = i2c_transfer(*(*(iVar19 + 0x8c0) + 0x18),&uStack_108,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    pcVar34 = 0x2;
    uVar7 = *(*(iVar19 + 0x8c0) + 2);
    *puVar20 = 0;
    *(iVar19 + 0xb30) = 0;
    *(iVar19 + 0xb38) = 0;
    *(iVar19 + 0xb40) = 0;
    *(iVar19 + 0xb48) = 0;
    *(iVar19 + 0xb50) = 0;
    *(iVar19 + 0xb58) = 0;
    *(iVar19 + 0xb60) = 0;
    *(iVar19 + 0xb68) = 0;
    *(iVar19 + 0xb70) = 0;
    *(iVar19 + 0xb78) = 0;
    *(iVar19 + 0xb80) = 0;
    *(iVar19 + 0xb88) = 0;
    *(iVar19 + 0xb90) = 0;
    *(iVar19 + 0xb98) = 0;
    *(iVar19 + 0xba0) = 0;
    *(iVar19 + 0xb28) = 0x1ee;
    uStack_108._0_4_ = uVar7;
    uStack_108._0_6_ = CONCAT24(2,uStack_108);
    uStack_108 = uStack_108;
    puStack_100 = puVar20;
    iVar12 = i2c_transfer(*(*(iVar19 + 0x8c0) + 0x18),&uStack_108,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar7 = *(*(iVar19 + 0x8c0) + 2);
    *puVar20 = 0;
    *(iVar19 + 0xb30) = 0;
    *(iVar19 + 0xb38) = 0;
    *(iVar19 + 0xb40) = 0;
    *(iVar19 + 0xb48) = 0;
    *(iVar19 + 0xb50) = 0;
    *(iVar19 + 0xb58) = 0;
    *(iVar19 + 0xb60) = 0;
    *(iVar19 + 0xb68) = 0;
    *(iVar19 + 0xb70) = 0;
    *(iVar19 + 0xb78) = 0;
    *(iVar19 + 0xb80) = 0;
    *(iVar19 + 0xb88) = 0;
    *(iVar19 + 0xb90) = 0;
    *(iVar19 + 0xb98) = 0;
    *(iVar19 + 0xba0) = 0;
    *(iVar19 + 0xb28) = 0x845a;
    uStack_108._0_4_ = uVar7;
    uStack_108._0_6_ = CONCAT24(2,uStack_108);
    uStack_108 = uStack_108;
    puStack_100 = puVar20;
    iVar12 = i2c_transfer(*(*(iVar19 + 0x8c0) + 0x18),&uStack_108,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar7 = *(*(iVar19 + 0x8c0) + 2);
    *puVar20 = 0;
    *(iVar19 + 0xb30) = 0;
    *(iVar19 + 0xb38) = 0;
    *(iVar19 + 0xb40) = 0;
    *(iVar19 + 0xb48) = 0;
    *(iVar19 + 0xb50) = 0;
    *(iVar19 + 0xb58) = 0;
    *(iVar19 + 0xb60) = 0;
    *(iVar19 + 0xb68) = 0;
    *(iVar19 + 0xb70) = 0;
    *(iVar19 + 0xb78) = 0;
    *(iVar19 + 0xb80) = 0;
    *(iVar19 + 0xb88) = 0;
    *(iVar19 + 0xb90) = 0;
    *(iVar19 + 0xb98) = 0;
    *(iVar19 + 0xba0) = 0;
    *(iVar19 + 0xb28) = 0x805a;
    uStack_108._0_4_ = uVar7;
    uStack_108._0_6_ = CONCAT24(2,uStack_108);
    uStack_108 = uStack_108;
    puStack_100 = puVar20;
    uVar18 = i2c_transfer(*(*(iVar19 + 0x8c0) + 0x18),&uStack_108,1);
    if (uVar18 < 1) {
        uVar18 = _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar16 = uVar26;
    iVar12 = iVar16 + 0x1f;
    if (-1 < iVar16) {
        iVar12 = iVar16;
    }
    uVar14 = bVar10 + (iVar12 >> 5);
    uVar26 = uVar14;
    if (0 < uVar14) {
        uVar17 = 0;
        unaff_x26 = iVar19 + 0xba8;
        unaff_x27 = 1;
        unaff_x28 = 0x200001;
        uVar33 = 0x5f;
        pcVar34 = "lt9611uxc_read";
        do {
            uStack_118 = 0;
            uStack_110 = 0;
            uStack_128 = 0;
            uStack_120 = 0;
            sym.lt9611uxc_flash_read_addr_set(iVar19,uVar17 & 0xffffffff);
            iVar28 = *(iVar19 + 0x8c0);
            uVar8 = *(iVar28 + 2);
            uVar9 = *(iVar28 + 2);
            *(iVar19 + 0xc18) = 0;
            *(iVar19 + 0xc20) = 0;
            *(iVar19 + 0xc08) = 0;
            *(iVar19 + 0xc10) = 0;
            *(iVar19 + 0xbf8) = 0;
            *(iVar19 + 0xc00) = 0;
            *(iVar19 + 0xbe8) = 0;
            *(iVar19 + 0xbf0) = 0;
            *(iVar19 + 0xbd8) = 0;
            *(iVar19 + 0xbe0) = 0;
            *(iVar19 + 0xbc8) = 0;
            *(iVar19 + 0xbd0) = 0;
            *(iVar19 + 3000) = 0;
            *(iVar19 + 0xbc0) = 0;
            *(iVar19 + 0xba8) = 0;
            *(iVar19 + 0xbb0) = 0;
            *(iVar19 + 0xb98) = 0;
            *(iVar19 + 0xba0) = 0;
            *(iVar19 + 0xb88) = 0;
            *(iVar19 + 0xb90) = 0;
            *(iVar19 + 0xb78) = 0;
            *(iVar19 + 0xb80) = 0;
            *(iVar19 + 0xb68) = 0;
            *(iVar19 + 0xb70) = 0;
            *(iVar19 + 0xb58) = 0;
            *(iVar19 + 0xb60) = 0;
            *(iVar19 + 0xb48) = 0;
            *(iVar19 + 0xb50) = 0;
            *(iVar19 + 0xb38) = 0;
            *(iVar19 + 0xb40) = 0;
            *puVar20 = 0;
            *(iVar19 + 0xb30) = 0;
            *(iVar19 + 0xb28) = 0x5f;
            uStack_108 = CONCAT62(0x10000,uVar8);
            uStack_f8 = CONCAT42(0x200001,uVar9);
            puStack_100 = puVar20;
            pcStack_f0 = unaff_x26;
            uVar18 = i2c_transfer(*(iVar28 + 0x18),&uStack_108,2);
            if (uVar18 == 2) {
                uStack_128 = *unaff_x26;
                uStack_120 = *(iVar19 + 0xbb0);
                uStack_118 = *(iVar19 + 3000);
                uStack_110 = *(iVar19 + 0xbc0);
            }
            else {
                uVar18 = _printk(0x80006dd,"lt9611uxc_read");
            }
            puVar40 = auVar42._8_8_ + uVar17;
            uVar17 = uVar17 + 0x20;
            uVar14 = uVar26 - 1;
            uVar26 = uVar14;
            *puVar40 = uStack_128;
            puVar40[1] = uStack_120;
            puVar40[2] = uStack_118;
            puVar40[3] = uStack_110;
        } while (uVar14 != 0);
        uVar26 = 0;
    }
    iVar28 = sp_el0;
    if (*(iVar28 + 0x5e0) == iStack_e8) {
        return uVar18;
    }
    iVar19 = __stack_chk_fail();
    *extraout_x18_00 = sym.lt9611uxc_flash_write_config;
    pcStack_158 = sym.lt9611uxc_flash_write_config;
    iVar28 = sp_el0;
    iStack_168 = *(iVar28 + 0x5e0);
    ppuStack_160 = &puStack_e0;
    uStack_150 = uVar17;
    auStack_140 = auVar42;
    sym.lt9611uxc_flash_write_en(iVar19);
    puVar40 = iVar19 + 0xb28;
    uVar8 = *(*(iVar19 + 0x8c0) + 2);
    *(iVar19 + 0xb28) = 0;
    *(iVar19 + 0xb30) = 0;
    *(iVar19 + 0xb38) = 0;
    *(iVar19 + 0xb40) = 0;
    *(iVar19 + 0xb48) = 0;
    *(iVar19 + 0xb50) = 0;
    *(iVar19 + 0xb58) = 0;
    *(iVar19 + 0xb60) = 0;
    *(iVar19 + 0xb68) = 0;
    *(iVar19 + 0xb70) = 0;
    *(iVar19 + 0xb78) = 0;
    *(iVar19 + 0xb80) = 0;
    *(iVar19 + 0xb88) = 0;
    *(iVar19 + 0xb90) = 0;
    *(iVar19 + 0xb98) = 0;
    *(iVar19 + 0xb28) = 0x80ff;
    *(iVar19 + 0xba0) = 0;
    uStack_178 = CONCAT62(0x20000,uVar8);
    puStack_170 = puVar40;
    iVar12 = i2c_transfer(*(*(iVar19 + 0x8c0) + 0x18),&uStack_178,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar7 = *(*(iVar19 + 0x8c0) + 2);
    *puVar40 = 0;
    *(iVar19 + 0xb30) = 0;
    *(iVar19 + 0xb38) = 0;
    *(iVar19 + 0xb40) = 0;
    *(iVar19 + 0xb48) = 0;
    *(iVar19 + 0xb50) = 0;
    *(iVar19 + 0xb58) = 0;
    *(iVar19 + 0xb60) = 0;
    *(iVar19 + 0xb68) = 0;
    *(iVar19 + 0xb70) = 0;
    *(iVar19 + 0xb78) = 0;
    *(iVar19 + 0xb80) = 0;
    *(iVar19 + 0xb88) = 0;
    *(iVar19 + 0xb90) = 0;
    *(iVar19 + 0xb98) = 0;
    *(iVar19 + 0xba0) = 0;
    *(iVar19 + 0xb28) = 0xdf5e;
    uStack_178._0_4_ = uVar7;
    uStack_178._0_6_ = CONCAT24(2,uStack_178);
    uStack_178 = uStack_178;
    puStack_170 = puVar40;
    iVar12 = i2c_transfer(*(*(iVar19 + 0x8c0) + 0x18),&uStack_178,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar7 = *(*(iVar19 + 0x8c0) + 2);
    *puVar40 = 0;
    *(iVar19 + 0xb30) = 0;
    *(iVar19 + 0xb38) = 0;
    *(iVar19 + 0xb40) = 0;
    *(iVar19 + 0xb48) = 0;
    *(iVar19 + 0xb50) = 0;
    *(iVar19 + 0xb58) = 0;
    *(iVar19 + 0xb60) = 0;
    *(iVar19 + 0xb68) = 0;
    *(iVar19 + 0xb70) = 0;
    *(iVar19 + 0xb78) = 0;
    *(iVar19 + 0xb80) = 0;
    *(iVar19 + 0xb88) = 0;
    *(iVar19 + 0xb90) = 0;
    *(iVar19 + 0xb98) = 0;
    *(iVar19 + 0xba0) = 0;
    *(iVar19 + 0xb28) = 0x205a;
    uStack_178._0_4_ = uVar7;
    uStack_178._0_6_ = CONCAT24(2,uStack_178);
    uStack_178 = uStack_178;
    puStack_170 = puVar40;
    iVar12 = i2c_transfer(*(*(iVar19 + 0x8c0) + 0x18),&uStack_178,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar7 = *(*(iVar19 + 0x8c0) + 2);
    *puVar40 = 0;
    *(iVar19 + 0xb30) = 0;
    *(iVar19 + 0xb38) = 0;
    *(iVar19 + 0xb40) = 0;
    *(iVar19 + 0xb48) = 0;
    *(iVar19 + 0xb50) = 0;
    *(iVar19 + 0xb58) = 0;
    *(iVar19 + 0xb60) = 0;
    *(iVar19 + 0xb68) = 0;
    *(iVar19 + 0xb70) = 0;
    *(iVar19 + 0xb78) = 0;
    *(iVar19 + 0xb80) = 0;
    *(iVar19 + 0xb88) = 0;
    *(iVar19 + 0xb90) = 0;
    *(iVar19 + 0xb98) = 0;
    *(iVar19 + 0xba0) = 0;
    *(iVar19 + 0xb28) = 0x5a;
    uStack_178._0_4_ = uVar7;
    uStack_178._0_6_ = CONCAT24(2,uStack_178);
    uStack_178 = uStack_178;
    puStack_170 = puVar40;
    iVar12 = i2c_transfer(*(*(iVar19 + 0x8c0) + 0x18),&uStack_178,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar7 = *(*(iVar19 + 0x8c0) + 2);
    *puVar40 = 0;
    *(iVar19 + 0xb30) = 0;
    *(iVar19 + 0xb38) = 0;
    *(iVar19 + 0xb40) = 0;
    *(iVar19 + 0xb48) = 0;
    *(iVar19 + 0xb50) = 0;
    *(iVar19 + 0xb58) = 0;
    *(iVar19 + 0xb60) = 0;
    *(iVar19 + 0xb68) = 0;
    *(iVar19 + 0xb70) = 0;
    *(iVar19 + 0xb78) = 0;
    *(iVar19 + 0xb80) = 0;
    *(iVar19 + 0xb88) = 0;
    *(iVar19 + 0xb90) = 0;
    *(iVar19 + 0xb98) = 0;
    *(iVar19 + 0xba0) = 0;
    *(iVar19 + 0xb28) = 0x2158;
    uStack_178._0_4_ = uVar7;
    uStack_178._0_6_ = CONCAT24(2,uStack_178);
    uStack_178 = uStack_178;
    puStack_170 = puVar40;
    uVar17 = i2c_transfer(*(*(iVar19 + 0x8c0) + 0x18),&uStack_178,1);
    if (uVar17 < 1) {
        uVar17 = _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar28 = sp_el0;
    if (*(iVar28 + 0x5e0) == iStack_168) {
        return uVar17;
    }
    auVar42 = __stack_chk_fail();
    iVar23 = auVar42._0_8_;
    *extraout_x18_01 = sym.lt9611uxc_flash_write_addr_set;
    pcStack_1a8 = sym.lt9611uxc_flash_write_addr_set;
    uStack_198 = 2;
    iVar28 = sp_el0;
    iStack_1b8 = *(iVar28 + 0x5e0);
    puVar32 = iVar23 + 0xb28;
    uVar8 = *(*(iVar23 + 0x8c0) + 2);
    *(iVar23 + 0xb28) = 0;
    *(iVar23 + 0xb30) = 0;
    *(iVar23 + 0xb38) = 0;
    *(iVar23 + 0xb40) = 0;
    *(iVar23 + 0xb48) = 0;
    *(iVar23 + 0xb50) = 0;
    *(iVar23 + 0xb58) = 0;
    *(iVar23 + 0xb60) = 0;
    *(iVar23 + 0xb68) = 0;
    *(iVar23 + 0xb70) = 0;
    *(iVar23 + 0xb78) = 0;
    *(iVar23 + 0xb80) = 0;
    *(iVar23 + 0xb88) = 0;
    *(iVar23 + 0xb28) = 0x5b;
    *(iVar23 + 0xb90) = 0;
    *(iVar23 + 0xb98) = 0;
    *(iVar23 + 0xba0) = 0;
    *(iVar23 + 0xb29) = auVar42[10];
    uStack_1c8 = CONCAT62(0x20000,uVar8);
    puStack_1c0 = puVar32;
    pppuStack_1b0 = &ppuStack_160;
    uStack_1a0 = uVar33;
    puStack_190 = puVar40;
    iStack_188 = iVar19;
    iVar12 = i2c_transfer(*(*(iVar23 + 0x8c0) + 0x18),&uStack_1c8,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar7 = *(*(iVar23 + 0x8c0) + 2);
    *puVar32 = 0;
    *(iVar23 + 0xb30) = 0;
    *(iVar23 + 0xb38) = 0;
    *(iVar23 + 0xb40) = 0;
    *(iVar23 + 0xb48) = 0;
    *(iVar23 + 0xb50) = 0;
    *(iVar23 + 0xb58) = 0;
    *(iVar23 + 0xb60) = 0;
    *(iVar23 + 0xb68) = 0;
    *(iVar23 + 0xb70) = 0;
    *(iVar23 + 0xb78) = 0;
    *(iVar23 + 0xb80) = 0;
    *(iVar23 + 0xb88) = 0;
    *(iVar23 + 0xb90) = 0;
    *(iVar23 + 0xb98) = 0;
    *(iVar23 + 0xba0) = 0;
    *(iVar23 + 0xb28) = 0x5c;
    *(iVar23 + 0xb29) = auVar42[9];
    uStack_1c8._0_4_ = uVar7;
    uStack_1c8._0_6_ = CONCAT24(2,uStack_1c8);
    uStack_1c8 = uStack_1c8;
    puStack_1c0 = puVar32;
    iVar12 = i2c_transfer(*(*(iVar23 + 0x8c0) + 0x18),&uStack_1c8,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar7 = *(*(iVar23 + 0x8c0) + 2);
    *puVar32 = 0;
    *(iVar23 + 0xb30) = 0;
    *(iVar23 + 0xb38) = 0;
    *(iVar23 + 0xb40) = 0;
    *(iVar23 + 0xb48) = 0;
    *(iVar23 + 0xb50) = 0;
    *(iVar23 + 0xb58) = 0;
    *(iVar23 + 0xb60) = 0;
    *(iVar23 + 0xb68) = 0;
    *(iVar23 + 0xb70) = 0;
    *(iVar23 + 0xb78) = 0;
    *(iVar23 + 0xb80) = 0;
    *(iVar23 + 0xb88) = 0;
    *(iVar23 + 0xb90) = 0;
    *(iVar23 + 0xb98) = 0;
    *(iVar23 + 0xba0) = 0;
    *(iVar23 + 0xb28) = 0x5d;
    *(iVar23 + 0xb29) = auVar42[8];
    uStack_1c8._0_4_ = uVar7;
    uStack_1c8._0_6_ = CONCAT24(2,uStack_1c8);
    uStack_1c8 = uStack_1c8;
    puStack_1c0 = puVar32;
    iVar12 = i2c_transfer(*(*(iVar23 + 0x8c0) + 0x18),&uStack_1c8,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar7 = *(*(iVar23 + 0x8c0) + 2);
    *puVar32 = 0;
    *(iVar23 + 0xb30) = 0;
    *(iVar23 + 0xb38) = 0;
    *(iVar23 + 0xb40) = 0;
    *(iVar23 + 0xb48) = 0;
    *(iVar23 + 0xb50) = 0;
    *(iVar23 + 0xb58) = 0;
    *(iVar23 + 0xb60) = 0;
    *(iVar23 + 0xb68) = 0;
    *(iVar23 + 0xb70) = 0;
    *(iVar23 + 0xb78) = 0;
    *(iVar23 + 0xb80) = 0;
    *(iVar23 + 0xb88) = 0;
    *(iVar23 + 0xb90) = 0;
    *(iVar23 + 0xb98) = 0;
    *(iVar23 + 0xba0) = 0;
    *(iVar23 + 0xb28) = 0x105a;
    uStack_1c8._0_4_ = uVar7;
    uStack_1c8._0_6_ = CONCAT24(2,uStack_1c8);
    uStack_1c8 = uStack_1c8;
    puStack_1c0 = puVar32;
    iVar12 = i2c_transfer(*(*(iVar23 + 0x8c0) + 0x18),&uStack_1c8,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar14 = 1;
    uVar7 = *(*(iVar23 + 0x8c0) + 2);
    *puVar32 = 0;
    *(iVar23 + 0xb30) = 0;
    *(iVar23 + 0xb38) = 0;
    *(iVar23 + 0xb40) = 0;
    *(iVar23 + 0xb48) = 0;
    *(iVar23 + 0xb50) = 0;
    *(iVar23 + 0xb58) = 0;
    *(iVar23 + 0xb60) = 0;
    *(iVar23 + 0xb68) = 0;
    *(iVar23 + 0xb70) = 0;
    *(iVar23 + 0xb78) = 0;
    *(iVar23 + 0xb80) = 0;
    *(iVar23 + 0xb88) = 0;
    *(iVar23 + 0xb90) = 0;
    *(iVar23 + 0xb98) = 0;
    *(iVar23 + 0xba0) = 0;
    *(iVar23 + 0xb28) = 0x5a;
    uStack_1c8._0_4_ = uVar7;
    uStack_1c8._0_6_ = CONCAT24(2,uStack_1c8);
    uStack_1c8 = uStack_1c8;
    puStack_1c0 = puVar32;
    uVar17 = i2c_transfer(*(*(iVar23 + 0x8c0) + 0x18),&uStack_1c8);
    if (uVar17 < 1) {
        uVar17 = _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar28 = sp_el0;
    if (*(iVar28 + 0x5e0) == iStack_1b8) {
        return uVar17;
    }
    auVar42 = __stack_chk_fail();
    pcVar37 = auVar42._8_8_;
    iVar28 = auVar42._0_8_;
    *extraout_x18_02 = sym.lt9611uxc_firmware_write;
    pcStack_228 = sym.lt9611uxc_firmware_write;
    uStack_1f0 = 2;
    uStack_1e0 = 2;
    uVar15 = uVar14 + 0x1f;
    if (-1 < uVar14) {
        uVar15 = uVar14;
    }
    iVar19 = sp_el0;
    iStack_238 = *(iVar19 + 0x5e0);
    uVar17 = uVar15 >> 5;
    uVar30 = uVar14 % 0x20;
    puVar40 = iVar28 + 0xb28;
    puVar41 = iVar28 + 0xb29;
    pppuStack_230 = &pppuStack_1b0;
    uStack_220 = unaff_x28;
    uStack_218 = unaff_x27;
    pcStack_210 = unaff_x26;
    uStack_208 = uVar26;
    puStack_200 = puVar20;
    pcStack_1f8 = pcVar34;
    puStack_1e8 = puVar32;
    iStack_1d8 = iVar23;
    if (uVar14 < 0x20) {
        pcVar35 = NULL;
        uVar26 = uVar30;
        pcVar34 = unaff_x26;
    }
    else {
        pcVar35 = NULL;
        puVar32 = 0x21;
        pcVar34 = "lt9611uxc_write";
        uStack_27c = uVar15 >> 5;
        uStack_278 = uVar30;
        uStack_26c = uVar14;
        do {
            pcVar3 = pcVar37 + pcVar35;
            sym.lt9611uxc_flash_write_config(iVar28);
            uVar8 = *(*(iVar28 + 0x8c0) + 2);
            *(iVar28 + 0xb28) = 0x59;
            uVar4 = *(pcVar3 + 0x18);
            uVar24 = *pcVar3;
            uVar5 = *(pcVar3 + 8);
            uStack_258 = CONCAT62(0x210000,uVar8);
            *(iVar28 + 0xb39) = *(pcVar3 + 0x10);
            *(iVar28 + 0xb41) = uVar4;
            *puVar41 = uVar24;
            *(iVar28 + 0xb31) = uVar5;
            puStack_250 = puVar40;
            iVar12 = i2c_transfer(*(*(iVar28 + 0x8c0) + 0x18),&uStack_258,1);
            if (iVar12 < 1) {
                _printk(0x8001311,"lt9611uxc_write");
            }
            sym.lt9611uxc_flash_write_addr_set(iVar28,pcVar35 & 0xffffffff);
            msleep(0x14);
            pcVar35 = pcVar35 + 0x20;
            uVar14 = uVar17 - 1;
            uVar17 = uVar14;
        } while (uVar14 != 0);
        pcVar37 = pcVar37 + pcVar35;
        uVar17 = uStack_27c;
        uVar30 = uStack_278;
        uVar26 = uStack_278;
        uVar14 = uStack_26c;
    }
    if (0 < uVar30) {
        uStack_248 = 0xffffffffffffffff;
        uStack_240 = 0xffffffffffffffff;
        uStack_258 = 0xffffffffffffffff;
        puStack_250 = 0xffffffffffffffff;
        memcpy(&uStack_258,pcVar37,uVar26);
        sym.lt9611uxc_flash_write_config(iVar28);
        uVar8 = *(*(iVar28 + 0x8c0) + 2);
        *puVar41 = uStack_258;
        *(iVar28 + 0xb31) = puStack_250;
        *(iVar28 + 0xb39) = uStack_248;
        *(iVar28 + 0xb41) = uStack_240;
        *(iVar28 + 0xb28) = 0x59;
        uStack_268 = CONCAT62(0x210000,uVar8);
        puStack_260 = puVar40;
        iVar12 = i2c_transfer(*(*(iVar28 + 0x8c0) + 0x18),&uStack_268,1);
        if (iVar12 < 1) {
            _printk(0x8001311,"lt9611uxc_write");
        }
        sym.lt9611uxc_flash_write_addr_set(iVar28,pcVar35 & 0xffffffff);
        msleep(0x14);
    }
    msleep(0x14);
    uVar33 = _printk(0x8000dc1,"lt9611uxc_firmware_write",uVar14,uVar17,uVar26 & 0xffffffff);
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_238) {
        return uVar33;
    }
    auVar42 = __stack_chk_fail();
    puVar25 = auVar42._8_8_;
    iVar23 = auVar42._0_8_;
    *extraout_x18_03 = sym.lt9611uxc_firmware_upgrade;
    pcStack_2d8 = sym.lt9611uxc_firmware_upgrade;
    iVar19 = sp_el0;
    iStack_2e8 = *(iVar19 + 0x5e0);
    uVar33 = *puVar25;
    pppuStack_2e0 = &pppuStack_230;
    puStack_2d0 = puVar41;
    puStack_2c8 = puVar40;
    pcStack_2c0 = pcVar34;
    uStack_2b8 = uVar17;
    pcStack_2b0 = pcVar37;
    pcStack_2a8 = pcVar35;
    iStack_2a0 = iVar28;
    puStack_298 = puVar32;
    uStack_290 = uVar26;
    uStack_288 = uVar14;
    _printk(0x8000c20,"lt9611uxc_firmware_upgrade",uVar33 & 0xffffffff);
    iVar28 = uVar33 << 0x20;
    puVar20 = __kmalloc(iVar28 + 0x1f00000000 >> 0x20 & 0xffffffffffffffe0,0xdc0);
    uVar17 = 0;
    puStack_320 = puVar32;
    if (puVar20 != NULL) {
        iVar19 = 0;
        puVar40 = iVar23 + 0xb28;
        puVar41 = 0x8001730;
        pcVar35 = 0x2;
        pcVar37 = "lt9611uxc_write_byte";
        *(iVar23 + 0xc30) = 1;
        do {
            uVar8 = *(iVar19 + 0x8001730);
            uVar7 = *(*(iVar23 + 0x8c0) + 2);
            *puVar40 = 0;
            *(iVar23 + 0xb30) = 0;
            *(iVar23 + 0xb38) = 0;
            *(iVar23 + 0xb40) = 0;
            *(iVar23 + 0xb48) = 0;
            *(iVar23 + 0xb50) = 0;
            *(iVar23 + 0xb58) = 0;
            *(iVar23 + 0xb60) = 0;
            *(iVar23 + 0xb68) = 0;
            *(iVar23 + 0xb70) = 0;
            *(iVar23 + 0xb78) = 0;
            *(iVar23 + 0xb80) = 0;
            *(iVar23 + 0xb88) = 0;
            *(iVar23 + 0xb90) = 0;
            *(iVar23 + 0xb98) = 0;
            *(iVar23 + 0xba0) = 0;
            *(iVar23 + 0xb28) = uVar8;
            uStack_2f8 = CONCAT24(2,uVar7);
            puStack_2f0 = puVar40;
            iVar12 = i2c_transfer(*(*(iVar23 + 0x8c0) + 0x18),&uStack_2f8,1);
            if (iVar12 < 1) {
                _printk(0x8001311,"lt9611uxc_write_byte");
            }
            iVar19 = iVar19 + 2;
        } while (iVar19 != 0xe);
        sym.lt9611uxc_block_erase(iVar23);
        sym.lt9611uxc_block_erase(iVar23);
        sym.lt9611uxc_firmware_write(iVar23,puVar25[1],uVar33 & 0xffffffff);
        msleep(0x14);
        sym.lt9611uxc_fw_read_back(iVar23,puVar20,uVar33);
        iVar12 = bcmp(puVar25[1],puVar20,iVar28 >> 0x20);
        uVar24 = 0x8000ff4;
        if (iVar12 != 0) {
            uVar24 = 0x8000a82;
        }
        *(iVar23 + 0xc30) = (iVar12 != 0) << 1;
        _printk(uVar24,"lt9611uxc_firmware_upgrade");
        uVar17 = kfree(puVar20);
        pcVar34 = 0xe;
        puStack_320 = puVar20;
    }
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_2e8) {
        return uVar17;
    }
    pcVar21 = __stack_chk_fail();
    *extraout_x18_04 = sym.lt9611uxc_edid_en;
    pcStack_328 = sym.lt9611uxc_edid_en;
    iVar19 = sp_el0;
    iStack_338 = *(iVar19 + 0x5e0);
    pcVar36 = pcVar21 + 0xb28;
    uVar8 = *(*(pcVar21 + 0x8c0) + 2);
    *(pcVar21 + 0xb28) = 0;
    *(pcVar21 + 0xb30) = 0;
    *(pcVar21 + 0xb38) = 0;
    *(pcVar21 + 0xb40) = 0;
    *(pcVar21 + 0xb48) = 0;
    *(pcVar21 + 0xb50) = 0;
    *(pcVar21 + 0xb58) = 0;
    *(pcVar21 + 0xb60) = 0;
    *(pcVar21 + 0xb68) = 0;
    *(pcVar21 + 0xb70) = 0;
    *(pcVar21 + 0xb78) = 0;
    *(pcVar21 + 0xb80) = 0;
    *(pcVar21 + 0xb88) = 0;
    *(pcVar21 + 0xb90) = 0;
    *(pcVar21 + 0xb98) = 0;
    *(pcVar21 + 0xb28) = 0xb0ff;
    *(pcVar21 + 0xba0) = 0;
    uStack_348 = CONCAT62(0x20000,uVar8);
    pcStack_340 = pcVar36;
    pppuStack_330 = &pppuStack_2e0;
    puStack_310 = puVar25;
    iStack_308 = iVar23;
    iVar12 = i2c_transfer(*(*(pcVar21 + 0x8c0) + 0x18),&uStack_348,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar8 = *(*(pcVar21 + 0x8c0) + 2);
    *pcVar36 = 0;
    *(pcVar21 + 0xb30) = 0;
    *(pcVar21 + 0xb38) = 0;
    *(pcVar21 + 0xb40) = 0;
    *(pcVar21 + 0xb48) = 0;
    *(pcVar21 + 0xb50) = 0;
    *(pcVar21 + 0xb58) = 0;
    *(pcVar21 + 0xb60) = 0;
    *(pcVar21 + 0xb68) = 0;
    *(pcVar21 + 0xb70) = 0;
    *(pcVar21 + 0xb78) = 0;
    *(pcVar21 + 0xb80) = 0;
    *(pcVar21 + 0xb88) = 0;
    *(pcVar21 + 0xb90) = 0;
    *(pcVar21 + 0xb98) = 0;
    *(pcVar21 + 0xba0) = 0;
    *(pcVar21 + 0xb28) = 0x100b;
    uStack_348 = CONCAT62(0x20000,uVar8);
    pcStack_340 = pcVar36;
    uVar17 = i2c_transfer(*(*(pcVar21 + 0x8c0) + 0x18),&uStack_348,1);
    if (uVar17 < 1) {
        uVar17 = _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_338) {
        return uVar17;
    }
    pcVar22 = __stack_chk_fail();
    *extraout_x18_05 = sym.lt9611uxc_probe;
    pcStack_3a8 = sym.lt9611uxc_probe;
    uStack_360 = 0x200000000;
    iVar19 = sp_el0;
    iStack_3b8 = *(iVar19 + 0x5e0);
    pppuStack_3b0 = &pppuStack_330;
    puStack_3a0 = puVar41;
    puStack_398 = puVar40;
    pcStack_390 = pcVar34;
    iStack_388 = iVar28;
    pcStack_380 = pcVar37;
    pcStack_378 = pcVar35;
    uStack_370 = uVar33;
    pcStack_368 = pcVar36;
    pcStack_358 = pcVar21;
    if ((pcVar22 == NULL) || (pcVar36 = pcVar22, *(pcVar22 + 0x310) == 0)) {
        _printk(0x8000306,"lt9611uxc_probe");
        uVar17 = 0xffffffea;
        pcVar31 = 0x200000000;
        pcVar22 = pcVar36;
        goto code_r0x08003fa8;
    }
    pcVar21 = *(pcVar22 + 0x18);
    pcVar31 = *(*(pcVar21 + 0x10) + 0x20);
    __cfi_slowpath_diag(0x6871e466cec98751,pcVar31,0x8000270);
    uVar17 = (*pcVar31)(pcVar21);
    if ((uVar17 & 1) == 0) {
        _printk(0x8000c9e,"lt9611uxc_probe");
        uVar17 = 0xffffffed;
        goto code_r0x08003fa8;
    }
    pcVar36 = pcVar22 + 0x20;
    _printk(0x8000cc0,"lt9611uxc_probe","lt9611uxc_probe");
    arg1_00 = devm_kmalloc(pcVar36,0xc38,0xdc0);
    pcVar31 = pcVar36;
    if (arg1_00 == NULL) {
        uVar17 = 0xfffffff4;
        goto code_r0x08003fa8;
    }
    pcVar38 = *(pcVar22 + 0x310);
    iVar28 = of_graph_get_endpoint_by_regs(pcVar38,0,0);
    if (iVar28 == 0) {
        uVar24 = 0x8000d3c;
code_r0x080040b0:
        _printk(uVar24,"lt9611uxc_parse_dt");
        uVar17 = 0xffffffed;
    }
    else {
        uVar17 = of_graph_get_remote_port_parent();
        *(arg1_00 + 0x118) = uVar17;
        if (uVar17 == 0) {
            uVar24 = 0x8000e6b;
            goto code_r0x080040b0;
        }
        uVar14 = of_get_named_gpio_flags(pcVar38,"lt,irq-gpio",0,0);
        uVar17 = 0;
        *(arg1_00 + 0x89c) = uVar14;
        if (0x1ff < uVar14) {
            _printk(0x800083a,"lt9611uxc_parse_dt");
            uVar17 = 0xffffffea;
        }
        uVar14 = of_get_named_gpio_flags(pcVar38,"lt,reset-gpio",0,0);
        *(arg1_00 + 0x8a0) = uVar14;
        if (0x1ff < uVar14) {
            _printk(0x80005ef,"lt9611uxc_parse_dt");
            uVar17 = 0xffffffea;
        }
        uVar13 = of_get_named_gpio_flags(pcVar38,"lt,hdmi-ps-gpio",0,0);
        *(arg1_00 + 0x8a4) = uVar13;
        uVar13 = of_get_named_gpio_flags(pcVar38,"lt,hdmi-en-gpio",0,0);
        *(arg1_00 + 0x8a8) = uVar13;
        uVar13 = of_get_named_gpio_flags(pcVar38,"lt,hdmi-3p3-en",0,0);
        *(arg1_00 + 0x8ac) = uVar13;
        uVar13 = of_get_named_gpio_flags(pcVar38,"lt,hdmi-1p2-en",0,0);
        *(arg1_00 + 0x8b0) = uVar13;
        iVar28 = of_find_property(pcVar38,"lt,ac-mode",0);
        pcStack_3f8 = arg1_00 + 0x8d8;
        arg1_00[0x898] = iVar28 != 0;
        *(arg1_00 + 0x8d8) = pcStack_3f8;
        *(arg1_00 + 0x8e0) = pcStack_3f8;
        uStack_3d8 = uStack_3d8._4_4_ << 0x20;
        uStack_3e8 = 0;
        uStack_3e0 = 0;
        uStack_3ec = 0;
        iVar28 = of_get_child_by_name(pcVar38,"lt,customize-modes");
        if (iVar28 == 0) {
            iVar28 = of_parse_phandle(pcVar38,"lt,customize-modes",0);
            if (iVar28 != 0) goto code_r0x08004254;
            _printk(0x8000f8e,"lt9611uxc_parse_dt_modes");
        }
        else {
code_r0x08004254:
            iVar19 = of_get_next_child(iVar28,0);
            if (iVar19 == 0) {
                pcVar34 = NULL;
            }
            else {
                pcVar34 = NULL;
                uVar14 = 0;
                do {
                    pcVar35 = kmem_cache_alloc_trace(_drm_atomic_helper_connector_destroy_state,0xdc0,0x78);
                    if (pcVar35 == NULL) {
                        _printk(0x8000e88,"lt9611uxc_parse_dt_modes");
                    }
                    else {
                        iVar12 = of_property_read_variable_u32_array(iVar19,"lt,mode-h-active",pcVar35 + 4,1,0);
                        pcVar38 = pcVar35;
                        if (iVar12 < 0) {
                            uVar24 = 0x8000473;
                        }
                        else {
                            iVar12 = of_property_read_variable_u32_array
                                               (iVar19,"lt,mode-h-front-porch",&uStack_3d8,1,0);
                            if (iVar12 < 0) {
                                uVar24 = 0x8001234;
                            }
                            else {
                                iVar12 = of_property_read_variable_u32_array
                                                   (iVar19,"lt,mode-h-pulse-width",&uStack_3e0 + 4,1,0);
                                if (iVar12 < 0) {
                                    uVar24 = 0x8000cd5;
                                }
                                else {
                                    iVar12 = of_property_read_variable_u32_array
                                                       (iVar19,"lt,mode-h-back-porch",&uStack_3e0,1,0);
                                    if (iVar12 < 0) {
                                        uVar24 = 0x8001047;
                                    }
                                    else {
                                        iVar23 = of_find_property(iVar19,"lt,mode-h-active-high",0);
                                        iVar12 = of_property_read_variable_u32_array
                                                           (iVar19,"lt,mode-v-active",pcVar35 + 0xe,1,0);
                                        if (iVar12 < 0) {
                                            uVar24 = 0x8000d5d;
                                        }
                                        else {
                                            iVar12 = of_property_read_variable_u32_array
                                                               (iVar19,"lt,mode-v-front-porch",&uStack_3e8 + 4,1,0);
                                            if (iVar12 < 0) {
                                                uVar24 = 0x800094e;
                                            }
                                            else {
                                                iVar12 = of_property_read_variable_u32_array
                                                                   (iVar19,"lt,mode-v-pulse-width",&uStack_3e8,1,0);
                                                if (iVar12 < 0) {
                                                    uVar24 = 0x8000757;
                                                }
                                                else {
                                                    iVar12 = of_property_read_variable_u32_array
                                                                       (iVar19,"lt,mode-v-back-porch",&uStack_3ec,1,
                                                                        0);
                                                    if (iVar12 < 0) {
                                                        uVar24 = 0x8000979;
                                                    }
                                                    else {
                                                        pcVar31 = of_find_property(iVar19,"lt,mode-v-active-high",0);
                                                        iVar12 = of_property_read_variable_u32_array
                                                                           (iVar19,"lt,mode-clock-in-khz",pcVar35,1,
                                                                            0);
                                                        if (-1 < iVar12) {
                                                            iVar1 = *(pcVar35 + 4) + uStack_3d8 + uStack_3e0._4_2_;
                                                            puVar20 = *(arg1_00 + 0x8e0);
                                                            *(pcVar35 + 6) = *(pcVar35 + 4) + uStack_3d8;
                                                            *(pcVar35 + 8) = iVar1;
                                                            iVar2 = *(pcVar35 + 0xe) + uStack_3e8._4_2_ + uStack_3e8;
                                                            *(pcVar35 + 0x10) = *(pcVar35 + 0xe) + uStack_3e8._4_2_;
                                                            *(pcVar35 + 10) = iVar1 + uStack_3e0;
                                                            uVar15 = 1;
                                                            if (iVar23 == 0) {
                                                                uVar15 = 2;
                                                            }
                                                            uVar30 = 8;
                                                            if (pcVar31 != NULL) {
                                                                uVar30 = 4;
                                                            }
                                                            pcVar31 = pcVar35 + 0x40;
                                                            uVar14 = uVar15 | uVar14 | uVar30;
                                                            *(pcVar35 + 0x12) = iVar2;
                                                            *(pcVar35 + 0x14) = iVar2 + uStack_3ec;
                                                            *(pcVar35 + 0x18) = uVar14;
                                                            uVar26 = __list_add_valid(pcVar31,puVar20,pcStack_3f8);
                                                            if ((uVar26 & 1) != 0) {
                                                                *(arg1_00 + 0x8e0) = pcVar31;
                                                                *(pcVar35 + 0x40) = pcStack_3f8;
                                                                *(pcVar35 + 0x48) = puVar20;
                                                                *puVar20 = pcVar31;
                                                            }
                                                            pcVar34 = pcVar34 + 1;
                                                            drm_mode_set_name(pcVar35);
                                                            goto code_r0x080042cc;
                                                        }
                                                        uVar24 = 0x8000d15;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        _printk(uVar24,"lt9611uxc_parse_dt_modes",iVar12);
                        kfree(pcVar35);
                    }
code_r0x080042cc:
                    iVar19 = of_get_next_child(iVar28,iVar19);
                } while (iVar19 != 0);
            }
            *(arg1_00 + 0x8d0) = pcVar34;
            pcVar35 = arg1_00;
        }
        pcStack_400 = pcVar36;
        if (uVar17 == 0) {
            uStack_3e0 = uStack_3e0 & 0xffffffff;
            if (pcVar36 != NULL) {
                uVar17 = *(pcVar22 + 0x310);
                *(arg1_00 + 0x8b4) = 0;
                pcVar21 = of_get_child_by_name(uVar17,"lt,supply-entries");
                if (pcVar21 == NULL) {
                    uVar24 = 0x80004ab;
                    pcVar21 = pcVar38;
                }
                else {
                    iVar28 = of_get_next_available_child(pcVar21,0);
                    if (iVar28 == 0) {
                        *(arg1_00 + 0x8b4) = 0;
                    }
                    else {
                        pcVar31 = NULL;
                        do {
                            uVar14 = pcVar31 + 1;
                            pcVar31 = uVar14;
                            iVar28 = of_get_next_available_child(pcVar21,iVar28);
                        } while (iVar28 != 0);
                        *(arg1_00 + 0x8b4) = uVar14;
                        if (uVar14 != 0) {
                            uVar17 = devm_kmalloc(pcVar36,pcVar31 * 0x48,0xdc0);
                            *(arg1_00 + 0x8b8) = uVar17;
                            pcStack_3f8 = arg1_00;
                            if (uVar17 != 0) {
                                pcVar31 = of_get_next_available_child(pcVar21,0);
                                if (pcVar31 != NULL) {
                                    pcVar34 = NULL;
                                    do {
                                        uStack_3d8 = 0;
                                        uVar14 = of_property_read_string(pcVar31,"lt,supply-name",&uStack_3d8);
                                        if (uVar14 != 0) {
                                            uVar24 = 0x800035d;
code_r0x08004e70:
                                            uVar17 = uVar14;
                                            _printk(uVar24,"lt9611uxc_get_dt_supply",uVar17);
                                            goto code_r0x080050d0;
                                        }
                                        iVar12 = pcVar34;
                                        strscpy(*(arg1_00 + 0x8b8) + iVar12 * 0x48 + 8,uStack_3d8,0x20);
                                        uVar14 = of_property_read_variable_u32_array
                                                           (pcVar31,"lt,supply-min-voltage",&uStack_3e0 + 4,1,0);
                                        if (uVar14 < 0) {
                                            uVar24 = 0x80004ca;
                                            goto code_r0x08004e70;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar12 * 0x48 + 0x28) = uStack_3e0._4_4_;
                                        uVar14 = of_property_read_variable_u32_array
                                                           (pcVar31,"lt,supply-max-voltage",&uStack_3e0 + 4,1,0);
                                        if (uVar14 < 0) {
                                            uVar17 = uVar14;
                                            _printk(0x8000598,"lt9611uxc_get_dt_supply",uVar17);
                                            pcVar35 = arg1_00;
                                            goto code_r0x080050d0;
                                        }
                                        iVar28 = iVar12 * 0x48;
                                        *(*(arg1_00 + 0x8b8) + iVar28 + 0x2c) = uStack_3e0._4_4_;
                                        iVar16 = of_property_read_variable_u32_array
                                                           (pcVar31,"lt,supply-enable-load",&uStack_3e0 + 4,1,0);
                                        uVar13 = 0;
                                        if (-1 < iVar16) {
                                            uVar13 = uStack_3e0._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar28 + 0x30) = uVar13;
                                        iVar16 = of_property_read_variable_u32_array
                                                           (pcVar31,"lt,supply-disable-load",&uStack_3e0 + 4,1,0);
                                        uVar13 = 0;
                                        if (-1 < iVar16) {
                                            uVar13 = uStack_3e0._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar28 + 0x34) = uVar13;
                                        iVar16 = of_property_read_variable_u32_array
                                                           (pcVar31,"lt,supply-pre-on-sleep",&uStack_3e0 + 4,1,0);
                                        uVar13 = 0;
                                        if (-1 < iVar16) {
                                            uVar13 = uStack_3e0._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar28 + 0x38) = uVar13;
                                        iVar16 = of_property_read_variable_u32_array
                                                           (pcVar31,"lt,supply-pre-off-sleep",&uStack_3e0 + 4,1,0);
                                        uVar13 = 0;
                                        if (-1 < iVar16) {
                                            uVar13 = uStack_3e0._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar28 + 0x40) = uVar13;
                                        iVar16 = of_property_read_variable_u32_array
                                                           (pcVar31,"lt,supply-post-on-sleep",&uStack_3e0 + 4,1,0);
                                        uVar13 = 0;
                                        if (-1 < iVar16) {
                                            uVar13 = uStack_3e0._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar28 + 0x3c) = uVar13;
                                        iVar16 = of_property_read_variable_u32_array
                                                           (pcVar31,"lt,supply-post-off-sleep",&uStack_3e0 + 4,1,0);
                                        pcVar34 = iVar12 + 1;
                                        uVar13 = 0;
                                        if (-1 < iVar16) {
                                            uVar13 = uStack_3e0._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar28 + 0x44) = uVar13;
                                        pcVar31 = of_get_next_available_child(pcVar21,pcVar31);
                                        pcVar35 = arg1_00;
                                    } while (pcVar31 != NULL);
                                }
                                pcVar31 = *(arg1_00 + 0x8b8);
                                if (pcVar31 == NULL) goto code_r0x08004624;
                                uVar14 = *(arg1_00 + 0x8b4);
                                if (uVar14 < 1) goto code_r0x08004624;
                                pcVar21 = pcVar31 + 8;
                                uVar26 = regulator_get(pcVar36,pcVar21);
                                uVar17 = 0;
                                pcVar38 = NULL;
                                *pcVar31 = uVar26;
                                pcVar39 = pcVar31;
                                if (uVar26 == 0) goto code_r0x08004e34;
                                if (0xfffffffffffff000 < uVar26) goto code_r0x08004e34;
                                uVar15 = regulator_set_voltage(uVar26,*(pcVar31 + 0x28),*(pcVar31 + 0x2c));
                                uVar17 = uVar15;
                                if (uVar15 < 0) {
                                    pcVar35 = NULL;
                                }
                                else {
                                    pcVar35 = NULL;
                                    iVar28 = 0;
                                    do {
                                        iVar19 = iVar28;
                                        if (uVar14 * 0x48 + -0x48 == iVar19) goto code_r0x08004624;
                                        pcVar34 = pcVar31 + iVar19;
                                        pcVar21 = pcVar34 + 0x50;
                                        uVar26 = regulator_get(pcVar36,pcVar21);
                                        *(pcVar34 + 0x48) = uVar26;
                                        if (uVar26 == 0) goto code_r0x08005068;
                                        if (0xfffffffffffff000 < uVar26) goto code_r0x08005068;
                                        uVar15 = regulator_set_voltage
                                                           (uVar26,*(pcVar31 + iVar19 + 0x70),
                                                            *(pcVar31 + iVar19 + 0x74));
                                        uVar17 = uVar15;
                                        pcVar35 = pcVar35 + 1;
                                        iVar28 = iVar19 + 0x48;
                                    } while (-1 < uVar15);
                                    pcVar21 = pcVar31 + iVar19 + 0x50;
                                }
                                pcVar36 = pcVar35 & 0xffffffff;
                                _printk(0x8000ade,"lt9611uxc_config_vreg",pcVar21);
                                goto code_r0x080050b4;
                            }
                            uVar17 = 0xfffffff4;
                            uVar24 = 0x8001329;
                            goto code_r0x080040c8;
                        }
                    }
                    uVar24 = 0x8000eb3;
                }
                _printk(uVar24,"lt9611uxc_get_dt_supply");
                goto code_r0x08004624;
            }
            _printk(0x8000f44,"lt9611uxc_get_dt_supply",0,arg1_00);
            uVar17 = 0xffffffea;
            uVar24 = 0x8001329;
            pcVar21 = pcVar38;
            goto code_r0x080040c8;
        }
    }
    uVar24 = 0x8000aa8;
    pcVar21 = pcVar38;
code_r0x080040c8:
    do {
        _printk(uVar24,"lt9611uxc_probe");
code_r0x08003fa8:
        while( true ) {
            iVar28 = sp_el0;
            if (*(iVar28 + 0x5e0) == iStack_3b8) {
                return uVar17;
            }
            __stack_chk_fail();
code_r0x08005068:
            pcVar38 = pcVar35 + 1;
            pcVar39 = pcVar34 + 0x48;
code_r0x08004e34:
            _printk(0x80009a3,"lt9611uxc_config_vreg",pcVar21,uVar17);
            while( true ) {
                uVar14 = pcVar38 - 1;
                pcVar35 = uVar14;
                *pcVar39 = 0;
                if (uVar14 < 0) break;
                regulator_set_load(*(pcVar31 + pcVar35 * 0x48),0);
                pcVar36 = pcVar35;
code_r0x080050b4:
                pcVar39 = pcVar31 + pcVar36 * 0x48;
                regulator_put(*pcVar39);
                pcVar38 = pcVar35;
            }
            pcVar35 = pcVar38;
            arg1_00 = pcStack_3f8;
            if (uVar17 != 0) break;
code_r0x08004624:
            *(arg1_00 + 0x8c0) = pcVar22;
            *arg1_00 = pcStack_400;
            uVar14 = sym.lt9611uxc_gpio_configure(arg1_00);
            pcVar35 = pcStack_400;
            if (uVar14 != 0) {
                uVar17 = uVar14;
                _printk(0x80007e9,"lt9611uxc_probe");
                goto code_r0x08004ae8;
            }
            if (*(arg1_00 + 0x8a8) < 0x200) {
                uVar24 = gpio_to_desc();
                gpiod_set_raw_value(uVar24,1);
                msleep(0x14);
            }
            pcVar31 = *(arg1_00 + 0x8b8);
            uVar14 = *(arg1_00 + 0x8b4);
            pcVar21 = uVar14;
            if (*(arg1_00 + 0x8ac) < 0x200) {
                uVar24 = gpio_to_desc();
                gpiod_set_raw_value(uVar24,1);
            }
            if (*(arg1_00 + 0x8b0) < 0x200) {
                uVar24 = gpio_to_desc();
                gpiod_set_raw_value(uVar24,1);
            }
            if (0 < uVar14) {
                uVar17 = 0;
                pcVar36 = NULL;
                if ((*pcVar31 != 0) && (*pcVar31 < 0xfffffffffffff001)) {
                    pcVar36 = NULL;
                    pcVar39 = pcVar21 + -1;
                    pcVar34 = 0x3e8;
                    pcVar38 = pcVar31;
                    do {
                        uVar14 = regulator_is_enabled();
                        pcVar21 = uVar14;
                        if ((*(pcVar38 + 0x38) != 0) && (uVar14 == 0)) {
                            iVar28 = *(pcVar38 + 0x38) * 1000;
                            usleep_range_state(iVar28,iVar28,2);
                        }
                        uVar15 = regulator_set_load(*pcVar38,*(pcVar38 + 0x30));
                        if (uVar15 < 0) {
                            uVar17 = uVar15;
                            _printk(0x800067e,"lt9611uxc_enable_vreg",pcVar38 + 8);
                            goto code_r0x08004774;
                        }
                        uVar15 = regulator_enable(*pcVar38);
                        uVar17 = uVar15;
                        if ((*(pcVar38 + 0x3c) != 0) && (uVar14 == 0)) {
                            iVar28 = *(pcVar38 + 0x3c) * 1000;
                            usleep_range_state(iVar28,iVar28,2);
                        }
                        if (uVar15 < 0) {
                            _printk(0x8000697,"lt9611uxc_enable_vreg",pcVar38 + 8);
                            regulator_set_load(*pcVar38,*(pcVar38 + 0x34));
                            goto code_r0x08004774;
                        }
                        if (pcVar39 == pcVar36) goto code_r0x08004778;
                        pcVar38 = pcVar38 + 0x48;
                        pcVar36 = pcVar36 + 1;
                    } while ((*pcVar38 != 0) && (*pcVar38 < 0xfffffffffffff001));
                }
                _printk(0x8000af6,"lt9611uxc_enable_vreg",pcVar31 + (pcVar36 & 0xffffffff) * 0x48 + 8,uVar17);
code_r0x08004774:
                if (pcVar36 != 0) {
                    pcVar21 = pcVar36 + 1;
                    pcVar31 = pcVar31 + pcVar36 * 0x48 + -0x48;
                    do {
                        if (*(pcVar31 + 0x40) != 0) {
                            iVar28 = *(pcVar31 + 0x40) * 1000;
                            usleep_range_state(iVar28,iVar28,2);
                        }
                        regulator_set_load(*pcVar31,*(pcVar31 + 0x34));
                        regulator_disable(*pcVar31);
                        if (*(pcVar31 + 0x44) != 0) {
                            iVar28 = *(pcVar31 + 0x44) * 1000;
                            usleep_range_state(iVar28,iVar28,2);
                        }
                        pcVar21 = pcVar21 + -1;
                        pcVar31 = pcVar31 + -0x48;
                    } while (1 < pcVar21);
                }
code_r0x08004778:
                if (uVar17 == 0) goto code_r0x08004780;
                _printk(0x8001348,"lt9611uxc_probe");
                goto code_r0x08004adc;
            }
code_r0x08004780:
            uVar24 = gpio_to_desc(*(arg1_00 + 0x8a0));
            gpiod_set_raw_value(uVar24,1);
            msleep(0x14);
            uVar24 = gpio_to_desc(*(arg1_00 + 0x8a0));
            gpiod_set_raw_value(uVar24,0);
            msleep(0x14);
            uVar24 = gpio_to_desc(*(arg1_00 + 0x8a0));
            gpiod_set_raw_value(uVar24,1);
            msleep(300);
            sym.lt9611uxc_ctl_en(arg1_00);
            pcVar21 = arg1_00 + 0xb28;
            uVar8 = *(*(arg1_00 + 0x8c0) + 2);
            *(arg1_00 + 0xb28) = 0;
            *(arg1_00 + 0xb30) = 0;
            *(arg1_00 + 0xb38) = 0;
            *(arg1_00 + 0xb40) = 0;
            *(arg1_00 + 0xb48) = 0;
            *(arg1_00 + 0xb50) = 0;
            *(arg1_00 + 0xb58) = 0;
            *(arg1_00 + 0xb60) = 0;
            *(arg1_00 + 0xb68) = 0;
            *(arg1_00 + 0xb70) = 0;
            *(arg1_00 + 0xb78) = 0;
            *(arg1_00 + 0xb80) = 0;
            *(arg1_00 + 0xb88) = 0;
            *(arg1_00 + 0xb90) = 0;
            *(arg1_00 + 0xb98) = 0;
            *(arg1_00 + 0xb28) = 0x81ff;
            *(arg1_00 + 0xba0) = 0;
            uStack_3d8 = CONCAT62(0x20000,uVar8);
            pcStack_3d0 = pcVar21;
            iVar12 = i2c_transfer(*(*(arg1_00 + 0x8c0) + 0x18),&uStack_3d8,1);
            if (iVar12 < 1) {
                _printk(0x8001311,"lt9611uxc_write_byte");
            }
            uVar17 = *(arg1_00 + 0x8c0);
            uVar8 = *(uVar17 + 2);
            pcVar31 = 0x10001;
            uVar9 = *(uVar17 + 2);
            *(arg1_00 + 0xc18) = 0;
            *(arg1_00 + 0xc20) = 0;
            *(arg1_00 + 0xc08) = 0;
            *(arg1_00 + 0xc10) = 0;
            *(arg1_00 + 0xbf8) = 0;
            *(arg1_00 + 0xc00) = 0;
            *(arg1_00 + 0xbe8) = 0;
            *(arg1_00 + 0xbf0) = 0;
            *(arg1_00 + 0xbd8) = 0;
            *(arg1_00 + 0xbe0) = 0;
            *(arg1_00 + 0xbc8) = 0;
            *(arg1_00 + 0xbd0) = 0;
            *(arg1_00 + 3000) = 0;
            *(arg1_00 + 0xbc0) = 0;
            *(arg1_00 + 0xba8) = 0;
            *(arg1_00 + 0xbb0) = 0;
            *(arg1_00 + 0xb98) = 0;
            *(arg1_00 + 0xba0) = 0;
            *(arg1_00 + 0xb88) = 0;
            *(arg1_00 + 0xb90) = 0;
            *(arg1_00 + 0xb78) = 0;
            *(arg1_00 + 0xb80) = 0;
            *(arg1_00 + 0xb68) = 0;
            *(arg1_00 + 0xb70) = 0;
            *(arg1_00 + 0xb58) = 0;
            *(arg1_00 + 0xb60) = 0;
            *(arg1_00 + 0xb48) = 0;
            *(arg1_00 + 0xb50) = 0;
            *(arg1_00 + 0xb38) = 0;
            *(arg1_00 + 0xb40) = 0;
            *pcVar21 = 0;
            *(arg1_00 + 0xb30) = 0;
            uStack_3d8 = CONCAT62(0x10000,uVar8);
            uStack_3c8._0_6_ = CONCAT42(0x10001,uVar9);
            uStack_3c8 = uStack_3c8;
            pcStack_3d0 = pcVar21;
            pcStack_3c0 = arg1_00 + 0xba8;
            iVar12 = i2c_transfer(*(uVar17 + 0x18),&uStack_3d8,2);
            if (iVar12 != 2) {
code_r0x08004a44:
                _printk(0x80006dd,"lt9611uxc_read");
                _printk(0x8000bcd,"lt9611uxc_read_device_id");
                sym.lt9611uxc_ctl_disable(arg1_00);
                msleep(0x32);
                _printk(0x8000f25,"lt9611uxc_probe");
                uVar17 = 0xffffffff;
                goto code_r0x08004adc;
            }
            uVar17 = *(arg1_00 + 0x8c0);
            uVar8 = *(uVar17 + 2);
            uVar9 = *(uVar17 + 2);
            cVar6 = arg1_00[0xba8];
            *(arg1_00 + 0xc18) = 0;
            *(arg1_00 + 0xc20) = 0;
            *(arg1_00 + 0xc08) = 0;
            *(arg1_00 + 0xc10) = 0;
            *(arg1_00 + 0xbf8) = 0;
            *(arg1_00 + 0xc00) = 0;
            *(arg1_00 + 0xbe8) = 0;
            *(arg1_00 + 0xbf0) = 0;
            *(arg1_00 + 0xbd8) = 0;
            *(arg1_00 + 0xbe0) = 0;
            *(arg1_00 + 0xbc8) = 0;
            *(arg1_00 + 0xbd0) = 0;
            *(arg1_00 + 3000) = 0;
            *(arg1_00 + 0xbc0) = 0;
            *(arg1_00 + 0xba8) = 0;
            *(arg1_00 + 0xbb0) = 0;
            *(arg1_00 + 0xb98) = 0;
            *(arg1_00 + 0xba0) = 0;
            *(arg1_00 + 0xb88) = 0;
            *(arg1_00 + 0xb90) = 0;
            *(arg1_00 + 0xb78) = 0;
            *(arg1_00 + 0xb80) = 0;
            *(arg1_00 + 0xb68) = 0;
            *(arg1_00 + 0xb70) = 0;
            *(arg1_00 + 0xb58) = 0;
            *(arg1_00 + 0xb60) = 0;
            *(arg1_00 + 0xb48) = 0;
            *(arg1_00 + 0xb50) = 0;
            *(arg1_00 + 0xb38) = 0;
            *(arg1_00 + 0xb40) = 0;
            *pcVar21 = 0;
            *(arg1_00 + 0xb30) = 0;
            arg1_00[0xb28] = 0x1;
            uStack_3d8 = CONCAT62(0x10000,uVar8);
            uStack_3c8._0_6_ = CONCAT42(0x10001,uVar9);
            uStack_3c8 = uStack_3c8;
            pcStack_3d0 = pcVar21;
            pcStack_3c0 = arg1_00 + 0xba8;
            iVar12 = i2c_transfer(*(uVar17 + 0x18),&uStack_3d8,2);
            if (iVar12 != 2) goto code_r0x08004a44;
            _printk(0x80010d6,"lt9611uxc_read_device_id",CONCAT11(cVar6,arg1_00[0xba8]));
            sym.lt9611uxc_ctl_disable(arg1_00);
            msleep(0x32);
            *(pcVar22 + 0xb8) = arg1_00;
            uVar14 = sysfs_create_group(pcStack_400,obj.lt9611uxc_sysfs_attr_grp);
            pcVar21 = arg1_00;
            if (uVar14 != 0) {
                uVar17 = uVar14;
                _printk(0x8000c51,"lt9611uxc_sysfs_init","lt9611uxc_sysfs_init",uVar17);
                uVar24 = 0x8000b76;
                goto code_r0x08004ed0;
            }
            cVar11 = sym.lt9611uxc_get_version(arg1_00);
            if (cVar11 == '\0') {
                uVar14 = request_firmware_nowait
                                   (obj.__this_module,1,"lt9611uxc_fw.bin",pcStack_400,0xcc0,arg1_00,
                                    sym.lt9611uxc_firmware_cb.e58709b06554ea617982e3f2e7a32f4b.cfi_jt);
                uVar17 = uVar14;
                if (uVar14 != 0) {
                    _printk(0x800031b,"lt9611uxc_probe",uVar17);
                    goto code_r0x08004adc;
                }
            }
            else {
                _printk(0x800101c,"lt9611uxc_probe");
                __mutex_init(arg1_00 + 0x130,"&pdata->lock",obj.lt9611uxc_probe.__key);
                __init_waitqueue_head(arg1_00 + 0xa10,"&pdata->edid_wq",obj.lt9611uxc_probe.__key);
                *(arg1_00 + 0x90) = *(pcVar22 + 0x310);
                *(arg1_00 + 0xb0) = reloc.lt9611uxc_bridge_attach.e58709b06554ea617982e3f2e7a32f4b.cfi_jt;
                drm_bridge_add(arg1_00 + 8);
                uVar17 = alloc_workqueue(0x8000499,0xe000a,1,"lt9611uxc_wk");
                *(arg1_00 + 0x9d8) = uVar17;
                pcVar31 = arg1_00;
                if (uVar17 == 0) {
                    _printk(0x8001214,"lt9611uxc_probe");
                    uVar17 = 0;
                    goto code_r0x08004adc;
                }
                *(arg1_00 + 0x9e0) = 0xfffffffe0;
                *(arg1_00 + 0x9e8) = arg1_00 + 0x9e8;
                *(arg1_00 + 0x9f0) = arg1_00 + 0x9e8;
                *(arg1_00 + 0x9f8) = sym.lt9611uxc_hpd_work.cfi_jt;
                gpio_to_desc(*(arg1_00 + 0x89c));
                uVar24 = gpiod_to_irq();
                *(arg1_00 + 0x894) = uVar24;
                uVar14 = request_threaded_irq
                                   (uVar24,0,sym.lt9611uxc_irq_thread_handler.e58709b06554ea617982e3f2e7a32f4b.cfi_jt
                                    ,0x2002,"lt9611uxc_irq",arg1_00);
                uVar17 = uVar14;
                if (uVar14 != 0) {
                    uVar24 = 0x80010b9;
code_r0x08004ed0:
                    _printk(uVar24,"lt9611uxc_probe");
code_r0x08004adc:
                    sym.lt9611uxc_gpio_configure(arg1_00);
code_r0x08004ae8:
                    sym.lt9611uxc_put_dt_supply(pcStack_400,arg1_00);
                }
            }
        }
code_r0x080050d0:
        if (*(pcStack_3f8 + 0x8b8) != 0) {
            *(pcStack_3f8 + 0x8b8) = 0;
            *(pcStack_3f8 + 0x8b4) = 0;
        }
        uVar24 = 0x8001329;
    } while( true );
}


// ===== sym.lt9611uxc_fw_read_back @ 0x080030a8 (size 920) =====

uint64_t sym.lt9611uxc_fw_read_back(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int16_t iVar1;
    int16_t iVar2;
    char *pcVar3;
    ulong uVar4;
    ulong uVar5;
    code cVar6;
    ushort uVar7;
    uint16_t uVar8;
    ushort uVar9;
    bool bVar10;
    char cVar11;
    int iVar12;
    uint uVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    int iVar16;
    uint64_t uVar17;
    int64_t iVar18;
    ulong *puVar19;
    code *pcVar20;
    code *pcVar21;
    code *arg1_00;
    int64_t iVar22;
    ulong uVar23;
    uint64_t *puVar24;
    int64_t iVar25;
    uint32_t uVar26;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    code *pcVar27;
    uint64_t uVar28;
    ulong *puVar29;
    uint64_t uVar30;
    char *pcVar31;
    code *pcVar32;
    code *pcVar33;
    char *pcVar34;
    code *pcVar35;
    code *pcVar36;
    uint64_t uVar37;
    code *unaff_x26;
    ulong unaff_x27;
    ulong *puVar38;
    ulong unaff_x28;
    ulong *puVar39;
    ulong unaff_x30;
    uchar auVar40 [16];
    code *pcStack_380;
    code *pcStack_378;
    uint uStack_36c;
    ulong uStack_368;
    ulong uStack_360;
    ulong uStack_358;
    code *pcStack_350;
    ulong uStack_348;
    code *pcStack_340;
    int64_t iStack_338;
    ulong ***pppuStack_330;
    code *pcStack_328;
    ulong *puStack_320;
    ulong *puStack_318;
    code *pcStack_310;
    int64_t iStack_308;
    char *pcStack_300;
    code *pcStack_2f8;
    uint64_t uStack_2f0;
    code *pcStack_2e8;
    ulong uStack_2e0;
    code *pcStack_2d8;
    ulong uStack_2c8;
    code *pcStack_2c0;
    int64_t iStack_2b8;
    ulong ***pppuStack_2b0;
    code *pcStack_2a8;
    ulong *puStack_2a0;
    uint64_t *puStack_290;
    int64_t iStack_288;
    ulong uStack_278;
    ulong *puStack_270;
    int64_t iStack_268;
    ulong ***pppuStack_260;
    code *pcStack_258;
    ulong *puStack_250;
    ulong *puStack_248;
    code *pcStack_240;
    uint64_t uStack_238;
    char *pcStack_230;
    code *pcStack_228;
    int64_t iStack_220;
    ulong *puStack_218;
    uint64_t uStack_210;
    uint64_t uStack_208;
    uint32_t uStack_1fc;
    uint64_t uStack_1f8;
    uint32_t uStack_1ec;
    ulong uStack_1e8;
    ulong *puStack_1e0;
    ulong uStack_1d8;
    ulong *puStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    int64_t iStack_1b8;
    uchar ***pppuStack_1b0;
    code *pcStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    code *pcStack_190;
    uint64_t uStack_188;
    ulong *puStack_180;
    char *pcStack_178;
    ulong uStack_170;
    ulong *puStack_168;
    ulong uStack_160;
    int64_t iStack_158;
    ulong uStack_148;
    ulong *puStack_140;
    int64_t iStack_138;
    uchar **ppuStack_130;
    code *pcStack_128;
    uint64_t uStack_120;
    ulong uStack_118;
    ulong *puStack_110;
    int64_t iStack_108;
    ulong uStack_f8;
    ulong *puStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    uint64_t uStack_d0;
    int64_t iStack_c0;
    int64_t iStack_b8;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong *puStack_80;
    ulong uStack_78;
    code *pcStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar25 = sp_el0;
    iStack_68 = *(iVar25 + 0x5e0);
    uVar28 = arg3;
    bVar10 = (arg3 & 0x1f) != 0;
    puVar19 = arg1 + 0xb28;
    uStack_98 = 0;
    uStack_90 = 0;
    uVar30 = bVar10;
    uVar7 = *(*(arg1 + 0x8c0) + 2);
    *(arg1 + 0xb28) = 0;
    *(arg1 + 0xb30) = 0;
    *(arg1 + 0xb38) = 0;
    *(arg1 + 0xb40) = 0;
    *(arg1 + 0xb48) = 0;
    *(arg1 + 0xb50) = 0;
    *(arg1 + 0xb58) = 0;
    *(arg1 + 0xb60) = 0;
    *(arg1 + 0xb68) = 0;
    *(arg1 + 0xb70) = 0;
    *(arg1 + 0xb78) = 0;
    *(arg1 + 0xb80) = 0;
    *(arg1 + 0xb88) = 0;
    *(arg1 + 0xb90) = 0;
    *(arg1 + 0xb98) = 0;
    *(arg1 + 0xba0) = 0;
    *(arg1 + 0xb28) = 0x80ff;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_88 = CONCAT62(0x20000,uVar7);
    puStack_80 = puVar19;
    iVar12 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_88,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    pcVar31 = 0x2;
    uVar8 = *(*(arg1 + 0x8c0) + 2);
    *puVar19 = 0;
    *(arg1 + 0xb30) = 0;
    *(arg1 + 0xb38) = 0;
    *(arg1 + 0xb40) = 0;
    *(arg1 + 0xb48) = 0;
    *(arg1 + 0xb50) = 0;
    *(arg1 + 0xb58) = 0;
    *(arg1 + 0xb60) = 0;
    *(arg1 + 0xb68) = 0;
    *(arg1 + 0xb70) = 0;
    *(arg1 + 0xb78) = 0;
    *(arg1 + 0xb80) = 0;
    *(arg1 + 0xb88) = 0;
    *(arg1 + 0xb90) = 0;
    *(arg1 + 0xb98) = 0;
    *(arg1 + 0xba0) = 0;
    *(arg1 + 0xb28) = 0x1ee;
    uStack_88._0_4_ = uVar8;
    uStack_88._0_6_ = CONCAT24(2,uStack_88);
    uStack_88 = uStack_88;
    puStack_80 = puVar19;
    iVar12 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_88,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar8 = *(*(arg1 + 0x8c0) + 2);
    *puVar19 = 0;
    *(arg1 + 0xb30) = 0;
    *(arg1 + 0xb38) = 0;
    *(arg1 + 0xb40) = 0;
    *(arg1 + 0xb48) = 0;
    *(arg1 + 0xb50) = 0;
    *(arg1 + 0xb58) = 0;
    *(arg1 + 0xb60) = 0;
    *(arg1 + 0xb68) = 0;
    *(arg1 + 0xb70) = 0;
    *(arg1 + 0xb78) = 0;
    *(arg1 + 0xb80) = 0;
    *(arg1 + 0xb88) = 0;
    *(arg1 + 0xb90) = 0;
    *(arg1 + 0xb98) = 0;
    *(arg1 + 0xba0) = 0;
    *(arg1 + 0xb28) = 0x845a;
    uStack_88._0_4_ = uVar8;
    uStack_88._0_6_ = CONCAT24(2,uStack_88);
    uStack_88 = uStack_88;
    puStack_80 = puVar19;
    iVar12 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_88,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar8 = *(*(arg1 + 0x8c0) + 2);
    *puVar19 = 0;
    *(arg1 + 0xb30) = 0;
    *(arg1 + 0xb38) = 0;
    *(arg1 + 0xb40) = 0;
    *(arg1 + 0xb48) = 0;
    *(arg1 + 0xb50) = 0;
    *(arg1 + 0xb58) = 0;
    *(arg1 + 0xb60) = 0;
    *(arg1 + 0xb68) = 0;
    *(arg1 + 0xb70) = 0;
    *(arg1 + 0xb78) = 0;
    *(arg1 + 0xb80) = 0;
    *(arg1 + 0xb88) = 0;
    *(arg1 + 0xb90) = 0;
    *(arg1 + 0xb98) = 0;
    *(arg1 + 0xba0) = 0;
    *(arg1 + 0xb28) = 0x805a;
    uStack_88._0_4_ = uVar8;
    uStack_88._0_6_ = CONCAT24(2,uStack_88);
    uStack_88 = uStack_88;
    puStack_80 = puVar19;
    uVar17 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_88,1);
    if (uVar17 < 1) {
        uVar17 = _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar14 = arg3 + 0x1f;
    if (-1 < arg3) {
        uVar14 = arg3;
    }
    uVar14 = bVar10 + (uVar14 >> 5);
    uVar37 = uVar14;
    if (0 < uVar14) {
        uVar28 = 0;
        unaff_x26 = arg1 + 0xba8;
        unaff_x27 = 1;
        unaff_x28 = 0x200001;
        uVar30 = 0x5f;
        pcVar31 = "lt9611uxc_read";
        do {
            uStack_98 = 0;
            uStack_90 = 0;
            uStack_a8 = 0;
            uStack_a0 = 0;
            sym.lt9611uxc_flash_read_addr_set(arg1,uVar28 & 0xffffffff);
            iVar25 = *(arg1 + 0x8c0);
            uVar7 = *(iVar25 + 2);
            uVar9 = *(iVar25 + 2);
            *(arg1 + 0xc18) = 0;
            *(arg1 + 0xc20) = 0;
            *(arg1 + 0xc08) = 0;
            *(arg1 + 0xc10) = 0;
            *(arg1 + 0xbf8) = 0;
            *(arg1 + 0xc00) = 0;
            *(arg1 + 0xbe8) = 0;
            *(arg1 + 0xbf0) = 0;
            *(arg1 + 0xbd8) = 0;
            *(arg1 + 0xbe0) = 0;
            *(arg1 + 0xbc8) = 0;
            *(arg1 + 0xbd0) = 0;
            *(arg1 + 3000) = 0;
            *(arg1 + 0xbc0) = 0;
            *(arg1 + 0xba8) = 0;
            *(arg1 + 0xbb0) = 0;
            *(arg1 + 0xb98) = 0;
            *(arg1 + 0xba0) = 0;
            *(arg1 + 0xb88) = 0;
            *(arg1 + 0xb90) = 0;
            *(arg1 + 0xb78) = 0;
            *(arg1 + 0xb80) = 0;
            *(arg1 + 0xb68) = 0;
            *(arg1 + 0xb70) = 0;
            *(arg1 + 0xb58) = 0;
            *(arg1 + 0xb60) = 0;
            *(arg1 + 0xb48) = 0;
            *(arg1 + 0xb50) = 0;
            *(arg1 + 0xb38) = 0;
            *(arg1 + 0xb40) = 0;
            *puVar19 = 0;
            *(arg1 + 0xb30) = 0;
            *(arg1 + 0xb28) = 0x5f;
            uStack_88 = CONCAT62(0x10000,uVar7);
            uStack_78 = CONCAT42(0x200001,uVar9);
            puStack_80 = puVar19;
            pcStack_70 = unaff_x26;
            uVar17 = i2c_transfer(*(iVar25 + 0x18),&uStack_88,2);
            if (uVar17 == 2) {
                uStack_a8 = *unaff_x26;
                uStack_a0 = *(arg1 + 0xbb0);
                uStack_98 = *(arg1 + 3000);
                uStack_90 = *(arg1 + 0xbc0);
            }
            else {
                uVar17 = _printk(0x80006dd,"lt9611uxc_read");
            }
            puVar38 = arg2 + uVar28;
            uVar28 = uVar28 + 0x20;
            uVar14 = uVar37 - 1;
            uVar37 = uVar14;
            *puVar38 = uStack_a8;
            puVar38[1] = uStack_a0;
            puVar38[2] = uStack_98;
            puVar38[3] = uStack_90;
        } while (uVar14 != 0);
        uVar37 = 0;
    }
    iVar25 = sp_el0;
    if (*(iVar25 + 0x5e0) == iStack_68) {
        return uVar17;
    }
    iVar18 = __stack_chk_fail();
    *extraout_x18 = sym.lt9611uxc_flash_write_config;
    pcStack_d8 = sym.lt9611uxc_flash_write_config;
    iVar25 = sp_el0;
    iStack_e8 = *(iVar25 + 0x5e0);
    puStack_e0 = &stack0xffffffffffffffa0;
    uStack_d0 = uVar28;
    iStack_c0 = arg1;
    iStack_b8 = arg2;
    sym.lt9611uxc_flash_write_en(iVar18);
    puVar38 = iVar18 + 0xb28;
    uVar7 = *(*(iVar18 + 0x8c0) + 2);
    *(iVar18 + 0xb28) = 0;
    *(iVar18 + 0xb30) = 0;
    *(iVar18 + 0xb38) = 0;
    *(iVar18 + 0xb40) = 0;
    *(iVar18 + 0xb48) = 0;
    *(iVar18 + 0xb50) = 0;
    *(iVar18 + 0xb58) = 0;
    *(iVar18 + 0xb60) = 0;
    *(iVar18 + 0xb68) = 0;
    *(iVar18 + 0xb70) = 0;
    *(iVar18 + 0xb78) = 0;
    *(iVar18 + 0xb80) = 0;
    *(iVar18 + 0xb88) = 0;
    *(iVar18 + 0xb90) = 0;
    *(iVar18 + 0xb98) = 0;
    *(iVar18 + 0xb28) = 0x80ff;
    *(iVar18 + 0xba0) = 0;
    uStack_f8 = CONCAT62(0x20000,uVar7);
    puStack_f0 = puVar38;
    iVar12 = i2c_transfer(*(*(iVar18 + 0x8c0) + 0x18),&uStack_f8,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar8 = *(*(iVar18 + 0x8c0) + 2);
    *puVar38 = 0;
    *(iVar18 + 0xb30) = 0;
    *(iVar18 + 0xb38) = 0;
    *(iVar18 + 0xb40) = 0;
    *(iVar18 + 0xb48) = 0;
    *(iVar18 + 0xb50) = 0;
    *(iVar18 + 0xb58) = 0;
    *(iVar18 + 0xb60) = 0;
    *(iVar18 + 0xb68) = 0;
    *(iVar18 + 0xb70) = 0;
    *(iVar18 + 0xb78) = 0;
    *(iVar18 + 0xb80) = 0;
    *(iVar18 + 0xb88) = 0;
    *(iVar18 + 0xb90) = 0;
    *(iVar18 + 0xb98) = 0;
    *(iVar18 + 0xba0) = 0;
    *(iVar18 + 0xb28) = 0xdf5e;
    uStack_f8._0_4_ = uVar8;
    uStack_f8._0_6_ = CONCAT24(2,uStack_f8);
    uStack_f8 = uStack_f8;
    puStack_f0 = puVar38;
    iVar12 = i2c_transfer(*(*(iVar18 + 0x8c0) + 0x18),&uStack_f8,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar8 = *(*(iVar18 + 0x8c0) + 2);
    *puVar38 = 0;
    *(iVar18 + 0xb30) = 0;
    *(iVar18 + 0xb38) = 0;
    *(iVar18 + 0xb40) = 0;
    *(iVar18 + 0xb48) = 0;
    *(iVar18 + 0xb50) = 0;
    *(iVar18 + 0xb58) = 0;
    *(iVar18 + 0xb60) = 0;
    *(iVar18 + 0xb68) = 0;
    *(iVar18 + 0xb70) = 0;
    *(iVar18 + 0xb78) = 0;
    *(iVar18 + 0xb80) = 0;
    *(iVar18 + 0xb88) = 0;
    *(iVar18 + 0xb90) = 0;
    *(iVar18 + 0xb98) = 0;
    *(iVar18 + 0xba0) = 0;
    *(iVar18 + 0xb28) = 0x205a;
    uStack_f8._0_4_ = uVar8;
    uStack_f8._0_6_ = CONCAT24(2,uStack_f8);
    uStack_f8 = uStack_f8;
    puStack_f0 = puVar38;
    iVar12 = i2c_transfer(*(*(iVar18 + 0x8c0) + 0x18),&uStack_f8,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar8 = *(*(iVar18 + 0x8c0) + 2);
    *puVar38 = 0;
    *(iVar18 + 0xb30) = 0;
    *(iVar18 + 0xb38) = 0;
    *(iVar18 + 0xb40) = 0;
    *(iVar18 + 0xb48) = 0;
    *(iVar18 + 0xb50) = 0;
    *(iVar18 + 0xb58) = 0;
    *(iVar18 + 0xb60) = 0;
    *(iVar18 + 0xb68) = 0;
    *(iVar18 + 0xb70) = 0;
    *(iVar18 + 0xb78) = 0;
    *(iVar18 + 0xb80) = 0;
    *(iVar18 + 0xb88) = 0;
    *(iVar18 + 0xb90) = 0;
    *(iVar18 + 0xb98) = 0;
    *(iVar18 + 0xba0) = 0;
    *(iVar18 + 0xb28) = 0x5a;
    uStack_f8._0_4_ = uVar8;
    uStack_f8._0_6_ = CONCAT24(2,uStack_f8);
    uStack_f8 = uStack_f8;
    puStack_f0 = puVar38;
    iVar12 = i2c_transfer(*(*(iVar18 + 0x8c0) + 0x18),&uStack_f8,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar8 = *(*(iVar18 + 0x8c0) + 2);
    *puVar38 = 0;
    *(iVar18 + 0xb30) = 0;
    *(iVar18 + 0xb38) = 0;
    *(iVar18 + 0xb40) = 0;
    *(iVar18 + 0xb48) = 0;
    *(iVar18 + 0xb50) = 0;
    *(iVar18 + 0xb58) = 0;
    *(iVar18 + 0xb60) = 0;
    *(iVar18 + 0xb68) = 0;
    *(iVar18 + 0xb70) = 0;
    *(iVar18 + 0xb78) = 0;
    *(iVar18 + 0xb80) = 0;
    *(iVar18 + 0xb88) = 0;
    *(iVar18 + 0xb90) = 0;
    *(iVar18 + 0xb98) = 0;
    *(iVar18 + 0xba0) = 0;
    *(iVar18 + 0xb28) = 0x2158;
    uStack_f8._0_4_ = uVar8;
    uStack_f8._0_6_ = CONCAT24(2,uStack_f8);
    uStack_f8 = uStack_f8;
    puStack_f0 = puVar38;
    uVar28 = i2c_transfer(*(*(iVar18 + 0x8c0) + 0x18),&uStack_f8,1);
    if (uVar28 < 1) {
        uVar28 = _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar25 = sp_el0;
    if (*(iVar25 + 0x5e0) == iStack_e8) {
        return uVar28;
    }
    auVar40 = __stack_chk_fail();
    iVar22 = auVar40._0_8_;
    *extraout_x18_00 = sym.lt9611uxc_flash_write_addr_set;
    pcStack_128 = sym.lt9611uxc_flash_write_addr_set;
    uStack_118 = 2;
    iVar25 = sp_el0;
    iStack_138 = *(iVar25 + 0x5e0);
    puVar29 = iVar22 + 0xb28;
    uVar7 = *(*(iVar22 + 0x8c0) + 2);
    *(iVar22 + 0xb28) = 0;
    *(iVar22 + 0xb30) = 0;
    *(iVar22 + 0xb38) = 0;
    *(iVar22 + 0xb40) = 0;
    *(iVar22 + 0xb48) = 0;
    *(iVar22 + 0xb50) = 0;
    *(iVar22 + 0xb58) = 0;
    *(iVar22 + 0xb60) = 0;
    *(iVar22 + 0xb68) = 0;
    *(iVar22 + 0xb70) = 0;
    *(iVar22 + 0xb78) = 0;
    *(iVar22 + 0xb80) = 0;
    *(iVar22 + 0xb88) = 0;
    *(iVar22 + 0xb28) = 0x5b;
    *(iVar22 + 0xb90) = 0;
    *(iVar22 + 0xb98) = 0;
    *(iVar22 + 0xba0) = 0;
    *(iVar22 + 0xb29) = auVar40[10];
    uStack_148 = CONCAT62(0x20000,uVar7);
    puStack_140 = puVar29;
    ppuStack_130 = &puStack_e0;
    uStack_120 = uVar30;
    puStack_110 = puVar38;
    iStack_108 = iVar18;
    iVar12 = i2c_transfer(*(*(iVar22 + 0x8c0) + 0x18),&uStack_148,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar8 = *(*(iVar22 + 0x8c0) + 2);
    *puVar29 = 0;
    *(iVar22 + 0xb30) = 0;
    *(iVar22 + 0xb38) = 0;
    *(iVar22 + 0xb40) = 0;
    *(iVar22 + 0xb48) = 0;
    *(iVar22 + 0xb50) = 0;
    *(iVar22 + 0xb58) = 0;
    *(iVar22 + 0xb60) = 0;
    *(iVar22 + 0xb68) = 0;
    *(iVar22 + 0xb70) = 0;
    *(iVar22 + 0xb78) = 0;
    *(iVar22 + 0xb80) = 0;
    *(iVar22 + 0xb88) = 0;
    *(iVar22 + 0xb90) = 0;
    *(iVar22 + 0xb98) = 0;
    *(iVar22 + 0xba0) = 0;
    *(iVar22 + 0xb28) = 0x5c;
    *(iVar22 + 0xb29) = auVar40[9];
    uStack_148._0_4_ = uVar8;
    uStack_148._0_6_ = CONCAT24(2,uStack_148);
    uStack_148 = uStack_148;
    puStack_140 = puVar29;
    iVar12 = i2c_transfer(*(*(iVar22 + 0x8c0) + 0x18),&uStack_148,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar8 = *(*(iVar22 + 0x8c0) + 2);
    *puVar29 = 0;
    *(iVar22 + 0xb30) = 0;
    *(iVar22 + 0xb38) = 0;
    *(iVar22 + 0xb40) = 0;
    *(iVar22 + 0xb48) = 0;
    *(iVar22 + 0xb50) = 0;
    *(iVar22 + 0xb58) = 0;
    *(iVar22 + 0xb60) = 0;
    *(iVar22 + 0xb68) = 0;
    *(iVar22 + 0xb70) = 0;
    *(iVar22 + 0xb78) = 0;
    *(iVar22 + 0xb80) = 0;
    *(iVar22 + 0xb88) = 0;
    *(iVar22 + 0xb90) = 0;
    *(iVar22 + 0xb98) = 0;
    *(iVar22 + 0xba0) = 0;
    *(iVar22 + 0xb28) = 0x5d;
    *(iVar22 + 0xb29) = auVar40[8];
    uStack_148._0_4_ = uVar8;
    uStack_148._0_6_ = CONCAT24(2,uStack_148);
    uStack_148 = uStack_148;
    puStack_140 = puVar29;
    iVar12 = i2c_transfer(*(*(iVar22 + 0x8c0) + 0x18),&uStack_148,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar8 = *(*(iVar22 + 0x8c0) + 2);
    *puVar29 = 0;
    *(iVar22 + 0xb30) = 0;
    *(iVar22 + 0xb38) = 0;
    *(iVar22 + 0xb40) = 0;
    *(iVar22 + 0xb48) = 0;
    *(iVar22 + 0xb50) = 0;
    *(iVar22 + 0xb58) = 0;
    *(iVar22 + 0xb60) = 0;
    *(iVar22 + 0xb68) = 0;
    *(iVar22 + 0xb70) = 0;
    *(iVar22 + 0xb78) = 0;
    *(iVar22 + 0xb80) = 0;
    *(iVar22 + 0xb88) = 0;
    *(iVar22 + 0xb90) = 0;
    *(iVar22 + 0xb98) = 0;
    *(iVar22 + 0xba0) = 0;
    *(iVar22 + 0xb28) = 0x105a;
    uStack_148._0_4_ = uVar8;
    uStack_148._0_6_ = CONCAT24(2,uStack_148);
    uStack_148 = uStack_148;
    puStack_140 = puVar29;
    iVar12 = i2c_transfer(*(*(iVar22 + 0x8c0) + 0x18),&uStack_148,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar14 = 1;
    uVar8 = *(*(iVar22 + 0x8c0) + 2);
    *puVar29 = 0;
    *(iVar22 + 0xb30) = 0;
    *(iVar22 + 0xb38) = 0;
    *(iVar22 + 0xb40) = 0;
    *(iVar22 + 0xb48) = 0;
    *(iVar22 + 0xb50) = 0;
    *(iVar22 + 0xb58) = 0;
    *(iVar22 + 0xb60) = 0;
    *(iVar22 + 0xb68) = 0;
    *(iVar22 + 0xb70) = 0;
    *(iVar22 + 0xb78) = 0;
    *(iVar22 + 0xb80) = 0;
    *(iVar22 + 0xb88) = 0;
    *(iVar22 + 0xb90) = 0;
    *(iVar22 + 0xb98) = 0;
    *(iVar22 + 0xba0) = 0;
    *(iVar22 + 0xb28) = 0x5a;
    uStack_148._0_4_ = uVar8;
    uStack_148._0_6_ = CONCAT24(2,uStack_148);
    uStack_148 = uStack_148;
    puStack_140 = puVar29;
    uVar28 = i2c_transfer(*(*(iVar22 + 0x8c0) + 0x18),&uStack_148);
    if (uVar28 < 1) {
        uVar28 = _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar25 = sp_el0;
    if (*(iVar25 + 0x5e0) == iStack_138) {
        return uVar28;
    }
    auVar40 = __stack_chk_fail();
    pcVar34 = auVar40._8_8_;
    iVar25 = auVar40._0_8_;
    *extraout_x18_01 = sym.lt9611uxc_firmware_write;
    pcStack_1a8 = sym.lt9611uxc_firmware_write;
    uStack_170 = 2;
    uStack_160 = 2;
    uVar15 = uVar14 + 0x1f;
    if (-1 < uVar14) {
        uVar15 = uVar14;
    }
    iVar18 = sp_el0;
    iStack_1b8 = *(iVar18 + 0x5e0);
    uVar28 = uVar15 >> 5;
    uVar26 = uVar14 % 0x20;
    puVar38 = iVar25 + 0xb28;
    puVar39 = iVar25 + 0xb29;
    pppuStack_1b0 = &ppuStack_130;
    uStack_1a0 = unaff_x28;
    uStack_198 = unaff_x27;
    pcStack_190 = unaff_x26;
    uStack_188 = uVar37;
    puStack_180 = puVar19;
    pcStack_178 = pcVar31;
    puStack_168 = puVar29;
    iStack_158 = iVar22;
    if (uVar14 < 0x20) {
        pcVar32 = NULL;
        uVar30 = uVar26;
        pcVar31 = unaff_x26;
    }
    else {
        pcVar32 = NULL;
        puVar29 = 0x21;
        pcVar31 = "lt9611uxc_write";
        uStack_1fc = uVar15 >> 5;
        uStack_1f8 = uVar26;
        uStack_1ec = uVar14;
        do {
            pcVar3 = pcVar34 + pcVar32;
            sym.lt9611uxc_flash_write_config(iVar25);
            uVar7 = *(*(iVar25 + 0x8c0) + 2);
            *(iVar25 + 0xb28) = 0x59;
            uVar4 = *(pcVar3 + 0x18);
            uVar23 = *pcVar3;
            uVar5 = *(pcVar3 + 8);
            uStack_1d8 = CONCAT62(0x210000,uVar7);
            *(iVar25 + 0xb39) = *(pcVar3 + 0x10);
            *(iVar25 + 0xb41) = uVar4;
            *puVar39 = uVar23;
            *(iVar25 + 0xb31) = uVar5;
            puStack_1d0 = puVar38;
            iVar12 = i2c_transfer(*(*(iVar25 + 0x8c0) + 0x18),&uStack_1d8,1);
            if (iVar12 < 1) {
                _printk(0x8001311,"lt9611uxc_write");
            }
            sym.lt9611uxc_flash_write_addr_set(iVar25,pcVar32 & 0xffffffff);
            msleep(0x14);
            pcVar32 = pcVar32 + 0x20;
            uVar14 = uVar28 - 1;
            uVar28 = uVar14;
        } while (uVar14 != 0);
        pcVar34 = pcVar34 + pcVar32;
        uVar28 = uStack_1fc;
        uVar26 = uStack_1f8;
        uVar30 = uStack_1f8;
        uVar14 = uStack_1ec;
    }
    if (0 < uVar26) {
        uStack_1c8 = 0xffffffffffffffff;
        uStack_1c0 = 0xffffffffffffffff;
        uStack_1d8 = 0xffffffffffffffff;
        puStack_1d0 = 0xffffffffffffffff;
        memcpy(&uStack_1d8,pcVar34,uVar30);
        sym.lt9611uxc_flash_write_config(iVar25);
        uVar7 = *(*(iVar25 + 0x8c0) + 2);
        *puVar39 = uStack_1d8;
        *(iVar25 + 0xb31) = puStack_1d0;
        *(iVar25 + 0xb39) = uStack_1c8;
        *(iVar25 + 0xb41) = uStack_1c0;
        *(iVar25 + 0xb28) = 0x59;
        uStack_1e8 = CONCAT62(0x210000,uVar7);
        puStack_1e0 = puVar38;
        iVar12 = i2c_transfer(*(*(iVar25 + 0x8c0) + 0x18),&uStack_1e8,1);
        if (iVar12 < 1) {
            _printk(0x8001311,"lt9611uxc_write");
        }
        sym.lt9611uxc_flash_write_addr_set(iVar25,pcVar32 & 0xffffffff);
        msleep(0x14);
    }
    msleep(0x14);
    uVar17 = _printk(0x8000dc1,"lt9611uxc_firmware_write",uVar14,uVar28,uVar30 & 0xffffffff);
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_1b8) {
        return uVar17;
    }
    auVar40 = __stack_chk_fail();
    puVar24 = auVar40._8_8_;
    iVar22 = auVar40._0_8_;
    *extraout_x18_02 = sym.lt9611uxc_firmware_upgrade;
    pcStack_258 = sym.lt9611uxc_firmware_upgrade;
    iVar18 = sp_el0;
    iStack_268 = *(iVar18 + 0x5e0);
    uVar17 = *puVar24;
    pppuStack_260 = &pppuStack_1b0;
    puStack_250 = puVar39;
    puStack_248 = puVar38;
    pcStack_240 = pcVar31;
    uStack_238 = uVar28;
    pcStack_230 = pcVar34;
    pcStack_228 = pcVar32;
    iStack_220 = iVar25;
    puStack_218 = puVar29;
    uStack_210 = uVar30;
    uStack_208 = uVar14;
    _printk(0x8000c20,"lt9611uxc_firmware_upgrade",uVar17 & 0xffffffff);
    iVar25 = uVar17 << 0x20;
    puVar19 = __kmalloc(iVar25 + 0x1f00000000 >> 0x20 & 0xffffffffffffffe0,0xdc0);
    uVar28 = 0;
    puStack_2a0 = puVar29;
    if (puVar19 != NULL) {
        iVar18 = 0;
        puVar38 = iVar22 + 0xb28;
        puVar39 = 0x8001730;
        pcVar32 = 0x2;
        pcVar34 = "lt9611uxc_write_byte";
        *(iVar22 + 0xc30) = 1;
        do {
            uVar7 = *(iVar18 + 0x8001730);
            uVar8 = *(*(iVar22 + 0x8c0) + 2);
            *puVar38 = 0;
            *(iVar22 + 0xb30) = 0;
            *(iVar22 + 0xb38) = 0;
            *(iVar22 + 0xb40) = 0;
            *(iVar22 + 0xb48) = 0;
            *(iVar22 + 0xb50) = 0;
            *(iVar22 + 0xb58) = 0;
            *(iVar22 + 0xb60) = 0;
            *(iVar22 + 0xb68) = 0;
            *(iVar22 + 0xb70) = 0;
            *(iVar22 + 0xb78) = 0;
            *(iVar22 + 0xb80) = 0;
            *(iVar22 + 0xb88) = 0;
            *(iVar22 + 0xb90) = 0;
            *(iVar22 + 0xb98) = 0;
            *(iVar22 + 0xba0) = 0;
            *(iVar22 + 0xb28) = uVar7;
            uStack_278 = CONCAT24(2,uVar8);
            puStack_270 = puVar38;
            iVar12 = i2c_transfer(*(*(iVar22 + 0x8c0) + 0x18),&uStack_278,1);
            if (iVar12 < 1) {
                _printk(0x8001311,"lt9611uxc_write_byte");
            }
            iVar18 = iVar18 + 2;
        } while (iVar18 != 0xe);
        sym.lt9611uxc_block_erase(iVar22);
        sym.lt9611uxc_block_erase(iVar22);
        sym.lt9611uxc_firmware_write(iVar22,puVar24[1],uVar17 & 0xffffffff);
        msleep(0x14);
        sym.lt9611uxc_fw_read_back(iVar22,puVar19,uVar17);
        iVar12 = bcmp(puVar24[1],puVar19,iVar25 >> 0x20);
        uVar23 = 0x8000ff4;
        if (iVar12 != 0) {
            uVar23 = 0x8000a82;
        }
        *(iVar22 + 0xc30) = (iVar12 != 0) << 1;
        _printk(uVar23,"lt9611uxc_firmware_upgrade");
        uVar28 = kfree(puVar19);
        pcVar31 = 0xe;
        puStack_2a0 = puVar19;
    }
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_268) {
        return uVar28;
    }
    pcVar20 = __stack_chk_fail();
    *extraout_x18_03 = sym.lt9611uxc_edid_en;
    pcStack_2a8 = sym.lt9611uxc_edid_en;
    iVar18 = sp_el0;
    iStack_2b8 = *(iVar18 + 0x5e0);
    pcVar33 = pcVar20 + 0xb28;
    uVar7 = *(*(pcVar20 + 0x8c0) + 2);
    *(pcVar20 + 0xb28) = 0;
    *(pcVar20 + 0xb30) = 0;
    *(pcVar20 + 0xb38) = 0;
    *(pcVar20 + 0xb40) = 0;
    *(pcVar20 + 0xb48) = 0;
    *(pcVar20 + 0xb50) = 0;
    *(pcVar20 + 0xb58) = 0;
    *(pcVar20 + 0xb60) = 0;
    *(pcVar20 + 0xb68) = 0;
    *(pcVar20 + 0xb70) = 0;
    *(pcVar20 + 0xb78) = 0;
    *(pcVar20 + 0xb80) = 0;
    *(pcVar20 + 0xb88) = 0;
    *(pcVar20 + 0xb90) = 0;
    *(pcVar20 + 0xb98) = 0;
    *(pcVar20 + 0xb28) = 0xb0ff;
    *(pcVar20 + 0xba0) = 0;
    uStack_2c8 = CONCAT62(0x20000,uVar7);
    pcStack_2c0 = pcVar33;
    pppuStack_2b0 = &pppuStack_260;
    puStack_290 = puVar24;
    iStack_288 = iVar22;
    iVar12 = i2c_transfer(*(*(pcVar20 + 0x8c0) + 0x18),&uStack_2c8,1);
    if (iVar12 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar7 = *(*(pcVar20 + 0x8c0) + 2);
    *pcVar33 = 0;
    *(pcVar20 + 0xb30) = 0;
    *(pcVar20 + 0xb38) = 0;
    *(pcVar20 + 0xb40) = 0;
    *(pcVar20 + 0xb48) = 0;
    *(pcVar20 + 0xb50) = 0;
    *(pcVar20 + 0xb58) = 0;
    *(pcVar20 + 0xb60) = 0;
    *(pcVar20 + 0xb68) = 0;
    *(pcVar20 + 0xb70) = 0;
    *(pcVar20 + 0xb78) = 0;
    *(pcVar20 + 0xb80) = 0;
    *(pcVar20 + 0xb88) = 0;
    *(pcVar20 + 0xb90) = 0;
    *(pcVar20 + 0xb98) = 0;
    *(pcVar20 + 0xba0) = 0;
    *(pcVar20 + 0xb28) = 0x100b;
    uStack_2c8 = CONCAT62(0x20000,uVar7);
    pcStack_2c0 = pcVar33;
    uVar28 = i2c_transfer(*(*(pcVar20 + 0x8c0) + 0x18),&uStack_2c8,1);
    if (uVar28 < 1) {
        uVar28 = _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_2b8) {
        return uVar28;
    }
    pcVar21 = __stack_chk_fail();
    *extraout_x18_04 = sym.lt9611uxc_probe;
    pcStack_328 = sym.lt9611uxc_probe;
    uStack_2e0 = 0x200000000;
    iVar18 = sp_el0;
    iStack_338 = *(iVar18 + 0x5e0);
    pppuStack_330 = &pppuStack_2b0;
    puStack_320 = puVar39;
    puStack_318 = puVar38;
    pcStack_310 = pcVar31;
    iStack_308 = iVar25;
    pcStack_300 = pcVar34;
    pcStack_2f8 = pcVar32;
    uStack_2f0 = uVar17;
    pcStack_2e8 = pcVar33;
    pcStack_2d8 = pcVar20;
    if ((pcVar21 == NULL) || (pcVar33 = pcVar21, *(pcVar21 + 0x310) == 0)) {
        _printk(0x8000306,"lt9611uxc_probe");
        uVar28 = 0xffffffea;
        pcVar27 = 0x200000000;
        pcVar21 = pcVar33;
        goto code_r0x08003fa8;
    }
    pcVar20 = *(pcVar21 + 0x18);
    pcVar27 = *(*(pcVar20 + 0x10) + 0x20);
    __cfi_slowpath_diag(0x6871e466cec98751,pcVar27,0x8000270);
    uVar28 = (*pcVar27)(pcVar20);
    if ((uVar28 & 1) == 0) {
        _printk(0x8000c9e,"lt9611uxc_probe");
        uVar28 = 0xffffffed;
        goto code_r0x08003fa8;
    }
    pcVar33 = pcVar21 + 0x20;
    _printk(0x8000cc0,"lt9611uxc_probe","lt9611uxc_probe");
    arg1_00 = devm_kmalloc(pcVar33,0xc38,0xdc0);
    pcVar27 = pcVar33;
    if (arg1_00 == NULL) {
        uVar28 = 0xfffffff4;
        goto code_r0x08003fa8;
    }
    pcVar35 = *(pcVar21 + 0x310);
    iVar25 = of_graph_get_endpoint_by_regs(pcVar35,0,0);
    if (iVar25 == 0) {
        uVar23 = 0x8000d3c;
code_r0x080040b0:
        _printk(uVar23,"lt9611uxc_parse_dt");
        uVar28 = 0xffffffed;
    }
    else {
        uVar28 = of_graph_get_remote_port_parent();
        *(arg1_00 + 0x118) = uVar28;
        if (uVar28 == 0) {
            uVar23 = 0x8000e6b;
            goto code_r0x080040b0;
        }
        uVar14 = of_get_named_gpio_flags(pcVar35,"lt,irq-gpio",0,0);
        uVar28 = 0;
        *(arg1_00 + 0x89c) = uVar14;
        if (0x1ff < uVar14) {
            _printk(0x800083a,"lt9611uxc_parse_dt");
            uVar28 = 0xffffffea;
        }
        uVar14 = of_get_named_gpio_flags(pcVar35,"lt,reset-gpio",0,0);
        *(arg1_00 + 0x8a0) = uVar14;
        if (0x1ff < uVar14) {
            _printk(0x80005ef,"lt9611uxc_parse_dt");
            uVar28 = 0xffffffea;
        }
        uVar13 = of_get_named_gpio_flags(pcVar35,"lt,hdmi-ps-gpio",0,0);
        *(arg1_00 + 0x8a4) = uVar13;
        uVar13 = of_get_named_gpio_flags(pcVar35,"lt,hdmi-en-gpio",0,0);
        *(arg1_00 + 0x8a8) = uVar13;
        uVar13 = of_get_named_gpio_flags(pcVar35,"lt,hdmi-3p3-en",0,0);
        *(arg1_00 + 0x8ac) = uVar13;
        uVar13 = of_get_named_gpio_flags(pcVar35,"lt,hdmi-1p2-en",0,0);
        *(arg1_00 + 0x8b0) = uVar13;
        iVar25 = of_find_property(pcVar35,"lt,ac-mode",0);
        pcStack_378 = arg1_00 + 0x8d8;
        arg1_00[0x898] = iVar25 != 0;
        *(arg1_00 + 0x8d8) = pcStack_378;
        *(arg1_00 + 0x8e0) = pcStack_378;
        uStack_358 = uStack_358._4_4_ << 0x20;
        uStack_368 = 0;
        uStack_360 = 0;
        uStack_36c = 0;
        iVar25 = of_get_child_by_name(pcVar35,"lt,customize-modes");
        if ((iVar25 == 0) && (iVar25 = of_parse_phandle(pcVar35,"lt,customize-modes",0), iVar25 == 0)) {
            _printk(0x8000f8e,"lt9611uxc_parse_dt_modes");
        }
        else {
            iVar18 = of_get_next_child(iVar25,0);
            if (iVar18 == 0) {
                pcVar31 = NULL;
            }
            else {
                pcVar31 = NULL;
                uVar14 = 0;
                do {
                    pcVar32 = kmem_cache_alloc_trace(_drm_atomic_helper_connector_destroy_state,0xdc0,0x78);
                    if (pcVar32 == NULL) {
                        _printk(0x8000e88,"lt9611uxc_parse_dt_modes");
                    }
                    else {
                        iVar12 = of_property_read_variable_u32_array(iVar18,"lt,mode-h-active",pcVar32 + 4,1,0);
                        pcVar35 = pcVar32;
                        if (iVar12 < 0) {
                            uVar23 = 0x8000473;
                        }
                        else {
                            iVar12 = of_property_read_variable_u32_array
                                               (iVar18,"lt,mode-h-front-porch",&uStack_358,1,0);
                            if (iVar12 < 0) {
                                uVar23 = 0x8001234;
                            }
                            else {
                                iVar12 = of_property_read_variable_u32_array
                                                   (iVar18,"lt,mode-h-pulse-width",&uStack_360 + 4,1,0);
                                if (iVar12 < 0) {
                                    uVar23 = 0x8000cd5;
                                }
                                else {
                                    iVar12 = of_property_read_variable_u32_array
                                                       (iVar18,"lt,mode-h-back-porch",&uStack_360,1,0);
                                    if (iVar12 < 0) {
                                        uVar23 = 0x8001047;
                                    }
                                    else {
                                        iVar22 = of_find_property(iVar18,"lt,mode-h-active-high",0);
                                        iVar12 = of_property_read_variable_u32_array
                                                           (iVar18,"lt,mode-v-active",pcVar32 + 0xe,1,0);
                                        if (iVar12 < 0) {
                                            uVar23 = 0x8000d5d;
                                        }
                                        else {
                                            iVar12 = of_property_read_variable_u32_array
                                                               (iVar18,"lt,mode-v-front-porch",&uStack_368 + 4,1,0);
                                            if (iVar12 < 0) {
                                                uVar23 = 0x800094e;
                                            }
                                            else {
                                                iVar12 = of_property_read_variable_u32_array
                                                                   (iVar18,"lt,mode-v-pulse-width",&uStack_368,1,0);
                                                if (iVar12 < 0) {
                                                    uVar23 = 0x8000757;
                                                }
                                                else {
                                                    iVar12 = of_property_read_variable_u32_array
                                                                       (iVar18,"lt,mode-v-back-porch",&uStack_36c,1,
                                                                        0);
                                                    if (iVar12 < 0) {
                                                        uVar23 = 0x8000979;
                                                    }
                                                    else {
                                                        pcVar27 = of_find_property(iVar18,"lt,mode-v-active-high",0);
                                                        iVar12 = of_property_read_variable_u32_array
                                                                           (iVar18,"lt,mode-clock-in-khz",pcVar32,1,
                                                                            0);
                                                        if (-1 < iVar12) {
                                                            iVar1 = *(pcVar32 + 4) + uStack_358 + uStack_360._4_2_;
                                                            puVar19 = *(arg1_00 + 0x8e0);
                                                            *(pcVar32 + 6) = *(pcVar32 + 4) + uStack_358;
                                                            *(pcVar32 + 8) = iVar1;
                                                            iVar2 = *(pcVar32 + 0xe) + uStack_368._4_2_ + uStack_368;
                                                            *(pcVar32 + 0x10) = *(pcVar32 + 0xe) + uStack_368._4_2_;
                                                            *(pcVar32 + 10) = iVar1 + uStack_360;
                                                            uVar15 = 1;
                                                            if (iVar22 == 0) {
                                                                uVar15 = 2;
                                                            }
                                                            uVar26 = 8;
                                                            if (pcVar27 != NULL) {
                                                                uVar26 = 4;
                                                            }
                                                            pcVar27 = pcVar32 + 0x40;
                                                            uVar14 = uVar15 | uVar14 | uVar26;
                                                            *(pcVar32 + 0x12) = iVar2;
                                                            *(pcVar32 + 0x14) = iVar2 + uStack_36c;
                                                            *(pcVar32 + 0x18) = uVar14;
                                                            uVar30 = __list_add_valid(pcVar27,puVar19,pcStack_378);
                                                            if ((uVar30 & 1) != 0) {
                                                                *(arg1_00 + 0x8e0) = pcVar27;
                                                                *(pcVar32 + 0x40) = pcStack_378;
                                                                *(pcVar32 + 0x48) = puVar19;
                                                                *puVar19 = pcVar27;
                                                            }
                                                            pcVar31 = pcVar31 + 1;
                                                            drm_mode_set_name(pcVar32);
                                                            goto code_r0x080042cc;
                                                        }
                                                        uVar23 = 0x8000d15;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        _printk(uVar23,"lt9611uxc_parse_dt_modes",iVar12);
                        kfree(pcVar32);
                    }
code_r0x080042cc:
                    iVar18 = of_get_next_child(iVar25,iVar18);
                } while (iVar18 != 0);
            }
            *(arg1_00 + 0x8d0) = pcVar31;
            pcVar32 = arg1_00;
        }
        pcStack_380 = pcVar33;
        if (uVar28 == 0) {
            uStack_360 = uStack_360 & 0xffffffff;
            if (pcVar33 != NULL) {
                uVar28 = *(pcVar21 + 0x310);
                *(arg1_00 + 0x8b4) = 0;
                pcVar20 = of_get_child_by_name(uVar28,"lt,supply-entries");
                if (pcVar20 == NULL) {
                    uVar23 = 0x80004ab;
                    pcVar20 = pcVar35;
                }
                else {
                    iVar25 = of_get_next_available_child(pcVar20,0);
                    if (iVar25 == 0) {
                        *(arg1_00 + 0x8b4) = 0;
                    }
                    else {
                        pcVar27 = NULL;
                        do {
                            uVar14 = pcVar27 + 1;
                            pcVar27 = uVar14;
                            iVar25 = of_get_next_available_child(pcVar20,iVar25);
                        } while (iVar25 != 0);
                        *(arg1_00 + 0x8b4) = uVar14;
                        if (uVar14 != 0) {
                            uVar28 = devm_kmalloc(pcVar33,pcVar27 * 0x48,0xdc0);
                            *(arg1_00 + 0x8b8) = uVar28;
                            pcStack_378 = arg1_00;
                            if (uVar28 != 0) {
                                pcVar27 = of_get_next_available_child(pcVar20,0);
                                if (pcVar27 != NULL) {
                                    pcVar31 = NULL;
                                    do {
                                        uStack_358 = 0;
                                        uVar14 = of_property_read_string(pcVar27,"lt,supply-name",&uStack_358);
                                        if (uVar14 != 0) {
                                            uVar23 = 0x800035d;
code_r0x08004e70:
                                            uVar28 = uVar14;
                                            _printk(uVar23,"lt9611uxc_get_dt_supply",uVar28);
                                            goto code_r0x080050d0;
                                        }
                                        iVar12 = pcVar31;
                                        strscpy(*(arg1_00 + 0x8b8) + iVar12 * 0x48 + 8,uStack_358,0x20);
                                        uVar14 = of_property_read_variable_u32_array
                                                           (pcVar27,"lt,supply-min-voltage",&uStack_360 + 4,1,0);
                                        if (uVar14 < 0) {
                                            uVar23 = 0x80004ca;
                                            goto code_r0x08004e70;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar12 * 0x48 + 0x28) = uStack_360._4_4_;
                                        uVar14 = of_property_read_variable_u32_array
                                                           (pcVar27,"lt,supply-max-voltage",&uStack_360 + 4,1,0);
                                        if (uVar14 < 0) {
                                            uVar28 = uVar14;
                                            _printk(0x8000598,"lt9611uxc_get_dt_supply",uVar28);
                                            pcVar32 = arg1_00;
                                            goto code_r0x080050d0;
                                        }
                                        iVar25 = iVar12 * 0x48;
                                        *(*(arg1_00 + 0x8b8) + iVar25 + 0x2c) = uStack_360._4_4_;
                                        iVar16 = of_property_read_variable_u32_array
                                                           (pcVar27,"lt,supply-enable-load",&uStack_360 + 4,1,0);
                                        uVar13 = 0;
                                        if (-1 < iVar16) {
                                            uVar13 = uStack_360._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar25 + 0x30) = uVar13;
                                        iVar16 = of_property_read_variable_u32_array
                                                           (pcVar27,"lt,supply-disable-load",&uStack_360 + 4,1,0);
                                        uVar13 = 0;
                                        if (-1 < iVar16) {
                                            uVar13 = uStack_360._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar25 + 0x34) = uVar13;
                                        iVar16 = of_property_read_variable_u32_array
                                                           (pcVar27,"lt,supply-pre-on-sleep",&uStack_360 + 4,1,0);
                                        uVar13 = 0;
                                        if (-1 < iVar16) {
                                            uVar13 = uStack_360._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar25 + 0x38) = uVar13;
                                        iVar16 = of_property_read_variable_u32_array
                                                           (pcVar27,"lt,supply-pre-off-sleep",&uStack_360 + 4,1,0);
                                        uVar13 = 0;
                                        if (-1 < iVar16) {
                                            uVar13 = uStack_360._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar25 + 0x40) = uVar13;
                                        iVar16 = of_property_read_variable_u32_array
                                                           (pcVar27,"lt,supply-post-on-sleep",&uStack_360 + 4,1,0);
                                        uVar13 = 0;
                                        if (-1 < iVar16) {
                                            uVar13 = uStack_360._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar25 + 0x3c) = uVar13;
                                        iVar16 = of_property_read_variable_u32_array
                                                           (pcVar27,"lt,supply-post-off-sleep",&uStack_360 + 4,1,0);
                                        pcVar31 = iVar12 + 1;
                                        uVar13 = 0;
                                        if (-1 < iVar16) {
                                            uVar13 = uStack_360._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar25 + 0x44) = uVar13;
                                        pcVar27 = of_get_next_available_child(pcVar20,pcVar27);
                                        pcVar32 = arg1_00;
                                    } while (pcVar27 != NULL);
                                }
                                pcVar27 = *(arg1_00 + 0x8b8);
                                if (pcVar27 == NULL) goto code_r0x08004624;
                                uVar14 = *(arg1_00 + 0x8b4);
                                if (uVar14 < 1) goto code_r0x08004624;
                                pcVar20 = pcVar27 + 8;
                                uVar30 = regulator_get(pcVar33,pcVar20);
                                uVar28 = 0;
                                pcVar35 = NULL;
                                *pcVar27 = uVar30;
                                pcVar36 = pcVar27;
                                if (uVar30 == 0) goto code_r0x08004e34;
                                if (0xfffffffffffff000 < uVar30) goto code_r0x08004e34;
                                uVar15 = regulator_set_voltage(uVar30,*(pcVar27 + 0x28),*(pcVar27 + 0x2c));
                                uVar28 = uVar15;
                                if (uVar15 < 0) {
                                    pcVar32 = NULL;
                                }
                                else {
                                    pcVar32 = NULL;
                                    iVar25 = 0;
                                    do {
                                        iVar18 = iVar25;
                                        if (uVar14 * 0x48 + -0x48 == iVar18) goto code_r0x08004624;
                                        pcVar31 = pcVar27 + iVar18;
                                        pcVar20 = pcVar31 + 0x50;
                                        uVar30 = regulator_get(pcVar33,pcVar20);
                                        *(pcVar31 + 0x48) = uVar30;
                                        if (uVar30 == 0) goto code_r0x08005068;
                                        if (0xfffffffffffff000 < uVar30) goto code_r0x08005068;
                                        uVar15 = regulator_set_voltage
                                                           (uVar30,*(pcVar27 + iVar18 + 0x70),
                                                            *(pcVar27 + iVar18 + 0x74));
                                        uVar28 = uVar15;
                                        pcVar32 = pcVar32 + 1;
                                        iVar25 = iVar18 + 0x48;
                                    } while (-1 < uVar15);
                                    pcVar20 = pcVar27 + iVar18 + 0x50;
                                }
                                pcVar33 = pcVar32 & 0xffffffff;
                                _printk(0x8000ade,"lt9611uxc_config_vreg",pcVar20);
                                goto code_r0x080050b4;
                            }
                            uVar28 = 0xfffffff4;
                            uVar23 = 0x8001329;
                            goto code_r0x080040c8;
                        }
                    }
                    uVar23 = 0x8000eb3;
                }
                _printk(uVar23,"lt9611uxc_get_dt_supply");
                goto code_r0x08004624;
            }
            _printk(0x8000f44,"lt9611uxc_get_dt_supply",0,arg1_00);
            uVar28 = 0xffffffea;
            uVar23 = 0x8001329;
            pcVar20 = pcVar35;
            goto code_r0x080040c8;
        }
    }
    uVar23 = 0x8000aa8;
    pcVar20 = pcVar35;
code_r0x080040c8:
    do {
        _printk(uVar23,"lt9611uxc_probe");
code_r0x08003fa8:
        while( true ) {
            iVar25 = sp_el0;
            if (*(iVar25 + 0x5e0) == iStack_338) {
                return uVar28;
            }
            __stack_chk_fail();
code_r0x08005068:
            pcVar35 = pcVar32 + 1;
            pcVar36 = pcVar31 + 0x48;
code_r0x08004e34:
            _printk(0x80009a3,"lt9611uxc_config_vreg",pcVar20,uVar28);
            while( true ) {
                uVar14 = pcVar35 - 1;
                pcVar32 = uVar14;
                *pcVar36 = 0;
                if (uVar14 < 0) break;
                regulator_set_load(*(pcVar27 + pcVar32 * 0x48),0);
                pcVar33 = pcVar32;
code_r0x080050b4:
                pcVar36 = pcVar27 + pcVar33 * 0x48;
                regulator_put(*pcVar36);
                pcVar35 = pcVar32;
            }
            pcVar32 = pcVar35;
            arg1_00 = pcStack_378;
            if (uVar28 != 0) break;
code_r0x08004624:
            *(arg1_00 + 0x8c0) = pcVar21;
            *arg1_00 = pcStack_380;
            uVar14 = sym.lt9611uxc_gpio_configure(arg1_00);
            pcVar32 = pcStack_380;
            if (uVar14 != 0) {
                uVar28 = uVar14;
                _printk(0x80007e9,"lt9611uxc_probe");
                goto code_r0x08004ae8;
            }
            if (*(arg1_00 + 0x8a8) < 0x200) {
                uVar23 = gpio_to_desc();
                gpiod_set_raw_value(uVar23,1);
                msleep(0x14);
            }
            pcVar27 = *(arg1_00 + 0x8b8);
            uVar14 = *(arg1_00 + 0x8b4);
            pcVar20 = uVar14;
            if (*(arg1_00 + 0x8ac) < 0x200) {
                uVar23 = gpio_to_desc();
                gpiod_set_raw_value(uVar23,1);
            }
            if (*(arg1_00 + 0x8b0) < 0x200) {
                uVar23 = gpio_to_desc();
                gpiod_set_raw_value(uVar23,1);
            }
            if (0 < uVar14) {
                uVar28 = 0;
                pcVar33 = NULL;
                if ((*pcVar27 != 0) && (*pcVar27 < 0xfffffffffffff001)) {
                    pcVar33 = NULL;
                    pcVar36 = pcVar20 + -1;
                    pcVar31 = 0x3e8;
                    pcVar35 = pcVar27;
                    do {
                        uVar14 = regulator_is_enabled();
                        pcVar20 = uVar14;
                        if ((*(pcVar35 + 0x38) != 0) && (uVar14 == 0)) {
                            iVar25 = *(pcVar35 + 0x38) * 1000;
                            usleep_range_state(iVar25,iVar25,2);
                        }
                        uVar15 = regulator_set_load(*pcVar35,*(pcVar35 + 0x30));
                        if (uVar15 < 0) {
                            uVar28 = uVar15;
                            _printk(0x800067e,"lt9611uxc_enable_vreg",pcVar35 + 8);
                            goto code_r0x08004774;
                        }
                        uVar15 = regulator_enable(*pcVar35);
                        uVar28 = uVar15;
                        if ((*(pcVar35 + 0x3c) != 0) && (uVar14 == 0)) {
                            iVar25 = *(pcVar35 + 0x3c) * 1000;
                            usleep_range_state(iVar25,iVar25,2);
                        }
                        if (uVar15 < 0) {
                            _printk(0x8000697,"lt9611uxc_enable_vreg",pcVar35 + 8);
                            regulator_set_load(*pcVar35,*(pcVar35 + 0x34));
                            goto code_r0x08004774;
                        }
                        if (pcVar36 == pcVar33) goto code_r0x08004778;
                        pcVar35 = pcVar35 + 0x48;
                        pcVar33 = pcVar33 + 1;
                    } while ((*pcVar35 != 0) && (*pcVar35 < 0xfffffffffffff001));
                }
                _printk(0x8000af6,"lt9611uxc_enable_vreg",pcVar27 + (pcVar33 & 0xffffffff) * 0x48 + 8,uVar28);
code_r0x08004774:
                if (pcVar33 != 0) {
                    pcVar20 = pcVar33 + 1;
                    pcVar27 = pcVar27 + pcVar33 * 0x48 + -0x48;
                    do {
                        if (*(pcVar27 + 0x40) != 0) {
                            iVar25 = *(pcVar27 + 0x40) * 1000;
                            usleep_range_state(iVar25,iVar25,2);
                        }
                        regulator_set_load(*pcVar27,*(pcVar27 + 0x34));
                        regulator_disable(*pcVar27);
                        if (*(pcVar27 + 0x44) != 0) {
                            iVar25 = *(pcVar27 + 0x44) * 1000;
                            usleep_range_state(iVar25,iVar25,2);
                        }
                        pcVar20 = pcVar20 + -1;
                        pcVar27 = pcVar27 + -0x48;
                    } while (1 < pcVar20);
                }
code_r0x08004778:
                if (uVar28 == 0) goto code_r0x08004780;
                _printk(0x8001348,"lt9611uxc_probe");
                goto code_r0x08004adc;
            }
code_r0x08004780:
            uVar23 = gpio_to_desc(*(arg1_00 + 0x8a0));
            gpiod_set_raw_value(uVar23,1);
            msleep(0x14);
            uVar23 = gpio_to_desc(*(arg1_00 + 0x8a0));
            gpiod_set_raw_value(uVar23,0);
            msleep(0x14);
            uVar23 = gpio_to_desc(*(arg1_00 + 0x8a0));
            gpiod_set_raw_value(uVar23,1);
            msleep(300);
            sym.lt9611uxc_ctl_en(arg1_00);
            pcVar20 = arg1_00 + 0xb28;
            uVar7 = *(*(arg1_00 + 0x8c0) + 2);
            *(arg1_00 + 0xb28) = 0;
            *(arg1_00 + 0xb30) = 0;
            *(arg1_00 + 0xb38) = 0;
            *(arg1_00 + 0xb40) = 0;
            *(arg1_00 + 0xb48) = 0;
            *(arg1_00 + 0xb50) = 0;
            *(arg1_00 + 0xb58) = 0;
            *(arg1_00 + 0xb60) = 0;
            *(arg1_00 + 0xb68) = 0;
            *(arg1_00 + 0xb70) = 0;
            *(arg1_00 + 0xb78) = 0;
            *(arg1_00 + 0xb80) = 0;
            *(arg1_00 + 0xb88) = 0;
            *(arg1_00 + 0xb90) = 0;
            *(arg1_00 + 0xb98) = 0;
            *(arg1_00 + 0xb28) = 0x81ff;
            *(arg1_00 + 0xba0) = 0;
            uStack_358 = CONCAT62(0x20000,uVar7);
            pcStack_350 = pcVar20;
            iVar12 = i2c_transfer(*(*(arg1_00 + 0x8c0) + 0x18),&uStack_358,1);
            if (iVar12 < 1) {
                _printk(0x8001311,"lt9611uxc_write_byte");
            }
            uVar28 = *(arg1_00 + 0x8c0);
            uVar7 = *(uVar28 + 2);
            pcVar27 = 0x10001;
            uVar9 = *(uVar28 + 2);
            *(arg1_00 + 0xc18) = 0;
            *(arg1_00 + 0xc20) = 0;
            *(arg1_00 + 0xc08) = 0;
            *(arg1_00 + 0xc10) = 0;
            *(arg1_00 + 0xbf8) = 0;
            *(arg1_00 + 0xc00) = 0;
            *(arg1_00 + 0xbe8) = 0;
            *(arg1_00 + 0xbf0) = 0;
            *(arg1_00 + 0xbd8) = 0;
            *(arg1_00 + 0xbe0) = 0;
            *(arg1_00 + 0xbc8) = 0;
            *(arg1_00 + 0xbd0) = 0;
            *(arg1_00 + 3000) = 0;
            *(arg1_00 + 0xbc0) = 0;
            *(arg1_00 + 0xba8) = 0;
            *(arg1_00 + 0xbb0) = 0;
            *(arg1_00 + 0xb98) = 0;
            *(arg1_00 + 0xba0) = 0;
            *(arg1_00 + 0xb88) = 0;
            *(arg1_00 + 0xb90) = 0;
            *(arg1_00 + 0xb78) = 0;
            *(arg1_00 + 0xb80) = 0;
            *(arg1_00 + 0xb68) = 0;
            *(arg1_00 + 0xb70) = 0;
            *(arg1_00 + 0xb58) = 0;
            *(arg1_00 + 0xb60) = 0;
            *(arg1_00 + 0xb48) = 0;
            *(arg1_00 + 0xb50) = 0;
            *(arg1_00 + 0xb38) = 0;
            *(arg1_00 + 0xb40) = 0;
            *pcVar20 = 0;
            *(arg1_00 + 0xb30) = 0;
            uStack_358 = CONCAT62(0x10000,uVar7);
            uStack_348._0_6_ = CONCAT42(0x10001,uVar9);
            uStack_348 = uStack_348;
            pcStack_350 = pcVar20;
            pcStack_340 = arg1_00 + 0xba8;
            iVar12 = i2c_transfer(*(uVar28 + 0x18),&uStack_358,2);
            if (iVar12 != 2) {
code_r0x08004a44:
                _printk(0x80006dd,"lt9611uxc_read");
                _printk(0x8000bcd,"lt9611uxc_read_device_id");
                sym.lt9611uxc_ctl_disable(arg1_00);
                msleep(0x32);
                _printk(0x8000f25,"lt9611uxc_probe");
                uVar28 = 0xffffffff;
                goto code_r0x08004adc;
            }
            uVar28 = *(arg1_00 + 0x8c0);
            uVar7 = *(uVar28 + 2);
            uVar9 = *(uVar28 + 2);
            cVar6 = arg1_00[0xba8];
            *(arg1_00 + 0xc18) = 0;
            *(arg1_00 + 0xc20) = 0;
            *(arg1_00 + 0xc08) = 0;
            *(arg1_00 + 0xc10) = 0;
            *(arg1_00 + 0xbf8) = 0;
            *(arg1_00 + 0xc00) = 0;
            *(arg1_00 + 0xbe8) = 0;
            *(arg1_00 + 0xbf0) = 0;
            *(arg1_00 + 0xbd8) = 0;
            *(arg1_00 + 0xbe0) = 0;
            *(arg1_00 + 0xbc8) = 0;
            *(arg1_00 + 0xbd0) = 0;
            *(arg1_00 + 3000) = 0;
            *(arg1_00 + 0xbc0) = 0;
            *(arg1_00 + 0xba8) = 0;
            *(arg1_00 + 0xbb0) = 0;
            *(arg1_00 + 0xb98) = 0;
            *(arg1_00 + 0xba0) = 0;
            *(arg1_00 + 0xb88) = 0;
            *(arg1_00 + 0xb90) = 0;
            *(arg1_00 + 0xb78) = 0;
            *(arg1_00 + 0xb80) = 0;
            *(arg1_00 + 0xb68) = 0;
            *(arg1_00 + 0xb70) = 0;
            *(arg1_00 + 0xb58) = 0;
            *(arg1_00 + 0xb60) = 0;
            *(arg1_00 + 0xb48) = 0;
            *(arg1_00 + 0xb50) = 0;
            *(arg1_00 + 0xb38) = 0;
            *(arg1_00 + 0xb40) = 0;
            *pcVar20 = 0;
            *(arg1_00 + 0xb30) = 0;
            arg1_00[0xb28] = 0x1;
            uStack_358 = CONCAT62(0x10000,uVar7);
            uStack_348._0_6_ = CONCAT42(0x10001,uVar9);
            uStack_348 = uStack_348;
            pcStack_350 = pcVar20;
            pcStack_340 = arg1_00 + 0xba8;
            iVar12 = i2c_transfer(*(uVar28 + 0x18),&uStack_358,2);
            if (iVar12 != 2) goto code_r0x08004a44;
            _printk(0x80010d6,"lt9611uxc_read_device_id",CONCAT11(cVar6,arg1_00[0xba8]));
            sym.lt9611uxc_ctl_disable(arg1_00);
            msleep(0x32);
            *(pcVar21 + 0xb8) = arg1_00;
            uVar14 = sysfs_create_group(pcStack_380,obj.lt9611uxc_sysfs_attr_grp);
            pcVar20 = arg1_00;
            if (uVar14 != 0) {
                uVar28 = uVar14;
                _printk(0x8000c51,"lt9611uxc_sysfs_init","lt9611uxc_sysfs_init",uVar28);
                uVar23 = 0x8000b76;
                goto code_r0x08004ed0;
            }
            cVar11 = sym.lt9611uxc_get_version(arg1_00);
            if (cVar11 == '\0') {
                uVar14 = request_firmware_nowait
                                   (obj.__this_module,1,"lt9611uxc_fw.bin",pcStack_380,0xcc0,arg1_00,
                                    sym.lt9611uxc_firmware_cb.e58709b06554ea617982e3f2e7a32f4b.cfi_jt);
                uVar28 = uVar14;
                if (uVar14 != 0) {
                    _printk(0x800031b,"lt9611uxc_probe",uVar28);
                    goto code_r0x08004adc;
                }
            }
            else {
                _printk(0x800101c,"lt9611uxc_probe");
                __mutex_init(arg1_00 + 0x130,"&pdata->lock",obj.lt9611uxc_probe.__key);
                __init_waitqueue_head(arg1_00 + 0xa10,"&pdata->edid_wq",obj.lt9611uxc_probe.__key);
                *(arg1_00 + 0x90) = *(pcVar21 + 0x310);
                *(arg1_00 + 0xb0) = reloc.lt9611uxc_bridge_attach.e58709b06554ea617982e3f2e7a32f4b.cfi_jt;
                drm_bridge_add(arg1_00 + 8);
                uVar28 = alloc_workqueue(0x8000499,0xe000a,1,"lt9611uxc_wk");
                *(arg1_00 + 0x9d8) = uVar28;
                pcVar27 = arg1_00;
                if (uVar28 == 0) {
                    _printk(0x8001214,"lt9611uxc_probe");
                    uVar28 = 0;
                    goto code_r0x08004adc;
                }
                *(arg1_00 + 0x9e0) = 0xfffffffe0;
                *(arg1_00 + 0x9e8) = arg1_00 + 0x9e8;
                *(arg1_00 + 0x9f0) = arg1_00 + 0x9e8;
                *(arg1_00 + 0x9f8) = sym.lt9611uxc_hpd_work.cfi_jt;
                gpio_to_desc(*(arg1_00 + 0x89c));
                uVar23 = gpiod_to_irq();
                *(arg1_00 + 0x894) = uVar23;
                uVar14 = request_threaded_irq
                                   (uVar23,0,sym.lt9611uxc_irq_thread_handler.e58709b06554ea617982e3f2e7a32f4b.cfi_jt
                                    ,0x2002,"lt9611uxc_irq",arg1_00);
                uVar28 = uVar14;
                if (uVar14 != 0) {
                    uVar23 = 0x80010b9;
code_r0x08004ed0:
                    _printk(uVar23,"lt9611uxc_probe");
code_r0x08004adc:
                    sym.lt9611uxc_gpio_configure(arg1_00);
code_r0x08004ae8:
                    sym.lt9611uxc_put_dt_supply(pcStack_380,arg1_00);
                }
            }
        }
code_r0x080050d0:
        if (*(pcStack_378 + 0x8b8) != 0) {
            *(pcStack_378 + 0x8b8) = 0;
            *(pcStack_378 + 0x8b4) = 0;
        }
        uVar23 = 0x8001329;
    } while( true );
}


// ===== sym.lt9611uxc_flash_write_config @ 0x08003440 (size 704) =====

uint64_t sym.lt9611uxc_flash_write_config(int64_t arg1)

{
    int16_t iVar1;
    int16_t iVar2;
    char *pcVar3;
    ulong uVar4;
    ulong uVar5;
    code cVar6;
    ushort uVar7;
    uint16_t uVar8;
    ushort uVar9;
    char cVar10;
    int iVar11;
    uint uVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    int iVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    ulong *arg2;
    code *pcVar18;
    code *pcVar19;
    code *arg1_00;
    int64_t iVar20;
    int64_t iVar21;
    ulong uVar22;
    uint64_t uVar23;
    uint64_t *puVar24;
    uint32_t uVar25;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    code *pcVar26;
    ulong *puVar27;
    code *pcVar28;
    code *pcVar29;
    char *pcVar30;
    code *pcVar31;
    code *pcVar32;
    int64_t iVar33;
    char *unaff_x26;
    ulong *puVar34;
    ulong *puVar35;
    ulong unaff_x30;
    uchar auVar36 [16];
    code *pcStack_2d0;
    code *pcStack_2c8;
    uint uStack_2bc;
    ulong uStack_2b8;
    ulong uStack_2b0;
    ulong uStack_2a8;
    code *pcStack_2a0;
    ulong uStack_298;
    code *pcStack_290;
    int64_t iStack_288;
    ulong ***pppuStack_280;
    code *pcStack_278;
    ulong *puStack_270;
    ulong *puStack_268;
    code *pcStack_260;
    int64_t iStack_258;
    char *pcStack_250;
    code *pcStack_248;
    uint64_t uStack_240;
    code *pcStack_238;
    ulong uStack_230;
    code *pcStack_228;
    ulong uStack_218;
    code *pcStack_210;
    int64_t iStack_208;
    ulong ***pppuStack_200;
    code *pcStack_1f8;
    ulong *puStack_1f0;
    uint64_t *puStack_1e0;
    int64_t iStack_1d8;
    ulong uStack_1c8;
    ulong *puStack_1c0;
    int64_t iStack_1b8;
    uchar ***pppuStack_1b0;
    code *pcStack_1a8;
    ulong *puStack_1a0;
    ulong *puStack_198;
    code *pcStack_190;
    uint64_t uStack_188;
    char *pcStack_180;
    code *pcStack_178;
    int64_t iStack_170;
    ulong *puStack_168;
    uint64_t uStack_160;
    uint64_t uStack_158;
    uint32_t uStack_14c;
    uint64_t uStack_148;
    uint32_t uStack_13c;
    ulong uStack_138;
    ulong *puStack_130;
    ulong uStack_128;
    ulong *puStack_120;
    ulong uStack_118;
    ulong uStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    code *pcStack_f8;
    ulong uStack_98;
    ulong *puStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    ulong uStack_48;
    ulong *puStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar33 = sp_el0;
    iStack_38 = *(iVar33 + 0x5e0);
    sym.lt9611uxc_flash_write_en(arg1);
    puVar27 = arg1 + 0xb28;
    uVar7 = *(*(arg1 + 0x8c0) + 2);
    *(arg1 + 0xb28) = 0;
    *(arg1 + 0xb30) = 0;
    *(arg1 + 0xb38) = 0;
    *(arg1 + 0xb40) = 0;
    *(arg1 + 0xb48) = 0;
    *(arg1 + 0xb50) = 0;
    *(arg1 + 0xb58) = 0;
    *(arg1 + 0xb60) = 0;
    *(arg1 + 0xb68) = 0;
    *(arg1 + 0xb70) = 0;
    *(arg1 + 0xb78) = 0;
    *(arg1 + 0xb80) = 0;
    *(arg1 + 0xb88) = 0;
    *(arg1 + 0xb90) = 0;
    *(arg1 + 0xb98) = 0;
    *(arg1 + 0xb28) = 0x80ff;
    *(arg1 + 0xba0) = 0;
    uStack_48 = CONCAT62(0x20000,uVar7);
    puStack_40 = puVar27;
    iVar11 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_48,1);
    if (iVar11 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar8 = *(*(arg1 + 0x8c0) + 2);
    *puVar27 = 0;
    *(arg1 + 0xb30) = 0;
    *(arg1 + 0xb38) = 0;
    *(arg1 + 0xb40) = 0;
    *(arg1 + 0xb48) = 0;
    *(arg1 + 0xb50) = 0;
    *(arg1 + 0xb58) = 0;
    *(arg1 + 0xb60) = 0;
    *(arg1 + 0xb68) = 0;
    *(arg1 + 0xb70) = 0;
    *(arg1 + 0xb78) = 0;
    *(arg1 + 0xb80) = 0;
    *(arg1 + 0xb88) = 0;
    *(arg1 + 0xb90) = 0;
    *(arg1 + 0xb98) = 0;
    *(arg1 + 0xba0) = 0;
    *(arg1 + 0xb28) = 0xdf5e;
    uStack_48._0_4_ = uVar8;
    uStack_48._0_6_ = CONCAT24(2,uStack_48);
    uStack_48 = uStack_48;
    puStack_40 = puVar27;
    iVar11 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_48,1);
    if (iVar11 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar8 = *(*(arg1 + 0x8c0) + 2);
    *puVar27 = 0;
    *(arg1 + 0xb30) = 0;
    *(arg1 + 0xb38) = 0;
    *(arg1 + 0xb40) = 0;
    *(arg1 + 0xb48) = 0;
    *(arg1 + 0xb50) = 0;
    *(arg1 + 0xb58) = 0;
    *(arg1 + 0xb60) = 0;
    *(arg1 + 0xb68) = 0;
    *(arg1 + 0xb70) = 0;
    *(arg1 + 0xb78) = 0;
    *(arg1 + 0xb80) = 0;
    *(arg1 + 0xb88) = 0;
    *(arg1 + 0xb90) = 0;
    *(arg1 + 0xb98) = 0;
    *(arg1 + 0xba0) = 0;
    *(arg1 + 0xb28) = 0x205a;
    uStack_48._0_4_ = uVar8;
    uStack_48._0_6_ = CONCAT24(2,uStack_48);
    uStack_48 = uStack_48;
    puStack_40 = puVar27;
    iVar11 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_48,1);
    if (iVar11 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar8 = *(*(arg1 + 0x8c0) + 2);
    *puVar27 = 0;
    *(arg1 + 0xb30) = 0;
    *(arg1 + 0xb38) = 0;
    *(arg1 + 0xb40) = 0;
    *(arg1 + 0xb48) = 0;
    *(arg1 + 0xb50) = 0;
    *(arg1 + 0xb58) = 0;
    *(arg1 + 0xb60) = 0;
    *(arg1 + 0xb68) = 0;
    *(arg1 + 0xb70) = 0;
    *(arg1 + 0xb78) = 0;
    *(arg1 + 0xb80) = 0;
    *(arg1 + 0xb88) = 0;
    *(arg1 + 0xb90) = 0;
    *(arg1 + 0xb98) = 0;
    *(arg1 + 0xba0) = 0;
    *(arg1 + 0xb28) = 0x5a;
    uStack_48._0_4_ = uVar8;
    uStack_48._0_6_ = CONCAT24(2,uStack_48);
    uStack_48 = uStack_48;
    puStack_40 = puVar27;
    iVar11 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_48,1);
    if (iVar11 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar8 = *(*(arg1 + 0x8c0) + 2);
    *puVar27 = 0;
    *(arg1 + 0xb30) = 0;
    *(arg1 + 0xb38) = 0;
    *(arg1 + 0xb40) = 0;
    *(arg1 + 0xb48) = 0;
    *(arg1 + 0xb50) = 0;
    *(arg1 + 0xb58) = 0;
    *(arg1 + 0xb60) = 0;
    *(arg1 + 0xb68) = 0;
    *(arg1 + 0xb70) = 0;
    *(arg1 + 0xb78) = 0;
    *(arg1 + 0xb80) = 0;
    *(arg1 + 0xb88) = 0;
    *(arg1 + 0xb90) = 0;
    *(arg1 + 0xb98) = 0;
    *(arg1 + 0xba0) = 0;
    *(arg1 + 0xb28) = 0x2158;
    uStack_48._0_4_ = uVar8;
    uStack_48._0_6_ = CONCAT24(2,uStack_48);
    uStack_48 = uStack_48;
    puStack_40 = puVar27;
    uVar16 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_48,1);
    if (uVar16 < 1) {
        uVar16 = _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar33 = sp_el0;
    if (*(iVar33 + 0x5e0) == iStack_38) {
        return uVar16;
    }
    auVar36 = __stack_chk_fail();
    iVar20 = auVar36._0_8_;
    *extraout_x18 = sym.lt9611uxc_flash_write_addr_set;
    pcStack_78 = sym.lt9611uxc_flash_write_addr_set;
    iVar33 = sp_el0;
    iStack_88 = *(iVar33 + 0x5e0);
    puVar27 = iVar20 + 0xb28;
    uVar7 = *(*(iVar20 + 0x8c0) + 2);
    *(iVar20 + 0xb28) = 0;
    *(iVar20 + 0xb30) = 0;
    *(iVar20 + 0xb38) = 0;
    *(iVar20 + 0xb40) = 0;
    *(iVar20 + 0xb48) = 0;
    *(iVar20 + 0xb50) = 0;
    *(iVar20 + 0xb58) = 0;
    *(iVar20 + 0xb60) = 0;
    *(iVar20 + 0xb68) = 0;
    *(iVar20 + 0xb70) = 0;
    *(iVar20 + 0xb78) = 0;
    *(iVar20 + 0xb80) = 0;
    *(iVar20 + 0xb88) = 0;
    *(iVar20 + 0xb28) = 0x5b;
    *(iVar20 + 0xb90) = 0;
    *(iVar20 + 0xb98) = 0;
    *(iVar20 + 0xba0) = 0;
    *(iVar20 + 0xb29) = auVar36[10];
    uStack_98 = CONCAT62(0x20000,uVar7);
    puStack_90 = puVar27;
    puStack_80 = &stack0xffffffffffffffd0;
    iVar11 = i2c_transfer(*(*(iVar20 + 0x8c0) + 0x18),&uStack_98,1);
    if (iVar11 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar8 = *(*(iVar20 + 0x8c0) + 2);
    *puVar27 = 0;
    *(iVar20 + 0xb30) = 0;
    *(iVar20 + 0xb38) = 0;
    *(iVar20 + 0xb40) = 0;
    *(iVar20 + 0xb48) = 0;
    *(iVar20 + 0xb50) = 0;
    *(iVar20 + 0xb58) = 0;
    *(iVar20 + 0xb60) = 0;
    *(iVar20 + 0xb68) = 0;
    *(iVar20 + 0xb70) = 0;
    *(iVar20 + 0xb78) = 0;
    *(iVar20 + 0xb80) = 0;
    *(iVar20 + 0xb88) = 0;
    *(iVar20 + 0xb90) = 0;
    *(iVar20 + 0xb98) = 0;
    *(iVar20 + 0xba0) = 0;
    *(iVar20 + 0xb28) = 0x5c;
    *(iVar20 + 0xb29) = auVar36[9];
    uStack_98._0_4_ = uVar8;
    uStack_98._0_6_ = CONCAT24(2,uStack_98);
    uStack_98 = uStack_98;
    puStack_90 = puVar27;
    iVar11 = i2c_transfer(*(*(iVar20 + 0x8c0) + 0x18),&uStack_98,1);
    if (iVar11 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar8 = *(*(iVar20 + 0x8c0) + 2);
    *puVar27 = 0;
    *(iVar20 + 0xb30) = 0;
    *(iVar20 + 0xb38) = 0;
    *(iVar20 + 0xb40) = 0;
    *(iVar20 + 0xb48) = 0;
    *(iVar20 + 0xb50) = 0;
    *(iVar20 + 0xb58) = 0;
    *(iVar20 + 0xb60) = 0;
    *(iVar20 + 0xb68) = 0;
    *(iVar20 + 0xb70) = 0;
    *(iVar20 + 0xb78) = 0;
    *(iVar20 + 0xb80) = 0;
    *(iVar20 + 0xb88) = 0;
    *(iVar20 + 0xb90) = 0;
    *(iVar20 + 0xb98) = 0;
    *(iVar20 + 0xba0) = 0;
    *(iVar20 + 0xb28) = 0x5d;
    *(iVar20 + 0xb29) = auVar36[8];
    uStack_98._0_4_ = uVar8;
    uStack_98._0_6_ = CONCAT24(2,uStack_98);
    uStack_98 = uStack_98;
    puStack_90 = puVar27;
    iVar11 = i2c_transfer(*(*(iVar20 + 0x8c0) + 0x18),&uStack_98,1);
    if (iVar11 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar8 = *(*(iVar20 + 0x8c0) + 2);
    *puVar27 = 0;
    *(iVar20 + 0xb30) = 0;
    *(iVar20 + 0xb38) = 0;
    *(iVar20 + 0xb40) = 0;
    *(iVar20 + 0xb48) = 0;
    *(iVar20 + 0xb50) = 0;
    *(iVar20 + 0xb58) = 0;
    *(iVar20 + 0xb60) = 0;
    *(iVar20 + 0xb68) = 0;
    *(iVar20 + 0xb70) = 0;
    *(iVar20 + 0xb78) = 0;
    *(iVar20 + 0xb80) = 0;
    *(iVar20 + 0xb88) = 0;
    *(iVar20 + 0xb90) = 0;
    *(iVar20 + 0xb98) = 0;
    *(iVar20 + 0xba0) = 0;
    *(iVar20 + 0xb28) = 0x105a;
    uStack_98._0_4_ = uVar8;
    uStack_98._0_6_ = CONCAT24(2,uStack_98);
    uStack_98 = uStack_98;
    puStack_90 = puVar27;
    iVar11 = i2c_transfer(*(*(iVar20 + 0x8c0) + 0x18),&uStack_98,1);
    if (iVar11 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar13 = 1;
    uVar8 = *(*(iVar20 + 0x8c0) + 2);
    *puVar27 = 0;
    *(iVar20 + 0xb30) = 0;
    *(iVar20 + 0xb38) = 0;
    *(iVar20 + 0xb40) = 0;
    *(iVar20 + 0xb48) = 0;
    *(iVar20 + 0xb50) = 0;
    *(iVar20 + 0xb58) = 0;
    *(iVar20 + 0xb60) = 0;
    *(iVar20 + 0xb68) = 0;
    *(iVar20 + 0xb70) = 0;
    *(iVar20 + 0xb78) = 0;
    *(iVar20 + 0xb80) = 0;
    *(iVar20 + 0xb88) = 0;
    *(iVar20 + 0xb90) = 0;
    *(iVar20 + 0xb98) = 0;
    *(iVar20 + 0xba0) = 0;
    *(iVar20 + 0xb28) = 0x5a;
    uStack_98._0_4_ = uVar8;
    uStack_98._0_6_ = CONCAT24(2,uStack_98);
    uStack_98 = uStack_98;
    puStack_90 = puVar27;
    uVar16 = i2c_transfer(*(*(iVar20 + 0x8c0) + 0x18),&uStack_98);
    if (uVar16 < 1) {
        uVar16 = _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar33 = sp_el0;
    if (*(iVar33 + 0x5e0) == iStack_88) {
        return uVar16;
    }
    auVar36 = __stack_chk_fail();
    pcVar30 = auVar36._8_8_;
    iVar33 = auVar36._0_8_;
    *extraout_x18_00 = sym.lt9611uxc_firmware_write;
    pcStack_f8 = sym.lt9611uxc_firmware_write;
    uVar14 = uVar13 + 0x1f;
    if (-1 < uVar13) {
        uVar14 = uVar13;
    }
    iVar20 = sp_el0;
    iStack_108 = *(iVar20 + 0x5e0);
    uVar16 = uVar14 >> 5;
    uVar25 = uVar13 % 0x20;
    puVar34 = iVar33 + 0xb28;
    puVar35 = iVar33 + 0xb29;
    ppuStack_100 = &puStack_80;
    if (uVar13 < 0x20) {
        pcVar28 = NULL;
        uVar23 = uVar25;
    }
    else {
        pcVar28 = NULL;
        puVar27 = 0x21;
        unaff_x26 = "lt9611uxc_write";
        uStack_14c = uVar14 >> 5;
        uStack_148 = uVar25;
        uStack_13c = uVar13;
        do {
            pcVar3 = pcVar30 + pcVar28;
            sym.lt9611uxc_flash_write_config(iVar33);
            uVar7 = *(*(iVar33 + 0x8c0) + 2);
            *(iVar33 + 0xb28) = 0x59;
            uVar4 = *(pcVar3 + 0x18);
            uVar22 = *pcVar3;
            uVar5 = *(pcVar3 + 8);
            uStack_128 = CONCAT62(0x210000,uVar7);
            *(iVar33 + 0xb39) = *(pcVar3 + 0x10);
            *(iVar33 + 0xb41) = uVar4;
            *puVar35 = uVar22;
            *(iVar33 + 0xb31) = uVar5;
            puStack_120 = puVar34;
            iVar11 = i2c_transfer(*(*(iVar33 + 0x8c0) + 0x18),&uStack_128,1);
            if (iVar11 < 1) {
                _printk(0x8001311,"lt9611uxc_write");
            }
            sym.lt9611uxc_flash_write_addr_set(iVar33,pcVar28 & 0xffffffff);
            msleep(0x14);
            pcVar28 = pcVar28 + 0x20;
            uVar13 = uVar16 - 1;
            uVar16 = uVar13;
        } while (uVar13 != 0);
        pcVar30 = pcVar30 + pcVar28;
        uVar16 = uStack_14c;
        uVar25 = uStack_148;
        uVar23 = uStack_148;
        uVar13 = uStack_13c;
    }
    if (0 < uVar25) {
        uStack_118 = 0xffffffffffffffff;
        uStack_110 = 0xffffffffffffffff;
        uStack_128 = 0xffffffffffffffff;
        puStack_120 = 0xffffffffffffffff;
        memcpy(&uStack_128,pcVar30,uVar23);
        sym.lt9611uxc_flash_write_config(iVar33);
        uVar7 = *(*(iVar33 + 0x8c0) + 2);
        *puVar35 = uStack_128;
        *(iVar33 + 0xb31) = puStack_120;
        *(iVar33 + 0xb39) = uStack_118;
        *(iVar33 + 0xb41) = uStack_110;
        *(iVar33 + 0xb28) = 0x59;
        uStack_138 = CONCAT62(0x210000,uVar7);
        puStack_130 = puVar34;
        iVar11 = i2c_transfer(*(*(iVar33 + 0x8c0) + 0x18),&uStack_138,1);
        if (iVar11 < 1) {
            _printk(0x8001311,"lt9611uxc_write");
        }
        sym.lt9611uxc_flash_write_addr_set(iVar33,pcVar28 & 0xffffffff);
        msleep(0x14);
    }
    msleep(0x14);
    uVar17 = _printk(0x8000dc1,"lt9611uxc_firmware_write",uVar13,uVar16,uVar23 & 0xffffffff);
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_108) {
        return uVar17;
    }
    auVar36 = __stack_chk_fail();
    puVar24 = auVar36._8_8_;
    iVar21 = auVar36._0_8_;
    *extraout_x18_01 = sym.lt9611uxc_firmware_upgrade;
    pcStack_1a8 = sym.lt9611uxc_firmware_upgrade;
    iVar20 = sp_el0;
    iStack_1b8 = *(iVar20 + 0x5e0);
    uVar17 = *puVar24;
    pppuStack_1b0 = &ppuStack_100;
    puStack_1a0 = puVar35;
    puStack_198 = puVar34;
    pcStack_190 = unaff_x26;
    uStack_188 = uVar16;
    pcStack_180 = pcVar30;
    pcStack_178 = pcVar28;
    iStack_170 = iVar33;
    puStack_168 = puVar27;
    uStack_160 = uVar23;
    uStack_158 = uVar13;
    _printk(0x8000c20,"lt9611uxc_firmware_upgrade",uVar17 & 0xffffffff);
    iVar33 = uVar17 << 0x20;
    arg2 = __kmalloc(iVar33 + 0x1f00000000 >> 0x20 & 0xffffffffffffffe0,0xdc0);
    uVar16 = 0;
    puStack_1f0 = puVar27;
    if (arg2 != NULL) {
        iVar20 = 0;
        puVar34 = iVar21 + 0xb28;
        puVar35 = 0x8001730;
        pcVar28 = 0x2;
        pcVar30 = "lt9611uxc_write_byte";
        *(iVar21 + 0xc30) = 1;
        do {
            uVar7 = *(iVar20 + 0x8001730);
            uVar8 = *(*(iVar21 + 0x8c0) + 2);
            *puVar34 = 0;
            *(iVar21 + 0xb30) = 0;
            *(iVar21 + 0xb38) = 0;
            *(iVar21 + 0xb40) = 0;
            *(iVar21 + 0xb48) = 0;
            *(iVar21 + 0xb50) = 0;
            *(iVar21 + 0xb58) = 0;
            *(iVar21 + 0xb60) = 0;
            *(iVar21 + 0xb68) = 0;
            *(iVar21 + 0xb70) = 0;
            *(iVar21 + 0xb78) = 0;
            *(iVar21 + 0xb80) = 0;
            *(iVar21 + 0xb88) = 0;
            *(iVar21 + 0xb90) = 0;
            *(iVar21 + 0xb98) = 0;
            *(iVar21 + 0xba0) = 0;
            *(iVar21 + 0xb28) = uVar7;
            uStack_1c8 = CONCAT24(2,uVar8);
            puStack_1c0 = puVar34;
            iVar11 = i2c_transfer(*(*(iVar21 + 0x8c0) + 0x18),&uStack_1c8,1);
            if (iVar11 < 1) {
                _printk(0x8001311,"lt9611uxc_write_byte");
            }
            iVar20 = iVar20 + 2;
        } while (iVar20 != 0xe);
        sym.lt9611uxc_block_erase(iVar21);
        sym.lt9611uxc_block_erase(iVar21);
        sym.lt9611uxc_firmware_write(iVar21,puVar24[1],uVar17 & 0xffffffff);
        msleep(0x14);
        sym.lt9611uxc_fw_read_back(iVar21,arg2,uVar17);
        iVar11 = bcmp(puVar24[1],arg2,iVar33 >> 0x20);
        uVar22 = 0x8000ff4;
        if (iVar11 != 0) {
            uVar22 = 0x8000a82;
        }
        *(iVar21 + 0xc30) = (iVar11 != 0) << 1;
        _printk(uVar22,"lt9611uxc_firmware_upgrade");
        uVar16 = kfree(arg2);
        unaff_x26 = 0xe;
        puStack_1f0 = arg2;
    }
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_1b8) {
        return uVar16;
    }
    pcVar18 = __stack_chk_fail();
    *extraout_x18_02 = sym.lt9611uxc_edid_en;
    pcStack_1f8 = sym.lt9611uxc_edid_en;
    iVar20 = sp_el0;
    iStack_208 = *(iVar20 + 0x5e0);
    pcVar29 = pcVar18 + 0xb28;
    uVar7 = *(*(pcVar18 + 0x8c0) + 2);
    *(pcVar18 + 0xb28) = 0;
    *(pcVar18 + 0xb30) = 0;
    *(pcVar18 + 0xb38) = 0;
    *(pcVar18 + 0xb40) = 0;
    *(pcVar18 + 0xb48) = 0;
    *(pcVar18 + 0xb50) = 0;
    *(pcVar18 + 0xb58) = 0;
    *(pcVar18 + 0xb60) = 0;
    *(pcVar18 + 0xb68) = 0;
    *(pcVar18 + 0xb70) = 0;
    *(pcVar18 + 0xb78) = 0;
    *(pcVar18 + 0xb80) = 0;
    *(pcVar18 + 0xb88) = 0;
    *(pcVar18 + 0xb90) = 0;
    *(pcVar18 + 0xb98) = 0;
    *(pcVar18 + 0xb28) = 0xb0ff;
    *(pcVar18 + 0xba0) = 0;
    uStack_218 = CONCAT62(0x20000,uVar7);
    pcStack_210 = pcVar29;
    pppuStack_200 = &pppuStack_1b0;
    puStack_1e0 = puVar24;
    iStack_1d8 = iVar21;
    iVar11 = i2c_transfer(*(*(pcVar18 + 0x8c0) + 0x18),&uStack_218,1);
    if (iVar11 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar7 = *(*(pcVar18 + 0x8c0) + 2);
    *pcVar29 = 0;
    *(pcVar18 + 0xb30) = 0;
    *(pcVar18 + 0xb38) = 0;
    *(pcVar18 + 0xb40) = 0;
    *(pcVar18 + 0xb48) = 0;
    *(pcVar18 + 0xb50) = 0;
    *(pcVar18 + 0xb58) = 0;
    *(pcVar18 + 0xb60) = 0;
    *(pcVar18 + 0xb68) = 0;
    *(pcVar18 + 0xb70) = 0;
    *(pcVar18 + 0xb78) = 0;
    *(pcVar18 + 0xb80) = 0;
    *(pcVar18 + 0xb88) = 0;
    *(pcVar18 + 0xb90) = 0;
    *(pcVar18 + 0xb98) = 0;
    *(pcVar18 + 0xba0) = 0;
    *(pcVar18 + 0xb28) = 0x100b;
    uStack_218 = CONCAT62(0x20000,uVar7);
    pcStack_210 = pcVar29;
    uVar16 = i2c_transfer(*(*(pcVar18 + 0x8c0) + 0x18),&uStack_218,1);
    if (uVar16 < 1) {
        uVar16 = _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_208) {
        return uVar16;
    }
    pcVar19 = __stack_chk_fail();
    *extraout_x18_03 = sym.lt9611uxc_probe;
    pcStack_278 = sym.lt9611uxc_probe;
    uStack_230 = 0x200000000;
    iVar20 = sp_el0;
    iStack_288 = *(iVar20 + 0x5e0);
    pppuStack_280 = &pppuStack_200;
    puStack_270 = puVar35;
    puStack_268 = puVar34;
    pcStack_260 = unaff_x26;
    iStack_258 = iVar33;
    pcStack_250 = pcVar30;
    pcStack_248 = pcVar28;
    uStack_240 = uVar17;
    pcStack_238 = pcVar29;
    pcStack_228 = pcVar18;
    if ((pcVar19 == NULL) || (pcVar29 = pcVar19, *(pcVar19 + 0x310) == 0)) {
        _printk(0x8000306,"lt9611uxc_probe");
        uVar16 = 0xffffffea;
        pcVar26 = 0x200000000;
        pcVar19 = pcVar29;
        goto code_r0x08003fa8;
    }
    pcVar18 = *(pcVar19 + 0x18);
    pcVar26 = *(*(pcVar18 + 0x10) + 0x20);
    __cfi_slowpath_diag(0x6871e466cec98751,pcVar26,0x8000270);
    uVar16 = (*pcVar26)(pcVar18);
    if ((uVar16 & 1) == 0) {
        _printk(0x8000c9e,"lt9611uxc_probe");
        uVar16 = 0xffffffed;
        goto code_r0x08003fa8;
    }
    pcVar29 = pcVar19 + 0x20;
    _printk(0x8000cc0,"lt9611uxc_probe","lt9611uxc_probe");
    arg1_00 = devm_kmalloc(pcVar29,0xc38,0xdc0);
    pcVar26 = pcVar29;
    if (arg1_00 == NULL) {
        uVar16 = 0xfffffff4;
        goto code_r0x08003fa8;
    }
    pcVar31 = *(pcVar19 + 0x310);
    iVar33 = of_graph_get_endpoint_by_regs(pcVar31,0,0);
    if (iVar33 == 0) {
        uVar22 = 0x8000d3c;
code_r0x080040b0:
        _printk(uVar22,"lt9611uxc_parse_dt");
        uVar16 = 0xffffffed;
    }
    else {
        uVar16 = of_graph_get_remote_port_parent();
        *(arg1_00 + 0x118) = uVar16;
        if (uVar16 == 0) {
            uVar22 = 0x8000e6b;
            goto code_r0x080040b0;
        }
        uVar13 = of_get_named_gpio_flags(pcVar31,"lt,irq-gpio",0,0);
        uVar16 = 0;
        *(arg1_00 + 0x89c) = uVar13;
        if (0x1ff < uVar13) {
            _printk(0x800083a,"lt9611uxc_parse_dt");
            uVar16 = 0xffffffea;
        }
        uVar13 = of_get_named_gpio_flags(pcVar31,"lt,reset-gpio",0,0);
        *(arg1_00 + 0x8a0) = uVar13;
        if (0x1ff < uVar13) {
            _printk(0x80005ef,"lt9611uxc_parse_dt");
            uVar16 = 0xffffffea;
        }
        uVar12 = of_get_named_gpio_flags(pcVar31,"lt,hdmi-ps-gpio",0,0);
        *(arg1_00 + 0x8a4) = uVar12;
        uVar12 = of_get_named_gpio_flags(pcVar31,"lt,hdmi-en-gpio",0,0);
        *(arg1_00 + 0x8a8) = uVar12;
        uVar12 = of_get_named_gpio_flags(pcVar31,"lt,hdmi-3p3-en",0,0);
        *(arg1_00 + 0x8ac) = uVar12;
        uVar12 = of_get_named_gpio_flags(pcVar31,"lt,hdmi-1p2-en",0,0);
        *(arg1_00 + 0x8b0) = uVar12;
        iVar33 = of_find_property(pcVar31,"lt,ac-mode",0);
        pcStack_2c8 = arg1_00 + 0x8d8;
        arg1_00[0x898] = iVar33 != 0;
        *(arg1_00 + 0x8d8) = pcStack_2c8;
        *(arg1_00 + 0x8e0) = pcStack_2c8;
        uStack_2a8 = uStack_2a8._4_4_ << 0x20;
        uStack_2b8 = 0;
        uStack_2b0 = 0;
        uStack_2bc = 0;
        iVar33 = of_get_child_by_name(pcVar31,"lt,customize-modes");
        if ((iVar33 == 0) && (iVar33 = of_parse_phandle(pcVar31,"lt,customize-modes",0), iVar33 == 0)) {
            _printk(0x8000f8e,"lt9611uxc_parse_dt_modes");
        }
        else {
            iVar20 = of_get_next_child(iVar33,0);
            if (iVar20 == 0) {
                unaff_x26 = NULL;
            }
            else {
                unaff_x26 = NULL;
                uVar13 = 0;
                do {
                    pcVar28 = kmem_cache_alloc_trace(_drm_atomic_helper_connector_destroy_state,0xdc0,0x78);
                    if (pcVar28 == NULL) {
                        _printk(0x8000e88,"lt9611uxc_parse_dt_modes");
                    }
                    else {
                        iVar11 = of_property_read_variable_u32_array(iVar20,"lt,mode-h-active",pcVar28 + 4,1,0);
                        pcVar31 = pcVar28;
                        if (iVar11 < 0) {
                            uVar22 = 0x8000473;
                        }
                        else {
                            iVar11 = of_property_read_variable_u32_array
                                               (iVar20,"lt,mode-h-front-porch",&uStack_2a8,1,0);
                            if (iVar11 < 0) {
                                uVar22 = 0x8001234;
                            }
                            else {
                                iVar11 = of_property_read_variable_u32_array
                                                   (iVar20,"lt,mode-h-pulse-width",&uStack_2b0 + 4,1,0);
                                if (iVar11 < 0) {
                                    uVar22 = 0x8000cd5;
                                }
                                else {
                                    iVar11 = of_property_read_variable_u32_array
                                                       (iVar20,"lt,mode-h-back-porch",&uStack_2b0,1,0);
                                    if (iVar11 < 0) {
                                        uVar22 = 0x8001047;
                                    }
                                    else {
                                        iVar21 = of_find_property(iVar20,"lt,mode-h-active-high",0);
                                        iVar11 = of_property_read_variable_u32_array
                                                           (iVar20,"lt,mode-v-active",pcVar28 + 0xe,1,0);
                                        if (iVar11 < 0) {
                                            uVar22 = 0x8000d5d;
                                        }
                                        else {
                                            iVar11 = of_property_read_variable_u32_array
                                                               (iVar20,"lt,mode-v-front-porch",&uStack_2b8 + 4,1,0);
                                            if (iVar11 < 0) {
                                                uVar22 = 0x800094e;
                                            }
                                            else {
                                                iVar11 = of_property_read_variable_u32_array
                                                                   (iVar20,"lt,mode-v-pulse-width",&uStack_2b8,1,0);
                                                if (iVar11 < 0) {
                                                    uVar22 = 0x8000757;
                                                }
                                                else {
                                                    iVar11 = of_property_read_variable_u32_array
                                                                       (iVar20,"lt,mode-v-back-porch",&uStack_2bc,1,
                                                                        0);
                                                    if (iVar11 < 0) {
                                                        uVar22 = 0x8000979;
                                                    }
                                                    else {
                                                        pcVar26 = of_find_property(iVar20,"lt,mode-v-active-high",0);
                                                        iVar11 = of_property_read_variable_u32_array
                                                                           (iVar20,"lt,mode-clock-in-khz",pcVar28,1,
                                                                            0);
                                                        if (-1 < iVar11) {
                                                            iVar1 = *(pcVar28 + 4) + uStack_2a8 + uStack_2b0._4_2_;
                                                            puVar27 = *(arg1_00 + 0x8e0);
                                                            *(pcVar28 + 6) = *(pcVar28 + 4) + uStack_2a8;
                                                            *(pcVar28 + 8) = iVar1;
                                                            iVar2 = *(pcVar28 + 0xe) + uStack_2b8._4_2_ + uStack_2b8;
                                                            *(pcVar28 + 0x10) = *(pcVar28 + 0xe) + uStack_2b8._4_2_;
                                                            *(pcVar28 + 10) = iVar1 + uStack_2b0;
                                                            uVar14 = 1;
                                                            if (iVar21 == 0) {
                                                                uVar14 = 2;
                                                            }
                                                            uVar25 = 8;
                                                            if (pcVar26 != NULL) {
                                                                uVar25 = 4;
                                                            }
                                                            pcVar26 = pcVar28 + 0x40;
                                                            uVar13 = uVar14 | uVar13 | uVar25;
                                                            *(pcVar28 + 0x12) = iVar2;
                                                            *(pcVar28 + 0x14) = iVar2 + uStack_2bc;
                                                            *(pcVar28 + 0x18) = uVar13;
                                                            uVar23 = __list_add_valid(pcVar26,puVar27,pcStack_2c8);
                                                            if ((uVar23 & 1) != 0) {
                                                                *(arg1_00 + 0x8e0) = pcVar26;
                                                                *(pcVar28 + 0x40) = pcStack_2c8;
                                                                *(pcVar28 + 0x48) = puVar27;
                                                                *puVar27 = pcVar26;
                                                            }
                                                            unaff_x26 = unaff_x26 + 1;
                                                            drm_mode_set_name(pcVar28);
                                                            goto code_r0x080042cc;
                                                        }
                                                        uVar22 = 0x8000d15;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        _printk(uVar22,"lt9611uxc_parse_dt_modes",iVar11);
                        kfree(pcVar28);
                    }
code_r0x080042cc:
                    iVar20 = of_get_next_child(iVar33,iVar20);
                } while (iVar20 != 0);
            }
            *(arg1_00 + 0x8d0) = unaff_x26;
            pcVar28 = arg1_00;
        }
        pcStack_2d0 = pcVar29;
        if (uVar16 == 0) {
            uStack_2b0 = uStack_2b0 & 0xffffffff;
            if (pcVar29 != NULL) {
                uVar16 = *(pcVar19 + 0x310);
                *(arg1_00 + 0x8b4) = 0;
                pcVar18 = of_get_child_by_name(uVar16,"lt,supply-entries");
                if (pcVar18 == NULL) {
                    uVar22 = 0x80004ab;
                    pcVar18 = pcVar31;
                }
                else {
                    iVar33 = of_get_next_available_child(pcVar18,0);
                    if (iVar33 == 0) {
                        *(arg1_00 + 0x8b4) = 0;
                    }
                    else {
                        pcVar26 = NULL;
                        do {
                            uVar13 = pcVar26 + 1;
                            pcVar26 = uVar13;
                            iVar33 = of_get_next_available_child(pcVar18,iVar33);
                        } while (iVar33 != 0);
                        *(arg1_00 + 0x8b4) = uVar13;
                        if (uVar13 != 0) {
                            uVar16 = devm_kmalloc(pcVar29,pcVar26 * 0x48,0xdc0);
                            *(arg1_00 + 0x8b8) = uVar16;
                            pcStack_2c8 = arg1_00;
                            if (uVar16 != 0) {
                                pcVar26 = of_get_next_available_child(pcVar18,0);
                                if (pcVar26 != NULL) {
                                    unaff_x26 = NULL;
                                    do {
                                        uStack_2a8 = 0;
                                        uVar13 = of_property_read_string(pcVar26,"lt,supply-name",&uStack_2a8);
                                        if (uVar13 != 0) {
                                            uVar22 = 0x800035d;
code_r0x08004e70:
                                            uVar16 = uVar13;
                                            _printk(uVar22,"lt9611uxc_get_dt_supply",uVar16);
                                            goto code_r0x080050d0;
                                        }
                                        iVar11 = unaff_x26;
                                        strscpy(*(arg1_00 + 0x8b8) + iVar11 * 0x48 + 8,uStack_2a8,0x20);
                                        uVar13 = of_property_read_variable_u32_array
                                                           (pcVar26,"lt,supply-min-voltage",&uStack_2b0 + 4,1,0);
                                        if (uVar13 < 0) {
                                            uVar22 = 0x80004ca;
                                            goto code_r0x08004e70;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar11 * 0x48 + 0x28) = uStack_2b0._4_4_;
                                        uVar13 = of_property_read_variable_u32_array
                                                           (pcVar26,"lt,supply-max-voltage",&uStack_2b0 + 4,1,0);
                                        if (uVar13 < 0) {
                                            uVar16 = uVar13;
                                            _printk(0x8000598,"lt9611uxc_get_dt_supply",uVar16);
                                            pcVar28 = arg1_00;
                                            goto code_r0x080050d0;
                                        }
                                        iVar33 = iVar11 * 0x48;
                                        *(*(arg1_00 + 0x8b8) + iVar33 + 0x2c) = uStack_2b0._4_4_;
                                        iVar15 = of_property_read_variable_u32_array
                                                           (pcVar26,"lt,supply-enable-load",&uStack_2b0 + 4,1,0);
                                        uVar12 = 0;
                                        if (-1 < iVar15) {
                                            uVar12 = uStack_2b0._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar33 + 0x30) = uVar12;
                                        iVar15 = of_property_read_variable_u32_array
                                                           (pcVar26,"lt,supply-disable-load",&uStack_2b0 + 4,1,0);
                                        uVar12 = 0;
                                        if (-1 < iVar15) {
                                            uVar12 = uStack_2b0._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar33 + 0x34) = uVar12;
                                        iVar15 = of_property_read_variable_u32_array
                                                           (pcVar26,"lt,supply-pre-on-sleep",&uStack_2b0 + 4,1,0);
                                        uVar12 = 0;
                                        if (-1 < iVar15) {
                                            uVar12 = uStack_2b0._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar33 + 0x38) = uVar12;
                                        iVar15 = of_property_read_variable_u32_array
                                                           (pcVar26,"lt,supply-pre-off-sleep",&uStack_2b0 + 4,1,0);
                                        uVar12 = 0;
                                        if (-1 < iVar15) {
                                            uVar12 = uStack_2b0._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar33 + 0x40) = uVar12;
                                        iVar15 = of_property_read_variable_u32_array
                                                           (pcVar26,"lt,supply-post-on-sleep",&uStack_2b0 + 4,1,0);
                                        uVar12 = 0;
                                        if (-1 < iVar15) {
                                            uVar12 = uStack_2b0._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar33 + 0x3c) = uVar12;
                                        iVar15 = of_property_read_variable_u32_array
                                                           (pcVar26,"lt,supply-post-off-sleep",&uStack_2b0 + 4,1,0);
                                        unaff_x26 = iVar11 + 1;
                                        uVar12 = 0;
                                        if (-1 < iVar15) {
                                            uVar12 = uStack_2b0._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar33 + 0x44) = uVar12;
                                        pcVar26 = of_get_next_available_child(pcVar18,pcVar26);
                                        pcVar28 = arg1_00;
                                    } while (pcVar26 != NULL);
                                }
                                pcVar26 = *(arg1_00 + 0x8b8);
                                if (pcVar26 == NULL) goto code_r0x08004624;
                                uVar13 = *(arg1_00 + 0x8b4);
                                if (uVar13 < 1) goto code_r0x08004624;
                                pcVar18 = pcVar26 + 8;
                                uVar23 = regulator_get(pcVar29,pcVar18);
                                uVar16 = 0;
                                pcVar31 = NULL;
                                *pcVar26 = uVar23;
                                pcVar32 = pcVar26;
                                if (uVar23 == 0) goto code_r0x08004e34;
                                if (0xfffffffffffff000 < uVar23) goto code_r0x08004e34;
                                uVar14 = regulator_set_voltage(uVar23,*(pcVar26 + 0x28),*(pcVar26 + 0x2c));
                                uVar16 = uVar14;
                                if (uVar14 < 0) {
                                    pcVar28 = NULL;
                                }
                                else {
                                    pcVar28 = NULL;
                                    iVar33 = 0;
                                    do {
                                        iVar20 = iVar33;
                                        if (uVar13 * 0x48 + -0x48 == iVar20) goto code_r0x08004624;
                                        unaff_x26 = pcVar26 + iVar20;
                                        pcVar18 = unaff_x26 + 0x50;
                                        uVar23 = regulator_get(pcVar29,pcVar18);
                                        *(unaff_x26 + 0x48) = uVar23;
                                        if (uVar23 == 0) goto code_r0x08005068;
                                        if (0xfffffffffffff000 < uVar23) goto code_r0x08005068;
                                        uVar14 = regulator_set_voltage
                                                           (uVar23,*(pcVar26 + iVar20 + 0x70),
                                                            *(pcVar26 + iVar20 + 0x74));
                                        uVar16 = uVar14;
                                        pcVar28 = pcVar28 + 1;
                                        iVar33 = iVar20 + 0x48;
                                    } while (-1 < uVar14);
                                    pcVar18 = pcVar26 + iVar20 + 0x50;
                                }
                                pcVar29 = pcVar28 & 0xffffffff;
                                _printk(0x8000ade,"lt9611uxc_config_vreg",pcVar18);
                                goto code_r0x080050b4;
                            }
                            uVar16 = 0xfffffff4;
                            uVar22 = 0x8001329;
                            goto code_r0x080040c8;
                        }
                    }
                    uVar22 = 0x8000eb3;
                }
                _printk(uVar22,"lt9611uxc_get_dt_supply");
                goto code_r0x08004624;
            }
            _printk(0x8000f44,"lt9611uxc_get_dt_supply",0,arg1_00);
            uVar16 = 0xffffffea;
            uVar22 = 0x8001329;
            pcVar18 = pcVar31;
            goto code_r0x080040c8;
        }
    }
    uVar22 = 0x8000aa8;
    pcVar18 = pcVar31;
code_r0x080040c8:
    do {
        _printk(uVar22,"lt9611uxc_probe");
code_r0x08003fa8:
        while( true ) {
            iVar33 = sp_el0;
            if (*(iVar33 + 0x5e0) == iStack_288) {
                return uVar16;
            }
            __stack_chk_fail();
code_r0x08005068:
            pcVar31 = pcVar28 + 1;
            pcVar32 = unaff_x26 + 0x48;
code_r0x08004e34:
            _printk(0x80009a3,"lt9611uxc_config_vreg",pcVar18,uVar16);
            while( true ) {
                uVar13 = pcVar31 - 1;
                pcVar28 = uVar13;
                *pcVar32 = 0;
                if (uVar13 < 0) break;
                regulator_set_load(*(pcVar26 + pcVar28 * 0x48),0);
                pcVar29 = pcVar28;
code_r0x080050b4:
                pcVar32 = pcVar26 + pcVar29 * 0x48;
                regulator_put(*pcVar32);
                pcVar31 = pcVar28;
            }
            pcVar28 = pcVar31;
            arg1_00 = pcStack_2c8;
            if (uVar16 != 0) break;
code_r0x08004624:
            *(arg1_00 + 0x8c0) = pcVar19;
            *arg1_00 = pcStack_2d0;
            uVar13 = sym.lt9611uxc_gpio_configure(arg1_00);
            pcVar28 = pcStack_2d0;
            if (uVar13 != 0) {
                uVar16 = uVar13;
                _printk(0x80007e9,"lt9611uxc_probe");
                goto code_r0x08004ae8;
            }
            if (*(arg1_00 + 0x8a8) < 0x200) {
                uVar22 = gpio_to_desc();
                gpiod_set_raw_value(uVar22,1);
                msleep(0x14);
            }
            pcVar26 = *(arg1_00 + 0x8b8);
            uVar13 = *(arg1_00 + 0x8b4);
            pcVar18 = uVar13;
            if (*(arg1_00 + 0x8ac) < 0x200) {
                uVar22 = gpio_to_desc();
                gpiod_set_raw_value(uVar22,1);
            }
            if (*(arg1_00 + 0x8b0) < 0x200) {
                uVar22 = gpio_to_desc();
                gpiod_set_raw_value(uVar22,1);
            }
            if (0 < uVar13) {
                uVar16 = 0;
                pcVar29 = NULL;
                if ((*pcVar26 != 0) && (*pcVar26 < 0xfffffffffffff001)) {
                    pcVar29 = NULL;
                    pcVar32 = pcVar18 + -1;
                    unaff_x26 = 0x3e8;
                    pcVar31 = pcVar26;
                    do {
                        uVar13 = regulator_is_enabled();
                        pcVar18 = uVar13;
                        if ((*(pcVar31 + 0x38) != 0) && (uVar13 == 0)) {
                            iVar33 = *(pcVar31 + 0x38) * 1000;
                            usleep_range_state(iVar33,iVar33,2);
                        }
                        uVar14 = regulator_set_load(*pcVar31,*(pcVar31 + 0x30));
                        if (uVar14 < 0) {
                            uVar16 = uVar14;
                            _printk(0x800067e,"lt9611uxc_enable_vreg",pcVar31 + 8);
                            goto code_r0x08004774;
                        }
                        uVar14 = regulator_enable(*pcVar31);
                        uVar16 = uVar14;
                        if ((*(pcVar31 + 0x3c) != 0) && (uVar13 == 0)) {
                            iVar33 = *(pcVar31 + 0x3c) * 1000;
                            usleep_range_state(iVar33,iVar33,2);
                        }
                        if (uVar14 < 0) {
                            _printk(0x8000697,"lt9611uxc_enable_vreg",pcVar31 + 8);
                            regulator_set_load(*pcVar31,*(pcVar31 + 0x34));
                            goto code_r0x08004774;
                        }
                        if (pcVar32 == pcVar29) goto code_r0x08004778;
                        pcVar31 = pcVar31 + 0x48;
                        pcVar29 = pcVar29 + 1;
                    } while ((*pcVar31 != 0) && (*pcVar31 < 0xfffffffffffff001));
                }
                _printk(0x8000af6,"lt9611uxc_enable_vreg",pcVar26 + (pcVar29 & 0xffffffff) * 0x48 + 8,uVar16);
code_r0x08004774:
                if (pcVar29 != 0) {
                    pcVar18 = pcVar29 + 1;
                    pcVar26 = pcVar26 + pcVar29 * 0x48 + -0x48;
                    do {
                        if (*(pcVar26 + 0x40) != 0) {
                            iVar33 = *(pcVar26 + 0x40) * 1000;
                            usleep_range_state(iVar33,iVar33,2);
                        }
                        regulator_set_load(*pcVar26,*(pcVar26 + 0x34));
                        regulator_disable(*pcVar26);
                        if (*(pcVar26 + 0x44) != 0) {
                            iVar33 = *(pcVar26 + 0x44) * 1000;
                            usleep_range_state(iVar33,iVar33,2);
                        }
                        pcVar18 = pcVar18 + -1;
                        pcVar26 = pcVar26 + -0x48;
                    } while (1 < pcVar18);
                }
code_r0x08004778:
                if (uVar16 == 0) goto code_r0x08004780;
                _printk(0x8001348,"lt9611uxc_probe");
                goto code_r0x08004adc;
            }
code_r0x08004780:
            uVar22 = gpio_to_desc(*(arg1_00 + 0x8a0));
            gpiod_set_raw_value(uVar22,1);
            msleep(0x14);
            uVar22 = gpio_to_desc(*(arg1_00 + 0x8a0));
            gpiod_set_raw_value(uVar22,0);
            msleep(0x14);
            uVar22 = gpio_to_desc(*(arg1_00 + 0x8a0));
            gpiod_set_raw_value(uVar22,1);
            msleep(300);
            sym.lt9611uxc_ctl_en(arg1_00);
            pcVar18 = arg1_00 + 0xb28;
            uVar7 = *(*(arg1_00 + 0x8c0) + 2);
            *(arg1_00 + 0xb28) = 0;
            *(arg1_00 + 0xb30) = 0;
            *(arg1_00 + 0xb38) = 0;
            *(arg1_00 + 0xb40) = 0;
            *(arg1_00 + 0xb48) = 0;
            *(arg1_00 + 0xb50) = 0;
            *(arg1_00 + 0xb58) = 0;
            *(arg1_00 + 0xb60) = 0;
            *(arg1_00 + 0xb68) = 0;
            *(arg1_00 + 0xb70) = 0;
            *(arg1_00 + 0xb78) = 0;
            *(arg1_00 + 0xb80) = 0;
            *(arg1_00 + 0xb88) = 0;
            *(arg1_00 + 0xb90) = 0;
            *(arg1_00 + 0xb98) = 0;
            *(arg1_00 + 0xb28) = 0x81ff;
            *(arg1_00 + 0xba0) = 0;
            uStack_2a8 = CONCAT62(0x20000,uVar7);
            pcStack_2a0 = pcVar18;
            iVar11 = i2c_transfer(*(*(arg1_00 + 0x8c0) + 0x18),&uStack_2a8,1);
            if (iVar11 < 1) {
                _printk(0x8001311,"lt9611uxc_write_byte");
            }
            uVar16 = *(arg1_00 + 0x8c0);
            uVar7 = *(uVar16 + 2);
            pcVar26 = 0x10001;
            uVar9 = *(uVar16 + 2);
            *(arg1_00 + 0xc18) = 0;
            *(arg1_00 + 0xc20) = 0;
            *(arg1_00 + 0xc08) = 0;
            *(arg1_00 + 0xc10) = 0;
            *(arg1_00 + 0xbf8) = 0;
            *(arg1_00 + 0xc00) = 0;
            *(arg1_00 + 0xbe8) = 0;
            *(arg1_00 + 0xbf0) = 0;
            *(arg1_00 + 0xbd8) = 0;
            *(arg1_00 + 0xbe0) = 0;
            *(arg1_00 + 0xbc8) = 0;
            *(arg1_00 + 0xbd0) = 0;
            *(arg1_00 + 3000) = 0;
            *(arg1_00 + 0xbc0) = 0;
            *(arg1_00 + 0xba8) = 0;
            *(arg1_00 + 0xbb0) = 0;
            *(arg1_00 + 0xb98) = 0;
            *(arg1_00 + 0xba0) = 0;
            *(arg1_00 + 0xb88) = 0;
            *(arg1_00 + 0xb90) = 0;
            *(arg1_00 + 0xb78) = 0;
            *(arg1_00 + 0xb80) = 0;
            *(arg1_00 + 0xb68) = 0;
            *(arg1_00 + 0xb70) = 0;
            *(arg1_00 + 0xb58) = 0;
            *(arg1_00 + 0xb60) = 0;
            *(arg1_00 + 0xb48) = 0;
            *(arg1_00 + 0xb50) = 0;
            *(arg1_00 + 0xb38) = 0;
            *(arg1_00 + 0xb40) = 0;
            *pcVar18 = 0;
            *(arg1_00 + 0xb30) = 0;
            uStack_2a8 = CONCAT62(0x10000,uVar7);
            uStack_298._0_6_ = CONCAT42(0x10001,uVar9);
            uStack_298 = uStack_298;
            pcStack_2a0 = pcVar18;
            pcStack_290 = arg1_00 + 0xba8;
            iVar11 = i2c_transfer(*(uVar16 + 0x18),&uStack_2a8,2);
            if (iVar11 != 2) {
code_r0x08004a44:
                _printk(0x80006dd,"lt9611uxc_read");
                _printk(0x8000bcd,"lt9611uxc_read_device_id");
                sym.lt9611uxc_ctl_disable(arg1_00);
                msleep(0x32);
                _printk(0x8000f25,"lt9611uxc_probe");
                uVar16 = 0xffffffff;
                goto code_r0x08004adc;
            }
            uVar16 = *(arg1_00 + 0x8c0);
            uVar7 = *(uVar16 + 2);
            uVar9 = *(uVar16 + 2);
            cVar6 = arg1_00[0xba8];
            *(arg1_00 + 0xc18) = 0;
            *(arg1_00 + 0xc20) = 0;
            *(arg1_00 + 0xc08) = 0;
            *(arg1_00 + 0xc10) = 0;
            *(arg1_00 + 0xbf8) = 0;
            *(arg1_00 + 0xc00) = 0;
            *(arg1_00 + 0xbe8) = 0;
            *(arg1_00 + 0xbf0) = 0;
            *(arg1_00 + 0xbd8) = 0;
            *(arg1_00 + 0xbe0) = 0;
            *(arg1_00 + 0xbc8) = 0;
            *(arg1_00 + 0xbd0) = 0;
            *(arg1_00 + 3000) = 0;
            *(arg1_00 + 0xbc0) = 0;
            *(arg1_00 + 0xba8) = 0;
            *(arg1_00 + 0xbb0) = 0;
            *(arg1_00 + 0xb98) = 0;
            *(arg1_00 + 0xba0) = 0;
            *(arg1_00 + 0xb88) = 0;
            *(arg1_00 + 0xb90) = 0;
            *(arg1_00 + 0xb78) = 0;
            *(arg1_00 + 0xb80) = 0;
            *(arg1_00 + 0xb68) = 0;
            *(arg1_00 + 0xb70) = 0;
            *(arg1_00 + 0xb58) = 0;
            *(arg1_00 + 0xb60) = 0;
            *(arg1_00 + 0xb48) = 0;
            *(arg1_00 + 0xb50) = 0;
            *(arg1_00 + 0xb38) = 0;
            *(arg1_00 + 0xb40) = 0;
            *pcVar18 = 0;
            *(arg1_00 + 0xb30) = 0;
            arg1_00[0xb28] = 0x1;
            uStack_2a8 = CONCAT62(0x10000,uVar7);
            uStack_298._0_6_ = CONCAT42(0x10001,uVar9);
            uStack_298 = uStack_298;
            pcStack_2a0 = pcVar18;
            pcStack_290 = arg1_00 + 0xba8;
            iVar11 = i2c_transfer(*(uVar16 + 0x18),&uStack_2a8,2);
            if (iVar11 != 2) goto code_r0x08004a44;
            _printk(0x80010d6,"lt9611uxc_read_device_id",CONCAT11(cVar6,arg1_00[0xba8]));
            sym.lt9611uxc_ctl_disable(arg1_00);
            msleep(0x32);
            *(pcVar19 + 0xb8) = arg1_00;
            uVar13 = sysfs_create_group(pcStack_2d0,obj.lt9611uxc_sysfs_attr_grp);
            pcVar18 = arg1_00;
            if (uVar13 != 0) {
                uVar16 = uVar13;
                _printk(0x8000c51,"lt9611uxc_sysfs_init","lt9611uxc_sysfs_init",uVar16);
                uVar22 = 0x8000b76;
                goto code_r0x08004ed0;
            }
            cVar10 = sym.lt9611uxc_get_version(arg1_00);
            if (cVar10 == '\0') {
                uVar13 = request_firmware_nowait
                                   (obj.__this_module,1,"lt9611uxc_fw.bin",pcStack_2d0,0xcc0,arg1_00,
                                    sym.lt9611uxc_firmware_cb.e58709b06554ea617982e3f2e7a32f4b.cfi_jt);
                uVar16 = uVar13;
                if (uVar13 != 0) {
                    _printk(0x800031b,"lt9611uxc_probe",uVar16);
                    goto code_r0x08004adc;
                }
            }
            else {
                _printk(0x800101c,"lt9611uxc_probe");
                __mutex_init(arg1_00 + 0x130,"&pdata->lock",obj.lt9611uxc_probe.__key);
                __init_waitqueue_head(arg1_00 + 0xa10,"&pdata->edid_wq",obj.lt9611uxc_probe.__key);
                *(arg1_00 + 0x90) = *(pcVar19 + 0x310);
                *(arg1_00 + 0xb0) = reloc.lt9611uxc_bridge_attach.e58709b06554ea617982e3f2e7a32f4b.cfi_jt;
                drm_bridge_add(arg1_00 + 8);
                uVar16 = alloc_workqueue(0x8000499,0xe000a,1,"lt9611uxc_wk");
                *(arg1_00 + 0x9d8) = uVar16;
                pcVar26 = arg1_00;
                if (uVar16 == 0) {
                    _printk(0x8001214,"lt9611uxc_probe");
                    uVar16 = 0;
                    goto code_r0x08004adc;
                }
                *(arg1_00 + 0x9e0) = 0xfffffffe0;
                *(arg1_00 + 0x9e8) = arg1_00 + 0x9e8;
                *(arg1_00 + 0x9f0) = arg1_00 + 0x9e8;
                *(arg1_00 + 0x9f8) = sym.lt9611uxc_hpd_work.cfi_jt;
                gpio_to_desc(*(arg1_00 + 0x89c));
                uVar22 = gpiod_to_irq();
                *(arg1_00 + 0x894) = uVar22;
                uVar13 = request_threaded_irq
                                   (uVar22,0,sym.lt9611uxc_irq_thread_handler.e58709b06554ea617982e3f2e7a32f4b.cfi_jt
                                    ,0x2002,"lt9611uxc_irq",arg1_00);
                uVar16 = uVar13;
                if (uVar13 != 0) {
                    uVar22 = 0x80010b9;
code_r0x08004ed0:
                    _printk(uVar22,"lt9611uxc_probe");
code_r0x08004adc:
                    sym.lt9611uxc_gpio_configure(arg1_00);
code_r0x08004ae8:
                    sym.lt9611uxc_put_dt_supply(pcStack_2d0,arg1_00);
                }
            }
        }
code_r0x080050d0:
        if (*(pcStack_2c8 + 0x8b8) != 0) {
            *(pcStack_2c8 + 0x8b8) = 0;
            *(pcStack_2c8 + 0x8b4) = 0;
        }
        uVar22 = 0x8001329;
    } while( true );
}


// ===== sym.lt9611uxc_flash_write_addr_set @ 0x08003700 (size 724) =====

uint64_t sym.lt9611uxc_flash_write_addr_set(int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    int16_t iVar2;
    char *pcVar3;
    ulong uVar4;
    ulong uVar5;
    code cVar6;
    ushort uVar7;
    uint16_t uVar8;
    ushort uVar9;
    char cVar10;
    int iVar11;
    uint uVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    int iVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    ulong *arg2_00;
    code *pcVar18;
    code *pcVar19;
    code *arg1_00;
    int64_t iVar20;
    int64_t iVar21;
    ulong uVar22;
    uint64_t uVar23;
    uint64_t *puVar24;
    uint32_t uVar25;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    code *pcVar26;
    ulong *puVar27;
    code *pcVar28;
    code *pcVar29;
    char *pcVar30;
    code *pcVar31;
    code *pcVar32;
    int64_t iVar33;
    char *unaff_x26;
    ulong *puVar34;
    ulong *puVar35;
    ulong unaff_x30;
    uchar auVar36 [16];
    code *pcStack_280;
    code *pcStack_278;
    uint uStack_26c;
    ulong uStack_268;
    ulong uStack_260;
    ulong uStack_258;
    code *pcStack_250;
    ulong uStack_248;
    code *pcStack_240;
    int64_t iStack_238;
    ulong ***pppuStack_230;
    code *pcStack_228;
    ulong *puStack_220;
    ulong *puStack_218;
    code *pcStack_210;
    int64_t iStack_208;
    char *pcStack_200;
    code *pcStack_1f8;
    uint64_t uStack_1f0;
    code *pcStack_1e8;
    ulong uStack_1e0;
    code *pcStack_1d8;
    ulong uStack_1c8;
    code *pcStack_1c0;
    int64_t iStack_1b8;
    uchar ***pppuStack_1b0;
    code *pcStack_1a8;
    ulong *puStack_1a0;
    uint64_t *puStack_190;
    int64_t iStack_188;
    ulong uStack_178;
    ulong *puStack_170;
    int64_t iStack_168;
    uchar **ppuStack_160;
    code *pcStack_158;
    ulong *puStack_150;
    ulong *puStack_148;
    code *pcStack_140;
    uint64_t uStack_138;
    char *pcStack_130;
    code *pcStack_128;
    int64_t iStack_120;
    ulong *puStack_118;
    uint64_t uStack_110;
    uint64_t uStack_108;
    uint32_t uStack_fc;
    uint64_t uStack_f8;
    uint32_t uStack_ec;
    ulong uStack_e8;
    ulong *puStack_e0;
    ulong uStack_d8;
    ulong *puStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    ulong uStack_48;
    ulong *puStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar33 = sp_el0;
    iStack_38 = *(iVar33 + 0x5e0);
    puVar27 = arg1 + 0xb28;
    uVar7 = *(*(arg1 + 0x8c0) + 2);
    *(arg1 + 0xb28) = 0;
    *(arg1 + 0xb30) = 0;
    *(arg1 + 0xb38) = 0;
    *(arg1 + 0xb40) = 0;
    *(arg1 + 0xb48) = 0;
    *(arg1 + 0xb50) = 0;
    *(arg1 + 0xb58) = 0;
    *(arg1 + 0xb60) = 0;
    *(arg1 + 0xb68) = 0;
    *(arg1 + 0xb70) = 0;
    *(arg1 + 0xb78) = 0;
    *(arg1 + 0xb80) = 0;
    *(arg1 + 0xb88) = 0;
    *(arg1 + 0xb28) = 0x5b;
    *(arg1 + 0xb90) = 0;
    *(arg1 + 0xb98) = 0;
    *(arg1 + 0xba0) = 0;
    *(arg1 + 0xb29) = arg2 >> 0x10;
    uStack_48 = CONCAT62(0x20000,uVar7);
    puStack_40 = puVar27;
    iVar11 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_48,1);
    if (iVar11 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar8 = *(*(arg1 + 0x8c0) + 2);
    *puVar27 = 0;
    *(arg1 + 0xb30) = 0;
    *(arg1 + 0xb38) = 0;
    *(arg1 + 0xb40) = 0;
    *(arg1 + 0xb48) = 0;
    *(arg1 + 0xb50) = 0;
    *(arg1 + 0xb58) = 0;
    *(arg1 + 0xb60) = 0;
    *(arg1 + 0xb68) = 0;
    *(arg1 + 0xb70) = 0;
    *(arg1 + 0xb78) = 0;
    *(arg1 + 0xb80) = 0;
    *(arg1 + 0xb88) = 0;
    *(arg1 + 0xb90) = 0;
    *(arg1 + 0xb98) = 0;
    *(arg1 + 0xba0) = 0;
    *(arg1 + 0xb28) = 0x5c;
    *(arg1 + 0xb29) = arg2 >> 8;
    uStack_48._0_4_ = uVar8;
    uStack_48._0_6_ = CONCAT24(2,uStack_48);
    uStack_48 = uStack_48;
    puStack_40 = puVar27;
    iVar11 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_48,1);
    if (iVar11 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar8 = *(*(arg1 + 0x8c0) + 2);
    *puVar27 = 0;
    *(arg1 + 0xb30) = 0;
    *(arg1 + 0xb38) = 0;
    *(arg1 + 0xb40) = 0;
    *(arg1 + 0xb48) = 0;
    *(arg1 + 0xb50) = 0;
    *(arg1 + 0xb58) = 0;
    *(arg1 + 0xb60) = 0;
    *(arg1 + 0xb68) = 0;
    *(arg1 + 0xb70) = 0;
    *(arg1 + 0xb78) = 0;
    *(arg1 + 0xb80) = 0;
    *(arg1 + 0xb88) = 0;
    *(arg1 + 0xb90) = 0;
    *(arg1 + 0xb98) = 0;
    *(arg1 + 0xba0) = 0;
    *(arg1 + 0xb28) = 0x5d;
    *(arg1 + 0xb29) = arg2;
    uStack_48._0_4_ = uVar8;
    uStack_48._0_6_ = CONCAT24(2,uStack_48);
    uStack_48 = uStack_48;
    puStack_40 = puVar27;
    iVar11 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_48,1);
    if (iVar11 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar8 = *(*(arg1 + 0x8c0) + 2);
    *puVar27 = 0;
    *(arg1 + 0xb30) = 0;
    *(arg1 + 0xb38) = 0;
    *(arg1 + 0xb40) = 0;
    *(arg1 + 0xb48) = 0;
    *(arg1 + 0xb50) = 0;
    *(arg1 + 0xb58) = 0;
    *(arg1 + 0xb60) = 0;
    *(arg1 + 0xb68) = 0;
    *(arg1 + 0xb70) = 0;
    *(arg1 + 0xb78) = 0;
    *(arg1 + 0xb80) = 0;
    *(arg1 + 0xb88) = 0;
    *(arg1 + 0xb90) = 0;
    *(arg1 + 0xb98) = 0;
    *(arg1 + 0xba0) = 0;
    *(arg1 + 0xb28) = 0x105a;
    uStack_48._0_4_ = uVar8;
    uStack_48._0_6_ = CONCAT24(2,uStack_48);
    uStack_48 = uStack_48;
    puStack_40 = puVar27;
    iVar11 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_48,1);
    if (iVar11 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar13 = 1;
    uVar8 = *(*(arg1 + 0x8c0) + 2);
    *puVar27 = 0;
    *(arg1 + 0xb30) = 0;
    *(arg1 + 0xb38) = 0;
    *(arg1 + 0xb40) = 0;
    *(arg1 + 0xb48) = 0;
    *(arg1 + 0xb50) = 0;
    *(arg1 + 0xb58) = 0;
    *(arg1 + 0xb60) = 0;
    *(arg1 + 0xb68) = 0;
    *(arg1 + 0xb70) = 0;
    *(arg1 + 0xb78) = 0;
    *(arg1 + 0xb80) = 0;
    *(arg1 + 0xb88) = 0;
    *(arg1 + 0xb90) = 0;
    *(arg1 + 0xb98) = 0;
    *(arg1 + 0xba0) = 0;
    *(arg1 + 0xb28) = 0x5a;
    uStack_48._0_4_ = uVar8;
    uStack_48._0_6_ = CONCAT24(2,uStack_48);
    uStack_48 = uStack_48;
    puStack_40 = puVar27;
    uVar16 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_48);
    if (uVar16 < 1) {
        uVar16 = _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar33 = sp_el0;
    if (*(iVar33 + 0x5e0) == iStack_38) {
        return uVar16;
    }
    auVar36 = __stack_chk_fail();
    pcVar30 = auVar36._8_8_;
    iVar33 = auVar36._0_8_;
    *extraout_x18 = sym.lt9611uxc_firmware_write;
    pcStack_a8 = sym.lt9611uxc_firmware_write;
    uVar14 = uVar13 + 0x1f;
    if (-1 < uVar13) {
        uVar14 = uVar13;
    }
    iVar20 = sp_el0;
    iStack_b8 = *(iVar20 + 0x5e0);
    uVar16 = uVar14 >> 5;
    uVar25 = uVar13 % 0x20;
    puVar34 = iVar33 + 0xb28;
    puVar35 = iVar33 + 0xb29;
    puStack_b0 = &stack0xffffffffffffffd0;
    if (uVar13 < 0x20) {
        pcVar28 = NULL;
        uVar23 = uVar25;
    }
    else {
        pcVar28 = NULL;
        puVar27 = 0x21;
        unaff_x26 = "lt9611uxc_write";
        uStack_fc = uVar14 >> 5;
        uStack_f8 = uVar25;
        uStack_ec = uVar13;
        do {
            pcVar3 = pcVar30 + pcVar28;
            sym.lt9611uxc_flash_write_config(iVar33);
            uVar7 = *(*(iVar33 + 0x8c0) + 2);
            *(iVar33 + 0xb28) = 0x59;
            uVar4 = *(pcVar3 + 0x18);
            uVar22 = *pcVar3;
            uVar5 = *(pcVar3 + 8);
            uStack_d8 = CONCAT62(0x210000,uVar7);
            *(iVar33 + 0xb39) = *(pcVar3 + 0x10);
            *(iVar33 + 0xb41) = uVar4;
            *puVar35 = uVar22;
            *(iVar33 + 0xb31) = uVar5;
            puStack_d0 = puVar34;
            iVar11 = i2c_transfer(*(*(iVar33 + 0x8c0) + 0x18),&uStack_d8,1);
            if (iVar11 < 1) {
                _printk(0x8001311,"lt9611uxc_write");
            }
            sym.lt9611uxc_flash_write_addr_set(iVar33,pcVar28 & 0xffffffff);
            msleep(0x14);
            pcVar28 = pcVar28 + 0x20;
            uVar13 = uVar16 - 1;
            uVar16 = uVar13;
        } while (uVar13 != 0);
        pcVar30 = pcVar30 + pcVar28;
        uVar16 = uStack_fc;
        uVar25 = uStack_f8;
        uVar23 = uStack_f8;
        uVar13 = uStack_ec;
    }
    if (0 < uVar25) {
        uStack_c8 = 0xffffffffffffffff;
        uStack_c0 = 0xffffffffffffffff;
        uStack_d8 = 0xffffffffffffffff;
        puStack_d0 = 0xffffffffffffffff;
        memcpy(&uStack_d8,pcVar30,uVar23);
        sym.lt9611uxc_flash_write_config(iVar33);
        uVar7 = *(*(iVar33 + 0x8c0) + 2);
        *puVar35 = uStack_d8;
        *(iVar33 + 0xb31) = puStack_d0;
        *(iVar33 + 0xb39) = uStack_c8;
        *(iVar33 + 0xb41) = uStack_c0;
        *(iVar33 + 0xb28) = 0x59;
        uStack_e8 = CONCAT62(0x210000,uVar7);
        puStack_e0 = puVar34;
        iVar11 = i2c_transfer(*(*(iVar33 + 0x8c0) + 0x18),&uStack_e8,1);
        if (iVar11 < 1) {
            _printk(0x8001311,"lt9611uxc_write");
        }
        sym.lt9611uxc_flash_write_addr_set(iVar33,pcVar28 & 0xffffffff);
        msleep(0x14);
    }
    msleep(0x14);
    uVar17 = _printk(0x8000dc1,"lt9611uxc_firmware_write",uVar13,uVar16,uVar23 & 0xffffffff);
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_b8) {
        return uVar17;
    }
    auVar36 = __stack_chk_fail();
    puVar24 = auVar36._8_8_;
    iVar21 = auVar36._0_8_;
    *extraout_x18_00 = sym.lt9611uxc_firmware_upgrade;
    pcStack_158 = sym.lt9611uxc_firmware_upgrade;
    iVar20 = sp_el0;
    iStack_168 = *(iVar20 + 0x5e0);
    uVar17 = *puVar24;
    ppuStack_160 = &puStack_b0;
    puStack_150 = puVar35;
    puStack_148 = puVar34;
    pcStack_140 = unaff_x26;
    uStack_138 = uVar16;
    pcStack_130 = pcVar30;
    pcStack_128 = pcVar28;
    iStack_120 = iVar33;
    puStack_118 = puVar27;
    uStack_110 = uVar23;
    uStack_108 = uVar13;
    _printk(0x8000c20,"lt9611uxc_firmware_upgrade",uVar17 & 0xffffffff);
    iVar33 = uVar17 << 0x20;
    arg2_00 = __kmalloc(iVar33 + 0x1f00000000 >> 0x20 & 0xffffffffffffffe0,0xdc0);
    uVar16 = 0;
    puStack_1a0 = puVar27;
    if (arg2_00 != NULL) {
        iVar20 = 0;
        puVar34 = iVar21 + 0xb28;
        puVar35 = 0x8001730;
        pcVar28 = 0x2;
        pcVar30 = "lt9611uxc_write_byte";
        *(iVar21 + 0xc30) = 1;
        do {
            uVar7 = *(iVar20 + 0x8001730);
            uVar8 = *(*(iVar21 + 0x8c0) + 2);
            *puVar34 = 0;
            *(iVar21 + 0xb30) = 0;
            *(iVar21 + 0xb38) = 0;
            *(iVar21 + 0xb40) = 0;
            *(iVar21 + 0xb48) = 0;
            *(iVar21 + 0xb50) = 0;
            *(iVar21 + 0xb58) = 0;
            *(iVar21 + 0xb60) = 0;
            *(iVar21 + 0xb68) = 0;
            *(iVar21 + 0xb70) = 0;
            *(iVar21 + 0xb78) = 0;
            *(iVar21 + 0xb80) = 0;
            *(iVar21 + 0xb88) = 0;
            *(iVar21 + 0xb90) = 0;
            *(iVar21 + 0xb98) = 0;
            *(iVar21 + 0xba0) = 0;
            *(iVar21 + 0xb28) = uVar7;
            uStack_178 = CONCAT24(2,uVar8);
            puStack_170 = puVar34;
            iVar11 = i2c_transfer(*(*(iVar21 + 0x8c0) + 0x18),&uStack_178,1);
            if (iVar11 < 1) {
                _printk(0x8001311,"lt9611uxc_write_byte");
            }
            iVar20 = iVar20 + 2;
        } while (iVar20 != 0xe);
        sym.lt9611uxc_block_erase(iVar21);
        sym.lt9611uxc_block_erase(iVar21);
        sym.lt9611uxc_firmware_write(iVar21,puVar24[1],uVar17 & 0xffffffff);
        msleep(0x14);
        sym.lt9611uxc_fw_read_back(iVar21,arg2_00,uVar17);
        iVar11 = bcmp(puVar24[1],arg2_00,iVar33 >> 0x20);
        uVar22 = 0x8000ff4;
        if (iVar11 != 0) {
            uVar22 = 0x8000a82;
        }
        *(iVar21 + 0xc30) = (iVar11 != 0) << 1;
        _printk(uVar22,"lt9611uxc_firmware_upgrade");
        uVar16 = kfree(arg2_00);
        unaff_x26 = 0xe;
        puStack_1a0 = arg2_00;
    }
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_168) {
        return uVar16;
    }
    pcVar18 = __stack_chk_fail();
    *extraout_x18_01 = sym.lt9611uxc_edid_en;
    pcStack_1a8 = sym.lt9611uxc_edid_en;
    iVar20 = sp_el0;
    iStack_1b8 = *(iVar20 + 0x5e0);
    pcVar29 = pcVar18 + 0xb28;
    uVar7 = *(*(pcVar18 + 0x8c0) + 2);
    *(pcVar18 + 0xb28) = 0;
    *(pcVar18 + 0xb30) = 0;
    *(pcVar18 + 0xb38) = 0;
    *(pcVar18 + 0xb40) = 0;
    *(pcVar18 + 0xb48) = 0;
    *(pcVar18 + 0xb50) = 0;
    *(pcVar18 + 0xb58) = 0;
    *(pcVar18 + 0xb60) = 0;
    *(pcVar18 + 0xb68) = 0;
    *(pcVar18 + 0xb70) = 0;
    *(pcVar18 + 0xb78) = 0;
    *(pcVar18 + 0xb80) = 0;
    *(pcVar18 + 0xb88) = 0;
    *(pcVar18 + 0xb90) = 0;
    *(pcVar18 + 0xb98) = 0;
    *(pcVar18 + 0xb28) = 0xb0ff;
    *(pcVar18 + 0xba0) = 0;
    uStack_1c8 = CONCAT62(0x20000,uVar7);
    pcStack_1c0 = pcVar29;
    pppuStack_1b0 = &ppuStack_160;
    puStack_190 = puVar24;
    iStack_188 = iVar21;
    iVar11 = i2c_transfer(*(*(pcVar18 + 0x8c0) + 0x18),&uStack_1c8,1);
    if (iVar11 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar7 = *(*(pcVar18 + 0x8c0) + 2);
    *pcVar29 = 0;
    *(pcVar18 + 0xb30) = 0;
    *(pcVar18 + 0xb38) = 0;
    *(pcVar18 + 0xb40) = 0;
    *(pcVar18 + 0xb48) = 0;
    *(pcVar18 + 0xb50) = 0;
    *(pcVar18 + 0xb58) = 0;
    *(pcVar18 + 0xb60) = 0;
    *(pcVar18 + 0xb68) = 0;
    *(pcVar18 + 0xb70) = 0;
    *(pcVar18 + 0xb78) = 0;
    *(pcVar18 + 0xb80) = 0;
    *(pcVar18 + 0xb88) = 0;
    *(pcVar18 + 0xb90) = 0;
    *(pcVar18 + 0xb98) = 0;
    *(pcVar18 + 0xba0) = 0;
    *(pcVar18 + 0xb28) = 0x100b;
    uStack_1c8 = CONCAT62(0x20000,uVar7);
    pcStack_1c0 = pcVar29;
    uVar16 = i2c_transfer(*(*(pcVar18 + 0x8c0) + 0x18),&uStack_1c8,1);
    if (uVar16 < 1) {
        uVar16 = _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_1b8) {
        return uVar16;
    }
    pcVar19 = __stack_chk_fail();
    *extraout_x18_02 = sym.lt9611uxc_probe;
    pcStack_228 = sym.lt9611uxc_probe;
    uStack_1e0 = 0x200000000;
    iVar20 = sp_el0;
    iStack_238 = *(iVar20 + 0x5e0);
    pppuStack_230 = &pppuStack_1b0;
    puStack_220 = puVar35;
    puStack_218 = puVar34;
    pcStack_210 = unaff_x26;
    iStack_208 = iVar33;
    pcStack_200 = pcVar30;
    pcStack_1f8 = pcVar28;
    uStack_1f0 = uVar17;
    pcStack_1e8 = pcVar29;
    pcStack_1d8 = pcVar18;
    if ((pcVar19 == NULL) || (pcVar29 = pcVar19, *(pcVar19 + 0x310) == 0)) {
        _printk(0x8000306,"lt9611uxc_probe");
        uVar16 = 0xffffffea;
        pcVar26 = 0x200000000;
        pcVar19 = pcVar29;
        goto code_r0x08003fa8;
    }
    pcVar18 = *(pcVar19 + 0x18);
    pcVar26 = *(*(pcVar18 + 0x10) + 0x20);
    __cfi_slowpath_diag(0x6871e466cec98751,pcVar26,0x8000270);
    uVar16 = (*pcVar26)(pcVar18);
    if ((uVar16 & 1) == 0) {
        _printk(0x8000c9e,"lt9611uxc_probe");
        uVar16 = 0xffffffed;
        goto code_r0x08003fa8;
    }
    pcVar29 = pcVar19 + 0x20;
    _printk(0x8000cc0,"lt9611uxc_probe","lt9611uxc_probe");
    arg1_00 = devm_kmalloc(pcVar29,0xc38,0xdc0);
    pcVar26 = pcVar29;
    if (arg1_00 == NULL) {
        uVar16 = 0xfffffff4;
        goto code_r0x08003fa8;
    }
    pcVar31 = *(pcVar19 + 0x310);
    iVar33 = of_graph_get_endpoint_by_regs(pcVar31,0,0);
    if (iVar33 == 0) {
        uVar22 = 0x8000d3c;
code_r0x080040b0:
        _printk(uVar22,"lt9611uxc_parse_dt");
        uVar16 = 0xffffffed;
    }
    else {
        uVar16 = of_graph_get_remote_port_parent();
        *(arg1_00 + 0x118) = uVar16;
        if (uVar16 == 0) {
            uVar22 = 0x8000e6b;
            goto code_r0x080040b0;
        }
        uVar13 = of_get_named_gpio_flags(pcVar31,"lt,irq-gpio",0,0);
        uVar16 = 0;
        *(arg1_00 + 0x89c) = uVar13;
        if (0x1ff < uVar13) {
            _printk(0x800083a,"lt9611uxc_parse_dt");
            uVar16 = 0xffffffea;
        }
        uVar13 = of_get_named_gpio_flags(pcVar31,"lt,reset-gpio",0,0);
        *(arg1_00 + 0x8a0) = uVar13;
        if (0x1ff < uVar13) {
            _printk(0x80005ef,"lt9611uxc_parse_dt");
            uVar16 = 0xffffffea;
        }
        uVar12 = of_get_named_gpio_flags(pcVar31,"lt,hdmi-ps-gpio",0,0);
        *(arg1_00 + 0x8a4) = uVar12;
        uVar12 = of_get_named_gpio_flags(pcVar31,"lt,hdmi-en-gpio",0,0);
        *(arg1_00 + 0x8a8) = uVar12;
        uVar12 = of_get_named_gpio_flags(pcVar31,"lt,hdmi-3p3-en",0,0);
        *(arg1_00 + 0x8ac) = uVar12;
        uVar12 = of_get_named_gpio_flags(pcVar31,"lt,hdmi-1p2-en",0,0);
        *(arg1_00 + 0x8b0) = uVar12;
        iVar33 = of_find_property(pcVar31,"lt,ac-mode",0);
        pcStack_278 = arg1_00 + 0x8d8;
        arg1_00[0x898] = iVar33 != 0;
        *(arg1_00 + 0x8d8) = pcStack_278;
        *(arg1_00 + 0x8e0) = pcStack_278;
        uStack_258 = uStack_258._4_4_ << 0x20;
        uStack_268 = 0;
        uStack_260 = 0;
        uStack_26c = 0;
        iVar33 = of_get_child_by_name(pcVar31,"lt,customize-modes");
        if ((iVar33 == 0) && (iVar33 = of_parse_phandle(pcVar31,"lt,customize-modes",0), iVar33 == 0)) {
            _printk(0x8000f8e,"lt9611uxc_parse_dt_modes");
        }
        else {
            iVar20 = of_get_next_child(iVar33,0);
            if (iVar20 == 0) {
                unaff_x26 = NULL;
            }
            else {
                unaff_x26 = NULL;
                uVar13 = 0;
                do {
                    pcVar28 = kmem_cache_alloc_trace(_drm_atomic_helper_connector_destroy_state,0xdc0,0x78);
                    if (pcVar28 == NULL) {
                        _printk(0x8000e88,"lt9611uxc_parse_dt_modes");
                    }
                    else {
                        iVar11 = of_property_read_variable_u32_array(iVar20,"lt,mode-h-active",pcVar28 + 4,1,0);
                        pcVar31 = pcVar28;
                        if (iVar11 < 0) {
                            uVar22 = 0x8000473;
                        }
                        else {
                            iVar11 = of_property_read_variable_u32_array
                                               (iVar20,"lt,mode-h-front-porch",&uStack_258,1,0);
                            if (iVar11 < 0) {
                                uVar22 = 0x8001234;
                            }
                            else {
                                iVar11 = of_property_read_variable_u32_array
                                                   (iVar20,"lt,mode-h-pulse-width",&uStack_260 + 4,1,0);
                                if (iVar11 < 0) {
                                    uVar22 = 0x8000cd5;
                                }
                                else {
                                    iVar11 = of_property_read_variable_u32_array
                                                       (iVar20,"lt,mode-h-back-porch",&uStack_260,1,0);
                                    if (iVar11 < 0) {
                                        uVar22 = 0x8001047;
                                    }
                                    else {
                                        iVar21 = of_find_property(iVar20,"lt,mode-h-active-high",0);
                                        iVar11 = of_property_read_variable_u32_array
                                                           (iVar20,"lt,mode-v-active",pcVar28 + 0xe,1,0);
                                        if (iVar11 < 0) {
                                            uVar22 = 0x8000d5d;
                                        }
                                        else {
                                            iVar11 = of_property_read_variable_u32_array
                                                               (iVar20,"lt,mode-v-front-porch",&uStack_268 + 4,1,0);
                                            if (iVar11 < 0) {
                                                uVar22 = 0x800094e;
                                            }
                                            else {
                                                iVar11 = of_property_read_variable_u32_array
                                                                   (iVar20,"lt,mode-v-pulse-width",&uStack_268,1,0);
                                                if (iVar11 < 0) {
                                                    uVar22 = 0x8000757;
                                                }
                                                else {
                                                    iVar11 = of_property_read_variable_u32_array
                                                                       (iVar20,"lt,mode-v-back-porch",&uStack_26c,1,
                                                                        0);
                                                    if (iVar11 < 0) {
                                                        uVar22 = 0x8000979;
                                                    }
                                                    else {
                                                        pcVar26 = of_find_property(iVar20,"lt,mode-v-active-high",0);
                                                        iVar11 = of_property_read_variable_u32_array
                                                                           (iVar20,"lt,mode-clock-in-khz",pcVar28,1,
                                                                            0);
                                                        if (-1 < iVar11) {
                                                            iVar1 = *(pcVar28 + 4) + uStack_258 + uStack_260._4_2_;
                                                            puVar27 = *(arg1_00 + 0x8e0);
                                                            *(pcVar28 + 6) = *(pcVar28 + 4) + uStack_258;
                                                            *(pcVar28 + 8) = iVar1;
                                                            iVar2 = *(pcVar28 + 0xe) + uStack_268._4_2_ + uStack_268;
                                                            *(pcVar28 + 0x10) = *(pcVar28 + 0xe) + uStack_268._4_2_;
                                                            *(pcVar28 + 10) = iVar1 + uStack_260;
                                                            uVar14 = 1;
                                                            if (iVar21 == 0) {
                                                                uVar14 = 2;
                                                            }
                                                            uVar25 = 8;
                                                            if (pcVar26 != NULL) {
                                                                uVar25 = 4;
                                                            }
                                                            pcVar26 = pcVar28 + 0x40;
                                                            uVar13 = uVar14 | uVar13 | uVar25;
                                                            *(pcVar28 + 0x12) = iVar2;
                                                            *(pcVar28 + 0x14) = iVar2 + uStack_26c;
                                                            *(pcVar28 + 0x18) = uVar13;
                                                            uVar23 = __list_add_valid(pcVar26,puVar27,pcStack_278);
                                                            if ((uVar23 & 1) != 0) {
                                                                *(arg1_00 + 0x8e0) = pcVar26;
                                                                *(pcVar28 + 0x40) = pcStack_278;
                                                                *(pcVar28 + 0x48) = puVar27;
                                                                *puVar27 = pcVar26;
                                                            }
                                                            unaff_x26 = unaff_x26 + 1;
                                                            drm_mode_set_name(pcVar28);
                                                            goto code_r0x080042cc;
                                                        }
                                                        uVar22 = 0x8000d15;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        _printk(uVar22,"lt9611uxc_parse_dt_modes",iVar11);
                        kfree(pcVar28);
                    }
code_r0x080042cc:
                    iVar20 = of_get_next_child(iVar33,iVar20);
                } while (iVar20 != 0);
            }
            *(arg1_00 + 0x8d0) = unaff_x26;
            pcVar28 = arg1_00;
        }
        pcStack_280 = pcVar29;
        if (uVar16 == 0) {
            uStack_260 = uStack_260 & 0xffffffff;
            if (pcVar29 != NULL) {
                uVar16 = *(pcVar19 + 0x310);
                *(arg1_00 + 0x8b4) = 0;
                pcVar18 = of_get_child_by_name(uVar16,"lt,supply-entries");
                if (pcVar18 == NULL) {
                    uVar22 = 0x80004ab;
                    pcVar18 = pcVar31;
                }
                else {
                    iVar33 = of_get_next_available_child(pcVar18,0);
                    if (iVar33 == 0) {
                        *(arg1_00 + 0x8b4) = 0;
                    }
                    else {
                        pcVar26 = NULL;
                        do {
                            uVar13 = pcVar26 + 1;
                            pcVar26 = uVar13;
                            iVar33 = of_get_next_available_child(pcVar18,iVar33);
                        } while (iVar33 != 0);
                        *(arg1_00 + 0x8b4) = uVar13;
                        if (uVar13 != 0) {
                            uVar16 = devm_kmalloc(pcVar29,pcVar26 * 0x48,0xdc0);
                            *(arg1_00 + 0x8b8) = uVar16;
                            pcStack_278 = arg1_00;
                            if (uVar16 != 0) {
                                pcVar26 = of_get_next_available_child(pcVar18,0);
                                if (pcVar26 != NULL) {
                                    unaff_x26 = NULL;
                                    do {
                                        uStack_258 = 0;
                                        uVar13 = of_property_read_string(pcVar26,"lt,supply-name",&uStack_258);
                                        if (uVar13 != 0) {
                                            uVar22 = 0x800035d;
code_r0x08004e70:
                                            uVar16 = uVar13;
                                            _printk(uVar22,"lt9611uxc_get_dt_supply",uVar16);
                                            goto code_r0x080050d0;
                                        }
                                        iVar11 = unaff_x26;
                                        strscpy(*(arg1_00 + 0x8b8) + iVar11 * 0x48 + 8,uStack_258,0x20);
                                        uVar13 = of_property_read_variable_u32_array
                                                           (pcVar26,"lt,supply-min-voltage",&uStack_260 + 4,1,0);
                                        if (uVar13 < 0) {
                                            uVar22 = 0x80004ca;
                                            goto code_r0x08004e70;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar11 * 0x48 + 0x28) = uStack_260._4_4_;
                                        uVar13 = of_property_read_variable_u32_array
                                                           (pcVar26,"lt,supply-max-voltage",&uStack_260 + 4,1,0);
                                        if (uVar13 < 0) {
                                            uVar16 = uVar13;
                                            _printk(0x8000598,"lt9611uxc_get_dt_supply",uVar16);
                                            pcVar28 = arg1_00;
                                            goto code_r0x080050d0;
                                        }
                                        iVar33 = iVar11 * 0x48;
                                        *(*(arg1_00 + 0x8b8) + iVar33 + 0x2c) = uStack_260._4_4_;
                                        iVar15 = of_property_read_variable_u32_array
                                                           (pcVar26,"lt,supply-enable-load",&uStack_260 + 4,1,0);
                                        uVar12 = 0;
                                        if (-1 < iVar15) {
                                            uVar12 = uStack_260._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar33 + 0x30) = uVar12;
                                        iVar15 = of_property_read_variable_u32_array
                                                           (pcVar26,"lt,supply-disable-load",&uStack_260 + 4,1,0);
                                        uVar12 = 0;
                                        if (-1 < iVar15) {
                                            uVar12 = uStack_260._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar33 + 0x34) = uVar12;
                                        iVar15 = of_property_read_variable_u32_array
                                                           (pcVar26,"lt,supply-pre-on-sleep",&uStack_260 + 4,1,0);
                                        uVar12 = 0;
                                        if (-1 < iVar15) {
                                            uVar12 = uStack_260._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar33 + 0x38) = uVar12;
                                        iVar15 = of_property_read_variable_u32_array
                                                           (pcVar26,"lt,supply-pre-off-sleep",&uStack_260 + 4,1,0);
                                        uVar12 = 0;
                                        if (-1 < iVar15) {
                                            uVar12 = uStack_260._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar33 + 0x40) = uVar12;
                                        iVar15 = of_property_read_variable_u32_array
                                                           (pcVar26,"lt,supply-post-on-sleep",&uStack_260 + 4,1,0);
                                        uVar12 = 0;
                                        if (-1 < iVar15) {
                                            uVar12 = uStack_260._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar33 + 0x3c) = uVar12;
                                        iVar15 = of_property_read_variable_u32_array
                                                           (pcVar26,"lt,supply-post-off-sleep",&uStack_260 + 4,1,0);
                                        unaff_x26 = iVar11 + 1;
                                        uVar12 = 0;
                                        if (-1 < iVar15) {
                                            uVar12 = uStack_260._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar33 + 0x44) = uVar12;
                                        pcVar26 = of_get_next_available_child(pcVar18,pcVar26);
                                        pcVar28 = arg1_00;
                                    } while (pcVar26 != NULL);
                                }
                                pcVar26 = *(arg1_00 + 0x8b8);
                                if (pcVar26 == NULL) goto code_r0x08004624;
                                uVar13 = *(arg1_00 + 0x8b4);
                                if (uVar13 < 1) goto code_r0x08004624;
                                pcVar18 = pcVar26 + 8;
                                uVar23 = regulator_get(pcVar29,pcVar18);
                                uVar16 = 0;
                                pcVar31 = NULL;
                                *pcVar26 = uVar23;
                                pcVar32 = pcVar26;
                                if (uVar23 == 0) goto code_r0x08004e34;
                                if (0xfffffffffffff000 < uVar23) goto code_r0x08004e34;
                                uVar14 = regulator_set_voltage(uVar23,*(pcVar26 + 0x28),*(pcVar26 + 0x2c));
                                uVar16 = uVar14;
                                if (uVar14 < 0) {
                                    pcVar28 = NULL;
                                }
                                else {
                                    pcVar28 = NULL;
                                    iVar33 = 0;
                                    do {
                                        iVar20 = iVar33;
                                        if (uVar13 * 0x48 + -0x48 == iVar20) goto code_r0x08004624;
                                        unaff_x26 = pcVar26 + iVar20;
                                        pcVar18 = unaff_x26 + 0x50;
                                        uVar23 = regulator_get(pcVar29,pcVar18);
                                        *(unaff_x26 + 0x48) = uVar23;
                                        if (uVar23 == 0) goto code_r0x08005068;
                                        if (0xfffffffffffff000 < uVar23) goto code_r0x08005068;
                                        uVar14 = regulator_set_voltage
                                                           (uVar23,*(pcVar26 + iVar20 + 0x70),
                                                            *(pcVar26 + iVar20 + 0x74));
                                        uVar16 = uVar14;
                                        pcVar28 = pcVar28 + 1;
                                        iVar33 = iVar20 + 0x48;
                                    } while (-1 < uVar14);
                                    pcVar18 = pcVar26 + iVar20 + 0x50;
                                }
                                pcVar29 = pcVar28 & 0xffffffff;
                                _printk(0x8000ade,"lt9611uxc_config_vreg",pcVar18);
                                goto code_r0x080050b4;
                            }
                            uVar16 = 0xfffffff4;
                            uVar22 = 0x8001329;
                            goto code_r0x080040c8;
                        }
                    }
                    uVar22 = 0x8000eb3;
                }
                _printk(uVar22,"lt9611uxc_get_dt_supply");
                goto code_r0x08004624;
            }
            _printk(0x8000f44,"lt9611uxc_get_dt_supply",0,arg1_00);
            uVar16 = 0xffffffea;
            uVar22 = 0x8001329;
            pcVar18 = pcVar31;
            goto code_r0x080040c8;
        }
    }
    uVar22 = 0x8000aa8;
    pcVar18 = pcVar31;
code_r0x080040c8:
    do {
        _printk(uVar22,"lt9611uxc_probe");
code_r0x08003fa8:
        while( true ) {
            iVar33 = sp_el0;
            if (*(iVar33 + 0x5e0) == iStack_238) {
                return uVar16;
            }
            __stack_chk_fail();
code_r0x08005068:
            pcVar31 = pcVar28 + 1;
            pcVar32 = unaff_x26 + 0x48;
code_r0x08004e34:
            _printk(0x80009a3,"lt9611uxc_config_vreg",pcVar18,uVar16);
            while( true ) {
                uVar13 = pcVar31 - 1;
                pcVar28 = uVar13;
                *pcVar32 = 0;
                if (uVar13 < 0) break;
                regulator_set_load(*(pcVar26 + pcVar28 * 0x48),0);
                pcVar29 = pcVar28;
code_r0x080050b4:
                pcVar32 = pcVar26 + pcVar29 * 0x48;
                regulator_put(*pcVar32);
                pcVar31 = pcVar28;
            }
            pcVar28 = pcVar31;
            arg1_00 = pcStack_278;
            if (uVar16 != 0) break;
code_r0x08004624:
            *(arg1_00 + 0x8c0) = pcVar19;
            *arg1_00 = pcStack_280;
            uVar13 = sym.lt9611uxc_gpio_configure(arg1_00);
            pcVar28 = pcStack_280;
            if (uVar13 != 0) {
                uVar16 = uVar13;
                _printk(0x80007e9,"lt9611uxc_probe");
                goto code_r0x08004ae8;
            }
            if (*(arg1_00 + 0x8a8) < 0x200) {
                uVar22 = gpio_to_desc();
                gpiod_set_raw_value(uVar22,1);
                msleep(0x14);
            }
            pcVar26 = *(arg1_00 + 0x8b8);
            uVar13 = *(arg1_00 + 0x8b4);
            pcVar18 = uVar13;
            if (*(arg1_00 + 0x8ac) < 0x200) {
                uVar22 = gpio_to_desc();
                gpiod_set_raw_value(uVar22,1);
            }
            if (*(arg1_00 + 0x8b0) < 0x200) {
                uVar22 = gpio_to_desc();
                gpiod_set_raw_value(uVar22,1);
            }
            if (0 < uVar13) {
                uVar16 = 0;
                pcVar29 = NULL;
                if ((*pcVar26 != 0) && (*pcVar26 < 0xfffffffffffff001)) {
                    pcVar29 = NULL;
                    pcVar32 = pcVar18 + -1;
                    unaff_x26 = 0x3e8;
                    pcVar31 = pcVar26;
                    do {
                        uVar13 = regulator_is_enabled();
                        pcVar18 = uVar13;
                        if ((*(pcVar31 + 0x38) != 0) && (uVar13 == 0)) {
                            iVar33 = *(pcVar31 + 0x38) * 1000;
                            usleep_range_state(iVar33,iVar33,2);
                        }
                        uVar14 = regulator_set_load(*pcVar31,*(pcVar31 + 0x30));
                        if (uVar14 < 0) {
                            uVar16 = uVar14;
                            _printk(0x800067e,"lt9611uxc_enable_vreg",pcVar31 + 8);
                            goto code_r0x08004774;
                        }
                        uVar14 = regulator_enable(*pcVar31);
                        uVar16 = uVar14;
                        if ((*(pcVar31 + 0x3c) != 0) && (uVar13 == 0)) {
                            iVar33 = *(pcVar31 + 0x3c) * 1000;
                            usleep_range_state(iVar33,iVar33,2);
                        }
                        if (uVar14 < 0) {
                            _printk(0x8000697,"lt9611uxc_enable_vreg",pcVar31 + 8);
                            regulator_set_load(*pcVar31,*(pcVar31 + 0x34));
                            goto code_r0x08004774;
                        }
                        if (pcVar32 == pcVar29) goto code_r0x08004778;
                        pcVar31 = pcVar31 + 0x48;
                        pcVar29 = pcVar29 + 1;
                    } while ((*pcVar31 != 0) && (*pcVar31 < 0xfffffffffffff001));
                }
                _printk(0x8000af6,"lt9611uxc_enable_vreg",pcVar26 + (pcVar29 & 0xffffffff) * 0x48 + 8,uVar16);
code_r0x08004774:
                if (pcVar29 != 0) {
                    pcVar18 = pcVar29 + 1;
                    pcVar26 = pcVar26 + pcVar29 * 0x48 + -0x48;
                    do {
                        if (*(pcVar26 + 0x40) != 0) {
                            iVar33 = *(pcVar26 + 0x40) * 1000;
                            usleep_range_state(iVar33,iVar33,2);
                        }
                        regulator_set_load(*pcVar26,*(pcVar26 + 0x34));
                        regulator_disable(*pcVar26);
                        if (*(pcVar26 + 0x44) != 0) {
                            iVar33 = *(pcVar26 + 0x44) * 1000;
                            usleep_range_state(iVar33,iVar33,2);
                        }
                        pcVar18 = pcVar18 + -1;
                        pcVar26 = pcVar26 + -0x48;
                    } while (1 < pcVar18);
                }
code_r0x08004778:
                if (uVar16 == 0) goto code_r0x08004780;
                _printk(0x8001348,"lt9611uxc_probe");
                goto code_r0x08004adc;
            }
code_r0x08004780:
            uVar22 = gpio_to_desc(*(arg1_00 + 0x8a0));
            gpiod_set_raw_value(uVar22,1);
            msleep(0x14);
            uVar22 = gpio_to_desc(*(arg1_00 + 0x8a0));
            gpiod_set_raw_value(uVar22,0);
            msleep(0x14);
            uVar22 = gpio_to_desc(*(arg1_00 + 0x8a0));
            gpiod_set_raw_value(uVar22,1);
            msleep(300);
            sym.lt9611uxc_ctl_en(arg1_00);
            pcVar18 = arg1_00 + 0xb28;
            uVar7 = *(*(arg1_00 + 0x8c0) + 2);
            *(arg1_00 + 0xb28) = 0;
            *(arg1_00 + 0xb30) = 0;
            *(arg1_00 + 0xb38) = 0;
            *(arg1_00 + 0xb40) = 0;
            *(arg1_00 + 0xb48) = 0;
            *(arg1_00 + 0xb50) = 0;
            *(arg1_00 + 0xb58) = 0;
            *(arg1_00 + 0xb60) = 0;
            *(arg1_00 + 0xb68) = 0;
            *(arg1_00 + 0xb70) = 0;
            *(arg1_00 + 0xb78) = 0;
            *(arg1_00 + 0xb80) = 0;
            *(arg1_00 + 0xb88) = 0;
            *(arg1_00 + 0xb90) = 0;
            *(arg1_00 + 0xb98) = 0;
            *(arg1_00 + 0xb28) = 0x81ff;
            *(arg1_00 + 0xba0) = 0;
            uStack_258 = CONCAT62(0x20000,uVar7);
            pcStack_250 = pcVar18;
            iVar11 = i2c_transfer(*(*(arg1_00 + 0x8c0) + 0x18),&uStack_258,1);
            if (iVar11 < 1) {
                _printk(0x8001311,"lt9611uxc_write_byte");
            }
            uVar16 = *(arg1_00 + 0x8c0);
            uVar7 = *(uVar16 + 2);
            pcVar26 = 0x10001;
            uVar9 = *(uVar16 + 2);
            *(arg1_00 + 0xc18) = 0;
            *(arg1_00 + 0xc20) = 0;
            *(arg1_00 + 0xc08) = 0;
            *(arg1_00 + 0xc10) = 0;
            *(arg1_00 + 0xbf8) = 0;
            *(arg1_00 + 0xc00) = 0;
            *(arg1_00 + 0xbe8) = 0;
            *(arg1_00 + 0xbf0) = 0;
            *(arg1_00 + 0xbd8) = 0;
            *(arg1_00 + 0xbe0) = 0;
            *(arg1_00 + 0xbc8) = 0;
            *(arg1_00 + 0xbd0) = 0;
            *(arg1_00 + 3000) = 0;
            *(arg1_00 + 0xbc0) = 0;
            *(arg1_00 + 0xba8) = 0;
            *(arg1_00 + 0xbb0) = 0;
            *(arg1_00 + 0xb98) = 0;
            *(arg1_00 + 0xba0) = 0;
            *(arg1_00 + 0xb88) = 0;
            *(arg1_00 + 0xb90) = 0;
            *(arg1_00 + 0xb78) = 0;
            *(arg1_00 + 0xb80) = 0;
            *(arg1_00 + 0xb68) = 0;
            *(arg1_00 + 0xb70) = 0;
            *(arg1_00 + 0xb58) = 0;
            *(arg1_00 + 0xb60) = 0;
            *(arg1_00 + 0xb48) = 0;
            *(arg1_00 + 0xb50) = 0;
            *(arg1_00 + 0xb38) = 0;
            *(arg1_00 + 0xb40) = 0;
            *pcVar18 = 0;
            *(arg1_00 + 0xb30) = 0;
            uStack_258 = CONCAT62(0x10000,uVar7);
            uStack_248._0_6_ = CONCAT42(0x10001,uVar9);
            uStack_248 = uStack_248;
            pcStack_250 = pcVar18;
            pcStack_240 = arg1_00 + 0xba8;
            iVar11 = i2c_transfer(*(uVar16 + 0x18),&uStack_258,2);
            if (iVar11 != 2) {
code_r0x08004a44:
                _printk(0x80006dd,"lt9611uxc_read");
                _printk(0x8000bcd,"lt9611uxc_read_device_id");
                sym.lt9611uxc_ctl_disable(arg1_00);
                msleep(0x32);
                _printk(0x8000f25,"lt9611uxc_probe");
                uVar16 = 0xffffffff;
                goto code_r0x08004adc;
            }
            uVar16 = *(arg1_00 + 0x8c0);
            uVar7 = *(uVar16 + 2);
            uVar9 = *(uVar16 + 2);
            cVar6 = arg1_00[0xba8];
            *(arg1_00 + 0xc18) = 0;
            *(arg1_00 + 0xc20) = 0;
            *(arg1_00 + 0xc08) = 0;
            *(arg1_00 + 0xc10) = 0;
            *(arg1_00 + 0xbf8) = 0;
            *(arg1_00 + 0xc00) = 0;
            *(arg1_00 + 0xbe8) = 0;
            *(arg1_00 + 0xbf0) = 0;
            *(arg1_00 + 0xbd8) = 0;
            *(arg1_00 + 0xbe0) = 0;
            *(arg1_00 + 0xbc8) = 0;
            *(arg1_00 + 0xbd0) = 0;
            *(arg1_00 + 3000) = 0;
            *(arg1_00 + 0xbc0) = 0;
            *(arg1_00 + 0xba8) = 0;
            *(arg1_00 + 0xbb0) = 0;
            *(arg1_00 + 0xb98) = 0;
            *(arg1_00 + 0xba0) = 0;
            *(arg1_00 + 0xb88) = 0;
            *(arg1_00 + 0xb90) = 0;
            *(arg1_00 + 0xb78) = 0;
            *(arg1_00 + 0xb80) = 0;
            *(arg1_00 + 0xb68) = 0;
            *(arg1_00 + 0xb70) = 0;
            *(arg1_00 + 0xb58) = 0;
            *(arg1_00 + 0xb60) = 0;
            *(arg1_00 + 0xb48) = 0;
            *(arg1_00 + 0xb50) = 0;
            *(arg1_00 + 0xb38) = 0;
            *(arg1_00 + 0xb40) = 0;
            *pcVar18 = 0;
            *(arg1_00 + 0xb30) = 0;
            arg1_00[0xb28] = 0x1;
            uStack_258 = CONCAT62(0x10000,uVar7);
            uStack_248._0_6_ = CONCAT42(0x10001,uVar9);
            uStack_248 = uStack_248;
            pcStack_250 = pcVar18;
            pcStack_240 = arg1_00 + 0xba8;
            iVar11 = i2c_transfer(*(uVar16 + 0x18),&uStack_258,2);
            if (iVar11 != 2) goto code_r0x08004a44;
            _printk(0x80010d6,"lt9611uxc_read_device_id",CONCAT11(cVar6,arg1_00[0xba8]));
            sym.lt9611uxc_ctl_disable(arg1_00);
            msleep(0x32);
            *(pcVar19 + 0xb8) = arg1_00;
            uVar13 = sysfs_create_group(pcStack_280,obj.lt9611uxc_sysfs_attr_grp);
            pcVar18 = arg1_00;
            if (uVar13 != 0) {
                uVar16 = uVar13;
                _printk(0x8000c51,"lt9611uxc_sysfs_init","lt9611uxc_sysfs_init",uVar16);
                uVar22 = 0x8000b76;
                goto code_r0x08004ed0;
            }
            cVar10 = sym.lt9611uxc_get_version(arg1_00);
            if (cVar10 == '\0') {
                uVar13 = request_firmware_nowait
                                   (obj.__this_module,1,"lt9611uxc_fw.bin",pcStack_280,0xcc0,arg1_00,
                                    sym.lt9611uxc_firmware_cb.e58709b06554ea617982e3f2e7a32f4b.cfi_jt);
                uVar16 = uVar13;
                if (uVar13 != 0) {
                    _printk(0x800031b,"lt9611uxc_probe",uVar16);
                    goto code_r0x08004adc;
                }
            }
            else {
                _printk(0x800101c,"lt9611uxc_probe");
                __mutex_init(arg1_00 + 0x130,"&pdata->lock",obj.lt9611uxc_probe.__key);
                __init_waitqueue_head(arg1_00 + 0xa10,"&pdata->edid_wq",obj.lt9611uxc_probe.__key);
                *(arg1_00 + 0x90) = *(pcVar19 + 0x310);
                *(arg1_00 + 0xb0) = reloc.lt9611uxc_bridge_attach.e58709b06554ea617982e3f2e7a32f4b.cfi_jt;
                drm_bridge_add(arg1_00 + 8);
                uVar16 = alloc_workqueue(0x8000499,0xe000a,1,"lt9611uxc_wk");
                *(arg1_00 + 0x9d8) = uVar16;
                pcVar26 = arg1_00;
                if (uVar16 == 0) {
                    _printk(0x8001214,"lt9611uxc_probe");
                    uVar16 = 0;
                    goto code_r0x08004adc;
                }
                *(arg1_00 + 0x9e0) = 0xfffffffe0;
                *(arg1_00 + 0x9e8) = arg1_00 + 0x9e8;
                *(arg1_00 + 0x9f0) = arg1_00 + 0x9e8;
                *(arg1_00 + 0x9f8) = sym.lt9611uxc_hpd_work.cfi_jt;
                gpio_to_desc(*(arg1_00 + 0x89c));
                uVar22 = gpiod_to_irq();
                *(arg1_00 + 0x894) = uVar22;
                uVar13 = request_threaded_irq
                                   (uVar22,0,sym.lt9611uxc_irq_thread_handler.e58709b06554ea617982e3f2e7a32f4b.cfi_jt
                                    ,0x2002,"lt9611uxc_irq",arg1_00);
                uVar16 = uVar13;
                if (uVar13 != 0) {
                    uVar22 = 0x80010b9;
code_r0x08004ed0:
                    _printk(uVar22,"lt9611uxc_probe");
code_r0x08004adc:
                    sym.lt9611uxc_gpio_configure(arg1_00);
code_r0x08004ae8:
                    sym.lt9611uxc_put_dt_supply(pcStack_280,arg1_00);
                }
            }
        }
code_r0x080050d0:
        if (*(pcStack_278 + 0x8b8) != 0) {
            *(pcStack_278 + 0x8b8) = 0;
            *(pcStack_278 + 0x8b4) = 0;
        }
        uVar22 = 0x8001329;
    } while( true );
}


// ===== sym.lt9611uxc_firmware_write @ 0x080039d4 (size 568) =====

uint64_t sym.lt9611uxc_firmware_write(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t iVar1;
    int16_t iVar2;
    ulong uVar3;
    ulong uVar4;
    code cVar5;
    ushort uVar6;
    uint16_t uVar7;
    ushort uVar8;
    uint64_t uVar9;
    char cVar10;
    int iVar11;
    uint uVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    int iVar15;
    uint64_t uVar16;
    int64_t iVar17;
    code *pcVar18;
    code *pcVar19;
    code *arg1_00;
    int64_t iVar20;
    ulong uVar21;
    uint64_t *puVar22;
    uint32_t uVar23;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t uVar24;
    code *pcVar25;
    int64_t unaff_x21;
    code *pcVar26;
    code *pcVar27;
    char *pcVar28;
    code *pcVar29;
    code *pcVar30;
    uint64_t uVar31;
    int64_t iVar32;
    char *unaff_x26;
    int64_t iVar33;
    ulong *puVar34;
    ulong *puVar35;
    ulong unaff_x30;
    uchar auVar36 [16];
    code *pcStack_230;
    code *pcStack_228;
    uint uStack_21c;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    code *pcStack_200;
    ulong uStack_1f8;
    code *pcStack_1f0;
    int64_t iStack_1e8;
    uchar ***pppuStack_1e0;
    code *pcStack_1d8;
    ulong *puStack_1d0;
    ulong *puStack_1c8;
    code *pcStack_1c0;
    int64_t iStack_1b8;
    code *pcStack_1b0;
    code *pcStack_1a8;
    uint64_t uStack_1a0;
    code *pcStack_198;
    ulong uStack_190;
    code *pcStack_188;
    ulong uStack_178;
    code *pcStack_170;
    int64_t iStack_168;
    uchar **ppuStack_160;
    code *pcStack_158;
    int64_t iStack_150;
    uint64_t *puStack_140;
    int64_t iStack_138;
    ulong uStack_128;
    ulong *puStack_120;
    int64_t iStack_118;
    uchar *puStack_110;
    code *pcStack_108;
    ulong *puStack_100;
    ulong *puStack_f8;
    code *pcStack_f0;
    uint64_t uStack_e8;
    code *pcStack_e0;
    code *pcStack_d8;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    uint32_t uStack_ac;
    uint64_t uStack_a8;
    uint32_t uStack_9c;
    ulong uStack_98;
    ulong *puStack_90;
    ulong uStack_88;
    ulong *puStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    uVar14 = arg3;
    uVar13 = uVar14 + 0x1f;
    if (-1 < uVar14) {
        uVar13 = uVar14;
    }
    iVar17 = sp_el0;
    uVar24 = arg3 & 0xffffffff;
    iStack_68 = *(iVar17 + 0x5e0);
    uVar31 = uVar13 >> 5;
    uVar23 = uVar14 % 0x20;
    puVar34 = arg1 + 0xb28;
    puVar35 = arg1 + 0xb29;
    if (uVar14 < 0x20) {
        pcVar26 = NULL;
        uVar9 = uVar23;
        pcVar28 = arg2;
    }
    else {
        pcVar26 = NULL;
        unaff_x21 = 0x21;
        unaff_x26 = "lt9611uxc_write";
        uStack_ac = uVar13 >> 5;
        uStack_a8 = uVar23;
        uStack_9c = uVar14;
        do {
            pcVar27 = pcVar26 + arg2;
            sym.lt9611uxc_flash_write_config(arg1);
            uVar6 = *(*(arg1 + 0x8c0) + 2);
            *(arg1 + 0xb28) = 0x59;
            uVar3 = *(pcVar27 + 0x18);
            uVar21 = *pcVar27;
            uVar4 = *(pcVar27 + 8);
            uStack_88 = CONCAT62(0x210000,uVar6);
            *(arg1 + 0xb39) = *(pcVar27 + 0x10);
            *(arg1 + 0xb41) = uVar3;
            *puVar35 = uVar21;
            *(arg1 + 0xb31) = uVar4;
            puStack_80 = puVar34;
            iVar11 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_88,1);
            if (iVar11 < 1) {
                _printk(0x8001311,"lt9611uxc_write");
            }
            sym.lt9611uxc_flash_write_addr_set(arg1,pcVar26 & 0xffffffff);
            msleep(0x14);
            pcVar26 = pcVar26 + 0x20;
            uVar13 = uVar31 - 1;
            uVar31 = uVar13;
        } while (uVar13 != 0);
        pcVar28 = pcVar26 + arg2;
        uVar24 = uStack_9c;
        uVar31 = uStack_ac;
        uVar23 = uStack_a8;
        uVar9 = uStack_a8;
    }
    if (0 < uVar23) {
        uStack_78 = 0xffffffffffffffff;
        uStack_70 = 0xffffffffffffffff;
        uStack_88 = 0xffffffffffffffff;
        puStack_80 = 0xffffffffffffffff;
        memcpy(&uStack_88,pcVar28,uVar9);
        sym.lt9611uxc_flash_write_config(arg1);
        uVar6 = *(*(arg1 + 0x8c0) + 2);
        *puVar35 = uStack_88;
        *(arg1 + 0xb31) = puStack_80;
        *(arg1 + 0xb39) = uStack_78;
        *(arg1 + 0xb41) = uStack_70;
        *(arg1 + 0xb28) = 0x59;
        uStack_98 = CONCAT62(0x210000,uVar6);
        puStack_90 = puVar34;
        iVar11 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_98,1);
        if (iVar11 < 1) {
            _printk(0x8001311,"lt9611uxc_write");
        }
        sym.lt9611uxc_flash_write_addr_set(arg1,pcVar26 & 0xffffffff);
        msleep(0x14);
    }
    msleep(0x14);
    uVar16 = _printk(0x8000dc1,"lt9611uxc_firmware_write",uVar24,uVar31,uVar9 & 0xffffffff);
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_68) {
        return uVar16;
    }
    auVar36 = __stack_chk_fail();
    puVar22 = auVar36._8_8_;
    iVar20 = auVar36._0_8_;
    *extraout_x18 = sym.lt9611uxc_firmware_upgrade;
    pcStack_108 = sym.lt9611uxc_firmware_upgrade;
    iVar17 = sp_el0;
    iStack_118 = *(iVar17 + 0x5e0);
    uVar16 = *puVar22;
    puStack_110 = &stack0xffffffffffffffa0;
    puStack_100 = puVar35;
    puStack_f8 = puVar34;
    pcStack_f0 = unaff_x26;
    uStack_e8 = uVar31;
    pcStack_e0 = pcVar28;
    pcStack_d8 = pcVar26;
    iStack_d0 = arg1;
    iStack_c8 = unaff_x21;
    uStack_c0 = uVar9;
    uStack_b8 = uVar24;
    _printk(0x8000c20,"lt9611uxc_firmware_upgrade",uVar16 & 0xffffffff);
    iVar32 = uVar16 << 0x20;
    iVar17 = __kmalloc(iVar32 + 0x1f00000000 >> 0x20 & 0xffffffffffffffe0,0xdc0);
    uVar24 = 0;
    iStack_150 = unaff_x21;
    if (iVar17 != 0) {
        iVar33 = 0;
        puVar34 = iVar20 + 0xb28;
        puVar35 = 0x8001730;
        pcVar26 = 0x2;
        pcVar28 = "lt9611uxc_write_byte";
        *(iVar20 + 0xc30) = 1;
        do {
            uVar6 = *(iVar33 + 0x8001730);
            uVar7 = *(*(iVar20 + 0x8c0) + 2);
            *puVar34 = 0;
            *(iVar20 + 0xb30) = 0;
            *(iVar20 + 0xb38) = 0;
            *(iVar20 + 0xb40) = 0;
            *(iVar20 + 0xb48) = 0;
            *(iVar20 + 0xb50) = 0;
            *(iVar20 + 0xb58) = 0;
            *(iVar20 + 0xb60) = 0;
            *(iVar20 + 0xb68) = 0;
            *(iVar20 + 0xb70) = 0;
            *(iVar20 + 0xb78) = 0;
            *(iVar20 + 0xb80) = 0;
            *(iVar20 + 0xb88) = 0;
            *(iVar20 + 0xb90) = 0;
            *(iVar20 + 0xb98) = 0;
            *(iVar20 + 0xba0) = 0;
            *(iVar20 + 0xb28) = uVar6;
            uStack_128 = CONCAT24(2,uVar7);
            puStack_120 = puVar34;
            iVar11 = i2c_transfer(*(*(iVar20 + 0x8c0) + 0x18),&uStack_128,1);
            if (iVar11 < 1) {
                _printk(0x8001311,"lt9611uxc_write_byte");
            }
            iVar33 = iVar33 + 2;
        } while (iVar33 != 0xe);
        sym.lt9611uxc_block_erase(iVar20);
        sym.lt9611uxc_block_erase(iVar20);
        sym.lt9611uxc_firmware_write(iVar20,puVar22[1],uVar16 & 0xffffffff);
        msleep(0x14);
        sym.lt9611uxc_fw_read_back(iVar20,iVar17,uVar16);
        iVar11 = bcmp(puVar22[1],iVar17,iVar32 >> 0x20);
        uVar21 = 0x8000ff4;
        if (iVar11 != 0) {
            uVar21 = 0x8000a82;
        }
        *(iVar20 + 0xc30) = (iVar11 != 0) << 1;
        _printk(uVar21,"lt9611uxc_firmware_upgrade");
        uVar24 = kfree(iVar17);
        unaff_x26 = 0xe;
        iStack_150 = iVar17;
    }
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_118) {
        return uVar24;
    }
    pcVar18 = __stack_chk_fail();
    *extraout_x18_00 = sym.lt9611uxc_edid_en;
    pcStack_158 = sym.lt9611uxc_edid_en;
    iVar17 = sp_el0;
    iStack_168 = *(iVar17 + 0x5e0);
    pcVar27 = pcVar18 + 0xb28;
    uVar6 = *(*(pcVar18 + 0x8c0) + 2);
    *(pcVar18 + 0xb28) = 0;
    *(pcVar18 + 0xb30) = 0;
    *(pcVar18 + 0xb38) = 0;
    *(pcVar18 + 0xb40) = 0;
    *(pcVar18 + 0xb48) = 0;
    *(pcVar18 + 0xb50) = 0;
    *(pcVar18 + 0xb58) = 0;
    *(pcVar18 + 0xb60) = 0;
    *(pcVar18 + 0xb68) = 0;
    *(pcVar18 + 0xb70) = 0;
    *(pcVar18 + 0xb78) = 0;
    *(pcVar18 + 0xb80) = 0;
    *(pcVar18 + 0xb88) = 0;
    *(pcVar18 + 0xb90) = 0;
    *(pcVar18 + 0xb98) = 0;
    *(pcVar18 + 0xb28) = 0xb0ff;
    *(pcVar18 + 0xba0) = 0;
    uStack_178 = CONCAT62(0x20000,uVar6);
    pcStack_170 = pcVar27;
    ppuStack_160 = &puStack_110;
    puStack_140 = puVar22;
    iStack_138 = iVar20;
    iVar11 = i2c_transfer(*(*(pcVar18 + 0x8c0) + 0x18),&uStack_178,1);
    if (iVar11 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar6 = *(*(pcVar18 + 0x8c0) + 2);
    *pcVar27 = 0;
    *(pcVar18 + 0xb30) = 0;
    *(pcVar18 + 0xb38) = 0;
    *(pcVar18 + 0xb40) = 0;
    *(pcVar18 + 0xb48) = 0;
    *(pcVar18 + 0xb50) = 0;
    *(pcVar18 + 0xb58) = 0;
    *(pcVar18 + 0xb60) = 0;
    *(pcVar18 + 0xb68) = 0;
    *(pcVar18 + 0xb70) = 0;
    *(pcVar18 + 0xb78) = 0;
    *(pcVar18 + 0xb80) = 0;
    *(pcVar18 + 0xb88) = 0;
    *(pcVar18 + 0xb90) = 0;
    *(pcVar18 + 0xb98) = 0;
    *(pcVar18 + 0xba0) = 0;
    *(pcVar18 + 0xb28) = 0x100b;
    uStack_178 = CONCAT62(0x20000,uVar6);
    pcStack_170 = pcVar27;
    uVar24 = i2c_transfer(*(*(pcVar18 + 0x8c0) + 0x18),&uStack_178,1);
    if (uVar24 < 1) {
        uVar24 = _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_168) {
        return uVar24;
    }
    pcVar19 = __stack_chk_fail();
    *extraout_x18_01 = sym.lt9611uxc_probe;
    pcStack_1d8 = sym.lt9611uxc_probe;
    uStack_190 = 0x200000000;
    iVar17 = sp_el0;
    iStack_1e8 = *(iVar17 + 0x5e0);
    pppuStack_1e0 = &ppuStack_160;
    puStack_1d0 = puVar35;
    puStack_1c8 = puVar34;
    pcStack_1c0 = unaff_x26;
    iStack_1b8 = iVar32;
    pcStack_1b0 = pcVar28;
    pcStack_1a8 = pcVar26;
    uStack_1a0 = uVar16;
    pcStack_198 = pcVar27;
    pcStack_188 = pcVar18;
    if ((pcVar19 == NULL) || (pcVar27 = pcVar19, *(pcVar19 + 0x310) == 0)) {
        _printk(0x8000306,"lt9611uxc_probe");
        uVar24 = 0xffffffea;
        pcVar25 = 0x200000000;
        pcVar19 = pcVar27;
        goto code_r0x08003fa8;
    }
    pcVar18 = *(pcVar19 + 0x18);
    pcVar25 = *(*(pcVar18 + 0x10) + 0x20);
    __cfi_slowpath_diag(0x6871e466cec98751,pcVar25,0x8000270);
    uVar24 = (*pcVar25)(pcVar18);
    if ((uVar24 & 1) == 0) {
        _printk(0x8000c9e,"lt9611uxc_probe");
        uVar24 = 0xffffffed;
        goto code_r0x08003fa8;
    }
    pcVar27 = pcVar19 + 0x20;
    _printk(0x8000cc0,"lt9611uxc_probe","lt9611uxc_probe");
    arg1_00 = devm_kmalloc(pcVar27,0xc38,0xdc0);
    pcVar25 = pcVar27;
    if (arg1_00 == NULL) {
        uVar24 = 0xfffffff4;
        goto code_r0x08003fa8;
    }
    pcVar29 = *(pcVar19 + 0x310);
    iVar17 = of_graph_get_endpoint_by_regs(pcVar29,0,0);
    if (iVar17 == 0) {
        uVar21 = 0x8000d3c;
code_r0x080040b0:
        _printk(uVar21,"lt9611uxc_parse_dt");
        uVar24 = 0xffffffed;
    }
    else {
        uVar24 = of_graph_get_remote_port_parent();
        *(arg1_00 + 0x118) = uVar24;
        if (uVar24 == 0) {
            uVar21 = 0x8000e6b;
            goto code_r0x080040b0;
        }
        uVar13 = of_get_named_gpio_flags(pcVar29,"lt,irq-gpio",0,0);
        uVar24 = 0;
        *(arg1_00 + 0x89c) = uVar13;
        if (0x1ff < uVar13) {
            _printk(0x800083a,"lt9611uxc_parse_dt");
            uVar24 = 0xffffffea;
        }
        uVar13 = of_get_named_gpio_flags(pcVar29,"lt,reset-gpio",0,0);
        *(arg1_00 + 0x8a0) = uVar13;
        if (0x1ff < uVar13) {
            _printk(0x80005ef,"lt9611uxc_parse_dt");
            uVar24 = 0xffffffea;
        }
        uVar12 = of_get_named_gpio_flags(pcVar29,"lt,hdmi-ps-gpio",0,0);
        *(arg1_00 + 0x8a4) = uVar12;
        uVar12 = of_get_named_gpio_flags(pcVar29,"lt,hdmi-en-gpio",0,0);
        *(arg1_00 + 0x8a8) = uVar12;
        uVar12 = of_get_named_gpio_flags(pcVar29,"lt,hdmi-3p3-en",0,0);
        *(arg1_00 + 0x8ac) = uVar12;
        uVar12 = of_get_named_gpio_flags(pcVar29,"lt,hdmi-1p2-en",0,0);
        *(arg1_00 + 0x8b0) = uVar12;
        iVar17 = of_find_property(pcVar29,"lt,ac-mode",0);
        pcStack_228 = arg1_00 + 0x8d8;
        arg1_00[0x898] = iVar17 != 0;
        *(arg1_00 + 0x8d8) = pcStack_228;
        *(arg1_00 + 0x8e0) = pcStack_228;
        uStack_208 = uStack_208._4_4_ << 0x20;
        uStack_218 = 0;
        uStack_210 = 0;
        uStack_21c = 0;
        iVar17 = of_get_child_by_name(pcVar29,"lt,customize-modes");
        if ((iVar17 == 0) && (iVar17 = of_parse_phandle(pcVar29,"lt,customize-modes",0), iVar17 == 0)) {
            _printk(0x8000f8e,"lt9611uxc_parse_dt_modes");
        }
        else {
            iVar20 = of_get_next_child(iVar17,0);
            if (iVar20 == 0) {
                unaff_x26 = NULL;
            }
            else {
                unaff_x26 = NULL;
                uVar13 = 0;
                do {
                    pcVar26 = kmem_cache_alloc_trace(_drm_atomic_helper_connector_destroy_state,0xdc0,0x78);
                    if (pcVar26 == NULL) {
                        _printk(0x8000e88,"lt9611uxc_parse_dt_modes");
                    }
                    else {
                        iVar11 = of_property_read_variable_u32_array(iVar20,"lt,mode-h-active",pcVar26 + 4,1,0);
                        pcVar29 = pcVar26;
                        if (iVar11 < 0) {
                            uVar21 = 0x8000473;
                        }
                        else {
                            iVar11 = of_property_read_variable_u32_array
                                               (iVar20,"lt,mode-h-front-porch",&uStack_208,1,0);
                            if (iVar11 < 0) {
                                uVar21 = 0x8001234;
                            }
                            else {
                                iVar11 = of_property_read_variable_u32_array
                                                   (iVar20,"lt,mode-h-pulse-width",&uStack_210 + 4,1,0);
                                if (iVar11 < 0) {
                                    uVar21 = 0x8000cd5;
                                }
                                else {
                                    iVar11 = of_property_read_variable_u32_array
                                                       (iVar20,"lt,mode-h-back-porch",&uStack_210,1,0);
                                    if (iVar11 < 0) {
                                        uVar21 = 0x8001047;
                                    }
                                    else {
                                        iVar32 = of_find_property(iVar20,"lt,mode-h-active-high",0);
                                        iVar11 = of_property_read_variable_u32_array
                                                           (iVar20,"lt,mode-v-active",pcVar26 + 0xe,1,0);
                                        if (iVar11 < 0) {
                                            uVar21 = 0x8000d5d;
                                        }
                                        else {
                                            iVar11 = of_property_read_variable_u32_array
                                                               (iVar20,"lt,mode-v-front-porch",&uStack_218 + 4,1,0);
                                            if (iVar11 < 0) {
                                                uVar21 = 0x800094e;
                                            }
                                            else {
                                                iVar11 = of_property_read_variable_u32_array
                                                                   (iVar20,"lt,mode-v-pulse-width",&uStack_218,1,0);
                                                if (iVar11 < 0) {
                                                    uVar21 = 0x8000757;
                                                }
                                                else {
                                                    iVar11 = of_property_read_variable_u32_array
                                                                       (iVar20,"lt,mode-v-back-porch",&uStack_21c,1,
                                                                        0);
                                                    if (iVar11 < 0) {
                                                        uVar21 = 0x8000979;
                                                    }
                                                    else {
                                                        pcVar25 = of_find_property(iVar20,"lt,mode-v-active-high",0);
                                                        iVar11 = of_property_read_variable_u32_array
                                                                           (iVar20,"lt,mode-clock-in-khz",pcVar26,1,
                                                                            0);
                                                        if (-1 < iVar11) {
                                                            iVar1 = *(pcVar26 + 4) + uStack_208 + uStack_210._4_2_;
                                                            puVar34 = *(arg1_00 + 0x8e0);
                                                            *(pcVar26 + 6) = *(pcVar26 + 4) + uStack_208;
                                                            *(pcVar26 + 8) = iVar1;
                                                            iVar2 = *(pcVar26 + 0xe) + uStack_218._4_2_ + uStack_218;
                                                            *(pcVar26 + 0x10) = *(pcVar26 + 0xe) + uStack_218._4_2_;
                                                            *(pcVar26 + 10) = iVar1 + uStack_210;
                                                            uVar14 = 1;
                                                            if (iVar32 == 0) {
                                                                uVar14 = 2;
                                                            }
                                                            uVar23 = 8;
                                                            if (pcVar25 != NULL) {
                                                                uVar23 = 4;
                                                            }
                                                            pcVar25 = pcVar26 + 0x40;
                                                            uVar13 = uVar14 | uVar13 | uVar23;
                                                            *(pcVar26 + 0x12) = iVar2;
                                                            *(pcVar26 + 0x14) = iVar2 + uStack_21c;
                                                            *(pcVar26 + 0x18) = uVar13;
                                                            uVar31 = __list_add_valid(pcVar25,puVar34,pcStack_228);
                                                            if ((uVar31 & 1) != 0) {
                                                                *(arg1_00 + 0x8e0) = pcVar25;
                                                                *(pcVar26 + 0x40) = pcStack_228;
                                                                *(pcVar26 + 0x48) = puVar34;
                                                                *puVar34 = pcVar25;
                                                            }
                                                            unaff_x26 = unaff_x26 + 1;
                                                            drm_mode_set_name(pcVar26);
                                                            goto code_r0x080042cc;
                                                        }
                                                        uVar21 = 0x8000d15;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        _printk(uVar21,"lt9611uxc_parse_dt_modes",iVar11);
                        kfree(pcVar26);
                    }
code_r0x080042cc:
                    iVar20 = of_get_next_child(iVar17,iVar20);
                } while (iVar20 != 0);
            }
            *(arg1_00 + 0x8d0) = unaff_x26;
            pcVar26 = arg1_00;
        }
        pcStack_230 = pcVar27;
        if (uVar24 == 0) {
            uStack_210 = uStack_210 & 0xffffffff;
            if (pcVar27 != NULL) {
                uVar24 = *(pcVar19 + 0x310);
                *(arg1_00 + 0x8b4) = 0;
                pcVar18 = of_get_child_by_name(uVar24,"lt,supply-entries");
                if (pcVar18 == NULL) {
                    uVar21 = 0x80004ab;
                    pcVar18 = pcVar29;
                }
                else {
                    iVar17 = of_get_next_available_child(pcVar18,0);
                    if (iVar17 == 0) {
                        *(arg1_00 + 0x8b4) = 0;
                    }
                    else {
                        pcVar25 = NULL;
                        do {
                            uVar13 = pcVar25 + 1;
                            pcVar25 = uVar13;
                            iVar17 = of_get_next_available_child(pcVar18,iVar17);
                        } while (iVar17 != 0);
                        *(arg1_00 + 0x8b4) = uVar13;
                        if (uVar13 != 0) {
                            uVar24 = devm_kmalloc(pcVar27,pcVar25 * 0x48,0xdc0);
                            *(arg1_00 + 0x8b8) = uVar24;
                            pcStack_228 = arg1_00;
                            if (uVar24 != 0) {
                                pcVar25 = of_get_next_available_child(pcVar18,0);
                                if (pcVar25 != NULL) {
                                    unaff_x26 = NULL;
                                    do {
                                        uStack_208 = 0;
                                        uVar13 = of_property_read_string(pcVar25,"lt,supply-name",&uStack_208);
                                        if (uVar13 != 0) {
                                            uVar21 = 0x800035d;
code_r0x08004e70:
                                            uVar24 = uVar13;
                                            _printk(uVar21,"lt9611uxc_get_dt_supply",uVar24);
                                            goto code_r0x080050d0;
                                        }
                                        iVar11 = unaff_x26;
                                        strscpy(*(arg1_00 + 0x8b8) + iVar11 * 0x48 + 8,uStack_208,0x20);
                                        uVar13 = of_property_read_variable_u32_array
                                                           (pcVar25,"lt,supply-min-voltage",&uStack_210 + 4,1,0);
                                        if (uVar13 < 0) {
                                            uVar21 = 0x80004ca;
                                            goto code_r0x08004e70;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar11 * 0x48 + 0x28) = uStack_210._4_4_;
                                        uVar13 = of_property_read_variable_u32_array
                                                           (pcVar25,"lt,supply-max-voltage",&uStack_210 + 4,1,0);
                                        if (uVar13 < 0) {
                                            uVar24 = uVar13;
                                            _printk(0x8000598,"lt9611uxc_get_dt_supply",uVar24);
                                            pcVar26 = arg1_00;
                                            goto code_r0x080050d0;
                                        }
                                        iVar17 = iVar11 * 0x48;
                                        *(*(arg1_00 + 0x8b8) + iVar17 + 0x2c) = uStack_210._4_4_;
                                        iVar15 = of_property_read_variable_u32_array
                                                           (pcVar25,"lt,supply-enable-load",&uStack_210 + 4,1,0);
                                        uVar12 = 0;
                                        if (-1 < iVar15) {
                                            uVar12 = uStack_210._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar17 + 0x30) = uVar12;
                                        iVar15 = of_property_read_variable_u32_array
                                                           (pcVar25,"lt,supply-disable-load",&uStack_210 + 4,1,0);
                                        uVar12 = 0;
                                        if (-1 < iVar15) {
                                            uVar12 = uStack_210._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar17 + 0x34) = uVar12;
                                        iVar15 = of_property_read_variable_u32_array
                                                           (pcVar25,"lt,supply-pre-on-sleep",&uStack_210 + 4,1,0);
                                        uVar12 = 0;
                                        if (-1 < iVar15) {
                                            uVar12 = uStack_210._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar17 + 0x38) = uVar12;
                                        iVar15 = of_property_read_variable_u32_array
                                                           (pcVar25,"lt,supply-pre-off-sleep",&uStack_210 + 4,1,0);
                                        uVar12 = 0;
                                        if (-1 < iVar15) {
                                            uVar12 = uStack_210._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar17 + 0x40) = uVar12;
                                        iVar15 = of_property_read_variable_u32_array
                                                           (pcVar25,"lt,supply-post-on-sleep",&uStack_210 + 4,1,0);
                                        uVar12 = 0;
                                        if (-1 < iVar15) {
                                            uVar12 = uStack_210._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar17 + 0x3c) = uVar12;
                                        iVar15 = of_property_read_variable_u32_array
                                                           (pcVar25,"lt,supply-post-off-sleep",&uStack_210 + 4,1,0);
                                        unaff_x26 = iVar11 + 1;
                                        uVar12 = 0;
                                        if (-1 < iVar15) {
                                            uVar12 = uStack_210._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar17 + 0x44) = uVar12;
                                        pcVar25 = of_get_next_available_child(pcVar18,pcVar25);
                                        pcVar26 = arg1_00;
                                    } while (pcVar25 != NULL);
                                }
                                pcVar25 = *(arg1_00 + 0x8b8);
                                if (pcVar25 == NULL) goto code_r0x08004624;
                                uVar13 = *(arg1_00 + 0x8b4);
                                if (uVar13 < 1) goto code_r0x08004624;
                                pcVar18 = pcVar25 + 8;
                                uVar31 = regulator_get(pcVar27,pcVar18);
                                uVar24 = 0;
                                pcVar29 = NULL;
                                *pcVar25 = uVar31;
                                pcVar30 = pcVar25;
                                if (uVar31 == 0) goto code_r0x08004e34;
                                if (0xfffffffffffff000 < uVar31) goto code_r0x08004e34;
                                uVar14 = regulator_set_voltage(uVar31,*(pcVar25 + 0x28),*(pcVar25 + 0x2c));
                                uVar24 = uVar14;
                                if (uVar14 < 0) {
                                    pcVar26 = NULL;
                                }
                                else {
                                    pcVar26 = NULL;
                                    iVar17 = 0;
                                    do {
                                        iVar20 = iVar17;
                                        if (uVar13 * 0x48 + -0x48 == iVar20) goto code_r0x08004624;
                                        unaff_x26 = pcVar25 + iVar20;
                                        pcVar18 = unaff_x26 + 0x50;
                                        uVar31 = regulator_get(pcVar27,pcVar18);
                                        *(unaff_x26 + 0x48) = uVar31;
                                        if (uVar31 == 0) goto code_r0x08005068;
                                        if (0xfffffffffffff000 < uVar31) goto code_r0x08005068;
                                        uVar14 = regulator_set_voltage
                                                           (uVar31,*(pcVar25 + iVar20 + 0x70),
                                                            *(pcVar25 + iVar20 + 0x74));
                                        uVar24 = uVar14;
                                        pcVar26 = pcVar26 + 1;
                                        iVar17 = iVar20 + 0x48;
                                    } while (-1 < uVar14);
                                    pcVar18 = pcVar25 + iVar20 + 0x50;
                                }
                                pcVar27 = pcVar26 & 0xffffffff;
                                _printk(0x8000ade,"lt9611uxc_config_vreg",pcVar18);
                                goto code_r0x080050b4;
                            }
                            uVar24 = 0xfffffff4;
                            uVar21 = 0x8001329;
                            goto code_r0x080040c8;
                        }
                    }
                    uVar21 = 0x8000eb3;
                }
                _printk(uVar21,"lt9611uxc_get_dt_supply");
                goto code_r0x08004624;
            }
            _printk(0x8000f44,"lt9611uxc_get_dt_supply",0,arg1_00);
            uVar24 = 0xffffffea;
            uVar21 = 0x8001329;
            pcVar18 = pcVar29;
            goto code_r0x080040c8;
        }
    }
    uVar21 = 0x8000aa8;
    pcVar18 = pcVar29;
code_r0x080040c8:
    do {
        _printk(uVar21,"lt9611uxc_probe");
code_r0x08003fa8:
        while( true ) {
            iVar17 = sp_el0;
            if (*(iVar17 + 0x5e0) == iStack_1e8) {
                return uVar24;
            }
            __stack_chk_fail();
code_r0x08005068:
            pcVar29 = pcVar26 + 1;
            pcVar30 = unaff_x26 + 0x48;
code_r0x08004e34:
            _printk(0x80009a3,"lt9611uxc_config_vreg",pcVar18,uVar24);
            while( true ) {
                uVar13 = pcVar29 - 1;
                pcVar26 = uVar13;
                *pcVar30 = 0;
                if (uVar13 < 0) break;
                regulator_set_load(*(pcVar25 + pcVar26 * 0x48),0);
                pcVar27 = pcVar26;
code_r0x080050b4:
                pcVar30 = pcVar25 + pcVar27 * 0x48;
                regulator_put(*pcVar30);
                pcVar29 = pcVar26;
            }
            pcVar26 = pcVar29;
            arg1_00 = pcStack_228;
            if (uVar24 != 0) break;
code_r0x08004624:
            *(arg1_00 + 0x8c0) = pcVar19;
            *arg1_00 = pcStack_230;
            uVar13 = sym.lt9611uxc_gpio_configure(arg1_00);
            pcVar26 = pcStack_230;
            if (uVar13 != 0) {
                uVar24 = uVar13;
                _printk(0x80007e9,"lt9611uxc_probe");
                goto code_r0x08004ae8;
            }
            if (*(arg1_00 + 0x8a8) < 0x200) {
                uVar21 = gpio_to_desc();
                gpiod_set_raw_value(uVar21,1);
                msleep(0x14);
            }
            pcVar25 = *(arg1_00 + 0x8b8);
            uVar13 = *(arg1_00 + 0x8b4);
            pcVar18 = uVar13;
            if (*(arg1_00 + 0x8ac) < 0x200) {
                uVar21 = gpio_to_desc();
                gpiod_set_raw_value(uVar21,1);
            }
            if (*(arg1_00 + 0x8b0) < 0x200) {
                uVar21 = gpio_to_desc();
                gpiod_set_raw_value(uVar21,1);
            }
            if (0 < uVar13) {
                uVar24 = 0;
                pcVar27 = NULL;
                if ((*pcVar25 != 0) && (*pcVar25 < 0xfffffffffffff001)) {
                    pcVar27 = NULL;
                    pcVar30 = pcVar18 + -1;
                    unaff_x26 = 0x3e8;
                    pcVar29 = pcVar25;
                    do {
                        uVar13 = regulator_is_enabled();
                        pcVar18 = uVar13;
                        if ((*(pcVar29 + 0x38) != 0) && (uVar13 == 0)) {
                            iVar17 = *(pcVar29 + 0x38) * 1000;
                            usleep_range_state(iVar17,iVar17,2);
                        }
                        uVar14 = regulator_set_load(*pcVar29,*(pcVar29 + 0x30));
                        if (uVar14 < 0) {
                            uVar24 = uVar14;
                            _printk(0x800067e,"lt9611uxc_enable_vreg",pcVar29 + 8);
                            goto code_r0x08004774;
                        }
                        uVar14 = regulator_enable(*pcVar29);
                        uVar24 = uVar14;
                        if ((*(pcVar29 + 0x3c) != 0) && (uVar13 == 0)) {
                            iVar17 = *(pcVar29 + 0x3c) * 1000;
                            usleep_range_state(iVar17,iVar17,2);
                        }
                        if (uVar14 < 0) {
                            _printk(0x8000697,"lt9611uxc_enable_vreg",pcVar29 + 8);
                            regulator_set_load(*pcVar29,*(pcVar29 + 0x34));
                            goto code_r0x08004774;
                        }
                        if (pcVar30 == pcVar27) goto code_r0x08004778;
                        pcVar29 = pcVar29 + 0x48;
                        pcVar27 = pcVar27 + 1;
                    } while ((*pcVar29 != 0) && (*pcVar29 < 0xfffffffffffff001));
                }
                _printk(0x8000af6,"lt9611uxc_enable_vreg",pcVar25 + (pcVar27 & 0xffffffff) * 0x48 + 8,uVar24);
code_r0x08004774:
                if (pcVar27 != 0) {
                    pcVar18 = pcVar27 + 1;
                    pcVar25 = pcVar25 + pcVar27 * 0x48 + -0x48;
                    do {
                        if (*(pcVar25 + 0x40) != 0) {
                            iVar17 = *(pcVar25 + 0x40) * 1000;
                            usleep_range_state(iVar17,iVar17,2);
                        }
                        regulator_set_load(*pcVar25,*(pcVar25 + 0x34));
                        regulator_disable(*pcVar25);
                        if (*(pcVar25 + 0x44) != 0) {
                            iVar17 = *(pcVar25 + 0x44) * 1000;
                            usleep_range_state(iVar17,iVar17,2);
                        }
                        pcVar18 = pcVar18 + -1;
                        pcVar25 = pcVar25 + -0x48;
                    } while (1 < pcVar18);
                }
code_r0x08004778:
                if (uVar24 == 0) goto code_r0x08004780;
                _printk(0x8001348,"lt9611uxc_probe");
                goto code_r0x08004adc;
            }
code_r0x08004780:
            uVar21 = gpio_to_desc(*(arg1_00 + 0x8a0));
            gpiod_set_raw_value(uVar21,1);
            msleep(0x14);
            uVar21 = gpio_to_desc(*(arg1_00 + 0x8a0));
            gpiod_set_raw_value(uVar21,0);
            msleep(0x14);
            uVar21 = gpio_to_desc(*(arg1_00 + 0x8a0));
            gpiod_set_raw_value(uVar21,1);
            msleep(300);
            sym.lt9611uxc_ctl_en(arg1_00);
            pcVar18 = arg1_00 + 0xb28;
            uVar6 = *(*(arg1_00 + 0x8c0) + 2);
            *(arg1_00 + 0xb28) = 0;
            *(arg1_00 + 0xb30) = 0;
            *(arg1_00 + 0xb38) = 0;
            *(arg1_00 + 0xb40) = 0;
            *(arg1_00 + 0xb48) = 0;
            *(arg1_00 + 0xb50) = 0;
            *(arg1_00 + 0xb58) = 0;
            *(arg1_00 + 0xb60) = 0;
            *(arg1_00 + 0xb68) = 0;
            *(arg1_00 + 0xb70) = 0;
            *(arg1_00 + 0xb78) = 0;
            *(arg1_00 + 0xb80) = 0;
            *(arg1_00 + 0xb88) = 0;
            *(arg1_00 + 0xb90) = 0;
            *(arg1_00 + 0xb98) = 0;
            *(arg1_00 + 0xb28) = 0x81ff;
            *(arg1_00 + 0xba0) = 0;
            uStack_208 = CONCAT62(0x20000,uVar6);
            pcStack_200 = pcVar18;
            iVar11 = i2c_transfer(*(*(arg1_00 + 0x8c0) + 0x18),&uStack_208,1);
            if (iVar11 < 1) {
                _printk(0x8001311,"lt9611uxc_write_byte");
            }
            uVar24 = *(arg1_00 + 0x8c0);
            uVar6 = *(uVar24 + 2);
            pcVar25 = 0x10001;
            uVar8 = *(uVar24 + 2);
            *(arg1_00 + 0xc18) = 0;
            *(arg1_00 + 0xc20) = 0;
            *(arg1_00 + 0xc08) = 0;
            *(arg1_00 + 0xc10) = 0;
            *(arg1_00 + 0xbf8) = 0;
            *(arg1_00 + 0xc00) = 0;
            *(arg1_00 + 0xbe8) = 0;
            *(arg1_00 + 0xbf0) = 0;
            *(arg1_00 + 0xbd8) = 0;
            *(arg1_00 + 0xbe0) = 0;
            *(arg1_00 + 0xbc8) = 0;
            *(arg1_00 + 0xbd0) = 0;
            *(arg1_00 + 3000) = 0;
            *(arg1_00 + 0xbc0) = 0;
            *(arg1_00 + 0xba8) = 0;
            *(arg1_00 + 0xbb0) = 0;
            *(arg1_00 + 0xb98) = 0;
            *(arg1_00 + 0xba0) = 0;
            *(arg1_00 + 0xb88) = 0;
            *(arg1_00 + 0xb90) = 0;
            *(arg1_00 + 0xb78) = 0;
            *(arg1_00 + 0xb80) = 0;
            *(arg1_00 + 0xb68) = 0;
            *(arg1_00 + 0xb70) = 0;
            *(arg1_00 + 0xb58) = 0;
            *(arg1_00 + 0xb60) = 0;
            *(arg1_00 + 0xb48) = 0;
            *(arg1_00 + 0xb50) = 0;
            *(arg1_00 + 0xb38) = 0;
            *(arg1_00 + 0xb40) = 0;
            *pcVar18 = 0;
            *(arg1_00 + 0xb30) = 0;
            uStack_208 = CONCAT62(0x10000,uVar6);
            uStack_1f8._0_6_ = CONCAT42(0x10001,uVar8);
            uStack_1f8 = uStack_1f8;
            pcStack_200 = pcVar18;
            pcStack_1f0 = arg1_00 + 0xba8;
            iVar11 = i2c_transfer(*(uVar24 + 0x18),&uStack_208,2);
            if (iVar11 != 2) {
code_r0x08004a44:
                _printk(0x80006dd,"lt9611uxc_read");
                _printk(0x8000bcd,"lt9611uxc_read_device_id");
                sym.lt9611uxc_ctl_disable(arg1_00);
                msleep(0x32);
                _printk(0x8000f25,"lt9611uxc_probe");
                uVar24 = 0xffffffff;
                goto code_r0x08004adc;
            }
            uVar24 = *(arg1_00 + 0x8c0);
            uVar6 = *(uVar24 + 2);
            uVar8 = *(uVar24 + 2);
            cVar5 = arg1_00[0xba8];
            *(arg1_00 + 0xc18) = 0;
            *(arg1_00 + 0xc20) = 0;
            *(arg1_00 + 0xc08) = 0;
            *(arg1_00 + 0xc10) = 0;
            *(arg1_00 + 0xbf8) = 0;
            *(arg1_00 + 0xc00) = 0;
            *(arg1_00 + 0xbe8) = 0;
            *(arg1_00 + 0xbf0) = 0;
            *(arg1_00 + 0xbd8) = 0;
            *(arg1_00 + 0xbe0) = 0;
            *(arg1_00 + 0xbc8) = 0;
            *(arg1_00 + 0xbd0) = 0;
            *(arg1_00 + 3000) = 0;
            *(arg1_00 + 0xbc0) = 0;
            *(arg1_00 + 0xba8) = 0;
            *(arg1_00 + 0xbb0) = 0;
            *(arg1_00 + 0xb98) = 0;
            *(arg1_00 + 0xba0) = 0;
            *(arg1_00 + 0xb88) = 0;
            *(arg1_00 + 0xb90) = 0;
            *(arg1_00 + 0xb78) = 0;
            *(arg1_00 + 0xb80) = 0;
            *(arg1_00 + 0xb68) = 0;
            *(arg1_00 + 0xb70) = 0;
            *(arg1_00 + 0xb58) = 0;
            *(arg1_00 + 0xb60) = 0;
            *(arg1_00 + 0xb48) = 0;
            *(arg1_00 + 0xb50) = 0;
            *(arg1_00 + 0xb38) = 0;
            *(arg1_00 + 0xb40) = 0;
            *pcVar18 = 0;
            *(arg1_00 + 0xb30) = 0;
            arg1_00[0xb28] = 0x1;
            uStack_208 = CONCAT62(0x10000,uVar6);
            uStack_1f8._0_6_ = CONCAT42(0x10001,uVar8);
            uStack_1f8 = uStack_1f8;
            pcStack_200 = pcVar18;
            pcStack_1f0 = arg1_00 + 0xba8;
            iVar11 = i2c_transfer(*(uVar24 + 0x18),&uStack_208,2);
            if (iVar11 != 2) goto code_r0x08004a44;
            _printk(0x80010d6,"lt9611uxc_read_device_id",CONCAT11(cVar5,arg1_00[0xba8]));
            sym.lt9611uxc_ctl_disable(arg1_00);
            msleep(0x32);
            *(pcVar19 + 0xb8) = arg1_00;
            uVar13 = sysfs_create_group(pcStack_230,obj.lt9611uxc_sysfs_attr_grp);
            pcVar18 = arg1_00;
            if (uVar13 != 0) {
                uVar24 = uVar13;
                _printk(0x8000c51,"lt9611uxc_sysfs_init","lt9611uxc_sysfs_init",uVar24);
                uVar21 = 0x8000b76;
                goto code_r0x08004ed0;
            }
            cVar10 = sym.lt9611uxc_get_version(arg1_00);
            if (cVar10 == '\0') {
                uVar13 = request_firmware_nowait
                                   (obj.__this_module,1,"lt9611uxc_fw.bin",pcStack_230,0xcc0,arg1_00,
                                    sym.lt9611uxc_firmware_cb.e58709b06554ea617982e3f2e7a32f4b.cfi_jt);
                uVar24 = uVar13;
                if (uVar13 != 0) {
                    _printk(0x800031b,"lt9611uxc_probe",uVar24);
                    goto code_r0x08004adc;
                }
            }
            else {
                _printk(0x800101c,"lt9611uxc_probe");
                __mutex_init(arg1_00 + 0x130,"&pdata->lock",obj.lt9611uxc_probe.__key);
                __init_waitqueue_head(arg1_00 + 0xa10,"&pdata->edid_wq",obj.lt9611uxc_probe.__key);
                *(arg1_00 + 0x90) = *(pcVar19 + 0x310);
                *(arg1_00 + 0xb0) = reloc.lt9611uxc_bridge_attach.e58709b06554ea617982e3f2e7a32f4b.cfi_jt;
                drm_bridge_add(arg1_00 + 8);
                uVar24 = alloc_workqueue(0x8000499,0xe000a,1,"lt9611uxc_wk");
                *(arg1_00 + 0x9d8) = uVar24;
                pcVar25 = arg1_00;
                if (uVar24 == 0) {
                    _printk(0x8001214,"lt9611uxc_probe");
                    uVar24 = 0;
                    goto code_r0x08004adc;
                }
                *(arg1_00 + 0x9e0) = 0xfffffffe0;
                *(arg1_00 + 0x9e8) = arg1_00 + 0x9e8;
                *(arg1_00 + 0x9f0) = arg1_00 + 0x9e8;
                *(arg1_00 + 0x9f8) = sym.lt9611uxc_hpd_work.cfi_jt;
                gpio_to_desc(*(arg1_00 + 0x89c));
                uVar21 = gpiod_to_irq();
                *(arg1_00 + 0x894) = uVar21;
                uVar13 = request_threaded_irq
                                   (uVar21,0,sym.lt9611uxc_irq_thread_handler.e58709b06554ea617982e3f2e7a32f4b.cfi_jt
                                    ,0x2002,"lt9611uxc_irq",arg1_00);
                uVar24 = uVar13;
                if (uVar13 != 0) {
                    uVar21 = 0x80010b9;
code_r0x08004ed0:
                    _printk(uVar21,"lt9611uxc_probe");
code_r0x08004adc:
                    sym.lt9611uxc_gpio_configure(arg1_00);
code_r0x08004ae8:
                    sym.lt9611uxc_put_dt_supply(pcStack_230,arg1_00);
                }
            }
        }
code_r0x080050d0:
        if (*(pcStack_228 + 0x8b8) != 0) {
            *(pcStack_228 + 0x8b8) = 0;
            *(pcStack_228 + 0x8b4) = 0;
        }
        uVar21 = 0x8001329;
    } while( true );
}


// ===== sym.lt9611uxc_firmware_upgrade @ 0x08003c0c (size 480) =====

uint64_t sym.lt9611uxc_firmware_upgrade(int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    int16_t iVar2;
    code cVar3;
    uint16_t uVar4;
    ushort uVar5;
    ushort uVar6;
    char cVar7;
    int iVar8;
    uint uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    int iVar12;
    int64_t iVar13;
    code *pcVar14;
    uint64_t uVar15;
    code *pcVar16;
    code *arg1_00;
    int64_t iVar17;
    ulong uVar18;
    uint32_t uVar19;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar20;
    int64_t unaff_x21;
    uint64_t uVar21;
    code *unaff_x23;
    code *pcVar22;
    char *unaff_x24;
    code *pcVar23;
    code *pcVar24;
    int64_t iVar25;
    code *unaff_x26;
    ulong *unaff_x27;
    ulong *puVar26;
    ulong unaff_x28;
    ulong unaff_x30;
    code *pcStack_180;
    code *pcStack_178;
    uint uStack_16c;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    code *pcStack_150;
    ulong uStack_148;
    code *pcStack_140;
    int64_t iStack_138;
    uchar **ppuStack_130;
    code *pcStack_128;
    ulong uStack_120;
    ulong *puStack_118;
    code *pcStack_110;
    int64_t iStack_108;
    char *pcStack_100;
    code *pcStack_f8;
    uint64_t uStack_f0;
    code *pcStack_e8;
    ulong uStack_e0;
    code *pcStack_d8;
    ulong uStack_c8;
    code *pcStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    int64_t iStack_a0;
    int64_t iStack_90;
    int64_t iStack_88;
    ulong uStack_78;
    ulong *puStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_68 = *(iVar13 + 0x5e0);
    uVar21 = *arg2;
    _printk(0x8000c20,"lt9611uxc_firmware_upgrade",uVar21 & 0xffffffff);
    iVar25 = uVar21 << 0x20;
    iVar13 = __kmalloc(iVar25 + 0x1f00000000 >> 0x20 & 0xffffffffffffffe0,0xdc0);
    uVar15 = 0;
    iStack_a0 = unaff_x21;
    if (iVar13 != 0) {
        iVar17 = 0;
        unaff_x27 = arg1 + 0xb28;
        unaff_x28 = 0x8001730;
        unaff_x23 = 0x2;
        unaff_x24 = "lt9611uxc_write_byte";
        *(arg1 + 0xc30) = 1;
        do {
            uVar5 = *(iVar17 + 0x8001730);
            uVar4 = *(*(arg1 + 0x8c0) + 2);
            *unaff_x27 = 0;
            *(arg1 + 0xb30) = 0;
            *(arg1 + 0xb38) = 0;
            *(arg1 + 0xb40) = 0;
            *(arg1 + 0xb48) = 0;
            *(arg1 + 0xb50) = 0;
            *(arg1 + 0xb58) = 0;
            *(arg1 + 0xb60) = 0;
            *(arg1 + 0xb68) = 0;
            *(arg1 + 0xb70) = 0;
            *(arg1 + 0xb78) = 0;
            *(arg1 + 0xb80) = 0;
            *(arg1 + 0xb88) = 0;
            *(arg1 + 0xb90) = 0;
            *(arg1 + 0xb98) = 0;
            *(arg1 + 0xba0) = 0;
            *(arg1 + 0xb28) = uVar5;
            uStack_78 = CONCAT24(2,uVar4);
            puStack_70 = unaff_x27;
            iVar8 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_78,1);
            if (iVar8 < 1) {
                _printk(0x8001311,"lt9611uxc_write_byte");
            }
            iVar17 = iVar17 + 2;
        } while (iVar17 != 0xe);
        sym.lt9611uxc_block_erase(arg1);
        sym.lt9611uxc_block_erase(arg1);
        sym.lt9611uxc_firmware_write(arg1,*(arg2 + 8),uVar21 & 0xffffffff);
        msleep(0x14);
        sym.lt9611uxc_fw_read_back(arg1,iVar13,uVar21);
        iVar8 = bcmp(*(arg2 + 8),iVar13,iVar25 >> 0x20);
        uVar18 = 0x8000ff4;
        if (iVar8 != 0) {
            uVar18 = 0x8000a82;
        }
        *(arg1 + 0xc30) = (iVar8 != 0) << 1;
        _printk(uVar18,"lt9611uxc_firmware_upgrade");
        uVar15 = kfree(iVar13);
        unaff_x26 = 0xe;
        iStack_a0 = iVar13;
    }
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_68) {
        return uVar15;
    }
    pcVar14 = __stack_chk_fail();
    *extraout_x18 = sym.lt9611uxc_edid_en;
    pcStack_a8 = sym.lt9611uxc_edid_en;
    iVar13 = sp_el0;
    iStack_b8 = *(iVar13 + 0x5e0);
    pcVar22 = pcVar14 + 0xb28;
    uVar5 = *(*(pcVar14 + 0x8c0) + 2);
    *(pcVar14 + 0xb28) = 0;
    *(pcVar14 + 0xb30) = 0;
    *(pcVar14 + 0xb38) = 0;
    *(pcVar14 + 0xb40) = 0;
    *(pcVar14 + 0xb48) = 0;
    *(pcVar14 + 0xb50) = 0;
    *(pcVar14 + 0xb58) = 0;
    *(pcVar14 + 0xb60) = 0;
    *(pcVar14 + 0xb68) = 0;
    *(pcVar14 + 0xb70) = 0;
    *(pcVar14 + 0xb78) = 0;
    *(pcVar14 + 0xb80) = 0;
    *(pcVar14 + 0xb88) = 0;
    *(pcVar14 + 0xb90) = 0;
    *(pcVar14 + 0xb98) = 0;
    *(pcVar14 + 0xb28) = 0xb0ff;
    *(pcVar14 + 0xba0) = 0;
    uStack_c8 = CONCAT62(0x20000,uVar5);
    pcStack_c0 = pcVar22;
    puStack_b0 = &stack0xffffffffffffffa0;
    iStack_90 = arg2;
    iStack_88 = arg1;
    iVar8 = i2c_transfer(*(*(pcVar14 + 0x8c0) + 0x18),&uStack_c8,1);
    if (iVar8 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar5 = *(*(pcVar14 + 0x8c0) + 2);
    *pcVar22 = 0;
    *(pcVar14 + 0xb30) = 0;
    *(pcVar14 + 0xb38) = 0;
    *(pcVar14 + 0xb40) = 0;
    *(pcVar14 + 0xb48) = 0;
    *(pcVar14 + 0xb50) = 0;
    *(pcVar14 + 0xb58) = 0;
    *(pcVar14 + 0xb60) = 0;
    *(pcVar14 + 0xb68) = 0;
    *(pcVar14 + 0xb70) = 0;
    *(pcVar14 + 0xb78) = 0;
    *(pcVar14 + 0xb80) = 0;
    *(pcVar14 + 0xb88) = 0;
    *(pcVar14 + 0xb90) = 0;
    *(pcVar14 + 0xb98) = 0;
    *(pcVar14 + 0xba0) = 0;
    *(pcVar14 + 0xb28) = 0x100b;
    uStack_c8 = CONCAT62(0x20000,uVar5);
    pcStack_c0 = pcVar22;
    uVar15 = i2c_transfer(*(*(pcVar14 + 0x8c0) + 0x18),&uStack_c8,1);
    if (uVar15 < 1) {
        uVar15 = _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_b8) {
        return uVar15;
    }
    pcVar16 = __stack_chk_fail();
    *extraout_x18_00 = sym.lt9611uxc_probe;
    pcStack_128 = sym.lt9611uxc_probe;
    uStack_e0 = 0x200000000;
    iVar13 = sp_el0;
    iStack_138 = *(iVar13 + 0x5e0);
    ppuStack_130 = &puStack_b0;
    uStack_120 = unaff_x28;
    puStack_118 = unaff_x27;
    pcStack_110 = unaff_x26;
    iStack_108 = iVar25;
    pcStack_100 = unaff_x24;
    pcStack_f8 = unaff_x23;
    uStack_f0 = uVar21;
    pcStack_e8 = pcVar22;
    pcStack_d8 = pcVar14;
    if ((pcVar16 == NULL) || (pcVar22 = pcVar16, *(pcVar16 + 0x310) == 0)) {
        _printk(0x8000306,"lt9611uxc_probe");
        uVar15 = 0xffffffea;
        pcVar20 = 0x200000000;
        pcVar16 = pcVar22;
        goto code_r0x08003fa8;
    }
    pcVar14 = *(pcVar16 + 0x18);
    pcVar20 = *(*(pcVar14 + 0x10) + 0x20);
    __cfi_slowpath_diag(0x6871e466cec98751,pcVar20,0x8000270);
    uVar15 = (*pcVar20)(pcVar14);
    if ((uVar15 & 1) == 0) {
        _printk(0x8000c9e,"lt9611uxc_probe");
        uVar15 = 0xffffffed;
        goto code_r0x08003fa8;
    }
    pcVar22 = pcVar16 + 0x20;
    _printk(0x8000cc0,"lt9611uxc_probe","lt9611uxc_probe");
    arg1_00 = devm_kmalloc(pcVar22,0xc38,0xdc0);
    pcVar20 = pcVar22;
    if (arg1_00 == NULL) {
        uVar15 = 0xfffffff4;
        goto code_r0x08003fa8;
    }
    pcVar23 = *(pcVar16 + 0x310);
    iVar13 = of_graph_get_endpoint_by_regs(pcVar23,0,0);
    if (iVar13 == 0) {
        uVar18 = 0x8000d3c;
code_r0x080040b0:
        _printk(uVar18,"lt9611uxc_parse_dt");
        uVar15 = 0xffffffed;
    }
    else {
        uVar15 = of_graph_get_remote_port_parent();
        *(arg1_00 + 0x118) = uVar15;
        if (uVar15 == 0) {
            uVar18 = 0x8000e6b;
            goto code_r0x080040b0;
        }
        uVar10 = of_get_named_gpio_flags(pcVar23,"lt,irq-gpio",0,0);
        uVar15 = 0;
        *(arg1_00 + 0x89c) = uVar10;
        if (0x1ff < uVar10) {
            _printk(0x800083a,"lt9611uxc_parse_dt");
            uVar15 = 0xffffffea;
        }
        uVar10 = of_get_named_gpio_flags(pcVar23,"lt,reset-gpio",0,0);
        *(arg1_00 + 0x8a0) = uVar10;
        if (0x1ff < uVar10) {
            _printk(0x80005ef,"lt9611uxc_parse_dt");
            uVar15 = 0xffffffea;
        }
        uVar9 = of_get_named_gpio_flags(pcVar23,"lt,hdmi-ps-gpio",0,0);
        *(arg1_00 + 0x8a4) = uVar9;
        uVar9 = of_get_named_gpio_flags(pcVar23,"lt,hdmi-en-gpio",0,0);
        *(arg1_00 + 0x8a8) = uVar9;
        uVar9 = of_get_named_gpio_flags(pcVar23,"lt,hdmi-3p3-en",0,0);
        *(arg1_00 + 0x8ac) = uVar9;
        uVar9 = of_get_named_gpio_flags(pcVar23,"lt,hdmi-1p2-en",0,0);
        *(arg1_00 + 0x8b0) = uVar9;
        iVar13 = of_find_property(pcVar23,"lt,ac-mode",0);
        pcStack_178 = arg1_00 + 0x8d8;
        arg1_00[0x898] = iVar13 != 0;
        *(arg1_00 + 0x8d8) = pcStack_178;
        *(arg1_00 + 0x8e0) = pcStack_178;
        uStack_158 = uStack_158._4_4_ << 0x20;
        uStack_168 = 0;
        uStack_160 = 0;
        uStack_16c = 0;
        iVar13 = of_get_child_by_name(pcVar23,"lt,customize-modes");
        if ((iVar13 == 0) && (iVar13 = of_parse_phandle(pcVar23,"lt,customize-modes",0), iVar13 == 0)) {
            _printk(0x8000f8e,"lt9611uxc_parse_dt_modes");
        }
        else {
            iVar25 = of_get_next_child(iVar13,0);
            if (iVar25 == 0) {
                unaff_x26 = NULL;
            }
            else {
                unaff_x26 = NULL;
                uVar10 = 0;
                do {
                    pcVar14 = kmem_cache_alloc_trace(_drm_atomic_helper_connector_destroy_state,0xdc0,0x78);
                    if (pcVar14 == NULL) {
                        _printk(0x8000e88,"lt9611uxc_parse_dt_modes");
                    }
                    else {
                        iVar8 = of_property_read_variable_u32_array(iVar25,"lt,mode-h-active",pcVar14 + 4,1,0);
                        pcVar23 = pcVar14;
                        if (iVar8 < 0) {
                            uVar18 = 0x8000473;
                        }
                        else {
                            iVar8 = of_property_read_variable_u32_array
                                              (iVar25,"lt,mode-h-front-porch",&uStack_158,1,0);
                            if (iVar8 < 0) {
                                uVar18 = 0x8001234;
                            }
                            else {
                                iVar8 = of_property_read_variable_u32_array
                                                  (iVar25,"lt,mode-h-pulse-width",&uStack_160 + 4,1,0);
                                if (iVar8 < 0) {
                                    uVar18 = 0x8000cd5;
                                }
                                else {
                                    iVar8 = of_property_read_variable_u32_array
                                                      (iVar25,"lt,mode-h-back-porch",&uStack_160,1,0);
                                    if (iVar8 < 0) {
                                        uVar18 = 0x8001047;
                                    }
                                    else {
                                        iVar17 = of_find_property(iVar25,"lt,mode-h-active-high",0);
                                        iVar8 = of_property_read_variable_u32_array
                                                          (iVar25,"lt,mode-v-active",pcVar14 + 0xe,1,0);
                                        if (iVar8 < 0) {
                                            uVar18 = 0x8000d5d;
                                        }
                                        else {
                                            iVar8 = of_property_read_variable_u32_array
                                                              (iVar25,"lt,mode-v-front-porch",&uStack_168 + 4,1,0);
                                            if (iVar8 < 0) {
                                                uVar18 = 0x800094e;
                                            }
                                            else {
                                                iVar8 = of_property_read_variable_u32_array
                                                                  (iVar25,"lt,mode-v-pulse-width",&uStack_168,1,0);
                                                if (iVar8 < 0) {
                                                    uVar18 = 0x8000757;
                                                }
                                                else {
                                                    iVar8 = of_property_read_variable_u32_array
                                                                      (iVar25,"lt,mode-v-back-porch",&uStack_16c,1,0
                                                                      );
                                                    if (iVar8 < 0) {
                                                        uVar18 = 0x8000979;
                                                    }
                                                    else {
                                                        pcVar20 = of_find_property(iVar25,"lt,mode-v-active-high",0);
                                                        iVar8 = of_property_read_variable_u32_array
                                                                          (iVar25,"lt,mode-clock-in-khz",pcVar14,1,0
                                                                          );
                                                        if (-1 < iVar8) {
                                                            iVar1 = *(pcVar14 + 4) + uStack_158 + uStack_160._4_2_;
                                                            puVar26 = *(arg1_00 + 0x8e0);
                                                            *(pcVar14 + 6) = *(pcVar14 + 4) + uStack_158;
                                                            *(pcVar14 + 8) = iVar1;
                                                            iVar2 = *(pcVar14 + 0xe) + uStack_168._4_2_ + uStack_168;
                                                            *(pcVar14 + 0x10) = *(pcVar14 + 0xe) + uStack_168._4_2_;
                                                            *(pcVar14 + 10) = iVar1 + uStack_160;
                                                            uVar11 = 1;
                                                            if (iVar17 == 0) {
                                                                uVar11 = 2;
                                                            }
                                                            uVar19 = 8;
                                                            if (pcVar20 != NULL) {
                                                                uVar19 = 4;
                                                            }
                                                            pcVar20 = pcVar14 + 0x40;
                                                            uVar10 = uVar11 | uVar10 | uVar19;
                                                            *(pcVar14 + 0x12) = iVar2;
                                                            *(pcVar14 + 0x14) = iVar2 + uStack_16c;
                                                            *(pcVar14 + 0x18) = uVar10;
                                                            uVar21 = __list_add_valid(pcVar20,puVar26,pcStack_178);
                                                            if ((uVar21 & 1) != 0) {
                                                                *(arg1_00 + 0x8e0) = pcVar20;
                                                                *(pcVar14 + 0x40) = pcStack_178;
                                                                *(pcVar14 + 0x48) = puVar26;
                                                                *puVar26 = pcVar20;
                                                            }
                                                            unaff_x26 = unaff_x26 + 1;
                                                            drm_mode_set_name(pcVar14);
                                                            goto code_r0x080042cc;
                                                        }
                                                        uVar18 = 0x8000d15;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        _printk(uVar18,"lt9611uxc_parse_dt_modes",iVar8);
                        kfree(pcVar14);
                    }
code_r0x080042cc:
                    iVar25 = of_get_next_child(iVar13,iVar25);
                } while (iVar25 != 0);
            }
            *(arg1_00 + 0x8d0) = unaff_x26;
            unaff_x23 = arg1_00;
        }
        pcStack_180 = pcVar22;
        if (uVar15 == 0) {
            uStack_160 = uStack_160 & 0xffffffff;
            if (pcVar22 != NULL) {
                uVar15 = *(pcVar16 + 0x310);
                *(arg1_00 + 0x8b4) = 0;
                pcVar14 = of_get_child_by_name(uVar15,"lt,supply-entries");
                if (pcVar14 == NULL) {
                    uVar18 = 0x80004ab;
                    pcVar14 = pcVar23;
                }
                else {
                    iVar13 = of_get_next_available_child(pcVar14,0);
                    if (iVar13 == 0) {
                        *(arg1_00 + 0x8b4) = 0;
                    }
                    else {
                        pcVar20 = NULL;
                        do {
                            uVar10 = pcVar20 + 1;
                            pcVar20 = uVar10;
                            iVar13 = of_get_next_available_child(pcVar14,iVar13);
                        } while (iVar13 != 0);
                        *(arg1_00 + 0x8b4) = uVar10;
                        if (uVar10 != 0) {
                            uVar15 = devm_kmalloc(pcVar22,pcVar20 * 0x48,0xdc0);
                            *(arg1_00 + 0x8b8) = uVar15;
                            pcStack_178 = arg1_00;
                            if (uVar15 != 0) {
                                pcVar20 = of_get_next_available_child(pcVar14,0);
                                if (pcVar20 != NULL) {
                                    unaff_x26 = NULL;
                                    do {
                                        uStack_158 = 0;
                                        uVar10 = of_property_read_string(pcVar20,"lt,supply-name",&uStack_158);
                                        if (uVar10 != 0) {
                                            uVar18 = 0x800035d;
code_r0x08004e70:
                                            uVar15 = uVar10;
                                            _printk(uVar18,"lt9611uxc_get_dt_supply",uVar15);
                                            goto code_r0x080050d0;
                                        }
                                        iVar8 = unaff_x26;
                                        strscpy(*(arg1_00 + 0x8b8) + iVar8 * 0x48 + 8,uStack_158,0x20);
                                        uVar10 = of_property_read_variable_u32_array
                                                           (pcVar20,"lt,supply-min-voltage",&uStack_160 + 4,1,0);
                                        if (uVar10 < 0) {
                                            uVar18 = 0x80004ca;
                                            goto code_r0x08004e70;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar8 * 0x48 + 0x28) = uStack_160._4_4_;
                                        uVar10 = of_property_read_variable_u32_array
                                                           (pcVar20,"lt,supply-max-voltage",&uStack_160 + 4,1,0);
                                        if (uVar10 < 0) {
                                            uVar15 = uVar10;
                                            _printk(0x8000598,"lt9611uxc_get_dt_supply",uVar15);
                                            unaff_x23 = arg1_00;
                                            goto code_r0x080050d0;
                                        }
                                        iVar13 = iVar8 * 0x48;
                                        *(*(arg1_00 + 0x8b8) + iVar13 + 0x2c) = uStack_160._4_4_;
                                        iVar12 = of_property_read_variable_u32_array
                                                           (pcVar20,"lt,supply-enable-load",&uStack_160 + 4,1,0);
                                        uVar9 = 0;
                                        if (-1 < iVar12) {
                                            uVar9 = uStack_160._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar13 + 0x30) = uVar9;
                                        iVar12 = of_property_read_variable_u32_array
                                                           (pcVar20,"lt,supply-disable-load",&uStack_160 + 4,1,0);
                                        uVar9 = 0;
                                        if (-1 < iVar12) {
                                            uVar9 = uStack_160._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar13 + 0x34) = uVar9;
                                        iVar12 = of_property_read_variable_u32_array
                                                           (pcVar20,"lt,supply-pre-on-sleep",&uStack_160 + 4,1,0);
                                        uVar9 = 0;
                                        if (-1 < iVar12) {
                                            uVar9 = uStack_160._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar13 + 0x38) = uVar9;
                                        iVar12 = of_property_read_variable_u32_array
                                                           (pcVar20,"lt,supply-pre-off-sleep",&uStack_160 + 4,1,0);
                                        uVar9 = 0;
                                        if (-1 < iVar12) {
                                            uVar9 = uStack_160._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar13 + 0x40) = uVar9;
                                        iVar12 = of_property_read_variable_u32_array
                                                           (pcVar20,"lt,supply-post-on-sleep",&uStack_160 + 4,1,0);
                                        uVar9 = 0;
                                        if (-1 < iVar12) {
                                            uVar9 = uStack_160._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar13 + 0x3c) = uVar9;
                                        iVar12 = of_property_read_variable_u32_array
                                                           (pcVar20,"lt,supply-post-off-sleep",&uStack_160 + 4,1,0);
                                        unaff_x26 = iVar8 + 1;
                                        uVar9 = 0;
                                        if (-1 < iVar12) {
                                            uVar9 = uStack_160._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar13 + 0x44) = uVar9;
                                        pcVar20 = of_get_next_available_child(pcVar14,pcVar20);
                                        unaff_x23 = arg1_00;
                                    } while (pcVar20 != NULL);
                                }
                                pcVar20 = *(arg1_00 + 0x8b8);
                                if (pcVar20 == NULL) goto code_r0x08004624;
                                uVar10 = *(arg1_00 + 0x8b4);
                                if (uVar10 < 1) goto code_r0x08004624;
                                pcVar14 = pcVar20 + 8;
                                uVar21 = regulator_get(pcVar22,pcVar14);
                                uVar15 = 0;
                                pcVar23 = NULL;
                                *pcVar20 = uVar21;
                                pcVar24 = pcVar20;
                                if (uVar21 == 0) goto code_r0x08004e34;
                                if (0xfffffffffffff000 < uVar21) goto code_r0x08004e34;
                                uVar11 = regulator_set_voltage(uVar21,*(pcVar20 + 0x28),*(pcVar20 + 0x2c));
                                uVar15 = uVar11;
                                if (uVar11 < 0) {
                                    unaff_x23 = NULL;
                                }
                                else {
                                    unaff_x23 = NULL;
                                    iVar13 = 0;
                                    do {
                                        iVar25 = iVar13;
                                        if (uVar10 * 0x48 + -0x48 == iVar25) goto code_r0x08004624;
                                        unaff_x26 = pcVar20 + iVar25;
                                        pcVar14 = unaff_x26 + 0x50;
                                        uVar21 = regulator_get(pcVar22,pcVar14);
                                        *(unaff_x26 + 0x48) = uVar21;
                                        if (uVar21 == 0) goto code_r0x08005068;
                                        if (0xfffffffffffff000 < uVar21) goto code_r0x08005068;
                                        uVar11 = regulator_set_voltage
                                                           (uVar21,*(pcVar20 + iVar25 + 0x70),
                                                            *(pcVar20 + iVar25 + 0x74));
                                        uVar15 = uVar11;
                                        unaff_x23 = unaff_x23 + 1;
                                        iVar13 = iVar25 + 0x48;
                                    } while (-1 < uVar11);
                                    pcVar14 = pcVar20 + iVar25 + 0x50;
                                }
                                pcVar22 = unaff_x23 & 0xffffffff;
                                _printk(0x8000ade,"lt9611uxc_config_vreg",pcVar14);
                                goto code_r0x080050b4;
                            }
                            uVar15 = 0xfffffff4;
                            uVar18 = 0x8001329;
                            goto code_r0x080040c8;
                        }
                    }
                    uVar18 = 0x8000eb3;
                }
                _printk(uVar18,"lt9611uxc_get_dt_supply");
                goto code_r0x08004624;
            }
            _printk(0x8000f44,"lt9611uxc_get_dt_supply",0,arg1_00);
            uVar15 = 0xffffffea;
            uVar18 = 0x8001329;
            pcVar14 = pcVar23;
            goto code_r0x080040c8;
        }
    }
    uVar18 = 0x8000aa8;
    pcVar14 = pcVar23;
code_r0x080040c8:
    do {
        _printk(uVar18,"lt9611uxc_probe");
code_r0x08003fa8:
        while( true ) {
            iVar13 = sp_el0;
            if (*(iVar13 + 0x5e0) == iStack_138) {
                return uVar15;
            }
            __stack_chk_fail();
code_r0x08005068:
            pcVar23 = unaff_x23 + 1;
            pcVar24 = unaff_x26 + 0x48;
code_r0x08004e34:
            _printk(0x80009a3,"lt9611uxc_config_vreg",pcVar14,uVar15);
            while( true ) {
                uVar10 = pcVar23 - 1;
                unaff_x23 = uVar10;
                *pcVar24 = 0;
                if (uVar10 < 0) break;
                regulator_set_load(*(pcVar20 + unaff_x23 * 0x48),0);
                pcVar22 = unaff_x23;
code_r0x080050b4:
                pcVar24 = pcVar20 + pcVar22 * 0x48;
                regulator_put(*pcVar24);
                pcVar23 = unaff_x23;
            }
            unaff_x23 = pcVar23;
            arg1_00 = pcStack_178;
            if (uVar15 != 0) break;
code_r0x08004624:
            *(arg1_00 + 0x8c0) = pcVar16;
            *arg1_00 = pcStack_180;
            uVar10 = sym.lt9611uxc_gpio_configure(arg1_00);
            unaff_x23 = pcStack_180;
            if (uVar10 != 0) {
                uVar15 = uVar10;
                _printk(0x80007e9,"lt9611uxc_probe");
                goto code_r0x08004ae8;
            }
            if (*(arg1_00 + 0x8a8) < 0x200) {
                uVar18 = gpio_to_desc();
                gpiod_set_raw_value(uVar18,1);
                msleep(0x14);
            }
            pcVar20 = *(arg1_00 + 0x8b8);
            uVar10 = *(arg1_00 + 0x8b4);
            pcVar14 = uVar10;
            if (*(arg1_00 + 0x8ac) < 0x200) {
                uVar18 = gpio_to_desc();
                gpiod_set_raw_value(uVar18,1);
            }
            if (*(arg1_00 + 0x8b0) < 0x200) {
                uVar18 = gpio_to_desc();
                gpiod_set_raw_value(uVar18,1);
            }
            if (0 < uVar10) {
                uVar15 = 0;
                pcVar22 = NULL;
                if ((*pcVar20 != 0) && (*pcVar20 < 0xfffffffffffff001)) {
                    pcVar22 = NULL;
                    pcVar24 = pcVar14 + -1;
                    unaff_x26 = 0x3e8;
                    pcVar23 = pcVar20;
                    do {
                        uVar10 = regulator_is_enabled();
                        pcVar14 = uVar10;
                        if ((*(pcVar23 + 0x38) != 0) && (uVar10 == 0)) {
                            iVar13 = *(pcVar23 + 0x38) * 1000;
                            usleep_range_state(iVar13,iVar13,2);
                        }
                        uVar11 = regulator_set_load(*pcVar23,*(pcVar23 + 0x30));
                        if (uVar11 < 0) {
                            uVar15 = uVar11;
                            _printk(0x800067e,"lt9611uxc_enable_vreg",pcVar23 + 8);
                            goto code_r0x08004774;
                        }
                        uVar11 = regulator_enable(*pcVar23);
                        uVar15 = uVar11;
                        if ((*(pcVar23 + 0x3c) != 0) && (uVar10 == 0)) {
                            iVar13 = *(pcVar23 + 0x3c) * 1000;
                            usleep_range_state(iVar13,iVar13,2);
                        }
                        if (uVar11 < 0) {
                            _printk(0x8000697,"lt9611uxc_enable_vreg",pcVar23 + 8);
                            regulator_set_load(*pcVar23,*(pcVar23 + 0x34));
                            goto code_r0x08004774;
                        }
                        if (pcVar24 == pcVar22) goto code_r0x08004778;
                        pcVar23 = pcVar23 + 0x48;
                        pcVar22 = pcVar22 + 1;
                    } while ((*pcVar23 != 0) && (*pcVar23 < 0xfffffffffffff001));
                }
                _printk(0x8000af6,"lt9611uxc_enable_vreg",pcVar20 + (pcVar22 & 0xffffffff) * 0x48 + 8,uVar15);
code_r0x08004774:
                if (pcVar22 != 0) {
                    pcVar14 = pcVar22 + 1;
                    pcVar20 = pcVar20 + pcVar22 * 0x48 + -0x48;
                    do {
                        if (*(pcVar20 + 0x40) != 0) {
                            iVar13 = *(pcVar20 + 0x40) * 1000;
                            usleep_range_state(iVar13,iVar13,2);
                        }
                        regulator_set_load(*pcVar20,*(pcVar20 + 0x34));
                        regulator_disable(*pcVar20);
                        if (*(pcVar20 + 0x44) != 0) {
                            iVar13 = *(pcVar20 + 0x44) * 1000;
                            usleep_range_state(iVar13,iVar13,2);
                        }
                        pcVar14 = pcVar14 + -1;
                        pcVar20 = pcVar20 + -0x48;
                    } while (1 < pcVar14);
                }
code_r0x08004778:
                if (uVar15 == 0) goto code_r0x08004780;
                _printk(0x8001348,"lt9611uxc_probe");
                goto code_r0x08004adc;
            }
code_r0x08004780:
            uVar18 = gpio_to_desc(*(arg1_00 + 0x8a0));
            gpiod_set_raw_value(uVar18,1);
            msleep(0x14);
            uVar18 = gpio_to_desc(*(arg1_00 + 0x8a0));
            gpiod_set_raw_value(uVar18,0);
            msleep(0x14);
            uVar18 = gpio_to_desc(*(arg1_00 + 0x8a0));
            gpiod_set_raw_value(uVar18,1);
            msleep(300);
            sym.lt9611uxc_ctl_en(arg1_00);
            pcVar14 = arg1_00 + 0xb28;
            uVar5 = *(*(arg1_00 + 0x8c0) + 2);
            *(arg1_00 + 0xb28) = 0;
            *(arg1_00 + 0xb30) = 0;
            *(arg1_00 + 0xb38) = 0;
            *(arg1_00 + 0xb40) = 0;
            *(arg1_00 + 0xb48) = 0;
            *(arg1_00 + 0xb50) = 0;
            *(arg1_00 + 0xb58) = 0;
            *(arg1_00 + 0xb60) = 0;
            *(arg1_00 + 0xb68) = 0;
            *(arg1_00 + 0xb70) = 0;
            *(arg1_00 + 0xb78) = 0;
            *(arg1_00 + 0xb80) = 0;
            *(arg1_00 + 0xb88) = 0;
            *(arg1_00 + 0xb90) = 0;
            *(arg1_00 + 0xb98) = 0;
            *(arg1_00 + 0xb28) = 0x81ff;
            *(arg1_00 + 0xba0) = 0;
            uStack_158 = CONCAT62(0x20000,uVar5);
            pcStack_150 = pcVar14;
            iVar8 = i2c_transfer(*(*(arg1_00 + 0x8c0) + 0x18),&uStack_158,1);
            if (iVar8 < 1) {
                _printk(0x8001311,"lt9611uxc_write_byte");
            }
            uVar15 = *(arg1_00 + 0x8c0);
            uVar5 = *(uVar15 + 2);
            pcVar20 = 0x10001;
            uVar6 = *(uVar15 + 2);
            *(arg1_00 + 0xc18) = 0;
            *(arg1_00 + 0xc20) = 0;
            *(arg1_00 + 0xc08) = 0;
            *(arg1_00 + 0xc10) = 0;
            *(arg1_00 + 0xbf8) = 0;
            *(arg1_00 + 0xc00) = 0;
            *(arg1_00 + 0xbe8) = 0;
            *(arg1_00 + 0xbf0) = 0;
            *(arg1_00 + 0xbd8) = 0;
            *(arg1_00 + 0xbe0) = 0;
            *(arg1_00 + 0xbc8) = 0;
            *(arg1_00 + 0xbd0) = 0;
            *(arg1_00 + 3000) = 0;
            *(arg1_00 + 0xbc0) = 0;
            *(arg1_00 + 0xba8) = 0;
            *(arg1_00 + 0xbb0) = 0;
            *(arg1_00 + 0xb98) = 0;
            *(arg1_00 + 0xba0) = 0;
            *(arg1_00 + 0xb88) = 0;
            *(arg1_00 + 0xb90) = 0;
            *(arg1_00 + 0xb78) = 0;
            *(arg1_00 + 0xb80) = 0;
            *(arg1_00 + 0xb68) = 0;
            *(arg1_00 + 0xb70) = 0;
            *(arg1_00 + 0xb58) = 0;
            *(arg1_00 + 0xb60) = 0;
            *(arg1_00 + 0xb48) = 0;
            *(arg1_00 + 0xb50) = 0;
            *(arg1_00 + 0xb38) = 0;
            *(arg1_00 + 0xb40) = 0;
            *pcVar14 = 0;
            *(arg1_00 + 0xb30) = 0;
            uStack_158 = CONCAT62(0x10000,uVar5);
            uStack_148._0_6_ = CONCAT42(0x10001,uVar6);
            uStack_148 = uStack_148;
            pcStack_150 = pcVar14;
            pcStack_140 = arg1_00 + 0xba8;
            iVar8 = i2c_transfer(*(uVar15 + 0x18),&uStack_158,2);
            if (iVar8 != 2) {
code_r0x08004a44:
                _printk(0x80006dd,"lt9611uxc_read");
                _printk(0x8000bcd,"lt9611uxc_read_device_id");
                sym.lt9611uxc_ctl_disable(arg1_00);
                msleep(0x32);
                _printk(0x8000f25,"lt9611uxc_probe");
                uVar15 = 0xffffffff;
                goto code_r0x08004adc;
            }
            uVar15 = *(arg1_00 + 0x8c0);
            uVar5 = *(uVar15 + 2);
            uVar6 = *(uVar15 + 2);
            cVar3 = arg1_00[0xba8];
            *(arg1_00 + 0xc18) = 0;
            *(arg1_00 + 0xc20) = 0;
            *(arg1_00 + 0xc08) = 0;
            *(arg1_00 + 0xc10) = 0;
            *(arg1_00 + 0xbf8) = 0;
            *(arg1_00 + 0xc00) = 0;
            *(arg1_00 + 0xbe8) = 0;
            *(arg1_00 + 0xbf0) = 0;
            *(arg1_00 + 0xbd8) = 0;
            *(arg1_00 + 0xbe0) = 0;
            *(arg1_00 + 0xbc8) = 0;
            *(arg1_00 + 0xbd0) = 0;
            *(arg1_00 + 3000) = 0;
            *(arg1_00 + 0xbc0) = 0;
            *(arg1_00 + 0xba8) = 0;
            *(arg1_00 + 0xbb0) = 0;
            *(arg1_00 + 0xb98) = 0;
            *(arg1_00 + 0xba0) = 0;
            *(arg1_00 + 0xb88) = 0;
            *(arg1_00 + 0xb90) = 0;
            *(arg1_00 + 0xb78) = 0;
            *(arg1_00 + 0xb80) = 0;
            *(arg1_00 + 0xb68) = 0;
            *(arg1_00 + 0xb70) = 0;
            *(arg1_00 + 0xb58) = 0;
            *(arg1_00 + 0xb60) = 0;
            *(arg1_00 + 0xb48) = 0;
            *(arg1_00 + 0xb50) = 0;
            *(arg1_00 + 0xb38) = 0;
            *(arg1_00 + 0xb40) = 0;
            *pcVar14 = 0;
            *(arg1_00 + 0xb30) = 0;
            arg1_00[0xb28] = 0x1;
            uStack_158 = CONCAT62(0x10000,uVar5);
            uStack_148._0_6_ = CONCAT42(0x10001,uVar6);
            uStack_148 = uStack_148;
            pcStack_150 = pcVar14;
            pcStack_140 = arg1_00 + 0xba8;
            iVar8 = i2c_transfer(*(uVar15 + 0x18),&uStack_158,2);
            if (iVar8 != 2) goto code_r0x08004a44;
            _printk(0x80010d6,"lt9611uxc_read_device_id",CONCAT11(cVar3,arg1_00[0xba8]));
            sym.lt9611uxc_ctl_disable(arg1_00);
            msleep(0x32);
            *(pcVar16 + 0xb8) = arg1_00;
            uVar10 = sysfs_create_group(pcStack_180,obj.lt9611uxc_sysfs_attr_grp);
            pcVar14 = arg1_00;
            if (uVar10 != 0) {
                uVar15 = uVar10;
                _printk(0x8000c51,"lt9611uxc_sysfs_init","lt9611uxc_sysfs_init",uVar15);
                uVar18 = 0x8000b76;
                goto code_r0x08004ed0;
            }
            cVar7 = sym.lt9611uxc_get_version(arg1_00);
            if (cVar7 == '\0') {
                uVar10 = request_firmware_nowait
                                   (obj.__this_module,1,"lt9611uxc_fw.bin",pcStack_180,0xcc0,arg1_00,
                                    sym.lt9611uxc_firmware_cb.e58709b06554ea617982e3f2e7a32f4b.cfi_jt);
                uVar15 = uVar10;
                if (uVar10 != 0) {
                    _printk(0x800031b,"lt9611uxc_probe",uVar15);
                    goto code_r0x08004adc;
                }
            }
            else {
                _printk(0x800101c,"lt9611uxc_probe");
                __mutex_init(arg1_00 + 0x130,"&pdata->lock",obj.lt9611uxc_probe.__key);
                __init_waitqueue_head(arg1_00 + 0xa10,"&pdata->edid_wq",obj.lt9611uxc_probe.__key);
                *(arg1_00 + 0x90) = *(pcVar16 + 0x310);
                *(arg1_00 + 0xb0) = reloc.lt9611uxc_bridge_attach.e58709b06554ea617982e3f2e7a32f4b.cfi_jt;
                drm_bridge_add(arg1_00 + 8);
                uVar15 = alloc_workqueue(0x8000499,0xe000a,1,"lt9611uxc_wk");
                *(arg1_00 + 0x9d8) = uVar15;
                pcVar20 = arg1_00;
                if (uVar15 == 0) {
                    _printk(0x8001214,"lt9611uxc_probe");
                    uVar15 = 0;
                    goto code_r0x08004adc;
                }
                *(arg1_00 + 0x9e0) = 0xfffffffe0;
                *(arg1_00 + 0x9e8) = arg1_00 + 0x9e8;
                *(arg1_00 + 0x9f0) = arg1_00 + 0x9e8;
                *(arg1_00 + 0x9f8) = sym.lt9611uxc_hpd_work.cfi_jt;
                gpio_to_desc(*(arg1_00 + 0x89c));
                uVar18 = gpiod_to_irq();
                *(arg1_00 + 0x894) = uVar18;
                uVar10 = request_threaded_irq
                                   (uVar18,0,sym.lt9611uxc_irq_thread_handler.e58709b06554ea617982e3f2e7a32f4b.cfi_jt
                                    ,0x2002,"lt9611uxc_irq",arg1_00);
                uVar15 = uVar10;
                if (uVar10 != 0) {
                    uVar18 = 0x80010b9;
code_r0x08004ed0:
                    _printk(uVar18,"lt9611uxc_probe");
code_r0x08004adc:
                    sym.lt9611uxc_gpio_configure(arg1_00);
code_r0x08004ae8:
                    sym.lt9611uxc_put_dt_supply(pcStack_180,arg1_00);
                }
            }
        }
code_r0x080050d0:
        if (*(pcStack_178 + 0x8b8) != 0) {
            *(pcStack_178 + 0x8b8) = 0;
            *(pcStack_178 + 0x8b4) = 0;
        }
        uVar18 = 0x8001329;
    } while( true );
}


// ===== sym.lt9611uxc_edid_en @ 0x08003dec (size 352) =====

uint64_t sym.lt9611uxc_edid_en(int64_t arg1)

{
    int16_t iVar1;
    int16_t iVar2;
    code cVar3;
    ushort uVar4;
    ushort uVar5;
    char cVar6;
    int iVar7;
    uint uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    int iVar11;
    uint64_t uVar12;
    ulong *puVar13;
    code *arg1_00;
    int64_t iVar14;
    int64_t iVar15;
    ulong uVar16;
    int64_t iVar17;
    uint64_t uVar18;
    uint32_t uVar19;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar20;
    code *unaff_x23;
    code *pcVar21;
    code *pcVar22;
    code *pcVar23;
    code *unaff_x26;
    ulong *puVar24;
    ulong unaff_x30;
    code *pcStack_100;
    code *pcStack_f8;
    uint uStack_ec;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    code *pcStack_d0;
    ulong uStack_c8;
    code *pcStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    ulong uStack_48;
    ulong *puStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar17 = sp_el0;
    iStack_38 = *(iVar17 + 0x5e0);
    puVar24 = arg1 + 0xb28;
    uVar4 = *(*(arg1 + 0x8c0) + 2);
    *(arg1 + 0xb28) = 0;
    *(arg1 + 0xb30) = 0;
    *(arg1 + 0xb38) = 0;
    *(arg1 + 0xb40) = 0;
    *(arg1 + 0xb48) = 0;
    *(arg1 + 0xb50) = 0;
    *(arg1 + 0xb58) = 0;
    *(arg1 + 0xb60) = 0;
    *(arg1 + 0xb68) = 0;
    *(arg1 + 0xb70) = 0;
    *(arg1 + 0xb78) = 0;
    *(arg1 + 0xb80) = 0;
    *(arg1 + 0xb88) = 0;
    *(arg1 + 0xb90) = 0;
    *(arg1 + 0xb98) = 0;
    *(arg1 + 0xb28) = 0xb0ff;
    *(arg1 + 0xba0) = 0;
    uStack_48 = CONCAT62(0x20000,uVar4);
    puStack_40 = puVar24;
    iVar7 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_48,1);
    if (iVar7 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar4 = *(*(arg1 + 0x8c0) + 2);
    *puVar24 = 0;
    *(arg1 + 0xb30) = 0;
    *(arg1 + 0xb38) = 0;
    *(arg1 + 0xb40) = 0;
    *(arg1 + 0xb48) = 0;
    *(arg1 + 0xb50) = 0;
    *(arg1 + 0xb58) = 0;
    *(arg1 + 0xb60) = 0;
    *(arg1 + 0xb68) = 0;
    *(arg1 + 0xb70) = 0;
    *(arg1 + 0xb78) = 0;
    *(arg1 + 0xb80) = 0;
    *(arg1 + 0xb88) = 0;
    *(arg1 + 0xb90) = 0;
    *(arg1 + 0xb98) = 0;
    *(arg1 + 0xba0) = 0;
    *(arg1 + 0xb28) = 0x100b;
    uStack_48 = CONCAT62(0x20000,uVar4);
    puStack_40 = puVar24;
    uVar12 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_48,1);
    if (uVar12 < 1) {
        uVar12 = _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_38) {
        return uVar12;
    }
    puVar13 = __stack_chk_fail();
    *extraout_x18 = sym.lt9611uxc_probe;
    pcStack_a8 = sym.lt9611uxc_probe;
    iVar17 = sp_el0;
    iStack_b8 = *(iVar17 + 0x5e0);
    puStack_b0 = &stack0xffffffffffffffd0;
    if ((puVar13 == NULL) || (puVar24 = puVar13, puVar13[0x62] == 0)) {
        _printk(0x8000306,"lt9611uxc_probe");
        uVar12 = 0xffffffea;
        pcVar20 = 0x200000000;
        puVar13 = puVar24;
        goto code_r0x08003fa8;
    }
    arg1 = puVar13[3];
    pcVar20 = *(*(arg1 + 0x10) + 0x20);
    __cfi_slowpath_diag(0x6871e466cec98751,pcVar20,0x8000270);
    uVar12 = (*pcVar20)(arg1);
    if ((uVar12 & 1) == 0) {
        _printk(0x8000c9e,"lt9611uxc_probe");
        uVar12 = 0xffffffed;
        goto code_r0x08003fa8;
    }
    pcVar21 = puVar13 + 4;
    _printk(0x8000cc0,"lt9611uxc_probe","lt9611uxc_probe");
    arg1_00 = devm_kmalloc(pcVar21,0xc38,0xdc0);
    pcVar20 = pcVar21;
    if (arg1_00 == NULL) {
        uVar12 = 0xfffffff4;
        goto code_r0x08003fa8;
    }
    pcVar22 = puVar13[0x62];
    iVar17 = of_graph_get_endpoint_by_regs(pcVar22,0,0);
    if (iVar17 == 0) {
        uVar16 = 0x8000d3c;
code_r0x080040b0:
        _printk(uVar16,"lt9611uxc_parse_dt");
        uVar12 = 0xffffffed;
    }
    else {
        uVar12 = of_graph_get_remote_port_parent();
        *(arg1_00 + 0x118) = uVar12;
        if (uVar12 == 0) {
            uVar16 = 0x8000e6b;
            goto code_r0x080040b0;
        }
        uVar9 = of_get_named_gpio_flags(pcVar22,"lt,irq-gpio",0,0);
        uVar12 = 0;
        *(arg1_00 + 0x89c) = uVar9;
        if (0x1ff < uVar9) {
            _printk(0x800083a,"lt9611uxc_parse_dt");
            uVar12 = 0xffffffea;
        }
        uVar9 = of_get_named_gpio_flags(pcVar22,"lt,reset-gpio",0,0);
        *(arg1_00 + 0x8a0) = uVar9;
        if (0x1ff < uVar9) {
            _printk(0x80005ef,"lt9611uxc_parse_dt");
            uVar12 = 0xffffffea;
        }
        uVar8 = of_get_named_gpio_flags(pcVar22,"lt,hdmi-ps-gpio",0,0);
        *(arg1_00 + 0x8a4) = uVar8;
        uVar8 = of_get_named_gpio_flags(pcVar22,"lt,hdmi-en-gpio",0,0);
        *(arg1_00 + 0x8a8) = uVar8;
        uVar8 = of_get_named_gpio_flags(pcVar22,"lt,hdmi-3p3-en",0,0);
        *(arg1_00 + 0x8ac) = uVar8;
        uVar8 = of_get_named_gpio_flags(pcVar22,"lt,hdmi-1p2-en",0,0);
        *(arg1_00 + 0x8b0) = uVar8;
        iVar17 = of_find_property(pcVar22,"lt,ac-mode",0);
        pcStack_f8 = arg1_00 + 0x8d8;
        arg1_00[0x898] = iVar17 != 0;
        *(arg1_00 + 0x8d8) = pcStack_f8;
        *(arg1_00 + 0x8e0) = pcStack_f8;
        uStack_d8 = uStack_d8._4_4_ << 0x20;
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_ec = 0;
        iVar17 = of_get_child_by_name(pcVar22,"lt,customize-modes");
        if ((iVar17 == 0) && (iVar17 = of_parse_phandle(pcVar22,"lt,customize-modes",0), iVar17 == 0)) {
            _printk(0x8000f8e,"lt9611uxc_parse_dt_modes");
        }
        else {
            iVar14 = of_get_next_child(iVar17,0);
            if (iVar14 == 0) {
                unaff_x26 = NULL;
            }
            else {
                unaff_x26 = NULL;
                uVar9 = 0;
                do {
                    pcVar23 = kmem_cache_alloc_trace(_drm_atomic_helper_connector_destroy_state,0xdc0,0x78);
                    if (pcVar23 == NULL) {
                        _printk(0x8000e88,"lt9611uxc_parse_dt_modes");
                    }
                    else {
                        iVar7 = of_property_read_variable_u32_array(iVar14,"lt,mode-h-active",pcVar23 + 4,1,0);
                        pcVar22 = pcVar23;
                        if (iVar7 < 0) {
                            uVar16 = 0x8000473;
                        }
                        else {
                            iVar7 = of_property_read_variable_u32_array
                                              (iVar14,"lt,mode-h-front-porch",&uStack_d8,1,0);
                            if (iVar7 < 0) {
                                uVar16 = 0x8001234;
                            }
                            else {
                                iVar7 = of_property_read_variable_u32_array
                                                  (iVar14,"lt,mode-h-pulse-width",&uStack_e0 + 4,1,0);
                                if (iVar7 < 0) {
                                    uVar16 = 0x8000cd5;
                                }
                                else {
                                    iVar7 = of_property_read_variable_u32_array
                                                      (iVar14,"lt,mode-h-back-porch",&uStack_e0,1,0);
                                    if (iVar7 < 0) {
                                        uVar16 = 0x8001047;
                                    }
                                    else {
                                        iVar15 = of_find_property(iVar14,"lt,mode-h-active-high",0);
                                        iVar7 = of_property_read_variable_u32_array
                                                          (iVar14,"lt,mode-v-active",pcVar23 + 0xe,1,0);
                                        if (iVar7 < 0) {
                                            uVar16 = 0x8000d5d;
                                        }
                                        else {
                                            iVar7 = of_property_read_variable_u32_array
                                                              (iVar14,"lt,mode-v-front-porch",&uStack_e8 + 4,1,0);
                                            if (iVar7 < 0) {
                                                uVar16 = 0x800094e;
                                            }
                                            else {
                                                iVar7 = of_property_read_variable_u32_array
                                                                  (iVar14,"lt,mode-v-pulse-width",&uStack_e8,1,0);
                                                if (iVar7 < 0) {
                                                    uVar16 = 0x8000757;
                                                }
                                                else {
                                                    iVar7 = of_property_read_variable_u32_array
                                                                      (iVar14,"lt,mode-v-back-porch",&uStack_ec,1,0)
                                                    ;
                                                    if (iVar7 < 0) {
                                                        uVar16 = 0x8000979;
                                                    }
                                                    else {
                                                        pcVar20 = of_find_property(iVar14,"lt,mode-v-active-high",0);
                                                        iVar7 = of_property_read_variable_u32_array
                                                                          (iVar14,"lt,mode-clock-in-khz",pcVar23,1,0
                                                                          );
                                                        if (-1 < iVar7) {
                                                            iVar1 = *(pcVar23 + 4) + uStack_d8 + uStack_e0._4_2_;
                                                            puVar24 = *(arg1_00 + 0x8e0);
                                                            *(pcVar23 + 6) = *(pcVar23 + 4) + uStack_d8;
                                                            *(pcVar23 + 8) = iVar1;
                                                            iVar2 = *(pcVar23 + 0xe) + uStack_e8._4_2_ + uStack_e8;
                                                            *(pcVar23 + 0x10) = *(pcVar23 + 0xe) + uStack_e8._4_2_;
                                                            *(pcVar23 + 10) = iVar1 + uStack_e0;
                                                            uVar10 = 1;
                                                            if (iVar15 == 0) {
                                                                uVar10 = 2;
                                                            }
                                                            uVar19 = 8;
                                                            if (pcVar20 != NULL) {
                                                                uVar19 = 4;
                                                            }
                                                            pcVar20 = pcVar23 + 0x40;
                                                            uVar9 = uVar10 | uVar9 | uVar19;
                                                            *(pcVar23 + 0x12) = iVar2;
                                                            *(pcVar23 + 0x14) = iVar2 + uStack_ec;
                                                            *(pcVar23 + 0x18) = uVar9;
                                                            uVar18 = __list_add_valid(pcVar20,puVar24,pcStack_f8);
                                                            if ((uVar18 & 1) != 0) {
                                                                *(arg1_00 + 0x8e0) = pcVar20;
                                                                *(pcVar23 + 0x40) = pcStack_f8;
                                                                *(pcVar23 + 0x48) = puVar24;
                                                                *puVar24 = pcVar20;
                                                            }
                                                            unaff_x26 = unaff_x26 + 1;
                                                            drm_mode_set_name(pcVar23);
                                                            goto code_r0x080042cc;
                                                        }
                                                        uVar16 = 0x8000d15;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        _printk(uVar16,"lt9611uxc_parse_dt_modes",iVar7);
                        kfree(pcVar23);
                    }
code_r0x080042cc:
                    iVar14 = of_get_next_child(iVar17,iVar14);
                } while (iVar14 != 0);
            }
            *(arg1_00 + 0x8d0) = unaff_x26;
            unaff_x23 = arg1_00;
        }
        pcStack_100 = pcVar21;
        if (uVar12 == 0) {
            uStack_e0 = uStack_e0 & 0xffffffff;
            if (pcVar21 != NULL) {
                uVar16 = puVar13[0x62];
                *(arg1_00 + 0x8b4) = 0;
                arg1 = of_get_child_by_name(uVar16,"lt,supply-entries");
                if (arg1 == NULL) {
                    uVar16 = 0x80004ab;
                    arg1 = pcVar22;
                }
                else {
                    iVar17 = of_get_next_available_child(arg1,0);
                    if (iVar17 == 0) {
                        *(arg1_00 + 0x8b4) = 0;
                    }
                    else {
                        pcVar20 = NULL;
                        do {
                            uVar9 = pcVar20 + 1;
                            pcVar20 = uVar9;
                            iVar17 = of_get_next_available_child(arg1,iVar17);
                        } while (iVar17 != 0);
                        *(arg1_00 + 0x8b4) = uVar9;
                        if (uVar9 != 0) {
                            uVar12 = devm_kmalloc(pcVar21,pcVar20 * 0x48,0xdc0);
                            *(arg1_00 + 0x8b8) = uVar12;
                            pcStack_f8 = arg1_00;
                            if (uVar12 != 0) {
                                pcVar20 = of_get_next_available_child(arg1,0);
                                if (pcVar20 != NULL) {
                                    unaff_x26 = NULL;
                                    do {
                                        uStack_d8 = 0;
                                        uVar9 = of_property_read_string(pcVar20,"lt,supply-name",&uStack_d8);
                                        if (uVar9 != 0) {
                                            uVar16 = 0x800035d;
code_r0x08004e70:
                                            uVar12 = uVar9;
                                            _printk(uVar16,"lt9611uxc_get_dt_supply",uVar12);
                                            goto code_r0x080050d0;
                                        }
                                        iVar7 = unaff_x26;
                                        strscpy(*(arg1_00 + 0x8b8) + iVar7 * 0x48 + 8,uStack_d8,0x20);
                                        uVar9 = of_property_read_variable_u32_array
                                                          (pcVar20,"lt,supply-min-voltage",&uStack_e0 + 4,1,0);
                                        if (uVar9 < 0) {
                                            uVar16 = 0x80004ca;
                                            goto code_r0x08004e70;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar7 * 0x48 + 0x28) = uStack_e0._4_4_;
                                        uVar9 = of_property_read_variable_u32_array
                                                          (pcVar20,"lt,supply-max-voltage",&uStack_e0 + 4,1,0);
                                        if (uVar9 < 0) {
                                            uVar12 = uVar9;
                                            _printk(0x8000598,"lt9611uxc_get_dt_supply",uVar12);
                                            unaff_x23 = arg1_00;
                                            goto code_r0x080050d0;
                                        }
                                        iVar17 = iVar7 * 0x48;
                                        *(*(arg1_00 + 0x8b8) + iVar17 + 0x2c) = uStack_e0._4_4_;
                                        iVar11 = of_property_read_variable_u32_array
                                                           (pcVar20,"lt,supply-enable-load",&uStack_e0 + 4,1,0);
                                        uVar8 = 0;
                                        if (-1 < iVar11) {
                                            uVar8 = uStack_e0._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar17 + 0x30) = uVar8;
                                        iVar11 = of_property_read_variable_u32_array
                                                           (pcVar20,"lt,supply-disable-load",&uStack_e0 + 4,1,0);
                                        uVar8 = 0;
                                        if (-1 < iVar11) {
                                            uVar8 = uStack_e0._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar17 + 0x34) = uVar8;
                                        iVar11 = of_property_read_variable_u32_array
                                                           (pcVar20,"lt,supply-pre-on-sleep",&uStack_e0 + 4,1,0);
                                        uVar8 = 0;
                                        if (-1 < iVar11) {
                                            uVar8 = uStack_e0._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar17 + 0x38) = uVar8;
                                        iVar11 = of_property_read_variable_u32_array
                                                           (pcVar20,"lt,supply-pre-off-sleep",&uStack_e0 + 4,1,0);
                                        uVar8 = 0;
                                        if (-1 < iVar11) {
                                            uVar8 = uStack_e0._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar17 + 0x40) = uVar8;
                                        iVar11 = of_property_read_variable_u32_array
                                                           (pcVar20,"lt,supply-post-on-sleep",&uStack_e0 + 4,1,0);
                                        uVar8 = 0;
                                        if (-1 < iVar11) {
                                            uVar8 = uStack_e0._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar17 + 0x3c) = uVar8;
                                        iVar11 = of_property_read_variable_u32_array
                                                           (pcVar20,"lt,supply-post-off-sleep",&uStack_e0 + 4,1,0);
                                        unaff_x26 = iVar7 + 1;
                                        uVar8 = 0;
                                        if (-1 < iVar11) {
                                            uVar8 = uStack_e0._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar17 + 0x44) = uVar8;
                                        pcVar20 = of_get_next_available_child(arg1,pcVar20);
                                        unaff_x23 = arg1_00;
                                    } while (pcVar20 != NULL);
                                }
                                pcVar20 = *(arg1_00 + 0x8b8);
                                if (pcVar20 == NULL) goto code_r0x08004624;
                                uVar9 = *(arg1_00 + 0x8b4);
                                if (uVar9 < 1) goto code_r0x08004624;
                                arg1 = pcVar20 + 8;
                                uVar18 = regulator_get(pcVar21,arg1);
                                uVar12 = 0;
                                pcVar22 = NULL;
                                *pcVar20 = uVar18;
                                pcVar23 = pcVar20;
                                if (uVar18 == 0) goto code_r0x08004e34;
                                if (0xfffffffffffff000 < uVar18) goto code_r0x08004e34;
                                uVar10 = regulator_set_voltage(uVar18,*(pcVar20 + 0x28),*(pcVar20 + 0x2c));
                                uVar12 = uVar10;
                                if (uVar10 < 0) {
                                    unaff_x23 = NULL;
                                }
                                else {
                                    unaff_x23 = NULL;
                                    iVar17 = 0;
                                    do {
                                        iVar14 = iVar17;
                                        if (uVar9 * 0x48 + -0x48 == iVar14) goto code_r0x08004624;
                                        unaff_x26 = pcVar20 + iVar14;
                                        arg1 = unaff_x26 + 0x50;
                                        uVar18 = regulator_get(pcVar21,arg1);
                                        *(unaff_x26 + 0x48) = uVar18;
                                        if (uVar18 == 0) goto code_r0x08005068;
                                        if (0xfffffffffffff000 < uVar18) goto code_r0x08005068;
                                        uVar10 = regulator_set_voltage
                                                           (uVar18,*(pcVar20 + iVar14 + 0x70),
                                                            *(pcVar20 + iVar14 + 0x74));
                                        uVar12 = uVar10;
                                        unaff_x23 = unaff_x23 + 1;
                                        iVar17 = iVar14 + 0x48;
                                    } while (-1 < uVar10);
                                    arg1 = pcVar20 + iVar14 + 0x50;
                                }
                                pcVar21 = unaff_x23 & 0xffffffff;
                                _printk(0x8000ade,"lt9611uxc_config_vreg",arg1);
                                goto code_r0x080050b4;
                            }
                            uVar12 = 0xfffffff4;
                            uVar16 = 0x8001329;
                            goto code_r0x080040c8;
                        }
                    }
                    uVar16 = 0x8000eb3;
                }
                _printk(uVar16,"lt9611uxc_get_dt_supply");
                goto code_r0x08004624;
            }
            _printk(0x8000f44,"lt9611uxc_get_dt_supply",0,arg1_00);
            uVar12 = 0xffffffea;
            uVar16 = 0x8001329;
            arg1 = pcVar22;
            goto code_r0x080040c8;
        }
    }
    uVar16 = 0x8000aa8;
    arg1 = pcVar22;
code_r0x080040c8:
    do {
        _printk(uVar16,"lt9611uxc_probe");
code_r0x08003fa8:
        while( true ) {
            iVar17 = sp_el0;
            if (*(iVar17 + 0x5e0) == iStack_b8) {
                return uVar12;
            }
            __stack_chk_fail();
code_r0x08005068:
            pcVar22 = unaff_x23 + 1;
            pcVar23 = unaff_x26 + 0x48;
code_r0x08004e34:
            _printk(0x80009a3,"lt9611uxc_config_vreg",arg1,uVar12);
            while( true ) {
                uVar9 = pcVar22 - 1;
                unaff_x23 = uVar9;
                *pcVar23 = 0;
                if (uVar9 < 0) break;
                regulator_set_load(*(pcVar20 + unaff_x23 * 0x48),0);
                pcVar21 = unaff_x23;
code_r0x080050b4:
                pcVar23 = pcVar20 + pcVar21 * 0x48;
                regulator_put(*pcVar23);
                pcVar22 = unaff_x23;
            }
            unaff_x23 = pcVar22;
            arg1_00 = pcStack_f8;
            if (uVar12 != 0) break;
code_r0x08004624:
            *(arg1_00 + 0x8c0) = puVar13;
            *arg1_00 = pcStack_100;
            uVar9 = sym.lt9611uxc_gpio_configure(arg1_00);
            unaff_x23 = pcStack_100;
            if (uVar9 != 0) {
                uVar12 = uVar9;
                _printk(0x80007e9,"lt9611uxc_probe");
                goto code_r0x08004ae8;
            }
            if (*(arg1_00 + 0x8a8) < 0x200) {
                uVar16 = gpio_to_desc();
                gpiod_set_raw_value(uVar16,1);
                msleep(0x14);
            }
            pcVar20 = *(arg1_00 + 0x8b8);
            uVar9 = *(arg1_00 + 0x8b4);
            arg1 = uVar9;
            if (*(arg1_00 + 0x8ac) < 0x200) {
                uVar16 = gpio_to_desc();
                gpiod_set_raw_value(uVar16,1);
            }
            if (*(arg1_00 + 0x8b0) < 0x200) {
                uVar16 = gpio_to_desc();
                gpiod_set_raw_value(uVar16,1);
            }
            if (0 < uVar9) {
                uVar12 = 0;
                pcVar21 = NULL;
                if ((*pcVar20 != 0) && (*pcVar20 < 0xfffffffffffff001)) {
                    pcVar21 = NULL;
                    pcVar23 = arg1 + -1;
                    unaff_x26 = 0x3e8;
                    pcVar22 = pcVar20;
                    do {
                        uVar9 = regulator_is_enabled();
                        arg1 = uVar9;
                        if ((*(pcVar22 + 0x38) != 0) && (uVar9 == 0)) {
                            iVar17 = *(pcVar22 + 0x38) * 1000;
                            usleep_range_state(iVar17,iVar17,2);
                        }
                        uVar10 = regulator_set_load(*pcVar22,*(pcVar22 + 0x30));
                        if (uVar10 < 0) {
                            uVar12 = uVar10;
                            _printk(0x800067e,"lt9611uxc_enable_vreg",pcVar22 + 8);
                            goto code_r0x08004774;
                        }
                        uVar10 = regulator_enable(*pcVar22);
                        uVar12 = uVar10;
                        if ((*(pcVar22 + 0x3c) != 0) && (uVar9 == 0)) {
                            iVar17 = *(pcVar22 + 0x3c) * 1000;
                            usleep_range_state(iVar17,iVar17,2);
                        }
                        if (uVar10 < 0) {
                            _printk(0x8000697,"lt9611uxc_enable_vreg",pcVar22 + 8);
                            regulator_set_load(*pcVar22,*(pcVar22 + 0x34));
                            goto code_r0x08004774;
                        }
                        if (pcVar23 == pcVar21) goto code_r0x08004778;
                        pcVar22 = pcVar22 + 0x48;
                        pcVar21 = pcVar21 + 1;
                    } while ((*pcVar22 != 0) && (*pcVar22 < 0xfffffffffffff001));
                }
                _printk(0x8000af6,"lt9611uxc_enable_vreg",pcVar20 + (pcVar21 & 0xffffffff) * 0x48 + 8,uVar12);
code_r0x08004774:
                if (pcVar21 != 0) {
                    arg1 = pcVar21 + 1;
                    pcVar20 = pcVar20 + pcVar21 * 0x48 + -0x48;
                    do {
                        if (*(pcVar20 + 0x40) != 0) {
                            iVar17 = *(pcVar20 + 0x40) * 1000;
                            usleep_range_state(iVar17,iVar17,2);
                        }
                        regulator_set_load(*pcVar20,*(pcVar20 + 0x34));
                        regulator_disable(*pcVar20);
                        if (*(pcVar20 + 0x44) != 0) {
                            iVar17 = *(pcVar20 + 0x44) * 1000;
                            usleep_range_state(iVar17,iVar17,2);
                        }
                        arg1 = arg1 + -1;
                        pcVar20 = pcVar20 + -0x48;
                    } while (1 < arg1);
                }
code_r0x08004778:
                if (uVar12 == 0) goto code_r0x08004780;
                _printk(0x8001348,"lt9611uxc_probe");
                goto code_r0x08004adc;
            }
code_r0x08004780:
            uVar16 = gpio_to_desc(*(arg1_00 + 0x8a0));
            gpiod_set_raw_value(uVar16,1);
            msleep(0x14);
            uVar16 = gpio_to_desc(*(arg1_00 + 0x8a0));
            gpiod_set_raw_value(uVar16,0);
            msleep(0x14);
            uVar16 = gpio_to_desc(*(arg1_00 + 0x8a0));
            gpiod_set_raw_value(uVar16,1);
            msleep(300);
            sym.lt9611uxc_ctl_en(arg1_00);
            arg1 = arg1_00 + 0xb28;
            uVar4 = *(*(arg1_00 + 0x8c0) + 2);
            *(arg1_00 + 0xb28) = 0;
            *(arg1_00 + 0xb30) = 0;
            *(arg1_00 + 0xb38) = 0;
            *(arg1_00 + 0xb40) = 0;
            *(arg1_00 + 0xb48) = 0;
            *(arg1_00 + 0xb50) = 0;
            *(arg1_00 + 0xb58) = 0;
            *(arg1_00 + 0xb60) = 0;
            *(arg1_00 + 0xb68) = 0;
            *(arg1_00 + 0xb70) = 0;
            *(arg1_00 + 0xb78) = 0;
            *(arg1_00 + 0xb80) = 0;
            *(arg1_00 + 0xb88) = 0;
            *(arg1_00 + 0xb90) = 0;
            *(arg1_00 + 0xb98) = 0;
            *(arg1_00 + 0xb28) = 0x81ff;
            *(arg1_00 + 0xba0) = 0;
            uStack_d8 = CONCAT62(0x20000,uVar4);
            pcStack_d0 = arg1;
            iVar7 = i2c_transfer(*(*(arg1_00 + 0x8c0) + 0x18),&uStack_d8,1);
            if (iVar7 < 1) {
                _printk(0x8001311,"lt9611uxc_write_byte");
            }
            uVar12 = *(arg1_00 + 0x8c0);
            uVar4 = *(uVar12 + 2);
            pcVar20 = 0x10001;
            uVar5 = *(uVar12 + 2);
            *(arg1_00 + 0xc18) = 0;
            *(arg1_00 + 0xc20) = 0;
            *(arg1_00 + 0xc08) = 0;
            *(arg1_00 + 0xc10) = 0;
            *(arg1_00 + 0xbf8) = 0;
            *(arg1_00 + 0xc00) = 0;
            *(arg1_00 + 0xbe8) = 0;
            *(arg1_00 + 0xbf0) = 0;
            *(arg1_00 + 0xbd8) = 0;
            *(arg1_00 + 0xbe0) = 0;
            *(arg1_00 + 0xbc8) = 0;
            *(arg1_00 + 0xbd0) = 0;
            *(arg1_00 + 3000) = 0;
            *(arg1_00 + 0xbc0) = 0;
            *(arg1_00 + 0xba8) = 0;
            *(arg1_00 + 0xbb0) = 0;
            *(arg1_00 + 0xb98) = 0;
            *(arg1_00 + 0xba0) = 0;
            *(arg1_00 + 0xb88) = 0;
            *(arg1_00 + 0xb90) = 0;
            *(arg1_00 + 0xb78) = 0;
            *(arg1_00 + 0xb80) = 0;
            *(arg1_00 + 0xb68) = 0;
            *(arg1_00 + 0xb70) = 0;
            *(arg1_00 + 0xb58) = 0;
            *(arg1_00 + 0xb60) = 0;
            *(arg1_00 + 0xb48) = 0;
            *(arg1_00 + 0xb50) = 0;
            *(arg1_00 + 0xb38) = 0;
            *(arg1_00 + 0xb40) = 0;
            *arg1 = 0;
            *(arg1_00 + 0xb30) = 0;
            uStack_d8 = CONCAT62(0x10000,uVar4);
            uStack_c8._0_6_ = CONCAT42(0x10001,uVar5);
            uStack_c8 = uStack_c8;
            pcStack_d0 = arg1;
            pcStack_c0 = arg1_00 + 0xba8;
            iVar7 = i2c_transfer(*(uVar12 + 0x18),&uStack_d8,2);
            if (iVar7 != 2) {
code_r0x08004a44:
                _printk(0x80006dd,"lt9611uxc_read");
                _printk(0x8000bcd,"lt9611uxc_read_device_id");
                sym.lt9611uxc_ctl_disable(arg1_00);
                msleep(0x32);
                _printk(0x8000f25,"lt9611uxc_probe");
                uVar12 = 0xffffffff;
                goto code_r0x08004adc;
            }
            uVar12 = *(arg1_00 + 0x8c0);
            uVar4 = *(uVar12 + 2);
            uVar5 = *(uVar12 + 2);
            cVar3 = arg1_00[0xba8];
            *(arg1_00 + 0xc18) = 0;
            *(arg1_00 + 0xc20) = 0;
            *(arg1_00 + 0xc08) = 0;
            *(arg1_00 + 0xc10) = 0;
            *(arg1_00 + 0xbf8) = 0;
            *(arg1_00 + 0xc00) = 0;
            *(arg1_00 + 0xbe8) = 0;
            *(arg1_00 + 0xbf0) = 0;
            *(arg1_00 + 0xbd8) = 0;
            *(arg1_00 + 0xbe0) = 0;
            *(arg1_00 + 0xbc8) = 0;
            *(arg1_00 + 0xbd0) = 0;
            *(arg1_00 + 3000) = 0;
            *(arg1_00 + 0xbc0) = 0;
            *(arg1_00 + 0xba8) = 0;
            *(arg1_00 + 0xbb0) = 0;
            *(arg1_00 + 0xb98) = 0;
            *(arg1_00 + 0xba0) = 0;
            *(arg1_00 + 0xb88) = 0;
            *(arg1_00 + 0xb90) = 0;
            *(arg1_00 + 0xb78) = 0;
            *(arg1_00 + 0xb80) = 0;
            *(arg1_00 + 0xb68) = 0;
            *(arg1_00 + 0xb70) = 0;
            *(arg1_00 + 0xb58) = 0;
            *(arg1_00 + 0xb60) = 0;
            *(arg1_00 + 0xb48) = 0;
            *(arg1_00 + 0xb50) = 0;
            *(arg1_00 + 0xb38) = 0;
            *(arg1_00 + 0xb40) = 0;
            *arg1 = 0;
            *(arg1_00 + 0xb30) = 0;
            arg1_00[0xb28] = 0x1;
            uStack_d8 = CONCAT62(0x10000,uVar4);
            uStack_c8._0_6_ = CONCAT42(0x10001,uVar5);
            uStack_c8 = uStack_c8;
            pcStack_d0 = arg1;
            pcStack_c0 = arg1_00 + 0xba8;
            iVar7 = i2c_transfer(*(uVar12 + 0x18),&uStack_d8,2);
            if (iVar7 != 2) goto code_r0x08004a44;
            _printk(0x80010d6,"lt9611uxc_read_device_id",CONCAT11(cVar3,arg1_00[0xba8]));
            sym.lt9611uxc_ctl_disable(arg1_00);
            msleep(0x32);
            puVar13[0x17] = arg1_00;
            uVar9 = sysfs_create_group(pcStack_100,obj.lt9611uxc_sysfs_attr_grp);
            arg1 = arg1_00;
            if (uVar9 != 0) {
                uVar12 = uVar9;
                _printk(0x8000c51,"lt9611uxc_sysfs_init","lt9611uxc_sysfs_init",uVar12);
                uVar16 = 0x8000b76;
                goto code_r0x08004ed0;
            }
            cVar6 = sym.lt9611uxc_get_version(arg1_00);
            if (cVar6 == '\0') {
                uVar9 = request_firmware_nowait
                                  (obj.__this_module,1,"lt9611uxc_fw.bin",pcStack_100,0xcc0,arg1_00,
                                   sym.lt9611uxc_firmware_cb.e58709b06554ea617982e3f2e7a32f4b.cfi_jt);
                uVar12 = uVar9;
                if (uVar9 != 0) {
                    _printk(0x800031b,"lt9611uxc_probe",uVar12);
                    goto code_r0x08004adc;
                }
            }
            else {
                _printk(0x800101c,"lt9611uxc_probe");
                __mutex_init(arg1_00 + 0x130,"&pdata->lock",obj.lt9611uxc_probe.__key);
                __init_waitqueue_head(arg1_00 + 0xa10,"&pdata->edid_wq",obj.lt9611uxc_probe.__key);
                *(arg1_00 + 0x90) = puVar13[0x62];
                *(arg1_00 + 0xb0) = reloc.lt9611uxc_bridge_attach.e58709b06554ea617982e3f2e7a32f4b.cfi_jt;
                drm_bridge_add(arg1_00 + 8);
                uVar12 = alloc_workqueue(0x8000499,0xe000a,1,"lt9611uxc_wk");
                *(arg1_00 + 0x9d8) = uVar12;
                pcVar20 = arg1_00;
                if (uVar12 == 0) {
                    _printk(0x8001214,"lt9611uxc_probe");
                    uVar12 = 0;
                    goto code_r0x08004adc;
                }
                *(arg1_00 + 0x9e0) = 0xfffffffe0;
                *(arg1_00 + 0x9e8) = arg1_00 + 0x9e8;
                *(arg1_00 + 0x9f0) = arg1_00 + 0x9e8;
                *(arg1_00 + 0x9f8) = sym.lt9611uxc_hpd_work.cfi_jt;
                gpio_to_desc(*(arg1_00 + 0x89c));
                uVar16 = gpiod_to_irq();
                *(arg1_00 + 0x894) = uVar16;
                uVar9 = request_threaded_irq
                                  (uVar16,0,sym.lt9611uxc_irq_thread_handler.e58709b06554ea617982e3f2e7a32f4b.cfi_jt,
                                   0x2002,"lt9611uxc_irq",arg1_00);
                uVar12 = uVar9;
                if (uVar9 != 0) {
                    uVar16 = 0x80010b9;
code_r0x08004ed0:
                    _printk(uVar16,"lt9611uxc_probe");
code_r0x08004adc:
                    sym.lt9611uxc_gpio_configure(arg1_00);
code_r0x08004ae8:
                    sym.lt9611uxc_put_dt_supply(pcStack_100,arg1_00);
                }
            }
        }
code_r0x080050d0:
        if (*(pcStack_f8 + 0x8b8) != 0) {
            *(pcStack_f8 + 0x8b8) = 0;
            *(pcStack_f8 + 0x8b4) = 0;
        }
        uVar16 = 0x8001329;
    } while( true );
}


// ===== sym.lt9611uxc_probe @ 0x08003f4c (size 4516) =====

int sym.lt9611uxc_probe(int64_t arg1)

{
    int16_t iVar1;
    int16_t iVar2;
    code cVar3;
    ushort uVar4;
    ushort uVar5;
    char cVar6;
    uint uVar7;
    int iVar8;
    int iVar9;
    uint32_t uVar10;
    code *arg1_00;
    int64_t iVar11;
    int64_t iVar12;
    ulong uVar13;
    int64_t iVar14;
    uint64_t uVar15;
    uint32_t uVar16;
    uint32_t uVar17;
    ulong *in_x18;
    code *unaff_x19;
    code *unaff_x20;
    uint64_t unaff_x21;
    code *unaff_x23;
    code *pcVar18;
    code *pcVar19;
    code *pcVar20;
    code *unaff_x26;
    ulong *puVar21;
    ulong unaff_x30;
    code *pcStack_b0;
    code *pcStack_a8;
    uint uStack_9c;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    code *pcStack_80;
    ulong uStack_78;
    code *pcStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_68 = *(iVar14 + 0x5e0);
    if ((arg1 == 0) || (unaff_x21 = arg1, *(arg1 + 0x310) == 0)) {
        _printk(0x8000306,"lt9611uxc_probe");
        iVar9 = -0x16;
        arg1 = unaff_x21;
        goto code_r0x08003fa8;
    }
    unaff_x19 = *(arg1 + 0x18);
    unaff_x20 = *(*(unaff_x19 + 0x10) + 0x20);
    __cfi_slowpath_diag(0x6871e466cec98751,unaff_x20,0x8000270);
    uVar15 = (*unaff_x20)(unaff_x19);
    if ((uVar15 & 1) == 0) {
        _printk(0x8000c9e,"lt9611uxc_probe");
        iVar9 = -0x13;
        goto code_r0x08003fa8;
    }
    pcVar18 = arg1 + 0x20;
    _printk(0x8000cc0,"lt9611uxc_probe","lt9611uxc_probe");
    arg1_00 = devm_kmalloc(pcVar18,0xc38,0xdc0);
    unaff_x20 = pcVar18;
    if (arg1_00 == NULL) {
        iVar9 = -0xc;
        goto code_r0x08003fa8;
    }
    pcVar19 = *(arg1 + 0x310);
    iVar14 = of_graph_get_endpoint_by_regs(pcVar19,0,0);
    if (iVar14 == 0) {
        uVar13 = 0x8000d3c;
code_r0x080040b0:
        _printk(uVar13,"lt9611uxc_parse_dt");
        iVar9 = -0x13;
    }
    else {
        uVar15 = of_graph_get_remote_port_parent();
        *(arg1_00 + 0x118) = uVar15;
        if (uVar15 == 0) {
            uVar13 = 0x8000e6b;
            goto code_r0x080040b0;
        }
        uVar10 = of_get_named_gpio_flags(pcVar19,"lt,irq-gpio",0,0);
        iVar9 = 0;
        *(arg1_00 + 0x89c) = uVar10;
        if (0x1ff < uVar10) {
            _printk(0x800083a,"lt9611uxc_parse_dt");
            iVar9 = -0x16;
        }
        uVar10 = of_get_named_gpio_flags(pcVar19,"lt,reset-gpio",0,0);
        *(arg1_00 + 0x8a0) = uVar10;
        if (0x1ff < uVar10) {
            _printk(0x80005ef,"lt9611uxc_parse_dt");
            iVar9 = -0x16;
        }
        uVar7 = of_get_named_gpio_flags(pcVar19,"lt,hdmi-ps-gpio",0,0);
        *(arg1_00 + 0x8a4) = uVar7;
        uVar7 = of_get_named_gpio_flags(pcVar19,"lt,hdmi-en-gpio",0,0);
        *(arg1_00 + 0x8a8) = uVar7;
        uVar7 = of_get_named_gpio_flags(pcVar19,"lt,hdmi-3p3-en",0,0);
        *(arg1_00 + 0x8ac) = uVar7;
        uVar7 = of_get_named_gpio_flags(pcVar19,"lt,hdmi-1p2-en",0,0);
        *(arg1_00 + 0x8b0) = uVar7;
        iVar14 = of_find_property(pcVar19,"lt,ac-mode",0);
        pcStack_a8 = arg1_00 + 0x8d8;
        arg1_00[0x898] = iVar14 != 0;
        *(arg1_00 + 0x8d8) = pcStack_a8;
        *(arg1_00 + 0x8e0) = pcStack_a8;
        uStack_88 = uStack_88._4_4_ << 0x20;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_9c = 0;
        iVar14 = of_get_child_by_name(pcVar19,"lt,customize-modes");
        if ((iVar14 == 0) && (iVar14 = of_parse_phandle(pcVar19,"lt,customize-modes",0), iVar14 == 0)) {
            _printk(0x8000f8e,"lt9611uxc_parse_dt_modes");
        }
        else {
            iVar11 = of_get_next_child(iVar14,0);
            if (iVar11 == 0) {
                unaff_x26 = NULL;
            }
            else {
                unaff_x26 = NULL;
                uVar10 = 0;
                do {
                    pcVar20 = kmem_cache_alloc_trace(_drm_atomic_helper_connector_destroy_state,0xdc0,0x78);
                    if (pcVar20 == NULL) {
                        _printk(0x8000e88,"lt9611uxc_parse_dt_modes");
                    }
                    else {
                        iVar8 = of_property_read_variable_u32_array(iVar11,"lt,mode-h-active",pcVar20 + 4,1,0);
                        pcVar19 = pcVar20;
                        if (iVar8 < 0) {
                            uVar13 = 0x8000473;
                        }
                        else {
                            iVar8 = of_property_read_variable_u32_array
                                              (iVar11,"lt,mode-h-front-porch",&uStack_88,1,0);
                            if (iVar8 < 0) {
                                uVar13 = 0x8001234;
                            }
                            else {
                                iVar8 = of_property_read_variable_u32_array
                                                  (iVar11,"lt,mode-h-pulse-width",&uStack_90 + 4,1,0);
                                if (iVar8 < 0) {
                                    uVar13 = 0x8000cd5;
                                }
                                else {
                                    iVar8 = of_property_read_variable_u32_array
                                                      (iVar11,"lt,mode-h-back-porch",&uStack_90,1,0);
                                    if (iVar8 < 0) {
                                        uVar13 = 0x8001047;
                                    }
                                    else {
                                        iVar12 = of_find_property(iVar11,"lt,mode-h-active-high",0);
                                        iVar8 = of_property_read_variable_u32_array
                                                          (iVar11,"lt,mode-v-active",pcVar20 + 0xe,1,0);
                                        if (iVar8 < 0) {
                                            uVar13 = 0x8000d5d;
                                        }
                                        else {
                                            iVar8 = of_property_read_variable_u32_array
                                                              (iVar11,"lt,mode-v-front-porch",&uStack_98 + 4,1,0);
                                            if (iVar8 < 0) {
                                                uVar13 = 0x800094e;
                                            }
                                            else {
                                                iVar8 = of_property_read_variable_u32_array
                                                                  (iVar11,"lt,mode-v-pulse-width",&uStack_98,1,0);
                                                if (iVar8 < 0) {
                                                    uVar13 = 0x8000757;
                                                }
                                                else {
                                                    iVar8 = of_property_read_variable_u32_array
                                                                      (iVar11,"lt,mode-v-back-porch",&uStack_9c,1,0)
                                                    ;
                                                    if (iVar8 < 0) {
                                                        uVar13 = 0x8000979;
                                                    }
                                                    else {
                                                        unaff_x20 = of_find_property(iVar11,"lt,mode-v-active-high",0)
                                                        ;
                                                        iVar8 = of_property_read_variable_u32_array
                                                                          (iVar11,"lt,mode-clock-in-khz",pcVar20,1,0
                                                                          );
                                                        if (-1 < iVar8) {
                                                            iVar1 = *(pcVar20 + 4) + uStack_88 + uStack_90._4_2_;
                                                            puVar21 = *(arg1_00 + 0x8e0);
                                                            *(pcVar20 + 6) = *(pcVar20 + 4) + uStack_88;
                                                            *(pcVar20 + 8) = iVar1;
                                                            iVar2 = *(pcVar20 + 0xe) + uStack_98._4_2_ + uStack_98;
                                                            *(pcVar20 + 0x10) = *(pcVar20 + 0xe) + uStack_98._4_2_;
                                                            *(pcVar20 + 10) = iVar1 + uStack_90;
                                                            uVar16 = 1;
                                                            if (iVar12 == 0) {
                                                                uVar16 = 2;
                                                            }
                                                            uVar17 = 8;
                                                            if (unaff_x20 != NULL) {
                                                                uVar17 = 4;
                                                            }
                                                            unaff_x20 = pcVar20 + 0x40;
                                                            uVar10 = uVar16 | uVar10 | uVar17;
                                                            *(pcVar20 + 0x12) = iVar2;
                                                            *(pcVar20 + 0x14) = iVar2 + uStack_9c;
                                                            *(pcVar20 + 0x18) = uVar10;
                                                            uVar15 = __list_add_valid(unaff_x20,puVar21,pcStack_a8);
                                                            if ((uVar15 & 1) != 0) {
                                                                *(arg1_00 + 0x8e0) = unaff_x20;
                                                                *(pcVar20 + 0x40) = pcStack_a8;
                                                                *(pcVar20 + 0x48) = puVar21;
                                                                *puVar21 = unaff_x20;
                                                            }
                                                            unaff_x26 = unaff_x26 + 1;
                                                            drm_mode_set_name(pcVar20);
                                                            goto code_r0x080042cc;
                                                        }
                                                        uVar13 = 0x8000d15;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        _printk(uVar13,"lt9611uxc_parse_dt_modes",iVar8);
                        kfree(pcVar20);
                    }
code_r0x080042cc:
                    iVar11 = of_get_next_child(iVar14,iVar11);
                } while (iVar11 != 0);
            }
            *(arg1_00 + 0x8d0) = unaff_x26;
            unaff_x23 = arg1_00;
        }
        pcStack_b0 = pcVar18;
        if (iVar9 == 0) {
            uStack_90 = uStack_90 & 0xffffffff;
            if (pcVar18 != NULL) {
                uVar13 = *(arg1 + 0x310);
                *(arg1_00 + 0x8b4) = 0;
                unaff_x19 = of_get_child_by_name(uVar13,"lt,supply-entries");
                if (unaff_x19 == NULL) {
                    uVar13 = 0x80004ab;
                    unaff_x19 = pcVar19;
                }
                else {
                    iVar14 = of_get_next_available_child(unaff_x19,0);
                    if (iVar14 == 0) {
                        *(arg1_00 + 0x8b4) = 0;
                    }
                    else {
                        unaff_x20 = NULL;
                        do {
                            uVar10 = unaff_x20 + 1;
                            unaff_x20 = uVar10;
                            iVar14 = of_get_next_available_child(unaff_x19,iVar14);
                        } while (iVar14 != 0);
                        *(arg1_00 + 0x8b4) = uVar10;
                        if (uVar10 != 0) {
                            uVar15 = devm_kmalloc(pcVar18,unaff_x20 * 0x48,0xdc0);
                            *(arg1_00 + 0x8b8) = uVar15;
                            pcStack_a8 = arg1_00;
                            if (uVar15 != 0) {
                                unaff_x20 = of_get_next_available_child(unaff_x19,0);
                                if (unaff_x20 != NULL) {
                                    unaff_x26 = NULL;
                                    do {
                                        uStack_88 = 0;
                                        iVar9 = of_property_read_string(unaff_x20,"lt,supply-name",&uStack_88);
                                        if (iVar9 != 0) {
                                            uVar13 = 0x800035d;
code_r0x08004e70:
                                            _printk(uVar13,"lt9611uxc_get_dt_supply",iVar9);
                                            goto code_r0x080050d0;
                                        }
                                        iVar8 = unaff_x26;
                                        strscpy(*(arg1_00 + 0x8b8) + iVar8 * 0x48 + 8,uStack_88,0x20);
                                        iVar9 = of_property_read_variable_u32_array
                                                          (unaff_x20,"lt,supply-min-voltage",&uStack_90 + 4,1,0);
                                        if (iVar9 < 0) {
                                            uVar13 = 0x80004ca;
                                            goto code_r0x08004e70;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar8 * 0x48 + 0x28) = uStack_90._4_4_;
                                        iVar9 = of_property_read_variable_u32_array
                                                          (unaff_x20,"lt,supply-max-voltage",&uStack_90 + 4,1,0);
                                        if (iVar9 < 0) {
                                            _printk(0x8000598,"lt9611uxc_get_dt_supply",iVar9);
                                            unaff_x23 = arg1_00;
                                            goto code_r0x080050d0;
                                        }
                                        iVar14 = iVar8 * 0x48;
                                        *(*(arg1_00 + 0x8b8) + iVar14 + 0x2c) = uStack_90._4_4_;
                                        iVar9 = of_property_read_variable_u32_array
                                                          (unaff_x20,"lt,supply-enable-load",&uStack_90 + 4,1,0);
                                        uVar7 = 0;
                                        if (-1 < iVar9) {
                                            uVar7 = uStack_90._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar14 + 0x30) = uVar7;
                                        iVar9 = of_property_read_variable_u32_array
                                                          (unaff_x20,"lt,supply-disable-load",&uStack_90 + 4,1,0);
                                        uVar7 = 0;
                                        if (-1 < iVar9) {
                                            uVar7 = uStack_90._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar14 + 0x34) = uVar7;
                                        iVar9 = of_property_read_variable_u32_array
                                                          (unaff_x20,"lt,supply-pre-on-sleep",&uStack_90 + 4,1,0);
                                        uVar7 = 0;
                                        if (-1 < iVar9) {
                                            uVar7 = uStack_90._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar14 + 0x38) = uVar7;
                                        iVar9 = of_property_read_variable_u32_array
                                                          (unaff_x20,"lt,supply-pre-off-sleep",&uStack_90 + 4,1,0);
                                        uVar7 = 0;
                                        if (-1 < iVar9) {
                                            uVar7 = uStack_90._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar14 + 0x40) = uVar7;
                                        iVar9 = of_property_read_variable_u32_array
                                                          (unaff_x20,"lt,supply-post-on-sleep",&uStack_90 + 4,1,0);
                                        uVar7 = 0;
                                        if (-1 < iVar9) {
                                            uVar7 = uStack_90._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar14 + 0x3c) = uVar7;
                                        iVar9 = of_property_read_variable_u32_array
                                                          (unaff_x20,"lt,supply-post-off-sleep",&uStack_90 + 4,1,0);
                                        unaff_x26 = iVar8 + 1;
                                        uVar7 = 0;
                                        if (-1 < iVar9) {
                                            uVar7 = uStack_90._4_4_;
                                        }
                                        *(*(arg1_00 + 0x8b8) + iVar14 + 0x44) = uVar7;
                                        unaff_x20 = of_get_next_available_child(unaff_x19,unaff_x20);
                                        unaff_x23 = arg1_00;
                                    } while (unaff_x20 != NULL);
                                }
                                unaff_x20 = *(arg1_00 + 0x8b8);
                                if (unaff_x20 == NULL) goto code_r0x08004624;
                                uVar10 = *(arg1_00 + 0x8b4);
                                if (uVar10 < 1) goto code_r0x08004624;
                                unaff_x19 = unaff_x20 + 8;
                                uVar15 = regulator_get(pcVar18,unaff_x19);
                                iVar9 = 0;
                                pcVar19 = NULL;
                                *unaff_x20 = uVar15;
                                pcVar20 = unaff_x20;
                                if (uVar15 == 0) goto code_r0x08004e34;
                                if (0xfffffffffffff000 < uVar15) goto code_r0x08004e34;
                                iVar9 = regulator_set_voltage(uVar15,*(unaff_x20 + 0x28),*(unaff_x20 + 0x2c));
                                if (iVar9 < 0) {
                                    unaff_x23 = NULL;
                                }
                                else {
                                    unaff_x23 = NULL;
                                    iVar14 = 0;
                                    do {
                                        iVar11 = iVar14;
                                        if (uVar10 * 0x48 + -0x48 == iVar11) goto code_r0x08004624;
                                        unaff_x26 = unaff_x20 + iVar11;
                                        unaff_x19 = unaff_x26 + 0x50;
                                        uVar15 = regulator_get(pcVar18,unaff_x19);
                                        *(unaff_x26 + 0x48) = uVar15;
                                        if (uVar15 == 0) goto code_r0x08005068;
                                        if (0xfffffffffffff000 < uVar15) goto code_r0x08005068;
                                        iVar9 = regulator_set_voltage
                                                          (uVar15,*(unaff_x20 + iVar11 + 0x70),
                                                           *(unaff_x20 + iVar11 + 0x74));
                                        unaff_x23 = unaff_x23 + 1;
                                        iVar14 = iVar11 + 0x48;
                                    } while (-1 < iVar9);
                                    unaff_x19 = unaff_x20 + iVar11 + 0x50;
                                }
                                pcVar18 = unaff_x23 & 0xffffffff;
                                _printk(0x8000ade,"lt9611uxc_config_vreg",unaff_x19);
                                goto code_r0x080050b4;
                            }
                            iVar9 = -0xc;
                            uVar13 = 0x8001329;
                            goto code_r0x080040c8;
                        }
                    }
                    uVar13 = 0x8000eb3;
                }
                _printk(uVar13,"lt9611uxc_get_dt_supply");
                goto code_r0x08004624;
            }
            _printk(0x8000f44,"lt9611uxc_get_dt_supply",0,arg1_00);
            iVar9 = -0x16;
            uVar13 = 0x8001329;
            unaff_x19 = pcVar19;
            goto code_r0x080040c8;
        }
    }
    uVar13 = 0x8000aa8;
    unaff_x19 = pcVar19;
code_r0x080040c8:
    do {
        _printk(uVar13,"lt9611uxc_probe");
code_r0x08003fa8:
        while( true ) {
            iVar14 = sp_el0;
            if (*(iVar14 + 0x5e0) == iStack_68) {
                return iVar9;
            }
            __stack_chk_fail();
code_r0x08005068:
            pcVar19 = unaff_x23 + 1;
            pcVar20 = unaff_x26 + 0x48;
code_r0x08004e34:
            _printk(0x80009a3,"lt9611uxc_config_vreg",unaff_x19,iVar9);
            while( true ) {
                uVar10 = pcVar19 - 1;
                unaff_x23 = uVar10;
                *pcVar20 = 0;
                if (uVar10 < 0) break;
                regulator_set_load(*(unaff_x20 + unaff_x23 * 0x48),0);
                pcVar18 = unaff_x23;
code_r0x080050b4:
                pcVar20 = unaff_x20 + pcVar18 * 0x48;
                regulator_put(*pcVar20);
                pcVar19 = unaff_x23;
            }
            unaff_x23 = pcVar19;
            arg1_00 = pcStack_a8;
            if (iVar9 != 0) break;
code_r0x08004624:
            *(arg1_00 + 0x8c0) = arg1;
            *arg1_00 = pcStack_b0;
            iVar9 = sym.lt9611uxc_gpio_configure(arg1_00);
            unaff_x23 = pcStack_b0;
            if (iVar9 != 0) {
                _printk(0x80007e9,"lt9611uxc_probe");
                goto code_r0x08004ae8;
            }
            if (*(arg1_00 + 0x8a8) < 0x200) {
                uVar13 = gpio_to_desc();
                gpiod_set_raw_value(uVar13,1);
                msleep(0x14);
            }
            unaff_x20 = *(arg1_00 + 0x8b8);
            uVar10 = *(arg1_00 + 0x8b4);
            unaff_x19 = uVar10;
            if (*(arg1_00 + 0x8ac) < 0x200) {
                uVar13 = gpio_to_desc();
                gpiod_set_raw_value(uVar13,1);
            }
            if (*(arg1_00 + 0x8b0) < 0x200) {
                uVar13 = gpio_to_desc();
                gpiod_set_raw_value(uVar13,1);
            }
            if (0 < uVar10) {
                iVar9 = 0;
                pcVar18 = NULL;
                if ((*unaff_x20 != 0) && (*unaff_x20 < 0xfffffffffffff001)) {
                    pcVar18 = NULL;
                    pcVar20 = unaff_x19 + -1;
                    unaff_x26 = 0x3e8;
                    pcVar19 = unaff_x20;
                    do {
                        uVar10 = regulator_is_enabled();
                        unaff_x19 = uVar10;
                        if ((*(pcVar19 + 0x38) != 0) && (uVar10 == 0)) {
                            iVar14 = *(pcVar19 + 0x38) * 1000;
                            usleep_range_state(iVar14,iVar14,2);
                        }
                        iVar9 = regulator_set_load(*pcVar19,*(pcVar19 + 0x30));
                        if (iVar9 < 0) {
                            _printk(0x800067e,"lt9611uxc_enable_vreg",pcVar19 + 8);
                            goto code_r0x08004774;
                        }
                        iVar9 = regulator_enable(*pcVar19);
                        if ((*(pcVar19 + 0x3c) != 0) && (uVar10 == 0)) {
                            iVar14 = *(pcVar19 + 0x3c) * 1000;
                            usleep_range_state(iVar14,iVar14,2);
                        }
                        if (iVar9 < 0) {
                            _printk(0x8000697,"lt9611uxc_enable_vreg",pcVar19 + 8);
                            regulator_set_load(*pcVar19,*(pcVar19 + 0x34));
                            goto code_r0x08004774;
                        }
                        if (pcVar20 == pcVar18) goto code_r0x08004778;
                        pcVar19 = pcVar19 + 0x48;
                        pcVar18 = pcVar18 + 1;
                    } while ((*pcVar19 != 0) && (*pcVar19 < 0xfffffffffffff001));
                }
                _printk(0x8000af6,"lt9611uxc_enable_vreg",unaff_x20 + (pcVar18 & 0xffffffff) * 0x48 + 8,iVar9);
code_r0x08004774:
                if (pcVar18 != 0) {
                    unaff_x19 = pcVar18 + 1;
                    unaff_x20 = unaff_x20 + pcVar18 * 0x48 + -0x48;
                    do {
                        if (*(unaff_x20 + 0x40) != 0) {
                            iVar14 = *(unaff_x20 + 0x40) * 1000;
                            usleep_range_state(iVar14,iVar14,2);
                        }
                        regulator_set_load(*unaff_x20,*(unaff_x20 + 0x34));
                        regulator_disable(*unaff_x20);
                        if (*(unaff_x20 + 0x44) != 0) {
                            iVar14 = *(unaff_x20 + 0x44) * 1000;
                            usleep_range_state(iVar14,iVar14,2);
                        }
                        unaff_x19 = unaff_x19 + -1;
                        unaff_x20 = unaff_x20 + -0x48;
                    } while (1 < unaff_x19);
                }
code_r0x08004778:
                if (iVar9 == 0) goto code_r0x08004780;
                _printk(0x8001348,"lt9611uxc_probe");
                goto code_r0x08004adc;
            }
code_r0x08004780:
            uVar13 = gpio_to_desc(*(arg1_00 + 0x8a0));
            gpiod_set_raw_value(uVar13,1);
            msleep(0x14);
            uVar13 = gpio_to_desc(*(arg1_00 + 0x8a0));
            gpiod_set_raw_value(uVar13,0);
            msleep(0x14);
            uVar13 = gpio_to_desc(*(arg1_00 + 0x8a0));
            gpiod_set_raw_value(uVar13,1);
            msleep(300);
            sym.lt9611uxc_ctl_en(arg1_00);
            unaff_x19 = arg1_00 + 0xb28;
            uVar4 = *(*(arg1_00 + 0x8c0) + 2);
            *(arg1_00 + 0xb28) = 0;
            *(arg1_00 + 0xb30) = 0;
            *(arg1_00 + 0xb38) = 0;
            *(arg1_00 + 0xb40) = 0;
            *(arg1_00 + 0xb48) = 0;
            *(arg1_00 + 0xb50) = 0;
            *(arg1_00 + 0xb58) = 0;
            *(arg1_00 + 0xb60) = 0;
            *(arg1_00 + 0xb68) = 0;
            *(arg1_00 + 0xb70) = 0;
            *(arg1_00 + 0xb78) = 0;
            *(arg1_00 + 0xb80) = 0;
            *(arg1_00 + 0xb88) = 0;
            *(arg1_00 + 0xb90) = 0;
            *(arg1_00 + 0xb98) = 0;
            *(arg1_00 + 0xb28) = 0x81ff;
            *(arg1_00 + 0xba0) = 0;
            uStack_88 = CONCAT62(0x20000,uVar4);
            pcStack_80 = unaff_x19;
            iVar9 = i2c_transfer(*(*(arg1_00 + 0x8c0) + 0x18),&uStack_88,1);
            if (iVar9 < 1) {
                _printk(0x8001311,"lt9611uxc_write_byte");
            }
            uVar15 = *(arg1_00 + 0x8c0);
            uVar4 = *(uVar15 + 2);
            unaff_x20 = 0x10001;
            uVar5 = *(uVar15 + 2);
            *(arg1_00 + 0xc18) = 0;
            *(arg1_00 + 0xc20) = 0;
            *(arg1_00 + 0xc08) = 0;
            *(arg1_00 + 0xc10) = 0;
            *(arg1_00 + 0xbf8) = 0;
            *(arg1_00 + 0xc00) = 0;
            *(arg1_00 + 0xbe8) = 0;
            *(arg1_00 + 0xbf0) = 0;
            *(arg1_00 + 0xbd8) = 0;
            *(arg1_00 + 0xbe0) = 0;
            *(arg1_00 + 0xbc8) = 0;
            *(arg1_00 + 0xbd0) = 0;
            *(arg1_00 + 3000) = 0;
            *(arg1_00 + 0xbc0) = 0;
            *(arg1_00 + 0xba8) = 0;
            *(arg1_00 + 0xbb0) = 0;
            *(arg1_00 + 0xb98) = 0;
            *(arg1_00 + 0xba0) = 0;
            *(arg1_00 + 0xb88) = 0;
            *(arg1_00 + 0xb90) = 0;
            *(arg1_00 + 0xb78) = 0;
            *(arg1_00 + 0xb80) = 0;
            *(arg1_00 + 0xb68) = 0;
            *(arg1_00 + 0xb70) = 0;
            *(arg1_00 + 0xb58) = 0;
            *(arg1_00 + 0xb60) = 0;
            *(arg1_00 + 0xb48) = 0;
            *(arg1_00 + 0xb50) = 0;
            *(arg1_00 + 0xb38) = 0;
            *(arg1_00 + 0xb40) = 0;
            *unaff_x19 = 0;
            *(arg1_00 + 0xb30) = 0;
            uStack_88 = CONCAT62(0x10000,uVar4);
            uStack_78._0_6_ = CONCAT42(0x10001,uVar5);
            uStack_78 = uStack_78;
            pcStack_80 = unaff_x19;
            pcStack_70 = arg1_00 + 0xba8;
            iVar9 = i2c_transfer(*(uVar15 + 0x18),&uStack_88,2);
            if (iVar9 != 2) {
code_r0x08004a44:
                _printk(0x80006dd,"lt9611uxc_read");
                _printk(0x8000bcd,"lt9611uxc_read_device_id");
                sym.lt9611uxc_ctl_disable(arg1_00);
                msleep(0x32);
                _printk(0x8000f25,"lt9611uxc_probe");
                iVar9 = -1;
                goto code_r0x08004adc;
            }
            uVar15 = *(arg1_00 + 0x8c0);
            uVar4 = *(uVar15 + 2);
            uVar5 = *(uVar15 + 2);
            cVar3 = arg1_00[0xba8];
            *(arg1_00 + 0xc18) = 0;
            *(arg1_00 + 0xc20) = 0;
            *(arg1_00 + 0xc08) = 0;
            *(arg1_00 + 0xc10) = 0;
            *(arg1_00 + 0xbf8) = 0;
            *(arg1_00 + 0xc00) = 0;
            *(arg1_00 + 0xbe8) = 0;
            *(arg1_00 + 0xbf0) = 0;
            *(arg1_00 + 0xbd8) = 0;
            *(arg1_00 + 0xbe0) = 0;
            *(arg1_00 + 0xbc8) = 0;
            *(arg1_00 + 0xbd0) = 0;
            *(arg1_00 + 3000) = 0;
            *(arg1_00 + 0xbc0) = 0;
            *(arg1_00 + 0xba8) = 0;
            *(arg1_00 + 0xbb0) = 0;
            *(arg1_00 + 0xb98) = 0;
            *(arg1_00 + 0xba0) = 0;
            *(arg1_00 + 0xb88) = 0;
            *(arg1_00 + 0xb90) = 0;
            *(arg1_00 + 0xb78) = 0;
            *(arg1_00 + 0xb80) = 0;
            *(arg1_00 + 0xb68) = 0;
            *(arg1_00 + 0xb70) = 0;
            *(arg1_00 + 0xb58) = 0;
            *(arg1_00 + 0xb60) = 0;
            *(arg1_00 + 0xb48) = 0;
            *(arg1_00 + 0xb50) = 0;
            *(arg1_00 + 0xb38) = 0;
            *(arg1_00 + 0xb40) = 0;
            *unaff_x19 = 0;
            *(arg1_00 + 0xb30) = 0;
            arg1_00[0xb28] = 0x1;
            uStack_88 = CONCAT62(0x10000,uVar4);
            uStack_78._0_6_ = CONCAT42(0x10001,uVar5);
            uStack_78 = uStack_78;
            pcStack_80 = unaff_x19;
            pcStack_70 = arg1_00 + 0xba8;
            iVar9 = i2c_transfer(*(uVar15 + 0x18),&uStack_88,2);
            if (iVar9 != 2) goto code_r0x08004a44;
            _printk(0x80010d6,"lt9611uxc_read_device_id",CONCAT11(cVar3,arg1_00[0xba8]));
            sym.lt9611uxc_ctl_disable(arg1_00);
            msleep(0x32);
            *(arg1 + 0xb8) = arg1_00;
            iVar9 = sysfs_create_group(pcStack_b0,obj.lt9611uxc_sysfs_attr_grp);
            unaff_x19 = arg1_00;
            if (iVar9 != 0) {
                _printk(0x8000c51,"lt9611uxc_sysfs_init","lt9611uxc_sysfs_init",iVar9);
                uVar13 = 0x8000b76;
                goto code_r0x08004ed0;
            }
            cVar6 = sym.lt9611uxc_get_version(arg1_00);
            if (cVar6 == '\0') {
                iVar9 = request_firmware_nowait
                                  (obj.__this_module,1,"lt9611uxc_fw.bin",pcStack_b0,0xcc0,arg1_00,
                                   sym.lt9611uxc_firmware_cb.e58709b06554ea617982e3f2e7a32f4b.cfi_jt);
                if (iVar9 != 0) {
                    _printk(0x800031b,"lt9611uxc_probe",iVar9);
                    goto code_r0x08004adc;
                }
            }
            else {
                _printk(0x800101c,"lt9611uxc_probe");
                __mutex_init(arg1_00 + 0x130,"&pdata->lock",obj.lt9611uxc_probe.__key);
                __init_waitqueue_head(arg1_00 + 0xa10,"&pdata->edid_wq",obj.lt9611uxc_probe.__key);
                *(arg1_00 + 0x90) = *(arg1 + 0x310);
                *(arg1_00 + 0xb0) = reloc.lt9611uxc_bridge_attach.e58709b06554ea617982e3f2e7a32f4b.cfi_jt;
                drm_bridge_add(arg1_00 + 8);
                uVar15 = alloc_workqueue(0x8000499,0xe000a,1,"lt9611uxc_wk");
                *(arg1_00 + 0x9d8) = uVar15;
                unaff_x20 = arg1_00;
                if (uVar15 == 0) {
                    _printk(0x8001214,"lt9611uxc_probe");
                    iVar9 = 0;
                    goto code_r0x08004adc;
                }
                *(arg1_00 + 0x9e0) = 0xfffffffe0;
                *(arg1_00 + 0x9e8) = arg1_00 + 0x9e8;
                *(arg1_00 + 0x9f0) = arg1_00 + 0x9e8;
                *(arg1_00 + 0x9f8) = sym.lt9611uxc_hpd_work.cfi_jt;
                gpio_to_desc(*(arg1_00 + 0x89c));
                uVar13 = gpiod_to_irq();
                *(arg1_00 + 0x894) = uVar13;
                iVar9 = request_threaded_irq
                                  (uVar13,0,sym.lt9611uxc_irq_thread_handler.e58709b06554ea617982e3f2e7a32f4b.cfi_jt,
                                   0x2002,"lt9611uxc_irq",arg1_00);
                if (iVar9 != 0) {
                    uVar13 = 0x80010b9;
code_r0x08004ed0:
                    _printk(uVar13,"lt9611uxc_probe");
code_r0x08004adc:
                    sym.lt9611uxc_gpio_configure(arg1_00);
code_r0x08004ae8:
                    sym.lt9611uxc_put_dt_supply(pcStack_b0,arg1_00);
                }
            }
        }
code_r0x080050d0:
        if (*(pcStack_a8 + 0x8b8) != 0) {
            *(pcStack_a8 + 0x8b8) = 0;
            *(pcStack_a8 + 0x8b4) = 0;
        }
        uVar13 = 0x8001329;
    } while( true );
}


// ===== sym.lt9611uxc_remove @ 0x080050f0 (size 440) =====

uint sym.lt9611uxc_remove(int64_t arg1)

{
    int64_t *piVar1;
    uint uVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    ulong *in_x18;
    int64_t arg1_00;
    int64_t iVar5;
    int64_t *piVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0xb8);
    if (arg1_00 == 0) {
        uVar2 = 0xffffffea;
    }
    else {
        mipi_dsi_detach(*(arg1_00 + 0x120));
        mipi_dsi_device_unregister(*(arg1_00 + 0x120));
        drm_bridge_remove(arg1_00 + 8);
        arg1 = arg1 + 0x20;
        if (arg1 == 0) {
            _printk(0x8000726,"lt9611uxc_sysfs_remove","lt9611uxc_sysfs_remove");
        }
        else {
            sysfs_remove_group(arg1,obj.lt9611uxc_sysfs_attr_grp);
        }
        disable_irq(*(arg1_00 + 0x894));
        free_irq(*(arg1_00 + 0x894),arg1_00);
        uVar2 = sym.lt9611uxc_gpio_configure(arg1_00);
        if (arg1 == 0) {
            _printk(0x8000f44,"lt9611uxc_put_dt_supply",0,arg1_00);
        }
        else {
            iVar5 = *(arg1_00 + 0x8b8);
            if ((iVar5 != 0) && (uVar4 = *(arg1_00 + 0x8b4) - 1, -1 < uVar4)) {
                do {
                    piVar6 = iVar5 + uVar4 * 0x48;
                    if (*piVar6 != 0) {
                        regulator_set_voltage(*piVar6,0,*(iVar5 + uVar4 * 0x48 + 0x2c));
                        regulator_put(*piVar6);
                        *piVar6 = 0;
                    }
                    uVar4 = uVar4 - 1;
                } while (-1 < uVar4);
                iVar5 = *(arg1_00 + 0x8b8);
            }
            if (iVar5 != 0) {
                *(arg1_00 + 0x8b8) = 0;
            }
            *(arg1_00 + 0x8b4) = 0;
        }
        piVar6 = *(arg1_00 + 0x8d8);
        while (piVar6 != arg1_00 + 0x8d8) {
            piVar7 = *piVar6;
            uVar3 = __list_del_entry_valid(piVar6);
            if ((uVar3 & 1) != 0) {
                iVar5 = *piVar6;
                piVar1 = piVar6[1];
                *(iVar5 + 8) = piVar1;
                *piVar1 = iVar5;
            }
            *piVar6 = -0x2152ffffffffff00;
            piVar6[1] = -0x2152fffffffffede;
            kfree(piVar6 + -8);
            piVar6 = piVar7;
        }
        if (*(arg1_00 + 0x9d8) != 0) {
            destroy_workqueue();
        }
    }
    return uVar2;
}


// ===== sym.lt9611uxc_gpio_configure @ 0x080052a8 (size 716) =====

int sym.lt9611uxc_gpio_configure(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    uint64_t in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((in_x1 & 1) == 0) {
        if (*(arg1 + 0x89c) < 0x200) {
            gpio_free();
        }
        if (*(arg1 + 0x8a4) < 0x200) {
            gpio_free();
        }
        if (*(arg1 + 0x8a8) < 0x200) {
            gpio_free();
        }
        if (*(arg1 + 0x8a0) < 0x200) {
            gpio_free();
        }
        if (*(arg1 + 0x8b0) < 0x200) {
            gpio_free();
        }
        if (*(arg1 + 0x8ac) < 0x200) {
            gpio_free();
        }
        return 0;
    }
    if (*(arg1 + 0x8ac) < 0x200) {
        iVar1 = gpio_request(*(arg1 + 0x8ac),"hdmi_3p3_en");
        if (iVar1 != 0) {
            uVar2 = 0x80009bf;
            goto code_r0x080054e0;
        }
        uVar2 = gpio_to_desc(*(arg1 + 0x8ac));
        iVar1 = gpiod_direction_output_raw(uVar2,0);
        if (iVar1 == 0) goto code_r0x080052f4;
        uVar2 = 0x80009e1;
code_r0x0800550c:
        _printk(uVar2,"lt9611uxc_gpio_configure");
    }
    else {
code_r0x080052f4:
        if (*(arg1 + 0x8b0) < 0x200) {
            iVar1 = gpio_request(*(arg1 + 0x8b0),"hdmi_1p2_en");
            if (iVar1 != 0) {
                uVar2 = 0x8000a14;
                goto code_r0x080054e0;
            }
            uVar2 = gpio_to_desc(*(arg1 + 0x8b0));
            iVar1 = gpiod_direction_output_raw(uVar2,0);
            if (iVar1 != 0) {
                uVar2 = 0x80008e5;
                goto code_r0x0800550c;
            }
        }
        iVar1 = gpio_request(*(arg1 + 0x8a0),"lt9611-reset-gpio");
        if (iVar1 != 0) {
            _printk(0x8000295,"lt9611uxc_gpio_configure");
            return iVar1;
        }
        uVar2 = gpio_to_desc(*(arg1 + 0x8a0));
        iVar1 = gpiod_direction_output_raw(uVar2,0);
        if (iVar1 != 0) {
            uVar2 = 0x80003d1;
code_r0x080054e0:
            _printk(uVar2,"lt9611uxc_gpio_configure");
            goto code_r0x08005554;
        }
        if (*(arg1 + 0x8a8) < 0x200) {
            iVar1 = gpio_request(*(arg1 + 0x8a8),"lt9611-hdmi-en-gpio");
            if (iVar1 != 0) {
                uVar2 = 0x8001071;
                goto code_r0x080054e0;
            }
            uVar2 = gpio_to_desc(*(arg1 + 0x8a8));
            iVar1 = gpiod_direction_output_raw(uVar2,1);
            if (iVar1 != 0) {
                uVar2 = 0x8000652;
                goto code_r0x0800550c;
            }
        }
        if (*(arg1 + 0x8a4) < 0x200) {
            iVar1 = gpio_request(*(arg1 + 0x8a4),"lt9611-hdmi-ps-gpio");
            if (iVar1 != 0) {
                uVar2 = 0x8001132;
                goto code_r0x0800550c;
            }
            gpio_to_desc(*(arg1 + 0x8a4));
            iVar1 = gpiod_direction_input();
            if (iVar1 == 0) goto code_r0x080053a8;
            uVar2 = 0x800079a;
code_r0x08005528:
            _printk(uVar2,"lt9611uxc_gpio_configure");
        }
        else {
code_r0x080053a8:
            iVar1 = gpio_request(*(arg1 + 0x89c),"lt9611-irq-gpio");
            if (iVar1 != 0) {
                uVar2 = 0x800125f;
                goto code_r0x08005528;
            }
            gpio_to_desc(*(arg1 + 0x89c));
            iVar1 = gpiod_direction_input();
            if (iVar1 == 0) {
                return 0;
            }
            _printk(0x8000d83,"lt9611uxc_gpio_configure");
            gpio_free(*(arg1 + 0x89c));
        }
        if (*(arg1 + 0x8a4) < 0x200) {
            gpio_free();
        }
    }
    if (*(arg1 + 0x8a8) < 0x200) {
        gpio_free();
    }
code_r0x08005554:
    gpio_free(*(arg1 + 0x8a0));
    return iVar1;
}


// ===== sym.lt9611uxc_firmware_cb @ 0x08005574 (size 92) =====

void sym.lt9611uxc_firmware_cb(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x8000b17,"lt9611uxc_firmware_cb");
    }
    else {
        sym.lt9611uxc_firmware_upgrade(arg2,arg1);
        release_firmware(arg1);
    }
    return;
}


// ===== sym.lt9611uxc_irq_thread_handler @ 0x080055d0 (size 1012) =====

int64_t sym.lt9611uxc_irq_thread_handler(ulong noname_0,int64_t arg1)

{
    ulong *puVar1;
    uint8_t *puVar2;
    char cVar3;
    char cVar4;
    char cVar5;
    ushort uVar6;
    ushort uVar7;
    int iVar8;
    int64_t iVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    int64_t iVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar13;
    int64_t *piVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    ulong uStack_78;
    ulong *puStack_70;
    ulong uStack_68;
    uint8_t *puStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iVar9 = arg1 + 0x130;
    iStack_58 = *(iVar12 + 0x5e0);
    mutex_lock(iVar9);
    cVar3 = *(arg1 + 0xc2b);
    sym.lt9611uxc_ctl_en(arg1);
    puVar1 = arg1 + 0xb28;
    uVar6 = *(*(arg1 + 0x8c0) + 2);
    *(arg1 + 0xb28) = 0;
    *(arg1 + 0xb30) = 0;
    *(arg1 + 0xb38) = 0;
    *(arg1 + 0xb40) = 0;
    *(arg1 + 0xb48) = 0;
    *(arg1 + 0xb50) = 0;
    *(arg1 + 0xb58) = 0;
    *(arg1 + 0xb60) = 0;
    *(arg1 + 0xb68) = 0;
    *(arg1 + 0xb70) = 0;
    *(arg1 + 0xb78) = 0;
    *(arg1 + 0xb80) = 0;
    *(arg1 + 0xb88) = 0;
    *(arg1 + 0xb90) = 0;
    *(arg1 + 0xb98) = 0;
    *(arg1 + 0xb28) = 0xb0ff;
    *(arg1 + 0xba0) = 0;
    uStack_78 = CONCAT62(0x20000,uVar6);
    puStack_70 = puVar1;
    iVar8 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_78,1);
    if (iVar8 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar12 = *(arg1 + 0x8c0);
    puVar2 = arg1 + 0xba8;
    uVar6 = *(iVar12 + 2);
    uVar7 = *(iVar12 + 2);
    *(arg1 + 0xc18) = 0;
    *(arg1 + 0xc20) = 0;
    *(arg1 + 0xc08) = 0;
    *(arg1 + 0xc10) = 0;
    *(arg1 + 0xbf8) = 0;
    *(arg1 + 0xc00) = 0;
    *(arg1 + 0xbe8) = 0;
    *(arg1 + 0xbf0) = 0;
    *(arg1 + 0xbd8) = 0;
    *(arg1 + 0xbe0) = 0;
    *(arg1 + 0xbc8) = 0;
    *(arg1 + 0xbd0) = 0;
    *(arg1 + 3000) = 0;
    *(arg1 + 0xbc0) = 0;
    *(arg1 + 0xba8) = 0;
    *(arg1 + 0xbb0) = 0;
    *(arg1 + 0xb98) = 0;
    *(arg1 + 0xba0) = 0;
    *(arg1 + 0xb88) = 0;
    *(arg1 + 0xb90) = 0;
    *(arg1 + 0xb78) = 0;
    *(arg1 + 0xb80) = 0;
    *(arg1 + 0xb68) = 0;
    *(arg1 + 0xb70) = 0;
    *(arg1 + 0xb58) = 0;
    *(arg1 + 0xb60) = 0;
    *(arg1 + 0xb48) = 0;
    *(arg1 + 0xb50) = 0;
    *(arg1 + 0xb38) = 0;
    *(arg1 + 0xb40) = 0;
    *puVar1 = 0;
    *(arg1 + 0xb30) = 0;
    *(arg1 + 0xb28) = 0x22;
    uStack_78 = CONCAT62(0x10000,uVar6);
    uStack_68._0_6_ = CONCAT42(0x10001,uVar7);
    uStack_68 = uStack_68;
    puStack_70 = puVar1;
    puStack_60 = puVar2;
    iVar8 = i2c_transfer(*(iVar12 + 0x18),&uStack_78,2);
    if (iVar8 == 2) {
        uVar11 = *puVar2;
        if (*puVar2 == 0) {
            _printk(0x8000b5b,"lt9611uxc_irq_thread_handler");
        }
        else {
            uVar6 = *(*(arg1 + 0x8c0) + 2);
            *puVar1 = 0;
            *(arg1 + 0xb30) = 0;
            *(arg1 + 0xb38) = 0;
            *(arg1 + 0xb40) = 0;
            *(arg1 + 0xb48) = 0;
            *(arg1 + 0xb50) = 0;
            *(arg1 + 0xb58) = 0;
            *(arg1 + 0xb60) = 0;
            *(arg1 + 0xb68) = 0;
            *(arg1 + 0xb70) = 0;
            *(arg1 + 0xb78) = 0;
            *(arg1 + 0xb80) = 0;
            *(arg1 + 0xb88) = 0;
            *(arg1 + 0xb90) = 0;
            *(arg1 + 0xb98) = 0;
            *(arg1 + 0xba0) = 0;
            *(arg1 + 0xb28) = 0x22;
            uStack_78 = CONCAT62(0x20000,uVar6);
            puStack_70 = puVar1;
            iVar8 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_78,1);
            if (iVar8 < 1) {
                _printk(0x8001311,"lt9611uxc_write_byte");
            }
            iVar12 = *(arg1 + 0x8c0);
            uVar6 = *(iVar12 + 2);
            uVar7 = *(iVar12 + 2);
            *(arg1 + 0xc18) = 0;
            *(arg1 + 0xc20) = 0;
            *(arg1 + 0xc08) = 0;
            *(arg1 + 0xc10) = 0;
            *(arg1 + 0xbf8) = 0;
            *(arg1 + 0xc00) = 0;
            *(arg1 + 0xbe8) = 0;
            *(arg1 + 0xbf0) = 0;
            *(arg1 + 0xbd8) = 0;
            *(arg1 + 0xbe0) = 0;
            *(arg1 + 0xbc8) = 0;
            *(arg1 + 0xbd0) = 0;
            *(arg1 + 3000) = 0;
            *(arg1 + 0xbc0) = 0;
            *(arg1 + 0xba8) = 0;
            *(arg1 + 0xbb0) = 0;
            *(arg1 + 0xb98) = 0;
            *(arg1 + 0xba0) = 0;
            *(arg1 + 0xb88) = 0;
            *(arg1 + 0xb90) = 0;
            *(arg1 + 0xb78) = 0;
            *(arg1 + 0xb80) = 0;
            *(arg1 + 0xb68) = 0;
            *(arg1 + 0xb70) = 0;
            *(arg1 + 0xb58) = 0;
            *(arg1 + 0xb60) = 0;
            *(arg1 + 0xb48) = 0;
            *(arg1 + 0xb50) = 0;
            *(arg1 + 0xb38) = 0;
            *(arg1 + 0xb40) = 0;
            *puVar1 = 0;
            *(arg1 + 0xb30) = 0;
            *(arg1 + 0xb28) = 0x23;
            uStack_78 = CONCAT62(0x10000,uVar6);
            uStack_68._0_6_ = CONCAT42(0x10001,uVar7);
            uStack_68 = uStack_68;
            puStack_70 = puVar1;
            puStack_60 = puVar2;
            iVar8 = i2c_transfer(*(iVar12 + 0x18),&uStack_78,2);
            if (iVar8 == 2) {
                uVar10 = *puVar2;
            }
            else {
                _printk(0x80006dd,"lt9611uxc_read");
                uVar10 = 0;
            }
            *(arg1 + 0xc2c) = uVar10 >> 1 & 1;
            *(arg1 + 0xc2b) = uVar10 & 1;
            if ((uVar10 >> 1 & 1) == 0) {
                *(arg1 + 0xc2f) = 0;
            }
            else {
                *(arg1 + 0xc2f) = 1;
            }
        }
    }
    else {
        _printk(0x80006dd,"lt9611uxc_read");
        _printk(0x80002e9,"lt9611uxc_irq_thread_handler");
        uVar11 = 0;
    }
    sym.lt9611uxc_ctl_disable(arg1);
    cVar4 = *(arg1 + 0xc2d);
    cVar5 = *(arg1 + 0xc2b);
    if ((cVar4 == '\0') && (cVar5 != '\0')) {
        *(arg1 + 0xc2e) = 1;
        if (cVar3 == '\0') {
code_r0x080058a8:
            *(arg1 + 0xc28) = 1;
            mutex_unlock(iVar9);
            __wake_up(arg1 + 0xa10,3,0,0);
            goto code_r0x080058cc;
        }
    }
    else {
        if (cVar3 == '\0') {
            if (cVar4 != '\0' && cVar5 != '\0') goto code_r0x080058a8;
        }
        else if (cVar4 != '\0' && cVar5 != '\0') goto code_r0x0800589c;
        *(arg1 + 0xc28) = 0;
    }
code_r0x0800589c:
    mutex_unlock(iVar9);
code_r0x080058cc:
    msleep(0x32);
    if (((uVar11 >> 1 & 1) != 0) && (*(arg1 + 0xc2d) != '\0')) {
        queue_work_on(0x20,*(arg1 + 0x9d8),arg1 + 0x9e0);
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_58) {
        auVar15 = __stack_chk_fail();
        iVar12 = auVar15._8_8_;
        iVar9 = auVar15._0_8_;
        *extraout_x18 = sym.lt9611uxc_put_dt_supply;
        if ((iVar9 == 0) || (iVar12 == 0)) {
            iVar9 = _printk(0x8000f44,"lt9611uxc_put_dt_supply",iVar9,iVar12);
        }
        else {
            iVar13 = *(iVar12 + 0x8b8);
            if ((iVar13 != 0) && (uVar11 = *(iVar12 + 0x8b4) - 1, -1 < uVar11)) {
                do {
                    piVar14 = iVar13 + uVar11 * 0x48;
                    iVar9 = 0;
                    if (*piVar14 != 0) {
                        regulator_set_voltage(*piVar14,0,*(iVar13 + uVar11 * 0x48 + 0x2c));
                        iVar9 = regulator_put(*piVar14);
                        *piVar14 = 0;
                    }
                    uVar11 = uVar11 - 1;
                } while (-1 < uVar11);
                iVar13 = *(iVar12 + 0x8b8);
            }
            if (iVar13 != 0) {
                *(iVar12 + 0x8b8) = 0;
            }
            *(iVar12 + 0x8b4) = 0;
        }
        return iVar9;
    }
    return 1;
}


// ===== sym.lt9611uxc_put_dt_supply @ 0x080059c4 (size 200) =====

void sym.lt9611uxc_put_dt_supply(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (arg2 == 0)) {
        _printk(0x8000f44,"lt9611uxc_put_dt_supply",arg1,arg2);
    }
    else {
        iVar2 = *(arg2 + 0x8b8);
        if ((iVar2 != 0) && (uVar1 = *(arg2 + 0x8b4) - 1, -1 < uVar1)) {
            do {
                piVar3 = iVar2 + uVar1 * 0x48;
                if (*piVar3 != 0) {
                    regulator_set_voltage(*piVar3,0,*(iVar2 + uVar1 * 0x48 + 0x2c));
                    regulator_put(*piVar3);
                    *piVar3 = 0;
                }
                uVar1 = uVar1 - 1;
            } while (-1 < uVar1);
            iVar2 = *(arg2 + 0x8b8);
        }
        if (iVar2 != 0) {
            *(arg2 + 0x8b8) = 0;
        }
        *(arg2 + 0x8b4) = 0;
    }
    return;
}


// ===== sym.lt9611uxc_ctl_en @ 0x08005a8c (size 352) =====

ulong sym.lt9611uxc_ctl_en(int64_t arg1)

{
    ulong *puVar1;
    ulong *puVar2;
    ushort uVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong in_x3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong unaff_x30;
    ushort uStack_98;
    unkbyte6 Stack_96;
    ulong *puStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    ulong *puStack_70;
    ulong uStack_60;
    int64_t iStack_58;
    ushort uStack_48;
    unkbyte6 Stack_46;
    ulong *puStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    puVar1 = arg1 + 0xb28;
    uVar3 = *(*(arg1 + 0x8c0) + 2);
    *(arg1 + 0xb28) = 0;
    *(arg1 + 0xb30) = 0;
    *(arg1 + 0xb38) = 0;
    *(arg1 + 0xb40) = 0;
    *(arg1 + 0xb48) = 0;
    *(arg1 + 0xb50) = 0;
    *(arg1 + 0xb58) = 0;
    *(arg1 + 0xb60) = 0;
    *(arg1 + 0xb68) = 0;
    *(arg1 + 0xb70) = 0;
    *(arg1 + 0xb78) = 0;
    *(arg1 + 0xb80) = 0;
    *(arg1 + 0xb88) = 0;
    *(arg1 + 0xb90) = 0;
    *(arg1 + 0xb98) = 0;
    *(arg1 + 0xb28) = 0x80ff;
    *(arg1 + 0xba0) = 0;
    _uStack_48 = CONCAT62(0x20000,uVar3);
    puStack_40 = puVar1;
    iVar4 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_48,1);
    if (iVar4 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar3 = *(*(arg1 + 0x8c0) + 2);
    *puVar1 = 0;
    *(arg1 + 0xb30) = 0;
    *(arg1 + 0xb38) = 0;
    *(arg1 + 0xb40) = 0;
    *(arg1 + 0xb48) = 0;
    *(arg1 + 0xb50) = 0;
    *(arg1 + 0xb58) = 0;
    *(arg1 + 0xb60) = 0;
    *(arg1 + 0xb68) = 0;
    *(arg1 + 0xb70) = 0;
    *(arg1 + 0xb78) = 0;
    *(arg1 + 0xb80) = 0;
    *(arg1 + 0xb88) = 0;
    *(arg1 + 0xb90) = 0;
    *(arg1 + 0xb98) = 0;
    *(arg1 + 0xba0) = 0;
    *(arg1 + 0xb28) = 0x1ee;
    _uStack_48 = CONCAT62(0x20000,uVar3);
    puStack_40 = puVar1;
    uVar5 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_48,1);
    if (uVar5 < 1) {
        uVar5 = _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return uVar5;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.lt9611uxc_ctl_disable;
    pcStack_78 = sym.lt9611uxc_ctl_disable;
    uStack_60 = 0x200000000;
    iVar7 = sp_el0;
    iStack_88 = *(iVar7 + 0x5e0);
    puVar2 = iVar6 + 0xb28;
    uVar3 = *(*(iVar6 + 0x8c0) + 2);
    *(iVar6 + 0xb28) = 0;
    *(iVar6 + 0xb30) = 0;
    *(iVar6 + 0xb38) = 0;
    *(iVar6 + 0xb40) = 0;
    *(iVar6 + 0xb48) = 0;
    *(iVar6 + 0xb50) = 0;
    *(iVar6 + 0xb58) = 0;
    *(iVar6 + 0xb60) = 0;
    *(iVar6 + 0xb68) = 0;
    *(iVar6 + 0xb70) = 0;
    *(iVar6 + 0xb78) = 0;
    *(iVar6 + 0xb80) = 0;
    *(iVar6 + 0xb88) = 0;
    *(iVar6 + 0xb90) = 0;
    *(iVar6 + 0xb98) = 0;
    *(iVar6 + 0xb28) = 0x80ff;
    *(iVar6 + 0xba0) = 0;
    _uStack_98 = CONCAT62(0x20000,uVar3);
    puStack_90 = puVar2;
    puStack_80 = &stack0xffffffffffffffd0;
    puStack_70 = puVar1;
    iStack_58 = arg1;
    iVar4 = i2c_transfer(*(*(iVar6 + 0x8c0) + 0x18),&uStack_98,1);
    if (iVar4 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar3 = *(*(iVar6 + 0x8c0) + 2);
    *puVar2 = 0;
    *(iVar6 + 0xb30) = 0;
    *(iVar6 + 0xb38) = 0;
    *(iVar6 + 0xb40) = 0;
    *(iVar6 + 0xb48) = 0;
    *(iVar6 + 0xb50) = 0;
    *(iVar6 + 0xb58) = 0;
    *(iVar6 + 0xb60) = 0;
    *(iVar6 + 0xb68) = 0;
    *(iVar6 + 0xb70) = 0;
    *(iVar6 + 0xb78) = 0;
    *(iVar6 + 0xb80) = 0;
    *(iVar6 + 0xb88) = 0;
    *(iVar6 + 0xb90) = 0;
    *(iVar6 + 0xb98) = 0;
    *(iVar6 + 0xba0) = 0;
    *(iVar6 + 0xb28) = 0xee;
    _uStack_98 = CONCAT62(0x20000,uVar3);
    puStack_90 = puVar2;
    uVar5 = i2c_transfer(*(*(iVar6 + 0x8c0) + 0x18),&uStack_98,1);
    if (uVar5 < 1) {
        uVar5 = _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_88) {
        return uVar5;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18_00 = sym.dump_info_store;
    iVar7 = *(iVar7 + 0x98);
    if (iVar7 == 0) {
        _printk(0x8001375,"dump_info_store");
        in_x3 = 0xffffffffffffffea;
    }
    else {
        print_hex_dump(0x80003fb,0x800115c,0,0x10,1,iVar7 + 0xa28,0x80,0,&puStack_80,sym.dump_info_store);
        print_hex_dump(0x80003fb,0x800115c,0,0x10,1,iVar7 + 0xaa8,0x80,0);
    }
    return in_x3;
}


// ===== sym.lt9611uxc_ctl_disable @ 0x08005bec (size 352) =====

ulong sym.lt9611uxc_ctl_disable(int64_t arg1)

{
    ulong *puVar1;
    ushort uVar2;
    int iVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong in_x3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ushort uStack_48;
    unkbyte6 Stack_46;
    ulong *puStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    puVar1 = arg1 + 0xb28;
    uVar2 = *(*(arg1 + 0x8c0) + 2);
    *(arg1 + 0xb28) = 0;
    *(arg1 + 0xb30) = 0;
    *(arg1 + 0xb38) = 0;
    *(arg1 + 0xb40) = 0;
    *(arg1 + 0xb48) = 0;
    *(arg1 + 0xb50) = 0;
    *(arg1 + 0xb58) = 0;
    *(arg1 + 0xb60) = 0;
    *(arg1 + 0xb68) = 0;
    *(arg1 + 0xb70) = 0;
    *(arg1 + 0xb78) = 0;
    *(arg1 + 0xb80) = 0;
    *(arg1 + 0xb88) = 0;
    *(arg1 + 0xb90) = 0;
    *(arg1 + 0xb98) = 0;
    *(arg1 + 0xb28) = 0x80ff;
    *(arg1 + 0xba0) = 0;
    _uStack_48 = CONCAT62(0x20000,uVar2);
    puStack_40 = puVar1;
    iVar3 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_48,1);
    if (iVar3 < 1) {
        _printk(0x8001311,"lt9611uxc_write_byte");
    }
    uVar2 = *(*(arg1 + 0x8c0) + 2);
    *puVar1 = 0;
    *(arg1 + 0xb30) = 0;
    *(arg1 + 0xb38) = 0;
    *(arg1 + 0xb40) = 0;
    *(arg1 + 0xb48) = 0;
    *(arg1 + 0xb50) = 0;
    *(arg1 + 0xb58) = 0;
    *(arg1 + 0xb60) = 0;
    *(arg1 + 0xb68) = 0;
    *(arg1 + 0xb70) = 0;
    *(arg1 + 0xb78) = 0;
    *(arg1 + 0xb80) = 0;
    *(arg1 + 0xb88) = 0;
    *(arg1 + 0xb90) = 0;
    *(arg1 + 0xb98) = 0;
    *(arg1 + 0xba0) = 0;
    *(arg1 + 0xb28) = 0xee;
    _uStack_48 = CONCAT62(0x20000,uVar2);
    puStack_40 = puVar1;
    uVar4 = i2c_transfer(*(*(arg1 + 0x8c0) + 0x18),&uStack_48,1);
    if (uVar4 < 1) {
        uVar4 = _printk(0x8001311,"lt9611uxc_write_byte");
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.dump_info_store;
    iVar5 = *(iVar5 + 0x98);
    if (iVar5 == 0) {
        _printk(0x8001375,"dump_info_store");
        in_x3 = 0xffffffffffffffea;
    }
    else {
        print_hex_dump(0x80003fb,0x800115c,0,0x10,1,iVar5 + 0xa28,0x80,0,&stack0xffffffffffffffd0,
                       sym.dump_info_store);
        print_hex_dump(0x80003fb,0x800115c,0,0x10,1,iVar5 + 0xaa8,0x80,0);
    }
    return in_x3;
}


// ===== sym.dump_info_store @ 0x08005d4c (size 180) =====

int64_t sym.dump_info_store(int64_t arg1,uchar noname_1 [16],uchar noname_2 [16],int64_t arg2)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x98);
    if (iVar1 == 0) {
        _printk(0x8001375,"dump_info_store");
        arg2 = -0x16;
    }
    else {
        print_hex_dump(0x80003fb,0x800115c,0,0x10,1,iVar1 + 0xa28,0x80,0);
        print_hex_dump(0x80003fb,0x800115c,0,0x10,1,iVar1 + 0xaa8,0x80,0);
    }
    return arg2;
}


// ===== sym.firmware_upgrade_show @ 0x08005e00 (size 68) =====

int64_t sym.firmware_upgrade_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8000d38,*(*(arg1 + 0x98) + 0xc30));
    return iVar1;
}


// ===== sym.firmware_upgrade_store @ 0x08005e44 (size 180) =====

int64_t sym.firmware_upgrade_store(int64_t arg1,uchar noname_1 [16],uchar noname_2 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x98);
    if (iVar2 == 0) {
        _printk(0x8001375,"firmware_upgrade_store");
        arg2 = -0x16;
    }
    else {
        iVar1 = request_firmware_nowait
                          (obj.__this_module,1,"lt9611uxc_fw.bin",*(iVar2 + 0x8c0) + 0x20,0xcc0,iVar2,
                           sym.lt9611uxc_firmware_cb.e58709b06554ea617982e3f2e7a32f4b.cfi_jt);
        if (iVar1 == 0) {
            _printk(0x8000be9,"firmware_upgrade_store");
        }
        else {
            _printk(0x800031b,"firmware_upgrade_store",iVar1);
        }
    }
    return arg2;
}


// ===== sym.edid_mode_show @ 0x08005ef8 (size 108) =====

int64_t sym.edid_mode_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    ushort uVar1;
    ushort uVar2;
    uint uVar3;
    int iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + 0x98);
    uVar1 = *(iVar5 + 0x8ec);
    uVar2 = *(iVar5 + 0x8f6);
    uVar3 = drm_mode_vrefresh(iVar5 + 0x8e8);
    iVar4 = scnprintf(arg2,0x1000,"%dx%d@%d\n",uVar1,uVar2,uVar3);
    return iVar4;
}


// ===== sym.edid_mode_store @ 0x08005f64 (size 212) =====

uint64_t sym.edid_mode_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    char *pcVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar6;
    int64_t iVar7;
    ulong unaff_x30;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    iVar7 = *(arg1 + 0x98);
    uStack_30 = 0;
    if (iVar7 == 0) {
        _printk(0x8001375,"edid_mode_store");
        arg3 = 0xffffffffffffffea;
    }
    else {
        iVar1 = sscanf(arg2,"%d %d",&uStack_30 + 4,&uStack_30);
        if (((iVar1 == 2) && (uStack_30._4_4_ != 0)) && (uStack_30 != 0)) {
            *(iVar7 + 0x964) = uStack_30 >> 0x20;
            *(iVar7 + 0x96e) = uStack_30;
            *(iVar7 + 0xc2a) = 1;
        }
        else {
            arg3 = 0xffffffffffffffea;
            *(iVar7 + 0xc2a) = 0;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.lt9611uxc_bridge_attach;
    pcStack_58 = sym.lt9611uxc_bridge_attach;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    uStack_88 = _str.lt9611;
    uStack_80 = *0x8001610;
    uStack_78 = *0x8001618;
    uStack_70 = *0x8001620;
    puStack_60 = &stack0xffffffffffffffe0;
    if (*(iVar3 + 0x70) == 0) {
        __drm_err("Parent encoder object not found");
        uVar6 = 0xffffffed;
    }
    else {
        iVar7 = iVar3 + 0x158;
        uVar2 = drm_connector_init(*(iVar3 + 0x68),iVar7,obj.lt9611uxc_connector_funcs,0xb);
        if (uVar2 == 0) {
            *(iVar3 + 0x708) = reloc.lt9611uxc_connector_get_modes.e58709b06554ea617982e3f2e7a32f4b.cfi_jt;
            uVar2 = drm_connector_register(iVar7);
            if (uVar2 == 0) {
                *(iVar3 + 0x700) = 2;
                uVar2 = drm_connector_attach_encoder(iVar7,*(iVar3 + 0x70));
                if (uVar2 == 0) {
                    iVar7 = of_find_mipi_dsi_host_by_node(*(iVar3 + 0x110));
                    if (iVar7 == 0) {
                        __drm_err("failed to find dsi host\n");
                        uVar6 = 0xfffffdfb;
                    }
                    else {
                        uVar5 = mipi_dsi_device_register_full(iVar7,&uStack_88);
                        if (uVar5 < 0xfffffffffffff001) {
                            *(uVar5 + 0x3b0) = 4;
                            *(uVar5 + 0x3b8) = 0x15;
                            uVar2 = mipi_dsi_attach(uVar5);
                            if (uVar2 < 0) {
                                uVar6 = uVar2;
                                _printk(0x8000a40,"lt9611uxc_bridge_attach");
                                mipi_dsi_device_unregister(uVar5);
                            }
                            else {
                                *(iVar3 + 0x118) = uVar5;
                                *(iVar3 + 0xc25) = 1;
                                _printk(0x800040f,"lt9611uxc_bridge_attach");
                                uVar6 = 0;
                            }
                        }
                        else {
                            __drm_err("failed to create dsi device\n");
                            uVar6 = uVar5;
                        }
                    }
                    goto code_r0x08006124;
                }
                uVar6 = uVar2;
                pcVar4 = "Failed to link up connector to encoder: %d\n";
            }
            else {
                uVar6 = uVar2;
                pcVar4 = "Failed to register connector: %d\n";
            }
        }
        else {
            uVar6 = uVar2;
            pcVar4 = "Failed to initialize connector: %d\n";
        }
        __drm_err(pcVar4,uVar6);
    }
code_r0x08006124:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return uVar6 & 0xffffffff;
    }
    __stack_chk_fail();
    return 1;
}


// ===== sym.lt9611uxc_bridge_attach @ 0x08006038 (size 468) =====

uint64_t sym.lt9611uxc_bridge_attach(int64_t arg1)

{
    uint32_t uVar1;
    char *pcVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    uint64_t uVar5;
    ulong unaff_x30;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_58 = _str.lt9611;
    uStack_50 = *0x8001610;
    uStack_48 = *0x8001618;
    uStack_40 = *0x8001620;
    if (*(arg1 + 0x70) == 0) {
        __drm_err("Parent encoder object not found");
        uVar5 = 0xffffffed;
    }
    else {
        iVar3 = arg1 + 0x158;
        uVar1 = drm_connector_init(*(arg1 + 0x68),iVar3,obj.lt9611uxc_connector_funcs,0xb);
        if (uVar1 == 0) {
            *(arg1 + 0x708) = reloc.lt9611uxc_connector_get_modes.e58709b06554ea617982e3f2e7a32f4b.cfi_jt;
            uVar1 = drm_connector_register(iVar3);
            if (uVar1 == 0) {
                *(arg1 + 0x700) = 2;
                uVar1 = drm_connector_attach_encoder(iVar3,*(arg1 + 0x70));
                if (uVar1 == 0) {
                    iVar3 = of_find_mipi_dsi_host_by_node(*(arg1 + 0x110));
                    if (iVar3 == 0) {
                        __drm_err("failed to find dsi host\n");
                        uVar5 = 0xfffffdfb;
                    }
                    else {
                        uVar4 = mipi_dsi_device_register_full(iVar3,&uStack_58);
                        if (uVar4 < 0xfffffffffffff001) {
                            *(uVar4 + 0x3b0) = 4;
                            *(uVar4 + 0x3b8) = 0x15;
                            uVar1 = mipi_dsi_attach(uVar4);
                            if (uVar1 < 0) {
                                uVar5 = uVar1;
                                _printk(0x8000a40,"lt9611uxc_bridge_attach");
                                mipi_dsi_device_unregister(uVar4);
                            }
                            else {
                                *(arg1 + 0x118) = uVar4;
                                *(arg1 + 0xc25) = 1;
                                _printk(0x800040f,"lt9611uxc_bridge_attach");
                                uVar5 = 0;
                            }
                        }
                        else {
                            __drm_err("failed to create dsi device\n");
                            uVar5 = uVar4;
                        }
                    }
                    goto code_r0x08006124;
                }
                uVar5 = uVar1;
                pcVar2 = "Failed to link up connector to encoder: %d\n";
            }
            else {
                uVar5 = uVar1;
                pcVar2 = "Failed to register connector: %d\n";
            }
        }
        else {
            uVar5 = uVar1;
            pcVar2 = "Failed to initialize connector: %d\n";
        }
        __drm_err(pcVar2,uVar5);
    }
code_r0x08006124:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar5 & 0xffffffff;
    }
    __stack_chk_fail();
    return 1;
}


// ===== sym.lt9611uxc_bridge_mode_fixup @ 0x0800620c (size 16) =====

ulong sym.lt9611uxc_bridge_mode_fixup(void)

{
    return 1;
}


// ===== sym.lt9611uxc_bridge_disable @ 0x0800621c (size 12) =====

void sym.lt9611uxc_bridge_disable(void)

{
    return;
}


// ===== sym.lt9611uxc_bridge_post_disable @ 0x08006228 (size 12) =====

void sym.lt9611uxc_bridge_post_disable(void)

{
    return;
}


// ===== sym.lt9611uxc_bridge_mode_set @ 0x08006234 (size 44) =====

void sym.lt9611uxc_bridge_mode_set(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    drm_mode_copy(arg1 + 0x8e0,arg2);
    return;
}


// ===== sym.lt9611uxc_bridge_pre_enable @ 0x08006260 (size 116) =====

void sym.lt9611uxc_bridge_pre_enable(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = gpio_to_desc(*(arg1 + 0x898));
    gpiod_set_raw_value(uVar1,1);
    msleep(0x14);
    uVar1 = gpio_to_desc(*(arg1 + 0x898));
    gpiod_set_raw_value(uVar1,0);
    msleep(0x14);
    uVar1 = gpio_to_desc(*(arg1 + 0x898));
    gpiod_set_raw_value(uVar1,1);
    msleep(300);
    return;
}


// ===== sym.lt9611uxc_bridge_enable @ 0x080062d4 (size 12) =====

void sym.lt9611uxc_bridge_enable(void)

{
    return;
}


// ===== sym.lt9611uxc_connector_detect @ 0x080062e0 (size 540) =====

uint sym.lt9611uxc_connector_detect(int64_t arg1)

{
    int iVar1;
    int iVar2;
    ulong *puVar3;
    char cVar4;
    ushort uVar5;
    ushort uVar6;
    uint16_t uVar7;
    ulong *puVar8;
    ulong *puVar9;
    int iVar10;
    uint uVar11;
    int iVar12;
    ulong *puVar13;
    ulong uVar14;
    uint64_t in_x1;
    int *piVar15;
    int64_t iVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *puVar17;
    int64_t *piVar18;
    int64_t *piVar19;
    ulong *puVar20;
    ulong *puVar21;
    ulong unaff_x30;
    uchar auVar22 [16];
    ulong uStack_f0;
    ulong *puStack_e8;
    ulong uStack_e0;
    ulong *puStack_d8;
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong uStack_68;
    ulong *puStack_60;
    ulong uStack_58;
    uint8_t *puStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar16 = sp_el0;
    iStack_48 = *(iVar16 + 0x5e0);
    *(arg1 + 0x768) = 2;
    if ((in_x1 & 1) == 0) {
        uVar11 = 1;
        *(arg1 + 0x768) = 1;
    }
    else {
        mutex_lock(arg1 + -0x30);
        sym.lt9611uxc_ctl_en(arg1 + -0x160);
        puVar13 = arg1 + 0x9c8;
        uVar5 = *(*(arg1 + 0x760) + 2);
        *(arg1 + 0x9c8) = 0;
        *(arg1 + 0x9d0) = 0;
        *(arg1 + 0x9d8) = 0;
        *(arg1 + 0x9e0) = 0;
        *(arg1 + 0x9e8) = 0;
        *(arg1 + 0x9f0) = 0;
        *(arg1 + 0x9f8) = 0;
        *(arg1 + 0xa00) = 0;
        *(arg1 + 0xa08) = 0;
        *(arg1 + 0xa10) = 0;
        *(arg1 + 0xa18) = 0;
        *(arg1 + 0xa20) = 0;
        *(arg1 + 0xa28) = 0;
        *(arg1 + 0xa30) = 0;
        *(arg1 + 0xa38) = 0;
        *(arg1 + 0x9c8) = 0xb0ff;
        *(arg1 + 0xa40) = 0;
        uStack_68 = CONCAT62(0x20000,uVar5);
        puStack_60 = puVar13;
        iVar10 = i2c_transfer(*(*(arg1 + 0x760) + 0x18),&uStack_68,1);
        if (iVar10 < 1) {
            _printk(0x8001311,"lt9611uxc_write_byte");
        }
        iVar16 = *(arg1 + 0x760);
        uVar5 = *(iVar16 + 2);
        uVar6 = *(iVar16 + 2);
        *(arg1 + 0xab8) = 0;
        *(arg1 + 0xac0) = 0;
        *(arg1 + 0xaa8) = 0;
        *(arg1 + 0xab0) = 0;
        *(arg1 + 0xa98) = 0;
        *(arg1 + 0xaa0) = 0;
        *(arg1 + 0xa88) = 0;
        *(arg1 + 0xa90) = 0;
        *(arg1 + 0xa78) = 0;
        *(arg1 + 0xa80) = 0;
        *(arg1 + 0xa68) = 0;
        *(arg1 + 0xa70) = 0;
        *(arg1 + 0xa58) = 0;
        *(arg1 + 0xa60) = 0;
        *(arg1 + 0xa48) = 0;
        *(arg1 + 0xa50) = 0;
        *(arg1 + 0xa38) = 0;
        *(arg1 + 0xa40) = 0;
        *(arg1 + 0xa28) = 0;
        *(arg1 + 0xa30) = 0;
        *(arg1 + 0xa18) = 0;
        *(arg1 + 0xa20) = 0;
        *(arg1 + 0xa08) = 0;
        *(arg1 + 0xa10) = 0;
        *(arg1 + 0x9f8) = 0;
        *(arg1 + 0xa00) = 0;
        *(arg1 + 0x9e8) = 0;
        *(arg1 + 0x9f0) = 0;
        *(arg1 + 0x9d8) = 0;
        *(arg1 + 0x9e0) = 0;
        *puVar13 = 0;
        *(arg1 + 0x9d0) = 0;
        *(arg1 + 0x9c8) = 0x23;
        uStack_68 = CONCAT62(0x10000,uVar5);
        uStack_58 = CONCAT42(0x10001,uVar6);
        puStack_60 = puVar13;
        puStack_50 = arg1 + 0xa48;
        iVar10 = i2c_transfer(*(iVar16 + 0x18),&uStack_68,2);
        if (iVar10 == 2) {
            if ((*(arg1 + 0xa48) >> 1 & 1) != 0) {
                *(arg1 + 0x768) = 1;
            }
        }
        else {
            _printk(0x80006dd,"lt9611uxc_read");
            _printk(0x8000a64,"lt9611uxc_connector_detect");
        }
        sym.lt9611uxc_ctl_disable(arg1 + -0x160);
        mutex_unlock(arg1 + -0x30);
        msleep(0x32);
        uVar11 = *(arg1 + 0x768);
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_48) {
        return uVar11;
    }
    puVar13 = __stack_chk_fail(uVar11);
    *extraout_x18 = sym.lt9611uxc_connector_get_modes;
    pcStack_b8 = sym.lt9611uxc_connector_get_modes;
    iVar16 = sp_el0;
    puVar20 = puVar13 + -6;
    iStack_c8 = *(iVar16 + 0x5e0);
    piVar19 = puVar13 + -0x2c;
    puStack_c0 = &stack0xffffffffffffffc0;
    mutex_lock(puVar20);
    if ((*(puVar13 + 0xace) == '\0') && (*(puVar13 + 0x159) == '\0')) {
        if ((*(puVar13 + 0xacb) == '\0') && (*(puVar13 + 0xacf) != '\0')) {
            *(puVar13 + 0xacf) = 0;
            mutex_unlock(puVar20);
            if (*(puVar13 + 0x159) == '\0') {
                puStack_d8 = NULL;
                uStack_d0 = 0;
                puStack_e8 = NULL;
                uStack_e0 = 0;
                uStack_f0 = 0;
                init_wait_entry(&uStack_f0,0);
                puVar17 = puVar13 + 0x116;
                prepare_to_wait_event(puVar17,&uStack_f0,2);
                if (*(puVar13 + 0x159) == '\0') {
                    iVar16 = 500;
                    do {
                        iVar16 = schedule_timeout(iVar16);
                        prepare_to_wait_event(puVar17,&uStack_f0,2);
                        if (iVar16 == 0 && *(puVar13 + 0x159) != '\0') {
                            iVar16 = 1;
                        }
                    } while ((*(puVar13 + 0x159) == '\0') && (iVar16 != 0));
                    finish_wait(puVar17,&uStack_f0);
                    if (iVar16 == 0) goto code_r0x08006950;
                }
                else {
                    finish_wait(puVar17,&uStack_f0);
                }
            }
            goto code_r0x08006560;
        }
        mutex_unlock(puVar20);
    }
    else {
        *(puVar13 + 0xace) = 0;
        *(puVar13 + 0x159) = 0;
        mutex_unlock(puVar20);
code_r0x08006560:
        if (puVar13[-7] == 0) {
            mutex_lock(puVar20);
            sym.lt9611uxc_ctl_en(piVar19);
            sym.lt9611uxc_edid_en(piVar19);
            puVar13[0x138] = 0;
            puVar13[0x137] = 0;
            puVar17 = puVar13 + 0x139;
            puVar13[0x136] = 0;
            puVar13[0x135] = 0;
            puVar13[0x134] = 0;
            puVar13[0x133] = 0;
            puVar13[0x132] = 0;
            puVar13[0x131] = 0;
            puVar13[0x130] = 0;
            puVar13[0x12f] = 0;
            puVar13[0x12e] = 0;
            puVar13[0x12d] = 0;
            puVar13[300] = 0;
            puVar13[299] = 0;
            puVar13[0x12a] = 0;
            puVar13[0x129] = 0;
            puVar13[0x128] = 0;
            puVar13[0x127] = 0;
            puVar13[0x126] = 0;
            puVar13[0x125] = 0;
            puVar13[0x124] = 0;
            puVar13[0x123] = 0;
            puVar13[0x122] = 0;
            puVar13[0x121] = 0;
            puVar13[0x120] = 0;
            puVar13[0x11f] = 0;
            puVar13[0x11e] = 0;
            puVar13[0x11d] = 0;
            puVar13[0x11c] = 0;
            puVar13[0x11b] = 0;
            puVar13[0x11a] = 0;
            puVar13[0x119] = 0;
            uVar5 = *(puVar13[0xec] + 2);
            puVar13[0x139] = 0;
            puVar13[0x13a] = 0;
            puVar13[0x13b] = 0;
            puVar13[0x13c] = 0;
            puVar13[0x13d] = 0;
            puVar13[0x13e] = 0;
            puVar13[0x13f] = 0;
            puVar13[0x140] = 0;
            puVar13[0x141] = 0;
            puVar13[0x142] = 0;
            puVar13[0x143] = 0;
            puVar13[0x144] = 0;
            puVar13[0x145] = 0;
            puVar13[0x146] = 0;
            puVar13[0x147] = 0;
            *(puVar13 + 0x139) = 0xb0ff;
            puVar13[0x148] = 0;
            uStack_f0 = CONCAT62(0x20000,uVar5);
            puStack_e8 = puVar17;
            iVar10 = i2c_transfer(*(puVar13[0xec] + 0x18),&uStack_f0,1);
            if (iVar10 < 1) {
                _printk(0x8001311,"lt9611uxc_write_byte");
            }
            puVar21 = puVar13 + 0x149;
            uVar7 = *(puVar13[0xec] + 2);
            *puVar17 = 0;
            puVar13[0x13a] = 0;
            puVar13[0x13b] = 0;
            puVar13[0x13c] = 0;
            puVar13[0x13d] = 0;
            puVar13[0x13e] = 0;
            puVar13[0x13f] = 0;
            puVar13[0x140] = 0;
            puVar13[0x141] = 0;
            puVar13[0x142] = 0;
            puVar13[0x143] = 0;
            puVar13[0x144] = 0;
            puVar13[0x145] = 0;
            puVar13[0x146] = 0;
            puVar13[0x147] = 0;
            puVar13[0x148] = 0;
            *(puVar13 + 0x139) = 10;
            uStack_f0._0_4_ = uVar7;
            uStack_f0._0_6_ = CONCAT24(2,uStack_f0);
            uStack_f0 = uStack_f0;
            puStack_e8 = puVar17;
            iVar10 = i2c_transfer(*(puVar13[0xec] + 0x18),&uStack_f0,1);
            if (iVar10 < 1) {
                _printk(0x8001311,"lt9611uxc_write_byte");
            }
            iVar16 = puVar13[0xec];
            uVar5 = *(iVar16 + 2);
            uVar6 = *(iVar16 + 2);
            puVar13[0x157] = 0;
            puVar13[0x158] = 0;
            puVar13[0x155] = 0;
            puVar13[0x156] = 0;
            puVar13[0x153] = 0;
            puVar13[0x154] = 0;
            puVar13[0x151] = 0;
            puVar13[0x152] = 0;
            puVar13[0x14f] = 0;
            puVar13[0x150] = 0;
            puVar13[0x14d] = 0;
            puVar13[0x14e] = 0;
            puVar13[0x14b] = 0;
            puVar13[0x14c] = 0;
            puVar13[0x149] = 0;
            puVar13[0x14a] = 0;
            puVar13[0x147] = 0;
            puVar13[0x148] = 0;
            puVar13[0x145] = 0;
            puVar13[0x146] = 0;
            puVar13[0x143] = 0;
            puVar13[0x144] = 0;
            puVar13[0x141] = 0;
            puVar13[0x142] = 0;
            puVar13[0x13f] = 0;
            puVar13[0x140] = 0;
            puVar13[0x13d] = 0;
            puVar13[0x13e] = 0;
            puVar13[0x13b] = 0;
            puVar13[0x13c] = 0;
            *puVar17 = 0;
            puVar13[0x13a] = 0;
            *(puVar13 + 0x139) = 0xb0;
            uStack_f0 = CONCAT62(0x10000,uVar5);
            uStack_e0._0_6_ = CONCAT42(0x800001,uVar6);
            uStack_e0 = uStack_e0;
            puStack_e8 = puVar17;
            puStack_d8 = puVar21;
            iVar10 = i2c_transfer(*(iVar16 + 0x18),&uStack_f0,2);
            if (iVar10 == 2) {
                puVar13[0x125] = puVar13[0x155];
                puVar13[0x126] = puVar13[0x156];
                puVar13[0x127] = puVar13[0x157];
                puVar13[0x128] = puVar13[0x158];
                puVar13[0x121] = puVar13[0x151];
                puVar13[0x122] = puVar13[0x152];
                puVar13[0x123] = puVar13[0x153];
                puVar13[0x124] = puVar13[0x154];
                puVar13[0x11d] = puVar13[0x14d];
                puVar13[0x11e] = puVar13[0x14e];
                puVar13[0x11f] = puVar13[0x14f];
                puVar13[0x120] = puVar13[0x150];
                puVar13[0x119] = *puVar21;
                puVar13[0x11a] = puVar13[0x14a];
                puVar13[0x11b] = puVar13[0x14b];
                puVar13[0x11c] = puVar13[0x14c];
                cVar4 = *(puVar13 + 0x946);
            }
            else {
                _printk(0x80006dd,"lt9611uxc_read");
                cVar4 = *(puVar13 + 0x946);
            }
            if (cVar4 != '\0') {
                uVar7 = *(puVar13[0xec] + 2);
                *puVar17 = 0;
                puVar13[0x13a] = 0;
                puVar13[0x13b] = 0;
                puVar13[0x13c] = 0;
                puVar13[0x13d] = 0;
                puVar13[0x13e] = 0;
                puVar13[0x13f] = 0;
                puVar13[0x140] = 0;
                puVar13[0x141] = 0;
                puVar13[0x142] = 0;
                puVar13[0x143] = 0;
                puVar13[0x144] = 0;
                puVar13[0x145] = 0;
                puVar13[0x146] = 0;
                puVar13[0x147] = 0;
                puVar13[0x148] = 0;
                *(puVar13 + 0x139) = 0x800a;
                uStack_f0._0_4_ = uVar7;
                uStack_f0._0_6_ = CONCAT24(2,uStack_f0);
                uStack_f0 = uStack_f0;
                puStack_e8 = puVar17;
                iVar10 = i2c_transfer(*(puVar13[0xec] + 0x18),&uStack_f0,1);
                if (iVar10 < 1) {
                    _printk(0x8001311,"lt9611uxc_write_byte");
                }
                iVar16 = puVar13[0xec];
                uVar5 = *(iVar16 + 2);
                uVar6 = *(iVar16 + 2);
                puVar13[0x157] = 0;
                puVar13[0x158] = 0;
                puVar13[0x155] = 0;
                puVar13[0x156] = 0;
                puVar13[0x153] = 0;
                puVar13[0x154] = 0;
                puVar13[0x151] = 0;
                puVar13[0x152] = 0;
                puVar13[0x14f] = 0;
                puVar13[0x150] = 0;
                puVar13[0x14d] = 0;
                puVar13[0x14e] = 0;
                puVar13[0x14b] = 0;
                puVar13[0x14c] = 0;
                puVar13[0x149] = 0;
                puVar13[0x14a] = 0;
                puVar13[0x147] = 0;
                puVar13[0x148] = 0;
                puVar13[0x145] = 0;
                puVar13[0x146] = 0;
                puVar13[0x143] = 0;
                puVar13[0x144] = 0;
                puVar13[0x141] = 0;
                puVar13[0x142] = 0;
                puVar13[0x13f] = 0;
                puVar13[0x140] = 0;
                puVar13[0x13d] = 0;
                puVar13[0x13e] = 0;
                puVar13[0x13b] = 0;
                puVar13[0x13c] = 0;
                *puVar17 = 0;
                puVar13[0x13a] = 0;
                *(puVar13 + 0x139) = 0xb0;
                uStack_f0 = CONCAT62(0x10000,uVar5);
                uStack_e0._0_6_ = CONCAT42(0x800001,uVar6);
                uStack_e0 = uStack_e0;
                puStack_e8 = puVar17;
                puStack_d8 = puVar21;
                iVar10 = i2c_transfer(*(iVar16 + 0x18),&uStack_f0,2);
                if (iVar10 == 2) {
                    puVar13[0x135] = puVar13[0x155];
                    puVar13[0x136] = puVar13[0x156];
                    puVar13[0x137] = puVar13[0x157];
                    puVar13[0x138] = puVar13[0x158];
                    puVar13[0x131] = puVar13[0x151];
                    puVar13[0x132] = puVar13[0x152];
                    puVar13[0x133] = puVar13[0x153];
                    puVar13[0x134] = puVar13[0x154];
                    puVar13[0x12d] = puVar13[0x14d];
                    puVar13[0x12e] = puVar13[0x14e];
                    puVar13[0x12f] = puVar13[0x14f];
                    puVar13[0x130] = puVar13[0x150];
                    puVar13[0x129] = *puVar21;
                    puVar13[0x12a] = puVar13[0x14a];
                    puVar13[299] = puVar13[0x14b];
                    puVar13[300] = puVar13[0x14c];
                }
                else {
                    _printk(0x80006dd,"lt9611uxc_read");
                }
            }
            sym.lt9611uxc_ctl_disable(piVar19);
            mutex_unlock(puVar20);
            uVar14 = drm_do_get_edid(puVar13,sym.lt9611uxc_get_edid_block.e58709b06554ea617982e3f2e7a32f4b.cfi_jt,
                                     piVar19);
            puVar13[-7] = uVar14;
        }
    }
code_r0x08006950:
    if (puVar13[-7] == 0) {
        for (piVar18 = puVar13[0xef]; puVar13 + 0xef != piVar18; piVar18 = *piVar18) {
            iVar16 = drm_mode_duplicate(*puVar13,piVar18 + -8);
            if (iVar16 == 0) {
                _printk(0x800138a,"lt9611uxc_connector_get_modes",*(piVar18 + -0x3c),*(piVar18 + -0x32));
                break;
            }
            drm_mode_probed_add(puVar13,iVar16);
        }
        uVar11 = *(puVar13 + 0xee);
    }
    else {
        drm_connector_update_edid_property(puVar13);
        uVar11 = drm_add_edid_modes(puVar13,puVar13[-7]);
    }
    uStack_f0 = 0;
    if (puVar13[-7] == 0) {
        iVar10 = of_property_read_string(*(*piVar19 + 0x2f0),"lt,preferred-mode",&uStack_f0);
        puVar13 = puVar13 + 0x16;
        puVar20 = *puVar13;
        if (iVar10 == 0) {
            if (puVar13 != puVar20) {
                do {
                    iVar10 = strcmp(puVar20 + 2,uStack_f0);
                    if (iVar10 == 0) {
                        *(puVar20 + -2) = *(puVar20 + -2) | 8;
                    }
                    puVar20 = *puVar20;
                } while (puVar13 != puVar20);
            }
            goto code_r0x08006b1c;
        }
        if (puVar13 == puVar20) {
            puVar17 = NULL;
        }
        else {
            do {
                puVar17 = puVar20;
                puVar20 = *puVar17;
            } while (puVar13 != puVar20);
            puVar17 = puVar17 + -8;
        }
    }
    else {
        puVar13 = puVar13 + 0x16;
        if (puVar13 == *puVar13) goto code_r0x08006b1c;
        puVar20 = *puVar13;
        puVar21 = puVar20 + -8;
        puVar9 = puVar20 + -8;
        while (puVar17 = puVar9, puVar8 = puVar21, puVar13 != puVar20) {
            puVar20 = *puVar20;
            puVar21 = puVar20 + -8;
            *(puVar8 + 0x3e) = *(puVar8 + 0x3e) & 0xf7;
            puVar9 = puVar8;
            if (puVar8 != puVar17) {
                puVar3 = puVar8;
                if (*(puVar8 + 0xe) * *(puVar8 + 4) <= *(puVar17 + 0xe) * *(puVar17 + 4)) {
                    puVar3 = puVar17;
                }
                iVar10 = drm_mode_vrefresh(puVar8);
                iVar12 = drm_mode_vrefresh(puVar3);
                puVar9 = puVar3;
                if (*(puVar8 + 0xe) * *(puVar8 + 4) == *(puVar3 + 0xe) * *(puVar3 + 4)) {
                    iVar1 = 0x3c - iVar10;
                    if (-1 < iVar10 + -0x3c) {
                        iVar1 = iVar10 + -0x3c;
                    }
                    iVar2 = 0x3c - iVar12;
                    if (-1 < iVar12 + -0x3c) {
                        iVar2 = iVar12 + -0x3c;
                    }
                    puVar9 = puVar8;
                    if (0x3c < iVar10 || iVar2 <= iVar1) {
                        puVar9 = puVar3;
                    }
                }
            }
        }
    }
    *(puVar17 + 0x3e) = *(puVar17 + 0x3e) | 8;
code_r0x08006b1c:
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_c8) {
        return uVar11;
    }
    auVar22 = __stack_chk_fail();
    piVar15 = auVar22._8_8_;
    iVar16 = auVar22._0_8_;
    *extraout_x18_00 = 0x8006ca8;
    if (*(iVar16 + 0xaca) == '\0') {
        piVar19 = *(iVar16 + 0x778);
        do {
            do {
                piVar18 = piVar19;
                if (iVar16 + 0x778 == piVar18) {
                    return 0xfffffffe;
                }
                piVar19 = *piVar18;
            } while ((*(piVar15 + 0xe) != *(piVar18 + -0x32)) || (piVar15[1] != *(piVar18 + -0x3c)));
            iVar10 = drm_mode_vrefresh(piVar15);
            iVar12 = drm_mode_vrefresh(piVar18 + -8);
        } while ((iVar10 != iVar12) || (*piVar15 != *(piVar18 + -8)));
    }
    else if ((*(piVar15 + 0xe) != *(iVar16 + 0x80e)) || (piVar15[1] != *(iVar16 + 0x804))) {
        return 0xfffffffe;
    }
    return 0;
}


// ===== sym.lt9611uxc_connector_get_modes @ 0x080064fc (size 1968) =====

uint sym.lt9611uxc_connector_get_modes(int64_t arg1)

{
    ulong *puVar1;
    ulong *puVar2;
    int iVar3;
    int iVar4;
    int64_t *piVar5;
    char cVar6;
    ushort uVar7;
    uint16_t uVar8;
    ushort uVar9;
    int64_t *piVar10;
    int64_t *piVar11;
    int iVar12;
    uint uVar13;
    int iVar14;
    ulong uVar15;
    int *piVar16;
    int64_t iVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar18;
    int64_t *piVar19;
    int64_t iVar20;
    int64_t iVar21;
    int64_t *piVar22;
    int64_t *piVar23;
    ulong unaff_x30;
    uchar auVar24 [16];
    ulong uStack_80;
    ulong *puStack_78;
    ulong uStack_70;
    ulong *puStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar17 = sp_el0;
    iVar20 = arg1 + -0x30;
    iStack_58 = *(iVar17 + 0x5e0);
    piVar19 = arg1 + -0x160;
    mutex_lock(iVar20);
    if ((*(arg1 + 0xace) == '\0') && (*(arg1 + 0xac8) == '\0')) {
        if ((*(arg1 + 0xacb) == '\0') && (*(arg1 + 0xacf) != '\0')) {
            *(arg1 + 0xacf) = 0;
            mutex_unlock(iVar20);
            if (*(arg1 + 0xac8) == '\0') {
                puStack_68 = NULL;
                uStack_60 = 0;
                puStack_78 = NULL;
                uStack_70 = 0;
                uStack_80 = 0;
                init_wait_entry(&stack0xffffffffffffff80,0);
                iVar17 = arg1 + 0x8b0;
                prepare_to_wait_event(iVar17,&stack0xffffffffffffff80,2);
                if (*(arg1 + 0xac8) == '\0') {
                    iVar21 = 500;
                    do {
                        iVar21 = schedule_timeout(iVar21);
                        prepare_to_wait_event(iVar17,&stack0xffffffffffffff80,2);
                        if (iVar21 == 0 && *(arg1 + 0xac8) != '\0') {
                            iVar21 = 1;
                        }
                    } while ((*(arg1 + 0xac8) == '\0') && (iVar21 != 0));
                    finish_wait(iVar17,&stack0xffffffffffffff80);
                    if (iVar21 == 0) goto code_r0x08006950;
                }
                else {
                    finish_wait(iVar17,&stack0xffffffffffffff80);
                }
            }
            goto code_r0x08006560;
        }
        mutex_unlock(iVar20);
    }
    else {
        *(arg1 + 0xace) = 0;
        *(arg1 + 0xac8) = 0;
        mutex_unlock(iVar20);
code_r0x08006560:
        if (*(arg1 + -0x38) == 0) {
            mutex_lock(iVar20);
            sym.lt9611uxc_ctl_en(piVar19);
            sym.lt9611uxc_edid_en(piVar19);
            *(arg1 + 0x9c0) = 0;
            *(arg1 + 0x9b8) = 0;
            puVar1 = arg1 + 0x9c8;
            *(arg1 + 0x9b0) = 0;
            *(arg1 + 0x9a8) = 0;
            *(arg1 + 0x9a0) = 0;
            *(arg1 + 0x998) = 0;
            *(arg1 + 0x990) = 0;
            *(arg1 + 0x988) = 0;
            *(arg1 + 0x980) = 0;
            *(arg1 + 0x978) = 0;
            *(arg1 + 0x970) = 0;
            *(arg1 + 0x968) = 0;
            *(arg1 + 0x960) = 0;
            *(arg1 + 0x958) = 0;
            *(arg1 + 0x950) = 0;
            *(arg1 + 0x948) = 0;
            *(arg1 + 0x940) = 0;
            *(arg1 + 0x938) = 0;
            *(arg1 + 0x930) = 0;
            *(arg1 + 0x928) = 0;
            *(arg1 + 0x920) = 0;
            *(arg1 + 0x918) = 0;
            *(arg1 + 0x910) = 0;
            *(arg1 + 0x908) = 0;
            *(arg1 + 0x900) = 0;
            *(arg1 + 0x8f8) = 0;
            *(arg1 + 0x8f0) = 0;
            *(arg1 + 0x8e8) = 0;
            *(arg1 + 0x8e0) = 0;
            *(arg1 + 0x8d8) = 0;
            *(arg1 + 0x8d0) = 0;
            *(arg1 + 0x8c8) = 0;
            uVar7 = *(*(arg1 + 0x760) + 2);
            *(arg1 + 0x9c8) = 0;
            *(arg1 + 0x9d0) = 0;
            *(arg1 + 0x9d8) = 0;
            *(arg1 + 0x9e0) = 0;
            *(arg1 + 0x9e8) = 0;
            *(arg1 + 0x9f0) = 0;
            *(arg1 + 0x9f8) = 0;
            *(arg1 + 0xa00) = 0;
            *(arg1 + 0xa08) = 0;
            *(arg1 + 0xa10) = 0;
            *(arg1 + 0xa18) = 0;
            *(arg1 + 0xa20) = 0;
            *(arg1 + 0xa28) = 0;
            *(arg1 + 0xa30) = 0;
            *(arg1 + 0xa38) = 0;
            *(arg1 + 0x9c8) = 0xb0ff;
            *(arg1 + 0xa40) = 0;
            uStack_80 = CONCAT62(0x20000,uVar7);
            puStack_78 = puVar1;
            iVar12 = i2c_transfer(*(*(arg1 + 0x760) + 0x18),&stack0xffffffffffffff80,1);
            if (iVar12 < 1) {
                _printk(0x8001311,"lt9611uxc_write_byte");
            }
            puVar2 = arg1 + 0xa48;
            uVar8 = *(*(arg1 + 0x760) + 2);
            *puVar1 = 0;
            *(arg1 + 0x9d0) = 0;
            *(arg1 + 0x9d8) = 0;
            *(arg1 + 0x9e0) = 0;
            *(arg1 + 0x9e8) = 0;
            *(arg1 + 0x9f0) = 0;
            *(arg1 + 0x9f8) = 0;
            *(arg1 + 0xa00) = 0;
            *(arg1 + 0xa08) = 0;
            *(arg1 + 0xa10) = 0;
            *(arg1 + 0xa18) = 0;
            *(arg1 + 0xa20) = 0;
            *(arg1 + 0xa28) = 0;
            *(arg1 + 0xa30) = 0;
            *(arg1 + 0xa38) = 0;
            *(arg1 + 0xa40) = 0;
            *(arg1 + 0x9c8) = 10;
            uStack_80._0_4_ = uVar8;
            uStack_80._0_6_ = CONCAT24(2,uStack_80);
            uStack_80 = uStack_80;
            puStack_78 = puVar1;
            iVar12 = i2c_transfer(*(*(arg1 + 0x760) + 0x18),&stack0xffffffffffffff80,1);
            if (iVar12 < 1) {
                _printk(0x8001311,"lt9611uxc_write_byte");
            }
            iVar17 = *(arg1 + 0x760);
            uVar7 = *(iVar17 + 2);
            uVar9 = *(iVar17 + 2);
            *(arg1 + 0xab8) = 0;
            *(arg1 + 0xac0) = 0;
            *(arg1 + 0xaa8) = 0;
            *(arg1 + 0xab0) = 0;
            *(arg1 + 0xa98) = 0;
            *(arg1 + 0xaa0) = 0;
            *(arg1 + 0xa88) = 0;
            *(arg1 + 0xa90) = 0;
            *(arg1 + 0xa78) = 0;
            *(arg1 + 0xa80) = 0;
            *(arg1 + 0xa68) = 0;
            *(arg1 + 0xa70) = 0;
            *(arg1 + 0xa58) = 0;
            *(arg1 + 0xa60) = 0;
            *(arg1 + 0xa48) = 0;
            *(arg1 + 0xa50) = 0;
            *(arg1 + 0xa38) = 0;
            *(arg1 + 0xa40) = 0;
            *(arg1 + 0xa28) = 0;
            *(arg1 + 0xa30) = 0;
            *(arg1 + 0xa18) = 0;
            *(arg1 + 0xa20) = 0;
            *(arg1 + 0xa08) = 0;
            *(arg1 + 0xa10) = 0;
            *(arg1 + 0x9f8) = 0;
            *(arg1 + 0xa00) = 0;
            *(arg1 + 0x9e8) = 0;
            *(arg1 + 0x9f0) = 0;
            *(arg1 + 0x9d8) = 0;
            *(arg1 + 0x9e0) = 0;
            *puVar1 = 0;
            *(arg1 + 0x9d0) = 0;
            *(arg1 + 0x9c8) = 0xb0;
            uStack_80 = CONCAT62(0x10000,uVar7);
            uStack_70._0_6_ = CONCAT42(0x800001,uVar9);
            uStack_70 = uStack_70;
            puStack_78 = puVar1;
            puStack_68 = puVar2;
            iVar12 = i2c_transfer(*(iVar17 + 0x18),&stack0xffffffffffffff80,2);
            if (iVar12 == 2) {
                *(arg1 + 0x928) = *(arg1 + 0xaa8);
                *(arg1 + 0x930) = *(arg1 + 0xab0);
                *(arg1 + 0x938) = *(arg1 + 0xab8);
                *(arg1 + 0x940) = *(arg1 + 0xac0);
                *(arg1 + 0x908) = *(arg1 + 0xa88);
                *(arg1 + 0x910) = *(arg1 + 0xa90);
                *(arg1 + 0x918) = *(arg1 + 0xa98);
                *(arg1 + 0x920) = *(arg1 + 0xaa0);
                *(arg1 + 0x8e8) = *(arg1 + 0xa68);
                *(arg1 + 0x8f0) = *(arg1 + 0xa70);
                *(arg1 + 0x8f8) = *(arg1 + 0xa78);
                *(arg1 + 0x900) = *(arg1 + 0xa80);
                *(arg1 + 0x8c8) = *puVar2;
                *(arg1 + 0x8d0) = *(arg1 + 0xa50);
                *(arg1 + 0x8d8) = *(arg1 + 0xa58);
                *(arg1 + 0x8e0) = *(arg1 + 0xa60);
                cVar6 = *(arg1 + 0x946);
            }
            else {
                _printk(0x80006dd,"lt9611uxc_read");
                cVar6 = *(arg1 + 0x946);
            }
            if (cVar6 != '\0') {
                uVar8 = *(*(arg1 + 0x760) + 2);
                *puVar1 = 0;
                *(arg1 + 0x9d0) = 0;
                *(arg1 + 0x9d8) = 0;
                *(arg1 + 0x9e0) = 0;
                *(arg1 + 0x9e8) = 0;
                *(arg1 + 0x9f0) = 0;
                *(arg1 + 0x9f8) = 0;
                *(arg1 + 0xa00) = 0;
                *(arg1 + 0xa08) = 0;
                *(arg1 + 0xa10) = 0;
                *(arg1 + 0xa18) = 0;
                *(arg1 + 0xa20) = 0;
                *(arg1 + 0xa28) = 0;
                *(arg1 + 0xa30) = 0;
                *(arg1 + 0xa38) = 0;
                *(arg1 + 0xa40) = 0;
                *(arg1 + 0x9c8) = 0x800a;
                uStack_80._0_4_ = uVar8;
                uStack_80._0_6_ = CONCAT24(2,uStack_80);
                uStack_80 = uStack_80;
                puStack_78 = puVar1;
                iVar12 = i2c_transfer(*(*(arg1 + 0x760) + 0x18),&stack0xffffffffffffff80,1);
                if (iVar12 < 1) {
                    _printk(0x8001311,"lt9611uxc_write_byte");
                }
                iVar17 = *(arg1 + 0x760);
                uVar7 = *(iVar17 + 2);
                uVar9 = *(iVar17 + 2);
                *(arg1 + 0xab8) = 0;
                *(arg1 + 0xac0) = 0;
                *(arg1 + 0xaa8) = 0;
                *(arg1 + 0xab0) = 0;
                *(arg1 + 0xa98) = 0;
                *(arg1 + 0xaa0) = 0;
                *(arg1 + 0xa88) = 0;
                *(arg1 + 0xa90) = 0;
                *(arg1 + 0xa78) = 0;
                *(arg1 + 0xa80) = 0;
                *(arg1 + 0xa68) = 0;
                *(arg1 + 0xa70) = 0;
                *(arg1 + 0xa58) = 0;
                *(arg1 + 0xa60) = 0;
                *(arg1 + 0xa48) = 0;
                *(arg1 + 0xa50) = 0;
                *(arg1 + 0xa38) = 0;
                *(arg1 + 0xa40) = 0;
                *(arg1 + 0xa28) = 0;
                *(arg1 + 0xa30) = 0;
                *(arg1 + 0xa18) = 0;
                *(arg1 + 0xa20) = 0;
                *(arg1 + 0xa08) = 0;
                *(arg1 + 0xa10) = 0;
                *(arg1 + 0x9f8) = 0;
                *(arg1 + 0xa00) = 0;
                *(arg1 + 0x9e8) = 0;
                *(arg1 + 0x9f0) = 0;
                *(arg1 + 0x9d8) = 0;
                *(arg1 + 0x9e0) = 0;
                *puVar1 = 0;
                *(arg1 + 0x9d0) = 0;
                *(arg1 + 0x9c8) = 0xb0;
                uStack_80 = CONCAT62(0x10000,uVar7);
                uStack_70._0_6_ = CONCAT42(0x800001,uVar9);
                uStack_70 = uStack_70;
                puStack_78 = puVar1;
                puStack_68 = puVar2;
                iVar12 = i2c_transfer(*(iVar17 + 0x18),&stack0xffffffffffffff80,2);
                if (iVar12 == 2) {
                    *(arg1 + 0x9a8) = *(arg1 + 0xaa8);
                    *(arg1 + 0x9b0) = *(arg1 + 0xab0);
                    *(arg1 + 0x9b8) = *(arg1 + 0xab8);
                    *(arg1 + 0x9c0) = *(arg1 + 0xac0);
                    *(arg1 + 0x988) = *(arg1 + 0xa88);
                    *(arg1 + 0x990) = *(arg1 + 0xa90);
                    *(arg1 + 0x998) = *(arg1 + 0xa98);
                    *(arg1 + 0x9a0) = *(arg1 + 0xaa0);
                    *(arg1 + 0x968) = *(arg1 + 0xa68);
                    *(arg1 + 0x970) = *(arg1 + 0xa70);
                    *(arg1 + 0x978) = *(arg1 + 0xa78);
                    *(arg1 + 0x980) = *(arg1 + 0xa80);
                    *(arg1 + 0x948) = *puVar2;
                    *(arg1 + 0x950) = *(arg1 + 0xa50);
                    *(arg1 + 0x958) = *(arg1 + 0xa58);
                    *(arg1 + 0x960) = *(arg1 + 0xa60);
                }
                else {
                    _printk(0x80006dd,"lt9611uxc_read");
                }
            }
            sym.lt9611uxc_ctl_disable(piVar19);
            mutex_unlock(iVar20);
            uVar15 = drm_do_get_edid(arg1,sym.lt9611uxc_get_edid_block.e58709b06554ea617982e3f2e7a32f4b.cfi_jt,piVar19
                                    );
            *(arg1 + -0x38) = uVar15;
        }
    }
code_r0x08006950:
    if (*(arg1 + -0x38) == 0) {
        for (piVar22 = *(arg1 + 0x778); arg1 + 0x778 != piVar22; piVar22 = *piVar22) {
            iVar17 = drm_mode_duplicate(*arg1,piVar22 + -8);
            if (iVar17 == 0) {
                _printk(0x800138a,"lt9611uxc_connector_get_modes",*(piVar22 + -0x3c),*(piVar22 + -0x32));
                break;
            }
            drm_mode_probed_add(arg1,iVar17);
        }
        uVar13 = *(arg1 + 0x770);
    }
    else {
        drm_connector_update_edid_property(arg1);
        uVar13 = drm_add_edid_modes(arg1,*(arg1 + -0x38));
    }
    uStack_80 = 0;
    if (*(arg1 + -0x38) == 0) {
        iVar12 = of_property_read_string(*(*piVar19 + 0x2f0),"lt,preferred-mode",&stack0xffffffffffffff80);
        piVar22 = arg1 + 0xb0;
        piVar19 = *piVar22;
        if (iVar12 == 0) {
            if (piVar22 != piVar19) {
                do {
                    iVar12 = strcmp(piVar19 + 2,uStack_80);
                    if (iVar12 == 0) {
                        *(piVar19 + -2) = *(piVar19 + -2) | 8;
                    }
                    piVar19 = *piVar19;
                } while (piVar22 != piVar19);
            }
            goto code_r0x08006b1c;
        }
        if (piVar22 == piVar19) {
            piVar18 = NULL;
        }
        else {
            do {
                piVar18 = piVar19;
                piVar19 = *piVar18;
            } while (piVar22 != piVar19);
            piVar18 = piVar18 + -8;
        }
    }
    else {
        piVar19 = arg1 + 0xb0;
        if (piVar19 == *piVar19) goto code_r0x08006b1c;
        piVar22 = *piVar19;
        piVar23 = piVar22 + -8;
        piVar11 = piVar22 + -8;
        while (piVar18 = piVar11, piVar10 = piVar23, piVar19 != piVar22) {
            piVar22 = *piVar22;
            piVar23 = piVar22 + -8;
            *(piVar10 + 0x3e) = *(piVar10 + 0x3e) & 0xf7;
            piVar11 = piVar10;
            if (piVar10 != piVar18) {
                piVar5 = piVar10;
                if (*(piVar10 + 0xe) * *(piVar10 + 4) <= *(piVar18 + 0xe) * *(piVar18 + 4)) {
                    piVar5 = piVar18;
                }
                iVar12 = drm_mode_vrefresh(piVar10);
                iVar14 = drm_mode_vrefresh(piVar5);
                piVar11 = piVar5;
                if (*(piVar10 + 0xe) * *(piVar10 + 4) == *(piVar5 + 0xe) * *(piVar5 + 4)) {
                    iVar3 = 0x3c - iVar12;
                    if (-1 < iVar12 + -0x3c) {
                        iVar3 = iVar12 + -0x3c;
                    }
                    iVar4 = 0x3c - iVar14;
                    if (-1 < iVar14 + -0x3c) {
                        iVar4 = iVar14 + -0x3c;
                    }
                    piVar11 = piVar10;
                    if (0x3c < iVar12 || iVar4 <= iVar3) {
                        piVar11 = piVar5;
                    }
                }
            }
        }
    }
    *(piVar18 + 0x3e) = *(piVar18 + 0x3e) | 8;
code_r0x08006b1c:
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_58) {
        return uVar13;
    }
    auVar24 = __stack_chk_fail();
    piVar16 = auVar24._8_8_;
    iVar17 = auVar24._0_8_;
    *extraout_x18 = 0x8006ca8;
    if (*(iVar17 + 0xaca) == '\0') {
        piVar19 = *(iVar17 + 0x778);
        do {
            do {
                piVar22 = piVar19;
                if (iVar17 + 0x778 == piVar22) {
                    return 0xfffffffe;
                }
                piVar19 = *piVar22;
            } while ((*(piVar16 + 0xe) != *(piVar22 + -0x32)) || (piVar16[1] != *(piVar22 + -0x3c)));
            iVar12 = drm_mode_vrefresh(piVar16);
            iVar14 = drm_mode_vrefresh(piVar22 + -8);
        } while ((iVar12 != iVar14) || (*piVar16 != *(piVar22 + -8)));
    }
    else if ((*(piVar16 + 0xe) != *(iVar17 + 0x80e)) || (piVar16[1] != *(iVar17 + 0x804))) {
        return 0xfffffffe;
    }
    return 0;
}


// ===== sym.lt9611uxc_connector_mode_valid @ 0x08006cac (size 228) =====

ulong sym.lt9611uxc_connector_mode_valid(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int iVar2;
    int iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0xaca) == '\0') {
        piVar4 = *(arg1 + 0x778);
        do {
            do {
                piVar1 = piVar4;
                if (arg1 + 0x778 == piVar1) {
                    return 0xfffffffe;
                }
                piVar4 = *piVar1;
            } while ((*(arg2 + 0xe) != *(piVar1 + -0x32)) || (*(arg2 + 4) != *(piVar1 + -0x3c)));
            iVar2 = drm_mode_vrefresh(arg2);
            iVar3 = drm_mode_vrefresh(piVar1 + -8);
        } while ((iVar2 != iVar3) || (*arg2 != *(piVar1 + -8)));
    }
    else if ((*(arg2 + 0xe) != *(arg1 + 0x80e)) || (*(arg2 + 4) != *(arg1 + 0x804))) {
        return 0xfffffffe;
    }
    return 0;
}


// ===== sym.lt9611uxc_get_edid_block @ 0x08006d90 (size 80) =====

ulong sym.lt9611uxc_get_edid_block(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar1 = arg3 << 7;
    if (uVar1 < 0x101) {
        *in_x18 = unaff_x30;
        memcpy(arg2,arg1 + uVar1 + 0xa28,arg4);
        return 0;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8006de0);
    (*pcVar2)();
}


// ===== sym.__cfi_check_fail @ 0x08006de0 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08006e24

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
    //switch table (4 cases) at 0x8000290
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8006e38);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08006e44 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    i2c_register_driver(obj.__this_module,obj.lt9611uxc_driver);
    return;
}


// ===== sym.cleanup_module @ 0x08006e78 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    i2c_del_driver(obj.lt9611uxc_driver);
    return;
}

