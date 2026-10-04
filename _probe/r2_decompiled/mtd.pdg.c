// decompiled from mtd by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08003000 (size 2388) =====

//WARNING: Switch with 1 destination removed at 0x08009034

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0xc3e13509d071e0c) {
        if (arg1 < -0x39ef1d24cf703a4c) {
            if (arg1 < -0x499c403454ed2d92) {
                if (arg1 < -0x60ced7460c6fa41e) {
                    if (arg1 == -0x78f20136afc5a16e) {
                        pcVar2 = sym.__typeid__ZTSFiP8mtd_infoxmPmPKhE_global_addr;
                        goto code_r0x080037d4;
                    }
                    if (arg1 == -0x66d421a09845f9f8) {
                        if ((pcVar1 + -0x8003bd0 >> 3 | pcVar1 << 0x3d) < 0x12) {
                            return;
                        }
                        goto code_r0x08008ff4;
                    }
                    if (arg1 != -0x65ce593ef89e6e2a) goto code_r0x08008ff4;
                    pcVar2 = sym.mtd_device_parse_register.cfi_jt;
                }
                else {
                    if (arg1 == -0x60ced7460c6fa41e) {
                        pcVar2 = sym.mtd_nvmem_reg_read.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt;
                        goto code_r0x080038dc;
                    }
                    if (arg1 == -0x57be845bca9148ef) {
                        pcVar2 = sym.mtd_cls_suspend.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt;
                        goto code_r0x08003890;
                    }
                    if (arg1 != -0x4d550c4a971d65c0) goto code_r0x08008ff4;
                    pcVar2 = sym.__typeid__ZTSFiP8mtd_infoxmPmPPvPyE_global_addr;
                }
            }
            else if (arg1 < -0x44133be2196283d5) {
                if (arg1 == -0x499c403454ed2d92) {
                    pcVar2 = sym.__typeid__ZTSFiP8mtd_infoxyE_global_addr;
code_r0x08003814:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 6) {
                        return;
                    }
                    goto code_r0x08008ff4;
                }
                if (arg1 == -0x492beb95bced154c) {
                    pcVar2 = sym.get_mtd_device_nm.cfi_jt;
                }
                else {
                    if (arg1 != -0x4500accba8a54334) goto code_r0x08008ff4;
                    pcVar2 = sym.mtd_get_device_size.cfi_jt;
                }
            }
            else {
                if (arg1 == -0x44133be2196283d5) {
                    pcVar2 = sym.__typeid__ZTSFiP8mtd_infoxmPmPhE_global_addr;
code_r0x08003904:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 4) {
                        return;
                    }
                    goto code_r0x08008ff4;
                }
                if (arg1 == -0x401bf0a69361dc14) {
                    pcVar2 = sym.register_mtd_user.cfi_jt;
                }
                else {
                    if (arg1 != -0x3dc6e196ad2d6503) goto code_r0x08008ff4;
                    pcVar2 = sym.__typeid__ZTSFvPK13mtd_partitioniE_global_addr;
                }
            }
        }
        else if (arg1 < -0x1369f607c8b83d49) {
            if (arg1 < -0x255c917435f526c2) {
                if (arg1 == -0x39ef1d24cf703a4c) {
                    pcVar2 = sym.__typeid__ZTSFiP8mtd_infomPmP8otp_infoE_global_addr;
                }
                else {
                    if (arg1 != -0x36ced3a227d9a3d4) {
                        if (arg1 != -0x3257ac40236d799f) goto code_r0x08008ff4;
                        pcVar2 = sym.__typeid__ZTSFvP8mtd_infoE_global_addr;
                        goto code_r0x080037d4;
                    }
                    pcVar2 = sym.__typeid__ZTSFiP8mtd_infoiP14mtd_oob_regionE_global_addr;
                }
                goto code_r0x08003890;
            }
            if (arg1 == -0x255c917435f526c2) {
                pcVar2 = sym.get_tree_mtd.cfi_jt;
            }
            else if (arg1 == -0x1fdd0579704d4f17) {
                pcVar2 = sym.mtd_get_unmapped_area.cfi_jt;
            }
            else {
                if (arg1 != -0x1d2ceb54c16b8369) goto code_r0x08008ff4;
                pcVar2 = sym.__mtd_next_device.cfi_jt;
            }
        }
        else if (arg1 < -0x630a0a2f6777274) {
            if (arg1 == -0x1369f607c8b83d49) {
                pcVar2 = sym.mtd_ooblayout_set_eccbytes.cfi_jt;
                goto code_r0x08003890;
            }
            if (arg1 != -0xcd9fdda2235437d) {
                if (arg1 != -0x8dc801903aca538) goto code_r0x08008ff4;
                pcVar2 = sym.mtdchar_open.18d6f106550e603ffb0308a8a3875dd9.cfi_jt;
code_r0x080037d4:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 5) {
                    return;
                }
                goto code_r0x08008ff4;
            }
            pcVar2 = sym.deregister_mtd_parser.cfi_jt;
        }
        else if (arg1 < 0x2b3a43e29242445) {
            if (arg1 != -0x630a0a2f6777274) {
                if (arg1 != -0x890743871a4a53) goto code_r0x08008ff4;
                pcVar2 = sym.mtdchar_unlocked_ioctl.18d6f106550e603ffb0308a8a3875dd9.cfi_jt;
code_r0x08003890:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08008ff4;
            }
            pcVar2 = sym.__typeid__ZTSFiP8mtd_infoiP16mtd_pairing_infoE_global_addr;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) {
                if (arg1 != 0x7ff5a213d37b1a6) goto code_r0x08008ff4;
                pcVar2 = sym.seq_read.cfi_jt;
                goto code_r0x08003890;
            }
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x5233d5bc7887ae44) {
        if (arg1 < 0x2480bad55fbac798) {
            if (arg1 < 0x185f1c46528bedc7) {
                if (arg1 == 0xc3e13509d071e0c) {
                    pcVar2 = sym.__typeid__ZTSFiP8mtd_infoxE_global_addr;
                    goto code_r0x080037d4;
                }
                if (arg1 == 0x16a3cf4792ed7de4) {
                    pcVar2 = sym.__typeid__ZTSFiP8mtd_infoPK4kvecmxPmE_global_addr;
                    goto code_r0x08003890;
                }
                if (arg1 != 0x16d387bf109c3f62) goto code_r0x08008ff4;
                pcVar2 = sym.kill_mtd_super.cfi_jt;
            }
            else if (arg1 == 0x185f1c46528bedc7) {
                pcVar2 = sym.__typeid__ZTSFiP8mtd_infoPK16mtd_pairing_infoE_global_addr;
            }
            else if (arg1 == 0x1d7ed092cb04d3f1) {
                pcVar2 = sym.mtdchar_write.18d6f106550e603ffb0308a8a3875dd9.cfi_jt;
            }
            else {
                if (arg1 != 0x1e3d0ffe3d0499e9) goto code_r0x08008ff4;
                pcVar2 = sym.mtd_bitflip_threshold_store.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt;
            }
        }
        else if (arg1 < 0x2e6ec5d257fdbb05) {
            if (arg1 != 0x2480bad55fbac798) {
                if (arg1 != 0x28961f2c4151831b) {
                    if (arg1 != 0x2c870642b6445e97) goto code_r0x08008ff4;
                    pcVar2 = sym.__typeid__ZTSFiP8mtd_infoE_global_addr;
                    goto code_r0x08003814;
                }
                pcVar2 = sym.__typeid__ZTSFiP8mtd_infoP10erase_infoE_global_addr;
                goto code_r0x08003890;
            }
            pcVar2 = sym.mtd_kmalloc_up_to.cfi_jt;
        }
        else if (arg1 < 0x379d36f049eb9a81) {
            if (arg1 != 0x2e6ec5d257fdbb05) {
                if (arg1 != 0x321969b888d4949e) goto code_r0x08008ff4;
                pcVar2 = sym.mtdchar_lseek.18d6f106550e603ffb0308a8a3875dd9.cfi_jt;
                goto code_r0x08003890;
            }
            pcVar2 = sym.mtd_ooblayout_find_eccregion.cfi_jt;
        }
        else {
            if (arg1 != 0x379d36f049eb9a81) {
                if (arg1 != 0x38a5cf1b120bf637) goto code_r0x08008ff4;
                pcVar2 = sym.__typeid__ZTSFiP8mtd_infoxP11mtd_oob_opsE_global_addr;
                goto code_r0x08003904;
            }
            pcVar2 = sym.mtdchar_mmap.18d6f106550e603ffb0308a8a3875dd9.cfi_jt;
        }
    }
    else if (arg1 < 0x698bc01d8a1eb827) {
        if (arg1 < 0x5a1f01aca03a138f) {
            if (arg1 == 0x5233d5bc7887ae44) {
                pcVar2 = sym.mtd_proc_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt;
code_r0x080038dc:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                    return;
                }
                goto code_r0x08008ff4;
            }
            if (arg1 == 0x55812c4fb5df5b0c) {
                pcVar2 = sym.unregister_mtd_user.cfi_jt;
            }
            else {
                if (arg1 != 0x58fd56e9ed505728) goto code_r0x08008ff4;
                pcVar2 = sym.mtd_add_partition.cfi_jt;
            }
        }
        else {
            if (arg1 == 0x5a1f01aca03a138f) {
                pcVar2 = sym.__typeid__ZTSFiP8mtd_infoxmE_global_addr;
                goto code_r0x080038dc;
            }
            if (arg1 == 0x5b83a3fd302a5421) {
                pcVar2 = sym.mtd_release.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt;
            }
            else {
                if (arg1 != 0x66d7bfc42c473eb2) goto code_r0x08008ff4;
                pcVar2 = sym.mtd_del_partition.cfi_jt;
            }
        }
    }
    else if (arg1 < 0x7673499bada601a4) {
        if (arg1 == 0x698bc01d8a1eb827) {
            pcVar2 = sym.__typeid__ZTSFiP11super_blockP10fs_contextE_global_addr;
            goto code_r0x08003890;
        }
        if (arg1 == 0x6dbda7d9e5b0f185) {
            pcVar2 = sym.__register_mtd_parser.cfi_jt;
        }
        else {
            if (arg1 != 0x721d2f20ebbd87fe) goto code_r0x08008ff4;
            pcVar2 = sym.mtd_concat_create.cfi_jt;
        }
    }
    else if (arg1 < 0x7d57972cd3914fb1) {
        if (arg1 != 0x7673499bada601a4) {
            if (arg1 != 0x7be3fbeecff5d919) goto code_r0x08008ff4;
            pcVar2 = sym.mtd_ooblayout_get_databytes.cfi_jt;
            goto code_r0x08003890;
        }
        pcVar2 = sym.get_mtd_device.cfi_jt;
    }
    else if (arg1 == 0x7d57972cd3914fb1) {
        pcVar2 = sym.mtd_reboot_notifier.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08008ff4;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08008ff4:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8009048);
    (*pcVar1)();
}


// ===== sym.__mtd_next_device.cfi_jt @ 0x08003960 (size 8) =====

ulong sym.__mtd_next_device.cfi_jt(uint param_1,ulong param_2,int *param_3)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    int iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int *piVar8;
    code *pcVar9;
    int iVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar11 [16];
    uint uStack_1c;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_18 = *(iVar3 + 0x5e0);
    uStack_1c = param_1;
    uVar4 = idr_get_next(obj.mtd_idr,&uStack_1c);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_18) {
        return uVar4;
    }
    auVar11 = __stack_chk_fail();
    uVar6 = auVar11._8_8_;
    *extraout_x18 = sym.mtd_wunit_to_pairing_info;
    iVar3 = auVar11._0_8_;
    do {
        iVar7 = iVar3;
        iVar3 = *(iVar7 + 0x568);
    } while (*(iVar7 + 0x568) != 0);
    piVar8 = *(iVar7 + 0x50);
    iVar5 = auVar11._8_4_;
    if (piVar8 == NULL) {
        iVar10 = 1;
    }
    else {
        iVar10 = *piVar8;
        if (iVar10 == 0) {
            iVar10 = 1;
        }
    }
    if (-1 < iVar5) {
        uVar2 = 0;
        if (*(iVar7 + 0x14) != 0) {
            uVar2 = *(iVar7 + 0x10) / *(iVar7 + 0x14);
        }
        iVar1 = 0;
        if (iVar10 != 0) {
            iVar1 = uVar2 / iVar10;
        }
        if (iVar5 < iVar1) {
            if ((piVar8 != NULL) && (pcVar9 = *(piVar8 + 2), pcVar9 != NULL)) {
                if (pcVar9 != sym.__typeid__ZTSFiP8mtd_infoiP16mtd_pairing_infoE_global_addr) {
                    __cfi_slowpath_diag(0xf9cf5f5d09888d8c,pcVar9,0x8000be0);
                    uVar6 = uVar6 & 0xffffffff;
                }
                uVar4 = (*pcVar9)(iVar7,uVar6);
                return uVar4;
            }
            *param_3 = iVar5;
            param_3[1] = 0;
            return 0;
        }
    }
    return 0xffffffea;
}


// ===== sym.get_mtd_device.cfi_jt @ 0x08003968 (size 8) =====

code * sym.get_mtd_device.cfi_jt(code *param_1,int param_2)

{
    int64_t iVar1;
    code *pcVar2;
    code *pcVar3;
    uint32_t uVar4;
    code *pcVar5;
    uint64_t uVar6;
    ulong *in_x18;
    code *pcVar7;
    code *unaff_x21;
    ulong unaff_x30;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    mutex_lock(obj.dfs_dir_mtd);
    if (param_2 == -1) {
        iStack_3c = 0;
        pcVar5 = idr_get_next(obj.mtd_idr,&iStack_3c);
        while (pcVar5 != NULL) {
            if (pcVar5 == param_1) {
                pcVar5 = param_1;
                pcVar7 = param_1;
                if (param_1 != NULL) goto code_r0x080050a4;
                break;
            }
            iStack_3c = *(pcVar5 + 0x40) + 1;
            pcVar5 = idr_get_next(obj.mtd_idr,&iStack_3c);
        }
    }
    else if ((-1 < param_2) &&
            (((pcVar5 = idr_find(obj.mtd_idr,param_2), param_1 == NULL || (pcVar5 == param_1)) &&
             (pcVar7 = pcVar5, pcVar5 != NULL)))) {
code_r0x080050a4:
        do {
            unaff_x21 = pcVar5;
            pcVar5 = *(unaff_x21 + 0x568);
        } while (*(unaff_x21 + 0x568) != NULL);
        uVar6 = try_module_get(*(unaff_x21 + 0x198));
        if ((uVar6 & 1) != 0) {
            param_1 = *(unaff_x21 + 0x148);
            if (param_1 == NULL) goto code_r0x08005140;
            if (5 < (param_1 + -0x8003b40 >> 3 | param_1 << 0x3d)) goto code_r0x0800517c;
            goto code_r0x080050dc;
        }
    }
    pcVar7 = 0xffffffffffffffed;
    while( true ) {
        mutex_unlock(obj.dfs_dir_mtd);
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iStack_38) break;
        __stack_chk_fail();
code_r0x0800517c:
        __cfi_slowpath_diag(0x2c870642b6445e97,param_1,0x8000ca0);
code_r0x080050dc:
        uVar4 = (*param_1)(pcVar7);
        if (uVar4 == 0) {
code_r0x08005140:
            *(unaff_x21 + 0x530) = *(unaff_x21 + 0x530) + 1;
            pcVar3 = *(pcVar7 + 0x568);
            pcVar5 = pcVar7;
            while (pcVar2 = pcVar3, pcVar2 != NULL) {
                *(pcVar5 + 0x530) = *(pcVar5 + 0x530) + 1;
                pcVar5 = pcVar2;
                pcVar3 = *(pcVar2 + 0x568);
            }
        }
        else {
            param_1 = uVar4;
            module_put(*(unaff_x21 + 0x198));
            pcVar7 = uVar4;
        }
    }
    return pcVar7;
}


// ===== sym.mtd_concat_create.cfi_jt @ 0x08003970 (size 8) =====

char * sym.mtd_concat_create.cfi_jt(int64_t *param_1,uint64_t param_2,ulong param_3)

{
    int64_t *piVar1;
    uint32_t uVar2;
    uint uVar3;
    char cVar4;
    uchar auVar5 [16];
    char *pcVar6;
    char *pcVar7;
    int64_t *piVar8;
    uint32_t uVar9;
    ulong uVar10;
    char *pcVar11;
    int64_t iVar12;
    uint64_t uVar13;
    uint32_t *puVar14;
    int64_t iVar15;
    uint32_t uVar16;
    uint32_t uVar17;
    char *pcVar18;
    int64_t iVar19;
    uint32_t uVar20;
    int64_t iVar21;
    int64_t iVar22;
    int64_t iVar23;
    ulong *in_x18;
    uint64_t uVar24;
    int iVar25;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8001504);
    iVar25 = param_2;
    if (0 < iVar25) {
        uVar24 = 0;
        do {
            _printk(0x800186c,uVar24 & 0xffffffff,*(param_1[uVar24] + 0x38));
            uVar24 = uVar24 + 1;
        } while ((param_2 & 0xffffffff) != uVar24);
    }
    _printk(0x800133a,param_3);
    pcVar7 = __kmalloc((-((param_2 & 0xffffffff) >> 0x1f) & 0xfffffff800000000 | (param_2 & 0xffffffff) << 3) + 0x620,
                       0xdc0);
    if (pcVar7 == NULL) {
        _printk("memory allocation error while creating concatenated device \"%s\"\n",param_3);
        return NULL;
    }
    pcVar11 = *param_1;
    *(pcVar7 + 0x618) = pcVar7 + 0x620;
    cVar4 = *pcVar11;
    *pcVar7 = cVar4;
    uVar9 = *(pcVar11 + 4);
    *(pcVar7 + 4) = uVar9;
    *(pcVar7 + 8) = *(pcVar11 + 8);
    *(pcVar7 + 0x10) = *(pcVar11 + 0x10);
    *(pcVar7 + 0x14) = *(pcVar11 + 0x14);
    if (iVar25 < 1) {
        uVar16 = 0;
    }
    else {
        if (iVar25 == 1) {
            uVar13 = 0;
            uVar16 = 0;
        }
        else {
            uVar13 = param_2 & 0xfffffffe;
            piVar8 = param_1 + 1;
            uVar24 = uVar13;
            uVar17 = 0;
            uVar20 = 0;
            do {
                piVar1 = piVar8 + -1;
                iVar12 = *piVar8;
                piVar8 = piVar8 + 2;
                uVar16 = *(*piVar1 + 0x18);
                if (*(*piVar1 + 0x18) <= uVar17) {
                    uVar16 = uVar17;
                }
                uVar2 = *(iVar12 + 0x18);
                if (*(iVar12 + 0x18) <= uVar20) {
                    uVar2 = uVar20;
                }
                uVar24 = uVar24 - 2;
                uVar17 = uVar16;
                uVar20 = uVar2;
            } while (uVar24 != 0);
            if (uVar16 <= uVar2) {
                uVar16 = uVar2;
            }
            if (uVar13 == (param_2 & 0xffffffff)) goto code_r0x08009634;
        }
        iVar12 = (param_2 & 0xffffffff) - uVar13;
        piVar8 = param_1 + uVar13;
        uVar17 = uVar16;
        do {
            uVar16 = *(*piVar8 + 0x18);
            if (*(*piVar8 + 0x18) <= uVar17) {
                uVar16 = uVar17;
            }
            iVar12 = iVar12 + -1;
            piVar8 = piVar8 + 1;
            uVar17 = uVar16;
        } while (iVar12 != 0);
    }
code_r0x08009634:
    iVar12 = *param_1;
    *(pcVar7 + 0x18) = uVar16;
    *(pcVar7 + 0x188) = *(iVar12 + 0x188);
    *(pcVar7 + 0x1c) = *(iVar12 + 0x1c);
    *(pcVar7 + 0x20) = *(iVar12 + 0x20);
    do {
        iVar15 = iVar12;
        iVar12 = *(iVar15 + 0x568);
    } while (*(iVar15 + 0x568) != 0);
    if (*(iVar15 + 0xe8) != 0) {
        *(pcVar7 + 0xe8) = sym.concat_writev.8f101c1e8640207a5ff62187927e46fd.cfi_jt;
    }
    if (*(iVar15 + 0xa0) != 0) {
        *(pcVar7 + 0xa0) = sym.concat_read_oob.8f101c1e8640207a5ff62187927e46fd.cfi_jt;
    }
    if (*(iVar15 + 0xa8) != 0) {
        *(pcVar7 + 0xa8) = sym.concat_write_oob.8f101c1e8640207a5ff62187927e46fd.cfi_jt;
    }
    if (*(iVar15 + 0x118) != 0) {
        *(pcVar7 + 0x118) = sym.__typeid__ZTSFiP8mtd_infoxE_global_addr;
    }
    if (*(iVar15 + 0x120) != 0) {
        *(pcVar7 + 0x120) = sym.concat_block_markbad.8f101c1e8640207a5ff62187927e46fd.cfi_jt;
    }
    if (*(iVar15 + 0x98) != 0) {
        *(pcVar7 + 0x98) = sym.concat_panic_write.8f101c1e8640207a5ff62187927e46fd.cfi_jt;
    }
    if (*(iVar15 + 0x88) != 0) {
        *(pcVar7 + 0x88) = sym.concat_read.8f101c1e8640207a5ff62187927e46fd.cfi_jt;
    }
    if (*(iVar15 + 0x90) != 0) {
        *(pcVar7 + 0x90) = sym.concat_write.8f101c1e8640207a5ff62187927e46fd.cfi_jt;
    }
    uVar3 = *(*param_1 + 0x180);
    *(pcVar7 + 0x620) = *param_1;
    *(pcVar7 + 0x180) = uVar3;
    if (iVar25 < 2) {
code_r0x08009834:
        iVar12 = *param_1;
        uVar10 = *(iVar12 + 0x48);
        *(pcVar7 + 0x610) = iVar25;
        *(pcVar7 + 0x70) = sym.__typeid__ZTSFiP8mtd_infoP10erase_infoE_global_addr;
        *(pcVar7 + 0x38) = param_3;
        *(pcVar7 + 0x48) = uVar10;
        *(pcVar7 + 0xf0) = sym.__typeid__ZTSFvP8mtd_infoE_global_addr;
        *(pcVar7 + 0xf8) = sym.concat_lock.8f101c1e8640207a5ff62187927e46fd.cfi_jt;
        *(pcVar7 + 0x100) = sym.concat_unlock.8f101c1e8640207a5ff62187927e46fd.cfi_jt;
        *(pcVar7 + 0x108) = sym.concat_is_locked.8f101c1e8640207a5ff62187927e46fd.cfi_jt;
        *(pcVar7 + 0x130) = sym.concat_suspend.8f101c1e8640207a5ff62187927e46fd.cfi_jt;
        *(pcVar7 + 0x138) = sym.concat_resume.8f101c1e8640207a5ff62187927e46fd.cfi_jt;
        uVar9 = *(iVar12 + 0x10);
        uVar16 = uVar9;
        if (0 < iVar25) {
            uVar24 = 0;
            iVar25 = 1;
            uVar17 = *(iVar12 + 0x60);
            if (uVar17 == 0) goto code_r0x080098ec;
            do {
                uVar13 = uVar17;
                if (0 < uVar17) {
                    puVar14 = *(iVar12 + 0x68) + 8;
                    do {
                        uVar20 = *puVar14;
                        uVar17 = uVar20;
                        if (uVar20 <= uVar9) {
                            uVar17 = uVar9;
                        }
                        if (uVar20 != uVar16) {
                            iVar25 = iVar25 + 1;
                            uVar9 = uVar17;
                        }
                        uVar13 = uVar13 - 1;
                        puVar14 = puVar14 + 6;
                        uVar16 = uVar20;
                    } while (uVar13 != 0);
                }
                while( true ) {
                    uVar24 = uVar24 + 1;
                    if (uVar24 == (param_2 & 0xffffffff)) {
                        if (iVar25 == 1) goto code_r0x08009a5c;
                        *(pcVar7 + 0x10) = uVar9;
                        auVar5._8_8_ = 0;
                        auVar5._0_8_ = iVar25;
                        *(pcVar7 + 0x60) = iVar25;
                        if (SUB168(auVar5 * ZEXT816(0x18),8) == 0) {
                            piVar8 = __kmalloc((iVar25 + iVar25 * 2) * 8,0xcc0);
                            *(pcVar7 + 0x68) = piVar8;
                            if (piVar8 != NULL) {
                                iVar19 = *param_1;
                                uVar24 = 0;
                                iVar12 = 0;
                                iVar15 = 0;
                                uVar9 = *(iVar19 + 0x10);
                                iVar25 = *(iVar19 + 0x60);
                                if (iVar25 == 0) goto code_r0x08009a04;
                                do {
                                    if (0 < iVar25) {
                                        iVar21 = 0;
                                        iVar22 = 0;
                                        do {
                                            iVar23 = *(iVar19 + 0x68);
                                            if (*(iVar23 + iVar21 + 8) != uVar9) {
                                                *piVar8 = iVar15;
                                                uVar3 = 0;
                                                if (uVar9 != 0) {
                                                    uVar3 = (iVar12 - iVar15) / uVar9;
                                                }
                                                *(piVar8 + 1) = uVar9;
                                                *(piVar8 + 0xc) = uVar3;
                                                piVar8 = piVar8 + 3;
                                                iVar19 = param_1[uVar24];
                                                iVar23 = *(iVar19 + 0x68);
                                                uVar9 = *(iVar23 + iVar21 + 8);
                                                iVar15 = iVar12;
                                            }
                                            iVar23 = iVar23 + iVar21;
                                            iVar22 = iVar22 + 1;
                                            iVar21 = iVar21 + 0x18;
                                            iVar12 = iVar12 + *(iVar23 + 0xc) * uVar9;
                                        } while (iVar22 < *(iVar19 + 0x60));
                                    }
                                    while( true ) {
                                        uVar24 = uVar24 + 1;
                                        if (uVar24 == (param_2 & 0xffffffff)) {
                                            *piVar8 = iVar15;
                                            uVar3 = 0;
                                            if (uVar9 != 0) {
                                                uVar3 = (iVar12 - iVar15) / uVar9;
                                            }
                                            *(piVar8 + 1) = uVar9;
                                            *(piVar8 + 0xc) = uVar3;
                                            return pcVar7;
                                        }
                                        iVar19 = param_1[uVar24];
                                        iVar25 = *(iVar19 + 0x60);
                                        if (iVar25 != 0) break;
code_r0x08009a04:
                                        if (*(iVar19 + 0x10) != uVar9) {
                                            *piVar8 = iVar15;
                                            uVar3 = 0;
                                            if (uVar9 != 0) {
                                                uVar3 = (iVar12 - iVar15) / uVar9;
                                            }
                                            *(piVar8 + 1) = uVar9;
                                            *(piVar8 + 0xc) = uVar3;
                                            piVar8 = piVar8 + 3;
                                            iVar19 = param_1[uVar24];
                                            uVar9 = *(iVar19 + 0x10);
                                            iVar15 = iVar12;
                                        }
                                        iVar12 = *(iVar19 + 8) + iVar12;
                                    }
                                } while( true );
                            }
                        }
                        else {
                            pcVar7[0x68] = '\0';
                            pcVar7[0x69] = '\0';
                            pcVar7[0x6a] = '\0';
                            pcVar7[0x6b] = '\0';
                            pcVar7[0x6c] = '\0';
                            pcVar7[0x6d] = '\0';
                            pcVar7[0x6e] = '\0';
                            pcVar7[0x6f] = '\0';
                        }
                        kfree(pcVar7);
                        pcVar7 = "memory allocation error while creating erase region list for device \"%s\"\n";
                        goto code_r0x08009b00;
                    }
                    iVar12 = param_1[uVar24];
                    uVar17 = *(iVar12 + 0x60);
                    if (uVar17 != 0) break;
code_r0x080098ec:
                    uVar20 = *(iVar12 + 0x10);
                    uVar17 = uVar20;
                    if (uVar20 <= uVar9) {
                        uVar17 = uVar9;
                    }
                    if (uVar20 != uVar16) {
                        iVar25 = iVar25 + 1;
                        uVar9 = uVar17;
                        uVar16 = uVar20;
                    }
                }
            } while( true );
        }
code_r0x08009a5c:
        *(pcVar7 + 0x10) = uVar16;
        pcVar7[0x60] = '\0';
        pcVar7[0x61] = '\0';
        pcVar7[0x62] = '\0';
        pcVar7[99] = '\0';
    }
    else {
        piVar8 = param_1 + 1;
        pcVar11 = *piVar8;
        if (cVar4 == *pcVar11) {
            uVar24 = 1;
            while( true ) {
                uVar16 = *(pcVar11 + 4);
                pcVar6 = pcVar11;
                if (uVar9 != uVar16) {
                    if (((uVar16 ^ uVar9) & 0xfffffbff) != 0) {
                        kfree(pcVar7);
                        pcVar7 = "Incompatible device flags on \"%s\"\n";
                        param_3 = *(*piVar8 + 0x38);
                        goto code_r0x08009b00;
                    }
                    pcVar11 = *piVar8;
                    *(pcVar7 + 4) = uVar16 & 0x400 | uVar9;
                    pcVar6 = pcVar11;
                }
                do {
                    pcVar18 = pcVar6;
                    pcVar6 = *(pcVar18 + 0x568);
                } while (*(pcVar18 + 0x568) != NULL);
                iVar12 = *piVar8;
                *(pcVar7 + 8) = *(pcVar7 + 8) + *(pcVar11 + 8);
                *(pcVar7 + 0x180) = *(pcVar7 + 0x180) + *(iVar12 + 0x180);
                if ((((*(pcVar7 + 0x14) != *(iVar12 + 0x14)) || (*(pcVar7 + 0x188) != *(iVar12 + 0x188))) ||
                    (*(pcVar7 + 0x1c) != *(iVar12 + 0x1c))) ||
                   (((*(pcVar7 + 0xa0) != 0) == (*(pcVar18 + 0xa0) == 0) ||
                    ((*(pcVar7 + 0xa8) != 0) == (*(pcVar18 + 0xa8) == 0))))) {
                    kfree(pcVar7);
                    pcVar7 = "Incompatible OOB or ECC data on \"%s\"\n";
                    param_3 = *(*piVar8 + 0x38);
                    goto code_r0x08009b00;
                }
                *(*(pcVar7 + 0x618) + uVar24 * 8) = iVar12;
                uVar24 = uVar24 + 1;
                if (uVar24 == (param_2 & 0xffffffff)) goto code_r0x08009834;
                piVar8 = param_1 + uVar24;
                pcVar11 = *piVar8;
                if (*pcVar7 != *pcVar11) break;
                uVar9 = *(pcVar7 + 4);
            }
        }
        kfree(pcVar7);
        pcVar7 = "Incompatible device type on \"%s\"\n";
        param_3 = *(*piVar8 + 0x38);
code_r0x08009b00:
        _printk(pcVar7,param_3);
        pcVar7 = NULL;
    }
    return pcVar7;
}


// ===== sym.deregister_mtd_parser.cfi_jt @ 0x08003978 (size 8) =====

void sym.deregister_mtd_parser.cfi_jt(int64_t *param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(obj.part_parser_lock);
    uVar3 = __list_del_entry_valid(param_1);
    if ((uVar3 & 1) != 0) {
        iVar1 = *param_1;
        piVar2 = param_1[1];
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    *param_1 = -0x2152ffffffffff00;
    param_1[1] = -0x2152fffffffffede;
    _raw_spin_unlock(obj.part_parser_lock);
    return;
}


// ===== sym.mtd_get_device_size.cfi_jt @ 0x08003980 (size 8) =====

ulong sym.mtd_get_device_size.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    
    do {
        iVar1 = param_1;
        param_1 = *(iVar1 + 0x568);
    } while (param_1 != 0);
    return *(iVar1 + 8);
}


// ===== sym.__typeid__ZTSFiP8mtd_infoPK4kvecmxPmE_global_addr @ 0x08003988 (size 8) =====

void sym.__typeid__ZTSFiP8mtd_infoPK4kvecmxPmE_global_addr
               (int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,int64_t *param_5)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    code *unaff_x23;
    int64_t *piVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    ulong uStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    iVar4 = param_1;
    do {
        iVar3 = iVar4;
        iVar4 = *(iVar3 + 0x568);
    } while (*(iVar3 + 0x568) != 0);
    *param_5 = 0;
    if ((*(param_1 + 5) >> 2 & 1) == 0) {
        uVar2 = 0xffffffe2;
    }
    else {
        unaff_x23 = *(iVar3 + 0xe8);
        if (unaff_x23 != NULL) {
            if (1 < (unaff_x23 + -0x8003988 >> 3 | unaff_x23 << 0x3d)) goto code_r0x0800826c;
            iVar4 = *(param_1 + 0x568);
            if (iVar4 == 0) goto code_r0x080081b4;
            goto code_r0x0800819c;
        }
        unaff_x23 = NULL;
        if (param_3 != 0) {
            piVar5 = param_2 + 8;
            do {
                if (*piVar5 != 0) {
                    iStack_58 = piVar5[-1];
                    uStack_68 = 0;
                    uStack_60 = 0;
                    iStack_78 = 0;
                    uStack_70 = 0;
                    uStack_88 = 0;
                    uStack_50 = 0;
                    iStack_80 = *piVar5;
                    uVar2 = sym.mtd_write_oob(param_1,param_4,&uStack_88);
                    unaff_x23 = unaff_x23 + iStack_78;
                    if (uVar2 != 0) goto code_r0x08008230;
                    if (iStack_78 != *piVar5) break;
                    param_4 = iStack_78 + param_4;
                }
                param_3 = param_3 + -1;
                piVar5 = piVar5 + 2;
            } while (param_3 != 0);
        }
        uVar2 = 0;
code_r0x08008230:
        *param_5 = unaff_x23;
    }
    while (iVar4 = sp_el0, *(iVar4 + 0x5e0) != iStack_48) {
        auVar6 = __stack_chk_fail(uVar2);
        param_2 = auVar6._8_8_;
        iVar3 = auVar6._0_8_;
code_r0x0800826c:
        __cfi_slowpath_diag(0x16a3cf4792ed7de4,unaff_x23,0x8000f40);
        iVar1 = *(param_1 + 0x568);
        while (iVar4 = iVar1, iVar4 != 0) {
code_r0x0800819c:
            param_4 = *(param_1 + 0x590) + param_4;
            param_1 = iVar4;
            iVar1 = *(iVar4 + 0x568);
        }
code_r0x080081b4:
        uVar2 = (*unaff_x23)(iVar3,param_2,param_3,param_4,param_5);
    }
    return;
}


// ===== sym.concat_writev.8f101c1e8640207a5ff62187927e46fd.cfi_jt @ 0x08003990 (size 8) =====

uint64_t sym.concat_writev.8f101c1e8640207a5ff62187927e46fd.cfi_jt
                   (int64_t param_1,int64_t param_2,int64_t *param_3,uint64_t param_4,int64_t *param_5)

{
    uint64_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t *piVar7;
    uint64_t uVar8;
    int64_t *piVar9;
    uint64_t uVar10;
    uint64_t *puVar11;
    int64_t iVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t *unaff_x19;
    int64_t *piVar13;
    uint32_t uVar14;
    int64_t unaff_x23;
    uint64_t uVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    int64_t iStack_198;
    int64_t iStack_190;
    int64_t iStack_188;
    int64_t iStack_180;
    int64_t iStack_178;
    int64_t iStack_170;
    int64_t iStack_168;
    int64_t iStack_160;
    int64_t iStack_158;
    uchar **ppuStack_150;
    code *pcStack_148;
    int64_t iStack_140;
    int64_t *piStack_130;
    int64_t *piStack_128;
    int64_t iStack_118;
    int64_t iStack_110;
    int64_t iStack_108;
    int64_t iStack_100;
    int64_t iStack_f8;
    int64_t iStack_f0;
    int64_t iStack_e8;
    int64_t iStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    int64_t iStack_c0;
    uint64_t uStack_b0;
    int64_t iStack_a8;
    int64_t *piStack_a0;
    int64_t *piStack_98;
    int64_t iStack_88;
    int64_t *piStack_80;
    int64_t iStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    if (param_3 == NULL) {
        uVar15 = 0;
    }
    else {
        piVar7 = NULL;
        uVar15 = 0;
        do {
            iVar4 = piVar7 * 0x10;
            piVar7 = piVar7 + 1;
            uVar15 = *(param_2 + iVar4 + 8) + uVar15;
        } while (piVar7 < param_3);
    }
    uVar8 = *(param_1 + 0x14);
    piStack_80 = param_5;
    if (*(param_1 + 0x14) < 2) {
code_r0x08009bc8:
        piVar7 = 0xcc0;
        iStack_78 = kmemdup(param_2,param_3 << 4);
        if (iStack_78 == 0) {
            uVar15 = 0xfffffff4;
        }
        else {
            iVar3 = *(param_1 + 0x610);
            if (0 < iVar3) {
                iVar4 = 0;
                piVar9 = NULL;
                iStack_88 = iStack_78 + 8;
                do {
                    iVar6 = *(*(param_1 + 0x618) + iVar4 * 8);
                    iStack_70 = 0;
                    uVar10 = *(iVar6 + 8);
                    uVar8 = param_4 - uVar10;
                    if (param_4 < uVar10) {
                        uVar8 = uVar15;
                        if (uVar10 - param_4 <= uVar15) {
                            uVar8 = uVar10 - param_4;
                        }
                        uVar10 = uVar8;
                        piVar13 = piVar9;
                        if (piVar9 < param_3) {
                            puVar11 = iStack_88 + piVar9 * 0x10;
                            piVar7 = piVar9;
                            do {
                                uVar1 = uVar10 - *puVar11;
                                piVar13 = piVar7;
                                if (uVar10 < *puVar11 || uVar1 == 0) break;
                                piVar7 = piVar7 + 1;
                                puVar11 = puVar11 + 2;
                                uVar10 = uVar1;
                                piVar13 = param_3;
                            } while (param_3 != piVar7);
                        }
                        piVar7 = piVar13 + (1 - piVar9);
                        unaff_x19 = iStack_78 + piVar13 * 0x10;
                        unaff_x23 = unaff_x19[1];
                        unaff_x19[1] = uVar10;
                        uVar2 = sym.mtd_writev(iVar6,iStack_78 + piVar9 * 0x10,piVar7,param_4);
                        *unaff_x19 = *unaff_x19 + uVar10;
                        unaff_x19[1] = unaff_x23 - uVar10;
                        if (uVar2 != 0) {
                            uVar15 = uVar2;
                            goto code_r0x08009cf4;
                        }
                        uVar15 = uVar15 - uVar8;
                        *piStack_80 = *piStack_80 + iStack_70;
                        if (uVar15 == 0) {
                            uVar15 = 0;
                            goto code_r0x08009cf4;
                        }
                        uVar8 = 0;
                        iVar3 = *(param_1 + 0x610);
                        piVar9 = piVar13;
                    }
                    iVar4 = iVar4 + 1;
                    param_4 = uVar8;
                } while (iVar4 < iVar3);
            }
            uVar15 = 0xffffffea;
code_r0x08009cf4:
            kfree(iStack_78);
        }
    }
    else {
        uVar10 = 0;
        if (uVar8 != 0) {
            uVar10 = param_4 / uVar8;
        }
        if (param_4 == uVar10 * uVar8) {
            uVar10 = 0;
            if (uVar8 != 0) {
                uVar10 = uVar15 / uVar8;
            }
            if (uVar15 == uVar10 * uVar8) goto code_r0x08009bc8;
        }
        uVar15 = 0xffffffea;
        piVar7 = param_3;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_68) {
        return uVar15;
    }
    auVar16 = __stack_chk_fail();
    piVar13 = auVar16._0_8_;
    *extraout_x18 = sym.concat_read_oob;
    pcStack_c8 = sym.concat_read_oob;
    iVar4 = sp_el0;
    iStack_d8 = *(iVar4 + 0x5e0);
    iStack_f8 = piVar7[4];
    iStack_f0 = piVar7[5];
    piVar7[4] = 0;
    iStack_e8 = piVar7[6];
    iStack_e0 = piVar7[7];
    iStack_108 = piVar7[2];
    iStack_100 = piVar7[3];
    piVar7[2] = 0;
    iStack_118 = *piVar7;
    iStack_110 = piVar7[1];
    piVar9 = piVar7;
    puStack_d0 = &stack0xffffffffffffffa0;
    iStack_c0 = unaff_x23;
    uStack_b0 = uVar15;
    iStack_a8 = param_1;
    piStack_a0 = param_3;
    piStack_98 = unaff_x19;
    if (0 < piVar13[0xc2]) {
        uVar2 = 0;
        uVar15 = auVar16._8_8_;
        param_1 = 0;
        do {
            iVar4 = *(piVar13[0xc3] + param_1 * 8);
            uVar10 = *(iVar4 + 8);
            uVar8 = uVar15 - uVar10;
            if (uVar15 < uVar10) {
                if (uVar10 < iStack_110 + uVar15) {
                    iStack_110 = uVar10 - uVar15;
                }
                piVar9 = &iStack_118;
                uVar15 = sym.mtd_read_oob(iVar4,uVar15,piVar9);
                piVar7[2] = piVar7[2] + iStack_108;
                piVar7[4] = piVar7[4] + iStack_f8;
                iVar3 = uVar15;
                uVar14 = uVar2;
                if (iVar3 != 0) {
                    if (iVar3 == -0x4a) {
                        uVar14 = 0xffffffb6;
                        *(piVar13 + 0x17c) = *(piVar13 + 0x17c) + 1;
                    }
                    else {
                        if (iVar3 != -0x75) goto code_r0x08009ed4;
                        uVar14 = 0xffffff8b;
                        if (uVar2 != 0) {
                            uVar14 = uVar2;
                        }
                        *(piVar13 + 0x2f) = piVar13[0x2f] + 1;
                    }
                }
                if (iStack_e8 != 0) {
                    iStack_110 = piVar7[1] - piVar7[2];
                    if (iStack_110 != 0) {
                        iStack_e8 = iStack_e8 + iStack_108;
                        goto code_r0x08009e5c;
                    }
code_r0x08009ed0:
                    uVar15 = uVar14;
                    goto code_r0x08009ed4;
                }
code_r0x08009e5c:
                uVar2 = uVar14;
                if (iStack_e0 == 0) {
                    uVar8 = 0;
                }
                else {
                    iStack_100 = piVar7[3] - piVar7[4];
                    if (iStack_100 == 0) goto code_r0x08009ed0;
                    iStack_e0 = iStack_e0 + piVar7[4];
                    uVar8 = 0;
                }
            }
            param_1 = param_1 + 1;
            uVar15 = uVar8;
            unaff_x19 = piVar7;
            param_3 = piVar13;
        } while (param_1 < piVar13[0xc2]);
    }
    uVar15 = 0xffffffea;
    piVar7 = unaff_x19;
    piVar13 = param_3;
code_r0x08009ed4:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_d8) {
        return uVar15;
    }
    auVar16 = __stack_chk_fail(uVar15);
    iVar6 = auVar16._0_8_;
    *extraout_x18_00 = sym.concat_write_oob;
    pcStack_148 = sym.concat_write_oob;
    iVar4 = sp_el0;
    iStack_158 = *(iVar4 + 0x5e0);
    iStack_178 = piVar9[4];
    iStack_170 = piVar9[5];
    iStack_168 = piVar9[6];
    iStack_160 = piVar9[7];
    iStack_198 = *piVar9;
    iStack_190 = piVar9[1];
    iStack_188 = piVar9[2];
    iStack_180 = piVar9[3];
    ppuStack_150 = &puStack_d0;
    iStack_140 = param_1;
    piStack_130 = piVar13;
    piStack_128 = piVar7;
    if ((*(iVar6 + 5) >> 2 & 1) == 0) {
        uVar15 = 0xffffffe2;
    }
    else {
        piVar9[4] = 0;
        piVar9[2] = 0;
        if (0 < *(iVar6 + 0x610)) {
            iVar4 = 0;
            uVar15 = auVar16._8_8_;
            do {
                iVar5 = *(*(iVar6 + 0x618) + iVar4 * 8);
                uVar10 = *(iVar5 + 8);
                uVar8 = uVar15 - uVar10;
                if (uVar15 < uVar10) {
                    if (uVar10 < iStack_190 + uVar15) {
                        iStack_190 = uVar10 - uVar15;
                    }
                    uVar15 = sym.mtd_write_oob(iVar5,uVar15,&iStack_198);
                    iVar5 = piVar9[2];
                    iVar12 = piVar9[4];
                    piVar9[2] = iVar5 + iStack_188;
                    piVar9[4] = iVar12 + iStack_178;
                    if (uVar15 != 0) goto code_r0x0800a050;
                    if (iStack_168 != 0) {
                        iStack_190 = piVar9[1] - (iVar5 + iStack_188);
                        if (iStack_190 != 0) {
                            iStack_168 = iStack_168 + iStack_188;
                            goto code_r0x0800a014;
                        }
code_r0x0800a04c:
                        uVar15 = 0;
                        goto code_r0x0800a050;
                    }
code_r0x0800a014:
                    if (iStack_160 == 0) {
                        uVar8 = 0;
                    }
                    else {
                        iStack_180 = piVar9[3] - (iVar12 + iStack_178);
                        if (iStack_180 == 0) goto code_r0x0800a04c;
                        iStack_160 = iStack_160 + iStack_178;
                        uVar8 = 0;
                    }
                }
                iVar4 = iVar4 + 1;
                uVar15 = uVar8;
            } while (iVar4 < *(iVar6 + 0x610));
        }
        uVar15 = 0xffffffea;
    }
code_r0x0800a050:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_158) {
        return uVar15;
    }
    auVar16 = __stack_chk_fail(uVar15);
    uVar15 = auVar16._8_8_;
    *extraout_x18_01 = sym.concat_block_isbad;
    piVar7 = *(auVar16._0_8_ + 0x618);
    iVar6 = *piVar7;
    iVar4 = iVar6;
    do {
        iVar5 = iVar4;
        iVar4 = *(iVar5 + 0x568);
    } while (iVar4 != 0);
    if ((*(iVar5 + 0x118) == 0) || (uVar2 = *(auVar16._0_8_ + 0x610), uVar8 = uVar2, uVar2 < 1)) {
code_r0x0800a0fc:
        uVar15 = 0;
    }
    else {
        uVar10 = *(iVar6 + 8);
        if (uVar10 <= uVar15) {
            do {
                uVar8 = uVar8 - 1;
                piVar7 = piVar7 + 1;
                if (uVar8 == 0) goto code_r0x0800a0fc;
                iVar6 = *piVar7;
                uVar15 = uVar15 - uVar10;
                uVar10 = *(iVar6 + 8);
            } while (uVar10 <= uVar15);
        }
        uVar15 = sym.mtd_block_isbad(iVar6,uVar15);
    }
    return uVar15;
}


// ===== sym.unregister_mtd_user.cfi_jt @ 0x08003998 (size 8) =====

code * sym.unregister_mtd_user.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    code *pcVar2;
    code *pcVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    code *pcVar7;
    code *pcVar8;
    code *pcVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    code *unaff_x20;
    code *unaff_x21;
    ulong unaff_x30;
    uchar auVar10 [16];
    int iStack_9c;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    code *pcStack_80;
    code *pcStack_70;
    int64_t iStack_68;
    code *pcStack_58;
    int iStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    mutex_lock(obj.dfs_dir_mtd);
    module_put(obj.__this_module);
    iStack_4c = 0;
    iVar5 = idr_get_next(obj.mtd_idr,&iStack_4c);
    if (iVar5 != 0) {
        unaff_x20 = obj.mtd_idr;
        unaff_x21 = 0x8000c80;
        do {
            pcVar9 = *(param_1 + 8);
            if (4 < (pcVar9 + -0x8003ce0 >> 3 | pcVar9 << 0x3d)) {
                pcStack_58 = pcVar9;
                __cfi_slowpath_diag(0xcda853bfdc928661,pcVar9,0x8000c80);
                pcVar9 = pcStack_58;
            }
            (*pcVar9)(iVar5);
            iStack_4c = *(iVar5 + 0x40) + 1;
            iVar5 = idr_get_next(obj.mtd_idr,&iStack_4c);
        } while (iVar5 != 0);
    }
    uVar6 = __list_del_entry_valid(param_1 + 0x10);
    if ((uVar6 & 1) != 0) {
        iVar5 = *(param_1 + 0x10);
        piVar1 = *(param_1 + 0x18);
        *(iVar5 + 8) = piVar1;
        *piVar1 = iVar5;
    }
    *(param_1 + 0x10) = 0xdead000000000100;
    *(param_1 + 0x18) = 0xdead000000000122;
    mutex_unlock(obj.dfs_dir_mtd);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return NULL;
    }
    auVar10 = __stack_chk_fail();
    pcVar9 = auVar10._0_8_;
    *extraout_x18 = sym.get_mtd_device;
    pcStack_88 = sym.get_mtd_device;
    iVar5 = sp_el0;
    iStack_98 = *(iVar5 + 0x5e0);
    puStack_90 = &stack0xffffffffffffffc0;
    pcStack_80 = unaff_x21;
    pcStack_70 = unaff_x20;
    iStack_68 = param_1;
    mutex_lock(obj.dfs_dir_mtd);
    if (auVar10._8_4_ == -1) {
        iStack_9c = 0;
        pcVar8 = idr_get_next(obj.mtd_idr,&iStack_9c);
        while (pcVar8 != NULL) {
            pcVar7 = pcVar9;
            if (pcVar8 == pcVar9) goto joined_r0x0800509c;
            iStack_9c = *(pcVar8 + 0x40) + 1;
            pcVar8 = idr_get_next(obj.mtd_idr,&iStack_9c);
        }
    }
    else if ((-1 < auVar10._8_4_) &&
            ((pcVar7 = idr_find(obj.mtd_idr,auVar10._8_8_ & 0xffffffff), pcVar9 == NULL || (pcVar7 == pcVar9)))) {
joined_r0x0800509c:
        pcVar8 = pcVar7;
        if (pcVar7 != NULL) {
            do {
                unaff_x21 = pcVar8;
                pcVar8 = *(unaff_x21 + 0x568);
            } while (*(unaff_x21 + 0x568) != NULL);
            uVar6 = try_module_get(*(unaff_x21 + 0x198));
            if ((uVar6 & 1) != 0) {
                pcVar9 = *(unaff_x21 + 0x148);
                if (pcVar9 == NULL) goto code_r0x08005140;
                if (5 < (pcVar9 + -0x8003b40 >> 3 | pcVar9 << 0x3d)) goto code_r0x0800517c;
                goto code_r0x080050dc;
            }
        }
    }
    pcVar7 = 0xffffffffffffffed;
    while( true ) {
        mutex_unlock(obj.dfs_dir_mtd);
        iVar5 = sp_el0;
        if (*(iVar5 + 0x5e0) == iStack_98) break;
        __stack_chk_fail();
code_r0x0800517c:
        __cfi_slowpath_diag(0x2c870642b6445e97,pcVar9,0x8000ca0);
code_r0x080050dc:
        uVar4 = (*pcVar9)(pcVar7);
        if (uVar4 == 0) {
code_r0x08005140:
            *(unaff_x21 + 0x530) = *(unaff_x21 + 0x530) + 1;
            pcVar3 = *(pcVar7 + 0x568);
            pcVar8 = pcVar7;
            while (pcVar2 = pcVar3, pcVar2 != NULL) {
                *(pcVar8 + 0x530) = *(pcVar8 + 0x530) + 1;
                pcVar8 = pcVar2;
                pcVar3 = *(pcVar2 + 0x568);
            }
        }
        else {
            pcVar9 = uVar4;
            module_put(*(unaff_x21 + 0x198));
            pcVar7 = uVar4;
        }
    }
    return pcVar7;
}


// ===== sym.mtdchar_unlocked_ioctl.18d6f106550e603ffb0308a8a3875dd9.cfi_jt @ 0x080039a0 (size 8) =====

int64_t sym.mtdchar_unlocked_ioctl.18d6f106550e603ffb0308a8a3875dd9.cfi_jt
                  (int64_t param_1,uint64_t param_2,int64_t param_3)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = **(param_1 + 0xd8);
    do {
        iVar2 = iVar3;
        iVar3 = *(iVar2 + 0x568);
    } while (iVar3 != 0);
    iVar2 = iVar2 + 0x5d8;
    mutex_lock(iVar2);
    iVar1 = sym.mtdchar_ioctl(param_1,param_2 & 0xffffffff,param_3);
    mutex_unlock(iVar2);
    return iVar1;
}


// ===== sym.mtdchar_compat_ioctl.18d6f106550e603ffb0308a8a3875dd9.cfi_jt @ 0x080039a8 (size 8) =====

int64_t sym.mtdchar_compat_ioctl.18d6f106550e603ffb0308a8a3875dd9.cfi_jt
                  (int64_t param_1,uint32_t param_2,uint64_t param_3)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    ulong uStack_70;
    ulong uStack_68;
    uint64_t uStack_60;
    uint64_t uStack_58;
    uint64_t uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    arg1 = **(param_1 + 0xd8);
    iVar3 = arg1;
    do {
        iVar2 = iVar3;
        iVar3 = *(iVar2 + 0x568);
    } while (iVar3 != 0);
    iVar2 = iVar2 + 0x5d8;
    param_3 = param_3 & 0xffffffff;
    mutex_lock(iVar2);
    if (param_2 == 0x1269) {
        uStack_58 = 0;
        uStack_50 = 0;
        iVar3 = sym._copy_from_user(&uStack_58,param_3,0x10);
        if (iVar3 == 0) {
            uStack_70 = uStack_58;
            uStack_60 = uStack_50 >> 0x20;
            uStack_68 = uStack_50 & 0xffffffff;
            iVar1 = sym.mtdchar_blkpg_ioctl(arg1,&uStack_70);
            goto code_r0x0800c4f8;
        }
    }
    else if (param_2 == 0xc00c4d04) {
        uStack_68 = uStack_68._4_4_ << 0x20;
        uStack_70 = 0;
        iVar3 = sym._copy_from_user(&uStack_70,param_3,0xc);
        if (iVar3 == 0) {
            iVar1 = sym.mtdchar_readoob(param_1,arg1,uStack_70 & 0xffffffff,uStack_70._4_4_);
            goto code_r0x0800c4f8;
        }
    }
    else {
        if (param_2 != 0xc00c4d03) {
            iVar1 = sym.mtdchar_ioctl(param_1,param_2,param_3);
            goto code_r0x0800c4f8;
        }
        uStack_68 = uStack_68._4_4_ << 0x20;
        uStack_70 = 0;
        if ((*(param_1 + 0x44) >> 1 & 1) == 0) {
            iVar1 = -1;
            goto code_r0x0800c4f8;
        }
        iVar3 = sym._copy_from_user(&uStack_70,param_3,0xc);
        if (iVar3 == 0) {
            iVar1 = sym.mtdchar_writeoob(param_1,arg1,uStack_70 & 0xffffffff,uStack_70._4_4_);
            goto code_r0x0800c4f8;
        }
    }
    iVar1 = -0xe;
code_r0x0800c4f8:
    mutex_unlock(iVar2);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_48) {
        __stack_chk_fail();
        return 0xffffffed;
    }
    return iVar1;
}


// ===== sym.mtd_del_partition.cfi_jt @ 0x080039b0 (size 8) =====

uint sym.mtd_del_partition.cfi_jt(int64_t param_1,int param_2)

{
    uint uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = param_1;
    do {
        iVar3 = iVar4;
        iVar4 = *(iVar3 + 0x568);
    } while (iVar4 != 0);
    iVar3 = iVar3 + 0x5a8;
    mutex_lock(iVar3);
    piVar2 = *(param_1 + 0x570);
    do {
        if (param_1 + 0x570 == piVar2) {
            uVar1 = 0xffffffea;
code_r0x0800b4dc:
            mutex_unlock(iVar3);
            return uVar1;
        }
        if (*(piVar2 + -0xa8) == param_2) {
            uVar1 = sym.__mtd_del_partition(piVar2 + -0xb0);
            goto code_r0x0800b4dc;
        }
        piVar2 = *piVar2;
    } while( true );
}


// ===== sym.seq_read.cfi_jt @ 0x080039b8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.mtdchar_read.18d6f106550e603ffb0308a8a3875dd9.cfi_jt @ 0x080039c0 (size 8) =====

int64_t sym.mtdchar_read.18d6f106550e603ffb0308a8a3875dd9.cfi_jt
                  (int64_t param_1,int64_t param_2,ulong *param_3,ulong **param_4)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong **arg4;
    int iVar6;
    ulong *puVar7;
    ulong *puVar8;
    ulong *puVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar10;
    int64_t iVar11;
    int64_t *piVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    ulong uStack_178;
    ulong *puStack_170;
    int64_t iStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    int64_t iStack_148;
    ulong uStack_140;
    int64_t iStack_138;
    ulong *puStack_130;
    int64_t iStack_128;
    uchar *puStack_120;
    code *pcStack_118;
    ulong uStack_b8;
    int64_t iStack_b0;
    ulong *puStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    ulong uStack_80;
    ulong *puStack_78;
    ulong *puStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_68 = *(iVar11 + 0x5e0);
    piVar12 = *(param_1 + 0xd8);
    puVar7 = *param_4;
    iVar11 = *piVar12;
    puStack_70 = NULL;
    puVar9 = *(iVar11 + 8);
    puVar8 = NULL;
    if (puVar7 <= puVar9) {
        puVar8 = puVar9 - puVar7;
    }
    if (puVar7 + param_3 <= puVar9) {
        puVar8 = param_3;
    }
    puStack_78 = param_3;
    if (puVar8 == NULL) {
        iVar10 = 0;
    }
    else {
        arg4 = param_4;
        iVar3 = sym.mtd_kmalloc_up_to(iVar11,&puStack_78);
        if (iVar3 == 0) {
            iVar10 = -0xc;
            param_4 = arg4;
        }
        else {
            iVar10 = 0;
            do {
                iVar2 = piVar12[1];
                puVar7 = puVar8;
                if (puStack_78 <= puVar8) {
                    puVar7 = puStack_78;
                }
                iVar6 = puVar7;
                if (iVar2 == 3) {
                    iStack_b0 = iVar6;
                    param_3 = &uStack_b8;
                    uStack_98 = 0;
                    uStack_90 = 0;
                    puStack_a8 = NULL;
                    uStack_a0 = 0;
                    uStack_b8 = 2;
                    uStack_80 = 0;
                    iStack_88 = iVar3;
                    iVar2 = sym.mtd_read_oob(iVar11,*param_4,param_3);
                    puVar7 = puStack_a8;
                }
                else if (iVar2 == 2) {
                    param_3 = iVar6;
                    arg4 = &puStack_70;
                    iVar2 = sym.mtd_read_user_prot_reg(iVar11,*param_4,param_3,arg4);
                    puVar7 = puStack_70;
                }
                else if (iVar2 == 1) {
                    param_3 = iVar6;
                    arg4 = &puStack_70;
                    iVar2 = sym.mtd_read_fact_prot_reg(iVar11,*param_4,param_3,arg4);
                    puVar7 = puStack_70;
                }
                else {
                    param_3 = iVar6;
                    arg4 = &puStack_70;
                    iVar2 = sym.mtd_read(iVar11,*param_4,param_3,arg4);
                    puVar7 = puStack_70;
                }
                puStack_70 = puVar7;
                if (((iVar2 != -0x75) && (iVar2 != 0)) && (iVar2 != -0x4a)) {
                    kfree(iVar3);
                    iVar10 = iVar2;
                    param_4 = arg4;
                    goto code_r0x0800c0e4;
                }
                *param_4 = *param_4 + puVar7;
                if (puVar7 >> 0x1f != 0) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x800,0x800c0d8);
                    (*pcVar1)();
                }
                auVar13 = __check_object_size(iVar3,puVar7,1);
                iVar4 = sym._copy_to_user(param_2,auVar13,puVar7);
                if (iVar4 != 0) {
                    kfree(iVar3);
                    iVar10 = -0xe;
                    param_3 = puVar7;
                    param_4 = arg4;
                    goto code_r0x0800c0e4;
                }
                puVar9 = puVar8 - puStack_70;
                puVar8 = NULL;
                if (puStack_70 != NULL) {
                    puVar8 = puVar9;
                }
                iVar10 = puStack_70 + iVar10;
                param_2 = param_2 + puStack_70;
            } while (puVar8 != NULL);
            kfree(iVar3);
            param_3 = puVar7;
            param_4 = arg4;
        }
    }
code_r0x0800c0e4:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_68) {
        return iVar10;
    }
    auVar13 = __stack_chk_fail();
    iVar11 = auVar13._8_8_;
    *extraout_x18 = sym.mtdchar_write;
    pcStack_118 = sym.mtdchar_write;
    iVar10 = sp_el0;
    iStack_128 = *(iVar10 + 0x5e0);
    piVar12 = *(auVar13._0_8_ + 0xd8);
    puVar8 = *param_4;
    iVar10 = *piVar12;
    iStack_138 = 0;
    puVar7 = *(iVar10 + 8);
    puStack_130 = param_3;
    puStack_120 = &stack0xffffffffffffffa0;
    if (puVar7 < puVar8 || puVar7 - puVar8 == NULL) {
        iVar3 = -0x1c;
    }
    else {
        puVar9 = puVar7 - puVar8;
        if (puVar8 + param_3 <= puVar7) {
            puVar9 = param_3;
        }
        if (puVar9 == NULL) {
            iVar3 = 0;
        }
        else {
            iVar4 = sym.mtd_kmalloc_up_to(iVar10,&puStack_130);
            if (iVar4 == 0) {
                iVar3 = -0xc;
            }
            else {
                iVar3 = 0;
                do {
                    puVar8 = puVar9;
                    if (puStack_130 <= puVar9) {
                        puVar8 = puStack_130;
                    }
                    if (0x7fffffff00000000 < puVar8 << 0x20) {
    //WARNING: Does not return
                        pcVar1 = SoftwareBreakpoint(0x800,0x800c2e8);
                        (*pcVar1)();
                    }
                    puVar8 = puVar8;
                    __check_object_size(iVar4,puVar8,0);
                    param_3 = puVar8;
                    iVar5 = sym._copy_from_user(iVar4,iVar11,puVar8);
                    if (iVar5 != 0) {
                        kfree(iVar4);
                        iVar3 = -0xe;
                        goto code_r0x0800c2f4;
                    }
                    iVar2 = piVar12[1];
                    if (iVar2 != 2) {
                        if (iVar2 == 3) {
                            param_3 = &uStack_178;
                            uStack_158 = 0;
                            uStack_150 = 0;
                            iStack_168 = 0;
                            uStack_160 = 0;
                            uStack_178 = 2;
                            uStack_140 = 0;
                            puStack_170 = puVar8;
                            iStack_148 = iVar4;
                            iVar2 = sym.mtd_write_oob(iVar10,*param_4,param_3);
                            iStack_138 = iStack_168;
                            goto joined_r0x0800c280;
                        }
                        if (iVar2 != 1) {
                            iVar2 = sym.mtd_write(iVar10,*param_4,puVar8,&iStack_138);
                            param_3 = puVar8;
                            goto joined_r0x0800c280;
                        }
                        iVar2 = -0x1e;
code_r0x0800c2d4:
                        kfree(iVar4);
                        iVar3 = iVar2;
                        goto code_r0x0800c2f4;
                    }
                    iVar2 = sym.mtd_write_user_prot_reg(iVar10,*param_4,puVar8,&iStack_138);
                    param_3 = puVar8;
joined_r0x0800c280:
                    if ((iVar2 == -0x1c) && (iVar3 != 0)) break;
                    if (iVar2 != 0) goto code_r0x0800c2d4;
                    iVar3 = iStack_138 + iVar3;
                    puVar9 = puVar9 - iStack_138;
                    iVar11 = iVar11 + iStack_138;
                    *param_4 = *param_4 + iStack_138;
                } while (puVar9 != NULL);
                kfree(iVar4);
            }
        }
    }
code_r0x0800c2f4:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_128) {
        auVar13 = __stack_chk_fail();
        *extraout_x18_00 = sym.mtdchar_unlocked_ioctl;
        iVar11 = **(auVar13._0_8_ + 0xd8);
        do {
            iVar10 = iVar11;
            iVar11 = *(iVar10 + 0x568);
        } while (iVar11 != 0);
        iVar10 = iVar10 + 0x5d8;
        mutex_lock(iVar10);
        iVar2 = sym.mtdchar_ioctl(auVar13._0_8_,auVar13._8_8_ & 0xffffffff,param_3);
        mutex_unlock(iVar10);
        return iVar2;
    }
    return iVar3;
}


// ===== sym.mtd_get_unmapped_area.cfi_jt @ 0x080039c8 (size 8) =====

void sym.mtd_get_unmapped_area.cfi_jt(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
    uint64_t uVar1;
    int64_t iVar2;
    uchar auVar3 [16];
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    code *pcVar10;
    code *extraout_x8;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auVar11 [16];
    int64_t iStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    uVar1 = param_1;
    do {
        uVar9 = uVar1;
        uVar1 = *(uVar9 + 0x568);
    } while (*(uVar9 + 0x568) != 0);
    pcVar10 = *(uVar9 + 0x78);
    uStack_40 = 0;
    iStack_48 = 0;
    if (pcVar10 == NULL) {
        iVar7 = -0x5f;
        goto code_r0x08005b38;
    }
    if (param_3 < 0) {
        iVar8 = -0x16;
        goto code_r0x08005b5c;
    }
    iVar7 = -0x16;
    if (*(param_1 + 8) <= param_3) goto code_r0x08005b38;
    if (*(param_1 + 8) - param_3 < param_2) goto code_r0x08005b38;
    iVar8 = iStack_48;
    if (param_2 == 0) goto code_r0x08005b5c;
    uVar6 = *(param_1 + 0x568);
    uVar1 = param_3;
    uVar5 = param_1;
    while (uVar4 = uVar6, uVar4 != 0) {
        uVar1 = *(uVar5 + 0x590) + uVar1;
        uVar5 = uVar4;
        uVar6 = *(uVar4 + 0x568);
    }
    auVar3._8_8_ = uVar1;
    auVar3._0_8_ = uVar9;
    auVar11._8_8_ = uVar1;
    auVar11._0_8_ = uVar9;
    if (pcVar10 != sym.__typeid__ZTSFiP8mtd_infoxmPmPPvPyE_global_addr) goto code_r0x08005b90;
    do {
        iVar7 = (*pcVar10)(auVar3._0_8_,auVar3._8_8_,param_2,&uStack_40,&iStack_48,0);
        uVar1 = uStack_40;
        if (iVar7 == 0) {
            iVar8 = iStack_48;
            uVar9 = param_1;
            if (uStack_40 != param_2) {
                do {
                    param_2 = uVar9;
                    uVar9 = *(param_2 + 0x568);
                } while (*(param_2 + 0x568) != 0);
                pcVar10 = *(param_2 + 0x80);
                if (pcVar10 != NULL) {
                    iVar8 = -0x26;
                    if ((*(param_1 + 8) <= param_3) || (*(param_1 + 8) - param_3 <= uStack_40 - 1))
                    goto code_r0x08005b5c;
                    if ((pcVar10 + -0x8003cc8 >> 3 | pcVar10 << 0x3d) < 3) {
                        uVar9 = *(param_1 + 0x568);
                    }
                    else {
                        __cfi_slowpath_diag(0x5a1f01aca03a138f,pcVar10,0x8000d20);
                        uVar9 = *(param_1 + 0x568);
                    }
                    while (uVar5 = uVar9, uVar5 != 0) {
                        param_3 = *(param_1 + 0x590) + param_3;
                        param_1 = uVar5;
                        uVar9 = *(uVar5 + 0x568);
                    }
                    (*pcVar10)(param_2,param_3,uVar1);
                }
                iVar8 = -0x26;
            }
        }
        else {
code_r0x08005b38:
            iVar8 = iVar7;
        }
code_r0x08005b5c:
        iVar2 = sp_el0;
        if (*(iVar2 + 0x5e0) == iStack_38) {
            return;
        }
        auVar11 = __stack_chk_fail(iVar8);
        pcVar10 = extraout_x8;
code_r0x08005b90:
        __cfi_slowpath_diag(0xb2aaf3b568e29a40,pcVar10,0x8000d00);
        auVar3 = auVar11;
    } while( true );
}


// ===== sym.cleanup_module.cfi_jt @ 0x080039d0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    debugfs_remove(_segment.ehdr);
    __unregister_chrdev(0x5a,0,0x100000,obj..str.llvm.17629688341332384884);
    if (_segment.ehdr != 0) {
        remove_proc_entry(obj..str.llvm.17629688341332384884,0);
    }
    class_unregister(obj.mtd_class);
    bdi_put(_segment.ehdr);
    idr_destroy(obj.mtd_idr);
    return;
}


// ===== sym.get_tree_mtd.cfi_jt @ 0x080039d8 (size 8) =====

uint64_t sym.get_tree_mtd.cfi_jt(int64_t param_1,code *param_2,code *param_3)

{
    code *pcVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    char *pcVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar8 [16];
    char *pcStack_48;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    pcVar6 = *(param_1 + 0x80);
    uStack_3c = 0;
    if (pcVar6 == NULL) {
        param_2 = 0x65;
        logfc(*(param_1 + 0x78),0,0x65,"No source specified");
code_r0x08009100:
        uVar3 = 0xffffffea;
    }
    else {
        if (((*pcVar6 != 'm') || (pcVar6[1] != 't')) || (pcVar6[2] != 'd')) goto code_r0x0800912c;
        uVar2 = pcVar6[3];
        if (uVar2 == 0x3a) {
            uVar3 = sym.get_mtd_device_nm(pcVar6 + 4);
            if (0xfffffffffffff000 < uVar3) {
                param_3 = 0x65;
                logfc(*(param_1 + 0x78),0,0x65,"MTD: MTD device with name \"%s\" not found",*(param_1 + 0x80) + 4);
                goto code_r0x0800912c;
            }
code_r0x08009214:
            uVar3 = sym.mtd_get_sb(param_1,uVar3,param_2);
            uVar3 = uVar3 & 0xffffffff;
        }
        else if (uVar2 - 0x3a < 0xfffffff6) {
code_r0x0800912c:
            uVar3 = lookup_bdev(*(param_1 + 0x80),&uStack_3c);
            if (uVar3 == 0) {
                if (uStack_3c >> 0x14 != 0x1f) {
                    param_2 = param_3;
                    if (-1 < *(param_1 + 0x99)) {
                        param_2 = 0x65;
                        logfc(*(param_1 + 0x78),0,0x65,"MTD: Attempt to mount non-MTD device \"%s\"",
                              *(param_1 + 0x80));
                    }
                    goto code_r0x08009100;
                }
                uVar2 = uStack_3c & 0xfffff;
                uVar3 = sym.get_mtd_device(0,uVar2);
                if (uVar3 < 0xfffffffffffff001) goto code_r0x08009214;
                param_2 = 0x65;
                logfc(*(param_1 + 0x78),0,0x65,"MTDSB: Device #%u doesn\'t appear to exist\n",uVar2);
            }
            else {
                uVar3 = uVar3 & 0xffffffff;
                param_2 = 0x65;
                logfc(*(param_1 + 0x78),0,0x65,"MTD: Couldn\'t look up \'%s\': %d",*(param_1 + 0x80),uVar3);
            }
        }
        else {
            param_3 = NULL;
            pcStack_48 = NULL;
            iVar4 = simple_strtoul(pcVar6 + 3,&pcStack_48);
            if (*pcStack_48 != '\0') goto code_r0x0800912c;
            uVar3 = sym.mtd_get_sb_by_nr(param_1,iVar4,param_2);
            uVar3 = uVar3 & 0xffffffff;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return uVar3 & 0xffffffff;
    }
    auVar8 = __stack_chk_fail();
    iVar4 = auVar8._0_8_;
    *extraout_x18 = sym.mtd_get_sb;
    *(iVar4 + 0x48) = auVar8._8_8_;
    uVar5 = sget_fc(iVar4,sym.mtd_test_super.e15e9b585228cff038f27a9a25a8c6f2.cfi_jt,
                    sym.__typeid__ZTSFiP11super_blockP10fs_contextE_global_addr);
    uVar3 = uVar5;
    if (uVar5 < 0xfffffffffffff001) {
        if (*(uVar5 + 0x68) == 0) {
            if (1 < (param_2 + -0x8003c60 >> 3 | param_2 << 0x3d)) {
                __cfi_slowpath_diag(0x698bc01d8a1eb827,param_2,0x8001040);
            }
            uVar2 = (*param_2)(uVar5,iVar4);
            if (uVar2 < 0) {
                uVar3 = uVar2;
                deactivate_locked_super(uVar5);
                goto code_r0x080092b8;
            }
            *(uVar5 + 0x50) = *(uVar5 + 0x50) | 0x40000000;
            iVar7 = *(iVar4 + 0x50);
        }
        else {
            sym.put_mtd_device(auVar8._8_8_);
            iVar7 = *(iVar4 + 0x50);
        }
        if (iVar7 != 0) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x8009314);
            (*pcVar1)();
        }
        iVar7 = *(uVar5 + 0x68);
        if (iVar7 != 0) {
            lockref_get(iVar7 + 0x58);
        }
        uVar3 = 0;
        *(iVar4 + 0x50) = iVar7;
    }
code_r0x080092b8:
    return uVar3 & 0xffffffff;
}


// ===== sym.__typeid__ZTSFiP8mtd_infoPK16mtd_pairing_infoE_global_addr @ 0x080039e0 (size 8) =====

int sym.__typeid__ZTSFiP8mtd_infoPK16mtd_pairing_infoE_global_addr(int64_t param_1,int *param_2)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    int iVar5;
    code *pcVar6;
    int64_t iVar7;
    int *piVar8;
    int iVar9;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = param_1;
    do {
        iVar7 = iVar4;
        iVar4 = *(iVar7 + 0x568);
    } while (*(iVar7 + 0x568) != 0);
    piVar8 = *(iVar7 + 0x50);
    if (piVar8 == NULL) {
        iVar9 = 1;
    }
    else {
        iVar9 = *piVar8;
        if (iVar9 == 0) {
            iVar9 = 1;
        }
    }
    if (param_2 == NULL) {
        iVar5 = -0x16;
    }
    else {
        iVar1 = *param_2;
        iVar5 = -0x16;
        if (-1 < iVar1) {
            uVar3 = 0;
            if (*(iVar7 + 0x14) != 0) {
                uVar3 = *(iVar7 + 0x10) / *(iVar7 + 0x14);
            }
            iVar2 = 0;
            if (iVar9 != 0) {
                iVar2 = uVar3 / iVar9;
            }
            if ((((iVar1 < iVar2) && (iVar5 = -0x16, -1 < param_2[1] && param_2[1] < iVar9)) &&
                (iVar5 = iVar1, piVar8 != NULL)) && (*(piVar8 + 4) != 0)) {
                pcVar6 = *(*(param_1 + 0x50) + 0x10);
                if (pcVar6 != sym.__typeid__ZTSFiP8mtd_infoPK16mtd_pairing_infoE_global_addr) {
                    __cfi_slowpath_diag(0x185f1c46528bedc7,pcVar6,0x8000c00);
                }
                iVar5 = (*pcVar6)(iVar7,param_2);
            }
        }
    }
    return iVar5;
}


// ===== sym.get_mtd_device_nm.cfi_jt @ 0x080039e8 (size 8) =====

code * sym.get_mtd_device_nm.cfi_jt(code *param_1)

{
    int64_t iVar1;
    code *pcVar2;
    code *pcVar3;
    code *pcVar4;
    int iVar5;
    uint32_t uVar6;
    code *pcVar7;
    uint64_t uVar8;
    ulong *in_x18;
    code *unaff_x21;
    ulong unaff_x30;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    mutex_lock(obj.dfs_dir_mtd);
    iStack_3c = 0;
    pcVar7 = idr_get_next(obj.mtd_idr,&iStack_3c);
    if (pcVar7 != NULL) {
        unaff_x21 = obj.mtd_idr;
        do {
            iVar5 = strcmp(param_1,*(pcVar7 + 0x38));
            pcVar3 = pcVar7;
            if (iVar5 == 0) goto code_r0x08005324;
            iStack_3c = *(pcVar7 + 0x40) + 1;
            pcVar7 = idr_get_next(obj.mtd_idr,&iStack_3c);
        } while (pcVar7 != NULL);
    }
code_r0x0800537c:
    pcVar7 = 0xffffffffffffffed;
    while( true ) {
        mutex_unlock(obj.dfs_dir_mtd);
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iStack_38) break;
        __stack_chk_fail();
code_r0x080053fc:
        __cfi_slowpath_diag(0x2c870642b6445e97,param_1,0x8000ca0);
code_r0x0800535c:
        uVar6 = (*param_1)(pcVar7);
        if (uVar6 == 0) {
code_r0x080053c0:
            *(unaff_x21 + 0x530) = *(unaff_x21 + 0x530) + 1;
            pcVar4 = *(pcVar7 + 0x568);
            pcVar3 = pcVar7;
            while (pcVar2 = pcVar4, pcVar2 != NULL) {
                *(pcVar3 + 0x530) = *(pcVar3 + 0x530) + 1;
                pcVar3 = pcVar2;
                pcVar4 = *(pcVar2 + 0x568);
            }
        }
        else {
            param_1 = uVar6;
            module_put(*(unaff_x21 + 0x198));
            pcVar7 = uVar6;
        }
    }
    return pcVar7;
code_r0x08005324:
    do {
        unaff_x21 = pcVar3;
        pcVar3 = *(unaff_x21 + 0x568);
    } while (*(unaff_x21 + 0x568) != NULL);
    uVar8 = try_module_get(*(unaff_x21 + 0x198));
    if ((uVar8 & 1) != 0) {
        param_1 = *(unaff_x21 + 0x148);
        if (param_1 == NULL) goto code_r0x080053c0;
        if (5 < (param_1 + -0x8003b40 >> 3 | param_1 << 0x3d)) goto code_r0x080053fc;
        goto code_r0x0800535c;
    }
    goto code_r0x0800537c;
}


// ===== sym.kill_mtd_super.cfi_jt @ 0x080039f0 (size 8) =====

void sym.kill_mtd_super.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    generic_shutdown_super();
    sym.put_mtd_device(*(param_1 + 0x118));
    *(param_1 + 0x118) = 0;
    return;
}


// ===== sym.__typeid__ZTSFvPK13mtd_partitioniE_global_addr @ 0x080039f8 (size 8) =====

void sym.__typeid__ZTSFvPK13mtd_partitioniE_global_addr(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree();
    return;
}


// ===== sym.mtd_ooblayout_set_eccbytes.cfi_jt @ 0x08003a00 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08007280)
//WARNING: Removing unreachable block (ram,0x08007294)
//WARNING: Removing unreachable block (ram,0x080073ac)
//WARNING: Removing unreachable block (ram,0x080072b4)
//WARNING: Removing unreachable block (ram,0x080072c0)
//WARNING: Removing unreachable block (ram,0x080072c4)
//WARNING: Removing unreachable block (ram,0x080072d0)
//WARNING: Removing unreachable block (ram,0x080072e0)
//WARNING: Removing unreachable block (ram,0x080072e4)
//WARNING: Removing unreachable block (ram,0x080072ec)
//WARNING: Removing unreachable block (ram,0x080072f4)
//WARNING: Removing unreachable block (ram,0x0800734c)
//WARNING: Removing unreachable block (ram,0x08007304)
//WARNING: Removing unreachable block (ram,0x08007318)
//WARNING: Removing unreachable block (ram,0x08007328)
//WARNING: Removing unreachable block (ram,0x08007348)
//WARNING: Removing unreachable block (ram,0x08007050)
//WARNING: Removing unreachable block (ram,0x08007064)
//WARNING: Removing unreachable block (ram,0x0800717c)
//WARNING: Removing unreachable block (ram,0x08007084)
//WARNING: Removing unreachable block (ram,0x08007090)
//WARNING: Removing unreachable block (ram,0x08007094)
//WARNING: Removing unreachable block (ram,0x080070a0)
//WARNING: Removing unreachable block (ram,0x080070b0)
//WARNING: Removing unreachable block (ram,0x080070b4)
//WARNING: Removing unreachable block (ram,0x080070bc)
//WARNING: Removing unreachable block (ram,0x080070c4)
//WARNING: Removing unreachable block (ram,0x0800711c)
//WARNING: Removing unreachable block (ram,0x080070d4)
//WARNING: Removing unreachable block (ram,0x080070e8)
//WARNING: Removing unreachable block (ram,0x080070f8)
//WARNING: Removing unreachable block (ram,0x08007118)
//WARNING: Removing unreachable block (ram,0x08006e20)
//WARNING: Removing unreachable block (ram,0x08006e34)
//WARNING: Removing unreachable block (ram,0x08006f4c)
//WARNING: Removing unreachable block (ram,0x08006e54)
//WARNING: Removing unreachable block (ram,0x08006e60)
//WARNING: Removing unreachable block (ram,0x08006e64)
//WARNING: Removing unreachable block (ram,0x08006e70)
//WARNING: Removing unreachable block (ram,0x08006e80)
//WARNING: Removing unreachable block (ram,0x08006e84)
//WARNING: Removing unreachable block (ram,0x08006e8c)
//WARNING: Removing unreachable block (ram,0x08006e94)
//WARNING: Removing unreachable block (ram,0x08006eec)
//WARNING: Removing unreachable block (ram,0x08006ea4)
//WARNING: Removing unreachable block (ram,0x08006eb8)
//WARNING: Removing unreachable block (ram,0x08006ec8)
//WARNING: Removing unreachable block (ram,0x08006ee8)

uint64_t sym.mtd_ooblayout_set_eccbytes.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    code *pcVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    int iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar4 = *(iVar1 + 0x5e0);
    iVar1 = param_1;
    while( true ) {
        do {
            iVar5 = iVar1;
            iVar1 = *(iVar5 + 0x568);
        } while (*(iVar5 + 0x568) != 0);
        uVar3 = 0xffffffea;
        if ((iVar8 < 0) || (iVar5 == 0)) goto code_r0x08006f10;
        if ((*(iVar5 + 0x48) == NULL) || (pcVar7 = **(iVar5 + 0x48), pcVar7 == NULL)) break;
        if (1 < (pcVar7 + -0x8003a58 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar7,0x8000d60);
        }
        uVar3 = (*pcVar7)(iVar5,iVar8);
        if (uVar3 != 0) goto code_r0x08006f10;
        iVar8 = iVar8 + 1;
        iVar1 = param_1;
    }
    uVar3 = 0xfffffdf4;
code_r0x08006f10:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iVar4) {
        return uVar3;
    }
    iVar4 = __stack_chk_fail(uVar3);
    *extraout_x18 = sym.mtd_ooblayout_get_databytes;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar5 = *(iVar1 + 0x5e0);
    iVar1 = iVar4;
    while( true ) {
        do {
            iVar6 = iVar1;
            iVar1 = *(iVar6 + 0x568);
        } while (*(iVar6 + 0x568) != 0);
        uVar3 = 0xffffffea;
        if ((iVar8 < 0) || (iVar6 == 0)) goto code_r0x08007140;
        if ((*(iVar6 + 0x48) == 0) || (pcVar7 = *(*(iVar6 + 0x48) + 8), pcVar7 == NULL)) break;
        if (1 < (pcVar7 + -0x8003a58 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar7,0x8000d80);
        }
        uVar3 = (*pcVar7)(iVar6,iVar8);
        if (uVar3 != 0) goto code_r0x08007140;
        iVar8 = iVar8 + 1;
        iVar1 = iVar4;
    }
    uVar3 = 0xfffffdf4;
code_r0x08007140:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iVar5) {
        return uVar3;
    }
    iVar4 = __stack_chk_fail(uVar3);
    *extraout_x18_00 = sym.mtd_ooblayout_set_databytes;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar5 = *(iVar1 + 0x5e0);
    iVar1 = iVar4;
    while( true ) {
        do {
            iVar6 = iVar1;
            iVar1 = *(iVar6 + 0x568);
        } while (*(iVar6 + 0x568) != 0);
        uVar3 = 0xffffffea;
        if ((iVar8 < 0) || (iVar6 == 0)) goto code_r0x08007370;
        if ((*(iVar6 + 0x48) == 0) || (pcVar7 = *(*(iVar6 + 0x48) + 8), pcVar7 == NULL)) break;
        if (1 < (pcVar7 + -0x8003a58 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar7,0x8000d80);
        }
        uVar3 = (*pcVar7)(iVar6,iVar8);
        if (uVar3 != 0) goto code_r0x08007370;
        iVar8 = iVar8 + 1;
        iVar1 = iVar4;
    }
    uVar3 = 0xfffffdf4;
code_r0x08007370:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iVar5) {
        return uVar3;
    }
    iVar4 = __stack_chk_fail(uVar3);
    *extraout_x18_01 = sym.mtd_ooblayout_count_freebytes;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar5 = *(iVar1 + 0x5e0);
    iVar1 = iVar4;
    while( true ) {
        do {
            iVar6 = iVar1;
            iVar1 = *(iVar6 + 0x568);
        } while (*(iVar6 + 0x568) != 0);
        uVar3 = 0xffffffea;
        if ((iVar8 < 0) || (iVar6 == 0)) goto code_r0x080074a0;
        if ((*(iVar6 + 0x48) == 0) || (pcVar7 = *(*(iVar6 + 0x48) + 8), pcVar7 == NULL)) {
            uVar3 = 0xfffffdf4;
            goto code_r0x080074a0;
        }
        if (1 < (pcVar7 + -0x8003a58 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar7,0x8000d80);
        }
        uVar2 = (*pcVar7)(iVar6,iVar8);
        if (uVar2 != 0) break;
        iVar8 = iVar8 + 1;
        iVar1 = iVar4;
    }
    uVar3 = uVar2;
    if (uVar2 == 0xffffffde) {
        uVar3 = 0;
    }
code_r0x080074a0:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iVar5) {
        return uVar3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18_02 = sym.mtd_ooblayout_count_eccbytes;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar5 = *(iVar1 + 0x5e0);
    iVar1 = iVar4;
    while( true ) {
        do {
            iVar6 = iVar1;
            iVar1 = *(iVar6 + 0x568);
        } while (*(iVar6 + 0x568) != 0);
        uVar3 = 0xffffffea;
        if ((iVar8 < 0) || (iVar6 == 0)) goto code_r0x080075c4;
        if ((*(iVar6 + 0x48) == NULL) || (pcVar7 = **(iVar6 + 0x48), pcVar7 == NULL)) break;
        if (1 < (pcVar7 + -0x8003a58 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar7,0x8000d60);
        }
        uVar2 = (*pcVar7)(iVar6,iVar8);
        if (uVar2 != 0) {
            uVar3 = uVar2;
            if (uVar2 == 0xffffffde) {
                uVar3 = 0;
            }
code_r0x080075c4:
            iVar1 = sp_el0;
            if (*(iVar1 + 0x5e0) == iVar5) {
                return uVar3;
            }
            auVar9 = __stack_chk_fail();
            *extraout_x18_03 = sym.mtd_get_fact_prot_info;
            iVar1 = auVar9._0_8_;
            do {
                iVar4 = iVar1;
                iVar1 = *(iVar4 + 0x568);
            } while (*(iVar4 + 0x568) != 0);
            pcVar7 = *(iVar4 + 0xb0);
            if (pcVar7 == NULL) {
                uVar3 = 0xffffffa1;
            }
            else if (auVar9._8_8_ == 0) {
                uVar3 = 0;
            }
            else {
                if (1 < (pcVar7 + -0x8003a40 >> 3 | pcVar7 << 0x3d)) {
                    __cfi_slowpath_diag(0xc610e2db308fc5b4,pcVar7,0x8000da0);
                }
                uVar3 = (*pcVar7)(iVar4,auVar9._8_8_);
            }
            return uVar3;
        }
        iVar8 = iVar8 + 1;
        iVar1 = iVar4;
    }
    uVar3 = 0xfffffdf4;
    goto code_r0x080075c4;
}


// ===== sym.mtd_ooblayout_set_databytes.cfi_jt @ 0x08003a08 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08007280)
//WARNING: Removing unreachable block (ram,0x08007294)
//WARNING: Removing unreachable block (ram,0x080073ac)
//WARNING: Removing unreachable block (ram,0x080072b4)
//WARNING: Removing unreachable block (ram,0x080072c0)
//WARNING: Removing unreachable block (ram,0x080072c4)
//WARNING: Removing unreachable block (ram,0x080072d0)
//WARNING: Removing unreachable block (ram,0x080072e0)
//WARNING: Removing unreachable block (ram,0x080072e4)
//WARNING: Removing unreachable block (ram,0x080072ec)
//WARNING: Removing unreachable block (ram,0x080072f4)
//WARNING: Removing unreachable block (ram,0x0800734c)
//WARNING: Removing unreachable block (ram,0x08007304)
//WARNING: Removing unreachable block (ram,0x08007318)
//WARNING: Removing unreachable block (ram,0x08007328)
//WARNING: Removing unreachable block (ram,0x08007348)

uint64_t sym.mtd_ooblayout_set_databytes.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    code *pcVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar4 = *(iVar1 + 0x5e0);
    iVar1 = param_1;
    while( true ) {
        do {
            iVar5 = iVar1;
            iVar1 = *(iVar5 + 0x568);
        } while (*(iVar5 + 0x568) != 0);
        uVar3 = 0xffffffea;
        if ((iVar8 < 0) || (iVar5 == 0)) goto code_r0x08007370;
        if ((*(iVar5 + 0x48) == 0) || (pcVar7 = *(*(iVar5 + 0x48) + 8), pcVar7 == NULL)) break;
        if (1 < (pcVar7 + -0x8003a58 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar7,0x8000d80);
        }
        uVar3 = (*pcVar7)(iVar5,iVar8);
        if (uVar3 != 0) goto code_r0x08007370;
        iVar8 = iVar8 + 1;
        iVar1 = param_1;
    }
    uVar3 = 0xfffffdf4;
code_r0x08007370:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iVar4) {
        return uVar3;
    }
    iVar4 = __stack_chk_fail(uVar3);
    *extraout_x18 = sym.mtd_ooblayout_count_freebytes;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar5 = *(iVar1 + 0x5e0);
    iVar1 = iVar4;
    while( true ) {
        do {
            iVar6 = iVar1;
            iVar1 = *(iVar6 + 0x568);
        } while (*(iVar6 + 0x568) != 0);
        uVar3 = 0xffffffea;
        if ((iVar8 < 0) || (iVar6 == 0)) goto code_r0x080074a0;
        if ((*(iVar6 + 0x48) == 0) || (pcVar7 = *(*(iVar6 + 0x48) + 8), pcVar7 == NULL)) {
            uVar3 = 0xfffffdf4;
            goto code_r0x080074a0;
        }
        if (1 < (pcVar7 + -0x8003a58 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar7,0x8000d80);
        }
        uVar2 = (*pcVar7)(iVar6,iVar8);
        if (uVar2 != 0) break;
        iVar8 = iVar8 + 1;
        iVar1 = iVar4;
    }
    uVar3 = uVar2;
    if (uVar2 == 0xffffffde) {
        uVar3 = 0;
    }
code_r0x080074a0:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iVar5) {
        return uVar3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18_00 = sym.mtd_ooblayout_count_eccbytes;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar5 = *(iVar1 + 0x5e0);
    iVar1 = iVar4;
    while( true ) {
        do {
            iVar6 = iVar1;
            iVar1 = *(iVar6 + 0x568);
        } while (*(iVar6 + 0x568) != 0);
        uVar3 = 0xffffffea;
        if ((iVar8 < 0) || (iVar6 == 0)) goto code_r0x080075c4;
        if ((*(iVar6 + 0x48) == NULL) || (pcVar7 = **(iVar6 + 0x48), pcVar7 == NULL)) break;
        if (1 < (pcVar7 + -0x8003a58 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar7,0x8000d60);
        }
        uVar2 = (*pcVar7)(iVar6,iVar8);
        if (uVar2 != 0) {
            uVar3 = uVar2;
            if (uVar2 == 0xffffffde) {
                uVar3 = 0;
            }
code_r0x080075c4:
            iVar1 = sp_el0;
            if (*(iVar1 + 0x5e0) == iVar5) {
                return uVar3;
            }
            auVar9 = __stack_chk_fail();
            *extraout_x18_01 = sym.mtd_get_fact_prot_info;
            iVar1 = auVar9._0_8_;
            do {
                iVar4 = iVar1;
                iVar1 = *(iVar4 + 0x568);
            } while (*(iVar4 + 0x568) != 0);
            pcVar7 = *(iVar4 + 0xb0);
            if (pcVar7 == NULL) {
                uVar3 = 0xffffffa1;
            }
            else if (auVar9._8_8_ == 0) {
                uVar3 = 0;
            }
            else {
                if (1 < (pcVar7 + -0x8003a40 >> 3 | pcVar7 << 0x3d)) {
                    __cfi_slowpath_diag(0xc610e2db308fc5b4,pcVar7,0x8000da0);
                }
                uVar3 = (*pcVar7)(iVar4,auVar9._8_8_);
            }
            return uVar3;
        }
        iVar8 = iVar8 + 1;
        iVar1 = iVar4;
    }
    uVar3 = 0xfffffdf4;
    goto code_r0x080075c4;
}


// ===== sym.register_mtd_user.cfi_jt @ 0x08003a10 (size 8) =====

code * sym.register_mtd_user.cfi_jt(int64_t *param_1)

{
    int64_t *piVar1;
    code *pcVar2;
    code *pcVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    code *pcVar7;
    int64_t iVar8;
    code *pcVar9;
    code *pcVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar11;
    code *unaff_x23;
    ulong unaff_x30;
    uchar auVar12 [16];
    int iStack_fc;
    int64_t iStack_f8;
    uchar **ppuStack_f0;
    code *pcStack_e8;
    code *pcStack_e0;
    code *pcStack_d0;
    int64_t iStack_c8;
    code *pcStack_b8;
    int iStack_ac;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    code *pcStack_90;
    code *pcStack_80;
    code *pcStack_78;
    code *pcStack_70;
    int64_t *piStack_68;
    code *pcStack_58;
    int iStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    mutex_lock(obj.dfs_dir_mtd);
    pcVar10 = _obj.mtd_notifiers;
    pcVar11 = param_1 + 2;
    pcVar9 = obj.mtd_notifiers;
    uVar5 = __list_add_valid(pcVar11,obj.mtd_notifiers,_obj.mtd_notifiers);
    if ((uVar5 & 1) != 0) {
        *(pcVar10 + 8) = pcVar11;
        param_1[2] = pcVar10;
        param_1[3] = obj.mtd_notifiers;
        _obj.mtd_notifiers = pcVar11;
    }
    __module_get(obj.__this_module);
    iStack_4c = 0;
    iVar6 = idr_get_next(obj.mtd_idr,&iStack_4c);
    if (iVar6 != 0) {
        unaff_x23 = sym.__typeid__ZTSFvP8mtd_infoE_global_addr;
        pcVar9 = obj.mtd_idr;
        pcVar11 = 0x8000c60;
        do {
            pcVar10 = *param_1;
            if (4 < (pcVar10 + -0x8003ce0 >> 3 | pcVar10 << 0x3d)) {
                pcStack_58 = pcVar10;
                __cfi_slowpath_diag(0xcda853bfdc928661,pcVar10,0x8000c60);
                pcVar10 = pcStack_58;
            }
            (*pcVar10)(iVar6);
            iStack_4c = *(iVar6 + 0x40) + 1;
            iVar6 = idr_get_next(obj.mtd_idr,&iStack_4c);
        } while (iVar6 != 0);
        pcVar10 = NULL;
    }
    pcVar7 = mutex_unlock(obj.dfs_dir_mtd);
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return pcVar7;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = sym.unregister_mtd_user;
    pcStack_98 = sym.unregister_mtd_user;
    iVar6 = sp_el0;
    iStack_a8 = *(iVar6 + 0x5e0);
    puStack_a0 = &stack0xffffffffffffffc0;
    pcStack_90 = unaff_x23;
    pcStack_80 = pcVar10;
    pcStack_78 = pcVar11;
    pcStack_70 = pcVar9;
    piStack_68 = param_1;
    mutex_lock(obj.dfs_dir_mtd);
    module_put(obj.__this_module);
    iStack_ac = 0;
    iVar6 = idr_get_next(obj.mtd_idr,&iStack_ac);
    if (iVar6 != 0) {
        pcVar9 = obj.mtd_idr;
        pcVar11 = 0x8000c80;
        do {
            pcVar10 = *(iVar8 + 8);
            if (4 < (pcVar10 + -0x8003ce0 >> 3 | pcVar10 << 0x3d)) {
                pcStack_b8 = pcVar10;
                __cfi_slowpath_diag(0xcda853bfdc928661,pcVar10,0x8000c80);
                pcVar10 = pcStack_b8;
            }
            (*pcVar10)(iVar6);
            iStack_ac = *(iVar6 + 0x40) + 1;
            iVar6 = idr_get_next(obj.mtd_idr,&iStack_ac);
        } while (iVar6 != 0);
    }
    uVar5 = __list_del_entry_valid(iVar8 + 0x10);
    if ((uVar5 & 1) != 0) {
        iVar6 = *(iVar8 + 0x10);
        piVar1 = *(iVar8 + 0x18);
        *(iVar6 + 8) = piVar1;
        *piVar1 = iVar6;
    }
    *(iVar8 + 0x10) = 0xdead000000000100;
    *(iVar8 + 0x18) = 0xdead000000000122;
    mutex_unlock(obj.dfs_dir_mtd);
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_a8) {
        return NULL;
    }
    auVar12 = __stack_chk_fail();
    pcVar10 = auVar12._0_8_;
    *extraout_x18_00 = sym.get_mtd_device;
    pcStack_e8 = sym.get_mtd_device;
    iVar6 = sp_el0;
    iStack_f8 = *(iVar6 + 0x5e0);
    ppuStack_f0 = &puStack_a0;
    pcStack_e0 = pcVar11;
    pcStack_d0 = pcVar9;
    iStack_c8 = iVar8;
    mutex_lock(obj.dfs_dir_mtd);
    if (auVar12._8_4_ == -1) {
        iStack_fc = 0;
        pcVar9 = idr_get_next(obj.mtd_idr,&iStack_fc);
        while (pcVar9 != NULL) {
            pcVar7 = pcVar10;
            if (pcVar9 == pcVar10) goto joined_r0x0800509c;
            iStack_fc = *(pcVar9 + 0x40) + 1;
            pcVar9 = idr_get_next(obj.mtd_idr,&iStack_fc);
        }
    }
    else if ((-1 < auVar12._8_4_) &&
            ((pcVar7 = idr_find(obj.mtd_idr,auVar12._8_8_ & 0xffffffff), pcVar10 == NULL || (pcVar7 == pcVar10)))) {
joined_r0x0800509c:
        pcVar9 = pcVar7;
        if (pcVar7 != NULL) {
            do {
                pcVar11 = pcVar9;
                pcVar9 = *(pcVar11 + 0x568);
            } while (*(pcVar11 + 0x568) != NULL);
            uVar5 = try_module_get(*(pcVar11 + 0x198));
            if ((uVar5 & 1) != 0) {
                pcVar10 = *(pcVar11 + 0x148);
                if (pcVar10 == NULL) goto code_r0x08005140;
                if (5 < (pcVar10 + -0x8003b40 >> 3 | pcVar10 << 0x3d)) goto code_r0x0800517c;
                goto code_r0x080050dc;
            }
        }
    }
    pcVar7 = 0xffffffffffffffed;
    while( true ) {
        mutex_unlock(obj.dfs_dir_mtd);
        iVar6 = sp_el0;
        if (*(iVar6 + 0x5e0) == iStack_f8) break;
        __stack_chk_fail();
code_r0x0800517c:
        __cfi_slowpath_diag(0x2c870642b6445e97,pcVar10,0x8000ca0);
code_r0x080050dc:
        uVar4 = (*pcVar10)(pcVar7);
        if (uVar4 == 0) {
code_r0x08005140:
            *(pcVar11 + 0x530) = *(pcVar11 + 0x530) + 1;
            pcVar3 = *(pcVar7 + 0x568);
            pcVar9 = pcVar7;
            while (pcVar2 = pcVar3, pcVar2 != NULL) {
                *(pcVar9 + 0x530) = *(pcVar9 + 0x530) + 1;
                pcVar9 = pcVar2;
                pcVar3 = *(pcVar2 + 0x568);
            }
        }
        else {
            pcVar10 = uVar4;
            module_put(*(pcVar11 + 0x198));
            pcVar7 = uVar4;
        }
    }
    return pcVar7;
}


// ===== sym.mtd_reboot_notifier.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt @ 0x08003a18 (size 8) =====

ulong sym.mtd_reboot_notifier.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = *(param_1 + -0x20);
    if (4 < (pcVar1 + -0x8003ce0 >> 3 | pcVar1 << 0x3d)) {
        __cfi_slowpath_diag(0xcda853bfdc928661,pcVar1,0x8000fa0);
    }
    (*pcVar1)(param_1 + -0x160);
    return 0;
}


// ===== sym.__register_mtd_parser.cfi_jt @ 0x08003a20 (size 8) =====

ulong sym.__register_mtd_parser.cfi_jt(int64_t *param_1,int64_t param_2)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    param_1[2] = param_2;
    if (param_1[6] == 0) {
        param_1[6] = sym.__typeid__ZTSFvPK13mtd_partitioniE_global_addr;
    }
    _raw_spin_lock(obj.part_parser_lock);
    iVar1 = _obj.part_parsers;
    uVar2 = __list_add_valid(param_1,obj.part_parsers,_obj.part_parsers);
    if ((uVar2 & 1) != 0) {
        *(iVar1 + 8) = param_1;
        *param_1 = iVar1;
        param_1[1] = obj.part_parsers;
        _segment.ehdr = param_1;
    }
    _raw_spin_unlock(obj.part_parser_lock);
    return 0;
}


// ===== sym.mtd_cls_suspend.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt @ 0x08003a28 (size 8) =====

ulong sym.mtd_cls_suspend.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt(int64_t param_1)

{
    uint8_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t iVar4;
    code *pcVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x98);
    if (*(param_1 + 0x98) != 0) {
        do {
            iVar4 = iVar2;
            iVar2 = *(iVar4 + 0x568);
        } while (*(iVar4 + 0x568) != 0);
        uVar1 = *(iVar4 + 0x608);
        if ((uVar1 & 1) == 0) {
            pcVar5 = *(iVar4 + 0x130);
            if (pcVar5 != NULL) {
                if (5 < (pcVar5 + -0x8003b40 >> 3 | pcVar5 << 0x3d)) {
                    __cfi_slowpath_diag(0x2c870642b6445e97,pcVar5,0x8000f60);
                }
                uVar3 = (*pcVar5)(iVar4);
                if (uVar3 != 0) {
                    return uVar3;
                }
                uVar1 = *(iVar4 + 0x608);
            }
            *(iVar4 + 0x608) = uVar1 | 1;
            return 0;
        }
    }
    return 0;
}


// ===== sym.mtd_cls_resume.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt @ 0x08003a30 (size 8) =====

ulong sym.mtd_cls_resume.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt(int64_t param_1)

{
    uint8_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x98);
    if (*(param_1 + 0x98) != 0) {
        do {
            iVar3 = iVar2;
            iVar2 = *(iVar3 + 0x568);
        } while (*(iVar3 + 0x568) != 0);
        uVar1 = *(iVar3 + 0x608);
        if ((uVar1 & 1) != 0) {
            pcVar4 = *(iVar3 + 0x138);
            if (pcVar4 != NULL) {
                if (4 < (pcVar4 + -0x8003ce0 >> 3 | pcVar4 << 0x3d)) {
                    __cfi_slowpath_diag(0xcda853bfdc928661,pcVar4,0x8000f80);
                }
                (*pcVar4)(iVar3);
                uVar1 = *(iVar3 + 0x608);
            }
            *(iVar3 + 0x608) = uVar1 & 0xfe;
        }
    }
    return 0;
}


// ===== sym.mtdchar_mmap.18d6f106550e603ffb0308a8a3875dd9.cfi_jt @ 0x08003a38 (size 8) =====

ulong sym.mtdchar_mmap.18d6f106550e603ffb0308a8a3875dd9.cfi_jt(void)

{
    return 0xffffffed;
}


// ===== sym.__typeid__ZTSFiP8mtd_infomPmP8otp_infoE_global_addr @ 0x08003a40 (size 8) =====

ulong sym.__typeid__ZTSFiP8mtd_infomPmP8otp_infoE_global_addr
                (int64_t param_1,int64_t param_2,ulong param_3,ulong param_4)

{
    ulong uVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    do {
        iVar2 = param_1;
        param_1 = *(iVar2 + 0x568);
    } while (*(iVar2 + 0x568) != 0);
    pcVar3 = *(iVar2 + 0xb0);
    if (pcVar3 == NULL) {
        uVar1 = 0xffffffa1;
    }
    else if (param_2 == 0) {
        uVar1 = 0;
    }
    else {
        if (1 < (pcVar3 + -0x8003a40 >> 3 | pcVar3 << 0x3d)) {
            __cfi_slowpath_diag(0xc610e2db308fc5b4,pcVar3,0x8000da0);
        }
        uVar1 = (*pcVar3)(iVar2,param_2,param_3,param_4);
    }
    return uVar1;
}


// ===== sym.mtd_get_user_prot_info.cfi_jt @ 0x08003a48 (size 8) =====

ulong sym.mtd_get_user_prot_info.cfi_jt(int64_t param_1,int64_t param_2,ulong param_3,ulong param_4)

{
    ulong uVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    do {
        iVar2 = param_1;
        param_1 = *(iVar2 + 0x568);
    } while (*(iVar2 + 0x568) != 0);
    pcVar3 = *(iVar2 + 0xc0);
    if (pcVar3 == NULL) {
        uVar1 = 0xffffffa1;
    }
    else if (param_2 == 0) {
        uVar1 = 0;
    }
    else {
        if (1 < (pcVar3 + -0x8003a40 >> 3 | pcVar3 << 0x3d)) {
            __cfi_slowpath_diag(0xc610e2db308fc5b4,pcVar3,0x8000de0);
        }
        uVar1 = (*pcVar3)(iVar2,param_2,param_3,param_4);
    }
    return uVar1;
}


// ===== sym.mtd_release.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt @ 0x08003a50 (size 8) =====

void sym.mtd_release.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    device_destroy(obj.mtd_class,*(*(param_1 + 0x98) + 0x40) << 1 | 0x5a00001);
    return;
}


// ===== sym.__typeid__ZTSFiP8mtd_infoiP14mtd_oob_regionE_global_addr @ 0x08003a58 (size 8) =====

uint sym.__typeid__ZTSFiP8mtd_infoiP14mtd_oob_regionE_global_addr(int64_t param_1,uint64_t param_2,ulong *param_3)

{
    uint uVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    do {
        iVar2 = param_1;
        param_1 = *(iVar2 + 0x568);
    } while (*(iVar2 + 0x568) != 0);
    uVar1 = 0xffffffea;
    *param_3 = 0;
    if ((-1 < param_2) && (iVar2 != 0)) {
        if ((*(iVar2 + 0x48) == NULL) || (pcVar3 = **(iVar2 + 0x48), pcVar3 == NULL)) {
            uVar1 = 0xfffffdf4;
        }
        else {
            if (1 < (pcVar3 + -0x8003a58 >> 3 | pcVar3 << 0x3d)) {
                __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar3,0x8000d60);
                param_2 = param_2 & 0xffffffff;
            }
            uVar1 = (*pcVar3)(iVar2,param_2,param_3);
        }
    }
    return uVar1;
}


// ===== sym.mtd_ooblayout_free.cfi_jt @ 0x08003a60 (size 8) =====

uint sym.mtd_ooblayout_free.cfi_jt(int64_t param_1,uint64_t param_2,ulong *param_3)

{
    uint uVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    do {
        iVar2 = param_1;
        param_1 = *(iVar2 + 0x568);
    } while (*(iVar2 + 0x568) != 0);
    uVar1 = 0xffffffea;
    *param_3 = 0;
    if ((-1 < param_2) && (iVar2 != 0)) {
        if ((*(iVar2 + 0x48) == 0) || (pcVar3 = *(*(iVar2 + 0x48) + 8), pcVar3 == NULL)) {
            uVar1 = 0xfffffdf4;
        }
        else {
            if (1 < (pcVar3 + -0x8003a58 >> 3 | pcVar3 << 0x3d)) {
                __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar3,0x8000d80);
                param_2 = param_2 & 0xffffffff;
            }
            uVar1 = (*pcVar3)(iVar2,param_2,param_3);
        }
    }
    return uVar1;
}


// ===== sym.mtd_ooblayout_get_databytes.cfi_jt @ 0x08003a68 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08007280)
//WARNING: Removing unreachable block (ram,0x08007294)
//WARNING: Removing unreachable block (ram,0x080073ac)
//WARNING: Removing unreachable block (ram,0x080072b4)
//WARNING: Removing unreachable block (ram,0x080072c0)
//WARNING: Removing unreachable block (ram,0x080072c4)
//WARNING: Removing unreachable block (ram,0x080072d0)
//WARNING: Removing unreachable block (ram,0x080072e0)
//WARNING: Removing unreachable block (ram,0x080072e4)
//WARNING: Removing unreachable block (ram,0x080072ec)
//WARNING: Removing unreachable block (ram,0x080072f4)
//WARNING: Removing unreachable block (ram,0x0800734c)
//WARNING: Removing unreachable block (ram,0x08007304)
//WARNING: Removing unreachable block (ram,0x08007318)
//WARNING: Removing unreachable block (ram,0x08007328)
//WARNING: Removing unreachable block (ram,0x08007348)
//WARNING: Removing unreachable block (ram,0x08007050)
//WARNING: Removing unreachable block (ram,0x08007064)
//WARNING: Removing unreachable block (ram,0x0800717c)
//WARNING: Removing unreachable block (ram,0x08007084)
//WARNING: Removing unreachable block (ram,0x08007090)
//WARNING: Removing unreachable block (ram,0x08007094)
//WARNING: Removing unreachable block (ram,0x080070a0)
//WARNING: Removing unreachable block (ram,0x080070b0)
//WARNING: Removing unreachable block (ram,0x080070b4)
//WARNING: Removing unreachable block (ram,0x080070bc)
//WARNING: Removing unreachable block (ram,0x080070c4)
//WARNING: Removing unreachable block (ram,0x0800711c)
//WARNING: Removing unreachable block (ram,0x080070d4)
//WARNING: Removing unreachable block (ram,0x080070e8)
//WARNING: Removing unreachable block (ram,0x080070f8)
//WARNING: Removing unreachable block (ram,0x08007118)

uint64_t sym.mtd_ooblayout_get_databytes.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    code *pcVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    int iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar4 = *(iVar1 + 0x5e0);
    iVar1 = param_1;
    while( true ) {
        do {
            iVar5 = iVar1;
            iVar1 = *(iVar5 + 0x568);
        } while (*(iVar5 + 0x568) != 0);
        uVar3 = 0xffffffea;
        if ((iVar8 < 0) || (iVar5 == 0)) goto code_r0x08007140;
        if ((*(iVar5 + 0x48) == 0) || (pcVar7 = *(*(iVar5 + 0x48) + 8), pcVar7 == NULL)) break;
        if (1 < (pcVar7 + -0x8003a58 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar7,0x8000d80);
        }
        uVar3 = (*pcVar7)(iVar5,iVar8);
        if (uVar3 != 0) goto code_r0x08007140;
        iVar8 = iVar8 + 1;
        iVar1 = param_1;
    }
    uVar3 = 0xfffffdf4;
code_r0x08007140:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iVar4) {
        return uVar3;
    }
    iVar4 = __stack_chk_fail(uVar3);
    *extraout_x18 = sym.mtd_ooblayout_set_databytes;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar5 = *(iVar1 + 0x5e0);
    iVar1 = iVar4;
    while( true ) {
        do {
            iVar6 = iVar1;
            iVar1 = *(iVar6 + 0x568);
        } while (*(iVar6 + 0x568) != 0);
        uVar3 = 0xffffffea;
        if ((iVar8 < 0) || (iVar6 == 0)) goto code_r0x08007370;
        if ((*(iVar6 + 0x48) == 0) || (pcVar7 = *(*(iVar6 + 0x48) + 8), pcVar7 == NULL)) break;
        if (1 < (pcVar7 + -0x8003a58 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar7,0x8000d80);
        }
        uVar3 = (*pcVar7)(iVar6,iVar8);
        if (uVar3 != 0) goto code_r0x08007370;
        iVar8 = iVar8 + 1;
        iVar1 = iVar4;
    }
    uVar3 = 0xfffffdf4;
code_r0x08007370:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iVar5) {
        return uVar3;
    }
    iVar4 = __stack_chk_fail(uVar3);
    *extraout_x18_00 = sym.mtd_ooblayout_count_freebytes;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar5 = *(iVar1 + 0x5e0);
    iVar1 = iVar4;
    while( true ) {
        do {
            iVar6 = iVar1;
            iVar1 = *(iVar6 + 0x568);
        } while (*(iVar6 + 0x568) != 0);
        uVar3 = 0xffffffea;
        if ((iVar8 < 0) || (iVar6 == 0)) goto code_r0x080074a0;
        if ((*(iVar6 + 0x48) == 0) || (pcVar7 = *(*(iVar6 + 0x48) + 8), pcVar7 == NULL)) {
            uVar3 = 0xfffffdf4;
            goto code_r0x080074a0;
        }
        if (1 < (pcVar7 + -0x8003a58 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar7,0x8000d80);
        }
        uVar2 = (*pcVar7)(iVar6,iVar8);
        if (uVar2 != 0) break;
        iVar8 = iVar8 + 1;
        iVar1 = iVar4;
    }
    uVar3 = uVar2;
    if (uVar2 == 0xffffffde) {
        uVar3 = 0;
    }
code_r0x080074a0:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iVar5) {
        return uVar3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18_01 = sym.mtd_ooblayout_count_eccbytes;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar5 = *(iVar1 + 0x5e0);
    iVar1 = iVar4;
    while( true ) {
        do {
            iVar6 = iVar1;
            iVar1 = *(iVar6 + 0x568);
        } while (*(iVar6 + 0x568) != 0);
        uVar3 = 0xffffffea;
        if ((iVar8 < 0) || (iVar6 == 0)) goto code_r0x080075c4;
        if ((*(iVar6 + 0x48) == NULL) || (pcVar7 = **(iVar6 + 0x48), pcVar7 == NULL)) break;
        if (1 < (pcVar7 + -0x8003a58 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar7,0x8000d60);
        }
        uVar2 = (*pcVar7)(iVar6,iVar8);
        if (uVar2 != 0) {
            uVar3 = uVar2;
            if (uVar2 == 0xffffffde) {
                uVar3 = 0;
            }
code_r0x080075c4:
            iVar1 = sp_el0;
            if (*(iVar1 + 0x5e0) != iVar5) {
                auVar9 = __stack_chk_fail();
                *extraout_x18_02 = sym.mtd_get_fact_prot_info;
                iVar1 = auVar9._0_8_;
                do {
                    iVar4 = iVar1;
                    iVar1 = *(iVar4 + 0x568);
                } while (*(iVar4 + 0x568) != 0);
                pcVar7 = *(iVar4 + 0xb0);
                if (pcVar7 == NULL) {
                    uVar3 = 0xffffffa1;
                }
                else if (auVar9._8_8_ == 0) {
                    uVar3 = 0;
                }
                else {
                    if (1 < (pcVar7 + -0x8003a40 >> 3 | pcVar7 << 0x3d)) {
                        __cfi_slowpath_diag(0xc610e2db308fc5b4,pcVar7,0x8000da0);
                    }
                    uVar3 = (*pcVar7)(iVar4,auVar9._8_8_);
                }
                return uVar3;
            }
            return uVar3;
        }
        iVar8 = iVar8 + 1;
        iVar1 = iVar4;
    }
    uVar3 = 0xfffffdf4;
    goto code_r0x080075c4;
}


// ===== sym.mtd_ooblayout_get_eccbytes.cfi_jt @ 0x08003a70 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08007280)
//WARNING: Removing unreachable block (ram,0x08007294)
//WARNING: Removing unreachable block (ram,0x080073ac)
//WARNING: Removing unreachable block (ram,0x080072b4)
//WARNING: Removing unreachable block (ram,0x080072c0)
//WARNING: Removing unreachable block (ram,0x080072c4)
//WARNING: Removing unreachable block (ram,0x080072d0)
//WARNING: Removing unreachable block (ram,0x080072e0)
//WARNING: Removing unreachable block (ram,0x080072e4)
//WARNING: Removing unreachable block (ram,0x080072ec)
//WARNING: Removing unreachable block (ram,0x080072f4)
//WARNING: Removing unreachable block (ram,0x0800734c)
//WARNING: Removing unreachable block (ram,0x08007304)
//WARNING: Removing unreachable block (ram,0x08007318)
//WARNING: Removing unreachable block (ram,0x08007328)
//WARNING: Removing unreachable block (ram,0x08007348)
//WARNING: Removing unreachable block (ram,0x08007050)
//WARNING: Removing unreachable block (ram,0x08007064)
//WARNING: Removing unreachable block (ram,0x0800717c)
//WARNING: Removing unreachable block (ram,0x08007084)
//WARNING: Removing unreachable block (ram,0x08007090)
//WARNING: Removing unreachable block (ram,0x08007094)
//WARNING: Removing unreachable block (ram,0x080070a0)
//WARNING: Removing unreachable block (ram,0x080070b0)
//WARNING: Removing unreachable block (ram,0x080070b4)
//WARNING: Removing unreachable block (ram,0x080070bc)
//WARNING: Removing unreachable block (ram,0x080070c4)
//WARNING: Removing unreachable block (ram,0x0800711c)
//WARNING: Removing unreachable block (ram,0x080070d4)
//WARNING: Removing unreachable block (ram,0x080070e8)
//WARNING: Removing unreachable block (ram,0x080070f8)
//WARNING: Removing unreachable block (ram,0x08007118)
//WARNING: Removing unreachable block (ram,0x08006e20)
//WARNING: Removing unreachable block (ram,0x08006e34)
//WARNING: Removing unreachable block (ram,0x08006f4c)
//WARNING: Removing unreachable block (ram,0x08006e54)
//WARNING: Removing unreachable block (ram,0x08006e60)
//WARNING: Removing unreachable block (ram,0x08006e64)
//WARNING: Removing unreachable block (ram,0x08006e70)
//WARNING: Removing unreachable block (ram,0x08006e80)
//WARNING: Removing unreachable block (ram,0x08006e84)
//WARNING: Removing unreachable block (ram,0x08006e8c)
//WARNING: Removing unreachable block (ram,0x08006e94)
//WARNING: Removing unreachable block (ram,0x08006eec)
//WARNING: Removing unreachable block (ram,0x08006ea4)
//WARNING: Removing unreachable block (ram,0x08006eb8)
//WARNING: Removing unreachable block (ram,0x08006ec8)
//WARNING: Removing unreachable block (ram,0x08006ee8)
//WARNING: Removing unreachable block (ram,0x08006bf0)
//WARNING: Removing unreachable block (ram,0x08006c04)
//WARNING: Removing unreachable block (ram,0x08006d1c)
//WARNING: Removing unreachable block (ram,0x08006c24)
//WARNING: Removing unreachable block (ram,0x08006c30)
//WARNING: Removing unreachable block (ram,0x08006c34)
//WARNING: Removing unreachable block (ram,0x08006c40)
//WARNING: Removing unreachable block (ram,0x08006c50)
//WARNING: Removing unreachable block (ram,0x08006c54)
//WARNING: Removing unreachable block (ram,0x08006c5c)
//WARNING: Removing unreachable block (ram,0x08006c64)
//WARNING: Removing unreachable block (ram,0x08006cbc)
//WARNING: Removing unreachable block (ram,0x08006c74)
//WARNING: Removing unreachable block (ram,0x08006c88)
//WARNING: Removing unreachable block (ram,0x08006c98)
//WARNING: Removing unreachable block (ram,0x08006cb8)

uint64_t sym.mtd_ooblayout_get_eccbytes.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    code *pcVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    int iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar4 = *(iVar1 + 0x5e0);
    iVar1 = param_1;
    while( true ) {
        do {
            iVar5 = iVar1;
            iVar1 = *(iVar5 + 0x568);
        } while (*(iVar5 + 0x568) != 0);
        uVar3 = 0xffffffea;
        if ((iVar8 < 0) || (iVar5 == 0)) goto code_r0x08006ce0;
        if ((*(iVar5 + 0x48) == NULL) || (pcVar7 = **(iVar5 + 0x48), pcVar7 == NULL)) break;
        if (1 < (pcVar7 + -0x8003a58 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar7,0x8000d60);
        }
        uVar3 = (*pcVar7)(iVar5,iVar8);
        if (uVar3 != 0) goto code_r0x08006ce0;
        iVar8 = iVar8 + 1;
        iVar1 = param_1;
    }
    uVar3 = 0xfffffdf4;
code_r0x08006ce0:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iVar4) {
        return uVar3;
    }
    iVar4 = __stack_chk_fail(uVar3);
    *extraout_x18 = sym.mtd_ooblayout_set_eccbytes;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar5 = *(iVar1 + 0x5e0);
    iVar1 = iVar4;
    while( true ) {
        do {
            iVar6 = iVar1;
            iVar1 = *(iVar6 + 0x568);
        } while (*(iVar6 + 0x568) != 0);
        uVar3 = 0xffffffea;
        if ((iVar8 < 0) || (iVar6 == 0)) goto code_r0x08006f10;
        if ((*(iVar6 + 0x48) == NULL) || (pcVar7 = **(iVar6 + 0x48), pcVar7 == NULL)) break;
        if (1 < (pcVar7 + -0x8003a58 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar7,0x8000d60);
        }
        uVar3 = (*pcVar7)(iVar6,iVar8);
        if (uVar3 != 0) goto code_r0x08006f10;
        iVar8 = iVar8 + 1;
        iVar1 = iVar4;
    }
    uVar3 = 0xfffffdf4;
code_r0x08006f10:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iVar5) {
        return uVar3;
    }
    iVar4 = __stack_chk_fail(uVar3);
    *extraout_x18_00 = sym.mtd_ooblayout_get_databytes;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar5 = *(iVar1 + 0x5e0);
    iVar1 = iVar4;
    while( true ) {
        do {
            iVar6 = iVar1;
            iVar1 = *(iVar6 + 0x568);
        } while (*(iVar6 + 0x568) != 0);
        uVar3 = 0xffffffea;
        if ((iVar8 < 0) || (iVar6 == 0)) goto code_r0x08007140;
        if ((*(iVar6 + 0x48) == 0) || (pcVar7 = *(*(iVar6 + 0x48) + 8), pcVar7 == NULL)) break;
        if (1 < (pcVar7 + -0x8003a58 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar7,0x8000d80);
        }
        uVar3 = (*pcVar7)(iVar6,iVar8);
        if (uVar3 != 0) goto code_r0x08007140;
        iVar8 = iVar8 + 1;
        iVar1 = iVar4;
    }
    uVar3 = 0xfffffdf4;
code_r0x08007140:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iVar5) {
        return uVar3;
    }
    iVar4 = __stack_chk_fail(uVar3);
    *extraout_x18_01 = sym.mtd_ooblayout_set_databytes;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar5 = *(iVar1 + 0x5e0);
    iVar1 = iVar4;
    while( true ) {
        do {
            iVar6 = iVar1;
            iVar1 = *(iVar6 + 0x568);
        } while (*(iVar6 + 0x568) != 0);
        uVar3 = 0xffffffea;
        if ((iVar8 < 0) || (iVar6 == 0)) goto code_r0x08007370;
        if ((*(iVar6 + 0x48) == 0) || (pcVar7 = *(*(iVar6 + 0x48) + 8), pcVar7 == NULL)) break;
        if (1 < (pcVar7 + -0x8003a58 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar7,0x8000d80);
        }
        uVar3 = (*pcVar7)(iVar6,iVar8);
        if (uVar3 != 0) goto code_r0x08007370;
        iVar8 = iVar8 + 1;
        iVar1 = iVar4;
    }
    uVar3 = 0xfffffdf4;
code_r0x08007370:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iVar5) {
        return uVar3;
    }
    iVar4 = __stack_chk_fail(uVar3);
    *extraout_x18_02 = sym.mtd_ooblayout_count_freebytes;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar5 = *(iVar1 + 0x5e0);
    iVar1 = iVar4;
    while( true ) {
        do {
            iVar6 = iVar1;
            iVar1 = *(iVar6 + 0x568);
        } while (*(iVar6 + 0x568) != 0);
        uVar3 = 0xffffffea;
        if ((iVar8 < 0) || (iVar6 == 0)) goto code_r0x080074a0;
        if ((*(iVar6 + 0x48) == 0) || (pcVar7 = *(*(iVar6 + 0x48) + 8), pcVar7 == NULL)) {
            uVar3 = 0xfffffdf4;
            goto code_r0x080074a0;
        }
        if (1 < (pcVar7 + -0x8003a58 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar7,0x8000d80);
        }
        uVar2 = (*pcVar7)(iVar6,iVar8);
        if (uVar2 != 0) break;
        iVar8 = iVar8 + 1;
        iVar1 = iVar4;
    }
    uVar3 = uVar2;
    if (uVar2 == 0xffffffde) {
        uVar3 = 0;
    }
code_r0x080074a0:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iVar5) {
        return uVar3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18_03 = sym.mtd_ooblayout_count_eccbytes;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar5 = *(iVar1 + 0x5e0);
    iVar1 = iVar4;
    while( true ) {
        do {
            iVar6 = iVar1;
            iVar1 = *(iVar6 + 0x568);
        } while (*(iVar6 + 0x568) != 0);
        uVar3 = 0xffffffea;
        if ((iVar8 < 0) || (iVar6 == 0)) goto code_r0x080075c4;
        if ((*(iVar6 + 0x48) == NULL) || (pcVar7 = **(iVar6 + 0x48), pcVar7 == NULL)) break;
        if (1 < (pcVar7 + -0x8003a58 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar7,0x8000d60);
        }
        uVar2 = (*pcVar7)(iVar6,iVar8);
        if (uVar2 != 0) {
            uVar3 = uVar2;
            if (uVar2 == 0xffffffde) {
                uVar3 = 0;
            }
code_r0x080075c4:
            iVar1 = sp_el0;
            if (*(iVar1 + 0x5e0) != iVar5) {
                auVar9 = __stack_chk_fail();
                *extraout_x18_04 = sym.mtd_get_fact_prot_info;
                iVar1 = auVar9._0_8_;
                do {
                    iVar4 = iVar1;
                    iVar1 = *(iVar4 + 0x568);
                } while (*(iVar4 + 0x568) != 0);
                pcVar7 = *(iVar4 + 0xb0);
                if (pcVar7 == NULL) {
                    uVar3 = 0xffffffa1;
                }
                else if (auVar9._8_8_ == 0) {
                    uVar3 = 0;
                }
                else {
                    if (1 < (pcVar7 + -0x8003a40 >> 3 | pcVar7 << 0x3d)) {
                        __cfi_slowpath_diag(0xc610e2db308fc5b4,pcVar7,0x8000da0);
                    }
                    uVar3 = (*pcVar7)(iVar4,auVar9._8_8_);
                }
                return uVar3;
            }
            return uVar3;
        }
        iVar8 = iVar8 + 1;
        iVar1 = iVar4;
    }
    uVar3 = 0xfffffdf4;
    goto code_r0x080075c4;
}


// ===== sym.mtdchar_lseek.18d6f106550e603ffb0308a8a3875dd9.cfi_jt @ 0x08003a78 (size 8) =====

void sym.mtdchar_lseek.18d6f106550e603ffb0308a8a3875dd9.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    fixed_size_llseek();
    return;
}


// ===== sym.seq_lseek.cfi_jt @ 0x08003a80 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_lseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.mtd_device_parse_register.cfi_jt @ 0x08003a88 (size 8) =====

uint64_t sym.mtd_device_parse_register.cfi_jt
                   (int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,uint32_t param_5)

{
    int iVar1;
    ulong uVar2;
    uint64_t uVar3;
    int64_t *piVar4;
    code *pcVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar7;
    ulong unaff_x30;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    code *pcStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    code *pcStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    int64_t iStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    piVar4 = *(param_1 + 0x200);
    if (piVar4 != NULL) {
        if ((*(param_1 + 0x198) == 0) && (piVar4[0x11] != 0)) {
            *(param_1 + 0x198) = *(piVar4[0x11] + 0x10);
        }
        if (*(param_1 + 0x38) == 0) {
            iVar6 = piVar4[0xe];
            if (iVar6 == 0) {
                iVar6 = *piVar4;
            }
            *(param_1 + 0x38) = iVar6;
        }
    }
    *(param_1 + 0x570) = param_1 + 0x570;
    *(param_1 + 0x578) = param_1 + 0x570;
    __mutex_init(param_1 + 0x5a8,"&mtd->master.partitions_lock",obj.mtd_set_dev_defaults.__key);
    __mutex_init(param_1 + 0x5d8,"&mtd->master.chrdev_lock",obj.mtd_set_dev_defaults.__key);
    iVar1 = sym.parse_mtd_partitions(param_1,param_2,param_3);
    if (iVar1 == -0x205) {
        uVar7 = 0xfffffdfb;
    }
    else {
        if (iVar1 < 1) {
            if (param_5 == 0) {
                if ((*(param_1 + 0x1dc) >> 1 & 1) != 0) goto code_r0x08004938;
                uVar7 = sym.add_mtd_device(param_1);
                iVar1 = uVar7;
            }
            else {
                uVar7 = sym.add_mtd_partitions(param_1,param_4,param_5);
                iVar1 = uVar7;
            }
            uVar7 = uVar7 & 0xffffffff;
            if (iVar1 != 0) goto code_r0x0800491c;
        }
code_r0x08004938:
        if (*(param_1 + 0x140) != 0) {
            if ((*(param_1 + 0x160) != 0) && (obj.mtd_device_parse_register.__already_done == 0x0)) {
                obj.mtd_device_parse_register.__already_done = 0x1;
                __warn_printk("MTD already registered\n");
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(0x800,0x8004c24);
                (*pcVar5)();
            }
            if (*(param_1 + 0x160) == 0) {
                *(param_1 + 0x160) = sym.mtd_reboot_notifier.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt;
                register_reboot_notifier();
            }
        }
        if ((*(param_1 + 0xc0) == 0) || (*(param_1 + 200) == 0)) {
code_r0x08004a60:
            if ((*(param_1 + 0xb0) == 0) || (*(param_1 + 0xb8) == 0)) {
                uVar7 = 0;
                goto code_r0x08004b60;
            }
            uVar7 = sym.mtd_otp_size(param_1,0);
            if (-1 < uVar7) {
                if (uVar7 == 0) goto code_r0x08004b60;
                uStack_58 = 0;
                uStack_50 = 0;
                uStack_68 = 0;
                iStack_60 = 0;
                uStack_78 = 0;
                uStack_70 = 0;
                uStack_88 = 0;
                pcStack_80 = NULL;
                uStack_98 = 0;
                uStack_90 = 0;
                uStack_a8 = 0;
                uStack_a0 = 0;
                uStack_b8 = 0;
                uStack_b0 = 0;
                pcStack_c8 = NULL;
                uStack_c0 = 0;
                uStack_d0 = 0;
                uVar2 = of_get_compatible_child(*(param_1 + 0x490),"factory-otp");
                uStack_e0 = *(param_1 + 0x200);
                iVar6 = *(param_1 + 0x210);
                if (iVar6 == 0) {
                    iVar6 = *(param_1 + 0x1a0);
                }
                uStack_d8 = kasprintf(0xcc0,"%s-%s",iVar6,"factory-otp");
                uStack_d0 = CONCAT44(uStack_d0._4_4_,0xffffffff);
                pcStack_c8 = obj.__this_module;
                uStack_a0 = CONCAT44(2,uStack_a0);
                uStack_98._0_3_ = CONCAT21(0x101,uStack_98);
                uStack_70 = CONCAT44(uStack_70._4_4_,uVar7);
                pcStack_80 = sym.mtd_nvmem_fact_otp_reg_read.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt;
                uStack_90 = uVar2;
                iStack_60 = param_1;
                uVar3 = nvmem_register(&uStack_e0);
                uVar7 = 0;
                if (uVar3 != 0xffffffffffffffa1) {
                    uVar7 = uVar3;
                }
                kfree(uStack_d8);
                if (uVar7 < 0xfffffffffffff001) {
                    *(param_1 + 0x560) = uVar7;
                    uVar7 = 0;
                    goto code_r0x08004b60;
                }
                _dev_err(param_1 + 0x1a0,"Failed to register OTP NVMEM device\n");
            }
            if (*(param_1 + 0x558) != 0) {
                nvmem_unregister();
            }
        }
        else {
            uVar7 = sym.mtd_otp_size(param_1,1);
            if (-1 < uVar7) {
                if (uVar7 != 0) {
                    uStack_58 = 0;
                    uStack_50 = 0;
                    uStack_68 = 0;
                    iStack_60 = 0;
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_88 = 0;
                    pcStack_80 = NULL;
                    uStack_98 = 0;
                    uStack_90 = 0;
                    uStack_a8 = 0;
                    uStack_a0 = 0;
                    uStack_b8 = 0;
                    uStack_b0 = 0;
                    pcStack_c8 = NULL;
                    uStack_c0 = 0;
                    uStack_d0 = 0;
                    uVar2 = of_get_compatible_child(*(param_1 + 0x490),"user-otp");
                    uStack_e0 = *(param_1 + 0x200);
                    iVar6 = *(param_1 + 0x210);
                    if (iVar6 == 0) {
                        iVar6 = *(param_1 + 0x1a0);
                    }
                    uStack_d8 = kasprintf(0xcc0,"%s-%s",iVar6,"user-otp");
                    uStack_d0 = CONCAT44(uStack_d0._4_4_,0xffffffff);
                    pcStack_c8 = obj.__this_module;
                    uStack_a0 = CONCAT44(2,uStack_a0);
                    uStack_98._0_3_ = CONCAT21(0x101,uStack_98);
                    uStack_70 = CONCAT44(uStack_70._4_4_,uVar7);
                    pcStack_80 = sym.mtd_nvmem_user_otp_reg_read.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt;
                    uStack_90 = uVar2;
                    iStack_60 = param_1;
                    uVar3 = nvmem_register(&uStack_e0);
                    uVar7 = 0;
                    if (uVar3 != 0xffffffffffffffa1) {
                        uVar7 = uVar3;
                    }
                    kfree(uStack_d8);
                    if (0xfffffffffffff000 < uVar7) {
                        _dev_err(param_1 + 0x1a0,"Failed to register OTP NVMEM device\n");
                        goto code_r0x08004c04;
                    }
                    *(param_1 + 0x558) = uVar7;
                }
                goto code_r0x08004a60;
            }
        }
code_r0x08004c04:
        if (uVar7 == 0) goto code_r0x08004b60;
    }
code_r0x0800491c:
    if ((*(param_1 + 0x1dc) >> 1 & 1) != 0) {
        sym.del_mtd_device(param_1);
    }
code_r0x08004b60:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return uVar7 & 0xffffffff;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.mtd_reboot_notifier;
    pcVar5 = *(iVar6 + -0x20);
    if (4 < (pcVar5 + -0x8003ce0 >> 3 | pcVar5 << 0x3d)) {
        __cfi_slowpath_diag(0xcda853bfdc928661,pcVar5,0x8000fa0);
    }
    (*pcVar5)(iVar6 + -0x160);
    return 0;
}


// ===== sym.init_module.cfi_jt @ 0x08003a90 (size 8) =====

uint64_t sym.init_module.cfi_jt(void)

{
    uint64_t uVar1;
    ulong *in_x18;
    uint64_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = __class_register(obj.mtd_class,obj.mtd_set_dev_defaults.__key);
    uVar2 = uVar1 & 0xffffffff;
    if (uVar1 == 0) {
        uVar2 = sym.mtd_bdi_init();
        _segment.ehdr = uVar2;
        if (uVar2 < 0xfffffffffffff001) {
            _segment.ehdr =
                 proc_create_single_data
                           (obj..str.llvm.17629688341332384884,0,0,
                            sym.mtd_proc_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt,0);
            uVar1 = sym.init_mtdchar();
            uVar2 = uVar1 & 0xffffffff;
            if (uVar1 == 0) {
                _segment.ehdr = debugfs_create_dir(obj..str.llvm.17629688341332384884,0);
                goto code_r0x0800e7dc;
            }
            if (_segment.ehdr != 0) {
                remove_proc_entry(obj..str.llvm.17629688341332384884,0);
            }
            bdi_put(_segment.ehdr);
        }
        class_unregister(obj.mtd_class);
    }
    _printk(0x80015aa,uVar2 & 0xffffffff);
code_r0x0800e7dc:
    return uVar2 & 0xffffffff;
}


// ===== sym.__typeid__ZTSFiP8mtd_infoxmPmPPvPyE_global_addr @ 0x08003a98 (size 8) =====

uint sym.__typeid__ZTSFiP8mtd_infoxmPmPPvPyE_global_addr
               (int64_t param_1,uint64_t param_2,uint64_t param_3,ulong *param_4,ulong *param_5,ulong *param_6)

{
    int64_t iVar1;
    int64_t iVar2;
    uint uVar3;
    int64_t iVar4;
    code *pcVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = param_1;
    do {
        iVar4 = iVar2;
        iVar2 = *(iVar4 + 0x568);
    } while (*(iVar4 + 0x568) != 0);
    *param_4 = 0;
    *param_5 = 0;
    if (param_6 != NULL) {
        *param_6 = 0;
    }
    pcVar5 = *(iVar4 + 0x78);
    if (pcVar5 == NULL) {
        uVar3 = 0xffffffa1;
    }
    else if (param_2 < 0) {
        uVar3 = 0xffffffea;
    }
    else {
        uVar3 = 0xffffffea;
        if ((param_2 < *(param_1 + 8)) && (param_3 <= *(param_1 + 8) - param_2)) {
            if (param_3 == 0) {
                uVar3 = 0;
            }
            else {
                iVar2 = *(param_1 + 0x568);
                while (iVar1 = iVar2, iVar1 != 0) {
                    param_2 = *(param_1 + 0x590) + param_2;
                    param_1 = iVar1;
                    iVar2 = *(iVar1 + 0x568);
                }
                if (pcVar5 != sym.__typeid__ZTSFiP8mtd_infoxmPmPPvPyE_global_addr) {
                    __cfi_slowpath_diag(0xb2aaf3b568e29a40,pcVar5,0x8000d00);
                }
                uVar3 = (*pcVar5)(iVar4,param_2,param_3,param_4,param_5,param_6);
            }
        }
    }
    return uVar3;
}


// ===== sym.mtd_add_partition.cfi_jt @ 0x08003aa0 (size 8) =====

uchar * sym.mtd_add_partition.cfi_jt(int64_t param_1,ulong param_2,uint64_t param_3,uint64_t param_4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uchar *puVar6;
    code *pcVar7;
    uint32_t uVar8;
    int iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uchar *puVar12;
    ulong *puVar13;
    uint64_t uVar14;
    uchar *puVar15;
    uchar *puVar16;
    uchar *puVar17;
    int64_t iVar18;
    int iVar19;
    int64_t iVar20;
    ulong uVar21;
    uint32_t uVar22;
    uint64_t *puVar23;
    ulong uVar24;
    ulong *in_x18;
    ulong *extraout_x18;
    uchar *puVar25;
    int64_t *piVar26;
    ulong unaff_x30;
    uchar auVar27 [16];
    ulong uStack_78;
    ulong uStack_70;
    uint64_t uStack_68;
    uint64_t uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar20 = sp_el0;
    iStack_48 = *(iVar20 + 0x5e0);
    iVar20 = param_1;
    do {
        iVar18 = iVar20;
        iVar20 = *(iVar18 + 0x568);
    } while (iVar20 != 0);
    iVar20 = 8;
    if (*(param_1 + 0x568) != 0) {
        iVar20 = 0x598;
    }
    if (param_3 < 0xfffffffffffffffe) {
        uVar10 = *(param_1 + iVar20) - param_3;
        if (param_4 != 0) {
            uVar10 = param_4;
        }
        if (0 < uVar10) {
            uStack_70 = 0;
            uVar14 = 0xffffffff;
            uStack_58 = 0;
            uStack_50 = 0;
            param_4 = param_3;
            uStack_78 = param_2;
            uStack_68 = uVar10;
            uStack_60 = param_3;
            uVar10 = sym.allocate_partition(param_1,&uStack_78,0xffffffff,param_3);
            if (uVar10 < 0xfffffffffffff001) {
                iVar18 = iVar18 + 0x5a8;
                mutex_lock(iVar18);
                piVar26 = *(param_1 + 0x578);
                iVar20 = uVar10 + 0x580;
                uVar14 = param_1 + 0x570;
                param_3 = uVar14;
                uVar11 = __list_add_valid(iVar20,piVar26,uVar14);
                if ((uVar11 & 1) != 0) {
                    *(param_1 + 0x578) = iVar20;
                    *(uVar10 + 0x580) = uVar14;
                    *(uVar10 + 0x588) = piVar26;
                    *piVar26 = iVar20;
                }
                mutex_unlock(iVar18);
                uVar8 = sym.add_mtd_device(uVar10);
                if (uVar8 == 0) {
                    iVar9 = sysfs_create_files(uVar10 + 0x1a0,obj.mtd_partition_attrs);
                    if (iVar9 != 0) {
                        _printk(0x8001726,iVar9);
                    }
                    puVar25 = NULL;
                }
                else {
                    puVar25 = uVar8;
                    mutex_lock(iVar18);
                    uVar14 = __list_del_entry_valid(iVar20);
                    if ((uVar14 & 1) != 0) {
                        piVar26 = *(uVar10 + 0x588);
                        iVar20 = *(uVar10 + 0x580);
                        *(iVar20 + 8) = piVar26;
                        *piVar26 = iVar20;
                    }
                    *(uVar10 + 0x580) = 0xdead000000000100;
                    *(uVar10 + 0x588) = 0xdead000000000122;
                    mutex_unlock(iVar18);
                    kfree(*(uVar10 + 0x38));
                    kfree(uVar10);
                }
            }
            else {
                puVar25 = uVar10 & 0xffffffff;
                param_3 = uVar14;
            }
            goto code_r0x0800ad60;
        }
    }
    puVar25 = 0xffffffea;
code_r0x0800ad60:
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_48) {
        return puVar25;
    }
    auVar27 = __stack_chk_fail();
    puVar13 = auVar27._8_8_;
    puVar12 = auVar27._0_8_;
    *extraout_x18 = sym.allocate_partition;
    puVar25 = puVar12;
    do {
        puVar16 = puVar25;
        puVar25 = *(puVar16 + 0x568);
    } while (*(puVar16 + 0x568) != NULL);
    iVar20 = 0x10;
    if ((*(puVar12 + 4) & 0x1000) != 0) {
        iVar20 = 0x14;
    }
    iVar18 = 8;
    if (*(puVar12 + 0x568) != 0) {
        iVar18 = 0x598;
    }
    uVar8 = *(puVar16 + iVar20);
    uVar10 = *(puVar12 + iVar18);
    puVar25 = kmem_cache_alloc_trace(_seq_read,0xdc0,0x610);
    iVar20 = kstrdup(*puVar13,0xcc0);
    if ((iVar20 == 0) || (puVar25 == NULL)) {
        _printk(0x8001691,*(puVar12 + 0x38));
        kfree(iVar20);
        kfree(puVar25);
        puVar25 = 0xfffffffffffffff4;
    }
    else {
        uVar22 = *(puVar13 + 4);
        uVar1 = *(puVar13 + 0x24);
        uVar2 = *(puVar12 + 4);
        *(puVar25 + 0x38) = iVar20;
        uVar24 = puVar13[2];
        uVar3 = *(puVar12 + 0x14);
        *puVar25 = *puVar12;
        uVar1 = uVar1 | uVar2 & (uVar22 ^ 0xffffffff);
        uVar21 = *(puVar12 + 0x18);
        *(puVar25 + 0x598) = uVar24;
        *(puVar25 + 0x14) = uVar3;
        uVar3 = *(puVar12 + 0x20);
        *(puVar25 + 0x5a0) = uVar1;
        *(puVar25 + 4) = uVar1;
        uVar4 = *(puVar12 + 0x188);
        *(puVar25 + 0x18) = uVar21;
        uVar21 = *(puVar12 + 0x198);
        *(puVar25 + 0x20) = uVar3;
        iVar20 = *(puVar12 + 0x568);
        *(puVar25 + 0x188) = uVar4;
        *(puVar25 + 0x198) = uVar21;
        if (iVar20 == 0) {
            puVar15 = *(puVar12 + 0x200);
        }
        else {
            puVar15 = puVar12 + 0x1a0;
        }
        *(puVar25 + 0x200) = puVar15;
        uVar14 = puVar13[3];
        uVar21 = puVar13[5];
        puVar23 = puVar25 + 0x590;
        *(puVar25 + 0x568) = puVar12;
        *(puVar25 + 0x590) = uVar14;
        *(puVar25 + 0x490) = uVar21;
        *(puVar25 + 0x570) = puVar25 + 0x570;
        *(puVar25 + 0x578) = puVar25 + 0x570;
        if (uVar14 == 0xffffffffffffffff) {
            *puVar23 = param_4;
            uVar14 = param_4;
        }
        if (uVar14 == 0xfffffffffffffffe) {
            iVar9 = 0;
            if (uVar8 != 0) {
                iVar9 = param_4 / uVar8;
            }
            *puVar23 = param_4;
            iVar9 = param_4 - iVar9 * uVar8;
            uVar14 = param_4;
            if (iVar9 != 0) {
                *puVar23 = (uVar8 - iVar9) + param_4;
                _printk(0x8001203,param_3 & 0xffffffff,param_4);
                uVar14 = *puVar23;
            }
        }
        if (uVar14 == 0xfffffffffffffffd) {
            *(puVar25 + 0x590) = param_4;
            iVar20 = (uVar10 - param_4) - *(puVar25 + 0x598);
            if (uVar10 - param_4 < *(puVar25 + 0x598)) {
                _printk(0x8001a86,*puVar13);
                return puVar25;
            }
            *(puVar25 + 0x598) = iVar20;
        }
        else {
            iVar20 = *(puVar25 + 0x598);
            param_4 = uVar14;
        }
        if (iVar20 == 0) {
            iVar20 = uVar10 - param_4;
            *(puVar25 + 0x598) = iVar20;
        }
        _printk(0x800187a,param_4,iVar20 + param_4,*(puVar25 + 0x38));
        uVar14 = *(puVar25 + 0x590);
        if (uVar10 < uVar14 || uVar10 - uVar14 == 0) {
            uVar3 = *(puVar12 + 0x10);
            uVar21 = *puVar13;
            *puVar23 = 0;
            *(puVar25 + 0x598) = 0;
            *(puVar25 + 0x10) = uVar3;
            _printk(0x8001633,uVar21);
        }
        else {
            if (*(puVar12 + 8) < *(puVar25 + 0x598) + uVar14) {
                uVar21 = *puVar13;
                uVar24 = *(puVar12 + 0x38);
                *(puVar25 + 0x598) = uVar10 - uVar14;
                _printk(0x8001acf,uVar21,uVar24);
            }
            uVar22 = *(puVar12 + 0x60);
            if (uVar22 < 2) {
                uVar22 = *(puVar16 + 0x10);
                *(puVar25 + 0x10) = uVar22;
            }
            else {
                uVar10 = 0;
                puVar23 = *(puVar12 + 0x68);
                do {
                    if (*(puVar25 + 0x590) < *puVar23) goto code_r0x0800b0e4;
                    uVar10 = uVar10 + 1;
                    puVar23 = puVar23 + 3;
                } while (uVar22 != uVar10);
                uVar10 = uVar22;
code_r0x0800b0e4:
                iVar9 = 0;
                if (uVar10 != 0) {
                    iVar9 = uVar10 + -1;
                }
                if (iVar9 < uVar22) {
                    iVar19 = uVar22 - iVar9;
                    puVar23 = *(puVar12 + 0x68) + iVar9 * 3 + 1;
                    do {
                        if (*(puVar25 + 0x598) + *(puVar25 + 0x590) <= puVar23[-1]) break;
                        if (*(puVar25 + 0x10) < *puVar23) {
                            *(puVar25 + 0x10) = *puVar23;
                        }
                        iVar19 = iVar19 + -1;
                        puVar23 = puVar23 + 3;
                    } while (iVar19 != 0);
                }
                uVar22 = *(puVar25 + 0x10);
                if (uVar22 == 0) {
    //WARNING: Does not return
                    pcVar7 = SoftwareBreakpoint(0x800,0x800b2a8);
                    (*pcVar7)();
                }
            }
            uVar1 = *(puVar25 + 4);
            puVar16 = *(puVar25 + 0x568);
            if ((uVar1 & 0x1000) != 0) {
                uVar22 = uVar8;
            }
            uVar14 = uVar22;
            uVar10 = 0;
            puVar17 = puVar16;
            puVar15 = puVar25;
            while (puVar6 = puVar17, puVar6 != NULL) {
                uVar10 = *(puVar15 + 0x590) + uVar10;
                puVar15 = puVar6;
                puVar17 = *(puVar6 + 0x568);
            }
            if ((uVar1 >> 10 & 1) != 0) {
                uVar11 = 0;
                if (uVar14 != 0) {
                    uVar11 = uVar10 / uVar14;
                }
                if (uVar10 != uVar11 * uVar14) {
                    uVar21 = *puVar13;
                    *(puVar25 + 4) = uVar1 & 0xfffffbff;
                    _printk(0x80012d5,uVar21);
                    puVar16 = *(puVar25 + 0x568);
                }
            }
            iVar20 = 0;
            if (puVar16 != NULL) {
                iVar20 = 0;
                puVar15 = puVar25;
                do {
                    puVar17 = puVar16;
                    puVar16 = *(puVar17 + 0x568);
                    iVar20 = *(puVar15 + 0x590) + iVar20;
                    puVar15 = puVar17;
                } while (puVar16 != NULL);
            }
            iVar18 = *(puVar25 + 0x598);
            if ((*(puVar25 + 4) >> 10 & 1) != 0) {
                uVar10 = 0;
                if (uVar14 != 0) {
                    uVar10 = (iVar18 + iVar20) / uVar14;
                }
                if (iVar18 + iVar20 != uVar10 * uVar14) {
                    uVar21 = *puVar13;
                    *(puVar25 + 4) = *(puVar25 + 4) & 0xfffffbff;
                    _printk(0x800123d,uVar21);
                    iVar18 = *(puVar25 + 0x598);
                }
            }
            uVar3 = *(puVar12 + 0x58);
            uVar4 = *(puVar12 + 0x5c);
            *(puVar25 + 8) = iVar18;
            uVar5 = *(puVar12 + 0x34);
            *(puVar25 + 0x58) = uVar3;
            *(puVar25 + 0x5c) = uVar4;
            *(puVar25 + 0x34) = uVar5;
        }
    }
    return puVar25;
}


// ===== sym.mtd_proc_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt @ 0x08003aa8 (size 8) =====

uchar * sym.mtd_proc_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt(ulong param_1)

{
    code *pcVar1;
    int64_t iVar2;
    uchar *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar4 [16];
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    seq_puts(param_1,"dev:    size   erasesize  name\n");
    mutex_lock(obj.dfs_dir_mtd);
    iStack_3c = 0;
    iVar2 = idr_get_next(obj.mtd_idr,&iStack_3c);
    while (iVar2 != 0) {
        seq_printf(param_1,"mtd%d: %8.8llx %8.8x \"%s\"\n",*(iVar2 + 0x40),*(iVar2 + 8),*(iVar2 + 0x10),
                   *(iVar2 + 0x38));
        iStack_3c = *(iVar2 + 0x40) + 1;
        iVar2 = idr_get_next(obj.mtd_idr,&iStack_3c);
    }
    mutex_unlock(obj.dfs_dir_mtd);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return NULL;
    }
    auVar4 = __stack_chk_fail();
    puVar3 = auVar4._0_8_;
    *extraout_x18 = sym.__cfi_check_fail;
    if (puVar3 != NULL) {
        switch(*puVar3) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            __ubsan_handle_cfi_check_fail_abort(puVar3,auVar4._8_8_,0);
            break;
        default:
            return puVar3;
        }
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8009048);
    (*pcVar1)();
}


// ===== sym.mtd_partid_debug_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt @ 0x08003ab0 (size 8) =====

ulong sym.mtd_partid_debug_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    seq_printf(param_1,0x8001b3d,*(*(param_1 + 0x80) + 0x548));
    return 0;
}


// ===== sym.mtd_partname_debug_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt @ 0x08003ab8 (size 8) =====

ulong sym.mtd_partname_debug_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    seq_printf(param_1,0x8001b3d,*(*(param_1 + 0x80) + 0x540));
    return 0;
}


// ===== sym.mtdchar_open.18d6f106550e603ffb0308a8a3875dd9.cfi_jt @ 0x08003ac0 (size 8) =====

uint64_t sym.mtdchar_open.18d6f106550e603ffb0308a8a3875dd9.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    char *arg1;
    ulong *puVar2;
    ulong *in_x18;
    uint64_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((*(param_2 + 0x44) >> 1 & 1) == 0) || ((*(param_1 + 0x4c) & 1) == 0)) {
        arg1 = sym.get_mtd_device(0,*(param_1 + 0x4c) >> 1 & 0x7ffff);
        if (arg1 < 0xfffffffffffff001) {
            if (*arg1 == '\0') {
                uVar3 = 0xffffffed;
            }
            else if (((*(param_2 + 0x44) >> 1 & 1) == 0) || ((arg1[5] >> 2 & 1) != 0)) {
                iVar1 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar1 = 0x30;
                }
                puVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x10);
                if (puVar2 != NULL) {
                    *puVar2 = arg1;
                    *(param_2 + 0xd8) = puVar2;
                    return 0;
                }
                uVar3 = 0xfffffff4;
            }
            else {
                uVar3 = 0xfffffff3;
            }
            sym.put_mtd_device(arg1);
        }
        else {
            uVar3 = arg1 & 0xffffffff;
        }
    }
    else {
        uVar3 = 0xfffffff3;
    }
    return uVar3;
}


// ===== sym.mtd_partid_debug_open.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt @ 0x08003ac8 (size 8) =====

void sym.mtd_partid_debug_open.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.mtd_partid_debug_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.single_release.cfi_jt @ 0x08003ad0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.single_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.mtd_partname_debug_open.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt @ 0x08003ad8 (size 8) =====

void sym.mtd_partname_debug_open.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.mtd_partname_debug_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.mtdchar_close.18d6f106550e603ffb0308a8a3875dd9.cfi_jt @ 0x08003ae0 (size 8) =====

ulong sym.mtdchar_close.18d6f106550e603ffb0308a8a3875dd9.cfi_jt(ulong param_1,int64_t param_2)

{
    int64_t iVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong *in_x18;
    int64_t *piVar4;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(param_2 + 0xd8);
    arg1 = *piVar4;
    iVar1 = arg1;
    if ((*(param_2 + 0x44) >> 1 & 1) != 0) {
        do {
            iVar2 = iVar1;
            iVar1 = *(iVar2 + 0x568);
        } while (*(iVar2 + 0x568) != 0);
        pcVar3 = *(iVar2 + 0xf0);
        if (pcVar3 != NULL) {
            if (4 < (pcVar3 + -0x8003ce0 >> 3 | pcVar3 << 0x3d)) {
                __cfi_slowpath_diag(0xcda853bfdc928661,pcVar3,0x8001100);
            }
            (*pcVar3)(iVar2);
        }
    }
    sym.put_mtd_device(arg1);
    *(param_2 + 0xd8) = 0;
    kfree(piVar4);
    return 0;
}


// ===== sym.mtd_kmalloc_up_to.cfi_jt @ 0x08003ae8 (size 8) =====

void sym.mtd_kmalloc_up_to.cfi_jt(int64_t param_1,uint64_t *param_2)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(param_1 + 0x14);
    uVar3 = *param_2;
    if (*(param_1 + 0x14) < 0x1001) {
        uVar2 = 0x1000;
    }
    if (0x3fffff < uVar3) {
        uVar3 = 0x400000;
    }
    *param_2 = uVar3;
    while( true ) {
        if (uVar3 <= uVar2) {
            __kmalloc(uVar3,0xcc0);
            return;
        }
        iVar1 = __kmalloc(uVar3,0x12400);
        if (iVar1 != 0) break;
        uVar3 = *param_2;
        *param_2 = uVar3 >> 1;
        uVar3 = ((uVar3 >> 1) + *(param_1 + 0x14)) - 1 & -*(param_1 + 0x14);
        *param_2 = uVar3;
    }
    return;
}


// ===== sym.mtdchar_write.18d6f106550e603ffb0308a8a3875dd9.cfi_jt @ 0x08003af0 (size 8) =====

int64_t sym.mtdchar_write.18d6f106550e603ffb0308a8a3875dd9.cfi_jt
                  (int64_t param_1,int64_t param_2,ulong *param_3,uint64_t *param_4)

{
    code *pcVar1;
    int iVar2;
    int64_t arg1;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar6;
    int64_t iVar7;
    ulong *puVar8;
    int64_t *piVar9;
    ulong *puVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    ulong uStack_b8;
    ulong *puStack_b0;
    int64_t iStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    ulong *puStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    piVar9 = *(param_1 + 0xd8);
    uVar4 = *param_4;
    iVar7 = *piVar9;
    iStack_78 = 0;
    uVar5 = *(iVar7 + 8);
    puStack_70 = param_3;
    if (uVar5 < uVar4 || uVar5 - uVar4 == NULL) {
        iVar6 = -0x1c;
    }
    else {
        puVar10 = uVar5 - uVar4;
        if (uVar4 + param_3 <= uVar5) {
            puVar10 = param_3;
        }
        if (puVar10 == NULL) {
            iVar6 = 0;
        }
        else {
            arg1 = sym.mtd_kmalloc_up_to(iVar7,&puStack_70);
            if (arg1 == 0) {
                iVar6 = -0xc;
            }
            else {
                iVar6 = 0;
                do {
                    puVar8 = puVar10;
                    if (puStack_70 <= puVar10) {
                        puVar8 = puStack_70;
                    }
                    if (0x7fffffff00000000 < puVar8 << 0x20) {
    //WARNING: Does not return
                        pcVar1 = SoftwareBreakpoint(0x800,0x800c2e8);
                        (*pcVar1)();
                    }
                    puVar8 = puVar8;
                    __check_object_size(arg1,puVar8,0);
                    param_3 = puVar8;
                    iVar3 = sym._copy_from_user(arg1,param_2,puVar8);
                    if (iVar3 != 0) {
                        kfree(arg1);
                        iVar6 = -0xe;
                        goto code_r0x0800c2f4;
                    }
                    iVar2 = piVar9[1];
                    if (iVar2 != 2) {
                        if (iVar2 == 3) {
                            param_3 = &uStack_b8;
                            uStack_98 = 0;
                            uStack_90 = 0;
                            iStack_a8 = 0;
                            uStack_a0 = 0;
                            uStack_b8 = 2;
                            uStack_80 = 0;
                            puStack_b0 = puVar8;
                            iStack_88 = arg1;
                            iVar2 = sym.mtd_write_oob(iVar7,*param_4,param_3);
                            iStack_78 = iStack_a8;
                            goto joined_r0x0800c280;
                        }
                        if (iVar2 != 1) {
                            iVar2 = sym.mtd_write(iVar7,*param_4,puVar8,&iStack_78);
                            param_3 = puVar8;
                            goto joined_r0x0800c280;
                        }
                        iVar2 = -0x1e;
code_r0x0800c2d4:
                        kfree(arg1);
                        iVar6 = iVar2;
                        goto code_r0x0800c2f4;
                    }
                    iVar2 = sym.mtd_write_user_prot_reg(iVar7,*param_4,puVar8,&iStack_78);
                    param_3 = puVar8;
joined_r0x0800c280:
                    if ((iVar2 == -0x1c) && (iVar6 != 0)) break;
                    if (iVar2 != 0) goto code_r0x0800c2d4;
                    iVar6 = iStack_78 + iVar6;
                    puVar10 = puVar10 - iStack_78;
                    param_2 = param_2 + iStack_78;
                    *param_4 = *param_4 + iStack_78;
                } while (puVar10 != NULL);
                kfree(arg1);
            }
        }
    }
code_r0x0800c2f4:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_68) {
        auVar11 = __stack_chk_fail();
        *extraout_x18 = sym.mtdchar_unlocked_ioctl;
        iVar7 = **(auVar11._0_8_ + 0xd8);
        do {
            iVar6 = iVar7;
            iVar7 = *(iVar6 + 0x568);
        } while (iVar7 != 0);
        iVar6 = iVar6 + 0x5d8;
        mutex_lock(iVar6);
        iVar2 = sym.mtdchar_ioctl(auVar11._0_8_,auVar11._8_8_ & 0xffffffff,param_3);
        mutex_unlock(iVar6);
        return iVar2;
    }
    return iVar6;
}


// ===== sym.__typeid__ZTSFiP8mtd_infoxmPmPKhE_global_addr @ 0x08003af8 (size 8) =====

uint64_t sym.__typeid__ZTSFiP8mtd_infoxmPmPKhE_global_addr
                   (int64_t param_1,int64_t param_2,ulong param_3,ulong *param_4,ulong param_5)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int *arg3;
    int64_t iVar5;
    int *piVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    code *pcVar10;
    int iVar11;
    uint64_t uVar12;
    int iVar13;
    uint64_t uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar15 [16];
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    int64_t iVar4;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    uStack_68 = 0;
    arg3 = &uStack_68;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_30 = 0;
    uStack_60 = param_3;
    uStack_38 = param_5;
    uVar3 = sym.mtd_write_oob(param_1,param_2,arg3);
    *param_4 = uStack_58;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    auVar15 = __stack_chk_fail();
    uVar3 = auVar15._8_8_;
    iVar4 = auVar15._0_8_;
    *extraout_x18 = sym.mtd_write_oob;
    iVar7 = iVar4;
    do {
        iVar8 = iVar7;
        iVar7 = *(iVar8 + 0x568);
    } while (*(iVar8 + 0x568) != 0);
    piVar6 = arg3 + 4;
    piVar6[0] = 0;
    piVar6[1] = 0;
    arg3[8] = 0;
    arg3[9] = 0;
    if ((*(iVar4 + 5) >> 2 & 1) == 0) {
        return 0xffffffe2;
    }
    iVar7 = *(arg3 + 0xc);
    if (iVar7 == 0) {
        arg3[2] = 0;
        arg3[3] = 0;
        iVar9 = *(arg3 + 0xe);
    }
    else {
        iVar9 = *(arg3 + 0xe);
    }
    if (iVar9 == 0) {
        arg3[6] = 0;
        arg3[7] = 0;
    }
    if (-1 < uVar3) {
        iVar5 = *(arg3 + 2);
        uVar12 = *(iVar4 + 8);
        if (iVar5 + uVar3 <= uVar12) {
            if (*(arg3 + 6) == 0) {
code_r0x080060c0:
                if (*(iVar8 + 0xa8) == 0) {
                    if (*(iVar8 + 0x90) == 0) {
                        return 0xffffffa1;
                    }
                    if (iVar9 != 0) {
                        return 0xffffffa1;
                    }
                }
                iVar8 = iVar4;
                if ((*(iVar4 + 5) >> 6 & 1) == 0) {
                    do {
                        iVar9 = iVar8;
                        iVar8 = *(iVar9 + 0x568);
                    } while (*(iVar9 + 0x568) != 0);
                    iVar4 = *(iVar4 + 0x568);
                    while( true ) {
                        iVar8 = auVar15._8_8_;
                        if (iVar4 == 0) break;
                        auVar15._8_8_ = *(auVar15._0_8_ + 0x590) + iVar8;
                        auVar15._0_8_ = iVar4;
                        iVar4 = *(iVar4 + 0x568);
                    }
                    pcVar10 = *(iVar9 + 0xa8);
                    if (pcVar10 == NULL) {
                        pcVar10 = *(iVar9 + 0x90);
                        if (4 < (pcVar10 + -0x8003af8 >> 3 | pcVar10 << 0x3d)) {
                            __cfi_slowpath_diag(0x870dfec9503a5e92,pcVar10,0x8001020);
                            iVar5 = *(arg3 + 2);
                            iVar7 = *(arg3 + 0xc);
                        }
                        uVar3 = (*pcVar10)(iVar9,iVar8,iVar5,piVar6,iVar7);
                    }
                    else {
                        if (3 < (pcVar10 + -0x8003c70 >> 3 | pcVar10 << 0x3d)) {
                            __cfi_slowpath_diag(0x38a5cf1b120bf637,pcVar10,0x8001000);
                        }
                        uVar3 = (*pcVar10)(iVar9,iVar8,arg3);
                    }
                }
                else {
                    uVar3 = sym.mtd_io_emulated_slc(iVar4,uVar3,0,arg3);
                }
                return uVar3 & 0xffffffff;
            }
            iVar1 = 0x20;
            if (*arg3 != 1) {
                iVar1 = 0x1c;
            }
            if (arg3[10] < *(iVar4 + iVar1)) {
                uVar2 = *(iVar4 + 0x28);
                if (uVar2 == 0) {
                    uVar14 = *(iVar4 + 0x14);
                    iVar11 = 0;
                    if (uVar14 != 0) {
                        iVar11 = uVar12 / uVar14;
                    }
                    iVar13 = 0;
                    if (uVar14 != 0) {
                        iVar13 = uVar3 / uVar14;
                    }
                }
                else {
                    iVar11 = uVar12 >> (uVar2 & 0x3f);
                    iVar13 = uVar3 >> (uVar2 & 0x3f);
                }
                if (*(arg3 + 6) <= (iVar11 - iVar13) * *(iVar4 + iVar1) - arg3[10]) goto code_r0x080060c0;
            }
        }
    }
    return 0xffffffea;
}


// ===== sym.concat_write.8f101c1e8640207a5ff62187927e46fd.cfi_jt @ 0x08003b00 (size 8) =====

uint64_t sym.concat_write.8f101c1e8640207a5ff62187927e46fd.cfi_jt
                   (int64_t param_1,uint64_t param_2,int64_t param_3,int64_t *param_4)

{
    uint64_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t *puVar6;
    uint64_t *puVar7;
    uint64_t *puVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    int iVar12;
    uint64_t uVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    int64_t iVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar17;
    ulong unaff_x30;
    uchar auVar18 [16];
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar17 = sp_el0;
    iStack_48 = *(iVar17 + 0x5e0);
    iVar12 = *(param_1 + 0x610);
    if (0 < iVar12) {
        iVar17 = 0;
        do {
            iVar4 = *(*(param_1 + 0x618) + iVar17 * 8);
            iStack_50 = 0;
            uVar10 = *(iVar4 + 8);
            uVar5 = param_2 - uVar10;
            if (param_2 < uVar10) {
                iVar9 = uVar10 - param_2;
                if (param_3 + param_2 <= uVar10) {
                    iVar9 = param_3;
                }
                uVar5 = sym.mtd_write(iVar4,param_2,iVar9,&iStack_50);
                if (uVar5 != 0) goto code_r0x0800a4c0;
                param_3 = param_3 - iVar9;
                *param_4 = *param_4 + iStack_50;
                if (param_3 == 0) goto code_r0x0800a4c0;
                uVar5 = 0;
                iVar12 = *(param_1 + 0x610);
            }
            iVar17 = iVar17 + 1;
            param_2 = uVar5;
        } while (iVar17 < iVar12);
    }
    uVar5 = 0xffffffea;
code_r0x0800a4c0:
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_48) {
        return uVar5;
    }
    auVar18 = __stack_chk_fail(uVar5);
    puVar7 = auVar18._8_8_;
    iVar17 = auVar18._0_8_;
    *extraout_x18 = sym.concat_erase;
    uVar3 = *(iVar17 + 0x60);
    if (uVar3 == 0) {
        uVar5 = *(iVar17 + 0x10) - 1;
        if (((*puVar7 & uVar5) == 0) && ((puVar7[1] & uVar5) == 0)) {
code_r0x0800a634:
            iVar4 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar4 = 0x30;
            }
            puVar6 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar4),0xcc0,0x18);
            if (puVar6 == NULL) {
                return 0xfffffff4;
            }
            uVar5 = puVar7[1];
            uVar3 = *(iVar17 + 0x610);
            uVar10 = puVar7[2];
            *puVar6 = *puVar7;
            puVar6[1] = uVar5;
            puVar6[2] = uVar10;
            if (0 < uVar3) {
                uVar10 = 0;
                iVar4 = 0;
                iVar9 = *(iVar17 + 0x618);
                uVar11 = *puVar6;
                do {
                    iVar16 = *(iVar9 + uVar10 * 8);
                    uVar13 = *(iVar16 + 8);
                    uVar1 = uVar11 - uVar13;
                    if (uVar11 < uVar13) {
                        if (uVar5 != 0) goto code_r0x0800a6cc;
                        goto code_r0x0800a748;
                    }
                    *puVar6 = uVar1;
                    uVar10 = uVar10 + 1;
                    iVar4 = *(iVar16 + 8) + iVar4;
                    uVar11 = uVar1;
                } while (uVar3 != uVar10);
            }
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800a6c8);
            (*pcVar2)();
        }
    }
    else if (0 < uVar3) {
        puVar8 = *(iVar17 + 0x68);
        uVar5 = 0;
        uVar10 = *puVar7;
        puVar6 = puVar8;
        do {
            if (uVar10 < *puVar6) goto code_r0x0800a564;
            uVar5 = uVar5 + 1;
            puVar6 = puVar6 + 3;
        } while (uVar3 != uVar5);
        uVar5 = uVar3;
code_r0x0800a564:
        iVar12 = uVar5;
        if ((iVar12 != 0) && (uVar14 = iVar12 - 1, (uVar10 & puVar8[uVar14 * 3 + 1] - 1) == 0)) {
            uVar15 = uVar14;
            if (iVar12 <= uVar3) {
                puVar6 = puVar8 + uVar14 * 3;
                do {
                    uVar15 = uVar14;
                    if (puVar7[1] + uVar10 < *puVar6) break;
                    uVar14 = uVar14 + 1;
                    puVar6 = puVar6 + 3;
                    uVar15 = uVar3;
                } while (uVar3 != uVar14);
            }
            if ((-1 < uVar15 - 1) && ((puVar7[1] + uVar10 & puVar8[(uVar15 - 1) * 3 + 1] - 1U) == 0))
            goto code_r0x0800a634;
        }
    }
    return 0xffffffea;
code_r0x0800a6cc:
    iVar9 = *(iVar9 + uVar10 * 8);
    uVar1 = *(iVar9 + 8) - uVar11;
    if (uVar5 + uVar11 <= *(iVar9 + 8)) {
        uVar1 = uVar5;
    }
    puVar6[1] = uVar1;
    uVar3 = sym.mtd_erase(iVar9,puVar6);
    if (uVar3 != 0) {
        uVar5 = uVar3;
        if (uVar3 == 0xffffffea) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800a75c);
            (*pcVar2)();
        }
        if (puVar6[2] != 0xffffffffffffffff) {
            puVar7[2] = puVar6[2] + iVar4;
        }
        goto code_r0x0800a74c;
    }
    uVar5 = uVar5 - uVar1;
    *puVar6 = 0;
    if (uVar5 == 0) {
code_r0x0800a748:
        uVar5 = 0;
code_r0x0800a74c:
        kfree(puVar6);
        return uVar5;
    }
    uVar11 = 0;
    uVar10 = uVar10 + 1;
    iVar4 = *(iVar9 + 8) + iVar4;
    iVar9 = *(iVar17 + 0x618);
    goto code_r0x0800a6cc;
}


// ===== sym.mtd_write_user_prot_reg.cfi_jt @ 0x08003b08 (size 8) =====

uint64_t sym.mtd_write_user_prot_reg.cfi_jt
                   (int64_t param_1,ulong param_2,int64_t param_3,int64_t *param_4,ulong param_5)

{
    uint64_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    do {
        iVar3 = param_1;
        param_1 = *(iVar3 + 0x568);
    } while (*(iVar3 + 0x568) != 0);
    *param_4 = 0;
    pcVar4 = *(iVar3 + 0xd0);
    if (pcVar4 == NULL) {
        uVar1 = 0xffffffa1;
    }
    else if (param_3 == 0) {
        uVar1 = 0;
    }
    else {
        if (4 < (pcVar4 + -0x8003af8 >> 3 | pcVar4 << 0x3d)) {
            __cfi_slowpath_diag(0x870dfec9503a5e92,pcVar4,0x8000e20);
        }
        uVar1 = (*pcVar4)(iVar3,param_2,param_3,param_4,param_5);
        if (uVar1 == 0) {
            uVar2 = 0xffffffe4;
            if (*param_4 != 0) {
                uVar2 = 0;
            }
            uVar1 = uVar2;
        }
    }
    return uVar1;
}


// ===== sym.mtd_panic_write.cfi_jt @ 0x08003b10 (size 8) =====

uint sym.mtd_panic_write.cfi_jt(int64_t param_1,uint64_t param_2,uint64_t param_3,ulong *param_4,ulong param_5)

{
    int64_t iVar1;
    int64_t iVar2;
    uint uVar3;
    int64_t iVar4;
    code *pcVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = param_1;
    do {
        iVar4 = iVar2;
        iVar2 = *(iVar4 + 0x568);
    } while (*(iVar4 + 0x568) != 0);
    *param_4 = 0;
    pcVar5 = *(iVar4 + 0x98);
    if (pcVar5 == NULL) {
        uVar3 = 0xffffffa1;
    }
    else if (param_2 < 0) {
        uVar3 = 0xffffffea;
    }
    else {
        uVar3 = 0xffffffea;
        if ((param_2 < *(param_1 + 8)) && (param_3 <= *(param_1 + 8) - param_2)) {
            if ((*(param_1 + 5) >> 2 & 1) == 0) {
                uVar3 = 0xffffffe2;
            }
            else if (param_3 == 0) {
                uVar3 = 0;
            }
            else {
                if (*(iVar4 + 0x158) == '\0') {
                    *(iVar4 + 0x158) = 1;
                }
                if ((pcVar5 + -0x8003af8 >> 3 | pcVar5 << 0x3d) < 5) {
                    iVar2 = *(param_1 + 0x568);
                }
                else {
                    __cfi_slowpath_diag(0x870dfec9503a5e92,pcVar5,0x8000d40);
                    iVar2 = *(param_1 + 0x568);
                }
                while (iVar1 = iVar2, iVar1 != 0) {
                    param_2 = *(param_1 + 0x590) + param_2;
                    param_1 = iVar1;
                    iVar2 = *(iVar1 + 0x568);
                }
                uVar3 = (*pcVar5)(iVar4,param_2,param_3,param_4,param_5);
            }
        }
    }
    return uVar3;
}


// ===== sym.concat_panic_write.8f101c1e8640207a5ff62187927e46fd.cfi_jt @ 0x08003b18 (size 8) =====

uint64_t sym.concat_panic_write.8f101c1e8640207a5ff62187927e46fd.cfi_jt
                   (int64_t param_1,uint64_t param_2,int64_t param_3,int64_t *param_4,int64_t param_5)

{
    code *pcVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint64_t *puVar7;
    uint64_t uVar8;
    uint64_t *puVar9;
    int64_t *piVar10;
    int64_t *piVar11;
    uint64_t *puVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    uint32_t uVar16;
    uint32_t uVar17;
    int64_t iVar18;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t unaff_x19;
    int64_t *unaff_x20;
    int64_t unaff_x21;
    int64_t unaff_x22;
    int64_t unaff_x23;
    int64_t unaff_x24;
    int64_t iVar19;
    ulong unaff_x30;
    uchar auVar20 [16];
    int64_t iStack_100;
    int64_t iStack_f8;
    uchar **ppuStack_f0;
    code *pcStack_e8;
    int64_t iStack_e0;
    int64_t iStack_d8;
    int64_t iStack_d0;
    int64_t iStack_c8;
    int64_t *piStack_c0;
    int64_t iStack_b8;
    int64_t iStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    iVar2 = *(param_1 + 0x610);
    piVar10 = param_4;
    if (0 < iVar2) {
        unaff_x24 = 0;
        unaff_x19 = param_5;
        unaff_x22 = param_3;
        do {
            iVar4 = *(*(param_1 + 0x618) + unaff_x24 * 8);
            iStack_50 = 0;
            uVar13 = *(iVar4 + 8);
            uVar5 = param_2 - uVar13;
            if (param_2 < uVar13) {
                unaff_x23 = uVar13 - param_2;
                if (unaff_x22 + param_2 <= uVar13) {
                    unaff_x23 = unaff_x22;
                }
                param_3 = unaff_x23;
                piVar10 = &iStack_50;
                param_5 = unaff_x19;
                uVar5 = sym.mtd_panic_write(iVar4,param_2,unaff_x23,&iStack_50);
                if (uVar5 != 0) {
                    if (uVar5 == -0x5f) {
                        _printk(0x8001800);
                        uVar5 = 0xffffffa1;
                    }
                    goto code_r0x0800a250;
                }
                unaff_x22 = unaff_x22 - unaff_x23;
                *param_4 = *param_4 + iStack_50;
                if (unaff_x22 == 0) goto code_r0x0800a250;
                uVar5 = 0;
                unaff_x19 = unaff_x19 + unaff_x23;
                iVar2 = *(param_1 + 0x610);
            }
            unaff_x24 = unaff_x24 + 1;
            param_2 = uVar5;
            unaff_x20 = param_4;
            unaff_x21 = param_1;
        } while (unaff_x24 < iVar2);
    }
    param_1 = unaff_x21;
    param_4 = unaff_x20;
    uVar5 = 0xffffffea;
code_r0x0800a250:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return uVar5;
    }
    auVar20 = __stack_chk_fail(uVar5);
    iStack_c8 = auVar20._0_8_;
    *extraout_x18 = sym.concat_read;
    pcStack_98 = sym.concat_read;
    ppuStack_f0 = &puStack_a0;
    iVar4 = sp_el0;
    iStack_a8 = *(iVar4 + 0x5e0);
    iVar2 = *(iStack_c8 + 0x610);
    piVar11 = piVar10;
    puStack_a0 = &stack0xffffffffffffffc0;
    if (0 < iVar2) {
        unaff_x24 = 0;
        uVar13 = 0;
        uVar5 = auVar20._8_8_;
        unaff_x19 = param_5;
        unaff_x22 = param_3;
        do {
            iVar4 = *(*(iStack_c8 + 0x618) + unaff_x24 * 8);
            iStack_b0 = 0;
            uVar14 = *(iVar4 + 8);
            uVar8 = uVar5 - uVar14;
            if (uVar5 < uVar14) {
                unaff_x23 = uVar14 - uVar5;
                if (uVar5 + unaff_x22 <= uVar14) {
                    unaff_x23 = unaff_x22;
                }
                param_3 = unaff_x23;
                piVar11 = &iStack_b0;
                uVar5 = sym.mtd_read(iVar4,uVar5,unaff_x23,&iStack_b0);
                iVar2 = uVar5;
                if (iVar2 != 0) {
                    if (iVar2 == -0x4a) {
                        *(iStack_c8 + 0x17c) = *(iStack_c8 + 0x17c) + 1;
                        uVar13 = 0xffffffb6;
                    }
                    else {
                        if (iVar2 != -0x75) goto code_r0x0800a3bc;
                        uVar3 = 0xffffff8b;
                        if (uVar13 != 0) {
                            uVar3 = uVar13;
                        }
                        *(iStack_c8 + 0x178) = *(iStack_c8 + 0x178) + 1;
                        uVar13 = uVar3;
                    }
                }
                uVar5 = uVar13;
                unaff_x22 = unaff_x22 - unaff_x23;
                *piVar10 = *piVar10 + iStack_b0;
                if (unaff_x22 == 0) goto code_r0x0800a3bc;
                uVar8 = 0;
                unaff_x19 = unaff_x19 + unaff_x23;
                iVar2 = *(iStack_c8 + 0x610);
                uVar13 = uVar5;
            }
            unaff_x24 = unaff_x24 + 1;
            uVar5 = uVar8;
            param_4 = piVar10;
            param_1 = iStack_c8;
        } while (unaff_x24 < iVar2);
    }
    uVar5 = 0xffffffea;
    piVar10 = param_4;
    iStack_c8 = param_1;
code_r0x0800a3bc:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_a8) {
        return uVar5;
    }
    auVar20 = __stack_chk_fail(uVar5);
    iVar19 = auVar20._0_8_;
    *extraout_x18_00 = sym.concat_write;
    pcStack_e8 = sym.concat_write;
    iVar4 = sp_el0;
    iStack_f8 = *(iVar4 + 0x5e0);
    iVar2 = *(iVar19 + 0x610);
    iStack_e0 = unaff_x24;
    iStack_d8 = unaff_x23;
    iStack_d0 = unaff_x22;
    piStack_c0 = piVar10;
    iStack_b8 = unaff_x19;
    if (0 < iVar2) {
        iVar4 = 0;
        uVar5 = auVar20._8_8_;
        do {
            iVar6 = *(*(iVar19 + 0x618) + iVar4 * 8);
            iStack_100 = 0;
            uVar8 = *(iVar6 + 8);
            uVar13 = uVar5 - uVar8;
            if (uVar5 < uVar8) {
                iVar18 = uVar8 - uVar5;
                if (param_3 + uVar5 <= uVar8) {
                    iVar18 = param_3;
                }
                uVar5 = sym.mtd_write(iVar6,uVar5,iVar18,&iStack_100);
                if (uVar5 != 0) goto code_r0x0800a4c0;
                param_3 = param_3 - iVar18;
                *piVar11 = *piVar11 + iStack_100;
                if (param_3 == 0) goto code_r0x0800a4c0;
                uVar13 = 0;
                iVar2 = *(iVar19 + 0x610);
            }
            iVar4 = iVar4 + 1;
            uVar5 = uVar13;
        } while (iVar4 < iVar2);
    }
    uVar5 = 0xffffffea;
code_r0x0800a4c0:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_f8) {
        return uVar5;
    }
    auVar20 = __stack_chk_fail(uVar5);
    puVar9 = auVar20._8_8_;
    iVar4 = auVar20._0_8_;
    *extraout_x18_01 = sym.concat_erase;
    uVar3 = *(iVar4 + 0x60);
    if (uVar3 == 0) {
        uVar5 = *(iVar4 + 0x10) - 1;
        if (((*puVar9 & uVar5) == 0) && ((puVar9[1] & uVar5) == 0)) {
code_r0x0800a634:
            iVar19 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar19 = 0x30;
            }
            puVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar19),0xcc0,0x18);
            if (puVar7 == NULL) {
                return 0xfffffff4;
            }
            uVar5 = puVar9[1];
            uVar3 = *(iVar4 + 0x610);
            uVar13 = puVar9[2];
            *puVar7 = *puVar9;
            puVar7[1] = uVar5;
            puVar7[2] = uVar13;
            if (0 < uVar3) {
                uVar13 = 0;
                iVar19 = 0;
                iVar6 = *(iVar4 + 0x618);
                uVar8 = *puVar7;
                do {
                    iVar18 = *(iVar6 + uVar13 * 8);
                    uVar15 = *(iVar18 + 8);
                    uVar14 = uVar8 - uVar15;
                    if (uVar8 < uVar15) {
                        if (uVar5 != 0) goto code_r0x0800a6cc;
                        goto code_r0x0800a748;
                    }
                    *puVar7 = uVar14;
                    uVar13 = uVar13 + 1;
                    iVar19 = *(iVar18 + 8) + iVar19;
                    uVar8 = uVar14;
                } while (uVar3 != uVar13);
            }
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x800a6c8);
            (*pcVar1)();
        }
    }
    else if (0 < uVar3) {
        puVar12 = *(iVar4 + 0x68);
        uVar5 = 0;
        uVar13 = *puVar9;
        puVar7 = puVar12;
        do {
            if (uVar13 < *puVar7) goto code_r0x0800a564;
            uVar5 = uVar5 + 1;
            puVar7 = puVar7 + 3;
        } while (uVar3 != uVar5);
        uVar5 = uVar3;
code_r0x0800a564:
        iVar2 = uVar5;
        if ((iVar2 != 0) && (uVar16 = iVar2 - 1, (uVar13 & puVar12[uVar16 * 3 + 1] - 1) == 0)) {
            uVar17 = uVar16;
            if (iVar2 <= uVar3) {
                puVar7 = puVar12 + uVar16 * 3;
                do {
                    uVar17 = uVar16;
                    if (puVar9[1] + uVar13 < *puVar7) break;
                    uVar16 = uVar16 + 1;
                    puVar7 = puVar7 + 3;
                    uVar17 = uVar3;
                } while (uVar3 != uVar16);
            }
            if ((-1 < uVar17 - 1) && ((puVar9[1] + uVar13 & puVar12[(uVar17 - 1) * 3 + 1] - 1U) == 0))
            goto code_r0x0800a634;
        }
    }
    return 0xffffffea;
code_r0x0800a6cc:
    iVar6 = *(iVar6 + uVar13 * 8);
    uVar14 = *(iVar6 + 8) - uVar8;
    if (uVar5 + uVar8 <= *(iVar6 + 8)) {
        uVar14 = uVar5;
    }
    puVar7[1] = uVar14;
    uVar3 = sym.mtd_erase(iVar6,puVar7);
    if (uVar3 != 0) {
        uVar5 = uVar3;
        if (uVar3 == 0xffffffea) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x800a75c);
            (*pcVar1)();
        }
        if (puVar7[2] != 0xffffffffffffffff) {
            puVar9[2] = puVar7[2] + iVar19;
        }
        goto code_r0x0800a74c;
    }
    uVar5 = uVar5 - uVar14;
    *puVar7 = 0;
    if (uVar5 == 0) {
code_r0x0800a748:
        uVar5 = 0;
code_r0x0800a74c:
        kfree(puVar7);
        return uVar5;
    }
    uVar8 = 0;
    uVar13 = uVar13 + 1;
    iVar19 = *(iVar6 + 8) + iVar19;
    iVar6 = *(iVar4 + 0x618);
    goto code_r0x0800a6cc;
}


// ===== sym.__typeid__ZTSFiP8mtd_infoxmPmPhE_global_addr @ 0x08003b20 (size 8) =====

ulong sym.__typeid__ZTSFiP8mtd_infoxmPmPhE_global_addr
                (int64_t param_1,ulong param_2,int64_t param_3,ulong *param_4,ulong param_5)

{
    ulong uVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    do {
        iVar2 = param_1;
        param_1 = *(iVar2 + 0x568);
    } while (*(iVar2 + 0x568) != 0);
    *param_4 = 0;
    pcVar3 = *(iVar2 + 0xb8);
    if (pcVar3 == NULL) {
        uVar1 = 0xffffffa1;
    }
    else if (param_3 == 0) {
        uVar1 = 0;
    }
    else {
        if (3 < (pcVar3 + -0x8003b20 >> 3 | pcVar3 << 0x3d)) {
            __cfi_slowpath_diag(0xbbecc41de69d7c2b,pcVar3,0x8000dc0);
        }
        uVar1 = (*pcVar3)(iVar2,param_2,param_3,param_4,param_5);
    }
    return uVar1;
}


// ===== sym.concat_read.8f101c1e8640207a5ff62187927e46fd.cfi_jt @ 0x08003b28 (size 8) =====

uint64_t sym.concat_read.8f101c1e8640207a5ff62187927e46fd.cfi_jt
                   (int64_t param_1,uint64_t param_2,int64_t param_3,int64_t *param_4,int64_t param_5)

{
    uint64_t uVar1;
    code *pcVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t *puVar7;
    uint64_t uVar8;
    uint64_t *puVar9;
    int64_t *piVar10;
    uint64_t *puVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    int64_t iVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x19;
    int64_t *unaff_x20;
    int64_t unaff_x21;
    int64_t unaff_x22;
    int64_t unaff_x23;
    int64_t unaff_x24;
    uint64_t uVar17;
    int64_t iVar18;
    ulong unaff_x30;
    uchar auVar19 [16];
    int64_t iStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    int64_t iStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    int64_t *piStack_70;
    int64_t iStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    iVar3 = *(param_1 + 0x610);
    piVar10 = param_4;
    if (0 < iVar3) {
        unaff_x24 = 0;
        uVar17 = 0;
        unaff_x19 = param_5;
        unaff_x22 = param_3;
        do {
            iVar5 = *(*(param_1 + 0x618) + unaff_x24 * 8);
            iStack_60 = 0;
            uVar12 = *(iVar5 + 8);
            uVar8 = param_2 - uVar12;
            if (param_2 < uVar12) {
                unaff_x23 = uVar12 - param_2;
                if (param_2 + unaff_x22 <= uVar12) {
                    unaff_x23 = unaff_x22;
                }
                param_3 = unaff_x23;
                piVar10 = &iStack_60;
                uVar12 = sym.mtd_read(iVar5,param_2,unaff_x23,&iStack_60);
                iVar3 = uVar12;
                if (iVar3 != 0) {
                    if (iVar3 == -0x4a) {
                        *(param_1 + 0x17c) = *(param_1 + 0x17c) + 1;
                        uVar17 = 0xffffffb6;
                    }
                    else {
                        if (iVar3 != -0x75) goto code_r0x0800a3bc;
                        uVar4 = 0xffffff8b;
                        if (uVar17 != 0) {
                            uVar4 = uVar17;
                        }
                        *(param_1 + 0x178) = *(param_1 + 0x178) + 1;
                        uVar17 = uVar4;
                    }
                }
                uVar12 = uVar17;
                unaff_x22 = unaff_x22 - unaff_x23;
                *param_4 = *param_4 + iStack_60;
                if (unaff_x22 == 0) goto code_r0x0800a3bc;
                uVar8 = 0;
                unaff_x19 = unaff_x19 + unaff_x23;
                iVar3 = *(param_1 + 0x610);
                uVar17 = uVar12;
            }
            unaff_x24 = unaff_x24 + 1;
            param_2 = uVar8;
            unaff_x20 = param_4;
            unaff_x21 = param_1;
        } while (unaff_x24 < iVar3);
    }
    uVar12 = 0xffffffea;
    param_4 = unaff_x20;
    param_1 = unaff_x21;
code_r0x0800a3bc:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_58) {
        return uVar12;
    }
    auVar19 = __stack_chk_fail(uVar12);
    iVar18 = auVar19._0_8_;
    *extraout_x18 = sym.concat_write;
    pcStack_98 = sym.concat_write;
    iVar5 = sp_el0;
    iStack_a8 = *(iVar5 + 0x5e0);
    iVar3 = *(iVar18 + 0x610);
    puStack_a0 = &stack0xffffffffffffffb0;
    iStack_90 = unaff_x24;
    iStack_88 = unaff_x23;
    iStack_80 = unaff_x22;
    iStack_78 = param_1;
    piStack_70 = param_4;
    iStack_68 = unaff_x19;
    if (0 < iVar3) {
        iVar5 = 0;
        uVar17 = auVar19._8_8_;
        do {
            iVar6 = *(*(iVar18 + 0x618) + iVar5 * 8);
            iStack_b0 = 0;
            uVar12 = *(iVar6 + 8);
            uVar8 = uVar17 - uVar12;
            if (uVar17 < uVar12) {
                iVar16 = uVar12 - uVar17;
                if (param_3 + uVar17 <= uVar12) {
                    iVar16 = param_3;
                }
                uVar17 = sym.mtd_write(iVar6,uVar17,iVar16,&iStack_b0);
                if (uVar17 != 0) goto code_r0x0800a4c0;
                param_3 = param_3 - iVar16;
                *piVar10 = *piVar10 + iStack_b0;
                if (param_3 == 0) goto code_r0x0800a4c0;
                uVar8 = 0;
                iVar3 = *(iVar18 + 0x610);
            }
            iVar5 = iVar5 + 1;
            uVar17 = uVar8;
        } while (iVar5 < iVar3);
    }
    uVar17 = 0xffffffea;
code_r0x0800a4c0:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_a8) {
        return uVar17;
    }
    auVar19 = __stack_chk_fail(uVar17);
    puVar9 = auVar19._8_8_;
    iVar5 = auVar19._0_8_;
    *extraout_x18_00 = sym.concat_erase;
    uVar4 = *(iVar5 + 0x60);
    if (uVar4 == 0) {
        uVar17 = *(iVar5 + 0x10) - 1;
        if (((*puVar9 & uVar17) == 0) && ((puVar9[1] & uVar17) == 0)) {
code_r0x0800a634:
            iVar18 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar18 = 0x30;
            }
            puVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar18),0xcc0,0x18);
            if (puVar7 == NULL) {
                return 0xfffffff4;
            }
            uVar17 = puVar9[1];
            uVar4 = *(iVar5 + 0x610);
            uVar8 = puVar9[2];
            *puVar7 = *puVar9;
            puVar7[1] = uVar17;
            puVar7[2] = uVar8;
            if (0 < uVar4) {
                uVar8 = 0;
                iVar18 = 0;
                iVar6 = *(iVar5 + 0x618);
                uVar12 = *puVar7;
                do {
                    iVar16 = *(iVar6 + uVar8 * 8);
                    uVar13 = *(iVar16 + 8);
                    uVar1 = uVar12 - uVar13;
                    if (uVar12 < uVar13) {
                        if (uVar17 != 0) goto code_r0x0800a6cc;
                        goto code_r0x0800a748;
                    }
                    *puVar7 = uVar1;
                    uVar8 = uVar8 + 1;
                    iVar18 = *(iVar16 + 8) + iVar18;
                    uVar12 = uVar1;
                } while (uVar4 != uVar8);
            }
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800a6c8);
            (*pcVar2)();
        }
    }
    else if (0 < uVar4) {
        puVar11 = *(iVar5 + 0x68);
        uVar17 = 0;
        uVar8 = *puVar9;
        puVar7 = puVar11;
        do {
            if (uVar8 < *puVar7) goto code_r0x0800a564;
            uVar17 = uVar17 + 1;
            puVar7 = puVar7 + 3;
        } while (uVar4 != uVar17);
        uVar17 = uVar4;
code_r0x0800a564:
        iVar3 = uVar17;
        if ((iVar3 != 0) && (uVar14 = iVar3 - 1, (uVar8 & puVar11[uVar14 * 3 + 1] - 1) == 0)) {
            uVar15 = uVar14;
            if (iVar3 <= uVar4) {
                puVar7 = puVar11 + uVar14 * 3;
                do {
                    uVar15 = uVar14;
                    if (puVar9[1] + uVar8 < *puVar7) break;
                    uVar14 = uVar14 + 1;
                    puVar7 = puVar7 + 3;
                    uVar15 = uVar4;
                } while (uVar4 != uVar14);
            }
            if ((-1 < uVar15 - 1) && ((puVar9[1] + uVar8 & puVar11[(uVar15 - 1) * 3 + 1] - 1U) == 0))
            goto code_r0x0800a634;
        }
    }
    return 0xffffffea;
code_r0x0800a6cc:
    iVar6 = *(iVar6 + uVar8 * 8);
    uVar1 = *(iVar6 + 8) - uVar12;
    if (uVar17 + uVar12 <= *(iVar6 + 8)) {
        uVar1 = uVar17;
    }
    puVar7[1] = uVar1;
    uVar4 = sym.mtd_erase(iVar6,puVar7);
    if (uVar4 != 0) {
        uVar17 = uVar4;
        if (uVar4 == 0xffffffea) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800a75c);
            (*pcVar2)();
        }
        if (puVar7[2] != 0xffffffffffffffff) {
            puVar9[2] = puVar7[2] + iVar18;
        }
        goto code_r0x0800a74c;
    }
    uVar17 = uVar17 - uVar1;
    *puVar7 = 0;
    if (uVar17 == 0) {
code_r0x0800a748:
        uVar17 = 0;
code_r0x0800a74c:
        kfree(puVar7);
        return uVar17;
    }
    uVar12 = 0;
    uVar8 = uVar8 + 1;
    iVar18 = *(iVar6 + 8) + iVar18;
    iVar6 = *(iVar5 + 0x618);
    goto code_r0x0800a6cc;
}


// ===== sym.mtd_read_user_prot_reg.cfi_jt @ 0x08003b30 (size 8) =====

ulong sym.mtd_read_user_prot_reg.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3,ulong *param_4,ulong param_5)

{
    ulong uVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    do {
        iVar2 = param_1;
        param_1 = *(iVar2 + 0x568);
    } while (*(iVar2 + 0x568) != 0);
    *param_4 = 0;
    pcVar3 = *(iVar2 + 200);
    if (pcVar3 == NULL) {
        uVar1 = 0xffffffa1;
    }
    else if (param_3 == 0) {
        uVar1 = 0;
    }
    else {
        if (3 < (pcVar3 + -0x8003b20 >> 3 | pcVar3 << 0x3d)) {
            __cfi_slowpath_diag(0xbbecc41de69d7c2b,pcVar3,0x8000e00);
        }
        uVar1 = (*pcVar3)(iVar2,param_2,param_3,param_4,param_5);
    }
    return uVar1;
}


// ===== sym.mtd_read.cfi_jt @ 0x08003b38 (size 8) =====

uint64_t sym.mtd_read.cfi_jt(int64_t param_1,int64_t param_2,ulong param_3,ulong *param_4,ulong param_5)

{
    int iVar1;
    int iVar2;
    uint64_t uVar3;
    int *arg3;
    int64_t iVar4;
    int *piVar5;
    int64_t iVar6;
    uint32_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    code *pcVar10;
    int64_t iVar11;
    int iVar12;
    uint64_t uVar13;
    int iVar14;
    uint64_t uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar16 [16];
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    int64_t arg1;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
    uStack_68 = 0;
    arg3 = &uStack_68;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_30 = 0;
    uStack_60 = param_3;
    uStack_38 = param_5;
    uVar3 = sym.mtd_read_oob(param_1,param_2,arg3);
    *param_4 = uStack_58;
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    auVar16 = __stack_chk_fail();
    uVar3 = auVar16._8_8_;
    arg1 = auVar16._0_8_;
    *extraout_x18 = sym.mtd_read_oob;
    iVar6 = arg1;
    do {
        iVar11 = iVar6;
        iVar6 = *(iVar11 + 0x568);
    } while (*(iVar11 + 0x568) != 0);
    iVar1 = *(iVar11 + 0x178);
    iVar2 = *(iVar11 + 0x17c);
    piVar5 = arg3 + 4;
    piVar5[0] = 0;
    piVar5[1] = 0;
    iVar6 = *(arg3 + 0xc);
    arg3[8] = 0;
    arg3[9] = 0;
    if (iVar6 == 0) {
        arg3[2] = 0;
        arg3[3] = 0;
        iVar8 = *(arg3 + 0xe);
    }
    else {
        iVar8 = *(arg3 + 0xe);
    }
    if (iVar8 == 0) {
        arg3[6] = 0;
        arg3[7] = 0;
    }
    if (-1 < uVar3) {
        iVar4 = *(arg3 + 2);
        uVar13 = *(arg1 + 8);
        if (iVar4 + uVar3 <= uVar13) {
            if (*(arg3 + 6) == 0) {
code_r0x08005d84:
                if (*(iVar11 + 0xa0) == 0) {
                    if (*(iVar11 + 0x88) == 0) {
                        return 0xffffffa1;
                    }
                    if (iVar8 != 0) {
                        return 0xffffffa1;
                    }
                }
                iVar8 = arg1;
                if ((*(arg1 + 5) >> 6 & 1) == 0) {
                    do {
                        iVar9 = iVar8;
                        iVar8 = *(iVar9 + 0x568);
                    } while (*(iVar9 + 0x568) != 0);
                    for (iVar8 = *(arg1 + 0x568); iVar8 != 0; iVar8 = *(iVar8 + 0x568)) {
                        uVar3 = *(auVar16._0_8_ + 0x590) + auVar16._8_8_;
                        auVar16._8_8_ = uVar3;
                        auVar16._0_8_ = iVar8;
                    }
                    pcVar10 = *(iVar9 + 0xa0);
                    if (pcVar10 == NULL) {
                        pcVar10 = *(iVar9 + 0x88);
                        if (3 < (pcVar10 + -0x8003b20 >> 3 | pcVar10 << 0x3d)) {
                            __cfi_slowpath_diag(0xbbecc41de69d7c2b,pcVar10,0x8000fe0);
                            iVar4 = *(arg3 + 2);
                            iVar6 = *(arg3 + 0xc);
                        }
                        uVar3 = (*pcVar10)(iVar9,uVar3,iVar4,piVar5,iVar6);
                    }
                    else {
                        if (3 < (pcVar10 + -0x8003c70 >> 3 | pcVar10 << 0x3d)) {
                            __cfi_slowpath_diag(0x38a5cf1b120bf637,pcVar10,0x8000fc0);
                        }
                        uVar3 = (*pcVar10)(iVar9,uVar3,arg3);
                    }
                }
                else {
                    uVar3 = sym.mtd_io_emulated_slc(arg1,uVar3,1,arg3);
                }
                if ((iVar11 != arg1) && (*(arg1 + 0x568) != 0)) {
                    iVar12 = *(iVar11 + 0x17c);
                    iVar14 = *(iVar11 + 0x178);
                    iVar6 = *(arg1 + 0x568);
                    iVar11 = arg1;
                    do {
                        iVar8 = iVar6;
                        *(iVar11 + 0x17c) = (iVar12 - iVar2) + *(iVar11 + 0x17c);
                        *(iVar11 + 0x178) = (iVar14 - iVar1) + *(iVar11 + 0x178);
                        iVar6 = *(iVar8 + 0x568);
                        iVar11 = iVar8;
                    } while (iVar6 != 0);
                }
                if (uVar3 < 0) {
                    return uVar3;
                }
                if (*(arg1 + 0x5c) != 0) {
                    uVar7 = 0;
                    if (*(arg1 + 0x34) <= uVar3) {
                        uVar7 = 0xffffff8b;
                    }
                    return uVar7;
                }
                return 0;
            }
            iVar9 = 0x20;
            if (*arg3 != 1) {
                iVar9 = 0x1c;
            }
            if (arg3[10] < *(arg1 + iVar9)) {
                uVar7 = *(arg1 + 0x28);
                if (uVar7 == 0) {
                    uVar15 = *(arg1 + 0x14);
                    iVar12 = 0;
                    if (uVar15 != 0) {
                        iVar12 = uVar13 / uVar15;
                    }
                    iVar14 = 0;
                    if (uVar15 != 0) {
                        iVar14 = uVar3 / uVar15;
                    }
                }
                else {
                    iVar12 = uVar13 >> (uVar7 & 0x3f);
                    iVar14 = uVar3 >> (uVar7 & 0x3f);
                }
                if (*(arg3 + 6) <= (iVar12 - iVar14) * *(arg1 + iVar9) - arg3[10]) goto code_r0x08005d84;
            }
        }
    }
    return 0xffffffea;
}


// ===== sym.__typeid__ZTSFiP8mtd_infoE_global_addr @ 0x08003b40 (size 8) =====

uint64_t sym.__typeid__ZTSFiP8mtd_infoE_global_addr(int64_t param_1)

{
    int64_t iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    code *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int iVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iVar7 = 0;
    iVar3 = *(iVar1 + 0x5e0);
    iVar1 = param_1;
    while( true ) {
        do {
            iVar4 = iVar1;
            iVar1 = *(iVar4 + 0x568);
        } while (*(iVar4 + 0x568) != 0);
        uVar5 = 0xffffffea;
        if ((iVar7 < 0) || (iVar4 == 0)) goto code_r0x080075c4;
        if ((*(iVar4 + 0x48) == NULL) || (pcVar6 = **(iVar4 + 0x48), pcVar6 == NULL)) break;
        if (1 < (pcVar6 + -0x8003a58 >> 3 | pcVar6 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar6,0x8000d60);
        }
        uVar2 = (*pcVar6)(iVar4,iVar7);
        if (uVar2 != 0) {
            uVar5 = uVar2;
            if (uVar2 == 0xffffffde) {
                uVar5 = 0;
            }
code_r0x080075c4:
            iVar1 = sp_el0;
            if (*(iVar1 + 0x5e0) != iVar3) {
                auVar8 = __stack_chk_fail();
                *extraout_x18 = sym.mtd_get_fact_prot_info;
                iVar1 = auVar8._0_8_;
                do {
                    iVar3 = iVar1;
                    iVar1 = *(iVar3 + 0x568);
                } while (*(iVar3 + 0x568) != 0);
                pcVar6 = *(iVar3 + 0xb0);
                if (pcVar6 == NULL) {
                    uVar5 = 0xffffffa1;
                }
                else if (auVar8._8_8_ == 0) {
                    uVar5 = 0;
                }
                else {
                    if (1 < (pcVar6 + -0x8003a40 >> 3 | pcVar6 << 0x3d)) {
                        __cfi_slowpath_diag(0xc610e2db308fc5b4,pcVar6,0x8000da0);
                    }
                    uVar5 = (*pcVar6)(iVar3,auVar8._8_8_);
                }
                return uVar5;
            }
            return uVar5;
        }
        iVar7 = iVar7 + 1;
        iVar1 = param_1;
    }
    uVar5 = 0xfffffdf4;
    goto code_r0x080075c4;
}


// ===== sym.mtd_device_unregister.cfi_jt @ 0x08003b48 (size 8) =====

ulong sym.mtd_device_unregister.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x140) != 0) {
        unregister_reboot_notifier(param_1 + 0x160);
    }
    if (*(param_1 + 0x558) != 0) {
        nvmem_unregister();
    }
    if (*(param_1 + 0x560) != 0) {
        nvmem_unregister();
    }
    uVar1 = sym.del_mtd_partitions(param_1);
    if (uVar1 == 0) {
        if ((*(param_1 + 0x1dc) >> 1 & 1) == 0) {
            uVar1 = 0;
        }
        else {
            uVar1 = sym.del_mtd_device(param_1);
        }
    }
    return uVar1;
}


// ===== sym.__get_mtd_device.cfi_jt @ 0x08003b50 (size 8) =====

int sym.__get_mtd_device.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = param_1;
    do {
        iVar4 = iVar1;
        iVar1 = *(iVar4 + 0x568);
    } while (*(iVar4 + 0x568) != 0);
    uVar3 = try_module_get(*(iVar4 + 0x198));
    if ((uVar3 & 1) == 0) {
        iVar2 = -0x13;
    }
    else {
        pcVar5 = *(iVar4 + 0x148);
        if (pcVar5 != NULL) {
            if (5 < (pcVar5 + -0x8003b40 >> 3 | pcVar5 << 0x3d)) {
                __cfi_slowpath_diag(0x2c870642b6445e97,pcVar5,0x8000ca0);
            }
            iVar2 = (*pcVar5)(param_1);
            if (iVar2 != 0) {
                module_put(*(iVar4 + 0x198));
                return iVar2;
            }
        }
        *(iVar4 + 0x530) = *(iVar4 + 0x530) + 1;
        iVar1 = *(param_1 + 0x568);
        while (iVar4 = iVar1, iVar4 != 0) {
            *(param_1 + 0x530) = *(param_1 + 0x530) + 1;
            param_1 = iVar4;
            iVar1 = *(iVar4 + 0x568);
        }
        iVar2 = 0;
    }
    return iVar2;
}


// ===== sym.mtd_pairing_groups.cfi_jt @ 0x08003b58 (size 8) =====

int sym.mtd_pairing_groups.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    int *piVar3;
    
    do {
        iVar2 = param_1;
        param_1 = *(iVar2 + 0x568);
    } while (param_1 != 0);
    piVar3 = *(iVar2 + 0x50);
    if (piVar3 != NULL) {
        iVar1 = *piVar3;
        if (iVar1 == 0) {
            iVar1 = 1;
        }
        return iVar1;
    }
    return 1;
}


// ===== sym.concat_suspend.8f101c1e8640207a5ff62187927e46fd.cfi_jt @ 0x08003b60 (size 8) =====

ulong sym.concat_suspend.8f101c1e8640207a5ff62187927e46fd.cfi_jt(int64_t param_1)

{
    uint8_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t iVar4;
    code *pcVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x610) < 1) {
        uVar3 = 0;
    }
    else {
        iVar6 = 0;
        do {
            iVar2 = *(*(param_1 + 0x618) + iVar6 * 8);
            do {
                iVar4 = iVar2;
                iVar2 = *(iVar4 + 0x568);
            } while (*(iVar4 + 0x568) != 0);
            uVar1 = *(iVar4 + 0x608);
            if ((uVar1 & 1) == 0) {
                pcVar5 = *(iVar4 + 0x130);
                if (pcVar5 != NULL) {
                    if (5 < (pcVar5 + -0x8003b40 >> 3 | pcVar5 << 0x3d)) {
                        __cfi_slowpath_diag(0x2c870642b6445e97,pcVar5,0x8001080);
                    }
                    uVar3 = (*pcVar5)(iVar4);
                    if (uVar3 != 0) {
                        if (uVar3 < 0) {
                            return uVar3;
                        }
                        goto code_r0x0800aa30;
                    }
                    uVar1 = *(iVar4 + 0x608);
                }
                uVar3 = 0;
                *(iVar4 + 0x608) = uVar1 | 1;
            }
            else {
                uVar3 = 0;
            }
code_r0x0800aa30:
            iVar6 = iVar6 + 1;
        } while (iVar6 < *(param_1 + 0x610));
    }
    return uVar3;
}


// ===== sym.mtd_ooblayout_count_freebytes.cfi_jt @ 0x08003b68 (size 8) =====

uint64_t sym.mtd_ooblayout_count_freebytes.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    code *pcVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar3 = *(iVar1 + 0x5e0);
    iVar1 = param_1;
    while( true ) {
        do {
            iVar5 = iVar1;
            iVar1 = *(iVar5 + 0x568);
        } while (*(iVar5 + 0x568) != 0);
        uVar7 = 0xffffffea;
        if ((iVar8 < 0) || (iVar5 == 0)) goto code_r0x080074a0;
        if ((*(iVar5 + 0x48) == 0) || (pcVar4 = *(*(iVar5 + 0x48) + 8), pcVar4 == NULL)) {
            uVar7 = 0xfffffdf4;
            goto code_r0x080074a0;
        }
        if (1 < (pcVar4 + -0x8003a58 >> 3 | pcVar4 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar4,0x8000d80);
        }
        uVar2 = (*pcVar4)(iVar5,iVar8);
        if (uVar2 != 0) break;
        iVar8 = iVar8 + 1;
        iVar1 = param_1;
    }
    uVar7 = uVar2;
    if (uVar2 == 0xffffffde) {
        uVar7 = 0;
    }
code_r0x080074a0:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iVar3) {
        return uVar7;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.mtd_ooblayout_count_eccbytes;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar5 = *(iVar1 + 0x5e0);
    iVar1 = iVar3;
    while( true ) {
        do {
            iVar6 = iVar1;
            iVar1 = *(iVar6 + 0x568);
        } while (*(iVar6 + 0x568) != 0);
        uVar7 = 0xffffffea;
        if ((iVar8 < 0) || (iVar6 == 0)) goto code_r0x080075c4;
        if ((*(iVar6 + 0x48) == NULL) || (pcVar4 = **(iVar6 + 0x48), pcVar4 == NULL)) break;
        if (1 < (pcVar4 + -0x8003a58 >> 3 | pcVar4 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar4,0x8000d60);
        }
        uVar2 = (*pcVar4)(iVar6,iVar8);
        if (uVar2 != 0) {
            uVar7 = uVar2;
            if (uVar2 == 0xffffffde) {
                uVar7 = 0;
            }
code_r0x080075c4:
            iVar1 = sp_el0;
            if (*(iVar1 + 0x5e0) != iVar5) {
                auVar9 = __stack_chk_fail();
                *extraout_x18_00 = sym.mtd_get_fact_prot_info;
                iVar1 = auVar9._0_8_;
                do {
                    iVar3 = iVar1;
                    iVar1 = *(iVar3 + 0x568);
                } while (*(iVar3 + 0x568) != 0);
                pcVar4 = *(iVar3 + 0xb0);
                if (pcVar4 == NULL) {
                    uVar7 = 0xffffffa1;
                }
                else if (auVar9._8_8_ == 0) {
                    uVar7 = 0;
                }
                else {
                    if (1 < (pcVar4 + -0x8003a40 >> 3 | pcVar4 << 0x3d)) {
                        __cfi_slowpath_diag(0xc610e2db308fc5b4,pcVar4,0x8000da0);
                    }
                    uVar7 = (*pcVar4)(iVar3,auVar9._8_8_);
                }
                return uVar7;
            }
            return uVar7;
        }
        iVar8 = iVar8 + 1;
        iVar1 = iVar3;
    }
    uVar7 = 0xfffffdf4;
    goto code_r0x080075c4;
}


// ===== sym.__typeid__ZTSFiP8mtd_infoP10erase_infoE_global_addr @ 0x08003b70 (size 8) =====

int sym.__typeid__ZTSFiP8mtd_infoP10erase_infoE_global_addr(int64_t param_1,uint64_t *param_2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    code *pcVar3;
    int iVar4;
    uint64_t *puVar5;
    uint64_t *puVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    int64_t iVar14;
    ulong *in_x18;
    int64_t iVar15;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(param_1 + 0x60);
    if (uVar1 == 0) {
        uVar10 = *(param_1 + 0x10) - 1;
        if (((*param_2 & uVar10) == 0) && ((param_2[1] & uVar10) == 0)) {
code_r0x0800a634:
            iVar15 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar15 = 0x30;
            }
            puVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar15),0xcc0,0x18);
            if (puVar5 == NULL) {
                return -0xc;
            }
            uVar10 = param_2[1];
            uVar1 = *(param_1 + 0x610);
            uVar8 = param_2[2];
            *puVar5 = *param_2;
            puVar5[1] = uVar10;
            puVar5[2] = uVar8;
            if (0 < uVar1) {
                uVar8 = 0;
                iVar15 = 0;
                iVar7 = *(param_1 + 0x618);
                uVar9 = *puVar5;
                do {
                    iVar14 = *(iVar7 + uVar8 * 8);
                    uVar11 = *(iVar14 + 8);
                    uVar2 = uVar9 - uVar11;
                    if (uVar9 < uVar11) {
                        if (uVar10 != 0) goto code_r0x0800a6cc;
                        goto code_r0x0800a748;
                    }
                    *puVar5 = uVar2;
                    uVar8 = uVar8 + 1;
                    iVar15 = *(iVar14 + 8) + iVar15;
                    uVar9 = uVar2;
                } while (uVar1 != uVar8);
            }
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x800,0x800a6c8);
            (*pcVar3)();
        }
    }
    else if (0 < uVar1) {
        puVar6 = *(param_1 + 0x68);
        uVar10 = 0;
        uVar8 = *param_2;
        puVar5 = puVar6;
        do {
            if (uVar8 < *puVar5) goto code_r0x0800a564;
            uVar10 = uVar10 + 1;
            puVar5 = puVar5 + 3;
        } while (uVar1 != uVar10);
        uVar10 = uVar1;
code_r0x0800a564:
        iVar4 = uVar10;
        if ((iVar4 != 0) && (uVar12 = iVar4 - 1, (uVar8 & puVar6[uVar12 * 3 + 1] - 1) == 0)) {
            uVar13 = uVar12;
            if (iVar4 <= uVar1) {
                puVar5 = puVar6 + uVar12 * 3;
                do {
                    uVar13 = uVar12;
                    if (param_2[1] + uVar8 < *puVar5) break;
                    uVar12 = uVar12 + 1;
                    puVar5 = puVar5 + 3;
                    uVar13 = uVar1;
                } while (uVar1 != uVar12);
            }
            if ((-1 < uVar13 - 1) && ((param_2[1] + uVar8 & puVar6[(uVar13 - 1) * 3 + 1] - 1U) == 0))
            goto code_r0x0800a634;
        }
    }
    return -0x16;
code_r0x0800a6cc:
    iVar7 = *(iVar7 + uVar8 * 8);
    uVar2 = *(iVar7 + 8) - uVar9;
    if (uVar10 + uVar9 <= *(iVar7 + 8)) {
        uVar2 = uVar10;
    }
    puVar5[1] = uVar2;
    iVar4 = sym.mtd_erase(iVar7,puVar5);
    if (iVar4 != 0) {
        if (iVar4 == -0x16) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x800,0x800a75c);
            (*pcVar3)();
        }
        if (puVar5[2] != 0xffffffffffffffff) {
            param_2[2] = puVar5[2] + iVar15;
        }
        goto code_r0x0800a74c;
    }
    uVar10 = uVar10 - uVar2;
    *puVar5 = 0;
    if (uVar10 == 0) {
code_r0x0800a748:
        iVar4 = 0;
code_r0x0800a74c:
        kfree(puVar5);
        return iVar4;
    }
    uVar9 = 0;
    uVar8 = uVar8 + 1;
    iVar15 = *(iVar7 + 8) + iVar15;
    iVar7 = *(param_1 + 0x618);
    goto code_r0x0800a6cc;
}


// ===== sym.mtd_erase.cfi_jt @ 0x08003b78 (size 8) =====

void sym.mtd_erase.cfi_jt(int64_t param_1,uint64_t *param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    code *pcVar7;
    code *extraout_x8;
    int64_t iVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong *in_x18;
    int64_t iVar14;
    ulong unaff_x30;
    uint64_t uStack_50;
    uint64_t uStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_38 = *(iVar14 + 0x5e0);
    iVar14 = param_1;
    do {
        iVar4 = iVar14;
        iVar14 = *(iVar4 + 0x568);
    } while (*(iVar4 + 0x568) != 0);
    if (*(param_1 + 0x568) == 0) {
        iVar14 = 0;
    }
    else {
        iVar14 = 0;
        iVar6 = *(param_1 + 0x568);
        iVar8 = param_1;
        do {
            iVar5 = iVar6;
            iVar6 = *(iVar5 + 0x568);
            iVar14 = *(iVar8 + 0x590) + iVar14;
            iVar8 = iVar5;
        } while (iVar6 != 0);
    }
    uStack_50 = *param_2;
    uStack_48 = param_2[1];
    param_2[2] = 0xffffffffffffffff;
    uVar9 = *(param_1 + 0x10);
    iStack_40 = -1;
    if ((*(param_1 + 0x10) == 0) || (pcVar7 = *(iVar4 + 0x70), pcVar7 == NULL)) {
        uVar3 = 0xfffffdf4;
    }
    else {
        uVar11 = *param_2;
        if ((uVar11 < *(param_1 + 8)) && (uVar13 = param_2[1], uVar13 <= *(param_1 + 8) - uVar11)) {
            if ((*(param_1 + 4) >> 10 & 1) == 0) {
                uVar3 = 0xffffffe2;
            }
            else {
                if (uVar13 != 0) {
                    if ((*(param_1 + 4) >> 0xe & 1) != 0) {
                        uVar1 = *(param_1 + 0x24);
                        if (uVar1 == 0) {
                            uVar10 = 0;
                            if (uVar9 != 0) {
                                uVar10 = uVar11 / uVar9;
                            }
                            uVar2 = *(iVar4 + 0x10);
                            uVar12 = 0;
                            if (uVar9 != 0) {
                                uVar12 = (uVar13 + uVar11) / uVar9;
                            }
                        }
                        else {
                            uVar10 = uVar11 >> (uVar1 & 0x3f);
                            uVar2 = *(iVar4 + 0x10);
                            uVar12 = uVar13 + uVar11 >> (uVar1 & 0x3f);
                        }
                        uStack_50 = (uVar10 & 0xffffffff) * uVar2;
                        uStack_48 = (uVar12 & 0xffffffff) * uVar2 - uStack_50;
                    }
                    uStack_50 = uStack_50 + iVar14;
                    if (1 < (pcVar7 + -0x8003b70 >> 3 | pcVar7 << 0x3d)) goto code_r0x08005794;
                    goto code_r0x08005738;
                }
                uVar3 = 0;
            }
        }
        else {
            uVar3 = 0xffffffea;
        }
    }
    while (iVar6 = sp_el0, *(iVar6 + 0x5e0) != iStack_38) {
        __stack_chk_fail(uVar3);
        pcVar7 = extraout_x8;
code_r0x08005794:
        __cfi_slowpath_diag(0x28961f2c4151831b,pcVar7,0x8000ce0);
code_r0x08005738:
        uVar3 = (*pcVar7)(iVar4,&uStack_50);
        if (iStack_40 != -1) {
            uVar9 = iStack_40 - iVar14;
            param_2[2] = uVar9;
            if ((*(param_1 + 5) >> 6 & 1) != 0) {
                if (*(iVar4 + 0x24) == 0) {
                    uVar11 = 0;
                    if (*(iVar4 + 0x10) != 0) {
                        uVar11 = uVar9 / *(iVar4 + 0x10);
                    }
                }
                else {
                    uVar11 = uVar9 >> (*(iVar4 + 0x24) & 0x3f);
                }
                param_2[2] = uVar11 & 0xffffffff;
                param_2[2] = (uVar11 & 0xffffffff) * *(param_1 + 0x10);
            }
        }
    }
    return;
}


// ===== sym.mtd_ooblayout_find_eccregion.cfi_jt @ 0x08003b80 (size 8) =====

ulong sym.mtd_ooblayout_find_eccregion.cfi_jt(int64_t param_1,uint32_t param_2,int *param_3,int *param_4)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t iVar4;
    code *pcVar5;
    ulong *in_x18;
    int iVar6;
    uint32_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = 0;
    param_4[0] = 0;
    param_4[1] = 0;
    iVar2 = param_1;
    uVar7 = 0;
    while( true ) {
        do {
            iVar4 = iVar2;
            iVar2 = *(iVar4 + 0x568);
        } while (*(iVar4 + 0x568) != 0);
        param_4[0] = 0;
        param_4[1] = 0;
        if (iVar6 < 0) {
            return 0xffffffea;
        }
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        if ((*(iVar4 + 0x48) == NULL) || (pcVar5 = **(iVar4 + 0x48), pcVar5 == NULL)) break;
        if (1 < (pcVar5 + -0x8003a58 >> 3 | pcVar5 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar5,0x8000d60);
        }
        uVar3 = (*pcVar5)(iVar4,iVar6,param_4);
        if (uVar3 != 0) {
            return uVar3;
        }
        uVar1 = param_4[1] + uVar7;
        if (param_2 < uVar1) {
            *param_4 = *param_4 + (param_2 - uVar7);
            param_4[1] = param_4[1] - (param_2 - uVar7);
            *param_3 = iVar6;
            return 0;
        }
        iVar6 = iVar6 + 1;
        iVar2 = param_1;
        uVar7 = uVar1;
    }
    return 0xfffffdf4;
}


// ===== sym.mtd_bitflip_threshold_store.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt @ 0x08003b88 (size 8) =====

int64_t sym.mtd_bitflip_threshold_store.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint8_t uVar1;
    int iVar2;
    int64_t iVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    ulong unaff_x30;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    iVar5 = *(param_1 + 0x98);
    uStack_2c = 0;
    iVar2 = kstrtouint(param_3,0,&uStack_2c);
    if (iVar2 == 0) {
        *(iVar5 + 0x34) = uStack_2c;
    }
    else {
        param_4 = iVar2;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.mtd_cls_suspend;
    iVar5 = *(iVar3 + 0x98);
    if (*(iVar3 + 0x98) != 0) {
        do {
            iVar3 = iVar5;
            iVar5 = *(iVar3 + 0x568);
        } while (*(iVar3 + 0x568) != 0);
        uVar1 = *(iVar3 + 0x608);
        if ((uVar1 & 1) == 0) {
            pcVar4 = *(iVar3 + 0x130);
            if (pcVar4 != NULL) {
                if (5 < (pcVar4 + -0x8003b40 >> 3 | pcVar4 << 0x3d)) {
                    __cfi_slowpath_diag(0x2c870642b6445e97,pcVar4,0x8000f60);
                }
                iVar5 = (*pcVar4)(iVar3);
                if (iVar5 != 0) {
                    return iVar5;
                }
                uVar1 = *(iVar3 + 0x608);
            }
            *(iVar3 + 0x608) = uVar1 | 1;
            return 0;
        }
    }
    return 0;
}


// ===== sym.__typeid__ZTSFiP8mtd_infoxE_global_addr @ 0x08003b90 (size 8) =====

ulong sym.__typeid__ZTSFiP8mtd_infoxE_global_addr(int64_t param_1,uint64_t param_2)

{
    int64_t arg1;
    ulong uVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar3 = *(param_1 + 0x618);
    arg1 = *piVar3;
    iVar6 = arg1;
    do {
        iVar5 = iVar6;
        iVar6 = *(iVar5 + 0x568);
    } while (iVar6 != 0);
    if ((*(iVar5 + 0x118) == 0) || (uVar4 = *(param_1 + 0x610), *(param_1 + 0x610) < 1)) {
code_r0x0800a0fc:
        uVar1 = 0;
    }
    else {
        uVar2 = *(arg1 + 8);
        if (uVar2 <= param_2) {
            do {
                uVar4 = uVar4 - 1;
                piVar3 = piVar3 + 1;
                if (uVar4 == 0) goto code_r0x0800a0fc;
                arg1 = *piVar3;
                param_2 = param_2 - uVar2;
                uVar2 = *(arg1 + 8);
            } while (uVar2 <= param_2);
        }
        uVar1 = sym.mtd_block_isbad(arg1,param_2);
    }
    return uVar1;
}


// ===== sym.mtd_block_isreserved.cfi_jt @ 0x08003b98 (size 8) =====

ulong sym.mtd_block_isreserved.cfi_jt(int64_t param_1,uint64_t param_2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t iVar4;
    code *pcVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = param_1;
    do {
        iVar4 = iVar2;
        iVar2 = *(iVar4 + 0x568);
    } while (*(iVar4 + 0x568) != 0);
    if ((param_2 < 0) || (*(param_1 + 8) <= param_2)) {
        uVar3 = 0xffffffea;
    }
    else {
        pcVar5 = *(iVar4 + 0x110);
        if (pcVar5 == NULL) {
            uVar3 = 0;
        }
        else {
            if ((*(param_1 + 5) >> 6 & 1) != 0) {
                if (*(param_1 + 0x24) == 0) {
                    uVar6 = 0;
                    if (*(param_1 + 0x10) != 0) {
                        uVar6 = param_2 / *(param_1 + 0x10);
                    }
                }
                else {
                    uVar6 = param_2 >> (*(param_1 + 0x24) & 0x3f);
                }
                param_2 = (uVar6 & 0xffffffff) * *(iVar4 + 0x10);
            }
            if ((pcVar5 + -0x8003b90 >> 3 | pcVar5 << 0x3d) < 5) {
                iVar2 = *(param_1 + 0x568);
            }
            else {
                __cfi_slowpath_diag(0xc3e13509d071e0c,pcVar5,0x8000ee0);
                iVar2 = *(param_1 + 0x568);
            }
            while (iVar1 = iVar2, iVar1 != 0) {
                param_2 = *(param_1 + 0x590) + param_2;
                param_1 = iVar1;
                iVar2 = *(iVar1 + 0x568);
            }
            uVar3 = (*pcVar5)(iVar4,param_2);
        }
    }
    return uVar3;
}


// ===== sym.concat_block_markbad.8f101c1e8640207a5ff62187927e46fd.cfi_jt @ 0x08003ba0 (size 8) =====

ulong sym.concat_block_markbad.8f101c1e8640207a5ff62187927e46fd.cfi_jt(int64_t param_1,uint64_t param_2)

{
    ulong uVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(param_1 + 0x610);
    if (0 < *(param_1 + 0x610)) {
        piVar3 = *(param_1 + 0x618);
        do {
            uVar4 = *(*piVar3 + 8);
            if (param_2 < uVar4) {
                uVar1 = sym.mtd_block_markbad(*piVar3,param_2);
                if (uVar1 != 0) {
                    return uVar1;
                }
                *(param_1 + 0x180) = *(param_1 + 0x180) + 1;
                return uVar1;
            }
            uVar2 = uVar2 - 1;
            piVar3 = piVar3 + 1;
            param_2 = param_2 - uVar4;
        } while (uVar2 != 0);
    }
    return 0xffffffea;
}


// ===== sym.mtd_block_isbad.cfi_jt @ 0x08003ba8 (size 8) =====

ulong sym.mtd_block_isbad.cfi_jt(int64_t param_1,uint64_t param_2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t iVar4;
    code *pcVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = param_1;
    do {
        iVar4 = iVar2;
        iVar2 = *(iVar4 + 0x568);
    } while (*(iVar4 + 0x568) != 0);
    if ((param_2 < 0) || (*(param_1 + 8) <= param_2)) {
        uVar3 = 0xffffffea;
    }
    else {
        pcVar5 = *(iVar4 + 0x118);
        if (pcVar5 == NULL) {
            uVar3 = 0;
        }
        else {
            if ((*(param_1 + 5) >> 6 & 1) != 0) {
                if (*(param_1 + 0x24) == 0) {
                    uVar6 = 0;
                    if (*(param_1 + 0x10) != 0) {
                        uVar6 = param_2 / *(param_1 + 0x10);
                    }
                }
                else {
                    uVar6 = param_2 >> (*(param_1 + 0x24) & 0x3f);
                }
                param_2 = (uVar6 & 0xffffffff) * *(iVar4 + 0x10);
            }
            if ((pcVar5 + -0x8003b90 >> 3 | pcVar5 << 0x3d) < 5) {
                iVar2 = *(param_1 + 0x568);
            }
            else {
                __cfi_slowpath_diag(0xc3e13509d071e0c,pcVar5,0x8000f00);
                iVar2 = *(param_1 + 0x568);
            }
            while (iVar1 = iVar2, iVar1 != 0) {
                param_2 = *(param_1 + 0x590) + param_2;
                param_1 = iVar1;
                iVar2 = *(iVar1 + 0x568);
            }
            uVar3 = (*pcVar5)(iVar4,param_2);
        }
    }
    return uVar3;
}


// ===== sym.mtd_block_markbad.cfi_jt @ 0x08003bb0 (size 8) =====

ulong sym.mtd_block_markbad.cfi_jt(int64_t param_1,uint64_t param_2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    code *pcVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = param_1;
    do {
        iVar5 = iVar6;
        iVar6 = *(iVar5 + 0x568);
    } while (*(iVar5 + 0x568) != 0);
    pcVar4 = *(iVar5 + 0x120);
    if (pcVar4 == NULL) {
        uVar3 = 0xffffffa1;
    }
    else if ((param_2 < 0) || (*(param_1 + 8) <= param_2)) {
        uVar3 = 0xffffffea;
    }
    else if ((*(param_1 + 4) >> 10 & 1) == 0) {
        uVar3 = 0xffffffe2;
    }
    else {
        if ((*(param_1 + 4) >> 0xe & 1) != 0) {
            if (*(param_1 + 0x24) == 0) {
                uVar7 = 0;
                if (*(param_1 + 0x10) != 0) {
                    uVar7 = param_2 / *(param_1 + 0x10);
                }
            }
            else {
                uVar7 = param_2 >> (*(param_1 + 0x24) & 0x3f);
            }
            param_2 = (uVar7 & 0xffffffff) * *(iVar5 + 0x10);
        }
        iVar6 = param_1;
        if ((pcVar4 + -0x8003b90 >> 3 | pcVar4 << 0x3d) < 5) {
            iVar2 = *(param_1 + 0x568);
        }
        else {
            __cfi_slowpath_diag(0xc3e13509d071e0c,pcVar4,0x8000f20);
            iVar2 = *(param_1 + 0x568);
        }
        while (iVar1 = iVar2, iVar1 != 0) {
            param_2 = *(iVar6 + 0x590) + param_2;
            iVar6 = iVar1;
            iVar2 = *(iVar1 + 0x568);
        }
        uVar3 = (*pcVar4)(iVar5,param_2);
        if (uVar3 == 0) {
            if (*(param_1 + 0x568) == 0) {
                uVar3 = 0;
            }
            else {
                uVar3 = 0;
                iVar6 = *(param_1 + 0x568);
                do {
                    iVar5 = iVar6;
                    *(param_1 + 0x180) = *(param_1 + 0x180) + 1;
                    iVar6 = *(iVar5 + 0x568);
                    param_1 = iVar5;
                } while (iVar6 != 0);
            }
        }
    }
    return uVar3;
}


// ===== sym.mtd_nvmem_reg_read.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt @ 0x08003bb8 (size 8) =====

void sym.mtd_nvmem_reg_read.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt
               (int64_t param_1,uint64_t param_2,ulong param_3,int64_t param_4)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar4 [16];
    ulong uStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    iStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    iStack_60 = param_4;
    uStack_38 = param_3;
    uVar2 = sym.mtd_read_oob(param_1,param_2 & 0xffffffff,&uStack_68);
    if ((uVar2 == 0) || (uVar2 == -0x75)) {
        uVar3 = 0;
        if (iStack_58 != param_4) {
            uVar3 = 0xfffffffb;
        }
        uVar2 = uVar3;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return;
    }
    auVar4 = __stack_chk_fail(uVar2);
    *extraout_x18 = sym.mtd_partid_debug_open;
    single_open(auVar4._8_8_,sym.mtd_partid_debug_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt,*(auVar4._0_8_ + 0x2d8)
               );
    return;
}


// ===== sym.mtd_nvmem_user_otp_reg_read.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt @ 0x08003bc0 (size 8) =====

void sym.mtd_nvmem_user_otp_reg_read.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt
               (int64_t param_1,uint64_t param_2,ulong param_3,int64_t param_4)

{
    uchar auVar1 [16];
    uint64_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    code *pcVar5;
    code *extraout_x8;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auVar6 [16];
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    do {
        iVar4 = param_1;
        param_1 = *(iVar4 + 0x568);
    } while (*(iVar4 + 0x568) != 0);
    pcVar5 = *(iVar4 + 200);
    iStack_30 = 0;
    if (pcVar5 != NULL) {
        if (param_4 != 0) {
            auVar1._8_8_ = param_2 & 0xffffffff;
            auVar1._0_8_ = iVar4;
            auVar6._8_8_ = param_2 & 0xffffffff;
            auVar6._0_8_ = iVar4;
            if (3 < (pcVar5 + -0x8003b20 >> 3 | pcVar5 << 0x3d)) goto code_r0x08008dcc;
            while( true ) {
                uVar2 = (*pcVar5)(auVar1._0_8_,auVar1._8_8_,param_4,&iStack_30);
                uVar3 = 0;
                if (iStack_30 != param_4) {
                    uVar3 = 0xfffffffb;
                }
                if (uVar2 == 0) {
                    uVar2 = uVar3;
                }
code_r0x08008d9c:
                iVar4 = sp_el0;
                if (*(iVar4 + 0x5e0) == iStack_28) break;
                auVar6 = __stack_chk_fail(uVar2);
                pcVar5 = extraout_x8;
code_r0x08008dcc:
                __cfi_slowpath_diag(0xbbecc41de69d7c2b,pcVar5,0x8000e00);
                auVar1 = auVar6;
            }
            return;
        }
        uVar2 = 0;
        goto code_r0x08008d9c;
    }
    uVar2 = 0xffffffa1;
    goto code_r0x08008d9c;
}


// ===== sym.mtd_nvmem_fact_otp_reg_read.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt @ 0x08003bc8 (size 8) =====

void sym.mtd_nvmem_fact_otp_reg_read.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt
               (int64_t param_1,uint64_t param_2,ulong param_3,int64_t param_4)

{
    uchar auVar1 [16];
    uint64_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    code *pcVar5;
    code *extraout_x8;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auVar6 [16];
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    do {
        iVar4 = param_1;
        param_1 = *(iVar4 + 0x568);
    } while (*(iVar4 + 0x568) != 0);
    pcVar5 = *(iVar4 + 0xb8);
    iStack_30 = 0;
    if (pcVar5 != NULL) {
        if (param_4 != 0) {
            auVar1._8_8_ = param_2 & 0xffffffff;
            auVar1._0_8_ = iVar4;
            auVar6._8_8_ = param_2 & 0xffffffff;
            auVar6._0_8_ = iVar4;
            if (3 < (pcVar5 + -0x8003b20 >> 3 | pcVar5 << 0x3d)) goto code_r0x08008ecc;
            while( true ) {
                uVar2 = (*pcVar5)(auVar1._0_8_,auVar1._8_8_,param_4,&iStack_30);
                uVar3 = 0;
                if (iStack_30 != param_4) {
                    uVar3 = 0xfffffffb;
                }
                if (uVar2 == 0) {
                    uVar2 = uVar3;
                }
code_r0x08008e9c:
                iVar4 = sp_el0;
                if (*(iVar4 + 0x5e0) == iStack_28) break;
                auVar6 = __stack_chk_fail(uVar2);
                pcVar5 = extraout_x8;
code_r0x08008ecc:
                __cfi_slowpath_diag(0xbbecc41de69d7c2b,pcVar5,0x8000dc0);
                auVar1 = auVar6;
            }
            return;
        }
        uVar2 = 0;
        goto code_r0x08008e9c;
    }
    uVar2 = 0xffffffa1;
    goto code_r0x08008e9c;
}


// ===== sym.mtd_writesize_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt @ 0x08003bd0 (size 8) =====

int64_t sym.mtd_writesize_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_3,"%lu\n",*(*(param_1 + 0x98) + 0x14));
    return iVar1;
}


// ===== sym.mtd_oobsize_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt @ 0x08003bd8 (size 8) =====

int64_t sym.mtd_oobsize_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_3,"%lu\n",*(*(param_1 + 0x98) + 0x1c));
    return iVar1;
}


// ===== sym.mtd_ecc_strength_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt @ 0x08003be0 (size 8) =====

int64_t sym.mtd_ecc_strength_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_3,0x8001460,*(*(param_1 + 0x98) + 0x5c));
    return iVar1;
}


// ===== sym.offset_show.2a193db7822ca4cbbe6927a02786be77.cfi_jt @ 0x08003be8 (size 8) =====

int64_t sym.offset_show.2a193db7822ca4cbbe6927a02786be77.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_3,"%lld\n",*(*(param_1 + 0x98) + 0x590));
    return iVar1;
}


// ===== sym.mtd_bad_blocks_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt @ 0x08003bf0 (size 8) =====

int64_t sym.mtd_bad_blocks_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_3,0x8001460,*(*(param_1 + 0x98) + 0x180));
    return iVar1;
}


// ===== sym.mtd_bbt_blocks_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt @ 0x08003bf8 (size 8) =====

int64_t sym.mtd_bbt_blocks_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_3,0x8001460,*(*(param_1 + 0x98) + 0x184));
    return iVar1;
}


// ===== sym.mtd_type_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt @ 0x08003c00 (size 8) =====

int64_t sym.mtd_type_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    char *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (**(param_1 + 0x98) < 9) {
        pcVar2 = *(**(param_1 + 0x98) * 8 + 0x8002460);
    }
    else {
        pcVar2 = "unknown";
    }
    iVar1 = sysfs_emit(param_3,0x8001b3d,pcVar2);
    return iVar1;
}


// ===== sym.mtd_size_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt @ 0x08003c08 (size 8) =====

int64_t sym.mtd_size_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_3,"%llu\n",*(*(param_1 + 0x98) + 8));
    return iVar1;
}


// ===== sym.mtd_corrected_bits_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt @ 0x08003c10 (size 8) =====

int64_t sym.mtd_corrected_bits_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_3,0x8001460,*(*(param_1 + 0x98) + 0x178));
    return iVar1;
}


// ===== sym.mtd_numeraseregions_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt @ 0x08003c18 (size 8) =====

int64_t sym.mtd_numeraseregions_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_3,0x8001460,*(*(param_1 + 0x98) + 0x60));
    return iVar1;
}


// ===== sym.mtd_name_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt @ 0x08003c20 (size 8) =====

int64_t sym.mtd_name_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_3,0x8001b3d,*(*(param_1 + 0x98) + 0x38));
    return iVar1;
}


// ===== sym.mtd_bitflip_threshold_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt @ 0x08003c28 (size 8) =====

int64_t sym.mtd_bitflip_threshold_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_3,0x8001460,*(*(param_1 + 0x98) + 0x34));
    return iVar1;
}


// ===== sym.mtd_flags_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt @ 0x08003c30 (size 8) =====

int64_t sym.mtd_flags_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_3,"0x%lx\n",*(*(param_1 + 0x98) + 4));
    return iVar1;
}


// ===== sym.mtd_erasesize_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt @ 0x08003c38 (size 8) =====

int64_t sym.mtd_erasesize_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_3,"%lu\n",*(*(param_1 + 0x98) + 0x10));
    return iVar1;
}


// ===== sym.mtd_ecc_step_size_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt @ 0x08003c40 (size 8) =====

int64_t sym.mtd_ecc_step_size_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_3,0x8001460,*(*(param_1 + 0x98) + 0x58));
    return iVar1;
}


// ===== sym.mtd_ecc_failures_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt @ 0x08003c48 (size 8) =====

int64_t sym.mtd_ecc_failures_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_3,0x8001460,*(*(param_1 + 0x98) + 0x17c));
    return iVar1;
}


// ===== sym.mtd_oobavail_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt @ 0x08003c50 (size 8) =====

int64_t sym.mtd_oobavail_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_3,0x8001460,*(*(param_1 + 0x98) + 0x20));
    return iVar1;
}


// ===== sym.mtd_subpagesize_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt @ 0x08003c58 (size 8) =====

int64_t sym.mtd_subpagesize_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_3,0x8001460,*(*(param_1 + 0x98) + 0x14) >> (*(*(param_1 + 0x98) + 0x188) & 0x1f));
    return iVar1;
}


// ===== sym.__typeid__ZTSFiP11super_blockP10fs_contextE_global_addr @ 0x08003c60 (size 8) =====

ulong sym.__typeid__ZTSFiP11super_blockP10fs_contextE_global_addr(int64_t param_1,int64_t param_2)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(param_2 + 0x48);
    *(param_1 + 0x118) = iVar7;
    iVar5 = _segment.ehdr;
    puVar1 = _segment.ehdr + 0x40;
    *(param_1 + 0x10) = *(iVar7 + 0x40) | 0x1f00000;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar2 = *puVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = uVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (uVar2 == 0) {
        uVar6 = 2;
    }
    else {
        if (-1 < (uVar2 + 1 | uVar2)) goto code_r0x08009484;
        uVar6 = 1;
    }
    refcount_warn_saturate(puVar1,uVar6);
code_r0x08009484:
    *(param_1 + 0x110) = iVar5;
    return 0;
}


// ===== sym.mtd_test_super.e15e9b585228cff038f27a9a25a8c6f2.cfi_jt @ 0x08003c68 (size 8) =====

bool sym.mtd_test_super.e15e9b585228cff038f27a9a25a8c6f2.cfi_jt(int64_t param_1,int64_t param_2)

{
    return *(param_1 + 0x118) == *(param_2 + 0x48);
}


// ===== sym.__typeid__ZTSFiP8mtd_infoxP11mtd_oob_opsE_global_addr @ 0x08003c70 (size 8) =====

uint sym.__typeid__ZTSFiP8mtd_infoxP11mtd_oob_opsE_global_addr(int64_t param_1,uint64_t param_2,int *param_3)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint uVar3;
    int64_t iVar4;
    int *piVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    code *pcVar9;
    int iVar10;
    uint64_t uVar11;
    int iVar12;
    uint64_t uVar13;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = param_1;
    do {
        iVar7 = iVar6;
        iVar6 = *(iVar7 + 0x568);
    } while (*(iVar7 + 0x568) != 0);
    piVar5 = param_3 + 4;
    piVar5[0] = 0;
    piVar5[1] = 0;
    param_3[8] = 0;
    param_3[9] = 0;
    if ((*(param_1 + 5) >> 2 & 1) == 0) {
        return 0xffffffe2;
    }
    iVar6 = *(param_3 + 0xc);
    if (iVar6 == 0) {
        param_3[2] = 0;
        param_3[3] = 0;
        iVar8 = *(param_3 + 0xe);
    }
    else {
        iVar8 = *(param_3 + 0xe);
    }
    if (iVar8 == 0) {
        param_3[6] = 0;
        param_3[7] = 0;
    }
    if (-1 < param_2) {
        iVar4 = *(param_3 + 2);
        uVar11 = *(param_1 + 8);
        if (iVar4 + param_2 <= uVar11) {
            if (*(param_3 + 6) == 0) {
code_r0x080060c0:
                if (*(iVar7 + 0xa8) == 0) {
                    if (*(iVar7 + 0x90) == 0) {
                        return 0xffffffa1;
                    }
                    if (iVar8 != 0) {
                        return 0xffffffa1;
                    }
                }
                iVar7 = param_1;
                if ((*(param_1 + 5) >> 6 & 1) != 0) {
                    uVar3 = sym.mtd_io_emulated_slc(param_1,param_2,0,param_3);
                    return uVar3;
                }
                do {
                    iVar8 = iVar7;
                    iVar7 = *(iVar8 + 0x568);
                } while (*(iVar8 + 0x568) != 0);
                iVar7 = *(param_1 + 0x568);
                while (iVar1 = iVar7, iVar1 != 0) {
                    param_2 = *(param_1 + 0x590) + param_2;
                    param_1 = iVar1;
                    iVar7 = *(iVar1 + 0x568);
                }
                pcVar9 = *(iVar8 + 0xa8);
                if (pcVar9 != NULL) {
                    if (3 < (pcVar9 + -0x8003c70 >> 3 | pcVar9 << 0x3d)) {
                        __cfi_slowpath_diag(0x38a5cf1b120bf637,pcVar9,0x8001000);
                    }
                    uVar3 = (*pcVar9)(iVar8,param_2,param_3);
                    return uVar3;
                }
                pcVar9 = *(iVar8 + 0x90);
                if (4 < (pcVar9 + -0x8003af8 >> 3 | pcVar9 << 0x3d)) {
                    __cfi_slowpath_diag(0x870dfec9503a5e92,pcVar9,0x8001020);
                    iVar4 = *(param_3 + 2);
                    iVar6 = *(param_3 + 0xc);
                }
                uVar3 = (*pcVar9)(iVar8,param_2,iVar4,piVar5,iVar6);
                return uVar3;
            }
            iVar1 = 0x20;
            if (*param_3 != 1) {
                iVar1 = 0x1c;
            }
            if (param_3[10] < *(param_1 + iVar1)) {
                uVar2 = *(param_1 + 0x28);
                if (uVar2 == 0) {
                    uVar13 = *(param_1 + 0x14);
                    iVar10 = 0;
                    if (uVar13 != 0) {
                        iVar10 = uVar11 / uVar13;
                    }
                    iVar12 = 0;
                    if (uVar13 != 0) {
                        iVar12 = param_2 / uVar13;
                    }
                }
                else {
                    iVar10 = uVar11 >> (uVar2 & 0x3f);
                    iVar12 = param_2 >> (uVar2 & 0x3f);
                }
                if (*(param_3 + 6) <= (iVar10 - iVar12) * *(param_1 + iVar1) - param_3[10]) goto code_r0x080060c0;
            }
        }
    }
    return 0xffffffea;
}


// ===== sym.concat_read_oob.8f101c1e8640207a5ff62187927e46fd.cfi_jt @ 0x08003c78 (size 8) =====

uint64_t sym.concat_read_oob.8f101c1e8640207a5ff62187927e46fd.cfi_jt(int64_t param_1,uint64_t param_2,ulong *param_3)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *arg3;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *unaff_x19;
    int64_t unaff_x20;
    int64_t unaff_x21;
    uint32_t uVar10;
    uint32_t uVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    ulong uStack_108;
    int64_t iStack_100;
    int64_t iStack_f8;
    int64_t iStack_f0;
    int64_t iStack_e8;
    ulong uStack_e0;
    int64_t iStack_d8;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    int64_t iStack_b0;
    int64_t iStack_a0;
    ulong *puStack_98;
    ulong uStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_48 = *(iVar2 + 0x5e0);
    iStack_68 = param_3[4];
    uStack_60 = param_3[5];
    param_3[4] = 0;
    iStack_58 = param_3[6];
    iStack_50 = param_3[7];
    iStack_78 = param_3[2];
    iStack_70 = param_3[3];
    param_3[2] = 0;
    uStack_88 = *param_3;
    iStack_80 = param_3[1];
    arg3 = param_3;
    if (0 < *(param_1 + 0x610)) {
        unaff_x21 = 0;
        uVar10 = 0;
        do {
            iVar2 = *(*(param_1 + 0x618) + unaff_x21 * 8);
            uVar6 = *(iVar2 + 8);
            uVar3 = param_2 - uVar6;
            if (param_2 < uVar6) {
                if (uVar6 < iStack_80 + param_2) {
                    iStack_80 = uVar6 - param_2;
                }
                arg3 = &uStack_88;
                uVar3 = sym.mtd_read_oob(iVar2,param_2,arg3);
                param_3[2] = param_3[2] + iStack_78;
                param_3[4] = param_3[4] + iStack_68;
                iVar1 = uVar3;
                uVar11 = uVar10;
                if (iVar1 != 0) {
                    if (iVar1 == -0x4a) {
                        uVar11 = 0xffffffb6;
                        *(param_1 + 0x17c) = *(param_1 + 0x17c) + 1;
                    }
                    else {
                        if (iVar1 != -0x75) goto code_r0x08009ed4;
                        uVar11 = 0xffffff8b;
                        if (uVar10 != 0) {
                            uVar11 = uVar10;
                        }
                        *(param_1 + 0x178) = *(param_1 + 0x178) + 1;
                    }
                }
                if (iStack_58 != 0) {
                    iStack_80 = param_3[1] - param_3[2];
                    if (iStack_80 != 0) {
                        iStack_58 = iStack_58 + iStack_78;
                        goto code_r0x08009e5c;
                    }
code_r0x08009ed0:
                    uVar3 = uVar11;
                    goto code_r0x08009ed4;
                }
code_r0x08009e5c:
                uVar10 = uVar11;
                if (iStack_50 == 0) {
                    uVar3 = 0;
                }
                else {
                    iStack_70 = param_3[3] - param_3[4];
                    if (iStack_70 == 0) goto code_r0x08009ed0;
                    iStack_50 = iStack_50 + param_3[4];
                    uVar3 = 0;
                }
            }
            unaff_x21 = unaff_x21 + 1;
            param_2 = uVar3;
            unaff_x19 = param_3;
            unaff_x20 = param_1;
        } while (unaff_x21 < *(param_1 + 0x610));
    }
    uVar3 = 0xffffffea;
    param_3 = unaff_x19;
    param_1 = unaff_x20;
code_r0x08009ed4:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_48) {
        return uVar3;
    }
    auVar12 = __stack_chk_fail(uVar3);
    iVar5 = auVar12._0_8_;
    *extraout_x18 = sym.concat_write_oob;
    pcStack_b8 = sym.concat_write_oob;
    iVar2 = sp_el0;
    iStack_c8 = *(iVar2 + 0x5e0);
    iStack_e8 = arg3[4];
    uStack_e0 = arg3[5];
    iStack_d8 = arg3[6];
    iStack_d0 = arg3[7];
    uStack_108 = *arg3;
    iStack_100 = arg3[1];
    iStack_f8 = arg3[2];
    iStack_f0 = arg3[3];
    puStack_c0 = &stack0xffffffffffffffc0;
    iStack_b0 = unaff_x21;
    iStack_a0 = param_1;
    puStack_98 = param_3;
    if ((*(iVar5 + 5) >> 2 & 1) == 0) {
        uVar3 = 0xffffffe2;
    }
    else {
        arg3[4] = 0;
        arg3[2] = 0;
        if (0 < *(iVar5 + 0x610)) {
            iVar2 = 0;
            uVar3 = auVar12._8_8_;
            do {
                iVar4 = *(*(iVar5 + 0x618) + iVar2 * 8);
                uVar7 = *(iVar4 + 8);
                uVar6 = uVar3 - uVar7;
                if (uVar3 < uVar7) {
                    if (uVar7 < iStack_100 + uVar3) {
                        iStack_100 = uVar7 - uVar3;
                    }
                    uVar3 = sym.mtd_write_oob(iVar4,uVar3,&uStack_108);
                    iVar4 = arg3[2];
                    iVar9 = arg3[4];
                    arg3[2] = iVar4 + iStack_f8;
                    arg3[4] = iVar9 + iStack_e8;
                    if (uVar3 != 0) goto code_r0x0800a050;
                    if (iStack_d8 != 0) {
                        iStack_100 = arg3[1] - (iVar4 + iStack_f8);
                        if (iStack_100 != 0) {
                            iStack_d8 = iStack_d8 + iStack_f8;
                            goto code_r0x0800a014;
                        }
code_r0x0800a04c:
                        uVar3 = 0;
                        goto code_r0x0800a050;
                    }
code_r0x0800a014:
                    if (iStack_d0 == 0) {
                        uVar6 = 0;
                    }
                    else {
                        iStack_f0 = arg3[3] - (iVar9 + iStack_e8);
                        if (iStack_f0 == 0) goto code_r0x0800a04c;
                        iStack_d0 = iStack_d0 + iStack_e8;
                        uVar6 = 0;
                    }
                }
                iVar2 = iVar2 + 1;
                uVar3 = uVar6;
            } while (iVar2 < *(iVar5 + 0x610));
        }
        uVar3 = 0xffffffea;
    }
code_r0x0800a050:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_c8) {
        return uVar3;
    }
    auVar12 = __stack_chk_fail(uVar3);
    uVar3 = auVar12._8_8_;
    *extraout_x18_00 = sym.concat_block_isbad;
    piVar8 = *(auVar12._0_8_ + 0x618);
    iVar5 = *piVar8;
    iVar2 = iVar5;
    do {
        iVar4 = iVar2;
        iVar2 = *(iVar4 + 0x568);
    } while (iVar2 != 0);
    if ((*(iVar4 + 0x118) == 0) || (uVar10 = *(auVar12._0_8_ + 0x610), uVar6 = uVar10, uVar10 < 1)) {
code_r0x0800a0fc:
        uVar3 = 0;
    }
    else {
        uVar7 = *(iVar5 + 8);
        if (uVar7 <= uVar3) {
            do {
                uVar6 = uVar6 - 1;
                piVar8 = piVar8 + 1;
                if (uVar6 == 0) goto code_r0x0800a0fc;
                iVar5 = *piVar8;
                uVar3 = uVar3 - uVar7;
                uVar7 = *(iVar5 + 8);
            } while (uVar7 <= uVar3);
        }
        uVar3 = sym.mtd_block_isbad(iVar5,uVar3);
    }
    return uVar3;
}


// ===== sym.concat_write_oob.8f101c1e8640207a5ff62187927e46fd.cfi_jt @ 0x08003c80 (size 8) =====

ulong sym.concat_write_oob.8f101c1e8640207a5ff62187927e46fd.cfi_jt(int64_t param_1,uint64_t param_2,ulong *param_3)

{
    uint32_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t *piVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar10 [16];
    ulong uStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    iStack_58 = param_3[4];
    uStack_50 = param_3[5];
    iStack_48 = param_3[6];
    iStack_40 = param_3[7];
    uStack_78 = *param_3;
    iStack_70 = param_3[1];
    iStack_68 = param_3[2];
    iStack_60 = param_3[3];
    if ((*(param_1 + 5) >> 2 & 1) == 0) {
        uVar2 = 0xffffffe2;
    }
    else {
        param_3[4] = 0;
        param_3[2] = 0;
        if (0 < *(param_1 + 0x610)) {
            iVar8 = 0;
            do {
                iVar3 = *(*(param_1 + 0x618) + iVar8 * 8);
                uVar7 = *(iVar3 + 8);
                uVar4 = param_2 - uVar7;
                if (param_2 < uVar7) {
                    if (uVar7 < iStack_70 + param_2) {
                        iStack_70 = uVar7 - param_2;
                    }
                    uVar2 = sym.mtd_write_oob(iVar3,param_2,&uStack_78);
                    iVar3 = param_3[2];
                    iVar9 = param_3[4];
                    param_3[2] = iVar3 + iStack_68;
                    param_3[4] = iVar9 + iStack_58;
                    if (uVar2 != 0) goto code_r0x0800a050;
                    if (iStack_48 != 0) {
                        iStack_70 = param_3[1] - (iVar3 + iStack_68);
                        if (iStack_70 != 0) {
                            iStack_48 = iStack_48 + iStack_68;
                            goto code_r0x0800a014;
                        }
code_r0x0800a04c:
                        uVar2 = 0;
                        goto code_r0x0800a050;
                    }
code_r0x0800a014:
                    if (iStack_40 == 0) {
                        uVar4 = 0;
                    }
                    else {
                        iStack_60 = param_3[3] - (iVar9 + iStack_58);
                        if (iStack_60 == 0) goto code_r0x0800a04c;
                        iStack_40 = iStack_40 + iStack_58;
                        uVar4 = 0;
                    }
                }
                iVar8 = iVar8 + 1;
                param_2 = uVar4;
            } while (iVar8 < *(param_1 + 0x610));
        }
        uVar2 = 0xffffffea;
    }
code_r0x0800a050:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    auVar10 = __stack_chk_fail(uVar2);
    uVar4 = auVar10._8_8_;
    *extraout_x18 = sym.concat_block_isbad;
    piVar6 = *(auVar10._0_8_ + 0x618);
    iVar3 = *piVar6;
    iVar8 = iVar3;
    do {
        iVar9 = iVar8;
        iVar8 = *(iVar9 + 0x568);
    } while (iVar8 != 0);
    if ((*(iVar9 + 0x118) == 0) || (uVar1 = *(auVar10._0_8_ + 0x610), uVar7 = uVar1, uVar1 < 1)) {
code_r0x0800a0fc:
        uVar2 = 0;
    }
    else {
        uVar5 = *(iVar3 + 8);
        if (uVar5 <= uVar4) {
            do {
                uVar7 = uVar7 - 1;
                piVar6 = piVar6 + 1;
                if (uVar7 == 0) goto code_r0x0800a0fc;
                iVar3 = *piVar6;
                uVar4 = uVar4 - uVar5;
                uVar5 = *(iVar3 + 8);
            } while (uVar5 <= uVar4);
        }
        uVar2 = sym.mtd_block_isbad(iVar3,uVar4);
    }
    return uVar2;
}


// ===== sym.mtd_read_oob.cfi_jt @ 0x08003c88 (size 8) =====

uint64_t sym.mtd_read_oob.cfi_jt(int64_t param_1,uint64_t param_2,int *param_3)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int *piVar6;
    int64_t iVar7;
    uint32_t uVar8;
    int64_t iVar9;
    int64_t iVar10;
    code *pcVar11;
    int64_t iVar12;
    int iVar13;
    uint64_t uVar14;
    int iVar15;
    uint64_t uVar16;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = param_1;
    do {
        iVar12 = iVar7;
        iVar7 = *(iVar12 + 0x568);
    } while (*(iVar12 + 0x568) != 0);
    iVar1 = *(iVar12 + 0x178);
    iVar2 = *(iVar12 + 0x17c);
    piVar6 = param_3 + 4;
    piVar6[0] = 0;
    piVar6[1] = 0;
    iVar7 = *(param_3 + 0xc);
    param_3[8] = 0;
    param_3[9] = 0;
    if (iVar7 == 0) {
        param_3[2] = 0;
        param_3[3] = 0;
        iVar9 = *(param_3 + 0xe);
    }
    else {
        iVar9 = *(param_3 + 0xe);
    }
    if (iVar9 == 0) {
        param_3[6] = 0;
        param_3[7] = 0;
    }
    if (-1 < param_2) {
        iVar5 = *(param_3 + 2);
        uVar14 = *(param_1 + 8);
        if (iVar5 + param_2 <= uVar14) {
            if (*(param_3 + 6) == 0) {
code_r0x08005d84:
                if (*(iVar12 + 0xa0) == 0) {
                    if (*(iVar12 + 0x88) == 0) {
                        return 0xffffffa1;
                    }
                    if (iVar9 != 0) {
                        return 0xffffffa1;
                    }
                }
                iVar9 = param_1;
                if ((*(param_1 + 5) >> 6 & 1) == 0) {
                    do {
                        iVar10 = iVar9;
                        iVar9 = *(iVar10 + 0x568);
                    } while (*(iVar10 + 0x568) != 0);
                    iVar4 = *(param_1 + 0x568);
                    iVar9 = param_1;
                    while (iVar3 = iVar4, iVar3 != 0) {
                        param_2 = *(iVar9 + 0x590) + param_2;
                        iVar9 = iVar3;
                        iVar4 = *(iVar3 + 0x568);
                    }
                    pcVar11 = *(iVar10 + 0xa0);
                    if (pcVar11 == NULL) {
                        pcVar11 = *(iVar10 + 0x88);
                        if (3 < (pcVar11 + -0x8003b20 >> 3 | pcVar11 << 0x3d)) {
                            __cfi_slowpath_diag(0xbbecc41de69d7c2b,pcVar11,0x8000fe0);
                            iVar5 = *(param_3 + 2);
                            iVar7 = *(param_3 + 0xc);
                        }
                        uVar14 = (*pcVar11)(iVar10,param_2,iVar5,piVar6,iVar7);
                    }
                    else {
                        if (3 < (pcVar11 + -0x8003c70 >> 3 | pcVar11 << 0x3d)) {
                            __cfi_slowpath_diag(0x38a5cf1b120bf637,pcVar11,0x8000fc0);
                        }
                        uVar14 = (*pcVar11)(iVar10,param_2,param_3);
                    }
                }
                else {
                    uVar14 = sym.mtd_io_emulated_slc(param_1,param_2,1,param_3);
                }
                if ((iVar12 != param_1) && (*(param_1 + 0x568) != 0)) {
                    iVar13 = *(iVar12 + 0x17c);
                    iVar15 = *(iVar12 + 0x178);
                    iVar7 = *(param_1 + 0x568);
                    iVar12 = param_1;
                    do {
                        iVar9 = iVar7;
                        *(iVar12 + 0x17c) = (iVar13 - iVar2) + *(iVar12 + 0x17c);
                        *(iVar12 + 0x178) = (iVar15 - iVar1) + *(iVar12 + 0x178);
                        iVar7 = *(iVar9 + 0x568);
                        iVar12 = iVar9;
                    } while (iVar7 != 0);
                }
                if (uVar14 < 0) {
                    return uVar14;
                }
                if (*(param_1 + 0x5c) != 0) {
                    uVar8 = 0;
                    if (*(param_1 + 0x34) <= uVar14) {
                        uVar8 = 0xffffff8b;
                    }
                    return uVar8;
                }
                return 0;
            }
            iVar10 = 0x20;
            if (*param_3 != 1) {
                iVar10 = 0x1c;
            }
            if (param_3[10] < *(param_1 + iVar10)) {
                uVar8 = *(param_1 + 0x28);
                if (uVar8 == 0) {
                    uVar16 = *(param_1 + 0x14);
                    iVar13 = 0;
                    if (uVar16 != 0) {
                        iVar13 = uVar14 / uVar16;
                    }
                    iVar15 = 0;
                    if (uVar16 != 0) {
                        iVar15 = param_2 / uVar16;
                    }
                }
                else {
                    iVar13 = uVar14 >> (uVar8 & 0x3f);
                    iVar15 = param_2 >> (uVar8 & 0x3f);
                }
                if (*(param_3 + 6) <= (iVar13 - iVar15) * *(param_1 + iVar10) - param_3[10]) goto code_r0x08005d84;
            }
        }
    }
    return 0xffffffea;
}


// ===== sym.__typeid__ZTSFiP8mtd_infoiP16mtd_pairing_infoE_global_addr @ 0x08003c90 (size 8) =====

ulong sym.__typeid__ZTSFiP8mtd_infoiP16mtd_pairing_infoE_global_addr(int64_t param_1,uint64_t param_2,int *param_3)

{
    int iVar1;
    uint32_t uVar2;
    ulong uVar3;
    int iVar4;
    int64_t iVar5;
    int *piVar6;
    code *pcVar7;
    int iVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    do {
        iVar5 = param_1;
        param_1 = *(iVar5 + 0x568);
    } while (*(iVar5 + 0x568) != 0);
    piVar6 = *(iVar5 + 0x50);
    iVar4 = param_2;
    if (piVar6 == NULL) {
        iVar8 = 1;
    }
    else {
        iVar8 = *piVar6;
        if (iVar8 == 0) {
            iVar8 = 1;
        }
    }
    if (-1 < iVar4) {
        uVar2 = 0;
        if (*(iVar5 + 0x14) != 0) {
            uVar2 = *(iVar5 + 0x10) / *(iVar5 + 0x14);
        }
        iVar1 = 0;
        if (iVar8 != 0) {
            iVar1 = uVar2 / iVar8;
        }
        if (iVar4 < iVar1) {
            if ((piVar6 != NULL) && (pcVar7 = *(piVar6 + 2), pcVar7 != NULL)) {
                if (pcVar7 != sym.__typeid__ZTSFiP8mtd_infoiP16mtd_pairing_infoE_global_addr) {
                    __cfi_slowpath_diag(0xf9cf5f5d09888d8c,pcVar7,0x8000be0);
                    param_2 = param_2 & 0xffffffff;
                }
                uVar3 = (*pcVar7)(iVar5,param_2,param_3);
                return uVar3;
            }
            *param_3 = iVar4;
            param_3[1] = 0;
            return 0;
        }
    }
    return 0xffffffea;
}


// ===== sym.__typeid__ZTSFiP8mtd_infoxyE_global_addr @ 0x08003c98 (size 8) =====

uint sym.__typeid__ZTSFiP8mtd_infoxyE_global_addr(int64_t param_1,uint64_t param_2,uint64_t param_3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint uVar5;
    int64_t iVar6;
    code *pcVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = param_1;
    do {
        iVar6 = iVar4;
        iVar4 = *(iVar6 + 0x568);
    } while (*(iVar6 + 0x568) != 0);
    pcVar7 = *(iVar6 + 0x108);
    if (pcVar7 == NULL) {
        uVar5 = 0xffffffa1;
    }
    else if (param_2 < 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0xffffffea;
        if ((param_2 < *(param_1 + 8)) && (param_3 <= *(param_1 + 8) - param_2)) {
            if (param_3 == 0) {
                uVar5 = 0;
            }
            else {
                if ((*(param_1 + 5) >> 6 & 1) != 0) {
                    uVar1 = *(param_1 + 0x24);
                    if (uVar1 == 0) {
                        uVar8 = *(param_1 + 0x10);
                        uVar10 = 0;
                        if (uVar8 != 0) {
                            uVar10 = param_2 / uVar8;
                        }
                        uVar9 = 0;
                        if (uVar8 != 0) {
                            uVar9 = param_3 / uVar8;
                        }
                        uVar2 = *(iVar6 + 0x10);
                    }
                    else {
                        uVar10 = param_2 >> (uVar1 & 0x3f);
                        uVar2 = *(iVar6 + 0x10);
                        uVar9 = param_3 >> (uVar1 & 0x3f);
                    }
                    param_2 = (uVar10 & 0xffffffff) * uVar2;
                    param_3 = (uVar9 & 0xffffffff) * uVar2;
                }
                if ((pcVar7 + -0x8003c98 >> 3 | pcVar7 << 0x3d) < 6) {
                    iVar4 = *(param_1 + 0x568);
                }
                else {
                    __cfi_slowpath_diag(0xb663bfcbab12d26e,pcVar7,0x8000ec0);
                    iVar4 = *(param_1 + 0x568);
                }
                while (iVar3 = iVar4, iVar3 != 0) {
                    param_2 = *(param_1 + 0x590) + param_2;
                    param_1 = iVar3;
                    iVar4 = *(iVar3 + 0x568);
                }
                uVar5 = (*pcVar7)(iVar6,param_2,param_3);
            }
        }
    }
    return uVar5;
}


// ===== sym.mtd_lock.cfi_jt @ 0x08003ca0 (size 8) =====

uint sym.mtd_lock.cfi_jt(int64_t param_1,uint64_t param_2,uint64_t param_3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint uVar5;
    int64_t iVar6;
    code *pcVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = param_1;
    do {
        iVar6 = iVar4;
        iVar4 = *(iVar6 + 0x568);
    } while (*(iVar6 + 0x568) != 0);
    pcVar7 = *(iVar6 + 0xf8);
    if (pcVar7 == NULL) {
        uVar5 = 0xffffffa1;
    }
    else if (param_2 < 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0xffffffea;
        if ((param_2 < *(param_1 + 8)) && (param_3 <= *(param_1 + 8) - param_2)) {
            if (param_3 == 0) {
                uVar5 = 0;
            }
            else {
                if ((*(param_1 + 5) >> 6 & 1) != 0) {
                    uVar1 = *(param_1 + 0x24);
                    if (uVar1 == 0) {
                        uVar8 = *(param_1 + 0x10);
                        uVar10 = 0;
                        if (uVar8 != 0) {
                            uVar10 = param_2 / uVar8;
                        }
                        uVar9 = 0;
                        if (uVar8 != 0) {
                            uVar9 = param_3 / uVar8;
                        }
                        uVar2 = *(iVar6 + 0x10);
                    }
                    else {
                        uVar10 = param_2 >> (uVar1 & 0x3f);
                        uVar2 = *(iVar6 + 0x10);
                        uVar9 = param_3 >> (uVar1 & 0x3f);
                    }
                    param_2 = (uVar10 & 0xffffffff) * uVar2;
                    param_3 = (uVar9 & 0xffffffff) * uVar2;
                }
                if ((pcVar7 + -0x8003c98 >> 3 | pcVar7 << 0x3d) < 6) {
                    iVar4 = *(param_1 + 0x568);
                }
                else {
                    __cfi_slowpath_diag(0xb663bfcbab12d26e,pcVar7,0x8000e80);
                    iVar4 = *(param_1 + 0x568);
                }
                while (iVar3 = iVar4, iVar3 != 0) {
                    param_2 = *(param_1 + 0x590) + param_2;
                    param_1 = iVar3;
                    iVar4 = *(iVar3 + 0x568);
                }
                uVar5 = (*pcVar7)(iVar6,param_2,param_3);
            }
        }
    }
    return uVar5;
}


// ===== sym.concat_unlock.8f101c1e8640207a5ff62187927e46fd.cfi_jt @ 0x08003ca8 (size 8) =====

ulong sym.concat_unlock.8f101c1e8640207a5ff62187927e46fd.cfi_jt(int64_t param_1,uint64_t param_2,int64_t param_3)

{
    int64_t iVar1;
    int64_t arg1;
    ulong uVar2;
    uint64_t uVar3;
    int iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0x610);
    if (0 < iVar4) {
        iVar6 = 0;
        do {
            arg1 = *(*(param_1 + 0x618) + iVar6 * 8);
            uVar5 = *(arg1 + 8);
            uVar3 = param_2 - uVar5;
            if (param_2 < uVar5) {
                iVar1 = uVar5 - param_2;
                if (param_3 + param_2 <= uVar5) {
                    iVar1 = param_3;
                }
                uVar2 = sym.mtd_unlock(arg1,param_2,iVar1);
                if (uVar2 != 0) {
                    return uVar2;
                }
                param_3 = param_3 - iVar1;
                if (param_3 == 0) {
                    return 0;
                }
                uVar3 = 0;
                iVar4 = *(param_1 + 0x610);
            }
            iVar6 = iVar6 + 1;
            param_2 = uVar3;
        } while (iVar6 < iVar4);
    }
    return 0xffffffea;
}


// ===== sym.concat_lock.8f101c1e8640207a5ff62187927e46fd.cfi_jt @ 0x08003cb0 (size 8) =====

ulong sym.concat_lock.8f101c1e8640207a5ff62187927e46fd.cfi_jt(int64_t param_1,uint64_t param_2,int64_t param_3)

{
    int64_t iVar1;
    int64_t arg1;
    ulong uVar2;
    uint64_t uVar3;
    int iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0x610);
    if (0 < iVar4) {
        iVar6 = 0;
        do {
            arg1 = *(*(param_1 + 0x618) + iVar6 * 8);
            uVar5 = *(arg1 + 8);
            uVar3 = param_2 - uVar5;
            if (param_2 < uVar5) {
                iVar1 = uVar5 - param_2;
                if (param_3 + param_2 <= uVar5) {
                    iVar1 = param_3;
                }
                uVar2 = sym.mtd_lock(arg1,param_2,iVar1);
                if (uVar2 != 0) {
                    return uVar2;
                }
                param_3 = param_3 - iVar1;
                if (param_3 == 0) {
                    return 0;
                }
                uVar3 = 0;
                iVar4 = *(param_1 + 0x610);
            }
            iVar6 = iVar6 + 1;
            param_2 = uVar3;
        } while (iVar6 < iVar4);
    }
    return 0xffffffea;
}


// ===== sym.mtd_unlock.cfi_jt @ 0x08003cb8 (size 8) =====

uint sym.mtd_unlock.cfi_jt(int64_t param_1,uint64_t param_2,uint64_t param_3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint uVar5;
    int64_t iVar6;
    code *pcVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = param_1;
    do {
        iVar6 = iVar4;
        iVar4 = *(iVar6 + 0x568);
    } while (*(iVar6 + 0x568) != 0);
    pcVar7 = *(iVar6 + 0x100);
    if (pcVar7 == NULL) {
        uVar5 = 0xffffffa1;
    }
    else if (param_2 < 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0xffffffea;
        if ((param_2 < *(param_1 + 8)) && (param_3 <= *(param_1 + 8) - param_2)) {
            if (param_3 == 0) {
                uVar5 = 0;
            }
            else {
                if ((*(param_1 + 5) >> 6 & 1) != 0) {
                    uVar1 = *(param_1 + 0x24);
                    if (uVar1 == 0) {
                        uVar8 = *(param_1 + 0x10);
                        uVar10 = 0;
                        if (uVar8 != 0) {
                            uVar10 = param_2 / uVar8;
                        }
                        uVar9 = 0;
                        if (uVar8 != 0) {
                            uVar9 = param_3 / uVar8;
                        }
                        uVar2 = *(iVar6 + 0x10);
                    }
                    else {
                        uVar10 = param_2 >> (uVar1 & 0x3f);
                        uVar2 = *(iVar6 + 0x10);
                        uVar9 = param_3 >> (uVar1 & 0x3f);
                    }
                    param_2 = (uVar10 & 0xffffffff) * uVar2;
                    param_3 = (uVar9 & 0xffffffff) * uVar2;
                }
                if ((pcVar7 + -0x8003c98 >> 3 | pcVar7 << 0x3d) < 6) {
                    iVar4 = *(param_1 + 0x568);
                }
                else {
                    __cfi_slowpath_diag(0xb663bfcbab12d26e,pcVar7,0x8000ea0);
                    iVar4 = *(param_1 + 0x568);
                }
                while (iVar3 = iVar4, iVar3 != 0) {
                    param_2 = *(param_1 + 0x590) + param_2;
                    param_1 = iVar3;
                    iVar4 = *(iVar3 + 0x568);
                }
                uVar5 = (*pcVar7)(iVar6,param_2,param_3);
            }
        }
    }
    return uVar5;
}


// ===== sym.concat_is_locked.8f101c1e8640207a5ff62187927e46fd.cfi_jt @ 0x08003cc0 (size 8) =====

ulong sym.concat_is_locked.8f101c1e8640207a5ff62187927e46fd.cfi_jt(int64_t param_1,uint64_t param_2,int64_t param_3)

{
    ulong uVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(param_1 + 0x610);
    if (0 < *(param_1 + 0x610)) {
        piVar3 = *(param_1 + 0x618);
        do {
            uVar4 = *(*piVar3 + 8);
            if (param_2 < uVar4) {
                if (uVar4 < param_2 + param_3) {
                    return 0xffffffea;
                }
                uVar1 = sym.mtd_is_locked(*piVar3,param_2,param_3);
                return uVar1;
            }
            uVar2 = uVar2 - 1;
            piVar3 = piVar3 + 1;
            param_2 = param_2 - uVar4;
        } while (uVar2 != 0);
    }
    return 0xffffffea;
}


// ===== sym.__typeid__ZTSFiP8mtd_infoxmE_global_addr @ 0x08003cc8 (size 8) =====

ulong sym.__typeid__ZTSFiP8mtd_infoxmE_global_addr(int64_t param_1,ulong param_2,int64_t param_3)

{
    ulong uVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    do {
        iVar2 = param_1;
        param_1 = *(iVar2 + 0x568);
    } while (*(iVar2 + 0x568) != 0);
    pcVar3 = *(iVar2 + 0xd8);
    if (pcVar3 == NULL) {
        uVar1 = 0xffffffa1;
    }
    else if (param_3 == 0) {
        uVar1 = 0;
    }
    else {
        if (2 < (pcVar3 + -0x8003cc8 >> 3 | pcVar3 << 0x3d)) {
            __cfi_slowpath_diag(0x5a1f01aca03a138f,pcVar3,0x8000e40);
        }
        uVar1 = (*pcVar3)(iVar2,param_2,param_3);
    }
    return uVar1;
}


// ===== sym.mtd_erase_user_prot_reg.cfi_jt @ 0x08003cd0 (size 8) =====

ulong sym.mtd_erase_user_prot_reg.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    ulong uVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    do {
        iVar2 = param_1;
        param_1 = *(iVar2 + 0x568);
    } while (*(iVar2 + 0x568) != 0);
    pcVar3 = *(iVar2 + 0xe0);
    if (pcVar3 == NULL) {
        uVar1 = 0xffffffa1;
    }
    else if (param_3 == 0) {
        uVar1 = 0;
    }
    else {
        if (2 < (pcVar3 + -0x8003cc8 >> 3 | pcVar3 << 0x3d)) {
            __cfi_slowpath_diag(0x5a1f01aca03a138f,pcVar3,0x8000e60);
        }
        uVar1 = (*pcVar3)(iVar2,param_2,param_3);
    }
    return uVar1;
}


// ===== sym.mtd_unpoint.cfi_jt @ 0x08003cd8 (size 8) =====

uint sym.mtd_unpoint.cfi_jt(int64_t param_1,uint64_t param_2,uint64_t param_3)

{
    int64_t iVar1;
    int64_t iVar2;
    uint uVar3;
    int64_t iVar4;
    code *pcVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = param_1;
    do {
        iVar4 = iVar2;
        iVar2 = *(iVar4 + 0x568);
    } while (*(iVar4 + 0x568) != 0);
    pcVar5 = *(iVar4 + 0x80);
    if (pcVar5 == NULL) {
        uVar3 = 0xffffffa1;
    }
    else if (param_2 < 0) {
        uVar3 = 0xffffffea;
    }
    else {
        uVar3 = 0xffffffea;
        if ((param_2 < *(param_1 + 8)) && (param_3 <= *(param_1 + 8) - param_2)) {
            if (param_3 == 0) {
                uVar3 = 0;
            }
            else {
                if ((pcVar5 + -0x8003cc8 >> 3 | pcVar5 << 0x3d) < 3) {
                    iVar2 = *(param_1 + 0x568);
                }
                else {
                    __cfi_slowpath_diag(0x5a1f01aca03a138f,pcVar5,0x8000d20);
                    iVar2 = *(param_1 + 0x568);
                }
                while (iVar1 = iVar2, iVar1 != 0) {
                    param_2 = *(param_1 + 0x590) + param_2;
                    param_1 = iVar1;
                    iVar2 = *(iVar1 + 0x568);
                }
                uVar3 = (*pcVar5)(iVar4,param_2,param_3);
            }
        }
    }
    return uVar3;
}


// ===== sym.__typeid__ZTSFvP8mtd_infoE_global_addr @ 0x08003ce0 (size 8) =====

void sym.__typeid__ZTSFvP8mtd_infoE_global_addr(int64_t param_1)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    code *pcVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x610);
    if (0 < iVar2) {
        iVar5 = 0;
        do {
            iVar1 = *(*(param_1 + 0x618) + iVar5 * 8);
            do {
                iVar3 = iVar1;
                iVar1 = *(iVar3 + 0x568);
            } while (*(iVar3 + 0x568) != 0);
            pcVar4 = *(iVar3 + 0xf0);
            if (pcVar4 != NULL) {
                if (4 < (pcVar4 + -0x8003ce0 >> 3 | pcVar4 << 0x3d)) {
                    __cfi_slowpath_diag(0xcda853bfdc928661,pcVar4,0x8001060);
                }
                (*pcVar4)(iVar3);
                iVar2 = *(param_1 + 0x610);
            }
            iVar5 = iVar5 + 1;
        } while (iVar5 < iVar2);
    }
    return;
}


// ===== sym.mtd_concat_destroy.cfi_jt @ 0x08003ce8 (size 8) =====

void sym.mtd_concat_destroy.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x60) != 0) {
        kfree(*(param_1 + 0x68));
    }
    kfree(param_1);
    return;
}


// ===== sym.put_mtd_device.cfi_jt @ 0x08003cf0 (size 8) =====

void sym.put_mtd_device.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.dfs_dir_mtd);
    iVar2 = param_1;
    do {
        iVar3 = iVar2;
        iVar2 = *(iVar3 + 0x568);
    } while (*(iVar3 + 0x568) != 0);
    do {
        if (*(param_1 + 0x568) == 0) {
            pcVar4 = *(iVar3 + 0x150);
            *(iVar3 + 0x530) = *(iVar3 + 0x530) + -1;
            if (pcVar4 != NULL) {
                if (4 < (pcVar4 + -0x8003ce0 >> 3 | pcVar4 << 0x3d)) {
                    __cfi_slowpath_diag(0xcda853bfdc928661,pcVar4,0x8000cc0);
                }
                (*pcVar4)(iVar3);
            }
            module_put(*(iVar3 + 0x198));
            mutex_unlock(obj.dfs_dir_mtd);
            return;
        }
        iVar1 = *(param_1 + 0x530) + -1;
        *(param_1 + 0x530) = iVar1;
        param_1 = *(param_1 + 0x568);
    } while (-1 < iVar1);
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x800,0x80054f8);
    (*pcVar4)();
}


// ===== sym.concat_resume.8f101c1e8640207a5ff62187927e46fd.cfi_jt @ 0x08003cf8 (size 8) =====

void sym.concat_resume.8f101c1e8640207a5ff62187927e46fd.cfi_jt(int64_t param_1)

{
    uint8_t uVar1;
    int64_t iVar2;
    int iVar3;
    code *pcVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x610);
    if (0 < iVar3) {
        iVar6 = 0;
        do {
            iVar2 = *(*(param_1 + 0x618) + iVar6 * 8);
            do {
                iVar5 = iVar2;
                iVar2 = *(iVar5 + 0x568);
            } while (*(iVar5 + 0x568) != 0);
            uVar1 = *(iVar5 + 0x608);
            if ((uVar1 & 1) != 0) {
                pcVar4 = *(iVar5 + 0x138);
                if (pcVar4 != NULL) {
                    if (4 < (pcVar4 + -0x8003ce0 >> 3 | pcVar4 << 0x3d)) {
                        __cfi_slowpath_diag(0xcda853bfdc928661,pcVar4,0x80010a0);
                    }
                    (*pcVar4)(iVar5);
                    uVar1 = *(iVar5 + 0x608);
                }
                *(iVar5 + 0x608) = uVar1 & 0xfe;
                iVar3 = *(param_1 + 0x610);
            }
            iVar6 = iVar6 + 1;
        } while (iVar6 < iVar3);
    }
    return;
}


// ===== sym.__put_mtd_device.cfi_jt @ 0x08003d00 (size 8) =====

void sym.__put_mtd_device.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = param_1;
    do {
        iVar3 = iVar2;
        iVar2 = *(iVar3 + 0x568);
    } while (*(iVar3 + 0x568) != 0);
    do {
        if (*(param_1 + 0x568) == 0) {
            pcVar4 = *(iVar3 + 0x150);
            *(iVar3 + 0x530) = *(iVar3 + 0x530) + -1;
            if (pcVar4 != NULL) {
                if (4 < (pcVar4 + -0x8003ce0 >> 3 | pcVar4 << 0x3d)) {
                    __cfi_slowpath_diag(0xcda853bfdc928661,pcVar4,0x8000cc0);
                }
                (*pcVar4)(iVar3);
            }
            module_put(*(iVar3 + 0x198));
            return;
        }
        iVar1 = *(param_1 + 0x530) + -1;
        *(param_1 + 0x530) = iVar1;
        param_1 = *(param_1 + 0x568);
    } while (-1 < iVar1);
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x800,0x80055bc);
    (*pcVar4)();
}


// ===== sym.__mtd_next_device @ 0x08003d08 (size 96) =====

ulong sym.__mtd_next_device(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    int iVar5;
    uint64_t uVar6;
    int *in_x2;
    int64_t iVar7;
    int *piVar8;
    code *pcVar9;
    int iVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar11 [16];
    uint uStack_1c;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_18 = *(iVar3 + 0x5e0);
    uStack_1c = arg1;
    uVar4 = idr_get_next(obj.mtd_idr,&uStack_1c);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_18) {
        return uVar4;
    }
    auVar11 = __stack_chk_fail();
    uVar6 = auVar11._8_8_;
    *extraout_x18 = sym.mtd_wunit_to_pairing_info;
    iVar3 = auVar11._0_8_;
    do {
        iVar7 = iVar3;
        iVar3 = *(iVar7 + 0x568);
    } while (*(iVar7 + 0x568) != 0);
    piVar8 = *(iVar7 + 0x50);
    iVar5 = auVar11._8_4_;
    if (piVar8 == NULL) {
        iVar10 = 1;
    }
    else {
        iVar10 = *piVar8;
        if (iVar10 == 0) {
            iVar10 = 1;
        }
    }
    if (-1 < iVar5) {
        uVar2 = 0;
        if (*(iVar7 + 0x14) != 0) {
            uVar2 = *(iVar7 + 0x10) / *(iVar7 + 0x14);
        }
        iVar1 = 0;
        if (iVar10 != 0) {
            iVar1 = uVar2 / iVar10;
        }
        if (iVar5 < iVar1) {
            if ((piVar8 != NULL) && (pcVar9 = *(piVar8 + 2), pcVar9 != NULL)) {
                if (pcVar9 != sym.__typeid__ZTSFiP8mtd_infoiP16mtd_pairing_infoE_global_addr) {
                    __cfi_slowpath_diag(0xf9cf5f5d09888d8c,pcVar9,0x8000be0);
                    uVar6 = uVar6 & 0xffffffff;
                }
                uVar4 = (*pcVar9)(iVar7,uVar6);
                return uVar4;
            }
            *in_x2 = iVar5;
            in_x2[1] = 0;
            return 0;
        }
    }
    return 0xffffffea;
}


// ===== sym.mtd_wunit_to_pairing_info @ 0x08003d68 (size 228) =====

ulong sym.mtd_wunit_to_pairing_info(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    ulong uVar3;
    int iVar4;
    int64_t iVar5;
    int *piVar6;
    code *pcVar7;
    int iVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    do {
        iVar5 = arg1;
        arg1 = *(iVar5 + 0x568);
    } while (*(iVar5 + 0x568) != 0);
    piVar6 = *(iVar5 + 0x50);
    iVar4 = arg2;
    if (piVar6 == NULL) {
        iVar8 = 1;
    }
    else {
        iVar8 = *piVar6;
        if (iVar8 == 0) {
            iVar8 = 1;
        }
    }
    if (-1 < iVar4) {
        uVar2 = 0;
        if (*(iVar5 + 0x14) != 0) {
            uVar2 = *(iVar5 + 0x10) / *(iVar5 + 0x14);
        }
        iVar1 = 0;
        if (iVar8 != 0) {
            iVar1 = uVar2 / iVar8;
        }
        if (iVar4 < iVar1) {
            if ((piVar6 != NULL) && (pcVar7 = *(piVar6 + 2), pcVar7 != NULL)) {
                if (pcVar7 != sym.__typeid__ZTSFiP8mtd_infoiP16mtd_pairing_infoE_global_addr) {
                    __cfi_slowpath_diag(0xf9cf5f5d09888d8c,pcVar7,0x8000be0);
                    arg2 = arg2 & 0xffffffff;
                }
                uVar3 = (*pcVar7)(iVar5,arg2,arg3);
                return uVar3;
            }
            *arg3 = iVar4;
            *(arg3 + 4) = 0;
            return 0;
        }
    }
    return 0xffffffea;
}


// ===== sym.mtd_pairing_groups @ 0x08003e4c (size 56) =====

int sym.mtd_pairing_groups(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    int *piVar3;
    
    do {
        iVar2 = arg1;
        arg1 = *(iVar2 + 0x568);
    } while (arg1 != 0);
    piVar3 = *(iVar2 + 0x50);
    if (piVar3 != NULL) {
        iVar1 = *piVar3;
        if (iVar1 == 0) {
            iVar1 = 1;
        }
        return iVar1;
    }
    return 1;
}


// ===== sym.mtd_pairing_info_to_wunit @ 0x08003e84 (size 280) =====

int sym.mtd_pairing_info_to_wunit(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    int iVar5;
    code *pcVar6;
    int64_t iVar7;
    int *piVar8;
    int iVar9;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = arg1;
    do {
        iVar7 = iVar4;
        iVar4 = *(iVar7 + 0x568);
    } while (*(iVar7 + 0x568) != 0);
    piVar8 = *(iVar7 + 0x50);
    if (piVar8 == NULL) {
        iVar9 = 1;
    }
    else {
        iVar9 = *piVar8;
        if (iVar9 == 0) {
            iVar9 = 1;
        }
    }
    if (arg2 == 0) {
        iVar5 = -0x16;
    }
    else {
        iVar1 = *arg2;
        iVar5 = -0x16;
        if (-1 < iVar1) {
            uVar3 = 0;
            if (*(iVar7 + 0x14) != 0) {
                uVar3 = *(iVar7 + 0x10) / *(iVar7 + 0x14);
            }
            iVar2 = 0;
            if (iVar9 != 0) {
                iVar2 = uVar3 / iVar9;
            }
            if ((((iVar1 < iVar2) && (iVar5 = -0x16, -1 < *(arg2 + 4) && *(arg2 + 4) < iVar9)) &&
                (iVar5 = iVar1, piVar8 != NULL)) && (*(piVar8 + 4) != 0)) {
                pcVar6 = *(*(arg1 + 0x50) + 0x10);
                if (pcVar6 != sym.__typeid__ZTSFiP8mtd_infoPK16mtd_pairing_infoE_global_addr) {
                    __cfi_slowpath_diag(0x185f1c46528bedc7,pcVar6,0x8000c00);
                }
                iVar5 = (*pcVar6)(iVar7,arg2);
            }
        }
    }
    return iVar5;
}


// ===== sym.add_mtd_device @ 0x08003f9c (size 1556) =====

uint32_t sym.add_mtd_device(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    ulong uVar8;
    int64_t iVar9;
    uint64_t in_x2;
    uint32_t uVar10;
    char *pcVar11;
    char *pcVar12;
    char *pcVar13;
    uint32_t *puVar14;
    code *extraout_x8;
    uint64_t uVar15;
    int64_t iVar16;
    int64_t iVar17;
    int64_t iVar18;
    uint32_t uVar19;
    uint32_t uVar20;
    ulong *in_x18;
    code *unaff_x21;
    code *pcVar21;
    ulong unaff_x30;
    code *pcStack_e0;
    int64_t iStack_d8;
    ulong uStack_d0;
    code *pcStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    code *pcStack_80;
    ulong uStack_78;
    uint uStack_70;
    uint uStack_6c;
    uint uStack_68;
    uint uStack_64;
    int64_t iStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar17 = sp_el0;
    iStack_48 = *(iVar17 + 0x5e0);
    pcVar13 = arg1;
    do {
        pcVar11 = pcVar13;
        pcVar13 = *(pcVar11 + 0x568);
    } while (*(pcVar11 + 0x568) != NULL);
    if ((*(arg1 + 0x218) != 0) && (obj.add_mtd_device.__already_done == 0x0)) {
        obj.add_mtd_device.__already_done = 0x1;
        __warn_printk("MTD already registered\n");
    //WARNING: Does not return
        pcVar21 = SoftwareBreakpoint(0x800,0x8004048);
        (*pcVar21)();
    }
    if (*(arg1 + 0x218) == 0) {
        if (*(arg1 + 0x14) == 0) {
    //WARNING: Does not return
            pcVar21 = SoftwareBreakpoint(0x800,0x80045b0);
            (*pcVar21)();
        }
        if (((*(arg1 + 0x90) != 0) && (*(arg1 + 0xa8) != 0)) || ((*(arg1 + 0x88) != 0 && (*(arg1 + 0xa0) != 0)))) {
    //WARNING: Does not return
            pcVar21 = SoftwareBreakpoint(0x800,0x800406c);
            (*pcVar21)();
        }
        if ((*(arg1 + 0x10) == 0) || (*(pcVar11 + 0x70) == 0)) {
            uVar3 = *(arg1 + 4);
            if ((uVar3 >> 0xc & 1) == 0) {
    //WARNING: Does not return
                pcVar21 = SoftwareBreakpoint(0x800,0x80042a0);
                (*pcVar21)();
            }
        }
        else {
            uVar3 = *(arg1 + 4);
        }
        if (((uVar3 >> 0xe & 1) == 0) ||
           ((((*(arg1 + 0x568) != 0 && (*pcVar11 == '\b')) && (*(pcVar11 + 0x50) != 0)) && (*(pcVar11 + 0xe8) == 0)))) {
            mutex_lock(obj.dfs_dir_mtd);
            in_x2 = 0;
            uVar3 = idr_alloc(obj.mtd_idr,arg1,0,0,0xcc0);
            if (uVar3 < 0) goto code_r0x08004364;
            *(arg1 + 0x40) = uVar3;
            *(arg1 + 0x530) = 0;
            if (*(arg1 + 0x34) == 0) {
                *(arg1 + 0x34) = *(arg1 + 0x5c);
            }
            uVar5 = *(arg1 + 4);
            unaff_x21 = arg1 + 0x1a0;
            pcVar13 = pcVar11;
            if ((uVar5 >> 0xe & 1) == 0) {
                uVar20 = *(arg1 + 0x10);
            }
            else {
                do {
                    pcVar12 = pcVar13;
                    pcVar13 = *(pcVar12 + 0x568);
                } while (pcVar13 != NULL);
                puVar14 = *(pcVar12 + 0x50);
                if (puVar14 == NULL) {
                    uVar10 = 1;
                }
                else {
                    uVar10 = *puVar14;
                    if (uVar10 == 0) {
                        uVar10 = 1;
                    }
                }
                uVar20 = 0;
                if (uVar10 != 0) {
                    uVar20 = *(arg1 + 0x10) / uVar10;
                }
                *(arg1 + 0x10) = uVar20;
                if (*(pcVar11 + 0x24) == 0) {
                    uVar7 = 0;
                    if (*(pcVar11 + 0x10) != 0) {
                        uVar7 = *(arg1 + 8) / *(pcVar11 + 0x10);
                    }
                }
                else {
                    uVar7 = *(arg1 + 8) >> (*(pcVar11 + 0x24) & 0x3f);
                }
                *(arg1 + 8) = (uVar7 & 0xffffffff) * uVar20;
            }
            uVar7 = uVar20;
            uVar1 = *(arg1 + 0x14);
            uVar10 = uVar1 - (uVar1 >> 1 & 0x55555555);
            uVar10 = (uVar10 & 0x33333333) + (uVar10 >> 2 & 0x33333333);
            uVar19 = (uVar20 & 0xaaaaaaaa) >> 1 | (uVar20 & 0x55555555) << 1;
            uVar19 = (uVar19 & 0xcccccccc) >> 2 | (uVar19 & 0x33333333) << 2;
            uVar19 = (uVar19 & 0xf0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f) << 4;
            uVar19 = (uVar19 & 0xff00ff00) >> 8 | (uVar19 & 0xff00ff) << 8;
            uVar2 = (uVar1 & 0xaaaaaaaa) >> 1 | (uVar1 & 0x55555555) << 1;
            uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
            uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
            uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
            uVar19 = LZCOUNT(uVar19 >> 0x10 | uVar19 << 0x10);
            if ((uVar7 & uVar7 - 1) != 0 || uVar20 == 0) {
                uVar19 = 0;
            }
            uVar20 = LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10);
            if (uVar1 == 0) {
                uVar20 = 0xffffffff;
            }
            if ((uVar10 + (uVar10 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 != 1) {
                uVar20 = 0;
            }
            *(arg1 + 0x24) = uVar19;
            *(arg1 + 0x28) = uVar20;
            *(arg1 + 0x2c) = ~(-1 << (uVar19 & 0x1f));
            *(arg1 + 0x30) = ~(-1 << (uVar20 & 0x1f));
            if (((uVar5 ^ 0xffffffff) & 0x2400) != 0) goto code_r0x08004300;
            in_x2 = *(arg1 + 8);
            iVar17 = arg1;
            do {
                iVar6 = iVar17;
                iVar17 = *(iVar6 + 0x568);
            } while (*(iVar6 + 0x568) != 0);
            pcVar21 = *(iVar6 + 0x100);
            if (pcVar21 == NULL) goto code_r0x08004300;
            if (in_x2 == 0) goto code_r0x08004574;
            if ((uVar5 >> 0xe & 1) != 0) {
                if (uVar19 == 0) {
                    uVar15 = 0;
                    if (uVar7 != 0) {
                        uVar15 = in_x2 / uVar7;
                    }
                }
                else {
                    uVar15 = in_x2 >> uVar19;
                }
                in_x2 = (uVar15 & 0xffffffff) * *(iVar6 + 0x10);
            }
            if (5 < (pcVar21 + -0x8003c98 >> 3 | pcVar21 << 0x3d)) goto code_r0x080042a8;
            iVar17 = *(arg1 + 0x568);
            if (iVar17 == 0) goto code_r0x080042ec;
            goto code_r0x08004274;
        }
        uVar3 = 0xffffffea;
    }
    else {
        uVar3 = 0xffffffef;
    }
    do {
        while( true ) {
            iVar17 = sp_el0;
            if (*(iVar17 + 0x5e0) == iStack_48) {
                return uVar3;
            }
            iVar6 = __stack_chk_fail();
            pcVar21 = extraout_x8;
code_r0x080042a8:
            __cfi_slowpath_diag(0xb663bfcbab12d26e,pcVar21,0x8000ea0);
            iVar17 = *(arg1 + 0x568);
            if (iVar17 == 0) {
code_r0x080042ec:
                iVar9 = 0;
            }
            else {
code_r0x08004274:
                iVar9 = 0;
                iVar18 = arg1;
                do {
                    iVar16 = iVar17;
                    iVar17 = *(iVar16 + 0x568);
                    iVar9 = *(iVar18 + 0x590) + iVar9;
                    iVar18 = iVar16;
                } while (iVar17 != 0);
            }
            iVar4 = (*pcVar21)(iVar6,iVar9,in_x2);
            if (iVar4 != -0x5f && iVar4 != 0) {
code_r0x08004574:
                _printk(0x800183a,*(arg1 + 0x38));
            }
code_r0x08004300:
            in_x2 = uVar3;
            *(arg1 + 0x218) = obj.mtd_devtype;
            *(arg1 + 0x4a0) = uVar3 << 1 | 0x5a00000;
            *(arg1 + 0x4c0) = obj.mtd_class;
            dev_set_name(unaff_x21,"mtd%d");
            *(arg1 + 0x238) = arg1;
            uVar5 = device_register(unaff_x21);
            if (uVar5 == 0) break;
code_r0x08004350:
            idr_remove(obj.mtd_idr,uVar3);
            uVar3 = uVar5;
code_r0x08004364:
            mutex_unlock(obj.dfs_dir_mtd);
        }
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_64 = 0;
        iStack_60 = 0;
        uStack_d0 = 0xffffffff;
        iStack_d8 = *(arg1 + 0x210);
        uStack_78 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_b8 = 0;
        uStack_b0 = 0;
        uStack_c0 = 0;
        if (iStack_d8 == 0) {
            iStack_d8 = *unaff_x21;
        }
        pcStack_c8 = obj.__this_module;
        pcStack_80 = sym.mtd_nvmem_reg_read.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt;
        uStack_70 = *(arg1 + 8);
        uStack_6c = 1;
        uStack_68 = 1;
        uStack_98 = 0x10101;
        pcStack_e0 = unaff_x21;
        iVar4 = of_device_is_compatible(*(arg1 + 0x490),"nvmem-cells");
        uStack_88 = CONCAT71(uStack_88._1_7_,iVar4 == 0);
        iStack_60 = arg1;
        uVar7 = nvmem_register(&pcStack_e0);
        *(arg1 + 0x550) = uVar7;
        pcVar21 = arg1;
        if (0xfffffffffffff000 < uVar7) {
            if (uVar7 == 0xffffffffffffffa1) {
                *(arg1 + 0x550) = 0;
            }
            else {
                _dev_err(arg1 + 0x1a0,"Failed to register NVMEM device\n");
                uVar5 = *(arg1 + 0x550);
                if (uVar5 != 0) {
                    device_unregister(unaff_x21);
                    goto code_r0x08004350;
                }
            }
        }
        do {
            unaff_x21 = pcVar21;
            pcVar21 = *(unaff_x21 + 0x568);
        } while (*(unaff_x21 + 0x568) != NULL);
        if ((_segment.ehdr != 0) && (_segment.ehdr < 0xfffffffffffff001)) {
            iVar17 = *(arg1 + 0x210);
            if (iVar17 == 0) {
                iVar17 = *(arg1 + 0x1a0);
            }
            uVar8 = debugfs_create_dir(iVar17);
            *(arg1 + 0x538) = uVar8;
            if (*(unaff_x21 + 0x548) != 0) {
                debugfs_create_file("partid",0x100,uVar8,unaff_x21,obj.mtd_partid_debug_fops);
            }
            if (*(unaff_x21 + 0x540) != 0) {
                debugfs_create_file("partname",0x100,uVar8,unaff_x21,obj.mtd_partname_debug_fops);
            }
        }
        in_x2 = uVar3 << 1 | 0x5a00001;
        device_create(obj.mtd_class,*(arg1 + 0x200),in_x2,0,"mtd%dro",uVar3);
        if (_obj.mtd_notifiers != obj.mtd_notifiers) {
            pcVar21 = _obj.mtd_notifiers;
            do {
                unaff_x21 = *(pcVar21 + -0x10);
                if (4 < (unaff_x21 + -0x8003ce0 >> 3 | unaff_x21 << 0x3d)) {
                    in_x2 = 0x8000c20;
                    __cfi_slowpath_diag(0xcda853bfdc928661,unaff_x21);
                }
                (*unaff_x21)(arg1);
                pcVar21 = *pcVar21;
            } while (pcVar21 != obj.mtd_notifiers);
        }
        mutex_unlock(obj.dfs_dir_mtd);
        __module_get(obj.__this_module);
        uVar3 = 0;
    } while( true );
}


// ===== sym.mtd_unlock @ 0x080045b0 (size 332) =====

uint sym.mtd_unlock(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    code *pcVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar6 = arg3;
    *in_x18 = unaff_x30;
    iVar4 = arg1;
    do {
        iVar7 = iVar4;
        iVar4 = *(iVar7 + 0x568);
    } while (*(iVar7 + 0x568) != 0);
    pcVar8 = *(iVar7 + 0x100);
    if (pcVar8 == NULL) {
        uVar5 = 0xffffffa1;
    }
    else if (arg2 < 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0xffffffea;
        if ((arg2 < *(arg1 + 8)) && (uVar6 <= *(arg1 + 8) - arg2)) {
            if (uVar6 == 0) {
                uVar5 = 0;
            }
            else {
                if ((*(arg1 + 5) >> 6 & 1) != 0) {
                    uVar1 = *(arg1 + 0x24);
                    if (uVar1 == 0) {
                        uVar9 = *(arg1 + 0x10);
                        uVar11 = 0;
                        if (uVar9 != 0) {
                            uVar11 = arg2 / uVar9;
                        }
                        uVar10 = 0;
                        if (uVar9 != 0) {
                            uVar10 = uVar6 / uVar9;
                        }
                        uVar2 = *(iVar7 + 0x10);
                    }
                    else {
                        uVar11 = arg2 >> (uVar1 & 0x3f);
                        uVar2 = *(iVar7 + 0x10);
                        uVar10 = arg3 >> (uVar1 & 0x3f);
                    }
                    arg2 = (uVar11 & 0xffffffff) * uVar2;
                    uVar6 = uVar10 * uVar2;
                }
                if ((pcVar8 + -0x8003c98 >> 3 | pcVar8 << 0x3d) < 6) {
                    iVar4 = *(arg1 + 0x568);
                }
                else {
                    __cfi_slowpath_diag(0xb663bfcbab12d26e,pcVar8,0x8000ea0);
                    iVar4 = *(arg1 + 0x568);
                }
                while (iVar3 = iVar4, iVar3 != 0) {
                    arg2 = *(arg1 + 0x590) + arg2;
                    arg1 = iVar3;
                    iVar4 = *(iVar3 + 0x568);
                }
                uVar5 = (*pcVar8)(iVar7,arg2,uVar6);
            }
        }
    }
    return uVar5;
}


// ===== sym.del_mtd_device @ 0x080046fc (size 336) =====

uint sym.del_mtd_device(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    ulong *in_x18;
    uint uVar3;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.dfs_dir_mtd);
    iVar1 = idr_find(obj.mtd_idr,*(arg1 + 0x40));
    if (iVar1 == arg1) {
        pcVar4 = _obj.mtd_notifiers;
        if (_obj.mtd_notifiers != obj.mtd_notifiers) {
            do {
                pcVar2 = *(pcVar4 + -8);
                if (4 < (pcVar2 + -0x8003ce0 >> 3 | pcVar2 << 0x3d)) {
                    __cfi_slowpath_diag(0xcda853bfdc928661,pcVar2,0x8000c40);
                }
                (*pcVar2)(arg1);
                pcVar4 = *pcVar4;
            } while (pcVar4 != obj.mtd_notifiers);
        }
        if (*(arg1 + 0x530) == 0) {
            debugfs_remove(*(arg1 + 0x538));
            if (*(arg1 + 0x550) != 0) {
                nvmem_unregister();
            }
            device_unregister(arg1 + 0x1a0);
            idr_remove(obj.mtd_idr,*(arg1 + 0x40));
            module_put(obj.__this_module);
            uVar3 = 0;
        }
        else {
            _printk(0x8001978,*(arg1 + 0x40),*(arg1 + 0x38));
            uVar3 = 0xfffffff0;
        }
    }
    else {
        uVar3 = 0xffffffed;
    }
    mutex_unlock(obj.dfs_dir_mtd);
    return uVar3;
}


// ===== sym.mtd_device_parse_register @ 0x0800484c (size 1008) =====

uint64_t sym.mtd_device_parse_register(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    ulong uVar2;
    uint64_t uVar3;
    uint32_t in_w4;
    int64_t *piVar4;
    code *pcVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar7;
    ulong unaff_x30;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    code *pcStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    code *pcStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    int64_t iStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    piVar4 = *(arg1 + 0x200);
    if (piVar4 != NULL) {
        if ((*(arg1 + 0x198) == 0) && (piVar4[0x11] != 0)) {
            *(arg1 + 0x198) = *(piVar4[0x11] + 0x10);
        }
        if (*(arg1 + 0x38) == 0) {
            iVar6 = piVar4[0xe];
            if (iVar6 == 0) {
                iVar6 = *piVar4;
            }
            *(arg1 + 0x38) = iVar6;
        }
    }
    *(arg1 + 0x570) = arg1 + 0x570;
    *(arg1 + 0x578) = arg1 + 0x570;
    __mutex_init(arg1 + 0x5a8,"&mtd->master.partitions_lock",obj.mtd_set_dev_defaults.__key);
    __mutex_init(arg1 + 0x5d8,"&mtd->master.chrdev_lock",obj.mtd_set_dev_defaults.__key);
    iVar1 = sym.parse_mtd_partitions(arg1,arg2,arg3);
    if (iVar1 == -0x205) {
        uVar7 = 0xfffffdfb;
    }
    else {
        if (iVar1 < 1) {
            if (in_w4 == 0) {
                if ((*(arg1 + 0x1dc) >> 1 & 1) != 0) goto code_r0x08004938;
                uVar7 = sym.add_mtd_device(arg1);
                iVar1 = uVar7;
            }
            else {
                uVar7 = sym.add_mtd_partitions(arg1,arg4,in_w4);
                iVar1 = uVar7;
            }
            uVar7 = uVar7 & 0xffffffff;
            if (iVar1 != 0) goto code_r0x0800491c;
        }
code_r0x08004938:
        if (*(arg1 + 0x140) != 0) {
            if ((*(arg1 + 0x160) != 0) && (obj.mtd_device_parse_register.__already_done == 0x0)) {
                obj.mtd_device_parse_register.__already_done = 0x1;
                __warn_printk("MTD already registered\n");
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(0x800,0x8004c24);
                (*pcVar5)();
            }
            if (*(arg1 + 0x160) == 0) {
                *(arg1 + 0x160) = sym.mtd_reboot_notifier.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt;
                register_reboot_notifier();
            }
        }
        if ((*(arg1 + 0xc0) == 0) || (*(arg1 + 200) == 0)) {
code_r0x08004a60:
            if ((*(arg1 + 0xb0) == 0) || (*(arg1 + 0xb8) == 0)) {
                uVar7 = 0;
                goto code_r0x08004b60;
            }
            uVar7 = sym.mtd_otp_size(arg1,0);
            if (-1 < uVar7) {
                if (uVar7 == 0) goto code_r0x08004b60;
                uStack_58 = 0;
                uStack_50 = 0;
                uStack_68 = 0;
                iStack_60 = 0;
                uStack_78 = 0;
                uStack_70 = 0;
                uStack_88 = 0;
                pcStack_80 = NULL;
                uStack_98 = 0;
                uStack_90 = 0;
                uStack_a8 = 0;
                uStack_a0 = 0;
                uStack_b8 = 0;
                uStack_b0 = 0;
                pcStack_c8 = NULL;
                uStack_c0 = 0;
                uStack_d0 = 0;
                uVar2 = of_get_compatible_child(*(arg1 + 0x490),"factory-otp");
                uStack_e0 = *(arg1 + 0x200);
                iVar6 = *(arg1 + 0x210);
                if (iVar6 == 0) {
                    iVar6 = *(arg1 + 0x1a0);
                }
                uStack_d8 = kasprintf(0xcc0,"%s-%s",iVar6,"factory-otp");
                uStack_d0 = CONCAT44(uStack_d0._4_4_,0xffffffff);
                pcStack_c8 = obj.__this_module;
                uStack_a0 = CONCAT44(2,uStack_a0);
                uStack_98._0_3_ = CONCAT21(0x101,uStack_98);
                uStack_70 = CONCAT44(uStack_70._4_4_,uVar7);
                pcStack_80 = sym.mtd_nvmem_fact_otp_reg_read.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt;
                uStack_90 = uVar2;
                iStack_60 = arg1;
                uVar3 = nvmem_register(&uStack_e0);
                uVar7 = 0;
                if (uVar3 != 0xffffffffffffffa1) {
                    uVar7 = uVar3;
                }
                kfree(uStack_d8);
                if (uVar7 < 0xfffffffffffff001) {
                    *(arg1 + 0x560) = uVar7;
                    uVar7 = 0;
                    goto code_r0x08004b60;
                }
                _dev_err(arg1 + 0x1a0,"Failed to register OTP NVMEM device\n");
            }
            if (*(arg1 + 0x558) != 0) {
                nvmem_unregister();
            }
        }
        else {
            uVar7 = sym.mtd_otp_size(arg1,1);
            if (-1 < uVar7) {
                if (uVar7 != 0) {
                    uStack_58 = 0;
                    uStack_50 = 0;
                    uStack_68 = 0;
                    iStack_60 = 0;
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_88 = 0;
                    pcStack_80 = NULL;
                    uStack_98 = 0;
                    uStack_90 = 0;
                    uStack_a8 = 0;
                    uStack_a0 = 0;
                    uStack_b8 = 0;
                    uStack_b0 = 0;
                    pcStack_c8 = NULL;
                    uStack_c0 = 0;
                    uStack_d0 = 0;
                    uVar2 = of_get_compatible_child(*(arg1 + 0x490),"user-otp");
                    uStack_e0 = *(arg1 + 0x200);
                    iVar6 = *(arg1 + 0x210);
                    if (iVar6 == 0) {
                        iVar6 = *(arg1 + 0x1a0);
                    }
                    uStack_d8 = kasprintf(0xcc0,"%s-%s",iVar6,"user-otp");
                    uStack_d0 = CONCAT44(uStack_d0._4_4_,0xffffffff);
                    pcStack_c8 = obj.__this_module;
                    uStack_a0 = CONCAT44(2,uStack_a0);
                    uStack_98._0_3_ = CONCAT21(0x101,uStack_98);
                    uStack_70 = CONCAT44(uStack_70._4_4_,uVar7);
                    pcStack_80 = sym.mtd_nvmem_user_otp_reg_read.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt;
                    uStack_90 = uVar2;
                    iStack_60 = arg1;
                    uVar3 = nvmem_register(&uStack_e0);
                    uVar7 = 0;
                    if (uVar3 != 0xffffffffffffffa1) {
                        uVar7 = uVar3;
                    }
                    kfree(uStack_d8);
                    if (0xfffffffffffff000 < uVar7) {
                        _dev_err(arg1 + 0x1a0,"Failed to register OTP NVMEM device\n");
                        goto code_r0x08004c04;
                    }
                    *(arg1 + 0x558) = uVar7;
                }
                goto code_r0x08004a60;
            }
        }
code_r0x08004c04:
        if (uVar7 == 0) goto code_r0x08004b60;
    }
code_r0x0800491c:
    if ((*(arg1 + 0x1dc) >> 1 & 1) != 0) {
        sym.del_mtd_device(arg1);
    }
code_r0x08004b60:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return uVar7 & 0xffffffff;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.mtd_reboot_notifier;
    pcVar5 = *(iVar6 + -0x20);
    if (4 < (pcVar5 + -0x8003ce0 >> 3 | pcVar5 << 0x3d)) {
        __cfi_slowpath_diag(0xcda853bfdc928661,pcVar5,0x8000fa0);
    }
    (*pcVar5)(iVar6 + -0x160);
    return 0;
}


// ===== sym.mtd_reboot_notifier @ 0x08004c3c (size 124) =====

ulong sym.mtd_reboot_notifier(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = *(arg1 + -0x20);
    if (4 < (pcVar1 + -0x8003ce0 >> 3 | pcVar1 << 0x3d)) {
        __cfi_slowpath_diag(0xcda853bfdc928661,pcVar1,0x8000fa0);
    }
    (*pcVar1)(arg1 + -0x160);
    return 0;
}


// ===== sym.mtd_device_unregister @ 0x08004cb8 (size 120) =====

ulong sym.mtd_device_unregister(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x140) != 0) {
        unregister_reboot_notifier(arg1 + 0x160);
    }
    if (*(arg1 + 0x558) != 0) {
        nvmem_unregister();
    }
    if (*(arg1 + 0x560) != 0) {
        nvmem_unregister();
    }
    uVar1 = sym.del_mtd_partitions(arg1);
    if (uVar1 == 0) {
        if ((*(arg1 + 0x1dc) >> 1 & 1) == 0) {
            uVar1 = 0;
        }
        else {
            uVar1 = sym.del_mtd_device(arg1);
        }
    }
    return uVar1;
}


// ===== sym.register_mtd_user @ 0x08004d30 (size 344) =====

code * sym.register_mtd_user(int64_t arg1)

{
    int64_t *piVar1;
    code *pcVar2;
    code *pcVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    code *pcVar7;
    int64_t iVar8;
    code *pcVar9;
    code *pcVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar11;
    code *unaff_x23;
    ulong unaff_x30;
    uchar auVar12 [16];
    int iStack_fc;
    int64_t iStack_f8;
    uchar **ppuStack_f0;
    code *pcStack_e8;
    code *pcStack_e0;
    code *pcStack_d0;
    int64_t iStack_c8;
    code *pcStack_b8;
    int iStack_ac;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    code *pcStack_90;
    code *pcStack_80;
    code *pcStack_78;
    code *pcStack_70;
    int64_t iStack_68;
    code *pcStack_58;
    int iStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    mutex_lock(obj.dfs_dir_mtd);
    pcVar10 = _obj.mtd_notifiers;
    pcVar11 = arg1 + 0x10;
    pcVar9 = obj.mtd_notifiers;
    uVar5 = __list_add_valid(pcVar11,obj.mtd_notifiers,_obj.mtd_notifiers);
    if ((uVar5 & 1) != 0) {
        *(pcVar10 + 8) = pcVar11;
        *(arg1 + 0x10) = pcVar10;
        *(arg1 + 0x18) = obj.mtd_notifiers;
        _obj.mtd_notifiers = pcVar11;
    }
    __module_get(obj.__this_module);
    iStack_4c = 0;
    iVar6 = idr_get_next(obj.mtd_idr,&iStack_4c);
    if (iVar6 != 0) {
        unaff_x23 = sym.__typeid__ZTSFvP8mtd_infoE_global_addr;
        pcVar9 = obj.mtd_idr;
        pcVar11 = 0x8000c60;
        do {
            pcVar10 = *arg1;
            if (4 < (pcVar10 + -0x8003ce0 >> 3 | pcVar10 << 0x3d)) {
                pcStack_58 = pcVar10;
                __cfi_slowpath_diag(0xcda853bfdc928661,pcVar10,0x8000c60);
                pcVar10 = pcStack_58;
            }
            (*pcVar10)(iVar6);
            iStack_4c = *(iVar6 + 0x40) + 1;
            iVar6 = idr_get_next(obj.mtd_idr,&iStack_4c);
        } while (iVar6 != 0);
        pcVar10 = NULL;
    }
    pcVar7 = mutex_unlock(obj.dfs_dir_mtd);
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return pcVar7;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = sym.unregister_mtd_user;
    pcStack_98 = sym.unregister_mtd_user;
    iVar6 = sp_el0;
    iStack_a8 = *(iVar6 + 0x5e0);
    puStack_a0 = &stack0xffffffffffffffc0;
    pcStack_90 = unaff_x23;
    pcStack_80 = pcVar10;
    pcStack_78 = pcVar11;
    pcStack_70 = pcVar9;
    iStack_68 = arg1;
    mutex_lock(obj.dfs_dir_mtd);
    module_put(obj.__this_module);
    iStack_ac = 0;
    iVar6 = idr_get_next(obj.mtd_idr,&iStack_ac);
    if (iVar6 != 0) {
        pcVar9 = obj.mtd_idr;
        pcVar11 = 0x8000c80;
        do {
            pcVar10 = *(iVar8 + 8);
            if (4 < (pcVar10 + -0x8003ce0 >> 3 | pcVar10 << 0x3d)) {
                pcStack_b8 = pcVar10;
                __cfi_slowpath_diag(0xcda853bfdc928661,pcVar10,0x8000c80);
                pcVar10 = pcStack_b8;
            }
            (*pcVar10)(iVar6);
            iStack_ac = *(iVar6 + 0x40) + 1;
            iVar6 = idr_get_next(obj.mtd_idr,&iStack_ac);
        } while (iVar6 != 0);
    }
    uVar5 = __list_del_entry_valid(iVar8 + 0x10);
    if ((uVar5 & 1) != 0) {
        iVar6 = *(iVar8 + 0x10);
        piVar1 = *(iVar8 + 0x18);
        *(iVar6 + 8) = piVar1;
        *piVar1 = iVar6;
    }
    *(iVar8 + 0x10) = 0xdead000000000100;
    *(iVar8 + 0x18) = 0xdead000000000122;
    mutex_unlock(obj.dfs_dir_mtd);
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_a8) {
        return NULL;
    }
    auVar12 = __stack_chk_fail();
    pcVar10 = auVar12._0_8_;
    *extraout_x18_00 = sym.get_mtd_device;
    pcStack_e8 = sym.get_mtd_device;
    iVar6 = sp_el0;
    iStack_f8 = *(iVar6 + 0x5e0);
    ppuStack_f0 = &puStack_a0;
    pcStack_e0 = pcVar11;
    pcStack_d0 = pcVar9;
    iStack_c8 = iVar8;
    mutex_lock(obj.dfs_dir_mtd);
    if (auVar12._8_4_ == -1) {
        iStack_fc = 0;
        pcVar9 = idr_get_next(obj.mtd_idr,&iStack_fc);
        while (pcVar9 != NULL) {
            pcVar7 = pcVar10;
            if (pcVar9 == pcVar10) goto joined_r0x0800509c;
            iStack_fc = *(pcVar9 + 0x40) + 1;
            pcVar9 = idr_get_next(obj.mtd_idr,&iStack_fc);
        }
    }
    else if ((-1 < auVar12._8_4_) &&
            ((pcVar7 = idr_find(obj.mtd_idr,auVar12._8_8_ & 0xffffffff), pcVar10 == NULL || (pcVar7 == pcVar10)))) {
joined_r0x0800509c:
        pcVar9 = pcVar7;
        if (pcVar7 != NULL) {
            do {
                pcVar11 = pcVar9;
                pcVar9 = *(pcVar11 + 0x568);
            } while (*(pcVar11 + 0x568) != NULL);
            uVar5 = try_module_get(*(pcVar11 + 0x198));
            if ((uVar5 & 1) != 0) {
                pcVar10 = *(pcVar11 + 0x148);
                if (pcVar10 == NULL) goto code_r0x08005140;
                if (5 < (pcVar10 + -0x8003b40 >> 3 | pcVar10 << 0x3d)) goto code_r0x0800517c;
                goto code_r0x080050dc;
            }
        }
    }
    pcVar7 = 0xffffffffffffffed;
    while( true ) {
        mutex_unlock(obj.dfs_dir_mtd);
        iVar6 = sp_el0;
        if (*(iVar6 + 0x5e0) == iStack_f8) break;
        __stack_chk_fail();
code_r0x0800517c:
        __cfi_slowpath_diag(0x2c870642b6445e97,pcVar10,0x8000ca0);
code_r0x080050dc:
        uVar4 = (*pcVar10)(pcVar7);
        if (uVar4 == 0) {
code_r0x08005140:
            *(pcVar11 + 0x530) = *(pcVar11 + 0x530) + 1;
            pcVar3 = *(pcVar7 + 0x568);
            pcVar9 = pcVar7;
            while (pcVar2 = pcVar3, pcVar2 != NULL) {
                *(pcVar9 + 0x530) = *(pcVar9 + 0x530) + 1;
                pcVar9 = pcVar2;
                pcVar3 = *(pcVar2 + 0x568);
            }
        }
        else {
            pcVar10 = uVar4;
            module_put(*(pcVar11 + 0x198));
            pcVar7 = uVar4;
        }
    }
    return pcVar7;
}


// ===== sym.unregister_mtd_user @ 0x08004e88 (size 344) =====

code * sym.unregister_mtd_user(int64_t arg1)

{
    int64_t *piVar1;
    code *pcVar2;
    code *pcVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    code *pcVar7;
    code *pcVar8;
    code *pcVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    code *unaff_x20;
    code *unaff_x21;
    ulong unaff_x30;
    uchar auVar10 [16];
    int iStack_9c;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    code *pcStack_80;
    code *pcStack_70;
    int64_t iStack_68;
    code *pcStack_58;
    int iStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    mutex_lock(obj.dfs_dir_mtd);
    module_put(obj.__this_module);
    iStack_4c = 0;
    iVar5 = idr_get_next(obj.mtd_idr,&iStack_4c);
    if (iVar5 != 0) {
        unaff_x20 = obj.mtd_idr;
        unaff_x21 = 0x8000c80;
        do {
            pcVar9 = *(arg1 + 8);
            if (4 < (pcVar9 + -0x8003ce0 >> 3 | pcVar9 << 0x3d)) {
                pcStack_58 = pcVar9;
                __cfi_slowpath_diag(0xcda853bfdc928661,pcVar9,0x8000c80);
                pcVar9 = pcStack_58;
            }
            (*pcVar9)(iVar5);
            iStack_4c = *(iVar5 + 0x40) + 1;
            iVar5 = idr_get_next(obj.mtd_idr,&iStack_4c);
        } while (iVar5 != 0);
    }
    uVar6 = __list_del_entry_valid(arg1 + 0x10);
    if ((uVar6 & 1) != 0) {
        iVar5 = *(arg1 + 0x10);
        piVar1 = *(arg1 + 0x18);
        *(iVar5 + 8) = piVar1;
        *piVar1 = iVar5;
    }
    *(arg1 + 0x10) = 0xdead000000000100;
    *(arg1 + 0x18) = 0xdead000000000122;
    mutex_unlock(obj.dfs_dir_mtd);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return NULL;
    }
    auVar10 = __stack_chk_fail();
    pcVar9 = auVar10._0_8_;
    *extraout_x18 = sym.get_mtd_device;
    pcStack_88 = sym.get_mtd_device;
    iVar5 = sp_el0;
    iStack_98 = *(iVar5 + 0x5e0);
    puStack_90 = &stack0xffffffffffffffc0;
    pcStack_80 = unaff_x21;
    pcStack_70 = unaff_x20;
    iStack_68 = arg1;
    mutex_lock(obj.dfs_dir_mtd);
    if (auVar10._8_4_ == -1) {
        iStack_9c = 0;
        pcVar8 = idr_get_next(obj.mtd_idr,&iStack_9c);
        while (pcVar8 != NULL) {
            pcVar7 = pcVar9;
            if (pcVar8 == pcVar9) goto joined_r0x0800509c;
            iStack_9c = *(pcVar8 + 0x40) + 1;
            pcVar8 = idr_get_next(obj.mtd_idr,&iStack_9c);
        }
    }
    else if ((-1 < auVar10._8_4_) &&
            ((pcVar7 = idr_find(obj.mtd_idr,auVar10._8_8_ & 0xffffffff), pcVar9 == NULL || (pcVar7 == pcVar9)))) {
joined_r0x0800509c:
        pcVar8 = pcVar7;
        if (pcVar7 != NULL) {
            do {
                unaff_x21 = pcVar8;
                pcVar8 = *(unaff_x21 + 0x568);
            } while (*(unaff_x21 + 0x568) != NULL);
            uVar6 = try_module_get(*(unaff_x21 + 0x198));
            if ((uVar6 & 1) != 0) {
                pcVar9 = *(unaff_x21 + 0x148);
                if (pcVar9 == NULL) goto code_r0x08005140;
                if (5 < (pcVar9 + -0x8003b40 >> 3 | pcVar9 << 0x3d)) goto code_r0x0800517c;
                goto code_r0x080050dc;
            }
        }
    }
    pcVar7 = 0xffffffffffffffed;
    while( true ) {
        mutex_unlock(obj.dfs_dir_mtd);
        iVar5 = sp_el0;
        if (*(iVar5 + 0x5e0) == iStack_98) break;
        __stack_chk_fail();
code_r0x0800517c:
        __cfi_slowpath_diag(0x2c870642b6445e97,pcVar9,0x8000ca0);
code_r0x080050dc:
        uVar4 = (*pcVar9)(pcVar7);
        if (uVar4 == 0) {
code_r0x08005140:
            *(unaff_x21 + 0x530) = *(unaff_x21 + 0x530) + 1;
            pcVar3 = *(pcVar7 + 0x568);
            pcVar8 = pcVar7;
            while (pcVar2 = pcVar3, pcVar2 != NULL) {
                *(pcVar8 + 0x530) = *(pcVar8 + 0x530) + 1;
                pcVar8 = pcVar2;
                pcVar3 = *(pcVar2 + 0x568);
            }
        }
        else {
            pcVar9 = uVar4;
            module_put(*(unaff_x21 + 0x198));
            pcVar7 = uVar4;
        }
    }
    return pcVar7;
}


// ===== sym.get_mtd_device @ 0x08004fe0 (size 448) =====

int64_t sym.get_mtd_device(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t iVar6;
    int64_t unaff_x21;
    ulong unaff_x30;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    mutex_lock(obj.dfs_dir_mtd);
    if (arg2 == -1) {
        iStack_3c = 0;
        iVar4 = idr_get_next(obj.mtd_idr,&iStack_3c);
        while (iVar4 != 0) {
            if (iVar4 == arg1) {
                iVar4 = arg1;
                iVar6 = arg1;
                if (arg1 != 0) goto code_r0x080050a4;
                break;
            }
            iStack_3c = *(iVar4 + 0x40) + 1;
            iVar4 = idr_get_next(obj.mtd_idr,&iStack_3c);
        }
    }
    else if ((-1 < arg2) &&
            (((iVar4 = idr_find(obj.mtd_idr,arg2 & 0xffffffff), arg1 == 0 || (iVar4 == arg1)) &&
             (iVar6 = iVar4, iVar4 != 0)))) {
code_r0x080050a4:
        do {
            unaff_x21 = iVar4;
            iVar4 = *(unaff_x21 + 0x568);
        } while (*(unaff_x21 + 0x568) != 0);
        uVar5 = try_module_get(*(unaff_x21 + 0x198));
        if ((uVar5 & 1) != 0) {
            arg1 = *(unaff_x21 + 0x148);
            if (arg1 == NULL) goto code_r0x08005140;
            if (5 < (arg1 + -0x8003b40 >> 3 | arg1 << 0x3d)) goto code_r0x0800517c;
            goto code_r0x080050dc;
        }
    }
    iVar6 = -0x13;
    while( true ) {
        mutex_unlock(obj.dfs_dir_mtd);
        iVar4 = sp_el0;
        if (*(iVar4 + 0x5e0) == iStack_38) break;
        __stack_chk_fail();
code_r0x0800517c:
        __cfi_slowpath_diag(0x2c870642b6445e97,arg1,0x8000ca0);
code_r0x080050dc:
        uVar3 = (*arg1)(iVar6);
        if (uVar3 == 0) {
code_r0x08005140:
            *(unaff_x21 + 0x530) = *(unaff_x21 + 0x530) + 1;
            iVar2 = *(iVar6 + 0x568);
            iVar4 = iVar6;
            while (iVar1 = iVar2, iVar1 != 0) {
                *(iVar4 + 0x530) = *(iVar4 + 0x530) + 1;
                iVar4 = iVar1;
                iVar2 = *(iVar1 + 0x568);
            }
        }
        else {
            arg1 = uVar3;
            module_put(*(unaff_x21 + 0x198));
            iVar6 = uVar3;
        }
    }
    return iVar6;
}


// ===== sym.__get_mtd_device @ 0x080051a0 (size 240) =====

int sym.__get_mtd_device(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1;
    do {
        iVar4 = iVar1;
        iVar1 = *(iVar4 + 0x568);
    } while (*(iVar4 + 0x568) != 0);
    uVar3 = try_module_get(*(iVar4 + 0x198));
    if ((uVar3 & 1) == 0) {
        iVar2 = -0x13;
    }
    else {
        pcVar5 = *(iVar4 + 0x148);
        if (pcVar5 != NULL) {
            if (5 < (pcVar5 + -0x8003b40 >> 3 | pcVar5 << 0x3d)) {
                __cfi_slowpath_diag(0x2c870642b6445e97,pcVar5,0x8000ca0);
            }
            iVar2 = (*pcVar5)(arg1);
            if (iVar2 != 0) {
                module_put(*(iVar4 + 0x198));
                return iVar2;
            }
        }
        *(iVar4 + 0x530) = *(iVar4 + 0x530) + 1;
        iVar1 = *(arg1 + 0x568);
        while (iVar4 = iVar1, iVar4 != 0) {
            *(arg1 + 0x530) = *(arg1 + 0x530) + 1;
            arg1 = iVar4;
            iVar1 = *(iVar4 + 0x568);
        }
        iVar2 = 0;
    }
    return iVar2;
}


// ===== sym.get_mtd_device_nm @ 0x08005290 (size 400) =====

code * sym.get_mtd_device_nm(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    code *pcVar3;
    code *pcVar4;
    int iVar5;
    uint32_t uVar6;
    code *pcVar7;
    uint64_t uVar8;
    ulong *in_x18;
    code *unaff_x21;
    ulong unaff_x30;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    mutex_lock(obj.dfs_dir_mtd);
    iStack_3c = 0;
    pcVar7 = idr_get_next(obj.mtd_idr,&iStack_3c);
    if (pcVar7 != NULL) {
        unaff_x21 = obj.mtd_idr;
        do {
            iVar5 = strcmp(arg1,*(pcVar7 + 0x38));
            pcVar3 = pcVar7;
            if (iVar5 == 0) goto code_r0x08005324;
            iStack_3c = *(pcVar7 + 0x40) + 1;
            pcVar7 = idr_get_next(obj.mtd_idr,&iStack_3c);
        } while (pcVar7 != NULL);
    }
code_r0x0800537c:
    pcVar7 = 0xffffffffffffffed;
    while( true ) {
        mutex_unlock(obj.dfs_dir_mtd);
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iStack_38) break;
        __stack_chk_fail();
code_r0x080053fc:
        __cfi_slowpath_diag(0x2c870642b6445e97,arg1,0x8000ca0);
code_r0x0800535c:
        uVar6 = (*arg1)(pcVar7);
        if (uVar6 == 0) {
code_r0x080053c0:
            *(unaff_x21 + 0x530) = *(unaff_x21 + 0x530) + 1;
            pcVar4 = *(pcVar7 + 0x568);
            pcVar3 = pcVar7;
            while (pcVar2 = pcVar4, pcVar2 != NULL) {
                *(pcVar3 + 0x530) = *(pcVar3 + 0x530) + 1;
                pcVar3 = pcVar2;
                pcVar4 = *(pcVar2 + 0x568);
            }
        }
        else {
            arg1 = uVar6;
            module_put(*(unaff_x21 + 0x198));
            pcVar7 = uVar6;
        }
    }
    return pcVar7;
code_r0x08005324:
    do {
        unaff_x21 = pcVar3;
        pcVar3 = *(unaff_x21 + 0x568);
    } while (*(unaff_x21 + 0x568) != NULL);
    uVar8 = try_module_get(*(unaff_x21 + 0x198));
    if ((uVar8 & 1) != 0) {
        arg1 = *(unaff_x21 + 0x148);
        if (arg1 == NULL) goto code_r0x080053c0;
        if (5 < (arg1 + -0x8003b40 >> 3 | arg1 << 0x3d)) goto code_r0x080053fc;
        goto code_r0x0800535c;
    }
    goto code_r0x0800537c;
}


// ===== sym.put_mtd_device @ 0x08005420 (size 216) =====

void sym.put_mtd_device(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.dfs_dir_mtd);
    iVar2 = arg1;
    do {
        iVar3 = iVar2;
        iVar2 = *(iVar3 + 0x568);
    } while (*(iVar3 + 0x568) != 0);
    do {
        if (*(arg1 + 0x568) == 0) {
            pcVar4 = *(iVar3 + 0x150);
            *(iVar3 + 0x530) = *(iVar3 + 0x530) + -1;
            if (pcVar4 != NULL) {
                if (4 < (pcVar4 + -0x8003ce0 >> 3 | pcVar4 << 0x3d)) {
                    __cfi_slowpath_diag(0xcda853bfdc928661,pcVar4,0x8000cc0);
                }
                (*pcVar4)(iVar3);
            }
            module_put(*(iVar3 + 0x198));
            mutex_unlock(obj.dfs_dir_mtd);
            return;
        }
        iVar1 = *(arg1 + 0x530) + -1;
        *(arg1 + 0x530) = iVar1;
        arg1 = *(arg1 + 0x568);
    } while (-1 < iVar1);
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x800,0x80054f8);
    (*pcVar4)();
}


// ===== sym.__put_mtd_device @ 0x080054f8 (size 196) =====

void sym.__put_mtd_device(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = arg1;
    do {
        iVar3 = iVar2;
        iVar2 = *(iVar3 + 0x568);
    } while (*(iVar3 + 0x568) != 0);
    do {
        if (*(arg1 + 0x568) == 0) {
            pcVar4 = *(iVar3 + 0x150);
            *(iVar3 + 0x530) = *(iVar3 + 0x530) + -1;
            if (pcVar4 != NULL) {
                if (4 < (pcVar4 + -0x8003ce0 >> 3 | pcVar4 << 0x3d)) {
                    __cfi_slowpath_diag(0xcda853bfdc928661,pcVar4,0x8000cc0);
                }
                (*pcVar4)(iVar3);
            }
            module_put(*(iVar3 + 0x198));
            return;
        }
        iVar1 = *(arg1 + 0x530) + -1;
        *(arg1 + 0x530) = iVar1;
        arg1 = *(arg1 + 0x568);
    } while (-1 < iVar1);
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x800,0x80055bc);
    (*pcVar4)();
}


// ===== sym.mtd_erase @ 0x080055bc (size 516) =====

void sym.mtd_erase(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    code *pcVar7;
    code *extraout_x8;
    int64_t iVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong *in_x18;
    int64_t iVar14;
    ulong unaff_x30;
    int64_t iStack_50;
    int64_t iStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_38 = *(iVar14 + 0x5e0);
    iVar14 = arg1;
    do {
        iVar4 = iVar14;
        iVar14 = *(iVar4 + 0x568);
    } while (*(iVar4 + 0x568) != 0);
    if (*(arg1 + 0x568) == 0) {
        iVar14 = 0;
    }
    else {
        iVar14 = 0;
        iVar6 = *(arg1 + 0x568);
        iVar8 = arg1;
        do {
            iVar5 = iVar6;
            iVar6 = *(iVar5 + 0x568);
            iVar14 = *(iVar8 + 0x590) + iVar14;
            iVar8 = iVar5;
        } while (iVar6 != 0);
    }
    iStack_50 = *arg2;
    iStack_48 = *(arg2 + 8);
    *(arg2 + 0x10) = 0xffffffffffffffff;
    uVar9 = *(arg1 + 0x10);
    iStack_40 = -1;
    if ((*(arg1 + 0x10) == 0) || (pcVar7 = *(iVar4 + 0x70), pcVar7 == NULL)) {
        uVar3 = 0xfffffdf4;
    }
    else {
        uVar11 = *arg2;
        if ((uVar11 < *(arg1 + 8)) && (uVar13 = *(arg2 + 8), uVar13 <= *(arg1 + 8) - uVar11)) {
            if ((*(arg1 + 4) >> 10 & 1) == 0) {
                uVar3 = 0xffffffe2;
            }
            else {
                if (uVar13 != 0) {
                    if ((*(arg1 + 4) >> 0xe & 1) != 0) {
                        uVar1 = *(arg1 + 0x24);
                        if (uVar1 == 0) {
                            uVar10 = 0;
                            if (uVar9 != 0) {
                                uVar10 = uVar11 / uVar9;
                            }
                            uVar2 = *(iVar4 + 0x10);
                            uVar12 = 0;
                            if (uVar9 != 0) {
                                uVar12 = (uVar13 + uVar11) / uVar9;
                            }
                        }
                        else {
                            uVar10 = uVar11 >> (uVar1 & 0x3f);
                            uVar2 = *(iVar4 + 0x10);
                            uVar12 = uVar13 + uVar11 >> (uVar1 & 0x3f);
                        }
                        iStack_50 = (uVar10 & 0xffffffff) * uVar2;
                        iStack_48 = (uVar12 & 0xffffffff) * uVar2 - iStack_50;
                    }
                    iStack_50 = iStack_50 + iVar14;
                    if (1 < (pcVar7 + -0x8003b70 >> 3 | pcVar7 << 0x3d)) goto code_r0x08005794;
                    goto code_r0x08005738;
                }
                uVar3 = 0;
            }
        }
        else {
            uVar3 = 0xffffffea;
        }
    }
    while (iVar6 = sp_el0, *(iVar6 + 0x5e0) != iStack_38) {
        __stack_chk_fail(uVar3);
        pcVar7 = extraout_x8;
code_r0x08005794:
        __cfi_slowpath_diag(0x28961f2c4151831b,pcVar7,0x8000ce0);
code_r0x08005738:
        uVar3 = (*pcVar7)(iVar4,&iStack_50);
        if (iStack_40 != -1) {
            uVar9 = iStack_40 - iVar14;
            *(arg2 + 0x10) = uVar9;
            if ((*(arg1 + 5) >> 6 & 1) != 0) {
                if (*(iVar4 + 0x24) == 0) {
                    uVar11 = 0;
                    if (*(iVar4 + 0x10) != 0) {
                        uVar11 = uVar9 / *(iVar4 + 0x10);
                    }
                }
                else {
                    uVar11 = uVar9 >> (*(iVar4 + 0x24) & 0x3f);
                }
                *(arg2 + 0x10) = uVar11 & 0xffffffff;
                *(arg2 + 0x10) = (uVar11 & 0xffffffff) * *(arg1 + 0x10);
            }
        }
    }
    return;
}


// ===== sym.mtd_point @ 0x080057c0 (size 276) =====

uint sym.mtd_point(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    uint uVar3;
    uint64_t uVar4;
    ulong *in_x4;
    ulong *in_x5;
    int64_t iVar5;
    code *pcVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar4 = arg3;
    *in_x18 = unaff_x30;
    iVar2 = arg1;
    do {
        iVar5 = iVar2;
        iVar2 = *(iVar5 + 0x568);
    } while (*(iVar5 + 0x568) != 0);
    *arg4 = 0;
    *in_x4 = 0;
    if (in_x5 != NULL) {
        *in_x5 = 0;
    }
    pcVar6 = *(iVar5 + 0x78);
    if (pcVar6 == NULL) {
        uVar3 = 0xffffffa1;
    }
    else if (arg2 < 0) {
        uVar3 = 0xffffffea;
    }
    else {
        uVar3 = 0xffffffea;
        if ((arg2 < *(arg1 + 8)) && (uVar4 <= *(arg1 + 8) - arg2)) {
            if (uVar4 == 0) {
                uVar3 = 0;
            }
            else {
                iVar2 = *(arg1 + 0x568);
                while (iVar1 = iVar2, iVar1 != 0) {
                    arg2 = *(arg1 + 0x590) + arg2;
                    arg1 = iVar1;
                    iVar2 = *(iVar1 + 0x568);
                }
                if (pcVar6 != sym.__typeid__ZTSFiP8mtd_infoxmPmPPvPyE_global_addr) {
                    __cfi_slowpath_diag(0xb2aaf3b568e29a40,pcVar6,0x8000d00);
                }
                uVar3 = (*pcVar6)(iVar5,arg2,uVar4,arg4);
            }
        }
    }
    return uVar3;
}


// ===== sym.mtd_unpoint @ 0x080058d4 (size 264) =====

uint sym.mtd_unpoint(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    uint uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    code *pcVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar4 = arg3;
    *in_x18 = unaff_x30;
    iVar2 = arg1;
    do {
        iVar5 = iVar2;
        iVar2 = *(iVar5 + 0x568);
    } while (*(iVar5 + 0x568) != 0);
    pcVar6 = *(iVar5 + 0x80);
    if (pcVar6 == NULL) {
        uVar3 = 0xffffffa1;
    }
    else if (arg2 < 0) {
        uVar3 = 0xffffffea;
    }
    else {
        uVar3 = 0xffffffea;
        if ((arg2 < *(arg1 + 8)) && (uVar4 <= *(arg1 + 8) - arg2)) {
            if (uVar4 == 0) {
                uVar3 = 0;
            }
            else {
                if ((pcVar6 + -0x8003cc8 >> 3 | pcVar6 << 0x3d) < 3) {
                    iVar2 = *(arg1 + 0x568);
                }
                else {
                    __cfi_slowpath_diag(0x5a1f01aca03a138f,pcVar6,0x8000d20);
                    iVar2 = *(arg1 + 0x568);
                }
                while (iVar1 = iVar2, iVar1 != 0) {
                    arg2 = *(arg1 + 0x590) + arg2;
                    arg1 = iVar1;
                    iVar2 = *(iVar1 + 0x568);
                }
                uVar3 = (*pcVar6)(iVar5,arg2,uVar4);
            }
        }
    }
    return uVar3;
}


// ===== sym.mtd_get_unmapped_area @ 0x080059dc (size 544) =====

void sym.mtd_get_unmapped_area(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar auVar1 [16];
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int iVar5;
    int64_t iVar6;
    int64_t iVar7;
    code *pcVar8;
    code *extraout_x8;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auVar9 [16];
    int64_t iStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    iVar6 = arg1;
    do {
        iVar7 = iVar6;
        iVar6 = *(iVar7 + 0x568);
    } while (*(iVar7 + 0x568) != 0);
    pcVar8 = *(iVar7 + 0x78);
    iStack_40 = 0;
    iStack_48 = 0;
    if (pcVar8 == NULL) {
        iVar5 = -0x5f;
        goto code_r0x08005b38;
    }
    if (arg3 < 0) {
        iVar6 = -0x16;
        goto code_r0x08005b5c;
    }
    iVar5 = -0x16;
    if (*(arg1 + 8) <= arg3) goto code_r0x08005b38;
    if (*(arg1 + 8) - arg3 < arg2) goto code_r0x08005b38;
    iVar6 = iStack_48;
    if (arg2 == 0) goto code_r0x08005b5c;
    iVar4 = *(arg1 + 0x568);
    iVar3 = arg1;
    iVar6 = arg3;
    while (iVar2 = iVar4, iVar2 != 0) {
        iVar6 = *(iVar3 + 0x590) + iVar6;
        iVar3 = iVar2;
        iVar4 = *(iVar2 + 0x568);
    }
    auVar1._8_8_ = iVar6;
    auVar1._0_8_ = iVar7;
    auVar9._8_8_ = iVar6;
    auVar9._0_8_ = iVar7;
    if (pcVar8 != sym.__typeid__ZTSFiP8mtd_infoxmPmPPvPyE_global_addr) goto code_r0x08005b90;
    do {
        iVar5 = (*pcVar8)(auVar1._0_8_,auVar1._8_8_,arg2,&iStack_40,&iStack_48,0);
        iVar7 = iStack_40;
        if (iVar5 == 0) {
            iVar6 = iStack_48;
            iVar3 = arg1;
            if (iStack_40 != arg2) {
                do {
                    arg2 = iVar3;
                    iVar3 = *(arg2 + 0x568);
                } while (*(arg2 + 0x568) != 0);
                pcVar8 = *(arg2 + 0x80);
                if (pcVar8 != NULL) {
                    iVar6 = -0x26;
                    if ((*(arg1 + 8) <= arg3) || (*(arg1 + 8) - arg3 <= iStack_40 - 1U)) goto code_r0x08005b5c;
                    if ((pcVar8 + -0x8003cc8 >> 3 | pcVar8 << 0x3d) < 3) {
                        iVar6 = *(arg1 + 0x568);
                    }
                    else {
                        __cfi_slowpath_diag(0x5a1f01aca03a138f,pcVar8,0x8000d20);
                        iVar6 = *(arg1 + 0x568);
                    }
                    while (iVar3 = iVar6, iVar3 != 0) {
                        arg3 = *(arg1 + 0x590) + arg3;
                        arg1 = iVar3;
                        iVar6 = *(iVar3 + 0x568);
                    }
                    (*pcVar8)(arg2,arg3,iVar7);
                }
                iVar6 = -0x26;
            }
        }
        else {
code_r0x08005b38:
            iVar6 = iVar5;
        }
code_r0x08005b5c:
        iVar7 = sp_el0;
        if (*(iVar7 + 0x5e0) == iStack_38) {
            return;
        }
        auVar9 = __stack_chk_fail(iVar6);
        pcVar8 = extraout_x8;
code_r0x08005b90:
        __cfi_slowpath_diag(0xb2aaf3b568e29a40,pcVar8,0x8000d00);
        auVar1 = auVar9;
    } while( true );
}


// ===== sym.mtd_read @ 0x08005bfc (size 120) =====

uint64_t sym.mtd_read(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int iVar2;
    uint64_t uVar3;
    int *arg3_00;
    int64_t iVar4;
    int *piVar5;
    int64_t iVar6;
    uint32_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    code *pcVar10;
    int64_t iVar11;
    int iVar12;
    uint64_t uVar13;
    int iVar14;
    uint64_t uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar16 [16];
    ulong uStack_68;
    int64_t iStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_30;
    int64_t iStack_28;
    int64_t arg1_00;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
    uStack_68 = 0;
    arg3_00 = &uStack_68;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_30 = 0;
    iStack_60 = arg3;
    uVar3 = sym.mtd_read_oob(arg1,arg2,arg3_00);
    *arg4 = uStack_58;
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    auVar16 = __stack_chk_fail();
    uVar3 = auVar16._8_8_;
    arg1_00 = auVar16._0_8_;
    *extraout_x18 = sym.mtd_read_oob;
    iVar6 = arg1_00;
    do {
        iVar11 = iVar6;
        iVar6 = *(iVar11 + 0x568);
    } while (*(iVar11 + 0x568) != 0);
    iVar1 = *(iVar11 + 0x178);
    iVar2 = *(iVar11 + 0x17c);
    piVar5 = arg3_00 + 4;
    piVar5[0] = 0;
    piVar5[1] = 0;
    iVar6 = *(arg3_00 + 0xc);
    arg3_00[8] = 0;
    arg3_00[9] = 0;
    if (iVar6 == 0) {
        arg3_00[2] = 0;
        arg3_00[3] = 0;
        iVar8 = *(arg3_00 + 0xe);
    }
    else {
        iVar8 = *(arg3_00 + 0xe);
    }
    if (iVar8 == 0) {
        arg3_00[6] = 0;
        arg3_00[7] = 0;
    }
    if (-1 < uVar3) {
        iVar4 = *(arg3_00 + 2);
        uVar13 = *(arg1_00 + 8);
        if (iVar4 + uVar3 <= uVar13) {
            if (*(arg3_00 + 6) == 0) {
code_r0x08005d84:
                if (*(iVar11 + 0xa0) == 0) {
                    if (*(iVar11 + 0x88) == 0) {
                        return 0xffffffa1;
                    }
                    if (iVar8 != 0) {
                        return 0xffffffa1;
                    }
                }
                iVar8 = arg1_00;
                if ((*(arg1_00 + 5) >> 6 & 1) == 0) {
                    do {
                        iVar9 = iVar8;
                        iVar8 = *(iVar9 + 0x568);
                    } while (*(iVar9 + 0x568) != 0);
                    for (iVar8 = *(arg1_00 + 0x568); iVar8 != 0; iVar8 = *(iVar8 + 0x568)) {
                        uVar3 = *(auVar16._0_8_ + 0x590) + auVar16._8_8_;
                        auVar16._8_8_ = uVar3;
                        auVar16._0_8_ = iVar8;
                    }
                    pcVar10 = *(iVar9 + 0xa0);
                    if (pcVar10 == NULL) {
                        pcVar10 = *(iVar9 + 0x88);
                        if (3 < (pcVar10 + -0x8003b20 >> 3 | pcVar10 << 0x3d)) {
                            __cfi_slowpath_diag(0xbbecc41de69d7c2b,pcVar10,0x8000fe0);
                            iVar4 = *(arg3_00 + 2);
                            iVar6 = *(arg3_00 + 0xc);
                        }
                        uVar3 = (*pcVar10)(iVar9,uVar3,iVar4,piVar5,iVar6);
                    }
                    else {
                        if (3 < (pcVar10 + -0x8003c70 >> 3 | pcVar10 << 0x3d)) {
                            __cfi_slowpath_diag(0x38a5cf1b120bf637,pcVar10,0x8000fc0);
                        }
                        uVar3 = (*pcVar10)(iVar9,uVar3,arg3_00);
                    }
                }
                else {
                    uVar3 = sym.mtd_io_emulated_slc(arg1_00,uVar3,1,arg3_00);
                }
                if ((iVar11 != arg1_00) && (*(arg1_00 + 0x568) != 0)) {
                    iVar12 = *(iVar11 + 0x17c);
                    iVar14 = *(iVar11 + 0x178);
                    iVar6 = *(arg1_00 + 0x568);
                    iVar11 = arg1_00;
                    do {
                        iVar8 = iVar6;
                        *(iVar11 + 0x17c) = (iVar12 - iVar2) + *(iVar11 + 0x17c);
                        *(iVar11 + 0x178) = (iVar14 - iVar1) + *(iVar11 + 0x178);
                        iVar6 = *(iVar8 + 0x568);
                        iVar11 = iVar8;
                    } while (iVar6 != 0);
                }
                if (uVar3 < 0) {
                    return uVar3;
                }
                if (*(arg1_00 + 0x5c) != 0) {
                    uVar7 = 0;
                    if (*(arg1_00 + 0x34) <= uVar3) {
                        uVar7 = 0xffffff8b;
                    }
                    return uVar7;
                }
                return 0;
            }
            iVar9 = 0x20;
            if (*arg3_00 != 1) {
                iVar9 = 0x1c;
            }
            if (arg3_00[10] < *(arg1_00 + iVar9)) {
                uVar7 = *(arg1_00 + 0x28);
                if (uVar7 == 0) {
                    uVar15 = *(arg1_00 + 0x14);
                    iVar12 = 0;
                    if (uVar15 != 0) {
                        iVar12 = uVar13 / uVar15;
                    }
                    iVar14 = 0;
                    if (uVar15 != 0) {
                        iVar14 = uVar3 / uVar15;
                    }
                }
                else {
                    iVar12 = uVar13 >> (uVar7 & 0x3f);
                    iVar14 = uVar3 >> (uVar7 & 0x3f);
                }
                if (*(arg3_00 + 6) <= (iVar12 - iVar14) * *(arg1_00 + iVar9) - arg3_00[10]) goto code_r0x08005d84;
            }
        }
    }
    return 0xffffffea;
}


// ===== sym.mtd_read_oob @ 0x08005c74 (size 716) =====

uint64_t sym.mtd_read_oob(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint32_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    code *pcVar10;
    int64_t iVar11;
    int iVar12;
    uint64_t uVar13;
    int iVar14;
    uint64_t uVar15;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = arg1;
    do {
        iVar11 = iVar6;
        iVar6 = *(iVar11 + 0x568);
    } while (*(iVar11 + 0x568) != 0);
    iVar1 = *(iVar11 + 0x178);
    iVar2 = *(iVar11 + 0x17c);
    *(arg3 + 0x10) = 0;
    iVar6 = *(arg3 + 0x30);
    *(arg3 + 0x20) = 0;
    if (iVar6 == 0) {
        *(arg3 + 8) = 0;
        iVar8 = *(arg3 + 0x38);
    }
    else {
        iVar8 = *(arg3 + 0x38);
    }
    if (iVar8 == 0) {
        *(arg3 + 0x18) = 0;
    }
    if (-1 < arg2) {
        iVar5 = *(arg3 + 8);
        uVar13 = *(arg1 + 8);
        if (iVar5 + arg2 <= uVar13) {
            if (*(arg3 + 0x18) == 0) {
code_r0x08005d84:
                if (*(iVar11 + 0xa0) == 0) {
                    if (*(iVar11 + 0x88) == 0) {
                        return 0xffffffa1;
                    }
                    if (iVar8 != 0) {
                        return 0xffffffa1;
                    }
                }
                iVar8 = arg1;
                if ((*(arg1 + 5) >> 6 & 1) == 0) {
                    do {
                        iVar9 = iVar8;
                        iVar8 = *(iVar9 + 0x568);
                    } while (*(iVar9 + 0x568) != 0);
                    iVar4 = *(arg1 + 0x568);
                    iVar8 = arg1;
                    while (iVar3 = iVar4, iVar3 != 0) {
                        arg2 = *(iVar8 + 0x590) + arg2;
                        iVar8 = iVar3;
                        iVar4 = *(iVar3 + 0x568);
                    }
                    pcVar10 = *(iVar9 + 0xa0);
                    if (pcVar10 == NULL) {
                        pcVar10 = *(iVar9 + 0x88);
                        if (3 < (pcVar10 + -0x8003b20 >> 3 | pcVar10 << 0x3d)) {
                            __cfi_slowpath_diag(0xbbecc41de69d7c2b,pcVar10,0x8000fe0);
                            iVar5 = *(arg3 + 8);
                            iVar6 = *(arg3 + 0x30);
                        }
                        uVar13 = (*pcVar10)(iVar9,arg2,iVar5,arg3 + 0x10,iVar6);
                    }
                    else {
                        if (3 < (pcVar10 + -0x8003c70 >> 3 | pcVar10 << 0x3d)) {
                            __cfi_slowpath_diag(0x38a5cf1b120bf637,pcVar10,0x8000fc0);
                        }
                        uVar13 = (*pcVar10)(iVar9,arg2,arg3);
                    }
                }
                else {
                    uVar13 = sym.mtd_io_emulated_slc(arg1,arg2,1,arg3);
                }
                if ((iVar11 != arg1) && (*(arg1 + 0x568) != 0)) {
                    iVar12 = *(iVar11 + 0x17c);
                    iVar14 = *(iVar11 + 0x178);
                    iVar6 = *(arg1 + 0x568);
                    iVar11 = arg1;
                    do {
                        iVar8 = iVar6;
                        *(iVar11 + 0x17c) = (iVar12 - iVar2) + *(iVar11 + 0x17c);
                        *(iVar11 + 0x178) = (iVar14 - iVar1) + *(iVar11 + 0x178);
                        iVar6 = *(iVar8 + 0x568);
                        iVar11 = iVar8;
                    } while (iVar6 != 0);
                }
                if (uVar13 < 0) {
                    return uVar13;
                }
                if (*(arg1 + 0x5c) != 0) {
                    uVar7 = 0;
                    if (*(arg1 + 0x34) <= uVar13) {
                        uVar7 = 0xffffff8b;
                    }
                    return uVar7;
                }
                return 0;
            }
            iVar9 = 0x20;
            if (*arg3 != 1) {
                iVar9 = 0x1c;
            }
            if (*(arg3 + 0x28) < *(arg1 + iVar9)) {
                uVar7 = *(arg1 + 0x28);
                if (uVar7 == 0) {
                    uVar15 = *(arg1 + 0x14);
                    iVar12 = 0;
                    if (uVar15 != 0) {
                        iVar12 = uVar13 / uVar15;
                    }
                    iVar14 = 0;
                    if (uVar15 != 0) {
                        iVar14 = arg2 / uVar15;
                    }
                }
                else {
                    iVar12 = uVar13 >> (uVar7 & 0x3f);
                    iVar14 = arg2 >> (uVar7 & 0x3f);
                }
                if (*(arg3 + 0x18) <= (iVar12 - iVar14) * *(arg1 + iVar9) - *(arg3 + 0x28)) goto code_r0x08005d84;
            }
        }
    }
    return 0xffffffea;
}


// ===== sym.mtd_write @ 0x08005f40 (size 120) =====

uint64_t sym.mtd_write(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int *arg3_00;
    int64_t iVar5;
    int *piVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    code *pcVar10;
    int iVar11;
    uint64_t uVar12;
    int iVar13;
    uint64_t uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar15 [16];
    ulong uStack_68;
    int64_t iStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_30;
    int64_t iStack_28;
    int64_t iVar4;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    uStack_68 = 0;
    arg3_00 = &uStack_68;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_30 = 0;
    iStack_60 = arg3;
    uVar3 = sym.mtd_write_oob(arg1,arg2,arg3_00);
    *arg4 = uStack_58;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    auVar15 = __stack_chk_fail();
    uVar3 = auVar15._8_8_;
    iVar4 = auVar15._0_8_;
    *extraout_x18 = sym.mtd_write_oob;
    iVar7 = iVar4;
    do {
        iVar8 = iVar7;
        iVar7 = *(iVar8 + 0x568);
    } while (*(iVar8 + 0x568) != 0);
    piVar6 = arg3_00 + 4;
    piVar6[0] = 0;
    piVar6[1] = 0;
    arg3_00[8] = 0;
    arg3_00[9] = 0;
    if ((*(iVar4 + 5) >> 2 & 1) == 0) {
        return 0xffffffe2;
    }
    iVar7 = *(arg3_00 + 0xc);
    if (iVar7 == 0) {
        arg3_00[2] = 0;
        arg3_00[3] = 0;
        iVar9 = *(arg3_00 + 0xe);
    }
    else {
        iVar9 = *(arg3_00 + 0xe);
    }
    if (iVar9 == 0) {
        arg3_00[6] = 0;
        arg3_00[7] = 0;
    }
    if (-1 < uVar3) {
        iVar5 = *(arg3_00 + 2);
        uVar12 = *(iVar4 + 8);
        if (iVar5 + uVar3 <= uVar12) {
            if (*(arg3_00 + 6) == 0) {
code_r0x080060c0:
                if (*(iVar8 + 0xa8) == 0) {
                    if (*(iVar8 + 0x90) == 0) {
                        return 0xffffffa1;
                    }
                    if (iVar9 != 0) {
                        return 0xffffffa1;
                    }
                }
                iVar8 = iVar4;
                if ((*(iVar4 + 5) >> 6 & 1) == 0) {
                    do {
                        iVar9 = iVar8;
                        iVar8 = *(iVar9 + 0x568);
                    } while (*(iVar9 + 0x568) != 0);
                    iVar4 = *(iVar4 + 0x568);
                    while( true ) {
                        iVar8 = auVar15._8_8_;
                        if (iVar4 == 0) break;
                        auVar15._8_8_ = *(auVar15._0_8_ + 0x590) + iVar8;
                        auVar15._0_8_ = iVar4;
                        iVar4 = *(iVar4 + 0x568);
                    }
                    pcVar10 = *(iVar9 + 0xa8);
                    if (pcVar10 == NULL) {
                        pcVar10 = *(iVar9 + 0x90);
                        if (4 < (pcVar10 + -0x8003af8 >> 3 | pcVar10 << 0x3d)) {
                            __cfi_slowpath_diag(0x870dfec9503a5e92,pcVar10,0x8001020);
                            iVar5 = *(arg3_00 + 2);
                            iVar7 = *(arg3_00 + 0xc);
                        }
                        uVar3 = (*pcVar10)(iVar9,iVar8,iVar5,piVar6,iVar7);
                    }
                    else {
                        if (3 < (pcVar10 + -0x8003c70 >> 3 | pcVar10 << 0x3d)) {
                            __cfi_slowpath_diag(0x38a5cf1b120bf637,pcVar10,0x8001000);
                        }
                        uVar3 = (*pcVar10)(iVar9,iVar8,arg3_00);
                    }
                }
                else {
                    uVar3 = sym.mtd_io_emulated_slc(iVar4,uVar3,0,arg3_00);
                }
                return uVar3 & 0xffffffff;
            }
            iVar1 = 0x20;
            if (*arg3_00 != 1) {
                iVar1 = 0x1c;
            }
            if (arg3_00[10] < *(iVar4 + iVar1)) {
                uVar2 = *(iVar4 + 0x28);
                if (uVar2 == 0) {
                    uVar14 = *(iVar4 + 0x14);
                    iVar11 = 0;
                    if (uVar14 != 0) {
                        iVar11 = uVar12 / uVar14;
                    }
                    iVar13 = 0;
                    if (uVar14 != 0) {
                        iVar13 = uVar3 / uVar14;
                    }
                }
                else {
                    iVar11 = uVar12 >> (uVar2 & 0x3f);
                    iVar13 = uVar3 >> (uVar2 & 0x3f);
                }
                if (*(arg3_00 + 6) <= (iVar11 - iVar13) * *(iVar4 + iVar1) - arg3_00[10]) goto code_r0x080060c0;
            }
        }
    }
    return 0xffffffea;
}


// ===== sym.mtd_write_oob @ 0x08005fb8 (size 592) =====

uint sym.mtd_write_oob(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    code *pcVar8;
    int iVar9;
    uint64_t uVar10;
    int iVar11;
    uint64_t uVar12;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = arg1;
    do {
        iVar6 = iVar5;
        iVar5 = *(iVar6 + 0x568);
    } while (*(iVar6 + 0x568) != 0);
    *(arg3 + 0x10) = 0;
    *(arg3 + 0x20) = 0;
    if ((*(arg1 + 5) >> 2 & 1) == 0) {
        return 0xffffffe2;
    }
    iVar5 = *(arg3 + 0x30);
    if (iVar5 == 0) {
        *(arg3 + 8) = 0;
        iVar7 = *(arg3 + 0x38);
    }
    else {
        iVar7 = *(arg3 + 0x38);
    }
    if (iVar7 == 0) {
        *(arg3 + 0x18) = 0;
    }
    if (-1 < arg2) {
        iVar4 = *(arg3 + 8);
        uVar10 = *(arg1 + 8);
        if (iVar4 + arg2 <= uVar10) {
            if (*(arg3 + 0x18) == 0) {
code_r0x080060c0:
                if (*(iVar6 + 0xa8) == 0) {
                    if (*(iVar6 + 0x90) == 0) {
                        return 0xffffffa1;
                    }
                    if (iVar7 != 0) {
                        return 0xffffffa1;
                    }
                }
                iVar6 = arg1;
                if ((*(arg1 + 5) >> 6 & 1) != 0) {
                    uVar3 = sym.mtd_io_emulated_slc(arg1,arg2,0,arg3);
                    return uVar3;
                }
                do {
                    iVar7 = iVar6;
                    iVar6 = *(iVar7 + 0x568);
                } while (*(iVar7 + 0x568) != 0);
                iVar6 = *(arg1 + 0x568);
                while (iVar1 = iVar6, iVar1 != 0) {
                    arg2 = *(arg1 + 0x590) + arg2;
                    arg1 = iVar1;
                    iVar6 = *(iVar1 + 0x568);
                }
                pcVar8 = *(iVar7 + 0xa8);
                if (pcVar8 != NULL) {
                    if (3 < (pcVar8 + -0x8003c70 >> 3 | pcVar8 << 0x3d)) {
                        __cfi_slowpath_diag(0x38a5cf1b120bf637,pcVar8,0x8001000);
                    }
                    uVar3 = (*pcVar8)(iVar7,arg2,arg3);
                    return uVar3;
                }
                pcVar8 = *(iVar7 + 0x90);
                if (4 < (pcVar8 + -0x8003af8 >> 3 | pcVar8 << 0x3d)) {
                    __cfi_slowpath_diag(0x870dfec9503a5e92,pcVar8,0x8001020);
                    iVar4 = *(arg3 + 8);
                    iVar5 = *(arg3 + 0x30);
                }
                uVar3 = (*pcVar8)(iVar7,arg2,iVar4,arg3 + 0x10,iVar5);
                return uVar3;
            }
            iVar1 = 0x20;
            if (*arg3 != 1) {
                iVar1 = 0x1c;
            }
            if (*(arg3 + 0x28) < *(arg1 + iVar1)) {
                uVar2 = *(arg1 + 0x28);
                if (uVar2 == 0) {
                    uVar12 = *(arg1 + 0x14);
                    iVar9 = 0;
                    if (uVar12 != 0) {
                        iVar9 = uVar10 / uVar12;
                    }
                    iVar11 = 0;
                    if (uVar12 != 0) {
                        iVar11 = arg2 / uVar12;
                    }
                }
                else {
                    iVar9 = uVar10 >> (uVar2 & 0x3f);
                    iVar11 = arg2 >> (uVar2 & 0x3f);
                }
                if (*(arg3 + 0x18) <= (iVar9 - iVar11) * *(arg1 + iVar1) - *(arg3 + 0x28)) goto code_r0x080060c0;
            }
        }
    }
    return 0xffffffea;
}


// ===== sym.mtd_panic_write @ 0x08006208 (size 308) =====

uint sym.mtd_panic_write(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    uint uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    code *pcVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar4 = arg3;
    *in_x18 = unaff_x30;
    iVar2 = arg1;
    do {
        iVar5 = iVar2;
        iVar2 = *(iVar5 + 0x568);
    } while (*(iVar5 + 0x568) != 0);
    *arg4 = 0;
    pcVar6 = *(iVar5 + 0x98);
    if (pcVar6 == NULL) {
        uVar3 = 0xffffffa1;
    }
    else if (arg2 < 0) {
        uVar3 = 0xffffffea;
    }
    else {
        uVar3 = 0xffffffea;
        if ((arg2 < *(arg1 + 8)) && (uVar4 <= *(arg1 + 8) - arg2)) {
            if ((*(arg1 + 5) >> 2 & 1) == 0) {
                uVar3 = 0xffffffe2;
            }
            else if (uVar4 == 0) {
                uVar3 = 0;
            }
            else {
                if (*(iVar5 + 0x158) == '\0') {
                    *(iVar5 + 0x158) = 1;
                }
                if ((pcVar6 + -0x8003af8 >> 3 | pcVar6 << 0x3d) < 5) {
                    iVar2 = *(arg1 + 0x568);
                }
                else {
                    __cfi_slowpath_diag(0x870dfec9503a5e92,pcVar6,0x8000d40);
                    iVar2 = *(arg1 + 0x568);
                }
                while (iVar1 = iVar2, iVar1 != 0) {
                    arg2 = *(arg1 + 0x590) + arg2;
                    arg1 = iVar1;
                    iVar2 = *(iVar1 + 0x568);
                }
                uVar3 = (*pcVar6)(iVar5,arg2,uVar4,arg4);
            }
        }
    }
    return uVar3;
}


// ===== sym.mtd_io_emulated_slc @ 0x0800633c (size 1284) =====

int sym.mtd_io_emulated_slc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint32_t uVar7;
    int iVar8;
    int iVar9;
    ulong *puVar10;
    int64_t iVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    int64_t iVar14;
    uint32_t uVar15;
    int64_t iVar16;
    int *piVar17;
    uint64_t uVar18;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar19;
    int iVar20;
    code *pcVar21;
    ulong unaff_x30;
    uchar auVar22 [16];
    uint32_t uStack_b0;
    int iStack_ac;
    ulong uStack_a8;
    ulong *puStack_a0;
    int64_t iStack_98;
    uint64_t uStack_90;
    int64_t iStack_88;
    uint64_t uStack_80;
    int64_t iStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar19 = sp_el0;
    iStack_68 = *(iVar19 + 0x5e0);
    iVar19 = arg1;
    do {
        iVar11 = iVar19;
        iVar19 = *(iVar11 + 0x568);
    } while (*(iVar11 + 0x568) != 0);
    if (*(iVar11 + 0x50) == NULL) {
        iVar9 = 1;
    }
    else {
        iVar9 = **(iVar11 + 0x50);
        if (iVar9 == 0) {
            iVar9 = 1;
        }
    }
    iStack_88 = *(arg4 + 0x20);
    uStack_80 = *(arg4 + 0x28);
    iStack_78 = *(arg4 + 0x30);
    iStack_70 = *(arg4 + 0x38);
    uStack_a8 = *arg4;
    puStack_a0 = *(arg4 + 8);
    iStack_98 = *(arg4 + 0x10);
    uStack_90 = *(arg4 + 0x18);
    if (*(arg1 + 0x24) == 0) {
        uVar15 = *(arg1 + 0x10);
        uVar18 = 0;
        if (uVar15 != 0) {
            uVar18 = arg2 / uVar15;
        }
        uVar15 = arg2 - uVar18 * uVar15;
    }
    else {
        uVar18 = arg2 >> (*(arg1 + 0x24) & 0x3f);
        uVar15 = *(arg1 + 0x2c) & arg2;
    }
    uVar7 = 0;
    if (*(iVar11 + 0x14) != 0) {
        uVar7 = *(iVar11 + 0x10) / *(iVar11 + 0x14);
    }
    iVar19 = (uVar18 & 0xffffffff) * *(iVar11 + 0x10);
    if (*(arg1 + 0x28) == 0) {
        uVar2 = *(arg1 + 0x14);
        uStack_b0 = 0;
        if (uVar2 != 0) {
            uStack_b0 = uVar15 / uVar2;
        }
        uVar15 = uVar15 - uStack_b0 * uVar2;
    }
    else {
        uStack_b0 = uVar15 >> (*(arg1 + 0x28) & 0x3f);
        uVar15 = *(arg1 + 0x30) & uVar15;
    }
    iVar4 = 0;
    if (iVar9 != 0) {
        iVar4 = uVar7 / iVar9;
    }
    iVar9 = 0;
    uVar18 = *(arg4 + 0x10);
    iVar1 = 0x20;
    if (*arg4 != 1) {
        iVar1 = 0x1c;
    }
    iStack_ac = 0;
    iVar3 = *(arg1 + iVar1);
    puVar10 = arg3;
    while ((uVar12 = *(arg4 + 8), uVar18 < uVar12 || (*(arg4 + 0x20) < *(arg4 + 0x18)))) {
        iVar1 = iVar11;
        if (iVar4 <= uStack_b0) {
            uStack_b0 = 0;
            iVar19 = iVar19 + *(iVar11 + 0x10);
        }
        do {
            iVar16 = iVar1;
            iVar1 = *(iVar16 + 0x568);
        } while (*(iVar16 + 0x568) != 0);
        piVar17 = *(iVar16 + 0x50);
        if (piVar17 == NULL) {
            iVar20 = 1;
            if (-1 < uStack_b0) goto code_r0x08006514;
code_r0x08006588:
            uVar7 = 0xffffffea;
        }
        else {
            iVar20 = *piVar17;
            if (iVar20 == 0) {
                iVar20 = 1;
            }
            if (uStack_b0 < 0) goto code_r0x08006588;
code_r0x08006514:
            uVar7 = 0;
            if (*(iVar16 + 0x14) != 0) {
                uVar7 = *(iVar16 + 0x10) / *(iVar16 + 0x14);
            }
            iVar8 = 0;
            if (iVar20 != 0) {
                iVar8 = uVar7 / iVar20;
            }
            if (iVar8 <= uStack_b0) goto code_r0x08006588;
            uVar7 = 0xffffffea;
            if (((-1 < iStack_ac && iStack_ac < iVar20) && (uVar7 = uStack_b0, piVar17 != NULL)) &&
               (*(piVar17 + 4) != 0)) {
                pcVar21 = *(*(iVar11 + 0x50) + 0x10);
                if (pcVar21 != sym.__typeid__ZTSFiP8mtd_infoPK16mtd_pairing_infoE_global_addr) {
                    __cfi_slowpath_diag(0x185f1c46528bedc7,pcVar21,0x8000c00);
                }
                uVar7 = (*pcVar21)(iVar16,&uStack_b0);
                uVar12 = *(arg4 + 8);
                uVar18 = *(arg4 + 0x10);
            }
        }
        uVar13 = *(arg4 + 0x18) - *(arg4 + 0x20);
        puStack_a0 = *(arg1 + 0x14) - uVar15;
        uStack_90 = iVar3 - uStack_80;
        if (uVar12 - uVar18 <= puStack_a0) {
            puStack_a0 = uVar12 - uVar18;
        }
        iVar1 = iVar19 + *(arg1 + 0x14) * uVar7;
        if (uVar13 <= uStack_90) {
            uStack_90 = uVar13;
        }
        iVar16 = arg1;
        iVar20 = iVar9;
        if ((arg3 & 1U) == 0) {
            do {
                iVar14 = iVar16;
                iVar16 = *(iVar14 + 0x568);
            } while (*(iVar14 + 0x568) != 0);
            iVar1 = iVar1 + uVar15;
            iVar6 = *(arg1 + 0x568);
            iVar16 = arg1;
            while (iVar5 = iVar6, iVar5 != 0) {
                iVar1 = *(iVar16 + 0x590) + iVar1;
                iVar16 = iVar5;
                iVar6 = *(iVar5 + 0x568);
            }
            pcVar21 = *(iVar14 + 0xa8);
            if (pcVar21 == NULL) {
                pcVar21 = *(iVar14 + 0x90);
                if (4 < (pcVar21 + -0x8003af8 >> 3 | pcVar21 << 0x3d)) {
                    __cfi_slowpath_diag(0x870dfec9503a5e92,pcVar21,0x8001020);
                }
                puVar10 = puStack_a0;
                iVar8 = (*pcVar21)(iVar14,iVar1,puStack_a0,&iStack_98,iStack_78);
            }
            else {
                if (3 < (pcVar21 + -0x8003c70 >> 3 | pcVar21 << 0x3d)) {
                    __cfi_slowpath_diag(0x38a5cf1b120bf637,pcVar21,0x8001000);
                }
                puVar10 = &uStack_a8;
                iVar8 = (*pcVar21)(iVar14,iVar1);
            }
joined_r0x0800670c:
            iVar9 = iVar8;
            if (iVar8 < 0) break;
        }
        else {
            do {
                iVar14 = iVar16;
                iVar16 = *(iVar14 + 0x568);
            } while (*(iVar14 + 0x568) != 0);
            iVar1 = iVar1 + uVar15;
            iVar6 = *(arg1 + 0x568);
            iVar16 = arg1;
            while (iVar5 = iVar6, iVar5 != 0) {
                iVar1 = *(iVar16 + 0x590) + iVar1;
                iVar16 = iVar5;
                iVar6 = *(iVar5 + 0x568);
            }
            pcVar21 = *(iVar14 + 0xa0);
            if (pcVar21 == NULL) {
                pcVar21 = *(iVar14 + 0x88);
                if (3 < (pcVar21 + -0x8003b20 >> 3 | pcVar21 << 0x3d)) {
                    __cfi_slowpath_diag(0xbbecc41de69d7c2b,pcVar21,0x8000fe0);
                }
                puVar10 = puStack_a0;
                iVar8 = (*pcVar21)(iVar14,iVar1,puStack_a0,&iStack_98,iStack_78);
            }
            else {
                if (3 < (pcVar21 + -0x8003c70 >> 3 | pcVar21 << 0x3d)) {
                    __cfi_slowpath_diag(0x38a5cf1b120bf637,pcVar21,0x8000fc0);
                }
                puVar10 = &uStack_a8;
                iVar8 = (*pcVar21)(iVar14,iVar1);
            }
            if (iVar8 < 1) goto joined_r0x0800670c;
            if (iVar9 <= iVar8) {
                iVar20 = iVar8;
            }
        }
        uVar15 = 0;
        iVar9 = iVar20;
        if (iVar20 <= iVar8) {
            iVar9 = iVar8;
        }
        uStack_80 = uStack_80 & 0xffffffff00000000;
        uVar18 = *(arg4 + 0x10) + iStack_98;
        iStack_78 = iStack_78 + iStack_98;
        *(arg4 + 0x20) = *(arg4 + 0x20) + iStack_88;
        iStack_70 = iStack_70 + iStack_88;
        uStack_b0 = uStack_b0 + 1;
        *(arg4 + 0x10) = uVar18;
    }
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_68) {
        return iVar9;
    }
    auVar22 = __stack_chk_fail();
    uVar18 = auVar22._8_8_;
    *extraout_x18 = sym.mtd_ooblayout_ecc;
    iVar19 = auVar22._0_8_;
    do {
        iVar11 = iVar19;
        iVar19 = *(iVar11 + 0x568);
    } while (*(iVar11 + 0x568) != 0);
    iVar9 = -0x16;
    *puVar10 = 0;
    if ((-1 < auVar22._8_4_) && (iVar11 != 0)) {
        if ((*(iVar11 + 0x48) == NULL) || (pcVar21 = **(iVar11 + 0x48), pcVar21 == NULL)) {
            iVar9 = -0x20c;
        }
        else {
            if (1 < (pcVar21 + -0x8003a58 >> 3 | pcVar21 << 0x3d)) {
                __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar21,0x8000d60);
                uVar18 = uVar18 & 0xffffffff;
            }
            iVar9 = (*pcVar21)(iVar11,uVar18);
        }
    }
    return iVar9;
}


// ===== sym.mtd_ooblayout_ecc @ 0x08006840 (size 196) =====

uint sym.mtd_ooblayout_ecc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint uVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    do {
        iVar2 = arg1;
        arg1 = *(iVar2 + 0x568);
    } while (*(iVar2 + 0x568) != 0);
    uVar1 = 0xffffffea;
    *arg3 = 0;
    if ((-1 < arg2) && (iVar2 != 0)) {
        if ((*(iVar2 + 0x48) == NULL) || (pcVar3 = **(iVar2 + 0x48), pcVar3 == NULL)) {
            uVar1 = 0xfffffdf4;
        }
        else {
            if (1 < (pcVar3 + -0x8003a58 >> 3 | pcVar3 << 0x3d)) {
                __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar3,0x8000d60);
                arg2 = arg2 & 0xffffffff;
            }
            uVar1 = (*pcVar3)(iVar2,arg2,arg3);
        }
    }
    return uVar1;
}


// ===== sym.mtd_ooblayout_free @ 0x08006904 (size 196) =====

uint sym.mtd_ooblayout_free(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint uVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    do {
        iVar2 = arg1;
        arg1 = *(iVar2 + 0x568);
    } while (*(iVar2 + 0x568) != 0);
    uVar1 = 0xffffffea;
    *arg3 = 0;
    if ((-1 < arg2) && (iVar2 != 0)) {
        if ((*(iVar2 + 0x48) == 0) || (pcVar3 = *(*(iVar2 + 0x48) + 8), pcVar3 == NULL)) {
            uVar1 = 0xfffffdf4;
        }
        else {
            if (1 < (pcVar3 + -0x8003a58 >> 3 | pcVar3 << 0x3d)) {
                __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar3,0x8000d80);
                arg2 = arg2 & 0xffffffff;
            }
            uVar1 = (*pcVar3)(iVar2,arg2,arg3);
        }
    }
    return uVar1;
}


// ===== sym.mtd_ooblayout_find_eccregion @ 0x080069c8 (size 304) =====

ulong sym.mtd_ooblayout_find_eccregion(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    int64_t iVar5;
    code *pcVar6;
    ulong *in_x18;
    int iVar7;
    uint32_t uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = 0;
    *arg4 = 0;
    iVar3 = arg1;
    uVar8 = 0;
    while( true ) {
        do {
            iVar5 = iVar3;
            iVar3 = *(iVar5 + 0x568);
        } while (*(iVar5 + 0x568) != 0);
        *arg4 = 0;
        if (iVar7 < 0) {
            return 0xffffffea;
        }
        if (iVar5 == 0) {
            return 0xffffffea;
        }
        if ((*(iVar5 + 0x48) == NULL) || (pcVar6 = **(iVar5 + 0x48), pcVar6 == NULL)) break;
        if (1 < (pcVar6 + -0x8003a58 >> 3 | pcVar6 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar6,0x8000d60);
        }
        uVar4 = (*pcVar6)(iVar5,iVar7,arg4);
        if (uVar4 != 0) {
            return uVar4;
        }
        uVar1 = *(arg4 + 4) + uVar8;
        if (arg2 < uVar1) {
            iVar2 = arg2 - uVar8;
            *arg4 = *arg4 + iVar2;
            *(arg4 + 4) = *(arg4 + 4) - iVar2;
            *arg3 = iVar7;
            return 0;
        }
        iVar7 = iVar7 + 1;
        iVar3 = arg1;
        uVar8 = uVar1;
    }
    return 0xfffffdf4;
}


// ===== sym.mtd_ooblayout_get_eccbytes @ 0x08006af8 (size 560) =====

//WARNING: Removing unreachable block (ram,0x08007280)
//WARNING: Removing unreachable block (ram,0x08007294)
//WARNING: Removing unreachable block (ram,0x080073ac)
//WARNING: Removing unreachable block (ram,0x080072b4)
//WARNING: Removing unreachable block (ram,0x080072c0)
//WARNING: Removing unreachable block (ram,0x080072c4)
//WARNING: Removing unreachable block (ram,0x080072d0)
//WARNING: Removing unreachable block (ram,0x080072e0)
//WARNING: Removing unreachable block (ram,0x080072e4)
//WARNING: Removing unreachable block (ram,0x080072ec)
//WARNING: Removing unreachable block (ram,0x080072f4)
//WARNING: Removing unreachable block (ram,0x0800734c)
//WARNING: Removing unreachable block (ram,0x08007304)
//WARNING: Removing unreachable block (ram,0x08007318)
//WARNING: Removing unreachable block (ram,0x08007328)
//WARNING: Removing unreachable block (ram,0x08007348)
//WARNING: Removing unreachable block (ram,0x08007050)
//WARNING: Removing unreachable block (ram,0x08007064)
//WARNING: Removing unreachable block (ram,0x0800717c)
//WARNING: Removing unreachable block (ram,0x08007084)
//WARNING: Removing unreachable block (ram,0x08007090)
//WARNING: Removing unreachable block (ram,0x08007094)
//WARNING: Removing unreachable block (ram,0x080070a0)
//WARNING: Removing unreachable block (ram,0x080070b0)
//WARNING: Removing unreachable block (ram,0x080070b4)
//WARNING: Removing unreachable block (ram,0x080070bc)
//WARNING: Removing unreachable block (ram,0x080070c4)
//WARNING: Removing unreachable block (ram,0x0800711c)
//WARNING: Removing unreachable block (ram,0x080070d4)
//WARNING: Removing unreachable block (ram,0x080070e8)
//WARNING: Removing unreachable block (ram,0x080070f8)
//WARNING: Removing unreachable block (ram,0x08007118)
//WARNING: Removing unreachable block (ram,0x08006e20)
//WARNING: Removing unreachable block (ram,0x08006e34)
//WARNING: Removing unreachable block (ram,0x08006f4c)
//WARNING: Removing unreachable block (ram,0x08006e54)
//WARNING: Removing unreachable block (ram,0x08006e60)
//WARNING: Removing unreachable block (ram,0x08006e64)
//WARNING: Removing unreachable block (ram,0x08006e70)
//WARNING: Removing unreachable block (ram,0x08006e80)
//WARNING: Removing unreachable block (ram,0x08006e84)
//WARNING: Removing unreachable block (ram,0x08006e8c)
//WARNING: Removing unreachable block (ram,0x08006e94)
//WARNING: Removing unreachable block (ram,0x08006eec)
//WARNING: Removing unreachable block (ram,0x08006ea4)
//WARNING: Removing unreachable block (ram,0x08006eb8)
//WARNING: Removing unreachable block (ram,0x08006ec8)
//WARNING: Removing unreachable block (ram,0x08006ee8)
//WARNING: Removing unreachable block (ram,0x08006bf0)
//WARNING: Removing unreachable block (ram,0x08006c04)
//WARNING: Removing unreachable block (ram,0x08006d1c)
//WARNING: Removing unreachable block (ram,0x08006c24)
//WARNING: Removing unreachable block (ram,0x08006c30)
//WARNING: Removing unreachable block (ram,0x08006c34)
//WARNING: Removing unreachable block (ram,0x08006c40)
//WARNING: Removing unreachable block (ram,0x08006c50)
//WARNING: Removing unreachable block (ram,0x08006c54)
//WARNING: Removing unreachable block (ram,0x08006c5c)
//WARNING: Removing unreachable block (ram,0x08006c64)
//WARNING: Removing unreachable block (ram,0x08006cbc)
//WARNING: Removing unreachable block (ram,0x08006c74)
//WARNING: Removing unreachable block (ram,0x08006c88)
//WARNING: Removing unreachable block (ram,0x08006c98)
//WARNING: Removing unreachable block (ram,0x08006cb8)

uint64_t sym.mtd_ooblayout_get_eccbytes(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    code *pcVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    int iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar4 = *(iVar1 + 0x5e0);
    iVar1 = arg1;
    while( true ) {
        do {
            iVar5 = iVar1;
            iVar1 = *(iVar5 + 0x568);
        } while (*(iVar5 + 0x568) != 0);
        uVar3 = 0xffffffea;
        if ((iVar8 < 0) || (iVar5 == 0)) goto code_r0x08006ce0;
        if ((*(iVar5 + 0x48) == NULL) || (pcVar7 = **(iVar5 + 0x48), pcVar7 == NULL)) break;
        if (1 < (pcVar7 + -0x8003a58 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar7,0x8000d60);
        }
        uVar3 = (*pcVar7)(iVar5,iVar8);
        if (uVar3 != 0) goto code_r0x08006ce0;
        iVar8 = iVar8 + 1;
        iVar1 = arg1;
    }
    uVar3 = 0xfffffdf4;
code_r0x08006ce0:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iVar4) {
        return uVar3;
    }
    iVar4 = __stack_chk_fail(uVar3);
    *extraout_x18 = sym.mtd_ooblayout_set_eccbytes;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar5 = *(iVar1 + 0x5e0);
    iVar1 = iVar4;
    while( true ) {
        do {
            iVar6 = iVar1;
            iVar1 = *(iVar6 + 0x568);
        } while (*(iVar6 + 0x568) != 0);
        uVar3 = 0xffffffea;
        if ((iVar8 < 0) || (iVar6 == 0)) goto code_r0x08006f10;
        if ((*(iVar6 + 0x48) == NULL) || (pcVar7 = **(iVar6 + 0x48), pcVar7 == NULL)) break;
        if (1 < (pcVar7 + -0x8003a58 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar7,0x8000d60);
        }
        uVar3 = (*pcVar7)(iVar6,iVar8);
        if (uVar3 != 0) goto code_r0x08006f10;
        iVar8 = iVar8 + 1;
        iVar1 = iVar4;
    }
    uVar3 = 0xfffffdf4;
code_r0x08006f10:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iVar5) {
        return uVar3;
    }
    iVar4 = __stack_chk_fail(uVar3);
    *extraout_x18_00 = sym.mtd_ooblayout_get_databytes;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar5 = *(iVar1 + 0x5e0);
    iVar1 = iVar4;
    while( true ) {
        do {
            iVar6 = iVar1;
            iVar1 = *(iVar6 + 0x568);
        } while (*(iVar6 + 0x568) != 0);
        uVar3 = 0xffffffea;
        if ((iVar8 < 0) || (iVar6 == 0)) goto code_r0x08007140;
        if ((*(iVar6 + 0x48) == 0) || (pcVar7 = *(*(iVar6 + 0x48) + 8), pcVar7 == NULL)) break;
        if (1 < (pcVar7 + -0x8003a58 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar7,0x8000d80);
        }
        uVar3 = (*pcVar7)(iVar6,iVar8);
        if (uVar3 != 0) goto code_r0x08007140;
        iVar8 = iVar8 + 1;
        iVar1 = iVar4;
    }
    uVar3 = 0xfffffdf4;
code_r0x08007140:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iVar5) {
        return uVar3;
    }
    iVar4 = __stack_chk_fail(uVar3);
    *extraout_x18_01 = sym.mtd_ooblayout_set_databytes;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar5 = *(iVar1 + 0x5e0);
    iVar1 = iVar4;
    while( true ) {
        do {
            iVar6 = iVar1;
            iVar1 = *(iVar6 + 0x568);
        } while (*(iVar6 + 0x568) != 0);
        uVar3 = 0xffffffea;
        if ((iVar8 < 0) || (iVar6 == 0)) goto code_r0x08007370;
        if ((*(iVar6 + 0x48) == 0) || (pcVar7 = *(*(iVar6 + 0x48) + 8), pcVar7 == NULL)) break;
        if (1 < (pcVar7 + -0x8003a58 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar7,0x8000d80);
        }
        uVar3 = (*pcVar7)(iVar6,iVar8);
        if (uVar3 != 0) goto code_r0x08007370;
        iVar8 = iVar8 + 1;
        iVar1 = iVar4;
    }
    uVar3 = 0xfffffdf4;
code_r0x08007370:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iVar5) {
        return uVar3;
    }
    iVar4 = __stack_chk_fail(uVar3);
    *extraout_x18_02 = sym.mtd_ooblayout_count_freebytes;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar5 = *(iVar1 + 0x5e0);
    iVar1 = iVar4;
    while( true ) {
        do {
            iVar6 = iVar1;
            iVar1 = *(iVar6 + 0x568);
        } while (*(iVar6 + 0x568) != 0);
        uVar3 = 0xffffffea;
        if ((iVar8 < 0) || (iVar6 == 0)) goto code_r0x080074a0;
        if ((*(iVar6 + 0x48) == 0) || (pcVar7 = *(*(iVar6 + 0x48) + 8), pcVar7 == NULL)) {
            uVar3 = 0xfffffdf4;
            goto code_r0x080074a0;
        }
        if (1 < (pcVar7 + -0x8003a58 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar7,0x8000d80);
        }
        uVar2 = (*pcVar7)(iVar6,iVar8);
        if (uVar2 != 0) break;
        iVar8 = iVar8 + 1;
        iVar1 = iVar4;
    }
    uVar3 = uVar2;
    if (uVar2 == 0xffffffde) {
        uVar3 = 0;
    }
code_r0x080074a0:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iVar5) {
        return uVar3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18_03 = sym.mtd_ooblayout_count_eccbytes;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar5 = *(iVar1 + 0x5e0);
    iVar1 = iVar4;
    while( true ) {
        do {
            iVar6 = iVar1;
            iVar1 = *(iVar6 + 0x568);
        } while (*(iVar6 + 0x568) != 0);
        uVar3 = 0xffffffea;
        if ((iVar8 < 0) || (iVar6 == 0)) goto code_r0x080075c4;
        if ((*(iVar6 + 0x48) == NULL) || (pcVar7 = **(iVar6 + 0x48), pcVar7 == NULL)) break;
        if (1 < (pcVar7 + -0x8003a58 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar7,0x8000d60);
        }
        uVar2 = (*pcVar7)(iVar6,iVar8);
        if (uVar2 != 0) {
            uVar3 = uVar2;
            if (uVar2 == 0xffffffde) {
                uVar3 = 0;
            }
code_r0x080075c4:
            iVar1 = sp_el0;
            if (*(iVar1 + 0x5e0) != iVar5) {
                auVar9 = __stack_chk_fail();
                *extraout_x18_04 = sym.mtd_get_fact_prot_info;
                iVar1 = auVar9._0_8_;
                do {
                    iVar4 = iVar1;
                    iVar1 = *(iVar4 + 0x568);
                } while (*(iVar4 + 0x568) != 0);
                pcVar7 = *(iVar4 + 0xb0);
                if (pcVar7 == NULL) {
                    uVar3 = 0xffffffa1;
                }
                else if (auVar9._8_8_ == 0) {
                    uVar3 = 0;
                }
                else {
                    if (1 < (pcVar7 + -0x8003a40 >> 3 | pcVar7 << 0x3d)) {
                        __cfi_slowpath_diag(0xc610e2db308fc5b4,pcVar7,0x8000da0);
                    }
                    uVar3 = (*pcVar7)(iVar4,auVar9._8_8_);
                }
                return uVar3;
            }
            return uVar3;
        }
        iVar8 = iVar8 + 1;
        iVar1 = iVar4;
    }
    uVar3 = 0xfffffdf4;
    goto code_r0x080075c4;
}


// ===== sym.mtd_ooblayout_set_eccbytes @ 0x08006d28 (size 560) =====

//WARNING: Removing unreachable block (ram,0x08007280)
//WARNING: Removing unreachable block (ram,0x08007294)
//WARNING: Removing unreachable block (ram,0x080073ac)
//WARNING: Removing unreachable block (ram,0x080072b4)
//WARNING: Removing unreachable block (ram,0x080072c0)
//WARNING: Removing unreachable block (ram,0x080072c4)
//WARNING: Removing unreachable block (ram,0x080072d0)
//WARNING: Removing unreachable block (ram,0x080072e0)
//WARNING: Removing unreachable block (ram,0x080072e4)
//WARNING: Removing unreachable block (ram,0x080072ec)
//WARNING: Removing unreachable block (ram,0x080072f4)
//WARNING: Removing unreachable block (ram,0x0800734c)
//WARNING: Removing unreachable block (ram,0x08007304)
//WARNING: Removing unreachable block (ram,0x08007318)
//WARNING: Removing unreachable block (ram,0x08007328)
//WARNING: Removing unreachable block (ram,0x08007348)
//WARNING: Removing unreachable block (ram,0x08007050)
//WARNING: Removing unreachable block (ram,0x08007064)
//WARNING: Removing unreachable block (ram,0x0800717c)
//WARNING: Removing unreachable block (ram,0x08007084)
//WARNING: Removing unreachable block (ram,0x08007090)
//WARNING: Removing unreachable block (ram,0x08007094)
//WARNING: Removing unreachable block (ram,0x080070a0)
//WARNING: Removing unreachable block (ram,0x080070b0)
//WARNING: Removing unreachable block (ram,0x080070b4)
//WARNING: Removing unreachable block (ram,0x080070bc)
//WARNING: Removing unreachable block (ram,0x080070c4)
//WARNING: Removing unreachable block (ram,0x0800711c)
//WARNING: Removing unreachable block (ram,0x080070d4)
//WARNING: Removing unreachable block (ram,0x080070e8)
//WARNING: Removing unreachable block (ram,0x080070f8)
//WARNING: Removing unreachable block (ram,0x08007118)
//WARNING: Removing unreachable block (ram,0x08006e20)
//WARNING: Removing unreachable block (ram,0x08006e34)
//WARNING: Removing unreachable block (ram,0x08006f4c)
//WARNING: Removing unreachable block (ram,0x08006e54)
//WARNING: Removing unreachable block (ram,0x08006e60)
//WARNING: Removing unreachable block (ram,0x08006e64)
//WARNING: Removing unreachable block (ram,0x08006e70)
//WARNING: Removing unreachable block (ram,0x08006e80)
//WARNING: Removing unreachable block (ram,0x08006e84)
//WARNING: Removing unreachable block (ram,0x08006e8c)
//WARNING: Removing unreachable block (ram,0x08006e94)
//WARNING: Removing unreachable block (ram,0x08006eec)
//WARNING: Removing unreachable block (ram,0x08006ea4)
//WARNING: Removing unreachable block (ram,0x08006eb8)
//WARNING: Removing unreachable block (ram,0x08006ec8)
//WARNING: Removing unreachable block (ram,0x08006ee8)

uint64_t sym.mtd_ooblayout_set_eccbytes(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    code *pcVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    int iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar4 = *(iVar1 + 0x5e0);
    iVar1 = arg1;
    while( true ) {
        do {
            iVar5 = iVar1;
            iVar1 = *(iVar5 + 0x568);
        } while (*(iVar5 + 0x568) != 0);
        uVar3 = 0xffffffea;
        if ((iVar8 < 0) || (iVar5 == 0)) goto code_r0x08006f10;
        if ((*(iVar5 + 0x48) == NULL) || (pcVar7 = **(iVar5 + 0x48), pcVar7 == NULL)) break;
        if (1 < (pcVar7 + -0x8003a58 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar7,0x8000d60);
        }
        uVar3 = (*pcVar7)(iVar5,iVar8);
        if (uVar3 != 0) goto code_r0x08006f10;
        iVar8 = iVar8 + 1;
        iVar1 = arg1;
    }
    uVar3 = 0xfffffdf4;
code_r0x08006f10:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iVar4) {
        return uVar3;
    }
    iVar4 = __stack_chk_fail(uVar3);
    *extraout_x18 = sym.mtd_ooblayout_get_databytes;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar5 = *(iVar1 + 0x5e0);
    iVar1 = iVar4;
    while( true ) {
        do {
            iVar6 = iVar1;
            iVar1 = *(iVar6 + 0x568);
        } while (*(iVar6 + 0x568) != 0);
        uVar3 = 0xffffffea;
        if ((iVar8 < 0) || (iVar6 == 0)) goto code_r0x08007140;
        if ((*(iVar6 + 0x48) == 0) || (pcVar7 = *(*(iVar6 + 0x48) + 8), pcVar7 == NULL)) break;
        if (1 < (pcVar7 + -0x8003a58 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar7,0x8000d80);
        }
        uVar3 = (*pcVar7)(iVar6,iVar8);
        if (uVar3 != 0) goto code_r0x08007140;
        iVar8 = iVar8 + 1;
        iVar1 = iVar4;
    }
    uVar3 = 0xfffffdf4;
code_r0x08007140:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iVar5) {
        return uVar3;
    }
    iVar4 = __stack_chk_fail(uVar3);
    *extraout_x18_00 = sym.mtd_ooblayout_set_databytes;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar5 = *(iVar1 + 0x5e0);
    iVar1 = iVar4;
    while( true ) {
        do {
            iVar6 = iVar1;
            iVar1 = *(iVar6 + 0x568);
        } while (*(iVar6 + 0x568) != 0);
        uVar3 = 0xffffffea;
        if ((iVar8 < 0) || (iVar6 == 0)) goto code_r0x08007370;
        if ((*(iVar6 + 0x48) == 0) || (pcVar7 = *(*(iVar6 + 0x48) + 8), pcVar7 == NULL)) break;
        if (1 < (pcVar7 + -0x8003a58 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar7,0x8000d80);
        }
        uVar3 = (*pcVar7)(iVar6,iVar8);
        if (uVar3 != 0) goto code_r0x08007370;
        iVar8 = iVar8 + 1;
        iVar1 = iVar4;
    }
    uVar3 = 0xfffffdf4;
code_r0x08007370:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iVar5) {
        return uVar3;
    }
    iVar4 = __stack_chk_fail(uVar3);
    *extraout_x18_01 = sym.mtd_ooblayout_count_freebytes;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar5 = *(iVar1 + 0x5e0);
    iVar1 = iVar4;
    while( true ) {
        do {
            iVar6 = iVar1;
            iVar1 = *(iVar6 + 0x568);
        } while (*(iVar6 + 0x568) != 0);
        uVar3 = 0xffffffea;
        if ((iVar8 < 0) || (iVar6 == 0)) goto code_r0x080074a0;
        if ((*(iVar6 + 0x48) == 0) || (pcVar7 = *(*(iVar6 + 0x48) + 8), pcVar7 == NULL)) {
            uVar3 = 0xfffffdf4;
            goto code_r0x080074a0;
        }
        if (1 < (pcVar7 + -0x8003a58 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar7,0x8000d80);
        }
        uVar2 = (*pcVar7)(iVar6,iVar8);
        if (uVar2 != 0) break;
        iVar8 = iVar8 + 1;
        iVar1 = iVar4;
    }
    uVar3 = uVar2;
    if (uVar2 == 0xffffffde) {
        uVar3 = 0;
    }
code_r0x080074a0:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iVar5) {
        return uVar3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18_02 = sym.mtd_ooblayout_count_eccbytes;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar5 = *(iVar1 + 0x5e0);
    iVar1 = iVar4;
    while( true ) {
        do {
            iVar6 = iVar1;
            iVar1 = *(iVar6 + 0x568);
        } while (*(iVar6 + 0x568) != 0);
        uVar3 = 0xffffffea;
        if ((iVar8 < 0) || (iVar6 == 0)) goto code_r0x080075c4;
        if ((*(iVar6 + 0x48) == NULL) || (pcVar7 = **(iVar6 + 0x48), pcVar7 == NULL)) break;
        if (1 < (pcVar7 + -0x8003a58 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar7,0x8000d60);
        }
        uVar2 = (*pcVar7)(iVar6,iVar8);
        if (uVar2 != 0) {
            uVar3 = uVar2;
            if (uVar2 == 0xffffffde) {
                uVar3 = 0;
            }
code_r0x080075c4:
            iVar1 = sp_el0;
            if (*(iVar1 + 0x5e0) == iVar5) {
                return uVar3;
            }
            auVar9 = __stack_chk_fail();
            *extraout_x18_03 = sym.mtd_get_fact_prot_info;
            iVar1 = auVar9._0_8_;
            do {
                iVar4 = iVar1;
                iVar1 = *(iVar4 + 0x568);
            } while (*(iVar4 + 0x568) != 0);
            pcVar7 = *(iVar4 + 0xb0);
            if (pcVar7 == NULL) {
                uVar3 = 0xffffffa1;
            }
            else if (auVar9._8_8_ == 0) {
                uVar3 = 0;
            }
            else {
                if (1 < (pcVar7 + -0x8003a40 >> 3 | pcVar7 << 0x3d)) {
                    __cfi_slowpath_diag(0xc610e2db308fc5b4,pcVar7,0x8000da0);
                }
                uVar3 = (*pcVar7)(iVar4,auVar9._8_8_);
            }
            return uVar3;
        }
        iVar8 = iVar8 + 1;
        iVar1 = iVar4;
    }
    uVar3 = 0xfffffdf4;
    goto code_r0x080075c4;
}


// ===== sym.mtd_ooblayout_get_databytes @ 0x08006f58 (size 560) =====

//WARNING: Removing unreachable block (ram,0x08007280)
//WARNING: Removing unreachable block (ram,0x08007294)
//WARNING: Removing unreachable block (ram,0x080073ac)
//WARNING: Removing unreachable block (ram,0x080072b4)
//WARNING: Removing unreachable block (ram,0x080072c0)
//WARNING: Removing unreachable block (ram,0x080072c4)
//WARNING: Removing unreachable block (ram,0x080072d0)
//WARNING: Removing unreachable block (ram,0x080072e0)
//WARNING: Removing unreachable block (ram,0x080072e4)
//WARNING: Removing unreachable block (ram,0x080072ec)
//WARNING: Removing unreachable block (ram,0x080072f4)
//WARNING: Removing unreachable block (ram,0x0800734c)
//WARNING: Removing unreachable block (ram,0x08007304)
//WARNING: Removing unreachable block (ram,0x08007318)
//WARNING: Removing unreachable block (ram,0x08007328)
//WARNING: Removing unreachable block (ram,0x08007348)
//WARNING: Removing unreachable block (ram,0x08007050)
//WARNING: Removing unreachable block (ram,0x08007064)
//WARNING: Removing unreachable block (ram,0x0800717c)
//WARNING: Removing unreachable block (ram,0x08007084)
//WARNING: Removing unreachable block (ram,0x08007090)
//WARNING: Removing unreachable block (ram,0x08007094)
//WARNING: Removing unreachable block (ram,0x080070a0)
//WARNING: Removing unreachable block (ram,0x080070b0)
//WARNING: Removing unreachable block (ram,0x080070b4)
//WARNING: Removing unreachable block (ram,0x080070bc)
//WARNING: Removing unreachable block (ram,0x080070c4)
//WARNING: Removing unreachable block (ram,0x0800711c)
//WARNING: Removing unreachable block (ram,0x080070d4)
//WARNING: Removing unreachable block (ram,0x080070e8)
//WARNING: Removing unreachable block (ram,0x080070f8)
//WARNING: Removing unreachable block (ram,0x08007118)

uint64_t sym.mtd_ooblayout_get_databytes(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    code *pcVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    int iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar4 = *(iVar1 + 0x5e0);
    iVar1 = arg1;
    while( true ) {
        do {
            iVar5 = iVar1;
            iVar1 = *(iVar5 + 0x568);
        } while (*(iVar5 + 0x568) != 0);
        uVar3 = 0xffffffea;
        if ((iVar8 < 0) || (iVar5 == 0)) goto code_r0x08007140;
        if ((*(iVar5 + 0x48) == 0) || (pcVar7 = *(*(iVar5 + 0x48) + 8), pcVar7 == NULL)) break;
        if (1 < (pcVar7 + -0x8003a58 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar7,0x8000d80);
        }
        uVar3 = (*pcVar7)(iVar5,iVar8);
        if (uVar3 != 0) goto code_r0x08007140;
        iVar8 = iVar8 + 1;
        iVar1 = arg1;
    }
    uVar3 = 0xfffffdf4;
code_r0x08007140:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iVar4) {
        return uVar3;
    }
    iVar4 = __stack_chk_fail(uVar3);
    *extraout_x18 = sym.mtd_ooblayout_set_databytes;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar5 = *(iVar1 + 0x5e0);
    iVar1 = iVar4;
    while( true ) {
        do {
            iVar6 = iVar1;
            iVar1 = *(iVar6 + 0x568);
        } while (*(iVar6 + 0x568) != 0);
        uVar3 = 0xffffffea;
        if ((iVar8 < 0) || (iVar6 == 0)) goto code_r0x08007370;
        if ((*(iVar6 + 0x48) == 0) || (pcVar7 = *(*(iVar6 + 0x48) + 8), pcVar7 == NULL)) break;
        if (1 < (pcVar7 + -0x8003a58 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar7,0x8000d80);
        }
        uVar3 = (*pcVar7)(iVar6,iVar8);
        if (uVar3 != 0) goto code_r0x08007370;
        iVar8 = iVar8 + 1;
        iVar1 = iVar4;
    }
    uVar3 = 0xfffffdf4;
code_r0x08007370:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iVar5) {
        return uVar3;
    }
    iVar4 = __stack_chk_fail(uVar3);
    *extraout_x18_00 = sym.mtd_ooblayout_count_freebytes;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar5 = *(iVar1 + 0x5e0);
    iVar1 = iVar4;
    while( true ) {
        do {
            iVar6 = iVar1;
            iVar1 = *(iVar6 + 0x568);
        } while (*(iVar6 + 0x568) != 0);
        uVar3 = 0xffffffea;
        if ((iVar8 < 0) || (iVar6 == 0)) goto code_r0x080074a0;
        if ((*(iVar6 + 0x48) == 0) || (pcVar7 = *(*(iVar6 + 0x48) + 8), pcVar7 == NULL)) {
            uVar3 = 0xfffffdf4;
            goto code_r0x080074a0;
        }
        if (1 < (pcVar7 + -0x8003a58 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar7,0x8000d80);
        }
        uVar2 = (*pcVar7)(iVar6,iVar8);
        if (uVar2 != 0) break;
        iVar8 = iVar8 + 1;
        iVar1 = iVar4;
    }
    uVar3 = uVar2;
    if (uVar2 == 0xffffffde) {
        uVar3 = 0;
    }
code_r0x080074a0:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iVar5) {
        return uVar3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18_01 = sym.mtd_ooblayout_count_eccbytes;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar5 = *(iVar1 + 0x5e0);
    iVar1 = iVar4;
    while( true ) {
        do {
            iVar6 = iVar1;
            iVar1 = *(iVar6 + 0x568);
        } while (*(iVar6 + 0x568) != 0);
        uVar3 = 0xffffffea;
        if ((iVar8 < 0) || (iVar6 == 0)) goto code_r0x080075c4;
        if ((*(iVar6 + 0x48) == NULL) || (pcVar7 = **(iVar6 + 0x48), pcVar7 == NULL)) break;
        if (1 < (pcVar7 + -0x8003a58 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar7,0x8000d60);
        }
        uVar2 = (*pcVar7)(iVar6,iVar8);
        if (uVar2 != 0) {
            uVar3 = uVar2;
            if (uVar2 == 0xffffffde) {
                uVar3 = 0;
            }
code_r0x080075c4:
            iVar1 = sp_el0;
            if (*(iVar1 + 0x5e0) != iVar5) {
                auVar9 = __stack_chk_fail();
                *extraout_x18_02 = sym.mtd_get_fact_prot_info;
                iVar1 = auVar9._0_8_;
                do {
                    iVar4 = iVar1;
                    iVar1 = *(iVar4 + 0x568);
                } while (*(iVar4 + 0x568) != 0);
                pcVar7 = *(iVar4 + 0xb0);
                if (pcVar7 == NULL) {
                    uVar3 = 0xffffffa1;
                }
                else if (auVar9._8_8_ == 0) {
                    uVar3 = 0;
                }
                else {
                    if (1 < (pcVar7 + -0x8003a40 >> 3 | pcVar7 << 0x3d)) {
                        __cfi_slowpath_diag(0xc610e2db308fc5b4,pcVar7,0x8000da0);
                    }
                    uVar3 = (*pcVar7)(iVar4,auVar9._8_8_);
                }
                return uVar3;
            }
            return uVar3;
        }
        iVar8 = iVar8 + 1;
        iVar1 = iVar4;
    }
    uVar3 = 0xfffffdf4;
    goto code_r0x080075c4;
}


// ===== sym.mtd_ooblayout_set_databytes @ 0x08007188 (size 560) =====

//WARNING: Removing unreachable block (ram,0x08007280)
//WARNING: Removing unreachable block (ram,0x08007294)
//WARNING: Removing unreachable block (ram,0x080073ac)
//WARNING: Removing unreachable block (ram,0x080072b4)
//WARNING: Removing unreachable block (ram,0x080072c0)
//WARNING: Removing unreachable block (ram,0x080072c4)
//WARNING: Removing unreachable block (ram,0x080072d0)
//WARNING: Removing unreachable block (ram,0x080072e0)
//WARNING: Removing unreachable block (ram,0x080072e4)
//WARNING: Removing unreachable block (ram,0x080072ec)
//WARNING: Removing unreachable block (ram,0x080072f4)
//WARNING: Removing unreachable block (ram,0x0800734c)
//WARNING: Removing unreachable block (ram,0x08007304)
//WARNING: Removing unreachable block (ram,0x08007318)
//WARNING: Removing unreachable block (ram,0x08007328)
//WARNING: Removing unreachable block (ram,0x08007348)

uint64_t sym.mtd_ooblayout_set_databytes(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    code *pcVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar4 = *(iVar1 + 0x5e0);
    iVar1 = arg1;
    while( true ) {
        do {
            iVar5 = iVar1;
            iVar1 = *(iVar5 + 0x568);
        } while (*(iVar5 + 0x568) != 0);
        uVar3 = 0xffffffea;
        if ((iVar8 < 0) || (iVar5 == 0)) goto code_r0x08007370;
        if ((*(iVar5 + 0x48) == 0) || (pcVar7 = *(*(iVar5 + 0x48) + 8), pcVar7 == NULL)) break;
        if (1 < (pcVar7 + -0x8003a58 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar7,0x8000d80);
        }
        uVar3 = (*pcVar7)(iVar5,iVar8);
        if (uVar3 != 0) goto code_r0x08007370;
        iVar8 = iVar8 + 1;
        iVar1 = arg1;
    }
    uVar3 = 0xfffffdf4;
code_r0x08007370:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iVar4) {
        return uVar3;
    }
    iVar4 = __stack_chk_fail(uVar3);
    *extraout_x18 = sym.mtd_ooblayout_count_freebytes;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar5 = *(iVar1 + 0x5e0);
    iVar1 = iVar4;
    while( true ) {
        do {
            iVar6 = iVar1;
            iVar1 = *(iVar6 + 0x568);
        } while (*(iVar6 + 0x568) != 0);
        uVar3 = 0xffffffea;
        if ((iVar8 < 0) || (iVar6 == 0)) goto code_r0x080074a0;
        if ((*(iVar6 + 0x48) == 0) || (pcVar7 = *(*(iVar6 + 0x48) + 8), pcVar7 == NULL)) {
            uVar3 = 0xfffffdf4;
            goto code_r0x080074a0;
        }
        if (1 < (pcVar7 + -0x8003a58 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar7,0x8000d80);
        }
        uVar2 = (*pcVar7)(iVar6,iVar8);
        if (uVar2 != 0) break;
        iVar8 = iVar8 + 1;
        iVar1 = iVar4;
    }
    uVar3 = uVar2;
    if (uVar2 == 0xffffffde) {
        uVar3 = 0;
    }
code_r0x080074a0:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iVar5) {
        return uVar3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18_00 = sym.mtd_ooblayout_count_eccbytes;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar5 = *(iVar1 + 0x5e0);
    iVar1 = iVar4;
    while( true ) {
        do {
            iVar6 = iVar1;
            iVar1 = *(iVar6 + 0x568);
        } while (*(iVar6 + 0x568) != 0);
        uVar3 = 0xffffffea;
        if ((iVar8 < 0) || (iVar6 == 0)) goto code_r0x080075c4;
        if ((*(iVar6 + 0x48) == NULL) || (pcVar7 = **(iVar6 + 0x48), pcVar7 == NULL)) break;
        if (1 < (pcVar7 + -0x8003a58 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar7,0x8000d60);
        }
        uVar2 = (*pcVar7)(iVar6,iVar8);
        if (uVar2 != 0) {
            uVar3 = uVar2;
            if (uVar2 == 0xffffffde) {
                uVar3 = 0;
            }
code_r0x080075c4:
            iVar1 = sp_el0;
            if (*(iVar1 + 0x5e0) == iVar5) {
                return uVar3;
            }
            auVar9 = __stack_chk_fail();
            *extraout_x18_01 = sym.mtd_get_fact_prot_info;
            iVar1 = auVar9._0_8_;
            do {
                iVar4 = iVar1;
                iVar1 = *(iVar4 + 0x568);
            } while (*(iVar4 + 0x568) != 0);
            pcVar7 = *(iVar4 + 0xb0);
            if (pcVar7 == NULL) {
                uVar3 = 0xffffffa1;
            }
            else if (auVar9._8_8_ == 0) {
                uVar3 = 0;
            }
            else {
                if (1 < (pcVar7 + -0x8003a40 >> 3 | pcVar7 << 0x3d)) {
                    __cfi_slowpath_diag(0xc610e2db308fc5b4,pcVar7,0x8000da0);
                }
                uVar3 = (*pcVar7)(iVar4,auVar9._8_8_);
            }
            return uVar3;
        }
        iVar8 = iVar8 + 1;
        iVar1 = iVar4;
    }
    uVar3 = 0xfffffdf4;
    goto code_r0x080075c4;
}


// ===== sym.mtd_ooblayout_count_freebytes @ 0x080073b8 (size 292) =====

uint64_t sym.mtd_ooblayout_count_freebytes(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    code *pcVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar3 = *(iVar1 + 0x5e0);
    iVar1 = arg1;
    while( true ) {
        do {
            iVar5 = iVar1;
            iVar1 = *(iVar5 + 0x568);
        } while (*(iVar5 + 0x568) != 0);
        uVar7 = 0xffffffea;
        if ((iVar8 < 0) || (iVar5 == 0)) goto code_r0x080074a0;
        if ((*(iVar5 + 0x48) == 0) || (pcVar4 = *(*(iVar5 + 0x48) + 8), pcVar4 == NULL)) {
            uVar7 = 0xfffffdf4;
            goto code_r0x080074a0;
        }
        if (1 < (pcVar4 + -0x8003a58 >> 3 | pcVar4 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar4,0x8000d80);
        }
        uVar2 = (*pcVar4)(iVar5,iVar8);
        if (uVar2 != 0) break;
        iVar8 = iVar8 + 1;
        iVar1 = arg1;
    }
    uVar7 = uVar2;
    if (uVar2 == 0xffffffde) {
        uVar7 = 0;
    }
code_r0x080074a0:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iVar3) {
        return uVar7;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.mtd_ooblayout_count_eccbytes;
    iVar1 = sp_el0;
    iVar8 = 0;
    iVar5 = *(iVar1 + 0x5e0);
    iVar1 = iVar3;
    while( true ) {
        do {
            iVar6 = iVar1;
            iVar1 = *(iVar6 + 0x568);
        } while (*(iVar6 + 0x568) != 0);
        uVar7 = 0xffffffea;
        if ((iVar8 < 0) || (iVar6 == 0)) goto code_r0x080075c4;
        if ((*(iVar6 + 0x48) == NULL) || (pcVar4 = **(iVar6 + 0x48), pcVar4 == NULL)) break;
        if (1 < (pcVar4 + -0x8003a58 >> 3 | pcVar4 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar4,0x8000d60);
        }
        uVar2 = (*pcVar4)(iVar6,iVar8);
        if (uVar2 != 0) {
            uVar7 = uVar2;
            if (uVar2 == 0xffffffde) {
                uVar7 = 0;
            }
code_r0x080075c4:
            iVar1 = sp_el0;
            if (*(iVar1 + 0x5e0) != iVar5) {
                auVar9 = __stack_chk_fail();
                *extraout_x18_00 = sym.mtd_get_fact_prot_info;
                iVar1 = auVar9._0_8_;
                do {
                    iVar3 = iVar1;
                    iVar1 = *(iVar3 + 0x568);
                } while (*(iVar3 + 0x568) != 0);
                pcVar4 = *(iVar3 + 0xb0);
                if (pcVar4 == NULL) {
                    uVar7 = 0xffffffa1;
                }
                else if (auVar9._8_8_ == 0) {
                    uVar7 = 0;
                }
                else {
                    if (1 < (pcVar4 + -0x8003a40 >> 3 | pcVar4 << 0x3d)) {
                        __cfi_slowpath_diag(0xc610e2db308fc5b4,pcVar4,0x8000da0);
                    }
                    uVar7 = (*pcVar4)(iVar3,auVar9._8_8_);
                }
                return uVar7;
            }
            return uVar7;
        }
        iVar8 = iVar8 + 1;
        iVar1 = iVar3;
    }
    uVar7 = 0xfffffdf4;
    goto code_r0x080075c4;
}


// ===== sym.mtd_ooblayout_count_eccbytes @ 0x080074dc (size 292) =====

uint64_t sym.mtd_ooblayout_count_eccbytes(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    code *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int iVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iVar7 = 0;
    iVar3 = *(iVar1 + 0x5e0);
    iVar1 = arg1;
    while( true ) {
        do {
            iVar4 = iVar1;
            iVar1 = *(iVar4 + 0x568);
        } while (*(iVar4 + 0x568) != 0);
        uVar5 = 0xffffffea;
        if ((iVar7 < 0) || (iVar4 == 0)) goto code_r0x080075c4;
        if ((*(iVar4 + 0x48) == NULL) || (pcVar6 = **(iVar4 + 0x48), pcVar6 == NULL)) break;
        if (1 < (pcVar6 + -0x8003a58 >> 3 | pcVar6 << 0x3d)) {
            __cfi_slowpath_diag(0xc9312c5dd8265c2c,pcVar6,0x8000d60);
        }
        uVar2 = (*pcVar6)(iVar4,iVar7);
        if (uVar2 != 0) {
            uVar5 = uVar2;
            if (uVar2 == 0xffffffde) {
                uVar5 = 0;
            }
code_r0x080075c4:
            iVar1 = sp_el0;
            if (*(iVar1 + 0x5e0) != iVar3) {
                auVar8 = __stack_chk_fail();
                *extraout_x18 = sym.mtd_get_fact_prot_info;
                iVar1 = auVar8._0_8_;
                do {
                    iVar3 = iVar1;
                    iVar1 = *(iVar3 + 0x568);
                } while (*(iVar3 + 0x568) != 0);
                pcVar6 = *(iVar3 + 0xb0);
                if (pcVar6 == NULL) {
                    uVar5 = 0xffffffa1;
                }
                else if (auVar8._8_8_ == 0) {
                    uVar5 = 0;
                }
                else {
                    if (1 < (pcVar6 + -0x8003a40 >> 3 | pcVar6 << 0x3d)) {
                        __cfi_slowpath_diag(0xc610e2db308fc5b4,pcVar6,0x8000da0);
                    }
                    uVar5 = (*pcVar6)(iVar3,auVar8._8_8_);
                }
                return uVar5;
            }
            return uVar5;
        }
        iVar7 = iVar7 + 1;
        iVar1 = arg1;
    }
    uVar5 = 0xfffffdf4;
    goto code_r0x080075c4;
}


// ===== sym.mtd_get_fact_prot_info @ 0x08007600 (size 176) =====

ulong sym.mtd_get_fact_prot_info(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    do {
        iVar2 = arg1;
        arg1 = *(iVar2 + 0x568);
    } while (*(iVar2 + 0x568) != 0);
    pcVar3 = *(iVar2 + 0xb0);
    if (pcVar3 == NULL) {
        uVar1 = 0xffffffa1;
    }
    else if (arg2 == 0) {
        uVar1 = 0;
    }
    else {
        if (1 < (pcVar3 + -0x8003a40 >> 3 | pcVar3 << 0x3d)) {
            __cfi_slowpath_diag(0xc610e2db308fc5b4,pcVar3,0x8000da0);
        }
        uVar1 = (*pcVar3)(iVar2,arg2,arg3,arg4);
    }
    return uVar1;
}


// ===== sym.mtd_read_fact_prot_reg @ 0x080076b0 (size 180) =====

ulong sym.mtd_read_fact_prot_reg(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    do {
        iVar2 = arg1;
        arg1 = *(iVar2 + 0x568);
    } while (*(iVar2 + 0x568) != 0);
    *arg4 = 0;
    pcVar3 = *(iVar2 + 0xb8);
    if (pcVar3 == NULL) {
        uVar1 = 0xffffffa1;
    }
    else if (arg3 == 0) {
        uVar1 = 0;
    }
    else {
        if (3 < (pcVar3 + -0x8003b20 >> 3 | pcVar3 << 0x3d)) {
            __cfi_slowpath_diag(0xbbecc41de69d7c2b,pcVar3,0x8000dc0);
        }
        uVar1 = (*pcVar3)(iVar2,arg2,arg3,arg4);
    }
    return uVar1;
}


// ===== sym.mtd_get_user_prot_info @ 0x08007764 (size 176) =====

ulong sym.mtd_get_user_prot_info(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    do {
        iVar2 = arg1;
        arg1 = *(iVar2 + 0x568);
    } while (*(iVar2 + 0x568) != 0);
    pcVar3 = *(iVar2 + 0xc0);
    if (pcVar3 == NULL) {
        uVar1 = 0xffffffa1;
    }
    else if (arg2 == 0) {
        uVar1 = 0;
    }
    else {
        if (1 < (pcVar3 + -0x8003a40 >> 3 | pcVar3 << 0x3d)) {
            __cfi_slowpath_diag(0xc610e2db308fc5b4,pcVar3,0x8000de0);
        }
        uVar1 = (*pcVar3)(iVar2,arg2,arg3,arg4);
    }
    return uVar1;
}


// ===== sym.mtd_read_user_prot_reg @ 0x08007814 (size 180) =====

ulong sym.mtd_read_user_prot_reg(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    do {
        iVar2 = arg1;
        arg1 = *(iVar2 + 0x568);
    } while (*(iVar2 + 0x568) != 0);
    *arg4 = 0;
    pcVar3 = *(iVar2 + 200);
    if (pcVar3 == NULL) {
        uVar1 = 0xffffffa1;
    }
    else if (arg3 == 0) {
        uVar1 = 0;
    }
    else {
        if (3 < (pcVar3 + -0x8003b20 >> 3 | pcVar3 << 0x3d)) {
            __cfi_slowpath_diag(0xbbecc41de69d7c2b,pcVar3,0x8000e00);
        }
        uVar1 = (*pcVar3)(iVar2,arg2,arg3,arg4);
    }
    return uVar1;
}


// ===== sym.mtd_write_user_prot_reg @ 0x080078c8 (size 224) =====

uint64_t sym.mtd_write_user_prot_reg(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    do {
        iVar3 = arg1;
        arg1 = *(iVar3 + 0x568);
    } while (*(iVar3 + 0x568) != 0);
    *arg4 = 0;
    pcVar4 = *(iVar3 + 0xd0);
    if (pcVar4 == NULL) {
        uVar1 = 0xffffffa1;
    }
    else if (arg3 == 0) {
        uVar1 = 0;
    }
    else {
        if (4 < (pcVar4 + -0x8003af8 >> 3 | pcVar4 << 0x3d)) {
            __cfi_slowpath_diag(0x870dfec9503a5e92,pcVar4,0x8000e20);
        }
        uVar1 = (*pcVar4)(iVar3,arg2,arg3,arg4);
        if (uVar1 == 0) {
            uVar2 = 0xffffffe4;
            if (*arg4 != 0) {
                uVar2 = 0;
            }
            uVar1 = uVar2;
        }
    }
    return uVar1;
}


// ===== sym.mtd_lock_user_prot_reg @ 0x080079a8 (size 176) =====

ulong sym.mtd_lock_user_prot_reg(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    do {
        iVar2 = arg1;
        arg1 = *(iVar2 + 0x568);
    } while (*(iVar2 + 0x568) != 0);
    pcVar3 = *(iVar2 + 0xd8);
    if (pcVar3 == NULL) {
        uVar1 = 0xffffffa1;
    }
    else if (arg3 == 0) {
        uVar1 = 0;
    }
    else {
        if (2 < (pcVar3 + -0x8003cc8 >> 3 | pcVar3 << 0x3d)) {
            __cfi_slowpath_diag(0x5a1f01aca03a138f,pcVar3,0x8000e40);
        }
        uVar1 = (*pcVar3)(iVar2,arg2,arg3);
    }
    return uVar1;
}


// ===== sym.mtd_erase_user_prot_reg @ 0x08007a58 (size 176) =====

ulong sym.mtd_erase_user_prot_reg(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    do {
        iVar2 = arg1;
        arg1 = *(iVar2 + 0x568);
    } while (*(iVar2 + 0x568) != 0);
    pcVar3 = *(iVar2 + 0xe0);
    if (pcVar3 == NULL) {
        uVar1 = 0xffffffa1;
    }
    else if (arg3 == 0) {
        uVar1 = 0;
    }
    else {
        if (2 < (pcVar3 + -0x8003cc8 >> 3 | pcVar3 << 0x3d)) {
            __cfi_slowpath_diag(0x5a1f01aca03a138f,pcVar3,0x8000e60);
        }
        uVar1 = (*pcVar3)(iVar2,arg2,arg3);
    }
    return uVar1;
}


// ===== sym.mtd_lock @ 0x08007b08 (size 332) =====

uint sym.mtd_lock(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    code *pcVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar6 = arg3;
    *in_x18 = unaff_x30;
    iVar4 = arg1;
    do {
        iVar7 = iVar4;
        iVar4 = *(iVar7 + 0x568);
    } while (*(iVar7 + 0x568) != 0);
    pcVar8 = *(iVar7 + 0xf8);
    if (pcVar8 == NULL) {
        uVar5 = 0xffffffa1;
    }
    else if (arg2 < 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0xffffffea;
        if ((arg2 < *(arg1 + 8)) && (uVar6 <= *(arg1 + 8) - arg2)) {
            if (uVar6 == 0) {
                uVar5 = 0;
            }
            else {
                if ((*(arg1 + 5) >> 6 & 1) != 0) {
                    uVar1 = *(arg1 + 0x24);
                    if (uVar1 == 0) {
                        uVar9 = *(arg1 + 0x10);
                        uVar11 = 0;
                        if (uVar9 != 0) {
                            uVar11 = arg2 / uVar9;
                        }
                        uVar10 = 0;
                        if (uVar9 != 0) {
                            uVar10 = uVar6 / uVar9;
                        }
                        uVar2 = *(iVar7 + 0x10);
                    }
                    else {
                        uVar11 = arg2 >> (uVar1 & 0x3f);
                        uVar2 = *(iVar7 + 0x10);
                        uVar10 = arg3 >> (uVar1 & 0x3f);
                    }
                    arg2 = (uVar11 & 0xffffffff) * uVar2;
                    uVar6 = uVar10 * uVar2;
                }
                if ((pcVar8 + -0x8003c98 >> 3 | pcVar8 << 0x3d) < 6) {
                    iVar4 = *(arg1 + 0x568);
                }
                else {
                    __cfi_slowpath_diag(0xb663bfcbab12d26e,pcVar8,0x8000e80);
                    iVar4 = *(arg1 + 0x568);
                }
                while (iVar3 = iVar4, iVar3 != 0) {
                    arg2 = *(arg1 + 0x590) + arg2;
                    arg1 = iVar3;
                    iVar4 = *(iVar3 + 0x568);
                }
                uVar5 = (*pcVar8)(iVar7,arg2,uVar6);
            }
        }
    }
    return uVar5;
}


// ===== sym.mtd_is_locked @ 0x08007c54 (size 332) =====

uint sym.mtd_is_locked(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    code *pcVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar6 = arg3;
    *in_x18 = unaff_x30;
    iVar4 = arg1;
    do {
        iVar7 = iVar4;
        iVar4 = *(iVar7 + 0x568);
    } while (*(iVar7 + 0x568) != 0);
    pcVar8 = *(iVar7 + 0x108);
    if (pcVar8 == NULL) {
        uVar5 = 0xffffffa1;
    }
    else if (arg2 < 0) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar5 = 0xffffffea;
        if ((arg2 < *(arg1 + 8)) && (uVar6 <= *(arg1 + 8) - arg2)) {
            if (uVar6 == 0) {
                uVar5 = 0;
            }
            else {
                if ((*(arg1 + 5) >> 6 & 1) != 0) {
                    uVar1 = *(arg1 + 0x24);
                    if (uVar1 == 0) {
                        uVar9 = *(arg1 + 0x10);
                        uVar11 = 0;
                        if (uVar9 != 0) {
                            uVar11 = arg2 / uVar9;
                        }
                        uVar10 = 0;
                        if (uVar9 != 0) {
                            uVar10 = uVar6 / uVar9;
                        }
                        uVar2 = *(iVar7 + 0x10);
                    }
                    else {
                        uVar11 = arg2 >> (uVar1 & 0x3f);
                        uVar2 = *(iVar7 + 0x10);
                        uVar10 = arg3 >> (uVar1 & 0x3f);
                    }
                    arg2 = (uVar11 & 0xffffffff) * uVar2;
                    uVar6 = uVar10 * uVar2;
                }
                if ((pcVar8 + -0x8003c98 >> 3 | pcVar8 << 0x3d) < 6) {
                    iVar4 = *(arg1 + 0x568);
                }
                else {
                    __cfi_slowpath_diag(0xb663bfcbab12d26e,pcVar8,0x8000ec0);
                    iVar4 = *(arg1 + 0x568);
                }
                while (iVar3 = iVar4, iVar3 != 0) {
                    arg2 = *(arg1 + 0x590) + arg2;
                    arg1 = iVar3;
                    iVar4 = *(iVar3 + 0x568);
                }
                uVar5 = (*pcVar8)(iVar7,arg2,uVar6);
            }
        }
    }
    return uVar5;
}


// ===== sym.mtd_block_isreserved @ 0x08007da0 (size 272) =====

ulong sym.mtd_block_isreserved(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    code *pcVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar4 = arg2;
    *in_x18 = unaff_x30;
    iVar2 = arg1;
    do {
        iVar5 = iVar2;
        iVar2 = *(iVar5 + 0x568);
    } while (*(iVar5 + 0x568) != 0);
    if (uVar4 < *(arg1 + 8)) {
        pcVar6 = *(iVar5 + 0x110);
        if (pcVar6 == NULL) {
            uVar3 = 0;
        }
        else {
            if ((*(arg1 + 5) >> 6 & 1) != 0) {
                if (*(arg1 + 0x24) == 0) {
                    uVar7 = 0;
                    if (*(arg1 + 0x10) != 0) {
                        uVar7 = uVar4 / *(arg1 + 0x10);
                    }
                }
                else {
                    uVar7 = arg2 >> (*(arg1 + 0x24) & 0x3f);
                }
                uVar4 = uVar7 * *(iVar5 + 0x10);
            }
            if ((pcVar6 + -0x8003b90 >> 3 | pcVar6 << 0x3d) < 5) {
                iVar2 = *(arg1 + 0x568);
            }
            else {
                __cfi_slowpath_diag(0xc3e13509d071e0c,pcVar6,0x8000ee0);
                iVar2 = *(arg1 + 0x568);
            }
            while (iVar1 = iVar2, iVar1 != 0) {
                uVar4 = *(arg1 + 0x590) + uVar4;
                arg1 = iVar1;
                iVar2 = *(iVar1 + 0x568);
            }
            uVar3 = (*pcVar6)(iVar5,uVar4);
        }
    }
    else {
        uVar3 = 0xffffffea;
    }
    return uVar3;
}


// ===== sym.mtd_block_isbad @ 0x08007eb0 (size 272) =====

ulong sym.mtd_block_isbad(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    code *pcVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar4 = arg2;
    *in_x18 = unaff_x30;
    iVar2 = arg1;
    do {
        iVar5 = iVar2;
        iVar2 = *(iVar5 + 0x568);
    } while (*(iVar5 + 0x568) != 0);
    if (uVar4 < *(arg1 + 8)) {
        pcVar6 = *(iVar5 + 0x118);
        if (pcVar6 == NULL) {
            uVar3 = 0;
        }
        else {
            if ((*(arg1 + 5) >> 6 & 1) != 0) {
                if (*(arg1 + 0x24) == 0) {
                    uVar7 = 0;
                    if (*(arg1 + 0x10) != 0) {
                        uVar7 = uVar4 / *(arg1 + 0x10);
                    }
                }
                else {
                    uVar7 = arg2 >> (*(arg1 + 0x24) & 0x3f);
                }
                uVar4 = uVar7 * *(iVar5 + 0x10);
            }
            if ((pcVar6 + -0x8003b90 >> 3 | pcVar6 << 0x3d) < 5) {
                iVar2 = *(arg1 + 0x568);
            }
            else {
                __cfi_slowpath_diag(0xc3e13509d071e0c,pcVar6,0x8000f00);
                iVar2 = *(arg1 + 0x568);
            }
            while (iVar1 = iVar2, iVar1 != 0) {
                uVar4 = *(arg1 + 0x590) + uVar4;
                arg1 = iVar1;
                iVar2 = *(iVar1 + 0x568);
            }
            uVar3 = (*pcVar6)(iVar5,uVar4);
        }
    }
    else {
        uVar3 = 0xffffffea;
    }
    return uVar3;
}


// ===== sym.mtd_block_markbad @ 0x08007fc0 (size 340) =====

ulong sym.mtd_block_markbad(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t uVar4;
    code *pcVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar4 = arg2;
    *in_x18 = unaff_x30;
    iVar7 = arg1;
    do {
        iVar6 = iVar7;
        iVar7 = *(iVar6 + 0x568);
    } while (*(iVar6 + 0x568) != 0);
    pcVar5 = *(iVar6 + 0x120);
    if (pcVar5 == NULL) {
        uVar3 = 0xffffffa1;
    }
    else if (uVar4 < *(arg1 + 8)) {
        if ((*(arg1 + 4) >> 10 & 1) == 0) {
            uVar3 = 0xffffffe2;
        }
        else {
            if ((*(arg1 + 4) >> 0xe & 1) != 0) {
                if (*(arg1 + 0x24) == 0) {
                    uVar8 = 0;
                    if (*(arg1 + 0x10) != 0) {
                        uVar8 = uVar4 / *(arg1 + 0x10);
                    }
                }
                else {
                    uVar8 = arg2 >> (*(arg1 + 0x24) & 0x3f);
                }
                uVar4 = uVar8 * *(iVar6 + 0x10);
            }
            iVar7 = arg1;
            if ((pcVar5 + -0x8003b90 >> 3 | pcVar5 << 0x3d) < 5) {
                iVar2 = *(arg1 + 0x568);
            }
            else {
                __cfi_slowpath_diag(0xc3e13509d071e0c,pcVar5,0x8000f20);
                iVar2 = *(arg1 + 0x568);
            }
            while (iVar1 = iVar2, iVar1 != 0) {
                uVar4 = *(iVar7 + 0x590) + uVar4;
                iVar7 = iVar1;
                iVar2 = *(iVar1 + 0x568);
            }
            uVar3 = (*pcVar5)(iVar6,uVar4);
            if (uVar3 == 0) {
                if (*(arg1 + 0x568) == 0) {
                    uVar3 = 0;
                }
                else {
                    uVar3 = 0;
                    iVar7 = *(arg1 + 0x568);
                    do {
                        iVar6 = iVar7;
                        *(arg1 + 0x180) = *(arg1 + 0x180) + 1;
                        iVar7 = *(iVar6 + 0x568);
                        arg1 = iVar6;
                    } while (iVar7 != 0);
                }
            }
        }
    }
    else {
        uVar3 = 0xffffffea;
    }
    return uVar3;
}


// ===== sym.mtd_writev @ 0x08008114 (size 404) =====

void sym.mtd_writev(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t *in_x4;
    int64_t iVar4;
    ulong *in_x18;
    code *unaff_x23;
    int64_t *piVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    ulong uStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    iVar4 = arg1;
    do {
        iVar3 = iVar4;
        iVar4 = *(iVar3 + 0x568);
    } while (*(iVar3 + 0x568) != 0);
    *in_x4 = 0;
    if ((*(arg1 + 5) >> 2 & 1) == 0) {
        uVar2 = 0xffffffe2;
    }
    else {
        unaff_x23 = *(iVar3 + 0xe8);
        if (unaff_x23 != NULL) {
            if (1 < (unaff_x23 + -0x8003988 >> 3 | unaff_x23 << 0x3d)) goto code_r0x0800826c;
            iVar4 = *(arg1 + 0x568);
            if (iVar4 == 0) goto code_r0x080081b4;
            goto code_r0x0800819c;
        }
        unaff_x23 = NULL;
        if (arg3 != 0) {
            piVar5 = arg2 + 8;
            do {
                if (*piVar5 != 0) {
                    iStack_58 = piVar5[-1];
                    uStack_68 = 0;
                    uStack_60 = 0;
                    iStack_78 = 0;
                    uStack_70 = 0;
                    uStack_88 = 0;
                    uStack_50 = 0;
                    iStack_80 = *piVar5;
                    uVar2 = sym.mtd_write_oob(arg1,arg4,&uStack_88);
                    unaff_x23 = unaff_x23 + iStack_78;
                    if (uVar2 != 0) goto code_r0x08008230;
                    if (iStack_78 != *piVar5) break;
                    arg4 = iStack_78 + arg4;
                }
                arg3 = arg3 + -1;
                piVar5 = piVar5 + 2;
            } while (arg3 != 0);
        }
        uVar2 = 0;
code_r0x08008230:
        *in_x4 = unaff_x23;
    }
    while (iVar4 = sp_el0, *(iVar4 + 0x5e0) != iStack_48) {
        auVar6 = __stack_chk_fail(uVar2);
        arg2 = auVar6._8_8_;
        iVar3 = auVar6._0_8_;
code_r0x0800826c:
        __cfi_slowpath_diag(0x16a3cf4792ed7de4,unaff_x23,0x8000f40);
        iVar1 = *(arg1 + 0x568);
        while (iVar4 = iVar1, iVar4 != 0) {
code_r0x0800819c:
            arg4 = *(arg1 + 0x590) + arg4;
            arg1 = iVar4;
            iVar1 = *(iVar4 + 0x568);
        }
code_r0x080081b4:
        uVar2 = (*unaff_x23)(iVar3,arg2,arg3,arg4);
    }
    return;
}


// ===== sym.mtd_kmalloc_up_to @ 0x080082a8 (size 168) =====

void sym.mtd_kmalloc_up_to(uint32_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + 0x14);
    uVar3 = uVar1;
    uVar5 = *arg2;
    if (uVar1 < 0x1001) {
        uVar3 = 0x1000;
    }
    if (0x3fffff < uVar5) {
        uVar5 = 0x400000;
    }
    *arg2 = uVar5;
    while( true ) {
        if (uVar5 <= uVar3) {
            __kmalloc(uVar5,0xcc0);
            return;
        }
        iVar2 = __kmalloc(uVar5,0x12400);
        if (iVar2 != 0) break;
        uVar5 = *arg2;
        *arg2 = uVar5 >> 1;
        uVar4 = *(arg1 + 0x14);
        uVar5 = ((uVar5 >> 1) + uVar4) - 1 & -uVar4;
        *arg2 = uVar5;
    }
    return;
}


// ===== sym.mtd_release @ 0x08008350 (size 64) =====

void sym.mtd_release(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    device_destroy(obj.mtd_class,*(*(arg1 + 0x98) + 0x40) << 1 | 0x5a00001);
    return;
}


// ===== sym.mtd_type_show @ 0x08008390 (size 92) =====

int64_t sym.mtd_type_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    char *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (**(arg1 + 0x98) < 9) {
        pcVar2 = *(**(arg1 + 0x98) * 8 + 0x8002460);
    }
    else {
        pcVar2 = "unknown";
    }
    iVar1 = sysfs_emit(arg2,0x8001b3d,pcVar2);
    return iVar1;
}


// ===== sym.mtd_flags_show @ 0x080083ec (size 64) =====

int64_t sym.mtd_flags_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,"0x%lx\n",*(*(arg1 + 0x98) + 4));
    return iVar1;
}


// ===== sym.mtd_size_show @ 0x0800842c (size 64) =====

int64_t sym.mtd_size_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,"%llu\n",*(*(arg1 + 0x98) + 8));
    return iVar1;
}


// ===== sym.mtd_erasesize_show @ 0x0800846c (size 64) =====

int64_t sym.mtd_erasesize_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,"%lu\n",*(*(arg1 + 0x98) + 0x10));
    return iVar1;
}


// ===== sym.mtd_writesize_show @ 0x080084ac (size 64) =====

int64_t sym.mtd_writesize_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,"%lu\n",*(*(arg1 + 0x98) + 0x14));
    return iVar1;
}


// ===== sym.mtd_subpagesize_show @ 0x080084ec (size 72) =====

int64_t sym.mtd_subpagesize_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,0x8001460,*(*(arg1 + 0x98) + 0x14) >> (*(*(arg1 + 0x98) + 0x188) & 0x1f));
    return iVar1;
}


// ===== sym.mtd_oobsize_show @ 0x08008534 (size 64) =====

int64_t sym.mtd_oobsize_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,"%lu\n",*(*(arg1 + 0x98) + 0x1c));
    return iVar1;
}


// ===== sym.mtd_oobavail_show @ 0x08008574 (size 64) =====

int64_t sym.mtd_oobavail_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,0x8001460,*(*(arg1 + 0x98) + 0x20));
    return iVar1;
}


// ===== sym.mtd_numeraseregions_show @ 0x080085b4 (size 64) =====

int64_t sym.mtd_numeraseregions_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,0x8001460,*(*(arg1 + 0x98) + 0x60));
    return iVar1;
}


// ===== sym.mtd_name_show @ 0x080085f4 (size 64) =====

int64_t sym.mtd_name_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,0x8001b3d,*(*(arg1 + 0x98) + 0x38));
    return iVar1;
}


// ===== sym.mtd_ecc_strength_show @ 0x08008634 (size 64) =====

int64_t sym.mtd_ecc_strength_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,0x8001460,*(*(arg1 + 0x98) + 0x5c));
    return iVar1;
}


// ===== sym.mtd_ecc_step_size_show @ 0x08008674 (size 64) =====

int64_t sym.mtd_ecc_step_size_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,0x8001460,*(*(arg1 + 0x98) + 0x58));
    return iVar1;
}


// ===== sym.mtd_corrected_bits_show @ 0x080086b4 (size 64) =====

int64_t sym.mtd_corrected_bits_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,0x8001460,*(*(arg1 + 0x98) + 0x178));
    return iVar1;
}


// ===== sym.mtd_ecc_failures_show @ 0x080086f4 (size 64) =====

int64_t sym.mtd_ecc_failures_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,0x8001460,*(*(arg1 + 0x98) + 0x17c));
    return iVar1;
}


// ===== sym.mtd_bad_blocks_show @ 0x08008734 (size 64) =====

int64_t sym.mtd_bad_blocks_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,0x8001460,*(*(arg1 + 0x98) + 0x180));
    return iVar1;
}


// ===== sym.mtd_bbt_blocks_show @ 0x08008774 (size 64) =====

int64_t sym.mtd_bbt_blocks_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,0x8001460,*(*(arg1 + 0x98) + 0x184));
    return iVar1;
}


// ===== sym.mtd_bitflip_threshold_show @ 0x080087b4 (size 64) =====

int64_t sym.mtd_bitflip_threshold_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,0x8001460,*(*(arg1 + 0x98) + 0x34));
    return iVar1;
}


// ===== sym.mtd_bitflip_threshold_store @ 0x080087f4 (size 140) =====

int64_t sym.mtd_bitflip_threshold_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    int iVar2;
    int64_t iVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    ulong unaff_x30;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    iVar5 = *(arg1 + 0x98);
    uStack_2c = 0;
    iVar2 = kstrtouint(arg2,0,&uStack_2c);
    if (iVar2 == 0) {
        *(iVar5 + 0x34) = uStack_2c;
    }
    else {
        arg3 = iVar2;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.mtd_cls_suspend;
    iVar5 = *(iVar3 + 0x98);
    if (*(iVar3 + 0x98) != 0) {
        do {
            iVar3 = iVar5;
            iVar5 = *(iVar3 + 0x568);
        } while (*(iVar3 + 0x568) != 0);
        uVar1 = *(iVar3 + 0x608);
        if ((uVar1 & 1) == 0) {
            pcVar4 = *(iVar3 + 0x130);
            if (pcVar4 != NULL) {
                if (5 < (pcVar4 + -0x8003b40 >> 3 | pcVar4 << 0x3d)) {
                    __cfi_slowpath_diag(0x2c870642b6445e97,pcVar4,0x8000f60);
                }
                iVar5 = (*pcVar4)(iVar3);
                if (iVar5 != 0) {
                    return iVar5;
                }
                uVar1 = *(iVar3 + 0x608);
            }
            *(iVar3 + 0x608) = uVar1 | 1;
            return 0;
        }
    }
    return 0;
}


// ===== sym.mtd_cls_suspend @ 0x08008880 (size 180) =====

ulong sym.mtd_cls_suspend(int64_t arg1)

{
    uint8_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t iVar4;
    code *pcVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x98);
    if (*(arg1 + 0x98) != 0) {
        do {
            iVar4 = iVar2;
            iVar2 = *(iVar4 + 0x568);
        } while (*(iVar4 + 0x568) != 0);
        uVar1 = *(iVar4 + 0x608);
        if ((uVar1 & 1) == 0) {
            pcVar5 = *(iVar4 + 0x130);
            if (pcVar5 != NULL) {
                if (5 < (pcVar5 + -0x8003b40 >> 3 | pcVar5 << 0x3d)) {
                    __cfi_slowpath_diag(0x2c870642b6445e97,pcVar5,0x8000f60);
                }
                uVar3 = (*pcVar5)(iVar4);
                if (uVar3 != 0) {
                    return uVar3;
                }
                uVar1 = *(iVar4 + 0x608);
            }
            *(iVar4 + 0x608) = uVar1 | 1;
            return 0;
        }
    }
    return 0;
}


// ===== sym.mtd_cls_resume @ 0x08008934 (size 168) =====

ulong sym.mtd_cls_resume(int64_t arg1)

{
    uint8_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x98);
    if (*(arg1 + 0x98) != 0) {
        do {
            iVar3 = iVar2;
            iVar2 = *(iVar3 + 0x568);
        } while (*(iVar3 + 0x568) != 0);
        uVar1 = *(iVar3 + 0x608);
        if ((uVar1 & 1) != 0) {
            pcVar4 = *(iVar3 + 0x138);
            if (pcVar4 != NULL) {
                if (4 < (pcVar4 + -0x8003ce0 >> 3 | pcVar4 << 0x3d)) {
                    __cfi_slowpath_diag(0xcda853bfdc928661,pcVar4,0x8000f80);
                }
                (*pcVar4)(iVar3);
                uVar1 = *(iVar3 + 0x608);
            }
            *(iVar3 + 0x608) = uVar1 & 0xfe;
        }
    }
    return 0;
}


// ===== sym.mtd_nvmem_reg_read @ 0x080089dc (size 144) =====

void sym.mtd_nvmem_reg_read(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar4 [16];
    ulong uStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    iStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    iStack_60 = arg4;
    iStack_38 = arg3;
    uVar2 = sym.mtd_read_oob(arg1,arg2 & 0xffffffff,&uStack_68);
    if ((uVar2 == 0) || (uVar2 == -0x75)) {
        uVar3 = 0;
        if (iStack_58 != arg4) {
            uVar3 = 0xfffffffb;
        }
        uVar2 = uVar3;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return;
    }
    auVar4 = __stack_chk_fail(uVar2);
    *extraout_x18 = sym.mtd_partid_debug_open;
    single_open(auVar4._8_8_,sym.mtd_partid_debug_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt,*(auVar4._0_8_ + 0x2d8)
               );
    return;
}


// ===== sym.mtd_partid_debug_open @ 0x08008a6c (size 56) =====

void sym.mtd_partid_debug_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.mtd_partid_debug_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.mtd_partid_debug_show @ 0x08008aa4 (size 56) =====

ulong sym.mtd_partid_debug_show(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    seq_printf(arg1,0x8001b3d,*(*(arg1 + 0x80) + 0x548));
    return 0;
}


// ===== sym.mtd_partname_debug_open @ 0x08008adc (size 56) =====

void sym.mtd_partname_debug_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.mtd_partname_debug_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.mtd_partname_debug_show @ 0x08008b14 (size 56) =====

ulong sym.mtd_partname_debug_show(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    seq_printf(arg1,0x8001b3d,*(*(arg1 + 0x80) + 0x540));
    return 0;
}


// ===== sym.mtd_otp_size @ 0x08008b4c (size 436) =====

code * sym.mtd_otp_size(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t unaff_x19;
    code *pcVar7;
    ulong unaff_x30;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    iVar3 = kmem_cache_alloc_trace(_seq_read,0xcc0,0x1000);
    if (iVar3 == 0) {
        pcVar7 = 0xfffffffffffffff4;
        goto code_r0x08008c9c;
    }
    if ((arg2 & 1U) == 0) {
        do {
            iVar4 = arg1;
            arg1 = *(iVar4 + 0x568);
        } while (*(iVar4 + 0x568) != 0);
        pcVar7 = *(iVar4 + 0xb0);
        if (pcVar7 != NULL) {
            if (1 < (pcVar7 + -0x8003a40 >> 3 | pcVar7 << 0x3d)) goto code_r0x08008cd4;
            goto code_r0x08008c04;
        }
    }
    else {
        do {
            iVar4 = arg1;
            arg1 = *(iVar4 + 0x568);
        } while (*(iVar4 + 0x568) != 0);
        pcVar7 = *(iVar4 + 0xc0);
        if (pcVar7 != NULL) {
            if ((pcVar7 + -0x8003a40 >> 3 | pcVar7 << 0x3d) < 2) goto code_r0x08008c04;
            uVar5 = 0x8000de0;
            while( true ) {
                __cfi_slowpath_diag(0xc610e2db308fc5b4,pcVar7,uVar5);
code_r0x08008c04:
                iVar2 = (*pcVar7)(iVar4,0x1000,&uStack_40,iVar3);
                unaff_x19 = iVar3;
                if (iVar2 == 0) {
                    if (uStack_40 < 0xc) {
                        pcVar7 = NULL;
                    }
                    else {
                        uVar6 = 0;
                        pcVar7 = NULL;
                        do {
                            iVar4 = uVar6 * 0xc;
                            uVar6 = uVar6 + 1;
                            pcVar7 = pcVar7 + *(iVar3 + iVar4 + 4);
                        } while (uVar6 < uStack_40 / 0xc);
                    }
                    kfree(iVar3);
                }
                else {
                    kfree(iVar3);
                    iVar1 = 0;
                    if (iVar2 != -0x3d) {
                        iVar1 = iVar2;
                    }
                    pcVar7 = iVar1;
                }
code_r0x08008c9c:
                iVar3 = sp_el0;
                if (*(iVar3 + 0x5e0) == iStack_38) break;
                iVar4 = __stack_chk_fail();
                iVar3 = unaff_x19;
code_r0x08008cd4:
                uVar5 = 0x8000da0;
            }
            return pcVar7;
        }
    }
    kfree(iVar3);
    pcVar7 = 0xffffffffffffffa1;
    unaff_x19 = iVar3;
    goto code_r0x08008c9c;
}


// ===== sym.mtd_nvmem_user_otp_reg_read @ 0x08008d00 (size 256) =====

void sym.mtd_nvmem_user_otp_reg_read(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar auVar1 [16];
    uint64_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    code *pcVar5;
    code *extraout_x8;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auVar6 [16];
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    do {
        iVar4 = arg1;
        arg1 = *(iVar4 + 0x568);
    } while (*(iVar4 + 0x568) != 0);
    pcVar5 = *(iVar4 + 200);
    iStack_30 = 0;
    if (pcVar5 != NULL) {
        if (arg4 != 0) {
            auVar1._8_8_ = arg2 & 0xffffffffU;
            auVar1._0_8_ = iVar4;
            auVar6._8_8_ = arg2 & 0xffffffffU;
            auVar6._0_8_ = iVar4;
            if (3 < (pcVar5 + -0x8003b20 >> 3 | pcVar5 << 0x3d)) goto code_r0x08008dcc;
            while( true ) {
                uVar2 = (*pcVar5)(auVar1._0_8_,auVar1._8_8_,arg4,&iStack_30);
                uVar3 = 0;
                if (iStack_30 != arg4) {
                    uVar3 = 0xfffffffb;
                }
                if (uVar2 == 0) {
                    uVar2 = uVar3;
                }
code_r0x08008d9c:
                iVar4 = sp_el0;
                if (*(iVar4 + 0x5e0) == iStack_28) break;
                auVar6 = __stack_chk_fail(uVar2);
                pcVar5 = extraout_x8;
code_r0x08008dcc:
                __cfi_slowpath_diag(0xbbecc41de69d7c2b,pcVar5,0x8000e00);
                auVar1 = auVar6;
            }
            return;
        }
        uVar2 = 0;
        goto code_r0x08008d9c;
    }
    uVar2 = 0xffffffa1;
    goto code_r0x08008d9c;
}


// ===== sym.mtd_nvmem_fact_otp_reg_read @ 0x08008e00 (size 256) =====

void sym.mtd_nvmem_fact_otp_reg_read(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar auVar1 [16];
    uint64_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    code *pcVar5;
    code *extraout_x8;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auVar6 [16];
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    do {
        iVar4 = arg1;
        arg1 = *(iVar4 + 0x568);
    } while (*(iVar4 + 0x568) != 0);
    pcVar5 = *(iVar4 + 0xb8);
    iStack_30 = 0;
    if (pcVar5 != NULL) {
        if (arg4 != 0) {
            auVar1._8_8_ = arg2 & 0xffffffffU;
            auVar1._0_8_ = iVar4;
            auVar6._8_8_ = arg2 & 0xffffffffU;
            auVar6._0_8_ = iVar4;
            if (3 < (pcVar5 + -0x8003b20 >> 3 | pcVar5 << 0x3d)) goto code_r0x08008ecc;
            while( true ) {
                uVar2 = (*pcVar5)(auVar1._0_8_,auVar1._8_8_,arg4,&iStack_30);
                uVar3 = 0;
                if (iStack_30 != arg4) {
                    uVar3 = 0xfffffffb;
                }
                if (uVar2 == 0) {
                    uVar2 = uVar3;
                }
code_r0x08008e9c:
                iVar4 = sp_el0;
                if (*(iVar4 + 0x5e0) == iStack_28) break;
                auVar6 = __stack_chk_fail(uVar2);
                pcVar5 = extraout_x8;
code_r0x08008ecc:
                __cfi_slowpath_diag(0xbbecc41de69d7c2b,pcVar5,0x8000dc0);
                auVar1 = auVar6;
            }
            return;
        }
        uVar2 = 0;
        goto code_r0x08008e9c;
    }
    uVar2 = 0xffffffa1;
    goto code_r0x08008e9c;
}


// ===== sym.mtd_proc_show @ 0x08008f00 (size 240) =====

uchar * sym.mtd_proc_show(int64_t arg1)

{
    code *pcVar1;
    int64_t iVar2;
    uchar *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar4 [16];
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    seq_puts(arg1,"dev:    size   erasesize  name\n");
    mutex_lock(obj.dfs_dir_mtd);
    iStack_3c = 0;
    iVar2 = idr_get_next(obj.mtd_idr,&iStack_3c);
    while (iVar2 != 0) {
        seq_printf(arg1,"mtd%d: %8.8llx %8.8x \"%s\"\n",*(iVar2 + 0x40),*(iVar2 + 8),*(iVar2 + 0x10),
                   *(iVar2 + 0x38));
        iStack_3c = *(iVar2 + 0x40) + 1;
        iVar2 = idr_get_next(obj.mtd_idr,&iStack_3c);
    }
    mutex_unlock(obj.dfs_dir_mtd);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return NULL;
    }
    auVar4 = __stack_chk_fail();
    puVar3 = auVar4._0_8_;
    *extraout_x18 = sym.__cfi_check_fail;
    if (puVar3 != NULL) {
        switch(*puVar3) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            __ubsan_handle_cfi_check_fail_abort(puVar3,auVar4._8_8_,0);
            break;
        default:
            return puVar3;
        }
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8009048);
    (*pcVar1)();
}


// ===== sym.__cfi_check_fail @ 0x08008ff0 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08009034

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
    //switch table (4 cases) at 0x8001b68
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8009048);
    (*pcVar1)();
}


// ===== sym.get_tree_mtd @ 0x08009048 (size 504) =====

uint64_t sym.get_tree_mtd(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    code *in_x2;
    char *pcVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar8 [16];
    char *pcStack_48;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    pcVar6 = *(arg1 + 0x80);
    uStack_3c = 0;
    if (pcVar6 == NULL) {
        arg2 = 0x65;
        logfc(*(arg1 + 0x78),0,0x65,"No source specified");
code_r0x08009100:
        uVar3 = 0xffffffea;
    }
    else {
        if (((*pcVar6 != 'm') || (pcVar6[1] != 't')) || (pcVar6[2] != 'd')) goto code_r0x0800912c;
        uVar2 = pcVar6[3];
        if (uVar2 == 0x3a) {
            uVar3 = sym.get_mtd_device_nm(pcVar6 + 4);
            if (0xfffffffffffff000 < uVar3) {
                in_x2 = 0x65;
                logfc(*(arg1 + 0x78),0,0x65,"MTD: MTD device with name \"%s\" not found",*(arg1 + 0x80) + 4);
                goto code_r0x0800912c;
            }
code_r0x08009214:
            uVar3 = sym.mtd_get_sb(arg1,uVar3,arg2);
            uVar3 = uVar3 & 0xffffffff;
        }
        else if (uVar2 - 0x3a < 0xfffffff6) {
code_r0x0800912c:
            uVar3 = lookup_bdev(*(arg1 + 0x80),&uStack_3c);
            if (uVar3 == 0) {
                if (uStack_3c >> 0x14 != 0x1f) {
                    arg2 = in_x2;
                    if (-1 < *(arg1 + 0x99)) {
                        arg2 = 0x65;
                        logfc(*(arg1 + 0x78),0,0x65,"MTD: Attempt to mount non-MTD device \"%s\"",*(arg1 + 0x80));
                    }
                    goto code_r0x08009100;
                }
                uVar2 = uStack_3c & 0xfffff;
                uVar3 = sym.get_mtd_device(0,uVar2);
                if (uVar3 < 0xfffffffffffff001) goto code_r0x08009214;
                arg2 = 0x65;
                logfc(*(arg1 + 0x78),0,0x65,"MTDSB: Device #%u doesn\'t appear to exist\n",uVar2);
            }
            else {
                uVar3 = uVar3 & 0xffffffff;
                arg2 = 0x65;
                logfc(*(arg1 + 0x78),0,0x65,"MTD: Couldn\'t look up \'%s\': %d",*(arg1 + 0x80),uVar3);
            }
        }
        else {
            in_x2 = NULL;
            pcStack_48 = NULL;
            iVar4 = simple_strtoul(pcVar6 + 3,&pcStack_48);
            if (*pcStack_48 != '\0') goto code_r0x0800912c;
            uVar3 = sym.mtd_get_sb_by_nr(arg1,iVar4,arg2);
            uVar3 = uVar3 & 0xffffffff;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return uVar3 & 0xffffffff;
    }
    auVar8 = __stack_chk_fail();
    iVar4 = auVar8._0_8_;
    *extraout_x18 = sym.mtd_get_sb;
    *(iVar4 + 0x48) = auVar8._8_8_;
    uVar5 = sget_fc(iVar4,sym.mtd_test_super.e15e9b585228cff038f27a9a25a8c6f2.cfi_jt,
                    sym.__typeid__ZTSFiP11super_blockP10fs_contextE_global_addr);
    uVar3 = uVar5;
    if (uVar5 < 0xfffffffffffff001) {
        if (*(uVar5 + 0x68) == 0) {
            if (1 < (arg2 + -0x8003c60 >> 3 | arg2 << 0x3d)) {
                __cfi_slowpath_diag(0x698bc01d8a1eb827,arg2,0x8001040);
            }
            uVar2 = (*arg2)(uVar5,iVar4);
            if (uVar2 < 0) {
                uVar3 = uVar2;
                deactivate_locked_super(uVar5);
                goto code_r0x080092b8;
            }
            *(uVar5 + 0x50) = *(uVar5 + 0x50) | 0x40000000;
            iVar7 = *(iVar4 + 0x50);
        }
        else {
            sym.put_mtd_device(auVar8._8_8_);
            iVar7 = *(iVar4 + 0x50);
        }
        if (iVar7 != 0) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x8009314);
            (*pcVar1)();
        }
        iVar7 = *(uVar5 + 0x68);
        if (iVar7 != 0) {
            lockref_get(iVar7 + 0x58);
        }
        uVar3 = 0;
        *(iVar4 + 0x50) = iVar7;
    }
code_r0x080092b8:
    return uVar3 & 0xffffffff;
}


// ===== sym.mtd_get_sb @ 0x08009240 (size 268) =====

uint64_t sym.mtd_get_sb(int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    uint64_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x48) = arg2;
    uVar3 = sget_fc(arg1,sym.mtd_test_super.e15e9b585228cff038f27a9a25a8c6f2.cfi_jt,
                    sym.__typeid__ZTSFiP11super_blockP10fs_contextE_global_addr);
    uVar5 = uVar3;
    if (uVar3 < 0xfffffffffffff001) {
        if (*(uVar3 + 0x68) == 0) {
            if (1 < (arg3 - 0x8003c60U >> 3 | arg3 << 0x3d)) {
                __cfi_slowpath_diag(0x698bc01d8a1eb827,arg3,0x8001040);
            }
            uVar2 = (*arg3)(uVar3,arg1);
            if (uVar2 < 0) {
                uVar5 = uVar2;
                deactivate_locked_super(uVar3);
                goto code_r0x080092b8;
            }
            *(uVar3 + 0x50) = *(uVar3 + 0x50) | 0x40000000;
            iVar4 = *(arg1 + 0x50);
        }
        else {
            sym.put_mtd_device(arg2);
            iVar4 = *(arg1 + 0x50);
        }
        if (iVar4 != 0) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x8009314);
            (*pcVar1)();
        }
        iVar4 = *(uVar3 + 0x68);
        if (iVar4 != 0) {
            lockref_get(iVar4 + 0x58);
        }
        uVar5 = 0;
        *(arg1 + 0x50) = iVar4;
    }
code_r0x080092b8:
    return uVar5 & 0xffffffff;
}


// ===== sym.mtd_get_sb_by_nr @ 0x0800934c (size 136) =====

uint64_t sym.mtd_get_sb_by_nr(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.get_mtd_device(0,arg2);
    if (uVar1 < 0xfffffffffffff001) {
        uVar1 = sym.mtd_get_sb(arg1,uVar1,arg3);
        uVar1 = uVar1 & 0xffffffff;
    }
    else {
        logfc(*(arg1 + 0x78),0,0x65,"MTDSB: Device #%u doesn\'t appear to exist\n",arg2 & 0xffffffff);
    }
    return uVar1 & 0xffffffff;
}


// ===== sym.kill_mtd_super @ 0x080093d4 (size 60) =====

void sym.kill_mtd_super(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    generic_shutdown_super();
    sym.put_mtd_device(*(arg1 + 0x118));
    *(arg1 + 0x118) = 0;
    return;
}


// ===== sym.mtd_test_super @ 0x08009410 (size 28) =====

bool sym.mtd_test_super(int64_t arg1,int64_t arg2)

{
    return *(arg1 + 0x118) == *(arg2 + 0x48);
}


// ===== sym.mtd_set_super @ 0x0800942c (size 172) =====

ulong sym.mtd_set_super(int64_t arg1,int64_t arg2)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(arg2 + 0x48);
    *(arg1 + 0x118) = iVar7;
    iVar5 = _segment.ehdr;
    puVar1 = _segment.ehdr + 0x40;
    *(arg1 + 0x10) = *(iVar7 + 0x40) | 0x1f00000;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar2 = *puVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = uVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (uVar2 == 0) {
        uVar6 = 2;
    }
    else {
        if (-1 < (uVar2 + 1 | uVar2)) goto code_r0x08009484;
        uVar6 = 1;
    }
    refcount_warn_saturate(puVar1,uVar6);
code_r0x08009484:
    *(arg1 + 0x110) = iVar5;
    return 0;
}


// ===== sym.mtd_concat_create @ 0x080094d8 (size 1616) =====

char * sym.mtd_concat_create(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint32_t uVar2;
    uint uVar3;
    char cVar4;
    uchar auVar5 [16];
    char *pcVar6;
    char *pcVar7;
    uint32_t uVar8;
    ulong uVar9;
    char *pcVar10;
    int64_t iVar11;
    uint64_t uVar12;
    uint32_t *puVar13;
    int64_t iVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    char *pcVar17;
    int64_t iVar18;
    uint32_t uVar19;
    int64_t iVar20;
    int64_t iVar21;
    int64_t iVar22;
    ulong *in_x18;
    uint64_t uVar23;
    int iVar24;
    int64_t *piVar25;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8001504);
    iVar24 = arg2;
    if (0 < iVar24) {
        uVar23 = 0;
        do {
            _printk(0x800186c,uVar23 & 0xffffffff,*(*(arg1 + uVar23 * 8) + 0x38));
            uVar23 = uVar23 + 1;
        } while ((arg2 & 0xffffffffU) != uVar23);
    }
    _printk(0x800133a,arg3);
    pcVar7 = __kmalloc((-((arg2 & 0xffffffffU) >> 0x1f) & 0xfffffff800000000 | (arg2 & 0xffffffffU) << 3) + 0x620,0xdc0
                      );
    if (pcVar7 == NULL) {
        _printk("memory allocation error while creating concatenated device \"%s\"\n",arg3);
        return NULL;
    }
    pcVar10 = *arg1;
    *(pcVar7 + 0x618) = pcVar7 + 0x620;
    cVar4 = *pcVar10;
    *pcVar7 = cVar4;
    uVar8 = *(pcVar10 + 4);
    *(pcVar7 + 4) = uVar8;
    *(pcVar7 + 8) = *(pcVar10 + 8);
    *(pcVar7 + 0x10) = *(pcVar10 + 0x10);
    *(pcVar7 + 0x14) = *(pcVar10 + 0x14);
    if (iVar24 < 1) {
        uVar15 = 0;
    }
    else {
        if (iVar24 == 1) {
            uVar12 = 0;
            uVar15 = 0;
        }
        else {
            uVar12 = arg2 & 0xfffffffe;
            piVar25 = arg1 + 8;
            uVar23 = uVar12;
            uVar16 = 0;
            uVar19 = 0;
            do {
                piVar1 = piVar25 + -1;
                iVar11 = *piVar25;
                piVar25 = piVar25 + 2;
                uVar15 = *(*piVar1 + 0x18);
                if (*(*piVar1 + 0x18) <= uVar16) {
                    uVar15 = uVar16;
                }
                uVar2 = *(iVar11 + 0x18);
                if (*(iVar11 + 0x18) <= uVar19) {
                    uVar2 = uVar19;
                }
                uVar23 = uVar23 - 2;
                uVar16 = uVar15;
                uVar19 = uVar2;
            } while (uVar23 != 0);
            if (uVar15 <= uVar2) {
                uVar15 = uVar2;
            }
            if (uVar12 == (arg2 & 0xffffffffU)) goto code_r0x08009634;
        }
        iVar11 = (arg2 & 0xffffffffU) - uVar12;
        piVar25 = arg1 + uVar12 * 8;
        uVar16 = uVar15;
        do {
            uVar15 = *(*piVar25 + 0x18);
            if (*(*piVar25 + 0x18) <= uVar16) {
                uVar15 = uVar16;
            }
            iVar11 = iVar11 + -1;
            piVar25 = piVar25 + 1;
            uVar16 = uVar15;
        } while (iVar11 != 0);
    }
code_r0x08009634:
    iVar11 = *arg1;
    *(pcVar7 + 0x18) = uVar15;
    *(pcVar7 + 0x188) = *(iVar11 + 0x188);
    *(pcVar7 + 0x1c) = *(iVar11 + 0x1c);
    *(pcVar7 + 0x20) = *(iVar11 + 0x20);
    do {
        iVar14 = iVar11;
        iVar11 = *(iVar14 + 0x568);
    } while (*(iVar14 + 0x568) != 0);
    if (*(iVar14 + 0xe8) != 0) {
        *(pcVar7 + 0xe8) = sym.concat_writev.8f101c1e8640207a5ff62187927e46fd.cfi_jt;
    }
    if (*(iVar14 + 0xa0) != 0) {
        *(pcVar7 + 0xa0) = sym.concat_read_oob.8f101c1e8640207a5ff62187927e46fd.cfi_jt;
    }
    if (*(iVar14 + 0xa8) != 0) {
        *(pcVar7 + 0xa8) = sym.concat_write_oob.8f101c1e8640207a5ff62187927e46fd.cfi_jt;
    }
    if (*(iVar14 + 0x118) != 0) {
        *(pcVar7 + 0x118) = sym.__typeid__ZTSFiP8mtd_infoxE_global_addr;
    }
    if (*(iVar14 + 0x120) != 0) {
        *(pcVar7 + 0x120) = sym.concat_block_markbad.8f101c1e8640207a5ff62187927e46fd.cfi_jt;
    }
    if (*(iVar14 + 0x98) != 0) {
        *(pcVar7 + 0x98) = sym.concat_panic_write.8f101c1e8640207a5ff62187927e46fd.cfi_jt;
    }
    if (*(iVar14 + 0x88) != 0) {
        *(pcVar7 + 0x88) = sym.concat_read.8f101c1e8640207a5ff62187927e46fd.cfi_jt;
    }
    if (*(iVar14 + 0x90) != 0) {
        *(pcVar7 + 0x90) = sym.concat_write.8f101c1e8640207a5ff62187927e46fd.cfi_jt;
    }
    uVar3 = *(*arg1 + 0x180);
    *(pcVar7 + 0x620) = *arg1;
    *(pcVar7 + 0x180) = uVar3;
    if (iVar24 < 2) {
code_r0x08009834:
        iVar11 = *arg1;
        uVar9 = *(iVar11 + 0x48);
        *(pcVar7 + 0x610) = iVar24;
        *(pcVar7 + 0x70) = sym.__typeid__ZTSFiP8mtd_infoP10erase_infoE_global_addr;
        *(pcVar7 + 0x38) = arg3;
        *(pcVar7 + 0x48) = uVar9;
        *(pcVar7 + 0xf0) = sym.__typeid__ZTSFvP8mtd_infoE_global_addr;
        *(pcVar7 + 0xf8) = sym.concat_lock.8f101c1e8640207a5ff62187927e46fd.cfi_jt;
        *(pcVar7 + 0x100) = sym.concat_unlock.8f101c1e8640207a5ff62187927e46fd.cfi_jt;
        *(pcVar7 + 0x108) = sym.concat_is_locked.8f101c1e8640207a5ff62187927e46fd.cfi_jt;
        *(pcVar7 + 0x130) = sym.concat_suspend.8f101c1e8640207a5ff62187927e46fd.cfi_jt;
        *(pcVar7 + 0x138) = sym.concat_resume.8f101c1e8640207a5ff62187927e46fd.cfi_jt;
        uVar8 = *(iVar11 + 0x10);
        uVar15 = uVar8;
        if (0 < iVar24) {
            uVar23 = 0;
            iVar24 = 1;
            uVar16 = *(iVar11 + 0x60);
            if (uVar16 == 0) goto code_r0x080098ec;
            do {
                uVar12 = uVar16;
                if (0 < uVar16) {
                    puVar13 = *(iVar11 + 0x68) + 8;
                    do {
                        uVar19 = *puVar13;
                        uVar16 = uVar19;
                        if (uVar19 <= uVar8) {
                            uVar16 = uVar8;
                        }
                        if (uVar19 != uVar15) {
                            iVar24 = iVar24 + 1;
                            uVar8 = uVar16;
                        }
                        uVar12 = uVar12 - 1;
                        puVar13 = puVar13 + 6;
                        uVar15 = uVar19;
                    } while (uVar12 != 0);
                }
                while( true ) {
                    uVar23 = uVar23 + 1;
                    if (uVar23 == (arg2 & 0xffffffffU)) {
                        if (iVar24 == 1) goto code_r0x08009a5c;
                        *(pcVar7 + 0x10) = uVar8;
                        auVar5._8_8_ = 0;
                        auVar5._0_8_ = iVar24;
                        *(pcVar7 + 0x60) = iVar24;
                        if (SUB168(auVar5 * ZEXT816(0x18),8) == 0) {
                            piVar25 = __kmalloc((iVar24 + iVar24 * 2) * 8,0xcc0);
                            *(pcVar7 + 0x68) = piVar25;
                            if (piVar25 != NULL) {
                                iVar18 = *arg1;
                                uVar23 = 0;
                                iVar11 = 0;
                                iVar14 = 0;
                                uVar8 = *(iVar18 + 0x10);
                                iVar24 = *(iVar18 + 0x60);
                                if (iVar24 == 0) goto code_r0x08009a04;
                                do {
                                    if (0 < iVar24) {
                                        iVar20 = 0;
                                        iVar21 = 0;
                                        do {
                                            iVar22 = *(iVar18 + 0x68);
                                            if (*(iVar22 + iVar20 + 8) != uVar8) {
                                                *piVar25 = iVar14;
                                                uVar3 = 0;
                                                if (uVar8 != 0) {
                                                    uVar3 = (iVar11 - iVar14) / uVar8;
                                                }
                                                *(piVar25 + 1) = uVar8;
                                                *(piVar25 + 0xc) = uVar3;
                                                piVar25 = piVar25 + 3;
                                                iVar18 = *(arg1 + uVar23 * 8);
                                                iVar22 = *(iVar18 + 0x68);
                                                uVar8 = *(iVar22 + iVar20 + 8);
                                                iVar14 = iVar11;
                                            }
                                            iVar22 = iVar22 + iVar20;
                                            iVar21 = iVar21 + 1;
                                            iVar20 = iVar20 + 0x18;
                                            iVar11 = iVar11 + *(iVar22 + 0xc) * uVar8;
                                        } while (iVar21 < *(iVar18 + 0x60));
                                    }
                                    while( true ) {
                                        uVar23 = uVar23 + 1;
                                        if (uVar23 == (arg2 & 0xffffffffU)) {
                                            *piVar25 = iVar14;
                                            uVar3 = 0;
                                            if (uVar8 != 0) {
                                                uVar3 = (iVar11 - iVar14) / uVar8;
                                            }
                                            *(piVar25 + 1) = uVar8;
                                            *(piVar25 + 0xc) = uVar3;
                                            return pcVar7;
                                        }
                                        iVar18 = *(arg1 + uVar23 * 8);
                                        iVar24 = *(iVar18 + 0x60);
                                        if (iVar24 != 0) break;
code_r0x08009a04:
                                        if (*(iVar18 + 0x10) != uVar8) {
                                            *piVar25 = iVar14;
                                            uVar3 = 0;
                                            if (uVar8 != 0) {
                                                uVar3 = (iVar11 - iVar14) / uVar8;
                                            }
                                            *(piVar25 + 1) = uVar8;
                                            *(piVar25 + 0xc) = uVar3;
                                            piVar25 = piVar25 + 3;
                                            iVar18 = *(arg1 + uVar23 * 8);
                                            uVar8 = *(iVar18 + 0x10);
                                            iVar14 = iVar11;
                                        }
                                        iVar11 = *(iVar18 + 8) + iVar11;
                                    }
                                } while( true );
                            }
                        }
                        else {
                            pcVar7[0x68] = '\0';
                            pcVar7[0x69] = '\0';
                            pcVar7[0x6a] = '\0';
                            pcVar7[0x6b] = '\0';
                            pcVar7[0x6c] = '\0';
                            pcVar7[0x6d] = '\0';
                            pcVar7[0x6e] = '\0';
                            pcVar7[0x6f] = '\0';
                        }
                        kfree(pcVar7);
                        pcVar7 = "memory allocation error while creating erase region list for device \"%s\"\n";
                        goto code_r0x08009b00;
                    }
                    iVar11 = *(arg1 + uVar23 * 8);
                    uVar16 = *(iVar11 + 0x60);
                    if (uVar16 != 0) break;
code_r0x080098ec:
                    uVar19 = *(iVar11 + 0x10);
                    uVar16 = uVar19;
                    if (uVar19 <= uVar8) {
                        uVar16 = uVar8;
                    }
                    if (uVar19 != uVar15) {
                        iVar24 = iVar24 + 1;
                        uVar8 = uVar16;
                        uVar15 = uVar19;
                    }
                }
            } while( true );
        }
code_r0x08009a5c:
        *(pcVar7 + 0x10) = uVar15;
        pcVar7[0x60] = '\0';
        pcVar7[0x61] = '\0';
        pcVar7[0x62] = '\0';
        pcVar7[99] = '\0';
    }
    else {
        piVar25 = arg1 + 8;
        pcVar10 = *piVar25;
        if (cVar4 == *pcVar10) {
            uVar23 = 1;
            while( true ) {
                uVar15 = *(pcVar10 + 4);
                pcVar6 = pcVar10;
                if (uVar8 != uVar15) {
                    if (((uVar15 ^ uVar8) & 0xfffffbff) != 0) {
                        kfree(pcVar7);
                        pcVar7 = "Incompatible device flags on \"%s\"\n";
                        arg3 = *(*piVar25 + 0x38);
                        goto code_r0x08009b00;
                    }
                    pcVar10 = *piVar25;
                    *(pcVar7 + 4) = uVar15 & 0x400 | uVar8;
                    pcVar6 = pcVar10;
                }
                do {
                    pcVar17 = pcVar6;
                    pcVar6 = *(pcVar17 + 0x568);
                } while (*(pcVar17 + 0x568) != NULL);
                iVar11 = *piVar25;
                *(pcVar7 + 8) = *(pcVar7 + 8) + *(pcVar10 + 8);
                *(pcVar7 + 0x180) = *(pcVar7 + 0x180) + *(iVar11 + 0x180);
                if ((((*(pcVar7 + 0x14) != *(iVar11 + 0x14)) || (*(pcVar7 + 0x188) != *(iVar11 + 0x188))) ||
                    (*(pcVar7 + 0x1c) != *(iVar11 + 0x1c))) ||
                   (((*(pcVar7 + 0xa0) != 0) == (*(pcVar17 + 0xa0) == 0) ||
                    ((*(pcVar7 + 0xa8) != 0) == (*(pcVar17 + 0xa8) == 0))))) {
                    kfree(pcVar7);
                    pcVar7 = "Incompatible OOB or ECC data on \"%s\"\n";
                    arg3 = *(*piVar25 + 0x38);
                    goto code_r0x08009b00;
                }
                *(*(pcVar7 + 0x618) + uVar23 * 8) = iVar11;
                uVar23 = uVar23 + 1;
                if (uVar23 == (arg2 & 0xffffffffU)) goto code_r0x08009834;
                piVar25 = arg1 + uVar23 * 8;
                pcVar10 = *piVar25;
                if (*pcVar7 != *pcVar10) break;
                uVar8 = *(pcVar7 + 4);
            }
        }
        kfree(pcVar7);
        pcVar7 = "Incompatible device type on \"%s\"\n";
        arg3 = *(*piVar25 + 0x38);
code_r0x08009b00:
        _printk(pcVar7,arg3);
        pcVar7 = NULL;
    }
    return pcVar7;
}


// ===== sym.concat_writev @ 0x08009b28 (size 560) =====

uint64_t sym.concat_writev(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t *arg3_00;
    int64_t *in_x4;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t *puVar9;
    int64_t *piVar10;
    uint64_t uVar11;
    int64_t iVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t *unaff_x19;
    uint32_t uVar13;
    int64_t unaff_x23;
    uint64_t uVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    ulong unaff_x30;
    uchar auVar17 [16];
    int64_t iStack_198;
    int64_t iStack_190;
    int64_t iStack_188;
    int64_t iStack_180;
    int64_t iStack_178;
    int64_t iStack_170;
    int64_t iStack_168;
    int64_t iStack_160;
    int64_t iStack_158;
    uchar **ppuStack_150;
    code *pcStack_148;
    int64_t iStack_140;
    int64_t iStack_130;
    int64_t *piStack_128;
    int64_t iStack_118;
    int64_t iStack_110;
    int64_t iStack_108;
    int64_t iStack_100;
    int64_t iStack_f8;
    int64_t iStack_f0;
    int64_t iStack_e8;
    int64_t iStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    int64_t iStack_c0;
    uint64_t uStack_b0;
    int64_t iStack_a8;
    int64_t iStack_a0;
    int64_t *piStack_98;
    int64_t iStack_88;
    int64_t *piStack_80;
    int64_t iStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    if (arg3 == 0) {
        uVar14 = 0;
    }
    else {
        uVar7 = 0;
        uVar14 = 0;
        do {
            iVar4 = uVar7 * 0x10;
            uVar7 = uVar7 + 1;
            uVar14 = *(arg2 + iVar4 + 8) + uVar14;
        } while (uVar7 < arg3);
    }
    uVar7 = *(arg1 + 0x14);
    if (*(arg1 + 0x14) < 2) {
code_r0x08009bc8:
        piVar10 = 0xcc0;
        piStack_80 = in_x4;
        iStack_78 = kmemdup(arg2,arg3 << 4);
        if (iStack_78 == 0) {
            uVar14 = 0xfffffff4;
        }
        else {
            iVar3 = *(arg1 + 0x610);
            if (0 < iVar3) {
                iVar4 = 0;
                uVar7 = 0;
                iStack_88 = iStack_78 + 8;
                do {
                    iVar6 = *(*(arg1 + 0x618) + iVar4 * 8);
                    iStack_70 = 0;
                    uVar11 = *(iVar6 + 8);
                    uVar8 = arg4 - uVar11;
                    if (arg4 < uVar11) {
                        uVar8 = uVar14;
                        if (uVar11 - arg4 <= uVar14) {
                            uVar8 = uVar11 - arg4;
                        }
                        uVar11 = uVar8;
                        uVar16 = uVar7;
                        if (uVar7 < arg3) {
                            puVar9 = iStack_88 + uVar7 * 0x10;
                            uVar15 = uVar7;
                            do {
                                uVar1 = uVar11 - *puVar9;
                                uVar16 = uVar15;
                                if (uVar11 < *puVar9 || uVar1 == 0) break;
                                uVar15 = uVar15 + 1;
                                puVar9 = puVar9 + 2;
                                uVar11 = uVar1;
                                uVar16 = arg3;
                            } while (arg3 != uVar15);
                        }
                        piVar10 = (uVar16 - uVar7) + 1;
                        unaff_x19 = iStack_78 + uVar16 * 0x10;
                        unaff_x23 = unaff_x19[1];
                        unaff_x19[1] = uVar11;
                        uVar2 = sym.mtd_writev(iVar6,iStack_78 + uVar7 * 0x10,piVar10,arg4);
                        *unaff_x19 = *unaff_x19 + uVar11;
                        unaff_x19[1] = unaff_x23 - uVar11;
                        if (uVar2 != 0) {
                            uVar14 = uVar2;
                            goto code_r0x08009cf4;
                        }
                        uVar14 = uVar14 - uVar8;
                        *piStack_80 = *piStack_80 + iStack_70;
                        if (uVar14 == 0) {
                            uVar14 = 0;
                            goto code_r0x08009cf4;
                        }
                        uVar8 = 0;
                        iVar3 = *(arg1 + 0x610);
                        uVar7 = uVar16;
                    }
                    iVar4 = iVar4 + 1;
                    arg4 = uVar8;
                } while (iVar4 < iVar3);
            }
            uVar14 = 0xffffffea;
code_r0x08009cf4:
            kfree(iStack_78);
        }
    }
    else {
        uVar8 = 0;
        if (uVar7 != 0) {
            uVar8 = arg4 / uVar7;
        }
        if (arg4 == uVar8 * uVar7) {
            uVar8 = 0;
            if (uVar7 != 0) {
                uVar8 = uVar14 / uVar7;
            }
            if (uVar14 == uVar8 * uVar7) goto code_r0x08009bc8;
        }
        uVar14 = 0xffffffea;
        piVar10 = arg3;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_68) {
        return uVar14;
    }
    auVar17 = __stack_chk_fail();
    iVar6 = auVar17._0_8_;
    *extraout_x18 = sym.concat_read_oob;
    pcStack_c8 = sym.concat_read_oob;
    iVar4 = sp_el0;
    iStack_d8 = *(iVar4 + 0x5e0);
    iStack_f8 = piVar10[4];
    iStack_f0 = piVar10[5];
    piVar10[4] = 0;
    iStack_e8 = piVar10[6];
    iStack_e0 = piVar10[7];
    iStack_108 = piVar10[2];
    iStack_100 = piVar10[3];
    piVar10[2] = 0;
    iStack_118 = *piVar10;
    iStack_110 = piVar10[1];
    arg3_00 = piVar10;
    puStack_d0 = &stack0xffffffffffffffa0;
    iStack_c0 = unaff_x23;
    uStack_b0 = uVar14;
    iStack_a8 = arg1;
    iStack_a0 = arg3;
    piStack_98 = unaff_x19;
    if (0 < *(iVar6 + 0x610)) {
        uVar2 = 0;
        uVar14 = auVar17._8_8_;
        arg1 = 0;
        do {
            iVar4 = *(*(iVar6 + 0x618) + arg1 * 8);
            uVar8 = *(iVar4 + 8);
            uVar7 = uVar14 - uVar8;
            if (uVar14 < uVar8) {
                if (uVar8 < iStack_110 + uVar14) {
                    iStack_110 = uVar8 - uVar14;
                }
                arg3_00 = &iStack_118;
                uVar14 = sym.mtd_read_oob(iVar4,uVar14,arg3_00);
                piVar10[2] = piVar10[2] + iStack_108;
                piVar10[4] = piVar10[4] + iStack_f8;
                iVar3 = uVar14;
                uVar13 = uVar2;
                if (iVar3 != 0) {
                    if (iVar3 == -0x4a) {
                        uVar13 = 0xffffffb6;
                        *(iVar6 + 0x17c) = *(iVar6 + 0x17c) + 1;
                    }
                    else {
                        if (iVar3 != -0x75) goto code_r0x08009ed4;
                        uVar13 = 0xffffff8b;
                        if (uVar2 != 0) {
                            uVar13 = uVar2;
                        }
                        *(iVar6 + 0x178) = *(iVar6 + 0x178) + 1;
                    }
                }
                if (iStack_e8 != 0) {
                    iStack_110 = piVar10[1] - piVar10[2];
                    if (iStack_110 != 0) {
                        iStack_e8 = iStack_e8 + iStack_108;
                        goto code_r0x08009e5c;
                    }
code_r0x08009ed0:
                    uVar14 = uVar13;
                    goto code_r0x08009ed4;
                }
code_r0x08009e5c:
                uVar2 = uVar13;
                if (iStack_e0 == 0) {
                    uVar7 = 0;
                }
                else {
                    iStack_100 = piVar10[3] - piVar10[4];
                    if (iStack_100 == 0) goto code_r0x08009ed0;
                    iStack_e0 = iStack_e0 + piVar10[4];
                    uVar7 = 0;
                }
            }
            arg1 = arg1 + 1;
            uVar14 = uVar7;
            unaff_x19 = piVar10;
            arg3 = iVar6;
        } while (arg1 < *(iVar6 + 0x610));
    }
    uVar14 = 0xffffffea;
    piVar10 = unaff_x19;
    iVar6 = arg3;
code_r0x08009ed4:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_d8) {
        return uVar14;
    }
    auVar17 = __stack_chk_fail(uVar14);
    iVar5 = auVar17._0_8_;
    *extraout_x18_00 = sym.concat_write_oob;
    pcStack_148 = sym.concat_write_oob;
    iVar4 = sp_el0;
    iStack_158 = *(iVar4 + 0x5e0);
    iStack_178 = arg3_00[4];
    iStack_170 = arg3_00[5];
    iStack_168 = arg3_00[6];
    iStack_160 = arg3_00[7];
    iStack_198 = *arg3_00;
    iStack_190 = arg3_00[1];
    iStack_188 = arg3_00[2];
    iStack_180 = arg3_00[3];
    ppuStack_150 = &puStack_d0;
    iStack_140 = arg1;
    iStack_130 = iVar6;
    piStack_128 = piVar10;
    if ((*(iVar5 + 5) >> 2 & 1) == 0) {
        uVar14 = 0xffffffe2;
    }
    else {
        arg3_00[4] = 0;
        arg3_00[2] = 0;
        if (0 < *(iVar5 + 0x610)) {
            iVar4 = 0;
            uVar14 = auVar17._8_8_;
            do {
                iVar6 = *(*(iVar5 + 0x618) + iVar4 * 8);
                uVar8 = *(iVar6 + 8);
                uVar7 = uVar14 - uVar8;
                if (uVar14 < uVar8) {
                    if (uVar8 < iStack_190 + uVar14) {
                        iStack_190 = uVar8 - uVar14;
                    }
                    uVar14 = sym.mtd_write_oob(iVar6,uVar14,&iStack_198);
                    iVar6 = arg3_00[2];
                    iVar12 = arg3_00[4];
                    arg3_00[2] = iVar6 + iStack_188;
                    arg3_00[4] = iVar12 + iStack_178;
                    if (uVar14 != 0) goto code_r0x0800a050;
                    if (iStack_168 != 0) {
                        iStack_190 = arg3_00[1] - (iVar6 + iStack_188);
                        if (iStack_190 != 0) {
                            iStack_168 = iStack_168 + iStack_188;
                            goto code_r0x0800a014;
                        }
code_r0x0800a04c:
                        uVar14 = 0;
                        goto code_r0x0800a050;
                    }
code_r0x0800a014:
                    if (iStack_160 == 0) {
                        uVar7 = 0;
                    }
                    else {
                        iStack_180 = arg3_00[3] - (iVar12 + iStack_178);
                        if (iStack_180 == 0) goto code_r0x0800a04c;
                        iStack_160 = iStack_160 + iStack_178;
                        uVar7 = 0;
                    }
                }
                iVar4 = iVar4 + 1;
                uVar14 = uVar7;
            } while (iVar4 < *(iVar5 + 0x610));
        }
        uVar14 = 0xffffffea;
    }
code_r0x0800a050:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_158) {
        return uVar14;
    }
    auVar17 = __stack_chk_fail(uVar14);
    uVar14 = auVar17._8_8_;
    *extraout_x18_01 = sym.concat_block_isbad;
    piVar10 = *(auVar17._0_8_ + 0x618);
    iVar6 = *piVar10;
    iVar4 = iVar6;
    do {
        iVar5 = iVar4;
        iVar4 = *(iVar5 + 0x568);
    } while (iVar4 != 0);
    if ((*(iVar5 + 0x118) == 0) || (uVar2 = *(auVar17._0_8_ + 0x610), uVar7 = uVar2, uVar2 < 1)) {
code_r0x0800a0fc:
        uVar14 = 0;
    }
    else {
        uVar8 = *(iVar6 + 8);
        if (uVar8 <= uVar14) {
            do {
                uVar7 = uVar7 - 1;
                piVar10 = piVar10 + 1;
                if (uVar7 == 0) goto code_r0x0800a0fc;
                iVar6 = *piVar10;
                uVar14 = uVar14 - uVar8;
                uVar8 = *(iVar6 + 8);
            } while (uVar8 <= uVar14);
        }
        uVar14 = sym.mtd_block_isbad(iVar6,uVar14);
    }
    return uVar14;
}


// ===== sym.concat_read_oob @ 0x08009d58 (size 436) =====

uint64_t sym.concat_read_oob(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *arg3_00;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x19;
    int64_t unaff_x20;
    int64_t unaff_x21;
    uint32_t uVar10;
    uint32_t uVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    ulong uStack_108;
    int64_t iStack_100;
    int64_t iStack_f8;
    int64_t iStack_f0;
    int64_t iStack_e8;
    ulong uStack_e0;
    int64_t iStack_d8;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    int64_t iStack_b0;
    int64_t iStack_a0;
    int64_t iStack_98;
    ulong uStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_48 = *(iVar2 + 0x5e0);
    iStack_68 = *(arg3 + 0x20);
    uStack_60 = *(arg3 + 0x28);
    *(arg3 + 0x20) = 0;
    iStack_58 = *(arg3 + 0x30);
    iStack_50 = *(arg3 + 0x38);
    iStack_78 = *(arg3 + 0x10);
    iStack_70 = *(arg3 + 0x18);
    *(arg3 + 0x10) = 0;
    uStack_88 = *arg3;
    iStack_80 = *(arg3 + 8);
    arg3_00 = arg3;
    if (0 < *(arg1 + 0x610)) {
        unaff_x21 = 0;
        uVar10 = 0;
        do {
            iVar2 = *(*(arg1 + 0x618) + unaff_x21 * 8);
            uVar6 = *(iVar2 + 8);
            uVar3 = arg2 - uVar6;
            if (arg2 < uVar6) {
                if (uVar6 < iStack_80 + arg2) {
                    iStack_80 = uVar6 - arg2;
                }
                arg3_00 = &uStack_88;
                uVar3 = sym.mtd_read_oob(iVar2,arg2,arg3_00);
                *(arg3 + 0x10) = *(arg3 + 0x10) + iStack_78;
                *(arg3 + 0x20) = *(arg3 + 0x20) + iStack_68;
                iVar1 = uVar3;
                uVar11 = uVar10;
                if (iVar1 != 0) {
                    if (iVar1 == -0x4a) {
                        uVar11 = 0xffffffb6;
                        *(arg1 + 0x17c) = *(arg1 + 0x17c) + 1;
                    }
                    else {
                        if (iVar1 != -0x75) goto code_r0x08009ed4;
                        uVar11 = 0xffffff8b;
                        if (uVar10 != 0) {
                            uVar11 = uVar10;
                        }
                        *(arg1 + 0x178) = *(arg1 + 0x178) + 1;
                    }
                }
                if (iStack_58 != 0) {
                    iStack_80 = *(arg3 + 8) - *(arg3 + 0x10);
                    if (iStack_80 != 0) {
                        iStack_58 = iStack_58 + iStack_78;
                        goto code_r0x08009e5c;
                    }
code_r0x08009ed0:
                    uVar3 = uVar11;
                    goto code_r0x08009ed4;
                }
code_r0x08009e5c:
                uVar10 = uVar11;
                if (iStack_50 == 0) {
                    uVar3 = 0;
                }
                else {
                    iStack_70 = *(arg3 + 0x18) - *(arg3 + 0x20);
                    if (iStack_70 == 0) goto code_r0x08009ed0;
                    iStack_50 = iStack_50 + *(arg3 + 0x20);
                    uVar3 = 0;
                }
            }
            unaff_x21 = unaff_x21 + 1;
            arg2 = uVar3;
            unaff_x19 = arg3;
            unaff_x20 = arg1;
        } while (unaff_x21 < *(arg1 + 0x610));
    }
    uVar3 = 0xffffffea;
    arg3 = unaff_x19;
    arg1 = unaff_x20;
code_r0x08009ed4:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_48) {
        return uVar3;
    }
    auVar12 = __stack_chk_fail(uVar3);
    iVar5 = auVar12._0_8_;
    *extraout_x18 = sym.concat_write_oob;
    pcStack_b8 = sym.concat_write_oob;
    iVar2 = sp_el0;
    iStack_c8 = *(iVar2 + 0x5e0);
    iStack_e8 = arg3_00[4];
    uStack_e0 = arg3_00[5];
    iStack_d8 = arg3_00[6];
    iStack_d0 = arg3_00[7];
    uStack_108 = *arg3_00;
    iStack_100 = arg3_00[1];
    iStack_f8 = arg3_00[2];
    iStack_f0 = arg3_00[3];
    puStack_c0 = &stack0xffffffffffffffc0;
    iStack_b0 = unaff_x21;
    iStack_a0 = arg1;
    iStack_98 = arg3;
    if ((*(iVar5 + 5) >> 2 & 1) == 0) {
        uVar3 = 0xffffffe2;
    }
    else {
        arg3_00[4] = 0;
        arg3_00[2] = 0;
        if (0 < *(iVar5 + 0x610)) {
            iVar2 = 0;
            uVar3 = auVar12._8_8_;
            do {
                iVar4 = *(*(iVar5 + 0x618) + iVar2 * 8);
                uVar7 = *(iVar4 + 8);
                uVar6 = uVar3 - uVar7;
                if (uVar3 < uVar7) {
                    if (uVar7 < iStack_100 + uVar3) {
                        iStack_100 = uVar7 - uVar3;
                    }
                    uVar3 = sym.mtd_write_oob(iVar4,uVar3,&uStack_108);
                    iVar4 = arg3_00[2];
                    iVar9 = arg3_00[4];
                    arg3_00[2] = iVar4 + iStack_f8;
                    arg3_00[4] = iVar9 + iStack_e8;
                    if (uVar3 != 0) goto code_r0x0800a050;
                    if (iStack_d8 != 0) {
                        iStack_100 = arg3_00[1] - (iVar4 + iStack_f8);
                        if (iStack_100 != 0) {
                            iStack_d8 = iStack_d8 + iStack_f8;
                            goto code_r0x0800a014;
                        }
code_r0x0800a04c:
                        uVar3 = 0;
                        goto code_r0x0800a050;
                    }
code_r0x0800a014:
                    if (iStack_d0 == 0) {
                        uVar6 = 0;
                    }
                    else {
                        iStack_f0 = arg3_00[3] - (iVar9 + iStack_e8);
                        if (iStack_f0 == 0) goto code_r0x0800a04c;
                        iStack_d0 = iStack_d0 + iStack_e8;
                        uVar6 = 0;
                    }
                }
                iVar2 = iVar2 + 1;
                uVar3 = uVar6;
            } while (iVar2 < *(iVar5 + 0x610));
        }
        uVar3 = 0xffffffea;
    }
code_r0x0800a050:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_c8) {
        return uVar3;
    }
    auVar12 = __stack_chk_fail(uVar3);
    uVar3 = auVar12._8_8_;
    *extraout_x18_00 = sym.concat_block_isbad;
    piVar8 = *(auVar12._0_8_ + 0x618);
    iVar5 = *piVar8;
    iVar2 = iVar5;
    do {
        iVar4 = iVar2;
        iVar2 = *(iVar4 + 0x568);
    } while (iVar2 != 0);
    if ((*(iVar4 + 0x118) == 0) || (uVar10 = *(auVar12._0_8_ + 0x610), uVar6 = uVar10, uVar10 < 1)) {
code_r0x0800a0fc:
        uVar3 = 0;
    }
    else {
        uVar7 = *(iVar5 + 8);
        if (uVar7 <= uVar3) {
            do {
                uVar6 = uVar6 - 1;
                piVar8 = piVar8 + 1;
                if (uVar6 == 0) goto code_r0x0800a0fc;
                iVar5 = *piVar8;
                uVar3 = uVar3 - uVar7;
                uVar7 = *(iVar5 + 8);
            } while (uVar7 <= uVar3);
        }
        uVar3 = sym.mtd_block_isbad(iVar5,uVar3);
    }
    return uVar3;
}


// ===== sym.concat_write_oob @ 0x08009f0c (size 376) =====

ulong sym.concat_write_oob(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t *piVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar10 [16];
    ulong uStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    iStack_58 = *(arg3 + 0x20);
    uStack_50 = *(arg3 + 0x28);
    iStack_48 = *(arg3 + 0x30);
    iStack_40 = *(arg3 + 0x38);
    uStack_78 = *arg3;
    iStack_70 = *(arg3 + 8);
    iStack_68 = *(arg3 + 0x10);
    iStack_60 = *(arg3 + 0x18);
    if ((*(arg1 + 5) >> 2 & 1) == 0) {
        uVar2 = 0xffffffe2;
    }
    else {
        *(arg3 + 0x20) = 0;
        *(arg3 + 0x10) = 0;
        if (0 < *(arg1 + 0x610)) {
            iVar9 = 0;
            do {
                iVar3 = *(*(arg1 + 0x618) + iVar9 * 8);
                uVar7 = *(iVar3 + 8);
                uVar4 = arg2 - uVar7;
                if (arg2 < uVar7) {
                    if (uVar7 < iStack_70 + arg2) {
                        iStack_70 = uVar7 - arg2;
                    }
                    uVar2 = sym.mtd_write_oob(iVar3,arg2,&uStack_78);
                    iVar3 = *(arg3 + 0x10) + iStack_68;
                    iVar8 = *(arg3 + 0x20) + iStack_58;
                    *(arg3 + 0x10) = iVar3;
                    *(arg3 + 0x20) = iVar8;
                    if (uVar2 != 0) goto code_r0x0800a050;
                    if (iStack_48 != 0) {
                        iStack_70 = *(arg3 + 8) - iVar3;
                        if (iStack_70 != 0) {
                            iStack_48 = iStack_48 + iStack_68;
                            goto code_r0x0800a014;
                        }
code_r0x0800a04c:
                        uVar2 = 0;
                        goto code_r0x0800a050;
                    }
code_r0x0800a014:
                    if (iStack_40 == 0) {
                        uVar4 = 0;
                    }
                    else {
                        iStack_60 = *(arg3 + 0x18) - iVar8;
                        if (iStack_60 == 0) goto code_r0x0800a04c;
                        iStack_40 = iStack_40 + iStack_58;
                        uVar4 = 0;
                    }
                }
                iVar9 = iVar9 + 1;
                arg2 = uVar4;
            } while (iVar9 < *(arg1 + 0x610));
        }
        uVar2 = 0xffffffea;
    }
code_r0x0800a050:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    auVar10 = __stack_chk_fail(uVar2);
    uVar4 = auVar10._8_8_;
    *extraout_x18 = sym.concat_block_isbad;
    piVar6 = *(auVar10._0_8_ + 0x618);
    iVar3 = *piVar6;
    iVar9 = iVar3;
    do {
        iVar8 = iVar9;
        iVar9 = *(iVar8 + 0x568);
    } while (iVar9 != 0);
    if ((*(iVar8 + 0x118) == 0) || (uVar1 = *(auVar10._0_8_ + 0x610), uVar7 = uVar1, uVar1 < 1)) {
code_r0x0800a0fc:
        uVar2 = 0;
    }
    else {
        uVar5 = *(iVar3 + 8);
        if (uVar5 <= uVar4) {
            do {
                uVar7 = uVar7 - 1;
                piVar6 = piVar6 + 1;
                if (uVar7 == 0) goto code_r0x0800a0fc;
                iVar3 = *piVar6;
                uVar4 = uVar4 - uVar5;
                uVar5 = *(iVar3 + 8);
            } while (uVar5 <= uVar4);
        }
        uVar2 = sym.mtd_block_isbad(iVar3,uVar4);
    }
    return uVar2;
}


// ===== sym.concat_block_isbad @ 0x0800a084 (size 140) =====

ulong sym.concat_block_isbad(int64_t arg1,uint32_t arg2)

{
    int64_t arg1_00;
    ulong uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar2 = arg2;
    *in_x18 = unaff_x30;
    piVar4 = *(arg1 + 0x618);
    arg1_00 = *piVar4;
    iVar7 = arg1_00;
    do {
        iVar6 = iVar7;
        iVar7 = *(iVar6 + 0x568);
    } while (iVar7 != 0);
    if ((*(iVar6 + 0x118) == 0) || (uVar5 = *(arg1 + 0x610), *(arg1 + 0x610) < 1)) {
code_r0x0800a0fc:
        uVar1 = 0;
    }
    else {
        uVar3 = *(arg1_00 + 8);
        if (uVar3 <= uVar2) {
            do {
                uVar5 = uVar5 - 1;
                piVar4 = piVar4 + 1;
                if (uVar5 == 0) goto code_r0x0800a0fc;
                arg1_00 = *piVar4;
                uVar2 = uVar2 - uVar3;
                uVar3 = *(arg1_00 + 8);
            } while (uVar3 <= uVar2);
        }
        uVar1 = sym.mtd_block_isbad(arg1_00,uVar2);
    }
    return uVar1;
}


// ===== sym.concat_block_markbad @ 0x0800a110 (size 120) =====

ulong sym.concat_block_markbad(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(arg1 + 0x610);
    if (0 < *(arg1 + 0x610)) {
        piVar3 = *(arg1 + 0x618);
        do {
            uVar4 = *(*piVar3 + 8);
            if (arg2 < uVar4) {
                uVar1 = sym.mtd_block_markbad(*piVar3,arg2);
                if (uVar1 != 0) {
                    return uVar1;
                }
                *(arg1 + 0x180) = *(arg1 + 0x180) + 1;
                return uVar1;
            }
            uVar2 = uVar2 - 1;
            piVar3 = piVar3 + 1;
            arg2 = arg2 - uVar4;
        } while (uVar2 != 0);
    }
    return 0xffffffea;
}


// ===== sym.concat_panic_write @ 0x0800a188 (size 284) =====

uint64_t sym.concat_panic_write(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    code *pcVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint64_t *puVar7;
    uint64_t uVar8;
    uint64_t *puVar9;
    int64_t *piVar10;
    int64_t *piVar11;
    int64_t in_x4;
    uint64_t *puVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    uint32_t uVar16;
    uint32_t uVar17;
    int64_t iVar18;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t unaff_x19;
    int64_t *unaff_x20;
    int64_t unaff_x21;
    int64_t unaff_x22;
    int64_t unaff_x23;
    int64_t unaff_x24;
    int64_t iVar19;
    ulong unaff_x30;
    uchar auVar20 [16];
    int64_t iStack_100;
    int64_t iStack_f8;
    uchar **ppuStack_f0;
    code *pcStack_e8;
    int64_t iStack_e0;
    int64_t iStack_d8;
    int64_t iStack_d0;
    int64_t iStack_c8;
    int64_t *piStack_c0;
    int64_t iStack_b8;
    int64_t iStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    iVar2 = *(arg1 + 0x610);
    piVar10 = arg4;
    if (0 < iVar2) {
        unaff_x24 = 0;
        unaff_x19 = in_x4;
        unaff_x22 = arg3;
        do {
            iVar4 = *(*(arg1 + 0x618) + unaff_x24 * 8);
            iStack_50 = 0;
            uVar13 = *(iVar4 + 8);
            uVar5 = arg2 - uVar13;
            if (arg2 < uVar13) {
                unaff_x23 = uVar13 - arg2;
                if (unaff_x22 + arg2 <= uVar13) {
                    unaff_x23 = unaff_x22;
                }
                arg3 = unaff_x23;
                piVar10 = &iStack_50;
                in_x4 = unaff_x19;
                uVar5 = sym.mtd_panic_write(iVar4,arg2,unaff_x23,&iStack_50);
                if (uVar5 != 0) {
                    if (uVar5 == -0x5f) {
                        _printk(0x8001800);
                        uVar5 = 0xffffffa1;
                    }
                    goto code_r0x0800a250;
                }
                unaff_x22 = unaff_x22 - unaff_x23;
                *arg4 = *arg4 + iStack_50;
                if (unaff_x22 == 0) goto code_r0x0800a250;
                uVar5 = 0;
                unaff_x19 = unaff_x19 + unaff_x23;
                iVar2 = *(arg1 + 0x610);
            }
            unaff_x24 = unaff_x24 + 1;
            arg2 = uVar5;
            unaff_x20 = arg4;
            unaff_x21 = arg1;
        } while (unaff_x24 < iVar2);
    }
    arg1 = unaff_x21;
    arg4 = unaff_x20;
    uVar5 = 0xffffffea;
code_r0x0800a250:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return uVar5;
    }
    auVar20 = __stack_chk_fail(uVar5);
    iStack_c8 = auVar20._0_8_;
    *extraout_x18 = sym.concat_read;
    pcStack_98 = sym.concat_read;
    ppuStack_f0 = &puStack_a0;
    iVar4 = sp_el0;
    iStack_a8 = *(iVar4 + 0x5e0);
    iVar2 = *(iStack_c8 + 0x610);
    piVar11 = piVar10;
    puStack_a0 = &stack0xffffffffffffffc0;
    if (0 < iVar2) {
        unaff_x24 = 0;
        uVar13 = 0;
        uVar5 = auVar20._8_8_;
        unaff_x19 = in_x4;
        unaff_x22 = arg3;
        do {
            iVar4 = *(*(iStack_c8 + 0x618) + unaff_x24 * 8);
            iStack_b0 = 0;
            uVar14 = *(iVar4 + 8);
            uVar8 = uVar5 - uVar14;
            if (uVar5 < uVar14) {
                unaff_x23 = uVar14 - uVar5;
                if (uVar5 + unaff_x22 <= uVar14) {
                    unaff_x23 = unaff_x22;
                }
                arg3 = unaff_x23;
                piVar11 = &iStack_b0;
                uVar5 = sym.mtd_read(iVar4,uVar5,unaff_x23,&iStack_b0);
                iVar2 = uVar5;
                if (iVar2 != 0) {
                    if (iVar2 == -0x4a) {
                        *(iStack_c8 + 0x17c) = *(iStack_c8 + 0x17c) + 1;
                        uVar13 = 0xffffffb6;
                    }
                    else {
                        if (iVar2 != -0x75) goto code_r0x0800a3bc;
                        uVar3 = 0xffffff8b;
                        if (uVar13 != 0) {
                            uVar3 = uVar13;
                        }
                        *(iStack_c8 + 0x178) = *(iStack_c8 + 0x178) + 1;
                        uVar13 = uVar3;
                    }
                }
                uVar5 = uVar13;
                unaff_x22 = unaff_x22 - unaff_x23;
                *piVar10 = *piVar10 + iStack_b0;
                if (unaff_x22 == 0) goto code_r0x0800a3bc;
                uVar8 = 0;
                unaff_x19 = unaff_x19 + unaff_x23;
                iVar2 = *(iStack_c8 + 0x610);
                uVar13 = uVar5;
            }
            unaff_x24 = unaff_x24 + 1;
            uVar5 = uVar8;
            arg4 = piVar10;
            arg1 = iStack_c8;
        } while (unaff_x24 < iVar2);
    }
    uVar5 = 0xffffffea;
    piVar10 = arg4;
    iStack_c8 = arg1;
code_r0x0800a3bc:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_a8) {
        return uVar5;
    }
    auVar20 = __stack_chk_fail(uVar5);
    iVar19 = auVar20._0_8_;
    *extraout_x18_00 = sym.concat_write;
    pcStack_e8 = sym.concat_write;
    iVar4 = sp_el0;
    iStack_f8 = *(iVar4 + 0x5e0);
    iVar2 = *(iVar19 + 0x610);
    iStack_e0 = unaff_x24;
    iStack_d8 = unaff_x23;
    iStack_d0 = unaff_x22;
    piStack_c0 = piVar10;
    iStack_b8 = unaff_x19;
    if (0 < iVar2) {
        iVar4 = 0;
        uVar5 = auVar20._8_8_;
        do {
            iVar6 = *(*(iVar19 + 0x618) + iVar4 * 8);
            iStack_100 = 0;
            uVar8 = *(iVar6 + 8);
            uVar13 = uVar5 - uVar8;
            if (uVar5 < uVar8) {
                iVar18 = uVar8 - uVar5;
                if (arg3 + uVar5 <= uVar8) {
                    iVar18 = arg3;
                }
                uVar5 = sym.mtd_write(iVar6,uVar5,iVar18,&iStack_100);
                if (uVar5 != 0) goto code_r0x0800a4c0;
                arg3 = arg3 - iVar18;
                *piVar11 = *piVar11 + iStack_100;
                if (arg3 == 0) goto code_r0x0800a4c0;
                uVar13 = 0;
                iVar2 = *(iVar19 + 0x610);
            }
            iVar4 = iVar4 + 1;
            uVar5 = uVar13;
        } while (iVar4 < iVar2);
    }
    uVar5 = 0xffffffea;
code_r0x0800a4c0:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_f8) {
        return uVar5;
    }
    auVar20 = __stack_chk_fail(uVar5);
    puVar9 = auVar20._8_8_;
    iVar4 = auVar20._0_8_;
    *extraout_x18_01 = sym.concat_erase;
    uVar3 = *(iVar4 + 0x60);
    if (uVar3 == 0) {
        uVar5 = *(iVar4 + 0x10) - 1;
        if (((*puVar9 & uVar5) == 0) && ((puVar9[1] & uVar5) == 0)) {
code_r0x0800a634:
            iVar19 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar19 = 0x30;
            }
            puVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar19),0xcc0,0x18);
            if (puVar7 == NULL) {
                return 0xfffffff4;
            }
            uVar5 = puVar9[1];
            uVar3 = *(iVar4 + 0x610);
            uVar13 = puVar9[2];
            *puVar7 = *puVar9;
            puVar7[1] = uVar5;
            puVar7[2] = uVar13;
            if (0 < uVar3) {
                uVar13 = 0;
                iVar19 = 0;
                iVar6 = *(iVar4 + 0x618);
                uVar8 = *puVar7;
                do {
                    iVar18 = *(iVar6 + uVar13 * 8);
                    uVar15 = *(iVar18 + 8);
                    uVar14 = uVar8 - uVar15;
                    if (uVar8 < uVar15) {
                        if (uVar5 != 0) goto code_r0x0800a6cc;
                        goto code_r0x0800a748;
                    }
                    *puVar7 = uVar14;
                    uVar13 = uVar13 + 1;
                    iVar19 = *(iVar18 + 8) + iVar19;
                    uVar8 = uVar14;
                } while (uVar3 != uVar13);
            }
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x800a6c8);
            (*pcVar1)();
        }
    }
    else if (0 < uVar3) {
        puVar12 = *(iVar4 + 0x68);
        uVar5 = 0;
        uVar13 = *puVar9;
        puVar7 = puVar12;
        do {
            if (uVar13 < *puVar7) goto code_r0x0800a564;
            uVar5 = uVar5 + 1;
            puVar7 = puVar7 + 3;
        } while (uVar3 != uVar5);
        uVar5 = uVar3;
code_r0x0800a564:
        iVar2 = uVar5;
        if ((iVar2 != 0) && (uVar16 = iVar2 - 1, (uVar13 & puVar12[uVar16 * 3 + 1] - 1) == 0)) {
            uVar17 = uVar16;
            if (iVar2 <= uVar3) {
                puVar7 = puVar12 + uVar16 * 3;
                do {
                    uVar17 = uVar16;
                    if (puVar9[1] + uVar13 < *puVar7) break;
                    uVar16 = uVar16 + 1;
                    puVar7 = puVar7 + 3;
                    uVar17 = uVar3;
                } while (uVar3 != uVar16);
            }
            if ((-1 < uVar17 - 1) && ((puVar9[1] + uVar13 & puVar12[(uVar17 - 1) * 3 + 1] - 1U) == 0))
            goto code_r0x0800a634;
        }
    }
    return 0xffffffea;
code_r0x0800a6cc:
    iVar6 = *(iVar6 + uVar13 * 8);
    uVar14 = *(iVar6 + 8) - uVar8;
    if (uVar5 + uVar8 <= *(iVar6 + 8)) {
        uVar14 = uVar5;
    }
    puVar7[1] = uVar14;
    uVar3 = sym.mtd_erase(iVar6,puVar7);
    if (uVar3 != 0) {
        uVar5 = uVar3;
        if (uVar3 == 0xffffffea) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x800a75c);
            (*pcVar1)();
        }
        if (puVar7[2] != 0xffffffffffffffff) {
            puVar9[2] = puVar7[2] + iVar19;
        }
        goto code_r0x0800a74c;
    }
    uVar5 = uVar5 - uVar14;
    *puVar7 = 0;
    if (uVar5 == 0) {
code_r0x0800a748:
        uVar5 = 0;
code_r0x0800a74c:
        kfree(puVar7);
        return uVar5;
    }
    uVar8 = 0;
    uVar13 = uVar13 + 1;
    iVar19 = *(iVar6 + 8) + iVar19;
    iVar6 = *(iVar4 + 0x618);
    goto code_r0x0800a6cc;
}


// ===== sym.concat_read @ 0x0800a2a4 (size 340) =====

uint64_t sym.concat_read(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    code *pcVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t *puVar7;
    uint64_t uVar8;
    uint64_t *puVar9;
    int64_t *piVar10;
    int64_t in_x4;
    uint64_t *puVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    int64_t iVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x19;
    int64_t unaff_x20;
    int64_t unaff_x21;
    int64_t unaff_x22;
    int64_t unaff_x23;
    int64_t unaff_x24;
    uint64_t uVar17;
    int64_t iVar18;
    ulong unaff_x30;
    uchar auVar19 [16];
    int64_t iStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    int64_t iStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    iVar3 = *(arg1 + 0x610);
    piVar10 = arg4;
    if (0 < iVar3) {
        unaff_x24 = 0;
        uVar17 = 0;
        unaff_x19 = in_x4;
        unaff_x22 = arg3;
        do {
            iVar5 = *(*(arg1 + 0x618) + unaff_x24 * 8);
            iStack_60 = 0;
            uVar12 = *(iVar5 + 8);
            uVar8 = arg2 - uVar12;
            if (arg2 < uVar12) {
                unaff_x23 = uVar12 - arg2;
                if (arg2 + unaff_x22 <= uVar12) {
                    unaff_x23 = unaff_x22;
                }
                arg3 = unaff_x23;
                piVar10 = &iStack_60;
                uVar12 = sym.mtd_read(iVar5,arg2,unaff_x23,&iStack_60);
                iVar3 = uVar12;
                if (iVar3 != 0) {
                    if (iVar3 == -0x4a) {
                        *(arg1 + 0x17c) = *(arg1 + 0x17c) + 1;
                        uVar17 = 0xffffffb6;
                    }
                    else {
                        if (iVar3 != -0x75) goto code_r0x0800a3bc;
                        uVar4 = 0xffffff8b;
                        if (uVar17 != 0) {
                            uVar4 = uVar17;
                        }
                        *(arg1 + 0x178) = *(arg1 + 0x178) + 1;
                        uVar17 = uVar4;
                    }
                }
                uVar12 = uVar17;
                unaff_x22 = unaff_x22 - unaff_x23;
                *arg4 = *arg4 + iStack_60;
                if (unaff_x22 == 0) goto code_r0x0800a3bc;
                uVar8 = 0;
                unaff_x19 = unaff_x19 + unaff_x23;
                iVar3 = *(arg1 + 0x610);
                uVar17 = uVar12;
            }
            unaff_x24 = unaff_x24 + 1;
            arg2 = uVar8;
            unaff_x20 = arg4;
            unaff_x21 = arg1;
        } while (unaff_x24 < iVar3);
    }
    uVar12 = 0xffffffea;
    arg4 = unaff_x20;
    arg1 = unaff_x21;
code_r0x0800a3bc:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_58) {
        return uVar12;
    }
    auVar19 = __stack_chk_fail(uVar12);
    iVar18 = auVar19._0_8_;
    *extraout_x18 = sym.concat_write;
    pcStack_98 = sym.concat_write;
    iVar5 = sp_el0;
    iStack_a8 = *(iVar5 + 0x5e0);
    iVar3 = *(iVar18 + 0x610);
    puStack_a0 = &stack0xffffffffffffffb0;
    iStack_90 = unaff_x24;
    iStack_88 = unaff_x23;
    iStack_80 = unaff_x22;
    iStack_78 = arg1;
    iStack_70 = arg4;
    iStack_68 = unaff_x19;
    if (0 < iVar3) {
        iVar5 = 0;
        uVar17 = auVar19._8_8_;
        do {
            iVar6 = *(*(iVar18 + 0x618) + iVar5 * 8);
            iStack_b0 = 0;
            uVar12 = *(iVar6 + 8);
            uVar8 = uVar17 - uVar12;
            if (uVar17 < uVar12) {
                iVar16 = uVar12 - uVar17;
                if (arg3 + uVar17 <= uVar12) {
                    iVar16 = arg3;
                }
                uVar17 = sym.mtd_write(iVar6,uVar17,iVar16,&iStack_b0);
                if (uVar17 != 0) goto code_r0x0800a4c0;
                arg3 = arg3 - iVar16;
                *piVar10 = *piVar10 + iStack_b0;
                if (arg3 == 0) goto code_r0x0800a4c0;
                uVar8 = 0;
                iVar3 = *(iVar18 + 0x610);
            }
            iVar5 = iVar5 + 1;
            uVar17 = uVar8;
        } while (iVar5 < iVar3);
    }
    uVar17 = 0xffffffea;
code_r0x0800a4c0:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_a8) {
        return uVar17;
    }
    auVar19 = __stack_chk_fail(uVar17);
    puVar9 = auVar19._8_8_;
    iVar5 = auVar19._0_8_;
    *extraout_x18_00 = sym.concat_erase;
    uVar4 = *(iVar5 + 0x60);
    if (uVar4 == 0) {
        uVar17 = *(iVar5 + 0x10) - 1;
        if (((*puVar9 & uVar17) == 0) && ((puVar9[1] & uVar17) == 0)) {
code_r0x0800a634:
            iVar18 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar18 = 0x30;
            }
            puVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar18),0xcc0,0x18);
            if (puVar7 == NULL) {
                return 0xfffffff4;
            }
            uVar17 = puVar9[1];
            uVar4 = *(iVar5 + 0x610);
            uVar8 = puVar9[2];
            *puVar7 = *puVar9;
            puVar7[1] = uVar17;
            puVar7[2] = uVar8;
            if (0 < uVar4) {
                uVar8 = 0;
                iVar18 = 0;
                iVar6 = *(iVar5 + 0x618);
                uVar12 = *puVar7;
                do {
                    iVar16 = *(iVar6 + uVar8 * 8);
                    uVar13 = *(iVar16 + 8);
                    uVar1 = uVar12 - uVar13;
                    if (uVar12 < uVar13) {
                        if (uVar17 != 0) goto code_r0x0800a6cc;
                        goto code_r0x0800a748;
                    }
                    *puVar7 = uVar1;
                    uVar8 = uVar8 + 1;
                    iVar18 = *(iVar16 + 8) + iVar18;
                    uVar12 = uVar1;
                } while (uVar4 != uVar8);
            }
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800a6c8);
            (*pcVar2)();
        }
    }
    else if (0 < uVar4) {
        puVar11 = *(iVar5 + 0x68);
        uVar17 = 0;
        uVar8 = *puVar9;
        puVar7 = puVar11;
        do {
            if (uVar8 < *puVar7) goto code_r0x0800a564;
            uVar17 = uVar17 + 1;
            puVar7 = puVar7 + 3;
        } while (uVar4 != uVar17);
        uVar17 = uVar4;
code_r0x0800a564:
        iVar3 = uVar17;
        if ((iVar3 != 0) && (uVar14 = iVar3 - 1, (uVar8 & puVar11[uVar14 * 3 + 1] - 1) == 0)) {
            uVar15 = uVar14;
            if (iVar3 <= uVar4) {
                puVar7 = puVar11 + uVar14 * 3;
                do {
                    uVar15 = uVar14;
                    if (puVar9[1] + uVar8 < *puVar7) break;
                    uVar14 = uVar14 + 1;
                    puVar7 = puVar7 + 3;
                    uVar15 = uVar4;
                } while (uVar4 != uVar14);
            }
            if ((-1 < uVar15 - 1) && ((puVar9[1] + uVar8 & puVar11[(uVar15 - 1) * 3 + 1] - 1U) == 0))
            goto code_r0x0800a634;
        }
    }
    return 0xffffffea;
code_r0x0800a6cc:
    iVar6 = *(iVar6 + uVar8 * 8);
    uVar1 = *(iVar6 + 8) - uVar12;
    if (uVar17 + uVar12 <= *(iVar6 + 8)) {
        uVar1 = uVar17;
    }
    puVar7[1] = uVar1;
    uVar4 = sym.mtd_erase(iVar6,puVar7);
    if (uVar4 != 0) {
        uVar17 = uVar4;
        if (uVar4 == 0xffffffea) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800a75c);
            (*pcVar2)();
        }
        if (puVar7[2] != 0xffffffffffffffff) {
            puVar9[2] = puVar7[2] + iVar18;
        }
        goto code_r0x0800a74c;
    }
    uVar17 = uVar17 - uVar1;
    *puVar7 = 0;
    if (uVar17 == 0) {
code_r0x0800a748:
        uVar17 = 0;
code_r0x0800a74c:
        kfree(puVar7);
        return uVar17;
    }
    uVar12 = 0;
    uVar8 = uVar8 + 1;
    iVar18 = *(iVar6 + 8) + iVar18;
    iVar6 = *(iVar5 + 0x618);
    goto code_r0x0800a6cc;
}


// ===== sym.concat_write @ 0x0800a3f8 (size 256) =====

uint64_t sym.concat_write(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t *puVar6;
    uint64_t *puVar7;
    uint64_t *puVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    int iVar12;
    uint64_t uVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    int64_t iVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar17;
    ulong unaff_x30;
    uchar auVar18 [16];
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar17 = sp_el0;
    iStack_48 = *(iVar17 + 0x5e0);
    iVar12 = *(arg1 + 0x610);
    if (0 < iVar12) {
        iVar17 = 0;
        do {
            iVar4 = *(*(arg1 + 0x618) + iVar17 * 8);
            iStack_50 = 0;
            uVar10 = *(iVar4 + 8);
            uVar5 = arg2 - uVar10;
            if (arg2 < uVar10) {
                iVar9 = uVar10 - arg2;
                if (arg3 + arg2 <= uVar10) {
                    iVar9 = arg3;
                }
                uVar5 = sym.mtd_write(iVar4,arg2,iVar9,&iStack_50);
                if (uVar5 != 0) goto code_r0x0800a4c0;
                arg3 = arg3 - iVar9;
                *arg4 = *arg4 + iStack_50;
                if (arg3 == 0) goto code_r0x0800a4c0;
                uVar5 = 0;
                iVar12 = *(arg1 + 0x610);
            }
            iVar17 = iVar17 + 1;
            arg2 = uVar5;
        } while (iVar17 < iVar12);
    }
    uVar5 = 0xffffffea;
code_r0x0800a4c0:
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_48) {
        return uVar5;
    }
    auVar18 = __stack_chk_fail(uVar5);
    puVar7 = auVar18._8_8_;
    iVar17 = auVar18._0_8_;
    *extraout_x18 = sym.concat_erase;
    uVar3 = *(iVar17 + 0x60);
    if (uVar3 == 0) {
        uVar5 = *(iVar17 + 0x10) - 1;
        if (((*puVar7 & uVar5) == 0) && ((puVar7[1] & uVar5) == 0)) {
code_r0x0800a634:
            iVar4 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar4 = 0x30;
            }
            puVar6 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar4),0xcc0,0x18);
            if (puVar6 == NULL) {
                return 0xfffffff4;
            }
            uVar5 = puVar7[1];
            uVar3 = *(iVar17 + 0x610);
            uVar10 = puVar7[2];
            *puVar6 = *puVar7;
            puVar6[1] = uVar5;
            puVar6[2] = uVar10;
            if (0 < uVar3) {
                uVar10 = 0;
                iVar4 = 0;
                iVar9 = *(iVar17 + 0x618);
                uVar11 = *puVar6;
                do {
                    iVar16 = *(iVar9 + uVar10 * 8);
                    uVar13 = *(iVar16 + 8);
                    uVar1 = uVar11 - uVar13;
                    if (uVar11 < uVar13) {
                        if (uVar5 != 0) goto code_r0x0800a6cc;
                        goto code_r0x0800a748;
                    }
                    *puVar6 = uVar1;
                    uVar10 = uVar10 + 1;
                    iVar4 = *(iVar16 + 8) + iVar4;
                    uVar11 = uVar1;
                } while (uVar3 != uVar10);
            }
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800a6c8);
            (*pcVar2)();
        }
    }
    else if (0 < uVar3) {
        puVar8 = *(iVar17 + 0x68);
        uVar5 = 0;
        uVar10 = *puVar7;
        puVar6 = puVar8;
        do {
            if (uVar10 < *puVar6) goto code_r0x0800a564;
            uVar5 = uVar5 + 1;
            puVar6 = puVar6 + 3;
        } while (uVar3 != uVar5);
        uVar5 = uVar3;
code_r0x0800a564:
        iVar12 = uVar5;
        if ((iVar12 != 0) && (uVar14 = iVar12 - 1, (uVar10 & puVar8[uVar14 * 3 + 1] - 1) == 0)) {
            uVar15 = uVar14;
            if (iVar12 <= uVar3) {
                puVar6 = puVar8 + uVar14 * 3;
                do {
                    uVar15 = uVar14;
                    if (puVar7[1] + uVar10 < *puVar6) break;
                    uVar14 = uVar14 + 1;
                    puVar6 = puVar6 + 3;
                    uVar15 = uVar3;
                } while (uVar3 != uVar14);
            }
            if ((-1 < uVar15 - 1) && ((puVar7[1] + uVar10 & puVar8[(uVar15 - 1) * 3 + 1] - 1U) == 0))
            goto code_r0x0800a634;
        }
    }
    return 0xffffffea;
code_r0x0800a6cc:
    iVar9 = *(iVar9 + uVar10 * 8);
    uVar1 = *(iVar9 + 8) - uVar11;
    if (uVar5 + uVar11 <= *(iVar9 + 8)) {
        uVar1 = uVar5;
    }
    puVar6[1] = uVar1;
    uVar3 = sym.mtd_erase(iVar9,puVar6);
    if (uVar3 != 0) {
        uVar5 = uVar3;
        if (uVar3 == 0xffffffea) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800a75c);
            (*pcVar2)();
        }
        if (puVar6[2] != 0xffffffffffffffff) {
            puVar7[2] = puVar6[2] + iVar4;
        }
        goto code_r0x0800a74c;
    }
    uVar5 = uVar5 - uVar1;
    *puVar6 = 0;
    if (uVar5 == 0) {
code_r0x0800a748:
        uVar5 = 0;
code_r0x0800a74c:
        kfree(puVar6);
        return uVar5;
    }
    uVar11 = 0;
    uVar10 = uVar10 + 1;
    iVar4 = *(iVar9 + 8) + iVar4;
    iVar9 = *(iVar17 + 0x618);
    goto code_r0x0800a6cc;
}


// ===== sym.concat_erase @ 0x0800a4f8 (size 612) =====

int sym.concat_erase(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    code *pcVar3;
    int iVar4;
    uint64_t *puVar5;
    uint64_t *puVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    int64_t iVar14;
    ulong *in_x18;
    int64_t iVar15;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + 0x60);
    if (uVar1 == 0) {
        uVar10 = *(arg1 + 0x10) - 1;
        if (((*arg2 & uVar10) == 0) && ((*(arg2 + 8) & uVar10) == 0)) {
code_r0x0800a634:
            iVar15 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar15 = 0x30;
            }
            puVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar15),0xcc0,0x18);
            if (puVar5 == NULL) {
                return -0xc;
            }
            uVar10 = *(arg2 + 8);
            uVar1 = *(arg1 + 0x610);
            uVar8 = *(arg2 + 0x10);
            *puVar5 = *arg2;
            puVar5[1] = uVar10;
            puVar5[2] = uVar8;
            if (0 < uVar1) {
                uVar8 = 0;
                iVar15 = 0;
                iVar7 = *(arg1 + 0x618);
                uVar9 = *puVar5;
                do {
                    iVar14 = *(iVar7 + uVar8 * 8);
                    uVar11 = *(iVar14 + 8);
                    uVar2 = uVar9 - uVar11;
                    if (uVar9 < uVar11) {
                        if (uVar10 != 0) goto code_r0x0800a6cc;
                        goto code_r0x0800a748;
                    }
                    *puVar5 = uVar2;
                    uVar8 = uVar8 + 1;
                    iVar15 = *(iVar14 + 8) + iVar15;
                    uVar9 = uVar2;
                } while (uVar1 != uVar8);
            }
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x800,0x800a6c8);
            (*pcVar3)();
        }
    }
    else if (0 < uVar1) {
        puVar6 = *(arg1 + 0x68);
        uVar10 = 0;
        uVar8 = *arg2;
        puVar5 = puVar6;
        do {
            if (uVar8 < *puVar5) goto code_r0x0800a564;
            uVar10 = uVar10 + 1;
            puVar5 = puVar5 + 3;
        } while (uVar1 != uVar10);
        uVar10 = uVar1;
code_r0x0800a564:
        iVar4 = uVar10;
        if ((iVar4 != 0) && (uVar12 = iVar4 - 1, (uVar8 & puVar6[uVar12 * 3 + 1] - 1) == 0)) {
            uVar13 = uVar12;
            if (iVar4 <= uVar1) {
                puVar5 = puVar6 + uVar12 * 3;
                do {
                    uVar13 = uVar12;
                    if (*(arg2 + 8) + uVar8 < *puVar5) break;
                    uVar12 = uVar12 + 1;
                    puVar5 = puVar5 + 3;
                    uVar13 = uVar1;
                } while (uVar1 != uVar12);
            }
            if ((-1 < uVar13 - 1) && ((*(arg2 + 8) + uVar8 & puVar6[(uVar13 - 1) * 3 + 1] - 1U) == 0))
            goto code_r0x0800a634;
        }
    }
    return -0x16;
code_r0x0800a6cc:
    iVar7 = *(iVar7 + uVar8 * 8);
    uVar2 = *(iVar7 + 8) - uVar9;
    if (uVar10 + uVar9 <= *(iVar7 + 8)) {
        uVar2 = uVar10;
    }
    puVar5[1] = uVar2;
    iVar4 = sym.mtd_erase(iVar7,puVar5);
    if (iVar4 != 0) {
        if (iVar4 == -0x16) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x800,0x800a75c);
            (*pcVar3)();
        }
        if (puVar5[2] != 0xffffffffffffffff) {
            *(arg2 + 0x10) = puVar5[2] + iVar15;
        }
        goto code_r0x0800a74c;
    }
    uVar10 = uVar10 - uVar2;
    *puVar5 = 0;
    if (uVar10 == 0) {
code_r0x0800a748:
        iVar4 = 0;
code_r0x0800a74c:
        kfree(puVar5);
        return iVar4;
    }
    uVar9 = 0;
    uVar8 = uVar8 + 1;
    iVar15 = *(iVar7 + 8) + iVar15;
    iVar7 = *(arg1 + 0x618);
    goto code_r0x0800a6cc;
}


// ===== sym.concat_sync @ 0x0800a75c (size 200) =====

void sym.concat_sync(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    code *pcVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x610);
    if (0 < iVar2) {
        iVar5 = 0;
        do {
            iVar1 = *(*(arg1 + 0x618) + iVar5 * 8);
            do {
                iVar3 = iVar1;
                iVar1 = *(iVar3 + 0x568);
            } while (*(iVar3 + 0x568) != 0);
            pcVar4 = *(iVar3 + 0xf0);
            if (pcVar4 != NULL) {
                if (4 < (pcVar4 + -0x8003ce0 >> 3 | pcVar4 << 0x3d)) {
                    __cfi_slowpath_diag(0xcda853bfdc928661,pcVar4,0x8001060);
                }
                (*pcVar4)(iVar3);
                iVar2 = *(arg1 + 0x610);
            }
            iVar5 = iVar5 + 1;
        } while (iVar5 < iVar2);
    }
    return;
}


// ===== sym.concat_lock @ 0x0800a824 (size 172) =====

ulong sym.concat_lock(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t arg1_00;
    ulong uVar2;
    uint64_t uVar3;
    int iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x610);
    if (0 < iVar4) {
        iVar6 = 0;
        do {
            arg1_00 = *(*(arg1 + 0x618) + iVar6 * 8);
            uVar5 = *(arg1_00 + 8);
            uVar3 = arg2 - uVar5;
            if (arg2 < uVar5) {
                iVar1 = uVar5 - arg2;
                if (arg3 + arg2 <= uVar5) {
                    iVar1 = arg3;
                }
                uVar2 = sym.mtd_lock(arg1_00,arg2,iVar1);
                if (uVar2 != 0) {
                    return uVar2;
                }
                arg3 = arg3 - iVar1;
                if (arg3 == 0) {
                    return 0;
                }
                uVar3 = 0;
                iVar4 = *(arg1 + 0x610);
            }
            iVar6 = iVar6 + 1;
            arg2 = uVar3;
        } while (iVar6 < iVar4);
    }
    return 0xffffffea;
}


// ===== sym.concat_unlock @ 0x0800a8d0 (size 172) =====

ulong sym.concat_unlock(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t arg1_00;
    ulong uVar2;
    uint64_t uVar3;
    int iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x610);
    if (0 < iVar4) {
        iVar6 = 0;
        do {
            arg1_00 = *(*(arg1 + 0x618) + iVar6 * 8);
            uVar5 = *(arg1_00 + 8);
            uVar3 = arg2 - uVar5;
            if (arg2 < uVar5) {
                iVar1 = uVar5 - arg2;
                if (arg3 + arg2 <= uVar5) {
                    iVar1 = arg3;
                }
                uVar2 = sym.mtd_unlock(arg1_00,arg2,iVar1);
                if (uVar2 != 0) {
                    return uVar2;
                }
                arg3 = arg3 - iVar1;
                if (arg3 == 0) {
                    return 0;
                }
                uVar3 = 0;
                iVar4 = *(arg1 + 0x610);
            }
            iVar6 = iVar6 + 1;
            arg2 = uVar3;
        } while (iVar6 < iVar4);
    }
    return 0xffffffea;
}


// ===== sym.concat_is_locked @ 0x0800a97c (size 108) =====

ulong sym.concat_is_locked(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(arg1 + 0x610);
    if (0 < *(arg1 + 0x610)) {
        piVar3 = *(arg1 + 0x618);
        do {
            uVar4 = *(*piVar3 + 8);
            if (arg2 < uVar4) {
                if (uVar4 < arg2 + arg3) {
                    return 0xffffffea;
                }
                uVar1 = sym.mtd_is_locked(*piVar3,arg2,arg3);
                return uVar1;
            }
            uVar2 = uVar2 - 1;
            piVar3 = piVar3 + 1;
            arg2 = arg2 - uVar4;
        } while (uVar2 != 0);
    }
    return 0xffffffea;
}


// ===== sym.concat_suspend @ 0x0800a9e8 (size 252) =====

ulong sym.concat_suspend(int64_t arg1)

{
    uint8_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t iVar4;
    code *pcVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x610) < 1) {
        uVar3 = 0;
    }
    else {
        iVar6 = 0;
        do {
            iVar2 = *(*(arg1 + 0x618) + iVar6 * 8);
            do {
                iVar4 = iVar2;
                iVar2 = *(iVar4 + 0x568);
            } while (*(iVar4 + 0x568) != 0);
            uVar1 = *(iVar4 + 0x608);
            if ((uVar1 & 1) == 0) {
                pcVar5 = *(iVar4 + 0x130);
                if (pcVar5 != NULL) {
                    if (5 < (pcVar5 + -0x8003b40 >> 3 | pcVar5 << 0x3d)) {
                        __cfi_slowpath_diag(0x2c870642b6445e97,pcVar5,0x8001080);
                    }
                    uVar3 = (*pcVar5)(iVar4);
                    if (uVar3 != 0) {
                        if (uVar3 < 0) {
                            return uVar3;
                        }
                        goto code_r0x0800aa30;
                    }
                    uVar1 = *(iVar4 + 0x608);
                }
                uVar3 = 0;
                *(iVar4 + 0x608) = uVar1 | 1;
            }
            else {
                uVar3 = 0;
            }
code_r0x0800aa30:
            iVar6 = iVar6 + 1;
        } while (iVar6 < *(arg1 + 0x610));
    }
    return uVar3;
}


// ===== sym.concat_resume @ 0x0800aae4 (size 224) =====

void sym.concat_resume(int64_t arg1)

{
    uint8_t uVar1;
    int64_t iVar2;
    int iVar3;
    code *pcVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x610);
    if (0 < iVar3) {
        iVar6 = 0;
        do {
            iVar2 = *(*(arg1 + 0x618) + iVar6 * 8);
            do {
                iVar5 = iVar2;
                iVar2 = *(iVar5 + 0x568);
            } while (*(iVar5 + 0x568) != 0);
            uVar1 = *(iVar5 + 0x608);
            if ((uVar1 & 1) != 0) {
                pcVar4 = *(iVar5 + 0x138);
                if (pcVar4 != NULL) {
                    if (4 < (pcVar4 + -0x8003ce0 >> 3 | pcVar4 << 0x3d)) {
                        __cfi_slowpath_diag(0xcda853bfdc928661,pcVar4,0x80010a0);
                    }
                    (*pcVar4)(iVar5);
                    uVar1 = *(iVar5 + 0x608);
                }
                *(iVar5 + 0x608) = uVar1 & 0xfe;
                iVar3 = *(arg1 + 0x610);
            }
            iVar6 = iVar6 + 1;
        } while (iVar6 < iVar3);
    }
    return;
}


// ===== sym.mtd_concat_destroy @ 0x0800abc4 (size 68) =====

void sym.mtd_concat_destroy(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x60) != 0) {
        kfree(*(arg1 + 0x68));
    }
    kfree(arg1);
    return;
}


// ===== sym.part_fill_badblockstats @ 0x0800ac08 (size 168) =====

void sym.part_fill_badblockstats(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    uint64_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x568);
    do {
        iVar2 = iVar3;
        iVar3 = *(iVar2 + 0x568);
    } while (iVar3 != 0);
    if ((*(iVar2 + 0x118) != 0) && (*(arg1 + 0x180) = 0, *(arg1 + 0x598) != 0)) {
        uVar4 = 0;
        do {
            iVar1 = sym.mtd_block_isreserved(arg1,uVar4);
            if (iVar1 == 0) {
                iVar1 = sym.mtd_block_isbad(arg1,uVar4);
                if (iVar1 != 0) {
                    *(arg1 + 0x180) = *(arg1 + 0x180) + 1;
                }
            }
            else {
                *(arg1 + 0x184) = *(arg1 + 0x184) + 1;
            }
            uVar4 = uVar4 + *(arg1 + 0x10);
        } while (uVar4 < *(arg1 + 0x598));
    }
    return;
}


// ===== sym.mtd_add_partition @ 0x0800acb0 (size 456) =====

uchar * sym.mtd_add_partition(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uchar *puVar6;
    code *pcVar7;
    uint32_t uVar8;
    int iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uchar *puVar12;
    ulong *puVar13;
    uint64_t uVar14;
    uchar *puVar15;
    uint64_t uVar16;
    uchar *puVar17;
    uchar *puVar18;
    int64_t iVar19;
    int iVar20;
    int64_t iVar21;
    ulong uVar22;
    uint32_t uVar23;
    uint64_t *puVar24;
    ulong uVar25;
    ulong *in_x18;
    ulong *extraout_x18;
    uchar *puVar26;
    int64_t *piVar27;
    ulong unaff_x30;
    uchar auVar28 [16];
    int64_t iStack_78;
    ulong uStack_70;
    uint64_t uStack_68;
    int64_t iStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    uVar16 = arg4;
    *in_x18 = unaff_x30;
    iVar21 = sp_el0;
    iStack_48 = *(iVar21 + 0x5e0);
    iVar21 = arg1;
    do {
        iVar19 = iVar21;
        iVar21 = *(iVar19 + 0x568);
    } while (iVar21 != 0);
    iVar21 = 8;
    if (*(arg1 + 0x568) != 0) {
        iVar21 = 0x598;
    }
    if (arg3 < 0xfffffffffffffffe) {
        uVar10 = *(arg1 + iVar21) - arg3;
        if (uVar16 != 0) {
            uVar10 = uVar16;
        }
        if (0 < uVar10) {
            uStack_70 = 0;
            uVar14 = 0xffffffff;
            uStack_58 = 0;
            uStack_50 = 0;
            uVar16 = arg3;
            iStack_78 = arg2;
            uStack_68 = uVar10;
            iStack_60 = arg3;
            uVar10 = sym.allocate_partition(arg1,&iStack_78,0xffffffff,arg3);
            if (uVar10 < 0xfffffffffffff001) {
                iVar19 = iVar19 + 0x5a8;
                mutex_lock(iVar19);
                piVar27 = *(arg1 + 0x578);
                iVar21 = uVar10 + 0x580;
                uVar14 = arg1 + 0x570;
                arg3 = uVar14;
                uVar11 = __list_add_valid(iVar21,piVar27,uVar14);
                if ((uVar11 & 1) != 0) {
                    *(arg1 + 0x578) = iVar21;
                    *(uVar10 + 0x580) = uVar14;
                    *(uVar10 + 0x588) = piVar27;
                    *piVar27 = iVar21;
                }
                mutex_unlock(iVar19);
                uVar8 = sym.add_mtd_device(uVar10);
                if (uVar8 == 0) {
                    iVar9 = sysfs_create_files(uVar10 + 0x1a0,obj.mtd_partition_attrs);
                    if (iVar9 != 0) {
                        _printk(0x8001726,iVar9);
                    }
                    puVar26 = NULL;
                }
                else {
                    puVar26 = uVar8;
                    mutex_lock(iVar19);
                    uVar14 = __list_del_entry_valid(iVar21);
                    if ((uVar14 & 1) != 0) {
                        piVar27 = *(uVar10 + 0x588);
                        iVar21 = *(uVar10 + 0x580);
                        *(iVar21 + 8) = piVar27;
                        *piVar27 = iVar21;
                    }
                    *(uVar10 + 0x580) = 0xdead000000000100;
                    *(uVar10 + 0x588) = 0xdead000000000122;
                    mutex_unlock(iVar19);
                    kfree(*(uVar10 + 0x38));
                    kfree(uVar10);
                }
            }
            else {
                puVar26 = uVar10 & 0xffffffff;
                arg3 = uVar14;
            }
            goto code_r0x0800ad60;
        }
    }
    puVar26 = 0xffffffea;
code_r0x0800ad60:
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) == iStack_48) {
        return puVar26;
    }
    auVar28 = __stack_chk_fail();
    puVar13 = auVar28._8_8_;
    puVar12 = auVar28._0_8_;
    *extraout_x18 = sym.allocate_partition;
    puVar26 = puVar12;
    do {
        puVar17 = puVar26;
        puVar26 = *(puVar17 + 0x568);
    } while (*(puVar17 + 0x568) != NULL);
    iVar21 = 0x10;
    if ((*(puVar12 + 4) & 0x1000) != 0) {
        iVar21 = 0x14;
    }
    iVar19 = 8;
    if (*(puVar12 + 0x568) != 0) {
        iVar19 = 0x598;
    }
    uVar8 = *(puVar17 + iVar21);
    uVar10 = *(puVar12 + iVar19);
    puVar26 = kmem_cache_alloc_trace(_seq_read,0xdc0,0x610);
    iVar21 = kstrdup(*puVar13,0xcc0);
    if ((iVar21 == 0) || (puVar26 == NULL)) {
        _printk(0x8001691,*(puVar12 + 0x38));
        kfree(iVar21);
        kfree(puVar26);
        puVar26 = 0xfffffffffffffff4;
    }
    else {
        uVar23 = *(puVar13 + 4);
        uVar1 = *(puVar13 + 0x24);
        uVar2 = *(puVar12 + 4);
        *(puVar26 + 0x38) = iVar21;
        uVar25 = puVar13[2];
        uVar3 = *(puVar12 + 0x14);
        *puVar26 = *puVar12;
        uVar1 = uVar1 | uVar2 & (uVar23 ^ 0xffffffff);
        uVar22 = *(puVar12 + 0x18);
        *(puVar26 + 0x598) = uVar25;
        *(puVar26 + 0x14) = uVar3;
        uVar3 = *(puVar12 + 0x20);
        *(puVar26 + 0x5a0) = uVar1;
        *(puVar26 + 4) = uVar1;
        uVar4 = *(puVar12 + 0x188);
        *(puVar26 + 0x18) = uVar22;
        uVar22 = *(puVar12 + 0x198);
        *(puVar26 + 0x20) = uVar3;
        iVar21 = *(puVar12 + 0x568);
        *(puVar26 + 0x188) = uVar4;
        *(puVar26 + 0x198) = uVar22;
        if (iVar21 == 0) {
            puVar15 = *(puVar12 + 0x200);
        }
        else {
            puVar15 = puVar12 + 0x1a0;
        }
        *(puVar26 + 0x200) = puVar15;
        uVar14 = puVar13[3];
        uVar22 = puVar13[5];
        puVar24 = puVar26 + 0x590;
        *(puVar26 + 0x568) = puVar12;
        *(puVar26 + 0x590) = uVar14;
        *(puVar26 + 0x490) = uVar22;
        *(puVar26 + 0x570) = puVar26 + 0x570;
        *(puVar26 + 0x578) = puVar26 + 0x570;
        if (uVar14 == 0xffffffffffffffff) {
            *puVar24 = uVar16;
            uVar14 = uVar16;
        }
        if (uVar14 == 0xfffffffffffffffe) {
            iVar9 = 0;
            if (uVar8 != 0) {
                iVar9 = uVar16 / uVar8;
            }
            *puVar24 = uVar16;
            iVar9 = uVar16 - iVar9 * uVar8;
            uVar14 = uVar16;
            if (iVar9 != 0) {
                *puVar24 = (uVar8 - iVar9) + uVar16;
                _printk(0x8001203,arg3 & 0xffffffff,uVar16);
                uVar14 = *puVar24;
            }
        }
        if (uVar14 == 0xfffffffffffffffd) {
            *(puVar26 + 0x590) = uVar16;
            iVar21 = (uVar10 - uVar16) - *(puVar26 + 0x598);
            if (uVar10 - uVar16 < *(puVar26 + 0x598)) {
                _printk(0x8001a86,*puVar13);
                return puVar26;
            }
            *(puVar26 + 0x598) = iVar21;
        }
        else {
            iVar21 = *(puVar26 + 0x598);
            uVar16 = uVar14;
        }
        if (iVar21 == 0) {
            iVar21 = uVar10 - uVar16;
            *(puVar26 + 0x598) = iVar21;
        }
        _printk(0x800187a,uVar16,iVar21 + uVar16,*(puVar26 + 0x38));
        uVar16 = *(puVar26 + 0x590);
        if (uVar10 < uVar16 || uVar10 - uVar16 == 0) {
            uVar3 = *(puVar12 + 0x10);
            uVar22 = *puVar13;
            *puVar24 = 0;
            *(puVar26 + 0x598) = 0;
            *(puVar26 + 0x10) = uVar3;
            _printk(0x8001633,uVar22);
        }
        else {
            if (*(puVar12 + 8) < *(puVar26 + 0x598) + uVar16) {
                uVar22 = *puVar13;
                uVar25 = *(puVar12 + 0x38);
                *(puVar26 + 0x598) = uVar10 - uVar16;
                _printk(0x8001acf,uVar22,uVar25);
            }
            uVar23 = *(puVar12 + 0x60);
            if (uVar23 < 2) {
                uVar23 = *(puVar17 + 0x10);
                *(puVar26 + 0x10) = uVar23;
            }
            else {
                uVar16 = 0;
                puVar24 = *(puVar12 + 0x68);
                do {
                    if (*(puVar26 + 0x590) < *puVar24) goto code_r0x0800b0e4;
                    uVar16 = uVar16 + 1;
                    puVar24 = puVar24 + 3;
                } while (uVar23 != uVar16);
                uVar16 = uVar23;
code_r0x0800b0e4:
                iVar9 = 0;
                if (uVar16 != 0) {
                    iVar9 = uVar16 + -1;
                }
                if (iVar9 < uVar23) {
                    iVar20 = uVar23 - iVar9;
                    puVar24 = *(puVar12 + 0x68) + iVar9 * 3 + 1;
                    do {
                        if (*(puVar26 + 0x598) + *(puVar26 + 0x590) <= puVar24[-1]) break;
                        if (*(puVar26 + 0x10) < *puVar24) {
                            *(puVar26 + 0x10) = *puVar24;
                        }
                        iVar20 = iVar20 + -1;
                        puVar24 = puVar24 + 3;
                    } while (iVar20 != 0);
                }
                uVar23 = *(puVar26 + 0x10);
                if (uVar23 == 0) {
    //WARNING: Does not return
                    pcVar7 = SoftwareBreakpoint(0x800,0x800b2a8);
                    (*pcVar7)();
                }
            }
            uVar1 = *(puVar26 + 4);
            puVar17 = *(puVar26 + 0x568);
            if ((uVar1 & 0x1000) != 0) {
                uVar23 = uVar8;
            }
            uVar10 = uVar23;
            uVar16 = 0;
            puVar18 = puVar17;
            puVar15 = puVar26;
            while (puVar6 = puVar18, puVar6 != NULL) {
                uVar16 = *(puVar15 + 0x590) + uVar16;
                puVar15 = puVar6;
                puVar18 = *(puVar6 + 0x568);
            }
            if ((uVar1 >> 10 & 1) != 0) {
                uVar14 = 0;
                if (uVar10 != 0) {
                    uVar14 = uVar16 / uVar10;
                }
                if (uVar16 != uVar14 * uVar10) {
                    uVar22 = *puVar13;
                    *(puVar26 + 4) = uVar1 & 0xfffffbff;
                    _printk(0x80012d5,uVar22);
                    puVar17 = *(puVar26 + 0x568);
                }
            }
            iVar21 = 0;
            if (puVar17 != NULL) {
                iVar21 = 0;
                puVar15 = puVar26;
                do {
                    puVar18 = puVar17;
                    puVar17 = *(puVar18 + 0x568);
                    iVar21 = *(puVar15 + 0x590) + iVar21;
                    puVar15 = puVar18;
                } while (puVar17 != NULL);
            }
            iVar19 = *(puVar26 + 0x598);
            if ((*(puVar26 + 4) >> 10 & 1) != 0) {
                uVar16 = 0;
                if (uVar10 != 0) {
                    uVar16 = (iVar19 + iVar21) / uVar10;
                }
                if (iVar19 + iVar21 != uVar16 * uVar10) {
                    uVar22 = *puVar13;
                    *(puVar26 + 4) = *(puVar26 + 4) & 0xfffffbff;
                    _printk(0x800123d,uVar22);
                    iVar19 = *(puVar26 + 0x598);
                }
            }
            uVar3 = *(puVar12 + 0x58);
            uVar4 = *(puVar12 + 0x5c);
            *(puVar26 + 8) = iVar19;
            uVar5 = *(puVar12 + 0x34);
            *(puVar26 + 0x58) = uVar3;
            *(puVar26 + 0x5c) = uVar4;
            *(puVar26 + 0x34) = uVar5;
        }
    }
    return puVar26;
}


// ===== sym.allocate_partition @ 0x0800ae78 (size 1072) =====

uchar * sym.allocate_partition(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    uint32_t uVar7;
    int iVar8;
    uint64_t uVar9;
    uchar *puVar10;
    code *pcVar11;
    uchar *puVar12;
    int64_t iVar13;
    uint64_t uVar14;
    uchar *puVar15;
    uchar *puVar16;
    int64_t iVar17;
    int iVar18;
    ulong uVar19;
    int64_t iVar20;
    uint32_t uVar21;
    uint64_t *puVar22;
    uchar *puVar23;
    ulong uVar24;
    ulong *in_x18;
    uint64_t uVar25;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar13 = arg1;
    do {
        iVar17 = iVar13;
        iVar13 = *(iVar17 + 0x568);
    } while (*(iVar17 + 0x568) != 0);
    iVar13 = 0x10;
    if ((*(arg1 + 4) & 0x1000) != 0) {
        iVar13 = 0x14;
    }
    iVar20 = 8;
    if (*(arg1 + 0x568) != 0) {
        iVar20 = 0x598;
    }
    uVar7 = *(iVar17 + iVar13);
    uVar25 = *(arg1 + iVar20);
    puVar12 = kmem_cache_alloc_trace(_seq_read,0xdc0,0x610);
    iVar13 = kstrdup(*arg2,0xcc0);
    if ((iVar13 == 0) || (puVar12 == NULL)) {
        _printk(0x8001691,*(arg1 + 0x38));
        kfree(iVar13);
        kfree(puVar12);
        puVar12 = 0xfffffffffffffff4;
    }
    else {
        uVar21 = *(arg2 + 0x20);
        uVar2 = *(arg2 + 0x24);
        uVar3 = *(arg1 + 4);
        *(puVar12 + 0x38) = iVar13;
        uVar24 = *(arg2 + 0x10);
        uVar4 = *(arg1 + 0x14);
        *puVar12 = *arg1;
        uVar2 = uVar2 | uVar3 & (uVar21 ^ 0xffffffff);
        uVar19 = *(arg1 + 0x18);
        *(puVar12 + 0x598) = uVar24;
        *(puVar12 + 0x14) = uVar4;
        uVar4 = *(arg1 + 0x20);
        *(puVar12 + 0x5a0) = uVar2;
        *(puVar12 + 4) = uVar2;
        uVar5 = *(arg1 + 0x188);
        *(puVar12 + 0x18) = uVar19;
        uVar19 = *(arg1 + 0x198);
        *(puVar12 + 0x20) = uVar4;
        iVar13 = *(arg1 + 0x568);
        *(puVar12 + 0x188) = uVar5;
        *(puVar12 + 0x198) = uVar19;
        if (iVar13 == 0) {
            iVar13 = *(arg1 + 0x200);
        }
        else {
            iVar13 = arg1 + 0x1a0;
        }
        *(puVar12 + 0x200) = iVar13;
        iVar13 = *(arg2 + 0x18);
        uVar19 = *(arg2 + 0x28);
        piVar1 = puVar12 + 0x590;
        *(puVar12 + 0x568) = arg1;
        *(puVar12 + 0x590) = iVar13;
        *(puVar12 + 0x490) = uVar19;
        *(puVar12 + 0x570) = puVar12 + 0x570;
        *(puVar12 + 0x578) = puVar12 + 0x570;
        if (iVar13 == -1) {
            *piVar1 = arg4;
            iVar13 = arg4;
        }
        if (iVar13 == -2) {
            iVar8 = 0;
            if (uVar7 != 0) {
                iVar8 = arg4 / uVar7;
            }
            *piVar1 = arg4;
            iVar8 = arg4 - iVar8 * uVar7;
            iVar13 = arg4;
            if (iVar8 != 0) {
                *piVar1 = (uVar7 - iVar8) + arg4;
                _printk(0x8001203,arg3 & 0xffffffff,arg4);
                iVar13 = *piVar1;
            }
        }
        if (iVar13 == -3) {
            *(puVar12 + 0x590) = arg4;
            iVar20 = (uVar25 - arg4) - *(puVar12 + 0x598);
            if (uVar25 - arg4 < *(puVar12 + 0x598)) {
                _printk(0x8001a86,*arg2);
                return puVar12;
            }
            *(puVar12 + 0x598) = iVar20;
        }
        else {
            iVar20 = *(puVar12 + 0x598);
            arg4 = iVar13;
        }
        if (iVar20 == 0) {
            iVar20 = uVar25 - arg4;
            *(puVar12 + 0x598) = iVar20;
        }
        _printk(0x800187a,arg4,iVar20 + arg4,*(puVar12 + 0x38));
        uVar14 = *(puVar12 + 0x590);
        if (uVar25 < uVar14 || uVar25 - uVar14 == 0) {
            uVar4 = *(arg1 + 0x10);
            uVar19 = *arg2;
            *piVar1 = 0;
            *(puVar12 + 0x598) = 0;
            *(puVar12 + 0x10) = uVar4;
            _printk(0x8001633,uVar19);
        }
        else {
            if (*(arg1 + 8) < *(puVar12 + 0x598) + uVar14) {
                uVar19 = *arg2;
                uVar24 = *(arg1 + 0x38);
                *(puVar12 + 0x598) = uVar25 - uVar14;
                _printk(0x8001acf,uVar19,uVar24);
            }
            uVar21 = *(arg1 + 0x60);
            if (uVar21 < 2) {
                uVar21 = *(iVar17 + 0x10);
                *(puVar12 + 0x10) = uVar21;
            }
            else {
                uVar25 = 0;
                puVar22 = *(arg1 + 0x68);
                do {
                    if (*(puVar12 + 0x590) < *puVar22) goto code_r0x0800b0e4;
                    uVar25 = uVar25 + 1;
                    puVar22 = puVar22 + 3;
                } while (uVar21 != uVar25);
                uVar25 = uVar21;
code_r0x0800b0e4:
                iVar8 = 0;
                if (uVar25 != 0) {
                    iVar8 = uVar25 + -1;
                }
                if (iVar8 < uVar21) {
                    iVar18 = uVar21 - iVar8;
                    puVar22 = *(arg1 + 0x68) + iVar8 * 3 + 1;
                    do {
                        if (*(puVar12 + 0x598) + *(puVar12 + 0x590) <= puVar22[-1]) break;
                        if (*(puVar12 + 0x10) < *puVar22) {
                            *(puVar12 + 0x10) = *puVar22;
                        }
                        iVar18 = iVar18 + -1;
                        puVar22 = puVar22 + 3;
                    } while (iVar18 != 0);
                }
                uVar21 = *(puVar12 + 0x10);
                if (uVar21 == 0) {
    //WARNING: Does not return
                    pcVar11 = SoftwareBreakpoint(0x800,0x800b2a8);
                    (*pcVar11)();
                }
            }
            uVar2 = *(puVar12 + 4);
            puVar15 = *(puVar12 + 0x568);
            if ((uVar2 & 0x1000) != 0) {
                uVar21 = uVar7;
            }
            uVar14 = uVar21;
            uVar25 = 0;
            puVar16 = puVar15;
            puVar23 = puVar12;
            while (puVar10 = puVar16, puVar10 != NULL) {
                uVar25 = *(puVar23 + 0x590) + uVar25;
                puVar23 = puVar10;
                puVar16 = *(puVar10 + 0x568);
            }
            if ((uVar2 >> 10 & 1) != 0) {
                uVar9 = 0;
                if (uVar14 != 0) {
                    uVar9 = uVar25 / uVar14;
                }
                if (uVar25 != uVar9 * uVar14) {
                    uVar19 = *arg2;
                    *(puVar12 + 4) = uVar2 & 0xfffffbff;
                    _printk(0x80012d5,uVar19);
                    puVar15 = *(puVar12 + 0x568);
                }
            }
            iVar13 = 0;
            if (puVar15 != NULL) {
                iVar13 = 0;
                puVar23 = puVar12;
                do {
                    puVar16 = puVar15;
                    puVar15 = *(puVar16 + 0x568);
                    iVar13 = *(puVar23 + 0x590) + iVar13;
                    puVar23 = puVar16;
                } while (puVar15 != NULL);
            }
            iVar17 = *(puVar12 + 0x598);
            if ((*(puVar12 + 4) >> 10 & 1) != 0) {
                uVar25 = 0;
                if (uVar14 != 0) {
                    uVar25 = (iVar17 + iVar13) / uVar14;
                }
                if (iVar17 + iVar13 != uVar25 * uVar14) {
                    uVar19 = *arg2;
                    *(puVar12 + 4) = *(puVar12 + 4) & 0xfffffbff;
                    _printk(0x800123d,uVar19);
                    iVar17 = *(puVar12 + 0x598);
                }
            }
            uVar4 = *(arg1 + 0x58);
            uVar5 = *(arg1 + 0x5c);
            *(puVar12 + 8) = iVar17;
            uVar6 = *(arg1 + 0x34);
            *(puVar12 + 0x58) = uVar4;
            *(puVar12 + 0x5c) = uVar5;
            *(puVar12 + 0x34) = uVar6;
        }
    }
    return puVar12;
}


// ===== sym.del_mtd_partitions @ 0x0800b2a8 (size 112) =====

uint sym.del_mtd_partitions(int64_t arg1)

{
    uint uVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = arg1;
    do {
        iVar2 = iVar3;
        iVar3 = *(iVar2 + 0x568);
    } while (iVar3 != 0);
    _printk(0x800143c,*(arg1 + 0x38));
    iVar2 = iVar2 + 0x5a8;
    mutex_lock(iVar2);
    uVar1 = sym.__del_mtd_partitions(arg1);
    mutex_unlock(iVar2);
    return uVar1;
}


// ===== sym.__del_mtd_partitions @ 0x0800b318 (size 328) =====

int sym.__del_mtd_partitions(int64_t arg1)

{
    int64_t *piVar1;
    int iVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t *piVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *arg1_00;
    int64_t *piVar9;
    int64_t *piVar10;
    ulong unaff_x30;
    uchar auVar11 [12];
    uchar *puStack_78;
    uchar *puStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    puStack_78 = &stack0xffffffffffffff88;
    puStack_70 = puStack_78;
    piVar6 = *(arg1 + 0x570);
    iVar3 = 0;
    while (arg1 + 0x570 != piVar6) {
        arg1_00 = piVar6 + -0xb0;
        piVar9 = *piVar6;
        if (piVar6 + -2 != piVar6[-2]) {
            sym.__del_mtd_partitions(arg1_00);
        }
        piVar10 = piVar6 + -0xa9;
        _printk(0x800128b,*piVar10);
        iVar2 = sym.del_mtd_device(arg1_00);
        if (iVar2 < 0) {
            _printk(0x8001602,*piVar10,iVar2);
            piVar6 = piVar9;
            iVar3 = iVar2;
        }
        else {
            uVar4 = __list_del_entry_valid(piVar6);
            if ((uVar4 & 1) != 0) {
                iVar8 = *piVar6;
                piVar1 = piVar6[1];
                *(iVar8 + 8) = piVar1;
                *piVar1 = iVar8;
            }
            *piVar6 = -0x2152ffffffffff00;
            piVar6[1] = -0x2152fffffffffede;
            kfree(*piVar10);
            kfree(arg1_00);
            piVar6 = piVar9;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_68) {
        return iVar3;
    }
    auVar11 = __stack_chk_fail();
    iVar5 = auVar11._0_8_;
    *extraout_x18 = 0x800b45c;
    iVar8 = iVar5;
    do {
        iVar7 = iVar8;
        iVar8 = *(iVar7 + 0x568);
    } while (iVar8 != 0);
    iVar7 = iVar7 + 0x5a8;
    mutex_lock(iVar7);
    piVar6 = *(iVar5 + 0x570);
    do {
        if (iVar5 + 0x570 == piVar6) {
            iVar3 = -0x16;
code_r0x0800b4dc:
            mutex_unlock(iVar7);
            return iVar3;
        }
        if (*(piVar6 + -0xa8) == auVar11._8_4_) {
            iVar3 = sym.__mtd_del_partition(piVar6 + -0xb0);
            goto code_r0x0800b4dc;
        }
        piVar6 = *piVar6;
    } while( true );
}


// ===== sym.mtd_del_partition @ 0x0800b460 (size 160) =====

uint sym.mtd_del_partition(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = arg1;
    do {
        iVar3 = iVar4;
        iVar4 = *(iVar3 + 0x568);
    } while (iVar4 != 0);
    iVar3 = iVar3 + 0x5a8;
    mutex_lock(iVar3);
    piVar2 = *(arg1 + 0x570);
    do {
        if (arg1 + 0x570 == piVar2) {
            uVar1 = 0xffffffea;
code_r0x0800b4dc:
            mutex_unlock(iVar3);
            return uVar1;
        }
        if (*(piVar2 + -0xa8) == arg2) {
            uVar1 = sym.__mtd_del_partition(piVar2 + -0xb0);
            goto code_r0x0800b4dc;
        }
        piVar2 = *piVar2;
    } while( true );
}


// ===== sym.__mtd_del_partition @ 0x0800b500 (size 192) =====

ulong sym.__mtd_del_partition(int64_t arg1)

{
    ulong uVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar3 = *(arg1 + 0x570);
    do {
        if (arg1 + 0x570 == piVar3) {
            sysfs_remove_files(arg1 + 0x1a0,obj.mtd_partition_attrs);
            uVar1 = sym.del_mtd_device(arg1);
            if (uVar1 != 0) {
                return uVar1;
            }
            uVar2 = __list_del_entry_valid(arg1 + 0x580);
            if ((uVar2 & 1) != 0) {
                piVar3 = *(arg1 + 0x588);
                iVar4 = *(arg1 + 0x580);
                *(iVar4 + 8) = piVar3;
                *piVar3 = iVar4;
            }
            *(arg1 + 0x580) = 0xdead000000000100;
            *(arg1 + 0x588) = 0xdead000000000122;
            kfree(*(arg1 + 0x38));
            kfree(arg1);
            return 0;
        }
        iVar4 = piVar3 + -0xb0;
        piVar3 = *piVar3;
        uVar1 = sym.__mtd_del_partition(iVar4);
    } while (uVar1 == 0);
    return uVar1;
}


// ===== sym.add_mtd_partitions @ 0x0800b5c0 (size 504) =====

int sym.add_mtd_partitions(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint64_t arg1_00;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t arg1_01;
    int64_t iVar4;
    ulong *in_x18;
    uint64_t uVar5;
    int64_t *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = arg1;
    do {
        arg1_01 = iVar4;
        iVar4 = *(arg1_01 + 0x568);
    } while (*(arg1_01 + 0x568) != 0);
    _printk(0x8001b41,arg3 & 0xffffffffU,*(arg1 + 0x38));
    if (arg3 < 1) {
code_r0x0800b6ec:
        iVar1 = 0;
    }
    else {
        uVar5 = 0;
        iVar3 = 0;
        iVar4 = arg1_01 + 0x5a8;
        while( true ) {
            arg1_00 = sym.allocate_partition(arg1,arg2,uVar5 & 0xffffffff,iVar3);
            if (0xfffffffffffff000 < arg1_00) {
                iVar1 = arg1_00;
                iVar4 = arg1_01;
                goto code_r0x0800b77c;
            }
            mutex_lock(iVar4);
            piVar6 = *(arg1 + 0x578);
            iVar3 = arg1_00 + 0x580;
            uVar2 = __list_add_valid(iVar3,piVar6,arg1 + 0x570);
            if ((uVar2 & 1) != 0) {
                *(arg1 + 0x578) = iVar3;
                *(arg1_00 + 0x580) = arg1 + 0x570;
                *(arg1_00 + 0x588) = piVar6;
                *piVar6 = iVar3;
            }
            mutex_unlock(iVar4);
            iVar1 = sym.add_mtd_device(arg1_00);
            if (iVar1 != 0) break;
            iVar1 = sysfs_create_files(arg1_00 + 0x1a0,obj.mtd_partition_attrs);
            if (iVar1 != 0) {
                _printk(0x8001726,iVar1);
            }
            sym.parse_mtd_partitions(arg1_00,*(arg2 + 8),0);
            uVar5 = uVar5 + 1;
            arg2 = arg2 + 0x30;
            iVar3 = *(arg1_00 + 0x598) + *(arg1_00 + 0x590);
            if ((arg3 & 0xffffffffU) == uVar5) goto code_r0x0800b6ec;
        }
        mutex_lock(iVar4);
        uVar5 = __list_del_entry_valid(iVar3);
        if ((uVar5 & 1) != 0) {
            piVar6 = *(arg1_00 + 0x588);
            iVar3 = *(arg1_00 + 0x580);
            *(iVar3 + 8) = piVar6;
            *piVar6 = iVar3;
        }
        *(arg1_00 + 0x580) = 0xdead000000000100;
        *(arg1_00 + 0x588) = 0xdead000000000122;
        mutex_unlock(iVar4);
        kfree(*(arg1_00 + 0x38));
        kfree(arg1_00);
        iVar4 = arg1_01;
code_r0x0800b77c:
        do {
            iVar3 = iVar4;
            iVar4 = *(iVar3 + 0x568);
        } while (iVar4 != 0);
        _printk(0x800143c,*(arg1_01 + 0x38));
        iVar3 = iVar3 + 0x5a8;
        mutex_lock(iVar3);
        sym.__del_mtd_partitions(arg1_01);
        mutex_unlock(iVar3);
    }
    return iVar1;
}


// ===== sym.parse_mtd_partitions @ 0x0800b7b8 (size 1260) =====

uint32_t sym.parse_mtd_partitions(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong *in_x18;
    uint32_t unaff_w19;
    int64_t iVar6;
    ulong uVar7;
    code *pcVar8;
    uint32_t uVar9;
    code *pcVar10;
    char *pcVar11;
    code *pcVar12;
    ulong unaff_x30;
    int64_t iStack_80;
    uint64_t uStack_78;
    code *pcStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    uStack_78 = 0;
    pcStack_70 = NULL;
    iStack_80 = 0;
    if (arg2 == 0) {
        arg2 = obj.default_mtd_part_types;
        if (*(arg1 + 0x568) != 0) {
            arg2 = obj.default_subpartition_types;
        }
        iVar6 = *arg2;
    }
    else {
        iVar6 = *arg2;
    }
    if (iVar6 == 0) {
        pcVar8 = NULL;
        uVar9 = 0;
code_r0x0800bbc0:
        while (iVar6 = sp_el0, *(iVar6 + 0x5e0) != iStack_68) {
            __stack_chk_fail();
code_r0x0800bc80:
            __cfi_slowpath_diag(0xc2391e6952d29afd,pcVar8,0x80010c0);
code_r0x0800bc58:
            (*pcVar8)(iStack_80,uStack_78 & 0xffffffff);
code_r0x0800bc64:
            module_put(*(arg2 + 0x10));
code_r0x0800bc6c:
            uVar9 = uStack_78;
            if (unaff_w19 != 0) {
                uVar9 = unaff_w19;
            }
        }
        return uVar9;
    }
    uVar9 = 0;
code_r0x0800b840:
    iVar2 = strcmp(iVar6,"ofpart");
    if (iVar2 == 0) {
        uVar7 = *(arg1 + 0x490);
        if (*(arg1 + 0x568) == 0) {
            uVar7 = of_get_child_by_name(uVar7,"partitions");
        }
        pcVar8 = of_find_property(uVar7,"compatible",0);
        iVar6 = of_prop_next_string(pcVar8,0);
        if (iVar6 == 0) {
            unaff_w19 = 0;
        }
        else {
            unaff_w19 = 0;
            do {
                _raw_spin_lock(obj.part_parser_lock);
                for (pcVar10 = _obj.part_parsers; pcVar10 != obj.part_parsers; pcVar10 = *pcVar10) {
                    iVar5 = *(pcVar10 + 0x20);
                    if ((iVar5 != 0) && (*(iVar5 + 0x40) != '\0')) {
                        pcVar11 = iVar5 + 0x108;
                        do {
                            iVar2 = strcmp(pcVar11 + -200,iVar6);
                            if ((iVar2 == 0) && (uVar4 = try_module_get(*(pcVar10 + 0x10)), (uVar4 & 1) != 0)) {
                                if (pcVar10 != NULL) {
                                    _raw_spin_unlock(obj.part_parser_lock);
                                    pcVar12 = *(pcVar10 + 0x28);
                                    __cfi_slowpath_diag(0x2236638f2b85595a,pcVar12,0x80010e0);
                                    uVar3 = (*pcVar12)(arg1,&iStack_80,0);
                                    uVar4 = uVar3;
                                    if (0 < uVar3) goto code_r0x0800bc00;
                                    module_put(*(pcVar10 + 0x10));
                                    if (unaff_w19 == 0 && uVar3 != 0) {
                                        unaff_w19 = uVar3;
                                    }
                                    goto code_r0x0800ba50;
                                }
                                break;
                            }
                            cVar1 = *pcVar11;
                            pcVar11 = pcVar11 + 200;
                        } while (cVar1 != '\0');
                    }
                }
                _raw_spin_unlock(obj.part_parser_lock);
code_r0x0800ba50:
                iVar6 = of_prop_next_string(pcVar8,iVar6);
            } while (iVar6 != 0);
        }
        _raw_spin_lock(obj.part_parser_lock);
        for (pcVar10 = _obj.part_parsers; pcVar10 != obj.part_parsers; pcVar10 = *pcVar10) {
            iVar2 = strcmp(*(pcVar10 + 0x18),"fixed-partitions");
            if ((iVar2 == 0) && (uVar4 = try_module_get(*(pcVar10 + 0x10)), (uVar4 & 1) != 0)) {
                _raw_spin_unlock(obj.part_parser_lock);
                if (pcVar10 == NULL) goto code_r0x0800ba90;
                goto code_r0x0800bb24;
            }
        }
        _raw_spin_unlock(obj.part_parser_lock);
code_r0x0800ba90:
        iVar2 = __request_module(1,0x800134e,"fixed-partitions");
        if (iVar2 == 0) {
            _raw_spin_lock(obj.part_parser_lock);
            for (pcVar10 = _obj.part_parsers; pcVar10 != obj.part_parsers; pcVar10 = *pcVar10) {
                iVar2 = strcmp(*(pcVar10 + 0x18),"fixed-partitions");
                if ((iVar2 == 0) && (uVar4 = try_module_get(*(pcVar10 + 0x10)), (uVar4 & 1) != 0)) {
                    _raw_spin_unlock(obj.part_parser_lock);
                    if (pcVar10 != NULL) goto code_r0x0800bb24;
                    goto code_r0x0800bb80;
                }
            }
            _raw_spin_unlock(obj.part_parser_lock);
        }
        goto code_r0x0800bb80;
    }
    _raw_spin_lock(obj.part_parser_lock);
    for (pcVar10 = _obj.part_parsers; pcVar10 != obj.part_parsers; pcVar10 = *pcVar10) {
        iVar2 = strcmp(*(pcVar10 + 0x18),iVar6);
        if ((iVar2 == 0) && (uVar4 = try_module_get(*(pcVar10 + 0x10)), (uVar4 & 1) != 0)) {
            _raw_spin_unlock(obj.part_parser_lock);
            if (pcVar10 == NULL) goto code_r0x0800b8a0;
            goto code_r0x0800b900;
        }
    }
    _raw_spin_unlock(obj.part_parser_lock);
code_r0x0800b8a0:
    iVar2 = __request_module(1,0x800134e,*arg2);
    if (iVar2 == 0) {
        uVar7 = *arg2;
        _raw_spin_lock(obj.part_parser_lock);
        for (pcVar10 = _obj.part_parsers; pcVar10 != obj.part_parsers; pcVar10 = *pcVar10) {
            iVar2 = strcmp(*(pcVar10 + 0x18),uVar7);
            if ((iVar2 == 0) && (uVar4 = try_module_get(*(pcVar10 + 0x10)), (uVar4 & 1) != 0)) {
                _raw_spin_unlock(obj.part_parser_lock);
                if (pcVar10 != NULL) goto code_r0x0800b900;
                goto code_r0x0800b838;
            }
        }
        _raw_spin_unlock(obj.part_parser_lock);
    }
    goto code_r0x0800b838;
code_r0x0800bb24:
    pcVar8 = *(pcVar10 + 0x28);
    __cfi_slowpath_diag(0x2236638f2b85595a,pcVar8,0x80010e0);
    uVar3 = (*pcVar8)(arg1,&iStack_80,0);
    uVar4 = uVar3;
    if (0 < uVar3) goto code_r0x0800bc00;
    module_put(*(pcVar10 + 0x10));
    if ((uVar3 == 0) || (unaff_w19 != 0)) {
code_r0x0800bb80:
        uVar3 = unaff_w19;
    }
    goto code_r0x0800bb84;
code_r0x0800b900:
    pcVar8 = *(pcVar10 + 0x28);
    __cfi_slowpath_diag(0x2236638f2b85595a,pcVar8,0x80010e0);
    uVar3 = (*pcVar8)(arg1,&iStack_80,arg3);
    uVar4 = uVar3;
    if (0 < uVar3) {
code_r0x0800bc00:
        _printk(0x8001898,uVar4,*(pcVar10 + 0x18),*(arg1 + 0x38));
        uStack_78 = CONCAT44(uStack_78._4_4_,uVar4);
        pcStack_70 = pcVar10;
        unaff_w19 = sym.add_mtd_partitions(arg1,iStack_80,uVar4);
        arg2 = pcStack_70;
        if (pcStack_70 == NULL) goto code_r0x0800bc6c;
        pcVar8 = *(pcStack_70 + 0x30);
        if (pcVar8 == NULL) goto code_r0x0800bc64;
        if (pcVar8 != sym.__typeid__ZTSFvPK13mtd_partitioniE_global_addr) goto code_r0x0800bc80;
        goto code_r0x0800bc58;
    }
    module_put(*(pcVar10 + 0x10));
code_r0x0800bb84:
    if (uVar9 == 0 && uVar3 != 0) {
        uVar9 = uVar3;
    }
code_r0x0800b838:
    arg2 = arg2 + 8;
    iVar6 = *arg2;
    pcVar8 = NULL;
    if (iVar6 == 0) goto code_r0x0800bbc0;
    goto code_r0x0800b840;
}


// ===== sym.__register_mtd_parser @ 0x0800bca4 (size 152) =====

ulong sym.__register_mtd_parser(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x10) = arg2;
    if (*(arg1 + 0x30) == 0) {
        *(arg1 + 0x30) = sym.__typeid__ZTSFvPK13mtd_partitioniE_global_addr;
    }
    _raw_spin_lock(obj.part_parser_lock);
    iVar1 = _obj.part_parsers;
    uVar2 = __list_add_valid(arg1,obj.part_parsers,_obj.part_parsers);
    if ((uVar2 & 1) != 0) {
        *(iVar1 + 8) = arg1;
        *arg1 = iVar1;
        *(arg1 + 8) = obj.part_parsers;
        _segment.ehdr = arg1;
    }
    _raw_spin_unlock(obj.part_parser_lock);
    return 0;
}


// ===== sym.mtd_part_parser_cleanup_default @ 0x0800bd3c (size 36) =====

void sym.mtd_part_parser_cleanup_default(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree();
    return;
}


// ===== sym.deregister_mtd_parser @ 0x0800bd60 (size 112) =====

void sym.deregister_mtd_parser(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(obj.part_parser_lock);
    uVar3 = __list_del_entry_valid(arg1);
    if ((uVar3 & 1) != 0) {
        iVar1 = *arg1;
        piVar2 = *(arg1 + 8);
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    *arg1 = 0xdead000000000100;
    *(arg1 + 8) = 0xdead000000000122;
    _raw_spin_unlock(obj.part_parser_lock);
    return;
}


// ===== sym.mtd_part_parser_cleanup @ 0x0800bdd0 (size 160) =====

void sym.mtd_part_parser_cleanup(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 != 0) && (iVar2 = *(arg1 + 0x10), iVar2 != 0)) {
        pcVar1 = *(iVar2 + 0x30);
        if (pcVar1 != NULL) {
            if (pcVar1 != sym.__typeid__ZTSFvPK13mtd_partitioniE_global_addr) {
                __cfi_slowpath_diag(0xc2391e6952d29afd,pcVar1,0x80010c0);
            }
            (*pcVar1)(*arg1,*(arg1 + 8));
        }
        module_put(*(iVar2 + 0x10));
    }
    return;
}


// ===== sym.mtd_get_device_size @ 0x0800be70 (size 28) =====

ulong sym.mtd_get_device_size(int64_t arg1)

{
    int64_t iVar1;
    
    do {
        iVar1 = arg1;
        arg1 = *(iVar1 + 0x568);
    } while (arg1 != 0);
    return *(iVar1 + 8);
}


// ===== sym.offset_show @ 0x0800be8c (size 64) =====

int64_t sym.offset_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,"%lld\n",*(*(arg1 + 0x98) + 0x590));
    return iVar1;
}


// ===== sym.mtdchar_lseek @ 0x0800becc (size 48) =====

void sym.mtdchar_lseek(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    fixed_size_llseek();
    return;
}


// ===== sym.mtdchar_read @ 0x0800befc (size 556) =====

int64_t sym.mtdchar_read(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong **arg4_00;
    int iVar6;
    uint64_t uVar7;
    ulong *puVar8;
    uint64_t uVar9;
    ulong *puVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar11;
    int64_t iVar12;
    int64_t *piVar13;
    uint64_t uVar14;
    ulong *puVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    ulong uStack_178;
    ulong *puStack_170;
    int64_t iStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    int64_t iStack_148;
    ulong uStack_140;
    int64_t iStack_138;
    ulong *puStack_130;
    int64_t iStack_128;
    uchar *puStack_120;
    code *pcStack_118;
    ulong uStack_b8;
    int64_t iStack_b0;
    ulong *puStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    ulong uStack_80;
    uint64_t uStack_78;
    ulong *puStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_68 = *(iVar12 + 0x5e0);
    piVar13 = *(arg1 + 0xd8);
    uVar7 = *arg4;
    iVar12 = *piVar13;
    puStack_70 = NULL;
    uVar9 = *(iVar12 + 8);
    uVar14 = 0;
    if (uVar7 <= uVar9) {
        uVar14 = uVar9 - uVar7;
    }
    if (uVar7 + arg3 <= uVar9) {
        uVar14 = arg3;
    }
    uStack_78 = arg3;
    if (uVar14 == 0) {
        iVar11 = 0;
    }
    else {
        arg4_00 = arg4;
        iVar3 = sym.mtd_kmalloc_up_to(iVar12,&uStack_78);
        if (iVar3 == 0) {
            iVar11 = -0xc;
            arg4 = arg4_00;
        }
        else {
            iVar11 = 0;
            do {
                iVar2 = piVar13[1];
                uVar7 = uVar14;
                if (uStack_78 <= uVar14) {
                    uVar7 = uStack_78;
                }
                iVar6 = uVar7;
                if (iVar2 == 3) {
                    iStack_b0 = iVar6;
                    arg3 = &uStack_b8;
                    uStack_98 = 0;
                    uStack_90 = 0;
                    puStack_a8 = NULL;
                    uStack_a0 = 0;
                    uStack_b8 = 2;
                    uStack_80 = 0;
                    iStack_88 = iVar3;
                    iVar2 = sym.mtd_read_oob(iVar12,*arg4,arg3);
                    puVar8 = puStack_a8;
                }
                else if (iVar2 == 2) {
                    arg3 = iVar6;
                    arg4_00 = &puStack_70;
                    iVar2 = sym.mtd_read_user_prot_reg(iVar12,*arg4,arg3,arg4_00);
                    puVar8 = puStack_70;
                }
                else if (iVar2 == 1) {
                    arg3 = iVar6;
                    arg4_00 = &puStack_70;
                    iVar2 = sym.mtd_read_fact_prot_reg(iVar12,*arg4,arg3,arg4_00);
                    puVar8 = puStack_70;
                }
                else {
                    arg3 = iVar6;
                    arg4_00 = &puStack_70;
                    iVar2 = sym.mtd_read(iVar12,*arg4,arg3,arg4_00);
                    puVar8 = puStack_70;
                }
                puStack_70 = puVar8;
                if (((iVar2 != -0x75) && (iVar2 != 0)) && (iVar2 != -0x4a)) {
                    kfree(iVar3);
                    iVar11 = iVar2;
                    arg4 = arg4_00;
                    goto code_r0x0800c0e4;
                }
                *arg4 = *arg4 + puVar8;
                if (puVar8 >> 0x1f != 0) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x800,0x800c0d8);
                    (*pcVar1)();
                }
                auVar16 = __check_object_size(iVar3,puVar8,1);
                iVar4 = sym._copy_to_user(arg2,auVar16,puVar8);
                if (iVar4 != 0) {
                    kfree(iVar3);
                    iVar11 = -0xe;
                    arg3 = puVar8;
                    arg4 = arg4_00;
                    goto code_r0x0800c0e4;
                }
                uVar7 = uVar14 - puStack_70;
                uVar14 = 0;
                if (puStack_70 != NULL) {
                    uVar14 = uVar7;
                }
                iVar11 = puStack_70 + iVar11;
                arg2 = arg2 + puStack_70;
            } while (uVar14 != 0);
            kfree(iVar3);
            arg3 = puVar8;
            arg4 = arg4_00;
        }
    }
code_r0x0800c0e4:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_68) {
        return iVar11;
    }
    auVar16 = __stack_chk_fail();
    iVar12 = auVar16._8_8_;
    *extraout_x18 = sym.mtdchar_write;
    pcStack_118 = sym.mtdchar_write;
    iVar11 = sp_el0;
    iStack_128 = *(iVar11 + 0x5e0);
    piVar13 = *(auVar16._0_8_ + 0xd8);
    puVar8 = *arg4;
    iVar11 = *piVar13;
    iStack_138 = 0;
    puVar10 = *(iVar11 + 8);
    puStack_130 = arg3;
    puStack_120 = &stack0xffffffffffffffa0;
    if (puVar10 < puVar8 || puVar10 - puVar8 == NULL) {
        iVar3 = -0x1c;
    }
    else {
        puVar15 = puVar10 - puVar8;
        if (puVar8 + arg3 <= puVar10) {
            puVar15 = arg3;
        }
        if (puVar15 == NULL) {
            iVar3 = 0;
        }
        else {
            iVar4 = sym.mtd_kmalloc_up_to(iVar11,&puStack_130);
            if (iVar4 == 0) {
                iVar3 = -0xc;
            }
            else {
                iVar3 = 0;
                do {
                    puVar8 = puVar15;
                    if (puStack_130 <= puVar15) {
                        puVar8 = puStack_130;
                    }
                    if (0x7fffffff00000000 < puVar8 << 0x20) {
    //WARNING: Does not return
                        pcVar1 = SoftwareBreakpoint(0x800,0x800c2e8);
                        (*pcVar1)();
                    }
                    puVar8 = puVar8;
                    __check_object_size(iVar4,puVar8,0);
                    arg3 = puVar8;
                    iVar5 = sym._copy_from_user(iVar4,iVar12,puVar8);
                    if (iVar5 != 0) {
                        kfree(iVar4);
                        iVar3 = -0xe;
                        goto code_r0x0800c2f4;
                    }
                    iVar2 = piVar13[1];
                    if (iVar2 != 2) {
                        if (iVar2 == 3) {
                            arg3 = &uStack_178;
                            uStack_158 = 0;
                            uStack_150 = 0;
                            iStack_168 = 0;
                            uStack_160 = 0;
                            uStack_178 = 2;
                            uStack_140 = 0;
                            puStack_170 = puVar8;
                            iStack_148 = iVar4;
                            iVar2 = sym.mtd_write_oob(iVar11,*arg4,arg3);
                            iStack_138 = iStack_168;
                            goto joined_r0x0800c280;
                        }
                        if (iVar2 != 1) {
                            iVar2 = sym.mtd_write(iVar11,*arg4,puVar8,&iStack_138);
                            arg3 = puVar8;
                            goto joined_r0x0800c280;
                        }
                        iVar2 = -0x1e;
code_r0x0800c2d4:
                        kfree(iVar4);
                        iVar3 = iVar2;
                        goto code_r0x0800c2f4;
                    }
                    iVar2 = sym.mtd_write_user_prot_reg(iVar11,*arg4,puVar8,&iStack_138);
                    arg3 = puVar8;
joined_r0x0800c280:
                    if ((iVar2 == -0x1c) && (iVar3 != 0)) break;
                    if (iVar2 != 0) goto code_r0x0800c2d4;
                    iVar3 = iStack_138 + iVar3;
                    puVar15 = puVar15 - iStack_138;
                    iVar12 = iVar12 + iStack_138;
                    *arg4 = *arg4 + iStack_138;
                } while (puVar15 != NULL);
                kfree(iVar4);
            }
        }
    }
code_r0x0800c2f4:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) != iStack_128) {
        auVar16 = __stack_chk_fail();
        *extraout_x18_00 = sym.mtdchar_unlocked_ioctl;
        iVar12 = **(auVar16._0_8_ + 0xd8);
        do {
            iVar11 = iVar12;
            iVar12 = *(iVar11 + 0x568);
        } while (iVar12 != 0);
        iVar11 = iVar11 + 0x5d8;
        mutex_lock(iVar11);
        iVar2 = sym.mtdchar_ioctl(auVar16._0_8_,auVar16._8_8_ & 0xffffffff,arg3);
        mutex_unlock(iVar11);
        return iVar2;
    }
    return iVar3;
}


// ===== sym.mtdchar_write @ 0x0800c128 (size 528) =====

int64_t sym.mtdchar_write(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    code *pcVar1;
    int iVar2;
    int64_t arg1_00;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar6;
    int64_t iVar7;
    ulong *arg3_00;
    int64_t *piVar8;
    uint64_t uVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    ulong uStack_b8;
    ulong *puStack_b0;
    int64_t iStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    piVar8 = *(arg1 + 0xd8);
    uVar4 = *arg4;
    iVar7 = *piVar8;
    iStack_78 = 0;
    uVar5 = *(iVar7 + 8);
    uStack_70 = arg3;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
        iVar6 = -0x1c;
    }
    else {
        uVar9 = uVar5 - uVar4;
        if (uVar4 + arg3 <= uVar5) {
            uVar9 = arg3;
        }
        if (uVar9 == 0) {
            iVar6 = 0;
        }
        else {
            arg1_00 = sym.mtd_kmalloc_up_to(iVar7,&uStack_70);
            if (arg1_00 == 0) {
                iVar6 = -0xc;
            }
            else {
                iVar6 = 0;
                do {
                    uVar4 = uVar9;
                    if (uStack_70 <= uVar9) {
                        uVar4 = uStack_70;
                    }
                    if (0x7fffffff00000000 < uVar4 << 0x20) {
    //WARNING: Does not return
                        pcVar1 = SoftwareBreakpoint(0x800,0x800c2e8);
                        (*pcVar1)();
                    }
                    arg3_00 = uVar4;
                    __check_object_size(arg1_00,arg3_00,0);
                    arg3 = arg3_00;
                    iVar3 = sym._copy_from_user(arg1_00,arg2,arg3_00);
                    if (iVar3 != 0) {
                        kfree(arg1_00);
                        iVar6 = -0xe;
                        goto code_r0x0800c2f4;
                    }
                    iVar2 = piVar8[1];
                    if (iVar2 != 2) {
                        if (iVar2 == 3) {
                            arg3 = &uStack_b8;
                            uStack_98 = 0;
                            uStack_90 = 0;
                            iStack_a8 = 0;
                            uStack_a0 = 0;
                            uStack_b8 = 2;
                            uStack_80 = 0;
                            puStack_b0 = arg3_00;
                            iStack_88 = arg1_00;
                            iVar2 = sym.mtd_write_oob(iVar7,*arg4,arg3);
                            iStack_78 = iStack_a8;
                            goto joined_r0x0800c280;
                        }
                        if (iVar2 != 1) {
                            iVar2 = sym.mtd_write(iVar7,*arg4,arg3_00,&iStack_78);
                            arg3 = arg3_00;
                            goto joined_r0x0800c280;
                        }
                        iVar2 = -0x1e;
code_r0x0800c2d4:
                        kfree(arg1_00);
                        iVar6 = iVar2;
                        goto code_r0x0800c2f4;
                    }
                    iVar2 = sym.mtd_write_user_prot_reg(iVar7,*arg4,arg3_00,&iStack_78);
                    arg3 = arg3_00;
joined_r0x0800c280:
                    if ((iVar2 == -0x1c) && (iVar6 != 0)) break;
                    if (iVar2 != 0) goto code_r0x0800c2d4;
                    iVar6 = iStack_78 + iVar6;
                    uVar9 = uVar9 - iStack_78;
                    arg2 = arg2 + iStack_78;
                    *arg4 = *arg4 + iStack_78;
                } while (uVar9 != 0);
                kfree(arg1_00);
            }
        }
    }
code_r0x0800c2f4:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_68) {
        auVar10 = __stack_chk_fail();
        *extraout_x18 = sym.mtdchar_unlocked_ioctl;
        iVar7 = **(auVar10._0_8_ + 0xd8);
        do {
            iVar6 = iVar7;
            iVar7 = *(iVar6 + 0x568);
        } while (iVar7 != 0);
        iVar6 = iVar6 + 0x5d8;
        mutex_lock(iVar6);
        iVar2 = sym.mtdchar_ioctl(auVar10._0_8_,auVar10._8_8_ & 0xffffffff,arg3);
        mutex_unlock(iVar6);
        return iVar2;
    }
    return iVar6;
}


// ===== sym.mtdchar_unlocked_ioctl @ 0x0800c338 (size 124) =====

int64_t sym.mtdchar_unlocked_ioctl(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = **(arg1 + 0xd8);
    do {
        iVar2 = iVar3;
        iVar3 = *(iVar2 + 0x568);
    } while (iVar3 != 0);
    iVar2 = iVar2 + 0x5d8;
    mutex_lock(iVar2);
    iVar1 = sym.mtdchar_ioctl(arg1,arg2 & 0xffffffff,arg3);
    mutex_unlock(iVar2);
    return iVar1;
}


// ===== sym.mtdchar_compat_ioctl @ 0x0800c3b4 (size 420) =====

int64_t sym.mtdchar_compat_ioctl(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t arg1_00;
    uint64_t arg2_00;
    ulong unaff_x30;
    ulong uStack_70;
    ulong uStack_68;
    uint64_t uStack_60;
    uint64_t uStack_58;
    uint64_t uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iVar1 = arg2;
    iStack_48 = *(iVar3 + 0x5e0);
    arg1_00 = **(arg1 + 0xd8);
    iVar3 = arg1_00;
    do {
        iVar2 = iVar3;
        iVar3 = *(iVar2 + 0x568);
    } while (iVar3 != 0);
    iVar2 = iVar2 + 0x5d8;
    arg2_00 = arg3 & 0xffffffff;
    mutex_lock(iVar2);
    if (iVar1 == 0x1269) {
        uStack_58 = 0;
        uStack_50 = 0;
        iVar3 = sym._copy_from_user(&uStack_58,arg2_00,0x10);
        if (iVar3 == 0) {
            uStack_70 = uStack_58;
            uStack_60 = uStack_50 >> 0x20;
            uStack_68 = uStack_50 & 0xffffffff;
            iVar1 = sym.mtdchar_blkpg_ioctl(arg1_00,&uStack_70);
            goto code_r0x0800c4f8;
        }
    }
    else if (iVar1 == -0x3ff3b2fc) {
        uStack_68 = uStack_68._4_4_ << 0x20;
        uStack_70 = 0;
        iVar3 = sym._copy_from_user(&uStack_70,arg2_00,0xc);
        if (iVar3 == 0) {
            iVar1 = sym.mtdchar_readoob(arg1,arg1_00,uStack_70 & 0xffffffff,uStack_70._4_4_);
            goto code_r0x0800c4f8;
        }
    }
    else {
        if (iVar1 != -0x3ff3b2fd) {
            iVar1 = sym.mtdchar_ioctl(arg1,arg2 & 0xffffffff,arg2_00);
            goto code_r0x0800c4f8;
        }
        uStack_68 = uStack_68._4_4_ << 0x20;
        uStack_70 = 0;
        if ((*(arg1 + 0x44) >> 1 & 1) == 0) {
            iVar1 = -1;
            goto code_r0x0800c4f8;
        }
        iVar3 = sym._copy_from_user(&uStack_70,arg2_00,0xc);
        if (iVar3 == 0) {
            iVar1 = sym.mtdchar_writeoob(arg1,arg1_00,uStack_70 & 0xffffffff,uStack_70._4_4_);
            goto code_r0x0800c4f8;
        }
    }
    iVar1 = -0xe;
code_r0x0800c4f8:
    mutex_unlock(iVar2);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_48) {
        __stack_chk_fail();
        return 0xffffffed;
    }
    return iVar1;
}


// ===== sym.mtdchar_mmap @ 0x0800c558 (size 16) =====

ulong sym.mtdchar_mmap(void)

{
    return 0xffffffed;
}


// ===== sym.mtdchar_open @ 0x0800c568 (size 232) =====

uint64_t sym.mtdchar_open(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char *arg1_00;
    ulong *puVar2;
    ulong *in_x18;
    uint64_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((*(arg2 + 0x44) >> 1 & 1) == 0) || ((*(arg1 + 0x4c) & 1) == 0)) {
        arg1_00 = sym.get_mtd_device(0,*(arg1 + 0x4c) >> 1 & 0x7ffff);
        if (arg1_00 < 0xfffffffffffff001) {
            if (*arg1_00 == '\0') {
                uVar3 = 0xffffffed;
            }
            else if (((*(arg2 + 0x44) >> 1 & 1) == 0) || ((arg1_00[5] >> 2 & 1) != 0)) {
                iVar1 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar1 = 0x30;
                }
                puVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x10);
                if (puVar2 != NULL) {
                    *puVar2 = arg1_00;
                    *(arg2 + 0xd8) = puVar2;
                    return 0;
                }
                uVar3 = 0xfffffff4;
            }
            else {
                uVar3 = 0xfffffff3;
            }
            sym.put_mtd_device(arg1_00);
        }
        else {
            uVar3 = arg1_00 & 0xffffffff;
        }
    }
    else {
        uVar3 = 0xfffffff3;
    }
    return uVar3;
}


// ===== sym.mtdchar_close @ 0x0800c650 (size 204) =====

ulong sym.mtdchar_close(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong *in_x18;
    int64_t *piVar4;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(arg1 + 0xd8);
    arg1_00 = *piVar4;
    iVar1 = arg1_00;
    if ((*(arg1 + 0x44) >> 1 & 1) != 0) {
        do {
            iVar2 = iVar1;
            iVar1 = *(iVar2 + 0x568);
        } while (*(iVar2 + 0x568) != 0);
        pcVar3 = *(iVar2 + 0xf0);
        if (pcVar3 != NULL) {
            if (4 < (pcVar3 + -0x8003ce0 >> 3 | pcVar3 << 0x3d)) {
                __cfi_slowpath_diag(0xcda853bfdc928661,pcVar3,0x8001100);
            }
            (*pcVar3)(iVar2);
        }
    }
    sym.put_mtd_device(arg1_00);
    *(arg1 + 0xd8) = 0;
    kfree(piVar4);
    return 0;
}


// ===== sym._copy_to_user @ 0x0800c71c (size 312) =====

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
        if ((_single_release >> 0x18 & 1) == 0) {
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
        if ((_single_release >> 0x18 & 1) == 0) {
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


// ===== sym.uaccess_ttbr0_enable @ 0x0800c890 (size 112) =====

void sym.uaccess_ttbr0_enable(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    if ((_single_release >> 0x18 & 1) == 0) {
        uVar2 = daif;
        if ((uVar2 & 0x80) == 0) {
            uVar3 = daif;
            daif = uVar3 | 0xc0;
        }
        iVar1 = sp_el0;
        uVar3 = ttbr1_el1;
        ttbr1_el1 = *(iVar1 + 8) & 0xffff000000000000 | uVar3 & 0xffffffffffff;
        InstructionSynchronizationBarrier();
        ttbr0_el1 = *(iVar1 + 8);
        InstructionSynchronizationBarrier();
        daif = uVar2;
    }
    return;
}


// ===== sym.uaccess_ttbr0_disable @ 0x0800c920 (size 100) =====

void sym.uaccess_ttbr0_disable(void)

{
    uint64_t uVar1;
    uint64_t uVar2;
    
    if ((_single_release >> 0x18 & 1) == 0) {
        uVar1 = daif;
        if ((uVar1 & 0x80) == 0) {
            uVar2 = daif;
            daif = uVar2 | 0xc0;
        }
        uVar2 = ttbr1_el1;
        ttbr0_el1 = (uVar2 & 0xffffffffffff) - 0x1000;
        InstructionSynchronizationBarrier();
        ttbr1_el1 = uVar2 & 0xffffffffffff;
        InstructionSynchronizationBarrier();
        daif = uVar1;
    }
    return;
}


// ===== sym._copy_from_user @ 0x0800c9a0 (size 376) =====

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
        if ((_single_release >> 0x18 & 1) == 0) {
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
        if ((_single_release >> 0x18 & 1) == 0) {
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


// ===== sym.mtdchar_ioctl @ 0x0800cb54 (size 3296) =====

//WARNING: Type propagation algorithm not settling

uint64_t sym.mtdchar_ioctl(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    int iVar3;
    code *pcVar4;
    bool bVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint64_t *puVar8;
    int64_t iVar9;
    uchar *puVar10;
    uchar *puVar11;
    uint64_t *in_x3;
    uint *in_x4;
    uint *in_x5;
    uint *puVar12;
    uint8_t *puVar13;
    uint8_t *puVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    ulong *extraout_x8;
    int iVar17;
    uint *extraout_x9;
    uint extraout_w10;
    uint uVar18;
    uint32_t *puVar19;
    uint64_t *puVar20;
    uint *puVar21;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint8_t *arg2_00;
    uint64_t uVar22;
    uint64_t uVar23;
    uint64_t *puVar24;
    ulong *puVar25;
    ulong unaff_x30;
    uchar in_q0 [16];
    uchar extraout_q0 [16];
    uchar noname_1 [16];
    uchar extraout_q0_00 [16];
    uchar noname_1_00 [16];
    uchar auVar26 [16];
    int64_t aiStack_268 [4];
    uint64_t uStack_248;
    uint64_t uStack_240;
    ulong uStack_238;
    int64_t iStack_230;
    int64_t iStack_228;
    uchar *puStack_220;
    code *pcStack_218;
    uint64_t uStack_210;
    uchar *puStack_208;
    uint64_t uStack_200;
    uint *puStack_1f8;
    uint uStack_1ec;
    int64_t aiStack_1e8 [8];
    int64_t iStack_1a8;
    uchar *puStack_1a0;
    code *pcStack_198;
    uint64_t *puStack_190;
    uint64_t uStack_188;
    uint8_t *puStack_180;
    uint64_t *puStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    int64_t iStack_150;
    uint *puStack_148;
    uint64_t *puStack_140;
    int64_t iStack_138;
    uint64_t *puStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    uint *puStack_110;
    uint64_t *puStack_108;
    ulong uStack_100;
    uint64_t uStack_f8;
    uint64_t uStack_f0;
    uint64_t *puStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_58 = *(iVar9 + 0x5e0);
    iVar3 = arg2;
    puVar25 = *(arg1 + 0xd8);
    arg2_00 = *puVar25;
    puVar14 = arg2_00;
    do {
        puVar13 = puVar14;
        puVar14 = *(puVar13 + 0x568);
    } while (*(puVar13 + 0x568) != NULL);
    uVar23 = 0xffffffe7;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    puVar10 = arg3;
    if (-0x3fcfb2e9 < iVar3) {
        if (iVar3 < 0x40084d02) {
            if (iVar3 < 0x1269) {
                if (iVar3 == -0x3fcfb2e8) goto code_r0x0800cd98;
                iVar17 = 0x125f;
            }
            else {
                if ((iVar3 == 0x1269) || (iVar3 == 0x4d13)) goto code_r0x0800cda8;
                iVar17 = 0x40044d0e;
            }
            goto code_r0x0800cd8c;
        }
        if (iVar3 < 0x400c4d0f) {
            uVar6 = iVar3 + 0xbff7b2fe;
            if (uVar6 < 0xb) {
                if ((1 << (uVar6 & 0x1f) & 0x419U) != 0) goto code_r0x0800cd98;
                if (uVar6 == 9) goto code_r0x0800cda8;
            }
        }
        else {
            if (iVar3 == 0x400c4d0f) goto code_r0x0800cda8;
            if (iVar3 != 0x40104d14) {
                iVar17 = 0x400c4d19;
                goto code_r0x0800cd24;
            }
code_r0x0800cd98:
            if ((*(arg1 + 0x44) >> 1 & 1) != 0) goto code_r0x0800cda8;
            uVar23 = 0xffffffff;
        }
        goto code_r0x0800d78c;
    }
    if (iVar3 < -0x7f37b2f6) {
        if (iVar3 < -0x7ff3b2f0) {
            if ((iVar3 != -0x7ffbb2f9) && (iVar3 != -0x7ffbb2f3)) {
                iVar17 = -0x7ff7b2e9;
                goto code_r0x0800cd8c;
            }
        }
        else {
            if (iVar3 == -0x7ff3b2f0) goto code_r0x0800cd98;
            if (iVar3 != -0x7fefb2ee) {
                iVar17 = -0x7fdfb2ff;
                goto code_r0x0800cd8c;
            }
        }
    }
    else if (iVar3 < -0x3fefb2fc) {
        if ((iVar3 != -0x7f37b2f6) && (iVar3 != -0x7eb7b2ef)) {
            iVar17 = -0x3fefb2fd;
code_r0x0800cd24:
            if (iVar3 != iVar17) goto code_r0x0800d78c;
            goto code_r0x0800cd98;
        }
    }
    else {
        if (iVar3 < -0x3fe7b2eb) {
            if (iVar3 == -0x3fefb2fc) goto code_r0x0800cda8;
            iVar17 = -0x3fefb2f8;
        }
        else {
            if (iVar3 == -0x3fe7b2eb) goto code_r0x0800cd98;
            iVar17 = -0x3fe7b2ea;
        }
code_r0x0800cd8c:
        if (iVar3 != iVar17) goto code_r0x0800d78c;
    }
code_r0x0800cda8:
    uVar23 = 0;
    if (iVar3 < -0x3fe7b2ea) {
        if (-0x7f37b2f7 < iVar3) {
            if (-0x3fefb2fd < iVar3) {
                if (iVar3 == -0x3fefb2fc) {
                    puVar10 = 0x10;
                    uStack_120 = NULL;
                    uStack_118 = NULL;
                    iVar9 = sym._copy_from_user(&stack0xfffffffffffffee0,arg3,0x10);
                    if (iVar9 == 0) {
                        puVar10 = uStack_120 & 0xffffffff;
                        in_x3 = uStack_120._4_4_;
                        in_x4 = uStack_118;
                        in_x5 = arg3;
                        uVar23 = sym.mtdchar_readoob(arg1,arg2_00,puVar10,uStack_120._4_4_);
                        goto code_r0x0800d73c;
                    }
                }
                else if (iVar3 == -0x3fefb2f8) {
                    puVar1 = arg3 + 0xc;
                    puVar25 = sp_el0;
                    uVar23 = puVar1 * 0x100 >> 8;
                    if (((*(puVar25 + 0x3e) >> 5 & 1) != 0) || (puVar19 = puVar1, (*puVar25 >> 0x1a & 1) != 0)) {
                        puVar19 = puVar1 & uVar23;
                    }
                    bVar5 = 0xfffffffffffffffb < puVar19;
                    puVar19 = puVar19 + 1;
                    uVar16 = 0;
                    if (!bVar5 || puVar19 == NULL) {
                        uVar16 = 0x7fffffffff;
                    }
                    if (bVar5) {
                        puVar19 = 0xffffffffffffffff;
                    }
                    if (!CARRY8(puVar19,~uVar16) && !CARRY8(puVar19 + ~uVar16,bVar5) || puVar19 == uVar16 + !bVar5) {
                        if ((puVar1 & uVar23 & 0xffffff8000000000) != 0) {
                            puVar1 = NULL;
                        }
                        sym.uaccess_ttbr0_enable();
                        uVar6 = *puVar1;
                        arg1 = uVar6;
                        sym.uaccess_ttbr0_disable();
                        if (*(arg2_00 + 0x60) <= uVar6) goto code_r0x0800d61c;
                        arg2_00 = *(arg2_00 + 0x68);
                        uVar23 = (arg3 << 8) >> 8;
                        if (((*(puVar25 + 0x3e) >> 5 & 1) != 0) || (uVar16 = arg3, (*puVar25 >> 0x1a & 1) != 0)) {
                            uVar16 = arg3 & uVar23;
                        }
                        bVar5 = 0xfffffffffffffffb < uVar16;
                        uVar16 = uVar16 + 4;
                        uVar22 = 0;
                        if (!bVar5 || uVar16 == 0) {
                            uVar22 = 0x7fffffffff;
                        }
                        if (bVar5) {
                            uVar16 = 0xffffffffffffffff;
                        }
                        if (!CARRY8(uVar16,~uVar22) && !CARRY8(uVar16 + ~uVar22,bVar5) || uVar16 == uVar22 + !bVar5) {
                            puVar12 = arg3;
                            if ((arg3 & uVar23 & 0xffffff8000000000) != 0) {
                                puVar12 = NULL;
                            }
                            uVar18 = *(arg2_00 + arg1 * 0x18);
                            sym.uaccess_ttbr0_enable();
                            *puVar12 = uVar18;
                            sym.uaccess_ttbr0_disable();
                            puVar12 = arg3 + 4;
                            uVar23 = puVar12 * 0x100 >> 8;
                            if (((*(puVar25 + 0x3e) >> 5 & 1) != 0) || (puVar21 = puVar12, (*puVar25 >> 0x1a & 1) != 0)
                               ) {
                                puVar21 = puVar12 & uVar23;
                            }
                            bVar5 = 0xfffffffffffffffb < puVar21;
                            puVar21 = puVar21 + 1;
                            uVar16 = 0;
                            if (!bVar5 || puVar21 == NULL) {
                                uVar16 = 0x7fffffffff;
                            }
                            if (bVar5) {
                                puVar21 = 0xffffffffffffffff;
                            }
                            if (!CARRY8(puVar21,~uVar16) && !CARRY8(puVar21 + ~uVar16,bVar5) ||
                                puVar21 == uVar16 + !bVar5) {
                                if ((puVar12 & uVar23 & 0xffffff8000000000) != 0) {
                                    puVar12 = NULL;
                                }
                                uVar18 = *(arg2_00 + arg1 * 0x18 + 8);
                                sym.uaccess_ttbr0_enable();
                                *puVar12 = uVar18;
                                sym.uaccess_ttbr0_disable();
                                puVar8 = arg3 + 8;
                                uVar23 = puVar8 * 0x100 >> 8;
                                if (((*(puVar25 + 0x3e) >> 5 & 1) != 0) ||
                                   (puVar20 = puVar8, (*puVar25 >> 0x1a & 1) != 0)) {
                                    puVar20 = puVar8 & uVar23;
                                }
                                bVar5 = 0xfffffffffffffffb < puVar20;
                                uVar16 = puVar20 + 4;
                                uVar22 = 0;
                                if (!bVar5 || uVar16 == 0) {
                                    uVar22 = 0x7fffffffff;
                                }
                                if (bVar5) {
                                    uVar16 = 0xffffffffffffffff;
                                }
                                if (!CARRY8(uVar16,~uVar22) && !CARRY8(uVar16 + ~uVar22,bVar5) ||
                                    uVar16 == uVar22 + !bVar5) {
                                    if ((puVar8 & uVar23 & 0xffffff8000000000) != 0) {
                                        puVar8 = NULL;
                                    }
                                    uVar6 = *(arg2_00 + arg1 * 0x18 + 0xc);
                                    arg2_00 = uVar6;
                                    sym.uaccess_ttbr0_enable();
                                    arg1 = 0;
                                    uVar23 = 0;
                                    *puVar8 = uVar6;
                                    sym.uaccess_ttbr0_disable();
                                    arg3 = puVar8;
                                    goto code_r0x0800d78c;
                                }
                            }
                        }
                    }
                }
                else {
                    if (iVar3 != -0x3fe7b2eb) goto code_r0x0800d78c;
                    puVar10 = 0x18;
                    uStack_118 = NULL;
                    puStack_110 = NULL;
                    uStack_120 = NULL;
                    iVar9 = sym._copy_from_user(&stack0xfffffffffffffee0,arg3,0x18);
                    if (iVar9 == 0) {
                        in_x5 = arg3 + 0xc;
                        puVar10 = uStack_120;
                        in_x4 = puStack_110;
                        uVar6 = uStack_118._4_4_;
                        goto code_r0x0800d0b0;
                    }
                }
                goto code_r0x0800d640;
            }
            if (iVar3 == -0x7f37b2f6) {
                uStack_68 = 0;
                uStack_60 = 0;
                uStack_78 = 0;
                uStack_70 = 0;
                uStack_88 = 0;
                uStack_80 = 0;
                uStack_98 = 0;
                uStack_90 = 0;
                uStack_a8 = 0;
                uStack_a0 = 0;
                uStack_b8 = 0;
                uStack_b0 = 0;
                uStack_c8 = 0;
                uStack_c0 = 0;
                uStack_d8 = 0;
                uStack_d0 = 0;
                puStack_e8 = NULL;
                uStack_e0 = 0;
                uStack_f8 = 0;
                uStack_f0 = 0;
                puStack_108 = NULL;
                uStack_100 = 0;
                uStack_118 = NULL;
                puStack_110 = NULL;
                uStack_120 = NULL;
                if (*(puVar13 + 0x48) == 0) goto code_r0x0800d3ec;
                uVar6 = sym.get_oobinfo(arg2_00,&stack0xfffffffffffffee0);
                uVar23 = uVar6;
                if (uVar6 == 0) {
                    puVar10 = 0xc8;
                    iVar9 = sym._copy_to_user(arg3,noname_1,200);
                    goto joined_r0x0800d40c;
                }
            }
            else if (iVar3 == -0x7eb7b2ef) {
                if (*(puVar13 + 0x48) != 0) {
                    puVar10 = 0x148;
                    puVar8 = kmem_cache_alloc_trace(_seq_read,0xcc0);
                    if (puVar8 == NULL) goto code_r0x0800d36c;
                    auVar26 = sym.shrink_ecclayout(arg2_00,puVar8);
                    puVar10 = 0x148;
                    iVar9 = sym._copy_to_user(arg3,auVar26,0x148);
                    bVar5 = iVar9 == 0;
                    goto code_r0x0800d77c;
                }
code_r0x0800d3ec:
                uVar23 = 0xffffffa1;
            }
            else if (iVar3 == -0x3fefb2fd) {
                puVar10 = 0x10;
                uStack_120 = NULL;
                uStack_118 = NULL;
                iVar9 = sym._copy_from_user(&stack0xfffffffffffffee0,arg3,0x10);
                if (iVar9 != 0) goto code_r0x0800d640;
                in_x5 = arg3 + 4;
                puVar10 = uStack_120 & 0xffffffff;
                in_x4 = uStack_118;
                uVar6 = uStack_120._4_4_;
code_r0x0800d0b0:
                in_x3 = uVar6;
                uVar23 = sym.mtdchar_writeoob(arg1,arg2_00,puVar10,uVar6);
                goto code_r0x0800d73c;
            }
            goto code_r0x0800d78c;
        }
        if (iVar3 < -0x7ff3b2f0) {
            if (iVar3 == -0x7ffbb2f9) {
                puVar10 = 0x4;
                iVar9 = sym._copy_to_user(arg3,in_q0,4);
                goto joined_r0x0800d40c;
            }
            if (iVar3 == -0x7ffbb2f3) {
                puVar10 = 0x4;
                uStack_120 = uStack_120 & 0xffffffff00000000;
                iVar9 = sym._copy_from_user(&stack0xfffffffffffffee0,arg3,4);
                if (iVar9 == 0) {
                    *(puVar25 + 1) = 0;
                    uVar6 = uStack_120;
                    goto code_r0x0800d6d4;
                }
            }
            else {
                if (iVar3 != -0x7ff7b2e9) goto code_r0x0800d78c;
                puVar10 = 0x8;
                uStack_120 = NULL;
                iVar9 = sym._copy_from_user(&stack0xfffffffffffffee0,arg3,8);
                if (iVar9 == 0) {
                    puVar10 = uStack_120._4_4_;
                    uVar23 = sym.mtd_is_locked(arg2_00,uStack_120 & 0xffffffff,uStack_120._4_4_);
                    goto code_r0x0800d73c;
                }
            }
        }
        else if (iVar3 == -0x7ff3b2f0) {
code_r0x0800d1ac:
            uStack_118 = uStack_118 & 0xffffffff00000000;
            uStack_120 = NULL;
            if (*(puVar25 + 1) != 2) {
code_r0x0800d61c:
                uVar23 = 0xffffffea;
                goto code_r0x0800d78c;
            }
            puVar10 = 0xc;
            iVar9 = sym._copy_from_user(&stack0xfffffffffffffee0,arg3,0xc);
            if (iVar9 == 0) {
                puVar10 = uStack_120 >> 0x20;
                if (iVar3 == -0x7ff3b2f0) {
                    uVar23 = sym.mtd_lock_user_prot_reg(arg2_00,uStack_120 & 0xffffffff,puVar10);
                }
                else {
                    uVar23 = sym.mtd_erase_user_prot_reg(arg2_00,uStack_120 & 0xffffffff,puVar10);
                }
                goto code_r0x0800d73c;
            }
        }
        else {
            if (iVar3 == -0x7fefb2ee) {
                auVar26 = sym.part_fill_badblockstats(arg2_00);
                puVar10 = 0x10;
                iVar9 = sym._copy_to_user(arg3,auVar26,0x10);
            }
            else {
                if (iVar3 != -0x7fdfb2ff) goto code_r0x0800d78c;
                puVar10 = 0x20;
                uStack_170 = CONCAT44(*(arg2_00 + 4),*arg2_00);
                uStack_168 = CONCAT44(*(arg2_00 + 0x10),*(arg2_00 + 8));
                uStack_160 = CONCAT44(*(arg2_00 + 0x1c),*(arg2_00 + 0x14));
                iVar9 = sym._copy_to_user(arg3,in_q0,0x20);
            }
joined_r0x0800d40c:
            if (iVar9 == 0) {
                uVar23 = 0;
                goto code_r0x0800d78c;
            }
        }
code_r0x0800d640:
        uVar23 = 0xfffffff2;
        goto code_r0x0800d78c;
    }
    if (iVar3 < 0x40084d02) {
        if (iVar3 < 0x1269) {
            if (iVar3 == -0x3fe7b2ea) {
                puVar10 = 0x18;
                uStack_118 = NULL;
                puStack_110 = NULL;
                uStack_120 = NULL;
                iVar9 = sym._copy_from_user(&stack0xfffffffffffffee0,arg3,0x18);
                if (iVar9 == 0) {
                    in_x5 = arg3 + 0xc;
                    in_x3 = uStack_118._4_4_;
                    puVar10 = uStack_120;
                    in_x4 = puStack_110;
                    uVar23 = sym.mtdchar_readoob(arg1,arg2_00,uStack_120,uStack_118._4_4_);
                    goto code_r0x0800d73c;
                }
            }
            else {
                puVar14 = arg2_00;
                if (iVar3 != -0x3fcfb2e8) goto code_r0x0800d78c;
                do {
                    puVar13 = puVar14;
                    puVar14 = *(puVar13 + 0x568);
                } while (puVar14 != NULL);
                puVar10 = 0x30;
                puStack_130 = NULL;
                uStack_128 = 0;
                puStack_140 = NULL;
                iStack_138 = 0;
                iStack_150 = 0;
                puStack_148 = NULL;
                uStack_f0 = 0;
                puStack_e8 = NULL;
                uStack_100 = 0;
                uStack_f8 = 0;
                puStack_110 = NULL;
                puStack_108 = NULL;
                uStack_120 = NULL;
                uStack_118 = NULL;
                iVar9 = sym._copy_from_user(&stack0xfffffffffffffeb0,arg3,0x30);
                puVar24 = puStack_130;
                puVar20 = puStack_140;
                if (iVar9 == 0) {
                    if (*(puVar13 + 0xa8) == 0) goto code_r0x0800d3ec;
                    uStack_f8 = uStack_f8 & 0xffffffff00000000;
                    uStack_118 = puStack_148;
                    puStack_108 = puStack_140;
                    uStack_120 = CONCAT44(uStack_120._4_4_,uStack_128);
                    arg1 = puVar24;
                    if (iStack_138 == 0) {
                        uStack_f0 = 0;
                    }
                    else {
                        uVar23 = memdup_user();
                        arg3 = puVar20;
                        uStack_f0 = uVar23;
                        if (0xfffffffffffff000 < uVar23) goto code_r0x0800d78c;
                    }
                    uVar23 = uStack_f0;
                    if (puVar24 == NULL) {
                        puStack_e8 = NULL;
                    }
                    else {
                        arg3 = memdup_user(puVar24,puVar20);
                        puStack_e8 = arg3;
                        if (0xfffffffffffff000 < arg3) {
                            kfree(uVar23);
                            uVar23 = arg3 & 0xffffffff;
                            goto code_r0x0800d78c;
                        }
                    }
                    puVar10 = &stack0xfffffffffffffee0;
                    uVar23 = sym.mtd_write_oob(arg2_00,iStack_150,puVar10);
                    uVar23 = uVar23 & 0xffffffff;
                    kfree(uStack_f0);
                    puVar8 = puStack_e8;
                    arg3 = puVar20;
                    goto code_r0x0800d784;
                }
            }
            goto code_r0x0800d640;
        }
        if (iVar3 == 0x1269) {
            puVar10 = 0x18;
            uStack_118 = NULL;
            puStack_110 = NULL;
            uStack_120 = NULL;
            iVar9 = sym._copy_from_user(&stack0xfffffffffffffee0,arg3,0x18);
            if (iVar9 != 0) goto code_r0x0800d640;
            uVar23 = sym.mtdchar_blkpg_ioctl(arg2_00,&stack0xfffffffffffffee0);
            goto code_r0x0800d73c;
        }
        if (iVar3 == 0x4d13) {
            *(puVar25 + 1) = 0;
            if (arg3 - 1U < 2) {
                uVar6 = arg3;
code_r0x0800d6d4:
                uVar23 = sym.otp_select_filemode(puVar25,uVar6);
                uVar23 = uVar23 & 0xffffffff;
                *(arg1 + 0x78) = 0;
            }
            else if (arg3 == 0) {
                uVar23 = 0;
                *(arg1 + 0x78) = 0;
            }
            else if (arg3 == 3) {
                do {
                    puVar14 = arg2_00;
                    arg2_00 = *(puVar14 + 0x568);
                } while (*(puVar14 + 0x568) != NULL);
                arg2_00 = NULL;
                if ((*(puVar14 + 0xa0) == 0) || (*(puVar14 + 0xa8) == 0)) goto code_r0x0800d3ec;
                uVar23 = 0;
                *(puVar25 + 1) = 3;
                *(arg1 + 0x78) = 0;
            }
            else {
                uVar23 = 0xffffffea;
                *(arg1 + 0x78) = 0;
            }
        }
        else if (iVar3 == 0x40044d0e) goto code_r0x0800d160;
        goto code_r0x0800d78c;
    }
    if (0x400c4d0e < iVar3) {
        if (iVar3 == 0x400c4d0f) {
code_r0x0800d160:
            puVar10 = 0x1000;
            puVar8 = kmem_cache_alloc_trace(_seq_read,0xcc0);
            uStack_120 = NULL;
            if (puVar8 != NULL) {
                puVar24 = puVar8;
                if (*(puVar25 + 1) == 2) {
                    puVar10 = &stack0xfffffffffffffee0;
                    in_x3 = puVar8;
                    uVar6 = sym.mtd_get_user_prot_info(arg2_00,0x1000,puVar10,puVar8);
                    auVar26 = extraout_q0_00;
                }
                else {
                    if (*(puVar25 + 1) != 1) {
                        uVar23 = 0xffffffea;
                        goto code_r0x0800d784;
                    }
                    puVar10 = &stack0xfffffffffffffee0;
                    in_x3 = puVar8;
                    uVar6 = sym.mtd_get_fact_prot_info(arg2_00,0x1000,puVar10,puVar8);
                    auVar26 = extraout_q0;
                }
                puVar11 = uStack_120;
                uVar23 = uVar6;
                if (uVar6 == 0) {
                    if (iVar3 == 0x40044d0e) {
                        puVar11 = 0x4;
                        iStack_150 = CONCAT44(iStack_150._4_4_,uStack_120 / 0xc);
                    }
                    else {
                        if (uStack_120 >> 0x1f != 0) {
    //WARNING: Does not return
                            pcVar4 = SoftwareBreakpoint(0x800,0x800d82c);
                            (*pcVar4)();
                        }
                        auVar26 = __check_object_size(puVar8,uStack_120,1);
                    }
                    arg2_00 = sym._copy_to_user(arg3,auVar26,puVar11);
                    bVar5 = arg2_00 == 0;
                    puVar10 = puVar11;
code_r0x0800d77c:
                    uVar6 = 0;
                    if (!bVar5) {
                        uVar6 = 0xfffffff2;
                    }
                    uVar23 = uVar6;
                    puVar24 = puVar8;
                }
                goto code_r0x0800d784;
            }
code_r0x0800d36c:
            uVar23 = 0xfffffff4;
        }
        else {
            if (iVar3 == 0x400c4d19) goto code_r0x0800d1ac;
            if (iVar3 == 0x40104d14) goto code_r0x0800cf80;
        }
        goto code_r0x0800d78c;
    }
    if (10 < iVar3 + 0xbff7b2feU) goto code_r0x0800d78c;
    //switch table (10 cases) at 0x8001f10
    switch(*((iVar3 + 0xbff7b2feU) * 4 + 0x8001f10) + 0x800cdf8) {
    case 0x800ce0c:
        puVar10 = 0x8;
        uStack_120 = NULL;
        iVar9 = sym._copy_from_user(&stack0xfffffffffffffee0,arg3,8);
        if (iVar9 != 0) goto code_r0x0800d640;
        puVar10 = uStack_120._4_4_;
        uVar23 = sym.mtd_lock(arg2_00,uStack_120 & 0xffffffff,uStack_120._4_4_);
        break;
    case 0x800cf80:
code_r0x0800cf80:
        puVar10 = 0x18;
        iVar9 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar9 = 0x30;
        }
        puVar8 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar9),0xdc0);
        if (puVar8 == NULL) goto code_r0x0800d36c;
        if (iVar3 == 0x40104d14) {
            puVar10 = 0x10;
            uStack_120 = NULL;
            uStack_118 = NULL;
            iVar9 = sym._copy_from_user(&stack0xfffffffffffffee0,arg3,0x10);
            puVar11 = uStack_120;
            puVar12 = uStack_118;
            if (iVar9 != 0) {
code_r0x0800d660:
                kfree(puVar8);
                uVar23 = 0xfffffff2;
                arg1 = puVar8;
                goto code_r0x0800d78c;
            }
        }
        else {
            puVar10 = 0x8;
            uStack_120 = NULL;
            iVar9 = sym._copy_from_user(&stack0xfffffffffffffee0,arg3,8);
            if (iVar9 != 0) goto code_r0x0800d660;
            puVar11 = uStack_120 & 0xffffffff;
            puVar12 = uStack_120 >> 0x20;
        }
        *puVar8 = puVar11;
        puVar8[1] = puVar12;
        uVar23 = sym.mtd_erase(arg2_00,puVar8);
        uVar23 = uVar23 & 0xffffffff;
        puVar24 = puVar8;
code_r0x0800d784:
        kfree(puVar8);
        arg1 = puVar24;
        goto code_r0x0800d78c;
    case 0x800d1f8:
        puVar10 = 0x8;
        uStack_120 = NULL;
        iVar9 = sym._copy_from_user(&stack0xfffffffffffffee0,arg3,8);
        if (iVar9 != 0) goto code_r0x0800d640;
        puVar10 = uStack_120._4_4_;
        uVar23 = sym.mtd_unlock(arg2_00,uStack_120 & 0xffffffff,uStack_120._4_4_);
        break;
    case 0x800d224:
        puVar10 = 0x8;
        uStack_120 = NULL;
        iVar9 = sym._copy_from_user(&stack0xfffffffffffffee0,arg3,8);
        if (iVar9 != 0) goto code_r0x0800d640;
        uVar23 = sym.mtd_block_isbad(arg2_00,uStack_120);
        break;
    case 0x800d250:
        puVar10 = 0x8;
        uStack_120 = NULL;
        iVar9 = sym._copy_from_user(&stack0xfffffffffffffee0,arg3,8);
        if (iVar9 != 0) goto code_r0x0800d640;
        uVar23 = sym.mtd_block_markbad(arg2_00,uStack_120);
        break;
    case 0x800d78c:
        goto code_r0x0800d78c;
    }
code_r0x0800d73c:
    uVar23 = uVar23 & 0xffffffff;
code_r0x0800d78c:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_58) {
        return uVar23 & 0xffffffff;
    }
    auVar26 = __stack_chk_fail();
    uVar22 = auVar26._8_8_;
    uVar6 = in_x3;
    *extraout_x18 = sym.mtdchar_writeoob;
    pcStack_198 = sym.mtdchar_writeoob;
    iVar9 = sp_el0;
    iStack_1a8 = *(iVar9 + 0x5e0);
    uVar16 = uVar22;
    do {
        uVar15 = uVar16;
        uVar16 = *(uVar15 + 0x568);
    } while (uVar16 != 0);
    aiStack_1e8[4] = 0;
    aiStack_1e8[5] = 0;
    aiStack_1e8[2] = 0;
    aiStack_1e8[3] = 0;
    aiStack_1e8[0] = 0;
    aiStack_1e8[1] = 0;
    puVar11 = puVar10;
    puVar12 = in_x5;
    puStack_1a0 = &stack0xffffffffffffffb0;
    puStack_190 = arg1;
    uStack_188 = uVar23;
    puStack_180 = arg2_00;
    puStack_178 = arg3;
    if (uVar6 < 0x1001) {
        if (*(uVar15 + 0xa8) == 0) {
            uVar23 = 0xffffffa1;
        }
        else {
            aiStack_1e8[3] = in_x3 & 0xffffffff;
            aiStack_1e8[6] = 0;
            uVar2 = *(uVar22 + 0x14) - 1U & puVar10;
            aiStack_1e8[5] = uVar2;
            aiStack_1e8[0] = (*(*(auVar26._0_8_ + 0xd8) + 8) == 3) << 1;
            if ((uVar2 != 0) && (*(uVar22 + 0x1c) - uVar2 < uVar6)) goto code_r0x0800d890;
            uVar23 = memdup_user(in_x4);
            aiStack_1e8[7] = uVar23;
            if (uVar23 < 0xfffffffffffff001) {
                uVar7 = sym.mtd_write_oob(uVar22,-*(uVar22 + 0x14) & puVar10,&stack0xfffffffffffffe18);
                puVar11 = 0x4;
                uStack_1ec = aiStack_1e8[4];
                uVar2 = 0xffffffb5;
                if (aiStack_1e8[4] >> 0x20 == 0) {
                    uVar2 = uVar7;
                }
                uVar22 = uVar2;
                iVar9 = sym._copy_to_user(in_x5,noname_1_00,4);
                if (iVar9 != 0) {
                    uVar2 = 0xfffffff2;
                }
                uVar23 = uVar2;
                kfree(aiStack_1e8[7]);
            }
        }
    }
    else {
code_r0x0800d890:
        uVar23 = 0xffffffea;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_1a8) {
        return uVar23 & 0xffffffff;
    }
    auVar26 = __stack_chk_fail();
    uVar16 = auVar26._8_8_;
    *extraout_x18_00 = sym.mtdchar_readoob;
    pcStack_218 = sym.mtdchar_readoob;
    iVar9 = sp_el0;
    iStack_228 = *(iVar9 + 0x5e0);
    uStack_238 = 0;
    iStack_230 = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    aiStack_268[2] = 0;
    aiStack_268[3] = 0;
    aiStack_268[0] = 0;
    aiStack_268[1] = 0;
    puStack_220 = &stack0xfffffffffffffe60;
    uStack_210 = uVar23;
    puStack_208 = puVar10;
    uStack_200 = uVar22;
    puStack_1f8 = in_x5;
    if (uVar6 < 0x1001) {
        aiStack_268[3] = uVar6;
        uVar2 = *(uVar16 + 0x14) - 1U & puVar11;
        uStack_240 = uVar2;
        aiStack_268[0] = (*(*(auVar26._0_8_ + 0xd8) + 8) == 3) << 1;
        if ((uVar2 == 0) || (in_x5 = in_x4, uVar22 = uVar16, uVar6 <= *(uVar16 + 0x1c) - uVar2)) {
            iStack_230 = __kmalloc(aiStack_268[3],0xcc0);
            if (iStack_230 != 0) {
                uVar16 = sym.mtd_read_oob(uVar16,-*(uVar16 + 0x14) & puVar11,&stack0xfffffffffffffd98);
                uVar16 = uVar16 & 0xffffffff;
                puVar25 = sp_el0;
                uVar23 = (puVar12 << 8) >> 8;
                if (((*(puVar25 + 0x3e) >> 5 & 1) != 0) || (puVar21 = puVar12, (*puVar25 >> 0x1a & 1) != 0)) {
                    puVar21 = puVar12 & uVar23;
                }
                bVar5 = 0xfffffffffffffffb < puVar21;
                puVar21 = puVar21 + 1;
                uVar22 = 0;
                if (!bVar5 || puVar21 == NULL) {
                    uVar22 = 0x7fffffffff;
                }
                if (bVar5) {
                    puVar21 = 0xffffffffffffffff;
                }
                if ((CARRY8(puVar21,~uVar22) || CARRY8(puVar21 + ~uVar22,bVar5)) && puVar21 != uVar22 + !bVar5) {
                    uVar16 = 0xfffffff2;
                    goto code_r0x0800db50;
                }
                if ((puVar12 & uVar23 & 0xffffff8000000000) != 0) {
                    puVar12 = NULL;
                }
                uVar18 = uStack_248;
                goto code_r0x0800dbf8;
            }
            uVar23 = 0xfffffff4;
            goto code_r0x0800db70;
        }
    }
    uVar16 = uVar22;
    uVar23 = 0xffffffea;
    in_x4 = in_x5;
code_r0x0800db70:
    do {
        iVar9 = sp_el0;
        if (*(iVar9 + 0x5e0) == iStack_228) {
            return uVar23;
        }
        __stack_chk_fail(uVar23);
        puVar25 = extraout_x8;
        puVar12 = extraout_x9;
        uVar18 = extraout_w10;
code_r0x0800dbf8:
        uVar23 = uStack_248;
        if ((_single_release >> 0x18 & 1) == 0) {
            uVar22 = daif;
            if ((uVar22 & 0x80) == 0) {
                uVar15 = daif;
                daif = uVar15 | 0xc0;
            }
            uVar15 = ttbr1_el1;
            ttbr1_el1 = puVar25[1] & 0xffff000000000000 | uVar15 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar25[1];
            InstructionSynchronizationBarrier();
            daif = uVar22;
        }
        *puVar12 = uVar18;
        if ((_single_release >> 0x18 & 1) == 0) {
            uVar22 = daif;
            if ((uVar22 & 0x80) == 0) {
                uVar15 = daif;
                daif = uVar15 | 0xc0;
            }
            uVar15 = ttbr1_el1;
            ttbr0_el1 = (uVar15 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar15 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar22;
        }
        if (uStack_248 != 0) {
            if (uStack_248 >> 0x1f != 0) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x800,0x800dbec);
                (*pcVar4)();
            }
            auVar26 = __check_object_size(iStack_230,uStack_248,1);
            iVar9 = sym._copy_to_user(in_x4,auVar26,uVar23);
            uVar6 = uVar16;
            if (iVar9 != 0) {
                uVar6 = 0xfffffff2;
            }
            uVar16 = uVar6;
        }
code_r0x0800db50:
        kfree(iStack_230);
        uVar6 = uVar16;
        if (uVar6 == 0xffffffb6 || uVar6 == 0xffffff8b) {
            uVar6 = 0;
        }
        uVar23 = uVar6;
    } while( true );
}


// ===== sym.mtdchar_writeoob @ 0x0800d834 (size 352) =====

uint64_t sym.mtdchar_writeoob(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    code *pcVar1;
    bool bVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint *in_x4;
    uint *in_x5;
    uint *puVar6;
    uint32_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong *extraout_x8;
    ulong *puVar10;
    uint *extraout_x9;
    uint extraout_w10;
    uint uVar11;
    uint *puVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar13;
    uint64_t uVar14;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar auVar15 [16];
    int64_t aiStack_f8 [4];
    uint64_t uStack_d8;
    uint64_t uStack_d0;
    ulong uStack_c8;
    int64_t iStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    uint64_t uStack_a0;
    int64_t iStack_98;
    uint64_t uStack_90;
    uint uStack_7c;
    int64_t aiStack_78 [8];
    int64_t iStack_38;
    
    uVar4 = arg4;
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    iVar9 = arg2;
    do {
        iVar8 = iVar9;
        iVar9 = *(iVar8 + 0x568);
    } while (iVar9 != 0);
    aiStack_78[4] = 0;
    aiStack_78[5] = 0;
    aiStack_78[2] = 0;
    aiStack_78[3] = 0;
    aiStack_78[0] = 0;
    aiStack_78[1] = 0;
    uVar5 = arg3;
    puVar6 = in_x5;
    if (arg4 < 0x1001) {
        if (*(iVar8 + 0xa8) == 0) {
            uVar14 = 0xffffffa1;
        }
        else {
            aiStack_78[6] = 0;
            uVar7 = *(arg2 + 0x14) - 1U & arg3;
            aiStack_78[5] = uVar7;
            aiStack_78[0] = (*(*(arg1 + 0xd8) + 8) == 3) << 1;
            aiStack_78[3] = uVar4;
            if ((uVar7 != 0) && (*(arg2 + 0x1c) - uVar7 < arg4)) goto code_r0x0800d890;
            uVar14 = memdup_user();
            arg4 = uVar4;
            aiStack_78[7] = uVar14;
            if (uVar14 < 0xfffffffffffff001) {
                uVar3 = sym.mtd_write_oob(arg2,-*(arg2 + 0x14) & arg3,aiStack_78);
                uVar5 = 4;
                uStack_7c = aiStack_78[4];
                uVar7 = 0xffffffb5;
                if (aiStack_78[4] >> 0x20 == 0) {
                    uVar7 = uVar3;
                }
                arg2 = uVar7;
                iVar9 = sym._copy_to_user(in_x5,noname_1,4);
                if (iVar9 != 0) {
                    uVar7 = 0xfffffff2;
                }
                uVar14 = uVar7;
                kfree(aiStack_78[7]);
            }
        }
    }
    else {
code_r0x0800d890:
        uVar14 = 0xffffffea;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return uVar14 & 0xffffffff;
    }
    auVar15 = __stack_chk_fail();
    uVar13 = auVar15._8_8_;
    *extraout_x18 = sym.mtdchar_readoob;
    pcStack_a8 = sym.mtdchar_readoob;
    iVar9 = sp_el0;
    iStack_b8 = *(iVar9 + 0x5e0);
    uStack_c8 = 0;
    iStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    aiStack_f8[2] = 0;
    aiStack_f8[3] = 0;
    aiStack_f8[0] = 0;
    aiStack_f8[1] = 0;
    uVar4 = arg2;
    puStack_b0 = &stack0xffffffffffffffd0;
    uStack_a0 = uVar14;
    iStack_98 = arg3;
    uStack_90 = arg2;
    if (arg4 < 0x1001) {
        aiStack_f8[3] = arg4;
        uVar7 = *(uVar13 + 0x14) - 1U & uVar5;
        uStack_d0 = uVar7;
        aiStack_f8[0] = (*(*(auVar15._0_8_ + 0xd8) + 8) == 3) << 1;
        if ((uVar7 == 0) || (in_x5 = in_x4, uVar4 = uVar13, arg4 <= *(uVar13 + 0x1c) - uVar7)) {
            iStack_c0 = __kmalloc(aiStack_f8[3],0xcc0);
            if (iStack_c0 != 0) {
                uVar13 = sym.mtd_read_oob(uVar13,-*(uVar13 + 0x14) & uVar5,aiStack_f8);
                uVar13 = uVar13 & 0xffffffff;
                puVar10 = sp_el0;
                uVar4 = (puVar6 << 8) >> 8;
                if (((*(puVar10 + 0x3e) >> 5 & 1) != 0) || (puVar12 = puVar6, (*puVar10 >> 0x1a & 1) != 0)) {
                    puVar12 = puVar6 & uVar4;
                }
                bVar2 = 0xfffffffffffffffb < puVar12;
                puVar12 = puVar12 + 1;
                uVar5 = 0;
                if (!bVar2 || puVar12 == NULL) {
                    uVar5 = 0x7fffffffff;
                }
                if (bVar2) {
                    puVar12 = 0xffffffffffffffff;
                }
                if (!CARRY8(puVar12,~uVar5) && !CARRY8(puVar12 + ~uVar5,bVar2) || puVar12 == uVar5 + !bVar2) {
                    if ((puVar6 & uVar4 & 0xffffff8000000000) != 0) {
                        puVar6 = NULL;
                    }
                    uVar11 = uStack_d8;
                    goto code_r0x0800dbf8;
                }
                uVar13 = 0xfffffff2;
                goto code_r0x0800db50;
            }
            uVar4 = 0xfffffff4;
            goto code_r0x0800db70;
        }
    }
    uVar13 = uVar4;
    uVar4 = 0xffffffea;
    in_x4 = in_x5;
code_r0x0800db70:
    do {
        iVar9 = sp_el0;
        if (*(iVar9 + 0x5e0) == iStack_b8) {
            return uVar4;
        }
        __stack_chk_fail(uVar4);
        puVar10 = extraout_x8;
        puVar6 = extraout_x9;
        uVar11 = extraout_w10;
code_r0x0800dbf8:
        uVar4 = uStack_d8;
        if ((_single_release >> 0x18 & 1) == 0) {
            uVar5 = daif;
            if ((uVar5 & 0x80) == 0) {
                uVar14 = daif;
                daif = uVar14 | 0xc0;
            }
            uVar14 = ttbr1_el1;
            ttbr1_el1 = puVar10[1] & 0xffff000000000000 | uVar14 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar10[1];
            InstructionSynchronizationBarrier();
            daif = uVar5;
        }
        *puVar6 = uVar11;
        if ((_single_release >> 0x18 & 1) == 0) {
            uVar5 = daif;
            if ((uVar5 & 0x80) == 0) {
                uVar14 = daif;
                daif = uVar14 | 0xc0;
            }
            uVar14 = ttbr1_el1;
            ttbr0_el1 = (uVar14 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar14 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar5;
        }
        if (uStack_d8 != 0) {
            if (uStack_d8 >> 0x1f != 0) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x800,0x800dbec);
                (*pcVar1)();
            }
            auVar15 = __check_object_size(iStack_c0,uStack_d8,1);
            iVar9 = sym._copy_to_user(in_x4,auVar15,uVar4);
            uVar7 = uVar13;
            if (iVar9 != 0) {
                uVar7 = 0xfffffff2;
            }
            uVar13 = uVar7;
        }
code_r0x0800db50:
        kfree(iStack_c0);
        uVar7 = uVar13;
        if (uVar7 == 0xffffffb6 || uVar7 == 0xffffff8b) {
            uVar7 = 0;
        }
        uVar4 = uVar7;
    } while( true );
}


// ===== sym.mtdchar_readoob @ 0x0800d994 (size 648) =====

void sym.mtdchar_readoob(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    uint64_t uVar1;
    uint64_t uVar2;
    code *pcVar3;
    bool bVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t in_x4;
    uint *in_x5;
    uint32_t uVar7;
    ulong *extraout_x8;
    ulong *puVar8;
    uint *extraout_x9;
    uint extraout_w10;
    uint uVar9;
    uint *puVar10;
    ulong *in_x18;
    int64_t unaff_x19;
    int iVar11;
    uint64_t unaff_x20;
    ulong unaff_x30;
    uchar noname_1 [16];
    int64_t aiStack_78 [4];
    uint64_t uStack_58;
    uint64_t uStack_50;
    ulong uStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    
    uVar5 = arg4;
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_48 = 0;
    iStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    aiStack_78[2] = 0;
    aiStack_78[3] = 0;
    aiStack_78[0] = 0;
    aiStack_78[1] = 0;
    if (arg4 < 0x1001) {
        uVar7 = *(arg2 + 0x14) - 1U & arg3;
        uStack_50 = uVar7;
        aiStack_78[0] = (*(*(arg1 + 0xd8) + 8) == 3) << 1;
        aiStack_78[3] = uVar5;
        if ((uVar7 == 0) || (unaff_x19 = in_x4, unaff_x20 = arg2, arg4 <= *(arg2 + 0x1c) - uVar7)) {
            iStack_40 = __kmalloc(uVar5,0xcc0);
            if (iStack_40 != 0) {
                uVar5 = sym.mtd_read_oob(arg2,-*(arg2 + 0x14) & arg3,aiStack_78);
                arg2 = uVar5 & 0xffffffff;
                puVar8 = sp_el0;
                uVar5 = (in_x5 << 8) >> 8;
                if (((*(puVar8 + 0x3e) >> 5 & 1) != 0) || (puVar10 = in_x5, (*puVar8 >> 0x1a & 1) != 0)) {
                    puVar10 = in_x5 & uVar5;
                }
                bVar4 = 0xfffffffffffffffb < puVar10;
                puVar10 = puVar10 + 1;
                uVar1 = 0;
                if (!bVar4 || puVar10 == NULL) {
                    uVar1 = 0x7fffffffff;
                }
                if (bVar4) {
                    puVar10 = 0xffffffffffffffff;
                }
                if (!CARRY8(puVar10,~uVar1) && !CARRY8(puVar10 + ~uVar1,bVar4) || puVar10 == uVar1 + !bVar4) {
                    if ((in_x5 & uVar5 & 0xffffff8000000000) != 0) {
                        in_x5 = NULL;
                    }
                    uVar9 = uStack_58;
                    goto code_r0x0800dbf8;
                }
                arg2 = 0xfffffff2;
                goto code_r0x0800db50;
            }
            iVar11 = -0xc;
            goto code_r0x0800db70;
        }
    }
    arg2 = unaff_x20;
    iVar11 = -0x16;
    in_x4 = unaff_x19;
code_r0x0800db70:
    do {
        iVar6 = sp_el0;
        if (*(iVar6 + 0x5e0) == iStack_38) {
            return;
        }
        __stack_chk_fail(iVar11);
        puVar8 = extraout_x8;
        in_x5 = extraout_x9;
        uVar9 = extraout_w10;
code_r0x0800dbf8:
        uVar5 = uStack_58;
        if ((_single_release >> 0x18 & 1) == 0) {
            uVar1 = daif;
            if ((uVar1 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr1_el1 = puVar8[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar8[1];
            InstructionSynchronizationBarrier();
            daif = uVar1;
        }
        *in_x5 = uVar9;
        if ((_single_release >> 0x18 & 1) == 0) {
            uVar1 = daif;
            if ((uVar1 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr0_el1 = (uVar2 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar1;
        }
        if (uStack_58 != 0) {
            if (uStack_58 >> 0x1f != 0) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x800,0x800dbec);
                (*pcVar3)();
            }
            noname_1 = __check_object_size(iStack_40,uStack_58,1);
            iVar6 = sym._copy_to_user(in_x4,noname_1,uVar5);
            uVar7 = arg2;
            if (iVar6 != 0) {
                uVar7 = 0xfffffff2;
            }
            arg2 = uVar7;
        }
code_r0x0800db50:
        kfree(iStack_40);
        iVar11 = arg2;
        if (iVar11 == -0x4a || iVar11 == -0x75) {
            iVar11 = 0;
        }
    } while( true );
}


// ===== sym.get_oobinfo @ 0x0800dc58 (size 576) =====

//WARNING: Control flow encountered bad instruction data

void sym.get_oobinfo(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t iVar6;
    int iVar7;
    int64_t *piVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t unaff_x19;
    int64_t *piVar11;
    uint64_t arg2_00;
    uint64_t uVar12;
    uint32_t uVar13;
    ulong unaff_x30;
    uchar auVar14 [12];
    uchar auVar15 [16];
    int64_t aiStack_190 [2];
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    uchar ***pppuStack_f0;
    code *pcStack_e8;
    int64_t iStack_e0;
    int64_t *piStack_d8;
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar **ppuStack_c0;
    code *pcStack_b8;
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t iStack_60;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    uVar4 = 0xffffffea;
    uStack_50 = 0;
    if ((arg1 != 0) && (unaff_x19 = arg2, arg2 != 0)) {
        arg2_00 = 0;
        uVar12 = 0;
        *(arg2 + 0xb8) = 0;
        *(arg2 + 0xc0) = 0;
        *(arg2 + 0xa8) = 0;
        *(arg2 + 0xb0) = 0;
        *(arg2 + 0x98) = 0;
        *(arg2 + 0xa0) = 0;
        *(arg2 + 0x88) = 0;
        *(arg2 + 0x90) = 0;
        *(arg2 + 0x78) = 0;
        *(arg2 + 0x80) = 0;
        *(arg2 + 0x68) = 0;
        *(arg2 + 0x70) = 0;
        *(arg2 + 0x58) = 0;
        *(arg2 + 0x60) = 0;
        *(arg2 + 0x50) = 0;
        *(arg2 + 0x38) = 0;
        *(arg2 + 0x40) = 0;
        *(arg2 + 0x28) = 0;
        *(arg2 + 0x30) = 0;
        *(arg2 + 0x18) = 0;
        *(arg2 + 0x20) = 0;
        *(arg2 + 8) = 0;
        *(arg2 + 0x10) = 0;
        *arg2 = 0;
        *(arg2 + 0x48) = 0;
        do {
            uVar4 = sym.mtd_ooblayout_ecc(arg1,arg2_00,&uStack_50);
            if (uVar4 < 0) {
                if (uVar4 != -0x22) goto code_r0x0800de5c;
                break;
            }
            if (0x20 < uStack_50._4_4_ + uVar12) {
                uVar4 = 0xffffffea;
                goto code_r0x0800de5c;
            }
            if (uStack_50 < uStack_50 + uStack_50._4_4_) {
                uVar12 = uVar12 & 0xffffffff;
                iVar3 = uStack_50._4_4_;
                uVar9 = uStack_50;
                do {
                    if (uVar12 == 0x20) {
    //WARNING: Does not return
                        pcVar2 = SoftwareBreakpoint(0x5512,0x800de94);
                        (*pcVar2)();
                    }
                    *(arg2 + 0x48 + uVar12 * 4) = uVar9;
                    uVar9 = uVar9 + 1;
                    uVar12 = uVar12 + 1;
                    iVar3 = iVar3 + -1;
                    *(arg2 + 4) = *(arg2 + 4) + 1;
                } while (iVar3 != 0);
            }
            arg2_00 = arg2_00 + 1;
        } while (uVar12 < 0x20);
        uVar4 = sym.mtd_ooblayout_free(arg1,0,&uStack_50);
        if (uVar4 < 0) {
code_r0x0800de40:
            if (uVar4 != -0x22) goto code_r0x0800de5c;
        }
        else {
            *(arg2 + 8) = uStack_50;
            *(arg2 + 0xc) = uStack_50._4_4_;
            uVar4 = sym.mtd_ooblayout_free(arg1,1,&uStack_50);
            if (uVar4 < 0) goto code_r0x0800de40;
            *(arg2 + 0x10) = uStack_50;
            *(arg2 + 0x14) = uStack_50._4_4_;
            uVar4 = sym.mtd_ooblayout_free(arg1,2,&uStack_50);
            if (uVar4 < 0) goto code_r0x0800de40;
            *(arg2 + 0x18) = uStack_50;
            *(arg2 + 0x1c) = uStack_50._4_4_;
            uVar4 = sym.mtd_ooblayout_free(arg1,3,&uStack_50);
            if (uVar4 < 0) goto code_r0x0800de40;
            *(arg2 + 0x20) = uStack_50;
            *(arg2 + 0x24) = uStack_50._4_4_;
            uVar4 = sym.mtd_ooblayout_free(arg1,4,&uStack_50);
            if (uVar4 < 0) goto code_r0x0800de40;
            *(arg2 + 0x28) = uStack_50;
            *(arg2 + 0x2c) = uStack_50._4_4_;
            uVar4 = sym.mtd_ooblayout_free(arg1,5,&uStack_50);
            if (uVar4 < 0) goto code_r0x0800de40;
            *(arg2 + 0x30) = uStack_50;
            *(arg2 + 0x34) = uStack_50._4_4_;
            uVar4 = sym.mtd_ooblayout_free(arg1,6,&uStack_50);
            if (uVar4 < 0) goto code_r0x0800de40;
            *(arg2 + 0x38) = uStack_50;
            *(arg2 + 0x3c) = uStack_50._4_4_;
            uVar4 = sym.mtd_ooblayout_free(arg1,7,&uStack_50);
            if (uVar4 < 0) goto code_r0x0800de40;
            *(arg2 + 0x40) = uStack_50;
            *(arg2 + 0x44) = uStack_50._4_4_;
        }
        uVar4 = 0;
        *arg2 = 2;
    }
code_r0x0800de5c:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return;
    }
    auVar14 = __stack_chk_fail(uVar4);
    iVar7 = auVar14._8_4_;
    piVar11 = auVar14._0_8_;
    *extraout_x18 = sym.otp_select_filemode;
    pcStack_68 = sym.otp_select_filemode;
    iVar6 = sp_el0;
    iStack_78 = *(iVar6 + 0x5e0);
    uStack_80 = 0;
    iVar3 = 0;
    puStack_70 = &stack0xffffffffffffffc0;
    iStack_60 = unaff_x19;
    if (iVar7 == 0) {
code_r0x0800df20:
        uVar4 = 0;
        *(piVar11 + 1) = iVar3;
    }
    else if (iVar7 == 2) {
        uVar4 = sym.mtd_read_user_prot_reg(*piVar11,-1,0,&uStack_80);
        if (uVar4 != -0x5f) {
            iVar3 = 2;
            goto code_r0x0800df20;
        }
    }
    else if (iVar7 == 1) {
        uVar4 = sym.mtd_read_fact_prot_reg(*piVar11,-1,0,&uStack_80);
        if (uVar4 != -0x5f) {
            iVar3 = 1;
            goto code_r0x0800df20;
        }
    }
    else {
        uVar4 = 0xffffffea;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_78) {
        return;
    }
    auVar15 = __stack_chk_fail(uVar4);
    piVar8 = auVar15._8_8_;
    iVar5 = auVar15._0_8_;
    *extraout_x18_00 = sym.shrink_ecclayout;
    pcStack_b8 = sym.shrink_ecclayout;
    iVar6 = sp_el0;
    iStack_c8 = *(iVar6 + 0x5e0);
    uStack_d0 = 0;
    ppuStack_c0 = &puStack_70;
    if ((iVar5 != 0) && (piVar11 = piVar8, piVar8 != NULL)) {
        memset(piVar8,0,0x148);
        uVar9 = 0;
        uVar13 = 0;
        while (iVar3 = sym.mtd_ooblayout_ecc(iVar5,uVar9,&uStack_d0), arg1 = iVar5, -1 < iVar3) {
            uVar9 = uVar9 + 1;
            uVar12 = uVar13;
            uVar1 = uStack_d0;
            if (uStack_d0 <= uStack_d0._4_4_ + uStack_d0) {
                uVar1 = uStack_d0._4_4_ + uStack_d0;
            }
            uVar1 = (uVar13 - uStack_d0) + uVar1;
            if (uVar13 < 0x41) {
                uVar13 = 0x40;
            }
            uVar10 = uStack_d0;
            while (uVar1 != uVar12) {
                if (uVar13 == uVar12) {
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x5512,0x800e1e0);
                    (*pcVar2)();
                }
                *(piVar8 + uVar12 * 4 + 4) = uVar10;
                uVar10 = uVar10 + 1;
                uVar12 = uVar12 + 1;
                *piVar8 = *piVar8 + 1;
                if (uVar12 == 0x40) goto code_r0x0800e048;
            }
            uVar13 = uVar1;
            if (0x3f < uVar1) goto code_r0x0800e048;
        }
        if (iVar3 != -0x22) goto code_r0x0800e1a8;
code_r0x0800e048:
        iVar3 = sym.mtd_ooblayout_free(iVar5,0,&uStack_d0);
        if (-1 < iVar3) {
            *(piVar8 + 0x21) = uStack_d0;
            *(piVar8 + 0x10c) = uStack_d0._4_4_;
            *(piVar8 + 0x104) = *(piVar8 + 0x104) + uStack_d0._4_4_;
            iVar3 = sym.mtd_ooblayout_free(iVar5,1,&uStack_d0);
            if (-1 < iVar3) {
                *(piVar8 + 0x22) = uStack_d0;
                *(piVar8 + 0x114) = uStack_d0._4_4_;
                *(piVar8 + 0x104) = *(piVar8 + 0x104) + uStack_d0._4_4_;
                iVar3 = sym.mtd_ooblayout_free(iVar5,2,&uStack_d0);
                if (-1 < iVar3) {
                    *(piVar8 + 0x23) = uStack_d0;
                    *(piVar8 + 0x11c) = uStack_d0._4_4_;
                    *(piVar8 + 0x104) = *(piVar8 + 0x104) + uStack_d0._4_4_;
                    iVar3 = sym.mtd_ooblayout_free(iVar5,3,&uStack_d0);
                    if (-1 < iVar3) {
                        *(piVar8 + 0x24) = uStack_d0;
                        *(piVar8 + 0x124) = uStack_d0._4_4_;
                        *(piVar8 + 0x104) = *(piVar8 + 0x104) + uStack_d0._4_4_;
                        iVar3 = sym.mtd_ooblayout_free(iVar5,4,&uStack_d0);
                        if (-1 < iVar3) {
                            *(piVar8 + 0x25) = uStack_d0;
                            *(piVar8 + 300) = uStack_d0._4_4_;
                            *(piVar8 + 0x104) = *(piVar8 + 0x104) + uStack_d0._4_4_;
                            iVar3 = sym.mtd_ooblayout_free(iVar5,5,&uStack_d0);
                            if (-1 < iVar3) {
                                *(piVar8 + 0x26) = uStack_d0;
                                *(piVar8 + 0x134) = uStack_d0._4_4_;
                                *(piVar8 + 0x104) = *(piVar8 + 0x104) + uStack_d0._4_4_;
                                iVar3 = sym.mtd_ooblayout_free(iVar5,6,&uStack_d0);
                                if (-1 < iVar3) {
                                    *(piVar8 + 0x27) = uStack_d0;
                                    *(piVar8 + 0x13c) = uStack_d0._4_4_;
                                    *(piVar8 + 0x104) = *(piVar8 + 0x104) + uStack_d0._4_4_;
                                    iVar3 = sym.mtd_ooblayout_free(iVar5,7,&uStack_d0);
                                    if (-1 < iVar3) {
                                        *(piVar8 + 0x28) = uStack_d0;
                                        *(piVar8 + 0x144) = uStack_d0._4_4_;
                                        *(piVar8 + 0x104) = *(piVar8 + 0x104) + uStack_d0._4_4_;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
code_r0x0800e1a8:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_c8) {
        return;
    }
    auVar15 = __stack_chk_fail();
    iVar5 = auVar15._0_8_;
    *extraout_x18_01 = sym.mtdchar_blkpg_ioctl;
    pcStack_e8 = sym.mtdchar_blkpg_ioctl;
    iVar6 = sp_el0;
    iStack_f8 = *(iVar6 + 0x5e0);
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    aiStack_190[1] = 0;
    uStack_180 = 0;
    aiStack_190[0] = 0;
    pppuStack_f0 = &ppuStack_c0;
    iStack_e0 = arg1;
    piStack_d8 = piVar11;
    uVar12 = capable(0x15);
    if ((uVar12 & 1) == 0) {
        uVar4 = 0xffffffff;
    }
    else {
        iVar6 = sym._copy_from_user(aiStack_190,*(auVar15._8_8_ + 4),0x98);
        if (iVar6 == 0) {
            iVar3 = *auVar15._8_8_;
            if (iVar3 == 2) {
                if (-1 < uStack_180) {
                    uVar4 = sym.mtd_del_partition(iVar5,uStack_180 & 0xffffffff);
                    goto code_r0x0800e264;
                }
            }
            else if ((iVar3 == 1) && (*(iVar5 + 0x568) == 0)) {
                uStack_140._0_4_ = uStack_140;
                uVar4 = sym.mtd_add_partition(iVar5,&uStack_180 + 4,aiStack_190[0],aiStack_190[1]);
                goto code_r0x0800e264;
            }
            uVar4 = 0xffffffea;
        }
        else {
            uVar4 = 0xfffffff2;
        }
    }
code_r0x0800e264:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_f8) {
        __stack_chk_fail(uVar4);
    //WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
    }
    return;
}


// ===== sym.otp_select_filemode @ 0x0800de98 (size 200) =====

//WARNING: Control flow encountered bad instruction data

void sym.otp_select_filemode(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint uVar7;
    int *piVar8;
    uint64_t uVar9;
    uint32_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x20;
    uint32_t uVar11;
    uint32_t uVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    int64_t aiStack_140 [2];
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    int *piStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
    uStack_30 = 0;
    uVar7 = 0;
    if (arg2 == 0) {
code_r0x0800df20:
        uVar4 = 0;
        *(arg1 + 8) = uVar7;
    }
    else if (arg2 == 2) {
        uVar4 = sym.mtd_read_user_prot_reg(*arg1,-1,0,&uStack_30);
        if (uVar4 != -0x5f) {
            uVar7 = 2;
            goto code_r0x0800df20;
        }
    }
    else if (arg2 == 1) {
        uVar4 = sym.mtd_read_fact_prot_reg(*arg1,-1,0,&uStack_30);
        if (uVar4 != -0x5f) {
            uVar7 = 1;
            goto code_r0x0800df20;
        }
    }
    else {
        uVar4 = 0xffffffea;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_28) {
        return;
    }
    auVar13 = __stack_chk_fail(uVar4);
    piVar8 = auVar13._8_8_;
    iVar5 = auVar13._0_8_;
    *extraout_x18 = sym.shrink_ecclayout;
    pcStack_68 = sym.shrink_ecclayout;
    iVar6 = sp_el0;
    iStack_78 = *(iVar6 + 0x5e0);
    uStack_80 = 0;
    puStack_70 = &stack0xffffffffffffffe0;
    if ((iVar5 != 0) && (arg1 = piVar8, piVar8 != NULL)) {
        memset(piVar8,0,0x148);
        uVar11 = 0;
        uVar12 = 0;
        while (iVar3 = sym.mtd_ooblayout_ecc(iVar5,uVar11,&uStack_80), unaff_x20 = iVar5, -1 < iVar3) {
            uVar11 = uVar11 + 1;
            uVar9 = uVar12;
            uVar1 = uStack_80;
            if (uStack_80 <= uStack_80._4_4_ + uStack_80) {
                uVar1 = uStack_80._4_4_ + uStack_80;
            }
            uVar1 = (uVar12 - uStack_80) + uVar1;
            if (uVar12 < 0x41) {
                uVar12 = 0x40;
            }
            uVar10 = uStack_80;
            while (uVar1 != uVar9) {
                if (uVar12 == uVar9) {
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x5512,0x800e1e0);
                    (*pcVar2)();
                }
                piVar8[uVar9 + 1] = uVar10;
                uVar10 = uVar10 + 1;
                uVar9 = uVar9 + 1;
                *piVar8 = *piVar8 + 1;
                if (uVar9 == 0x40) goto code_r0x0800e048;
            }
            uVar12 = uVar1;
            if (0x3f < uVar1) goto code_r0x0800e048;
        }
        if (iVar3 != -0x22) goto code_r0x0800e1a8;
code_r0x0800e048:
        iVar3 = sym.mtd_ooblayout_free(iVar5,0,&uStack_80);
        if (-1 < iVar3) {
            piVar8[0x42] = uStack_80;
            piVar8[0x43] = uStack_80._4_4_;
            piVar8[0x41] = piVar8[0x41] + uStack_80._4_4_;
            iVar3 = sym.mtd_ooblayout_free(iVar5,1,&uStack_80);
            if (-1 < iVar3) {
                piVar8[0x44] = uStack_80;
                piVar8[0x45] = uStack_80._4_4_;
                piVar8[0x41] = piVar8[0x41] + uStack_80._4_4_;
                iVar3 = sym.mtd_ooblayout_free(iVar5,2,&uStack_80);
                if (-1 < iVar3) {
                    piVar8[0x46] = uStack_80;
                    piVar8[0x47] = uStack_80._4_4_;
                    piVar8[0x41] = piVar8[0x41] + uStack_80._4_4_;
                    iVar3 = sym.mtd_ooblayout_free(iVar5,3,&uStack_80);
                    if (-1 < iVar3) {
                        piVar8[0x48] = uStack_80;
                        piVar8[0x49] = uStack_80._4_4_;
                        piVar8[0x41] = piVar8[0x41] + uStack_80._4_4_;
                        iVar3 = sym.mtd_ooblayout_free(iVar5,4,&uStack_80);
                        if (-1 < iVar3) {
                            piVar8[0x4a] = uStack_80;
                            piVar8[0x4b] = uStack_80._4_4_;
                            piVar8[0x41] = piVar8[0x41] + uStack_80._4_4_;
                            iVar3 = sym.mtd_ooblayout_free(iVar5,5,&uStack_80);
                            if (-1 < iVar3) {
                                piVar8[0x4c] = uStack_80;
                                piVar8[0x4d] = uStack_80._4_4_;
                                piVar8[0x41] = piVar8[0x41] + uStack_80._4_4_;
                                iVar3 = sym.mtd_ooblayout_free(iVar5,6,&uStack_80);
                                if (-1 < iVar3) {
                                    piVar8[0x4e] = uStack_80;
                                    piVar8[0x4f] = uStack_80._4_4_;
                                    piVar8[0x41] = piVar8[0x41] + uStack_80._4_4_;
                                    iVar3 = sym.mtd_ooblayout_free(iVar5,7,&uStack_80);
                                    if (-1 < iVar3) {
                                        piVar8[0x50] = uStack_80;
                                        piVar8[0x51] = uStack_80._4_4_;
                                        piVar8[0x41] = piVar8[0x41] + uStack_80._4_4_;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
code_r0x0800e1a8:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_78) {
        return;
    }
    auVar13 = __stack_chk_fail();
    iVar5 = auVar13._0_8_;
    *extraout_x18_00 = sym.mtdchar_blkpg_ioctl;
    pcStack_98 = sym.mtdchar_blkpg_ioctl;
    iVar6 = sp_el0;
    iStack_a8 = *(iVar6 + 0x5e0);
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    aiStack_140[1] = 0;
    uStack_130 = 0;
    aiStack_140[0] = 0;
    ppuStack_a0 = &puStack_70;
    iStack_90 = unaff_x20;
    piStack_88 = arg1;
    uVar9 = capable(0x15);
    if ((uVar9 & 1) == 0) {
        uVar4 = 0xffffffff;
    }
    else {
        iVar6 = sym._copy_from_user(aiStack_140,*(auVar13._8_8_ + 4),0x98);
        if (iVar6 == 0) {
            iVar3 = *auVar13._8_8_;
            if (iVar3 == 2) {
                if (-1 < uStack_130) {
                    uVar4 = sym.mtd_del_partition(iVar5,uStack_130 & 0xffffffff);
                    goto code_r0x0800e264;
                }
            }
            else if ((iVar3 == 1) && (*(iVar5 + 0x568) == 0)) {
                uStack_f0._0_4_ = uStack_f0;
                uVar4 = sym.mtd_add_partition(iVar5,&uStack_130 + 4,aiStack_140[0],aiStack_140[1]);
                goto code_r0x0800e264;
            }
            uVar4 = 0xffffffea;
        }
        else {
            uVar4 = 0xfffffff2;
        }
    }
code_r0x0800e264:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_a8) {
        __stack_chk_fail(uVar4);
    //WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
    }
    return;
}


// ===== sym.shrink_ecclayout @ 0x0800df60 (size 644) =====

//WARNING: Control flow encountered bad instruction data

void sym.shrink_ecclayout(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    int64_t arg1_00;
    int64_t iVar4;
    ulong uVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t unaff_x19;
    int64_t unaff_x20;
    uint32_t uVar8;
    uint32_t uVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    int64_t aiStack_110 [2];
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uStack_50 = 0;
    if ((arg1 != 0) && (unaff_x19 = arg2, arg2 != 0)) {
        memset(arg2,0,0x148);
        uVar8 = 0;
        uVar9 = 0;
        while (iVar3 = sym.mtd_ooblayout_ecc(arg1,uVar8,&uStack_50), unaff_x20 = arg1, -1 < iVar3) {
            uVar8 = uVar8 + 1;
            uVar6 = uVar9;
            uVar1 = uStack_50;
            if (uStack_50 <= uStack_50._4_4_ + uStack_50) {
                uVar1 = uStack_50._4_4_ + uStack_50;
            }
            uVar1 = (uVar9 - uStack_50) + uVar1;
            if (uVar9 < 0x41) {
                uVar9 = 0x40;
            }
            uVar7 = uStack_50;
            while (uVar1 != uVar6) {
                if (uVar9 == uVar6) {
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x5512,0x800e1e0);
                    (*pcVar2)();
                }
                *(arg2 + 4 + uVar6 * 4) = uVar7;
                uVar7 = uVar7 + 1;
                uVar6 = uVar6 + 1;
                *arg2 = *arg2 + 1;
                if (uVar6 == 0x40) goto code_r0x0800e048;
            }
            uVar9 = uVar1;
            if (0x3f < uVar1) goto code_r0x0800e048;
        }
        if (iVar3 != -0x22) goto code_r0x0800e1a8;
code_r0x0800e048:
        iVar3 = sym.mtd_ooblayout_free(arg1,0,&uStack_50);
        if (-1 < iVar3) {
            *(arg2 + 0x108) = uStack_50;
            *(arg2 + 0x10c) = uStack_50._4_4_;
            *(arg2 + 0x104) = *(arg2 + 0x104) + uStack_50._4_4_;
            iVar3 = sym.mtd_ooblayout_free(arg1,1,&uStack_50);
            if (-1 < iVar3) {
                *(arg2 + 0x110) = uStack_50;
                *(arg2 + 0x114) = uStack_50._4_4_;
                *(arg2 + 0x104) = *(arg2 + 0x104) + uStack_50._4_4_;
                iVar3 = sym.mtd_ooblayout_free(arg1,2,&uStack_50);
                if (-1 < iVar3) {
                    *(arg2 + 0x118) = uStack_50;
                    *(arg2 + 0x11c) = uStack_50._4_4_;
                    *(arg2 + 0x104) = *(arg2 + 0x104) + uStack_50._4_4_;
                    iVar3 = sym.mtd_ooblayout_free(arg1,3,&uStack_50);
                    if (-1 < iVar3) {
                        *(arg2 + 0x120) = uStack_50;
                        *(arg2 + 0x124) = uStack_50._4_4_;
                        *(arg2 + 0x104) = *(arg2 + 0x104) + uStack_50._4_4_;
                        iVar3 = sym.mtd_ooblayout_free(arg1,4,&uStack_50);
                        if (-1 < iVar3) {
                            *(arg2 + 0x128) = uStack_50;
                            *(arg2 + 300) = uStack_50._4_4_;
                            *(arg2 + 0x104) = *(arg2 + 0x104) + uStack_50._4_4_;
                            iVar3 = sym.mtd_ooblayout_free(arg1,5,&uStack_50);
                            if (-1 < iVar3) {
                                *(arg2 + 0x130) = uStack_50;
                                *(arg2 + 0x134) = uStack_50._4_4_;
                                *(arg2 + 0x104) = *(arg2 + 0x104) + uStack_50._4_4_;
                                iVar3 = sym.mtd_ooblayout_free(arg1,6,&uStack_50);
                                if (-1 < iVar3) {
                                    *(arg2 + 0x138) = uStack_50;
                                    *(arg2 + 0x13c) = uStack_50._4_4_;
                                    *(arg2 + 0x104) = *(arg2 + 0x104) + uStack_50._4_4_;
                                    iVar3 = sym.mtd_ooblayout_free(arg1,7,&uStack_50);
                                    if (-1 < iVar3) {
                                        *(arg2 + 0x140) = uStack_50;
                                        *(arg2 + 0x144) = uStack_50._4_4_;
                                        *(arg2 + 0x104) = *(arg2 + 0x104) + uStack_50._4_4_;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
code_r0x0800e1a8:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return;
    }
    auVar10 = __stack_chk_fail();
    arg1_00 = auVar10._0_8_;
    *extraout_x18 = sym.mtdchar_blkpg_ioctl;
    pcStack_68 = sym.mtdchar_blkpg_ioctl;
    iVar4 = sp_el0;
    iStack_78 = *(iVar4 + 0x5e0);
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    aiStack_110[1] = 0;
    uStack_100 = 0;
    aiStack_110[0] = 0;
    puStack_70 = &stack0xffffffffffffffc0;
    iStack_60 = unaff_x20;
    iStack_58 = unaff_x19;
    uVar6 = capable(0x15);
    if ((uVar6 & 1) == 0) {
        uVar5 = 0xffffffff;
    }
    else {
        iVar4 = sym._copy_from_user(aiStack_110,*(auVar10._8_8_ + 4),0x98);
        if (iVar4 == 0) {
            iVar3 = *auVar10._8_8_;
            if (iVar3 == 2) {
                if (-1 < uStack_100) {
                    uVar5 = sym.mtd_del_partition(arg1_00,uStack_100 & 0xffffffff);
                    goto code_r0x0800e264;
                }
            }
            else if ((iVar3 == 1) && (*(arg1_00 + 0x568) == 0)) {
                uStack_c0._0_4_ = uStack_c0;
                uVar5 = sym.mtd_add_partition(arg1_00,&uStack_100 + 4,aiStack_110[0],aiStack_110[1]);
                goto code_r0x0800e264;
            }
            uVar5 = 0xffffffea;
        }
        else {
            uVar5 = 0xfffffff2;
        }
    }
code_r0x0800e264:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_78) {
        __stack_chk_fail(uVar5);
    //WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
    }
    return;
}


// ===== sym.mtdchar_blkpg_ioctl @ 0x0800e1e4 (size 260) =====

//WARNING: Control flow encountered bad instruction data

void sym.mtdchar_blkpg_ioctl(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    int64_t aiStack_c0 [2];
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
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
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
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
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    aiStack_c0[1] = 0;
    uStack_b0 = 0;
    aiStack_c0[0] = 0;
    uVar1 = capable(0x15);
    if ((uVar1 & 1) == 0) {
        uVar3 = 0xffffffff;
    }
    else {
        iVar2 = sym._copy_from_user(aiStack_c0,*(arg2 + 0x10),0x98);
        if (iVar2 == 0) {
            if (*arg2 == 2) {
                if (-1 < uStack_b0) {
                    uVar3 = sym.mtd_del_partition(arg1,uStack_b0 & 0xffffffff);
                    goto code_r0x0800e264;
                }
            }
            else if ((*arg2 == 1) && (*(arg1 + 0x568) == 0)) {
                uStack_70._0_4_ = uStack_70;
                uVar3 = sym.mtd_add_partition(arg1,&uStack_b0 + 4,aiStack_c0[0],aiStack_c0[1]);
                goto code_r0x0800e264;
            }
            uVar3 = 0xffffffea;
        }
        else {
            uVar3 = 0xfffffff2;
        }
    }
code_r0x0800e264:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail(uVar3);
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.init_module @ 0x0800e724 (size 248) =====

uint64_t sym.init_module(void)

{
    uint64_t uVar1;
    ulong *in_x18;
    uint64_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = __class_register(obj.mtd_class,obj.mtd_set_dev_defaults.__key);
    uVar2 = uVar1 & 0xffffffff;
    if (uVar1 == 0) {
        uVar2 = sym.mtd_bdi_init();
        _segment.ehdr = uVar2;
        if (uVar2 < 0xfffffffffffff001) {
            _segment.ehdr =
                 proc_create_single_data
                           (obj..str.llvm.17629688341332384884,0,0,
                            sym.mtd_proc_show.6da1a7bf3408c133522d7cda73bb5fea.cfi_jt,0);
            uVar1 = sym.init_mtdchar();
            uVar2 = uVar1 & 0xffffffff;
            if (uVar1 == 0) {
                _segment.ehdr = debugfs_create_dir(obj..str.llvm.17629688341332384884,0);
                goto code_r0x0800e7dc;
            }
            if (_segment.ehdr != 0) {
                remove_proc_entry(obj..str.llvm.17629688341332384884,0);
            }
            bdi_put(_segment.ehdr);
        }
        class_unregister(obj.mtd_class);
    }
    _printk(0x80015aa,uVar2 & 0xffffffff);
code_r0x0800e7dc:
    return uVar2 & 0xffffffff;
}


// ===== sym.mtd_bdi_init @ 0x0800e81c (size 112) =====

int64_t sym.mtd_bdi_init(void)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = bdi_alloc(0xffffffff);
    if (iVar2 == 0) {
        iVar2 = -0xc;
    }
    else {
        *(iVar2 + 0x30) = 0;
        *(iVar2 + 0x38) = 0;
        iVar1 = bdi_register(iVar2,"%.28s-0",obj..str.llvm.17629688341332384884);
        if (iVar1 != 0) {
            bdi_put(iVar2);
            iVar2 = iVar1;
        }
    }
    return iVar2;
}


// ===== sym.init_mtdchar @ 0x0800e88c (size 104) =====

int sym.init_mtdchar(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __register_chrdev(0x5a,0,0x100000,obj..str.llvm.17629688341332384884,obj.mtd_fops);
    if (iVar1 < 0) {
        _printk(0x8001351,0x5a);
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x0800e8f4 (size 132) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    debugfs_remove(_segment.ehdr);
    __unregister_chrdev(0x5a,0,0x100000,obj..str.llvm.17629688341332384884);
    if (_segment.ehdr != 0) {
        remove_proc_entry(obj..str.llvm.17629688341332384884,0);
    }
    class_unregister(obj.mtd_class);
    bdi_put(_segment.ehdr);
    idr_destroy(obj.mtd_idr);
    return;
}


// ===== sym.cleanup_mtdchar @ 0x0800e978 (size 56) =====

void sym.cleanup_mtdchar(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __unregister_chrdev(0x5a,0,0x100000,obj..str.llvm.17629688341332384884);
    return;
}

