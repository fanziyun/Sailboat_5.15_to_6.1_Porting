// decompiled from pwm-qti-lpg by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 280) =====

//WARNING: Switch with 1 destination removed at 0x08005e24

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x33c50094eba21947) {
        if (arg1 == -0x3557318fb8d07b71) {
            if ((pcVar1 + -0x8002138 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08005de4;
        }
        if (arg1 == -0x24bdeaf1adfc386) {
            pcVar2 = sym.qpnp_lpg_pwm_apply.dc31bff6ac2356f2ace3cf841d8a55bf.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08005de4;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 == 0x33c50094eba21947) {
        pcVar2 = sym.qpnp_lpg_pwm_get_output_types_supported.cfi_jt;
    }
    else if (arg1 == 0x35f30eecfb3ad81d) {
        pcVar2 = sym.qpnp_lpg_pwm_set_output_type.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08005de4;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08005de4:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8005e38);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08002120 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qpnp_lpg_probe.dc31bff6ac2356f2ace3cf841d8a55bf.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08002128 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qpnp_lpg_probe.dc31bff6ac2356f2ace3cf841d8a55bf.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.qpnp_lpg_pwm_set_output_type.cfi_jt @ 0x08002130 (size 8) =====

int64_t * sym.qpnp_lpg_pwm_set_output_type.cfi_jt(int64_t param_1,uint32_t param_2)

{
    uint8_t uVar1;
    char cVar2;
    uint16_t uVar3;
    uint8_t uVar4;
    uint32_t *puVar5;
    bool bVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    int iVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    int64_t *piVar13;
    char *pcVar14;
    ulong uVar15;
    ulong in_x7;
    uint uVar16;
    ulong *puVar17;
    int64_t iVar18;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t unaff_x19;
    int64_t unaff_x20;
    int64_t *piVar19;
    uint64_t *unaff_x21;
    int64_t *piVar20;
    ulong uVar21;
    uint64_t unaff_x22;
    uint64_t uVar22;
    int64_t *piVar23;
    int64_t *piVar24;
    int64_t iVar25;
    uint32_t *unaff_x24;
    int64_t *piVar26;
    uint32_t uVar27;
    int64_t unaff_x25;
    int64_t *piVar28;
    uint32_t *unaff_x26;
    int64_t *piVar29;
    uint8_t *unaff_x27;
    uint32_t *unaff_x28;
    ulong unaff_x30;
    uchar auVar30 [16];
    uchar ***pppuVar31;
    code *pcVar32;
    int64_t *piVar33;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    uchar uStack_1a0;
    int64_t iStack_198;
    uchar **ppuStack_190;
    code *pcStack_188;
    uint32_t *puStack_180;
    uint8_t *puStack_178;
    uint32_t *puStack_170;
    int64_t iStack_168;
    int64_t *piStack_160;
    int64_t iStack_158;
    uint64_t uStack_150;
    int64_t *piStack_148;
    int64_t *piStack_140;
    int64_t *piStack_138;
    uchar auStack_12c [4];
    int64_t iStack_128;
    uchar *puStack_120;
    code *pcStack_118;
    uint32_t *puStack_110;
    uint8_t *puStack_108;
    uint32_t *puStack_100;
    int64_t iStack_f8;
    uint32_t *puStack_f0;
    int64_t *piStack_e8;
    uint64_t uStack_e0;
    uint64_t *puStack_d8;
    int64_t iStack_d0;
    uint64_t uStack_c8;
    uint8_t *puStack_c0;
    char *pcStack_b8;
    uint8_t *puStack_b0;
    uint32_t uStack_a8;
    uint uStack_a4;
    uint32_t *puStack_a0;
    uint32_t uStack_98;
    uint32_t uStack_94;
    uint32_t *puStack_90;
    uchar auStack_84 [4];
    char acStack_80 [4];
    char acStack_7c [4];
    char acStack_78 [4];
    uint8_t auStack_74 [4];
    uint8_t auStack_70 [4];
    char acStack_6c [4];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar25 = sp_el0;
    iStack_68 = *(iVar25 + 0x5e0);
    if (param_1 == 0) {
        _printk(0x8000d62,"qpnp_lpg_pwm_set_output_type");
        piVar24 = 0xffffffed;
    }
    else {
        puVar17 = *(param_1 + 0x18);
        uVar8 = *(param_1 + 0x10);
        unaff_x19 = uVar8;
        unaff_x20 = param_1;
        if (uVar8 < *(puVar17 + 0x17)) {
            unaff_x25 = puVar17[0xb];
            unaff_x21 = unaff_x25 + unaff_x19 * 0x70;
            if (unaff_x21 != NULL) {
                if (*(*unaff_x21 + 0x60) != 0) {
                    unaff_x22 = param_2;
                    unaff_x26 = unaff_x25 + unaff_x19 * 0x70 + 0x48;
                    if (*unaff_x26 != param_2) {
                        unaff_x28 = param_2 != 2;
                        unaff_x27 = unaff_x25 + unaff_x19 * 0x70 + 0x5c;
                        uVar8 = param_2 != 2;
                        if (*unaff_x27 != uVar8) {
                            unaff_x24 = *(param_1 + 0x4c);
                            uVar10 = *(param_1 + 0x4c);
                            if ((uVar10 == 0) || (uVar7 = sym.qpnp_lpg_pwm_src_enable(unaff_x21,0), -1 < uVar7)) {
                                if (param_2 != 2) {
code_r0x08002808:
                                    *unaff_x27 = unaff_x28;
                                    if (unaff_x24 != 0) {
                                        uVar8 = sym.qpnp_lpg_set_pwm_config(unaff_x21);
                                        if (uVar8 < 0) {
                                            puVar17 = *(param_1 + 0x18);
                                            piVar24 = uVar8;
                                            iVar25 = unaff_x25 + unaff_x19 * 0x70;
                                            pcVar14 = "Config PWM failed for channel %d, rc=%d\n";
                                            goto code_r0x08002c40;
                                        }
                                        uVar7 = sym.qpnp_lpg_pwm_src_enable(unaff_x21,1);
                                        if (uVar7 < 0) goto code_r0x08002838;
                                    }
                                    piVar24 = NULL;
                                    *unaff_x26 = param_2;
                                    goto code_r0x080021fc;
                                }
                                unaff_x24 = unaff_x25 + unaff_x19 * 0x70 + 0x5e;
                                uStack_94 = uVar10;
                                if (*unaff_x24 != 0) {
code_r0x08002294:
                                    unaff_x28 = *unaff_x21;
                                    uStack_98 = uVar8;
                                    if (unaff_x28[0x32] == 0) {
                                        iVar25 = unaff_x25 + unaff_x19 * 0x70;
                                        uVar3 = *(iVar25 + 0x28);
                                        unaff_x24 = uVar3;
                                        mutex_lock(unaff_x28 + 0x1a);
                                        unaff_x28 = uVar3 & 0xff;
                                        puStack_90 = iVar25 + 0x50;
                                        uVar8 = regmap_write(*(*unaff_x21 + 0x48),*puStack_90 + 0x50,unaff_x28);
                                        if (uVar8 < 0) {
                                            piVar24 = uVar8;
                                            _dev_err(*(*unaff_x21 + 0x50),
                                                     "Write addr 0x%x with value 0x%x failed, rc=%d\n",
                                                     *puStack_90 + 0x50,unaff_x28,piVar24);
                                            mutex_unlock(*unaff_x21 + 0x68);
                                            uVar22 = *unaff_x21;
                                            pcVar14 = "Write RAMP_STEP_DURATION_LSB failed, rc=%d\n";
                                        }
                                        else {
                                            mutex_unlock(*unaff_x21 + 0x68);
                                            unaff_x24 = uVar3 >> 8;
                                            mutex_lock(*unaff_x21 + 0x68);
                                            uVar8 = regmap_write(*(*unaff_x21 + 0x48),*puStack_90 + 0x51,unaff_x24);
                                            if (uVar8 < 0) {
                                                piVar24 = uVar8;
                                                _dev_err(*(*unaff_x21 + 0x50),
                                                         "Write addr 0x%x with value 0x%x failed, rc=%d\n",
                                                         *puStack_90 + 0x51,unaff_x24,piVar24);
                                                mutex_unlock(*unaff_x21 + 0x68);
                                                uVar22 = *unaff_x21;
                                                pcVar14 = "Write RAMP_STEP_DURATION_MSB failed, rc=%d\n";
                                            }
                                            else {
                                                mutex_unlock(*unaff_x21 + 0x68);
                                                unaff_x24 = *(unaff_x25 + unaff_x19 * 0x70 + 0x2c);
                                                mutex_lock(*unaff_x21 + 0x68);
                                                uVar8 = regmap_update_bits_base
                                                                  (*(*unaff_x21 + 0x48),*puStack_90 + 0x56,0x3f,
                                                                   unaff_x24,0,0,0);
                                                if (uVar8 < 0) {
                                                    piVar24 = uVar8;
                                                    _dev_err(*(*unaff_x21 + 0x50),
                                                             
                                                            "Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n"
                                                            ,*puStack_90 + 0x56,unaff_x24,0x3f,piVar24);
                                                    mutex_unlock(*unaff_x21 + 0x68);
                                                    uVar22 = *unaff_x21;
                                                    pcVar14 = "Write LPG_HI_IDX failed, rc=%d\n";
                                                }
                                                else {
                                                    mutex_unlock(*unaff_x21 + 0x68);
                                                    unaff_x24 = *(unaff_x25 + unaff_x19 * 0x70 + 0x2d);
                                                    mutex_lock(*unaff_x21 + 0x68);
                                                    uVar8 = regmap_update_bits_base
                                                                      (*(*unaff_x21 + 0x48),*puStack_90 + 0x57,0x3f,
                                                                       unaff_x24,0,0,0);
                                                    if (uVar8 < 0) {
                                                        piVar24 = uVar8;
                                                        _dev_err(*(*unaff_x21 + 0x50),
                                                                 
                                                            "Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n"
                                                            ,*puStack_90 + 0x57,unaff_x24,0x3f,piVar24);
                                                        mutex_unlock(*unaff_x21 + 0x68);
                                                        uVar22 = *unaff_x21;
                                                        pcVar14 = "Write LPG_LO_IDX failed, rc=%d\n";
                                                    }
                                                    else {
                                                        mutex_unlock(*unaff_x21 + 0x68);
                                                        unaff_x28 = unaff_x25 + unaff_x19 * 0x70 + 0x2a;
                                                        unaff_x24 = *unaff_x28;
                                                        mutex_lock(*unaff_x21 + 0x68);
                                                        uVar8 = regmap_write(*(*unaff_x21 + 0x48),*puStack_90 + 0x52,
                                                                             unaff_x24);
                                                        if (uVar8 < 0) {
                                                            piVar24 = uVar8;
                                                            _dev_err(*(*unaff_x21 + 0x50),
                                                                     "Write addr 0x%x with value 0x%x failed, rc=%d\n",
                                                                     *puStack_90 + 0x52,unaff_x24,piVar24);
                                                            mutex_unlock(*unaff_x21 + 0x68);
                                                            uVar22 = *unaff_x21;
                                                            pcVar14 = "Write LPG_PAUSE_HI_MULTIPLIER failed, rc=%d\n";
                                                        }
                                                        else {
                                                            mutex_unlock(*unaff_x21 + 0x68);
                                                            unaff_x24 = unaff_x25 + unaff_x19 * 0x70 + 0x2b;
                                                            uVar1 = *unaff_x24;
                                                            mutex_lock(*unaff_x21 + 0x68);
                                                            puStack_a0 = CONCAT44(puStack_a0._4_4_,uVar1);
                                                            uVar8 = regmap_write(*(*unaff_x21 + 0x48),
                                                                                 *puStack_90 + 0x54,uVar1);
                                                            if (uVar8 < 0) {
                                                                piVar24 = uVar8;
                                                                _dev_err(*(*unaff_x21 + 0x50),
                                                                         
                                                            "Write addr 0x%x with value 0x%x failed, rc=%d\n",
                                                            *puStack_90 + 0x54,puStack_a0 & 0xffffffff,piVar24);
                                                            mutex_unlock(*unaff_x21 + 0x68);
                                                            uVar22 = *unaff_x21;
                                                            pcVar14 = "Write LPG_PAUSE_LO_MULTIPLIER failed, rc=%d\n";
                                                            }
                                                            else {
                                                                mutex_unlock(*unaff_x21 + 0x68);
                                                                iVar25 = unaff_x25 + unaff_x19 * 0x70;
                                                                uVar8 = *unaff_x24 != 0;
                                                                if (*unaff_x28 != 0) {
                                                                    uVar8 = *unaff_x24 != 0 | 2;
                                                                }
                                                                if (*(iVar25 + 0x2e) != '\0') {
                                                                    uVar8 = uVar8 | 0x10;
                                                                }
                                                                if (*(iVar25 + 0x2f) != '\0') {
                                                                    uVar8 = uVar8 | 8;
                                                                }
                                                                if (*(iVar25 + 0x30) != '\0') {
                                                                    uVar8 = uVar8 | 4;
                                                                }
                                                                mutex_lock(*unaff_x21 + 0x68);
                                                                unaff_x24 = uVar8;
                                                                uVar8 = regmap_update_bits_base
                                                                                  (*(*unaff_x21 + 0x48),
                                                                                   *puStack_90 + 0x40,0x1f,unaff_x24,
                                                                                   0,0,0);
                                                                if (-1 < uVar8) {
                                                                    mutex_unlock(*unaff_x21 + 0x68);
code_r0x08002804:
                                                                    unaff_x28 = uStack_98;
                                                                    unaff_x24 = uStack_94;
                                                                    goto code_r0x08002808;
                                                                }
                                                                piVar24 = uVar8;
                                                                _dev_err(*(*unaff_x21 + 0x50),
                                                                         
                                                            "Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n"
                                                            ,*puStack_90 + 0x40,unaff_x24,0x1f,piVar24);
                                                            mutex_unlock(*unaff_x21 + 0x68);
                                                            uVar22 = *unaff_x21;
                                                            pcVar14 = "Write LPG_PATTERN_CONFIG failed, rc=%d\n";
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    else {
                                        unaff_x24 = unaff_x28 + 0x1a;
                                        auStack_84[0] = 0;
                                        mutex_lock(unaff_x24);
                                        puStack_90 = unaff_x25 + unaff_x19 * 0x70 + 0x58;
                                        uVar8 = nvmem_device_write(*(unaff_x28 + 0x28),*puStack_90 + 6,1,auStack_84);
                                        if (uVar8 < 0) {
                                            piVar24 = uVar8;
                                            _dev_err(*(unaff_x28 + 0x14),"write SDAM add 0x%x failed, rc=%d\n",
                                                     *puStack_90 + 6,piVar24);
                                            mutex_unlock(unaff_x24);
                                            uVar22 = *unaff_x21;
                                            pcVar14 = "Write SDAM_PBS_SCRATCH_LUT_COUNTER_OFFSET failed, rc=%d\n";
                                        }
                                        else {
                                            mutex_unlock(unaff_x24);
                                            unaff_x28 = *unaff_x21;
                                            unaff_x24 = unaff_x28 + 0x1a;
                                            uVar8 = 0;
                                            if (*(*(unaff_x28 + 0x18) + 0x48) != 0) {
                                                uVar8 = (*(unaff_x25 + unaff_x19 * 0x70 + 0x28) * 1000) /
                                                        *(*(unaff_x28 + 0x18) + 0x48);
                                            }
                                            acStack_80[0] = uVar8 - ((uVar8 & 0xff) != 0);
                                            mutex_lock(unaff_x24);
                                            uVar8 = nvmem_device_write(*(unaff_x28 + 0x28),0x47,1,acStack_80);
                                            if (uVar8 < 0) {
                                                piVar24 = uVar8;
                                                _dev_err(*(unaff_x28 + 0x14),"write SDAM add 0x%x failed, rc=%d\n",
                                                         0x47,piVar24);
                                                mutex_unlock(unaff_x24);
                                                uVar22 = *unaff_x21;
                                                pcVar14 = "Write SDAM_REG_RAMP_STEP_DURATION failed, rc=%d\n";
                                            }
                                            else {
                                                mutex_unlock(unaff_x24);
                                                unaff_x28 = *unaff_x21;
                                                acStack_7c[0] = *(unaff_x25 + unaff_x19 * 0x70 + 0x2c);
                                                if (*(*(unaff_x28 + 0x18) + 0x38) == 2) {
                                                    acStack_7c[0] =
                                                         acStack_7c[0] + *(*(unaff_x28 + 0x18) + 0x3c) + -0x40;
                                                }
                                                unaff_x24 = unaff_x28 + 0x1a;
                                                mutex_lock(unaff_x24);
                                                uVar8 = nvmem_device_write(*(unaff_x28 + 0x28),*puStack_90 + 3,1,
                                                                           acStack_7c);
                                                if (uVar8 < 0) {
                                                    piVar24 = uVar8;
                                                    _dev_err(*(unaff_x28 + 0x14),"write SDAM add 0x%x failed, rc=%d\n"
                                                             ,*puStack_90 + 3,piVar24);
                                                    mutex_unlock(unaff_x24);
                                                    uVar22 = *unaff_x21;
                                                    pcVar14 = "Write SDAM_REG_END_INDEX failed, rc=%d\n";
                                                }
                                                else {
                                                    mutex_unlock(unaff_x24);
                                                    unaff_x28 = *unaff_x21;
                                                    acStack_78[0] = *(unaff_x25 + unaff_x19 * 0x70 + 0x2d);
                                                    if (*(*(unaff_x28 + 0x18) + 0x38) == 2) {
                                                        acStack_78[0] =
                                                             acStack_78[0] + *(*(unaff_x28 + 0x18) + 0x3c) + -0x40;
                                                    }
                                                    unaff_x24 = unaff_x28 + 0x1a;
                                                    mutex_lock(unaff_x24);
                                                    uVar8 = nvmem_device_write(*(unaff_x28 + 0x28),*puStack_90 + 4,1,
                                                                               acStack_78);
                                                    if (uVar8 < 0) {
                                                        piVar24 = uVar8;
                                                        _dev_err(*(unaff_x28 + 0x14),
                                                                 "write SDAM add 0x%x failed, rc=%d\n",*puStack_90 + 4
                                                                 ,piVar24);
                                                        mutex_unlock(unaff_x24);
                                                        uVar22 = *unaff_x21;
                                                        pcVar14 = "Write SDAM_REG_START_INDEX failed, rc=%d\n";
                                                    }
                                                    else {
                                                        puStack_c0 = unaff_x27;
                                                        mutex_unlock(unaff_x24);
                                                        unaff_x24 = *unaff_x21;
                                                        iVar25 = unaff_x25 + unaff_x19 * 0x70;
                                                        puStack_a0 = unaff_x24 + 0x1a;
                                                        pcStack_b8 = iVar25 + 0x2b;
                                                        puStack_b0 = iVar25 + 0x2a;
                                                        uVar1 = *puStack_b0;
                                                        unaff_x28 = uVar1;
                                                        auStack_74[0] = 0;
                                                        uStack_a4 = 8;
                                                        if (uVar1 != 0) {
                                                            uStack_a4 = 10;
                                                        }
                                                        bVar6 = *pcStack_b8 != '\0';
                                                        unaff_x27 = bVar6;
                                                        uStack_a8 = *(iVar25 + 0x2f);
                                                        mutex_lock();
                                                        uVar8 = nvmem_device_read(*(unaff_x24 + 0x28),*puStack_90 + 1,
                                                                                  1,auStack_74);
                                                        puVar5 = puStack_90;
                                                        if (uVar8 < 0) {
                                                            uVar21 = *(unaff_x24 + 0x14);
                                                            pcVar14 = "Read SDAM addr %d failed, rc=%d\n";
                                                            uVar10 = *puStack_90;
                                                        }
                                                        else {
                                                            uVar4 = uStack_a8 << 3;
                                                            if (uVar1 != 0) {
                                                                uVar4 = uVar4 | 2;
                                                            }
                                                            uVar1 = uStack_a4 | bVar6;
                                                            auStack_74[0] =
                                                                 auStack_74[0] & (uVar1 ^ 0xff) |
                                                                 (uVar4 | bVar6) & uVar1;
                                                            uVar8 = nvmem_device_write(*(unaff_x24 + 0x28),
                                                                                       *puStack_90 + 1,1,auStack_74);
                                                            unaff_x28 = puVar5;
                                                            if (-1 < uVar8) {
                                                                mutex_unlock(puStack_a0);
                                                                unaff_x27 = *unaff_x21;
                                                                unaff_x24 = unaff_x27 + 0x68;
                                                                auStack_70[0] = *puStack_b0;
                                                                mutex_lock(unaff_x24);
                                                                uVar8 = nvmem_device_write(*(unaff_x27 + 0xa0),
                                                                                           *puVar5 + 8,1,auStack_70);
                                                                if (uVar8 < 0) {
                                                                    piVar24 = uVar8;
                                                                    _dev_err(*(unaff_x27 + 0x50),
                                                                             "write SDAM add 0x%x failed, rc=%d\n",
                                                                             *puVar5 + 8,piVar24);
                                                                    mutex_unlock(unaff_x24);
                                                                    uVar22 = *unaff_x21;
                                                                    pcVar14 = 
                                                            "Write SDAM_REG_PAUSE_START_MULTIPLIER failed, rc=%d\n";
                                                            }
                                                            else {
                                                                mutex_unlock(unaff_x24);
                                                                unaff_x27 = *unaff_x21;
                                                                unaff_x24 = unaff_x27 + 0x68;
                                                                acStack_6c[0] = *pcStack_b8;
                                                                mutex_lock(unaff_x24);
                                                                uVar8 = nvmem_device_write(*(unaff_x27 + 0xa0),
                                                                                           *puVar5 + 9,1,acStack_6c);
                                                                if (-1 < uVar8) {
                                                                    mutex_unlock(unaff_x24);
                                                                    unaff_x27 = puStack_c0;
                                                                    goto code_r0x08002804;
                                                                }
                                                                piVar24 = uVar8;
                                                                _dev_err(*(unaff_x27 + 0x50),
                                                                         "write SDAM add 0x%x failed, rc=%d\n",
                                                                         *puVar5 + 9,piVar24);
                                                                mutex_unlock(unaff_x24);
                                                                uVar22 = *unaff_x21;
                                                                pcVar14 = 
                                                            "Write SDAM_REG_PAUSE_END_MULTIPLIER failed, rc=%d\n";
                                                            }
                                                            goto code_r0x08002c20;
                                                            }
                                                            uVar10 = *puVar5;
                                                            uVar21 = *(unaff_x24 + 0x14);
                                                            pcVar14 = "write SDAM addr %d failed, rc=%d\n";
                                                        }
                                                        piVar24 = uVar8;
                                                        _dev_err(uVar21,pcVar14,uVar10 + 1,piVar24);
                                                        mutex_unlock(puStack_a0);
                                                        uVar22 = *unaff_x21;
                                                        pcVar14 = "Write SDAM_REG_PATTERN_CONFIG failed, rc=%d\n";
                                                    }
                                                }
                                            }
                                        }
                                    }
code_r0x08002c20:
                                    _dev_err(*(uVar22 + 0x50),pcVar14,piVar24);
                                    puVar17 = *(param_1 + 0x18);
                                    iVar25 = unaff_x25 + unaff_x19 * 0x70;
                                    pcVar14 = "Config LPG%d ramping failed, rc=%d\n";
                                    goto code_r0x08002c40;
                                }
                                iVar25 = unaff_x25 + unaff_x19 * 0x70;
                                uVar10 = sym.qpnp_lpg_set_lut_pattern(unaff_x21,*(iVar25 + 0x38),*(iVar25 + 0x40));
                                if (-1 < uVar10) {
                                    *unaff_x24 = 1;
                                    goto code_r0x08002294;
                                }
                                piVar24 = uVar10;
                                iVar25 = unaff_x25 + unaff_x19 * 0x70;
                                pcVar14 = "set LUT pattern failed for LPG%d, rc=%d\n";
                                uVar21 = *(*unaff_x21 + 0x50);
                            }
                            else {
code_r0x08002838:
                                puVar17 = *(param_1 + 0x18);
                                piVar24 = uVar7;
                                iVar25 = unaff_x25 + unaff_x19 * 0x70;
                                pcVar14 = "Enable PWM output failed for channel %d, rc=%d\n";
code_r0x08002c40:
                                uVar21 = *puVar17;
                            }
                            _dev_err(uVar21,pcVar14,*(iVar25 + 0x4c),piVar24);
                            goto code_r0x080021fc;
                        }
                    }
                }
                piVar24 = NULL;
                goto code_r0x080021fc;
            }
        }
        else {
            _dev_err(puVar17[10],"hw index %d out of range [0-%d]\n",uVar8,*(puVar17 + 0x17) - 1);
            puVar17 = *(param_1 + 0x18);
        }
        _dev_err(*puVar17,"lpg not found\n");
        piVar24 = 0xffffffed;
    }
code_r0x080021fc:
    iVar25 = sp_el0;
    if (*(iVar25 + 0x5e0) == iStack_68) {
        return piVar24;
    }
    auVar30 = __stack_chk_fail();
    piVar13 = auVar30._0_8_;
    *extraout_x18 = sym.qpnp_lpg_pwm_src_enable;
    pcStack_118 = sym.qpnp_lpg_pwm_src_enable;
    iVar25 = sp_el0;
    piVar20 = auVar30._8_8_ & 0xffffffff;
    iStack_128 = *(iVar25 + 0x5e0);
    iVar25 = *piVar13;
    uVar8 = *(piVar13 + 0x5c) << 2;
    uVar10 = uVar8;
    if ((*(piVar13 + 0x5c) == 0) && (uVar10 = 2, *(iVar25 + 200) != '\0')) {
        uVar10 = uVar8;
    }
    piVar26 = *(iVar25 + 0x60);
    uVar8 = uVar10 | 0x80;
    if ((auVar30._8_8_ & 1) == 0) {
        uVar8 = uVar10;
    }
    puStack_120 = &stack0xffffffffffffffa0;
    puStack_110 = unaff_x28;
    puStack_108 = unaff_x27;
    puStack_100 = unaff_x26;
    iStack_f8 = unaff_x25;
    puStack_f0 = unaff_x24;
    piStack_e8 = piVar24;
    uStack_e0 = unaff_x22;
    puStack_d8 = unaff_x21;
    iStack_d0 = unaff_x20;
    uStack_c8 = unaff_x19;
    mutex_lock(iVar25 + 0x68);
    uVar22 = uVar8 & 0xff;
    piVar24 = 0x86;
    uVar8 = regmap_update_bits_base(*(*piVar13 + 0x48),piVar13[10] + 0x46,0x86,uVar22,0,0,0);
    piVar19 = uVar8;
    if (uVar8 < 0) {
        _dev_err(*(*piVar13 + 0x50),"Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",piVar13[10] + 0x46,
                 uVar22,0x86,piVar19);
        mutex_unlock(*piVar13 + 0x68);
        uVar21 = *(iVar25 + 0x50);
        pcVar14 = "Write LPG_ENABLE_CONTROL failed, rc=%d\n";
code_r0x08002f08:
        piVar24 = piVar19;
        _dev_err(uVar21,pcVar14);
    }
    else {
        mutex_unlock(*piVar13 + 0x68);
        uVar8 = *(piVar13 + 0x5c) == '\0' & auVar30._8_4_;
        uVar22 = uVar8;
        if (*(iVar25 + 200) == '\0') {
            if (uVar8 != 0) {
                uVar8 = *(iVar25 + 0xb8);
                uVar10 = 1 << (*(piVar13 + 0x4c) & 0x1f);
                if (uVar8 != 0) {
                    uVar22 = 0;
                    unaff_x25 = 0x70;
                    do {
                        if (*(iVar25 + 0x98) == 0) break;
                        iVar9 = *(*(iVar25 + 0x98) + uVar22 * 4);
                        if (iVar9 == 0) break;
                        if (piVar13[9] == 2) {
                            uVar7 = iVar9 - 1;
                            unaff_x27 = uVar7;
                            if (*(*(iVar25 + 0x38) + unaff_x27 * 0x70 + 0x4c) != '\0') {
                                unaff_x26 = *(iVar25 + 0x58) + unaff_x27 * 0x70;
                                mutex_lock(*unaff_x26 + 0x68);
                                unaff_x28 = unaff_x26 + 0x14;
                                iVar9 = regmap_update_bits_base
                                                  (*(*unaff_x26 + 0x48),*unaff_x28 + 0x46,0x80,0,0,0,0);
                                if (iVar9 < 0) {
                                    uVar8 = *unaff_x28;
                                    uVar21 = *(*unaff_x26 + 0x50);
                                    uVar15 = 0;
                                }
                                else {
                                    mutex_unlock(*unaff_x26 + 0x68);
                                    unaff_x26 = *(iVar25 + 0x58) + unaff_x27 * 0x70;
                                    mutex_lock(*unaff_x26 + 0x68);
                                    unaff_x28 = unaff_x26 + 0x14;
                                    iVar9 = regmap_update_bits_base
                                                      (*(*unaff_x26 + 0x48),*unaff_x28 + 0x46,0x80,0x80,0,0,0);
                                    if (-1 < iVar9) {
                                        mutex_unlock(*unaff_x26 + 0x68);
                                        uVar10 = uVar10 | 1 << (uVar7 & 0x1f);
                                        uVar8 = *(iVar25 + 0xb8);
                                        goto code_r0x08002da4;
                                    }
                                    uVar8 = *unaff_x28;
                                    uVar21 = *(*unaff_x26 + 0x50);
                                    uVar15 = 0x80;
                                }
                                _dev_err(uVar21,"Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",
                                         uVar8 + 0x46,uVar15,0x80,iVar9);
                                mutex_unlock(*unaff_x26 + 0x68);
                                break;
                            }
                        }
code_r0x08002da4:
                        uVar7 = uVar22 + 1;
                        uVar22 = uVar7;
                    } while (uVar7 < uVar8);
                }
                piVar13 = piVar26 + 1;
                mutex_lock(piVar13);
                mutex_lock(*piVar26 + 0x68);
                piVar20 = uVar10 & 0xff;
                piVar24 = piVar20;
                uVar8 = regmap_write(*(*piVar26 + 0x48),*(piVar26 + 0x3c) + 200);
                piVar19 = uVar8;
                if (uVar8 < 0) {
                    _dev_err(*(*piVar26 + 0x50),"Write addr 0x%x with value %d failed, rc=%d\n",
                             *(piVar26 + 0x3c) + 200,piVar20,piVar19);
                    mutex_unlock(*piVar26 + 0x68);
                    piVar24 = piVar19;
                    _dev_err(*(iVar25 + 0x50),"Write LPG_LUT_RAMP_CONTROL failed, rc=%d\n");
                }
                else {
                    mutex_unlock(*piVar26 + 0x68);
                }
                mutex_unlock(piVar13);
            }
        }
        else {
            piVar26 = *piVar13;
            auStack_12c[0] = uVar8;
            piVar20 = piVar26 + 0xd;
            mutex_lock(piVar20);
            piVar24 = 0x1;
            uVar8 = nvmem_device_write(piVar26[0x14],piVar13[0xb],1,auStack_12c);
            if (uVar8 < 0) {
                piVar19 = uVar8;
                _dev_err(piVar26[10],"write SDAM add 0x%x failed, rc=%d\n",piVar13[0xb],piVar19);
                mutex_unlock(piVar20);
                uVar21 = *(iVar25 + 0x50);
                pcVar14 = "Write SDAM_REG_LUT_EN failed, rc=%d\n";
                goto code_r0x08002f08;
            }
            mutex_unlock(piVar20);
            sym.qpnp_lpg_pbs_trigger_enable(piVar13);
            piVar19 = NULL;
        }
    }
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_128) {
        return piVar19;
    }
    auVar30 = __stack_chk_fail();
    piVar23 = auVar30._8_8_;
    piVar33 = auVar30._0_8_;
    *extraout_x18_00 = sym.qpnp_lpg_set_lut_pattern;
    pcStack_188 = sym.qpnp_lpg_set_lut_pattern;
    pppuVar31 = &ppuStack_190;
    iVar18 = sp_el0;
    piVar28 = piVar24 & 0xffffffff;
    iStack_198 = *(iVar18 + 0x5e0);
    iVar18 = *piVar33;
    piVar29 = *(iVar18 + 0x60);
    uVar8 = piVar24;
    ppuStack_190 = &puStack_120;
    puStack_180 = unaff_x28;
    puStack_178 = unaff_x27;
    puStack_170 = unaff_x26;
    iStack_168 = unaff_x25;
    piStack_160 = piVar26;
    iStack_158 = iVar25;
    uStack_150 = uVar22;
    piStack_148 = piVar20;
    piStack_140 = piVar19;
    piStack_138 = piVar13;
    if (*(iVar18 + 200) == '\0') {
        if (*(piVar33 + 0x54) < uVar8) goto code_r0x080032a4;
        mutex_lock();
        if (uVar8 == 0) {
            piVar24 = NULL;
        }
        else {
            piVar26 = NULL;
            uVar10 = *(piVar33 + 0x2d) * 2 + 0x42;
            do {
                if (piVar26 == 0x41) goto code_r0x080033c8;
                uVar12 = 1 << (*(piVar33 + 1) & 0x1f);
                uVar7 = uVar12 & 0xffff;
                uVar11 = (uVar7 * *(piVar23 + piVar26 * 4)) / 100;
                uVar27 = uVar11 & 0xffff;
                if (uVar7 < uVar27) {
                    _dev_err(*(*piVar33 + 0x50),"PWM value %d exceed the max %d\n");
                    piVar24 = 0xffffffea;
                    goto code_r0x08003260;
                }
                uVar12 = uVar12 - 1;
                if (uVar27 != uVar7) {
                    uVar12 = uVar11;
                }
                piVar20 = uVar12;
                mutex_lock(*piVar29 + 0x68);
                uVar7 = uVar10 & 0xff;
                piVar19 = uVar7;
                uVar27 = uVar12 & 0xff;
                uVar11 = regmap_write(*(*piVar29 + 0x48),*(piVar29 + 0x3c) + uVar7,uVar27);
                if (uVar11 < 0) {
                    piVar24 = uVar11;
                    _dev_err(*(*piVar29 + 0x50),"Write addr 0x%x with value %d failed, rc=%d\n",
                             *(piVar29 + 0x3c) + uVar7,uVar27,piVar24);
                    mutex_unlock(*piVar29 + 0x68);
                    iVar25 = *piVar33;
                    pcVar14 = "Write NO.%d LUT pattern LSB (%d) failed, rc=%d\n";
code_r0x08003394:
                    _dev_err(*(iVar25 + 0x50),pcVar14,piVar26 & 0xffffffff,uVar27,piVar24);
                    goto code_r0x08003260;
                }
                uVar27 = uVar12 >> 8 & 0xff;
                mutex_unlock(*piVar29 + 0x68);
                piVar19 = uVar10 | 1;
                mutex_lock(*piVar29 + 0x68);
                uVar7 = uVar10 & 0xff | 1;
                piVar20 = uVar7;
                uVar12 = regmap_update_bits_base(*(*piVar29 + 0x48),*(piVar29 + 0x3c) + uVar7,1,uVar27,0,0,0);
                piVar24 = uVar12;
                if (uVar12 < 0) {
                    _dev_err(*(*piVar29 + 0x50),"Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",
                             *(piVar29 + 0x3c) + uVar7,uVar27,1,piVar24);
                    mutex_unlock(*piVar29 + 0x68);
                    iVar25 = *piVar33;
                    pcVar14 = "Write NO.%d LUT pattern MSB (%d) failed, rc=%d\n";
                    goto code_r0x08003394;
                }
                mutex_unlock(*piVar29 + 0x68);
                uVar10 = uVar10 + 2;
                piVar26 = piVar26 + 1;
            } while (piVar28 != piVar26);
        }
        *(piVar33 + 8) = uVar8;
code_r0x08003260:
        mutex_unlock(piVar29 + 1);
    }
    else {
        uStack_1a0 = 0;
        uStack_1b0 = 0;
        uStack_1a8 = 0;
        uStack_1c0 = 0;
        uStack_1b8 = 0;
        uStack_1d0 = 0;
        uStack_1c8 = 0;
        uStack_1e0 = 0;
        uStack_1d8 = 0;
        if (uVar8 <= *(piVar33 + 0x54)) {
            piVar20 = piVar29 + 1;
            mutex_lock(piVar20);
            uVar1 = *(piVar33 + 0x2d);
            piVar19 = uVar1;
            if (uVar8 != 0) {
                piVar24 = NULL;
                do {
                    if (piVar24 == 0x41) {
code_r0x080033c8:
    //WARNING: Does not return
                        pcVar32 = SoftwareBreakpoint(0x5512,0x80033cc);
                        (*pcVar32)();
                    }
                    *(&uStack_1e0 + piVar24) = (*(piVar23 + piVar24 * 4) * 0xff) / 100;
                    piVar24 = piVar24 + 1;
                } while (piVar28 != piVar24);
            }
            if (uVar1 < 0x40) {
                piVar26 = *piVar29;
                piVar23 = piVar26 + 0xd;
                mutex_lock(piVar23);
                uVar10 = nvmem_device_write(piVar26[0x15],*(piVar29 + 0x3c) + uVar1,piVar28,&uStack_1e0);
                if (-1 < uVar10) {
                    mutex_unlock(piVar23);
                    piVar24 = NULL;
                    *(piVar33 + 8) = uVar8;
                    goto code_r0x08003260;
                }
                piVar24 = uVar10;
                _dev_err(piVar26[10],"write SDAM addr %d failed, rc=%d\n",*(piVar29 + 0x3c) + uVar1,piVar24);
                mutex_unlock(piVar23);
            }
            else {
                piVar24 = 0xffffffea;
            }
            _dev_err(*(*piVar33 + 0x50),"Write pattern in SDAM failed, rc=%d\n",piVar24);
            goto code_r0x08003260;
        }
code_r0x080032a4:
        _dev_err(*(iVar18 + 0x50),"new pattern length (%d) larger than predefined (%d)\n",piVar28);
        piVar24 = 0xffffffea;
    }
    iVar25 = sp_el0;
    if (*(iVar25 + 0x5e0) == iStack_198) {
        return piVar24;
    }
    piVar13 = __stack_chk_fail();
    *extraout_x18_01 = sym.qpnp_lpg_set_pwm_config;
    pcVar32 = sym.qpnp_lpg_set_pwm_config;
    cVar2 = *(piVar13 + 0x5d);
    iVar9 = piVar13[1];
    if (cVar2 == '\f') {
        uVar8 = iVar9 - 8;
        iVar9 = *(piVar13 + 0xc);
        uVar10 = 0xffffffea;
        if (7 < uVar8) {
            uVar8 = 0xffffffea;
        }
        if (19199999 < iVar9) {
            if (iVar9 != 19200000) {
                if (iVar9 == 76800000) {
                    uVar10 = 3;
                }
                goto code_r0x080034c4;
            }
code_r0x080034b8:
            uVar10 = 2;
            goto code_r0x080034c4;
        }
        if (iVar9 != 0x400) {
            if (iVar9 != 0x8000) goto code_r0x080034c4;
code_r0x080034a8:
            uVar10 = 1;
            goto code_r0x080034c4;
        }
    }
    else {
        if (iVar9 == 6) {
            uVar8 = 0;
        }
        else if (iVar9 == 9) {
            uVar8 = 1;
        }
        else {
            uVar8 = 0xffffffea;
        }
        iVar9 = *(piVar13 + 0xc);
        if (iVar9 != 0x400) {
            if (iVar9 != 19200000) {
                if (iVar9 != 0x8000) {
                    uVar10 = 0xffffffea;
                    goto code_r0x080034c4;
                }
                goto code_r0x080034a8;
            }
            goto code_r0x080034b8;
        }
    }
    uVar10 = 0;
code_r0x080034c4:
    piVar28 = 0xffffffea;
    uVar7 = 0xffffffea;
    uVar27 = piVar13[2] - 1;
    if (uVar27 < 6) {
        if ((0x35U >> (uVar27 & 0x1f) & 1) == 0) {
            uVar7 = 0xffffffea;
        }
        else {
            uVar7 = *(uVar27 * 4 + 0x80013c4);
        }
    }
    uVar27 = *(piVar13 + 0x14);
    if (7 < uVar27) {
        uVar27 = 0xffffffea;
    }
    if (-1 < (uVar10 | uVar8 | uVar7 | uVar27)) {
        if (cVar2 == '\v') {
            iVar25 = 2;
            uVar21 = 7;
        }
        else if (cVar2 == '\f') {
            iVar25 = 4;
            uVar21 = 0x77;
        }
        else {
            iVar25 = 4;
            uVar21 = 0x13;
        }
        mutex_lock(*piVar13 + 0x68);
        uVar8 = (uVar8 << iVar25 | uVar10 + 1) & 0xff;
        uVar10 = regmap_update_bits_base
                           (*(*piVar13 + 0x48),piVar13[10] + 0x41,uVar21,uVar8,0,0,0,in_x7,pppuVar31,pcVar32,
                            piVar26,piVar24,piVar23,piVar20,piVar19,piVar33);
        if (uVar10 < 0) {
            piVar28 = uVar10;
            _dev_err(*(*piVar13 + 0x50),"Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",
                     piVar13[10] + 0x41,uVar8,uVar21,piVar28);
            mutex_unlock(*piVar13 + 0x68);
            iVar25 = *piVar13;
            pcVar14 = "Write LPG_PWM_SIZE_CLK failed, rc=%d\n";
        }
        else {
            mutex_unlock(*piVar13 + 0x68);
            mutex_lock(*piVar13 + 0x68);
            uVar8 = (uVar27 | uVar7 << 5) & 0xff;
            uVar10 = regmap_update_bits_base
                               (*(*piVar13 + 0x48),piVar13[10] + 0x42,0x67,uVar8,0,0,0,in_x7,pppuVar31,pcVar32
                                ,piVar26,piVar24,piVar23,piVar20,piVar19,piVar33);
            if (uVar10 < 0) {
                piVar28 = uVar10;
                _dev_err(*(*piVar13 + 0x50),"Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",
                         piVar13[10] + 0x42,uVar8,0x67,piVar28);
                mutex_unlock(*piVar13 + 0x68);
                iVar25 = *piVar13;
                pcVar14 = "Write LPG_PWM_FREQ_PREDIV_CLK failed, rc=%d\n";
            }
            else {
                mutex_unlock(*piVar13 + 0x68);
                if (*(piVar13 + 0x5c) == '\0') {
                    return NULL;
                }
                uVar3 = *(piVar13 + 3);
                uVar16 = 0xff;
                if (*(piVar13 + 0x5d) != '\f') {
                    uVar16 = 1;
                }
                mutex_lock(0xff,*piVar13 + 0x68);
                uVar8 = regmap_update_bits_base(*(*piVar13 + 0x48),piVar13[10] + 0x45,uVar16,uVar3 >> 8,0,0,0);
                if (uVar8 < 0) {
                    piVar28 = uVar8;
                    _dev_err(*(*piVar13 + 0x50),"Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",
                             piVar13[10] + 0x45,uVar3 >> 8,uVar16,piVar28);
                    mutex_unlock(*piVar13 + 0x68);
                    iVar25 = *piVar13;
                    pcVar14 = "Write LPG_PWM_VALUE_MSB failed, rc=%d\n";
                }
                else {
                    mutex_unlock(*piVar13 + 0x68);
                    iVar25 = piVar13[3];
                    mutex_lock(*piVar13 + 0x68);
                    uVar8 = regmap_write(*(*piVar13 + 0x48),piVar13[10] + 0x44,iVar25);
                    if (uVar8 < 0) {
                        piVar28 = uVar8;
                        _dev_err(*(*piVar13 + 0x50),"Write addr 0x%x with value 0x%x failed, rc=%d\n",
                                 piVar13[10] + 0x44,iVar25,piVar28);
                        mutex_unlock(*piVar13 + 0x68);
                        iVar25 = *piVar13;
                        pcVar14 = "Write LPG_PWM_VALUE_LSB failed, rc=%d\n";
                    }
                    else {
                        mutex_unlock(*piVar13 + 0x68);
                        mutex_lock(*piVar13 + 0x68);
                        uVar8 = regmap_write(*(*piVar13 + 0x48),piVar13[10] + 0x47,1);
                        piVar28 = uVar8;
                        if (-1 < uVar8) {
                            mutex_unlock(*piVar13 + 0x68);
                            return piVar28;
                        }
                        _dev_err(*(*piVar13 + 0x50),"Write addr 0x%x with value 0x%x failed, rc=%d\n",
                                 piVar13[10] + 0x47,1,piVar28);
                        mutex_unlock(*piVar13 + 0x68);
                        iVar25 = *piVar13;
                        pcVar14 = "Write LPG_PWM_SYNC failed, rc=%d\n";
                    }
                }
            }
        }
        _dev_err(*(iVar25 + 0x50),pcVar14,piVar28);
    }
    return piVar28;
}


// ===== sym.qpnp_lpg_probe.dc31bff6ac2356f2ace3cf841d8a55bf.cfi_jt @ 0x08002138 (size 8) =====

uint64_t sym.qpnp_lpg_probe.dc31bff6ac2356f2ace3cf841d8a55bf.cfi_jt(int64_t param_1)

{
    uint32_t *puVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    ulong *arg1;
    ulong uVar7;
    int64_t iVar8;
    uint32_t *puVar9;
    uint64_t uVar10;
    char *pcVar11;
    uint uVar12;
    int64_t iVar13;
    int64_t iVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar15;
    uint64_t uVar16;
    int64_t *piVar17;
    int *piVar18;
    ulong unaff_x30;
    uint32_t uStack_70;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    arg1 = devm_kmalloc(param_1 + 0x10,0xd0,0xdc0);
    if (arg1 == NULL) {
        uVar16 = 0xfffffff4;
        goto code_r0x08004418;
    }
    uVar7 = *(param_1 + 0x70);
    piVar17 = arg1 + 10;
    *piVar17 = param_1 + 0x10;
    iVar8 = dev_get_regmap(uVar7,0);
    arg1[9] = iVar8;
    if (iVar8 == 0) {
        _dev_err(*piVar17,"Getting regmap failed\n");
        uVar16 = 0xffffffea;
        goto code_r0x08004418;
    }
    __mutex_init(arg1 + 0xd,"&chip->bus_lock",reloc.qpnp_lpg_probe.dc31bff6ac2356f2ace3cf841d8a55bf.cfi_jt);
    puVar9 = __of_get_address(*(arg1[10] + 0x2f0),0,0xffffffff,0,0);
    if (puVar9 == NULL) {
        _dev_err(*piVar17,"Get %s address failed\n","lpg-base");
        uVar16 = 0xffffffea;
code_r0x08004404:
        iVar8 = *piVar17;
        pcVar11 = "Devicetree properties parsing failed, rc=%d\n";
code_r0x08004410:
        _dev_err(iVar8,pcVar11,uVar16 & 0xffffffff);
    }
    else {
        puVar1 = arg1 + 0x17;
        uVar6 = *puVar9;
        uVar3 = of_property_read_variable_u32_array(*(arg1[10] + 0x2f0),"qcom,num-lpg-channels",puVar1,1,0);
        if (uVar3 < 0) {
            uVar16 = uVar3;
            iVar8 = *piVar17;
            pcVar11 = "Failed to get qcom,num-lpg-channels, rc=%d\n";
code_r0x0800438c:
            _dev_err(iVar8,pcVar11,uVar16);
            goto code_r0x08004394;
        }
        if (*puVar1 == 0) {
            _dev_err(*piVar17,"No LPG channels specified\n");
            uVar16 = 0xffffffea;
            goto code_r0x08004404;
        }
        iVar8 = devm_kmalloc(arg1[10],*puVar1 * 0x70,0xdc0);
        arg1[0xb] = iVar8;
        if (iVar8 == 0) goto code_r0x08004268;
        if (*puVar1 != 0) {
            uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
            uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
            uVar3 = 1;
            while( true ) {
                iVar2 = uVar3 - 1;
                *(iVar8 + iVar2 * 0x70) = arg1;
                *(arg1[0xb] + iVar2 * 0x70 + 0x4c) = iVar2;
                *(arg1[0xb] + iVar2 * 0x70 + 0x50) = uVar6;
                *(arg1[0xb] + iVar2 * 0x70 + 0x5c) = 1;
                iVar8 = arg1[0xb];
                uStack_6c = 0;
                piVar15 = iVar8 + iVar2 * 0x70;
                mutex_lock(*piVar15 + 0x68);
                uVar4 = regmap_read(*(*piVar15 + 0x48),piVar15[10] + 5,&uStack_6c);
                if (uVar4 < 0) break;
                iVar13 = *piVar15;
                *(iVar8 + iVar2 * 0x70 + 0x5d) = uStack_6c;
                mutex_unlock(iVar13 + 0x68);
                if (*puVar1 <= uVar3) goto code_r0x08003db0;
                iVar8 = arg1[0xb];
                uVar6 = uVar6 + 0x100;
                uVar3 = uVar3 + 1;
            }
            uVar16 = uVar4;
            _dev_err(*(*piVar15 + 0x50),"Read addr 0x%x failed, rc=%d\n",piVar15[10] + 5,uVar16);
            mutex_unlock(*piVar15 + 0x68);
            pcVar11 = "Read subtype failed, rc=%d\n";
            iVar8 = *piVar17;
            goto code_r0x0800438c;
        }
code_r0x08003db0:
        iVar8 = of_find_property(*(*piVar17 + 0x2f0),"qcom,pfm-chan-ids",0);
        if (iVar8 == 0) {
code_r0x08003ee4:
            iVar8 = of_find_property(*(*piVar17 + 0x2f0),"nvmem",0);
            if (iVar8 == 0) {
                puVar9 = __of_get_address(*(*piVar17 + 0x2f0),1,0xffffffff,0,0);
                if (puVar9 != NULL) {
                    iVar8 = devm_kmalloc(arg1[10],0x50,0xcc0);
                    arg1[0xc] = iVar8;
                    if (iVar8 == 0) goto code_r0x08004268;
                    uVar6 = (*puVar9 & 0xff00ff00) >> 8 | (*puVar9 & 0xff00ff) << 8;
                    *(iVar8 + 0x3c) = uVar6 >> 0x10 | uVar6 << 0x10;
                    uVar16 = sym.qpnp_lpg_parse_pattern_dt(arg1,0x2f);
                    if (-1 < uVar16) goto code_r0x080040b8;
code_r0x08003fe4:
                    uVar16 = uVar16 & 0xffffffff;
                    goto code_r0x08004394;
                }
code_r0x080040b8:
                uVar6 = *(arg1 + 0x17);
                if (*(arg1 + 0x19) == '\0') {
code_r0x08004170:
                    if (uVar6 != 0) {
                        uVar6 = 0;
                        do {
                            iVar8 = arg1[0xb];
                            iVar13 = iVar8 + uVar6 * 0x70;
                            *(iVar13 + 0x48) = 1;
                            if (*(iVar13 + 0x5f) != '\0') {
                                piVar15 = iVar8 + uVar6 * 0x70;
                                mutex_lock(*piVar15 + 0x68);
                                uVar3 = regmap_write(*(*piVar15 + 0x48),piVar15[10] + 0x50,0x80);
                                if (uVar3 < 0) {
                                    uVar16 = uVar3;
                                    _dev_err(*(*piVar15 + 0x50),"Write addr 0x%x with value 0x%x failed, rc=%d\n",
                                             piVar15[10] + 0x50,0x80,uVar16);
                                    mutex_unlock(*piVar15 + 0x68);
                                    pcVar11 = "Write fm_mode_enable failed, rc=%d\n";
                                    iVar8 = *piVar17;
                                    goto code_r0x08004410;
                                }
                                mutex_unlock(*piVar15 + 0x68);
                            }
                            uVar6 = uVar6 + 1;
                        } while (uVar6 < *puVar1);
                    }
                }
                else if (uVar6 != 0) {
                    uVar3 = 0;
                    do {
                        piVar18 = arg1[0xb] + uVar3 * 0x70 + 0x58;
                        if (*piVar18 != 0) {
                            piVar15 = arg1[0xb] + uVar3 * 0x70;
                            uStack_6c = uStack_6c & 0xffffff00;
                            iVar13 = *piVar15;
                            iVar8 = iVar13 + 0x68;
                            mutex_lock(iVar8);
                            uVar6 = nvmem_device_write(*(iVar13 + 0xa0),*piVar18,1,&uStack_6c);
                            if (uVar6 < 0) {
                                uVar16 = uVar6;
                                _dev_err(*(iVar13 + 0x50),"write SDAM add 0x%x failed, rc=%d\n",*piVar18,uVar16);
                                mutex_unlock(iVar8);
                                _dev_err(*piVar17,"Write SDAM_REG_LUT_EN failed, rc=%d\n",uVar16);
                            }
                            else {
                                mutex_unlock(iVar8);
                                iVar13 = *piVar15;
                                uStack_6c = uStack_6c & 0xffffff00;
                                iVar8 = iVar13 + 0x68;
                                mutex_lock(iVar8);
                                uVar6 = nvmem_device_write(*(iVar13 + 0xa0),*piVar18 + 6,1,&uStack_6c);
                                if (-1 < uVar6) {
                                    mutex_unlock(iVar8);
                                    uVar6 = *puVar1;
                                    goto code_r0x080040d4;
                                }
                                uVar16 = uVar6;
                                _dev_err(*(iVar13 + 0x50),"write SDAM add 0x%x failed, rc=%d\n",*piVar18 + 6,uVar16);
                                mutex_unlock(iVar8);
                                _dev_err(*(*piVar15 + 0x50),"Write SDAM_REG_PBS_SCRATCH_LUT_COUNTER failed, rc=%d\n",
                                         uVar16);
                            }
                            iVar8 = *piVar17;
                            pcVar11 = "SDAM HW init failed, rc=%d\n";
                            goto code_r0x08004410;
                        }
code_r0x080040d4:
                        uVar3 = uVar3 + 1;
                    } while (uVar3 < uVar6);
                    goto code_r0x08004170;
                }
                *(arg1[10] + 0x98) = arg1;
                *(arg1 + 2) = 0xffffffff;
                *(arg1 + 0x14) = *(arg1 + 0x17);
                *arg1 = arg1[10];
                arg1[1] = obj.qpnp_lpg_pwm_ops;
                uVar16 = pwmchip_add(arg1);
                if (-1 < uVar16) {
                    uVar16 = 0;
                    goto code_r0x08004418;
                }
                uVar16 = uVar16 & 0xffffffff;
                iVar8 = *piVar17;
                pcVar11 = "Add pwmchip failed, rc=%d\n";
                goto code_r0x08004410;
            }
            iVar8 = devm_kmalloc(*piVar17,0x50,0xcc0);
            arg1[0xc] = iVar8;
            if (iVar8 == 0) {
code_r0x08004268:
                uVar16 = 0xfffffff4;
                goto code_r0x08004404;
            }
            uVar16 = devm_nvmem_device_get(*piVar17,"ppg_sdam");
            if (uVar16 < 0xfffffffffffff001) {
                uVar12 = 1;
                iVar8 = 0xa8;
                iVar13 = 0xa0;
                uVar10 = uVar16;
code_r0x08003ffc:
                iVar14 = arg1[0xc];
                *(arg1 + iVar13) = uVar10;
                *(arg1 + iVar8) = uVar16;
                *(iVar14 + 0x38) = uVar12;
code_r0x0800400c:
                *(arg1 + 0x19) = 1;
                iVar8 = of_find_property(*(arg1[10] + 0x2f0),"qcom,pbs-client",0);
                if (iVar8 != 0) {
                    iVar8 = of_parse_phandle(*(arg1[10] + 0x2f0),"qcom,pbs-client",0);
                    arg1[0x16] = iVar8;
                    if (iVar8 == 0) {
                        _dev_err(*piVar17,"Missing qcom,pbs-client property\n");
                        uVar16 = 0xffffffed;
                        goto code_r0x08004404;
                    }
                }
                uVar6 = of_property_read_variable_u32_array
                                  (*(arg1[10] + 0x2f0),"qcom,lut-sdam-base",arg1[0xc] + 0x3c,1,0);
                if (uVar6 < 0) {
                    uVar16 = uVar6;
                    iVar8 = *piVar17;
                    pcVar11 = "Read qcom,lut-sdam-base failed, rc=%d\n";
                    goto code_r0x0800438c;
                }
                *(arg1[0xc] + 0x48) = 0x1e78;
                of_property_read_variable_u32_array
                          (*(arg1[10] + 0x2f0),"qcom,tick-duration-us",arg1[0xc] + 0x48,1,0);
                uVar16 = sym.qpnp_lpg_parse_pattern_dt(arg1,0x40);
                if (uVar16 < 0) goto code_r0x08003fe4;
                goto code_r0x080040b8;
            }
            uVar10 = devm_nvmem_device_get(*piVar17,"lut_sdam");
            uVar16 = uVar10;
            if ((uVar10 < 0xfffffffffffff001) &&
               (uVar16 = devm_nvmem_device_get(*piVar17,"lpg_chan_sdam"), uVar16 < 0xfffffffffffff001)) {
                uVar12 = 2;
                iVar8 = 0xa0;
                iVar13 = 0xa8;
                goto code_r0x08003ffc;
            }
            if (uVar16 != -0x205) {
                _dev_err(*piVar17,"Failed to get nvmem device, rc=%d\n",uVar16 & 0xffffffff);
                if (uVar16 < 0) goto code_r0x08004394;
                goto code_r0x0800400c;
            }
        }
        else {
            uStack_70 = 0;
            uVar10 = of_property_count_elems_of_size(*(*piVar17 + 0x2f0),"qcom,pfm-chan-ids",4);
            uVar16 = uVar10 & 0xffffffff;
            uVar6 = uVar10;
            if (-1 < uVar6) {
                if ((uVar6 != 0) && (uVar6 <= *puVar1)) {
                    uVar3 = 0;
                    do {
                        uVar4 = of_property_read_u32_index(*(*piVar17 + 0x2f0),"qcom,pfm-chan-ids",uVar3,&uStack_70);
                        if (uVar4 != 0) {
                            iVar8 = *piVar17;
                            pcVar11 = "Read pfm channel %d failed, rc=%d\n";
code_r0x0800434c:
                            _dev_err(iVar8,pcVar11,uVar3,uVar4);
                            goto code_r0x08004350;
                        }
                        uVar4 = *puVar1;
                        if ((uStack_70 == 0) || (uVar4 < uStack_70)) {
                            iVar8 = *piVar17;
                            pcVar11 = "pfm chan id %u is out of range 1~%d\n";
                            uVar3 = uStack_70;
                            goto code_r0x0800434c;
                        }
                        uStack_70 = uStack_70 - 1;
                        if (*(arg1[0xb] + uStack_70 * 0x70 + 0x5d) - 0xb < 2) {
                            piVar15 = arg1[0xb] + uStack_70 * 0x70;
                            uStack_6c = 0;
                            mutex_lock(*piVar15 + 0x68);
                            uVar5 = regmap_read(*(*piVar15 + 0x48),piVar15[10] + 8,&uStack_6c);
                            uVar4 = uStack_6c;
                            if (uVar5 < 0) {
                                uVar16 = uVar5;
                                _dev_err(*(*piVar15 + 0x50),"Read addr 0x%x failed, rc=%d\n",piVar15[10] + 8,uVar16);
                                mutex_unlock(*piVar15 + 0x68);
                                _dev_err(*piVar17,"Read status1 failed, rc=%d\n",uVar16);
                                goto code_r0x08004354;
                            }
                            mutex_unlock(*piVar15 + 0x68);
                            if ((uVar4 & 1) == 0) {
                                uVar16 = 0xffffffa1;
                                goto code_r0x08004354;
                            }
                            *(arg1[0xb] + uStack_70 * 0x70 + 0x5f) = 1;
                        }
                        uVar3 = uVar3 + 1;
                    } while (uVar6 != uVar3);
                    goto code_r0x08003ee4;
                }
code_r0x08004350:
                uVar16 = 0xffffffea;
            }
code_r0x08004354:
            _dev_err(*piVar17,"PFM channels specified incorrectly\n");
code_r0x08004394:
            if (uVar16 != -0x205) goto code_r0x08004404;
        }
        uVar16 = 0xfffffdfb;
    }
code_r0x08004418:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_68) {
        iVar8 = __stack_chk_fail();
        *extraout_x18 = sym.qpnp_lpg_remove;
        iVar8 = *(iVar8 + 0xa8);
        pwmchip_remove(iVar8);
        *(*(iVar8 + 0x50) + 0x98) = 0;
        return 0;
    }
    return uVar16 & 0xffffffff;
}


// ===== sym.qpnp_lpg_remove.dc31bff6ac2356f2ace3cf841d8a55bf.cfi_jt @ 0x08002140 (size 8) =====

ulong sym.qpnp_lpg_remove.dc31bff6ac2356f2ace3cf841d8a55bf.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0xa8);
    pwmchip_remove(iVar1);
    *(*(iVar1 + 0x50) + 0x98) = 0;
    return 0;
}


// ===== sym.qpnp_lpg_pwm_apply.dc31bff6ac2356f2ace3cf841d8a55bf.cfi_jt @ 0x08002148 (size 8) =====

int sym.qpnp_lpg_pwm_apply.dc31bff6ac2356f2ace3cf841d8a55bf.cfi_jt(ulong param_1,int64_t param_2,uint64_t *param_3)

{
    uint32_t *puVar1;
    code *pcVar2;
    uint *puVar3;
    int64_t *piVar4;
    uint32_t *puVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint16_t uVar8;
    uint64_t uVar9;
    uint32_t uVar10;
    char cVar11;
    uchar uVar12;
    uint32_t uVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    code *pcVar16;
    bool bVar17;
    int iVar18;
    int64_t iVar19;
    uint64_t uVar20;
    ulong uVar21;
    char *pcVar22;
    uint64_t uVar23;
    uint64_t uVar24;
    int64_t iVar25;
    int64_t iVar26;
    uint64_t uVar27;
    uint uVar28;
    int64_t *piVar29;
    uint64_t *puVar30;
    int64_t *piVar31;
    uint64_t uVar32;
    uint64_t uVar33;
    int iVar34;
    uint64_t uVar35;
    int64_t iVar36;
    char *pcVar37;
    uint32_t uVar38;
    uint32_t uVar39;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar40;
    uint64_t uVar41;
    uint64_t uVar42;
    uint64_t uVar43;
    uint64_t uVar44;
    int64_t iVar45;
    int *piVar46;
    uint32_t *puVar47;
    uint64_t uVar48;
    int64_t iVar49;
    ulong unaff_x30;
    uint64_t uVar50;
    uchar auVar51 [16];
    uint64_t uStack_190;
    uint32_t auStack_170 [2];
    ulong uStack_168;
    int64_t aiStack_160 [32];
    
    *in_x18 = unaff_x30;
    iVar45 = sp_el0;
    aiStack_160[0x1e] = *(iVar45 + 0x5e0);
    uVar44 = *param_3;
    uVar9 = param_3[1];
    if ((uVar44 != *(param_2 + 0x38)) || (uVar9 != *(param_2 + 0x40))) {
        puVar40 = *(param_2 + 0x18);
        uVar38 = *(param_2 + 0x10);
        uVar42 = uVar38;
        uVar39 = *(puVar40 + 0x17);
        if (uVar38 < uVar39) {
            iVar45 = puVar40[0xb];
            piVar29 = iVar45 + uVar42 * 0x70;
            if (piVar29 != NULL) {
                if (uVar44 < uVar9) {
                    _dev_err(*(*piVar29 + 0x50),"Duty %lluns is larger than period %lluns\n",uVar9,uVar44);
                    iVar18 = -0x16;
                    goto code_r0x08005ba4;
                }
                puVar30 = iVar45 + uVar42 * 0x70 + 0x60;
                uVar41 = *puVar30;
                if (uVar41 == uVar44) {
code_r0x08004f9c:
                    if (*(iVar45 + uVar42 * 0x70 + 0x68) == uVar9) {
                        pcVar37 = iVar45 + uVar42 * 0x70 + 0x5f;
                        if (*pcVar37 == '\0') goto code_r0x08005058;
code_r0x08004fd4:
                        iVar19 = iVar45 + uVar42 * 0x70;
                        cVar11 = *(iVar19 + 0x5d);
                        iVar18 = *(iVar19 + 0xc);
                        if (cVar11 == '\f') {
                            if (iVar18 == 0x400) {
code_r0x08005020:
                                iVar34 = 0;
                            }
                            else if (iVar18 == 0x8000) {
code_r0x08005734:
                                iVar34 = 1;
                            }
                            else {
                                if (iVar18 != 76800000) goto code_r0x0800564c;
                                iVar34 = 3;
                            }
                        }
                        else {
                            if (iVar18 == 0x400) goto code_r0x08005020;
                            if (iVar18 == 0x8000) goto code_r0x08005734;
code_r0x0800564c:
                            if (iVar18 == 19200000) {
                                iVar34 = 2;
                            }
                            else {
                                iVar34 = -0x16;
                            }
                        }
                        iVar18 = -0x16;
                        uVar38 = *(iVar45 + uVar42 * 0x70 + 0x14);
                        if ((uVar38 < 8) && (-1 < iVar34)) {
                            uVar28 = 7;
                            if (cVar11 != '\f') {
                                uVar28 = 3;
                            }
                            mutex_lock(3,*piVar29 + 0x68);
                            piVar46 = iVar45 + uVar42 * 0x70 + 0x50;
                            iVar18 = regmap_update_bits_base
                                               (*(*piVar29 + 0x48),*piVar46 + 0x41,uVar28,iVar34 + 1,0,0,0);
                            if (iVar18 < 0) {
                                _dev_err(*(*piVar29 + 0x50),
                                         "Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",*piVar46 + 0x41
                                         ,iVar34 + 1,uVar28,iVar18);
                                mutex_unlock(*piVar29 + 0x68);
                                iVar19 = *piVar29;
                                pcVar22 = "Write LPG_PWM_SIZE_CLK failed, rc=%d\n";
                            }
                            else {
                                mutex_unlock(*piVar29 + 0x68);
                                mutex_lock(*piVar29 + 0x68);
                                iVar18 = regmap_update_bits_base
                                                   (*(*piVar29 + 0x48),*piVar46 + 0x42,7,uVar38,0,0,0);
                                if (iVar18 < 0) {
                                    _dev_err(*(*piVar29 + 0x50),
                                             "Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",
                                             *piVar46 + 0x42,uVar38,7,iVar18);
                                    mutex_unlock(*piVar29 + 0x68);
                                    iVar19 = *piVar29;
                                    pcVar22 = "Write LPG_PWM_FREQ_PREDIV_CLK failed, rc=%d\n";
                                }
                                else {
                                    mutex_unlock(*piVar29 + 0x68);
                                    uVar12 = *(iVar45 + uVar42 * 0x70 + 0x18);
                                    mutex_lock(*piVar29 + 0x68);
                                    iVar18 = regmap_update_bits_base
                                                       (*(*piVar29 + 0x48),*piVar46 + 0x44,0xff,uVar12,0,0,0);
                                    if (iVar18 < 0) {
                                        _dev_err(*(*piVar29 + 0x50),
                                                 "Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",
                                                 *piVar46 + 0x44,uVar12,0xff,iVar18);
                                        mutex_unlock(*piVar29 + 0x68);
                                        iVar19 = *piVar29;
                                        pcVar22 = "Write LPG_PWM_VALUE_LSB failed, rc=%d\n";
                                    }
                                    else {
                                        mutex_unlock(*piVar29 + 0x68);
                                        mutex_lock(*piVar29 + 0x68);
                                        iVar18 = regmap_write(*(*piVar29 + 0x48),*piVar46 + 0x47,1);
                                        if (-1 < iVar18) {
                                            mutex_unlock(*piVar29 + 0x68);
                                            goto code_r0x0800589c;
                                        }
                                        _dev_err(*(*piVar29 + 0x50),"Write addr 0x%x with value 0x%x failed, rc=%d\n",
                                                 *piVar46 + 0x47,1,iVar18);
                                        mutex_unlock(*piVar29 + 0x68);
                                        iVar19 = *piVar29;
                                        pcVar22 = "Write LPG_PWM_SYNC failed, rc=%d\n";
                                    }
                                }
                            }
                            _dev_err(*(iVar19 + 0x50),pcVar22,iVar18);
                        }
                    }
                    else {
code_r0x08004fc4:
                        pcVar37 = iVar45 + uVar42 * 0x70 + 0x5f;
                        if (*pcVar37 != '\0') goto code_r0x08004fd4;
                        iVar19 = iVar45 + uVar42 * 0x70;
                        uVar38 = *(iVar19 + 8);
                        uVar39 = -1 << (uVar38 & 0x1f);
                        uVar13 = 0;
                        if (uVar44 != 0) {
                            uVar13 = (uVar9 << (uVar38 & 0x3f)) / uVar44;
                        }
                        uVar8 = uVar13;
                        if ((~uVar39 & 0xffff) < (uVar13 & 0xffff)) {
                            uVar8 = ~uVar39;
                        }
                        *(iVar19 + 0x18) = uVar8;
code_r0x08005058:
                        iVar18 = sym.qpnp_lpg_set_pwm_config(piVar29);
                        if (-1 < iVar18) {
code_r0x0800589c:
                            *puVar30 = uVar44;
                            *(iVar45 + uVar42 * 0x70 + 0x68) = uVar9;
                            *(param_2 + 0x40) = param_3[1];
                            *(param_2 + 0x38) = *param_3;
                            goto code_r0x080058c0;
                        }
                    }
                    uVar21 = 0x800050a;
                    if (*pcVar37 != '\0') {
                        uVar21 = 0x8000bc5;
                    }
                    _dev_err(*(*piVar29 + 0x50),"Config %s failed for channel %d, rc=%d\n",uVar21,
                             *(iVar45 + uVar42 * 0x70 + 0x4c),iVar18);
                    goto code_r0x08005ba4;
                }
                piVar31 = iVar45 + uVar42 * 0x70;
                puVar1 = piVar31 + 1;
                if (*(piVar31 + 0x5f) != '\0') {
                    cVar11 = *(piVar31 + 0x5d);
                    uVar7 = 0x10;
                    pcVar16 = obj.clk_period_ns_hi_res;
                    if (cVar11 != '\f') {
                        uVar7 = 0xc;
                        pcVar16 = obj.clk_period_ns;
                    }
                    uVar35 = 0;
                    uVar38 = 0;
                    uVar32 = 0;
                    piVar31 = iVar45 + uVar42 * 0x70 + 0x20;
                    uVar6 = 3;
                    if (cVar11 == '\f') {
                        uVar6 = 4;
                    }
                    uVar39 = 0xffffffea;
                    uVar27 = 0xffffffffffffffff;
                    do {
                        if (uVar7 >> 2 == uVar35) goto code_r0x08005a18;
                        uVar13 = *(pcVar16 + uVar35 * 4);
                        iVar19 = uVar13;
                        uVar33 = 0;
                        if (uVar13 != 0) {
                            uVar33 = uVar44 / uVar13;
                        }
                        uVar13 = (uVar33 >> 1) - 1;
                        if (uVar13 < 0x100) {
                            iVar25 = (uVar33 & 0x1fffffffe) * iVar19;
                            uVar23 = uVar44 - iVar25;
                            uVar24 = -uVar23;
                            if (-1 < uVar23) {
                                uVar24 = uVar23;
                            }
                            if (uVar24 < uVar27) {
                                uVar38 = 0;
                                uVar32 = uVar35 & 0xffffffff;
                                *piVar31 = iVar25;
                                uVar27 = uVar24;
                                uVar39 = uVar13;
                            }
                        }
                        else {
                            uVar24 = 0xffffffffffffffff;
                        }
                        uVar13 = (uVar33 >> 2) - 1;
                        uVar23 = uVar24;
                        if (uVar13 < 0x100) {
                            iVar25 = (uVar33 & 0x3fffffffc) * iVar19;
                            uVar14 = uVar44 - iVar25;
                            uVar23 = -uVar14;
                            if (-1 < uVar14) {
                                uVar23 = uVar14;
                            }
                            if (uVar23 < uVar27) {
                                uVar38 = 1;
                                uVar32 = uVar35 & 0xffffffff;
                                *piVar31 = iVar25;
                                uVar27 = uVar23;
                                uVar39 = uVar13;
                            }
                            if (uVar23 <= uVar24) goto code_r0x08004d94;
                        }
                        else {
code_r0x08004d94:
                            uVar13 = (uVar33 >> 3) - 1;
                            uVar24 = uVar23;
                            if (uVar13 < 0x100) {
                                iVar25 = (uVar33 & 0x7fffffff8) * iVar19;
                                uVar14 = uVar44 - iVar25;
                                uVar24 = -uVar14;
                                if (-1 < uVar14) {
                                    uVar24 = uVar14;
                                }
                                if (uVar24 < uVar27) {
                                    uVar38 = 2;
                                    uVar32 = uVar35 & 0xffffffff;
                                    *piVar31 = iVar25;
                                    uVar27 = uVar24;
                                    uVar39 = uVar13;
                                }
                                if (uVar23 < uVar24) goto code_r0x08004ce0;
                            }
                            uVar13 = (uVar33 >> 4) - 1;
                            uVar23 = uVar24;
                            if (uVar13 < 0x100) {
                                iVar25 = (uVar33 & 0xffffffff0) * iVar19;
                                uVar14 = uVar44 - iVar25;
                                uVar23 = -uVar14;
                                if (-1 < uVar14) {
                                    uVar23 = uVar14;
                                }
                                if (uVar23 < uVar27) {
                                    uVar38 = 3;
                                    uVar32 = uVar35 & 0xffffffff;
                                    *piVar31 = iVar25;
                                    uVar27 = uVar23;
                                    uVar39 = uVar13;
                                }
                                if (uVar24 < uVar23) goto code_r0x08004ce0;
                            }
                            uVar13 = (uVar33 >> 5) - 1;
                            uVar24 = uVar23;
                            if (uVar13 < 0x100) {
                                iVar25 = (uVar33 & 0x1fffffffe0) * iVar19;
                                uVar14 = uVar44 - iVar25;
                                uVar24 = -uVar14;
                                if (-1 < uVar14) {
                                    uVar24 = uVar14;
                                }
                                if (uVar24 < uVar27) {
                                    uVar38 = 4;
                                    uVar32 = uVar35 & 0xffffffff;
                                    *piVar31 = iVar25;
                                    uVar27 = uVar24;
                                    uVar39 = uVar13;
                                }
                                if (uVar23 < uVar24) goto code_r0x08004ce0;
                            }
                            uVar13 = (uVar33 >> 6) - 1;
                            uVar23 = uVar24;
                            if (uVar13 < 0x100) {
                                iVar25 = (uVar33 & 0x3fffffffc0) * iVar19;
                                uVar14 = uVar44 - iVar25;
                                uVar23 = -uVar14;
                                if (-1 < uVar14) {
                                    uVar23 = uVar14;
                                }
                                if (uVar23 < uVar27) {
                                    uVar38 = 5;
                                    uVar32 = uVar35 & 0xffffffff;
                                    *piVar31 = iVar25;
                                    uVar27 = uVar23;
                                    uVar39 = uVar13;
                                }
                                if (uVar24 < uVar23) goto code_r0x08004ce0;
                            }
                            uVar13 = (uVar33 >> 7) - 1;
                            if (uVar13 < 0x100) {
                                iVar25 = (uVar33 & 0x7fffffff80) * iVar19;
                                uVar14 = uVar44 - iVar25;
                                uVar24 = -uVar14;
                                if (-1 < uVar14) {
                                    uVar24 = uVar14;
                                }
                                if (uVar24 < uVar27) {
                                    uVar38 = 6;
                                    uVar32 = uVar35 & 0xffffffff;
                                    *piVar31 = iVar25;
                                    uVar27 = uVar24;
                                    uVar39 = uVar13;
                                }
                                if (uVar23 < uVar24) goto code_r0x08004ce0;
                            }
                            uVar13 = (uVar33 >> 8) - 1;
                            if (uVar13 < 0x100) {
                                iVar19 = (uVar33 & 0xffffffff00) * iVar19;
                                uVar24 = uVar44 - iVar19;
                                uVar33 = -uVar24;
                                if (-1 < uVar24) {
                                    uVar33 = uVar24;
                                }
                                if (uVar33 < uVar27) {
                                    uVar38 = 7;
                                    uVar32 = uVar35 & 0xffffffff;
                                    *piVar31 = iVar19;
                                    uVar27 = uVar33;
                                    uVar39 = uVar13;
                                }
                            }
                        }
code_r0x08004ce0:
                        uVar35 = uVar35 + 1;
                    } while (uVar6 != uVar35);
                    if (uVar39 < 0) {
                        _printk(0x800094a,"__qpnp_lpg_calc_pfm_period",uVar44);
                        iVar18 = -0x16;
                        goto code_r0x08005ba4;
                    }
                    if (uVar7 <= uVar32 * 4) {
code_r0x08005a18:
    //WARNING: Does not return
                        pcVar16 = SoftwareBreakpoint(1,0x8005a1c);
                        (*pcVar16)();
                    }
                    pcVar16 = obj.clk_freq_hz_hi_res;
                    if (cVar11 != '\f') {
                        pcVar16 = obj.clk_freq_hz;
                    }
                    uVar28 = *(pcVar16 + uVar32 * 4);
                    iVar19 = iVar45 + uVar42 * 0x70;
                    *(iVar19 + 0x14) = *(obj.pwm_exponent + uVar38 * 4);
                    *(iVar19 + 0xc) = uVar28;
                    *(iVar19 + 0x18) = uVar39;
code_r0x08004f94:
                    if (uVar41 == uVar44) goto code_r0x08004f9c;
                    goto code_r0x08004fc4;
                }
                bVar17 = *(piVar31 + 0x5d) == '\f';
                iVar19 = 3;
                if (bVar17) {
                    iVar19 = 4;
                }
                uVar7 = 0x20;
                if (!bVar17) {
                    uVar7 = 8;
                }
                pcVar16 = obj.pwm_hi_res_size;
                if (!bVar17) {
                    pcVar16 = obj.pwm_size;
                }
                uVar35 = *(*piVar31 + 200);
                pcVar2 = obj.clk_freq_hz_hi_res;
                uVar6 = 0x10;
                if (!bVar17) {
                    uVar6 = 0xc;
                    pcVar2 = obj.clk_freq_hz;
                }
                uVar27 = 0xffffffffffffffff;
                uVar32 = 8;
                if (!bVar17 || uVar35 != 0) {
                    uVar32 = 2;
                }
                aiStack_160[0x1c] = 0;
                aiStack_160[0x1d] = 0;
                aiStack_160[0x1a] = 0;
                aiStack_160[0x1b] = 0;
                aiStack_160[0x18] = 0;
                aiStack_160[0x19] = 0;
                aiStack_160[0x16] = 0;
                aiStack_160[0x17] = 0;
                aiStack_160[0x14] = 0;
                aiStack_160[0x15] = 0;
                aiStack_160[0x12] = 0;
                aiStack_160[0x13] = 0;
                aiStack_160[0x10] = 0;
                aiStack_160[0x11] = 0;
                aiStack_160[0xe] = 0;
                aiStack_160[0xf] = 0;
                aiStack_160[0xc] = 0;
                aiStack_160[0xd] = 0;
                aiStack_160[10] = 0;
                aiStack_160[0xb] = 0;
                aiStack_160[8] = 0;
                aiStack_160[9] = 0;
                aiStack_160[6] = 0;
                aiStack_160[7] = 0;
                aiStack_160[4] = 0;
                aiStack_160[5] = 0;
                uStack_190 = 0xffffffffffffffff;
                aiStack_160[2] = 0;
                aiStack_160[3] = 0;
                aiStack_160[0] = 0;
                aiStack_160[1] = 0;
                auStack_170[0] = 0;
                auStack_170[1] = 0;
                uStack_168 = 0;
                do {
                    if (uVar7 <= uVar35 * 4) goto code_r0x08005a18;
                    uVar50 = uVar35 * 0x20;
                    uVar38 = *(pcVar16 + uVar35 * 4);
                    puVar5 = auStack_170 + uVar35 * 8;
                    uVar33 = uVar35 << 5 | 4;
                    uVar24 = uVar35 << 5 | 8;
                    puVar47 = puVar5 | 4;
                    piVar46 = &uStack_168 + uVar35 * 4;
                    uVar43 = uVar44 >> (uVar38 & 0x3f);
                    uVar23 = uVar35 << 5 | 0xc;
                    puVar3 = &uStack_168 + uVar50 + 4;
                    uVar14 = uVar35 << 5 | 0x18;
                    piVar4 = aiStack_160 + uVar35 * 4 + 1;
                    iVar25 = iVar19;
                    do {
                        iVar36 = iVar25 + -1;
                        iVar49 = 0;
                        do {
                            if (iVar49 == 0x10) goto code_r0x08005c20;
                            if (uVar6 <= iVar36 * 4) goto code_r0x08005a18;
                            uVar39 = *(pcVar2 + iVar36 * 4);
                            uVar13 = 0;
                            if (uVar39 != 0) {
                                uVar13 = 1000000000 / uVar39;
                            }
                            uVar20 = uVar13;
                            iVar18 = *(obj.clk_prediv + iVar49);
                            iVar26 = iVar18;
                            uVar48 = uVar43 - uVar20 * iVar26;
                            uVar15 = -uVar48;
                            if (-1 < uVar48) {
                                uVar15 = uVar48;
                            }
                            if (uVar15 < uVar27) {
                                if (7 < uVar35) goto code_r0x08005c20;
                                if (((0x100 < uVar33) || (*puVar47 = uVar39, 0x100 < uVar24)) ||
                                   ((*piVar46 = iVar18, 0x100 < uVar23 ||
                                    ((*puVar3 = 0, 0xff < uVar50 || (*puVar5 = uVar38, 0x100 < uVar14))))))
                                goto code_r0x08005a18;
                                *piVar4 = uVar20 * iVar26;
                                uVar27 = uVar43 + iVar26 * uVar20 * -2;
                                uVar48 = -uVar27;
                                if (-1 < uVar27) {
                                    uVar48 = uVar27;
                                }
                                uVar27 = uVar15;
                                if (uVar48 < uVar15) {
                                    *puVar47 = uVar39;
                                    *piVar46 = iVar18;
                                    *puVar5 = uVar38;
                                    *puVar3 = 1;
code_r0x08005314:
                                    *piVar4 = iVar26 * uVar20 * 2;
                                    uVar27 = uVar48;
                                }
                            }
                            else {
                                uVar15 = uVar43 + iVar26 * uVar20 * -2;
                                uVar48 = -uVar15;
                                if (-1 < uVar15) {
                                    uVar48 = uVar15;
                                }
                                if (uVar48 < uVar27) {
                                    if (uVar35 < 8) {
                                        if ((((uVar33 < 0x101) && (*puVar47 = uVar39, uVar24 < 0x101)) &&
                                            (*piVar46 = iVar18, uVar23 < 0x101)) &&
                                           ((*puVar3 = 1, uVar50 < 0x100 && (*puVar5 = uVar38, uVar14 < 0x101))))
                                        goto code_r0x08005314;
                                        goto code_r0x08005a18;
                                    }
                                    goto code_r0x08005c20;
                                }
                            }
                            iVar26 = iVar26 * uVar20;
                            uVar48 = uVar43 + iVar26 * -4;
                            uVar15 = -uVar48;
                            if (-1 < uVar48) {
                                uVar15 = uVar48;
                            }
                            if (uVar15 < uVar27) {
                                if (7 < uVar35) goto code_r0x08005c20;
                                if (((0x100 < uVar33) || (*puVar47 = uVar39, 0x100 < uVar24)) ||
                                   ((*piVar46 = iVar18, 0x100 < uVar23 ||
                                    ((*puVar3 = 2, 0xff < uVar50 || (*puVar5 = uVar38, 0x100 < uVar14))))))
                                goto code_r0x08005a18;
                                uVar27 = uVar43 + iVar26 * -8;
                                *piVar4 = iVar26 * 4;
                                uVar48 = -uVar27;
                                if (-1 < uVar27) {
                                    uVar48 = uVar27;
                                }
                                uVar27 = uVar15;
                                if (uVar48 < uVar15) {
                                    *puVar47 = uVar39;
                                    *piVar46 = iVar18;
                                    *puVar5 = uVar38;
                                    *puVar3 = 3;
code_r0x08005408:
                                    *piVar4 = iVar26 * 8;
                                    uVar27 = uVar48;
                                }
                            }
                            else {
                                uVar15 = uVar43 + iVar26 * -8;
                                uVar48 = -uVar15;
                                if (-1 < uVar15) {
                                    uVar48 = uVar15;
                                }
                                if (uVar48 < uVar27) {
                                    if (uVar35 < 8) {
                                        if ((((uVar33 < 0x101) && (*puVar47 = uVar39, uVar24 < 0x101)) &&
                                            (*piVar46 = iVar18, uVar23 < 0x101)) &&
                                           ((*puVar3 = 3, uVar50 < 0x100 && (*puVar5 = uVar38, uVar14 < 0x101))))
                                        goto code_r0x08005408;
                                        goto code_r0x08005a18;
                                    }
                                    goto code_r0x08005c20;
                                }
                            }
                            uVar48 = uVar43 + iVar26 * -0x10;
                            uVar15 = -uVar48;
                            if (-1 < uVar48) {
                                uVar15 = uVar48;
                            }
                            if (uVar15 < uVar27) {
                                if (7 < uVar35) goto code_r0x08005c20;
                                if (((0x100 < uVar33) || (*puVar47 = uVar39, 0x100 < uVar24)) ||
                                   ((*piVar46 = iVar18, 0x100 < uVar23 ||
                                    ((*puVar3 = 4, 0xff < uVar50 || (*puVar5 = uVar38, 0x100 < uVar14))))))
                                goto code_r0x08005a18;
                                uVar27 = uVar43 + iVar26 * -0x20;
                                *piVar4 = iVar26 * 0x10;
                                uVar48 = -uVar27;
                                if (-1 < uVar27) {
                                    uVar48 = uVar27;
                                }
                                uVar27 = uVar15;
                                if (uVar48 < uVar15) {
                                    *puVar47 = uVar39;
                                    *piVar46 = iVar18;
                                    *puVar5 = uVar38;
                                    *puVar3 = 5;
code_r0x080054f8:
                                    *piVar4 = iVar26 * 0x20;
                                    uVar27 = uVar48;
                                }
                            }
                            else {
                                uVar15 = uVar43 + iVar26 * -0x20;
                                uVar48 = -uVar15;
                                if (-1 < uVar15) {
                                    uVar48 = uVar15;
                                }
                                if (uVar48 < uVar27) {
                                    if (uVar35 < 8) {
                                        if ((((uVar33 < 0x101) && (*puVar47 = uVar39, uVar24 < 0x101)) &&
                                            (*piVar46 = iVar18, uVar23 < 0x101)) &&
                                           ((*puVar3 = 5, uVar50 < 0x100 && (*puVar5 = uVar38, uVar14 < 0x101))))
                                        goto code_r0x080054f8;
                                        goto code_r0x08005a18;
                                    }
                                    goto code_r0x08005c20;
                                }
                            }
                            uVar48 = uVar43 + iVar26 * -0x40;
                            uVar15 = -uVar48;
                            if (-1 < uVar48) {
                                uVar15 = uVar48;
                            }
                            if (uVar15 < uVar27) {
                                if (7 < uVar35) goto code_r0x08005c20;
                                if (((0x100 < uVar33) || (*puVar47 = uVar39, 0x100 < uVar24)) ||
                                   ((*piVar46 = iVar18, 0x100 < uVar23 ||
                                    ((*puVar3 = 6, 0xff < uVar50 || (*puVar5 = uVar38, 0x100 < uVar14))))))
                                goto code_r0x08005a18;
                                uVar27 = uVar43 + iVar26 * -0x80;
                                *piVar4 = iVar26 * 0x40;
                                uVar48 = -uVar27;
                                if (-1 < uVar27) {
                                    uVar48 = uVar27;
                                }
                                uVar27 = uVar15;
                                if (uVar48 < uVar15) {
                                    *piVar46 = iVar18;
                                    *puVar47 = uVar39;
                                    *puVar5 = uVar38;
                                    *puVar3 = 7;
code_r0x080051ec:
                                    *piVar4 = iVar26 * 0x80;
                                    uVar27 = uVar48;
                                }
                            }
                            else {
                                uVar15 = uVar43 + iVar26 * -0x80;
                                uVar48 = -uVar15;
                                if (-1 < uVar15) {
                                    uVar48 = uVar15;
                                }
                                if (uVar48 < uVar27) {
                                    if (uVar35 < 8) {
                                        if ((((uVar33 < 0x101) && (*puVar47 = uVar39, uVar24 < 0x101)) &&
                                            (*piVar46 = iVar18, uVar23 < 0x101)) &&
                                           ((*puVar3 = 7, uVar50 < 0x100 && (*puVar5 = uVar38, uVar14 < 0x101))))
                                        goto code_r0x080051ec;
                                        goto code_r0x08005a18;
                                    }
                                    goto code_r0x08005c20;
                                }
                            }
                            iVar49 = iVar49 + 4;
                        } while (iVar19 * 4 - iVar49 != 0);
                        bVar17 = 1 < iVar25;
                        iVar25 = iVar36;
                    } while (bVar17);
                    if (uVar35 == 8) {
code_r0x08005c20:
    //WARNING: Does not return
                        pcVar16 = SoftwareBreakpoint(0x5512,0x8005c24);
                        (*pcVar16)();
                    }
                    if (0x100 < uVar14) goto code_r0x08005a18;
                    uVar33 = uVar27 << (uVar38 & 0x3f);
                    *piVar4 = *piVar4 * (1 << (uVar38 & 0x1f));
                    if (uVar33 < uStack_190) {
                        iVar49 = (&uStack_168)[uVar35 * 4];
                        iVar25 = aiStack_160[uVar35 * 4];
                        iVar36 = aiStack_160[uVar35 * 4 + 1];
                        *puVar1 = *(auStack_170 + uVar35 * 8);
                        piVar31[2] = iVar49;
                        piVar31[3] = iVar25;
                        piVar31[4] = iVar36;
                        uStack_190 = uVar33;
                    }
                    uVar35 = uVar35 + 1;
                } while (uVar35 != uVar32);
                uVar38 = *puVar1;
                iVar19 = uVar32 + 1;
                puVar5 = iVar45 + uVar42 * 0x70 + 0x14;
                do {
                    uVar35 = iVar19 - 2;
                    if (uVar7 <= uVar35 * 4) goto code_r0x08005a18;
                    uVar39 = *(pcVar16 + uVar35 * 4);
                    uVar13 = uVar39 - uVar38;
                    if (uVar39 < uVar38 || uVar13 == 0) break;
                    uVar10 = *puVar5;
                    if (uVar13 <= uVar10) {
                        *puVar1 = uVar39;
                        *puVar5 = uVar10 - uVar13;
                        uVar38 = uVar39;
                    }
                    iVar19 = iVar19 + -1;
                } while (2 < iVar19);
                if (*(iVar45 + uVar42 * 0x70 + 0x5c) != '\0') goto code_r0x08004f94;
                iVar19 = iVar45 + uVar42 * 0x70;
                iVar18 = sym.qpnp_lpg_set_lut_pattern(piVar29,*(iVar19 + 0x38),*(iVar19 + 0x40));
                if (-1 < iVar18) {
                    uVar41 = *puVar30;
                    *(iVar45 + uVar42 * 0x70 + 0x5e) = 1;
                    goto code_r0x08004f94;
                }
                iVar45 = iVar45 + uVar42 * 0x70;
                pcVar37 = "set LUT pattern failed for LPG%d, rc=%d\n";
                uVar21 = *(*piVar29 + 0x50);
code_r0x08005988:
                _dev_err(uVar21,pcVar37,*(iVar45 + 0x4c),iVar18);
                goto code_r0x08005ba4;
            }
        }
        else {
            uVar21 = puVar40[10];
            uVar44 = uVar38;
code_r0x08005b8c:
            _dev_err(uVar21,"hw index %d out of range [0-%d]\n",uVar44,uVar39 - 1);
        }
code_r0x08005b90:
        _dev_err(*puVar40,"lpg not found\n");
        iVar18 = -0x13;
        goto code_r0x08005ba4;
    }
code_r0x080058c0:
    if (*(param_3 + 0x14) == *(param_2 + 0x4c)) {
        iVar18 = 0;
        goto code_r0x08005ba4;
    }
    puVar40 = *(param_2 + 0x18);
    uVar38 = *(param_2 + 0x10);
    uVar44 = uVar38;
    uVar39 = *(puVar40 + 0x17);
    if (*(param_3 + 0x14) != '\0') {
        if (uVar39 <= uVar38) {
            uVar21 = puVar40[10];
            goto code_r0x08005b8c;
        }
        iVar45 = puVar40[0xb];
        piVar29 = iVar45 + uVar44 * 0x70;
        if (piVar29 == NULL) goto code_r0x08005b90;
        if (*(iVar45 + uVar44 * 0x70 + 0x5c) == '\x01') {
            mutex_lock(*piVar29 + 0x68);
            piVar46 = iVar45 + uVar44 * 0x70 + 0x50;
            iVar18 = regmap_write(*(*piVar29 + 0x48),*piVar46 + 0x47,1);
            if (-1 < iVar18) {
                mutex_unlock(*piVar29 + 0x68);
                goto code_r0x08005950;
            }
            _dev_err(*(*piVar29 + 0x50),"Write addr 0x%x with value 0x%x failed, rc=%d\n",*piVar46 + 0x47,1,iVar18);
            mutex_unlock(*piVar29 + 0x68);
            iVar45 = *piVar29;
            pcVar37 = "Write LPG_PWM_SYNC failed, rc=%d\n";
        }
        else {
code_r0x08005950:
            iVar18 = sym.qpnp_lpg_set_glitch_removal(piVar29,1);
            if (-1 < iVar18) {
                iVar18 = sym.qpnp_lpg_pwm_src_enable(piVar29,1);
                if (iVar18 < 0) {
                    uVar21 = *puVar40;
                    iVar45 = iVar45 + uVar44 * 0x70;
                    pcVar37 = "Enable PWM output failed for channel %d, rc=%d\n";
                    goto code_r0x08005988;
                }
                goto code_r0x080059cc;
            }
            iVar45 = *piVar29;
            pcVar37 = "Enable glitch-removal failed, rc=%d\n";
        }
        _dev_err(*(iVar45 + 0x50),pcVar37,iVar18);
        goto code_r0x08005ba4;
    }
    if (uVar39 <= uVar38) {
        _dev_err(puVar40[10],"hw index %d out of range [0-%d]\n",uVar38,uVar39 - 1);
code_r0x08005c3c:
        _dev_err(*puVar40,"lpg not found\n");
    }
    else {
        iVar45 = puVar40[0xb];
        piVar29 = iVar45 + uVar44 * 0x70;
        if (piVar29 == NULL) goto code_r0x08005c3c;
        iVar18 = sym.qpnp_lpg_pwm_src_enable(piVar29,0);
        if (iVar18 < 0) {
            _dev_err(*puVar40,"Disable PWM output failed for channel %d, rc=%d\n",*(iVar45 + uVar44 * 0x70 + 0x4c),
                     iVar18);
        }
        else {
            iVar18 = sym.qpnp_lpg_set_glitch_removal(piVar29,0);
            if (iVar18 < 0) {
                _dev_err(*(*piVar29 + 0x50),"Disable glitch-removal failed, rc=%d\n",iVar18);
            }
        }
    }
code_r0x080059cc:
    iVar18 = 0;
    *(param_2 + 0x4c) = *(param_3 + 0x14);
code_r0x08005ba4:
    iVar45 = sp_el0;
    if (*(iVar45 + 0x5e0) == aiStack_160[0x1e]) {
        return iVar18;
    }
    auVar51 = __stack_chk_fail();
    piVar29 = auVar51._0_8_;
    *extraout_x18 = sym.qpnp_lpg_set_glitch_removal;
    mutex_lock(*piVar29 + 0x68);
    uVar28 = 0x20;
    if ((auVar51._8_8_ & 1) == 0) {
        uVar28 = 0;
    }
    iVar18 = regmap_update_bits_base(*(*piVar29 + 0x48),piVar29[10] + 0x43,0x20,uVar28,0,0,0);
    if (iVar18 < 0) {
        _dev_err(*(*piVar29 + 0x50),"Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",piVar29[10] + 0x43,
                 uVar28,0x20,iVar18);
        mutex_unlock(*piVar29 + 0x68);
        _dev_err(*(*piVar29 + 0x50),"Write LPG_PWM_TYPE_CONFIG failed, rc=%d\n",iVar18);
    }
    else {
        mutex_unlock(*piVar29 + 0x68);
    }
    return iVar18;
}


// ===== sym.qpnp_lpg_pwm_get_output_types_supported.cfi_jt @ 0x08002150 (size 8) =====

uint sym.qpnp_lpg_pwm_get_output_types_supported.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    ulong *puVar2;
    int64_t *piVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        _printk(0x8000d62,"qpnp_lpg_pwm_get_output_types_supported");
    }
    else {
        puVar2 = *(param_1 + 0x18);
        uVar1 = *(param_1 + 0x10);
        if (uVar1 < *(puVar2 + 0x17)) {
            piVar3 = puVar2[0xb] + uVar1 * 0x70;
            if (piVar3 != NULL) {
                if (*(*piVar3 + 0x60) != 0) {
                    return 3;
                }
                return 1;
            }
        }
        else {
            _dev_err(puVar2[10],"hw index %d out of range [0-%d]\n",uVar1,*(puVar2 + 0x17) - 1);
            puVar2 = *(param_1 + 0x18);
        }
        _dev_err(*puVar2,"lpg not found\n");
    }
    return 0xffffffed;
}


// ===== sym.qpnp_lpg_pwm_set_output_type @ 0x08002158 (size 2816) =====

int64_t * sym.qpnp_lpg_pwm_set_output_type(int64_t arg1,uint32_t arg2)

{
    uint8_t uVar1;
    char cVar2;
    uint16_t uVar3;
    uint8_t uVar4;
    uint32_t *puVar5;
    bool bVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    int iVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    int64_t *piVar13;
    char *pcVar14;
    ulong uVar15;
    ulong in_x7;
    uint uVar16;
    ulong *puVar17;
    int64_t iVar18;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t unaff_x19;
    int64_t unaff_x20;
    int64_t *piVar19;
    uint64_t *unaff_x21;
    int64_t *piVar20;
    ulong uVar21;
    uint64_t unaff_x22;
    uint64_t uVar22;
    int64_t *piVar23;
    int64_t *piVar24;
    int64_t iVar25;
    uint32_t *unaff_x24;
    int64_t *piVar26;
    uint32_t uVar27;
    int64_t unaff_x25;
    int64_t *piVar28;
    uint32_t *unaff_x26;
    int64_t *piVar29;
    uint8_t *unaff_x27;
    uint32_t *unaff_x28;
    ulong unaff_x30;
    uchar auVar30 [16];
    uchar ***pppuVar31;
    code *pcVar32;
    int64_t *piVar33;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    uchar uStack_1a0;
    int64_t iStack_198;
    uchar **ppuStack_190;
    code *pcStack_188;
    uint32_t *puStack_180;
    uint8_t *puStack_178;
    uint32_t *puStack_170;
    int64_t iStack_168;
    int64_t *piStack_160;
    int64_t iStack_158;
    uint64_t uStack_150;
    int64_t *piStack_148;
    int64_t *piStack_140;
    int64_t *piStack_138;
    uchar auStack_12c [4];
    int64_t iStack_128;
    uchar *puStack_120;
    code *pcStack_118;
    uint32_t *puStack_110;
    uint8_t *puStack_108;
    uint32_t *puStack_100;
    int64_t iStack_f8;
    uint32_t *puStack_f0;
    int64_t *piStack_e8;
    uint64_t uStack_e0;
    uint64_t *puStack_d8;
    int64_t iStack_d0;
    uint64_t uStack_c8;
    uint8_t *puStack_c0;
    char *pcStack_b8;
    uint8_t *puStack_b0;
    uint32_t uStack_a8;
    uint uStack_a4;
    uint32_t *puStack_a0;
    uint32_t uStack_98;
    uint32_t uStack_94;
    uint32_t *puStack_90;
    uchar auStack_84 [4];
    char acStack_80 [4];
    char acStack_7c [4];
    char acStack_78 [4];
    uint8_t auStack_74 [4];
    uint8_t auStack_70 [4];
    char acStack_6c [4];
    int64_t iStack_68;
    
    uVar22 = arg2;
    *in_x18 = unaff_x30;
    iVar25 = sp_el0;
    iStack_68 = *(iVar25 + 0x5e0);
    if (arg1 == 0) {
        _printk(0x8000d62,"qpnp_lpg_pwm_set_output_type");
        piVar24 = 0xffffffed;
    }
    else {
        puVar17 = *(arg1 + 0x18);
        uVar8 = *(arg1 + 0x10);
        unaff_x19 = uVar8;
        unaff_x20 = arg1;
        if (uVar8 < *(puVar17 + 0x17)) {
            unaff_x25 = puVar17[0xb];
            unaff_x21 = unaff_x25 + unaff_x19 * 0x70;
            if (unaff_x21 != NULL) {
                if ((*(*unaff_x21 + 0x60) != 0) &&
                   (unaff_x26 = unaff_x25 + unaff_x19 * 0x70 + 0x48, unaff_x22 = uVar22, *unaff_x26 != arg2)) {
                    unaff_x28 = arg2 != 2;
                    unaff_x27 = unaff_x25 + unaff_x19 * 0x70 + 0x5c;
                    uVar8 = arg2 != 2;
                    if (*unaff_x27 != uVar8) {
                        unaff_x24 = *(arg1 + 0x4c);
                        uVar10 = *(arg1 + 0x4c);
                        if ((uVar10 == 0) || (uVar7 = sym.qpnp_lpg_pwm_src_enable(unaff_x21,0), -1 < uVar7)) {
                            if (arg2 != 2) {
code_r0x08002808:
                                *unaff_x27 = unaff_x28;
                                if (unaff_x24 != 0) {
                                    uVar8 = sym.qpnp_lpg_set_pwm_config(unaff_x21);
                                    if (uVar8 < 0) {
                                        puVar17 = *(arg1 + 0x18);
                                        piVar24 = uVar8;
                                        iVar25 = unaff_x25 + unaff_x19 * 0x70;
                                        pcVar14 = "Config PWM failed for channel %d, rc=%d\n";
                                        goto code_r0x08002c40;
                                    }
                                    uVar7 = sym.qpnp_lpg_pwm_src_enable(unaff_x21,1);
                                    if (uVar7 < 0) goto code_r0x08002838;
                                }
                                piVar24 = NULL;
                                *unaff_x26 = arg2;
                                goto code_r0x080021fc;
                            }
                            unaff_x24 = unaff_x25 + unaff_x19 * 0x70 + 0x5e;
                            uStack_94 = uVar10;
                            if (*unaff_x24 != 0) {
code_r0x08002294:
                                unaff_x28 = *unaff_x21;
                                uStack_98 = uVar8;
                                if (unaff_x28[0x32] == 0) {
                                    iVar25 = unaff_x25 + unaff_x19 * 0x70;
                                    uVar3 = *(iVar25 + 0x28);
                                    unaff_x24 = uVar3;
                                    mutex_lock(unaff_x28 + 0x1a);
                                    unaff_x28 = uVar3 & 0xff;
                                    puStack_90 = iVar25 + 0x50;
                                    uVar8 = regmap_write(*(*unaff_x21 + 0x48),*puStack_90 + 0x50,unaff_x28);
                                    if (uVar8 < 0) {
                                        piVar24 = uVar8;
                                        _dev_err(*(*unaff_x21 + 0x50),"Write addr 0x%x with value 0x%x failed, rc=%d\n"
                                                 ,*puStack_90 + 0x50,unaff_x28,piVar24);
                                        mutex_unlock(*unaff_x21 + 0x68);
                                        uVar22 = *unaff_x21;
                                        pcVar14 = "Write RAMP_STEP_DURATION_LSB failed, rc=%d\n";
                                    }
                                    else {
                                        mutex_unlock(*unaff_x21 + 0x68);
                                        unaff_x24 = uVar3 >> 8;
                                        mutex_lock(*unaff_x21 + 0x68);
                                        uVar8 = regmap_write(*(*unaff_x21 + 0x48),*puStack_90 + 0x51,unaff_x24);
                                        if (uVar8 < 0) {
                                            piVar24 = uVar8;
                                            _dev_err(*(*unaff_x21 + 0x50),
                                                     "Write addr 0x%x with value 0x%x failed, rc=%d\n",
                                                     *puStack_90 + 0x51,unaff_x24,piVar24);
                                            mutex_unlock(*unaff_x21 + 0x68);
                                            uVar22 = *unaff_x21;
                                            pcVar14 = "Write RAMP_STEP_DURATION_MSB failed, rc=%d\n";
                                        }
                                        else {
                                            mutex_unlock(*unaff_x21 + 0x68);
                                            unaff_x24 = *(unaff_x25 + unaff_x19 * 0x70 + 0x2c);
                                            mutex_lock(*unaff_x21 + 0x68);
                                            uVar8 = regmap_update_bits_base
                                                              (*(*unaff_x21 + 0x48),*puStack_90 + 0x56,0x3f,unaff_x24
                                                               ,0,0,0);
                                            if (uVar8 < 0) {
                                                piVar24 = uVar8;
                                                _dev_err(*(*unaff_x21 + 0x50),
                                                         "Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",
                                                         *puStack_90 + 0x56,unaff_x24,0x3f,piVar24);
                                                mutex_unlock(*unaff_x21 + 0x68);
                                                uVar22 = *unaff_x21;
                                                pcVar14 = "Write LPG_HI_IDX failed, rc=%d\n";
                                            }
                                            else {
                                                mutex_unlock(*unaff_x21 + 0x68);
                                                unaff_x24 = *(unaff_x25 + unaff_x19 * 0x70 + 0x2d);
                                                mutex_lock(*unaff_x21 + 0x68);
                                                uVar8 = regmap_update_bits_base
                                                                  (*(*unaff_x21 + 0x48),*puStack_90 + 0x57,0x3f,
                                                                   unaff_x24,0,0,0);
                                                if (uVar8 < 0) {
                                                    piVar24 = uVar8;
                                                    _dev_err(*(*unaff_x21 + 0x50),
                                                             
                                                            "Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n"
                                                            ,*puStack_90 + 0x57,unaff_x24,0x3f,piVar24);
                                                    mutex_unlock(*unaff_x21 + 0x68);
                                                    uVar22 = *unaff_x21;
                                                    pcVar14 = "Write LPG_LO_IDX failed, rc=%d\n";
                                                }
                                                else {
                                                    mutex_unlock(*unaff_x21 + 0x68);
                                                    unaff_x28 = unaff_x25 + unaff_x19 * 0x70 + 0x2a;
                                                    unaff_x24 = *unaff_x28;
                                                    mutex_lock(*unaff_x21 + 0x68);
                                                    uVar8 = regmap_write(*(*unaff_x21 + 0x48),*puStack_90 + 0x52,
                                                                         unaff_x24);
                                                    if (uVar8 < 0) {
                                                        piVar24 = uVar8;
                                                        _dev_err(*(*unaff_x21 + 0x50),
                                                                 "Write addr 0x%x with value 0x%x failed, rc=%d\n",
                                                                 *puStack_90 + 0x52,unaff_x24,piVar24);
                                                        mutex_unlock(*unaff_x21 + 0x68);
                                                        uVar22 = *unaff_x21;
                                                        pcVar14 = "Write LPG_PAUSE_HI_MULTIPLIER failed, rc=%d\n";
                                                    }
                                                    else {
                                                        mutex_unlock(*unaff_x21 + 0x68);
                                                        unaff_x24 = unaff_x25 + unaff_x19 * 0x70 + 0x2b;
                                                        uVar1 = *unaff_x24;
                                                        mutex_lock(*unaff_x21 + 0x68);
                                                        puStack_a0 = CONCAT44(puStack_a0._4_4_,uVar1);
                                                        uVar8 = regmap_write(*(*unaff_x21 + 0x48),*puStack_90 + 0x54,
                                                                             uVar1);
                                                        if (uVar8 < 0) {
                                                            piVar24 = uVar8;
                                                            _dev_err(*(*unaff_x21 + 0x50),
                                                                     "Write addr 0x%x with value 0x%x failed, rc=%d\n",
                                                                     *puStack_90 + 0x54,puStack_a0 & 0xffffffff,
                                                                     piVar24);
                                                            mutex_unlock(*unaff_x21 + 0x68);
                                                            uVar22 = *unaff_x21;
                                                            pcVar14 = "Write LPG_PAUSE_LO_MULTIPLIER failed, rc=%d\n";
                                                        }
                                                        else {
                                                            mutex_unlock(*unaff_x21 + 0x68);
                                                            iVar25 = unaff_x25 + unaff_x19 * 0x70;
                                                            uVar8 = *unaff_x24 != 0;
                                                            if (*unaff_x28 != 0) {
                                                                uVar8 = *unaff_x24 != 0 | 2;
                                                            }
                                                            if (*(iVar25 + 0x2e) != '\0') {
                                                                uVar8 = uVar8 | 0x10;
                                                            }
                                                            if (*(iVar25 + 0x2f) != '\0') {
                                                                uVar8 = uVar8 | 8;
                                                            }
                                                            if (*(iVar25 + 0x30) != '\0') {
                                                                uVar8 = uVar8 | 4;
                                                            }
                                                            mutex_lock(*unaff_x21 + 0x68);
                                                            unaff_x24 = uVar8;
                                                            uVar8 = regmap_update_bits_base
                                                                              (*(*unaff_x21 + 0x48),*puStack_90 + 0x40
                                                                               ,0x1f,unaff_x24,0,0,0);
                                                            if (-1 < uVar8) {
                                                                mutex_unlock(*unaff_x21 + 0x68);
code_r0x08002804:
                                                                unaff_x28 = uStack_98;
                                                                unaff_x24 = uStack_94;
                                                                goto code_r0x08002808;
                                                            }
                                                            piVar24 = uVar8;
                                                            _dev_err(*(*unaff_x21 + 0x50),
                                                                     
                                                            "Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n"
                                                            ,*puStack_90 + 0x40,unaff_x24,0x1f,piVar24);
                                                            mutex_unlock(*unaff_x21 + 0x68);
                                                            uVar22 = *unaff_x21;
                                                            pcVar14 = "Write LPG_PATTERN_CONFIG failed, rc=%d\n";
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                else {
                                    unaff_x24 = unaff_x28 + 0x1a;
                                    auStack_84[0] = 0;
                                    mutex_lock(unaff_x24);
                                    puStack_90 = unaff_x25 + unaff_x19 * 0x70 + 0x58;
                                    uVar8 = nvmem_device_write(*(unaff_x28 + 0x28),*puStack_90 + 6,1,auStack_84);
                                    if (uVar8 < 0) {
                                        piVar24 = uVar8;
                                        _dev_err(*(unaff_x28 + 0x14),"write SDAM add 0x%x failed, rc=%d\n",
                                                 *puStack_90 + 6,piVar24);
                                        mutex_unlock(unaff_x24);
                                        uVar22 = *unaff_x21;
                                        pcVar14 = "Write SDAM_PBS_SCRATCH_LUT_COUNTER_OFFSET failed, rc=%d\n";
                                    }
                                    else {
                                        mutex_unlock(unaff_x24);
                                        unaff_x28 = *unaff_x21;
                                        unaff_x24 = unaff_x28 + 0x1a;
                                        uVar8 = 0;
                                        if (*(*(unaff_x28 + 0x18) + 0x48) != 0) {
                                            uVar8 = (*(unaff_x25 + unaff_x19 * 0x70 + 0x28) * 1000) /
                                                    *(*(unaff_x28 + 0x18) + 0x48);
                                        }
                                        acStack_80[0] = uVar8 - ((uVar8 & 0xff) != 0);
                                        mutex_lock(unaff_x24);
                                        uVar8 = nvmem_device_write(*(unaff_x28 + 0x28),0x47,1,acStack_80);
                                        if (uVar8 < 0) {
                                            piVar24 = uVar8;
                                            _dev_err(*(unaff_x28 + 0x14),"write SDAM add 0x%x failed, rc=%d\n",0x47,
                                                     piVar24);
                                            mutex_unlock(unaff_x24);
                                            uVar22 = *unaff_x21;
                                            pcVar14 = "Write SDAM_REG_RAMP_STEP_DURATION failed, rc=%d\n";
                                        }
                                        else {
                                            mutex_unlock(unaff_x24);
                                            unaff_x28 = *unaff_x21;
                                            acStack_7c[0] = *(unaff_x25 + unaff_x19 * 0x70 + 0x2c);
                                            if (*(*(unaff_x28 + 0x18) + 0x38) == 2) {
                                                acStack_7c[0] = acStack_7c[0] + *(*(unaff_x28 + 0x18) + 0x3c) + -0x40;
                                            }
                                            unaff_x24 = unaff_x28 + 0x1a;
                                            mutex_lock(unaff_x24);
                                            uVar8 = nvmem_device_write(*(unaff_x28 + 0x28),*puStack_90 + 3,1,
                                                                       acStack_7c);
                                            if (uVar8 < 0) {
                                                piVar24 = uVar8;
                                                _dev_err(*(unaff_x28 + 0x14),"write SDAM add 0x%x failed, rc=%d\n",
                                                         *puStack_90 + 3,piVar24);
                                                mutex_unlock(unaff_x24);
                                                uVar22 = *unaff_x21;
                                                pcVar14 = "Write SDAM_REG_END_INDEX failed, rc=%d\n";
                                            }
                                            else {
                                                mutex_unlock(unaff_x24);
                                                unaff_x28 = *unaff_x21;
                                                acStack_78[0] = *(unaff_x25 + unaff_x19 * 0x70 + 0x2d);
                                                if (*(*(unaff_x28 + 0x18) + 0x38) == 2) {
                                                    acStack_78[0] =
                                                         acStack_78[0] + *(*(unaff_x28 + 0x18) + 0x3c) + -0x40;
                                                }
                                                unaff_x24 = unaff_x28 + 0x1a;
                                                mutex_lock(unaff_x24);
                                                uVar8 = nvmem_device_write(*(unaff_x28 + 0x28),*puStack_90 + 4,1,
                                                                           acStack_78);
                                                if (uVar8 < 0) {
                                                    piVar24 = uVar8;
                                                    _dev_err(*(unaff_x28 + 0x14),"write SDAM add 0x%x failed, rc=%d\n"
                                                             ,*puStack_90 + 4,piVar24);
                                                    mutex_unlock(unaff_x24);
                                                    uVar22 = *unaff_x21;
                                                    pcVar14 = "Write SDAM_REG_START_INDEX failed, rc=%d\n";
                                                }
                                                else {
                                                    puStack_c0 = unaff_x27;
                                                    mutex_unlock(unaff_x24);
                                                    unaff_x24 = *unaff_x21;
                                                    iVar25 = unaff_x25 + unaff_x19 * 0x70;
                                                    puStack_a0 = unaff_x24 + 0x1a;
                                                    pcStack_b8 = iVar25 + 0x2b;
                                                    puStack_b0 = iVar25 + 0x2a;
                                                    uVar1 = *puStack_b0;
                                                    unaff_x28 = uVar1;
                                                    auStack_74[0] = 0;
                                                    uStack_a4 = 8;
                                                    if (uVar1 != 0) {
                                                        uStack_a4 = 10;
                                                    }
                                                    bVar6 = *pcStack_b8 != '\0';
                                                    unaff_x27 = bVar6;
                                                    uStack_a8 = *(iVar25 + 0x2f);
                                                    mutex_lock();
                                                    uVar8 = nvmem_device_read(*(unaff_x24 + 0x28),*puStack_90 + 1,1,
                                                                              auStack_74);
                                                    puVar5 = puStack_90;
                                                    if (uVar8 < 0) {
                                                        uVar21 = *(unaff_x24 + 0x14);
                                                        pcVar14 = "Read SDAM addr %d failed, rc=%d\n";
                                                        uVar10 = *puStack_90;
                                                    }
                                                    else {
                                                        uVar4 = uStack_a8 << 3;
                                                        if (uVar1 != 0) {
                                                            uVar4 = uVar4 | 2;
                                                        }
                                                        uVar1 = uStack_a4 | bVar6;
                                                        auStack_74[0] =
                                                             auStack_74[0] & (uVar1 ^ 0xff) | (uVar4 | bVar6) & uVar1;
                                                        uVar8 = nvmem_device_write(*(unaff_x24 + 0x28),*puStack_90 + 1
                                                                                   ,1,auStack_74);
                                                        unaff_x28 = puVar5;
                                                        if (-1 < uVar8) {
                                                            mutex_unlock(puStack_a0);
                                                            unaff_x27 = *unaff_x21;
                                                            unaff_x24 = unaff_x27 + 0x68;
                                                            auStack_70[0] = *puStack_b0;
                                                            mutex_lock(unaff_x24);
                                                            uVar8 = nvmem_device_write(*(unaff_x27 + 0xa0),*puVar5 + 8
                                                                                       ,1,auStack_70);
                                                            if (uVar8 < 0) {
                                                                piVar24 = uVar8;
                                                                _dev_err(*(unaff_x27 + 0x50),
                                                                         "write SDAM add 0x%x failed, rc=%d\n",
                                                                         *puVar5 + 8,piVar24);
                                                                mutex_unlock(unaff_x24);
                                                                uVar22 = *unaff_x21;
                                                                pcVar14 = 
                                                            "Write SDAM_REG_PAUSE_START_MULTIPLIER failed, rc=%d\n";
                                                            }
                                                            else {
                                                                mutex_unlock(unaff_x24);
                                                                unaff_x27 = *unaff_x21;
                                                                unaff_x24 = unaff_x27 + 0x68;
                                                                acStack_6c[0] = *pcStack_b8;
                                                                mutex_lock(unaff_x24);
                                                                uVar8 = nvmem_device_write(*(unaff_x27 + 0xa0),
                                                                                           *puVar5 + 9,1,acStack_6c);
                                                                if (-1 < uVar8) {
                                                                    mutex_unlock(unaff_x24);
                                                                    unaff_x27 = puStack_c0;
                                                                    goto code_r0x08002804;
                                                                }
                                                                piVar24 = uVar8;
                                                                _dev_err(*(unaff_x27 + 0x50),
                                                                         "write SDAM add 0x%x failed, rc=%d\n",
                                                                         *puVar5 + 9,piVar24);
                                                                mutex_unlock(unaff_x24);
                                                                uVar22 = *unaff_x21;
                                                                pcVar14 = 
                                                            "Write SDAM_REG_PAUSE_END_MULTIPLIER failed, rc=%d\n";
                                                            }
                                                            goto code_r0x08002c20;
                                                        }
                                                        uVar10 = *puVar5;
                                                        uVar21 = *(unaff_x24 + 0x14);
                                                        pcVar14 = "write SDAM addr %d failed, rc=%d\n";
                                                    }
                                                    piVar24 = uVar8;
                                                    _dev_err(uVar21,pcVar14,uVar10 + 1,piVar24);
                                                    mutex_unlock(puStack_a0);
                                                    uVar22 = *unaff_x21;
                                                    pcVar14 = "Write SDAM_REG_PATTERN_CONFIG failed, rc=%d\n";
                                                }
                                            }
                                        }
                                    }
                                }
code_r0x08002c20:
                                _dev_err(*(uVar22 + 0x50),pcVar14,piVar24);
                                puVar17 = *(arg1 + 0x18);
                                iVar25 = unaff_x25 + unaff_x19 * 0x70;
                                pcVar14 = "Config LPG%d ramping failed, rc=%d\n";
                                goto code_r0x08002c40;
                            }
                            iVar25 = unaff_x25 + unaff_x19 * 0x70;
                            uVar10 = sym.qpnp_lpg_set_lut_pattern(unaff_x21,*(iVar25 + 0x38),*(iVar25 + 0x40));
                            if (-1 < uVar10) {
                                *unaff_x24 = 1;
                                goto code_r0x08002294;
                            }
                            piVar24 = uVar10;
                            iVar25 = unaff_x25 + unaff_x19 * 0x70;
                            pcVar14 = "set LUT pattern failed for LPG%d, rc=%d\n";
                            uVar21 = *(*unaff_x21 + 0x50);
                        }
                        else {
code_r0x08002838:
                            puVar17 = *(arg1 + 0x18);
                            piVar24 = uVar7;
                            iVar25 = unaff_x25 + unaff_x19 * 0x70;
                            pcVar14 = "Enable PWM output failed for channel %d, rc=%d\n";
code_r0x08002c40:
                            uVar21 = *puVar17;
                        }
                        _dev_err(uVar21,pcVar14,*(iVar25 + 0x4c),piVar24);
                        goto code_r0x080021fc;
                    }
                }
                piVar24 = NULL;
                goto code_r0x080021fc;
            }
        }
        else {
            _dev_err(puVar17[10],"hw index %d out of range [0-%d]\n",uVar8,*(puVar17 + 0x17) - 1);
            puVar17 = *(arg1 + 0x18);
        }
        _dev_err(*puVar17,"lpg not found\n");
        piVar24 = 0xffffffed;
    }
code_r0x080021fc:
    iVar25 = sp_el0;
    if (*(iVar25 + 0x5e0) == iStack_68) {
        return piVar24;
    }
    auVar30 = __stack_chk_fail();
    piVar13 = auVar30._0_8_;
    *extraout_x18 = sym.qpnp_lpg_pwm_src_enable;
    pcStack_118 = sym.qpnp_lpg_pwm_src_enable;
    iVar25 = sp_el0;
    piVar20 = auVar30._8_8_ & 0xffffffff;
    iStack_128 = *(iVar25 + 0x5e0);
    iVar25 = *piVar13;
    uVar8 = *(piVar13 + 0x5c) << 2;
    uVar10 = uVar8;
    if ((*(piVar13 + 0x5c) == 0) && (uVar10 = 2, *(iVar25 + 200) != '\0')) {
        uVar10 = uVar8;
    }
    piVar26 = *(iVar25 + 0x60);
    uVar8 = uVar10 | 0x80;
    if ((auVar30._8_8_ & 1) == 0) {
        uVar8 = uVar10;
    }
    puStack_120 = &stack0xffffffffffffffa0;
    puStack_110 = unaff_x28;
    puStack_108 = unaff_x27;
    puStack_100 = unaff_x26;
    iStack_f8 = unaff_x25;
    puStack_f0 = unaff_x24;
    piStack_e8 = piVar24;
    uStack_e0 = unaff_x22;
    puStack_d8 = unaff_x21;
    iStack_d0 = unaff_x20;
    uStack_c8 = unaff_x19;
    mutex_lock(iVar25 + 0x68);
    uVar22 = uVar8 & 0xff;
    piVar24 = 0x86;
    uVar8 = regmap_update_bits_base(*(*piVar13 + 0x48),piVar13[10] + 0x46,0x86,uVar22,0,0,0);
    piVar19 = uVar8;
    if (uVar8 < 0) {
        _dev_err(*(*piVar13 + 0x50),"Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",piVar13[10] + 0x46,
                 uVar22,0x86,piVar19);
        mutex_unlock(*piVar13 + 0x68);
        uVar21 = *(iVar25 + 0x50);
        pcVar14 = "Write LPG_ENABLE_CONTROL failed, rc=%d\n";
code_r0x08002f08:
        piVar24 = piVar19;
        _dev_err(uVar21,pcVar14);
    }
    else {
        mutex_unlock(*piVar13 + 0x68);
        uVar8 = *(piVar13 + 0x5c) == '\0' & auVar30._8_4_;
        uVar22 = uVar8;
        if (*(iVar25 + 200) == '\0') {
            if (uVar8 != 0) {
                uVar8 = *(iVar25 + 0xb8);
                uVar10 = 1 << (*(piVar13 + 0x4c) & 0x1f);
                if (uVar8 != 0) {
                    uVar22 = 0;
                    unaff_x25 = 0x70;
                    do {
                        if (*(iVar25 + 0x98) == 0) break;
                        iVar9 = *(*(iVar25 + 0x98) + uVar22 * 4);
                        if (iVar9 == 0) break;
                        if (piVar13[9] == 2) {
                            uVar7 = iVar9 - 1;
                            unaff_x27 = uVar7;
                            if (*(*(iVar25 + 0x38) + unaff_x27 * 0x70 + 0x4c) != '\0') {
                                unaff_x26 = *(iVar25 + 0x58) + unaff_x27 * 0x70;
                                mutex_lock(*unaff_x26 + 0x68);
                                unaff_x28 = unaff_x26 + 0x14;
                                iVar9 = regmap_update_bits_base
                                                  (*(*unaff_x26 + 0x48),*unaff_x28 + 0x46,0x80,0,0,0,0);
                                if (iVar9 < 0) {
                                    uVar8 = *unaff_x28;
                                    uVar21 = *(*unaff_x26 + 0x50);
                                    uVar15 = 0;
                                }
                                else {
                                    mutex_unlock(*unaff_x26 + 0x68);
                                    unaff_x26 = *(iVar25 + 0x58) + unaff_x27 * 0x70;
                                    mutex_lock(*unaff_x26 + 0x68);
                                    unaff_x28 = unaff_x26 + 0x14;
                                    iVar9 = regmap_update_bits_base
                                                      (*(*unaff_x26 + 0x48),*unaff_x28 + 0x46,0x80,0x80,0,0,0);
                                    if (-1 < iVar9) {
                                        mutex_unlock(*unaff_x26 + 0x68);
                                        uVar10 = uVar10 | 1 << (uVar7 & 0x1f);
                                        uVar8 = *(iVar25 + 0xb8);
                                        goto code_r0x08002da4;
                                    }
                                    uVar8 = *unaff_x28;
                                    uVar21 = *(*unaff_x26 + 0x50);
                                    uVar15 = 0x80;
                                }
                                _dev_err(uVar21,"Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",
                                         uVar8 + 0x46,uVar15,0x80,iVar9);
                                mutex_unlock(*unaff_x26 + 0x68);
                                break;
                            }
                        }
code_r0x08002da4:
                        uVar7 = uVar22 + 1;
                        uVar22 = uVar7;
                    } while (uVar7 < uVar8);
                }
                piVar13 = piVar26 + 1;
                mutex_lock(piVar13);
                mutex_lock(*piVar26 + 0x68);
                piVar20 = uVar10 & 0xff;
                piVar24 = piVar20;
                uVar8 = regmap_write(*(*piVar26 + 0x48),*(piVar26 + 0x3c) + 200);
                piVar19 = uVar8;
                if (uVar8 < 0) {
                    _dev_err(*(*piVar26 + 0x50),"Write addr 0x%x with value %d failed, rc=%d\n",
                             *(piVar26 + 0x3c) + 200,piVar20,piVar19);
                    mutex_unlock(*piVar26 + 0x68);
                    piVar24 = piVar19;
                    _dev_err(*(iVar25 + 0x50),"Write LPG_LUT_RAMP_CONTROL failed, rc=%d\n");
                }
                else {
                    mutex_unlock(*piVar26 + 0x68);
                }
                mutex_unlock(piVar13);
            }
        }
        else {
            piVar26 = *piVar13;
            auStack_12c[0] = uVar8;
            piVar20 = piVar26 + 0xd;
            mutex_lock(piVar20);
            piVar24 = 0x1;
            uVar8 = nvmem_device_write(piVar26[0x14],piVar13[0xb],1,auStack_12c);
            if (uVar8 < 0) {
                piVar19 = uVar8;
                _dev_err(piVar26[10],"write SDAM add 0x%x failed, rc=%d\n",piVar13[0xb],piVar19);
                mutex_unlock(piVar20);
                uVar21 = *(iVar25 + 0x50);
                pcVar14 = "Write SDAM_REG_LUT_EN failed, rc=%d\n";
                goto code_r0x08002f08;
            }
            mutex_unlock(piVar20);
            sym.qpnp_lpg_pbs_trigger_enable(piVar13);
            piVar19 = NULL;
        }
    }
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_128) {
        return piVar19;
    }
    auVar30 = __stack_chk_fail();
    piVar23 = auVar30._8_8_;
    piVar33 = auVar30._0_8_;
    *extraout_x18_00 = sym.qpnp_lpg_set_lut_pattern;
    pcStack_188 = sym.qpnp_lpg_set_lut_pattern;
    pppuVar31 = &ppuStack_190;
    iVar18 = sp_el0;
    piVar28 = piVar24 & 0xffffffff;
    iStack_198 = *(iVar18 + 0x5e0);
    iVar18 = *piVar33;
    piVar29 = *(iVar18 + 0x60);
    uVar8 = piVar24;
    ppuStack_190 = &puStack_120;
    puStack_180 = unaff_x28;
    puStack_178 = unaff_x27;
    puStack_170 = unaff_x26;
    iStack_168 = unaff_x25;
    piStack_160 = piVar26;
    iStack_158 = iVar25;
    uStack_150 = uVar22;
    piStack_148 = piVar20;
    piStack_140 = piVar19;
    piStack_138 = piVar13;
    if (*(iVar18 + 200) == '\0') {
        if (*(piVar33 + 0x54) < uVar8) goto code_r0x080032a4;
        mutex_lock();
        if (uVar8 == 0) {
            piVar24 = NULL;
        }
        else {
            piVar26 = NULL;
            uVar10 = *(piVar33 + 0x2d) * 2 + 0x42;
            do {
                if (piVar26 == 0x41) goto code_r0x080033c8;
                uVar12 = 1 << (*(piVar33 + 1) & 0x1f);
                uVar7 = uVar12 & 0xffff;
                uVar11 = (uVar7 * *(piVar23 + piVar26 * 4)) / 100;
                uVar27 = uVar11 & 0xffff;
                if (uVar7 < uVar27) {
                    _dev_err(*(*piVar33 + 0x50),"PWM value %d exceed the max %d\n");
                    piVar24 = 0xffffffea;
                    goto code_r0x08003260;
                }
                uVar12 = uVar12 - 1;
                if (uVar27 != uVar7) {
                    uVar12 = uVar11;
                }
                piVar20 = uVar12;
                mutex_lock(*piVar29 + 0x68);
                uVar7 = uVar10 & 0xff;
                piVar19 = uVar7;
                uVar27 = uVar12 & 0xff;
                uVar11 = regmap_write(*(*piVar29 + 0x48),*(piVar29 + 0x3c) + uVar7,uVar27);
                if (uVar11 < 0) {
                    piVar24 = uVar11;
                    _dev_err(*(*piVar29 + 0x50),"Write addr 0x%x with value %d failed, rc=%d\n",
                             *(piVar29 + 0x3c) + uVar7,uVar27,piVar24);
                    mutex_unlock(*piVar29 + 0x68);
                    iVar25 = *piVar33;
                    pcVar14 = "Write NO.%d LUT pattern LSB (%d) failed, rc=%d\n";
code_r0x08003394:
                    _dev_err(*(iVar25 + 0x50),pcVar14,piVar26 & 0xffffffff,uVar27,piVar24);
                    goto code_r0x08003260;
                }
                uVar27 = uVar12 >> 8 & 0xff;
                mutex_unlock(*piVar29 + 0x68);
                piVar19 = uVar10 | 1;
                mutex_lock(*piVar29 + 0x68);
                uVar7 = uVar10 & 0xff | 1;
                piVar20 = uVar7;
                uVar12 = regmap_update_bits_base(*(*piVar29 + 0x48),*(piVar29 + 0x3c) + uVar7,1,uVar27,0,0,0);
                piVar24 = uVar12;
                if (uVar12 < 0) {
                    _dev_err(*(*piVar29 + 0x50),"Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",
                             *(piVar29 + 0x3c) + uVar7,uVar27,1,piVar24);
                    mutex_unlock(*piVar29 + 0x68);
                    iVar25 = *piVar33;
                    pcVar14 = "Write NO.%d LUT pattern MSB (%d) failed, rc=%d\n";
                    goto code_r0x08003394;
                }
                mutex_unlock(*piVar29 + 0x68);
                uVar10 = uVar10 + 2;
                piVar26 = piVar26 + 1;
            } while (piVar28 != piVar26);
        }
        *(piVar33 + 8) = uVar8;
code_r0x08003260:
        mutex_unlock(piVar29 + 1);
    }
    else {
        uStack_1a0 = 0;
        uStack_1b0 = 0;
        uStack_1a8 = 0;
        uStack_1c0 = 0;
        uStack_1b8 = 0;
        uStack_1d0 = 0;
        uStack_1c8 = 0;
        uStack_1e0 = 0;
        uStack_1d8 = 0;
        if (uVar8 <= *(piVar33 + 0x54)) {
            piVar20 = piVar29 + 1;
            mutex_lock(piVar20);
            uVar1 = *(piVar33 + 0x2d);
            piVar19 = uVar1;
            if (uVar8 != 0) {
                piVar24 = NULL;
                do {
                    if (piVar24 == 0x41) {
code_r0x080033c8:
    //WARNING: Does not return
                        pcVar32 = SoftwareBreakpoint(0x5512,0x80033cc);
                        (*pcVar32)();
                    }
                    *(&uStack_1e0 + piVar24) = (*(piVar23 + piVar24 * 4) * 0xff) / 100;
                    piVar24 = piVar24 + 1;
                } while (piVar28 != piVar24);
            }
            if (uVar1 < 0x40) {
                piVar26 = *piVar29;
                piVar23 = piVar26 + 0xd;
                mutex_lock(piVar23);
                uVar10 = nvmem_device_write(piVar26[0x15],*(piVar29 + 0x3c) + uVar1,piVar28,&uStack_1e0);
                if (-1 < uVar10) {
                    mutex_unlock(piVar23);
                    piVar24 = NULL;
                    *(piVar33 + 8) = uVar8;
                    goto code_r0x08003260;
                }
                piVar24 = uVar10;
                _dev_err(piVar26[10],"write SDAM addr %d failed, rc=%d\n",*(piVar29 + 0x3c) + uVar1,piVar24);
                mutex_unlock(piVar23);
            }
            else {
                piVar24 = 0xffffffea;
            }
            _dev_err(*(*piVar33 + 0x50),"Write pattern in SDAM failed, rc=%d\n",piVar24);
            goto code_r0x08003260;
        }
code_r0x080032a4:
        _dev_err(*(iVar18 + 0x50),"new pattern length (%d) larger than predefined (%d)\n",piVar28);
        piVar24 = 0xffffffea;
    }
    iVar25 = sp_el0;
    if (*(iVar25 + 0x5e0) == iStack_198) {
        return piVar24;
    }
    piVar13 = __stack_chk_fail();
    *extraout_x18_01 = sym.qpnp_lpg_set_pwm_config;
    pcVar32 = sym.qpnp_lpg_set_pwm_config;
    cVar2 = *(piVar13 + 0x5d);
    iVar9 = piVar13[1];
    if (cVar2 == '\f') {
        uVar8 = iVar9 - 8;
        iVar9 = *(piVar13 + 0xc);
        uVar10 = 0xffffffea;
        if (7 < uVar8) {
            uVar8 = 0xffffffea;
        }
        if (19199999 < iVar9) {
            if (iVar9 != 19200000) {
                if (iVar9 == 76800000) {
                    uVar10 = 3;
                }
                goto code_r0x080034c4;
            }
code_r0x080034b8:
            uVar10 = 2;
            goto code_r0x080034c4;
        }
        if (iVar9 != 0x400) {
            if (iVar9 != 0x8000) goto code_r0x080034c4;
code_r0x080034a8:
            uVar10 = 1;
            goto code_r0x080034c4;
        }
    }
    else {
        if (iVar9 == 6) {
            uVar8 = 0;
        }
        else if (iVar9 == 9) {
            uVar8 = 1;
        }
        else {
            uVar8 = 0xffffffea;
        }
        iVar9 = *(piVar13 + 0xc);
        if (iVar9 != 0x400) {
            if (iVar9 != 19200000) {
                if (iVar9 != 0x8000) {
                    uVar10 = 0xffffffea;
                    goto code_r0x080034c4;
                }
                goto code_r0x080034a8;
            }
            goto code_r0x080034b8;
        }
    }
    uVar10 = 0;
code_r0x080034c4:
    piVar28 = 0xffffffea;
    uVar7 = 0xffffffea;
    uVar27 = piVar13[2] - 1;
    if (uVar27 < 6) {
        if ((0x35U >> (uVar27 & 0x1f) & 1) == 0) {
            uVar7 = 0xffffffea;
        }
        else {
            uVar7 = *(uVar27 * 4 + 0x80013c4);
        }
    }
    uVar27 = *(piVar13 + 0x14);
    if (7 < uVar27) {
        uVar27 = 0xffffffea;
    }
    if (-1 < (uVar10 | uVar8 | uVar7 | uVar27)) {
        if (cVar2 == '\v') {
            iVar25 = 2;
            uVar21 = 7;
        }
        else if (cVar2 == '\f') {
            iVar25 = 4;
            uVar21 = 0x77;
        }
        else {
            iVar25 = 4;
            uVar21 = 0x13;
        }
        mutex_lock(*piVar13 + 0x68);
        uVar8 = (uVar8 << iVar25 | uVar10 + 1) & 0xff;
        uVar10 = regmap_update_bits_base
                           (*(*piVar13 + 0x48),piVar13[10] + 0x41,uVar21,uVar8,0,0,0,in_x7,pppuVar31,pcVar32,
                            piVar26,piVar24,piVar23,piVar20,piVar19,piVar33);
        if (uVar10 < 0) {
            piVar28 = uVar10;
            _dev_err(*(*piVar13 + 0x50),"Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",
                     piVar13[10] + 0x41,uVar8,uVar21,piVar28);
            mutex_unlock(*piVar13 + 0x68);
            iVar25 = *piVar13;
            pcVar14 = "Write LPG_PWM_SIZE_CLK failed, rc=%d\n";
        }
        else {
            mutex_unlock(*piVar13 + 0x68);
            mutex_lock(*piVar13 + 0x68);
            uVar8 = (uVar27 | uVar7 << 5) & 0xff;
            uVar10 = regmap_update_bits_base
                               (*(*piVar13 + 0x48),piVar13[10] + 0x42,0x67,uVar8,0,0,0,in_x7,pppuVar31,pcVar32
                                ,piVar26,piVar24,piVar23,piVar20,piVar19,piVar33);
            if (uVar10 < 0) {
                piVar28 = uVar10;
                _dev_err(*(*piVar13 + 0x50),"Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",
                         piVar13[10] + 0x42,uVar8,0x67,piVar28);
                mutex_unlock(*piVar13 + 0x68);
                iVar25 = *piVar13;
                pcVar14 = "Write LPG_PWM_FREQ_PREDIV_CLK failed, rc=%d\n";
            }
            else {
                mutex_unlock(*piVar13 + 0x68);
                if (*(piVar13 + 0x5c) == '\0') {
                    return NULL;
                }
                uVar3 = *(piVar13 + 3);
                uVar16 = 0xff;
                if (*(piVar13 + 0x5d) != '\f') {
                    uVar16 = 1;
                }
                mutex_lock(0xff,*piVar13 + 0x68);
                uVar8 = regmap_update_bits_base(*(*piVar13 + 0x48),piVar13[10] + 0x45,uVar16,uVar3 >> 8,0,0,0);
                if (uVar8 < 0) {
                    piVar28 = uVar8;
                    _dev_err(*(*piVar13 + 0x50),"Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",
                             piVar13[10] + 0x45,uVar3 >> 8,uVar16,piVar28);
                    mutex_unlock(*piVar13 + 0x68);
                    iVar25 = *piVar13;
                    pcVar14 = "Write LPG_PWM_VALUE_MSB failed, rc=%d\n";
                }
                else {
                    mutex_unlock(*piVar13 + 0x68);
                    iVar25 = piVar13[3];
                    mutex_lock(*piVar13 + 0x68);
                    uVar8 = regmap_write(*(*piVar13 + 0x48),piVar13[10] + 0x44,iVar25);
                    if (uVar8 < 0) {
                        piVar28 = uVar8;
                        _dev_err(*(*piVar13 + 0x50),"Write addr 0x%x with value 0x%x failed, rc=%d\n",
                                 piVar13[10] + 0x44,iVar25,piVar28);
                        mutex_unlock(*piVar13 + 0x68);
                        iVar25 = *piVar13;
                        pcVar14 = "Write LPG_PWM_VALUE_LSB failed, rc=%d\n";
                    }
                    else {
                        mutex_unlock(*piVar13 + 0x68);
                        mutex_lock(*piVar13 + 0x68);
                        uVar8 = regmap_write(*(*piVar13 + 0x48),piVar13[10] + 0x47,1);
                        piVar28 = uVar8;
                        if (-1 < uVar8) {
                            mutex_unlock(*piVar13 + 0x68);
                            return piVar28;
                        }
                        _dev_err(*(*piVar13 + 0x50),"Write addr 0x%x with value 0x%x failed, rc=%d\n",
                                 piVar13[10] + 0x47,1,piVar28);
                        mutex_unlock(*piVar13 + 0x68);
                        iVar25 = *piVar13;
                        pcVar14 = "Write LPG_PWM_SYNC failed, rc=%d\n";
                    }
                }
            }
        }
        _dev_err(*(iVar25 + 0x50),pcVar14,piVar28);
    }
    return piVar28;
}


// ===== sym.qpnp_lpg_pwm_src_enable @ 0x08002c58 (size 964) =====

int64_t * sym.qpnp_lpg_pwm_src_enable(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    char cVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    char *pcVar9;
    int64_t *piVar10;
    ulong uVar11;
    ulong in_x7;
    uint uVar12;
    int64_t iVar13;
    int iVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t *piVar15;
    int64_t *piVar16;
    ulong uVar17;
    uint64_t uVar18;
    int64_t *piVar19;
    uint32_t uVar20;
    int64_t iVar21;
    int64_t *piVar22;
    uint32_t uVar23;
    ulong unaff_x25;
    int64_t *piVar24;
    int64_t *unaff_x26;
    int64_t *piVar25;
    int64_t unaff_x27;
    int64_t *unaff_x28;
    ulong unaff_x30;
    uchar auVar26 [16];
    uchar **ppuVar27;
    code *pcVar28;
    int64_t *piVar29;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    uchar uStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    int64_t *piStack_c0;
    int64_t iStack_b8;
    int64_t *piStack_b0;
    ulong uStack_a8;
    int64_t *piStack_a0;
    int64_t iStack_98;
    uint64_t uStack_90;
    int64_t *piStack_88;
    int64_t *piStack_80;
    int64_t *piStack_78;
    uchar auStack_6c [4];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar21 = sp_el0;
    piVar16 = arg2 & 0xffffffff;
    iStack_68 = *(iVar21 + 0x5e0);
    iVar21 = *arg1;
    uVar4 = *(arg1 + 0x5c) << 2;
    uVar6 = uVar4;
    if ((*(arg1 + 0x5c) == 0) && (uVar6 = 2, *(iVar21 + 200) != '\0')) {
        uVar6 = uVar4;
    }
    piVar22 = *(iVar21 + 0x60);
    uVar4 = uVar6 | 0x80;
    if ((arg2 & 1U) == 0) {
        uVar4 = uVar6;
    }
    mutex_lock(iVar21 + 0x68);
    uVar18 = uVar4 & 0xff;
    piVar10 = 0x86;
    uVar4 = regmap_update_bits_base(*(*arg1 + 0x48),*(arg1 + 0x50) + 0x46,0x86,uVar18,0,0,0);
    piVar15 = uVar4;
    if (uVar4 < 0) {
        _dev_err(*(*arg1 + 0x50),"Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",*(arg1 + 0x50) + 0x46,
                 uVar18,0x86,piVar15);
        mutex_unlock(*arg1 + 0x68);
        uVar17 = *(iVar21 + 0x50);
        pcVar9 = "Write LPG_ENABLE_CONTROL failed, rc=%d\n";
code_r0x08002f08:
        piVar10 = piVar15;
        _dev_err(uVar17,pcVar9);
    }
    else {
        mutex_unlock(*arg1 + 0x68);
        uVar4 = *(arg1 + 0x5c) == '\0' & arg2;
        uVar18 = uVar4;
        if (*(iVar21 + 200) == '\0') {
            if (uVar4 != 0) {
                uVar4 = *(iVar21 + 0xb8);
                uVar6 = 1 << (*(arg1 + 0x4c) & 0x1f);
                if (uVar4 != 0) {
                    uVar18 = 0;
                    unaff_x25 = 0x70;
                    do {
                        if (*(iVar21 + 0x98) == 0) break;
                        iVar5 = *(*(iVar21 + 0x98) + uVar18 * 4);
                        if (iVar5 == 0) break;
                        if (*(arg1 + 0x48) == 2) {
                            uVar20 = iVar5 - 1;
                            unaff_x27 = uVar20;
                            if (*(*(iVar21 + 0x38) + unaff_x27 * 0x70 + 0x4c) != '\0') {
                                unaff_x26 = *(iVar21 + 0x58) + unaff_x27 * 0x70;
                                mutex_lock(*unaff_x26 + 0x68);
                                unaff_x28 = unaff_x26 + 10;
                                iVar5 = regmap_update_bits_base
                                                  (*(*unaff_x26 + 0x48),*unaff_x28 + 0x46,0x80,0,0,0,0);
                                if (iVar5 < 0) {
                                    iVar14 = *unaff_x28;
                                    uVar17 = *(*unaff_x26 + 0x50);
                                    uVar11 = 0;
                                }
                                else {
                                    mutex_unlock(*unaff_x26 + 0x68);
                                    unaff_x26 = *(iVar21 + 0x58) + unaff_x27 * 0x70;
                                    mutex_lock(*unaff_x26 + 0x68);
                                    unaff_x28 = unaff_x26 + 10;
                                    iVar5 = regmap_update_bits_base
                                                      (*(*unaff_x26 + 0x48),*unaff_x28 + 0x46,0x80,0x80,0,0,0);
                                    if (-1 < iVar5) {
                                        mutex_unlock(*unaff_x26 + 0x68);
                                        uVar6 = uVar6 | 1 << (uVar20 & 0x1f);
                                        uVar4 = *(iVar21 + 0xb8);
                                        goto code_r0x08002da4;
                                    }
                                    iVar14 = *unaff_x28;
                                    uVar17 = *(*unaff_x26 + 0x50);
                                    uVar11 = 0x80;
                                }
                                _dev_err(uVar17,"Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",
                                         iVar14 + 0x46,uVar11,0x80,iVar5);
                                mutex_unlock(*unaff_x26 + 0x68);
                                break;
                            }
                        }
code_r0x08002da4:
                        uVar20 = uVar18 + 1;
                        uVar18 = uVar20;
                    } while (uVar20 < uVar4);
                }
                arg1 = piVar22 + 1;
                mutex_lock(arg1);
                mutex_lock(*piVar22 + 0x68);
                piVar16 = uVar6 & 0xff;
                piVar10 = piVar16;
                uVar4 = regmap_write(*(*piVar22 + 0x48),*(piVar22 + 0x3c) + 200);
                piVar15 = uVar4;
                if (uVar4 < 0) {
                    _dev_err(*(*piVar22 + 0x50),"Write addr 0x%x with value %d failed, rc=%d\n",
                             *(piVar22 + 0x3c) + 200,piVar16,piVar15);
                    mutex_unlock(*piVar22 + 0x68);
                    piVar10 = piVar15;
                    _dev_err(*(iVar21 + 0x50),"Write LPG_LUT_RAMP_CONTROL failed, rc=%d\n");
                }
                else {
                    mutex_unlock(*piVar22 + 0x68);
                }
                mutex_unlock(arg1);
            }
        }
        else {
            piVar22 = *arg1;
            auStack_6c[0] = uVar4;
            piVar16 = piVar22 + 0xd;
            mutex_lock(piVar16);
            piVar10 = 0x1;
            uVar4 = nvmem_device_write(piVar22[0x14],*(arg1 + 0x58),1,auStack_6c);
            if (uVar4 < 0) {
                piVar15 = uVar4;
                _dev_err(piVar22[10],"write SDAM add 0x%x failed, rc=%d\n",*(arg1 + 0x58),piVar15);
                mutex_unlock(piVar16);
                uVar17 = *(iVar21 + 0x50);
                pcVar9 = "Write SDAM_REG_LUT_EN failed, rc=%d\n";
                goto code_r0x08002f08;
            }
            mutex_unlock(piVar16);
            sym.qpnp_lpg_pbs_trigger_enable(arg1);
            piVar15 = NULL;
        }
    }
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_68) {
        return piVar15;
    }
    auVar26 = __stack_chk_fail();
    piVar19 = auVar26._8_8_;
    piVar29 = auVar26._0_8_;
    *extraout_x18 = sym.qpnp_lpg_set_lut_pattern;
    pcStack_c8 = sym.qpnp_lpg_set_lut_pattern;
    ppuVar27 = &puStack_d0;
    iVar13 = sp_el0;
    piVar24 = piVar10 & 0xffffffff;
    iStack_d8 = *(iVar13 + 0x5e0);
    iVar13 = *piVar29;
    piVar25 = *(iVar13 + 0x60);
    uVar4 = piVar10;
    puStack_d0 = &stack0xffffffffffffffa0;
    piStack_c0 = unaff_x28;
    iStack_b8 = unaff_x27;
    piStack_b0 = unaff_x26;
    uStack_a8 = unaff_x25;
    piStack_a0 = piVar22;
    iStack_98 = iVar21;
    uStack_90 = uVar18;
    piStack_88 = piVar16;
    piStack_80 = piVar15;
    piStack_78 = arg1;
    if (*(iVar13 + 200) == '\0') {
        if (*(piVar29 + 0x54) < uVar4) goto code_r0x080032a4;
        mutex_lock();
        if (uVar4 == 0) {
            piVar10 = NULL;
        }
        else {
            piVar22 = NULL;
            uVar6 = *(piVar29 + 0x2d) * 2 + 0x42;
            do {
                if (piVar22 == 0x41) goto code_r0x080033c8;
                uVar8 = 1 << (*(piVar29 + 1) & 0x1f);
                uVar20 = uVar8 & 0xffff;
                uVar7 = (uVar20 * *(piVar19 + piVar22 * 4)) / 100;
                uVar23 = uVar7 & 0xffff;
                if (uVar20 < uVar23) {
                    _dev_err(*(*piVar29 + 0x50),"PWM value %d exceed the max %d\n");
                    piVar10 = 0xffffffea;
                    goto code_r0x08003260;
                }
                uVar8 = uVar8 - 1;
                if (uVar23 != uVar20) {
                    uVar8 = uVar7;
                }
                piVar16 = uVar8;
                mutex_lock(*piVar25 + 0x68);
                uVar20 = uVar6 & 0xff;
                piVar15 = uVar20;
                uVar23 = uVar8 & 0xff;
                uVar7 = regmap_write(*(*piVar25 + 0x48),*(piVar25 + 0x3c) + uVar20,uVar23);
                if (uVar7 < 0) {
                    piVar10 = uVar7;
                    _dev_err(*(*piVar25 + 0x50),"Write addr 0x%x with value %d failed, rc=%d\n",
                             *(piVar25 + 0x3c) + uVar20,uVar23,piVar10);
                    mutex_unlock(*piVar25 + 0x68);
                    iVar21 = *piVar29;
                    pcVar9 = "Write NO.%d LUT pattern LSB (%d) failed, rc=%d\n";
code_r0x08003394:
                    _dev_err(*(iVar21 + 0x50),pcVar9,piVar22 & 0xffffffff,uVar23,piVar10);
                    goto code_r0x08003260;
                }
                uVar23 = uVar8 >> 8 & 0xff;
                mutex_unlock(*piVar25 + 0x68);
                piVar15 = uVar6 | 1;
                mutex_lock(*piVar25 + 0x68);
                uVar20 = uVar6 & 0xff | 1;
                piVar16 = uVar20;
                uVar8 = regmap_update_bits_base(*(*piVar25 + 0x48),*(piVar25 + 0x3c) + uVar20,1,uVar23,0,0,0);
                piVar10 = uVar8;
                if (uVar8 < 0) {
                    _dev_err(*(*piVar25 + 0x50),"Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",
                             *(piVar25 + 0x3c) + uVar20,uVar23,1,piVar10);
                    mutex_unlock(*piVar25 + 0x68);
                    iVar21 = *piVar29;
                    pcVar9 = "Write NO.%d LUT pattern MSB (%d) failed, rc=%d\n";
                    goto code_r0x08003394;
                }
                mutex_unlock(*piVar25 + 0x68);
                uVar6 = uVar6 + 2;
                piVar22 = piVar22 + 1;
            } while (piVar24 != piVar22);
        }
        *(piVar29 + 8) = uVar4;
code_r0x08003260:
        mutex_unlock(piVar25 + 1);
    }
    else {
        uStack_e0 = 0;
        uStack_f0 = 0;
        uStack_e8 = 0;
        uStack_100 = 0;
        uStack_f8 = 0;
        uStack_110 = 0;
        uStack_108 = 0;
        uStack_120 = 0;
        uStack_118 = 0;
        if (uVar4 <= *(piVar29 + 0x54)) {
            piVar16 = piVar25 + 1;
            mutex_lock(piVar16);
            uVar1 = *(piVar29 + 0x2d);
            piVar15 = uVar1;
            if (uVar4 != 0) {
                piVar10 = NULL;
                do {
                    if (piVar10 == 0x41) {
code_r0x080033c8:
    //WARNING: Does not return
                        pcVar28 = SoftwareBreakpoint(0x5512,0x80033cc);
                        (*pcVar28)();
                    }
                    *(&uStack_120 + piVar10) = (*(piVar19 + piVar10 * 4) * 0xff) / 100;
                    piVar10 = piVar10 + 1;
                } while (piVar24 != piVar10);
            }
            if (uVar1 < 0x40) {
                piVar22 = *piVar25;
                piVar19 = piVar22 + 0xd;
                mutex_lock(piVar19);
                uVar6 = nvmem_device_write(piVar22[0x15],*(piVar25 + 0x3c) + uVar1,piVar24,&uStack_120);
                if (-1 < uVar6) {
                    mutex_unlock(piVar19);
                    piVar10 = NULL;
                    *(piVar29 + 8) = uVar4;
                    goto code_r0x08003260;
                }
                piVar10 = uVar6;
                _dev_err(piVar22[10],"write SDAM addr %d failed, rc=%d\n",*(piVar25 + 0x3c) + uVar1,piVar10);
                mutex_unlock(piVar19);
            }
            else {
                piVar10 = 0xffffffea;
            }
            _dev_err(*(*piVar29 + 0x50),"Write pattern in SDAM failed, rc=%d\n",piVar10);
            goto code_r0x08003260;
        }
code_r0x080032a4:
        _dev_err(*(iVar13 + 0x50),"new pattern length (%d) larger than predefined (%d)\n",piVar24);
        piVar10 = 0xffffffea;
    }
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) == iStack_d8) {
        return piVar10;
    }
    piVar24 = __stack_chk_fail();
    *extraout_x18_00 = sym.qpnp_lpg_set_pwm_config;
    pcVar28 = sym.qpnp_lpg_set_pwm_config;
    cVar2 = *(piVar24 + 0x5d);
    iVar5 = piVar24[1];
    if (cVar2 == '\f') {
        uVar4 = iVar5 - 8;
        iVar5 = *(piVar24 + 0xc);
        uVar6 = 0xffffffea;
        if (7 < uVar4) {
            uVar4 = 0xffffffea;
        }
        if (19199999 < iVar5) {
            if (iVar5 != 19200000) {
                if (iVar5 == 76800000) {
                    uVar6 = 3;
                }
                goto code_r0x080034c4;
            }
code_r0x080034b8:
            uVar6 = 2;
            goto code_r0x080034c4;
        }
        if (iVar5 != 0x400) {
            if (iVar5 != 0x8000) goto code_r0x080034c4;
code_r0x080034a8:
            uVar6 = 1;
            goto code_r0x080034c4;
        }
    }
    else {
        if (iVar5 == 6) {
            uVar4 = 0;
        }
        else if (iVar5 == 9) {
            uVar4 = 1;
        }
        else {
            uVar4 = 0xffffffea;
        }
        iVar5 = *(piVar24 + 0xc);
        if (iVar5 != 0x400) {
            if (iVar5 != 19200000) {
                if (iVar5 != 0x8000) {
                    uVar6 = 0xffffffea;
                    goto code_r0x080034c4;
                }
                goto code_r0x080034a8;
            }
            goto code_r0x080034b8;
        }
    }
    uVar6 = 0;
code_r0x080034c4:
    piVar25 = 0xffffffea;
    uVar20 = 0xffffffea;
    uVar23 = piVar24[2] - 1;
    if (uVar23 < 6) {
        if ((0x35U >> (uVar23 & 0x1f) & 1) == 0) {
            uVar20 = 0xffffffea;
        }
        else {
            uVar20 = *(uVar23 * 4 + 0x80013c4);
        }
    }
    uVar23 = *(piVar24 + 0x14);
    if (7 < uVar23) {
        uVar23 = 0xffffffea;
    }
    if (-1 < (uVar6 | uVar4 | uVar20 | uVar23)) {
        if (cVar2 == '\v') {
            iVar21 = 2;
            uVar17 = 7;
        }
        else if (cVar2 == '\f') {
            iVar21 = 4;
            uVar17 = 0x77;
        }
        else {
            iVar21 = 4;
            uVar17 = 0x13;
        }
        mutex_lock(*piVar24 + 0x68);
        uVar4 = (uVar4 << iVar21 | uVar6 + 1) & 0xff;
        uVar6 = regmap_update_bits_base
                          (*(*piVar24 + 0x48),piVar24[10] + 0x41,uVar17,uVar4,0,0,0,in_x7,ppuVar27,pcVar28,
                           piVar22,piVar10,piVar19,piVar16,piVar15,piVar29);
        if (uVar6 < 0) {
            piVar25 = uVar6;
            _dev_err(*(*piVar24 + 0x50),"Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",
                     piVar24[10] + 0x41,uVar4,uVar17,piVar25);
            mutex_unlock(*piVar24 + 0x68);
            iVar21 = *piVar24;
            pcVar9 = "Write LPG_PWM_SIZE_CLK failed, rc=%d\n";
        }
        else {
            mutex_unlock(*piVar24 + 0x68);
            mutex_lock(*piVar24 + 0x68);
            uVar4 = (uVar23 | uVar20 << 5) & 0xff;
            uVar6 = regmap_update_bits_base
                              (*(*piVar24 + 0x48),piVar24[10] + 0x42,0x67,uVar4,0,0,0,in_x7,ppuVar27,pcVar28,
                               piVar22,piVar10,piVar19,piVar16,piVar15,piVar29);
            if (uVar6 < 0) {
                piVar25 = uVar6;
                _dev_err(*(*piVar24 + 0x50),"Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",
                         piVar24[10] + 0x42,uVar4,0x67,piVar25);
                mutex_unlock(*piVar24 + 0x68);
                iVar21 = *piVar24;
                pcVar9 = "Write LPG_PWM_FREQ_PREDIV_CLK failed, rc=%d\n";
            }
            else {
                mutex_unlock(*piVar24 + 0x68);
                if (*(piVar24 + 0x5c) == '\0') {
                    return NULL;
                }
                uVar3 = *(piVar24 + 3);
                uVar12 = 0xff;
                if (*(piVar24 + 0x5d) != '\f') {
                    uVar12 = 1;
                }
                mutex_lock(0xff,*piVar24 + 0x68);
                uVar4 = regmap_update_bits_base(*(*piVar24 + 0x48),piVar24[10] + 0x45,uVar12,uVar3 >> 8,0,0,0);
                if (uVar4 < 0) {
                    piVar25 = uVar4;
                    _dev_err(*(*piVar24 + 0x50),"Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",
                             piVar24[10] + 0x45,uVar3 >> 8,uVar12,piVar25);
                    mutex_unlock(*piVar24 + 0x68);
                    iVar21 = *piVar24;
                    pcVar9 = "Write LPG_PWM_VALUE_MSB failed, rc=%d\n";
                }
                else {
                    mutex_unlock(*piVar24 + 0x68);
                    iVar21 = piVar24[3];
                    mutex_lock(*piVar24 + 0x68);
                    uVar4 = regmap_write(*(*piVar24 + 0x48),piVar24[10] + 0x44,iVar21);
                    if (uVar4 < 0) {
                        piVar25 = uVar4;
                        _dev_err(*(*piVar24 + 0x50),"Write addr 0x%x with value 0x%x failed, rc=%d\n",
                                 piVar24[10] + 0x44,iVar21,piVar25);
                        mutex_unlock(*piVar24 + 0x68);
                        iVar21 = *piVar24;
                        pcVar9 = "Write LPG_PWM_VALUE_LSB failed, rc=%d\n";
                    }
                    else {
                        mutex_unlock(*piVar24 + 0x68);
                        mutex_lock(*piVar24 + 0x68);
                        uVar4 = regmap_write(*(*piVar24 + 0x48),piVar24[10] + 0x47,1);
                        piVar25 = uVar4;
                        if (-1 < uVar4) {
                            mutex_unlock(*piVar24 + 0x68);
                            return piVar25;
                        }
                        _dev_err(*(*piVar24 + 0x50),"Write addr 0x%x with value 0x%x failed, rc=%d\n",
                                 piVar24[10] + 0x47,1,piVar25);
                        mutex_unlock(*piVar24 + 0x68);
                        iVar21 = *piVar24;
                        pcVar9 = "Write LPG_PWM_SYNC failed, rc=%d\n";
                    }
                }
            }
        }
        _dev_err(*(iVar21 + 0x50),pcVar9,piVar25);
    }
    return piVar25;
}


// ===== sym.qpnp_lpg_set_lut_pattern @ 0x0800301c (size 948) =====

uint64_t sym.qpnp_lpg_set_lut_pattern(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint8_t uVar2;
    char cVar3;
    uint16_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    int64_t *piVar9;
    char *pcVar10;
    ulong in_x7;
    uint uVar11;
    int64_t iVar12;
    uint64_t uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x20;
    uint64_t *unaff_x21;
    ulong uVar14;
    uint32_t uVar15;
    uint64_t unaff_x24;
    uint32_t uVar16;
    uint64_t uVar17;
    uint64_t *puVar18;
    ulong unaff_x30;
    uchar *puVar19;
    code *pcVar20;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    uchar uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    puVar19 = &stack0xffffffffffffffa0;
    iVar12 = sp_el0;
    uVar17 = arg3 & 0xffffffff;
    iStack_68 = *(iVar12 + 0x5e0);
    iVar12 = *arg1;
    puVar18 = *(iVar12 + 0x60);
    uVar8 = arg3;
    if (*(iVar12 + 200) == '\0') {
        if (*(arg1 + 0x54) < uVar8) goto code_r0x080032a4;
        mutex_lock();
        if (uVar8 == 0) {
            uVar13 = 0;
        }
        else {
            unaff_x24 = 0;
            uVar5 = *(arg1 + 0x2d) * 2 + 0x42;
            do {
                if (unaff_x24 == 0x41) goto code_r0x080033c8;
                uVar7 = 1 << (*(arg1 + 8) & 0x1f);
                uVar15 = uVar7 & 0xffff;
                uVar6 = (uVar15 * *(arg2 + unaff_x24 * 4)) / 100;
                uVar16 = uVar6 & 0xffff;
                if (uVar15 < uVar16) {
                    _dev_err(*(*arg1 + 0x50),"PWM value %d exceed the max %d\n");
                    uVar13 = 0xffffffea;
                    goto code_r0x08003260;
                }
                uVar7 = uVar7 - 1;
                if (uVar16 != uVar15) {
                    uVar7 = uVar6;
                }
                unaff_x21 = uVar7;
                mutex_lock(*puVar18 + 0x68);
                uVar15 = uVar5 & 0xff;
                unaff_x20 = uVar15;
                uVar16 = uVar7 & 0xff;
                uVar6 = regmap_write(*(*puVar18 + 0x48),*(puVar18 + 0x3c) + uVar15,uVar16);
                if (uVar6 < 0) {
                    uVar13 = uVar6;
                    _dev_err(*(*puVar18 + 0x50),"Write addr 0x%x with value %d failed, rc=%d\n",
                             *(puVar18 + 0x3c) + uVar15,uVar16,uVar13);
                    mutex_unlock(*puVar18 + 0x68);
                    iVar12 = *arg1;
                    pcVar10 = "Write NO.%d LUT pattern LSB (%d) failed, rc=%d\n";
code_r0x08003394:
                    _dev_err(*(iVar12 + 0x50),pcVar10,unaff_x24 & 0xffffffff,uVar16,uVar13);
                    goto code_r0x08003260;
                }
                uVar16 = uVar7 >> 8 & 0xff;
                mutex_unlock(*puVar18 + 0x68);
                unaff_x20 = uVar5 | 1;
                mutex_lock(*puVar18 + 0x68);
                uVar15 = uVar5 & 0xff | 1;
                unaff_x21 = uVar15;
                uVar7 = regmap_update_bits_base(*(*puVar18 + 0x48),*(puVar18 + 0x3c) + uVar15,1,uVar16,0,0,0);
                uVar13 = uVar7;
                if (uVar7 < 0) {
                    _dev_err(*(*puVar18 + 0x50),"Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",
                             *(puVar18 + 0x3c) + uVar15,uVar16,1,uVar13);
                    mutex_unlock(*puVar18 + 0x68);
                    iVar12 = *arg1;
                    pcVar10 = "Write NO.%d LUT pattern MSB (%d) failed, rc=%d\n";
                    goto code_r0x08003394;
                }
                mutex_unlock(*puVar18 + 0x68);
                uVar5 = uVar5 + 2;
                unaff_x24 = unaff_x24 + 1;
            } while (uVar17 != unaff_x24);
        }
        *(arg1 + 0x40) = uVar8;
code_r0x08003260:
        mutex_unlock(puVar18 + 1);
    }
    else {
        uStack_70 = 0;
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_b0 = 0;
        uStack_a8 = 0;
        if (uVar8 <= *(arg1 + 0x54)) {
            unaff_x21 = puVar18 + 1;
            mutex_lock(unaff_x21);
            uVar2 = *(arg1 + 0x2d);
            unaff_x20 = uVar2;
            if (uVar8 != 0) {
                uVar13 = 0;
                do {
                    if (uVar13 == 0x41) {
code_r0x080033c8:
    //WARNING: Does not return
                        pcVar20 = SoftwareBreakpoint(0x5512,0x80033cc);
                        (*pcVar20)();
                    }
                    *(&uStack_b0 + uVar13) = (*(arg2 + uVar13 * 4) * 0xff) / 100;
                    uVar13 = uVar13 + 1;
                } while (uVar17 != uVar13);
            }
            if (uVar2 < 0x40) {
                unaff_x24 = *puVar18;
                arg2 = unaff_x24 + 0x68;
                mutex_lock(arg2);
                uVar5 = nvmem_device_write(*(unaff_x24 + 0xa8),*(puVar18 + 0x3c) + uVar2,uVar17,&uStack_b0);
                if (-1 < uVar5) {
                    mutex_unlock(arg2);
                    uVar13 = 0;
                    *(arg1 + 0x40) = uVar8;
                    goto code_r0x08003260;
                }
                uVar13 = uVar5;
                _dev_err(*(unaff_x24 + 0x50),"write SDAM addr %d failed, rc=%d\n",*(puVar18 + 0x3c) + uVar2,uVar13);
                mutex_unlock(arg2);
            }
            else {
                uVar13 = 0xffffffea;
            }
            _dev_err(*(*arg1 + 0x50),"Write pattern in SDAM failed, rc=%d\n",uVar13);
            goto code_r0x08003260;
        }
code_r0x080032a4:
        _dev_err(*(iVar12 + 0x50),"new pattern length (%d) larger than predefined (%d)\n",uVar17);
        uVar13 = 0xffffffea;
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_68) {
        return uVar13;
    }
    piVar9 = __stack_chk_fail();
    *extraout_x18 = sym.qpnp_lpg_set_pwm_config;
    pcVar20 = sym.qpnp_lpg_set_pwm_config;
    cVar3 = *(piVar9 + 0x5d);
    iVar1 = piVar9[1];
    if (cVar3 == '\f') {
        uVar8 = iVar1 - 8;
        iVar1 = *(piVar9 + 0xc);
        uVar5 = 0xffffffea;
        if (7 < uVar8) {
            uVar8 = 0xffffffea;
        }
        if (19199999 < iVar1) {
            if (iVar1 != 19200000) {
                if (iVar1 == 76800000) {
                    uVar5 = 3;
                }
                goto code_r0x080034c4;
            }
code_r0x080034b8:
            uVar5 = 2;
            goto code_r0x080034c4;
        }
        if (iVar1 != 0x400) {
            if (iVar1 != 0x8000) goto code_r0x080034c4;
code_r0x080034a8:
            uVar5 = 1;
            goto code_r0x080034c4;
        }
    }
    else {
        if (iVar1 == 6) {
            uVar8 = 0;
        }
        else if (iVar1 == 9) {
            uVar8 = 1;
        }
        else {
            uVar8 = 0xffffffea;
        }
        iVar1 = *(piVar9 + 0xc);
        if (iVar1 != 0x400) {
            if (iVar1 != 19200000) {
                if (iVar1 != 0x8000) {
                    uVar5 = 0xffffffea;
                    goto code_r0x080034c4;
                }
                goto code_r0x080034a8;
            }
            goto code_r0x080034b8;
        }
    }
    uVar5 = 0;
code_r0x080034c4:
    uVar17 = 0xffffffea;
    uVar15 = 0xffffffea;
    uVar16 = piVar9[2] - 1;
    if (uVar16 < 6) {
        if ((0x35U >> (uVar16 & 0x1f) & 1) == 0) {
            uVar15 = 0xffffffea;
        }
        else {
            uVar15 = *(uVar16 * 4 + 0x80013c4);
        }
    }
    uVar16 = *(piVar9 + 0x14);
    if (7 < uVar16) {
        uVar16 = 0xffffffea;
    }
    if (-1 < (uVar5 | uVar8 | uVar15 | uVar16)) {
        if (cVar3 == '\v') {
            iVar12 = 2;
            uVar14 = 7;
        }
        else if (cVar3 == '\f') {
            iVar12 = 4;
            uVar14 = 0x77;
        }
        else {
            iVar12 = 4;
            uVar14 = 0x13;
        }
        mutex_lock(*piVar9 + 0x68);
        uVar8 = (uVar8 << iVar12 | uVar5 + 1) & 0xff;
        uVar5 = regmap_update_bits_base
                          (*(*piVar9 + 0x48),piVar9[10] + 0x41,uVar14,uVar8,0,0,0,in_x7,puVar19,pcVar20,
                           unaff_x24,uVar13,arg2,unaff_x21,unaff_x20,arg1);
        if (uVar5 < 0) {
            uVar17 = uVar5;
            _dev_err(*(*piVar9 + 0x50),"Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",piVar9[10] + 0x41
                     ,uVar8,uVar14,uVar17);
            mutex_unlock(*piVar9 + 0x68);
            iVar12 = *piVar9;
            pcVar10 = "Write LPG_PWM_SIZE_CLK failed, rc=%d\n";
        }
        else {
            mutex_unlock(*piVar9 + 0x68);
            mutex_lock(*piVar9 + 0x68);
            uVar8 = (uVar16 | uVar15 << 5) & 0xff;
            uVar5 = regmap_update_bits_base
                              (*(*piVar9 + 0x48),piVar9[10] + 0x42,0x67,uVar8,0,0,0,in_x7,puVar19,pcVar20,
                               unaff_x24,uVar13,arg2,unaff_x21,unaff_x20,arg1);
            if (uVar5 < 0) {
                uVar17 = uVar5;
                _dev_err(*(*piVar9 + 0x50),"Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",
                         piVar9[10] + 0x42,uVar8,0x67,uVar17);
                mutex_unlock(*piVar9 + 0x68);
                iVar12 = *piVar9;
                pcVar10 = "Write LPG_PWM_FREQ_PREDIV_CLK failed, rc=%d\n";
            }
            else {
                mutex_unlock(*piVar9 + 0x68);
                if (*(piVar9 + 0x5c) == '\0') {
                    return 0;
                }
                uVar4 = *(piVar9 + 3);
                uVar11 = 0xff;
                if (*(piVar9 + 0x5d) != '\f') {
                    uVar11 = 1;
                }
                mutex_lock(0xff,*piVar9 + 0x68);
                uVar8 = regmap_update_bits_base(*(*piVar9 + 0x48),piVar9[10] + 0x45,uVar11,uVar4 >> 8,0,0,0);
                if (uVar8 < 0) {
                    uVar17 = uVar8;
                    _dev_err(*(*piVar9 + 0x50),"Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",
                             piVar9[10] + 0x45,uVar4 >> 8,uVar11,uVar17);
                    mutex_unlock(*piVar9 + 0x68);
                    iVar12 = *piVar9;
                    pcVar10 = "Write LPG_PWM_VALUE_MSB failed, rc=%d\n";
                }
                else {
                    mutex_unlock(*piVar9 + 0x68);
                    iVar12 = piVar9[3];
                    mutex_lock(*piVar9 + 0x68);
                    uVar8 = regmap_write(*(*piVar9 + 0x48),piVar9[10] + 0x44,iVar12);
                    if (uVar8 < 0) {
                        uVar17 = uVar8;
                        _dev_err(*(*piVar9 + 0x50),"Write addr 0x%x with value 0x%x failed, rc=%d\n",piVar9[10] + 0x44
                                 ,iVar12,uVar17);
                        mutex_unlock(*piVar9 + 0x68);
                        iVar12 = *piVar9;
                        pcVar10 = "Write LPG_PWM_VALUE_LSB failed, rc=%d\n";
                    }
                    else {
                        mutex_unlock(*piVar9 + 0x68);
                        mutex_lock(*piVar9 + 0x68);
                        uVar8 = regmap_write(*(*piVar9 + 0x48),piVar9[10] + 0x47,1);
                        uVar17 = uVar8;
                        if (-1 < uVar8) {
                            mutex_unlock(*piVar9 + 0x68);
                            return uVar17;
                        }
                        _dev_err(*(*piVar9 + 0x50),"Write addr 0x%x with value 0x%x failed, rc=%d\n",piVar9[10] + 0x47
                                 ,1,uVar17);
                        mutex_unlock(*piVar9 + 0x68);
                        iVar12 = *piVar9;
                        pcVar10 = "Write LPG_PWM_SYNC failed, rc=%d\n";
                    }
                }
            }
        }
        _dev_err(*(iVar12 + 0x50),pcVar10,uVar17);
    }
    return uVar17;
}


// ===== sym.qpnp_lpg_set_pwm_config @ 0x080033d0 (size 1128) =====

int sym.qpnp_lpg_set_pwm_config(int64_t arg1)

{
    char cVar1;
    uchar uVar2;
    uint32_t uVar3;
    uint16_t uVar4;
    int iVar5;
    char *pcVar6;
    uint32_t uVar7;
    uint uVar8;
    int64_t iVar9;
    uint32_t uVar10;
    ulong *in_x18;
    ulong uVar11;
    uint32_t uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    cVar1 = *(arg1 + 0x5d);
    iVar5 = *(arg1 + 8);
    if (cVar1 == '\f') {
        uVar7 = iVar5 - 8;
        iVar5 = *(arg1 + 0xc);
        uVar10 = 0xffffffea;
        if (7 < uVar7) {
            uVar7 = 0xffffffea;
        }
        if (19199999 < iVar5) {
            if (iVar5 != 19200000) {
                if (iVar5 == 76800000) {
                    uVar10 = 3;
                }
                goto code_r0x080034c4;
            }
code_r0x080034b8:
            uVar10 = 2;
            goto code_r0x080034c4;
        }
        if (iVar5 != 0x400) {
            if (iVar5 != 0x8000) goto code_r0x080034c4;
code_r0x080034a8:
            uVar10 = 1;
            goto code_r0x080034c4;
        }
    }
    else {
        if (iVar5 == 6) {
            uVar7 = 0;
        }
        else if (iVar5 == 9) {
            uVar7 = 1;
        }
        else {
            uVar7 = 0xffffffea;
        }
        iVar5 = *(arg1 + 0xc);
        if (iVar5 != 0x400) {
            if (iVar5 != 19200000) {
                if (iVar5 != 0x8000) {
                    uVar10 = 0xffffffea;
                    goto code_r0x080034c4;
                }
                goto code_r0x080034a8;
            }
            goto code_r0x080034b8;
        }
    }
    uVar10 = 0;
code_r0x080034c4:
    iVar5 = -0x16;
    uVar12 = 0xffffffea;
    uVar3 = *(arg1 + 0x10) - 1;
    if (uVar3 < 6) {
        if ((0x35U >> (uVar3 & 0x1f) & 1) == 0) {
            uVar12 = 0xffffffea;
        }
        else {
            uVar12 = *(uVar3 * 4 + 0x80013c4);
        }
    }
    uVar3 = *(arg1 + 0x14);
    if (7 < uVar3) {
        uVar3 = 0xffffffea;
    }
    if (-1 < (uVar10 | uVar7 | uVar12 | uVar3)) {
        if (cVar1 == '\v') {
            iVar9 = 2;
            uVar11 = 7;
        }
        else if (cVar1 == '\f') {
            iVar9 = 4;
            uVar11 = 0x77;
        }
        else {
            iVar9 = 4;
            uVar11 = 0x13;
        }
        mutex_lock(*arg1 + 0x68);
        uVar7 = (uVar7 << iVar9 | uVar10 + 1) & 0xff;
        iVar5 = regmap_update_bits_base(*(*arg1 + 0x48),*(arg1 + 0x50) + 0x41,uVar11,uVar7,0,0,0);
        if (iVar5 < 0) {
            _dev_err(*(*arg1 + 0x50),"Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",
                     *(arg1 + 0x50) + 0x41,uVar7,uVar11,iVar5);
            mutex_unlock(*arg1 + 0x68);
            arg1 = *arg1;
            pcVar6 = "Write LPG_PWM_SIZE_CLK failed, rc=%d\n";
        }
        else {
            mutex_unlock(*arg1 + 0x68);
            mutex_lock(*arg1 + 0x68);
            uVar7 = (uVar3 | uVar12 << 5) & 0xff;
            iVar5 = regmap_update_bits_base(*(*arg1 + 0x48),*(arg1 + 0x50) + 0x42,0x67,uVar7,0,0,0);
            if (iVar5 < 0) {
                _dev_err(*(*arg1 + 0x50),"Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",
                         *(arg1 + 0x50) + 0x42,uVar7,0x67,iVar5);
                mutex_unlock(*arg1 + 0x68);
                arg1 = *arg1;
                pcVar6 = "Write LPG_PWM_FREQ_PREDIV_CLK failed, rc=%d\n";
            }
            else {
                mutex_unlock(*arg1 + 0x68);
                if (*(arg1 + 0x5c) == '\0') {
                    return 0;
                }
                uVar4 = *(arg1 + 0x18) >> 8;
                uVar8 = 0xff;
                if (*(arg1 + 0x5d) != '\f') {
                    uVar8 = 1;
                }
                mutex_lock(0xff,*arg1 + 0x68);
                iVar5 = regmap_update_bits_base(*(*arg1 + 0x48),*(arg1 + 0x50) + 0x45,uVar8,uVar4,0,0,0);
                if (iVar5 < 0) {
                    _dev_err(*(*arg1 + 0x50),"Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",
                             *(arg1 + 0x50) + 0x45,uVar4,uVar8,iVar5);
                    mutex_unlock(*arg1 + 0x68);
                    arg1 = *arg1;
                    pcVar6 = "Write LPG_PWM_VALUE_MSB failed, rc=%d\n";
                }
                else {
                    mutex_unlock(*arg1 + 0x68);
                    uVar2 = *(arg1 + 0x18);
                    mutex_lock(*arg1 + 0x68);
                    iVar5 = regmap_write(*(*arg1 + 0x48),*(arg1 + 0x50) + 0x44,uVar2);
                    if (iVar5 < 0) {
                        _dev_err(*(*arg1 + 0x50),"Write addr 0x%x with value 0x%x failed, rc=%d\n",
                                 *(arg1 + 0x50) + 0x44,uVar2,iVar5);
                        mutex_unlock(*arg1 + 0x68);
                        arg1 = *arg1;
                        pcVar6 = "Write LPG_PWM_VALUE_LSB failed, rc=%d\n";
                    }
                    else {
                        mutex_unlock(*arg1 + 0x68);
                        mutex_lock(*arg1 + 0x68);
                        iVar5 = regmap_write(*(*arg1 + 0x48),*(arg1 + 0x50) + 0x47,1);
                        if (-1 < iVar5) {
                            mutex_unlock(*arg1 + 0x68);
                            return iVar5;
                        }
                        _dev_err(*(*arg1 + 0x50),"Write addr 0x%x with value 0x%x failed, rc=%d\n",
                                 *(arg1 + 0x50) + 0x47,1,iVar5);
                        mutex_unlock(*arg1 + 0x68);
                        arg1 = *arg1;
                        pcVar6 = "Write LPG_PWM_SYNC failed, rc=%d\n";
                    }
                }
            }
        }
        _dev_err(*(arg1 + 0x50),pcVar6,iVar5);
    }
    return iVar5;
}


// ===== sym.qpnp_lpg_pwm_get_output_types_supported @ 0x08003838 (size 180) =====

uint sym.qpnp_lpg_pwm_get_output_types_supported(int64_t arg1)

{
    uint32_t uVar1;
    ulong *puVar2;
    int64_t *piVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x8000d62,"qpnp_lpg_pwm_get_output_types_supported");
    }
    else {
        puVar2 = *(arg1 + 0x18);
        uVar1 = *(arg1 + 0x10);
        if (uVar1 < *(puVar2 + 0x17)) {
            piVar3 = puVar2[0xb] + uVar1 * 0x70;
            if (piVar3 != NULL) {
                if (*(*piVar3 + 0x60) != 0) {
                    return 3;
                }
                return 1;
            }
        }
        else {
            _dev_err(puVar2[10],"hw index %d out of range [0-%d]\n",uVar1,*(puVar2 + 0x17) - 1);
            puVar2 = *(arg1 + 0x18);
        }
        _dev_err(*puVar2,"lpg not found\n");
    }
    return 0xffffffed;
}


// ===== sym.qpnp_lpg_pbs_trigger_enable @ 0x080038ec (size 776) =====

void sym.qpnp_lpg_pbs_trigger_enable(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    ulong uVar6;
    uint64_t in_x1;
    char *pcVar7;
    int64_t *extraout_x8;
    int64_t *piVar8;
    uint64_t *extraout_x9;
    uint64_t *puVar9;
    uint64_t uVar10;
    uint64_t extraout_x10;
    ulong *in_x18;
    int64_t iVar11;
    ulong unaff_x30;
    uchar auStack_58 [4];
    uchar auStack_54 [4];
    uchar auStack_50 [4];
    uchar auStack_4c [4];
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_48 = *(iVar11 + 0x5e0);
    iVar11 = *arg1;
    if ((in_x1 & 1) == 0) {
        piVar8 = iVar11 + 0xc0;
        uVar10 = 1L << (*(arg1 + 0x4c) & 0x3f);
        puVar9 = piVar8 + (*(arg1 + 0x4c) >> 3 & 0x1ffffff8);
        goto code_r0x08003ba8;
    }
    if (*(iVar11 + 0xc0) == 0) {
        iVar1 = iVar11 + 0x68;
        auStack_58[0] = 1;
        mutex_lock(iVar1);
        iVar5 = nvmem_device_write(*(iVar11 + 0xa0),0x42,1,auStack_58);
        if (iVar5 < 0) {
            _dev_err(*(iVar11 + 0x50),"write SDAM add 0x%x failed, rc=%d\n",0x42,iVar5);
            mutex_unlock(iVar1);
            uVar6 = *(iVar11 + 0x50);
            pcVar7 = "Write SDAM_REG_PBS_SEQ_EN failed, rc=%d\n";
            goto code_r0x08003b68;
        }
        mutex_unlock(iVar1);
        if (*(*(iVar11 + 0x60) + 0x38) == 1) {
            if (*(iVar11 + 0xb0) != 0) {
                iVar5 = -0x13;
                goto code_r0x08003b58;
            }
            _dev_err(*(iVar11 + 0x50),"PBS device unavailable\n");
            goto code_r0x08003b6c;
        }
        auStack_54[0] = 1;
        mutex_lock(iVar1);
        iVar5 = nvmem_device_write(*(iVar11 + 0xa0),0xe5,1,auStack_54);
        if (iVar5 < 0) {
            _dev_err(*(iVar11 + 0x50),"write SDAM add 0x%x failed, rc=%d\n",0xe5,iVar5);
            mutex_unlock(iVar1);
code_r0x08003b58:
            uVar6 = *(iVar11 + 0x50);
            pcVar7 = "Failed to trigger PBS, rc=%d\n";
            goto code_r0x08003b68;
        }
        mutex_unlock(iVar1);
    }
    uVar2 = *(arg1 + 0x4c);
    puVar9 = iVar11 + 0xc0 + (uVar2 >> 3 & 0x1ffffff8);
    Hint_Prefetch(puVar9,2,0,1);
    do {
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar9,0x10);
        if (bVar4) {
            *puVar9 = *puVar9 | 1L << (uVar2 & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
code_r0x08003b6c:
    do {
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iStack_48) {
            return;
        }
        __stack_chk_fail();
        piVar8 = extraout_x8;
        puVar9 = extraout_x9;
        uVar10 = extraout_x10;
code_r0x08003ba8:
        Hint_Prefetch(puVar9,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar9,0x10);
            if (bVar4) {
                *puVar9 = *puVar9 & (uVar10 ^ 0xffffffffffffffff);
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
    } while (*piVar8 != 0);
    iVar1 = iVar11 + 0x68;
    auStack_50[0] = 0;
    mutex_lock(iVar1);
    iVar5 = nvmem_device_write(*(iVar11 + 0xa0),0x42,1,auStack_50);
    if (-1 < iVar5) goto code_r0x08003a24;
    _dev_err(*(iVar11 + 0x50),"write SDAM add 0x%x failed, rc=%d\n",0x42,iVar5);
    mutex_unlock(iVar1);
    uVar6 = *(iVar11 + 0x50);
    pcVar7 = "Write SDAM_REG_PBS_SEQ_EN failed, rc=%d\n";
    goto code_r0x08003b68;
code_r0x08003a24:
    mutex_unlock(iVar1);
    if (*(*(iVar11 + 0x60) + 0x38) == 2) {
        auStack_4c[0] = 1;
        mutex_lock(iVar1);
        iVar5 = nvmem_device_write(*(iVar11 + 0xa0),0xe6,1,auStack_4c);
        if (iVar5 < 0) {
            _dev_err(*(iVar11 + 0x50),"write SDAM add 0x%x failed, rc=%d\n",0xe6,iVar5);
            mutex_unlock(iVar1);
            uVar6 = *(iVar11 + 0x50);
            pcVar7 = "Failed to fire PBS seq, rc=%d\n";
code_r0x08003b68:
            _dev_err(uVar6,pcVar7,iVar5);
        }
        else {
            mutex_unlock(iVar1);
        }
    }
    goto code_r0x08003b6c;
}


// ===== sym.qpnp_lpg_probe @ 0x08003bf4 (size 2300) =====

uint64_t sym.qpnp_lpg_probe(int64_t arg1)

{
    uint32_t *puVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    ulong *arg1_00;
    ulong uVar7;
    int64_t iVar8;
    uint32_t *puVar9;
    uint64_t uVar10;
    char *pcVar11;
    uint uVar12;
    int64_t iVar13;
    int64_t iVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar15;
    uint64_t uVar16;
    int64_t *piVar17;
    int *piVar18;
    ulong unaff_x30;
    uint32_t uStack_70;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    arg1_00 = devm_kmalloc(arg1 + 0x10,0xd0,0xdc0);
    if (arg1_00 == NULL) {
        uVar16 = 0xfffffff4;
        goto code_r0x08004418;
    }
    uVar7 = *(arg1 + 0x70);
    piVar17 = arg1_00 + 10;
    *piVar17 = arg1 + 0x10;
    iVar8 = dev_get_regmap(uVar7,0);
    arg1_00[9] = iVar8;
    if (iVar8 == 0) {
        _dev_err(*piVar17,"Getting regmap failed\n");
        uVar16 = 0xffffffea;
        goto code_r0x08004418;
    }
    __mutex_init(arg1_00 + 0xd,"&chip->bus_lock",reloc.qpnp_lpg_probe.dc31bff6ac2356f2ace3cf841d8a55bf.cfi_jt);
    puVar9 = __of_get_address(*(arg1_00[10] + 0x2f0),0,0xffffffff,0,0);
    if (puVar9 == NULL) {
        _dev_err(*piVar17,"Get %s address failed\n","lpg-base");
        uVar16 = 0xffffffea;
code_r0x08004404:
        iVar8 = *piVar17;
        pcVar11 = "Devicetree properties parsing failed, rc=%d\n";
code_r0x08004410:
        _dev_err(iVar8,pcVar11,uVar16 & 0xffffffff);
    }
    else {
        puVar1 = arg1_00 + 0x17;
        uVar6 = *puVar9;
        uVar3 = of_property_read_variable_u32_array(*(arg1_00[10] + 0x2f0),"qcom,num-lpg-channels",puVar1,1,0);
        if (uVar3 < 0) {
            uVar16 = uVar3;
            iVar8 = *piVar17;
            pcVar11 = "Failed to get qcom,num-lpg-channels, rc=%d\n";
code_r0x0800438c:
            _dev_err(iVar8,pcVar11,uVar16);
            goto code_r0x08004394;
        }
        if (*puVar1 == 0) {
            _dev_err(*piVar17,"No LPG channels specified\n");
            uVar16 = 0xffffffea;
            goto code_r0x08004404;
        }
        iVar8 = devm_kmalloc(arg1_00[10],*puVar1 * 0x70,0xdc0);
        arg1_00[0xb] = iVar8;
        if (iVar8 == 0) goto code_r0x08004268;
        if (*puVar1 != 0) {
            uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
            uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
            uVar3 = 1;
            while( true ) {
                iVar2 = uVar3 - 1;
                *(iVar8 + iVar2 * 0x70) = arg1_00;
                *(arg1_00[0xb] + iVar2 * 0x70 + 0x4c) = iVar2;
                *(arg1_00[0xb] + iVar2 * 0x70 + 0x50) = uVar6;
                *(arg1_00[0xb] + iVar2 * 0x70 + 0x5c) = 1;
                iVar8 = arg1_00[0xb];
                uStack_6c = 0;
                piVar15 = iVar8 + iVar2 * 0x70;
                mutex_lock(*piVar15 + 0x68);
                uVar4 = regmap_read(*(*piVar15 + 0x48),piVar15[10] + 5,&uStack_6c);
                if (uVar4 < 0) break;
                iVar13 = *piVar15;
                *(iVar8 + iVar2 * 0x70 + 0x5d) = uStack_6c;
                mutex_unlock(iVar13 + 0x68);
                if (*puVar1 <= uVar3) goto code_r0x08003db0;
                iVar8 = arg1_00[0xb];
                uVar6 = uVar6 + 0x100;
                uVar3 = uVar3 + 1;
            }
            uVar16 = uVar4;
            _dev_err(*(*piVar15 + 0x50),"Read addr 0x%x failed, rc=%d\n",piVar15[10] + 5,uVar16);
            mutex_unlock(*piVar15 + 0x68);
            pcVar11 = "Read subtype failed, rc=%d\n";
            iVar8 = *piVar17;
            goto code_r0x0800438c;
        }
code_r0x08003db0:
        iVar8 = of_find_property(*(*piVar17 + 0x2f0),"qcom,pfm-chan-ids",0);
        if (iVar8 == 0) {
code_r0x08003ee4:
            iVar8 = of_find_property(*(*piVar17 + 0x2f0),"nvmem",0);
            if (iVar8 == 0) {
                puVar9 = __of_get_address(*(*piVar17 + 0x2f0),1,0xffffffff,0,0);
                if (puVar9 != NULL) {
                    iVar8 = devm_kmalloc(arg1_00[10],0x50,0xcc0);
                    arg1_00[0xc] = iVar8;
                    if (iVar8 == 0) goto code_r0x08004268;
                    uVar6 = (*puVar9 & 0xff00ff00) >> 8 | (*puVar9 & 0xff00ff) << 8;
                    *(iVar8 + 0x3c) = uVar6 >> 0x10 | uVar6 << 0x10;
                    uVar16 = sym.qpnp_lpg_parse_pattern_dt(arg1_00,0x2f);
                    if (-1 < uVar16) goto code_r0x080040b8;
code_r0x08003fe4:
                    uVar16 = uVar16 & 0xffffffff;
                    goto code_r0x08004394;
                }
code_r0x080040b8:
                uVar6 = *(arg1_00 + 0x17);
                if (*(arg1_00 + 0x19) == '\0') {
code_r0x08004170:
                    if (uVar6 != 0) {
                        uVar6 = 0;
                        do {
                            iVar8 = arg1_00[0xb];
                            iVar13 = iVar8 + uVar6 * 0x70;
                            *(iVar13 + 0x48) = 1;
                            if (*(iVar13 + 0x5f) != '\0') {
                                piVar15 = iVar8 + uVar6 * 0x70;
                                mutex_lock(*piVar15 + 0x68);
                                uVar3 = regmap_write(*(*piVar15 + 0x48),piVar15[10] + 0x50,0x80);
                                if (uVar3 < 0) {
                                    uVar16 = uVar3;
                                    _dev_err(*(*piVar15 + 0x50),"Write addr 0x%x with value 0x%x failed, rc=%d\n",
                                             piVar15[10] + 0x50,0x80,uVar16);
                                    mutex_unlock(*piVar15 + 0x68);
                                    pcVar11 = "Write fm_mode_enable failed, rc=%d\n";
                                    iVar8 = *piVar17;
                                    goto code_r0x08004410;
                                }
                                mutex_unlock(*piVar15 + 0x68);
                            }
                            uVar6 = uVar6 + 1;
                        } while (uVar6 < *puVar1);
                    }
                }
                else if (uVar6 != 0) {
                    uVar3 = 0;
                    do {
                        piVar18 = arg1_00[0xb] + uVar3 * 0x70 + 0x58;
                        if (*piVar18 != 0) {
                            piVar15 = arg1_00[0xb] + uVar3 * 0x70;
                            uStack_6c = uStack_6c & 0xffffff00;
                            iVar13 = *piVar15;
                            iVar8 = iVar13 + 0x68;
                            mutex_lock(iVar8);
                            uVar6 = nvmem_device_write(*(iVar13 + 0xa0),*piVar18,1,&uStack_6c);
                            if (uVar6 < 0) {
                                uVar16 = uVar6;
                                _dev_err(*(iVar13 + 0x50),"write SDAM add 0x%x failed, rc=%d\n",*piVar18,uVar16);
                                mutex_unlock(iVar8);
                                _dev_err(*piVar17,"Write SDAM_REG_LUT_EN failed, rc=%d\n",uVar16);
                            }
                            else {
                                mutex_unlock(iVar8);
                                iVar13 = *piVar15;
                                uStack_6c = uStack_6c & 0xffffff00;
                                iVar8 = iVar13 + 0x68;
                                mutex_lock(iVar8);
                                uVar6 = nvmem_device_write(*(iVar13 + 0xa0),*piVar18 + 6,1,&uStack_6c);
                                if (-1 < uVar6) {
                                    mutex_unlock(iVar8);
                                    uVar6 = *puVar1;
                                    goto code_r0x080040d4;
                                }
                                uVar16 = uVar6;
                                _dev_err(*(iVar13 + 0x50),"write SDAM add 0x%x failed, rc=%d\n",*piVar18 + 6,uVar16);
                                mutex_unlock(iVar8);
                                _dev_err(*(*piVar15 + 0x50),"Write SDAM_REG_PBS_SCRATCH_LUT_COUNTER failed, rc=%d\n",
                                         uVar16);
                            }
                            iVar8 = *piVar17;
                            pcVar11 = "SDAM HW init failed, rc=%d\n";
                            goto code_r0x08004410;
                        }
code_r0x080040d4:
                        uVar3 = uVar3 + 1;
                    } while (uVar3 < uVar6);
                    goto code_r0x08004170;
                }
                *(arg1_00[10] + 0x98) = arg1_00;
                *(arg1_00 + 2) = 0xffffffff;
                *(arg1_00 + 0x14) = *(arg1_00 + 0x17);
                *arg1_00 = arg1_00[10];
                arg1_00[1] = obj.qpnp_lpg_pwm_ops;
                uVar16 = pwmchip_add(arg1_00);
                if (-1 < uVar16) {
                    uVar16 = 0;
                    goto code_r0x08004418;
                }
                uVar16 = uVar16 & 0xffffffff;
                iVar8 = *piVar17;
                pcVar11 = "Add pwmchip failed, rc=%d\n";
                goto code_r0x08004410;
            }
            iVar8 = devm_kmalloc(*piVar17,0x50,0xcc0);
            arg1_00[0xc] = iVar8;
            if (iVar8 == 0) {
code_r0x08004268:
                uVar16 = 0xfffffff4;
                goto code_r0x08004404;
            }
            uVar16 = devm_nvmem_device_get(*piVar17,"ppg_sdam");
            if (uVar16 < 0xfffffffffffff001) {
                uVar12 = 1;
                iVar8 = 0xa8;
                iVar13 = 0xa0;
                uVar10 = uVar16;
code_r0x08003ffc:
                iVar14 = arg1_00[0xc];
                *(arg1_00 + iVar13) = uVar10;
                *(arg1_00 + iVar8) = uVar16;
                *(iVar14 + 0x38) = uVar12;
code_r0x0800400c:
                *(arg1_00 + 0x19) = 1;
                iVar8 = of_find_property(*(arg1_00[10] + 0x2f0),"qcom,pbs-client",0);
                if (iVar8 != 0) {
                    iVar8 = of_parse_phandle(*(arg1_00[10] + 0x2f0),"qcom,pbs-client",0);
                    arg1_00[0x16] = iVar8;
                    if (iVar8 == 0) {
                        _dev_err(*piVar17,"Missing qcom,pbs-client property\n");
                        uVar16 = 0xffffffed;
                        goto code_r0x08004404;
                    }
                }
                uVar6 = of_property_read_variable_u32_array
                                  (*(arg1_00[10] + 0x2f0),"qcom,lut-sdam-base",arg1_00[0xc] + 0x3c,1,0);
                if (uVar6 < 0) {
                    uVar16 = uVar6;
                    iVar8 = *piVar17;
                    pcVar11 = "Read qcom,lut-sdam-base failed, rc=%d\n";
                    goto code_r0x0800438c;
                }
                *(arg1_00[0xc] + 0x48) = 0x1e78;
                of_property_read_variable_u32_array
                          (*(arg1_00[10] + 0x2f0),"qcom,tick-duration-us",arg1_00[0xc] + 0x48,1,0);
                uVar16 = sym.qpnp_lpg_parse_pattern_dt(arg1_00,0x40);
                if (uVar16 < 0) goto code_r0x08003fe4;
                goto code_r0x080040b8;
            }
            uVar10 = devm_nvmem_device_get(*piVar17,"lut_sdam");
            uVar16 = uVar10;
            if ((uVar10 < 0xfffffffffffff001) &&
               (uVar16 = devm_nvmem_device_get(*piVar17,"lpg_chan_sdam"), uVar16 < 0xfffffffffffff001)) {
                uVar12 = 2;
                iVar8 = 0xa0;
                iVar13 = 0xa8;
                goto code_r0x08003ffc;
            }
            if (uVar16 != -0x205) {
                _dev_err(*piVar17,"Failed to get nvmem device, rc=%d\n",uVar16 & 0xffffffff);
                if (uVar16 < 0) goto code_r0x08004394;
                goto code_r0x0800400c;
            }
        }
        else {
            uStack_70 = 0;
            uVar10 = of_property_count_elems_of_size(*(*piVar17 + 0x2f0),"qcom,pfm-chan-ids",4);
            uVar16 = uVar10 & 0xffffffff;
            uVar6 = uVar10;
            if (-1 < uVar6) {
                if ((uVar6 != 0) && (uVar6 <= *puVar1)) {
                    uVar3 = 0;
                    do {
                        uVar4 = of_property_read_u32_index(*(*piVar17 + 0x2f0),"qcom,pfm-chan-ids",uVar3,&uStack_70);
                        if (uVar4 != 0) {
                            iVar8 = *piVar17;
                            pcVar11 = "Read pfm channel %d failed, rc=%d\n";
code_r0x0800434c:
                            _dev_err(iVar8,pcVar11,uVar3,uVar4);
                            goto code_r0x08004350;
                        }
                        uVar4 = *puVar1;
                        if ((uStack_70 == 0) || (uVar4 < uStack_70)) {
                            iVar8 = *piVar17;
                            pcVar11 = "pfm chan id %u is out of range 1~%d\n";
                            uVar3 = uStack_70;
                            goto code_r0x0800434c;
                        }
                        uStack_70 = uStack_70 - 1;
                        if (*(arg1_00[0xb] + uStack_70 * 0x70 + 0x5d) - 0xb < 2) {
                            piVar15 = arg1_00[0xb] + uStack_70 * 0x70;
                            uStack_6c = 0;
                            mutex_lock(*piVar15 + 0x68);
                            uVar5 = regmap_read(*(*piVar15 + 0x48),piVar15[10] + 8,&uStack_6c);
                            uVar4 = uStack_6c;
                            if (uVar5 < 0) {
                                uVar16 = uVar5;
                                _dev_err(*(*piVar15 + 0x50),"Read addr 0x%x failed, rc=%d\n",piVar15[10] + 8,uVar16);
                                mutex_unlock(*piVar15 + 0x68);
                                _dev_err(*piVar17,"Read status1 failed, rc=%d\n",uVar16);
                                goto code_r0x08004354;
                            }
                            mutex_unlock(*piVar15 + 0x68);
                            if ((uVar4 & 1) == 0) {
                                uVar16 = 0xffffffa1;
                                goto code_r0x08004354;
                            }
                            *(arg1_00[0xb] + uStack_70 * 0x70 + 0x5f) = 1;
                        }
                        uVar3 = uVar3 + 1;
                    } while (uVar6 != uVar3);
                    goto code_r0x08003ee4;
                }
code_r0x08004350:
                uVar16 = 0xffffffea;
            }
code_r0x08004354:
            _dev_err(*piVar17,"PFM channels specified incorrectly\n");
code_r0x08004394:
            if (uVar16 != -0x205) goto code_r0x08004404;
        }
        uVar16 = 0xfffffdfb;
    }
code_r0x08004418:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_68) {
        iVar8 = __stack_chk_fail();
        *extraout_x18 = sym.qpnp_lpg_remove;
        iVar8 = *(iVar8 + 0xa8);
        pwmchip_remove(iVar8);
        *(*(iVar8 + 0x50) + 0x98) = 0;
        return 0;
    }
    return uVar16 & 0xffffffff;
}


// ===== sym.qpnp_lpg_remove @ 0x080044f0 (size 64) =====

ulong sym.qpnp_lpg_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0xa8);
    pwmchip_remove(iVar1);
    *(*(iVar1 + 0x50) + 0x98) = 0;
    return 0;
}


// ===== sym.qpnp_lpg_parse_pattern_dt @ 0x08004530 (size 1700) =====

uint64_t * sym.qpnp_lpg_parse_pattern_dt(int64_t arg1,int64_t arg2)

{
    uint32_t *puVar1;
    code *pcVar2;
    uint *puVar3;
    int64_t *piVar4;
    uint32_t *puVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint16_t uVar8;
    ulong uVar9;
    ulong uVar10;
    uint32_t uVar11;
    uint8_t uVar12;
    char cVar13;
    uchar uVar14;
    uint32_t uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    code *pcVar18;
    bool bVar19;
    uint32_t uVar20;
    int iVar21;
    uint32_t uVar22;
    ulong uVar23;
    int64_t iVar24;
    int64_t *piVar25;
    uint64_t uVar26;
    uint64_t uVar27;
    int64_t extraout_x1;
    char *pcVar28;
    uint64_t *puVar29;
    uint64_t uVar30;
    uint64_t uVar31;
    uint64_t uVar32;
    int64_t iVar33;
    int64_t iVar34;
    uint64_t uVar35;
    uint uVar36;
    uint64_t uVar37;
    uint64_t uVar38;
    uint64_t uVar39;
    int64_t iVar40;
    char *pcVar41;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *puVar42;
    uint64_t uVar43;
    uint64_t *puVar44;
    uint64_t uVar45;
    uint64_t *puVar46;
    int64_t iVar47;
    uint64_t uVar48;
    int64_t *unaff_x22;
    uint8_t *unaff_x23;
    int *piVar49;
    uint64_t *unaff_x24;
    uint64_t *puVar50;
    uint32_t *puVar51;
    int64_t unaff_x25;
    uint64_t uVar52;
    ulong unaff_x26;
    int64_t *piVar53;
    int64_t iVar54;
    uint64_t unaff_x28;
    ulong unaff_x30;
    uint64_t uVar55;
    uchar auVar56 [16];
    uint64_t uStack_210;
    uint32_t auStack_1f0 [2];
    ulong uStack_1e8;
    int64_t aiStack_1e0 [32];
    uchar *puStack_e0;
    code *pcStack_d8;
    uint64_t uStack_d0;
    int64_t *piStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uint64_t *puStack_b0;
    uint8_t *puStack_a8;
    int64_t *piStack_a0;
    uint64_t *puStack_98;
    uint64_t *puStack_90;
    int64_t iStack_88;
    uint uStack_74;
    uint32_t uStack_70;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar24 = sp_el0;
    puVar44 = arg2 & 0xffffffff;
    iStack_68 = *(iVar24 + 0x5e0);
    uStack_74 = 0;
    uStack_70 = 0;
    **(arg1 + 0x60) = arg1;
    __mutex_init(*(arg1 + 0x60) + 8,"&chip->lut->lock",reloc.qpnp_lpg_probe.dc31bff6ac2356f2ace3cf841d8a55bf.cfi_jt);
    piVar53 = arg1 + 0x50;
    uVar20 = of_property_count_elems_of_size(*(*piVar53 + 0x2f0),"qcom,lut-patterns",4);
    puVar46 = uVar20;
    if (uVar20 < 0) {
        iVar24 = *piVar53;
        pcVar41 = "Read qcom,lut-patterns failed, rc=%d\n";
code_r0x08004a48:
        puVar50 = puVar46;
        _dev_err(iVar24,pcVar41);
    }
    else {
        uVar22 = arg2;
        if (uVar22 < uVar20) {
            iVar24 = *piVar53;
            pcVar41 = "qcom,lut-patterns length %d exceed max %d\n";
            puVar50 = uVar20;
            uVar30 = arg2 & 0xffffffff;
code_r0x08004a34:
            _dev_err(iVar24,pcVar41,puVar50,uVar30);
            puVar46 = 0xffffffea;
        }
        else {
            uVar23 = devm_kmalloc(*(arg1 + 0x50),(arg2 & 0xffffffffU) << 2,0xdc0);
            *(*(arg1 + 0x60) + 0x40) = uVar23;
            puVar29 = *(*(arg1 + 0x60) + 0x40);
            if (puVar29 == NULL) {
code_r0x080049b4:
                puVar50 = puVar29;
                puVar46 = 0xfffffff4;
            }
            else {
                uVar20 = of_property_read_variable_u32_array
                                   (*(*piVar53 + 0x2f0),"qcom,lut-patterns",puVar29,uVar20,0);
                puVar46 = uVar20;
                iVar24 = *piVar53;
                if (uVar20 < 0) {
                    pcVar41 = "Get qcom,lut-patterns failed, rc=%d\n";
                    goto code_r0x08004a48;
                }
                uVar23 = *(iVar24 + 0x2f0);
                iVar24 = of_get_next_available_child(uVar23,0);
                if (iVar24 != 0) {
                    unaff_x22 = NULL;
                    do {
                        iVar24 = of_get_next_available_child(uVar23,iVar24);
                        uVar20 = unaff_x22 - 1;
                        unaff_x22 = uVar20;
                    } while (iVar24 != 0);
                    if (uVar20 != 0) {
                        piVar25 = of_get_next_available_child(*(*(arg1 + 0x50) + 0x2f0),0);
                        if (piVar25 != NULL) {
                            unaff_x26 = 0x70;
                            unaff_x22 = piVar25;
                            do {
                                puVar29 = &uStack_70;
                                uVar20 = of_property_read_variable_u32_array
                                                   (unaff_x22,"qcom,lpg-chan-id",puVar29,1,0);
                                if (uVar20 < 0) {
                                    puVar46 = uVar20;
                                    puVar50 = *unaff_x22;
                                    _dev_err(*piVar53,"Get qcom,lpg-chan-id failed for node %s, rc=%d\n",puVar50,
                                             puVar46);
                                    goto code_r0x080049b8;
                                }
                                puVar50 = uStack_70;
                                uVar30 = *(arg1 + 0xb8);
                                unaff_x24 = puVar50;
                                if ((uStack_70 == 0) || (*(arg1 + 0xb8) < uStack_70)) {
                                    iVar24 = *piVar53;
                                    pcVar41 = "lpg-chann-id %d is out of range 1~%d\n";
                                    goto code_r0x08004a34;
                                }
                                unaff_x25 = *(arg1 + 0x58);
                                unaff_x28 = uStack_70 - 1;
                                if (*(unaff_x25 + unaff_x28 * 0x70 + 0x5f) != '\0') {
                                    iVar24 = *piVar53;
                                    pcVar41 = "Cannot configure ramp for PFM-enabled channel %d\n";
                                    goto code_r0x08004a04;
                                }
                                if (*(arg1 + 200) != '\0') {
                                    uVar20 = of_property_read_variable_u32_array
                                                       (unaff_x22,"qcom,lpg-sdam-base",&uStack_74,1,0);
                                    if (-1 < uVar20) {
                                        *(*(arg1 + 0x58) + (uStack_70 - 1) * 0x70 + 0x58) = uStack_74;
                                        puVar50 = uStack_70;
                                        unaff_x25 = *(arg1 + 0x58);
                                        unaff_x28 = uStack_70 - 1;
                                        goto code_r0x08004710;
                                    }
                                    puVar46 = uVar20;
                                    iVar24 = *piVar53;
                                    pcVar41 = "get qcom,lpg-sdam-base failed for lpg%d, rc=%d\n";
code_r0x08004b88:
                                    puVar50 = uStack_70;
                                    _dev_err(iVar24,pcVar41,puVar50,puVar46);
                                    goto code_r0x080049b8;
                                }
code_r0x08004710:
                                uStack_6c = 0;
                                uVar20 = of_property_read_variable_u32_array
                                                   (unaff_x22,"qcom,ramp-step-ms",&uStack_6c,1,0);
                                unaff_x24 = puVar50;
                                if (uVar20 < 0) {
                                    puVar46 = uVar20;
                                    iVar24 = *piVar53;
                                    pcVar41 = "get qcom,ramp-step-ms failed for lpg%d, rc=%d\n";
code_r0x08004b3c:
                                    _dev_err(iVar24,pcVar41,puVar50,puVar46);
code_r0x08004b78:
                                    iVar24 = *piVar53;
                                    pcVar41 = "Parsing ramp props failed for lpg%d, rc=%d\n";
                                    goto code_r0x08004b88;
                                }
                                *(unaff_x25 + unaff_x28 * 0x70 + 0x28) = uStack_6c;
                                uVar20 = of_property_read_variable_u32_array
                                                   (unaff_x22,"qcom,ramp-low-index",&uStack_6c,1,0);
                                if (uVar20 < 0) {
                                    puVar46 = uVar20;
                                    iVar24 = *piVar53;
                                    pcVar41 = "get qcom,ramp-low-index failed for lpg%d, rc=%d\n";
                                    goto code_r0x08004b3c;
                                }
                                unaff_x23 = unaff_x25 + unaff_x28 * 0x70 + 0x2d;
                                *unaff_x23 = uStack_6c;
                                if (uVar22 <= (uStack_6c & 0xff)) {
                                    iVar24 = *piVar53;
                                    pcVar41 = "qcom,ramp-low-index should less than max %d\n";
code_r0x08004b58:
                                    _dev_err(iVar24,pcVar41,arg2 & 0xffffffff);
code_r0x08004b74:
                                    puVar46 = 0xffffffea;
                                    goto code_r0x08004b78;
                                }
                                uVar20 = of_property_read_variable_u32_array
                                                   (unaff_x22,"qcom,ramp-high-index",&uStack_6c,1,0);
                                if (uVar20 < 0) {
                                    puVar46 = uVar20;
                                    iVar24 = *piVar53;
                                    pcVar41 = "get qcom,ramp-high-index failed for lpg%d, rc=%d\n";
                                    goto code_r0x08004b3c;
                                }
                                uVar20 = uStack_6c & 0xff;
                                *(unaff_x25 + unaff_x28 * 0x70 + 0x2c) = uStack_6c;
                                if (uVar22 < uVar20) {
                                    iVar24 = *piVar53;
                                    pcVar41 = "qcom,ramp-high-index shouldn\'t exceed max %d\n";
                                    goto code_r0x08004b58;
                                }
                                uVar12 = *unaff_x23;
                                if ((*(arg1 + 200) != '\0') && (uVar20 <= uVar12)) {
                                    _dev_err(*piVar53,
                                             "high-index(%d) should be larger than low-index(%d) when SDAM used\n");
                                    goto code_r0x08004b74;
                                }
                                iVar47 = unaff_x25 + unaff_x28 * 0x70;
                                iVar21 = (uVar20 - uVar12) + 1;
                                *(iVar47 + 0x40) = iVar21;
                                iVar24 = *(*(arg1 + 0x60) + 0x40);
                                *(iVar47 + 0x54) = iVar21;
                                *(iVar47 + 0x38) = iVar24 + uVar12 * 4;
                                iVar24 = of_find_property(unaff_x22,"qcom,ramp-pattern-repeat",0);
                                *(iVar47 + 0x2a) = 0;
                                *(iVar47 + 0x2f) = iVar24 != 0;
                                iVar21 = of_property_read_variable_u32_array
                                                   (unaff_x22,"qcom,ramp-pause-hi-count",&uStack_6c,1,0);
                                if (-1 < iVar21) {
                                    if ((*(arg1 + 200) != '\0') && (0xfe < uStack_6c)) goto code_r0x08004b74;
                                    *(iVar47 + 0x2a) = uStack_6c;
                                }
                                unaff_x23 = unaff_x25 + unaff_x28 * 0x70 + 0x2b;
                                *unaff_x23 = 0;
                                uVar20 = of_property_read_variable_u32_array
                                                   (unaff_x22,"qcom,ramp-pause-lo-count",&uStack_6c,1,0);
                                puVar46 = uVar20;
                                if (-1 < uVar20) {
                                    if ((*(arg1 + 200) != '\0') && (0xfe < uStack_6c)) goto code_r0x08004b74;
                                    *unaff_x23 = uStack_6c;
                                }
                                if (*(arg1 + 200) == '\0') {
                                    iVar24 = of_find_property(unaff_x22,"qcom,ramp-from-low-to-high",0);
                                    unaff_x23 = unaff_x25 + unaff_x28 * 0x70;
                                    unaff_x23[0x2e] = iVar24 != 0;
                                    iVar24 = of_find_property(unaff_x22,"qcom,ramp-toggle",0);
                                    unaff_x23[0x30] = iVar24 != 0;
                                    if (uVar20 < 0) goto code_r0x08004b78;
                                }
                                unaff_x22 = of_get_next_available_child(*(*piVar53 + 0x2f0),unaff_x22);
                            } while (unaff_x22 != NULL);
                        }
                        puVar50 = 0x4;
                        uVar20 = of_property_count_elems_of_size(*(*piVar53 + 0x2f0),"qcom,sync-channel-ids");
                        if (-1 < uVar20) {
                            puVar44 = uVar20;
                            if (*(arg1 + 0xb8) < uVar20) {
                                puVar50 = puVar44;
                                _dev_err(*piVar53,"qcom,sync-channel-ids has too many channels: %d\n");
                                puVar46 = 0xffffffea;
                                goto code_r0x080049b8;
                            }
                            puVar29 = 0xdc0;
                            puVar50 = devm_kmalloc(*(arg1 + 0x50),*(arg1 + 0xb8) << 2);
                            *(arg1 + 0x98) = puVar50;
                            if (puVar50 == NULL) goto code_r0x080049b4;
                            uVar22 = of_property_read_variable_u32_array
                                               (*(*piVar53 + 0x2f0),"qcom,sync-channel-ids",puVar50,puVar44,0);
                            if (uVar22 < 0) {
                                puVar46 = uVar22;
                                iVar24 = *piVar53;
                                pcVar41 = "Get qcom,sync-channel-ids failed, rc=%d\n";
                                goto code_r0x08004a48;
                            }
                            if (uVar20 != 0) {
                                puVar50 = NULL;
                                piVar49 = *(arg1 + 0x98);
                                do {
                                    uVar22 = piVar49[puVar50];
                                    uVar30 = uVar22;
                                    if ((uVar22 == 0) || (*(arg1 + 0xb8) < uVar22)) {
                                        iVar24 = *piVar53;
                                        pcVar41 = "lpg_group[%d]: %d is not a valid channel\n";
                                        goto code_r0x08004a34;
                                    }
                                    uVar22 = puVar50 + 1;
                                    puVar50 = uVar22;
                                } while (uVar20 != uVar22);
                                if (1 < uVar20) {
                                    iVar24 = *(arg1 + 0x58) + (*piVar49 - 1) * 0x70;
                                    iVar47 = *(arg1 + 0x58) + (piVar49[1] - 1) * 0x70;
                                    uVar9 = *(iVar24 + 0x40);
                                    uVar23 = *(iVar24 + 0x28);
                                    uVar10 = *(iVar24 + 0x30);
                                    *(iVar47 + 0x38) = *(iVar24 + 0x38);
                                    *(iVar47 + 0x40) = uVar9;
                                    *(iVar47 + 0x28) = uVar23;
                                    *(iVar47 + 0x30) = uVar10;
                                    if (uVar20 != 2) {
                                        uVar22 = 2;
                                        do {
                                            puVar46 = NULL;
                                            iVar47 = uVar22;
                                            uVar22 = uVar22 + 1;
                                            uVar9 = *(iVar24 + 0x30);
                                            iVar47 = *(arg1 + 0x58) + (*(*(arg1 + 0x98) + iVar47 * 4) - 1) * 0x70;
                                            uVar23 = *(iVar24 + 0x38);
                                            uVar10 = *(iVar24 + 0x40);
                                            *(iVar47 + 0x28) = *(iVar24 + 0x28);
                                            *(iVar47 + 0x30) = uVar9;
                                            *(iVar47 + 0x38) = uVar23;
                                            *(iVar47 + 0x40) = uVar10;
                                        } while (uVar20 != uVar22);
                                        goto code_r0x080049b8;
                                    }
                                }
                            }
                        }
                        puVar46 = NULL;
                        goto code_r0x080049b8;
                    }
                }
                iVar24 = *piVar53;
                pcVar41 = "No ramp configuration for any LPG\n";
code_r0x08004a04:
                puVar50 = puVar29;
                _dev_err(iVar24,pcVar41);
                puVar46 = 0xffffffea;
            }
        }
    }
code_r0x080049b8:
    iVar24 = sp_el0;
    if (*(iVar24 + 0x5e0) == iStack_68) {
        return puVar46;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.qpnp_lpg_pwm_apply;
    puStack_e0 = &stack0xffffffffffffffa0;
    pcStack_d8 = sym.qpnp_lpg_pwm_apply;
    uStack_d0 = unaff_x28;
    piStack_c8 = piVar53;
    uStack_c0 = unaff_x26;
    iStack_b8 = unaff_x25;
    puStack_b0 = unaff_x24;
    puStack_a8 = unaff_x23;
    piStack_a0 = unaff_x22;
    puStack_98 = puVar46;
    puStack_90 = puVar44;
    iStack_88 = arg1;
    iVar24 = sp_el0;
    aiStack_1e0[0x1e] = *(iVar24 + 0x5e0);
    uVar30 = *puVar50;
    uVar27 = puVar50[1];
    if ((uVar30 != *(extraout_x1 + 0x38)) || (uVar27 != *(extraout_x1 + 0x40))) {
        puVar42 = *(extraout_x1 + 0x18);
        uVar20 = *(extraout_x1 + 0x10);
        uVar45 = uVar20;
        uVar22 = *(puVar42 + 0x17);
        if (uVar20 < uVar22) {
            iVar24 = puVar42[0xb];
            piVar53 = iVar24 + uVar45 * 0x70;
            if (piVar53 != NULL) {
                if (uVar30 < uVar27) {
                    _dev_err(*(*piVar53 + 0x50),"Duty %lluns is larger than period %lluns\n",uVar27,uVar30);
                    puVar44 = 0xffffffea;
                    goto code_r0x08005ba4;
                }
                puVar46 = iVar24 + uVar45 * 0x70 + 0x60;
                uVar43 = *puVar46;
                if (uVar43 == uVar30) {
code_r0x08004f9c:
                    if (*(iVar24 + uVar45 * 0x70 + 0x68) == uVar27) {
                        pcVar41 = iVar24 + uVar45 * 0x70 + 0x5f;
                        if (*pcVar41 != '\0') goto code_r0x08004fd4;
code_r0x08005058:
                        uVar43 = sym.qpnp_lpg_set_pwm_config(piVar53);
                        if (-1 < uVar43) {
code_r0x0800589c:
                            *puVar46 = uVar30;
                            *(iVar24 + uVar45 * 0x70 + 0x68) = uVar27;
                            *(extraout_x1 + 0x40) = puVar50[1];
                            *(extraout_x1 + 0x38) = *puVar50;
                            goto code_r0x080058c0;
                        }
                        puVar44 = uVar43 & 0xffffffff;
                    }
                    else {
code_r0x08004fc4:
                        pcVar41 = iVar24 + uVar45 * 0x70 + 0x5f;
                        if (*pcVar41 == '\0') {
                            iVar47 = iVar24 + uVar45 * 0x70;
                            uVar20 = *(iVar47 + 8);
                            uVar22 = -1 << (uVar20 & 0x1f);
                            uVar15 = 0;
                            if (uVar30 != 0) {
                                uVar15 = (uVar27 << (uVar20 & 0x3f)) / uVar30;
                            }
                            uVar8 = uVar15;
                            if ((~uVar22 & 0xffff) < (uVar15 & 0xffff)) {
                                uVar8 = ~uVar22;
                            }
                            *(iVar47 + 0x18) = uVar8;
                            goto code_r0x08005058;
                        }
code_r0x08004fd4:
                        iVar47 = iVar24 + uVar45 * 0x70;
                        cVar13 = *(iVar47 + 0x5d);
                        iVar21 = *(iVar47 + 0xc);
                        if (cVar13 == '\f') {
                            if (iVar21 == 0x400) {
code_r0x08005020:
                                iVar21 = 0;
                            }
                            else if (iVar21 == 0x8000) {
code_r0x08005734:
                                iVar21 = 1;
                            }
                            else {
                                if (iVar21 != 76800000) goto code_r0x0800564c;
                                iVar21 = 3;
                            }
                        }
                        else {
                            if (iVar21 == 0x400) goto code_r0x08005020;
                            if (iVar21 == 0x8000) goto code_r0x08005734;
code_r0x0800564c:
                            if (iVar21 == 19200000) {
                                iVar21 = 2;
                            }
                            else {
                                iVar21 = -0x16;
                            }
                        }
                        puVar44 = 0xffffffea;
                        uVar20 = *(iVar24 + uVar45 * 0x70 + 0x14);
                        if ((uVar20 < 8) && (-1 < iVar21)) {
                            uVar36 = 7;
                            if (cVar13 != '\f') {
                                uVar36 = 3;
                            }
                            mutex_lock(3,*piVar53 + 0x68);
                            piVar49 = iVar24 + uVar45 * 0x70 + 0x50;
                            uVar22 = regmap_update_bits_base
                                               (*(*piVar53 + 0x48),*piVar49 + 0x41,uVar36,iVar21 + 1,0,0,0);
                            if (uVar22 < 0) {
                                puVar44 = uVar22;
                                _dev_err(*(*piVar53 + 0x50),
                                         "Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",*piVar49 + 0x41
                                         ,iVar21 + 1,uVar36,puVar44);
                                mutex_unlock(*piVar53 + 0x68);
                                iVar47 = *piVar53;
                                pcVar28 = "Write LPG_PWM_SIZE_CLK failed, rc=%d\n";
code_r0x08005b24:
                                _dev_err(*(iVar47 + 0x50),pcVar28,puVar44);
                                goto code_r0x08005b34;
                            }
                            mutex_unlock(*piVar53 + 0x68);
                            mutex_lock(*piVar53 + 0x68);
                            uVar22 = regmap_update_bits_base(*(*piVar53 + 0x48),*piVar49 + 0x42,7,uVar20,0,0,0);
                            if (uVar22 < 0) {
                                puVar44 = uVar22;
                                _dev_err(*(*piVar53 + 0x50),
                                         "Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",*piVar49 + 0x42
                                         ,uVar20,7,puVar44);
                                mutex_unlock(*piVar53 + 0x68);
                                iVar47 = *piVar53;
                                pcVar28 = "Write LPG_PWM_FREQ_PREDIV_CLK failed, rc=%d\n";
                                goto code_r0x08005b24;
                            }
                            mutex_unlock(*piVar53 + 0x68);
                            uVar14 = *(iVar24 + uVar45 * 0x70 + 0x18);
                            mutex_lock(*piVar53 + 0x68);
                            uVar20 = regmap_update_bits_base(*(*piVar53 + 0x48),*piVar49 + 0x44,0xff,uVar14,0,0,0)
                            ;
                            if (uVar20 < 0) {
                                puVar44 = uVar20;
                                _dev_err(*(*piVar53 + 0x50),
                                         "Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",*piVar49 + 0x44
                                         ,uVar14,0xff,puVar44);
                                mutex_unlock(*piVar53 + 0x68);
                                iVar47 = *piVar53;
                                pcVar28 = "Write LPG_PWM_VALUE_LSB failed, rc=%d\n";
                                goto code_r0x08005b24;
                            }
                            mutex_unlock(*piVar53 + 0x68);
                            mutex_lock(*piVar53 + 0x68);
                            uVar20 = regmap_write(*(*piVar53 + 0x48),*piVar49 + 0x47,1);
                            if (uVar20 < 0) {
                                puVar44 = uVar20;
                                _dev_err(*(*piVar53 + 0x50),"Write addr 0x%x with value 0x%x failed, rc=%d\n",
                                         *piVar49 + 0x47,1,puVar44);
                                mutex_unlock(*piVar53 + 0x68);
                                iVar47 = *piVar53;
                                pcVar28 = "Write LPG_PWM_SYNC failed, rc=%d\n";
                                goto code_r0x08005b24;
                            }
                            mutex_unlock(*piVar53 + 0x68);
                            goto code_r0x0800589c;
                        }
                    }
code_r0x08005b34:
                    uVar23 = 0x800050a;
                    if (*pcVar41 != '\0') {
                        uVar23 = 0x8000bc5;
                    }
                    _dev_err(*(*piVar53 + 0x50),"Config %s failed for channel %d, rc=%d\n",uVar23,
                             *(iVar24 + uVar45 * 0x70 + 0x4c),puVar44);
                    goto code_r0x08005ba4;
                }
                piVar25 = iVar24 + uVar45 * 0x70;
                puVar1 = piVar25 + 1;
                if (*(piVar25 + 0x5f) != '\0') {
                    cVar13 = *(piVar25 + 0x5d);
                    uVar7 = 0x10;
                    pcVar18 = obj.clk_period_ns_hi_res;
                    if (cVar13 != '\f') {
                        uVar7 = 0xc;
                        pcVar18 = obj.clk_period_ns;
                    }
                    uVar39 = 0;
                    uVar20 = 0;
                    uVar37 = 0;
                    piVar25 = iVar24 + uVar45 * 0x70 + 0x20;
                    uVar6 = 3;
                    if (cVar13 == '\f') {
                        uVar6 = 4;
                    }
                    uVar22 = 0xffffffea;
                    uVar35 = 0xffffffffffffffff;
                    do {
                        if (uVar7 >> 2 == uVar39) goto code_r0x08005a18;
                        uVar15 = *(pcVar18 + uVar39 * 4);
                        iVar47 = uVar15;
                        uVar38 = 0;
                        if (uVar15 != 0) {
                            uVar38 = uVar30 / uVar15;
                        }
                        uVar15 = (uVar38 >> 1) - 1;
                        if (uVar15 < 0x100) {
                            iVar33 = (uVar38 & 0x1fffffffe) * iVar47;
                            uVar31 = uVar30 - iVar33;
                            uVar32 = -uVar31;
                            if (-1 < uVar31) {
                                uVar32 = uVar31;
                            }
                            if (uVar32 < uVar35) {
                                uVar20 = 0;
                                uVar37 = uVar39 & 0xffffffff;
                                *piVar25 = iVar33;
                                uVar35 = uVar32;
                                uVar22 = uVar15;
                            }
                        }
                        else {
                            uVar32 = 0xffffffffffffffff;
                        }
                        uVar15 = (uVar38 >> 2) - 1;
                        uVar31 = uVar32;
                        if (uVar15 < 0x100) {
                            iVar33 = (uVar38 & 0x3fffffffc) * iVar47;
                            uVar16 = uVar30 - iVar33;
                            uVar31 = -uVar16;
                            if (-1 < uVar16) {
                                uVar31 = uVar16;
                            }
                            if (uVar31 < uVar35) {
                                uVar20 = 1;
                                uVar37 = uVar39 & 0xffffffff;
                                *piVar25 = iVar33;
                                uVar35 = uVar31;
                                uVar22 = uVar15;
                            }
                            if (uVar31 <= uVar32) goto code_r0x08004d94;
                        }
                        else {
code_r0x08004d94:
                            uVar15 = (uVar38 >> 3) - 1;
                            uVar32 = uVar31;
                            if (uVar15 < 0x100) {
                                iVar33 = (uVar38 & 0x7fffffff8) * iVar47;
                                uVar16 = uVar30 - iVar33;
                                uVar32 = -uVar16;
                                if (-1 < uVar16) {
                                    uVar32 = uVar16;
                                }
                                if (uVar32 < uVar35) {
                                    uVar20 = 2;
                                    uVar37 = uVar39 & 0xffffffff;
                                    *piVar25 = iVar33;
                                    uVar35 = uVar32;
                                    uVar22 = uVar15;
                                }
                                if (uVar31 < uVar32) goto code_r0x08004ce0;
                            }
                            uVar15 = (uVar38 >> 4) - 1;
                            uVar31 = uVar32;
                            if (uVar15 < 0x100) {
                                iVar33 = (uVar38 & 0xffffffff0) * iVar47;
                                uVar16 = uVar30 - iVar33;
                                uVar31 = -uVar16;
                                if (-1 < uVar16) {
                                    uVar31 = uVar16;
                                }
                                if (uVar31 < uVar35) {
                                    uVar20 = 3;
                                    uVar37 = uVar39 & 0xffffffff;
                                    *piVar25 = iVar33;
                                    uVar35 = uVar31;
                                    uVar22 = uVar15;
                                }
                                if (uVar32 < uVar31) goto code_r0x08004ce0;
                            }
                            uVar15 = (uVar38 >> 5) - 1;
                            uVar32 = uVar31;
                            if (uVar15 < 0x100) {
                                iVar33 = (uVar38 & 0x1fffffffe0) * iVar47;
                                uVar16 = uVar30 - iVar33;
                                uVar32 = -uVar16;
                                if (-1 < uVar16) {
                                    uVar32 = uVar16;
                                }
                                if (uVar32 < uVar35) {
                                    uVar20 = 4;
                                    uVar37 = uVar39 & 0xffffffff;
                                    *piVar25 = iVar33;
                                    uVar35 = uVar32;
                                    uVar22 = uVar15;
                                }
                                if (uVar31 < uVar32) goto code_r0x08004ce0;
                            }
                            uVar15 = (uVar38 >> 6) - 1;
                            uVar31 = uVar32;
                            if (uVar15 < 0x100) {
                                iVar33 = (uVar38 & 0x3fffffffc0) * iVar47;
                                uVar16 = uVar30 - iVar33;
                                uVar31 = -uVar16;
                                if (-1 < uVar16) {
                                    uVar31 = uVar16;
                                }
                                if (uVar31 < uVar35) {
                                    uVar20 = 5;
                                    uVar37 = uVar39 & 0xffffffff;
                                    *piVar25 = iVar33;
                                    uVar35 = uVar31;
                                    uVar22 = uVar15;
                                }
                                if (uVar32 < uVar31) goto code_r0x08004ce0;
                            }
                            uVar15 = (uVar38 >> 7) - 1;
                            if (uVar15 < 0x100) {
                                iVar33 = (uVar38 & 0x7fffffff80) * iVar47;
                                uVar16 = uVar30 - iVar33;
                                uVar32 = -uVar16;
                                if (-1 < uVar16) {
                                    uVar32 = uVar16;
                                }
                                if (uVar32 < uVar35) {
                                    uVar20 = 6;
                                    uVar37 = uVar39 & 0xffffffff;
                                    *piVar25 = iVar33;
                                    uVar35 = uVar32;
                                    uVar22 = uVar15;
                                }
                                if (uVar31 < uVar32) goto code_r0x08004ce0;
                            }
                            uVar15 = (uVar38 >> 8) - 1;
                            if (uVar15 < 0x100) {
                                iVar47 = (uVar38 & 0xffffffff00) * iVar47;
                                uVar32 = uVar30 - iVar47;
                                uVar38 = -uVar32;
                                if (-1 < uVar32) {
                                    uVar38 = uVar32;
                                }
                                if (uVar38 < uVar35) {
                                    uVar20 = 7;
                                    uVar37 = uVar39 & 0xffffffff;
                                    *piVar25 = iVar47;
                                    uVar35 = uVar38;
                                    uVar22 = uVar15;
                                }
                            }
                        }
code_r0x08004ce0:
                        uVar39 = uVar39 + 1;
                    } while (uVar6 != uVar39);
                    if (uVar22 < 0) {
                        _printk(0x800094a,"__qpnp_lpg_calc_pfm_period",uVar30);
                        puVar44 = 0xffffffea;
                        goto code_r0x08005ba4;
                    }
                    if (uVar7 <= uVar37 * 4) {
code_r0x08005a18:
    //WARNING: Does not return
                        pcVar18 = SoftwareBreakpoint(1,0x8005a1c);
                        (*pcVar18)();
                    }
                    pcVar18 = obj.clk_freq_hz_hi_res;
                    if (cVar13 != '\f') {
                        pcVar18 = obj.clk_freq_hz;
                    }
                    uVar36 = *(pcVar18 + uVar37 * 4);
                    iVar47 = iVar24 + uVar45 * 0x70;
                    *(iVar47 + 0x14) = *(obj.pwm_exponent + uVar20 * 4);
                    *(iVar47 + 0xc) = uVar36;
                    *(iVar47 + 0x18) = uVar22;
code_r0x08004f94:
                    if (uVar43 == uVar30) goto code_r0x08004f9c;
                    goto code_r0x08004fc4;
                }
                bVar19 = *(piVar25 + 0x5d) == '\f';
                iVar47 = 3;
                if (bVar19) {
                    iVar47 = 4;
                }
                uVar7 = 0x20;
                if (!bVar19) {
                    uVar7 = 8;
                }
                pcVar18 = obj.pwm_hi_res_size;
                if (!bVar19) {
                    pcVar18 = obj.pwm_size;
                }
                uVar39 = *(*piVar25 + 200);
                pcVar2 = obj.clk_freq_hz_hi_res;
                uVar6 = 0x10;
                if (!bVar19) {
                    uVar6 = 0xc;
                    pcVar2 = obj.clk_freq_hz;
                }
                uVar35 = 0xffffffffffffffff;
                uVar37 = 8;
                if (!bVar19 || uVar39 != 0) {
                    uVar37 = 2;
                }
                aiStack_1e0[0x1c] = 0;
                aiStack_1e0[0x1d] = 0;
                aiStack_1e0[0x1a] = 0;
                aiStack_1e0[0x1b] = 0;
                aiStack_1e0[0x18] = 0;
                aiStack_1e0[0x19] = 0;
                aiStack_1e0[0x16] = 0;
                aiStack_1e0[0x17] = 0;
                aiStack_1e0[0x14] = 0;
                aiStack_1e0[0x15] = 0;
                aiStack_1e0[0x12] = 0;
                aiStack_1e0[0x13] = 0;
                aiStack_1e0[0x10] = 0;
                aiStack_1e0[0x11] = 0;
                aiStack_1e0[0xe] = 0;
                aiStack_1e0[0xf] = 0;
                aiStack_1e0[0xc] = 0;
                aiStack_1e0[0xd] = 0;
                aiStack_1e0[10] = 0;
                aiStack_1e0[0xb] = 0;
                aiStack_1e0[8] = 0;
                aiStack_1e0[9] = 0;
                aiStack_1e0[6] = 0;
                aiStack_1e0[7] = 0;
                aiStack_1e0[4] = 0;
                aiStack_1e0[5] = 0;
                uStack_210 = 0xffffffffffffffff;
                aiStack_1e0[2] = 0;
                aiStack_1e0[3] = 0;
                aiStack_1e0[0] = 0;
                aiStack_1e0[1] = 0;
                auStack_1f0[0] = 0;
                auStack_1f0[1] = 0;
                uStack_1e8 = 0;
                do {
                    if (uVar7 <= uVar39 * 4) goto code_r0x08005a18;
                    uVar55 = uVar39 * 0x20;
                    uVar20 = *(pcVar18 + uVar39 * 4);
                    puVar5 = auStack_1f0 + uVar39 * 8;
                    uVar38 = uVar39 << 5 | 4;
                    uVar32 = uVar39 << 5 | 8;
                    puVar51 = puVar5 | 4;
                    piVar49 = &uStack_1e8 + uVar39 * 4;
                    uVar48 = uVar30 >> (uVar20 & 0x3f);
                    uVar31 = uVar39 << 5 | 0xc;
                    puVar3 = &uStack_1e8 + uVar55 + 4;
                    uVar16 = uVar39 << 5 | 0x18;
                    piVar4 = aiStack_1e0 + uVar39 * 4 + 1;
                    iVar33 = iVar47;
                    do {
                        iVar40 = iVar33 + -1;
                        iVar54 = 0;
                        do {
                            if (iVar54 == 0x10) goto code_r0x08005c20;
                            if (uVar6 <= iVar40 * 4) goto code_r0x08005a18;
                            uVar22 = *(pcVar2 + iVar40 * 4);
                            uVar15 = 0;
                            if (uVar22 != 0) {
                                uVar15 = 1000000000 / uVar22;
                            }
                            uVar26 = uVar15;
                            iVar21 = *(obj.clk_prediv + iVar54);
                            iVar34 = iVar21;
                            uVar52 = uVar48 - uVar26 * iVar34;
                            uVar17 = -uVar52;
                            if (-1 < uVar52) {
                                uVar17 = uVar52;
                            }
                            if (uVar17 < uVar35) {
                                if (7 < uVar39) goto code_r0x08005c20;
                                if (((0x100 < uVar38) || (*puVar51 = uVar22, 0x100 < uVar32)) ||
                                   ((*piVar49 = iVar21, 0x100 < uVar31 ||
                                    ((*puVar3 = 0, 0xff < uVar55 || (*puVar5 = uVar20, 0x100 < uVar16))))))
                                goto code_r0x08005a18;
                                *piVar4 = uVar26 * iVar34;
                                uVar35 = uVar48 + iVar34 * uVar26 * -2;
                                uVar52 = -uVar35;
                                if (-1 < uVar35) {
                                    uVar52 = uVar35;
                                }
                                uVar35 = uVar17;
                                if (uVar52 < uVar17) {
                                    *puVar51 = uVar22;
                                    *piVar49 = iVar21;
                                    *puVar5 = uVar20;
                                    *puVar3 = 1;
code_r0x08005314:
                                    *piVar4 = iVar34 * uVar26 * 2;
                                    uVar35 = uVar52;
                                }
                            }
                            else {
                                uVar17 = uVar48 + iVar34 * uVar26 * -2;
                                uVar52 = -uVar17;
                                if (-1 < uVar17) {
                                    uVar52 = uVar17;
                                }
                                if (uVar52 < uVar35) {
                                    if (uVar39 < 8) {
                                        if ((((uVar38 < 0x101) && (*puVar51 = uVar22, uVar32 < 0x101)) &&
                                            (*piVar49 = iVar21, uVar31 < 0x101)) &&
                                           ((*puVar3 = 1, uVar55 < 0x100 && (*puVar5 = uVar20, uVar16 < 0x101))))
                                        goto code_r0x08005314;
                                        goto code_r0x08005a18;
                                    }
                                    goto code_r0x08005c20;
                                }
                            }
                            iVar34 = iVar34 * uVar26;
                            uVar52 = uVar48 + iVar34 * -4;
                            uVar17 = -uVar52;
                            if (-1 < uVar52) {
                                uVar17 = uVar52;
                            }
                            if (uVar17 < uVar35) {
                                if (7 < uVar39) goto code_r0x08005c20;
                                if (((0x100 < uVar38) || (*puVar51 = uVar22, 0x100 < uVar32)) ||
                                   ((*piVar49 = iVar21, 0x100 < uVar31 ||
                                    ((*puVar3 = 2, 0xff < uVar55 || (*puVar5 = uVar20, 0x100 < uVar16))))))
                                goto code_r0x08005a18;
                                uVar35 = uVar48 + iVar34 * -8;
                                *piVar4 = iVar34 * 4;
                                uVar52 = -uVar35;
                                if (-1 < uVar35) {
                                    uVar52 = uVar35;
                                }
                                uVar35 = uVar17;
                                if (uVar52 < uVar17) {
                                    *puVar51 = uVar22;
                                    *piVar49 = iVar21;
                                    *puVar5 = uVar20;
                                    *puVar3 = 3;
code_r0x08005408:
                                    *piVar4 = iVar34 * 8;
                                    uVar35 = uVar52;
                                }
                            }
                            else {
                                uVar17 = uVar48 + iVar34 * -8;
                                uVar52 = -uVar17;
                                if (-1 < uVar17) {
                                    uVar52 = uVar17;
                                }
                                if (uVar52 < uVar35) {
                                    if (uVar39 < 8) {
                                        if ((((uVar38 < 0x101) && (*puVar51 = uVar22, uVar32 < 0x101)) &&
                                            (*piVar49 = iVar21, uVar31 < 0x101)) &&
                                           ((*puVar3 = 3, uVar55 < 0x100 && (*puVar5 = uVar20, uVar16 < 0x101))))
                                        goto code_r0x08005408;
                                        goto code_r0x08005a18;
                                    }
                                    goto code_r0x08005c20;
                                }
                            }
                            uVar52 = uVar48 + iVar34 * -0x10;
                            uVar17 = -uVar52;
                            if (-1 < uVar52) {
                                uVar17 = uVar52;
                            }
                            if (uVar17 < uVar35) {
                                if (7 < uVar39) goto code_r0x08005c20;
                                if (((0x100 < uVar38) || (*puVar51 = uVar22, 0x100 < uVar32)) ||
                                   ((*piVar49 = iVar21, 0x100 < uVar31 ||
                                    ((*puVar3 = 4, 0xff < uVar55 || (*puVar5 = uVar20, 0x100 < uVar16))))))
                                goto code_r0x08005a18;
                                uVar35 = uVar48 + iVar34 * -0x20;
                                *piVar4 = iVar34 * 0x10;
                                uVar52 = -uVar35;
                                if (-1 < uVar35) {
                                    uVar52 = uVar35;
                                }
                                uVar35 = uVar17;
                                if (uVar52 < uVar17) {
                                    *puVar51 = uVar22;
                                    *piVar49 = iVar21;
                                    *puVar5 = uVar20;
                                    *puVar3 = 5;
code_r0x080054f8:
                                    *piVar4 = iVar34 * 0x20;
                                    uVar35 = uVar52;
                                }
                            }
                            else {
                                uVar17 = uVar48 + iVar34 * -0x20;
                                uVar52 = -uVar17;
                                if (-1 < uVar17) {
                                    uVar52 = uVar17;
                                }
                                if (uVar52 < uVar35) {
                                    if (uVar39 < 8) {
                                        if ((((uVar38 < 0x101) && (*puVar51 = uVar22, uVar32 < 0x101)) &&
                                            (*piVar49 = iVar21, uVar31 < 0x101)) &&
                                           ((*puVar3 = 5, uVar55 < 0x100 && (*puVar5 = uVar20, uVar16 < 0x101))))
                                        goto code_r0x080054f8;
                                        goto code_r0x08005a18;
                                    }
                                    goto code_r0x08005c20;
                                }
                            }
                            uVar52 = uVar48 + iVar34 * -0x40;
                            uVar17 = -uVar52;
                            if (-1 < uVar52) {
                                uVar17 = uVar52;
                            }
                            if (uVar17 < uVar35) {
                                if (7 < uVar39) goto code_r0x08005c20;
                                if (((0x100 < uVar38) || (*puVar51 = uVar22, 0x100 < uVar32)) ||
                                   ((*piVar49 = iVar21, 0x100 < uVar31 ||
                                    ((*puVar3 = 6, 0xff < uVar55 || (*puVar5 = uVar20, 0x100 < uVar16))))))
                                goto code_r0x08005a18;
                                uVar35 = uVar48 + iVar34 * -0x80;
                                *piVar4 = iVar34 * 0x40;
                                uVar52 = -uVar35;
                                if (-1 < uVar35) {
                                    uVar52 = uVar35;
                                }
                                uVar35 = uVar17;
                                if (uVar52 < uVar17) {
                                    *piVar49 = iVar21;
                                    *puVar51 = uVar22;
                                    *puVar5 = uVar20;
                                    *puVar3 = 7;
code_r0x080051ec:
                                    *piVar4 = iVar34 * 0x80;
                                    uVar35 = uVar52;
                                }
                            }
                            else {
                                uVar17 = uVar48 + iVar34 * -0x80;
                                uVar52 = -uVar17;
                                if (-1 < uVar17) {
                                    uVar52 = uVar17;
                                }
                                if (uVar52 < uVar35) {
                                    if (uVar39 < 8) {
                                        if ((((uVar38 < 0x101) && (*puVar51 = uVar22, uVar32 < 0x101)) &&
                                            (*piVar49 = iVar21, uVar31 < 0x101)) &&
                                           ((*puVar3 = 7, uVar55 < 0x100 && (*puVar5 = uVar20, uVar16 < 0x101))))
                                        goto code_r0x080051ec;
                                        goto code_r0x08005a18;
                                    }
                                    goto code_r0x08005c20;
                                }
                            }
                            iVar54 = iVar54 + 4;
                        } while (iVar47 * 4 - iVar54 != 0);
                        bVar19 = 1 < iVar33;
                        iVar33 = iVar40;
                    } while (bVar19);
                    if (uVar39 == 8) {
code_r0x08005c20:
    //WARNING: Does not return
                        pcVar18 = SoftwareBreakpoint(0x5512,0x8005c24);
                        (*pcVar18)();
                    }
                    if (0x100 < uVar16) goto code_r0x08005a18;
                    uVar38 = uVar35 << (uVar20 & 0x3f);
                    *piVar4 = *piVar4 * (1 << (uVar20 & 0x1f));
                    if (uVar38 < uStack_210) {
                        iVar54 = (&uStack_1e8)[uVar39 * 4];
                        iVar33 = aiStack_1e0[uVar39 * 4];
                        iVar40 = aiStack_1e0[uVar39 * 4 + 1];
                        *puVar1 = *(auStack_1f0 + uVar39 * 8);
                        piVar25[2] = iVar54;
                        piVar25[3] = iVar33;
                        piVar25[4] = iVar40;
                        uStack_210 = uVar38;
                    }
                    uVar39 = uVar39 + 1;
                } while (uVar39 != uVar37);
                uVar20 = *puVar1;
                iVar47 = uVar37 + 1;
                puVar5 = iVar24 + uVar45 * 0x70 + 0x14;
                do {
                    uVar39 = iVar47 - 2;
                    if (uVar7 <= uVar39 * 4) goto code_r0x08005a18;
                    uVar22 = *(pcVar18 + uVar39 * 4);
                    uVar15 = uVar22 - uVar20;
                    if (uVar22 < uVar20 || uVar15 == 0) break;
                    uVar11 = *puVar5;
                    if (uVar15 <= uVar11) {
                        *puVar1 = uVar22;
                        *puVar5 = uVar11 - uVar15;
                        uVar20 = uVar22;
                    }
                    iVar47 = iVar47 + -1;
                } while (2 < iVar47);
                if (*(iVar24 + uVar45 * 0x70 + 0x5c) != '\0') goto code_r0x08004f94;
                iVar47 = iVar24 + uVar45 * 0x70;
                uVar20 = sym.qpnp_lpg_set_lut_pattern(piVar53,*(iVar47 + 0x38),*(iVar47 + 0x40));
                if (-1 < uVar20) {
                    uVar43 = *puVar46;
                    *(iVar24 + uVar45 * 0x70 + 0x5e) = 1;
                    goto code_r0x08004f94;
                }
                puVar44 = uVar20;
                iVar24 = iVar24 + uVar45 * 0x70;
                pcVar41 = "set LUT pattern failed for LPG%d, rc=%d\n";
                uVar23 = *(*piVar53 + 0x50);
code_r0x08005988:
                _dev_err(uVar23,pcVar41,*(iVar24 + 0x4c),puVar44);
                goto code_r0x08005ba4;
            }
        }
        else {
            uVar23 = puVar42[10];
            uVar30 = uVar20;
code_r0x08005b8c:
            _dev_err(uVar23,"hw index %d out of range [0-%d]\n",uVar30,uVar22 - 1);
        }
code_r0x08005b90:
        _dev_err(*puVar42,"lpg not found\n");
        puVar44 = 0xffffffed;
        goto code_r0x08005ba4;
    }
code_r0x080058c0:
    if (*(puVar50 + 0x14) == *(extraout_x1 + 0x4c)) {
        puVar44 = NULL;
        goto code_r0x08005ba4;
    }
    puVar42 = *(extraout_x1 + 0x18);
    uVar20 = *(extraout_x1 + 0x10);
    uVar30 = uVar20;
    uVar22 = *(puVar42 + 0x17);
    if (*(puVar50 + 0x14) != '\0') {
        if (uVar22 <= uVar20) {
            uVar23 = puVar42[10];
            goto code_r0x08005b8c;
        }
        iVar24 = puVar42[0xb];
        piVar53 = iVar24 + uVar30 * 0x70;
        if (piVar53 == NULL) goto code_r0x08005b90;
        if (*(iVar24 + uVar30 * 0x70 + 0x5c) == '\x01') {
            mutex_lock(*piVar53 + 0x68);
            piVar49 = iVar24 + uVar30 * 0x70 + 0x50;
            uVar20 = regmap_write(*(*piVar53 + 0x48),*piVar49 + 0x47,1);
            if (-1 < uVar20) {
                mutex_unlock(*piVar53 + 0x68);
                goto code_r0x08005950;
            }
            puVar44 = uVar20;
            _dev_err(*(*piVar53 + 0x50),"Write addr 0x%x with value 0x%x failed, rc=%d\n",*piVar49 + 0x47,1,puVar44)
            ;
            mutex_unlock(*piVar53 + 0x68);
            iVar24 = *piVar53;
            pcVar41 = "Write LPG_PWM_SYNC failed, rc=%d\n";
        }
        else {
code_r0x08005950:
            uVar20 = sym.qpnp_lpg_set_glitch_removal(piVar53,1);
            if (-1 < uVar20) {
                uVar27 = sym.qpnp_lpg_pwm_src_enable(piVar53,1);
                if (uVar27 < 0) {
                    puVar44 = uVar27 & 0xffffffff;
                    uVar23 = *puVar42;
                    iVar24 = iVar24 + uVar30 * 0x70;
                    pcVar41 = "Enable PWM output failed for channel %d, rc=%d\n";
                    goto code_r0x08005988;
                }
                goto code_r0x080059cc;
            }
            iVar24 = *piVar53;
            puVar44 = uVar20;
            pcVar41 = "Enable glitch-removal failed, rc=%d\n";
        }
        _dev_err(*(iVar24 + 0x50),pcVar41,puVar44);
        goto code_r0x08005ba4;
    }
    if (uVar22 <= uVar20) {
        _dev_err(puVar42[10],"hw index %d out of range [0-%d]\n",uVar20,uVar22 - 1);
code_r0x08005c3c:
        _dev_err(*puVar42,"lpg not found\n");
    }
    else {
        iVar24 = puVar42[0xb];
        piVar53 = iVar24 + uVar30 * 0x70;
        if (piVar53 == NULL) goto code_r0x08005c3c;
        iVar21 = sym.qpnp_lpg_pwm_src_enable(piVar53,0);
        if (iVar21 < 0) {
            _dev_err(*puVar42,"Disable PWM output failed for channel %d, rc=%d\n",*(iVar24 + uVar30 * 0x70 + 0x4c),
                     iVar21);
        }
        else {
            iVar21 = sym.qpnp_lpg_set_glitch_removal(piVar53,0);
            if (iVar21 < 0) {
                _dev_err(*(*piVar53 + 0x50),"Disable glitch-removal failed, rc=%d\n",iVar21);
            }
        }
    }
code_r0x080059cc:
    puVar44 = NULL;
    *(extraout_x1 + 0x4c) = *(puVar50 + 0x14);
code_r0x08005ba4:
    iVar24 = sp_el0;
    if (*(iVar24 + 0x5e0) != aiStack_1e0[0x1e]) {
        auVar56 = __stack_chk_fail();
        piVar53 = auVar56._0_8_;
        *extraout_x18_00 = sym.qpnp_lpg_set_glitch_removal;
        mutex_lock(*piVar53 + 0x68);
        uVar36 = 0x20;
        if ((auVar56._8_8_ & 1) == 0) {
            uVar36 = 0;
        }
        uVar30 = regmap_update_bits_base(*(*piVar53 + 0x48),piVar53[10] + 0x43,0x20,uVar36,0,0,0);
        puVar44 = uVar30 & 0xffffffff;
        if (uVar30 < 0) {
            _dev_err(*(*piVar53 + 0x50),"Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",
                     piVar53[10] + 0x43,uVar36,0x20,puVar44);
            mutex_unlock(*piVar53 + 0x68);
            _dev_err(*(*piVar53 + 0x50),"Write LPG_PWM_TYPE_CONFIG failed, rc=%d\n",puVar44);
        }
        else {
            mutex_unlock(*piVar53 + 0x68);
        }
        return puVar44;
    }
    return puVar44;
}


// ===== sym.qpnp_lpg_pwm_apply @ 0x08004bd4 (size 4400) =====

uint64_t sym.qpnp_lpg_pwm_apply(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint32_t *puVar1;
    code *pcVar2;
    uint *puVar3;
    int64_t *piVar4;
    uint32_t *puVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint16_t uVar8;
    uint32_t uVar9;
    char cVar10;
    uchar uVar11;
    uint32_t uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    code *pcVar15;
    bool bVar16;
    uint32_t uVar17;
    uint32_t uVar18;
    int iVar19;
    int64_t iVar20;
    uint64_t uVar21;
    ulong uVar22;
    uint64_t uVar23;
    char *pcVar24;
    uint64_t *puVar25;
    uint64_t uVar26;
    uint64_t uVar27;
    int64_t iVar28;
    int64_t iVar29;
    uint64_t uVar30;
    uint uVar31;
    int64_t *piVar32;
    uint64_t *puVar33;
    int64_t *piVar34;
    uint64_t uVar35;
    uint64_t uVar36;
    uint64_t uVar37;
    int64_t iVar38;
    char *pcVar39;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar40;
    uint64_t uVar41;
    uint64_t uVar42;
    uint64_t uVar43;
    uint64_t uVar44;
    int64_t iVar45;
    int *piVar46;
    uint32_t *puVar47;
    uint64_t uVar48;
    int64_t iVar49;
    ulong unaff_x30;
    uint64_t uVar50;
    uchar auVar51 [16];
    uint64_t uStack_190;
    uint32_t auStack_170 [2];
    ulong uStack_168;
    int64_t aiStack_160 [32];
    
    puVar25 = arg3;
    *in_x18 = unaff_x30;
    iVar45 = sp_el0;
    aiStack_160[0x1e] = *(iVar45 + 0x5e0);
    uVar23 = *puVar25;
    uVar43 = puVar25[1];
    if ((uVar23 != *(arg2 + 0x38)) || (uVar43 != *(arg2 + 0x40))) {
        puVar40 = *(arg2 + 0x18);
        uVar18 = *(arg2 + 0x10);
        uVar42 = uVar18;
        uVar17 = *(puVar40 + 0x17);
        if (uVar18 < uVar17) {
            iVar45 = puVar40[0xb];
            piVar32 = iVar45 + uVar42 * 0x70;
            if (piVar32 != NULL) {
                if (uVar23 < uVar43) {
                    arg1 = _dev_err(*(*piVar32 + 0x50),"Duty %lluns is larger than period %lluns\n",uVar43,uVar23);
                    uVar41 = 0xffffffea;
                    goto code_r0x08005ba4;
                }
                puVar33 = iVar45 + uVar42 * 0x70 + 0x60;
                uVar41 = *puVar33;
                if (uVar41 == uVar23) {
code_r0x08004f9c:
                    if (*(iVar45 + uVar42 * 0x70 + 0x68) == uVar43) {
                        pcVar39 = iVar45 + uVar42 * 0x70 + 0x5f;
                        if (*pcVar39 != '\0') goto code_r0x08004fd4;
code_r0x08005058:
                        arg1 = sym.qpnp_lpg_set_pwm_config(piVar32);
                        if (-1 < arg1) {
code_r0x0800589c:
                            *puVar33 = uVar23;
                            *(iVar45 + uVar42 * 0x70 + 0x68) = uVar43;
                            *(arg2 + 0x40) = puVar25[1];
                            *(arg2 + 0x38) = *puVar25;
                            goto code_r0x080058c0;
                        }
                        uVar41 = arg1 & 0xffffffff;
                    }
                    else {
code_r0x08004fc4:
                        pcVar39 = iVar45 + uVar42 * 0x70 + 0x5f;
                        if (*pcVar39 == '\0') {
                            iVar20 = iVar45 + uVar42 * 0x70;
                            uVar18 = *(iVar20 + 8);
                            uVar17 = -1 << (uVar18 & 0x1f);
                            uVar12 = 0;
                            if (uVar23 != 0) {
                                uVar12 = (uVar43 << (uVar18 & 0x3f)) / uVar23;
                            }
                            uVar8 = uVar12;
                            if ((~uVar17 & 0xffff) < (uVar12 & 0xffff)) {
                                uVar8 = ~uVar17;
                            }
                            *(iVar20 + 0x18) = uVar8;
                            goto code_r0x08005058;
                        }
code_r0x08004fd4:
                        iVar20 = iVar45 + uVar42 * 0x70;
                        cVar10 = *(iVar20 + 0x5d);
                        iVar19 = *(iVar20 + 0xc);
                        if (cVar10 == '\f') {
                            if (iVar19 == 0x400) {
code_r0x08005020:
                                iVar19 = 0;
                            }
                            else if (iVar19 == 0x8000) {
code_r0x08005734:
                                iVar19 = 1;
                            }
                            else {
                                if (iVar19 != 76800000) goto code_r0x0800564c;
                                iVar19 = 3;
                            }
                        }
                        else {
                            if (iVar19 == 0x400) goto code_r0x08005020;
                            if (iVar19 == 0x8000) goto code_r0x08005734;
code_r0x0800564c:
                            if (iVar19 == 19200000) {
                                iVar19 = 2;
                            }
                            else {
                                iVar19 = -0x16;
                            }
                        }
                        uVar41 = 0xffffffea;
                        uVar18 = *(iVar45 + uVar42 * 0x70 + 0x14);
                        if ((uVar18 < 8) && (-1 < iVar19)) {
                            uVar31 = 7;
                            if (cVar10 != '\f') {
                                uVar31 = 3;
                            }
                            mutex_lock(3,*piVar32 + 0x68);
                            piVar46 = iVar45 + uVar42 * 0x70 + 0x50;
                            uVar17 = regmap_update_bits_base
                                               (*(*piVar32 + 0x48),*piVar46 + 0x41,uVar31,iVar19 + 1,0,0,0);
                            if (uVar17 < 0) {
                                uVar41 = uVar17;
                                _dev_err(*(*piVar32 + 0x50),
                                         "Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",*piVar46 + 0x41
                                         ,iVar19 + 1,uVar31,uVar41);
                                mutex_unlock(*piVar32 + 0x68);
                                iVar20 = *piVar32;
                                pcVar24 = "Write LPG_PWM_SIZE_CLK failed, rc=%d\n";
code_r0x08005b24:
                                _dev_err(*(iVar20 + 0x50),pcVar24,uVar41);
                                goto code_r0x08005b34;
                            }
                            mutex_unlock(*piVar32 + 0x68);
                            mutex_lock(*piVar32 + 0x68);
                            uVar17 = regmap_update_bits_base(*(*piVar32 + 0x48),*piVar46 + 0x42,7,uVar18,0,0,0);
                            if (uVar17 < 0) {
                                uVar41 = uVar17;
                                _dev_err(*(*piVar32 + 0x50),
                                         "Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",*piVar46 + 0x42
                                         ,uVar18,7,uVar41);
                                mutex_unlock(*piVar32 + 0x68);
                                iVar20 = *piVar32;
                                pcVar24 = "Write LPG_PWM_FREQ_PREDIV_CLK failed, rc=%d\n";
                                goto code_r0x08005b24;
                            }
                            mutex_unlock(*piVar32 + 0x68);
                            uVar11 = *(iVar45 + uVar42 * 0x70 + 0x18);
                            mutex_lock(*piVar32 + 0x68);
                            uVar18 = regmap_update_bits_base(*(*piVar32 + 0x48),*piVar46 + 0x44,0xff,uVar11,0,0,0)
                            ;
                            if (uVar18 < 0) {
                                uVar41 = uVar18;
                                _dev_err(*(*piVar32 + 0x50),
                                         "Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",*piVar46 + 0x44
                                         ,uVar11,0xff,uVar41);
                                mutex_unlock(*piVar32 + 0x68);
                                iVar20 = *piVar32;
                                pcVar24 = "Write LPG_PWM_VALUE_LSB failed, rc=%d\n";
                                goto code_r0x08005b24;
                            }
                            mutex_unlock(*piVar32 + 0x68);
                            mutex_lock(*piVar32 + 0x68);
                            uVar18 = regmap_write(*(*piVar32 + 0x48),*piVar46 + 0x47,1);
                            if (uVar18 < 0) {
                                uVar41 = uVar18;
                                _dev_err(*(*piVar32 + 0x50),"Write addr 0x%x with value 0x%x failed, rc=%d\n",
                                         *piVar46 + 0x47,1,uVar41);
                                mutex_unlock(*piVar32 + 0x68);
                                iVar20 = *piVar32;
                                pcVar24 = "Write LPG_PWM_SYNC failed, rc=%d\n";
                                goto code_r0x08005b24;
                            }
                            arg1 = mutex_unlock(*piVar32 + 0x68);
                            goto code_r0x0800589c;
                        }
                    }
code_r0x08005b34:
                    uVar22 = 0x800050a;
                    if (*pcVar39 != '\0') {
                        uVar22 = 0x8000bc5;
                    }
                    arg1 = _dev_err(*(*piVar32 + 0x50),"Config %s failed for channel %d, rc=%d\n",uVar22,
                                    *(iVar45 + uVar42 * 0x70 + 0x4c),uVar41);
                    goto code_r0x08005ba4;
                }
                piVar34 = iVar45 + uVar42 * 0x70;
                puVar1 = piVar34 + 1;
                if (*(piVar34 + 0x5f) != '\0') {
                    cVar10 = *(piVar34 + 0x5d);
                    uVar7 = 0x10;
                    pcVar15 = obj.clk_period_ns_hi_res;
                    if (cVar10 != '\f') {
                        uVar7 = 0xc;
                        pcVar15 = obj.clk_period_ns;
                    }
                    uVar37 = 0;
                    uVar18 = 0;
                    uVar35 = 0;
                    piVar34 = iVar45 + uVar42 * 0x70 + 0x20;
                    uVar6 = 3;
                    if (cVar10 == '\f') {
                        uVar6 = 4;
                    }
                    uVar17 = 0xffffffea;
                    uVar30 = 0xffffffffffffffff;
                    do {
                        if (uVar7 >> 2 == uVar37) goto code_r0x08005a18;
                        uVar12 = *(pcVar15 + uVar37 * 4);
                        iVar20 = uVar12;
                        uVar36 = 0;
                        if (uVar12 != 0) {
                            uVar36 = uVar23 / uVar12;
                        }
                        uVar12 = (uVar36 >> 1) - 1;
                        if (uVar12 < 0x100) {
                            iVar28 = (uVar36 & 0x1fffffffe) * iVar20;
                            uVar26 = uVar23 - iVar28;
                            uVar27 = -uVar26;
                            if (-1 < uVar26) {
                                uVar27 = uVar26;
                            }
                            if (uVar27 < uVar30) {
                                uVar18 = 0;
                                uVar35 = uVar37 & 0xffffffff;
                                *piVar34 = iVar28;
                                uVar30 = uVar27;
                                uVar17 = uVar12;
                            }
                        }
                        else {
                            uVar27 = 0xffffffffffffffff;
                        }
                        uVar12 = (uVar36 >> 2) - 1;
                        uVar26 = uVar27;
                        if (uVar12 < 0x100) {
                            iVar28 = (uVar36 & 0x3fffffffc) * iVar20;
                            uVar13 = uVar23 - iVar28;
                            uVar26 = -uVar13;
                            if (-1 < uVar13) {
                                uVar26 = uVar13;
                            }
                            if (uVar26 < uVar30) {
                                uVar18 = 1;
                                uVar35 = uVar37 & 0xffffffff;
                                *piVar34 = iVar28;
                                uVar30 = uVar26;
                                uVar17 = uVar12;
                            }
                            if (uVar26 <= uVar27) goto code_r0x08004d94;
                        }
                        else {
code_r0x08004d94:
                            uVar12 = (uVar36 >> 3) - 1;
                            uVar27 = uVar26;
                            if (uVar12 < 0x100) {
                                iVar28 = (uVar36 & 0x7fffffff8) * iVar20;
                                uVar13 = uVar23 - iVar28;
                                uVar27 = -uVar13;
                                if (-1 < uVar13) {
                                    uVar27 = uVar13;
                                }
                                if (uVar27 < uVar30) {
                                    uVar18 = 2;
                                    uVar35 = uVar37 & 0xffffffff;
                                    *piVar34 = iVar28;
                                    uVar30 = uVar27;
                                    uVar17 = uVar12;
                                }
                                if (uVar26 < uVar27) goto code_r0x08004ce0;
                            }
                            uVar12 = (uVar36 >> 4) - 1;
                            uVar26 = uVar27;
                            if (uVar12 < 0x100) {
                                iVar28 = (uVar36 & 0xffffffff0) * iVar20;
                                uVar13 = uVar23 - iVar28;
                                uVar26 = -uVar13;
                                if (-1 < uVar13) {
                                    uVar26 = uVar13;
                                }
                                if (uVar26 < uVar30) {
                                    uVar18 = 3;
                                    uVar35 = uVar37 & 0xffffffff;
                                    *piVar34 = iVar28;
                                    uVar30 = uVar26;
                                    uVar17 = uVar12;
                                }
                                if (uVar27 < uVar26) goto code_r0x08004ce0;
                            }
                            uVar12 = (uVar36 >> 5) - 1;
                            uVar27 = uVar26;
                            if (uVar12 < 0x100) {
                                iVar28 = (uVar36 & 0x1fffffffe0) * iVar20;
                                uVar13 = uVar23 - iVar28;
                                uVar27 = -uVar13;
                                if (-1 < uVar13) {
                                    uVar27 = uVar13;
                                }
                                if (uVar27 < uVar30) {
                                    uVar18 = 4;
                                    uVar35 = uVar37 & 0xffffffff;
                                    *piVar34 = iVar28;
                                    uVar30 = uVar27;
                                    uVar17 = uVar12;
                                }
                                if (uVar26 < uVar27) goto code_r0x08004ce0;
                            }
                            uVar12 = (uVar36 >> 6) - 1;
                            uVar26 = uVar27;
                            if (uVar12 < 0x100) {
                                iVar28 = (uVar36 & 0x3fffffffc0) * iVar20;
                                uVar13 = uVar23 - iVar28;
                                uVar26 = -uVar13;
                                if (-1 < uVar13) {
                                    uVar26 = uVar13;
                                }
                                if (uVar26 < uVar30) {
                                    uVar18 = 5;
                                    uVar35 = uVar37 & 0xffffffff;
                                    *piVar34 = iVar28;
                                    uVar30 = uVar26;
                                    uVar17 = uVar12;
                                }
                                if (uVar27 < uVar26) goto code_r0x08004ce0;
                            }
                            uVar12 = (uVar36 >> 7) - 1;
                            if (uVar12 < 0x100) {
                                iVar28 = (uVar36 & 0x7fffffff80) * iVar20;
                                uVar13 = uVar23 - iVar28;
                                uVar27 = -uVar13;
                                if (-1 < uVar13) {
                                    uVar27 = uVar13;
                                }
                                if (uVar27 < uVar30) {
                                    uVar18 = 6;
                                    uVar35 = uVar37 & 0xffffffff;
                                    *piVar34 = iVar28;
                                    uVar30 = uVar27;
                                    uVar17 = uVar12;
                                }
                                if (uVar26 < uVar27) goto code_r0x08004ce0;
                            }
                            uVar12 = (uVar36 >> 8) - 1;
                            if (uVar12 < 0x100) {
                                iVar20 = (uVar36 & 0xffffffff00) * iVar20;
                                uVar27 = uVar23 - iVar20;
                                uVar36 = -uVar27;
                                if (-1 < uVar27) {
                                    uVar36 = uVar27;
                                }
                                if (uVar36 < uVar30) {
                                    uVar18 = 7;
                                    uVar35 = uVar37 & 0xffffffff;
                                    *piVar34 = iVar20;
                                    uVar30 = uVar36;
                                    uVar17 = uVar12;
                                }
                            }
                        }
code_r0x08004ce0:
                        uVar37 = uVar37 + 1;
                    } while (uVar6 != uVar37);
                    if (uVar17 < 0) {
                        arg1 = _printk(0x800094a,"__qpnp_lpg_calc_pfm_period",uVar23);
                        uVar41 = 0xffffffea;
                        goto code_r0x08005ba4;
                    }
                    if (uVar7 <= uVar35 * 4) {
code_r0x08005a18:
    //WARNING: Does not return
                        pcVar15 = SoftwareBreakpoint(1,0x8005a1c);
                        (*pcVar15)();
                    }
                    pcVar15 = obj.clk_freq_hz_hi_res;
                    if (cVar10 != '\f') {
                        pcVar15 = obj.clk_freq_hz;
                    }
                    uVar31 = *(pcVar15 + uVar35 * 4);
                    iVar20 = iVar45 + uVar42 * 0x70;
                    *(iVar20 + 0x14) = *(obj.pwm_exponent + uVar18 * 4);
                    *(iVar20 + 0xc) = uVar31;
                    *(iVar20 + 0x18) = uVar17;
code_r0x08004f94:
                    if (uVar41 == uVar23) goto code_r0x08004f9c;
                    goto code_r0x08004fc4;
                }
                bVar16 = *(piVar34 + 0x5d) == '\f';
                iVar20 = 3;
                if (bVar16) {
                    iVar20 = 4;
                }
                uVar7 = 0x20;
                if (!bVar16) {
                    uVar7 = 8;
                }
                pcVar15 = obj.pwm_hi_res_size;
                if (!bVar16) {
                    pcVar15 = obj.pwm_size;
                }
                uVar37 = *(*piVar34 + 200);
                pcVar2 = obj.clk_freq_hz_hi_res;
                uVar6 = 0x10;
                if (!bVar16) {
                    uVar6 = 0xc;
                    pcVar2 = obj.clk_freq_hz;
                }
                uVar30 = 0xffffffffffffffff;
                uVar35 = 8;
                if (!bVar16 || uVar37 != 0) {
                    uVar35 = 2;
                }
                aiStack_160[0x1c] = 0;
                aiStack_160[0x1d] = 0;
                aiStack_160[0x1a] = 0;
                aiStack_160[0x1b] = 0;
                aiStack_160[0x18] = 0;
                aiStack_160[0x19] = 0;
                aiStack_160[0x16] = 0;
                aiStack_160[0x17] = 0;
                aiStack_160[0x14] = 0;
                aiStack_160[0x15] = 0;
                aiStack_160[0x12] = 0;
                aiStack_160[0x13] = 0;
                aiStack_160[0x10] = 0;
                aiStack_160[0x11] = 0;
                aiStack_160[0xe] = 0;
                aiStack_160[0xf] = 0;
                aiStack_160[0xc] = 0;
                aiStack_160[0xd] = 0;
                aiStack_160[10] = 0;
                aiStack_160[0xb] = 0;
                aiStack_160[8] = 0;
                aiStack_160[9] = 0;
                aiStack_160[6] = 0;
                aiStack_160[7] = 0;
                aiStack_160[4] = 0;
                aiStack_160[5] = 0;
                uStack_190 = 0xffffffffffffffff;
                aiStack_160[2] = 0;
                aiStack_160[3] = 0;
                aiStack_160[0] = 0;
                aiStack_160[1] = 0;
                auStack_170[0] = 0;
                auStack_170[1] = 0;
                uStack_168 = 0;
                do {
                    if (uVar7 <= uVar37 * 4) goto code_r0x08005a18;
                    uVar50 = uVar37 * 0x20;
                    uVar18 = *(pcVar15 + uVar37 * 4);
                    puVar5 = auStack_170 + uVar37 * 8;
                    uVar36 = uVar37 << 5 | 4;
                    uVar27 = uVar37 << 5 | 8;
                    puVar47 = puVar5 | 4;
                    piVar46 = &uStack_168 + uVar37 * 4;
                    uVar44 = uVar23 >> (uVar18 & 0x3f);
                    uVar26 = uVar37 << 5 | 0xc;
                    puVar3 = &uStack_168 + uVar50 + 4;
                    uVar13 = uVar37 << 5 | 0x18;
                    piVar4 = aiStack_160 + uVar37 * 4 + 1;
                    iVar28 = iVar20;
                    do {
                        iVar38 = iVar28 + -1;
                        iVar49 = 0;
                        do {
                            if (iVar49 == 0x10) goto code_r0x08005c20;
                            if (uVar6 <= iVar38 * 4) goto code_r0x08005a18;
                            uVar17 = *(pcVar2 + iVar38 * 4);
                            uVar12 = 0;
                            if (uVar17 != 0) {
                                uVar12 = 1000000000 / uVar17;
                            }
                            uVar21 = uVar12;
                            iVar19 = *(obj.clk_prediv + iVar49);
                            iVar29 = iVar19;
                            uVar48 = uVar44 - uVar21 * iVar29;
                            uVar14 = -uVar48;
                            if (-1 < uVar48) {
                                uVar14 = uVar48;
                            }
                            if (uVar14 < uVar30) {
                                if (7 < uVar37) goto code_r0x08005c20;
                                if (((0x100 < uVar36) || (*puVar47 = uVar17, 0x100 < uVar27)) ||
                                   ((*piVar46 = iVar19, 0x100 < uVar26 ||
                                    ((*puVar3 = 0, 0xff < uVar50 || (*puVar5 = uVar18, 0x100 < uVar13))))))
                                goto code_r0x08005a18;
                                *piVar4 = uVar21 * iVar29;
                                uVar30 = uVar44 + iVar29 * uVar21 * -2;
                                uVar48 = -uVar30;
                                if (-1 < uVar30) {
                                    uVar48 = uVar30;
                                }
                                uVar30 = uVar14;
                                if (uVar48 < uVar14) {
                                    *puVar47 = uVar17;
                                    *piVar46 = iVar19;
                                    *puVar5 = uVar18;
                                    *puVar3 = 1;
code_r0x08005314:
                                    *piVar4 = iVar29 * uVar21 * 2;
                                    uVar30 = uVar48;
                                }
                            }
                            else {
                                uVar14 = uVar44 + iVar29 * uVar21 * -2;
                                uVar48 = -uVar14;
                                if (-1 < uVar14) {
                                    uVar48 = uVar14;
                                }
                                if (uVar48 < uVar30) {
                                    if (uVar37 < 8) {
                                        if ((((uVar36 < 0x101) && (*puVar47 = uVar17, uVar27 < 0x101)) &&
                                            (*piVar46 = iVar19, uVar26 < 0x101)) &&
                                           ((*puVar3 = 1, uVar50 < 0x100 && (*puVar5 = uVar18, uVar13 < 0x101))))
                                        goto code_r0x08005314;
                                        goto code_r0x08005a18;
                                    }
                                    goto code_r0x08005c20;
                                }
                            }
                            iVar29 = iVar29 * uVar21;
                            uVar48 = uVar44 + iVar29 * -4;
                            uVar14 = -uVar48;
                            if (-1 < uVar48) {
                                uVar14 = uVar48;
                            }
                            if (uVar14 < uVar30) {
                                if (7 < uVar37) goto code_r0x08005c20;
                                if (((0x100 < uVar36) || (*puVar47 = uVar17, 0x100 < uVar27)) ||
                                   ((*piVar46 = iVar19, 0x100 < uVar26 ||
                                    ((*puVar3 = 2, 0xff < uVar50 || (*puVar5 = uVar18, 0x100 < uVar13))))))
                                goto code_r0x08005a18;
                                uVar30 = uVar44 + iVar29 * -8;
                                *piVar4 = iVar29 * 4;
                                uVar48 = -uVar30;
                                if (-1 < uVar30) {
                                    uVar48 = uVar30;
                                }
                                uVar30 = uVar14;
                                if (uVar48 < uVar14) {
                                    *puVar47 = uVar17;
                                    *piVar46 = iVar19;
                                    *puVar5 = uVar18;
                                    *puVar3 = 3;
code_r0x08005408:
                                    *piVar4 = iVar29 * 8;
                                    uVar30 = uVar48;
                                }
                            }
                            else {
                                uVar14 = uVar44 + iVar29 * -8;
                                uVar48 = -uVar14;
                                if (-1 < uVar14) {
                                    uVar48 = uVar14;
                                }
                                if (uVar48 < uVar30) {
                                    if (uVar37 < 8) {
                                        if ((((uVar36 < 0x101) && (*puVar47 = uVar17, uVar27 < 0x101)) &&
                                            (*piVar46 = iVar19, uVar26 < 0x101)) &&
                                           ((*puVar3 = 3, uVar50 < 0x100 && (*puVar5 = uVar18, uVar13 < 0x101))))
                                        goto code_r0x08005408;
                                        goto code_r0x08005a18;
                                    }
                                    goto code_r0x08005c20;
                                }
                            }
                            uVar48 = uVar44 + iVar29 * -0x10;
                            uVar14 = -uVar48;
                            if (-1 < uVar48) {
                                uVar14 = uVar48;
                            }
                            if (uVar14 < uVar30) {
                                if (7 < uVar37) goto code_r0x08005c20;
                                if (((0x100 < uVar36) || (*puVar47 = uVar17, 0x100 < uVar27)) ||
                                   ((*piVar46 = iVar19, 0x100 < uVar26 ||
                                    ((*puVar3 = 4, 0xff < uVar50 || (*puVar5 = uVar18, 0x100 < uVar13))))))
                                goto code_r0x08005a18;
                                uVar30 = uVar44 + iVar29 * -0x20;
                                *piVar4 = iVar29 * 0x10;
                                uVar48 = -uVar30;
                                if (-1 < uVar30) {
                                    uVar48 = uVar30;
                                }
                                uVar30 = uVar14;
                                if (uVar48 < uVar14) {
                                    *puVar47 = uVar17;
                                    *piVar46 = iVar19;
                                    *puVar5 = uVar18;
                                    *puVar3 = 5;
code_r0x080054f8:
                                    *piVar4 = iVar29 * 0x20;
                                    uVar30 = uVar48;
                                }
                            }
                            else {
                                uVar14 = uVar44 + iVar29 * -0x20;
                                uVar48 = -uVar14;
                                if (-1 < uVar14) {
                                    uVar48 = uVar14;
                                }
                                if (uVar48 < uVar30) {
                                    if (uVar37 < 8) {
                                        if ((((uVar36 < 0x101) && (*puVar47 = uVar17, uVar27 < 0x101)) &&
                                            (*piVar46 = iVar19, uVar26 < 0x101)) &&
                                           ((*puVar3 = 5, uVar50 < 0x100 && (*puVar5 = uVar18, uVar13 < 0x101))))
                                        goto code_r0x080054f8;
                                        goto code_r0x08005a18;
                                    }
                                    goto code_r0x08005c20;
                                }
                            }
                            uVar48 = uVar44 + iVar29 * -0x40;
                            uVar14 = -uVar48;
                            if (-1 < uVar48) {
                                uVar14 = uVar48;
                            }
                            if (uVar14 < uVar30) {
                                if (7 < uVar37) goto code_r0x08005c20;
                                if (((0x100 < uVar36) || (*puVar47 = uVar17, 0x100 < uVar27)) ||
                                   ((*piVar46 = iVar19, 0x100 < uVar26 ||
                                    ((*puVar3 = 6, 0xff < uVar50 || (*puVar5 = uVar18, 0x100 < uVar13))))))
                                goto code_r0x08005a18;
                                uVar30 = uVar44 + iVar29 * -0x80;
                                *piVar4 = iVar29 * 0x40;
                                uVar48 = -uVar30;
                                if (-1 < uVar30) {
                                    uVar48 = uVar30;
                                }
                                uVar30 = uVar14;
                                if (uVar48 < uVar14) {
                                    *piVar46 = iVar19;
                                    *puVar47 = uVar17;
                                    *puVar5 = uVar18;
                                    *puVar3 = 7;
code_r0x080051ec:
                                    *piVar4 = iVar29 * 0x80;
                                    uVar30 = uVar48;
                                }
                            }
                            else {
                                uVar14 = uVar44 + iVar29 * -0x80;
                                uVar48 = -uVar14;
                                if (-1 < uVar14) {
                                    uVar48 = uVar14;
                                }
                                if (uVar48 < uVar30) {
                                    if (uVar37 < 8) {
                                        if ((((uVar36 < 0x101) && (*puVar47 = uVar17, uVar27 < 0x101)) &&
                                            (*piVar46 = iVar19, uVar26 < 0x101)) &&
                                           ((*puVar3 = 7, uVar50 < 0x100 && (*puVar5 = uVar18, uVar13 < 0x101))))
                                        goto code_r0x080051ec;
                                        goto code_r0x08005a18;
                                    }
                                    goto code_r0x08005c20;
                                }
                            }
                            iVar49 = iVar49 + 4;
                        } while (iVar20 * 4 - iVar49 != 0);
                        bVar16 = 1 < iVar28;
                        iVar28 = iVar38;
                    } while (bVar16);
                    if (uVar37 == 8) {
code_r0x08005c20:
    //WARNING: Does not return
                        pcVar15 = SoftwareBreakpoint(0x5512,0x8005c24);
                        (*pcVar15)();
                    }
                    if (0x100 < uVar13) goto code_r0x08005a18;
                    uVar36 = uVar30 << (uVar18 & 0x3f);
                    *piVar4 = *piVar4 * (1 << (uVar18 & 0x1f));
                    if (uVar36 < uStack_190) {
                        iVar49 = (&uStack_168)[uVar37 * 4];
                        iVar28 = aiStack_160[uVar37 * 4];
                        iVar38 = aiStack_160[uVar37 * 4 + 1];
                        *puVar1 = *(auStack_170 + uVar37 * 8);
                        piVar34[2] = iVar49;
                        piVar34[3] = iVar28;
                        piVar34[4] = iVar38;
                        uStack_190 = uVar36;
                    }
                    uVar37 = uVar37 + 1;
                } while (uVar37 != uVar35);
                uVar18 = *puVar1;
                iVar20 = uVar35 + 1;
                puVar5 = iVar45 + uVar42 * 0x70 + 0x14;
                do {
                    uVar37 = iVar20 - 2;
                    if (uVar7 <= uVar37 * 4) goto code_r0x08005a18;
                    uVar17 = *(pcVar15 + uVar37 * 4);
                    uVar12 = uVar17 - uVar18;
                    if (uVar17 < uVar18 || uVar12 == 0) break;
                    uVar9 = *puVar5;
                    if (uVar12 <= uVar9) {
                        *puVar1 = uVar17;
                        *puVar5 = uVar9 - uVar12;
                        uVar18 = uVar17;
                    }
                    iVar20 = iVar20 + -1;
                } while (2 < iVar20);
                if (*(iVar45 + uVar42 * 0x70 + 0x5c) != '\0') goto code_r0x08004f94;
                iVar20 = iVar45 + uVar42 * 0x70;
                uVar18 = sym.qpnp_lpg_set_lut_pattern(piVar32,*(iVar20 + 0x38),*(iVar20 + 0x40));
                if (-1 < uVar18) {
                    uVar41 = *puVar33;
                    *(iVar45 + uVar42 * 0x70 + 0x5e) = 1;
                    goto code_r0x08004f94;
                }
                uVar41 = uVar18;
                iVar45 = iVar45 + uVar42 * 0x70;
                pcVar39 = "set LUT pattern failed for LPG%d, rc=%d\n";
                uVar22 = *(*piVar32 + 0x50);
code_r0x08005988:
                arg1 = _dev_err(uVar22,pcVar39,*(iVar45 + 0x4c),uVar41);
                goto code_r0x08005ba4;
            }
        }
        else {
            uVar22 = puVar40[10];
            uVar23 = uVar18;
code_r0x08005b8c:
            _dev_err(uVar22,"hw index %d out of range [0-%d]\n",uVar23,uVar17 - 1);
        }
code_r0x08005b90:
        arg1 = _dev_err(*puVar40,"lpg not found\n");
        uVar41 = 0xffffffed;
        goto code_r0x08005ba4;
    }
code_r0x080058c0:
    if (*(puVar25 + 0x14) == *(arg2 + 0x4c)) {
        uVar41 = 0;
        goto code_r0x08005ba4;
    }
    puVar40 = *(arg2 + 0x18);
    uVar18 = *(arg2 + 0x10);
    uVar23 = uVar18;
    uVar17 = *(puVar40 + 0x17);
    if (*(puVar25 + 0x14) != '\0') {
        if (uVar17 <= uVar18) {
            uVar22 = puVar40[10];
            goto code_r0x08005b8c;
        }
        iVar45 = puVar40[0xb];
        piVar32 = iVar45 + uVar23 * 0x70;
        if (piVar32 == NULL) goto code_r0x08005b90;
        if (*(iVar45 + uVar23 * 0x70 + 0x5c) == '\x01') {
            mutex_lock(*piVar32 + 0x68);
            piVar46 = iVar45 + uVar23 * 0x70 + 0x50;
            uVar18 = regmap_write(*(*piVar32 + 0x48),*piVar46 + 0x47,1);
            if (-1 < uVar18) {
                mutex_unlock(*piVar32 + 0x68);
                goto code_r0x08005950;
            }
            uVar41 = uVar18;
            _dev_err(*(*piVar32 + 0x50),"Write addr 0x%x with value 0x%x failed, rc=%d\n",*piVar46 + 0x47,1,uVar41);
            mutex_unlock(*piVar32 + 0x68);
            iVar45 = *piVar32;
            pcVar39 = "Write LPG_PWM_SYNC failed, rc=%d\n";
        }
        else {
code_r0x08005950:
            uVar18 = sym.qpnp_lpg_set_glitch_removal(piVar32,1);
            if (-1 < uVar18) {
                arg1 = sym.qpnp_lpg_pwm_src_enable(piVar32,1);
                if (arg1 < 0) {
                    uVar41 = arg1 & 0xffffffff;
                    uVar22 = *puVar40;
                    iVar45 = iVar45 + uVar23 * 0x70;
                    pcVar39 = "Enable PWM output failed for channel %d, rc=%d\n";
                    goto code_r0x08005988;
                }
                goto code_r0x080059cc;
            }
            iVar45 = *piVar32;
            uVar41 = uVar18;
            pcVar39 = "Enable glitch-removal failed, rc=%d\n";
        }
        arg1 = _dev_err(*(iVar45 + 0x50),pcVar39,uVar41);
        goto code_r0x08005ba4;
    }
    if (uVar17 <= uVar18) {
        _dev_err(puVar40[10],"hw index %d out of range [0-%d]\n",uVar18,uVar17 - 1);
code_r0x08005c3c:
        arg1 = _dev_err(*puVar40,"lpg not found\n");
    }
    else {
        iVar45 = puVar40[0xb];
        piVar32 = iVar45 + uVar23 * 0x70;
        if (piVar32 == NULL) goto code_r0x08005c3c;
        iVar19 = sym.qpnp_lpg_pwm_src_enable(piVar32,0);
        if (iVar19 < 0) {
            arg1 = _dev_err(*puVar40,"Disable PWM output failed for channel %d, rc=%d\n",
                            *(iVar45 + uVar23 * 0x70 + 0x4c),iVar19);
        }
        else {
            arg1 = sym.qpnp_lpg_set_glitch_removal(piVar32,0);
            if (arg1 < 0) {
                arg1 = _dev_err(*(*piVar32 + 0x50),"Disable glitch-removal failed, rc=%d\n",arg1 & 0xffffffff);
            }
        }
    }
code_r0x080059cc:
    uVar41 = 0;
    *(arg2 + 0x4c) = *(puVar25 + 0x14);
code_r0x08005ba4:
    iVar45 = sp_el0;
    if (*(iVar45 + 0x5e0) != aiStack_160[0x1e]) {
        auVar51 = __stack_chk_fail(arg1);
        piVar32 = auVar51._0_8_;
        *extraout_x18 = sym.qpnp_lpg_set_glitch_removal;
        mutex_lock(*piVar32 + 0x68);
        uVar31 = 0x20;
        if ((auVar51._8_8_ & 1) == 0) {
            uVar31 = 0;
        }
        uVar23 = regmap_update_bits_base(*(*piVar32 + 0x48),piVar32[10] + 0x43,0x20,uVar31,0,0,0);
        uVar43 = uVar23 & 0xffffffff;
        if (uVar23 < 0) {
            _dev_err(*(*piVar32 + 0x50),"Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",
                     piVar32[10] + 0x43,uVar31,0x20,uVar43);
            mutex_unlock(*piVar32 + 0x68);
            _dev_err(*(*piVar32 + 0x50),"Write LPG_PWM_TYPE_CONFIG failed, rc=%d\n",uVar43);
        }
        else {
            mutex_unlock(*piVar32 + 0x68);
        }
        return uVar43;
    }
    return uVar41;
}


// ===== sym.qpnp_lpg_set_glitch_removal @ 0x08005d04 (size 220) =====

int sym.qpnp_lpg_set_glitch_removal(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(*arg1 + 0x68);
    uVar2 = 0x20;
    if ((arg2 & 1U) == 0) {
        uVar2 = 0;
    }
    iVar1 = regmap_update_bits_base(*(*arg1 + 0x48),*(arg1 + 0x50) + 0x43,0x20,uVar2,0,0,0);
    if (iVar1 < 0) {
        _dev_err(*(*arg1 + 0x50),"Update addr 0x%x to val 0x%x with mask 0x%x failed, rc=%d\n",*(arg1 + 0x50) + 0x43,
                 uVar2,0x20,iVar1);
        mutex_unlock(*arg1 + 0x68);
        _dev_err(*(*arg1 + 0x50),"Write LPG_PWM_TYPE_CONFIG failed, rc=%d\n",iVar1);
    }
    else {
        mutex_unlock(*arg1 + 0x68);
    }
    return iVar1;
}


// ===== sym.__cfi_check_fail @ 0x08005de0 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08005e24

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
    pcVar1 = SoftwareBreakpoint(0x5502,0x8005e38);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08005e8c (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qpnp_lpg_probe.dc31bff6ac2356f2ace3cf841d8a55bf.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08005ec0 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qpnp_lpg_probe.dc31bff6ac2356f2ace3cf841d8a55bf.cfi_jt);
    return;
}

