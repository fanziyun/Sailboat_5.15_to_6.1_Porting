// decompiled from tz_log_dlkm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 280) =====

//WARNING: Switch with 1 destination removed at 0x08004100

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 != -0x7bcbda558eb245e5) {
            if (arg1 == -0x3557318fb8d07b71) {
                pcVar2 = sym.tz_log_remove.b45790df8a7b92bdf9877ec0bcfc3661.cfi_jt;
            }
            else {
                if (arg1 != -0x8dc801903aca538) goto code_r0x080040c0;
                pcVar2 = sym.tzdbg_procfs_release.b45790df8a7b92bdf9877ec0bcfc3661.cfi_jt;
            }
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x080040c0;
        }
        pcVar2 = sym.tzdbg_procfs_poll.b45790df8a7b92bdf9877ec0bcfc3661.cfi_jt;
    }
    else if (arg1 == 0x2b3a43e29242445) {
        pcVar2 = sym.init_module.cfi_jt;
    }
    else if (arg1 == 0x7ff5a213d37b1a6) {
        pcVar2 = sym.tzdbg_fs_read.b45790df8a7b92bdf9877ec0bcfc3661.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080040c0;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080040c0:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8004114);
    (*pcVar1)();
}


// ===== sym.tzdbg_fs_read.b45790df8a7b92bdf9877ec0bcfc3661.cfi_jt @ 0x08002120 (size 8) =====

