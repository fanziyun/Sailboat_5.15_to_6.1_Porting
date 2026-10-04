// decompiled from memlat by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08003000 (size 528) =====

//WARNING: Switch with 1 destination removed at 0x08007bc0

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x3557318fb8d07b71) {
            if (arg1 == -0x5766eff7c9d1a178) {
                pcVar2 = sym.memlat_pmu_idle_cb.ced2387b2ffe06d71748357bedbe93a2.cfi_jt;
            }
            else {
                if (arg1 != -0x550b9e52359ac614) goto code_r0x08007b80;
                pcVar2 = sym.memlat_update_work.ced2387b2ffe06d71748357bedbe93a2.cfi_jt;
            }
        }
        else if (arg1 == -0x3557318fb8d07b71) {
            pcVar2 = sym.qcom_memlat_probe.ced2387b2ffe06d71748357bedbe93a2.cfi_jt;
        }
        else {
            if (arg1 != -0xef4825473ba2583) {
                if ((arg1 == -0x558484723f05168) && ((pcVar1 + -0x8003258 >> 3 | pcVar1 << 0x3d) < 0x11)) {
                    return;
                }
                goto code_r0x08007b80;
            }
            pcVar2 = sym.memlat_jiffies_update_cb.ced2387b2ffe06d71748357bedbe93a2.cfi_jt;
        }
    }
    else if (arg1 < 0x39e63916c3db07da) {
        if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0xc09366ef6f49f15) {
                if ((arg1 == 0x2c1d832160b5d123) && ((pcVar1 + -0x80032e8 >> 3 | pcVar1 << 0x3d) < 0x16)) {
                    return;
                }
                goto code_r0x08007b80;
            }
            pcVar2 = sym.memlat_sched_tick_cb.ced2387b2ffe06d71748357bedbe93a2.cfi_jt;
        }
    }
    else if (arg1 == 0x39e63916c3db07da) {
        pcVar2 = sym.memlat_hrtimer_handler.ced2387b2ffe06d71748357bedbe93a2.cfi_jt;
    }
    else if (arg1 == 0x4a7363fd219dda0c) {
        pcVar2 = sym.cpucp_memlat_init.cfi_jt;
    }
    else {
        if (arg1 != 0x4c550309df1cf4c1) goto code_r0x08007b80;
        pcVar2 = sym.get_mpidr_cpu.ced2387b2ffe06d71748357bedbe93a2.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08007b80:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8007bd4);
    (*pcVar1)();
}


// ===== sym.cpucp_memlat_init.cfi_jt @ 0x08003218 (size 8) =====

uint64_t sym.cpucp_memlat_init.cfi_jt(code *param_1)

