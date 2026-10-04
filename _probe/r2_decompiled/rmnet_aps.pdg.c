// decompiled from rmnet_aps by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 452) =====

//WARNING: Switch with 1 destination removed at 0x0800296c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x57c35b2de4585ed) {
        if (arg1 < -0x4d7e2f04b135d45c) {
            if (arg1 == -0x708761f88da6c7f3) {
                pcVar2 = sym.DATARMNET772c0b87c5.39fd6562af3f80f6a4c2b181ecafa4f5.cfi_jt;
                goto code_r0x08001190;
            }
            if (arg1 != -0x550b9e52359ac614) goto code_r0x0800292c;
            pcVar2 = sym.DATARMNETd1a02b8188.39fd6562af3f80f6a4c2b181ecafa4f5.cfi_jt;
        }
        else {
            if (arg1 == -0x4d7e2f04b135d45c) {
                if ((pcVar1 + -0x8001218 >> 3 | pcVar1 << 0x3d) < 3) {
                    return;
                }
                goto code_r0x0800292c;
            }
            if (arg1 != -0x2ee0710dce68437c) goto code_r0x0800292c;
            pcVar2 = sym.delayed_work_timer_fn.cfi_jt;
        }
        if (1 < (pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d)) goto code_r0x0800292c;
    }
    else {
        if (arg1 < 0x66b3ed4679b00bb) {
            if (arg1 == -0x57c35b2de4585ed) {
                pcVar2 = sym.DATARMNETe0c7b9d5a4.39fd6562af3f80f6a4c2b181ecafa4f5.cfi_jt;
            }
            else {
                if (arg1 != 0x2b3a43e29242445) goto code_r0x0800292c;
                pcVar2 = sym.init_module.cfi_jt;
            }
        }
        else if (arg1 == 0x66b3ed4679b00bb) {
            pcVar2 = sym.DATARMNET6ab4bbdaf4.39fd6562af3f80f6a4c2b181ecafa4f5.cfi_jt;
        }
        else if (arg1 == 0x7d57972cd3914fb1) {
            pcVar2 = sym.DATARMNET998f6cbce7.39fd6562af3f80f6a4c2b181ecafa4f5.cfi_jt;
        }
        else {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800292c;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
code_r0x08001190:
        if (pcVar1 != pcVar2) {
code_r0x0800292c:
            *in_x18 = unaff_x30;
            if (arg3 != 0) {
                if (4 < *arg3) {
                    return;
                }
                __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
            }
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5502,0x8002980);
            (*pcVar1)();
        }
    }
    return;
}


// ===== sym.DATARMNETd1a02b8188.39fd6562af3f80f6a4c2b181ecafa4f5.cfi_jt @ 0x080011d0 (size 8) =====

ulong sym.DATARMNETd1a02b8188.39fd6562af3f80f6a4c2b181ecafa4f5.cfi_jt(void)

{
    int64_t *piVar1;
    uint8_t uVar2;
    bool bVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    code *pcVar9;
    int64_t iVar10;
    uint32_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar12;
    int64_t iVar13;
    int64_t *piVar14;
    uint8_t uVar15;
    uint32_t *puVar16;
    uint16_t uVar17;
    code *pcVar18;
    uint64_t *puVar19;
    uint16_t uVar20;
    uint32_t uVar21;
    uint32_t *puVar22;
    ulong unaff_x30;
    uchar auVar23 [16];
    uint64_t uStack_100;
    ulong uStack_f8;
    uint64_t uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    
    *in_x18 = unaff_x30;
    iVar6 = _mutex_lock;
    iVar8 = sp_el0;
    iVar8 = *(iVar8 + 0x5e0);
    mutex_lock(obj.DATARMNET54b95e4416);
    if (obj.DATARMNET54b95e4416 == 0x1) {
        _raw_spin_lock_bh(obj.DATARMNET33bd4139f4);
        pcVar9 = _obj.DATARMNET7520901fb5;
        iVar13 = iVar6;
        if (_obj.DATARMNET7520901fb5 != obj.DATARMNET7520901fb5) {
            do {
                iVar10 = *(pcVar9 + 0x38);
                pcVar18 = *pcVar9;
                iVar12 = iVar13;
                if (iVar10 != 0) {
                    if (iVar6 - iVar10 < 0) {
                        iVar12 = iVar10;
                        if (-1 < iVar10 - iVar13 && iVar13 != iVar6) {
                            iVar12 = iVar13;
                        }
                    }
                    else {
                        sym.DATARMNET7fa3dd63cb(pcVar9 + -0x20);
                        if ((CONCAT22(*0x8000002,_segment.ehdr) != 0) &&
                           (iVar4 = sym.DATARMNETbd1d5c8f28(0x8000220,1,2,0xc), iVar4 != 0)) {
                            _segment.ehdr = 0;
                            *0x8000002 = 0;
                        }
                    }
                }
                pcVar9 = pcVar18;
                iVar13 = iVar12;
            } while (pcVar18 != obj.DATARMNET7520901fb5);
            if (iVar12 != iVar6) {
                mod_timer(obj.DATARMNETd21629e047,iVar12);
            }
        }
        _raw_spin_unlock_bh(obj.DATARMNET33bd4139f4);
    }
    uVar5 = mutex_unlock(obj.DATARMNET54b95e4416);
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iVar8) {
        return uVar5;
    }
    auVar23 = __stack_chk_fail();
    iVar6 = auVar23._8_8_;
    *extraout_x18 = sym.DATARMNETe0c7b9d5a4;
    puStack_d0 = &stack0xffffffffffffffb0;
    pcStack_c8 = sym.DATARMNETe0c7b9d5a4;
    iVar8 = sp_el0;
    iStack_d8 = *(iVar8 + 0x5e0);
    if (*(auVar23._0_8_ + 0xbe8) == '\0') {
        uVar5 = 0;
    }
    else {
        uVar5 = ktime_get_with_offset(1);
    }
    *(*(iVar6 + 0xd0) + *(iVar6 + 0xcc) + 0x10) = uVar5;
    if ((_obj.DATARMNETfef55eaf9a != 0) &&
       (((_segment.ehdr == 0 || (*(iVar6 + 0x8e) == _segment.ehdr)) && (iVar8 = *(auVar23._0_8_ + 0xbf0), iVar8 != 0)))
       ) {
        piVar1 = iVar8 + 0x10;
        if (_segment.ehdr == 0) {
            piVar14 = *piVar1;
            if (piVar1 != piVar14) {
                bVar3 = false;
                uVar21 = 0;
                uVar11 = 0;
                uVar20 = 0;
                uVar17 = 0;
                puVar22 = NULL;
                puVar16 = NULL;
                uVar15 = 0;
                do {
                    iVar8 = piVar14[7];
                    if (iVar8 != 0) {
                        if (*(iVar8 + 0x1c) == 10) {
                            if (*(iVar6 + 0xb0) == -0x227a) goto code_r0x08002158;
                        }
                        else if ((*(iVar8 + 0x1c) != 2) || (*(iVar6 + 0xb0) == 8)) {
code_r0x08002158:
                            if (!bVar3) {
                                if (*(iVar6 + 0xb0) == -0x227a) {
                                    uStack_e8 = 0;
                                    uStack_e0 = 0;
                                    uStack_f8 = 0;
                                    uStack_f0 = 0;
                                    uStack_100 = 0;
                                    if (*(iVar6 + 0x70) - *(iVar6 + 0x74) < 0x28) {
                                        if ((iVar6 == 0) ||
                                           (uVar5 = skb_copy_bits(iVar6,0,&uStack_100,0x28), puVar19 = &uStack_100,
                                           uVar5 < 0)) break;
                                    }
                                    else {
                                        puVar19 = *(iVar6 + 0xd8);
                                        if (*(iVar6 + 0xd8) == NULL) break;
                                    }
                                    uVar15 = *(puVar19 + 6);
                                    if (uVar15 == 0x2c) break;
                                    puVar16 = puVar19 + 8;
                                    uVar7 = 0x28;
                                    puVar22 = puVar19 + 0x18;
                                    uVar21 = *puVar19;
                                    uVar11 = (uVar21 & 0xff000f00) >> 8;
                                    uVar11 = (uVar11 | (uVar21 & 0xff0000) << 8) >> 0x10 | uVar11 << 0x10;
                                    uVar21 = (((uVar21 & 0xf00f) >> 8 | (uVar21 & 0xf) << 8) << 0x10) >> 0x14;
                                }
                                else {
                                    if (*(iVar6 + 0xb0) != 8) break;
                                    uStack_f0 = uStack_f0 & 0xffffffff00000000;
                                    uStack_100 = 0;
                                    uStack_f8 = 0;
                                    if (*(iVar6 + 0x70) - *(iVar6 + 0x74) < 0x14) {
                                        if ((iVar6 == 0) ||
                                           (uVar5 = skb_copy_bits(iVar6,0,&uStack_100,0x14), puVar19 = &uStack_100,
                                           uVar5 < 0)) break;
                                    }
                                    else {
                                        puVar19 = *(iVar6 + 0xd8);
                                        if (*(iVar6 + 0xd8) == NULL) break;
                                    }
                                    if (((*puVar19 & 0xf) < 5) || ((*(puVar19 + 6) & 0xff3f) != 0)) break;
                                    uVar15 = *(puVar19 + 9);
                                    puVar16 = puVar19 + 0xc;
                                    puVar22 = puVar19 + 0x10;
                                    uVar21 = *(puVar19 + 1);
                                    uVar7 = (*puVar19 & 0xf) << 2;
                                }
                                if ((uVar15 == 0x11) || (uVar15 == 6)) {
                                    uStack_100 = uStack_100 & 0xffffffff00000000;
                                    if (*(iVar6 + 0x70) - (uVar7 + *(iVar6 + 0x74)) < 4) {
                                        if ((iVar6 == 0) ||
                                           (uVar5 = skb_copy_bits(iVar6,uVar7,&uStack_100,4), puVar19 = &uStack_100
                                           , uVar5 < 0)) break;
                                    }
                                    else {
                                        puVar19 = *(iVar6 + 0xd8) + uVar7;
                                        if (puVar19 == NULL) break;
                                    }
                                    uVar17 = *puVar19 >> 8 | *puVar19 << 8;
                                    uVar20 = *(puVar19 + 2) >> 8 | *(puVar19 + 2) << 8;
                                }
                            }
                            uVar2 = *(iVar8 + 0x4a);
                            if (uVar2 == 0) {
code_r0x08002294:
                                if ((uVar15 == 0x11) || (uVar15 == 6)) {
code_r0x080022a4:
                                    if (((*(iVar8 + 0x42) != 0) && (*(iVar8 + 0x42) != uVar20)) ||
                                       ((*(iVar8 + 0x40) != 0 && (*(iVar8 + 0x40) != uVar17)))) goto code_r0x0800210c;
                                }
                                if (*(iVar8 + 0x1c) == 10) {
                                    if ((((((*(iVar8 + 0x4b) >> 1 & 1) == 0) ||
                                          (*(iVar8 + 0x30) == *puVar22 && *(iVar8 + 0x38) == *(puVar22 + 2))) &&
                                         (((*(iVar8 + 0x4b) & 1) == 0 ||
                                          (*(iVar8 + 0x20) == *puVar16 && *(iVar8 + 0x28) == *(puVar16 + 2))))) &&
                                        ((*(iVar8 + 0x48) == 0 || (*(iVar8 + 0x48) == (*(iVar8 + 0x49) & uVar21))))) &&
                                       ((*(iVar8 + 0x44) == 0 || (*(iVar8 + 0x44) == uVar11)))) goto code_r0x0800240c;
                                }
                                else if ((((*(iVar8 + 0x1c) == 2) &&
                                          (((*(iVar8 + 0x4b) >> 1 & 1) == 0 || (*(iVar8 + 0x30) == *puVar22)))) &&
                                         (((*(iVar8 + 0x4b) & 1) == 0 || (*(iVar8 + 0x20) == *puVar16)))) &&
                                        ((*(iVar8 + 0x48) == 0 || (*(iVar8 + 0x48) == (*(iVar8 + 0x49) & uVar21)))))
                                goto code_r0x0800240c;
                            }
                            else if (uVar2 == 0xfd) {
                                if ((uVar15 == 6) || (uVar15 == 0x11)) goto code_r0x080022a4;
                            }
                            else if (uVar2 == uVar15) goto code_r0x08002294;
code_r0x0800210c:
                            bVar3 = true;
                        }
                    }
                    piVar14 = *piVar14;
                } while (piVar1 != piVar14);
            }
        }
        else {
            for (piVar14 = *piVar1; piVar1 != piVar14; piVar14 = *piVar14) {
                if (*(piVar14 + 0x24) == *(iVar6 + 0x8c)) goto code_r0x0800240c;
            }
        }
    }
code_r0x08002474:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_d8) {
        auVar23 = __stack_chk_fail();
        iVar8 = auVar23._8_8_;
        *extraout_x18_00 = 0x80024b4;
        if (((*(auVar23._0_8_ + 0xbe8) == '\0') ||
            (*(*(iVar8 + 0xd0) + *(iVar8 + 0xcc) + 0x10) == 0 ||
             CONCAT44(*0x8000004,CONCAT22(*0x8000002,_segment.ehdr)) == 0)) ||
           (iVar6 = ktime_get_with_offset(1),
           iVar6 - *(*(iVar8 + 0xd0) + *(iVar8 + 0xcc) + 0x10) <=
           CONCAT44(*0x8000004,CONCAT22(*0x8000002,_segment.ehdr)))) {
            uVar5 = 0;
        }
        else {
            uVar5 = 0xffffff92;
        }
        return uVar5;
    }
    return uVar5;
code_r0x0800240c:
    if (piVar14 != 0x10) {
        _raw_spin_lock_bh(obj.DATARMNET33bd4139f4);
        *(iVar6 + 0x8c) = piVar14[8];
        piVar14[9] = _mutex_lock + *(piVar14 + 0x44);
        piVar14[10] = piVar14[10] + *(iVar6 + 0x70);
        _raw_spin_unlock_bh(obj.DATARMNET33bd4139f4);
        uVar5 = queue_delayed_work_on(0x20,_dev_get_by_index,obj.DATARMNET3481998252,0x2ee);
    }
    goto code_r0x08002474;
}


// ===== sym.DATARMNET5979020f87.39fd6562af3f80f6a4c2b181ecafa4f5.cfi_jt @ 0x080011d8 (size 8) =====

void sym.DATARMNET5979020f87.39fd6562af3f80f6a4c2b181ecafa4f5.cfi_jt(void)

