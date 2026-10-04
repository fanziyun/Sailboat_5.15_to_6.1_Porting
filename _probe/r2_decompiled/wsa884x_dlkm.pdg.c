// decompiled from wsa884x_dlkm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x0800f000 (size 956) =====

//WARNING: Switch with 1 destination removed at 0x08013b44

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x6be91529ddea3c2) {
        if (-0x3987c0e26ee2972a < arg1) {
            if (arg1 < -0xf2d15659b6de7a9) {
                if (arg1 == -0x3987c0e26ee29729) {
                    if ((pcVar1 + -0x800f488 >> 3 | pcVar1 << 0x3d) < 10) {
                        return;
                    }
                    goto code_r0x08013b04;
                }
                if (arg1 != -0x13528428f8f6b8aa) goto code_r0x08013b04;
                pcVar2 = sym.wsa884x_set_channel_map.cfi_jt;
            }
            else {
                if (arg1 == -0xf2d15659b6de7a9) {
                    if ((pcVar1 + -0x800f3d0 >> 3 | pcVar1 << 0x3d) < 4) {
                        return;
                    }
                    goto code_r0x08013b04;
                }
                if (arg1 == -0x8dc801903aca538) {
                    pcVar2 = sym.codec_debug_open.142cb795c700479f84f02afc5065e4d0.cfi_jt;
                }
                else {
                    if (arg1 != 0x2b3a43e29242445) goto code_r0x08013b04;
                    pcVar2 = sym.init_module.cfi_jt;
                }
            }
            goto code_r0x0800f390;
        }
        if (arg1 < -0x49739d0000a0fe53) {
            if (arg1 == -0x749213c658cf941a) {
                pcVar2 = sym.snd_soc_info_enum_double.cfi_jt;
            }
            else {
                if (arg1 != -0x57be845bca9148ef) goto code_r0x08013b04;
                pcVar2 = sym.wsa884x_swr_suspend.142cb795c700479f84f02afc5065e4d0.cfi_jt;
            }
        }
        else if (arg1 == -0x49739d0000a0fe53) {
            pcVar2 = sym.wsa884x_spkr_event.142cb795c700479f84f02afc5065e4d0.cfi_jt;
        }
        else {
            if (arg1 != -0x440ca8bece010a7b) goto code_r0x08013b04;
            pcVar2 = sym.wsa884x_swr_remove.142cb795c700479f84f02afc5065e4d0.cfi_jt;
        }
    }
    else {
        if (0x516c7c120760246a < arg1) {
            if (arg1 < 0x7d57972cd3914fb1) {
                if (arg1 == 0x516c7c120760246b) {
                    pcVar2 = sym.wsa884x_codec_info_create_codec_entry.cfi_jt;
                }
                else {
                    if (arg1 != 0x641d19c7be126e92) goto code_r0x08013b04;
                    pcVar2 = sym.wsa884x_handle_post_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt;
                }
            }
            else if (arg1 == 0x7d57972cd3914fb1) {
                pcVar2 = sym.wsa884x_event_notify.142cb795c700479f84f02afc5065e4d0.cfi_jt;
            }
            else if (arg1 == 0x7e04a0fb7ad8bcd5) {
                pcVar2 = sym.cleanup_module.cfi_jt;
            }
            else {
                if (arg1 != 0x7e6c99e1529760f9) goto code_r0x08013b04;
                pcVar2 = sym.wsa884x_codec_remove.142cb795c700479f84f02afc5065e4d0.cfi_jt;
            }
code_r0x0800f390:
            if (pcVar1 == pcVar2) {
                return;
            }
            goto code_r0x08013b04;
        }
        if (arg1 < 0x1d7ed092cb04d3f1) {
            if (arg1 == 0x6be91529ddea3c2) {
                if ((pcVar1 + -0x800f4d8 >> 3 | pcVar1 << 0x3d) < 3) {
                    return;
                }
                goto code_r0x08013b04;
            }
            if (arg1 != 0x7ff5a213d37b1a6) goto code_r0x08013b04;
            pcVar2 = sym.codec_debug_read.142cb795c700479f84f02afc5065e4d0.cfi_jt;
        }
        else if (arg1 == 0x1d7ed092cb04d3f1) {
            pcVar2 = sym.codec_debug_write.142cb795c700479f84f02afc5065e4d0.cfi_jt;
        }
        else {
            if (arg1 == 0x2882621ee1337d31) {
                if ((pcVar1 + -0x800f500 >> 3 | pcVar1 << 0x3d) < 0x10) {
                    return;
                }
                goto code_r0x08013b04;
            }
            if (arg1 != 0x3f37d02e2e91c6d1) goto code_r0x08013b04;
            pcVar2 = sym.wsa884x_codec_version_read.142cb795c700479f84f02afc5065e4d0.cfi_jt;
        }
    }
    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
        return;
    }
code_r0x08013b04:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8013b58);
    (*pcVar1)();
}


// ===== sym.init_module.cfi_jt @ 0x0800f3c8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    swr_driver_register(reloc.wsa884x_swr_probe.142cb795c700479f84f02afc5065e4d0.cfi_jt);
    return;
}


// ===== sym.wsa884x_soc_codec_resume.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f3d0 (size 8) =====

ulong sym.wsa884x_soc_codec_resume.142cb795c700479f84f02afc5065e4d0.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    
    iVar1 = *(*(param_1 + 0x18) + 0x98);
    if (iVar1 != 0) {
        *(iVar1 + 0x25) = 0;
    }
    return 0;
}


// ===== sym.wsa884x_codec_probe.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f3d8 (size 8) =====

void sym.wsa884x_codec_probe.142cb795c700479f84f02afc5065e4d0.cfi_jt(int64_t param_1)

{
    int iVar1;
    uint32_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong unaff_x30;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    puVar5 = *(*(param_1 + 0x18) + 0x98);
    if ((puVar5 == NULL) || (*(param_1 + 0x10) == 0)) {
        uVar3 = 0xffffffea;
    }
    else {
        iVar4 = param_1 + 0xd0;
        snd_soc_component_init_regmap(param_1,*puVar5);
        puVar5[3] = param_1;
        uVar2 = snd_soc_component_read(param_1,0x3880);
        *(puVar5 + 0x1b) = uVar2 & 0xf;
        uVar2 = snd_soc_component_read(param_1,0x3401);
        *(puVar5 + 0xf) = 2;
        *(puVar5 + 0xdc) = uVar2 & 0xff;
        iVar6 = *(*(param_1 + 0x18) + 0x98);
        if (iVar6 != 0) {
            iVar7 = 0;
            do {
                snd_soc_component_update_bits
                          (param_1,*(obj.reg_init + iVar7),*(iVar7 + 0x80037c2),*(iVar7 + 0x80037c3));
                iVar7 = iVar7 + 4;
            } while (iVar7 != 0x8c);
            if (*(iVar6 + 0xe4) == 2) {
                snd_soc_component_update_bits(param_1,0x34d1,0xf0,0x20);
                snd_soc_component_update_bits(param_1,0x34d2,0x1f,0x13);
                snd_soc_component_update_bits(param_1,0x3005,0xf,3);
                snd_soc_component_update_bits(param_1,0x3005,0xf0,0x30);
                snd_soc_component_update_bits(param_1,0x3045,0xff,6);
                snd_soc_component_update_bits(param_1,0x3046,0xff,0x14);
                snd_soc_component_update_bits(param_1,0x3047,0xff,0x19);
                snd_soc_component_update_bits(param_1,0x3048,0xff,0x1b);
                snd_soc_component_update_bits(param_1,0x3049,0xff,0x1c);
                snd_soc_component_update_bits(param_1,0x306a,2,2);
            }
            uVar2 = *(iVar6 + 0x2c0) - 1;
            iVar1 = uVar2 * -0x10 + 0x30;
            if (2 < uVar2) {
                iVar1 = 8;
            }
            snd_soc_component_update_bits(param_1,0x3432,0x38,iVar1);
        }
        *(puVar5 + 0xe) = 0;
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        strlcpy(&uStack_70,*(puVar5[0x56] + 0xb0),0x28);
        snd_soc_dapm_ignore_suspend(iVar4,&uStack_70);
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        strlcpy(&uStack_70,0x8002104,0x28);
        snd_soc_dapm_ignore_suspend(iVar4,&uStack_70);
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        strlcpy(&uStack_70,"SWR DAC_Port",0x28);
        snd_soc_dapm_ignore_suspend(iVar4,&uStack_70);
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        strlcpy(&uStack_70,"SPKR",0x28);
        snd_soc_dapm_ignore_suspend(iVar4,&uStack_70);
        snd_soc_dapm_sync(iVar4);
        uVar3 = 0;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return;
    }
    iVar4 = __stack_chk_fail(uVar3);
    *extraout_x18 = sym.wsa884x_codec_remove;
    if (*(*(iVar4 + 0x18) + 0x98) != 0) {
        snd_soc_component_exit_regmap();
    }
    return;
}


// ===== sym.wsa884x_codec_get_dev_num.cfi_jt @ 0x0800f3e0 (size 8) =====

uint64_t sym.wsa884x_codec_get_dev_num.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 != 0) {
        iVar2 = *(*(param_1 + 0x18) + 0x98);
        if (iVar2 != 0) {
            return *(*(iVar2 + 0x10) + 0x40);
        }
        iVar1 = ___ratelimit(obj.wsa884x_codec_get_dev_num._rs,"wsa884x_codec_get_dev_num");
        if (iVar1 != 0) {
            _printk(0x8001e2d,"wsa884x_codec_get_dev_num");
        }
    }
    return 0xffffffea;
}


// ===== sym.wsa884x_soc_codec_suspend.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f3e8 (size 8) =====

ulong sym.wsa884x_soc_codec_suspend.142cb795c700479f84f02afc5065e4d0.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    
    iVar1 = *(*(param_1 + 0x18) + 0x98);
    if (iVar1 != 0) {
        *(iVar1 + 0x25) = 1;
    }
    return 0;
}


// ===== sym.codec_debug_read.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f3f0 (size 8) =====

int64_t * sym.codec_debug_read.142cb795c700479f84f02afc5065e4d0.cfi_jt
                    (int64_t param_1,int64_t param_2,int64_t *param_3,int64_t *param_4)

{
    int iVar1;
    int64_t *piVar2;
    ulong uVar3;
    int64_t *piVar4;
    int64_t iVar5;
    uint uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    int64_t *piStack_c8;
    uint64_t auStack_c0 [2];
    uint uStack_b0;
    int64_t aiStack_a8 [5];
    uchar *puStack_80;
    code *pcStack_78;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar4 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    piVar2 = 0xffffffffffffffea;
    iStack_40 = 0;
    if ((((param_2 != 0) && (param_1 != 0)) && (param_3 != NULL)) && (param_4 != NULL)) {
        if (((*(param_1 + 0xd8) == 0) || (iVar7 = *(*(param_1 + 0xd8) + 0xe0), iVar7 == 0)) || (*param_4 < 0)) {
            piVar2 = 0xffffffffffffffea;
        }
        else {
            snprintf(&iStack_40,8,"0x%x\n",*(iVar7 + 0x240));
            uVar3 = strnlen(&iStack_40,7);
            piVar2 = simple_read_from_buffer(param_2,param_3,param_4,&iStack_40,uVar3);
            param_3 = param_4;
            param_4 = piVar4;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return piVar2;
    }
    auVar9 = __stack_chk_fail(piVar2);
    *extraout_x18 = sym.codec_debug_peek_write;
    pcStack_78 = sym.codec_debug_peek_write;
    iVar7 = sp_el0;
    aiStack_a8[4] = *(iVar7 + 0x5e0);
    piVar4 = 0xffffffffffffffea;
    aiStack_a8[2] = 0;
    aiStack_a8[3] = 0;
    aiStack_a8[0] = 0;
    aiStack_a8[1] = 0;
    uStack_b0 = 0;
    auStack_c0[0] = 0;
    auStack_c0[1] = 0;
    puStack_80 = &stack0xffffffffffffffd0;
    if (((auVar9._8_8_ == 0) || (auVar9._0_8_ == 0)) || ((param_3 == NULL || (param_4 == NULL)))) goto code_r0x08013118;
    iVar7 = *(auVar9._0_8_ + 0xd8);
    if ((iVar7 != 0) && (iVar8 = *(iVar7 + 0xe0), iVar8 != 0)) {
        piVar4 = 0xffffffffffffffea;
        if ((0x1f < param_3) || (*param_4 < 0)) goto code_r0x08013118;
        __check_object_size(aiStack_a8,param_3,0);
        iVar1 = sym._copy_from_user(aiStack_a8,auVar9._8_8_,param_3);
        if (iVar1 != 0) {
            piVar4 = 0xfffffffffffffff2;
            goto code_r0x08013118;
        }
        *(aiStack_a8 + param_3) = 0;
        piStack_c8 = aiStack_a8;
        iVar5 = strsep(&piStack_c8,0x8001b76);
        if (iVar5 != 0) {
            uVar6 = 0x10;
            if ((*(iVar5 + 1) & 0xdf) != 0x58) {
                uVar6 = 10;
            }
            iVar1 = kstrtouint(iVar5,uVar6,auStack_c0);
            if (iVar1 == 0) {
                strsep(&piStack_c8,0x8001b76);
                if (auStack_c0[0] < 0x200a) {
                    swr_read(iVar7,*(iVar7 + 0x40),auStack_c0[0] & 0xffffffff,iVar8 + 0x240,1);
                    piVar4 = param_3;
                    goto code_r0x08013118;
                }
            }
        }
    }
    piVar4 = 0xffffffffffffffea;
code_r0x08013118:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == aiStack_a8[4]) {
        return piVar4;
    }
    auVar9 = __stack_chk_fail(piVar4);
    *(auVar9._8_8_ + 0xd8) = *(auVar9._0_8_ + 0x2d8);
    return NULL;
}


// ===== sym.codec_debug_dump.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f3f8 (size 8) =====

char * sym.codec_debug_dump.142cb795c700479f84f02afc5065e4d0.cfi_jt
                 (int64_t param_1,int64_t param_2,char *param_3,int64_t *param_4)