{
    uint uVar1;
    uint uVar2;
    int64_t *piVar3;
    bool bVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    uint32_t uVar8;
    int64_t iVar9;
    int *piVar10;
    int64_t *piVar11;
    int64_t iVar12;
    int64_t iVar13;
    int64_t iVar14;
    uint64_t uVar15;
    ulong extraout_x1;
    char *pcVar16;
    uint32_t *in_x5;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    uint32_t extraout_w8_01;
    uint32_t extraout_w8_02;
    ulong extraout_x8;
    ulong extraout_x8_00;
    uint32_t uVar17;
    int *piVar18;
    ulong *in_x18;
    ulong *extraout_x18;
    code *unaff_x19;
    code *unaff_x20;
    code *pcVar19;
    ulong *unaff_x21;
    ulong uVar20;
    uint64_t uVar21;
    uint64_t unaff_x23;
    uint64_t unaff_x24;
    int64_t iVar22;
    int64_t unaff_x25;
    int64_t *unaff_x26;
    uint32_t *unaff_x27;
    int64_t *piVar23;
    uint64_t uVar24;
    ulong unaff_x30;
    uint32_t uStack_124;
    ulong uStack_120;
    int64_t iStack_118;
    uchar *puStack_110;
    code *pcStack_108;
    uint64_t uStack_100;
    uint32_t *puStack_f8;
    int64_t *piStack_f0;
    int64_t iStack_e8;
    uint64_t uStack_e0;
    uint64_t uStack_d8;
    ulong uStack_d0;
    ulong *puStack_c8;
    code *pcStack_c0;
    code *pcStack_b8;
    code *pcStack_b0;
    uint64_t uStack_a8;
    int64_t *piStack_a0;
    ulong *puStack_98;
    int64_t *piStack_90;
    uint64_t uStack_88;
    code *pcStack_80;
    int64_t iStack_78;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_68 = *(iVar12 + 0x5e0);
    iStack_78 = 0;
    if ((_segment.ehdr == NULL) || (*(_segment.ehdr + 0x142) == '\0')) {
        uVar24 = 0xfffffdfb;
    }
    else {
        unaff_x19 = param_1;
        if ((param_1 == NULL) || (*(param_1 + 0x3a0) == 0)) {
            uVar24 = 0xffffffea;
        }
        else {
            pcVar19 = *(*(param_1 + 0x3a0) + 0x10);
            __cfi_slowpath_diag(0x25d5be01bcd057e5,pcVar19,0x80007f0);
            pcVar19 = (*pcVar19)(param_1,0x80,&iStack_78);
            unaff_x20 = pcVar19;
            if (pcVar19 < 0xfffffffffffff001) {
                mutex_lock(obj.memlat_lock);
                piVar23 = _segment.ehdr;
                uStack_6c = 0xffffffff;
                iVar12 = _segment.ehdr[0xd];
                _segment.ehdr[0x29] = pcVar19;
                piVar23[0x2a] = iStack_78;
                if ((iVar12 != 0) && (uVar8 = qcom_get_cpucp_id(iVar12,0), uVar8 < 9)) {
                    uStack_6c = CONCAT31(uStack_6c._1_3_,uVar8);
                }
                if ((*(_segment.ehdr + 0x6c) != 0) &&
                   (uVar8 = qcom_get_cpucp_id(*(_segment.ehdr + 0x6c),0), uVar8 < 9)) {
                    uStack_6c._0_2_ = CONCAT11(uVar8,uStack_6c);
                }
                if ((_segment.ehdr[0xe] != 0) && (uVar8 = qcom_get_cpucp_id(_segment.ehdr[0xe],0), uVar8 < 9)) {
                    uStack_6c._0_3_ = CONCAT12(uVar8,uStack_6c);
                }
                if ((*(_segment.ehdr + 0x74) != 0) &&
                   (uVar8 = qcom_get_cpucp_id(*(_segment.ehdr + 0x74),0), uVar8 < 9)) {
                    uStack_6c = CONCAT13(uVar8,uStack_6c);
                }
                unaff_x19 = *(pcVar19 + 0x30);
                __cfi_slowpath_diag(0x7b03ac44b3ee5b01,unaff_x19,0x8000850);
                uVar8 = (*unaff_x19)(_segment.ehdr[0x2a],&uStack_6c,4);
                if (uVar8 < 0) {
                    uVar24 = uVar8;
                    uVar20 = 0x8000e70;
code_r0x08003ce8:
                    _printk(uVar20,uVar24);
code_r0x08003c38:
                    _segment.ehdr[0x29] = 0;
                }
                else {
                    unaff_x23 = 0;
                    unaff_x20 = NULL;
                    piVar23 = _segment.ehdr;
                    pcStack_b0 = pcVar19;
                    do {
                        unaff_x24 = 200;
                        unaff_x26 = piVar23[unaff_x23 + 0x22];
                        if ((unaff_x26 != NULL) && (*(unaff_x26 + 0x1c) != '\0')) {
                            unaff_x21 = piVar23[0x29];
                            pcVar19 = *unaff_x21;
                            unaff_x19 = *(*unaff_x26 + 0x2f0);
                            __cfi_slowpath_diag(0x308d371319c62e56,pcVar19,0x8000870);
                            piVar23 = _segment.ehdr;
                            iVar12 = unaff_x26[2];
                            *in_x5 = extraout_x1;
                            uVar8 = (*pcVar19)(piVar23[0x2a],extraout_x1,iVar12);
                            if (uVar8 < 0) {
                                uVar24 = uVar8;
                                uVar20 = 0x8001549;
                            }
                            else {
                                uStack_6c = CONCAT13(uStack_6c._3_1_,0xff0000);
                                uStack_6c = CONCAT22(uStack_6c._2_2_,0xffff);
                                if ((unaff_x26[8] != 0) && (uVar8 = qcom_get_cpucp_id(unaff_x26[8],0), uVar8 < 9)) {
                                    uStack_6c = CONCAT31(uStack_6c._1_3_,uVar8);
                                }
                                if ((*(unaff_x26 + 0x44) != 0) &&
                                   (uVar8 = qcom_get_cpucp_id(*(unaff_x26 + 0x44),0), uVar8 < 9)) {
                                    uStack_6c._0_2_ = CONCAT11(uVar8,uStack_6c);
                                }
                                if ((unaff_x26[9] != 0) && (uVar8 = qcom_get_cpucp_id(unaff_x26[9],0), uVar8 < 9)) {
                                    uStack_6c._0_3_ = CONCAT12(uVar8,uStack_6c);
                                }
                                pcVar19 = unaff_x21[2];
                                __cfi_slowpath_diag(0x34377c6266c49fe3,pcVar19,0x8000890);
                                uVar8 = (*pcVar19)(_segment.ehdr[0x2a],unaff_x26[2],&uStack_6c,3);
                                if (uVar8 < 0) {
                                    uVar24 = uVar8;
                                    uVar20 = 0x8001761;
                                }
                                else {
                                    pcVar19 = unaff_x21[3];
                                    __cfi_slowpath_diag(0xd7b8b83d5cf4b610,pcVar19,0x80008b0);
                                    uVar8 = (*pcVar19)(_segment.ehdr[0x2a],unaff_x26[2],0,*(unaff_x26 + 0x2c));
                                    if (uVar8 < 0) {
                                        uVar24 = uVar8;
                                        uVar20 = 0x8001959;
                                    }
                                    else {
                                        pcVar19 = unaff_x21[4];
                                        __cfi_slowpath_diag(0xd7b8b83d5cf4b610,pcVar19,0x80008d0);
                                        uVar8 = (*pcVar19)(_segment.ehdr[0x2a],unaff_x26[2],0,unaff_x26[5]);
                                        if (-1 < uVar8) {
                                            piStack_a0 = unaff_x26 + 0xc;
                                            uStack_a8 = unaff_x23;
                                            mutex_lock();
                                            uVar8 = *(unaff_x26 + 0x5c);
                                            if (uVar8 != 0) {
                                                uVar17 = 0;
                                                piStack_90 = unaff_x26;
                                                do {
                                                    unaff_x25 = unaff_x26[10];
                                                    unaff_x19 = uVar17;
                                                    if (*(unaff_x25 + uVar17 * 200 + 0x10) == 4) {
                                                        piVar23 = unaff_x25 + unaff_x19 * 200;
                                                        uStack_88 = _segment.ehdr[0x29];
                                                        unaff_x21 = piVar23[1];
                                                        pcStack_80 = *(uStack_88 + 8);
                                                        puStack_98 = *(*piVar23 + 0x2f0);
                                                        __cfi_slowpath_diag(0x3fc582948b8475f2,pcStack_80,0x80008f0);
                                                        iVar12 = (*piVar23)[0xe];
                                                        if (iVar12 == 0) {
                                                            iVar12 = **piVar23;
                                                        }
                                                        uVar1 = *(piVar23 + 0x14);
                                                        unaff_x20 = *(unaff_x21 + 2);
                                                        unaff_x26 = _segment.ehdr[0x2a];
                                                        unaff_x23 = *(piVar23 + 0x18);
                                                        unaff_x27 = piVar23 + 0xc4;
                                                        unaff_x24 = *unaff_x27;
                                                        iVar12 = strrchr(iVar12,0x3a);
                                                        in_x5 = iVar12 + 1;
                                                        uVar8 = (*pcStack_80)(unaff_x26,uVar1,unaff_x20,unaff_x23,
                                                                              unaff_x24);
                                                        uVar24 = uStack_88;
                                                        if (uVar8 < 0) {
                                                            uVar24 = uVar8;
                                                            uVar20 = 0x8000ea6;
                                                        }
                                                        else {
                                                            unaff_x20 = *(uStack_88 + 0x38);
                                                            __cfi_slowpath_diag(0xd7b8b83d5cf4b610,unaff_x20,0x8000910
                                                                               );
                                                            unaff_x24 = 200;
                                                            uVar8 = (*unaff_x20)(_segment.ehdr[0x2a],*(unaff_x21 + 2),
                                                                                 *unaff_x27,
                                                                                 *(unaff_x25 + unaff_x19 * 200 + 0x2c));
                                                            unaff_x23 = uVar24;
                                                            if (uVar8 < 0) {
                                                                uVar24 = uVar8;
                                                                uVar20 = 0x80013ed;
                                                            }
                                                            else {
                                                                unaff_x20 = *(uVar24 + 0x40);
                                                                __cfi_slowpath_diag(0xd7b8b83d5cf4b610,unaff_x20,
                                                                                    0x8000930);
                                                                uVar8 = (*unaff_x20)(_segment.ehdr[0x2a],
                                                                                     *(unaff_x21 + 2),*unaff_x27,
                                                                                     *(unaff_x25 + unaff_x19 * 200 +
                                                                                      0x30));
                                                                if (uVar8 < 0) {
                                                                    uVar24 = uVar8;
                                                                    uVar20 = 0x800180a;
                                                                }
                                                                else {
                                                                    unaff_x20 = *(uVar24 + 0x48);
                                                                    __cfi_slowpath_diag(0xd7b8b83d5cf4b610,unaff_x20,
                                                                                        0x8000950);
                                                                    uVar8 = (*unaff_x20)(_segment.ehdr[0x2a],
                                                                                         *(unaff_x21 + 2),*unaff_x27,
                                                                                         *(unaff_x25 + unaff_x19 * 200 +
                                                                                          0x34));
                                                                    if (uVar8 < 0) {
                                                                        uVar24 = uVar8;
                                                                        uVar20 = 0x8000f52;
                                                                    }
                                                                    else {
                                                                        unaff_x20 = *(uVar24 + 0x50);
                                                                        __cfi_slowpath_diag(0xd7b8b83d5cf4b610,
                                                                                            unaff_x20,0x8000970);
                                                                        uVar8 = (*unaff_x20)(_segment.ehdr[0x2a],
                                                                                             *(unaff_x21 + 2),
                                                                                             *unaff_x27,
                                                                                             *(unaff_x25 +
                                                                                               unaff_x19 * 200 + 0x44));
                                                                        if (uVar8 < 0) {
                                                                            uVar24 = uVar8;
                                                                            uVar20 = 0x800179e;
                                                                        }
                                                                        else {
                                                                            unaff_x20 = *(uVar24 + 0x58);
                                                                            __cfi_slowpath_diag(0xd7b8b83d5cf4b610,
                                                                                                unaff_x20,0x8000990);
                                                                            uVar8 = (*unaff_x20)(_segment.ehdr[0x2a],
                                                                                                 *(unaff_x21 + 2),
                                                                                                 *unaff_x27,
                                                                                                 *(unaff_x25 +
                                                                                                   unaff_x19 * 200 +
                                                                                                  0x48));
                                                                            if (uVar8 < 0) {
                                                                                uVar24 = uVar8;
                                                                                uVar20 = 0x8000ddc;
                                                                            }
                                                                            else {
                                                                                unaff_x20 = *(uVar24 + 0x60);
                                                                                __cfi_slowpath_diag(0xd7b8b83d5cf4b610,
                                                                                                    unaff_x20,0x80009b0
                                                                                                   );
                                                                                uVar8 = (*unaff_x20)(_segment.ehdr[0x2a]
                                                                                                     ,*(unaff_x21 + 2)
                                                                                                     ,*unaff_x27,
                                                                                                     *(unaff_x25 +
                                                                                                       unaff_x19 * 200 +
                                                                                                      0x38));
                                                                                if (uVar8 < 0) {
                                                                                    uVar24 = uVar8;
                                                                                    uVar20 = 0x80017ca;
                                                                                }
                                                                                else {
                                                                                    unaff_x20 = *(uVar24 + 0x68);
                                                                                    __cfi_slowpath_diag(
                                                            0xd7b8b83d5cf4b610,unaff_x20,0x80009d0);
                                                            uVar8 = (*unaff_x20)(_segment.ehdr[0x2a],*(unaff_x21 + 2),
                                                                                 *unaff_x27,
                                                                                 *(unaff_x25 + unaff_x19 * 200 + 0x3c));
                                                            if (uVar8 < 0) {
                                                                uVar24 = uVar8;
                                                                uVar20 = 0x80014c1;
                                                            }
                                                            else {
                                                                unaff_x20 = *(uVar24 + 0x70);
                                                                __cfi_slowpath_diag(0xd7b8b83d5cf4b610,unaff_x20,
                                                                                    0x80009f0);
                                                                uVar8 = (*unaff_x20)(_segment.ehdr[0x2a],
                                                                                     *(unaff_x21 + 2),*unaff_x27,
                                                                                     *(unaff_x25 + unaff_x19 * 200 +
                                                                                      0x40));
                                                                if (uVar8 < 0) {
                                                                    uVar24 = uVar8;
                                                                    uVar20 = 0x80010c5;
                                                                }
                                                                else {
                                                                    unaff_x20 = *(uVar24 + 0x80);
                                                                    __cfi_slowpath_diag(0x51053f357f5ea05a,unaff_x20,
                                                                                        0x8000a10);
                                                                    iVar12 = unaff_x25 + unaff_x19 * 200;
                                                                    uVar8 = (*unaff_x20)(_segment.ehdr[0x2a],
                                                                                         *(unaff_x21 + 2),*unaff_x27,
                                                                                         *(iVar12 + 0x28),
                                                                                         *(iVar12 + 0x20));
                                                                    if (uVar8 < 0) {
                                                                        uVar24 = uVar8;
                                                                        uVar20 = 0x80010fa;
                                                                    }
                                                                    else {
                                                                        unaff_x20 = *(uVar24 + 0x88);
                                                                        __cfi_slowpath_diag(0xd7b8b83d5cf4b610,
                                                                                            unaff_x20,0x8000a30);
                                                                        uVar8 = (*unaff_x20)(_segment.ehdr[0x2a],
                                                                                             *(unaff_x21 + 2),
                                                                                             *unaff_x27,
                                                                                             *(unaff_x25 +
                                                                                               unaff_x19 * 200 + 0x4c));
                                                                        if (uVar8 < 0) {
                                                                            uVar24 = uVar8;
                                                                            uVar20 = 0x8001578;
                                                                        }
                                                                        else {
                                                                            unaff_x20 = *(uVar24 + 0x90);
                                                                            __cfi_slowpath_diag(0xd7b8b83d5cf4b610,
                                                                                                unaff_x20,0x8000a50);
                                                                            uVar8 = (*unaff_x20)(_segment.ehdr[0x2a],
                                                                                                 *(unaff_x21 + 2),
                                                                                                 *unaff_x27,
                                                                                                 *(unaff_x25 +
                                                                                                   unaff_x19 * 200 +
                                                                                                  0x50));
                                                                            if (-1 < uVar8) {
                                                                                unaff_x20 = 0x1;
                                                                                uVar8 = *(piStack_90 + 0x5c);
                                                                                unaff_x26 = piStack_90;
                                                                                goto code_r0x080036fc;
                                                                            }
                                                                            uVar24 = uVar8;
                                                                            uVar20 = 0x800183e;
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
                                                        _printk(uVar20,*puStack_98);
                                                        _printk(0x800192d,uVar24);
                                                        mutex_unlock(piStack_a0);
                                                        goto code_r0x08003c38;
                                                    }
code_r0x080036fc:
                                                    uVar17 = uVar17 + 1;
                                                } while (uVar17 < uVar8);
                                            }
                                            mutex_unlock(piStack_a0);
                                            piVar23 = _segment.ehdr;
                                            unaff_x23 = uStack_a8;
                                            goto code_r0x0800354c;
                                        }
                                        uVar24 = uVar8;
                                        uVar20 = 0x8001002;
                                    }
                                }
                            }
                            _printk(uVar20,*unaff_x19);
                            uVar20 = 0x8000f20;
                            goto code_r0x08003ce8;
                        }
code_r0x0800354c:
                        unaff_x24 = 200;
                        unaff_x23 = unaff_x23 + 1;
                    } while (unaff_x23 != 4);
                    unaff_x19 = *(pcStack_b0 + 0x78);
                    __cfi_slowpath_diag(0x17f4128a1da16962,unaff_x19,0x8000810);
                    uVar8 = (*unaff_x19)(_segment.ehdr[0x2a],_segment.ehdr[0x2b]);
                    uVar24 = uVar8;
                    if (uVar8 < 0) {
                        _printk(0x8001278);
                        goto code_r0x08003c38;
                    }
                    if (unaff_x20 != 0) {
                        unaff_x19 = *(pcStack_b0 + 0xa0);
                        __cfi_slowpath_diag(0x6ac5a6004ef664b6,unaff_x19,0x8000830);
                        uVar8 = (*unaff_x19)(_segment.ehdr[0x2a]);
                        uVar24 = uVar8;
                        if (uVar8 < 0) {
                            uVar20 = 0x800119b;
                            goto code_r0x08003ce8;
                        }
                    }
                }
                mutex_unlock(obj.memlat_lock);
            }
            else {
                uVar24 = pcVar19 & 0xffffffff;
            }
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_68) {
        return uVar24;
    }
    iVar9 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_memlat_probe;
    pcStack_108 = sym.qcom_memlat_probe;
    uStack_d0 = 0x8000000;
    iVar12 = sp_el0;
    piVar23 = iVar9 + 0x10;
    iStack_118 = *(iVar12 + 0x5e0);
    puStack_110 = &stack0xffffffffffffffa0;
    uStack_100 = uVar24;
    puStack_f8 = unaff_x27;
    piStack_f0 = unaff_x26;
    iStack_e8 = unaff_x25;
    uStack_e0 = unaff_x24;
    uStack_d8 = unaff_x23;
    puStack_c8 = unaff_x21;
    pcStack_c0 = unaff_x20;
    pcStack_b8 = unaff_x19;
    piVar10 = of_device_get_match_data(piVar23);
    if (piVar10 == NULL) {
        iVar5 = 3;
code_r0x080049b4:
        _dev_err(piVar23,"Invalid memlat mon type specified: %u\n",iVar5);
        uVar21 = 0xffffffea;
    }
    else {
        iVar5 = *piVar10;
        if (iVar5 == 2) {
            iVar12 = *(*(iVar9 + 0x70) + 0x98);
            if (iVar12 == 0) {
                pcVar16 = "Mon probe called without memlat_grp inited.\n";
                goto code_r0x08004ba0;
            }
            uVar20 = *(iVar9 + 0x300);
            mutex_lock();
            iVar22 = *(iVar12 + 0x50);
            uVar24 = *(iVar12 + 0x5c);
            piVar11 = iVar22 + uVar24 * 200;
            *piVar11 = piVar23;
            piVar11[1] = iVar12;
            iVar5 = sym.get_mask_and_mpidr_from_pdev(iVar9,piVar11 + 3,piVar11 + 0x14);
            if (iVar5 == 0) {
                __sw_hweight64(piVar11[3]);
                iVar13 = of_find_property(*(iVar9 + 0x300),"qcom,sampling-enabled",0);
                if (iVar13 != 0) {
                    mutex_lock(obj.memlat_lock);
                    if (*(_segment.ehdr + 0x141) == '\0') {
                        iVar13 = *_segment.ehdr;
                        uVar8 = cpumask_next(0xffffffff,__cpu_possible_mask);
                        *in_x5 = extraout_x8;
                        if (uVar8 < extraout_x8) {
                            do {
                                iVar14 = devm_kmalloc(iVar13,0x230,0xdc0);
                                if (iVar14 == 0) goto code_r0x08003fac;
                                if (0x1f < uVar8) goto code_r0x08004c18;
                                *(obj.sampling_stats + *(__per_cpu_offset + uVar8 * 8)) = iVar14;
                                *(iVar14 + 0x200) = 0;
                                uVar8 = cpumask_next(uVar8,__cpu_possible_mask);
                                *in_x5 = extraout_x8_00;
                            } while (uVar8 < extraout_x8_00);
                        }
                        iVar14 = alloc_workqueue(0x8000f1d,0x4000e,1,"memlat_wq");
                        piVar11 = _segment.ehdr;
                        _segment.ehdr[0x15] = iVar14;
                        if (iVar14 == 0) {
                            _dev_err(iVar13,"Couldn\'t create memlat workqueue.\n");
                        }
                        else {
                            piVar11[0xf] = 0xfffffffe0;
                            piVar11[0x10] = piVar11 + 0x10;
                            piVar11[0x11] = piVar11 + 0x10;
                            piVar11[0x12] = sym.memlat_update_work.ced2387b2ffe06d71748357bedbe93a2.cfi_jt;
                            hrtimer_init(piVar11 + 0x17,1,1);
                            _segment.ehdr[0x1c] = sym.memlat_hrtimer_handler.ced2387b2ffe06d71748357bedbe93a2.cfi_jt;
                            tracepoint_probe_register
                                      (__tracepoint_android_vh_scheduler_tick,
                                       sym.memlat_sched_tick_cb.ced2387b2ffe06d71748357bedbe93a2.cfi_jt,0);
                            tracepoint_probe_register
                                      (__tracepoint_android_vh_jiffies_update,
                                       sym.memlat_jiffies_update_cb.ced2387b2ffe06d71748357bedbe93a2.cfi_jt,0);
                            qcom_pmu_idle_register(reloc.memlat_pmu_idle_cb.ced2387b2ffe06d71748357bedbe93a2.cfi_jt);
                        }
code_r0x08003fac:
                        *(_segment.ehdr + 0x141) = 1;
                    }
                    mutex_unlock(obj.memlat_lock);
                    iVar13 = iVar22 + uVar24 * 200;
                    *(iVar13 + 0x10) = *(iVar13 + 0x10) | 1;
                }
                iVar13 = of_find_property(*(iVar9 + 0x300),"qcom,threadlat-enabled",0);
                if (iVar13 != 0) {
                    iVar13 = iVar22 + uVar24 * 200;
                    *(iVar13 + 0x10) = *(iVar13 + 0x10) | 2;
                }
                iVar13 = of_find_property(*(iVar9 + 0x300),"qcom,cpucp-enabled",0);
                if (iVar13 != 0) {
                    iVar13 = iVar22 + uVar24 * 200;
                    *(iVar13 + 0x10) = *(iVar13 + 0x10) | 4;
                    *(iVar12 + 0x1c) = 1;
                }
                if (*(iVar22 + uVar24 * 200 + 0x10) == 0) {
                    _dev_err(piVar23,"No types configured for mon!\n");
                    uVar21 = 0xffffffed;
                }
                else {
                    iVar13 = of_find_property(*(iVar9 + 0x300),"qcom,compute-mon",0);
                    if (iVar13 != 0) {
                        *(iVar22 + uVar24 * 200 + 0xc0) = 1;
                    }
                    iVar13 = iVar22 + uVar24 * 200;
                    *(iVar13 + 0x2c) = 400;
                    *(iVar13 + 0x34) = 0;
                    *(iVar13 + 0x44) = 0x61a800000064;
                    *(iVar13 + 0x3c) = 0x138800001388;
                    iVar13 = of_parse_phandle(uVar20,"qcom,cpufreq-memfreq-tbl",0);
                    if (iVar13 != 0) {
                        uVar20 = of_parse_phandle(uVar20,"qcom,cpufreq-memfreq-tbl",0);
                    }
                    iVar13 = of_get_next_child(uVar20,0);
                    if (iVar13 != 0) {
                        iVar5 = 0;
                        do {
                            iVar13 = of_get_next_child(uVar20,iVar13);
                            iVar5 = iVar5 + -1;
                        } while (iVar13 != 0);
                        if (iVar5 != 0) {
                            uVar20 = qcom_dcvs_get_ddr_child_node(uVar20);
                        }
                    }
                    uStack_120 = 0;
                    iVar13 = of_find_property(uVar20,"qcom,cpufreq-memfreq-tbl",&uStack_120 + 4);
                    if (iVar13 != 0) {
                        uVar8 = uStack_120._4_4_;
                        iVar5 = uStack_120._4_4_ >> 2;
                        bVar4 = 3 < uStack_120._4_4_;
                        uStack_120 = CONCAT44(iVar5,uStack_120);
                        if ((bVar4) && ((uVar8 >> 2 & 1) == 0)) {
                            if (iVar5 < 0) {
                                iVar5 = iVar5 + 1;
                            }
                            uVar17 = iVar5 >> 1;
                            piVar10 = devm_kmalloc(piVar23,-(uVar17 + 1 >> 0x1f) & 0xfffffff800000000 | uVar17 + 1 << 3
                                                   ,0xdc0);
                            if (piVar10 != NULL) {
                                if (uVar8 < 8) {
                                    uVar21 = 0;
                                }
                                else {
                                    uVar8 = uVar17;
                                    if (uVar17 < 2) {
                                        uVar8 = 1;
                                    }
                                    uVar21 = uVar8;
                                    uVar15 = 0;
                                    do {
                                        iVar5 = of_property_read_u32_index
                                                          (uVar20,"qcom,cpufreq-memfreq-tbl",uVar15 & 0xffffffff,
                                                           &uStack_120);
                                        if (iVar5 < 0) goto code_r0x080049cc;
                                        piVar10[uVar15] = uStack_120 / 1000;
                                        iVar5 = of_property_read_u32_index
                                                          (uVar20,"qcom,cpufreq-memfreq-tbl",uVar15 + 1 & 0xffffffff,
                                                           &uStack_120);
                                        if (iVar5 < 0) goto code_r0x080049cc;
                                        iVar13 = uVar15 + 2;
                                        piVar10[uVar15 + 1] = uStack_120;
                                        uVar15 = uVar15 + 2;
                                    } while (uVar21 * 2 - iVar13 != 0);
                                }
                                iVar14 = iVar22 + uVar24 * 200;
                                *(iVar22 + uVar24 * 200 + 0x28) = uVar17;
                                piVar10[uVar21 * 2] = 0;
                                *(iVar14 + 0x20) = piVar10;
                                iVar13 = -8;
                                if (*piVar10 != 0) {
                                    iVar13 = 0;
                                }
                                piVar18 = piVar10 + -1;
                                uVar1 = *(piVar10 + iVar13 + 4);
                                *(iVar14 + 0x4c) = uVar1;
                                *(iVar14 + 0x54) = uVar1;
                                do {
                                    piVar10 = piVar18 + 1;
                                    piVar18 = piVar18 + 2;
                                } while (1 < *piVar10 + 1U);
                                iVar13 = -8;
                                if (*piVar10 != 0) {
                                    iVar13 = 0;
                                }
                                iVar14 = iVar22 + uVar24 * 200;
                                uVar2 = *(piVar18 + iVar13);
                                *(iVar14 + 0x50) = uVar2;
                                *(iVar14 + 0x58) = uVar2;
                                *(iVar14 + 0x5c) = uVar1;
                                iVar9 = *(iVar9 + 0x80);
                                if (*(iVar14 + 0xc0) == '\0') {
                                    if (iVar9 == 0) {
                                        iVar9 = *piVar23;
                                    }
                                    pcVar19 = obj.memlat_mon_ktype;
                                }
                                else {
                                    if (iVar9 == 0) {
                                        iVar9 = *piVar23;
                                    }
                                    pcVar19 = obj.compute_mon_ktype;
                                }
                                uVar15 = kobject_init_and_add(iVar14 + 0x60,pcVar19,*(iVar12 + 8),iVar9);
                                uVar21 = uVar15 & 0xffffffff;
                                if (-1 < uVar15) {
                                    iVar5 = *(iVar12 + 0x5c);
                                    *(iVar12 + 0x5c) = iVar5 + 1;
                                    *(iVar22 + uVar24 * 200 + 0xc4) = iVar5;
                                    goto code_r0x080045a8;
                                }
                                _dev_err(piVar23,"failed to init memlat mon kobj: %d\n",uVar21);
                                kobject_put(iVar14 + 0x60);
                                goto code_r0x08004b50;
                            }
                        }
                    }
code_r0x080049cc:
                    *(iVar22 + uVar24 * 200 + 0x20) = 0;
                    _dev_err(piVar23,"error importing cpufreq-memfreq table!\n");
                    uVar21 = 0xffffffea;
                }
            }
            else {
                _dev_err(piVar23,"Mon missing cpulist\n");
                uVar21 = 0xffffffed;
                *(iVar12 + 0x58) = *(iVar12 + 0x58) + -1;
code_r0x080045a8:
                if ((((_segment.ehdr[0x26] <= *(_segment.ehdr + 0x134)) &&
                     ((iVar9 = _segment.ehdr[0x22], iVar9 == 0 || (*(iVar9 + 0x58) <= *(iVar9 + 0x5c))))) &&
                    ((iVar9 = _segment.ehdr[0x23], iVar9 == 0 || (*(iVar9 + 0x58) <= *(iVar9 + 0x5c))))) &&
                   (((iVar9 = _segment.ehdr[0x24], iVar9 == 0 || (*(iVar9 + 0x58) <= *(iVar9 + 0x5c))) &&
                    ((iVar9 = _segment.ehdr[0x25], iVar9 == 0 || (*(iVar9 + 0x58) <= *(iVar9 + 0x5c))))))) {
                    *(_segment.ehdr + 0x142) = 1;
                }
            }
code_r0x08004b50:
            mutex_unlock(iVar12 + 0x60);
code_r0x08004b58:
            if (-1 < uVar21) {
code_r0x08004b5c:
                uVar21 = 0;
                goto code_r0x08004bc0;
            }
        }
        else if (iVar5 == 1) {
            uStack_120 = 3;
            uStack_124 = 3;
            iVar12 = of_parse_phandle(*(iVar9 + 0x300),"qcom,target-dev",0);
            if (iVar12 == 0) {
                _dev_err(piVar23,"Unable to find target-dev for grp\n");
                uVar21 = 0xffffffea;
                goto code_r0x08004bac;
            }
            uVar8 = of_property_read_variable_u32_array(iVar12,"qcom,dcvs-hw-type",&uStack_120,1,0);
            uVar24 = uStack_120 & 0xffffffff;
            if ((uVar8 < 0) || (3 < uStack_120)) {
                uVar8 = uVar8 & uVar8 >> 0x1f;
                pcVar16 = "invalid dcvs hw_type=%d, ret=%d\n";
            }
            else {
                piVar11 = devm_kmalloc(piVar23,0xf0,0xdc0);
                if (piVar11 == NULL) goto code_r0x080049fc;
                *(piVar11 + 2) = uStack_120;
                *piVar11 = piVar23;
                uVar21 = qcom_dcvs_kobject_get();
                piVar11[1] = uVar21;
                if (0xfffffffffffff000 < uVar21) {
                    _dev_err(piVar23,"error getting kobj from qcom_dcvs: %d\n",uVar21 & 0xffffffff);
                    iVar5 = uVar21;
joined_r0x08004aec:
                    if (iVar5 != 0) goto code_r0x08004b58;
code_r0x08004964:
                    uVar20 = *(iVar9 + 0x300);
                    iVar12 = of_get_next_available_child(uVar20,0);
                    if (iVar12 != 0) {
                        iVar5 = 0;
                        do {
                            iVar12 = of_get_next_available_child(uVar20,iVar12);
                            iVar5 = iVar5 + -1;
                        } while (iVar12 != 0);
                        goto code_r0x08004994;
                    }
                    goto code_r0x08004b5c;
                }
                iVar12 = of_parse_phandle(*(iVar9 + 0x300),"qcom,sampling-path",0);
                if (iVar12 == 0) {
                    uVar8 = 3;
code_r0x0800463c:
                    uVar20 = *(iVar9 + 0x300);
                    *(piVar11 + 0x14) = uVar8;
                    iVar12 = of_parse_phandle(uVar20,"qcom,threadlat-path",0);
                    if (iVar12 == 0) {
                        *(piVar11 + 3) = 3;
                        if (2 < uStack_124) {
                            pcVar16 = "error: no dcvs voting paths\n";
                            goto code_r0x08004ba0;
                        }
                        uVar8 = 0;
                        uVar17 = *(piVar11 + 0x14);
joined_r0x080046b8:
                        if (uVar17 == 1) {
code_r0x080046bc:
                            *in_x5 = uVar8;
                            *(piVar11 + 6) = 1;
                            iVar12 = __sw_hweight64(__cfi_slowpath_diag);
                            uVar24 = iVar12 * 4 + 4U & 0x3fffffffc;
                            if (iVar12 < 9) {
                                uVar24 = 0x24;
                            }
                            iVar12 = devm_kmalloc(piVar23,uVar24,0xdc0);
                            piVar11[7] = iVar12;
                        }
                        uVar20 = *(iVar9 + 0x300);
                        iVar12 = of_get_next_available_child(uVar20,0);
                        if (iVar12 != 0) {
                            uVar8 = 0;
                            do {
                                uVar8 = uVar8 + 1;
                                iVar12 = of_get_next_available_child(uVar20,iVar12);
                            } while (iVar12 != 0);
                            if (uVar8 != 0) {
                                iVar12 = devm_kmalloc(piVar23,uVar8 * 200,0xdc0);
                                piVar11[10] = iVar12;
                                if (iVar12 == 0) goto code_r0x080049fc;
                                *(piVar11 + 0xb) = uVar8;
                                *(piVar11 + 0x5c) = 0;
                                __mutex_init(piVar11 + 0xc,"&memlat_grp->mons_lock",obj.memlat_lock);
                                iVar5 = of_property_read_variable_u32_array
                                                  (*(iVar9 + 0x300),"qcom,miss-ev",&uStack_120 + 4,1,0);
                                if (iVar5 < 0) {
                                    _dev_err(piVar23,"Cache miss event missing for grp: %d\n",iVar5);
                                    uVar21 = 0xffffffea;
                                    goto code_r0x08004bac;
                                }
                                uVar20 = *(iVar9 + 0x300);
                                *(piVar11 + 8) = uStack_120._4_4_;
                                iVar5 = of_property_read_variable_u32_array
                                                  (uVar20,"qcom,access-ev",&uStack_120 + 4,1,0);
                                if (-1 < iVar5) {
                                    *(piVar11 + 9) = uStack_120._4_4_;
                                }
                                iVar5 = of_property_read_variable_u32_array
                                                  (*(iVar9 + 0x300),"qcom,wb-ev",&uStack_120 + 4,1,0);
                                if (-1 < iVar5) {
                                    *(piVar11 + 0x44) = uStack_120._4_4_;
                                }
                                uVar8 = cpumask_next(0xffffffff,__cpu_possible_mask);
                                *in_x5 = extraout_w8_01;
                                if (uVar8 < extraout_w8_01) {
                                    do {
                                        iVar5 = piVar11[8];
                                        uStack_120 = CONCAT44(iVar5,uStack_120);
                                        if ((iVar5 != 0) &&
                                           (uVar24 = qcom_pmu_event_supported(iVar5,uVar8), uVar24 != 0)) {
code_r0x08004870:
                                            uVar21 = uVar24 & 0xffffffff;
                                            iVar5 = uVar24;
                                            if (iVar5 == -0x205) goto code_r0x08004bac;
                                            _dev_err(piVar23,"ev=%lu not found on cpu%d: %d\n",uStack_120._4_4_,uVar8
                                                     ,uVar21);
                                            goto joined_r0x08004aec;
                                        }
                                        iVar5 = *(piVar11 + 0x44);
                                        uStack_120 = CONCAT44(iVar5,uStack_120);
                                        if ((iVar5 != 0) &&
                                           (uVar24 = qcom_pmu_event_supported(iVar5,uVar8), uVar24 != 0))
                                        goto code_r0x08004870;
                                        iVar5 = piVar11[9];
                                        uStack_120 = CONCAT44(iVar5,uStack_120);
                                        if ((iVar5 != 0) &&
                                           (uVar24 = qcom_pmu_event_supported(iVar5,uVar8), uVar24 != 0))
                                        goto code_r0x08004870;
                                        uVar8 = cpumask_next(uVar8,__cpu_possible_mask);
                                        *in_x5 = extraout_w8_02;
                                    } while (uVar8 < extraout_w8_02);
                                }
                                kobject_init_and_add(piVar11 + 0x12,obj.memlat_grp_ktype,piVar11[1],"memlat");
                                mutex_lock(obj.memlat_lock);
                                piVar3 = _segment.ehdr;
                                *(_segment.ehdr + 0x134) = *(_segment.ehdr + 0x134) + 1;
                                if (3 < uStack_120) goto code_r0x08004c18;
                                piVar3[(uStack_120 & 0xffffffff) + 0x22] = piVar11;
                                if (((piVar3[0x28] == '\0') && (piVar3[0x26] <= *(piVar3 + 0x134))) &&
                                   (((((piVar3[0x22] != 0 && (*(piVar3[0x22] + 0x30) != '\0')) ||
                                      ((piVar3[0x23] != 0 && (*(piVar3[0x23] + 0x30) != '\0')))) ||
                                     ((piVar3[0x24] != 0 && (*(piVar3[0x24] + 0x30) != '\0')))) ||
                                    ((piVar3[0x25] != 0 && (*(piVar3[0x25] + 0x30) != '\0')))))) {
                                    piVar3[0x27] = 0;
                                    *(piVar3 + 0x28) = 1;
                                }
                                mutex_unlock(obj.memlat_lock);
                                *(iVar9 + 0xa8) = piVar11;
                                goto code_r0x08004964;
                            }
                        }
                        pcVar16 = "No mons provided!\n";
                        goto code_r0x08004ba0;
                    }
                    uVar8 = of_property_read_variable_u32_array(iVar12,"qcom,dcvs-path-type",&uStack_124,1,0);
                    uVar24 = uStack_124;
                    if ((-1 < uVar8) && (uStack_124 < 3)) {
                        *(piVar11 + 3) = uStack_124;
                        uVar17 = uStack_124;
                        if (*(piVar11 + 0x14) != 1) goto joined_r0x080046b8;
                        goto code_r0x080046bc;
                    }
                }
                else {
                    uVar8 = of_property_read_variable_u32_array(iVar12,"qcom,dcvs-path-type",&uStack_124,1,0);
                    uVar24 = uStack_124;
                    if ((-1 < uVar8) && (uStack_124 < 3)) {
                        if (uStack_124 == 1) {
                            pcVar16 = "memlat_fp";
                        }
                        else {
                            pcVar16 = *(iVar9 + 0x80);
                            if (pcVar16 == NULL) {
                                pcVar16 = *piVar23;
                            }
                        }
                        uVar24 = qcom_dcvs_register_voter(pcVar16,uStack_120);
                        uVar21 = uVar24 & 0xffffffff;
                        uVar8 = uStack_124;
                        if (uVar24 < 0) {
                            _dev_err(piVar23,"qcom dcvs registration error: %d\n",uVar21);
                            goto code_r0x08004bac;
                        }
                        goto code_r0x0800463c;
                    }
                }
                uVar8 = uVar8 & uVar8 >> 0x1f;
                pcVar16 = "invalid dcvs path: %d, ret=%d\n";
            }
            _dev_err(piVar23,pcVar16,uVar24,uVar8);
            uVar21 = 0xffffffea;
        }
        else {
            if (iVar5 != 0) goto code_r0x080049b4;
            if (_segment.ehdr != NULL) {
                _dev_err(piVar23,"only one memlat device allowed\n");
            }
            uStack_120 = uStack_120 & 0xffffffff;
            piVar11 = devm_kmalloc(piVar23,0x160,0xdc0);
            if (piVar11 == NULL) {
code_r0x080049fc:
                uVar21 = 0xfffffff4;
            }
            else {
                uVar20 = *(iVar9 + 0x300);
                *piVar11 = piVar23;
                *(piVar11 + 0x16) = 8;
                *(piVar11 + 0x2b) = 8;
                iVar12 = of_get_next_available_child(uVar20,0);
                if (iVar12 == 0) {
                    *(piVar11 + 0x26) = 0;
                    pcVar16 = "No memlat grps provided!\n";
                }
                else {
                    iVar5 = 0;
                    do {
                        iVar12 = of_get_next_available_child(uVar20,iVar12);
                        iVar5 = iVar5 + -1;
                    } while (iVar12 != 0);
                    *(piVar11 + 0x26) = -iVar5;
                    if (iVar5 != 0) {
                        iVar5 = of_property_read_variable_u32_array
                                          (*(iVar9 + 0x300),"qcom,inst-ev",&uStack_120 + 4,1,0);
                        if (iVar5 < 0) {
                            iVar5 = 8;
                            uStack_120 = CONCAT44(8,uStack_120);
                        }
                        else {
                            iVar5 = uStack_120._4_4_;
                        }
                        uVar20 = *(iVar9 + 0x300);
                        *(piVar11 + 0xd) = iVar5;
                        iVar6 = of_property_read_variable_u32_array(uVar20,"qcom,cyc-ev",&uStack_120 + 4,1,0);
                        if (iVar6 < 0) {
                            iVar6 = 0x11;
                            uStack_120 = CONCAT44(0x11,uStack_120);
                        }
                        else {
                            iVar6 = uStack_120._4_4_;
                        }
                        uVar20 = *(iVar9 + 0x300);
                        *(piVar11 + 0x6c) = iVar6;
                        iVar7 = of_property_read_variable_u32_array(uVar20,"qcom,fe-stall-ev",&uStack_120 + 4,1,0);
                        if (-1 < iVar7) {
                            *(piVar11 + 0xe) = uStack_120._4_4_;
                        }
                        iVar7 = of_property_read_variable_u32_array
                                          (*(iVar9 + 0x300),"qcom,be-stall-ev",&uStack_120 + 4,1,0);
                        if (-1 < iVar7) {
                            *(piVar11 + 0x74) = uStack_120._4_4_;
                        }
                        uVar8 = cpumask_next(0xffffffff,__cpu_possible_mask);
                        *in_x5 = extraout_w8;
                        if (uVar8 < extraout_w8) {
                            do {
                                uStack_120 = CONCAT44(iVar5,uStack_120);
                                if ((iVar5 != 0) && (uVar24 = qcom_pmu_event_supported(iVar5,uVar8), uVar24 != 0)) {
code_r0x080044c4:
                                    uVar21 = uVar24 & 0xffffffff;
                                    iVar5 = uVar24;
                                    if (iVar5 == -0x205) goto code_r0x08004bac;
                                    _dev_err(piVar23,"ev=%lu not found on cpu%d: %d\n",uStack_120._4_4_,uVar8,uVar21
                                            );
                                    goto joined_r0x080044ec;
                                }
                                uStack_120 = CONCAT44(iVar6,uStack_120);
                                if ((iVar6 != 0) && (uVar24 = qcom_pmu_event_supported(iVar6,uVar8), uVar24 != 0))
                                goto code_r0x080044c4;
                                iVar7 = piVar11[0xe];
                                uStack_120 = CONCAT44(iVar7,uStack_120);
                                if ((iVar7 != 0) && (uVar24 = qcom_pmu_event_supported(iVar7,uVar8), uVar24 != 0))
                                goto code_r0x080044c4;
                                iVar7 = *(piVar11 + 0x74);
                                uStack_120 = CONCAT44(iVar7,uStack_120);
                                if ((iVar7 != 0) && (uVar24 = qcom_pmu_event_supported(iVar7,uVar8), uVar24 != 0))
                                goto code_r0x080044c4;
                                uVar8 = cpumask_next(uVar8,__cpu_possible_mask);
                                *in_x5 = extraout_w8_00;
                            } while (uVar8 < extraout_w8_00);
                        }
                        uVar21 = qcom_dcvs_kobject_get(4);
                        if (uVar21 < 0xfffffffffffff001) {
                            uVar8 = kobject_init_and_add
                                              (piVar11 + 1,obj.memlat_settings_ktype,uVar21,"memlat_settings");
                            if (uVar8 < 0) {
                                uVar21 = uVar8;
                                _dev_err(piVar23,"failed to init memlat settings kobj: %d\n",uVar21);
                                kobject_put(piVar11 + 1);
                                goto code_r0x08004bac;
                            }
                        }
                        else {
                            _dev_err(piVar23,"error getting kobj from qcom_dcvs: %d\n",uVar21 & 0xffffffff);
                            iVar5 = uVar21;
joined_r0x080044ec:
                            piVar11 = _segment.ehdr;
                            if (iVar5 != 0) goto code_r0x08004b58;
                        }
                        _segment.ehdr = piVar11;
                        uVar20 = *(iVar9 + 0x300);
                        iVar12 = of_get_next_available_child(uVar20,0);
                        if (iVar12 == 0) goto code_r0x08004b5c;
                        iVar5 = 0;
                        do {
                            iVar12 = of_get_next_available_child(uVar20,iVar12);
                            iVar5 = iVar5 + -1;
                        } while (iVar12 != 0);
code_r0x08004994:
                        if (iVar5 != 0) {
                            of_platform_populate(*(iVar9 + 0x300),0,0,piVar23);
                        }
                        goto code_r0x08004b5c;
                    }
                    pcVar16 = "No memlat grps provided!\n";
                }
code_r0x08004ba0:
                _dev_err(piVar23,pcVar16);
                uVar21 = 0xffffffed;
            }
        }
code_r0x08004bac:
        _dev_err(piVar23,"Failure to probe memlat device: %d\n",uVar21 & 0xffffffff);
    }
code_r0x08004bc0:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_118) {
        return uVar21 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x08004c18:
    //WARNING: Does not return
    pcVar19 = SoftwareBreakpoint(0x5512,0x8004c1c);
    (*pcVar19)();
}


// ===== sym.init_module.cfi_jt @ 0x08003220 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qcom_memlat_probe.ced2387b2ffe06d71748357bedbe93a2.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.memlat_jiffies_update_cb.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x08003228 (size 8) =====

void sym.memlat_jiffies_update_cb.ced2387b2ffe06d71748357bedbe93a2.cfi_jt(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ktime_get();
    if ((*(_segment.ehdr + 0x142) != '\0') &&
       (*(_segment.ehdr + 0xb0) * 1000000 < (iVar1 - *(_segment.ehdr + 0x108)) + 2000000)) {
        hrtimer_start_range_ns(_segment.ehdr + 0xb8,100000,0,3);
        *(_segment.ehdr + 0x108) = iVar1;
    }
    return;
}


// ===== sym.qcom_memlat_probe.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x08003230 (size 8) =====

uint64_t sym.qcom_memlat_probe.ced2387b2ffe06d71748357bedbe93a2.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    uint32_t uVar2;
    uint uVar3;
    uint uVar4;
    int64_t *piVar5;
    code *pcVar6;
    bool bVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    uint32_t uVar11;
    int *piVar12;
    int64_t *piVar13;
    int64_t iVar14;
    int64_t iVar15;
    int64_t iVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    char *pcVar19;
    uint32_t *in_x5;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    uint32_t extraout_w8_01;
    uint32_t extraout_w8_02;
    ulong extraout_x8;
    ulong extraout_x8_00;
    int *piVar20;
    ulong *in_x18;
    ulong uVar21;
    uint64_t uVar22;
    int64_t iVar23;
    ulong unaff_x30;
    uint32_t uStack_74;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    piVar1 = param_1 + 0x10;
    iStack_68 = *(iVar14 + 0x5e0);
    piVar12 = of_device_get_match_data(piVar1);
    if (piVar12 == NULL) {
        iVar8 = 3;
code_r0x080049b4:
        _dev_err(piVar1,"Invalid memlat mon type specified: %u\n",iVar8);
        uVar22 = 0xffffffea;
    }
    else {
        iVar8 = *piVar12;
        if (iVar8 == 2) {
            iVar14 = *(*(param_1 + 0x70) + 0x98);
            if (iVar14 == 0) {
                pcVar19 = "Mon probe called without memlat_grp inited.\n";
                goto code_r0x08004ba0;
            }
            uVar21 = *(param_1 + 0x300);
            mutex_lock();
            iVar23 = *(iVar14 + 0x50);
            uVar17 = *(iVar14 + 0x5c);
            piVar13 = iVar23 + uVar17 * 200;
            *piVar13 = piVar1;
            piVar13[1] = iVar14;
            iVar8 = sym.get_mask_and_mpidr_from_pdev(param_1,piVar13 + 3,piVar13 + 0x14);
            if (iVar8 == 0) {
                __sw_hweight64(piVar13[3]);
                iVar15 = of_find_property(*(param_1 + 0x300),"qcom,sampling-enabled",0);
                if (iVar15 != 0) {
                    mutex_lock(obj.memlat_lock);
                    if (*(_segment.ehdr + 0x141) == '\0') {
                        iVar15 = *_segment.ehdr;
                        uVar11 = cpumask_next(0xffffffff,__cpu_possible_mask);
                        *in_x5 = extraout_x8;
                        if (uVar11 < extraout_x8) {
                            do {
                                iVar16 = devm_kmalloc(iVar15,0x230,0xdc0);
                                if (iVar16 == 0) goto code_r0x08003fac;
                                if (0x1f < uVar11) goto code_r0x08004c18;
                                *(obj.sampling_stats + *(__per_cpu_offset + uVar11 * 8)) = iVar16;
                                *(iVar16 + 0x200) = 0;
                                uVar11 = cpumask_next(uVar11,__cpu_possible_mask);
                                *in_x5 = extraout_x8_00;
                            } while (uVar11 < extraout_x8_00);
                        }
                        iVar16 = alloc_workqueue(0x8000f1d,0x4000e,1,"memlat_wq");
                        piVar13 = _segment.ehdr;
                        _segment.ehdr[0x15] = iVar16;
                        if (iVar16 == 0) {
                            _dev_err(iVar15,"Couldn\'t create memlat workqueue.\n");
                        }
                        else {
                            piVar13[0xf] = 0xfffffffe0;
                            piVar13[0x10] = piVar13 + 0x10;
                            piVar13[0x11] = piVar13 + 0x10;
                            piVar13[0x12] = sym.memlat_update_work.ced2387b2ffe06d71748357bedbe93a2.cfi_jt;
                            hrtimer_init(piVar13 + 0x17,1,1);
                            _segment.ehdr[0x1c] = sym.memlat_hrtimer_handler.ced2387b2ffe06d71748357bedbe93a2.cfi_jt;
                            tracepoint_probe_register
                                      (__tracepoint_android_vh_scheduler_tick,
                                       sym.memlat_sched_tick_cb.ced2387b2ffe06d71748357bedbe93a2.cfi_jt,0);
                            tracepoint_probe_register
                                      (__tracepoint_android_vh_jiffies_update,
                                       sym.memlat_jiffies_update_cb.ced2387b2ffe06d71748357bedbe93a2.cfi_jt,0);
                            qcom_pmu_idle_register(reloc.memlat_pmu_idle_cb.ced2387b2ffe06d71748357bedbe93a2.cfi_jt);
                        }
code_r0x08003fac:
                        *(_segment.ehdr + 0x141) = 1;
                    }
                    mutex_unlock(obj.memlat_lock);
                    iVar15 = iVar23 + uVar17 * 200;
                    *(iVar15 + 0x10) = *(iVar15 + 0x10) | 1;
                }
                iVar15 = of_find_property(*(param_1 + 0x300),"qcom,threadlat-enabled",0);
                if (iVar15 != 0) {
                    iVar15 = iVar23 + uVar17 * 200;
                    *(iVar15 + 0x10) = *(iVar15 + 0x10) | 2;
                }
                iVar15 = of_find_property(*(param_1 + 0x300),"qcom,cpucp-enabled",0);
                if (iVar15 != 0) {
                    iVar15 = iVar23 + uVar17 * 200;
                    *(iVar15 + 0x10) = *(iVar15 + 0x10) | 4;
                    *(iVar14 + 0x1c) = 1;
                }
                if (*(iVar23 + uVar17 * 200 + 0x10) == 0) {
                    _dev_err(piVar1,"No types configured for mon!\n");
                    uVar22 = 0xffffffed;
                }
                else {
                    iVar15 = of_find_property(*(param_1 + 0x300),"qcom,compute-mon",0);
                    if (iVar15 != 0) {
                        *(iVar23 + uVar17 * 200 + 0xc0) = 1;
                    }
                    iVar15 = iVar23 + uVar17 * 200;
                    *(iVar15 + 0x2c) = 400;
                    *(iVar15 + 0x34) = 0;
                    *(iVar15 + 0x44) = 0x61a800000064;
                    *(iVar15 + 0x3c) = 0x138800001388;
                    iVar15 = of_parse_phandle(uVar21,"qcom,cpufreq-memfreq-tbl",0);
                    if (iVar15 != 0) {
                        uVar21 = of_parse_phandle(uVar21,"qcom,cpufreq-memfreq-tbl",0);
                    }
                    iVar15 = of_get_next_child(uVar21,0);
                    if (iVar15 != 0) {
                        iVar8 = 0;
                        do {
                            iVar15 = of_get_next_child(uVar21,iVar15);
                            iVar8 = iVar8 + -1;
                        } while (iVar15 != 0);
                        if (iVar8 != 0) {
                            uVar21 = qcom_dcvs_get_ddr_child_node(uVar21);
                        }
                    }
                    uStack_70 = 0;
                    iVar15 = of_find_property(uVar21,"qcom,cpufreq-memfreq-tbl",&uStack_70 + 4);
                    if (iVar15 != 0) {
                        uVar11 = uStack_70._4_4_;
                        iVar8 = uStack_70._4_4_ >> 2;
                        bVar7 = 3 < uStack_70._4_4_;
                        uStack_70 = CONCAT44(iVar8,uStack_70);
                        if ((bVar7) && ((uVar11 >> 2 & 1) == 0)) {
                            if (iVar8 < 0) {
                                iVar8 = iVar8 + 1;
                            }
                            uVar2 = iVar8 >> 1;
                            piVar12 = devm_kmalloc(piVar1,-(uVar2 + 1 >> 0x1f) & 0xfffffff800000000 | uVar2 + 1 << 3,
                                                   0xdc0);
                            if (piVar12 != NULL) {
                                if (uVar11 < 8) {
                                    uVar22 = 0;
                                }
                                else {
                                    uVar11 = uVar2;
                                    if (uVar2 < 2) {
                                        uVar11 = 1;
                                    }
                                    uVar22 = uVar11;
                                    uVar18 = 0;
                                    do {
                                        iVar8 = of_property_read_u32_index
                                                          (uVar21,"qcom,cpufreq-memfreq-tbl",uVar18 & 0xffffffff,
                                                           &uStack_70);
                                        if (iVar8 < 0) goto code_r0x080049cc;
                                        piVar12[uVar18] = uStack_70 / 1000;
                                        iVar8 = of_property_read_u32_index
                                                          (uVar21,"qcom,cpufreq-memfreq-tbl",uVar18 + 1 & 0xffffffff,
                                                           &uStack_70);
                                        if (iVar8 < 0) goto code_r0x080049cc;
                                        iVar15 = uVar18 + 2;
                                        piVar12[uVar18 + 1] = uStack_70;
                                        uVar18 = uVar18 + 2;
                                    } while (uVar22 * 2 - iVar15 != 0);
                                }
                                iVar16 = iVar23 + uVar17 * 200;
                                *(iVar23 + uVar17 * 200 + 0x28) = uVar2;
                                piVar12[uVar22 * 2] = 0;
                                *(iVar16 + 0x20) = piVar12;
                                iVar15 = -8;
                                if (*piVar12 != 0) {
                                    iVar15 = 0;
                                }
                                piVar20 = piVar12 + -1;
                                uVar3 = *(piVar12 + iVar15 + 4);
                                *(iVar16 + 0x4c) = uVar3;
                                *(iVar16 + 0x54) = uVar3;
                                do {
                                    piVar12 = piVar20 + 1;
                                    piVar20 = piVar20 + 2;
                                } while (1 < *piVar12 + 1U);
                                iVar15 = -8;
                                if (*piVar12 != 0) {
                                    iVar15 = 0;
                                }
                                iVar16 = iVar23 + uVar17 * 200;
                                uVar4 = *(piVar20 + iVar15);
                                *(iVar16 + 0x50) = uVar4;
                                *(iVar16 + 0x58) = uVar4;
                                *(iVar16 + 0x5c) = uVar3;
                                iVar15 = *(param_1 + 0x80);
                                if (*(iVar16 + 0xc0) == '\0') {
                                    if (iVar15 == 0) {
                                        iVar15 = *piVar1;
                                    }
                                    pcVar6 = obj.memlat_mon_ktype;
                                }
                                else {
                                    if (iVar15 == 0) {
                                        iVar15 = *piVar1;
                                    }
                                    pcVar6 = obj.compute_mon_ktype;
                                }
                                uVar18 = kobject_init_and_add(iVar16 + 0x60,pcVar6,*(iVar14 + 8),iVar15);
                                uVar22 = uVar18 & 0xffffffff;
                                if (-1 < uVar18) {
                                    iVar8 = *(iVar14 + 0x5c);
                                    *(iVar14 + 0x5c) = iVar8 + 1;
                                    *(iVar23 + uVar17 * 200 + 0xc4) = iVar8;
                                    goto code_r0x080045a8;
                                }
                                _dev_err(piVar1,"failed to init memlat mon kobj: %d\n",uVar22);
                                kobject_put(iVar16 + 0x60);
                                goto code_r0x08004b50;
                            }
                        }
                    }
code_r0x080049cc:
                    *(iVar23 + uVar17 * 200 + 0x20) = 0;
                    _dev_err(piVar1,"error importing cpufreq-memfreq table!\n");
                    uVar22 = 0xffffffea;
                }
            }
            else {
                _dev_err(piVar1,"Mon missing cpulist\n");
                uVar22 = 0xffffffed;
                *(iVar14 + 0x58) = *(iVar14 + 0x58) + -1;
code_r0x080045a8:
                if ((((_segment.ehdr[0x26] <= *(_segment.ehdr + 0x134)) &&
                     ((iVar23 = _segment.ehdr[0x22], iVar23 == 0 || (*(iVar23 + 0x58) <= *(iVar23 + 0x5c))))) &&
                    ((iVar23 = _segment.ehdr[0x23], iVar23 == 0 || (*(iVar23 + 0x58) <= *(iVar23 + 0x5c))))) &&
                   (((iVar23 = _segment.ehdr[0x24], iVar23 == 0 || (*(iVar23 + 0x58) <= *(iVar23 + 0x5c))) &&
                    ((iVar23 = _segment.ehdr[0x25], iVar23 == 0 || (*(iVar23 + 0x58) <= *(iVar23 + 0x5c))))))) {
                    *(_segment.ehdr + 0x142) = 1;
                }
            }
code_r0x08004b50:
            mutex_unlock(iVar14 + 0x60);
code_r0x08004b58:
            if (-1 < uVar22) {
code_r0x08004b5c:
                uVar22 = 0;
                goto code_r0x08004bc0;
            }
        }
        else if (iVar8 == 1) {
            uStack_70 = 3;
            uStack_74 = 3;
            iVar14 = of_parse_phandle(*(param_1 + 0x300),"qcom,target-dev",0);
            if (iVar14 == 0) {
                _dev_err(piVar1,"Unable to find target-dev for grp\n");
                uVar22 = 0xffffffea;
                goto code_r0x08004bac;
            }
            uVar11 = of_property_read_variable_u32_array(iVar14,"qcom,dcvs-hw-type",&uStack_70,1,0);
            uVar17 = uStack_70 & 0xffffffff;
            if ((uVar11 < 0) || (3 < uStack_70)) {
                uVar11 = uVar11 & uVar11 >> 0x1f;
                pcVar19 = "invalid dcvs hw_type=%d, ret=%d\n";
            }
            else {
                piVar13 = devm_kmalloc(piVar1,0xf0,0xdc0);
                if (piVar13 == NULL) goto code_r0x080049fc;
                *(piVar13 + 2) = uStack_70;
                *piVar13 = piVar1;
                uVar22 = qcom_dcvs_kobject_get();
                piVar13[1] = uVar22;
                if (0xfffffffffffff000 < uVar22) {
                    _dev_err(piVar1,"error getting kobj from qcom_dcvs: %d\n",uVar22 & 0xffffffff);
                    iVar8 = uVar22;
joined_r0x08004aec:
                    if (iVar8 != 0) goto code_r0x08004b58;
code_r0x08004964:
                    uVar21 = *(param_1 + 0x300);
                    iVar14 = of_get_next_available_child(uVar21,0);
                    if (iVar14 != 0) {
                        iVar8 = 0;
                        do {
                            iVar14 = of_get_next_available_child(uVar21,iVar14);
                            iVar8 = iVar8 + -1;
                        } while (iVar14 != 0);
                        goto code_r0x08004994;
                    }
                    goto code_r0x08004b5c;
                }
                iVar14 = of_parse_phandle(*(param_1 + 0x300),"qcom,sampling-path",0);
                if (iVar14 == 0) {
                    uVar11 = 3;
code_r0x0800463c:
                    uVar21 = *(param_1 + 0x300);
                    *(piVar13 + 0x14) = uVar11;
                    iVar14 = of_parse_phandle(uVar21,"qcom,threadlat-path",0);
                    if (iVar14 == 0) {
                        *(piVar13 + 3) = 3;
                        if (2 < uStack_74) {
                            pcVar19 = "error: no dcvs voting paths\n";
                            goto code_r0x08004ba0;
                        }
                        uVar11 = 0;
                        uVar2 = *(piVar13 + 0x14);
joined_r0x080046b8:
                        if (uVar2 == 1) {
code_r0x080046bc:
                            *in_x5 = uVar11;
                            *(piVar13 + 6) = 1;
                            iVar14 = __sw_hweight64(__cfi_slowpath_diag);
                            uVar17 = iVar14 * 4 + 4U & 0x3fffffffc;
                            if (iVar14 < 9) {
                                uVar17 = 0x24;
                            }
                            iVar14 = devm_kmalloc(piVar1,uVar17,0xdc0);
                            piVar13[7] = iVar14;
                        }
                        uVar21 = *(param_1 + 0x300);
                        iVar14 = of_get_next_available_child(uVar21,0);
                        if (iVar14 != 0) {
                            uVar11 = 0;
                            do {
                                uVar11 = uVar11 + 1;
                                iVar14 = of_get_next_available_child(uVar21,iVar14);
                            } while (iVar14 != 0);
                            if (uVar11 != 0) {
                                iVar14 = devm_kmalloc(piVar1,uVar11 * 200,0xdc0);
                                piVar13[10] = iVar14;
                                if (iVar14 == 0) goto code_r0x080049fc;
                                *(piVar13 + 0xb) = uVar11;
                                *(piVar13 + 0x5c) = 0;
                                __mutex_init(piVar13 + 0xc,"&memlat_grp->mons_lock",obj.memlat_lock);
                                iVar8 = of_property_read_variable_u32_array
                                                  (*(param_1 + 0x300),"qcom,miss-ev",&uStack_70 + 4,1,0);
                                if (iVar8 < 0) {
                                    _dev_err(piVar1,"Cache miss event missing for grp: %d\n",iVar8);
                                    uVar22 = 0xffffffea;
                                    goto code_r0x08004bac;
                                }
                                uVar21 = *(param_1 + 0x300);
                                *(piVar13 + 8) = uStack_70._4_4_;
                                iVar8 = of_property_read_variable_u32_array
                                                  (uVar21,"qcom,access-ev",&uStack_70 + 4,1,0);
                                if (-1 < iVar8) {
                                    *(piVar13 + 9) = uStack_70._4_4_;
                                }
                                iVar8 = of_property_read_variable_u32_array
                                                  (*(param_1 + 0x300),"qcom,wb-ev",&uStack_70 + 4,1,0);
                                if (-1 < iVar8) {
                                    *(piVar13 + 0x44) = uStack_70._4_4_;
                                }
                                uVar11 = cpumask_next(0xffffffff,__cpu_possible_mask);
                                *in_x5 = extraout_w8_01;
                                if (uVar11 < extraout_w8_01) {
                                    do {
                                        iVar8 = piVar13[8];
                                        uStack_70 = CONCAT44(iVar8,uStack_70);
                                        if ((iVar8 != 0) &&
                                           (uVar17 = qcom_pmu_event_supported(iVar8,uVar11), uVar17 != 0)) {
code_r0x08004870:
                                            uVar22 = uVar17 & 0xffffffff;
                                            iVar8 = uVar17;
                                            if (iVar8 == -0x205) goto code_r0x08004bac;
                                            _dev_err(piVar1,"ev=%lu not found on cpu%d: %d\n",uStack_70._4_4_,uVar11
                                                     ,uVar22);
                                            goto joined_r0x08004aec;
                                        }
                                        iVar8 = *(piVar13 + 0x44);
                                        uStack_70 = CONCAT44(iVar8,uStack_70);
                                        if ((iVar8 != 0) &&
                                           (uVar17 = qcom_pmu_event_supported(iVar8,uVar11), uVar17 != 0))
                                        goto code_r0x08004870;
                                        iVar8 = piVar13[9];
                                        uStack_70 = CONCAT44(iVar8,uStack_70);
                                        if ((iVar8 != 0) &&
                                           (uVar17 = qcom_pmu_event_supported(iVar8,uVar11), uVar17 != 0))
                                        goto code_r0x08004870;
                                        uVar11 = cpumask_next(uVar11,__cpu_possible_mask);
                                        *in_x5 = extraout_w8_02;
                                    } while (uVar11 < extraout_w8_02);
                                }
                                kobject_init_and_add(piVar13 + 0x12,obj.memlat_grp_ktype,piVar13[1],"memlat");
                                mutex_lock(obj.memlat_lock);
                                piVar5 = _segment.ehdr;
                                *(_segment.ehdr + 0x134) = *(_segment.ehdr + 0x134) + 1;
                                if (3 < uStack_70) goto code_r0x08004c18;
                                piVar5[(uStack_70 & 0xffffffff) + 0x22] = piVar13;
                                if (((piVar5[0x28] == '\0') && (piVar5[0x26] <= *(piVar5 + 0x134))) &&
                                   (((((piVar5[0x22] != 0 && (*(piVar5[0x22] + 0x30) != '\0')) ||
                                      ((piVar5[0x23] != 0 && (*(piVar5[0x23] + 0x30) != '\0')))) ||
                                     ((piVar5[0x24] != 0 && (*(piVar5[0x24] + 0x30) != '\0')))) ||
                                    ((piVar5[0x25] != 0 && (*(piVar5[0x25] + 0x30) != '\0')))))) {
                                    piVar5[0x27] = 0;
                                    *(piVar5 + 0x28) = 1;
                                }
                                mutex_unlock(obj.memlat_lock);
                                *(param_1 + 0xa8) = piVar13;
                                goto code_r0x08004964;
                            }
                        }
                        pcVar19 = "No mons provided!\n";
                        goto code_r0x08004ba0;
                    }
                    uVar11 = of_property_read_variable_u32_array(iVar14,"qcom,dcvs-path-type",&uStack_74,1,0);
                    uVar17 = uStack_74;
                    if ((-1 < uVar11) && (uStack_74 < 3)) {
                        *(piVar13 + 3) = uStack_74;
                        uVar2 = uStack_74;
                        if (*(piVar13 + 0x14) != 1) goto joined_r0x080046b8;
                        goto code_r0x080046bc;
                    }
                }
                else {
                    uVar11 = of_property_read_variable_u32_array(iVar14,"qcom,dcvs-path-type",&uStack_74,1,0);
                    uVar17 = uStack_74;
                    if ((-1 < uVar11) && (uStack_74 < 3)) {
                        if (uStack_74 == 1) {
                            pcVar19 = "memlat_fp";
                        }
                        else {
                            pcVar19 = *(param_1 + 0x80);
                            if (pcVar19 == NULL) {
                                pcVar19 = *piVar1;
                            }
                        }
                        uVar17 = qcom_dcvs_register_voter(pcVar19,uStack_70);
                        uVar22 = uVar17 & 0xffffffff;
                        uVar11 = uStack_74;
                        if (uVar17 < 0) {
                            _dev_err(piVar1,"qcom dcvs registration error: %d\n",uVar22);
                            goto code_r0x08004bac;
                        }
                        goto code_r0x0800463c;
                    }
                }
                uVar11 = uVar11 & uVar11 >> 0x1f;
                pcVar19 = "invalid dcvs path: %d, ret=%d\n";
            }
            _dev_err(piVar1,pcVar19,uVar17,uVar11);
            uVar22 = 0xffffffea;
        }
        else {
            if (iVar8 != 0) goto code_r0x080049b4;
            if (_segment.ehdr != NULL) {
                _dev_err(piVar1,"only one memlat device allowed\n");
            }
            uStack_70 = uStack_70 & 0xffffffff;
            piVar13 = devm_kmalloc(piVar1,0x160,0xdc0);
            if (piVar13 == NULL) {
code_r0x080049fc:
                uVar22 = 0xfffffff4;
            }
            else {
                uVar21 = *(param_1 + 0x300);
                *piVar13 = piVar1;
                *(piVar13 + 0x16) = 8;
                *(piVar13 + 0x2b) = 8;
                iVar14 = of_get_next_available_child(uVar21,0);
                if (iVar14 == 0) {
                    *(piVar13 + 0x26) = 0;
                    pcVar19 = "No memlat grps provided!\n";
                }
                else {
                    iVar8 = 0;
                    do {
                        iVar14 = of_get_next_available_child(uVar21,iVar14);
                        iVar8 = iVar8 + -1;
                    } while (iVar14 != 0);
                    *(piVar13 + 0x26) = -iVar8;
                    if (iVar8 != 0) {
                        iVar8 = of_property_read_variable_u32_array
                                          (*(param_1 + 0x300),"qcom,inst-ev",&uStack_70 + 4,1,0);
                        if (iVar8 < 0) {
                            iVar8 = 8;
                            uStack_70 = CONCAT44(8,uStack_70);
                        }
                        else {
                            iVar8 = uStack_70._4_4_;
                        }
                        uVar21 = *(param_1 + 0x300);
                        *(piVar13 + 0xd) = iVar8;
                        iVar9 = of_property_read_variable_u32_array(uVar21,"qcom,cyc-ev",&uStack_70 + 4,1,0);
                        if (iVar9 < 0) {
                            iVar9 = 0x11;
                            uStack_70 = CONCAT44(0x11,uStack_70);
                        }
                        else {
                            iVar9 = uStack_70._4_4_;
                        }
                        uVar21 = *(param_1 + 0x300);
                        *(piVar13 + 0x6c) = iVar9;
                        iVar10 = of_property_read_variable_u32_array(uVar21,"qcom,fe-stall-ev",&uStack_70 + 4,1,0);
                        if (-1 < iVar10) {
                            *(piVar13 + 0xe) = uStack_70._4_4_;
                        }
                        iVar10 = of_property_read_variable_u32_array
                                           (*(param_1 + 0x300),"qcom,be-stall-ev",&uStack_70 + 4,1,0);
                        if (-1 < iVar10) {
                            *(piVar13 + 0x74) = uStack_70._4_4_;
                        }
                        uVar11 = cpumask_next(0xffffffff,__cpu_possible_mask);
                        *in_x5 = extraout_w8;
                        if (uVar11 < extraout_w8) {
                            do {
                                uStack_70 = CONCAT44(iVar8,uStack_70);
                                if ((iVar8 != 0) && (uVar17 = qcom_pmu_event_supported(iVar8,uVar11), uVar17 != 0)) {
code_r0x080044c4:
                                    uVar22 = uVar17 & 0xffffffff;
                                    iVar8 = uVar17;
                                    if (iVar8 == -0x205) goto code_r0x08004bac;
                                    _dev_err(piVar1,"ev=%lu not found on cpu%d: %d\n",uStack_70._4_4_,uVar11,uVar22)
                                    ;
                                    goto joined_r0x080044ec;
                                }
                                uStack_70 = CONCAT44(iVar9,uStack_70);
                                if ((iVar9 != 0) && (uVar17 = qcom_pmu_event_supported(iVar9,uVar11), uVar17 != 0))
                                goto code_r0x080044c4;
                                iVar10 = piVar13[0xe];
                                uStack_70 = CONCAT44(iVar10,uStack_70);
                                if ((iVar10 != 0) && (uVar17 = qcom_pmu_event_supported(iVar10,uVar11), uVar17 != 0))
                                goto code_r0x080044c4;
                                iVar10 = *(piVar13 + 0x74);
                                uStack_70 = CONCAT44(iVar10,uStack_70);
                                if ((iVar10 != 0) && (uVar17 = qcom_pmu_event_supported(iVar10,uVar11), uVar17 != 0))
                                goto code_r0x080044c4;
                                uVar11 = cpumask_next(uVar11,__cpu_possible_mask);
                                *in_x5 = extraout_w8_00;
                            } while (uVar11 < extraout_w8_00);
                        }
                        uVar22 = qcom_dcvs_kobject_get(4);
                        if (uVar22 < 0xfffffffffffff001) {
                            uVar11 = kobject_init_and_add
                                               (piVar13 + 1,obj.memlat_settings_ktype,uVar22,"memlat_settings");
                            if (uVar11 < 0) {
                                uVar22 = uVar11;
                                _dev_err(piVar1,"failed to init memlat settings kobj: %d\n",uVar22);
                                kobject_put(piVar13 + 1);
                                goto code_r0x08004bac;
                            }
                        }
                        else {
                            _dev_err(piVar1,"error getting kobj from qcom_dcvs: %d\n",uVar22 & 0xffffffff);
                            iVar8 = uVar22;
joined_r0x080044ec:
                            piVar13 = _segment.ehdr;
                            if (iVar8 != 0) goto code_r0x08004b58;
                        }
                        _segment.ehdr = piVar13;
                        uVar21 = *(param_1 + 0x300);
                        iVar14 = of_get_next_available_child(uVar21,0);
                        if (iVar14 == 0) goto code_r0x08004b5c;
                        iVar8 = 0;
                        do {
                            iVar14 = of_get_next_available_child(uVar21,iVar14);
                            iVar8 = iVar8 + -1;
                        } while (iVar14 != 0);
code_r0x08004994:
                        if (iVar8 != 0) {
                            of_platform_populate(*(param_1 + 0x300),0,0,piVar1);
                        }
                        goto code_r0x08004b5c;
                    }
                    pcVar19 = "No memlat grps provided!\n";
                }
code_r0x08004ba0:
                _dev_err(piVar1,pcVar19);
                uVar22 = 0xffffffed;
            }
        }
code_r0x08004bac:
        _dev_err(piVar1,"Failure to probe memlat device: %d\n",uVar22 & 0xffffffff);
    }
code_r0x08004bc0:
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_68) {
        return uVar22 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x08004c18:
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x5512,0x8004c1c);
    (*pcVar6)();
}


// ===== sym.memlat_update_work.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x08003238 (size 8) =====

uint64_t sym.memlat_update_work.ced2387b2ffe06d71748357bedbe93a2.cfi_jt(ulong param_1,ulong param_2)

{
    uint32_t uVar1;
    uchar auVar2 [16];
    ulong in_tmp_ldXn;
    uint32_t uVar3;
    int64_t iVar4;
    ulong uVar5;
    uint64_t uVar6;
    uint *in_x5;
    uint32_t uVar7;
    uint32_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    ulong *puVar10;
    int64_t iVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    uint64_t uStack_88;
    uint uStack_80;
    uint32_t auStack_78 [4];
    int64_t iStack_68;
    
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = param_1;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iVar9 = 0;
    iStack_68 = *(iVar4 + 0x5e0);
    uVar5 = sp_el0;
    uStack_80 = 0;
    uStack_88 = 0;
    auStack_78[0] = 0;
    auStack_78[1] = 0;
    auStack_78[2] = 0;
    auStack_78[3] = 0;
    do {
        uVar5 = auVar12._8_8_;
        puVar10 = *(_segment.ehdr + iVar9 * 8 + 0x110);
        if (puVar10 != NULL) {
            uVar3 = *(puVar10 + 0x5c);
            if (uVar3 != 0) {
                uVar7 = 0;
                do {
                    iVar11 = puVar10[10];
                    iVar4 = iVar11 + uVar7 * 200;
                    auVar2._8_8_ = uVar5;
                    auVar2._0_8_ = iVar4;
                    auVar12._8_8_ = uVar5;
                    auVar12._0_8_ = iVar4;
                    if ((iVar4 != 0) && (auVar12 = auVar2, (*(iVar11 + uVar7 * 200 + 0x10) & 1) != 0)) {
                        auVar12 = sym.calculate_mon_sampling_freq(iVar4);
                        uVar1 = *(iVar11 + uVar7 * 200 + 0x5c);
                        if (uVar1 <= auStack_78[iVar9]) {
                            uVar1 = auStack_78[iVar9];
                        }
                        uVar3 = *(puVar10 + 0x5c);
                        auStack_78[iVar9] = uVar1;
                    }
                    uVar5 = auVar12._8_8_;
                    uVar7 = uVar7 + 1;
                } while (uVar7 < uVar3);
            }
            uVar5 = auVar12._0_8_;
            uVar3 = *(puVar10 + 5);
            uVar7 = *(puVar10 + 0x2c);
            uVar1 = *(puVar10 + 0x24);
            if (uVar3 == 0 && uVar7 == 0) {
                if (uVar1 == 0) goto code_r0x08005940;
                uVar8 = auStack_78[iVar9];
code_r0x080059e4:
                uVar7 = uVar3;
                if (uVar8 < uVar3) goto code_r0x080059f0;
            }
            else {
                uVar8 = auStack_78[iVar9];
                if (uVar7 <= uVar8) goto code_r0x080059e4;
code_r0x080059f0:
                uVar3 = uVar7;
                auStack_78[iVar9] = uVar3;
            }
            *(puVar10 + 0x24) = uVar3;
            if (uVar1 != uVar3) {
                iVar4 = (*puVar10)[0xe];
                auVar12._8_8_ = iVar4;
                auVar12._0_8_ = uVar5;
                if (iVar4 == 0) {
                    auVar12._8_8_ = **puVar10;
                }
            }
        }
code_r0x08005940:
        iVar9 = iVar9 + 1;
        if (iVar9 == 4) {
            *in_x5 = auVar12._0_4_;
            uVar3 = __sw_hweight64(__cfi_slowpath_diag,auVar12._0_8_,auVar12._8_8_);
            if (uVar3 < 9) {
                uVar3 = 8;
            }
            uVar6 = sym.update_memlat_fp_vote(uVar3,auStack_78);
            iVar9 = 0;
            do {
                puVar10 = *(_segment.ehdr + iVar9 * 8 + 0x110);
                if ((((puVar10 != NULL) && (uVar3 = auStack_78[iVar9], *(puVar10 + 4) != uVar3)) &&
                    (*(puVar10 + 0x14) != 3)) && (*(puVar10 + 4) = uVar3, *(puVar10 + 6) == '\0')) {
                    uStack_88 = uVar3;
                    uStack_80 = iVar9;
                    iVar4 = (*puVar10)[0xe];
                    if (iVar4 == 0) {
                        iVar4 = **puVar10;
                    }
                    uVar6 = qcom_dcvs_update_votes(iVar4,&uStack_88,1);
                    if (uVar6 < 0) {
                        uVar6 = _dev_err(*puVar10,"qcom dcvs err: %d\n",uVar6 & 0xffffffff);
                    }
                }
                iVar9 = iVar9 + 1;
            } while (iVar9 != 4);
            iVar9 = sp_el0;
            if (*(iVar9 + 0x5e0) != iStack_68) {
                __stack_chk_fail();
                uVar5 = tpidr_el2;
                *extraout_x18 = 0x8005b78;
                sym.calculate_sampling_stats(in_tmp_ldXn);
                queue_work_on(0x20,*(_segment.ehdr + 0xa8),_segment.ehdr + 0x78);
                return 0;
            }
            return uVar6;
        }
    } while( true );
}


// ===== sym.memlat_pmu_idle_cb.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x08003240 (size 8) =====

void sym.memlat_pmu_idle_cb.ced2387b2ffe06d71748357bedbe93a2.cfi_jt(ulong *param_1,uint32_t param_2)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    code *pcVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    if (param_2 < 0x20) {
        *in_x18 = unaff_x30;
        if (*(_segment.ehdr + 0x142) != '\0') {
            arg1 = *(obj.sampling_stats + *(__per_cpu_offset + param_2 * 8));
            uVar5 = _raw_spin_lock_irqsave(arg1 + 0x200);
            *(arg1 + 0x180) = *param_1;
            uVar2 = param_1[4];
            uVar1 = param_1[1];
            uVar3 = param_1[2];
            *(arg1 + 0x198) = param_1[3];
            *(arg1 + 0x1a0) = uVar2;
            *(arg1 + 0x188) = uVar1;
            *(arg1 + 400) = uVar3;
            uVar2 = param_1[8];
            uVar1 = param_1[5];
            uVar3 = param_1[6];
            *(arg1 + 0x1b8) = param_1[7];
            *(arg1 + 0x1c0) = uVar2;
            *(arg1 + 0x1a8) = uVar1;
            *(arg1 + 0x1b0) = uVar3;
            uVar2 = param_1[0xc];
            uVar1 = param_1[9];
            uVar3 = param_1[10];
            *(arg1 + 0x1d8) = param_1[0xb];
            *(arg1 + 0x1e0) = uVar2;
            *(arg1 + 0x1c8) = uVar1;
            *(arg1 + 0x1d0) = uVar3;
            sym.process_raw_ctrs(arg1);
            *(arg1 + 0x1e8) = 1;
            _raw_spin_unlock_irqrestore(arg1 + 0x200,uVar5);
        }
        return;
    }
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x8006b74);
    (*pcVar4)();
}


// ===== sym.memlat_hrtimer_handler.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x08003248 (size 8) =====

ulong sym.memlat_hrtimer_handler.ced2387b2ffe06d71748357bedbe93a2.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.calculate_sampling_stats();
    queue_work_on(0x20,*(_segment.ehdr + 0xa8),_segment.ehdr + 0x78);
    return 0;
}


// ===== sym.get_mpidr_cpu.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x08003250 (size 8) =====

void sym.get_mpidr_cpu.ced2387b2ffe06d71748357bedbe93a2.cfi_jt(uint32_t *param_1)

{
    ulong uVar1;
    
    uVar1 = mpidr_el1;
    *param_1 = uVar1 >> 8 & 0xff;
    return;
}


// ===== sym.__typeid__ZTSFlP7kobjectP9attributePKcmE_global_addr @ 0x08003258 (size 8) =====

int64_t sym.__typeid__ZTSFlP7kobjectP9attributePKcmE_global_addr
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4,ulong param_5,uint32_t *param_6)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint32_t *puVar6;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    uint64_t *extraout_x8;
    uint64_t *puVar7;
    uint64_t extraout_x9;
    uint64_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    code *pcVar10;
    code *pcVar11;
    char *unaff_x24;
    uint64_t unaff_x25;
    int64_t iVar12;
    uint64_t unaff_x28;
    ulong unaff_x30;
    uchar auVar13 [16];
    uint32_t uStack_ac;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    pcVar11 = 0x8000000;
    iStack_38 = *(iVar9 + 0x5e0);
    puVar6 = &uStack_3c;
    uStack_3c = 0;
    iVar9 = *(_segment.ehdr + 0x148);
    iVar3 = kstrtouint(param_3,10);
    if (iVar3 < 0) {
        param_4 = iVar3;
    }
    else {
        if (7999999 < uStack_3c) {
            uStack_3c = 8000000;
        }
        *(param_1 + -100) = uStack_3c;
        if ((*(param_1 + -0x74) != '\0') && (iVar9 != 0)) {
            pcVar10 = *(iVar9 + 0x18);
            __cfi_slowpath_diag(0xd7b8b83d5cf4b610,pcVar10,0x8000b70);
            puVar6 = NULL;
            iVar3 = (*pcVar10)(*(_segment.ehdr + 0x150),*(param_1 + -0x80),0,*(param_1 + -100));
            if (iVar3 < 0) {
                _printk(0x800132f,iVar3);
                param_4 = iVar3;
            }
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return param_4;
    }
    auVar13 = __stack_chk_fail();
    *extraout_x18 = sym.get_mask_and_mpidr_from_pdev;
    pcStack_98 = sym.get_mask_and_mpidr_from_pdev;
    iVar9 = sp_el0;
    iStack_a8 = *(iVar9 + 0x5e0);
    uStack_ac = 0;
    puStack_a0 = &stack0xffffffffffffffd0;
    iVar9 = of_parse_phandle(*(auVar13._0_8_ + 0x300),"qcom,cpulist",0);
    if (iVar9 == 0) {
        iVar12 = 0xffffffed;
        goto code_r0x08005784;
    }
    iVar12 = 0xffffffed;
    pcVar11 = __cpu_possible_mask;
    unaff_x25 = 1;
    unaff_x24 = "qcom,cpulist";
    do {
        uVar4 = cpumask_next(0xffffffff,pcVar11);
        *param_6 = extraout_w8;
        if (extraout_w8 <= uVar4) goto code_r0x08005804;
        unaff_x28 = uVar4;
        while ((iVar5 = get_cpu_device(unaff_x28), iVar5 == 0 || (*(iVar5 + 0x2f0) != iVar9))) {
            uVar8 = cpumask_next(unaff_x28,pcVar11);
            *param_6 = extraout_w8_00;
            unaff_x28 = uVar8 & 0xffffffff;
            if (extraout_w8_00 <= uVar8) goto code_r0x08005804;
        }
        puVar7 = auVar13._8_8_ + (unaff_x28 >> 3 & 0x1ffffff8);
        uVar8 = 1L << (unaff_x28 & 0x3f);
        while( true ) {
            Hint_Prefetch(puVar7,2,0,1);
            do {
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(puVar7,0x10);
                if (bVar2) {
                    *puVar7 = *puVar7 | uVar8;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
            smp_call_function_single
                      (unaff_x28 & 0xffffffff,sym.get_mpidr_cpu.ced2387b2ffe06d71748357bedbe93a2.cfi_jt,&uStack_ac,1)
            ;
            iVar12 = 0;
            *puVar6 = *puVar6 | 1L << (uStack_ac & 0x3f);
code_r0x08005804:
            uVar8 = unaff_x25 & 0xffffffff;
            unaff_x25 = unaff_x25 + 1;
            iVar9 = of_parse_phandle(*(auVar13._0_8_ + 0x300),unaff_x24,uVar8);
            unaff_x28 = unaff_x25;
            if (iVar9 != 0) break;
code_r0x08005784:
            iVar9 = sp_el0;
            if (*(iVar9 + 0x5e0) == iStack_a8) {
                return iVar12;
            }
            __stack_chk_fail();
            puVar7 = extraout_x8;
            uVar8 = extraout_x9;
        }
    } while( true );
}


// ===== sym.store_max_freq.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x08003260 (size 8) =====

uint64_t sym.store_max_freq.ced2387b2ffe06d71748357bedbe93a2.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar4;
    int64_t iVar5;
    code *pcVar6;
    int *piVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    puVar3 = &uStack_4c;
    uStack_4c = 0;
    iVar8 = *(param_1 + -0x58);
    iVar5 = *(_segment.ehdr + 0x148);
    iVar1 = kstrtouint(param_3,10,puVar3);
    if (iVar1 < 0) {
        param_4 = iVar1;
    }
    else {
        if (uStack_4c <= *(param_1 + -0x14)) {
            uStack_4c = *(param_1 + -0x14);
        }
        if (*(param_1 + -8) <= uStack_4c) {
            uStack_4c = *(param_1 + -8);
        }
        *(param_1 + -0x10) = uStack_4c;
        if ((*(param_1 + -0x50) == 4) && (iVar5 != 0)) {
            pcVar6 = *(iVar5 + 0x90);
            __cfi_slowpath_diag(0xd7b8b83d5cf4b610,pcVar6,0x8000bb0);
            puVar3 = *(param_1 + 100);
            iVar1 = (*pcVar6)(*(_segment.ehdr + 0x150),*(iVar8 + 0x10),puVar3,*(param_1 + -0x10));
            if (iVar1 < 0) {
                _printk(0x80016d5,iVar1);
                param_4 = iVar1;
            }
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_48) {
        iVar5 = __stack_chk_fail();
        *extraout_x18 = sym.show_freq_map;
        piVar7 = *(iVar5 + -0x40);
        uVar2 = scnprintf(puVar3,0x1000,"CPU freq (MHz)\tMem freq (kHz)\n");
        iVar1 = *piVar7;
        while( true ) {
            uVar4 = uVar2;
            if ((iVar1 == 0) || (0xfff < uVar2)) break;
            iVar1 = scnprintf(puVar3 + uVar4,0x1000 - uVar4,"%14u\t%14u\n",iVar1,piVar7[1]);
            uVar2 = iVar1 + uVar2;
            iVar1 = piVar7[2];
            piVar7 = piVar7 + 2;
        }
        if (uVar2 < 0x1000) {
            iVar1 = scnprintf(puVar3 + uVar4,0x1000 - uVar4,0x800153a);
            uVar4 = iVar1 + uVar2;
        }
        return uVar4;
    }
    return param_4;
}


// ===== sym.store_ipm_ceil.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x08003268 (size 8) =====

int64_t sym.store_ipm_ceil.ced2387b2ffe06d71748357bedbe93a2.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    uint32_t *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    code *pcVar4;
    int64_t iVar5;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    puVar2 = &uStack_4c;
    uStack_4c = 0;
    iVar5 = *(param_1 + -0x58);
    iVar3 = *(_segment.ehdr + 0x148);
    iVar1 = kstrtouint(param_3,10,puVar2);
    if (iVar1 < 0) {
        param_4 = iVar1;
    }
    else {
        if (uStack_4c < 2) {
            uStack_4c = 1;
        }
        if (0xc34 < uStack_4c >> 4) {
            uStack_4c = 50000;
        }
        *(param_1 + -0x34) = uStack_4c;
        if ((*(param_1 + -0x50) == 4) && (iVar3 != 0)) {
            pcVar4 = *(iVar3 + 0x38);
            __cfi_slowpath_diag(0xd7b8b83d5cf4b610,pcVar4,0x8000bf0);
            puVar2 = *(param_1 + 100);
            iVar1 = (*pcVar4)(*(_segment.ehdr + 0x150),*(iVar5 + 0x10),puVar2,*(param_1 + -0x34));
            if (iVar1 < 0) {
                _printk(0x800160a,iVar1);
                param_4 = iVar1;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_fe_stall_floor;
    iVar1 = scnprintf(puVar2,0x1000,0x800104c,*(iVar3 + -0x30));
    return iVar1;
}


// ===== sym.store_wb_pct_thres.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x08003270 (size 8) =====

int64_t sym.store_wb_pct_thres.ced2387b2ffe06d71748357bedbe93a2.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    uint32_t *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    code *pcVar4;
    int64_t iVar5;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    puVar2 = &uStack_4c;
    uStack_4c = 0;
    iVar5 = *(param_1 + -0x58);
    iVar3 = *(_segment.ehdr + 0x148);
    iVar1 = kstrtouint(param_3,10,puVar2);
    if (iVar1 < 0) {
        param_4 = iVar1;
    }
    else {
        if (99 < uStack_4c) {
            uStack_4c = 100;
        }
        *(param_1 + -0x1c) = uStack_4c;
        if ((*(param_1 + -0x50) == 4) && (iVar3 != 0)) {
            pcVar4 = *(iVar3 + 0x50);
            __cfi_slowpath_diag(0xd7b8b83d5cf4b610,pcVar4,0x8000c70);
            puVar2 = *(param_1 + 100);
            iVar1 = (*pcVar4)(*(_segment.ehdr + 0x150),*(iVar5 + 0x10),puVar2,*(param_1 + -0x1c));
            if (iVar1 < 0) {
                _printk(0x800160a,iVar1);
                param_4 = iVar1;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_wb_filter_ipm;
    iVar1 = scnprintf(puVar2,0x1000,0x800104c,*(iVar3 + -0x18));
    return iVar1;
}


// ===== sym.store_be_stall_floor.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x08003278 (size 8) =====

int64_t sym.store_be_stall_floor.ced2387b2ffe06d71748357bedbe93a2.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    uint32_t *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    code *pcVar4;
    int64_t iVar5;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    puVar2 = &uStack_4c;
    uStack_4c = 0;
    iVar5 = *(param_1 + -0x58);
    iVar3 = *(_segment.ehdr + 0x148);
    iVar1 = kstrtouint(param_3,10,puVar2);
    if (iVar1 < 0) {
        param_4 = iVar1;
    }
    else {
        if (99 < uStack_4c) {
            uStack_4c = 100;
        }
        *(param_1 + -0x2c) = uStack_4c;
        if ((*(param_1 + -0x50) == 4) && (iVar3 != 0)) {
            pcVar4 = *(iVar3 + 0x48);
            __cfi_slowpath_diag(0xd7b8b83d5cf4b610,pcVar4,0x8000c30);
            puVar2 = *(param_1 + 100);
            iVar1 = (*pcVar4)(*(_segment.ehdr + 0x150),*(iVar5 + 0x10),puVar2,*(param_1 + -0x2c));
            if (iVar1 < 0) {
                _printk(0x800160a,iVar1);
                param_4 = iVar1;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_freq_scale_pct;
    iVar1 = scnprintf(puVar2,0x1000,0x800104c,*(iVar3 + -0x28));
    return iVar1;
}


// ===== sym.store_freq_scale_ceil_mhz.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x08003280 (size 8) =====

int64_t sym.store_freq_scale_ceil_mhz.ced2387b2ffe06d71748357bedbe93a2.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    uint32_t *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    code *pcVar4;
    int64_t iVar5;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    puVar2 = &uStack_4c;
    uStack_4c = 0;
    iVar5 = *(param_1 + -0x58);
    iVar3 = *(_segment.ehdr + 0x148);
    iVar1 = kstrtouint(param_3,10,puVar2);
    if (iVar1 < 0) {
        param_4 = iVar1;
    }
    else {
        if (0x270 < uStack_4c >> 3) {
            uStack_4c = 5000;
        }
        *(param_1 + -0x24) = uStack_4c;
        if ((*(param_1 + -0x50) == 4) && (iVar3 != 0)) {
            pcVar4 = *(iVar3 + 0x68);
            __cfi_slowpath_diag(0xd7b8b83d5cf4b610,pcVar4,0x8000cb0);
            puVar2 = *(param_1 + 100);
            iVar1 = (*pcVar4)(*(_segment.ehdr + 0x150),*(iVar5 + 0x10),puVar2,*(param_1 + -0x24));
            if (iVar1 < 0) {
                _printk(0x800160a,iVar1);
                param_4 = iVar1;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_freq_scale_floor_mhz;
    iVar1 = scnprintf(puVar2,0x1000,0x800104c,*(iVar3 + -0x20));
    return iVar1;
}


// ===== sym.store_min_freq.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x08003288 (size 8) =====

int64_t sym.store_min_freq.ced2387b2ffe06d71748357bedbe93a2.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    uint32_t *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    code *pcVar4;
    int64_t iVar5;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    puVar2 = &uStack_4c;
    uStack_4c = 0;
    iVar5 = *(param_1 + -0x58);
    iVar3 = *(_segment.ehdr + 0x148);
    iVar1 = kstrtouint(param_3,10,puVar2);
    if (iVar1 < 0) {
        param_4 = iVar1;
    }
    else {
        if (uStack_4c <= *(param_1 + -0xc)) {
            uStack_4c = *(param_1 + -0xc);
        }
        if (*(param_1 + -0x10) <= uStack_4c) {
            uStack_4c = *(param_1 + -0x10);
        }
        *(param_1 + -0x14) = uStack_4c;
        if ((*(param_1 + -0x50) == 4) && (iVar3 != 0)) {
            pcVar4 = *(iVar3 + 0x88);
            __cfi_slowpath_diag(0xd7b8b83d5cf4b610,pcVar4,0x8000b90);
            puVar2 = *(param_1 + 100);
            iVar1 = (*pcVar4)(*(_segment.ehdr + 0x150),*(iVar5 + 0x10),puVar2,*(param_1 + -0x14));
            if (iVar1 < 0) {
                _printk(0x8000d6c,iVar1);
                param_4 = iVar1;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_max_freq;
    iVar1 = scnprintf(puVar2,0x1000,0x800104c,*(iVar3 + -0x10));
    return iVar1;
}


// ===== sym.store_cpucp_log_level.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x08003290 (size 8) =====

int64_t sym.store_cpucp_log_level.ced2387b2ffe06d71748357bedbe93a2.cfi_jt
                  (ulong param_1,ulong param_2,uint *param_3,int64_t param_4)

{
    int iVar1;
    uint *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    code *pcVar4;
    ulong unaff_x30;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_3c = 0;
    iVar3 = *(_segment.ehdr + 0x148);
    if (iVar3 == 0) {
        param_4 = -0x13;
    }
    else if ((((*(*(_segment.ehdr + 0x110) + 0x1c) != '\0') || (*(*(_segment.ehdr + 0x118) + 0x1c) != '\0')) ||
             (*(*(_segment.ehdr + 0x120) + 0x1c) != '\0')) || (*(*(_segment.ehdr + 0x128) + 0x1c) != '\0')) {
        puVar2 = &uStack_3c;
        iVar1 = kstrtouint(param_3,10,puVar2);
        if (iVar1 < 0) {
            param_4 = iVar1;
            param_3 = puVar2;
        }
        else {
            pcVar4 = *(iVar3 + 0xb0);
            param_3 = 0x8000ad0;
            __cfi_slowpath_diag(0x17f4128a1da16962,pcVar4,0x8000ad0);
            iVar1 = (*pcVar4)(*(_segment.ehdr + 0x150),uStack_3c);
            if (iVar1 < 0) {
                _printk(0x800171a,iVar1);
                param_4 = iVar1;
            }
            else {
                *(_segment.ehdr + 0x15c) = uStack_3c;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return param_4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.show_flush_cpucp_log;
    iVar1 = scnprintf(param_3,0x1000,"Echo here to flush cpucp logs\n");
    return iVar1;
}


// ===== sym.store_flush_cpucp_log.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x08003298 (size 8) =====

int64_t sym.store_flush_cpucp_log.ced2387b2ffe06d71748357bedbe93a2.cfi_jt(void)

{
    int iVar1;
    int64_t in_x3;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(_segment.ehdr + 0x148) == 0) {
        in_x3 = -0x13;
    }
    else {
        pcVar2 = *(*(_segment.ehdr + 0x148) + 0xb8);
        __cfi_slowpath_diag(0x6ac5a6004ef664b6,pcVar2,0x8000af0);
        iVar1 = (*pcVar2)(*(_segment.ehdr + 0x150));
        if (iVar1 < 0) {
            _printk(0x80015a6,iVar1);
            in_x3 = iVar1;
        }
    }
    return in_x3;
}


// ===== sym.store_adaptive_high_freq.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x080032a0 (size 8) =====

int64_t sym.store_adaptive_high_freq.ced2387b2ffe06d71748357bedbe93a2.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    uint32_t *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    code *pcVar4;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    puVar2 = &uStack_3c;
    uStack_3c = 0;
    iVar3 = *(_segment.ehdr + 0x148);
    iVar1 = kstrtouint(param_3,10,puVar2);
    if (iVar1 < 0) {
        param_4 = iVar1;
    }
    else {
        if (7999999 < uStack_3c) {
            uStack_3c = 8000000;
        }
        *(param_1 + -0x68) = uStack_3c;
        if ((*(param_1 + -0x74) != '\0') && (iVar3 != 0)) {
            pcVar4 = *(iVar3 + 0x20);
            __cfi_slowpath_diag(0xd7b8b83d5cf4b610,pcVar4,0x8000b50);
            puVar2 = NULL;
            iVar1 = (*pcVar4)(*(_segment.ehdr + 0x150),*(param_1 + -0x80),0,*(param_1 + -0x68));
            if (iVar1 < 0) {
                _printk(0x800132f,iVar1);
                param_4 = iVar1;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_adaptive_low_freq;
    iVar1 = scnprintf(puVar2,0x1000,0x800104c,*(iVar3 + -100));
    return iVar1;
}


// ===== sym.store_fe_stall_floor.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x080032a8 (size 8) =====

int64_t sym.store_fe_stall_floor.ced2387b2ffe06d71748357bedbe93a2.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    uint32_t *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    code *pcVar4;
    int64_t iVar5;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    puVar2 = &uStack_4c;
    uStack_4c = 0;
    iVar5 = *(param_1 + -0x58);
    iVar3 = *(_segment.ehdr + 0x148);
    iVar1 = kstrtouint(param_3,10,puVar2);
    if (iVar1 < 0) {
        param_4 = iVar1;
    }
    else {
        if (99 < uStack_4c) {
            uStack_4c = 100;
        }
        *(param_1 + -0x30) = uStack_4c;
        if ((*(param_1 + -0x50) == 4) && (iVar3 != 0)) {
            pcVar4 = *(iVar3 + 0x40);
            __cfi_slowpath_diag(0xd7b8b83d5cf4b610,pcVar4,0x8000c10);
            puVar2 = *(param_1 + 100);
            iVar1 = (*pcVar4)(*(_segment.ehdr + 0x150),*(iVar5 + 0x10),puVar2,*(param_1 + -0x30));
            if (iVar1 < 0) {
                _printk(0x800160a,iVar1);
                param_4 = iVar1;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_be_stall_floor;
    iVar1 = scnprintf(puVar2,0x1000,0x800104c,*(iVar3 + -0x2c));
    return iVar1;
}


// ===== sym.attr_store.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x080032b0 (size 8) =====

ulong sym.attr_store.ced2387b2ffe06d71748357bedbe93a2.cfi_jt
                (ulong param_1,int64_t param_2,ulong param_3,ulong param_4)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(param_2 + 0x18);
    if (pcVar2 == NULL) {
        uVar1 = 0xfffffffffffffffb;
    }
    else {
        if (0x10 < (pcVar2 + -0x8003258 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xfaa7b7b8dc0fae98,pcVar2,0x8000a90);
        }
        uVar1 = (*pcVar2)(param_1,param_2,param_3,param_4);
    }
    return uVar1;
}


// ===== sym.store_cpucp_sample_ms.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x080032b8 (size 8) =====

int64_t sym.store_cpucp_sample_ms.ced2387b2ffe06d71748357bedbe93a2.cfi_jt
                  (ulong param_1,ulong param_2,uint32_t *param_3,int64_t param_4)

{
    int iVar1;
    uint32_t *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    code *pcVar4;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_3c = 0;
    iVar3 = *(_segment.ehdr + 0x148);
    if (iVar3 == 0) {
        param_4 = -0x13;
    }
    else if ((((*(*(_segment.ehdr + 0x110) + 0x1c) != '\0') || (*(*(_segment.ehdr + 0x118) + 0x1c) != '\0')) ||
             (*(*(_segment.ehdr + 0x120) + 0x1c) != '\0')) || (*(*(_segment.ehdr + 0x128) + 0x1c) != '\0')) {
        puVar2 = &uStack_3c;
        iVar1 = kstrtouint(param_3,10,puVar2);
        if (iVar1 < 0) {
            param_4 = iVar1;
            param_3 = puVar2;
        }
        else {
            pcVar4 = *(iVar3 + 0x78);
            if (uStack_3c < 5) {
                uStack_3c = 4;
            }
            param_3 = 0x8000ab0;
            if (999 < uStack_3c) {
                uStack_3c = 1000;
            }
            __cfi_slowpath_diag(0x17f4128a1da16962,pcVar4,0x8000ab0);
            iVar1 = (*pcVar4)(*(_segment.ehdr + 0x150),uStack_3c);
            if (iVar1 < 0) {
                _printk(0x8001448,iVar1);
                param_4 = iVar1;
            }
            else {
                *(_segment.ehdr + 0x158) = uStack_3c;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return param_4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.show_cpucp_log_level;
    iVar1 = scnprintf(param_3,0x1000,"%lu\n",*(_segment.ehdr + 0x15c));
    return iVar1;
}


// ===== sym.store_wb_filter_ipm.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x080032c0 (size 8) =====

int64_t sym.store_wb_filter_ipm.ced2387b2ffe06d71748357bedbe93a2.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    uint32_t *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    code *pcVar4;
    int64_t iVar5;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    puVar2 = &uStack_4c;
    uStack_4c = 0;
    iVar5 = *(param_1 + -0x58);
    iVar3 = *(_segment.ehdr + 0x148);
    iVar1 = kstrtouint(param_3,10,puVar2);
    if (iVar1 < 0) {
        param_4 = iVar1;
    }
    else {
        if (0xc34 < uStack_4c >> 4) {
            uStack_4c = 50000;
        }
        *(param_1 + -0x18) = uStack_4c;
        if ((*(param_1 + -0x50) == 4) && (iVar3 != 0)) {
            pcVar4 = *(iVar3 + 0x58);
            __cfi_slowpath_diag(0xd7b8b83d5cf4b610,pcVar4,0x8000c90);
            puVar2 = *(param_1 + 100);
            iVar1 = (*pcVar4)(*(_segment.ehdr + 0x150),*(iVar5 + 0x10),puVar2,*(param_1 + -0x18));
            if (iVar1 < 0) {
                _printk(0x800160a,iVar1);
                param_4 = iVar1;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_freq_scale_ceil_mhz;
    iVar1 = scnprintf(puVar2,0x1000,0x800104c,*(iVar3 + -0x24));
    return iVar1;
}


// ===== sym.store_freq_scale_floor_mhz.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x080032c8 (size 8) =====

uchar * sym.store_freq_scale_floor_mhz.ced2387b2ffe06d71748357bedbe93a2.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,uchar *param_4)

{
    int iVar1;
    uchar *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    code *pcVar4;
    int64_t iVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    uStack_4c = 0;
    iVar5 = *(param_1 + -0x58);
    iVar3 = *(_segment.ehdr + 0x148);
    iVar1 = kstrtouint(param_3,10,&uStack_4c);
    if (iVar1 < 0) {
        param_4 = iVar1;
    }
    else {
        if (0x270 < uStack_4c >> 3) {
            uStack_4c = 5000;
        }
        *(param_1 + -0x20) = uStack_4c;
        if ((*(param_1 + -0x50) == 4) && (iVar3 != 0)) {
            pcVar4 = *(iVar3 + 0x70);
            __cfi_slowpath_diag(0xd7b8b83d5cf4b610,pcVar4,0x8000cd0);
            iVar1 = (*pcVar4)(*(_segment.ehdr + 0x150),*(iVar5 + 0x10),*(param_1 + 100),*(param_1 + -0x20));
            if (iVar1 < 0) {
                _printk(0x800160a,iVar1);
                param_4 = iVar1;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_48) {
        auVar6 = __stack_chk_fail();
        puVar2 = auVar6._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar2 != NULL) {
            switch(*puVar2) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar2,auVar6._8_8_,0);
                break;
            default:
                return puVar2;
            }
        }
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x5502,0x8007bd4);
        (*pcVar4)();
    }
    return param_4;
}


// ===== sym.store_sample_ms.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x080032d0 (size 8) =====

int64_t sym.store_sample_ms.ced2387b2ffe06d71748357bedbe93a2.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    puVar4 = &uStack_2c;
    uStack_2c = 0;
    iVar3 = kstrtouint(param_3,10,puVar4);
    if (iVar3 < 0) {
        param_4 = iVar3;
    }
    else {
        uVar1 = uStack_2c;
        if (uStack_2c < 5) {
            uVar1 = 4;
        }
        if (999 < uVar1) {
            uVar1 = 1000;
        }
        *(_segment.ehdr + 0xb0) = uVar1;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return param_4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.show_cpucp_sample_ms;
    iVar3 = scnprintf(puVar4,0x1000,"%lu\n",*(_segment.ehdr + 0x158));
    return iVar3;
}


// ===== sym.store_freq_scale_pct.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x080032d8 (size 8) =====

int64_t sym.store_freq_scale_pct.ced2387b2ffe06d71748357bedbe93a2.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    uint32_t *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    code *pcVar4;
    int64_t iVar5;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    puVar2 = &uStack_4c;
    uStack_4c = 0;
    iVar5 = *(param_1 + -0x58);
    iVar3 = *(_segment.ehdr + 0x148);
    iVar1 = kstrtouint(param_3,10,puVar2);
    if (iVar1 < 0) {
        param_4 = iVar1;
    }
    else {
        if (999 < uStack_4c) {
            uStack_4c = 1000;
        }
        *(param_1 + -0x28) = uStack_4c;
        if ((*(param_1 + -0x50) == 4) && (iVar3 != 0)) {
            pcVar4 = *(iVar3 + 0x60);
            __cfi_slowpath_diag(0xd7b8b83d5cf4b610,pcVar4,0x8000c50);
            puVar2 = *(param_1 + 100);
            iVar1 = (*pcVar4)(*(_segment.ehdr + 0x150),*(iVar5 + 0x10),puVar2,*(param_1 + -0x28));
            if (iVar1 < 0) {
                _printk(0x800160a,iVar1);
                param_4 = iVar1;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_wb_pct_thres;
    iVar1 = scnprintf(puVar2,0x1000,0x800104c,*(iVar3 + -0x1c));
    return iVar1;
}


// ===== sym.memlat_sched_tick_cb.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x080032e0 (size 8) =====

void sym.memlat_sched_tick_cb.ced2387b2ffe06d71748357bedbe93a2.cfi_jt(void)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = tpidr_el1;
    uVar1 = *(cpu_number + iVar4);
    if (uVar1 < 0x20) {
        arg1 = *(obj.sampling_stats + *(__per_cpu_offset + uVar1 * 8));
        iVar4 = ktime_get();
        if (*(_segment.ehdr + 0x142) != '\0') {
            uVar5 = _raw_spin_lock_irqsave(arg1 + 0x200);
            if (*(_segment.ehdr + 0xb0) * 1000000 <= (iVar4 - *(arg1 + 0x1f8)) + 2000000) {
                *(arg1 + 0x1f0) = iVar4;
                *(arg1 + 0x1e8) = 0;
                *(arg1 + 0x1e0) = 0;
                iVar3 = qcom_pmu_read_all_local(arg1 + 0x180);
                if ((iVar3 < 0) || (*(arg1 + 0x1e0) == 0)) {
                    _printk(0x8000e2f,uVar1,iVar3);
                }
                else {
                    sym.process_raw_ctrs(arg1);
                }
            }
            _raw_spin_unlock_irqrestore(arg1 + 0x200,uVar5);
        }
        return;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8005cd4);
    (*pcVar2)();
}


// ===== sym.__typeid__ZTSFlP7kobjectP9attributePcE_global_addr @ 0x080032e8 (size 8) =====

int64_t sym.__typeid__ZTSFlP7kobjectP9attributePcE_global_addr(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x800104c,*(param_1 + -0x10));
    return iVar1;
}


// ===== sym.show_flush_cpucp_log.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x080032f0 (size 8) =====

int64_t sym.show_flush_cpucp_log.ced2387b2ffe06d71748357bedbe93a2.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,"Echo here to flush cpucp logs\n");
    return iVar1;
}


// ===== sym.show_adaptive_high_freq.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x080032f8 (size 8) =====

int64_t sym.show_adaptive_high_freq.ced2387b2ffe06d71748357bedbe93a2.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x800104c,*(param_1 + -0x68));
    return iVar1;
}


// ===== sym.show_freq_scale_ceil_mhz.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x08003300 (size 8) =====

int64_t sym.show_freq_scale_ceil_mhz.ced2387b2ffe06d71748357bedbe93a2.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x800104c,*(param_1 + -0x24));
    return iVar1;
}


// ===== sym.show_freq_scale_floor_mhz.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x08003308 (size 8) =====

int64_t sym.show_freq_scale_floor_mhz.ced2387b2ffe06d71748357bedbe93a2.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x800104c,*(param_1 + -0x20));
    return iVar1;
}


// ===== sym.show_wb_filter_ipm.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x08003310 (size 8) =====

int64_t sym.show_wb_filter_ipm.ced2387b2ffe06d71748357bedbe93a2.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x800104c,*(param_1 + -0x18));
    return iVar1;
}


// ===== sym.show_be_stall_floor.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x08003318 (size 8) =====

int64_t sym.show_be_stall_floor.ced2387b2ffe06d71748357bedbe93a2.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x800104c,*(param_1 + -0x2c));
    return iVar1;
}


// ===== sym.show_freq_map.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x08003320 (size 8) =====

uint64_t sym.show_freq_map.ced2387b2ffe06d71748357bedbe93a2.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    uint32_t uVar1;
    int iVar2;
    ulong *in_x18;
    uint64_t uVar3;
    int *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(param_1 + -0x40);
    uVar1 = scnprintf(param_3,0x1000,"CPU freq (MHz)\tMem freq (kHz)\n");
    iVar2 = *piVar4;
    while( true ) {
        uVar3 = uVar1;
        if ((iVar2 == 0) || (0xfff < uVar1)) break;
        iVar2 = scnprintf(param_3 + uVar3,0x1000 - uVar3,"%14u\t%14u\n",iVar2,piVar4[1]);
        uVar1 = iVar2 + uVar1;
        iVar2 = piVar4[2];
        piVar4 = piVar4 + 2;
    }
    if (uVar1 < 0x1000) {
        iVar2 = scnprintf(param_3 + uVar3,0x1000 - uVar3,0x800153a);
        uVar3 = iVar2 + uVar1;
    }
    return uVar3;
}


// ===== sym.attr_show.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x08003328 (size 8) =====

ulong sym.attr_show.ced2387b2ffe06d71748357bedbe93a2.cfi_jt(ulong param_1,int64_t param_2,ulong param_3)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(param_2 + 0x10);
    if (pcVar2 == NULL) {
        uVar1 = 0xfffffffffffffffb;
    }
    else {
        if (0x15 < (pcVar2 + -0x80032e8 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2c1d832160b5d123,pcVar2,0x8000a70);
        }
        uVar1 = (*pcVar2)(param_1,param_2,param_3);
    }
    return uVar1;
}


// ===== sym.show_cpucp_sample_ms.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x08003330 (size 8) =====

int64_t sym.show_cpucp_sample_ms.ced2387b2ffe06d71748357bedbe93a2.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,"%lu\n",*(_segment.ehdr + 0x158));
    return iVar1;
}


// ===== sym.show_wb_pct_thres.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x08003338 (size 8) =====

int64_t sym.show_wb_pct_thres.ced2387b2ffe06d71748357bedbe93a2.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x800104c,*(param_1 + -0x1c));
    return iVar1;
}


// ===== sym.show_cpucp_log_level.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x08003340 (size 8) =====

int64_t sym.show_cpucp_log_level.ced2387b2ffe06d71748357bedbe93a2.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,"%lu\n",*(_segment.ehdr + 0x15c));
    return iVar1;
}


// ===== sym.show_ipm_ceil.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x08003348 (size 8) =====

int64_t sym.show_ipm_ceil.ced2387b2ffe06d71748357bedbe93a2.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x800104c,*(param_1 + -0x34));
    return iVar1;
}


// ===== sym.show_sampling_cur_freq.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x08003350 (size 8) =====

int64_t sym.show_sampling_cur_freq.ced2387b2ffe06d71748357bedbe93a2.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x800104c,*(param_1 + -0x70));
    return iVar1;
}


// ===== sym.show_min_freq.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x08003358 (size 8) =====

int64_t sym.show_min_freq.ced2387b2ffe06d71748357bedbe93a2.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x800104c,*(param_1 + -0x14));
    return iVar1;
}