int64_t sym.tzdbg_fs_read.b45790df8a7b92bdf9877ec0bcfc3661.cfi_jt
                  (int64_t param_1,ulong param_2,uint64_t param_3,ulong *param_4)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    code *pcVar5;
    bool bVar6;
    bool bVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    uint *puVar11;
    int64_t iVar12;
    ulong uVar13;
    uint64_t uVar14;
    uint16_t uVar15;
    uint32_t uVar16;
    uint64_t uVar17;
    uint32_t uVar18;
    uint32_t uVar19;
    ulong *in_x18;
    uint32_t uVar20;
    int64_t iVar21;
    uint64_t uVar22;
    uint32_t uVar23;
    uint *puVar24;
    ushort *puVar25;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0xd8) == 0) {
        _printk(0x8000bc7,"tzdbg_fs_read");
code_r0x08002670:
        uVar2 = CONCAT22(*0x8000002,_segment.ehdr);
        iVar12 = 0;
        goto code_r0x08002bf4;
    }
    uVar2 = **(*(param_1 + 0xd8) + 0x80);
    iVar21 = uVar2;
    if (((*0x8000260 != '\0' && uVar2 != 7) && uVar2 != 8) && uVar2 != 9) {
        if (10 < uVar2) goto code_r0x08002dd8;
        if (uVar2 != 10) {
            iVar12 = iVar21 * 0x20;
            if (iVar12 - 0x161U < 0xfffffffffffffe3f) {
code_r0x08002ddc:
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(1,0x8002de0);
                (*pcVar5)();
            }
            puVar1 = iVar12 + 0x8000110;
            uVar17 = *puVar1;
            if (uVar17 == 0) {
                if (uVar2 != 6) {
                    uVar17 = uVar2;
                    pcVar5 = obj.enc_tzlog_info;
                }
                else {
                    uVar17 = 6;
                    pcVar5 = obj.enc_qseelog_info;
                }
                iVar8 = sym._disp_encrpted_log_stats(pcVar5,uVar17,uVar2 == 6);
                uVar17 = iVar8;
                *puVar1 = uVar17;
                if (iVar12 - 0x159U < 0xfffffffffffffe3f) goto code_r0x08002ddc;
                *(iVar21 * 0x20 + 0x8000118) = 0;
            }
            *param_4 = 0;
            if (iVar12 - 0x149U < 0xfffffffffffffe3f) goto code_r0x08002ddc;
            iVar21 = iVar21 * 0x20;
            uVar22 = param_3;
            if (uVar17 <= param_3) {
                uVar22 = uVar17;
            }
            iVar8 = simple_read_from_buffer
                              (param_2,uVar22,param_4,*(iVar21 + 0x8000128) + *(iVar21 + 0x8000118),param_3);
            iVar12 = iVar8;
            *(iVar21 + 0x8000118) = iVar12 + *(iVar21 + 0x8000118);
            *puVar1 = *puVar1 - iVar12;
            uVar2 = CONCAT22(*0x8000002,_segment.ehdr);
            goto code_r0x08002bf4;
        }
        _printk(0x8000c51,10);
        goto code_r0x08002670;
    }
    if (uVar2 < 6) {
        puVar11 = *0x80000c8;
        uVar13 = _obj.tzdbg;
        uVar20 = CONCAT22(*0x8000002,_segment.ehdr);
code_r0x080022a0:
        __memcpy_fromio(puVar11,uVar13,uVar20);
    }
    else {
        puVar11 = *0x80000d0;
        uVar13 = _obj.enc_tzlog_info;
        uVar20 = *0x8000250;
        if (uVar2 - 7 < 2) goto code_r0x080022a0;
    }
    puVar24 = *0x80000d0;
    puVar11 = *0x80000c8;
    uVar20 = param_3;
    switch(uVar2) {
    case 0:
        _printk(0x8000ecf,*0x800025c);
        if ((*0x80000c8)[2] != 0) {
            uVar19 = 0;
            uVar23 = 1;
            iVar8 = CONCAT22(*0x8000002,_segment.ehdr);
            puVar24 = NULL;
            puVar11 = *0x80000c8 + (*0x80000c8)[4];
            uVar16 = *0x800025c;
            if (*0x800025c >> 0x17 == 0) {
                puVar11 = NULL;
                puVar24 = *0x80000c8 + (*0x80000c8)[4];
            }
            do {
                iVar21 = CONCAT44(*0x8000004,CONCAT22(*0x8000002,_segment.ehdr)) + uVar19;
                if (uVar16 < 0x800000) {
                    iVar9 = scnprintf(iVar21,iVar8 + ~uVar19,
                                      "  CPU #: %d\n     Warmboot jump address     : 0x%x\n     Warmboot entry CPU counter: 0x%x\n     Warmboot exit CPU counter : 0x%x\n     Power Collapse entry CPU counter: 0x%x\n     Power Collapse exit CPU counter : 0x%x\n"
                                      ,uVar23 - 1,puVar24[4],*puVar24,puVar24[1],puVar24[2],puVar24[3]);
                    iVar8 = CONCAT22(*0x8000002,_segment.ehdr);
                    uVar19 = iVar9 + uVar19;
                    if (iVar8 - 1U < uVar19) goto code_r0x08002da4;
                    puVar24 = puVar24 + 6;
                }
                else {
                    iVar9 = scnprintf(iVar21,iVar8 + ~uVar19,
                                      "  CPU #: %d\n     Warmboot jump address : 0x%llx\n     Warmboot entry CPU counter : 0x%x\n     Warmboot exit CPU counter : 0x%x\n     Power Collapse entry CPU counter : 0x%x\n     Power Collapse exit CPU counter : 0x%x\n     Psci entry CPU counter : 0x%x\n     Psci exit CPU counter : 0x%x\n     Warmboot Jump Address Instruction : 0x%x\n"
                                      ,uVar23 - 1,*(puVar11 + 6),*puVar11,puVar11[1],puVar11[2],puVar11[3],
                                      puVar11[4],puVar11[5],puVar11[8]);
                    iVar8 = CONCAT22(*0x8000002,_segment.ehdr);
                    uVar19 = iVar9 + uVar19;
                    if (iVar8 - 1U < uVar19) {
code_r0x08002da4:
                        _printk(0x8000b9c,"_disp_tz_boot_stats");
                        goto code_r0x08002d74;
                    }
                    puVar11 = puVar11 + 10;
                }
                if (*(CONCAT44(*0x8000004,CONCAT22(*0x8000002,_segment.ehdr)) + 8) <= uVar23) goto code_r0x08002d74;
                uVar23 = uVar23 + 1;
                uVar16 = CONCAT22(*0x8000002,_segment.ehdr);
            } while( true );
        }
        uVar19 = 0;
code_r0x08002d74:
        *0x8000128 = _obj.disp_buf_paddr;
        break;
    case 1:
        iVar21 = CONCAT44(*0x8000004,CONCAT22(*0x8000002,_segment.ehdr));
        if (*(iVar21 + 8) == 0) {
            uVar19 = 0;
        }
        else {
            uVar23 = 0;
            uVar19 = 0;
            puVar11 = iVar21 + *(iVar21 + 0x14);
            iVar8 = CONCAT22(*0x8000002,_segment.ehdr);
            do {
                iVar9 = scnprintf(CONCAT44(*0x8000004,CONCAT22(*0x8000002,_segment.ehdr)) + uVar19,iVar8 + ~uVar19,
                                  "  CPU #: %d\n     Reset Type (reason)       : 0x%x\n     Reset counter             : 0x%x\n"
                                  ,uVar23,*puVar11,puVar11[1]);
                iVar8 = CONCAT22(*0x8000002,_segment.ehdr);
                uVar19 = iVar9 + uVar19;
                if (iVar8 - 1U < uVar19) {
                    _printk(0x8000b9c,"_disp_tz_reset_stats");
                    break;
                }
                uVar23 = uVar23 + 1;
                puVar11 = puVar11 + 2;
            } while (uVar23 < *(CONCAT44(*0x8000004,CONCAT22(*0x8000002,_segment.ehdr)) + 8));
        }
        *0x8000148 = _obj.disp_buf_paddr;
        break;
    case 2:
        iVar21 = (*0x80000c8)[6] - 4;
        puVar25 = *0x80000c8 + (*0x80000c8)[6];
        _printk(0x8000ecf,*0x800025c);
        if (*0x800025f == '\0') {
            if (*(puVar11 + iVar21) < 1) {
code_r0x08002d88:
                uVar19 = 0;
            }
            else {
                iVar8 = 0;
                uVar19 = 0;
                iVar9 = CONCAT22(*0x8000002,_segment.ehdr);
                do {
                    iVar9 = scnprintf(_obj.disp_buf_paddr + uVar19,iVar9 + ~uVar19,
                                      "     Interrupt Number          : 0x%x\n     Type of Interrupt         : 0x%x\n     Description of interrupt  : %s\n"
                                      ,*(puVar25 + 2),*puVar25,puVar25 + 4);
                    uVar19 = iVar9 + uVar19;
                    if ((*0x80000c8)[2] != 0) {
                        uVar17 = 0;
                        do {
                            if (uVar17 == 8) goto code_r0x08002dd8;
                            iVar9 = scnprintf(_obj.disp_buf_paddr + uVar19,
                                              CONCAT22(*0x8000002,_segment.ehdr) + ~uVar19,
                                              "     int_count on CPU # %d      : %u\n",uVar17 & 0xffffffff,
                                              *(puVar25 + uVar17 * 4 + 0xc));
                            uVar19 = iVar9 + uVar19;
                            uVar17 = uVar17 + 1;
                        } while (uVar17 < (*0x80000c8)[2]);
                    }
                    iVar10 = scnprintf(CONCAT44(*0x8000004,CONCAT22(*0x8000002,_segment.ehdr)) + uVar19,
                                       CONCAT22(*0x8000002,_segment.ehdr) + -1,0x8000c2b);
                    iVar9 = CONCAT22(*0x8000002,_segment.ehdr);
                    uVar19 = iVar10 + uVar19;
                    if (iVar9 - 1U < uVar19) goto code_r0x08002dc0;
                    puVar25 = puVar25 + 0x2c;
                    iVar8 = iVar8 + 1;
                } while (iVar8 < *(puVar11 + iVar21));
            }
        }
        else {
            if (*(puVar11 + iVar21) < 1) goto code_r0x08002d88;
            iVar8 = 0;
            uVar19 = 0;
            iVar9 = CONCAT22(*0x8000002,_segment.ehdr);
            do {
                iVar9 = scnprintf(_obj.disp_buf_paddr + uVar19,iVar9 + ~uVar19,
                                  "     Interrupt Number          : 0x%x\n     Type of Interrupt         : 0x%x\n     Description of interrupt  : %s\n"
                                  ,*(puVar25 + 2),*puVar25,puVar25 + 4);
                uVar19 = iVar9 + uVar19;
                if ((*0x80000c8)[2] != 0) {
                    uVar17 = 0;
                    do {
                        if (uVar17 == 8) goto code_r0x08002dd8;
                        iVar9 = scnprintf(_obj.disp_buf_paddr + uVar19,CONCAT22(*0x8000002,_segment.ehdr) + ~uVar19,
                                          "     int_count on CPU # %d      : %u\n",uVar17 & 0xffffffff,
                                          *(puVar25 + uVar17 * 2 + 0xc));
                        uVar19 = iVar9 + uVar19;
                        uVar17 = uVar17 + 1;
                    } while (uVar17 < (*0x80000c8)[2]);
                }
                iVar10 = scnprintf(CONCAT44(*0x8000004,CONCAT22(*0x8000002,_segment.ehdr)) + uVar19,
                                   CONCAT22(*0x8000002,_segment.ehdr) + -1,0x8000c2b);
                iVar9 = CONCAT22(*0x8000002,_segment.ehdr);
                uVar19 = iVar10 + uVar19;
                if (iVar9 - 1U < uVar19) goto code_r0x08002dc0;
                puVar25 = puVar25 + 0x1c;
                iVar8 = iVar8 + 1;
            } while (iVar8 < *(puVar11 + iVar21));
        }
code_r0x08002d8c:
        *0x8000168 = _obj.disp_buf_paddr;
        break;
    case 3:
        iVar21 = CONCAT44(*0x8000004,CONCAT22(*0x8000002,_segment.ehdr));
        uVar23 = *(iVar21 + 0x10) - *(iVar21 + 0xc);
        if (uVar23 < 8) {
            uVar19 = 0;
        }
        else {
            uVar19 = 0;
            uVar23 = uVar23 >> 3;
            iVar21 = *(iVar21 + 0xc) + iVar21 + 1;
            do {
                if (*(iVar21 + -1) != -1) {
                    iVar8 = scnprintf(CONCAT44(*0x8000004,CONCAT22(*0x8000002,_segment.ehdr)) + uVar19,
                                      CONCAT22(*0x8000002,_segment.ehdr) + ~uVar19,"   0x%x        %s\n",
                                      *(iVar21 + -1),iVar21);
                    uVar19 = iVar8 + uVar19;
                }
                if (CONCAT22(*0x8000002,_segment.ehdr) - 1U < uVar19) {
                    _printk(0x8000b9c,"_disp_tz_vmid_stats");
                    break;
                }
                uVar23 = uVar23 - 1;
                iVar21 = iVar21 + 8;
            } while (uVar23 != 0);
        }
        *0x8000188 = _obj.disp_buf_paddr;
        break;
    case 4:
        uVar19 = scnprintf(_obj.disp_buf_paddr,CONCAT22(*0x8000002,_segment.ehdr) + -1,
                           "   Version        : 0x%x\n   Magic Number   : 0x%x\n   Number of CPU  : %d\n",
                           (*0x80000c8)[1],**0x80000c8,(*0x80000c8)[2]);
        *0x80001a8 = _obj.disp_buf_paddr;
        goto code_r0x08002940;
    case 5:
        iVar12 = CONCAT44(*0x8000004,CONCAT22(*0x8000002,_segment.ehdr));
        iVar21 = iVar12 + *(iVar12 + 0x1c);
        if (0x2ffff < *(iVar12 + 4)) {
            uVar17 = *(iVar12 + 0x20);
            if (*0x8000261 == '\0') {
                iVar21 = iVar21 + -4;
                pcVar5 = obj._disp_tz_log_stats.log_start;
                goto code_r0x08002938;
            }
            iVar21 = iVar21 + -8;
            pcVar5 = obj._disp_tz_log_stats.log_start_v2;
code_r0x080024d8:
            uVar19 = sym._disp_log_stats_v2(iVar21,pcVar5,uVar17,param_3);
            goto code_r0x0800293c;
        }
        uVar19 = scnprintf(_obj.disp_buf_paddr,CONCAT22(*0x8000002,_segment.ehdr) + -1,0x8000f39);
        *0x80001c8 = _obj.disp_buf_paddr;
        goto code_r0x08002940;
    case 6:
        if (*0x8000261 != '\0') {
            pcVar5 = obj._disp_qsee_log_stats.log_start_v2;
            uVar17 = 0x1fff8;
            iVar21 = CONCAT44(*0x8000004,CONCAT22(*0x8000002,_segment.ehdr));
            goto code_r0x080024d8;
        }
        pcVar5 = reloc.tzdbg_fs_read.b45790df8a7b92bdf9877ec0bcfc3661.cfi_jt;
        uVar17 = 0x7ffc;
        iVar21 = CONCAT44(*0x8000004,CONCAT22(*0x8000002,_segment.ehdr));
code_r0x08002938:
        uVar19 = sym._disp_log_stats(iVar21,pcVar5,uVar17,param_3);
code_r0x0800293c:
        *param_4 = 0;
code_r0x08002940:
        if (uVar19 <= param_3) {
            uVar20 = uVar19;
        }
        goto code_r0x08002bd0;
    case 7:
        uVar19 = scnprintf(_obj.disp_buf_paddr,*0x8000250 - 1,
                           "   Magic Number    : 0x%x\n   CPU Count       : 0x%x\n   S2 Fault Counter: 0x%x\n",
                           **0x80000d0,(*0x80000d0)[1],(*0x80000d0)[5]);
        if ((*0x80000d0)[1] != 0) {
            uVar23 = 0;
            puVar11 = *0x80000d0 + 6;
            uVar16 = CONCAT22(*0x8000002,_segment.ehdr);
            do {
                iVar8 = scnprintf(_obj.disp_buf_paddr + uVar19,uVar16 + ~uVar19,
                                  "  CPU #: %d\n     Warmboot entry CPU counter: 0x%x\n     Warmboot exit CPU counter : 0x%x\n"
                                  ,uVar23,*puVar11,puVar11[1]);
                uVar19 = iVar8 + uVar19;
                if (*0x8000250 - 1 < uVar19) {
                    _printk(0x8000b9c,"_disp_hyp_general_stats");
                    break;
                }
                uVar23 = uVar23 + 1;
                puVar11 = puVar11 + 2;
                uVar16 = *0x8000250;
            } while (uVar23 < *(CONCAT44(*0x8000004,CONCAT22(*0x8000002,_segment.ehdr)) + 4));
        }
        *0x8000208 = _obj.disp_buf_paddr;
        break;
    case 8:
        uVar15 = *(*0x80000d0 + 3);
        uVar23 = (*0x80000d0)[2];
        uVar16 = *0x8000250 - uVar23;
        uVar19 = 2;
        if (_segment.ehdr <= uVar15) {
            uVar19 = uVar15 - _segment.ehdr;
        }
        if (uVar19 < 2) {
            uVar15 = _segment.ehdr;
            if (uVar19 == 1) {
                uVar3 = *(*0x80000d0 + 0xe);
                uVar19 = uVar3;
                uVar17 = _segment.ehdr;
                if (_segment.ehdr < uVar3) {
                    uVar18 = 0;
                    if (uVar16 != 0) {
                        uVar18 = (uVar3 + 1) / uVar16;
                    }
                    uVar18 = (uVar3 + 1) - uVar18 * uVar16;
                    uVar17 = uVar18 & 0xffff;
                    _segment.ehdr = uVar18;
                }
            }
            else {
                uVar19 = *(*0x80000d0 + 0xe);
                uVar17 = _segment.ehdr;
            }
        }
        else {
            uVar19 = *(*0x80000d0 + 0xe);
            uVar18 = *(*0x80000d0 + 0xe) + 1;
            uVar4 = 0;
            if (uVar16 != 0) {
                uVar4 = uVar18 / uVar16;
            }
            uVar18 = uVar18 - uVar4 * uVar16;
            uVar17 = uVar18 & 0xffff;
            _segment.ehdr = uVar18;
            uVar15 = uVar15 - 1;
        }
        uVar18 = *0x8000250;
        if (uVar17 == uVar19) {
            do {
                iVar21 = msleep_interruptible(0x32);
                if (iVar21 != 0) goto code_r0x08002bb4;
                __memcpy_fromio(*0x80000d0,_obj.enc_tzlog_info,*0x8000250);
                uVar17 = _segment.ehdr;
                uVar19 = *(puVar24 + 0xe);
            } while (_segment.ehdr == uVar19);
            uVar18 = CONCAT22(*0x8000002,_segment.ehdr);
            uVar15 = _segment.ehdr;
        }
        iVar21 = 0;
        if (param_3 <= uVar18) {
            uVar18 = uVar20;
        }
        if ((uVar17 != uVar19) && (0 < uVar18)) {
            iVar21 = 0;
            do {
                uVar19 = uVar17 + 1;
                uVar4 = 0;
                if (uVar16 != 0) {
                    uVar4 = uVar19 / uVar16;
                }
                uVar19 = uVar19 - uVar4 * uVar16;
                iVar12 = uVar17 + uVar23;
                uVar4 = uVar19 & 0xffff;
                uVar17 = uVar4;
                *(CONCAT44(*0x8000004,CONCAT22(*0x8000002,_segment.ehdr)) + iVar21) = *(puVar24 + iVar12);
                if (uVar4 == 0) {
                    _segment.ehdr = uVar15 + 1;
                    uVar15 = _segment.ehdr;
                }
                iVar21 = iVar21 + 1;
                bVar6 = false;
                bVar7 = false;
                if (*(puVar24 + 0xe) != uVar4) {
                    bVar7 = SBORROW4(iVar21,uVar18);
                    bVar6 = iVar21 - uVar18 < 0;
                }
            } while (bVar6 != bVar7);
            _segment.ehdr = uVar19;
        }
        uVar19 = iVar21;
        *0x8000228 = _obj.disp_buf_paddr;
        goto code_r0x08002bb8;
    case 9:
        uVar19 = CONCAT22(*0x8000002,_segment.ehdr);
        if ((uVar19 == 0) && (obj._disp_rm_log_stats.wrap_around == 0x1)) {
            uVar19 = 0;
            obj._disp_rm_log_stats.wrap_around = 0x0;
        }
        else if (CONCAT22(*0x8000002,_segment.ehdr) == 0) {
            _printk(0x8000afb,0);
code_r0x08002bb4:
            uVar19 = 0;
        }
        else {
            iVar21 = CONCAT44(*0x8000004,CONCAT22(*0x8000002,_segment.ehdr));
            if (obj._disp_rm_log_stats.wrap_around == 0x1) {
                uVar23 = CONCAT22(*0x8000002,_segment.ehdr);
            }
            else {
                __memcpy_fromio(iVar21,*0x80000c0);
                uVar23 = 0;
                uVar19 = *(_obj.qseelog_buf_size + 4);
                iVar21 = _obj.qseelog_buf_size;
            }
            uVar17 = uVar19;
            if (param_3 <= uVar19) {
                uVar17 = param_3;
            }
            uVar16 = uVar17;
            _segment.ehdr = uVar23 + uVar16;
            if (uVar19 != uVar16) {
                obj._disp_rm_log_stats.wrap_around = 0x1;
            }
            uVar22 = 0;
            uVar14 = _segment.ehdr;
            if ((uVar16 != 0) && (_segment.ehdr != 0)) {
                uVar22 = 0;
                do {
                    *(CONCAT44(*0x8000004,_segment.ehdr) + uVar22) = *(iVar21 + uVar23 + 8 + uVar22);
                    uVar22 = uVar22 + 1;
                    if (uVar17 <= uVar22) break;
                } while (uVar22 < uVar14);
            }
            uVar19 = uVar22;
            if (uVar19 != uVar16) {
                _printk(0x8000e4b,uVar22 & 0xffffffff);
            }
            *0x8000248 = _obj.disp_buf_paddr;
        }
code_r0x08002bb8:
        *param_4 = 0;
        break;
    default:
        uVar19 = 0;
    }
    if (uVar19 <= param_3) {
        uVar20 = uVar19;
    }
    if (9 < uVar2) {
code_r0x08002dd8:
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x8002ddc);
        (*pcVar5)();
    }