{
    ulong *puVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    bool bVar4;
    uint32_t uVar5;
    int iVar6;
    int64_t iVar7;
    ulong uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar11;
    uint32_t uVar12;
    char *arg2;
    char *pcVar13;
    char *pcVar14;
    char *pcVar15;
    ulong unaff_x30;
    uchar noname_1 [16];
    uint uStack_84;
    ulong uStack_80;
    ulong uStack_78;
    uint uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    pcVar14 = 0xffffffffffffffea;
    iStack_68 = *(iVar11 + 0x5e0);
    if ((((param_2 != 0) && (param_1 != 0)) && (param_3 != NULL)) && (param_4 != NULL)) {
        iVar11 = *(param_1 + 0xd8);
        if ((iVar11 == 0) || (*param_4 < 0)) {
            pcVar14 = 0xffffffffffffffea;
        }
        else {
            uStack_84 = 0;
            iVar6 = *param_4;
            uStack_70 = 0;
            uStack_80 = 0;
            uStack_78 = 0;
            pcVar14 = NULL;
            if (iVar6 < 0x17d78) {
                pcVar13 = param_3 + -1;
                pcVar14 = NULL;
                uVar12 = iVar6 / 0xc + 0x40;
                do {
                    pcVar15 = pcVar14;
                    if ((((((0x864 < uVar12 - 0xf36 >> 1) && (9 < uVar12 - 0xf26)) &&
                          ((0x19 < uVar12 - 0xf06 &&
                           (((0x8c7 < uVar12 - 0x638 && (199 < uVar12 - 0x538)) && (199 < uVar12 - 0x438)))))) &&
                         ((199 < uVar12 - 0x338 && (199 < uVar12 - 0x238)))) && (199 < uVar12 - 0x138)) &&
                       ((((((uVar12 & 0xfffffff8) != 0x628 && ((uVar12 & 0xfffffef8) != 0x428)) &&
                          (((uVar12 & 0xfffffef8) != 0x228 &&
                           ((((uVar12 & 0xfffffff8) != 0x128 && (0x19 < uVar12 - 0x606)) &&
                            (0x19 < (uVar12 & 0xfffffeff) - 0x406)))))) &&
                         (((0x19 < (uVar12 & 0xfffffeff) - 0x206 && (0x19 < uVar12 - 0x106)) &&
                          ((0xe < uVar12 - 0xf1 &&
                           (((0xe < uVar12 - 0xe1 && (0xe < uVar12 - 0xd1)) &&
                            ((6 < uVar12 - 0xc9 &&
                             ((((5 < uVar12 - 0xc2 && (0x4e < uVar12 - 0x71)) && (0xe < uVar12 - 0x61)) &&
                              ((9 < uVar12 - 0x56 && (2 < uVar12 - 0x47)))))))))))))) && (4 < uVar12 - 0x4b)))) {
                        swr_read(iVar11,*(iVar11 + 0x40),uVar12,&uStack_84,1);
                        param_3 = "0x%.3x: 0x%.2x\n";
                        uVar5 = snprintf(&uStack_80,0x14,"0x%.3x: 0x%.2x\n",uVar12,uStack_84);
                        if (uVar5 < 0) {
                            iVar6 = ___ratelimit(obj.swr_slave_reg_show._rs,"swr_slave_reg_show");
                            if (iVar6 != 0) {
                                uVar8 = 0x8001c32;
code_r0x080137d8:
                                _printk(uVar8,"swr_slave_reg_show");
                            }
                        }
                        else {
                            arg2 = uVar5;
                            pcVar15 = pcVar14 + arg2;
                            if (pcVar13 <= pcVar15) break;
                            noname_1 = __check_object_size(&uStack_80,arg2,1);
                            param_3 = arg2;
                            iVar7 = sym._copy_to_user(pcVar14 + param_2,noname_1,arg2);
                            if (iVar7 == 0) {
                                *param_4 = arg2 + *param_4;
                                goto code_r0x08013578;
                            }
                            iVar6 = ___ratelimit(obj.swr_slave_reg_show._rs.136,"swr_slave_reg_show");
                            if (iVar6 != 0) {
                                uVar8 = 0x80020bf;
                                goto code_r0x080137d8;
                            }
                        }
                        pcVar14 = 0xfffffffffffffff2;
                        break;
                    }
code_r0x08013578:
                    bVar4 = uVar12 < 0x2009;
                    pcVar14 = pcVar15;
                    uVar12 = uVar12 + 1;
                } while (bVar4);
            }
            *param_4 = 0x1806c;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_68) {
        return pcVar14;
    }
    uVar9 = __stack_chk_fail();
    *extraout_x18 = sym._copy_to_user;
    puVar1 = sp_el0;
    uVar3 = (uVar9 << 8) >> 8;
    if (((*(puVar1 + 0x3e) >> 5 & 1) != 0) || (uVar10 = uVar9, (*puVar1 >> 0x1a & 1) != 0)) {
        uVar10 = uVar9 & uVar3;
    }
    bVar4 = CARRY8(uVar10,param_3);
    pcVar14 = param_3 + uVar10;
    uVar10 = 0;
    if (!bVar4 || pcVar14 == NULL) {
        uVar10 = 0x7fffffffff;
    }
    if (bVar4) {
        pcVar14 = 0xffffffffffffffff;
    }
    if (!CARRY8(pcVar14,~uVar10) && !CARRY8(pcVar14 + ~uVar10,bVar4) || pcVar14 == uVar10 + !bVar4) {
        if ((_snd_soc_info_enum_double >> 0x18 & 1) == 0) {
            uVar10 = daif;
            if ((uVar10 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr1_el1 = puVar1[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar1[1];
            InstructionSynchronizationBarrier();
            daif = uVar10;
        }
        if ((uVar9 & uVar3 & 0xffffff8000000000) != 0) {
            uVar9 = 0;
        }
        param_3 = __arch_copy_to_user(uVar9);
        if ((_snd_soc_info_enum_double >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar9 = daif;
                daif = uVar9 | 0xc0;
            }
            uVar9 = ttbr1_el1;
            ttbr0_el1 = (uVar9 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar9 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
    }
    return param_3;
}


// ===== sym.wsa884x_set_channel_map.cfi_jt @ 0x0800f400 (size 8) =====

ulong sym.wsa884x_set_channel_map.cfi_jt
                (int64_t param_1,uchar *param_2,uint8_t param_3,uint *param_4,uint *param_5,uchar *param_6)

{
    uchar uVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((((param_3 < 7) && (param_2 != NULL)) && (param_4 != NULL)) && (param_5 != NULL)) {
        if (param_3 != 0) {
            iVar4 = *(*(param_1 + 0x18) + 0x98);
            *(iVar4 + 0x28) = *param_2;
            *(iVar4 + 0x29) = *param_4;
            *(iVar4 + 0x2c) = *param_5;
            uVar1 = __sw_hweight8(*param_4);
            *(iVar4 + 0x30) = uVar1;
            if (param_6 != NULL) {
                *(iVar4 + 0x31) = *param_6;
            }
            if (param_3 != 1) {
                *(iVar4 + 0x34) = param_2[1];
                *(iVar4 + 0x35) = param_4[1];
                *(iVar4 + 0x38) = param_5[1];
                uVar1 = __sw_hweight8(param_4[1]);
                *(iVar4 + 0x3c) = uVar1;
                if (param_6 != NULL) {
                    *(iVar4 + 0x3d) = param_6[1];
                }
                if (param_3 != 2) {
                    *(iVar4 + 0x40) = param_2[2];
                    *(iVar4 + 0x41) = param_4[2];
                    *(iVar4 + 0x44) = param_5[2];
                    uVar1 = __sw_hweight8(param_4[2]);
                    *(iVar4 + 0x48) = uVar1;
                    if (param_6 != NULL) {
                        *(iVar4 + 0x49) = param_6[2];
                    }
                    if (param_3 != 3) {
                        *(iVar4 + 0x4c) = param_2[3];
                        *(iVar4 + 0x4d) = param_4[3];
                        *(iVar4 + 0x50) = param_5[3];
                        uVar1 = __sw_hweight8(param_4[3]);
                        *(iVar4 + 0x54) = uVar1;
                        if (param_6 != NULL) {
                            *(iVar4 + 0x55) = param_6[3];
                        }
                        if (param_3 != 4) {
                            *(iVar4 + 0x58) = param_2[4];
                            *(iVar4 + 0x59) = param_4[4];
                            *(iVar4 + 0x5c) = param_5[4];
                            uVar1 = __sw_hweight8(param_4[4]);
                            *(iVar4 + 0x60) = uVar1;
                            if (param_6 != NULL) {
                                *(iVar4 + 0x61) = param_6[4];
                            }
                            if (param_3 != 5) {
                                *(iVar4 + 100) = param_2[5];
                                *(iVar4 + 0x65) = param_4[5];
                                *(iVar4 + 0x68) = param_5[5];
                                uVar1 = __sw_hweight8(param_4[5]);
                                *(iVar4 + 0x6c) = uVar1;
                                if (param_6 != NULL) {
                                    *(iVar4 + 0x6d) = param_6[5];
                                    return 0;
                                }
                            }
                        }
                    }
                }
            }
        }
        uVar3 = 0;
    }
    else {
        iVar2 = ___ratelimit(obj.wsa884x_set_channel_map._rs,"wsa884x_set_channel_map");
        if (iVar2 == 0) {
            uVar3 = 0xffffffea;
        }
        else {
            _dev_err(*(param_1 + 0x18),"%s: Invalid port=%pK, ch_mask=%pK, ch_rate=%pK\n","wsa884x_set_channel_map",
                     param_2,param_4,param_5);
            uVar3 = 0xffffffea;
        }
    }
    return uVar3;
}


// ===== sym.codec_debug_write.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f408 (size 8) =====

int64_t * sym.codec_debug_write.142cb795c700479f84f02afc5065e4d0.cfi_jt
                    (int64_t param_1,int64_t param_2,int64_t *param_3,int64_t *param_4)

{
    char *pcVar1;
    ulong *puVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    bool bVar5;
    int iVar6;
    uint32_t uVar7;
    int64_t *piVar8;
    int64_t iVar9;
    ulong uVar10;
    uint64_t uVar11;
    int64_t *piVar12;
    uint uVar13;
    uint64_t uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar15;
    uint32_t uVar16;
    int64_t *arg2;
    int64_t *piVar17;
    int64_t *piVar18;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar auVar19 [16];
    uint uStack_104;
    ulong uStack_100;
    ulong uStack_f8;
    uint uStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    int64_t *piStack_78;
    ulong uStack_70;
    ulong uStack_68;
    uint uStack_60;
    int64_t aiStack_58 [5];
    
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    aiStack_58[4] = *(iVar15 + 0x5e0);
    piVar8 = 0xffffffffffffffea;
    aiStack_58[2] = 0;
    aiStack_58[3] = 0;
    aiStack_58[0] = 0;
    aiStack_58[1] = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    piVar12 = param_3;
    if ((((param_2 != 0) && (param_1 != 0)) && (param_4 != NULL)) &&
       ((piVar8 = 0xffffffffffffffea, param_3 < 0x20 && (iVar15 = *(param_1 + 0xd8), iVar15 != 0)))) {
        __check_object_size(aiStack_58,param_3,0);
        iVar6 = sym._copy_from_user(aiStack_58,param_2,param_3);
        if (iVar6 == 0) {
            *(aiStack_58 + param_3) = '\0';
            piStack_78 = aiStack_58;
            iVar9 = strsep(&piStack_78,0x8001b76);
            if (iVar9 != 0) {
                piVar12 = &uStack_70;
                uVar13 = 0x10;
                if ((*(iVar9 + 1) & 0xdf) != 0x58) {
                    uVar13 = 10;
                }
                iVar6 = kstrtouint(iVar9,uVar13);
                if ((iVar6 == 0) && (iVar9 = strsep(&piStack_78,0x8001b76), iVar9 != 0)) {
                    piVar17 = &uStack_70 | 4;
                    uVar13 = 0x10;
                    if ((*(iVar9 + 1) & 0xdf) != 0x58) {
                        uVar13 = 10;
                    }
                    piVar12 = piVar17;
                    iVar6 = kstrtouint(iVar9,uVar13);
                    if (iVar6 == 0) {
                        strsep(&piStack_78,0x8001b76);
                        piVar12 = uStack_70 & 0xffffffff;
                        piVar8 = 0xffffffffffffffea;
                        if ((uStack_70 < 0x200a) && (uStack_70._4_4_ < 0x100)) {
                            swr_write(iVar15,*(iVar15 + 0x40));
                            piVar8 = param_3;
                            param_4 = piVar17;
                        }
                        goto code_r0x080133f8;
                    }
                }
            }
            piVar8 = 0xffffffffffffffea;
        }
        else {
            piVar8 = 0xfffffffffffffff2;
        }
    }
code_r0x080133f8:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == aiStack_58[4]) {
        return piVar8;
    }
    auVar19 = __stack_chk_fail(piVar8);
    *extraout_x18 = sym.codec_debug_dump;
    pcStack_d8 = sym.codec_debug_dump;
    iVar15 = sp_el0;
    piVar8 = 0xffffffffffffffea;
    iStack_e8 = *(iVar15 + 0x5e0);
    puStack_e0 = &stack0xffffffffffffffd0;
    if ((((auVar19._8_8_ != 0) && (auVar19._0_8_ != 0)) && (piVar12 != NULL)) && (param_4 != NULL)) {
        iVar15 = *(auVar19._0_8_ + 0xd8);
        if ((iVar15 == 0) || (*param_4 < 0)) {
            piVar8 = 0xffffffffffffffea;
        }
        else {
            uStack_104 = 0;
            iVar6 = *param_4;
            uStack_f0 = 0;
            uStack_100 = 0;
            uStack_f8 = 0;
            piVar8 = NULL;
            if (iVar6 < 0x17d78) {
                piVar17 = piVar12 + -1;
                piVar8 = NULL;
                uVar16 = iVar6 / 0xc + 0x40;
                do {
                    piVar18 = piVar8;
                    if (((((((0x864 < uVar16 - 0xf36 >> 1) && (9 < uVar16 - 0xf26)) &&
                           ((0x19 < uVar16 - 0xf06 &&
                            (((0x8c7 < uVar16 - 0x638 && (199 < uVar16 - 0x538)) && (199 < uVar16 - 0x438)))))) &&
                          ((199 < uVar16 - 0x338 && (199 < uVar16 - 0x238)))) && (199 < uVar16 - 0x138)) &&
                        ((((uVar16 & 0xfffffff8) != 0x628 && ((uVar16 & 0xfffffef8) != 0x428)) &&
                         (((uVar16 & 0xfffffef8) != 0x228 &&
                          ((((((uVar16 & 0xfffffff8) != 0x128 && (0x19 < uVar16 - 0x606)) &&
                             (0x19 < (uVar16 & 0xfffffeff) - 0x406)) &&
                            ((0x19 < (uVar16 & 0xfffffeff) - 0x206 && (0x19 < uVar16 - 0x106)))) &&
                           (0xe < uVar16 - 0xf1)))))))) &&
                       (((0xe < uVar16 - 0xe1 && (0xe < uVar16 - 0xd1)) &&
                        ((6 < uVar16 - 0xc9 &&
                         ((((5 < uVar16 - 0xc2 && (0x4e < uVar16 - 0x71)) && (0xe < uVar16 - 0x61)) &&
                          (((9 < uVar16 - 0x56 && (2 < uVar16 - 0x47)) && (4 < uVar16 - 0x4b)))))))))) {
                        swr_read(iVar15,*(iVar15 + 0x40),uVar16,&uStack_104,1);
                        piVar12 = "0x%.3x: 0x%.2x\n";
                        uVar7 = snprintf(&uStack_100,0x14,"0x%.3x: 0x%.2x\n",uVar16,uStack_104);
                        if (uVar7 < 0) {
                            iVar6 = ___ratelimit(obj.swr_slave_reg_show._rs,"swr_slave_reg_show");
                            if (iVar6 != 0) {
                                uVar10 = 0x8001c32;
code_r0x080137d8:
                                _printk(uVar10,"swr_slave_reg_show");
                            }
                        }
                        else {
                            arg2 = uVar7;
                            piVar18 = piVar8 + arg2;
                            if (piVar17 <= piVar18) break;
                            noname_1 = __check_object_size(&uStack_100,arg2,1);
                            piVar12 = arg2;
                            iVar9 = sym._copy_to_user(auVar19._8_8_ + piVar8,noname_1,arg2);
                            if (iVar9 == 0) {
                                *param_4 = *param_4 + arg2;
                                goto code_r0x08013578;
                            }
                            iVar6 = ___ratelimit(obj.swr_slave_reg_show._rs.136,"swr_slave_reg_show");
                            if (iVar6 != 0) {
                                uVar10 = 0x80020bf;
                                goto code_r0x080137d8;
                            }
                        }
                        piVar8 = 0xfffffffffffffff2;
                        break;
                    }
code_r0x08013578:
                    bVar5 = uVar16 < 0x2009;
                    piVar8 = piVar18;
                    uVar16 = uVar16 + 1;
                } while (bVar5);
            }
            *param_4 = 0x1806c;
        }
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_e8) {
        return piVar8;
    }
    uVar11 = __stack_chk_fail();
    *extraout_x18_00 = sym._copy_to_user;
    puVar2 = sp_el0;
    uVar4 = (uVar11 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar14 = uVar11, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar14 = uVar11 & uVar4;
    }
    bVar5 = CARRY8(uVar14,piVar12);
    pcVar1 = uVar14 + piVar12;
    uVar14 = 0;
    if (!bVar5 || pcVar1 == NULL) {
        uVar14 = 0x7fffffffff;
    }
    if (bVar5) {
        pcVar1 = 0xffffffffffffffff;
    }
    if (!CARRY8(pcVar1,~uVar14) && !CARRY8(pcVar1 + ~uVar14,bVar5) || pcVar1 == uVar14 + !bVar5) {
        if ((_snd_soc_info_enum_double >> 0x18 & 1) == 0) {
            uVar14 = daif;
            if ((uVar14 & 0x80) == 0) {
                uVar3 = daif;
                daif = uVar3 | 0xc0;
            }
            uVar3 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar3 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar14;
        }
        if ((uVar11 & uVar4 & 0xffffff8000000000) != 0) {
            uVar11 = 0;
        }
        piVar12 = __arch_copy_to_user(uVar11);
        if ((_snd_soc_info_enum_double >> 0x18 & 1) == 0) {
            uVar4 = daif;
            if ((uVar4 & 0x80) == 0) {
                uVar11 = daif;
                daif = uVar11 | 0xc0;
            }
            uVar11 = ttbr1_el1;
            ttbr0_el1 = (uVar11 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar11 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar4;
        }
    }
    return piVar12;
}


// ===== sym.codec_debug_peek_write.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f410 (size 8) =====

uint64_t sym.codec_debug_peek_write.142cb795c700479f84f02afc5065e4d0.cfi_jt
                   (int64_t param_1,int64_t param_2,uint64_t param_3,int64_t *param_4)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint uVar4;
    ulong *in_x18;
    int64_t iVar5;
    int64_t iVar6;
    ulong unaff_x30;
    uchar auVar7 [16];
    int64_t *piStack_88;
    uint64_t auStack_80 [2];
    uint uStack_70;
    int64_t aiStack_68 [5];
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    aiStack_68[4] = *(iVar5 + 0x5e0);
    uVar2 = 0xffffffffffffffea;
    aiStack_68[2] = 0;
    aiStack_68[3] = 0;
    aiStack_68[0] = 0;
    aiStack_68[1] = 0;
    uStack_70 = 0;
    auStack_80[0] = 0;
    auStack_80[1] = 0;
    if ((((param_2 == 0) || (param_1 == 0)) || (param_3 == 0)) || (param_4 == NULL)) goto code_r0x08013118;
    iVar5 = *(param_1 + 0xd8);
    if ((iVar5 != 0) && (iVar6 = *(iVar5 + 0xe0), iVar6 != 0)) {
        uVar2 = 0xffffffffffffffea;
        if ((0x1f < param_3) || (*param_4 < 0)) goto code_r0x08013118;
        __check_object_size(aiStack_68,param_3,0);
        iVar1 = sym._copy_from_user(aiStack_68,param_2,param_3);
        if (iVar1 != 0) {
            uVar2 = 0xfffffffffffffff2;
            goto code_r0x08013118;
        }
        *(aiStack_68 + param_3) = 0;
        piStack_88 = aiStack_68;
        iVar3 = strsep(&piStack_88,0x8001b76);
        if (iVar3 != 0) {
            uVar4 = 0x10;
            if ((*(iVar3 + 1) & 0xdf) != 0x58) {
                uVar4 = 10;
            }
            iVar1 = kstrtouint(iVar3,uVar4,auStack_80);
            if (iVar1 == 0) {
                strsep(&piStack_88,0x8001b76);
                if (auStack_80[0] < 0x200a) {
                    swr_read(iVar5,*(iVar5 + 0x40),auStack_80[0] & 0xffffffff,iVar6 + 0x240,1);
                    uVar2 = param_3;
                    goto code_r0x08013118;
                }
            }
        }
    }
    uVar2 = 0xffffffffffffffea;
code_r0x08013118:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == aiStack_68[4]) {
        return uVar2;
    }
    auVar7 = __stack_chk_fail(uVar2);
    *(auVar7._8_8_ + 0xd8) = *(auVar7._0_8_ + 0x2d8);
    return 0;
}


// ===== sym.wsa884x_codec_version_read.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f418 (size 8) =====

uint64_t sym.wsa884x_codec_version_read.142cb795c700479f84f02afc5065e4d0.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,char *param_4,ulong param_5,ulong param_6)

{
    int64_t *arg1;
    uint64_t *puVar1;
    uint64_t *puVar2;
    uint64_t *puVar3;
    code *pcVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    uint64_t *puVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    int64_t iVar15;
    int64_t *piVar16;
    ulong *puVar17;
    char *pcVar18;
    ulong uVar19;
    ulong uVar20;
    ulong uVar21;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t *puVar22;
    ulong unaff_x30;
    uint32_t uStack_11c;
    uint32_t uStack_118;
    uchar auStack_114 [4];
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    int64_t iStack_e8;
    uchar **ppuStack_e0;
    code *pcStack_d8;
    ulong uStack_80;
    unkbyte7 Stack_78;
    char cStack_71;
    uchar uStack_70;
    uchar uStack_6f;
    uchar uStack_6e;
    unkbyte5 Stack_6d;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    ulong uStack_40;
    char acStack_38 [5];
    ushort uStack_33;
    char cStack_31;
    char acStack_30 [5];
    ushort uStack_2b;
    uchar uStack_29;
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    iStack_18 = *(iVar15 + 0x5e0);
    acStack_38[0] = '\0';
    acStack_38[1] = '\0';
    acStack_38[2] = '\0';
    acStack_38[3] = '\0';
    acStack_38[4] = '\0';
    uStack_33 = 0;
    cStack_31 = '\0';
    uStack_28 = 0;
    uStack_20 = 0;
    acStack_30[0] = '\0';
    acStack_30[1] = '\0';
    acStack_30[2] = '\0';
    acStack_30[3] = '\0';
    acStack_30[4] = '\0';
    uStack_2b = 0;
    uStack_29 = 0;
    uStack_40 = param_6;
    if (*(param_1 + 0x40) == 0) {
        iVar5 = ___ratelimit(obj.wsa884x_codec_version_read._rs,"wsa884x_codec_version_read");
        if (iVar5 == 0) {
            uVar10 = 0xffffffffffffffea;
        }
        else {
            _printk(0x800222e,"wsa884x_codec_version_read");
            uVar10 = 0xffffffffffffffea;
        }
    }
    else {
        if (*(*(param_1 + 0x40) + 0xdc) == 0) {
            uVar20 = 0xc;
            acStack_38[0] = str.WSA884X_1_0_n[0];
            acStack_38[1] = str.WSA884X_1_0_n[1];
            acStack_38[2] = str.WSA884X_1_0_n[2];
            acStack_38[3] = str.WSA884X_1_0_n[3];
            acStack_38[4] = str.WSA884X_1_0_n[4];
            uStack_33 = str.WSA884X_1_0_n._5_3_;
            cStack_31 = SUB31(str.WSA884X_1_0_n._5_3_,2);
            acStack_30[0] = str.WSA884X_1_0_n[8];
            acStack_30[1] = str.WSA884X_1_0_n[9];
            acStack_30[2] = str.WSA884X_1_0_n[10];
            acStack_30[3] = str.WSA884X_1_0_n[0xb];
            acStack_30[4] = str.WSA884X_1_0_n[0xc];
        }
        else {
            uVar20 = 0xe;
            acStack_38 = SUB75(str.VER_UNDEFINED_n._0_7_,0);
            uStack_33 = SUB72(str.VER_UNDEFINED_n._0_7_,5);
            cStack_31 = str.VER_UNDEFINED_n[7];
            acStack_30 = SUB75(str.VER_UNDEFINED_n._8_7_,0);
            uStack_2b = SUB72(str.VER_UNDEFINED_n._8_7_,5);
        }
        pcVar18 = acStack_38;
        uVar10 = simple_read_from_buffer(param_4,param_5,&uStack_40,pcVar18,uVar20);
        param_4 = pcVar18;
        param_5 = uVar20;
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_18) {
        return uVar10;
    }
    iVar11 = __stack_chk_fail(uVar10);
    *extraout_x18 = sym.wsa884x_variant_read;
    pcStack_48 = sym.wsa884x_variant_read;
    iVar15 = sp_el0;
    iStack_58 = *(iVar15 + 0x5e0);
    Stack_78 = 0;
    cStack_71 = '\0';
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6e = 0;
    Stack_6d = 0;
    uStack_80 = param_6;
    puStack_50 = &stack0xfffffffffffffff0;
    if (*(iVar11 + 0x40) == 0) {
        iVar5 = ___ratelimit(obj.wsa884x_variant_read._rs,"wsa884x_variant_read");
        if (iVar5 == 0) {
            uVar10 = 0xffffffffffffffea;
        }
        else {
            _printk(0x800222e,"wsa884x_variant_read");
            uVar10 = 0xffffffffffffffea;
        }
    }
    else {
        iVar5 = *(*(iVar11 + 0x40) + 0xd8);
        if (iVar5 == 0xc) {
            uStack_70 = 10;
            uStack_6f = 0;
            uVar21 = 9;
            uVar20 = str.WSA8845H_n._0_8_;
code_r0x0800fb88:
            Stack_78 = uVar20;
            cStack_71 = SUB81(uVar20,7);
        }
        else {
            if (iVar5 == 5) {
                pcVar18 = "WSA8845\n";
            }
            else {
                if (iVar5 != 0) {
                    uVar21 = 10;
                    uStack_70 = 0x44;
                    uStack_6f = 10;
                    uVar20 = str.UNDEFINED_n._0_8_;
                    goto code_r0x0800fb88;
                }
                pcVar18 = "WSA8840\n";
            }
            uVar21 = 8;
            uStack_70 = 0;
            Stack_78 = *pcVar18;
            cStack_71 = *pcVar18 >> 0x38;
        }
        uStack_6e = 0;
        uVar10 = simple_read_from_buffer(param_4,param_5,&uStack_80,&Stack_78,uVar21);
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_58) {
        return uVar10;
    }
    uVar10 = __stack_chk_fail(uVar10);
    *extraout_x18_00 = sym.wsa884x_swr_probe;
    pcStack_d8 = sym.wsa884x_swr_probe;
    iVar15 = sp_el0;
    arg1 = uVar10 + 0x48;
    iStack_e8 = *(iVar15 + 0x5e0);
    auStack_114[0] = 0;
    uStack_11c = 0;
    uStack_118 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_110 = 0;
    ppuStack_e0 = &puStack_50;
    puVar12 = devm_kmalloc(arg1,0x2c8,0xdc0);
    if ((puVar12 == NULL) || (uVar13 = devm_kmalloc(arg1,0x88,0xdc0), uVar13 == 0)) {
        uVar14 = 0xfffffff4;
    }
    else {
        memcpy(uVar13,obj.wsa884x_regmap_irq_chip,0x88);
        puVar1 = puVar12 + 0x52;
        puVar2 = puVar12 + 0x53;
        msm_cdc_get_power_supplies(arg1,puVar1,puVar2);
        if ((puVar12[0x52] == 0) || (*puVar2 < 1)) {
            pcVar18 = "%s: no power supplies defined\n";
code_r0x08010174:
            _dev_err(arg1,pcVar18,"wsa884x_enable_supplies");
code_r0x08010184:
            uVar14 = 0xfffffdfb;
        }
        else {
            iVar5 = msm_cdc_init_supplies(arg1,puVar12 + 0x54);
            if (puVar12[0x54] == 0) {
                _dev_err(arg1,"%s: Cannot init wsa supplies\n","wsa884x_enable_supplies");
                if (iVar5 != 0) goto code_r0x08010184;
            }
            else {
                iVar5 = msm_cdc_enable_static_supplies(arg1,puVar12[0x54],*puVar1,*puVar2);
                if (iVar5 != 0) {
                    pcVar18 = "%s: wsa static supply enable failed!\n";
                    goto code_r0x08010174;
                }
            }
            uVar14 = of_parse_phandle(*(uVar10 + 0x338),"qcom,spkr-sd-n-node",0);
            puVar12[0x19] = uVar14;
            if (uVar14 == 0) {
                uVar14 = 0;
            }
            else {
                *(uVar10 + 0xe0) = puVar12;
                puVar12[1] = arg1;
                puVar12[2] = uVar10;
                iVar5 = msm_cdc_pinctrl_get_state();
                iVar6 = msm_cdc_pinctrl_select_active_state(puVar12[0x19]);
                if ((iVar6 != 0) && (iVar7 = ___ratelimit(obj.wsa884x_gpio_ctrl._rs,"wsa884x_gpio_ctrl"), iVar7 != 0))
                {
                    _dev_err(puVar12[1],"%s: Failed to turn state %d; ret=%d\n","wsa884x_gpio_ctrl",1,iVar6);
                }
                usleep_range_state(5000,0x1392,2);
                iVar6 = swr_get_logical_dev_num(uVar10,*(uVar10 + 0x3d8),auStack_114);
                if (iVar6 == 0) {
                    *(uVar10 + 0x40) = auStack_114[0];
                    uVar14 = __devm_regmap_init_swr(uVar10,obj.wsa884x_regmap_config,0,0);
                    *puVar12 = uVar14;
                    if (uVar14 < 0xfffffffffffff001) {
                        devm_regmap_qti_debugfs_register(arg1,uVar14);
                        *(uVar13 + 0x80) = puVar12;
                        puVar3 = puVar12 + 0x23;
                        puVar12[0x27] = arg1;
                        puVar12[0x23] = uVar13;
                        puVar12[0x24] = "WSA884X";
                        puVar12[0x25] = *puVar12;
                        uVar8 = wcd_irq_init(puVar3,puVar12 + 0x22);
                        if (uVar8 != 0) {
                            uVar14 = uVar8;
                            pcVar18 = "%s: IRQ init failed: %d\n";
                            piVar16 = puVar12[1];
                            goto code_r0x080102bc;
                        }
                        *(puVar12[2] + 1000) = puVar12[0x22];
                        wcd_request_irq(puVar3,0,"WSA SAF2WAR",
                                        sym.wsa884x_saf2war_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar12)
                        ;
                        wcd_request_irq(puVar3,1,"WSA WAR2SAF",
                                        sym.wsa884x_war2saf_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar12)
                        ;
                        wcd_request_irq(puVar3,2,"WSA OTP",
                                        sym.wsa884x_otp_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar12);
                        wcd_request_irq(puVar3,3,"WSA OCP",
                                        sym.wsa884x_ocp_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar12);
                        wcd_request_irq(puVar3,4,"WSA CLIP",
                                        sym.wsa884x_clip_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar12);
                        wcd_disable_irq(puVar3,4);
                        wcd_request_irq(puVar3,5,"WSA PDM WD",
                                        sym.wsa884x_pdm_wd_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar12);
                        wcd_request_irq(puVar3,6,"WSA CLK WD",
                                        sym.wsa884x_clk_wd_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar12);
                        wcd_request_irq(puVar3,7,"WSA EXT INT",
                                        sym.wsa884x_ext_int_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar12)
                        ;
                        wcd_disable_irq(puVar3,7);
                        wcd_request_irq(puVar3,8,"WSA UVLO",
                                        sym.wsa884x_uvlo_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar12);
                        wcd_request_irq(puVar3,9,"WSA PA ERR",
                                        sym.wsa884x_pa_on_err_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,
                                        puVar12);
                        uVar13 = devm_kmalloc(arg1,0x160,0xdc0);
                        puVar12[0x57] = uVar13;
                        if (uVar13 == 0) {
                            uVar14 = 0xfffffff4;
                        }
                        else {
                            memcpy(uVar13,obj.soc_codec_dev_wsa884x_wsa,0x160);
                            uVar13 = devm_kmalloc(arg1,0xf0,0xdc0);
                            puVar12[0x56] = uVar13;
                            if (uVar13 == 0) {
                                uVar14 = 0xfffffff4;
                                puVar17 = NULL;
                            }
                            else {
                                memcpy(uVar13,obj.wsa_dai,0xf0);
                                uVar8 = *(uVar10 + 0x3d8);
                                iVar7 = of_device_is_compatible(*(uVar10 + 0x338),0x8001f1b);
                                iVar6 = 3;
                                if (iVar7 == 0) {
                                    iVar6 = 1;
                                }
                                uVar8 = iVar6 + (uVar8 & 0xf);
                                snprintf(&uStack_110,0x28,"wsa-codec.%d",uVar8);
                                uVar20 = strlen(&uStack_110);
                                uVar20 = kstrndup(&uStack_110,uVar20,0xcc0);
                                *puVar12[0x57] = uVar20;
                                snprintf(&uStack_110,0x28,"wsa_rx%d",uVar8);
                                uVar20 = strlen(&uStack_110);
                                uVar20 = kstrndup(&uStack_110,uVar20,0xcc0);
                                *puVar12[0x56] = uVar20;
                                snprintf(&uStack_110,0x28,"WSA884X_AIF%d Playback",uVar8);
                                uVar20 = strlen(&uStack_110);
                                uVar20 = kstrndup(&uStack_110,uVar20,0xcc0);
                                *(puVar12[0x56] + 0xb0) = uVar20;
                                uVar14 = snd_soc_register_component(arg1,puVar12[0x57],puVar12[0x56],1);
                                uVar14 = uVar14 & 0xffffffff;
                                iVar15 = snd_soc_lookup_component(arg1,*puVar12[0x57]);
                                if (iVar15 == 0) {
                                    _dev_err(arg1,"%s: component is NULL\n","wsa884x_swr_probe");
                                    uVar14 = 0xffffffea;
                                }
                                else {
                                    uVar13 = of_parse_phandle(*(uVar10 + 0x338),"qcom,bolero-handle",0);
                                    puVar12[0x49] = uVar13;
                                    if (uVar13 == 0) {
                                        uVar13 = of_parse_phandle(*(uVar10 + 0x338),"qcom,lpass-cdc-handle",0);
                                        puVar12[0x49] = uVar13;
                                        if (uVar13 != 0) goto code_r0x080100cc;
                                        _dev_info(arg1,"%s: parent node not found\n","wsa884x_swr_probe");
                                    }
                                    else {
code_r0x080100cc:
                                        uVar13 = of_find_device_by_node();
                                        puVar12[0x4b] = uVar13;
                                        if (uVar13 == 0) {
                                            pcVar18 = "%s: parent dev not found\n";
                                        }
                                        else {
                                            puVar22 = *(uVar13 + 0xa0);
                                            if (puVar22 != NULL) {
                                                puVar12[0x4d] =
                                                     sym.wsa884x_event_notify.142cb795c700479f84f02afc5065e4d0.cfi_jt;
                                                pcVar4 = puVar22[2];
                                                if (pcVar4 == NULL) {
                                                    uVar13 = 0;
                                                }
                                                else {
                                                    __cfi_slowpath_diag(0x3b795baa068bc3a6,pcVar4,0x80018b0);
                                                    (*pcVar4)(*puVar22,puVar12 + 0x4d,1);
                                                    uVar13 = puVar22[2];
                                                }
                                                puVar12[0x51] = uVar13;
                                                puVar12[0x50] = *puVar22;
                                                goto code_r0x080101a8;
                                            }
                                            pcVar18 = "%s: plat data not found\n";
                                        }
                                        _dev_err(arg1,pcVar18,"wsa884x_swr_probe");
                                    }
code_r0x080101a8:
                                    uVar20 = *(uVar10 + 0x338);
                                    *(puVar12 + 0x74) = 0;
                                    *(puVar12 + 0x10c) = uVar8;
                                    uVar13 = of_parse_phandle(uVar20,"qcom,wsa-macro-handle",0);
                                    puVar12[0x4a] = uVar13;
                                    if (uVar13 == 0) {
                                        pcVar18 = "%s: parent node not found\n";
                                    }
                                    else {
                                        uVar13 = of_find_device_by_node();
                                        puVar12[0x4c] = uVar13;
                                        if (uVar13 != 0) {
                                            uVar8 = ~uVar8 & 1;
                                            uVar9 = of_property_read_u32_index
                                                              (*(uVar13 + 0x300),"qcom,wsa-rloads",uVar8,
                                                               puVar12 + 0x1d);
                                            if (uVar9 == 0) {
                                                uVar9 = of_property_read_u32_index
                                                                  (*(puVar12[0x4c] + 0x300),"qcom,wsa-bat-cfgs",uVar8)
                                                ;
                                                if (uVar9 == 0) {
                                                    uVar9 = of_property_read_variable_u32_array
                                                                      (*(puVar12[0x4c] + 0x300),"qcom,noise-gate-mode"
                                                                       ,&uStack_118,1,0);
                                                    if (uVar9 < 0) {
                                                        _dev_info(arg1,"%s: Failed to read wsa noise gate mode\n",
                                                                  "wsa884x_swr_probe");
code_r0x08010388:
                                                        *(puVar12 + 0x58) = 0;
                                                    }
                                                    else {
                                                        if (3 < uStack_118) goto code_r0x08010388;
                                                        *(puVar12 + 0x58) = uStack_118;
                                                    }
                                                    iVar11 = of_find_property(*(puVar12[0x4c] + 0x300),
                                                                              "qcom,wsa-system-gains",&uStack_11c);
                                                    if (iVar11 == 0) {
                                                        uVar9 = uVar9 & uVar9 >> 0x1f;
                                                        pcVar18 = "%s: missing wsa-system-gains\n";
                                                    }
                                                    else {
                                                        uVar9 = of_property_read_variable_u32_array
                                                                          (*(puVar12[0x4c] + 0x300),
                                                                           "qcom,wsa-system-gains",puVar12 + 0x1e,
                                                                           (uStack_11c << 0x20) >> 0x23,0);
                                                        if (-1 < uVar9) {
                                                            uVar8 = *(puVar12 + 0x74) + uVar8 * 2;
                                                            if (3 < uVar8) goto code_r0x08010804;
                                                            uVar9 = *(puVar12 + 0x1e + uVar8 * 4);
                                                            *(puVar12 + 0xec) = uVar9;
                                                            uVar13 = sym.wsa884x_validate_dt_configuration_params
                                                                               (uVar8,puVar12[0x1d],*(puVar12 + 0xe4)
                                                                                ,uVar9);
                                                            if ((uVar13 & 1) == 0) {
                                                                *(puVar12 + 4) = puVar12[0x1b] != 0xc;
                                                                sym.wsa884x_set_gain_parameters(iVar15);
                                                                sym.wsa884x_set_pbr_parameters(iVar15);
                                                                snd_soc_component_write
                                                                          (iVar15,0x3504,
                                                                           *(puVar12 + 0x74) == 0 |
                                                                           (puVar12[0x21] & 0xf) << 2 | 0xc0);
                                                                snd_soc_component_write(iVar15,0x3505,0);
                                                                if (puVar12[0x1d] < 2) {
                                                                    snd_soc_component_update_bits
                                                                              (iVar15,0x304c,0x70,0x70);
                                                                }
                                                                if (*(puVar12 + 0x74) == 0) {
                                                                    uVar20 = 0x34b0;
                                                                    uVar21 = 0xf0;
                                                                    uVar19 = 0xf0;
                                                                }
                                                                else {
                                                                    snd_soc_component_update_bits
                                                                              (iVar15,0x34b0,0xf0,0x30);
                                                                    snd_soc_component_update_bits(iVar15,0x341a,2,2);
                                                                    uVar20 = 0x304a;
                                                                    uVar21 = 8;
                                                                    uVar19 = 8;
                                                                }
                                                                snd_soc_component_update_bits
                                                                          (iVar15,uVar20,uVar21,uVar19);
                                                                if ((*(puVar12 + 0xe4) != 1) && (*(puVar12 + 0xe4) != 4)
                                                                   ) {
                                                                    snd_soc_component_update_bits(iVar15,0x3040,1,0);
                                                                }
                                                                uVar8 = sym.wsa884x_parse_port_params(arg1);
                                                                if (uVar8 == 0) {
                                                                    swr_init_port_params(puVar12[2],6,puVar12 + 0x40);
                                                                    __mutex_init(puVar12 + 0x10,"&wsa884x->res_lock",
                                                                                 obj.wsa884x_swr_probe.__key);
                                                                    if (puVar12[0x44] == 0) {
                                                                        iVar15 = *(uVar10 + 0xb8);
                                                                        if (iVar15 == 0) {
                                                                            iVar15 = *arg1;
                                                                        }
                                                                        uVar13 = debugfs_create_dir(iVar15,0);
                                                                        puVar12[0x44] = uVar13;
                                                                        if (uVar13 < 0xfffffffffffff001) {
                                                                            uVar13 = debugfs_create_file("swrslave_peek"
                                                                                                         ,0x8124,
                                                                                                         uVar13,uVar10
                                                                                                         ,
                                                            obj.codec_debug_read_ops);
                                                            puVar12[0x45] = uVar13;
                                                            uVar13 = debugfs_create_file("swrslave_poke",0x8124,
                                                                                         puVar12[0x44],uVar10,
                                                                                         obj.codec_debug_write_ops);
                                                            puVar12[0x46] = uVar13;
                                                            uVar10 = debugfs_create_file("swrslave_reg_dump",0x8124,
                                                                                         puVar12[0x44],uVar10,
                                                                                         obj.codec_debug_dump_ops);
                                                            uVar14 = 0;
                                                            puVar12[0x47] = uVar10;
                                                            goto code_r0x08010768;
                                                            }
                                                            }
                                                            uVar14 = 0;
                                                            goto code_r0x08010768;
                                                            }
                                                            uVar14 = uVar8;
                                                            _dev_err(arg1,"Failed to read port params\n");
                                                            goto code_r0x08010764;
                                                            }
                                                            _dev_err(arg1,
                                                            "%s: invalid dt parameter: Bat_cfg: 0x%x rload: 0x%x, sys_gain: 0x%x\n"
                                                            ,"wsa884x_swr_probe",*(puVar12 + 0xe4),puVar12[0x1d],
                                                            *(puVar12 + 0xec));
                                                            uVar14 = 0xffffffea;
                                                            goto code_r0x08010634;
                                                        }
                                                        pcVar18 = "%s: Failed to read wsa system gains\n";
                                                    }
                                                    uVar14 = uVar9;
                                                    _dev_err(arg1,pcVar18,"wsa884x_swr_probe");
                                                    goto code_r0x08010634;
                                                }
                                                pcVar18 = "%s: Failed to read wsa bat cfgs\n";
                                            }
                                            else {
                                                pcVar18 = "%s: Failed to read wsa rloads\n";
                                            }
                                            uVar14 = uVar9;
                                            _dev_err(arg1,pcVar18,"wsa884x_swr_probe");
                                            goto code_r0x08010634;
                                        }
                                        pcVar18 = "%s: parent dev not found\n";
                                    }
                                    _dev_err(arg1,pcVar18,"wsa884x_swr_probe");
                                }
code_r0x08010634:
                                puVar17 = puVar12[0x56];
                            }
                            if (puVar17 != NULL) {
                                kfree(*puVar17);
                                kfree(*(puVar12[0x56] + 0xb0));
                                kfree(puVar12[0x56]);
                            }
                            if (puVar12[0x57] != NULL) {
                                kfree(*puVar12[0x57]);
                                kfree(puVar12[0x57]);
                            }
                        }
                        wcd_free_irq(puVar3,0,0);
                        wcd_free_irq(puVar3,1,0);
                        wcd_free_irq(puVar3,2,0);
                        wcd_free_irq(puVar3,3,0);
                        wcd_free_irq(puVar3,4,0);
                        wcd_free_irq(puVar3,5,0);
                        wcd_free_irq(puVar3,6,0);
                        wcd_free_irq(puVar3,7,0);
                        wcd_free_irq(puVar3,8,0);
                        wcd_free_irq(puVar3,9,0);
                        wcd_irq_exit(puVar3,puVar12[0x22]);
                    }
                    else {
                        pcVar18 = "%s: regmap_init failed %d\n";
                        piVar16 = arg1;
code_r0x080102bc:
                        _dev_err(piVar16,pcVar18,"wsa884x_swr_probe",uVar14 & 0xffffffff);
                    }
                    if (((iVar5 == 0) && (iVar5 = msm_cdc_pinctrl_select_sleep_state(puVar12[0x19]), iVar5 != 0)) &&
                       (iVar6 = ___ratelimit(obj.wsa884x_gpio_ctrl._rs,"wsa884x_gpio_ctrl"), iVar6 != 0)) {
                        _dev_err(puVar12[1],"%s: Failed to turn state %d; ret=%d\n","wsa884x_gpio_ctrl",0,iVar5);
                    }
                    swr_remove_device(uVar10);
                }
                else {
                    uVar14 = 0xfffffdfb;
                }
            }
            msm_cdc_release_supplies(arg1,puVar12[0x54],*puVar1,*puVar2);
        }
code_r0x08010764:
        *(uVar10 + 0xe0) = 0;
    }
code_r0x08010768:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_e8) {
        return uVar14 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x08010804:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x8010808);
    (*pcVar4)();
}


// ===== sym.wsa884x_variant_read.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f420 (size 8) =====

uint64_t sym.wsa884x_variant_read.142cb795c700479f84f02afc5065e4d0.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6)

{
    int64_t *arg1;
    uint64_t *puVar1;
    uint64_t *puVar2;
    uint64_t *puVar3;
    code *pcVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    uint64_t *puVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong uVar14;
    int64_t iVar15;
    int64_t *piVar16;
    int64_t iVar17;
    ulong *puVar18;
    char *pcVar19;
    ulong uVar20;
    ulong uVar21;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t *puVar22;
    ulong unaff_x30;
    uint32_t uStack_dc;
    uint32_t uStack_d8;
    uchar auStack_d4 [4];
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    ulong uStack_40;
    unkbyte7 Stack_38;
    char cStack_31;
    uchar uStack_30;
    uchar uStack_2f;
    uchar uStack_2e;
    unkbyte5 Stack_2d;
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    iStack_18 = *(iVar15 + 0x5e0);
    Stack_38 = 0;
    cStack_31 = '\0';
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_30 = 0;
    uStack_2f = 0;
    uStack_2e = 0;
    Stack_2d = 0;
    uStack_40 = param_6;
    if (*(param_1 + 0x40) == 0) {
        iVar5 = ___ratelimit(obj.wsa884x_variant_read._rs,"wsa884x_variant_read");
        if (iVar5 == 0) {
            uVar10 = 0xffffffffffffffea;
        }
        else {
            _printk(0x800222e,"wsa884x_variant_read");
            uVar10 = 0xffffffffffffffea;
        }
    }
    else {
        iVar5 = *(*(param_1 + 0x40) + 0xd8);
        if (iVar5 == 0xc) {
            uStack_30 = 10;
            uStack_2f = 0;
            uVar21 = 9;
            uVar14 = str.WSA8845H_n._0_8_;
code_r0x0800fb88:
            Stack_38 = uVar14;
            cStack_31 = SUB81(uVar14,7);
        }
        else {
            if (iVar5 == 5) {
                pcVar19 = "WSA8845\n";
            }
            else {
                if (iVar5 != 0) {
                    uVar21 = 10;
                    uStack_30 = 0x44;
                    uStack_2f = 10;
                    uVar14 = str.UNDEFINED_n._0_8_;
                    goto code_r0x0800fb88;
                }
                pcVar19 = "WSA8840\n";
            }
            uVar21 = 8;
            uStack_30 = 0;
            Stack_38 = *pcVar19;
            cStack_31 = *pcVar19 >> 0x38;
        }
        uStack_2e = 0;
        uVar10 = simple_read_from_buffer(param_4,param_5,&uStack_40,&Stack_38,uVar21);
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_18) {
        return uVar10;
    }
    uVar10 = __stack_chk_fail(uVar10);
    *extraout_x18 = sym.wsa884x_swr_probe;
    pcStack_98 = sym.wsa884x_swr_probe;
    iVar15 = sp_el0;
    arg1 = uVar10 + 0x48;
    iStack_a8 = *(iVar15 + 0x5e0);
    auStack_d4[0] = 0;
    uStack_dc = 0;
    uStack_d8 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d0 = 0;
    puStack_a0 = &stack0xfffffffffffffff0;
    puVar11 = devm_kmalloc(arg1,0x2c8,0xdc0);
    if ((puVar11 == NULL) || (uVar12 = devm_kmalloc(arg1,0x88,0xdc0), uVar12 == 0)) {
        uVar13 = 0xfffffff4;
    }
    else {
        memcpy(uVar12,obj.wsa884x_regmap_irq_chip,0x88);
        puVar1 = puVar11 + 0x52;
        puVar2 = puVar11 + 0x53;
        msm_cdc_get_power_supplies(arg1,puVar1,puVar2);
        if ((puVar11[0x52] == 0) || (*puVar2 < 1)) {
            pcVar19 = "%s: no power supplies defined\n";
code_r0x08010174:
            _dev_err(arg1,pcVar19,"wsa884x_enable_supplies");
code_r0x08010184:
            uVar13 = 0xfffffdfb;
        }
        else {
            iVar5 = msm_cdc_init_supplies(arg1,puVar11 + 0x54);
            if (puVar11[0x54] == 0) {
                _dev_err(arg1,"%s: Cannot init wsa supplies\n","wsa884x_enable_supplies");
                if (iVar5 != 0) goto code_r0x08010184;
            }
            else {
                iVar5 = msm_cdc_enable_static_supplies(arg1,puVar11[0x54],*puVar1,*puVar2);
                if (iVar5 != 0) {
                    pcVar19 = "%s: wsa static supply enable failed!\n";
                    goto code_r0x08010174;
                }
            }
            uVar13 = of_parse_phandle(*(uVar10 + 0x338),"qcom,spkr-sd-n-node",0);
            puVar11[0x19] = uVar13;
            if (uVar13 == 0) {
                uVar13 = 0;
            }
            else {
                *(uVar10 + 0xe0) = puVar11;
                puVar11[1] = arg1;
                puVar11[2] = uVar10;
                iVar5 = msm_cdc_pinctrl_get_state();
                iVar6 = msm_cdc_pinctrl_select_active_state(puVar11[0x19]);
                if ((iVar6 != 0) && (iVar7 = ___ratelimit(obj.wsa884x_gpio_ctrl._rs,"wsa884x_gpio_ctrl"), iVar7 != 0))
                {
                    _dev_err(puVar11[1],"%s: Failed to turn state %d; ret=%d\n","wsa884x_gpio_ctrl",1,iVar6);
                }
                usleep_range_state(5000,0x1392,2);
                iVar6 = swr_get_logical_dev_num(uVar10,*(uVar10 + 0x3d8),auStack_d4);
                if (iVar6 == 0) {
                    *(uVar10 + 0x40) = auStack_d4[0];
                    uVar13 = __devm_regmap_init_swr(uVar10,obj.wsa884x_regmap_config,0,0);
                    *puVar11 = uVar13;
                    if (uVar13 < 0xfffffffffffff001) {
                        devm_regmap_qti_debugfs_register(arg1,uVar13);
                        *(uVar12 + 0x80) = puVar11;
                        puVar3 = puVar11 + 0x23;
                        puVar11[0x27] = arg1;
                        puVar11[0x23] = uVar12;
                        puVar11[0x24] = "WSA884X";
                        puVar11[0x25] = *puVar11;
                        uVar8 = wcd_irq_init(puVar3,puVar11 + 0x22);
                        if (uVar8 != 0) {
                            uVar13 = uVar8;
                            pcVar19 = "%s: IRQ init failed: %d\n";
                            piVar16 = puVar11[1];
                            goto code_r0x080102bc;
                        }
                        *(puVar11[2] + 1000) = puVar11[0x22];
                        wcd_request_irq(puVar3,0,"WSA SAF2WAR",
                                        sym.wsa884x_saf2war_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar11)
                        ;
                        wcd_request_irq(puVar3,1,"WSA WAR2SAF",
                                        sym.wsa884x_war2saf_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar11)
                        ;
                        wcd_request_irq(puVar3,2,"WSA OTP",
                                        sym.wsa884x_otp_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar11);
                        wcd_request_irq(puVar3,3,"WSA OCP",
                                        sym.wsa884x_ocp_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar11);
                        wcd_request_irq(puVar3,4,"WSA CLIP",
                                        sym.wsa884x_clip_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar11);
                        wcd_disable_irq(puVar3,4);
                        wcd_request_irq(puVar3,5,"WSA PDM WD",
                                        sym.wsa884x_pdm_wd_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar11);
                        wcd_request_irq(puVar3,6,"WSA CLK WD",
                                        sym.wsa884x_clk_wd_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar11);
                        wcd_request_irq(puVar3,7,"WSA EXT INT",
                                        sym.wsa884x_ext_int_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar11)
                        ;
                        wcd_disable_irq(puVar3,7);
                        wcd_request_irq(puVar3,8,"WSA UVLO",
                                        sym.wsa884x_uvlo_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar11);
                        wcd_request_irq(puVar3,9,"WSA PA ERR",
                                        sym.wsa884x_pa_on_err_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,
                                        puVar11);
                        uVar12 = devm_kmalloc(arg1,0x160,0xdc0);
                        puVar11[0x57] = uVar12;
                        if (uVar12 == 0) {
                            uVar13 = 0xfffffff4;
                        }
                        else {
                            memcpy(uVar12,obj.soc_codec_dev_wsa884x_wsa,0x160);
                            uVar12 = devm_kmalloc(arg1,0xf0,0xdc0);
                            puVar11[0x56] = uVar12;
                            if (uVar12 == 0) {
                                uVar13 = 0xfffffff4;
                                puVar18 = NULL;
                            }
                            else {
                                memcpy(uVar12,obj.wsa_dai,0xf0);
                                uVar8 = *(uVar10 + 0x3d8);
                                iVar7 = of_device_is_compatible(*(uVar10 + 0x338),0x8001f1b);
                                iVar6 = 3;
                                if (iVar7 == 0) {
                                    iVar6 = 1;
                                }
                                uVar8 = iVar6 + (uVar8 & 0xf);
                                snprintf(&uStack_d0,0x28,"wsa-codec.%d",uVar8);
                                uVar14 = strlen(&uStack_d0);
                                uVar14 = kstrndup(&uStack_d0,uVar14,0xcc0);
                                *puVar11[0x57] = uVar14;
                                snprintf(&uStack_d0,0x28,"wsa_rx%d",uVar8);
                                uVar14 = strlen(&uStack_d0);
                                uVar14 = kstrndup(&uStack_d0,uVar14,0xcc0);
                                *puVar11[0x56] = uVar14;
                                snprintf(&uStack_d0,0x28,"WSA884X_AIF%d Playback",uVar8);
                                uVar14 = strlen(&uStack_d0);
                                uVar14 = kstrndup(&uStack_d0,uVar14,0xcc0);
                                *(puVar11[0x56] + 0xb0) = uVar14;
                                uVar13 = snd_soc_register_component(arg1,puVar11[0x57],puVar11[0x56],1);
                                uVar13 = uVar13 & 0xffffffff;
                                iVar15 = snd_soc_lookup_component(arg1,*puVar11[0x57]);
                                if (iVar15 == 0) {
                                    _dev_err(arg1,"%s: component is NULL\n","wsa884x_swr_probe");
                                    uVar13 = 0xffffffea;
                                }
                                else {
                                    uVar12 = of_parse_phandle(*(uVar10 + 0x338),"qcom,bolero-handle",0);
                                    puVar11[0x49] = uVar12;
                                    if (uVar12 == 0) {
                                        uVar12 = of_parse_phandle(*(uVar10 + 0x338),"qcom,lpass-cdc-handle",0);
                                        puVar11[0x49] = uVar12;
                                        if (uVar12 != 0) goto code_r0x080100cc;
                                        _dev_info(arg1,"%s: parent node not found\n","wsa884x_swr_probe");
                                    }
                                    else {
code_r0x080100cc:
                                        uVar12 = of_find_device_by_node();
                                        puVar11[0x4b] = uVar12;
                                        if (uVar12 == 0) {
                                            pcVar19 = "%s: parent dev not found\n";
                                        }
                                        else {
                                            puVar22 = *(uVar12 + 0xa0);
                                            if (puVar22 != NULL) {
                                                puVar11[0x4d] =
                                                     sym.wsa884x_event_notify.142cb795c700479f84f02afc5065e4d0.cfi_jt;
                                                pcVar4 = puVar22[2];
                                                if (pcVar4 == NULL) {
                                                    uVar12 = 0;
                                                }
                                                else {
                                                    __cfi_slowpath_diag(0x3b795baa068bc3a6,pcVar4,0x80018b0);
                                                    (*pcVar4)(*puVar22,puVar11 + 0x4d,1);
                                                    uVar12 = puVar22[2];
                                                }
                                                puVar11[0x51] = uVar12;
                                                puVar11[0x50] = *puVar22;
                                                goto code_r0x080101a8;
                                            }
                                            pcVar19 = "%s: plat data not found\n";
                                        }
                                        _dev_err(arg1,pcVar19,"wsa884x_swr_probe");
                                    }
code_r0x080101a8:
                                    uVar14 = *(uVar10 + 0x338);
                                    *(puVar11 + 0x74) = 0;
                                    *(puVar11 + 0x10c) = uVar8;
                                    uVar12 = of_parse_phandle(uVar14,"qcom,wsa-macro-handle",0);
                                    puVar11[0x4a] = uVar12;
                                    if (uVar12 == 0) {
                                        pcVar19 = "%s: parent node not found\n";
                                    }
                                    else {
                                        uVar12 = of_find_device_by_node();
                                        puVar11[0x4c] = uVar12;
                                        if (uVar12 != 0) {
                                            uVar8 = ~uVar8 & 1;
                                            uVar9 = of_property_read_u32_index
                                                              (*(uVar12 + 0x300),"qcom,wsa-rloads",uVar8,
                                                               puVar11 + 0x1d);
                                            if (uVar9 == 0) {
                                                uVar9 = of_property_read_u32_index
                                                                  (*(puVar11[0x4c] + 0x300),"qcom,wsa-bat-cfgs",uVar8)
                                                ;
                                                if (uVar9 == 0) {
                                                    uVar9 = of_property_read_variable_u32_array
                                                                      (*(puVar11[0x4c] + 0x300),"qcom,noise-gate-mode"
                                                                       ,&uStack_d8,1,0);
                                                    if (uVar9 < 0) {
                                                        _dev_info(arg1,"%s: Failed to read wsa noise gate mode\n",
                                                                  "wsa884x_swr_probe");
code_r0x08010388:
                                                        *(puVar11 + 0x58) = 0;
                                                    }
                                                    else {
                                                        if (3 < uStack_d8) goto code_r0x08010388;
                                                        *(puVar11 + 0x58) = uStack_d8;
                                                    }
                                                    iVar17 = of_find_property(*(puVar11[0x4c] + 0x300),
                                                                              "qcom,wsa-system-gains",&uStack_dc);
                                                    if (iVar17 == 0) {
                                                        uVar9 = uVar9 & uVar9 >> 0x1f;
                                                        pcVar19 = "%s: missing wsa-system-gains\n";
                                                    }
                                                    else {
                                                        uVar9 = of_property_read_variable_u32_array
                                                                          (*(puVar11[0x4c] + 0x300),
                                                                           "qcom,wsa-system-gains",puVar11 + 0x1e,
                                                                           (uStack_dc << 0x20) >> 0x23,0);
                                                        if (-1 < uVar9) {
                                                            uVar8 = *(puVar11 + 0x74) + uVar8 * 2;
                                                            if (3 < uVar8) goto code_r0x08010804;
                                                            uVar9 = *(puVar11 + 0x1e + uVar8 * 4);
                                                            *(puVar11 + 0xec) = uVar9;
                                                            uVar12 = sym.wsa884x_validate_dt_configuration_params
                                                                               (uVar8,puVar11[0x1d],*(puVar11 + 0xe4)
                                                                                ,uVar9);
                                                            if ((uVar12 & 1) == 0) {
                                                                *(puVar11 + 4) = puVar11[0x1b] != 0xc;
                                                                sym.wsa884x_set_gain_parameters(iVar15);
                                                                sym.wsa884x_set_pbr_parameters(iVar15);
                                                                snd_soc_component_write
                                                                          (iVar15,0x3504,
                                                                           *(puVar11 + 0x74) == 0 |
                                                                           (puVar11[0x21] & 0xf) << 2 | 0xc0);
                                                                snd_soc_component_write(iVar15,0x3505,0);
                                                                if (puVar11[0x1d] < 2) {
                                                                    snd_soc_component_update_bits
                                                                              (iVar15,0x304c,0x70,0x70);
                                                                }
                                                                if (*(puVar11 + 0x74) == 0) {
                                                                    uVar14 = 0x34b0;
                                                                    uVar21 = 0xf0;
                                                                    uVar20 = 0xf0;
                                                                }
                                                                else {
                                                                    snd_soc_component_update_bits
                                                                              (iVar15,0x34b0,0xf0,0x30);
                                                                    snd_soc_component_update_bits(iVar15,0x341a,2,2);
                                                                    uVar14 = 0x304a;
                                                                    uVar21 = 8;
                                                                    uVar20 = 8;
                                                                }
                                                                snd_soc_component_update_bits
                                                                          (iVar15,uVar14,uVar21,uVar20);
                                                                if ((*(puVar11 + 0xe4) != 1) && (*(puVar11 + 0xe4) != 4)
                                                                   ) {
                                                                    snd_soc_component_update_bits(iVar15,0x3040,1,0);
                                                                }
                                                                uVar8 = sym.wsa884x_parse_port_params(arg1);
                                                                if (uVar8 == 0) {
                                                                    swr_init_port_params(puVar11[2],6,puVar11 + 0x40);
                                                                    __mutex_init(puVar11 + 0x10,"&wsa884x->res_lock",
                                                                                 obj.wsa884x_swr_probe.__key);
                                                                    if (puVar11[0x44] == 0) {
                                                                        iVar15 = *(uVar10 + 0xb8);
                                                                        if (iVar15 == 0) {
                                                                            iVar15 = *arg1;
                                                                        }
                                                                        uVar12 = debugfs_create_dir(iVar15,0);
                                                                        puVar11[0x44] = uVar12;
                                                                        if (uVar12 < 0xfffffffffffff001) {
                                                                            uVar12 = debugfs_create_file("swrslave_peek"
                                                                                                         ,0x8124,
                                                                                                         uVar12,uVar10
                                                                                                         ,
                                                            obj.codec_debug_read_ops);
                                                            puVar11[0x45] = uVar12;
                                                            uVar12 = debugfs_create_file("swrslave_poke",0x8124,
                                                                                         puVar11[0x44],uVar10,
                                                                                         obj.codec_debug_write_ops);
                                                            puVar11[0x46] = uVar12;
                                                            uVar10 = debugfs_create_file("swrslave_reg_dump",0x8124,
                                                                                         puVar11[0x44],uVar10,
                                                                                         obj.codec_debug_dump_ops);
                                                            uVar13 = 0;
                                                            puVar11[0x47] = uVar10;
                                                            goto code_r0x08010768;
                                                            }
                                                            }
                                                            uVar13 = 0;
                                                            goto code_r0x08010768;
                                                            }
                                                            uVar13 = uVar8;
                                                            _dev_err(arg1,"Failed to read port params\n");
                                                            goto code_r0x08010764;
                                                            }
                                                            _dev_err(arg1,
                                                            "%s: invalid dt parameter: Bat_cfg: 0x%x rload: 0x%x, sys_gain: 0x%x\n"
                                                            ,"wsa884x_swr_probe",*(puVar11 + 0xe4),puVar11[0x1d],
                                                            *(puVar11 + 0xec));
                                                            uVar13 = 0xffffffea;
                                                            goto code_r0x08010634;
                                                        }
                                                        pcVar19 = "%s: Failed to read wsa system gains\n";
                                                    }
                                                    uVar13 = uVar9;
                                                    _dev_err(arg1,pcVar19,"wsa884x_swr_probe");
                                                    goto code_r0x08010634;
                                                }
                                                pcVar19 = "%s: Failed to read wsa bat cfgs\n";
                                            }
                                            else {
                                                pcVar19 = "%s: Failed to read wsa rloads\n";
                                            }
                                            uVar13 = uVar9;
                                            _dev_err(arg1,pcVar19,"wsa884x_swr_probe");
                                            goto code_r0x08010634;
                                        }
                                        pcVar19 = "%s: parent dev not found\n";
                                    }
                                    _dev_err(arg1,pcVar19,"wsa884x_swr_probe");
                                }
code_r0x08010634:
                                puVar18 = puVar11[0x56];
                            }
                            if (puVar18 != NULL) {
                                kfree(*puVar18);
                                kfree(*(puVar11[0x56] + 0xb0));
                                kfree(puVar11[0x56]);
                            }
                            if (puVar11[0x57] != NULL) {
                                kfree(*puVar11[0x57]);
                                kfree(puVar11[0x57]);
                            }
                        }
                        wcd_free_irq(puVar3,0,0);
                        wcd_free_irq(puVar3,1,0);
                        wcd_free_irq(puVar3,2,0);
                        wcd_free_irq(puVar3,3,0);
                        wcd_free_irq(puVar3,4,0);
                        wcd_free_irq(puVar3,5,0);
                        wcd_free_irq(puVar3,6,0);
                        wcd_free_irq(puVar3,7,0);
                        wcd_free_irq(puVar3,8,0);
                        wcd_free_irq(puVar3,9,0);
                        wcd_irq_exit(puVar3,puVar11[0x22]);
                    }
                    else {
                        pcVar19 = "%s: regmap_init failed %d\n";
                        piVar16 = arg1;
code_r0x080102bc:
                        _dev_err(piVar16,pcVar19,"wsa884x_swr_probe",uVar13 & 0xffffffff);
                    }
                    if (((iVar5 == 0) && (iVar5 = msm_cdc_pinctrl_select_sleep_state(puVar11[0x19]), iVar5 != 0)) &&
                       (iVar6 = ___ratelimit(obj.wsa884x_gpio_ctrl._rs,"wsa884x_gpio_ctrl"), iVar6 != 0)) {
                        _dev_err(puVar11[1],"%s: Failed to turn state %d; ret=%d\n","wsa884x_gpio_ctrl",0,iVar5);
                    }
                    swr_remove_device(uVar10);
                }
                else {
                    uVar13 = 0xfffffdfb;
                }
            }
            msm_cdc_release_supplies(arg1,puVar11[0x54],*puVar1,*puVar2);
        }
code_r0x08010764:
        *(uVar10 + 0xe0) = 0;
    }
code_r0x08010768:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_a8) {
        return uVar13 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x08010804:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x8010808);
    (*pcVar4)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x0800f428 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    swr_driver_unregister(reloc.wsa884x_swr_probe.142cb795c700479f84f02afc5065e4d0.cfi_jt);
    return;
}