// ===== sym.show_adaptive_low_freq.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x08003360 (size 8) =====

int64_t sym.show_adaptive_low_freq.ced2387b2ffe06d71748357bedbe93a2.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x800104c,*(param_1 + -100));
    return iVar1;
}


// ===== sym.show_adaptive_cur_freq.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x08003368 (size 8) =====

int64_t sym.show_adaptive_cur_freq.ced2387b2ffe06d71748357bedbe93a2.cfi_jt
                  (int64_t param_1,ulong param_2,char *param_3)

{
    int64_t iVar1;
    uint uVar2;
    int iVar3;
    int64_t iVar4;
    char *pcVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar6;
    ulong unaff_x30;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_3c = 0;
    if (*(param_1 + -0x74) == '\0') {
        uVar2 = *(param_1 + -0x6c);
    }
    else {
        if (*(_segment.ehdr + 0x148) == 0) {
            iVar4 = -0x13;
            goto code_r0x08005404;
        }
        pcVar6 = *(*(_segment.ehdr + 0x148) + 0x28);
        __cfi_slowpath_diag(0x4e07fa4dc08e950d,pcVar6,0x8000b30);
        pcVar5 = NULL;
        iVar3 = (*pcVar6)(*(_segment.ehdr + 0x150),*(param_1 + -0x80),0,&uStack_3c);
        uVar2 = uStack_3c;
        if (iVar3 < 0) {
            _printk(0x80018cc);
            iVar4 = iVar3;
            param_3 = pcVar5;
            goto code_r0x08005404;
        }
    }
    pcVar5 = "%lu\n";
    iVar3 = scnprintf(param_3,0x1000,"%lu\n",uVar2);
    iVar4 = iVar3;
    param_3 = pcVar5;
code_r0x08005404:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_38) {
        iVar4 = __stack_chk_fail(iVar4);
        *extraout_x18 = sym.show_adaptive_high_freq;
        iVar3 = scnprintf(param_3,0x1000,0x800104c,*(iVar4 + -0x68));
        return iVar3;
    }
    return iVar4;
}