{
    code cVar1;
    bool bVar2;
    code *pcVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.DATARMNET54b95e4416);
    if (obj.DATARMNET54b95e4416 == 0x1) {
        _raw_spin_lock_bh(obj.DATARMNET33bd4139f4);
        list_sort(0,obj.DATARMNET7520901fb5,sym.DATARMNET772c0b87c5.39fd6562af3f80f6a4c2b181ecafa4f5.cfi_jt);
        if (_obj.DATARMNET7520901fb5 == obj.DATARMNET7520901fb5) {
            bVar2 = false;
        }
        else {
            uVar4 = 0;
            uVar6 = 0;
            bVar2 = false;
            pcVar3 = _obj.DATARMNET7520901fb5;
            do {
                iVar7 = *(pcVar3 + 0x40);
                uVar5 = uVar4;
                if (pcVar3[0x21] == 0x0) {
code_r0x0800283c:
                    cVar1 = pcVar3[0x22];
                    uVar4 = uVar5;
                }
                else {
                    uVar5 = iVar7 + uVar4;
                    if (uVar5 >> 0x13 < 0x177) {
                        pcVar3[0x48] = 0x1;
                        *(pcVar3 + 0x30) = *(pcVar3 + 0x30) | 0x100;
                        goto code_r0x0800283c;
                    }
                    pcVar3[0x48] = 0x0;
                    *(pcVar3 + 0x30) = *(pcVar3 + 0x30) & 0xfffffeff;
                    cVar1 = pcVar3[0x22];
                }
                if (cVar1 != 0x0) {
                    if (iVar7 + uVar6 >> 0x14 < 0x4b) {
                        pcVar3[0x49] = 0x1;
                        *(pcVar3 + 0x30) = *(pcVar3 + 0x30) | 0x200;
                        uVar6 = iVar7 + uVar6;
                    }
                    else {
                        pcVar3[0x49] = 0x0;
                        *(pcVar3 + 0x30) = *(pcVar3 + 0x30) & 0xfffffdff;
                    }
                }
                if (iVar7 != 0) {
                    bVar2 = true;
                    *(pcVar3 + 0x40) = 0;
                }
                pcVar3 = *pcVar3;
            } while (pcVar3 != obj.DATARMNET7520901fb5);
        }
        _raw_spin_unlock_bh(obj.DATARMNET33bd4139f4);
        mutex_unlock(obj.DATARMNET54b95e4416);
        if (bVar2) {
            queue_delayed_work_on(0x20,_dev_get_by_index,obj.DATARMNET3481998252,0x2ee);
        }
    }
    else {
        mutex_unlock(obj.DATARMNET54b95e4416);
    }
    return;
}


// ===== sym.DATARMNET998f6cbce7.39fd6562af3f80f6a4c2b181ecafa4f5.cfi_jt @ 0x080011e0 (size 8) =====

ulong sym.DATARMNET998f6cbce7.39fd6562af3f80f6a4c2b181ecafa4f5.cfi_jt(ulong param_1,int64_t param_2,int64_t *param_3)

{
    code cVar1;
    bool bVar2;
    int iVar3;
    int iVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t iVar7;
    code *pcVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar12;
    code *pcVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iVar7 = *(iVar7 + 0x5e0);
    iVar12 = *param_3;
    if ((iVar12 != 0) && (iVar3 = strncmp(iVar12,"rmnet_data",10), iVar3 == 0)) {
        if (param_2 == 6) {
            mutex_lock(obj.DATARMNET54b95e4416);
            if (_obj.DATARMNET7520901fb5 != obj.DATARMNET7520901fb5) {
                iVar3 = *(iVar12 + 0xd0);
                pcVar8 = _obj.DATARMNET7520901fb5;
                do {
                    pcVar13 = *pcVar8;
                    if (*(pcVar8 + 0x1c) == iVar3) {
                        if ((_segment.ehdr != 0) && (iVar4 = sym.DATARMNETbd1d5c8f28(0x8000220,1,2,0xc), iVar4 != 0)
                           ) {
                            _segment.ehdr = 0;
                        }
                        sym.DATARMNET7fa3dd63cb(pcVar8 + -0x20);
                    }
                    pcVar8 = pcVar13;
                } while (pcVar13 != obj.DATARMNET7520901fb5);
            }
            iVar5 = *(iVar12 + 0xbf0);
            if (iVar5 != 0) {
                if (iVar5 + 0x10 != *(iVar5 + 0x10)) {
    //WARNING: Does not return
                    pcVar8 = SoftwareBreakpoint(0x800,0x8002778);
                    (*pcVar8)();
                }
                *(iVar12 + 0xbf0) = 0;
                kvfree_call_rcu(iVar5,0);
            }
        }
        else {
            if (param_2 != 2) goto code_r0x08002738;
            *(iVar12 + 0xbe8) = 0;
            mutex_lock(obj.DATARMNET54b95e4416);
            if (_obj.DATARMNET7520901fb5 != obj.DATARMNET7520901fb5) {
                iVar3 = *(iVar12 + 0xd0);
                pcVar8 = _obj.DATARMNET7520901fb5;
                do {
                    pcVar13 = *pcVar8;
                    if (*(pcVar8 + 0x1c) == iVar3) {
                        if ((_segment.ehdr != 0) && (iVar4 = sym.DATARMNETbd1d5c8f28(0x8000220,1,2,0xc), iVar4 != 0)
                           ) {
                            _segment.ehdr = 0;
                        }
                        sym.DATARMNET7fa3dd63cb(pcVar8 + -0x20);
                    }
                    pcVar8 = pcVar13;
                } while (pcVar13 != obj.DATARMNET7520901fb5);
            }
        }
        mutex_unlock(obj.DATARMNET54b95e4416);
    }
code_r0x08002738:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iVar7) {
        return 0;
    }
    __stack_chk_fail();
    *extraout_x18 = 0x8002780;
    mutex_lock(obj.DATARMNET54b95e4416);
    if (obj.DATARMNET54b95e4416 == 0x1) {
        _raw_spin_lock_bh(obj.DATARMNET33bd4139f4);
        list_sort(0,obj.DATARMNET7520901fb5,sym.DATARMNET772c0b87c5.39fd6562af3f80f6a4c2b181ecafa4f5.cfi_jt);
        if (_obj.DATARMNET7520901fb5 == obj.DATARMNET7520901fb5) {
            bVar2 = false;
        }
        else {
            uVar9 = 0;
            uVar11 = 0;
            bVar2 = false;
            pcVar8 = _obj.DATARMNET7520901fb5;
            do {
                iVar7 = *(pcVar8 + 0x40);
                uVar10 = uVar9;
                if (pcVar8[0x21] == 0x0) {
code_r0x0800283c:
                    cVar1 = pcVar8[0x22];
                    uVar9 = uVar10;
                }
                else {
                    uVar10 = iVar7 + uVar9;
                    if (uVar10 >> 0x13 < 0x177) {
                        pcVar8[0x48] = 0x1;
                        *(pcVar8 + 0x30) = *(pcVar8 + 0x30) | 0x100;
                        goto code_r0x0800283c;
                    }
                    pcVar8[0x48] = 0x0;
                    *(pcVar8 + 0x30) = *(pcVar8 + 0x30) & 0xfffffeff;
                    cVar1 = pcVar8[0x22];
                }
                if (cVar1 != 0x0) {
                    if (iVar7 + uVar11 >> 0x14 < 0x4b) {
                        pcVar8[0x49] = 0x1;
                        *(pcVar8 + 0x30) = *(pcVar8 + 0x30) | 0x200;
                        uVar11 = iVar7 + uVar11;
                    }
                    else {
                        pcVar8[0x49] = 0x0;
                        *(pcVar8 + 0x30) = *(pcVar8 + 0x30) & 0xfffffdff;
                    }
                }
                if (iVar7 != 0) {
                    bVar2 = true;
                    *(pcVar8 + 0x40) = 0;
                }
                pcVar8 = *pcVar8;
            } while (pcVar8 != obj.DATARMNET7520901fb5);
        }
        _raw_spin_unlock_bh(obj.DATARMNET33bd4139f4);
        uVar6 = mutex_unlock(obj.DATARMNET54b95e4416);
        if (bVar2) {
            uVar6 = queue_delayed_work_on(0x20,_dev_get_by_index,obj.DATARMNET3481998252,0x2ee);
        }
    }
    else {
        uVar6 = mutex_unlock(obj.DATARMNET54b95e4416);
    }
    return uVar6;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011e8 (size 8) =====

void sym.cleanup_module.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    bool bVar1;
    int64_t iVar2;
    int iVar3;
    code *arg1;
    uchar uVar4;
    uint uVar5;
    int64_t iVar6;
    uchar *extraout_x8;
    ulong *in_x18;
    code *pcVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iVar6 = *(iVar6 + 0x5e0);
    _preempt_schedule_notrace = 0;
    _android_kmalloc_64_create = 0;
    rmnet_module_hook_unregister_no_sync(obj.DATARMNET509284caa6,2);
    synchronize_rcu();
    mutex_lock(obj.DATARMNET54b95e4416);
    uVar5 = param_3;
    obj.DATARMNET54b95e4416 = 0x0;
    pcVar7 = _obj.DATARMNET7520901fb5;
    while (uVar4 = uVar5, pcVar7 != obj.DATARMNET7520901fb5) {
        arg1 = pcVar7 + -0x20;
        pcVar7 = *pcVar7;
        sym.DATARMNET7fa3dd63cb(arg1);
        uVar5 = param_3;
    }
    mutex_unlock(obj.DATARMNET54b95e4416);
    if (_segment.ehdr != 0) {
        uVar4 = 2;
        iVar3 = sym.DATARMNETbd1d5c8f28(0x8000220,1,2,0xc);
        if (iVar3 != 0) {
            _segment.ehdr = 0;
        }
    }
    cancel_delayed_work_sync(obj.DATARMNET3481998252);
    del_timer_sync(obj.DATARMNETd21629e047);
    cancel_work_sync(obj.DATARMNET8e3aef0760);
    unregister_netdevice_notifier(reloc.DATARMNET998f6cbce7.39fd6562af3f80f6a4c2b181ecafa4f5.cfi_jt);
    genl_unregister_family(obj.DATARMNETcdba30eca9);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iVar6) {
        __stack_chk_fail();
        bVar1 = ExclusiveMonitorPass(extraout_x8,0x10);
        if (bVar1) {
            *extraout_x8 = uVar4;
            ExclusiveMonitorsStatus();
        }
    //WARNING: Does not return
        pcVar7 = UndefinedInstructionException(0,0x8002bf4);
        (*pcVar7)();
    }
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080011f0 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80004eb,0x80004ac);
    iVar1 = genl_register_family(obj.DATARMNETcdba30eca9);
    if (iVar1 == 0) {
        register_netdevice_notifier(reloc.DATARMNET998f6cbce7.39fd6562af3f80f6a4c2b181ecafa4f5.cfi_jt);
        _rmnet_aps_pre_queue = 0x8001210;
        _rmnet_aps_post_queue = 0x80011f8;
        _rmnet_module_hook_register = 0;
        rmnet_module_hook_register(obj.DATARMNET509284caa6,2);
        mutex_lock(obj.DATARMNET54b95e4416);
        obj.DATARMNET54b95e4416 = 0x1;
        mutex_unlock(obj.DATARMNET54b95e4416);
    }
    else {
        _printk(0x80004c4);
    }
    return iVar1;
}


// ===== sym.DATARMNET6ab4bbdaf4.39fd6562af3f80f6a4c2b181ecafa4f5.cfi_jt @ 0x080011f8 (size 8) =====

ulong sym.DATARMNET6ab4bbdaf4.39fd6562af3f80f6a4c2b181ecafa4f5.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((*(param_1 + 0xbe8) == '\0') || (*(*(param_2 + 0xd0) + *(param_2 + 0xcc) + 0x10) == 0 || _segment.ehdr == 0))
       || (iVar1 = ktime_get_with_offset(1), iVar1 - *(*(param_2 + 0xd0) + *(param_2 + 0xcc) + 0x10) <= _segment.ehdr))
    {
        uVar2 = 0;
    }
    else {
        uVar2 = 0xffffff92;
    }
    return uVar2;
}


// ===== sym.delayed_work_timer_fn.cfi_jt @ 0x08001200 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.delayed_work_timer_fn.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.DATARMNETf844db79d9.39fd6562af3f80f6a4c2b181ecafa4f5.cfi_jt @ 0x08001208 (size 8) =====

void sym.DATARMNETf844db79d9.39fd6562af3f80f6a4c2b181ecafa4f5.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    queue_work_on(0x20,_dev_get_by_index,obj.DATARMNET8e3aef0760);
    return;
}


// ===== sym.DATARMNETe0c7b9d5a4.39fd6562af3f80f6a4c2b181ecafa4f5.cfi_jt @ 0x08001210 (size 8) =====