// ===== sym.wsa884x_event_notify.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f430 (size 8) =====

uint64_t sym.wsa884x_event_notify.142cb795c700479f84f02afc5065e4d0.cfi_jt(int64_t param_1,ushort param_2)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    int64_t arg1;
    int iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = param_1 + -0x268;
    if (arg1 == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0;
        switch(param_2) {
        case 2:
            if ((*(param_1 + 0x40) & 1) != 0) {
                snd_soc_component_update_bits(*(param_1 + -0x250),0x3430,1,0);
            }
            uVar5 = msm_cdc_pinctrl_select_sleep_state(*(param_1 + -0x1a0));
            if (uVar5 == 0) {
                return uVar5;
            }
            iVar4 = ___ratelimit(obj.wsa884x_gpio_ctrl._rs,"wsa884x_gpio_ctrl");
            if (iVar4 != 0) {
                _dev_err(*(param_1 + -0x260),"%s: Failed to turn state %d; ret=%d\n","wsa884x_gpio_ctrl",0,
                         uVar5 & 0xffffffff);
            }
            uVar5 = ___ratelimit(obj.wsa884x_swr_down._rs,"wsa884x_swr_down");
            if (uVar5 == 0) {
                return uVar5;
            }
            _dev_err(*(param_1 + -0x260),"%s: Failed to disable gpio\n","wsa884x_swr_down");
            break;
        default:
            goto code_r0x08010f90;
        case 4:
            sym.wsa884x_swr_up(arg1);
            usleep_range_state(20000,0x4e2a,2);
            sym.wsa884x_swr_reset(arg1);
            _dev_err(*(param_1 + -0x260),"%s: BOLERO_SLV_EVT_SSR_UP Called","wsa884x_event_notify");
            swr_init_port_params(*(param_1 + -600),6,param_1 + -0x68);
            break;
        case 5:
            if ((*(param_1 + 0x40) & 1) != 0) {
                snd_soc_component_update_bits(*(param_1 + -0x250),0x348b,1,1);
                snd_soc_component_update_bits(*(param_1 + -0x250),0x3430,1,1);
            }
            break;
        case 6:
            if ((*(param_1 + 0x40) & 1) != 0) {
                puVar1 = param_1 + 0x40;
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar3) {
                        *puVar1 = *puVar1 | 4;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
            }
        }
        uVar5 = 0;
    }
code_r0x08010f90:
    return uVar5;
}


// ===== sym.wsa884x_handle_post_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f438 (size 8) =====

int64_t sym.wsa884x_handle_post_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt(ulong *param_1)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar4;
    ulong uVar5;
    ulong *puVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    if (param_1 == NULL) {
        iVar4 = 0;
    }
    else if (*(param_1 + 0x1a) == 0) {
        uVar5 = param_1[3];
        *(param_1 + 0x1a) = 0;
        iVar4 = 1;
        snd_soc_component_update_bits(uVar5,0x3430,1,1);
        usleep_range_state(1000,0x44c,2);
        regmap_read(*param_1,0x3583,&uStack_40 + 4);
        regmap_read(*param_1,0x3584,&uStack_40);
        *(param_1[2] + 0x3f0) = uStack_40._4_4_ != 0 || uStack_40 != 0;
        if (*(param_1[2] + 0x3f0) != '\0') {
            snd_soc_component_update_bits(uVar5,0x3430,1,0);
            *(param_1 + 0x1a) = 1;
            usleep_range_state(1000,0x44c,2);
            *(param_1 + 0x1a) = 0;
            snd_soc_component_update_bits(uVar5,0x3430,1,1);
            usleep_range_state(1000,0x44c,2);
            regmap_read(*param_1,0x3583,&uStack_40 + 4);
            regmap_read(*param_1,0x3584,&uStack_40);
            *(param_1[2] + 0x3f0) = uStack_40._4_4_ != 0 || uStack_40 != 0;
            if (*(param_1[2] + 0x3f0) != '\0') {
                iVar4 = 1;
                snd_soc_component_update_bits(uVar5,0x3430,1,0);
                *(param_1 + 0x1a) = 1;
                usleep_range_state(1000,0x44c,2);
            }
        }
    }
    else {
        iVar4 = 1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return iVar4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.wsa884x_codec_probe;
    pcStack_78 = sym.wsa884x_codec_probe;
    iVar4 = sp_el0;
    iStack_88 = *(iVar4 + 0x5e0);
    puVar6 = *(*(iVar3 + 0x18) + 0x98);
    puStack_80 = &stack0xffffffffffffffd0;
    if ((puVar6 == NULL) || (*(iVar3 + 0x10) == 0)) {
        iVar4 = 0xffffffea;
    }
    else {
        iVar4 = iVar3 + 0xd0;
        snd_soc_component_init_regmap(iVar3,*puVar6);
        puVar6[3] = iVar3;
        uVar2 = snd_soc_component_read(iVar3,0x3880);
        *(puVar6 + 0x1b) = uVar2 & 0xf;
        uVar2 = snd_soc_component_read(iVar3,0x3401);
        *(puVar6 + 0xf) = 2;
        *(puVar6 + 0xdc) = uVar2 & 0xff;
        iVar7 = *(*(iVar3 + 0x18) + 0x98);
        if (iVar7 != 0) {
            iVar8 = 0;
            do {
                snd_soc_component_update_bits
                          (iVar3,*(obj.reg_init + iVar8),*(iVar8 + 0x80037c2),*(iVar8 + 0x80037c3));
                iVar8 = iVar8 + 4;
            } while (iVar8 != 0x8c);
            if (*(iVar7 + 0xe4) == 2) {
                snd_soc_component_update_bits(iVar3,0x34d1,0xf0,0x20);
                snd_soc_component_update_bits(iVar3,0x34d2,0x1f,0x13);
                snd_soc_component_update_bits(iVar3,0x3005,0xf,3);
                snd_soc_component_update_bits(iVar3,0x3005,0xf0,0x30);
                snd_soc_component_update_bits(iVar3,0x3045,0xff,6);
                snd_soc_component_update_bits(iVar3,0x3046,0xff,0x14);
                snd_soc_component_update_bits(iVar3,0x3047,0xff,0x19);
                snd_soc_component_update_bits(iVar3,0x3048,0xff,0x1b);
                snd_soc_component_update_bits(iVar3,0x3049,0xff,0x1c);
                snd_soc_component_update_bits(iVar3,0x306a,2,2);
            }
            uVar2 = *(iVar7 + 0x2c0) - 1;
            iVar1 = uVar2 * -0x10 + 0x30;
            if (2 < uVar2) {
                iVar1 = 8;
            }
            snd_soc_component_update_bits(iVar3,0x3432,0x38,iVar1);
        }
        *(puVar6 + 0xe) = 0;
        uStack_b0 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        strlcpy(&uStack_b0,*(puVar6[0x56] + 0xb0),0x28);
        snd_soc_dapm_ignore_suspend(iVar4,&uStack_b0);
        uStack_b0 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        strlcpy(&uStack_b0,0x8002104,0x28);
        snd_soc_dapm_ignore_suspend(iVar4,&uStack_b0);
        uStack_b0 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        strlcpy(&uStack_b0,"SWR DAC_Port",0x28);
        snd_soc_dapm_ignore_suspend(iVar4,&uStack_b0);
        uStack_b0 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        strlcpy(&uStack_b0,"SPKR",0x28);
        snd_soc_dapm_ignore_suspend(iVar4,&uStack_b0);
        snd_soc_dapm_sync(iVar4);
        iVar4 = 0;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_88) {
        return iVar4;
    }
    iVar4 = __stack_chk_fail(iVar4);
    *extraout_x18_00 = sym.wsa884x_codec_remove;
    if (*(*(iVar4 + 0x18) + 0x98) != 0) {
        iVar4 = snd_soc_component_exit_regmap();
    }
    return iVar4;
}


// ===== sym.wsa884x_codec_remove.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f440 (size 8) =====

void sym.wsa884x_codec_remove.142cb795c700479f84f02afc5065e4d0.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(param_1 + 0x18) + 0x98) != 0) {
        snd_soc_component_exit_regmap();
    }
    return;
}


// ===== sym.snd_soc_info_enum_double.cfi_jt @ 0x0800f448 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_info_enum_double.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.snd_soc_info_volsw.cfi_jt @ 0x0800f450 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_info_volsw.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.wsa884x_codec_info_create_codec_entry.cfi_jt @ 0x0800f458 (size 8) =====

uint64_t sym.wsa884x_codec_info_create_codec_entry.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
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
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    uVar2 = 0xffffffea;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    if ((param_1 != 0) && (param_2 != 0)) {
        iVar5 = *(*(param_2 + 0x18) + 0x98);
        if (*(iVar5 + 0xb0) == 0) {
            iVar4 = *(param_2 + 0x20);
            snprintf(&uStack_88,0x50,"%s.%llx",0x8001e25,*(*(iVar5 + 0x10) + 0x3d8));
            iVar3 = snd_info_create_module_entry(*(param_1 + 0x38),&uStack_88,param_1);
            *(iVar5 + 0xb0) = iVar3;
            if (iVar3 != 0) {
                *(iVar3 + 8) = 0x416d;
                iVar1 = snd_info_register(*(iVar5 + 0xb0));
                if ((-1 < iVar1) &&
                   (iVar3 = snd_info_create_card_entry(*(iVar4 + 0x48),"version",*(iVar5 + 0xb0)), iVar3 != 0)) {
                    *(iVar3 + 0x40) = iVar5;
                    *(iVar3 + 0x10) = 0x20;
                    *(iVar3 + 0x18) = 1;
                    *(iVar3 + 0x20) = obj.wsa884x_codec_info_ops;
                    iVar1 = snd_info_register();
                    if (-1 < iVar1) {
                        *(iVar5 + 0xb8) = iVar3;
                        iVar4 = snd_info_create_card_entry(*(iVar4 + 0x48),"variant",*(iVar5 + 0xb0));
                        if (iVar4 != 0) {
                            *(iVar4 + 0x40) = iVar5;
                            *(iVar4 + 0x10) = 0x20;
                            *(iVar4 + 0x18) = 1;
                            *(iVar4 + 0x20) = obj.wsa884x_variant_ops;
                            iVar1 = snd_info_register();
                            if (-1 < iVar1) {
                                uVar2 = 0;
                                *(iVar5 + 0xc0) = iVar4;
                                goto code_r0x0800f6ec;
                            }
                            snd_info_free_entry(iVar4);
                        }
                    }
                    snd_info_free_entry(iVar3);
                }
                snd_info_free_entry(*(iVar5 + 0xb0));
            }
            uVar2 = 0xfffffff4;
        }
        else {
            uVar2 = 0;
        }
    }
code_r0x0800f6ec:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    iVar5 = __stack_chk_fail(uVar2);
    *extraout_x18 = sym.wsa884x_codec_get_dev_num;
    if (iVar5 != 0) {
        iVar5 = *(*(iVar5 + 0x18) + 0x98);
        if (iVar5 != 0) {
            return *(*(iVar5 + 0x10) + 0x40);
        }
        iVar1 = ___ratelimit(obj.wsa884x_codec_get_dev_num._rs,"wsa884x_codec_get_dev_num");
        if (iVar1 != 0) {
            _printk(0x8001e2d,"wsa884x_codec_get_dev_num");
        }
    }
    return 0xffffffea;
}


// ===== sym.wsa884x_swr_remove.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f460 (size 8) =====

ulong sym.wsa884x_swr_remove.142cb795c700479f84f02afc5065e4d0.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    code *pcVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || (iVar4 = *(param_1 + 0xe0), iVar4 == 0)) {
        _dev_err(param_1 + 0x48,"%s: wsa884x is NULL\n","wsa884x_swr_remove");
        uVar2 = 0xffffffea;
    }
    else {
        iVar1 = iVar4 + 0x118;
        wcd_free_irq(iVar1,0,0);
        wcd_free_irq(iVar1,1,0);
        wcd_free_irq(iVar1,2,0);
        wcd_free_irq(iVar1,3,0);
        wcd_free_irq(iVar1,4,0);
        wcd_free_irq(iVar1,5,0);
        wcd_free_irq(iVar1,6,0);
        wcd_free_irq(iVar1,7,0);
        wcd_free_irq(iVar1,8,0);
        wcd_free_irq(iVar1,9,0);
        pcVar3 = *(iVar4 + 0x288);
        if (pcVar3 != NULL) {
            __cfi_slowpath_diag(0x3b795baa068bc3a6,pcVar3,0x80018d0);
            (*pcVar3)(*(iVar4 + 0x280),iVar4 + 0x268,0);
        }
        debugfs_remove(*(iVar4 + 0x220));
        *(iVar4 + 0x220) = 0;
        snd_soc_unregister_component(param_1 + 0x48);
        if (*(iVar4 + 0x2b0) != NULL) {
            kfree(**(iVar4 + 0x2b0));
            kfree(*(*(iVar4 + 0x2b0) + 0xb0));
            kfree(*(iVar4 + 0x2b0));
        }
        if (*(iVar4 + 0x2b8) != NULL) {
            kfree(**(iVar4 + 0x2b8));
            kfree(*(iVar4 + 0x2b8));
        }
        msm_cdc_release_supplies(param_1 + 0x48,*(iVar4 + 0x2a0),*(iVar4 + 0x290),*(iVar4 + 0x298));
        uVar2 = 0;
        *(param_1 + 0xe0) = 0;
    }
    return uVar2;
}


// ===== sym.wsa884x_swr_probe.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f468 (size 8) =====

uint64_t sym.wsa884x_swr_probe.142cb795c700479f84f02afc5065e4d0.cfi_jt(uint64_t param_1)

{
    int64_t *arg1;
    uint64_t *puVar1;
    uint64_t *puVar2;
    uint64_t *puVar3;
    code *pcVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint64_t *puVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    ulong uVar13;
    int64_t iVar14;
    int64_t *piVar15;
    int64_t iVar16;
    ulong *puVar17;
    char *pcVar18;
    ulong uVar19;
    ulong uVar20;
    ulong *in_x18;
    uint64_t *puVar21;
    ulong unaff_x30;
    uint32_t uStack_9c;
    uint32_t uStack_98;
    uchar auStack_94 [4];
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    arg1 = param_1 + 0x48;
    iStack_68 = *(iVar14 + 0x5e0);
    auStack_94[0] = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    puVar10 = devm_kmalloc(arg1,0x2c8,0xdc0);
    if ((puVar10 == NULL) || (uVar11 = devm_kmalloc(arg1,0x88,0xdc0), uVar11 == 0)) {
        uVar12 = 0xfffffff4;
    }
    else {
        memcpy(uVar11,obj.wsa884x_regmap_irq_chip,0x88);
        puVar1 = puVar10 + 0x52;
        puVar2 = puVar10 + 0x53;
        msm_cdc_get_power_supplies(arg1,puVar1,puVar2);
        if ((puVar10[0x52] == 0) || (*puVar2 < 1)) {
            pcVar18 = "%s: no power supplies defined\n";
code_r0x08010174:
            _dev_err(arg1,pcVar18,"wsa884x_enable_supplies");
code_r0x08010184:
            uVar12 = 0xfffffdfb;
        }
        else {
            iVar5 = msm_cdc_init_supplies(arg1,puVar10 + 0x54);
            if (puVar10[0x54] == 0) {
                _dev_err(arg1,"%s: Cannot init wsa supplies\n","wsa884x_enable_supplies");
                if (iVar5 != 0) goto code_r0x08010184;
            }
            else {
                iVar5 = msm_cdc_enable_static_supplies(arg1,puVar10[0x54],*puVar1,*puVar2);
                if (iVar5 != 0) {
                    pcVar18 = "%s: wsa static supply enable failed!\n";
                    goto code_r0x08010174;
                }
            }
            uVar12 = of_parse_phandle(*(param_1 + 0x338),"qcom,spkr-sd-n-node",0);
            puVar10[0x19] = uVar12;
            if (uVar12 == 0) {
                uVar12 = 0;
            }
            else {
                *(param_1 + 0xe0) = puVar10;
                puVar10[1] = arg1;
                puVar10[2] = param_1;
                iVar5 = msm_cdc_pinctrl_get_state();
                iVar6 = msm_cdc_pinctrl_select_active_state(puVar10[0x19]);
                if ((iVar6 != 0) && (iVar7 = ___ratelimit(obj.wsa884x_gpio_ctrl._rs,"wsa884x_gpio_ctrl"), iVar7 != 0))
                {
                    _dev_err(puVar10[1],"%s: Failed to turn state %d; ret=%d\n","wsa884x_gpio_ctrl",1,iVar6);
                }
                usleep_range_state(5000,0x1392,2);
                iVar6 = swr_get_logical_dev_num(param_1,*(param_1 + 0x3d8),auStack_94);
                if (iVar6 == 0) {
                    *(param_1 + 0x40) = auStack_94[0];
                    uVar12 = __devm_regmap_init_swr(param_1,obj.wsa884x_regmap_config,0,0);
                    *puVar10 = uVar12;
                    if (uVar12 < 0xfffffffffffff001) {
                        devm_regmap_qti_debugfs_register(arg1,uVar12);
                        *(uVar11 + 0x80) = puVar10;
                        puVar3 = puVar10 + 0x23;
                        puVar10[0x27] = arg1;
                        puVar10[0x23] = uVar11;
                        puVar10[0x24] = "WSA884X";
                        puVar10[0x25] = *puVar10;
                        uVar8 = wcd_irq_init(puVar3,puVar10 + 0x22);
                        if (uVar8 != 0) {
                            uVar12 = uVar8;
                            pcVar18 = "%s: IRQ init failed: %d\n";
                            piVar15 = puVar10[1];
                            goto code_r0x080102bc;
                        }
                        *(puVar10[2] + 1000) = puVar10[0x22];
                        wcd_request_irq(puVar3,0,"WSA SAF2WAR",
                                        sym.wsa884x_saf2war_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar10)
                        ;
                        wcd_request_irq(puVar3,1,"WSA WAR2SAF",
                                        sym.wsa884x_war2saf_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar10)
                        ;
                        wcd_request_irq(puVar3,2,"WSA OTP",
                                        sym.wsa884x_otp_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar10);
                        wcd_request_irq(puVar3,3,"WSA OCP",
                                        sym.wsa884x_ocp_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar10);
                        wcd_request_irq(puVar3,4,"WSA CLIP",
                                        sym.wsa884x_clip_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar10);
                        wcd_disable_irq(puVar3,4);
                        wcd_request_irq(puVar3,5,"WSA PDM WD",
                                        sym.wsa884x_pdm_wd_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar10);
                        wcd_request_irq(puVar3,6,"WSA CLK WD",
                                        sym.wsa884x_clk_wd_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar10);
                        wcd_request_irq(puVar3,7,"WSA EXT INT",
                                        sym.wsa884x_ext_int_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar10)
                        ;
                        wcd_disable_irq(puVar3,7);
                        wcd_request_irq(puVar3,8,"WSA UVLO",
                                        sym.wsa884x_uvlo_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar10);
                        wcd_request_irq(puVar3,9,"WSA PA ERR",
                                        sym.wsa884x_pa_on_err_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,
                                        puVar10);
                        uVar11 = devm_kmalloc(arg1,0x160,0xdc0);
                        puVar10[0x57] = uVar11;
                        if (uVar11 == 0) {
                            uVar12 = 0xfffffff4;
                        }
                        else {
                            memcpy(uVar11,obj.soc_codec_dev_wsa884x_wsa,0x160);
                            uVar11 = devm_kmalloc(arg1,0xf0,0xdc0);
                            puVar10[0x56] = uVar11;
                            if (uVar11 == 0) {
                                uVar12 = 0xfffffff4;
                                puVar17 = NULL;
                            }
                            else {
                                memcpy(uVar11,obj.wsa_dai,0xf0);
                                uVar8 = *(param_1 + 0x3d8);
                                iVar7 = of_device_is_compatible(*(param_1 + 0x338),0x8001f1b);
                                iVar6 = 3;
                                if (iVar7 == 0) {
                                    iVar6 = 1;
                                }
                                uVar8 = iVar6 + (uVar8 & 0xf);
                                snprintf(&uStack_90,0x28,"wsa-codec.%d",uVar8);
                                uVar13 = strlen(&uStack_90);
                                uVar13 = kstrndup(&uStack_90,uVar13,0xcc0);
                                *puVar10[0x57] = uVar13;
                                snprintf(&uStack_90,0x28,"wsa_rx%d",uVar8);
                                uVar13 = strlen(&uStack_90);
                                uVar13 = kstrndup(&uStack_90,uVar13,0xcc0);
                                *puVar10[0x56] = uVar13;
                                snprintf(&uStack_90,0x28,"WSA884X_AIF%d Playback",uVar8);
                                uVar13 = strlen(&uStack_90);
                                uVar13 = kstrndup(&uStack_90,uVar13,0xcc0);
                                *(puVar10[0x56] + 0xb0) = uVar13;
                                uVar12 = snd_soc_register_component(arg1,puVar10[0x57],puVar10[0x56],1);
                                uVar12 = uVar12 & 0xffffffff;
                                iVar14 = snd_soc_lookup_component(arg1,*puVar10[0x57]);
                                if (iVar14 == 0) {
                                    _dev_err(arg1,"%s: component is NULL\n","wsa884x_swr_probe");
                                    uVar12 = 0xffffffea;
                                }
                                else {
                                    uVar11 = of_parse_phandle(*(param_1 + 0x338),"qcom,bolero-handle",0);
                                    puVar10[0x49] = uVar11;
                                    if (uVar11 == 0) {
                                        uVar11 = of_parse_phandle(*(param_1 + 0x338),"qcom,lpass-cdc-handle",0);
                                        puVar10[0x49] = uVar11;
                                        if (uVar11 != 0) goto code_r0x080100cc;
                                        _dev_info(arg1,"%s: parent node not found\n","wsa884x_swr_probe");
                                    }
                                    else {
code_r0x080100cc:
                                        uVar11 = of_find_device_by_node();
                                        puVar10[0x4b] = uVar11;
                                        if (uVar11 == 0) {
                                            pcVar18 = "%s: parent dev not found\n";
                                        }
                                        else {
                                            puVar21 = *(uVar11 + 0xa0);
                                            if (puVar21 != NULL) {
                                                puVar10[0x4d] =
                                                     sym.wsa884x_event_notify.142cb795c700479f84f02afc5065e4d0.cfi_jt;
                                                pcVar4 = puVar21[2];
                                                if (pcVar4 == NULL) {
                                                    uVar11 = 0;
                                                }
                                                else {
                                                    __cfi_slowpath_diag(0x3b795baa068bc3a6,pcVar4,0x80018b0);
                                                    (*pcVar4)(*puVar21,puVar10 + 0x4d,1);
                                                    uVar11 = puVar21[2];
                                                }
                                                puVar10[0x51] = uVar11;
                                                puVar10[0x50] = *puVar21;
                                                goto code_r0x080101a8;
                                            }
                                            pcVar18 = "%s: plat data not found\n";
                                        }
                                        _dev_err(arg1,pcVar18,"wsa884x_swr_probe");
                                    }
code_r0x080101a8:
                                    uVar13 = *(param_1 + 0x338);
                                    *(puVar10 + 0x74) = 0;
                                    *(puVar10 + 0x10c) = uVar8;
                                    uVar11 = of_parse_phandle(uVar13,"qcom,wsa-macro-handle",0);
                                    puVar10[0x4a] = uVar11;
                                    if (uVar11 == 0) {
                                        pcVar18 = "%s: parent node not found\n";
                                    }
                                    else {
                                        uVar11 = of_find_device_by_node();
                                        puVar10[0x4c] = uVar11;
                                        if (uVar11 != 0) {
                                            uVar8 = ~uVar8 & 1;
                                            uVar9 = of_property_read_u32_index
                                                              (*(uVar11 + 0x300),"qcom,wsa-rloads",uVar8,
                                                               puVar10 + 0x1d);
                                            if (uVar9 == 0) {
                                                uVar9 = of_property_read_u32_index
                                                                  (*(puVar10[0x4c] + 0x300),"qcom,wsa-bat-cfgs",uVar8)
                                                ;
                                                if (uVar9 == 0) {
                                                    uVar9 = of_property_read_variable_u32_array
                                                                      (*(puVar10[0x4c] + 0x300),"qcom,noise-gate-mode"
                                                                       ,&uStack_98,1,0);
                                                    if (uVar9 < 0) {
                                                        _dev_info(arg1,"%s: Failed to read wsa noise gate mode\n",
                                                                  "wsa884x_swr_probe");
code_r0x08010388:
                                                        *(puVar10 + 0x58) = 0;
                                                    }
                                                    else {
                                                        if (3 < uStack_98) goto code_r0x08010388;
                                                        *(puVar10 + 0x58) = uStack_98;
                                                    }
                                                    iVar16 = of_find_property(*(puVar10[0x4c] + 0x300),
                                                                              "qcom,wsa-system-gains",&uStack_9c);
                                                    if (iVar16 == 0) {
                                                        uVar9 = uVar9 & uVar9 >> 0x1f;
                                                        pcVar18 = "%s: missing wsa-system-gains\n";
                                                    }
                                                    else {
                                                        uVar9 = of_property_read_variable_u32_array
                                                                          (*(puVar10[0x4c] + 0x300),
                                                                           "qcom,wsa-system-gains",puVar10 + 0x1e,
                                                                           (uStack_9c << 0x20) >> 0x23,0);
                                                        if (-1 < uVar9) {
                                                            uVar8 = *(puVar10 + 0x74) + uVar8 * 2;
                                                            if (3 < uVar8) goto code_r0x08010804;
                                                            uVar9 = *(puVar10 + 0x1e + uVar8 * 4);
                                                            *(puVar10 + 0xec) = uVar9;
                                                            uVar11 = sym.wsa884x_validate_dt_configuration_params
                                                                               (uVar8,puVar10[0x1d],*(puVar10 + 0xe4)
                                                                                ,uVar9);
                                                            if ((uVar11 & 1) == 0) {
                                                                *(puVar10 + 4) = puVar10[0x1b] != 0xc;
                                                                sym.wsa884x_set_gain_parameters(iVar14);
                                                                sym.wsa884x_set_pbr_parameters(iVar14);
                                                                snd_soc_component_write
                                                                          (iVar14,0x3504,
                                                                           *(puVar10 + 0x74) == 0 |
                                                                           (puVar10[0x21] & 0xf) << 2 | 0xc0);
                                                                snd_soc_component_write(iVar14,0x3505,0);
                                                                if (puVar10[0x1d] < 2) {
                                                                    snd_soc_component_update_bits
                                                                              (iVar14,0x304c,0x70,0x70);
                                                                }
                                                                if (*(puVar10 + 0x74) == 0) {
                                                                    uVar13 = 0x34b0;
                                                                    uVar19 = 0xf0;
                                                                    uVar20 = 0xf0;
                                                                }
                                                                else {
                                                                    snd_soc_component_update_bits
                                                                              (iVar14,0x34b0,0xf0,0x30);
                                                                    snd_soc_component_update_bits(iVar14,0x341a,2,2);
                                                                    uVar13 = 0x304a;
                                                                    uVar19 = 8;
                                                                    uVar20 = 8;
                                                                }
                                                                snd_soc_component_update_bits
                                                                          (iVar14,uVar13,uVar19,uVar20);
                                                                if ((*(puVar10 + 0xe4) != 1) && (*(puVar10 + 0xe4) != 4)
                                                                   ) {
                                                                    snd_soc_component_update_bits(iVar14,0x3040,1,0);
                                                                }
                                                                uVar8 = sym.wsa884x_parse_port_params(arg1);
                                                                if (uVar8 == 0) {
                                                                    swr_init_port_params(puVar10[2],6,puVar10 + 0x40);
                                                                    __mutex_init(puVar10 + 0x10,"&wsa884x->res_lock",
                                                                                 obj.wsa884x_swr_probe.__key);
                                                                    if (puVar10[0x44] == 0) {
                                                                        iVar14 = *(param_1 + 0xb8);
                                                                        if (iVar14 == 0) {
                                                                            iVar14 = *arg1;
                                                                        }
                                                                        uVar11 = debugfs_create_dir(iVar14,0);
                                                                        puVar10[0x44] = uVar11;
                                                                        if (uVar11 < 0xfffffffffffff001) {
                                                                            uVar11 = debugfs_create_file("swrslave_peek"
                                                                                                         ,0x8124,
                                                                                                         uVar11,param_1
                                                                                                         ,
                                                            obj.codec_debug_read_ops);
                                                            puVar10[0x45] = uVar11;
                                                            uVar11 = debugfs_create_file("swrslave_poke",0x8124,
                                                                                         puVar10[0x44],param_1,
                                                                                         obj.codec_debug_write_ops);
                                                            puVar10[0x46] = uVar11;
                                                            uVar11 = debugfs_create_file("swrslave_reg_dump",0x8124,
                                                                                         puVar10[0x44],param_1,
                                                                                         obj.codec_debug_dump_ops);
                                                            uVar12 = 0;
                                                            puVar10[0x47] = uVar11;
                                                            goto code_r0x08010768;
                                                            }
                                                            }
                                                            uVar12 = 0;
                                                            goto code_r0x08010768;
                                                            }
                                                            uVar12 = uVar8;
                                                            _dev_err(arg1,"Failed to read port params\n");
                                                            goto code_r0x08010764;
                                                            }
                                                            _dev_err(arg1,
                                                            "%s: invalid dt parameter: Bat_cfg: 0x%x rload: 0x%x, sys_gain: 0x%x\n"
                                                            ,"wsa884x_swr_probe",*(puVar10 + 0xe4),puVar10[0x1d],
                                                            *(puVar10 + 0xec));
                                                            uVar12 = 0xffffffea;
                                                            goto code_r0x08010634;
                                                        }
                                                        pcVar18 = "%s: Failed to read wsa system gains\n";
                                                    }
                                                    uVar12 = uVar9;
                                                    _dev_err(arg1,pcVar18,"wsa884x_swr_probe");
                                                    goto code_r0x08010634;
                                                }
                                                pcVar18 = "%s: Failed to read wsa bat cfgs\n";
                                            }
                                            else {
                                                pcVar18 = "%s: Failed to read wsa rloads\n";
                                            }
                                            uVar12 = uVar9;
                                            _dev_err(arg1,pcVar18,"wsa884x_swr_probe");
                                            goto code_r0x08010634;
                                        }
                                        pcVar18 = "%s: parent dev not found\n";
                                    }
                                    _dev_err(arg1,pcVar18,"wsa884x_swr_probe");
                                }
code_r0x08010634:
                                puVar17 = puVar10[0x56];
                            }
                            if (puVar17 != NULL) {
                                kfree(*puVar17);
                                kfree(*(puVar10[0x56] + 0xb0));
                                kfree(puVar10[0x56]);
                            }
                            if (puVar10[0x57] != NULL) {
                                kfree(*puVar10[0x57]);
                                kfree(puVar10[0x57]);
                            }
                        }
                        wcd_free_irq(puVar3,0,0);
                        wcd_free_irq(puVar3,1,0);
                        wcd_free_irq(puVar3,2,0);
                        wcd_free_irq(puVar3,3,0);
                        wcd_free_irq(puVar3,4,0);
                        wcd_free_irq(puVar3,5,0);
                        wcd_free_irq(puVar3,6,0);
                        wcd_free_irq(puVar3,7,0);
                        wcd_free_irq(puVar3,8,0);
                        wcd_free_irq(puVar3,9,0);
                        wcd_irq_exit(puVar3,puVar10[0x22]);
                    }
                    else {
                        pcVar18 = "%s: regmap_init failed %d\n";
                        piVar15 = arg1;
code_r0x080102bc:
                        _dev_err(piVar15,pcVar18,"wsa884x_swr_probe",uVar12 & 0xffffffff);
                    }
                    if (((iVar5 == 0) && (iVar5 = msm_cdc_pinctrl_select_sleep_state(puVar10[0x19]), iVar5 != 0)) &&
                       (iVar6 = ___ratelimit(obj.wsa884x_gpio_ctrl._rs,"wsa884x_gpio_ctrl"), iVar6 != 0)) {
                        _dev_err(puVar10[1],"%s: Failed to turn state %d; ret=%d\n","wsa884x_gpio_ctrl",0,iVar5);
                    }
                    swr_remove_device(param_1);
                }
                else {
                    uVar12 = 0xfffffdfb;
                }
            }
            msm_cdc_release_supplies(arg1,puVar10[0x54],*puVar1,*puVar2);
        }
code_r0x08010764:
        *(param_1 + 0xe0) = 0;
    }
code_r0x08010768:
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_68) {
        return uVar12 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x08010804:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x8010808);
    (*pcVar4)();
}


// ===== sym.wsa884x_swr_suspend.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f470 (size 8) =====

ulong sym.wsa884x_swr_suspend.142cb795c700479f84f02afc5065e4d0.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((param_1 == 0) || (param_1 == 0x48)) || (iVar6 = *(param_1 + 0x98), iVar6 == 0)) {
        iVar4 = ___ratelimit(obj.wsa884x_swr_suspend._rs,"wsa884x_swr_suspend");
        if (iVar4 == 0) {
            uVar5 = 0xffffffea;
        }
        else {
            _dev_err(param_1,"%s: wsa884x private data is NULL\n","wsa884x_swr_suspend");
            uVar5 = 0xffffffea;
        }
    }
    else {
        if ((*(iVar6 + 0x25) != '\0') || (*(*(iVar6 + 0x18) + 0xd0) == 0)) {
            msm_cdc_set_supplies_lpm_mode(param_1,*(iVar6 + 0x2a0),*(iVar6 + 0x290),*(iVar6 + 0x298),1);
            puVar1 = iVar6 + 0x2a8;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = *puVar1 | 2;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
        }
        uVar5 = 0;
    }
    return uVar5;
}


// ===== sym.wsa884x_swr_resume.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f478 (size 8) =====

ulong sym.wsa884x_swr_resume.142cb795c700479f84f02afc5065e4d0.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((param_1 == 0) || (param_1 == 0x48)) || (iVar5 = *(param_1 + 0x98), iVar5 == 0)) {
        _dev_err(param_1,"%s: wsa884x private data is NULL\n","wsa884x_swr_resume");
        uVar4 = 0xffffffea;
    }
    else {
        if ((*(iVar5 + 0x2a8) >> 1 & 1) != 0) {
            puVar1 = iVar5 + 0x2a8;
            msm_cdc_set_supplies_lpm_mode(param_1,*(iVar5 + 0x2a0),*(iVar5 + 0x290),*(iVar5 + 0x298),0);
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = *puVar1 & 0xfffffffffffffffd;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
        }
        uVar4 = 0;
    }
    return uVar4;
}


// ===== sym.codec_debug_open.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f480 (size 8) =====

ulong sym.codec_debug_open.142cb795c700479f84f02afc5065e4d0.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(param_2 + 0xd8) = *(param_1 + 0x2d8);
    return 0;
}


// ===== sym.wsa884x_ocp_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f488 (size 8) =====

ulong sym.wsa884x_ocp_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt(uint param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ___ratelimit(obj.wsa884x_ocp_handle_irq._rs,"wsa884x_ocp_handle_irq");
    if (iVar1 != 0) {
        _printk(0x8002265,"wsa884x_ocp_handle_irq",param_1);
    }
    return 1;
}


// ===== sym.wsa884x_otp_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f490 (size 8) =====

ulong sym.wsa884x_otp_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt(uint param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ___ratelimit(obj.wsa884x_otp_handle_irq._rs,"wsa884x_otp_handle_irq");
    if (iVar1 != 0) {
        _printk(0x8002265,"wsa884x_otp_handle_irq",param_1);
    }
    return 1;
}


// ===== sym.wsa884x_pa_on_err_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f498 (size 8) =====

ulong sym.wsa884x_pa_on_err_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt(uint param_1,int64_t param_2)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 == 0) || (iVar4 = *(param_2 + 0x18), iVar4 == 0)) {
        uVar3 = 0;
    }
    else {
        snd_soc_component_update_bits(iVar4,0x3430,1,0);
        uVar2 = snd_soc_component_read(iVar4,0x3436);
        if ((uVar2 & 0x1f) != 0) {
            snd_soc_component_read(iVar4,0x3438);
        }
        iVar1 = ___ratelimit(obj.wsa884x_pa_on_err_handle_irq._rs,"wsa884x_pa_on_err_handle_irq");
        if (iVar1 != 0) {
            _printk(0x8002265,"wsa884x_pa_on_err_handle_irq",param_1);
        }
        snd_soc_component_update_bits(iVar4,0x3431,0x10,0);
        snd_soc_component_update_bits(iVar4,0x3431,0x10,0x10);
        snd_soc_component_update_bits(iVar4,0x3431,0x10,0);
        uVar3 = 1;
    }
    return uVar3;
}


