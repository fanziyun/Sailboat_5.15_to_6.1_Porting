// decompiled from qcom_tsens by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08008000 (size 852) =====

//WARNING: Switch with 1 destination removed at 0x0800a658

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x7ff5a213d37b1a6) {
        if (arg1 < -0x327ecbe27a676eaf) {
            if (arg1 < -0x3987c0e26ee29729) {
                if (arg1 == -0x79e1ae77be533008) {
                    pcVar2 = sym.tsens_set_trips.6be98f0982e4f5249d656332c33b156d.cfi_jt;
                    goto code_r0x08008320;
                }
                if (arg1 != -0x57be845bca9148ef) goto code_r0x0800a618;
                pcVar2 = sym.tsens_resume.6be98f0982e4f5249d656332c33b156d.cfi_jt;
            }
            else if (arg1 == -0x3987c0e26ee29729) {
                pcVar2 = sym.tsens_critical_irq_thread.6be98f0982e4f5249d656332c33b156d.cfi_jt;
            }
            else {
                if (arg1 != -0x3557318fb8d07b71) goto code_r0x0800a618;
                pcVar2 = sym.tsens_probe.6be98f0982e4f5249d656332c33b156d.cfi_jt;
            }
code_r0x08008304:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x0800a618;
        }
        if (arg1 < -0x8dc801903aca538) {
            if (arg1 == -0x327ecbe27a676eaf) {
                pcVar2 = sym.__typeid__ZTSFiPK12tsens_sensorPiE_global_addr;
                goto code_r0x08008304;
            }
            if (arg1 != -0xc1bd59c70f4d7ab) goto code_r0x0800a618;
            pcVar2 = sym.tsens_tz_change_mode.6be98f0982e4f5249d656332c33b156d.cfi_jt;
        }
        else {
            if (arg1 == -0x8dc801903aca538) {
                if ((pcVar1 + -0x80083b8 >> 3 | pcVar1 << 0x3d) < 3) {
                    return;
                }
                goto code_r0x0800a618;
            }
            if (arg1 != 0x2b3a43e29242445) goto code_r0x0800a618;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x5233d5bc7887ae44) {
        if (arg1 < 0x321969b888d4949e) {
            if (arg1 == 0x7ff5a213d37b1a6) {
                pcVar2 = sym.seq_read.cfi_jt;
            }
            else {
                if (arg1 != 0x13365def634cc965) goto code_r0x0800a618;
                pcVar2 = sym.tsens_get_temp.6be98f0982e4f5249d656332c33b156d.cfi_jt;
            }
        }
        else if (arg1 == 0x321969b888d4949e) {
            pcVar2 = sym.seq_lseek.cfi_jt;
        }
        else {
            if (arg1 != 0x3846a8bf9ce54a76) goto code_r0x0800a618;
            pcVar2 = sym.__typeid__ZTSFvP10tsens_privE_global_addr;
        }
    }
    else if (arg1 < 0x6505e4e93dbea6af) {
        if (arg1 == 0x5233d5bc7887ae44) {
            pcVar2 = sym.dbg_version_show.6be98f0982e4f5249d656332c33b156d.cfi_jt;
            goto code_r0x08008304;
        }
        if (arg1 != 0x63db24e19c6eed61) goto code_r0x0800a618;
        pcVar2 = sym.__typeid__ZTSFiP10tsens_priviE_global_addr;
    }
    else if (arg1 == 0x6505e4e93dbea6af) {
        pcVar2 = sym.tsens_get_trend.6be98f0982e4f5249d656332c33b156d.cfi_jt;
    }
    else {
        if (arg1 == 0x6ae5c9c5338877c9) {
            if ((pcVar1 + -0x8008408 >> 3 | pcVar1 << 0x3d) < 10) {
                return;
            }
            goto code_r0x0800a618;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800a618;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
code_r0x08008320:
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x0800a618:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800a66c);
    (*pcVar1)();
}


// ===== sym.__typeid__ZTSFvP10tsens_privE_global_addr @ 0x08008360 (size 8) =====

void sym.__typeid__ZTSFvP10tsens_privE_global_addr(int64_t param_1)

{
    uint32_t uVar1;
    uint uVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    ulong in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    uchar *puVar8;
    code *pcVar9;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    puVar8 = &stack0xffffffffffffffe0;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    uVar3 = *(param_1 + 8);
    uVar7 = uVar3;
    uStack_2c = 0;
    iVar4 = regmap_read(*(param_1 + 0x10),0x3620,&uStack_2c);
    if (iVar4 == 0) {
        uVar1 = 0xfbfffffe;
        if (*(param_1 + 8) < 2) {
            uVar1 = 0xfefffffe;
        }
        uStack_2c = uStack_2c & ((0xffffffffffffffff >> (-uVar3 & 0x3f)) << 3 ^ 0xffffffffU) & uVar1;
        regmap_write(*(param_1 + 0x10),0x3620);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.suspend_8960;
    pcVar9 = sym.suspend_8960;
    uVar6 = *(iVar5 + 0x10);
    iVar4 = regmap_read(uVar6,0x3624,iVar5 + 0xa28);
    if ((iVar4 == 0) && (iVar4 = regmap_read(uVar6,0x3620,iVar5 + 0xa2c), iVar4 == 0)) {
        uVar2 = 0x4000001;
        if (*(iVar5 + 8) < 2) {
            uVar2 = 0x1000001;
        }
        regmap_update_bits_base(uVar6,0x3620,uVar2,0,0,0,0,in_x7,puVar8,pcVar9,uVar7,param_1);
    }
    return;
}


// ===== sym.__typeid__ZTSFiPK12tsens_sensorPiE_global_addr @ 0x08008368 (size 8) =====

void sym.__typeid__ZTSFiPK12tsens_sensorPiE_global_addr(int64_t *param_1,int *param_2)

{
    uint32_t uVar1;
    ulong *puVar2;
    int iVar3;
    int iVar4;
    code *pcVar5;
    int iVar6;
    int64_t iVar7;
    int64_t iVar8;
    int iVar9;
    ulong *in_x18;
    int64_t iVar10;
    ulong unaff_x30;
    int iStack_60;
    int iStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_58 = *(iVar10 + 0x5e0);
    iStack_60 = 0;
    iVar10 = *param_1;
    iVar4 = *(param_1 + 0x14);
    if (param_1[4] == -0x80000000) {
        iVar7 = iVar10;
        if (**(iVar10 + 0xa30) == 0) {
code_r0x08008758:
            iStack_5c = 0;
            if (0x13f < iVar4 + 9U) goto code_r0x08008828;
            iVar9 = *(*(iVar7 + 0xa38) + 0xb8);
            iVar3 = *(*(iVar7 + 0xa38) + 0xbc);
            iVar6 = regmap_field_read(*(iVar7 + (iVar4 + 9U) * 8 + 0x28),&iStack_5c);
            if (iVar6 == 0) {
                if ((*(*(iVar7 + 0xa30) + 4) >> 1 & 1) == 0) {
                    uVar1 = (iVar9 - iVar3) + 0x1f;
                    iVar6 = (iStack_5c << (uVar1 & 0x1f)) >> (uVar1 & 0x1f);
                    iVar9 = 100;
                }
                else {
                    iVar9 = iStack_5c * 1000 - param_1[2];
                    iVar3 = param_1[3];
                    if (iVar9 < 1) {
                        if (iVar9 < 0) {
                            iVar6 = iVar3;
                            if (iVar3 < 0) {
                                iVar6 = iVar3 + 1;
                            }
                            iVar9 = iVar9 - (iVar6 >> 1);
                        }
                        else {
                            iVar9 = 0;
                        }
                    }
                    else {
                        iVar6 = iVar3;
                        if (iVar3 < 0) {
                            iVar6 = iVar3 + 1;
                        }
                        iVar9 = iVar9 + (iVar6 >> 1);
                    }
                    iVar6 = 0;
                    if (iVar3 != 0) {
                        iVar6 = iVar9 / iVar3;
                    }
                    iVar9 = 1000;
                }
                iVar6 = iVar6 * iVar9;
            }
            *param_2 = iVar6;
            if ((*(*param_1 + 0xa70) != 0) && (param_1[1] != 0)) {
                thermal_minidump_update_data(*(*param_1 + 0xa70),param_1[1] + 4,param_2);
            }
            goto code_r0x08008678;
        }
        iVar7 = ktime_get();
        if (0x13f < iVar4 + 0x19U) goto code_r0x08008828;
        puVar2 = iVar10 + (iVar4 + 0x19U) * 8 + 0x28;
        iVar6 = regmap_field_read(*puVar2,&iStack_60);
        if (iVar6 == 0 && iStack_60 == 0) {
            do {
                iVar8 = ktime_get();
                if (iVar7 + 20000000 < iVar8) {
                    iVar6 = regmap_field_read(*puVar2,&iStack_60);
                    break;
                }
                usleep_range_state(1,1,2);
                iVar6 = regmap_field_read(*puVar2,&iStack_60);
            } while (iVar6 == 0 && iStack_60 == 0);
        }
        iVar9 = 0;
        if (iVar6 == 0 && iStack_60 == 0) {
            iVar9 = -0x6e;
        }
        if (iVar6 == 0) {
            iVar6 = iVar9;
        }
        if (iVar6 == 0) {
            iVar7 = *param_1;
            goto code_r0x08008758;
        }
    }
    else {
        *param_2 = param_1[4];
code_r0x08008678:
        if (param_1[1] == 0) {
            if (iVar10 != 0) {
                iVar6 = 0;
                if (*(iVar10 + 0xa58) == 0) goto code_r0x0800871c;
                iVar7 = sp_el0;
                ipc_log_string(*(iVar10 + 0xa58),"%s: Sensor_id: %d temp: %d [%s]\n","get_temp_tsens_valid",iVar4,
                               *param_2,iVar7 + 0x7a8);
            }
        }
        else if (iVar10 != 0) {
            iVar6 = 0;
            if (*(iVar10 + 0xa58) == 0) goto code_r0x0800871c;
            iVar7 = sp_el0;
            ipc_log_string(*(iVar10 + 0xa58),"%s: Sensor_id: %d name:%s temp: %d [%s]\n","get_temp_tsens_valid",iVar4
                           ,param_1[1] + 4,*param_2,iVar7 + 0x7a8);
        }
        iVar6 = 0;
    }
code_r0x0800871c:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_58) {
        return;
    }
    __stack_chk_fail(iVar6);
code_r0x08008828:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x800882c);
    (*pcVar5)();
}


// ===== sym.get_temp_common.cfi_jt @ 0x08008370 (size 8) =====

void sym.get_temp_common.cfi_jt(int64_t *param_1,int *param_2)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    code *pcVar5;
    uint32_t uVar6;
    ulong uVar7;
    int64_t iVar8;
    int iVar9;
    ulong *in_x18;
    int64_t iVar10;
    ulong unaff_x30;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = _seq_lseek;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    uStack_50 = 0;
    iVar10 = *param_1;
    iVar2 = *(param_1 + 0x14);
    uVar6 = jiffies_to_usecs(0x3ffffffffffffffe);
    iVar8 = -0x3ffffffffffffffe;
    if (99 < uVar6) {
        iVar8 = -1;
    }
    do {
        if (**(iVar10 + 0xa30) != 0) {
code_r0x080089d0:
            if (0x13f < iVar2 + 9U) goto code_r0x08008af8;
            uVar7 = regmap_field_read(*(iVar10 + (iVar2 + 9U) * 8 + 0x28),&uStack_50 + 4);
            if (uVar7 != 0) goto code_r0x08008ac0;
            iVar9 = uStack_50._4_4_ * 1000 - param_1[2];
            iVar3 = param_1[3];
            if (iVar9 < 1) {
                if (iVar9 < 0) {
                    iVar1 = iVar3;
                    if (iVar3 < 0) {
                        iVar1 = iVar3 + 1;
                    }
                    iVar9 = iVar9 - (iVar1 >> 1);
                }
                else {
                    iVar9 = 0;
                }
            }
            else {
                iVar1 = iVar3;
                if (iVar3 < 0) {
                    iVar1 = iVar3 + 1;
                }
                iVar9 = iVar9 + (iVar1 >> 1);
            }
            iVar1 = 0;
            if (iVar3 != 0) {
                iVar1 = iVar9 / iVar3;
            }
            iVar1 = iVar1 * 1000;
            *param_2 = iVar1;
            if (param_1[1] == 0) {
                if (iVar10 != 0) {
                    uVar7 = 0;
                    if (*(iVar10 + 0xa58) == 0) goto code_r0x08008ac0;
                    iVar8 = sp_el0;
                    ipc_log_string(*(iVar10 + 0xa58),"%s: Sensor_id: %d temp: %d [%s]\n","get_temp_common",iVar2,
                                   iVar1,iVar8 + 0x7a8);
                }
            }
            else if (iVar10 != 0) {
                uVar7 = 0;
                if (*(iVar10 + 0xa58) != 0) {
                    iVar8 = sp_el0;
                    ipc_log_string(*(iVar10 + 0xa58),"%s: Sensor_id: %d name:%s temp: %d [%s]\n","get_temp_common",
                                   iVar2,param_1[1] + 4,iVar1,iVar8 + 0x7a8);
                    uVar7 = 0;
                }
                goto code_r0x08008ac0;
            }
            uVar7 = 0;
            goto code_r0x08008ac0;
        }
        uVar7 = regmap_field_read(*(iVar10 + 0x60),&uStack_50);
        if (uVar7 != 0) goto code_r0x08008ac0;
        if (uStack_50 != 0) goto code_r0x080089d0;
    } while ((iVar8 - iVar4) + _seq_lseek < 0);
    uVar7 = 0xffffff92;
code_r0x08008ac0:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return;
    }
    __stack_chk_fail(uVar7);
code_r0x08008af8:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8008afc);
    (*pcVar5)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08008378 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.tsens_probe.6be98f0982e4f5249d656332c33b156d.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08008380 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.tsens_probe.6be98f0982e4f5249d656332c33b156d.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.seq_lseek.cfi_jt @ 0x08008388 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_lseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.tsens_set_trips.6be98f0982e4f5249d656332c33b156d.cfi_jt @ 0x08008390 (size 8) =====

ulong sym.tsens_set_trips.6be98f0982e4f5249d656332c33b156d.cfi_jt(int64_t *param_1,int param_2,int param_3)

{
    uint32_t uVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong uVar4;
    int iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar8;
    int64_t *piVar9;
    int iVar10;
    ulong unaff_x30;
    uchar auVar11 [12];
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    iVar8 = *param_1;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uVar1 = 0;
    if (**(iVar8 + 0xa30) != 0) {
        uVar1 = *(param_1 + 0x14);
    }
    if (param_3 < -39999) {
        param_3 = -40000;
    }
    if (119999 < param_3) {
        param_3 = 120000;
    }
    if (param_2 < -39999) {
        param_2 = -40000;
    }
    if (119999 < param_2) {
        param_2 = 120000;
    }
    if ((*(*(iVar8 + 0xa30) + 1) >> 1 & 1) == 0) {
        iVar10 = param_3 / 100;
        iVar5 = param_2 / 100;
    }
    else {
        uVar7 = (param_1[2] + param_1[3] * (param_3 / 1000)) / 1000;
        uVar6 = (param_1[2] + param_1[3] * (param_2 / 1000)) / 1000;
        iVar10 = uVar7;
        if (0x3fe < uVar7) {
            iVar10 = 0x3ff;
        }
        iVar5 = uVar6;
        if (0x3fe < uVar6) {
            iVar5 = 0x3ff;
        }
    }
    uVar4 = _raw_spin_lock_irqsave(iVar8 + 0x24);
    sym.tsens_read_irq_state(iVar8,uVar1,param_1,&uStack_98);
    if (uVar1 + 0x69 < 0x140) {
        regmap_field_update_bits_base(*(iVar8 + (uVar1 + 0x69) * 8 + 0x28),0xffffffff,iVar5,0,0,0);
        if (uVar1 + 0xb9 < 0x140) {
            regmap_field_update_bits_base(*(iVar8 + (uVar1 + 0xb9) * 8 + 0x28),0xffffffff,iVar10,0,0,0);
            sym.tsens_set_interrupt(iVar8,uVar1,0,1);
            sym.tsens_set_interrupt(iVar8,uVar1,1,1);
            _raw_spin_unlock_irqrestore(iVar8 + 0x24,uVar4);
            if ((iVar8 != 0) && (*(iVar8 + 0xa60) != 0)) {
                iVar2 = sp_el0;
                ipc_log_string(*(iVar8 + 0xa60),"%s: [%u] %s: (%d:%d)->(%d:%d)\n [%s]\n","tsens_set_trips",uVar1,
                               "tsens_set_trips",uStack_88._4_4_,uStack_98._4_4_,param_2,param_3,iVar2 + 0x7a8);
            }
            iVar8 = sp_el0;
            if (*(iVar8 + 0x5e0) == iStack_68) {
                return 0;
            }
            auVar11 = __stack_chk_fail();
            *extraout_x18 = sym.tsens_tz_change_mode;
            iVar8 = *(auVar11._0_8_ + 8);
            if (iVar8 != 0) {
                piVar9 = *(iVar8 + 0x458);
                *(iVar8 + 0x424) = 0x8000000100000000;
                *(iVar8 + 0x418) = 0xfffbd1b0;
                *(iVar8 + 0x42c) = 0x7fffffff;
                for (; iVar8 + 0x458 != piVar9; piVar9 = *piVar9) {
                    *(piVar9 + -0x8c) = 0;
                    if (auVar11._8_4_ == 0) {
                        piVar9[-0xf] = 0xffffffffffffffff;
                        *(piVar9[-0x13] + 0x3c0) = 0;
                        thermal_cdev_update(piVar9[-0x13]);
                    }
                }
            }
            return 0;
        }
    }
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8009e74);
    (*pcVar3)();
}


// ===== sym.tsens_get_trend.6be98f0982e4f5249d656332c33b156d.cfi_jt @ 0x08008398 (size 8) =====

ulong sym.tsens_get_trend.6be98f0982e4f5249d656332c33b156d.cfi_jt(int64_t *param_1,ulong param_2,ulong param_3)

{
    ulong uVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(*(*param_1 + 0xa40) + 0x38);
    if (pcVar2 == NULL) {
        uVar1 = 0xfffffdf4;
    }
    else {
        __cfi_slowpath_diag(0xfbd16dd30f537206,pcVar2,0x8000380);
        uVar1 = (*pcVar2)(param_1,param_3);
    }
    return uVar1;
}


// ===== sym.seq_read.cfi_jt @ 0x080083a0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.tsens_tz_change_mode.6be98f0982e4f5249d656332c33b156d.cfi_jt @ 0x080083a8 (size 8) =====

ulong sym.tsens_tz_change_mode.6be98f0982e4f5249d656332c33b156d.cfi_jt(int64_t param_1,int param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 8);
    if (iVar1 != 0) {
        piVar2 = *(iVar1 + 0x458);
        *(iVar1 + 0x424) = 0x8000000100000000;
        *(iVar1 + 0x418) = 0xfffbd1b0;
        *(iVar1 + 0x42c) = 0x7fffffff;
        for (; iVar1 + 0x458 != piVar2; piVar2 = *piVar2) {
            *(piVar2 + -0x8c) = 0;
            if (param_2 == 0) {
                piVar2[-0xf] = 0xffffffffffffffff;
                *(piVar2[-0x13] + 0x3c0) = 0;
                thermal_cdev_update(piVar2[-0x13]);
            }
        }
    }
    return 0;
}


// ===== sym.__typeid__ZTSFiP10tsens_priviE_global_addr @ 0x080083b0 (size 8) =====

void sym.__typeid__ZTSFiP10tsens_priviE_global_addr(int64_t param_1,uint32_t param_2)

{
    uint32_t uVar1;
    uint uVar2;
    uint32_t uVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar8;
    uint64_t uVar9;
    ulong unaff_x30;
    uchar **ppuVar10;
    code *pcVar11;
    uint32_t uStack_5c;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    uVar8 = param_2;
    iStack_28 = *(iVar7 + 0x5e0);
    uStack_2c = 0;
    uVar5 = regmap_read(*(param_1 + 0x10),0x3620,&uStack_2c);
    if (uVar5 == 0) {
        uVar3 = 0x3e00;
        if (param_2 < 6) {
            uVar3 = (1L << (uVar8 & 0x3f)) << 3;
        }
        uVar8 = uVar3;
        if ((uVar3 & (uStack_2c ^ 0xffffffff)) == 0) {
            uVar5 = 0;
        }
        else {
            uVar5 = regmap_write(*(param_1 + 0x10),0x3620,uStack_2c | 2);
            if (uVar5 == 0) {
                uVar1 = 0x4000001;
                if (*(param_1 + 8) < 2) {
                    uVar1 = 0x1000001;
                }
                uStack_2c = uVar3 | uStack_2c | uVar1 | 0x40000;
                uVar5 = regmap_write(*(param_1 + 0x10),0x3620);
            }
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return;
    }
    iVar6 = __stack_chk_fail(uVar5);
    *extraout_x18 = sym.disable_8960;
    pcStack_48 = sym.disable_8960;
    ppuVar10 = &puStack_50;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    uVar3 = *(iVar6 + 8);
    uVar9 = uVar3;
    uStack_5c = 0;
    puStack_50 = &stack0xffffffffffffffe0;
    uStack_40 = uVar8;
    iStack_38 = param_1;
    iVar4 = regmap_read(*(iVar6 + 0x10),0x3620,&uStack_5c);
    if (iVar4 == 0) {
        uVar1 = 0xfbfffffe;
        if (*(iVar6 + 8) < 2) {
            uVar1 = 0xfefffffe;
        }
        uStack_5c = uStack_5c & ((0xffffffffffffffff >> (-uVar3 & 0x3f)) << 3 ^ 0xffffffffU) & uVar1;
        regmap_write(*(iVar6 + 0x10),0x3620);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18_00 = sym.suspend_8960;
    pcVar11 = sym.suspend_8960;
    uVar5 = *(iVar7 + 0x10);
    iVar4 = regmap_read(uVar5,0x3624,iVar7 + 0xa28);
    if ((iVar4 == 0) && (iVar4 = regmap_read(uVar5,0x3620,iVar7 + 0xa2c), iVar4 == 0)) {
        uVar2 = 0x4000001;
        if (*(iVar7 + 8) < 2) {
            uVar2 = 0x1000001;
        }
        regmap_update_bits_base(uVar5,0x3620,uVar2,0,0,0,0,in_x7,ppuVar10,pcVar11,uVar9,iVar6);
    }
    return;
}


// ===== sym.single_release.cfi_jt @ 0x080083b8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.single_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.dbg_sensors_open.6be98f0982e4f5249d656332c33b156d.cfi_jt @ 0x080083c0 (size 8) =====

void sym.dbg_sensors_open.6be98f0982e4f5249d656332c33b156d.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.dbg_sensors_show.6be98f0982e4f5249d656332c33b156d.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.dbg_version_open.6be98f0982e4f5249d656332c33b156d.cfi_jt @ 0x080083c8 (size 8) =====

void sym.dbg_version_open.6be98f0982e4f5249d656332c33b156d.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.dbg_version_show.6be98f0982e4f5249d656332c33b156d.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.tsens_resume.6be98f0982e4f5249d656332c33b156d.cfi_jt @ 0x080083d0 (size 8) =====

ulong sym.tsens_resume.6be98f0982e4f5249d656332c33b156d.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x98);
    iVar3 = *(iVar1 + 0xa40);
    if ((iVar3 == 0) || (pcVar4 = *(iVar3 + 0x30), pcVar4 == NULL)) {
        uVar2 = 0;
    }
    else {
        if (9 < (pcVar4 + -0x8008408 >> 3 | pcVar4 << 0x3d)) {
            __cfi_slowpath_diag(0x6ae5c9c5338877c9,pcVar4,0x80003e0);
        }
        uVar2 = (*pcVar4)(iVar1);
    }
    return uVar2;
}


// ===== sym.tsens_suspend.6be98f0982e4f5249d656332c33b156d.cfi_jt @ 0x080083d8 (size 8) =====

ulong sym.tsens_suspend.6be98f0982e4f5249d656332c33b156d.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x98);
    iVar3 = *(iVar1 + 0xa40);
    if ((iVar3 == 0) || (pcVar4 = *(iVar3 + 0x28), pcVar4 == NULL)) {
        uVar2 = 0;
    }
    else {
        if (9 < (pcVar4 + -0x8008408 >> 3 | pcVar4 << 0x3d)) {
            __cfi_slowpath_diag(0x6ae5c9c5338877c9,pcVar4,0x80003c0);
        }
        uVar2 = (*pcVar4)(iVar1);
    }
    return uVar2;
}


// ===== sym.tsens_critical_irq_thread.6be98f0982e4f5249d656332c33b156d.cfi_jt @ 0x080083e0 (size 8) =====

uint64_t sym.tsens_critical_irq_thread.6be98f0982e4f5249d656332c33b156d.cfi_jt(ulong param_1,ulong *param_2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    uint32_t uVar4;
    code *pcVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar6;
    ulong *arg1;
    ulong unaff_x30;
    uchar auVar7 [16];
    int iStack_a4;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_68 = *(iVar2 + 0x5e0);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    iStack_a4 = 0;
    if ((*(param_2[0x146] + 4) >> 3 & 1) != 0) {
        uVar4 = regmap_field_read(param_2[0x11e],&uStack_a0);
        uVar6 = uVar4;
        if (uVar4 != 0) goto code_r0x08009ac0;
        if (uStack_a0 != 0) {
            regmap_field_update_bits_base(param_2[0x11f],0xffffffff,1,0,0,0);
            regmap_field_update_bits_base(param_2[0x11f],0xffffffff,0,0,0,0);
            uVar4 = regmap_field_read(param_2[0x121],&iStack_a4);
            uVar6 = uVar4;
            if (uVar4 != 0) goto code_r0x08009ac0;
            if (((param_2 != NULL) && (iStack_a4 != 0)) && (param_2[0x14c] != 0)) {
                iVar2 = sp_el0;
                ipc_log_string(param_2[0x14c],"%s: %s: watchdog count: %d\n [%s]\n","tsens_critical_irq_thread",
                               "tsens_critical_irq_thread",iStack_a4,iVar2 + 0x7a8);
            }
        }
    }
    uVar6 = 1;
    if (*(param_2 + 1) != 0) {
        uVar4 = 0;
        do {
            arg1 = param_2 + uVar4 * 5 + 0x14f;
            if (arg1[1] != 0) {
                uVar1 = *(arg1 + 0x14);
                uVar6 = uVar1;
                iVar3 = sym.tsens_threshold_violated(param_2,uVar6,&uStack_98);
                if (iVar3 != 0) {
                    iVar3 = sym.get_temp_tsens_valid(arg1,&uStack_a0 + 4);
                    if (iVar3 == 0) {
                        sym.tsens_read_irq_state(param_2,uVar6,arg1,&uStack_98);
                        if ((uStack_78 != 0) && ((*param_2[0x146] < 3 || ((uStack_70 & 1 << (uVar1 & 0x1f)) == 0)))) {
                            sym.tsens_set_interrupt(param_2,uVar6,2,0);
                        }
                    }
                    else {
                        _dev_err(*param_2,"[%u] %s: error reading sensor\n",uVar6,"tsens_critical_irq_thread");
                    }
                }
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < *(param_2 + 1));
        uVar6 = 1;
    }
code_r0x08009ac0:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_68) {
        auVar7 = __stack_chk_fail();
        *extraout_x18 = sym.tsens_get_temp;
        pcVar5 = *(*(*auVar7._0_8_ + 0xa40) + 0x10);
        if (1 < (pcVar5 + -0x8008368 >> 3 | pcVar5 << 0x3d)) {
            __cfi_slowpath_diag(0xcd81341d85989151,pcVar5,0x8000360);
        }
        uVar6 = (*pcVar5)(auVar7._0_8_,auVar7._8_8_);
        return uVar6;
    }
    return uVar6;
}


// ===== sym.tsens_irq_thread.6be98f0982e4f5249d656332c33b156d.cfi_jt @ 0x080083e8 (size 8) =====

uint64_t sym.tsens_irq_thread.6be98f0982e4f5249d656332c33b156d.cfi_jt(uint param_1,ulong *param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    ulong *arg1;
    int64_t iVar5;
    code *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x19;
    uint64_t uVar7;
    int64_t unaff_x21;
    ulong unaff_x22;
    int64_t *unaff_x23;
    uint64_t unaff_x24;
    ulong *arg1_00;
    ulong unaff_x25;
    ulong *unaff_x26;
    ulong *unaff_x27;
    ulong unaff_x30;
    uchar auVar8 [16];
    int iStack_144;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    int64_t iStack_108;
    uchar *puStack_100;
    code *pcStack_f8;
    ulong *puStack_f0;
    ulong *puStack_e0;
    ulong uStack_d8;
    uint64_t uStack_d0;
    int64_t *piStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    ulong *puStack_b0;
    int64_t iStack_a8;
    uint uStack_a0;
    int iStack_9c;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    iStack_9c = 0;
    uStack_a0 = param_1;
    if (*(param_2 + 1) != 0) {
        uVar4 = 0;
        unaff_x27 = param_2 + 0x14f;
        unaff_x21 = param_2 + 0x24;
        unaff_x22 = 1;
        do {
            unaff_x26 = unaff_x27 + uVar4 * 5;
            unaff_x19 = uVar4;
            unaff_x23 = unaff_x26 + 1;
            if (*unaff_x23 != 0) {
                uVar1 = *(unaff_x26 + 0x14);
                unaff_x24 = uVar1;
                iVar3 = sym.tsens_threshold_violated(param_2,unaff_x24,&uStack_98);
                if (iVar3 != 0) {
                    iVar3 = sym.get_temp_tsens_valid(unaff_x26,&iStack_9c);
                    if (iVar3 == 0) {
                        unaff_x25 = _raw_spin_lock_irqsave(unaff_x21);
                        sym.tsens_read_irq_state(param_2,unaff_x24,unaff_x26,&uStack_98);
                        uVar2 = 1 << (uVar1 & 0x1f);
                        if ((uStack_98 == 0) || ((2 < *param_2[0x146] && ((uStack_90 & uVar2) != 0)))) {
                            if ((uStack_88 == 0) || ((2 < *param_2[0x146] && ((uStack_80 & uVar2) != 0))))
                            goto code_r0x08009824;
                            sym.tsens_set_interrupt(param_2,uVar1,0,0);
                            if (uStack_88._4_4_ < iStack_9c) {
                                iVar5 = 0;
                                goto code_r0x0800981c;
                            }
code_r0x08009834:
                            _raw_spin_unlock_irqrestore(unaff_x21,unaff_x25);
                            iVar5 = *unaff_x23;
                            *(unaff_x27 + unaff_x19 * 5 + 4) = iStack_9c;
                            thermal_zone_device_update(iVar5,0);
                        }
                        else {
                            sym.tsens_set_interrupt(param_2,uVar1,1,0);
                            if (uStack_98._4_4_ <= iStack_9c) goto code_r0x08009834;
                            iVar5 = 1;
code_r0x0800981c:
                            sym.tsens_set_interrupt(param_2,uVar1,iVar5,1);
code_r0x08009824:
                            _raw_spin_unlock_irqrestore(unaff_x21,unaff_x25);
                        }
                        if (*param_2[0x146] == 0) break;
                        *(unaff_x27 + unaff_x19 * 5 + 4) = 0x80000000;
                    }
                    else {
                        _dev_err(*param_2,"[%u] %s: error reading sensor\n",unaff_x24,"tsens_irq_thread");
                    }
                }
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < *(param_2 + 1));
    }
    if ((param_2 != NULL) && (param_2[0x14c] != 0)) {
        iVar5 = sp_el0;
        ipc_log_string(param_2[0x14c],"%s: %s: irq[%d] exit [%s]\n","tsens_irq_thread","tsens_irq_thread",uStack_a0
                       ,iVar5 + 0x7a8);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_68) {
        return 1;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.tsens_critical_irq_thread;
    pcStack_f8 = sym.tsens_critical_irq_thread;
    iVar5 = sp_el0;
    iStack_108 = *(iVar5 + 0x5e0);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_140 = 0;
    iStack_144 = 0;
    puStack_100 = &stack0xffffffffffffffa0;
    puStack_f0 = unaff_x27;
    puStack_e0 = unaff_x26;
    uStack_d8 = unaff_x25;
    uStack_d0 = unaff_x24;
    piStack_c8 = unaff_x23;
    uStack_c0 = unaff_x22;
    iStack_b8 = unaff_x21;
    puStack_b0 = param_2;
    iStack_a8 = unaff_x19;
    if ((*(arg1[0x146] + 4) >> 3 & 1) != 0) {
        uVar4 = regmap_field_read(arg1[0x11e],&uStack_140);
        uVar7 = uVar4;
        if (uVar4 != 0) goto code_r0x08009ac0;
        if (uStack_140 != 0) {
            regmap_field_update_bits_base(arg1[0x11f],0xffffffff,1,0,0,0);
            regmap_field_update_bits_base(arg1[0x11f],0xffffffff,0,0,0,0);
            uVar4 = regmap_field_read(arg1[0x121],&iStack_144);
            uVar7 = uVar4;
            if (uVar4 != 0) goto code_r0x08009ac0;
            if (((arg1 != NULL) && (iStack_144 != 0)) && (arg1[0x14c] != 0)) {
                iVar5 = sp_el0;
                ipc_log_string(arg1[0x14c],"%s: %s: watchdog count: %d\n [%s]\n","tsens_critical_irq_thread",
                               "tsens_critical_irq_thread",iStack_144,iVar5 + 0x7a8);
            }
        }
    }
    uVar7 = 1;
    if (*(arg1 + 1) != 0) {
        uVar4 = 0;
        do {
            arg1_00 = arg1 + uVar4 * 5 + 0x14f;
            if (arg1_00[1] != 0) {
                uVar1 = *(arg1_00 + 0x14);
                uVar7 = uVar1;
                iVar3 = sym.tsens_threshold_violated(arg1,uVar7,&uStack_138);
                if (iVar3 != 0) {
                    iVar3 = sym.get_temp_tsens_valid(arg1_00,&uStack_140 + 4);
                    if (iVar3 == 0) {
                        sym.tsens_read_irq_state(arg1,uVar7,arg1_00,&uStack_138);
                        if ((uStack_118 != 0) && ((*arg1[0x146] < 3 || ((uStack_110 & 1 << (uVar1 & 0x1f)) == 0)))) {
                            sym.tsens_set_interrupt(arg1,uVar7,2,0);
                        }
                    }
                    else {
                        _dev_err(*arg1,"[%u] %s: error reading sensor\n",uVar7,"tsens_critical_irq_thread");
                    }
                }
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < *(arg1 + 1));
        uVar7 = 1;
    }
code_r0x08009ac0:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_108) {
        auVar8 = __stack_chk_fail();
        *extraout_x18_00 = sym.tsens_get_temp;
        pcVar6 = *(*(*auVar8._0_8_ + 0xa40) + 0x10);
        if (1 < (pcVar6 + -0x8008368 >> 3 | pcVar6 << 0x3d)) {
            __cfi_slowpath_diag(0xcd81341d85989151,pcVar6,0x8000360);
        }
        uVar7 = (*pcVar6)(auVar8._0_8_,auVar8._8_8_);
        return uVar7;
    }
    return uVar7;
}


// ===== sym.dbg_version_show.6be98f0982e4f5249d656332c33b156d.cfi_jt @ 0x080083f0 (size 8) =====

void sym.dbg_version_show.6be98f0982e4f5249d656332c33b156d.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar2;
    ulong unaff_x30;
    uchar auVar3 [16];
    uint uStack_34;
    uint uStack_30;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    uStack_2c = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    iVar2 = *(*(param_1 + 0x80) + 0xa8);
    if (**(iVar2 + 0xa30) < 2) {
        seq_puts(param_1,"0.1.0\n");
    }
    else {
        uVar1 = regmap_field_read(*(iVar2 + 0x28),&uStack_2c);
        if (((uVar1 != 0) || (uVar1 = regmap_field_read(*(iVar2 + 0x30),&uStack_30), uVar1 != 0)) ||
           (uVar1 = regmap_field_read(*(iVar2 + 0x38),&uStack_34), uVar1 != 0)) goto code_r0x08008e88;
        seq_printf(param_1,"%d.%d.%d\n",uStack_2c,uStack_30,uStack_34);
    }
    uVar1 = 0;
code_r0x08008e88:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return;
    }
    auVar3 = __stack_chk_fail(uVar1);
    *extraout_x18 = sym.dbg_sensors_open;
    single_open(auVar3._8_8_,sym.dbg_sensors_show.6be98f0982e4f5249d656332c33b156d.cfi_jt,*(auVar3._0_8_ + 0x2d8));
    return;
}