code_r0x08002bd0:
    iVar12 = simple_read_from_buffer(param_2,uVar20,param_4,*(uVar2 * 0x20 + 0x8000128),uVar20);
    uVar2 = _segment.ehdr;
code_r0x08002bf4:
    *0x8000002 = uVar2 >> 0x10;
    _segment.ehdr = uVar2;
    return iVar12;
code_r0x08002dc0:
    _printk(0x8000c2d,"_disp_tz_interrupt_stats");
    goto code_r0x08002d8c;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08002128 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.tz_log_probe.b45790df8a7b92bdf9877ec0bcfc3661.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08002130 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.tz_log_probe.b45790df8a7b92bdf9877ec0bcfc3661.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.tz_log_remove.b45790df8a7b92bdf9877ec0bcfc3661.cfi_jt @ 0x08002138 (size 8) =====

ulong sym.tz_log_remove.b45790df8a7b92bdf9877ec0bcfc3661.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0xa8) != 0) {
        remove_proc_entry("tzdbg",0);
    }
    param_1 = param_1 + 0x10;
    dma_free_attrs(param_1,_segment.ehdr,_obj.disp_buf_paddr,CONCAT44(*0x8000004,_segment.ehdr),0);
    qtee_shmbridge_deregister(*0x80000d0);
    dma_free_attrs(param_1,*0x80000c8,*0x80000c0,_obj.enc_tzlog_info,0);
    qtee_shmbridge_deregister(_obj.tzdbg);
    dma_free_attrs(param_1,*0x80000a8,*0x80000a0,_obj.enc_qseelog_info,0);
    if (*0x8000260 == '\0') {
        qtee_shmbridge_deregister(CONCAT44(*0x8000004,_segment.ehdr));
    }
    dma_free_attrs(param_1,_segment.ehdr,CONCAT44(*0x8000004,_segment.ehdr),CONCAT44(*0x8000004,_segment.ehdr),0);
    if (*0x8000260 == '\0') {
        kfree(CONCAT44(*0x8000004,_segment.ehdr));
    }
    return 0;
}


// ===== sym.tz_log_probe.b45790df8a7b92bdf9877ec0bcfc3661.cfi_jt @ 0x08002140 (size 8) =====

int sym.tz_log_probe.b45790df8a7b92bdf9877ec0bcfc3661.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *puVar5;
    int64_t iVar6;
    int64_t iVar7;
    char *pcVar8;
    uint64_t *puVar9;
    ulong uVar10;
    uint64_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar12;
    ulong unaff_x30;
    uint64_t uStack_80;
    uint64_t uStack_78;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    puVar9 = &uStack_80;
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    uStack_78 = 0;
    iVar1 = qcom_scm_get_tz_log_feat_id(&uStack_78);
    if (iVar1 != 0) {
        _printk(0x8000a41,"tzdbg_get_tz_version");
        goto code_r0x08003778;
    }
    _segment.ehdr = CONCAT44(*0x8000004,uStack_78);
    iVar1 = qcom_scm_get_tz_feat_id_version(6,&uStack_78);
    if (iVar1 != 0) {
        _printk(0x8000b64,"tzdbg_get_tz_version",iVar1);
        goto code_r0x08003778;
    }
    _printk(0x800044b,uStack_78);
    *0x8000268 = uStack_78 >> 0x16;
    *0x8000264 = uStack_78 >> 0xc & 0x3ff;
    *0x8000261 = *0x8000268 == 9 && *0x8000264 - 2 < 3;
    piVar2 = platform_get_resource(param_1,0x200,0);
    if (piVar2 == NULL) {
        _dev_err(param_1 + 0x10,"%s: ERROR Missing MEM resource\n","tz_log_probe");
    }
    else {
        iVar7 = param_1 + 0x10;
        uVar11 = (piVar2[1] - *piVar2) + 1;
        _segment.ehdr = CONCAT44(*0x8000004,uVar11);
        iVar3 = devm_ioremap(iVar7,*piVar2,uVar11 & 0xffffffff);
        if (iVar3 == 0) {
            uVar11 = _segment.ehdr & 0xffffffff;
            pcVar8 = "%s: ERROR could not ioremap: start=%pr, len=%u\n";
            puVar9 = piVar2;
code_r0x08003770:
            _dev_err(iVar7,pcVar8,"tz_log_probe",puVar9,uVar11);
        }
        else {
            puVar5 = _segment.ehdr;
            if (*(param_1 + 0x300) != 0) {
                iVar4 = of_find_property(*(param_1 + 0x300),"qcom,hyplog-enabled",0);
                *0x8000258 = iVar4 != 0;
                if (iVar4 != 0) {
                    uStack_80 = uStack_80 & 0xffffffff00000000;
                    uStack_6c = 0;
                    iVar1 = of_property_read_variable_u32_array
                                      (*(param_1 + 0x300),"hyplog-address-offset",&uStack_80,1,0);
                    if (iVar1 < 0) {
                        pcVar8 = "hyplog address offset is not defined\n";
code_r0x08003c1c:
                        _dev_err(iVar7,pcVar8);
                        uVar10 = 0xffffffea;
code_r0x08003c28:
                        pcVar8 = "%s: fail to get hypdbg_base ret %d\n";
                    }
                    else {
                        iVar1 = of_property_read_variable_u32_array
                                          (*(param_1 + 0x300),"hyplog-size-offset",&uStack_6c,1,0);
                        if (iVar1 < 0) {
                            pcVar8 = "hyplog size offset is not defined\n";
                            goto code_r0x08003c1c;
                        }
                        uVar11 = sym.readl_relaxed(iVar3 + (uStack_80 & 0xffffffff));
                        uStack_78 = uVar11 & 0xffffffff;
                        *0x8000250 = sym.readl_relaxed(iVar3 + uStack_6c);
                        _obj.enc_tzlog_info = devm_ioremap(iVar7,uVar11 & 0xffffffff,*0x8000250);
                        if (_obj.enc_tzlog_info == 0) {
                            _dev_err(iVar7,"ERROR could not ioremap: start=%pr, len=%u\n",&uStack_78);
                            uVar10 = 0xfffffffa;
                            goto code_r0x08003c28;
                        }
                        uVar11 = __kmalloc(*0x8000250,0xdc0);
                        if (uVar11 == 0) {
                            uVar10 = 0xfffffff4;
                            goto code_r0x08003c28;
                        }
                        uVar10 = *(param_1 + 0x300);
                        *(uVar11 + 0xc) = 0;
                        uStack_78 = uStack_78 & 0xffffffff00000000;
                        uStack_80 = uStack_80 & 0xffffffff00000000;
                        _segment.ehdr = uVar11;
                        iVar1 = of_property_read_variable_u32_array(uVar10,"rmlog-address",&uStack_78,1,0);
                        if (iVar1 < 0) {
                            pcVar8 = "RM log address is not defined\n";
code_r0x08003eb4:
                            _dev_err(iVar7,pcVar8);
                            _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
                            puVar5 = _segment.ehdr;
                            goto code_r0x080038a4;
                        }
                        iVar1 = of_property_read_variable_u32_array(*(param_1 + 0x300),"rmlog-size",&uStack_80,1,0);
                        if (iVar1 < 0) {
                            pcVar8 = "RM log size is not defined\n";
                            goto code_r0x08003eb4;
                        }
                        _segment.ehdr = CONCAT44(*0x8000004,uStack_80);
                        if (uStack_80 == 0) {
                            *0x80000c0 = 0;
                            _obj.qseelog_buf_size = 0;
                            _dev_err(iVar7,"RM log size is %d\n");
                            puVar5 = _segment.ehdr;
                            goto code_r0x080038a4;
                        }
                        _segment.ehdr = devm_ioremap(iVar7,uStack_78 & 0xffffffff);
                        if (_segment.ehdr == NULL) {
                            _dev_err(iVar7,"ERROR could not ioremap: start=%pr, len=%u\n",uStack_78 & 0xffffffff,0);
                            uVar10 = 0xfffffffa;
                            pcVar8 = "%s: fail to get rmlog_base ret %d\n";
                        }
                        else {
                            puVar5 = __kmalloc(_segment.ehdr & 0xffffffff,0xdc0);
                            if (puVar5 != NULL) goto code_r0x080038a4;
                            uVar10 = 0xfffffff4;
                            pcVar8 = "%s: fail to get rmlog_base ret %d\n";
                        }
                    }
                    _dev_err(iVar7,pcVar8,"tz_log_probe",uVar10);
                    iVar1 = -0x16;
                    goto code_r0x08003778;
                }
                _dev_info(iVar7,"Hyp log service not support\n");
                puVar5 = _segment.ehdr;
            }
code_r0x080038a4:
            _segment.ehdr = puVar5;
            uVar11 = sym.readl_relaxed(iVar3);
            uStack_78 = 0;
            uStack_80 = uVar11 & 0xffffffff;
            iVar1 = qcom_scm_query_encrypted_log_feature(&uStack_78);
            if (iVar1 == 0) {
                _printk(0x8000fd8,uStack_78);
                *0x8000260 = uStack_78 != 0;
                if (uStack_78 == 0) goto code_r0x0800396c;
                if ((*0x8000268 == 9) && (3 < *0x8000264)) {
                    *0x8000262 = 1;
                }
                puVar5 = _segment.ehdr;
                if (*(param_1 + 0x300) != 0) {
                    iVar3 = of_find_property(*(param_1 + 0x300),"qcom,full-encrypted-tz-logs-enabled",0);
                    *0x8000263 = iVar3 != 0;
                    puVar5 = _segment.ehdr;
                }
            }
            else {
                if (iVar1 == -5) {
                    _printk(0x80003ac,0xfffffffb);
                }
                else {
                    _printk(0x8000ce2,iVar1);
                }
                *0x8000260 = false;
code_r0x0800396c:
                puVar5 = devm_ioremap(iVar7,uVar11 & 0xffffffff,_segment.ehdr & 0xffffffff);
                uVar11 = _segment.ehdr & 0xffffffff;
                _segment.ehdr = puVar5;
                if (puVar5 == NULL) {
                    pcVar8 = "%s: could not ioremap: start=%pr, len=%u\n";
                    goto code_r0x08003770;
                }
                puVar5 = __kmalloc(uVar11,0xdc0);
                if (puVar5 == NULL) {
                    iVar1 = -0xc;
                    goto code_r0x08003778;
                }
            }
            _segment.ehdr = puVar5;
            uStack_78 = CONCAT44(uStack_78._4_4_,3);
            uStack_6c = 6;
            if (*0x8000261 == '\0') {
                uVar11 = 0x8000;
code_r0x08003a10:
                _segment.ehdr = CONCAT44(*0x8000004,uVar11);
            }
            else {
                iVar1 = of_property_read_variable_u32_array
                                  (*(param_1 + 0x300),"qseelog-buf-size-v2",obj.qseelog_buf_size,1,0);
                if (iVar1 < 0) {
                    uVar11 = 0x20000;
                    goto code_r0x08003a10;
                }
                uVar11 = _segment.ehdr & 0xffffffff;
            }
            puVar5 = dma_alloc_attrs(iVar7,uVar11,obj.coh_pmem,0xcc0,0);
            if (puVar5 != NULL) {
                if ((*0x8000260 == '\0') &&
                   (iVar1 = qtee_shmbridge_register
                                      (_segment.ehdr,_segment.ehdr & 0xffffffff,&uStack_78,&uStack_6c,1,6,
                                       obj.qseelog_shmbridge_handle), iVar1 != 0)) {
                    _printk(0x8000d91);
                }
                else {
                    _segment.ehdr = puVar5;
                    *puVar5 = 0;
                    iVar1 = qcom_scm_register_qsee_log_buf(_segment.ehdr,puVar5 & 0xffffffff);
                    if (iVar1 == 0) {
                        uStack_78 = CONCAT44(uStack_78._4_4_,3);
                        uStack_6c = 6;
                        if (*0x8000260 == '\0') {
code_r0x08003b48:
                            if (_segment.ehdr >> 0x1e == 0) {
                                iVar3 = (_segment.ehdr & 0xffffffff) << 2;
                                _segment.ehdr = CONCAT44(*0x8000004,iVar3);
                                _segment.ehdr = dma_alloc_attrs(iVar7,iVar3,obj.disp_buf_paddr,0xcc0,0);
                                if (_segment.ehdr != NULL) {
                                    iVar3 = proc_mkdir("tzdbg",0);
                                    if (iVar3 != 0) {
                                        iVar4 = 0;
                                        uVar12 = 0xfffffff9;
                                        do {
                                            *(obj.coh_pmem + iVar4) = uVar12 + 7;
                                            if (((*0x8000258 != '\0') || (2 < uVar12)) &&
                                               (iVar6 = proc_create_data(*(iVar4 * 8 + 0x8000120),0x124,iVar3,
                                                                         obj.debug_rw_buf_size,obj.coh_pmem + iVar4),
                                               iVar6 == 0)) {
                                                _dev_err(iVar7,"TZ proc_create_data failed\n");
                                                remove_proc_entry("tzdbg",0);
                                                goto code_r0x08003e04;
                                            }
                                            iVar4 = iVar4 + 4;
                                            uVar12 = uVar12 + 1;
                                        } while (iVar4 != 0x28);
                                        iVar1 = 0;
                                        *(param_1 + 0xa8) = iVar3;
                                        goto code_r0x08003778;
                                    }
                                    _dev_err(iVar7,"tzdbg proc_mkdir failed\n");
code_r0x08003e04:
                                    dma_free_attrs(iVar7,_segment.ehdr & 0xffffffff,_segment.ehdr,_segment.ehdr,0);
                                }
                                qtee_shmbridge_deregister(*0x80000d0);
                                dma_free_attrs(iVar7,*0x80000c8,*0x80000c0,_obj.enc_tzlog_info,0);
                                qtee_shmbridge_deregister(_obj.tzdbg);
                                dma_free_attrs(iVar7,*0x80000a8,*0x80000a0,_obj.enc_qseelog_info,0);
                            }
                            else {
                                _printk(0x80004d1);
                            }
                        }
                        else {
                            *0x80000a8 = (_segment.ehdr & 0xffffffff) + 0x1000;
                            *0x80000a0 = dma_alloc_attrs(iVar7,*0x80000a8,obj.enc_qseelog_info,0xcc0,0);
                            if (*0x80000a0 != 0) {
                                iVar1 = qtee_shmbridge_register
                                                  (_obj.enc_qseelog_info,*0x80000a8,&uStack_78,&uStack_6c,1,6,
                                                   obj.tzdbg);
                                if (iVar1 == 0) {
                                    *0x80000c8 = _segment.ehdr & 0xffffffff;
                                    *0x80000c0 = dma_alloc_attrs(iVar7,*0x80000c8,obj.enc_tzlog_info,0xcc0,0);
                                    if (*0x80000c0 != 0) {
                                        iVar1 = qtee_shmbridge_register
                                                          (_obj.enc_tzlog_info,*0x80000c8,&uStack_78,&uStack_6c,1,6
                                                           ,0x80000d0);
                                        if (iVar1 == 0) goto code_r0x08003b48;
                                        _printk(0x8000dc3,iVar1);
                                        dma_free_attrs(iVar7,*0x80000c8,*0x80000c0,_obj.enc_tzlog_info,0);
                                    }
                                    qtee_shmbridge_deregister(_segment.ehdr);
                                }
                                else {
                                    _printk(0x80007c6,iVar1);
                                }
                                dma_free_attrs(iVar7,*0x80000a8,*0x80000a0,_obj.enc_qseelog_info,0);
                            }
                            _dev_err(iVar7,"Failed to allocate encrypted log buffer\n","tz_log_probe");
                        }
                    }
                    else {
                        _printk(0x8000e91,"tzdbg_register_qsee_log_buf",iVar1);
                    }
                    if (*0x8000260 == '\0') {
                        qtee_shmbridge_deregister(_segment.ehdr);
                    }
                }
                dma_free_attrs(iVar7,_segment.ehdr & 0xffffffff,_segment.ehdr,_segment.ehdr,0);
            }
            if (*0x8000260 == '\0') {
                kfree(_segment.ehdr);
            }
        }
    }
    iVar1 = -6;