// ===== sym.wsa884x_clip_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f4a0 (size 8) =====

ulong sym.wsa884x_clip_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt(uint param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ___ratelimit(obj.wsa884x_clip_handle_irq._rs,"wsa884x_clip_handle_irq");
    if (iVar1 != 0) {
        _printk(0x8002265,"wsa884x_clip_handle_irq",param_1);
    }
    return 1;
}


// ===== sym.wsa884x_clk_wd_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f4a8 (size 8) =====

ulong sym.wsa884x_clk_wd_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt(uint param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ___ratelimit(obj.wsa884x_clk_wd_handle_irq._rs,"wsa884x_clk_wd_handle_irq");
    if (iVar1 != 0) {
        _printk(0x8002265,"wsa884x_clk_wd_handle_irq",param_1);
    }
    return 1;
}


// ===== sym.wsa884x_pdm_wd_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f4b0 (size 8) =====

uint sym.wsa884x_pdm_wd_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt(uint param_1,int64_t param_2)

{
    int iVar1;
    ulong *in_x18;
    uint uVar2;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 0) {
        uVar2 = 0;
    }
    else {
        uVar3 = *(param_2 + 0x18);
        uVar2 = 1;
        snd_soc_component_update_bits(uVar3,0x348b,1,0);
        snd_soc_component_update_bits(uVar3,0x348b,1,1);
        iVar1 = ___ratelimit(obj.wsa884x_pdm_wd_handle_irq._rs,"wsa884x_pdm_wd_handle_irq");
        if (iVar1 != 0) {
            _printk(0x8002265,"wsa884x_pdm_wd_handle_irq",param_1);
            uVar2 = 1;
        }
    }
    return uVar2;
}


// ===== sym.wsa884x_saf2war_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f4b8 (size 8) =====

ulong sym.wsa884x_saf2war_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt(uint param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ___ratelimit(obj.wsa884x_saf2war_handle_irq._rs,"wsa884x_saf2war_handle_irq");
    if (iVar1 != 0) {
        _printk(0x8002265,"wsa884x_saf2war_handle_irq",param_1);
    }
    return 1;
}


// ===== sym.wsa884x_uvlo_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f4c0 (size 8) =====

ulong sym.wsa884x_uvlo_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt(uint param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ___ratelimit(obj.wsa884x_uvlo_handle_irq._rs,"wsa884x_uvlo_handle_irq");
    if (iVar1 != 0) {
        _printk(0x8002265,"wsa884x_uvlo_handle_irq",param_1);
    }
    return 1;
}


// ===== sym.wsa884x_war2saf_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f4c8 (size 8) =====

ulong sym.wsa884x_war2saf_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt(uint param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ___ratelimit(obj.wsa884x_war2saf_handle_irq._rs,"wsa884x_war2saf_handle_irq");
    if (iVar1 != 0) {
        _printk(0x8002265,"wsa884x_war2saf_handle_irq",param_1);
    }
    return 1;
}


// ===== sym.wsa884x_ext_int_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f4d0 (size 8) =====

ulong sym.wsa884x_ext_int_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt(uint param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ___ratelimit(obj.wsa884x_ext_int_handle_irq._rs,"wsa884x_ext_int_handle_irq");
    if (iVar1 != 0) {
        _printk(0x8002265,"wsa884x_ext_int_handle_irq",param_1);
    }
    return 1;
}


// ===== sym.wsa884x_writeable_register.7716a76ecbaab854eeb9dbd84e72398a.cfi_jt @ 0x0800f4d8 (size 8) =====

uint8_t sym.wsa884x_writeable_register.7716a76ecbaab854eeb9dbd84e72398a.cfi_jt(ulong param_1,uint32_t param_2)

{
    uint32_t uVar1;
    code *pcVar2;
    
    uVar1 = param_2 - 0x3000;
    if (param_2 < 0x3000 || uVar1 == 0) {
        return 0;
    }
    if (uVar1 >> 8 < 0x39) {
        return obj.wsa884x_reg_access[uVar1] >> 1 & 1;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8013b98);
    (*pcVar2)();
}


// ===== sym.wsa884x_volatile_register.7716a76ecbaab854eeb9dbd84e72398a.cfi_jt @ 0x0800f4e0 (size 8) =====

bool sym.wsa884x_volatile_register.7716a76ecbaab854eeb9dbd84e72398a.cfi_jt(ulong param_1,uint32_t param_2)

{
    uint32_t uVar1;
    code *pcVar2;
    
    uVar1 = param_2 - 0x3000;
    if (param_2 < 0x3000 || uVar1 == 0) {
        return false;
    }
    if (param_2 >> 1 == 0x1a82) {
        return true;
    }
    if (uVar1 >> 8 < 0x39) {
        return (obj.wsa884x_reg_access[uVar1] & 3) == 1;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8013c34);
    (*pcVar2)();
}


// ===== sym.wsa884x_readable_register.7716a76ecbaab854eeb9dbd84e72398a.cfi_jt @ 0x0800f4e8 (size 8) =====

uint8_t sym.wsa884x_readable_register.7716a76ecbaab854eeb9dbd84e72398a.cfi_jt(ulong param_1,uint32_t param_2)

{
    uint32_t uVar1;
    code *pcVar2;
    
    uVar1 = param_2 - 0x3000;
    if (param_2 < 0x3000 || uVar1 == 0) {
        return 0;
    }
    if (uVar1 >> 8 < 0x39) {
        return obj.wsa884x_reg_access[uVar1] & 1;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8013bd8);
    (*pcVar2)();
}


// ===== sym.wsa884x_spkr_event.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f4f0 (size 8) =====

ulong sym.wsa884x_spkr_event.142cb795c700479f84f02afc5065e4d0.cfi_jt(int64_t param_1,ulong param_2,int param_3)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    ulong uVar5;
    ulong uVar6;
    ulong uVar7;
    int iVar8;
    ulong *in_x18;
    int64_t arg1;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x28) + -0xd0;
    iVar9 = *(*(*(param_1 + 0x28) + -0xb8) + 0x98);
    if (param_3 == 4) {
        snd_soc_component_update_bits(arg1,0x3430,1,0);
        snd_soc_component_update_bits(arg1,0x348b,1,0);
        puVar1 = iVar9 + 0x2a8;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 & 0xfffffffffffffffe;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 & 0xfffffffffffffffb;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        *(iVar9 + 0xd0) = 0;
        return 0;
    }
    if (param_3 != 2) {
        return 0;
    }
    swr_slvdev_datapath_control(*(iVar9 + 0x10),*(*(iVar9 + 0x10) + 0x40),1);
    sym.wsa884x_set_gain_parameters(arg1);
    if (*(iVar9 + 0x74) == 0) {
        uVar5 = 0x34b0;
        uVar6 = 0xf0;
        uVar7 = 0xf0;
    }
    else {
        snd_soc_component_update_bits(arg1,0x34b0,0xf0,0x30);
        snd_soc_component_update_bits(arg1,0x341a,2,2);
        uVar5 = 0x304a;
        uVar6 = 8;
        uVar7 = 8;
    }
    snd_soc_component_update_bits(arg1,uVar5,uVar6,uVar7);
    if (*(iVar9 + 0x23) == '\0') {
        snd_soc_component_update_bits(arg1,0x3091,0x80,0x80);
        iVar8 = 0x54;
        if (*(iVar9 + 0xec) < 6) {
            iVar8 = 0x24;
        }
    }
    else {
        snd_soc_component_update_bits(arg1,0x3091,0x80,0);
        uVar4 = *(iVar9 + 0xe4) - 1;
        if (2 < uVar4) goto code_r0x08012c6c;
        iVar8 = uVar4 * -0x10 + 0x54;
    }
    snd_soc_component_update_bits(arg1,0x3091,0x7c,iVar8);
code_r0x08012c6c:
    swr_remove_from_group(*(iVar9 + 0x10),*(*(iVar9 + 0x10) + 0x40));
    if (((*(iVar9 + 0x2a8) >> 2 & 1) != 0) && (*(iVar9 + 0xd0) == 0)) {
        snd_soc_component_update_bits(arg1,0x3430,1,1);
    }
    return 0;
}


// ===== sym.wsa884x_enable_swr_dac_port.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f4f8 (size 8) =====

void sym.wsa884x_enable_swr_dac_port.142cb795c700479f84f02afc5065e4d0.cfi_jt
               (int64_t param_1,ulong param_2,uint param_3)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    ulong uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t *extraout_x8;
    uint64_t *puVar9;
    uchar *puVar10;
    ulong *in_x18;
    int64_t iVar11;
    int64_t iVar12;
    ulong unaff_x30;
    uint uStack_60;
    ushort uStack_5c;
    uint uStack_58;
    ushort uStack_54;
    uint uStack_50;
    ushort uStack_4c;
    uint uStack_48;
    ushort uStack_44;
    uint uStack_40;
    uint64_t uStack_3c;
    ulong uStack_34;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_28 = *(iVar11 + 0x5e0);
    iVar12 = *(param_1 + 0x28);
    uStack_44 = 0;
    uStack_48 = 0;
    uStack_4c = 0;
    iVar11 = *(*(iVar12 + -0xb8) + 0x98);
    uStack_50 = 0;
    uStack_54 = 0;
    uStack_58 = 0;
    uStack_2c = 0;
    uStack_34 = 0;
    uStack_3c = 0;
    uStack_5c = 0;
    uStack_60 = 0;
    if (iVar11 != 0) {
        uVar4 = 0;
        switch(param_3) {
        case 1:
            iVar7 = *(*(iVar12 + -0xb8) + 0x98);
            uStack_48 = *(iVar7 + 0x28);
            uStack_50 = *(iVar7 + 0x30);
            uStack_58 = *(iVar7 + 0x29);
            uStack_40 = *(iVar7 + 0x2c);
            uStack_60 = *(iVar7 + 0x31);
            if (*(iVar11 + 0x74) == 1) {
                uStack_40 = 4800000;
            }
            if (*(iVar11 + 0x20) == '\0') {
                uVar5 = 1;
                cVar1 = *(iVar11 + 0x23);
            }
            else {
                uVar5 = 2;
                iVar8 = *(*(iVar12 + -0xb8) + 0x98);
                uStack_48._0_2_ = CONCAT11(*(iVar8 + 0x34),*(iVar7 + 0x28));
                uStack_48 = uStack_48;
                uStack_50._0_2_ = CONCAT11(*(iVar8 + 0x3c),*(iVar7 + 0x30));
                uStack_50 = uStack_50;
                uStack_58._0_2_ = CONCAT11(*(iVar8 + 0x35),*(iVar7 + 0x29));
                uStack_58 = uStack_58;
                uStack_3c = *(iVar8 + 0x38);
                uStack_60._0_2_ = CONCAT11(*(iVar8 + 0x3d),*(iVar7 + 0x31));
                uStack_60 = uStack_60;
                cVar1 = *(iVar11 + 0x23);
            }
            if (cVar1 != '\0') {
                iVar7 = *(*(iVar12 + -0xb8) + 0x98);
                *(&uStack_48 | uVar5) = *(iVar7 + 0x4c);
                *(&uStack_50 | uVar5) = *(iVar7 + 0x54);
                puVar10 = &uStack_60 | uVar5;
                *(&uStack_58 | uVar5) = *(iVar7 + 0x4d);
                (&uStack_40)[uVar5] = *(iVar7 + 0x50);
                uVar5 = uVar5 + 1;
                *puVar10 = *(iVar7 + 0x55);
            }
            uVar6 = uVar5;
            if (*(iVar11 + 0x21) != '\0') {
                iVar7 = *(*(iVar12 + -0xb8) + 0x98);
                *(&uStack_48 + uVar5) = *(iVar7 + 0x58);
                *(&uStack_50 + uVar5) = *(iVar7 + 0x60);
                *(&uStack_58 + uVar5) = *(iVar7 + 0x59);
                (&uStack_40)[uVar5] = *(iVar7 + 0x5c);
                uVar6 = uVar5 + 1;
                *(&uStack_60 + uVar5) = *(iVar7 + 0x61);
            }
            uVar5 = uVar6;
            if (*(iVar11 + 0x22) != '\0') {
                iVar12 = *(*(iVar12 + -0xb8) + 0x98);
                *(&uStack_48 + uVar6) = *(iVar12 + 100);
                *(&uStack_50 + uVar6) = *(iVar12 + 0x6c);
                *(&uStack_58 + uVar6) = *(iVar12 + 0x65);
                (&uStack_40)[uVar6] = *(iVar12 + 0x68);
                uVar5 = uVar6 + 1;
                *(&uStack_60 + uVar6) = *(iVar12 + 0x6d);
            }
            swr_connect_port(*(iVar11 + 0x10),&uStack_48,uVar5,&uStack_58,&uStack_40,&uStack_50,&uStack_60);
            break;
        case 2:
            puVar9 = iVar11 + 0x2a8;
            goto code_r0x08012ae4;
        default:
            goto code_r0x08012a74;
        case 4:
            iVar7 = *(*(iVar12 + -0xb8) + 0x98);
            uStack_48 = *(iVar7 + 0x28);
            uStack_50 = *(iVar7 + 0x30);
            uStack_58 = *(iVar7 + 0x29);
            uStack_40 = *(iVar7 + 0x2c);
            uStack_60 = *(iVar7 + 0x31);
            if (*(iVar11 + 0x20) == '\0') {
                uVar5 = 1;
                cVar1 = *(iVar11 + 0x23);
            }
            else {
                uVar5 = 2;
                iVar8 = *(*(iVar12 + -0xb8) + 0x98);
                uStack_48._0_2_ = CONCAT11(*(iVar8 + 0x34),*(iVar7 + 0x28));
                uStack_48 = uStack_48;
                uStack_50._0_2_ = CONCAT11(*(iVar8 + 0x3c),*(iVar7 + 0x30));
                uStack_50 = uStack_50;
                uStack_58._0_2_ = CONCAT11(*(iVar8 + 0x35),*(iVar7 + 0x29));
                uStack_58 = uStack_58;
                uStack_3c = *(iVar8 + 0x38);
                uStack_60._0_2_ = CONCAT11(*(iVar8 + 0x3d),*(iVar7 + 0x31));
                uStack_60 = uStack_60;
                cVar1 = *(iVar11 + 0x23);
            }
            if (cVar1 != '\0') {
                iVar7 = *(*(iVar12 + -0xb8) + 0x98);
                *(&uStack_48 | uVar5) = *(iVar7 + 0x4c);
                *(&uStack_50 | uVar5) = *(iVar7 + 0x54);
                puVar10 = &uStack_60 | uVar5;
                *(&uStack_58 | uVar5) = *(iVar7 + 0x4d);
                (&uStack_40)[uVar5] = *(iVar7 + 0x50);
                uVar5 = uVar5 + 1;
                *puVar10 = *(iVar7 + 0x55);
            }
            uVar6 = uVar5;
            if (*(iVar11 + 0x21) != '\0') {
                iVar7 = *(*(iVar12 + -0xb8) + 0x98);
                *(&uStack_48 + uVar5) = *(iVar7 + 0x58);
                *(&uStack_50 + uVar5) = *(iVar7 + 0x60);
                *(&uStack_58 + uVar5) = *(iVar7 + 0x59);
                (&uStack_40)[uVar5] = *(iVar7 + 0x5c);
                uVar6 = uVar5 + 1;
                *(&uStack_60 + uVar5) = *(iVar7 + 0x61);
            }
            uVar5 = uVar6;
            if (*(iVar11 + 0x22) != '\0') {
                iVar12 = *(*(iVar12 + -0xb8) + 0x98);
                *(&uStack_48 + uVar6) = *(iVar12 + 100);
                *(&uStack_50 + uVar6) = *(iVar12 + 0x6c);
                *(&uStack_58 + uVar6) = *(iVar12 + 0x65);
                (&uStack_40)[uVar6] = *(iVar12 + 0x68);
                uVar5 = uVar6 + 1;
                *(&uStack_60 + uVar6) = *(iVar12 + 0x6d);
            }
            swr_disconnect_port(*(iVar11 + 0x10),&uStack_48,uVar5,&uStack_58,&uStack_60);
            break;
        case 8:
            iVar3 = swr_set_device_group(*(iVar11 + 0x10),0);
            if ((iVar3 != 0) &&
               (iVar3 = ___ratelimit(obj.wsa884x_enable_swr_dac_port._rs,"wsa884x_enable_swr_dac_port"), iVar3 != 0))
            {
                _dev_err(*(iVar12 + -0xb8),"%s: set num ch failed\n","wsa884x_enable_swr_dac_port");
            }
            swr_slvdev_datapath_control(*(iVar11 + 0x10),*(*(iVar11 + 0x10) + 0x40),0);
        }
        while( true ) {
            uVar4 = 0;
code_r0x08012a74:
            iVar11 = sp_el0;
            if (*(iVar11 + 0x5e0) == iStack_28) break;
            __stack_chk_fail(uVar4);
            puVar9 = extraout_x8;
code_r0x08012ae4:
            Hint_Prefetch(puVar9,2,0,1);
            do {
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(puVar9,0x10);
                if (bVar2) {
                    *puVar9 = *puVar9 | 1;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
        }
        return;
    }
    uVar4 = 0xffffffea;
    goto code_r0x08012a74;
}


// ===== sym.wsa884x_get_cps.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f500 (size 8) =====

ulong sym.wsa884x_get_cps.142cb795c700479f84f02afc5065e4d0.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(param_2 + 0x48) = *(*(*(*(param_1 + 0x80) + 0x18) + 0x98) + 0x22);
    return 0;
}


// ===== sym.snd_soc_dapm_put_volsw.cfi_jt @ 0x0800f508 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_dapm_put_volsw.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.wsa884x_get_visense.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f510 (size 8) =====

ulong sym.wsa884x_get_visense.142cb795c700479f84f02afc5065e4d0.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(param_2 + 0x48) = *(*(*(*(param_1 + 0x80) + 0x18) + 0x98) + 0x21);
    return 0;
}


// ===== sym.wsa_pa_gain_put.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f518 (size 8) =====

ulong sym.wsa_pa_gain_put.142cb795c700479f84f02afc5065e4d0.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(*(*(*(param_1 + 0x80) + 0x18) + 0x98) + 0xe0) = *(param_2 + 0x48);
    return 0;
}


// ===== sym.wsa_dev_mode_get.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f520 (size 8) =====

ulong sym.wsa_dev_mode_get.142cb795c700479f84f02afc5065e4d0.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(param_2 + 0x48) = *(*(*(*(param_1 + 0x80) + 0x18) + 0x98) + 0x74);
    return 0;
}


// ===== sym.wsa884x_set_visense.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f528 (size 8) =====

ulong sym.wsa884x_set_visense.142cb795c700479f84f02afc5065e4d0.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(*(*(*(param_1 + 0x80) + 0x18) + 0x98) + 0x21) = *(param_2 + 0x48) != 0;
    return 0;
}


// ===== sym.wsa_pa_gain_get.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f530 (size 8) =====

ulong sym.wsa_pa_gain_get.142cb795c700479f84f02afc5065e4d0.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(param_2 + 0x48) = *(*(*(*(param_1 + 0x80) + 0x18) + 0x98) + 0xe0);
    return 0;
}


// ===== sym.wsa884x_set_compander.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f538 (size 8) =====

ulong sym.wsa884x_set_compander.142cb795c700479f84f02afc5065e4d0.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(*(*(*(param_1 + 0x80) + 0x18) + 0x98) + 0x20) = *(param_2 + 0x48) != 0;
    return 0;
}


// ===== sym.wsa_get_temp.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f540 (size 8) =====

ulong sym.wsa_get_temp.142cb795c700479f84f02afc5065e4d0.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int iVar8;
    int64_t iVar9;
    int64_t iVar10;
    ulong *in_x18;
    int64_t iVar11;
    char cVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar11 = *(param_1 + 0x80);
    iVar10 = *(*(iVar11 + 0x18) + 0x98);
    if ((*(iVar10 + 0x2a8) & 1) == 0) {
        if (iVar10 == 0) {
            iVar8 = 0;
        }
        else {
            cVar12 = '\x03';
            iVar9 = iVar10;
            do {
                mutex_lock(iVar9 + 0x80);
                snd_soc_component_update_bits(iVar11,0x343d,1,1);
                snd_soc_component_update_bits(iVar11,0x343d,4,4);
                snd_soc_component_update_bits(iVar11,0x343d,2,2);
                snd_soc_component_update_bits(iVar11,0x343d,0x80,0x80);
                snd_soc_component_update_bits(iVar11,0x343d,0x20,0x20);
                snd_soc_component_update_bits(iVar11,0x343d,0x40,0x40);
                snd_soc_component_update_bits(iVar11,0x3450,1,0);
                uVar4 = snd_soc_component_read(iVar11,0x3452);
                uVar5 = snd_soc_component_read(iVar11,0x3453);
                snd_soc_component_update_bits(iVar11,0x3450,1,1);
                uVar2 = snd_soc_component_read(iVar11,0x3881);
                uVar6 = snd_soc_component_read(iVar11,0x3882);
                uVar3 = snd_soc_component_read(iVar11,0x3883);
                uVar7 = snd_soc_component_read(iVar11,0x3884);
                snd_soc_component_update_bits(iVar11,0x343d,0xe7,0);
                mutex_unlock(iVar9 + 0x80);
                if (((((uVar2 - 0x5d < 0xffffffe7) || ((uVar6 & 0x3f) != 0)) || (uVar3 < 0xb9)) ||
                    ((0xda < uVar3 || ((uVar7 & 0x3f) != 0)))) &&
                   (iVar8 = ___ratelimit(obj.wsa884x_get_temperature._rs.95,"wsa884x_get_temperature"), iVar8 != 0)) {
                    _printk("%s: Temperature registers[%d %d %d %d] are out of range\n","wsa884x_get_temperature",
                            uVar2,uVar6 & 0xff,uVar3,uVar7 & 0xff);
                }
                uVar6 = (uVar6 & 0xc0 | uVar2 << 8) >> 6;
                iVar8 = ((uVar7 & 0xc0 | uVar3 << 8) >> 6) - uVar6;
                if (iVar8 != 0) {
                    iVar1 = 0;
                    if (iVar8 != 0) {
                        iVar1 = ((((uVar5 & 0xc0 | (uVar4 & 0xff) << 8) >> 6) - uVar6) * 0xa0) / iVar8;
                    }
                    iVar8 = iVar1 + -10;
                    if (iVar1 - 0x37U < 0xffffffd9) goto code_r0x08012308;
code_r0x0801236c:
                    *(iVar10 + 0xd4) = iVar8;
                    goto code_r0x08012380;
                }
                iVar8 = 0xffff;
code_r0x08012308:
                cVar12 = cVar12 + -1;
                msleep(10);
                if (cVar12 == '\0') goto code_r0x0801236c;
                iVar9 = *(*(iVar11 + 0x18) + 0x98);
            } while (iVar9 != 0);
            iVar8 = ___ratelimit(obj.wsa884x_temp_reg_read._rs,"wsa884x_temp_reg_read");
            if (iVar8 != 0) {
                _dev_err(*(iVar11 + 0x18),"%s: wsa884x is NULL\n","wsa884x_temp_reg_read");
            }
            iVar8 = ___ratelimit(obj.wsa884x_get_temperature._rs,"wsa884x_get_temperature");
            if (iVar8 != 0) {
                _printk(0x8001cc9,"wsa884x_get_temperature",0xffffffea,*(iVar10 + 0xd4));
            }
            iVar8 = *(iVar10 + 0xd4);
        }
    }
    else {
        iVar8 = *(iVar10 + 0xd4);
    }
code_r0x08012380:
    *(param_2 + 0x48) = iVar8;
    return 0;
}


// ===== sym.wsa884x_get_dev_num.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f548 (size 8) =====

ulong sym.wsa884x_get_dev_num.142cb795c700479f84f02afc5065e4d0.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x80) != 0) {
        iVar2 = *(*(*(param_1 + 0x80) + 0x18) + 0x98);
        if (iVar2 != 0) {
            *(param_2 + 0x48) = *(*(iVar2 + 0x10) + 0x40);
            return 0;
        }
        iVar1 = ___ratelimit(obj.wsa884x_get_dev_num._rs,"wsa884x_get_dev_num");
        if (iVar1 != 0) {
            _printk(0x8001e2d,"wsa884x_get_dev_num");
        }
    }
    return 0xffffffea;
}


// ===== sym.wsa_dev_mode_put.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f550 (size 8) =====

ulong sym.wsa_dev_mode_put.142cb795c700479f84f02afc5065e4d0.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    code *pcVar2;
    int64_t iVar3;
    int iVar4;
    
    if (1 < *(param_2 + 0x48)) {
        return 0xffffffea;
    }
    iVar3 = *(*(*(param_1 + 0x80) + 0x18) + 0x98);
    iVar4 = *(param_2 + 0x48);
    *(iVar3 + 0x74) = iVar4;
    uVar1 = *(iVar3 + 0x10c) - 1;
    uVar1 = iVar4 + (uVar1 - (uVar1 + ((uVar1 & 0x8000) >> 0xf) & 0x7ffffffe)) * 2;
    if (uVar1 < 4) {
        *(iVar3 + 0xec) = *(iVar3 + uVar1 * 4 + 0xf0);
        return 0;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x80124fc);
    (*pcVar2)();
}


// ===== sym.wsa884x_get_compander.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f558 (size 8) =====

ulong sym.wsa884x_get_compander.142cb795c700479f84f02afc5065e4d0.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(param_2 + 0x48) = *(*(*(*(param_1 + 0x80) + 0x18) + 0x98) + 0x20);
    return 0;
}


// ===== sym.wsa884x_get_pbr.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f560 (size 8) =====

ulong sym.wsa884x_get_pbr.142cb795c700479f84f02afc5065e4d0.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(param_2 + 0x48) = *(*(*(*(param_1 + 0x80) + 0x18) + 0x98) + 0x23);
    return 0;
}


// ===== sym.snd_soc_dapm_get_volsw.cfi_jt @ 0x0800f568 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_dapm_get_volsw.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.wsa884x_set_cps.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f570 (size 8) =====

ulong sym.wsa884x_set_cps.142cb795c700479f84f02afc5065e4d0.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(*(*(*(param_1 + 0x80) + 0x18) + 0x98) + 0x22) = *(param_2 + 0x48) != 0;
    return 0;
}


// ===== sym.wsa884x_set_pbr.142cb795c700479f84f02afc5065e4d0.cfi_jt @ 0x0800f578 (size 8) =====

ulong sym.wsa884x_set_pbr.142cb795c700479f84f02afc5065e4d0.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(*(*(*(param_1 + 0x80) + 0x18) + 0x98) + 0x23) = *(param_2 + 0x48) != 0;
    return 0;
}


// ===== sym.wsa884x_codec_info_create_codec_entry @ 0x0800f580 (size 416) =====

uint64_t sym.wsa884x_codec_info_create_codec_entry(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
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
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    uVar2 = 0xffffffea;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    if ((arg1 != 0) && (arg2 != 0)) {
        iVar5 = *(*(arg2 + 0x18) + 0x98);
        if (*(iVar5 + 0xb0) == 0) {
            iVar4 = *(arg2 + 0x20);
            snprintf(&uStack_88,0x50,"%s.%llx",0x8001e25,*(*(iVar5 + 0x10) + 0x3d8));
            iVar3 = snd_info_create_module_entry(*(arg1 + 0x38),&uStack_88,arg1);
            *(iVar5 + 0xb0) = iVar3;
            if (iVar3 != 0) {
                *(iVar3 + 8) = 0x416d;
                iVar1 = snd_info_register(*(iVar5 + 0xb0));
                if ((-1 < iVar1) &&
                   (iVar3 = snd_info_create_card_entry(*(iVar4 + 0x48),"version",*(iVar5 + 0xb0)), iVar3 != 0)) {
                    *(iVar3 + 0x40) = iVar5;
                    *(iVar3 + 0x10) = 0x20;
                    *(iVar3 + 0x18) = 1;
                    *(iVar3 + 0x20) = obj.wsa884x_codec_info_ops;
                    iVar1 = snd_info_register();
                    if (-1 < iVar1) {
                        *(iVar5 + 0xb8) = iVar3;
                        iVar4 = snd_info_create_card_entry(*(iVar4 + 0x48),"variant",*(iVar5 + 0xb0));
                        if (iVar4 != 0) {
                            *(iVar4 + 0x40) = iVar5;
                            *(iVar4 + 0x10) = 0x20;
                            *(iVar4 + 0x18) = 1;
                            *(iVar4 + 0x20) = obj.wsa884x_variant_ops;
                            iVar1 = snd_info_register();
                            if (-1 < iVar1) {
                                uVar2 = 0;
                                *(iVar5 + 0xc0) = iVar4;
                                goto code_r0x0800f6ec;
                            }
                            snd_info_free_entry(iVar4);
                        }
                    }
                    snd_info_free_entry(iVar3);
                }
                snd_info_free_entry(*(iVar5 + 0xb0));
            }
            uVar2 = 0xfffffff4;
        }
        else {
            uVar2 = 0;
        }
    }
code_r0x0800f6ec:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    iVar5 = __stack_chk_fail(uVar2);
    *extraout_x18 = sym.wsa884x_codec_get_dev_num;
    if (iVar5 != 0) {
        iVar5 = *(*(iVar5 + 0x18) + 0x98);
        if (iVar5 != 0) {
            return *(*(iVar5 + 0x10) + 0x40);
        }
        iVar1 = ___ratelimit(obj.wsa884x_codec_get_dev_num._rs,"wsa884x_codec_get_dev_num");
        if (iVar1 != 0) {
            _printk(0x8001e2d,"wsa884x_codec_get_dev_num");
        }
    }
    return 0xffffffea;
}


// ===== sym.wsa884x_codec_get_dev_num @ 0x0800f720 (size 112) =====

uint64_t sym.wsa884x_codec_get_dev_num(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        iVar2 = *(*(arg1 + 0x18) + 0x98);
        if (iVar2 != 0) {
            return *(*(iVar2 + 0x10) + 0x40);
        }
        iVar1 = ___ratelimit(obj.wsa884x_codec_get_dev_num._rs,"wsa884x_codec_get_dev_num");
        if (iVar1 != 0) {
            _printk(0x8001e2d,"wsa884x_codec_get_dev_num");
        }
    }
    return 0xffffffea;
}


// ===== sym.wsa884x_set_channel_map @ 0x0800f790 (size 556) =====

ulong sym.wsa884x_set_channel_map(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar uVar1;
    int iVar2;
    ulong uVar3;
    uint32_t uVar4;
    uint *in_x4;
    uchar *in_x5;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = arg3;
    if (((((uVar4 & 0xff) < 7) && (arg2 != 0)) && (arg4 != 0)) && (in_x4 != NULL)) {
        if ((arg3 & 0xffU) != 0) {
            iVar5 = *(*(arg1 + 0x18) + 0x98);
            *(iVar5 + 0x28) = *arg2;
            *(iVar5 + 0x29) = *arg4;
            *(iVar5 + 0x2c) = *in_x4;
            uVar1 = __sw_hweight8(*arg4);
            *(iVar5 + 0x30) = uVar1;
            if (in_x5 != NULL) {
                *(iVar5 + 0x31) = *in_x5;
            }
            if ((uVar4 & 0xff) != 1) {
                *(iVar5 + 0x34) = *(arg2 + 1);
                *(iVar5 + 0x35) = *(arg4 + 4);
                *(iVar5 + 0x38) = in_x4[1];
                uVar1 = __sw_hweight8(*(arg4 + 4));
                *(iVar5 + 0x3c) = uVar1;
                if (in_x5 != NULL) {
                    *(iVar5 + 0x3d) = in_x5[1];
                }
                if ((uVar4 & 0xff) != 2) {
                    *(iVar5 + 0x40) = *(arg2 + 2);
                    *(iVar5 + 0x41) = *(arg4 + 8);
                    *(iVar5 + 0x44) = in_x4[2];
                    uVar1 = __sw_hweight8(*(arg4 + 8));
                    *(iVar5 + 0x48) = uVar1;
                    if (in_x5 != NULL) {
                        *(iVar5 + 0x49) = in_x5[2];
                    }
                    if ((uVar4 & 0xff) != 3) {
                        *(iVar5 + 0x4c) = *(arg2 + 3);
                        *(iVar5 + 0x4d) = *(arg4 + 0xc);
                        *(iVar5 + 0x50) = in_x4[3];
                        uVar1 = __sw_hweight8(*(arg4 + 0xc));
                        *(iVar5 + 0x54) = uVar1;
                        if (in_x5 != NULL) {
                            *(iVar5 + 0x55) = in_x5[3];
                        }
                        if ((uVar4 & 0xff) != 4) {
                            *(iVar5 + 0x58) = *(arg2 + 4);
                            *(iVar5 + 0x59) = *(arg4 + 0x10);
                            *(iVar5 + 0x5c) = in_x4[4];
                            uVar1 = __sw_hweight8(*(arg4 + 0x10));
                            *(iVar5 + 0x60) = uVar1;
                            if (in_x5 != NULL) {
                                *(iVar5 + 0x61) = in_x5[4];
                            }
                            if ((uVar4 & 0xff) != 5) {
                                *(iVar5 + 100) = *(arg2 + 5);
                                *(iVar5 + 0x65) = *(arg4 + 0x14);
                                *(iVar5 + 0x68) = in_x4[5];
                                uVar1 = __sw_hweight8(*(arg4 + 0x14));
                                *(iVar5 + 0x6c) = uVar1;
                                if (in_x5 != NULL) {
                                    *(iVar5 + 0x6d) = in_x5[5];
                                    return 0;
                                }
                            }
                        }
                    }
                }
            }
        }
        uVar3 = 0;
    }
    else {
        iVar2 = ___ratelimit(obj.wsa884x_set_channel_map._rs,"wsa884x_set_channel_map");
        if (iVar2 == 0) {
            uVar3 = 0xffffffea;
        }
        else {
            _dev_err(*(arg1 + 0x18),"%s: Invalid port=%pK, ch_mask=%pK, ch_rate=%pK\n","wsa884x_set_channel_map",arg2
                     ,arg4);
            uVar3 = 0xffffffea;
        }
    }
    return uVar3;
}


// ===== sym.wsa884x_codec_version_read @ 0x0800f9bc (size 252) =====

uint64_t sym.wsa884x_codec_version_read(int64_t arg1,uchar noname_1 [16],uchar noname_2 [16],int64_t arg2)