// ===== sym.dbg_sensors_show.6be98f0982e4f5249d656332c33b156d.cfi_jt @ 0x080083f8 (size 8) =====

ulong sym.dbg_sensors_show.6be98f0982e4f5249d656332c33b156d.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t iVar2;
    uint32_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x80) + 0xa8);
    seq_printf(param_1,"max: %2d\nnum: %2d\n\n",*(*(iVar2 + 0xa30) + 8),*(iVar2 + 8));
    seq_puts(param_1,"      id    slope   offset\n--------------------------\n");
    if (*(iVar2 + 8) != 0) {
        uVar3 = 0;
        do {
            iVar1 = iVar2 + 0xa78 + uVar3 * 0x28;
            seq_printf(param_1,"%8d %8d %8d\n",*(iVar1 + 0x14),*(iVar1 + 0x18),*(iVar1 + 0x10));
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(iVar2 + 8));
    }
    return 0;
}


// ===== sym.tsens_get_temp.6be98f0982e4f5249d656332c33b156d.cfi_jt @ 0x08008400 (size 8) =====

void sym.tsens_get_temp.6be98f0982e4f5249d656332c33b156d.cfi_jt(int64_t *param_1,ulong param_2)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = *(*(*param_1 + 0xa40) + 0x10);
    if (1 < (pcVar1 + -0x8008368 >> 3 | pcVar1 << 0x3d)) {
        __cfi_slowpath_diag(0xcd81341d85989151,pcVar1,0x8000360);
    }
    (*pcVar1)(param_1,param_2);
    return;
}


// ===== sym.__typeid__ZTSFiP10tsens_privE_global_addr @ 0x08008408 (size 8) =====

void sym.__typeid__ZTSFiP10tsens_privE_global_addr(int64_t param_1)

{
    uint uVar1;
    int iVar2;
    ulong *in_x18;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = *(param_1 + 0x10);
    iVar2 = regmap_read(uVar3,0x3624,param_1 + 0xa28);
    if ((iVar2 == 0) && (iVar2 = regmap_read(uVar3,0x3620,param_1 + 0xa2c), iVar2 == 0)) {
        uVar1 = 0x4000001;
        if (*(param_1 + 8) < 2) {
            uVar1 = 0x1000001;
        }
        regmap_update_bits_base(uVar3,0x3620,uVar1,0,0,0,0);
    }
    return;
}


// ===== sym.init_common.cfi_jt @ 0x08008410 (size 8) =====

uint64_t sym.init_common.cfi_jt(int64_t *param_1)

{
    code *pcVar1;
    bool bVar2;
    int64_t iVar3;
    ulong uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    ulong *puVar7;
    uint32_t *puVar8;
    uint32_t uVar9;
    ulong *in_x18;
    int64_t iVar10;
    uint64_t *puVar11;
    int64_t *piVar12;
    uint64_t uVar13;
    int64_t iVar14;
    uint64_t uVar15;
    int64_t iVar16;
    ulong unaff_x30;
    ulong uStack_88;
    ulong uStack_80;
    uint uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_68 = *(iVar3 + 0x5e0);
    iVar10 = *param_1;
    uStack_70 = 0;
    iVar3 = of_find_device_by_node(*(iVar10 + 0x2f0));
    if (iVar3 == 0) {
        uVar5 = 0xffffffea;
        goto code_r0x0800ccd4;
    }
    if (1 < *(iVar3 + 0x3b8)) {
        *(param_1 + 4) = 0;
        uVar4 = platform_get_resource(iVar3,0x200,1);
        uVar5 = devm_ioremap_resource(iVar10,uVar4);
        if (uVar5 < 0xfffffffffffff001) {
            uVar5 = __devm_regmap_init_mmio_clk(iVar10,0,uVar5,obj.tsens_srot_config,0,0);
            param_1[3] = uVar5;
            if (uVar5 < 0xfffffffffffff001) goto code_r0x0800cb48;
            goto code_r0x0800ccc8;
        }
code_r0x0800cb7c:
        uVar5 = uVar5 & 0xffffffff;
        goto code_r0x0800cccc;
    }
    *(param_1 + 4) = 0x1000;
code_r0x0800cb48:
    if (*param_1[0x146] == 0) {
        if (*(*param_1 + 0x60) != 0) {
            uVar5 = syscon_node_to_regmap(*(*(*param_1 + 0x60) + 0x2f0));
            goto code_r0x0800cbb8;
        }
        uVar5 = param_1[2];
        if (uVar5 != 0) goto code_r0x0800cbcc;
code_r0x0800cc74:
        if (uVar5 == 0) {
code_r0x0800cc78:
            uVar5 = 0xffffffed;
        }
        else {
code_r0x0800ccc8:
            uVar5 = uVar5 & 0xffffffff;
        }
    }
    else {
        uVar4 = platform_get_resource(iVar3,0x200,0);
        uVar5 = devm_ioremap_resource(iVar10,uVar4);
        if (0xfffffffffffff000 < uVar5) goto code_r0x0800cb7c;
        uVar5 = __devm_regmap_init_mmio_clk(iVar10,0,uVar5,obj.tsens_config,0,0);
code_r0x0800cbb8:
        param_1[2] = uVar5;
        if (uVar5 == 0) goto code_r0x0800cc74;
code_r0x0800cbcc:
        if (0xfffffffffffff000 < uVar5) goto code_r0x0800cc74;
        uVar6 = param_1[3];
        if (param_1[3] == 0) {
            param_1[3] = uVar5;
            uVar6 = uVar5;
        }
        if (*param_1[0x146] < 2) {
code_r0x0800cc98:
            iVar14 = param_1[0x147];
            uStack_78 = *(iVar14 + 0x4c);
            uStack_80 = *(iVar14 + 0x44);
            uStack_88 = *(iVar14 + 0x3c);
            uVar5 = devm_regmap_field_alloc(iVar10,uVar6,&uStack_88);
            param_1[8] = uVar5;
            if (uVar5 < 0xfffffffffffff001) {
                if (*param_1[0x146] == 0) {
                    regmap_field_update_bits_base(uVar5,0xffffffff,1,0,0,0);
                    uVar5 = param_1[8];
                }
                uVar6 = regmap_field_read(uVar5,&uStack_70);
                uVar5 = uVar6 & 0xffffffff;
                if (uVar6 != 0) goto code_r0x0800cccc;
                if (uStack_70 != 0) {
                    iVar14 = param_1[0x147];
                    uStack_78 = *(iVar14 + 0x74);
                    uStack_80 = *(iVar14 + 0x6c);
                    uStack_88 = *(iVar14 + 100);
                    uVar5 = devm_regmap_field_alloc(iVar10,param_1[3],&uStack_88);
                    param_1[10] = uVar5;
                    if (uVar5 < 0xfffffffffffff001) {
                        iVar14 = param_1[0x147];
                        uStack_78 = *(iVar14 + 0xb0);
                        uStack_88 = *(iVar14 + 0xa0);
                        uStack_80 = *(iVar14 + 0xa8);
                        uVar5 = devm_regmap_field_alloc(iVar10,param_1[2],&uStack_88);
                        param_1[0xd] = uVar5;
                        if (uVar5 < 0xfffffffffffff001) {
                            iVar14 = param_1[0x147];
                            uStack_78 = *(iVar14 + 0x60);
                            uStack_88 = *(iVar14 + 0x50);
                            uStack_80 = *(iVar14 + 0x58);
                            uVar5 = devm_regmap_field_alloc(iVar10,param_1[3],&uStack_88);
                            param_1[9] = uVar5;
                            if (uVar5 < 0xfffffffffffff001) {
                                iVar14 = param_1[0x147];
                                uStack_78 = *(iVar14 + 0x9c);
                                uStack_80 = *(iVar14 + 0x94);
                                uStack_88 = *(iVar14 + 0x8c);
                                uVar5 = devm_regmap_field_alloc(iVar10,param_1[2],&uStack_88);
                                param_1[0xc] = uVar5;
                                if (uVar5 < 0xfffffffffffff001) {
                                    puVar8 = param_1[0x146];
                                    piVar12 = param_1 + 0xe;
                                    uVar13 = 0x137;
                                    iVar14 = 0xb4;
                                    uVar6 = 9;
                                    do {
                                        if (puVar8[2] != 0) {
                                            uVar15 = 0;
                                            iVar16 = iVar14;
                                            do {
                                                puVar7 = param_1[0x147] + iVar16;
                                                uStack_78 = *(puVar7 + 2);
                                                uStack_88 = *puVar7;
                                                uStack_80 = puVar7[1];
                                                uVar5 = devm_regmap_field_alloc(iVar10,param_1[2],&uStack_88);
                                                if (uVar13 == uVar15) goto code_r0x0800d044;
                                                piVar12[uVar15] = uVar5;
                                                if (0xfffffffffffff000 < uVar5) goto code_r0x0800ccc8;
                                                puVar8 = param_1[0x146];
                                                uVar15 = uVar15 + 1;
                                                iVar16 = iVar16 + 0x14;
                                            } while (uVar15 < puVar8[2]);
                                        }
                                        bVar2 = uVar6 < 0xb9;
                                        uVar13 = uVar13 - 0x10;
                                        piVar12 = piVar12 + 0x10;
                                        iVar14 = iVar14 + 0x140;
                                        uVar6 = uVar6 + 0x10;
                                    } while (bVar2);
                                    if (((puVar8[1] & 1) != 0) || (uVar9 = *puVar8, uVar9 == 0)) {
                                        piVar12 = param_1 + 0xce;
                                        uVar13 = 0x77;
                                        iVar14 = 0xfb4;
                                        uVar6 = 0xc9;
                                        do {
                                            if (puVar8[2] != 0) {
                                                uVar15 = 0;
                                                iVar16 = iVar14;
                                                do {
                                                    puVar7 = param_1[0x147] + iVar16;
                                                    uStack_78 = *(puVar7 + 2);
                                                    uStack_88 = *puVar7;
                                                    uStack_80 = puVar7[1];
                                                    uVar5 = devm_regmap_field_alloc(iVar10,param_1[2],&uStack_88);
                                                    if (uVar13 == uVar15) goto code_r0x0800d044;
                                                    piVar12[uVar15] = uVar5;
                                                    if (0xfffffffffffff000 < uVar5) goto code_r0x0800ccc8;
                                                    puVar8 = param_1[0x146];
                                                    uVar15 = uVar15 + 1;
                                                    iVar16 = iVar16 + 0x14;
                                                } while (uVar15 < puVar8[2]);
                                            }
                                            bVar2 = uVar6 < 0x109;
                                            uVar13 = uVar13 - 0x10;
                                            piVar12 = piVar12 + 0x10;
                                            iVar14 = iVar14 + 0x140;
                                            uVar6 = uVar6 + 0x10;
                                        } while (bVar2);
                                        uVar9 = *puVar8;
                                    }
                                    if ((2 < uVar9) && (2 < uStack_70._4_4_)) {
                                        puVar11 = param_1 + 0x11e;
                                        iVar14 = -0x8c;
                                        *(puVar8 + 1) = puVar8[1] | 8;
                                        do {
                                            iVar16 = param_1[0x147] + iVar14;
                                            uStack_78 = *(iVar16 + 0x1690);
                                            uStack_80 = *(iVar16 + 0x1688);
                                            uStack_88 = *(iVar16 + 0x1680);
                                            uVar5 = devm_regmap_field_alloc(iVar10,param_1[2],&uStack_88);
                                            *puVar11 = uVar5;
                                            if (0xfffffffffffff000 < uVar5) goto code_r0x0800ccc8;
                                            puVar11 = puVar11 + 1;
                                            iVar14 = iVar14 + 0x14;
                                        } while (iVar14 != 0);
                                        regmap_field_update_bits_base(param_1[0x120],0xffffffff,0,0,0,0);
                                        regmap_field_update_bits_base(param_1[0x124],0xffffffff,1,0,0,0);
                                        puVar8 = param_1[0x146];
                                    }
                                    *(param_1 + 0x24) = 0;
                                    if (*puVar8 != 0) {
                                        sym.tsens_enable_irq(param_1);
                                    }
                                    sym.tsens_debug_init(iVar3);
                                    uVar5 = 0;
                                    goto code_r0x0800cccc;
                                }
                            }
                        }
                    }
                    goto code_r0x0800ccc8;
                }
                _dev_err(iVar10,"%s: device not enabled\n","init_common");
                goto code_r0x0800cc78;
            }
            goto code_r0x0800ccc8;
        }
        puVar7 = param_1[0x147];
        uStack_78 = *(puVar7 + 2);
        uStack_88 = *puVar7;
        uStack_80 = puVar7[1];
        uVar5 = devm_regmap_field_alloc(iVar10,uVar6,&uStack_88);
        param_1[5] = uVar5;
        if (uVar5 < 0xfffffffffffff001) {
            iVar14 = 0x14;
            puVar11 = param_1 + 6;
            do {
                if (iVar14 == 0x3c) {
                    uVar6 = regmap_field_read(param_1[6],&uStack_70 + 4);
                    uVar5 = uVar6 & 0xffffffff;
                    if (uVar6 == 0) {
                        uVar6 = param_1[3];
                        goto code_r0x0800cc98;
                    }
                    break;
                }
                puVar7 = param_1[0x147] + iVar14;
                uStack_78 = *(puVar7 + 2);
                uStack_88 = *puVar7;
                uStack_80 = puVar7[1];
                uVar5 = devm_regmap_field_alloc(iVar10,param_1[3],&uStack_88);
                iVar14 = iVar14 + 0x14;
                *puVar11 = uVar5;
                puVar11 = puVar11 + 1;
            } while (uVar5 < 0xfffffffffffff001);
        }
    }
code_r0x0800cccc:
    put_device(iVar3 + 0x10);
code_r0x0800ccd4:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_68) {
        return uVar5 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x0800d044:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x800d048);
    (*pcVar1)();
}


// ===== sym.resume_8960.69a8eeaa93508d76120713f6f044c42c.cfi_jt @ 0x08008418 (size 8) =====

void sym.resume_8960.69a8eeaa93508d76120713f6f044c42c.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(param_1 + 0x10);
    iVar1 = regmap_update_bits_base(uVar2,0x3620,2,2,0,0,0);
    if ((iVar1 == 0) &&
       (((*(param_1 + 8) < 2 || (iVar1 = regmap_update_bits_base(uVar2,0x3640,0xf,0x9b,0,0,0), iVar1 == 0)) &&
        (iVar1 = regmap_write(uVar2,0x3624,*(param_1 + 0xa28)), iVar1 == 0)))) {
        regmap_write(uVar2,0x3620,*(param_1 + 0xa2c));
    }
    return;
}


// ===== sym.calibrate_8960.69a8eeaa93508d76120713f6f044c42c.cfi_jt @ 0x08008420 (size 8) =====

uint64_t sym.calibrate_8960.69a8eeaa93508d76120713f6f044c42c.cfi_jt(ulong *param_1)