code_r0x08003778:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_68) {
        iVar7 = __stack_chk_fail();
        *extraout_x18 = sym.tz_log_remove;
        if (*(iVar7 + 0xa8) != 0) {
            remove_proc_entry("tzdbg",0);
        }
        iVar7 = iVar7 + 0x10;
        dma_free_attrs(iVar7,_segment.ehdr & 0xffffffff,_obj.disp_buf_paddr,_segment.ehdr,0);
        qtee_shmbridge_deregister(*0x80000d0);
        dma_free_attrs(iVar7,*0x80000c8,*0x80000c0,_obj.enc_tzlog_info,0);
        qtee_shmbridge_deregister(_obj.tzdbg);
        dma_free_attrs(iVar7,*0x80000a8,*0x80000a0,_obj.enc_qseelog_info,0);
        if (*0x8000260 == '\0') {
            qtee_shmbridge_deregister(_segment.ehdr);
        }
        dma_free_attrs(iVar7,_segment.ehdr & 0xffffffff,_segment.ehdr,_segment.ehdr,0);
        if (*0x8000260 == '\0') {
            kfree(_segment.ehdr);
        }
        return 0;
    }
    return iVar1;
}


// ===== sym.tzdbg_procfs_poll.b45790df8a7b92bdf9877ec0bcfc3661.cfi_jt @ 0x08002148 (size 8) =====

ulong sym.tzdbg_procfs_poll.b45790df8a7b92bdf9877ec0bcfc3661.cfi_jt(int64_t param_1,ulong *param_2)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0xd8) == 0) {
        _printk(0x8000bc7,"tzdbg_procfs_poll");
    }
    else if (**(*(param_1 + 0xd8) + 0x80) == 5) {
        if (*0x8000260 == '\0') {
            __memcpy_fromio(*0x80000c8,_obj.tzdbg,CONCAT22(*0x8000002,_segment.ehdr));
            iVar1 = *0x80000c8 + *(*0x80000c8 + 0x1c);
            if (*0x8000261 == '\0') {
                if (_segment.ehdr != *(iVar1 + -2)) {
                    return 0x41;
                }
                if (_segment.ehdr != *(iVar1 + -4)) {
                    return 0x41;
                }
            }
            else if ((CONCAT22(*0x8000002,_segment.ehdr) != *(iVar1 + -4)) ||
                    (CONCAT22(*0x8000002,_segment.ehdr) != *(iVar1 + -8))) {
                return 0x41;
            }
        }
        else {
            if ((*0x8000262 == '\0') && (*0x8000263 != '\0')) {
                _printk(0x8000b26);
            }
            iVar2 = qcom_scm_request_encrypted_log
                              (_obj.enc_qseelog_info,*0x80000a8,0,*0x8000262 != '\0',*0x8000263 != '\0');
            if ((iVar2 == 0) && (*(CONCAT44(*0x8000004,CONCAT22(*0x8000002,_segment.ehdr)) + 8) != 0)) {
                return 0x41;
            }
        }
        if ((param_2 != NULL) && (pcVar3 = *param_2, pcVar3 != NULL)) {
            __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar3,0x8000360);
            (*pcVar3)(param_1,tzdbg_log_wq,param_2);
        }
    }
    return 0;
}


// ===== sym.tzdbg_procfs_release.b45790df8a7b92bdf9877ec0bcfc3661.cfi_jt @ 0x08002150 (size 8) =====

void sym.tzdbg_procfs_release.b45790df8a7b92bdf9877ec0bcfc3661.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_release();
    return;
}


// ===== sym.tzdbg_procfs_open.b45790df8a7b92bdf9877ec0bcfc3661.cfi_jt @ 0x08002158 (size 8) =====

void sym.tzdbg_procfs_open.b45790df8a7b92bdf9877ec0bcfc3661.cfi_jt(ulong param_1,ulong param_2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = PDE_DATA();
    single_open(param_2,0,uVar1);
    return;
}


// ===== sym.tzdbg_procfs_open @ 0x08002160 (size 64) =====

void sym.tzdbg_procfs_open(ulong noname_0,int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = PDE_DATA();
    single_open(arg1,0,uVar1);
    return;
}


// ===== sym.tzdbg_fs_read @ 0x080021a0 (size 3136) =====