{
    int64_t *arg1_00;
    uint64_t *puVar1;
    uint64_t *puVar2;
    uint64_t *puVar3;
    code *pcVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    uint64_t *puVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    ulong uVar15;
    int64_t iVar16;
    int64_t *piVar17;
    ulong *puVar18;
    char *pcVar19;
    ulong uVar20;
    ulong in_x4;
    ulong uVar21;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t *puVar22;
    ulong unaff_x30;
    uint32_t uStack_11c;
    uint32_t uStack_118;
    uchar auStack_114 [4];
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    int64_t iStack_e8;
    uchar **ppuStack_e0;
    code *pcStack_d8;
    uchar auStack_80 [8];
    unkbyte7 Stack_78;
    char cStack_71;
    uchar uStack_70;
    uchar uStack_6f;
    uchar uStack_6e;
    unkbyte5 Stack_6d;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    char acStack_38 [5];
    ushort uStack_33;
    char cStack_31;
    char acStack_30 [5];
    ushort uStack_2b;
    uchar uStack_29;
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar16 = sp_el0;
    iStack_18 = *(iVar16 + 0x5e0);
    acStack_38[0] = '\0';
    acStack_38[1] = '\0';
    acStack_38[2] = '\0';
    acStack_38[3] = '\0';
    acStack_38[4] = '\0';
    uStack_33 = 0;
    cStack_31 = '\0';
    uStack_28 = 0;
    uStack_20 = 0;
    acStack_30[0] = '\0';
    acStack_30[1] = '\0';
    acStack_30[2] = '\0';
    acStack_30[3] = '\0';
    acStack_30[4] = '\0';
    uStack_2b = 0;
    uStack_29 = 0;
    if (*(arg1 + 0x40) == 0) {
        iVar5 = ___ratelimit(obj.wsa884x_codec_version_read._rs,"wsa884x_codec_version_read");
        if (iVar5 == 0) {
            uVar10 = 0xffffffffffffffea;
        }
        else {
            _printk(0x800222e,"wsa884x_codec_version_read");
            uVar10 = 0xffffffffffffffea;
        }
    }
    else {
        if (*(*(arg1 + 0x40) + 0xdc) == 0) {
            in_x4 = 0xc;
            acStack_38[0] = str.WSA884X_1_0_n[0];
            acStack_38[1] = str.WSA884X_1_0_n[1];
            acStack_38[2] = str.WSA884X_1_0_n[2];
            acStack_38[3] = str.WSA884X_1_0_n[3];
            acStack_38[4] = str.WSA884X_1_0_n[4];
            uStack_33 = str.WSA884X_1_0_n._5_3_;
            cStack_31 = SUB31(str.WSA884X_1_0_n._5_3_,2);
            acStack_30[0] = str.WSA884X_1_0_n[8];
            acStack_30[1] = str.WSA884X_1_0_n[9];
            acStack_30[2] = str.WSA884X_1_0_n[10];
            acStack_30[3] = str.WSA884X_1_0_n[0xb];
            acStack_30[4] = str.WSA884X_1_0_n[0xc];
        }
        else {
            in_x4 = 0xe;
            acStack_38 = SUB75(str.VER_UNDEFINED_n._0_7_,0);
            uStack_33 = SUB72(str.VER_UNDEFINED_n._0_7_,5);
            cStack_31 = str.VER_UNDEFINED_n[7];
            acStack_30 = SUB75(str.VER_UNDEFINED_n._8_7_,0);
            uStack_2b = SUB72(str.VER_UNDEFINED_n._8_7_,5);
        }
        pcVar19 = acStack_38;
        uVar10 = simple_read_from_buffer(arg2);
        arg2 = pcVar19;
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_18) {
        return uVar10;
    }
    iVar11 = __stack_chk_fail(uVar10);
    *extraout_x18 = sym.wsa884x_variant_read;
    pcStack_48 = sym.wsa884x_variant_read;
    iVar16 = sp_el0;
    iStack_58 = *(iVar16 + 0x5e0);
    Stack_78 = 0;
    cStack_71 = '\0';
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6e = 0;
    Stack_6d = 0;
    puStack_50 = &stack0xfffffffffffffff0;
    if (*(iVar11 + 0x40) == 0) {
        iVar5 = ___ratelimit(obj.wsa884x_variant_read._rs,"wsa884x_variant_read");
        if (iVar5 == 0) {
            uVar10 = 0xffffffffffffffea;
        }
        else {
            _printk(0x800222e,"wsa884x_variant_read");
            uVar10 = 0xffffffffffffffea;
        }
    }
    else {
        iVar5 = *(*(iVar11 + 0x40) + 0xd8);
        if (iVar5 == 0xc) {
            uStack_70 = 10;
            uStack_6f = 0;
            uVar21 = 9;
            uVar15 = str.WSA8845H_n._0_8_;
code_r0x0800fb88:
            Stack_78 = uVar15;
            cStack_71 = SUB81(uVar15,7);
        }
        else {
            if (iVar5 == 5) {
                pcVar19 = "WSA8845\n";
            }
            else {
                if (iVar5 != 0) {
                    uVar21 = 10;
                    uStack_70 = 0x44;
                    uStack_6f = 10;
                    uVar15 = str.UNDEFINED_n._0_8_;
                    goto code_r0x0800fb88;
                }
                pcVar19 = "WSA8840\n";
            }
            uVar21 = 8;
            uStack_70 = 0;
            Stack_78 = *pcVar19;
            cStack_71 = *pcVar19 >> 0x38;
        }
        uStack_6e = 0;
        uVar10 = simple_read_from_buffer(arg2,in_x4,auStack_80,&Stack_78,uVar21);
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_58) {
        return uVar10;
    }
    uVar10 = __stack_chk_fail(uVar10);
    *extraout_x18_00 = sym.wsa884x_swr_probe;
    pcStack_d8 = sym.wsa884x_swr_probe;
    iVar16 = sp_el0;
    arg1_00 = uVar10 + 0x48;
    iStack_e8 = *(iVar16 + 0x5e0);
    auStack_114[0] = 0;
    uStack_11c = 0;
    uStack_118 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_110 = 0;
    ppuStack_e0 = &puStack_50;
    puVar12 = devm_kmalloc(arg1_00,0x2c8,0xdc0);
    if ((puVar12 == NULL) || (uVar13 = devm_kmalloc(arg1_00,0x88,0xdc0), uVar13 == 0)) {
        uVar14 = 0xfffffff4;
    }
    else {
        memcpy(uVar13,obj.wsa884x_regmap_irq_chip,0x88);
        puVar1 = puVar12 + 0x52;
        puVar2 = puVar12 + 0x53;
        msm_cdc_get_power_supplies(arg1_00,puVar1,puVar2);
        if ((puVar12[0x52] == 0) || (*puVar2 < 1)) {
            pcVar19 = "%s: no power supplies defined\n";
code_r0x08010174:
            _dev_err(arg1_00,pcVar19,"wsa884x_enable_supplies");
code_r0x08010184:
            uVar14 = 0xfffffdfb;
        }
        else {
            iVar5 = msm_cdc_init_supplies(arg1_00,puVar12 + 0x54);
            if (puVar12[0x54] == 0) {
                _dev_err(arg1_00,"%s: Cannot init wsa supplies\n","wsa884x_enable_supplies");
                if (iVar5 != 0) goto code_r0x08010184;
            }
            else {
                iVar5 = msm_cdc_enable_static_supplies(arg1_00,puVar12[0x54],*puVar1,*puVar2);
                if (iVar5 != 0) {
                    pcVar19 = "%s: wsa static supply enable failed!\n";
                    goto code_r0x08010174;
                }
            }
            uVar14 = of_parse_phandle(*(uVar10 + 0x338),"qcom,spkr-sd-n-node",0);
            puVar12[0x19] = uVar14;
            if (uVar14 == 0) {
                uVar14 = 0;
            }
            else {
                *(uVar10 + 0xe0) = puVar12;
                puVar12[1] = arg1_00;
                puVar12[2] = uVar10;
                iVar5 = msm_cdc_pinctrl_get_state();
                iVar6 = msm_cdc_pinctrl_select_active_state(puVar12[0x19]);
                if ((iVar6 != 0) && (iVar7 = ___ratelimit(obj.wsa884x_gpio_ctrl._rs,"wsa884x_gpio_ctrl"), iVar7 != 0))
                {
                    _dev_err(puVar12[1],"%s: Failed to turn state %d; ret=%d\n","wsa884x_gpio_ctrl",1,iVar6);
                }
                usleep_range_state(5000,0x1392,2);
                iVar6 = swr_get_logical_dev_num(uVar10,*(uVar10 + 0x3d8),auStack_114);
                if (iVar6 == 0) {
                    *(uVar10 + 0x40) = auStack_114[0];
                    uVar14 = __devm_regmap_init_swr(uVar10,obj.wsa884x_regmap_config,0,0);
                    *puVar12 = uVar14;
                    if (uVar14 < 0xfffffffffffff001) {
                        devm_regmap_qti_debugfs_register(arg1_00,uVar14);
                        *(uVar13 + 0x80) = puVar12;
                        puVar3 = puVar12 + 0x23;
                        puVar12[0x27] = arg1_00;
                        puVar12[0x23] = uVar13;
                        puVar12[0x24] = "WSA884X";
                        puVar12[0x25] = *puVar12;
                        uVar8 = wcd_irq_init(puVar3,puVar12 + 0x22);
                        if (uVar8 != 0) {
                            uVar14 = uVar8;
                            pcVar19 = "%s: IRQ init failed: %d\n";
                            piVar17 = puVar12[1];
                            goto code_r0x080102bc;
                        }
                        *(puVar12[2] + 1000) = puVar12[0x22];
                        wcd_request_irq(puVar3,0,"WSA SAF2WAR",
                                        sym.wsa884x_saf2war_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar12)
                        ;
                        wcd_request_irq(puVar3,1,"WSA WAR2SAF",
                                        sym.wsa884x_war2saf_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar12)
                        ;
                        wcd_request_irq(puVar3,2,"WSA OTP",
                                        sym.wsa884x_otp_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar12);
                        wcd_request_irq(puVar3,3,"WSA OCP",
                                        sym.wsa884x_ocp_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar12);
                        wcd_request_irq(puVar3,4,"WSA CLIP",
                                        sym.wsa884x_clip_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar12);
                        wcd_disable_irq(puVar3,4);
                        wcd_request_irq(puVar3,5,"WSA PDM WD",
                                        sym.wsa884x_pdm_wd_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar12);
                        wcd_request_irq(puVar3,6,"WSA CLK WD",
                                        sym.wsa884x_clk_wd_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar12);
                        wcd_request_irq(puVar3,7,"WSA EXT INT",
                                        sym.wsa884x_ext_int_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar12)
                        ;
                        wcd_disable_irq(puVar3,7);
                        wcd_request_irq(puVar3,8,"WSA UVLO",
                                        sym.wsa884x_uvlo_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar12);
                        wcd_request_irq(puVar3,9,"WSA PA ERR",
                                        sym.wsa884x_pa_on_err_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,
                                        puVar12);
                        uVar13 = devm_kmalloc(arg1_00,0x160,0xdc0);
                        puVar12[0x57] = uVar13;
                        if (uVar13 == 0) {
                            uVar14 = 0xfffffff4;
                        }
                        else {
                            memcpy(uVar13,obj.soc_codec_dev_wsa884x_wsa,0x160);
                            uVar13 = devm_kmalloc(arg1_00,0xf0,0xdc0);
                            puVar12[0x56] = uVar13;
                            if (uVar13 == 0) {
                                uVar14 = 0xfffffff4;
                                puVar18 = NULL;
                            }
                            else {
                                memcpy(uVar13,obj.wsa_dai,0xf0);
                                uVar8 = *(uVar10 + 0x3d8);
                                iVar7 = of_device_is_compatible(*(uVar10 + 0x338),0x8001f1b);
                                iVar6 = 3;
                                if (iVar7 == 0) {
                                    iVar6 = 1;
                                }
                                uVar8 = iVar6 + (uVar8 & 0xf);
                                snprintf(&uStack_110,0x28,"wsa-codec.%d",uVar8);
                                uVar15 = strlen(&uStack_110);
                                uVar15 = kstrndup(&uStack_110,uVar15,0xcc0);
                                *puVar12[0x57] = uVar15;
                                snprintf(&uStack_110,0x28,"wsa_rx%d",uVar8);
                                uVar15 = strlen(&uStack_110);
                                uVar15 = kstrndup(&uStack_110,uVar15,0xcc0);
                                *puVar12[0x56] = uVar15;
                                snprintf(&uStack_110,0x28,"WSA884X_AIF%d Playback",uVar8);
                                uVar15 = strlen(&uStack_110);
                                uVar15 = kstrndup(&uStack_110,uVar15,0xcc0);
                                *(puVar12[0x56] + 0xb0) = uVar15;
                                uVar14 = snd_soc_register_component(arg1_00,puVar12[0x57],puVar12[0x56],1);
                                uVar14 = uVar14 & 0xffffffff;
                                iVar16 = snd_soc_lookup_component(arg1_00,*puVar12[0x57]);
                                if (iVar16 == 0) {
                                    _dev_err(arg1_00,"%s: component is NULL\n","wsa884x_swr_probe");
                                    uVar14 = 0xffffffea;
                                }
                                else {
                                    uVar13 = of_parse_phandle(*(uVar10 + 0x338),"qcom,bolero-handle",0);
                                    puVar12[0x49] = uVar13;
                                    if (uVar13 == 0) {
                                        uVar13 = of_parse_phandle(*(uVar10 + 0x338),"qcom,lpass-cdc-handle",0);
                                        puVar12[0x49] = uVar13;
                                        if (uVar13 != 0) goto code_r0x080100cc;
                                        _dev_info(arg1_00,"%s: parent node not found\n","wsa884x_swr_probe");
                                    }
                                    else {
code_r0x080100cc:
                                        uVar13 = of_find_device_by_node();
                                        puVar12[0x4b] = uVar13;
                                        if (uVar13 == 0) {
                                            pcVar19 = "%s: parent dev not found\n";
                                        }
                                        else {
                                            puVar22 = *(uVar13 + 0xa0);
                                            if (puVar22 != NULL) {
                                                puVar12[0x4d] =
                                                     sym.wsa884x_event_notify.142cb795c700479f84f02afc5065e4d0.cfi_jt;
                                                pcVar4 = puVar22[2];
                                                if (pcVar4 == NULL) {
                                                    uVar13 = 0;
                                                }
                                                else {
                                                    __cfi_slowpath_diag(0x3b795baa068bc3a6,pcVar4,0x80018b0);
                                                    (*pcVar4)(*puVar22,puVar12 + 0x4d,1);
                                                    uVar13 = puVar22[2];
                                                }
                                                puVar12[0x51] = uVar13;
                                                puVar12[0x50] = *puVar22;
                                                goto code_r0x080101a8;
                                            }
                                            pcVar19 = "%s: plat data not found\n";
                                        }
                                        _dev_err(arg1_00,pcVar19,"wsa884x_swr_probe");
                                    }
code_r0x080101a8:
                                    uVar15 = *(uVar10 + 0x338);
                                    *(puVar12 + 0x74) = 0;
                                    *(puVar12 + 0x10c) = uVar8;
                                    uVar13 = of_parse_phandle(uVar15,"qcom,wsa-macro-handle",0);
                                    puVar12[0x4a] = uVar13;
                                    if (uVar13 == 0) {
                                        pcVar19 = "%s: parent node not found\n";
                                    }
                                    else {
                                        uVar13 = of_find_device_by_node();
                                        puVar12[0x4c] = uVar13;
                                        if (uVar13 != 0) {
                                            uVar8 = ~uVar8 & 1;
                                            uVar9 = of_property_read_u32_index
                                                              (*(uVar13 + 0x300),"qcom,wsa-rloads",uVar8,
                                                               puVar12 + 0x1d);
                                            if (uVar9 == 0) {
                                                uVar9 = of_property_read_u32_index
                                                                  (*(puVar12[0x4c] + 0x300),"qcom,wsa-bat-cfgs",uVar8)
                                                ;
                                                if (uVar9 == 0) {
                                                    uVar9 = of_property_read_variable_u32_array
                                                                      (*(puVar12[0x4c] + 0x300),"qcom,noise-gate-mode"
                                                                       ,&uStack_118,1,0);
                                                    if (uVar9 < 0) {
                                                        _dev_info(arg1_00,"%s: Failed to read wsa noise gate mode\n",
                                                                  "wsa884x_swr_probe");
code_r0x08010388:
                                                        *(puVar12 + 0x58) = 0;
                                                    }
                                                    else {
                                                        if (3 < uStack_118) goto code_r0x08010388;
                                                        *(puVar12 + 0x58) = uStack_118;
                                                    }
                                                    iVar11 = of_find_property(*(puVar12[0x4c] + 0x300),
                                                                              "qcom,wsa-system-gains",&uStack_11c);
                                                    if (iVar11 == 0) {
                                                        uVar9 = uVar9 & uVar9 >> 0x1f;
                                                        pcVar19 = "%s: missing wsa-system-gains\n";
                                                    }
                                                    else {
                                                        uVar9 = of_property_read_variable_u32_array
                                                                          (*(puVar12[0x4c] + 0x300),
                                                                           "qcom,wsa-system-gains",puVar12 + 0x1e,
                                                                           (uStack_11c << 0x20) >> 0x23,0);
                                                        if (-1 < uVar9) {
                                                            uVar8 = *(puVar12 + 0x74) + uVar8 * 2;
                                                            if (3 < uVar8) goto code_r0x08010804;
                                                            uVar9 = *(puVar12 + 0x1e + uVar8 * 4);
                                                            *(puVar12 + 0xec) = uVar9;
                                                            uVar13 = sym.wsa884x_validate_dt_configuration_params
                                                                               (uVar8,puVar12[0x1d],*(puVar12 + 0xe4)
                                                                                ,uVar9);
                                                            if ((uVar13 & 1) == 0) {
                                                                *(puVar12 + 4) = puVar12[0x1b] != 0xc;
                                                                sym.wsa884x_set_gain_parameters(iVar16);
                                                                sym.wsa884x_set_pbr_parameters(iVar16);
                                                                snd_soc_component_write
                                                                          (iVar16,0x3504,
                                                                           *(puVar12 + 0x74) == 0 |
                                                                           (puVar12[0x21] & 0xf) << 2 | 0xc0);
                                                                snd_soc_component_write(iVar16,0x3505,0);
                                                                if (puVar12[0x1d] < 2) {
                                                                    snd_soc_component_update_bits
                                                                              (iVar16,0x304c,0x70,0x70);
                                                                }
                                                                if (*(puVar12 + 0x74) == 0) {
                                                                    uVar15 = 0x34b0;
                                                                    uVar21 = 0xf0;
                                                                    uVar20 = 0xf0;
                                                                }
                                                                else {
                                                                    snd_soc_component_update_bits
                                                                              (iVar16,0x34b0,0xf0,0x30);
                                                                    snd_soc_component_update_bits(iVar16,0x341a,2,2);
                                                                    uVar15 = 0x304a;
                                                                    uVar21 = 8;
                                                                    uVar20 = 8;
                                                                }
                                                                snd_soc_component_update_bits
                                                                          (iVar16,uVar15,uVar21,uVar20);
                                                                if ((*(puVar12 + 0xe4) != 1) && (*(puVar12 + 0xe4) != 4)
                                                                   ) {
                                                                    snd_soc_component_update_bits(iVar16,0x3040,1,0);
                                                                }
                                                                uVar8 = sym.wsa884x_parse_port_params(arg1_00);
                                                                if (uVar8 == 0) {
                                                                    swr_init_port_params(puVar12[2],6,puVar12 + 0x40);
                                                                    __mutex_init(puVar12 + 0x10,"&wsa884x->res_lock",
                                                                                 obj.wsa884x_swr_probe.__key);
                                                                    if (puVar12[0x44] == 0) {
                                                                        iVar16 = *(uVar10 + 0xb8);
                                                                        if (iVar16 == 0) {
                                                                            iVar16 = *arg1_00;
                                                                        }
                                                                        uVar13 = debugfs_create_dir(iVar16,0);
                                                                        puVar12[0x44] = uVar13;
                                                                        if (uVar13 < 0xfffffffffffff001) {
                                                                            uVar13 = debugfs_create_file("swrslave_peek"
                                                                                                         ,0x8124,
                                                                                                         uVar13,uVar10
                                                                                                         ,
                                                            obj.codec_debug_read_ops);
                                                            puVar12[0x45] = uVar13;
                                                            uVar13 = debugfs_create_file("swrslave_poke",0x8124,
                                                                                         puVar12[0x44],uVar10,
                                                                                         obj.codec_debug_write_ops);
                                                            puVar12[0x46] = uVar13;
                                                            uVar10 = debugfs_create_file("swrslave_reg_dump",0x8124,
                                                                                         puVar12[0x44],uVar10,
                                                                                         obj.codec_debug_dump_ops);
                                                            uVar14 = 0;
                                                            puVar12[0x47] = uVar10;
                                                            goto code_r0x08010768;
                                                            }
                                                            }
                                                            uVar14 = 0;
                                                            goto code_r0x08010768;
                                                            }
                                                            uVar14 = uVar8;
                                                            _dev_err(arg1_00,"Failed to read port params\n");
                                                            goto code_r0x08010764;
                                                            }
                                                            _dev_err(arg1_00,
                                                            "%s: invalid dt parameter: Bat_cfg: 0x%x rload: 0x%x, sys_gain: 0x%x\n"
                                                            ,"wsa884x_swr_probe",*(puVar12 + 0xe4),puVar12[0x1d],
                                                            *(puVar12 + 0xec));
                                                            uVar14 = 0xffffffea;
                                                            goto code_r0x08010634;
                                                        }
                                                        pcVar19 = "%s: Failed to read wsa system gains\n";
                                                    }
                                                    uVar14 = uVar9;
                                                    _dev_err(arg1_00,pcVar19,"wsa884x_swr_probe");
                                                    goto code_r0x08010634;
                                                }
                                                pcVar19 = "%s: Failed to read wsa bat cfgs\n";
                                            }
                                            else {
                                                pcVar19 = "%s: Failed to read wsa rloads\n";
                                            }
                                            uVar14 = uVar9;
                                            _dev_err(arg1_00,pcVar19,"wsa884x_swr_probe");
                                            goto code_r0x08010634;
                                        }
                                        pcVar19 = "%s: parent dev not found\n";
                                    }
                                    _dev_err(arg1_00,pcVar19,"wsa884x_swr_probe");
                                }
code_r0x08010634:
                                puVar18 = puVar12[0x56];
                            }
                            if (puVar18 != NULL) {
                                kfree(*puVar18);
                                kfree(*(puVar12[0x56] + 0xb0));
                                kfree(puVar12[0x56]);
                            }
                            if (puVar12[0x57] != NULL) {
                                kfree(*puVar12[0x57]);
                                kfree(puVar12[0x57]);
                            }
                        }
                        wcd_free_irq(puVar3,0,0);
                        wcd_free_irq(puVar3,1,0);
                        wcd_free_irq(puVar3,2,0);
                        wcd_free_irq(puVar3,3,0);
                        wcd_free_irq(puVar3,4,0);
                        wcd_free_irq(puVar3,5,0);
                        wcd_free_irq(puVar3,6,0);
                        wcd_free_irq(puVar3,7,0);
                        wcd_free_irq(puVar3,8,0);
                        wcd_free_irq(puVar3,9,0);
                        wcd_irq_exit(puVar3,puVar12[0x22]);
                    }
                    else {
                        pcVar19 = "%s: regmap_init failed %d\n";
                        piVar17 = arg1_00;
code_r0x080102bc:
                        _dev_err(piVar17,pcVar19,"wsa884x_swr_probe",uVar14 & 0xffffffff);
                    }
                    if (((iVar5 == 0) && (iVar5 = msm_cdc_pinctrl_select_sleep_state(puVar12[0x19]), iVar5 != 0)) &&
                       (iVar6 = ___ratelimit(obj.wsa884x_gpio_ctrl._rs,"wsa884x_gpio_ctrl"), iVar6 != 0)) {
                        _dev_err(puVar12[1],"%s: Failed to turn state %d; ret=%d\n","wsa884x_gpio_ctrl",0,iVar5);
                    }
                    swr_remove_device(uVar10);
                }
                else {
                    uVar14 = 0xfffffdfb;
                }
            }
            msm_cdc_release_supplies(arg1_00,puVar12[0x54],*puVar1,*puVar2);
        }
code_r0x08010764:
        *(uVar10 + 0xe0) = 0;
    }
code_r0x08010768:
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_e8) {
        return uVar14 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x08010804:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x8010808);
    (*pcVar4)();
}


// ===== sym.wsa884x_variant_read @ 0x0800fab8 (size 308) =====

uint64_t sym.wsa884x_variant_read(int64_t arg1,uchar noname_1 [16],uchar noname_2 [16],int64_t arg2)

{
    int64_t *arg1_00;
    uint64_t *puVar1;
    uint64_t *puVar2;
    uint64_t *puVar3;
    code *pcVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    uint64_t *puVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong uVar14;
    int64_t *piVar15;
    int64_t iVar16;
    ulong *puVar17;
    char *pcVar18;
    ulong uVar19;
    ulong uVar20;
    int64_t iVar21;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t *puVar22;
    ulong unaff_x30;
    uint32_t uStack_dc;
    uint32_t uStack_d8;
    uchar auStack_d4 [4];
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    
    *in_x18 = unaff_x30;
    iVar21 = sp_el0;
    iVar21 = *(iVar21 + 0x5e0);
    if (*(arg1 + 0x40) == 0) {
        iVar5 = ___ratelimit(obj.wsa884x_variant_read._rs,"wsa884x_variant_read");
        if (iVar5 == 0) {
            uVar10 = 0xffffffffffffffea;
        }
        else {
            _printk(0x800222e,"wsa884x_variant_read");
            uVar10 = 0xffffffffffffffea;
        }
    }
    else {
        uVar10 = simple_read_from_buffer(arg2);
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iVar21) {
        return uVar10;
    }
    uVar10 = __stack_chk_fail(uVar10);
    *extraout_x18 = sym.wsa884x_swr_probe;
    pcStack_98 = sym.wsa884x_swr_probe;
    iVar21 = sp_el0;
    arg1_00 = uVar10 + 0x48;
    iStack_a8 = *(iVar21 + 0x5e0);
    auStack_d4[0] = 0;
    uStack_dc = 0;
    uStack_d8 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d0 = 0;
    puStack_a0 = &stack0xfffffffffffffff0;
    puVar11 = devm_kmalloc(arg1_00,0x2c8,0xdc0);
    if ((puVar11 == NULL) || (uVar12 = devm_kmalloc(arg1_00,0x88,0xdc0), uVar12 == 0)) {
        uVar13 = 0xfffffff4;
    }
    else {
        memcpy(uVar12,obj.wsa884x_regmap_irq_chip,0x88);
        puVar1 = puVar11 + 0x52;
        puVar2 = puVar11 + 0x53;
        msm_cdc_get_power_supplies(arg1_00,puVar1,puVar2);
        if ((puVar11[0x52] == 0) || (*puVar2 < 1)) {
            pcVar18 = "%s: no power supplies defined\n";
code_r0x08010174:
            _dev_err(arg1_00,pcVar18,"wsa884x_enable_supplies");
code_r0x08010184:
            uVar13 = 0xfffffdfb;
        }
        else {
            iVar5 = msm_cdc_init_supplies(arg1_00,puVar11 + 0x54);
            if (puVar11[0x54] == 0) {
                _dev_err(arg1_00,"%s: Cannot init wsa supplies\n","wsa884x_enable_supplies");
                if (iVar5 != 0) goto code_r0x08010184;
            }
            else {
                iVar5 = msm_cdc_enable_static_supplies(arg1_00,puVar11[0x54],*puVar1,*puVar2);
                if (iVar5 != 0) {
                    pcVar18 = "%s: wsa static supply enable failed!\n";
                    goto code_r0x08010174;
                }
            }
            uVar13 = of_parse_phandle(*(uVar10 + 0x338),"qcom,spkr-sd-n-node",0);
            puVar11[0x19] = uVar13;
            if (uVar13 == 0) {
                uVar13 = 0;
            }
            else {
                *(uVar10 + 0xe0) = puVar11;
                puVar11[1] = arg1_00;
                puVar11[2] = uVar10;
                iVar5 = msm_cdc_pinctrl_get_state();
                iVar6 = msm_cdc_pinctrl_select_active_state(puVar11[0x19]);
                if ((iVar6 != 0) && (iVar7 = ___ratelimit(obj.wsa884x_gpio_ctrl._rs,"wsa884x_gpio_ctrl"), iVar7 != 0))
                {
                    _dev_err(puVar11[1],"%s: Failed to turn state %d; ret=%d\n","wsa884x_gpio_ctrl",1,iVar6);
                }
                usleep_range_state(5000,0x1392,2);
                iVar6 = swr_get_logical_dev_num(uVar10,*(uVar10 + 0x3d8),auStack_d4);
                if (iVar6 == 0) {
                    *(uVar10 + 0x40) = auStack_d4[0];
                    uVar13 = __devm_regmap_init_swr(uVar10,obj.wsa884x_regmap_config,0,0);
                    *puVar11 = uVar13;
                    if (uVar13 < 0xfffffffffffff001) {
                        devm_regmap_qti_debugfs_register(arg1_00,uVar13);
                        *(uVar12 + 0x80) = puVar11;
                        puVar3 = puVar11 + 0x23;
                        puVar11[0x27] = arg1_00;
                        puVar11[0x23] = uVar12;
                        puVar11[0x24] = "WSA884X";
                        puVar11[0x25] = *puVar11;
                        uVar8 = wcd_irq_init(puVar3,puVar11 + 0x22);
                        if (uVar8 != 0) {
                            uVar13 = uVar8;
                            pcVar18 = "%s: IRQ init failed: %d\n";
                            piVar15 = puVar11[1];
                            goto code_r0x080102bc;
                        }
                        *(puVar11[2] + 1000) = puVar11[0x22];
                        wcd_request_irq(puVar3,0,"WSA SAF2WAR",
                                        sym.wsa884x_saf2war_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar11)
                        ;
                        wcd_request_irq(puVar3,1,"WSA WAR2SAF",
                                        sym.wsa884x_war2saf_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar11)
                        ;
                        wcd_request_irq(puVar3,2,"WSA OTP",
                                        sym.wsa884x_otp_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar11);
                        wcd_request_irq(puVar3,3,"WSA OCP",
                                        sym.wsa884x_ocp_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar11);
                        wcd_request_irq(puVar3,4,"WSA CLIP",
                                        sym.wsa884x_clip_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar11);
                        wcd_disable_irq(puVar3,4);
                        wcd_request_irq(puVar3,5,"WSA PDM WD",
                                        sym.wsa884x_pdm_wd_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar11);
                        wcd_request_irq(puVar3,6,"WSA CLK WD",
                                        sym.wsa884x_clk_wd_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar11);
                        wcd_request_irq(puVar3,7,"WSA EXT INT",
                                        sym.wsa884x_ext_int_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar11)
                        ;
                        wcd_disable_irq(puVar3,7);
                        wcd_request_irq(puVar3,8,"WSA UVLO",
                                        sym.wsa884x_uvlo_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar11);
                        wcd_request_irq(puVar3,9,"WSA PA ERR",
                                        sym.wsa884x_pa_on_err_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,
                                        puVar11);
                        uVar12 = devm_kmalloc(arg1_00,0x160,0xdc0);
                        puVar11[0x57] = uVar12;
                        if (uVar12 == 0) {
                            uVar13 = 0xfffffff4;
                        }
                        else {
                            memcpy(uVar12,obj.soc_codec_dev_wsa884x_wsa,0x160);
                            uVar12 = devm_kmalloc(arg1_00,0xf0,0xdc0);
                            puVar11[0x56] = uVar12;
                            if (uVar12 == 0) {
                                uVar13 = 0xfffffff4;
                                puVar17 = NULL;
                            }
                            else {
                                memcpy(uVar12,obj.wsa_dai,0xf0);
                                uVar8 = *(uVar10 + 0x3d8);
                                iVar7 = of_device_is_compatible(*(uVar10 + 0x338),0x8001f1b);
                                iVar6 = 3;
                                if (iVar7 == 0) {
                                    iVar6 = 1;
                                }
                                uVar8 = iVar6 + (uVar8 & 0xf);
                                snprintf(&uStack_d0,0x28,"wsa-codec.%d",uVar8);
                                uVar14 = strlen(&uStack_d0);
                                uVar14 = kstrndup(&uStack_d0,uVar14,0xcc0);
                                *puVar11[0x57] = uVar14;
                                snprintf(&uStack_d0,0x28,"wsa_rx%d",uVar8);
                                uVar14 = strlen(&uStack_d0);
                                uVar14 = kstrndup(&uStack_d0,uVar14,0xcc0);
                                *puVar11[0x56] = uVar14;
                                snprintf(&uStack_d0,0x28,"WSA884X_AIF%d Playback",uVar8);
                                uVar14 = strlen(&uStack_d0);
                                uVar14 = kstrndup(&uStack_d0,uVar14,0xcc0);
                                *(puVar11[0x56] + 0xb0) = uVar14;
                                uVar13 = snd_soc_register_component(arg1_00,puVar11[0x57],puVar11[0x56],1);
                                uVar13 = uVar13 & 0xffffffff;
                                iVar21 = snd_soc_lookup_component(arg1_00,*puVar11[0x57]);
                                if (iVar21 == 0) {
                                    _dev_err(arg1_00,"%s: component is NULL\n","wsa884x_swr_probe");
                                    uVar13 = 0xffffffea;
                                }
                                else {
                                    uVar12 = of_parse_phandle(*(uVar10 + 0x338),"qcom,bolero-handle",0);
                                    puVar11[0x49] = uVar12;
                                    if (uVar12 == 0) {
                                        uVar12 = of_parse_phandle(*(uVar10 + 0x338),"qcom,lpass-cdc-handle",0);
                                        puVar11[0x49] = uVar12;
                                        if (uVar12 != 0) goto code_r0x080100cc;
                                        _dev_info(arg1_00,"%s: parent node not found\n","wsa884x_swr_probe");
                                    }
                                    else {
code_r0x080100cc:
                                        uVar12 = of_find_device_by_node();
                                        puVar11[0x4b] = uVar12;
                                        if (uVar12 == 0) {
                                            pcVar18 = "%s: parent dev not found\n";
                                        }
                                        else {
                                            puVar22 = *(uVar12 + 0xa0);
                                            if (puVar22 != NULL) {
                                                puVar11[0x4d] =
                                                     sym.wsa884x_event_notify.142cb795c700479f84f02afc5065e4d0.cfi_jt;
                                                pcVar4 = puVar22[2];
                                                if (pcVar4 == NULL) {
                                                    uVar12 = 0;
                                                }
                                                else {
                                                    __cfi_slowpath_diag(0x3b795baa068bc3a6,pcVar4,0x80018b0);
                                                    (*pcVar4)(*puVar22,puVar11 + 0x4d,1);
                                                    uVar12 = puVar22[2];
                                                }
                                                puVar11[0x51] = uVar12;
                                                puVar11[0x50] = *puVar22;
                                                goto code_r0x080101a8;
                                            }
                                            pcVar18 = "%s: plat data not found\n";
                                        }
                                        _dev_err(arg1_00,pcVar18,"wsa884x_swr_probe");
                                    }
code_r0x080101a8:
                                    uVar14 = *(uVar10 + 0x338);
                                    *(puVar11 + 0x74) = 0;
                                    *(puVar11 + 0x10c) = uVar8;
                                    uVar12 = of_parse_phandle(uVar14,"qcom,wsa-macro-handle",0);
                                    puVar11[0x4a] = uVar12;
                                    if (uVar12 == 0) {
                                        pcVar18 = "%s: parent node not found\n";
                                    }
                                    else {
                                        uVar12 = of_find_device_by_node();
                                        puVar11[0x4c] = uVar12;
                                        if (uVar12 != 0) {
                                            uVar8 = ~uVar8 & 1;
                                            uVar9 = of_property_read_u32_index
                                                              (*(uVar12 + 0x300),"qcom,wsa-rloads",uVar8,
                                                               puVar11 + 0x1d);
                                            if (uVar9 == 0) {
                                                uVar9 = of_property_read_u32_index
                                                                  (*(puVar11[0x4c] + 0x300),"qcom,wsa-bat-cfgs",uVar8)
                                                ;
                                                if (uVar9 == 0) {
                                                    uVar9 = of_property_read_variable_u32_array
                                                                      (*(puVar11[0x4c] + 0x300),"qcom,noise-gate-mode"
                                                                       ,&uStack_d8,1,0);
                                                    if (uVar9 < 0) {
                                                        _dev_info(arg1_00,"%s: Failed to read wsa noise gate mode\n",
                                                                  "wsa884x_swr_probe");
code_r0x08010388:
                                                        *(puVar11 + 0x58) = 0;
                                                    }
                                                    else {
                                                        if (3 < uStack_d8) goto code_r0x08010388;
                                                        *(puVar11 + 0x58) = uStack_d8;
                                                    }
                                                    iVar16 = of_find_property(*(puVar11[0x4c] + 0x300),
                                                                              "qcom,wsa-system-gains",&uStack_dc);
                                                    if (iVar16 == 0) {
                                                        uVar9 = uVar9 & uVar9 >> 0x1f;
                                                        pcVar18 = "%s: missing wsa-system-gains\n";
                                                    }
                                                    else {
                                                        uVar9 = of_property_read_variable_u32_array
                                                                          (*(puVar11[0x4c] + 0x300),
                                                                           "qcom,wsa-system-gains",puVar11 + 0x1e,
                                                                           (uStack_dc << 0x20) >> 0x23,0);
                                                        if (-1 < uVar9) {
                                                            uVar8 = *(puVar11 + 0x74) + uVar8 * 2;
                                                            if (3 < uVar8) goto code_r0x08010804;
                                                            uVar9 = *(puVar11 + 0x1e + uVar8 * 4);
                                                            *(puVar11 + 0xec) = uVar9;
                                                            uVar12 = sym.wsa884x_validate_dt_configuration_params
                                                                               (uVar8,puVar11[0x1d],*(puVar11 + 0xe4)
                                                                                ,uVar9);
                                                            if ((uVar12 & 1) == 0) {
                                                                *(puVar11 + 4) = puVar11[0x1b] != 0xc;
                                                                sym.wsa884x_set_gain_parameters(iVar21);
                                                                sym.wsa884x_set_pbr_parameters(iVar21);
                                                                snd_soc_component_write
                                                                          (iVar21,0x3504,
                                                                           *(puVar11 + 0x74) == 0 |
                                                                           (puVar11[0x21] & 0xf) << 2 | 0xc0);
                                                                snd_soc_component_write(iVar21,0x3505,0);
                                                                if (puVar11[0x1d] < 2) {
                                                                    snd_soc_component_update_bits
                                                                              (iVar21,0x304c,0x70,0x70);
                                                                }
                                                                if (*(puVar11 + 0x74) == 0) {
                                                                    uVar14 = 0x34b0;
                                                                    uVar19 = 0xf0;
                                                                    uVar20 = 0xf0;
                                                                }
                                                                else {
                                                                    snd_soc_component_update_bits
                                                                              (iVar21,0x34b0,0xf0,0x30);
                                                                    snd_soc_component_update_bits(iVar21,0x341a,2,2);
                                                                    uVar14 = 0x304a;
                                                                    uVar19 = 8;
                                                                    uVar20 = 8;
                                                                }
                                                                snd_soc_component_update_bits
                                                                          (iVar21,uVar14,uVar19,uVar20);
                                                                if ((*(puVar11 + 0xe4) != 1) && (*(puVar11 + 0xe4) != 4)
                                                                   ) {
                                                                    snd_soc_component_update_bits(iVar21,0x3040,1,0);
                                                                }
                                                                uVar8 = sym.wsa884x_parse_port_params(arg1_00);
                                                                if (uVar8 == 0) {
                                                                    swr_init_port_params(puVar11[2],6,puVar11 + 0x40);
                                                                    __mutex_init(puVar11 + 0x10,"&wsa884x->res_lock",
                                                                                 obj.wsa884x_swr_probe.__key);
                                                                    if (puVar11[0x44] == 0) {
                                                                        iVar21 = *(uVar10 + 0xb8);
                                                                        if (iVar21 == 0) {
                                                                            iVar21 = *arg1_00;
                                                                        }
                                                                        uVar12 = debugfs_create_dir(iVar21,0);
                                                                        puVar11[0x44] = uVar12;
                                                                        if (uVar12 < 0xfffffffffffff001) {
                                                                            uVar12 = debugfs_create_file("swrslave_peek"
                                                                                                         ,0x8124,
                                                                                                         uVar12,uVar10
                                                                                                         ,
                                                            obj.codec_debug_read_ops);
                                                            puVar11[0x45] = uVar12;
                                                            uVar12 = debugfs_create_file("swrslave_poke",0x8124,
                                                                                         puVar11[0x44],uVar10,
                                                                                         obj.codec_debug_write_ops);
                                                            puVar11[0x46] = uVar12;
                                                            uVar10 = debugfs_create_file("swrslave_reg_dump",0x8124,
                                                                                         puVar11[0x44],uVar10,
                                                                                         obj.codec_debug_dump_ops);
                                                            uVar13 = 0;
                                                            puVar11[0x47] = uVar10;
                                                            goto code_r0x08010768;
                                                            }
                                                            }
                                                            uVar13 = 0;
                                                            goto code_r0x08010768;
                                                            }
                                                            uVar13 = uVar8;
                                                            _dev_err(arg1_00,"Failed to read port params\n");
                                                            goto code_r0x08010764;
                                                            }
                                                            _dev_err(arg1_00,
                                                            "%s: invalid dt parameter: Bat_cfg: 0x%x rload: 0x%x, sys_gain: 0x%x\n"
                                                            ,"wsa884x_swr_probe",*(puVar11 + 0xe4),puVar11[0x1d],
                                                            *(puVar11 + 0xec));
                                                            uVar13 = 0xffffffea;
                                                            goto code_r0x08010634;
                                                        }
                                                        pcVar18 = "%s: Failed to read wsa system gains\n";
                                                    }
                                                    uVar13 = uVar9;
                                                    _dev_err(arg1_00,pcVar18,"wsa884x_swr_probe");
                                                    goto code_r0x08010634;
                                                }
                                                pcVar18 = "%s: Failed to read wsa bat cfgs\n";
                                            }
                                            else {
                                                pcVar18 = "%s: Failed to read wsa rloads\n";
                                            }
                                            uVar13 = uVar9;
                                            _dev_err(arg1_00,pcVar18,"wsa884x_swr_probe");
                                            goto code_r0x08010634;
                                        }
                                        pcVar18 = "%s: parent dev not found\n";
                                    }
                                    _dev_err(arg1_00,pcVar18,"wsa884x_swr_probe");
                                }
code_r0x08010634:
                                puVar17 = puVar11[0x56];
                            }
                            if (puVar17 != NULL) {
                                kfree(*puVar17);
                                kfree(*(puVar11[0x56] + 0xb0));
                                kfree(puVar11[0x56]);
                            }
                            if (puVar11[0x57] != NULL) {
                                kfree(*puVar11[0x57]);
                                kfree(puVar11[0x57]);
                            }
                        }
                        wcd_free_irq(puVar3,0,0);
                        wcd_free_irq(puVar3,1,0);
                        wcd_free_irq(puVar3,2,0);
                        wcd_free_irq(puVar3,3,0);
                        wcd_free_irq(puVar3,4,0);
                        wcd_free_irq(puVar3,5,0);
                        wcd_free_irq(puVar3,6,0);
                        wcd_free_irq(puVar3,7,0);
                        wcd_free_irq(puVar3,8,0);
                        wcd_free_irq(puVar3,9,0);
                        wcd_irq_exit(puVar3,puVar11[0x22]);
                    }
                    else {
                        pcVar18 = "%s: regmap_init failed %d\n";
                        piVar15 = arg1_00;
code_r0x080102bc:
                        _dev_err(piVar15,pcVar18,"wsa884x_swr_probe",uVar13 & 0xffffffff);
                    }
                    if (((iVar5 == 0) && (iVar5 = msm_cdc_pinctrl_select_sleep_state(puVar11[0x19]), iVar5 != 0)) &&
                       (iVar6 = ___ratelimit(obj.wsa884x_gpio_ctrl._rs,"wsa884x_gpio_ctrl"), iVar6 != 0)) {
                        _dev_err(puVar11[1],"%s: Failed to turn state %d; ret=%d\n","wsa884x_gpio_ctrl",0,iVar5);
                    }
                    swr_remove_device(uVar10);
                }
                else {
                    uVar13 = 0xfffffdfb;
                }
            }
            msm_cdc_release_supplies(arg1_00,puVar11[0x54],*puVar1,*puVar2);
        }
code_r0x08010764:
        *(uVar10 + 0xe0) = 0;
    }
code_r0x08010768:
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) == iStack_a8) {
        return uVar13 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x08010804:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x8010808);
    (*pcVar4)();
}