ulong sym.DATARMNETe0c7b9d5a4.39fd6562af3f80f6a4c2b181ecafa4f5.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t *piVar1;
    uint8_t uVar2;
    bool bVar3;
    ulong uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar8;
    int64_t iVar9;
    uint8_t uVar10;
    uint32_t *puVar11;
    uint16_t uVar12;
    uint64_t *puVar13;
    uint16_t uVar14;
    uint32_t uVar15;
    uint32_t *puVar16;
    ulong unaff_x30;
    uchar auVar17 [16];
    uint64_t uStack_90;
    ulong uStack_88;
    uint64_t uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    if (*(param_1 + 0xbe8) == '\0') {
        uVar4 = 0;
    }
    else {
        uVar4 = ktime_get_with_offset(1);
    }
    *(*(param_2 + 0xd0) + *(param_2 + 0xcc) + 0x10) = uVar4;
    if ((_obj.DATARMNETfef55eaf9a != 0) &&
       (((_segment.ehdr == 0 || (*(param_2 + 0x8e) == _segment.ehdr)) && (*(param_1 + 0xbf0) != 0)))) {
        piVar1 = *(param_1 + 0xbf0) + 0x10;
        if (_segment.ehdr == 0) {
            piVar8 = *piVar1;
            if (piVar1 != piVar8) {
                bVar3 = false;
                uVar15 = 0;
                uVar7 = 0;
                uVar14 = 0;
                uVar12 = 0;
                puVar16 = NULL;
                puVar11 = NULL;
                uVar10 = 0;
                do {
                    iVar9 = piVar8[7];
                    if (iVar9 != 0) {
                        if (*(iVar9 + 0x1c) == 10) {
                            if (*(param_2 + 0xb0) == -0x227a) goto code_r0x08002158;
                        }
                        else if ((*(iVar9 + 0x1c) != 2) || (*(param_2 + 0xb0) == 8)) {
code_r0x08002158:
                            if (!bVar3) {
                                if (*(param_2 + 0xb0) == -0x227a) {
                                    uStack_78 = 0;
                                    uStack_70 = 0;
                                    uStack_88 = 0;
                                    uStack_80 = 0;
                                    uStack_90 = 0;
                                    if (*(param_2 + 0x70) - *(param_2 + 0x74) < 0x28) {
                                        if ((param_2 == 0) ||
                                           (uVar4 = skb_copy_bits(param_2,0,&uStack_90,0x28), puVar13 = &uStack_90,
                                           uVar4 < 0)) break;
                                    }
                                    else {
                                        puVar13 = *(param_2 + 0xd8);
                                        if (*(param_2 + 0xd8) == NULL) break;
                                    }
                                    uVar10 = *(puVar13 + 6);
                                    if (uVar10 == 0x2c) break;
                                    puVar11 = puVar13 + 8;
                                    uVar6 = 0x28;
                                    puVar16 = puVar13 + 0x18;
                                    uVar15 = *puVar13;
                                    uVar7 = (uVar15 & 0xff000f00) >> 8;
                                    uVar7 = (uVar7 | (uVar15 & 0xff0000) << 8) >> 0x10 | uVar7 << 0x10;
                                    uVar15 = (((uVar15 & 0xf00f) >> 8 | (uVar15 & 0xf) << 8) << 0x10) >> 0x14;
                                }
                                else {
                                    if (*(param_2 + 0xb0) != 8) break;
                                    uStack_80 = uStack_80 & 0xffffffff00000000;
                                    uStack_90 = 0;
                                    uStack_88 = 0;
                                    if (*(param_2 + 0x70) - *(param_2 + 0x74) < 0x14) {
                                        if ((param_2 == 0) ||
                                           (uVar4 = skb_copy_bits(param_2,0,&uStack_90,0x14), puVar13 = &uStack_90,
                                           uVar4 < 0)) break;
                                    }
                                    else {
                                        puVar13 = *(param_2 + 0xd8);
                                        if (*(param_2 + 0xd8) == NULL) break;
                                    }
                                    if (((*puVar13 & 0xf) < 5) || ((*(puVar13 + 6) & 0xff3f) != 0)) break;
                                    uVar10 = *(puVar13 + 9);
                                    puVar11 = puVar13 + 0xc;
                                    puVar16 = puVar13 + 0x10;
                                    uVar15 = *(puVar13 + 1);
                                    uVar6 = (*puVar13 & 0xf) << 2;
                                }
                                if ((uVar10 == 0x11) || (uVar10 == 6)) {
                                    uStack_90 = uStack_90 & 0xffffffff00000000;
                                    if (*(param_2 + 0x70) - (uVar6 + *(param_2 + 0x74)) < 4) {
                                        if ((param_2 == 0) ||
                                           (uVar4 = skb_copy_bits(param_2,uVar6,&uStack_90,4), puVar13 = &uStack_90
                                           , uVar4 < 0)) break;
                                    }
                                    else {
                                        puVar13 = *(param_2 + 0xd8) + uVar6;
                                        if (puVar13 == NULL) break;
                                    }
                                    uVar12 = *puVar13 >> 8 | *puVar13 << 8;
                                    uVar14 = *(puVar13 + 2) >> 8 | *(puVar13 + 2) << 8;
                                }
                            }
                            uVar2 = *(iVar9 + 0x4a);
                            if (uVar2 == 0) {
code_r0x08002294:
                                if ((uVar10 == 0x11) || (uVar10 == 6)) {
code_r0x080022a4:
                                    if (((*(iVar9 + 0x42) != 0) && (*(iVar9 + 0x42) != uVar14)) ||
                                       ((*(iVar9 + 0x40) != 0 && (*(iVar9 + 0x40) != uVar12)))) goto code_r0x0800210c;
                                }
                                if (*(iVar9 + 0x1c) == 10) {
                                    if ((((((*(iVar9 + 0x4b) >> 1 & 1) == 0) ||
                                          (*(iVar9 + 0x30) == *puVar16 && *(iVar9 + 0x38) == *(puVar16 + 2))) &&
                                         (((*(iVar9 + 0x4b) & 1) == 0 ||
                                          (*(iVar9 + 0x20) == *puVar11 && *(iVar9 + 0x28) == *(puVar11 + 2))))) &&
                                        ((*(iVar9 + 0x48) == 0 || (*(iVar9 + 0x48) == (*(iVar9 + 0x49) & uVar15))))) &&
                                       ((*(iVar9 + 0x44) == 0 || (*(iVar9 + 0x44) == uVar7)))) goto code_r0x0800240c;
                                }
                                else if ((((*(iVar9 + 0x1c) == 2) &&
                                          (((*(iVar9 + 0x4b) >> 1 & 1) == 0 || (*(iVar9 + 0x30) == *puVar16)))) &&
                                         (((*(iVar9 + 0x4b) & 1) == 0 || (*(iVar9 + 0x20) == *puVar11)))) &&
                                        ((*(iVar9 + 0x48) == 0 || (*(iVar9 + 0x48) == (*(iVar9 + 0x49) & uVar15)))))
                                goto code_r0x0800240c;
                            }
                            else if (uVar2 == 0xfd) {
                                if ((uVar10 == 6) || (uVar10 == 0x11)) goto code_r0x080022a4;
                            }
                            else if (uVar2 == uVar10) goto code_r0x08002294;
code_r0x0800210c:
                            bVar3 = true;
                        }
                    }
                    piVar8 = *piVar8;
                } while (piVar1 != piVar8);
            }
        }
        else {
            for (piVar8 = *piVar1; piVar1 != piVar8; piVar8 = *piVar8) {
                if (*(piVar8 + 0x24) == *(param_2 + 0x8c)) goto code_r0x0800240c;
            }
        }
    }
code_r0x08002474:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_68) {
        auVar17 = __stack_chk_fail();
        iVar9 = auVar17._8_8_;
        *extraout_x18 = 0x80024b4;
        if (((*(auVar17._0_8_ + 0xbe8) == '\0') ||
            (*(*(iVar9 + 0xd0) + *(iVar9 + 0xcc) + 0x10) == 0 || CONCAT62(*0x8000002,_segment.ehdr) == 0)) ||
           (iVar5 = ktime_get_with_offset(1),
           iVar5 - *(*(iVar9 + 0xd0) + *(iVar9 + 0xcc) + 0x10) <= CONCAT62(*0x8000002,_segment.ehdr))) {
            uVar4 = 0;
        }
        else {
            uVar4 = 0xffffff92;
        }
        return uVar4;
    }
    return uVar4;
code_r0x0800240c:
    if (piVar8 != 0x10) {
        _raw_spin_lock_bh(obj.DATARMNET33bd4139f4);
        *(param_2 + 0x8c) = piVar8[8];
        piVar8[9] = _mutex_lock + *(piVar8 + 0x44);
        piVar8[10] = piVar8[10] + *(param_2 + 0x70);
        _raw_spin_unlock_bh(obj.DATARMNET33bd4139f4);
        uVar4 = queue_delayed_work_on(0x20,_dev_get_by_index,obj.DATARMNET3481998252,0x2ee);
    }
    goto code_r0x08002474;
}


// ===== sym.DATARMNET37a9efbbcb.cfi_jt @ 0x08001218 (size 8) =====

ulong sym.DATARMNET37a9efbbcb.cfi_jt(ulong param_1,ulong *param_2)

{
    int *piVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int64_t *in_tmp_ldXn;
    int iVar7;
    int64_t iVar8;
    code *pcVar9;
    ulong uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    int64_t *extraout_x1;
    uint *extraout_x8;
    int64_t *piVar13;
    uint extraout_x10;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar14;
    code *pcVar15;
    int64_t iVar16;
    ulong unaff_x30;
    ulong uStack_50;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    if (((param_2 == NULL) || (*(param_2[4] + 8) == 0)) ||
       (iVar7 = nla_memcpy(&uStack_50,*(param_2[4] + 8),0x14), iVar7 < 1)) {
        uVar10 = 0xffffffea;
    }
    else {
        mutex_lock(obj.DATARMNET54b95e4416);
        if (obj.DATARMNET54b95e4416 == 0x1) {
            if (uStack_50 - 2U < 3) {
                if ((uStack_48._4_4_ != 0) && (iVar8 = dev_get_by_index(init_net), iVar8 != 0)) {
                    iVar7 = strncmp(iVar8,"rmnet_data",10);
                    if (iVar7 == 0) {
                        iVar11 = *(iVar8 + 0xbf0);
                        if ((iVar11 == 0) && (uStack_50 == 2)) {
                            iVar11 = 0x38;
                            if (android_kmalloc_64_create != 0x0) {
                                iVar11 = 0x30;
                            }
                            iVar11 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar11),0xdc0,0x20);
                            if (iVar11 == 0) goto code_r0x080012f0;
                            *(iVar11 + 0x10) = iVar11 + 0x10;
                            *(iVar11 + 0x18) = iVar11 + 0x10;
                            *(iVar8 + 0xbf0) = iVar11;
                        }
                        if (iVar11 != 0) {
                            sym.DATARMNET82d65f9ca6(iVar11 + 0x10,&uStack_50);
                        }
                    }
code_r0x080012f0:
                    iVar11 = sp_el0;
                    piVar13 = iVar11 + 0x10;
                    *(iVar11 + 0x10) = *piVar13 + 1;
                    iVar16 = tpidr_el1;
                    piVar1 = iVar16 + *(iVar8 + 0x4d0);
                    do {
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar4) {
                            *piVar1 = *piVar1 + -1;
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                    iVar8 = *piVar13;
                    *(iVar11 + 0x10) = iVar8 + -1;
                    if ((iVar8 + -1 == 0) || (*piVar13 == 0)) {
                        preempt_schedule_notrace();
                    }
                }
            }
            else if (uStack_50 == 1) {
                _obj.DATARMNET7d98961cbe = *param_2;
                *0x8000238 = param_2[3];
                *0x8000240 = param_2[4];
                *0x8000228 = param_2[1];
                *0x8000230 = param_2[2];
                *0x8000258 = param_2[7];
                *0x8000260 = param_2[8];
                _obj.verinfo = param_2[5];
                *0x8000250 = param_2[6];
                pcVar15 = _obj.DATARMNET7520901fb5;
                while (pcVar15 != obj.DATARMNET7520901fb5) {
                    pcVar9 = pcVar15 + -0x20;
                    pcVar15 = *pcVar15;
                    sym.DATARMNET7fa3dd63cb(pcVar9);
                }
                _segment.ehdr = uStack_50 >> 0x20;
            }
        }
        mutex_unlock(obj.DATARMNET54b95e4416);
        uVar10 = sym.DATARMNETbd1d5c8f28(param_2,1,2,0xc);
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return uVar10;
    }
    __stack_chk_fail(uVar10);
    uVar10 = tpidr_el2;
    *CONCAT44(extraout_x10,*extraout_x8) = *CONCAT44(extraout_x10,*extraout_x8) + uVar10;
    *extraout_x18 = 0x80014a4;
    for (piVar13 = *in_tmp_ldXn; piVar13 != in_tmp_ldXn; piVar13 = *piVar13) {
        if (*(piVar13 + 0x24) == *(extraout_x1 + 4)) {
            piVar13 = piVar13 + -2;
            goto code_r0x08001520;
        }
    }
    piVar13 = NULL;
code_r0x08001520:
    if (*extraout_x1 == 3) {
        if (piVar13 != NULL) {
            sym.DATARMNET7fa3dd63cb(piVar13);
        }
    }
    else {
        if ((*extraout_x1 == 2) && (piVar13 != NULL)) {
            sym.DATARMNET7fa3dd63cb(piVar13);
        }
        else if (piVar13 != NULL) {
            uVar14 = 0x9b6d0000;
            _raw_spin_lock_bh(obj.DATARMNET33bd4139f4);
            uVar2 = *(extraout_x1 + 2);
            iVar8 = *extraout_x1;
            iVar11 = extraout_x1[1];
            *(piVar13 + 8) = uVar2;
            uVar2 = uVar2 >> 8 & 0xff;
            piVar13[6] = iVar8;
            piVar13[7] = iVar11;
            *(piVar13 + 0xd) = uVar2 != 0;
            *(piVar13 + 0x69) = *(piVar13 + 0x42) != '\0';
            if (*(piVar13 + 8) < 5) {
                uVar14 = obj.DATARMNET9628311a6b[*(piVar13 + 8)] | 0x9b6d0000;
            }
            uVar5 = uVar14 | 0x100;
            if (uVar2 == 0) {
                uVar5 = uVar14;
            }
            uVar2 = uVar5 | 0x200;
            if (*(piVar13 + 0x42) == '\0') {
                uVar2 = uVar5;
            }
            *(piVar13 + 10) = uVar2;
            _raw_spin_unlock_bh(obj.DATARMNET33bd4139f4);
            goto code_r0x08001740;
        }
        uVar2 = CONCAT22(*0x8000002,_segment.ehdr);
        if (0xfe < uVar2) {
            uVar10 = 0xffffffea;
            goto code_r0x08001744;
        }
        iVar8 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xdc0,0x70);
        uVar2 = CONCAT22(*0x8000002,_segment.ehdr);
        if (iVar8 == 0) {
            uVar10 = 0xfffffff4;
            goto code_r0x08001744;
        }
        uVar2 = *(extraout_x1 + 2);
        iVar11 = *extraout_x1;
        iVar16 = extraout_x1[1];
        uVar5 = uVar2 >> 8 & 0xff;
        uVar6 = uVar2 >> 0x10 & 0xff;
        *(iVar8 + 0x40) = uVar2;
        *(iVar8 + 0x30) = iVar11;
        *(iVar8 + 0x38) = iVar16;
        uVar14 = 0x9b6d0000;
        *(iVar8 + 0x68) = uVar5 != 0;
        *(iVar8 + 0x69) = uVar6 != 0;
        if ((uVar2 & 0xff) < 5) {
            uVar14 = obj.DATARMNET9628311a6b[uVar2 & 0xff] | 0x9b6d0000;
        }
        uVar2 = uVar14 | 0x100;
        if (uVar5 == 0) {
            uVar2 = uVar14;
        }
        uVar14 = uVar2 | 0x200;
        if (uVar6 == 0) {
            uVar14 = uVar2;
        }
        iVar11 = extraout_x1[1];
        *(iVar8 + 0x50) = uVar14;
        if (iVar11 != 0) {
            uVar2 = iVar11 * 0xfa;
            *(iVar8 + 0x54) = uVar2;
            *(iVar8 + 0x58) = _mutex_lock + uVar2;
        }
        iVar16 = *in_tmp_ldXn;
        iVar11 = iVar8 + 0x10;
        uVar12 = __list_add_valid(iVar11,in_tmp_ldXn,iVar16);
        if ((uVar12 & 1) != 0) {
            *(iVar8 + 0x10) = iVar16;
            *(iVar8 + 0x18) = in_tmp_ldXn;
            *in_tmp_ldXn = iVar11;
            *(iVar16 + 8) = iVar11;
        }
        pcVar9 = _obj.DATARMNET7520901fb5;
        pcVar15 = iVar8 + 0x20;
        uVar12 = __list_add_valid(pcVar15,obj.DATARMNET7520901fb5,_obj.DATARMNET7520901fb5);
        if ((uVar12 & 1) != 0) {
            *(pcVar9 + 8) = pcVar15;
            *(iVar8 + 0x20) = pcVar9;
            *(iVar8 + 0x28) = obj.DATARMNET7520901fb5;
            _obj.DATARMNET7520901fb5 = pcVar15;
        }
        _segment.ehdr = CONCAT22(*0x8000002,_segment.ehdr) + 1;
        if ((*(iVar8 + 0x58) != 0) && ((*0x8000288 == 0 || (*(iVar8 + 0x58) - CONCAT44(*0x8000004,_segment.ehdr) < 0)))
           ) {
            mod_timer(obj.DATARMNETd21629e047);
        }
    }