// ===== sym.show_fe_stall_floor.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x08003370 (size 8) =====

int64_t sym.show_fe_stall_floor.ced2387b2ffe06d71748357bedbe93a2.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x800104c,*(param_1 + -0x30));
    return iVar1;
}


// ===== sym.show_hlos_cpucp_offset.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x08003378 (size 8) =====

int64_t sym.show_hlos_cpucp_offset.ced2387b2ffe06d71748357bedbe93a2.cfi_jt(ulong param_1,ulong param_2,char *param_3)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar5;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iStack_40 = 0;
    if (*(_segment.ehdr + 0x148) == 0) {
        iVar3 = -0x13;
    }
    else {
        pcVar5 = *(*(_segment.ehdr + 0x148) + 0xc0);
        pcVar4 = 0x8000b10;
        __cfi_slowpath_diag(0x376863d1de02459b,pcVar5,0x8000b10);
        iVar2 = (*pcVar5)(*(_segment.ehdr + 0x150),&iStack_40);
        if (iVar2 < 0) {
            _printk(0x800189e);
            iVar3 = iVar2;
            param_3 = pcVar4;
        }
        else {
            iVar3 = ktime_get();
            pcVar4 = "%ld\n";
            iVar3 = SUB168(SEXT816(iVar3) * SEXT816(-0x20c49ba5e353f7cf),8);
            iVar2 = scnprintf(param_3,0x1000,"%ld\n",((iVar3 >> 7) - (iVar3 >> 0x3f)) + iStack_40);
            iVar3 = iVar2;
            param_3 = pcVar4;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return iVar3;
    }
    iVar3 = __stack_chk_fail(iVar3);
    *extraout_x18 = sym.show_sampling_cur_freq;
    iVar2 = scnprintf(param_3,0x1000,0x800104c,*(iVar3 + -0x70));
    return iVar2;
}


// ===== sym.show_freq_scale_pct.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x08003380 (size 8) =====

int64_t sym.show_freq_scale_pct.ced2387b2ffe06d71748357bedbe93a2.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x800104c,*(param_1 + -0x28));
    return iVar1;
}


// ===== sym.show_sample_ms.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x08003388 (size 8) =====

int64_t sym.show_sample_ms.ced2387b2ffe06d71748357bedbe93a2.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x800104c,*(_segment.ehdr + 0xb0));
    return iVar1;
}


// ===== sym.show_cur_freq.ced2387b2ffe06d71748357bedbe93a2.cfi_jt @ 0x08003390 (size 8) =====

int64_t sym.show_cur_freq.ced2387b2ffe06d71748357bedbe93a2.cfi_jt(int64_t param_1,ulong param_2,char *param_3)

{
    int64_t iVar1;
    uint uVar2;
    int iVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar5;
    int64_t iVar6;
    ulong unaff_x30;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    uStack_4c = 0;
    iVar6 = *(param_1 + -0x58);
    if (*(param_1 + -0x50) == 4) {
        if (*(_segment.ehdr + 0x148) == 0) {
            iVar6 = -0x13;
            goto code_r0x08006fec;
        }
        pcVar5 = *(*(_segment.ehdr + 0x148) + 0x98);
        __cfi_slowpath_diag(0x4e07fa4dc08e950d,pcVar5,0x8000bd0);
        pcVar4 = *(param_1 + 100);
        iVar3 = (*pcVar5)(*(_segment.ehdr + 0x150),*(iVar6 + 0x10),pcVar4,&uStack_4c);
        uVar2 = uStack_4c;
        if (iVar3 < 0) {
            _printk(0x8001091);
            iVar6 = iVar3;
            param_3 = pcVar4;
            goto code_r0x08006fec;
        }
    }
    else {
        uVar2 = *(param_1 + -4);
    }
    pcVar4 = "%lu\n";
    iVar3 = scnprintf(param_3,0x1000,"%lu\n",uVar2);
    iVar6 = iVar3;
    param_3 = pcVar4;
code_r0x08006fec:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_48) {
        iVar6 = __stack_chk_fail(iVar6);
        *extraout_x18 = sym.show_ipm_ceil;
        iVar3 = scnprintf(param_3,0x1000,0x800104c,*(iVar6 + -0x34));
        return iVar3;
    }
    return iVar6;
}


// ===== sym.cpucp_memlat_init @ 0x08003398 (size 2400) =====

uint64_t sym.cpucp_memlat_init(int64_t arg1)