// ===== sym.wsa884x_swr_probe @ 0x0800fbec (size 3100) =====

uint64_t sym.wsa884x_swr_probe(int64_t arg1)

{
    int64_t *arg1_00;
    uint64_t *puVar1;
    uint64_t *puVar2;
    uint64_t *puVar3;
    code *pcVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint64_t *puVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    ulong uVar13;
    int64_t iVar14;
    int64_t *piVar15;
    int64_t iVar16;
    ulong *puVar17;
    char *pcVar18;
    ulong uVar19;
    ulong uVar20;
    ulong *in_x18;
    uint64_t *puVar21;
    ulong unaff_x30;
    uint32_t uStack_9c;
    uint32_t uStack_98;
    uchar auStack_94 [4];
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    arg1_00 = arg1 + 0x48;
    iStack_68 = *(iVar14 + 0x5e0);
    auStack_94[0] = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    puVar10 = devm_kmalloc(arg1_00,0x2c8,0xdc0);
    if ((puVar10 == NULL) || (uVar11 = devm_kmalloc(arg1_00,0x88,0xdc0), uVar11 == 0)) {
        uVar12 = 0xfffffff4;
    }
    else {
        memcpy(uVar11,obj.wsa884x_regmap_irq_chip,0x88);
        puVar1 = puVar10 + 0x52;
        puVar2 = puVar10 + 0x53;
        msm_cdc_get_power_supplies(arg1_00,puVar1,puVar2);
        if ((puVar10[0x52] == 0) || (*puVar2 < 1)) {
            pcVar18 = "%s: no power supplies defined\n";
code_r0x08010174:
            _dev_err(arg1_00,pcVar18,"wsa884x_enable_supplies");
code_r0x08010184:
            uVar12 = 0xfffffdfb;
        }
        else {
            iVar5 = msm_cdc_init_supplies(arg1_00,puVar10 + 0x54);
            if (puVar10[0x54] == 0) {
                _dev_err(arg1_00,"%s: Cannot init wsa supplies\n","wsa884x_enable_supplies");
                if (iVar5 != 0) goto code_r0x08010184;
            }
            else {
                iVar5 = msm_cdc_enable_static_supplies(arg1_00,puVar10[0x54],*puVar1,*puVar2);
                if (iVar5 != 0) {
                    pcVar18 = "%s: wsa static supply enable failed!\n";
                    goto code_r0x08010174;
                }
            }
            uVar12 = of_parse_phandle(*(arg1 + 0x338),"qcom,spkr-sd-n-node",0);
            puVar10[0x19] = uVar12;
            if (uVar12 == 0) {
                uVar12 = 0;
            }
            else {
                *(arg1 + 0xe0) = puVar10;
                puVar10[1] = arg1_00;
                puVar10[2] = arg1;
                iVar5 = msm_cdc_pinctrl_get_state();
                iVar6 = msm_cdc_pinctrl_select_active_state(puVar10[0x19]);
                if ((iVar6 != 0) && (iVar7 = ___ratelimit(obj.wsa884x_gpio_ctrl._rs,"wsa884x_gpio_ctrl"), iVar7 != 0))
                {
                    _dev_err(puVar10[1],"%s: Failed to turn state %d; ret=%d\n","wsa884x_gpio_ctrl",1,iVar6);
                }
                usleep_range_state(5000,0x1392,2);
                iVar6 = swr_get_logical_dev_num(arg1,*(arg1 + 0x3d8),auStack_94);
                if (iVar6 == 0) {
                    *(arg1 + 0x40) = auStack_94[0];
                    uVar12 = __devm_regmap_init_swr(arg1,obj.wsa884x_regmap_config,0,0);
                    *puVar10 = uVar12;
                    if (uVar12 < 0xfffffffffffff001) {
                        devm_regmap_qti_debugfs_register(arg1_00,uVar12);
                        *(uVar11 + 0x80) = puVar10;
                        puVar3 = puVar10 + 0x23;
                        puVar10[0x27] = arg1_00;
                        puVar10[0x23] = uVar11;
                        puVar10[0x24] = "WSA884X";
                        puVar10[0x25] = *puVar10;
                        uVar8 = wcd_irq_init(puVar3,puVar10 + 0x22);
                        if (uVar8 != 0) {
                            uVar12 = uVar8;
                            pcVar18 = "%s: IRQ init failed: %d\n";
                            piVar15 = puVar10[1];
                            goto code_r0x080102bc;
                        }
                        *(puVar10[2] + 1000) = puVar10[0x22];
                        wcd_request_irq(puVar3,0,"WSA SAF2WAR",
                                        sym.wsa884x_saf2war_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar10)
                        ;
                        wcd_request_irq(puVar3,1,"WSA WAR2SAF",
                                        sym.wsa884x_war2saf_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar10)
                        ;
                        wcd_request_irq(puVar3,2,"WSA OTP",
                                        sym.wsa884x_otp_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar10);
                        wcd_request_irq(puVar3,3,"WSA OCP",
                                        sym.wsa884x_ocp_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar10);
                        wcd_request_irq(puVar3,4,"WSA CLIP",
                                        sym.wsa884x_clip_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar10);
                        wcd_disable_irq(puVar3,4);
                        wcd_request_irq(puVar3,5,"WSA PDM WD",
                                        sym.wsa884x_pdm_wd_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar10);
                        wcd_request_irq(puVar3,6,"WSA CLK WD",
                                        sym.wsa884x_clk_wd_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar10);
                        wcd_request_irq(puVar3,7,"WSA EXT INT",
                                        sym.wsa884x_ext_int_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar10)
                        ;
                        wcd_disable_irq(puVar3,7);
                        wcd_request_irq(puVar3,8,"WSA UVLO",
                                        sym.wsa884x_uvlo_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,puVar10);
                        wcd_request_irq(puVar3,9,"WSA PA ERR",
                                        sym.wsa884x_pa_on_err_handle_irq.142cb795c700479f84f02afc5065e4d0.cfi_jt,
                                        puVar10);
                        uVar11 = devm_kmalloc(arg1_00,0x160,0xdc0);
                        puVar10[0x57] = uVar11;
                        if (uVar11 == 0) {
                            uVar12 = 0xfffffff4;
                        }
                        else {
                            memcpy(uVar11,obj.soc_codec_dev_wsa884x_wsa,0x160);
                            uVar11 = devm_kmalloc(arg1_00,0xf0,0xdc0);
                            puVar10[0x56] = uVar11;
                            if (uVar11 == 0) {
                                uVar12 = 0xfffffff4;
                                puVar17 = NULL;
                            }
                            else {
                                memcpy(uVar11,obj.wsa_dai,0xf0);
                                uVar8 = *(arg1 + 0x3d8);
                                iVar7 = of_device_is_compatible(*(arg1 + 0x338),0x8001f1b);
                                iVar6 = 3;
                                if (iVar7 == 0) {
                                    iVar6 = 1;
                                }
                                uVar8 = iVar6 + (uVar8 & 0xf);
                                snprintf(&uStack_90,0x28,"wsa-codec.%d",uVar8);
                                uVar13 = strlen(&uStack_90);
                                uVar13 = kstrndup(&uStack_90,uVar13,0xcc0);
                                *puVar10[0x57] = uVar13;
                                snprintf(&uStack_90,0x28,"wsa_rx%d",uVar8);
                                uVar13 = strlen(&uStack_90);
                                uVar13 = kstrndup(&uStack_90,uVar13,0xcc0);
                                *puVar10[0x56] = uVar13;
                                snprintf(&uStack_90,0x28,"WSA884X_AIF%d Playback",uVar8);
                                uVar13 = strlen(&uStack_90);
                                uVar13 = kstrndup(&uStack_90,uVar13,0xcc0);
                                *(puVar10[0x56] + 0xb0) = uVar13;
                                uVar12 = snd_soc_register_component(arg1_00,puVar10[0x57],puVar10[0x56],1);
                                uVar12 = uVar12 & 0xffffffff;
                                iVar14 = snd_soc_lookup_component(arg1_00,*puVar10[0x57]);
                                if (iVar14 == 0) {
                                    _dev_err(arg1_00,"%s: component is NULL\n","wsa884x_swr_probe");
                                    uVar12 = 0xffffffea;
                                }
                                else {
                                    uVar11 = of_parse_phandle(*(arg1 + 0x338),"qcom,bolero-handle",0);
                                    puVar10[0x49] = uVar11;
                                    if (uVar11 == 0) {
                                        uVar11 = of_parse_phandle(*(arg1 + 0x338),"qcom,lpass-cdc-handle",0);
                                        puVar10[0x49] = uVar11;
                                        if (uVar11 != 0) goto code_r0x080100cc;
                                        _dev_info(arg1_00,"%s: parent node not found\n","wsa884x_swr_probe");
                                    }
                                    else {
code_r0x080100cc:
                                        uVar11 = of_find_device_by_node();
                                        puVar10[0x4b] = uVar11;
                                        if (uVar11 == 0) {
                                            pcVar18 = "%s: parent dev not found\n";
                                        }
                                        else {
                                            puVar21 = *(uVar11 + 0xa0);
                                            if (puVar21 != NULL) {
                                                puVar10[0x4d] =
                                                     sym.wsa884x_event_notify.142cb795c700479f84f02afc5065e4d0.cfi_jt;
                                                pcVar4 = puVar21[2];
                                                if (pcVar4 == NULL) {
                                                    uVar11 = 0;
                                                }
                                                else {
                                                    __cfi_slowpath_diag(0x3b795baa068bc3a6,pcVar4,0x80018b0);
                                                    (*pcVar4)(*puVar21,puVar10 + 0x4d,1);
                                                    uVar11 = puVar21[2];
                                                }
                                                puVar10[0x51] = uVar11;
                                                puVar10[0x50] = *puVar21;
                                                goto code_r0x080101a8;
                                            }
                                            pcVar18 = "%s: plat data not found\n";
                                        }
                                        _dev_err(arg1_00,pcVar18,"wsa884x_swr_probe");
                                    }
code_r0x080101a8:
                                    uVar13 = *(arg1 + 0x338);
                                    *(puVar10 + 0x74) = 0;
                                    *(puVar10 + 0x10c) = uVar8;
                                    uVar11 = of_parse_phandle(uVar13,"qcom,wsa-macro-handle",0);
                                    puVar10[0x4a] = uVar11;
                                    if (uVar11 == 0) {
                                        pcVar18 = "%s: parent node not found\n";
                                    }
                                    else {
                                        uVar11 = of_find_device_by_node();
                                        puVar10[0x4c] = uVar11;
                                        if (uVar11 != 0) {
                                            uVar8 = ~uVar8 & 1;
                                            uVar9 = of_property_read_u32_index
                                                              (*(uVar11 + 0x300),"qcom,wsa-rloads",uVar8,
                                                               puVar10 + 0x1d);
                                            if (uVar9 == 0) {
                                                uVar9 = of_property_read_u32_index
                                                                  (*(puVar10[0x4c] + 0x300),"qcom,wsa-bat-cfgs",uVar8)
                                                ;
                                                if (uVar9 == 0) {
                                                    uVar9 = of_property_read_variable_u32_array
                                                                      (*(puVar10[0x4c] + 0x300),"qcom,noise-gate-mode"
                                                                       ,&uStack_98,1,0);
                                                    if (uVar9 < 0) {
                                                        _dev_info(arg1_00,"%s: Failed to read wsa noise gate mode\n",
                                                                  "wsa884x_swr_probe");
code_r0x08010388:
                                                        *(puVar10 + 0x58) = 0;
                                                    }
                                                    else {
                                                        if (3 < uStack_98) goto code_r0x08010388;
                                                        *(puVar10 + 0x58) = uStack_98;
                                                    }
                                                    iVar16 = of_find_property(*(puVar10[0x4c] + 0x300),
                                                                              "qcom,wsa-system-gains",&uStack_9c);
                                                    if (iVar16 == 0) {
                                                        uVar9 = uVar9 & uVar9 >> 0x1f;
                                                        pcVar18 = "%s: missing wsa-system-gains\n";
                                                    }
                                                    else {
                                                        uVar9 = of_property_read_variable_u32_array
                                                                          (*(puVar10[0x4c] + 0x300),
                                                                           "qcom,wsa-system-gains",puVar10 + 0x1e,
                                                                           (uStack_9c << 0x20) >> 0x23,0);
                                                        if (-1 < uVar9) {
                                                            uVar8 = *(puVar10 + 0x74) + uVar8 * 2;
                                                            if (3 < uVar8) goto code_r0x08010804;
                                                            uVar9 = *(puVar10 + 0x1e + uVar8 * 4);
                                                            *(puVar10 + 0xec) = uVar9;
                                                            uVar11 = sym.wsa884x_validate_dt_configuration_params
                                                                               (uVar8,puVar10[0x1d],*(puVar10 + 0xe4)
                                                                                ,uVar9);
                                                            if ((uVar11 & 1) == 0) {
                                                                *(puVar10 + 4) = puVar10[0x1b] != 0xc;
                                                                sym.wsa884x_set_gain_parameters(iVar14);
                                                                sym.wsa884x_set_pbr_parameters(iVar14);
                                                                snd_soc_component_write
                                                                          (iVar14,0x3504,
                                                                           *(puVar10 + 0x74) == 0 |
                                                                           (puVar10[0x21] & 0xf) << 2 | 0xc0);
                                                                snd_soc_component_write(iVar14,0x3505,0);
                                                                if (puVar10[0x1d] < 2) {
                                                                    snd_soc_component_update_bits
                                                                              (iVar14,0x304c,0x70,0x70);
                                                                }
                                                                if (*(puVar10 + 0x74) == 0) {
                                                                    uVar13 = 0x34b0;
                                                                    uVar19 = 0xf0;
                                                                    uVar20 = 0xf0;
                                                                }
                                                                else {
                                                                    snd_soc_component_update_bits
                                                                              (iVar14,0x34b0,0xf0,0x30);
                                                                    snd_soc_component_update_bits(iVar14,0x341a,2,2);
                                                                    uVar13 = 0x304a;
                                                                    uVar19 = 8;
                                                                    uVar20 = 8;
                                                                }
                                                                snd_soc_component_update_bits
                                                                          (iVar14,uVar13,uVar19,uVar20);
                                                                if ((*(puVar10 + 0xe4) != 1) && (*(puVar10 + 0xe4) != 4)
                                                                   ) {
                                                                    snd_soc_component_update_bits(iVar14,0x3040,1,0);
                                                                }
                                                                uVar8 = sym.wsa884x_parse_port_params(arg1_00);
                                                                if (uVar8 == 0) {
                                                                    swr_init_port_params(puVar10[2],6,puVar10 + 0x40);
                                                                    __mutex_init(puVar10 + 0x10,"&wsa884x->res_lock",
                                                                                 obj.wsa884x_swr_probe.__key);
                                                                    if (puVar10[0x44] == 0) {
                                                                        iVar14 = *(arg1 + 0xb8);
                                                                        if (iVar14 == 0) {
                                                                            iVar14 = *arg1_00;
                                                                        }
                                                                        uVar11 = debugfs_create_dir(iVar14,0);
                                                                        puVar10[0x44] = uVar11;
                                                                        if (uVar11 < 0xfffffffffffff001) {
                                                                            uVar11 = debugfs_create_file("swrslave_peek"
                                                                                                         ,0x8124,
                                                                                                         uVar11,arg1,
                                                                                                         
                                                            obj.codec_debug_read_ops);
                                                            puVar10[0x45] = uVar11;
                                                            uVar11 = debugfs_create_file("swrslave_poke",0x8124,
                                                                                         puVar10[0x44],arg1,
                                                                                         obj.codec_debug_write_ops);
                                                            puVar10[0x46] = uVar11;
                                                            uVar11 = debugfs_create_file("swrslave_reg_dump",0x8124,
                                                                                         puVar10[0x44],arg1,
                                                                                         obj.codec_debug_dump_ops);
                                                            uVar12 = 0;
                                                            puVar10[0x47] = uVar11;
                                                            goto code_r0x08010768;
                                                            }
                                                            }
                                                            uVar12 = 0;
                                                            goto code_r0x08010768;
                                                            }
                                                            uVar12 = uVar8;
                                                            _dev_err(arg1_00,"Failed to read port params\n");
                                                            goto code_r0x08010764;
                                                            }
                                                            _dev_err(arg1_00,
                                                            "%s: invalid dt parameter: Bat_cfg: 0x%x rload: 0x%x, sys_gain: 0x%x\n"
                                                            ,"wsa884x_swr_probe",*(puVar10 + 0xe4),puVar10[0x1d],
                                                            *(puVar10 + 0xec));
                                                            uVar12 = 0xffffffea;
                                                            goto code_r0x08010634;
                                                        }
                                                        pcVar18 = "%s: Failed to read wsa system gains\n";
                                                    }
                                                    uVar12 = uVar9;
                                                    _dev_err(arg1_00,pcVar18,"wsa884x_swr_probe");
                                                    goto code_r0x08010634;
                                                }
                                                pcVar18 = "%s: Failed to read wsa bat cfgs\n";
                                            }
                                            else {
                                                pcVar18 = "%s: Failed to read wsa rloads\n";
                                            }
                                            uVar12 = uVar9;
                                            _dev_err(arg1_00,pcVar18,"wsa884x_swr_probe");
                                            goto code_r0x08010634;
                                        }
                                        pcVar18 = "%s: parent dev not found\n";
                                    }
                                    _dev_err(arg1_00,pcVar18,"wsa884x_swr_probe");
                                }
code_r0x08010634:
                                puVar17 = puVar10[0x56];
                            }
                            if (puVar17 != NULL) {
                                kfree(*puVar17);
                                kfree(*(puVar10[0x56] + 0xb0));
                                kfree(puVar10[0x56]);
                            }
                            if (puVar10[0x57] != NULL) {
                                kfree(*puVar10[0x57]);
                                kfree(puVar10[0x57]);
                            }
                        }
                        wcd_free_irq(puVar3,0,0);
                        wcd_free_irq(puVar3,1,0);
                        wcd_free_irq(puVar3,2,0);
                        wcd_free_irq(puVar3,3,0);
                        wcd_free_irq(puVar3,4,0);
                        wcd_free_irq(puVar3,5,0);
                        wcd_free_irq(puVar3,6,0);
                        wcd_free_irq(puVar3,7,0);
                        wcd_free_irq(puVar3,8,0);
                        wcd_free_irq(puVar3,9,0);
                        wcd_irq_exit(puVar3,puVar10[0x22]);
                    }
                    else {
                        pcVar18 = "%s: regmap_init failed %d\n";
                        piVar15 = arg1_00;
code_r0x080102bc:
                        _dev_err(piVar15,pcVar18,"wsa884x_swr_probe",uVar12 & 0xffffffff);
                    }
                    if (((iVar5 == 0) && (iVar5 = msm_cdc_pinctrl_select_sleep_state(puVar10[0x19]), iVar5 != 0)) &&
                       (iVar6 = ___ratelimit(obj.wsa884x_gpio_ctrl._rs,"wsa884x_gpio_ctrl"), iVar6 != 0)) {
                        _dev_err(puVar10[1],"%s: Failed to turn state %d; ret=%d\n","wsa884x_gpio_ctrl",0,iVar5);
                    }
                    swr_remove_device(arg1);
                }
                else {
                    uVar12 = 0xfffffdfb;
                }
            }
            msm_cdc_release_supplies(arg1_00,puVar10[0x54],*puVar1,*puVar2);
        }
code_r0x08010764:
        *(arg1 + 0xe0) = 0;
    }
code_r0x08010768:
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_68) {
        return uVar12 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x08010804:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x8010808);
    (*pcVar4)();
}


// ===== sym.wsa884x_swr_remove @ 0x08010808 (size 428) =====

ulong sym.wsa884x_swr_remove(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    code *pcVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (iVar4 = *(arg1 + 0xe0), iVar4 == 0)) {
        _dev_err(arg1 + 0x48,"%s: wsa884x is NULL\n","wsa884x_swr_remove");
        uVar2 = 0xffffffea;
    }
    else {
        iVar1 = iVar4 + 0x118;
        wcd_free_irq(iVar1,0,0);
        wcd_free_irq(iVar1,1,0);
        wcd_free_irq(iVar1,2,0);
        wcd_free_irq(iVar1,3,0);
        wcd_free_irq(iVar1,4,0);
        wcd_free_irq(iVar1,5,0);
        wcd_free_irq(iVar1,6,0);
        wcd_free_irq(iVar1,7,0);
        wcd_free_irq(iVar1,8,0);
        wcd_free_irq(iVar1,9,0);
        pcVar3 = *(iVar4 + 0x288);
        if (pcVar3 != NULL) {
            __cfi_slowpath_diag(0x3b795baa068bc3a6,pcVar3,0x80018d0);
            (*pcVar3)(*(iVar4 + 0x280),iVar4 + 0x268,0);
        }
        debugfs_remove(*(iVar4 + 0x220));
        *(iVar4 + 0x220) = 0;
        snd_soc_unregister_component(arg1 + 0x48);
        if (*(iVar4 + 0x2b0) != NULL) {
            kfree(**(iVar4 + 0x2b0));
            kfree(*(*(iVar4 + 0x2b0) + 0xb0));
            kfree(*(iVar4 + 0x2b0));
        }
        if (*(iVar4 + 0x2b8) != NULL) {
            kfree(**(iVar4 + 0x2b8));
            kfree(*(iVar4 + 0x2b8));
        }
        msm_cdc_release_supplies(arg1 + 0x48,*(iVar4 + 0x2a0),*(iVar4 + 0x290),*(iVar4 + 0x298));
        uVar2 = 0;
        *(arg1 + 0xe0) = 0;
    }
    return uVar2;
}


// ===== sym.wsa884x_saf2war_handle_irq @ 0x080109b4 (size 100) =====

ulong sym.wsa884x_saf2war_handle_irq(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ___ratelimit(obj.wsa884x_saf2war_handle_irq._rs,"wsa884x_saf2war_handle_irq");
    if (iVar1 != 0) {
        _printk(0x8002265,"wsa884x_saf2war_handle_irq",arg1 & 0xffffffff);
    }
    return 1;
}


// ===== sym.wsa884x_war2saf_handle_irq @ 0x08010a18 (size 100) =====

ulong sym.wsa884x_war2saf_handle_irq(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ___ratelimit(obj.wsa884x_war2saf_handle_irq._rs,"wsa884x_war2saf_handle_irq");
    if (iVar1 != 0) {
        _printk(0x8002265,"wsa884x_war2saf_handle_irq",arg1 & 0xffffffff);
    }
    return 1;
}


// ===== sym.wsa884x_otp_handle_irq @ 0x08010a7c (size 100) =====

ulong sym.wsa884x_otp_handle_irq(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ___ratelimit(obj.wsa884x_otp_handle_irq._rs,"wsa884x_otp_handle_irq");
    if (iVar1 != 0) {
        _printk(0x8002265,"wsa884x_otp_handle_irq",arg1 & 0xffffffff);
    }
    return 1;
}


// ===== sym.wsa884x_ocp_handle_irq @ 0x08010ae0 (size 100) =====

ulong sym.wsa884x_ocp_handle_irq(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ___ratelimit(obj.wsa884x_ocp_handle_irq._rs,"wsa884x_ocp_handle_irq");
    if (iVar1 != 0) {
        _printk(0x8002265,"wsa884x_ocp_handle_irq",arg1 & 0xffffffff);
    }
    return 1;
}


// ===== sym.wsa884x_clip_handle_irq @ 0x08010b44 (size 100) =====

ulong sym.wsa884x_clip_handle_irq(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ___ratelimit(obj.wsa884x_clip_handle_irq._rs,"wsa884x_clip_handle_irq");
    if (iVar1 != 0) {
        _printk(0x8002265,"wsa884x_clip_handle_irq",arg1 & 0xffffffff);
    }
    return 1;
}


// ===== sym.wsa884x_pdm_wd_handle_irq @ 0x08010ba8 (size 168) =====

uint sym.wsa884x_pdm_wd_handle_irq(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    uint uVar2;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        uVar2 = 0;
    }
    else {
        uVar3 = *(arg2 + 0x18);
        uVar2 = 1;
        snd_soc_component_update_bits(uVar3,0x348b,1,0);
        snd_soc_component_update_bits(uVar3,0x348b,1,1);
        iVar1 = ___ratelimit(obj.wsa884x_pdm_wd_handle_irq._rs,"wsa884x_pdm_wd_handle_irq");
        if (iVar1 != 0) {
            _printk(0x8002265,"wsa884x_pdm_wd_handle_irq",arg1 & 0xffffffff);
            uVar2 = 1;
        }
    }
    return uVar2;
}


// ===== sym.wsa884x_clk_wd_handle_irq @ 0x08010c50 (size 100) =====

ulong sym.wsa884x_clk_wd_handle_irq(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ___ratelimit(obj.wsa884x_clk_wd_handle_irq._rs,"wsa884x_clk_wd_handle_irq");
    if (iVar1 != 0) {
        _printk(0x8002265,"wsa884x_clk_wd_handle_irq",arg1 & 0xffffffff);
    }
    return 1;
}


// ===== sym.wsa884x_ext_int_handle_irq @ 0x08010cb4 (size 100) =====

ulong sym.wsa884x_ext_int_handle_irq(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ___ratelimit(obj.wsa884x_ext_int_handle_irq._rs,"wsa884x_ext_int_handle_irq");
    if (iVar1 != 0) {
        _printk(0x8002265,"wsa884x_ext_int_handle_irq",arg1 & 0xffffffff);
    }
    return 1;
}


// ===== sym.wsa884x_uvlo_handle_irq @ 0x08010d18 (size 100) =====

ulong sym.wsa884x_uvlo_handle_irq(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ___ratelimit(obj.wsa884x_uvlo_handle_irq._rs,"wsa884x_uvlo_handle_irq");
    if (iVar1 != 0) {
        _printk(0x8002265,"wsa884x_uvlo_handle_irq",arg1 & 0xffffffff);
    }
    return 1;
}


// ===== sym.wsa884x_pa_on_err_handle_irq @ 0x08010d7c (size 232) =====

ulong sym.wsa884x_pa_on_err_handle_irq(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg2 == 0) || (iVar4 = *(arg2 + 0x18), iVar4 == 0)) {
        uVar3 = 0;
    }
    else {
        snd_soc_component_update_bits(iVar4,0x3430,1,0);
        uVar2 = snd_soc_component_read(iVar4,0x3436);
        if ((uVar2 & 0x1f) != 0) {
            snd_soc_component_read(iVar4,0x3438);
        }
        iVar1 = ___ratelimit(obj.wsa884x_pa_on_err_handle_irq._rs,"wsa884x_pa_on_err_handle_irq");
        if (iVar1 != 0) {
            _printk(0x8002265,"wsa884x_pa_on_err_handle_irq",arg1 & 0xffffffff);
        }
        snd_soc_component_update_bits(iVar4,0x3431,0x10,0);
        snd_soc_component_update_bits(iVar4,0x3431,0x10,0x10);
        snd_soc_component_update_bits(iVar4,0x3431,0x10,0);
        uVar3 = 1;
    }
    return uVar3;
}


// ===== sym.wsa884x_event_notify @ 0x08010e64 (size 436) =====

uint64_t sym.wsa884x_event_notify(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    int64_t arg1_00;
    int iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = arg1 + -0x268;
    if (arg1_00 == 0) {
        uVar6 = 0xffffffea;
    }
    else {
        uVar6 = 0;
        uVar4 = (arg2 & 0xffff) - 2;
        if (uVar4 < 5) {
    //switch table (4 cases) at 0x80018f0
            switch(*(uVar4 * 4 + 0x80018f0) + 0x8010e9c) {
            case 0x8010eb0:
                if ((*(arg1 + 0x40) & 1) != 0) {
                    snd_soc_component_update_bits(*(arg1 + -0x250),0x3430,1,0);
                }
                uVar6 = msm_cdc_pinctrl_select_sleep_state(*(arg1 + -0x1a0));
                if (uVar6 == 0) {
                    return uVar6;
                }
                iVar5 = ___ratelimit(obj.wsa884x_gpio_ctrl._rs,"wsa884x_gpio_ctrl");
                if (iVar5 != 0) {
                    _dev_err(*(arg1 + -0x260),"%s: Failed to turn state %d; ret=%d\n","wsa884x_gpio_ctrl",0,
                             uVar6 & 0xffffffff);
                }
                uVar6 = ___ratelimit(obj.wsa884x_swr_down._rs,"wsa884x_swr_down");
                if (uVar6 == 0) {
                    return uVar6;
                }
                _dev_err(*(arg1 + -0x260),"%s: Failed to disable gpio\n","wsa884x_swr_down");
                break;
            case 0x8010f34:
                if ((*(arg1 + 0x40) & 1) != 0) {
                    puVar1 = arg1 + 0x40;
                    Hint_Prefetch(puVar1,2,0,1);
                    do {
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar3) {
                            *puVar1 = *puVar1 | 4;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                }
                break;
            case 0x8010f58:
                if ((*(arg1 + 0x40) & 1) != 0) {
                    snd_soc_component_update_bits(*(arg1 + -0x250),0x348b,1,1);
                    snd_soc_component_update_bits(*(arg1 + -0x250),0x3430,1,1);
                }
                break;
            case 0x8010f90:
                goto code_r0x08010f90;
            case 0x8010fa8:
                sym.wsa884x_swr_up(arg1_00);
                usleep_range_state(20000,0x4e2a,2);
                sym.wsa884x_swr_reset(arg1_00);
                _dev_err(*(arg1 + -0x260),"%s: BOLERO_SLV_EVT_SSR_UP Called","wsa884x_event_notify");
                swr_init_port_params(*(arg1 + -600),6,arg1 + -0x68);
            }
            uVar6 = 0;
        }
    }
code_r0x08010f90:
    return uVar6;
}


// ===== sym.wsa884x_validate_dt_configuration_params @ 0x0801103c (size 132) =====

bool sym.wsa884x_validate_dt_configuration_params(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    ulong in_x0;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = snd_soc_component_read(in_x0,0x3501);
    uVar1 = arg2 & 0xff;
    uVar2 = 0;
    if ((arg2 & 0xfe) != 4 && uVar1 != 6) {
        uVar2 = uVar1;
    }
    return ((3 < (arg1 & 0xff) || 0x12 < (arg3 & 0xff)) || 6 < uVar2) || uVar2 != (uVar3 & 0xff);
}


// ===== sym.wsa884x_set_gain_parameters @ 0x080110c0 (size 464) =====

void sym.wsa884x_set_gain_parameters(int64_t arg1)

{
    uint8_t uVar1;
    code cVar2;
    code *pcVar3;
    ulong uVar4;
    uint32_t uVar5;
    int iVar6;
    int iVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar9 = *(*(arg1 + 0x18) + 0x98);
    if (*(iVar9 + 0xe4) < 7) {
        uVar5 = 0;
        iVar6 = 8;
        iVar7 = 9;
    //switch table (7 cases) at 0x8001904
        switch(*(*(iVar9 + 0xe4) + 0x8001904) * 4 + 0x8011114) {
        case 0x8011118:
            uVar1 = *(iVar9 + 0xec);
            iVar7 = uVar1 + 0xe;
            uVar5 = uVar1;
            iVar6 = 7 - uVar5;
            if (3 < uVar1) {
                uVar5 = 4;
                iVar7 = 0x12;
                iVar6 = 3;
            }
            break;
        case 0x801114c:
            uVar5 = 0;
            iVar6 = 9;
            iVar7 = 6;
            break;
        case 0x8011160:
            goto code_r0x08011160;
        }
    }
    else {
code_r0x08011160:
        uVar5 = 0;
        iVar6 = 7;
        iVar7 = 0xe;
    }
    uVar8 = *(iVar9 + 0xec);
    *(iVar9 + 0x78) = uVar5;
    *(iVar9 + 0x104) = iVar7;
    *(iVar9 + 0x108) = iVar6;
    if ((uVar8 < 0x13) && (uVar5 = *(iVar9 + 0xe8), uVar5 < 4)) {
        if (0x4b < uVar5 + uVar8 * 4) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(1,0x8011290);
            (*pcVar3)();
        }
        cVar2 = obj.vsense_gain_data[uVar8];
        snd_soc_component_update_bits(arg1,0x3021,0xe0,obj.isense_gain_data[uVar5 + uVar8 * 4] << 5);
        snd_soc_component_update_bits(arg1,0x3020,0xe0,cVar2 << 5);
        snd_soc_component_update_bits(arg1,0x34b9,0x1f,*(iVar9 + 0x104));
        if (*(iVar9 + 0x20) == '\0') {
            if (0x12 < *(iVar9 + 0xe0)) goto code_r0x08011288;
            *(iVar9 + 0x108) =
                 "\n\n\n\n\n\t\t\t\b\b\b\b\a\a\a\x06\x05\x04\x03\x04\x04\x03\x03\x02\x02\x01\x01"[*(iVar9 + 0xe0)];
            snd_soc_component_update_bits(arg1,0x34b1,1,1);
            uVar4 = 0x3e;
            iVar9 = *(iVar9 + 0xe0) << 1;
        }
        else {
            snd_soc_component_update_bits(arg1,0x34b0,7,*(iVar9 + 0x78));
            uVar4 = 1;
            iVar9 = 0;
        }
        snd_soc_component_update_bits(arg1,0x34b1,uVar4,iVar9);
        return;
    }
code_r0x08011288:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x801128c);
    (*pcVar3)();
}


// ===== sym.wsa884x_set_pbr_parameters @ 0x08011290 (size 1576) =====

void sym.wsa884x_set_pbr_parameters(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong *in_x18;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    int iVar16;
    int iVar17;
    ulong unaff_x30;
    int iStack_74;
    int iStack_70;
    int iStack_6c;
    int iStack_68;
    int iStack_64;
    
    *in_x18 = unaff_x30;
    iVar7 = *(*(arg1 + 0x18) + 0x98);
    uVar5 = *(iVar7 + 0xec);
    if (((uVar5 < 0x13) && (uVar1 = *(iVar7 + 0xe4), uVar1 < 7)) && (uVar2 = *(iVar7 + 0xe8), uVar2 < 4)) {
        if (uVar5 * 0x70 + uVar1 * 0x10 + uVar2 * 4 < 0x850) {
            iVar8 = uVar5 * 0x70;
            iVar6 = uVar1 * 0x10;
            iVar7 = uVar2 * 4;
            if (*(obj.pbr_vth1_data + iVar7 + iVar6 + iVar8) == 0) {
                iVar4 = 0;
            }
            else {
                iVar4 = (*(obj.pbr_vth1_data + iVar7 + iVar6 + iVar8) * 0xff + -0x956a) / 2000 + 1;
            }
            if (*(obj.pbr_vth2_data + iVar7 + iVar6 + iVar8) == 0) {
                iStack_64 = 0;
            }
            else {
                iStack_64 = (*(obj.pbr_vth2_data + iVar7 + iVar6 + iVar8) * 0xff + -0x956a) / 2000 + 1;
            }
            if (*(obj.pbr_vth3_data + iVar7 + iVar6 + iVar8) == 0) {
                iStack_68 = 0;
            }
            else {
                iStack_68 = (*(obj.pbr_vth3_data + iVar7 + iVar6 + iVar8) * 0xff + -0x956a) / 2000 + 1;
            }
            if (*(obj.pbr_vth4_data + iVar7 + iVar6 + iVar8) == 0) {
                iStack_6c = 0;
            }
            else {
                iStack_6c = (*(obj.pbr_vth4_data + iVar7 + iVar6 + iVar8) * 0xff + -0x956a) / 2000 + 1;
            }
            if (*(obj.pbr_vth5_data + iVar7 + iVar6 + iVar8) == 0) {
                iStack_70 = 0;
            }
            else {
                iStack_70 = (*(obj.pbr_vth5_data + iVar7 + iVar6 + iVar8) * 0xff + -0x956a) / 2000 + 1;
            }
            if (*(obj.pbr_vth6_data + iVar7 + iVar6 + iVar8) == 0) {
                iStack_74 = 0;
            }
            else {
                iStack_74 = (*(obj.pbr_vth6_data + iVar7 + iVar6 + iVar8) * 0xff + -0x956a) / 2000 + 1;
            }
            if (*(obj.pbr_vth7_data + iVar7 + iVar6 + iVar8) == 0) {
                iVar14 = 0;
            }
            else {
                iVar14 = (*(obj.pbr_vth7_data + iVar7 + iVar6 + iVar8) * 0xff + -0x956a) / 2000 + 1;
            }
            if (*(obj.pbr_vth8_data + iVar7 + iVar6 + iVar8) == 0) {
                iVar15 = 0;
            }
            else {
                iVar15 = (*(obj.pbr_vth8_data + iVar7 + iVar6 + iVar8) * 0xff + -0x956a) / 2000 + 1;
            }
            if (*(obj.pbr_vth9_data + iVar7 + iVar6 + iVar8) == 0) {
                iVar16 = 0;
            }
            else {
                iVar16 = (*(obj.pbr_vth9_data + iVar7 + iVar6 + iVar8) * 0xff + -0x956a) / 2000 + 1;
            }
            if (*(obj.pbr_vth10_data + iVar7 + iVar6 + iVar8) == 0) {
                iVar17 = 0;
            }
            else {
                iVar17 = (*(obj.pbr_vth10_data + iVar7 + iVar6 + iVar8) * 0xff + -0x956a) / 2000 + 1;
            }
            if (*(obj.pbr_vth11_data + iVar7 + iVar6 + iVar8) == 0) {
                iVar9 = 0;
            }
            else {
                iVar9 = (*(obj.pbr_vth11_data + iVar7 + iVar6 + iVar8) * 0xff + -0x956a) / 2000 + 1;
            }
            if (*(obj.pbr_vth12_data + iVar7 + iVar6 + iVar8) == 0) {
                iVar10 = 0;
                iVar13 = *(obj.pbr_vth15_data + iVar7 + iVar6 + iVar8);
            }
            else {
                iVar10 = (*(obj.pbr_vth12_data + iVar7 + iVar6 + iVar8) * 0xff + -0x956a) / 2000 + 1;
                iVar13 = *(obj.pbr_vth15_data + iVar7 + iVar6 + iVar8);
            }
            if (*(obj.pbr_vth13_data + iVar7 + iVar6 + iVar8) == 0) {
                iVar11 = 0;
            }
            else {
                iVar11 = (*(obj.pbr_vth13_data + iVar7 + iVar6 + iVar8) * 0xff + -0x956a) / 2000 + 1;
            }
            if (*(obj.pbr_vth14_data + iVar7 + iVar6 + iVar8) == 0) {
                iVar12 = 0;
            }
            else {
                iVar12 = (*(obj.pbr_vth14_data + iVar7 + iVar6 + iVar8) * 0xff + -0x956a) / 2000 + 1;
            }
            if (iVar13 == 0) {
                iVar13 = 0;
            }
            else {
                iVar13 = (iVar13 * 0xff + -0x956a) / 2000 + 1;
            }
            snd_soc_component_write(arg1,0x34e1,iVar4);
            snd_soc_component_write(arg1,0x34e2,iStack_64);
            snd_soc_component_write(arg1,0x34e3,iStack_68);
            snd_soc_component_write(arg1,0x34e4,iStack_6c);
            snd_soc_component_write(arg1,0x34e5,iStack_70);
            snd_soc_component_write(arg1,0x34e6,iStack_74);
            snd_soc_component_write(arg1,0x34e7,iVar14);
            snd_soc_component_write(arg1,0x34e8,iVar15);
            snd_soc_component_write(arg1,0x34e9,iVar16);
            snd_soc_component_write(arg1,0x34ea,iVar17);
            snd_soc_component_write(arg1,0x34eb,iVar9);
            snd_soc_component_write(arg1,0x34ec,iVar10);
            snd_soc_component_write(arg1,0x34ed,iVar11);
            snd_soc_component_write(arg1,0x34ee,iVar12);
            snd_soc_component_write(arg1,0x34ef,iVar13);
            return;
        }
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(1,0x80118b8);
        (*pcVar3)();
    }
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x80118b4);
    (*pcVar3)();
}