code_r0x08001740:
    uVar10 = 0;
    uVar2 = _segment.ehdr;
code_r0x08001744:
    *0x8000002 = uVar2 >> 0x10;
    _segment.ehdr = uVar2;
    return uVar10;
}


// ===== sym.DATARMNET1998d09852.cfi_jt @ 0x08001220 (size 8) =====

void sym.DATARMNET1998d09852.cfi_jt(ulong param_1,int64_t param_2)

{
    int64_t *piVar1;
    int *piVar2;
    int64_t iVar3;
    char cVar4;
    bool bVar5;
    int64_t iVar6;
    ulong in_tmp_ldXn;
    int iVar7;
    ulong uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uint *extraout_x8;
    uint extraout_x10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint64_t auStack_60 [2];
    uint64_t uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_28 = *(iVar10 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    auStack_60[1] = 0;
    uStack_50 = 0;
    auStack_60[0] = 0;
    if (param_2 != 0) {
        iVar10 = *(*(param_2 + 0x20) + 0x18);
        if ((iVar10 != 0) && (iVar7 = nla_memcpy(auStack_60,iVar10,0x38), 0 < iVar7)) {
            if ((uStack_50 != 0) && (iVar10 = (uStack_50 & 0xffffffff) * 1000000, _segment.ehdr != iVar10)) {
                _segment.ehdr = iVar10;
            }
            iVar10 = dev_get_by_index(init_net,auStack_60[0] & 0xffffffff);
            if (iVar10 != 0) {
                iVar7 = strncmp(iVar10,"rmnet_data",10);
                if (iVar7 == 0) {
                    *(iVar10 + 0xbe8) = uStack_50 != 0;
                }
                iVar3 = sp_el0;
                piVar1 = iVar3 + 0x10;
                *(iVar3 + 0x10) = *piVar1 + 1;
                iVar6 = tpidr_el1;
                piVar2 = iVar6 + *(iVar10 + 0x4d0);
                do {
                    cVar4 = '\x01';
                    bVar5 = ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar5) {
                        *piVar2 = *piVar2 + -1;
                        cVar4 = ExclusiveMonitorsStatus();
                    }
                } while (cVar4 != '\0');
                iVar10 = *piVar1;
                *(iVar3 + 0x10) = iVar10 + -1;
                if ((iVar10 + -1 == 0) || (*piVar1 == 0)) {
                    preempt_schedule_notrace();
                }
            }
            uVar8 = sym.DATARMNETbd1d5c8f28(param_2,2,4,0x20);
            goto code_r0x08001d30;
        }
    }
    uVar8 = 0xffffffea;
code_r0x08001d30:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_28) {
        return;
    }
    iVar10 = __stack_chk_fail(uVar8);
    uVar8 = tpidr_el2;
    *CONCAT44(extraout_x10,*extraout_x8) = *CONCAT44(extraout_x10,*extraout_x8) + uVar8;
    *extraout_x18 = 0x8001d68;
    uVar9 = __list_del_entry_valid(in_tmp_ldXn,iVar10 + 0x10);
    if ((uVar9 & 1) != 0) {
        iVar3 = *(iVar10 + 0x10);
        piVar1 = *(iVar10 + 0x18);
        *(iVar3 + 8) = piVar1;
        *piVar1 = iVar3;
    }
    *(iVar10 + 0x18) = 0xdead000000000122;
    uVar9 = __list_del_entry_valid(iVar10 + 0x20);
    if ((uVar9 & 1) != 0) {
        iVar3 = *(iVar10 + 0x20);
        piVar1 = *(iVar10 + 0x28);
        *(iVar3 + 8) = piVar1;
        *piVar1 = iVar3;
    }
    iVar7 = _segment.ehdr;
    *(iVar10 + 0x20) = 0xdead000000000100;
    *(iVar10 + 0x28) = 0xdead000000000122;
    if ((iVar7 == 0) || (iVar7 = iVar7 + -1, _segment.ehdr = CONCAT44(*0x8000004,iVar7), iVar7 == 0)) {
        del_timer(obj.DATARMNETd21629e047);
    }
    if (*(iVar10 + 0x48) != 0) {
        *(iVar10 + 0x48) = 0;
    }
    if (iVar10 != 0) {
        kvfree_call_rcu(iVar10,0);
    }
    return;
}


// ===== sym.DATARMNETae6b282c61.cfi_jt @ 0x08001228 (size 8) =====

ulong sym.DATARMNETae6b282c61.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    char cVar4;
    bool bVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint *in_tmp_ldXn;
    int iVar8;
    ulong uVar9;
    int64_t iVar10;
    int *piVar11;
    uint *extraout_x8;
    uint8_t uVar12;
    uint extraout_x10;
    int *piVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
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
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_38 = *(iVar10 + 0x5e0);
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
    uStack_b8 = 0;
    uStack_b0 = 0;
    if (((param_2 == 0) || (iVar10 = *(*(param_2 + 0x20) + 0x28), iVar10 == 0)) ||
       (iVar8 = nla_memcpy(&uStack_b8,iVar10,0x80), iVar8 < 1)) {
        uVar9 = 0xffffffea;
        goto code_r0x080019cc;
    }
    mutex_lock(obj.DATARMNET54b95e4416);
    if (((obj.DATARMNET54b95e4416 == 0x1) && (uStack_b0 != 0)) && (iVar10 = dev_get_by_index(init_net), iVar10 != 0)) {
        iVar8 = strncmp(iVar10,"rmnet_data",10);
        if (iVar8 == 0) {
            if ((uStack_b8 == 6) && (*(iVar10 + 0xbf0) != 0)) {
                sym.DATARMNET9e18f3d501(*(iVar10 + 0xbf0) + 0x10,&uStack_b8);
            }
            iVar6 = sp_el0;
            piVar14 = iVar6 + 0x10;
            *(iVar6 + 0x10) = *piVar14 + 1;
            iVar7 = tpidr_el1;
            piVar11 = iVar7 + *(iVar10 + 0x4d0);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar11,0x10);
                if (bVar5) {
                    *piVar11 = *piVar11 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            iVar10 = *piVar14;
            *(iVar6 + 0x10) = iVar10 + -1;
            if (iVar10 + -1 != 0) {
                iVar10 = *piVar14;
                goto joined_r0x08001a74;
            }
        }
        else {
            iVar6 = sp_el0;
            piVar14 = iVar6 + 0x10;
            *(iVar6 + 0x10) = *piVar14 + 1;
            iVar7 = tpidr_el1;
            piVar11 = iVar7 + *(iVar10 + 0x4d0);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar11,0x10);
                if (bVar5) {
                    *piVar11 = *piVar11 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            iVar10 = *piVar14;
            *(iVar6 + 0x10) = iVar10 + -1;
            if (iVar10 + -1 != 0) {
                iVar10 = *piVar14;
joined_r0x08001a74:
                if (iVar10 != 0) goto code_r0x08001998;
            }
        }
        preempt_schedule_notrace();
    }
code_r0x08001998:
    mutex_unlock(obj.DATARMNET54b95e4416);
    uVar9 = sym.DATARMNETbd1d5c8f28(param_2,3,6,0xc);
code_r0x080019cc:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_38) {
        return uVar9;
    }
    auVar15 = __stack_chk_fail(uVar9);
    piVar11 = auVar15._8_8_;
    uVar9 = tpidr_el2;
    *CONCAT44(extraout_x10,*extraout_x8) = *CONCAT44(extraout_x10,*extraout_x8) + uVar9;
    piVar13 = CONCAT44(in_tmp_ldXn >> 0x20,*in_tmp_ldXn);
    uVar9 = tpidr_el2;
    *piVar13 = *piVar13 + uVar9;
    *extraout_x18 = 0x8001a8c;
    piVar14 = *auVar15._0_8_;
    while( true ) {
        if (piVar14 == auVar15._0_8_) {
            return 0xffffffea;
        }
        if (*(piVar14 + 0x24) == piVar11[1]) break;
        piVar14 = *piVar14;
    }
    if (piVar14 == 0x10) {
        return 0xffffffea;
    }
    if (*piVar11 != 6) {
        return 0xffffffea;
    }
    if (piVar14[7] != 0) {
        return 0xffffffea;
    }
    iVar10 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xdc0,0x90);
    if (iVar10 == 0) {
        return 0xfffffff4;
    }
    uVar1 = *(piVar11 + 0x1a);
    uVar9 = *(piVar11 + 0x1c);
    uVar2 = *(piVar11 + 0x1e);
    *(iVar10 + 0x70) = *(piVar11 + 0x18);
    *(iVar10 + 0x78) = uVar1;
    uVar1 = *(piVar11 + 0x10);
    uVar3 = *(piVar11 + 0x12);
    *(iVar10 + 0x80) = uVar9;
    *(iVar10 + 0x88) = uVar2;
    uVar9 = *(piVar11 + 0x14);
    uVar2 = *(piVar11 + 0x16);
    *(iVar10 + 0x50) = uVar1;
    *(iVar10 + 0x58) = uVar3;
    uVar1 = *(piVar11 + 8);
    uVar3 = *(piVar11 + 10);
    *(iVar10 + 0x60) = uVar9;
    *(iVar10 + 0x68) = uVar2;
    uVar9 = *(piVar11 + 0xc);
    uVar2 = *(piVar11 + 0xe);
    *(iVar10 + 0x30) = uVar1;
    *(iVar10 + 0x38) = uVar3;
    uVar1 = *piVar11;
    uVar3 = *(piVar11 + 2);
    *(iVar10 + 0x40) = uVar9;
    *(iVar10 + 0x48) = uVar2;
    uVar9 = *(piVar11 + 4);
    uVar2 = *(piVar11 + 6);
    *(iVar10 + 0x10) = uVar1;
    *(iVar10 + 0x18) = uVar3;
    *(iVar10 + 0x20) = uVar9;
    *(iVar10 + 0x28) = uVar2;
    if (*(iVar10 + 0x48) != 0) {
        uVar12 = *(iVar10 + 0x49);
        if (uVar12 == 0) {
            uVar12 = 0xff;
            *(iVar10 + 0x49) = 0xff;
        }
        *(iVar10 + 0x48) = uVar12 & *(iVar10 + 0x48);
    }
    piVar14[7] = iVar10;
    return 0;
}


// ===== sym.DATARMNET772c0b87c5.39fd6562af3f80f6a4c2b181ecafa4f5.cfi_jt @ 0x08001230 (size 8) =====

bool sym.DATARMNET772c0b87c5.39fd6562af3f80f6a4c2b181ecafa4f5.cfi_jt(ulong param_1,int64_t param_2,int64_t param_3)

{
    return *(param_3 + 0x40) < *(param_2 + 0x40);
}


// ===== sym.DATARMNET37a9efbbcb @ 0x08001238 (size 656) =====

ulong sym.DATARMNET37a9efbbcb(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int64_t *in_tmp_ldXn;
    int iVar7;
    code *pcVar8;
    ulong uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    int64_t iVar12;
    int64_t *extraout_x1;
    uint *extraout_x8;
    int64_t *piVar13;
    uint extraout_x10;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar14;
    code *pcVar15;
    int64_t iVar16;
    ulong unaff_x30;
    ulong uStack_50;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_38 = *(iVar12 + 0x5e0);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    if (((arg2 == 0) || (iVar12 = *(*(arg2 + 0x20) + 8), iVar12 == 0)) ||
       (iVar7 = nla_memcpy(&stack0xffffffffffffffb0,iVar12,0x14), iVar7 < 1)) {
        uVar9 = 0xffffffea;
    }
    else {
        mutex_lock(obj.DATARMNET54b95e4416);
        if (obj.DATARMNET54b95e4416 == 0x1) {
            if (uStack_50 - 2U < 3) {
                if ((uStack_48._4_4_ != 0) && (iVar12 = dev_get_by_index(init_net), iVar12 != 0)) {
                    iVar7 = strncmp(iVar12,"rmnet_data",10);
                    if (iVar7 == 0) {
                        iVar10 = *(iVar12 + 0xbf0);
                        if ((iVar10 == 0) && (uStack_50 == 2)) {
                            iVar10 = 0x38;
                            if (android_kmalloc_64_create != 0x0) {
                                iVar10 = 0x30;
                            }
                            iVar10 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar10),0xdc0,0x20);
                            if (iVar10 == 0) goto code_r0x080012f0;
                            *(iVar10 + 0x10) = iVar10 + 0x10;
                            *(iVar10 + 0x18) = iVar10 + 0x10;
                            *(iVar12 + 0xbf0) = iVar10;
                        }
                        if (iVar10 != 0) {
                            sym.DATARMNET82d65f9ca6(iVar10 + 0x10,&stack0xffffffffffffffb0);
                        }
                    }
code_r0x080012f0:
                    iVar10 = sp_el0;
                    piVar13 = iVar10 + 0x10;
                    *(iVar10 + 0x10) = *piVar13 + 1;
                    iVar16 = tpidr_el1;
                    piVar1 = iVar16 + *(iVar12 + 0x4d0);
                    do {
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar4) {
                            *piVar1 = *piVar1 + -1;
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                    iVar12 = *piVar13;
                    *(iVar10 + 0x10) = iVar12 + -1;
                    if ((iVar12 + -1 == 0) || (*piVar13 == 0)) {
                        preempt_schedule_notrace();
                    }
                }
            }
            else if (uStack_50 == 1) {
                _obj.DATARMNET7d98961cbe = *arg2;
                *0x8000238 = *(arg2 + 0x18);
                *0x8000240 = *(arg2 + 0x20);
                *0x8000228 = *(arg2 + 8);
                *0x8000230 = *(arg2 + 0x10);
                *0x8000258 = *(arg2 + 0x38);
                *0x8000260 = *(arg2 + 0x40);
                _obj.verinfo = *(arg2 + 0x28);
                *0x8000250 = *(arg2 + 0x30);
                pcVar15 = _obj.DATARMNET7520901fb5;
                while (pcVar15 != obj.DATARMNET7520901fb5) {
                    pcVar8 = pcVar15 + -0x20;
                    pcVar15 = *pcVar15;
                    sym.DATARMNET7fa3dd63cb(pcVar8);
                }
                _segment.ehdr = uStack_50 >> 0x20;
            }
        }
        mutex_unlock(obj.DATARMNET54b95e4416);
        uVar9 = sym.DATARMNETbd1d5c8f28(arg2,1,2,0xc);
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_38) {
        return uVar9;
    }
    __stack_chk_fail(uVar9);
    uVar9 = tpidr_el2;
    *CONCAT44(extraout_x10,*extraout_x8) = *CONCAT44(extraout_x10,*extraout_x8) + uVar9;
    *extraout_x18 = 0x80014a4;
    for (piVar13 = *in_tmp_ldXn; piVar13 != in_tmp_ldXn; piVar13 = *piVar13) {
        if (*(piVar13 + 0x24) == *(extraout_x1 + 4)) {
            piVar13 = piVar13 + -2;
            goto code_r0x08001520;
        }
    }
    piVar13 = NULL;