int64_t sym.tzdbg_fs_read(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    uint32_t uVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    code *pcVar5;
    bool bVar6;
    bool bVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    uint *puVar11;
    int64_t iVar12;
    uint64_t uVar13;
    ulong uVar14;
    uint64_t uVar15;
    uint16_t uVar16;
    uint32_t uVar17;
    int64_t iVar18;
    uint32_t uVar19;
    uint32_t uVar20;
    ulong *in_x18;
    uint32_t uVar21;
    int64_t iVar22;
    uint64_t uVar23;
    uint32_t uVar24;
    uint *puVar25;
    ushort *puVar26;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0xd8) == 0) {
        _printk(0x8000bc7,"tzdbg_fs_read");
code_r0x08002670:
        uVar2 = CONCAT22(*0x8000002,_segment.ehdr);
        iVar12 = 0;
        goto code_r0x08002bf4;
    }
    uVar2 = **(*(arg1 + 0xd8) + 0x80);
    iVar22 = uVar2;
    if (((*0x8000260 != '\0' && uVar2 != 7) && uVar2 != 8) && uVar2 != 9) {
        if (10 < uVar2) goto code_r0x08002dd8;
        if (uVar2 != 10) {
            iVar12 = iVar22 * 0x20;
            if (iVar12 - 0x161U < 0xfffffffffffffe3f) {
code_r0x08002ddc:
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(1,0x8002de0);
                (*pcVar5)();
            }
            piVar1 = iVar12 + 0x8000110;
            iVar18 = *piVar1;
            if (iVar18 == 0) {
                if (uVar2 != 6) {
                    uVar13 = uVar2;
                    pcVar5 = obj.enc_tzlog_info;
                }
                else {
                    uVar13 = 6;
                    pcVar5 = obj.enc_qseelog_info;
                }
                iVar8 = sym._disp_encrpted_log_stats(pcVar5,uVar13,uVar2 == 6);
                iVar18 = iVar8;
                *piVar1 = iVar18;
                if (iVar12 - 0x159U < 0xfffffffffffffe3f) goto code_r0x08002ddc;
                *(iVar22 * 0x20 + 0x8000118) = 0;
            }
            *arg4 = 0;
            if (iVar12 - 0x149U < 0xfffffffffffffe3f) goto code_r0x08002ddc;
            iVar22 = iVar22 * 0x20;
            iVar12 = arg3;
            if (iVar18 <= arg3) {
                iVar12 = iVar18;
            }
            iVar8 = simple_read_from_buffer(arg2,iVar12,arg4,*(iVar22 + 0x8000128) + *(iVar22 + 0x8000118),arg3);
            iVar12 = iVar8;
            *(iVar22 + 0x8000118) = iVar12 + *(iVar22 + 0x8000118);
            *piVar1 = *piVar1 - iVar12;
            uVar2 = CONCAT22(*0x8000002,_segment.ehdr);
            goto code_r0x08002bf4;
        }
        _printk(0x8000c51,10);
        goto code_r0x08002670;
    }
    if (uVar2 < 6) {
        puVar11 = *0x80000c8;
        uVar14 = _obj.tzdbg;
        uVar21 = CONCAT22(*0x8000002,_segment.ehdr);
code_r0x080022a0:
        __memcpy_fromio(puVar11,uVar14,uVar21);
    }
    else {
        puVar11 = *0x80000d0;
        uVar14 = _obj.enc_tzlog_info;
        uVar21 = *0x8000250;
        if (uVar2 - 7 < 2) goto code_r0x080022a0;
    }
    puVar25 = *0x80000d0;
    puVar11 = *0x80000c8;
    uVar21 = arg3;
    if (9 < uVar2) {
        uVar20 = 0;
        goto code_r0x08002bbc;
    }
    //switch table (10 cases) at 0x8000380
    switch(*(uVar2 * 2 + 0x8000380) * 4 + 0x80022c8) {
    case 0x80022cc:
        iVar22 = CONCAT44(*0x8000004,CONCAT22(*0x8000002,_segment.ehdr));
        if (*(iVar22 + 8) == 0) {
            uVar20 = 0;
        }
        else {
            uVar24 = 0;
            uVar20 = 0;
            puVar11 = iVar22 + *(iVar22 + 0x14);
            iVar8 = CONCAT22(*0x8000002,_segment.ehdr);
            do {
                iVar9 = scnprintf(CONCAT44(*0x8000004,CONCAT22(*0x8000002,_segment.ehdr)) + uVar20,iVar8 + ~uVar20,
                                  "  CPU #: %d\n     Reset Type (reason)       : 0x%x\n     Reset counter             : 0x%x\n"
                                  ,uVar24,*puVar11,puVar11[1]);
                iVar8 = CONCAT22(*0x8000002,_segment.ehdr);
                uVar20 = iVar9 + uVar20;
                if (iVar8 - 1U < uVar20) {
                    _printk(0x8000b9c,"_disp_tz_reset_stats");
                    break;
                }
                uVar24 = uVar24 + 1;
                puVar11 = puVar11 + 2;
            } while (uVar24 < *(CONCAT44(*0x8000004,CONCAT22(*0x8000002,_segment.ehdr)) + 8));
        }
        *0x8000148 = _obj.disp_buf_paddr;
        break;
    case 0x8002404:
        iVar22 = CONCAT44(*0x8000004,CONCAT22(*0x8000002,_segment.ehdr));
        uVar24 = *(iVar22 + 0x10) - *(iVar22 + 0xc);
        if (uVar24 < 8) {
            uVar20 = 0;
        }
        else {
            uVar20 = 0;
            uVar24 = uVar24 >> 3;
            iVar22 = *(iVar22 + 0xc) + iVar22 + 1;
            do {
                if (*(iVar22 + -1) != -1) {
                    iVar8 = scnprintf(CONCAT44(*0x8000004,CONCAT22(*0x8000002,_segment.ehdr)) + uVar20,
                                      CONCAT22(*0x8000002,_segment.ehdr) + ~uVar20,"   0x%x        %s\n",
                                      *(iVar22 + -1),iVar22);
                    uVar20 = iVar8 + uVar20;
                }
                if (CONCAT22(*0x8000002,_segment.ehdr) - 1U < uVar20) {
                    _printk(0x8000b9c,"_disp_tz_vmid_stats");
                    break;
                }
                uVar24 = uVar24 - 1;
                iVar22 = iVar22 + 8;
            } while (uVar24 != 0);
        }
        *0x8000188 = _obj.disp_buf_paddr;
        break;
    case 0x8002428:
        uVar20 = scnprintf(_obj.disp_buf_paddr,CONCAT22(*0x8000002,_segment.ehdr) + -1,
                           "   Version        : 0x%x\n   Magic Number   : 0x%x\n   Number of CPU  : %d\n",
                           (*0x80000c8)[1],**0x80000c8,(*0x80000c8)[2]);
        *0x80001a8 = _obj.disp_buf_paddr;
        goto code_r0x08002940;
    case 0x8002468:
        iVar12 = CONCAT44(*0x8000004,CONCAT22(*0x8000002,_segment.ehdr));
        iVar22 = iVar12 + *(iVar12 + 0x1c);
        if (0x2ffff < *(iVar12 + 4)) {
            uVar13 = *(iVar12 + 0x20);
            if (*0x8000261 == '\0') {
                iVar22 = iVar22 + -4;
                pcVar5 = obj._disp_tz_log_stats.log_start;
                goto code_r0x08002938;
            }
            iVar22 = iVar22 + -8;
            pcVar5 = obj._disp_tz_log_stats.log_start_v2;
code_r0x080024d8:
            uVar20 = sym._disp_log_stats_v2(iVar22,pcVar5,uVar13,arg3);
            goto code_r0x0800293c;
        }
        uVar20 = scnprintf(_obj.disp_buf_paddr,CONCAT22(*0x8000002,_segment.ehdr) + -1,0x8000f39);
        *0x80001c8 = _obj.disp_buf_paddr;
        goto code_r0x08002940;
    case 0x80024b0:
        if (*0x8000261 != '\0') {
            pcVar5 = obj._disp_qsee_log_stats.log_start_v2;
            uVar13 = 0x1fff8;
            iVar22 = CONCAT44(*0x8000004,CONCAT22(*0x8000002,_segment.ehdr));
            goto code_r0x080024d8;
        }
        pcVar5 = reloc.tzdbg_fs_read.b45790df8a7b92bdf9877ec0bcfc3661.cfi_jt;
        uVar13 = 0x7ffc;
        iVar22 = CONCAT44(*0x8000004,CONCAT22(*0x8000002,_segment.ehdr));
code_r0x08002938:
        uVar20 = sym._disp_log_stats(iVar22,pcVar5,uVar13,arg3);
code_r0x0800293c:
        *arg4 = 0;
code_r0x08002940:
        if (uVar20 <= arg3) {
            uVar21 = uVar20;
        }
        goto code_r0x08002bd0;
    case 0x80024e4:
        uVar20 = scnprintf(_obj.disp_buf_paddr,*0x8000250 - 1,
                           "   Magic Number    : 0x%x\n   CPU Count       : 0x%x\n   S2 Fault Counter: 0x%x\n",
                           **0x80000d0,(*0x80000d0)[1],(*0x80000d0)[5]);
        if ((*0x80000d0)[1] != 0) {
            uVar24 = 0;
            puVar11 = *0x80000d0 + 6;
            uVar17 = CONCAT22(*0x8000002,_segment.ehdr);
            do {
                iVar8 = scnprintf(_obj.disp_buf_paddr + uVar20,uVar17 + ~uVar20,
                                  "  CPU #: %d\n     Warmboot entry CPU counter: 0x%x\n     Warmboot exit CPU counter : 0x%x\n"
                                  ,uVar24,*puVar11,puVar11[1]);
                uVar20 = iVar8 + uVar20;
                if (*0x8000250 - 1 < uVar20) {
                    _printk(0x8000b9c,"_disp_hyp_general_stats");
                    break;
                }
                uVar24 = uVar24 + 1;
                puVar11 = puVar11 + 2;
                uVar17 = *0x8000250;
            } while (uVar24 < *(CONCAT44(*0x8000004,CONCAT22(*0x8000002,_segment.ehdr)) + 4));
        }
        *0x8000208 = _obj.disp_buf_paddr;
        break;
    case 0x80025a8:
        uVar16 = *(*0x80000d0 + 3);
        uVar24 = (*0x80000d0)[2];
        uVar17 = *0x8000250 - uVar24;
        uVar20 = 2;
        if (_segment.ehdr <= uVar16) {
            uVar20 = uVar16 - _segment.ehdr;
        }
        if (uVar20 < 2) {
            uVar16 = _segment.ehdr;
            if (uVar20 == 1) {
                uVar3 = *(*0x80000d0 + 0xe);
                uVar20 = uVar3;
                uVar13 = _segment.ehdr;
                if (_segment.ehdr < uVar3) {
                    uVar19 = 0;
                    if (uVar17 != 0) {
                        uVar19 = (uVar3 + 1) / uVar17;
                    }
                    uVar19 = (uVar3 + 1) - uVar19 * uVar17;
                    uVar13 = uVar19 & 0xffff;
                    _segment.ehdr = uVar19;
                }
            }
            else {
                uVar20 = *(*0x80000d0 + 0xe);
                uVar13 = _segment.ehdr;
            }
        }
        else {
            uVar20 = *(*0x80000d0 + 0xe);
            uVar19 = *(*0x80000d0 + 0xe) + 1;
            uVar4 = 0;
            if (uVar17 != 0) {
                uVar4 = uVar19 / uVar17;
            }
            uVar19 = uVar19 - uVar4 * uVar17;
            uVar13 = uVar19 & 0xffff;
            _segment.ehdr = uVar19;
            uVar16 = uVar16 - 1;
        }
        uVar19 = *0x8000250;
        if (uVar13 == uVar20) {
            do {
                iVar22 = msleep_interruptible(0x32);
                if (iVar22 != 0) goto code_r0x08002bb4;
                __memcpy_fromio(*0x80000d0,_obj.enc_tzlog_info,*0x8000250);
                uVar13 = _segment.ehdr;
                uVar20 = *(puVar25 + 0xe);
            } while (_segment.ehdr == uVar20);
            uVar19 = CONCAT22(*0x8000002,_segment.ehdr);
            uVar16 = _segment.ehdr;
        }
        iVar22 = 0;
        if (arg3 <= uVar19) {
            uVar19 = uVar21;
        }
        if ((uVar13 != uVar20) && (0 < uVar19)) {
            iVar22 = 0;
            do {
                uVar20 = uVar13 + 1;
                uVar4 = 0;
                if (uVar17 != 0) {
                    uVar4 = uVar20 / uVar17;
                }
                uVar20 = uVar20 - uVar4 * uVar17;
                iVar12 = uVar13 + uVar24;
                uVar4 = uVar20 & 0xffff;
                uVar13 = uVar4;
                *(CONCAT44(*0x8000004,CONCAT22(*0x8000002,_segment.ehdr)) + iVar22) = *(puVar25 + iVar12);
                if (uVar4 == 0) {
                    _segment.ehdr = uVar16 + 1;
                    uVar16 = _segment.ehdr;
                }
                iVar22 = iVar22 + 1;
                bVar6 = false;
                bVar7 = false;
                if (*(puVar25 + 0xe) != uVar4) {
                    bVar7 = SBORROW4(iVar22,uVar19);
                    bVar6 = iVar22 - uVar19 < 0;
                }
            } while (bVar6 != bVar7);
            _segment.ehdr = uVar20;
        }
        uVar20 = iVar22;
        *0x8000228 = _obj.disp_buf_paddr;
        goto code_r0x08002bb8;
    case 0x800260c:
        uVar20 = CONCAT22(*0x8000002,_segment.ehdr);
        if ((uVar20 == 0) && (obj._disp_rm_log_stats.wrap_around == 0x1)) {
            uVar20 = 0;
            obj._disp_rm_log_stats.wrap_around = 0x0;
        }
        else if (CONCAT22(*0x8000002,_segment.ehdr) == 0) {
            _printk(0x8000afb,0);
code_r0x08002bb4:
            uVar20 = 0;
        }
        else {
            iVar22 = CONCAT44(*0x8000004,CONCAT22(*0x8000002,_segment.ehdr));
            if (obj._disp_rm_log_stats.wrap_around == 0x1) {
                uVar24 = CONCAT22(*0x8000002,_segment.ehdr);
            }
            else {
                __memcpy_fromio(iVar22,*0x80000c0);
                uVar24 = 0;
                uVar20 = *(_obj.qseelog_buf_size + 4);
                iVar22 = _obj.qseelog_buf_size;
            }
            uVar13 = uVar20;
            if (arg3 <= uVar20) {
                uVar13 = arg3;
            }
            uVar17 = uVar13;
            _segment.ehdr = uVar24 + uVar17;
            if (uVar20 != uVar17) {
                obj._disp_rm_log_stats.wrap_around = 0x1;
            }
            uVar23 = 0;
            uVar15 = _segment.ehdr;
            if ((uVar17 != 0) && (_segment.ehdr != 0)) {
                uVar23 = 0;
                do {
                    *(CONCAT44(*0x8000004,_segment.ehdr) + uVar23) = *(iVar22 + uVar24 + 8 + uVar23);
                    uVar23 = uVar23 + 1;
                    if (uVar13 <= uVar23) break;
                } while (uVar23 < uVar15);
            }
            uVar20 = uVar23;
            if (uVar20 != uVar17) {
                _printk(0x8000e4b,uVar23 & 0xffffffff);
            }
            *0x8000248 = _obj.disp_buf_paddr;
        }
code_r0x08002bb8:
        *arg4 = 0;
        break;
    case 0x8002954:
        _printk(0x8000ecf,*0x800025c);
        if ((*0x80000c8)[2] != 0) {
            uVar20 = 0;
            uVar24 = 1;
            iVar8 = CONCAT22(*0x8000002,_segment.ehdr);
            puVar25 = NULL;
            puVar11 = *0x80000c8 + (*0x80000c8)[4];
            uVar17 = *0x800025c;
            if (*0x800025c >> 0x17 == 0) {
                puVar11 = NULL;
                puVar25 = *0x80000c8 + (*0x80000c8)[4];
            }
            do {
                iVar22 = CONCAT44(*0x8000004,CONCAT22(*0x8000002,_segment.ehdr)) + uVar20;
                if (uVar17 < 0x800000) {
                    iVar9 = scnprintf(iVar22,iVar8 + ~uVar20,
                                      "  CPU #: %d\n     Warmboot jump address     : 0x%x\n     Warmboot entry CPU counter: 0x%x\n     Warmboot exit CPU counter : 0x%x\n     Power Collapse entry CPU counter: 0x%x\n     Power Collapse exit CPU counter : 0x%x\n"
                                      ,uVar24 - 1,puVar25[4],*puVar25,puVar25[1],puVar25[2],puVar25[3]);
                    iVar8 = CONCAT22(*0x8000002,_segment.ehdr);
                    uVar20 = iVar9 + uVar20;
                    if (iVar8 - 1U < uVar20) goto code_r0x08002da4;
                    puVar25 = puVar25 + 6;
                }
                else {
                    iVar9 = scnprintf(iVar22,iVar8 + ~uVar20,
                                      "  CPU #: %d\n     Warmboot jump address : 0x%llx\n     Warmboot entry CPU counter : 0x%x\n     Warmboot exit CPU counter : 0x%x\n     Power Collapse entry CPU counter : 0x%x\n     Power Collapse exit CPU counter : 0x%x\n     Psci entry CPU counter : 0x%x\n     Psci exit CPU counter : 0x%x\n     Warmboot Jump Address Instruction : 0x%x\n"
                                      ,uVar24 - 1,*(puVar11 + 6),*puVar11,puVar11[1],puVar11[2],puVar11[3],
                                      puVar11[4],puVar11[5],puVar11[8]);
                    iVar8 = CONCAT22(*0x8000002,_segment.ehdr);
                    uVar20 = iVar9 + uVar20;
                    if (iVar8 - 1U < uVar20) {
code_r0x08002da4:
                        _printk(0x8000b9c,"_disp_tz_boot_stats");
                        goto code_r0x08002d74;
                    }
                    puVar11 = puVar11 + 10;
                }
                if (*(CONCAT44(*0x8000004,CONCAT22(*0x8000002,_segment.ehdr)) + 8) <= uVar24) goto code_r0x08002d74;
                uVar24 = uVar24 + 1;
                uVar17 = CONCAT22(*0x8000002,_segment.ehdr);
            } while( true );
        }
        uVar20 = 0;
code_r0x08002d74:
        *0x8000128 = _obj.disp_buf_paddr;
        break;
    case 0x8002a70:
        iVar22 = (*0x80000c8)[6] - 4;
        puVar26 = *0x80000c8 + (*0x80000c8)[6];
        _printk(0x8000ecf,*0x800025c);
        if (*0x800025f == '\0') {
            if (*(puVar11 + iVar22) < 1) {
code_r0x08002d88:
                uVar20 = 0;
            }
            else {
                iVar8 = 0;
                uVar20 = 0;
                iVar9 = CONCAT22(*0x8000002,_segment.ehdr);
                do {
                    iVar9 = scnprintf(_obj.disp_buf_paddr + uVar20,iVar9 + ~uVar20,
                                      "     Interrupt Number          : 0x%x\n     Type of Interrupt         : 0x%x\n     Description of interrupt  : %s\n"
                                      ,*(puVar26 + 2),*puVar26,puVar26 + 4);
                    uVar20 = iVar9 + uVar20;
                    if ((*0x80000c8)[2] != 0) {
                        uVar13 = 0;
                        do {
                            if (uVar13 == 8) goto code_r0x08002dd8;
                            iVar9 = scnprintf(_obj.disp_buf_paddr + uVar20,
                                              CONCAT22(*0x8000002,_segment.ehdr) + ~uVar20,
                                              "     int_count on CPU # %d      : %u\n",uVar13 & 0xffffffff,
                                              *(puVar26 + uVar13 * 4 + 0xc));
                            uVar20 = iVar9 + uVar20;
                            uVar13 = uVar13 + 1;
                        } while (uVar13 < (*0x80000c8)[2]);
                    }
                    iVar10 = scnprintf(CONCAT44(*0x8000004,CONCAT22(*0x8000002,_segment.ehdr)) + uVar20,
                                       CONCAT22(*0x8000002,_segment.ehdr) + -1,0x8000c2b);
                    iVar9 = CONCAT22(*0x8000002,_segment.ehdr);
                    uVar20 = iVar10 + uVar20;
                    if (iVar9 - 1U < uVar20) goto code_r0x08002dc0;
                    puVar26 = puVar26 + 0x2c;
                    iVar8 = iVar8 + 1;
                } while (iVar8 < *(puVar11 + iVar22));
            }
        }
        else {
            if (*(puVar11 + iVar22) < 1) goto code_r0x08002d88;
            iVar8 = 0;
            uVar20 = 0;
            iVar9 = CONCAT22(*0x8000002,_segment.ehdr);
            do {
                iVar9 = scnprintf(_obj.disp_buf_paddr + uVar20,iVar9 + ~uVar20,
                                  "     Interrupt Number          : 0x%x\n     Type of Interrupt         : 0x%x\n     Description of interrupt  : %s\n"
                                  ,*(puVar26 + 2),*puVar26,puVar26 + 4);
                uVar20 = iVar9 + uVar20;
                if ((*0x80000c8)[2] != 0) {
                    uVar13 = 0;
                    do {
                        if (uVar13 == 8) goto code_r0x08002dd8;
                        iVar9 = scnprintf(_obj.disp_buf_paddr + uVar20,CONCAT22(*0x8000002,_segment.ehdr) + ~uVar20,
                                          "     int_count on CPU # %d      : %u\n",uVar13 & 0xffffffff,
                                          *(puVar26 + uVar13 * 2 + 0xc));
                        uVar20 = iVar9 + uVar20;
                        uVar13 = uVar13 + 1;
                    } while (uVar13 < (*0x80000c8)[2]);
                }
                iVar10 = scnprintf(CONCAT44(*0x8000004,CONCAT22(*0x8000002,_segment.ehdr)) + uVar20,
                                   CONCAT22(*0x8000002,_segment.ehdr) + -1,0x8000c2b);
                iVar9 = CONCAT22(*0x8000002,_segment.ehdr);
                uVar20 = iVar10 + uVar20;
                if (iVar9 - 1U < uVar20) goto code_r0x08002dc0;
                puVar26 = puVar26 + 0x1c;
                iVar8 = iVar8 + 1;
            } while (iVar8 < *(puVar11 + iVar22));
        }
code_r0x08002d8c:
        *0x8000168 = _obj.disp_buf_paddr;
    }