// ===== sym.wsa884x_parse_port_params @ 0x080118b8 (size 732) =====

uint64_t sym.wsa884x_parse_port_params(int64_t arg1)

{
    uint uVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint *puVar5;
    ulong *puVar6;
    char *pcVar7;
    char *pcVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint *unaff_x19;
    uint64_t uVar9;
    ulong uVar10;
    int64_t iVar11;
    int64_t iVar12;
    int64_t iVar13;
    ulong unaff_x30;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar **ppuStack_c0;
    code *pcStack_b8;
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint64_t uStack_60;
    int64_t iStack_50;
    uint *puStack_48;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iVar11 = *(arg1 + 0x98);
    iStack_3c = 0;
    iVar4 = of_find_property(*(arg1 + 0x2f0),"qcom,swr-wsa-port-params",&iStack_3c);
    if (iVar4 == 0) {
        pcVar7 = "missing port mapping prop %s\n";
        pcVar8 = "qcom,swr-wsa-port-params";
    }
    else {
        if (iStack_3c - 0xc0U < 0x30) {
            puVar5 = __kmalloc(iStack_3c,0xdc0);
            if (puVar5 == NULL) {
                uVar9 = 0xfffffff4;
            }
            else {
                uVar3 = of_property_read_variable_u32_array
                                  (*(arg1 + 0x2f0),"qcom,swr-wsa-port-params",puVar5,0x30,0);
                unaff_x19 = puVar5;
                if (uVar3 < 0) {
                    uVar9 = uVar3;
                    _dev_err(arg1,"%s: Failed to read port mapping from prop %s\n","wsa884x_parse_port_params",
                             "qcom,swr-wsa-port-params");
                    kfree(puVar5);
                }
                else {
                    *(iVar11 + 0x140) = *puVar5;
                    *(iVar11 + 0x144) = puVar5[1];
                    *(iVar11 + 0x148) = puVar5[2];
                    *(iVar11 + 0x14c) = puVar5[3];
                    *(iVar11 + 0x150) = puVar5[4];
                    *(iVar11 + 0x154) = puVar5[5];
                    *(iVar11 + 0x158) = puVar5[6];
                    *(iVar11 + 0x15c) = puVar5[7];
                    *(iVar11 + 0x160) = puVar5[8];
                    *(iVar11 + 0x164) = puVar5[9];
                    *(iVar11 + 0x168) = puVar5[10];
                    uVar1 = puVar5[0xb];
                    *(iVar11 + 0x200) = iVar11 + 0x140;
                    *(iVar11 + 0x16c) = uVar1;
                    *(iVar11 + 0x170) = puVar5[0xc];
                    *(iVar11 + 0x174) = puVar5[0xd];
                    *(iVar11 + 0x178) = puVar5[0xe];
                    *(iVar11 + 0x17c) = puVar5[0xf];
                    *(iVar11 + 0x180) = puVar5[0x10];
                    *(iVar11 + 0x184) = puVar5[0x11];
                    *(iVar11 + 0x188) = puVar5[0x12];
                    *(iVar11 + 0x18c) = puVar5[0x13];
                    *(iVar11 + 400) = puVar5[0x14];
                    *(iVar11 + 0x194) = puVar5[0x15];
                    *(iVar11 + 0x198) = puVar5[0x16];
                    uVar1 = puVar5[0x17];
                    *(iVar11 + 0x208) = iVar11 + 0x170;
                    *(iVar11 + 0x19c) = uVar1;
                    *(iVar11 + 0x1a0) = puVar5[0x18];
                    *(iVar11 + 0x1a4) = puVar5[0x19];
                    *(iVar11 + 0x1a8) = puVar5[0x1a];
                    *(iVar11 + 0x1ac) = puVar5[0x1b];
                    *(iVar11 + 0x1b0) = puVar5[0x1c];
                    *(iVar11 + 0x1b4) = puVar5[0x1d];
                    *(iVar11 + 0x1b8) = puVar5[0x1e];
                    *(iVar11 + 0x1bc) = puVar5[0x1f];
                    *(iVar11 + 0x1c0) = puVar5[0x20];
                    *(iVar11 + 0x1c4) = puVar5[0x21];
                    *(iVar11 + 0x1c8) = puVar5[0x22];
                    uVar1 = puVar5[0x23];
                    *(iVar11 + 0x210) = iVar11 + 0x1a0;
                    *(iVar11 + 0x1cc) = uVar1;
                    *(iVar11 + 0x1d0) = puVar5[0x24];
                    *(iVar11 + 0x1d4) = puVar5[0x25];
                    *(iVar11 + 0x1d8) = puVar5[0x26];
                    *(iVar11 + 0x1dc) = puVar5[0x27];
                    *(iVar11 + 0x1e0) = puVar5[0x28];
                    *(iVar11 + 0x1e4) = puVar5[0x29];
                    *(iVar11 + 0x1e8) = puVar5[0x2a];
                    *(iVar11 + 0x1ec) = puVar5[0x2b];
                    *(iVar11 + 0x1f0) = puVar5[0x2c];
                    *(iVar11 + 500) = puVar5[0x2d];
                    *(iVar11 + 0x1f8) = puVar5[0x2e];
                    uVar1 = puVar5[0x2f];
                    *(iVar11 + 0x218) = iVar11 + 0x1d0;
                    *(iVar11 + 0x1fc) = uVar1;
                    kfree(puVar5);
                    uVar9 = 0;
                }
            }
            goto code_r0x08011b5c;
        }
        pcVar7 = "%s: port params not provided for all usecases\n";
        pcVar8 = "wsa884x_parse_port_params";
    }
    _dev_err(arg1,pcVar7,pcVar8);
    uVar9 = 0xffffffea;
code_r0x08011b5c:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return uVar9;
    }
    puVar6 = __stack_chk_fail();
    *extraout_x18 = sym.wsa884x_handle_post_irq;
    pcStack_68 = sym.wsa884x_handle_post_irq;
    iVar4 = sp_el0;
    iStack_78 = *(iVar4 + 0x5e0);
    uStack_80 = 0;
    puStack_70 = &stack0xffffffffffffffd0;
    uStack_60 = uVar9;
    iStack_50 = arg1;
    puStack_48 = unaff_x19;
    if (puVar6 == NULL) {
        uVar9 = 0;
    }
    else if (*(puVar6 + 0x1a) == 0) {
        uVar10 = puVar6[3];
        *(puVar6 + 0x1a) = 0;
        uVar9 = 1;
        snd_soc_component_update_bits(uVar10,0x3430,1,1);
        usleep_range_state(1000,0x44c,2);
        regmap_read(*puVar6,0x3583,&uStack_80 + 4);
        regmap_read(*puVar6,0x3584,&uStack_80);
        *(puVar6[2] + 0x3f0) = uStack_80._4_4_ != 0 || uStack_80 != 0;
        if (*(puVar6[2] + 0x3f0) != '\0') {
            snd_soc_component_update_bits(uVar10,0x3430,1,0);
            *(puVar6 + 0x1a) = 1;
            usleep_range_state(1000,0x44c,2);
            *(puVar6 + 0x1a) = 0;
            snd_soc_component_update_bits(uVar10,0x3430,1,1);
            usleep_range_state(1000,0x44c,2);
            regmap_read(*puVar6,0x3583,&uStack_80 + 4);
            regmap_read(*puVar6,0x3584,&uStack_80);
            *(puVar6[2] + 0x3f0) = uStack_80._4_4_ != 0 || uStack_80 != 0;
            if (*(puVar6[2] + 0x3f0) != '\0') {
                uVar9 = 1;
                snd_soc_component_update_bits(uVar10,0x3430,1,0);
                *(puVar6 + 0x1a) = 1;
                usleep_range_state(1000,0x44c,2);
            }
        }
    }
    else {
        uVar9 = 1;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_78) {
        return uVar9;
    }
    iVar11 = __stack_chk_fail();
    *extraout_x18_00 = sym.wsa884x_codec_probe;
    pcStack_b8 = sym.wsa884x_codec_probe;
    iVar4 = sp_el0;
    iStack_c8 = *(iVar4 + 0x5e0);
    puVar6 = *(*(iVar11 + 0x18) + 0x98);
    ppuStack_c0 = &puStack_70;
    if ((puVar6 == NULL) || (*(iVar11 + 0x10) == 0)) {
        uVar9 = 0xffffffea;
    }
    else {
        iVar4 = iVar11 + 0xd0;
        snd_soc_component_init_regmap(iVar11,*puVar6);
        puVar6[3] = iVar11;
        uVar3 = snd_soc_component_read(iVar11,0x3880);
        *(puVar6 + 0x1b) = uVar3 & 0xf;
        uVar3 = snd_soc_component_read(iVar11,0x3401);
        *(puVar6 + 0xf) = 2;
        *(puVar6 + 0xdc) = uVar3 & 0xff;
        iVar12 = *(*(iVar11 + 0x18) + 0x98);
        if (iVar12 != 0) {
            iVar13 = 0;
            do {
                snd_soc_component_update_bits
                          (iVar11,*(obj.reg_init + iVar13),*(iVar13 + 0x80037c2),*(iVar13 + 0x80037c3));
                iVar13 = iVar13 + 4;
            } while (iVar13 != 0x8c);
            if (*(iVar12 + 0xe4) == 2) {
                snd_soc_component_update_bits(iVar11,0x34d1,0xf0,0x20);
                snd_soc_component_update_bits(iVar11,0x34d2,0x1f,0x13);
                snd_soc_component_update_bits(iVar11,0x3005,0xf,3);
                snd_soc_component_update_bits(iVar11,0x3005,0xf0,0x30);
                snd_soc_component_update_bits(iVar11,0x3045,0xff,6);
                snd_soc_component_update_bits(iVar11,0x3046,0xff,0x14);
                snd_soc_component_update_bits(iVar11,0x3047,0xff,0x19);
                snd_soc_component_update_bits(iVar11,0x3048,0xff,0x1b);
                snd_soc_component_update_bits(iVar11,0x3049,0xff,0x1c);
                snd_soc_component_update_bits(iVar11,0x306a,2,2);
            }
            uVar3 = *(iVar12 + 0x2c0) - 1;
            iVar2 = uVar3 * -0x10 + 0x30;
            if (2 < uVar3) {
                iVar2 = 8;
            }
            snd_soc_component_update_bits(iVar11,0x3432,0x38,iVar2);
        }
        *(puVar6 + 0xe) = 0;
        uStack_f0 = 0;
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_d8 = 0;
        uStack_d0 = 0;
        strlcpy(&uStack_f0,*(puVar6[0x56] + 0xb0),0x28);
        snd_soc_dapm_ignore_suspend(iVar4,&uStack_f0);
        uStack_f0 = 0;
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_d8 = 0;
        uStack_d0 = 0;
        strlcpy(&uStack_f0,0x8002104,0x28);
        snd_soc_dapm_ignore_suspend(iVar4,&uStack_f0);
        uStack_f0 = 0;
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_d8 = 0;
        uStack_d0 = 0;
        strlcpy(&uStack_f0,"SWR DAC_Port",0x28);
        snd_soc_dapm_ignore_suspend(iVar4,&uStack_f0);
        uStack_f0 = 0;
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_d8 = 0;
        uStack_d0 = 0;
        strlcpy(&uStack_f0,"SPKR",0x28);
        snd_soc_dapm_ignore_suspend(iVar4,&uStack_f0);
        snd_soc_dapm_sync(iVar4);
        uVar9 = 0;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_c8) {
        return uVar9;
    }
    uVar9 = __stack_chk_fail(uVar9);
    *extraout_x18_01 = sym.wsa884x_codec_remove;
    if (*(*(uVar9 + 0x18) + 0x98) != 0) {
        uVar9 = snd_soc_component_exit_regmap();
    }
    return uVar9;
}


// ===== sym.wsa884x_handle_post_irq @ 0x08011b94 (size 440) =====

int64_t sym.wsa884x_handle_post_irq(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar4;
    ulong uVar5;
    ulong *puVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    if (arg1 == 0) {
        iVar4 = 0;
    }
    else if (*(arg1 + 0xd0) == 0) {
        uVar5 = *(arg1 + 0x18);
        *(arg1 + 0xd0) = 0;
        iVar4 = 1;
        snd_soc_component_update_bits(uVar5,0x3430,1,1);
        usleep_range_state(1000,0x44c,2);
        regmap_read(*arg1,0x3583,&uStack_40 + 4);
        regmap_read(*arg1,0x3584,&uStack_40);
        *(*(arg1 + 0x10) + 0x3f0) = uStack_40._4_4_ != 0 || uStack_40 != 0;
        if (*(*(arg1 + 0x10) + 0x3f0) != '\0') {
            snd_soc_component_update_bits(uVar5,0x3430,1,0);
            *(arg1 + 0xd0) = 1;
            usleep_range_state(1000,0x44c,2);
            *(arg1 + 0xd0) = 0;
            snd_soc_component_update_bits(uVar5,0x3430,1,1);
            usleep_range_state(1000,0x44c,2);
            regmap_read(*arg1,0x3583,&uStack_40 + 4);
            regmap_read(*arg1,0x3584,&uStack_40);
            *(*(arg1 + 0x10) + 0x3f0) = uStack_40._4_4_ != 0 || uStack_40 != 0;
            if (*(*(arg1 + 0x10) + 0x3f0) != '\0') {
                iVar4 = 1;
                snd_soc_component_update_bits(uVar5,0x3430,1,0);
                *(arg1 + 0xd0) = 1;
                usleep_range_state(1000,0x44c,2);
            }
        }
    }
    else {
        iVar4 = 1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return iVar4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.wsa884x_codec_probe;
    pcStack_78 = sym.wsa884x_codec_probe;
    iVar4 = sp_el0;
    iStack_88 = *(iVar4 + 0x5e0);
    puVar6 = *(*(iVar3 + 0x18) + 0x98);
    puStack_80 = &stack0xffffffffffffffd0;
    if ((puVar6 == NULL) || (*(iVar3 + 0x10) == 0)) {
        iVar4 = 0xffffffea;
    }
    else {
        iVar4 = iVar3 + 0xd0;
        snd_soc_component_init_regmap(iVar3,*puVar6);
        puVar6[3] = iVar3;
        uVar2 = snd_soc_component_read(iVar3,0x3880);
        *(puVar6 + 0x1b) = uVar2 & 0xf;
        uVar2 = snd_soc_component_read(iVar3,0x3401);
        *(puVar6 + 0xf) = 2;
        *(puVar6 + 0xdc) = uVar2 & 0xff;
        iVar7 = *(*(iVar3 + 0x18) + 0x98);
        if (iVar7 != 0) {
            iVar8 = 0;
            do {
                snd_soc_component_update_bits
                          (iVar3,*(obj.reg_init + iVar8),*(iVar8 + 0x80037c2),*(iVar8 + 0x80037c3));
                iVar8 = iVar8 + 4;
            } while (iVar8 != 0x8c);
            if (*(iVar7 + 0xe4) == 2) {
                snd_soc_component_update_bits(iVar3,0x34d1,0xf0,0x20);
                snd_soc_component_update_bits(iVar3,0x34d2,0x1f,0x13);
                snd_soc_component_update_bits(iVar3,0x3005,0xf,3);
                snd_soc_component_update_bits(iVar3,0x3005,0xf0,0x30);
                snd_soc_component_update_bits(iVar3,0x3045,0xff,6);
                snd_soc_component_update_bits(iVar3,0x3046,0xff,0x14);
                snd_soc_component_update_bits(iVar3,0x3047,0xff,0x19);
                snd_soc_component_update_bits(iVar3,0x3048,0xff,0x1b);
                snd_soc_component_update_bits(iVar3,0x3049,0xff,0x1c);
                snd_soc_component_update_bits(iVar3,0x306a,2,2);
            }
            uVar2 = *(iVar7 + 0x2c0) - 1;
            iVar1 = uVar2 * -0x10 + 0x30;
            if (2 < uVar2) {
                iVar1 = 8;
            }
            snd_soc_component_update_bits(iVar3,0x3432,0x38,iVar1);
        }
        *(puVar6 + 0xe) = 0;
        uStack_b0 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        strlcpy(&uStack_b0,*(puVar6[0x56] + 0xb0),0x28);
        snd_soc_dapm_ignore_suspend(iVar4,&uStack_b0);
        uStack_b0 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        strlcpy(&uStack_b0,0x8002104,0x28);
        snd_soc_dapm_ignore_suspend(iVar4,&uStack_b0);
        uStack_b0 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        strlcpy(&uStack_b0,"SWR DAC_Port",0x28);
        snd_soc_dapm_ignore_suspend(iVar4,&uStack_b0);
        uStack_b0 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        strlcpy(&uStack_b0,"SPKR",0x28);
        snd_soc_dapm_ignore_suspend(iVar4,&uStack_b0);
        snd_soc_dapm_sync(iVar4);
        iVar4 = 0;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_88) {
        return iVar4;
    }
    iVar4 = __stack_chk_fail(iVar4);
    *extraout_x18_00 = sym.wsa884x_codec_remove;
    if (*(*(iVar4 + 0x18) + 0x98) != 0) {
        iVar4 = snd_soc_component_exit_regmap();
    }
    return iVar4;
}


// ===== sym.wsa884x_codec_probe @ 0x08011d4c (size 708) =====

void sym.wsa884x_codec_probe(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong unaff_x30;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    puVar5 = *(*(arg1 + 0x18) + 0x98);
    if ((puVar5 == NULL) || (*(arg1 + 0x10) == 0)) {
        uVar3 = 0xffffffea;
    }
    else {
        iVar4 = arg1 + 0xd0;
        snd_soc_component_init_regmap(arg1,*puVar5);
        puVar5[3] = arg1;
        uVar2 = snd_soc_component_read(arg1,0x3880);
        *(puVar5 + 0x1b) = uVar2 & 0xf;
        uVar2 = snd_soc_component_read(arg1,0x3401);
        *(puVar5 + 0xf) = 2;
        *(puVar5 + 0xdc) = uVar2 & 0xff;
        iVar6 = *(*(arg1 + 0x18) + 0x98);
        if (iVar6 != 0) {
            iVar7 = 0;
            do {
                snd_soc_component_update_bits(arg1,*(obj.reg_init + iVar7),*(iVar7 + 0x80037c2),*(iVar7 + 0x80037c3))
                ;
                iVar7 = iVar7 + 4;
            } while (iVar7 != 0x8c);
            if (*(iVar6 + 0xe4) == 2) {
                snd_soc_component_update_bits(arg1,0x34d1,0xf0,0x20);
                snd_soc_component_update_bits(arg1,0x34d2,0x1f,0x13);
                snd_soc_component_update_bits(arg1,0x3005,0xf,3);
                snd_soc_component_update_bits(arg1,0x3005,0xf0,0x30);
                snd_soc_component_update_bits(arg1,0x3045,0xff,6);
                snd_soc_component_update_bits(arg1,0x3046,0xff,0x14);
                snd_soc_component_update_bits(arg1,0x3047,0xff,0x19);
                snd_soc_component_update_bits(arg1,0x3048,0xff,0x1b);
                snd_soc_component_update_bits(arg1,0x3049,0xff,0x1c);
                snd_soc_component_update_bits(arg1,0x306a,2,2);
            }
            uVar2 = *(iVar6 + 0x2c0) - 1;
            iVar1 = uVar2 * -0x10 + 0x30;
            if (2 < uVar2) {
                iVar1 = 8;
            }
            snd_soc_component_update_bits(arg1,0x3432,0x38,iVar1);
        }
        *(puVar5 + 0xe) = 0;
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        strlcpy(&uStack_70,*(puVar5[0x56] + 0xb0),0x28);
        snd_soc_dapm_ignore_suspend(iVar4,&uStack_70);
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        strlcpy(&uStack_70,0x8002104,0x28);
        snd_soc_dapm_ignore_suspend(iVar4,&uStack_70);
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        strlcpy(&uStack_70,"SWR DAC_Port",0x28);
        snd_soc_dapm_ignore_suspend(iVar4,&uStack_70);
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        strlcpy(&uStack_70,"SPKR",0x28);
        snd_soc_dapm_ignore_suspend(iVar4,&uStack_70);
        snd_soc_dapm_sync(iVar4);
        uVar3 = 0;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return;
    }
    iVar4 = __stack_chk_fail(uVar3);
    *extraout_x18 = sym.wsa884x_codec_remove;
    if (*(*(iVar4 + 0x18) + 0x98) != 0) {
        snd_soc_component_exit_regmap();
    }
    return;
}


// ===== sym.wsa884x_codec_remove @ 0x08012010 (size 48) =====

void sym.wsa884x_codec_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(arg1 + 0x18) + 0x98) != 0) {
        snd_soc_component_exit_regmap();
    }
    return;
}


// ===== sym.wsa884x_soc_codec_suspend @ 0x08012040 (size 36) =====

ulong sym.wsa884x_soc_codec_suspend(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = *(*(arg1 + 0x18) + 0x98);
    if (iVar1 != 0) {
        *(iVar1 + 0x25) = 1;
    }
    return 0;
}


// ===== sym.wsa884x_soc_codec_resume @ 0x08012064 (size 32) =====

ulong sym.wsa884x_soc_codec_resume(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = *(*(arg1 + 0x18) + 0x98);
    if (iVar1 != 0) {
        *(iVar1 + 0x25) = 0;
    }
    return 0;
}


// ===== sym.wsa_pa_gain_get @ 0x08012084 (size 36) =====

ulong sym.wsa_pa_gain_get(int64_t arg1,int64_t arg2)

{
    *(arg2 + 0x48) = *(*(*(*(arg1 + 0x80) + 0x18) + 0x98) + 0xe0);
    return 0;
}


// ===== sym.wsa_pa_gain_put @ 0x080120a8 (size 36) =====

ulong sym.wsa_pa_gain_put(int64_t arg1,int64_t arg2)

{
    *(*(*(*(arg1 + 0x80) + 0x18) + 0x98) + 0xe0) = *(arg2 + 0x48);
    return 0;
}


// ===== sym.wsa_get_temp @ 0x080120cc (size 804) =====

ulong sym.wsa_get_temp(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int iVar8;
    int64_t iVar9;
    int64_t iVar10;
    ulong *in_x18;
    int64_t iVar11;
    char cVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar11 = *(arg1 + 0x80);
    iVar10 = *(*(iVar11 + 0x18) + 0x98);
    if ((*(iVar10 + 0x2a8) & 1) == 0) {
        if (iVar10 == 0) {
            iVar8 = 0;
        }
        else {
            cVar12 = '\x03';
            iVar9 = iVar10;
            do {
                mutex_lock(iVar9 + 0x80);
                snd_soc_component_update_bits(iVar11,0x343d,1,1);
                snd_soc_component_update_bits(iVar11,0x343d,4,4);
                snd_soc_component_update_bits(iVar11,0x343d,2,2);
                snd_soc_component_update_bits(iVar11,0x343d,0x80,0x80);
                snd_soc_component_update_bits(iVar11,0x343d,0x20,0x20);
                snd_soc_component_update_bits(iVar11,0x343d,0x40,0x40);
                snd_soc_component_update_bits(iVar11,0x3450,1,0);
                uVar4 = snd_soc_component_read(iVar11,0x3452);
                uVar5 = snd_soc_component_read(iVar11,0x3453);
                snd_soc_component_update_bits(iVar11,0x3450,1,1);
                uVar2 = snd_soc_component_read(iVar11,0x3881);
                uVar6 = snd_soc_component_read(iVar11,0x3882);
                uVar3 = snd_soc_component_read(iVar11,0x3883);
                uVar7 = snd_soc_component_read(iVar11,0x3884);
                snd_soc_component_update_bits(iVar11,0x343d,0xe7,0);
                mutex_unlock(iVar9 + 0x80);
                if (((((uVar2 - 0x5d < 0xffffffe7) || ((uVar6 & 0x3f) != 0)) || (uVar3 < 0xb9)) ||
                    ((0xda < uVar3 || ((uVar7 & 0x3f) != 0)))) &&
                   (iVar8 = ___ratelimit(obj.wsa884x_get_temperature._rs.95,"wsa884x_get_temperature"), iVar8 != 0)) {
                    _printk("%s: Temperature registers[%d %d %d %d] are out of range\n","wsa884x_get_temperature",
                            uVar2,uVar6 & 0xff,uVar3,uVar7 & 0xff);
                }
                uVar6 = (uVar6 & 0xc0 | uVar2 << 8) >> 6;
                iVar8 = ((uVar7 & 0xc0 | uVar3 << 8) >> 6) - uVar6;
                if (iVar8 != 0) {
                    iVar1 = 0;
                    if (iVar8 != 0) {
                        iVar1 = ((((uVar5 & 0xc0 | (uVar4 & 0xff) << 8) >> 6) - uVar6) * 0xa0) / iVar8;
                    }
                    iVar8 = iVar1 + -10;
                    if (iVar1 - 0x37U < 0xffffffd9) goto code_r0x08012308;
code_r0x0801236c:
                    *(iVar10 + 0xd4) = iVar8;
                    goto code_r0x08012380;
                }
                iVar8 = 0xffff;
code_r0x08012308:
                cVar12 = cVar12 + -1;
                msleep(10);
                if (cVar12 == '\0') goto code_r0x0801236c;
                iVar9 = *(*(iVar11 + 0x18) + 0x98);
            } while (iVar9 != 0);
            iVar8 = ___ratelimit(obj.wsa884x_temp_reg_read._rs,"wsa884x_temp_reg_read");
            if (iVar8 != 0) {
                _dev_err(*(iVar11 + 0x18),"%s: wsa884x is NULL\n","wsa884x_temp_reg_read");
            }
            iVar8 = ___ratelimit(obj.wsa884x_get_temperature._rs,"wsa884x_get_temperature");
            if (iVar8 != 0) {
                _printk(0x8001cc9,"wsa884x_get_temperature",0xffffffea,*(iVar10 + 0xd4));
            }
            iVar8 = *(iVar10 + 0xd4);
        }
    }
    else {
        iVar8 = *(iVar10 + 0xd4);
    }
code_r0x08012380:
    *(arg2 + 0x48) = iVar8;
    return 0;
}


// ===== sym.wsa884x_get_dev_num @ 0x080123f0 (size 124) =====

ulong sym.wsa884x_get_dev_num(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x80) != 0) {
        iVar2 = *(*(*(arg1 + 0x80) + 0x18) + 0x98);
        if (iVar2 != 0) {
            *(arg2 + 0x48) = *(*(iVar2 + 0x10) + 0x40);
            return 0;
        }
        iVar1 = ___ratelimit(obj.wsa884x_get_dev_num._rs,"wsa884x_get_dev_num");
        if (iVar1 != 0) {
            _printk(0x8001e2d,"wsa884x_get_dev_num");
        }
    }
    return 0xffffffea;
}


// ===== sym.wsa_dev_mode_get @ 0x0801246c (size 36) =====

ulong sym.wsa_dev_mode_get(int64_t arg1,int64_t arg2)

{
    *(arg2 + 0x48) = *(*(*(*(arg1 + 0x80) + 0x18) + 0x98) + 0x74);
    return 0;
}


// ===== sym.wsa_dev_mode_put @ 0x08012490 (size 108) =====

ulong sym.wsa_dev_mode_put(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    code *pcVar2;
    int64_t iVar3;
    int iVar4;
    
    if (1 < *(arg2 + 0x48)) {
        return 0xffffffea;
    }
    iVar3 = *(*(*(arg1 + 0x80) + 0x18) + 0x98);
    iVar4 = *(arg2 + 0x48);
    *(iVar3 + 0x74) = iVar4;
    uVar1 = *(iVar3 + 0x10c) - 1;
    uVar1 = iVar4 + (uVar1 - (uVar1 + ((uVar1 & 0x8000) >> 0xf) & 0x7ffffffe)) * 2;
    if (uVar1 < 4) {
        *(iVar3 + 0xec) = *(iVar3 + uVar1 * 4 + 0xf0);
        return 0;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x80124fc);
    (*pcVar2)();
}


// ===== sym.wsa884x_get_compander @ 0x080124fc (size 36) =====

ulong sym.wsa884x_get_compander(int64_t arg1,int64_t arg2)

{
    *(arg2 + 0x48) = *(*(*(*(arg1 + 0x80) + 0x18) + 0x98) + 0x20);
    return 0;
}


// ===== sym.wsa884x_set_compander @ 0x08012520 (size 44) =====

ulong sym.wsa884x_set_compander(int64_t arg1,int64_t arg2)

{
    *(*(*(*(arg1 + 0x80) + 0x18) + 0x98) + 0x20) = *(arg2 + 0x48) != 0;
    return 0;
}


// ===== sym.wsa884x_get_visense @ 0x0801254c (size 36) =====

ulong sym.wsa884x_get_visense(int64_t arg1,int64_t arg2)

{
    *(arg2 + 0x48) = *(*(*(*(arg1 + 0x80) + 0x18) + 0x98) + 0x21);
    return 0;
}


// ===== sym.wsa884x_set_visense @ 0x08012570 (size 44) =====

ulong sym.wsa884x_set_visense(int64_t arg1,int64_t arg2)

{
    *(*(*(*(arg1 + 0x80) + 0x18) + 0x98) + 0x21) = *(arg2 + 0x48) != 0;
    return 0;
}


// ===== sym.wsa884x_get_pbr @ 0x0801259c (size 36) =====

ulong sym.wsa884x_get_pbr(int64_t arg1,int64_t arg2)

{
    *(arg2 + 0x48) = *(*(*(*(arg1 + 0x80) + 0x18) + 0x98) + 0x23);
    return 0;
}


// ===== sym.wsa884x_set_pbr @ 0x080125c0 (size 44) =====

ulong sym.wsa884x_set_pbr(int64_t arg1,int64_t arg2)

{
    *(*(*(*(arg1 + 0x80) + 0x18) + 0x98) + 0x23) = *(arg2 + 0x48) != 0;
    return 0;
}


// ===== sym.wsa884x_get_cps @ 0x080125ec (size 36) =====

ulong sym.wsa884x_get_cps(int64_t arg1,int64_t arg2)

{
    *(arg2 + 0x48) = *(*(*(*(arg1 + 0x80) + 0x18) + 0x98) + 0x22);
    return 0;
}


// ===== sym.wsa884x_set_cps @ 0x08012610 (size 44) =====

ulong sym.wsa884x_set_cps(int64_t arg1,int64_t arg2)

{
    *(*(*(*(arg1 + 0x80) + 0x18) + 0x98) + 0x22) = *(arg2 + 0x48) != 0;
    return 0;
}


// ===== sym.wsa884x_enable_swr_dac_port @ 0x0801263c (size 1224) =====

void sym.wsa884x_enable_swr_dac_port(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    char cVar1;
    bool bVar2;
    uint32_t uVar3;
    int iVar4;
    ulong uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint64_t *extraout_x8;
    uint64_t *puVar10;
    uchar *puVar11;
    ulong *in_x18;
    int64_t iVar12;
    int64_t iVar13;
    ulong unaff_x30;
    uint uStack_60;
    ushort uStack_5c;
    uint uStack_58;
    ushort uStack_54;
    uint uStack_50;
    ushort uStack_4c;
    uint uStack_48;
    ushort uStack_44;
    uint uStack_40;
    uint64_t uStack_3c;
    ulong uStack_34;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_28 = *(iVar12 + 0x5e0);
    iVar13 = *(arg1 + 0x28);
    uStack_44 = 0;
    uStack_48 = 0;
    uStack_4c = 0;
    iVar12 = *(*(iVar13 + -0xb8) + 0x98);
    uStack_50 = 0;
    uStack_54 = 0;
    uStack_58 = 0;
    uStack_2c = 0;
    uStack_34 = 0;
    uStack_3c = 0;
    uStack_5c = 0;
    uStack_60 = 0;
    if (iVar12 != 0) {
        uVar5 = 0;
        uVar3 = arg2 - 1;
        if (7 < uVar3) goto code_r0x08012a74;
    //switch table (7 cases) at 0x800190c
        switch(*(uVar3 * 4 + 0x800190c) + 0x80126b4) {
        case 0x80126c8:
            iVar8 = *(*(iVar13 + -0xb8) + 0x98);
            uStack_48 = *(iVar8 + 0x28);
            uStack_50 = *(iVar8 + 0x30);
            uStack_58 = *(iVar8 + 0x29);
            uStack_40 = *(iVar8 + 0x2c);
            uStack_60 = *(iVar8 + 0x31);
            if (*(iVar12 + 0x74) == 1) {
                uStack_40 = 4800000;
            }
            if (*(iVar12 + 0x20) == '\0') {
                uVar6 = 1;
                cVar1 = *(iVar12 + 0x23);
            }
            else {
                uVar6 = 2;
                iVar9 = *(*(iVar13 + -0xb8) + 0x98);
                uStack_48._0_2_ = CONCAT11(*(iVar9 + 0x34),*(iVar8 + 0x28));
                uStack_48 = uStack_48;
                uStack_50._0_2_ = CONCAT11(*(iVar9 + 0x3c),*(iVar8 + 0x30));
                uStack_50 = uStack_50;
                uStack_58._0_2_ = CONCAT11(*(iVar9 + 0x35),*(iVar8 + 0x29));
                uStack_58 = uStack_58;
                uStack_3c = *(iVar9 + 0x38);
                uStack_60._0_2_ = CONCAT11(*(iVar9 + 0x3d),*(iVar8 + 0x31));
                uStack_60 = uStack_60;
                cVar1 = *(iVar12 + 0x23);
            }
            if (cVar1 != '\0') {
                iVar8 = *(*(iVar13 + -0xb8) + 0x98);
                *(&stack0xffffffffffffffb8 | uVar6) = *(iVar8 + 0x4c);
                *(&stack0xffffffffffffffb0 | uVar6) = *(iVar8 + 0x54);
                puVar11 = &stack0xffffffffffffffa0 | uVar6;
                *(&stack0xffffffffffffffa8 | uVar6) = *(iVar8 + 0x4d);
                *(&stack0xffffffffffffffc0 + uVar6 * 4) = *(iVar8 + 0x50);
                uVar6 = uVar6 + 1;
                *puVar11 = *(iVar8 + 0x55);
            }
            uVar7 = uVar6;
            if (*(iVar12 + 0x21) != '\0') {
                iVar8 = *(*(iVar13 + -0xb8) + 0x98);
                (&stack0xffffffffffffffb8)[uVar6] = *(iVar8 + 0x58);
                (&stack0xffffffffffffffb0)[uVar6] = *(iVar8 + 0x60);
                (&stack0xffffffffffffffa8)[uVar6] = *(iVar8 + 0x59);
                *(&stack0xffffffffffffffc0 + uVar6 * 4) = *(iVar8 + 0x5c);
                uVar7 = uVar6 + 1;
                (&stack0xffffffffffffffa0)[uVar6] = *(iVar8 + 0x61);
            }
            uVar6 = uVar7;
            if (*(iVar12 + 0x22) != '\0') {
                iVar13 = *(*(iVar13 + -0xb8) + 0x98);
                (&stack0xffffffffffffffb8)[uVar7] = *(iVar13 + 100);
                (&stack0xffffffffffffffb0)[uVar7] = *(iVar13 + 0x6c);
                (&stack0xffffffffffffffa8)[uVar7] = *(iVar13 + 0x65);
                *(&stack0xffffffffffffffc0 + uVar7 * 4) = *(iVar13 + 0x68);
                uVar6 = uVar7 + 1;
                (&stack0xffffffffffffffa0)[uVar7] = *(iVar13 + 0x6d);
            }
            noname_1 = swr_connect_port(*(iVar12 + 0x10),&stack0xffffffffffffffb8,uVar6,&stack0xffffffffffffffa8,
                                        &stack0xffffffffffffffc0,&stack0xffffffffffffffb0,&stack0xffffffffffffffa0);
            break;
        case 0x8012884:
            iVar8 = *(*(iVar13 + -0xb8) + 0x98);
            uStack_48 = *(iVar8 + 0x28);
            uStack_50 = *(iVar8 + 0x30);
            uStack_58 = *(iVar8 + 0x29);
            uStack_40 = *(iVar8 + 0x2c);
            uStack_60 = *(iVar8 + 0x31);
            if (*(iVar12 + 0x20) == '\0') {
                uVar6 = 1;
                cVar1 = *(iVar12 + 0x23);
            }
            else {
                uVar6 = 2;
                iVar9 = *(*(iVar13 + -0xb8) + 0x98);
                uStack_48._0_2_ = CONCAT11(*(iVar9 + 0x34),*(iVar8 + 0x28));
                uStack_48 = uStack_48;
                uStack_50._0_2_ = CONCAT11(*(iVar9 + 0x3c),*(iVar8 + 0x30));
                uStack_50 = uStack_50;
                uStack_58._0_2_ = CONCAT11(*(iVar9 + 0x35),*(iVar8 + 0x29));
                uStack_58 = uStack_58;
                uStack_3c = *(iVar9 + 0x38);
                uStack_60._0_2_ = CONCAT11(*(iVar9 + 0x3d),*(iVar8 + 0x31));
                uStack_60 = uStack_60;
                cVar1 = *(iVar12 + 0x23);
            }
            if (cVar1 != '\0') {
                iVar8 = *(*(iVar13 + -0xb8) + 0x98);
                *(&stack0xffffffffffffffb8 | uVar6) = *(iVar8 + 0x4c);
                *(&stack0xffffffffffffffb0 | uVar6) = *(iVar8 + 0x54);
                puVar11 = &stack0xffffffffffffffa0 | uVar6;
                *(&stack0xffffffffffffffa8 | uVar6) = *(iVar8 + 0x4d);
                *(&stack0xffffffffffffffc0 + uVar6 * 4) = *(iVar8 + 0x50);
                uVar6 = uVar6 + 1;
                *puVar11 = *(iVar8 + 0x55);
            }
            uVar7 = uVar6;
            if (*(iVar12 + 0x21) != '\0') {
                iVar8 = *(*(iVar13 + -0xb8) + 0x98);
                (&stack0xffffffffffffffb8)[uVar6] = *(iVar8 + 0x58);
                (&stack0xffffffffffffffb0)[uVar6] = *(iVar8 + 0x60);
                (&stack0xffffffffffffffa8)[uVar6] = *(iVar8 + 0x59);
                *(&stack0xffffffffffffffc0 + uVar6 * 4) = *(iVar8 + 0x5c);
                uVar7 = uVar6 + 1;
                (&stack0xffffffffffffffa0)[uVar6] = *(iVar8 + 0x61);
            }
            uVar6 = uVar7;
            if (*(iVar12 + 0x22) != '\0') {
                iVar13 = *(*(iVar13 + -0xb8) + 0x98);
                (&stack0xffffffffffffffb8)[uVar7] = *(iVar13 + 100);
                (&stack0xffffffffffffffb0)[uVar7] = *(iVar13 + 0x6c);
                (&stack0xffffffffffffffa8)[uVar7] = *(iVar13 + 0x65);
                *(&stack0xffffffffffffffc0 + uVar7 * 4) = *(iVar13 + 0x68);
                uVar6 = uVar7 + 1;
                (&stack0xffffffffffffffa0)[uVar7] = *(iVar13 + 0x6d);
            }
            noname_1 = swr_disconnect_port(*(iVar12 + 0x10),&stack0xffffffffffffffb8,uVar6,&stack0xffffffffffffffa8,
                                           &stack0xffffffffffffffa0);
            break;
        case 0x8012a18:
            puVar10 = iVar12 + 0x2a8;
            goto code_r0x08012ae4;
        case 0x8012a34:
            iVar4 = swr_set_device_group(*(iVar12 + 0x10),0);
            if ((iVar4 != 0) &&
               (iVar4 = ___ratelimit(obj.wsa884x_enable_swr_dac_port._rs,"wsa884x_enable_swr_dac_port"), iVar4 != 0))
            {
                _dev_err(*(iVar13 + -0xb8),"%s: set num ch failed\n","wsa884x_enable_swr_dac_port");
            }
            noname_1 = swr_slvdev_datapath_control(*(iVar12 + 0x10),*(*(iVar12 + 0x10) + 0x40),0);
            break;
        case 0x8012a74:
            goto code_r0x08012a74;
        }
        while( true ) {
            uVar5 = 0;
code_r0x08012a74:
            iVar12 = sp_el0;
            if (*(iVar12 + 0x5e0) == iStack_28) break;
            noname_1 = __stack_chk_fail(noname_1,uVar5);
            puVar10 = extraout_x8;
code_r0x08012ae4:
            Hint_Prefetch(puVar10,2,0,1);
            do {
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(puVar10,0x10);
                if (bVar2) {
                    *puVar10 = *puVar10 | 1;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
        }
        return;
    }
    uVar5 = 0xffffffea;
    goto code_r0x08012a74;
}


// ===== sym.wsa884x_spkr_event @ 0x08012b04 (size 512) =====

ulong sym.wsa884x_spkr_event(int64_t arg1,uchar noname_1 [16],uint32_t arg2)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    ulong uVar5;
    ulong uVar6;
    ulong uVar7;
    int iVar8;
    ulong *in_x18;
    int64_t arg1_00;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x28) + -0xd0;
    iVar9 = *(*(*(arg1 + 0x28) + -0xb8) + 0x98);
    if (arg2 == 4) {
        snd_soc_component_update_bits(arg1_00,0x3430,1,0);
        snd_soc_component_update_bits(arg1_00,0x348b,1,0);
        puVar1 = iVar9 + 0x2a8;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 & 0xfffffffffffffffe;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 & 0xfffffffffffffffb;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        *(iVar9 + 0xd0) = 0;
        return 0;
    }
    if (arg2 != 2) {
        return 0;
    }
    swr_slvdev_datapath_control(*(iVar9 + 0x10),*(*(iVar9 + 0x10) + 0x40),1);
    sym.wsa884x_set_gain_parameters(arg1_00);
    if (*(iVar9 + 0x74) == 0) {
        uVar5 = 0x34b0;
        uVar6 = 0xf0;
        uVar7 = 0xf0;
    }
    else {
        snd_soc_component_update_bits(arg1_00,0x34b0,0xf0,0x30);
        snd_soc_component_update_bits(arg1_00,0x341a,2,2);
        uVar5 = 0x304a;
        uVar6 = 8;
        uVar7 = 8;
    }
    snd_soc_component_update_bits(arg1_00,uVar5,uVar6,uVar7);
    if (*(iVar9 + 0x23) == '\0') {
        snd_soc_component_update_bits(arg1_00,0x3091,0x80,0x80);
        iVar8 = 0x54;
        if (*(iVar9 + 0xec) < 6) {
            iVar8 = 0x24;
        }
    }
    else {
        snd_soc_component_update_bits(arg1_00,0x3091,0x80,0);
        uVar4 = *(iVar9 + 0xe4) - 1;
        if (2 < uVar4) goto code_r0x08012c6c;
        iVar8 = uVar4 * -0x10 + 0x54;
    }
    snd_soc_component_update_bits(arg1_00,0x3091,0x7c,iVar8);
code_r0x08012c6c:
    swr_remove_from_group(*(iVar9 + 0x10),*(*(iVar9 + 0x10) + 0x40));
    if (((*(iVar9 + 0x2a8) >> 2 & 1) != 0) && (*(iVar9 + 0xd0) == 0)) {
        snd_soc_component_update_bits(arg1_00,0x3430,1,1);
    }
    return 0;
}