code_r0x08001520:
    if (*extraout_x1 == 3) {
        if (piVar13 != NULL) {
            sym.DATARMNET7fa3dd63cb(piVar13);
        }
    }
    else {
        if ((*extraout_x1 == 2) && (piVar13 != NULL)) {
            sym.DATARMNET7fa3dd63cb(piVar13);
        }
        else if (piVar13 != NULL) {
            uVar14 = 0x9b6d0000;
            _raw_spin_lock_bh(obj.DATARMNET33bd4139f4);
            uVar2 = *(extraout_x1 + 2);
            iVar12 = *extraout_x1;
            iVar10 = extraout_x1[1];
            *(piVar13 + 8) = uVar2;
            uVar2 = uVar2 >> 8 & 0xff;
            piVar13[6] = iVar12;
            piVar13[7] = iVar10;
            *(piVar13 + 0xd) = uVar2 != 0;
            *(piVar13 + 0x69) = *(piVar13 + 0x42) != '\0';
            if (*(piVar13 + 8) < 5) {
                uVar14 = obj.DATARMNET9628311a6b[*(piVar13 + 8)] | 0x9b6d0000;
            }
            uVar5 = uVar14 | 0x100;
            if (uVar2 == 0) {
                uVar5 = uVar14;
            }
            uVar2 = uVar5 | 0x200;
            if (*(piVar13 + 0x42) == '\0') {
                uVar2 = uVar5;
            }
            *(piVar13 + 10) = uVar2;
            _raw_spin_unlock_bh(obj.DATARMNET33bd4139f4);
            goto code_r0x08001740;
        }
        uVar2 = CONCAT22(*0x8000002,_segment.ehdr);
        if (0xfe < uVar2) {
            uVar9 = 0xffffffea;
            goto code_r0x08001744;
        }
        iVar12 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xdc0,0x70);
        uVar2 = CONCAT22(*0x8000002,_segment.ehdr);
        if (iVar12 == 0) {
            uVar9 = 0xfffffff4;
            goto code_r0x08001744;
        }
        uVar2 = *(extraout_x1 + 2);
        iVar10 = *extraout_x1;
        iVar16 = extraout_x1[1];
        uVar5 = uVar2 >> 8 & 0xff;
        uVar6 = uVar2 >> 0x10 & 0xff;
        *(iVar12 + 0x40) = uVar2;
        *(iVar12 + 0x30) = iVar10;
        *(iVar12 + 0x38) = iVar16;
        uVar14 = 0x9b6d0000;
        *(iVar12 + 0x68) = uVar5 != 0;
        *(iVar12 + 0x69) = uVar6 != 0;
        if ((uVar2 & 0xff) < 5) {
            uVar14 = obj.DATARMNET9628311a6b[uVar2 & 0xff] | 0x9b6d0000;
        }
        uVar2 = uVar14 | 0x100;
        if (uVar5 == 0) {
            uVar2 = uVar14;
        }
        uVar14 = uVar2 | 0x200;
        if (uVar6 == 0) {
            uVar14 = uVar2;
        }
        iVar10 = extraout_x1[1];
        *(iVar12 + 0x50) = uVar14;
        if (iVar10 != 0) {
            uVar2 = iVar10 * 0xfa;
            *(iVar12 + 0x54) = uVar2;
            *(iVar12 + 0x58) = _mutex_lock + uVar2;
        }
        iVar16 = *in_tmp_ldXn;
        iVar10 = iVar12 + 0x10;
        uVar11 = __list_add_valid(iVar10,in_tmp_ldXn,iVar16);
        if ((uVar11 & 1) != 0) {
            *(iVar12 + 0x10) = iVar16;
            *(iVar12 + 0x18) = in_tmp_ldXn;
            *in_tmp_ldXn = iVar10;
            *(iVar16 + 8) = iVar10;
        }
        pcVar8 = _obj.DATARMNET7520901fb5;
        pcVar15 = iVar12 + 0x20;
        uVar11 = __list_add_valid(pcVar15,obj.DATARMNET7520901fb5,_obj.DATARMNET7520901fb5);
        if ((uVar11 & 1) != 0) {
            *(pcVar8 + 8) = pcVar15;
            *(iVar12 + 0x20) = pcVar8;
            *(iVar12 + 0x28) = obj.DATARMNET7520901fb5;
            _obj.DATARMNET7520901fb5 = pcVar15;
        }
        _segment.ehdr = CONCAT22(*0x8000002,_segment.ehdr) + 1;
        if ((*(iVar12 + 0x58) != 0) &&
           ((*0x8000288 == 0 || (*(iVar12 + 0x58) - CONCAT44(*0x8000004,_segment.ehdr) < 0)))) {
            mod_timer(obj.DATARMNETd21629e047);
        }
    }
code_r0x08001740:
    uVar9 = 0;
    uVar2 = _segment.ehdr;
code_r0x08001744:
    *0x8000002 = uVar2 >> 0x10;
    _segment.ehdr = uVar2;
    return uVar9;
}


// ===== sym.DATARMNET82d65f9ca6 @ 0x080014c8 (size 672) =====

ulong sym.DATARMNET82d65f9ca6(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong uVar3;
    uint32_t uVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int64_t *piVar8;
    int64_t iVar9;
    uint64_t uVar10;
    int64_t *piVar11;
    ulong *in_x18;
    uint32_t uVar12;
    int64_t iVar13;
    ulong unaff_x30;
    
    piVar8 = arg1;
    *in_x18 = unaff_x30;
    piVar11 = *piVar8;
    do {
        if (piVar11 == piVar8) {
            piVar11 = NULL;
code_r0x08001520:
            if (*arg2 == 3) {
                if (piVar11 != NULL) {
                    sym.DATARMNET7fa3dd63cb(piVar11);
                }
            }
            else {
                if ((*arg2 == 2) && (piVar11 != NULL)) {
                    sym.DATARMNET7fa3dd63cb(piVar11);
                }
                else if (piVar11 != NULL) {
                    uVar12 = 0x9b6d0000;
                    _raw_spin_lock_bh(obj.DATARMNET33bd4139f4);
                    uVar4 = *(arg2 + 0x10);
                    iVar9 = *arg2;
                    iVar1 = *(arg2 + 8);
                    *(piVar11 + 8) = uVar4;
                    uVar4 = uVar4 >> 8 & 0xff;
                    piVar11[6] = iVar9;
                    piVar11[7] = iVar1;
                    *(piVar11 + 0xd) = uVar4 != 0;
                    *(piVar11 + 0x69) = *(piVar11 + 0x42) != '\0';
                    if (*(piVar11 + 8) < 5) {
                        uVar12 = obj.DATARMNET9628311a6b[*(piVar11 + 8)] | 0x9b6d0000;
                    }
                    uVar6 = uVar12 | 0x100;
                    if (uVar4 == 0) {
                        uVar6 = uVar12;
                    }
                    uVar4 = uVar6 | 0x200;
                    if (*(piVar11 + 0x42) == '\0') {
                        uVar4 = uVar6;
                    }
                    *(piVar11 + 10) = uVar4;
                    _raw_spin_unlock_bh(obj.DATARMNET33bd4139f4);
                    return 0;
                }
                if (0xfe < _segment.ehdr) {
                    return 0xffffffea;
                }
                iVar9 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xdc0,0x70);
                if (iVar9 == 0) {
                    return 0xfffffff4;
                }
                uVar4 = *(arg2 + 0x10);
                uVar2 = *arg2;
                uVar3 = *(arg2 + 8);
                uVar6 = uVar4 >> 8 & 0xff;
                uVar7 = uVar4 >> 0x10 & 0xff;
                *(iVar9 + 0x40) = uVar4;
                *(iVar9 + 0x30) = uVar2;
                *(iVar9 + 0x38) = uVar3;
                uVar12 = 0x9b6d0000;
                *(iVar9 + 0x68) = uVar6 != 0;
                *(iVar9 + 0x69) = uVar7 != 0;
                if ((uVar4 & 0xff) < 5) {
                    uVar12 = obj.DATARMNET9628311a6b[uVar4 & 0xff] | 0x9b6d0000;
                }
                uVar4 = uVar12 | 0x100;
                if (uVar6 == 0) {
                    uVar4 = uVar12;
                }
                uVar12 = uVar4 | 0x200;
                if (uVar7 == 0) {
                    uVar12 = uVar4;
                }
                iVar5 = *(arg2 + 8);
                *(iVar9 + 0x50) = uVar12;
                if (iVar5 != 0) {
                    uVar4 = iVar5 * 0xfa;
                    *(iVar9 + 0x54) = uVar4;
                    *(iVar9 + 0x58) = _mutex_lock + uVar4;
                }
                iVar13 = *piVar8;
                iVar1 = iVar9 + 0x10;
                uVar10 = __list_add_valid(iVar1,piVar8,iVar13);
                if ((uVar10 & 1) != 0) {
                    *(iVar9 + 0x10) = iVar13;
                    *(iVar9 + 0x18) = piVar8;
                    *piVar8 = iVar1;
                    *(iVar13 + 8) = iVar1;
                }
                iVar13 = _obj.DATARMNET7520901fb5;
                iVar1 = iVar9 + 0x20;
                uVar10 = __list_add_valid(iVar1,obj.DATARMNET7520901fb5,_obj.DATARMNET7520901fb5);
                if ((uVar10 & 1) != 0) {
                    *(iVar13 + 8) = iVar1;
                    *(iVar9 + 0x20) = iVar13;
                    *(iVar9 + 0x28) = obj.DATARMNET7520901fb5;
                    _obj.DATARMNET7520901fb5 = iVar1;
                }
                _segment.ehdr = _segment.ehdr + 1;
                if ((*(iVar9 + 0x58) != 0) &&
                   ((*0x8000288 == 0 || (*(iVar9 + 0x58) - CONCAT44(*0x8000004,_segment.ehdr) < 0)))) {
                    mod_timer(obj.DATARMNETd21629e047);
                }
            }
            return 0;
        }
        if (*(piVar11 + 0x24) == *(arg2 + 4)) {
            piVar11 = piVar11 + -2;
            goto code_r0x08001520;
        }
        piVar11 = *piVar11;
    } while( true );
}


// ===== sym.DATARMNETbd1d5c8f28 @ 0x08001774 (size 264) =====

ulong sym.DATARMNETbd1d5c8f28(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong uVar4;
    uint in_w5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        iVar2 = __alloc_skb((arg4 + 7U & 0xfffffffc) + 0x14,in_w5,0,0xffffffff);
        if (((iVar2 != 0) &&
            (iVar3 = genlmsg_put(iVar2,0,*arg1 + 1,obj.DATARMNETcdba30eca9,0,arg2 & 0xffffffff), iVar3 != 0)) &&
           (iVar1 = nla_put(iVar2,arg3 & 0xffffffff,arg4 & 0xffffffff), iVar1 == 0)) {
            *(iVar3 + -0x14) = (*(iVar2 + 0xd0) + *(iVar2 + 200)) - (iVar3 + -0x14);
            iVar1 = netlink_unicast(*(*(arg1 + 0x28) + 0x118),iVar2,*(arg1 + 4),0x40);
            if (-1 < iVar1) {
                return 0;
            }
        }
        uVar4 = 0xfffffff2;
    }
    return uVar4;
}


// ===== sym.DATARMNETae6b282c61 @ 0x0800187c (size 596) =====

ulong sym.DATARMNETae6b282c61(ulong noname_0,int64_t arg1)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    char cVar4;
    bool bVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint *in_tmp_ldXn;
    int iVar8;
    ulong uVar9;
    int64_t iVar10;
    int *piVar11;
    uint *extraout_x8;
    uint8_t uVar12;
    uint extraout_x10;
    int *piVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
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
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_38 = *(iVar10 + 0x5e0);
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
    uStack_b8 = 0;
    uStack_b0 = 0;
    if (((arg1 == 0) || (iVar10 = *(*(arg1 + 0x20) + 0x28), iVar10 == 0)) ||
       (iVar8 = nla_memcpy(&stack0xffffffffffffff48,iVar10,0x80), iVar8 < 1)) {
        uVar9 = 0xffffffea;
        goto code_r0x080019cc;
    }
    mutex_lock(obj.DATARMNET54b95e4416);
    if (((obj.DATARMNET54b95e4416 == 0x1) && (uStack_b0 != 0)) && (iVar10 = dev_get_by_index(init_net), iVar10 != 0)) {
        iVar8 = strncmp(iVar10,"rmnet_data",10);
        if (iVar8 == 0) {
            if ((uStack_b8 == 6) && (*(iVar10 + 0xbf0) != 0)) {
                sym.DATARMNET9e18f3d501(*(iVar10 + 0xbf0) + 0x10,&stack0xffffffffffffff48);
            }
            iVar6 = sp_el0;
            piVar14 = iVar6 + 0x10;
            *(iVar6 + 0x10) = *piVar14 + 1;
            iVar7 = tpidr_el1;
            piVar11 = iVar7 + *(iVar10 + 0x4d0);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar11,0x10);
                if (bVar5) {
                    *piVar11 = *piVar11 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            iVar10 = *piVar14;
            *(iVar6 + 0x10) = iVar10 + -1;
            if (iVar10 + -1 != 0) {
                iVar10 = *piVar14;
                goto joined_r0x08001a74;
            }
        }
        else {
            iVar6 = sp_el0;
            piVar14 = iVar6 + 0x10;
            *(iVar6 + 0x10) = *piVar14 + 1;
            iVar7 = tpidr_el1;
            piVar11 = iVar7 + *(iVar10 + 0x4d0);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar11,0x10);
                if (bVar5) {
                    *piVar11 = *piVar11 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            iVar10 = *piVar14;
            *(iVar6 + 0x10) = iVar10 + -1;
            if (iVar10 + -1 != 0) {
                iVar10 = *piVar14;
joined_r0x08001a74:
                if (iVar10 != 0) goto code_r0x08001998;
            }
        }
        preempt_schedule_notrace();
    }
code_r0x08001998:
    mutex_unlock(obj.DATARMNET54b95e4416);
    uVar9 = sym.DATARMNETbd1d5c8f28(arg1,3,6,0xc);