code_r0x08002bbc:
    if (uVar20 <= arg3) {
        uVar21 = uVar20;
    }
    if (9 < uVar2) {
code_r0x08002dd8:
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x8002ddc);
        (*pcVar5)();
    }
code_r0x08002bd0:
    iVar12 = simple_read_from_buffer(arg2,uVar21,arg4,*(uVar2 * 0x20 + 0x8000128),uVar21);
    uVar2 = _segment.ehdr;
code_r0x08002bf4:
    *0x8000002 = uVar2 >> 0x10;
    _segment.ehdr = uVar2;
    return iVar12;
code_r0x08002dc0:
    _printk(0x8000c2d,"_disp_tz_interrupt_stats");
    goto code_r0x08002d8c;
}


// ===== sym.tzdbg_procfs_release @ 0x08002de0 (size 36) =====

void sym.tzdbg_procfs_release(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_release();
    return;
}


// ===== sym.tzdbg_procfs_poll @ 0x08002e04 (size 436) =====

ulong sym.tzdbg_procfs_poll(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0xd8) == 0) {
        _printk(0x8000bc7,"tzdbg_procfs_poll");
    }
    else if (**(*(arg1 + 0xd8) + 0x80) == 5) {
        if (*0x8000260 == '\0') {
            __memcpy_fromio(*0x80000c8,_obj.tzdbg,CONCAT22(*0x8000002,_segment.ehdr));
            iVar1 = *0x80000c8 + *(*0x80000c8 + 0x1c);
            if (*0x8000261 == '\0') {
                if (_segment.ehdr != *(iVar1 + -2)) {
                    return 0x41;
                }
                if (_segment.ehdr != *(iVar1 + -4)) {
                    return 0x41;
                }
            }
            else if ((CONCAT22(*0x8000002,_segment.ehdr) != *(iVar1 + -4)) ||
                    (CONCAT22(*0x8000002,_segment.ehdr) != *(iVar1 + -8))) {
                return 0x41;
            }
        }
        else {
            if ((*0x8000262 == '\0') && (*0x8000263 != '\0')) {
                _printk(0x8000b26);
            }
            iVar2 = qcom_scm_request_encrypted_log
                              (_obj.enc_qseelog_info,*0x80000a8,0,*0x8000262 != '\0',*0x8000263 != '\0');
            if ((iVar2 == 0) && (*(CONCAT44(*0x8000004,CONCAT22(*0x8000002,_segment.ehdr)) + 8) != 0)) {
                return 0x41;
            }
        }
        if ((arg2 != 0) && (pcVar3 = *arg2, pcVar3 != NULL)) {
            __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar3,0x8000360);
            (*pcVar3)(arg1,tzdbg_log_wq,arg2);
        }
    }
    return 0;
}


// ===== sym._disp_log_stats @ 0x08002fb8 (size 412) =====

int64_t sym._disp_log_stats(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    bool bVar4;
    bool bVar5;
    int64_t iVar6;
    uint32_t in_w4;
    uint64_t uVar7;
    uint32_t uVar8;
    ulong *in_x18;
    uint32_t uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *arg1;
    uVar3 = arg3;
    uVar8 = 2;
    if (*arg2 <= uVar1) {
        uVar8 = uVar1 - *arg2;
    }
    if (uVar8 < 2) {
        if (uVar8 != 1) {
            uVar7 = *(arg2 + 2);
            goto code_r0x08003050;
        }
        uVar1 = *(arg1 + 2);
        uVar7 = *(arg2 + 2);
        if (uVar1 <= *(arg2 + 2)) goto code_r0x08003050;
    }
    else {
        *arg2 = uVar1 - 1;
        uVar1 = *(arg1 + 2);
    }
    uVar8 = 0;
    if (uVar3 != 0) {
        uVar8 = (uVar1 + 1) / uVar3;
    }
    uVar8 = (uVar1 + 1) - uVar8 * uVar3;
    uVar7 = uVar8 & 0xffff;
    *(arg2 + 2) = uVar8;
code_r0x08003050:
    uVar8 = *(arg1 + 2);
    if (uVar7 == *(arg1 + 2)) {
        do {
            iVar6 = msleep_interruptible(0x32);
            if (iVar6 != 0) {
                return 0;
            }
            if (in_w4 == 5) {
                __memcpy_fromio(*0x80000c8,_obj.tzdbg,_segment.ehdr);
            }
            uVar7 = *(arg2 + 2);
            uVar8 = *(arg1 + 2);
        } while (*(arg2 + 2) == uVar8);
    }
    iVar6 = 0;
    uVar9 = _segment.ehdr;
    if (arg4 <= _segment.ehdr) {
        uVar9 = arg4;
    }
    if ((uVar7 != uVar8) && (0 < uVar9)) {
        iVar6 = 0;
        do {
            *(CONCAT44(*0x8000004,_segment.ehdr) + iVar6) = *(arg1 + uVar7 + 4);
            uVar8 = *(arg2 + 2) + 1;
            uVar2 = 0;
            if (uVar3 != 0) {
                uVar2 = uVar8 / uVar3;
            }
            uVar8 = uVar8 - uVar2 * uVar3;
            uVar2 = uVar8 & 0xffff;
            uVar7 = uVar2;
            *(arg2 + 2) = uVar8;
            if (uVar2 == 0) {
                *arg2 = *arg2 + 1;
            }
            iVar6 = iVar6 + 1;
            bVar4 = false;
            bVar5 = false;
            if (*(arg1 + 2) != uVar2) {
                bVar5 = SBORROW4(iVar6,uVar9);
                bVar4 = iVar6 - uVar9 < 0;
            }
        } while (bVar4 != bVar5);
    }
    *(in_w4 * 0x20 + 0x8000128) = _obj.disp_buf_paddr;
    return iVar6;
}