// ===== sym.wsa884x_swr_up @ 0x08012d04 (size 172) =====

void sym.wsa884x_swr_up(int64_t arg1)

{
    int iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = msm_cdc_pinctrl_select_active_state(*(arg1 + 200));
    if (iVar1 != 0) {
        iVar2 = ___ratelimit(obj.wsa884x_gpio_ctrl._rs,"wsa884x_gpio_ctrl");
        if (iVar2 != 0) {
            _dev_err(*(arg1 + 8),"%s: Failed to turn state %d; ret=%d\n","wsa884x_gpio_ctrl",1,iVar1);
        }
        iVar1 = ___ratelimit(obj.wsa884x_swr_up._rs,"wsa884x_swr_up");
        if (iVar1 != 0) {
            _dev_err(*(arg1 + 8),"%s: Failed to enable gpio\n","wsa884x_swr_up");
        }
    }
    return;
}


// ===== sym.wsa884x_swr_reset @ 0x08012db0 (size 344) =====

int64_t * sym.wsa884x_swr_reset(int64_t arg1)

{
    int iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t *arg3;
    int64_t *in_x3;
    uint uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    int64_t *piStack_108;
    uint64_t auStack_100 [2];
    uint uStack_f0;
    int64_t aiStack_e8 [5];
    uchar **ppuStack_c0;
    code *pcStack_b8;
    int64_t iStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t iStack_60;
    int64_t iStack_50;
    int64_t iStack_48;
    uchar auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    arg3 = auStack_3c;
    iVar7 = *(arg1 + 0x10);
    auStack_3c[0] = 0;
    iVar1 = swr_get_logical_dev_num(iVar7,*(iVar7 + 0x3d8));
    if (iVar1 != 0) {
        usleep_range_state(1000,0x44c,2);
        arg3 = auStack_3c;
        iVar1 = swr_get_logical_dev_num(iVar7,*(iVar7 + 0x3d8));
        if (iVar1 != 0) {
            usleep_range_state(1000,0x44c,2);
            arg3 = auStack_3c;
            iVar1 = swr_get_logical_dev_num(iVar7,*(iVar7 + 0x3d8));
            if (iVar1 != 0) {
                usleep_range_state(1000,0x44c,2);
                arg3 = auStack_3c;
                iVar1 = swr_get_logical_dev_num(iVar7,*(iVar7 + 0x3d8));
                if (iVar1 != 0) {
                    usleep_range_state(1000,0x44c,2);
                    arg3 = auStack_3c;
                    iVar1 = swr_get_logical_dev_num(iVar7,*(iVar7 + 0x3d8));
                    if (iVar1 != 0) {
                        usleep_range_state(1000,0x44c,2);
                        arg3 = auStack_3c;
                        swr_get_logical_dev_num(iVar7,*(iVar7 + 0x3d8));
                    }
                }
            }
        }
    }
    iVar8 = arg1 + 0x80;
    *(iVar7 + 0x40) = auStack_3c[0];
    mutex_lock(iVar8);
    regcache_mark_dirty(*arg1);
    regcache_sync(*arg1);
    piVar2 = mutex_unlock(iVar8);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return piVar2;
    }
    auVar9 = __stack_chk_fail();
    piVar2 = &iStack_80;
    *extraout_x18 = sym.codec_debug_read;
    pcStack_68 = sym.codec_debug_read;
    iVar5 = sp_el0;
    iStack_78 = *(iVar5 + 0x5e0);
    piVar3 = 0xffffffffffffffea;
    iStack_80 = 0;
    puStack_70 = &stack0xffffffffffffffd0;
    iStack_60 = iVar8;
    iStack_50 = iVar7;
    iStack_48 = arg1;
    if ((((auVar9._8_8_ != 0) && (auVar9._0_8_ != 0)) && (arg3 != NULL)) && (in_x3 != NULL)) {
        iVar7 = *(auVar9._0_8_ + 0xd8);
        if (((iVar7 == 0) || (iVar7 = *(iVar7 + 0xe0), iVar7 == 0)) || (*in_x3 < 0)) {
            piVar3 = 0xffffffffffffffea;
        }
        else {
            snprintf(&iStack_80,8,"0x%x\n",*(iVar7 + 0x240));
            uVar4 = strnlen(&iStack_80,7);
            piVar3 = simple_read_from_buffer(auVar9._8_8_,arg3,in_x3,&iStack_80,uVar4);
            arg3 = in_x3;
            in_x3 = piVar2;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_78) {
        return piVar3;
    }
    auVar9 = __stack_chk_fail(piVar3);
    *extraout_x18_00 = sym.codec_debug_peek_write;
    pcStack_b8 = sym.codec_debug_peek_write;
    iVar7 = sp_el0;
    aiStack_e8[4] = *(iVar7 + 0x5e0);
    piVar2 = 0xffffffffffffffea;
    aiStack_e8[2] = 0;
    aiStack_e8[3] = 0;
    aiStack_e8[0] = 0;
    aiStack_e8[1] = 0;
    uStack_f0 = 0;
    auStack_100[0] = 0;
    auStack_100[1] = 0;
    ppuStack_c0 = &puStack_70;
    if (((auVar9._8_8_ == 0) || (auVar9._0_8_ == 0)) || ((arg3 == NULL || (in_x3 == NULL)))) goto code_r0x08013118;
    iVar7 = *(auVar9._0_8_ + 0xd8);
    if ((iVar7 != 0) && (iVar8 = *(iVar7 + 0xe0), iVar8 != 0)) {
        piVar2 = 0xffffffffffffffea;
        if ((0x1f < arg3) || (*in_x3 < 0)) goto code_r0x08013118;
        __check_object_size(aiStack_e8,arg3,0);
        iVar1 = sym._copy_from_user(aiStack_e8,auVar9._8_8_,arg3);
        if (iVar1 != 0) {
            piVar2 = 0xfffffffffffffff2;
            goto code_r0x08013118;
        }
        *(aiStack_e8 + arg3) = 0;
        piStack_108 = aiStack_e8;
        iVar5 = strsep(&piStack_108,0x8001b76);
        if (iVar5 != 0) {
            uVar6 = 0x10;
            if ((*(iVar5 + 1) & 0xdf) != 0x58) {
                uVar6 = 10;
            }
            iVar1 = kstrtouint(iVar5,uVar6,auStack_100);
            if (iVar1 == 0) {
                strsep(&piStack_108,0x8001b76);
                if (auStack_100[0] < 0x200a) {
                    swr_read(iVar7,*(iVar7 + 0x40),auStack_100[0] & 0xffffffff,iVar8 + 0x240,1);
                    piVar2 = arg3;
                    goto code_r0x08013118;
                }
            }
        }
    }
    piVar2 = 0xffffffffffffffea;
code_r0x08013118:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == aiStack_e8[4]) {
        return piVar2;
    }
    auVar9 = __stack_chk_fail(piVar2);
    *(auVar9._8_8_ + 0xd8) = *(auVar9._0_8_ + 0x2d8);
    return NULL;
}


// ===== sym.codec_debug_read @ 0x08012f08 (size 224) =====

uint64_t sym.codec_debug_read(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t *piVar5;
    uint uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    int64_t *piStack_c8;
    uint64_t auStack_c0 [2];
    uint uStack_b0;
    int64_t aiStack_a8 [5];
    uchar *puStack_80;
    code *pcStack_78;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar5 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    uVar2 = 0xffffffffffffffea;
    iStack_40 = 0;
    if ((((arg2 != 0) && (arg1 != 0)) && (arg3 != 0)) && (arg4 != 0)) {
        if (((*(arg1 + 0xd8) == 0) || (iVar7 = *(*(arg1 + 0xd8) + 0xe0), iVar7 == 0)) || (*arg4 < 0)) {
            uVar2 = 0xffffffffffffffea;
        }
        else {
            snprintf(&iStack_40,8,"0x%x\n",*(iVar7 + 0x240));
            uVar3 = strnlen(&iStack_40,7);
            uVar2 = simple_read_from_buffer(arg2,arg3,arg4,&iStack_40,uVar3);
            arg3 = arg4;
            arg4 = piVar5;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    auVar9 = __stack_chk_fail(uVar2);
    *extraout_x18 = sym.codec_debug_peek_write;
    pcStack_78 = sym.codec_debug_peek_write;
    iVar7 = sp_el0;
    aiStack_a8[4] = *(iVar7 + 0x5e0);
    uVar2 = 0xffffffffffffffea;
    aiStack_a8[2] = 0;
    aiStack_a8[3] = 0;
    aiStack_a8[0] = 0;
    aiStack_a8[1] = 0;
    uStack_b0 = 0;
    auStack_c0[0] = 0;
    auStack_c0[1] = 0;
    puStack_80 = &stack0xffffffffffffffd0;
    if (((auVar9._8_8_ == 0) || (auVar9._0_8_ == 0)) || ((arg3 == 0 || (arg4 == NULL)))) goto code_r0x08013118;
    iVar7 = *(auVar9._0_8_ + 0xd8);
    if ((iVar7 != 0) && (iVar8 = *(iVar7 + 0xe0), iVar8 != 0)) {
        uVar2 = 0xffffffffffffffea;
        if ((0x1f < arg3) || (*arg4 < 0)) goto code_r0x08013118;
        __check_object_size(aiStack_a8,arg3,0);
        iVar1 = sym._copy_from_user(aiStack_a8,auVar9._8_8_,arg3);
        if (iVar1 != 0) {
            uVar2 = 0xfffffffffffffff2;
            goto code_r0x08013118;
        }
        *(aiStack_a8 + arg3) = 0;
        piStack_c8 = aiStack_a8;
        iVar4 = strsep(&piStack_c8,0x8001b76);
        if (iVar4 != 0) {
            uVar6 = 0x10;
            if ((*(iVar4 + 1) & 0xdf) != 0x58) {
                uVar6 = 10;
            }
            iVar1 = kstrtouint(iVar4,uVar6,auStack_c0);
            if (iVar1 == 0) {
                strsep(&piStack_c8,0x8001b76);
                if (auStack_c0[0] < 0x200a) {
                    swr_read(iVar7,*(iVar7 + 0x40),auStack_c0[0] & 0xffffffff,iVar8 + 0x240,1);
                    uVar2 = arg3;
                    goto code_r0x08013118;
                }
            }
        }
    }
    uVar2 = 0xffffffffffffffea;
code_r0x08013118:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == aiStack_a8[4]) {
        return uVar2;
    }
    auVar9 = __stack_chk_fail(uVar2);
    *(auVar9._8_8_ + 0xd8) = *(auVar9._0_8_ + 0x2d8);
    return 0;
}


// ===== sym.codec_debug_peek_write @ 0x08012fe8 (size 360) =====

int64_t sym.codec_debug_peek_write(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int64_t iVar2;
    uint uVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    int64_t *piStack_88;
    uint64_t auStack_80 [2];
    uint uStack_70;
    int64_t aiStack_68 [5];
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    aiStack_68[4] = *(iVar2 + 0x5e0);
    iVar2 = -0x16;
    aiStack_68[2] = 0;
    aiStack_68[3] = 0;
    aiStack_68[0] = 0;
    aiStack_68[1] = 0;
    uStack_70 = 0;
    auStack_80[0] = 0;
    auStack_80[1] = 0;
    if ((((arg2 == 0) || (arg1 == 0)) || (arg3 == 0)) || (arg4 == 0)) goto code_r0x08013118;
    iVar4 = *(arg1 + 0xd8);
    if ((iVar4 != 0) && (iVar5 = *(iVar4 + 0xe0), iVar5 != 0)) {
        iVar2 = -0x16;
        if ((0x1f < arg3) || (*arg4 < 0)) goto code_r0x08013118;
        __check_object_size(aiStack_68,arg3,0);
        iVar1 = sym._copy_from_user(aiStack_68,arg2,arg3);
        if (iVar1 != 0) {
            iVar2 = -0xe;
            goto code_r0x08013118;
        }
        *(aiStack_68 + arg3) = 0;
        piStack_88 = aiStack_68;
        iVar2 = strsep(&piStack_88,0x8001b76);
        if (iVar2 != 0) {
            uVar3 = 0x10;
            if ((*(iVar2 + 1) & 0xdf) != 0x58) {
                uVar3 = 10;
            }
            iVar1 = kstrtouint(iVar2,uVar3,auStack_80);
            if (iVar1 == 0) {
                strsep(&piStack_88,0x8001b76);
                if (auStack_80[0] < 0x200a) {
                    swr_read(iVar4,*(iVar4 + 0x40),auStack_80[0] & 0xffffffff,iVar5 + 0x240,1);
                    iVar2 = arg3;
                    goto code_r0x08013118;
                }
            }
        }
    }
    iVar2 = -0x16;
code_r0x08013118:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == aiStack_68[4]) {
        return iVar2;
    }
    auVar6 = __stack_chk_fail(iVar2);
    *(auVar6._8_8_ + 0xd8) = *(auVar6._0_8_ + 0x2d8);
    return 0;
}


// ===== sym.codec_debug_open @ 0x08013150 (size 24) =====

ulong sym.codec_debug_open(int64_t arg1,int64_t arg2)

{
    *(arg2 + 0xd8) = *(arg1 + 0x2d8);
    return 0;
}


// ===== sym._copy_from_user @ 0x08013168 (size 376) =====

int64_t sym._copy_from_user(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = sp_el0;
    uVar3 = (arg2 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar6 = arg2, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar6 = arg2 & uVar3;
    }
    bVar4 = CARRY8(uVar6,arg3);
    uVar6 = uVar6 + arg3;
    uVar1 = 0;
    if (!bVar4 || uVar6 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar6 = 0xffffffffffffffff;
    }
    iVar5 = arg3;
    if (!CARRY8(uVar6,~uVar1) && !CARRY8(uVar6 + ~uVar1,bVar4) || uVar6 == uVar1 + !bVar4) {
        if ((_snd_soc_info_enum_double >> 0x18 & 1) == 0) {
            uVar6 = daif;
            if ((uVar6 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar6;
        }
        if ((arg2 & uVar3 & 0xffffff8000000000) != 0) {
            arg2 = 0;
        }
        iVar5 = __arch_copy_from_user(arg1,arg2,arg3);
        if ((_snd_soc_info_enum_double >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar6 = daif;
                daif = uVar6 | 0xc0;
            }
            uVar6 = ttbr1_el1;
            ttbr0_el1 = (uVar6 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar6 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
    }
    if (iVar5 != 0) {
        memset(arg1 + (arg3 - iVar5),0,iVar5);
    }
    return iVar5;
}


// ===== sym.codec_debug_write @ 0x0801331c (size 408) =====

int64_t * sym.codec_debug_write(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    char *pcVar1;
    ulong *puVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    bool bVar5;
    int iVar6;
    uint32_t uVar7;
    int64_t *piVar8;
    int64_t iVar9;
    ulong uVar10;
    uint64_t uVar11;
    int64_t *piVar12;
    int64_t *in_x3;
    uint uVar13;
    uint64_t uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar15;
    int64_t *piVar16;
    uint32_t uVar17;
    int64_t *arg2_00;
    int64_t *piVar18;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar auVar19 [16];
    uint uStack_104;
    ulong uStack_100;
    ulong uStack_f8;
    uint uStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    int64_t *piStack_78;
    ulong uStack_70;
    ulong uStack_68;
    uint uStack_60;
    int64_t aiStack_58 [5];
    
    piVar18 = arg3;
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    aiStack_58[4] = *(iVar15 + 0x5e0);
    piVar8 = 0xffffffffffffffea;
    aiStack_58[2] = 0;
    aiStack_58[3] = 0;
    aiStack_58[0] = 0;
    aiStack_58[1] = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    piVar12 = piVar18;
    if ((((arg2 != 0) && (arg1 != 0)) && (in_x3 != NULL)) &&
       ((piVar8 = 0xffffffffffffffea, piVar18 < 0x20 && (iVar15 = *(arg1 + 0xd8), iVar15 != 0)))) {
        __check_object_size(aiStack_58,piVar18,0);
        iVar6 = sym._copy_from_user(aiStack_58,arg2,piVar18);
        if (iVar6 == 0) {
            *(aiStack_58 + piVar18) = '\0';
            piStack_78 = aiStack_58;
            iVar9 = strsep(&piStack_78,0x8001b76);
            if (iVar9 != 0) {
                piVar12 = &uStack_70;
                uVar13 = 0x10;
                if ((*(iVar9 + 1) & 0xdf) != 0x58) {
                    uVar13 = 10;
                }
                iVar6 = kstrtouint(iVar9,uVar13);
                if ((iVar6 == 0) && (iVar9 = strsep(&piStack_78,0x8001b76), iVar9 != 0)) {
                    piVar16 = &uStack_70 | 4;
                    uVar13 = 0x10;
                    if ((*(iVar9 + 1) & 0xdf) != 0x58) {
                        uVar13 = 10;
                    }
                    piVar12 = piVar16;
                    iVar6 = kstrtouint(iVar9,uVar13);
                    if (iVar6 == 0) {
                        strsep(&piStack_78,0x8001b76);
                        piVar12 = uStack_70 & 0xffffffff;
                        piVar8 = 0xffffffffffffffea;
                        if ((uStack_70 < 0x200a) && (uStack_70._4_4_ < 0x100)) {
                            swr_write(iVar15,*(iVar15 + 0x40));
                            piVar8 = piVar18;
                            in_x3 = piVar16;
                        }
                        goto code_r0x080133f8;
                    }
                }
            }
            piVar8 = 0xffffffffffffffea;
        }
        else {
            piVar8 = 0xfffffffffffffff2;
        }
    }
code_r0x080133f8:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == aiStack_58[4]) {
        return piVar8;
    }
    auVar19 = __stack_chk_fail(piVar8);
    *extraout_x18 = sym.codec_debug_dump;
    pcStack_d8 = sym.codec_debug_dump;
    iVar15 = sp_el0;
    piVar8 = 0xffffffffffffffea;
    iStack_e8 = *(iVar15 + 0x5e0);
    puStack_e0 = &stack0xffffffffffffffd0;
    if ((((auVar19._8_8_ != 0) && (auVar19._0_8_ != 0)) && (piVar12 != NULL)) && (in_x3 != NULL)) {
        iVar15 = *(auVar19._0_8_ + 0xd8);
        if ((iVar15 == 0) || (*in_x3 < 0)) {
            piVar8 = 0xffffffffffffffea;
        }
        else {
            uStack_104 = 0;
            iVar6 = *in_x3;
            uStack_f0 = 0;
            uStack_100 = 0;
            uStack_f8 = 0;
            piVar8 = NULL;
            if (iVar6 < 0x17d78) {
                piVar18 = piVar12 + -1;
                piVar8 = NULL;
                uVar17 = iVar6 / 0xc + 0x40;
                do {
                    piVar16 = piVar8;
                    if (((((((0x864 < uVar17 - 0xf36 >> 1) && (9 < uVar17 - 0xf26)) &&
                           ((0x19 < uVar17 - 0xf06 &&
                            (((0x8c7 < uVar17 - 0x638 && (199 < uVar17 - 0x538)) && (199 < uVar17 - 0x438)))))) &&
                          ((199 < uVar17 - 0x338 && (199 < uVar17 - 0x238)))) && (199 < uVar17 - 0x138)) &&
                        ((((uVar17 & 0xfffffff8) != 0x628 && ((uVar17 & 0xfffffef8) != 0x428)) &&
                         (((uVar17 & 0xfffffef8) != 0x228 &&
                          ((((((uVar17 & 0xfffffff8) != 0x128 && (0x19 < uVar17 - 0x606)) &&
                             (0x19 < (uVar17 & 0xfffffeff) - 0x406)) &&
                            ((0x19 < (uVar17 & 0xfffffeff) - 0x206 && (0x19 < uVar17 - 0x106)))) &&
                           (0xe < uVar17 - 0xf1)))))))) &&
                       (((0xe < uVar17 - 0xe1 && (0xe < uVar17 - 0xd1)) &&
                        ((6 < uVar17 - 0xc9 &&
                         ((((5 < uVar17 - 0xc2 && (0x4e < uVar17 - 0x71)) && (0xe < uVar17 - 0x61)) &&
                          (((9 < uVar17 - 0x56 && (2 < uVar17 - 0x47)) && (4 < uVar17 - 0x4b)))))))))) {
                        swr_read(iVar15,*(iVar15 + 0x40),uVar17,&uStack_104,1);
                        piVar12 = "0x%.3x: 0x%.2x\n";
                        uVar7 = snprintf(&uStack_100,0x14,"0x%.3x: 0x%.2x\n",uVar17,uStack_104);
                        if (uVar7 < 0) {
                            iVar6 = ___ratelimit(obj.swr_slave_reg_show._rs,"swr_slave_reg_show");
                            if (iVar6 != 0) {
                                uVar10 = 0x8001c32;
code_r0x080137d8:
                                _printk(uVar10,"swr_slave_reg_show");
                            }
                        }
                        else {
                            arg2_00 = uVar7;
                            piVar16 = piVar8 + arg2_00;
                            if (piVar18 <= piVar16) break;
                            noname_1 = __check_object_size(&uStack_100,arg2_00,1);
                            piVar12 = arg2_00;
                            iVar9 = sym._copy_to_user(auVar19._8_8_ + piVar8,noname_1,arg2_00);
                            if (iVar9 == 0) {
                                *in_x3 = *in_x3 + arg2_00;
                                goto code_r0x08013578;
                            }
                            iVar6 = ___ratelimit(obj.swr_slave_reg_show._rs.136,"swr_slave_reg_show");
                            if (iVar6 != 0) {
                                uVar10 = 0x80020bf;
                                goto code_r0x080137d8;
                            }
                        }
                        piVar8 = 0xfffffffffffffff2;
                        break;
                    }
code_r0x08013578:
                    bVar5 = uVar17 < 0x2009;
                    piVar8 = piVar16;
                    uVar17 = uVar17 + 1;
                } while (bVar5);
            }
            *in_x3 = 0x1806c;
        }
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_e8) {
        return piVar8;
    }
    uVar11 = __stack_chk_fail();
    *extraout_x18_00 = sym._copy_to_user;
    puVar2 = sp_el0;
    uVar4 = (uVar11 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar14 = uVar11, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar14 = uVar11 & uVar4;
    }
    bVar5 = CARRY8(uVar14,piVar12);
    pcVar1 = uVar14 + piVar12;
    uVar14 = 0;
    if (!bVar5 || pcVar1 == NULL) {
        uVar14 = 0x7fffffffff;
    }
    if (bVar5) {
        pcVar1 = 0xffffffffffffffff;
    }
    if (!CARRY8(pcVar1,~uVar14) && !CARRY8(pcVar1 + ~uVar14,bVar5) || pcVar1 == uVar14 + !bVar5) {
        if ((_snd_soc_info_enum_double >> 0x18 & 1) == 0) {
            uVar14 = daif;
            if ((uVar14 & 0x80) == 0) {
                uVar3 = daif;
                daif = uVar3 | 0xc0;
            }
            uVar3 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar3 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar14;
        }
        if ((uVar11 & uVar4 & 0xffffff8000000000) != 0) {
            uVar11 = 0;
        }
        piVar12 = __arch_copy_to_user(uVar11);
        if ((_snd_soc_info_enum_double >> 0x18 & 1) == 0) {
            uVar4 = daif;
            if ((uVar4 & 0x80) == 0) {
                uVar11 = daif;
                daif = uVar11 | 0xc0;
            }
            uVar11 = ttbr1_el1;
            ttbr0_el1 = (uVar11 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar11 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar4;
        }
    }
    return piVar12;
}


// ===== sym.codec_debug_dump @ 0x080134b4 (size 824) =====

char * sym.codec_debug_dump(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    bool bVar4;
    uint32_t uVar5;
    int iVar6;
    int64_t iVar7;
    ulong uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar11;
    uint32_t uVar12;
    char *arg2_00;
    char *pcVar13;
    char *pcVar14;
    char *pcVar15;
    ulong unaff_x30;
    uchar noname_1 [16];
    uint uStack_84;
    ulong uStack_80;
    ulong uStack_78;
    uint uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    pcVar14 = 0xffffffffffffffea;
    iStack_68 = *(iVar11 + 0x5e0);
    if ((((arg2 != 0) && (arg1 != 0)) && (arg3 != 0)) && (arg4 != 0)) {
        iVar11 = *(arg1 + 0xd8);
        if ((iVar11 == 0) || (*arg4 < 0)) {
            pcVar14 = 0xffffffffffffffea;
        }
        else {
            uStack_84 = 0;
            iVar6 = *arg4;
            uStack_70 = 0;
            uStack_80 = 0;
            uStack_78 = 0;
            pcVar14 = NULL;
            if (iVar6 < 0x17d78) {
                pcVar13 = arg3 - 1;
                pcVar14 = NULL;
                uVar12 = iVar6 / 0xc + 0x40;
                do {
                    pcVar15 = pcVar14;
                    if ((((((0x864 < uVar12 - 0xf36 >> 1) && (9 < uVar12 - 0xf26)) &&
                          ((0x19 < uVar12 - 0xf06 &&
                           (((0x8c7 < uVar12 - 0x638 && (199 < uVar12 - 0x538)) && (199 < uVar12 - 0x438)))))) &&
                         ((199 < uVar12 - 0x338 && (199 < uVar12 - 0x238)))) && (199 < uVar12 - 0x138)) &&
                       ((((((uVar12 & 0xfffffff8) != 0x628 && ((uVar12 & 0xfffffef8) != 0x428)) &&
                          (((uVar12 & 0xfffffef8) != 0x228 &&
                           ((((uVar12 & 0xfffffff8) != 0x128 && (0x19 < uVar12 - 0x606)) &&
                            (0x19 < (uVar12 & 0xfffffeff) - 0x406)))))) &&
                         (((0x19 < (uVar12 & 0xfffffeff) - 0x206 && (0x19 < uVar12 - 0x106)) &&
                          ((0xe < uVar12 - 0xf1 &&
                           (((0xe < uVar12 - 0xe1 && (0xe < uVar12 - 0xd1)) &&
                            ((6 < uVar12 - 0xc9 &&
                             ((((5 < uVar12 - 0xc2 && (0x4e < uVar12 - 0x71)) && (0xe < uVar12 - 0x61)) &&
                              ((9 < uVar12 - 0x56 && (2 < uVar12 - 0x47)))))))))))))) && (4 < uVar12 - 0x4b)))) {
                        swr_read(iVar11,*(iVar11 + 0x40),uVar12,&uStack_84,1);
                        arg3 = "0x%.3x: 0x%.2x\n";
                        uVar5 = snprintf(&uStack_80,0x14,"0x%.3x: 0x%.2x\n",uVar12,uStack_84);
                        if (uVar5 < 0) {
                            iVar6 = ___ratelimit(obj.swr_slave_reg_show._rs,"swr_slave_reg_show");
                            if (iVar6 != 0) {
                                uVar8 = 0x8001c32;
code_r0x080137d8:
                                _printk(uVar8,"swr_slave_reg_show");
                            }
                        }
                        else {
                            arg2_00 = uVar5;
                            pcVar15 = pcVar14 + arg2_00;
                            if (pcVar13 <= pcVar15) break;
                            noname_1 = __check_object_size(&uStack_80,arg2_00,1);
                            arg3 = arg2_00;
                            iVar7 = sym._copy_to_user(pcVar14 + arg2,noname_1,arg2_00);
                            if (iVar7 == 0) {
                                *arg4 = arg2_00 + *arg4;
                                goto code_r0x08013578;
                            }
                            iVar6 = ___ratelimit(obj.swr_slave_reg_show._rs.136,"swr_slave_reg_show");
                            if (iVar6 != 0) {
                                uVar8 = 0x80020bf;
                                goto code_r0x080137d8;
                            }
                        }
                        pcVar14 = 0xfffffffffffffff2;
                        break;
                    }
code_r0x08013578:
                    bVar4 = uVar12 < 0x2009;
                    pcVar14 = pcVar15;
                    uVar12 = uVar12 + 1;
                } while (bVar4);
            }
            *arg4 = 0x1806c;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_68) {
        return pcVar14;
    }
    uVar9 = __stack_chk_fail();
    *extraout_x18 = sym._copy_to_user;
    puVar1 = sp_el0;
    uVar3 = (uVar9 << 8) >> 8;
    if (((*(puVar1 + 0x3e) >> 5 & 1) != 0) || (uVar10 = uVar9, (*puVar1 >> 0x1a & 1) != 0)) {
        uVar10 = uVar9 & uVar3;
    }
    bVar4 = CARRY8(uVar10,arg3);
    pcVar14 = arg3 + uVar10;
    uVar10 = 0;
    if (!bVar4 || pcVar14 == NULL) {
        uVar10 = 0x7fffffffff;
    }
    if (bVar4) {
        pcVar14 = 0xffffffffffffffff;
    }
    if (!CARRY8(pcVar14,~uVar10) && !CARRY8(pcVar14 + ~uVar10,bVar4) || pcVar14 == uVar10 + !bVar4) {
        if ((_snd_soc_info_enum_double >> 0x18 & 1) == 0) {
            uVar10 = daif;
            if ((uVar10 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr1_el1 = puVar1[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar1[1];
            InstructionSynchronizationBarrier();
            daif = uVar10;
        }
        if ((uVar9 & uVar3 & 0xffffff8000000000) != 0) {
            uVar9 = 0;
        }
        arg3 = __arch_copy_to_user(uVar9);
        if ((_snd_soc_info_enum_double >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar9 = daif;
                daif = uVar9 | 0xc0;
            }
            uVar9 = ttbr1_el1;
            ttbr0_el1 = (uVar9 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar9 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
    }
    return arg3;
}


// ===== sym._copy_to_user @ 0x080137ec (size 312) =====

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
        if ((_snd_soc_info_enum_double >> 0x18 & 1) == 0) {
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
        if ((_snd_soc_info_enum_double >> 0x18 & 1) == 0) {
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


// ===== sym.wsa884x_swr_suspend @ 0x08013960 (size 236) =====

ulong sym.wsa884x_swr_suspend(int64_t arg1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg1 == 0) || (arg1 == 0x48)) || (iVar6 = *(arg1 + 0x98), iVar6 == 0)) {
        iVar4 = ___ratelimit(obj.wsa884x_swr_suspend._rs,"wsa884x_swr_suspend");
        if (iVar4 == 0) {
            uVar5 = 0xffffffea;
        }
        else {
            _dev_err(arg1,"%s: wsa884x private data is NULL\n","wsa884x_swr_suspend");
            uVar5 = 0xffffffea;
        }
    }
    else {
        if ((*(iVar6 + 0x25) != '\0') || (*(*(iVar6 + 0x18) + 0xd0) == 0)) {
            msm_cdc_set_supplies_lpm_mode(arg1,*(iVar6 + 0x2a0),*(iVar6 + 0x290),*(iVar6 + 0x298),1);
            puVar1 = iVar6 + 0x2a8;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = *puVar1 | 2;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
        }
        uVar5 = 0;
    }
    return uVar5;
}


// ===== sym.wsa884x_swr_resume @ 0x08013a4c (size 180) =====

ulong sym.wsa884x_swr_resume(int64_t arg1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg1 == 0) || (arg1 == 0x48)) || (iVar5 = *(arg1 + 0x98), iVar5 == 0)) {
        _dev_err(arg1,"%s: wsa884x private data is NULL\n","wsa884x_swr_resume");
        uVar4 = 0xffffffea;
    }
    else {
        if ((*(iVar5 + 0x2a8) >> 1 & 1) != 0) {
            puVar1 = iVar5 + 0x2a8;
            msm_cdc_set_supplies_lpm_mode(arg1,*(iVar5 + 0x2a0),*(iVar5 + 0x290),*(iVar5 + 0x298),0);
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = *puVar1 & 0xfffffffffffffffd;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
        }
        uVar4 = 0;
    }
    return uVar4;
}


// ===== sym.__cfi_check_fail @ 0x08013b00 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08013b44

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
    //switch table (4 cases) at 0x800192c
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8013b58);
    (*pcVar1)();
}


// ===== sym.wsa884x_writeable_register @ 0x08013b58 (size 64) =====

uint8_t sym.wsa884x_writeable_register(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    code *pcVar2;
    
    uVar1 = arg2 - 0x3000;
    if (arg2 < 0x3000 || uVar1 == 0) {
        return 0;
    }
    if (uVar1 >> 8 < 0x39) {
        return obj.wsa884x_reg_access[uVar1] >> 1 & 1;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8013b98);
    (*pcVar2)();
}


// ===== sym.wsa884x_readable_register @ 0x08013b98 (size 64) =====

uint8_t sym.wsa884x_readable_register(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    code *pcVar2;
    
    uVar1 = arg2 - 0x3000;
    if (arg2 < 0x3000 || uVar1 == 0) {
        return 0;
    }
    if (uVar1 >> 8 < 0x39) {
        return obj.wsa884x_reg_access[uVar1] & 1;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8013bd8);
    (*pcVar2)();
}


// ===== sym.wsa884x_volatile_register @ 0x08013bd8 (size 92) =====

bool sym.wsa884x_volatile_register(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    code *pcVar2;
    
    uVar1 = arg2 - 0x3000;
    if (arg2 < 0x3000 || uVar1 == 0) {
        return false;
    }
    if (arg2 >> 1 == 0x1a82) {
        return true;
    }
    if (uVar1 >> 8 < 0x39) {
        return (obj.wsa884x_reg_access[uVar1] & 3) == 1;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8013c34);
    (*pcVar2)();
}


// ===== sym.init_module @ 0x08013c9c (size 44) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    swr_driver_register(reloc.wsa884x_swr_probe.142cb795c700479f84f02afc5065e4d0.cfi_jt);
    return;
}


// ===== sym.cleanup_module @ 0x08013cc8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    swr_driver_unregister(reloc.wsa884x_swr_probe.142cb795c700479f84f02afc5065e4d0.cfi_jt);
    return;
}