code_r0x080019cc:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_38) {
        return uVar9;
    }
    auVar15 = __stack_chk_fail(uVar9);
    piVar11 = auVar15._8_8_;
    uVar9 = tpidr_el2;
    *CONCAT44(extraout_x10,*extraout_x8) = *CONCAT44(extraout_x10,*extraout_x8) + uVar9;
    piVar13 = CONCAT44(in_tmp_ldXn >> 0x20,*in_tmp_ldXn);
    uVar9 = tpidr_el2;
    *piVar13 = *piVar13 + uVar9;
    *extraout_x18 = 0x8001a8c;
    piVar14 = *auVar15._0_8_;
    while( true ) {
        if (piVar14 == auVar15._0_8_) {
            return 0xffffffea;
        }
        if (*(piVar14 + 0x24) == piVar11[1]) break;
        piVar14 = *piVar14;
    }
    if (piVar14 == 0x10) {
        return 0xffffffea;
    }
    if (*piVar11 != 6) {
        return 0xffffffea;
    }
    if (piVar14[7] != 0) {
        return 0xffffffea;
    }
    iVar10 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xdc0,0x90);
    if (iVar10 == 0) {
        return 0xfffffff4;
    }
    uVar1 = *(piVar11 + 0x1a);
    uVar9 = *(piVar11 + 0x1c);
    uVar2 = *(piVar11 + 0x1e);
    *(iVar10 + 0x70) = *(piVar11 + 0x18);
    *(iVar10 + 0x78) = uVar1;
    uVar1 = *(piVar11 + 0x10);
    uVar3 = *(piVar11 + 0x12);
    *(iVar10 + 0x80) = uVar9;
    *(iVar10 + 0x88) = uVar2;
    uVar9 = *(piVar11 + 0x14);
    uVar2 = *(piVar11 + 0x16);
    *(iVar10 + 0x50) = uVar1;
    *(iVar10 + 0x58) = uVar3;
    uVar1 = *(piVar11 + 8);
    uVar3 = *(piVar11 + 10);
    *(iVar10 + 0x60) = uVar9;
    *(iVar10 + 0x68) = uVar2;
    uVar9 = *(piVar11 + 0xc);
    uVar2 = *(piVar11 + 0xe);
    *(iVar10 + 0x30) = uVar1;
    *(iVar10 + 0x38) = uVar3;
    uVar1 = *piVar11;
    uVar3 = *(piVar11 + 2);
    *(iVar10 + 0x40) = uVar9;
    *(iVar10 + 0x48) = uVar2;
    uVar9 = *(piVar11 + 4);
    uVar2 = *(piVar11 + 6);
    *(iVar10 + 0x10) = uVar1;
    *(iVar10 + 0x18) = uVar3;
    *(iVar10 + 0x20) = uVar9;
    *(iVar10 + 0x28) = uVar2;
    if (*(iVar10 + 0x48) != 0) {
        uVar12 = *(iVar10 + 0x49);
        if (uVar12 == 0) {
            uVar12 = 0xff;
            *(iVar10 + 0x49) = 0xff;
        }
        *(iVar10 + 0x48) = uVar12 & *(iVar10 + 0x48);
    }
    piVar14[7] = iVar10;
    return 0;
}


// ===== sym.DATARMNET9e18f3d501 @ 0x08001ad0 (size 268) =====

ulong sym.DATARMNET9e18f3d501(uint32_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    int64_t iVar5;
    uint8_t uVar6;
    ulong *in_x18;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar7 = *arg1;
    while( true ) {
        if (piVar7 == arg1) {
            return 0xffffffea;
        }
        if (*(piVar7 + 0x24) == *(arg2 + 4)) break;
        piVar7 = *piVar7;
    }
    if (piVar7 == 0x10) {
        return 0xffffffea;
    }
    if (*arg2 != 6) {
        return 0xffffffea;
    }
    if (piVar7[7] != 0) {
        return 0xffffffea;
    }
    iVar5 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xdc0,0x90);
    if (iVar5 == 0) {
        return 0xfffffff4;
    }
    uVar2 = *(arg2 + 0x68);
    uVar1 = *(arg2 + 0x70);
    uVar3 = *(arg2 + 0x78);
    *(iVar5 + 0x70) = *(arg2 + 0x60);
    *(iVar5 + 0x78) = uVar2;
    uVar2 = *(arg2 + 0x40);
    uVar4 = *(arg2 + 0x48);
    *(iVar5 + 0x80) = uVar1;
    *(iVar5 + 0x88) = uVar3;
    uVar1 = *(arg2 + 0x50);
    uVar3 = *(arg2 + 0x58);
    *(iVar5 + 0x50) = uVar2;
    *(iVar5 + 0x58) = uVar4;
    uVar2 = *(arg2 + 0x20);
    uVar4 = *(arg2 + 0x28);
    *(iVar5 + 0x60) = uVar1;
    *(iVar5 + 0x68) = uVar3;
    uVar1 = *(arg2 + 0x30);
    uVar3 = *(arg2 + 0x38);
    *(iVar5 + 0x30) = uVar2;
    *(iVar5 + 0x38) = uVar4;
    uVar2 = *arg2;
    uVar4 = *(arg2 + 8);
    *(iVar5 + 0x40) = uVar1;
    *(iVar5 + 0x48) = uVar3;
    uVar1 = *(arg2 + 0x10);
    uVar3 = *(arg2 + 0x18);
    *(iVar5 + 0x10) = uVar2;
    *(iVar5 + 0x18) = uVar4;
    *(iVar5 + 0x20) = uVar1;
    *(iVar5 + 0x28) = uVar3;
    if (*(iVar5 + 0x48) != 0) {
        uVar6 = *(iVar5 + 0x49);
        if (uVar6 == 0) {
            uVar6 = 0xff;
            *(iVar5 + 0x49) = 0xff;
        }
        *(iVar5 + 0x48) = uVar6 & *(iVar5 + 0x48);
    }
    piVar7[7] = iVar5;
    return 0;
}


// ===== sym.DATARMNET1998d09852 @ 0x08001be8 (size 416) =====

void sym.DATARMNET1998d09852(ulong noname_0,int64_t arg1)

{
    int64_t *piVar1;
    int *piVar2;
    int64_t iVar3;
    char cVar4;
    bool bVar5;
    int64_t iVar6;
    ulong in_tmp_ldXn;
    int iVar7;
    ulong uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uint *extraout_x8;
    uint extraout_x10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint64_t auStack_60 [2];
    uint64_t uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_28 = *(iVar10 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    auStack_60[1] = 0;
    uStack_50 = 0;
    auStack_60[0] = 0;
    if (arg1 != 0) {
        iVar10 = *(*(arg1 + 0x20) + 0x18);
        if ((iVar10 != 0) && (iVar7 = nla_memcpy(&stack0xffffffffffffffa0,iVar10,0x38), 0 < iVar7)) {
            if ((uStack_50 != 0) && (iVar10 = (uStack_50 & 0xffffffff) * 1000000, _segment.ehdr != iVar10)) {
                _segment.ehdr = iVar10;
            }
            iVar10 = dev_get_by_index(init_net,auStack_60[0] & 0xffffffff);
            if (iVar10 != 0) {
                iVar7 = strncmp(iVar10,"rmnet_data",10);
                if (iVar7 == 0) {
                    *(iVar10 + 0xbe8) = uStack_50 != 0;
                }
                iVar3 = sp_el0;
                piVar1 = iVar3 + 0x10;
                *(iVar3 + 0x10) = *piVar1 + 1;
                iVar6 = tpidr_el1;
                piVar2 = iVar6 + *(iVar10 + 0x4d0);
                do {
                    cVar4 = '\x01';
                    bVar5 = ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar5) {
                        *piVar2 = *piVar2 + -1;
                        cVar4 = ExclusiveMonitorsStatus();
                    }
                } while (cVar4 != '\0');
                iVar10 = *piVar1;
                *(iVar3 + 0x10) = iVar10 + -1;
                if ((iVar10 + -1 == 0) || (*piVar1 == 0)) {
                    preempt_schedule_notrace();
                }
            }
            uVar8 = sym.DATARMNETbd1d5c8f28(arg1,2,4,0x20);
            goto code_r0x08001d30;
        }
    }
    uVar8 = 0xffffffea;
code_r0x08001d30:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_28) {
        return;
    }
    iVar10 = __stack_chk_fail(uVar8);
    uVar8 = tpidr_el2;
    *CONCAT44(extraout_x10,*extraout_x8) = *CONCAT44(extraout_x10,*extraout_x8) + uVar8;
    *extraout_x18 = 0x8001d68;
    uVar9 = __list_del_entry_valid(in_tmp_ldXn,iVar10 + 0x10);
    if ((uVar9 & 1) != 0) {
        iVar3 = *(iVar10 + 0x10);
        piVar1 = *(iVar10 + 0x18);
        *(iVar3 + 8) = piVar1;
        *piVar1 = iVar3;
    }
    *(iVar10 + 0x18) = 0xdead000000000122;
    uVar9 = __list_del_entry_valid(iVar10 + 0x20);
    if ((uVar9 & 1) != 0) {
        iVar3 = *(iVar10 + 0x20);
        piVar1 = *(iVar10 + 0x28);
        *(iVar3 + 8) = piVar1;
        *piVar1 = iVar3;
    }
    iVar7 = _segment.ehdr;
    *(iVar10 + 0x20) = 0xdead000000000100;
    *(iVar10 + 0x28) = 0xdead000000000122;
    if ((iVar7 == 0) || (iVar7 = iVar7 + -1, _segment.ehdr = CONCAT44(*0x8000004,iVar7), iVar7 == 0)) {
        del_timer(obj.DATARMNETd21629e047);
    }
    if (*(iVar10 + 0x48) != 0) {
        *(iVar10 + 0x48) = 0;
    }
    if (iVar10 != 0) {
        kvfree_call_rcu(iVar10,0);
    }
    return;
}


// ===== sym.DATARMNET7fa3dd63cb @ 0x08001d88 (size 180) =====