// ===== sym._disp_log_stats_v2 @ 0x08003154 (size 408) =====

int64_t sym._disp_log_stats_v2(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint32_t in_w4;
    uint64_t uVar5;
    uint32_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *arg1;
    uVar3 = arg3;
    uVar6 = 2;
    if (*arg2 <= uVar2) {
        uVar6 = uVar2 - *arg2;
    }
    if (uVar6 < 2) {
        if (uVar6 != 1) {
            uVar5 = *(arg2 + 4);
            goto code_r0x080031e8;
        }
        uVar6 = *(arg1 + 4);
        uVar5 = *(arg2 + 4);
        if (uVar6 <= *(arg2 + 4)) goto code_r0x080031e8;
    }
    else {
        *arg2 = uVar2 - 1;
        uVar6 = *(arg1 + 4);
    }
    uVar2 = 0;
    if (uVar3 != 0) {
        uVar2 = (uVar6 + 1) / uVar3;
    }
    uVar6 = (uVar6 + 1) - uVar2 * uVar3;
    uVar5 = uVar6;
    *(arg2 + 4) = uVar6;
code_r0x080031e8:
    uVar6 = *(arg1 + 4);
    if (uVar5 == uVar6) {
        do {
            iVar4 = msleep_interruptible(0x32);
            if (iVar4 != 0) {
                return 0;
            }
            if (in_w4 == 5) {
                __memcpy_fromio(*0x80000c8,_obj.tzdbg,_segment.ehdr);
            }
            uVar5 = *(arg2 + 4);
            uVar6 = *(arg1 + 4);
        } while (*(arg2 + 4) == uVar6);
    }
    iVar4 = 0;
    uVar1 = _segment.ehdr;
    if (arg4 <= _segment.ehdr) {
        uVar1 = arg4;
    }
    if ((uVar5 != uVar6) && (0 < uVar1)) {
        iVar4 = 0;
        do {
            *(CONCAT44(*0x8000004,_segment.ehdr) + iVar4) = *(arg1 + uVar5 + 8);
            uVar6 = *(arg2 + 4) + 1;
            uVar2 = 0;
            if (uVar3 != 0) {
                uVar2 = uVar6 / uVar3;
            }
            uVar6 = uVar6 - uVar2 * uVar3;
            uVar5 = uVar6;
            *(arg2 + 4) = uVar6;
            if (uVar6 == 0) {
                *arg2 = *arg2 + 1;
            }
            iVar4 = iVar4 + 1;
        } while (uVar6 != *(arg1 + 4) && iVar4 < uVar1);
    }
    *(in_w4 * 0x20 + 0x8000128) = _obj.disp_buf_paddr;
    return iVar4;
}


// ===== sym._disp_encrpted_log_stats @ 0x080032ec (size 512) =====

int sym._disp_encrpted_log_stats(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char *pcVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    int iVar5;
    ulong *in_x18;
    uint *puVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*0x8000262 == '\0') && (*0x8000263 != '\0')) {
        _printk(0x8000b26);
    }
    iVar3 = qcom_scm_request_encrypted_log
                      (*arg1,*(arg1 + 0x10),arg3 & 0xffffffff,*0x8000262 != '\0',*0x8000263 != '\0');
    if (iVar3 == 0) {
        puVar6 = *(arg1 + 8);
        pcVar1 = "QSEE Log";
        if (arg3 != 1) {
            pcVar1 = "TZ Dialog";
        }
        uVar2 = puVar6[2];
        uVar4 = scnprintf(CONCAT44(*0x8000004,_segment.ehdr),_segment.ehdr + -1,
                          "\n-------- New Encrypted %s --------\n",pcVar1);
        iVar5 = scnprintf(CONCAT44(*0x8000004,_segment.ehdr) + uVar4,_segment.ehdr + ~uVar4,
                          "\nMagic_Num :\n0x%x\n\nVerion :\n%d\n\nEncr_Log_Buff_Size :\n%d\n\nWrap_Count :\n%d\n",
                          *puVar6,puVar6[1],puVar6[2],*(puVar6 + 3));
        iVar3 = sym.print_text(0x8000576,puVar6 + 0xe,0x100,CONCAT44(*0x8000004,_segment.ehdr) + iVar5 + uVar4);
        iVar3 = iVar3 + iVar5 + uVar4;
        iVar5 = sym.print_text(0x8000efb,puVar6 + 0x10e,0xc,CONCAT44(*0x8000004,_segment.ehdr) + iVar3);
        iVar5 = iVar5 + iVar3;
        iVar3 = sym.print_text(0x8000f3d,puVar6 + 0x11a,0x10,CONCAT44(*0x8000004,_segment.ehdr) + iVar5);
        uVar4 = iVar3 + iVar5;
        if (_segment.ehdr - uVar2 < uVar4) {
            _printk(0x8000bee);
        }
        iVar3 = sym.print_text(0x8000464,puVar6 + 0x12a,uVar2,_obj.disp_buf_paddr + uVar4);
        memset(*(arg1 + 8),0,*(arg1 + 0x10));
        iVar3 = iVar3 + uVar4;
        *((arg2 & 0xffffffffU) * 0x20 + 0x8000128) = _obj.disp_buf_paddr;
    }
    else {
        iVar3 = 0;
    }
    return iVar3;
}


// ===== sym.print_text @ 0x080034ec (size 292) =====

uint32_t sym.print_text(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int iVar2;
    uint32_t in_w4;
    ulong *in_x18;
    uint64_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg4,in_w4,0x8000f39,arg1);
    if (arg3 != 0) {
        uVar3 = 0;
        do {
            if (in_w4 <= iVar1 + 6U) {
                _printk(0x8000aac,in_w4,iVar1);
                return in_w4;
            }
            iVar2 = scnprintf(arg4 + iVar1,in_w4 - iVar1,"%02hhx ",*(arg2 + uVar3));
            iVar1 = iVar2 + iVar1;
            if ((~uVar3 & 0x1f) == 0) {
                iVar2 = scnprintf(arg4 + iVar1,in_w4 - iVar1,0x8000755,10);
                iVar1 = iVar2 + iVar1;
            }
            uVar3 = uVar3 + 1;
        } while ((arg3 & 0xffffffffU) != uVar3);
    }
    iVar2 = scnprintf(arg4 + iVar1,in_w4 - iVar1,0x8000755,10);
    return iVar2 + iVar1;
}


// ===== sym.tz_log_probe @ 0x08003610 (size 2344) =====

int sym.tz_log_probe(int64_t arg1)