{
    int iVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    int64_t iVar4;
    code *pcVar5;
    uint8_t *puVar6;
    ulong *in_x18;
    ulong unaff_x30;
    uint64_t uStack_58;
    uint64_t uStack_50;
    uint64_t uStack_48;
    uint64_t uStack_40;
    uint64_t uStack_38;
    uint32_t uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    uStack_30 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_58 = 0;
    puVar6 = sym.qfprom_read(*param_1,"calib");
    if (0xfffffffffffff000 < puVar6) {
        puVar6 = sym.qfprom_read(*param_1,"calib_backup");
    }
    if (puVar6 < 0xfffffffffffff001) {
        iVar1 = *(param_1 + 1);
        if (iVar1 != 0) {
            uVar2 = *puVar6;
            uStack_58 = CONCAT44(uStack_58._4_4_,uVar2);
            *(param_1 + 0x152) = 0x33a;
            if (iVar1 != 1) {
                uVar3 = puVar6[1];
                *(param_1 + 0x157) = 0x33a;
                uStack_58 = CONCAT14(uVar3,uVar2);
                if (iVar1 != 2) {
                    uVar2 = puVar6[2];
                    uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
                    *(param_1 + 0x15c) = 0x324;
                    if (iVar1 != 3) {
                        uStack_50 = CONCAT14(puVar6[3],uVar2);
                        *(param_1 + 0x161) = 0x33a;
                        if (iVar1 != 4) {
                            uVar2 = puVar6[4];
                            uStack_48 = CONCAT44(uStack_48._4_4_,uVar2);
                            *(param_1 + 0x166) = 0x2f9;
                            if (iVar1 != 5) {
                                uStack_48 = CONCAT14(puVar6[5],uVar2);
                                *(param_1 + 0x16b) = 0x30e;
                                if (iVar1 != 6) {
                                    uVar2 = puVar6[6];
                                    *(param_1 + 0x170) = 0x30e;
                                    uStack_40 = CONCAT44(uStack_40._4_4_,uVar2);
                                    if (iVar1 != 7) {
                                        uStack_40 = CONCAT14(puVar6[7],uVar2);
                                        *(param_1 + 0x175) = 0x351;
                                        if (iVar1 != 8) {
                                            uVar2 = puVar6[8];
                                            uStack_38 = CONCAT44(uStack_38._4_4_,uVar2);
                                            *(param_1 + 0x17a) = 0x30e;
                                            if (iVar1 != 9) {
                                                uStack_38 = CONCAT14(puVar6[9],uVar2);
                                                *(param_1 + 0x17f) = 0x351;
                                                if (iVar1 != 10) {
                                                    uStack_30 = puVar6[10];
                                                    *(param_1 + 0x184) = 0x30e;
                                                    if (iVar1 != 0xb) goto code_r0x0800c794;
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
        }
        sym.compute_intercept_slope(param_1,&uStack_58,0,1);
        kfree(puVar6);
        puVar6 = NULL;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_28) {
        return puVar6 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x0800c794:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x800c798);
    (*pcVar5)();
}


// ===== sym.calibrate_8916.916cf9dcd0ee76622f57297313cdac5e.cfi_jt @ 0x08008428 (size 8) =====

uint64_t sym.calibrate_8916.916cf9dcd0ee76622f57297313cdac5e.cfi_jt(ulong *param_1)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t arg4;
    uint32_t uVar3;
    int64_t iVar4;
    code *pcVar5;
    uint32_t *puVar6;
    uint32_t *puVar7;
    int iVar8;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_68;
    ulong uStack_60;
    uint32_t uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    uint32_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_58 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    puVar6 = sym.qfprom_read(*param_1,"calib");
    if (puVar6 < 0xfffffffffffff001) {
        puVar7 = sym.qfprom_read(*param_1,"calib_sel");
        if (puVar7 < 0xfffffffffffff001) {
            arg4 = *puVar7 >> 0x1d;
            if (arg4 == 3) {
                uStack_68 = CONCAT44(*puVar6 >> 0x16,*puVar6 >> 0xc) & 0x1f0000001f;
                uStack_60 = CONCAT44(puVar6[1] >> 10,puVar6[1]) & 0x1f0000001f;
                uStack_58 = puVar6[1] >> 0x14 & 0x1f;
                iVar8 = *(param_1 + 1);
                if (iVar8 != 0) {
                    uVar3 = puVar6[1] >> 0x19;
                    iVar2 = ((*puVar6 >> 0xc & 0x1f) + uVar3) * 8;
                    uStack_68 = CONCAT44(uStack_68._4_4_,iVar2);
                    if ((iVar8 != 1) &&
                       (uStack_68 = CONCAT44(((*puVar6 >> 0x16 & 0x1f) + uVar3) * 8,iVar2), iVar8 != 2)) {
                        iVar2 = ((puVar6[1] & 0x1f) + uVar3) * 8;
                        uStack_60 = CONCAT44(uStack_60._4_4_,iVar2);
                        if ((iVar8 != 3) &&
                           ((uStack_60 = CONCAT44(((puVar6[1] >> 10 & 0x1f) + uVar3) * 8,iVar2), iVar8 != 4 &&
                            (uStack_58 = (uStack_58 + uVar3) * 8, iVar8 != 5)))) goto code_r0x0800b6fc;
                    }
                }
code_r0x0800b584:
                uVar3 = *puVar6 >> 7;
                uStack_50 = CONCAT44(*puVar6 >> 0x11,uVar3) & 0x1f0000001f;
                uStack_48 = CONCAT44(puVar6[1] >> 5,*puVar6 >> 0x1b) & 0x1fffffffff;
                uStack_40 = puVar6[1] >> 0xf & 0x1f;
                if (iVar8 != 0) {
                    uVar1 = *puVar6 & 0x7f;
                    iVar2 = ((uVar3 & 0x1f) + uVar1) * 8;
                    uStack_50 = CONCAT44(uStack_50._4_4_,iVar2);
                    if ((iVar8 != 1) &&
                       (uStack_50 = CONCAT44(((*puVar6 >> 0x11 & 0x1f) + uVar1) * 8,iVar2), iVar8 != 2)) {
                        iVar2 = ((*puVar6 >> 0x1b) + uVar1) * 8;
                        uStack_48 = CONCAT44(uStack_48._4_4_,iVar2);
                        if ((iVar8 != 3) &&
                           (uStack_48 = CONCAT44(((puVar6[1] >> 5 & 0x1f) + uVar1) * 8,iVar2), iVar8 != 4)) {
                            uStack_40 = (uStack_40 + uVar1) * 8;
                            goto joined_r0x0800b628;
                        }
                    }
                }
            }
            else {
                if (arg4 == 2) {
                    iVar8 = *(param_1 + 1);
                    goto code_r0x0800b584;
                }
                iVar8 = *(param_1 + 1);
                if (iVar8 != 0) {
                    uStack_50 = CONCAT44(uStack_50._4_4_,500);
                    uStack_68 = CONCAT44(uStack_68._4_4_,0x30c);
                    if (iVar8 == 1) goto code_r0x0800b6a0;
                    uStack_50 = 0x1f4000001f4;
                    uStack_68 = 0x30c0000030c;
                    if (iVar8 == 2) goto code_r0x0800b6a0;
                    uStack_48 = CONCAT44(uStack_48._4_4_,500);
                    uStack_60 = CONCAT44(uStack_60._4_4_,0x30c);
                    if (iVar8 == 3) goto code_r0x0800b6a0;
                    uStack_48 = 0x1f4000001f4;
                    uStack_60 = 0x30c0000030c;
                    if (iVar8 == 4) goto code_r0x0800b6a0;
                    uStack_40 = 500;
                    uStack_58 = 0x30c;
joined_r0x0800b628:
                    if (iVar8 != 5) goto code_r0x0800b6fc;
                }
            }
code_r0x0800b6a0:
            sym.compute_intercept_slope(param_1,&uStack_50,&uStack_68,arg4);
            kfree(puVar6);
            kfree(puVar7);
            puVar6 = NULL;
        }
        else {
            kfree(puVar6);
            puVar6 = puVar7 & 0xffffffff;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return puVar6 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x0800b6fc:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x800b700);
    (*pcVar5)();
}


// ===== sym.calibrate_8976.63e194274b828a34256b804ef434b7e3.cfi_jt @ 0x08008430 (size 8) =====

uint32_t * sym.calibrate_8976.63e194274b828a34256b804ef434b7e3.cfi_jt(ulong *param_1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    bool bVar6;
    bool bVar7;
    bool bVar8;
    bool bVar9;
    code *pcVar10;
    uint32_t *puVar11;
    bool bVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    bool bVar15;
    bool bVar16;
    uint32_t uVar17;
    bool bVar18;
    uint32_t uVar19;
    uint32_t uVar20;
    uint32_t uVar21;
    uint32_t uVar22;
    uint32_t uVar23;
    uint32_t uVar24;
    uint32_t uVar25;
    ulong *in_x18;
    uint32_t uVar26;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar11 = sym.qfprom_read(*param_1,"calib");
    if (0xfffffffffffff000 < puVar11) {
        return puVar11;
    }
    uVar19 = puVar11[4];
    if ((uVar19 & 3) == 3) {
        uVar2 = *(param_1 + 1);
        if (0xb < uVar2) goto code_r0x0800b430;
    }
    else {
        if ((uVar19 & 3) != 2) {
            uVar26 = *(param_1 + 1);
            bVar15 = false;
            bVar5 = false;
            bVar6 = false;
            bVar18 = false;
            bVar16 = false;
            bVar12 = false;
            bVar7 = false;
            bVar8 = false;
            bVar9 = false;
            bVar4 = false;
            bVar3 = true;
            uVar25 = uVar26;
            uVar24 = uVar26;
            uVar23 = uVar26;
            uVar22 = uVar26;
            uVar21 = uVar26;
            uVar20 = uVar26;
            uVar17 = uVar26;
            uVar14 = uVar26;
            uVar13 = uVar26;
            uVar19 = uVar26;
            switch(uVar26) {
            case 0:
                break;
            case 1:
                bVar15 = false;
                bVar5 = false;
                bVar6 = false;
                bVar18 = false;
                bVar16 = false;
                bVar12 = false;
                bVar7 = false;
                bVar8 = false;
                bVar9 = false;
                uVar26 = 0;
                uVar17 = 0;
                uVar14 = 0;
                uVar13 = 0;
                uVar25 = 0;
                uVar24 = 0;
                uVar23 = 0;
                uVar22 = 0;
                uVar21 = 0;
                uVar19 = 0;
                bVar3 = false;
                bVar4 = true;
                uVar20 = 500;
                break;
            case 2:
                bVar15 = false;
                bVar5 = false;
                bVar6 = false;
                bVar18 = false;
                bVar16 = false;
                bVar12 = false;
                bVar7 = false;
                bVar8 = false;
                bVar9 = false;
                uVar17 = 0;
                uVar14 = 0;
                uVar13 = 0;
                uVar25 = 0;
                uVar24 = 0;
                uVar23 = 0;
                uVar22 = 0;
                uVar21 = 0;
                uVar19 = 0;
                bVar3 = false;
                bVar4 = false;
                uVar20 = 500;
                uVar26 = 500;
                break;
            case 3:
                bVar5 = false;
                bVar6 = false;
                bVar18 = false;
                bVar16 = false;
                bVar12 = false;
                bVar7 = false;
                bVar8 = false;
                bVar9 = false;
                uVar14 = 0;
                uVar13 = 0;
                uVar25 = 0;
                uVar24 = 0;
                uVar23 = 0;
                uVar22 = 0;
                uVar21 = 0;
                uVar19 = 0;
                bVar3 = false;
                bVar4 = false;
                uVar20 = 500;
                bVar15 = true;
                uVar26 = 500;
                uVar17 = 500;
                break;
            case 4:
                bVar6 = false;
                bVar18 = false;
                bVar16 = false;
                bVar12 = false;
                bVar7 = false;
                bVar8 = false;
                bVar9 = false;
                uVar13 = 0;
                uVar25 = 0;
                uVar24 = 0;
                uVar23 = 0;
                uVar22 = 0;
                uVar21 = 0;
                uVar19 = 0;
                bVar3 = false;
                bVar4 = false;
                uVar20 = 500;
                bVar15 = true;
                bVar5 = true;
                uVar26 = 500;
                uVar17 = 500;
                uVar14 = 500;
                break;
            case 5:
                bVar18 = false;
                bVar16 = false;
                bVar12 = false;
                bVar7 = false;
                bVar8 = false;
                bVar9 = false;
                uVar25 = 0;
                uVar24 = 0;
                uVar23 = 0;
                uVar22 = 0;
                uVar21 = 0;
                uVar19 = 0;
                bVar3 = false;
                bVar4 = false;
                uVar20 = 500;
                bVar15 = true;
                bVar5 = true;
                bVar6 = true;
                uVar26 = 500;
                uVar17 = 500;
                uVar14 = 500;
                uVar13 = 500;
                break;
            case 6:
                bVar16 = false;
                bVar12 = false;
                bVar7 = false;
                bVar8 = false;
                bVar9 = false;
                uVar24 = 0;
                uVar23 = 0;
                uVar22 = 0;
                uVar21 = 0;
                uVar19 = 0;
                bVar3 = false;
                bVar4 = false;
                uVar20 = 500;
                bVar15 = true;
                bVar5 = true;
                bVar6 = true;
                bVar18 = true;
                uVar26 = 500;
                uVar17 = 500;
                uVar14 = 500;
                uVar13 = 500;
                uVar25 = 500;
                break;
            case 7:
                bVar12 = false;
                bVar7 = false;
                bVar8 = false;
                bVar9 = false;
                uVar23 = 0;
                uVar22 = 0;
                uVar21 = 0;
                uVar19 = 0;
                bVar3 = false;
                bVar4 = false;
                uVar20 = 500;
                bVar15 = true;
                bVar5 = true;
                bVar6 = true;
                bVar18 = true;
                bVar16 = true;
                uVar26 = 500;
                uVar17 = 500;
                uVar14 = 500;
                uVar13 = 500;
                uVar25 = 500;
                uVar24 = 500;
                break;
            case 8:
                bVar7 = false;
                bVar8 = false;
                bVar9 = false;
                uVar22 = 0;
                uVar21 = 0;
                uVar19 = 0;
                bVar3 = false;
                bVar4 = false;
                uVar20 = 500;
                bVar15 = true;
                bVar5 = true;
                bVar6 = true;
                bVar18 = true;
                bVar16 = true;
                bVar12 = true;
                uVar26 = 500;
                uVar17 = 500;
                uVar14 = 500;
                uVar13 = 500;
                uVar25 = 500;
                uVar24 = 500;
                uVar23 = 500;
                break;
            case 9:
                bVar8 = false;
                bVar9 = false;
                uVar21 = 0;
                uVar19 = 0;
                bVar3 = false;
                bVar4 = false;
                uVar20 = 500;
                bVar15 = true;
                bVar5 = true;
                bVar6 = true;
                bVar18 = true;
                bVar16 = true;
                bVar12 = true;
                bVar7 = true;
                uVar26 = 500;
                uVar17 = 500;
                uVar14 = 500;
                uVar13 = 500;
                uVar25 = 500;
                uVar24 = 500;
                uVar23 = 500;
                uVar22 = 500;
                break;
            case 10:
                bVar9 = false;
                uVar19 = 0;
                bVar3 = false;
                bVar4 = false;
                uVar20 = 500;
                bVar15 = true;
                bVar5 = true;
                bVar6 = true;
                bVar18 = true;
                bVar16 = true;
                bVar12 = true;
                bVar7 = true;
                bVar8 = true;
                uVar26 = 500;
                uVar17 = 500;
                uVar14 = 500;
                uVar13 = 500;
                uVar25 = 500;
                uVar24 = 500;
                uVar23 = 500;
                uVar22 = 500;
                uVar21 = 500;
                break;
            case 0xb:
                bVar3 = false;
                bVar4 = false;
                uVar20 = 500;
                bVar15 = true;
                bVar5 = true;
                bVar6 = true;
                bVar18 = true;
                bVar16 = true;
                bVar12 = true;
                bVar7 = true;
                bVar8 = true;
                bVar9 = true;
                uVar26 = 500;
                uVar17 = 500;
                uVar14 = 500;
                uVar13 = 500;
                uVar25 = 500;
                uVar24 = 500;
                uVar23 = 500;
                uVar22 = 500;
                uVar21 = 500;
                uVar19 = 500;
                break;
            default:
                goto code_r0x0800b430;
            }
            goto code_r0x0800b2e0;
        }
        uVar2 = *(param_1 + 1);
    }
    uVar1 = *puVar11;
    uVar17 = puVar11[1] & 0x3f;
    uVar14 = puVar11[1] >> 0xc & 0x3f;
    uVar20 = uVar1 >> 8 & 0x3f;
    uVar26 = uVar1 >> 0x14 & 0x3f;
    uVar13 = puVar11[2] >> 8 & 0x3f;
    uVar25 = puVar11[2] >> 0x14 & 0x3f;
    uVar24 = puVar11[3] & 0x3f;
    uVar23 = puVar11[3] >> 0xc & 0x3f;
    uVar22 = uVar19 >> 3 & 0x3f;
    uVar21 = uVar19 >> 0xf & 0x3f;
    uVar19 = puVar11[5] & 1 | uVar19 >> 0x1b;
    if (uVar2 == 0) {
        bVar15 = false;
        bVar5 = false;
        bVar6 = false;
        bVar18 = false;
        bVar16 = false;
        bVar12 = false;
        bVar7 = false;
        bVar8 = false;
        bVar4 = false;
        bVar3 = true;
        bVar9 = false;
    }
    else {
        uVar1 = uVar1 & 0xff;
        uVar20 = (uVar20 + uVar1) * 4;
        if (uVar2 == 1) {
            bVar15 = false;
            bVar5 = false;
            bVar6 = false;
            bVar18 = false;
            bVar16 = false;
            bVar12 = false;
            bVar7 = false;
            bVar8 = false;
            bVar9 = false;
            bVar3 = false;
            bVar4 = true;
        }
        else {
            uVar26 = (uVar26 + uVar1) * 4;
            if (uVar2 == 2) {
                bVar15 = false;
                bVar5 = false;
                bVar6 = false;
                bVar18 = false;
                bVar16 = false;
                bVar12 = false;
                bVar7 = false;
                bVar8 = false;
                bVar9 = false;
                bVar3 = false;
                bVar4 = false;
            }
            else {
                uVar17 = (uVar17 + uVar1) * 4;
                if (uVar2 == 3) {
                    bVar5 = false;
                    bVar6 = false;
                    bVar18 = false;
                    bVar16 = false;
                    bVar12 = false;
                    bVar7 = false;
                    bVar8 = false;
                    bVar9 = false;
                    bVar3 = false;
                    bVar4 = false;
                    bVar15 = true;
                }
                else {
                    uVar14 = (uVar14 + uVar1) * 4;
                    if (uVar2 == 4) {
                        bVar6 = false;
                        bVar18 = false;
                        bVar16 = false;
                        bVar12 = false;
                        bVar7 = false;
                        bVar8 = false;
                        bVar9 = false;
                        bVar3 = false;
                        bVar4 = false;
                        bVar15 = true;
                        bVar5 = true;
                    }
                    else {
                        uVar13 = (uVar13 + uVar1) * 4;
                        if (uVar2 == 5) {
                            bVar18 = false;
                            bVar16 = false;
                            bVar12 = false;
                            bVar7 = false;
                            bVar8 = false;
                            bVar9 = false;
                            bVar3 = false;
                            bVar4 = false;
                            bVar15 = true;
                            bVar5 = true;
                            bVar6 = true;
                        }
                        else {
                            uVar25 = (uVar25 + uVar1) * 4;
                            if (uVar2 == 6) {
                                bVar16 = false;
                                bVar12 = false;
                                bVar7 = false;
                                bVar8 = false;
                                bVar9 = false;
                                bVar3 = false;
                                bVar4 = false;
                                bVar15 = true;
                                bVar5 = true;
                                bVar6 = true;
                                bVar18 = true;
                            }
                            else {
                                uVar24 = (uVar24 + uVar1) * 4;
                                if (uVar2 == 7) {
                                    bVar12 = false;
                                    bVar7 = false;
                                    bVar8 = false;
                                    bVar9 = false;
                                    bVar3 = false;
                                    bVar4 = false;
                                    bVar15 = true;
                                    bVar5 = true;
                                    bVar6 = true;
                                    bVar18 = true;
                                    bVar16 = true;
                                }
                                else {
                                    uVar23 = (uVar23 + uVar1) * 4;
                                    if (uVar2 == 8) {
                                        bVar7 = false;
                                        bVar8 = false;
                                        bVar9 = false;
                                        bVar3 = false;
                                        bVar4 = false;
                                        bVar15 = true;
                                        bVar5 = true;
                                        bVar6 = true;
                                        bVar18 = true;
                                        bVar16 = true;
                                        bVar12 = true;
                                    }
                                    else {
                                        uVar22 = (uVar1 + uVar22) * 4;
                                        if (uVar2 == 9) {
                                            bVar8 = false;
                                            bVar9 = false;
                                            bVar3 = false;
                                            bVar4 = false;
                                            bVar15 = true;
                                            bVar5 = true;
                                            bVar6 = true;
                                            bVar18 = true;
                                            bVar16 = true;
                                            bVar12 = true;
                                            bVar7 = true;
                                        }
                                        else {
                                            uVar21 = (uVar1 + uVar21) * 4;
                                            if (uVar2 == 10) {
                                                bVar9 = false;
                                                bVar3 = false;
                                                bVar4 = false;
                                                bVar15 = true;
                                                bVar5 = true;
                                                bVar6 = true;
                                                bVar18 = true;
                                                bVar16 = true;
                                                bVar12 = true;
                                                bVar7 = true;
                                                bVar8 = true;
                                            }
                                            else {
                                                if (uVar2 != 0xb) {
code_r0x0800b430:
    //WARNING: Does not return
                                                    pcVar10 = SoftwareBreakpoint(0x5512,0x800b434);
                                                    (*pcVar10)();
                                                }
                                                bVar3 = false;
                                                bVar4 = false;
                                                bVar15 = true;
                                                bVar5 = true;
                                                bVar6 = true;
                                                bVar18 = true;
                                                bVar16 = true;
                                                bVar12 = true;
                                                bVar7 = true;
                                                bVar8 = true;
                                                bVar9 = true;
                                                uVar19 = (uVar19 + uVar1) * 4;
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
    }
code_r0x0800b2e0:
    *(param_1 + 0x152) = 0xcf1;
    *(param_1 + 0x157) = 0xccb;
    *(param_1 + 0x15c) = 0xcf8;
    *(param_1 + 0x161) = 0xcae;
    *(param_1 + 0x166) = 0xccf;
    *(param_1 + 0x16b) = 0xcb9;
    *(param_1 + 0x170) = 0xca2;
    *(param_1 + 0x175) = 0xcc5;
    *(param_1 + 0x17a) = 0xcb7;
    *(param_1 + 0x17f) = 0xca7;
    *(param_1 + 0x184) = 0xcd6;
    if ((((((!bVar3) && (*(param_1 + 0x151) = uVar20 * 1000 + -0x1843e, !bVar4)) &&
          (*(param_1 + 0x156) = uVar26 * 1000 + -0x17fca, bVar15)) &&
         ((*(param_1 + 0x15b) = uVar17 * 1000 + -0x18510, bVar5 &&
          (*(param_1 + 0x160) = uVar14 * 1000 + -0x17c64, bVar6)))) &&
        ((*(param_1 + 0x165) = uVar13 * 1000 + -0x18042, bVar18 &&
         ((*(param_1 + 0x16a) = uVar25 * 1000 + -0x17dae, bVar16 &&
          (*(param_1 + 0x16f) = uVar24 * 1000 + -0x17afc, bVar12)))))) &&
       ((*(param_1 + 0x174) = uVar23 * 1000 + -0x17f16, bVar7 &&
        ((*(param_1 + 0x179) = uVar22 * 1000 + -0x17d72, bVar8 &&
         (*(param_1 + 0x17e) = uVar21 * 1000 + -0x17b92, bVar9)))))) {
        *(param_1 + 0x183) = uVar19 * 1000 + -0x18114;
    }
    kfree();
    return NULL;
}


// ===== sym.calibrate_8939.916cf9dcd0ee76622f57297313cdac5e.cfi_jt @ 0x08008438 (size 8) =====

uint64_t sym.calibrate_8939.916cf9dcd0ee76622f57297313cdac5e.cfi_jt(ulong *param_1)

{
    uint32_t arg4;
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int iVar7;
    uint32_t uVar8;
    int64_t iVar9;
    code *pcVar10;
    uint32_t *puVar11;
    int iVar12;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_28 = *(iVar9 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    puVar11 = sym.qfprom_read(*param_1,"calib");
    if (puVar11 < 0xfffffffffffff001) {
        uVar3 = puVar11[0xc];
        uVar5 = puVar11[0xd];
        uVar4 = *puVar11;
        uVar6 = puVar11[1];
        arg4 = uVar3 & 7;
        if (arg4 == 3) {
            uVar2 = puVar11[0x15] >> 8 & 0x20 | puVar11[0x16] >> 0x1b;
            iVar12 = *(param_1 + 1);
            uStack_78 = CONCAT44(uVar3 >> 0x15,uVar3 >> 9) & 0x3f0000003f;
            uStack_70 = CONCAT44(uVar5 >> 0xd,uVar5 >> 1) & 0x3f0000003f;
            uStack_68 = CONCAT44(uVar4 >> 0xe,uVar5 >> 0x19) & 0x3f0000003f;
            uStack_60 = CONCAT44(uVar6 >> 6,uVar4 >> 0x1a) & 0x3fffffffff;
            uStack_58 = CONCAT44(uVar2,uVar6 >> 0x12) & 0xffffffff0000003f;
            if (iVar12 == 0) {
                iVar12 = 0;
            }
            else {
                uVar8 = uVar6 >> 0x18;
                iVar7 = (uVar8 + (uVar3 >> 9 & 0x3f)) * 4;
                uStack_78 = CONCAT44(uStack_78._4_4_,iVar7);
                if (iVar12 == 1) {
                    iVar12 = 1;
                }
                else {
                    uStack_78 = CONCAT44((uVar8 + (uVar3 >> 0x15 & 0x3f)) * 4,iVar7);
                    if (iVar12 == 2) {
                        iVar12 = 2;
                    }
                    else {
                        iVar7 = (uVar8 + (uVar5 >> 1 & 0x3f)) * 4;
                        uStack_70 = CONCAT44(uStack_70._4_4_,iVar7);
                        if (iVar12 == 3) {
                            iVar12 = 3;
                        }
                        else {
                            uStack_70 = CONCAT44((uVar8 + (uVar5 >> 0xd & 0x3f)) * 4,iVar7);
                            if (iVar12 == 4) {
                                iVar12 = 4;
                            }
                            else {
                                iVar7 = (uVar8 + (uVar5 >> 0x19 & 0x3f)) * 4;
                                uStack_68 = CONCAT44(uStack_68._4_4_,iVar7);
                                if (iVar12 == 5) {
                                    iVar12 = 5;
                                }
                                else {
                                    uStack_68 = CONCAT44(((uVar4 >> 0xe & 0x3f) + uVar8) * 4,iVar7);
                                    if (iVar12 == 6) {
                                        iVar12 = 6;
                                    }
                                    else {
                                        iVar7 = (uVar8 + (uVar4 >> 0x1a)) * 4;
                                        uStack_60 = CONCAT44(uStack_60._4_4_,iVar7);
                                        if (iVar12 == 7) {
                                            iVar12 = 7;
                                        }
                                        else {
                                            uStack_60 = CONCAT44(((uVar6 >> 6 & 0x3f) + uVar8) * 4,iVar7);
                                            if (iVar12 == 8) {
                                                iVar12 = 8;
                                            }
                                            else {
                                                iVar7 = ((uVar6 >> 0x12 & 0x3f) + uVar8) * 4;
                                                uStack_58 = CONCAT44(uVar2,iVar7);
                                                if (iVar12 == 9) {
                                                    iVar12 = 9;
                                                }
                                                else {
                                                    uStack_58 = CONCAT44((uVar2 + uVar8) * 4,iVar7);
                                                    if (iVar12 != 10) goto code_r0x0800bb24;
                                                    iVar12 = 10;
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
code_r0x0800b9c4:
            uVar2 = uVar3 >> 0x1b | (uVar5 & 1) << 5;
            uVar8 = puVar11[0x16] >> 0x15;
            uStack_50 = CONCAT44(uVar3 >> 0xf,uVar3 >> 3) & 0x3f0000003f;
            uStack_48 = CONCAT44(uVar5 >> 7,uVar2) & 0x3fffffffff;
            uStack_40 = CONCAT44(uVar4 >> 8,uVar5 >> 0x13) & 0x3f0000003f;
            uStack_38 = CONCAT44(uVar6,uVar4 >> 0x14) & 0x3f0000003f;
            uStack_30 = CONCAT44(uVar8,uVar6 >> 0xc) & 0x3f0000003f;
            if (iVar12 != 0) {
                uVar1 = uVar4 & 0xff;
                iVar7 = (uVar1 + (uVar3 >> 3 & 0x3f)) * 4;
                uStack_50 = CONCAT44(uStack_50._4_4_,iVar7);
                if ((iVar12 != 1) && (uStack_50 = CONCAT44((uVar1 + (uVar3 >> 0xf & 0x3f)) * 4,iVar7), iVar12 != 2)) {
                    iVar7 = (uVar2 + uVar1) * 4;
                    uStack_48 = CONCAT44(uStack_48._4_4_,iVar7);
                    if ((iVar12 != 3) && (uStack_48 = CONCAT44(((uVar5 >> 7 & 0x3f) + uVar1) * 4,iVar7), iVar12 != 4))
                    {
                        iVar7 = ((uVar5 >> 0x13 & 0x3f) + uVar1) * 4;
                        uStack_40 = CONCAT44(uStack_40._4_4_,iVar7);
                        if ((iVar12 != 5) &&
                           (uStack_40 = CONCAT44(((uVar4 >> 8 & 0x3f) + uVar1) * 4,iVar7), iVar12 != 6)) {
                            iVar7 = ((uVar4 >> 0x14 & 0x3f) + uVar1) * 4;
                            uStack_38 = CONCAT44(uStack_38._4_4_,iVar7);
                            if ((iVar12 != 7) &&
                               (uStack_38 = CONCAT44(((uVar6 & 0x3f) + uVar1) * 4,iVar7), iVar12 != 8)) {
                                iVar7 = ((uVar6 >> 0xc & 0x3f) + uVar1) * 4;
                                uStack_30 = CONCAT44(uStack_30._4_4_,iVar7);
                                if (iVar12 != 9) {
                                    uStack_30 = CONCAT44(((uVar8 & 0x3f) + uVar1) * 4,iVar7);
                                    goto joined_r0x0800bad0;
                                }
                            }
                        }
                    }
                }
            }
        }
        else {
            if (arg4 == 2) {
                iVar12 = *(param_1 + 1);
                goto code_r0x0800b9c4;
            }
            iVar12 = *(param_1 + 1);
            if (iVar12 != 0) {
                uStack_50 = CONCAT44(uStack_50._4_4_,500);
                uStack_78 = CONCAT44(uStack_78._4_4_,0x30c);
                if (iVar12 == 1) goto code_r0x0800bad4;
                uStack_50 = 0x1f4000001f4;
                uStack_78 = 0x30c0000030c;
                if (iVar12 == 2) goto code_r0x0800bad4;
                uStack_48 = CONCAT44(uStack_48._4_4_,500);
                uStack_70 = CONCAT44(uStack_70._4_4_,0x30c);
                if (iVar12 == 3) goto code_r0x0800bad4;
                uStack_48 = 0x1f4000001f4;
                uStack_70 = 0x30c0000030c;
                if (iVar12 == 4) goto code_r0x0800bad4;
                uStack_40 = CONCAT44(uStack_40._4_4_,500);
                uStack_68 = CONCAT44(uStack_68._4_4_,0x30c);
                if (iVar12 == 5) goto code_r0x0800bad4;
                uStack_40 = 0x1f4000001f4;
                uStack_68 = 0x30c0000030c;
                if (iVar12 == 6) goto code_r0x0800bad4;
                uStack_38 = CONCAT44(uStack_38._4_4_,500);
                uStack_60 = CONCAT44(uStack_60._4_4_,0x30c);
                if (iVar12 == 7) goto code_r0x0800bad4;
                uStack_38 = 0x1f4000001f4;
                uStack_60 = 0x30c0000030c;
                if (iVar12 == 8) goto code_r0x0800bad4;
                uStack_30 = CONCAT44(uStack_30._4_4_,500);
                uStack_58 = CONCAT44(uStack_58._4_4_,0x30c);
                if (iVar12 == 9) goto code_r0x0800bad4;
                uStack_30 = 0x1f4000001f4;
                uStack_58 = 0x30c0000030c;
joined_r0x0800bad0:
                if (iVar12 != 10) goto code_r0x0800bb24;
            }
        }
code_r0x0800bad4:
        sym.compute_intercept_slope(param_1,&uStack_50,&uStack_78,arg4);
        kfree(puVar11);
        puVar11 = NULL;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_28) {
        return puVar11 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x0800bb24:
    //WARNING: Does not return
    pcVar10 = SoftwareBreakpoint(0x5512,0x800bb28);
    (*pcVar10)();
}


// ===== sym.calibrate_9607.916cf9dcd0ee76622f57297313cdac5e.cfi_jt @ 0x08008440 (size 8) =====

uint64_t sym.calibrate_9607.916cf9dcd0ee76622f57297313cdac5e.cfi_jt(ulong *param_1)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t arg4;
    int64_t iVar4;
    code *pcVar5;
    uint32_t *puVar6;
    int iVar7;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_58;
    ulong uStack_50;
    uint32_t uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    uint32_t uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    uStack_30 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_48 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    puVar6 = sym.qfprom_read(*param_1,"calib");
    if (puVar6 < 0xfffffffffffff001) {
        arg4 = puVar6[2] >> 0x14 & 7;
        if (arg4 == 3) {
            uVar3 = *puVar6 >> 0x1a;
            uStack_58 = CONCAT44(uVar3,*puVar6 >> 0xe) & 0xffffffff0000003f;
            uStack_50 = CONCAT44(puVar6[1] >> 0x12,puVar6[1] >> 6) & 0x3f0000003f;
            uStack_48 = puVar6[2] >> 6 & 0x3f;
            iVar7 = *(param_1 + 1);
            if (iVar7 != 0) {
                uVar1 = puVar6[2] >> 0xc & 0xff;
                iVar2 = ((*puVar6 >> 0xe & 0x3f) + uVar1) * 4;
                uStack_58 = CONCAT44(uVar3,iVar2);
                if ((iVar7 != 1) && (uStack_58 = CONCAT44((uVar3 + uVar1) * 4,iVar2), iVar7 != 2)) {
                    iVar2 = ((puVar6[1] >> 6 & 0x3f) + uVar1) * 4;
                    uStack_50 = CONCAT44(uStack_50._4_4_,iVar2);
                    if ((iVar7 != 3) &&
                       ((uStack_50 = CONCAT44(((puVar6[1] >> 0x12 & 0x3f) + uVar1) * 4,iVar2), iVar7 != 4 &&
                        (uStack_48 = (uStack_48 + uVar1) * 4, iVar7 != 5)))) goto code_r0x0800c5c4;
                }
            }
code_r0x0800c458:
            uVar3 = *puVar6 >> 8;
            uStack_40 = CONCAT44(*puVar6 >> 0x14,uVar3) & 0x3f0000003f;
            uStack_38 = CONCAT44(puVar6[1] >> 0xc,puVar6[1]) & 0x3f0000003f;
            uStack_30 = puVar6[2] & 0x3f;
            if (iVar7 != 0) {
                uVar1 = *puVar6 & 0xff;
                iVar2 = ((uVar3 & 0x3f) + uVar1) * 4;
                uStack_40 = CONCAT44(uStack_40._4_4_,iVar2);
                if ((iVar7 != 1) && (uStack_40 = CONCAT44(((*puVar6 >> 0x14 & 0x3f) + uVar1) * 4,iVar2), iVar7 != 2))
                {
                    iVar2 = ((puVar6[1] & 0x3f) + uVar1) * 4;
                    uStack_38 = CONCAT44(uStack_38._4_4_,iVar2);
                    if ((iVar7 != 3) &&
                       (uStack_38 = CONCAT44(((puVar6[1] >> 0xc & 0x3f) + uVar1) * 4,iVar2), iVar7 != 4)) {
                        uStack_30 = (uStack_30 + uVar1) * 4;
                        goto joined_r0x0800c4fc;
                    }
                }
            }
        }
        else {
            if (arg4 == 2) {
                iVar7 = *(param_1 + 1);
                goto code_r0x0800c458;
            }
            iVar7 = *(param_1 + 1);
            if (iVar7 != 0) {
                uStack_40 = CONCAT44(uStack_40._4_4_,500);
                uStack_58 = CONCAT44(uStack_58._4_4_,0x30c);
                if (iVar7 == 1) goto code_r0x0800c574;
                uStack_40 = 0x1f4000001f4;
                uStack_58 = 0x30c0000030c;
                if (iVar7 == 2) goto code_r0x0800c574;
                uStack_38 = CONCAT44(uStack_38._4_4_,500);
                uStack_50 = CONCAT44(uStack_50._4_4_,0x30c);
                if (iVar7 == 3) goto code_r0x0800c574;
                uStack_38 = 0x1f4000001f4;
                uStack_50 = 0x30c0000030c;
                if (iVar7 == 4) goto code_r0x0800c574;
                uStack_30 = 500;
                uStack_48 = 0x30c;
joined_r0x0800c4fc:
                if (iVar7 != 5) goto code_r0x0800c5c4;
            }
        }
code_r0x0800c574:
        sym.compute_intercept_slope(param_1,&uStack_40,&uStack_58,arg4);
        kfree(puVar6);
        puVar6 = NULL;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_28) {
        return puVar6 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x0800c5c4:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x800c5c8);
    (*pcVar5)();
}


// ===== sym.calibrate_v1.63e194274b828a34256b804ef434b7e3.cfi_jt @ 0x08008448 (size 8) =====

uint64_t sym.calibrate_v1.63e194274b828a34256b804ef434b7e3.cfi_jt(ulong *param_1)

{
    uint32_t arg4;
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    code *pcVar6;
    uint32_t *puVar7;
    int iVar8;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    puVar7 = sym.qfprom_read(*param_1,"calib");
    if (puVar7 < 0xfffffffffffff001) {
        arg4 = puVar7[4] & 7;
        if (arg4 == 3) {
            uStack_78 = CONCAT44(*puVar7 >> 0x12,*puVar7 >> 6) & 0x3f0000003f;
            uVar4 = *puVar7 >> 0x1e | (puVar7[1] & 0xf) << 2;
            uStack_70 = CONCAT44(puVar7[1] >> 10,uVar4) & 0x3fffffffff;
            uStack_68 = CONCAT44(puVar7[2] >> 6,puVar7[1] >> 0x16) & 0x3f0000003f;
            uVar1 = puVar7[2] >> 0x1e | (puVar7[3] & 0xf) << 2;
            uStack_60 = CONCAT44(uVar1,puVar7[2] >> 0x12) & 0xffffffff0000003f;
            iVar8 = *(param_1 + 1);
            uStack_58 = CONCAT44(puVar7[3] >> 0x16,puVar7[3] >> 10) & 0x3f0000003f;
            if (iVar8 != 0) {
                uVar3 = puVar7[4] >> 0xb & 0xff;
                iVar2 = ((*puVar7 >> 6 & 0x3f) + uVar3) * 4;
                uStack_78 = CONCAT44(uStack_78._4_4_,iVar2);
                if ((iVar8 != 1) && (uStack_78 = CONCAT44(((*puVar7 >> 0x12 & 0x3f) + uVar3) * 4,iVar2), iVar8 != 2))
                {
                    iVar2 = (uVar4 + uVar3) * 4;
                    uStack_70 = CONCAT44(uStack_70._4_4_,iVar2);
                    if ((iVar8 != 3) &&
                       (uStack_70 = CONCAT44(((puVar7[1] >> 10 & 0x3f) + uVar3) * 4,iVar2), iVar8 != 4)) {
                        iVar2 = ((puVar7[1] >> 0x16 & 0x3f) + uVar3) * 4;
                        uStack_68 = CONCAT44(uStack_68._4_4_,iVar2);
                        if ((iVar8 != 5) &&
                           (uStack_68 = CONCAT44(((puVar7[2] >> 6 & 0x3f) + uVar3) * 4,iVar2), iVar8 != 6)) {
                            iVar2 = ((puVar7[2] >> 0x12 & 0x3f) + uVar3) * 4;
                            uStack_60 = CONCAT44(uVar1,iVar2);
                            if ((iVar8 != 7) && (uStack_60 = CONCAT44((uVar1 + uVar3) * 4,iVar2), iVar8 != 8)) {
                                iVar2 = ((puVar7[3] >> 10 & 0x3f) + uVar3) * 4;
                                uStack_58 = CONCAT44(uStack_58._4_4_,iVar2);
                                if ((iVar8 != 9) &&
                                   (uStack_58 = CONCAT44(((puVar7[3] >> 0x16 & 0x3f) + uVar3) * 4,iVar2), iVar8 != 10)
                                   ) goto code_r0x0800aaa8;
                            }
                        }
                    }
                }
            }
code_r0x0800a838:
            uStack_50 = CONCAT44(*puVar7 >> 0xc,*puVar7) & 0x3f0000003f;
            uStack_48 = CONCAT44(puVar7[1] >> 4,*(puVar7 + 3)) & 0x3f0000003f;
            uStack_40 = CONCAT44(puVar7[2],*(puVar7 + 6)) & 0x3f0000003f;
            uStack_38 = CONCAT14(*(puVar7 + 0xb),puVar7[2] >> 0xc) & 0x3f0000003f;
            uStack_30 = CONCAT24(*(puVar7 + 0xe),puVar7[3] >> 4) & 0x3f0000003f;
            if (iVar8 != 0) {
                uVar4 = puVar7[4] >> 3 & 0xff;
                iVar2 = ((*puVar7 & 0x3f) + uVar4) * 4;
                uStack_50 = CONCAT44(uStack_50._4_4_,iVar2);
                if ((iVar8 != 1) && (uStack_50 = CONCAT44(((*puVar7 >> 0xc & 0x3f) + uVar4) * 4,iVar2), iVar8 != 2)) {
                    iVar2 = ((*(puVar7 + 3) & 0x3f) + uVar4) * 4;
                    uStack_48 = CONCAT44(uStack_48._4_4_,iVar2);
                    if ((iVar8 != 3) &&
                       (uStack_48 = CONCAT44(((puVar7[1] >> 4 & 0x3f) + uVar4) * 4,iVar2), iVar8 != 4)) {
                        iVar2 = ((*(puVar7 + 6) & 0x3f) + uVar4) * 4;
                        uStack_40 = CONCAT44(uStack_40._4_4_,iVar2);
                        if ((iVar8 != 5) && (uStack_40 = CONCAT44(((puVar7[2] & 0x3f) + uVar4) * 4,iVar2), iVar8 != 6)
                           ) {
                            iVar2 = ((puVar7[2] >> 0xc & 0x3f) + uVar4) * 4;
                            uStack_38 = CONCAT44(uStack_38._4_4_,iVar2);
                            if ((iVar8 != 7) &&
                               (uStack_38 = CONCAT44(((*(puVar7 + 0xb) & 0x3f) + uVar4) * 4,iVar2), iVar8 != 8)) {
                                iVar2 = ((puVar7[3] >> 4 & 0x3f) + uVar4) * 4;
                                uStack_30 = CONCAT44(uStack_30._4_4_,iVar2);
                                if (iVar8 != 9) {
                                    uStack_30 = CONCAT44(((*(puVar7 + 0xe) & 0x3f) + uVar4) * 4,iVar2);
                                    goto joined_r0x0800a980;
                                }
                            }
                        }
                    }
                }
            }
        }
        else {
            if (arg4 == 2) {
                iVar8 = *(param_1 + 1);
                goto code_r0x0800a838;
            }
            iVar8 = *(param_1 + 1);
            if (iVar8 != 0) {
                uStack_50 = CONCAT44(uStack_50._4_4_,500);
                uStack_78 = CONCAT44(uStack_78._4_4_,0x30c);
                if (iVar8 == 1) goto code_r0x0800aa58;
                uStack_50 = 0x1f4000001f4;
                uStack_78 = 0x30c0000030c;
                if (iVar8 == 2) goto code_r0x0800aa58;
                uStack_48 = CONCAT44(uStack_48._4_4_,500);
                uStack_70 = CONCAT44(uStack_70._4_4_,0x30c);
                if (iVar8 == 3) goto code_r0x0800aa58;
                uStack_48 = 0x1f4000001f4;
                uStack_70 = 0x30c0000030c;
                if (iVar8 == 4) goto code_r0x0800aa58;
                uStack_40 = CONCAT44(uStack_40._4_4_,500);
                uStack_68 = CONCAT44(uStack_68._4_4_,0x30c);
                if (iVar8 == 5) goto code_r0x0800aa58;
                uStack_40 = 0x1f4000001f4;
                uStack_68 = 0x30c0000030c;
                if (iVar8 == 6) goto code_r0x0800aa58;
                uStack_38 = CONCAT44(uStack_38._4_4_,500);
                uStack_60 = CONCAT44(uStack_60._4_4_,0x30c);
                if (iVar8 == 7) goto code_r0x0800aa58;
                uStack_38 = 0x1f4000001f4;
                uStack_60 = 0x30c0000030c;
                if (iVar8 == 8) goto code_r0x0800aa58;
                uStack_30 = CONCAT44(uStack_30._4_4_,500);
                uStack_58 = CONCAT44(uStack_58._4_4_,0x30c);
                if (iVar8 == 9) goto code_r0x0800aa58;
                uStack_30 = 0x1f4000001f4;
                uStack_58 = 0x30c0000030c;
joined_r0x0800a980:
                if (iVar8 != 10) goto code_r0x0800aaa8;
            }
        }
code_r0x0800aa58:
        sym.compute_intercept_slope(param_1,&uStack_50,&uStack_78,arg4);
        kfree(puVar7);
        puVar7 = NULL;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return puVar7 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x0800aaa8:
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x5512,0x800aaac);
    (*pcVar6)();
}


// ===== sym.calibrate_8974.916cf9dcd0ee76622f57297313cdac5e.cfi_jt @ 0x08008450 (size 8) =====

uint64_t sym.calibrate_8974.916cf9dcd0ee76622f57297313cdac5e.cfi_jt(ulong *param_1)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    code *pcVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    uint32_t arg4;
    uint32_t uVar10;
    uint32_t uVar11;
    int iVar12;
    uint32_t *puVar13;
    uint32_t uVar14;
    int64_t iVar15;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    uint32_t uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    uint32_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    iStack_38 = *(iVar15 + 0x5e0);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_98 = 0;
    puVar8 = sym.qfprom_read(*param_1,"calib");
    if (puVar8 < 0xfffffffffffff001) {
        puVar9 = sym.qfprom_read(*param_1,"calib_backup");
        if (puVar9 < 0xfffffffffffff001) {
            if (puVar9[1] >> 0x1d == 3) {
                uVar10 = 0;
                arg4 = puVar8[5] >> 0x1c & 4 | puVar8[4] >> 0x1e;
                if (arg4 - 1 < 2) {
code_r0x0800bc7c:
                    uVar11 = *puVar9;
                    iVar15 = 0xc;
                    uStack_68 = CONCAT44(*puVar9 >> 0xe,uVar11 >> 8);
                    uStack_60 = CONCAT44(*puVar9 >> 0x1a,*puVar9 >> 0x14);
                    uStack_58 = CONCAT44(puVar9[1] >> 6,puVar9[1]);
                    uStack_50 = CONCAT44(puVar9[1] >> 0x12,puVar9[1] >> 0xc);
                    uVar2 = 0;
                    puVar13 = puVar9 + 2;
                    uVar14 = *puVar13 >> 6;
                    goto code_r0x0800be1c;
                }
                if (arg4 == 3) {
                    uVar10 = puVar9[2] >> 0x12 & 0x3f;
                    uStack_98 = CONCAT44(puVar9[3],puVar9[2] >> 0x1a) & 0x3fffffffff;
                    uStack_90 = CONCAT44(puVar9[3] >> 0xc,puVar9[3] >> 6) & 0x3f0000003f;
                    uStack_88 = CONCAT14(*(puVar8 + 0x13),puVar9[3] >> 0x12) & 0x3f0000003f;
                    uStack_80 = CONCAT44(puVar8[5] >> 6,puVar8[5]) & 0x3f0000003f;
                    uStack_78 = CONCAT44(puVar8[5] >> 0x12,puVar8[5] >> 0xc) & 0x3f0000003f;
                    uStack_70 = *(puVar8 + 0x17) & 0x3f;
                    goto code_r0x0800bc7c;
                }
code_r0x0800beb8:
                uVar11 = 0;
                uVar10 = uVar11;
                if (arg4 == 1) goto code_r0x0800bec4;
code_r0x0800be44:
                if (arg4 == 2) {
                    iVar12 = *(param_1 + 1);
                    if ((iVar12 != 0) &&
                       (uStack_68 = CONCAT44(uStack_68._4_4_,(uStack_68 + uVar11) * 4) | 3, iVar12 != 1)) {
code_r0x0800c1c0:
                        uStack_68 = CONCAT44((uStack_68._4_4_ + uVar11) * 4,uStack_68) | 0x300000000;
                        if (iVar12 != 2) {
                            iVar1 = uStack_60._4_4_;
                            uStack_60 = CONCAT44(uStack_60._4_4_,(uStack_60 + uVar11) * 4) | 3;
                            if (iVar12 != 3) {
                                uStack_60 = CONCAT44((iVar1 + uVar11) * 4,uStack_60) | 0x300000000;
                                if (iVar12 != 4) {
                                    iVar1 = uStack_58._4_4_;
                                    uStack_58 = CONCAT44(uStack_58._4_4_,(uStack_58 + uVar11) * 4) | 3;
                                    if (iVar12 != 5) {
                                        uStack_58 = CONCAT44((iVar1 + uVar11) * 4,uStack_58) | 0x300000000;
                                        if (iVar12 != 6) {
                                            iVar1 = uStack_50._4_4_;
                                            uStack_50 = CONCAT44(uStack_50._4_4_,(uStack_50 + uVar11) * 4) | 3;
                                            if (iVar12 != 7) {
                                                uStack_50 = CONCAT44((iVar1 + uVar11) * 4,uStack_50) | 0x300000000;
                                                if (iVar12 != 8) {
                                                    iVar1 = uStack_48._4_4_;
                                                    uStack_48 = CONCAT44(uStack_48._4_4_,(uStack_48 + uVar11) * 4) | 3;
                                                    if (iVar12 != 9) {
                                                        uStack_48 = CONCAT44((iVar1 + uVar11) * 4,uStack_48) |
                                                                    0x300000000;
                                                        if (iVar12 != 10) {
                                                            uStack_40 = (uStack_40 + uVar11) * 4 | 3;
                                                            goto joined_r0x0800bfac;
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
                }
                else {
                    iVar1 = uStack_98._4_4_;
                    iVar3 = uStack_90._4_4_;
                    iVar4 = uStack_88._4_4_;
                    iVar5 = uStack_80._4_4_;
                    iVar6 = uStack_78._4_4_;
                    if (arg4 == 3) {
                        iVar12 = *(param_1 + 1);
                        if (iVar12 != 0) {
                            uStack_98 = CONCAT44(uStack_98._4_4_,(uStack_98 + uVar10) * 4) | 3;
                            if (iVar12 != 1) {
                                uStack_98 = CONCAT44((iVar1 + uVar10) * 4,uStack_98) | 0x300000000;
                                if (iVar12 != 2) {
                                    uStack_90 = CONCAT44(uStack_90._4_4_,(uStack_90 + uVar10) * 4) | 3;
                                    if (iVar12 != 3) {
                                        uStack_90 = CONCAT44((iVar3 + uVar10) * 4,uStack_90) | 0x300000000;
                                        if (iVar12 != 4) {
                                            uStack_88 = CONCAT44(uStack_88._4_4_,(uStack_88 + uVar10) * 4) | 3;
                                            if (iVar12 != 5) {
                                                uStack_88 = CONCAT44((iVar4 + uVar10) * 4,uStack_88) | 0x300000000;
                                                if (iVar12 != 6) {
                                                    uStack_80 = CONCAT44(uStack_80._4_4_,(uStack_80 + uVar10) * 4) | 3;
                                                    if (iVar12 != 7) {
                                                        uStack_80 = CONCAT44((iVar5 + uVar10) * 4,uStack_80) |
                                                                    0x300000000;
                                                        if (iVar12 != 8) {
                                                            uStack_78 = CONCAT44(uStack_78._4_4_,
                                                                                 (uStack_78 + uVar10) * 4) | 3;
                                                            if (iVar12 != 9) {
                                                                uStack_78 = CONCAT44((iVar6 + uVar10) * 4,uStack_78) |
                                                                            0x300000000;
                                                                if ((iVar12 != 10) &&
                                                                   (uStack_70 = (uStack_70 + uVar10) * 4 | 3,
                                                                   iVar12 != 0xb)) goto code_r0x0800c334;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                uStack_68 = CONCAT44(uStack_68._4_4_,(uStack_68 + uVar11) * 4) | 3;
                                goto code_r0x0800c1c0;
                            }
                            uStack_68 = CONCAT44(uStack_68._4_4_,(uStack_68 + uVar11) * 4) | 3;
                        }
                    }
                    else {
                        iVar12 = *(param_1 + 1);
                        if ((((((iVar12 != 0) && (uStack_98 = CONCAT44(uStack_98._4_4_,0x30c), iVar12 != 1)) &&
                              (uStack_98 = 0x30c0000030c, iVar12 != 2)) &&
                             (((uStack_90 = CONCAT44(uStack_90._4_4_,0x30c), iVar12 != 3 &&
                               (uStack_90 = 0x30c0000030c, iVar12 != 4)) &&
                              ((uStack_88 = CONCAT44(uStack_88._4_4_,0x30c), iVar12 != 5 &&
                               ((uStack_88 = 0x30c0000030c, iVar12 != 6 &&
                                (uStack_80 = CONCAT44(uStack_80._4_4_,0x30c), iVar12 != 7)))))))) &&
                            (uStack_80 = 0x30c0000030c, iVar12 != 8)) &&
                           (((uStack_78 = CONCAT44(uStack_78._4_4_,0x30c), iVar12 != 9 &&
                             (uStack_78 = 0x30c0000030c, iVar12 != 10)) && (uStack_70 = 0x30c, iVar12 != 0xb))))
                        goto code_r0x0800c334;
                        uStack_68 = 0x1fd000001f6;
                        uStack_60 = 0x1fd000001f7;
                        uStack_58 = 0x1fd000001f9;
                        uStack_50 = 0x1fe000001fb;
                        uStack_48 = 0x1fd000001fc;
                        uStack_40 = 0x1fc;
                    }
                }
            }
            else {
                uVar10 = 0;
                arg4 = puVar8[3] >> 0x1c & 4 | puVar8[1] >> 0x1e;
                if (1 < arg4 - 1) {
                    if (arg4 != 3) goto code_r0x0800beb8;
                    uVar10 = puVar8[2] >> 0xc & 0xff;
                    uStack_98 = CONCAT44(puVar8[2] >> 0x1a,puVar8[2] >> 0x14) & 0xffffffff0000003f;
                    uStack_90 = CONCAT44(puVar8[3] >> 6,puVar8[3]) & 0x3f0000003f;
                    uStack_88 = CONCAT44(puVar8[3] >> 0x12,puVar8[3] >> 0xc) & 0x3f0000003f;
                    uStack_80 = CONCAT44(puVar8[4],*(puVar8 + 0xf)) & 0x3f0000003f;
                    uStack_78 = CONCAT44(puVar8[4] >> 0xc,puVar8[4] >> 6) & 0x3f0000003f;
                    uStack_70 = puVar8[4] >> 0x12 & 0x3f;
                }
                uVar11 = *puVar8;
                iVar15 = 6;
                uStack_68 = CONCAT44(*puVar8 >> 0xe,uVar11 >> 8);
                uStack_60 = CONCAT44(*puVar8 >> 0x1a,*puVar8 >> 0x14);
                uStack_58 = CONCAT44(puVar8[1] >> 6,puVar8[1]);
                uStack_50 = CONCAT44(puVar8[1] >> 0x12,puVar8[1] >> 0xc);
                uVar2 = *(puVar8 + 7) & 0x3f;
                puVar13 = puVar8 + 2;
                uVar14 = *puVar13;
code_r0x0800be1c:
                uStack_60 = uStack_60 & 0xffffffff0000003f;
                uStack_50 = uStack_50 & 0x3f0000003f;
                uStack_58 = uStack_58 & 0x3f0000003f;
                uStack_68 = uStack_68 & 0x3f0000003f;
                uStack_48 = CONCAT44(uVar14,uVar2) & 0x3fffffffff;
                uStack_40 = *puVar13 >> iVar15 & 0x3f;
                uVar11 = uVar11 & 0xff;
                if (arg4 != 1) goto code_r0x0800be44;
code_r0x0800bec4:
                iVar12 = *(param_1 + 1);
                if (iVar12 != 0) {
                    uVar10 = uVar11 << 2 | 3;
                    iVar1 = uStack_68 + uVar10;
                    uStack_68 = CONCAT44(uStack_68._4_4_,iVar1);
                    if ((iVar12 == 1) || (uStack_68 = CONCAT44(uStack_68._4_4_ + uVar10,iVar1), iVar12 == 2))
                    goto code_r0x0800c2d8;
                    iVar1 = uStack_60 + uVar10;
                    uStack_60 = CONCAT44(uStack_60._4_4_,iVar1);
                    if ((iVar12 == 3) || (uStack_60 = CONCAT44(uStack_60._4_4_ + uVar10,iVar1), iVar12 == 4))
                    goto code_r0x0800c2d8;
                    iVar1 = uStack_58 + uVar10;
                    uStack_58 = CONCAT44(uStack_58._4_4_,iVar1);
                    if ((iVar12 == 5) || (uStack_58 = CONCAT44(uStack_58._4_4_ + uVar10,iVar1), iVar12 == 6))
                    goto code_r0x0800c2d8;
                    iVar1 = uStack_50 + uVar10;
                    uStack_50 = CONCAT44(uStack_50._4_4_,iVar1);
                    if ((iVar12 == 7) || (uStack_50 = CONCAT44(uStack_50._4_4_ + uVar10,iVar1), iVar12 == 8))
                    goto code_r0x0800c2d8;
                    iVar1 = uStack_48 + uVar10;
                    uStack_48 = CONCAT44(uStack_48._4_4_,iVar1);
                    if ((iVar12 == 9) || (uStack_48 = CONCAT44(uStack_48._4_4_ + uVar10,iVar1), iVar12 == 10))
                    goto code_r0x0800c2d8;
                    uStack_40 = uStack_40 + uVar10;
joined_r0x0800bfac:
                    if (iVar12 != 0xb) goto code_r0x0800c334;
                }
            }
code_r0x0800c2d8:
            sym.compute_intercept_slope(param_1,&uStack_68,&uStack_98,arg4);
            kfree(puVar8);
            kfree(puVar9);
            puVar8 = NULL;
        }
        else {
            kfree(puVar8);
            puVar8 = puVar9 & 0xffffffff;
        }
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_38) {
        return puVar8 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x0800c334:
    //WARNING: Does not return
    pcVar7 = SoftwareBreakpoint(0x5512,0x800c338);
    (*pcVar7)();
}


// ===== sym.tsens_probe.6be98f0982e4f5249d656332c33b156d.cfi_jt @ 0x08008458 (size 8) =====

code * sym.tsens_probe.6be98f0982e4f5249d656332c33b156d.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    ulong *arg1;
    uint64_t uVar6;
    char *pcVar7;
    uint uVar8;
    int64_t *piVar9;
    ulong uVar10;
    ulong *in_x18;
    ulong *unaff_x19;
    code *pcVar11;
    code *pcVar12;
    code *pcVar13;
    code *pcVar14;
    uint *puVar15;
    ulong unaff_x30;
    uint32_t uStack_70;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    uStack_70 = 0;
    if (*(param_1 + 0x300) == 0) {
        pcVar11 = *(param_1 + 0x70);
    }
    else {
        pcVar11 = param_1 + 0x10;
    }
    pcVar12 = *(pcVar11 + 0x2f0);
    iVar5 = of_match_node(obj.tsens_table,pcVar12);
    if (iVar5 == 0) {
        pcVar14 = obj.data_8960;
    }
    else {
        pcVar14 = *(iVar5 + 0xc0);
    }
    uStack_70 = *pcVar14;
    if (pcVar12 != NULL) {
        of_property_read_variable_u32_array(pcVar12,"#qcom,sensors",&uStack_70,1,0);
    }
    if (uStack_70 == 0) {
        _dev_err(pcVar11,"%s: invalid number of sensors\n","tsens_probe");
        pcVar13 = 0xffffffea;
        goto code_r0x0800918c;
    }
    arg1 = devm_kmalloc(pcVar11,uStack_70 * 0x28 + 0xa78,0xdc0);
    if (arg1 == NULL) {
        pcVar13 = 0xfffffff4;
        goto code_r0x0800918c;
    }
    *arg1 = pcVar11;
    *(arg1 + 1) = uStack_70;
    piVar9 = *(pcVar14 + 8);
    arg1[0x148] = piVar9;
    if (uStack_70 != 0) {
        uVar3 = 0;
        do {
            iVar5 = uVar3;
            uVar2 = uVar3;
            if (*(pcVar14 + 0x10) != 0) {
                uVar2 = *(*(pcVar14 + 0x10) + iVar5 * 4);
            }
            uVar3 = uVar3 + 1;
            *(arg1 + iVar5 * 5 + 0x153) = 0x80000000;
            uVar1 = *(arg1 + 1);
            *(arg1 + iVar5 * 0x28 + 0xa8c) = uVar2;
        } while (uVar3 < uVar1);
        piVar9 = arg1[0x148];
    }
    arg1[0x146] = *(pcVar14 + 0x18);
    uVar10 = *(pcVar14 + 0x20);
    *(param_1 + 0xa8) = arg1;
    arg1[0x147] = uVar10;
    if (((piVar9 == NULL) || (pcVar13 = *piVar9, pcVar13 == NULL)) || (piVar9[2] == 0)) {
        pcVar13 = 0xffffffea;
        unaff_x19 = arg1;
        goto code_r0x0800918c;
    }
    pcVar14 = sym.__typeid__ZTSFiP10tsens_privE_global_addr;
    if (9 < (pcVar13 + -0x8008408 >> 3 | pcVar13 << 0x3d)) goto code_r0x08009474;
    do {
        uVar3 = (*pcVar13)(arg1);
        unaff_x19 = arg1;
        if (uVar3 < 0) {
            pcVar13 = uVar3;
            pcVar7 = "%s: init failed\n";
code_r0x0800945c:
            _dev_err(pcVar11,pcVar7,"tsens_probe");
        }
        else {
            pcVar13 = *(arg1[0x148] + 8);
            if (pcVar13 != NULL) {
                if (9 < (pcVar13 - pcVar14 >> 3 | pcVar13 - pcVar14 << 0x3d)) {
                    __cfi_slowpath_diag(0x6ae5c9c5338877c9,pcVar13,0x8000300);
                }
                uVar3 = (*pcVar13)(arg1);
                if (uVar3 < 0) {
                    pcVar13 = uVar3;
                    if (uVar3 != 0xfffffdfb) {
                        pcVar7 = "%s: calibration failed\n";
                        goto code_r0x0800945c;
                    }
                    goto code_r0x0800918c;
                }
            }
            uVar10 = thermal_minidump_register(*pcVar12);
            arg1[0x14e] = uVar10;
            uStack_6c = 0;
            if (*(arg1 + 1) != 0) {
                uVar3 = 0;
                iVar5 = sp_el0;
                pcVar11 = reloc.tsens_get_temp.6be98f0982e4f5249d656332c33b156d.cfi_jt;
                pcVar14 = sym.__typeid__ZTSFiPK12tsens_sensorPiE_global_addr;
                do {
                    pcVar12 = arg1 + uVar3 * 5 + 0x14f;
                    arg1[uVar3 * 5 + 0x14f] = arg1;
                    puVar15 = arg1 + uVar3 * 0x28 + 0xa8c;
                    uVar6 = devm_thermal_zone_of_sensor_register
                                      (*arg1,*puVar15,pcVar12,
                                       reloc.tsens_get_temp.6be98f0982e4f5249d656332c33b156d.cfi_jt);
                    if (uVar6 < 0xfffffffffffff001) {
                        pcVar13 = *(arg1[0x148] + 0x10);
                        if (pcVar13 != NULL) {
                            if (1 < (pcVar13 + -0x8008368 >> 3 | pcVar13 << 0x3d)) {
                                __cfi_slowpath_diag(0xcd81341d85989151,pcVar13,0x8000320);
                            }
                            iVar4 = (*pcVar13)(pcVar12,&uStack_6c);
                            if (iVar4 != 0) {
                                _dev_err(*arg1,"[%u] %s: error reading sensor\n",*puVar15,"tsens_register");
                                goto code_r0x08009208;
                            }
                            if (arg1[0x14d] != 0) {
                                ipc_log_string(arg1[0x14d],"%s: Sensor_id: %d name:%s temp: %d [%s]\n",
                                               "tsens_register",*puVar15,uVar6 + 4,uStack_6c,iVar5 + 0x7a8);
                            }
                        }
                        arg1[uVar3 * 5 + 0x150] = uVar6;
                        pcVar12 = *(arg1[0x148] + 0x18);
                        if (pcVar12 != NULL) {
                            if (pcVar12 != sym.__typeid__ZTSFiP10tsens_priviE_global_addr) {
                                __cfi_slowpath_diag(0x63db24e19c6eed61,pcVar12,0x8000340);
                            }
                            (*pcVar12)(arg1,uVar3);
                        }
                    }
code_r0x08009208:
                    uVar3 = uVar3 + 1;
                } while (uVar3 < *(arg1 + 1));
            }
            if (*arg1[0x146] == 0) {
                if ((*(*(arg1[0x14f] + 0xa30) + 4) >> 1 & 1) == 0) {
                    uVar8 = 0x4b0;
                }
                else {
                    uVar6 = (*(arg1 + 0x151) + *(arg1 + 0x152) * 0x78) / 1000;
                    uVar8 = uVar6;
                    if (0x3fe < uVar6) {
                        uVar8 = 0x3ff;
                    }
                }
                regmap_field_update_bits_base(arg1[0x10e],0xffffffff,uVar8,0,0,0);
                uVar8 = 0;
                if (((*(*(arg1[0x14f] + 0xa30) + 4) >> 1 & 1) != 0) &&
                   (uVar8 = *(arg1 + 0x151) / 1000, 0x3fe < *(arg1 + 0x151) / 1000)) {
                    uVar8 = 0x3ff;
                }
                regmap_field_update_bits_base(arg1[0x10f],0xffffffff,uVar8,0,0,0);
            }
            uVar3 = sym.tsens_register_irq(arg1,0x80005b0,0x80083e8);
            pcVar13 = uVar3;
            if ((-1 < uVar3) && ((*(arg1[0x146] + 4) & 1) != 0)) {
                uVar6 = sym.tsens_register_irq(arg1,0x80007b8,0x80083e0);
                pcVar13 = uVar6 & 0xffffffff;
            }
        }
code_r0x0800918c:
        iVar5 = sp_el0;
        if (*(iVar5 + 0x5e0) == iStack_68) {
            return pcVar13;
        }
        __stack_chk_fail();
        arg1 = unaff_x19;
code_r0x08009474:
        __cfi_slowpath_diag(0x6ae5c9c5338877c9,pcVar13,0x80002e0);
    } while( true );
}


// ===== sym.tsens_remove.6be98f0982e4f5249d656332c33b156d.cfi_jt @ 0x08008460 (size 8) =====

ulong sym.tsens_remove.6be98f0982e4f5249d656332c33b156d.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0xa8);
    debugfs_remove(*(iVar2 + 0xa48));
    regmap_field_update_bits_base(*(iVar2 + 0x68),0xffffffff,0,0,0,0);
    pcVar1 = *(*(iVar2 + 0xa40) + 0x20);
    if (pcVar1 != NULL) {
        if (pcVar1 != sym.__typeid__ZTSFvP10tsens_privE_global_addr) {
            __cfi_slowpath_diag(0x3846a8bf9ce54a76,pcVar1,0x80003a0);
        }
        (*pcVar1)(iVar2);
    }
    thermal_minidump_unregister(*(iVar2 + 0xa70));
    return 0;
}


// ===== sym.qfprom_read @ 0x08008468 (size 136) =====

uint64_t sym.qfprom_read(ulong param_1,ulong param_2,int64_t param_3,int param_4)

{
    int *piVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auVar7 [16];
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    uStack_30 = 0;
    uVar2 = nvmem_cell_get();
    uVar3 = uVar2;
    if (uVar2 < 0xfffffffffffff001) {
        uVar3 = nvmem_cell_read(uVar2,&uStack_30);
        nvmem_cell_put(uVar2);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    auVar7 = __stack_chk_fail();
    uVar3 = auVar7._0_8_;
    if (*(uVar3 + 8) != 0) {
        uVar4 = 0;
        do {
            iVar5 = uVar3 + uVar4 * 0x28;
            iVar6 = *(iVar5 + 0xa90);
            piVar1 = iVar5 + 0xa90;
            if (iVar6 == 0) {
                iVar6 = 0xc80;
                *piVar1 = 0xc80;
            }
            iVar5 = uVar4;
            if (param_4 == 3) {
                iVar6 = ((*(param_3 + iVar5 * 4) - *(auVar7._8_8_ + iVar5 * 4)) * 1000) / 0x5a;
                *piVar1 = iVar6;
            }
            uVar4 = uVar4 + 1;
            *(uVar3 + iVar5 * 0x28 + 0xa88) = iVar6 * -0x1e + *(auVar7._8_8_ + iVar5 * 4) * 1000;
        } while (uVar4 < *(uVar3 + 8));
    }
    return uVar3;
}


// ===== sym.compute_intercept_slope @ 0x080084f0 (size 168) =====

void sym.compute_intercept_slope(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    int *piVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int iVar4;
    
    if (*(arg1 + 8) != 0) {
        uVar2 = 0;
        do {
            iVar3 = arg1 + uVar2 * 0x28;
            iVar4 = *(iVar3 + 0xa90);
            piVar1 = iVar3 + 0xa90;
            if (iVar4 == 0) {
                iVar4 = 0xc80;
                *piVar1 = 0xc80;
            }
            iVar3 = uVar2;
            if (arg4 == 3) {
                iVar4 = ((*(arg3 + iVar3 * 4) - *(arg2 + iVar3 * 4)) * 1000) / 0x5a;
                *piVar1 = iVar4;
            }
            uVar2 = uVar2 + 1;
            *(arg1 + iVar3 * 0x28 + 0xa88) = iVar4 * -0x1e + *(arg2 + iVar3 * 4) * 1000;
        } while (uVar2 < *(arg1 + 8));
    }
    return;
}


// ===== sym.get_temp_tsens_valid @ 0x08008598 (size 660) =====

void sym.get_temp_tsens_valid(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong *puVar2;
    int iVar3;
    int iVar4;
    code *pcVar5;
    int iVar6;
    int64_t iVar7;
    int64_t iVar8;
    int iVar9;
    ulong *in_x18;
    int64_t iVar10;
    ulong unaff_x30;
    int iStack_60;
    int iStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_58 = *(iVar10 + 0x5e0);
    iStack_60 = 0;
    iVar10 = *arg1;
    iVar4 = *(arg1 + 0x14);
    if (*(arg1 + 0x20) == -0x80000000) {
        iVar7 = iVar10;
        if (**(iVar10 + 0xa30) == 0) {
code_r0x08008758:
            iStack_5c = 0;
            if (0x13f < iVar4 + 9U) goto code_r0x08008828;
            iVar9 = *(*(iVar7 + 0xa38) + 0xb8);
            iVar3 = *(*(iVar7 + 0xa38) + 0xbc);
            iVar6 = regmap_field_read(*(iVar7 + (iVar4 + 9U) * 8 + 0x28),&iStack_5c);
            if (iVar6 == 0) {
                if ((*(*(iVar7 + 0xa30) + 4) >> 1 & 1) == 0) {
                    uVar1 = (iVar9 - iVar3) + 0x1f;
                    iVar6 = (iStack_5c << (uVar1 & 0x1f)) >> (uVar1 & 0x1f);
                    iVar9 = 100;
                }
                else {
                    iVar9 = iStack_5c * 1000 - *(arg1 + 0x10);
                    iVar3 = *(arg1 + 0x18);
                    if (iVar9 < 1) {
                        if (iVar9 < 0) {
                            iVar6 = iVar3;
                            if (iVar3 < 0) {
                                iVar6 = iVar3 + 1;
                            }
                            iVar9 = iVar9 - (iVar6 >> 1);
                        }
                        else {
                            iVar9 = 0;
                        }
                    }
                    else {
                        iVar6 = iVar3;
                        if (iVar3 < 0) {
                            iVar6 = iVar3 + 1;
                        }
                        iVar9 = iVar9 + (iVar6 >> 1);
                    }
                    iVar6 = 0;
                    if (iVar3 != 0) {
                        iVar6 = iVar9 / iVar3;
                    }
                    iVar9 = 1000;
                }
                iVar6 = iVar6 * iVar9;
            }
            *arg2 = iVar6;
            if ((*(*arg1 + 0xa70) != 0) && (*(arg1 + 8) != 0)) {
                thermal_minidump_update_data(*(*arg1 + 0xa70),*(arg1 + 8) + 4,arg2);
            }
            goto code_r0x08008678;
        }
        iVar7 = ktime_get();
        if (0x13f < iVar4 + 0x19U) goto code_r0x08008828;
        puVar2 = iVar10 + (iVar4 + 0x19U) * 8 + 0x28;
        iVar6 = regmap_field_read(*puVar2,&iStack_60);
        if (iVar6 == 0 && iStack_60 == 0) {
            do {
                iVar8 = ktime_get();
                if (iVar7 + 20000000 < iVar8) {
                    iVar6 = regmap_field_read(*puVar2,&iStack_60);
                    break;
                }
                usleep_range_state(1,1,2);
                iVar6 = regmap_field_read(*puVar2,&iStack_60);
            } while (iVar6 == 0 && iStack_60 == 0);
        }
        iVar9 = 0;
        if (iVar6 == 0 && iStack_60 == 0) {
            iVar9 = -0x6e;
        }
        if (iVar6 == 0) {
            iVar6 = iVar9;
        }
        if (iVar6 == 0) {
            iVar7 = *arg1;
            goto code_r0x08008758;
        }
    }
    else {
        *arg2 = *(arg1 + 0x20);
code_r0x08008678:
        if (*(arg1 + 8) == 0) {
            if (iVar10 != 0) {
                iVar6 = 0;
                if (*(iVar10 + 0xa58) == 0) goto code_r0x0800871c;
                iVar7 = sp_el0;
                ipc_log_string(*(iVar10 + 0xa58),"%s: Sensor_id: %d temp: %d [%s]\n","get_temp_tsens_valid",iVar4,
                               *arg2,iVar7 + 0x7a8);
            }
        }
        else if (iVar10 != 0) {
            iVar6 = 0;
            if (*(iVar10 + 0xa58) == 0) goto code_r0x0800871c;
            iVar7 = sp_el0;
            ipc_log_string(*(iVar10 + 0xa58),"%s: Sensor_id: %d name:%s temp: %d [%s]\n","get_temp_tsens_valid",iVar4
                           ,*(arg1 + 8) + 4,*arg2,iVar7 + 0x7a8);
        }
        iVar6 = 0;
    }
code_r0x0800871c:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_58) {
        return;
    }
    __stack_chk_fail(iVar6);
code_r0x08008828:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x800882c);
    (*pcVar5)();
}


// ===== sym.tsens_hw_to_mC @ 0x0800882c (size 264) =====

void sym.tsens_hw_to_mC(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    int64_t iVar2;
    code *pcVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    int64_t *piVar6;
    ulong uVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar11;
    int64_t iVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_38 = *(iVar11 + 0x5e0);
    iVar11 = *arg1;
    iStack_3c = 0;
    if (0x13f < arg2) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x8008930);
        (*pcVar3)();
    }
    iVar9 = *(*(iVar11 + 0xa38) + 0xb8);
    iVar10 = *(*(iVar11 + 0xa38) + 0xbc);
    uVar5 = regmap_field_read(*(iVar11 + arg2 * 8 + 0x28),&iStack_3c);
    if (uVar5 == 0) {
        if ((*(*(iVar11 + 0xa30) + 4) >> 1 & 1) == 0) {
            uVar4 = (iVar9 - iVar10) + 0x1f;
            iVar8 = (iStack_3c << (uVar4 & 0x1f)) >> (uVar4 & 0x1f);
            iVar9 = 100;
        }
        else {
            iVar9 = iStack_3c * 1000 - *(arg1 + 0x10);
            iVar10 = *(arg1 + 0x18);
            if (iVar9 < 1) {
                if (iVar9 < 0) {
                    iVar8 = iVar10;
                    if (iVar10 < 0) {
                        iVar8 = iVar10 + 1;
                    }
                    iVar9 = iVar9 - (iVar8 >> 1);
                }
                else {
                    iVar9 = 0;
                }
            }
            else {
                iVar8 = iVar10;
                if (iVar10 < 0) {
                    iVar8 = iVar10 + 1;
                }
                iVar9 = iVar9 + (iVar8 >> 1);
            }
            iVar8 = 0;
            if (iVar10 != 0) {
                iVar8 = iVar9 / iVar10;
            }
            iVar9 = 1000;
        }
        uVar5 = iVar8 * iVar9;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_38) {
        return;
    }
    auVar13 = __stack_chk_fail(uVar5);
    piVar6 = auVar13._0_8_;
    *extraout_x18 = sym.get_temp_common;
    iVar2 = _seq_lseek;
    pcStack_78 = sym.get_temp_common;
    iVar11 = sp_el0;
    iStack_88 = *(iVar11 + 0x5e0);
    uStack_90 = 0;
    iVar12 = *piVar6;
    iVar9 = *(piVar6 + 0x14);
    puStack_80 = &stack0xffffffffffffffd0;
    uVar4 = jiffies_to_usecs(0x3ffffffffffffffe);
    iVar11 = -0x3ffffffffffffffe;
    if (99 < uVar4) {
        iVar11 = -1;
    }
    do {
        if (**(iVar12 + 0xa30) != 0) {
code_r0x080089d0:
            if (0x13f < iVar9 + 9U) goto code_r0x08008af8;
            uVar7 = regmap_field_read(*(iVar12 + (iVar9 + 9U) * 8 + 0x28),&uStack_90 + 4);
            if (uVar7 != 0) goto code_r0x08008ac0;
            iVar10 = uStack_90._4_4_ * 1000 - piVar6[2];
            iVar8 = piVar6[3];
            if (iVar10 < 1) {
                if (iVar10 < 0) {
                    iVar1 = iVar8;
                    if (iVar8 < 0) {
                        iVar1 = iVar8 + 1;
                    }
                    iVar10 = iVar10 - (iVar1 >> 1);
                }
                else {
                    iVar10 = 0;
                }
            }
            else {
                iVar1 = iVar8;
                if (iVar8 < 0) {
                    iVar1 = iVar8 + 1;
                }
                iVar10 = iVar10 + (iVar1 >> 1);
            }
            iVar1 = 0;
            if (iVar8 != 0) {
                iVar1 = iVar10 / iVar8;
            }
            iVar1 = iVar1 * 1000;
            *auVar13._8_8_ = iVar1;
            if (piVar6[1] == 0) {
                if (iVar12 != 0) {
                    uVar7 = 0;
                    if (*(iVar12 + 0xa58) == 0) goto code_r0x08008ac0;
                    iVar11 = sp_el0;
                    ipc_log_string(*(iVar12 + 0xa58),"%s: Sensor_id: %d temp: %d [%s]\n","get_temp_common",iVar9,
                                   iVar1,iVar11 + 0x7a8);
                }
            }
            else if (iVar12 != 0) {
                uVar7 = 0;
                if (*(iVar12 + 0xa58) != 0) {
                    iVar11 = sp_el0;
                    ipc_log_string(*(iVar12 + 0xa58),"%s: Sensor_id: %d name:%s temp: %d [%s]\n","get_temp_common",
                                   iVar9,piVar6[1] + 4,iVar1,iVar11 + 0x7a8);
                    uVar7 = 0;
                }
                goto code_r0x08008ac0;
            }
            uVar7 = 0;
            goto code_r0x08008ac0;
        }
        uVar7 = regmap_field_read(*(iVar12 + 0x60),&uStack_90);
        if (uVar7 != 0) goto code_r0x08008ac0;
        if (uStack_90 != 0) goto code_r0x080089d0;
    } while ((iVar11 - iVar2) + _seq_lseek < 0);
    uVar7 = 0xffffff92;
code_r0x08008ac0:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_88) {
        return;
    }
    __stack_chk_fail(uVar7);
code_r0x08008af8:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8008afc);
    (*pcVar3)();
}


// ===== sym.get_temp_common @ 0x08008934 (size 456) =====

void sym.get_temp_common(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    code *pcVar5;
    uint32_t uVar6;
    ulong uVar7;
    int64_t iVar8;
    int iVar9;
    ulong *in_x18;
    int64_t iVar10;
    ulong unaff_x30;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = _seq_lseek;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    uStack_50 = 0;
    iVar10 = *arg1;
    iVar2 = *(arg1 + 0x14);
    uVar6 = jiffies_to_usecs(0x3ffffffffffffffe);
    iVar8 = -0x3ffffffffffffffe;
    if (99 < uVar6) {
        iVar8 = -1;
    }
    do {
        if (**(iVar10 + 0xa30) != 0) {
code_r0x080089d0:
            if (0x13f < iVar2 + 9U) goto code_r0x08008af8;
            uVar7 = regmap_field_read(*(iVar10 + (iVar2 + 9U) * 8 + 0x28),&uStack_50 + 4);
            if (uVar7 != 0) goto code_r0x08008ac0;
            iVar9 = uStack_50._4_4_ * 1000 - *(arg1 + 0x10);
            iVar3 = *(arg1 + 0x18);
            if (iVar9 < 1) {
                if (iVar9 < 0) {
                    iVar1 = iVar3;
                    if (iVar3 < 0) {
                        iVar1 = iVar3 + 1;
                    }
                    iVar9 = iVar9 - (iVar1 >> 1);
                }
                else {
                    iVar9 = 0;
                }
            }
            else {
                iVar1 = iVar3;
                if (iVar3 < 0) {
                    iVar1 = iVar3 + 1;
                }
                iVar9 = iVar9 + (iVar1 >> 1);
            }
            iVar1 = 0;
            if (iVar3 != 0) {
                iVar1 = iVar9 / iVar3;
            }
            iVar1 = iVar1 * 1000;
            *arg2 = iVar1;
            if (*(arg1 + 8) == 0) {
                if (iVar10 != 0) {
                    uVar7 = 0;
                    if (*(iVar10 + 0xa58) == 0) goto code_r0x08008ac0;
                    iVar8 = sp_el0;
                    ipc_log_string(*(iVar10 + 0xa58),"%s: Sensor_id: %d temp: %d [%s]\n","get_temp_common",iVar2,
                                   iVar1,iVar8 + 0x7a8);
                }
            }
            else if (iVar10 != 0) {
                uVar7 = 0;
                if (*(iVar10 + 0xa58) != 0) {
                    iVar8 = sp_el0;
                    ipc_log_string(*(iVar10 + 0xa58),"%s: Sensor_id: %d name:%s temp: %d [%s]\n","get_temp_common",
                                   iVar2,*(arg1 + 8) + 4,iVar1,iVar8 + 0x7a8);
                    uVar7 = 0;
                }
                goto code_r0x08008ac0;
            }
            uVar7 = 0;
            goto code_r0x08008ac0;
        }
        uVar7 = regmap_field_read(*(iVar10 + 0x60),&uStack_50);
        if (uVar7 != 0) goto code_r0x08008ac0;
        if (uStack_50 != 0) goto code_r0x080089d0;
    } while ((iVar8 - iVar4) + _seq_lseek < 0);
    uVar7 = 0xffffff92;
code_r0x08008ac0:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return;
    }
    __stack_chk_fail(uVar7);
code_r0x08008af8:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8008afc);
    (*pcVar5)();
}


// ===== sym.tsens_enable_irq @ 0x08008afc (size 120) =====

void sym.tsens_enable_irq(int64_t arg1)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = 7;
    if (**(arg1 + 0xa30) < 3) {
        uVar2 = 1;
    }
    iVar1 = regmap_field_update_bits_base(*(arg1 + 0x68),0xffffffff,uVar2,0,0,0);
    if (iVar1 < 0) {
        _dev_err(*arg1,"%s: failed to enable interrupts\n","tsens_enable_irq");
    }
    return;
}


// ===== sym.tsens_debug_init @ 0x08008b74 (size 564) =====

void sym.tsens_debug_init(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    uchar auVar4 [16];
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    iVar3 = *(arg1 + 0xa8);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    iVar1 = debugfs_lookup("tsens",0);
    if (iVar1 == 0) {
        iVar1 = debugfs_create_dir("tsens");
        *(iVar3 + 0xa48) = iVar1;
    }
    else {
        *(iVar3 + 0xa48) = iVar1;
    }
    iVar1 = debugfs_lookup("version",iVar1);
    if (iVar1 == 0) {
        debugfs_create_file("version",0x124,*(iVar3 + 0xa48),arg1,obj.dbg_version_fops);
        iVar1 = *(arg1 + 0x80);
    }
    else {
        iVar1 = *(arg1 + 0x80);
    }
    if (iVar1 == 0) {
        iVar1 = *(arg1 + 0x10);
    }
    uVar2 = debugfs_create_dir(iVar1,*(iVar3 + 0xa48));
    *(iVar3 + 0xa50) = uVar2;
    debugfs_create_file("sensors",0x124,uVar2,arg1,obj.dbg_sensors_fops);
    iVar1 = *(arg1 + 0x80);
    if (iVar1 == 0) {
        iVar1 = *(arg1 + 0x10);
    }
    snprintf(&uStack_58,0x20,"%s_0",iVar1);
    iVar1 = ipc_log_context_create(10,&uStack_58,0);
    *(iVar3 + 0xa58) = iVar1;
    if (iVar1 == 0) {
        _dev_err(arg1 + 0x10,"%s: unable to create IPC Logging for %s\n","tsens_debug_init",&uStack_58);
        iVar1 = *(arg1 + 0x80);
    }
    else {
        iVar1 = *(arg1 + 0x80);
    }
    if (iVar1 == 0) {
        iVar1 = *(arg1 + 0x10);
    }
    snprintf(&uStack_58,0x20,"%s_1",iVar1);
    iVar1 = ipc_log_context_create(10,&uStack_58,0);
    *(iVar3 + 0xa60) = iVar1;
    if (iVar1 == 0) {
        _dev_err(arg1 + 0x10,"%s: unable to create IPC Logging for %s\n","tsens_debug_init",&uStack_58);
        iVar1 = *(arg1 + 0x80);
    }
    else {
        iVar1 = *(arg1 + 0x80);
    }
    if (iVar1 == 0) {
        iVar1 = *(arg1 + 0x10);
    }
    snprintf(&uStack_58,0x20,"%s_2",iVar1);
    iVar1 = ipc_log_context_create(1,&uStack_58,0);
    *(iVar3 + 0xa68) = iVar1;
    if (iVar1 == 0) {
        _dev_err(arg1 + 0x10,"%s: unable to create IPC Logging for %s\n","tsens_debug_init",&uStack_58);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_38) {
        auVar4 = __stack_chk_fail();
        *extraout_x18 = sym.dbg_version_open;
        single_open(auVar4._8_8_,sym.dbg_version_show.6be98f0982e4f5249d656332c33b156d.cfi_jt,*(auVar4._0_8_ + 0x2d8))
        ;
        return;
    }
    return;
}


// ===== sym.dbg_version_open @ 0x08008da8 (size 56) =====

void sym.dbg_version_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.dbg_version_show.6be98f0982e4f5249d656332c33b156d.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.dbg_version_show @ 0x08008de0 (size 216) =====

void sym.dbg_version_show(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar2;
    ulong unaff_x30;
    uchar auVar3 [16];
    uint uStack_34;
    uint uStack_30;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    uStack_2c = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    iVar2 = *(*(arg1 + 0x80) + 0xa8);
    if (**(iVar2 + 0xa30) < 2) {
        seq_puts(arg1,"0.1.0\n");
    }
    else {
        uVar1 = regmap_field_read(*(iVar2 + 0x28),&uStack_2c);
        if (((uVar1 != 0) || (uVar1 = regmap_field_read(*(iVar2 + 0x30),&uStack_30), uVar1 != 0)) ||
           (uVar1 = regmap_field_read(*(iVar2 + 0x38),&uStack_34), uVar1 != 0)) goto code_r0x08008e88;
        seq_printf(arg1,"%d.%d.%d\n",uStack_2c,uStack_30,uStack_34);
    }
    uVar1 = 0;
code_r0x08008e88:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return;
    }
    auVar3 = __stack_chk_fail(uVar1);
    *extraout_x18 = sym.dbg_sensors_open;
    single_open(auVar3._8_8_,sym.dbg_sensors_show.6be98f0982e4f5249d656332c33b156d.cfi_jt,*(auVar3._0_8_ + 0x2d8));
    return;
}


// ===== sym.dbg_sensors_open @ 0x08008eb8 (size 56) =====

void sym.dbg_sensors_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.dbg_sensors_show.6be98f0982e4f5249d656332c33b156d.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.dbg_sensors_show @ 0x08008ef0 (size 180) =====

ulong sym.dbg_sensors_show(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t iVar2;
    uint32_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x80) + 0xa8);
    seq_printf(arg1,"max: %2d\nnum: %2d\n\n",*(*(iVar2 + 0xa30) + 8),*(iVar2 + 8));
    seq_puts(arg1,"      id    slope   offset\n--------------------------\n");
    if (*(iVar2 + 8) != 0) {
        uVar3 = 0;
        do {
            iVar1 = iVar2 + 0xa78 + uVar3 * 0x28;
            seq_printf(arg1,"%8d %8d %8d\n",*(iVar1 + 0x14),*(iVar1 + 0x18),*(iVar1 + 0x10));
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(iVar2 + 8));
    }
    return 0;
}


// ===== sym.tsens_probe @ 0x08008fa4 (size 1304) =====

code * sym.tsens_probe(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    ulong *arg1_00;
    uint64_t uVar6;
    char *pcVar7;
    uint uVar8;
    int64_t *piVar9;
    ulong uVar10;
    ulong *in_x18;
    ulong *unaff_x19;
    code *pcVar11;
    code *pcVar12;
    code *pcVar13;
    code *pcVar14;
    uint *puVar15;
    ulong unaff_x30;
    uint32_t uStack_70;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    uStack_70 = 0;
    if (*(arg1 + 0x300) == 0) {
        pcVar11 = *(arg1 + 0x70);
    }
    else {
        pcVar11 = arg1 + 0x10;
    }
    pcVar12 = *(pcVar11 + 0x2f0);
    iVar5 = of_match_node(obj.tsens_table,pcVar12);
    if (iVar5 == 0) {
        pcVar14 = obj.data_8960;
    }
    else {
        pcVar14 = *(iVar5 + 0xc0);
    }
    uStack_70 = *pcVar14;
    if (pcVar12 != NULL) {
        of_property_read_variable_u32_array(pcVar12,"#qcom,sensors",&uStack_70,1,0);
    }
    if (uStack_70 == 0) {
        _dev_err(pcVar11,"%s: invalid number of sensors\n","tsens_probe");
        pcVar13 = 0xffffffea;
        goto code_r0x0800918c;
    }
    arg1_00 = devm_kmalloc(pcVar11,uStack_70 * 0x28 + 0xa78,0xdc0);
    if (arg1_00 == NULL) {
        pcVar13 = 0xfffffff4;
        goto code_r0x0800918c;
    }
    *arg1_00 = pcVar11;
    *(arg1_00 + 1) = uStack_70;
    piVar9 = *(pcVar14 + 8);
    arg1_00[0x148] = piVar9;
    if (uStack_70 != 0) {
        uVar3 = 0;
        do {
            iVar5 = uVar3;
            uVar2 = uVar3;
            if (*(pcVar14 + 0x10) != 0) {
                uVar2 = *(*(pcVar14 + 0x10) + iVar5 * 4);
            }
            uVar3 = uVar3 + 1;
            *(arg1_00 + iVar5 * 5 + 0x153) = 0x80000000;
            uVar1 = *(arg1_00 + 1);
            *(arg1_00 + iVar5 * 0x28 + 0xa8c) = uVar2;
        } while (uVar3 < uVar1);
        piVar9 = arg1_00[0x148];
    }
    arg1_00[0x146] = *(pcVar14 + 0x18);
    uVar10 = *(pcVar14 + 0x20);
    *(arg1 + 0xa8) = arg1_00;
    arg1_00[0x147] = uVar10;
    if (((piVar9 == NULL) || (pcVar13 = *piVar9, pcVar13 == NULL)) || (piVar9[2] == 0)) {
        pcVar13 = 0xffffffea;
        unaff_x19 = arg1_00;
        goto code_r0x0800918c;
    }
    pcVar14 = sym.__typeid__ZTSFiP10tsens_privE_global_addr;
    if (9 < (pcVar13 + -0x8008408 >> 3 | pcVar13 << 0x3d)) goto code_r0x08009474;
    do {
        uVar3 = (*pcVar13)(arg1_00);
        unaff_x19 = arg1_00;
        if (uVar3 < 0) {
            pcVar13 = uVar3;
            pcVar7 = "%s: init failed\n";
code_r0x0800945c:
            _dev_err(pcVar11,pcVar7,"tsens_probe");
        }
        else {
            pcVar13 = *(arg1_00[0x148] + 8);
            if (pcVar13 != NULL) {
                if (9 < (pcVar13 - pcVar14 >> 3 | pcVar13 - pcVar14 << 0x3d)) {
                    __cfi_slowpath_diag(0x6ae5c9c5338877c9,pcVar13,0x8000300);
                }
                uVar3 = (*pcVar13)(arg1_00);
                if (uVar3 < 0) {
                    pcVar13 = uVar3;
                    if (uVar3 != 0xfffffdfb) {
                        pcVar7 = "%s: calibration failed\n";
                        goto code_r0x0800945c;
                    }
                    goto code_r0x0800918c;
                }
            }
            uVar10 = thermal_minidump_register(*pcVar12);
            arg1_00[0x14e] = uVar10;
            uStack_6c = 0;
            if (*(arg1_00 + 1) != 0) {
                uVar3 = 0;
                iVar5 = sp_el0;
                pcVar11 = reloc.tsens_get_temp.6be98f0982e4f5249d656332c33b156d.cfi_jt;
                pcVar14 = sym.__typeid__ZTSFiPK12tsens_sensorPiE_global_addr;
                do {
                    pcVar12 = arg1_00 + uVar3 * 5 + 0x14f;
                    arg1_00[uVar3 * 5 + 0x14f] = arg1_00;
                    puVar15 = arg1_00 + uVar3 * 0x28 + 0xa8c;
                    uVar6 = devm_thermal_zone_of_sensor_register
                                      (*arg1_00,*puVar15,pcVar12,
                                       reloc.tsens_get_temp.6be98f0982e4f5249d656332c33b156d.cfi_jt);
                    if (uVar6 < 0xfffffffffffff001) {
                        pcVar13 = *(arg1_00[0x148] + 0x10);
                        if (pcVar13 != NULL) {
                            if (1 < (pcVar13 + -0x8008368 >> 3 | pcVar13 << 0x3d)) {
                                __cfi_slowpath_diag(0xcd81341d85989151,pcVar13,0x8000320);
                            }
                            iVar4 = (*pcVar13)(pcVar12,&uStack_6c);
                            if (iVar4 != 0) {
                                _dev_err(*arg1_00,"[%u] %s: error reading sensor\n",*puVar15,"tsens_register");
                                goto code_r0x08009208;
                            }
                            if (arg1_00[0x14d] != 0) {
                                ipc_log_string(arg1_00[0x14d],"%s: Sensor_id: %d name:%s temp: %d [%s]\n",
                                               "tsens_register",*puVar15,uVar6 + 4,uStack_6c,iVar5 + 0x7a8);
                            }
                        }
                        arg1_00[uVar3 * 5 + 0x150] = uVar6;
                        pcVar12 = *(arg1_00[0x148] + 0x18);
                        if (pcVar12 != NULL) {
                            if (pcVar12 != sym.__typeid__ZTSFiP10tsens_priviE_global_addr) {
                                __cfi_slowpath_diag(0x63db24e19c6eed61,pcVar12,0x8000340);
                            }
                            (*pcVar12)(arg1_00,uVar3);
                        }
                    }
code_r0x08009208:
                    uVar3 = uVar3 + 1;
                } while (uVar3 < *(arg1_00 + 1));
            }
            if (*arg1_00[0x146] == 0) {
                if ((*(*(arg1_00[0x14f] + 0xa30) + 4) >> 1 & 1) == 0) {
                    uVar8 = 0x4b0;
                }
                else {
                    uVar6 = (*(arg1_00 + 0x151) + *(arg1_00 + 0x152) * 0x78) / 1000;
                    uVar8 = uVar6;
                    if (0x3fe < uVar6) {
                        uVar8 = 0x3ff;
                    }
                }
                regmap_field_update_bits_base(arg1_00[0x10e],0xffffffff,uVar8,0,0,0);
                uVar8 = 0;
                if (((*(*(arg1_00[0x14f] + 0xa30) + 4) >> 1 & 1) != 0) &&
                   (uVar8 = *(arg1_00 + 0x151) / 1000, 0x3fe < *(arg1_00 + 0x151) / 1000)) {
                    uVar8 = 0x3ff;
                }
                regmap_field_update_bits_base(arg1_00[0x10f],0xffffffff,uVar8,0,0,0);
            }
            uVar3 = sym.tsens_register_irq(arg1_00,0x80005b0,0x80083e8);
            pcVar13 = uVar3;
            if ((-1 < uVar3) && ((*(arg1_00[0x146] + 4) & 1) != 0)) {
                uVar6 = sym.tsens_register_irq(arg1_00,0x80007b8,0x80083e0);
                pcVar13 = uVar6 & 0xffffffff;
            }
        }
code_r0x0800918c:
        iVar5 = sp_el0;
        if (*(iVar5 + 0x5e0) == iStack_68) {
            return pcVar13;
        }
        __stack_chk_fail();
        arg1_00 = unaff_x19;
code_r0x08009474:
        __cfi_slowpath_diag(0x6ae5c9c5338877c9,pcVar13,0x80002e0);
    } while( true );
}


// ===== sym.tsens_remove @ 0x080094bc (size 172) =====

ulong sym.tsens_remove(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0xa8);
    debugfs_remove(*(iVar2 + 0xa48));
    regmap_field_update_bits_base(*(iVar2 + 0x68),0xffffffff,0,0,0,0);
    pcVar1 = *(*(iVar2 + 0xa40) + 0x20);
    if (pcVar1 != NULL) {
        if (pcVar1 != sym.__typeid__ZTSFvP10tsens_privE_global_addr) {
            __cfi_slowpath_diag(0x3846a8bf9ce54a76,pcVar1,0x80003a0);
        }
        (*pcVar1)(iVar2);
    }
    thermal_minidump_unregister(*(iVar2 + 0xa70));
    return 0;
}


// ===== sym.tsens_register_irq @ 0x08009568 (size 272) =====

int sym.tsens_register_irq(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong uVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = of_find_device_by_node(*(*arg1 + 0x2f0));
    if (iVar4 == 0) {
        iVar3 = -0x13;
    }
    else {
        iVar2 = platform_get_irq_byname(iVar4,arg2);
        if (iVar2 < 0) {
            iVar3 = 0;
            if (iVar2 != -6) {
                iVar3 = iVar2;
            }
        }
        else {
            piVar1 = iVar4 + 0x10;
            iVar8 = *(iVar4 + 0x80);
            if (**(arg1 + 0xa30) == 0) {
                if (iVar8 == 0) {
                    iVar8 = *piVar1;
                }
                iVar6 = 0;
                uVar7 = 1;
                iVar5 = arg3;
            }
            else {
                if (iVar8 == 0) {
                    iVar8 = *piVar1;
                }
                uVar7 = 0x2000;
                iVar5 = 0;
                iVar6 = arg3;
            }
            iVar3 = devm_request_threaded_irq(piVar1,iVar2,iVar5,iVar6,uVar7,iVar8,arg1);
            if (iVar3 == 0) {
                irq_set_irq_wake(iVar2,1);
            }
            else {
                _dev_err(piVar1,"%s: failed to get irq\n","tsens_register_irq");
            }
        }
        put_device(iVar4 + 0x10);
    }
    return iVar3;
}


// ===== sym.tsens_irq_thread @ 0x08009678 (size 624) =====

uint64_t sym.tsens_irq_thread(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    ulong *arg1_00;
    int64_t iVar5;
    code *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x19;
    uint64_t uVar7;
    int64_t unaff_x21;
    ulong unaff_x22;
    int64_t *unaff_x23;
    uint64_t unaff_x24;
    ulong *arg1_01;
    ulong unaff_x25;
    int64_t unaff_x26;
    int64_t unaff_x27;
    ulong unaff_x30;
    uchar auVar8 [16];
    int iStack_144;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    int64_t iStack_108;
    uchar *puStack_100;
    code *pcStack_f8;
    int64_t iStack_f0;
    int64_t iStack_e0;
    ulong uStack_d8;
    uint64_t uStack_d0;
    int64_t *piStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    int64_t iStack_b0;
    int64_t iStack_a8;
    uint uStack_a0;
    int iStack_9c;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    uStack_a0 = arg1;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    iStack_9c = 0;
    if (*(arg2 + 8) != 0) {
        uVar4 = 0;
        unaff_x27 = arg2 + 0xa78;
        unaff_x21 = arg2 + 0x24;
        unaff_x22 = 1;
        do {
            unaff_x26 = unaff_x27 + uVar4 * 0x28;
            unaff_x19 = uVar4;
            unaff_x23 = unaff_x26 + 8;
            if (*unaff_x23 != 0) {
                uVar1 = *(unaff_x26 + 0x14);
                unaff_x24 = uVar1;
                iVar3 = sym.tsens_threshold_violated(arg2,unaff_x24,&uStack_98);
                if (iVar3 != 0) {
                    iVar3 = sym.get_temp_tsens_valid(unaff_x26,&iStack_9c);
                    if (iVar3 == 0) {
                        unaff_x25 = _raw_spin_lock_irqsave(unaff_x21);
                        sym.tsens_read_irq_state(arg2,unaff_x24,unaff_x26,&uStack_98);
                        uVar2 = 1 << (uVar1 & 0x1f);
                        if ((uStack_98 == 0) || ((2 < **(arg2 + 0xa30) && ((uStack_90 & uVar2) != 0)))) {
                            if ((uStack_88 == 0) || ((2 < **(arg2 + 0xa30) && ((uStack_80 & uVar2) != 0))))
                            goto code_r0x08009824;
                            sym.tsens_set_interrupt(arg2,uVar1,0,0);
                            if (uStack_88._4_4_ < iStack_9c) {
                                iVar5 = 0;
                                goto code_r0x0800981c;
                            }
code_r0x08009834:
                            _raw_spin_unlock_irqrestore(unaff_x21,unaff_x25);
                            iVar5 = *unaff_x23;
                            *(unaff_x27 + unaff_x19 * 0x28 + 0x20) = iStack_9c;
                            thermal_zone_device_update(iVar5,0);
                        }
                        else {
                            sym.tsens_set_interrupt(arg2,uVar1,1,0);
                            if (uStack_98._4_4_ <= iStack_9c) goto code_r0x08009834;
                            iVar5 = 1;
code_r0x0800981c:
                            sym.tsens_set_interrupt(arg2,uVar1,iVar5,1);
code_r0x08009824:
                            _raw_spin_unlock_irqrestore(unaff_x21,unaff_x25);
                        }
                        if (**(arg2 + 0xa30) == 0) break;
                        *(unaff_x27 + unaff_x19 * 0x28 + 0x20) = 0x80000000;
                    }
                    else {
                        _dev_err(*arg2,"[%u] %s: error reading sensor\n",unaff_x24,"tsens_irq_thread");
                    }
                }
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < *(arg2 + 8));
    }
    if ((arg2 != 0) && (*(arg2 + 0xa60) != 0)) {
        iVar5 = sp_el0;
        ipc_log_string(*(arg2 + 0xa60),"%s: %s: irq[%d] exit [%s]\n","tsens_irq_thread","tsens_irq_thread",uStack_a0
                       ,iVar5 + 0x7a8);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_68) {
        return 1;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.tsens_critical_irq_thread;
    pcStack_f8 = sym.tsens_critical_irq_thread;
    iVar5 = sp_el0;
    iStack_108 = *(iVar5 + 0x5e0);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_140 = 0;
    iStack_144 = 0;
    puStack_100 = &stack0xffffffffffffffa0;
    iStack_f0 = unaff_x27;
    iStack_e0 = unaff_x26;
    uStack_d8 = unaff_x25;
    uStack_d0 = unaff_x24;
    piStack_c8 = unaff_x23;
    uStack_c0 = unaff_x22;
    iStack_b8 = unaff_x21;
    iStack_b0 = arg2;
    iStack_a8 = unaff_x19;
    if ((*(arg1_00[0x146] + 4) >> 3 & 1) != 0) {
        uVar4 = regmap_field_read(arg1_00[0x11e],&uStack_140);
        uVar7 = uVar4;
        if (uVar4 != 0) goto code_r0x08009ac0;
        if (uStack_140 != 0) {
            regmap_field_update_bits_base(arg1_00[0x11f],0xffffffff,1,0,0,0);
            regmap_field_update_bits_base(arg1_00[0x11f],0xffffffff,0,0,0,0);
            uVar4 = regmap_field_read(arg1_00[0x121],&iStack_144);
            uVar7 = uVar4;
            if (uVar4 != 0) goto code_r0x08009ac0;
            if (((arg1_00 != NULL) && (iStack_144 != 0)) && (arg1_00[0x14c] != 0)) {
                iVar5 = sp_el0;
                ipc_log_string(arg1_00[0x14c],"%s: %s: watchdog count: %d\n [%s]\n","tsens_critical_irq_thread",
                               "tsens_critical_irq_thread",iStack_144,iVar5 + 0x7a8);
            }
        }
    }
    uVar7 = 1;
    if (*(arg1_00 + 1) != 0) {
        uVar4 = 0;
        do {
            arg1_01 = arg1_00 + uVar4 * 5 + 0x14f;
            if (arg1_01[1] != 0) {
                uVar1 = *(arg1_01 + 0x14);
                uVar7 = uVar1;
                iVar3 = sym.tsens_threshold_violated(arg1_00,uVar7,&uStack_138);
                if (iVar3 != 0) {
                    iVar3 = sym.get_temp_tsens_valid(arg1_01,&uStack_140 + 4);
                    if (iVar3 == 0) {
                        sym.tsens_read_irq_state(arg1_00,uVar7,arg1_01,&uStack_138);
                        if ((uStack_118 != 0) && ((*arg1_00[0x146] < 3 || ((uStack_110 & 1 << (uVar1 & 0x1f)) == 0)))) {
                            sym.tsens_set_interrupt(arg1_00,uVar7,2,0);
                        }
                    }
                    else {
                        _dev_err(*arg1_00,"[%u] %s: error reading sensor\n",uVar7,"tsens_critical_irq_thread");
                    }
                }
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < *(arg1_00 + 1));
        uVar7 = 1;
    }
code_r0x08009ac0:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_108) {
        auVar8 = __stack_chk_fail();
        *extraout_x18_00 = sym.tsens_get_temp;
        pcVar6 = *(*(*auVar8._0_8_ + 0xa40) + 0x10);
        if (1 < (pcVar6 + -0x8008368 >> 3 | pcVar6 << 0x3d)) {
            __cfi_slowpath_diag(0xcd81341d85989151,pcVar6,0x8000360);
        }
        uVar7 = (*pcVar6)(auVar8._0_8_,auVar8._8_8_);
        return uVar7;
    }
    return uVar7;
}


// ===== sym.tsens_critical_irq_thread @ 0x080098e8 (size 540) =====

uint64_t sym.tsens_critical_irq_thread(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar4;
    int64_t iVar5;
    uint32_t uVar6;
    ulong unaff_x30;
    uchar auVar7 [16];
    int iStack_a4;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    iStack_a4 = 0;
    if ((*(*(arg2 + 0xa30) + 4) >> 3 & 1) != 0) {
        arg1 = regmap_field_read(*(arg2 + 0x8f0),&uStack_a0);
        uVar4 = arg1 & 0xffffffff;
        if (arg1 != 0) goto code_r0x08009ac0;
        if (uStack_a0 != 0) {
            regmap_field_update_bits_base(*(arg2 + 0x8f8),0xffffffff,1,0,0,0);
            regmap_field_update_bits_base(*(arg2 + 0x8f8),0xffffffff,0,0,0,0);
            arg1 = regmap_field_read(*(arg2 + 0x908),&iStack_a4);
            uVar4 = arg1 & 0xffffffff;
            if (arg1 != 0) goto code_r0x08009ac0;
            if ((arg2 != 0) && (iStack_a4 != 0)) {
                arg1 = 0;
                if (*(arg2 + 0xa60) != 0) {
                    iVar5 = sp_el0;
                    arg1 = ipc_log_string(*(arg2 + 0xa60),"%s: %s: watchdog count: %d\n [%s]\n",
                                          "tsens_critical_irq_thread","tsens_critical_irq_thread",iStack_a4,
                                          iVar5 + 0x7a8);
                }
            }
        }
    }
    uVar4 = 1;
    if (*(arg2 + 8) != 0) {
        uVar6 = 0;
        do {
            iVar5 = arg2 + 0xa78 + uVar6 * 0x28;
            if (*(iVar5 + 8) != 0) {
                uVar1 = *(iVar5 + 0x14);
                uVar4 = uVar1;
                arg1 = sym.tsens_threshold_violated(arg2,uVar4,&uStack_98);
                if (arg1 != 0) {
                    iVar2 = sym.get_temp_tsens_valid(iVar5,&uStack_a0 + 4);
                    if (iVar2 == 0) {
                        arg1 = sym.tsens_read_irq_state(arg2,uVar4,iVar5,&uStack_98);
                        if ((uStack_78 != 0) && ((**(arg2 + 0xa30) < 3 || ((uStack_70 & 1 << (uVar1 & 0x1f)) == 0)))) {
                            arg1 = sym.tsens_set_interrupt(arg2,uVar4,2,0);
                        }
                    }
                    else {
                        arg1 = _dev_err(*arg2,"[%u] %s: error reading sensor\n",uVar4,"tsens_critical_irq_thread");
                    }
                }
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < *(arg2 + 8));
        uVar4 = 1;
    }
code_r0x08009ac0:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_68) {
        auVar7 = __stack_chk_fail(arg1);
        *extraout_x18 = sym.tsens_get_temp;
        pcVar3 = *(*(*auVar7._0_8_ + 0xa40) + 0x10);
        if (1 < (pcVar3 + -0x8008368 >> 3 | pcVar3 << 0x3d)) {
            __cfi_slowpath_diag(0xcd81341d85989151,pcVar3,0x8000360);
        }
        uVar4 = (*pcVar3)(auVar7._0_8_,auVar7._8_8_);
        return uVar4;
    }
    return uVar4;
}


// ===== sym.tsens_get_temp @ 0x08009b04 (size 132) =====

void sym.tsens_get_temp(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = *(*(*arg1 + 0xa40) + 0x10);
    if (1 < (pcVar1 + -0x8008368 >> 3 | pcVar1 << 0x3d)) {
        __cfi_slowpath_diag(0xcd81341d85989151,pcVar1,0x8000360);
    }
    (*pcVar1)(arg1,arg2);
    return;
}


// ===== sym.tsens_get_trend @ 0x08009b88 (size 124) =====

ulong sym.tsens_get_trend(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    ulong uVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(*(*arg1 + 0xa40) + 0x38);
    if (pcVar2 == NULL) {
        uVar1 = 0xfffffdf4;
    }
    else {
        __cfi_slowpath_diag(0xfbd16dd30f537206,pcVar2,0x8000380);
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.tsens_set_trips @ 0x08009c04 (size 628) =====

ulong sym.tsens_set_trips(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    code *pcVar4;
    ulong uVar5;
    int iVar6;
    int iVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar10;
    int64_t *piVar11;
    int iVar12;
    ulong unaff_x30;
    uchar auVar13 [12];
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_68 = *(iVar10 + 0x5e0);
    iVar10 = *arg1;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uVar1 = 0;
    if (**(iVar10 + 0xa30) != 0) {
        uVar1 = *(arg1 + 0x14);
    }
    iVar2 = arg3;
    if (arg3 < -39999) {
        iVar2 = -40000;
    }
    if (119999 < iVar2) {
        iVar2 = 120000;
    }
    iVar6 = arg2;
    if (iVar6 < -39999) {
        iVar6 = -40000;
    }
    if (119999 < iVar6) {
        iVar6 = 120000;
    }
    if ((*(*(iVar10 + 0xa30) + 1) >> 1 & 1) == 0) {
        iVar12 = iVar2 / 100;
        iVar7 = iVar6 / 100;
    }
    else {
        uVar9 = (*(arg1 + 0x10) + *(arg1 + 0x18) * (iVar2 / 1000)) / 1000;
        uVar8 = (*(arg1 + 0x10) + *(arg1 + 0x18) * (iVar6 / 1000)) / 1000;
        iVar12 = uVar9;
        if (0x3fe < uVar9) {
            iVar12 = 0x3ff;
        }
        iVar7 = uVar8;
        if (0x3fe < uVar8) {
            iVar7 = 0x3ff;
        }
    }
    uVar5 = _raw_spin_lock_irqsave(iVar10 + 0x24);
    sym.tsens_read_irq_state(iVar10,uVar1,arg1,&uStack_98);
    if (uVar1 + 0x69 < 0x140) {
        regmap_field_update_bits_base(*(iVar10 + (uVar1 + 0x69) * 8 + 0x28),0xffffffff,iVar7,0,0,0);
        if (uVar1 + 0xb9 < 0x140) {
            regmap_field_update_bits_base(*(iVar10 + (uVar1 + 0xb9) * 8 + 0x28),0xffffffff,iVar12,0,0,0);
            sym.tsens_set_interrupt(iVar10,uVar1,0,1);
            sym.tsens_set_interrupt(iVar10,uVar1,1,1);
            _raw_spin_unlock_irqrestore(iVar10 + 0x24,uVar5);
            if ((iVar10 != 0) && (*(iVar10 + 0xa60) != 0)) {
                iVar3 = sp_el0;
                ipc_log_string(*(iVar10 + 0xa60),"%s: [%u] %s: (%d:%d)->(%d:%d)\n [%s]\n","tsens_set_trips",uVar1,
                               "tsens_set_trips",uStack_88._4_4_,uStack_98._4_4_,iVar6,iVar2,iVar3 + 0x7a8);
            }
            iVar10 = sp_el0;
            if (*(iVar10 + 0x5e0) == iStack_68) {
                return 0;
            }
            auVar13 = __stack_chk_fail();
            *extraout_x18 = sym.tsens_tz_change_mode;
            iVar10 = *(auVar13._0_8_ + 8);
            if (iVar10 != 0) {
                piVar11 = *(iVar10 + 0x458);
                *(iVar10 + 0x424) = 0x8000000100000000;
                *(iVar10 + 0x418) = 0xfffbd1b0;
                *(iVar10 + 0x42c) = 0x7fffffff;
                for (; iVar10 + 0x458 != piVar11; piVar11 = *piVar11) {
                    *(piVar11 + -0x8c) = 0;
                    if (auVar13._8_4_ == 0) {
                        piVar11[-0xf] = 0xffffffffffffffff;
                        *(piVar11[-0x13] + 0x3c0) = 0;
                        thermal_cdev_update(piVar11[-0x13]);
                    }
                }
            }
            return 0;
        }
    }
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x8009e74);
    (*pcVar4)();
}


// ===== sym.tsens_tz_change_mode @ 0x08009e78 (size 168) =====

ulong sym.tsens_tz_change_mode(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 8);
    if (iVar1 != 0) {
        piVar2 = *(iVar1 + 0x458);
        *(iVar1 + 0x424) = 0x8000000100000000;
        *(iVar1 + 0x418) = 0xfffbd1b0;
        *(iVar1 + 0x42c) = 0x7fffffff;
        if (iVar1 + 0x458 != piVar2) {
            do {
                *(piVar2 + -0x8c) = 0;
                if (arg2 == 0) {
                    piVar2[-0xf] = -1;
                    *(piVar2[-0x13] + 0x3c0) = 0;
                    thermal_cdev_update(piVar2[-0x13]);
                }
                piVar2 = *piVar2;
            } while (iVar1 + 0x458 != piVar2);
        }
    }
    return 0;
}


// ===== sym.tsens_read_irq_state @ 0x08009f20 (size 848) =====

void sym.tsens_read_irq_state(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    char *pcVar2;
    int iVar3;
    int64_t iVar4;
    code *pcVar5;
    int iVar6;
    uint uVar7;
    int iVar8;
    ulong uVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    int iVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar13;
    uint32_t uVar14;
    int64_t iVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    int iStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    iVar8 = arg2;
    iStack_58 = *(iVar15 + 0x5e0);
    if (0x13f < iVar8 + 0x99U) goto code_r0x0800a268;
    iVar15 = arg3;
    uVar11 = arg4;
    iVar6 = regmap_field_read(*(arg1 + (iVar8 + 0x99U) * 8 + 0x28),arg4 + 0xc);
    uVar10 = iVar15;
    if (iVar6 == 0) {
        if (0x13f < iVar8 + 0x49U) goto code_r0x0800a268;
        iVar6 = regmap_field_read(*(arg1 + (iVar8 + 0x49U) * 8 + 0x28),arg4 + 0x1c);
        if (iVar6 == 0) {
            if (**(arg1 + 0xa30) < 3) {
                uVar7 = 0;
                *(arg4 + 8) = 0;
                *(arg4 + 0x18) = 0;
                *(arg4 + 0x28) = 0;
code_r0x0800a080:
                *(arg4 + 0x24) = uVar7;
                iVar15 = *arg3;
                iStack_5c = 0;
                if (0x13f < iVar8 + 0xb9U) {
code_r0x0800a268:
    //WARNING: Does not return
                    pcVar5 = SoftwareBreakpoint(0x5512,0x800a26c);
                    (*pcVar5)();
                }
                iVar12 = *(*(iVar15 + 0xa38) + 0xb8);
                iVar3 = *(*(iVar15 + 0xa38) + 0xbc);
                iVar6 = regmap_field_read(*(iVar15 + (iVar8 + 0xb9U) * 8 + 0x28),&iStack_5c);
                if (iVar6 == 0) {
                    if ((*(*(iVar15 + 0xa30) + 4) >> 1 & 1) == 0) {
                        uVar14 = (iVar12 - iVar3) + 0x1f;
                        iVar6 = (iStack_5c << (uVar14 & 0x1f)) >> (uVar14 & 0x1f);
                        iVar12 = 100;
                    }
                    else {
                        iVar12 = iStack_5c * 1000 - *(arg3 + 0x10);
                        iVar3 = *(arg3 + 0x18);
                        if (iVar12 < 1) {
                            if (iVar12 < 0) {
                                iVar6 = iVar3;
                                if (iVar3 < 0) {
                                    iVar6 = iVar3 + 1;
                                }
                                iVar12 = iVar12 - (iVar6 >> 1);
                            }
                            else {
                                iVar12 = 0;
                            }
                        }
                        else {
                            iVar6 = iVar3;
                            if (iVar3 < 0) {
                                iVar6 = iVar3 + 1;
                            }
                            iVar12 = iVar12 + (iVar6 >> 1);
                        }
                        iVar6 = 0;
                        if (iVar3 != 0) {
                            iVar6 = iVar12 / iVar3;
                        }
                        iVar12 = 1000;
                    }
                    iVar6 = iVar6 * iVar12;
                }
                *(arg4 + 4) = iVar6;
                iVar15 = *arg3;
                iStack_5c = 0;
                iVar6 = *(*(iVar15 + 0xa38) + 0xb8);
                iVar12 = *(*(iVar15 + 0xa38) + 0xbc);
                iVar8 = regmap_field_read(*(iVar15 + (iVar8 + 0x69) * 8 + 0x28),&iStack_5c);
                if (iVar8 == 0) {
                    if ((*(*(iVar15 + 0xa30) + 4) >> 1 & 1) == 0) {
                        uVar14 = (iVar6 - iVar12) + 0x1f;
                        iVar8 = (iStack_5c << (uVar14 & 0x1f)) >> (uVar14 & 0x1f);
                        iVar6 = 100;
                    }
                    else {
                        iVar6 = iStack_5c * 1000 - *(arg3 + 0x10);
                        iVar12 = *(arg3 + 0x18);
                        if (iVar6 < 1) {
                            if (iVar6 < 0) {
                                iVar8 = iVar12;
                                if (iVar12 < 0) {
                                    iVar8 = iVar12 + 1;
                                }
                                iVar6 = iVar6 - (iVar8 >> 1);
                            }
                            else {
                                iVar6 = 0;
                            }
                        }
                        else {
                            iVar8 = iVar12;
                            if (iVar12 < 0) {
                                iVar8 = iVar12 + 1;
                            }
                            iVar6 = iVar6 + (iVar8 >> 1);
                        }
                        iVar8 = 0;
                        if (iVar12 != 0) {
                            iVar8 = iVar6 / iVar12;
                        }
                        iVar6 = 1000;
                    }
                    iVar8 = iVar8 * iVar6;
                }
                *(arg4 + 0x14) = iVar8;
                if ((arg1 != 0) && (*(arg1 + 0xa60) != 0)) {
                    iVar6 = *arg4;
                    iVar12 = *(arg4 + 0x10);
                    iVar8 = 0;
                    if (iVar6 != 0 || iVar12 != 0) {
                        iVar8 = iVar12;
                    }
                    uVar9 = 0x80007c5;
                    if ((iVar6 != 0 || iVar12 != 0) || *(arg4 + 0x20) != 0) {
                        uVar9 = 0x80007c1;
                    }
                    iVar15 = sp_el0;
                    uVar10 = 0x80005be;
                    uVar11 = arg2 & 0xffffffff;
                    ipc_log_string(*(arg1 + 0xa60),
                                   "%s: [%u] %s%s: status(%u|%u|%u) | clr(%u|%u|%u) | mask(%u|%u|%u)\n [%s]\n",
                                   "tsens_read_irq_state",uVar11,"tsens_read_irq_state",uVar9,iVar8,iVar6,
                                   *(arg4 + 0x20),*(arg4 + 0x1c),*(arg4 + 0xc),*(arg4 + 0x2c),*(arg4 + 0x18),
                                   *(arg4 + 8),*(arg4 + 0x28),iVar15 + 0x7a8);
                }
            }
            else {
                if (0x13f < iVar8 + 0xa9U) goto code_r0x0800a268;
                iVar6 = regmap_field_read(*(arg1 + (iVar8 + 0xa9U) * 8 + 0x28),arg4 + 8);
                if ((iVar6 == 0) &&
                   (iVar6 = regmap_field_read(*(arg1 + (iVar8 + 0x59) * 8 + 0x28),arg4 + 0x18), iVar6 == 0)) {
                    if (0x13f < iVar8 + 0xe9U) goto code_r0x0800a268;
                    iVar6 = regmap_field_read(*(arg1 + (iVar8 + 0xe9U) * 8 + 0x28),arg4 + 0x2c);
                    if (iVar6 == 0) {
                        if (0x13f < iVar8 + 0xf9U) goto code_r0x0800a268;
                        iVar6 = regmap_field_read(*(arg1 + (iVar8 + 0xf9U) * 8 + 0x28),arg4 + 0x28);
                        if (iVar6 == 0) {
                            uVar7 = sym.tsens_hw_to_mC(arg3,iVar8 + 0x109);
                            goto code_r0x0800a080;
                        }
                    }
                }
            }
        }
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_58) {
        return;
    }
    auVar16 = __stack_chk_fail();
    iVar15 = auVar16._0_8_;
    *extraout_x18 = sym.tsens_set_interrupt;
    if ((iVar15 != 0) && (*(iVar15 + 0xa60) != 0)) {
        pcVar1 = 0x8000668;
        if (uVar10 != 1) {
            pcVar1 = "CRITICAL";
        }
        pcVar2 = 0x8000685;
        if (uVar10 != 0) {
            pcVar2 = pcVar1;
        }
        iVar4 = sp_el0;
        uVar9 = 0x800078c;
        if ((uVar11 & 1) == 0) {
            uVar9 = 0x800069a;
        }
        ipc_log_string(*(iVar15 + 0xa60),"%s: [%u] %s: %s -> %s\n [%s]\n","tsens_set_interrupt",
                       auVar16._8_8_ & 0xffffffff,"tsens_set_interrupt",pcVar2,uVar9,iVar4 + 0x7a8,
                       &stack0xffffffffffffffb0,sym.tsens_set_interrupt,arg3,arg1,arg4,arg2 & 0xffffffff);
    }
    if (**(iVar15 + 0xa30) < 3) {
        if (uVar10 == 2) {
            return;
        }
        if (uVar10 == 1) {
            iVar8 = 0x99;
code_r0x0800a3d8:
            uVar10 = iVar8 + auVar16._8_4_;
            if (0x13f < uVar10) {
code_r0x0800a3e4:
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(0x5512,0x800a3e8);
                (*pcVar5)();
            }
        }
        else {
            if (uVar10 == 0) {
                iVar8 = 0x49;
                goto code_r0x0800a3d8;
            }
            uVar10 = 0;
        }
        uVar14 = ~uVar11 & 1;
        uVar9 = *(iVar15 + uVar10 * 8 + 0x28);
        goto code_r0x0800a400;
    }
    if (uVar10 < 3) {
        iVar8 = auVar16._8_4_ + uVar10 * 0x50;
        uVar10 = iVar8 + 0x59;
        if ((uVar11 & 1) != 0) {
            if (0x13f < uVar10) goto code_r0x0800a3e4;
            goto code_r0x0800a364;
        }
        if (0x13f < uVar10) goto code_r0x0800a3e4;
        uVar14 = iVar8 + 0x49;
code_r0x0800a37c:
        regmap_field_update_bits_base(*(iVar15 + uVar10 * 8 + 0x28),0xffffffff,1,0,0,0);
        if (0x13f < uVar14) goto code_r0x0800a3e4;
        puVar13 = iVar15 + uVar14 * 8 + 0x28;
        regmap_field_update_bits_base(*puVar13,0xffffffff,1,0,0,0);
    }
    else {
        uVar10 = 0;
        uVar14 = 0;
        if ((uVar11 & 1) == 0) goto code_r0x0800a37c;
code_r0x0800a364:
        puVar13 = iVar15 + uVar10 * 8 + 0x28;
    }
    uVar9 = *puVar13;
    uVar14 = 0;
code_r0x0800a400:
    regmap_field_update_bits_base(uVar9,0xffffffff,uVar14,0,0,0);
    return;
}


// ===== sym.tsens_set_interrupt @ 0x0800a270 (size 440) =====

void sym.tsens_set_interrupt(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    char *pcVar2;
    int64_t iVar3;
    code *pcVar4;
    ulong uVar5;
    int iVar6;
    uint32_t uVar7;
    ulong *in_x18;
    ulong *puVar8;
    uint32_t uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar7 = arg3;
    if ((arg1 != 0) && (*(arg1 + 0xa60) != 0)) {
        pcVar1 = 0x8000668;
        if (uVar7 != 1) {
            pcVar1 = "CRITICAL";
        }
        pcVar2 = 0x8000685;
        if (uVar7 != 0) {
            pcVar2 = pcVar1;
        }
        iVar3 = sp_el0;
        uVar5 = 0x800078c;
        if ((arg4 & 1U) == 0) {
            uVar5 = 0x800069a;
        }
        ipc_log_string(*(arg1 + 0xa60),"%s: [%u] %s: %s -> %s\n [%s]\n","tsens_set_interrupt",arg2 & 0xffffffff,
                       "tsens_set_interrupt",pcVar2,uVar5,iVar3 + 0x7a8);
    }
    if (**(arg1 + 0xa30) < 3) {
        if (uVar7 == 2) {
            return;
        }
        if (uVar7 == 1) {
            iVar6 = 0x99;
code_r0x0800a3d8:
            uVar7 = iVar6 + arg2;
            if (0x13f < uVar7) {
code_r0x0800a3e4:
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x800a3e8);
                (*pcVar4)();
            }
        }
        else {
            if (uVar7 == 0) {
                iVar6 = 0x49;
                goto code_r0x0800a3d8;
            }
            uVar7 = 0;
        }
        uVar9 = ~arg4 & 1;
        uVar5 = *(arg1 + uVar7 * 8 + 0x28);
        goto code_r0x0800a400;
    }
    if (uVar7 < 3) {
        iVar6 = arg2 + uVar7 * 0x50;
        uVar7 = iVar6 + 0x59;
        if ((arg4 & 1U) != 0) {
            if (0x13f < uVar7) goto code_r0x0800a3e4;
            goto code_r0x0800a364;
        }
        if (0x13f < uVar7) goto code_r0x0800a3e4;
        uVar9 = iVar6 + 0x49;
code_r0x0800a37c:
        regmap_field_update_bits_base(*(arg1 + uVar7 * 8 + 0x28),0xffffffff,1,0,0,0);
        if (0x13f < uVar9) goto code_r0x0800a3e4;
        puVar8 = arg1 + uVar9 * 8 + 0x28;
        regmap_field_update_bits_base(*puVar8,0xffffffff,1,0,0,0);
    }
    else {
        uVar7 = 0;
        uVar9 = 0;
        if ((arg4 & 1U) == 0) goto code_r0x0800a37c;
code_r0x0800a364:
        puVar8 = arg1 + uVar7 * 8 + 0x28;
    }
    uVar5 = *puVar8;
    uVar9 = 0;
code_r0x0800a400:
    regmap_field_update_bits_base(uVar5,0xffffffff,uVar9,0,0,0);
    return;
}


// ===== sym.tsens_threshold_violated @ 0x0800a428 (size 212) =====

uint64_t sym.tsens_threshold_violated(int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint64_t uVar2;
    int iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = arg2;
    if (0x13f < iVar3 + 0x79U) {
code_r0x0800a4f8:
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5512,0x800a4fc);
        (*pcVar1)();
    }
    uVar2 = regmap_field_read(*(arg1 + (iVar3 + 0x79U) * 8 + 0x28),arg3);
    if (uVar2 == 0) {
        if (0x13f < iVar3 + 0x29U) goto code_r0x0800a4f8;
        uVar2 = regmap_field_read(*(arg1 + (iVar3 + 0x29U) * 8 + 0x28),arg3 + 0x10);
        if (uVar2 == 0) {
            if ((*(*(arg1 + 0xa30) + 4) & 1) != 0) {
                if (0x13f < iVar3 + 0xc9U) goto code_r0x0800a4f8;
                uVar2 = regmap_field_read(*(arg1 + (iVar3 + 0xc9U) * 8 + 0x28),arg3 + 0x20);
                if (uVar2 != 0) {
                    return uVar2;
                }
            }
            if ((*arg3 == 0) && (*(arg3 + 0x10) == 0)) {
                uVar2 = *(arg3 + 0x20) != 0;
            }
            else {
                uVar2 = 1;
            }
        }
    }
    return uVar2;
}


// ===== sym.tsens_suspend @ 0x0800a4fc (size 140) =====

ulong sym.tsens_suspend(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x98);
    iVar3 = *(iVar1 + 0xa40);
    if ((iVar3 == 0) || (pcVar4 = *(iVar3 + 0x28), pcVar4 == NULL)) {
        uVar2 = 0;
    }
    else {
        if (9 < (pcVar4 + -0x8008408 >> 3 | pcVar4 << 0x3d)) {
            __cfi_slowpath_diag(0x6ae5c9c5338877c9,pcVar4,0x80003c0);
        }
        uVar2 = (*pcVar4)(iVar1);
    }
    return uVar2;
}


// ===== sym.tsens_resume @ 0x0800a588 (size 140) =====

ulong sym.tsens_resume(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x98);
    iVar3 = *(iVar1 + 0xa40);
    if ((iVar3 == 0) || (pcVar4 = *(iVar3 + 0x30), pcVar4 == NULL)) {
        uVar2 = 0;
    }
    else {
        if (9 < (pcVar4 + -0x8008408 >> 3 | pcVar4 << 0x3d)) {
            __cfi_slowpath_diag(0x6ae5c9c5338877c9,pcVar4,0x80003e0);
        }
        uVar2 = (*pcVar4)(iVar1);
    }
    return uVar2;
}


// ===== sym.__cfi_check_fail @ 0x0800a614 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800a658

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
    //switch table (4 cases) at 0x8000400
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800a66c);
    (*pcVar1)();
}


// ===== sym.calibrate_v1 @ 0x0800a66c (size 1088) =====

uint64_t sym.calibrate_v1(int64_t arg1)

{
    uint32_t arg4;
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    code *pcVar6;
    uint32_t *puVar7;
    int iVar8;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    puVar7 = sym.qfprom_read(*arg1,"calib");
    if (puVar7 < 0xfffffffffffff001) {
        arg4 = puVar7[4] & 7;
        if (arg4 == 3) {
            uStack_78 = CONCAT44(*puVar7 >> 0x12,*puVar7 >> 6) & 0x3f0000003f;
            uVar4 = *puVar7 >> 0x1e | (puVar7[1] & 0xf) << 2;
            uStack_70 = CONCAT44(puVar7[1] >> 10,uVar4) & 0x3fffffffff;
            uStack_68 = CONCAT44(puVar7[2] >> 6,puVar7[1] >> 0x16) & 0x3f0000003f;
            uVar1 = puVar7[2] >> 0x1e | (puVar7[3] & 0xf) << 2;
            uStack_60 = CONCAT44(uVar1,puVar7[2] >> 0x12) & 0xffffffff0000003f;
            iVar8 = *(arg1 + 8);
            uStack_58 = CONCAT44(puVar7[3] >> 0x16,puVar7[3] >> 10) & 0x3f0000003f;
            if (iVar8 != 0) {
                uVar3 = puVar7[4] >> 0xb & 0xff;
                iVar2 = ((*puVar7 >> 6 & 0x3f) + uVar3) * 4;
                uStack_78 = CONCAT44(uStack_78._4_4_,iVar2);
                if ((iVar8 != 1) && (uStack_78 = CONCAT44(((*puVar7 >> 0x12 & 0x3f) + uVar3) * 4,iVar2), iVar8 != 2))
                {
                    iVar2 = (uVar4 + uVar3) * 4;
                    uStack_70 = CONCAT44(uStack_70._4_4_,iVar2);
                    if ((iVar8 != 3) &&
                       (uStack_70 = CONCAT44(((puVar7[1] >> 10 & 0x3f) + uVar3) * 4,iVar2), iVar8 != 4)) {
                        iVar2 = ((puVar7[1] >> 0x16 & 0x3f) + uVar3) * 4;
                        uStack_68 = CONCAT44(uStack_68._4_4_,iVar2);
                        if ((iVar8 != 5) &&
                           (uStack_68 = CONCAT44(((puVar7[2] >> 6 & 0x3f) + uVar3) * 4,iVar2), iVar8 != 6)) {
                            iVar2 = ((puVar7[2] >> 0x12 & 0x3f) + uVar3) * 4;
                            uStack_60 = CONCAT44(uVar1,iVar2);
                            if ((iVar8 != 7) && (uStack_60 = CONCAT44((uVar1 + uVar3) * 4,iVar2), iVar8 != 8)) {
                                iVar2 = ((puVar7[3] >> 10 & 0x3f) + uVar3) * 4;
                                uStack_58 = CONCAT44(uStack_58._4_4_,iVar2);
                                if ((iVar8 != 9) &&
                                   (uStack_58 = CONCAT44(((puVar7[3] >> 0x16 & 0x3f) + uVar3) * 4,iVar2), iVar8 != 10)
                                   ) goto code_r0x0800aaa8;
                            }
                        }
                    }
                }
            }
code_r0x0800a838:
            uStack_50 = CONCAT44(*puVar7 >> 0xc,*puVar7) & 0x3f0000003f;
            uStack_48 = CONCAT44(puVar7[1] >> 4,*(puVar7 + 3)) & 0x3f0000003f;
            uStack_40 = CONCAT44(puVar7[2],*(puVar7 + 6)) & 0x3f0000003f;
            uStack_38 = CONCAT14(*(puVar7 + 0xb),puVar7[2] >> 0xc) & 0x3f0000003f;
            uStack_30 = CONCAT24(*(puVar7 + 0xe),puVar7[3] >> 4) & 0x3f0000003f;
            if (iVar8 != 0) {
                uVar4 = puVar7[4] >> 3 & 0xff;
                iVar2 = ((*puVar7 & 0x3f) + uVar4) * 4;
                uStack_50 = CONCAT44(uStack_50._4_4_,iVar2);
                if ((iVar8 != 1) && (uStack_50 = CONCAT44(((*puVar7 >> 0xc & 0x3f) + uVar4) * 4,iVar2), iVar8 != 2)) {
                    iVar2 = ((*(puVar7 + 3) & 0x3f) + uVar4) * 4;
                    uStack_48 = CONCAT44(uStack_48._4_4_,iVar2);
                    if ((iVar8 != 3) &&
                       (uStack_48 = CONCAT44(((puVar7[1] >> 4 & 0x3f) + uVar4) * 4,iVar2), iVar8 != 4)) {
                        iVar2 = ((*(puVar7 + 6) & 0x3f) + uVar4) * 4;
                        uStack_40 = CONCAT44(uStack_40._4_4_,iVar2);
                        if ((iVar8 != 5) && (uStack_40 = CONCAT44(((puVar7[2] & 0x3f) + uVar4) * 4,iVar2), iVar8 != 6)
                           ) {
                            iVar2 = ((puVar7[2] >> 0xc & 0x3f) + uVar4) * 4;
                            uStack_38 = CONCAT44(uStack_38._4_4_,iVar2);
                            if ((iVar8 != 7) &&
                               (uStack_38 = CONCAT44(((*(puVar7 + 0xb) & 0x3f) + uVar4) * 4,iVar2), iVar8 != 8)) {
                                iVar2 = ((puVar7[3] >> 4 & 0x3f) + uVar4) * 4;
                                uStack_30 = CONCAT44(uStack_30._4_4_,iVar2);
                                if (iVar8 != 9) {
                                    uStack_30 = CONCAT44(((*(puVar7 + 0xe) & 0x3f) + uVar4) * 4,iVar2);
                                    goto joined_r0x0800a980;
                                }
                            }
                        }
                    }
                }
            }
        }
        else {
            if (arg4 == 2) {
                iVar8 = *(arg1 + 8);
                goto code_r0x0800a838;
            }
            iVar8 = *(arg1 + 8);
            if (iVar8 != 0) {
                uStack_50 = CONCAT44(uStack_50._4_4_,500);
                uStack_78 = CONCAT44(uStack_78._4_4_,0x30c);
                if (iVar8 == 1) goto code_r0x0800aa58;
                uStack_50 = 0x1f4000001f4;
                uStack_78 = 0x30c0000030c;
                if (iVar8 == 2) goto code_r0x0800aa58;
                uStack_48 = CONCAT44(uStack_48._4_4_,500);
                uStack_70 = CONCAT44(uStack_70._4_4_,0x30c);
                if (iVar8 == 3) goto code_r0x0800aa58;
                uStack_48 = 0x1f4000001f4;
                uStack_70 = 0x30c0000030c;
                if (iVar8 == 4) goto code_r0x0800aa58;
                uStack_40 = CONCAT44(uStack_40._4_4_,500);
                uStack_68 = CONCAT44(uStack_68._4_4_,0x30c);
                if (iVar8 == 5) goto code_r0x0800aa58;
                uStack_40 = 0x1f4000001f4;
                uStack_68 = 0x30c0000030c;
                if (iVar8 == 6) goto code_r0x0800aa58;
                uStack_38 = CONCAT44(uStack_38._4_4_,500);
                uStack_60 = CONCAT44(uStack_60._4_4_,0x30c);
                if (iVar8 == 7) goto code_r0x0800aa58;
                uStack_38 = 0x1f4000001f4;
                uStack_60 = 0x30c0000030c;
                if (iVar8 == 8) goto code_r0x0800aa58;
                uStack_30 = CONCAT44(uStack_30._4_4_,500);
                uStack_58 = CONCAT44(uStack_58._4_4_,0x30c);
                if (iVar8 == 9) goto code_r0x0800aa58;
                uStack_30 = 0x1f4000001f4;
                uStack_58 = 0x30c0000030c;
joined_r0x0800a980:
                if (iVar8 != 10) goto code_r0x0800aaa8;
            }
        }
code_r0x0800aa58:
        sym.compute_intercept_slope(arg1,&uStack_50,&uStack_78,arg4);
        kfree(puVar7);
        puVar7 = NULL;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return puVar7 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x0800aaa8:
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x5512,0x800aaac);
    (*pcVar6)();
}


// ===== sym.calibrate_8976 @ 0x0800aaac (size 2440) =====

uint32_t * sym.calibrate_8976(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    bool bVar6;
    bool bVar7;
    bool bVar8;
    bool bVar9;
    code *pcVar10;
    uint32_t *puVar11;
    bool bVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    bool bVar15;
    bool bVar16;
    uint32_t uVar17;
    bool bVar18;
    uint32_t uVar19;
    uint32_t uVar20;
    uint32_t uVar21;
    uint32_t uVar22;
    uint32_t uVar23;
    uint32_t uVar24;
    uint32_t uVar25;
    ulong *in_x18;
    uint32_t uVar26;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar11 = sym.qfprom_read(*arg1,"calib");
    if (0xfffffffffffff000 < puVar11) {
        return puVar11;
    }
    uVar19 = puVar11[4];
    if ((uVar19 & 3) == 3) {
        uVar2 = *(arg1 + 8);
        if (0xb < uVar2) goto code_r0x0800b430;
    }
    else {
        if ((uVar19 & 3) != 2) {
            uVar26 = *(arg1 + 8);
            if (0xb < uVar26) goto code_r0x0800b430;
            bVar15 = false;
            bVar5 = false;
            bVar6 = false;
            bVar18 = false;
            bVar16 = false;
            bVar12 = false;
            bVar7 = false;
            bVar8 = false;
            bVar9 = false;
            bVar4 = false;
            bVar3 = true;
            uVar25 = uVar26;
            uVar24 = uVar26;
            uVar23 = uVar26;
            uVar22 = uVar26;
            uVar21 = uVar26;
            uVar20 = uVar26;
            uVar17 = uVar26;
            uVar14 = uVar26;
            uVar13 = uVar26;
            uVar19 = uVar26;
            switch(*(uVar26 * 2 + 0x8002ef8) * 4 + 0x800ac14) {
            case 0x800ac18:
                bVar15 = false;
                bVar5 = false;
                bVar6 = false;
                bVar18 = false;
                bVar16 = false;
                bVar12 = false;
                bVar7 = false;
                bVar8 = false;
                bVar9 = false;
                uVar26 = 0;
                uVar17 = 0;
                uVar14 = 0;
                uVar13 = 0;
                uVar25 = 0;
                uVar24 = 0;
                uVar23 = 0;
                uVar22 = 0;
                uVar21 = 0;
                uVar19 = 0;
                bVar3 = false;
                bVar4 = true;
                uVar20 = 500;
                break;
            case 0x800ad64:
                bVar15 = false;
                bVar5 = false;
                bVar6 = false;
                bVar18 = false;
                bVar16 = false;
                bVar12 = false;
                bVar7 = false;
                bVar8 = false;
                bVar9 = false;
                uVar17 = 0;
                uVar14 = 0;
                uVar13 = 0;
                uVar25 = 0;
                uVar24 = 0;
                uVar23 = 0;
                uVar22 = 0;
                uVar21 = 0;
                uVar19 = 0;
                bVar3 = false;
                bVar4 = false;
                uVar20 = 500;
                uVar26 = 500;
                break;
            case 0x800adc4:
                bVar5 = false;
                bVar6 = false;
                bVar18 = false;
                bVar16 = false;
                bVar12 = false;
                bVar7 = false;
                bVar8 = false;
                bVar9 = false;
                uVar14 = 0;
                uVar13 = 0;
                uVar25 = 0;
                uVar24 = 0;
                uVar23 = 0;
                uVar22 = 0;
                uVar21 = 0;
                uVar19 = 0;
                bVar3 = false;
                bVar4 = false;
                uVar20 = 500;
                bVar15 = true;
                uVar26 = 500;
                uVar17 = 500;
                break;
            case 0x800ae24:
                bVar6 = false;
                bVar18 = false;
                bVar16 = false;
                bVar12 = false;
                bVar7 = false;
                bVar8 = false;
                bVar9 = false;
                uVar13 = 0;
                uVar25 = 0;
                uVar24 = 0;
                uVar23 = 0;
                uVar22 = 0;
                uVar21 = 0;
                uVar19 = 0;
                bVar3 = false;
                bVar4 = false;
                uVar20 = 500;
                bVar15 = true;
                bVar5 = true;
                uVar26 = 500;
                uVar17 = 500;
                uVar14 = 500;
                break;
            case 0x800ae84:
                bVar18 = false;
                bVar16 = false;
                bVar12 = false;
                bVar7 = false;
                bVar8 = false;
                bVar9 = false;
                uVar25 = 0;
                uVar24 = 0;
                uVar23 = 0;
                uVar22 = 0;
                uVar21 = 0;
                uVar19 = 0;
                bVar3 = false;
                bVar4 = false;
                uVar20 = 500;
                bVar15 = true;
                bVar5 = true;
                bVar6 = true;
                uVar26 = 500;
                uVar17 = 500;
                uVar14 = 500;
                uVar13 = 500;
                break;
            case 0x800aee4:
                bVar16 = false;
                bVar12 = false;
                bVar7 = false;
                bVar8 = false;
                bVar9 = false;
                uVar24 = 0;
                uVar23 = 0;
                uVar22 = 0;
                uVar21 = 0;
                uVar19 = 0;
                bVar3 = false;
                bVar4 = false;
                uVar20 = 500;
                bVar15 = true;
                bVar5 = true;
                bVar6 = true;
                bVar18 = true;
                uVar26 = 500;
                uVar17 = 500;
                uVar14 = 500;
                uVar13 = 500;
                uVar25 = 500;
                break;
            case 0x800af44:
                bVar12 = false;
                bVar7 = false;
                bVar8 = false;
                bVar9 = false;
                uVar23 = 0;
                uVar22 = 0;
                uVar21 = 0;
                uVar19 = 0;
                bVar3 = false;
                bVar4 = false;
                uVar20 = 500;
                bVar15 = true;
                bVar5 = true;
                bVar6 = true;
                bVar18 = true;
                bVar16 = true;
                uVar26 = 500;
                uVar17 = 500;
                uVar14 = 500;
                uVar13 = 500;
                uVar25 = 500;
                uVar24 = 500;
                break;
            case 0x800afa4:
                bVar7 = false;
                bVar8 = false;
                bVar9 = false;
                uVar22 = 0;
                uVar21 = 0;
                uVar19 = 0;
                bVar3 = false;
                bVar4 = false;
                uVar20 = 500;
                bVar15 = true;
                bVar5 = true;
                bVar6 = true;
                bVar18 = true;
                bVar16 = true;
                bVar12 = true;
                uVar26 = 500;
                uVar17 = 500;
                uVar14 = 500;
                uVar13 = 500;
                uVar25 = 500;
                uVar24 = 500;
                uVar23 = 500;
                break;
            case 0x800b004:
                bVar8 = false;
                bVar9 = false;
                uVar21 = 0;
                uVar19 = 0;
                bVar3 = false;
                bVar4 = false;
                uVar20 = 500;
                bVar15 = true;
                bVar5 = true;
                bVar6 = true;
                bVar18 = true;
                bVar16 = true;
                bVar12 = true;
                bVar7 = true;
                uVar26 = 500;
                uVar17 = 500;
                uVar14 = 500;
                uVar13 = 500;
                uVar25 = 500;
                uVar24 = 500;
                uVar23 = 500;
                uVar22 = 500;
                break;
            case 0x800b064:
                bVar9 = false;
                uVar19 = 0;
                bVar3 = false;
                bVar4 = false;
                uVar20 = 500;
                bVar15 = true;
                bVar5 = true;
                bVar6 = true;
                bVar18 = true;
                bVar16 = true;
                bVar12 = true;
                bVar7 = true;
                bVar8 = true;
                uVar26 = 500;
                uVar17 = 500;
                uVar14 = 500;
                uVar13 = 500;
                uVar25 = 500;
                uVar24 = 500;
                uVar23 = 500;
                uVar22 = 500;
                uVar21 = 500;
                break;
            case 0x800b0c4:
                bVar3 = false;
                bVar4 = false;
                uVar20 = 500;
                bVar15 = true;
                bVar5 = true;
                bVar6 = true;
                bVar18 = true;
                bVar16 = true;
                bVar12 = true;
                bVar7 = true;
                bVar8 = true;
                bVar9 = true;
                uVar26 = 500;
                uVar17 = 500;
                uVar14 = 500;
                uVar13 = 500;
                uVar25 = 500;
                uVar24 = 500;
                uVar23 = 500;
                uVar22 = 500;
                uVar21 = 500;
                uVar19 = 500;
            }
            goto code_r0x0800b2e0;
        }
        uVar2 = *(arg1 + 8);
    }
    uVar1 = *puVar11;
    uVar17 = puVar11[1] & 0x3f;
    uVar14 = puVar11[1] >> 0xc & 0x3f;
    uVar20 = uVar1 >> 8 & 0x3f;
    uVar26 = uVar1 >> 0x14 & 0x3f;
    uVar13 = puVar11[2] >> 8 & 0x3f;
    uVar25 = puVar11[2] >> 0x14 & 0x3f;
    uVar24 = puVar11[3] & 0x3f;
    uVar23 = puVar11[3] >> 0xc & 0x3f;
    uVar22 = uVar19 >> 3 & 0x3f;
    uVar21 = uVar19 >> 0xf & 0x3f;
    uVar19 = puVar11[5] & 1 | uVar19 >> 0x1b;
    if (uVar2 == 0) {
        bVar15 = false;
        bVar5 = false;
        bVar6 = false;
        bVar18 = false;
        bVar16 = false;
        bVar12 = false;
        bVar7 = false;
        bVar8 = false;
        bVar4 = false;
        bVar3 = true;
        bVar9 = false;
    }
    else {
        uVar1 = uVar1 & 0xff;
        uVar20 = (uVar20 + uVar1) * 4;
        if (uVar2 == 1) {
            bVar15 = false;
            bVar5 = false;
            bVar6 = false;
            bVar18 = false;
            bVar16 = false;
            bVar12 = false;
            bVar7 = false;
            bVar8 = false;
            bVar9 = false;
            bVar3 = false;
            bVar4 = true;
        }
        else {
            uVar26 = (uVar26 + uVar1) * 4;
            if (uVar2 == 2) {
                bVar15 = false;
                bVar5 = false;
                bVar6 = false;
                bVar18 = false;
                bVar16 = false;
                bVar12 = false;
                bVar7 = false;
                bVar8 = false;
                bVar9 = false;
                bVar3 = false;
                bVar4 = false;
            }
            else {
                uVar17 = (uVar17 + uVar1) * 4;
                if (uVar2 == 3) {
                    bVar5 = false;
                    bVar6 = false;
                    bVar18 = false;
                    bVar16 = false;
                    bVar12 = false;
                    bVar7 = false;
                    bVar8 = false;
                    bVar9 = false;
                    bVar3 = false;
                    bVar4 = false;
                    bVar15 = true;
                }
                else {
                    uVar14 = (uVar14 + uVar1) * 4;
                    if (uVar2 == 4) {
                        bVar6 = false;
                        bVar18 = false;
                        bVar16 = false;
                        bVar12 = false;
                        bVar7 = false;
                        bVar8 = false;
                        bVar9 = false;
                        bVar3 = false;
                        bVar4 = false;
                        bVar15 = true;
                        bVar5 = true;
                    }
                    else {
                        uVar13 = (uVar13 + uVar1) * 4;
                        if (uVar2 == 5) {
                            bVar18 = false;
                            bVar16 = false;
                            bVar12 = false;
                            bVar7 = false;
                            bVar8 = false;
                            bVar9 = false;
                            bVar3 = false;
                            bVar4 = false;
                            bVar15 = true;
                            bVar5 = true;
                            bVar6 = true;
                        }
                        else {
                            uVar25 = (uVar25 + uVar1) * 4;
                            if (uVar2 == 6) {
                                bVar16 = false;
                                bVar12 = false;
                                bVar7 = false;
                                bVar8 = false;
                                bVar9 = false;
                                bVar3 = false;
                                bVar4 = false;
                                bVar15 = true;
                                bVar5 = true;
                                bVar6 = true;
                                bVar18 = true;
                            }
                            else {
                                uVar24 = (uVar24 + uVar1) * 4;
                                if (uVar2 == 7) {
                                    bVar12 = false;
                                    bVar7 = false;
                                    bVar8 = false;
                                    bVar9 = false;
                                    bVar3 = false;
                                    bVar4 = false;
                                    bVar15 = true;
                                    bVar5 = true;
                                    bVar6 = true;
                                    bVar18 = true;
                                    bVar16 = true;
                                }
                                else {
                                    uVar23 = (uVar23 + uVar1) * 4;
                                    if (uVar2 == 8) {
                                        bVar7 = false;
                                        bVar8 = false;
                                        bVar9 = false;
                                        bVar3 = false;
                                        bVar4 = false;
                                        bVar15 = true;
                                        bVar5 = true;
                                        bVar6 = true;
                                        bVar18 = true;
                                        bVar16 = true;
                                        bVar12 = true;
                                    }
                                    else {
                                        uVar22 = (uVar1 + uVar22) * 4;
                                        if (uVar2 == 9) {
                                            bVar8 = false;
                                            bVar9 = false;
                                            bVar3 = false;
                                            bVar4 = false;
                                            bVar15 = true;
                                            bVar5 = true;
                                            bVar6 = true;
                                            bVar18 = true;
                                            bVar16 = true;
                                            bVar12 = true;
                                            bVar7 = true;
                                        }
                                        else {
                                            uVar21 = (uVar1 + uVar21) * 4;
                                            if (uVar2 == 10) {
                                                bVar9 = false;
                                                bVar3 = false;
                                                bVar4 = false;
                                                bVar15 = true;
                                                bVar5 = true;
                                                bVar6 = true;
                                                bVar18 = true;
                                                bVar16 = true;
                                                bVar12 = true;
                                                bVar7 = true;
                                                bVar8 = true;
                                            }
                                            else {
                                                if (uVar2 != 0xb) {
code_r0x0800b430:
    //WARNING: Does not return
                                                    pcVar10 = SoftwareBreakpoint(0x5512,0x800b434);
                                                    (*pcVar10)();
                                                }
                                                bVar3 = false;
                                                bVar4 = false;
                                                bVar15 = true;
                                                bVar5 = true;
                                                bVar6 = true;
                                                bVar18 = true;
                                                bVar16 = true;
                                                bVar12 = true;
                                                bVar7 = true;
                                                bVar8 = true;
                                                bVar9 = true;
                                                uVar19 = (uVar19 + uVar1) * 4;
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
    }
code_r0x0800b2e0:
    *(arg1 + 0xa90) = 0xcf1;
    *(arg1 + 0xab8) = 0xccb;
    *(arg1 + 0xae0) = 0xcf8;
    *(arg1 + 0xb08) = 0xcae;
    *(arg1 + 0xb30) = 0xccf;
    *(arg1 + 0xb58) = 0xcb9;
    *(arg1 + 0xb80) = 0xca2;
    *(arg1 + 0xba8) = 0xcc5;
    *(arg1 + 0xbd0) = 0xcb7;
    *(arg1 + 0xbf8) = 0xca7;
    *(arg1 + 0xc20) = 0xcd6;
    if ((((((!bVar3) && (*(arg1 + 0xa88) = uVar20 * 1000 + -0x1843e, !bVar4)) &&
          (*(arg1 + 0xab0) = uVar26 * 1000 + -0x17fca, bVar15)) &&
         ((*(arg1 + 0xad8) = uVar17 * 1000 + -0x18510, bVar5 && (*(arg1 + 0xb00) = uVar14 * 1000 + -0x17c64, bVar6))))
        && ((*(arg1 + 0xb28) = uVar13 * 1000 + -0x18042, bVar18 &&
            ((*(arg1 + 0xb50) = uVar25 * 1000 + -0x17dae, bVar16 &&
             (*(arg1 + 0xb78) = uVar24 * 1000 + -0x17afc, bVar12)))))) &&
       ((*(arg1 + 0xba0) = uVar23 * 1000 + -0x17f16, bVar7 &&
        ((*(arg1 + 0xbc8) = uVar22 * 1000 + -0x17d72, bVar8 && (*(arg1 + 0xbf0) = uVar21 * 1000 + -0x17b92, bVar9)))))
       ) {
        *(arg1 + 0xc18) = uVar19 * 1000 + -0x18114;
    }
    kfree();
    return NULL;
}


// ===== sym.calibrate_8916 @ 0x0800b434 (size 716) =====

uint64_t sym.calibrate_8916(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t arg4;
    uint32_t uVar3;
    int64_t iVar4;
    code *pcVar5;
    uint32_t *puVar6;
    uint32_t *puVar7;
    int iVar8;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_68;
    ulong uStack_60;
    uint32_t uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    uint32_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_58 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    puVar6 = sym.qfprom_read(*arg1,"calib");
    if (puVar6 < 0xfffffffffffff001) {
        puVar7 = sym.qfprom_read(*arg1,"calib_sel");
        if (puVar7 < 0xfffffffffffff001) {
            arg4 = *puVar7 >> 0x1d;
            if (arg4 == 3) {
                uStack_68 = CONCAT44(*puVar6 >> 0x16,*puVar6 >> 0xc) & 0x1f0000001f;
                uStack_60 = CONCAT44(puVar6[1] >> 10,puVar6[1]) & 0x1f0000001f;
                uStack_58 = puVar6[1] >> 0x14 & 0x1f;
                iVar8 = *(arg1 + 8);
                if (iVar8 != 0) {
                    uVar3 = puVar6[1] >> 0x19;
                    iVar2 = ((*puVar6 >> 0xc & 0x1f) + uVar3) * 8;
                    uStack_68 = CONCAT44(uStack_68._4_4_,iVar2);
                    if ((iVar8 != 1) &&
                       (uStack_68 = CONCAT44(((*puVar6 >> 0x16 & 0x1f) + uVar3) * 8,iVar2), iVar8 != 2)) {
                        iVar2 = ((puVar6[1] & 0x1f) + uVar3) * 8;
                        uStack_60 = CONCAT44(uStack_60._4_4_,iVar2);
                        if ((iVar8 != 3) &&
                           ((uStack_60 = CONCAT44(((puVar6[1] >> 10 & 0x1f) + uVar3) * 8,iVar2), iVar8 != 4 &&
                            (uStack_58 = (uStack_58 + uVar3) * 8, iVar8 != 5)))) goto code_r0x0800b6fc;
                    }
                }
code_r0x0800b584:
                uVar3 = *puVar6 >> 7;
                uStack_50 = CONCAT44(*puVar6 >> 0x11,uVar3) & 0x1f0000001f;
                uStack_48 = CONCAT44(puVar6[1] >> 5,*puVar6 >> 0x1b) & 0x1fffffffff;
                uStack_40 = puVar6[1] >> 0xf & 0x1f;
                if (iVar8 != 0) {
                    uVar1 = *puVar6 & 0x7f;
                    iVar2 = ((uVar3 & 0x1f) + uVar1) * 8;
                    uStack_50 = CONCAT44(uStack_50._4_4_,iVar2);
                    if ((iVar8 != 1) &&
                       (uStack_50 = CONCAT44(((*puVar6 >> 0x11 & 0x1f) + uVar1) * 8,iVar2), iVar8 != 2)) {
                        iVar2 = ((*puVar6 >> 0x1b) + uVar1) * 8;
                        uStack_48 = CONCAT44(uStack_48._4_4_,iVar2);
                        if ((iVar8 != 3) &&
                           (uStack_48 = CONCAT44(((puVar6[1] >> 5 & 0x1f) + uVar1) * 8,iVar2), iVar8 != 4)) {
                            uStack_40 = (uStack_40 + uVar1) * 8;
                            goto joined_r0x0800b628;
                        }
                    }
                }
            }
            else {
                if (arg4 == 2) {
                    iVar8 = *(arg1 + 8);
                    goto code_r0x0800b584;
                }
                iVar8 = *(arg1 + 8);
                if (iVar8 != 0) {
                    uStack_50 = CONCAT44(uStack_50._4_4_,500);
                    uStack_68 = CONCAT44(uStack_68._4_4_,0x30c);
                    if (iVar8 == 1) goto code_r0x0800b6a0;
                    uStack_50 = 0x1f4000001f4;
                    uStack_68 = 0x30c0000030c;
                    if (iVar8 == 2) goto code_r0x0800b6a0;
                    uStack_48 = CONCAT44(uStack_48._4_4_,500);
                    uStack_60 = CONCAT44(uStack_60._4_4_,0x30c);
                    if (iVar8 == 3) goto code_r0x0800b6a0;
                    uStack_48 = 0x1f4000001f4;
                    uStack_60 = 0x30c0000030c;
                    if (iVar8 == 4) goto code_r0x0800b6a0;
                    uStack_40 = 500;
                    uStack_58 = 0x30c;
joined_r0x0800b628:
                    if (iVar8 != 5) goto code_r0x0800b6fc;
                }
            }
code_r0x0800b6a0:
            sym.compute_intercept_slope(arg1,&uStack_50,&uStack_68,arg4);
            kfree(puVar6);
            kfree(puVar7);
            puVar6 = NULL;
        }
        else {
            kfree(puVar6);
            puVar6 = puVar7 & 0xffffffff;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return puVar6 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x0800b6fc:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x800b700);
    (*pcVar5)();
}


// ===== sym.calibrate_8939 @ 0x0800b700 (size 1064) =====

uint64_t sym.calibrate_8939(int64_t arg1)

{
    uint32_t arg4;
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int iVar7;
    uint32_t uVar8;
    int64_t iVar9;
    code *pcVar10;
    uint32_t *puVar11;
    int iVar12;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_28 = *(iVar9 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    puVar11 = sym.qfprom_read(*arg1,"calib");
    if (puVar11 < 0xfffffffffffff001) {
        uVar3 = puVar11[0xc];
        uVar5 = puVar11[0xd];
        uVar4 = *puVar11;
        uVar6 = puVar11[1];
        arg4 = uVar3 & 7;
        if (arg4 == 3) {
            uVar2 = puVar11[0x15] >> 8 & 0x20 | puVar11[0x16] >> 0x1b;
            iVar12 = *(arg1 + 8);
            uStack_78 = CONCAT44(uVar3 >> 0x15,uVar3 >> 9) & 0x3f0000003f;
            uStack_70 = CONCAT44(uVar5 >> 0xd,uVar5 >> 1) & 0x3f0000003f;
            uStack_68 = CONCAT44(uVar4 >> 0xe,uVar5 >> 0x19) & 0x3f0000003f;
            uStack_60 = CONCAT44(uVar6 >> 6,uVar4 >> 0x1a) & 0x3fffffffff;
            uStack_58 = CONCAT44(uVar2,uVar6 >> 0x12) & 0xffffffff0000003f;
            if (iVar12 == 0) {
                iVar12 = 0;
            }
            else {
                uVar8 = uVar6 >> 0x18;
                iVar7 = (uVar8 + (uVar3 >> 9 & 0x3f)) * 4;
                uStack_78 = CONCAT44(uStack_78._4_4_,iVar7);
                if (iVar12 == 1) {
                    iVar12 = 1;
                }
                else {
                    uStack_78 = CONCAT44((uVar8 + (uVar3 >> 0x15 & 0x3f)) * 4,iVar7);
                    if (iVar12 == 2) {
                        iVar12 = 2;
                    }
                    else {
                        iVar7 = (uVar8 + (uVar5 >> 1 & 0x3f)) * 4;
                        uStack_70 = CONCAT44(uStack_70._4_4_,iVar7);
                        if (iVar12 == 3) {
                            iVar12 = 3;
                        }
                        else {
                            uStack_70 = CONCAT44((uVar8 + (uVar5 >> 0xd & 0x3f)) * 4,iVar7);
                            if (iVar12 == 4) {
                                iVar12 = 4;
                            }
                            else {
                                iVar7 = (uVar8 + (uVar5 >> 0x19 & 0x3f)) * 4;
                                uStack_68 = CONCAT44(uStack_68._4_4_,iVar7);
                                if (iVar12 == 5) {
                                    iVar12 = 5;
                                }
                                else {
                                    uStack_68 = CONCAT44(((uVar4 >> 0xe & 0x3f) + uVar8) * 4,iVar7);
                                    if (iVar12 == 6) {
                                        iVar12 = 6;
                                    }
                                    else {
                                        iVar7 = (uVar8 + (uVar4 >> 0x1a)) * 4;
                                        uStack_60 = CONCAT44(uStack_60._4_4_,iVar7);
                                        if (iVar12 == 7) {
                                            iVar12 = 7;
                                        }
                                        else {
                                            uStack_60 = CONCAT44(((uVar6 >> 6 & 0x3f) + uVar8) * 4,iVar7);
                                            if (iVar12 == 8) {
                                                iVar12 = 8;
                                            }
                                            else {
                                                iVar7 = ((uVar6 >> 0x12 & 0x3f) + uVar8) * 4;
                                                uStack_58 = CONCAT44(uVar2,iVar7);
                                                if (iVar12 == 9) {
                                                    iVar12 = 9;
                                                }
                                                else {
                                                    uStack_58 = CONCAT44((uVar2 + uVar8) * 4,iVar7);
                                                    if (iVar12 != 10) goto code_r0x0800bb24;
                                                    iVar12 = 10;
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
code_r0x0800b9c4:
            uVar2 = uVar3 >> 0x1b | (uVar5 & 1) << 5;
            uVar8 = puVar11[0x16] >> 0x15;
            uStack_50 = CONCAT44(uVar3 >> 0xf,uVar3 >> 3) & 0x3f0000003f;
            uStack_48 = CONCAT44(uVar5 >> 7,uVar2) & 0x3fffffffff;
            uStack_40 = CONCAT44(uVar4 >> 8,uVar5 >> 0x13) & 0x3f0000003f;
            uStack_38 = CONCAT44(uVar6,uVar4 >> 0x14) & 0x3f0000003f;
            uStack_30 = CONCAT44(uVar8,uVar6 >> 0xc) & 0x3f0000003f;
            if (iVar12 != 0) {
                uVar1 = uVar4 & 0xff;
                iVar7 = (uVar1 + (uVar3 >> 3 & 0x3f)) * 4;
                uStack_50 = CONCAT44(uStack_50._4_4_,iVar7);
                if ((iVar12 != 1) && (uStack_50 = CONCAT44((uVar1 + (uVar3 >> 0xf & 0x3f)) * 4,iVar7), iVar12 != 2)) {
                    iVar7 = (uVar2 + uVar1) * 4;
                    uStack_48 = CONCAT44(uStack_48._4_4_,iVar7);
                    if ((iVar12 != 3) && (uStack_48 = CONCAT44(((uVar5 >> 7 & 0x3f) + uVar1) * 4,iVar7), iVar12 != 4))
                    {
                        iVar7 = ((uVar5 >> 0x13 & 0x3f) + uVar1) * 4;
                        uStack_40 = CONCAT44(uStack_40._4_4_,iVar7);
                        if ((iVar12 != 5) &&
                           (uStack_40 = CONCAT44(((uVar4 >> 8 & 0x3f) + uVar1) * 4,iVar7), iVar12 != 6)) {
                            iVar7 = ((uVar4 >> 0x14 & 0x3f) + uVar1) * 4;
                            uStack_38 = CONCAT44(uStack_38._4_4_,iVar7);
                            if ((iVar12 != 7) &&
                               (uStack_38 = CONCAT44(((uVar6 & 0x3f) + uVar1) * 4,iVar7), iVar12 != 8)) {
                                iVar7 = ((uVar6 >> 0xc & 0x3f) + uVar1) * 4;
                                uStack_30 = CONCAT44(uStack_30._4_4_,iVar7);
                                if (iVar12 != 9) {
                                    uStack_30 = CONCAT44(((uVar8 & 0x3f) + uVar1) * 4,iVar7);
                                    goto joined_r0x0800bad0;
                                }
                            }
                        }
                    }
                }
            }
        }
        else {
            if (arg4 == 2) {
                iVar12 = *(arg1 + 8);
                goto code_r0x0800b9c4;
            }
            iVar12 = *(arg1 + 8);
            if (iVar12 != 0) {
                uStack_50 = CONCAT44(uStack_50._4_4_,500);
                uStack_78 = CONCAT44(uStack_78._4_4_,0x30c);
                if (iVar12 == 1) goto code_r0x0800bad4;
                uStack_50 = 0x1f4000001f4;
                uStack_78 = 0x30c0000030c;
                if (iVar12 == 2) goto code_r0x0800bad4;
                uStack_48 = CONCAT44(uStack_48._4_4_,500);
                uStack_70 = CONCAT44(uStack_70._4_4_,0x30c);
                if (iVar12 == 3) goto code_r0x0800bad4;
                uStack_48 = 0x1f4000001f4;
                uStack_70 = 0x30c0000030c;
                if (iVar12 == 4) goto code_r0x0800bad4;
                uStack_40 = CONCAT44(uStack_40._4_4_,500);
                uStack_68 = CONCAT44(uStack_68._4_4_,0x30c);
                if (iVar12 == 5) goto code_r0x0800bad4;
                uStack_40 = 0x1f4000001f4;
                uStack_68 = 0x30c0000030c;
                if (iVar12 == 6) goto code_r0x0800bad4;
                uStack_38 = CONCAT44(uStack_38._4_4_,500);
                uStack_60 = CONCAT44(uStack_60._4_4_,0x30c);
                if (iVar12 == 7) goto code_r0x0800bad4;
                uStack_38 = 0x1f4000001f4;
                uStack_60 = 0x30c0000030c;
                if (iVar12 == 8) goto code_r0x0800bad4;
                uStack_30 = CONCAT44(uStack_30._4_4_,500);
                uStack_58 = CONCAT44(uStack_58._4_4_,0x30c);
                if (iVar12 == 9) goto code_r0x0800bad4;
                uStack_30 = 0x1f4000001f4;
                uStack_58 = 0x30c0000030c;
joined_r0x0800bad0:
                if (iVar12 != 10) goto code_r0x0800bb24;
            }
        }
code_r0x0800bad4:
        sym.compute_intercept_slope(arg1,&uStack_50,&uStack_78,arg4);
        kfree(puVar11);
        puVar11 = NULL;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_28) {
        return puVar11 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x0800bb24:
    //WARNING: Does not return
    pcVar10 = SoftwareBreakpoint(0x5512,0x800bb28);
    (*pcVar10)();
}


// ===== sym.calibrate_8974 @ 0x0800bb28 (size 2064) =====

uint64_t sym.calibrate_8974(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    code *pcVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    uint32_t arg4;
    uint32_t uVar10;
    uint32_t uVar11;
    int iVar12;
    uint32_t *puVar13;
    uint32_t uVar14;
    int64_t iVar15;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    uint32_t uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    uint32_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    iStack_38 = *(iVar15 + 0x5e0);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_98 = 0;
    puVar8 = sym.qfprom_read(*arg1,"calib");
    if (puVar8 < 0xfffffffffffff001) {
        puVar9 = sym.qfprom_read(*arg1,"calib_backup");
        if (puVar9 < 0xfffffffffffff001) {
            if (puVar9[1] >> 0x1d == 3) {
                uVar10 = 0;
                arg4 = puVar8[5] >> 0x1c & 4 | puVar8[4] >> 0x1e;
                if (arg4 - 1 < 2) {
code_r0x0800bc7c:
                    uVar11 = *puVar9;
                    iVar15 = 0xc;
                    uStack_68 = CONCAT44(*puVar9 >> 0xe,uVar11 >> 8);
                    uStack_60 = CONCAT44(*puVar9 >> 0x1a,*puVar9 >> 0x14);
                    uStack_58 = CONCAT44(puVar9[1] >> 6,puVar9[1]);
                    uStack_50 = CONCAT44(puVar9[1] >> 0x12,puVar9[1] >> 0xc);
                    uVar2 = 0;
                    puVar13 = puVar9 + 2;
                    uVar14 = *puVar13 >> 6;
                    goto code_r0x0800be1c;
                }
                if (arg4 == 3) {
                    uVar10 = puVar9[2] >> 0x12 & 0x3f;
                    uStack_98 = CONCAT44(puVar9[3],puVar9[2] >> 0x1a) & 0x3fffffffff;
                    uStack_90 = CONCAT44(puVar9[3] >> 0xc,puVar9[3] >> 6) & 0x3f0000003f;
                    uStack_88 = CONCAT14(*(puVar8 + 0x13),puVar9[3] >> 0x12) & 0x3f0000003f;
                    uStack_80 = CONCAT44(puVar8[5] >> 6,puVar8[5]) & 0x3f0000003f;
                    uStack_78 = CONCAT44(puVar8[5] >> 0x12,puVar8[5] >> 0xc) & 0x3f0000003f;
                    uStack_70 = *(puVar8 + 0x17) & 0x3f;
                    goto code_r0x0800bc7c;
                }
code_r0x0800beb8:
                uVar11 = 0;
                uVar10 = uVar11;
                if (arg4 == 1) goto code_r0x0800bec4;
code_r0x0800be44:
                if (arg4 == 2) {
                    iVar12 = *(arg1 + 8);
                    if ((iVar12 != 0) &&
                       (uStack_68 = CONCAT44(uStack_68._4_4_,(uStack_68 + uVar11) * 4) | 3, iVar12 != 1)) {
code_r0x0800c1c0:
                        uStack_68 = CONCAT44((uStack_68._4_4_ + uVar11) * 4,uStack_68) | 0x300000000;
                        if (iVar12 != 2) {
                            iVar1 = uStack_60._4_4_;
                            uStack_60 = CONCAT44(uStack_60._4_4_,(uStack_60 + uVar11) * 4) | 3;
                            if (iVar12 != 3) {
                                uStack_60 = CONCAT44((iVar1 + uVar11) * 4,uStack_60) | 0x300000000;
                                if (iVar12 != 4) {
                                    iVar1 = uStack_58._4_4_;
                                    uStack_58 = CONCAT44(uStack_58._4_4_,(uStack_58 + uVar11) * 4) | 3;
                                    if (iVar12 != 5) {
                                        uStack_58 = CONCAT44((iVar1 + uVar11) * 4,uStack_58) | 0x300000000;
                                        if (iVar12 != 6) {
                                            iVar1 = uStack_50._4_4_;
                                            uStack_50 = CONCAT44(uStack_50._4_4_,(uStack_50 + uVar11) * 4) | 3;
                                            if (iVar12 != 7) {
                                                uStack_50 = CONCAT44((iVar1 + uVar11) * 4,uStack_50) | 0x300000000;
                                                if (iVar12 != 8) {
                                                    iVar1 = uStack_48._4_4_;
                                                    uStack_48 = CONCAT44(uStack_48._4_4_,(uStack_48 + uVar11) * 4) | 3;
                                                    if (iVar12 != 9) {
                                                        uStack_48 = CONCAT44((iVar1 + uVar11) * 4,uStack_48) |
                                                                    0x300000000;
                                                        if (iVar12 != 10) {
                                                            uStack_40 = (uStack_40 + uVar11) * 4 | 3;
                                                            goto joined_r0x0800bfac;
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
                }
                else {
                    iVar1 = uStack_98._4_4_;
                    iVar3 = uStack_90._4_4_;
                    iVar4 = uStack_88._4_4_;
                    iVar5 = uStack_80._4_4_;
                    iVar6 = uStack_78._4_4_;
                    if (arg4 == 3) {
                        iVar12 = *(arg1 + 8);
                        if (iVar12 != 0) {
                            uStack_98 = CONCAT44(uStack_98._4_4_,(uStack_98 + uVar10) * 4) | 3;
                            if (iVar12 != 1) {
                                uStack_98 = CONCAT44((iVar1 + uVar10) * 4,uStack_98) | 0x300000000;
                                if (iVar12 != 2) {
                                    uStack_90 = CONCAT44(uStack_90._4_4_,(uStack_90 + uVar10) * 4) | 3;
                                    if (iVar12 != 3) {
                                        uStack_90 = CONCAT44((iVar3 + uVar10) * 4,uStack_90) | 0x300000000;
                                        if (iVar12 != 4) {
                                            uStack_88 = CONCAT44(uStack_88._4_4_,(uStack_88 + uVar10) * 4) | 3;
                                            if (iVar12 != 5) {
                                                uStack_88 = CONCAT44((iVar4 + uVar10) * 4,uStack_88) | 0x300000000;
                                                if (iVar12 != 6) {
                                                    uStack_80 = CONCAT44(uStack_80._4_4_,(uStack_80 + uVar10) * 4) | 3;
                                                    if (iVar12 != 7) {
                                                        uStack_80 = CONCAT44((iVar5 + uVar10) * 4,uStack_80) |
                                                                    0x300000000;
                                                        if (iVar12 != 8) {
                                                            uStack_78 = CONCAT44(uStack_78._4_4_,
                                                                                 (uStack_78 + uVar10) * 4) | 3;
                                                            if (iVar12 != 9) {
                                                                uStack_78 = CONCAT44((iVar6 + uVar10) * 4,uStack_78) |
                                                                            0x300000000;
                                                                if ((iVar12 != 10) &&
                                                                   (uStack_70 = (uStack_70 + uVar10) * 4 | 3,
                                                                   iVar12 != 0xb)) goto code_r0x0800c334;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                uStack_68 = CONCAT44(uStack_68._4_4_,(uStack_68 + uVar11) * 4) | 3;
                                goto code_r0x0800c1c0;
                            }
                            uStack_68 = CONCAT44(uStack_68._4_4_,(uStack_68 + uVar11) * 4) | 3;
                        }
                    }
                    else {
                        iVar12 = *(arg1 + 8);
                        if ((((((iVar12 != 0) && (uStack_98 = CONCAT44(uStack_98._4_4_,0x30c), iVar12 != 1)) &&
                              (uStack_98 = 0x30c0000030c, iVar12 != 2)) &&
                             (((uStack_90 = CONCAT44(uStack_90._4_4_,0x30c), iVar12 != 3 &&
                               (uStack_90 = 0x30c0000030c, iVar12 != 4)) &&
                              ((uStack_88 = CONCAT44(uStack_88._4_4_,0x30c), iVar12 != 5 &&
                               ((uStack_88 = 0x30c0000030c, iVar12 != 6 &&
                                (uStack_80 = CONCAT44(uStack_80._4_4_,0x30c), iVar12 != 7)))))))) &&
                            (uStack_80 = 0x30c0000030c, iVar12 != 8)) &&
                           (((uStack_78 = CONCAT44(uStack_78._4_4_,0x30c), iVar12 != 9 &&
                             (uStack_78 = 0x30c0000030c, iVar12 != 10)) && (uStack_70 = 0x30c, iVar12 != 0xb))))
                        goto code_r0x0800c334;
                        uStack_68 = 0x1fd000001f6;
                        uStack_60 = 0x1fd000001f7;
                        uStack_58 = 0x1fd000001f9;
                        uStack_50 = 0x1fe000001fb;
                        uStack_48 = 0x1fd000001fc;
                        uStack_40 = 0x1fc;
                    }
                }
            }
            else {
                uVar10 = 0;
                arg4 = puVar8[3] >> 0x1c & 4 | puVar8[1] >> 0x1e;
                if (1 < arg4 - 1) {
                    if (arg4 != 3) goto code_r0x0800beb8;
                    uVar10 = puVar8[2] >> 0xc & 0xff;
                    uStack_98 = CONCAT44(puVar8[2] >> 0x1a,puVar8[2] >> 0x14) & 0xffffffff0000003f;
                    uStack_90 = CONCAT44(puVar8[3] >> 6,puVar8[3]) & 0x3f0000003f;
                    uStack_88 = CONCAT44(puVar8[3] >> 0x12,puVar8[3] >> 0xc) & 0x3f0000003f;
                    uStack_80 = CONCAT44(puVar8[4],*(puVar8 + 0xf)) & 0x3f0000003f;
                    uStack_78 = CONCAT44(puVar8[4] >> 0xc,puVar8[4] >> 6) & 0x3f0000003f;
                    uStack_70 = puVar8[4] >> 0x12 & 0x3f;
                }
                uVar11 = *puVar8;
                iVar15 = 6;
                uStack_68 = CONCAT44(*puVar8 >> 0xe,uVar11 >> 8);
                uStack_60 = CONCAT44(*puVar8 >> 0x1a,*puVar8 >> 0x14);
                uStack_58 = CONCAT44(puVar8[1] >> 6,puVar8[1]);
                uStack_50 = CONCAT44(puVar8[1] >> 0x12,puVar8[1] >> 0xc);
                uVar2 = *(puVar8 + 7) & 0x3f;
                puVar13 = puVar8 + 2;
                uVar14 = *puVar13;
code_r0x0800be1c:
                uStack_60 = uStack_60 & 0xffffffff0000003f;
                uStack_50 = uStack_50 & 0x3f0000003f;
                uStack_58 = uStack_58 & 0x3f0000003f;
                uStack_68 = uStack_68 & 0x3f0000003f;
                uStack_48 = CONCAT44(uVar14,uVar2) & 0x3fffffffff;
                uStack_40 = *puVar13 >> iVar15 & 0x3f;
                uVar11 = uVar11 & 0xff;
                if (arg4 != 1) goto code_r0x0800be44;
code_r0x0800bec4:
                iVar12 = *(arg1 + 8);
                if (iVar12 != 0) {
                    uVar10 = uVar11 << 2 | 3;
                    iVar1 = uStack_68 + uVar10;
                    uStack_68 = CONCAT44(uStack_68._4_4_,iVar1);
                    if ((iVar12 == 1) || (uStack_68 = CONCAT44(uStack_68._4_4_ + uVar10,iVar1), iVar12 == 2))
                    goto code_r0x0800c2d8;
                    iVar1 = uStack_60 + uVar10;
                    uStack_60 = CONCAT44(uStack_60._4_4_,iVar1);
                    if ((iVar12 == 3) || (uStack_60 = CONCAT44(uStack_60._4_4_ + uVar10,iVar1), iVar12 == 4))
                    goto code_r0x0800c2d8;
                    iVar1 = uStack_58 + uVar10;
                    uStack_58 = CONCAT44(uStack_58._4_4_,iVar1);
                    if ((iVar12 == 5) || (uStack_58 = CONCAT44(uStack_58._4_4_ + uVar10,iVar1), iVar12 == 6))
                    goto code_r0x0800c2d8;
                    iVar1 = uStack_50 + uVar10;
                    uStack_50 = CONCAT44(uStack_50._4_4_,iVar1);
                    if ((iVar12 == 7) || (uStack_50 = CONCAT44(uStack_50._4_4_ + uVar10,iVar1), iVar12 == 8))
                    goto code_r0x0800c2d8;
                    iVar1 = uStack_48 + uVar10;
                    uStack_48 = CONCAT44(uStack_48._4_4_,iVar1);
                    if ((iVar12 == 9) || (uStack_48 = CONCAT44(uStack_48._4_4_ + uVar10,iVar1), iVar12 == 10))
                    goto code_r0x0800c2d8;
                    uStack_40 = uStack_40 + uVar10;
joined_r0x0800bfac:
                    if (iVar12 != 0xb) goto code_r0x0800c334;
                }
            }
code_r0x0800c2d8:
            sym.compute_intercept_slope(arg1,&uStack_68,&uStack_98,arg4);
            kfree(puVar8);
            kfree(puVar9);
            puVar8 = NULL;
        }
        else {
            kfree(puVar8);
            puVar8 = puVar9 & 0xffffffff;
        }
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_38) {
        return puVar8 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x0800c334:
    //WARNING: Does not return
    pcVar7 = SoftwareBreakpoint(0x5512,0x800c338);
    (*pcVar7)();
}


// ===== sym.calibrate_9607 @ 0x0800c338 (size 656) =====

uint64_t sym.calibrate_9607(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t arg4;
    int64_t iVar4;
    code *pcVar5;
    uint32_t *puVar6;
    int iVar7;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_58;
    ulong uStack_50;
    uint32_t uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    uint32_t uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    uStack_30 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_48 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    puVar6 = sym.qfprom_read(*arg1,"calib");
    if (puVar6 < 0xfffffffffffff001) {
        arg4 = puVar6[2] >> 0x14 & 7;
        if (arg4 == 3) {
            uVar3 = *puVar6 >> 0x1a;
            uStack_58 = CONCAT44(uVar3,*puVar6 >> 0xe) & 0xffffffff0000003f;
            uStack_50 = CONCAT44(puVar6[1] >> 0x12,puVar6[1] >> 6) & 0x3f0000003f;
            uStack_48 = puVar6[2] >> 6 & 0x3f;
            iVar7 = *(arg1 + 8);
            if (iVar7 != 0) {
                uVar1 = puVar6[2] >> 0xc & 0xff;
                iVar2 = ((*puVar6 >> 0xe & 0x3f) + uVar1) * 4;
                uStack_58 = CONCAT44(uVar3,iVar2);
                if ((iVar7 != 1) && (uStack_58 = CONCAT44((uVar3 + uVar1) * 4,iVar2), iVar7 != 2)) {
                    iVar2 = ((puVar6[1] >> 6 & 0x3f) + uVar1) * 4;
                    uStack_50 = CONCAT44(uStack_50._4_4_,iVar2);
                    if ((iVar7 != 3) &&
                       ((uStack_50 = CONCAT44(((puVar6[1] >> 0x12 & 0x3f) + uVar1) * 4,iVar2), iVar7 != 4 &&
                        (uStack_48 = (uStack_48 + uVar1) * 4, iVar7 != 5)))) goto code_r0x0800c5c4;
                }
            }
code_r0x0800c458:
            uVar3 = *puVar6 >> 8;
            uStack_40 = CONCAT44(*puVar6 >> 0x14,uVar3) & 0x3f0000003f;
            uStack_38 = CONCAT44(puVar6[1] >> 0xc,puVar6[1]) & 0x3f0000003f;
            uStack_30 = puVar6[2] & 0x3f;
            if (iVar7 != 0) {
                uVar1 = *puVar6 & 0xff;
                iVar2 = ((uVar3 & 0x3f) + uVar1) * 4;
                uStack_40 = CONCAT44(uStack_40._4_4_,iVar2);
                if ((iVar7 != 1) && (uStack_40 = CONCAT44(((*puVar6 >> 0x14 & 0x3f) + uVar1) * 4,iVar2), iVar7 != 2))
                {
                    iVar2 = ((puVar6[1] & 0x3f) + uVar1) * 4;
                    uStack_38 = CONCAT44(uStack_38._4_4_,iVar2);
                    if ((iVar7 != 3) &&
                       (uStack_38 = CONCAT44(((puVar6[1] >> 0xc & 0x3f) + uVar1) * 4,iVar2), iVar7 != 4)) {
                        uStack_30 = (uStack_30 + uVar1) * 4;
                        goto joined_r0x0800c4fc;
                    }
                }
            }
        }
        else {
            if (arg4 == 2) {
                iVar7 = *(arg1 + 8);
                goto code_r0x0800c458;
            }
            iVar7 = *(arg1 + 8);
            if (iVar7 != 0) {
                uStack_40 = CONCAT44(uStack_40._4_4_,500);
                uStack_58 = CONCAT44(uStack_58._4_4_,0x30c);
                if (iVar7 == 1) goto code_r0x0800c574;
                uStack_40 = 0x1f4000001f4;
                uStack_58 = 0x30c0000030c;
                if (iVar7 == 2) goto code_r0x0800c574;
                uStack_38 = CONCAT44(uStack_38._4_4_,500);
                uStack_50 = CONCAT44(uStack_50._4_4_,0x30c);
                if (iVar7 == 3) goto code_r0x0800c574;
                uStack_38 = 0x1f4000001f4;
                uStack_50 = 0x30c0000030c;
                if (iVar7 == 4) goto code_r0x0800c574;
                uStack_30 = 500;
                uStack_48 = 0x30c;
joined_r0x0800c4fc:
                if (iVar7 != 5) goto code_r0x0800c5c4;
            }
        }
code_r0x0800c574:
        sym.compute_intercept_slope(arg1,&uStack_40,&uStack_58,arg4);
        kfree(puVar6);
        puVar6 = NULL;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_28) {
        return puVar6 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x0800c5c4:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x800c5c8);
    (*pcVar5)();
}


// ===== sym.calibrate_8960 @ 0x0800c5c8 (size 464) =====

uint64_t sym.calibrate_8960(int64_t arg1)

{
    int iVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    int64_t iVar4;
    code *pcVar5;
    uint8_t *puVar6;
    ulong *in_x18;
    ulong unaff_x30;
    uint64_t uStack_58;
    uint64_t uStack_50;
    uint64_t uStack_48;
    uint64_t uStack_40;
    uint64_t uStack_38;
    uint32_t uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    uStack_30 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_58 = 0;
    puVar6 = sym.qfprom_read(*arg1,"calib");
    if (0xfffffffffffff000 < puVar6) {
        puVar6 = sym.qfprom_read(*arg1,"calib_backup");
    }
    if (puVar6 < 0xfffffffffffff001) {
        iVar1 = *(arg1 + 8);
        if (iVar1 != 0) {
            uVar2 = *puVar6;
            uStack_58 = CONCAT44(uStack_58._4_4_,uVar2);
            *(arg1 + 0xa90) = 0x33a;
            if (iVar1 != 1) {
                uVar3 = puVar6[1];
                *(arg1 + 0xab8) = 0x33a;
                uStack_58 = CONCAT14(uVar3,uVar2);
                if (iVar1 != 2) {
                    uVar2 = puVar6[2];
                    uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
                    *(arg1 + 0xae0) = 0x324;
                    if (iVar1 != 3) {
                        uStack_50 = CONCAT14(puVar6[3],uVar2);
                        *(arg1 + 0xb08) = 0x33a;
                        if (iVar1 != 4) {
                            uVar2 = puVar6[4];
                            uStack_48 = CONCAT44(uStack_48._4_4_,uVar2);
                            *(arg1 + 0xb30) = 0x2f9;
                            if (iVar1 != 5) {
                                uStack_48 = CONCAT14(puVar6[5],uVar2);
                                *(arg1 + 0xb58) = 0x30e;
                                if (iVar1 != 6) {
                                    uVar2 = puVar6[6];
                                    *(arg1 + 0xb80) = 0x30e;
                                    uStack_40 = CONCAT44(uStack_40._4_4_,uVar2);
                                    if (iVar1 != 7) {
                                        uStack_40 = CONCAT14(puVar6[7],uVar2);
                                        *(arg1 + 0xba8) = 0x351;
                                        if (iVar1 != 8) {
                                            uVar2 = puVar6[8];
                                            uStack_38 = CONCAT44(uStack_38._4_4_,uVar2);
                                            *(arg1 + 0xbd0) = 0x30e;
                                            if (iVar1 != 9) {
                                                uStack_38 = CONCAT14(puVar6[9],uVar2);
                                                *(arg1 + 0xbf8) = 0x351;
                                                if (iVar1 != 10) {
                                                    uStack_30 = puVar6[10];
                                                    *(arg1 + 0xc20) = 0x30e;
                                                    if (iVar1 != 0xb) goto code_r0x0800c794;
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
        }
        sym.compute_intercept_slope(arg1,&uStack_58,0,1);
        kfree(puVar6);
        puVar6 = NULL;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_28) {
        return puVar6 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x0800c794:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x800c798);
    (*pcVar5)();
}


// ===== sym.enable_8960 @ 0x0800c798 (size 240) =====

void sym.enable_8960(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint uVar2;
    uint32_t uVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar8;
    uint64_t uVar9;
    ulong unaff_x30;
    uchar **ppuVar10;
    code *pcVar11;
    uint32_t uStack_5c;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    uVar8 = arg2 & 0xffffffff;
    iStack_28 = *(iVar7 + 0x5e0);
    uStack_2c = 0;
    uVar5 = regmap_read(*(arg1 + 0x10),0x3620,&uStack_2c);
    if (uVar5 == 0) {
        uVar3 = 0x3e00;
        if (arg2 < 6) {
            uVar3 = (1L << (arg2 & 0x3fU)) << 3;
        }
        uVar8 = uVar3;
        if ((uVar3 & (uStack_2c ^ 0xffffffff)) == 0) {
            uVar5 = 0;
        }
        else {
            uVar5 = regmap_write(*(arg1 + 0x10),0x3620,uStack_2c | 2);
            if (uVar5 == 0) {
                uVar1 = 0x4000001;
                if (*(arg1 + 8) < 2) {
                    uVar1 = 0x1000001;
                }
                uStack_2c = uVar3 | uStack_2c | uVar1 | 0x40000;
                uVar5 = regmap_write(*(arg1 + 0x10),0x3620);
            }
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return;
    }
    iVar6 = __stack_chk_fail(uVar5);
    *extraout_x18 = sym.disable_8960;
    pcStack_48 = sym.disable_8960;
    ppuVar10 = &puStack_50;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    uVar3 = *(iVar6 + 8);
    uVar9 = uVar3;
    uStack_5c = 0;
    puStack_50 = &stack0xffffffffffffffe0;
    uStack_40 = uVar8;
    iStack_38 = arg1;
    iVar4 = regmap_read(*(iVar6 + 0x10),0x3620,&uStack_5c);
    if (iVar4 == 0) {
        uVar1 = 0xfbfffffe;
        if (*(iVar6 + 8) < 2) {
            uVar1 = 0xfefffffe;
        }
        uStack_5c = uStack_5c & ((0xffffffffffffffff >> (-uVar3 & 0x3f)) << 3 ^ 0xffffffffU) & uVar1;
        regmap_write(*(iVar6 + 0x10),0x3620);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18_00 = sym.suspend_8960;
    pcVar11 = sym.suspend_8960;
    uVar5 = *(iVar7 + 0x10);
    iVar4 = regmap_read(uVar5,0x3624,iVar7 + 0xa28);
    if ((iVar4 == 0) && (iVar4 = regmap_read(uVar5,0x3620,iVar7 + 0xa2c), iVar4 == 0)) {
        uVar2 = 0x4000001;
        if (*(iVar7 + 8) < 2) {
            uVar2 = 0x1000001;
        }
        regmap_update_bits_base(uVar5,0x3620,uVar2,0,0,0,0,in_x7,ppuVar10,pcVar11,uVar9,iVar6);
    }
    return;
}


// ===== sym.disable_8960 @ 0x0800c888 (size 184) =====

void sym.disable_8960(int64_t arg1)

{
    uint32_t uVar1;
    uint uVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    ulong in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    uchar *puVar8;
    code *pcVar9;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    puVar8 = &stack0xffffffffffffffe0;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    uVar3 = *(arg1 + 8);
    uVar7 = uVar3;
    uStack_2c = 0;
    iVar4 = regmap_read(*(arg1 + 0x10),0x3620,&uStack_2c);
    if (iVar4 == 0) {
        uVar1 = 0xfbfffffe;
        if (*(arg1 + 8) < 2) {
            uVar1 = 0xfefffffe;
        }
        uStack_2c = uStack_2c & ((0xffffffffffffffff >> (-uVar3 & 0x3f)) << 3 ^ 0xffffffffU) & uVar1;
        regmap_write(*(arg1 + 0x10),0x3620);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.suspend_8960;
    pcVar9 = sym.suspend_8960;
    uVar6 = *(iVar5 + 0x10);
    iVar4 = regmap_read(uVar6,0x3624,iVar5 + 0xa28);
    if ((iVar4 == 0) && (iVar4 = regmap_read(uVar6,0x3620,iVar5 + 0xa2c), iVar4 == 0)) {
        uVar2 = 0x4000001;
        if (*(iVar5 + 8) < 2) {
            uVar2 = 0x1000001;
        }
        regmap_update_bits_base(uVar6,0x3620,uVar2,0,0,0,0,in_x7,puVar8,pcVar9,uVar7,arg1);
    }
    return;
}


// ===== sym.suspend_8960 @ 0x0800c940 (size 144) =====

void sym.suspend_8960(int64_t arg1)

{
    uint uVar1;
    int iVar2;
    ulong *in_x18;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = *(arg1 + 0x10);
    iVar2 = regmap_read(uVar3,0x3624,arg1 + 0xa28);
    if ((iVar2 == 0) && (iVar2 = regmap_read(uVar3,0x3620,arg1 + 0xa2c), iVar2 == 0)) {
        uVar1 = 0x4000001;
        if (*(arg1 + 8) < 2) {
            uVar1 = 0x1000001;
        }
        regmap_update_bits_base(uVar3,0x3620,uVar1,0,0,0,0);
    }
    return;
}


// ===== sym.resume_8960 @ 0x0800c9d0 (size 168) =====

void sym.resume_8960(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(arg1 + 0x10);
    iVar1 = regmap_update_bits_base(uVar2,0x3620,2,2,0,0,0);
    if ((iVar1 == 0) &&
       (((*(arg1 + 8) < 2 || (iVar1 = regmap_update_bits_base(uVar2,0x3640,0xf,0x9b,0,0,0), iVar1 == 0)) &&
        (iVar1 = regmap_write(uVar2,0x3624,*(arg1 + 0xa28)), iVar1 == 0)))) {
        regmap_write(uVar2,0x3620,*(arg1 + 0xa2c));
    }
    return;
}


// ===== sym.init_common @ 0x0800ca84 (size 1476) =====

uint64_t sym.init_common(int64_t arg1)

{
    code *pcVar1;
    bool bVar2;
    int64_t iVar3;
    ulong uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    ulong *puVar7;
    uint32_t *puVar8;
    uint32_t uVar9;
    ulong *in_x18;
    int64_t iVar10;
    uint64_t *puVar11;
    uint64_t uVar12;
    int64_t iVar13;
    int64_t iVar14;
    uint64_t uVar15;
    int64_t iVar16;
    ulong unaff_x30;
    ulong uStack_88;
    ulong uStack_80;
    uint uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_68 = *(iVar3 + 0x5e0);
    iVar10 = *arg1;
    uStack_70 = 0;
    iVar3 = of_find_device_by_node(*(iVar10 + 0x2f0));
    if (iVar3 == 0) {
        uVar5 = 0xffffffea;
        goto code_r0x0800ccd4;
    }
    if (1 < *(iVar3 + 0x3b8)) {
        *(arg1 + 0x20) = 0;
        uVar4 = platform_get_resource(iVar3,0x200,1);
        uVar5 = devm_ioremap_resource(iVar10,uVar4);
        if (uVar5 < 0xfffffffffffff001) {
            uVar5 = __devm_regmap_init_mmio_clk(iVar10,0,uVar5,obj.tsens_srot_config,0,0);
            *(arg1 + 0x18) = uVar5;
            if (uVar5 < 0xfffffffffffff001) goto code_r0x0800cb48;
            goto code_r0x0800ccc8;
        }
code_r0x0800cb7c:
        uVar5 = uVar5 & 0xffffffff;
        goto code_r0x0800cccc;
    }
    *(arg1 + 0x20) = 0x1000;
code_r0x0800cb48:
    if (**(arg1 + 0xa30) == 0) {
        if (*(*arg1 + 0x60) != 0) {
            uVar5 = syscon_node_to_regmap(*(*(*arg1 + 0x60) + 0x2f0));
            goto code_r0x0800cbb8;
        }
        uVar5 = *(arg1 + 0x10);
        if (uVar5 != 0) goto code_r0x0800cbcc;
code_r0x0800cc74:
        if (uVar5 == 0) {
code_r0x0800cc78:
            uVar5 = 0xffffffed;
        }
        else {
code_r0x0800ccc8:
            uVar5 = uVar5 & 0xffffffff;
        }
    }
    else {
        uVar4 = platform_get_resource(iVar3,0x200,0);
        uVar5 = devm_ioremap_resource(iVar10,uVar4);
        if (0xfffffffffffff000 < uVar5) goto code_r0x0800cb7c;
        uVar5 = __devm_regmap_init_mmio_clk(iVar10,0,uVar5,obj.tsens_config,0,0);
code_r0x0800cbb8:
        *(arg1 + 0x10) = uVar5;
        if (uVar5 == 0) goto code_r0x0800cc74;
code_r0x0800cbcc:
        if (0xfffffffffffff000 < uVar5) goto code_r0x0800cc74;
        uVar6 = *(arg1 + 0x18);
        if (*(arg1 + 0x18) == 0) {
            *(arg1 + 0x18) = uVar5;
            uVar6 = uVar5;
        }
        if (**(arg1 + 0xa30) < 2) {
code_r0x0800cc98:
            iVar13 = *(arg1 + 0xa38);
            uStack_78 = *(iVar13 + 0x4c);
            uStack_80 = *(iVar13 + 0x44);
            uStack_88 = *(iVar13 + 0x3c);
            uVar5 = devm_regmap_field_alloc(iVar10,uVar6,&uStack_88);
            *(arg1 + 0x40) = uVar5;
            if (uVar5 < 0xfffffffffffff001) {
                if (**(arg1 + 0xa30) == 0) {
                    regmap_field_update_bits_base(uVar5,0xffffffff,1,0,0,0);
                    uVar5 = *(arg1 + 0x40);
                }
                uVar6 = regmap_field_read(uVar5,&uStack_70);
                uVar5 = uVar6 & 0xffffffff;
                if (uVar6 != 0) goto code_r0x0800cccc;
                if (uStack_70 != 0) {
                    iVar13 = *(arg1 + 0xa38);
                    uStack_78 = *(iVar13 + 0x74);
                    uStack_80 = *(iVar13 + 0x6c);
                    uStack_88 = *(iVar13 + 100);
                    uVar5 = devm_regmap_field_alloc(iVar10,*(arg1 + 0x18),&uStack_88);
                    *(arg1 + 0x50) = uVar5;
                    if (uVar5 < 0xfffffffffffff001) {
                        iVar13 = *(arg1 + 0xa38);
                        uStack_78 = *(iVar13 + 0xb0);
                        uStack_88 = *(iVar13 + 0xa0);
                        uStack_80 = *(iVar13 + 0xa8);
                        uVar5 = devm_regmap_field_alloc(iVar10,*(arg1 + 0x10),&uStack_88);
                        *(arg1 + 0x68) = uVar5;
                        if (uVar5 < 0xfffffffffffff001) {
                            iVar13 = *(arg1 + 0xa38);
                            uStack_78 = *(iVar13 + 0x60);
                            uStack_88 = *(iVar13 + 0x50);
                            uStack_80 = *(iVar13 + 0x58);
                            uVar5 = devm_regmap_field_alloc(iVar10,*(arg1 + 0x18),&uStack_88);
                            *(arg1 + 0x48) = uVar5;
                            if (uVar5 < 0xfffffffffffff001) {
                                iVar13 = *(arg1 + 0xa38);
                                uStack_78 = *(iVar13 + 0x9c);
                                uStack_80 = *(iVar13 + 0x94);
                                uStack_88 = *(iVar13 + 0x8c);
                                uVar5 = devm_regmap_field_alloc(iVar10,*(arg1 + 0x10),&uStack_88);
                                *(arg1 + 0x60) = uVar5;
                                if (uVar5 < 0xfffffffffffff001) {
                                    puVar8 = *(arg1 + 0xa30);
                                    iVar13 = arg1 + 0x70;
                                    uVar12 = 0x137;
                                    iVar14 = 0xb4;
                                    uVar6 = 9;
                                    do {
                                        if (puVar8[2] != 0) {
                                            uVar15 = 0;
                                            iVar16 = iVar14;
                                            do {
                                                puVar7 = *(arg1 + 0xa38) + iVar16;
                                                uStack_78 = *(puVar7 + 2);
                                                uStack_88 = *puVar7;
                                                uStack_80 = puVar7[1];
                                                uVar5 = devm_regmap_field_alloc(iVar10,*(arg1 + 0x10),&uStack_88);
                                                if (uVar12 == uVar15) goto code_r0x0800d044;
                                                *(iVar13 + uVar15 * 8) = uVar5;
                                                if (0xfffffffffffff000 < uVar5) goto code_r0x0800ccc8;
                                                puVar8 = *(arg1 + 0xa30);
                                                uVar15 = uVar15 + 1;
                                                iVar16 = iVar16 + 0x14;
                                            } while (uVar15 < puVar8[2]);
                                        }
                                        bVar2 = uVar6 < 0xb9;
                                        uVar12 = uVar12 - 0x10;
                                        iVar13 = iVar13 + 0x80;
                                        iVar14 = iVar14 + 0x140;
                                        uVar6 = uVar6 + 0x10;
                                    } while (bVar2);
                                    if (((puVar8[1] & 1) != 0) || (uVar9 = *puVar8, uVar9 == 0)) {
                                        iVar13 = arg1 + 0x670;
                                        uVar12 = 0x77;
                                        iVar14 = 0xfb4;
                                        uVar6 = 0xc9;
                                        do {
                                            if (puVar8[2] != 0) {
                                                uVar15 = 0;
                                                iVar16 = iVar14;
                                                do {
                                                    puVar7 = *(arg1 + 0xa38) + iVar16;
                                                    uStack_78 = *(puVar7 + 2);
                                                    uStack_88 = *puVar7;
                                                    uStack_80 = puVar7[1];
                                                    uVar5 = devm_regmap_field_alloc(iVar10,*(arg1 + 0x10),&uStack_88);
                                                    if (uVar12 == uVar15) goto code_r0x0800d044;
                                                    *(iVar13 + uVar15 * 8) = uVar5;
                                                    if (0xfffffffffffff000 < uVar5) goto code_r0x0800ccc8;
                                                    puVar8 = *(arg1 + 0xa30);
                                                    uVar15 = uVar15 + 1;
                                                    iVar16 = iVar16 + 0x14;
                                                } while (uVar15 < puVar8[2]);
                                            }
                                            bVar2 = uVar6 < 0x109;
                                            uVar12 = uVar12 - 0x10;
                                            iVar13 = iVar13 + 0x80;
                                            iVar14 = iVar14 + 0x140;
                                            uVar6 = uVar6 + 0x10;
                                        } while (bVar2);
                                        uVar9 = *puVar8;
                                    }
                                    if ((2 < uVar9) && (2 < uStack_70._4_4_)) {
                                        puVar11 = arg1 + 0x8f0;
                                        iVar13 = -0x8c;
                                        *(puVar8 + 1) = puVar8[1] | 8;
                                        do {
                                            iVar14 = *(arg1 + 0xa38) + iVar13;
                                            uStack_78 = *(iVar14 + 0x1690);
                                            uStack_80 = *(iVar14 + 0x1688);
                                            uStack_88 = *(iVar14 + 0x1680);
                                            uVar5 = devm_regmap_field_alloc(iVar10,*(arg1 + 0x10),&uStack_88);
                                            *puVar11 = uVar5;
                                            if (0xfffffffffffff000 < uVar5) goto code_r0x0800ccc8;
                                            puVar11 = puVar11 + 1;
                                            iVar13 = iVar13 + 0x14;
                                        } while (iVar13 != 0);
                                        regmap_field_update_bits_base(*(arg1 + 0x900),0xffffffff,0,0,0,0);
                                        regmap_field_update_bits_base(*(arg1 + 0x920),0xffffffff,1,0,0,0);
                                        puVar8 = *(arg1 + 0xa30);
                                    }
                                    *(arg1 + 0x24) = 0;
                                    if (*puVar8 != 0) {
                                        sym.tsens_enable_irq(arg1);
                                    }
                                    sym.tsens_debug_init(iVar3);
                                    uVar5 = 0;
                                    goto code_r0x0800cccc;
                                }
                            }
                        }
                    }
                    goto code_r0x0800ccc8;
                }
                _dev_err(iVar10,"%s: device not enabled\n","init_common");
                goto code_r0x0800cc78;
            }
            goto code_r0x0800ccc8;
        }
        puVar7 = *(arg1 + 0xa38);
        uStack_78 = *(puVar7 + 2);
        uStack_88 = *puVar7;
        uStack_80 = puVar7[1];
        uVar5 = devm_regmap_field_alloc(iVar10,uVar6,&uStack_88);
        *(arg1 + 0x28) = uVar5;
        if (uVar5 < 0xfffffffffffff001) {
            iVar13 = 0x14;
            puVar11 = arg1 + 0x30;
            do {
                if (iVar13 == 0x3c) {
                    uVar6 = regmap_field_read(*(arg1 + 0x30),&uStack_70 + 4);
                    uVar5 = uVar6 & 0xffffffff;
                    if (uVar6 == 0) {
                        uVar6 = *(arg1 + 0x18);
                        goto code_r0x0800cc98;
                    }
                    break;
                }
                puVar7 = *(arg1 + 0xa38) + iVar13;
                uStack_78 = *(puVar7 + 2);
                uStack_88 = *puVar7;
                uStack_80 = puVar7[1];
                uVar5 = devm_regmap_field_alloc(iVar10,*(arg1 + 0x18),&uStack_88);
                iVar13 = iVar13 + 0x14;
                *puVar11 = uVar5;
                puVar11 = puVar11 + 1;
            } while (uVar5 < 0xfffffffffffff001);
        }
    }
code_r0x0800cccc:
    put_device(iVar3 + 0x10);
code_r0x0800ccd4:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_68) {
        return uVar5 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x0800d044:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x800d048);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x0800d048 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.tsens_probe.6be98f0982e4f5249d656332c33b156d.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x0800d07c (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.tsens_probe.6be98f0982e4f5249d656332c33b156d.cfi_jt);
    return;
}