void sym.DATARMNET7fa3dd63cb(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = __list_del_entry_valid(arg1 + 0x10);
    if ((uVar4 & 1) != 0) {
        iVar1 = *(arg1 + 0x10);
        piVar2 = *(arg1 + 0x18);
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    *(arg1 + 0x18) = 0xdead000000000122;
    uVar4 = __list_del_entry_valid(arg1 + 0x20);
    if ((uVar4 & 1) != 0) {
        iVar1 = *(arg1 + 0x20);
        piVar2 = *(arg1 + 0x28);
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    iVar3 = _segment.ehdr;
    *(arg1 + 0x20) = 0xdead000000000100;
    *(arg1 + 0x28) = 0xdead000000000122;
    if ((iVar3 == 0) || (_segment.ehdr = iVar3 + -1, _segment.ehdr == 0)) {
        del_timer(obj.DATARMNETd21629e047);
    }
    if (*(arg1 + 0x48) != 0) {
        *(arg1 + 0x48) = 0;
    }
    if (arg1 != 0) {
        kvfree_call_rcu(arg1,0);
    }
    return;
}


// ===== sym.DATARMNETf844db79d9 @ 0x08001e40 (size 56) =====

void sym.DATARMNETf844db79d9(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    queue_work_on(0x20,_dev_get_by_index,obj.DATARMNET8e3aef0760);
    return;
}


// ===== sym.DATARMNETd1a02b8188 @ 0x08001e78 (size 368) =====

ulong sym.DATARMNETd1a02b8188(void)

{
    int64_t *piVar1;
    uint8_t uVar2;
    bool bVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    code *pcVar9;
    int64_t iVar10;
    uint32_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar12;
    int64_t iVar13;
    int64_t *piVar14;
    uint8_t uVar15;
    uint32_t *puVar16;
    uint16_t uVar17;
    code *pcVar18;
    uint64_t *puVar19;
    uint16_t uVar20;
    uint32_t uVar21;
    uint32_t *puVar22;
    ulong unaff_x30;
    uchar auVar23 [16];
    uint64_t uStack_100;
    ulong uStack_f8;
    uint64_t uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    
    *in_x18 = unaff_x30;
    iVar6 = _mutex_lock;
    iVar8 = sp_el0;
    iVar8 = *(iVar8 + 0x5e0);
    mutex_lock(obj.DATARMNET54b95e4416);
    if (obj.DATARMNET54b95e4416 == 0x1) {
        _raw_spin_lock_bh(obj.DATARMNET33bd4139f4);
        pcVar9 = _obj.DATARMNET7520901fb5;
        iVar13 = iVar6;
        if (_obj.DATARMNET7520901fb5 != obj.DATARMNET7520901fb5) {
            do {
                iVar10 = *(pcVar9 + 0x38);
                pcVar18 = *pcVar9;
                iVar12 = iVar13;
                if (iVar10 != 0) {
                    if (iVar6 - iVar10 < 0) {
                        iVar12 = iVar10;
                        if (-1 < iVar10 - iVar13 && iVar13 != iVar6) {
                            iVar12 = iVar13;
                        }
                    }
                    else {
                        sym.DATARMNET7fa3dd63cb(pcVar9 + -0x20);
                        if ((CONCAT22(*0x8000002,_segment.ehdr) != 0) &&
                           (iVar4 = sym.DATARMNETbd1d5c8f28(0x8000220,1,2,0xc), iVar4 != 0)) {
                            _segment.ehdr = 0;
                            *0x8000002 = 0;
                        }
                    }
                }
                pcVar9 = pcVar18;
                iVar13 = iVar12;
            } while (pcVar18 != obj.DATARMNET7520901fb5);
            if (iVar12 != iVar6) {
                mod_timer(obj.DATARMNETd21629e047,iVar12);
            }
        }
        _raw_spin_unlock_bh(obj.DATARMNET33bd4139f4);
    }
    uVar5 = mutex_unlock(obj.DATARMNET54b95e4416);
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iVar8) {
        return uVar5;
    }
    auVar23 = __stack_chk_fail();
    iVar6 = auVar23._8_8_;
    *extraout_x18 = sym.DATARMNETe0c7b9d5a4;
    puStack_d0 = &stack0xffffffffffffffb0;
    pcStack_c8 = sym.DATARMNETe0c7b9d5a4;
    iVar8 = sp_el0;
    iStack_d8 = *(iVar8 + 0x5e0);
    if (*(auVar23._0_8_ + 0xbe8) == '\0') {
        uVar5 = 0;
    }
    else {
        uVar5 = ktime_get_with_offset(1);
    }
    *(*(iVar6 + 0xd0) + *(iVar6 + 0xcc) + 0x10) = uVar5;
    if ((_obj.DATARMNETfef55eaf9a != 0) &&
       (((_segment.ehdr == 0 || (*(iVar6 + 0x8e) == _segment.ehdr)) && (iVar8 = *(auVar23._0_8_ + 0xbf0), iVar8 != 0)))
       ) {
        piVar1 = iVar8 + 0x10;
        if (_segment.ehdr == 0) {
            piVar14 = *piVar1;
            if (piVar1 != piVar14) {
                bVar3 = false;
                uVar21 = 0;
                uVar11 = 0;
                uVar20 = 0;
                uVar17 = 0;
                puVar22 = NULL;
                puVar16 = NULL;
                uVar15 = 0;
                do {
                    iVar8 = piVar14[7];
                    if (iVar8 != 0) {
                        if (*(iVar8 + 0x1c) == 10) {
                            if (*(iVar6 + 0xb0) == -0x227a) goto code_r0x08002158;
                        }
                        else if ((*(iVar8 + 0x1c) != 2) || (*(iVar6 + 0xb0) == 8)) {
code_r0x08002158:
                            if (!bVar3) {
                                if (*(iVar6 + 0xb0) == -0x227a) {
                                    uStack_e8 = 0;
                                    uStack_e0 = 0;
                                    uStack_f8 = 0;
                                    uStack_f0 = 0;
                                    uStack_100 = 0;
                                    if (*(iVar6 + 0x70) - *(iVar6 + 0x74) < 0x28) {
                                        if ((iVar6 == 0) ||
                                           (uVar5 = skb_copy_bits(iVar6,0,&uStack_100,0x28), puVar19 = &uStack_100,
                                           uVar5 < 0)) break;
                                    }
                                    else {
                                        puVar19 = *(iVar6 + 0xd8);
                                        if (*(iVar6 + 0xd8) == NULL) break;
                                    }
                                    uVar15 = *(puVar19 + 6);
                                    if (uVar15 == 0x2c) break;
                                    puVar16 = puVar19 + 8;
                                    uVar7 = 0x28;
                                    puVar22 = puVar19 + 0x18;
                                    uVar21 = *puVar19;
                                    uVar11 = (uVar21 & 0xff000f00) >> 8;
                                    uVar11 = (uVar11 | (uVar21 & 0xff0000) << 8) >> 0x10 | uVar11 << 0x10;
                                    uVar21 = (((uVar21 & 0xf00f) >> 8 | (uVar21 & 0xf) << 8) << 0x10) >> 0x14;
                                }
                                else {
                                    if (*(iVar6 + 0xb0) != 8) break;
                                    uStack_f0 = uStack_f0 & 0xffffffff00000000;
                                    uStack_100 = 0;
                                    uStack_f8 = 0;
                                    if (*(iVar6 + 0x70) - *(iVar6 + 0x74) < 0x14) {
                                        if ((iVar6 == 0) ||
                                           (uVar5 = skb_copy_bits(iVar6,0,&uStack_100,0x14), puVar19 = &uStack_100,
                                           uVar5 < 0)) break;
                                    }
                                    else {
                                        puVar19 = *(iVar6 + 0xd8);
                                        if (*(iVar6 + 0xd8) == NULL) break;
                                    }
                                    if (((*puVar19 & 0xf) < 5) || ((*(puVar19 + 6) & 0xff3f) != 0)) break;
                                    uVar15 = *(puVar19 + 9);
                                    puVar16 = puVar19 + 0xc;
                                    puVar22 = puVar19 + 0x10;
                                    uVar21 = *(puVar19 + 1);
                                    uVar7 = (*puVar19 & 0xf) << 2;
                                }
                                if ((uVar15 == 0x11) || (uVar15 == 6)) {
                                    uStack_100 = uStack_100 & 0xffffffff00000000;
                                    if (*(iVar6 + 0x70) - (uVar7 + *(iVar6 + 0x74)) < 4) {
                                        if ((iVar6 == 0) ||
                                           (uVar5 = skb_copy_bits(iVar6,uVar7,&uStack_100,4), puVar19 = &uStack_100
                                           , uVar5 < 0)) break;
                                    }
                                    else {
                                        puVar19 = *(iVar6 + 0xd8) + uVar7;
                                        if (puVar19 == NULL) break;
                                    }
                                    uVar17 = *puVar19 >> 8 | *puVar19 << 8;
                                    uVar20 = *(puVar19 + 2) >> 8 | *(puVar19 + 2) << 8;
                                }
                            }
                            uVar2 = *(iVar8 + 0x4a);
                            if (uVar2 == 0) {
code_r0x08002294:
                                if ((uVar15 == 0x11) || (uVar15 == 6)) {
code_r0x080022a4:
                                    if (((*(iVar8 + 0x42) != 0) && (*(iVar8 + 0x42) != uVar20)) ||
                                       ((*(iVar8 + 0x40) != 0 && (*(iVar8 + 0x40) != uVar17)))) goto code_r0x0800210c;
                                }
                                if (*(iVar8 + 0x1c) == 10) {
                                    if ((((((*(iVar8 + 0x4b) >> 1 & 1) == 0) ||
                                          (*(iVar8 + 0x30) == *puVar22 && *(iVar8 + 0x38) == *(puVar22 + 2))) &&
                                         (((*(iVar8 + 0x4b) & 1) == 0 ||
                                          (*(iVar8 + 0x20) == *puVar16 && *(iVar8 + 0x28) == *(puVar16 + 2))))) &&
                                        ((*(iVar8 + 0x48) == 0 || (*(iVar8 + 0x48) == (*(iVar8 + 0x49) & uVar21))))) &&
                                       ((*(iVar8 + 0x44) == 0 || (*(iVar8 + 0x44) == uVar11)))) goto code_r0x0800240c;
                                }
                                else if ((((*(iVar8 + 0x1c) == 2) &&
                                          (((*(iVar8 + 0x4b) >> 1 & 1) == 0 || (*(iVar8 + 0x30) == *puVar22)))) &&
                                         (((*(iVar8 + 0x4b) & 1) == 0 || (*(iVar8 + 0x20) == *puVar16)))) &&
                                        ((*(iVar8 + 0x48) == 0 || (*(iVar8 + 0x48) == (*(iVar8 + 0x49) & uVar21)))))
                                goto code_r0x0800240c;
                            }
                            else if (uVar2 == 0xfd) {
                                if ((uVar15 == 6) || (uVar15 == 0x11)) goto code_r0x080022a4;
                            }
                            else if (uVar2 == uVar15) goto code_r0x08002294;
code_r0x0800210c:
                            bVar3 = true;
                        }
                    }
                    piVar14 = *piVar14;
                } while (piVar1 != piVar14);
            }
        }
        else {
            for (piVar14 = *piVar1; piVar1 != piVar14; piVar14 = *piVar14) {
                if (*(piVar14 + 0x24) == *(iVar6 + 0x8c)) goto code_r0x0800240c;
            }
        }
    }
code_r0x08002474:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_d8) {
        auVar23 = __stack_chk_fail();
        iVar8 = auVar23._8_8_;
        *extraout_x18_00 = 0x80024b4;
        if (((*(auVar23._0_8_ + 0xbe8) == '\0') ||
            (*(*(iVar8 + 0xd0) + *(iVar8 + 0xcc) + 0x10) == 0 ||
             CONCAT44(*0x8000004,CONCAT22(*0x8000002,_segment.ehdr)) == 0)) ||
           (iVar6 = ktime_get_with_offset(1),
           iVar6 - *(*(iVar8 + 0xd0) + *(iVar8 + 0xcc) + 0x10) <=
           CONCAT44(*0x8000004,CONCAT22(*0x8000002,_segment.ehdr)))) {
            uVar5 = 0;
        }
        else {
            uVar5 = 0xffffff92;
        }
        return uVar5;
    }
    return uVar5;
code_r0x0800240c:
    if (piVar14 != 0x10) {
        _raw_spin_lock_bh(obj.DATARMNET33bd4139f4);
        *(iVar6 + 0x8c) = piVar14[8];
        piVar14[9] = _mutex_lock + *(piVar14 + 0x44);
        piVar14[10] = piVar14[10] + *(iVar6 + 0x70);
        _raw_spin_unlock_bh(obj.DATARMNET33bd4139f4);
        uVar5 = queue_delayed_work_on(0x20,_dev_get_by_index,obj.DATARMNET3481998252,0x2ee);
    }
    goto code_r0x08002474;
}


// ===== sym.DATARMNETe0c7b9d5a4 @ 0x08001fe8 (size 1256) =====

ulong sym.DATARMNETe0c7b9d5a4(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint8_t uVar2;
    bool bVar3;
    ulong uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar8;
    int64_t iVar9;
    uint8_t uVar10;
    uint32_t *puVar11;
    uint16_t uVar12;
    uint16_t *puVar13;
    uint16_t uVar14;
    uint32_t uVar15;
    uint8_t *puVar16;
    uint32_t *puVar17;
    uint32_t *puVar18;
    ulong unaff_x30;
    uchar auVar19 [16];
    uint64_t uStack_90;
    ulong uStack_88;
    uint64_t uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    if (*(arg1 + 0xbe8) == '\0') {
        uVar4 = 0;
    }
    else {
        uVar4 = ktime_get_with_offset(1);
    }
    *(*(arg2 + 0xd0) + *(arg2 + 0xcc) + 0x10) = uVar4;
    if ((_obj.DATARMNETfef55eaf9a != 0) &&
       (((_segment.ehdr == 0 || (*(arg2 + 0x8e) == _segment.ehdr)) && (*(arg1 + 0xbf0) != 0)))) {
        piVar1 = *(arg1 + 0xbf0) + 0x10;
        if (_segment.ehdr == 0) {
            piVar8 = *piVar1;
            if (piVar1 != piVar8) {
                bVar3 = false;
                uVar15 = 0;
                uVar7 = 0;
                uVar14 = 0;
                uVar12 = 0;
                puVar17 = NULL;
                puVar11 = NULL;
                uVar10 = 0;
                do {
                    iVar9 = piVar8[7];
                    if (iVar9 != 0) {
                        if (*(iVar9 + 0x1c) == 10) {
                            if (*(arg2 + 0xb0) == -0x227a) goto code_r0x08002158;
                        }
                        else if ((*(iVar9 + 0x1c) != 2) || (*(arg2 + 0xb0) == 8)) {
code_r0x08002158:
                            if (!bVar3) {
                                if (*(arg2 + 0xb0) == -0x227a) {
                                    uStack_78 = 0;
                                    uStack_70 = 0;
                                    uStack_88 = 0;
                                    uStack_80 = 0;
                                    uStack_90 = 0;
                                    if (*(arg2 + 0x70) - *(arg2 + 0x74) < 0x28) {
                                        if ((arg2 == 0) ||
                                           (uVar4 = skb_copy_bits(arg2,0,&stack0xffffffffffffff70,0x28),
                                           puVar18 = &stack0xffffffffffffff70, uVar4 < 0)) break;
                                    }
                                    else {
                                        puVar18 = *(arg2 + 0xd8);
                                        if (*(arg2 + 0xd8) == NULL) break;
                                    }
                                    uVar10 = *(puVar18 + 6);
                                    if (uVar10 == 0x2c) break;
                                    puVar11 = puVar18 + 2;
                                    uVar6 = 0x28;
                                    puVar17 = puVar18 + 6;
                                    uVar15 = *puVar18;
                                    uVar7 = (uVar15 & 0xff000f00) >> 8;
                                    uVar7 = (uVar7 | (uVar15 & 0xff0000) << 8) >> 0x10 | uVar7 << 0x10;
                                    uVar15 = (((uVar15 & 0xf00f) >> 8 | (uVar15 & 0xf) << 8) << 0x10) >> 0x14;
                                }
                                else {
                                    if (*(arg2 + 0xb0) != 8) break;
                                    uStack_80 = uStack_80 & 0xffffffff00000000;
                                    uStack_90 = 0;
                                    uStack_88 = 0;
                                    if (*(arg2 + 0x70) - *(arg2 + 0x74) < 0x14) {
                                        if ((arg2 == 0) ||
                                           (uVar4 = skb_copy_bits(arg2,0,&stack0xffffffffffffff70,0x14),
                                           puVar16 = &stack0xffffffffffffff70, uVar4 < 0)) break;
                                    }
                                    else {
                                        puVar16 = *(arg2 + 0xd8);
                                        if (*(arg2 + 0xd8) == NULL) break;
                                    }
                                    if (((*puVar16 & 0xf) < 5) || ((*(puVar16 + 6) & 0xff3f) != 0)) break;
                                    uVar10 = puVar16[9];
                                    puVar11 = puVar16 + 0xc;
                                    puVar17 = puVar16 + 0x10;
                                    uVar15 = puVar16[1];
                                    uVar6 = (*puVar16 & 0xf) << 2;
                                }
                                if ((uVar10 == 0x11) || (uVar10 == 6)) {
                                    uStack_90 = uStack_90 & 0xffffffff00000000;
                                    if (*(arg2 + 0x70) - (uVar6 + *(arg2 + 0x74)) < 4) {
                                        if ((arg2 == 0) ||
                                           (uVar4 = skb_copy_bits(arg2,uVar6,&stack0xffffffffffffff70,4),
                                           puVar13 = &stack0xffffffffffffff70, uVar4 < 0)) break;
                                    }
                                    else {
                                        puVar13 = *(arg2 + 0xd8) + uVar6;
                                        if (puVar13 == NULL) break;
                                    }
                                    uVar12 = *puVar13 >> 8 | *puVar13 << 8;
                                    uVar14 = puVar13[1] >> 8 | puVar13[1] << 8;
                                }
                            }
                            uVar2 = *(iVar9 + 0x4a);
                            if (uVar2 == 0) {
code_r0x08002294:
                                if ((uVar10 == 0x11) || (uVar10 == 6)) {
code_r0x080022a4:
                                    if (((*(iVar9 + 0x42) != 0) && (*(iVar9 + 0x42) != uVar14)) ||
                                       ((*(iVar9 + 0x40) != 0 && (*(iVar9 + 0x40) != uVar12)))) goto code_r0x0800210c;
                                }
                                if (*(iVar9 + 0x1c) == 10) {
                                    if ((((((*(iVar9 + 0x4b) >> 1 & 1) == 0) ||
                                          (*(iVar9 + 0x30) == *puVar17 && *(iVar9 + 0x38) == *(puVar17 + 2))) &&
                                         (((*(iVar9 + 0x4b) & 1) == 0 ||
                                          (*(iVar9 + 0x20) == *puVar11 && *(iVar9 + 0x28) == *(puVar11 + 2))))) &&
                                        ((*(iVar9 + 0x48) == 0 || (*(iVar9 + 0x48) == (*(iVar9 + 0x49) & uVar15))))) &&
                                       ((*(iVar9 + 0x44) == 0 || (*(iVar9 + 0x44) == uVar7)))) goto code_r0x0800240c;
                                }
                                else if ((((*(iVar9 + 0x1c) == 2) &&
                                          (((*(iVar9 + 0x4b) >> 1 & 1) == 0 || (*(iVar9 + 0x30) == *puVar17)))) &&
                                         (((*(iVar9 + 0x4b) & 1) == 0 || (*(iVar9 + 0x20) == *puVar11)))) &&
                                        ((*(iVar9 + 0x48) == 0 || (*(iVar9 + 0x48) == (*(iVar9 + 0x49) & uVar15)))))
                                goto code_r0x0800240c;
                            }
                            else if (uVar2 == 0xfd) {
                                if ((uVar10 == 6) || (uVar10 == 0x11)) goto code_r0x080022a4;
                            }
                            else if (uVar2 == uVar10) goto code_r0x08002294;
code_r0x0800210c:
                            bVar3 = true;
                        }
                    }
                    piVar8 = *piVar8;
                } while (piVar1 != piVar8);
            }
        }
        else {
            for (piVar8 = *piVar1; piVar1 != piVar8; piVar8 = *piVar8) {
                if (*(piVar8 + 0x24) == *(arg2 + 0x8c)) goto code_r0x0800240c;
            }
        }
    }
code_r0x08002474:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_68) {
        auVar19 = __stack_chk_fail();
        iVar9 = auVar19._8_8_;
        *extraout_x18 = 0x80024b4;
        if (((*(auVar19._0_8_ + 0xbe8) == '\0') ||
            (*(*(iVar9 + 0xd0) + *(iVar9 + 0xcc) + 0x10) == 0 || CONCAT62(*0x8000002,_segment.ehdr) == 0)) ||
           (iVar5 = ktime_get_with_offset(1),
           iVar5 - *(*(iVar9 + 0xd0) + *(iVar9 + 0xcc) + 0x10) <= CONCAT62(*0x8000002,_segment.ehdr))) {
            uVar4 = 0;
        }
        else {
            uVar4 = 0xffffff92;
        }
        return uVar4;
    }
    return uVar4;