{
    int iVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *puVar5;
    int64_t iVar6;
    int64_t iVar7;
    char *pcVar8;
    uint64_t *puVar9;
    ulong uVar10;
    uint64_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar12;
    ulong unaff_x30;
    uint64_t uStack_80;
    uint64_t uStack_78;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    puVar9 = &uStack_80;
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    uStack_78 = 0;
    iVar1 = qcom_scm_get_tz_log_feat_id(&uStack_78);
    if (iVar1 != 0) {
        _printk(0x8000a41,"tzdbg_get_tz_version");
        goto code_r0x08003778;
    }
    _segment.ehdr = CONCAT44(*0x8000004,uStack_78);
    iVar1 = qcom_scm_get_tz_feat_id_version(6,&uStack_78);
    if (iVar1 != 0) {
        _printk(0x8000b64,"tzdbg_get_tz_version",iVar1);
        goto code_r0x08003778;
    }
    _printk(0x800044b,uStack_78);
    *0x8000268 = uStack_78 >> 0x16;
    *0x8000264 = uStack_78 >> 0xc & 0x3ff;
    *0x8000261 = *0x8000268 == 9 && *0x8000264 - 2 < 3;
    piVar2 = platform_get_resource(arg1,0x200,0);
    if (piVar2 == NULL) {
        _dev_err(arg1 + 0x10,"%s: ERROR Missing MEM resource\n","tz_log_probe");
    }
    else {
        iVar7 = arg1 + 0x10;
        uVar11 = (piVar2[1] - *piVar2) + 1;
        _segment.ehdr = CONCAT44(*0x8000004,uVar11);
        iVar3 = devm_ioremap(iVar7,*piVar2,uVar11 & 0xffffffff);
        if (iVar3 == 0) {
            uVar11 = _segment.ehdr & 0xffffffff;
            pcVar8 = "%s: ERROR could not ioremap: start=%pr, len=%u\n";
            puVar9 = piVar2;
code_r0x08003770:
            _dev_err(iVar7,pcVar8,"tz_log_probe",puVar9,uVar11);
        }
        else {
            puVar5 = _segment.ehdr;
            if (*(arg1 + 0x300) != 0) {
                iVar4 = of_find_property(*(arg1 + 0x300),"qcom,hyplog-enabled",0);
                *0x8000258 = iVar4 != 0;
                if (iVar4 != 0) {
                    uStack_80 = uStack_80 & 0xffffffff00000000;
                    uStack_6c = 0;
                    iVar1 = of_property_read_variable_u32_array
                                      (*(arg1 + 0x300),"hyplog-address-offset",&uStack_80,1,0);
                    if (iVar1 < 0) {
                        pcVar8 = "hyplog address offset is not defined\n";
code_r0x08003c1c:
                        _dev_err(iVar7,pcVar8);
                        uVar10 = 0xffffffea;
code_r0x08003c28:
                        pcVar8 = "%s: fail to get hypdbg_base ret %d\n";
                    }
                    else {
                        iVar1 = of_property_read_variable_u32_array
                                          (*(arg1 + 0x300),"hyplog-size-offset",&uStack_6c,1,0);
                        if (iVar1 < 0) {
                            pcVar8 = "hyplog size offset is not defined\n";
                            goto code_r0x08003c1c;
                        }
                        uVar11 = sym.readl_relaxed(iVar3 + (uStack_80 & 0xffffffff));
                        uStack_78 = uVar11 & 0xffffffff;
                        *0x8000250 = sym.readl_relaxed(iVar3 + uStack_6c);
                        _obj.enc_tzlog_info = devm_ioremap(iVar7,uVar11 & 0xffffffff,*0x8000250);
                        if (_obj.enc_tzlog_info == 0) {
                            _dev_err(iVar7,"ERROR could not ioremap: start=%pr, len=%u\n",&uStack_78);
                            uVar10 = 0xfffffffa;
                            goto code_r0x08003c28;
                        }
                        uVar11 = __kmalloc(*0x8000250,0xdc0);
                        if (uVar11 == 0) {
                            uVar10 = 0xfffffff4;
                            goto code_r0x08003c28;
                        }
                        uVar10 = *(arg1 + 0x300);
                        *(uVar11 + 0xc) = 0;
                        uStack_78 = uStack_78 & 0xffffffff00000000;
                        uStack_80 = uStack_80 & 0xffffffff00000000;
                        _segment.ehdr = uVar11;
                        iVar1 = of_property_read_variable_u32_array(uVar10,"rmlog-address",&uStack_78,1,0);
                        if (iVar1 < 0) {
                            pcVar8 = "RM log address is not defined\n";
code_r0x08003eb4:
                            _dev_err(iVar7,pcVar8);
                            _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
                            puVar5 = _segment.ehdr;
                            goto code_r0x080038a4;
                        }
                        iVar1 = of_property_read_variable_u32_array(*(arg1 + 0x300),"rmlog-size",&uStack_80,1,0);
                        if (iVar1 < 0) {
                            pcVar8 = "RM log size is not defined\n";
                            goto code_r0x08003eb4;
                        }
                        _segment.ehdr = CONCAT44(*0x8000004,uStack_80);
                        if (uStack_80 == 0) {
                            *0x80000c0 = 0;
                            _obj.qseelog_buf_size = 0;
                            _dev_err(iVar7,"RM log size is %d\n");
                            puVar5 = _segment.ehdr;
                            goto code_r0x080038a4;
                        }
                        _segment.ehdr = devm_ioremap(iVar7,uStack_78 & 0xffffffff);
                        if (_segment.ehdr == NULL) {
                            _dev_err(iVar7,"ERROR could not ioremap: start=%pr, len=%u\n",uStack_78 & 0xffffffff,0);
                            uVar10 = 0xfffffffa;
                            pcVar8 = "%s: fail to get rmlog_base ret %d\n";
                        }
                        else {
                            puVar5 = __kmalloc(_segment.ehdr & 0xffffffff,0xdc0);
                            if (puVar5 != NULL) goto code_r0x080038a4;
                            uVar10 = 0xfffffff4;
                            pcVar8 = "%s: fail to get rmlog_base ret %d\n";
                        }
                    }
                    _dev_err(iVar7,pcVar8,"tz_log_probe",uVar10);
                    iVar1 = -0x16;
                    goto code_r0x08003778;
                }
                _dev_info(iVar7,"Hyp log service not support\n");
                puVar5 = _segment.ehdr;
            }
code_r0x080038a4:
            _segment.ehdr = puVar5;
            uVar11 = sym.readl_relaxed(iVar3);
            uStack_78 = 0;
            uStack_80 = uVar11 & 0xffffffff;
            iVar1 = qcom_scm_query_encrypted_log_feature(&uStack_78);
            if (iVar1 == 0) {
                _printk(0x8000fd8,uStack_78);
                *0x8000260 = uStack_78 != 0;
                if (uStack_78 == 0) goto code_r0x0800396c;
                if ((*0x8000268 == 9) && (3 < *0x8000264)) {
                    *0x8000262 = 1;
                }
                puVar5 = _segment.ehdr;
                if (*(arg1 + 0x300) != 0) {
                    iVar3 = of_find_property(*(arg1 + 0x300),"qcom,full-encrypted-tz-logs-enabled",0);
                    *0x8000263 = iVar3 != 0;
                    puVar5 = _segment.ehdr;
                }
            }
            else {
                if (iVar1 == -5) {
                    _printk(0x80003ac,0xfffffffb);
                }
                else {
                    _printk(0x8000ce2,iVar1);
                }
                *0x8000260 = false;
code_r0x0800396c:
                puVar5 = devm_ioremap(iVar7,uVar11 & 0xffffffff,_segment.ehdr & 0xffffffff);
                uVar11 = _segment.ehdr & 0xffffffff;
                _segment.ehdr = puVar5;
                if (puVar5 == NULL) {
                    pcVar8 = "%s: could not ioremap: start=%pr, len=%u\n";
                    goto code_r0x08003770;
                }
                puVar5 = __kmalloc(uVar11,0xdc0);
                if (puVar5 == NULL) {
                    iVar1 = -0xc;
                    goto code_r0x08003778;
                }
            }
            _segment.ehdr = puVar5;
            uStack_78 = CONCAT44(uStack_78._4_4_,3);
            uStack_6c = 6;
            if (*0x8000261 == '\0') {
                uVar11 = 0x8000;
code_r0x08003a10:
                _segment.ehdr = CONCAT44(*0x8000004,uVar11);
            }
            else {
                iVar1 = of_property_read_variable_u32_array
                                  (*(arg1 + 0x300),"qseelog-buf-size-v2",obj.qseelog_buf_size,1,0);
                if (iVar1 < 0) {
                    uVar11 = 0x20000;
                    goto code_r0x08003a10;
                }
                uVar11 = _segment.ehdr & 0xffffffff;
            }
            puVar5 = dma_alloc_attrs(iVar7,uVar11,obj.coh_pmem,0xcc0,0);
            if (puVar5 != NULL) {
                if ((*0x8000260 == '\0') &&
                   (iVar1 = qtee_shmbridge_register
                                      (_segment.ehdr,_segment.ehdr & 0xffffffff,&uStack_78,&uStack_6c,1,6,
                                       obj.qseelog_shmbridge_handle), iVar1 != 0)) {
                    _printk(0x8000d91);
                }
                else {
                    _segment.ehdr = puVar5;
                    *puVar5 = 0;
                    iVar1 = qcom_scm_register_qsee_log_buf(_segment.ehdr,puVar5 & 0xffffffff);
                    if (iVar1 == 0) {
                        uStack_78 = CONCAT44(uStack_78._4_4_,3);
                        uStack_6c = 6;
                        if (*0x8000260 == '\0') {
code_r0x08003b48:
                            if (_segment.ehdr >> 0x1e == 0) {
                                iVar3 = (_segment.ehdr & 0xffffffff) << 2;
                                _segment.ehdr = CONCAT44(*0x8000004,iVar3);
                                _segment.ehdr = dma_alloc_attrs(iVar7,iVar3,obj.disp_buf_paddr,0xcc0,0);
                                if (_segment.ehdr != NULL) {
                                    iVar3 = proc_mkdir("tzdbg",0);
                                    if (iVar3 != 0) {
                                        iVar4 = 0;
                                        uVar12 = 0xfffffff9;
                                        do {
                                            *(obj.coh_pmem + iVar4) = uVar12 + 7;
                                            if (((*0x8000258 != '\0') || (2 < uVar12)) &&
                                               (iVar6 = proc_create_data(*(iVar4 * 8 + 0x8000120),0x124,iVar3,
                                                                         obj.debug_rw_buf_size,obj.coh_pmem + iVar4),
                                               iVar6 == 0)) {
                                                _dev_err(iVar7,"TZ proc_create_data failed\n");
                                                remove_proc_entry("tzdbg",0);
                                                goto code_r0x08003e04;
                                            }
                                            iVar4 = iVar4 + 4;
                                            uVar12 = uVar12 + 1;
                                        } while (iVar4 != 0x28);
                                        iVar1 = 0;
                                        *(arg1 + 0xa8) = iVar3;
                                        goto code_r0x08003778;
                                    }
                                    _dev_err(iVar7,"tzdbg proc_mkdir failed\n");
code_r0x08003e04:
                                    dma_free_attrs(iVar7,_segment.ehdr & 0xffffffff,_segment.ehdr,_segment.ehdr,0);
                                }
                                qtee_shmbridge_deregister(*0x80000d0);
                                dma_free_attrs(iVar7,*0x80000c8,*0x80000c0,_obj.enc_tzlog_info,0);
                                qtee_shmbridge_deregister(_obj.tzdbg);
                                dma_free_attrs(iVar7,*0x80000a8,*0x80000a0,_obj.enc_qseelog_info,0);
                            }
                            else {
                                _printk(0x80004d1);
                            }
                        }
                        else {
                            *0x80000a8 = (_segment.ehdr & 0xffffffff) + 0x1000;
                            *0x80000a0 = dma_alloc_attrs(iVar7,*0x80000a8,obj.enc_qseelog_info,0xcc0,0);
                            if (*0x80000a0 != 0) {
                                iVar1 = qtee_shmbridge_register
                                                  (_obj.enc_qseelog_info,*0x80000a8,&uStack_78,&uStack_6c,1,6,
                                                   obj.tzdbg);
                                if (iVar1 == 0) {
                                    *0x80000c8 = _segment.ehdr & 0xffffffff;
                                    *0x80000c0 = dma_alloc_attrs(iVar7,*0x80000c8,obj.enc_tzlog_info,0xcc0,0);
                                    if (*0x80000c0 != 0) {
                                        iVar1 = qtee_shmbridge_register
                                                          (_obj.enc_tzlog_info,*0x80000c8,&uStack_78,&uStack_6c,1,6
                                                           ,0x80000d0);
                                        if (iVar1 == 0) goto code_r0x08003b48;
                                        _printk(0x8000dc3,iVar1);
                                        dma_free_attrs(iVar7,*0x80000c8,*0x80000c0,_obj.enc_tzlog_info,0);
                                    }
                                    qtee_shmbridge_deregister(_segment.ehdr);
                                }
                                else {
                                    _printk(0x80007c6,iVar1);
                                }
                                dma_free_attrs(iVar7,*0x80000a8,*0x80000a0,_obj.enc_qseelog_info,0);
                            }
                            _dev_err(iVar7,"Failed to allocate encrypted log buffer\n","tz_log_probe");
                        }
                    }
                    else {
                        _printk(0x8000e91,"tzdbg_register_qsee_log_buf",iVar1);
                    }
                    if (*0x8000260 == '\0') {
                        qtee_shmbridge_deregister(_segment.ehdr);
                    }
                }
                dma_free_attrs(iVar7,_segment.ehdr & 0xffffffff,_segment.ehdr,_segment.ehdr,0);
            }
            if (*0x8000260 == '\0') {
                kfree(_segment.ehdr);
            }
        }
    }
    iVar1 = -6;
code_r0x08003778:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_68) {
        iVar7 = __stack_chk_fail();
        *extraout_x18 = sym.tz_log_remove;
        if (*(iVar7 + 0xa8) != 0) {
            remove_proc_entry("tzdbg",0);
        }
        iVar7 = iVar7 + 0x10;
        dma_free_attrs(iVar7,_segment.ehdr & 0xffffffff,_obj.disp_buf_paddr,_segment.ehdr,0);
        qtee_shmbridge_deregister(*0x80000d0);
        dma_free_attrs(iVar7,*0x80000c8,*0x80000c0,_obj.enc_tzlog_info,0);
        qtee_shmbridge_deregister(_obj.tzdbg);
        dma_free_attrs(iVar7,*0x80000a8,*0x80000a0,_obj.enc_qseelog_info,0);
        if (*0x8000260 == '\0') {
            qtee_shmbridge_deregister(_segment.ehdr);
        }
        dma_free_attrs(iVar7,_segment.ehdr & 0xffffffff,_segment.ehdr,_segment.ehdr,0);
        if (*0x8000260 == '\0') {
            kfree(_segment.ehdr);
        }
        return 0;
    }
    return iVar1;
}


// ===== sym.tz_log_remove @ 0x08003f38 (size 276) =====

ulong sym.tz_log_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0xa8) != 0) {
        remove_proc_entry("tzdbg",0);
    }
    arg1 = arg1 + 0x10;
    dma_free_attrs(arg1,_segment.ehdr,_obj.disp_buf_paddr,CONCAT44(*0x8000004,_segment.ehdr),0);
    qtee_shmbridge_deregister(*0x80000d0);
    dma_free_attrs(arg1,*0x80000c8,*0x80000c0,_obj.enc_tzlog_info,0);
    qtee_shmbridge_deregister(_obj.tzdbg);
    dma_free_attrs(arg1,*0x80000a8,*0x80000a0,_obj.enc_qseelog_info,0);
    if (*0x8000260 == '\0') {
        qtee_shmbridge_deregister(CONCAT44(*0x8000004,_segment.ehdr));
    }
    dma_free_attrs(arg1,_segment.ehdr,CONCAT44(*0x8000004,_segment.ehdr),CONCAT44(*0x8000004,_segment.ehdr),0);
    if (*0x8000260 == '\0') {
        kfree(CONCAT44(*0x8000004,_segment.ehdr));
    }
    return 0;
}


// ===== sym.readl_relaxed @ 0x0800404c (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8004050);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x8004084);
    return uVar1;
}


// ===== sym.__cfi_check_fail @ 0x080040bc (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08004100

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
    //switch table (4 cases) at 0x8000394
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8004114);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08004124 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.tz_log_probe.b45790df8a7b92bdf9877ec0bcfc3661.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08004158 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.tz_log_probe.b45790df8a7b92bdf9877ec0bcfc3661.cfi_jt);
    return;
}