{
    uint uVar1;
    uint uVar2;
    int64_t *piVar3;
    bool bVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    uint32_t uVar8;
    int64_t iVar9;
    int *piVar10;
    int64_t *piVar11;
    int64_t iVar12;
    int64_t iVar13;
    int64_t iVar14;
    uint64_t uVar15;
    ulong extraout_x1;
    char *pcVar16;
    uint32_t *in_x5;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    uint32_t extraout_w8_01;
    uint32_t extraout_w8_02;
    ulong extraout_x8;
    ulong extraout_x8_00;
    uint32_t uVar17;
    int *piVar18;
    ulong *in_x18;
    ulong *extraout_x18;
    code *unaff_x19;
    code *unaff_x20;
    code *pcVar19;
    ulong *unaff_x21;
    ulong uVar20;
    uint64_t uVar21;
    uint64_t unaff_x23;
    uint64_t unaff_x24;
    int64_t iVar22;
    int64_t unaff_x25;
    int64_t *unaff_x26;
    uint32_t *unaff_x27;
    int64_t *piVar23;
    uint64_t uVar24;
    ulong unaff_x30;
    uint32_t uStack_124;
    ulong uStack_120;
    int64_t iStack_118;
    uchar *puStack_110;
    code *pcStack_108;
    uint64_t uStack_100;
    uint32_t *puStack_f8;
    int64_t *piStack_f0;
    int64_t iStack_e8;
    uint64_t uStack_e0;
    uint64_t uStack_d8;
    ulong uStack_d0;
    ulong *puStack_c8;
    code *pcStack_c0;
    code *pcStack_b8;
    code *pcStack_b0;
    uint64_t uStack_a8;
    int64_t *piStack_a0;
    ulong *puStack_98;
    int64_t *piStack_90;
    uint64_t uStack_88;
    code *pcStack_80;
    int64_t iStack_78;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_68 = *(iVar12 + 0x5e0);
    iStack_78 = 0;
    if ((_segment.ehdr == NULL) || (*(_segment.ehdr + 0x142) == '\0')) {
        uVar24 = 0xfffffdfb;
    }
    else {
        unaff_x19 = arg1;
        if ((arg1 == 0) || (*(arg1 + 0x3a0) == 0)) {
            uVar24 = 0xffffffea;
        }
        else {
            pcVar19 = *(*(arg1 + 0x3a0) + 0x10);
            __cfi_slowpath_diag(0x25d5be01bcd057e5,pcVar19,0x80007f0);
            pcVar19 = (*pcVar19)(arg1,0x80,&iStack_78);
            unaff_x20 = pcVar19;
            if (pcVar19 < 0xfffffffffffff001) {
                mutex_lock(obj.memlat_lock);
                piVar23 = _segment.ehdr;
                uStack_6c = 0xffffffff;
                iVar12 = _segment.ehdr[0xd];
                _segment.ehdr[0x29] = pcVar19;
                piVar23[0x2a] = iStack_78;
                if ((iVar12 != 0) && (uVar8 = qcom_get_cpucp_id(iVar12,0), uVar8 < 9)) {
                    uStack_6c = CONCAT31(uStack_6c._1_3_,uVar8);
                }
                if ((*(_segment.ehdr + 0x6c) != 0) &&
                   (uVar8 = qcom_get_cpucp_id(*(_segment.ehdr + 0x6c),0), uVar8 < 9)) {
                    uStack_6c._0_2_ = CONCAT11(uVar8,uStack_6c);
                }
                if ((_segment.ehdr[0xe] != 0) && (uVar8 = qcom_get_cpucp_id(_segment.ehdr[0xe],0), uVar8 < 9)) {
                    uStack_6c._0_3_ = CONCAT12(uVar8,uStack_6c);
                }
                if ((*(_segment.ehdr + 0x74) != 0) &&
                   (uVar8 = qcom_get_cpucp_id(*(_segment.ehdr + 0x74),0), uVar8 < 9)) {
                    uStack_6c = CONCAT13(uVar8,uStack_6c);
                }
                unaff_x19 = *(pcVar19 + 0x30);
                __cfi_slowpath_diag(0x7b03ac44b3ee5b01,unaff_x19,0x8000850);
                uVar8 = (*unaff_x19)(_segment.ehdr[0x2a],&uStack_6c,4);
                if (uVar8 < 0) {
                    uVar24 = uVar8;
                    uVar20 = 0x8000e70;
code_r0x08003ce8:
                    _printk(uVar20,uVar24);
code_r0x08003c38:
                    _segment.ehdr[0x29] = 0;
                }
                else {
                    unaff_x23 = 0;
                    unaff_x20 = NULL;
                    piVar23 = _segment.ehdr;
                    pcStack_b0 = pcVar19;
                    do {
                        unaff_x24 = 200;
                        unaff_x26 = piVar23[unaff_x23 + 0x22];
                        if ((unaff_x26 != NULL) && (*(unaff_x26 + 0x1c) != '\0')) {
                            unaff_x21 = piVar23[0x29];
                            pcVar19 = *unaff_x21;
                            unaff_x19 = *(*unaff_x26 + 0x2f0);
                            __cfi_slowpath_diag(0x308d371319c62e56,pcVar19,0x8000870);
                            piVar23 = _segment.ehdr;
                            iVar12 = unaff_x26[2];
                            *in_x5 = extraout_x1;
                            uVar8 = (*pcVar19)(piVar23[0x2a],extraout_x1,iVar12);
                            if (uVar8 < 0) {
                                uVar24 = uVar8;
                                uVar20 = 0x8001549;
                            }
                            else {
                                uStack_6c = CONCAT13(uStack_6c._3_1_,0xff0000);
                                uStack_6c = CONCAT22(uStack_6c._2_2_,0xffff);
                                if ((unaff_x26[8] != 0) && (uVar8 = qcom_get_cpucp_id(unaff_x26[8],0), uVar8 < 9)) {
                                    uStack_6c = CONCAT31(uStack_6c._1_3_,uVar8);
                                }
                                if ((*(unaff_x26 + 0x44) != 0) &&
                                   (uVar8 = qcom_get_cpucp_id(*(unaff_x26 + 0x44),0), uVar8 < 9)) {
                                    uStack_6c._0_2_ = CONCAT11(uVar8,uStack_6c);
                                }
                                if ((unaff_x26[9] != 0) && (uVar8 = qcom_get_cpucp_id(unaff_x26[9],0), uVar8 < 9)) {
                                    uStack_6c._0_3_ = CONCAT12(uVar8,uStack_6c);
                                }
                                pcVar19 = unaff_x21[2];
                                __cfi_slowpath_diag(0x34377c6266c49fe3,pcVar19,0x8000890);
                                uVar8 = (*pcVar19)(_segment.ehdr[0x2a],unaff_x26[2],&uStack_6c,3);
                                if (uVar8 < 0) {
                                    uVar24 = uVar8;
                                    uVar20 = 0x8001761;
                                }
                                else {
                                    pcVar19 = unaff_x21[3];
                                    __cfi_slowpath_diag(0xd7b8b83d5cf4b610,pcVar19,0x80008b0);
                                    uVar8 = (*pcVar19)(_segment.ehdr[0x2a],unaff_x26[2],0,*(unaff_x26 + 0x2c));
                                    if (uVar8 < 0) {
                                        uVar24 = uVar8;
                                        uVar20 = 0x8001959;
                                    }
                                    else {
                                        pcVar19 = unaff_x21[4];
                                        __cfi_slowpath_diag(0xd7b8b83d5cf4b610,pcVar19,0x80008d0);
                                        uVar8 = (*pcVar19)(_segment.ehdr[0x2a],unaff_x26[2],0,unaff_x26[5]);
                                        if (-1 < uVar8) {
                                            piStack_a0 = unaff_x26 + 0xc;
                                            uStack_a8 = unaff_x23;
                                            mutex_lock();
                                            uVar8 = *(unaff_x26 + 0x5c);
                                            if (uVar8 != 0) {
                                                uVar17 = 0;
                                                piStack_90 = unaff_x26;
                                                do {
                                                    unaff_x25 = unaff_x26[10];
                                                    unaff_x19 = uVar17;
                                                    if (*(unaff_x25 + uVar17 * 200 + 0x10) == 4) {
                                                        piVar23 = unaff_x25 + unaff_x19 * 200;
                                                        uStack_88 = _segment.ehdr[0x29];
                                                        unaff_x21 = piVar23[1];
                                                        pcStack_80 = *(uStack_88 + 8);
                                                        puStack_98 = *(*piVar23 + 0x2f0);
                                                        __cfi_slowpath_diag(0x3fc582948b8475f2,pcStack_80,0x80008f0);
                                                        iVar12 = (*piVar23)[0xe];
                                                        if (iVar12 == 0) {
                                                            iVar12 = **piVar23;
                                                        }
                                                        uVar1 = *(piVar23 + 0x14);
                                                        unaff_x20 = *(unaff_x21 + 2);
                                                        unaff_x26 = _segment.ehdr[0x2a];
                                                        unaff_x23 = *(piVar23 + 0x18);
                                                        unaff_x27 = piVar23 + 0xc4;
                                                        unaff_x24 = *unaff_x27;
                                                        iVar12 = strrchr(iVar12,0x3a);
                                                        in_x5 = iVar12 + 1;
                                                        uVar8 = (*pcStack_80)(unaff_x26,uVar1,unaff_x20,unaff_x23,
                                                                              unaff_x24);
                                                        uVar24 = uStack_88;
                                                        if (uVar8 < 0) {
                                                            uVar24 = uVar8;
                                                            uVar20 = 0x8000ea6;
                                                        }
                                                        else {
                                                            unaff_x20 = *(uStack_88 + 0x38);
                                                            __cfi_slowpath_diag(0xd7b8b83d5cf4b610,unaff_x20,0x8000910
                                                                               );
                                                            unaff_x24 = 200;
                                                            uVar8 = (*unaff_x20)(_segment.ehdr[0x2a],*(unaff_x21 + 2),
                                                                                 *unaff_x27,
                                                                                 *(unaff_x25 + unaff_x19 * 200 + 0x2c));
                                                            unaff_x23 = uVar24;
                                                            if (uVar8 < 0) {
                                                                uVar24 = uVar8;
                                                                uVar20 = 0x80013ed;
                                                            }
                                                            else {
                                                                unaff_x20 = *(uVar24 + 0x40);
                                                                __cfi_slowpath_diag(0xd7b8b83d5cf4b610,unaff_x20,
                                                                                    0x8000930);
                                                                uVar8 = (*unaff_x20)(_segment.ehdr[0x2a],
                                                                                     *(unaff_x21 + 2),*unaff_x27,
                                                                                     *(unaff_x25 + unaff_x19 * 200 +
                                                                                      0x30));
                                                                if (uVar8 < 0) {
                                                                    uVar24 = uVar8;
                                                                    uVar20 = 0x800180a;
                                                                }
                                                                else {
                                                                    unaff_x20 = *(uVar24 + 0x48);
                                                                    __cfi_slowpath_diag(0xd7b8b83d5cf4b610,unaff_x20,
                                                                                        0x8000950);
                                                                    uVar8 = (*unaff_x20)(_segment.ehdr[0x2a],
                                                                                         *(unaff_x21 + 2),*unaff_x27,
                                                                                         *(unaff_x25 + unaff_x19 * 200 +
                                                                                          0x34));
                                                                    if (uVar8 < 0) {
                                                                        uVar24 = uVar8;
                                                                        uVar20 = 0x8000f52;
                                                                    }
                                                                    else {
                                                                        unaff_x20 = *(uVar24 + 0x50);
                                                                        __cfi_slowpath_diag(0xd7b8b83d5cf4b610,
                                                                                            unaff_x20,0x8000970);
                                                                        uVar8 = (*unaff_x20)(_segment.ehdr[0x2a],
                                                                                             *(unaff_x21 + 2),
                                                                                             *unaff_x27,
                                                                                             *(unaff_x25 +
                                                                                               unaff_x19 * 200 + 0x44));
                                                                        if (uVar8 < 0) {
                                                                            uVar24 = uVar8;
                                                                            uVar20 = 0x800179e;
                                                                        }
                                                                        else {
                                                                            unaff_x20 = *(uVar24 + 0x58);
                                                                            __cfi_slowpath_diag(0xd7b8b83d5cf4b610,
                                                                                                unaff_x20,0x8000990);
                                                                            uVar8 = (*unaff_x20)(_segment.ehdr[0x2a],
                                                                                                 *(unaff_x21 + 2),
                                                                                                 *unaff_x27,
                                                                                                 *(unaff_x25 +
                                                                                                   unaff_x19 * 200 +
                                                                                                  0x48));
                                                                            if (uVar8 < 0) {
                                                                                uVar24 = uVar8;
                                                                                uVar20 = 0x8000ddc;
                                                                            }
                                                                            else {
                                                                                unaff_x20 = *(uVar24 + 0x60);
                                                                                __cfi_slowpath_diag(0xd7b8b83d5cf4b610,
                                                                                                    unaff_x20,0x80009b0
                                                                                                   );
                                                                                uVar8 = (*unaff_x20)(_segment.ehdr[0x2a]
                                                                                                     ,*(unaff_x21 + 2)
                                                                                                     ,*unaff_x27,
                                                                                                     *(unaff_x25 +
                                                                                                       unaff_x19 * 200 +
                                                                                                      0x38));
                                                                                if (uVar8 < 0) {
                                                                                    uVar24 = uVar8;
                                                                                    uVar20 = 0x80017ca;
                                                                                }
                                                                                else {
                                                                                    unaff_x20 = *(uVar24 + 0x68);
                                                                                    __cfi_slowpath_diag(
                                                            0xd7b8b83d5cf4b610,unaff_x20,0x80009d0);
                                                            uVar8 = (*unaff_x20)(_segment.ehdr[0x2a],*(unaff_x21 + 2),
                                                                                 *unaff_x27,
                                                                                 *(unaff_x25 + unaff_x19 * 200 + 0x3c));
                                                            if (uVar8 < 0) {
                                                                uVar24 = uVar8;
                                                                uVar20 = 0x80014c1;
                                                            }
                                                            else {
                                                                unaff_x20 = *(uVar24 + 0x70);
                                                                __cfi_slowpath_diag(0xd7b8b83d5cf4b610,unaff_x20,
                                                                                    0x80009f0);
                                                                uVar8 = (*unaff_x20)(_segment.ehdr[0x2a],
                                                                                     *(unaff_x21 + 2),*unaff_x27,
                                                                                     *(unaff_x25 + unaff_x19 * 200 +
                                                                                      0x40));
                                                                if (uVar8 < 0) {
                                                                    uVar24 = uVar8;
                                                                    uVar20 = 0x80010c5;
                                                                }
                                                                else {
                                                                    unaff_x20 = *(uVar24 + 0x80);
                                                                    __cfi_slowpath_diag(0x51053f357f5ea05a,unaff_x20,
                                                                                        0x8000a10);
                                                                    iVar12 = unaff_x25 + unaff_x19 * 200;
                                                                    uVar8 = (*unaff_x20)(_segment.ehdr[0x2a],
                                                                                         *(unaff_x21 + 2),*unaff_x27,
                                                                                         *(iVar12 + 0x28),
                                                                                         *(iVar12 + 0x20));
                                                                    if (uVar8 < 0) {
                                                                        uVar24 = uVar8;
                                                                        uVar20 = 0x80010fa;
                                                                    }
                                                                    else {
                                                                        unaff_x20 = *(uVar24 + 0x88);
                                                                        __cfi_slowpath_diag(0xd7b8b83d5cf4b610,
                                                                                            unaff_x20,0x8000a30);
                                                                        uVar8 = (*unaff_x20)(_segment.ehdr[0x2a],
                                                                                             *(unaff_x21 + 2),
                                                                                             *unaff_x27,
                                                                                             *(unaff_x25 +
                                                                                               unaff_x19 * 200 + 0x4c));
                                                                        if (uVar8 < 0) {
                                                                            uVar24 = uVar8;
                                                                            uVar20 = 0x8001578;
                                                                        }
                                                                        else {
                                                                            unaff_x20 = *(uVar24 + 0x90);
                                                                            __cfi_slowpath_diag(0xd7b8b83d5cf4b610,
                                                                                                unaff_x20,0x8000a50);
                                                                            uVar8 = (*unaff_x20)(_segment.ehdr[0x2a],
                                                                                                 *(unaff_x21 + 2),
                                                                                                 *unaff_x27,
                                                                                                 *(unaff_x25 +
                                                                                                   unaff_x19 * 200 +
                                                                                                  0x50));
                                                                            if (-1 < uVar8) {
                                                                                unaff_x20 = 0x1;
                                                                                uVar8 = *(piStack_90 + 0x5c);
                                                                                unaff_x26 = piStack_90;
                                                                                goto code_r0x080036fc;
                                                                            }
                                                                            uVar24 = uVar8;
                                                                            uVar20 = 0x800183e;
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
                                                        _printk(uVar20,*puStack_98);
                                                        _printk(0x800192d,uVar24);
                                                        mutex_unlock(piStack_a0);
                                                        goto code_r0x08003c38;
                                                    }
code_r0x080036fc:
                                                    uVar17 = uVar17 + 1;
                                                } while (uVar17 < uVar8);
                                            }
                                            mutex_unlock(piStack_a0);
                                            piVar23 = _segment.ehdr;
                                            unaff_x23 = uStack_a8;
                                            goto code_r0x0800354c;
                                        }
                                        uVar24 = uVar8;
                                        uVar20 = 0x8001002;
                                    }
                                }
                            }
                            _printk(uVar20,*unaff_x19);
                            uVar20 = 0x8000f20;
                            goto code_r0x08003ce8;
                        }
code_r0x0800354c:
                        unaff_x24 = 200;
                        unaff_x23 = unaff_x23 + 1;
                    } while (unaff_x23 != 4);
                    unaff_x19 = *(pcStack_b0 + 0x78);
                    __cfi_slowpath_diag(0x17f4128a1da16962,unaff_x19,0x8000810);
                    uVar8 = (*unaff_x19)(_segment.ehdr[0x2a],_segment.ehdr[0x2b]);
                    uVar24 = uVar8;
                    if (uVar8 < 0) {
                        _printk(0x8001278);
                        goto code_r0x08003c38;
                    }
                    if (unaff_x20 != 0) {
                        unaff_x19 = *(pcStack_b0 + 0xa0);
                        __cfi_slowpath_diag(0x6ac5a6004ef664b6,unaff_x19,0x8000830);
                        uVar8 = (*unaff_x19)(_segment.ehdr[0x2a]);
                        uVar24 = uVar8;
                        if (uVar8 < 0) {
                            uVar20 = 0x800119b;
                            goto code_r0x08003ce8;
                        }
                    }
                }
                mutex_unlock(obj.memlat_lock);
            }
            else {
                uVar24 = pcVar19 & 0xffffffff;
            }
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_68) {
        return uVar24;
    }
    iVar9 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_memlat_probe;
    pcStack_108 = sym.qcom_memlat_probe;
    uStack_d0 = 0x8000000;
    iVar12 = sp_el0;
    piVar23 = iVar9 + 0x10;
    iStack_118 = *(iVar12 + 0x5e0);
    puStack_110 = &stack0xffffffffffffffa0;
    uStack_100 = uVar24;
    puStack_f8 = unaff_x27;
    piStack_f0 = unaff_x26;
    iStack_e8 = unaff_x25;
    uStack_e0 = unaff_x24;
    uStack_d8 = unaff_x23;
    puStack_c8 = unaff_x21;
    pcStack_c0 = unaff_x20;
    pcStack_b8 = unaff_x19;
    piVar10 = of_device_get_match_data(piVar23);
    if (piVar10 == NULL) {
        iVar5 = 3;
code_r0x080049b4:
        _dev_err(piVar23,"Invalid memlat mon type specified: %u\n",iVar5);
        uVar21 = 0xffffffea;
    }
    else {
        iVar5 = *piVar10;
        if (iVar5 == 2) {
            iVar12 = *(*(iVar9 + 0x70) + 0x98);
            if (iVar12 == 0) {
                pcVar16 = "Mon probe called without memlat_grp inited.\n";
                goto code_r0x08004ba0;
            }
            uVar20 = *(iVar9 + 0x300);
            mutex_lock();
            iVar22 = *(iVar12 + 0x50);
            uVar24 = *(iVar12 + 0x5c);
            piVar11 = iVar22 + uVar24 * 200;
            *piVar11 = piVar23;
            piVar11[1] = iVar12;
            iVar5 = sym.get_mask_and_mpidr_from_pdev(iVar9,piVar11 + 3,piVar11 + 0x14);
            if (iVar5 == 0) {
                __sw_hweight64(piVar11[3]);
                iVar13 = of_find_property(*(iVar9 + 0x300),"qcom,sampling-enabled",0);
                if (iVar13 != 0) {
                    mutex_lock(obj.memlat_lock);
                    if (*(_segment.ehdr + 0x141) == '\0') {
                        iVar13 = *_segment.ehdr;
                        uVar8 = cpumask_next(0xffffffff,__cpu_possible_mask);
                        *in_x5 = extraout_x8;
                        if (uVar8 < extraout_x8) {
                            do {
                                iVar14 = devm_kmalloc(iVar13,0x230,0xdc0);
                                if (iVar14 == 0) goto code_r0x08003fac;
                                if (0x1f < uVar8) goto code_r0x08004c18;
                                *(obj.sampling_stats + *(__per_cpu_offset + uVar8 * 8)) = iVar14;
                                *(iVar14 + 0x200) = 0;
                                uVar8 = cpumask_next(uVar8,__cpu_possible_mask);
                                *in_x5 = extraout_x8_00;
                            } while (uVar8 < extraout_x8_00);
                        }
                        iVar14 = alloc_workqueue(0x8000f1d,0x4000e,1,"memlat_wq");
                        piVar11 = _segment.ehdr;
                        _segment.ehdr[0x15] = iVar14;
                        if (iVar14 == 0) {
                            _dev_err(iVar13,"Couldn\'t create memlat workqueue.\n");
                        }
                        else {
                            piVar11[0xf] = 0xfffffffe0;
                            piVar11[0x10] = piVar11 + 0x10;
                            piVar11[0x11] = piVar11 + 0x10;
                            piVar11[0x12] = sym.memlat_update_work.ced2387b2ffe06d71748357bedbe93a2.cfi_jt;
                            hrtimer_init(piVar11 + 0x17,1,1);
                            _segment.ehdr[0x1c] = sym.memlat_hrtimer_handler.ced2387b2ffe06d71748357bedbe93a2.cfi_jt;
                            tracepoint_probe_register
                                      (__tracepoint_android_vh_scheduler_tick,
                                       sym.memlat_sched_tick_cb.ced2387b2ffe06d71748357bedbe93a2.cfi_jt,0);
                            tracepoint_probe_register
                                      (__tracepoint_android_vh_jiffies_update,
                                       sym.memlat_jiffies_update_cb.ced2387b2ffe06d71748357bedbe93a2.cfi_jt,0);
                            qcom_pmu_idle_register(reloc.memlat_pmu_idle_cb.ced2387b2ffe06d71748357bedbe93a2.cfi_jt);
                        }
code_r0x08003fac:
                        *(_segment.ehdr + 0x141) = 1;
                    }
                    mutex_unlock(obj.memlat_lock);
                    iVar13 = iVar22 + uVar24 * 200;
                    *(iVar13 + 0x10) = *(iVar13 + 0x10) | 1;
                }
                iVar13 = of_find_property(*(iVar9 + 0x300),"qcom,threadlat-enabled",0);
                if (iVar13 != 0) {
                    iVar13 = iVar22 + uVar24 * 200;
                    *(iVar13 + 0x10) = *(iVar13 + 0x10) | 2;
                }
                iVar13 = of_find_property(*(iVar9 + 0x300),"qcom,cpucp-enabled",0);
                if (iVar13 != 0) {
                    iVar13 = iVar22 + uVar24 * 200;
                    *(iVar13 + 0x10) = *(iVar13 + 0x10) | 4;
                    *(iVar12 + 0x1c) = 1;
                }
                if (*(iVar22 + uVar24 * 200 + 0x10) == 0) {
                    _dev_err(piVar23,"No types configured for mon!\n");
                    uVar21 = 0xffffffed;
                }
                else {
                    iVar13 = of_find_property(*(iVar9 + 0x300),"qcom,compute-mon",0);
                    if (iVar13 != 0) {
                        *(iVar22 + uVar24 * 200 + 0xc0) = 1;
                    }
                    iVar13 = iVar22 + uVar24 * 200;
                    *(iVar13 + 0x2c) = 400;
                    *(iVar13 + 0x34) = 0;
                    *(iVar13 + 0x44) = 0x61a800000064;
                    *(iVar13 + 0x3c) = 0x138800001388;
                    iVar13 = of_parse_phandle(uVar20,"qcom,cpufreq-memfreq-tbl",0);
                    if (iVar13 != 0) {
                        uVar20 = of_parse_phandle(uVar20,"qcom,cpufreq-memfreq-tbl",0);
                    }
                    iVar13 = of_get_next_child(uVar20,0);
                    if (iVar13 != 0) {
                        iVar5 = 0;
                        do {
                            iVar13 = of_get_next_child(uVar20,iVar13);
                            iVar5 = iVar5 + -1;
                        } while (iVar13 != 0);
                        if (iVar5 != 0) {
                            uVar20 = qcom_dcvs_get_ddr_child_node(uVar20);
                        }
                    }
                    uStack_120 = 0;
                    iVar13 = of_find_property(uVar20,"qcom,cpufreq-memfreq-tbl",&uStack_120 + 4);
                    if (iVar13 != 0) {
                        uVar8 = uStack_120._4_4_;
                        iVar5 = uStack_120._4_4_ >> 2;
                        bVar4 = 3 < uStack_120._4_4_;
                        uStack_120 = CONCAT44(iVar5,uStack_120);
                        if ((bVar4) && ((uVar8 >> 2 & 1) == 0)) {
                            if (iVar5 < 0) {
                                iVar5 = iVar5 + 1;
                            }
                            uVar17 = iVar5 >> 1;
                            piVar10 = devm_kmalloc(piVar23,-(uVar17 + 1 >> 0x1f) & 0xfffffff800000000 | uVar17 + 1 << 3
                                                   ,0xdc0);
                            if (piVar10 != NULL) {
                                if (uVar8 < 8) {
                                    uVar21 = 0;
                                }
                                else {
                                    uVar8 = uVar17;
                                    if (uVar17 < 2) {
                                        uVar8 = 1;
                                    }
                                    uVar21 = uVar8;
                                    uVar15 = 0;
                                    do {
                                        iVar5 = of_property_read_u32_index
                                                          (uVar20,"qcom,cpufreq-memfreq-tbl",uVar15 & 0xffffffff,
                                                           &uStack_120);
                                        if (iVar5 < 0) goto code_r0x080049cc;
                                        piVar10[uVar15] = uStack_120 / 1000;
                                        iVar5 = of_property_read_u32_index
                                                          (uVar20,"qcom,cpufreq-memfreq-tbl",uVar15 + 1 & 0xffffffff,
                                                           &uStack_120);
                                        if (iVar5 < 0) goto code_r0x080049cc;
                                        iVar13 = uVar15 + 2;
                                        piVar10[uVar15 + 1] = uStack_120;
                                        uVar15 = uVar15 + 2;
                                    } while (uVar21 * 2 - iVar13 != 0);
                                }
                                iVar14 = iVar22 + uVar24 * 200;
                                *(iVar22 + uVar24 * 200 + 0x28) = uVar17;
                                piVar10[uVar21 * 2] = 0;
                                *(iVar14 + 0x20) = piVar10;
                                iVar13 = -8;
                                if (*piVar10 != 0) {
                                    iVar13 = 0;
                                }
                                piVar18 = piVar10 + -1;
                                uVar1 = *(piVar10 + iVar13 + 4);
                                *(iVar14 + 0x4c) = uVar1;
                                *(iVar14 + 0x54) = uVar1;
                                do {
                                    piVar10 = piVar18 + 1;
                                    piVar18 = piVar18 + 2;
                                } while (1 < *piVar10 + 1U);
                                iVar13 = -8;
                                if (*piVar10 != 0) {
                                    iVar13 = 0;
                                }
                                iVar14 = iVar22 + uVar24 * 200;
                                uVar2 = *(piVar18 + iVar13);
                                *(iVar14 + 0x50) = uVar2;
                                *(iVar14 + 0x58) = uVar2;
                                *(iVar14 + 0x5c) = uVar1;
                                iVar9 = *(iVar9 + 0x80);
                                if (*(iVar14 + 0xc0) == '\0') {
                                    if (iVar9 == 0) {
                                        iVar9 = *piVar23;
                                    }
                                    pcVar19 = obj.memlat_mon_ktype;
                                }
                                else {
                                    if (iVar9 == 0) {
                                        iVar9 = *piVar23;
                                    }
                                    pcVar19 = obj.compute_mon_ktype;
                                }
                                uVar15 = kobject_init_and_add(iVar14 + 0x60,pcVar19,*(iVar12 + 8),iVar9);
                                uVar21 = uVar15 & 0xffffffff;
                                if (-1 < uVar15) {
                                    iVar5 = *(iVar12 + 0x5c);
                                    *(iVar12 + 0x5c) = iVar5 + 1;
                                    *(iVar22 + uVar24 * 200 + 0xc4) = iVar5;
                                    goto code_r0x080045a8;
                                }
                                _dev_err(piVar23,"failed to init memlat mon kobj: %d\n",uVar21);
                                kobject_put(iVar14 + 0x60);
                                goto code_r0x08004b50;
                            }
                        }
                    }
code_r0x080049cc:
                    *(iVar22 + uVar24 * 200 + 0x20) = 0;
                    _dev_err(piVar23,"error importing cpufreq-memfreq table!\n");
                    uVar21 = 0xffffffea;
                }
            }
            else {
                _dev_err(piVar23,"Mon missing cpulist\n");
                uVar21 = 0xffffffed;
                *(iVar12 + 0x58) = *(iVar12 + 0x58) + -1;
code_r0x080045a8:
                if ((((_segment.ehdr[0x26] <= *(_segment.ehdr + 0x134)) &&
                     ((iVar9 = _segment.ehdr[0x22], iVar9 == 0 || (*(iVar9 + 0x58) <= *(iVar9 + 0x5c))))) &&
                    ((iVar9 = _segment.ehdr[0x23], iVar9 == 0 || (*(iVar9 + 0x58) <= *(iVar9 + 0x5c))))) &&
                   (((iVar9 = _segment.ehdr[0x24], iVar9 == 0 || (*(iVar9 + 0x58) <= *(iVar9 + 0x5c))) &&
                    ((iVar9 = _segment.ehdr[0x25], iVar9 == 0 || (*(iVar9 + 0x58) <= *(iVar9 + 0x5c))))))) {
                    *(_segment.ehdr + 0x142) = 1;
                }
            }
code_r0x08004b50:
            mutex_unlock(iVar12 + 0x60);
code_r0x08004b58:
            if (-1 < uVar21) {
code_r0x08004b5c:
                uVar21 = 0;
                goto code_r0x08004bc0;
            }
        }
        else if (iVar5 == 1) {
            uStack_120 = 3;
            uStack_124 = 3;
            iVar12 = of_parse_phandle(*(iVar9 + 0x300),"qcom,target-dev",0);
            if (iVar12 == 0) {
                _dev_err(piVar23,"Unable to find target-dev for grp\n");
                uVar21 = 0xffffffea;
                goto code_r0x08004bac;
            }
            uVar8 = of_property_read_variable_u32_array(iVar12,"qcom,dcvs-hw-type",&uStack_120,1,0);
            uVar24 = uStack_120 & 0xffffffff;
            if ((uVar8 < 0) || (3 < uStack_120)) {
                uVar8 = uVar8 & uVar8 >> 0x1f;
                pcVar16 = "invalid dcvs hw_type=%d, ret=%d\n";
            }
            else {
                piVar11 = devm_kmalloc(piVar23,0xf0,0xdc0);
                if (piVar11 == NULL) goto code_r0x080049fc;
                *(piVar11 + 2) = uStack_120;
                *piVar11 = piVar23;
                uVar21 = qcom_dcvs_kobject_get();
                piVar11[1] = uVar21;
                if (0xfffffffffffff000 < uVar21) {
                    _dev_err(piVar23,"error getting kobj from qcom_dcvs: %d\n",uVar21 & 0xffffffff);
                    iVar5 = uVar21;
joined_r0x08004aec:
                    if (iVar5 != 0) goto code_r0x08004b58;
code_r0x08004964:
                    uVar20 = *(iVar9 + 0x300);
                    iVar12 = of_get_next_available_child(uVar20,0);
                    if (iVar12 != 0) {
                        iVar5 = 0;
                        do {
                            iVar12 = of_get_next_available_child(uVar20,iVar12);
                            iVar5 = iVar5 + -1;
                        } while (iVar12 != 0);
                        goto code_r0x08004994;
                    }
                    goto code_r0x08004b5c;
                }
                iVar12 = of_parse_phandle(*(iVar9 + 0x300),"qcom,sampling-path",0);
                if (iVar12 == 0) {
                    uVar8 = 3;
code_r0x0800463c:
                    uVar20 = *(iVar9 + 0x300);
                    *(piVar11 + 0x14) = uVar8;
                    iVar12 = of_parse_phandle(uVar20,"qcom,threadlat-path",0);
                    if (iVar12 == 0) {
                        *(piVar11 + 3) = 3;
                        if (2 < uStack_124) {
                            pcVar16 = "error: no dcvs voting paths\n";
                            goto code_r0x08004ba0;
                        }
                        uVar8 = 0;
                        uVar17 = *(piVar11 + 0x14);
joined_r0x080046b8:
                        if (uVar17 == 1) {
code_r0x080046bc:
                            *in_x5 = uVar8;
                            *(piVar11 + 6) = 1;
                            iVar12 = __sw_hweight64(__cfi_slowpath_diag);
                            uVar24 = iVar12 * 4 + 4U & 0x3fffffffc;
                            if (iVar12 < 9) {
                                uVar24 = 0x24;
                            }
                            iVar12 = devm_kmalloc(piVar23,uVar24,0xdc0);
                            piVar11[7] = iVar12;
                        }
                        uVar20 = *(iVar9 + 0x300);
                        iVar12 = of_get_next_available_child(uVar20,0);
                        if (iVar12 != 0) {
                            uVar8 = 0;
                            do {
                                uVar8 = uVar8 + 1;
                                iVar12 = of_get_next_available_child(uVar20,iVar12);
                            } while (iVar12 != 0);
                            if (uVar8 != 0) {
                                iVar12 = devm_kmalloc(piVar23,uVar8 * 200,0xdc0);
                                piVar11[10] = iVar12;
                                if (iVar12 == 0) goto code_r0x080049fc;
                                *(piVar11 + 0xb) = uVar8;
                                *(piVar11 + 0x5c) = 0;
                                __mutex_init(piVar11 + 0xc,"&memlat_grp->mons_lock",obj.memlat_lock);
                                iVar5 = of_property_read_variable_u32_array
                                                  (*(iVar9 + 0x300),"qcom,miss-ev",&uStack_120 + 4,1,0);
                                if (iVar5 < 0) {
                                    _dev_err(piVar23,"Cache miss event missing for grp: %d\n",iVar5);
                                    uVar21 = 0xffffffea;
                                    goto code_r0x08004bac;
                                }
                                uVar20 = *(iVar9 + 0x300);
                                *(piVar11 + 8) = uStack_120._4_4_;
                                iVar5 = of_property_read_variable_u32_array
                                                  (uVar20,"qcom,access-ev",&uStack_120 + 4,1,0);
                                if (-1 < iVar5) {
                                    *(piVar11 + 9) = uStack_120._4_4_;
                                }
                                iVar5 = of_property_read_variable_u32_array
                                                  (*(iVar9 + 0x300),"qcom,wb-ev",&uStack_120 + 4,1,0);
                                if (-1 < iVar5) {
                                    *(piVar11 + 0x44) = uStack_120._4_4_;
                                }
                                uVar8 = cpumask_next(0xffffffff,__cpu_possible_mask);
                                *in_x5 = extraout_w8_01;
                                if (uVar8 < extraout_w8_01) {
                                    do {
                                        iVar5 = piVar11[8];
                                        uStack_120 = CONCAT44(iVar5,uStack_120);
                                        if ((iVar5 != 0) &&
                                           (uVar24 = qcom_pmu_event_supported(iVar5,uVar8), uVar24 != 0)) {
code_r0x08004870:
                                            uVar21 = uVar24 & 0xffffffff;
                                            iVar5 = uVar24;
                                            if (iVar5 == -0x205) goto code_r0x08004bac;
                                            _dev_err(piVar23,"ev=%lu not found on cpu%d: %d\n",uStack_120._4_4_,uVar8
                                                     ,uVar21);
                                            goto joined_r0x08004aec;
                                        }
                                        iVar5 = *(piVar11 + 0x44);
                                        uStack_120 = CONCAT44(iVar5,uStack_120);
                                        if ((iVar5 != 0) &&
                                           (uVar24 = qcom_pmu_event_supported(iVar5,uVar8), uVar24 != 0))
                                        goto code_r0x08004870;
                                        iVar5 = piVar11[9];
                                        uStack_120 = CONCAT44(iVar5,uStack_120);
                                        if ((iVar5 != 0) &&
                                           (uVar24 = qcom_pmu_event_supported(iVar5,uVar8), uVar24 != 0))
                                        goto code_r0x08004870;
                                        uVar8 = cpumask_next(uVar8,__cpu_possible_mask);
                                        *in_x5 = extraout_w8_02;
                                    } while (uVar8 < extraout_w8_02);
                                }
                                kobject_init_and_add(piVar11 + 0x12,obj.memlat_grp_ktype,piVar11[1],"memlat");
                                mutex_lock(obj.memlat_lock);
                                piVar3 = _segment.ehdr;
                                *(_segment.ehdr + 0x134) = *(_segment.ehdr + 0x134) + 1;
                                if (3 < uStack_120) goto code_r0x08004c18;
                                piVar3[(uStack_120 & 0xffffffff) + 0x22] = piVar11;
                                if (((piVar3[0x28] == '\0') && (piVar3[0x26] <= *(piVar3 + 0x134))) &&
                                   (((((piVar3[0x22] != 0 && (*(piVar3[0x22] + 0x30) != '\0')) ||
                                      ((piVar3[0x23] != 0 && (*(piVar3[0x23] + 0x30) != '\0')))) ||
                                     ((piVar3[0x24] != 0 && (*(piVar3[0x24] + 0x30) != '\0')))) ||
                                    ((piVar3[0x25] != 0 && (*(piVar3[0x25] + 0x30) != '\0')))))) {
                                    piVar3[0x27] = 0;
                                    *(piVar3 + 0x28) = 1;
                                }
                                mutex_unlock(obj.memlat_lock);
                                *(iVar9 + 0xa8) = piVar11;
                                goto code_r0x08004964;
                            }
                        }
                        pcVar16 = "No mons provided!\n";
                        goto code_r0x08004ba0;
                    }
                    uVar8 = of_property_read_variable_u32_array(iVar12,"qcom,dcvs-path-type",&uStack_124,1,0);
                    uVar24 = uStack_124;
                    if ((-1 < uVar8) && (uStack_124 < 3)) {
                        *(piVar11 + 3) = uStack_124;
                        uVar17 = uStack_124;
                        if (*(piVar11 + 0x14) != 1) goto joined_r0x080046b8;
                        goto code_r0x080046bc;
                    }
                }
                else {
                    uVar8 = of_property_read_variable_u32_array(iVar12,"qcom,dcvs-path-type",&uStack_124,1,0);
                    uVar24 = uStack_124;
                    if ((-1 < uVar8) && (uStack_124 < 3)) {
                        if (uStack_124 == 1) {
                            pcVar16 = "memlat_fp";
                        }
                        else {
                            pcVar16 = *(iVar9 + 0x80);
                            if (pcVar16 == NULL) {
                                pcVar16 = *piVar23;
                            }
                        }
                        uVar24 = qcom_dcvs_register_voter(pcVar16,uStack_120);
                        uVar21 = uVar24 & 0xffffffff;
                        uVar8 = uStack_124;
                        if (uVar24 < 0) {
                            _dev_err(piVar23,"qcom dcvs registration error: %d\n",uVar21);
                            goto code_r0x08004bac;
                        }
                        goto code_r0x0800463c;
                    }
                }
                uVar8 = uVar8 & uVar8 >> 0x1f;
                pcVar16 = "invalid dcvs path: %d, ret=%d\n";
            }
            _dev_err(piVar23,pcVar16,uVar24,uVar8);
            uVar21 = 0xffffffea;
        }
        else {
            if (iVar5 != 0) goto code_r0x080049b4;
            if (_segment.ehdr != NULL) {
                _dev_err(piVar23,"only one memlat device allowed\n");
            }
            uStack_120 = uStack_120 & 0xffffffff;
            piVar11 = devm_kmalloc(piVar23,0x160,0xdc0);
            if (piVar11 == NULL) {
code_r0x080049fc:
                uVar21 = 0xfffffff4;
            }
            else {
                uVar20 = *(iVar9 + 0x300);
                *piVar11 = piVar23;
                *(piVar11 + 0x16) = 8;
                *(piVar11 + 0x2b) = 8;
                iVar12 = of_get_next_available_child(uVar20,0);
                if (iVar12 == 0) {
                    *(piVar11 + 0x26) = 0;
                    pcVar16 = "No memlat grps provided!\n";
                }
                else {
                    iVar5 = 0;
                    do {
                        iVar12 = of_get_next_available_child(uVar20,iVar12);
                        iVar5 = iVar5 + -1;
                    } while (iVar12 != 0);
                    *(piVar11 + 0x26) = -iVar5;
                    if (iVar5 != 0) {
                        iVar5 = of_property_read_variable_u32_array
                                          (*(iVar9 + 0x300),"qcom,inst-ev",&uStack_120 + 4,1,0);
                        if (iVar5 < 0) {
                            iVar5 = 8;
                            uStack_120 = CONCAT44(8,uStack_120);
                        }
                        else {
                            iVar5 = uStack_120._4_4_;
                        }
                        uVar20 = *(iVar9 + 0x300);
                        *(piVar11 + 0xd) = iVar5;
                        iVar6 = of_property_read_variable_u32_array(uVar20,"qcom,cyc-ev",&uStack_120 + 4,1,0);
                        if (iVar6 < 0) {
                            iVar6 = 0x11;
                            uStack_120 = CONCAT44(0x11,uStack_120);
                        }
                        else {
                            iVar6 = uStack_120._4_4_;
                        }
                        uVar20 = *(iVar9 + 0x300);
                        *(piVar11 + 0x6c) = iVar6;
                        iVar7 = of_property_read_variable_u32_array(uVar20,"qcom,fe-stall-ev",&uStack_120 + 4,1,0);
                        if (-1 < iVar7) {
                            *(piVar11 + 0xe) = uStack_120._4_4_;
                        }
                        iVar7 = of_property_read_variable_u32_array
                                          (*(iVar9 + 0x300),"qcom,be-stall-ev",&uStack_120 + 4,1,0);
                        if (-1 < iVar7) {
                            *(piVar11 + 0x74) = uStack_120._4_4_;
                        }
                        uVar8 = cpumask_next(0xffffffff,__cpu_possible_mask);
                        *in_x5 = extraout_w8;
                        if (uVar8 < extraout_w8) {
                            do {
                                uStack_120 = CONCAT44(iVar5,uStack_120);
                                if ((iVar5 != 0) && (uVar24 = qcom_pmu_event_supported(iVar5,uVar8), uVar24 != 0)) {
code_r0x080044c4:
                                    uVar21 = uVar24 & 0xffffffff;
                                    iVar5 = uVar24;
                                    if (iVar5 == -0x205) goto code_r0x08004bac;
                                    _dev_err(piVar23,"ev=%lu not found on cpu%d: %d\n",uStack_120._4_4_,uVar8,uVar21
                                            );
                                    goto joined_r0x080044ec;
                                }
                                uStack_120 = CONCAT44(iVar6,uStack_120);
                                if ((iVar6 != 0) && (uVar24 = qcom_pmu_event_supported(iVar6,uVar8), uVar24 != 0))
                                goto code_r0x080044c4;
                                iVar7 = piVar11[0xe];
                                uStack_120 = CONCAT44(iVar7,uStack_120);
                                if ((iVar7 != 0) && (uVar24 = qcom_pmu_event_supported(iVar7,uVar8), uVar24 != 0))
                                goto code_r0x080044c4;
                                iVar7 = *(piVar11 + 0x74);
                                uStack_120 = CONCAT44(iVar7,uStack_120);
                                if ((iVar7 != 0) && (uVar24 = qcom_pmu_event_supported(iVar7,uVar8), uVar24 != 0))
                                goto code_r0x080044c4;
                                uVar8 = cpumask_next(uVar8,__cpu_possible_mask);
                                *in_x5 = extraout_w8_00;
                            } while (uVar8 < extraout_w8_00);
                        }
                        uVar21 = qcom_dcvs_kobject_get(4);
                        if (uVar21 < 0xfffffffffffff001) {
                            uVar8 = kobject_init_and_add
                                              (piVar11 + 1,obj.memlat_settings_ktype,uVar21,"memlat_settings");
                            if (uVar8 < 0) {
                                uVar21 = uVar8;
                                _dev_err(piVar23,"failed to init memlat settings kobj: %d\n",uVar21);
                                kobject_put(piVar11 + 1);
                                goto code_r0x08004bac;
                            }
                        }
                        else {
                            _dev_err(piVar23,"error getting kobj from qcom_dcvs: %d\n",uVar21 & 0xffffffff);
                            iVar5 = uVar21;
joined_r0x080044ec:
                            piVar11 = _segment.ehdr;
                            if (iVar5 != 0) goto code_r0x08004b58;
                        }
                        _segment.ehdr = piVar11;
                        uVar20 = *(iVar9 + 0x300);
                        iVar12 = of_get_next_available_child(uVar20,0);
                        if (iVar12 == 0) goto code_r0x08004b5c;
                        iVar5 = 0;
                        do {
                            iVar12 = of_get_next_available_child(uVar20,iVar12);
                            iVar5 = iVar5 + -1;
                        } while (iVar12 != 0);
code_r0x08004994:
                        if (iVar5 != 0) {
                            of_platform_populate(*(iVar9 + 0x300),0,0,piVar23);
                        }
                        goto code_r0x08004b5c;
                    }
                    pcVar16 = "No memlat grps provided!\n";
                }
code_r0x08004ba0:
                _dev_err(piVar23,pcVar16);
                uVar21 = 0xffffffed;
            }
        }
code_r0x08004bac:
        _dev_err(piVar23,"Failure to probe memlat device: %d\n",uVar21 & 0xffffffff);
    }
code_r0x08004bc0:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_118) {
        return uVar21 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x08004c18:
    //WARNING: Does not return
    pcVar19 = SoftwareBreakpoint(0x5512,0x8004c1c);
    (*pcVar19)();
}


// ===== sym.qcom_memlat_probe @ 0x08003cf8 (size 3876) =====

uint64_t sym.qcom_memlat_probe(int64_t arg1)

{
    int64_t *piVar1;
    uint32_t uVar2;
    uint uVar3;
    uint uVar4;
    int64_t *piVar5;
    code *pcVar6;
    bool bVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    uint32_t uVar11;
    int *piVar12;
    int64_t *piVar13;
    int64_t iVar14;
    int64_t iVar15;
    int64_t iVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    char *pcVar19;
    uint32_t *in_x5;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    uint32_t extraout_w8_01;
    uint32_t extraout_w8_02;
    ulong extraout_x8;
    ulong extraout_x8_00;
    int *piVar20;
    ulong *in_x18;
    ulong uVar21;
    uint64_t uVar22;
    int64_t iVar23;
    ulong unaff_x30;
    uint32_t uStack_74;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    piVar1 = arg1 + 0x10;
    iStack_68 = *(iVar14 + 0x5e0);
    piVar12 = of_device_get_match_data(piVar1);
    if (piVar12 == NULL) {
        iVar8 = 3;
code_r0x080049b4:
        _dev_err(piVar1,"Invalid memlat mon type specified: %u\n",iVar8);
        uVar22 = 0xffffffea;
    }
    else {
        iVar8 = *piVar12;
        if (iVar8 == 2) {
            iVar14 = *(*(arg1 + 0x70) + 0x98);
            if (iVar14 == 0) {
                pcVar19 = "Mon probe called without memlat_grp inited.\n";
                goto code_r0x08004ba0;
            }
            uVar21 = *(arg1 + 0x300);
            mutex_lock();
            iVar23 = *(iVar14 + 0x50);
            uVar17 = *(iVar14 + 0x5c);
            piVar13 = iVar23 + uVar17 * 200;
            *piVar13 = piVar1;
            piVar13[1] = iVar14;
            iVar8 = sym.get_mask_and_mpidr_from_pdev(arg1,piVar13 + 3,piVar13 + 0x14);
            if (iVar8 == 0) {
                __sw_hweight64(piVar13[3]);
                iVar15 = of_find_property(*(arg1 + 0x300),"qcom,sampling-enabled",0);
                if (iVar15 != 0) {
                    mutex_lock(obj.memlat_lock);
                    if (*(_segment.ehdr + 0x141) == '\0') {
                        iVar15 = *_segment.ehdr;
                        uVar11 = cpumask_next(0xffffffff,__cpu_possible_mask);
                        *in_x5 = extraout_x8;
                        if (uVar11 < extraout_x8) {
                            do {
                                iVar16 = devm_kmalloc(iVar15,0x230,0xdc0);
                                if (iVar16 == 0) goto code_r0x08003fac;
                                if (0x1f < uVar11) goto code_r0x08004c18;
                                *(obj.sampling_stats + *(__per_cpu_offset + uVar11 * 8)) = iVar16;
                                *(iVar16 + 0x200) = 0;
                                uVar11 = cpumask_next(uVar11,__cpu_possible_mask);
                                *in_x5 = extraout_x8_00;
                            } while (uVar11 < extraout_x8_00);
                        }
                        iVar16 = alloc_workqueue(0x8000f1d,0x4000e,1,"memlat_wq");
                        piVar13 = _segment.ehdr;
                        _segment.ehdr[0x15] = iVar16;
                        if (iVar16 == 0) {
                            _dev_err(iVar15,"Couldn\'t create memlat workqueue.\n");
                        }
                        else {
                            piVar13[0xf] = 0xfffffffe0;
                            piVar13[0x10] = piVar13 + 0x10;
                            piVar13[0x11] = piVar13 + 0x10;
                            piVar13[0x12] = sym.memlat_update_work.ced2387b2ffe06d71748357bedbe93a2.cfi_jt;
                            hrtimer_init(piVar13 + 0x17,1,1);
                            _segment.ehdr[0x1c] = sym.memlat_hrtimer_handler.ced2387b2ffe06d71748357bedbe93a2.cfi_jt;
                            tracepoint_probe_register
                                      (__tracepoint_android_vh_scheduler_tick,
                                       sym.memlat_sched_tick_cb.ced2387b2ffe06d71748357bedbe93a2.cfi_jt,0);
                            tracepoint_probe_register
                                      (__tracepoint_android_vh_jiffies_update,
                                       sym.memlat_jiffies_update_cb.ced2387b2ffe06d71748357bedbe93a2.cfi_jt,0);
                            qcom_pmu_idle_register(reloc.memlat_pmu_idle_cb.ced2387b2ffe06d71748357bedbe93a2.cfi_jt);
                        }
code_r0x08003fac:
                        *(_segment.ehdr + 0x141) = 1;
                    }
                    mutex_unlock(obj.memlat_lock);
                    iVar15 = iVar23 + uVar17 * 200;
                    *(iVar15 + 0x10) = *(iVar15 + 0x10) | 1;
                }
                iVar15 = of_find_property(*(arg1 + 0x300),"qcom,threadlat-enabled",0);
                if (iVar15 != 0) {
                    iVar15 = iVar23 + uVar17 * 200;
                    *(iVar15 + 0x10) = *(iVar15 + 0x10) | 2;
                }
                iVar15 = of_find_property(*(arg1 + 0x300),"qcom,cpucp-enabled",0);
                if (iVar15 != 0) {
                    iVar15 = iVar23 + uVar17 * 200;
                    *(iVar15 + 0x10) = *(iVar15 + 0x10) | 4;
                    *(iVar14 + 0x1c) = 1;
                }
                if (*(iVar23 + uVar17 * 200 + 0x10) == 0) {
                    _dev_err(piVar1,"No types configured for mon!\n");
                    uVar22 = 0xffffffed;
                }
                else {
                    iVar15 = of_find_property(*(arg1 + 0x300),"qcom,compute-mon",0);
                    if (iVar15 != 0) {
                        *(iVar23 + uVar17 * 200 + 0xc0) = 1;
                    }
                    iVar15 = iVar23 + uVar17 * 200;
                    *(iVar15 + 0x2c) = 400;
                    *(iVar15 + 0x34) = 0;
                    *(iVar15 + 0x44) = 0x61a800000064;
                    *(iVar15 + 0x3c) = 0x138800001388;
                    iVar15 = of_parse_phandle(uVar21,"qcom,cpufreq-memfreq-tbl",0);
                    if (iVar15 != 0) {
                        uVar21 = of_parse_phandle(uVar21,"qcom,cpufreq-memfreq-tbl",0);
                    }
                    iVar15 = of_get_next_child(uVar21,0);
                    if (iVar15 != 0) {
                        iVar8 = 0;
                        do {
                            iVar15 = of_get_next_child(uVar21,iVar15);
                            iVar8 = iVar8 + -1;
                        } while (iVar15 != 0);
                        if (iVar8 != 0) {
                            uVar21 = qcom_dcvs_get_ddr_child_node(uVar21);
                        }
                    }
                    uStack_70 = 0;
                    iVar15 = of_find_property(uVar21,"qcom,cpufreq-memfreq-tbl",&uStack_70 + 4);
                    if (iVar15 != 0) {
                        uVar11 = uStack_70._4_4_;
                        iVar8 = uStack_70._4_4_ >> 2;
                        bVar7 = 3 < uStack_70._4_4_;
                        uStack_70 = CONCAT44(iVar8,uStack_70);
                        if ((bVar7) && ((uVar11 >> 2 & 1) == 0)) {
                            if (iVar8 < 0) {
                                iVar8 = iVar8 + 1;
                            }
                            uVar2 = iVar8 >> 1;
                            piVar12 = devm_kmalloc(piVar1,-(uVar2 + 1 >> 0x1f) & 0xfffffff800000000 | uVar2 + 1 << 3,
                                                   0xdc0);
                            if (piVar12 != NULL) {
                                if (uVar11 < 8) {
                                    uVar22 = 0;
                                }
                                else {
                                    uVar11 = uVar2;
                                    if (uVar2 < 2) {
                                        uVar11 = 1;
                                    }
                                    uVar22 = uVar11;
                                    uVar18 = 0;
                                    do {
                                        iVar8 = of_property_read_u32_index
                                                          (uVar21,"qcom,cpufreq-memfreq-tbl",uVar18 & 0xffffffff,
                                                           &uStack_70);
                                        if (iVar8 < 0) goto code_r0x080049cc;
                                        piVar12[uVar18] = uStack_70 / 1000;
                                        iVar8 = of_property_read_u32_index
                                                          (uVar21,"qcom,cpufreq-memfreq-tbl",uVar18 + 1 & 0xffffffff,
                                                           &uStack_70);
                                        if (iVar8 < 0) goto code_r0x080049cc;
                                        iVar15 = uVar18 + 2;
                                        piVar12[uVar18 + 1] = uStack_70;
                                        uVar18 = uVar18 + 2;
                                    } while (uVar22 * 2 - iVar15 != 0);
                                }
                                iVar16 = iVar23 + uVar17 * 200;
                                *(iVar23 + uVar17 * 200 + 0x28) = uVar2;
                                piVar12[uVar22 * 2] = 0;
                                *(iVar16 + 0x20) = piVar12;
                                iVar15 = -8;
                                if (*piVar12 != 0) {
                                    iVar15 = 0;
                                }
                                piVar20 = piVar12 + -1;
                                uVar3 = *(piVar12 + iVar15 + 4);
                                *(iVar16 + 0x4c) = uVar3;
                                *(iVar16 + 0x54) = uVar3;
                                do {
                                    piVar12 = piVar20 + 1;
                                    piVar20 = piVar20 + 2;
                                } while (1 < *piVar12 + 1U);
                                iVar15 = -8;
                                if (*piVar12 != 0) {
                                    iVar15 = 0;
                                }
                                iVar16 = iVar23 + uVar17 * 200;
                                uVar4 = *(piVar20 + iVar15);
                                *(iVar16 + 0x50) = uVar4;
                                *(iVar16 + 0x58) = uVar4;
                                *(iVar16 + 0x5c) = uVar3;
                                iVar15 = *(arg1 + 0x80);
                                if (*(iVar16 + 0xc0) == '\0') {
                                    if (iVar15 == 0) {
                                        iVar15 = *piVar1;
                                    }
                                    pcVar6 = obj.memlat_mon_ktype;
                                }
                                else {
                                    if (iVar15 == 0) {
                                        iVar15 = *piVar1;
                                    }
                                    pcVar6 = obj.compute_mon_ktype;
                                }
                                uVar18 = kobject_init_and_add(iVar16 + 0x60,pcVar6,*(iVar14 + 8),iVar15);
                                uVar22 = uVar18 & 0xffffffff;
                                if (-1 < uVar18) {
                                    iVar8 = *(iVar14 + 0x5c);
                                    *(iVar14 + 0x5c) = iVar8 + 1;
                                    *(iVar23 + uVar17 * 200 + 0xc4) = iVar8;
                                    goto code_r0x080045a8;
                                }
                                _dev_err(piVar1,"failed to init memlat mon kobj: %d\n",uVar22);
                                kobject_put(iVar16 + 0x60);
                                goto code_r0x08004b50;
                            }
                        }
                    }
code_r0x080049cc:
                    *(iVar23 + uVar17 * 200 + 0x20) = 0;
                    _dev_err(piVar1,"error importing cpufreq-memfreq table!\n");
                    uVar22 = 0xffffffea;
                }
            }
            else {
                _dev_err(piVar1,"Mon missing cpulist\n");
                uVar22 = 0xffffffed;
                *(iVar14 + 0x58) = *(iVar14 + 0x58) + -1;
code_r0x080045a8:
                if ((((_segment.ehdr[0x26] <= *(_segment.ehdr + 0x134)) &&
                     ((iVar23 = _segment.ehdr[0x22], iVar23 == 0 || (*(iVar23 + 0x58) <= *(iVar23 + 0x5c))))) &&
                    ((iVar23 = _segment.ehdr[0x23], iVar23 == 0 || (*(iVar23 + 0x58) <= *(iVar23 + 0x5c))))) &&
                   (((iVar23 = _segment.ehdr[0x24], iVar23 == 0 || (*(iVar23 + 0x58) <= *(iVar23 + 0x5c))) &&
                    ((iVar23 = _segment.ehdr[0x25], iVar23 == 0 || (*(iVar23 + 0x58) <= *(iVar23 + 0x5c))))))) {
                    *(_segment.ehdr + 0x142) = 1;
                }
            }
code_r0x08004b50:
            mutex_unlock(iVar14 + 0x60);
code_r0x08004b58:
            if (-1 < uVar22) {
code_r0x08004b5c:
                uVar22 = 0;
                goto code_r0x08004bc0;
            }
        }
        else if (iVar8 == 1) {
            uStack_70 = 3;
            uStack_74 = 3;
            iVar14 = of_parse_phandle(*(arg1 + 0x300),"qcom,target-dev",0);
            if (iVar14 == 0) {
                _dev_err(piVar1,"Unable to find target-dev for grp\n");
                uVar22 = 0xffffffea;
                goto code_r0x08004bac;
            }
            uVar11 = of_property_read_variable_u32_array(iVar14,"qcom,dcvs-hw-type",&uStack_70,1,0);
            uVar17 = uStack_70 & 0xffffffff;
            if ((uVar11 < 0) || (3 < uStack_70)) {
                uVar11 = uVar11 & uVar11 >> 0x1f;
                pcVar19 = "invalid dcvs hw_type=%d, ret=%d\n";
            }
            else {
                piVar13 = devm_kmalloc(piVar1,0xf0,0xdc0);
                if (piVar13 == NULL) goto code_r0x080049fc;
                *(piVar13 + 2) = uStack_70;
                *piVar13 = piVar1;
                uVar22 = qcom_dcvs_kobject_get();
                piVar13[1] = uVar22;
                if (0xfffffffffffff000 < uVar22) {
                    _dev_err(piVar1,"error getting kobj from qcom_dcvs: %d\n",uVar22 & 0xffffffff);
                    iVar8 = uVar22;
joined_r0x08004aec:
                    if (iVar8 != 0) goto code_r0x08004b58;
code_r0x08004964:
                    uVar21 = *(arg1 + 0x300);
                    iVar14 = of_get_next_available_child(uVar21,0);
                    if (iVar14 != 0) {
                        iVar8 = 0;
                        do {
                            iVar14 = of_get_next_available_child(uVar21,iVar14);
                            iVar8 = iVar8 + -1;
                        } while (iVar14 != 0);
                        goto code_r0x08004994;
                    }
                    goto code_r0x08004b5c;
                }
                iVar14 = of_parse_phandle(*(arg1 + 0x300),"qcom,sampling-path",0);
                if (iVar14 == 0) {
                    uVar11 = 3;
code_r0x0800463c:
                    uVar21 = *(arg1 + 0x300);
                    *(piVar13 + 0x14) = uVar11;
                    iVar14 = of_parse_phandle(uVar21,"qcom,threadlat-path",0);
                    if (iVar14 == 0) {
                        *(piVar13 + 3) = 3;
                        if (2 < uStack_74) {
                            pcVar19 = "error: no dcvs voting paths\n";
                            goto code_r0x08004ba0;
                        }
                        uVar11 = 0;
                        uVar2 = *(piVar13 + 0x14);
joined_r0x080046b8:
                        if (uVar2 == 1) {
code_r0x080046bc:
                            *in_x5 = uVar11;
                            *(piVar13 + 6) = 1;
                            iVar14 = __sw_hweight64(__cfi_slowpath_diag);
                            uVar17 = iVar14 * 4 + 4U & 0x3fffffffc;
                            if (iVar14 < 9) {
                                uVar17 = 0x24;
                            }
                            iVar14 = devm_kmalloc(piVar1,uVar17,0xdc0);
                            piVar13[7] = iVar14;
                        }
                        uVar21 = *(arg1 + 0x300);
                        iVar14 = of_get_next_available_child(uVar21,0);
                        if (iVar14 != 0) {
                            uVar11 = 0;
                            do {
                                uVar11 = uVar11 + 1;
                                iVar14 = of_get_next_available_child(uVar21,iVar14);
                            } while (iVar14 != 0);
                            if (uVar11 != 0) {
                                iVar14 = devm_kmalloc(piVar1,uVar11 * 200,0xdc0);
                                piVar13[10] = iVar14;
                                if (iVar14 == 0) goto code_r0x080049fc;
                                *(piVar13 + 0xb) = uVar11;
                                *(piVar13 + 0x5c) = 0;
                                __mutex_init(piVar13 + 0xc,"&memlat_grp->mons_lock",obj.memlat_lock);
                                iVar8 = of_property_read_variable_u32_array
                                                  (*(arg1 + 0x300),"qcom,miss-ev",&uStack_70 + 4,1,0);
                                if (iVar8 < 0) {
                                    _dev_err(piVar1,"Cache miss event missing for grp: %d\n",iVar8);
                                    uVar22 = 0xffffffea;
                                    goto code_r0x08004bac;
                                }
                                uVar21 = *(arg1 + 0x300);
                                *(piVar13 + 8) = uStack_70._4_4_;
                                iVar8 = of_property_read_variable_u32_array
                                                  (uVar21,"qcom,access-ev",&uStack_70 + 4,1,0);
                                if (-1 < iVar8) {
                                    *(piVar13 + 9) = uStack_70._4_4_;
                                }
                                iVar8 = of_property_read_variable_u32_array
                                                  (*(arg1 + 0x300),"qcom,wb-ev",&uStack_70 + 4,1,0);
                                if (-1 < iVar8) {
                                    *(piVar13 + 0x44) = uStack_70._4_4_;
                                }
                                uVar11 = cpumask_next(0xffffffff,__cpu_possible_mask);
                                *in_x5 = extraout_w8_01;
                                if (uVar11 < extraout_w8_01) {
                                    do {
                                        iVar8 = piVar13[8];
                                        uStack_70 = CONCAT44(iVar8,uStack_70);
                                        if ((iVar8 != 0) &&
                                           (uVar17 = qcom_pmu_event_supported(iVar8,uVar11), uVar17 != 0)) {
code_r0x08004870:
                                            uVar22 = uVar17 & 0xffffffff;
                                            iVar8 = uVar17;
                                            if (iVar8 == -0x205) goto code_r0x08004bac;
                                            _dev_err(piVar1,"ev=%lu not found on cpu%d: %d\n",uStack_70._4_4_,uVar11
                                                     ,uVar22);
                                            goto joined_r0x08004aec;
                                        }
                                        iVar8 = *(piVar13 + 0x44);
                                        uStack_70 = CONCAT44(iVar8,uStack_70);
                                        if ((iVar8 != 0) &&
                                           (uVar17 = qcom_pmu_event_supported(iVar8,uVar11), uVar17 != 0))
                                        goto code_r0x08004870;
                                        iVar8 = piVar13[9];
                                        uStack_70 = CONCAT44(iVar8,uStack_70);
                                        if ((iVar8 != 0) &&
                                           (uVar17 = qcom_pmu_event_supported(iVar8,uVar11), uVar17 != 0))
                                        goto code_r0x08004870;
                                        uVar11 = cpumask_next(uVar11,__cpu_possible_mask);
                                        *in_x5 = extraout_w8_02;
                                    } while (uVar11 < extraout_w8_02);
                                }
                                kobject_init_and_add(piVar13 + 0x12,obj.memlat_grp_ktype,piVar13[1],"memlat");
                                mutex_lock(obj.memlat_lock);
                                piVar5 = _segment.ehdr;
                                *(_segment.ehdr + 0x134) = *(_segment.ehdr + 0x134) + 1;
                                if (3 < uStack_70) goto code_r0x08004c18;
                                piVar5[(uStack_70 & 0xffffffff) + 0x22] = piVar13;
                                if (((piVar5[0x28] == '\0') && (piVar5[0x26] <= *(piVar5 + 0x134))) &&
                                   (((((piVar5[0x22] != 0 && (*(piVar5[0x22] + 0x30) != '\0')) ||
                                      ((piVar5[0x23] != 0 && (*(piVar5[0x23] + 0x30) != '\0')))) ||
                                     ((piVar5[0x24] != 0 && (*(piVar5[0x24] + 0x30) != '\0')))) ||
                                    ((piVar5[0x25] != 0 && (*(piVar5[0x25] + 0x30) != '\0')))))) {
                                    piVar5[0x27] = 0;
                                    *(piVar5 + 0x28) = 1;
                                }
                                mutex_unlock(obj.memlat_lock);
                                *(arg1 + 0xa8) = piVar13;
                                goto code_r0x08004964;
                            }
                        }
                        pcVar19 = "No mons provided!\n";
                        goto code_r0x08004ba0;
                    }
                    uVar11 = of_property_read_variable_u32_array(iVar14,"qcom,dcvs-path-type",&uStack_74,1,0);
                    uVar17 = uStack_74;
                    if ((-1 < uVar11) && (uStack_74 < 3)) {
                        *(piVar13 + 3) = uStack_74;
                        uVar2 = uStack_74;
                        if (*(piVar13 + 0x14) != 1) goto joined_r0x080046b8;
                        goto code_r0x080046bc;
                    }
                }
                else {
                    uVar11 = of_property_read_variable_u32_array(iVar14,"qcom,dcvs-path-type",&uStack_74,1,0);
                    uVar17 = uStack_74;
                    if ((-1 < uVar11) && (uStack_74 < 3)) {
                        if (uStack_74 == 1) {
                            pcVar19 = "memlat_fp";
                        }
                        else {
                            pcVar19 = *(arg1 + 0x80);
                            if (pcVar19 == NULL) {
                                pcVar19 = *piVar1;
                            }
                        }
                        uVar17 = qcom_dcvs_register_voter(pcVar19,uStack_70);
                        uVar22 = uVar17 & 0xffffffff;
                        uVar11 = uStack_74;
                        if (uVar17 < 0) {
                            _dev_err(piVar1,"qcom dcvs registration error: %d\n",uVar22);
                            goto code_r0x08004bac;
                        }
                        goto code_r0x0800463c;
                    }
                }
                uVar11 = uVar11 & uVar11 >> 0x1f;
                pcVar19 = "invalid dcvs path: %d, ret=%d\n";
            }
            _dev_err(piVar1,pcVar19,uVar17,uVar11);
            uVar22 = 0xffffffea;
        }
        else {
            if (iVar8 != 0) goto code_r0x080049b4;
            if (_segment.ehdr != NULL) {
                _dev_err(piVar1,"only one memlat device allowed\n");
            }
            uStack_70 = uStack_70 & 0xffffffff;
            piVar13 = devm_kmalloc(piVar1,0x160,0xdc0);
            if (piVar13 == NULL) {
code_r0x080049fc:
                uVar22 = 0xfffffff4;
            }
            else {
                uVar21 = *(arg1 + 0x300);
                *piVar13 = piVar1;
                *(piVar13 + 0x16) = 8;
                *(piVar13 + 0x2b) = 8;
                iVar14 = of_get_next_available_child(uVar21,0);
                if (iVar14 == 0) {
                    *(piVar13 + 0x26) = 0;
                    pcVar19 = "No memlat grps provided!\n";
                }
                else {
                    iVar8 = 0;
                    do {
                        iVar14 = of_get_next_available_child(uVar21,iVar14);
                        iVar8 = iVar8 + -1;
                    } while (iVar14 != 0);
                    *(piVar13 + 0x26) = -iVar8;
                    if (iVar8 != 0) {
                        iVar8 = of_property_read_variable_u32_array
                                          (*(arg1 + 0x300),"qcom,inst-ev",&uStack_70 + 4,1,0);
                        if (iVar8 < 0) {
                            iVar8 = 8;
                            uStack_70 = CONCAT44(8,uStack_70);
                        }
                        else {
                            iVar8 = uStack_70._4_4_;
                        }
                        uVar21 = *(arg1 + 0x300);
                        *(piVar13 + 0xd) = iVar8;
                        iVar9 = of_property_read_variable_u32_array(uVar21,"qcom,cyc-ev",&uStack_70 + 4,1,0);
                        if (iVar9 < 0) {
                            iVar9 = 0x11;
                            uStack_70 = CONCAT44(0x11,uStack_70);
                        }
                        else {
                            iVar9 = uStack_70._4_4_;
                        }
                        uVar21 = *(arg1 + 0x300);
                        *(piVar13 + 0x6c) = iVar9;
                        iVar10 = of_property_read_variable_u32_array(uVar21,"qcom,fe-stall-ev",&uStack_70 + 4,1,0);
                        if (-1 < iVar10) {
                            *(piVar13 + 0xe) = uStack_70._4_4_;
                        }
                        iVar10 = of_property_read_variable_u32_array
                                           (*(arg1 + 0x300),"qcom,be-stall-ev",&uStack_70 + 4,1,0);
                        if (-1 < iVar10) {
                            *(piVar13 + 0x74) = uStack_70._4_4_;
                        }
                        uVar11 = cpumask_next(0xffffffff,__cpu_possible_mask);
                        *in_x5 = extraout_w8;
                        if (uVar11 < extraout_w8) {
                            do {
                                uStack_70 = CONCAT44(iVar8,uStack_70);
                                if ((iVar8 != 0) && (uVar17 = qcom_pmu_event_supported(iVar8,uVar11), uVar17 != 0)) {
code_r0x080044c4:
                                    uVar22 = uVar17 & 0xffffffff;
                                    iVar8 = uVar17;
                                    if (iVar8 == -0x205) goto code_r0x08004bac;
                                    _dev_err(piVar1,"ev=%lu not found on cpu%d: %d\n",uStack_70._4_4_,uVar11,uVar22)
                                    ;
                                    goto joined_r0x080044ec;
                                }
                                uStack_70 = CONCAT44(iVar9,uStack_70);
                                if ((iVar9 != 0) && (uVar17 = qcom_pmu_event_supported(iVar9,uVar11), uVar17 != 0))
                                goto code_r0x080044c4;
                                iVar10 = piVar13[0xe];
                                uStack_70 = CONCAT44(iVar10,uStack_70);
                                if ((iVar10 != 0) && (uVar17 = qcom_pmu_event_supported(iVar10,uVar11), uVar17 != 0))
                                goto code_r0x080044c4;
                                iVar10 = *(piVar13 + 0x74);
                                uStack_70 = CONCAT44(iVar10,uStack_70);
                                if ((iVar10 != 0) && (uVar17 = qcom_pmu_event_supported(iVar10,uVar11), uVar17 != 0))
                                goto code_r0x080044c4;
                                uVar11 = cpumask_next(uVar11,__cpu_possible_mask);
                                *in_x5 = extraout_w8_00;
                            } while (uVar11 < extraout_w8_00);
                        }
                        uVar22 = qcom_dcvs_kobject_get(4);
                        if (uVar22 < 0xfffffffffffff001) {
                            uVar11 = kobject_init_and_add
                                               (piVar13 + 1,obj.memlat_settings_ktype,uVar22,"memlat_settings");
                            if (uVar11 < 0) {
                                uVar22 = uVar11;
                                _dev_err(piVar1,"failed to init memlat settings kobj: %d\n",uVar22);
                                kobject_put(piVar13 + 1);
                                goto code_r0x08004bac;
                            }
                        }
                        else {
                            _dev_err(piVar1,"error getting kobj from qcom_dcvs: %d\n",uVar22 & 0xffffffff);
                            iVar8 = uVar22;
joined_r0x080044ec:
                            piVar13 = _segment.ehdr;
                            if (iVar8 != 0) goto code_r0x08004b58;
                        }
                        _segment.ehdr = piVar13;
                        uVar21 = *(arg1 + 0x300);
                        iVar14 = of_get_next_available_child(uVar21,0);
                        if (iVar14 == 0) goto code_r0x08004b5c;
                        iVar8 = 0;
                        do {
                            iVar14 = of_get_next_available_child(uVar21,iVar14);
                            iVar8 = iVar8 + -1;
                        } while (iVar14 != 0);
code_r0x08004994:
                        if (iVar8 != 0) {
                            of_platform_populate(*(arg1 + 0x300),0,0,piVar1);
                        }
                        goto code_r0x08004b5c;
                    }
                    pcVar19 = "No memlat grps provided!\n";
                }
code_r0x08004ba0:
                _dev_err(piVar1,pcVar19);
                uVar22 = 0xffffffed;
            }
        }
code_r0x08004bac:
        _dev_err(piVar1,"Failure to probe memlat device: %d\n",uVar22 & 0xffffffff);
    }
code_r0x08004bc0:
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_68) {
        return uVar22 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x08004c18:
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x5512,0x8004c1c);
    (*pcVar6)();
}


// ===== sym.attr_show @ 0x08004c1c (size 148) =====

ulong sym.attr_show(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(arg2 + 0x10);
    if (pcVar2 == NULL) {
        uVar1 = 0xfffffffffffffffb;
    }
    else {
        if (0x15 < (pcVar2 + -0x80032e8 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2c1d832160b5d123,pcVar2,0x8000a70);
        }
        uVar1 = (*pcVar2)(arg1,arg2,arg3);
    }
    return uVar1;
}


// ===== sym.attr_store @ 0x08004cb0 (size 148) =====

ulong sym.attr_store(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(arg2 + 0x18);
    if (pcVar2 == NULL) {
        uVar1 = 0xfffffffffffffffb;
    }
    else {
        if (0x10 < (pcVar2 + -0x8003258 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xfaa7b7b8dc0fae98,pcVar2,0x8000a90);
        }
        uVar1 = (*pcVar2)(arg1,arg2,arg3,arg4);
    }
    return uVar1;
}


// ===== sym.show_sample_ms @ 0x08004d44 (size 68) =====

int64_t sym.show_sample_ms(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg1,0x1000,0x800104c,*(_segment.ehdr + 0xb0));
    return iVar1;
}


// ===== sym.store_sample_ms @ 0x08004d88 (size 164) =====

int64_t sym.store_sample_ms(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    puVar4 = &uStack_2c;
    uStack_2c = 0;
    iVar3 = kstrtouint(arg1,10,puVar4);
    if (iVar3 < 0) {
        arg2 = iVar3;
    }
    else {
        uVar1 = uStack_2c;
        if (uStack_2c < 5) {
            uVar1 = 4;
        }
        if (999 < uVar1) {
            uVar1 = 1000;
        }
        *(_segment.ehdr + 0xb0) = uVar1;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return arg2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.show_cpucp_sample_ms;
    iVar3 = scnprintf(puVar4,0x1000,"%lu\n",*(_segment.ehdr + 0x158));
    return iVar3;
}


// ===== sym.show_cpucp_sample_ms @ 0x08004e2c (size 68) =====

int64_t sym.show_cpucp_sample_ms(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg1,0x1000,"%lu\n",*(_segment.ehdr + 0x158));
    return iVar1;
}


// ===== sym.store_cpucp_sample_ms @ 0x08004e70 (size 332) =====

int64_t sym.store_cpucp_sample_ms(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    code *pcVar4;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    uchar extraout_q0_01 [16];
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_3c = 0;
    iVar3 = *(_segment.ehdr + 0x148);
    if (iVar3 == 0) {
        arg3 = -0x13;
    }
    else if ((((*(*(_segment.ehdr + 0x110) + 0x1c) != '\0') || (*(*(_segment.ehdr + 0x118) + 0x1c) != '\0')) ||
             (*(*(_segment.ehdr + 0x120) + 0x1c) != '\0')) || (arg1 = arg2, *(*(_segment.ehdr + 0x128) + 0x1c) != '\0')
            ) {
        puVar2 = &uStack_3c;
        arg1 = kstrtouint(arg2,10,puVar2);
        if (arg1 < 0) {
            arg3 = arg1;
            arg2 = puVar2;
            noname_1 = extraout_q0;
        }
        else {
            pcVar4 = *(iVar3 + 0x78);
            if (uStack_3c < 5) {
                uStack_3c = 4;
            }
            arg2 = 0x8000ab0;
            if (999 < uStack_3c) {
                uStack_3c = 1000;
            }
            __cfi_slowpath_diag(0x17f4128a1da16962,pcVar4,0x8000ab0);
            arg1 = (*pcVar4)(*(_segment.ehdr + 0x150),uStack_3c);
            iVar1 = arg1;
            if (iVar1 < 0) {
                arg1 = _printk(0x8001448,arg1 & 0xffffffff);
                arg3 = iVar1;
                noname_1 = extraout_q0_01;
            }
            else {
                *(_segment.ehdr + 0x158) = uStack_3c;
                noname_1 = extraout_q0_00;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return arg3;
    }
    __stack_chk_fail(noname_1,arg1);
    *extraout_x18 = sym.show_cpucp_log_level;
    iVar1 = scnprintf(arg2,0x1000,"%lu\n",*(_segment.ehdr + 0x15c));
    return iVar1;
}


// ===== sym.show_cpucp_log_level @ 0x08004fbc (size 68) =====

int64_t sym.show_cpucp_log_level(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg1,0x1000,"%lu\n",*(_segment.ehdr + 0x15c));
    return iVar1;
}


// ===== sym.store_cpucp_log_level @ 0x08005000 (size 300) =====

int64_t sym.store_cpucp_log_level(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    code *pcVar4;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    uchar extraout_q0_01 [16];
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_3c = 0;
    iVar3 = *(_segment.ehdr + 0x148);
    if (iVar3 == 0) {
        arg3 = -0x13;
    }
    else if ((((*(*(_segment.ehdr + 0x110) + 0x1c) != '\0') || (*(*(_segment.ehdr + 0x118) + 0x1c) != '\0')) ||
             (*(*(_segment.ehdr + 0x120) + 0x1c) != '\0')) || (arg1 = arg2, *(*(_segment.ehdr + 0x128) + 0x1c) != '\0')
            ) {
        puVar2 = &uStack_3c;
        arg1 = kstrtouint(arg2,10,puVar2);
        if (arg1 < 0) {
            arg3 = arg1;
            arg2 = puVar2;
            noname_1 = extraout_q0;
        }
        else {
            pcVar4 = *(iVar3 + 0xb0);
            arg2 = 0x8000ad0;
            __cfi_slowpath_diag(0x17f4128a1da16962,pcVar4,0x8000ad0);
            arg1 = (*pcVar4)(*(_segment.ehdr + 0x150),uStack_3c);
            iVar1 = arg1;
            if (iVar1 < 0) {
                arg1 = _printk(0x800171a,arg1 & 0xffffffff);
                arg3 = iVar1;
                noname_1 = extraout_q0_01;
            }
            else {
                *(_segment.ehdr + 0x15c) = uStack_3c;
                noname_1 = extraout_q0_00;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return arg3;
    }
    __stack_chk_fail(noname_1,arg1);
    *extraout_x18 = sym.show_flush_cpucp_log;
    iVar1 = scnprintf(arg2,0x1000,"Echo here to flush cpucp logs\n");
    return iVar1;
}


// ===== sym.show_flush_cpucp_log @ 0x0800512c (size 56) =====

int64_t sym.show_flush_cpucp_log(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg1,0x1000,"Echo here to flush cpucp logs\n");
    return iVar1;
}


// ===== sym.store_flush_cpucp_log @ 0x08005164 (size 156) =====

int64_t sym.store_flush_cpucp_log(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(_segment.ehdr + 0x148) == 0) {
        arg1 = -0x13;
    }
    else {
        pcVar2 = *(*(_segment.ehdr + 0x148) + 0xb8);
        __cfi_slowpath_diag(0x6ac5a6004ef664b6,pcVar2,0x8000af0);
        iVar1 = (*pcVar2)(*(_segment.ehdr + 0x150));
        if (iVar1 < 0) {
            _printk(0x80015a6,iVar1);
            arg1 = iVar1;
        }
    }
    return arg1;
}


// ===== sym.show_hlos_cpucp_offset @ 0x08005200 (size 268) =====

int64_t sym.show_hlos_cpucp_offset(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar5;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iStack_40 = 0;
    if (*(_segment.ehdr + 0x148) == 0) {
        iVar3 = -0x13;
        pcVar4 = arg1;
    }
    else {
        pcVar5 = *(*(_segment.ehdr + 0x148) + 0xc0);
        pcVar4 = 0x8000b10;
        __cfi_slowpath_diag(0x376863d1de02459b,pcVar5,0x8000b10);
        iVar2 = (*pcVar5)(*(_segment.ehdr + 0x150),&iStack_40);
        if (iVar2 < 0) {
            noname_1 = _printk(0x800189e);
            iVar3 = iVar2;
        }
        else {
            iVar3 = ktime_get();
            pcVar4 = "%ld\n";
            iVar3 = SUB168(SEXT816(iVar3) * SEXT816(-0x20c49ba5e353f7cf),8);
            iVar2 = scnprintf(arg1,0x1000,"%ld\n",((iVar3 >> 7) - (iVar3 >> 0x3f)) + iStack_40);
            iVar3 = iVar2;
            noname_1 = extraout_q0;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return iVar3;
    }
    iVar3 = __stack_chk_fail(noname_1,iVar3);
    *extraout_x18 = sym.show_sampling_cur_freq;
    iVar2 = scnprintf(pcVar4,0x1000,0x800104c,*(iVar3 + -0x70));
    return iVar2;
}


// ===== sym.show_sampling_cur_freq @ 0x0800530c (size 64) =====

int64_t sym.show_sampling_cur_freq(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x800104c,*(arg1 + -0x70));
    return iVar1;
}


// ===== sym.show_adaptive_cur_freq @ 0x0800534c (size 260) =====

int64_t sym.show_adaptive_cur_freq(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t iVar1;
    uint uVar2;
    int iVar3;
    int64_t iVar4;
    char *pcVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar6;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_3c = 0;
    if (*(arg1 + -0x74) == '\0') {
        uVar2 = *(arg1 + -0x6c);
    }
    else {
        if (*(_segment.ehdr + 0x148) == 0) {
            iVar4 = -0x13;
            pcVar5 = arg2;
            goto code_r0x08005404;
        }
        pcVar6 = *(*(_segment.ehdr + 0x148) + 0x28);
        __cfi_slowpath_diag(0x4e07fa4dc08e950d,pcVar6,0x8000b30);
        pcVar5 = NULL;
        iVar3 = (*pcVar6)(*(_segment.ehdr + 0x150),*(arg1 + -0x80),0,&uStack_3c);
        noname_1 = extraout_q0;
        uVar2 = uStack_3c;
        if (iVar3 < 0) {
            _printk(0x80018cc);
            iVar4 = iVar3;
            goto code_r0x08005404;
        }
    }
    pcVar5 = "%lu\n";
    iVar3 = scnprintf(noname_1,arg2,0x1000,"%lu\n",uVar2);
    iVar4 = iVar3;
code_r0x08005404:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_38) {
        iVar4 = __stack_chk_fail(iVar4);
        *extraout_x18 = sym.show_adaptive_high_freq;
        iVar3 = scnprintf(pcVar5,0x1000,0x800104c,*(iVar4 + -0x68));
        return iVar3;
    }
    return iVar4;
}


// ===== sym.show_adaptive_high_freq @ 0x08005450 (size 64) =====

int64_t sym.show_adaptive_high_freq(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x800104c,*(arg1 + -0x68));
    return iVar1;
}


// ===== sym.store_adaptive_high_freq @ 0x08005490 (size 280) =====

int64_t sym.store_adaptive_high_freq(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    code *pcVar4;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    puVar2 = &uStack_3c;
    uStack_3c = 0;
    iVar3 = *(_segment.ehdr + 0x148);
    iVar1 = kstrtouint(arg2,10,puVar2);
    if (iVar1 < 0) {
        arg3 = iVar1;
    }
    else {
        if (7999999 < uStack_3c) {
            uStack_3c = 8000000;
        }
        *(arg1 + -0x68) = uStack_3c;
        if ((*(arg1 + -0x74) != '\0') && (iVar3 != 0)) {
            pcVar4 = *(iVar3 + 0x20);
            __cfi_slowpath_diag(0xd7b8b83d5cf4b610,pcVar4,0x8000b50);
            puVar2 = NULL;
            iVar1 = (*pcVar4)(*(_segment.ehdr + 0x150),*(arg1 + -0x80),0,*(arg1 + -0x68));
            if (iVar1 < 0) {
                _printk(0x800132f,iVar1);
                arg3 = iVar1;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_adaptive_low_freq;
    iVar1 = scnprintf(puVar2,0x1000,0x800104c,*(iVar3 + -100));
    return iVar1;
}


// ===== sym.show_adaptive_low_freq @ 0x080055a8 (size 64) =====

int64_t sym.show_adaptive_low_freq(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x800104c,*(arg1 + -100));
    return iVar1;
}


// ===== sym.store_adaptive_low_freq @ 0x080055e8 (size 280) =====

int64_t sym.store_adaptive_low_freq(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint32_t *puVar6;
    uint32_t *in_x5;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    uint64_t *extraout_x8;
    uint64_t *puVar7;
    uint64_t extraout_x9;
    uint64_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    code *pcVar10;
    code *pcVar11;
    char *unaff_x24;
    uint64_t unaff_x25;
    int64_t iVar12;
    uint64_t unaff_x28;
    ulong unaff_x30;
    uchar auVar13 [16];
    uint32_t uStack_ac;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    pcVar11 = 0x8000000;
    iStack_38 = *(iVar9 + 0x5e0);
    puVar6 = &uStack_3c;
    uStack_3c = 0;
    iVar9 = *(_segment.ehdr + 0x148);
    iVar3 = kstrtouint(arg2,10);
    if (iVar3 < 0) {
        arg3 = iVar3;
    }
    else {
        if (7999999 < uStack_3c) {
            uStack_3c = 8000000;
        }
        *(arg1 + -100) = uStack_3c;
        if ((*(arg1 + -0x74) != '\0') && (iVar9 != 0)) {
            pcVar10 = *(iVar9 + 0x18);
            __cfi_slowpath_diag(0xd7b8b83d5cf4b610,pcVar10,0x8000b70);
            puVar6 = NULL;
            iVar3 = (*pcVar10)(*(_segment.ehdr + 0x150),*(arg1 + -0x80),0,*(arg1 + -100));
            if (iVar3 < 0) {
                _printk(0x800132f,iVar3);
                arg3 = iVar3;
            }
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return arg3;
    }
    auVar13 = __stack_chk_fail();
    *extraout_x18 = sym.get_mask_and_mpidr_from_pdev;
    pcStack_98 = sym.get_mask_and_mpidr_from_pdev;
    iVar9 = sp_el0;
    iStack_a8 = *(iVar9 + 0x5e0);
    uStack_ac = 0;
    puStack_a0 = &stack0xffffffffffffffd0;
    iVar9 = of_parse_phandle(*(auVar13._0_8_ + 0x300),"qcom,cpulist",0);
    if (iVar9 == 0) {
        iVar12 = 0xffffffed;
        goto code_r0x08005784;
    }
    iVar12 = 0xffffffed;
    pcVar11 = __cpu_possible_mask;
    unaff_x25 = 1;
    unaff_x24 = "qcom,cpulist";
    do {
        uVar4 = cpumask_next(0xffffffff,pcVar11);
        *in_x5 = extraout_w8;
        if (extraout_w8 <= uVar4) goto code_r0x08005804;
        unaff_x28 = uVar4;
        while ((iVar5 = get_cpu_device(unaff_x28), iVar5 == 0 || (*(iVar5 + 0x2f0) != iVar9))) {
            uVar8 = cpumask_next(unaff_x28,pcVar11);
            *in_x5 = extraout_w8_00;
            unaff_x28 = uVar8 & 0xffffffff;
            if (extraout_w8_00 <= uVar8) goto code_r0x08005804;
        }
        puVar7 = auVar13._8_8_ + (unaff_x28 >> 3 & 0x1ffffff8);
        uVar8 = 1L << (unaff_x28 & 0x3f);
        while( true ) {
            Hint_Prefetch(puVar7,2,0,1);
            do {
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(puVar7,0x10);
                if (bVar2) {
                    *puVar7 = *puVar7 | uVar8;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
            smp_call_function_single
                      (unaff_x28 & 0xffffffff,sym.get_mpidr_cpu.ced2387b2ffe06d71748357bedbe93a2.cfi_jt,&uStack_ac,1)
            ;
            iVar12 = 0;
            *puVar6 = *puVar6 | 1L << (uStack_ac & 0x3f);
code_r0x08005804:
            uVar8 = unaff_x25 & 0xffffffff;
            unaff_x25 = unaff_x25 + 1;
            iVar9 = of_parse_phandle(*(auVar13._0_8_ + 0x300),unaff_x24,uVar8);
            unaff_x28 = unaff_x25;
            if (iVar9 != 0) break;
code_r0x08005784:
            iVar9 = sp_el0;
            if (*(iVar9 + 0x5e0) == iStack_a8) {
                return iVar12;
            }
            __stack_chk_fail();
            puVar7 = extraout_x8;
            uVar8 = extraout_x9;
        }
    } while( true );
}


// ===== sym.get_mask_and_mpidr_from_pdev @ 0x08005700 (size 440) =====

ulong sym.get_mask_and_mpidr_from_pdev(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    bool bVar2;
    uint32_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint32_t *in_x5;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    uint64_t *extraout_x8;
    uint64_t *puVar6;
    uint64_t extraout_x9;
    uint64_t uVar7;
    ulong *in_x18;
    code *unaff_x22;
    char *unaff_x24;
    uint64_t unaff_x25;
    ulong uVar8;
    uint64_t unaff_x28;
    ulong unaff_x30;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    uStack_6c = 0;
    iVar4 = of_parse_phandle(*(arg1 + 0x300),"qcom,cpulist",0);
    if (iVar4 == 0) {
        uVar8 = 0xffffffed;
        goto code_r0x08005784;
    }
    uVar8 = 0xffffffed;
    unaff_x22 = __cpu_possible_mask;
    unaff_x25 = 1;
    unaff_x24 = "qcom,cpulist";
    do {
        uVar3 = cpumask_next(0xffffffff,unaff_x22);
        *in_x5 = extraout_w8;
        if (extraout_w8 <= uVar3) goto code_r0x08005804;
        unaff_x28 = uVar3;
        while ((iVar5 = get_cpu_device(unaff_x28), iVar5 == 0 || (*(iVar5 + 0x2f0) != iVar4))) {
            uVar7 = cpumask_next(unaff_x28,unaff_x22);
            *in_x5 = extraout_w8_00;
            unaff_x28 = uVar7 & 0xffffffff;
            if (extraout_w8_00 <= uVar7) goto code_r0x08005804;
        }
        puVar6 = arg2 + (unaff_x28 >> 3 & 0x1ffffff8);
        uVar7 = 1L << (unaff_x28 & 0x3f);
        while( true ) {
            Hint_Prefetch(puVar6,2,0,1);
            do {
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(puVar6,0x10);
                if (bVar2) {
                    *puVar6 = *puVar6 | uVar7;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
            smp_call_function_single
                      (unaff_x28 & 0xffffffff,sym.get_mpidr_cpu.ced2387b2ffe06d71748357bedbe93a2.cfi_jt,&uStack_6c,1)
            ;
            uVar8 = 0;
            *arg3 = *arg3 | 1L << (uStack_6c & 0x3f);
code_r0x08005804:
            uVar7 = unaff_x25 & 0xffffffff;
            unaff_x25 = unaff_x25 + 1;
            iVar4 = of_parse_phandle(*(arg1 + 0x300),unaff_x24,uVar7);
            unaff_x28 = unaff_x25;
            if (iVar4 != 0) break;
code_r0x08005784:
            iVar4 = sp_el0;
            if (*(iVar4 + 0x5e0) == iStack_68) {
                return uVar8;
            }
            __stack_chk_fail();
            puVar6 = extraout_x8;
            uVar7 = extraout_x9;
        }
    } while( true );
}


// ===== sym.get_mpidr_cpu @ 0x080058b8 (size 24) =====

void sym.get_mpidr_cpu(int64_t arg1)

{
    ulong uVar1;
    
    uVar1 = mpidr_el1;
    *arg1 = uVar1 >> 8 & 0xff;
    return;
}


// ===== sym.memlat_update_work @ 0x080058d0 (size 696) =====

uint64_t sym.memlat_update_work(int64_t arg1)

{
    ulong uVar1;
    ulong in_tmp_ldXn;
    uint32_t uVar2;
    uint64_t uVar3;
    uint *in_x5;
    uint32_t uVar4;
    uint32_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar6;
    ulong *puVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong unaff_x30;
    uint64_t uStack_88;
    uint uStack_80;
    uint32_t auStack_78 [4];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iVar6 = 0;
    iStack_68 = *(iVar8 + 0x5e0);
    uVar1 = sp_el0;
    uStack_80 = 0;
    uStack_88 = 0;
    auStack_78[0] = 0;
    auStack_78[1] = 0;
    auStack_78[2] = 0;
    auStack_78[3] = 0;
    do {
        iVar8 = *(_segment.ehdr + iVar6 * 8 + 0x110);
        if (iVar8 != 0) {
            uVar2 = *(iVar8 + 0x5c);
            if (uVar2 != 0) {
                uVar4 = 0;
                do {
                    iVar9 = *(iVar8 + 0x50);
                    arg1 = iVar9 + uVar4 * 200;
                    if ((arg1 != 0) && ((*(iVar9 + uVar4 * 200 + 0x10) & 1) != 0)) {
                        arg1 = sym.calculate_mon_sampling_freq(arg1);
                        uVar5 = *(iVar9 + uVar4 * 200 + 0x5c);
                        if (uVar5 <= *(&stack0xffffffffffffff88 + iVar6 * 4)) {
                            uVar5 = *(&stack0xffffffffffffff88 + iVar6 * 4);
                        }
                        uVar2 = *(iVar8 + 0x5c);
                        *(&stack0xffffffffffffff88 + iVar6 * 4) = uVar5;
                    }
                    uVar4 = uVar4 + 1;
                } while (uVar4 < uVar2);
            }
            uVar2 = *(iVar8 + 0x28);
            uVar4 = *(iVar8 + 0x2c);
            if (uVar2 == 0 && uVar4 == 0) {
                if (*(iVar8 + 0x24) == 0) goto code_r0x08005940;
                uVar5 = *(&stack0xffffffffffffff88 + iVar6 * 4);
code_r0x080059e4:
                uVar4 = uVar2;
                if (uVar5 < uVar2) goto code_r0x080059f0;
            }
            else {
                uVar5 = *(&stack0xffffffffffffff88 + iVar6 * 4);
                if (uVar4 <= uVar5) goto code_r0x080059e4;
code_r0x080059f0:
                uVar2 = uVar4;
                *(&stack0xffffffffffffff88 + iVar6 * 4) = uVar2;
            }
            *(iVar8 + 0x24) = uVar2;
        }
code_r0x08005940:
        iVar6 = iVar6 + 1;
        if (iVar6 == 4) {
            *in_x5 = arg1;
            uVar2 = __sw_hweight64(__cfi_slowpath_diag);
            if (uVar2 < 9) {
                uVar2 = 8;
            }
            uVar3 = sym.update_memlat_fp_vote(uVar2,&stack0xffffffffffffff88);
            iVar6 = 0;
            do {
                puVar7 = *(_segment.ehdr + iVar6 * 8 + 0x110);
                if ((((puVar7 != NULL) && (uVar2 = *(&stack0xffffffffffffff88 + iVar6 * 4), *(puVar7 + 4) != uVar2)) &&
                    (*(puVar7 + 0x14) != 3)) && (*(puVar7 + 4) = uVar2, *(puVar7 + 6) == '\0')) {
                    uStack_88 = uVar2;
                    uStack_80 = iVar6;
                    iVar8 = (*puVar7)[0xe];
                    if (iVar8 == 0) {
                        iVar8 = **puVar7;
                    }
                    uVar3 = qcom_dcvs_update_votes(iVar8,&stack0xffffffffffffff78,1);
                    if (uVar3 < 0) {
                        uVar3 = _dev_err(*puVar7,"qcom dcvs err: %d\n",uVar3 & 0xffffffff);
                    }
                }
                iVar6 = iVar6 + 1;
            } while (iVar6 != 4);
            iVar6 = sp_el0;
            if (*(iVar6 + 0x5e0) == iStack_68) {
                return uVar3;
            }
            __stack_chk_fail();
            uVar1 = tpidr_el2;
            *extraout_x18 = 0x8005b78;
            sym.calculate_sampling_stats(in_tmp_ldXn);
            queue_work_on(0x20,*(_segment.ehdr + 0xa8),_segment.ehdr + 0x78);
            return 0;
        }
    } while( true );
}


// ===== sym.memlat_hrtimer_handler @ 0x08005b88 (size 64) =====

ulong sym.memlat_hrtimer_handler(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.calculate_sampling_stats();
    queue_work_on(0x20,*(_segment.ehdr + 0xa8),_segment.ehdr + 0x78);
    return 0;
}


// ===== sym.memlat_sched_tick_cb @ 0x08005bc8 (size 268) =====

void sym.memlat_sched_tick_cb(void)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = tpidr_el1;
    uVar1 = *(cpu_number + iVar4);
    if (uVar1 < 0x20) {
        arg1 = *(obj.sampling_stats + *(__per_cpu_offset + uVar1 * 8));
        iVar4 = ktime_get();
        if (*(_segment.ehdr + 0x142) != '\0') {
            uVar5 = _raw_spin_lock_irqsave(arg1 + 0x200);
            if (*(_segment.ehdr + 0xb0) * 1000000 <= (iVar4 - *(arg1 + 0x1f8)) + 2000000) {
                *(arg1 + 0x1f0) = iVar4;
                *(arg1 + 0x1e8) = 0;
                *(arg1 + 0x1e0) = 0;
                iVar3 = qcom_pmu_read_all_local(arg1 + 0x180);
                if ((iVar3 < 0) || (*(arg1 + 0x1e0) == 0)) {
                    _printk(0x8000e2f,uVar1,iVar3);
                }
                else {
                    sym.process_raw_ctrs(arg1);
                }
            }
            _raw_spin_unlock_irqrestore(arg1 + 0x200,uVar5);
        }
        return;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8005cd4);
    (*pcVar2)();
}


// ===== sym.memlat_jiffies_update_cb @ 0x08005cd8 (size 136) =====

void sym.memlat_jiffies_update_cb(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ktime_get();
    if ((*(_segment.ehdr + 0x142) != '\0') &&
       (*(_segment.ehdr + 0xb0) * 1000000 < (iVar1 - *(_segment.ehdr + 0x108)) + 2000000)) {
        hrtimer_start_range_ns(_segment.ehdr + 0xb8,100000,0,3);
        *(_segment.ehdr + 0x108) = iVar1;
    }
    return;
}


// ===== sym.calculate_mon_sampling_freq @ 0x08005d60 (size 532) =====

void sym.calculate_mon_sampling_freq(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    code *pcVar7;
    uint32_t uVar8;
    uint32_t *in_x5;
    uint32_t uVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    int64_t iVar12;
    ulong *in_x18;
    uint32_t uVar13;
    uint32_t *puVar14;
    uint32_t uVar15;
    uint32_t unaff_w26;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar14 = arg1 + 0x18;
    uVar11 = *puVar14;
    uVar10 = *(*(arg1 + 8) + 0x10);
    if (uVar10 < 4) {
        uVar4 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
        uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
        *in_x5 = unaff_w26;
        uVar9 = 0x20;
        if (uVar11 != 0) {
            uVar9 = LZCOUNT((uVar4 >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10) << 0x20);
        }
        uVar11 = cpumask_next(0xffffffff,puVar14);
        uVar8 = uVar11;
        uVar6 = 0;
        while (uVar8 < unaff_w26) {
            if (0x1f < uVar11) goto code_r0x08005f70;
            iVar12 = *(obj.sampling_stats + *(__per_cpu_offset + (uVar11 & 0xffffffff) * 8));
            if ((*(arg1 + 0xc0) == '\0') &&
               ((iVar1 = iVar12 + uVar10 * 4, uVar8 = *(iVar1 + 0x210), *(iVar1 + 0x220) < *(arg1 + 0x44) ||
                (*(arg1 + 0x48) < uVar8)))) {
                uVar2 = *(arg1 + 0x2c);
                uVar13 = uVar9;
                uVar15 = uVar6;
                if (uVar8 <= uVar2) {
                    uVar13 = *(iVar12 + 0x204);
                    uVar15 = uVar13;
                    if ((((*(arg1 + 0x38) != 0) && (*(arg1 + 0x40) < uVar13)) &&
                        (uVar3 = *(arg1 + 0x3c), uVar13 < uVar3)) &&
                       ((*(arg1 + 0x30) <= *(iVar12 + 0x208) || (*(arg1 + 0x34) <= *(iVar12 + 0x20c))))) {
                        uVar5 = 0;
                        if (uVar2 * 100 != 0) {
                            uVar5 = (uVar13 * (uVar2 - uVar8) * *(arg1 + 0x38)) / (uVar2 * 100);
                        }
                        uVar15 = uVar3;
                        if (uVar5 + uVar13 <= uVar3) {
                            uVar15 = uVar5 + uVar13;
                        }
                    }
                    goto code_r0x08005df0;
                }
            }
            else {
                uVar15 = *(iVar12 + 0x204);
code_r0x08005df0:
                uVar13 = uVar11;
                if (uVar15 <= uVar6) {
                    uVar13 = uVar9;
                    uVar15 = uVar6;
                }
            }
            uVar11 = cpumask_next(uVar11,puVar14);
            uVar9 = uVar13;
            uVar6 = uVar15;
            uVar8 = uVar11;
        }
        uVar10 = 0;
        if (*(arg1 + 0x20) != 0) {
            iVar12 = *(arg1 + 0x20) + -4;
            do {
                uVar10 = *(iVar12 + 4);
                iVar12 = iVar12 + 8;
                if (uVar10 == 0) break;
            } while (uVar10 < uVar6);
            iVar1 = -8;
            if (uVar10 != 0) {
                iVar1 = 0;
            }
            uVar10 = *(iVar12 + iVar1);
        }
        uVar8 = *(arg1 + 0x4c);
        if (uVar10 <= uVar8) {
            uVar10 = uVar8;
        }
        if (*(arg1 + 0x50) <= uVar10) {
            uVar10 = *(arg1 + 0x50);
        }
        if (((uVar6 != 0) || (*(arg1 + 0x5c) != uVar8)) && (0x1f < uVar9)) {
code_r0x08005f70:
    //WARNING: Does not return
            pcVar7 = SoftwareBreakpoint(0x5512,0x8005f74);
            (*pcVar7)();
        }
        *(arg1 + 0x5c) = uVar10;
    }
    return;
}


// ===== sym.update_memlat_fp_vote @ 0x08005ff8 (size 716) =====

//WARNING: Type propagation algorithm not settling

void sym.update_memlat_fp_vote(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t *in_x4;
    uint64_t uVar5;
    ulong *in_x18;
    uint64_t unaff_x20;
    uint32_t uVar6;
    uint64_t unaff_x21;
    int64_t iVar7;
    uint64_t uVar8;
    ulong unaff_x30;
    uint64_t uStack_b0;
    uint32_t auStack_a8 [4];
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    auStack_a8[0] = 0;
    auStack_a8[1] = 0;
    auStack_a8[2] = 0;
    auStack_a8[3] = 0;
    if (*(_segment.ehdr + 0x140) == '\0') goto code_r0x080061f4;
    unaff_x21 = arg1 & 0xffffffff;
    uVar6 = arg1;
    *in_x4 = arg1;
    uVar2 = __sw_hweight64();
    if (uVar2 < 9) {
        uVar2 = 8;
    }
    unaff_x20 = arg2;
    if (uVar2 + 1 < uVar6) goto code_r0x080061f4;
    uStack_b0 = daif;
    if ((uStack_b0 & 0x80) != 0) goto code_r0x08006094;
    while( true ) {
        uVar6 = unaff_x21;
        uVar8 = daif;
        daif = uVar8 | 0xc0;
        unaff_x20 = arg2;
code_r0x08006094:
        _raw_spin_lock(_segment.ehdr + 0x138);
        uVar8 = 0;
        uVar2 = 0;
        unaff_x21 = uVar6;
        do {
            iVar7 = *(_segment.ehdr + uVar8 * 8 + 0x110);
            if ((iVar7 != 0) && (*(iVar7 + 0x30) != '\0')) {
                uVar3 = *(unaff_x20 + uVar8 * 4);
                uVar5 = uVar3;
                uVar6 = 0;
                *(*(iVar7 + 0x38) + unaff_x21 * 4) = uVar3;
                *in_x4 = uVar5;
                while( true ) {
                    uVar3 = __sw_hweight64(uVar5 & 0xffffffff);
                    if (uVar3 < 9) {
                        uVar3 = 8;
                    }
                    if (uVar3 + 1 <= uVar6) break;
                    uVar5 = *(iVar7 + 0x38);
                    uVar3 = *(uVar5 + uVar6 * 4);
                    uVar6 = uVar6 + 1;
                    uVar1 = auStack_a8[uVar8];
                    *in_x4 = uVar5;
                    if (uVar3 <= uVar1) {
                        uVar3 = uVar1;
                    }
                    auStack_a8[uVar8] = uVar3;
                }
                if (auStack_a8[uVar8] != *(iVar7 + 0x34)) {
                    uVar2 = uVar2 | 1L << (uVar8 & 0x3f);
                }
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 != 4);
        if (uVar2 == 0) {
            _raw_spin_unlock(_segment.ehdr + 0x138);
            daif = uStack_b0;
        }
        else {
            _raw_spin_lock(_segment.ehdr + 0x13c);
            iVar7 = _segment.ehdr;
            unaff_x20 = uVar2;
            if ((uVar2 & 1) != 0) {
                *(*(_segment.ehdr + 0x110) + 0x34) = auStack_a8[0];
            }
            if ((uVar2 >> 1 & 1) != 0) {
                *(*(iVar7 + 0x118) + 0x34) = auStack_a8[1];
            }
            if ((uVar2 >> 2 & 1) != 0) {
                *(*(iVar7 + 0x120) + 0x34) = auStack_a8[2];
            }
            if ((uVar2 >> 3 & 1) != 0) {
                *(*(iVar7 + 0x128) + 0x34) = auStack_a8[3];
            }
            _raw_spin_unlock(iVar7 + 0x138);
            if ((uVar2 & 1) != 0) {
                uStack_90 = uStack_90 & 0xffffffff00000000;
                uStack_98 = CONCAT44(uStack_98._4_4_,auStack_a8[0]);
            }
            if ((uVar2 >> 1 & 1) != 0) {
                uStack_90 = CONCAT44(auStack_a8[1],uStack_90);
                uStack_88 = CONCAT44(1,uStack_88);
            }
            if ((uVar2 >> 2 & 1) != 0) {
                uStack_80 = CONCAT44(uStack_80._4_4_,auStack_a8[2]);
                uStack_78 = CONCAT44(uStack_78._4_4_,2);
            }
            if ((uVar2 >> 3 & 1) != 0) {
                uStack_78 = CONCAT44(auStack_a8[3],uStack_78);
                uStack_70 = CONCAT44(3,uStack_70);
            }
            iVar4 = qcom_dcvs_update_votes("memlat_fp",&uStack_98,uVar2,1);
            if (iVar4 < 0) {
                _printk(0x80015da,iVar4);
            }
            _raw_spin_unlock(_segment.ehdr + 0x13c);
            daif = uStack_b0;
        }
code_r0x080061f4:
        iVar7 = sp_el0;
        if (*(iVar7 + 0x5e0) == iStack_68) break;
        __stack_chk_fail();
        arg2 = unaff_x20;
    }
    return;
}


// ===== sym.calculate_sampling_stats @ 0x080062d8 (size 1488) =====

void sym.calculate_sampling_stats(void)

{
    uint uVar1;
    ulong uVar2;
    uint64_t uVar3;
    code *pcVar4;
    uint32_t uVar5;
    int64_t iVar6;
    ulong *in_x4;
    uint64_t uVar7;
    int iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    ulong *in_x18;
    int64_t iVar11;
    int64_t iVar12;
    int64_t *piVar13;
    int64_t *unaff_x26;
    uint64_t *puVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = ktime_get();
    iVar12 = *(_segment.ehdr + 0x100);
    *(_segment.ehdr + 0x100) = iVar6;
    uVar3 = daif;
    uVar5 = uVar3 & 0x80;
    if ((uVar3 & 0x80) == 0) {
        uVar5 = 0x60;
        uVar7 = daif;
        daif = uVar7 | 0xc0;
    }
    uVar5 = cpumask_next(uVar5,0xffffffff,__cpu_possible_mask);
    *in_x4 = unaff_x26;
    while (uVar5 < unaff_x26) {
        if (0x1f < uVar5) goto code_r0x080068a4;
        _raw_spin_lock(*(obj.sampling_stats + *(__per_cpu_offset + uVar5 * 8)) + 0x200);
        uVar5 = cpumask_next(uVar5,__cpu_possible_mask);
        *in_x4 = unaff_x26;
    }
    uVar5 = cpumask_next(0xffffffff,__cpu_possible_mask);
    if (uVar5 < unaff_x26) {
        uVar2 = sp_el0;
code_r0x08006438:
        if (uVar5 < 0x20) {
            piVar13 = *(obj.sampling_stats + *(__per_cpu_offset + uVar5 * 8));
            if (piVar13[0x3d] == '\0') {
                iVar11 = piVar13[0x3f];
                piVar13[0x3f] = piVar13[0x3e];
                iVar11 = piVar13[0x3e] - iVar11;
            }
            else {
                piVar13[0x3f] = iVar6;
                iVar11 = iVar6 - iVar12;
            }
            if (*(_segment.ehdr + 0x68) != 0) {
                piVar13[0x20] = piVar13[0x10] - *piVar13;
            }
            if (*(_segment.ehdr + 0x6c) != 0) {
                piVar13[0x21] = piVar13[0x11] - piVar13[1];
            }
            if (*(_segment.ehdr + 0x70) != 0) {
                piVar13[0x22] = piVar13[0x12] - piVar13[2];
            }
            if (*(_segment.ehdr + 0x74) != 0) {
                piVar13[0x23] = piVar13[0x13] - piVar13[3];
            }
            iVar9 = *(_segment.ehdr + 0x110);
            if (iVar9 != 0) {
                if (*(iVar9 + 0x40) != 0) {
                    piVar13[0x24] = piVar13[0x14] - piVar13[4];
                }
                if (*(iVar9 + 0x44) != 0) {
                    piVar13[0x25] = piVar13[0x15] - piVar13[5];
                }
                if (*(iVar9 + 0x48) != 0) {
                    piVar13[0x26] = piVar13[0x16] - piVar13[6];
                }
            }
            iVar9 = *(_segment.ehdr + 0x118);
            if (iVar9 != 0) {
                if (*(iVar9 + 0x40) != 0) {
                    piVar13[0x27] = piVar13[0x17] - piVar13[7];
                }
                if (*(iVar9 + 0x44) != 0) {
                    piVar13[0x28] = piVar13[0x18] - piVar13[8];
                }
                if (*(iVar9 + 0x48) != 0) {
                    piVar13[0x29] = piVar13[0x19] - piVar13[9];
                }
            }
            iVar9 = *(_segment.ehdr + 0x120);
            if (iVar9 != 0) {
                if (*(iVar9 + 0x40) != 0) {
                    piVar13[0x2a] = piVar13[0x1a] - piVar13[10];
                }
                if (*(iVar9 + 0x44) != 0) {
                    piVar13[0x2b] = piVar13[0x1b] - piVar13[0xb];
                }
                if (*(iVar9 + 0x48) != 0) {
                    piVar13[0x2c] = piVar13[0x1c] - piVar13[0xc];
                }
            }
            iVar9 = *(_segment.ehdr + 0x128);
            if (iVar9 != 0) {
                if (*(iVar9 + 0x40) != 0) {
                    piVar13[0x2d] = piVar13[0x1d] - piVar13[0xd];
                }
                if (*(iVar9 + 0x44) != 0) {
                    piVar13[0x2e] = piVar13[0x1e] - piVar13[0xe];
                }
                if (*(iVar9 + 0x48) != 0) {
                    piVar13[0x2f] = piVar13[0x1f] - piVar13[0xf];
                }
            }
            iVar9 = _segment.ehdr;
            uVar7 = piVar13[0x21];
            uVar1 = 0;
            if (iVar11 / 1000 != 0) {
                uVar1 = uVar7 / (iVar11 / 1000);
            }
            *(piVar13 + 0x204) = uVar1;
            if (*(iVar9 + 0x70) == 0) {
                iVar8 = 100;
            }
            else {
                uVar10 = 0;
                if (uVar7 != 0) {
                    uVar10 = 100 / uVar7;
                }
                iVar8 = 0;
                if (uVar7 != 0) {
                    iVar8 = (piVar13[0x22] * (100 - uVar10 * uVar7)) / uVar7;
                }
                iVar8 = iVar8 + piVar13[0x22] * uVar10;
            }
            *(piVar13 + 0x41) = iVar8;
            if (*(iVar9 + 0x74) == 0) {
                iVar8 = 100;
            }
            else {
                uVar10 = 0;
                if (uVar7 != 0) {
                    uVar10 = 100 / uVar7;
                }
                iVar8 = 0;
                if (uVar7 != 0) {
                    iVar8 = (piVar13[0x23] * (100 - uVar10 * uVar7)) / uVar7;
                }
                iVar8 = iVar8 + piVar13[0x23] * uVar10;
            }
            unaff_x26 = piVar13 + 0x42;
            puVar14 = piVar13 + 0x24;
            iVar11 = 0x110;
            *(piVar13 + 0x20c) = iVar8;
            iVar9 = *(iVar9 + 0x110);
            if (iVar9 == 0) goto code_r0x08006800;
            do {
                uVar7 = piVar13[0x20];
                *unaff_x26 = uVar7;
                uVar10 = *puVar14;
                if (uVar10 != 0) {
                    uVar1 = 0;
                    if (uVar10 != 0) {
                        uVar1 = (uVar7 & 0xffffffff) / uVar10;
                    }
                    *unaff_x26 = uVar1;
                }
                if ((*(iVar9 + 0x44) == 0) || (*(iVar9 + 0x48) == 0)) {
                    iVar8 = 0;
                }
                else {
                    uVar7 = puVar14[2];
                    uVar10 = 0;
                    if (uVar7 != 0) {
                        uVar10 = 100 / uVar7;
                    }
                    iVar8 = 0;
                    if (uVar7 != 0) {
                        iVar8 = ((100 - uVar10 * uVar7) * puVar14[1]) / uVar7;
                    }
                    iVar8 = iVar8 + puVar14[1] * uVar10;
                }
                *(unaff_x26 + 2) = iVar8;
                in_x4 = *puVar14;
                while( true ) {
                    if (iVar11 == 0x128) {
                        piVar13[0xc] = piVar13[0x1c];
                        piVar13[0xd] = piVar13[0x1d];
                        piVar13[0xe] = piVar13[0x1e];
                        piVar13[0xf] = piVar13[0x1f];
                        piVar13[8] = piVar13[0x18];
                        piVar13[9] = piVar13[0x19];
                        piVar13[10] = piVar13[0x1a];
                        piVar13[0xb] = piVar13[0x1b];
                        piVar13[4] = piVar13[0x14];
                        piVar13[5] = piVar13[0x15];
                        piVar13[6] = piVar13[0x16];
                        piVar13[7] = piVar13[0x17];
                        *piVar13 = piVar13[0x10];
                        piVar13[1] = piVar13[0x11];
                        piVar13[2] = piVar13[0x12];
                        piVar13[3] = piVar13[0x13];
                        *in_x4 = unaff_x26;
                        uVar5 = cpumask_next(uVar5,__cpu_possible_mask);
                        if (uVar5 < unaff_x26) goto code_r0x08006438;
                        goto code_r0x0800680c;
                    }
                    iVar11 = iVar11 + 8;
                    unaff_x26 = unaff_x26 + 4;
                    puVar14 = puVar14 + 3;
                    iVar9 = *(_segment.ehdr + iVar11);
                    if (iVar9 != 0) break;
code_r0x08006800:
                    *unaff_x26 = 0;
                    *(unaff_x26 + 2) = 0;
                }
            } while( true );
        }
code_r0x080068a4:
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x5512,0x80068a8);
        (*pcVar4)();
    }
code_r0x0800680c:
    uVar5 = cpumask_next(0xffffffff,__cpu_possible_mask);
    if (uVar5 < unaff_x26) {
        do {
            if (0x1f < uVar5) goto code_r0x080068a4;
            _raw_spin_unlock(*(obj.sampling_stats + *(__per_cpu_offset + uVar5 * 8)) + 0x200);
            *in_x4 = 0x8000000;
            uVar5 = cpumask_next(uVar5,__cpu_possible_mask);
        } while (uVar5 < 0x8000000);
    }
    daif = uVar3;
    return;
}


// ===== sym.process_raw_ctrs @ 0x080068d4 (size 464) =====

void sym.process_raw_ctrs(int64_t arg1)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    code *pcVar4;
    int iVar5;
    ulong uVar6;
    int64_t iVar7;
    ulong *puVar8;
    
    iVar3 = _segment.ehdr;
    iVar1 = *(arg1 + 0x1e0);
    if (iVar1 != 0) {
        iVar5 = 0;
        do {
            if (iVar5 == 8) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x8006aa4);
                (*pcVar4)();
            }
            iVar2 = *(arg1 + 0x180 + iVar5 * 4);
            if (iVar2 == 0) {
                return;
            }
            uVar6 = *(arg1 + 0x180 + iVar5 * 8 + 0x20);
            if (iVar2 == *(iVar3 + 0x68)) {
                iVar7 = 0;
code_r0x08006958:
                puVar8 = arg1 + iVar7 * 8 + 0x80;
code_r0x08006960:
                *puVar8 = uVar6;
            }
            else {
                if (iVar2 == *(iVar3 + 0x6c)) {
                    iVar7 = 1;
                    goto code_r0x08006958;
                }
                if (iVar2 == *(iVar3 + 0x70)) {
                    iVar7 = 2;
                    goto code_r0x08006958;
                }
                if (iVar2 == *(iVar3 + 0x74)) {
                    iVar7 = 3;
                    goto code_r0x08006958;
                }
                iVar7 = *(iVar3 + 0x110);
                if (iVar7 != 0) {
                    if (iVar2 == *(iVar7 + 0x40)) {
                        iVar7 = 0;
                    }
                    else if (iVar2 == *(iVar7 + 0x44)) {
                        iVar7 = 1;
                    }
                    else {
                        if (iVar2 != *(iVar7 + 0x48)) goto code_r0x080069bc;
                        iVar7 = 2;
                    }
                    *(arg1 + iVar7 * 8 + 0xa0) = uVar6;
                }
code_r0x080069bc:
                iVar7 = *(iVar3 + 0x118);
                if (iVar7 != 0) {
                    if (iVar2 == *(iVar7 + 0x40)) {
                        iVar7 = 0;
                    }
                    else if (iVar2 == *(iVar7 + 0x44)) {
                        iVar7 = 1;
                    }
                    else {
                        if (iVar2 != *(iVar7 + 0x48)) goto code_r0x08006a04;
                        iVar7 = 2;
                    }
                    *(arg1 + iVar7 * 8 + 0xb8) = uVar6;
                }
code_r0x08006a04:
                iVar7 = *(iVar3 + 0x120);
                if (iVar7 != 0) {
                    if (iVar2 == *(iVar7 + 0x40)) {
                        iVar7 = 0;
                    }
                    else if (iVar2 == *(iVar7 + 0x44)) {
                        iVar7 = 1;
                    }
                    else {
                        if (iVar2 != *(iVar7 + 0x48)) goto code_r0x08006a4c;
                        iVar7 = 2;
                    }
                    *(arg1 + iVar7 * 8 + 0xd0) = uVar6;
                }
code_r0x08006a4c:
                iVar7 = *(iVar3 + 0x128);
                if (iVar7 != 0) {
                    if (iVar2 == *(iVar7 + 0x40)) {
                        iVar7 = 0;
                    }
                    else if (iVar2 == *(iVar7 + 0x44)) {
                        iVar7 = 1;
                    }
                    else {
                        if (iVar2 != *(iVar7 + 0x48)) goto code_r0x08006964;
                        iVar7 = 2;
                    }
                    puVar8 = arg1 + iVar7 * 8 + 0xe8;
                    goto code_r0x08006960;
                }
            }
code_r0x08006964:
            iVar5 = iVar5 + 1;
        } while (iVar1 != iVar5);
    }
    return;
}


// ===== sym.memlat_pmu_idle_cb @ 0x08006aa4 (size 208) =====

void sym.memlat_pmu_idle_cb(int64_t arg1,uint32_t arg2)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    code *pcVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    if (arg2 < 0x20) {
        *in_x18 = unaff_x30;
        if (*(_segment.ehdr + 0x142) != '\0') {
            arg1_00 = *(obj.sampling_stats + *(__per_cpu_offset + arg2 * 8));
            uVar5 = _raw_spin_lock_irqsave(arg1_00 + 0x200);
            *(arg1_00 + 0x180) = *arg1;
            uVar2 = *(arg1 + 0x20);
            uVar1 = *(arg1 + 8);
            uVar3 = *(arg1 + 0x10);
            *(arg1_00 + 0x198) = *(arg1 + 0x18);
            *(arg1_00 + 0x1a0) = uVar2;
            *(arg1_00 + 0x188) = uVar1;
            *(arg1_00 + 400) = uVar3;
            uVar2 = *(arg1 + 0x40);
            uVar1 = *(arg1 + 0x28);
            uVar3 = *(arg1 + 0x30);
            *(arg1_00 + 0x1b8) = *(arg1 + 0x38);
            *(arg1_00 + 0x1c0) = uVar2;
            *(arg1_00 + 0x1a8) = uVar1;
            *(arg1_00 + 0x1b0) = uVar3;
            uVar2 = *(arg1 + 0x60);
            uVar1 = *(arg1 + 0x48);
            uVar3 = *(arg1 + 0x50);
            *(arg1_00 + 0x1d8) = *(arg1 + 0x58);
            *(arg1_00 + 0x1e0) = uVar2;
            *(arg1_00 + 0x1c8) = uVar1;
            *(arg1_00 + 0x1d0) = uVar3;
            sym.process_raw_ctrs(arg1_00);
            *(arg1_00 + 0x1e8) = 1;
            _raw_spin_unlock_irqrestore(arg1_00 + 0x200,uVar5);
        }
        return;
    }
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x8006b74);
    (*pcVar4)();
}


// ===== sym.show_min_freq @ 0x08006b74 (size 64) =====

int64_t sym.show_min_freq(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x800104c,*(arg1 + -0x14));
    return iVar1;
}


// ===== sym.store_min_freq @ 0x08006bb4 (size 300) =====

int64_t sym.store_min_freq(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    code *pcVar4;
    int64_t iVar5;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    puVar2 = &uStack_4c;
    uStack_4c = 0;
    iVar5 = *(arg1 + -0x58);
    iVar3 = *(_segment.ehdr + 0x148);
    iVar1 = kstrtouint(arg2,10,puVar2);
    if (iVar1 < 0) {
        arg3 = iVar1;
    }
    else {
        if (uStack_4c <= *(arg1 + -0xc)) {
            uStack_4c = *(arg1 + -0xc);
        }
        if (*(arg1 + -0x10) <= uStack_4c) {
            uStack_4c = *(arg1 + -0x10);
        }
        *(arg1 + -0x14) = uStack_4c;
        if ((*(arg1 + -0x50) == 4) && (iVar3 != 0)) {
            pcVar4 = *(iVar3 + 0x88);
            __cfi_slowpath_diag(0xd7b8b83d5cf4b610,pcVar4,0x8000b90);
            puVar2 = *(arg1 + 100);
            iVar1 = (*pcVar4)(*(_segment.ehdr + 0x150),*(iVar5 + 0x10),puVar2,*(arg1 + -0x14));
            if (iVar1 < 0) {
                _printk(0x8000d6c,iVar1);
                arg3 = iVar1;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_max_freq;
    iVar1 = scnprintf(puVar2,0x1000,0x800104c,*(iVar3 + -0x10));
    return iVar1;
}


// ===== sym.show_max_freq @ 0x08006ce0 (size 64) =====

int64_t sym.show_max_freq(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x800104c,*(arg1 + -0x10));
    return iVar1;
}


// ===== sym.store_max_freq @ 0x08006d20 (size 304) =====

uint64_t sym.store_max_freq(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar4;
    int64_t iVar5;
    code *pcVar6;
    int *piVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    puVar3 = &uStack_4c;
    uStack_4c = 0;
    iVar8 = *(arg1 + -0x58);
    iVar5 = *(_segment.ehdr + 0x148);
    iVar1 = kstrtouint(arg2,10,puVar3);
    if (iVar1 < 0) {
        arg3 = iVar1;
    }
    else {
        if (uStack_4c <= *(arg1 + -0x14)) {
            uStack_4c = *(arg1 + -0x14);
        }
        if (*(arg1 + -8) <= uStack_4c) {
            uStack_4c = *(arg1 + -8);
        }
        *(arg1 + -0x10) = uStack_4c;
        if ((*(arg1 + -0x50) == 4) && (iVar5 != 0)) {
            pcVar6 = *(iVar5 + 0x90);
            __cfi_slowpath_diag(0xd7b8b83d5cf4b610,pcVar6,0x8000bb0);
            puVar3 = *(arg1 + 100);
            iVar1 = (*pcVar6)(*(_segment.ehdr + 0x150),*(iVar8 + 0x10),puVar3,*(arg1 + -0x10));
            if (iVar1 < 0) {
                _printk(0x80016d5,iVar1);
                arg3 = iVar1;
            }
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_48) {
        iVar5 = __stack_chk_fail();
        *extraout_x18 = sym.show_freq_map;
        piVar7 = *(iVar5 + -0x40);
        uVar2 = scnprintf(puVar3,0x1000,"CPU freq (MHz)\tMem freq (kHz)\n");
        iVar1 = *piVar7;
        while( true ) {
            uVar4 = uVar2;
            if ((iVar1 == 0) || (0xfff < uVar2)) break;
            iVar1 = scnprintf(puVar3 + uVar4,0x1000 - uVar4,"%14u\t%14u\n",iVar1,piVar7[1]);
            uVar2 = iVar1 + uVar2;
            iVar1 = piVar7[2];
            piVar7 = piVar7 + 2;
        }
        if (uVar2 < 0x1000) {
            iVar1 = scnprintf(puVar3 + uVar4,0x1000 - uVar4,0x800153a);
            uVar4 = iVar1 + uVar2;
        }
        return uVar4;
    }
    return arg3;
}


// ===== sym.show_freq_map @ 0x08006e50 (size 224) =====

uint64_t sym.show_freq_map(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    ulong *in_x18;
    uint64_t uVar3;
    int *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(arg1 + -0x40);
    uVar1 = scnprintf(arg2,0x1000,"CPU freq (MHz)\tMem freq (kHz)\n");
    iVar2 = *piVar4;
    while( true ) {
        uVar3 = uVar1;
        if ((iVar2 == 0) || (0xfff < uVar1)) break;
        iVar2 = scnprintf(arg2 + uVar3,0x1000 - uVar3,"%14u\t%14u\n",iVar2,piVar4[1]);
        uVar1 = iVar2 + uVar1;
        iVar2 = piVar4[2];
        piVar4 = piVar4 + 2;
    }
    if (uVar1 < 0x1000) {
        iVar2 = scnprintf(arg2 + uVar3,0x1000 - uVar3,0x800153a);
        uVar3 = iVar2 + uVar1;
    }
    return uVar3;
}


// ===== sym.show_cur_freq @ 0x08006f30 (size 276) =====

int64_t sym.show_cur_freq(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t iVar1;
    uint uVar2;
    int iVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar5;
    int64_t iVar6;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    uStack_4c = 0;
    iVar6 = *(arg1 + -0x58);
    if (*(arg1 + -0x50) == 4) {
        if (*(_segment.ehdr + 0x148) == 0) {
            iVar6 = -0x13;
            pcVar4 = arg2;
            goto code_r0x08006fec;
        }
        pcVar5 = *(*(_segment.ehdr + 0x148) + 0x98);
        __cfi_slowpath_diag(0x4e07fa4dc08e950d,pcVar5,0x8000bd0);
        pcVar4 = *(arg1 + 100);
        iVar3 = (*pcVar5)(*(_segment.ehdr + 0x150),*(iVar6 + 0x10),pcVar4,&uStack_4c);
        noname_1 = extraout_q0;
        uVar2 = uStack_4c;
        if (iVar3 < 0) {
            _printk(0x8001091);
            iVar6 = iVar3;
            goto code_r0x08006fec;
        }
    }
    else {
        uVar2 = *(arg1 + -4);
    }
    pcVar4 = "%lu\n";
    iVar3 = scnprintf(noname_1,arg2,0x1000,"%lu\n",uVar2);
    iVar6 = iVar3;
code_r0x08006fec:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_48) {
        iVar6 = __stack_chk_fail(iVar6);
        *extraout_x18 = sym.show_ipm_ceil;
        iVar3 = scnprintf(pcVar4,0x1000,0x800104c,*(iVar6 + -0x34));
        return iVar3;
    }
    return iVar6;
}


// ===== sym.show_ipm_ceil @ 0x08007044 (size 64) =====

int64_t sym.show_ipm_ceil(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x800104c,*(arg1 + -0x34));
    return iVar1;
}


// ===== sym.store_ipm_ceil @ 0x08007084 (size 304) =====

int64_t sym.store_ipm_ceil(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    code *pcVar4;
    int64_t iVar5;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    puVar2 = &uStack_4c;
    uStack_4c = 0;
    iVar5 = *(arg1 + -0x58);
    iVar3 = *(_segment.ehdr + 0x148);
    iVar1 = kstrtouint(arg2,10,puVar2);
    if (iVar1 < 0) {
        arg3 = iVar1;
    }
    else {
        if (uStack_4c < 2) {
            uStack_4c = 1;
        }
        if (0xc34 < uStack_4c >> 4) {
            uStack_4c = 50000;
        }
        *(arg1 + -0x34) = uStack_4c;
        if ((*(arg1 + -0x50) == 4) && (iVar3 != 0)) {
            pcVar4 = *(iVar3 + 0x38);
            __cfi_slowpath_diag(0xd7b8b83d5cf4b610,pcVar4,0x8000bf0);
            puVar2 = *(arg1 + 100);
            iVar1 = (*pcVar4)(*(_segment.ehdr + 0x150),*(iVar5 + 0x10),puVar2,*(arg1 + -0x34));
            if (iVar1 < 0) {
                _printk(0x800160a,iVar1);
                arg3 = iVar1;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_fe_stall_floor;
    iVar1 = scnprintf(puVar2,0x1000,0x800104c,*(iVar3 + -0x30));
    return iVar1;
}


// ===== sym.show_fe_stall_floor @ 0x080071b4 (size 64) =====

int64_t sym.show_fe_stall_floor(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x800104c,*(arg1 + -0x30));
    return iVar1;
}


// ===== sym.store_fe_stall_floor @ 0x080071f4 (size 292) =====

int64_t sym.store_fe_stall_floor(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    code *pcVar4;
    int64_t iVar5;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    puVar2 = &uStack_4c;
    uStack_4c = 0;
    iVar5 = *(arg1 + -0x58);
    iVar3 = *(_segment.ehdr + 0x148);
    iVar1 = kstrtouint(arg2,10,puVar2);
    if (iVar1 < 0) {
        arg3 = iVar1;
    }
    else {
        if (99 < uStack_4c) {
            uStack_4c = 100;
        }
        *(arg1 + -0x30) = uStack_4c;
        if ((*(arg1 + -0x50) == 4) && (iVar3 != 0)) {
            pcVar4 = *(iVar3 + 0x40);
            __cfi_slowpath_diag(0xd7b8b83d5cf4b610,pcVar4,0x8000c10);
            puVar2 = *(arg1 + 100);
            iVar1 = (*pcVar4)(*(_segment.ehdr + 0x150),*(iVar5 + 0x10),puVar2,*(arg1 + -0x30));
            if (iVar1 < 0) {
                _printk(0x800160a,iVar1);
                arg3 = iVar1;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_be_stall_floor;
    iVar1 = scnprintf(puVar2,0x1000,0x800104c,*(iVar3 + -0x2c));
    return iVar1;
}


// ===== sym.show_be_stall_floor @ 0x08007318 (size 64) =====

int64_t sym.show_be_stall_floor(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x800104c,*(arg1 + -0x2c));
    return iVar1;
}


// ===== sym.store_be_stall_floor @ 0x08007358 (size 292) =====

int64_t sym.store_be_stall_floor(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    code *pcVar4;
    int64_t iVar5;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    puVar2 = &uStack_4c;
    uStack_4c = 0;
    iVar5 = *(arg1 + -0x58);
    iVar3 = *(_segment.ehdr + 0x148);
    iVar1 = kstrtouint(arg2,10,puVar2);
    if (iVar1 < 0) {
        arg3 = iVar1;
    }
    else {
        if (99 < uStack_4c) {
            uStack_4c = 100;
        }
        *(arg1 + -0x2c) = uStack_4c;
        if ((*(arg1 + -0x50) == 4) && (iVar3 != 0)) {
            pcVar4 = *(iVar3 + 0x48);
            __cfi_slowpath_diag(0xd7b8b83d5cf4b610,pcVar4,0x8000c30);
            puVar2 = *(arg1 + 100);
            iVar1 = (*pcVar4)(*(_segment.ehdr + 0x150),*(iVar5 + 0x10),puVar2,*(arg1 + -0x2c));
            if (iVar1 < 0) {
                _printk(0x800160a,iVar1);
                arg3 = iVar1;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_freq_scale_pct;
    iVar1 = scnprintf(puVar2,0x1000,0x800104c,*(iVar3 + -0x28));
    return iVar1;
}


// ===== sym.show_freq_scale_pct @ 0x0800747c (size 64) =====

int64_t sym.show_freq_scale_pct(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x800104c,*(arg1 + -0x28));
    return iVar1;
}


// ===== sym.store_freq_scale_pct @ 0x080074bc (size 292) =====

int64_t sym.store_freq_scale_pct(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    code *pcVar4;
    int64_t iVar5;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    puVar2 = &uStack_4c;
    uStack_4c = 0;
    iVar5 = *(arg1 + -0x58);
    iVar3 = *(_segment.ehdr + 0x148);
    iVar1 = kstrtouint(arg2,10,puVar2);
    if (iVar1 < 0) {
        arg3 = iVar1;
    }
    else {
        if (999 < uStack_4c) {
            uStack_4c = 1000;
        }
        *(arg1 + -0x28) = uStack_4c;
        if ((*(arg1 + -0x50) == 4) && (iVar3 != 0)) {
            pcVar4 = *(iVar3 + 0x60);
            __cfi_slowpath_diag(0xd7b8b83d5cf4b610,pcVar4,0x8000c50);
            puVar2 = *(arg1 + 100);
            iVar1 = (*pcVar4)(*(_segment.ehdr + 0x150),*(iVar5 + 0x10),puVar2,*(arg1 + -0x28));
            if (iVar1 < 0) {
                _printk(0x800160a,iVar1);
                arg3 = iVar1;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_wb_pct_thres;
    iVar1 = scnprintf(puVar2,0x1000,0x800104c,*(iVar3 + -0x1c));
    return iVar1;
}


// ===== sym.show_wb_pct_thres @ 0x080075e0 (size 64) =====

int64_t sym.show_wb_pct_thres(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x800104c,*(arg1 + -0x1c));
    return iVar1;
}


// ===== sym.store_wb_pct_thres @ 0x08007620 (size 292) =====

int64_t sym.store_wb_pct_thres(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    code *pcVar4;
    int64_t iVar5;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    puVar2 = &uStack_4c;
    uStack_4c = 0;
    iVar5 = *(arg1 + -0x58);
    iVar3 = *(_segment.ehdr + 0x148);
    iVar1 = kstrtouint(arg2,10,puVar2);
    if (iVar1 < 0) {
        arg3 = iVar1;
    }
    else {
        if (99 < uStack_4c) {
            uStack_4c = 100;
        }
        *(arg1 + -0x1c) = uStack_4c;
        if ((*(arg1 + -0x50) == 4) && (iVar3 != 0)) {
            pcVar4 = *(iVar3 + 0x50);
            __cfi_slowpath_diag(0xd7b8b83d5cf4b610,pcVar4,0x8000c70);
            puVar2 = *(arg1 + 100);
            iVar1 = (*pcVar4)(*(_segment.ehdr + 0x150),*(iVar5 + 0x10),puVar2,*(arg1 + -0x1c));
            if (iVar1 < 0) {
                _printk(0x800160a,iVar1);
                arg3 = iVar1;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_wb_filter_ipm;
    iVar1 = scnprintf(puVar2,0x1000,0x800104c,*(iVar3 + -0x18));
    return iVar1;
}


// ===== sym.show_wb_filter_ipm @ 0x08007744 (size 64) =====

int64_t sym.show_wb_filter_ipm(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x800104c,*(arg1 + -0x18));
    return iVar1;
}


// ===== sym.store_wb_filter_ipm @ 0x08007784 (size 296) =====

int64_t sym.store_wb_filter_ipm(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    code *pcVar4;
    int64_t iVar5;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    puVar2 = &uStack_4c;
    uStack_4c = 0;
    iVar5 = *(arg1 + -0x58);
    iVar3 = *(_segment.ehdr + 0x148);
    iVar1 = kstrtouint(arg2,10,puVar2);
    if (iVar1 < 0) {
        arg3 = iVar1;
    }
    else {
        if (0xc34 < uStack_4c >> 4) {
            uStack_4c = 50000;
        }
        *(arg1 + -0x18) = uStack_4c;
        if ((*(arg1 + -0x50) == 4) && (iVar3 != 0)) {
            pcVar4 = *(iVar3 + 0x58);
            __cfi_slowpath_diag(0xd7b8b83d5cf4b610,pcVar4,0x8000c90);
            puVar2 = *(arg1 + 100);
            iVar1 = (*pcVar4)(*(_segment.ehdr + 0x150),*(iVar5 + 0x10),puVar2,*(arg1 + -0x18));
            if (iVar1 < 0) {
                _printk(0x800160a,iVar1);
                arg3 = iVar1;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_freq_scale_ceil_mhz;
    iVar1 = scnprintf(puVar2,0x1000,0x800104c,*(iVar3 + -0x24));
    return iVar1;
}


// ===== sym.show_freq_scale_ceil_mhz @ 0x080078ac (size 64) =====

int64_t sym.show_freq_scale_ceil_mhz(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x800104c,*(arg1 + -0x24));
    return iVar1;
}


// ===== sym.store_freq_scale_ceil_mhz @ 0x080078ec (size 296) =====

int64_t sym.store_freq_scale_ceil_mhz(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    code *pcVar4;
    int64_t iVar5;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    puVar2 = &uStack_4c;
    uStack_4c = 0;
    iVar5 = *(arg1 + -0x58);
    iVar3 = *(_segment.ehdr + 0x148);
    iVar1 = kstrtouint(arg2,10,puVar2);
    if (iVar1 < 0) {
        arg3 = iVar1;
    }
    else {
        if (0x270 < uStack_4c >> 3) {
            uStack_4c = 5000;
        }
        *(arg1 + -0x24) = uStack_4c;
        if ((*(arg1 + -0x50) == 4) && (iVar3 != 0)) {
            pcVar4 = *(iVar3 + 0x68);
            __cfi_slowpath_diag(0xd7b8b83d5cf4b610,pcVar4,0x8000cb0);
            puVar2 = *(arg1 + 100);
            iVar1 = (*pcVar4)(*(_segment.ehdr + 0x150),*(iVar5 + 0x10),puVar2,*(arg1 + -0x24));
            if (iVar1 < 0) {
                _printk(0x800160a,iVar1);
                arg3 = iVar1;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_freq_scale_floor_mhz;
    iVar1 = scnprintf(puVar2,0x1000,0x800104c,*(iVar3 + -0x20));
    return iVar1;
}


// ===== sym.show_freq_scale_floor_mhz @ 0x08007a14 (size 64) =====

int64_t sym.show_freq_scale_floor_mhz(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x800104c,*(arg1 + -0x20));
    return iVar1;
}


// ===== sym.store_freq_scale_floor_mhz @ 0x08007a54 (size 296) =====

uchar * sym.store_freq_scale_floor_mhz(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    uchar *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    code *pcVar4;
    int64_t iVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    uStack_4c = 0;
    iVar5 = *(arg1 + -0x58);
    iVar3 = *(_segment.ehdr + 0x148);
    iVar1 = kstrtouint(arg2,10,&uStack_4c);
    if (iVar1 < 0) {
        arg3 = iVar1;
    }
    else {
        if (0x270 < uStack_4c >> 3) {
            uStack_4c = 5000;
        }
        *(arg1 + -0x20) = uStack_4c;
        if ((*(arg1 + -0x50) == 4) && (iVar3 != 0)) {
            pcVar4 = *(iVar3 + 0x70);
            __cfi_slowpath_diag(0xd7b8b83d5cf4b610,pcVar4,0x8000cd0);
            iVar1 = (*pcVar4)(*(_segment.ehdr + 0x150),*(iVar5 + 0x10),*(arg1 + 100),*(arg1 + -0x20));
            if (iVar1 < 0) {
                _printk(0x800160a,iVar1);
                arg3 = iVar1;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_48) {
        auVar6 = __stack_chk_fail();
        puVar2 = auVar6._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar2 != NULL) {
            switch(*puVar2) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar2,auVar6._8_8_,0);
                break;
            default:
                return puVar2;
            }
        }
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x5502,0x8007bd4);
        (*pcVar4)();
    }
    return arg3;
}


// ===== sym.__cfi_check_fail @ 0x08007b7c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08007bc0

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
    //switch table (4 cases) at 0x8000cf0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8007bd4);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08007bf8 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qcom_memlat_probe.ced2387b2ffe06d71748357bedbe93a2.cfi_jt,obj.__this_module);
    return;
}