code_r0x0800240c:
    if (piVar8 != 0x10) {
        _raw_spin_lock_bh(obj.DATARMNET33bd4139f4);
        *(arg2 + 0x8c) = piVar8[8];
        piVar8[9] = _mutex_lock + *(piVar8 + 0x44);
        piVar8[10] = piVar8[10] + *(arg2 + 0x70);
        _raw_spin_unlock_bh(obj.DATARMNET33bd4139f4);
        uVar4 = queue_delayed_work_on(0x20,_dev_get_by_index,obj.DATARMNET3481998252,0x2ee);
    }
    goto code_r0x08002474;
}


// ===== sym.DATARMNET6ab4bbdaf4 @ 0x080024d0 (size 140) =====

ulong sym.DATARMNET6ab4bbdaf4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((*(arg1 + 0xbe8) == '\0') || (*(*(arg2 + 0xd0) + *(arg2 + 0xcc) + 0x10) == 0 || _segment.ehdr == 0)) ||
       (iVar1 = ktime_get_with_offset(1), iVar1 - *(*(arg2 + 0xd0) + *(arg2 + 0xcc) + 0x10) <= _segment.ehdr)) {
        uVar2 = 0;
    }
    else {
        uVar2 = 0xffffff92;
    }
    return uVar2;
}


// ===== sym.DATARMNET998f6cbce7 @ 0x0800255c (size 556) =====

ulong sym.DATARMNET998f6cbce7(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    code cVar2;
    bool bVar3;
    int iVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t iVar7;
    code *pcVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iVar7 = *(iVar7 + 0x5e0);
    arg3 = *arg3;
    if ((arg3 != 0) && (arg1 = strncmp(arg3,"rmnet_data",10), arg1 == 0)) {
        if (arg2 == 6) {
            mutex_lock(obj.DATARMNET54b95e4416);
            if (_obj.DATARMNET7520901fb5 != obj.DATARMNET7520901fb5) {
                iVar1 = *(arg3 + 0xd0);
                pcVar8 = _obj.DATARMNET7520901fb5;
                do {
                    pcVar12 = *pcVar8;
                    if (*(pcVar8 + 0x1c) == iVar1) {
                        if ((_segment.ehdr != 0) && (iVar4 = sym.DATARMNETbd1d5c8f28(0x8000220,1,2,0xc), iVar4 != 0)
                           ) {
                            _segment.ehdr = 0;
                        }
                        sym.DATARMNET7fa3dd63cb(pcVar8 + -0x20);
                    }
                    pcVar8 = pcVar12;
                } while (pcVar12 != obj.DATARMNET7520901fb5);
            }
            iVar5 = *(arg3 + 0xbf0);
            if (iVar5 != 0) {
                if (iVar5 + 0x10 != *(iVar5 + 0x10)) {
    //WARNING: Does not return
                    pcVar8 = SoftwareBreakpoint(0x800,0x8002778);
                    (*pcVar8)();
                }
                *(arg3 + 0xbf0) = 0;
                kvfree_call_rcu(iVar5,0);
            }
        }
        else {
            if (arg2 != 2) goto code_r0x08002738;
            *(arg3 + 0xbe8) = 0;
            mutex_lock(obj.DATARMNET54b95e4416);
            if (_obj.DATARMNET7520901fb5 != obj.DATARMNET7520901fb5) {
                iVar1 = *(arg3 + 0xd0);
                pcVar8 = _obj.DATARMNET7520901fb5;
                do {
                    pcVar12 = *pcVar8;
                    if (*(pcVar8 + 0x1c) == iVar1) {
                        if ((_segment.ehdr != 0) && (iVar4 = sym.DATARMNETbd1d5c8f28(0x8000220,1,2,0xc), iVar4 != 0)
                           ) {
                            _segment.ehdr = 0;
                        }
                        sym.DATARMNET7fa3dd63cb(pcVar8 + -0x20);
                    }
                    pcVar8 = pcVar12;
                } while (pcVar12 != obj.DATARMNET7520901fb5);
            }
        }
        arg1 = mutex_unlock(obj.DATARMNET54b95e4416);
    }
code_r0x08002738:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iVar7) {
        return 0;
    }
    __stack_chk_fail(arg1);
    *extraout_x18 = 0x8002780;
    mutex_lock(obj.DATARMNET54b95e4416);
    if (obj.DATARMNET54b95e4416 == 0x1) {
        _raw_spin_lock_bh(obj.DATARMNET33bd4139f4);
        list_sort(0,obj.DATARMNET7520901fb5,sym.DATARMNET772c0b87c5.39fd6562af3f80f6a4c2b181ecafa4f5.cfi_jt);
        if (_obj.DATARMNET7520901fb5 == obj.DATARMNET7520901fb5) {
            bVar3 = false;
        }
        else {
            uVar9 = 0;
            uVar11 = 0;
            bVar3 = false;
            pcVar8 = _obj.DATARMNET7520901fb5;
            do {
                iVar7 = *(pcVar8 + 0x40);
                uVar10 = uVar9;
                if (pcVar8[0x21] == 0x0) {
code_r0x0800283c:
                    cVar2 = pcVar8[0x22];
                    uVar9 = uVar10;
                }
                else {
                    uVar10 = iVar7 + uVar9;
                    if (uVar10 >> 0x13 < 0x177) {
                        pcVar8[0x48] = 0x1;
                        *(pcVar8 + 0x30) = *(pcVar8 + 0x30) | 0x100;
                        goto code_r0x0800283c;
                    }
                    pcVar8[0x48] = 0x0;
                    *(pcVar8 + 0x30) = *(pcVar8 + 0x30) & 0xfffffeff;
                    cVar2 = pcVar8[0x22];
                }
                if (cVar2 != 0x0) {
                    if (iVar7 + uVar11 >> 0x14 < 0x4b) {
                        pcVar8[0x49] = 0x1;
                        *(pcVar8 + 0x30) = *(pcVar8 + 0x30) | 0x200;
                        uVar11 = iVar7 + uVar11;
                    }
                    else {
                        pcVar8[0x49] = 0x0;
                        *(pcVar8 + 0x30) = *(pcVar8 + 0x30) & 0xfffffdff;
                    }
                }
                if (iVar7 != 0) {
                    bVar3 = true;
                    *(pcVar8 + 0x40) = 0;
                }
                pcVar8 = *pcVar8;
            } while (pcVar8 != obj.DATARMNET7520901fb5);
        }
        _raw_spin_unlock_bh(obj.DATARMNET33bd4139f4);
        uVar6 = mutex_unlock(obj.DATARMNET54b95e4416);
        if (bVar3) {
            uVar6 = queue_delayed_work_on(0x20,_dev_get_by_index,obj.DATARMNET3481998252,0x2ee);
        }
    }
    else {
        uVar6 = mutex_unlock(obj.DATARMNET54b95e4416);
    }
    return uVar6;
}


// ===== sym.DATARMNET5979020f87 @ 0x08002788 (size 388) =====

void sym.DATARMNET5979020f87(void)

{
    code cVar1;
    bool bVar2;
    code *pcVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.DATARMNET54b95e4416);
    if (obj.DATARMNET54b95e4416 == 0x1) {
        _raw_spin_lock_bh(obj.DATARMNET33bd4139f4);
        list_sort(0,obj.DATARMNET7520901fb5,sym.DATARMNET772c0b87c5.39fd6562af3f80f6a4c2b181ecafa4f5.cfi_jt);
        if (_obj.DATARMNET7520901fb5 == obj.DATARMNET7520901fb5) {
            bVar2 = false;
        }
        else {
            uVar4 = 0;
            uVar6 = 0;
            bVar2 = false;
            pcVar3 = _obj.DATARMNET7520901fb5;
            do {
                iVar7 = *(pcVar3 + 0x40);
                uVar5 = uVar4;
                if (pcVar3[0x21] == 0x0) {
code_r0x0800283c:
                    cVar1 = pcVar3[0x22];
                    uVar4 = uVar5;
                }
                else {
                    uVar5 = iVar7 + uVar4;
                    if (uVar5 >> 0x13 < 0x177) {
                        pcVar3[0x48] = 0x1;
                        *(pcVar3 + 0x30) = *(pcVar3 + 0x30) | 0x100;
                        goto code_r0x0800283c;
                    }
                    pcVar3[0x48] = 0x0;
                    *(pcVar3 + 0x30) = *(pcVar3 + 0x30) & 0xfffffeff;
                    cVar1 = pcVar3[0x22];
                }
                if (cVar1 != 0x0) {
                    if (iVar7 + uVar6 >> 0x14 < 0x4b) {
                        pcVar3[0x49] = 0x1;
                        *(pcVar3 + 0x30) = *(pcVar3 + 0x30) | 0x200;
                        uVar6 = iVar7 + uVar6;
                    }
                    else {
                        pcVar3[0x49] = 0x0;
                        *(pcVar3 + 0x30) = *(pcVar3 + 0x30) & 0xfffffdff;
                    }
                }
                if (iVar7 != 0) {
                    bVar2 = true;
                    *(pcVar3 + 0x40) = 0;
                }
                pcVar3 = *pcVar3;
            } while (pcVar3 != obj.DATARMNET7520901fb5);
        }
        _raw_spin_unlock_bh(obj.DATARMNET33bd4139f4);
        mutex_unlock(obj.DATARMNET54b95e4416);
        if (bVar2) {
            queue_delayed_work_on(0x20,_dev_get_by_index,obj.DATARMNET3481998252,0x2ee);
        }
    }
    else {
        mutex_unlock(obj.DATARMNET54b95e4416);
    }
    return;
}


// ===== sym.DATARMNET772c0b87c5 @ 0x0800290c (size 28) =====

bool sym.DATARMNET772c0b87c5(ulong noname_0,int64_t arg1,int64_t arg2)

{
    return *(arg2 + 0x40) < *(arg1 + 0x40);
}


// ===== sym.__cfi_check_fail @ 0x08002928 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800296c

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
    //switch table (4 cases) at 0x80004fd
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002980);
    (*pcVar1)();
}


// ===== sym.DATARMNETcfa8d492f8 @ 0x08002980 (size 44) =====

void sym.DATARMNETcfa8d492f8(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    genl_register_family(obj.DATARMNETcdba30eca9);
    return;
}


// ===== sym.DATARMNETca7606cfd1 @ 0x080029ac (size 44) =====

void sym.DATARMNETca7606cfd1(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    genl_unregister_family(obj.DATARMNETcdba30eca9);
    return;
}


// ===== sym.init_module @ 0x080029e4 (size 204) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80004eb,0x80004ac);
    iVar1 = genl_register_family(obj.DATARMNETcdba30eca9);
    if (iVar1 == 0) {
        register_netdevice_notifier(reloc.DATARMNET998f6cbce7.39fd6562af3f80f6a4c2b181ecafa4f5.cfi_jt);
        _rmnet_aps_pre_queue = 0x8001210;
        _rmnet_aps_post_queue = 0x80011f8;
        _rmnet_module_hook_register = 0;
        rmnet_module_hook_register(obj.DATARMNET509284caa6,2);
        mutex_lock(obj.DATARMNET54b95e4416);
        obj.DATARMNET54b95e4416 = 0x1;
        mutex_unlock(obj.DATARMNET54b95e4416);
    }
    else {
        _printk(0x80004c4);
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x08002ab0 (size 328) =====

void sym.cleanup_module(ulong param_1,ulong param_2,ulong param_3)

{
    bool bVar1;
    int64_t iVar2;
    int iVar3;
    code *arg1;
    uchar uVar4;
    uint uVar5;
    int64_t iVar6;
    uchar *extraout_x8;
    ulong *in_x18;
    code *pcVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iVar6 = *(iVar6 + 0x5e0);
    _preempt_schedule_notrace = 0;
    _android_kmalloc_64_create = 0;
    rmnet_module_hook_unregister_no_sync(obj.DATARMNET509284caa6,2);
    synchronize_rcu();
    mutex_lock(obj.DATARMNET54b95e4416);
    uVar5 = param_3;
    obj.DATARMNET54b95e4416 = 0x0;
    pcVar7 = _obj.DATARMNET7520901fb5;
    while (uVar4 = uVar5, pcVar7 != obj.DATARMNET7520901fb5) {
        arg1 = pcVar7 + -0x20;
        pcVar7 = *pcVar7;
        sym.DATARMNET7fa3dd63cb(arg1);
        uVar5 = param_3;
    }
    mutex_unlock(obj.DATARMNET54b95e4416);
    if (_segment.ehdr != 0) {
        uVar4 = 2;
        iVar3 = sym.DATARMNETbd1d5c8f28(0x8000220,1,2,0xc);
        if (iVar3 != 0) {
            _segment.ehdr = 0;
        }
    }
    cancel_delayed_work_sync(obj.DATARMNET3481998252);
    del_timer_sync(obj.DATARMNETd21629e047);
    cancel_work_sync(obj.DATARMNET8e3aef0760);
    unregister_netdevice_notifier(reloc.DATARMNET998f6cbce7.39fd6562af3f80f6a4c2b181ecafa4f5.cfi_jt);
    genl_unregister_family(obj.DATARMNETcdba30eca9);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iVar6) {
        __stack_chk_fail();
    //[20] -r-- section size 40 named __param
        bVar1 = ExclusiveMonitorPass(extraout_x8,0x10);
        if (bVar1) {
            *extraout_x8 = uVar4;
            ExclusiveMonitorsStatus();
        }
    //WARNING: Does not return
        pcVar7 = UndefinedInstructionException(0,0x8002bf4);
        (*pcVar7)();
    }
    return;
}

